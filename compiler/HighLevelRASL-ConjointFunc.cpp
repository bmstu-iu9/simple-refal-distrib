// This file automatically generated from 'HighLevelRASL-ConjointFunc.ref'
// Don't edit! Edit 'HighLevelRASL-ConjointFunc.ref' and recompile it

#include "refalrts.h"

#define cookie_ns cookie_ns_1620770682_884010706
#define COOKIE1_ 1620770682U
#define COOKIE2_ 884010706U

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
  efunc_FindDivisionAndGenerate = 23,
  efunc_gen_HighLevelRASLm_Functionm_Conjoint_A3 = 24,
  efunc_GenPattern = 25,
  efunc_gen_HighLevelRASLm_Functionm_Conjoint_A2 = 26,
  efunc_gen_HighLevelRASLm_Functionm_Conjoint_A1L1 = 27,
  efunc_gen_HighLevelRASLm_Functionm_Conjoint_A1 = 28,
  efunc_Max = 29,
  efunc_gen_FindDivisionAndGenerate_B1S1A3 = 30,
  efunc_gen_FindDivisionAndGenerate_B1S1A2 = 31,
  efunc_gen_FindDivisionAndGenerate_B1S1A1 = 32,
  efunc_GenerateGroupWithGCGSubst = 33,
  efunc_gen_FindDivisionAndGenerate_B1 = 34,
  efunc_FindDivision = 35,
  efunc_gen_GenerateGroupWithGCGSubst_S2A4 = 36,
  efunc_gen_GenerateGroupWithGCGSubst_S2A3 = 37,
  efunc_NarrowSentenceSubstitutions = 38,
  efunc_CodeForSubst = 39,
  efunc_gen_GenerateGroupWithGCGSubst_S2A2 = 40,
  efunc_GenerateSingleSentence = 41,
  efunc_EnumerateVarsm_Subst = 42,
  efunc_gen_GenerateGroupWithGCGSubst_S2A1 = 43,
  efunc_MakeSavers = 44,
  efunc_gen_CodeForSubst_A2 = 45,
  efunc_ComposeVars = 46,
  efunc_gen_CodeForSubst_A1 = 47,
  efunc_gen_GenerateSingleSentence_A2 = 48,
  efunc_GenResult = 49,
  efunc_gen_GenerateSingleSentence_A1 = 50,
  efunc_gen_ComposeVars_S1A1 = 51,
  efunc_gen_ComposeVars_S1A1B1 = 52,
  efunc_gen_EnumerateVarsRec_L1S2A1 = 53,
  efunc_EnumerateVarsRec = 54,
  efunc_gen_EnumerateVarsRec_L1S3A1 = 55,
  efunc_gen_MapAccum_Z1 = 56,
  efunc_gen_EnumerateVarsm_Subst_L1A1 = 57,
  efunc_gen_MapAccum_Z2 = 58,
  efunc_DoFindDivision = 59,
  efunc_MakeTrivialSubstImage = 60,
  efunc_gen_FindDivision_A3 = 61,
  efunc_gen_FindDivision_C1 = 62,
  efunc_gen_FindDivision_A2 = 63,
  efunc_ImagedSentence = 64,
  efunc_Substm_BuildImage = 65,
  efunc_gen_ImagedSentence_A1 = 66,
  efunc_gen_Map_Z1 = 67,
  efunc_Substm_Collapse = 68,
  efunc_gen_DoFindDivision_S1B1 = 69,
  efunc_gen_DoFindDivision_S1A2 = 70,
  efunc_Substm_Generalization = 71,
  efunc_gen_DoFindDivision_S1A1 = 72,
  efunc_NarrowSubst = 73,
  efunc_gen_Map_Z2 = 74,
  efunc_gen_NarrowSubst_S1A1 = 75,
  efunc_GenericMatch = 76,
  efunc_BuildImage = 77,
  efunc_BuildImagem_Term = 78,
  efunc_gen_Map_Z3 = 79,
  efunc_Generalization = 80,
  efunc_Generalizationm_Term = 81,
  efunc_Collapse = 82,
  efunc_Collapsem_Term = 83,
  efunc_gen_Map_Z4 = 84,
  efunc_gen_DoMapAccum_Z1 = 85,
  efunc_gen_DoMapAccum_Z2 = 86,
  efunc_gen_MakeTrivialSubstImage_L1D2 = 87,
  efunc_gen_NarrowSentenceSubstitutions_L1D1 = 88,
  efunc_gen_Substm_BuildImage_L1D2 = 89,
  efunc_gen_Substm_Collapse_L1D3 = 90,
  efunc_gen_DoMapAccumm_Aux_Z1 = 91,
  efunc_gen_EnumerateVarsRec_L1D4 = 92,
  efunc_gen_DoMapAccumm_Aux_Z2 = 93,
  efunc_gen_EnumerateVarsm_Subst_L1D1 = 94,
};


enum ident {
  ident_k43_ = 0,
  ident_k47_ = 1,
  ident_k37_ = 2,
  ident_k42_ = 3,
  ident_k63_ = 4,
  ident_m_ = 5,
  ident_Function = 6,
  ident_CmdIssueMemory = 7,
  ident_CmdOpenELoop = 8,
  ident_CmdFail = 9,
  ident_TkVariable = 10,
  ident_CmdSentence = 11,
  ident_ForGroup = 12,
  ident_ForAllSentences = 13,
  ident_Junk = 14,
  ident_S = 15,
  ident_T = 16,
  ident_E = 17,
  ident_Brackets = 18,
  ident_ADTm_Brackets = 19,
  ident_MN = 20,
  ident_Clear = 21,
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
    refalrts::alloc_number(vm, context[9], 884010706UL);
    refalrts::update_name(context[4], functions[efunc_u_u_FindMuPtr]);
    refalrts::reinit_number(context[5], 1620770682UL);
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
  refalrts::reinit_number(context[5], 1620770682UL);
  refalrts::reinit_number(context[7], 884010706UL);
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


static refalrts::FnResult func_gen_HighLevelRASLm_Functionm_Conjoint_A4(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
  // </0 & HighLevelRASL-Function-Conjoint=4/4 s.ScopeClass#1/5 (/8 e.Name#1/6 )/9 s.MaxContextSize#4/10 (/13 e.CommonMatchCommands#3/11 )/14 e.ResultCommands#5/2 >/1
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
  if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[11] = 0;
  context[12] = 0;
  context[13] = refalrts::brackets_left( context[11], context[12], context[2], context[3] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[13], context[14]);
  // closed e.CommonMatchCommands#3 as range 11
  // closed e.ResultCommands#5 as range 2
  //DEBUG: s.ScopeClass#1: 5
  //DEBUG: e.Name#1: 6
  //DEBUG: s.MaxContextSize#4: 10
  //DEBUG: e.CommonMatchCommands#3: 11
  //DEBUG: e.ResultCommands#5: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # Function/4 AsIs: s.ScopeClass#1/5 AsIs: (/8 AsIs: e.Name#1/6 AsIs: )/9 } (/15 Tile{ HalfReuse: # CmdIssueMemory/14 } Tile{ AsIs: s.MaxContextSize#4/10 HalfReuse: )/13 } Tile{ AsIs: e.CommonMatchCommands#3/11 } Tile{ AsIs: e.ResultCommands#5/2 } Tile{ HalfReuse: )/1 ]] }
  refalrts::alloc_open_bracket(vm, context[15]);
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_ident(context[4], identifiers[ident_Function]);
  refalrts::reinit_ident(context[14], identifiers[ident_CmdIssueMemory]);
  refalrts::reinit_close_bracket(context[13]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[0], context[1] );
  refalrts::link_brackets( context[15], context[13] );
  refalrts::link_brackets( context[8], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_evar( res, context[10], context[13] );
  res = refalrts::splice_evar( res, context[14], context[14] );
  res = refalrts::splice_evar( res, context[15], context[15] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_HighLevelRASLm_Functionm_Conjoint_A4("HighLevelRASL-Function-Conjoint=4", COOKIE1_, COOKIE2_, func_gen_HighLevelRASLm_Functionm_Conjoint_A4);


static refalrts::FnResult func_gen_HighLevelRASLm_Functionm_Conjoint_A4B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  // </0 & HighLevelRASL-Function-Conjoint=4:1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & HighLevelRASL-Function-Conjoint=4:1/4 e.Commands#5/5 (/9 # CmdOpenELoop/11 e.OpenELoop#5/7 )/10 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[7] = 0;
    context[8] = 0;
    context[9] = refalrts::brackets_right( context[7], context[8], context[5], context[6] );
    if( ! context[9] )
      continue;
    refalrts::bracket_pointers(context[9], context[10]);
    context[11] = refalrts::ident_left( identifiers[ident_CmdOpenELoop], context[7], context[8] );
    if( ! context[11] )
      continue;
    // closed e.Commands#5 as range 5
    // closed e.OpenELoop#5 as range 7
    //DEBUG: e.Commands#5: 5
    //DEBUG: e.OpenELoop#5: 7

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: e.Commands#5/5 } Tile{ AsIs: (/9 AsIs: # CmdOpenELoop/11 AsIs: e.OpenELoop#5/7 AsIs: )/10 HalfReuse: (/1 } Tile{ HalfReuse: # CmdFail/0 HalfReuse: )/4 } Tile{ ]] }
    refalrts::reinit_open_bracket(context[1]);
    refalrts::reinit_ident(context[0], identifiers[ident_CmdFail]);
    refalrts::reinit_close_bracket(context[4]);
    refalrts::link_brackets( context[1], context[4] );
    refalrts::link_brackets( context[9], context[10] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[9], context[1] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & HighLevelRASL-Function-Conjoint=4:1/4 e.Commands#5/2 >/1
  // closed e.Commands#5 as range 2
  //DEBUG: e.Commands#5: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & HighLevelRASL-Function-Conjoint=4:1/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Commands#5/2 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_HighLevelRASLm_Functionm_Conjoint_A4B1("HighLevelRASL-Function-Conjoint=4:1", COOKIE1_, COOKIE2_, func_gen_HighLevelRASLm_Functionm_Conjoint_A4B1);


static refalrts::FnResult func_gen_HighLevelRASLm_Functionm_Conjoint_A3(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 30 elems
  refalrts::Iter context[30];
  refalrts::zeros( context, 30 );
  // </0 & HighLevelRASL-Function-Conjoint=3/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & HighLevelRASL-Function-Conjoint=3/4 s.new#1/5 (/8 e.new#2/6 )/9 (/12 e.new#3/10 )/13 s.new#4/14 e.new#5/2 >/1
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
  if( ! refalrts::svar_left( context[14], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#5 as range 2
  do {
    // </0 & HighLevelRASL-Function-Conjoint=3/4 s.ScopeClass#1/5 (/8 e.Name#1/15 )/9 (/12 e.CommonMatchCommands#3/17 )/13 s.MaxContextSize#4/14 e.#0/19 (/23 # CmdOpenELoop/25 e.1#0/21 )/24 >/1
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
    // closed e.Name#1 as range 15
    // closed e.CommonMatchCommands#3 as range 17
    // closed e.#0 as range 19
    // closed e.1#0 as range 21
    //DEBUG: s.ScopeClass#1: 5
    //DEBUG: s.MaxContextSize#4: 14
    //DEBUG: e.Name#1: 15
    //DEBUG: e.CommonMatchCommands#3: 17
    //DEBUG: e.#0: 19
    //DEBUG: e.1#0: 21

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # Function/4 AsIs: s.ScopeClass#1/5 AsIs: (/8 AsIs: e.Name#1/15 AsIs: )/9 AsIs: (/12 } Tile{ HalfReuse: # CmdIssueMemory/13 AsIs: s.MaxContextSize#4/14 } )/26 Tile{ AsIs: e.CommonMatchCommands#3/17 } Tile{ AsIs: e.#0/19 } Tile{ AsIs: (/23 AsIs: # CmdOpenELoop/25 AsIs: e.1#0/21 AsIs: )/24 HalfReuse: (/1 } # CmdFail/27 )/28 )/29 Tile{ ]] }
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
    res = refalrts::splice_evar( res, context[26], context[26] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & HighLevelRASL-Function-Conjoint=3/4 s.ScopeClass#1/5 (/8 e.Name#1/6 )/9 (/12 e.CommonMatchCommands#3/10 )/13 s.MaxContextSize#4/14 e.ResultCommands#4/2 >/1
  // closed e.Name#1 as range 6
  // closed e.CommonMatchCommands#3 as range 10
  // closed e.ResultCommands#4 as range 2
  //DEBUG: s.ScopeClass#1: 5
  //DEBUG: s.MaxContextSize#4: 14
  //DEBUG: e.Name#1: 6
  //DEBUG: e.CommonMatchCommands#3: 10
  //DEBUG: e.ResultCommands#4: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # Function/4 AsIs: s.ScopeClass#1/5 AsIs: (/8 AsIs: e.Name#1/6 AsIs: )/9 AsIs: (/12 } Tile{ HalfReuse: # CmdIssueMemory/13 AsIs: s.MaxContextSize#4/14 } )/15 Tile{ AsIs: e.CommonMatchCommands#3/10 } Tile{ AsIs: e.ResultCommands#4/2 } Tile{ HalfReuse: )/1 ]] }
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
  res = refalrts::splice_evar( res, context[15], context[15] );
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
  // issue here memory for vars with 31 elems
  refalrts::Iter context[31];
  refalrts::zeros( context, 31 );
  // </0 & HighLevelRASL-Function-Conjoint=2/4 s.ScopeClass#1/5 (/8 e.Name#1/6 )/9 s.FnGenSubst#1/10 s.FnGenResult#1/11 (/14 e.SentencesWithSubst#2/12 )/15 s.ContextSize#3/16 (/19 e.Vars#3/17 )/20 (/23 e.MarkedPattern#3/21 )/24 e.CommonMatchCommands#3/2 >/1
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
  // closed e.SentencesWithSubst#2 as range 12
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
  // closed e.Vars#3 as range 17
  // closed e.MarkedPattern#3 as range 21
  // closed e.CommonMatchCommands#3 as range 2
  //DEBUG: s.ScopeClass#1: 5
  //DEBUG: e.Name#1: 6
  //DEBUG: s.FnGenSubst#1: 10
  //DEBUG: s.FnGenResult#1: 11
  //DEBUG: e.SentencesWithSubst#2: 12
  //DEBUG: s.ContextSize#3: 16
  //DEBUG: e.Vars#3: 17
  //DEBUG: e.MarkedPattern#3: 21
  //DEBUG: e.CommonMatchCommands#3: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} s.FnGenResult#1/11 {REMOVED TILE} e.Vars#3/17 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & HighLevelRASL-Function-Conjoint=3/4 AsIs: s.ScopeClass#1/5 AsIs: (/8 AsIs: e.Name#1/6 AsIs: )/9 } (/25 Tile{ AsIs: e.CommonMatchCommands#3/2 } )/26 </27 & FindDivisionAndGenerate/28 Tile{ AsIs: s.FnGenSubst#1/10 } Tile{ HalfReuse: s.FnGenResult1 #11/20 AsIs: (/23 AsIs: e.MarkedPattern#3/21 AsIs: )/24 } Tile{ AsIs: (/14 AsIs: e.SentencesWithSubst#2/12 AsIs: )/15 AsIs: s.ContextSize#3/16 HalfReuse: 1/19 } 0/29 >/30 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[25]);
  refalrts::alloc_close_bracket(vm, context[26]);
  refalrts::alloc_open_call(vm, context[27]);
  refalrts::alloc_name(vm, context[28], functions[efunc_FindDivisionAndGenerate]);
  refalrts::alloc_number(vm, context[29], 0UL);
  refalrts::alloc_close_call(vm, context[30]);
  refalrts::update_name(context[4], functions[efunc_gen_HighLevelRASLm_Functionm_Conjoint_A3]);
  refalrts::reinit_svar( context[20], context[11] );
  refalrts::reinit_number(context[19], 1UL);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[30] );
  refalrts::push_stack( vm, context[27] );
  refalrts::link_brackets( context[14], context[15] );
  refalrts::link_brackets( context[23], context[24] );
  refalrts::link_brackets( context[25], context[26] );
  refalrts::link_brackets( context[8], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[29], context[30] );
  res = refalrts::splice_evar( res, context[14], context[19] );
  res = refalrts::splice_evar( res, context[20], context[24] );
  res = refalrts::splice_evar( res, context[10], context[10] );
  res = refalrts::splice_evar( res, context[26], context[28] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[25], context[25] );
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
  // issue here memory for vars with 28 elems
  refalrts::Iter context[28];
  refalrts::zeros( context, 28 );
  // </0 & HighLevelRASL-Function-Conjoint=1/4 s.ScopeClass#1/5 (/8 e.Name#1/6 )/9 s.FnGenSubst#1/10 s.FnGenResult#1/11 e.SentencesWithSubst#2/2 >/1
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
  if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[11], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.SentencesWithSubst#2 as range 2
  //DEBUG: s.ScopeClass#1: 5
  //DEBUG: e.Name#1: 6
  //DEBUG: s.FnGenSubst#1: 10
  //DEBUG: s.FnGenResult#1: 11
  //DEBUG: e.SentencesWithSubst#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & HighLevelRASL-Function-Conjoint=2/4 AsIs: s.ScopeClass#1/5 AsIs: (/8 AsIs: e.Name#1/6 AsIs: )/9 AsIs: s.FnGenSubst#1/10 AsIs: s.FnGenResult#1/11 } (/12 Tile{ AsIs: e.SentencesWithSubst#2/2 } )/13 </14 & GenPattern/15 s.FnGenSubst#1/10/16 (/17 e.Name#1/6/18 )/20 (/21 # TkVariable/22"enew"/23 0/25 )/26 >/27 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[12]);
  refalrts::alloc_close_bracket(vm, context[13]);
  refalrts::alloc_open_call(vm, context[14]);
  refalrts::alloc_name(vm, context[15], functions[efunc_GenPattern]);
  refalrts::copy_stvar(vm, context[16], context[10]);
  refalrts::alloc_open_bracket(vm, context[17]);
  refalrts::copy_evar(vm, context[18], context[19], context[6], context[7]);
  refalrts::alloc_close_bracket(vm, context[20]);
  refalrts::alloc_open_bracket(vm, context[21]);
  refalrts::alloc_ident(vm, context[22], identifiers[ident_TkVariable]);
  refalrts::alloc_chars(vm, context[23], context[24], "enew", 4);
  refalrts::alloc_number(vm, context[25], 0UL);
  refalrts::alloc_close_bracket(vm, context[26]);
  refalrts::alloc_close_call(vm, context[27]);
  refalrts::update_name(context[4], functions[efunc_gen_HighLevelRASLm_Functionm_Conjoint_A2]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[27] );
  refalrts::push_stack( vm, context[14] );
  refalrts::link_brackets( context[21], context[26] );
  refalrts::link_brackets( context[17], context[20] );
  refalrts::link_brackets( context[12], context[13] );
  refalrts::link_brackets( context[8], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[13], context[27] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[12], context[12] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_HighLevelRASLm_Functionm_Conjoint_A1("HighLevelRASL-Function-Conjoint=1", COOKIE1_, COOKIE2_, func_gen_HighLevelRASLm_Functionm_Conjoint_A1);


static refalrts::FnResult func_gen_HighLevelRASLm_Functionm_Conjoint_A1L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 24 elems
  refalrts::Iter context[24];
  refalrts::zeros( context, 24 );
  // </0 & HighLevelRASL-Function-Conjoint=1\1/4 (/7 (/11 e.Pattern#2/9 )/12 e.Conditions#2/5 (/15 e.Result#2/13 )/16 )/8 >/1
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
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: (/4 AsIs: (/7 } Tile{ AsIs: e.Pattern#2/9 } ':'/17 Tile{ AsIs: (/11 }"en"/18 Tile{ HalfReuse: 'e'/1 } 'w'/20 0/21 )/22 )/23 Tile{ AsIs: )/12 AsIs: e.Conditions#2/5 AsIs: (/15 AsIs: e.Result#2/13 AsIs: )/16 AsIs: )/8 } Tile{ ]] }
  refalrts::alloc_char(vm, context[17], ':');
  refalrts::alloc_chars(vm, context[18], context[19], "en", 2);
  refalrts::alloc_char(vm, context[20], 'w');
  refalrts::alloc_number(vm, context[21], 0UL);
  refalrts::alloc_close_bracket(vm, context[22]);
  refalrts::alloc_close_bracket(vm, context[23]);
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_open_bracket(context[4]);
  refalrts::reinit_char(context[1], 'e');
  refalrts::link_brackets( context[0], context[8] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[4], context[12] );
  refalrts::link_brackets( context[7], context[23] );
  refalrts::link_brackets( context[11], context[22] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[12], context[8] );
  res = refalrts::splice_evar( res, context[20], context[23] );
  res = refalrts::splice_evar( res, context[1], context[1] );
  res = refalrts::splice_evar( res, context[18], context[19] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  res = refalrts::splice_evar( res, context[17], context[17] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_HighLevelRASLm_Functionm_Conjoint_A1L1("HighLevelRASL-Function-Conjoint=1\\1", COOKIE1_, COOKIE2_, func_gen_HighLevelRASLm_Functionm_Conjoint_A1L1);


static refalrts::FnResult func_HighLevelRASLm_Functionm_Conjoint(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
  // </0 & HighLevelRASL-Function-Conjoint/4 s.FnGenSubst#1/5 s.FnGenResult#1/6 s.ScopeClass#1/7 (/10 e.Name#1/8 )/11 e.Sentences#1/2 >/1
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
  // closed e.Name#1 as range 8
  // closed e.Sentences#1 as range 2
  //DEBUG: s.FnGenSubst#1: 5
  //DEBUG: s.FnGenResult#1: 6
  //DEBUG: s.ScopeClass#1: 7
  //DEBUG: e.Name#1: 8
  //DEBUG: e.Sentences#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & HighLevelRASL-Function-Conjoint=1/4 } Tile{ AsIs: s.ScopeClass#1/7 AsIs: (/10 AsIs: e.Name#1/8 AsIs: )/11 } Tile{ AsIs: s.FnGenSubst#1/5 AsIs: s.FnGenResult#1/6 } </12 & Map/13 & HighLevelRASL-Function-Conjoint=1\1/14 Tile{ AsIs: e.Sentences#1/2 } >/15 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[12]);
  refalrts::alloc_name(vm, context[13], functions[efunc_Map]);
  refalrts::alloc_name(vm, context[14], functions[efunc_gen_HighLevelRASLm_Functionm_Conjoint_A1L1]);
  refalrts::alloc_close_call(vm, context[15]);
  refalrts::update_name(context[4], functions[efunc_gen_HighLevelRASLm_Functionm_Conjoint_A1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[15] );
  refalrts::push_stack( vm, context[12] );
  refalrts::link_brackets( context[10], context[11] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[15], context[15] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[12], context[14] );
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
  // </0 & FindDivisionAndGenerate:1$1=3/4 (/7 e.FirstPartCommands#3/5 )/8 (/11 e.SecondPartCommands#4/9 )/12 s.ContextSize#5/13 >/1
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
  // closed e.FirstPartCommands#3 as range 5
  // closed e.SecondPartCommands#4 as range 9
  if( ! refalrts::svar_left( context[13], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: e.FirstPartCommands#3: 5
  //DEBUG: e.SecondPartCommands#4: 9
  //DEBUG: s.ContextSize#5: 13

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} (/11 {REMOVED TILE} )/12 s.ContextSize#5/13 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: s.ContextSize5 #13/0 HalfReuse: (/4 HalfReuse: # CmdSentence/7 AsIs: e.FirstPartCommands#3/5 AsIs: )/8 } Tile{ AsIs: e.SecondPartCommands#4/9 } Tile{ ]] }
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
  // </0 & FindDivisionAndGenerate:1$1=2/4 (/7 e.FirstPartCommands#3/5 )/8 s.FirstPartContext#3/9 s.SecondPartContext#4/10 e.SecondPartCommands#4/2 >/1
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
  // closed e.FirstPartCommands#3 as range 5
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.SecondPartCommands#4 as range 2
  //DEBUG: e.FirstPartCommands#3: 5
  //DEBUG: s.FirstPartContext#3: 9
  //DEBUG: s.SecondPartContext#4: 10
  //DEBUG: e.SecondPartCommands#4: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & FindDivisionAndGenerate:1$1=3/4 AsIs: (/7 AsIs: e.FirstPartCommands#3/5 AsIs: )/8 } (/11 Tile{ AsIs: e.SecondPartCommands#4/2 } )/12 </13 & Max/14 Tile{ AsIs: s.FirstPartContext#3/9 AsIs: s.SecondPartContext#4/10 } >/15 Tile{ AsIs: >/1 ]] }
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
  res = refalrts::splice_evar( res, context[15], context[15] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[12], context[14] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[11], context[11] );
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
  // </0 & FindDivisionAndGenerate:1$1=1/4 s.FnGenSubst#1/5 s.FnGenResult#1/6 (/9 e.MarkedPattern#1/7 )/10 (/13 e.SecondGroup#2/11 )/14 s.ContextSize#1/15 s.BaseNum#1/16 s.Depth#1/17 s.FirstPartContext#3/18 e.FirstPartCommands#3/2 >/1
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
  // closed e.MarkedPattern#1 as range 7
  // closed e.SecondGroup#2 as range 11
  if( ! refalrts::svar_left( context[15], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[16], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[17], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[18], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.FirstPartCommands#3 as range 2
  //DEBUG: s.FnGenSubst#1: 5
  //DEBUG: s.FnGenResult#1: 6
  //DEBUG: e.MarkedPattern#1: 7
  //DEBUG: e.SecondGroup#2: 11
  //DEBUG: s.ContextSize#1: 15
  //DEBUG: s.BaseNum#1: 16
  //DEBUG: s.Depth#1: 17
  //DEBUG: s.FirstPartContext#3: 18
  //DEBUG: e.FirstPartCommands#3: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </19 & FindDivisionAndGenerate:1$1=2/20 (/21 Tile{ AsIs: e.FirstPartCommands#3/2 } )/22 Tile{ AsIs: s.FirstPartContext#3/18 } Tile{ AsIs: </0 Reuse: & FindDivisionAndGenerate/4 AsIs: s.FnGenSubst#1/5 AsIs: s.FnGenResult#1/6 AsIs: (/9 AsIs: e.MarkedPattern#1/7 AsIs: )/10 AsIs: (/13 AsIs: e.SecondGroup#2/11 AsIs: )/14 AsIs: s.ContextSize#1/15 AsIs: s.BaseNum#1/16 AsIs: s.Depth#1/17 } >/23 Tile{ AsIs: >/1 ]] }
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
  res = refalrts::splice_evar( res, context[23], context[23] );
  res = refalrts::splice_evar( res, context[0], context[17] );
  res = refalrts::splice_evar( res, context[18], context[18] );
  res = refalrts::splice_evar( res, context[22], context[22] );
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
  // issue here memory for vars with 44 elems
  refalrts::Iter context[44];
  refalrts::zeros( context, 44 );
  // </0 & FindDivisionAndGenerate:1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & FindDivisionAndGenerate:1/4 s.new#1/5 s.new#2/6 (/9 e.new#3/7 )/10 s.new#4/11 s.new#5/12 s.new#6/13 s.new#7/14 (/17 e.new#8/15 )/18 e.new#9/2 >/1
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
  // closed e.new#3 as range 7
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
  // closed e.new#8 as range 15
  // closed e.new#9 as range 2
  do {
    // </0 & FindDivisionAndGenerate:1/4 s.FnGenSubst#1/5 s.FnGenResult#1/6 (/9 e.MarkedPattern#1/19 )/10 s.ContextSize#1/11 s.BaseNum#1/12 s.Depth#1/13 # ForGroup/14 (/17 e.NewGCG-Subst#2/21 )/18 (/27 e.FirstGroup#2/25 )/28 e.SecondGroup#2/23 >/1
    context[19] = context[7];
    context[20] = context[8];
    context[21] = context[15];
    context[22] = context[16];
    context[23] = context[2];
    context[24] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_ForGroup], context[14] ) )
      continue;
    context[25] = 0;
    context[26] = 0;
    context[27] = refalrts::brackets_left( context[25], context[26], context[23], context[24] );
    if( ! context[27] )
      continue;
    refalrts::bracket_pointers(context[27], context[28]);
    // closed e.MarkedPattern#1 as range 19
    // closed e.NewGCG-Subst#2 as range 21
    // closed e.FirstGroup#2 as range 25
    // closed e.SecondGroup#2 as range 23
    //DEBUG: s.FnGenSubst#1: 5
    //DEBUG: s.FnGenResult#1: 6
    //DEBUG: s.ContextSize#1: 11
    //DEBUG: s.BaseNum#1: 12
    //DEBUG: s.Depth#1: 13
    //DEBUG: e.MarkedPattern#1: 19
    //DEBUG: e.NewGCG-Subst#2: 21
    //DEBUG: e.FirstGroup#2: 25
    //DEBUG: e.SecondGroup#2: 23

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & FindDivisionAndGenerate:1$1=1/4 AsIs: s.FnGenSubst#1/5 AsIs: s.FnGenResult#1/6 AsIs: (/9 AsIs: e.MarkedPattern#1/19 AsIs: )/10 } (/29 Tile{ AsIs: e.SecondGroup#2/23 } )/30 Tile{ AsIs: s.ContextSize#1/11 AsIs: s.BaseNum#1/12 AsIs: s.Depth#1/13 HalfReuse: </14 HalfReuse: & GenerateGroupWithGCGSubst/17 } s.FnGenSubst#1/5/31 s.FnGenResult#1/6/32 (/33 e.MarkedPattern#1/19/34 Tile{ AsIs: )/18 AsIs: (/27 AsIs: e.FirstGroup#2/25 AsIs: )/28 } s.ContextSize#1/11/36 s.BaseNum#1/12/37 </38 & Add/39 1/40 s.Depth#1/13/41 >/42 Tile{ AsIs: e.NewGCG-Subst#2/21 } >/43 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_bracket(vm, context[29]);
    refalrts::alloc_close_bracket(vm, context[30]);
    refalrts::copy_stvar(vm, context[31], context[5]);
    refalrts::copy_stvar(vm, context[32], context[6]);
    refalrts::alloc_open_bracket(vm, context[33]);
    refalrts::copy_evar(vm, context[34], context[35], context[19], context[20]);
    refalrts::copy_stvar(vm, context[36], context[11]);
    refalrts::copy_stvar(vm, context[37], context[12]);
    refalrts::alloc_open_call(vm, context[38]);
    refalrts::alloc_name(vm, context[39], functions[efunc_Add]);
    refalrts::alloc_number(vm, context[40], 1UL);
    refalrts::copy_stvar(vm, context[41], context[13]);
    refalrts::alloc_close_call(vm, context[42]);
    refalrts::alloc_close_call(vm, context[43]);
    refalrts::update_name(context[4], functions[efunc_gen_FindDivisionAndGenerate_B1S1A1]);
    refalrts::reinit_open_call(context[14]);
    refalrts::reinit_name(context[17], functions[efunc_GenerateGroupWithGCGSubst]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[43] );
    refalrts::push_stack( vm, context[14] );
    refalrts::push_stack( vm, context[42] );
    refalrts::push_stack( vm, context[38] );
    refalrts::link_brackets( context[27], context[28] );
    refalrts::link_brackets( context[33], context[18] );
    refalrts::link_brackets( context[29], context[30] );
    refalrts::link_brackets( context[9], context[10] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[43], context[43] );
    res = refalrts::splice_evar( res, context[21], context[22] );
    res = refalrts::splice_evar( res, context[36], context[42] );
    res = refalrts::splice_evar( res, context[18], context[28] );
    res = refalrts::splice_evar( res, context[34], context[35] );
    res = refalrts::splice_evar( res, context[31], context[33] );
    res = refalrts::splice_evar( res, context[11], context[17] );
    res = refalrts::splice_evar( res, context[30], context[30] );
    res = refalrts::splice_evar( res, context[23], context[24] );
    res = refalrts::splice_evar( res, context[29], context[29] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & FindDivisionAndGenerate:1/4 s.FnGenSubst#1/5 s.FnGenResult#1/6 (/9 e.MarkedPattern#1/7 )/10 s.ContextSize#1/11 s.BaseNum#1/12 s.Depth#1/13 # ForAllSentences/14 (/17 e.NewGCG-Subst#2/15 )/18 e.SentencesWithSubst#2/2 >/1
  if( ! refalrts::ident_term( identifiers[ident_ForAllSentences], context[14] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.MarkedPattern#1 as range 7
  // closed e.NewGCG-Subst#2 as range 15
  // closed e.SentencesWithSubst#2 as range 2
  //DEBUG: s.FnGenSubst#1: 5
  //DEBUG: s.FnGenResult#1: 6
  //DEBUG: s.ContextSize#1: 11
  //DEBUG: s.BaseNum#1: 12
  //DEBUG: s.Depth#1: 13
  //DEBUG: e.MarkedPattern#1: 7
  //DEBUG: e.NewGCG-Subst#2: 15
  //DEBUG: e.SentencesWithSubst#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} # ForAllSentences/14 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & GenerateGroupWithGCGSubst/4 AsIs: s.FnGenSubst#1/5 AsIs: s.FnGenResult#1/6 AsIs: (/9 AsIs: e.MarkedPattern#1/7 AsIs: )/10 } Tile{ AsIs: (/17 } Tile{ AsIs: e.SentencesWithSubst#2/2 } Tile{ AsIs: )/18 } Tile{ AsIs: s.ContextSize#1/11 AsIs: s.BaseNum#1/12 AsIs: s.Depth#1/13 } Tile{ AsIs: e.NewGCG-Subst#2/15 } Tile{ AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_GenerateGroupWithGCGSubst]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[17], context[18] );
  refalrts::link_brackets( context[9], context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[15], context[16] );
  res = refalrts::splice_evar( res, context[11], context[13] );
  res = refalrts::splice_evar( res, context[18], context[18] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[17], context[17] );
  refalrts::splice_to_freelist_open( vm, context[10], res );
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
  // </0 & FindDivisionAndGenerate/4 s.FnGenSubst#1/5 s.FnGenResult#1/6 (/9 e.MarkedPattern#1/7 )/10 (/13 e.SentencesWithSubst#1/11 )/14 s.ContextSize#1/15 s.BaseNum#1/16 s.Depth#1/17 >/1
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
  // closed e.MarkedPattern#1 as range 7
  // closed e.SentencesWithSubst#1 as range 11
  if( ! refalrts::svar_left( context[15], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[16], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[17], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: s.FnGenSubst#1: 5
  //DEBUG: s.FnGenResult#1: 6
  //DEBUG: e.MarkedPattern#1: 7
  //DEBUG: e.SentencesWithSubst#1: 11
  //DEBUG: s.ContextSize#1: 15
  //DEBUG: s.BaseNum#1: 16
  //DEBUG: s.Depth#1: 17

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.ContextSize#1/15 {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & FindDivisionAndGenerate:1/4 AsIs: s.FnGenSubst#1/5 AsIs: s.FnGenResult#1/6 AsIs: (/9 AsIs: e.MarkedPattern#1/7 AsIs: )/10 HalfReuse: s.ContextSize1 #15/13 } Tile{ AsIs: s.BaseNum#1/16 AsIs: s.Depth#1/17 HalfReuse: </1 } Tile{ HalfReuse: & FindDivision/14 } Tile{ AsIs: e.SentencesWithSubst#1/11 } >/18 >/19 Tile{ ]] }
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
  res = refalrts::splice_evar( res, context[14], context[14] );
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
  // </0 & GenerateGroupWithGCGSubst$2=4/4 (/7 e.GCG-Commands#3/5 )/8 s.ContextSize#5/9 e.Commands#5/2 >/1
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
  // closed e.GCG-Commands#3 as range 5
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Commands#5 as range 2
  //DEBUG: e.GCG-Commands#3: 5
  //DEBUG: s.ContextSize#5: 9
  //DEBUG: e.Commands#5: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} & GenerateGroupWithGCGSubst$2=4/4 (/7 {REMOVED TILE} )/8 s.ContextSize#5/9 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: s.ContextSize5 #9/0 } Tile{ AsIs: e.GCG-Commands#3/5 } Tile{ AsIs: e.Commands#5/2 } Tile{ ]] }
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
  // </0 & GenerateGroupWithGCGSubst$2=3/4 (/7 e.GCG-Commands#3/5 )/8 s.FnGenSubst#1/9 s.FnGenResult#1/10 (/13 e.MarkedPattern#3/11 )/14 s.ContextSize#3/15 s.BaseNum#2/16 s.Depth#1/17 e.SentencesWithSubst#4/2 >/1
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
  // closed e.GCG-Commands#3 as range 5
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
  // closed e.MarkedPattern#3 as range 11
  if( ! refalrts::svar_left( context[15], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[16], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[17], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.SentencesWithSubst#4 as range 2
  //DEBUG: e.GCG-Commands#3: 5
  //DEBUG: s.FnGenSubst#1: 9
  //DEBUG: s.FnGenResult#1: 10
  //DEBUG: e.MarkedPattern#3: 11
  //DEBUG: s.ContextSize#3: 15
  //DEBUG: s.BaseNum#2: 16
  //DEBUG: s.Depth#1: 17
  //DEBUG: e.SentencesWithSubst#4: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & GenerateGroupWithGCGSubst$2=4/4 AsIs: (/7 AsIs: e.GCG-Commands#3/5 AsIs: )/8 } </18 & FindDivisionAndGenerate/19 Tile{ AsIs: s.FnGenSubst#1/9 AsIs: s.FnGenResult#1/10 AsIs: (/13 AsIs: e.MarkedPattern#3/11 AsIs: )/14 } (/20 Tile{ AsIs: e.SentencesWithSubst#4/2 } )/21 Tile{ AsIs: s.ContextSize#3/15 AsIs: s.BaseNum#2/16 AsIs: s.Depth#1/17 } >/22 Tile{ AsIs: >/1 ]] }
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
  res = refalrts::splice_evar( res, context[22], context[22] );
  res = refalrts::splice_evar( res, context[15], context[17] );
  res = refalrts::splice_evar( res, context[21], context[21] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[20], context[20] );
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
  // </0 & GenerateGroupWithGCGSubst$2=2/4 s.FnGenSubst#1/5 s.FnGenResult#1/6 s.BaseNum#2/7 s.Depth#1/8 (/11 e.NewGCG-Subst#2/9 )/12 (/15 e.SentencesWithSubst#1/13 )/16 s.ContextSize#3/17 (/20 e.Vars#3/18 )/21 (/24 e.MarkedPattern#3/22 )/25 e.GCG-Commands#3/2 >/1
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
  // closed e.NewGCG-Subst#2 as range 9
  // closed e.SentencesWithSubst#1 as range 13
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
  // closed e.Vars#3 as range 18
  // closed e.MarkedPattern#3 as range 22
  // closed e.GCG-Commands#3 as range 2
  //DEBUG: s.FnGenSubst#1: 5
  //DEBUG: s.FnGenResult#1: 6
  //DEBUG: s.BaseNum#2: 7
  //DEBUG: s.Depth#1: 8
  //DEBUG: e.NewGCG-Subst#2: 9
  //DEBUG: e.SentencesWithSubst#1: 13
  //DEBUG: s.ContextSize#3: 17
  //DEBUG: e.Vars#3: 18
  //DEBUG: e.MarkedPattern#3: 22
  //DEBUG: e.GCG-Commands#3: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} s.FnGenResult#1/6 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.Vars#3/18 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & GenerateGroupWithGCGSubst$2=3/4 } Tile{ AsIs: (/15 } Tile{ AsIs: e.GCG-Commands#3/2 } Tile{ AsIs: )/16 } Tile{ AsIs: s.FnGenSubst#1/5 } Tile{ HalfReuse: s.FnGenResult1 #6/21 AsIs: (/24 AsIs: e.MarkedPattern#3/22 AsIs: )/25 } Tile{ AsIs: s.ContextSize#3/17 } Tile{ AsIs: s.BaseNum#2/7 AsIs: s.Depth#1/8 } </26 Tile{ HalfReuse: & NarrowSentenceSubstitutions/20 } Tile{ AsIs: (/11 AsIs: e.NewGCG-Subst#2/9 AsIs: )/12 } Tile{ AsIs: e.SentencesWithSubst#1/13 } >/27 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[26]);
  refalrts::alloc_close_call(vm, context[27]);
  refalrts::update_name(context[4], functions[efunc_gen_GenerateGroupWithGCGSubst_S2A3]);
  refalrts::reinit_svar( context[21], context[6] );
  refalrts::reinit_name(context[20], functions[efunc_NarrowSentenceSubstitutions]);
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
  res = refalrts::splice_evar( res, context[27], context[27] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_evar( res, context[20], context[20] );
  res = refalrts::splice_evar( res, context[26], context[26] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_evar( res, context[17], context[17] );
  res = refalrts::splice_evar( res, context[21], context[25] );
  res = refalrts::splice_evar( res, context[5], context[5] );
  res = refalrts::splice_evar( res, context[16], context[16] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[15], context[15] );
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
  // </0 & GenerateGroupWithGCGSubst$2=1/4 s.FnGenSubst#1/5 s.FnGenResult#1/6 s.Depth#1/7 (/10 e.SentencesWithSubst#1/8 )/11 s.ContextSize#1/12 (/15 e.MarkedPattern#1/13 )/16 s.BaseNum#2/17 e.NewGCG-Subst#2/2 >/1
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
  // closed e.SentencesWithSubst#1 as range 8
  if( ! refalrts::svar_left( context[12], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[13] = 0;
  context[14] = 0;
  context[15] = refalrts::brackets_left( context[13], context[14], context[2], context[3] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[15], context[16]);
  // closed e.MarkedPattern#1 as range 13
  if( ! refalrts::svar_left( context[17], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.NewGCG-Subst#2 as range 2
  //DEBUG: s.FnGenSubst#1: 5
  //DEBUG: s.FnGenResult#1: 6
  //DEBUG: s.Depth#1: 7
  //DEBUG: e.SentencesWithSubst#1: 8
  //DEBUG: s.ContextSize#1: 12
  //DEBUG: e.MarkedPattern#1: 13
  //DEBUG: s.BaseNum#2: 17
  //DEBUG: e.NewGCG-Subst#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & GenerateGroupWithGCGSubst$2=2/4 AsIs: s.FnGenSubst#1/5 AsIs: s.FnGenResult#1/6 } Tile{ AsIs: s.BaseNum#2/17 } Tile{ AsIs: s.Depth#1/7 AsIs: (/10 } e.NewGCG-Subst#2/2/18 )/20 (/21 Tile{ AsIs: e.SentencesWithSubst#1/8 } )/22 </23 & CodeForSubst/24 Tile{ HalfReuse: s.FnGenSubst1 #5/11 AsIs: s.ContextSize#1/12 AsIs: (/15 AsIs: e.MarkedPattern#1/13 AsIs: )/16 } Tile{ AsIs: e.NewGCG-Subst#2/2 } s.Depth#1/7/25 >/26 Tile{ AsIs: >/1 ]] }
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
  res = refalrts::splice_evar( res, context[17], context[17] );
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
  // </0 & GenerateGroupWithGCGSubst/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & GenerateGroupWithGCGSubst/4 s.new#1/5 s.new#2/6 (/9 e.new#3/7 )/10 (/13 e.new#4/11 )/14 s.new#5/15 s.new#6/16 s.new#7/17 e.new#8/2 >/1
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
  // closed e.new#3 as range 7
  // closed e.new#4 as range 11
  if( ! refalrts::svar_left( context[15], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[16], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[17], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#8 as range 2
  do {
    // </0 & GenerateGroupWithGCGSubst/4 s.FnGenSubst#1/5 s.FnGenResult#1/6 (/9 e.MarkedPattern#1/18 )/10 (/13 (/26 e.SentenceWithSubst#1/24 )/27 )/14 s.ContextSize#1/15 s.BaseNum#1/16 s.Depth#1/17 e.NewGCG-Subst#1/22 >/1
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
    // closed e.MarkedPattern#1 as range 18
    // closed e.SentenceWithSubst#1 as range 24
    // closed e.NewGCG-Subst#1 as range 22
    //DEBUG: s.FnGenSubst#1: 5
    //DEBUG: s.FnGenResult#1: 6
    //DEBUG: s.ContextSize#1: 15
    //DEBUG: s.BaseNum#1: 16
    //DEBUG: s.Depth#1: 17
    //DEBUG: e.MarkedPattern#1: 18
    //DEBUG: e.SentenceWithSubst#1: 24
    //DEBUG: e.NewGCG-Subst#1: 22

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} )/10 (/13 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.ContextSize#1/15 s.BaseNum#1/16 s.Depth#1/17 e.NewGCG-Subst#1/22 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & GenerateSingleSentence/4 AsIs: s.FnGenSubst#1/5 AsIs: s.FnGenResult#1/6 HalfReuse: s.ContextSize1 #15/9 } Tile{ AsIs: (/26 } Tile{ AsIs: e.MarkedPattern#1/18 } Tile{ AsIs: )/27 HalfReuse: s.Depth1 #17/14 } Tile{ AsIs: e.SentenceWithSubst#1/24 } Tile{ AsIs: >/1 ]] }
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
    res = refalrts::splice_evar( res, context[26], context[26] );
    refalrts::splice_to_freelist_open( vm, context[9], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & GenerateGroupWithGCGSubst/4 s.FnGenSubst#1/5 s.FnGenResult#1/6 (/9 e.MarkedPattern#1/7 )/10 (/13 e.SentencesWithSubst#1/11 )/14 s.ContextSize#1/15 s.BaseNum#1/16 s.Depth#1/17 e.NewGCG-Subst#1/2 >/1
  // closed e.MarkedPattern#1 as range 7
  // closed e.SentencesWithSubst#1 as range 11
  // closed e.NewGCG-Subst#1 as range 2
  //DEBUG: s.FnGenSubst#1: 5
  //DEBUG: s.FnGenResult#1: 6
  //DEBUG: s.ContextSize#1: 15
  //DEBUG: s.BaseNum#1: 16
  //DEBUG: s.Depth#1: 17
  //DEBUG: e.MarkedPattern#1: 7
  //DEBUG: e.SentencesWithSubst#1: 11
  //DEBUG: e.NewGCG-Subst#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & GenerateGroupWithGCGSubst$2=1/4 AsIs: s.FnGenSubst#1/5 AsIs: s.FnGenResult#1/6 HalfReuse: s.Depth1 #17/9 } Tile{ AsIs: (/13 AsIs: e.SentencesWithSubst#1/11 AsIs: )/14 AsIs: s.ContextSize#1/15 } (/18 Tile{ AsIs: e.MarkedPattern#1/7 } Tile{ AsIs: )/10 } </19 & EnumerateVars-Subst/20 Tile{ AsIs: s.BaseNum#1/16 AsIs: s.Depth#1/17 AsIs: e.NewGCG-Subst#1/2 AsIs: >/1 } >/21 Tile{ ]] }
  refalrts::alloc_open_bracket(vm, context[18]);
  refalrts::alloc_open_call(vm, context[19]);
  refalrts::alloc_name(vm, context[20], functions[efunc_EnumerateVarsm_Subst]);
  refalrts::alloc_close_call(vm, context[21]);
  refalrts::update_name(context[4], functions[efunc_gen_GenerateGroupWithGCGSubst_S2A1]);
  refalrts::reinit_svar( context[9], context[17] );
  refalrts::push_stack( vm, context[21] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[19] );
  refalrts::link_brackets( context[18], context[10] );
  refalrts::link_brackets( context[13], context[14] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[21], context[21] );
  res = refalrts::splice_evar( res, context[16], context[1] );
  res = refalrts::splice_evar( res, context[19], context[20] );
  res = refalrts::splice_evar( res, context[10], context[10] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_evar( res, context[18], context[18] );
  res = refalrts::splice_evar( res, context[13], context[15] );
  refalrts::use( res );
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
  // </0 & CodeForSubst=2/4 s.FnGenSubst#1/5 s.ContextSize#3/6 (/9 e.CmdSaves#3/7 )/10 e.SubstsAndJunks#3/2 >/1
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
  // closed e.CmdSaves#3 as range 7
  // closed e.SubstsAndJunks#3 as range 2
  //DEBUG: s.FnGenSubst#1: 5
  //DEBUG: s.ContextSize#3: 6
  //DEBUG: e.CmdSaves#3: 7
  //DEBUG: e.SubstsAndJunks#3: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} s.FnGenSubst#1/5 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 HalfReuse: s.FnGenSubst1 #5/4 } Tile{ AsIs: s.ContextSize#3/6 } Tile{ AsIs: e.SubstsAndJunks#3/2 } (/11 )/12 Tile{ AsIs: (/9 AsIs: e.CmdSaves#3/7 AsIs: )/10 } Tile{ AsIs: >/1 ]] }
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
  res = refalrts::splice_evar( res, context[6], context[6] );
  refalrts::splice_to_freelist_open( vm, context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_CodeForSubst_A2("CodeForSubst=2", COOKIE1_, COOKIE2_, func_gen_CodeForSubst_A2);


static refalrts::FnResult func_gen_CodeForSubst_A2B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
  // </0 & CodeForSubst=2:1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & CodeForSubst=2:1/4 s.new#1/5 (/8 e.new#2/6 )/9 s.new#3/10 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[6] = 0;
  context[7] = 0;
  context[8] = refalrts::brackets_left( context[6], context[7], context[2], context[3] );
  if( ! context[8] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[8], context[9]);
  // closed e.new#2 as range 6
  if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & CodeForSubst=2:1/4 s.ContextSize#1/5 (/8 e.SubstsAndJunks#2/11 )/9 0/10 >/1
    context[11] = context[6];
    context[12] = context[7];
    if( ! refalrts::number_term( 0UL, context[10] ) )
      continue;
    // closed e.SubstsAndJunks#2 as range 11
    //DEBUG: s.ContextSize#1: 5
    //DEBUG: e.SubstsAndJunks#2: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & CodeForSubst=2:1/4 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} 0/10 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: s.ContextSize#1/5 AsIs: (/8 } Tile{ AsIs: )/9 } Tile{ AsIs: e.SubstsAndJunks#2/11 } Tile{ ]] }
    refalrts::link_brackets( context[8], context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[9], context[9] );
    res = refalrts::splice_evar( res, context[5], context[8] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & CodeForSubst=2:1/4 s.ContextSize#1/5 (/8 e.SubstsAndJunks#2/6 )/9 s.Depth#3/10 >/1
  // closed e.SubstsAndJunks#2 as range 6
  //DEBUG: s.ContextSize#1: 5
  //DEBUG: s.Depth#3: 10
  //DEBUG: e.SubstsAndJunks#2: 6

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} (/8 {REMOVED TILE} )/9 s.Depth#3/10 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & MakeSavers/4 AsIs: s.ContextSize#1/5 } Tile{ AsIs: e.SubstsAndJunks#2/6 } Tile{ AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_MakeSavers]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[6], context[7] );
  refalrts::splice_to_freelist_open( vm, context[5], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_CodeForSubst_A2B1("CodeForSubst=2:1", COOKIE1_, COOKIE2_, func_gen_CodeForSubst_A2B1);


static refalrts::FnResult func_gen_CodeForSubst_A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  // </0 & CodeForSubst=1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & CodeForSubst=1/4 s.new#1/5 s.new#2/6 s.new#3/7 e.new#4/2 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[7], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#4 as range 2
  do {
    // </0 & CodeForSubst=1/4 s.FnGenSubst#1/5 s.ContextSize#1/6 0/7 e.SubstsAndJunks#2/8 >/1
    context[8] = context[2];
    context[9] = context[3];
    if( ! refalrts::number_term( 0UL, context[7] ) )
      continue;
    // closed e.SubstsAndJunks#2 as range 8
    //DEBUG: s.FnGenSubst#1: 5
    //DEBUG: s.ContextSize#1: 6
    //DEBUG: e.SubstsAndJunks#2: 8

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </4 AsIs: s.FnGenSubst#1/5 AsIs: s.ContextSize#1/6 } Tile{ AsIs: e.SubstsAndJunks#2/8 } Tile{ HalfReuse: (/0 } Tile{ HalfReuse: )/7 } (/10 )/11 Tile{ AsIs: >/1 ]] }
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
    res = refalrts::splice_evar( res, context[7], context[7] );
    res = refalrts::splice_evar( res, context[0], context[0] );
    res = refalrts::splice_evar( res, context[8], context[9] );
    res = refalrts::splice_evar( res, context[4], context[6] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & CodeForSubst=1/4 s.FnGenSubst#1/5 s.ContextSize#1/6 s.Depth#1/7 e.SubstsAndJunks#2/2 >/1
  // closed e.SubstsAndJunks#2 as range 2
  //DEBUG: s.FnGenSubst#1: 5
  //DEBUG: s.ContextSize#1: 6
  //DEBUG: s.Depth#1: 7
  //DEBUG: e.SubstsAndJunks#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} s.Depth#1/7 {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & CodeForSubst=2/4 AsIs: s.FnGenSubst#1/5 } </8 & MakeSavers/9 Tile{ AsIs: s.ContextSize#1/6 } Tile{ AsIs: e.SubstsAndJunks#2/2 } >/10 Tile{ AsIs: >/1 ]] }
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
  res = refalrts::splice_evar( res, context[10], context[10] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[6], context[6] );
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
  // </0 & CodeForSubst/4 s.FnGenSubst#1/5 s.ContextSize#1/6 (/9 e.MarkedPattern#1/7 )/10 e.Substitute#1/2 s.Depth#1/11 >/1
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
  // closed e.MarkedPattern#1 as range 7
  if( ! refalrts::svar_right( context[11], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Substitute#1 as range 2
  //DEBUG: s.FnGenSubst#1: 5
  //DEBUG: s.ContextSize#1: 6
  //DEBUG: e.MarkedPattern#1: 7
  //DEBUG: s.Depth#1: 11
  //DEBUG: e.Substitute#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Depth#1/11 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & CodeForSubst=1/4 AsIs: s.FnGenSubst#1/5 AsIs: s.ContextSize#1/6 HalfReuse: s.Depth1 #11/9 } </12 & ComposeVars/13 (/14 Tile{ AsIs: e.MarkedPattern#1/7 } Tile{ AsIs: )/10 } (/15 Tile{ AsIs: e.Substitute#1/2 } )/16 >/17 Tile{ AsIs: >/1 ]] }
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
  res = refalrts::splice_evar( res, context[15], context[15] );
  res = refalrts::splice_evar( res, context[10], context[10] );
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
  // </0 & GenerateSingleSentence=2/4 (/7 # CmdIssueMemory/9 s.Memory#3/10 )/8 e.Commands#3/2 >/1
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
  // closed e.Commands#3 as range 2
  if( ! refalrts::svar_left( context[10], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: e.Commands#3: 2
  //DEBUG: s.Memory#3: 10

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} & GenerateSingleSentence=2/4 (/7 # CmdIssueMemory/9 s.Memory#3/10 )/8 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: s.Memory3 #10/0 } Tile{ AsIs: e.Commands#3/2 } Tile{ ]] }
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
  // </0 & GenerateSingleSentence=1/4 s.FnGenResult#1/5 (/8 e.Conditions#1/6 )/9 (/12 e.Result#1/10 )/13 s.ContextSize#2/14 (/17 e.Vars#2/15 )/18 (/21 e.MarkedPattern#2/19 )/22 e.PatternCommands#2/2 >/1
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
  // closed e.Vars#2 as range 15
  // closed e.MarkedPattern#2 as range 19
  // closed e.PatternCommands#2 as range 2
  //DEBUG: s.FnGenResult#1: 5
  //DEBUG: e.Conditions#1: 6
  //DEBUG: e.Result#1: 10
  //DEBUG: s.ContextSize#2: 14
  //DEBUG: e.Vars#2: 15
  //DEBUG: e.MarkedPattern#2: 19
  //DEBUG: e.PatternCommands#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </23 & GenerateSingleSentence=2/24 Tile{ AsIs: </0 Reuse: & GenResult/4 AsIs: s.FnGenResult#1/5 AsIs: (/8 AsIs: e.Conditions#1/6 AsIs: )/9 AsIs: (/12 AsIs: e.Result#1/10 AsIs: )/13 AsIs: s.ContextSize#2/14 AsIs: (/17 AsIs: e.Vars#2/15 AsIs: )/18 AsIs: (/21 AsIs: e.MarkedPattern#2/19 AsIs: )/22 AsIs: e.PatternCommands#2/2 AsIs: >/1 } >/25 Tile{ ]] }
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
  res = refalrts::splice_evar( res, context[25], context[25] );
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
  // </0 & GenerateSingleSentence/4 s.FnGenSubst#1/9 s.FnGenResult#1/10 s.ContextSize#1/11 (/14 e.MarkedPattern#1/12 )/15 s.Depth#1/16 (/19 e.Substitute#1/17 )/20 e.Conditions#1/2 (/7 e.Result#1/5 )/8 >/1
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
  // closed e.Result#1 as range 5
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
  // closed e.MarkedPattern#1 as range 12
  if( ! refalrts::svar_left( context[16], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[17] = 0;
  context[18] = 0;
  context[19] = refalrts::brackets_left( context[17], context[18], context[2], context[3] );
  if( ! context[19] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[19], context[20]);
  // closed e.Substitute#1 as range 17
  // closed e.Conditions#1 as range 2
  //DEBUG: e.Result#1: 5
  //DEBUG: s.FnGenSubst#1: 9
  //DEBUG: s.FnGenResult#1: 10
  //DEBUG: s.ContextSize#1: 11
  //DEBUG: e.MarkedPattern#1: 12
  //DEBUG: s.Depth#1: 16
  //DEBUG: e.Substitute#1: 17
  //DEBUG: e.Conditions#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & GenerateSingleSentence=1/4 } Tile{ AsIs: s.FnGenResult#1/10 } (/21 Tile{ AsIs: e.Conditions#1/2 } Tile{ AsIs: )/20 } Tile{ AsIs: (/7 AsIs: e.Result#1/5 AsIs: )/8 HalfReuse: </1 } & CodeForSubst/22 Tile{ AsIs: s.FnGenSubst#1/9 } Tile{ AsIs: s.ContextSize#1/11 AsIs: (/14 AsIs: e.MarkedPattern#1/12 AsIs: )/15 } Tile{ AsIs: e.Substitute#1/17 } Tile{ AsIs: s.Depth#1/16 HalfReuse: >/19 } >/23 Tile{ ]] }
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
  res = refalrts::splice_evar( res, context[23], context[23] );
  res = refalrts::splice_evar( res, context[16], context[19] );
  res = refalrts::splice_evar( res, context[17], context[18] );
  res = refalrts::splice_evar( res, context[11], context[15] );
  res = refalrts::splice_evar( res, context[9], context[9] );
  res = refalrts::splice_evar( res, context[22], context[22] );
  res = refalrts::splice_evar( res, context[7], context[1] );
  res = refalrts::splice_evar( res, context[20], context[20] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[21], context[21] );
  res = refalrts::splice_evar( res, context[10], context[10] );
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
  // </0 & ComposeVars$1=1/4 (/7 e.MarkedPattern-B#1/5 )/8 s.Offset#1/9 (/12 e.Subst#1/10 )/13 (/16 e.MarkedPattern-E#1/14 )/17 (/20 e.Substitute-B#1/18 )/21 (/24 e.Substitute-E#1/22 )/25 s.Mode#2/26 >/1
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
  // closed e.MarkedPattern-B#1 as range 5
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
  // closed e.Subst#1 as range 10
  // closed e.MarkedPattern-E#1 as range 14
  // closed e.Substitute-B#1 as range 18
  // closed e.Substitute-E#1 as range 22
  if( ! refalrts::svar_left( context[26], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: e.MarkedPattern-B#1: 5
  //DEBUG: s.Offset#1: 9
  //DEBUG: e.Subst#1: 10
  //DEBUG: e.MarkedPattern-E#1: 14
  //DEBUG: e.Substitute-B#1: 18
  //DEBUG: e.Substitute-E#1: 22
  //DEBUG: s.Mode#2: 26

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 HalfReuse: # Junk/7 AsIs: e.MarkedPattern-B#1/5 AsIs: )/8 } Tile{ HalfReuse: (/25 AsIs: s.Mode#2/26 } Tile{ AsIs: s.Offset#1/9 } Tile{ AsIs: e.Subst#1/10 } Tile{ AsIs: )/21 HalfReuse: </24 } Tile{ HalfReuse: & ComposeVars/13 AsIs: (/16 AsIs: e.MarkedPattern-E#1/14 AsIs: )/17 AsIs: (/20 } Tile{ AsIs: e.Substitute-B#1/18 } Tile{ AsIs: e.Substitute-E#1/22 } Tile{ HalfReuse: )/12 } Tile{ AsIs: >/1 ]] }
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
  res = refalrts::splice_evar( res, context[12], context[12] );
  res = refalrts::splice_evar( res, context[22], context[23] );
  res = refalrts::splice_evar( res, context[18], context[19] );
  res = refalrts::splice_evar( res, context[13], context[20] );
  res = refalrts::splice_evar( res, context[21], context[24] );
  res = refalrts::splice_evar( res, context[10], context[11] );
  res = refalrts::splice_evar( res, context[9], context[9] );
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
  // </0 & ComposeVars$1=1:1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & ComposeVars$1=1:1/4 s.new#1/5 >/1
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
  // </0 & ComposeVars/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & ComposeVars/4 (/7 e.new#1/5 )/8 (/11 e.new#2/9 )/12 >/1
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
    // </0 & ComposeVars/4 (/7 e.MarkedPattern-B#1/17 (/25 # TkVariable/27 s.Mode#1/28 e.Name#1/23 s.Offset#1/29 )/26 e.MarkedPattern-E#1/19 )/8 (/11 e.Substitute-B#1/30 (/36 e.Subst#1/34 ':'/42 (/40 s.Mode#1/43 e.Name#1/44 )/41 )/37 e.Substitute-E#1/32 )/12 >/1
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
      context[27] = refalrts::ident_left( identifiers[ident_TkVariable], context[23], context[24] );
      if( ! context[27] )
        continue;
      // closed e.MarkedPattern-E#1 as range 19
      if( ! refalrts::svar_left( context[28], context[23], context[24] ) )
        continue;
      if( ! refalrts::svar_right( context[29], context[23], context[24] ) )
        continue;
      // closed e.Name#1 as range 23
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
        // closed e.Subst#1 as range 34
        // closed e.Substitute-E#1 as range 32
        //DEBUG: e.MarkedPattern-B#1: 17
        //DEBUG: e.MarkedPattern-E#1: 19
        //DEBUG: s.Mode#1: 28
        //DEBUG: s.Offset#1: 29
        //DEBUG: e.Name#1: 23
        //DEBUG: e.Substitute-B#1: 30
        //DEBUG: e.Subst#1: 34
        //DEBUG: e.Substitute-E#1: 32

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} s.Mode#1/28 e.Name#1/23 s.Offset#1/29 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.Name#1/44 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & ComposeVars$1=1/4 AsIs: (/7 AsIs: e.MarkedPattern-B#1/17 HalfReuse: )/25 HalfReuse: s.Offset1 #29/27 } Tile{ HalfReuse: (/42 } Tile{ AsIs: e.Subst#1/34 } Tile{ AsIs: )/41 } Tile{ HalfReuse: (/26 AsIs: e.MarkedPattern-E#1/19 AsIs: )/8 AsIs: (/11 AsIs: e.Substitute-B#1/30 HalfReuse: )/36 } Tile{ HalfReuse: (/37 AsIs: e.Substitute-E#1/32 AsIs: )/12 HalfReuse: </1 } Tile{ HalfReuse: & ComposeVars$1=1:1/40 AsIs: s.Mode#1/43 } >/46 >/47 Tile{ ]] }
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
        res = refalrts::splice_evar( res, context[41], context[41] );
        res = refalrts::splice_evar( res, context[34], context[35] );
        res = refalrts::splice_evar( res, context[42], context[42] );
        refalrts::splice_to_freelist_open( vm, context[27], res );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[30], context[31], context[21], context[22] ) );
    } while ( refalrts::open_evar_advance( context[17], context[18], context[13], context[14] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ComposeVars/4 (/7 e.MarkedPattern#1/5 )/8 (/11 )/12 >/1
  if( ! refalrts::empty_seq( context[9], context[10] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.MarkedPattern#1 as range 5
  //DEBUG: e.MarkedPattern#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 {REMOVED TILE} (/11 )/12 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 HalfReuse: # Junk/7 AsIs: e.MarkedPattern#1/5 AsIs: )/8 } Tile{ ]] }
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
  // </0 & EnumerateVarsRec\1$2=1/4 s.Next#3/5 e.Nested#3/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Nested#3 as range 2
  //DEBUG: s.Next#3: 5
  //DEBUG: e.Nested#3: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} s.Next#3/5 {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: s.Next3 #5/0 HalfReuse: (/4 } # Brackets/6 Tile{ AsIs: e.Nested#3/2 } Tile{ HalfReuse: )/1 ]] }
  refalrts::alloc_ident(vm, context[6], identifiers[ident_Brackets]);
  refalrts::reinit_svar( context[0], context[5] );
  refalrts::reinit_open_bracket(context[4]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[4], context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[6], context[6] );
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
  // </0 & EnumerateVarsRec\1$3=1/4 (/7 e.Name#2/5 )/8 s.Next#3/9 e.Nested#3/2 >/1
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
  // closed e.Name#2 as range 5
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Nested#3 as range 2
  //DEBUG: e.Name#2: 5
  //DEBUG: s.Next#3: 9
  //DEBUG: e.Nested#3: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: s.Next#3/9 } Tile{ HalfReuse: (/0 HalfReuse: # ADT-Brackets/4 AsIs: (/7 AsIs: e.Name#2/5 AsIs: )/8 } Tile{ AsIs: e.Nested#3/2 } Tile{ HalfReuse: )/1 ]] }
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
  res = refalrts::splice_evar( res, context[9], context[9] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_EnumerateVarsRec_L1S3A1("EnumerateVarsRec\\1$3=1", COOKIE1_, COOKIE2_, func_gen_EnumerateVarsRec_L1S3A1);


static refalrts::FnResult func_gen_EnumerateVarsRec_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  // </0 & EnumerateVarsRec\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & EnumerateVarsRec\1/4 s.new#1/5 t.new#2/6 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[7] = refalrts::tvar_left( context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & EnumerateVarsRec\1/4 s.new#3/5 (/6 s.new#4/10 e.new#5/8 )/7 >/1
    context[8] = 0;
    context[9] = 0;
    if( ! refalrts::brackets_term( context[8], context[9], context[6] ) )
      continue;
    if( ! refalrts::svar_left( context[10], context[8], context[9] ) )
      continue;
    // closed e.new#5 as range 8
    do {
      // </0 & EnumerateVarsRec\1/4 s.Next#2/5 (/6 # TkVariable/10 s.Type#2/13 )/7 >/1
      context[11] = context[8];
      context[12] = context[9];
      if( ! refalrts::ident_term( identifiers[ident_TkVariable], context[10] ) )
        continue;
      if( ! refalrts::svar_left( context[13], context[11], context[12] ) )
        continue;
      if( ! refalrts::empty_seq( context[11], context[12] ) )
        continue;
      //DEBUG: s.Next#2: 5
      //DEBUG: s.Type#2: 13

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Add/4 } 1/14 Tile{ AsIs: s.Next#2/5 } >/15 Tile{ AsIs: (/6 AsIs: # TkVariable/10 AsIs: s.Type#2/13 HalfReuse: 'n'/7 HalfReuse: 'e'/1 } 'w'/16 s.Next#2/5/17 )/18 Tile{ ]] }
      refalrts::alloc_number(vm, context[14], 1UL);
      refalrts::alloc_close_call(vm, context[15]);
      refalrts::alloc_char(vm, context[16], 'w');
      refalrts::copy_stvar(vm, context[17], context[5]);
      refalrts::alloc_close_bracket(vm, context[18]);
      refalrts::update_name(context[4], functions[efunc_Add]);
      refalrts::reinit_char(context[7], 'n');
      refalrts::reinit_char(context[1], 'e');
      refalrts::link_brackets( context[6], context[18] );
      refalrts::push_stack( vm, context[15] );
      refalrts::push_stack( vm, context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[16], context[18] );
      res = refalrts::splice_evar( res, context[6], context[1] );
      res = refalrts::splice_evar( res, context[15], context[15] );
      res = refalrts::splice_evar( res, context[5], context[5] );
      res = refalrts::splice_evar( res, context[14], context[14] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & EnumerateVarsRec\1/4 s.Next#2/5 (/6 # Brackets/10 e.Nested#2/11 )/7 >/1
      context[11] = context[8];
      context[12] = context[9];
      if( ! refalrts::ident_term( identifiers[ident_Brackets], context[10] ) )
        continue;
      // closed e.Nested#2 as range 11
      //DEBUG: s.Next#2: 5
      //DEBUG: e.Nested#2: 11

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} s.Next#2/5 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & EnumerateVarsRec\1$2=1/4 } </13 Tile{ HalfReuse: & EnumerateVarsRec/6 HalfReuse: s.Next2 #5/10 AsIs: e.Nested#2/11 HalfReuse: >/7 AsIs: >/1 ]] }
      refalrts::alloc_open_call(vm, context[13]);
      refalrts::update_name(context[4], functions[efunc_gen_EnumerateVarsRec_L1S2A1]);
      refalrts::reinit_name(context[6], functions[efunc_EnumerateVarsRec]);
      refalrts::reinit_svar( context[10], context[5] );
      refalrts::reinit_close_call(context[7]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[7] );
      refalrts::push_stack( vm, context[13] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[6];
      res = refalrts::splice_evar( res, context[13], context[13] );
      refalrts::splice_to_freelist_open( vm, context[4], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & EnumerateVarsRec\1/4 s.Next#2/5 (/6 # ADT-Brackets/10 (/15 e.Name#2/13 )/16 e.Nested#2/11 )/7 >/1
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
    // closed e.Nested#2 as range 11
    //DEBUG: s.Next#2: 5
    //DEBUG: e.Name#2: 13
    //DEBUG: e.Nested#2: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </6 HalfReuse: & EnumerateVarsRec\1$3=1/10 AsIs: (/15 AsIs: e.Name#2/13 AsIs: )/16 } Tile{ AsIs: </0 Reuse: & EnumerateVarsRec/4 AsIs: s.Next#2/5 } Tile{ AsIs: e.Nested#2/11 } Tile{ HalfReuse: >/7 AsIs: >/1 ]] }
    refalrts::reinit_open_call(context[6]);
    refalrts::reinit_name(context[10], functions[efunc_gen_EnumerateVarsRec_L1S3A1]);
    refalrts::update_name(context[4], functions[efunc_EnumerateVarsRec]);
    refalrts::reinit_close_call(context[7]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[6] );
    refalrts::push_stack( vm, context[7] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[15], context[16] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[7];
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[0], context[5] );
    res = refalrts::splice_evar( res, context[6], context[16] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & EnumerateVarsRec\1/4 s.Next#2/5 t.OtherTerm#2/6 >/1
  //DEBUG: t.OtherTerm#2: 6
  //DEBUG: s.Next#2: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & EnumerateVarsRec\1/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: s.Next#2/5 AsIs: t.OtherTerm#2/6 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[7] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_EnumerateVarsRec_L1("EnumerateVarsRec\\1", COOKIE1_, COOKIE2_, func_gen_EnumerateVarsRec_L1);


static refalrts::FnResult func_EnumerateVarsRec(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  // </0 & EnumerateVarsRec/4 s.NextNumber#1/5 e.Expr#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Expr#1 as range 2
  //DEBUG: s.NextNumber#1: 5
  //DEBUG: e.Expr#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & MapAccum@1/4 AsIs: s.NextNumber#1/5 AsIs: e.Expr#1/2 AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_gen_MapAccum_Z1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
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
  // </0 & EnumerateVars-Subst\1=1/4 (/7 e.Var#2/5 )/8 s.NextNumber#3/9 e.Value#3/2 >/1
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
  // closed e.Var#2 as range 5
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Value#3 as range 2
  //DEBUG: e.Var#2: 5
  //DEBUG: s.NextNumber#3: 9
  //DEBUG: e.Value#3: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} s.NextNumber#3/9 {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: s.NextNumber3 #9/0 } (/10 Tile{ AsIs: e.Value#3/2 } Tile{ HalfReuse: ':'/4 AsIs: (/7 AsIs: e.Var#2/5 AsIs: )/8 } Tile{ HalfReuse: )/1 ]] }
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
  res = refalrts::splice_evar( res, context[10], context[10] );
  refalrts::splice_to_freelist_open( vm, context[0], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_EnumerateVarsm_Subst_L1A1("EnumerateVars-Subst\\1=1", COOKIE1_, COOKIE2_, func_gen_EnumerateVarsm_Subst_L1A1);


static refalrts::FnResult func_gen_EnumerateVarsm_Subst_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
  // </0 & EnumerateVars-Subst\1/4 s.NextNumber#2/14 (/7 e.Value#2/5 ':'/13 (/11 e.Var#2/9 )/12 )/8 >/1
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
  context[11] = refalrts::brackets_right( context[9], context[10], context[5], context[6] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[11], context[12]);
  context[13] = refalrts::char_right( ':', context[5], context[6] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  // closed e.Value#2 as range 5
  // closed e.Var#2 as range 9
  if( ! refalrts::svar_left( context[14], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: e.Value#2: 5
  //DEBUG: e.Var#2: 9
  //DEBUG: s.NextNumber#2: 14

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 } Tile{ HalfReuse: & EnumerateVars-Subst\1=1/13 AsIs: (/11 AsIs: e.Var#2/9 AsIs: )/12 HalfReuse: </8 HalfReuse: & EnumerateVarsRec/1 } Tile{ AsIs: s.NextNumber#2/14 } Tile{ AsIs: e.Value#2/5 } Tile{ HalfReuse: >/7 } Tile{ HalfReuse: >/4 } Tile{ ]] }
  refalrts::reinit_name(context[13], functions[efunc_gen_EnumerateVarsm_Subst_L1A1]);
  refalrts::reinit_open_call(context[8]);
  refalrts::reinit_name(context[1], functions[efunc_EnumerateVarsRec]);
  refalrts::reinit_close_call(context[7]);
  refalrts::reinit_close_call(context[4]);
  refalrts::push_stack( vm, context[4] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[7] );
  refalrts::push_stack( vm, context[8] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[4], context[4] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[14], context[14] );
  res = refalrts::splice_evar( res, context[13], context[1] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_EnumerateVarsm_Subst_L1("EnumerateVars-Subst\\1", COOKIE1_, COOKIE2_, func_gen_EnumerateVarsm_Subst_L1);


static refalrts::FnResult func_EnumerateVarsm_Subst(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 7 elems
  refalrts::Iter context[7];
  refalrts::zeros( context, 7 );
  // </0 & EnumerateVars-Subst/4 s.StartNumber#1/5 s.Depth#1/6 e.Substitute#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Substitute#1 as range 2
  //DEBUG: s.StartNumber#1: 5
  //DEBUG: s.Depth#1: 6
  //DEBUG: e.Substitute#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} s.Depth#1/6 {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & MapAccum@2/4 AsIs: s.StartNumber#1/5 } Tile{ AsIs: e.Substitute#1/2 } Tile{ AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_gen_MapAccum_Z2]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
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
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  // </0 & FindDivision=3/4 (/7 e.FirstImage#3/5 )/8 (/11 e.FirstSentence#3/9 )/12 (/15 e.Sentences#1/13 )/16 e.TrivialGCG#4/2 >/1
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
  // closed e.FirstImage#3 as range 5
  // closed e.FirstSentence#3 as range 9
  // closed e.Sentences#1 as range 13
  // closed e.TrivialGCG#4 as range 2
  //DEBUG: e.FirstImage#3: 5
  //DEBUG: e.FirstSentence#3: 9
  //DEBUG: e.Sentences#1: 13
  //DEBUG: e.TrivialGCG#4: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoFindDivision/4 AsIs: (/7 } Tile{ AsIs: e.TrivialGCG#4/2 } )/17 Tile{ HalfReuse: (/1 } Tile{ AsIs: e.FirstImage#3/5 } )/18 Tile{ HalfReuse: (/8 AsIs: (/11 AsIs: e.FirstSentence#3/9 AsIs: )/12 HalfReuse: )/15 AsIs: e.Sentences#1/13 HalfReuse: >/16 } Tile{ ]] }
  refalrts::alloc_close_bracket(vm, context[17]);
  refalrts::alloc_close_bracket(vm, context[18]);
  refalrts::update_name(context[4], functions[efunc_DoFindDivision]);
  refalrts::reinit_open_bracket(context[1]);
  refalrts::reinit_open_bracket(context[8]);
  refalrts::reinit_close_bracket(context[15]);
  refalrts::reinit_close_call(context[16]);
  refalrts::push_stack( vm, context[16] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[8], context[15] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[1], context[18] );
  refalrts::link_brackets( context[7], context[17] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[8], context[16] );
  res = refalrts::splice_evar( res, context[18], context[18] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[1], context[1] );
  res = refalrts::splice_evar( res, context[17], context[17] );
  res = refalrts::splice_evar( res, context[2], context[3] );
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
  // </0 & FindDivision=2/4 (/7 e.Sentences#1/5 )/8 (/11 e.FirstImage#3/9 )/12 e.FirstSentence#3/2 >/1
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
  // closed e.Sentences#1 as range 5
  // closed e.FirstImage#3 as range 9
  // closed e.FirstSentence#3 as range 2
  //DEBUG: e.Sentences#1: 5
  //DEBUG: e.FirstImage#3: 9
  //DEBUG: e.FirstSentence#3: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & FindDivision=3/4 AsIs: (/7 } Tile{ AsIs: e.FirstImage#3/9 } Tile{ AsIs: )/8 AsIs: (/11 } Tile{ AsIs: e.FirstSentence#3/2 } Tile{ AsIs: )/12 } (/13 Tile{ AsIs: e.Sentences#1/5 } )/14 </15 & MakeTrivialSubstImage/16 e.FirstImage#3/9/17 >/19 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[13]);
  refalrts::alloc_close_bracket(vm, context[14]);
  refalrts::alloc_open_call(vm, context[15]);
  refalrts::alloc_name(vm, context[16], functions[efunc_MakeTrivialSubstImage]);
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
  res = refalrts::splice_evar( res, context[13], context[13] );
  res = refalrts::splice_evar( res, context[12], context[12] );
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
  // </0 & FindDivision/4 (/7 e.FirstSentence#1/5 )/8 e.Sentences#1/2 >/1
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
  // closed e.FirstSentence#1 as range 5
  // closed e.Sentences#1 as range 2
  //DEBUG: e.FirstSentence#1: 5
  //DEBUG: e.Sentences#1: 2
  //2: e.Sentences#1
  //5: e.FirstSentence#1
  //12: e.FirstSentence#1

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
    // </9 & FindDivision?1/13 (/16 e.FirstSubst#2/14 )/17 e.FirstConditions#2/11 (/20 e.FirstResult#2/18 )/21 >/10
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
    // closed e.FirstSubst#2 as range 14
    // closed e.FirstConditions#2 as range 11
    // closed e.FirstResult#2 as range 18
    //DEBUG: e.FirstSentence#1: 5
    //DEBUG: e.Sentences#1: 2
    //DEBUG: e.FirstSubst#2: 14
    //DEBUG: e.FirstConditions#2: 11
    //DEBUG: e.FirstResult#2: 18

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} )/8 {REMOVED TILE} {REMOVED TILE} (/16 e.FirstSubst#2/14 {REMOVED TILE} e.FirstConditions#2/11 (/20 e.FirstResult#2/18 )/21 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & FindDivision=2/4 AsIs: (/7 } Tile{ AsIs: e.Sentences#1/2 } Tile{ AsIs: )/17 } Tile{ AsIs: </9 Reuse: & ImagedSentence/13 } Tile{ AsIs: e.FirstSentence#1/5 } Tile{ AsIs: >/10 AsIs: >/1 ]] }
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
    res = refalrts::splice_evar( res, context[17], context[17] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    refalrts::splice_to_freelist_open( vm, context[7], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  refalrts::splice_to_freelist(vm, context[9], context[10]);
  return refalrts::cRecognitionImpossible;
}

static refalrts::NativeReference nat_ref_FindDivision("FindDivision", COOKIE1_, COOKIE2_, func_FindDivision);


static refalrts::FnResult func_gen_ImagedSentence_A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & ImagedSentence=1/4 (/7 e.Subst#1/5 )/8 (/11 e.Conditions#1/9 )/12 (/15 e.Result#1/13 )/16 e.SubstImage#2/2 >/1
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
  // closed e.Subst#1 as range 5
  // closed e.Conditions#1 as range 9
  // closed e.Result#1 as range 13
  // closed e.SubstImage#2 as range 2
  //DEBUG: e.Subst#1: 5
  //DEBUG: e.Conditions#1: 9
  //DEBUG: e.Result#1: 13
  //DEBUG: e.SubstImage#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} (/11 {REMOVED TILE} )/12 {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.SubstImage#2/2 } Tile{ HalfReuse: )/4 AsIs: (/7 AsIs: e.Subst#1/5 AsIs: )/8 } Tile{ AsIs: e.Conditions#1/9 } Tile{ AsIs: (/15 AsIs: e.Result#1/13 AsIs: )/16 } Tile{ ]] }
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
  // </0 & ImagedSentence/4 (/7 e.Subst#1/5 )/8 e.Conditions#1/2 (/11 e.Result#1/9 )/12 >/1
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
  // closed e.Subst#1 as range 5
  // closed e.Conditions#1 as range 2
  // closed e.Result#1 as range 9
  //DEBUG: e.Subst#1: 5
  //DEBUG: e.Conditions#1: 2
  //DEBUG: e.Result#1: 9

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & ImagedSentence=1/4 AsIs: (/7 AsIs: e.Subst#1/5 AsIs: )/8 } (/13 Tile{ AsIs: e.Conditions#1/2 } )/14 Tile{ AsIs: (/11 AsIs: e.Result#1/9 AsIs: )/12 HalfReuse: </1 } & Subst-BuildImage/15 e.Subst#1/5/16 >/18 >/19 Tile{ ]] }
  refalrts::alloc_open_bracket(vm, context[13]);
  refalrts::alloc_close_bracket(vm, context[14]);
  refalrts::alloc_name(vm, context[15], functions[efunc_Substm_BuildImage]);
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
  res = refalrts::splice_evar( res, context[14], context[14] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[13], context[13] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ImagedSentence("ImagedSentence", COOKIE1_, COOKIE2_, func_ImagedSentence);


static refalrts::FnResult func_gen_MakeTrivialSubstImage_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 27 elems
  refalrts::Iter context[27];
  refalrts::zeros( context, 27 );
  // </0 & MakeTrivialSubstImage\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & MakeTrivialSubstImage\1/4 (/7 t.new#1/15 ':'/13 (/11 s.new#2/14 e.new#3/9 )/12 )/8 >/1
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
  context[13] = refalrts::char_right( ':', context[5], context[6] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[14], context[9], context[10] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#3 as range 9
  context[16] = refalrts::tvar_left( context[15], context[5], context[6] );
  if( ! context[16] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & MakeTrivialSubstImage\1/4 (/7 t.Image#2/15 ':'/13 (/11 'e'/14 e.Index#2/17 )/12 )/8 >/1
    context[17] = context[9];
    context[18] = context[10];
    if( ! refalrts::char_term( 'e', context[14] ) )
      continue;
    // closed e.Index#2 as range 17
    //DEBUG: t.Image#2: 15
    //DEBUG: e.Index#2: 17

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} t.Image#2/15 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: (/4 HalfReuse: # MN/7 } ':'/19 Tile{ HalfReuse: 0/1 } ','/20 (/21 )/22 ','/23 (/24 )/25 )/26 Tile{ AsIs: ':'/13 AsIs: (/11 AsIs: 'e'/14 AsIs: e.Index#2/17 AsIs: )/12 AsIs: )/8 } Tile{ ]] }
    refalrts::alloc_char(vm, context[19], ':');
    refalrts::alloc_char(vm, context[20], ',');
    refalrts::alloc_open_bracket(vm, context[21]);
    refalrts::alloc_close_bracket(vm, context[22]);
    refalrts::alloc_char(vm, context[23], ',');
    refalrts::alloc_open_bracket(vm, context[24]);
    refalrts::alloc_close_bracket(vm, context[25]);
    refalrts::alloc_close_bracket(vm, context[26]);
    refalrts::reinit_open_bracket(context[0]);
    refalrts::reinit_open_bracket(context[4]);
    refalrts::reinit_ident(context[7], identifiers[ident_MN]);
    refalrts::reinit_number(context[1], 0UL);
    refalrts::link_brackets( context[0], context[8] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[4], context[26] );
    refalrts::link_brackets( context[24], context[25] );
    refalrts::link_brackets( context[21], context[22] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[13], context[8] );
    res = refalrts::splice_evar( res, context[20], context[26] );
    res = refalrts::splice_evar( res, context[1], context[1] );
    res = refalrts::splice_evar( res, context[19], context[19] );
    refalrts::splice_to_freelist_open( vm, context[7], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & MakeTrivialSubstImage\1/4 (/7 t.Image#2/15 ':'/13 (/11 s.ST#2/14 e.Index#2/9 )/12 )/8 >/1
  // closed e.Index#2 as range 9
  //DEBUG: t.Image#2: 15
  //DEBUG: s.ST#2: 14
  //DEBUG: e.Index#2: 9

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} t.Image#2/15 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: (/4 HalfReuse: # TkVariable/7 } s.ST#2/14/17 Tile{ HalfReuse: )/1 } Tile{ AsIs: ':'/13 AsIs: (/11 AsIs: s.ST#2/14 AsIs: e.Index#2/9 AsIs: )/12 AsIs: )/8 } Tile{ ]] }
  refalrts::copy_stvar(vm, context[17], context[14]);
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_open_bracket(context[4]);
  refalrts::reinit_ident(context[7], identifiers[ident_TkVariable]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[0], context[8] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[4], context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[13], context[8] );
  res = refalrts::splice_evar( res, context[1], context[1] );
  res = refalrts::splice_evar( res, context[17], context[17] );
  refalrts::splice_to_freelist_open( vm, context[7], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_MakeTrivialSubstImage_L1("MakeTrivialSubstImage\\1", COOKIE1_, COOKIE2_, func_gen_MakeTrivialSubstImage_L1);


static refalrts::FnResult func_MakeTrivialSubstImage(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 5 elems
  refalrts::Iter context[5];
  refalrts::zeros( context, 5 );
  // </0 & MakeTrivialSubstImage/4 e.SubstImage#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.SubstImage#1 as range 2
  //DEBUG: e.SubstImage#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map@1/4 AsIs: e.SubstImage#1/2 AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_gen_Map_Z1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_MakeTrivialSubstImage("MakeTrivialSubstImage", COOKIE1_, COOKIE2_, func_MakeTrivialSubstImage);


static refalrts::FnResult func_gen_DoFindDivision_S1B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 39 elems
  refalrts::Iter context[39];
  refalrts::zeros( context, 39 );
  // </0 & DoFindDivision$1:1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DoFindDivision$1:1/4 (/7 e.new#1/5 )/8 (/11 e.new#2/9 )/12 (/15 e.new#3/13 )/16 (/19 e.new#4/17 )/20 (/23 e.new#5/21 )/24 e.new#6/2 >/1
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
    // </0 & DoFindDivision$1:1/4 (/7 e.TrivialGCG#1/25 )/8 (/11 e.Image#1/27 )/12 (/15 e.FirstGroup#1/29 )/16 (/19 e.NextSentence#1/31 )/20 (/23 e.Sentences#1/33 )/24 e.TrivialGCG#1/37 >/1
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
    // closed e.TrivialGCG#1 as range 25
    if( ! refalrts::repeated_evar_left( vm, context[37], context[38], context[25], context[26], context[35], context[36] ) )
      continue;
    if( ! refalrts::empty_seq( context[35], context[36] ) )
      continue;
    // closed e.Image#1 as range 27
    // closed e.FirstGroup#1 as range 29
    // closed e.NextSentence#1 as range 31
    // closed e.Sentences#1 as range 33
    //DEBUG: e.TrivialGCG#1: 25
    //DEBUG: e.Image#1: 27
    //DEBUG: e.FirstGroup#1: 29
    //DEBUG: e.NextSentence#1: 31
    //DEBUG: e.Sentences#1: 33

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} e.TrivialGCG#1/25 )/8 (/11 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} )/24 e.TrivialGCG#1/37 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: # ForGroup/0 HalfReuse: (/4 HalfReuse: </7 } Tile{ HalfReuse: & Subst-Collapse/23 } Tile{ AsIs: e.Image#1/27 } Tile{ AsIs: >/1 } Tile{ AsIs: )/12 AsIs: (/15 AsIs: e.FirstGroup#1/29 AsIs: )/16 AsIs: (/19 AsIs: e.NextSentence#1/31 AsIs: )/20 } Tile{ AsIs: e.Sentences#1/33 } Tile{ ]] }
    refalrts::reinit_ident(context[0], identifiers[ident_ForGroup]);
    refalrts::reinit_open_bracket(context[4]);
    refalrts::reinit_open_call(context[7]);
    refalrts::reinit_name(context[23], functions[efunc_Substm_Collapse]);
    refalrts::link_brackets( context[19], context[20] );
    refalrts::link_brackets( context[15], context[16] );
    refalrts::link_brackets( context[4], context[12] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[7] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[33], context[34] );
    res = refalrts::splice_evar( res, context[12], context[20] );
    res = refalrts::splice_evar( res, context[1], context[1] );
    res = refalrts::splice_evar( res, context[27], context[28] );
    res = refalrts::splice_evar( res, context[23], context[23] );
    refalrts::splice_to_freelist_open( vm, context[7], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoFindDivision$1:1/4 (/7 e.TrivialGCG#1/5 )/8 (/11 e.Image#1/9 )/12 (/15 e.FirstGroup#1/13 )/16 (/19 e.NextSentence#1/17 )/20 (/23 e.Sentences#1/21 )/24 e.NewImage#4/2 >/1
  // closed e.TrivialGCG#1 as range 5
  // closed e.Image#1 as range 9
  // closed e.FirstGroup#1 as range 13
  // closed e.NextSentence#1 as range 17
  // closed e.Sentences#1 as range 21
  // closed e.NewImage#4 as range 2
  //DEBUG: e.TrivialGCG#1: 5
  //DEBUG: e.Image#1: 9
  //DEBUG: e.FirstGroup#1: 13
  //DEBUG: e.NextSentence#1: 17
  //DEBUG: e.Sentences#1: 21
  //DEBUG: e.NewImage#4: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} e.Image#1/9 {REMOVED TILE} {REMOVED TILE} )/16 {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoFindDivision/4 AsIs: (/7 AsIs: e.TrivialGCG#1/5 AsIs: )/8 AsIs: (/11 } Tile{ AsIs: e.NewImage#4/2 } Tile{ AsIs: )/12 AsIs: (/15 } Tile{ AsIs: e.FirstGroup#1/13 } Tile{ AsIs: (/19 AsIs: e.NextSentence#1/17 AsIs: )/20 HalfReuse: )/23 AsIs: e.Sentences#1/21 HalfReuse: >/24 } Tile{ ]] }
  refalrts::update_name(context[4], functions[efunc_DoFindDivision]);
  refalrts::reinit_close_bracket(context[23]);
  refalrts::reinit_close_call(context[24]);
  refalrts::push_stack( vm, context[24] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[15], context[23] );
  refalrts::link_brackets( context[19], context[20] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[19], context[24] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[12], context[15] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::splice_to_freelist_open( vm, context[11], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoFindDivision_S1B1("DoFindDivision$1:1", COOKIE1_, COOKIE2_, func_gen_DoFindDivision_S1B1);


static refalrts::FnResult func_gen_DoFindDivision_S1A2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 25 elems
  refalrts::Iter context[25];
  refalrts::zeros( context, 25 );
  // </0 & DoFindDivision$1=2/4 (/7 e.TrivialGCG#1/5 )/8 (/11 e.Image#1/9 )/12 (/15 e.FirstGroup#1/13 )/16 (/19 e.NextSentence#1/17 )/20 (/23 e.Sentences#1/21 )/24 e.NewImage#3/2 >/1
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
  // closed e.TrivialGCG#1 as range 5
  // closed e.Image#1 as range 9
  // closed e.FirstGroup#1 as range 13
  // closed e.NextSentence#1 as range 17
  // closed e.Sentences#1 as range 21
  // closed e.NewImage#3 as range 2
  //DEBUG: e.TrivialGCG#1: 5
  //DEBUG: e.Image#1: 9
  //DEBUG: e.FirstGroup#1: 13
  //DEBUG: e.NextSentence#1: 17
  //DEBUG: e.Sentences#1: 21
  //DEBUG: e.NewImage#3: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoFindDivision$1:1/4 AsIs: (/7 AsIs: e.TrivialGCG#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.Image#1/9 AsIs: )/12 AsIs: (/15 AsIs: e.FirstGroup#1/13 AsIs: )/16 AsIs: (/19 AsIs: e.NextSentence#1/17 AsIs: )/20 AsIs: (/23 AsIs: e.Sentences#1/21 AsIs: )/24 AsIs: e.NewImage#3/2 AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_gen_DoFindDivision_S1B1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[23], context[24] );
  refalrts::link_brackets( context[19], context[20] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoFindDivision_S1A2("DoFindDivision$1=2", COOKIE1_, COOKIE2_, func_gen_DoFindDivision_S1A2);


static refalrts::FnResult func_gen_DoFindDivision_S1A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 38 elems
  refalrts::Iter context[38];
  refalrts::zeros( context, 38 );
  // </0 & DoFindDivision$1=1/4 (/7 e.NextSentence#1/5 )/8 (/11 e.TrivialGCG#1/9 )/12 (/15 e.Image#1/13 )/16 (/19 e.FirstGroup#1/17 )/20 (/23 e.Sentences#1/21 )/24 (/27 e.NextImage#2/25 )/28 e.NextSentence#1/29 >/1
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
  // closed e.NextSentence#1 as range 5
  if( ! refalrts::repeated_evar_left( vm, context[29], context[30], context[5], context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.TrivialGCG#1 as range 9
  // closed e.Image#1 as range 13
  // closed e.FirstGroup#1 as range 17
  // closed e.Sentences#1 as range 21
  // closed e.NextImage#2 as range 25
  //DEBUG: e.NextSentence#1: 5
  //DEBUG: e.TrivialGCG#1: 9
  //DEBUG: e.Image#1: 13
  //DEBUG: e.FirstGroup#1: 17
  //DEBUG: e.Sentences#1: 21
  //DEBUG: e.NextImage#2: 25

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} e.NextSentence#1/5 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </31 Tile{ HalfReuse: & DoFindDivision$1=2/8 AsIs: (/11 AsIs: e.TrivialGCG#1/9 AsIs: )/12 AsIs: (/15 AsIs: e.Image#1/13 AsIs: )/16 AsIs: (/19 AsIs: e.FirstGroup#1/17 AsIs: )/20 AsIs: (/23 } Tile{ AsIs: e.NextSentence#1/29 } )/32 (/33 Tile{ AsIs: e.Sentences#1/21 } )/34 Tile{ AsIs: </0 Reuse: & Subst-Generalization/4 AsIs: (/7 } e.Image#1/13/35 Tile{ AsIs: )/24 AsIs: (/27 AsIs: e.NextImage#2/25 AsIs: )/28 } >/37 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[31]);
  refalrts::alloc_close_bracket(vm, context[32]);
  refalrts::alloc_open_bracket(vm, context[33]);
  refalrts::alloc_close_bracket(vm, context[34]);
  refalrts::copy_evar(vm, context[35], context[36], context[13], context[14]);
  refalrts::alloc_close_call(vm, context[37]);
  refalrts::reinit_name(context[8], functions[efunc_gen_DoFindDivision_S1A2]);
  refalrts::update_name(context[4], functions[efunc_Substm_Generalization]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[31] );
  refalrts::push_stack( vm, context[37] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[27], context[28] );
  refalrts::link_brackets( context[7], context[24] );
  refalrts::link_brackets( context[33], context[34] );
  refalrts::link_brackets( context[23], context[32] );
  refalrts::link_brackets( context[19], context[20] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[37], context[37] );
  res = refalrts::splice_evar( res, context[24], context[28] );
  res = refalrts::splice_evar( res, context[35], context[36] );
  res = refalrts::splice_evar( res, context[0], context[7] );
  res = refalrts::splice_evar( res, context[34], context[34] );
  res = refalrts::splice_evar( res, context[21], context[22] );
  res = refalrts::splice_evar( res, context[32], context[33] );
  res = refalrts::splice_evar( res, context[29], context[30] );
  res = refalrts::splice_evar( res, context[8], context[23] );
  res = refalrts::splice_evar( res, context[31], context[31] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoFindDivision_S1A1("DoFindDivision$1=1", COOKIE1_, COOKIE2_, func_gen_DoFindDivision_S1A1);


static refalrts::FnResult func_DoFindDivision(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 36 elems
  refalrts::Iter context[36];
  refalrts::zeros( context, 36 );
  // </0 & DoFindDivision/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DoFindDivision/4 (/7 e.new#1/5 )/8 (/11 e.new#2/9 )/12 (/15 e.new#3/13 )/16 e.new#4/2 >/1
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
    // </0 & DoFindDivision/4 (/7 e.TrivialGCG#1/17 )/8 (/11 e.Image#1/19 )/12 (/15 e.FirstGroup#1/21 )/16 (/27 e.NextSentence#1/25 )/28 e.Sentences#1/23 >/1
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
    // closed e.TrivialGCG#1 as range 17
    // closed e.Image#1 as range 19
    // closed e.FirstGroup#1 as range 21
    // closed e.NextSentence#1 as range 25
    // closed e.Sentences#1 as range 23
    //DEBUG: e.TrivialGCG#1: 17
    //DEBUG: e.Image#1: 19
    //DEBUG: e.FirstGroup#1: 21
    //DEBUG: e.NextSentence#1: 25
    //DEBUG: e.Sentences#1: 23

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 } & DoFindDivision$1=1/29 (/30 Tile{ AsIs: e.NextSentence#1/25 } Tile{ HalfReuse: )/4 AsIs: (/7 AsIs: e.TrivialGCG#1/17 AsIs: )/8 AsIs: (/11 AsIs: e.Image#1/19 AsIs: )/12 AsIs: (/15 AsIs: e.FirstGroup#1/21 AsIs: )/16 AsIs: (/27 } Tile{ AsIs: e.Sentences#1/23 } Tile{ AsIs: )/28 } </31 & ImagedSentence/32 e.NextSentence#1/25/33 >/35 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_name(vm, context[29], functions[efunc_gen_DoFindDivision_S1A1]);
    refalrts::alloc_open_bracket(vm, context[30]);
    refalrts::alloc_open_call(vm, context[31]);
    refalrts::alloc_name(vm, context[32], functions[efunc_ImagedSentence]);
    refalrts::copy_evar(vm, context[33], context[34], context[25], context[26]);
    refalrts::alloc_close_call(vm, context[35]);
    refalrts::reinit_close_bracket(context[4]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[35] );
    refalrts::push_stack( vm, context[31] );
    refalrts::link_brackets( context[27], context[28] );
    refalrts::link_brackets( context[15], context[16] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[30], context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[31], context[35] );
    res = refalrts::splice_evar( res, context[28], context[28] );
    res = refalrts::splice_evar( res, context[23], context[24] );
    res = refalrts::splice_evar( res, context[4], context[27] );
    res = refalrts::splice_evar( res, context[25], context[26] );
    res = refalrts::splice_evar( res, context[29], context[30] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoFindDivision/4 (/7 e.TrivialGCG#1/5 )/8 (/11 e.Image#1/9 )/12 (/15 e.FirstGroup#1/13 )/16 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.TrivialGCG#1 as range 5
  // closed e.Image#1 as range 9
  // closed e.FirstGroup#1 as range 13
  //DEBUG: e.TrivialGCG#1: 5
  //DEBUG: e.Image#1: 9
  //DEBUG: e.FirstGroup#1: 13

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} (/7 e.TrivialGCG#1/5 {REMOVED TILE} {REMOVED TILE} )/16 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: # ForAllSentences/0 HalfReuse: (/4 } Tile{ HalfReuse: </8 HalfReuse: & Subst-Collapse/11 AsIs: e.Image#1/9 HalfReuse: >/12 HalfReuse: )/15 } Tile{ AsIs: e.FirstGroup#1/13 } Tile{ ]] }
  refalrts::reinit_ident(context[0], identifiers[ident_ForAllSentences]);
  refalrts::reinit_open_bracket(context[4]);
  refalrts::reinit_open_call(context[8]);
  refalrts::reinit_name(context[11], functions[efunc_Substm_Collapse]);
  refalrts::reinit_close_call(context[12]);
  refalrts::reinit_close_bracket(context[15]);
  refalrts::link_brackets( context[4], context[15] );
  refalrts::push_stack( vm, context[12] );
  refalrts::push_stack( vm, context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[8], context[15] );
  refalrts::splice_to_freelist_open( vm, context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_DoFindDivision("DoFindDivision", COOKIE1_, COOKIE2_, func_DoFindDivision);


static refalrts::FnResult func_gen_NarrowSentenceSubstitutions_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 23 elems
  refalrts::Iter context[23];
  refalrts::zeros( context, 23 );
  // </0 & NarrowSentenceSubstitutions\1/4 (/7 e.NewGCG-Subst#1/5 )/8 (/11 (/15 e.Substs#2/13 )/16 e.Conditions#2/9 (/19 e.Result#2/17 )/20 )/12 >/1
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
  context[19] = refalrts::brackets_right( context[17], context[18], context[9], context[10] );
  if( ! context[19] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[19], context[20]);
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.NewGCG-Subst#1 as range 5
  // closed e.Substs#2 as range 13
  // closed e.Conditions#2 as range 9
  // closed e.Result#2 as range 17
  //DEBUG: e.NewGCG-Subst#1: 5
  //DEBUG: e.Substs#2: 13
  //DEBUG: e.Conditions#2: 9
  //DEBUG: e.Result#2: 17

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/15 } (/21 Tile{ AsIs: </0 Reuse: & NarrowSubst/4 AsIs: (/7 AsIs: e.NewGCG-Subst#1/5 AsIs: )/8 AsIs: (/11 } Tile{ AsIs: e.Substs#2/13 } )/22 Tile{ AsIs: >/1 } Tile{ AsIs: )/16 AsIs: e.Conditions#2/9 AsIs: (/19 AsIs: e.Result#2/17 AsIs: )/20 AsIs: )/12 } Tile{ ]] }
  refalrts::alloc_open_bracket(vm, context[21]);
  refalrts::alloc_close_bracket(vm, context[22]);
  refalrts::update_name(context[4], functions[efunc_NarrowSubst]);
  refalrts::link_brackets( context[15], context[12] );
  refalrts::link_brackets( context[19], context[20] );
  refalrts::link_brackets( context[21], context[16] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[11], context[22] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[16], context[12] );
  res = refalrts::splice_evar( res, context[1], context[1] );
  res = refalrts::splice_evar( res, context[22], context[22] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[0], context[11] );
  res = refalrts::splice_evar( res, context[21], context[21] );
  res = refalrts::splice_evar( res, context[15], context[15] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_NarrowSentenceSubstitutions_L1("NarrowSentenceSubstitutions\\1", COOKIE1_, COOKIE2_, func_gen_NarrowSentenceSubstitutions_L1);


static refalrts::FnResult func_NarrowSentenceSubstitutions(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  // </0 & NarrowSentenceSubstitutions/4 (/7 e.NewGCG-Subst#1/5 )/8 e.Sentences#1/2 >/1
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
  // closed e.NewGCG-Subst#1 as range 5
  // closed e.Sentences#1 as range 2
  //DEBUG: e.NewGCG-Subst#1: 5
  //DEBUG: e.Sentences#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: </4 HalfReuse: & Map@2/7 AsIs: e.NewGCG-Subst#1/5 HalfReuse: (/8 AsIs: e.Sentences#1/2 HalfReuse: )/1 } Tile{ HalfReuse: >/0 } Tile{ ]] }
  refalrts::reinit_open_call(context[4]);
  refalrts::reinit_name(context[7], functions[efunc_gen_Map_Z2]);
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
  // </0 & NarrowSubst$1=1/4 (/7 e.GCG-Substs-B#1/5 )/8 (/11 e.GCG-Substs-E#1/9 )/12 (/15 e.SentenceSubsts#1/13 )/16 # Clear/17 e.NarrowSubsts#2/2 >/1
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
  // closed e.GCG-Substs-B#1 as range 5
  // closed e.GCG-Substs-E#1 as range 9
  // closed e.SentenceSubsts#1 as range 13
  // closed e.NarrowSubsts#2 as range 2
  //DEBUG: e.GCG-Substs-B#1: 5
  //DEBUG: e.GCG-Substs-E#1: 9
  //DEBUG: e.SentenceSubsts#1: 13
  //DEBUG: e.NarrowSubsts#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} )/8 (/11 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.NarrowSubsts#2/2 } Tile{ AsIs: </0 Reuse: & NarrowSubst/4 AsIs: (/7 } Tile{ AsIs: e.GCG-Substs-B#1/5 } Tile{ AsIs: e.GCG-Substs-E#1/9 } Tile{ AsIs: )/12 AsIs: (/15 AsIs: e.SentenceSubsts#1/13 AsIs: )/16 HalfReuse: >/17 } Tile{ ]] }
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
  // </0 & NarrowSubst/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & NarrowSubst/4 (/7 e.new#1/5 )/8 (/11 e.new#2/9 )/12 >/1
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
    // </0 & NarrowSubst/4 (/7 e.GCG-Substs-B#1/26 (/32 e.GCG#1/30 ':'/38 (/36 e.Var#1/39 )/37 )/33 e.GCG-Substs-E#1/28 )/8 (/11 (/19 e.Pattern#1/17 ':'/25 (/23 e.Var#1/21 )/24 )/20 e.SentenceSubsts#1/15 )/12 >/1
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
    // closed e.Pattern#1 as range 17
    // closed e.Var#1 as range 21
    // closed e.SentenceSubsts#1 as range 15
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
      // closed e.GCG#1 as range 30
      // closed e.GCG-Substs-E#1 as range 28
      //DEBUG: e.Pattern#1: 17
      //DEBUG: e.Var#1: 21
      //DEBUG: e.SentenceSubsts#1: 15
      //DEBUG: e.GCG-Substs-B#1: 26
      //DEBUG: e.GCG#1: 30
      //DEBUG: e.GCG-Substs-E#1: 28

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} ':'/38 {REMOVED TILE} e.Var#1/39 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.Var#1/21 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & NarrowSubst$1=1/4 AsIs: (/7 AsIs: e.GCG-Substs-B#1/26 HalfReuse: )/32 } Tile{ AsIs: (/36 } Tile{ AsIs: e.GCG-Substs-E#1/28 } Tile{ AsIs: )/24 HalfReuse: (/20 AsIs: e.SentenceSubsts#1/15 AsIs: )/12 } Tile{ HalfReuse: </8 HalfReuse: & GenericMatch/11 AsIs: (/19 AsIs: e.Pattern#1/17 HalfReuse: )/25 AsIs: (/23 } Tile{ AsIs: e.GCG#1/30 } Tile{ AsIs: )/37 HalfReuse: >/33 } Tile{ AsIs: >/1 ]] }
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
      res = refalrts::splice_evar( res, context[36], context[36] );
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


static refalrts::FnResult func_gen_Substm_BuildImage_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  // </0 & Subst-BuildImage\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Subst-BuildImage\1/4 (/7 e.new#1/5 ':'/13 (/11 s.new#2/14 e.new#3/9 )/12 )/8 >/1
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
  context[13] = refalrts::char_right( ':', context[5], context[6] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#1 as range 5
  if( ! refalrts::svar_left( context[14], context[9], context[10] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#3 as range 9
  do {
    // </0 & Subst-BuildImage\1/4 (/7 e.Value#2/15 ':'/13 (/11 'e'/14 e.Index#2/17 )/12 )/8 >/1
    context[15] = context[5];
    context[16] = context[6];
    context[17] = context[9];
    context[18] = context[10];
    if( ! refalrts::char_term( 'e', context[14] ) )
      continue;
    // closed e.Value#2 as range 15
    // closed e.Index#2 as range 17
    //DEBUG: e.Value#2: 15
    //DEBUG: e.Index#2: 17

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: </4 HalfReuse: & BuildImage/7 } Tile{ AsIs: e.Value#2/15 } Tile{ AsIs: >/1 } Tile{ AsIs: ':'/13 AsIs: (/11 AsIs: 'e'/14 AsIs: e.Index#2/17 AsIs: )/12 AsIs: )/8 } Tile{ ]] }
    refalrts::reinit_open_bracket(context[0]);
    refalrts::reinit_open_call(context[4]);
    refalrts::reinit_name(context[7], functions[efunc_BuildImage]);
    refalrts::link_brackets( context[0], context[8] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[13], context[8] );
    res = refalrts::splice_evar( res, context[1], context[1] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Subst-BuildImage\1/4 (/7 t.Value#2/15 ':'/13 (/11 s.ST#2/14 e.Index#2/9 )/12 )/8 >/1
  // closed e.Index#2 as range 9
  context[16] = refalrts::tvar_left( context[15], context[5], context[6] );
  if( ! context[16] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: s.ST#2: 14
  //DEBUG: e.Index#2: 9
  //DEBUG: t.Value#2: 15

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: </4 HalfReuse: & BuildImage-Term/7 AsIs: t.Value#2/15 } Tile{ AsIs: >/1 } Tile{ AsIs: ':'/13 AsIs: (/11 AsIs: s.ST#2/14 AsIs: e.Index#2/9 AsIs: )/12 AsIs: )/8 } Tile{ ]] }
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_open_call(context[4]);
  refalrts::reinit_name(context[7], functions[efunc_BuildImagem_Term]);
  refalrts::link_brackets( context[0], context[8] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[4] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[13], context[8] );
  res = refalrts::splice_evar( res, context[1], context[1] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Substm_BuildImage_L1("Subst-BuildImage\\1", COOKIE1_, COOKIE2_, func_gen_Substm_BuildImage_L1);


static refalrts::FnResult func_Substm_BuildImage(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 5 elems
  refalrts::Iter context[5];
  refalrts::zeros( context, 5 );
  // </0 & Subst-BuildImage/4 e.Substitution#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Substitution#1 as range 2
  //DEBUG: e.Substitution#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map@3/4 AsIs: e.Substitution#1/2 AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_gen_Map_Z3]);
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
  // </0 & Subst-Generalization/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Subst-Generalization/4 (/7 e.new#1/5 )/8 (/11 e.new#2/9 )/12 >/1
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
    // </0 & Subst-Generalization/4 (/7 (/19 t.new#3/37 ':'/29 (/27 s.new#4/35 e.new#5/25 )/28 )/20 e.new#6/13 )/8 (/11 (/23 t.new#7/39 ':'/34 (/32 s.new#8/36 e.new#9/30 )/33 )/24 e.new#10/15 )/12 >/1
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
    // closed e.new#6 as range 13
    // closed e.new#10 as range 15
    if( ! refalrts::svar_left( context[35], context[25], context[26] ) )
      continue;
    // closed e.new#5 as range 25
    if( ! refalrts::svar_left( context[36], context[30], context[31] ) )
      continue;
    // closed e.new#9 as range 30
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
      // </0 & Subst-Generalization/4 (/7 (/19 t.Image1#1/37 ':'/29 (/27 'e'/35 e.Index#1/41 )/28 )/20 e.Images1#1/43 )/8 (/11 (/23 t.Image2#1/39 ':'/34 (/32 'e'/36 e.Index#1/49 )/33 )/24 e.Images2#1/47 )/12 >/1
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
      // closed e.Index#1 as range 41
      if( ! refalrts::repeated_evar_left( vm, context[49], context[50], context[41], context[42], context[45], context[46] ) )
        continue;
      if( ! refalrts::empty_seq( context[45], context[46] ) )
        continue;
      // closed e.Images1#1 as range 43
      // closed e.Images2#1 as range 47
      //DEBUG: t.Image1#1: 37
      //DEBUG: t.Image2#1: 39
      //DEBUG: e.Index#1: 41
      //DEBUG: e.Images1#1: 43
      //DEBUG: e.Images2#1: 47

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} (/19 {REMOVED TILE} ':'/29 (/27 {REMOVED TILE} e.Index#1/41 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: </4 HalfReuse: & Generalization/7 } Tile{ AsIs: t.Image1#1/37 } Tile{ AsIs: t.Image2#1/39 } Tile{ HalfReuse: >/35 } Tile{ AsIs: ':'/34 AsIs: (/32 AsIs: 'e'/36 AsIs: e.Index#1/49 AsIs: )/33 AsIs: )/24 } Tile{ HalfReuse: </23 } Tile{ HalfReuse: & Subst-Generalization/28 HalfReuse: (/20 AsIs: e.Images1#1/43 AsIs: )/8 AsIs: (/11 } Tile{ AsIs: e.Images2#1/47 } Tile{ AsIs: )/12 AsIs: >/1 ]] }
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
      res = refalrts::splice_evar( res, context[23], context[23] );
      res = refalrts::splice_evar( res, context[34], context[24] );
      res = refalrts::splice_evar( res, context[35], context[35] );
      res = refalrts::splice_evar( res, context[39], context[40] );
      res = refalrts::splice_evar( res, context[37], context[38] );
      refalrts::splice_to_freelist_open( vm, context[7], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Subst-Generalization/4 (/7 (/19 t.Image1#1/37 ':'/29 (/27 't'/35 e.Index#1/41 )/28 )/20 e.Images1#1/43 )/8 (/11 (/23 t.Image2#1/39 ':'/34 (/32 't'/36 e.Index#1/49 )/33 )/24 e.Images2#1/47 )/12 >/1
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
      // closed e.Index#1 as range 41
      if( ! refalrts::repeated_evar_left( vm, context[49], context[50], context[41], context[42], context[45], context[46] ) )
        continue;
      if( ! refalrts::empty_seq( context[45], context[46] ) )
        continue;
      // closed e.Images1#1 as range 43
      // closed e.Images2#1 as range 47
      //DEBUG: t.Image1#1: 37
      //DEBUG: t.Image2#1: 39
      //DEBUG: e.Index#1: 41
      //DEBUG: e.Images1#1: 43
      //DEBUG: e.Images2#1: 47

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} (/19 {REMOVED TILE} ':'/29 (/27 {REMOVED TILE} e.Index#1/41 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: </4 HalfReuse: & Generalization-Term/7 } Tile{ AsIs: t.Image1#1/37 } Tile{ AsIs: t.Image2#1/39 } Tile{ HalfReuse: >/35 } Tile{ AsIs: ':'/34 AsIs: (/32 AsIs: 't'/36 AsIs: e.Index#1/49 AsIs: )/33 AsIs: )/24 } Tile{ HalfReuse: </23 } Tile{ HalfReuse: & Subst-Generalization/28 HalfReuse: (/20 AsIs: e.Images1#1/43 AsIs: )/8 AsIs: (/11 } Tile{ AsIs: e.Images2#1/47 } Tile{ AsIs: )/12 AsIs: >/1 ]] }
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
      res = refalrts::splice_evar( res, context[23], context[23] );
      res = refalrts::splice_evar( res, context[34], context[24] );
      res = refalrts::splice_evar( res, context[35], context[35] );
      res = refalrts::splice_evar( res, context[39], context[40] );
      res = refalrts::splice_evar( res, context[37], context[38] );
      refalrts::splice_to_freelist_open( vm, context[7], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Subst-Generalization/4 (/7 (/19 t.new#12/37 ':'/29 (/27 's'/35 e.new#13/41 )/28 )/20 e.new#11/43 )/8 (/11 (/23 t.new#15/39 ':'/34 (/32 's'/36 e.new#16/45 )/33 )/24 e.new#14/47 )/12 >/1
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
    // closed e.new#13 as range 41
    // closed e.new#11 as range 43
    // closed e.new#16 as range 45
    // closed e.new#14 as range 47
    do {
      // </0 & Subst-Generalization/4 (/7 (/19 t.Image#1/37 ':'/29 (/27 's'/35 e.Index#1/49 )/28 )/20 e.Images1#1/51 )/8 (/11 (/23 t.Image#1/39 ':'/34 (/32 's'/36 e.Index#1/57 )/33 )/24 e.Images2#1/55 )/12 >/1
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
      // closed e.Index#1 as range 49
      if( ! refalrts::repeated_evar_left( vm, context[57], context[58], context[49], context[50], context[53], context[54] ) )
        continue;
      if( ! refalrts::empty_seq( context[53], context[54] ) )
        continue;
      // closed e.Images1#1 as range 51
      // closed e.Images2#1 as range 55
      //DEBUG: t.Image#1: 37
      //DEBUG: e.Index#1: 49
      //DEBUG: e.Images1#1: 51
      //DEBUG: e.Images2#1: 55

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} & Subst-Generalization/4 (/7 (/19 t.Image#1/37 ':'/29 (/27 's'/35 e.Index#1/49 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/23 AsIs: t.Image#1/39 AsIs: ':'/34 AsIs: (/32 AsIs: 's'/36 AsIs: e.Index#1/57 AsIs: )/33 AsIs: )/24 } Tile{ AsIs: </0 } Tile{ HalfReuse: & Subst-Generalization/28 HalfReuse: (/20 AsIs: e.Images1#1/51 AsIs: )/8 AsIs: (/11 } Tile{ AsIs: e.Images2#1/55 } Tile{ AsIs: )/12 AsIs: >/1 ]] }
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
      res = refalrts::splice_evar( res, context[0], context[0] );
      res = refalrts::splice_evar( res, context[23], context[24] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Subst-Generalization/4 (/7 (/19 t.Image1#1/37 ':'/29 (/27 's'/35 e.Index#1/49 )/28 )/20 e.Images1#1/51 )/8 (/11 (/23 t.Image2#1/39 ':'/34 (/32 's'/36 e.Index#1/57 )/33 )/24 e.Images2#1/55 )/12 >/1
    context[49] = context[41];
    context[50] = context[42];
    context[51] = context[43];
    context[52] = context[44];
    context[53] = context[45];
    context[54] = context[46];
    context[55] = context[47];
    context[56] = context[48];
    // closed e.Index#1 as range 49
    if( ! refalrts::repeated_evar_left( vm, context[57], context[58], context[49], context[50], context[53], context[54] ) )
      continue;
    if( ! refalrts::empty_seq( context[53], context[54] ) )
      continue;
    // closed e.Images1#1 as range 51
    // closed e.Images2#1 as range 55
    //DEBUG: t.Image1#1: 37
    //DEBUG: t.Image2#1: 39
    //DEBUG: e.Index#1: 49
    //DEBUG: e.Images1#1: 51
    //DEBUG: e.Images2#1: 55

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} t.Image1#1/37 ':'/29 (/27 {REMOVED TILE} e.Index#1/49 {REMOVED TILE} {REMOVED TILE} t.Image2#1/39 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: (/4 HalfReuse: # TkVariable/7 HalfReuse: 's'/19 } Tile{ HalfReuse: )/23 } Tile{ AsIs: ':'/34 AsIs: (/32 AsIs: 's'/36 AsIs: e.Index#1/57 AsIs: )/33 AsIs: )/24 } Tile{ HalfReuse: </35 } Tile{ HalfReuse: & Subst-Generalization/28 HalfReuse: (/20 AsIs: e.Images1#1/51 AsIs: )/8 AsIs: (/11 } Tile{ AsIs: e.Images2#1/55 } Tile{ AsIs: )/12 AsIs: >/1 ]] }
    refalrts::reinit_open_bracket(context[0]);
    refalrts::reinit_open_bracket(context[4]);
    refalrts::reinit_ident(context[7], identifiers[ident_TkVariable]);
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
    res = refalrts::splice_evar( res, context[35], context[35] );
    res = refalrts::splice_evar( res, context[34], context[24] );
    res = refalrts::splice_evar( res, context[23], context[23] );
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


static refalrts::FnResult func_gen_Substm_Collapse_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  // </0 & Subst-Collapse\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Subst-Collapse\1/4 (/7 t.new#1/15 ':'/13 (/11 s.new#2/14 e.new#3/9 )/12 )/8 >/1
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
  context[13] = refalrts::char_right( ':', context[5], context[6] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[14], context[9], context[10] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#3 as range 9
  context[16] = refalrts::tvar_left( context[15], context[5], context[6] );
  if( ! context[16] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & Subst-Collapse\1/4 (/7 t.Image#2/15 ':'/13 (/11 'e'/14 e.Index#2/17 )/12 )/8 >/1
    context[17] = context[9];
    context[18] = context[10];
    if( ! refalrts::char_term( 'e', context[14] ) )
      continue;
    // closed e.Index#2 as range 17
    //DEBUG: t.Image#2: 15
    //DEBUG: e.Index#2: 17

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: </4 HalfReuse: & Collapse/7 AsIs: t.Image#2/15 } Tile{ AsIs: >/1 } Tile{ AsIs: ':'/13 AsIs: (/11 AsIs: 'e'/14 AsIs: e.Index#2/17 AsIs: )/12 AsIs: )/8 } Tile{ ]] }
    refalrts::reinit_open_bracket(context[0]);
    refalrts::reinit_open_call(context[4]);
    refalrts::reinit_name(context[7], functions[efunc_Collapse]);
    refalrts::link_brackets( context[0], context[8] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[13], context[8] );
    res = refalrts::splice_evar( res, context[1], context[1] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Subst-Collapse\1/4 (/7 t.Image#2/15 ':'/13 (/11 't'/14 e.Index#2/17 )/12 )/8 >/1
    context[17] = context[9];
    context[18] = context[10];
    if( ! refalrts::char_term( 't', context[14] ) )
      continue;
    // closed e.Index#2 as range 17
    //DEBUG: t.Image#2: 15
    //DEBUG: e.Index#2: 17

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: </4 HalfReuse: & Collapse-Term/7 AsIs: t.Image#2/15 } Tile{ AsIs: >/1 } Tile{ AsIs: ':'/13 AsIs: (/11 AsIs: 't'/14 AsIs: e.Index#2/17 AsIs: )/12 AsIs: )/8 } Tile{ ]] }
    refalrts::reinit_open_bracket(context[0]);
    refalrts::reinit_open_call(context[4]);
    refalrts::reinit_name(context[7], functions[efunc_Collapsem_Term]);
    refalrts::link_brackets( context[0], context[8] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[13], context[8] );
    res = refalrts::splice_evar( res, context[1], context[1] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Subst-Collapse\1/4 (/7 t.Image#2/15 ':'/13 (/11 's'/14 e.Index#2/9 )/12 )/8 >/1
  if( ! refalrts::char_term( 's', context[14] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Index#2 as range 9
  //DEBUG: t.Image#2: 15
  //DEBUG: e.Index#2: 9

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Subst-Collapse\1/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: t.Image#2/15 AsIs: ':'/13 AsIs: (/11 AsIs: 's'/14 AsIs: e.Index#2/9 AsIs: )/12 AsIs: )/8 } Tile{ ]] }
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Substm_Collapse_L1("Subst-Collapse\\1", COOKIE1_, COOKIE2_, func_gen_Substm_Collapse_L1);


static refalrts::FnResult func_Substm_Collapse(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 5 elems
  refalrts::Iter context[5];
  refalrts::zeros( context, 5 );
  // </0 & Subst-Collapse/4 e.Substitution#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Substitution#1 as range 2
  //DEBUG: e.Substitution#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map@4/4 AsIs: e.Substitution#1/2 AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_gen_Map_Z4]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Substm_Collapse("Subst-Collapse", COOKIE1_, COOKIE2_, func_Substm_Collapse);


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


static refalrts::FnResult func_gen_Map_Z1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 36 elems
  refalrts::Iter context[36];
  refalrts::zeros( context, 36 );
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
      // </0 & Map@1/4 (/7 t.new#3/19 ':'/17 (/15 s.new#4/18 e.new#5/13 )/16 )/8 e.new#6/9 >/1
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
      // closed e.new#6 as range 9
      if( ! refalrts::svar_left( context[18], context[13], context[14] ) )
        continue;
      // closed e.new#5 as range 13
      context[20] = refalrts::tvar_left( context[19], context[11], context[12] );
      if( ! context[20] )
        continue;
      if( ! refalrts::empty_seq( context[11], context[12] ) )
        continue;
      do {
        // </0 & Map@1/4 (/7 t.#0/19 ':'/17 (/15 'e'/18 e.4#0/21 )/16 )/8 e.Tail#1/23 >/1
        context[21] = context[13];
        context[22] = context[14];
        context[23] = context[9];
        context[24] = context[10];
        if( ! refalrts::char_term( 'e', context[18] ) )
          continue;
        // closed e.4#0 as range 21
        // closed e.Tail#1 as range 23
        //DEBUG: t.#0: 19
        //DEBUG: e.4#0: 21
        //DEBUG: e.Tail#1: 23

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} t.#0/19 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: (/4 HalfReuse: # MN/7 } ':'/25 0/26 ','/27 (/28 )/29 ','/30 (/31 )/32 )/33 Tile{ AsIs: ':'/17 AsIs: (/15 AsIs: 'e'/18 AsIs: e.4#0/21 AsIs: )/16 AsIs: )/8 } </34 & Map@1/35 Tile{ AsIs: e.Tail#1/23 } Tile{ AsIs: >/1 ]] }
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
        refalrts::alloc_name(vm, context[35], functions[efunc_gen_Map_Z1]);
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

      // </0 & Map@1/4 (/7 t.#0/19 ':'/17 (/15 s.ST#2/18 e.4#0/21 )/16 )/8 e.Tail#1/23 >/1
      context[21] = context[13];
      context[22] = context[14];
      context[23] = context[9];
      context[24] = context[10];
      // closed e.4#0 as range 21
      // closed e.Tail#1 as range 23
      //DEBUG: t.#0: 19
      //DEBUG: s.ST#2: 18
      //DEBUG: e.4#0: 21
      //DEBUG: e.Tail#1: 23

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} t.#0/19 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: (/4 HalfReuse: # TkVariable/7 } s.ST#2/18/25 )/26 Tile{ AsIs: ':'/17 AsIs: (/15 AsIs: s.ST#2/18 AsIs: e.4#0/21 AsIs: )/16 AsIs: )/8 } </27 & Map@1/28 Tile{ AsIs: e.Tail#1/23 } Tile{ AsIs: >/1 ]] }
      refalrts::copy_stvar(vm, context[25], context[18]);
      refalrts::alloc_close_bracket(vm, context[26]);
      refalrts::alloc_open_call(vm, context[27]);
      refalrts::alloc_name(vm, context[28], functions[efunc_gen_Map_Z1]);
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_open_bracket(context[4]);
      refalrts::reinit_ident(context[7], identifiers[ident_TkVariable]);
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

    // </0 & Map@1/4 t.Next#1/7 e.Tail#1/9 >/1
    context[9] = context[5];
    context[10] = context[6];
    // closed e.Tail#1 as range 9
    //DEBUG: t.Next#1: 7
    //DEBUG: e.Tail#1: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & MakeTrivialSubstImage\1*2/4 AsIs: t.Next#1/7 } >/11 </12 & Map@1/13 Tile{ AsIs: e.Tail#1/9 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_close_call(vm, context[11]);
    refalrts::alloc_open_call(vm, context[12]);
    refalrts::alloc_name(vm, context[13], functions[efunc_gen_Map_Z1]);
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
  // issue here memory for vars with 38 elems
  refalrts::Iter context[38];
  refalrts::zeros( context, 38 );
  // </0 & Map@2/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Map@2/4 e.new#1/2 (/7 e.new#2/5 )/8 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 2
  // closed e.new#2 as range 5
  do {
    // </0 & Map@2/4 e.new#3/9 (/7 t.new#4/13 e.new#5/11 )/8 >/1
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
      // </0 & Map@2/4 e.NewGCG-Subst#1/15 (/7 (/13 (/23 e.1#0/21 )/24 e.2#0/19 (/27 e.3#0/25 )/28 )/14 e.Tail#1/17 )/8 >/1
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
      // closed e.NewGCG-Subst#1 as range 15
      // closed e.1#0 as range 21
      // closed e.2#0 as range 19
      // closed e.3#0 as range 25
      // closed e.Tail#1 as range 17
      //DEBUG: e.NewGCG-Subst#1: 15
      //DEBUG: e.1#0: 21
      //DEBUG: e.2#0: 19
      //DEBUG: e.3#0: 25
      //DEBUG: e.Tail#1: 17

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/13 AsIs: (/23 } </29 & NarrowSubst/30 (/31 e.NewGCG-Subst#1/15/32 )/34 (/35 Tile{ AsIs: e.1#0/21 } )/36 >/37 Tile{ AsIs: )/24 AsIs: e.2#0/19 AsIs: (/27 AsIs: e.3#0/25 AsIs: )/28 AsIs: )/14 } Tile{ AsIs: </0 AsIs: & Map@2/4 AsIs: e.NewGCG-Subst#1/15 AsIs: (/7 } Tile{ AsIs: e.Tail#1/17 } Tile{ AsIs: )/8 AsIs: >/1 ]] }
      refalrts::alloc_open_call(vm, context[29]);
      refalrts::alloc_name(vm, context[30], functions[efunc_NarrowSubst]);
      refalrts::alloc_open_bracket(vm, context[31]);
      refalrts::copy_evar(vm, context[32], context[33], context[15], context[16]);
      refalrts::alloc_close_bracket(vm, context[34]);
      refalrts::alloc_open_bracket(vm, context[35]);
      refalrts::alloc_close_bracket(vm, context[36]);
      refalrts::alloc_close_call(vm, context[37]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::link_brackets( context[13], context[14] );
      refalrts::link_brackets( context[27], context[28] );
      refalrts::link_brackets( context[23], context[24] );
      refalrts::push_stack( vm, context[37] );
      refalrts::push_stack( vm, context[29] );
      refalrts::link_brackets( context[35], context[36] );
      refalrts::link_brackets( context[31], context[34] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[17], context[18] );
      res = refalrts::splice_evar( res, context[0], context[7] );
      res = refalrts::splice_evar( res, context[24], context[14] );
      res = refalrts::splice_evar( res, context[36], context[37] );
      res = refalrts::splice_evar( res, context[21], context[22] );
      res = refalrts::splice_evar( res, context[29], context[35] );
      res = refalrts::splice_evar( res, context[13], context[23] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Map@2/4 e.NewGCG-Subst#1/15 (/7 t.Next#1/13 e.Tail#1/17 )/8 >/1
    context[15] = context[9];
    context[16] = context[10];
    context[17] = context[11];
    context[18] = context[12];
    // closed e.NewGCG-Subst#1 as range 15
    // closed e.Tail#1 as range 17
    //DEBUG: t.Next#1: 13
    //DEBUG: e.NewGCG-Subst#1: 15
    //DEBUG: e.Tail#1: 17

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </19 & NarrowSentenceSubstitutions\1*1/20 (/21 e.NewGCG-Subst#1/15/22 )/24 Tile{ AsIs: t.Next#1/13 } >/25 Tile{ AsIs: </0 AsIs: & Map@2/4 AsIs: e.NewGCG-Subst#1/15 AsIs: (/7 } Tile{ AsIs: e.Tail#1/17 } Tile{ AsIs: )/8 AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[19]);
    refalrts::alloc_name(vm, context[20], functions[efunc_gen_NarrowSentenceSubstitutions_L1D1]);
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

  // </0 & Map@2/4 e.NewGCG-Subst#1/2 (/7 )/8 >/1
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.NewGCG-Subst#1 as range 2
  //DEBUG: e.NewGCG-Subst#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Map@2/4 e.NewGCG-Subst#1/2 (/7 )/8 >/1 {REMOVED TILE}
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
  // issue here memory for vars with 30 elems
  refalrts::Iter context[30];
  refalrts::zeros( context, 30 );
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
      // </0 & Map@3/4 (/7 e.new#3/11 ':'/17 (/15 s.new#4/18 e.new#5/13 )/16 )/8 e.new#6/9 >/1
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
      // closed e.new#3 as range 11
      // closed e.new#6 as range 9
      if( ! refalrts::svar_left( context[18], context[13], context[14] ) )
        continue;
      // closed e.new#5 as range 13
      do {
        // </0 & Map@3/4 (/7 e.2#0/19 ':'/17 (/15 'e'/18 e.3#0/21 )/16 )/8 e.Tail#1/23 >/1
        context[19] = context[11];
        context[20] = context[12];
        context[21] = context[13];
        context[22] = context[14];
        context[23] = context[9];
        context[24] = context[10];
        if( ! refalrts::char_term( 'e', context[18] ) )
          continue;
        // closed e.2#0 as range 19
        // closed e.3#0 as range 21
        // closed e.Tail#1 as range 23
        //DEBUG: e.2#0: 19
        //DEBUG: e.3#0: 21
        //DEBUG: e.Tail#1: 23

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: </4 HalfReuse: & BuildImage/7 } Tile{ AsIs: e.2#0/19 } >/25 Tile{ AsIs: ':'/17 AsIs: (/15 AsIs: 'e'/18 AsIs: e.3#0/21 AsIs: )/16 AsIs: )/8 } </26 & Map@3/27 Tile{ AsIs: e.Tail#1/23 } Tile{ AsIs: >/1 ]] }
        refalrts::alloc_close_call(vm, context[25]);
        refalrts::alloc_open_call(vm, context[26]);
        refalrts::alloc_name(vm, context[27], functions[efunc_gen_Map_Z3]);
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
        res = refalrts::splice_evar( res, context[25], context[25] );
        res = refalrts::splice_evar( res, context[19], context[20] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & Map@3/4 (/7 t.#0/25 ':'/17 (/15 s.ST#2/18 e.4#0/21 )/16 )/8 e.Tail#1/23 >/1
      context[19] = context[11];
      context[20] = context[12];
      context[21] = context[13];
      context[22] = context[14];
      context[23] = context[9];
      context[24] = context[10];
      // closed e.4#0 as range 21
      // closed e.Tail#1 as range 23
      context[26] = refalrts::tvar_left( context[25], context[19], context[20] );
      if( ! context[26] )
        continue;
      if( ! refalrts::empty_seq( context[19], context[20] ) )
        continue;
      //DEBUG: s.ST#2: 18
      //DEBUG: e.4#0: 21
      //DEBUG: e.Tail#1: 23
      //DEBUG: t.#0: 25

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: </4 HalfReuse: & BuildImage-Term/7 AsIs: t.#0/25 } >/27 Tile{ AsIs: ':'/17 AsIs: (/15 AsIs: s.ST#2/18 AsIs: e.4#0/21 AsIs: )/16 AsIs: )/8 } </28 & Map@3/29 Tile{ AsIs: e.Tail#1/23 } Tile{ AsIs: >/1 ]] }
      refalrts::alloc_close_call(vm, context[27]);
      refalrts::alloc_open_call(vm, context[28]);
      refalrts::alloc_name(vm, context[29], functions[efunc_gen_Map_Z3]);
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
      res = refalrts::splice_evar( res, context[27], context[27] );
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
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Subst-BuildImage\1*2/4 AsIs: t.Next#1/7 } >/11 </12 & Map@3/13 Tile{ AsIs: e.Tail#1/9 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_close_call(vm, context[11]);
    refalrts::alloc_open_call(vm, context[12]);
    refalrts::alloc_name(vm, context[13], functions[efunc_gen_Map_Z3]);
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


static refalrts::FnResult func_gen_Map_Z4(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 28 elems
  refalrts::Iter context[28];
  refalrts::zeros( context, 28 );
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
      // </0 & Map@4/4 (/7 t.new#3/19 ':'/17 (/15 s.new#4/18 e.new#5/13 )/16 )/8 e.new#6/9 >/1
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
      // closed e.new#6 as range 9
      if( ! refalrts::svar_left( context[18], context[13], context[14] ) )
        continue;
      // closed e.new#5 as range 13
      context[20] = refalrts::tvar_left( context[19], context[11], context[12] );
      if( ! context[20] )
        continue;
      if( ! refalrts::empty_seq( context[11], context[12] ) )
        continue;
      do {
        // </0 & Map@4/4 (/7 t.#0/19 ':'/17 (/15 'e'/18 e.4#0/21 )/16 )/8 e.Tail#1/23 >/1
        context[21] = context[13];
        context[22] = context[14];
        context[23] = context[9];
        context[24] = context[10];
        if( ! refalrts::char_term( 'e', context[18] ) )
          continue;
        // closed e.4#0 as range 21
        // closed e.Tail#1 as range 23
        //DEBUG: t.#0: 19
        //DEBUG: e.4#0: 21
        //DEBUG: e.Tail#1: 23

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: </4 HalfReuse: & Collapse/7 AsIs: t.#0/19 } >/25 Tile{ AsIs: ':'/17 AsIs: (/15 AsIs: 'e'/18 AsIs: e.4#0/21 AsIs: )/16 AsIs: )/8 } </26 & Map@4/27 Tile{ AsIs: e.Tail#1/23 } Tile{ AsIs: >/1 ]] }
        refalrts::alloc_close_call(vm, context[25]);
        refalrts::alloc_open_call(vm, context[26]);
        refalrts::alloc_name(vm, context[27], functions[efunc_gen_Map_Z4]);
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
        res = refalrts::splice_evar( res, context[25], context[25] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & Map@4/4 (/7 t.#0/19 ':'/17 (/15 't'/18 e.4#0/21 )/16 )/8 e.Tail#1/23 >/1
        context[21] = context[13];
        context[22] = context[14];
        context[23] = context[9];
        context[24] = context[10];
        if( ! refalrts::char_term( 't', context[18] ) )
          continue;
        // closed e.4#0 as range 21
        // closed e.Tail#1 as range 23
        //DEBUG: t.#0: 19
        //DEBUG: e.4#0: 21
        //DEBUG: e.Tail#1: 23

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: </4 HalfReuse: & Collapse-Term/7 AsIs: t.#0/19 } >/25 Tile{ AsIs: ':'/17 AsIs: (/15 AsIs: 't'/18 AsIs: e.4#0/21 AsIs: )/16 AsIs: )/8 } </26 & Map@4/27 Tile{ AsIs: e.Tail#1/23 } Tile{ AsIs: >/1 ]] }
        refalrts::alloc_close_call(vm, context[25]);
        refalrts::alloc_open_call(vm, context[26]);
        refalrts::alloc_name(vm, context[27], functions[efunc_gen_Map_Z4]);
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
        res = refalrts::splice_evar( res, context[25], context[25] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & Map@4/4 (/7 t.#0/19 ':'/17 (/15 's'/18 e.4#0/21 )/16 )/8 e.Tail#1/23 >/1
      context[21] = context[13];
      context[22] = context[14];
      context[23] = context[9];
      context[24] = context[10];
      if( ! refalrts::char_term( 's', context[18] ) )
        continue;
      // closed e.4#0 as range 21
      // closed e.Tail#1 as range 23
      //DEBUG: t.#0: 19
      //DEBUG: e.4#0: 21
      //DEBUG: e.Tail#1: 23

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: t.#0/19 AsIs: ':'/17 AsIs: (/15 AsIs: 's'/18 AsIs: e.4#0/21 AsIs: )/16 AsIs: )/8 } Tile{ AsIs: </0 AsIs: & Map@4/4 } Tile{ AsIs: e.Tail#1/23 } Tile{ AsIs: >/1 ]] }
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

    // </0 & Map@4/4 t.Next#1/7 e.Tail#1/9 >/1
    context[9] = context[5];
    context[10] = context[6];
    // closed e.Tail#1 as range 9
    //DEBUG: t.Next#1: 7
    //DEBUG: e.Tail#1: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Subst-Collapse\1*3/4 AsIs: t.Next#1/7 } >/11 </12 & Map@4/13 Tile{ AsIs: e.Tail#1/9 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_close_call(vm, context[11]);
    refalrts::alloc_open_call(vm, context[12]);
    refalrts::alloc_name(vm, context[13], functions[efunc_gen_Map_Z4]);
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


static refalrts::FnResult func_gen_DoMapAccum_Z1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 44 elems
  refalrts::Iter context[44];
  refalrts::zeros( context, 44 );
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
      // </0 & DoMapAccum@1/4 s.new#8/9 t.new#9/15 e.new#10/17 (/7 e.new#11/19 )/8 >/1
      context[17] = context[11];
      context[18] = context[12];
      context[19] = context[13];
      context[20] = context[14];
      if( ! refalrts::svar_term( context[9], context[9] ) )
        continue;
      // closed e.new#10 as range 17
      // closed e.new#11 as range 19
      do {
        // </0 & DoMapAccum@1/4 s.new#12/9 (/15 s.new#13/27 e.new#14/25 )/16 e.new#15/21 (/7 e.new#16/23 )/8 >/1
        context[21] = context[17];
        context[22] = context[18];
        context[23] = context[19];
        context[24] = context[20];
        context[25] = 0;
        context[26] = 0;
        if( ! refalrts::brackets_term( context[25], context[26], context[15] ) )
          continue;
        // closed e.new#15 as range 21
        // closed e.new#16 as range 23
        if( ! refalrts::svar_left( context[27], context[25], context[26] ) )
          continue;
        // closed e.new#14 as range 25
        do {
          // </0 & DoMapAccum@1/4 s.Next#2/9 (/15 # TkVariable/27 s.Type#2/34 )/16 e.Tail#1/30 (/7 e.Scanned#1/32 )/8 >/1
          context[28] = context[25];
          context[29] = context[26];
          context[30] = context[21];
          context[31] = context[22];
          context[32] = context[23];
          context[33] = context[24];
          if( ! refalrts::ident_term( identifiers[ident_TkVariable], context[27] ) )
            continue;
          // closed e.Tail#1 as range 30
          // closed e.Scanned#1 as range 32
          if( ! refalrts::svar_left( context[34], context[28], context[29] ) )
            continue;
          if( ! refalrts::empty_seq( context[28], context[29] ) )
            continue;
          //DEBUG: s.Next#2: 9
          //DEBUG: e.Tail#1: 30
          //DEBUG: e.Scanned#1: 32
          //DEBUG: s.Type#2: 34

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 } Tile{ HalfReuse: & DoMapAccum-Aux@1/16 AsIs: e.Tail#1/30 AsIs: (/7 AsIs: e.Scanned#1/32 AsIs: )/8 HalfReuse: (/1 } </35 & Add/36 Tile{ HalfReuse: 1/4 AsIs: s.Next#2/9 } >/37 Tile{ AsIs: (/15 AsIs: # TkVariable/27 AsIs: s.Type#2/34 }"new"/38 s.Next#2/9/40 )/41 )/42 >/43 Tile{ ]] }
          refalrts::alloc_open_call(vm, context[35]);
          refalrts::alloc_name(vm, context[36], functions[efunc_Add]);
          refalrts::alloc_close_call(vm, context[37]);
          refalrts::alloc_chars(vm, context[38], context[39], "new", 3);
          refalrts::copy_stvar(vm, context[40], context[9]);
          refalrts::alloc_close_bracket(vm, context[41]);
          refalrts::alloc_close_bracket(vm, context[42]);
          refalrts::alloc_close_call(vm, context[43]);
          refalrts::reinit_name(context[16], functions[efunc_gen_DoMapAccumm_Aux_Z1]);
          refalrts::reinit_open_bracket(context[1]);
          refalrts::reinit_number(context[4], 1UL);
          refalrts::push_stack( vm, context[43] );
          refalrts::push_stack( vm, context[0] );
          refalrts::link_brackets( context[1], context[42] );
          refalrts::link_brackets( context[15], context[41] );
          refalrts::push_stack( vm, context[37] );
          refalrts::push_stack( vm, context[35] );
          refalrts::link_brackets( context[7], context[8] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = arg_end->next;
          res = refalrts::splice_evar( res, context[38], context[43] );
          res = refalrts::splice_evar( res, context[15], context[34] );
          res = refalrts::splice_evar( res, context[37], context[37] );
          res = refalrts::splice_evar( res, context[4], context[9] );
          res = refalrts::splice_evar( res, context[35], context[36] );
          res = refalrts::splice_evar( res, context[16], context[1] );
          refalrts::use( res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        do {
          // </0 & DoMapAccum@1/4 s.Next#2/9 (/15 # Brackets/27 e.0#0/28 )/16 e.Tail#1/30 (/7 e.Scanned#1/32 )/8 >/1
          context[28] = context[25];
          context[29] = context[26];
          context[30] = context[21];
          context[31] = context[22];
          context[32] = context[23];
          context[33] = context[24];
          if( ! refalrts::ident_term( identifiers[ident_Brackets], context[27] ) )
            continue;
          // closed e.0#0 as range 28
          // closed e.Tail#1 as range 30
          // closed e.Scanned#1 as range 32
          //DEBUG: s.Next#2: 9
          //DEBUG: e.0#0: 28
          //DEBUG: e.Tail#1: 30
          //DEBUG: e.Scanned#1: 32

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ } </34 Tile{ HalfReuse: & DoMapAccum-Aux@1/16 AsIs: e.Tail#1/30 AsIs: (/7 AsIs: e.Scanned#1/32 AsIs: )/8 HalfReuse: (/1 } Tile{ HalfReuse: </15 HalfReuse: & EnumerateVarsRec\1$2=1/27 } Tile{ AsIs: </0 Reuse: & EnumerateVarsRec/4 AsIs: s.Next#2/9 } Tile{ AsIs: e.0#0/28 } >/35 >/36 )/37 >/38 Tile{ ]] }
          refalrts::alloc_open_call(vm, context[34]);
          refalrts::alloc_close_call(vm, context[35]);
          refalrts::alloc_close_call(vm, context[36]);
          refalrts::alloc_close_bracket(vm, context[37]);
          refalrts::alloc_close_call(vm, context[38]);
          refalrts::reinit_name(context[16], functions[efunc_gen_DoMapAccumm_Aux_Z1]);
          refalrts::reinit_open_bracket(context[1]);
          refalrts::reinit_open_call(context[15]);
          refalrts::reinit_name(context[27], functions[efunc_gen_EnumerateVarsRec_L1S2A1]);
          refalrts::update_name(context[4], functions[efunc_EnumerateVarsRec]);
          refalrts::push_stack( vm, context[38] );
          refalrts::push_stack( vm, context[34] );
          refalrts::link_brackets( context[1], context[37] );
          refalrts::push_stack( vm, context[36] );
          refalrts::push_stack( vm, context[15] );
          refalrts::push_stack( vm, context[35] );
          refalrts::push_stack( vm, context[0] );
          refalrts::link_brackets( context[7], context[8] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = arg_end->next;
          res = refalrts::splice_evar( res, context[35], context[38] );
          res = refalrts::splice_evar( res, context[28], context[29] );
          res = refalrts::splice_evar( res, context[0], context[9] );
          res = refalrts::splice_evar( res, context[15], context[27] );
          res = refalrts::splice_evar( res, context[16], context[1] );
          res = refalrts::splice_evar( res, context[34], context[34] );
          refalrts::use( res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & DoMapAccum@1/4 s.Next#2/9 (/15 # ADT-Brackets/27 (/36 e.2#0/34 )/37 e.1#0/28 )/16 e.Tail#1/30 (/7 e.Scanned#1/32 )/8 >/1
        context[28] = context[25];
        context[29] = context[26];
        context[30] = context[21];
        context[31] = context[22];
        context[32] = context[23];
        context[33] = context[24];
        if( ! refalrts::ident_term( identifiers[ident_ADTm_Brackets], context[27] ) )
          continue;
        context[34] = 0;
        context[35] = 0;
        context[36] = refalrts::brackets_left( context[34], context[35], context[28], context[29] );
        if( ! context[36] )
          continue;
        refalrts::bracket_pointers(context[36], context[37]);
        // closed e.2#0 as range 34
        // closed e.1#0 as range 28
        // closed e.Tail#1 as range 30
        // closed e.Scanned#1 as range 32
        //DEBUG: s.Next#2: 9
        //DEBUG: e.2#0: 34
        //DEBUG: e.1#0: 28
        //DEBUG: e.Tail#1: 30
        //DEBUG: e.Scanned#1: 32

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } </38 Tile{ HalfReuse: & DoMapAccum-Aux@1/16 AsIs: e.Tail#1/30 AsIs: (/7 AsIs: e.Scanned#1/32 AsIs: )/8 HalfReuse: (/1 } Tile{ HalfReuse: </15 HalfReuse: & EnumerateVarsRec\1$3=1/27 AsIs: (/36 AsIs: e.2#0/34 AsIs: )/37 } Tile{ AsIs: </0 Reuse: & EnumerateVarsRec/4 AsIs: s.Next#2/9 } Tile{ AsIs: e.1#0/28 } >/39 >/40 )/41 >/42 Tile{ ]] }
        refalrts::alloc_open_call(vm, context[38]);
        refalrts::alloc_close_call(vm, context[39]);
        refalrts::alloc_close_call(vm, context[40]);
        refalrts::alloc_close_bracket(vm, context[41]);
        refalrts::alloc_close_call(vm, context[42]);
        refalrts::reinit_name(context[16], functions[efunc_gen_DoMapAccumm_Aux_Z1]);
        refalrts::reinit_open_bracket(context[1]);
        refalrts::reinit_open_call(context[15]);
        refalrts::reinit_name(context[27], functions[efunc_gen_EnumerateVarsRec_L1S3A1]);
        refalrts::update_name(context[4], functions[efunc_EnumerateVarsRec]);
        refalrts::push_stack( vm, context[42] );
        refalrts::push_stack( vm, context[38] );
        refalrts::link_brackets( context[1], context[41] );
        refalrts::push_stack( vm, context[40] );
        refalrts::push_stack( vm, context[15] );
        refalrts::push_stack( vm, context[39] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[36], context[37] );
        refalrts::link_brackets( context[7], context[8] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[39], context[42] );
        res = refalrts::splice_evar( res, context[28], context[29] );
        res = refalrts::splice_evar( res, context[0], context[9] );
        res = refalrts::splice_evar( res, context[15], context[37] );
        res = refalrts::splice_evar( res, context[16], context[1] );
        res = refalrts::splice_evar( res, context[38], context[38] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & DoMapAccum@1/4 s.Next#2/9 t.Next#1/15 e.Tail#1/21 (/7 e.Scanned#1/23 )/8 >/1
      context[21] = context[17];
      context[22] = context[18];
      context[23] = context[19];
      context[24] = context[20];
      // closed e.Tail#1 as range 21
      // closed e.Scanned#1 as range 23
      //DEBUG: t.Next#1: 15
      //DEBUG: s.Next#2: 9
      //DEBUG: e.Tail#1: 21
      //DEBUG: e.Scanned#1: 23

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum-Aux@1/4 } Tile{ AsIs: e.Tail#1/21 } Tile{ AsIs: (/7 AsIs: e.Scanned#1/23 AsIs: )/8 HalfReuse: (/1 } Tile{ AsIs: s.Next#2/9 AsIs: t.Next#1/15 } )/25 >/26 Tile{ ]] }
      refalrts::alloc_close_bracket(vm, context[25]);
      refalrts::alloc_close_call(vm, context[26]);
      refalrts::update_name(context[4], functions[efunc_gen_DoMapAccumm_Aux_Z1]);
      refalrts::reinit_open_bracket(context[1]);
      refalrts::push_stack( vm, context[26] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[1], context[25] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[25], context[26] );
      res = refalrts::splice_evar( res, context[9], context[16] );
      res = refalrts::splice_evar( res, context[7], context[1] );
      res = refalrts::splice_evar( res, context[21], context[22] );
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
    //RESULT: Tile{ [[ } </21 & DoMapAccum-Aux@1/22 Tile{ AsIs: e.Tail#1/17 } Tile{ AsIs: (/7 AsIs: e.Scanned#1/19 AsIs: )/8 HalfReuse: (/1 } Tile{ AsIs: </0 Reuse: & EnumerateVarsRec\1*4/4 AsIs: t.Acc#1/9 AsIs: t.Next#1/15 } >/23 )/24 >/25 Tile{ ]] }
    refalrts::alloc_open_call(vm, context[21]);
    refalrts::alloc_name(vm, context[22], functions[efunc_gen_DoMapAccumm_Aux_Z1]);
    refalrts::alloc_close_call(vm, context[23]);
    refalrts::alloc_close_bracket(vm, context[24]);
    refalrts::alloc_close_call(vm, context[25]);
    refalrts::reinit_open_bracket(context[1]);
    refalrts::update_name(context[4], functions[efunc_gen_EnumerateVarsRec_L1D4]);
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


static refalrts::FnResult func_gen_DoMapAccum_Z2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 33 elems
  refalrts::Iter context[33];
  refalrts::zeros( context, 33 );
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
      // </0 & DoMapAccum@2/4 s.NextNumber#2/9 (/15 e.2#0/21 ':'/27 (/25 e.1#0/23 )/26 )/16 e.Tail#1/17 (/7 e.Scanned#1/19 )/8 >/1
      context[17] = context[11];
      context[18] = context[12];
      context[19] = context[13];
      context[20] = context[14];
      context[21] = 0;
      context[22] = 0;
      if( ! refalrts::brackets_term( context[21], context[22], context[15] ) )
        continue;
      if( ! refalrts::svar_term( context[9], context[9] ) )
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
      // closed e.2#0 as range 21
      // closed e.1#0 as range 23
      // closed e.Tail#1 as range 17
      // closed e.Scanned#1 as range 19
      //DEBUG: s.NextNumber#2: 9
      //DEBUG: e.2#0: 21
      //DEBUG: e.1#0: 23
      //DEBUG: e.Tail#1: 17
      //DEBUG: e.Scanned#1: 19

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: </26 HalfReuse: & DoMapAccum-Aux@2/16 AsIs: e.Tail#1/17 AsIs: (/7 AsIs: e.Scanned#1/19 AsIs: )/8 HalfReuse: (/1 } </28 Tile{ HalfReuse: & EnumerateVars-Subst\1=1/27 AsIs: (/25 } Tile{ AsIs: e.1#0/23 } Tile{ HalfReuse: )/15 } Tile{ AsIs: </0 Reuse: & EnumerateVarsRec/4 AsIs: s.NextNumber#2/9 } Tile{ AsIs: e.2#0/21 } >/29 >/30 )/31 >/32 Tile{ ]] }
      refalrts::alloc_open_call(vm, context[28]);
      refalrts::alloc_close_call(vm, context[29]);
      refalrts::alloc_close_call(vm, context[30]);
      refalrts::alloc_close_bracket(vm, context[31]);
      refalrts::alloc_close_call(vm, context[32]);
      refalrts::reinit_open_call(context[26]);
      refalrts::reinit_name(context[16], functions[efunc_gen_DoMapAccumm_Aux_Z2]);
      refalrts::reinit_open_bracket(context[1]);
      refalrts::reinit_name(context[27], functions[efunc_gen_EnumerateVarsm_Subst_L1A1]);
      refalrts::reinit_close_bracket(context[15]);
      refalrts::update_name(context[4], functions[efunc_EnumerateVarsRec]);
      refalrts::push_stack( vm, context[32] );
      refalrts::push_stack( vm, context[26] );
      refalrts::link_brackets( context[1], context[31] );
      refalrts::push_stack( vm, context[30] );
      refalrts::push_stack( vm, context[28] );
      refalrts::push_stack( vm, context[29] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[25], context[15] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[29], context[32] );
      res = refalrts::splice_evar( res, context[21], context[22] );
      res = refalrts::splice_evar( res, context[0], context[9] );
      res = refalrts::splice_evar( res, context[15], context[15] );
      res = refalrts::splice_evar( res, context[23], context[24] );
      res = refalrts::splice_evar( res, context[27], context[25] );
      res = refalrts::splice_evar( res, context[28], context[28] );
      res = refalrts::splice_evar( res, context[26], context[1] );
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
    //RESULT: Tile{ [[ } </21 & DoMapAccum-Aux@2/22 Tile{ AsIs: e.Tail#1/17 } Tile{ AsIs: (/7 AsIs: e.Scanned#1/19 AsIs: )/8 HalfReuse: (/1 } Tile{ AsIs: </0 Reuse: & EnumerateVars-Subst\1*1/4 AsIs: t.Acc#1/9 AsIs: t.Next#1/15 } >/23 )/24 >/25 Tile{ ]] }
    refalrts::alloc_open_call(vm, context[21]);
    refalrts::alloc_name(vm, context[22], functions[efunc_gen_DoMapAccumm_Aux_Z2]);
    refalrts::alloc_close_call(vm, context[23]);
    refalrts::alloc_close_bracket(vm, context[24]);
    refalrts::alloc_close_call(vm, context[25]);
    refalrts::reinit_open_bracket(context[1]);
    refalrts::update_name(context[4], functions[efunc_gen_EnumerateVarsm_Subst_L1D1]);
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
