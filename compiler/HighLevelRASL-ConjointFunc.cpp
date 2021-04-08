// This file automatically generated from 'HighLevelRASL-ConjointFunc.ref'
// Don't edit! Edit 'HighLevelRASL-ConjointFunc.ref' and recompile it

#include "refalrts.h"

#define cookie_ns cookie_ns_2978208702_1997380521
#define COOKIE1_ 2978208702U
#define COOKIE2_ 1997380521U

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
  efunc_gen_FindDivisionAndGenerate_Z1 = 18,
  efunc_gen_HighLevelRASLm_Functionm_Conjoint_A3 = 19,
  efunc_GenPattern = 20,
  efunc_gen_HighLevelRASLm_Functionm_Conjoint_A2 = 21,
  efunc_gen_Map_Z1 = 22,
  efunc_gen_HighLevelRASLm_Functionm_Conjoint_A1 = 23,
  efunc_Max = 24,
  efunc_gen_FindDivisionAndGenerate_B1S1A3 = 25,
  efunc_gen_FindDivisionAndGenerate_B1S1A2 = 26,
  efunc_FindDivisionAndGenerate = 27,
  efunc_gen_FindDivisionAndGenerate_B1S1A1 = 28,
  efunc_GenerateGroupWithGCGSubst = 29,
  efunc_GenerateSingleSentence = 30,
  efunc_gen_DoMapAccum_Z1 = 31,
  efunc_gen_GenerateGroupWithGCGSubst_S2A1 = 32,
  efunc_gen_FindDivisionAndGenerate_B1 = 33,
  efunc_FindDivision = 34,
  efunc_gen_GenerateGroupWithGCGSubst_S2A4 = 35,
  efunc_gen_GenerateGroupWithGCGSubst_S2A3 = 36,
  efunc_gen_Map_Z2 = 37,
  efunc_CodeForSubst = 38,
  efunc_gen_GenerateGroupWithGCGSubst_S2A2 = 39,
  efunc_MakeSavers = 40,
  efunc_gen_CodeForSubst_A2 = 41,
  efunc_ComposeVars = 42,
  efunc_gen_CodeForSubst_A1 = 43,
  efunc_gen_GenerateSingleSentence_A2 = 44,
  efunc_GenResult = 45,
  efunc_gen_GenerateSingleSentence_A1 = 46,
  efunc_gen_ComposeVars_S1A1 = 47,
  efunc_gen_ComposeVars_S1A1B1 = 48,
  efunc_gen_DoMapAccum_Z2 = 49,
  efunc_gen_Map_Z5 = 50,
  efunc_gen_DoFindDivision_S3A1Z1 = 51,
  efunc_gen_Map_Z4 = 52,
  efunc_gen_ImagedSentence_A1 = 53,
  efunc_gen_ImagedSentence_D1 = 54,
  efunc_gen_DoFindDivision_Z0 = 55,
  efunc_gen_Map_Z3 = 56,
  efunc_gen_FindDivision_A3 = 57,
  efunc_gen_FindDivision_C1 = 58,
  efunc_gen_FindDivision_A2 = 59,
  efunc_ImagedSentence = 60,
  efunc_DoFindDivision = 61,
  efunc_gen_DoFindDivision_S3B1 = 62,
  efunc_Substm_Generalization = 63,
  efunc_gen_DoFindDivision_S3A2 = 64,
  efunc_gen_DoFindDivision_S3A1 = 65,
  efunc_NarrowSubst = 66,
  efunc_gen_NarrowSubst_S1A1 = 67,
  efunc_GenericMatch = 68,
  efunc_Generalization = 69,
  efunc_Generalizationm_Term = 70,
  efunc_Mu = 71,
  efunc_Up = 72,
  efunc_Evm_met = 73,
  efunc_Residue = 74,
  efunc_u_u_Metau_Residue = 75,
  efunc_MapAccum = 76,
  efunc_UnBracket = 77,
  efunc_DelAccumulator = 78,
  efunc_Inc = 79,
  efunc_Dec = 80,
  efunc_HighLevelRASLm_Functionm_Conjoint = 81,
  efunc_EnumerateVarsRec = 82,
  efunc_EnumerateVarsm_Subst = 83,
  efunc_MAXm_GROUPm_LEN = 84,
  efunc_MakeTrivialSubstImage = 85,
  efunc_NarrowSentenceSubstitutions = 86,
  efunc_Substm_BuildImage = 87,
  efunc_Substm_Collapse = 88,
  efunc_gen_Apply_Z4 = 89,
  efunc_gen_FindDivisionAndGenerate_B1Z1 = 90,
  efunc_gen_FindDivisionAndGenerate_Z0 = 91,
  efunc_gen_HighLevelRASLm_Functionm_Conjoint_A1L1D1 = 92,
  efunc_gen_Map_Z0 = 93,
  efunc_gen_HighLevelRASLm_Functionm_Conjoint_A1L1Z0 = 94,
  efunc_gen_NarrowSentenceSubstitutions_L1D1 = 95,
  efunc_gen_NarrowSentenceSubstitutions_L1Z0 = 96,
  efunc_gen_DoMapAccum_S1A1Z1 = 97,
  efunc_gen_EnumerateVarsm_Subst_L1A1 = 98,
  efunc_gen_EnumerateVarsm_Subst_L1D1 = 99,
  efunc_gen_DoMapAccum_Z0 = 100,
  efunc_gen_EnumerateVarsm_Subst_L1Z0 = 101,
  efunc_Symb = 102,
  efunc_gen_DoMapAccum_S1A1Z2 = 103,
  efunc_gen_EnumerateVarsRec_L1S2A1 = 104,
  efunc_gen_EnumerateVarsRec_L1S3A1 = 105,
  efunc_gen_EnumerateVarsRec_L1D4 = 106,
  efunc_gen_EnumerateVarsRec_L1Z0 = 107,
  efunc_gen_MakeTrivialSubstImage_L1D2 = 108,
  efunc_gen_MakeTrivialSubstImage_L1Z0 = 109,
  efunc_BuildImage = 110,
  efunc_BuildImagem_Term = 111,
  efunc_gen_Substm_BuildImage_L1D2 = 112,
  efunc_gen_Substm_BuildImage_L1Z0 = 113,
  efunc_Collapse = 114,
  efunc_Collapsem_Term = 115,
  efunc_gen_Substm_Collapse_L1D3 = 116,
  efunc_gen_Substm_Collapse_L1Z0 = 117,
  efunc_gen_FindDivisionAndGenerate_B1S1A1Z1 = 118,
  efunc_gen_GenerateGroupWithGCGSubst_S2A1Z1 = 119,
  efunc_gen_GenerateGroupWithGCGSubst_S2A1Z2 = 120,
  efunc_gen_FindDivisionAndGenerate_B1Z0 = 121,
  efunc_gen_DoMapAccum_S1A1Z0 = 122,
  efunc_gen_DoFindDivision_S3A2Z1 = 123,
  efunc_gen_DoFindDivision_S3A1Z0 = 124,
  efunc_gen_FindDivisionAndGenerate_B1S1A1Z0 = 125,
  efunc_gen_DoFindDivision_S3B1Z1 = 126,
  efunc_gen_DoFindDivision_S3A2Z0 = 127,
  efunc_gen_CodeForSubst_A1Z1 = 128,
  efunc_gen_GenerateGroupWithGCGSubst_S2A2Z1 = 129,
  efunc_gen_GenerateGroupWithGCGSubst_S2A1Z0 = 130,
  efunc_gen_CodeForSubst_A1Z2 = 131,
  efunc_gen_GenerateGroupWithGCGSubst_S2A2Z2 = 132,
  efunc_gen_DoFindDivision_S3B1Z0 = 133,
  efunc_gen_GenerateGroupWithGCGSubst_S2A3Z1 = 134,
  efunc_gen_GenerateGroupWithGCGSubst_S2A2Z0 = 135,
  efunc_gen_GenerateGroupWithGCGSubst_S2A3Z2 = 136,
  efunc_gen_CodeForSubst_A1Z0 = 137,
  efunc_gen_FindDivisionAndGenerate_Z2 = 138,
  efunc_gen_GenerateGroupWithGCGSubst_S2A3Z0 = 139,
  efunc_gen_FindDivisionAndGenerate_Z3 = 140,
  efunc_gen_FindDivisionAndGenerate_B1Z2 = 141,
  efunc_gen_FindDivisionAndGenerate_B1Z3 = 142,
  efunc_gen_FindDivisionAndGenerate_B1S1A1Z2 = 143,
  efunc_gen_FindDivisionAndGenerate_B1S1A1Z3 = 144,
};


enum ident {
  ident_CmdOpenELoop = 0,
  ident_CmdFail = 1,
  ident_Function = 2,
  ident_CmdIssueMemory = 3,
  ident_Var = 4,
  ident_CmdSentence = 5,
  ident_ForGroup = 6,
  ident_ForAllSentences = 7,
  ident_Junk = 8,
  ident_S = 9,
  ident_T = 10,
  ident_E = 11,
  ident_Brackets = 12,
  ident_ADTm_Brackets = 13,
  ident_Clear = 14,
  ident_Mu = 15,
  ident_Up = 16,
  ident_Evm_met = 17,
  ident_Residue = 18,
  ident_u_u_Metau_Residue = 19,
  ident_Apply = 20,
  ident_Map = 21,
  ident_Reduce = 22,
  ident_Fetch = 23,
  ident_MapAccum = 24,
  ident_DoMapAccum = 25,
  ident_UnBracket = 26,
  ident_DelAccumulator = 27,
  ident_Inc = 28,
  ident_Dec = 29,
  ident_Pipe = 30,
  ident_HighLevelRASLm_Functionm_Conjoint = 31,
  ident_FindDivisionAndGenerate = 32,
  ident_GenerateGroupWithGCGSubst = 33,
  ident_CodeForSubst = 34,
  ident_GenerateSingleSentence = 35,
  ident_ComposeVars = 36,
  ident_EnumerateVarsRec = 37,
  ident_EnumerateVarsm_Subst = 38,
  ident_FindDivision = 39,
  ident_MAXm_GROUPm_LEN = 40,
  ident_ImagedSentence = 41,
  ident_MakeTrivialSubstImage = 42,
  ident_DoFindDivision = 43,
  ident_NarrowSentenceSubstitutions = 44,
  ident_NarrowSubst = 45,
  ident_Substm_BuildImage = 46,
  ident_Substm_Generalization = 47,
  ident_Substm_Collapse = 48,
  ident_MN = 49,
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


static refalrts::FnResult func_gen_HighLevelRASLm_Functionm_Conjoint_A3(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 30 elems
  refalrts::Iter context[30];
  refalrts::zeros( context, 30 );
  // </0 & HighLevelRASL-Function-Conjoint=3/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & HighLevelRASL-Function-Conjoint=3/4 s.new1/5 (/8 e.new2/6 )/9 (/12 e.new3/10 )/13 s.new4/14 e.new5/2 >/1
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
  if( ! refalrts::svar_left( context[14], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new5 as range 2
  do {
    // </0 & HighLevelRASL-Function-Conjoint=3/4 s.ScopeClass/5 (/8 e.Name/15 )/9 (/12 e.CommonMatchCommands/17 )/13 s.MaxContextSize/14 e./19 (/23 # CmdOpenELoop/25 e.1/21 )/24 >/1
    context[15] = context[6];
    context[16] = context[7];
    context[17] = context[10];
    context[18] = context[11];
    context[19] = context[2];
    context[20] = context[3];
    context[21] = 0;
    context[22] = 0;
    context[23] = refalrts::brackets_right( context[21], context[22], context[19], context[20] );
    if( ! context[23] )
      continue;
    refalrts::bracket_pointers(context[23], context[24]);
    context[25] = refalrts::ident_left( identifiers[ident_CmdOpenELoop], context[21], context[22] );
    if( ! context[25] )
      continue;
    // closed e.Name as range 15
    // closed e.CommonMatchCommands as range 17
    // closed e. as range 19
    // closed e.1 as range 21
    //DEBUG: s.ScopeClass: 5
    //DEBUG: s.MaxContextSize: 14
    //DEBUG: e.Name: 15
    //DEBUG: e.CommonMatchCommands: 17
    //DEBUG: e.: 19
    //DEBUG: e.1: 21

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # Function/4 AsIs: s.ScopeClass/5 AsIs: (/8 AsIs: e.Name/15 AsIs: )/9 AsIs: (/12 } Tile{ HalfReuse: # CmdIssueMemory/13 AsIs: s.MaxContextSize/14 } )/26 Tile{ AsIs: e.CommonMatchCommands/17 } Tile{ AsIs: e./19 } Tile{ AsIs: (/23 AsIs: # CmdOpenELoop/25 AsIs: e.1/21 AsIs: )/24 HalfReuse: (/1 } # CmdFail/27 )/28 )/29 Tile{ ]] }
    refalrts::alloc_close_bracket(vm, context[26]);
    refalrts::alloc_ident(vm, context[27], identifiers[ident_CmdFail]);
    refalrts::alloc_close_bracket(vm, context[28]);
    refalrts::alloc_close_bracket(vm, context[29]);
    refalrts::reinit_open_bracket(context[0]);
    refalrts::reinit_ident(context[4], identifiers[ident_Function]);
    refalrts::reinit_ident(context[13], identifiers[ident_CmdIssueMemory]);
    refalrts::reinit_open_bracket(context[1]);
    refalrts::link_brackets( context[0], context[29] );
    refalrts::link_brackets( context[1], context[28] );
    refalrts::link_brackets( context[23], context[24] );
    refalrts::link_brackets( context[12], context[26] );
    refalrts::link_brackets( context[8], context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[27], context[29] );
    res = refalrts::splice_evar( res, context[23], context[1] );
    res = refalrts::splice_evar( res, context[19], context[20] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_elem( res, context[26] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & HighLevelRASL-Function-Conjoint=3/4 s.ScopeClass/5 (/8 e.Name/6 )/9 (/12 e.CommonMatchCommands/10 )/13 s.MaxContextSize/14 e.ResultCommands/2 >/1
  // closed e.Name as range 6
  // closed e.CommonMatchCommands as range 10
  // closed e.ResultCommands as range 2
  //DEBUG: s.ScopeClass: 5
  //DEBUG: s.MaxContextSize: 14
  //DEBUG: e.Name: 6
  //DEBUG: e.CommonMatchCommands: 10
  //DEBUG: e.ResultCommands: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # Function/4 AsIs: s.ScopeClass/5 AsIs: (/8 AsIs: e.Name/6 AsIs: )/9 AsIs: (/12 } Tile{ HalfReuse: # CmdIssueMemory/13 AsIs: s.MaxContextSize/14 } )/15 Tile{ AsIs: e.CommonMatchCommands/10 } Tile{ AsIs: e.ResultCommands/2 } Tile{ HalfReuse: )/1 ]] }
  refalrts::alloc_close_bracket(vm, context[15]);
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_ident(context[4], identifiers[ident_Function]);
  refalrts::reinit_ident(context[13], identifiers[ident_CmdIssueMemory]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[0], context[1] );
  refalrts::link_brackets( context[12], context[15] );
  refalrts::link_brackets( context[8], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[10], context[11] );
  res = refalrts::splice_elem( res, context[15] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_HighLevelRASLm_Functionm_Conjoint_A3("HighLevelRASL-Function-Conjoint=3", COOKIE1_, COOKIE2_, func_gen_HighLevelRASLm_Functionm_Conjoint_A3);


static refalrts::FnResult func_gen_HighLevelRASLm_Functionm_Conjoint_A2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 27 elems
  refalrts::Iter context[27];
  refalrts::zeros( context, 27 );
  // </0 & HighLevelRASL-Function-Conjoint=2/4 s.ScopeClass/5 (/8 e.Name/6 )/9 s.FnGenSubst/10 s.FnGenResult/11 (/14 e.SentencesWithSubst/12 )/15 s.ContextSize/16 (/19 e.Vars/17 )/20 (/23 e.MarkedPattern/21 )/24 e.CommonMatchCommands/2 >/1
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
  context[12] = 0;
  context[13] = 0;
  context[14] = refalrts::brackets_left( context[12], context[13], context[2], context[3] );
  if( ! context[14] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[14], context[15]);
  // closed e.SentencesWithSubst as range 12
  if( ! refalrts::svar_left( context[16], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
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
  // closed e.Vars as range 17
  // closed e.MarkedPattern as range 21
  // closed e.CommonMatchCommands as range 2
  //DEBUG: s.ScopeClass: 5
  //DEBUG: e.Name: 6
  //DEBUG: s.FnGenSubst: 10
  //DEBUG: s.FnGenResult: 11
  //DEBUG: e.SentencesWithSubst: 12
  //DEBUG: s.ContextSize: 16
  //DEBUG: e.Vars: 17
  //DEBUG: e.MarkedPattern: 21
  //DEBUG: e.CommonMatchCommands: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} s.FnGenResult/11 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.Vars/17 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & HighLevelRASL-Function-Conjoint=3/4 AsIs: s.ScopeClass/5 AsIs: (/8 AsIs: e.Name/6 AsIs: )/9 } Tile{ AsIs: (/14 } Tile{ AsIs: e.CommonMatchCommands/2 } Tile{ AsIs: )/15 } </25 & FindDivisionAndGenerate@1/26 Tile{ AsIs: s.FnGenSubst/10 } Tile{ HalfReuse: s.FnGenResult11 /20 AsIs: (/23 AsIs: e.MarkedPattern/21 AsIs: )/24 } Tile{ AsIs: e.SentencesWithSubst/12 } Tile{ AsIs: s.ContextSize/16 HalfReuse: >/19 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[25]);
  refalrts::alloc_name(vm, context[26], functions[efunc_gen_FindDivisionAndGenerate_Z1]);
  refalrts::update_name(context[4], functions[efunc_gen_HighLevelRASLm_Functionm_Conjoint_A3]);
  refalrts::reinit_svar( context[20], context[11] );
  refalrts::reinit_close_call(context[19]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[19] );
  refalrts::push_stack( vm, context[25] );
  refalrts::link_brackets( context[23], context[24] );
  refalrts::link_brackets( context[14], context[15] );
  refalrts::link_brackets( context[8], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[16], context[19] );
  res = refalrts::splice_evar( res, context[12], context[13] );
  res = refalrts::splice_evar( res, context[20], context[24] );
  res = refalrts::splice_elem( res, context[10] );
  res = refalrts::splice_evar( res, context[25], context[26] );
  res = refalrts::splice_elem( res, context[15] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_elem( res, context[14] );
  refalrts::splice_to_freelist_open( vm, context[9], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_HighLevelRASLm_Functionm_Conjoint_A2("HighLevelRASL-Function-Conjoint=2", COOKIE1_, COOKIE2_, func_gen_HighLevelRASLm_Functionm_Conjoint_A2);


static refalrts::FnResult func_gen_HighLevelRASLm_Functionm_Conjoint_A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 27 elems
  refalrts::Iter context[27];
  refalrts::zeros( context, 27 );
  // </0 & HighLevelRASL-Function-Conjoint=1/4 s.ScopeClass/5 (/8 e.Name/6 )/9 s.FnGenSubst/10 s.FnGenResult/11 e.SentencesWithSubst/2 >/1
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
  // closed e.SentencesWithSubst as range 2
  //DEBUG: s.ScopeClass: 5
  //DEBUG: e.Name: 6
  //DEBUG: s.FnGenSubst: 10
  //DEBUG: s.FnGenResult: 11
  //DEBUG: e.SentencesWithSubst: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & HighLevelRASL-Function-Conjoint=2/4 AsIs: s.ScopeClass/5 AsIs: (/8 AsIs: e.Name/6 AsIs: )/9 AsIs: s.FnGenSubst/10 AsIs: s.FnGenResult/11 } (/12 Tile{ AsIs: e.SentencesWithSubst/2 } )/13 </14 & GenPattern/15 s.FnGenSubst/10/16 (/17 e.Name/6/18 )/20 (/21 # Var/22"enew"/23 )/25 >/26 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[12]);
  refalrts::alloc_close_bracket(vm, context[13]);
  refalrts::alloc_open_call(vm, context[14]);
  refalrts::alloc_name(vm, context[15], functions[efunc_GenPattern]);
  refalrts::copy_stvar(vm, context[16], context[10]);
  refalrts::alloc_open_bracket(vm, context[17]);
  refalrts::copy_evar(vm, context[18], context[19], context[6], context[7]);
  refalrts::alloc_close_bracket(vm, context[20]);
  refalrts::alloc_open_bracket(vm, context[21]);
  refalrts::alloc_ident(vm, context[22], identifiers[ident_Var]);
  refalrts::alloc_chars(vm, context[23], context[24], "enew", 4);
  refalrts::alloc_close_bracket(vm, context[25]);
  refalrts::alloc_close_call(vm, context[26]);
  refalrts::update_name(context[4], functions[efunc_gen_HighLevelRASLm_Functionm_Conjoint_A2]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[26] );
  refalrts::push_stack( vm, context[14] );
  refalrts::link_brackets( context[21], context[25] );
  refalrts::link_brackets( context[17], context[20] );
  refalrts::link_brackets( context[12], context[13] );
  refalrts::link_brackets( context[8], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[13], context[26] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_elem( res, context[12] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_HighLevelRASLm_Functionm_Conjoint_A1("HighLevelRASL-Function-Conjoint=1", COOKIE1_, COOKIE2_, func_gen_HighLevelRASLm_Functionm_Conjoint_A1);


static refalrts::FnResult func_HighLevelRASLm_Functionm_Conjoint(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
  // </0 & HighLevelRASL-Function-Conjoint/4 s.FnGenSubst/5 s.FnGenResult/6 s.ScopeClass/7 (/10 e.Name/8 )/11 e.Sentences/2 >/1
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
  // closed e.Name as range 8
  // closed e.Sentences as range 2
  //DEBUG: s.FnGenSubst: 5
  //DEBUG: s.FnGenResult: 6
  //DEBUG: s.ScopeClass: 7
  //DEBUG: e.Name: 8
  //DEBUG: e.Sentences: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & HighLevelRASL-Function-Conjoint=1/4 } Tile{ AsIs: s.ScopeClass/7 AsIs: (/10 AsIs: e.Name/8 AsIs: )/11 } Tile{ AsIs: s.FnGenSubst/5 AsIs: s.FnGenResult/6 } </12 & Map@1/13 Tile{ AsIs: e.Sentences/2 } >/14 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[12]);
  refalrts::alloc_name(vm, context[13], functions[efunc_gen_Map_Z1]);
  refalrts::alloc_close_call(vm, context[14]);
  refalrts::update_name(context[4], functions[efunc_gen_HighLevelRASLm_Functionm_Conjoint_A1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[14] );
  refalrts::push_stack( vm, context[12] );
  refalrts::link_brackets( context[10], context[11] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_elem( res, context[14] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[12], context[13] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[7], context[11] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_HighLevelRASLm_Functionm_Conjoint("HighLevelRASL-Function-Conjoint", 0U, 0U, func_HighLevelRASLm_Functionm_Conjoint);


static refalrts::FnResult func_gen_FindDivisionAndGenerate_B1S1A3(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  // </0 & FindDivisionAndGenerate:1$1=3/4 (/7 e.FirstPartCommands/5 )/8 (/11 e.SecondPartCommands/9 )/12 s.ContextSize$a/13 >/1
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
  // closed e.FirstPartCommands as range 5
  // closed e.SecondPartCommands as range 9
  if( ! refalrts::svar_left( context[13], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: e.FirstPartCommands: 5
  //DEBUG: e.SecondPartCommands: 9
  //DEBUG: s.ContextSize$a: 13

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} (/11 {REMOVED TILE} )/12 s.ContextSize$a/13 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: s.ContextSize$a13 /0 HalfReuse: (/4 HalfReuse: # CmdSentence/7 AsIs: e.FirstPartCommands/5 AsIs: )/8 } Tile{ AsIs: e.SecondPartCommands/9 } Tile{ ]] }
  refalrts::reinit_svar( context[0], context[13] );
  refalrts::reinit_open_bracket(context[4]);
  refalrts::reinit_ident(context[7], identifiers[ident_CmdSentence]);
  refalrts::link_brackets( context[4], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::splice_to_freelist_open( vm, context[8], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_FindDivisionAndGenerate_B1S1A3("FindDivisionAndGenerate:1$1=3", COOKIE1_, COOKIE2_, func_gen_FindDivisionAndGenerate_B1S1A3);


static refalrts::FnResult func_gen_FindDivisionAndGenerate_B1S1A2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
  // </0 & FindDivisionAndGenerate:1$1=2/4 (/7 e.FirstPartCommands/5 )/8 s.FirstPartContext/9 s.SecondPartContext/10 e.SecondPartCommands/2 >/1
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
  // closed e.FirstPartCommands as range 5
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.SecondPartCommands as range 2
  //DEBUG: e.FirstPartCommands: 5
  //DEBUG: s.FirstPartContext: 9
  //DEBUG: s.SecondPartContext: 10
  //DEBUG: e.SecondPartCommands: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & FindDivisionAndGenerate:1$1=3/4 AsIs: (/7 AsIs: e.FirstPartCommands/5 AsIs: )/8 } (/11 Tile{ AsIs: e.SecondPartCommands/2 } )/12 </13 & Max/14 Tile{ AsIs: s.FirstPartContext/9 AsIs: s.SecondPartContext/10 } >/15 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[11]);
  refalrts::alloc_close_bracket(vm, context[12]);
  refalrts::alloc_open_call(vm, context[13]);
  refalrts::alloc_name(vm, context[14], functions[efunc_Max]);
  refalrts::alloc_close_call(vm, context[15]);
  refalrts::update_name(context[4], functions[efunc_gen_FindDivisionAndGenerate_B1S1A3]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[15] );
  refalrts::push_stack( vm, context[13] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_elem( res, context[15] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[12], context[14] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_elem( res, context[11] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_FindDivisionAndGenerate_B1S1A2("FindDivisionAndGenerate:1$1=2", COOKIE1_, COOKIE2_, func_gen_FindDivisionAndGenerate_B1S1A2);


static refalrts::FnResult func_gen_FindDivisionAndGenerate_B1S1A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 24 elems
  refalrts::Iter context[24];
  refalrts::zeros( context, 24 );
  // </0 & FindDivisionAndGenerate:1$1=1/4 s.FnGenSubst/5 s.FnGenResult/6 (/9 e.MarkedPattern/7 )/10 (/13 e.SecondGroup/11 )/14 s.ContextSize/15 s.BaseNum/16 s.Depth/17 s.FirstPartContext/18 e.FirstPartCommands/2 >/1
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
  context[13] = refalrts::brackets_left( context[11], context[12], context[2], context[3] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[13], context[14]);
  // closed e.MarkedPattern as range 7
  // closed e.SecondGroup as range 11
  if( ! refalrts::svar_left( context[15], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[16], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[17], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[18], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.FirstPartCommands as range 2
  //DEBUG: s.FnGenSubst: 5
  //DEBUG: s.FnGenResult: 6
  //DEBUG: e.MarkedPattern: 7
  //DEBUG: e.SecondGroup: 11
  //DEBUG: s.ContextSize: 15
  //DEBUG: s.BaseNum: 16
  //DEBUG: s.Depth: 17
  //DEBUG: s.FirstPartContext: 18
  //DEBUG: e.FirstPartCommands: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </19 & FindDivisionAndGenerate:1$1=2/20 (/21 Tile{ AsIs: e.FirstPartCommands/2 } )/22 Tile{ AsIs: s.FirstPartContext/18 } Tile{ AsIs: </0 Reuse: & FindDivisionAndGenerate/4 AsIs: s.FnGenSubst/5 AsIs: s.FnGenResult/6 AsIs: (/9 AsIs: e.MarkedPattern/7 AsIs: )/10 AsIs: (/13 AsIs: e.SecondGroup/11 AsIs: )/14 AsIs: s.ContextSize/15 AsIs: s.BaseNum/16 AsIs: s.Depth/17 } >/23 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[19]);
  refalrts::alloc_name(vm, context[20], functions[efunc_gen_FindDivisionAndGenerate_B1S1A2]);
  refalrts::alloc_open_bracket(vm, context[21]);
  refalrts::alloc_close_bracket(vm, context[22]);
  refalrts::alloc_close_call(vm, context[23]);
  refalrts::update_name(context[4], functions[efunc_FindDivisionAndGenerate]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[19] );
  refalrts::push_stack( vm, context[23] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[13], context[14] );
  refalrts::link_brackets( context[9], context[10] );
  refalrts::link_brackets( context[21], context[22] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_elem( res, context[23] );
  res = refalrts::splice_evar( res, context[0], context[17] );
  res = refalrts::splice_elem( res, context[18] );
  res = refalrts::splice_elem( res, context[22] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[19], context[21] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_FindDivisionAndGenerate_B1S1A1("FindDivisionAndGenerate:1$1=1", COOKIE1_, COOKIE2_, func_gen_FindDivisionAndGenerate_B1S1A1);


static refalrts::FnResult func_gen_FindDivisionAndGenerate_B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 52 elems
  refalrts::Iter context[52];
  refalrts::zeros( context, 52 );
  // </0 & FindDivisionAndGenerate:1/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & FindDivisionAndGenerate:1/4 s.new1/5 s.new2/6 (/9 e.new3/7 )/10 s.new4/11 s.new5/12 s.new6/13 s.new7/14 (/17 e.new8/15 )/18 e.new9/2 >/1
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
  if( ! refalrts::svar_left( context[11], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[12], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
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
  // closed e.new8 as range 15
  // closed e.new9 as range 2
  do {
    // </0 & FindDivisionAndGenerate:1/4 s.new10/5 s.new11/6 (/9 e.new18/19 )/10 s.new12/11 s.new13/12 s.new14/13 s.new15/14 (/17 e.new19/21 )/18 (/27 e.new16/25 )/28 e.new17/23 >/1
    context[19] = context[7];
    context[20] = context[8];
    context[21] = context[15];
    context[22] = context[16];
    context[23] = context[2];
    context[24] = context[3];
    context[25] = 0;
    context[26] = 0;
    context[27] = refalrts::brackets_left( context[25], context[26], context[23], context[24] );
    if( ! context[27] )
      continue;
    refalrts::bracket_pointers(context[27], context[28]);
    // closed e.new18 as range 19
    // closed e.new19 as range 21
    // closed e.new16 as range 25
    // closed e.new17 as range 23
    do {
      // </0 & FindDivisionAndGenerate:1/4 s.FnGenSubst/5 s.FnGenResult/6 (/9 e.MarkedPattern/29 )/10 s.ContextSize/11 s.BaseNum/12 s.Depth/13 # ForGroup/14 (/17 e.NewGCG-Subst/31 )/18 (/27 e.FirstGroup/33 )/28 e.SecondGroup/35 >/1
      context[29] = context[19];
      context[30] = context[20];
      context[31] = context[21];
      context[32] = context[22];
      context[33] = context[25];
      context[34] = context[26];
      context[35] = context[23];
      context[36] = context[24];
      if( ! refalrts::ident_term( identifiers[ident_ForGroup], context[14] ) )
        continue;
      // closed e.MarkedPattern as range 29
      // closed e.NewGCG-Subst as range 31
      // closed e.FirstGroup as range 33
      // closed e.SecondGroup as range 35
      //DEBUG: s.FnGenSubst: 5
      //DEBUG: s.FnGenResult: 6
      //DEBUG: s.ContextSize: 11
      //DEBUG: s.BaseNum: 12
      //DEBUG: s.Depth: 13
      //DEBUG: e.MarkedPattern: 29
      //DEBUG: e.NewGCG-Subst: 31
      //DEBUG: e.FirstGroup: 33
      //DEBUG: e.SecondGroup: 35

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & FindDivisionAndGenerate:1$1=1/4 AsIs: s.FnGenSubst/5 AsIs: s.FnGenResult/6 AsIs: (/9 AsIs: e.MarkedPattern/29 AsIs: )/10 } (/37 Tile{ AsIs: e.SecondGroup/35 } )/38 Tile{ AsIs: s.ContextSize/11 AsIs: s.BaseNum/12 AsIs: s.Depth/13 HalfReuse: </14 HalfReuse: & GenerateGroupWithGCGSubst/17 } s.FnGenSubst/5/39 s.FnGenResult/6/40 (/41 e.MarkedPattern/29/42 Tile{ AsIs: )/18 AsIs: (/27 AsIs: e.FirstGroup/33 AsIs: )/28 } s.ContextSize/11/44 s.BaseNum/12/45 </46 & Add/47 1/48 s.Depth/13/49 >/50 Tile{ AsIs: e.NewGCG-Subst/31 } >/51 Tile{ AsIs: >/1 ]] }
      refalrts::alloc_open_bracket(vm, context[37]);
      refalrts::alloc_close_bracket(vm, context[38]);
      refalrts::copy_stvar(vm, context[39], context[5]);
      refalrts::copy_stvar(vm, context[40], context[6]);
      refalrts::alloc_open_bracket(vm, context[41]);
      refalrts::copy_evar(vm, context[42], context[43], context[29], context[30]);
      refalrts::copy_stvar(vm, context[44], context[11]);
      refalrts::copy_stvar(vm, context[45], context[12]);
      refalrts::alloc_open_call(vm, context[46]);
      refalrts::alloc_name(vm, context[47], functions[efunc_Add]);
      refalrts::alloc_number(vm, context[48], 1UL);
      refalrts::copy_stvar(vm, context[49], context[13]);
      refalrts::alloc_close_call(vm, context[50]);
      refalrts::alloc_close_call(vm, context[51]);
      refalrts::update_name(context[4], functions[efunc_gen_FindDivisionAndGenerate_B1S1A1]);
      refalrts::reinit_open_call(context[14]);
      refalrts::reinit_name(context[17], functions[efunc_GenerateGroupWithGCGSubst]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[51] );
      refalrts::push_stack( vm, context[14] );
      refalrts::push_stack( vm, context[50] );
      refalrts::push_stack( vm, context[46] );
      refalrts::link_brackets( context[27], context[28] );
      refalrts::link_brackets( context[41], context[18] );
      refalrts::link_brackets( context[37], context[38] );
      refalrts::link_brackets( context[9], context[10] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_elem( res, context[51] );
      res = refalrts::splice_evar( res, context[31], context[32] );
      res = refalrts::splice_evar( res, context[44], context[50] );
      res = refalrts::splice_evar( res, context[18], context[28] );
      res = refalrts::splice_evar( res, context[42], context[43] );
      res = refalrts::splice_evar( res, context[39], context[41] );
      res = refalrts::splice_evar( res, context[11], context[17] );
      res = refalrts::splice_elem( res, context[38] );
      res = refalrts::splice_evar( res, context[35], context[36] );
      res = refalrts::splice_elem( res, context[37] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & FindDivisionAndGenerate:1/4 s.FnGenSubst/5 s.FnGenResult/6 (/9 e.MarkedPattern/29 )/10 s.ContextSize/11 s.BaseNum/12 s.Depth/13 # ForAllSentences/14 (/17 e.NewGCG-Subst/31 )/18 (/27 e.0/33 )/28 >/1
    context[29] = context[19];
    context[30] = context[20];
    context[31] = context[21];
    context[32] = context[22];
    context[33] = context[25];
    context[34] = context[26];
    if( ! refalrts::ident_term( identifiers[ident_ForAllSentences], context[14] ) )
      continue;
    if( ! refalrts::empty_seq( context[23], context[24] ) )
      continue;
    // closed e.MarkedPattern as range 29
    // closed e.NewGCG-Subst as range 31
    // closed e.0 as range 33
    //DEBUG: s.FnGenSubst: 5
    //DEBUG: s.FnGenResult: 6
    //DEBUG: s.ContextSize: 11
    //DEBUG: s.BaseNum: 12
    //DEBUG: s.Depth: 13
    //DEBUG: e.MarkedPattern: 29
    //DEBUG: e.NewGCG-Subst: 31
    //DEBUG: e.0: 33

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} )/10 s.ContextSize/11 s.BaseNum/12 s.Depth/13 # ForAllSentences/14 {REMOVED TILE} e.NewGCG-Subst/31 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & GenerateSingleSentence/4 AsIs: s.FnGenSubst/5 AsIs: s.FnGenResult/6 HalfReuse: s.ContextSize11 /9 } Tile{ AsIs: (/17 } Tile{ AsIs: e.MarkedPattern/29 } Tile{ AsIs: )/18 HalfReuse: s.Depth13 /27 AsIs: e.0/33 HalfReuse: >/28 } Tile{ ]] }
    refalrts::update_name(context[4], functions[efunc_GenerateSingleSentence]);
    refalrts::reinit_svar( context[9], context[11] );
    refalrts::reinit_svar( context[27], context[13] );
    refalrts::reinit_close_call(context[28]);
    refalrts::push_stack( vm, context[28] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[17], context[18] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[18], context[28] );
    res = refalrts::splice_evar( res, context[29], context[30] );
    res = refalrts::splice_elem( res, context[17] );
    refalrts::splice_to_freelist_open( vm, context[9], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & FindDivisionAndGenerate:1/4 s.FnGenSubst/5 s.FnGenResult/6 (/9 e.MarkedPattern/7 )/10 s.ContextSize/11 s.BaseNum/12 s.Depth/13 # ForAllSentences/14 (/17 e.NewGCG-Subst/15 )/18 e.SentencesWithSubst$a/2 >/1
  if( ! refalrts::ident_term( identifiers[ident_ForAllSentences], context[14] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.MarkedPattern as range 7
  // closed e.NewGCG-Subst as range 15
  // closed e.SentencesWithSubst$a as range 2
  //DEBUG: s.FnGenSubst: 5
  //DEBUG: s.FnGenResult: 6
  //DEBUG: s.ContextSize: 11
  //DEBUG: s.BaseNum: 12
  //DEBUG: s.Depth: 13
  //DEBUG: e.MarkedPattern: 7
  //DEBUG: e.NewGCG-Subst: 15
  //DEBUG: e.SentencesWithSubst$a: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Depth/13 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & GenerateGroupWithGCGSubst$2=1/4 AsIs: s.FnGenSubst/5 AsIs: s.FnGenResult/6 HalfReuse: s.Depth13 /9 } (/19 Tile{ AsIs: e.SentencesWithSubst$a/2 } Tile{ AsIs: )/10 AsIs: s.ContextSize/11 } (/20 Tile{ AsIs: e.MarkedPattern/7 } )/21 </22 & DoMapAccum@1/23 Tile{ AsIs: s.BaseNum/12 } Tile{ HalfReuse: (/14 HalfReuse: )/17 AsIs: e.NewGCG-Subst/15 HalfReuse: >/18 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[19]);
  refalrts::alloc_open_bracket(vm, context[20]);
  refalrts::alloc_close_bracket(vm, context[21]);
  refalrts::alloc_open_call(vm, context[22]);
  refalrts::alloc_name(vm, context[23], functions[efunc_gen_DoMapAccum_Z1]);
  refalrts::update_name(context[4], functions[efunc_gen_GenerateGroupWithGCGSubst_S2A1]);
  refalrts::reinit_svar( context[9], context[13] );
  refalrts::reinit_open_bracket(context[14]);
  refalrts::reinit_close_bracket(context[17]);
  refalrts::reinit_close_call(context[18]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[18] );
  refalrts::push_stack( vm, context[22] );
  refalrts::link_brackets( context[14], context[17] );
  refalrts::link_brackets( context[20], context[21] );
  refalrts::link_brackets( context[19], context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[14], context[18] );
  res = refalrts::splice_elem( res, context[12] );
  res = refalrts::splice_evar( res, context[21], context[23] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_elem( res, context[20] );
  res = refalrts::splice_evar( res, context[10], context[11] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_elem( res, context[19] );
  refalrts::splice_to_freelist_open( vm, context[9], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_FindDivisionAndGenerate_B1("FindDivisionAndGenerate:1", COOKIE1_, COOKIE2_, func_gen_FindDivisionAndGenerate_B1);


static refalrts::FnResult func_FindDivisionAndGenerate(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
  // </0 & FindDivisionAndGenerate/4 s.FnGenSubst/5 s.FnGenResult/6 (/9 e.MarkedPattern/7 )/10 (/13 e.SentencesWithSubst/11 )/14 s.ContextSize/15 s.BaseNum/16 s.Depth/17 >/1
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
  context[13] = refalrts::brackets_left( context[11], context[12], context[2], context[3] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[13], context[14]);
  // closed e.MarkedPattern as range 7
  // closed e.SentencesWithSubst as range 11
  if( ! refalrts::svar_left( context[15], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[16], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[17], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: s.FnGenSubst: 5
  //DEBUG: s.FnGenResult: 6
  //DEBUG: e.MarkedPattern: 7
  //DEBUG: e.SentencesWithSubst: 11
  //DEBUG: s.ContextSize: 15
  //DEBUG: s.BaseNum: 16
  //DEBUG: s.Depth: 17

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.ContextSize/15 {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & FindDivisionAndGenerate:1/4 AsIs: s.FnGenSubst/5 AsIs: s.FnGenResult/6 AsIs: (/9 AsIs: e.MarkedPattern/7 AsIs: )/10 HalfReuse: s.ContextSize15 /13 } Tile{ AsIs: s.BaseNum/16 AsIs: s.Depth/17 HalfReuse: </1 } Tile{ HalfReuse: & FindDivision/14 } Tile{ AsIs: e.SentencesWithSubst/11 } >/18 >/19 Tile{ ]] }
  refalrts::alloc_close_call(vm, context[18]);
  refalrts::alloc_close_call(vm, context[19]);
  refalrts::update_name(context[4], functions[efunc_gen_FindDivisionAndGenerate_B1]);
  refalrts::reinit_svar( context[13], context[15] );
  refalrts::reinit_open_call(context[1]);
  refalrts::reinit_name(context[14], functions[efunc_FindDivision]);
  refalrts::push_stack( vm, context[19] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[18] );
  refalrts::push_stack( vm, context[1] );
  refalrts::link_brackets( context[9], context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[18], context[19] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_elem( res, context[14] );
  res = refalrts::splice_evar( res, context[16], context[1] );
  refalrts::splice_to_freelist_open( vm, context[13], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_FindDivisionAndGenerate("FindDivisionAndGenerate", COOKIE1_, COOKIE2_, func_FindDivisionAndGenerate);


static refalrts::FnResult func_gen_GenerateGroupWithGCGSubst_S2A4(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  // </0 & GenerateGroupWithGCGSubst$2=4/4 (/7 e.GCG-Commands/5 )/8 s.ContextSize$b/9 e.Commands/2 >/1
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
  // closed e.GCG-Commands as range 5
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Commands as range 2
  //DEBUG: e.GCG-Commands: 5
  //DEBUG: s.ContextSize$b: 9
  //DEBUG: e.Commands: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} & GenerateGroupWithGCGSubst$2=4/4 (/7 {REMOVED TILE} )/8 s.ContextSize$b/9 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: s.ContextSize$b9 /0 } Tile{ AsIs: e.GCG-Commands/5 } Tile{ AsIs: e.Commands/2 } Tile{ ]] }
  refalrts::reinit_svar( context[0], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::splice_to_freelist_open( vm, context[0], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_GenerateGroupWithGCGSubst_S2A4("GenerateGroupWithGCGSubst$2=4", COOKIE1_, COOKIE2_, func_gen_GenerateGroupWithGCGSubst_S2A4);


static refalrts::FnResult func_gen_GenerateGroupWithGCGSubst_S2A3(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 23 elems
  refalrts::Iter context[23];
  refalrts::zeros( context, 23 );
  // </0 & GenerateGroupWithGCGSubst$2=3/4 (/7 e.GCG-Commands/5 )/8 s.FnGenSubst/9 s.FnGenResult/10 (/13 e.MarkedPattern$a/11 )/14 s.ContextSize$a/15 s.BaseNum$a/16 s.Depth/17 e.SentencesWithSubst$a/2 >/1
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
  // closed e.GCG-Commands as range 5
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
  // closed e.MarkedPattern$a as range 11
  if( ! refalrts::svar_left( context[15], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[16], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[17], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.SentencesWithSubst$a as range 2
  //DEBUG: e.GCG-Commands: 5
  //DEBUG: s.FnGenSubst: 9
  //DEBUG: s.FnGenResult: 10
  //DEBUG: e.MarkedPattern$a: 11
  //DEBUG: s.ContextSize$a: 15
  //DEBUG: s.BaseNum$a: 16
  //DEBUG: s.Depth: 17
  //DEBUG: e.SentencesWithSubst$a: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & GenerateGroupWithGCGSubst$2=4/4 AsIs: (/7 AsIs: e.GCG-Commands/5 AsIs: )/8 } </18 & FindDivisionAndGenerate/19 Tile{ AsIs: s.FnGenSubst/9 AsIs: s.FnGenResult/10 AsIs: (/13 AsIs: e.MarkedPattern$a/11 AsIs: )/14 } (/20 Tile{ AsIs: e.SentencesWithSubst$a/2 } )/21 Tile{ AsIs: s.ContextSize$a/15 AsIs: s.BaseNum$a/16 AsIs: s.Depth/17 } >/22 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[18]);
  refalrts::alloc_name(vm, context[19], functions[efunc_FindDivisionAndGenerate]);
  refalrts::alloc_open_bracket(vm, context[20]);
  refalrts::alloc_close_bracket(vm, context[21]);
  refalrts::alloc_close_call(vm, context[22]);
  refalrts::update_name(context[4], functions[efunc_gen_GenerateGroupWithGCGSubst_S2A4]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[22] );
  refalrts::push_stack( vm, context[18] );
  refalrts::link_brackets( context[20], context[21] );
  refalrts::link_brackets( context[13], context[14] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_elem( res, context[22] );
  res = refalrts::splice_evar( res, context[15], context[17] );
  res = refalrts::splice_elem( res, context[21] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_elem( res, context[20] );
  res = refalrts::splice_evar( res, context[9], context[14] );
  res = refalrts::splice_evar( res, context[18], context[19] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_GenerateGroupWithGCGSubst_S2A3("GenerateGroupWithGCGSubst$2=3", COOKIE1_, COOKIE2_, func_gen_GenerateGroupWithGCGSubst_S2A3);


static refalrts::FnResult func_gen_GenerateGroupWithGCGSubst_S2A2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 28 elems
  refalrts::Iter context[28];
  refalrts::zeros( context, 28 );
  // </0 & GenerateGroupWithGCGSubst$2=2/4 s.FnGenSubst/5 s.FnGenResult/6 s.BaseNum$a/7 s.Depth/8 (/11 e.NewGCG-Subst$a/9 )/12 (/15 e.SentencesWithSubst/13 )/16 s.ContextSize$a/17 (/20 e.Vars/18 )/21 (/24 e.MarkedPattern$a/22 )/25 e.GCG-Commands/2 >/1
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
  // closed e.NewGCG-Subst$a as range 9
  // closed e.SentencesWithSubst as range 13
  if( ! refalrts::svar_left( context[17], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
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
  // closed e.Vars as range 18
  // closed e.MarkedPattern$a as range 22
  // closed e.GCG-Commands as range 2
  //DEBUG: s.FnGenSubst: 5
  //DEBUG: s.FnGenResult: 6
  //DEBUG: s.BaseNum$a: 7
  //DEBUG: s.Depth: 8
  //DEBUG: e.NewGCG-Subst$a: 9
  //DEBUG: e.SentencesWithSubst: 13
  //DEBUG: s.ContextSize$a: 17
  //DEBUG: e.Vars: 18
  //DEBUG: e.MarkedPattern$a: 22
  //DEBUG: e.GCG-Commands: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} s.FnGenResult/6 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.Vars/18 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & GenerateGroupWithGCGSubst$2=3/4 } Tile{ AsIs: (/15 } Tile{ AsIs: e.GCG-Commands/2 } Tile{ AsIs: )/16 } Tile{ AsIs: s.FnGenSubst/5 } Tile{ HalfReuse: s.FnGenResult6 /21 AsIs: (/24 AsIs: e.MarkedPattern$a/22 AsIs: )/25 } Tile{ AsIs: s.ContextSize$a/17 } Tile{ AsIs: s.BaseNum$a/7 AsIs: s.Depth/8 } </26 Tile{ HalfReuse: & Map@2/20 } Tile{ AsIs: (/11 AsIs: e.NewGCG-Subst$a/9 AsIs: )/12 } Tile{ AsIs: e.SentencesWithSubst/13 } >/27 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[26]);
  refalrts::alloc_close_call(vm, context[27]);
  refalrts::update_name(context[4], functions[efunc_gen_GenerateGroupWithGCGSubst_S2A3]);
  refalrts::reinit_svar( context[21], context[6] );
  refalrts::reinit_name(context[20], functions[efunc_gen_Map_Z2]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[27] );
  refalrts::push_stack( vm, context[26] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[24], context[25] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_elem( res, context[27] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_elem( res, context[20] );
  res = refalrts::splice_elem( res, context[26] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_elem( res, context[17] );
  res = refalrts::splice_evar( res, context[21], context[25] );
  res = refalrts::splice_elem( res, context[5] );
  res = refalrts::splice_elem( res, context[16] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_elem( res, context[15] );
  refalrts::splice_to_freelist_open( vm, context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_GenerateGroupWithGCGSubst_S2A2("GenerateGroupWithGCGSubst$2=2", COOKIE1_, COOKIE2_, func_gen_GenerateGroupWithGCGSubst_S2A2);


static refalrts::FnResult func_gen_GenerateGroupWithGCGSubst_S2A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 27 elems
  refalrts::Iter context[27];
  refalrts::zeros( context, 27 );
  // </0 & GenerateGroupWithGCGSubst$2=1/4 s.FnGenSubst/5 s.FnGenResult/6 s.Depth/7 (/10 e.SentencesWithSubst/8 )/11 s.ContextSize/12 (/15 e.MarkedPattern/13 )/16 s.BaseNum$a/17 e.NewGCG-Subst$a/2 >/1
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
  // closed e.SentencesWithSubst as range 8
  if( ! refalrts::svar_left( context[12], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[13] = 0;
  context[14] = 0;
  context[15] = refalrts::brackets_left( context[13], context[14], context[2], context[3] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[15], context[16]);
  // closed e.MarkedPattern as range 13
  if( ! refalrts::svar_left( context[17], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.NewGCG-Subst$a as range 2
  //DEBUG: s.FnGenSubst: 5
  //DEBUG: s.FnGenResult: 6
  //DEBUG: s.Depth: 7
  //DEBUG: e.SentencesWithSubst: 8
  //DEBUG: s.ContextSize: 12
  //DEBUG: e.MarkedPattern: 13
  //DEBUG: s.BaseNum$a: 17
  //DEBUG: e.NewGCG-Subst$a: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & GenerateGroupWithGCGSubst$2=2/4 AsIs: s.FnGenSubst/5 AsIs: s.FnGenResult/6 } Tile{ AsIs: s.BaseNum$a/17 } Tile{ AsIs: s.Depth/7 AsIs: (/10 } e.NewGCG-Subst$a/2/18 )/20 (/21 Tile{ AsIs: e.SentencesWithSubst/8 } )/22 </23 & CodeForSubst/24 Tile{ HalfReuse: s.FnGenSubst5 /11 AsIs: s.ContextSize/12 AsIs: (/15 AsIs: e.MarkedPattern/13 AsIs: )/16 } Tile{ AsIs: e.NewGCG-Subst$a/2 } s.Depth/7/25 >/26 Tile{ AsIs: >/1 ]] }
  refalrts::copy_evar(vm, context[18], context[19], context[2], context[3]);
  refalrts::alloc_close_bracket(vm, context[20]);
  refalrts::alloc_open_bracket(vm, context[21]);
  refalrts::alloc_close_bracket(vm, context[22]);
  refalrts::alloc_open_call(vm, context[23]);
  refalrts::alloc_name(vm, context[24], functions[efunc_CodeForSubst]);
  refalrts::copy_stvar(vm, context[25], context[7]);
  refalrts::alloc_close_call(vm, context[26]);
  refalrts::update_name(context[4], functions[efunc_gen_GenerateGroupWithGCGSubst_S2A2]);
  refalrts::reinit_svar( context[11], context[5] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[26] );
  refalrts::push_stack( vm, context[23] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[21], context[22] );
  refalrts::link_brackets( context[10], context[20] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[25], context[26] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[11], context[16] );
  res = refalrts::splice_evar( res, context[22], context[24] );
  res = refalrts::splice_evar( res, context[8], context[9] );
  res = refalrts::splice_evar( res, context[20], context[21] );
  res = refalrts::splice_evar( res, context[18], context[19] );
  res = refalrts::splice_evar( res, context[7], context[10] );
  res = refalrts::splice_elem( res, context[17] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_GenerateGroupWithGCGSubst_S2A1("GenerateGroupWithGCGSubst$2=1", COOKIE1_, COOKIE2_, func_gen_GenerateGroupWithGCGSubst_S2A1);


static refalrts::FnResult func_GenerateGroupWithGCGSubst(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 28 elems
  refalrts::Iter context[28];
  refalrts::zeros( context, 28 );
  // </0 & GenerateGroupWithGCGSubst/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & GenerateGroupWithGCGSubst/4 s.new1/5 s.new2/6 (/9 e.new3/7 )/10 (/13 e.new4/11 )/14 s.new5/15 s.new6/16 s.new7/17 e.new8/2 >/1
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
  context[13] = refalrts::brackets_left( context[11], context[12], context[2], context[3] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[13], context[14]);
  // closed e.new3 as range 7
  // closed e.new4 as range 11
  if( ! refalrts::svar_left( context[15], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[16], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[17], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new8 as range 2
  do {
    // </0 & GenerateGroupWithGCGSubst/4 s.FnGenSubst/5 s.FnGenResult/6 (/9 e.MarkedPattern/18 )/10 (/13 (/26 e.SentenceWithSubst/24 )/27 )/14 s.ContextSize/15 s.BaseNum/16 s.Depth/17 e.NewGCG-Subst/22 >/1
    context[18] = context[7];
    context[19] = context[8];
    context[20] = context[11];
    context[21] = context[12];
    context[22] = context[2];
    context[23] = context[3];
    context[24] = 0;
    context[25] = 0;
    context[26] = refalrts::brackets_left( context[24], context[25], context[20], context[21] );
    if( ! context[26] )
      continue;
    refalrts::bracket_pointers(context[26], context[27]);
    if( ! refalrts::empty_seq( context[20], context[21] ) )
      continue;
    // closed e.MarkedPattern as range 18
    // closed e.SentenceWithSubst as range 24
    // closed e.NewGCG-Subst as range 22
    //DEBUG: s.FnGenSubst: 5
    //DEBUG: s.FnGenResult: 6
    //DEBUG: s.ContextSize: 15
    //DEBUG: s.BaseNum: 16
    //DEBUG: s.Depth: 17
    //DEBUG: e.MarkedPattern: 18
    //DEBUG: e.SentenceWithSubst: 24
    //DEBUG: e.NewGCG-Subst: 22

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} )/10 (/13 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.ContextSize/15 s.BaseNum/16 s.Depth/17 e.NewGCG-Subst/22 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & GenerateSingleSentence/4 AsIs: s.FnGenSubst/5 AsIs: s.FnGenResult/6 HalfReuse: s.ContextSize15 /9 } Tile{ AsIs: (/26 } Tile{ AsIs: e.MarkedPattern/18 } Tile{ AsIs: )/27 HalfReuse: s.Depth17 /14 } Tile{ AsIs: e.SentenceWithSubst/24 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_GenerateSingleSentence]);
    refalrts::reinit_svar( context[9], context[15] );
    refalrts::reinit_svar( context[14], context[17] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[26], context[27] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[24], context[25] );
    res = refalrts::splice_evar( res, context[27], context[14] );
    res = refalrts::splice_evar( res, context[18], context[19] );
    res = refalrts::splice_elem( res, context[26] );
    refalrts::splice_to_freelist_open( vm, context[9], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & GenerateGroupWithGCGSubst/4 s.FnGenSubst/5 s.FnGenResult/6 (/9 e.MarkedPattern/7 )/10 (/13 e.SentencesWithSubst/11 )/14 s.ContextSize/15 s.BaseNum/16 s.Depth/17 e.NewGCG-Subst/2 >/1
  // closed e.MarkedPattern as range 7
  // closed e.SentencesWithSubst as range 11
  // closed e.NewGCG-Subst as range 2
  //DEBUG: s.FnGenSubst: 5
  //DEBUG: s.FnGenResult: 6
  //DEBUG: s.ContextSize: 15
  //DEBUG: s.BaseNum: 16
  //DEBUG: s.Depth: 17
  //DEBUG: e.MarkedPattern: 7
  //DEBUG: e.SentencesWithSubst: 11
  //DEBUG: e.NewGCG-Subst: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Depth/17 {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & GenerateGroupWithGCGSubst$2=1/4 AsIs: s.FnGenSubst/5 AsIs: s.FnGenResult/6 HalfReuse: s.Depth17 /9 } Tile{ AsIs: (/13 AsIs: e.SentencesWithSubst/11 AsIs: )/14 AsIs: s.ContextSize/15 } (/18 Tile{ AsIs: e.MarkedPattern/7 } Tile{ AsIs: )/10 } </19 & DoMapAccum@1/20 Tile{ AsIs: s.BaseNum/16 } (/21 )/22 Tile{ AsIs: e.NewGCG-Subst/2 } >/23 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[18]);
  refalrts::alloc_open_call(vm, context[19]);
  refalrts::alloc_name(vm, context[20], functions[efunc_gen_DoMapAccum_Z1]);
  refalrts::alloc_open_bracket(vm, context[21]);
  refalrts::alloc_close_bracket(vm, context[22]);
  refalrts::alloc_close_call(vm, context[23]);
  refalrts::update_name(context[4], functions[efunc_gen_GenerateGroupWithGCGSubst_S2A1]);
  refalrts::reinit_svar( context[9], context[17] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[23] );
  refalrts::push_stack( vm, context[19] );
  refalrts::link_brackets( context[21], context[22] );
  refalrts::link_brackets( context[18], context[10] );
  refalrts::link_brackets( context[13], context[14] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_elem( res, context[23] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[21], context[22] );
  res = refalrts::splice_elem( res, context[16] );
  res = refalrts::splice_evar( res, context[19], context[20] );
  res = refalrts::splice_elem( res, context[10] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_elem( res, context[18] );
  res = refalrts::splice_evar( res, context[13], context[15] );
  refalrts::splice_to_freelist_open( vm, context[9], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_GenerateGroupWithGCGSubst("GenerateGroupWithGCGSubst", COOKIE1_, COOKIE2_, func_GenerateGroupWithGCGSubst);


static refalrts::FnResult func_gen_CodeForSubst_A2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
  // </0 & CodeForSubst=2/4 s.FnGenSubst/5 s.ContextSize$a/6 (/9 e.CmdSaves/7 )/10 e.SubstsAndJunks$a/2 >/1
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
  // closed e.CmdSaves as range 7
  // closed e.SubstsAndJunks$a as range 2
  //DEBUG: s.FnGenSubst: 5
  //DEBUG: s.ContextSize$a: 6
  //DEBUG: e.CmdSaves: 7
  //DEBUG: e.SubstsAndJunks$a: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} s.FnGenSubst/5 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 HalfReuse: s.FnGenSubst5 /4 } Tile{ AsIs: s.ContextSize$a/6 } Tile{ AsIs: e.SubstsAndJunks$a/2 } (/11 )/12 Tile{ AsIs: (/9 AsIs: e.CmdSaves/7 AsIs: )/10 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[11]);
  refalrts::alloc_close_bracket(vm, context[12]);
  refalrts::reinit_svar( context[4], context[5] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[9], context[10] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_elem( res, context[6] );
  refalrts::splice_to_freelist_open( vm, context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_CodeForSubst_A2("CodeForSubst=2", COOKIE1_, COOKIE2_, func_gen_CodeForSubst_A2);


static refalrts::FnResult func_gen_CodeForSubst_A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  // </0 & CodeForSubst=1/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & CodeForSubst=1/4 s.new1/5 s.new2/6 s.new3/7 e.new4/2 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[7], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new4 as range 2
  do {
    // </0 & CodeForSubst=1/4 s.FnGenSubst/5 s.ContextSize/6 0/7 e.SubstsAndJunks/8 >/1
    context[8] = context[2];
    context[9] = context[3];
    if( ! refalrts::number_term( 0UL, context[7] ) )
      continue;
    // closed e.SubstsAndJunks as range 8
    //DEBUG: s.FnGenSubst: 5
    //DEBUG: s.ContextSize: 6
    //DEBUG: e.SubstsAndJunks: 8

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </4 AsIs: s.FnGenSubst/5 AsIs: s.ContextSize/6 } Tile{ AsIs: e.SubstsAndJunks/8 } Tile{ HalfReuse: (/0 } Tile{ HalfReuse: )/7 } (/10 )/11 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_bracket(vm, context[10]);
    refalrts::alloc_close_bracket(vm, context[11]);
    refalrts::reinit_open_call(context[4]);
    refalrts::reinit_open_bracket(context[0]);
    refalrts::reinit_close_bracket(context[7]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[4] );
    refalrts::link_brackets( context[10], context[11] );
    refalrts::link_brackets( context[0], context[7] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[10], context[11] );
    res = refalrts::splice_elem( res, context[7] );
    res = refalrts::splice_elem( res, context[0] );
    res = refalrts::splice_evar( res, context[8], context[9] );
    res = refalrts::splice_evar( res, context[4], context[6] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & CodeForSubst=1/4 s.FnGenSubst/5 s.ContextSize/6 s.Depth/7 e.SubstsAndJunks/2 >/1
  // closed e.SubstsAndJunks as range 2
  //DEBUG: s.FnGenSubst: 5
  //DEBUG: s.ContextSize: 6
  //DEBUG: s.Depth: 7
  //DEBUG: e.SubstsAndJunks: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} s.Depth/7 {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & CodeForSubst=2/4 AsIs: s.FnGenSubst/5 } </8 & MakeSavers/9 Tile{ AsIs: s.ContextSize/6 } Tile{ AsIs: e.SubstsAndJunks/2 } >/10 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[8]);
  refalrts::alloc_name(vm, context[9], functions[efunc_MakeSavers]);
  refalrts::alloc_close_call(vm, context[10]);
  refalrts::update_name(context[4], functions[efunc_gen_CodeForSubst_A2]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[10] );
  refalrts::push_stack( vm, context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_elem( res, context[10] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_elem( res, context[6] );
  res = refalrts::splice_evar( res, context[8], context[9] );
  refalrts::splice_to_freelist_open( vm, context[5], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_CodeForSubst_A1("CodeForSubst=1", COOKIE1_, COOKIE2_, func_gen_CodeForSubst_A1);


static refalrts::FnResult func_CodeForSubst(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  // </0 & CodeForSubst/4 s.FnGenSubst/5 s.ContextSize/6 (/9 e.MarkedPattern/7 )/10 e.Substitute/2 s.Depth/11 >/1
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
  // closed e.MarkedPattern as range 7
  if( ! refalrts::svar_right( context[11], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Substitute as range 2
  //DEBUG: s.FnGenSubst: 5
  //DEBUG: s.ContextSize: 6
  //DEBUG: e.MarkedPattern: 7
  //DEBUG: s.Depth: 11
  //DEBUG: e.Substitute: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Depth/11 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & CodeForSubst=1/4 AsIs: s.FnGenSubst/5 AsIs: s.ContextSize/6 HalfReuse: s.Depth11 /9 } </12 & ComposeVars/13 (/14 Tile{ AsIs: e.MarkedPattern/7 } Tile{ AsIs: )/10 } (/15 Tile{ AsIs: e.Substitute/2 } )/16 >/17 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[12]);
  refalrts::alloc_name(vm, context[13], functions[efunc_ComposeVars]);
  refalrts::alloc_open_bracket(vm, context[14]);
  refalrts::alloc_open_bracket(vm, context[15]);
  refalrts::alloc_close_bracket(vm, context[16]);
  refalrts::alloc_close_call(vm, context[17]);
  refalrts::update_name(context[4], functions[efunc_gen_CodeForSubst_A1]);
  refalrts::reinit_svar( context[9], context[11] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[17] );
  refalrts::push_stack( vm, context[12] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[14], context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[16], context[17] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_elem( res, context[15] );
  res = refalrts::splice_elem( res, context[10] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_evar( res, context[12], context[14] );
  refalrts::splice_to_freelist_open( vm, context[9], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_CodeForSubst("CodeForSubst", COOKIE1_, COOKIE2_, func_CodeForSubst);


static refalrts::FnResult func_gen_GenerateSingleSentence_A2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
  // </0 & GenerateSingleSentence=2/4 (/7 # CmdIssueMemory/9 s.Memory/10 )/8 e.Commands/2 >/1
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
  context[9] = refalrts::ident_left( identifiers[ident_CmdIssueMemory], context[5], context[6] );
  if( ! context[9] )
    return refalrts::cRecognitionImpossible;
  // closed e.Commands as range 2
  if( ! refalrts::svar_left( context[10], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: e.Commands: 2
  //DEBUG: s.Memory: 10

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} & GenerateSingleSentence=2/4 (/7 # CmdIssueMemory/9 s.Memory/10 )/8 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: s.Memory10 /0 } Tile{ AsIs: e.Commands/2 } Tile{ ]] }
  refalrts::reinit_svar( context[0], context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::splice_to_freelist_open( vm, context[0], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_GenerateSingleSentence_A2("GenerateSingleSentence=2", COOKIE1_, COOKIE2_, func_gen_GenerateSingleSentence_A2);


static refalrts::FnResult func_gen_GenerateSingleSentence_A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 26 elems
  refalrts::Iter context[26];
  refalrts::zeros( context, 26 );
  // </0 & GenerateSingleSentence=1/4 s.FnGenResult/5 (/8 e.Conditions/6 )/9 (/12 e.Result/10 )/13 s.ContextSize$a/14 (/17 e.Vars/15 )/18 (/21 e.MarkedPattern$a/19 )/22 e.PatternCommands/2 >/1
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
  // closed e.Vars as range 15
  // closed e.MarkedPattern$a as range 19
  // closed e.PatternCommands as range 2
  //DEBUG: s.FnGenResult: 5
  //DEBUG: e.Conditions: 6
  //DEBUG: e.Result: 10
  //DEBUG: s.ContextSize$a: 14
  //DEBUG: e.Vars: 15
  //DEBUG: e.MarkedPattern$a: 19
  //DEBUG: e.PatternCommands: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </23 & GenerateSingleSentence=2/24 Tile{ AsIs: </0 Reuse: & GenResult/4 AsIs: s.FnGenResult/5 AsIs: (/8 AsIs: e.Conditions/6 AsIs: )/9 AsIs: (/12 AsIs: e.Result/10 AsIs: )/13 AsIs: s.ContextSize$a/14 AsIs: (/17 AsIs: e.Vars/15 AsIs: )/18 AsIs: (/21 AsIs: e.MarkedPattern$a/19 AsIs: )/22 AsIs: e.PatternCommands/2 AsIs: >/1 } >/25 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[23]);
  refalrts::alloc_name(vm, context[24], functions[efunc_gen_GenerateSingleSentence_A2]);
  refalrts::alloc_close_call(vm, context[25]);
  refalrts::update_name(context[4], functions[efunc_GenResult]);
  refalrts::push_stack( vm, context[25] );
  refalrts::push_stack( vm, context[23] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[21], context[22] );
  refalrts::link_brackets( context[17], context[18] );
  refalrts::link_brackets( context[12], context[13] );
  refalrts::link_brackets( context[8], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_elem( res, context[25] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[23], context[24] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_GenerateSingleSentence_A1("GenerateSingleSentence=1", COOKIE1_, COOKIE2_, func_gen_GenerateSingleSentence_A1);


static refalrts::FnResult func_GenerateSingleSentence(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 24 elems
  refalrts::Iter context[24];
  refalrts::zeros( context, 24 );
  // </0 & GenerateSingleSentence/4 s.FnGenSubst/9 s.FnGenResult/10 s.ContextSize/11 (/14 e.MarkedPattern/12 )/15 s.Depth/16 (/19 e.Substitute/17 )/20 e.Conditions/2 (/7 e.Result/5 )/8 >/1
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
  // closed e.Result as range 5
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
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
  // closed e.MarkedPattern as range 12
  if( ! refalrts::svar_left( context[16], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[17] = 0;
  context[18] = 0;
  context[19] = refalrts::brackets_left( context[17], context[18], context[2], context[3] );
  if( ! context[19] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[19], context[20]);
  // closed e.Substitute as range 17
  // closed e.Conditions as range 2
  //DEBUG: e.Result: 5
  //DEBUG: s.FnGenSubst: 9
  //DEBUG: s.FnGenResult: 10
  //DEBUG: s.ContextSize: 11
  //DEBUG: e.MarkedPattern: 12
  //DEBUG: s.Depth: 16
  //DEBUG: e.Substitute: 17
  //DEBUG: e.Conditions: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & GenerateSingleSentence=1/4 } Tile{ AsIs: s.FnGenResult/10 } (/21 Tile{ AsIs: e.Conditions/2 } Tile{ AsIs: )/20 } Tile{ AsIs: (/7 AsIs: e.Result/5 AsIs: )/8 HalfReuse: </1 } & CodeForSubst/22 Tile{ AsIs: s.FnGenSubst/9 } Tile{ AsIs: s.ContextSize/11 AsIs: (/14 AsIs: e.MarkedPattern/12 AsIs: )/15 } Tile{ AsIs: e.Substitute/17 } Tile{ AsIs: s.Depth/16 HalfReuse: >/19 } >/23 Tile{ ]] }
  refalrts::alloc_open_bracket(vm, context[21]);
  refalrts::alloc_name(vm, context[22], functions[efunc_CodeForSubst]);
  refalrts::alloc_close_call(vm, context[23]);
  refalrts::update_name(context[4], functions[efunc_gen_GenerateSingleSentence_A1]);
  refalrts::reinit_open_call(context[1]);
  refalrts::reinit_close_call(context[19]);
  refalrts::push_stack( vm, context[23] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[19] );
  refalrts::push_stack( vm, context[1] );
  refalrts::link_brackets( context[14], context[15] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[21], context[20] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_elem( res, context[23] );
  res = refalrts::splice_evar( res, context[16], context[19] );
  res = refalrts::splice_evar( res, context[17], context[18] );
  res = refalrts::splice_evar( res, context[11], context[15] );
  res = refalrts::splice_elem( res, context[9] );
  res = refalrts::splice_elem( res, context[22] );
  res = refalrts::splice_evar( res, context[7], context[1] );
  res = refalrts::splice_elem( res, context[20] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_elem( res, context[21] );
  res = refalrts::splice_elem( res, context[10] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_GenerateSingleSentence("GenerateSingleSentence", COOKIE1_, COOKIE2_, func_GenerateSingleSentence);


static refalrts::FnResult func_gen_ComposeVars_S1A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 27 elems
  refalrts::Iter context[27];
  refalrts::zeros( context, 27 );
  // </0 & ComposeVars$1=1/4 (/7 e.MarkedPattern-B/5 )/8 s.Offset/9 (/12 e.Subst/10 )/13 (/16 e.MarkedPattern-E/14 )/17 (/20 e.Substitute-B/18 )/21 (/24 e.Substitute-E/22 )/25 s.Mode$a/26 >/1
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
  // closed e.MarkedPattern-B as range 5
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
  // closed e.Subst as range 10
  // closed e.MarkedPattern-E as range 14
  // closed e.Substitute-B as range 18
  // closed e.Substitute-E as range 22
  if( ! refalrts::svar_left( context[26], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: e.MarkedPattern-B: 5
  //DEBUG: s.Offset: 9
  //DEBUG: e.Subst: 10
  //DEBUG: e.MarkedPattern-E: 14
  //DEBUG: e.Substitute-B: 18
  //DEBUG: e.Substitute-E: 22
  //DEBUG: s.Mode$a: 26

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 HalfReuse: # Junk/7 AsIs: e.MarkedPattern-B/5 AsIs: )/8 } Tile{ HalfReuse: (/25 AsIs: s.Mode$a/26 } Tile{ AsIs: s.Offset/9 } Tile{ AsIs: e.Subst/10 } Tile{ AsIs: )/21 HalfReuse: </24 } Tile{ HalfReuse: & ComposeVars/13 AsIs: (/16 AsIs: e.MarkedPattern-E/14 AsIs: )/17 AsIs: (/20 } Tile{ AsIs: e.Substitute-B/18 } Tile{ AsIs: e.Substitute-E/22 } Tile{ HalfReuse: )/12 } Tile{ AsIs: >/1 ]] }
  refalrts::reinit_open_bracket(context[4]);
  refalrts::reinit_ident(context[7], identifiers[ident_Junk]);
  refalrts::reinit_open_bracket(context[25]);
  refalrts::reinit_open_call(context[24]);
  refalrts::reinit_name(context[13], functions[efunc_ComposeVars]);
  refalrts::reinit_close_bracket(context[12]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[24] );
  refalrts::link_brackets( context[20], context[12] );
  refalrts::link_brackets( context[16], context[17] );
  refalrts::link_brackets( context[25], context[21] );
  refalrts::link_brackets( context[4], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_elem( res, context[12] );
  res = refalrts::splice_evar( res, context[22], context[23] );
  res = refalrts::splice_evar( res, context[18], context[19] );
  res = refalrts::splice_evar( res, context[13], context[20] );
  res = refalrts::splice_evar( res, context[21], context[24] );
  res = refalrts::splice_evar( res, context[10], context[11] );
  res = refalrts::splice_elem( res, context[9] );
  res = refalrts::splice_evar( res, context[25], context[26] );
  res = refalrts::splice_evar( res, context[4], context[8] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ComposeVars_S1A1("ComposeVars$1=1", COOKIE1_, COOKIE2_, func_gen_ComposeVars_S1A1);


static refalrts::FnResult func_gen_ComposeVars_S1A1B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  // </0 & ComposeVars$1=1:1/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & ComposeVars$1=1:1/4 s.new1/5 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & ComposeVars$1=1:1/4 's'/5 >/1
    if( ! refalrts::char_term( 's', context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & ComposeVars$1=1:1/4 's'/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # S/1 ]] }
    refalrts::reinit_ident(context[1], identifiers[ident_S]);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & ComposeVars$1=1:1/4 't'/5 >/1
    if( ! refalrts::char_term( 't', context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & ComposeVars$1=1:1/4 't'/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # T/1 ]] }
    refalrts::reinit_ident(context[1], identifiers[ident_T]);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ComposeVars$1=1:1/4 'e'/5 >/1
  if( ! refalrts::char_term( 'e', context[5] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & ComposeVars$1=1:1/4 'e'/5 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: # E/1 ]] }
  refalrts::reinit_ident(context[1], identifiers[ident_E]);
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ComposeVars_S1A1B1("ComposeVars$1=1:1", COOKIE1_, COOKIE2_, func_gen_ComposeVars_S1A1B1);


static refalrts::FnResult func_ComposeVars(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 48 elems
  refalrts::Iter context[48];
  refalrts::zeros( context, 48 );
  // </0 & ComposeVars/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & ComposeVars/4 (/7 e.new1/5 )/8 (/11 e.new2/9 )/12 >/1
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
    // </0 & ComposeVars/4 (/7 e.MarkedPattern-B/17 (/25 # Var/27 s.Mode/28 e.Name/23 s.Offset/29 )/26 e.MarkedPattern-E/19 )/8 (/11 e.Substitute-B/30 (/36 e.Subst/34 ':'/42 (/40 s.Mode/43 e.Name/44 )/41 )/37 e.Substitute-E/32 )/12 >/1
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
      context[27] = refalrts::ident_left( identifiers[ident_Var], context[23], context[24] );
      if( ! context[27] )
        continue;
      // closed e.MarkedPattern-E as range 19
      if( ! refalrts::svar_left( context[28], context[23], context[24] ) )
        continue;
      if( ! refalrts::svar_right( context[29], context[23], context[24] ) )
        continue;
      // closed e.Name as range 23
      context[30] = 0;
      context[31] = 0;
      refalrts::start_e_loop(vm);
      do {
        context[32] = context[21];
        context[33] = context[22];
        context[34] = 0;
        context[35] = 0;
        context[36] = refalrts::brackets_left( context[34], context[35], context[32], context[33] );
        if( ! context[36] )
          continue;
        refalrts::bracket_pointers(context[36], context[37]);
        context[38] = 0;
        context[39] = 0;
        context[40] = refalrts::brackets_right( context[38], context[39], context[34], context[35] );
        if( ! context[40] )
          continue;
        refalrts::bracket_pointers(context[40], context[41]);
        context[42] = refalrts::char_right( ':', context[34], context[35] );
        if( ! context[42] )
          continue;
        if( ! refalrts::repeated_stvar_left( vm, context[43], context[28], context[38], context[39] ) )
          continue;
        if( ! refalrts::repeated_evar_left( vm, context[44], context[45], context[23], context[24], context[38], context[39] ) )
          continue;
        if( ! refalrts::empty_seq( context[38], context[39] ) )
          continue;
        // closed e.Subst as range 34
        // closed e.Substitute-E as range 32
        //DEBUG: e.MarkedPattern-B: 17
        //DEBUG: e.MarkedPattern-E: 19
        //DEBUG: s.Mode: 28
        //DEBUG: s.Offset: 29
        //DEBUG: e.Name: 23
        //DEBUG: e.Substitute-B: 30
        //DEBUG: e.Subst: 34
        //DEBUG: e.Substitute-E: 32

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} s.Mode/28 e.Name/23 s.Offset/29 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.Name/44 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & ComposeVars$1=1/4 AsIs: (/7 AsIs: e.MarkedPattern-B/17 HalfReuse: )/25 HalfReuse: s.Offset29 /27 } Tile{ HalfReuse: (/42 } Tile{ AsIs: e.Subst/34 } Tile{ AsIs: )/41 } Tile{ HalfReuse: (/26 AsIs: e.MarkedPattern-E/19 AsIs: )/8 AsIs: (/11 AsIs: e.Substitute-B/30 HalfReuse: )/36 } Tile{ HalfReuse: (/37 AsIs: e.Substitute-E/32 AsIs: )/12 HalfReuse: </1 } Tile{ HalfReuse: & ComposeVars$1=1:1/40 AsIs: s.Mode/43 } >/46 >/47 Tile{ ]] }
        refalrts::alloc_close_call(vm, context[46]);
        refalrts::alloc_close_call(vm, context[47]);
        refalrts::update_name(context[4], functions[efunc_gen_ComposeVars_S1A1]);
        refalrts::reinit_close_bracket(context[25]);
        refalrts::reinit_svar( context[27], context[29] );
        refalrts::reinit_open_bracket(context[42]);
        refalrts::reinit_open_bracket(context[26]);
        refalrts::reinit_close_bracket(context[36]);
        refalrts::reinit_open_bracket(context[37]);
        refalrts::reinit_open_call(context[1]);
        refalrts::reinit_name(context[40], functions[efunc_gen_ComposeVars_S1A1B1]);
        refalrts::push_stack( vm, context[47] );
        refalrts::push_stack( vm, context[0] );
        refalrts::push_stack( vm, context[46] );
        refalrts::push_stack( vm, context[1] );
        refalrts::link_brackets( context[37], context[12] );
        refalrts::link_brackets( context[11], context[36] );
        refalrts::link_brackets( context[26], context[8] );
        refalrts::link_brackets( context[42], context[41] );
        refalrts::link_brackets( context[7], context[25] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[46], context[47] );
        res = refalrts::splice_evar( res, context[40], context[43] );
        res = refalrts::splice_evar( res, context[37], context[1] );
        res = refalrts::splice_evar( res, context[26], context[36] );
        res = refalrts::splice_elem( res, context[41] );
        res = refalrts::splice_evar( res, context[34], context[35] );
        res = refalrts::splice_elem( res, context[42] );
        refalrts::splice_to_freelist_open( vm, context[27], res );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[30], context[31], context[21], context[22] ) );
    } while ( refalrts::open_evar_advance( context[17], context[18], context[13], context[14] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ComposeVars/4 (/7 e.MarkedPattern/5 )/8 (/11 )/12 >/1
  if( ! refalrts::empty_seq( context[9], context[10] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.MarkedPattern as range 5
  //DEBUG: e.MarkedPattern: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 {REMOVED TILE} (/11 )/12 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 HalfReuse: # Junk/7 AsIs: e.MarkedPattern/5 AsIs: )/8 } Tile{ ]] }
  refalrts::reinit_open_bracket(context[4]);
  refalrts::reinit_ident(context[7], identifiers[ident_Junk]);
  refalrts::link_brackets( context[4], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[4], context[8] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ComposeVars("ComposeVars", COOKIE1_, COOKIE2_, func_ComposeVars);


static refalrts::FnResult func_gen_EnumerateVarsRec_L1S2A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 7 elems
  refalrts::Iter context[7];
  refalrts::zeros( context, 7 );
  // </0 & EnumerateVarsRec\1$2=1/4 s.Next$a/5 e.Nested$a/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Nested$a as range 2
  //DEBUG: s.Next$a: 5
  //DEBUG: e.Nested$a: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} s.Next$a/5 {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: s.Next$a5 /0 HalfReuse: (/4 } # Brackets/6 Tile{ AsIs: e.Nested$a/2 } Tile{ HalfReuse: )/1 ]] }
  refalrts::alloc_ident(vm, context[6], identifiers[ident_Brackets]);
  refalrts::reinit_svar( context[0], context[5] );
  refalrts::reinit_open_bracket(context[4]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[4], context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_elem( res, context[6] );
  refalrts::splice_to_freelist_open( vm, context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_EnumerateVarsRec_L1S2A1("EnumerateVarsRec\\1$2=1", COOKIE1_, COOKIE2_, func_gen_EnumerateVarsRec_L1S2A1);


static refalrts::FnResult func_gen_EnumerateVarsRec_L1S3A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  // </0 & EnumerateVarsRec\1$3=1/4 (/7 e.Name/5 )/8 s.Next$a/9 e.Nested$a/2 >/1
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
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Nested$a as range 2
  //DEBUG: e.Name: 5
  //DEBUG: s.Next$a: 9
  //DEBUG: e.Nested$a: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: s.Next$a/9 } Tile{ HalfReuse: (/0 HalfReuse: # ADT-Brackets/4 AsIs: (/7 AsIs: e.Name/5 AsIs: )/8 } Tile{ AsIs: e.Nested$a/2 } Tile{ HalfReuse: )/1 ]] }
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
  res = refalrts::splice_elem( res, context[9] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_EnumerateVarsRec_L1S3A1("EnumerateVarsRec\\1$3=1", COOKIE1_, COOKIE2_, func_gen_EnumerateVarsRec_L1S3A1);


static refalrts::FnResult func_EnumerateVarsRec(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 8 elems
  refalrts::Iter context[8];
  refalrts::zeros( context, 8 );
  // </0 & EnumerateVarsRec/4 s.NextNumber/5 e.Expr/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Expr as range 2
  //DEBUG: s.NextNumber: 5
  //DEBUG: e.Expr: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum@2/4 AsIs: s.NextNumber/5 } (/6 )/7 Tile{ AsIs: e.Expr/2 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[6]);
  refalrts::alloc_close_bracket(vm, context[7]);
  refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_Z2]);
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

static refalrts::NativeReference nat_ref_EnumerateVarsRec("EnumerateVarsRec", COOKIE1_, COOKIE2_, func_EnumerateVarsRec);


static refalrts::FnResult func_gen_EnumerateVarsm_Subst_L1A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
  // </0 & EnumerateVars-Subst\1=1/4 (/7 e.Var/5 )/8 s.NextNumber$a/9 e.Value$a/2 >/1
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
  // closed e.Var as range 5
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Value$a as range 2
  //DEBUG: e.Var: 5
  //DEBUG: s.NextNumber$a: 9
  //DEBUG: e.Value$a: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} s.NextNumber$a/9 {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: s.NextNumber$a9 /0 } (/10 Tile{ AsIs: e.Value$a/2 } Tile{ HalfReuse: ':'/4 AsIs: (/7 AsIs: e.Var/5 AsIs: )/8 } Tile{ HalfReuse: )/1 ]] }
  refalrts::alloc_open_bracket(vm, context[10]);
  refalrts::reinit_svar( context[0], context[9] );
  refalrts::reinit_char(context[4], ':');
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[10], context[1] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[4], context[8] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_elem( res, context[10] );
  refalrts::splice_to_freelist_open( vm, context[0], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_EnumerateVarsm_Subst_L1A1("EnumerateVars-Subst\\1=1", COOKIE1_, COOKIE2_, func_gen_EnumerateVarsm_Subst_L1A1);


static refalrts::FnResult func_EnumerateVarsm_Subst(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  // </0 & EnumerateVars-Subst/4 s.StartNumber/5 s.Depth/6 e.Substitute/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Substitute as range 2
  //DEBUG: s.StartNumber: 5
  //DEBUG: s.Depth: 6
  //DEBUG: e.Substitute: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} s.Depth/6 {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum@1/4 AsIs: s.StartNumber/5 } (/7 )/8 Tile{ AsIs: e.Substitute/2 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[7]);
  refalrts::alloc_close_bracket(vm, context[8]);
  refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_Z1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::splice_to_freelist_open( vm, context[5], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_EnumerateVarsm_Subst("EnumerateVars-Subst", COOKIE1_, COOKIE2_, func_EnumerateVarsm_Subst);


static refalrts::FnResult func_gen_FindDivision_A3(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 58 elems
  refalrts::Iter context[58];
  refalrts::zeros( context, 58 );
  // </0 & FindDivision=3/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & FindDivision=3/4 (/7 e.new1/5 )/8 (/11 e.new2/9 )/12 (/15 e.new3/13 )/16 e.new4/2 >/1
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
    // </0 & FindDivision=3/4 (/7 e.FirstImage/17 )/8 (/11 e.FirstSentence$a/19 )/12 (/15 )/16 e.TrivialGCG/21 >/1
    context[17] = context[5];
    context[18] = context[6];
    context[19] = context[9];
    context[20] = context[10];
    context[21] = context[2];
    context[22] = context[3];
    if( ! refalrts::empty_seq( context[13], context[14] ) )
      continue;
    // closed e.FirstImage as range 17
    // closed e.FirstSentence$a as range 19
    // closed e.TrivialGCG as range 21
    //DEBUG: e.FirstImage: 17
    //DEBUG: e.FirstSentence$a: 19
    //DEBUG: e.TrivialGCG: 21

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} (/15 {REMOVED TILE} e.TrivialGCG/21 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: # ForAllSentences/0 HalfReuse: (/4 HalfReuse: </7 } Tile{ HalfReuse: & Map@5/16 } Tile{ AsIs: e.FirstImage/17 } Tile{ AsIs: >/1 } Tile{ AsIs: )/8 AsIs: (/11 AsIs: e.FirstSentence$a/19 AsIs: )/12 } Tile{ ]] }
    refalrts::reinit_ident(context[0], identifiers[ident_ForAllSentences]);
    refalrts::reinit_open_bracket(context[4]);
    refalrts::reinit_open_call(context[7]);
    refalrts::reinit_name(context[16], functions[efunc_gen_Map_Z5]);
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[4], context[8] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[7] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[8], context[12] );
    res = refalrts::splice_elem( res, context[1] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_elem( res, context[16] );
    refalrts::splice_to_freelist_open( vm, context[7], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & FindDivision=3/4 (/7 e.new6/17 )/8 (/11 e.new7/19 )/12 (/15 (/27 e.new8/25 )/28 e.new9/21 )/16 e.new5/23 >/1
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
    context[27] = refalrts::brackets_left( context[25], context[26], context[21], context[22] );
    if( ! context[27] )
      continue;
    refalrts::bracket_pointers(context[27], context[28]);
    // closed e.new6 as range 17
    // closed e.new7 as range 19
    // closed e.new8 as range 25
    // closed e.new9 as range 21
    // closed e.new5 as range 23
    do {
      // </0 & FindDivision=3/4 (/7 e.FirstImage/29 )/8 (/11 e.FirstSentence$a/31 )/12 (/15 (/27 (/41 e.2/39 )/42 e.3/33 (/45 e.4/43 )/46 )/28 e./35 )/16 e.TrivialGCG/37 >/1
      context[29] = context[17];
      context[30] = context[18];
      context[31] = context[19];
      context[32] = context[20];
      context[33] = context[25];
      context[34] = context[26];
      context[35] = context[21];
      context[36] = context[22];
      context[37] = context[23];
      context[38] = context[24];
      context[39] = 0;
      context[40] = 0;
      context[41] = refalrts::brackets_left( context[39], context[40], context[33], context[34] );
      if( ! context[41] )
        continue;
      refalrts::bracket_pointers(context[41], context[42]);
      context[43] = 0;
      context[44] = 0;
      context[45] = refalrts::brackets_right( context[43], context[44], context[33], context[34] );
      if( ! context[45] )
        continue;
      refalrts::bracket_pointers(context[45], context[46]);
      // closed e.FirstImage as range 29
      // closed e.FirstSentence$a as range 31
      // closed e.2 as range 39
      // closed e.3 as range 33
      // closed e.4 as range 43
      // closed e. as range 35
      // closed e.TrivialGCG as range 37
      //DEBUG: e.FirstImage: 29
      //DEBUG: e.FirstSentence$a: 31
      //DEBUG: e.2: 39
      //DEBUG: e.3: 33
      //DEBUG: e.4: 43
      //DEBUG: e.: 35
      //DEBUG: e.TrivialGCG: 37

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 } & DoFindDivision$3=1@1/47 (/48 Tile{ AsIs: e.TrivialGCG/37 } Tile{ HalfReuse: )/4 AsIs: (/7 AsIs: e.FirstImage/29 AsIs: )/8 AsIs: (/11 AsIs: e.FirstSentence$a/31 AsIs: )/12 AsIs: (/15 } Tile{ AsIs: e./35 } Tile{ AsIs: )/16 } 50/49 </50 Tile{ HalfReuse: & ImagedSentence=1/27 AsIs: (/41 AsIs: e.2/39 AsIs: )/42 } (/51 Tile{ AsIs: e.3/33 } )/52 Tile{ AsIs: (/45 AsIs: e.4/43 AsIs: )/46 HalfReuse: </28 } & Map@4/53 e.2/39/54 >/56 >/57 Tile{ AsIs: >/1 ]] }
      refalrts::alloc_name(vm, context[47], functions[efunc_gen_DoFindDivision_S3A1Z1]);
      refalrts::alloc_open_bracket(vm, context[48]);
      refalrts::alloc_number(vm, context[49], 50UL);
      refalrts::alloc_open_call(vm, context[50]);
      refalrts::alloc_open_bracket(vm, context[51]);
      refalrts::alloc_close_bracket(vm, context[52]);
      refalrts::alloc_name(vm, context[53], functions[efunc_gen_Map_Z4]);
      refalrts::copy_evar(vm, context[54], context[55], context[39], context[40]);
      refalrts::alloc_close_call(vm, context[56]);
      refalrts::alloc_close_call(vm, context[57]);
      refalrts::reinit_close_bracket(context[4]);
      refalrts::reinit_name(context[27], functions[efunc_gen_ImagedSentence_A1]);
      refalrts::reinit_open_call(context[28]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[57] );
      refalrts::push_stack( vm, context[50] );
      refalrts::push_stack( vm, context[56] );
      refalrts::push_stack( vm, context[28] );
      refalrts::link_brackets( context[45], context[46] );
      refalrts::link_brackets( context[51], context[52] );
      refalrts::link_brackets( context[41], context[42] );
      refalrts::link_brackets( context[15], context[16] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::link_brackets( context[48], context[4] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[53], context[57] );
      res = refalrts::splice_evar( res, context[45], context[28] );
      res = refalrts::splice_elem( res, context[52] );
      res = refalrts::splice_evar( res, context[33], context[34] );
      res = refalrts::splice_elem( res, context[51] );
      res = refalrts::splice_evar( res, context[27], context[42] );
      res = refalrts::splice_evar( res, context[49], context[50] );
      res = refalrts::splice_elem( res, context[16] );
      res = refalrts::splice_evar( res, context[35], context[36] );
      res = refalrts::splice_evar( res, context[4], context[15] );
      res = refalrts::splice_evar( res, context[37], context[38] );
      res = refalrts::splice_evar( res, context[47], context[48] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & FindDivision=3/4 (/7 e.FirstImage/29 )/8 (/11 e.FirstSentence$a/31 )/12 (/15 (/27 e.0/33 )/28 e./35 )/16 e.TrivialGCG/37 >/1
    context[29] = context[17];
    context[30] = context[18];
    context[31] = context[19];
    context[32] = context[20];
    context[33] = context[25];
    context[34] = context[26];
    context[35] = context[21];
    context[36] = context[22];
    context[37] = context[23];
    context[38] = context[24];
    // closed e.FirstImage as range 29
    // closed e.FirstSentence$a as range 31
    // closed e.0 as range 33
    // closed e. as range 35
    // closed e.TrivialGCG as range 37
    //DEBUG: e.FirstImage: 29
    //DEBUG: e.FirstSentence$a: 31
    //DEBUG: e.0: 33
    //DEBUG: e.: 35
    //DEBUG: e.TrivialGCG: 37

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 } & DoFindDivision$3=1@1/39 (/40 Tile{ AsIs: e.TrivialGCG/37 } Tile{ HalfReuse: )/4 AsIs: (/7 AsIs: e.FirstImage/29 AsIs: )/8 AsIs: (/11 AsIs: e.FirstSentence$a/31 AsIs: )/12 AsIs: (/15 } Tile{ AsIs: e./35 } Tile{ AsIs: )/16 } 50/41 </42 Tile{ HalfReuse: & ImagedSentence*1/27 AsIs: e.0/33 HalfReuse: >/28 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_name(vm, context[39], functions[efunc_gen_DoFindDivision_S3A1Z1]);
    refalrts::alloc_open_bracket(vm, context[40]);
    refalrts::alloc_number(vm, context[41], 50UL);
    refalrts::alloc_open_call(vm, context[42]);
    refalrts::reinit_close_bracket(context[4]);
    refalrts::reinit_name(context[27], functions[efunc_gen_ImagedSentence_D1]);
    refalrts::reinit_close_call(context[28]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[28] );
    refalrts::push_stack( vm, context[42] );
    refalrts::link_brackets( context[15], context[16] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[40], context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[27], context[28] );
    res = refalrts::splice_evar( res, context[41], context[42] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_evar( res, context[35], context[36] );
    res = refalrts::splice_evar( res, context[4], context[15] );
    res = refalrts::splice_evar( res, context[37], context[38] );
    res = refalrts::splice_evar( res, context[39], context[40] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & FindDivision=3/4 (/7 e.FirstImage/5 )/8 (/11 e.FirstSentence$a/9 )/12 (/15 e.Sentences/13 )/16 e.TrivialGCG/2 >/1
  // closed e.FirstImage as range 5
  // closed e.FirstSentence$a as range 9
  // closed e.Sentences as range 13
  // closed e.TrivialGCG as range 2
  //DEBUG: e.FirstImage: 5
  //DEBUG: e.FirstSentence$a: 9
  //DEBUG: e.Sentences: 13
  //DEBUG: e.TrivialGCG: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoFindDivision@0/4 HalfReuse: 50/7 } (/17 Tile{ AsIs: e.TrivialGCG/2 } Tile{ HalfReuse: )/1 } (/18 Tile{ AsIs: e.FirstImage/5 } )/19 Tile{ HalfReuse: (/8 AsIs: (/11 AsIs: e.FirstSentence$a/9 AsIs: )/12 HalfReuse: )/15 AsIs: e.Sentences/13 HalfReuse: >/16 } Tile{ ]] }
  refalrts::alloc_open_bracket(vm, context[17]);
  refalrts::alloc_open_bracket(vm, context[18]);
  refalrts::alloc_close_bracket(vm, context[19]);
  refalrts::update_name(context[4], functions[efunc_gen_DoFindDivision_Z0]);
  refalrts::reinit_number(context[7], 50UL);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::reinit_open_bracket(context[8]);
  refalrts::reinit_close_bracket(context[15]);
  refalrts::reinit_close_call(context[16]);
  refalrts::push_stack( vm, context[16] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[8], context[15] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[18], context[19] );
  refalrts::link_brackets( context[17], context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[8], context[16] );
  res = refalrts::splice_elem( res, context[19] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_elem( res, context[18] );
  res = refalrts::splice_elem( res, context[1] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_elem( res, context[17] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_FindDivision_A3("FindDivision=3", COOKIE1_, COOKIE2_, func_gen_FindDivision_A3);


static refalrts::FnResult func_gen_FindDivision_A2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
  // </0 & FindDivision=2/4 (/7 e.Sentences/5 )/8 (/11 e.FirstImage/9 )/12 e.FirstSentence$a/2 >/1
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
  // closed e.Sentences as range 5
  // closed e.FirstImage as range 9
  // closed e.FirstSentence$a as range 2
  //DEBUG: e.Sentences: 5
  //DEBUG: e.FirstImage: 9
  //DEBUG: e.FirstSentence$a: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & FindDivision=3/4 AsIs: (/7 } Tile{ AsIs: e.FirstImage/9 } Tile{ AsIs: )/8 AsIs: (/11 } Tile{ AsIs: e.FirstSentence$a/2 } Tile{ AsIs: )/12 } (/13 Tile{ AsIs: e.Sentences/5 } )/14 </15 & Map@3/16 e.FirstImage/9/17 >/19 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[13]);
  refalrts::alloc_close_bracket(vm, context[14]);
  refalrts::alloc_open_call(vm, context[15]);
  refalrts::alloc_name(vm, context[16], functions[efunc_gen_Map_Z3]);
  refalrts::copy_evar(vm, context[17], context[18], context[9], context[10]);
  refalrts::alloc_close_call(vm, context[19]);
  refalrts::update_name(context[4], functions[efunc_gen_FindDivision_A3]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[19] );
  refalrts::push_stack( vm, context[15] );
  refalrts::link_brackets( context[13], context[14] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[14], context[19] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_elem( res, context[13] );
  res = refalrts::splice_elem( res, context[12] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[8], context[11] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_FindDivision_A2("FindDivision=2", COOKIE1_, COOKIE2_, func_gen_FindDivision_A2);


static refalrts::FnResult func_FindDivision(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
  // </0 & FindDivision/4 (/7 e.FirstSentence/5 )/8 e.Sentences/2 >/1
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
  // closed e.FirstSentence as range 5
  // closed e.Sentences as range 2
  //DEBUG: e.FirstSentence: 5
  //DEBUG: e.Sentences: 2
  //2: e.Sentences
  //5: e.FirstSentence
  //12: e.FirstSentence

  refalrts::reset_allocator(vm);
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::alloc_open_call(vm, context[9]);
  refalrts::alloc_name(vm, context[11], functions[efunc_gen_FindDivision_C1]);
  refalrts::copy_evar(vm, context[12], context[13], context[5], context[6]);
  refalrts::alloc_close_call(vm, context[10]);
  refalrts::push_stack( vm, context[10] );
  refalrts::push_stack( vm, context[9] );
  res = refalrts::splice_elem( res, context[10] );
  res = refalrts::splice_evar( res, context[12], context[13] );
  res = refalrts::splice_elem( res, context[11] );
  res = refalrts::splice_elem( res, context[9] );
  refalrts::use( res );
  refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
  if (rec_res != refalrts::cSuccess)
    return rec_res;
  refalrts::this_is_generated_function(vm);
  do {
    // </9 & FindDivision?1/13 (/16 e.FirstSubst/14 )/17 e.FirstConditions/11 (/20 e.FirstResult/18 )/21 >/10
    context[11] = 0;
    context[12] = 0;
    context[13] = refalrts::call_left( context[11], context[12], context[9], context[10] );
    context[14] = 0;
    context[15] = 0;
    context[16] = refalrts::brackets_left( context[14], context[15], context[11], context[12] );
    if( ! context[16] )
      continue;
    refalrts::bracket_pointers(context[16], context[17]);
    context[18] = 0;
    context[19] = 0;
    context[20] = refalrts::brackets_right( context[18], context[19], context[11], context[12] );
    if( ! context[20] )
      continue;
    refalrts::bracket_pointers(context[20], context[21]);
    // closed e.FirstSubst as range 14
    // closed e.FirstConditions as range 11
    // closed e.FirstResult as range 18
    //DEBUG: e.FirstSentence: 5
    //DEBUG: e.Sentences: 2
    //DEBUG: e.FirstSubst: 14
    //DEBUG: e.FirstConditions: 11
    //DEBUG: e.FirstResult: 18

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} )/8 {REMOVED TILE} {REMOVED TILE} (/16 e.FirstSubst/14 {REMOVED TILE} e.FirstConditions/11 (/20 e.FirstResult/18 )/21 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & FindDivision=2/4 AsIs: (/7 } Tile{ AsIs: e.Sentences/2 } Tile{ AsIs: )/17 } Tile{ AsIs: </9 Reuse: & ImagedSentence/13 } Tile{ AsIs: e.FirstSentence/5 } Tile{ AsIs: >/10 AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_gen_FindDivision_A2]);
    refalrts::update_name(context[13], functions[efunc_ImagedSentence]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[10] );
    refalrts::push_stack( vm, context[9] );
    refalrts::link_brackets( context[7], context[17] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[10];
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[9], context[13] );
    res = refalrts::splice_elem( res, context[17] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    refalrts::splice_to_freelist_open( vm, context[7], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  refalrts::splice_to_freelist(vm, context[9], context[10]);
  return refalrts::cRecognitionImpossible;
}

static refalrts::NativeReference nat_ref_FindDivision("FindDivision", COOKIE1_, COOKIE2_, func_FindDivision);


static refalrts::FnResult func_MAXm_GROUPm_LEN(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 5 elems
  refalrts::Iter context[5];
  refalrts::zeros( context, 5 );
  // </0 & MAX-GROUP-LEN/4 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & MAX-GROUP-LEN/4 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: 50/1 ]] }
  refalrts::reinit_number(context[1], 50UL);
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_MAXm_GROUPm_LEN("MAX-GROUP-LEN", COOKIE1_, COOKIE2_, func_MAXm_GROUPm_LEN);


static refalrts::FnResult func_gen_ImagedSentence_A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & ImagedSentence=1/4 (/7 e.Subst/5 )/8 (/11 e.Conditions/9 )/12 (/15 e.Result/13 )/16 e.SubstImage/2 >/1
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
  // closed e.Subst as range 5
  // closed e.Conditions as range 9
  // closed e.Result as range 13
  // closed e.SubstImage as range 2
  //DEBUG: e.Subst: 5
  //DEBUG: e.Conditions: 9
  //DEBUG: e.Result: 13
  //DEBUG: e.SubstImage: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} (/11 {REMOVED TILE} )/12 {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.SubstImage/2 } Tile{ HalfReuse: )/4 AsIs: (/7 AsIs: e.Subst/5 AsIs: )/8 } Tile{ AsIs: e.Conditions/9 } Tile{ AsIs: (/15 AsIs: e.Result/13 AsIs: )/16 } Tile{ ]] }
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_close_bracket(context[4]);
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[0], context[4] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[15], context[16] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[4], context[8] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::splice_to_freelist_open( vm, context[0], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ImagedSentence_A1("ImagedSentence=1", COOKIE1_, COOKIE2_, func_gen_ImagedSentence_A1);


static refalrts::FnResult func_ImagedSentence(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
  // </0 & ImagedSentence/4 (/7 e.Subst/5 )/8 e.Conditions/2 (/11 e.Result/9 )/12 >/1
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
  // closed e.Subst as range 5
  // closed e.Conditions as range 2
  // closed e.Result as range 9
  //DEBUG: e.Subst: 5
  //DEBUG: e.Conditions: 2
  //DEBUG: e.Result: 9

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & ImagedSentence=1/4 AsIs: (/7 AsIs: e.Subst/5 AsIs: )/8 } (/13 Tile{ AsIs: e.Conditions/2 } )/14 Tile{ AsIs: (/11 AsIs: e.Result/9 AsIs: )/12 HalfReuse: </1 } & Map@4/15 e.Subst/5/16 >/18 >/19 Tile{ ]] }
  refalrts::alloc_open_bracket(vm, context[13]);
  refalrts::alloc_close_bracket(vm, context[14]);
  refalrts::alloc_name(vm, context[15], functions[efunc_gen_Map_Z4]);
  refalrts::copy_evar(vm, context[16], context[17], context[5], context[6]);
  refalrts::alloc_close_call(vm, context[18]);
  refalrts::alloc_close_call(vm, context[19]);
  refalrts::update_name(context[4], functions[efunc_gen_ImagedSentence_A1]);
  refalrts::reinit_open_call(context[1]);
  refalrts::push_stack( vm, context[19] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[18] );
  refalrts::push_stack( vm, context[1] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[13], context[14] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[15], context[19] );
  res = refalrts::splice_evar( res, context[11], context[1] );
  res = refalrts::splice_elem( res, context[14] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_elem( res, context[13] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ImagedSentence("ImagedSentence", COOKIE1_, COOKIE2_, func_ImagedSentence);


static refalrts::FnResult func_MakeTrivialSubstImage(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 5 elems
  refalrts::Iter context[5];
  refalrts::zeros( context, 5 );
  // </0 & MakeTrivialSubstImage/4 e.SubstImage/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.SubstImage as range 2
  //DEBUG: e.SubstImage: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map@3/4 AsIs: e.SubstImage/2 AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_gen_Map_Z3]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_MakeTrivialSubstImage("MakeTrivialSubstImage", COOKIE1_, COOKIE2_, func_MakeTrivialSubstImage);


static refalrts::FnResult func_gen_DoFindDivision_S3B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 40 elems
  refalrts::Iter context[40];
  refalrts::zeros( context, 40 );
  // </0 & DoFindDivision$3:1/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & DoFindDivision$3:1/4 (/7 e.new1/5 )/8 (/11 e.new2/9 )/12 (/15 e.new3/13 )/16 (/19 e.new4/17 )/20 (/23 e.new5/21 )/24 s.new6/25 e.new7/2 >/1
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
  if( ! refalrts::svar_left( context[25], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new7 as range 2
  do {
    // </0 & DoFindDivision$3:1/4 (/7 e.TrivialGCG/26 )/8 (/11 e.Image/28 )/12 (/15 e.FirstGroup/30 )/16 (/19 e.NextSentence$a/32 )/20 (/23 e.Sentences/34 )/24 s.Counter/25 e.TrivialGCG/38 >/1
    context[26] = context[5];
    context[27] = context[6];
    context[28] = context[9];
    context[29] = context[10];
    context[30] = context[13];
    context[31] = context[14];
    context[32] = context[17];
    context[33] = context[18];
    context[34] = context[21];
    context[35] = context[22];
    context[36] = context[2];
    context[37] = context[3];
    // closed e.TrivialGCG as range 26
    if( ! refalrts::repeated_evar_left( vm, context[38], context[39], context[26], context[27], context[36], context[37] ) )
      continue;
    if( ! refalrts::empty_seq( context[36], context[37] ) )
      continue;
    // closed e.Image as range 28
    // closed e.FirstGroup as range 30
    // closed e.NextSentence$a as range 32
    // closed e.Sentences as range 34
    //DEBUG: s.Counter: 25
    //DEBUG: e.TrivialGCG: 26
    //DEBUG: e.Image: 28
    //DEBUG: e.FirstGroup: 30
    //DEBUG: e.NextSentence$a: 32
    //DEBUG: e.Sentences: 34

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} e.TrivialGCG/26 )/8 (/11 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} )/24 s.Counter/25 e.TrivialGCG/38 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: # ForGroup/0 HalfReuse: (/4 HalfReuse: </7 } Tile{ HalfReuse: & Map@5/23 } Tile{ AsIs: e.Image/28 } Tile{ AsIs: >/1 } Tile{ AsIs: )/12 AsIs: (/15 AsIs: e.FirstGroup/30 AsIs: )/16 AsIs: (/19 AsIs: e.NextSentence$a/32 AsIs: )/20 } Tile{ AsIs: e.Sentences/34 } Tile{ ]] }
    refalrts::reinit_ident(context[0], identifiers[ident_ForGroup]);
    refalrts::reinit_open_bracket(context[4]);
    refalrts::reinit_open_call(context[7]);
    refalrts::reinit_name(context[23], functions[efunc_gen_Map_Z5]);
    refalrts::link_brackets( context[19], context[20] );
    refalrts::link_brackets( context[15], context[16] );
    refalrts::link_brackets( context[4], context[12] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[7] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[34], context[35] );
    res = refalrts::splice_evar( res, context[12], context[20] );
    res = refalrts::splice_elem( res, context[1] );
    res = refalrts::splice_evar( res, context[28], context[29] );
    res = refalrts::splice_elem( res, context[23] );
    refalrts::splice_to_freelist_open( vm, context[7], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoFindDivision$3:1/4 (/7 e.TrivialGCG/5 )/8 (/11 e.Image/9 )/12 (/15 e.FirstGroup/13 )/16 (/19 e.NextSentence$a/17 )/20 (/23 e.Sentences/21 )/24 s.Counter/25 e.NewImage$a/2 >/1
  // closed e.TrivialGCG as range 5
  // closed e.Image as range 9
  // closed e.FirstGroup as range 13
  // closed e.NextSentence$a as range 17
  // closed e.Sentences as range 21
  // closed e.NewImage$a as range 2
  //DEBUG: s.Counter: 25
  //DEBUG: e.TrivialGCG: 5
  //DEBUG: e.Image: 9
  //DEBUG: e.FirstGroup: 13
  //DEBUG: e.NextSentence$a: 17
  //DEBUG: e.Sentences: 21
  //DEBUG: e.NewImage$a: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} e.Image/9 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </26 & DoFindDivision/27 Tile{ HalfReuse: </16 } Tile{ HalfReuse: & Sub/1 } Tile{ AsIs: s.Counter/25 } Tile{ HalfReuse: 1/0 HalfReuse: >/4 AsIs: (/7 AsIs: e.TrivialGCG/5 AsIs: )/8 AsIs: (/11 } Tile{ AsIs: e.NewImage$a/2 } Tile{ AsIs: )/12 AsIs: (/15 } Tile{ AsIs: e.FirstGroup/13 } Tile{ AsIs: (/19 AsIs: e.NextSentence$a/17 AsIs: )/20 HalfReuse: )/23 AsIs: e.Sentences/21 HalfReuse: >/24 } Tile{ ]] }
  refalrts::alloc_open_call(vm, context[26]);
  refalrts::alloc_name(vm, context[27], functions[efunc_DoFindDivision]);
  refalrts::reinit_open_call(context[16]);
  refalrts::reinit_name(context[1], functions[efunc_Sub]);
  refalrts::reinit_number(context[0], 1UL);
  refalrts::reinit_close_call(context[4]);
  refalrts::reinit_close_bracket(context[23]);
  refalrts::reinit_close_call(context[24]);
  refalrts::push_stack( vm, context[24] );
  refalrts::push_stack( vm, context[26] );
  refalrts::link_brackets( context[15], context[23] );
  refalrts::link_brackets( context[19], context[20] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::push_stack( vm, context[4] );
  refalrts::push_stack( vm, context[16] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[19], context[24] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[12], context[15] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[0], context[11] );
  res = refalrts::splice_elem( res, context[25] );
  res = refalrts::splice_elem( res, context[1] );
  res = refalrts::splice_elem( res, context[16] );
  res = refalrts::splice_evar( res, context[26], context[27] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoFindDivision_S3B1("DoFindDivision$3:1", COOKIE1_, COOKIE2_, func_gen_DoFindDivision_S3B1);


static refalrts::FnResult func_gen_DoFindDivision_S3A2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 26 elems
  refalrts::Iter context[26];
  refalrts::zeros( context, 26 );
  // </0 & DoFindDivision$3=2/4 (/7 e.TrivialGCG/5 )/8 (/11 e.Image/9 )/12 (/15 e.FirstGroup/13 )/16 (/19 e.NextSentence$a/17 )/20 (/23 e.Sentences/21 )/24 s.Counter/25 e.NewImage/2 >/1
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
  // closed e.TrivialGCG as range 5
  // closed e.Image as range 9
  // closed e.FirstGroup as range 13
  // closed e.NextSentence$a as range 17
  // closed e.Sentences as range 21
  if( ! refalrts::svar_left( context[25], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.NewImage as range 2
  //DEBUG: e.TrivialGCG: 5
  //DEBUG: e.Image: 9
  //DEBUG: e.FirstGroup: 13
  //DEBUG: e.NextSentence$a: 17
  //DEBUG: e.Sentences: 21
  //DEBUG: s.Counter: 25
  //DEBUG: e.NewImage: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoFindDivision$3:1/4 AsIs: (/7 AsIs: e.TrivialGCG/5 AsIs: )/8 AsIs: (/11 AsIs: e.Image/9 AsIs: )/12 AsIs: (/15 AsIs: e.FirstGroup/13 AsIs: )/16 AsIs: (/19 AsIs: e.NextSentence$a/17 AsIs: )/20 AsIs: (/23 AsIs: e.Sentences/21 AsIs: )/24 AsIs: s.Counter/25 AsIs: e.NewImage/2 AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_gen_DoFindDivision_S3B1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[23], context[24] );
  refalrts::link_brackets( context[19], context[20] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoFindDivision_S3A2("DoFindDivision$3=2", COOKIE1_, COOKIE2_, func_gen_DoFindDivision_S3A2);


static refalrts::FnResult func_gen_DoFindDivision_S3A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 35 elems
  refalrts::Iter context[35];
  refalrts::zeros( context, 35 );
  // </0 & DoFindDivision$3=1/4 (/7 e.TrivialGCG/5 )/8 (/11 e.Image/9 )/12 (/15 e.FirstGroup/13 )/16 (/19 e.Sentences/17 )/20 s.Counter/21 (/24 e.NextImage/22 )/25 e.NextSentence$a/2 >/1
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
  // closed e.TrivialGCG as range 5
  // closed e.Image as range 9
  // closed e.FirstGroup as range 13
  // closed e.Sentences as range 17
  if( ! refalrts::svar_left( context[21], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[22] = 0;
  context[23] = 0;
  context[24] = refalrts::brackets_left( context[22], context[23], context[2], context[3] );
  if( ! context[24] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[24], context[25]);
  // closed e.NextImage as range 22
  // closed e.NextSentence$a as range 2
  //DEBUG: e.TrivialGCG: 5
  //DEBUG: e.Image: 9
  //DEBUG: e.FirstGroup: 13
  //DEBUG: e.Sentences: 17
  //DEBUG: s.Counter: 21
  //DEBUG: e.NextImage: 22
  //DEBUG: e.NextSentence$a: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoFindDivision$3=2/4 AsIs: (/7 AsIs: e.TrivialGCG/5 AsIs: )/8 AsIs: (/11 AsIs: e.Image/9 AsIs: )/12 AsIs: (/15 AsIs: e.FirstGroup/13 AsIs: )/16 AsIs: (/19 } Tile{ AsIs: e.NextSentence$a/2 } )/26 (/27 Tile{ AsIs: e.Sentences/17 } Tile{ AsIs: )/20 AsIs: s.Counter/21 } </28 & Subst-Generalization/29 (/30 e.Image/9/31 )/33 Tile{ AsIs: (/24 AsIs: e.NextImage/22 AsIs: )/25 } >/34 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_close_bracket(vm, context[26]);
  refalrts::alloc_open_bracket(vm, context[27]);
  refalrts::alloc_open_call(vm, context[28]);
  refalrts::alloc_name(vm, context[29], functions[efunc_Substm_Generalization]);
  refalrts::alloc_open_bracket(vm, context[30]);
  refalrts::copy_evar(vm, context[31], context[32], context[9], context[10]);
  refalrts::alloc_close_bracket(vm, context[33]);
  refalrts::alloc_close_call(vm, context[34]);
  refalrts::update_name(context[4], functions[efunc_gen_DoFindDivision_S3A2]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[34] );
  refalrts::push_stack( vm, context[28] );
  refalrts::link_brackets( context[24], context[25] );
  refalrts::link_brackets( context[30], context[33] );
  refalrts::link_brackets( context[27], context[20] );
  refalrts::link_brackets( context[19], context[26] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_elem( res, context[34] );
  res = refalrts::splice_evar( res, context[24], context[25] );
  res = refalrts::splice_evar( res, context[28], context[33] );
  res = refalrts::splice_evar( res, context[20], context[21] );
  res = refalrts::splice_evar( res, context[17], context[18] );
  res = refalrts::splice_evar( res, context[26], context[27] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoFindDivision_S3A1("DoFindDivision$3=1", COOKIE1_, COOKIE2_, func_gen_DoFindDivision_S3A1);


static refalrts::FnResult func_DoFindDivision(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 50 elems
  refalrts::Iter context[50];
  refalrts::zeros( context, 50 );
  // </0 & DoFindDivision/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & DoFindDivision/4 s.new1/5 (/8 e.new2/6 )/9 (/12 e.new3/10 )/13 (/16 e.new4/14 )/17 e.new5/2 >/1
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
  // closed e.new4 as range 14
  // closed e.new5 as range 2
  do {
    // </0 & DoFindDivision/4 s.Counter/5 (/8 e.TrivialGCG/18 )/9 (/12 e.Image/20 )/13 (/16 e.FirstGroup/22 )/17 >/1
    context[18] = context[6];
    context[19] = context[7];
    context[20] = context[10];
    context[21] = context[11];
    context[22] = context[14];
    context[23] = context[15];
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.TrivialGCG as range 18
    // closed e.Image as range 20
    // closed e.FirstGroup as range 22
    //DEBUG: s.Counter: 5
    //DEBUG: e.TrivialGCG: 18
    //DEBUG: e.Image: 20
    //DEBUG: e.FirstGroup: 22

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} s.Counter/5 (/8 e.TrivialGCG/18 {REMOVED TILE} {REMOVED TILE} )/17 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: # ForAllSentences/0 HalfReuse: (/4 } Tile{ HalfReuse: </9 HalfReuse: & Map@5/12 AsIs: e.Image/20 HalfReuse: >/13 HalfReuse: )/16 } Tile{ AsIs: e.FirstGroup/22 } Tile{ ]] }
    refalrts::reinit_ident(context[0], identifiers[ident_ForAllSentences]);
    refalrts::reinit_open_bracket(context[4]);
    refalrts::reinit_open_call(context[9]);
    refalrts::reinit_name(context[12], functions[efunc_gen_Map_Z5]);
    refalrts::reinit_close_call(context[13]);
    refalrts::reinit_close_bracket(context[16]);
    refalrts::link_brackets( context[4], context[16] );
    refalrts::push_stack( vm, context[13] );
    refalrts::push_stack( vm, context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[22], context[23] );
    res = refalrts::splice_evar( res, context[9], context[16] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoFindDivision/4 0/5 (/8 e.TrivialGCG/18 )/9 (/12 e.Image/20 )/13 (/16 e.FirstGroup/22 )/17 e.SecondGroup/24 >/1
    context[18] = context[6];
    context[19] = context[7];
    context[20] = context[10];
    context[21] = context[11];
    context[22] = context[14];
    context[23] = context[15];
    context[24] = context[2];
    context[25] = context[3];
    if( ! refalrts::number_term( 0UL, context[5] ) )
      continue;
    // closed e.TrivialGCG as range 18
    // closed e.Image as range 20
    // closed e.FirstGroup as range 22
    // closed e.SecondGroup as range 24
    //DEBUG: e.TrivialGCG: 18
    //DEBUG: e.Image: 20
    //DEBUG: e.FirstGroup: 22
    //DEBUG: e.SecondGroup: 24

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} e.TrivialGCG/18 )/9 (/12 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: # ForGroup/0 HalfReuse: (/4 HalfReuse: </5 HalfReuse: & Map@5/8 } Tile{ AsIs: e.Image/20 } Tile{ AsIs: >/1 } Tile{ AsIs: )/13 AsIs: (/16 AsIs: e.FirstGroup/22 AsIs: )/17 } Tile{ AsIs: e.SecondGroup/24 } Tile{ ]] }
    refalrts::reinit_ident(context[0], identifiers[ident_ForGroup]);
    refalrts::reinit_open_bracket(context[4]);
    refalrts::reinit_open_call(context[5]);
    refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z5]);
    refalrts::link_brackets( context[16], context[17] );
    refalrts::link_brackets( context[4], context[13] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[5] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[24], context[25] );
    res = refalrts::splice_evar( res, context[13], context[17] );
    res = refalrts::splice_elem( res, context[1] );
    res = refalrts::splice_evar( res, context[20], context[21] );
    refalrts::splice_to_freelist_open( vm, context[8], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoFindDivision/4 s.new6/5 (/8 e.new9/6 )/9 (/12 e.new10/10 )/13 (/16 e.new11/14 )/17 (/20 e.new7/18 )/21 e.new8/2 >/1
  context[18] = 0;
  context[19] = 0;
  context[20] = refalrts::brackets_left( context[18], context[19], context[2], context[3] );
  if( ! context[20] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[20], context[21]);
  // closed e.new9 as range 6
  // closed e.new10 as range 10
  // closed e.new11 as range 14
  // closed e.new7 as range 18
  // closed e.new8 as range 2
  do {
    // </0 & DoFindDivision/4 s.Counter/5 (/8 e.TrivialGCG/22 )/9 (/12 e.Image/24 )/13 (/16 e.FirstGroup/26 )/17 (/20 (/34 e.0/32 )/35 e.1/28 (/38 e.2/36 )/39 )/21 e.Sentences/30 >/1
    context[22] = context[6];
    context[23] = context[7];
    context[24] = context[10];
    context[25] = context[11];
    context[26] = context[14];
    context[27] = context[15];
    context[28] = context[18];
    context[29] = context[19];
    context[30] = context[2];
    context[31] = context[3];
    context[32] = 0;
    context[33] = 0;
    context[34] = refalrts::brackets_left( context[32], context[33], context[28], context[29] );
    if( ! context[34] )
      continue;
    refalrts::bracket_pointers(context[34], context[35]);
    context[36] = 0;
    context[37] = 0;
    context[38] = refalrts::brackets_right( context[36], context[37], context[28], context[29] );
    if( ! context[38] )
      continue;
    refalrts::bracket_pointers(context[38], context[39]);
    // closed e.TrivialGCG as range 22
    // closed e.Image as range 24
    // closed e.FirstGroup as range 26
    // closed e.0 as range 32
    // closed e.1 as range 28
    // closed e.2 as range 36
    // closed e.Sentences as range 30
    //DEBUG: s.Counter: 5
    //DEBUG: e.TrivialGCG: 22
    //DEBUG: e.Image: 24
    //DEBUG: e.FirstGroup: 26
    //DEBUG: e.0: 32
    //DEBUG: e.1: 28
    //DEBUG: e.2: 36
    //DEBUG: e.Sentences: 30

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoFindDivision$3=1/4 } Tile{ AsIs: (/8 AsIs: e.TrivialGCG/22 AsIs: )/9 AsIs: (/12 AsIs: e.Image/24 AsIs: )/13 AsIs: (/16 AsIs: e.FirstGroup/26 AsIs: )/17 AsIs: (/20 } Tile{ AsIs: e.Sentences/30 } )/40 Tile{ AsIs: s.Counter/5 } </41 & ImagedSentence=1/42 Tile{ AsIs: (/34 AsIs: e.0/32 AsIs: )/35 } (/43 Tile{ AsIs: e.1/28 } )/44 Tile{ AsIs: (/38 AsIs: e.2/36 AsIs: )/39 HalfReuse: </21 } & Map@4/45 e.0/32/46 >/48 >/49 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_close_bracket(vm, context[40]);
    refalrts::alloc_open_call(vm, context[41]);
    refalrts::alloc_name(vm, context[42], functions[efunc_gen_ImagedSentence_A1]);
    refalrts::alloc_open_bracket(vm, context[43]);
    refalrts::alloc_close_bracket(vm, context[44]);
    refalrts::alloc_name(vm, context[45], functions[efunc_gen_Map_Z4]);
    refalrts::copy_evar(vm, context[46], context[47], context[32], context[33]);
    refalrts::alloc_close_call(vm, context[48]);
    refalrts::alloc_close_call(vm, context[49]);
    refalrts::update_name(context[4], functions[efunc_gen_DoFindDivision_S3A1]);
    refalrts::reinit_open_call(context[21]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[49] );
    refalrts::push_stack( vm, context[41] );
    refalrts::push_stack( vm, context[48] );
    refalrts::push_stack( vm, context[21] );
    refalrts::link_brackets( context[38], context[39] );
    refalrts::link_brackets( context[43], context[44] );
    refalrts::link_brackets( context[34], context[35] );
    refalrts::link_brackets( context[20], context[40] );
    refalrts::link_brackets( context[16], context[17] );
    refalrts::link_brackets( context[12], context[13] );
    refalrts::link_brackets( context[8], context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[45], context[49] );
    res = refalrts::splice_evar( res, context[38], context[21] );
    res = refalrts::splice_elem( res, context[44] );
    res = refalrts::splice_evar( res, context[28], context[29] );
    res = refalrts::splice_elem( res, context[43] );
    res = refalrts::splice_evar( res, context[34], context[35] );
    res = refalrts::splice_evar( res, context[41], context[42] );
    res = refalrts::splice_elem( res, context[5] );
    res = refalrts::splice_elem( res, context[40] );
    res = refalrts::splice_evar( res, context[30], context[31] );
    res = refalrts::splice_evar( res, context[8], context[20] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoFindDivision/4 s.Counter/5 (/8 e.TrivialGCG/6 )/9 (/12 e.Image/10 )/13 (/16 e.FirstGroup/14 )/17 (/20 e.NextSentence/18 )/21 e.Sentences/2 >/1
  // closed e.TrivialGCG as range 6
  // closed e.Image as range 10
  // closed e.FirstGroup as range 14
  // closed e.NextSentence as range 18
  // closed e.Sentences as range 2
  //DEBUG: s.Counter: 5
  //DEBUG: e.TrivialGCG: 6
  //DEBUG: e.Image: 10
  //DEBUG: e.FirstGroup: 14
  //DEBUG: e.NextSentence: 18
  //DEBUG: e.Sentences: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoFindDivision$3=1/4 } Tile{ AsIs: (/8 AsIs: e.TrivialGCG/6 AsIs: )/9 AsIs: (/12 AsIs: e.Image/10 AsIs: )/13 AsIs: (/16 AsIs: e.FirstGroup/14 AsIs: )/17 AsIs: (/20 } Tile{ AsIs: e.Sentences/2 } Tile{ AsIs: )/21 } Tile{ AsIs: s.Counter/5 } </22 & ImagedSentence*1/23 Tile{ AsIs: e.NextSentence/18 } >/24 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[22]);
  refalrts::alloc_name(vm, context[23], functions[efunc_gen_ImagedSentence_D1]);
  refalrts::alloc_close_call(vm, context[24]);
  refalrts::update_name(context[4], functions[efunc_gen_DoFindDivision_S3A1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[24] );
  refalrts::push_stack( vm, context[22] );
  refalrts::link_brackets( context[20], context[21] );
  refalrts::link_brackets( context[16], context[17] );
  refalrts::link_brackets( context[12], context[13] );
  refalrts::link_brackets( context[8], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_elem( res, context[24] );
  res = refalrts::splice_evar( res, context[18], context[19] );
  res = refalrts::splice_evar( res, context[22], context[23] );
  res = refalrts::splice_elem( res, context[5] );
  res = refalrts::splice_elem( res, context[21] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[8], context[20] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_DoFindDivision("DoFindDivision", COOKIE1_, COOKIE2_, func_DoFindDivision);


static refalrts::FnResult func_NarrowSentenceSubstitutions(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  // </0 & NarrowSentenceSubstitutions/4 (/7 e.NewGCG-Subst/5 )/8 e.Sentences/2 >/1
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
  // closed e.NewGCG-Subst as range 5
  // closed e.Sentences as range 2
  //DEBUG: e.NewGCG-Subst: 5
  //DEBUG: e.Sentences: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map@2/4 AsIs: (/7 AsIs: e.NewGCG-Subst/5 AsIs: )/8 AsIs: e.Sentences/2 AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_gen_Map_Z2]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_NarrowSentenceSubstitutions("NarrowSentenceSubstitutions", COOKIE1_, COOKIE2_, func_NarrowSentenceSubstitutions);


static refalrts::FnResult func_gen_NarrowSubst_S1A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  // </0 & NarrowSubst$1=1/4 (/7 e.GCG-Substs-B/5 )/8 (/11 e.GCG-Substs-E/9 )/12 (/15 e.SentenceSubsts/13 )/16 # Clear/17 e.NarrowSubsts/2 >/1
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
  context[17] = refalrts::ident_left( identifiers[ident_Clear], context[2], context[3] );
  if( ! context[17] )
    return refalrts::cRecognitionImpossible;
  // closed e.GCG-Substs-B as range 5
  // closed e.GCG-Substs-E as range 9
  // closed e.SentenceSubsts as range 13
  // closed e.NarrowSubsts as range 2
  //DEBUG: e.GCG-Substs-B: 5
  //DEBUG: e.GCG-Substs-E: 9
  //DEBUG: e.SentenceSubsts: 13
  //DEBUG: e.NarrowSubsts: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} )/8 (/11 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.NarrowSubsts/2 } Tile{ AsIs: </0 Reuse: & NarrowSubst/4 AsIs: (/7 } Tile{ AsIs: e.GCG-Substs-B/5 } Tile{ AsIs: e.GCG-Substs-E/9 } Tile{ AsIs: )/12 AsIs: (/15 AsIs: e.SentenceSubsts/13 AsIs: )/16 HalfReuse: >/17 } Tile{ ]] }
  refalrts::update_name(context[4], functions[efunc_NarrowSubst]);
  refalrts::reinit_close_call(context[17]);
  refalrts::push_stack( vm, context[17] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[7], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[12], context[17] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[0], context[7] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_NarrowSubst_S1A1("NarrowSubst$1=1", COOKIE1_, COOKIE2_, func_gen_NarrowSubst_S1A1);


static refalrts::FnResult func_NarrowSubst(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 41 elems
  refalrts::Iter context[41];
  refalrts::zeros( context, 41 );
  // </0 & NarrowSubst/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & NarrowSubst/4 (/7 e.new1/5 )/8 (/11 e.new2/9 )/12 >/1
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
    // </0 & NarrowSubst/4 (/7 e.GCG-Substs-B/26 (/32 e.GCG/30 ':'/38 (/36 e.Var/39 )/37 )/33 e.GCG-Substs-E/28 )/8 (/11 (/19 e.Pattern/17 ':'/25 (/23 e.Var/21 )/24 )/20 e.SentenceSubsts/15 )/12 >/1
    context[13] = context[5];
    context[14] = context[6];
    context[15] = context[9];
    context[16] = context[10];
    context[17] = 0;
    context[18] = 0;
    context[19] = refalrts::brackets_left( context[17], context[18], context[15], context[16] );
    if( ! context[19] )
      continue;
    refalrts::bracket_pointers(context[19], context[20]);
    context[21] = 0;
    context[22] = 0;
    context[23] = refalrts::brackets_right( context[21], context[22], context[17], context[18] );
    if( ! context[23] )
      continue;
    refalrts::bracket_pointers(context[23], context[24]);
    context[25] = refalrts::char_right( ':', context[17], context[18] );
    if( ! context[25] )
      continue;
    // closed e.Pattern as range 17
    // closed e.Var as range 21
    // closed e.SentenceSubsts as range 15
    context[26] = 0;
    context[27] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[28] = context[13];
      context[29] = context[14];
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
      context[38] = refalrts::char_right( ':', context[30], context[31] );
      if( ! context[38] )
        continue;
      if( ! refalrts::repeated_evar_left( vm, context[39], context[40], context[21], context[22], context[34], context[35] ) )
        continue;
      if( ! refalrts::empty_seq( context[34], context[35] ) )
        continue;
      // closed e.GCG as range 30
      // closed e.GCG-Substs-E as range 28
      //DEBUG: e.Pattern: 17
      //DEBUG: e.Var: 21
      //DEBUG: e.SentenceSubsts: 15
      //DEBUG: e.GCG-Substs-B: 26
      //DEBUG: e.GCG: 30
      //DEBUG: e.GCG-Substs-E: 28

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} ':'/38 {REMOVED TILE} e.Var/39 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.Var/21 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & NarrowSubst$1=1/4 AsIs: (/7 AsIs: e.GCG-Substs-B/26 HalfReuse: )/32 } Tile{ AsIs: (/36 } Tile{ AsIs: e.GCG-Substs-E/28 } Tile{ AsIs: )/24 HalfReuse: (/20 AsIs: e.SentenceSubsts/15 AsIs: )/12 } Tile{ HalfReuse: </8 HalfReuse: & GenericMatch/11 AsIs: (/19 AsIs: e.Pattern/17 HalfReuse: )/25 AsIs: (/23 } Tile{ AsIs: e.GCG/30 } Tile{ AsIs: )/37 HalfReuse: >/33 } Tile{ AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_gen_NarrowSubst_S1A1]);
      refalrts::reinit_close_bracket(context[32]);
      refalrts::reinit_open_bracket(context[20]);
      refalrts::reinit_open_call(context[8]);
      refalrts::reinit_name(context[11], functions[efunc_GenericMatch]);
      refalrts::reinit_close_bracket(context[25]);
      refalrts::reinit_close_call(context[33]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[33] );
      refalrts::push_stack( vm, context[8] );
      refalrts::link_brackets( context[23], context[37] );
      refalrts::link_brackets( context[19], context[25] );
      refalrts::link_brackets( context[20], context[12] );
      refalrts::link_brackets( context[36], context[24] );
      refalrts::link_brackets( context[7], context[32] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[37], context[33] );
      res = refalrts::splice_evar( res, context[30], context[31] );
      res = refalrts::splice_evar( res, context[8], context[23] );
      res = refalrts::splice_evar( res, context[24], context[12] );
      res = refalrts::splice_evar( res, context[28], context[29] );
      res = refalrts::splice_elem( res, context[36] );
      refalrts::splice_to_freelist_open( vm, context[32], res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[26], context[27], context[13], context[14] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & NarrowSubst/4 (/7 )/8 (/11 )/12 >/1
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[9], context[10] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & NarrowSubst/4 (/7 )/8 (/11 )/12 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_NarrowSubst("NarrowSubst", COOKIE1_, COOKIE2_, func_NarrowSubst);


static refalrts::FnResult func_Substm_BuildImage(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 5 elems
  refalrts::Iter context[5];
  refalrts::zeros( context, 5 );
  // </0 & Subst-BuildImage/4 e.Substitution/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Substitution as range 2
  //DEBUG: e.Substitution: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map@4/4 AsIs: e.Substitution/2 AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_gen_Map_Z4]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Substm_BuildImage("Subst-BuildImage", COOKIE1_, COOKIE2_, func_Substm_BuildImage);


static refalrts::FnResult func_Substm_Generalization(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 59 elems
  refalrts::Iter context[59];
  refalrts::zeros( context, 59 );
  // </0 & Subst-Generalization/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & Subst-Generalization/4 (/7 e.new1/5 )/8 (/11 e.new2/9 )/12 >/1
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
    // </0 & Subst-Generalization/4 (/7 (/19 t.new3/37 ':'/29 (/27 s.new4/35 e.new5/25 )/28 )/20 e.new6/13 )/8 (/11 (/23 t.new7/39 ':'/34 (/32 s.new8/36 e.new9/30 )/33 )/24 e.new10/15 )/12 >/1
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
    context[21] = 0;
    context[22] = 0;
    context[23] = refalrts::brackets_left( context[21], context[22], context[15], context[16] );
    if( ! context[23] )
      continue;
    refalrts::bracket_pointers(context[23], context[24]);
    context[25] = 0;
    context[26] = 0;
    context[27] = refalrts::brackets_right( context[25], context[26], context[17], context[18] );
    if( ! context[27] )
      continue;
    refalrts::bracket_pointers(context[27], context[28]);
    context[29] = refalrts::char_right( ':', context[17], context[18] );
    if( ! context[29] )
      continue;
    context[30] = 0;
    context[31] = 0;
    context[32] = refalrts::brackets_right( context[30], context[31], context[21], context[22] );
    if( ! context[32] )
      continue;
    refalrts::bracket_pointers(context[32], context[33]);
    context[34] = refalrts::char_right( ':', context[21], context[22] );
    if( ! context[34] )
      continue;
    // closed e.new6 as range 13
    // closed e.new10 as range 15
    if( ! refalrts::svar_left( context[35], context[25], context[26] ) )
      continue;
    // closed e.new5 as range 25
    if( ! refalrts::svar_left( context[36], context[30], context[31] ) )
      continue;
    // closed e.new9 as range 30
    context[38] = refalrts::tvar_left( context[37], context[17], context[18] );
    if( ! context[38] )
      continue;
    if( ! refalrts::empty_seq( context[17], context[18] ) )
      continue;
    context[40] = refalrts::tvar_left( context[39], context[21], context[22] );
    if( ! context[40] )
      continue;
    if( ! refalrts::empty_seq( context[21], context[22] ) )
      continue;
    do {
      // </0 & Subst-Generalization/4 (/7 (/19 t.Image1/37 ':'/29 (/27 'e'/35 e.Index/41 )/28 )/20 e.Images1/43 )/8 (/11 (/23 t.Image2/39 ':'/34 (/32 'e'/36 e.Index/49 )/33 )/24 e.Images2/47 )/12 >/1
      context[41] = context[25];
      context[42] = context[26];
      context[43] = context[13];
      context[44] = context[14];
      context[45] = context[30];
      context[46] = context[31];
      context[47] = context[15];
      context[48] = context[16];
      if( ! refalrts::char_term( 'e', context[35] ) )
        continue;
      if( ! refalrts::char_term( 'e', context[36] ) )
        continue;
      // closed e.Index as range 41
      if( ! refalrts::repeated_evar_left( vm, context[49], context[50], context[41], context[42], context[45], context[46] ) )
        continue;
      if( ! refalrts::empty_seq( context[45], context[46] ) )
        continue;
      // closed e.Images1 as range 43
      // closed e.Images2 as range 47
      //DEBUG: t.Image1: 37
      //DEBUG: t.Image2: 39
      //DEBUG: e.Index: 41
      //DEBUG: e.Images1: 43
      //DEBUG: e.Images2: 47

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} (/19 {REMOVED TILE} ':'/29 (/27 {REMOVED TILE} e.Index/41 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: </4 HalfReuse: & Generalization/7 } Tile{ AsIs: t.Image1/37 } Tile{ AsIs: t.Image2/39 } Tile{ HalfReuse: >/35 } Tile{ AsIs: ':'/34 AsIs: (/32 AsIs: 'e'/36 AsIs: e.Index/49 AsIs: )/33 AsIs: )/24 } Tile{ HalfReuse: </23 } Tile{ HalfReuse: & Subst-Generalization/28 HalfReuse: (/20 AsIs: e.Images1/43 AsIs: )/8 AsIs: (/11 } Tile{ AsIs: e.Images2/47 } Tile{ AsIs: )/12 AsIs: >/1 ]] }
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_open_call(context[4]);
      refalrts::reinit_name(context[7], functions[efunc_Generalization]);
      refalrts::reinit_close_call(context[35]);
      refalrts::reinit_open_call(context[23]);
      refalrts::reinit_name(context[28], functions[efunc_Substm_Generalization]);
      refalrts::reinit_open_bracket(context[20]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[23] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[20], context[8] );
      refalrts::link_brackets( context[0], context[24] );
      refalrts::link_brackets( context[32], context[33] );
      refalrts::push_stack( vm, context[35] );
      refalrts::push_stack( vm, context[4] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[12];
      res = refalrts::splice_evar( res, context[47], context[48] );
      res = refalrts::splice_evar( res, context[28], context[11] );
      res = refalrts::splice_elem( res, context[23] );
      res = refalrts::splice_evar( res, context[34], context[24] );
      res = refalrts::splice_elem( res, context[35] );
      res = refalrts::splice_evar( res, context[39], context[40] );
      res = refalrts::splice_evar( res, context[37], context[38] );
      refalrts::splice_to_freelist_open( vm, context[7], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Subst-Generalization/4 (/7 (/19 t.Image1/37 ':'/29 (/27 't'/35 e.Index/41 )/28 )/20 e.Images1/43 )/8 (/11 (/23 t.Image2/39 ':'/34 (/32 't'/36 e.Index/49 )/33 )/24 e.Images2/47 )/12 >/1
      context[41] = context[25];
      context[42] = context[26];
      context[43] = context[13];
      context[44] = context[14];
      context[45] = context[30];
      context[46] = context[31];
      context[47] = context[15];
      context[48] = context[16];
      if( ! refalrts::char_term( 't', context[35] ) )
        continue;
      if( ! refalrts::char_term( 't', context[36] ) )
        continue;
      // closed e.Index as range 41
      if( ! refalrts::repeated_evar_left( vm, context[49], context[50], context[41], context[42], context[45], context[46] ) )
        continue;
      if( ! refalrts::empty_seq( context[45], context[46] ) )
        continue;
      // closed e.Images1 as range 43
      // closed e.Images2 as range 47
      //DEBUG: t.Image1: 37
      //DEBUG: t.Image2: 39
      //DEBUG: e.Index: 41
      //DEBUG: e.Images1: 43
      //DEBUG: e.Images2: 47

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} (/19 {REMOVED TILE} ':'/29 (/27 {REMOVED TILE} e.Index/41 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: </4 HalfReuse: & Generalization-Term/7 } Tile{ AsIs: t.Image1/37 } Tile{ AsIs: t.Image2/39 } Tile{ HalfReuse: >/35 } Tile{ AsIs: ':'/34 AsIs: (/32 AsIs: 't'/36 AsIs: e.Index/49 AsIs: )/33 AsIs: )/24 } Tile{ HalfReuse: </23 } Tile{ HalfReuse: & Subst-Generalization/28 HalfReuse: (/20 AsIs: e.Images1/43 AsIs: )/8 AsIs: (/11 } Tile{ AsIs: e.Images2/47 } Tile{ AsIs: )/12 AsIs: >/1 ]] }
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_open_call(context[4]);
      refalrts::reinit_name(context[7], functions[efunc_Generalizationm_Term]);
      refalrts::reinit_close_call(context[35]);
      refalrts::reinit_open_call(context[23]);
      refalrts::reinit_name(context[28], functions[efunc_Substm_Generalization]);
      refalrts::reinit_open_bracket(context[20]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[23] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[20], context[8] );
      refalrts::link_brackets( context[0], context[24] );
      refalrts::link_brackets( context[32], context[33] );
      refalrts::push_stack( vm, context[35] );
      refalrts::push_stack( vm, context[4] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[12];
      res = refalrts::splice_evar( res, context[47], context[48] );
      res = refalrts::splice_evar( res, context[28], context[11] );
      res = refalrts::splice_elem( res, context[23] );
      res = refalrts::splice_evar( res, context[34], context[24] );
      res = refalrts::splice_elem( res, context[35] );
      res = refalrts::splice_evar( res, context[39], context[40] );
      res = refalrts::splice_evar( res, context[37], context[38] );
      refalrts::splice_to_freelist_open( vm, context[7], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Subst-Generalization/4 (/7 (/19 t.new12/37 ':'/29 (/27 's'/35 e.new13/41 )/28 )/20 e.new11/43 )/8 (/11 (/23 t.new15/39 ':'/34 (/32 's'/36 e.new16/45 )/33 )/24 e.new14/47 )/12 >/1
    context[41] = context[25];
    context[42] = context[26];
    context[43] = context[13];
    context[44] = context[14];
    context[45] = context[30];
    context[46] = context[31];
    context[47] = context[15];
    context[48] = context[16];
    if( ! refalrts::char_term( 's', context[35] ) )
      continue;
    if( ! refalrts::char_term( 's', context[36] ) )
      continue;
    // closed e.new13 as range 41
    // closed e.new11 as range 43
    // closed e.new16 as range 45
    // closed e.new14 as range 47
    do {
      // </0 & Subst-Generalization/4 (/7 (/19 t.Image/37 ':'/29 (/27 's'/35 e.Index/49 )/28 )/20 e.Images1/51 )/8 (/11 (/23 t.Image/39 ':'/34 (/32 's'/36 e.Index/57 )/33 )/24 e.Images2/55 )/12 >/1
      context[49] = context[41];
      context[50] = context[42];
      context[51] = context[43];
      context[52] = context[44];
      context[53] = context[45];
      context[54] = context[46];
      context[55] = context[47];
      context[56] = context[48];
      if( ! refalrts::repeated_stvar_term( vm, context[39], context[37] ) )
        continue;
      // closed e.Index as range 49
      if( ! refalrts::repeated_evar_left( vm, context[57], context[58], context[49], context[50], context[53], context[54] ) )
        continue;
      if( ! refalrts::empty_seq( context[53], context[54] ) )
        continue;
      // closed e.Images1 as range 51
      // closed e.Images2 as range 55
      //DEBUG: t.Image: 37
      //DEBUG: e.Index: 49
      //DEBUG: e.Images1: 51
      //DEBUG: e.Images2: 55

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} & Subst-Generalization/4 (/7 (/19 t.Image/37 ':'/29 (/27 's'/35 e.Index/49 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/23 AsIs: t.Image/39 AsIs: ':'/34 AsIs: (/32 AsIs: 's'/36 AsIs: e.Index/57 AsIs: )/33 AsIs: )/24 } Tile{ AsIs: </0 } Tile{ HalfReuse: & Subst-Generalization/28 HalfReuse: (/20 AsIs: e.Images1/51 AsIs: )/8 AsIs: (/11 } Tile{ AsIs: e.Images2/55 } Tile{ AsIs: )/12 AsIs: >/1 ]] }
      refalrts::reinit_name(context[28], functions[efunc_Substm_Generalization]);
      refalrts::reinit_open_bracket(context[20]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[20], context[8] );
      refalrts::link_brackets( context[23], context[24] );
      refalrts::link_brackets( context[32], context[33] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[12];
      res = refalrts::splice_evar( res, context[55], context[56] );
      res = refalrts::splice_evar( res, context[28], context[11] );
      res = refalrts::splice_elem( res, context[0] );
      res = refalrts::splice_evar( res, context[23], context[24] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Subst-Generalization/4 (/7 (/19 t.Image1/37 ':'/29 (/27 's'/35 e.Index/49 )/28 )/20 e.Images1/51 )/8 (/11 (/23 t.Image2/39 ':'/34 (/32 's'/36 e.Index/57 )/33 )/24 e.Images2/55 )/12 >/1
    context[49] = context[41];
    context[50] = context[42];
    context[51] = context[43];
    context[52] = context[44];
    context[53] = context[45];
    context[54] = context[46];
    context[55] = context[47];
    context[56] = context[48];
    // closed e.Index as range 49
    if( ! refalrts::repeated_evar_left( vm, context[57], context[58], context[49], context[50], context[53], context[54] ) )
      continue;
    if( ! refalrts::empty_seq( context[53], context[54] ) )
      continue;
    // closed e.Images1 as range 51
    // closed e.Images2 as range 55
    //DEBUG: t.Image1: 37
    //DEBUG: t.Image2: 39
    //DEBUG: e.Index: 49
    //DEBUG: e.Images1: 51
    //DEBUG: e.Images2: 55

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} t.Image1/37 ':'/29 (/27 {REMOVED TILE} e.Index/49 {REMOVED TILE} {REMOVED TILE} t.Image2/39 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: (/4 HalfReuse: # Var/7 HalfReuse: 's'/19 } Tile{ HalfReuse: )/23 } Tile{ AsIs: ':'/34 AsIs: (/32 AsIs: 's'/36 AsIs: e.Index/57 AsIs: )/33 AsIs: )/24 } Tile{ HalfReuse: </35 } Tile{ HalfReuse: & Subst-Generalization/28 HalfReuse: (/20 AsIs: e.Images1/51 AsIs: )/8 AsIs: (/11 } Tile{ AsIs: e.Images2/55 } Tile{ AsIs: )/12 AsIs: >/1 ]] }
    refalrts::reinit_open_bracket(context[0]);
    refalrts::reinit_open_bracket(context[4]);
    refalrts::reinit_ident(context[7], identifiers[ident_Var]);
    refalrts::reinit_char(context[19], 's');
    refalrts::reinit_close_bracket(context[23]);
    refalrts::reinit_open_call(context[35]);
    refalrts::reinit_name(context[28], functions[efunc_Substm_Generalization]);
    refalrts::reinit_open_bracket(context[20]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[35] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[20], context[8] );
    refalrts::link_brackets( context[0], context[24] );
    refalrts::link_brackets( context[32], context[33] );
    refalrts::link_brackets( context[4], context[23] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[12];
    res = refalrts::splice_evar( res, context[55], context[56] );
    res = refalrts::splice_evar( res, context[28], context[11] );
    res = refalrts::splice_elem( res, context[35] );
    res = refalrts::splice_evar( res, context[34], context[24] );
    res = refalrts::splice_elem( res, context[23] );
    refalrts::splice_to_freelist_open( vm, context[19], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Subst-Generalization/4 (/7 )/8 (/11 )/12 >/1
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[9], context[10] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Subst-Generalization/4 (/7 )/8 (/11 )/12 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Substm_Generalization("Subst-Generalization", COOKIE1_, COOKIE2_, func_Substm_Generalization);


static refalrts::FnResult func_Substm_Collapse(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 5 elems
  refalrts::Iter context[5];
  refalrts::zeros( context, 5 );
  // </0 & Subst-Collapse/4 e.Substitution/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Substitution as range 2
  //DEBUG: e.Substitution: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map@5/4 AsIs: e.Substitution/2 AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_gen_Map_Z5]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Substm_Collapse("Subst-Collapse", COOKIE1_, COOKIE2_, func_Substm_Collapse);


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


static refalrts::FnResult func_gen_FindDivisionAndGenerate_Z1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  // </0 & FindDivisionAndGenerate@1/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & FindDivisionAndGenerate@1/4 s.new1/5 s.new2/6 (/9 e.new3/7 )/10 e.new4/2 s.new5/11 >/1
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
  if( ! refalrts::svar_right( context[11], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new4 as range 2
  do {
    // </0 & FindDivisionAndGenerate@1/4 s.FnGenSubst0/5 s.FnGenResult0/6 (/9 e.MarkedPattern0/12 )/10 e.SentencesWithSubst0/14 s.ContextSize0/11 >/1
    context[12] = context[7];
    context[13] = context[8];
    context[14] = context[2];
    context[15] = context[3];
    // closed e.MarkedPattern0 as range 12
    // closed e.SentencesWithSubst0 as range 14
    //DEBUG: s.FnGenSubst0: 5
    //DEBUG: s.FnGenResult0: 6
    //DEBUG: s.ContextSize0: 11
    //DEBUG: e.MarkedPattern0: 12
    //DEBUG: e.SentencesWithSubst0: 14

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & FindDivisionAndGenerate:1@1/4 AsIs: s.FnGenSubst0/5 AsIs: s.FnGenResult0/6 AsIs: (/9 AsIs: e.MarkedPattern0/12 AsIs: )/10 } Tile{ AsIs: s.ContextSize0/11 } </16 & FindDivision/17 Tile{ AsIs: e.SentencesWithSubst0/14 } >/18 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[16]);
    refalrts::alloc_name(vm, context[17], functions[efunc_FindDivision]);
    refalrts::alloc_close_call(vm, context[18]);
    refalrts::update_name(context[4], functions[efunc_gen_FindDivisionAndGenerate_B1Z1]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[18] );
    refalrts::push_stack( vm, context[16] );
    refalrts::link_brackets( context[9], context[10] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_elem( res, context[18] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_elem( res, context[11] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & FindDivisionAndGenerate@1/4 s.FnGenSubst0/5 s.FnGenResult0/6 (/9 e.MarkedPattern0/7 )/10 e.SentencesWithSubst0/2 s.ContextSize0/11 >/1
  // closed e.MarkedPattern0 as range 7
  // closed e.SentencesWithSubst0 as range 2
  //DEBUG: s.FnGenSubst0: 5
  //DEBUG: s.FnGenResult0: 6
  //DEBUG: s.ContextSize0: 11
  //DEBUG: e.MarkedPattern0: 7
  //DEBUG: e.SentencesWithSubst0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & FindDivisionAndGenerate@0/4 AsIs: s.FnGenSubst0/5 AsIs: s.FnGenResult0/6 AsIs: (/9 AsIs: e.MarkedPattern0/7 AsIs: )/10 } (/12 Tile{ AsIs: e.SentencesWithSubst0/2 } )/13 Tile{ AsIs: s.ContextSize0/11 } 1/14 0/15 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[12]);
  refalrts::alloc_close_bracket(vm, context[13]);
  refalrts::alloc_number(vm, context[14], 1UL);
  refalrts::alloc_number(vm, context[15], 0UL);
  refalrts::update_name(context[4], functions[efunc_gen_FindDivisionAndGenerate_Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[12], context[13] );
  refalrts::link_brackets( context[9], context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[14], context[15] );
  res = refalrts::splice_elem( res, context[11] );
  res = refalrts::splice_elem( res, context[13] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_elem( res, context[12] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_FindDivisionAndGenerate_Z1("FindDivisionAndGenerate@1", COOKIE1_, COOKIE2_, func_gen_FindDivisionAndGenerate_Z1);


static refalrts::FnResult func_gen_Map_Z1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 28 elems
  refalrts::Iter context[28];
  refalrts::zeros( context, 28 );
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
      // </0 & Map@1/4 (/7 (/15 e.1/13 )/16 e.2/11 (/19 e.3/17 )/20 )/8 e.Tail/9 >/1
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
      // closed e.1 as range 13
      // closed e.2 as range 11
      // closed e.3 as range 17
      // closed e.Tail as range 9
      //DEBUG: e.1: 13
      //DEBUG: e.2: 11
      //DEBUG: e.3: 17
      //DEBUG: e.Tail: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: (/4 AsIs: (/7 } Tile{ AsIs: e.1/13 } ':'/21 Tile{ AsIs: (/15 }"enew"/22 )/24 )/25 Tile{ AsIs: )/16 AsIs: e.2/11 AsIs: (/19 AsIs: e.3/17 AsIs: )/20 AsIs: )/8 } </26 & Map@1/27 Tile{ AsIs: e.Tail/9 } Tile{ AsIs: >/1 ]] }
      refalrts::alloc_char(vm, context[21], ':');
      refalrts::alloc_chars(vm, context[22], context[23], "enew", 4);
      refalrts::alloc_close_bracket(vm, context[24]);
      refalrts::alloc_close_bracket(vm, context[25]);
      refalrts::alloc_open_call(vm, context[26]);
      refalrts::alloc_name(vm, context[27], functions[efunc_gen_Map_Z1]);
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_open_bracket(context[4]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[26] );
      refalrts::link_brackets( context[0], context[8] );
      refalrts::link_brackets( context[19], context[20] );
      refalrts::link_brackets( context[4], context[16] );
      refalrts::link_brackets( context[7], context[25] );
      refalrts::link_brackets( context[15], context[24] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[9], context[10] );
      res = refalrts::splice_evar( res, context[26], context[27] );
      res = refalrts::splice_evar( res, context[16], context[8] );
      res = refalrts::splice_evar( res, context[22], context[25] );
      res = refalrts::splice_elem( res, context[15] );
      res = refalrts::splice_elem( res, context[21] );
      res = refalrts::splice_evar( res, context[13], context[14] );
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
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & HighLevelRASL-Function-Conjoint=1\1*1/4 AsIs: t.Next/7 } >/11 </12 & Map@1/13 Tile{ AsIs: e.Tail/9 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_close_call(vm, context[11]);
    refalrts::alloc_open_call(vm, context[12]);
    refalrts::alloc_name(vm, context[13], functions[efunc_gen_Map_Z1]);
    refalrts::update_name(context[4], functions[efunc_gen_HighLevelRASLm_Functionm_Conjoint_A1L1D1]);
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

  // </0 & Map@1/4 e.items/2 >/1
  // closed e.items as range 2
  //DEBUG: e.items: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Map@0/0 Reuse: & HighLevelRASL-Function-Conjoint=1\1@0/4 AsIs: e.items/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::reinit_name(context[0], functions[efunc_gen_Map_Z0]);
  refalrts::update_name(context[4], functions[efunc_gen_HighLevelRASLm_Functionm_Conjoint_A1L1Z0]);
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
  // issue here memory for vars with 38 elems
  refalrts::Iter context[38];
  refalrts::zeros( context, 38 );
  // </0 & Map@2/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & Map@2/4 (/7 e.new1/5 )/8 e.new2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new1 as range 5
  // closed e.new2 as range 2
  do {
    // </0 & Map@2/4 (/7 e.new5/9 )/8 t.new3/13 e.new4/11 >/1
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
      // </0 & Map@2/4 (/7 e.NewGCG-Subst$a/15 )/8 (/13 (/23 e.1/21 )/24 e.2/19 (/27 e.3/25 )/28 )/14 e.Tail/17 >/1
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
      // closed e.NewGCG-Subst$a as range 15
      // closed e.1 as range 21
      // closed e.2 as range 19
      // closed e.3 as range 25
      // closed e.Tail as range 17
      //DEBUG: e.NewGCG-Subst$a: 15
      //DEBUG: e.1: 21
      //DEBUG: e.2: 19
      //DEBUG: e.3: 25
      //DEBUG: e.Tail: 17

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/23 } (/29 Tile{ AsIs: </0 Reuse: & NarrowSubst/4 AsIs: (/7 AsIs: e.NewGCG-Subst$a/15 AsIs: )/8 AsIs: (/13 } Tile{ AsIs: e.1/21 } )/30 >/31 Tile{ AsIs: )/24 AsIs: e.2/19 AsIs: (/27 AsIs: e.3/25 AsIs: )/28 AsIs: )/14 } </32 & Map@2/33 (/34 e.NewGCG-Subst$a/15/35 )/37 Tile{ AsIs: e.Tail/17 } Tile{ AsIs: >/1 ]] }
      refalrts::alloc_open_bracket(vm, context[29]);
      refalrts::alloc_close_bracket(vm, context[30]);
      refalrts::alloc_close_call(vm, context[31]);
      refalrts::alloc_open_call(vm, context[32]);
      refalrts::alloc_name(vm, context[33], functions[efunc_gen_Map_Z2]);
      refalrts::alloc_open_bracket(vm, context[34]);
      refalrts::copy_evar(vm, context[35], context[36], context[15], context[16]);
      refalrts::alloc_close_bracket(vm, context[37]);
      refalrts::update_name(context[4], functions[efunc_NarrowSubst]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[32] );
      refalrts::link_brackets( context[34], context[37] );
      refalrts::link_brackets( context[23], context[14] );
      refalrts::link_brackets( context[27], context[28] );
      refalrts::link_brackets( context[29], context[24] );
      refalrts::push_stack( vm, context[31] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[13], context[30] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[17], context[18] );
      res = refalrts::splice_evar( res, context[32], context[37] );
      res = refalrts::splice_evar( res, context[24], context[14] );
      res = refalrts::splice_evar( res, context[30], context[31] );
      res = refalrts::splice_evar( res, context[21], context[22] );
      res = refalrts::splice_evar( res, context[0], context[13] );
      res = refalrts::splice_elem( res, context[29] );
      res = refalrts::splice_elem( res, context[23] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Map@2/4 (/7 e.NewGCG-Subst$a/15 )/8 t.Next/13 e.Tail/17 >/1
    context[15] = context[9];
    context[16] = context[10];
    context[17] = context[11];
    context[18] = context[12];
    // closed e.NewGCG-Subst$a as range 15
    // closed e.Tail as range 17
    //DEBUG: t.Next: 13
    //DEBUG: e.NewGCG-Subst$a: 15
    //DEBUG: e.Tail: 17

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & NarrowSentenceSubstitutions\1*1/4 AsIs: (/7 AsIs: e.NewGCG-Subst$a/15 AsIs: )/8 AsIs: t.Next/13 } >/19 </20 & Map@2/21 (/22 e.NewGCG-Subst$a/15/23 )/25 Tile{ AsIs: e.Tail/17 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_close_call(vm, context[19]);
    refalrts::alloc_open_call(vm, context[20]);
    refalrts::alloc_name(vm, context[21], functions[efunc_gen_Map_Z2]);
    refalrts::alloc_open_bracket(vm, context[22]);
    refalrts::copy_evar(vm, context[23], context[24], context[15], context[16]);
    refalrts::alloc_close_bracket(vm, context[25]);
    refalrts::update_name(context[4], functions[efunc_gen_NarrowSentenceSubstitutions_L1D1]);
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
    // </0 & Map@2/4 (/7 e.NewGCG-Subst$a/9 )/8 >/1
    context[9] = context[5];
    context[10] = context[6];
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.NewGCG-Subst$a as range 9
    //DEBUG: e.NewGCG-Subst$a: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Map@2/4 (/7 e.NewGCG-Subst$a/9 )/8 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Map@2/4 (/7 e.NewGCG-Subst$a/5 )/8 e.items/2 >/1
  // closed e.NewGCG-Subst$a as range 5
  // closed e.items as range 2
  //DEBUG: e.NewGCG-Subst$a: 5
  //DEBUG: e.items: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </9 & Map@0/10 Tile{ HalfReuse: [*]/0 Reuse: & NarrowSentenceSubstitutions\1@0/4 AsIs: (/7 AsIs: e.NewGCG-Subst$a/5 AsIs: )/8 } {*}/11 Tile{ AsIs: e.items/2 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[9]);
  refalrts::alloc_name(vm, context[10], functions[efunc_gen_Map_Z0]);
  refalrts::alloc_unwrapped_closure(vm, context[11], context[0]);
  refalrts::reinit_closure_head(context[0]);
  refalrts::update_name(context[4], functions[efunc_gen_NarrowSentenceSubstitutions_L1Z0]);
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

static refalrts::NativeReference nat_ref_gen_Map_Z2("Map@2", COOKIE1_, COOKIE2_, func_gen_Map_Z2);


static refalrts::FnResult func_gen_DoMapAccum_Z1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 35 elems
  refalrts::Iter context[35];
  refalrts::zeros( context, 35 );
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
      // </0 & DoMapAccum@1/4 s.NextNumber/5 (/9 e.Scanned/17 )/10 (/15 e.2/21 ':'/27 (/25 e.1/23 )/26 )/16 e.Tail/19 >/1
      context[17] = context[11];
      context[18] = context[12];
      context[19] = context[13];
      context[20] = context[14];
      context[21] = 0;
      context[22] = 0;
      if( ! refalrts::brackets_term( context[21], context[22], context[15] ) )
        continue;
      if( ! refalrts::svar_term( context[5], context[5] ) )
        continue;
      context[23] = 0;
      context[24] = 0;
      context[25] = refalrts::brackets_right( context[23], context[24], context[21], context[22] );
      if( ! context[25] )
        continue;
      refalrts::bracket_pointers(context[25], context[26]);
      context[27] = refalrts::char_right( ':', context[21], context[22] );
      if( ! context[27] )
        continue;
      // closed e.Scanned as range 17
      // closed e.2 as range 21
      // closed e.1 as range 23
      // closed e.Tail as range 19
      //DEBUG: s.NextNumber: 5
      //DEBUG: e.Scanned: 17
      //DEBUG: e.2: 21
      //DEBUG: e.1: 23
      //DEBUG: e.Tail: 19

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum$1=1@1/4 } Tile{ AsIs: (/9 AsIs: e.Scanned/17 AsIs: )/10 AsIs: (/15 } Tile{ AsIs: e.Tail/19 } )/28 </29 Tile{ HalfReuse: & EnumerateVars-Subst\1=1/27 AsIs: (/25 AsIs: e.1/23 AsIs: )/26 HalfReuse: </16 } & DoMapAccum@2/30 Tile{ AsIs: s.NextNumber/5 } (/31 )/32 Tile{ AsIs: e.2/21 } >/33 >/34 Tile{ AsIs: >/1 ]] }
      refalrts::alloc_close_bracket(vm, context[28]);
      refalrts::alloc_open_call(vm, context[29]);
      refalrts::alloc_name(vm, context[30], functions[efunc_gen_DoMapAccum_Z2]);
      refalrts::alloc_open_bracket(vm, context[31]);
      refalrts::alloc_close_bracket(vm, context[32]);
      refalrts::alloc_close_call(vm, context[33]);
      refalrts::alloc_close_call(vm, context[34]);
      refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_S1A1Z1]);
      refalrts::reinit_name(context[27], functions[efunc_gen_EnumerateVarsm_Subst_L1A1]);
      refalrts::reinit_open_call(context[16]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[34] );
      refalrts::push_stack( vm, context[29] );
      refalrts::push_stack( vm, context[33] );
      refalrts::push_stack( vm, context[16] );
      refalrts::link_brackets( context[31], context[32] );
      refalrts::link_brackets( context[25], context[26] );
      refalrts::link_brackets( context[15], context[28] );
      refalrts::link_brackets( context[9], context[10] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[33], context[34] );
      res = refalrts::splice_evar( res, context[21], context[22] );
      res = refalrts::splice_evar( res, context[31], context[32] );
      res = refalrts::splice_elem( res, context[5] );
      res = refalrts::splice_elem( res, context[30] );
      res = refalrts::splice_evar( res, context[27], context[16] );
      res = refalrts::splice_evar( res, context[28], context[29] );
      res = refalrts::splice_evar( res, context[19], context[20] );
      res = refalrts::splice_evar( res, context[9], context[15] );
      refalrts::use( res );
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
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum$1=1@1/4 } Tile{ AsIs: (/9 AsIs: e.Scanned/17 AsIs: )/10 } (/21 Tile{ AsIs: e.Tail/19 } )/22 </23 & EnumerateVars-Subst\1*1/24 Tile{ AsIs: t.Acc/5 } Tile{ AsIs: t.Next/15 } >/25 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_bracket(vm, context[21]);
    refalrts::alloc_close_bracket(vm, context[22]);
    refalrts::alloc_open_call(vm, context[23]);
    refalrts::alloc_name(vm, context[24], functions[efunc_gen_EnumerateVarsm_Subst_L1D1]);
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
  //RESULT: Tile{ [[ } </11 Tile{ HalfReuse: & DoMapAccum@0/0 Reuse: & EnumerateVars-Subst\1@0/4 AsIs: t.acc/5 AsIs: (/9 AsIs: e.scanned/7 AsIs: )/10 AsIs: e.items/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[11]);
  refalrts::reinit_name(context[0], functions[efunc_gen_DoMapAccum_Z0]);
  refalrts::update_name(context[4], functions[efunc_gen_EnumerateVarsm_Subst_L1Z0]);
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


static refalrts::FnResult func_gen_DoMapAccum_Z2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 48 elems
  refalrts::Iter context[48];
  refalrts::zeros( context, 48 );
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
      // </0 & DoMapAccum@2/4 s.new8/5 (/9 e.new11/17 )/10 t.new9/15 e.new10/19 >/1
      context[17] = context[11];
      context[18] = context[12];
      context[19] = context[13];
      context[20] = context[14];
      if( ! refalrts::svar_term( context[5], context[5] ) )
        continue;
      // closed e.new11 as range 17
      // closed e.new10 as range 19
      do {
        // </0 & DoMapAccum@2/4 s.new12/5 (/9 e.new16/21 )/10 (/15 s.new13/27 e.new14/25 )/16 e.new15/23 >/1
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
          // </0 & DoMapAccum@2/4 s.Next/5 (/9 e.Scanned/28 )/10 (/15 # Var/27 s.Type/34 )/16 e.Tail/32 >/1
          context[28] = context[21];
          context[29] = context[22];
          context[30] = context[25];
          context[31] = context[26];
          context[32] = context[23];
          context[33] = context[24];
          if( ! refalrts::ident_term( identifiers[ident_Var], context[27] ) )
            continue;
          // closed e.Scanned as range 28
          // closed e.Tail as range 32
          if( ! refalrts::svar_left( context[34], context[30], context[31] ) )
            continue;
          if( ! refalrts::empty_seq( context[30], context[31] ) )
            continue;
          //DEBUG: s.Next: 5
          //DEBUG: e.Scanned: 28
          //DEBUG: e.Tail: 32
          //DEBUG: s.Type: 34

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum$1=1@2/4 } Tile{ AsIs: (/9 AsIs: e.Scanned/28 AsIs: )/10 AsIs: (/15 } Tile{ AsIs: e.Tail/32 } )/35 </36 & Add/37 1/38 Tile{ AsIs: s.Next/5 } >/39 (/40 Tile{ AsIs: # Var/27 AsIs: s.Type/34 HalfReuse: 'n'/16 }"ew"/41 </43 & Symb/44 s.Next/5/45 >/46 )/47 Tile{ AsIs: >/1 ]] }
          refalrts::alloc_close_bracket(vm, context[35]);
          refalrts::alloc_open_call(vm, context[36]);
          refalrts::alloc_name(vm, context[37], functions[efunc_Add]);
          refalrts::alloc_number(vm, context[38], 1UL);
          refalrts::alloc_close_call(vm, context[39]);
          refalrts::alloc_open_bracket(vm, context[40]);
          refalrts::alloc_chars(vm, context[41], context[42], "ew", 2);
          refalrts::alloc_open_call(vm, context[43]);
          refalrts::alloc_name(vm, context[44], functions[efunc_Symb]);
          refalrts::copy_stvar(vm, context[45], context[5]);
          refalrts::alloc_close_call(vm, context[46]);
          refalrts::alloc_close_bracket(vm, context[47]);
          refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_S1A1Z2]);
          refalrts::reinit_char(context[16], 'n');
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[0] );
          refalrts::link_brackets( context[40], context[47] );
          refalrts::push_stack( vm, context[46] );
          refalrts::push_stack( vm, context[43] );
          refalrts::push_stack( vm, context[39] );
          refalrts::push_stack( vm, context[36] );
          refalrts::link_brackets( context[15], context[35] );
          refalrts::link_brackets( context[9], context[10] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[1];
          res = refalrts::splice_evar( res, context[41], context[47] );
          res = refalrts::splice_evar( res, context[27], context[16] );
          res = refalrts::splice_evar( res, context[39], context[40] );
          res = refalrts::splice_elem( res, context[5] );
          res = refalrts::splice_evar( res, context[35], context[38] );
          res = refalrts::splice_evar( res, context[32], context[33] );
          res = refalrts::splice_evar( res, context[9], context[15] );
          refalrts::use( res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        do {
          // </0 & DoMapAccum@2/4 s.Next/5 (/9 e.Scanned/28 )/10 (/15 # Brackets/27 e.0/30 )/16 e.Tail/32 >/1
          context[28] = context[21];
          context[29] = context[22];
          context[30] = context[25];
          context[31] = context[26];
          context[32] = context[23];
          context[33] = context[24];
          if( ! refalrts::ident_term( identifiers[ident_Brackets], context[27] ) )
            continue;
          // closed e.Scanned as range 28
          // closed e.0 as range 30
          // closed e.Tail as range 32
          //DEBUG: s.Next: 5
          //DEBUG: e.Scanned: 28
          //DEBUG: e.0: 30
          //DEBUG: e.Tail: 32

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ } </34 & DoMapAccum$1=1@2/35 Tile{ AsIs: (/9 AsIs: e.Scanned/28 AsIs: )/10 AsIs: (/15 } Tile{ AsIs: e.Tail/32 } )/36 </37 & EnumerateVarsRec\1$2=1/38 Tile{ AsIs: </0 AsIs: & DoMapAccum@2/4 AsIs: s.Next/5 } (/39 Tile{ HalfReuse: )/27 AsIs: e.0/30 HalfReuse: >/16 } >/40 Tile{ AsIs: >/1 ]] }
          refalrts::alloc_open_call(vm, context[34]);
          refalrts::alloc_name(vm, context[35], functions[efunc_gen_DoMapAccum_S1A1Z2]);
          refalrts::alloc_close_bracket(vm, context[36]);
          refalrts::alloc_open_call(vm, context[37]);
          refalrts::alloc_name(vm, context[38], functions[efunc_gen_EnumerateVarsRec_L1S2A1]);
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

        // </0 & DoMapAccum@2/4 s.Next/5 (/9 e.Scanned/28 )/10 (/15 # ADT-Brackets/27 (/36 e.2/34 )/37 e.1/30 )/16 e.Tail/32 >/1
        context[28] = context[21];
        context[29] = context[22];
        context[30] = context[25];
        context[31] = context[26];
        context[32] = context[23];
        context[33] = context[24];
        if( ! refalrts::ident_term( identifiers[ident_ADTm_Brackets], context[27] ) )
          continue;
        context[34] = 0;
        context[35] = 0;
        context[36] = refalrts::brackets_left( context[34], context[35], context[30], context[31] );
        if( ! context[36] )
          continue;
        refalrts::bracket_pointers(context[36], context[37]);
        // closed e.Scanned as range 28
        // closed e.2 as range 34
        // closed e.1 as range 30
        // closed e.Tail as range 32
        //DEBUG: s.Next: 5
        //DEBUG: e.Scanned: 28
        //DEBUG: e.2: 34
        //DEBUG: e.1: 30
        //DEBUG: e.Tail: 32

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } </38 & DoMapAccum$1=1@2/39 (/40 Tile{ AsIs: e.Scanned/28 } Tile{ AsIs: )/16 } (/41 Tile{ AsIs: e.Tail/32 } Tile{ AsIs: )/10 HalfReuse: </15 HalfReuse: & EnumerateVarsRec\1$3=1/27 AsIs: (/36 AsIs: e.2/34 AsIs: )/37 } Tile{ AsIs: </0 AsIs: & DoMapAccum@2/4 AsIs: s.Next/5 AsIs: (/9 } )/42 Tile{ AsIs: e.1/30 } >/43 >/44 Tile{ AsIs: >/1 ]] }
        refalrts::alloc_open_call(vm, context[38]);
        refalrts::alloc_name(vm, context[39], functions[efunc_gen_DoMapAccum_S1A1Z2]);
        refalrts::alloc_open_bracket(vm, context[40]);
        refalrts::alloc_open_bracket(vm, context[41]);
        refalrts::alloc_close_bracket(vm, context[42]);
        refalrts::alloc_close_call(vm, context[43]);
        refalrts::alloc_close_call(vm, context[44]);
        refalrts::reinit_open_call(context[15]);
        refalrts::reinit_name(context[27], functions[efunc_gen_EnumerateVarsRec_L1S3A1]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[38] );
        refalrts::push_stack( vm, context[44] );
        refalrts::push_stack( vm, context[15] );
        refalrts::push_stack( vm, context[43] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[9], context[42] );
        refalrts::link_brackets( context[36], context[37] );
        refalrts::link_brackets( context[41], context[10] );
        refalrts::link_brackets( context[40], context[16] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[43], context[44] );
        res = refalrts::splice_evar( res, context[30], context[31] );
        res = refalrts::splice_elem( res, context[42] );
        res = refalrts::splice_evar( res, context[0], context[9] );
        res = refalrts::splice_evar( res, context[10], context[37] );
        res = refalrts::splice_evar( res, context[32], context[33] );
        res = refalrts::splice_elem( res, context[41] );
        res = refalrts::splice_elem( res, context[16] );
        res = refalrts::splice_evar( res, context[28], context[29] );
        res = refalrts::splice_evar( res, context[38], context[40] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & DoMapAccum@2/4 s.Next/5 (/9 e.Scanned/21 )/10 t.Next/15 e.Tail/23 >/1
      context[21] = context[17];
      context[22] = context[18];
      context[23] = context[19];
      context[24] = context[20];
      // closed e.Scanned as range 21
      // closed e.Tail as range 23
      //DEBUG: t.Next: 15
      //DEBUG: s.Next: 5
      //DEBUG: e.Scanned: 21
      //DEBUG: e.Tail: 23

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoMapAccum@2/4 AsIs: s.Next/5 AsIs: (/9 } Tile{ AsIs: e.Scanned/21 } Tile{ AsIs: t.Next/15 } Tile{ AsIs: )/10 } Tile{ AsIs: e.Tail/23 } Tile{ AsIs: >/1 ]] }
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
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum$1=1@2/4 } Tile{ AsIs: (/9 AsIs: e.Scanned/17 AsIs: )/10 } (/21 Tile{ AsIs: e.Tail/19 } )/22 </23 & EnumerateVarsRec\1*4/24 Tile{ AsIs: t.Acc/5 } Tile{ AsIs: t.Next/15 } >/25 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_bracket(vm, context[21]);
    refalrts::alloc_close_bracket(vm, context[22]);
    refalrts::alloc_open_call(vm, context[23]);
    refalrts::alloc_name(vm, context[24], functions[efunc_gen_EnumerateVarsRec_L1D4]);
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
  //RESULT: Tile{ [[ } </11 Tile{ HalfReuse: & DoMapAccum@0/0 Reuse: & EnumerateVarsRec\1@0/4 AsIs: t.acc/5 AsIs: (/9 AsIs: e.scanned/7 AsIs: )/10 AsIs: e.items/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[11]);
  refalrts::reinit_name(context[0], functions[efunc_gen_DoMapAccum_Z0]);
  refalrts::update_name(context[4], functions[efunc_gen_EnumerateVarsRec_L1Z0]);
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
  // issue here memory for vars with 36 elems
  refalrts::Iter context[36];
  refalrts::zeros( context, 36 );
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
      // </0 & Map@3/4 (/7 t.new3/19 ':'/17 (/15 s.new4/18 e.new5/13 )/16 )/8 e.new6/9 >/1
      context[9] = context[5];
      context[10] = context[6];
      context[11] = 0;
      context[12] = 0;
      if( ! refalrts::brackets_term( context[11], context[12], context[7] ) )
        continue;
      context[13] = 0;
      context[14] = 0;
      context[15] = refalrts::brackets_right( context[13], context[14], context[11], context[12] );
      if( ! context[15] )
        continue;
      refalrts::bracket_pointers(context[15], context[16]);
      context[17] = refalrts::char_right( ':', context[11], context[12] );
      if( ! context[17] )
        continue;
      // closed e.new6 as range 9
      if( ! refalrts::svar_left( context[18], context[13], context[14] ) )
        continue;
      // closed e.new5 as range 13
      context[20] = refalrts::tvar_left( context[19], context[11], context[12] );
      if( ! context[20] )
        continue;
      if( ! refalrts::empty_seq( context[11], context[12] ) )
        continue;
      do {
        // </0 & Map@3/4 (/7 t./19 ':'/17 (/15 'e'/18 e.4/21 )/16 )/8 e.Tail/23 >/1
        context[21] = context[13];
        context[22] = context[14];
        context[23] = context[9];
        context[24] = context[10];
        if( ! refalrts::char_term( 'e', context[18] ) )
          continue;
        // closed e.4 as range 21
        // closed e.Tail as range 23
        //DEBUG: t.: 19
        //DEBUG: e.4: 21
        //DEBUG: e.Tail: 23

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} t./19 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: (/4 HalfReuse: # MN/7 } ':'/25 0/26 ','/27 (/28 )/29 ','/30 (/31 )/32 )/33 Tile{ AsIs: ':'/17 AsIs: (/15 AsIs: 'e'/18 AsIs: e.4/21 AsIs: )/16 AsIs: )/8 } </34 & Map@3/35 Tile{ AsIs: e.Tail/23 } Tile{ AsIs: >/1 ]] }
        refalrts::alloc_char(vm, context[25], ':');
        refalrts::alloc_number(vm, context[26], 0UL);
        refalrts::alloc_char(vm, context[27], ',');
        refalrts::alloc_open_bracket(vm, context[28]);
        refalrts::alloc_close_bracket(vm, context[29]);
        refalrts::alloc_char(vm, context[30], ',');
        refalrts::alloc_open_bracket(vm, context[31]);
        refalrts::alloc_close_bracket(vm, context[32]);
        refalrts::alloc_close_bracket(vm, context[33]);
        refalrts::alloc_open_call(vm, context[34]);
        refalrts::alloc_name(vm, context[35], functions[efunc_gen_Map_Z3]);
        refalrts::reinit_open_bracket(context[0]);
        refalrts::reinit_open_bracket(context[4]);
        refalrts::reinit_ident(context[7], identifiers[ident_MN]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[34] );
        refalrts::link_brackets( context[0], context[8] );
        refalrts::link_brackets( context[15], context[16] );
        refalrts::link_brackets( context[4], context[33] );
        refalrts::link_brackets( context[31], context[32] );
        refalrts::link_brackets( context[28], context[29] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[23], context[24] );
        res = refalrts::splice_evar( res, context[34], context[35] );
        res = refalrts::splice_evar( res, context[17], context[8] );
        res = refalrts::splice_evar( res, context[25], context[33] );
        refalrts::splice_to_freelist_open( vm, context[7], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & Map@3/4 (/7 t./19 ':'/17 (/15 s.ST/18 e.4/21 )/16 )/8 e.Tail/23 >/1
      context[21] = context[13];
      context[22] = context[14];
      context[23] = context[9];
      context[24] = context[10];
      // closed e.4 as range 21
      // closed e.Tail as range 23
      //DEBUG: t.: 19
      //DEBUG: s.ST: 18
      //DEBUG: e.4: 21
      //DEBUG: e.Tail: 23

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} t./19 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: (/4 HalfReuse: # Var/7 } s.ST/18/25 )/26 Tile{ AsIs: ':'/17 AsIs: (/15 AsIs: s.ST/18 AsIs: e.4/21 AsIs: )/16 AsIs: )/8 } </27 & Map@3/28 Tile{ AsIs: e.Tail/23 } Tile{ AsIs: >/1 ]] }
      refalrts::copy_stvar(vm, context[25], context[18]);
      refalrts::alloc_close_bracket(vm, context[26]);
      refalrts::alloc_open_call(vm, context[27]);
      refalrts::alloc_name(vm, context[28], functions[efunc_gen_Map_Z3]);
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_open_bracket(context[4]);
      refalrts::reinit_ident(context[7], identifiers[ident_Var]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[27] );
      refalrts::link_brackets( context[0], context[8] );
      refalrts::link_brackets( context[15], context[16] );
      refalrts::link_brackets( context[4], context[26] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[23], context[24] );
      res = refalrts::splice_evar( res, context[27], context[28] );
      res = refalrts::splice_evar( res, context[17], context[8] );
      res = refalrts::splice_evar( res, context[25], context[26] );
      refalrts::splice_to_freelist_open( vm, context[7], res );
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
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & MakeTrivialSubstImage\1*2/4 AsIs: t.Next/7 } >/11 </12 & Map@3/13 Tile{ AsIs: e.Tail/9 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_close_call(vm, context[11]);
    refalrts::alloc_open_call(vm, context[12]);
    refalrts::alloc_name(vm, context[13], functions[efunc_gen_Map_Z3]);
    refalrts::update_name(context[4], functions[efunc_gen_MakeTrivialSubstImage_L1D2]);
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
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Map@0/0 Reuse: & MakeTrivialSubstImage\1@0/4 AsIs: e.items/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::reinit_name(context[0], functions[efunc_gen_Map_Z0]);
  refalrts::update_name(context[4], functions[efunc_gen_MakeTrivialSubstImage_L1Z0]);
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
  // issue here memory for vars with 30 elems
  refalrts::Iter context[30];
  refalrts::zeros( context, 30 );
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
      // </0 & Map@4/4 (/7 e.new3/11 ':'/17 (/15 s.new4/18 e.new5/13 )/16 )/8 e.new6/9 >/1
      context[9] = context[5];
      context[10] = context[6];
      context[11] = 0;
      context[12] = 0;
      if( ! refalrts::brackets_term( context[11], context[12], context[7] ) )
        continue;
      context[13] = 0;
      context[14] = 0;
      context[15] = refalrts::brackets_right( context[13], context[14], context[11], context[12] );
      if( ! context[15] )
        continue;
      refalrts::bracket_pointers(context[15], context[16]);
      context[17] = refalrts::char_right( ':', context[11], context[12] );
      if( ! context[17] )
        continue;
      // closed e.new3 as range 11
      // closed e.new6 as range 9
      if( ! refalrts::svar_left( context[18], context[13], context[14] ) )
        continue;
      // closed e.new5 as range 13
      do {
        // </0 & Map@4/4 (/7 e.2/19 ':'/17 (/15 'e'/18 e.3/21 )/16 )/8 e.Tail/23 >/1
        context[19] = context[11];
        context[20] = context[12];
        context[21] = context[13];
        context[22] = context[14];
        context[23] = context[9];
        context[24] = context[10];
        if( ! refalrts::char_term( 'e', context[18] ) )
          continue;
        // closed e.2 as range 19
        // closed e.3 as range 21
        // closed e.Tail as range 23
        //DEBUG: e.2: 19
        //DEBUG: e.3: 21
        //DEBUG: e.Tail: 23

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: </4 HalfReuse: & BuildImage/7 } Tile{ AsIs: e.2/19 } >/25 Tile{ AsIs: ':'/17 AsIs: (/15 AsIs: 'e'/18 AsIs: e.3/21 AsIs: )/16 AsIs: )/8 } </26 & Map@4/27 Tile{ AsIs: e.Tail/23 } Tile{ AsIs: >/1 ]] }
        refalrts::alloc_close_call(vm, context[25]);
        refalrts::alloc_open_call(vm, context[26]);
        refalrts::alloc_name(vm, context[27], functions[efunc_gen_Map_Z4]);
        refalrts::reinit_open_bracket(context[0]);
        refalrts::reinit_open_call(context[4]);
        refalrts::reinit_name(context[7], functions[efunc_BuildImage]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[26] );
        refalrts::link_brackets( context[0], context[8] );
        refalrts::link_brackets( context[15], context[16] );
        refalrts::push_stack( vm, context[25] );
        refalrts::push_stack( vm, context[4] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[23], context[24] );
        res = refalrts::splice_evar( res, context[26], context[27] );
        res = refalrts::splice_evar( res, context[17], context[8] );
        res = refalrts::splice_elem( res, context[25] );
        res = refalrts::splice_evar( res, context[19], context[20] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & Map@4/4 (/7 t./25 ':'/17 (/15 s.ST/18 e.4/21 )/16 )/8 e.Tail/23 >/1
      context[19] = context[11];
      context[20] = context[12];
      context[21] = context[13];
      context[22] = context[14];
      context[23] = context[9];
      context[24] = context[10];
      // closed e.4 as range 21
      // closed e.Tail as range 23
      context[26] = refalrts::tvar_left( context[25], context[19], context[20] );
      if( ! context[26] )
        continue;
      if( ! refalrts::empty_seq( context[19], context[20] ) )
        continue;
      //DEBUG: s.ST: 18
      //DEBUG: e.4: 21
      //DEBUG: e.Tail: 23
      //DEBUG: t.: 25

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: </4 HalfReuse: & BuildImage-Term/7 AsIs: t./25 } >/27 Tile{ AsIs: ':'/17 AsIs: (/15 AsIs: s.ST/18 AsIs: e.4/21 AsIs: )/16 AsIs: )/8 } </28 & Map@4/29 Tile{ AsIs: e.Tail/23 } Tile{ AsIs: >/1 ]] }
      refalrts::alloc_close_call(vm, context[27]);
      refalrts::alloc_open_call(vm, context[28]);
      refalrts::alloc_name(vm, context[29], functions[efunc_gen_Map_Z4]);
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_open_call(context[4]);
      refalrts::reinit_name(context[7], functions[efunc_BuildImagem_Term]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[28] );
      refalrts::link_brackets( context[0], context[8] );
      refalrts::link_brackets( context[15], context[16] );
      refalrts::push_stack( vm, context[27] );
      refalrts::push_stack( vm, context[4] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[23], context[24] );
      res = refalrts::splice_evar( res, context[28], context[29] );
      res = refalrts::splice_evar( res, context[17], context[8] );
      res = refalrts::splice_elem( res, context[27] );
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
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Subst-BuildImage\1*2/4 AsIs: t.Next/7 } >/11 </12 & Map@4/13 Tile{ AsIs: e.Tail/9 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_close_call(vm, context[11]);
    refalrts::alloc_open_call(vm, context[12]);
    refalrts::alloc_name(vm, context[13], functions[efunc_gen_Map_Z4]);
    refalrts::update_name(context[4], functions[efunc_gen_Substm_BuildImage_L1D2]);
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
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Map@0/0 Reuse: & Subst-BuildImage\1@0/4 AsIs: e.items/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::reinit_name(context[0], functions[efunc_gen_Map_Z0]);
  refalrts::update_name(context[4], functions[efunc_gen_Substm_BuildImage_L1Z0]);
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
  // issue here memory for vars with 28 elems
  refalrts::Iter context[28];
  refalrts::zeros( context, 28 );
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
      // </0 & Map@5/4 (/7 t.new3/19 ':'/17 (/15 s.new4/18 e.new5/13 )/16 )/8 e.new6/9 >/1
      context[9] = context[5];
      context[10] = context[6];
      context[11] = 0;
      context[12] = 0;
      if( ! refalrts::brackets_term( context[11], context[12], context[7] ) )
        continue;
      context[13] = 0;
      context[14] = 0;
      context[15] = refalrts::brackets_right( context[13], context[14], context[11], context[12] );
      if( ! context[15] )
        continue;
      refalrts::bracket_pointers(context[15], context[16]);
      context[17] = refalrts::char_right( ':', context[11], context[12] );
      if( ! context[17] )
        continue;
      // closed e.new6 as range 9
      if( ! refalrts::svar_left( context[18], context[13], context[14] ) )
        continue;
      // closed e.new5 as range 13
      context[20] = refalrts::tvar_left( context[19], context[11], context[12] );
      if( ! context[20] )
        continue;
      if( ! refalrts::empty_seq( context[11], context[12] ) )
        continue;
      do {
        // </0 & Map@5/4 (/7 t./19 ':'/17 (/15 'e'/18 e.4/21 )/16 )/8 e.Tail/23 >/1
        context[21] = context[13];
        context[22] = context[14];
        context[23] = context[9];
        context[24] = context[10];
        if( ! refalrts::char_term( 'e', context[18] ) )
          continue;
        // closed e.4 as range 21
        // closed e.Tail as range 23
        //DEBUG: t.: 19
        //DEBUG: e.4: 21
        //DEBUG: e.Tail: 23

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: </4 HalfReuse: & Collapse/7 AsIs: t./19 } >/25 Tile{ AsIs: ':'/17 AsIs: (/15 AsIs: 'e'/18 AsIs: e.4/21 AsIs: )/16 AsIs: )/8 } </26 & Map@5/27 Tile{ AsIs: e.Tail/23 } Tile{ AsIs: >/1 ]] }
        refalrts::alloc_close_call(vm, context[25]);
        refalrts::alloc_open_call(vm, context[26]);
        refalrts::alloc_name(vm, context[27], functions[efunc_gen_Map_Z5]);
        refalrts::reinit_open_bracket(context[0]);
        refalrts::reinit_open_call(context[4]);
        refalrts::reinit_name(context[7], functions[efunc_Collapse]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[26] );
        refalrts::link_brackets( context[0], context[8] );
        refalrts::link_brackets( context[15], context[16] );
        refalrts::push_stack( vm, context[25] );
        refalrts::push_stack( vm, context[4] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[23], context[24] );
        res = refalrts::splice_evar( res, context[26], context[27] );
        res = refalrts::splice_evar( res, context[17], context[8] );
        res = refalrts::splice_elem( res, context[25] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & Map@5/4 (/7 t./19 ':'/17 (/15 't'/18 e.4/21 )/16 )/8 e.Tail/23 >/1
        context[21] = context[13];
        context[22] = context[14];
        context[23] = context[9];
        context[24] = context[10];
        if( ! refalrts::char_term( 't', context[18] ) )
          continue;
        // closed e.4 as range 21
        // closed e.Tail as range 23
        //DEBUG: t.: 19
        //DEBUG: e.4: 21
        //DEBUG: e.Tail: 23

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: </4 HalfReuse: & Collapse-Term/7 AsIs: t./19 } >/25 Tile{ AsIs: ':'/17 AsIs: (/15 AsIs: 't'/18 AsIs: e.4/21 AsIs: )/16 AsIs: )/8 } </26 & Map@5/27 Tile{ AsIs: e.Tail/23 } Tile{ AsIs: >/1 ]] }
        refalrts::alloc_close_call(vm, context[25]);
        refalrts::alloc_open_call(vm, context[26]);
        refalrts::alloc_name(vm, context[27], functions[efunc_gen_Map_Z5]);
        refalrts::reinit_open_bracket(context[0]);
        refalrts::reinit_open_call(context[4]);
        refalrts::reinit_name(context[7], functions[efunc_Collapsem_Term]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[26] );
        refalrts::link_brackets( context[0], context[8] );
        refalrts::link_brackets( context[15], context[16] );
        refalrts::push_stack( vm, context[25] );
        refalrts::push_stack( vm, context[4] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[23], context[24] );
        res = refalrts::splice_evar( res, context[26], context[27] );
        res = refalrts::splice_evar( res, context[17], context[8] );
        res = refalrts::splice_elem( res, context[25] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & Map@5/4 (/7 t./19 ':'/17 (/15 's'/18 e.4/21 )/16 )/8 e.Tail/23 >/1
      context[21] = context[13];
      context[22] = context[14];
      context[23] = context[9];
      context[24] = context[10];
      if( ! refalrts::char_term( 's', context[18] ) )
        continue;
      // closed e.4 as range 21
      // closed e.Tail as range 23
      //DEBUG: t.: 19
      //DEBUG: e.4: 21
      //DEBUG: e.Tail: 23

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: t./19 AsIs: ':'/17 AsIs: (/15 AsIs: 's'/18 AsIs: e.4/21 AsIs: )/16 AsIs: )/8 } Tile{ AsIs: </0 AsIs: & Map@5/4 } Tile{ AsIs: e.Tail/23 } Tile{ AsIs: >/1 ]] }
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::link_brackets( context[15], context[16] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[23], context[24] );
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
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Subst-Collapse\1*3/4 AsIs: t.Next/7 } >/11 </12 & Map@5/13 Tile{ AsIs: e.Tail/9 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_close_call(vm, context[11]);
    refalrts::alloc_open_call(vm, context[12]);
    refalrts::alloc_name(vm, context[13], functions[efunc_gen_Map_Z5]);
    refalrts::update_name(context[4], functions[efunc_gen_Substm_Collapse_L1D3]);
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
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Map@0/0 Reuse: & Subst-Collapse\1@0/4 AsIs: e.items/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::reinit_name(context[0], functions[efunc_gen_Map_Z0]);
  refalrts::update_name(context[4], functions[efunc_gen_Substm_Collapse_L1Z0]);
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


static refalrts::FnResult func_gen_FindDivisionAndGenerate_B1Z1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 62 elems
  refalrts::Iter context[62];
  refalrts::zeros( context, 62 );
  // </0 & FindDivisionAndGenerate:1@1/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & FindDivisionAndGenerate:1@1/4 s.new1/5 s.new2/6 (/9 e.new3/7 )/10 s.new4/11 e.new5/2 >/1
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
  if( ! refalrts::svar_left( context[11], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new5 as range 2
  do {
    // </0 & FindDivisionAndGenerate:1@1/4 s.new6/5 s.new7/6 (/9 e.new12/12 )/10 s.new8/11 s.new9/16 (/19 e.new10/17 )/20 e.new11/14 >/1
    context[12] = context[7];
    context[13] = context[8];
    context[14] = context[2];
    context[15] = context[3];
    // closed e.new12 as range 12
    if( ! refalrts::svar_left( context[16], context[14], context[15] ) )
      continue;
    context[17] = 0;
    context[18] = 0;
    context[19] = refalrts::brackets_left( context[17], context[18], context[14], context[15] );
    if( ! context[19] )
      continue;
    refalrts::bracket_pointers(context[19], context[20]);
    // closed e.new10 as range 17
    // closed e.new11 as range 14
    do {
      // </0 & FindDivisionAndGenerate:1@1/4 s.new13/5 s.new14/6 (/9 e.new20/21 )/10 s.new15/11 s.new16/16 (/19 e.new19/23 )/20 (/29 e.new17/27 )/30 e.new18/25 >/1
      context[21] = context[12];
      context[22] = context[13];
      context[23] = context[17];
      context[24] = context[18];
      context[25] = context[14];
      context[26] = context[15];
      context[27] = 0;
      context[28] = 0;
      context[29] = refalrts::brackets_left( context[27], context[28], context[25], context[26] );
      if( ! context[29] )
        continue;
      refalrts::bracket_pointers(context[29], context[30]);
      // closed e.new20 as range 21
      // closed e.new19 as range 23
      // closed e.new17 as range 27
      // closed e.new18 as range 25
      do {
        // </0 & FindDivisionAndGenerate:1@1/4 s.new21/5 s.new22/6 (/9 e.new27/31 )/10 s.new23/11 # ForGroup/16 (/19 e.new26/33 )/20 (/29 e.new25/35 )/30 e.new24/37 >/1
        context[31] = context[21];
        context[32] = context[22];
        context[33] = context[23];
        context[34] = context[24];
        context[35] = context[27];
        context[36] = context[28];
        context[37] = context[25];
        context[38] = context[26];
        if( ! refalrts::ident_term( identifiers[ident_ForGroup], context[16] ) )
          continue;
        // closed e.new27 as range 31
        // closed e.new26 as range 33
        // closed e.new25 as range 35
        // closed e.new24 as range 37
        do {
          // </0 & FindDivisionAndGenerate:1@1/4 s.FnGenSubst0/5 s.FnGenResult0/6 (/9 e.MarkedPattern0/39 )/10 s.ContextSize0/11 # ForGroup/16 (/19 e.NewGCG-Subst/41 )/20 (/29 (/49 e.0/47 )/50 )/30 e.SecondGroup/45 >/1
          context[39] = context[31];
          context[40] = context[32];
          context[41] = context[33];
          context[42] = context[34];
          context[43] = context[35];
          context[44] = context[36];
          context[45] = context[37];
          context[46] = context[38];
          context[47] = 0;
          context[48] = 0;
          context[49] = refalrts::brackets_left( context[47], context[48], context[43], context[44] );
          if( ! context[49] )
            continue;
          refalrts::bracket_pointers(context[49], context[50]);
          if( ! refalrts::empty_seq( context[43], context[44] ) )
            continue;
          // closed e.MarkedPattern0 as range 39
          // closed e.NewGCG-Subst as range 41
          // closed e.0 as range 47
          // closed e.SecondGroup as range 45
          //DEBUG: s.FnGenSubst0: 5
          //DEBUG: s.FnGenResult0: 6
          //DEBUG: s.ContextSize0: 11
          //DEBUG: e.MarkedPattern0: 39
          //DEBUG: e.NewGCG-Subst: 41
          //DEBUG: e.0: 47
          //DEBUG: e.SecondGroup: 45

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} e.NewGCG-Subst/41 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 Reuse: & FindDivisionAndGenerate:1$1=1@1/4 AsIs: s.FnGenSubst0/5 AsIs: s.FnGenResult0/6 AsIs: (/9 AsIs: e.MarkedPattern0/39 AsIs: )/10 } (/51 Tile{ AsIs: e.SecondGroup/45 } Tile{ AsIs: )/20 } Tile{ AsIs: s.ContextSize0/11 HalfReuse: </16 HalfReuse: & GenerateSingleSentence/19 } s.FnGenSubst0/5/52 s.FnGenResult0/6/53 Tile{ HalfReuse: s.ContextSize011 /1 } (/54 e.MarkedPattern0/39/55 Tile{ HalfReuse: )/29 HalfReuse: 1/49 AsIs: e.0/47 HalfReuse: >/50 HalfReuse: >/30 } Tile{ ]] }
          refalrts::alloc_open_bracket(vm, context[51]);
          refalrts::copy_stvar(vm, context[52], context[5]);
          refalrts::copy_stvar(vm, context[53], context[6]);
          refalrts::alloc_open_bracket(vm, context[54]);
          refalrts::copy_evar(vm, context[55], context[56], context[39], context[40]);
          refalrts::update_name(context[4], functions[efunc_gen_FindDivisionAndGenerate_B1S1A1Z1]);
          refalrts::reinit_open_call(context[16]);
          refalrts::reinit_name(context[19], functions[efunc_GenerateSingleSentence]);
          refalrts::reinit_svar( context[1], context[11] );
          refalrts::reinit_close_bracket(context[29]);
          refalrts::reinit_number(context[49], 1UL);
          refalrts::reinit_close_call(context[50]);
          refalrts::reinit_close_call(context[30]);
          refalrts::push_stack( vm, context[30] );
          refalrts::push_stack( vm, context[0] );
          refalrts::push_stack( vm, context[50] );
          refalrts::push_stack( vm, context[16] );
          refalrts::link_brackets( context[54], context[29] );
          refalrts::link_brackets( context[51], context[20] );
          refalrts::link_brackets( context[9], context[10] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = arg_end->next;
          res = refalrts::splice_evar( res, context[29], context[30] );
          res = refalrts::splice_evar( res, context[55], context[56] );
          res = refalrts::splice_elem( res, context[54] );
          res = refalrts::splice_elem( res, context[1] );
          res = refalrts::splice_evar( res, context[52], context[53] );
          res = refalrts::splice_evar( res, context[11], context[19] );
          res = refalrts::splice_elem( res, context[20] );
          res = refalrts::splice_evar( res, context[45], context[46] );
          res = refalrts::splice_elem( res, context[51] );
          refalrts::splice_to_freelist_open( vm, context[10], res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & FindDivisionAndGenerate:1@1/4 s.FnGenSubst0/5 s.FnGenResult0/6 (/9 e.MarkedPattern0/39 )/10 s.ContextSize0/11 # ForGroup/16 (/19 e.NewGCG-Subst/41 )/20 (/29 e.FirstGroup/43 )/30 e.SecondGroup/45 >/1
        context[39] = context[31];
        context[40] = context[32];
        context[41] = context[33];
        context[42] = context[34];
        context[43] = context[35];
        context[44] = context[36];
        context[45] = context[37];
        context[46] = context[38];
        // closed e.MarkedPattern0 as range 39
        // closed e.NewGCG-Subst as range 41
        // closed e.FirstGroup as range 43
        // closed e.SecondGroup as range 45
        //DEBUG: s.FnGenSubst0: 5
        //DEBUG: s.FnGenResult0: 6
        //DEBUG: s.ContextSize0: 11
        //DEBUG: e.MarkedPattern0: 39
        //DEBUG: e.NewGCG-Subst: 41
        //DEBUG: e.FirstGroup: 43
        //DEBUG: e.SecondGroup: 45

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & FindDivisionAndGenerate:1$1=1@1/4 AsIs: s.FnGenSubst0/5 AsIs: s.FnGenResult0/6 AsIs: (/9 AsIs: e.MarkedPattern0/39 AsIs: )/10 } (/47 Tile{ AsIs: e.SecondGroup/45 } )/48 Tile{ AsIs: s.ContextSize0/11 HalfReuse: </16 HalfReuse: & GenerateGroupWithGCGSubst$2=1@1/19 } s.FnGenSubst0/5/49 Tile{ HalfReuse: s.FnGenResult06 /20 AsIs: (/29 AsIs: e.FirstGroup/43 AsIs: )/30 } s.ContextSize0/11/50 (/51 e.MarkedPattern0/39/52 )/54 </55 & DoMapAccum@1/56 1/57 (/58 )/59 Tile{ AsIs: e.NewGCG-Subst/41 } >/60 >/61 Tile{ AsIs: >/1 ]] }
        refalrts::alloc_open_bracket(vm, context[47]);
        refalrts::alloc_close_bracket(vm, context[48]);
        refalrts::copy_stvar(vm, context[49], context[5]);
        refalrts::copy_stvar(vm, context[50], context[11]);
        refalrts::alloc_open_bracket(vm, context[51]);
        refalrts::copy_evar(vm, context[52], context[53], context[39], context[40]);
        refalrts::alloc_close_bracket(vm, context[54]);
        refalrts::alloc_open_call(vm, context[55]);
        refalrts::alloc_name(vm, context[56], functions[efunc_gen_DoMapAccum_Z1]);
        refalrts::alloc_number(vm, context[57], 1UL);
        refalrts::alloc_open_bracket(vm, context[58]);
        refalrts::alloc_close_bracket(vm, context[59]);
        refalrts::alloc_close_call(vm, context[60]);
        refalrts::alloc_close_call(vm, context[61]);
        refalrts::update_name(context[4], functions[efunc_gen_FindDivisionAndGenerate_B1S1A1Z1]);
        refalrts::reinit_open_call(context[16]);
        refalrts::reinit_name(context[19], functions[efunc_gen_GenerateGroupWithGCGSubst_S2A1Z1]);
        refalrts::reinit_svar( context[20], context[6] );
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::push_stack( vm, context[61] );
        refalrts::push_stack( vm, context[16] );
        refalrts::push_stack( vm, context[60] );
        refalrts::push_stack( vm, context[55] );
        refalrts::link_brackets( context[58], context[59] );
        refalrts::link_brackets( context[51], context[54] );
        refalrts::link_brackets( context[29], context[30] );
        refalrts::link_brackets( context[47], context[48] );
        refalrts::link_brackets( context[9], context[10] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[60], context[61] );
        res = refalrts::splice_evar( res, context[41], context[42] );
        res = refalrts::splice_evar( res, context[50], context[59] );
        res = refalrts::splice_evar( res, context[20], context[30] );
        res = refalrts::splice_elem( res, context[49] );
        res = refalrts::splice_evar( res, context[11], context[19] );
        res = refalrts::splice_elem( res, context[48] );
        res = refalrts::splice_evar( res, context[45], context[46] );
        res = refalrts::splice_elem( res, context[47] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & FindDivisionAndGenerate:1@1/4 s.FnGenSubst0/5 s.FnGenResult0/6 (/9 e.MarkedPattern0/31 )/10 s.ContextSize0/11 # ForAllSentences/16 (/19 e.NewGCG-Subst/33 )/20 (/29 e.0/35 )/30 >/1
      context[31] = context[21];
      context[32] = context[22];
      context[33] = context[23];
      context[34] = context[24];
      context[35] = context[27];
      context[36] = context[28];
      if( ! refalrts::ident_term( identifiers[ident_ForAllSentences], context[16] ) )
        continue;
      if( ! refalrts::empty_seq( context[25], context[26] ) )
        continue;
      // closed e.MarkedPattern0 as range 31
      // closed e.NewGCG-Subst as range 33
      // closed e.0 as range 35
      //DEBUG: s.FnGenSubst0: 5
      //DEBUG: s.FnGenResult0: 6
      //DEBUG: s.ContextSize0: 11
      //DEBUG: e.MarkedPattern0: 31
      //DEBUG: e.NewGCG-Subst: 33
      //DEBUG: e.0: 35

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} )/10 s.ContextSize0/11 # ForAllSentences/16 {REMOVED TILE} e.NewGCG-Subst/33 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & GenerateSingleSentence/4 AsIs: s.FnGenSubst0/5 AsIs: s.FnGenResult0/6 HalfReuse: s.ContextSize011 /9 } Tile{ AsIs: (/19 } Tile{ AsIs: e.MarkedPattern0/31 } Tile{ AsIs: )/20 HalfReuse: 0/29 AsIs: e.0/35 HalfReuse: >/30 } Tile{ ]] }
      refalrts::update_name(context[4], functions[efunc_GenerateSingleSentence]);
      refalrts::reinit_svar( context[9], context[11] );
      refalrts::reinit_number(context[29], 0UL);
      refalrts::reinit_close_call(context[30]);
      refalrts::push_stack( vm, context[30] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[19], context[20] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[20], context[30] );
      res = refalrts::splice_evar( res, context[31], context[32] );
      res = refalrts::splice_elem( res, context[19] );
      refalrts::splice_to_freelist_open( vm, context[9], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & FindDivisionAndGenerate:1@1/4 s.FnGenSubst0/5 s.FnGenResult0/6 (/9 e.MarkedPattern0/21 )/10 s.ContextSize0/11 # ForAllSentences/16 (/19 e.NewGCG-Subst/23 )/20 e.SentencesWithSubst$a/25 >/1
    context[21] = context[12];
    context[22] = context[13];
    context[23] = context[17];
    context[24] = context[18];
    context[25] = context[14];
    context[26] = context[15];
    if( ! refalrts::ident_term( identifiers[ident_ForAllSentences], context[16] ) )
      continue;
    // closed e.MarkedPattern0 as range 21
    // closed e.NewGCG-Subst as range 23
    // closed e.SentencesWithSubst$a as range 25
    //DEBUG: s.FnGenSubst0: 5
    //DEBUG: s.FnGenResult0: 6
    //DEBUG: s.ContextSize0: 11
    //DEBUG: e.MarkedPattern0: 21
    //DEBUG: e.NewGCG-Subst: 23
    //DEBUG: e.SentencesWithSubst$a: 25

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & GenerateGroupWithGCGSubst$2=1@2/4 AsIs: s.FnGenSubst0/5 AsIs: s.FnGenResult0/6 AsIs: (/9 } Tile{ AsIs: e.SentencesWithSubst$a/25 } Tile{ AsIs: )/10 AsIs: s.ContextSize0/11 HalfReuse: (/16 } Tile{ AsIs: e.MarkedPattern0/21 } )/27 </28 & DoMapAccum@1/29 1/30 (/31 Tile{ HalfReuse: )/19 AsIs: e.NewGCG-Subst/23 HalfReuse: >/20 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_close_bracket(vm, context[27]);
    refalrts::alloc_open_call(vm, context[28]);
    refalrts::alloc_name(vm, context[29], functions[efunc_gen_DoMapAccum_Z1]);
    refalrts::alloc_number(vm, context[30], 1UL);
    refalrts::alloc_open_bracket(vm, context[31]);
    refalrts::update_name(context[4], functions[efunc_gen_GenerateGroupWithGCGSubst_S2A1Z2]);
    refalrts::reinit_open_bracket(context[16]);
    refalrts::reinit_close_bracket(context[19]);
    refalrts::reinit_close_call(context[20]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[20] );
    refalrts::push_stack( vm, context[28] );
    refalrts::link_brackets( context[31], context[19] );
    refalrts::link_brackets( context[16], context[27] );
    refalrts::link_brackets( context[9], context[10] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[19], context[20] );
    res = refalrts::splice_evar( res, context[27], context[31] );
    res = refalrts::splice_evar( res, context[21], context[22] );
    res = refalrts::splice_evar( res, context[10], context[16] );
    res = refalrts::splice_evar( res, context[25], context[26] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & FindDivisionAndGenerate:1@1/4 s.FnGenSubst0/5 s.FnGenResult0/6 (/9 e.MarkedPattern0/7 )/10 s.ContextSize0/11 e.dyn/2 >/1
  // closed e.MarkedPattern0 as range 7
  // closed e.dyn as range 2
  //DEBUG: s.FnGenSubst0: 5
  //DEBUG: s.FnGenResult0: 6
  //DEBUG: s.ContextSize0: 11
  //DEBUG: e.MarkedPattern0: 7
  //DEBUG: e.dyn: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & FindDivisionAndGenerate:1@0/4 AsIs: s.FnGenSubst0/5 AsIs: s.FnGenResult0/6 AsIs: (/9 AsIs: e.MarkedPattern0/7 AsIs: )/10 AsIs: s.ContextSize0/11 } 1/12 0/13 Tile{ AsIs: e.dyn/2 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_number(vm, context[12], 1UL);
  refalrts::alloc_number(vm, context[13], 0UL);
  refalrts::update_name(context[4], functions[efunc_gen_FindDivisionAndGenerate_B1Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[9], context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[12], context[13] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_FindDivisionAndGenerate_B1Z1("FindDivisionAndGenerate:1@1", COOKIE1_, COOKIE2_, func_gen_FindDivisionAndGenerate_B1Z1);


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
  //RESULT: Tile{ [[ } </13 Tile{ HalfReuse: & DoMapAccum$1=1@0/0 Reuse: & EnumerateVars-Subst\1@0/4 AsIs: (/7 AsIs: e.Scanned0/5 AsIs: )/8 AsIs: (/11 AsIs: e.Tail0/9 AsIs: )/12 AsIs: e.dyn/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[13]);
  refalrts::reinit_name(context[0], functions[efunc_gen_DoMapAccum_S1A1Z0]);
  refalrts::update_name(context[4], functions[efunc_gen_EnumerateVarsm_Subst_L1Z0]);
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
  //RESULT: Tile{ [[ } </13 Tile{ HalfReuse: & DoMapAccum$1=1@0/0 Reuse: & EnumerateVarsRec\1@0/4 AsIs: (/7 AsIs: e.Scanned0/5 AsIs: )/8 AsIs: (/11 AsIs: e.Tail0/9 AsIs: )/12 AsIs: e.dyn/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[13]);
  refalrts::reinit_name(context[0], functions[efunc_gen_DoMapAccum_S1A1Z0]);
  refalrts::update_name(context[4], functions[efunc_gen_EnumerateVarsRec_L1Z0]);
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


static refalrts::FnResult func_gen_DoFindDivision_S3A1Z1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 45 elems
  refalrts::Iter context[45];
  refalrts::zeros( context, 45 );
  // </0 & DoFindDivision$3=1@1/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & DoFindDivision$3=1@1/4 (/7 e.new1/5 )/8 (/11 e.new2/9 )/12 (/15 e.new3/13 )/16 (/19 e.new4/17 )/20 s.new5/21 e.new6/2 >/1
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
  if( ! refalrts::svar_left( context[21], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new6 as range 2
  do {
    // </0 & DoFindDivision$3=1@1/4 (/7 e.TrivialGCG0/22 )/8 (/11 e.FirstImage/24 )/12 (/15 e.FirstSentence$a/26 )/16 (/19 e.Sentences0/28 )/20 s.Counter0/21 (/34 e.NextImage/32 )/35 e.NextSentence$a/30 >/1
    context[22] = context[5];
    context[23] = context[6];
    context[24] = context[9];
    context[25] = context[10];
    context[26] = context[13];
    context[27] = context[14];
    context[28] = context[17];
    context[29] = context[18];
    context[30] = context[2];
    context[31] = context[3];
    context[32] = 0;
    context[33] = 0;
    context[34] = refalrts::brackets_left( context[32], context[33], context[30], context[31] );
    if( ! context[34] )
      continue;
    refalrts::bracket_pointers(context[34], context[35]);
    // closed e.TrivialGCG0 as range 22
    // closed e.FirstImage as range 24
    // closed e.FirstSentence$a as range 26
    // closed e.Sentences0 as range 28
    // closed e.NextImage as range 32
    // closed e.NextSentence$a as range 30
    //DEBUG: s.Counter0: 21
    //DEBUG: e.TrivialGCG0: 22
    //DEBUG: e.FirstImage: 24
    //DEBUG: e.FirstSentence$a: 26
    //DEBUG: e.Sentences0: 28
    //DEBUG: e.NextImage: 32
    //DEBUG: e.NextSentence$a: 30

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoFindDivision$3=2@1/4 AsIs: (/7 AsIs: e.TrivialGCG0/22 AsIs: )/8 AsIs: (/11 AsIs: e.FirstImage/24 AsIs: )/12 AsIs: (/15 AsIs: e.FirstSentence$a/26 AsIs: )/16 AsIs: (/19 } Tile{ AsIs: e.NextSentence$a/30 } )/36 (/37 Tile{ AsIs: e.Sentences0/28 } Tile{ AsIs: )/20 AsIs: s.Counter0/21 } </38 & Subst-Generalization/39 (/40 e.FirstImage/24/41 )/43 Tile{ AsIs: (/34 AsIs: e.NextImage/32 AsIs: )/35 } >/44 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_close_bracket(vm, context[36]);
    refalrts::alloc_open_bracket(vm, context[37]);
    refalrts::alloc_open_call(vm, context[38]);
    refalrts::alloc_name(vm, context[39], functions[efunc_Substm_Generalization]);
    refalrts::alloc_open_bracket(vm, context[40]);
    refalrts::copy_evar(vm, context[41], context[42], context[24], context[25]);
    refalrts::alloc_close_bracket(vm, context[43]);
    refalrts::alloc_close_call(vm, context[44]);
    refalrts::update_name(context[4], functions[efunc_gen_DoFindDivision_S3A2Z1]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[44] );
    refalrts::push_stack( vm, context[38] );
    refalrts::link_brackets( context[34], context[35] );
    refalrts::link_brackets( context[40], context[43] );
    refalrts::link_brackets( context[37], context[20] );
    refalrts::link_brackets( context[19], context[36] );
    refalrts::link_brackets( context[15], context[16] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_elem( res, context[44] );
    res = refalrts::splice_evar( res, context[34], context[35] );
    res = refalrts::splice_evar( res, context[38], context[43] );
    res = refalrts::splice_evar( res, context[20], context[21] );
    res = refalrts::splice_evar( res, context[28], context[29] );
    res = refalrts::splice_evar( res, context[36], context[37] );
    res = refalrts::splice_evar( res, context[30], context[31] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoFindDivision$3=1@1/4 (/7 e.TrivialGCG0/5 )/8 (/11 e.FirstImage/9 )/12 (/15 e.FirstSentence$a/13 )/16 (/19 e.Sentences0/17 )/20 s.Counter0/21 e.dyn/2 >/1
  // closed e.TrivialGCG0 as range 5
  // closed e.FirstImage as range 9
  // closed e.FirstSentence$a as range 13
  // closed e.Sentences0 as range 17
  // closed e.dyn as range 2
  //DEBUG: s.Counter0: 21
  //DEBUG: e.TrivialGCG0: 5
  //DEBUG: e.FirstImage: 9
  //DEBUG: e.FirstSentence$a: 13
  //DEBUG: e.Sentences0: 17
  //DEBUG: e.dyn: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoFindDivision$3=1@0/4 AsIs: (/7 AsIs: e.TrivialGCG0/5 AsIs: )/8 AsIs: (/11 AsIs: e.FirstImage/9 AsIs: )/12 AsIs: (/15 } (/22 Tile{ AsIs: e.FirstSentence$a/13 } )/23 Tile{ AsIs: )/16 AsIs: (/19 AsIs: e.Sentences0/17 AsIs: )/20 AsIs: s.Counter0/21 AsIs: e.dyn/2 AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[22]);
  refalrts::alloc_close_bracket(vm, context[23]);
  refalrts::update_name(context[4], functions[efunc_gen_DoFindDivision_S3A1Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[19], context[20] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[22], context[23] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[16];
  res = refalrts::splice_elem( res, context[23] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_elem( res, context[22] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoFindDivision_S3A1Z1("DoFindDivision$3=1@1", COOKIE1_, COOKIE2_, func_gen_DoFindDivision_S3A1Z1);


static refalrts::FnResult func_gen_FindDivisionAndGenerate_B1S1A1Z1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 26 elems
  refalrts::Iter context[26];
  refalrts::zeros( context, 26 );
  // </0 & FindDivisionAndGenerate:1$1=1@1/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & FindDivisionAndGenerate:1$1=1@1/4 s.new1/5 s.new2/6 (/9 e.new3/7 )/10 (/13 e.new4/11 )/14 s.new5/15 e.new6/2 >/1
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
  context[13] = refalrts::brackets_left( context[11], context[12], context[2], context[3] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[13], context[14]);
  // closed e.new3 as range 7
  // closed e.new4 as range 11
  if( ! refalrts::svar_left( context[15], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new6 as range 2
  do {
    // </0 & FindDivisionAndGenerate:1$1=1@1/4 s.FnGenSubst0/5 s.FnGenResult0/6 (/9 e.MarkedPattern0/16 )/10 (/13 e.SecondGroup0/18 )/14 s.ContextSize0/15 s.FirstPartContext/22 e.FirstPartCommands/20 >/1
    context[16] = context[7];
    context[17] = context[8];
    context[18] = context[11];
    context[19] = context[12];
    context[20] = context[2];
    context[21] = context[3];
    // closed e.MarkedPattern0 as range 16
    // closed e.SecondGroup0 as range 18
    if( ! refalrts::svar_left( context[22], context[20], context[21] ) )
      continue;
    // closed e.FirstPartCommands as range 20
    //DEBUG: s.FnGenSubst0: 5
    //DEBUG: s.FnGenResult0: 6
    //DEBUG: s.ContextSize0: 15
    //DEBUG: e.MarkedPattern0: 16
    //DEBUG: e.SecondGroup0: 18
    //DEBUG: s.FirstPartContext: 22
    //DEBUG: e.FirstPartCommands: 20

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </23 & FindDivisionAndGenerate:1$1=2/24 Tile{ AsIs: (/13 } Tile{ AsIs: e.FirstPartCommands/20 } Tile{ AsIs: )/14 } Tile{ AsIs: s.FirstPartContext/22 } Tile{ AsIs: </0 Reuse: & FindDivisionAndGenerate@1/4 AsIs: s.FnGenSubst0/5 AsIs: s.FnGenResult0/6 AsIs: (/9 AsIs: e.MarkedPattern0/16 AsIs: )/10 } Tile{ AsIs: e.SecondGroup0/18 } Tile{ AsIs: s.ContextSize0/15 } >/25 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[23]);
    refalrts::alloc_name(vm, context[24], functions[efunc_gen_FindDivisionAndGenerate_B1S1A2]);
    refalrts::alloc_close_call(vm, context[25]);
    refalrts::update_name(context[4], functions[efunc_gen_FindDivisionAndGenerate_Z1]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[23] );
    refalrts::push_stack( vm, context[25] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[9], context[10] );
    refalrts::link_brackets( context[13], context[14] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_elem( res, context[25] );
    res = refalrts::splice_elem( res, context[15] );
    res = refalrts::splice_evar( res, context[18], context[19] );
    res = refalrts::splice_evar( res, context[0], context[10] );
    res = refalrts::splice_elem( res, context[22] );
    res = refalrts::splice_elem( res, context[14] );
    res = refalrts::splice_evar( res, context[20], context[21] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_evar( res, context[23], context[24] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & FindDivisionAndGenerate:1$1=1@1/4 s.FnGenSubst0/5 s.FnGenResult0/6 (/9 e.MarkedPattern0/7 )/10 (/13 e.SecondGroup0/11 )/14 s.ContextSize0/15 e.dyn/2 >/1
  // closed e.MarkedPattern0 as range 7
  // closed e.SecondGroup0 as range 11
  // closed e.dyn as range 2
  //DEBUG: s.FnGenSubst0: 5
  //DEBUG: s.FnGenResult0: 6
  //DEBUG: s.ContextSize0: 15
  //DEBUG: e.MarkedPattern0: 7
  //DEBUG: e.SecondGroup0: 11
  //DEBUG: e.dyn: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & FindDivisionAndGenerate:1$1=1@0/4 AsIs: s.FnGenSubst0/5 AsIs: s.FnGenResult0/6 AsIs: (/9 AsIs: e.MarkedPattern0/7 AsIs: )/10 AsIs: (/13 AsIs: e.SecondGroup0/11 AsIs: )/14 AsIs: s.ContextSize0/15 } 1/16 0/17 Tile{ AsIs: e.dyn/2 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_number(vm, context[16], 1UL);
  refalrts::alloc_number(vm, context[17], 0UL);
  refalrts::update_name(context[4], functions[efunc_gen_FindDivisionAndGenerate_B1S1A1Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[13], context[14] );
  refalrts::link_brackets( context[9], context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[16], context[17] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_FindDivisionAndGenerate_B1S1A1Z1("FindDivisionAndGenerate:1$1=1@1", COOKIE1_, COOKIE2_, func_gen_FindDivisionAndGenerate_B1S1A1Z1);


static refalrts::FnResult func_gen_DoFindDivision_S3A2Z1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 38 elems
  refalrts::Iter context[38];
  refalrts::zeros( context, 38 );
  // </0 & DoFindDivision$3=2@1/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & DoFindDivision$3=2@1/4 (/7 e.new1/5 )/8 (/11 e.new2/9 )/12 (/15 e.new3/13 )/16 (/19 e.new4/17 )/20 (/23 e.new5/21 )/24 s.new6/25 e.new7/2 >/1
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
  if( ! refalrts::svar_left( context[25], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new7 as range 2
  do {
    // </0 & DoFindDivision$3=2@1/4 (/7 e.TrivialGCG0/26 )/8 (/11 e.FirstImage/28 )/12 (/15 e.FirstSentence$a/30 )/16 (/19 e.NextSentence$a0/32 )/20 (/23 e.Sentences0/34 )/24 s.Counter0/25 e.NewImage/36 >/1
    context[26] = context[5];
    context[27] = context[6];
    context[28] = context[9];
    context[29] = context[10];
    context[30] = context[13];
    context[31] = context[14];
    context[32] = context[17];
    context[33] = context[18];
    context[34] = context[21];
    context[35] = context[22];
    context[36] = context[2];
    context[37] = context[3];
    // closed e.TrivialGCG0 as range 26
    // closed e.FirstImage as range 28
    // closed e.FirstSentence$a as range 30
    // closed e.NextSentence$a0 as range 32
    // closed e.Sentences0 as range 34
    // closed e.NewImage as range 36
    //DEBUG: s.Counter0: 25
    //DEBUG: e.TrivialGCG0: 26
    //DEBUG: e.FirstImage: 28
    //DEBUG: e.FirstSentence$a: 30
    //DEBUG: e.NextSentence$a0: 32
    //DEBUG: e.Sentences0: 34
    //DEBUG: e.NewImage: 36

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoFindDivision$3:1@1/4 AsIs: (/7 AsIs: e.TrivialGCG0/26 AsIs: )/8 AsIs: (/11 AsIs: e.FirstImage/28 AsIs: )/12 AsIs: (/15 AsIs: e.FirstSentence$a/30 AsIs: )/16 AsIs: (/19 AsIs: e.NextSentence$a0/32 AsIs: )/20 AsIs: (/23 AsIs: e.Sentences0/34 AsIs: )/24 AsIs: s.Counter0/25 AsIs: e.NewImage/36 AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_gen_DoFindDivision_S3B1Z1]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[23], context[24] );
    refalrts::link_brackets( context[19], context[20] );
    refalrts::link_brackets( context[15], context[16] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[7], context[8] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoFindDivision$3=2@1/4 (/7 e.TrivialGCG0/5 )/8 (/11 e.FirstImage/9 )/12 (/15 e.FirstSentence$a/13 )/16 (/19 e.NextSentence$a0/17 )/20 (/23 e.Sentences0/21 )/24 s.Counter0/25 e.dyn/2 >/1
  // closed e.TrivialGCG0 as range 5
  // closed e.FirstImage as range 9
  // closed e.FirstSentence$a as range 13
  // closed e.NextSentence$a0 as range 17
  // closed e.Sentences0 as range 21
  // closed e.dyn as range 2
  //DEBUG: s.Counter0: 25
  //DEBUG: e.TrivialGCG0: 5
  //DEBUG: e.FirstImage: 9
  //DEBUG: e.FirstSentence$a: 13
  //DEBUG: e.NextSentence$a0: 17
  //DEBUG: e.Sentences0: 21
  //DEBUG: e.dyn: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoFindDivision$3=2@0/4 AsIs: (/7 AsIs: e.TrivialGCG0/5 AsIs: )/8 AsIs: (/11 AsIs: e.FirstImage/9 AsIs: )/12 AsIs: (/15 } (/26 Tile{ AsIs: e.FirstSentence$a/13 } )/27 Tile{ AsIs: )/16 AsIs: (/19 AsIs: e.NextSentence$a0/17 AsIs: )/20 AsIs: (/23 AsIs: e.Sentences0/21 AsIs: )/24 AsIs: s.Counter0/25 AsIs: e.dyn/2 AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[26]);
  refalrts::alloc_close_bracket(vm, context[27]);
  refalrts::update_name(context[4], functions[efunc_gen_DoFindDivision_S3A2Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[23], context[24] );
  refalrts::link_brackets( context[19], context[20] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[26], context[27] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[16];
  res = refalrts::splice_elem( res, context[27] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_elem( res, context[26] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoFindDivision_S3A2Z1("DoFindDivision$3=2@1", COOKIE1_, COOKIE2_, func_gen_DoFindDivision_S3A2Z1);


static refalrts::FnResult func_gen_GenerateGroupWithGCGSubst_S2A1Z1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 37 elems
  refalrts::Iter context[37];
  refalrts::zeros( context, 37 );
  // </0 & GenerateGroupWithGCGSubst$2=1@1/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & GenerateGroupWithGCGSubst$2=1@1/4 s.new1/5 s.new2/6 (/9 e.new3/7 )/10 s.new4/11 (/14 e.new5/12 )/15 e.new6/2 >/1
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
  if( ! refalrts::svar_left( context[11], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[12] = 0;
  context[13] = 0;
  context[14] = refalrts::brackets_left( context[12], context[13], context[2], context[3] );
  if( ! context[14] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[14], context[15]);
  // closed e.new5 as range 12
  // closed e.new6 as range 2
  do {
    // </0 & GenerateGroupWithGCGSubst$2=1@1/4 s.FnGenSubst0/5 s.FnGenResult0/6 (/9 e.SentencesWithSubst0/16 )/10 s.ContextSize0/11 (/14 e.MarkedPattern0/18 )/15 s.BaseNum$a/22 e.NewGCG-Subst$a/20 >/1
    context[16] = context[7];
    context[17] = context[8];
    context[18] = context[12];
    context[19] = context[13];
    context[20] = context[2];
    context[21] = context[3];
    // closed e.SentencesWithSubst0 as range 16
    // closed e.MarkedPattern0 as range 18
    if( ! refalrts::svar_left( context[22], context[20], context[21] ) )
      continue;
    // closed e.NewGCG-Subst$a as range 20
    //DEBUG: s.FnGenSubst0: 5
    //DEBUG: s.FnGenResult0: 6
    //DEBUG: s.ContextSize0: 11
    //DEBUG: e.SentencesWithSubst0: 16
    //DEBUG: e.MarkedPattern0: 18
    //DEBUG: s.BaseNum$a: 22
    //DEBUG: e.NewGCG-Subst$a: 20

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.BaseNum$a/22 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & GenerateGroupWithGCGSubst$2=2@1/4 AsIs: s.FnGenSubst0/5 AsIs: s.FnGenResult0/6 HalfReuse: s.BaseNum$a22 /9 } (/23 Tile{ AsIs: e.NewGCG-Subst$a/20 } )/24 (/25 Tile{ AsIs: e.SentencesWithSubst0/16 } )/26 </27 & CodeForSubst=1@1/28 Tile{ HalfReuse: s.FnGenSubst05 /10 AsIs: s.ContextSize0/11 } </29 & ComposeVars/30 Tile{ AsIs: (/14 AsIs: e.MarkedPattern0/18 AsIs: )/15 } (/31 e.NewGCG-Subst$a/20/32 )/34 >/35 >/36 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_bracket(vm, context[23]);
    refalrts::alloc_close_bracket(vm, context[24]);
    refalrts::alloc_open_bracket(vm, context[25]);
    refalrts::alloc_close_bracket(vm, context[26]);
    refalrts::alloc_open_call(vm, context[27]);
    refalrts::alloc_name(vm, context[28], functions[efunc_gen_CodeForSubst_A1Z1]);
    refalrts::alloc_open_call(vm, context[29]);
    refalrts::alloc_name(vm, context[30], functions[efunc_ComposeVars]);
    refalrts::alloc_open_bracket(vm, context[31]);
    refalrts::copy_evar(vm, context[32], context[33], context[20], context[21]);
    refalrts::alloc_close_bracket(vm, context[34]);
    refalrts::alloc_close_call(vm, context[35]);
    refalrts::alloc_close_call(vm, context[36]);
    refalrts::update_name(context[4], functions[efunc_gen_GenerateGroupWithGCGSubst_S2A2Z1]);
    refalrts::reinit_svar( context[9], context[22] );
    refalrts::reinit_svar( context[10], context[5] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[36] );
    refalrts::push_stack( vm, context[27] );
    refalrts::push_stack( vm, context[35] );
    refalrts::push_stack( vm, context[29] );
    refalrts::link_brackets( context[31], context[34] );
    refalrts::link_brackets( context[14], context[15] );
    refalrts::link_brackets( context[25], context[26] );
    refalrts::link_brackets( context[23], context[24] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[31], context[36] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    res = refalrts::splice_evar( res, context[29], context[30] );
    res = refalrts::splice_evar( res, context[10], context[11] );
    res = refalrts::splice_evar( res, context[26], context[28] );
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_evar( res, context[24], context[25] );
    res = refalrts::splice_evar( res, context[20], context[21] );
    res = refalrts::splice_elem( res, context[23] );
    refalrts::splice_to_freelist_open( vm, context[9], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & GenerateGroupWithGCGSubst$2=1@1/4 s.FnGenSubst0/5 s.FnGenResult0/6 (/9 e.SentencesWithSubst0/7 )/10 s.ContextSize0/11 (/14 e.MarkedPattern0/12 )/15 e.dyn/2 >/1
  // closed e.SentencesWithSubst0 as range 7
  // closed e.MarkedPattern0 as range 12
  // closed e.dyn as range 2
  //DEBUG: s.FnGenSubst0: 5
  //DEBUG: s.FnGenResult0: 6
  //DEBUG: s.ContextSize0: 11
  //DEBUG: e.SentencesWithSubst0: 7
  //DEBUG: e.MarkedPattern0: 12
  //DEBUG: e.dyn: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & GenerateGroupWithGCGSubst$2=1@0/4 AsIs: s.FnGenSubst0/5 AsIs: s.FnGenResult0/6 } 1/16 Tile{ AsIs: (/9 AsIs: e.SentencesWithSubst0/7 AsIs: )/10 AsIs: s.ContextSize0/11 AsIs: (/14 AsIs: e.MarkedPattern0/12 AsIs: )/15 AsIs: e.dyn/2 AsIs: >/1 ]] }
  refalrts::alloc_number(vm, context[16], 1UL);
  refalrts::update_name(context[4], functions[efunc_gen_GenerateGroupWithGCGSubst_S2A1Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[14], context[15] );
  refalrts::link_brackets( context[9], context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[9];
  res = refalrts::splice_elem( res, context[16] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_GenerateGroupWithGCGSubst_S2A1Z1("GenerateGroupWithGCGSubst$2=1@1", COOKIE1_, COOKIE2_, func_gen_GenerateGroupWithGCGSubst_S2A1Z1);


static refalrts::FnResult func_gen_GenerateGroupWithGCGSubst_S2A1Z2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 37 elems
  refalrts::Iter context[37];
  refalrts::zeros( context, 37 );
  // </0 & GenerateGroupWithGCGSubst$2=1@2/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & GenerateGroupWithGCGSubst$2=1@2/4 s.new1/5 s.new2/6 (/9 e.new3/7 )/10 s.new4/11 (/14 e.new5/12 )/15 e.new6/2 >/1
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
  if( ! refalrts::svar_left( context[11], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[12] = 0;
  context[13] = 0;
  context[14] = refalrts::brackets_left( context[12], context[13], context[2], context[3] );
  if( ! context[14] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[14], context[15]);
  // closed e.new5 as range 12
  // closed e.new6 as range 2
  do {
    // </0 & GenerateGroupWithGCGSubst$2=1@2/4 s.FnGenSubst0/5 s.FnGenResult0/6 (/9 e.SentencesWithSubst0/16 )/10 s.ContextSize0/11 (/14 e.MarkedPattern0/18 )/15 s.BaseNum$a/22 e.NewGCG-Subst$a/20 >/1
    context[16] = context[7];
    context[17] = context[8];
    context[18] = context[12];
    context[19] = context[13];
    context[20] = context[2];
    context[21] = context[3];
    // closed e.SentencesWithSubst0 as range 16
    // closed e.MarkedPattern0 as range 18
    if( ! refalrts::svar_left( context[22], context[20], context[21] ) )
      continue;
    // closed e.NewGCG-Subst$a as range 20
    //DEBUG: s.FnGenSubst0: 5
    //DEBUG: s.FnGenResult0: 6
    //DEBUG: s.ContextSize0: 11
    //DEBUG: e.SentencesWithSubst0: 16
    //DEBUG: e.MarkedPattern0: 18
    //DEBUG: s.BaseNum$a: 22
    //DEBUG: e.NewGCG-Subst$a: 20

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.BaseNum$a/22 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & GenerateGroupWithGCGSubst$2=2@2/4 AsIs: s.FnGenSubst0/5 AsIs: s.FnGenResult0/6 HalfReuse: s.BaseNum$a22 /9 } (/23 Tile{ AsIs: e.NewGCG-Subst$a/20 } )/24 (/25 Tile{ AsIs: e.SentencesWithSubst0/16 } )/26 </27 & CodeForSubst=1@2/28 Tile{ HalfReuse: s.FnGenSubst05 /10 AsIs: s.ContextSize0/11 } </29 & ComposeVars/30 Tile{ AsIs: (/14 AsIs: e.MarkedPattern0/18 AsIs: )/15 } (/31 e.NewGCG-Subst$a/20/32 )/34 >/35 >/36 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_bracket(vm, context[23]);
    refalrts::alloc_close_bracket(vm, context[24]);
    refalrts::alloc_open_bracket(vm, context[25]);
    refalrts::alloc_close_bracket(vm, context[26]);
    refalrts::alloc_open_call(vm, context[27]);
    refalrts::alloc_name(vm, context[28], functions[efunc_gen_CodeForSubst_A1Z2]);
    refalrts::alloc_open_call(vm, context[29]);
    refalrts::alloc_name(vm, context[30], functions[efunc_ComposeVars]);
    refalrts::alloc_open_bracket(vm, context[31]);
    refalrts::copy_evar(vm, context[32], context[33], context[20], context[21]);
    refalrts::alloc_close_bracket(vm, context[34]);
    refalrts::alloc_close_call(vm, context[35]);
    refalrts::alloc_close_call(vm, context[36]);
    refalrts::update_name(context[4], functions[efunc_gen_GenerateGroupWithGCGSubst_S2A2Z2]);
    refalrts::reinit_svar( context[9], context[22] );
    refalrts::reinit_svar( context[10], context[5] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[36] );
    refalrts::push_stack( vm, context[27] );
    refalrts::push_stack( vm, context[35] );
    refalrts::push_stack( vm, context[29] );
    refalrts::link_brackets( context[31], context[34] );
    refalrts::link_brackets( context[14], context[15] );
    refalrts::link_brackets( context[25], context[26] );
    refalrts::link_brackets( context[23], context[24] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[31], context[36] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    res = refalrts::splice_evar( res, context[29], context[30] );
    res = refalrts::splice_evar( res, context[10], context[11] );
    res = refalrts::splice_evar( res, context[26], context[28] );
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_evar( res, context[24], context[25] );
    res = refalrts::splice_evar( res, context[20], context[21] );
    res = refalrts::splice_elem( res, context[23] );
    refalrts::splice_to_freelist_open( vm, context[9], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & GenerateGroupWithGCGSubst$2=1@2/4 s.FnGenSubst0/5 s.FnGenResult0/6 (/9 e.SentencesWithSubst0/7 )/10 s.ContextSize0/11 (/14 e.MarkedPattern0/12 )/15 e.dyn/2 >/1
  // closed e.SentencesWithSubst0 as range 7
  // closed e.MarkedPattern0 as range 12
  // closed e.dyn as range 2
  //DEBUG: s.FnGenSubst0: 5
  //DEBUG: s.FnGenResult0: 6
  //DEBUG: s.ContextSize0: 11
  //DEBUG: e.SentencesWithSubst0: 7
  //DEBUG: e.MarkedPattern0: 12
  //DEBUG: e.dyn: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & GenerateGroupWithGCGSubst$2=1@0/4 AsIs: s.FnGenSubst0/5 AsIs: s.FnGenResult0/6 } 0/16 Tile{ AsIs: (/9 AsIs: e.SentencesWithSubst0/7 AsIs: )/10 AsIs: s.ContextSize0/11 AsIs: (/14 AsIs: e.MarkedPattern0/12 AsIs: )/15 AsIs: e.dyn/2 AsIs: >/1 ]] }
  refalrts::alloc_number(vm, context[16], 0UL);
  refalrts::update_name(context[4], functions[efunc_gen_GenerateGroupWithGCGSubst_S2A1Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[14], context[15] );
  refalrts::link_brackets( context[9], context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[9];
  res = refalrts::splice_elem( res, context[16] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_GenerateGroupWithGCGSubst_S2A1Z2("GenerateGroupWithGCGSubst$2=1@2", COOKIE1_, COOKIE2_, func_gen_GenerateGroupWithGCGSubst_S2A1Z2);


static refalrts::FnResult func_gen_DoFindDivision_S3B1Z1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 42 elems
  refalrts::Iter context[42];
  refalrts::zeros( context, 42 );
  // </0 & DoFindDivision$3:1@1/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & DoFindDivision$3:1@1/4 (/7 e.new1/5 )/8 (/11 e.new2/9 )/12 (/15 e.new3/13 )/16 (/19 e.new4/17 )/20 (/23 e.new5/21 )/24 s.new6/25 e.new7/2 >/1
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
  if( ! refalrts::svar_left( context[25], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new7 as range 2
  do {
    // </0 & DoFindDivision$3:1@1/4 (/7 e.TrivialGCG0/26 )/8 (/11 e.FirstImage/28 )/12 (/15 e.FirstSentence$a/30 )/16 (/19 e.NextSentence$a0/32 )/20 (/23 e.Sentences0/34 )/24 s.Counter0/25 e.TrivialGCG0/38 >/1
    context[26] = context[5];
    context[27] = context[6];
    context[28] = context[9];
    context[29] = context[10];
    context[30] = context[13];
    context[31] = context[14];
    context[32] = context[17];
    context[33] = context[18];
    context[34] = context[21];
    context[35] = context[22];
    context[36] = context[2];
    context[37] = context[3];
    // closed e.TrivialGCG0 as range 26
    if( ! refalrts::repeated_evar_left( vm, context[38], context[39], context[26], context[27], context[36], context[37] ) )
      continue;
    if( ! refalrts::empty_seq( context[36], context[37] ) )
      continue;
    // closed e.FirstImage as range 28
    // closed e.FirstSentence$a as range 30
    // closed e.NextSentence$a0 as range 32
    // closed e.Sentences0 as range 34
    //DEBUG: s.Counter0: 25
    //DEBUG: e.TrivialGCG0: 26
    //DEBUG: e.FirstImage: 28
    //DEBUG: e.FirstSentence$a: 30
    //DEBUG: e.NextSentence$a0: 32
    //DEBUG: e.Sentences0: 34

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} e.TrivialGCG0/26 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Counter0/25 e.TrivialGCG0/38 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: # ForGroup/0 HalfReuse: (/4 } Tile{ HalfReuse: </8 HalfReuse: & Map@5/11 AsIs: e.FirstImage/28 HalfReuse: >/12 HalfReuse: )/15 } Tile{ AsIs: (/7 } Tile{ AsIs: (/23 } Tile{ AsIs: e.FirstSentence$a/30 } Tile{ AsIs: )/24 } Tile{ AsIs: )/16 AsIs: (/19 AsIs: e.NextSentence$a0/32 AsIs: )/20 } Tile{ AsIs: e.Sentences0/34 } Tile{ ]] }
    refalrts::reinit_ident(context[0], identifiers[ident_ForGroup]);
    refalrts::reinit_open_bracket(context[4]);
    refalrts::reinit_open_call(context[8]);
    refalrts::reinit_name(context[11], functions[efunc_gen_Map_Z5]);
    refalrts::reinit_close_call(context[12]);
    refalrts::reinit_close_bracket(context[15]);
    refalrts::link_brackets( context[19], context[20] );
    refalrts::link_brackets( context[7], context[16] );
    refalrts::link_brackets( context[23], context[24] );
    refalrts::link_brackets( context[4], context[15] );
    refalrts::push_stack( vm, context[12] );
    refalrts::push_stack( vm, context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[34], context[35] );
    res = refalrts::splice_evar( res, context[16], context[20] );
    res = refalrts::splice_elem( res, context[24] );
    res = refalrts::splice_evar( res, context[30], context[31] );
    res = refalrts::splice_elem( res, context[23] );
    res = refalrts::splice_elem( res, context[7] );
    res = refalrts::splice_evar( res, context[8], context[15] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoFindDivision$3:1@1/4 (/7 e.TrivialGCG0/26 )/8 (/11 e.FirstImage/28 )/12 (/15 e.FirstSentence$a/30 )/16 (/19 e.NextSentence$a0/32 )/20 (/23 e.Sentences0/34 )/24 s.Counter0/25 e.NewImage$a/36 >/1
    context[26] = context[5];
    context[27] = context[6];
    context[28] = context[9];
    context[29] = context[10];
    context[30] = context[13];
    context[31] = context[14];
    context[32] = context[17];
    context[33] = context[18];
    context[34] = context[21];
    context[35] = context[22];
    context[36] = context[2];
    context[37] = context[3];
    // closed e.TrivialGCG0 as range 26
    // closed e.FirstImage as range 28
    // closed e.FirstSentence$a as range 30
    // closed e.NextSentence$a0 as range 32
    // closed e.Sentences0 as range 34
    // closed e.NewImage$a as range 36
    //DEBUG: s.Counter0: 25
    //DEBUG: e.TrivialGCG0: 26
    //DEBUG: e.FirstImage: 28
    //DEBUG: e.FirstSentence$a: 30
    //DEBUG: e.NextSentence$a0: 32
    //DEBUG: e.Sentences0: 34
    //DEBUG: e.NewImage$a: 36

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} e.FirstImage/28 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </38 & DoFindDivision/39 Tile{ HalfReuse: </1 } & Sub/40 Tile{ AsIs: s.Counter0/25 } Tile{ HalfReuse: 1/0 HalfReuse: >/4 AsIs: (/7 AsIs: e.TrivialGCG0/26 AsIs: )/8 AsIs: (/11 } Tile{ AsIs: e.NewImage$a/36 } )/41 Tile{ HalfReuse: (/12 AsIs: (/15 AsIs: e.FirstSentence$a/30 AsIs: )/16 AsIs: (/19 AsIs: e.NextSentence$a0/32 AsIs: )/20 HalfReuse: )/23 AsIs: e.Sentences0/34 HalfReuse: >/24 } Tile{ ]] }
    refalrts::alloc_open_call(vm, context[38]);
    refalrts::alloc_name(vm, context[39], functions[efunc_DoFindDivision]);
    refalrts::alloc_name(vm, context[40], functions[efunc_Sub]);
    refalrts::alloc_close_bracket(vm, context[41]);
    refalrts::reinit_open_call(context[1]);
    refalrts::reinit_number(context[0], 1UL);
    refalrts::reinit_close_call(context[4]);
    refalrts::reinit_open_bracket(context[12]);
    refalrts::reinit_close_bracket(context[23]);
    refalrts::reinit_close_call(context[24]);
    refalrts::push_stack( vm, context[24] );
    refalrts::push_stack( vm, context[38] );
    refalrts::link_brackets( context[12], context[23] );
    refalrts::link_brackets( context[19], context[20] );
    refalrts::link_brackets( context[15], context[16] );
    refalrts::link_brackets( context[11], context[41] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::push_stack( vm, context[4] );
    refalrts::push_stack( vm, context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[12], context[24] );
    res = refalrts::splice_elem( res, context[41] );
    res = refalrts::splice_evar( res, context[36], context[37] );
    res = refalrts::splice_evar( res, context[0], context[11] );
    res = refalrts::splice_elem( res, context[25] );
    res = refalrts::splice_elem( res, context[40] );
    res = refalrts::splice_elem( res, context[1] );
    res = refalrts::splice_evar( res, context[38], context[39] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoFindDivision$3:1@1/4 (/7 e.TrivialGCG0/5 )/8 (/11 e.FirstImage/9 )/12 (/15 e.FirstSentence$a/13 )/16 (/19 e.NextSentence$a0/17 )/20 (/23 e.Sentences0/21 )/24 s.Counter0/25 e.dyn/2 >/1
  // closed e.TrivialGCG0 as range 5
  // closed e.FirstImage as range 9
  // closed e.FirstSentence$a as range 13
  // closed e.NextSentence$a0 as range 17
  // closed e.Sentences0 as range 21
  // closed e.dyn as range 2
  //DEBUG: s.Counter0: 25
  //DEBUG: e.TrivialGCG0: 5
  //DEBUG: e.FirstImage: 9
  //DEBUG: e.FirstSentence$a: 13
  //DEBUG: e.NextSentence$a0: 17
  //DEBUG: e.Sentences0: 21
  //DEBUG: e.dyn: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoFindDivision$3:1@0/4 AsIs: (/7 AsIs: e.TrivialGCG0/5 AsIs: )/8 AsIs: (/11 AsIs: e.FirstImage/9 AsIs: )/12 AsIs: (/15 } (/26 Tile{ AsIs: e.FirstSentence$a/13 } )/27 Tile{ AsIs: )/16 AsIs: (/19 AsIs: e.NextSentence$a0/17 AsIs: )/20 AsIs: (/23 AsIs: e.Sentences0/21 AsIs: )/24 AsIs: s.Counter0/25 AsIs: e.dyn/2 AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[26]);
  refalrts::alloc_close_bracket(vm, context[27]);
  refalrts::update_name(context[4], functions[efunc_gen_DoFindDivision_S3B1Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[23], context[24] );
  refalrts::link_brackets( context[19], context[20] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[26], context[27] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[16];
  res = refalrts::splice_elem( res, context[27] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_elem( res, context[26] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoFindDivision_S3B1Z1("DoFindDivision$3:1@1", COOKIE1_, COOKIE2_, func_gen_DoFindDivision_S3B1Z1);


static refalrts::FnResult func_gen_GenerateGroupWithGCGSubst_S2A2Z1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 34 elems
  refalrts::Iter context[34];
  refalrts::zeros( context, 34 );
  // </0 & GenerateGroupWithGCGSubst$2=2@1/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & GenerateGroupWithGCGSubst$2=2@1/4 s.new1/5 s.new2/6 s.new3/7 (/10 e.new4/8 )/11 (/14 e.new5/12 )/15 e.new6/2 >/1
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
  context[12] = 0;
  context[13] = 0;
  context[14] = refalrts::brackets_left( context[12], context[13], context[2], context[3] );
  if( ! context[14] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[14], context[15]);
  // closed e.new4 as range 8
  // closed e.new5 as range 12
  // closed e.new6 as range 2
  do {
    // </0 & GenerateGroupWithGCGSubst$2=2@1/4 s.FnGenSubst0/5 s.FnGenResult0/6 s.BaseNum$a0/7 (/10 e.NewGCG-Subst$a0/16 )/11 (/14 e.SentencesWithSubst0/18 )/15 s.ContextSize$a/22 (/25 e.Vars/23 )/26 (/29 e.MarkedPattern$a/27 )/30 e.GCG-Commands/20 >/1
    context[16] = context[8];
    context[17] = context[9];
    context[18] = context[12];
    context[19] = context[13];
    context[20] = context[2];
    context[21] = context[3];
    // closed e.NewGCG-Subst$a0 as range 16
    // closed e.SentencesWithSubst0 as range 18
    if( ! refalrts::svar_left( context[22], context[20], context[21] ) )
      continue;
    context[23] = 0;
    context[24] = 0;
    context[25] = refalrts::brackets_left( context[23], context[24], context[20], context[21] );
    if( ! context[25] )
      continue;
    refalrts::bracket_pointers(context[25], context[26]);
    context[27] = 0;
    context[28] = 0;
    context[29] = refalrts::brackets_left( context[27], context[28], context[20], context[21] );
    if( ! context[29] )
      continue;
    refalrts::bracket_pointers(context[29], context[30]);
    // closed e.Vars as range 23
    // closed e.MarkedPattern$a as range 27
    // closed e.GCG-Commands as range 20
    //DEBUG: s.FnGenSubst0: 5
    //DEBUG: s.FnGenResult0: 6
    //DEBUG: s.BaseNum$a0: 7
    //DEBUG: e.NewGCG-Subst$a0: 16
    //DEBUG: e.SentencesWithSubst0: 18
    //DEBUG: s.ContextSize$a: 22
    //DEBUG: e.Vars: 23
    //DEBUG: e.MarkedPattern$a: 27
    //DEBUG: e.GCG-Commands: 20

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} s.FnGenResult0/6 s.BaseNum$a0/7 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.Vars/23 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & GenerateGroupWithGCGSubst$2=3@1/4 } Tile{ AsIs: (/14 } Tile{ AsIs: e.GCG-Commands/20 } Tile{ AsIs: )/15 } Tile{ AsIs: s.FnGenSubst0/5 } Tile{ HalfReuse: s.FnGenResult06 /26 AsIs: (/29 AsIs: e.MarkedPattern$a/27 AsIs: )/30 } Tile{ AsIs: s.ContextSize$a/22 HalfReuse: s.BaseNum$a07 /25 } </31 & Map@2/32 Tile{ AsIs: (/10 AsIs: e.NewGCG-Subst$a0/16 AsIs: )/11 } Tile{ AsIs: e.SentencesWithSubst0/18 } >/33 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[31]);
    refalrts::alloc_name(vm, context[32], functions[efunc_gen_Map_Z2]);
    refalrts::alloc_close_call(vm, context[33]);
    refalrts::update_name(context[4], functions[efunc_gen_GenerateGroupWithGCGSubst_S2A3Z1]);
    refalrts::reinit_svar( context[26], context[6] );
    refalrts::reinit_svar( context[25], context[7] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[33] );
    refalrts::push_stack( vm, context[31] );
    refalrts::link_brackets( context[10], context[11] );
    refalrts::link_brackets( context[29], context[30] );
    refalrts::link_brackets( context[14], context[15] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_elem( res, context[33] );
    res = refalrts::splice_evar( res, context[18], context[19] );
    res = refalrts::splice_evar( res, context[10], context[11] );
    res = refalrts::splice_evar( res, context[31], context[32] );
    res = refalrts::splice_evar( res, context[22], context[25] );
    res = refalrts::splice_evar( res, context[26], context[30] );
    res = refalrts::splice_elem( res, context[5] );
    res = refalrts::splice_elem( res, context[15] );
    res = refalrts::splice_evar( res, context[20], context[21] );
    res = refalrts::splice_elem( res, context[14] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & GenerateGroupWithGCGSubst$2=2@1/4 s.FnGenSubst0/5 s.FnGenResult0/6 s.BaseNum$a0/7 (/10 e.NewGCG-Subst$a0/8 )/11 (/14 e.SentencesWithSubst0/12 )/15 e.dyn/2 >/1
  // closed e.NewGCG-Subst$a0 as range 8
  // closed e.SentencesWithSubst0 as range 12
  // closed e.dyn as range 2
  //DEBUG: s.FnGenSubst0: 5
  //DEBUG: s.FnGenResult0: 6
  //DEBUG: s.BaseNum$a0: 7
  //DEBUG: e.NewGCG-Subst$a0: 8
  //DEBUG: e.SentencesWithSubst0: 12
  //DEBUG: e.dyn: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & GenerateGroupWithGCGSubst$2=2@0/4 AsIs: s.FnGenSubst0/5 AsIs: s.FnGenResult0/6 AsIs: s.BaseNum$a0/7 } 1/16 Tile{ AsIs: (/10 AsIs: e.NewGCG-Subst$a0/8 AsIs: )/11 AsIs: (/14 AsIs: e.SentencesWithSubst0/12 AsIs: )/15 AsIs: e.dyn/2 AsIs: >/1 ]] }
  refalrts::alloc_number(vm, context[16], 1UL);
  refalrts::update_name(context[4], functions[efunc_gen_GenerateGroupWithGCGSubst_S2A2Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[14], context[15] );
  refalrts::link_brackets( context[10], context[11] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[10];
  res = refalrts::splice_elem( res, context[16] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_GenerateGroupWithGCGSubst_S2A2Z1("GenerateGroupWithGCGSubst$2=2@1", COOKIE1_, COOKIE2_, func_gen_GenerateGroupWithGCGSubst_S2A2Z1);


static refalrts::FnResult func_gen_GenerateGroupWithGCGSubst_S2A2Z2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 34 elems
  refalrts::Iter context[34];
  refalrts::zeros( context, 34 );
  // </0 & GenerateGroupWithGCGSubst$2=2@2/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & GenerateGroupWithGCGSubst$2=2@2/4 s.new1/5 s.new2/6 s.new3/7 (/10 e.new4/8 )/11 (/14 e.new5/12 )/15 e.new6/2 >/1
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
  context[12] = 0;
  context[13] = 0;
  context[14] = refalrts::brackets_left( context[12], context[13], context[2], context[3] );
  if( ! context[14] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[14], context[15]);
  // closed e.new4 as range 8
  // closed e.new5 as range 12
  // closed e.new6 as range 2
  do {
    // </0 & GenerateGroupWithGCGSubst$2=2@2/4 s.FnGenSubst0/5 s.FnGenResult0/6 s.BaseNum$a0/7 (/10 e.NewGCG-Subst$a0/16 )/11 (/14 e.SentencesWithSubst0/18 )/15 s.ContextSize$a/22 (/25 e.Vars/23 )/26 (/29 e.MarkedPattern$a/27 )/30 e.GCG-Commands/20 >/1
    context[16] = context[8];
    context[17] = context[9];
    context[18] = context[12];
    context[19] = context[13];
    context[20] = context[2];
    context[21] = context[3];
    // closed e.NewGCG-Subst$a0 as range 16
    // closed e.SentencesWithSubst0 as range 18
    if( ! refalrts::svar_left( context[22], context[20], context[21] ) )
      continue;
    context[23] = 0;
    context[24] = 0;
    context[25] = refalrts::brackets_left( context[23], context[24], context[20], context[21] );
    if( ! context[25] )
      continue;
    refalrts::bracket_pointers(context[25], context[26]);
    context[27] = 0;
    context[28] = 0;
    context[29] = refalrts::brackets_left( context[27], context[28], context[20], context[21] );
    if( ! context[29] )
      continue;
    refalrts::bracket_pointers(context[29], context[30]);
    // closed e.Vars as range 23
    // closed e.MarkedPattern$a as range 27
    // closed e.GCG-Commands as range 20
    //DEBUG: s.FnGenSubst0: 5
    //DEBUG: s.FnGenResult0: 6
    //DEBUG: s.BaseNum$a0: 7
    //DEBUG: e.NewGCG-Subst$a0: 16
    //DEBUG: e.SentencesWithSubst0: 18
    //DEBUG: s.ContextSize$a: 22
    //DEBUG: e.Vars: 23
    //DEBUG: e.MarkedPattern$a: 27
    //DEBUG: e.GCG-Commands: 20

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} s.FnGenResult0/6 s.BaseNum$a0/7 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.Vars/23 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & GenerateGroupWithGCGSubst$2=3@2/4 } Tile{ AsIs: (/14 } Tile{ AsIs: e.GCG-Commands/20 } Tile{ AsIs: )/15 } Tile{ AsIs: s.FnGenSubst0/5 } Tile{ HalfReuse: s.FnGenResult06 /26 AsIs: (/29 AsIs: e.MarkedPattern$a/27 AsIs: )/30 } Tile{ AsIs: s.ContextSize$a/22 HalfReuse: s.BaseNum$a07 /25 } </31 & Map@2/32 Tile{ AsIs: (/10 AsIs: e.NewGCG-Subst$a0/16 AsIs: )/11 } Tile{ AsIs: e.SentencesWithSubst0/18 } >/33 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[31]);
    refalrts::alloc_name(vm, context[32], functions[efunc_gen_Map_Z2]);
    refalrts::alloc_close_call(vm, context[33]);
    refalrts::update_name(context[4], functions[efunc_gen_GenerateGroupWithGCGSubst_S2A3Z2]);
    refalrts::reinit_svar( context[26], context[6] );
    refalrts::reinit_svar( context[25], context[7] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[33] );
    refalrts::push_stack( vm, context[31] );
    refalrts::link_brackets( context[10], context[11] );
    refalrts::link_brackets( context[29], context[30] );
    refalrts::link_brackets( context[14], context[15] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_elem( res, context[33] );
    res = refalrts::splice_evar( res, context[18], context[19] );
    res = refalrts::splice_evar( res, context[10], context[11] );
    res = refalrts::splice_evar( res, context[31], context[32] );
    res = refalrts::splice_evar( res, context[22], context[25] );
    res = refalrts::splice_evar( res, context[26], context[30] );
    res = refalrts::splice_elem( res, context[5] );
    res = refalrts::splice_elem( res, context[15] );
    res = refalrts::splice_evar( res, context[20], context[21] );
    res = refalrts::splice_elem( res, context[14] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & GenerateGroupWithGCGSubst$2=2@2/4 s.FnGenSubst0/5 s.FnGenResult0/6 s.BaseNum$a0/7 (/10 e.NewGCG-Subst$a0/8 )/11 (/14 e.SentencesWithSubst0/12 )/15 e.dyn/2 >/1
  // closed e.NewGCG-Subst$a0 as range 8
  // closed e.SentencesWithSubst0 as range 12
  // closed e.dyn as range 2
  //DEBUG: s.FnGenSubst0: 5
  //DEBUG: s.FnGenResult0: 6
  //DEBUG: s.BaseNum$a0: 7
  //DEBUG: e.NewGCG-Subst$a0: 8
  //DEBUG: e.SentencesWithSubst0: 12
  //DEBUG: e.dyn: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & GenerateGroupWithGCGSubst$2=2@0/4 AsIs: s.FnGenSubst0/5 AsIs: s.FnGenResult0/6 AsIs: s.BaseNum$a0/7 } 0/16 Tile{ AsIs: (/10 AsIs: e.NewGCG-Subst$a0/8 AsIs: )/11 AsIs: (/14 AsIs: e.SentencesWithSubst0/12 AsIs: )/15 AsIs: e.dyn/2 AsIs: >/1 ]] }
  refalrts::alloc_number(vm, context[16], 0UL);
  refalrts::update_name(context[4], functions[efunc_gen_GenerateGroupWithGCGSubst_S2A2Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[14], context[15] );
  refalrts::link_brackets( context[10], context[11] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[10];
  res = refalrts::splice_elem( res, context[16] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_GenerateGroupWithGCGSubst_S2A2Z2("GenerateGroupWithGCGSubst$2=2@2", COOKIE1_, COOKIE2_, func_gen_GenerateGroupWithGCGSubst_S2A2Z2);


static refalrts::FnResult func_gen_CodeForSubst_A1Z1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  // </0 & CodeForSubst=1@1/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & CodeForSubst=1@1/4 s.new1/5 s.new2/6 e.new3/2 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new3 as range 2
  do {
    // </0 & CodeForSubst=1@1/4 s.FnGenSubst0/5 s.ContextSize0/6 e.SubstsAndJunks/7 >/1
    context[7] = context[2];
    context[8] = context[3];
    // closed e.SubstsAndJunks as range 7
    //DEBUG: s.FnGenSubst0: 5
    //DEBUG: s.ContextSize0: 6
    //DEBUG: e.SubstsAndJunks: 7

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & CodeForSubst=2/4 AsIs: s.FnGenSubst0/5 } </9 & MakeSavers/10 Tile{ AsIs: s.ContextSize0/6 AsIs: e.SubstsAndJunks/7 AsIs: >/1 } >/11 Tile{ ]] }
    refalrts::alloc_open_call(vm, context[9]);
    refalrts::alloc_name(vm, context[10], functions[efunc_MakeSavers]);
    refalrts::alloc_close_call(vm, context[11]);
    refalrts::update_name(context[4], functions[efunc_gen_CodeForSubst_A2]);
    refalrts::push_stack( vm, context[11] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_evar( res, context[6], context[1] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & CodeForSubst=1@1/4 s.FnGenSubst0/5 s.ContextSize0/6 e.dyn/2 >/1
  // closed e.dyn as range 2
  //DEBUG: s.FnGenSubst0: 5
  //DEBUG: s.ContextSize0: 6
  //DEBUG: e.dyn: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & CodeForSubst=1@0/4 AsIs: s.FnGenSubst0/5 AsIs: s.ContextSize0/6 } 1/7 Tile{ AsIs: e.dyn/2 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_number(vm, context[7], 1UL);
  refalrts::update_name(context[4], functions[efunc_gen_CodeForSubst_A1Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_elem( res, context[7] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_CodeForSubst_A1Z1("CodeForSubst=1@1", COOKIE1_, COOKIE2_, func_gen_CodeForSubst_A1Z1);


static refalrts::FnResult func_gen_GenerateGroupWithGCGSubst_S2A3Z1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 26 elems
  refalrts::Iter context[26];
  refalrts::zeros( context, 26 );
  // </0 & GenerateGroupWithGCGSubst$2=3@1/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & GenerateGroupWithGCGSubst$2=3@1/4 (/7 e.new1/5 )/8 s.new2/9 s.new3/10 (/13 e.new4/11 )/14 s.new5/15 s.new6/16 e.new7/2 >/1
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
  // closed e.new4 as range 11
  if( ! refalrts::svar_left( context[15], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[16], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new7 as range 2
  do {
    // </0 & GenerateGroupWithGCGSubst$2=3@1/4 (/7 e.GCG-Commands0/17 )/8 s.FnGenSubst0/9 s.FnGenResult0/10 (/13 e.MarkedPattern$a0/19 )/14 s.ContextSize$a0/15 s.BaseNum$a0/16 e.SentencesWithSubst$a/21 >/1
    context[17] = context[5];
    context[18] = context[6];
    context[19] = context[11];
    context[20] = context[12];
    context[21] = context[2];
    context[22] = context[3];
    // closed e.GCG-Commands0 as range 17
    // closed e.MarkedPattern$a0 as range 19
    // closed e.SentencesWithSubst$a as range 21
    //DEBUG: s.FnGenSubst0: 9
    //DEBUG: s.FnGenResult0: 10
    //DEBUG: s.ContextSize$a0: 15
    //DEBUG: s.BaseNum$a0: 16
    //DEBUG: e.GCG-Commands0: 17
    //DEBUG: e.MarkedPattern$a0: 19
    //DEBUG: e.SentencesWithSubst$a: 21

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & GenerateGroupWithGCGSubst$2=4/4 AsIs: (/7 AsIs: e.GCG-Commands0/17 AsIs: )/8 } </23 & FindDivisionAndGenerate@2/24 Tile{ AsIs: s.FnGenSubst0/9 AsIs: s.FnGenResult0/10 AsIs: (/13 AsIs: e.MarkedPattern$a0/19 AsIs: )/14 } Tile{ AsIs: e.SentencesWithSubst$a/21 } Tile{ AsIs: s.ContextSize$a0/15 AsIs: s.BaseNum$a0/16 } >/25 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[23]);
    refalrts::alloc_name(vm, context[24], functions[efunc_gen_FindDivisionAndGenerate_Z2]);
    refalrts::alloc_close_call(vm, context[25]);
    refalrts::update_name(context[4], functions[efunc_gen_GenerateGroupWithGCGSubst_S2A4]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[25] );
    refalrts::push_stack( vm, context[23] );
    refalrts::link_brackets( context[13], context[14] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_elem( res, context[25] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[21], context[22] );
    res = refalrts::splice_evar( res, context[9], context[14] );
    res = refalrts::splice_evar( res, context[23], context[24] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & GenerateGroupWithGCGSubst$2=3@1/4 (/7 e.GCG-Commands0/5 )/8 s.FnGenSubst0/9 s.FnGenResult0/10 (/13 e.MarkedPattern$a0/11 )/14 s.ContextSize$a0/15 s.BaseNum$a0/16 e.dyn/2 >/1
  // closed e.GCG-Commands0 as range 5
  // closed e.MarkedPattern$a0 as range 11
  // closed e.dyn as range 2
  //DEBUG: s.FnGenSubst0: 9
  //DEBUG: s.FnGenResult0: 10
  //DEBUG: s.ContextSize$a0: 15
  //DEBUG: s.BaseNum$a0: 16
  //DEBUG: e.GCG-Commands0: 5
  //DEBUG: e.MarkedPattern$a0: 11
  //DEBUG: e.dyn: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & GenerateGroupWithGCGSubst$2=3@0/4 AsIs: (/7 AsIs: e.GCG-Commands0/5 AsIs: )/8 AsIs: s.FnGenSubst0/9 AsIs: s.FnGenResult0/10 AsIs: (/13 AsIs: e.MarkedPattern$a0/11 AsIs: )/14 AsIs: s.ContextSize$a0/15 AsIs: s.BaseNum$a0/16 } 1/17 Tile{ AsIs: e.dyn/2 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_number(vm, context[17], 1UL);
  refalrts::update_name(context[4], functions[efunc_gen_GenerateGroupWithGCGSubst_S2A3Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[13], context[14] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_elem( res, context[17] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_GenerateGroupWithGCGSubst_S2A3Z1("GenerateGroupWithGCGSubst$2=3@1", COOKIE1_, COOKIE2_, func_gen_GenerateGroupWithGCGSubst_S2A3Z1);


static refalrts::FnResult func_gen_CodeForSubst_A1Z2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  // </0 & CodeForSubst=1@2/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & CodeForSubst=1@2/4 s.new1/5 s.new2/6 e.new3/2 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new3 as range 2
  do {
    // </0 & CodeForSubst=1@2/4 s.FnGenSubst0/5 s.ContextSize0/6 e.SubstsAndJunks/7 >/1
    context[7] = context[2];
    context[8] = context[3];
    // closed e.SubstsAndJunks as range 7
    //DEBUG: s.FnGenSubst0: 5
    //DEBUG: s.ContextSize0: 6
    //DEBUG: e.SubstsAndJunks: 7

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </4 AsIs: s.FnGenSubst0/5 AsIs: s.ContextSize0/6 AsIs: e.SubstsAndJunks/7 HalfReuse: (/1 } Tile{ HalfReuse: )/0 } (/9 )/10 >/11 Tile{ ]] }
    refalrts::alloc_open_bracket(vm, context[9]);
    refalrts::alloc_close_bracket(vm, context[10]);
    refalrts::alloc_close_call(vm, context[11]);
    refalrts::reinit_open_call(context[4]);
    refalrts::reinit_open_bracket(context[1]);
    refalrts::reinit_close_bracket(context[0]);
    refalrts::push_stack( vm, context[11] );
    refalrts::push_stack( vm, context[4] );
    refalrts::link_brackets( context[9], context[10] );
    refalrts::link_brackets( context[1], context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[9], context[11] );
    res = refalrts::splice_elem( res, context[0] );
    res = refalrts::splice_evar( res, context[4], context[1] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & CodeForSubst=1@2/4 s.FnGenSubst0/5 s.ContextSize0/6 e.dyn/2 >/1
  // closed e.dyn as range 2
  //DEBUG: s.FnGenSubst0: 5
  //DEBUG: s.ContextSize0: 6
  //DEBUG: e.dyn: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & CodeForSubst=1@0/4 AsIs: s.FnGenSubst0/5 AsIs: s.ContextSize0/6 } 0/7 Tile{ AsIs: e.dyn/2 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_number(vm, context[7], 0UL);
  refalrts::update_name(context[4], functions[efunc_gen_CodeForSubst_A1Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_elem( res, context[7] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_CodeForSubst_A1Z2("CodeForSubst=1@2", COOKIE1_, COOKIE2_, func_gen_CodeForSubst_A1Z2);


static refalrts::FnResult func_gen_GenerateGroupWithGCGSubst_S2A3Z2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 26 elems
  refalrts::Iter context[26];
  refalrts::zeros( context, 26 );
  // </0 & GenerateGroupWithGCGSubst$2=3@2/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & GenerateGroupWithGCGSubst$2=3@2/4 (/7 e.new1/5 )/8 s.new2/9 s.new3/10 (/13 e.new4/11 )/14 s.new5/15 s.new6/16 e.new7/2 >/1
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
  // closed e.new4 as range 11
  if( ! refalrts::svar_left( context[15], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[16], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new7 as range 2
  do {
    // </0 & GenerateGroupWithGCGSubst$2=3@2/4 (/7 e.GCG-Commands0/17 )/8 s.FnGenSubst0/9 s.FnGenResult0/10 (/13 e.MarkedPattern$a0/19 )/14 s.ContextSize$a0/15 s.BaseNum$a0/16 e.SentencesWithSubst$a/21 >/1
    context[17] = context[5];
    context[18] = context[6];
    context[19] = context[11];
    context[20] = context[12];
    context[21] = context[2];
    context[22] = context[3];
    // closed e.GCG-Commands0 as range 17
    // closed e.MarkedPattern$a0 as range 19
    // closed e.SentencesWithSubst$a as range 21
    //DEBUG: s.FnGenSubst0: 9
    //DEBUG: s.FnGenResult0: 10
    //DEBUG: s.ContextSize$a0: 15
    //DEBUG: s.BaseNum$a0: 16
    //DEBUG: e.GCG-Commands0: 17
    //DEBUG: e.MarkedPattern$a0: 19
    //DEBUG: e.SentencesWithSubst$a: 21

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & GenerateGroupWithGCGSubst$2=4/4 AsIs: (/7 AsIs: e.GCG-Commands0/17 AsIs: )/8 } </23 & FindDivisionAndGenerate@3/24 Tile{ AsIs: s.FnGenSubst0/9 AsIs: s.FnGenResult0/10 AsIs: (/13 AsIs: e.MarkedPattern$a0/19 AsIs: )/14 } Tile{ AsIs: e.SentencesWithSubst$a/21 } Tile{ AsIs: s.ContextSize$a0/15 AsIs: s.BaseNum$a0/16 } >/25 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[23]);
    refalrts::alloc_name(vm, context[24], functions[efunc_gen_FindDivisionAndGenerate_Z3]);
    refalrts::alloc_close_call(vm, context[25]);
    refalrts::update_name(context[4], functions[efunc_gen_GenerateGroupWithGCGSubst_S2A4]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[25] );
    refalrts::push_stack( vm, context[23] );
    refalrts::link_brackets( context[13], context[14] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_elem( res, context[25] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[21], context[22] );
    res = refalrts::splice_evar( res, context[9], context[14] );
    res = refalrts::splice_evar( res, context[23], context[24] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & GenerateGroupWithGCGSubst$2=3@2/4 (/7 e.GCG-Commands0/5 )/8 s.FnGenSubst0/9 s.FnGenResult0/10 (/13 e.MarkedPattern$a0/11 )/14 s.ContextSize$a0/15 s.BaseNum$a0/16 e.dyn/2 >/1
  // closed e.GCG-Commands0 as range 5
  // closed e.MarkedPattern$a0 as range 11
  // closed e.dyn as range 2
  //DEBUG: s.FnGenSubst0: 9
  //DEBUG: s.FnGenResult0: 10
  //DEBUG: s.ContextSize$a0: 15
  //DEBUG: s.BaseNum$a0: 16
  //DEBUG: e.GCG-Commands0: 5
  //DEBUG: e.MarkedPattern$a0: 11
  //DEBUG: e.dyn: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & GenerateGroupWithGCGSubst$2=3@0/4 AsIs: (/7 AsIs: e.GCG-Commands0/5 AsIs: )/8 AsIs: s.FnGenSubst0/9 AsIs: s.FnGenResult0/10 AsIs: (/13 AsIs: e.MarkedPattern$a0/11 AsIs: )/14 AsIs: s.ContextSize$a0/15 AsIs: s.BaseNum$a0/16 } 0/17 Tile{ AsIs: e.dyn/2 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_number(vm, context[17], 0UL);
  refalrts::update_name(context[4], functions[efunc_gen_GenerateGroupWithGCGSubst_S2A3Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[13], context[14] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_elem( res, context[17] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_GenerateGroupWithGCGSubst_S2A3Z2("GenerateGroupWithGCGSubst$2=3@2", COOKIE1_, COOKIE2_, func_gen_GenerateGroupWithGCGSubst_S2A3Z2);


static refalrts::FnResult func_gen_FindDivisionAndGenerate_Z2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
  // </0 & FindDivisionAndGenerate@2/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & FindDivisionAndGenerate@2/4 s.new1/5 s.new2/6 (/9 e.new3/7 )/10 e.new4/2 s.new5/12 s.new6/11 >/1
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
  if( ! refalrts::svar_right( context[11], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_right( context[12], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new4 as range 2
  do {
    // </0 & FindDivisionAndGenerate@2/4 s.FnGenSubst0/5 s.FnGenResult0/6 (/9 e.MarkedPattern$a0/13 )/10 e.SentencesWithSubst$a/15 s.ContextSize$a0/12 s.BaseNum$a0/11 >/1
    context[13] = context[7];
    context[14] = context[8];
    context[15] = context[2];
    context[16] = context[3];
    // closed e.MarkedPattern$a0 as range 13
    // closed e.SentencesWithSubst$a as range 15
    //DEBUG: s.FnGenSubst0: 5
    //DEBUG: s.FnGenResult0: 6
    //DEBUG: s.ContextSize$a0: 12
    //DEBUG: s.BaseNum$a0: 11
    //DEBUG: e.MarkedPattern$a0: 13
    //DEBUG: e.SentencesWithSubst$a: 15

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & FindDivisionAndGenerate:1@2/4 AsIs: s.FnGenSubst0/5 AsIs: s.FnGenResult0/6 AsIs: (/9 AsIs: e.MarkedPattern$a0/13 AsIs: )/10 } Tile{ AsIs: s.ContextSize$a0/12 AsIs: s.BaseNum$a0/11 HalfReuse: </1 } & FindDivision/17 Tile{ AsIs: e.SentencesWithSubst$a/15 } >/18 >/19 Tile{ ]] }
    refalrts::alloc_name(vm, context[17], functions[efunc_FindDivision]);
    refalrts::alloc_close_call(vm, context[18]);
    refalrts::alloc_close_call(vm, context[19]);
    refalrts::update_name(context[4], functions[efunc_gen_FindDivisionAndGenerate_B1Z2]);
    refalrts::reinit_open_call(context[1]);
    refalrts::push_stack( vm, context[19] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[18] );
    refalrts::push_stack( vm, context[1] );
    refalrts::link_brackets( context[9], context[10] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[18], context[19] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_elem( res, context[17] );
    res = refalrts::splice_evar( res, context[12], context[1] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & FindDivisionAndGenerate@2/4 s.FnGenSubst0/5 s.FnGenResult0/6 (/9 e.MarkedPattern$a0/7 )/10 e.SentencesWithSubst$a/2 s.ContextSize$a0/12 s.BaseNum$a0/11 >/1
  // closed e.MarkedPattern$a0 as range 7
  // closed e.SentencesWithSubst$a as range 2
  //DEBUG: s.FnGenSubst0: 5
  //DEBUG: s.FnGenResult0: 6
  //DEBUG: s.ContextSize$a0: 12
  //DEBUG: s.BaseNum$a0: 11
  //DEBUG: e.MarkedPattern$a0: 7
  //DEBUG: e.SentencesWithSubst$a: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & FindDivisionAndGenerate@0/4 AsIs: s.FnGenSubst0/5 AsIs: s.FnGenResult0/6 AsIs: (/9 AsIs: e.MarkedPattern$a0/7 AsIs: )/10 } (/13 Tile{ AsIs: e.SentencesWithSubst$a/2 } )/14 Tile{ AsIs: s.ContextSize$a0/12 AsIs: s.BaseNum$a0/11 HalfReuse: 1/1 } >/15 Tile{ ]] }
  refalrts::alloc_open_bracket(vm, context[13]);
  refalrts::alloc_close_bracket(vm, context[14]);
  refalrts::alloc_close_call(vm, context[15]);
  refalrts::update_name(context[4], functions[efunc_gen_FindDivisionAndGenerate_Z0]);
  refalrts::reinit_number(context[1], 1UL);
  refalrts::push_stack( vm, context[15] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[13], context[14] );
  refalrts::link_brackets( context[9], context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_elem( res, context[15] );
  res = refalrts::splice_evar( res, context[12], context[1] );
  res = refalrts::splice_elem( res, context[14] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_elem( res, context[13] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_FindDivisionAndGenerate_Z2("FindDivisionAndGenerate@2", COOKIE1_, COOKIE2_, func_gen_FindDivisionAndGenerate_Z2);


static refalrts::FnResult func_gen_FindDivisionAndGenerate_Z3(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
  // </0 & FindDivisionAndGenerate@3/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & FindDivisionAndGenerate@3/4 s.new1/5 s.new2/6 (/9 e.new3/7 )/10 e.new4/2 s.new5/12 s.new6/11 >/1
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
  if( ! refalrts::svar_right( context[11], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_right( context[12], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new4 as range 2
  do {
    // </0 & FindDivisionAndGenerate@3/4 s.FnGenSubst0/5 s.FnGenResult0/6 (/9 e.MarkedPattern$a0/13 )/10 e.SentencesWithSubst$a/15 s.ContextSize$a0/12 s.BaseNum$a0/11 >/1
    context[13] = context[7];
    context[14] = context[8];
    context[15] = context[2];
    context[16] = context[3];
    // closed e.MarkedPattern$a0 as range 13
    // closed e.SentencesWithSubst$a as range 15
    //DEBUG: s.FnGenSubst0: 5
    //DEBUG: s.FnGenResult0: 6
    //DEBUG: s.ContextSize$a0: 12
    //DEBUG: s.BaseNum$a0: 11
    //DEBUG: e.MarkedPattern$a0: 13
    //DEBUG: e.SentencesWithSubst$a: 15

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & FindDivisionAndGenerate:1@3/4 AsIs: s.FnGenSubst0/5 AsIs: s.FnGenResult0/6 AsIs: (/9 AsIs: e.MarkedPattern$a0/13 AsIs: )/10 } Tile{ AsIs: s.ContextSize$a0/12 AsIs: s.BaseNum$a0/11 HalfReuse: </1 } & FindDivision/17 Tile{ AsIs: e.SentencesWithSubst$a/15 } >/18 >/19 Tile{ ]] }
    refalrts::alloc_name(vm, context[17], functions[efunc_FindDivision]);
    refalrts::alloc_close_call(vm, context[18]);
    refalrts::alloc_close_call(vm, context[19]);
    refalrts::update_name(context[4], functions[efunc_gen_FindDivisionAndGenerate_B1Z3]);
    refalrts::reinit_open_call(context[1]);
    refalrts::push_stack( vm, context[19] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[18] );
    refalrts::push_stack( vm, context[1] );
    refalrts::link_brackets( context[9], context[10] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[18], context[19] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_elem( res, context[17] );
    res = refalrts::splice_evar( res, context[12], context[1] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & FindDivisionAndGenerate@3/4 s.FnGenSubst0/5 s.FnGenResult0/6 (/9 e.MarkedPattern$a0/7 )/10 e.SentencesWithSubst$a/2 s.ContextSize$a0/12 s.BaseNum$a0/11 >/1
  // closed e.MarkedPattern$a0 as range 7
  // closed e.SentencesWithSubst$a as range 2
  //DEBUG: s.FnGenSubst0: 5
  //DEBUG: s.FnGenResult0: 6
  //DEBUG: s.ContextSize$a0: 12
  //DEBUG: s.BaseNum$a0: 11
  //DEBUG: e.MarkedPattern$a0: 7
  //DEBUG: e.SentencesWithSubst$a: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & FindDivisionAndGenerate@0/4 AsIs: s.FnGenSubst0/5 AsIs: s.FnGenResult0/6 AsIs: (/9 AsIs: e.MarkedPattern$a0/7 AsIs: )/10 } (/13 Tile{ AsIs: e.SentencesWithSubst$a/2 } )/14 Tile{ AsIs: s.ContextSize$a0/12 AsIs: s.BaseNum$a0/11 HalfReuse: 0/1 } >/15 Tile{ ]] }
  refalrts::alloc_open_bracket(vm, context[13]);
  refalrts::alloc_close_bracket(vm, context[14]);
  refalrts::alloc_close_call(vm, context[15]);
  refalrts::update_name(context[4], functions[efunc_gen_FindDivisionAndGenerate_Z0]);
  refalrts::reinit_number(context[1], 0UL);
  refalrts::push_stack( vm, context[15] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[13], context[14] );
  refalrts::link_brackets( context[9], context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_elem( res, context[15] );
  res = refalrts::splice_evar( res, context[12], context[1] );
  res = refalrts::splice_elem( res, context[14] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_elem( res, context[13] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_FindDivisionAndGenerate_Z3("FindDivisionAndGenerate@3", COOKIE1_, COOKIE2_, func_gen_FindDivisionAndGenerate_Z3);


static refalrts::FnResult func_gen_FindDivisionAndGenerate_B1Z2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 64 elems
  refalrts::Iter context[64];
  refalrts::zeros( context, 64 );
  // </0 & FindDivisionAndGenerate:1@2/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & FindDivisionAndGenerate:1@2/4 s.new1/5 s.new2/6 (/9 e.new3/7 )/10 s.new4/11 s.new5/12 e.new6/2 >/1
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
  if( ! refalrts::svar_left( context[11], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[12], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new6 as range 2
  do {
    // </0 & FindDivisionAndGenerate:1@2/4 s.new7/5 s.new8/6 (/9 e.new14/13 )/10 s.new9/11 s.new10/12 s.new11/17 (/20 e.new12/18 )/21 e.new13/15 >/1
    context[13] = context[7];
    context[14] = context[8];
    context[15] = context[2];
    context[16] = context[3];
    // closed e.new14 as range 13
    if( ! refalrts::svar_left( context[17], context[15], context[16] ) )
      continue;
    context[18] = 0;
    context[19] = 0;
    context[20] = refalrts::brackets_left( context[18], context[19], context[15], context[16] );
    if( ! context[20] )
      continue;
    refalrts::bracket_pointers(context[20], context[21]);
    // closed e.new12 as range 18
    // closed e.new13 as range 15
    do {
      // </0 & FindDivisionAndGenerate:1@2/4 s.new15/5 s.new16/6 (/9 e.new23/22 )/10 s.new17/11 s.new18/12 s.new19/17 (/20 e.new22/24 )/21 (/30 e.new20/28 )/31 e.new21/26 >/1
      context[22] = context[13];
      context[23] = context[14];
      context[24] = context[18];
      context[25] = context[19];
      context[26] = context[15];
      context[27] = context[16];
      context[28] = 0;
      context[29] = 0;
      context[30] = refalrts::brackets_left( context[28], context[29], context[26], context[27] );
      if( ! context[30] )
        continue;
      refalrts::bracket_pointers(context[30], context[31]);
      // closed e.new23 as range 22
      // closed e.new22 as range 24
      // closed e.new20 as range 28
      // closed e.new21 as range 26
      do {
        // </0 & FindDivisionAndGenerate:1@2/4 s.new24/5 s.new25/6 (/9 e.new31/32 )/10 s.new26/11 s.new27/12 # ForGroup/17 (/20 e.new30/34 )/21 (/30 e.new29/36 )/31 e.new28/38 >/1
        context[32] = context[22];
        context[33] = context[23];
        context[34] = context[24];
        context[35] = context[25];
        context[36] = context[28];
        context[37] = context[29];
        context[38] = context[26];
        context[39] = context[27];
        if( ! refalrts::ident_term( identifiers[ident_ForGroup], context[17] ) )
          continue;
        // closed e.new31 as range 32
        // closed e.new30 as range 34
        // closed e.new29 as range 36
        // closed e.new28 as range 38
        do {
          // </0 & FindDivisionAndGenerate:1@2/4 s.FnGenSubst0/5 s.FnGenResult0/6 (/9 e.MarkedPattern$a0/40 )/10 s.ContextSize$a0/11 s.BaseNum$a0/12 # ForGroup/17 (/20 e.NewGCG-Subst/42 )/21 (/30 (/50 e.0/48 )/51 )/31 e.SecondGroup/46 >/1
          context[40] = context[32];
          context[41] = context[33];
          context[42] = context[34];
          context[43] = context[35];
          context[44] = context[36];
          context[45] = context[37];
          context[46] = context[38];
          context[47] = context[39];
          context[48] = 0;
          context[49] = 0;
          context[50] = refalrts::brackets_left( context[48], context[49], context[44], context[45] );
          if( ! context[50] )
            continue;
          refalrts::bracket_pointers(context[50], context[51]);
          if( ! refalrts::empty_seq( context[44], context[45] ) )
            continue;
          // closed e.MarkedPattern$a0 as range 40
          // closed e.NewGCG-Subst as range 42
          // closed e.0 as range 48
          // closed e.SecondGroup as range 46
          //DEBUG: s.FnGenSubst0: 5
          //DEBUG: s.FnGenResult0: 6
          //DEBUG: s.ContextSize$a0: 11
          //DEBUG: s.BaseNum$a0: 12
          //DEBUG: e.MarkedPattern$a0: 40
          //DEBUG: e.NewGCG-Subst: 42
          //DEBUG: e.0: 48
          //DEBUG: e.SecondGroup: 46

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} e.NewGCG-Subst/42 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 Reuse: & FindDivisionAndGenerate:1$1=1@2/4 AsIs: s.FnGenSubst0/5 AsIs: s.FnGenResult0/6 AsIs: (/9 AsIs: e.MarkedPattern$a0/40 AsIs: )/10 } (/52 Tile{ AsIs: e.SecondGroup/46 } Tile{ AsIs: )/21 } Tile{ AsIs: s.ContextSize$a0/11 AsIs: s.BaseNum$a0/12 HalfReuse: </17 HalfReuse: & GenerateSingleSentence/20 } s.FnGenSubst0/5/53 s.FnGenResult0/6/54 Tile{ HalfReuse: s.ContextSize$a011 /1 } (/55 e.MarkedPattern$a0/40/56 Tile{ HalfReuse: )/30 HalfReuse: 2/50 AsIs: e.0/48 HalfReuse: >/51 HalfReuse: >/31 } Tile{ ]] }
          refalrts::alloc_open_bracket(vm, context[52]);
          refalrts::copy_stvar(vm, context[53], context[5]);
          refalrts::copy_stvar(vm, context[54], context[6]);
          refalrts::alloc_open_bracket(vm, context[55]);
          refalrts::copy_evar(vm, context[56], context[57], context[40], context[41]);
          refalrts::update_name(context[4], functions[efunc_gen_FindDivisionAndGenerate_B1S1A1Z2]);
          refalrts::reinit_open_call(context[17]);
          refalrts::reinit_name(context[20], functions[efunc_GenerateSingleSentence]);
          refalrts::reinit_svar( context[1], context[11] );
          refalrts::reinit_close_bracket(context[30]);
          refalrts::reinit_number(context[50], 2UL);
          refalrts::reinit_close_call(context[51]);
          refalrts::reinit_close_call(context[31]);
          refalrts::push_stack( vm, context[31] );
          refalrts::push_stack( vm, context[0] );
          refalrts::push_stack( vm, context[51] );
          refalrts::push_stack( vm, context[17] );
          refalrts::link_brackets( context[55], context[30] );
          refalrts::link_brackets( context[52], context[21] );
          refalrts::link_brackets( context[9], context[10] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = arg_end->next;
          res = refalrts::splice_evar( res, context[30], context[31] );
          res = refalrts::splice_evar( res, context[56], context[57] );
          res = refalrts::splice_elem( res, context[55] );
          res = refalrts::splice_elem( res, context[1] );
          res = refalrts::splice_evar( res, context[53], context[54] );
          res = refalrts::splice_evar( res, context[11], context[20] );
          res = refalrts::splice_elem( res, context[21] );
          res = refalrts::splice_evar( res, context[46], context[47] );
          res = refalrts::splice_elem( res, context[52] );
          refalrts::splice_to_freelist_open( vm, context[10], res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & FindDivisionAndGenerate:1@2/4 s.FnGenSubst0/5 s.FnGenResult0/6 (/9 e.MarkedPattern$a0/40 )/10 s.ContextSize$a0/11 s.BaseNum$a0/12 # ForGroup/17 (/20 e.NewGCG-Subst/42 )/21 (/30 e.FirstGroup/44 )/31 e.SecondGroup/46 >/1
        context[40] = context[32];
        context[41] = context[33];
        context[42] = context[34];
        context[43] = context[35];
        context[44] = context[36];
        context[45] = context[37];
        context[46] = context[38];
        context[47] = context[39];
        // closed e.MarkedPattern$a0 as range 40
        // closed e.NewGCG-Subst as range 42
        // closed e.FirstGroup as range 44
        // closed e.SecondGroup as range 46
        //DEBUG: s.FnGenSubst0: 5
        //DEBUG: s.FnGenResult0: 6
        //DEBUG: s.ContextSize$a0: 11
        //DEBUG: s.BaseNum$a0: 12
        //DEBUG: e.MarkedPattern$a0: 40
        //DEBUG: e.NewGCG-Subst: 42
        //DEBUG: e.FirstGroup: 44
        //DEBUG: e.SecondGroup: 46

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & FindDivisionAndGenerate:1$1=1@2/4 AsIs: s.FnGenSubst0/5 AsIs: s.FnGenResult0/6 AsIs: (/9 AsIs: e.MarkedPattern$a0/40 AsIs: )/10 } (/48 Tile{ AsIs: e.SecondGroup/46 } )/49 Tile{ AsIs: s.ContextSize$a0/11 AsIs: s.BaseNum$a0/12 HalfReuse: </17 HalfReuse: & GenerateGroupWithGCGSubst$2=1/20 } s.FnGenSubst0/5/50 s.FnGenResult0/6/51 Tile{ HalfReuse: 2/21 AsIs: (/30 AsIs: e.FirstGroup/44 AsIs: )/31 } s.ContextSize$a0/11/52 (/53 e.MarkedPattern$a0/40/54 )/56 </57 & DoMapAccum@1/58 s.BaseNum$a0/12/59 (/60 )/61 Tile{ AsIs: e.NewGCG-Subst/42 } >/62 >/63 Tile{ AsIs: >/1 ]] }
        refalrts::alloc_open_bracket(vm, context[48]);
        refalrts::alloc_close_bracket(vm, context[49]);
        refalrts::copy_stvar(vm, context[50], context[5]);
        refalrts::copy_stvar(vm, context[51], context[6]);
        refalrts::copy_stvar(vm, context[52], context[11]);
        refalrts::alloc_open_bracket(vm, context[53]);
        refalrts::copy_evar(vm, context[54], context[55], context[40], context[41]);
        refalrts::alloc_close_bracket(vm, context[56]);
        refalrts::alloc_open_call(vm, context[57]);
        refalrts::alloc_name(vm, context[58], functions[efunc_gen_DoMapAccum_Z1]);
        refalrts::copy_stvar(vm, context[59], context[12]);
        refalrts::alloc_open_bracket(vm, context[60]);
        refalrts::alloc_close_bracket(vm, context[61]);
        refalrts::alloc_close_call(vm, context[62]);
        refalrts::alloc_close_call(vm, context[63]);
        refalrts::update_name(context[4], functions[efunc_gen_FindDivisionAndGenerate_B1S1A1Z2]);
        refalrts::reinit_open_call(context[17]);
        refalrts::reinit_name(context[20], functions[efunc_gen_GenerateGroupWithGCGSubst_S2A1]);
        refalrts::reinit_number(context[21], 2UL);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::push_stack( vm, context[63] );
        refalrts::push_stack( vm, context[17] );
        refalrts::push_stack( vm, context[62] );
        refalrts::push_stack( vm, context[57] );
        refalrts::link_brackets( context[60], context[61] );
        refalrts::link_brackets( context[53], context[56] );
        refalrts::link_brackets( context[30], context[31] );
        refalrts::link_brackets( context[48], context[49] );
        refalrts::link_brackets( context[9], context[10] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[62], context[63] );
        res = refalrts::splice_evar( res, context[42], context[43] );
        res = refalrts::splice_evar( res, context[52], context[61] );
        res = refalrts::splice_evar( res, context[21], context[31] );
        res = refalrts::splice_evar( res, context[50], context[51] );
        res = refalrts::splice_evar( res, context[11], context[20] );
        res = refalrts::splice_elem( res, context[49] );
        res = refalrts::splice_evar( res, context[46], context[47] );
        res = refalrts::splice_elem( res, context[48] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & FindDivisionAndGenerate:1@2/4 s.FnGenSubst0/5 s.FnGenResult0/6 (/9 e.MarkedPattern$a0/32 )/10 s.ContextSize$a0/11 s.BaseNum$a0/12 # ForAllSentences/17 (/20 e.NewGCG-Subst/34 )/21 (/30 e.0/36 )/31 >/1
      context[32] = context[22];
      context[33] = context[23];
      context[34] = context[24];
      context[35] = context[25];
      context[36] = context[28];
      context[37] = context[29];
      if( ! refalrts::ident_term( identifiers[ident_ForAllSentences], context[17] ) )
        continue;
      if( ! refalrts::empty_seq( context[26], context[27] ) )
        continue;
      // closed e.MarkedPattern$a0 as range 32
      // closed e.NewGCG-Subst as range 34
      // closed e.0 as range 36
      //DEBUG: s.FnGenSubst0: 5
      //DEBUG: s.FnGenResult0: 6
      //DEBUG: s.ContextSize$a0: 11
      //DEBUG: s.BaseNum$a0: 12
      //DEBUG: e.MarkedPattern$a0: 32
      //DEBUG: e.NewGCG-Subst: 34
      //DEBUG: e.0: 36

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} )/10 s.ContextSize$a0/11 s.BaseNum$a0/12 # ForAllSentences/17 {REMOVED TILE} e.NewGCG-Subst/34 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & GenerateSingleSentence/4 AsIs: s.FnGenSubst0/5 AsIs: s.FnGenResult0/6 HalfReuse: s.ContextSize$a011 /9 } Tile{ AsIs: (/20 } Tile{ AsIs: e.MarkedPattern$a0/32 } Tile{ AsIs: )/21 HalfReuse: 1/30 AsIs: e.0/36 HalfReuse: >/31 } Tile{ ]] }
      refalrts::update_name(context[4], functions[efunc_GenerateSingleSentence]);
      refalrts::reinit_svar( context[9], context[11] );
      refalrts::reinit_number(context[30], 1UL);
      refalrts::reinit_close_call(context[31]);
      refalrts::push_stack( vm, context[31] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[20], context[21] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[21], context[31] );
      res = refalrts::splice_evar( res, context[32], context[33] );
      res = refalrts::splice_elem( res, context[20] );
      refalrts::splice_to_freelist_open( vm, context[9], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & FindDivisionAndGenerate:1@2/4 s.FnGenSubst0/5 s.FnGenResult0/6 (/9 e.MarkedPattern$a0/22 )/10 s.ContextSize$a0/11 s.BaseNum$a0/12 # ForAllSentences/17 (/20 e.NewGCG-Subst/24 )/21 e.SentencesWithSubst$a/26 >/1
    context[22] = context[13];
    context[23] = context[14];
    context[24] = context[18];
    context[25] = context[19];
    context[26] = context[15];
    context[27] = context[16];
    if( ! refalrts::ident_term( identifiers[ident_ForAllSentences], context[17] ) )
      continue;
    // closed e.MarkedPattern$a0 as range 22
    // closed e.NewGCG-Subst as range 24
    // closed e.SentencesWithSubst$a as range 26
    //DEBUG: s.FnGenSubst0: 5
    //DEBUG: s.FnGenResult0: 6
    //DEBUG: s.ContextSize$a0: 11
    //DEBUG: s.BaseNum$a0: 12
    //DEBUG: e.MarkedPattern$a0: 22
    //DEBUG: e.NewGCG-Subst: 24
    //DEBUG: e.SentencesWithSubst$a: 26

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & GenerateGroupWithGCGSubst$2=1@1/4 AsIs: s.FnGenSubst0/5 AsIs: s.FnGenResult0/6 AsIs: (/9 } Tile{ AsIs: e.SentencesWithSubst$a/26 } Tile{ AsIs: )/10 AsIs: s.ContextSize$a0/11 } (/28 Tile{ AsIs: e.MarkedPattern$a0/22 } )/29 </30 & DoMapAccum@1/31 Tile{ AsIs: s.BaseNum$a0/12 HalfReuse: (/17 HalfReuse: )/20 AsIs: e.NewGCG-Subst/24 HalfReuse: >/21 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_bracket(vm, context[28]);
    refalrts::alloc_close_bracket(vm, context[29]);
    refalrts::alloc_open_call(vm, context[30]);
    refalrts::alloc_name(vm, context[31], functions[efunc_gen_DoMapAccum_Z1]);
    refalrts::update_name(context[4], functions[efunc_gen_GenerateGroupWithGCGSubst_S2A1Z1]);
    refalrts::reinit_open_bracket(context[17]);
    refalrts::reinit_close_bracket(context[20]);
    refalrts::reinit_close_call(context[21]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[21] );
    refalrts::push_stack( vm, context[30] );
    refalrts::link_brackets( context[17], context[20] );
    refalrts::link_brackets( context[28], context[29] );
    refalrts::link_brackets( context[9], context[10] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[12], context[21] );
    res = refalrts::splice_evar( res, context[29], context[31] );
    res = refalrts::splice_evar( res, context[22], context[23] );
    res = refalrts::splice_elem( res, context[28] );
    res = refalrts::splice_evar( res, context[10], context[11] );
    res = refalrts::splice_evar( res, context[26], context[27] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & FindDivisionAndGenerate:1@2/4 s.FnGenSubst0/5 s.FnGenResult0/6 (/9 e.MarkedPattern$a0/7 )/10 s.ContextSize$a0/11 s.BaseNum$a0/12 e.dyn/2 >/1
  // closed e.MarkedPattern$a0 as range 7
  // closed e.dyn as range 2
  //DEBUG: s.FnGenSubst0: 5
  //DEBUG: s.FnGenResult0: 6
  //DEBUG: s.ContextSize$a0: 11
  //DEBUG: s.BaseNum$a0: 12
  //DEBUG: e.MarkedPattern$a0: 7
  //DEBUG: e.dyn: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & FindDivisionAndGenerate:1@0/4 AsIs: s.FnGenSubst0/5 AsIs: s.FnGenResult0/6 AsIs: (/9 AsIs: e.MarkedPattern$a0/7 AsIs: )/10 AsIs: s.ContextSize$a0/11 AsIs: s.BaseNum$a0/12 } 1/13 Tile{ AsIs: e.dyn/2 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_number(vm, context[13], 1UL);
  refalrts::update_name(context[4], functions[efunc_gen_FindDivisionAndGenerate_B1Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[9], context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_elem( res, context[13] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_FindDivisionAndGenerate_B1Z2("FindDivisionAndGenerate:1@2", COOKIE1_, COOKIE2_, func_gen_FindDivisionAndGenerate_B1Z2);


static refalrts::FnResult func_gen_FindDivisionAndGenerate_B1Z3(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 63 elems
  refalrts::Iter context[63];
  refalrts::zeros( context, 63 );
  // </0 & FindDivisionAndGenerate:1@3/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & FindDivisionAndGenerate:1@3/4 s.new1/5 s.new2/6 (/9 e.new3/7 )/10 s.new4/11 s.new5/12 e.new6/2 >/1
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
  if( ! refalrts::svar_left( context[11], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[12], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new6 as range 2
  do {
    // </0 & FindDivisionAndGenerate:1@3/4 s.new7/5 s.new8/6 (/9 e.new14/13 )/10 s.new9/11 s.new10/12 s.new11/17 (/20 e.new12/18 )/21 e.new13/15 >/1
    context[13] = context[7];
    context[14] = context[8];
    context[15] = context[2];
    context[16] = context[3];
    // closed e.new14 as range 13
    if( ! refalrts::svar_left( context[17], context[15], context[16] ) )
      continue;
    context[18] = 0;
    context[19] = 0;
    context[20] = refalrts::brackets_left( context[18], context[19], context[15], context[16] );
    if( ! context[20] )
      continue;
    refalrts::bracket_pointers(context[20], context[21]);
    // closed e.new12 as range 18
    // closed e.new13 as range 15
    do {
      // </0 & FindDivisionAndGenerate:1@3/4 s.new15/5 s.new16/6 (/9 e.new23/22 )/10 s.new17/11 s.new18/12 s.new19/17 (/20 e.new22/24 )/21 (/30 e.new20/28 )/31 e.new21/26 >/1
      context[22] = context[13];
      context[23] = context[14];
      context[24] = context[18];
      context[25] = context[19];
      context[26] = context[15];
      context[27] = context[16];
      context[28] = 0;
      context[29] = 0;
      context[30] = refalrts::brackets_left( context[28], context[29], context[26], context[27] );
      if( ! context[30] )
        continue;
      refalrts::bracket_pointers(context[30], context[31]);
      // closed e.new23 as range 22
      // closed e.new22 as range 24
      // closed e.new20 as range 28
      // closed e.new21 as range 26
      do {
        // </0 & FindDivisionAndGenerate:1@3/4 s.new24/5 s.new25/6 (/9 e.new31/32 )/10 s.new26/11 s.new27/12 # ForGroup/17 (/20 e.new30/34 )/21 (/30 e.new29/36 )/31 e.new28/38 >/1
        context[32] = context[22];
        context[33] = context[23];
        context[34] = context[24];
        context[35] = context[25];
        context[36] = context[28];
        context[37] = context[29];
        context[38] = context[26];
        context[39] = context[27];
        if( ! refalrts::ident_term( identifiers[ident_ForGroup], context[17] ) )
          continue;
        // closed e.new31 as range 32
        // closed e.new30 as range 34
        // closed e.new29 as range 36
        // closed e.new28 as range 38
        do {
          // </0 & FindDivisionAndGenerate:1@3/4 s.FnGenSubst0/5 s.FnGenResult0/6 (/9 e.MarkedPattern$a0/40 )/10 s.ContextSize$a0/11 s.BaseNum$a0/12 # ForGroup/17 (/20 e.NewGCG-Subst/42 )/21 (/30 (/50 e.0/48 )/51 )/31 e.SecondGroup/46 >/1
          context[40] = context[32];
          context[41] = context[33];
          context[42] = context[34];
          context[43] = context[35];
          context[44] = context[36];
          context[45] = context[37];
          context[46] = context[38];
          context[47] = context[39];
          context[48] = 0;
          context[49] = 0;
          context[50] = refalrts::brackets_left( context[48], context[49], context[44], context[45] );
          if( ! context[50] )
            continue;
          refalrts::bracket_pointers(context[50], context[51]);
          if( ! refalrts::empty_seq( context[44], context[45] ) )
            continue;
          // closed e.MarkedPattern$a0 as range 40
          // closed e.NewGCG-Subst as range 42
          // closed e.0 as range 48
          // closed e.SecondGroup as range 46
          //DEBUG: s.FnGenSubst0: 5
          //DEBUG: s.FnGenResult0: 6
          //DEBUG: s.ContextSize$a0: 11
          //DEBUG: s.BaseNum$a0: 12
          //DEBUG: e.MarkedPattern$a0: 40
          //DEBUG: e.NewGCG-Subst: 42
          //DEBUG: e.0: 48
          //DEBUG: e.SecondGroup: 46

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} e.NewGCG-Subst/42 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 Reuse: & FindDivisionAndGenerate:1$1=1@3/4 AsIs: s.FnGenSubst0/5 AsIs: s.FnGenResult0/6 AsIs: (/9 AsIs: e.MarkedPattern$a0/40 AsIs: )/10 } (/52 Tile{ AsIs: e.SecondGroup/46 } Tile{ AsIs: )/21 } Tile{ AsIs: s.ContextSize$a0/11 AsIs: s.BaseNum$a0/12 HalfReuse: </17 HalfReuse: & GenerateSingleSentence/20 } s.FnGenSubst0/5/53 s.FnGenResult0/6/54 Tile{ HalfReuse: s.ContextSize$a011 /1 } (/55 e.MarkedPattern$a0/40/56 Tile{ HalfReuse: )/30 HalfReuse: 1/50 AsIs: e.0/48 HalfReuse: >/51 HalfReuse: >/31 } Tile{ ]] }
          refalrts::alloc_open_bracket(vm, context[52]);
          refalrts::copy_stvar(vm, context[53], context[5]);
          refalrts::copy_stvar(vm, context[54], context[6]);
          refalrts::alloc_open_bracket(vm, context[55]);
          refalrts::copy_evar(vm, context[56], context[57], context[40], context[41]);
          refalrts::update_name(context[4], functions[efunc_gen_FindDivisionAndGenerate_B1S1A1Z3]);
          refalrts::reinit_open_call(context[17]);
          refalrts::reinit_name(context[20], functions[efunc_GenerateSingleSentence]);
          refalrts::reinit_svar( context[1], context[11] );
          refalrts::reinit_close_bracket(context[30]);
          refalrts::reinit_number(context[50], 1UL);
          refalrts::reinit_close_call(context[51]);
          refalrts::reinit_close_call(context[31]);
          refalrts::push_stack( vm, context[31] );
          refalrts::push_stack( vm, context[0] );
          refalrts::push_stack( vm, context[51] );
          refalrts::push_stack( vm, context[17] );
          refalrts::link_brackets( context[55], context[30] );
          refalrts::link_brackets( context[52], context[21] );
          refalrts::link_brackets( context[9], context[10] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = arg_end->next;
          res = refalrts::splice_evar( res, context[30], context[31] );
          res = refalrts::splice_evar( res, context[56], context[57] );
          res = refalrts::splice_elem( res, context[55] );
          res = refalrts::splice_elem( res, context[1] );
          res = refalrts::splice_evar( res, context[53], context[54] );
          res = refalrts::splice_evar( res, context[11], context[20] );
          res = refalrts::splice_elem( res, context[21] );
          res = refalrts::splice_evar( res, context[46], context[47] );
          res = refalrts::splice_elem( res, context[52] );
          refalrts::splice_to_freelist_open( vm, context[10], res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & FindDivisionAndGenerate:1@3/4 s.FnGenSubst0/5 s.FnGenResult0/6 (/9 e.MarkedPattern$a0/40 )/10 s.ContextSize$a0/11 s.BaseNum$a0/12 # ForGroup/17 (/20 e.NewGCG-Subst/42 )/21 (/30 e.FirstGroup/44 )/31 e.SecondGroup/46 >/1
        context[40] = context[32];
        context[41] = context[33];
        context[42] = context[34];
        context[43] = context[35];
        context[44] = context[36];
        context[45] = context[37];
        context[46] = context[38];
        context[47] = context[39];
        // closed e.MarkedPattern$a0 as range 40
        // closed e.NewGCG-Subst as range 42
        // closed e.FirstGroup as range 44
        // closed e.SecondGroup as range 46
        //DEBUG: s.FnGenSubst0: 5
        //DEBUG: s.FnGenResult0: 6
        //DEBUG: s.ContextSize$a0: 11
        //DEBUG: s.BaseNum$a0: 12
        //DEBUG: e.MarkedPattern$a0: 40
        //DEBUG: e.NewGCG-Subst: 42
        //DEBUG: e.FirstGroup: 44
        //DEBUG: e.SecondGroup: 46

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & FindDivisionAndGenerate:1$1=1@3/4 AsIs: s.FnGenSubst0/5 AsIs: s.FnGenResult0/6 AsIs: (/9 AsIs: e.MarkedPattern$a0/40 AsIs: )/10 } (/48 Tile{ AsIs: e.SecondGroup/46 } )/49 Tile{ AsIs: s.ContextSize$a0/11 AsIs: s.BaseNum$a0/12 HalfReuse: </17 HalfReuse: & GenerateGroupWithGCGSubst$2=1@1/20 } s.FnGenSubst0/5/50 Tile{ HalfReuse: s.FnGenResult06 /21 AsIs: (/30 AsIs: e.FirstGroup/44 AsIs: )/31 } s.ContextSize$a0/11/51 (/52 e.MarkedPattern$a0/40/53 )/55 </56 & DoMapAccum@1/57 s.BaseNum$a0/12/58 (/59 )/60 Tile{ AsIs: e.NewGCG-Subst/42 } >/61 >/62 Tile{ AsIs: >/1 ]] }
        refalrts::alloc_open_bracket(vm, context[48]);
        refalrts::alloc_close_bracket(vm, context[49]);
        refalrts::copy_stvar(vm, context[50], context[5]);
        refalrts::copy_stvar(vm, context[51], context[11]);
        refalrts::alloc_open_bracket(vm, context[52]);
        refalrts::copy_evar(vm, context[53], context[54], context[40], context[41]);
        refalrts::alloc_close_bracket(vm, context[55]);
        refalrts::alloc_open_call(vm, context[56]);
        refalrts::alloc_name(vm, context[57], functions[efunc_gen_DoMapAccum_Z1]);
        refalrts::copy_stvar(vm, context[58], context[12]);
        refalrts::alloc_open_bracket(vm, context[59]);
        refalrts::alloc_close_bracket(vm, context[60]);
        refalrts::alloc_close_call(vm, context[61]);
        refalrts::alloc_close_call(vm, context[62]);
        refalrts::update_name(context[4], functions[efunc_gen_FindDivisionAndGenerate_B1S1A1Z3]);
        refalrts::reinit_open_call(context[17]);
        refalrts::reinit_name(context[20], functions[efunc_gen_GenerateGroupWithGCGSubst_S2A1Z1]);
        refalrts::reinit_svar( context[21], context[6] );
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::push_stack( vm, context[62] );
        refalrts::push_stack( vm, context[17] );
        refalrts::push_stack( vm, context[61] );
        refalrts::push_stack( vm, context[56] );
        refalrts::link_brackets( context[59], context[60] );
        refalrts::link_brackets( context[52], context[55] );
        refalrts::link_brackets( context[30], context[31] );
        refalrts::link_brackets( context[48], context[49] );
        refalrts::link_brackets( context[9], context[10] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[61], context[62] );
        res = refalrts::splice_evar( res, context[42], context[43] );
        res = refalrts::splice_evar( res, context[51], context[60] );
        res = refalrts::splice_evar( res, context[21], context[31] );
        res = refalrts::splice_elem( res, context[50] );
        res = refalrts::splice_evar( res, context[11], context[20] );
        res = refalrts::splice_elem( res, context[49] );
        res = refalrts::splice_evar( res, context[46], context[47] );
        res = refalrts::splice_elem( res, context[48] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & FindDivisionAndGenerate:1@3/4 s.FnGenSubst0/5 s.FnGenResult0/6 (/9 e.MarkedPattern$a0/32 )/10 s.ContextSize$a0/11 s.BaseNum$a0/12 # ForAllSentences/17 (/20 e.NewGCG-Subst/34 )/21 (/30 e.0/36 )/31 >/1
      context[32] = context[22];
      context[33] = context[23];
      context[34] = context[24];
      context[35] = context[25];
      context[36] = context[28];
      context[37] = context[29];
      if( ! refalrts::ident_term( identifiers[ident_ForAllSentences], context[17] ) )
        continue;
      if( ! refalrts::empty_seq( context[26], context[27] ) )
        continue;
      // closed e.MarkedPattern$a0 as range 32
      // closed e.NewGCG-Subst as range 34
      // closed e.0 as range 36
      //DEBUG: s.FnGenSubst0: 5
      //DEBUG: s.FnGenResult0: 6
      //DEBUG: s.ContextSize$a0: 11
      //DEBUG: s.BaseNum$a0: 12
      //DEBUG: e.MarkedPattern$a0: 32
      //DEBUG: e.NewGCG-Subst: 34
      //DEBUG: e.0: 36

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} )/10 s.ContextSize$a0/11 s.BaseNum$a0/12 # ForAllSentences/17 {REMOVED TILE} e.NewGCG-Subst/34 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & GenerateSingleSentence/4 AsIs: s.FnGenSubst0/5 AsIs: s.FnGenResult0/6 HalfReuse: s.ContextSize$a011 /9 } Tile{ AsIs: (/20 } Tile{ AsIs: e.MarkedPattern$a0/32 } Tile{ AsIs: )/21 HalfReuse: 0/30 AsIs: e.0/36 HalfReuse: >/31 } Tile{ ]] }
      refalrts::update_name(context[4], functions[efunc_GenerateSingleSentence]);
      refalrts::reinit_svar( context[9], context[11] );
      refalrts::reinit_number(context[30], 0UL);
      refalrts::reinit_close_call(context[31]);
      refalrts::push_stack( vm, context[31] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[20], context[21] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[21], context[31] );
      res = refalrts::splice_evar( res, context[32], context[33] );
      res = refalrts::splice_elem( res, context[20] );
      refalrts::splice_to_freelist_open( vm, context[9], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & FindDivisionAndGenerate:1@3/4 s.FnGenSubst0/5 s.FnGenResult0/6 (/9 e.MarkedPattern$a0/22 )/10 s.ContextSize$a0/11 s.BaseNum$a0/12 # ForAllSentences/17 (/20 e.NewGCG-Subst/24 )/21 e.SentencesWithSubst$a/26 >/1
    context[22] = context[13];
    context[23] = context[14];
    context[24] = context[18];
    context[25] = context[19];
    context[26] = context[15];
    context[27] = context[16];
    if( ! refalrts::ident_term( identifiers[ident_ForAllSentences], context[17] ) )
      continue;
    // closed e.MarkedPattern$a0 as range 22
    // closed e.NewGCG-Subst as range 24
    // closed e.SentencesWithSubst$a as range 26
    //DEBUG: s.FnGenSubst0: 5
    //DEBUG: s.FnGenResult0: 6
    //DEBUG: s.ContextSize$a0: 11
    //DEBUG: s.BaseNum$a0: 12
    //DEBUG: e.MarkedPattern$a0: 22
    //DEBUG: e.NewGCG-Subst: 24
    //DEBUG: e.SentencesWithSubst$a: 26

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & GenerateGroupWithGCGSubst$2=1@2/4 AsIs: s.FnGenSubst0/5 AsIs: s.FnGenResult0/6 AsIs: (/9 } Tile{ AsIs: e.SentencesWithSubst$a/26 } Tile{ AsIs: )/10 AsIs: s.ContextSize$a0/11 } (/28 Tile{ AsIs: e.MarkedPattern$a0/22 } )/29 </30 & DoMapAccum@1/31 Tile{ AsIs: s.BaseNum$a0/12 HalfReuse: (/17 HalfReuse: )/20 AsIs: e.NewGCG-Subst/24 HalfReuse: >/21 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_bracket(vm, context[28]);
    refalrts::alloc_close_bracket(vm, context[29]);
    refalrts::alloc_open_call(vm, context[30]);
    refalrts::alloc_name(vm, context[31], functions[efunc_gen_DoMapAccum_Z1]);
    refalrts::update_name(context[4], functions[efunc_gen_GenerateGroupWithGCGSubst_S2A1Z2]);
    refalrts::reinit_open_bracket(context[17]);
    refalrts::reinit_close_bracket(context[20]);
    refalrts::reinit_close_call(context[21]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[21] );
    refalrts::push_stack( vm, context[30] );
    refalrts::link_brackets( context[17], context[20] );
    refalrts::link_brackets( context[28], context[29] );
    refalrts::link_brackets( context[9], context[10] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[12], context[21] );
    res = refalrts::splice_evar( res, context[29], context[31] );
    res = refalrts::splice_evar( res, context[22], context[23] );
    res = refalrts::splice_elem( res, context[28] );
    res = refalrts::splice_evar( res, context[10], context[11] );
    res = refalrts::splice_evar( res, context[26], context[27] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & FindDivisionAndGenerate:1@3/4 s.FnGenSubst0/5 s.FnGenResult0/6 (/9 e.MarkedPattern$a0/7 )/10 s.ContextSize$a0/11 s.BaseNum$a0/12 e.dyn/2 >/1
  // closed e.MarkedPattern$a0 as range 7
  // closed e.dyn as range 2
  //DEBUG: s.FnGenSubst0: 5
  //DEBUG: s.FnGenResult0: 6
  //DEBUG: s.ContextSize$a0: 11
  //DEBUG: s.BaseNum$a0: 12
  //DEBUG: e.MarkedPattern$a0: 7
  //DEBUG: e.dyn: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & FindDivisionAndGenerate:1@0/4 AsIs: s.FnGenSubst0/5 AsIs: s.FnGenResult0/6 AsIs: (/9 AsIs: e.MarkedPattern$a0/7 AsIs: )/10 AsIs: s.ContextSize$a0/11 AsIs: s.BaseNum$a0/12 } 0/13 Tile{ AsIs: e.dyn/2 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_number(vm, context[13], 0UL);
  refalrts::update_name(context[4], functions[efunc_gen_FindDivisionAndGenerate_B1Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[9], context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_elem( res, context[13] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_FindDivisionAndGenerate_B1Z3("FindDivisionAndGenerate:1@3", COOKIE1_, COOKIE2_, func_gen_FindDivisionAndGenerate_B1Z3);


static refalrts::FnResult func_gen_FindDivisionAndGenerate_B1S1A1Z2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 27 elems
  refalrts::Iter context[27];
  refalrts::zeros( context, 27 );
  // </0 & FindDivisionAndGenerate:1$1=1@2/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & FindDivisionAndGenerate:1$1=1@2/4 s.new1/5 s.new2/6 (/9 e.new3/7 )/10 (/13 e.new4/11 )/14 s.new5/15 s.new6/16 e.new7/2 >/1
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
  context[13] = refalrts::brackets_left( context[11], context[12], context[2], context[3] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[13], context[14]);
  // closed e.new3 as range 7
  // closed e.new4 as range 11
  if( ! refalrts::svar_left( context[15], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[16], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new7 as range 2
  do {
    // </0 & FindDivisionAndGenerate:1$1=1@2/4 s.FnGenSubst0/5 s.FnGenResult0/6 (/9 e.MarkedPattern$a0/17 )/10 (/13 e.SecondGroup0/19 )/14 s.ContextSize$a0/15 s.BaseNum$a0/16 s.FirstPartContext/23 e.FirstPartCommands/21 >/1
    context[17] = context[7];
    context[18] = context[8];
    context[19] = context[11];
    context[20] = context[12];
    context[21] = context[2];
    context[22] = context[3];
    // closed e.MarkedPattern$a0 as range 17
    // closed e.SecondGroup0 as range 19
    if( ! refalrts::svar_left( context[23], context[21], context[22] ) )
      continue;
    // closed e.FirstPartCommands as range 21
    //DEBUG: s.FnGenSubst0: 5
    //DEBUG: s.FnGenResult0: 6
    //DEBUG: s.ContextSize$a0: 15
    //DEBUG: s.BaseNum$a0: 16
    //DEBUG: e.MarkedPattern$a0: 17
    //DEBUG: e.SecondGroup0: 19
    //DEBUG: s.FirstPartContext: 23
    //DEBUG: e.FirstPartCommands: 21

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </24 & FindDivisionAndGenerate:1$1=2/25 Tile{ AsIs: (/13 } Tile{ AsIs: e.FirstPartCommands/21 } Tile{ AsIs: )/14 } Tile{ AsIs: s.FirstPartContext/23 } Tile{ AsIs: </0 Reuse: & FindDivisionAndGenerate@2/4 AsIs: s.FnGenSubst0/5 AsIs: s.FnGenResult0/6 AsIs: (/9 AsIs: e.MarkedPattern$a0/17 AsIs: )/10 } Tile{ AsIs: e.SecondGroup0/19 } Tile{ AsIs: s.ContextSize$a0/15 AsIs: s.BaseNum$a0/16 } >/26 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[24]);
    refalrts::alloc_name(vm, context[25], functions[efunc_gen_FindDivisionAndGenerate_B1S1A2]);
    refalrts::alloc_close_call(vm, context[26]);
    refalrts::update_name(context[4], functions[efunc_gen_FindDivisionAndGenerate_Z2]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[24] );
    refalrts::push_stack( vm, context[26] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[9], context[10] );
    refalrts::link_brackets( context[13], context[14] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_elem( res, context[26] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[19], context[20] );
    res = refalrts::splice_evar( res, context[0], context[10] );
    res = refalrts::splice_elem( res, context[23] );
    res = refalrts::splice_elem( res, context[14] );
    res = refalrts::splice_evar( res, context[21], context[22] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_evar( res, context[24], context[25] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & FindDivisionAndGenerate:1$1=1@2/4 s.FnGenSubst0/5 s.FnGenResult0/6 (/9 e.MarkedPattern$a0/7 )/10 (/13 e.SecondGroup0/11 )/14 s.ContextSize$a0/15 s.BaseNum$a0/16 e.dyn/2 >/1
  // closed e.MarkedPattern$a0 as range 7
  // closed e.SecondGroup0 as range 11
  // closed e.dyn as range 2
  //DEBUG: s.FnGenSubst0: 5
  //DEBUG: s.FnGenResult0: 6
  //DEBUG: s.ContextSize$a0: 15
  //DEBUG: s.BaseNum$a0: 16
  //DEBUG: e.MarkedPattern$a0: 7
  //DEBUG: e.SecondGroup0: 11
  //DEBUG: e.dyn: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & FindDivisionAndGenerate:1$1=1@0/4 AsIs: s.FnGenSubst0/5 AsIs: s.FnGenResult0/6 AsIs: (/9 AsIs: e.MarkedPattern$a0/7 AsIs: )/10 AsIs: (/13 AsIs: e.SecondGroup0/11 AsIs: )/14 AsIs: s.ContextSize$a0/15 AsIs: s.BaseNum$a0/16 } 1/17 Tile{ AsIs: e.dyn/2 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_number(vm, context[17], 1UL);
  refalrts::update_name(context[4], functions[efunc_gen_FindDivisionAndGenerate_B1S1A1Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[13], context[14] );
  refalrts::link_brackets( context[9], context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_elem( res, context[17] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_FindDivisionAndGenerate_B1S1A1Z2("FindDivisionAndGenerate:1$1=1@2", COOKIE1_, COOKIE2_, func_gen_FindDivisionAndGenerate_B1S1A1Z2);


static refalrts::FnResult func_gen_FindDivisionAndGenerate_B1S1A1Z3(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 27 elems
  refalrts::Iter context[27];
  refalrts::zeros( context, 27 );
  // </0 & FindDivisionAndGenerate:1$1=1@3/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & FindDivisionAndGenerate:1$1=1@3/4 s.new1/5 s.new2/6 (/9 e.new3/7 )/10 (/13 e.new4/11 )/14 s.new5/15 s.new6/16 e.new7/2 >/1
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
  context[13] = refalrts::brackets_left( context[11], context[12], context[2], context[3] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[13], context[14]);
  // closed e.new3 as range 7
  // closed e.new4 as range 11
  if( ! refalrts::svar_left( context[15], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[16], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new7 as range 2
  do {
    // </0 & FindDivisionAndGenerate:1$1=1@3/4 s.FnGenSubst0/5 s.FnGenResult0/6 (/9 e.MarkedPattern$a0/17 )/10 (/13 e.SecondGroup0/19 )/14 s.ContextSize$a0/15 s.BaseNum$a0/16 s.FirstPartContext/23 e.FirstPartCommands/21 >/1
    context[17] = context[7];
    context[18] = context[8];
    context[19] = context[11];
    context[20] = context[12];
    context[21] = context[2];
    context[22] = context[3];
    // closed e.MarkedPattern$a0 as range 17
    // closed e.SecondGroup0 as range 19
    if( ! refalrts::svar_left( context[23], context[21], context[22] ) )
      continue;
    // closed e.FirstPartCommands as range 21
    //DEBUG: s.FnGenSubst0: 5
    //DEBUG: s.FnGenResult0: 6
    //DEBUG: s.ContextSize$a0: 15
    //DEBUG: s.BaseNum$a0: 16
    //DEBUG: e.MarkedPattern$a0: 17
    //DEBUG: e.SecondGroup0: 19
    //DEBUG: s.FirstPartContext: 23
    //DEBUG: e.FirstPartCommands: 21

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </24 & FindDivisionAndGenerate:1$1=2/25 Tile{ AsIs: (/13 } Tile{ AsIs: e.FirstPartCommands/21 } Tile{ AsIs: )/14 } Tile{ AsIs: s.FirstPartContext/23 } Tile{ AsIs: </0 Reuse: & FindDivisionAndGenerate@3/4 AsIs: s.FnGenSubst0/5 AsIs: s.FnGenResult0/6 AsIs: (/9 AsIs: e.MarkedPattern$a0/17 AsIs: )/10 } Tile{ AsIs: e.SecondGroup0/19 } Tile{ AsIs: s.ContextSize$a0/15 AsIs: s.BaseNum$a0/16 } >/26 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[24]);
    refalrts::alloc_name(vm, context[25], functions[efunc_gen_FindDivisionAndGenerate_B1S1A2]);
    refalrts::alloc_close_call(vm, context[26]);
    refalrts::update_name(context[4], functions[efunc_gen_FindDivisionAndGenerate_Z3]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[24] );
    refalrts::push_stack( vm, context[26] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[9], context[10] );
    refalrts::link_brackets( context[13], context[14] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_elem( res, context[26] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[19], context[20] );
    res = refalrts::splice_evar( res, context[0], context[10] );
    res = refalrts::splice_elem( res, context[23] );
    res = refalrts::splice_elem( res, context[14] );
    res = refalrts::splice_evar( res, context[21], context[22] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_evar( res, context[24], context[25] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & FindDivisionAndGenerate:1$1=1@3/4 s.FnGenSubst0/5 s.FnGenResult0/6 (/9 e.MarkedPattern$a0/7 )/10 (/13 e.SecondGroup0/11 )/14 s.ContextSize$a0/15 s.BaseNum$a0/16 e.dyn/2 >/1
  // closed e.MarkedPattern$a0 as range 7
  // closed e.SecondGroup0 as range 11
  // closed e.dyn as range 2
  //DEBUG: s.FnGenSubst0: 5
  //DEBUG: s.FnGenResult0: 6
  //DEBUG: s.ContextSize$a0: 15
  //DEBUG: s.BaseNum$a0: 16
  //DEBUG: e.MarkedPattern$a0: 7
  //DEBUG: e.SecondGroup0: 11
  //DEBUG: e.dyn: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & FindDivisionAndGenerate:1$1=1@0/4 AsIs: s.FnGenSubst0/5 AsIs: s.FnGenResult0/6 AsIs: (/9 AsIs: e.MarkedPattern$a0/7 AsIs: )/10 AsIs: (/13 AsIs: e.SecondGroup0/11 AsIs: )/14 AsIs: s.ContextSize$a0/15 AsIs: s.BaseNum$a0/16 } 0/17 Tile{ AsIs: e.dyn/2 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_number(vm, context[17], 0UL);
  refalrts::update_name(context[4], functions[efunc_gen_FindDivisionAndGenerate_B1S1A1Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[13], context[14] );
  refalrts::link_brackets( context[9], context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_elem( res, context[17] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_FindDivisionAndGenerate_B1S1A1Z3("FindDivisionAndGenerate:1$1=1@3", COOKIE1_, COOKIE2_, func_gen_FindDivisionAndGenerate_B1S1A1Z3);


//End of file
