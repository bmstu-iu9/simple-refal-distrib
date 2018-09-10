// This file automatically generated from 'HighLevelRASL-ConjointFunc.ref'
// Don't edit! Edit 'HighLevelRASL-ConjointFunc.ref' and recompile it

#include "refalrts.h"

#define cookie_ns cookie_ns_2843096177_236654120
static const refalrts::IdentReference ident_k37_("%");
static const refalrts::IdentReference ident_k42_("*");
static const refalrts::IdentReference ident_k43_("+");
static const refalrts::IdentReference ident_m_("-");
static const refalrts::IdentReference ident_k47_("/");
static const refalrts::IdentReference ident_k63_("?");
static const refalrts::IdentReference ident_ADTm_Brackets("ADT-Brackets");
static const refalrts::IdentReference ident_Brackets("Brackets");
static const refalrts::IdentReference ident_Clear("Clear");
static const refalrts::IdentReference ident_CmdFail("CmdFail");
static const refalrts::IdentReference ident_CmdIssueMemory("CmdIssueMemory");
static const refalrts::IdentReference ident_CmdOpenELoop("CmdOpenELoop");
static const refalrts::IdentReference ident_CmdSentence("CmdSentence");
static const refalrts::IdentReference ident_E("E");
static const refalrts::IdentReference ident_ForAllSentences("ForAllSentences");
static const refalrts::IdentReference ident_ForGroup("ForGroup");
static const refalrts::IdentReference ident_Function("Function");
static const refalrts::IdentReference ident_Junk("Junk");
static const refalrts::IdentReference ident_MN("MN");
static const refalrts::IdentReference ident_S("S");
static const refalrts::IdentReference ident_T("T");
static const refalrts::IdentReference ident_TkVariable("TkVariable");
static refalrts::ExternalReference ref_Add("Add", 0U, 0U);
static refalrts::ExternalReference ref_BuildImage("BuildImage", 0U, 0U);
static refalrts::ExternalReference ref_BuildImagem_Term("BuildImage-Term", 0U, 0U);
static refalrts::ExternalReference ref_CodeForSubst("CodeForSubst", 2843096177U, 236654120U);
static refalrts::ExternalReference ref_gen_CodeForSubst_A1("CodeForSubst=1", 2843096177U, 236654120U);
static refalrts::ExternalReference ref_gen_CodeForSubst_A2("CodeForSubst=2", 2843096177U, 236654120U);
static refalrts::ExternalReference ref_gen_CodeForSubst_A2B1("CodeForSubst=2:1", 2843096177U, 236654120U);
static refalrts::ExternalReference ref_Collapse("Collapse", 0U, 0U);
static refalrts::ExternalReference ref_Collapsem_Term("Collapse-Term", 0U, 0U);
static refalrts::ExternalReference ref_ComposeVars("ComposeVars", 2843096177U, 236654120U);
static refalrts::ExternalReference ref_gen_ComposeVars_S1A1("ComposeVars$1=1", 2843096177U, 236654120U);
static refalrts::ExternalReference ref_gen_ComposeVars_S1A1B1("ComposeVars$1=1:1", 2843096177U, 236654120U);
static refalrts::ExternalReference ref_Div("Div", 0U, 0U);
static refalrts::ExternalReference ref_DoFindDivision("DoFindDivision", 2843096177U, 236654120U);
static refalrts::ExternalReference ref_gen_DoFindDivision_S1B1("DoFindDivision$1:1", 2843096177U, 236654120U);
static refalrts::ExternalReference ref_gen_DoFindDivision_S1A1("DoFindDivision$1=1", 2843096177U, 236654120U);
static refalrts::ExternalReference ref_gen_DoFindDivision_S1A2("DoFindDivision$1=2", 2843096177U, 236654120U);
static refalrts::ExternalReference ref_EnumerateVarsm_Subst("EnumerateVars-Subst", 2843096177U, 236654120U);
static refalrts::ExternalReference ref_gen_EnumerateVarsm_Subst_L1("EnumerateVars-Subst\\1", 2843096177U, 236654120U);
static refalrts::ExternalReference ref_gen_EnumerateVarsm_Subst_L1A1("EnumerateVars-Subst\\1=1", 2843096177U, 236654120U);
static refalrts::ExternalReference ref_EnumerateVarsRec("EnumerateVarsRec", 2843096177U, 236654120U);
static refalrts::ExternalReference ref_gen_EnumerateVarsRec_L1("EnumerateVarsRec\\1", 2843096177U, 236654120U);
static refalrts::ExternalReference ref_gen_EnumerateVarsRec_L1S2A1("EnumerateVarsRec\\1$2=1", 2843096177U, 236654120U);
static refalrts::ExternalReference ref_gen_EnumerateVarsRec_L1S3A1("EnumerateVarsRec\\1$3=1", 2843096177U, 236654120U);
static refalrts::ExternalReference ref_Evm_met("Ev-met", 2843096177U, 236654120U);
static refalrts::ExternalReference ref_FindDivision("FindDivision", 2843096177U, 236654120U);
static refalrts::ExternalReference ref_gen_FindDivision_A2("FindDivision=2", 2843096177U, 236654120U);
static refalrts::ExternalReference ref_gen_FindDivision_A3("FindDivision=3", 2843096177U, 236654120U);
static refalrts::ExternalReference ref_gen_FindDivision_C1("FindDivision?1", 2843096177U, 236654120U);
static refalrts::ExternalReference ref_FindDivisionAndGenerate("FindDivisionAndGenerate", 2843096177U, 236654120U);
static refalrts::ExternalReference ref_gen_FindDivisionAndGenerate_B1("FindDivisionAndGenerate:1", 2843096177U, 236654120U);
static refalrts::ExternalReference ref_gen_FindDivisionAndGenerate_B1S1A1("FindDivisionAndGenerate:1$1=1", 2843096177U, 236654120U);
static refalrts::ExternalReference ref_gen_FindDivisionAndGenerate_B1S1A2("FindDivisionAndGenerate:1$1=2", 2843096177U, 236654120U);
static refalrts::ExternalReference ref_gen_FindDivisionAndGenerate_B1S1A3("FindDivisionAndGenerate:1$1=3", 2843096177U, 236654120U);
static refalrts::ExternalReference ref_GenPattern("GenPattern", 0U, 0U);
static refalrts::ExternalReference ref_GenResult("GenResult", 0U, 0U);
static refalrts::ExternalReference ref_Generalization("Generalization", 0U, 0U);
static refalrts::ExternalReference ref_Generalizationm_Term("Generalization-Term", 0U, 0U);
static refalrts::ExternalReference ref_GenerateGroupWithGCGSubst("GenerateGroupWithGCGSubst", 2843096177U, 236654120U);
static refalrts::ExternalReference ref_gen_GenerateGroupWithGCGSubst_S2A1("GenerateGroupWithGCGSubst$2=1", 2843096177U, 236654120U);
static refalrts::ExternalReference ref_gen_GenerateGroupWithGCGSubst_S2A2("GenerateGroupWithGCGSubst$2=2", 2843096177U, 236654120U);
static refalrts::ExternalReference ref_gen_GenerateGroupWithGCGSubst_S2A3("GenerateGroupWithGCGSubst$2=3", 2843096177U, 236654120U);
static refalrts::ExternalReference ref_gen_GenerateGroupWithGCGSubst_S2A4("GenerateGroupWithGCGSubst$2=4", 2843096177U, 236654120U);
static refalrts::ExternalReference ref_GenerateSingleSentence("GenerateSingleSentence", 2843096177U, 236654120U);
static refalrts::ExternalReference ref_gen_GenerateSingleSentence_A1("GenerateSingleSentence=1", 2843096177U, 236654120U);
static refalrts::ExternalReference ref_gen_GenerateSingleSentence_A2("GenerateSingleSentence=2", 2843096177U, 236654120U);
static refalrts::ExternalReference ref_GenericMatch("GenericMatch", 0U, 0U);
static refalrts::ExternalReference ref_HighLevelRASLm_Functionm_Conjoint("HighLevelRASL-Function-Conjoint", 0U, 0U);
static refalrts::ExternalReference ref_gen_HighLevelRASLm_Functionm_Conjoint_A1("HighLevelRASL-Function-Conjoint=1", 2843096177U, 236654120U);
static refalrts::ExternalReference ref_gen_HighLevelRASLm_Functionm_Conjoint_A1L1("HighLevelRASL-Function-Conjoint=1\\1", 2843096177U, 236654120U);
static refalrts::ExternalReference ref_gen_HighLevelRASLm_Functionm_Conjoint_A2("HighLevelRASL-Function-Conjoint=2", 2843096177U, 236654120U);
static refalrts::ExternalReference ref_gen_HighLevelRASLm_Functionm_Conjoint_A3("HighLevelRASL-Function-Conjoint=3", 2843096177U, 236654120U);
static refalrts::ExternalReference ref_gen_HighLevelRASLm_Functionm_Conjoint_A4("HighLevelRASL-Function-Conjoint=4", 2843096177U, 236654120U);
static refalrts::ExternalReference ref_gen_HighLevelRASLm_Functionm_Conjoint_A4B1("HighLevelRASL-Function-Conjoint=4:1", 2843096177U, 236654120U);
static refalrts::ExternalReference ref_ImagedSentence("ImagedSentence", 2843096177U, 236654120U);
static refalrts::ExternalReference ref_gen_ImagedSentence_A1("ImagedSentence=1", 2843096177U, 236654120U);
static refalrts::ExternalReference ref_Inc("Inc", 0U, 0U);
static refalrts::ExternalReference ref_MakeSavers("MakeSavers", 0U, 0U);
static refalrts::ExternalReference ref_MakeTrivialSubstImage("MakeTrivialSubstImage", 2843096177U, 236654120U);
static refalrts::ExternalReference ref_gen_MakeTrivialSubstImage_L1("MakeTrivialSubstImage\\1", 2843096177U, 236654120U);
static refalrts::ExternalReference ref_Map("Map", 0U, 0U);
static refalrts::ExternalReference ref_MapReduce("MapReduce", 0U, 0U);
static refalrts::ExternalReference ref_Max("Max", 0U, 0U);
static refalrts::ExternalReference ref_Mod("Mod", 0U, 0U);
static refalrts::ExternalReference ref_Mu("Mu", 2843096177U, 236654120U);
static refalrts::ExternalReference ref_gen_Mu_C1("Mu?1", 2843096177U, 236654120U);
static refalrts::ExternalReference ref_Mul("Mul", 0U, 0U);
static refalrts::ExternalReference ref_NarrowSentenceSubstitutions("NarrowSentenceSubstitutions", 2843096177U, 236654120U);
static refalrts::ExternalReference ref_gen_NarrowSentenceSubstitutions_L1("NarrowSentenceSubstitutions\\1", 2843096177U, 236654120U);
static refalrts::ExternalReference ref_NarrowSubst("NarrowSubst", 2843096177U, 236654120U);
static refalrts::ExternalReference ref_gen_NarrowSubst_S1A1("NarrowSubst$1=1", 2843096177U, 236654120U);
static refalrts::ExternalReference ref_Residue("Residue", 2843096177U, 236654120U);
static refalrts::ExternalReference ref_gen_Residue_C1("Residue?1", 2843096177U, 236654120U);
static refalrts::ExternalReference ref_Sub("Sub", 0U, 0U);
static refalrts::ExternalReference ref_Substm_BuildImage("Subst-BuildImage", 2843096177U, 236654120U);
static refalrts::ExternalReference ref_gen_Substm_BuildImage_L1("Subst-BuildImage\\1", 2843096177U, 236654120U);
static refalrts::ExternalReference ref_Substm_Collapse("Subst-Collapse", 2843096177U, 236654120U);
static refalrts::ExternalReference ref_gen_Substm_Collapse_L1("Subst-Collapse\\1", 2843096177U, 236654120U);
static refalrts::ExternalReference ref_Substm_Generalization("Subst-Generalization", 2843096177U, 236654120U);
static refalrts::ExternalReference ref_Type("Type", 0U, 0U);
static refalrts::ExternalReference ref_Up("Up", 2843096177U, 236654120U);
static refalrts::ExternalReference ref_u_u_FindMuPtr("__FindMuPtr", 0U, 0U);
static refalrts::ExternalReference ref_u_u_Mum_Aux("__Mu-Aux", 2843096177U, 236654120U);
static refalrts::ExternalReference ref_gen_u_u_Mum_Aux_S13B1("__Mu-Aux$13:1", 2843096177U, 236654120U);
static refalrts::ExternalReference ref_u_u_Stepm_End("__Step-End", 0U, 0U);
static refalrts::ExternalReference ref_u_u_Stepm_Start("__Step-Start", 0U, 0U);

static refalrts::FnResult func_Mu(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
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
  if( ! refalrts::alloc_open_call( vm, context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[9], ref_gen_Mu_C1.ref(vm) ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( vm, context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[11], ref_u_u_Stepm_Start.ref(vm) ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( vm, context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( vm, context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[14], ref_u_u_Mum_Aux.ref(vm) ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_stvar(vm, context[15], context[5]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( vm, context[16] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( vm, context[8] ) )
    return refalrts::cNoMemory;
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
    refalrts::update_name( context[4], ref_u_u_Stepm_End.ref(vm) );
    refalrts::reinit_close_call( context[7] );
    refalrts::reinit_open_call( context[11] );
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

static refalrts::NativeReference nat_ref_Mu("Mu", 2843096177U, 236654120U, func_Mu);


static refalrts::FnResult func_gen_u_u_Mum_Aux_S13B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
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
    if( ! refalrts::alloc_number( vm, context[9], 236654120UL ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_u_u_FindMuPtr.ref(vm) );
    refalrts::reinit_number( context[5], 2843096177UL );
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
  refalrts::update_name( context[4], ref_u_u_FindMuPtr.ref(vm) );
  refalrts::reinit_number( context[5], 2843096177UL );
  refalrts::reinit_number( context[7], 236654120UL );
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

static refalrts::NativeReference nat_ref_gen_u_u_Mum_Aux_S13B1("__Mu-Aux$13:1", 2843096177U, 236654120U, func_gen_u_u_Mum_Aux_S13B1);


static refalrts::FnResult func_u_u_Mum_Aux(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
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
      refalrts::reinit_name( context[1], ref_Add.ref(vm) );
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
      refalrts::reinit_name( context[1], ref_Div.ref(vm) );
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
      refalrts::reinit_name( context[1], ref_Mod.ref(vm) );
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
      refalrts::reinit_name( context[1], ref_Mul.ref(vm) );
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
      refalrts::reinit_name( context[1], ref_Residue.ref(vm) );
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
      refalrts::reinit_name( context[1], ref_Sub.ref(vm) );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & __Mu-Aux/4 # +/5 >/1
      if( ! refalrts::ident_term(  ident_k43_.ref(vm), context[5] ) )
        continue;

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & __Mu-Aux/4 # +/5 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: & Add/1 ]] }
      refalrts::reinit_name( context[1], ref_Add.ref(vm) );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & __Mu-Aux/4 # //5 >/1
      if( ! refalrts::ident_term(  ident_k47_.ref(vm), context[5] ) )
        continue;

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & __Mu-Aux/4 # //5 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: & Div/1 ]] }
      refalrts::reinit_name( context[1], ref_Div.ref(vm) );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & __Mu-Aux/4 # %/5 >/1
      if( ! refalrts::ident_term(  ident_k37_.ref(vm), context[5] ) )
        continue;

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & __Mu-Aux/4 # %/5 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: & Mod/1 ]] }
      refalrts::reinit_name( context[1], ref_Mod.ref(vm) );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & __Mu-Aux/4 # */5 >/1
      if( ! refalrts::ident_term(  ident_k42_.ref(vm), context[5] ) )
        continue;

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & __Mu-Aux/4 # */5 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: & Mul/1 ]] }
      refalrts::reinit_name( context[1], ref_Mul.ref(vm) );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & __Mu-Aux/4 # ?/5 >/1
      if( ! refalrts::ident_term(  ident_k63_.ref(vm), context[5] ) )
        continue;

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & __Mu-Aux/4 # ?/5 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: & Residue/1 ]] }
      refalrts::reinit_name( context[1], ref_Residue.ref(vm) );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & __Mu-Aux/4 # -/5 >/1
    if( ! refalrts::ident_term(  ident_m_.ref(vm), context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & __Mu-Aux/4 # -/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: & Sub/1 ]] }
    refalrts::reinit_name( context[1], ref_Sub.ref(vm) );
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
  if( ! refalrts::alloc_open_call( vm, context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[8], ref_gen_u_u_Mum_Aux_S13B1.ref(vm) ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( vm, context[9] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_Type.ref(vm) );
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

static refalrts::NativeReference nat_ref_u_u_Mum_Aux("__Mu-Aux", 2843096177U, 236654120U, func_u_u_Mum_Aux);


static refalrts::FnResult func_Residue(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
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
  if( ! refalrts::alloc_open_call( vm, context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[9], ref_gen_Residue_C1.ref(vm) ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( vm, context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[11], ref_u_u_Stepm_Start.ref(vm) ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( vm, context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( vm, context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[14], ref_u_u_Mum_Aux.ref(vm) ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_stvar(vm, context[15], context[5]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( vm, context[16] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( vm, context[8] ) )
    return refalrts::cNoMemory;
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
    refalrts::update_name( context[4], ref_u_u_Stepm_End.ref(vm) );
    refalrts::reinit_close_call( context[7] );
    refalrts::reinit_open_call( context[11] );
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

static refalrts::NativeReference nat_ref_Residue("Residue", 2843096177U, 236654120U, func_Residue);


static refalrts::FnResult func_gen_HighLevelRASLm_Functionm_Conjoint_A4(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
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
  if( ! refalrts::alloc_open_bracket( vm, context[15] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_ident( context[4], ident_Function.ref(vm) );
  refalrts::reinit_ident( context[14], ident_CmdIssueMemory.ref(vm) );
  refalrts::reinit_close_bracket( context[13] );
  refalrts::reinit_close_bracket( context[1] );
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

static refalrts::NativeReference nat_ref_gen_HighLevelRASLm_Functionm_Conjoint_A4("HighLevelRASL-Function-Conjoint=4", 2843096177U, 236654120U, func_gen_HighLevelRASLm_Functionm_Conjoint_A4);


static refalrts::FnResult func_gen_HighLevelRASLm_Functionm_Conjoint_A4B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
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
    context[11] = refalrts::ident_left(  ident_CmdOpenELoop.ref(vm), context[7], context[8] );
    if( ! context[11] )
      continue;
    // closed e.Commands#5 as range 5
    // closed e.OpenELoop#5 as range 7
    //DEBUG: e.Commands#5: 5
    //DEBUG: e.OpenELoop#5: 7

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: e.Commands#5/5 } Tile{ AsIs: (/9 AsIs: # CmdOpenELoop/11 AsIs: e.OpenELoop#5/7 AsIs: )/10 HalfReuse: (/1 } Tile{ HalfReuse: # CmdFail/0 HalfReuse: )/4 } Tile{ ]] }
    refalrts::reinit_open_bracket( context[1] );
    refalrts::reinit_ident( context[0], ident_CmdFail.ref(vm) );
    refalrts::reinit_close_bracket( context[4] );
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

static refalrts::NativeReference nat_ref_gen_HighLevelRASLm_Functionm_Conjoint_A4B1("HighLevelRASL-Function-Conjoint=4:1", 2843096177U, 236654120U, func_gen_HighLevelRASLm_Functionm_Conjoint_A4B1);


static refalrts::FnResult func_gen_HighLevelRASLm_Functionm_Conjoint_A3(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
  // </0 & HighLevelRASL-Function-Conjoint=3/4 s.ScopeClass#1/5 (/8 e.Name#1/6 )/9 (/12 e.CommonMatchCommands#3/10 )/13 s.MaxContextSize#4/14 e.ResultCommands#4/2 >/1
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
  // closed e.Name#1 as range 6
  // closed e.CommonMatchCommands#3 as range 10
  if( ! refalrts::svar_left( context[14], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.ResultCommands#4 as range 2
  //DEBUG: s.ScopeClass#1: 5
  //DEBUG: e.Name#1: 6
  //DEBUG: e.CommonMatchCommands#3: 10
  //DEBUG: s.MaxContextSize#4: 14
  //DEBUG: e.ResultCommands#4: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.MaxContextSize#4/14 {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </15 Tile{ HalfReuse: [*]/0 Reuse: & HighLevelRASL-Function-Conjoint=4/4 AsIs: s.ScopeClass#1/5 AsIs: (/8 AsIs: e.Name#1/6 AsIs: )/9 HalfReuse: s.MaxContextSize4 #14/12 } (/16 Tile{ AsIs: e.CommonMatchCommands#3/10 } Tile{ AsIs: )/13 } {*}/17 </18 & HighLevelRASL-Function-Conjoint=4:1/19 Tile{ AsIs: e.ResultCommands#4/2 } >/20 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( vm, context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( vm, context[16] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_unwrapped_closure( vm, context[17], context[0] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( vm, context[18] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[19], ref_gen_HighLevelRASLm_Functionm_Conjoint_A4B1.ref(vm) ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( vm, context[20] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_closure_head( context[0] );
  refalrts::update_name( context[4], ref_gen_HighLevelRASLm_Functionm_Conjoint_A4.ref(vm) );
  refalrts::reinit_svar( context[12], context[14] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[15] );
  refalrts::push_stack( vm, context[20] );
  refalrts::push_stack( vm, context[18] );
  refalrts::link_brackets( context[16], context[13] );
  refalrts::link_brackets( context[8], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[20], context[20] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[17], context[19] );
  res = refalrts::splice_evar( res, context[13], context[13] );
  res = refalrts::splice_evar( res, context[10], context[11] );
  res = refalrts::splice_evar( res, context[16], context[16] );
  res = refalrts::splice_evar( res, context[0], context[12] );
  res = refalrts::splice_evar( res, context[15], context[15] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  refalrts::wrap_closure( context[17] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_HighLevelRASLm_Functionm_Conjoint_A3("HighLevelRASL-Function-Conjoint=3", 2843096177U, 236654120U, func_gen_HighLevelRASLm_Functionm_Conjoint_A3);


static refalrts::FnResult func_gen_HighLevelRASLm_Functionm_Conjoint_A2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  // issue here memory for vars with 33 elems
  refalrts::Iter context[33];
  refalrts::zeros( context, 33 );
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
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.FnGenResult#1/11 {REMOVED TILE} e.Vars#3/17 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </25 Tile{ HalfReuse: [*]/0 Reuse: & HighLevelRASL-Function-Conjoint=3/4 AsIs: s.ScopeClass#1/5 AsIs: (/8 AsIs: e.Name#1/6 AsIs: )/9 } (/26 Tile{ AsIs: e.CommonMatchCommands#3/2 } )/27 {*}/28 </29 & FindDivisionAndGenerate/30 Tile{ AsIs: s.FnGenSubst#1/10 } Tile{ HalfReuse: s.FnGenResult1 #11/20 AsIs: (/23 AsIs: e.MarkedPattern#3/21 AsIs: )/24 } Tile{ AsIs: (/14 AsIs: e.SentencesWithSubst#2/12 AsIs: )/15 AsIs: s.ContextSize#3/16 HalfReuse: 1/19 } 0/31 >/32 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( vm, context[25] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( vm, context[26] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[27] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_unwrapped_closure( vm, context[28], context[0] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( vm, context[29] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[30], ref_FindDivisionAndGenerate.ref(vm) ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_number( vm, context[31], 0UL ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( vm, context[32] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_closure_head( context[0] );
  refalrts::update_name( context[4], ref_gen_HighLevelRASLm_Functionm_Conjoint_A3.ref(vm) );
  refalrts::reinit_svar( context[20], context[11] );
  refalrts::reinit_number( context[19], 1UL );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[25] );
  refalrts::push_stack( vm, context[32] );
  refalrts::push_stack( vm, context[29] );
  refalrts::link_brackets( context[14], context[15] );
  refalrts::link_brackets( context[23], context[24] );
  refalrts::link_brackets( context[26], context[27] );
  refalrts::link_brackets( context[8], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[31], context[32] );
  res = refalrts::splice_evar( res, context[14], context[19] );
  res = refalrts::splice_evar( res, context[20], context[24] );
  res = refalrts::splice_evar( res, context[10], context[10] );
  res = refalrts::splice_evar( res, context[27], context[30] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[26], context[26] );
  res = refalrts::splice_evar( res, context[0], context[9] );
  res = refalrts::splice_evar( res, context[25], context[25] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  refalrts::wrap_closure( context[28] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_HighLevelRASLm_Functionm_Conjoint_A2("HighLevelRASL-Function-Conjoint=2", 2843096177U, 236654120U, func_gen_HighLevelRASLm_Functionm_Conjoint_A2);


static refalrts::FnResult func_gen_HighLevelRASLm_Functionm_Conjoint_A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  // issue here memory for vars with 30 elems
  refalrts::Iter context[30];
  refalrts::zeros( context, 30 );
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
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </12 Tile{ HalfReuse: [*]/0 Reuse: & HighLevelRASL-Function-Conjoint=2/4 AsIs: s.ScopeClass#1/5 AsIs: (/8 AsIs: e.Name#1/6 AsIs: )/9 AsIs: s.FnGenSubst#1/10 AsIs: s.FnGenResult#1/11 } (/13 Tile{ AsIs: e.SentencesWithSubst#2/2 } )/14 {*}/15 </16 & GenPattern/17 s.FnGenSubst#1/10/18 (/19 e.Name#1/6/20 )/22 (/23 # TkVariable/24"enew"/25 0/27 )/28 >/29 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( vm, context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( vm, context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_unwrapped_closure( vm, context[15], context[0] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( vm, context[16] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[17], ref_GenPattern.ref(vm) ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_stvar(vm, context[18], context[10]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( vm, context[19] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(vm, context[20], context[21], context[6], context[7]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[22] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( vm, context[23] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( vm, context[24], ident_TkVariable.ref(vm) ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( vm, context[25], context[26], "enew", 4 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_number( vm, context[27], 0UL ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[28] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( vm, context[29] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_closure_head( context[0] );
  refalrts::update_name( context[4], ref_gen_HighLevelRASLm_Functionm_Conjoint_A2.ref(vm) );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[12] );
  refalrts::push_stack( vm, context[29] );
  refalrts::push_stack( vm, context[16] );
  refalrts::link_brackets( context[23], context[28] );
  refalrts::link_brackets( context[19], context[22] );
  refalrts::link_brackets( context[13], context[14] );
  refalrts::link_brackets( context[8], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[14], context[29] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[13], context[13] );
  res = refalrts::splice_evar( res, context[0], context[11] );
  res = refalrts::splice_evar( res, context[12], context[12] );
  refalrts::use( res );
  refalrts::wrap_closure( context[15] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_HighLevelRASLm_Functionm_Conjoint_A1("HighLevelRASL-Function-Conjoint=1", 2843096177U, 236654120U, func_gen_HighLevelRASLm_Functionm_Conjoint_A1);


static refalrts::FnResult func_gen_HighLevelRASLm_Functionm_Conjoint_A1L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
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
  if( ! refalrts::alloc_char( vm, context[17], ':' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( vm, context[18], context[19], "en", 2 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( vm, context[20], 'w' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_number( vm, context[21], 0UL ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[22] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[23] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_open_bracket( context[4] );
  refalrts::reinit_char( context[1], 'e' );
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

static refalrts::NativeReference nat_ref_gen_HighLevelRASLm_Functionm_Conjoint_A1L1("HighLevelRASL-Function-Conjoint=1\\1", 2843096177U, 236654120U, func_gen_HighLevelRASLm_Functionm_Conjoint_A1L1);


static refalrts::FnResult func_HighLevelRASLm_Functionm_Conjoint(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
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
  //RESULT: Tile{ [[ AsIs: </0 HalfReuse: [*]/4 } & HighLevelRASL-Function-Conjoint=1/12 Tile{ AsIs: s.ScopeClass#1/7 AsIs: (/10 AsIs: e.Name#1/8 AsIs: )/11 } Tile{ AsIs: s.FnGenSubst#1/5 AsIs: s.FnGenResult#1/6 } {*}/13 </14 & Map/15 & HighLevelRASL-Function-Conjoint=1\1/16 Tile{ AsIs: e.Sentences#1/2 } >/17 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_name( vm, context[12], ref_gen_HighLevelRASLm_Functionm_Conjoint_A1.ref(vm) ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_unwrapped_closure( vm, context[13], context[4] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( vm, context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[15], ref_Map.ref(vm) ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[16], ref_gen_HighLevelRASLm_Functionm_Conjoint_A1L1.ref(vm) ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( vm, context[17] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_closure_head( context[4] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[17] );
  refalrts::push_stack( vm, context[14] );
  refalrts::link_brackets( context[10], context[11] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[17], context[17] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[13], context[16] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[7], context[11] );
  res = refalrts::splice_evar( res, context[12], context[12] );
  refalrts::use( res );
  refalrts::wrap_closure( context[13] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_HighLevelRASLm_Functionm_Conjoint("HighLevelRASL-Function-Conjoint", 0U, 0U, func_HighLevelRASLm_Functionm_Conjoint);


static refalrts::FnResult func_gen_FindDivisionAndGenerate_B1S1A3(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
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
  refalrts::reinit_open_bracket( context[4] );
  refalrts::reinit_ident( context[7], ident_CmdSentence.ref(vm) );
  refalrts::link_brackets( context[4], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::splice_to_freelist_open( vm, context[8], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_FindDivisionAndGenerate_B1S1A3("FindDivisionAndGenerate:1$1=3", 2843096177U, 236654120U, func_gen_FindDivisionAndGenerate_B1S1A3);


static refalrts::FnResult func_gen_FindDivisionAndGenerate_B1S1A2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
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
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </11 Tile{ HalfReuse: [*]/0 Reuse: & FindDivisionAndGenerate:1$1=3/4 AsIs: (/7 AsIs: e.FirstPartCommands#3/5 AsIs: )/8 } (/12 Tile{ AsIs: e.SecondPartCommands#4/2 } )/13 {*}/14 </15 & Max/16 Tile{ AsIs: s.FirstPartContext#3/9 AsIs: s.SecondPartContext#4/10 } >/17 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( vm, context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( vm, context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_unwrapped_closure( vm, context[14], context[0] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( vm, context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[16], ref_Max.ref(vm) ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( vm, context[17] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_closure_head( context[0] );
  refalrts::update_name( context[4], ref_gen_FindDivisionAndGenerate_B1S1A3.ref(vm) );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[11] );
  refalrts::push_stack( vm, context[17] );
  refalrts::push_stack( vm, context[15] );
  refalrts::link_brackets( context[12], context[13] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[17], context[17] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[13], context[16] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[12], context[12] );
  res = refalrts::splice_evar( res, context[0], context[8] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  refalrts::use( res );
  refalrts::wrap_closure( context[14] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_FindDivisionAndGenerate_B1S1A2("FindDivisionAndGenerate:1$1=2", 2843096177U, 236654120U, func_gen_FindDivisionAndGenerate_B1S1A2);


static refalrts::FnResult func_gen_FindDivisionAndGenerate_B1S1A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  // issue here memory for vars with 26 elems
  refalrts::Iter context[26];
  refalrts::zeros( context, 26 );
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
  //RESULT: Tile{ [[ } </19 [*]/20 & FindDivisionAndGenerate:1$1=2/21 (/22 Tile{ AsIs: e.FirstPartCommands#3/2 } )/23 Tile{ AsIs: s.FirstPartContext#3/18 } {*}/24 Tile{ AsIs: </0 Reuse: & FindDivisionAndGenerate/4 AsIs: s.FnGenSubst#1/5 AsIs: s.FnGenResult#1/6 AsIs: (/9 AsIs: e.MarkedPattern#1/7 AsIs: )/10 AsIs: (/13 AsIs: e.SecondGroup#2/11 AsIs: )/14 AsIs: s.ContextSize#1/15 AsIs: s.BaseNum#1/16 AsIs: s.Depth#1/17 } >/25 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( vm, context[19] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_closure_head( vm, context[20] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[21], ref_gen_FindDivisionAndGenerate_B1S1A2.ref(vm) ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( vm, context[22] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[23] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_unwrapped_closure( vm, context[24], context[20] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( vm, context[25] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_FindDivisionAndGenerate.ref(vm) );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[19] );
  refalrts::push_stack( vm, context[25] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[13], context[14] );
  refalrts::link_brackets( context[9], context[10] );
  refalrts::link_brackets( context[22], context[23] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[25], context[25] );
  res = refalrts::splice_evar( res, context[0], context[17] );
  res = refalrts::splice_evar( res, context[24], context[24] );
  res = refalrts::splice_evar( res, context[18], context[18] );
  res = refalrts::splice_evar( res, context[23], context[23] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[19], context[22] );
  refalrts::use( res );
  refalrts::wrap_closure( context[24] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_FindDivisionAndGenerate_B1S1A1("FindDivisionAndGenerate:1$1=1", 2843096177U, 236654120U, func_gen_FindDivisionAndGenerate_B1S1A1);


static refalrts::FnResult func_gen_FindDivisionAndGenerate_B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  // issue here memory for vars with 41 elems
  refalrts::Iter context[41];
  refalrts::zeros( context, 41 );
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
    // </0 & FindDivisionAndGenerate:1/4 s.FnGenSubst#1/5 s.FnGenResult#1/6 (/9 e.MarkedPattern#1/7 )/10 s.ContextSize#1/11 s.BaseNum#1/12 s.Depth#1/13 # ForGroup/14 (/17 e.NewGCG-Subst#2/15 )/18 (/23 e.FirstGroup#2/21 )/24 e.SecondGroup#2/19 >/1
    context[19] = context[2];
    context[20] = context[3];
    if( ! refalrts::ident_term(  ident_ForGroup.ref(vm), context[14] ) )
      continue;
    context[21] = 0;
    context[22] = 0;
    context[23] = refalrts::brackets_left( context[21], context[22], context[19], context[20] );
    if( ! context[23] )
      continue;
    refalrts::bracket_pointers(context[23], context[24]);
    // closed e.MarkedPattern#1 as range 7
    // closed e.NewGCG-Subst#2 as range 15
    // closed e.FirstGroup#2 as range 21
    // closed e.SecondGroup#2 as range 19
    //DEBUG: s.FnGenSubst#1: 5
    //DEBUG: s.FnGenResult#1: 6
    //DEBUG: s.ContextSize#1: 11
    //DEBUG: s.BaseNum#1: 12
    //DEBUG: s.Depth#1: 13
    //DEBUG: e.MarkedPattern#1: 7
    //DEBUG: e.NewGCG-Subst#2: 15
    //DEBUG: e.FirstGroup#2: 21
    //DEBUG: e.SecondGroup#2: 19

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </25 [*]/26 & FindDivisionAndGenerate:1$1=1/27 s.FnGenSubst#1/5/28 s.FnGenResult#1/6/29 (/30 e.MarkedPattern#1/7/31 )/33 (/34 Tile{ AsIs: e.SecondGroup#2/19 } )/35 Tile{ AsIs: s.ContextSize#1/11 AsIs: s.BaseNum#1/12 AsIs: s.Depth#1/13 HalfReuse: {*}/14 } Tile{ AsIs: </0 Reuse: & GenerateGroupWithGCGSubst/4 AsIs: s.FnGenSubst#1/5 AsIs: s.FnGenResult#1/6 AsIs: (/9 AsIs: e.MarkedPattern#1/7 AsIs: )/10 } Tile{ AsIs: (/23 AsIs: e.FirstGroup#2/21 AsIs: )/24 } s.ContextSize#1/11/36 s.BaseNum#1/12/37 </38 & Inc/39 s.Depth#1/13/40 Tile{ HalfReuse: >/17 AsIs: e.NewGCG-Subst#2/15 HalfReuse: >/18 } Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_call( vm, context[25] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_closure_head( vm, context[26] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( vm, context[27], ref_gen_FindDivisionAndGenerate_B1S1A1.ref(vm) ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(vm, context[28], context[5]))
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(vm, context[29], context[6]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( vm, context[30] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(vm, context[31], context[32], context[7], context[8]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( vm, context[33] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( vm, context[34] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( vm, context[35] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(vm, context[36], context[11]))
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(vm, context[37], context[12]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( vm, context[38] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( vm, context[39], ref_Inc.ref(vm) ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(vm, context[40], context[13]))
      return refalrts::cNoMemory;
    refalrts::reinit_unwrapped_closure( context[14], context[26] );
    refalrts::update_name( context[4], ref_GenerateGroupWithGCGSubst.ref(vm) );
    refalrts::reinit_close_call( context[17] );
    refalrts::reinit_close_call( context[18] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[25] );
    refalrts::push_stack( vm, context[18] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[17] );
    refalrts::push_stack( vm, context[38] );
    refalrts::link_brackets( context[23], context[24] );
    refalrts::link_brackets( context[9], context[10] );
    refalrts::link_brackets( context[34], context[35] );
    refalrts::link_brackets( context[30], context[33] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[36], context[40] );
    res = refalrts::splice_evar( res, context[23], context[24] );
    res = refalrts::splice_evar( res, context[0], context[10] );
    res = refalrts::splice_evar( res, context[11], context[14] );
    res = refalrts::splice_evar( res, context[35], context[35] );
    res = refalrts::splice_evar( res, context[19], context[20] );
    res = refalrts::splice_evar( res, context[25], context[34] );
    refalrts::use( res );
    refalrts::wrap_closure( context[14] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & FindDivisionAndGenerate:1/4 s.FnGenSubst#1/5 s.FnGenResult#1/6 (/9 e.MarkedPattern#1/7 )/10 s.ContextSize#1/11 s.BaseNum#1/12 s.Depth#1/13 # ForAllSentences/14 (/17 e.NewGCG-Subst#2/15 )/18 e.SentencesWithSubst#2/2 >/1
  if( ! refalrts::ident_term(  ident_ForAllSentences.ref(vm), context[14] ) )
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
  refalrts::update_name( context[4], ref_GenerateGroupWithGCGSubst.ref(vm) );
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

static refalrts::NativeReference nat_ref_gen_FindDivisionAndGenerate_B1("FindDivisionAndGenerate:1", 2843096177U, 236654120U, func_gen_FindDivisionAndGenerate_B1);


static refalrts::FnResult func_FindDivisionAndGenerate(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
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
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.ContextSize#1/15 {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: </14 } Tile{ HalfReuse: [*]/0 Reuse: & FindDivisionAndGenerate:1/4 AsIs: s.FnGenSubst#1/5 AsIs: s.FnGenResult#1/6 AsIs: (/9 AsIs: e.MarkedPattern#1/7 AsIs: )/10 HalfReuse: s.ContextSize1 #15/13 } Tile{ AsIs: s.BaseNum#1/16 AsIs: s.Depth#1/17 HalfReuse: {*}/1 } </18 & FindDivision/19 Tile{ AsIs: e.SentencesWithSubst#1/11 } >/20 >/21 Tile{ ]] }
  if( ! refalrts::alloc_open_call( vm, context[18] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[19], ref_FindDivision.ref(vm) ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( vm, context[20] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( vm, context[21] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_open_call( context[14] );
  refalrts::reinit_closure_head( context[0] );
  refalrts::update_name( context[4], ref_gen_FindDivisionAndGenerate_B1.ref(vm) );
  refalrts::reinit_svar( context[13], context[15] );
  refalrts::reinit_unwrapped_closure( context[1], context[0] );
  refalrts::push_stack( vm, context[21] );
  refalrts::push_stack( vm, context[14] );
  refalrts::push_stack( vm, context[20] );
  refalrts::push_stack( vm, context[18] );
  refalrts::link_brackets( context[9], context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[20], context[21] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_evar( res, context[18], context[19] );
  res = refalrts::splice_evar( res, context[16], context[1] );
  res = refalrts::splice_evar( res, context[0], context[13] );
  res = refalrts::splice_evar( res, context[14], context[14] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  refalrts::wrap_closure( context[1] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_FindDivisionAndGenerate("FindDivisionAndGenerate", 2843096177U, 236654120U, func_FindDivisionAndGenerate);


static refalrts::FnResult func_gen_GenerateGroupWithGCGSubst_S2A4(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
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

static refalrts::NativeReference nat_ref_gen_GenerateGroupWithGCGSubst_S2A4("GenerateGroupWithGCGSubst$2=4", 2843096177U, 236654120U, func_gen_GenerateGroupWithGCGSubst_S2A4);


static refalrts::FnResult func_gen_GenerateGroupWithGCGSubst_S2A3(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  // issue here memory for vars with 25 elems
  refalrts::Iter context[25];
  refalrts::zeros( context, 25 );
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
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 HalfReuse: [*]/4 HalfReuse: & GenerateGroupWithGCGSubst$2=4/7 } (/18 Tile{ AsIs: e.GCG-Commands#3/5 } )/19 {*}/20 </21 Tile{ HalfReuse: & FindDivisionAndGenerate/8 AsIs: s.FnGenSubst#1/9 AsIs: s.FnGenResult#1/10 AsIs: (/13 AsIs: e.MarkedPattern#3/11 AsIs: )/14 } (/22 Tile{ AsIs: e.SentencesWithSubst#4/2 } )/23 Tile{ AsIs: s.ContextSize#3/15 AsIs: s.BaseNum#2/16 AsIs: s.Depth#1/17 } >/24 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_bracket( vm, context[18] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[19] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_unwrapped_closure( vm, context[20], context[4] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( vm, context[21] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( vm, context[22] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[23] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( vm, context[24] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_closure_head( context[4] );
  refalrts::reinit_name( context[7], ref_gen_GenerateGroupWithGCGSubst_S2A4.ref(vm) );
  refalrts::reinit_name( context[8], ref_FindDivisionAndGenerate.ref(vm) );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[24] );
  refalrts::push_stack( vm, context[21] );
  refalrts::link_brackets( context[22], context[23] );
  refalrts::link_brackets( context[13], context[14] );
  refalrts::link_brackets( context[18], context[19] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[24], context[24] );
  res = refalrts::splice_evar( res, context[15], context[17] );
  res = refalrts::splice_evar( res, context[23], context[23] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[22], context[22] );
  res = refalrts::splice_evar( res, context[8], context[14] );
  res = refalrts::splice_evar( res, context[19], context[21] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[18], context[18] );
  refalrts::use( res );
  refalrts::wrap_closure( context[20] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_GenerateGroupWithGCGSubst_S2A3("GenerateGroupWithGCGSubst$2=3", 2843096177U, 236654120U, func_gen_GenerateGroupWithGCGSubst_S2A3);


static refalrts::FnResult func_gen_GenerateGroupWithGCGSubst_S2A2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  // issue here memory for vars with 30 elems
  refalrts::Iter context[30];
  refalrts::zeros( context, 30 );
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
  //RESULT: Tile{ [[ AsIs: </0 HalfReuse: [*]/4 } & GenerateGroupWithGCGSubst$2=3/26 Tile{ AsIs: (/15 } Tile{ AsIs: e.GCG-Commands#3/2 } Tile{ AsIs: )/16 } Tile{ AsIs: s.FnGenSubst#1/5 } Tile{ HalfReuse: s.FnGenResult1 #6/21 AsIs: (/24 AsIs: e.MarkedPattern#3/22 AsIs: )/25 } Tile{ AsIs: s.ContextSize#3/17 } Tile{ AsIs: s.BaseNum#2/7 AsIs: s.Depth#1/8 } Tile{ HalfReuse: {*}/20 } </27 & NarrowSentenceSubstitutions/28 Tile{ AsIs: (/11 AsIs: e.NewGCG-Subst#2/9 AsIs: )/12 } Tile{ AsIs: e.SentencesWithSubst#1/13 } >/29 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_name( vm, context[26], ref_gen_GenerateGroupWithGCGSubst_S2A3.ref(vm) ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( vm, context[27] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[28], ref_NarrowSentenceSubstitutions.ref(vm) ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( vm, context[29] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_closure_head( context[4] );
  refalrts::reinit_svar( context[21], context[6] );
  refalrts::reinit_unwrapped_closure( context[20], context[4] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[29] );
  refalrts::push_stack( vm, context[27] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[24], context[25] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[29], context[29] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_evar( res, context[27], context[28] );
  res = refalrts::splice_evar( res, context[20], context[20] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_evar( res, context[17], context[17] );
  res = refalrts::splice_evar( res, context[21], context[25] );
  res = refalrts::splice_evar( res, context[5], context[5] );
  res = refalrts::splice_evar( res, context[16], context[16] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[15], context[15] );
  res = refalrts::splice_evar( res, context[26], context[26] );
  refalrts::splice_to_freelist_open( vm, context[4], res );
  refalrts::wrap_closure( context[20] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_GenerateGroupWithGCGSubst_S2A2("GenerateGroupWithGCGSubst$2=2", 2843096177U, 236654120U, func_gen_GenerateGroupWithGCGSubst_S2A2);


static refalrts::FnResult func_gen_GenerateGroupWithGCGSubst_S2A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  // issue here memory for vars with 29 elems
  refalrts::Iter context[29];
  refalrts::zeros( context, 29 );
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
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </18 Tile{ HalfReuse: [*]/0 Reuse: & GenerateGroupWithGCGSubst$2=2/4 AsIs: s.FnGenSubst#1/5 AsIs: s.FnGenResult#1/6 } Tile{ AsIs: s.BaseNum#2/17 } Tile{ AsIs: s.Depth#1/7 AsIs: (/10 } e.NewGCG-Subst#2/2/19 )/21 (/22 Tile{ AsIs: e.SentencesWithSubst#1/8 } )/23 {*}/24 </25 & CodeForSubst/26 Tile{ HalfReuse: s.FnGenSubst1 #5/11 AsIs: s.ContextSize#1/12 AsIs: (/15 AsIs: e.MarkedPattern#1/13 AsIs: )/16 } Tile{ AsIs: e.NewGCG-Subst#2/2 } s.Depth#1/7/27 >/28 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( vm, context[18] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(vm, context[19], context[20], context[2], context[3]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[21] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( vm, context[22] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[23] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_unwrapped_closure( vm, context[24], context[0] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( vm, context[25] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[26], ref_CodeForSubst.ref(vm) ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_stvar(vm, context[27], context[7]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( vm, context[28] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_closure_head( context[0] );
  refalrts::update_name( context[4], ref_gen_GenerateGroupWithGCGSubst_S2A2.ref(vm) );
  refalrts::reinit_svar( context[11], context[5] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[18] );
  refalrts::push_stack( vm, context[28] );
  refalrts::push_stack( vm, context[25] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[22], context[23] );
  refalrts::link_brackets( context[10], context[21] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[27], context[28] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[11], context[16] );
  res = refalrts::splice_evar( res, context[23], context[26] );
  res = refalrts::splice_evar( res, context[8], context[9] );
  res = refalrts::splice_evar( res, context[21], context[22] );
  res = refalrts::splice_evar( res, context[19], context[20] );
  res = refalrts::splice_evar( res, context[7], context[10] );
  res = refalrts::splice_evar( res, context[17], context[17] );
  res = refalrts::splice_evar( res, context[0], context[6] );
  res = refalrts::splice_evar( res, context[18], context[18] );
  refalrts::use( res );
  refalrts::wrap_closure( context[24] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_GenerateGroupWithGCGSubst_S2A1("GenerateGroupWithGCGSubst$2=1", 2843096177U, 236654120U, func_gen_GenerateGroupWithGCGSubst_S2A1);


static refalrts::FnResult func_GenerateGroupWithGCGSubst(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  // issue here memory for vars with 24 elems
  refalrts::Iter context[24];
  refalrts::zeros( context, 24 );
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
    // </0 & GenerateGroupWithGCGSubst/4 s.FnGenSubst#1/5 s.FnGenResult#1/6 (/9 e.MarkedPattern#1/7 )/10 (/13 (/22 e.SentenceWithSubst#1/20 )/23 )/14 s.ContextSize#1/15 s.BaseNum#1/16 s.Depth#1/17 e.NewGCG-Subst#1/2 >/1
    context[18] = context[11];
    context[19] = context[12];
    context[20] = 0;
    context[21] = 0;
    context[22] = refalrts::brackets_left( context[20], context[21], context[18], context[19] );
    if( ! context[22] )
      continue;
    refalrts::bracket_pointers(context[22], context[23]);
    if( ! refalrts::empty_seq( context[18], context[19] ) )
      continue;
    // closed e.MarkedPattern#1 as range 7
    // closed e.SentenceWithSubst#1 as range 20
    // closed e.NewGCG-Subst#1 as range 2
    //DEBUG: s.FnGenSubst#1: 5
    //DEBUG: s.FnGenResult#1: 6
    //DEBUG: s.ContextSize#1: 15
    //DEBUG: s.BaseNum#1: 16
    //DEBUG: s.Depth#1: 17
    //DEBUG: e.MarkedPattern#1: 7
    //DEBUG: e.SentenceWithSubst#1: 20
    //DEBUG: e.NewGCG-Subst#1: 2

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} )/10 (/13 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.ContextSize#1/15 s.BaseNum#1/16 s.Depth#1/17 e.NewGCG-Subst#1/2 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & GenerateSingleSentence/4 AsIs: s.FnGenSubst#1/5 AsIs: s.FnGenResult#1/6 HalfReuse: s.ContextSize1 #15/9 } Tile{ AsIs: (/22 } Tile{ AsIs: e.MarkedPattern#1/7 } Tile{ AsIs: )/23 HalfReuse: s.Depth1 #17/14 } Tile{ AsIs: e.SentenceWithSubst#1/20 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_GenerateSingleSentence.ref(vm) );
    refalrts::reinit_svar( context[9], context[15] );
    refalrts::reinit_svar( context[14], context[17] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[22], context[23] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[20], context[21] );
    res = refalrts::splice_evar( res, context[23], context[14] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_evar( res, context[22], context[22] );
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
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </18 Tile{ HalfReuse: [*]/0 Reuse: & GenerateGroupWithGCGSubst$2=1/4 AsIs: s.FnGenSubst#1/5 AsIs: s.FnGenResult#1/6 } Tile{ HalfReuse: s.Depth1 #17/10 AsIs: (/13 AsIs: e.SentencesWithSubst#1/11 AsIs: )/14 AsIs: s.ContextSize#1/15 } Tile{ AsIs: (/9 } Tile{ AsIs: e.MarkedPattern#1/7 } )/19 {*}/20 </21 & EnumerateVars-Subst/22 Tile{ AsIs: s.BaseNum#1/16 AsIs: s.Depth#1/17 AsIs: e.NewGCG-Subst#1/2 AsIs: >/1 } >/23 Tile{ ]] }
  if( ! refalrts::alloc_open_call( vm, context[18] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[19] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_unwrapped_closure( vm, context[20], context[0] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( vm, context[21] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[22], ref_EnumerateVarsm_Subst.ref(vm) ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( vm, context[23] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_closure_head( context[0] );
  refalrts::update_name( context[4], ref_gen_GenerateGroupWithGCGSubst_S2A1.ref(vm) );
  refalrts::reinit_svar( context[10], context[17] );
  refalrts::push_stack( vm, context[23] );
  refalrts::push_stack( vm, context[18] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[21] );
  refalrts::link_brackets( context[9], context[19] );
  refalrts::link_brackets( context[13], context[14] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[23], context[23] );
  res = refalrts::splice_evar( res, context[16], context[1] );
  res = refalrts::splice_evar( res, context[19], context[22] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_evar( res, context[9], context[9] );
  res = refalrts::splice_evar( res, context[10], context[15] );
  res = refalrts::splice_evar( res, context[0], context[6] );
  res = refalrts::splice_evar( res, context[18], context[18] );
  refalrts::use( res );
  refalrts::wrap_closure( context[20] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_GenerateGroupWithGCGSubst("GenerateGroupWithGCGSubst", 2843096177U, 236654120U, func_GenerateGroupWithGCGSubst);


static refalrts::FnResult func_gen_CodeForSubst_A2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
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
  if( ! refalrts::alloc_open_bracket( vm, context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[12] ) )
    return refalrts::cNoMemory;
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

static refalrts::NativeReference nat_ref_gen_CodeForSubst_A2("CodeForSubst=2", 2843096177U, 236654120U, func_gen_CodeForSubst_A2);


static refalrts::FnResult func_gen_CodeForSubst_A2B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
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
    // </0 & CodeForSubst=2:1/4 s.ContextSize#1/5 (/8 e.SubstsAndJunks#2/6 )/9 0/10 >/1
    if( ! refalrts::number_term( 0UL, context[10] ) )
      continue;
    // closed e.SubstsAndJunks#2 as range 6
    //DEBUG: s.ContextSize#1: 5
    //DEBUG: e.SubstsAndJunks#2: 6

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & CodeForSubst=2:1/4 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} 0/10 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: s.ContextSize#1/5 AsIs: (/8 } Tile{ AsIs: )/9 } Tile{ AsIs: e.SubstsAndJunks#2/6 } Tile{ ]] }
    refalrts::link_brackets( context[8], context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[6], context[7] );
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
  refalrts::update_name( context[4], ref_MakeSavers.ref(vm) );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[6], context[7] );
  refalrts::splice_to_freelist_open( vm, context[5], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_CodeForSubst_A2B1("CodeForSubst=2:1", 2843096177U, 236654120U, func_gen_CodeForSubst_A2B1);


static refalrts::FnResult func_gen_CodeForSubst_A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & CodeForSubst=1/4 s.FnGenSubst#1/5 s.ContextSize#1/6 s.Depth#1/7 e.SubstsAndJunks#2/2 >/1
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
  // closed e.SubstsAndJunks#2 as range 2
  //DEBUG: s.FnGenSubst#1: 5
  //DEBUG: s.ContextSize#1: 6
  //DEBUG: s.Depth#1: 7
  //DEBUG: e.SubstsAndJunks#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 HalfReuse: [*]/4 } & CodeForSubst=2/8 Tile{ AsIs: s.FnGenSubst#1/5 } {*}/9 </10 [*]/11 & CodeForSubst=2:1/12 Tile{ AsIs: s.ContextSize#1/6 } (/13 Tile{ AsIs: e.SubstsAndJunks#2/2 } )/14 {*}/15 Tile{ AsIs: s.Depth#1/7 } >/16 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_name( vm, context[8], ref_gen_CodeForSubst_A2.ref(vm) ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_unwrapped_closure( vm, context[9], context[4] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( vm, context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_closure_head( vm, context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[12], ref_gen_CodeForSubst_A2B1.ref(vm) ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( vm, context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_unwrapped_closure( vm, context[15], context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( vm, context[16] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_closure_head( context[4] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[16] );
  refalrts::push_stack( vm, context[10] );
  refalrts::link_brackets( context[13], context[14] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[16], context[16] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[14], context[15] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[13], context[13] );
  res = refalrts::splice_evar( res, context[6], context[6] );
  res = refalrts::splice_evar( res, context[9], context[12] );
  res = refalrts::splice_evar( res, context[5], context[5] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  refalrts::use( res );
  refalrts::wrap_closure( context[9] );
  refalrts::wrap_closure( context[15] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_CodeForSubst_A1("CodeForSubst=1", 2843096177U, 236654120U, func_gen_CodeForSubst_A1);


static refalrts::FnResult func_CodeForSubst(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
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
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Depth#1/11 {REMOVED TILE}
  //RESULT: Tile{ [[ } </12 Tile{ HalfReuse: [*]/0 Reuse: & CodeForSubst=1/4 AsIs: s.FnGenSubst#1/5 AsIs: s.ContextSize#1/6 HalfReuse: s.Depth1 #11/9 } {*}/13 </14 & ComposeVars/15 (/16 Tile{ AsIs: e.MarkedPattern#1/7 } Tile{ AsIs: )/10 } (/17 Tile{ AsIs: e.Substitute#1/2 } )/18 >/19 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( vm, context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_unwrapped_closure( vm, context[13], context[0] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( vm, context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[15], ref_ComposeVars.ref(vm) ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( vm, context[16] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( vm, context[17] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[18] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( vm, context[19] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_closure_head( context[0] );
  refalrts::update_name( context[4], ref_gen_CodeForSubst_A1.ref(vm) );
  refalrts::reinit_svar( context[9], context[11] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[12] );
  refalrts::push_stack( vm, context[19] );
  refalrts::push_stack( vm, context[14] );
  refalrts::link_brackets( context[17], context[18] );
  refalrts::link_brackets( context[16], context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[18], context[19] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[17], context[17] );
  res = refalrts::splice_evar( res, context[10], context[10] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_evar( res, context[13], context[16] );
  res = refalrts::splice_evar( res, context[0], context[9] );
  res = refalrts::splice_evar( res, context[12], context[12] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  refalrts::wrap_closure( context[13] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_CodeForSubst("CodeForSubst", 2843096177U, 236654120U, func_CodeForSubst);


static refalrts::FnResult func_gen_GenerateSingleSentence_A2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
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
  context[9] = refalrts::ident_left(  ident_CmdIssueMemory.ref(vm), context[5], context[6] );
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

static refalrts::NativeReference nat_ref_gen_GenerateSingleSentence_A2("GenerateSingleSentence=2", 2843096177U, 236654120U, func_gen_GenerateSingleSentence_A2);


static refalrts::FnResult func_gen_GenerateSingleSentence_A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
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
  if( ! refalrts::alloc_open_call( vm, context[23] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[24], ref_gen_GenerateSingleSentence_A2.ref(vm) ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( vm, context[25] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_GenResult.ref(vm) );
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

static refalrts::NativeReference nat_ref_gen_GenerateSingleSentence_A1("GenerateSingleSentence=1", 2843096177U, 236654120U, func_gen_GenerateSingleSentence_A1);


static refalrts::FnResult func_GenerateSingleSentence(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  // issue here memory for vars with 26 elems
  refalrts::Iter context[26];
  refalrts::zeros( context, 26 );
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
  //RESULT: Tile{ [[ } </21 [*]/22 & GenerateSingleSentence=1/23 Tile{ AsIs: s.FnGenResult#1/10 } (/24 Tile{ AsIs: e.Conditions#1/2 } Tile{ AsIs: )/20 } Tile{ AsIs: (/7 AsIs: e.Result#1/5 AsIs: )/8 HalfReuse: {*}/1 } Tile{ AsIs: </0 Reuse: & CodeForSubst/4 AsIs: s.FnGenSubst#1/9 } Tile{ AsIs: s.ContextSize#1/11 AsIs: (/14 AsIs: e.MarkedPattern#1/12 AsIs: )/15 } Tile{ AsIs: e.Substitute#1/17 } Tile{ AsIs: s.Depth#1/16 HalfReuse: >/19 } >/25 Tile{ ]] }
  if( ! refalrts::alloc_open_call( vm, context[21] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_closure_head( vm, context[22] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[23], ref_gen_GenerateSingleSentence_A1.ref(vm) ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( vm, context[24] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( vm, context[25] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_unwrapped_closure( context[1], context[22] );
  refalrts::update_name( context[4], ref_CodeForSubst.ref(vm) );
  refalrts::reinit_close_call( context[19] );
  refalrts::push_stack( vm, context[25] );
  refalrts::push_stack( vm, context[21] );
  refalrts::push_stack( vm, context[19] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[14], context[15] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[24], context[20] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[25], context[25] );
  res = refalrts::splice_evar( res, context[16], context[19] );
  res = refalrts::splice_evar( res, context[17], context[18] );
  res = refalrts::splice_evar( res, context[11], context[15] );
  res = refalrts::splice_evar( res, context[0], context[9] );
  res = refalrts::splice_evar( res, context[7], context[1] );
  res = refalrts::splice_evar( res, context[20], context[20] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[24], context[24] );
  res = refalrts::splice_evar( res, context[10], context[10] );
  res = refalrts::splice_evar( res, context[21], context[23] );
  refalrts::use( res );
  refalrts::wrap_closure( context[1] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_GenerateSingleSentence("GenerateSingleSentence", 2843096177U, 236654120U, func_GenerateSingleSentence);


static refalrts::FnResult func_gen_ComposeVars_S1A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
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
  refalrts::reinit_open_bracket( context[4] );
  refalrts::reinit_ident( context[7], ident_Junk.ref(vm) );
  refalrts::reinit_open_bracket( context[25] );
  refalrts::reinit_open_call( context[24] );
  refalrts::reinit_name( context[13], ref_ComposeVars.ref(vm) );
  refalrts::reinit_close_bracket( context[12] );
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

static refalrts::NativeReference nat_ref_gen_ComposeVars_S1A1("ComposeVars$1=1", 2843096177U, 236654120U, func_gen_ComposeVars_S1A1);


static refalrts::FnResult func_gen_ComposeVars_S1A1B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
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
    refalrts::reinit_ident( context[1], ident_S.ref(vm) );
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
    refalrts::reinit_ident( context[1], ident_T.ref(vm) );
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
  refalrts::reinit_ident( context[1], ident_E.ref(vm) );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ComposeVars_S1A1B1("ComposeVars$1=1:1", 2843096177U, 236654120U, func_gen_ComposeVars_S1A1B1);


static refalrts::FnResult func_ComposeVars(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  // issue here memory for vars with 50 elems
  refalrts::Iter context[50];
  refalrts::zeros( context, 50 );
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
      context[27] = refalrts::ident_left(  ident_TkVariable.ref(vm), context[23], context[24] );
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
        //TRASH: {REMOVED TILE} {REMOVED TILE} s.Mode#1/28 e.Name#1/23 s.Offset#1/29 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.Name#1/44 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } </46 Tile{ HalfReuse: [*]/0 Reuse: & ComposeVars$1=1/4 AsIs: (/7 AsIs: e.MarkedPattern-B#1/17 HalfReuse: )/25 HalfReuse: s.Offset1 #29/27 } (/47 Tile{ AsIs: e.Subst#1/34 } Tile{ AsIs: )/41 } Tile{ HalfReuse: (/26 AsIs: e.MarkedPattern-E#1/19 AsIs: )/8 AsIs: (/11 AsIs: e.Substitute-B#1/30 HalfReuse: )/36 } Tile{ HalfReuse: (/37 AsIs: e.Substitute-E#1/32 AsIs: )/12 HalfReuse: {*}/1 } Tile{ HalfReuse: </42 HalfReuse: & ComposeVars$1=1:1/40 AsIs: s.Mode#1/43 } >/48 >/49 Tile{ ]] }
        if( ! refalrts::alloc_open_call( vm, context[46] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_open_bracket( vm, context[47] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_call( vm, context[48] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_call( vm, context[49] ) )
          return refalrts::cNoMemory;
        refalrts::reinit_closure_head( context[0] );
        refalrts::update_name( context[4], ref_gen_ComposeVars_S1A1.ref(vm) );
        refalrts::reinit_close_bracket( context[25] );
        refalrts::reinit_svar( context[27], context[29] );
        refalrts::reinit_open_bracket( context[26] );
        refalrts::reinit_close_bracket( context[36] );
        refalrts::reinit_open_bracket( context[37] );
        refalrts::reinit_unwrapped_closure( context[1], context[0] );
        refalrts::reinit_open_call( context[42] );
        refalrts::reinit_name( context[40], ref_gen_ComposeVars_S1A1B1.ref(vm) );
        refalrts::push_stack( vm, context[49] );
        refalrts::push_stack( vm, context[46] );
        refalrts::push_stack( vm, context[48] );
        refalrts::push_stack( vm, context[42] );
        refalrts::link_brackets( context[37], context[12] );
        refalrts::link_brackets( context[11], context[36] );
        refalrts::link_brackets( context[26], context[8] );
        refalrts::link_brackets( context[47], context[41] );
        refalrts::link_brackets( context[7], context[25] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[48], context[49] );
        res = refalrts::splice_evar( res, context[42], context[43] );
        res = refalrts::splice_evar( res, context[37], context[1] );
        res = refalrts::splice_evar( res, context[26], context[36] );
        res = refalrts::splice_evar( res, context[41], context[41] );
        res = refalrts::splice_evar( res, context[34], context[35] );
        res = refalrts::splice_evar( res, context[47], context[47] );
        res = refalrts::splice_evar( res, context[0], context[27] );
        res = refalrts::splice_evar( res, context[46], context[46] );
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        refalrts::wrap_closure( context[1] );
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
  refalrts::reinit_open_bracket( context[4] );
  refalrts::reinit_ident( context[7], ident_Junk.ref(vm) );
  refalrts::link_brackets( context[4], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[4], context[8] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ComposeVars("ComposeVars", 2843096177U, 236654120U, func_ComposeVars);


static refalrts::FnResult func_gen_EnumerateVarsRec_L1S2A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
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
  if( ! refalrts::alloc_ident( vm, context[6], ident_Brackets.ref(vm) ) )
    return refalrts::cNoMemory;
  refalrts::reinit_svar( context[0], context[5] );
  refalrts::reinit_open_bracket( context[4] );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[4], context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[6], context[6] );
  refalrts::splice_to_freelist_open( vm, context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_EnumerateVarsRec_L1S2A1("EnumerateVarsRec\\1$2=1", 2843096177U, 236654120U, func_gen_EnumerateVarsRec_L1S2A1);


static refalrts::FnResult func_gen_EnumerateVarsRec_L1S3A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
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
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_ident( context[4], ident_ADTm_Brackets.ref(vm) );
  refalrts::reinit_close_bracket( context[1] );
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

static refalrts::NativeReference nat_ref_gen_EnumerateVarsRec_L1S3A1("EnumerateVarsRec\\1$3=1", 2843096177U, 236654120U, func_gen_EnumerateVarsRec_L1S3A1);


static refalrts::FnResult func_gen_EnumerateVarsRec_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
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
      if( ! refalrts::ident_term(  ident_TkVariable.ref(vm), context[10] ) )
        continue;
      if( ! refalrts::svar_left( context[13], context[11], context[12] ) )
        continue;
      if( ! refalrts::empty_seq( context[11], context[12] ) )
        continue;
      //DEBUG: s.Next#2: 5
      //DEBUG: s.Type#2: 13

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Inc/4 AsIs: s.Next#2/5 HalfReuse: >/6 HalfReuse: (/10 } # TkVariable/14 Tile{ AsIs: s.Type#2/13 HalfReuse: 'n'/7 HalfReuse: 'e'/1 } 'w'/15 s.Next#2/5/16 )/17 Tile{ ]] }
      if( ! refalrts::alloc_ident( vm, context[14], ident_TkVariable.ref(vm) ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( vm, context[15], 'w' ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(vm, context[16], context[5]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( vm, context[17] ) )
        return refalrts::cNoMemory;
      refalrts::update_name( context[4], ref_Inc.ref(vm) );
      refalrts::reinit_close_call( context[6] );
      refalrts::reinit_open_bracket( context[10] );
      refalrts::reinit_char( context[7], 'n' );
      refalrts::reinit_char( context[1], 'e' );
      refalrts::link_brackets( context[10], context[17] );
      refalrts::push_stack( vm, context[6] );
      refalrts::push_stack( vm, context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[15], context[17] );
      res = refalrts::splice_evar( res, context[13], context[1] );
      res = refalrts::splice_evar( res, context[14], context[14] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & EnumerateVarsRec\1/4 s.Next#2/5 (/6 # Brackets/10 e.Nested#2/8 )/7 >/1
      if( ! refalrts::ident_term(  ident_Brackets.ref(vm), context[10] ) )
        continue;
      // closed e.Nested#2 as range 8
      //DEBUG: s.Next#2: 5
      //DEBUG: e.Nested#2: 8

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} s.Next#2/5 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & EnumerateVarsRec\1$2=1/4 } </11 Tile{ HalfReuse: & EnumerateVarsRec/6 HalfReuse: s.Next2 #5/10 AsIs: e.Nested#2/8 HalfReuse: >/7 AsIs: >/1 ]] }
      if( ! refalrts::alloc_open_call( vm, context[11] ) )
        return refalrts::cNoMemory;
      refalrts::update_name( context[4], ref_gen_EnumerateVarsRec_L1S2A1.ref(vm) );
      refalrts::reinit_name( context[6], ref_EnumerateVarsRec.ref(vm) );
      refalrts::reinit_svar( context[10], context[5] );
      refalrts::reinit_close_call( context[7] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[7] );
      refalrts::push_stack( vm, context[11] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[6];
      res = refalrts::splice_evar( res, context[11], context[11] );
      refalrts::splice_to_freelist_open( vm, context[4], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & EnumerateVarsRec\1/4 s.Next#2/5 (/6 # ADT-Brackets/10 (/15 e.Name#2/13 )/16 e.Nested#2/11 )/7 >/1
    context[11] = context[8];
    context[12] = context[9];
    if( ! refalrts::ident_term(  ident_ADTm_Brackets.ref(vm), context[10] ) )
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
    //RESULT: Tile{ [[ } </17 Tile{ HalfReuse: [*]/6 HalfReuse: & EnumerateVarsRec\1$3=1/10 AsIs: (/15 AsIs: e.Name#2/13 AsIs: )/16 } {*}/18 Tile{ AsIs: </0 Reuse: & EnumerateVarsRec/4 AsIs: s.Next#2/5 } Tile{ AsIs: e.Nested#2/11 } Tile{ HalfReuse: >/7 AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_call( vm, context[17] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_unwrapped_closure( vm, context[18], context[6] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_closure_head( context[6] );
    refalrts::reinit_name( context[10], ref_gen_EnumerateVarsRec_L1S3A1.ref(vm) );
    refalrts::update_name( context[4], ref_EnumerateVarsRec.ref(vm) );
    refalrts::reinit_close_call( context[7] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[17] );
    refalrts::push_stack( vm, context[7] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[15], context[16] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[7];
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[0], context[5] );
    res = refalrts::splice_evar( res, context[18], context[18] );
    res = refalrts::splice_evar( res, context[6], context[16] );
    res = refalrts::splice_evar( res, context[17], context[17] );
    refalrts::use( res );
    refalrts::wrap_closure( context[18] );
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

static refalrts::NativeReference nat_ref_gen_EnumerateVarsRec_L1("EnumerateVarsRec\\1", 2843096177U, 236654120U, func_gen_EnumerateVarsRec_L1);


static refalrts::FnResult func_EnumerateVarsRec(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  // issue here memory for vars with 7 elems
  refalrts::Iter context[7];
  refalrts::zeros( context, 7 );
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
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </6 Tile{ HalfReuse: & MapReduce/0 Reuse: & EnumerateVarsRec\1/4 AsIs: s.NextNumber#1/5 AsIs: e.Expr#1/2 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( vm, context[6] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_name( context[0], ref_MapReduce.ref(vm) );
  refalrts::update_name( context[4], ref_gen_EnumerateVarsRec_L1.ref(vm) );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[6] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[6], context[6] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_EnumerateVarsRec("EnumerateVarsRec", 2843096177U, 236654120U, func_EnumerateVarsRec);


static refalrts::FnResult func_gen_EnumerateVarsm_Subst_L1A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
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
  if( ! refalrts::alloc_open_bracket( vm, context[10] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_svar( context[0], context[9] );
  refalrts::reinit_char( context[4], ':' );
  refalrts::reinit_close_bracket( context[1] );
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

static refalrts::NativeReference nat_ref_gen_EnumerateVarsm_Subst_L1A1("EnumerateVars-Subst\\1=1", 2843096177U, 236654120U, func_gen_EnumerateVarsm_Subst_L1A1);


static refalrts::FnResult func_gen_EnumerateVarsm_Subst_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
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
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 HalfReuse: [*]/4 } Tile{ HalfReuse: & EnumerateVars-Subst\1=1/13 AsIs: (/11 AsIs: e.Var#2/9 AsIs: )/12 HalfReuse: {*}/8 HalfReuse: </1 } Tile{ HalfReuse: & EnumerateVarsRec/7 } Tile{ AsIs: s.NextNumber#2/14 } Tile{ AsIs: e.Value#2/5 } >/15 >/16 Tile{ ]] }
  if( ! refalrts::alloc_close_call( vm, context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( vm, context[16] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_closure_head( context[4] );
  refalrts::reinit_name( context[13], ref_gen_EnumerateVarsm_Subst_L1A1.ref(vm) );
  refalrts::reinit_unwrapped_closure( context[8], context[4] );
  refalrts::reinit_open_call( context[1] );
  refalrts::reinit_name( context[7], ref_EnumerateVarsRec.ref(vm) );
  refalrts::push_stack( vm, context[16] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[15] );
  refalrts::push_stack( vm, context[1] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[15], context[16] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[14], context[14] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[13], context[1] );
  refalrts::use( res );
  refalrts::wrap_closure( context[8] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_EnumerateVarsm_Subst_L1("EnumerateVars-Subst\\1", 2843096177U, 236654120U, func_gen_EnumerateVarsm_Subst_L1);


static refalrts::FnResult func_EnumerateVarsm_Subst(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  // issue here memory for vars with 8 elems
  refalrts::Iter context[8];
  refalrts::zeros( context, 8 );
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
  //TRASH: {REMOVED TILE} {REMOVED TILE} s.Depth#1/6 {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & MapReduce/4 } & EnumerateVars-Subst\1/7 Tile{ AsIs: s.StartNumber#1/5 } Tile{ AsIs: e.Substitute#1/2 } Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_name( vm, context[7], ref_gen_EnumerateVarsm_Subst_L1.ref(vm) ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_MapReduce.ref(vm) );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[5], context[5] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  refalrts::splice_to_freelist_open( vm, context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_EnumerateVarsm_Subst("EnumerateVars-Subst", 2843096177U, 236654120U, func_EnumerateVarsm_Subst);


static refalrts::FnResult func_gen_FindDivision_A3(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
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
  if( ! refalrts::alloc_close_bracket( vm, context[17] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[18] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_DoFindDivision.ref(vm) );
  refalrts::reinit_open_bracket( context[1] );
  refalrts::reinit_open_bracket( context[8] );
  refalrts::reinit_close_bracket( context[15] );
  refalrts::reinit_close_call( context[16] );
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

static refalrts::NativeReference nat_ref_gen_FindDivision_A3("FindDivision=3", 2843096177U, 236654120U, func_gen_FindDivision_A3);


static refalrts::FnResult func_gen_FindDivision_A2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
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
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 } [*]/13 & FindDivision=3/14 (/15 Tile{ AsIs: e.FirstImage#3/9 } Tile{ AsIs: )/12 } (/16 Tile{ AsIs: e.FirstSentence#3/2 } Tile{ HalfReuse: )/4 AsIs: (/7 AsIs: e.Sentences#1/5 AsIs: )/8 HalfReuse: {*}/11 } </17 & MakeTrivialSubstImage/18 e.FirstImage#3/9/19 >/21 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_closure_head( vm, context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[14], ref_gen_FindDivision_A3.ref(vm) ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( vm, context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( vm, context[16] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( vm, context[17] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[18], ref_MakeTrivialSubstImage.ref(vm) ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(vm, context[19], context[20], context[9], context[10]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( vm, context[21] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_close_bracket( context[4] );
  refalrts::reinit_unwrapped_closure( context[11], context[13] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[21] );
  refalrts::push_stack( vm, context[17] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[16], context[4] );
  refalrts::link_brackets( context[15], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[17], context[21] );
  res = refalrts::splice_evar( res, context[4], context[11] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[16], context[16] );
  res = refalrts::splice_evar( res, context[12], context[12] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[13], context[15] );
  refalrts::use( res );
  refalrts::wrap_closure( context[11] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_FindDivision_A2("FindDivision=2", 2843096177U, 236654120U, func_gen_FindDivision_A2);


static refalrts::FnResult func_FindDivision(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
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
  if( ! refalrts::alloc_open_call( vm, context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[11], ref_gen_FindDivision_C1.ref(vm) ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(vm, context[12], context[13], context[5], context[6]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( vm, context[10] ) )
    return refalrts::cNoMemory;
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
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.FirstSubst#2/14 )/17 e.FirstConditions#2/11 {REMOVED TILE} e.FirstResult#2/18 )/21 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 HalfReuse: [*]/4 HalfReuse: & FindDivision=2/7 } Tile{ HalfReuse: (/8 AsIs: e.Sentences#1/2 HalfReuse: )/9 HalfReuse: {*}/13 HalfReuse: </16 } Tile{ HalfReuse: & ImagedSentence/20 } Tile{ AsIs: e.FirstSentence#1/5 } Tile{ AsIs: >/10 AsIs: >/1 ]] }
    refalrts::reinit_closure_head( context[4] );
    refalrts::reinit_name( context[7], ref_gen_FindDivision_A2.ref(vm) );
    refalrts::reinit_open_bracket( context[8] );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::reinit_unwrapped_closure( context[13], context[4] );
    refalrts::reinit_open_call( context[16] );
    refalrts::reinit_name( context[20], ref_ImagedSentence.ref(vm) );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[10] );
    refalrts::push_stack( vm, context[16] );
    refalrts::link_brackets( context[8], context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[10];
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[20], context[20] );
    res = refalrts::splice_evar( res, context[8], context[16] );
    refalrts::splice_to_freelist_open( vm, context[7], res );
    refalrts::wrap_closure( context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  refalrts::splice_to_freelist(vm, context[9], context[10]);
  return refalrts::cRecognitionImpossible;
}

static refalrts::NativeReference nat_ref_FindDivision("FindDivision", 2843096177U, 236654120U, func_FindDivision);


static refalrts::FnResult func_gen_ImagedSentence_A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
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
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_close_bracket( context[4] );
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

static refalrts::NativeReference nat_ref_gen_ImagedSentence_A1("ImagedSentence=1", 2843096177U, 236654120U, func_gen_ImagedSentence_A1);


static refalrts::FnResult func_ImagedSentence(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
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
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </13 Tile{ HalfReuse: [*]/0 Reuse: & ImagedSentence=1/4 AsIs: (/7 AsIs: e.Subst#1/5 AsIs: )/8 } (/14 Tile{ AsIs: e.Conditions#1/2 } )/15 Tile{ AsIs: (/11 AsIs: e.Result#1/9 AsIs: )/12 HalfReuse: {*}/1 } </16 & Subst-BuildImage/17 e.Subst#1/5/18 >/20 >/21 Tile{ ]] }
  if( ! refalrts::alloc_open_call( vm, context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( vm, context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( vm, context[16] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[17], ref_Substm_BuildImage.ref(vm) ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(vm, context[18], context[19], context[5], context[6]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( vm, context[20] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( vm, context[21] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_closure_head( context[0] );
  refalrts::update_name( context[4], ref_gen_ImagedSentence_A1.ref(vm) );
  refalrts::reinit_unwrapped_closure( context[1], context[0] );
  refalrts::push_stack( vm, context[21] );
  refalrts::push_stack( vm, context[13] );
  refalrts::push_stack( vm, context[20] );
  refalrts::push_stack( vm, context[16] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[14], context[15] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[16], context[21] );
  res = refalrts::splice_evar( res, context[11], context[1] );
  res = refalrts::splice_evar( res, context[15], context[15] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[14], context[14] );
  res = refalrts::splice_evar( res, context[0], context[8] );
  res = refalrts::splice_evar( res, context[13], context[13] );
  refalrts::use( res );
  refalrts::wrap_closure( context[1] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ImagedSentence("ImagedSentence", 2843096177U, 236654120U, func_ImagedSentence);


static refalrts::FnResult func_gen_MakeTrivialSubstImage_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  // issue here memory for vars with 25 elems
  refalrts::Iter context[25];
  refalrts::zeros( context, 25 );
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
    // </0 & MakeTrivialSubstImage\1/4 (/7 t.Image#2/15 ':'/13 (/11 'e'/14 e.Index#2/9 )/12 )/8 >/1
    if( ! refalrts::char_term( 'e', context[14] ) )
      continue;
    // closed e.Index#2 as range 9
    //DEBUG: t.Image#2: 15
    //DEBUG: e.Index#2: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} t.Image#2/15 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: (/4 HalfReuse: # MN/7 } ':'/17 Tile{ HalfReuse: 0/1 } ','/18 (/19 )/20 ','/21 (/22 )/23 )/24 Tile{ AsIs: ':'/13 AsIs: (/11 AsIs: 'e'/14 AsIs: e.Index#2/9 AsIs: )/12 AsIs: )/8 } Tile{ ]] }
    if( ! refalrts::alloc_char( vm, context[17], ':' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( vm, context[18], ',' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( vm, context[19] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( vm, context[20] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( vm, context[21], ',' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( vm, context[22] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( vm, context[23] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( vm, context[24] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_open_bracket( context[4] );
    refalrts::reinit_ident( context[7], ident_MN.ref(vm) );
    refalrts::reinit_number( context[1], 0UL );
    refalrts::link_brackets( context[0], context[8] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[4], context[24] );
    refalrts::link_brackets( context[22], context[23] );
    refalrts::link_brackets( context[19], context[20] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[13], context[8] );
    res = refalrts::splice_evar( res, context[18], context[24] );
    res = refalrts::splice_evar( res, context[1], context[1] );
    res = refalrts::splice_evar( res, context[17], context[17] );
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
  if (! refalrts::copy_stvar(vm, context[17], context[14]))
    return refalrts::cNoMemory;
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_open_bracket( context[4] );
  refalrts::reinit_ident( context[7], ident_TkVariable.ref(vm) );
  refalrts::reinit_close_bracket( context[1] );
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

static refalrts::NativeReference nat_ref_gen_MakeTrivialSubstImage_L1("MakeTrivialSubstImage\\1", 2843096177U, 236654120U, func_gen_MakeTrivialSubstImage_L1);


static refalrts::FnResult func_MakeTrivialSubstImage(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  // </0 & MakeTrivialSubstImage/4 e.SubstImage#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.SubstImage#1 as range 2
  //DEBUG: e.SubstImage#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Map/0 Reuse: & MakeTrivialSubstImage\1/4 AsIs: e.SubstImage#1/2 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( vm, context[5] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_name( context[0], ref_Map.ref(vm) );
  refalrts::update_name( context[4], ref_gen_MakeTrivialSubstImage_L1.ref(vm) );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[5] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_MakeTrivialSubstImage("MakeTrivialSubstImage", 2843096177U, 236654120U, func_MakeTrivialSubstImage);


static refalrts::FnResult func_gen_DoFindDivision_S1B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  // issue here memory for vars with 27 elems
  refalrts::Iter context[27];
  refalrts::zeros( context, 27 );
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
    // </0 & DoFindDivision$1:1/4 (/7 e.TrivialGCG#1/5 )/8 (/11 e.Image#1/9 )/12 (/15 e.FirstGroup#1/13 )/16 (/19 e.NextSentence#1/17 )/20 (/23 e.Sentences#1/21 )/24 e.TrivialGCG#1/25 >/1
    // closed e.TrivialGCG#1 as range 5
    if( ! refalrts::repeated_evar_left( vm, context[25], context[26], context[5], context[6], context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Image#1 as range 9
    // closed e.FirstGroup#1 as range 13
    // closed e.NextSentence#1 as range 17
    // closed e.Sentences#1 as range 21
    //DEBUG: e.TrivialGCG#1: 5
    //DEBUG: e.Image#1: 9
    //DEBUG: e.FirstGroup#1: 13
    //DEBUG: e.NextSentence#1: 17
    //DEBUG: e.Sentences#1: 21

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} e.TrivialGCG#1/5 )/8 (/11 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} )/24 e.TrivialGCG#1/25 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: # ForGroup/0 HalfReuse: (/4 HalfReuse: </7 } Tile{ HalfReuse: & Subst-Collapse/23 } Tile{ AsIs: e.Image#1/9 } Tile{ AsIs: >/1 } Tile{ AsIs: )/12 AsIs: (/15 AsIs: e.FirstGroup#1/13 AsIs: )/16 AsIs: (/19 AsIs: e.NextSentence#1/17 AsIs: )/20 } Tile{ AsIs: e.Sentences#1/21 } Tile{ ]] }
    refalrts::reinit_ident( context[0], ident_ForGroup.ref(vm) );
    refalrts::reinit_open_bracket( context[4] );
    refalrts::reinit_open_call( context[7] );
    refalrts::reinit_name( context[23], ref_Substm_Collapse.ref(vm) );
    refalrts::link_brackets( context[19], context[20] );
    refalrts::link_brackets( context[15], context[16] );
    refalrts::link_brackets( context[4], context[12] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[7] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[21], context[22] );
    res = refalrts::splice_evar( res, context[12], context[20] );
    res = refalrts::splice_evar( res, context[1], context[1] );
    res = refalrts::splice_evar( res, context[9], context[10] );
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
  refalrts::update_name( context[4], ref_DoFindDivision.ref(vm) );
  refalrts::reinit_close_bracket( context[23] );
  refalrts::reinit_close_call( context[24] );
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

static refalrts::NativeReference nat_ref_gen_DoFindDivision_S1B1("DoFindDivision$1:1", 2843096177U, 236654120U, func_gen_DoFindDivision_S1B1);


static refalrts::FnResult func_gen_DoFindDivision_S1A2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  // issue here memory for vars with 27 elems
  refalrts::Iter context[27];
  refalrts::zeros( context, 27 );
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
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </25 Tile{ HalfReuse: [*]/0 Reuse: & DoFindDivision$1:1/4 AsIs: (/7 AsIs: e.TrivialGCG#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.Image#1/9 AsIs: )/12 AsIs: (/15 AsIs: e.FirstGroup#1/13 AsIs: )/16 AsIs: (/19 AsIs: e.NextSentence#1/17 AsIs: )/20 AsIs: (/23 AsIs: e.Sentences#1/21 AsIs: )/24 } {*}/26 Tile{ AsIs: e.NewImage#3/2 } Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( vm, context[25] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_unwrapped_closure( vm, context[26], context[0] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_closure_head( context[0] );
  refalrts::update_name( context[4], ref_gen_DoFindDivision_S1B1.ref(vm) );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[25] );
  refalrts::link_brackets( context[23], context[24] );
  refalrts::link_brackets( context[19], context[20] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[26], context[26] );
  res = refalrts::splice_evar( res, context[0], context[24] );
  res = refalrts::splice_evar( res, context[25], context[25] );
  refalrts::use( res );
  refalrts::wrap_closure( context[26] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoFindDivision_S1A2("DoFindDivision$1=2", 2843096177U, 236654120U, func_gen_DoFindDivision_S1A2);


static refalrts::FnResult func_gen_DoFindDivision_S1A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  // issue here memory for vars with 40 elems
  refalrts::Iter context[40];
  refalrts::zeros( context, 40 );
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
  //RESULT: Tile{ [[ } </31 [*]/32 Tile{ HalfReuse: & DoFindDivision$1=2/8 AsIs: (/11 AsIs: e.TrivialGCG#1/9 AsIs: )/12 AsIs: (/15 AsIs: e.Image#1/13 AsIs: )/16 AsIs: (/19 AsIs: e.FirstGroup#1/17 AsIs: )/20 AsIs: (/23 } Tile{ AsIs: e.NextSentence#1/29 } )/33 (/34 Tile{ AsIs: e.Sentences#1/21 } )/35 {*}/36 Tile{ AsIs: </0 Reuse: & Subst-Generalization/4 AsIs: (/7 } e.Image#1/13/37 Tile{ AsIs: )/24 AsIs: (/27 AsIs: e.NextImage#2/25 AsIs: )/28 } >/39 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( vm, context[31] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_closure_head( vm, context[32] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[33] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( vm, context[34] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[35] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_unwrapped_closure( vm, context[36], context[32] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(vm, context[37], context[38], context[13], context[14]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( vm, context[39] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_name( context[8], ref_gen_DoFindDivision_S1A2.ref(vm) );
  refalrts::update_name( context[4], ref_Substm_Generalization.ref(vm) );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[31] );
  refalrts::push_stack( vm, context[39] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[27], context[28] );
  refalrts::link_brackets( context[7], context[24] );
  refalrts::link_brackets( context[34], context[35] );
  refalrts::link_brackets( context[23], context[33] );
  refalrts::link_brackets( context[19], context[20] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[39], context[39] );
  res = refalrts::splice_evar( res, context[24], context[28] );
  res = refalrts::splice_evar( res, context[37], context[38] );
  res = refalrts::splice_evar( res, context[0], context[7] );
  res = refalrts::splice_evar( res, context[35], context[36] );
  res = refalrts::splice_evar( res, context[21], context[22] );
  res = refalrts::splice_evar( res, context[33], context[34] );
  res = refalrts::splice_evar( res, context[29], context[30] );
  res = refalrts::splice_evar( res, context[8], context[23] );
  res = refalrts::splice_evar( res, context[31], context[32] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  refalrts::wrap_closure( context[36] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoFindDivision_S1A1("DoFindDivision$1=1", 2843096177U, 236654120U, func_gen_DoFindDivision_S1A1);


static refalrts::FnResult func_DoFindDivision(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  // issue here memory for vars with 32 elems
  refalrts::Iter context[32];
  refalrts::zeros( context, 32 );
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
    // </0 & DoFindDivision/4 (/7 e.TrivialGCG#1/5 )/8 (/11 e.Image#1/9 )/12 (/15 e.FirstGroup#1/13 )/16 (/21 e.NextSentence#1/19 )/22 e.Sentences#1/17 >/1
    context[17] = context[2];
    context[18] = context[3];
    context[19] = 0;
    context[20] = 0;
    context[21] = refalrts::brackets_left( context[19], context[20], context[17], context[18] );
    if( ! context[21] )
      continue;
    refalrts::bracket_pointers(context[21], context[22]);
    // closed e.TrivialGCG#1 as range 5
    // closed e.Image#1 as range 9
    // closed e.FirstGroup#1 as range 13
    // closed e.NextSentence#1 as range 19
    // closed e.Sentences#1 as range 17
    //DEBUG: e.TrivialGCG#1: 5
    //DEBUG: e.Image#1: 9
    //DEBUG: e.FirstGroup#1: 13
    //DEBUG: e.NextSentence#1: 19
    //DEBUG: e.Sentences#1: 17

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 } [*]/23 & DoFindDivision$1=1/24 (/25 Tile{ AsIs: e.NextSentence#1/19 } Tile{ HalfReuse: )/4 AsIs: (/7 AsIs: e.TrivialGCG#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.Image#1/9 AsIs: )/12 AsIs: (/15 AsIs: e.FirstGroup#1/13 AsIs: )/16 AsIs: (/21 } Tile{ AsIs: e.Sentences#1/17 } Tile{ AsIs: )/22 } {*}/26 </27 & ImagedSentence/28 e.NextSentence#1/19/29 >/31 Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_closure_head( vm, context[23] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( vm, context[24], ref_gen_DoFindDivision_S1A1.ref(vm) ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( vm, context[25] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_unwrapped_closure( vm, context[26], context[23] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( vm, context[27] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( vm, context[28], ref_ImagedSentence.ref(vm) ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(vm, context[29], context[30], context[19], context[20]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( vm, context[31] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_close_bracket( context[4] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[31] );
    refalrts::push_stack( vm, context[27] );
    refalrts::link_brackets( context[21], context[22] );
    refalrts::link_brackets( context[15], context[16] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[25], context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[26], context[31] );
    res = refalrts::splice_evar( res, context[22], context[22] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[4], context[21] );
    res = refalrts::splice_evar( res, context[19], context[20] );
    res = refalrts::splice_evar( res, context[23], context[25] );
    refalrts::use( res );
    refalrts::wrap_closure( context[26] );
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
  refalrts::reinit_ident( context[0], ident_ForAllSentences.ref(vm) );
  refalrts::reinit_open_bracket( context[4] );
  refalrts::reinit_open_call( context[8] );
  refalrts::reinit_name( context[11], ref_Substm_Collapse.ref(vm) );
  refalrts::reinit_close_call( context[12] );
  refalrts::reinit_close_bracket( context[15] );
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

static refalrts::NativeReference nat_ref_DoFindDivision("DoFindDivision", 2843096177U, 236654120U, func_DoFindDivision);


static refalrts::FnResult func_gen_NarrowSentenceSubstitutions_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
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
  if( ! refalrts::alloc_open_bracket( vm, context[21] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[22] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_NarrowSubst.ref(vm) );
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

static refalrts::NativeReference nat_ref_gen_NarrowSentenceSubstitutions_L1("NarrowSentenceSubstitutions\\1", 2843096177U, 236654120U, func_gen_NarrowSentenceSubstitutions_L1);


static refalrts::FnResult func_NarrowSentenceSubstitutions(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
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
  //RESULT: Tile{ [[ } </9 & Map/10 Tile{ HalfReuse: [*]/0 Reuse: & NarrowSentenceSubstitutions\1/4 AsIs: (/7 AsIs: e.NewGCG-Subst#1/5 AsIs: )/8 } {*}/11 Tile{ AsIs: e.Sentences#1/2 } Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( vm, context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[10], ref_Map.ref(vm) ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_unwrapped_closure( vm, context[11], context[0] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_closure_head( context[0] );
  refalrts::update_name( context[4], ref_gen_NarrowSentenceSubstitutions_L1.ref(vm) );
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

static refalrts::NativeReference nat_ref_NarrowSentenceSubstitutions("NarrowSentenceSubstitutions", 2843096177U, 236654120U, func_NarrowSentenceSubstitutions);


static refalrts::FnResult func_gen_NarrowSubst_S1A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
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
  context[17] = refalrts::ident_left(  ident_Clear.ref(vm), context[2], context[3] );
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
  refalrts::update_name( context[4], ref_NarrowSubst.ref(vm) );
  refalrts::reinit_close_call( context[17] );
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

static refalrts::NativeReference nat_ref_gen_NarrowSubst_S1A1("NarrowSubst$1=1", 2843096177U, 236654120U, func_gen_NarrowSubst_S1A1);


static refalrts::FnResult func_NarrowSubst(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  // issue here memory for vars with 42 elems
  refalrts::Iter context[42];
  refalrts::zeros( context, 42 );
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
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.Var#1/39 {REMOVED TILE} {REMOVED TILE} e.Var#1/21 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 HalfReuse: [*]/4 HalfReuse: & NarrowSubst$1=1/7 } Tile{ AsIs: (/32 } Tile{ AsIs: e.GCG-Substs-B#1/26 } Tile{ AsIs: )/37 HalfReuse: (/33 AsIs: e.GCG-Substs-E#1/28 AsIs: )/8 AsIs: (/11 } Tile{ AsIs: e.SentenceSubsts#1/15 } Tile{ AsIs: )/24 HalfReuse: {*}/20 } Tile{ HalfReuse: </38 HalfReuse: & GenericMatch/36 } Tile{ AsIs: (/19 AsIs: e.Pattern#1/17 HalfReuse: )/25 AsIs: (/23 } Tile{ AsIs: e.GCG#1/30 } )/41 Tile{ HalfReuse: >/12 AsIs: >/1 ]] }
      if( ! refalrts::alloc_close_bracket( vm, context[41] ) )
        return refalrts::cNoMemory;
      refalrts::reinit_closure_head( context[4] );
      refalrts::reinit_name( context[7], ref_gen_NarrowSubst_S1A1.ref(vm) );
      refalrts::reinit_open_bracket( context[33] );
      refalrts::reinit_unwrapped_closure( context[20], context[4] );
      refalrts::reinit_open_call( context[38] );
      refalrts::reinit_name( context[36], ref_GenericMatch.ref(vm) );
      refalrts::reinit_close_bracket( context[25] );
      refalrts::reinit_close_call( context[12] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[12] );
      refalrts::push_stack( vm, context[38] );
      refalrts::link_brackets( context[23], context[41] );
      refalrts::link_brackets( context[19], context[25] );
      refalrts::link_brackets( context[11], context[24] );
      refalrts::link_brackets( context[33], context[8] );
      refalrts::link_brackets( context[32], context[37] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[12];
      res = refalrts::splice_evar( res, context[41], context[41] );
      res = refalrts::splice_evar( res, context[30], context[31] );
      res = refalrts::splice_evar( res, context[19], context[23] );
      res = refalrts::splice_evar( res, context[38], context[36] );
      res = refalrts::splice_evar( res, context[24], context[20] );
      res = refalrts::splice_evar( res, context[15], context[16] );
      res = refalrts::splice_evar( res, context[37], context[11] );
      res = refalrts::splice_evar( res, context[26], context[27] );
      res = refalrts::splice_evar( res, context[32], context[32] );
      refalrts::splice_to_freelist_open( vm, context[7], res );
      refalrts::wrap_closure( context[20] );
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

static refalrts::NativeReference nat_ref_NarrowSubst("NarrowSubst", 2843096177U, 236654120U, func_NarrowSubst);


static refalrts::FnResult func_gen_Substm_BuildImage_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
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
    // </0 & Subst-BuildImage\1/4 (/7 e.Value#2/5 ':'/13 (/11 'e'/14 e.Index#2/9 )/12 )/8 >/1
    if( ! refalrts::char_term( 'e', context[14] ) )
      continue;
    // closed e.Value#2 as range 5
    // closed e.Index#2 as range 9
    //DEBUG: e.Value#2: 5
    //DEBUG: e.Index#2: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: </4 HalfReuse: & BuildImage/7 } Tile{ AsIs: e.Value#2/5 } Tile{ AsIs: >/1 } Tile{ AsIs: ':'/13 AsIs: (/11 AsIs: 'e'/14 AsIs: e.Index#2/9 AsIs: )/12 AsIs: )/8 } Tile{ ]] }
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_open_call( context[4] );
    refalrts::reinit_name( context[7], ref_BuildImage.ref(vm) );
    refalrts::link_brackets( context[0], context[8] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[13], context[8] );
    res = refalrts::splice_evar( res, context[1], context[1] );
    res = refalrts::splice_evar( res, context[5], context[6] );
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
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_open_call( context[4] );
  refalrts::reinit_name( context[7], ref_BuildImagem_Term.ref(vm) );
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

static refalrts::NativeReference nat_ref_gen_Substm_BuildImage_L1("Subst-BuildImage\\1", 2843096177U, 236654120U, func_gen_Substm_BuildImage_L1);


static refalrts::FnResult func_Substm_BuildImage(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  // </0 & Subst-BuildImage/4 e.Substitution#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Substitution#1 as range 2
  //DEBUG: e.Substitution#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Map/0 Reuse: & Subst-BuildImage\1/4 AsIs: e.Substitution#1/2 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( vm, context[5] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_name( context[0], ref_Map.ref(vm) );
  refalrts::update_name( context[4], ref_gen_Substm_BuildImage_L1.ref(vm) );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[5] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Substm_BuildImage("Subst-BuildImage", 2843096177U, 236654120U, func_Substm_BuildImage);


static refalrts::FnResult func_Substm_Generalization(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  // issue here memory for vars with 43 elems
  refalrts::Iter context[43];
  refalrts::zeros( context, 43 );
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
      // </0 & Subst-Generalization/4 (/7 (/19 t.Image1#1/37 ':'/29 (/27 'e'/35 e.Index#1/25 )/28 )/20 e.Images1#1/13 )/8 (/11 (/23 t.Image2#1/39 ':'/34 (/32 'e'/36 e.Index#1/41 )/33 )/24 e.Images2#1/15 )/12 >/1
      if( ! refalrts::char_term( 'e', context[35] ) )
        continue;
      if( ! refalrts::char_term( 'e', context[36] ) )
        continue;
      // closed e.Index#1 as range 25
      if( ! refalrts::repeated_evar_left( vm, context[41], context[42], context[25], context[26], context[30], context[31] ) )
        continue;
      if( ! refalrts::empty_seq( context[30], context[31] ) )
        continue;
      // closed e.Images1#1 as range 13
      // closed e.Images2#1 as range 15
      //DEBUG: t.Image1#1: 37
      //DEBUG: t.Image2#1: 39
      //DEBUG: e.Index#1: 25
      //DEBUG: e.Images1#1: 13
      //DEBUG: e.Images2#1: 15

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} (/19 {REMOVED TILE} ':'/29 (/27 {REMOVED TILE} e.Index#1/25 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: </4 HalfReuse: & Generalization/7 } Tile{ AsIs: t.Image1#1/37 } Tile{ AsIs: t.Image2#1/39 } Tile{ HalfReuse: >/35 } Tile{ AsIs: ':'/34 AsIs: (/32 AsIs: 'e'/36 AsIs: e.Index#1/41 AsIs: )/33 AsIs: )/24 } Tile{ HalfReuse: </23 } Tile{ HalfReuse: & Subst-Generalization/28 HalfReuse: (/20 AsIs: e.Images1#1/13 AsIs: )/8 AsIs: (/11 } Tile{ AsIs: e.Images2#1/15 } Tile{ AsIs: )/12 AsIs: >/1 ]] }
      refalrts::reinit_open_bracket( context[0] );
      refalrts::reinit_open_call( context[4] );
      refalrts::reinit_name( context[7], ref_Generalization.ref(vm) );
      refalrts::reinit_close_call( context[35] );
      refalrts::reinit_open_call( context[23] );
      refalrts::reinit_name( context[28], ref_Substm_Generalization.ref(vm) );
      refalrts::reinit_open_bracket( context[20] );
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
      res = refalrts::splice_evar( res, context[15], context[16] );
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
      // </0 & Subst-Generalization/4 (/7 (/19 t.Image1#1/37 ':'/29 (/27 't'/35 e.Index#1/25 )/28 )/20 e.Images1#1/13 )/8 (/11 (/23 t.Image2#1/39 ':'/34 (/32 't'/36 e.Index#1/41 )/33 )/24 e.Images2#1/15 )/12 >/1
      if( ! refalrts::char_term( 't', context[35] ) )
        continue;
      if( ! refalrts::char_term( 't', context[36] ) )
        continue;
      // closed e.Index#1 as range 25
      if( ! refalrts::repeated_evar_left( vm, context[41], context[42], context[25], context[26], context[30], context[31] ) )
        continue;
      if( ! refalrts::empty_seq( context[30], context[31] ) )
        continue;
      // closed e.Images1#1 as range 13
      // closed e.Images2#1 as range 15
      //DEBUG: t.Image1#1: 37
      //DEBUG: t.Image2#1: 39
      //DEBUG: e.Index#1: 25
      //DEBUG: e.Images1#1: 13
      //DEBUG: e.Images2#1: 15

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} (/19 {REMOVED TILE} ':'/29 (/27 {REMOVED TILE} e.Index#1/25 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: </4 HalfReuse: & Generalization-Term/7 } Tile{ AsIs: t.Image1#1/37 } Tile{ AsIs: t.Image2#1/39 } Tile{ HalfReuse: >/35 } Tile{ AsIs: ':'/34 AsIs: (/32 AsIs: 't'/36 AsIs: e.Index#1/41 AsIs: )/33 AsIs: )/24 } Tile{ HalfReuse: </23 } Tile{ HalfReuse: & Subst-Generalization/28 HalfReuse: (/20 AsIs: e.Images1#1/13 AsIs: )/8 AsIs: (/11 } Tile{ AsIs: e.Images2#1/15 } Tile{ AsIs: )/12 AsIs: >/1 ]] }
      refalrts::reinit_open_bracket( context[0] );
      refalrts::reinit_open_call( context[4] );
      refalrts::reinit_name( context[7], ref_Generalizationm_Term.ref(vm) );
      refalrts::reinit_close_call( context[35] );
      refalrts::reinit_open_call( context[23] );
      refalrts::reinit_name( context[28], ref_Substm_Generalization.ref(vm) );
      refalrts::reinit_open_bracket( context[20] );
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
      res = refalrts::splice_evar( res, context[15], context[16] );
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

    // </0 & Subst-Generalization/4 (/7 (/19 t.new#11/37 ':'/29 (/27 's'/35 e.new#12/25 )/28 )/20 e.new#13/13 )/8 (/11 (/23 t.new#14/39 ':'/34 (/32 's'/36 e.new#15/30 )/33 )/24 e.new#16/15 )/12 >/1
    if( ! refalrts::char_term( 's', context[35] ) )
      continue;
    if( ! refalrts::char_term( 's', context[36] ) )
      continue;
    // closed e.new#12 as range 25
    // closed e.new#13 as range 13
    // closed e.new#15 as range 30
    // closed e.new#16 as range 15
    do {
      // </0 & Subst-Generalization/4 (/7 (/19 t.Image#1/37 ':'/29 (/27 's'/35 e.Index#1/25 )/28 )/20 e.Images1#1/13 )/8 (/11 (/23 t.Image#1/39 ':'/34 (/32 's'/36 e.Index#1/41 )/33 )/24 e.Images2#1/15 )/12 >/1
      if( ! refalrts::repeated_stvar_term( vm, context[39], context[37] ) )
        continue;
      // closed e.Index#1 as range 25
      if( ! refalrts::repeated_evar_left( vm, context[41], context[42], context[25], context[26], context[30], context[31] ) )
        continue;
      if( ! refalrts::empty_seq( context[30], context[31] ) )
        continue;
      // closed e.Images1#1 as range 13
      // closed e.Images2#1 as range 15
      //DEBUG: t.Image#1: 37
      //DEBUG: e.Index#1: 25
      //DEBUG: e.Images1#1: 13
      //DEBUG: e.Images2#1: 15

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} & Subst-Generalization/4 (/7 (/19 t.Image#1/37 ':'/29 (/27 's'/35 e.Index#1/25 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/23 AsIs: t.Image#1/39 AsIs: ':'/34 AsIs: (/32 AsIs: 's'/36 AsIs: e.Index#1/41 AsIs: )/33 AsIs: )/24 } Tile{ AsIs: </0 } Tile{ HalfReuse: & Subst-Generalization/28 HalfReuse: (/20 AsIs: e.Images1#1/13 AsIs: )/8 AsIs: (/11 } Tile{ AsIs: e.Images2#1/15 } Tile{ AsIs: )/12 AsIs: >/1 ]] }
      refalrts::reinit_name( context[28], ref_Substm_Generalization.ref(vm) );
      refalrts::reinit_open_bracket( context[20] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[20], context[8] );
      refalrts::link_brackets( context[23], context[24] );
      refalrts::link_brackets( context[32], context[33] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[12];
      res = refalrts::splice_evar( res, context[15], context[16] );
      res = refalrts::splice_evar( res, context[28], context[11] );
      res = refalrts::splice_evar( res, context[0], context[0] );
      res = refalrts::splice_evar( res, context[23], context[24] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Subst-Generalization/4 (/7 (/19 t.Image1#1/37 ':'/29 (/27 's'/35 e.Index#1/25 )/28 )/20 e.Images1#1/13 )/8 (/11 (/23 t.Image2#1/39 ':'/34 (/32 's'/36 e.Index#1/41 )/33 )/24 e.Images2#1/15 )/12 >/1
    // closed e.Index#1 as range 25
    if( ! refalrts::repeated_evar_left( vm, context[41], context[42], context[25], context[26], context[30], context[31] ) )
      continue;
    if( ! refalrts::empty_seq( context[30], context[31] ) )
      continue;
    // closed e.Images1#1 as range 13
    // closed e.Images2#1 as range 15
    //DEBUG: t.Image1#1: 37
    //DEBUG: t.Image2#1: 39
    //DEBUG: e.Index#1: 25
    //DEBUG: e.Images1#1: 13
    //DEBUG: e.Images2#1: 15

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} t.Image1#1/37 ':'/29 (/27 {REMOVED TILE} e.Index#1/25 {REMOVED TILE} {REMOVED TILE} t.Image2#1/39 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: (/4 HalfReuse: # TkVariable/7 HalfReuse: 's'/19 } Tile{ HalfReuse: )/23 } Tile{ AsIs: ':'/34 AsIs: (/32 AsIs: 's'/36 AsIs: e.Index#1/41 AsIs: )/33 AsIs: )/24 } Tile{ HalfReuse: </35 } Tile{ HalfReuse: & Subst-Generalization/28 HalfReuse: (/20 AsIs: e.Images1#1/13 AsIs: )/8 AsIs: (/11 } Tile{ AsIs: e.Images2#1/15 } Tile{ AsIs: )/12 AsIs: >/1 ]] }
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_open_bracket( context[4] );
    refalrts::reinit_ident( context[7], ident_TkVariable.ref(vm) );
    refalrts::reinit_char( context[19], 's' );
    refalrts::reinit_close_bracket( context[23] );
    refalrts::reinit_open_call( context[35] );
    refalrts::reinit_name( context[28], ref_Substm_Generalization.ref(vm) );
    refalrts::reinit_open_bracket( context[20] );
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
    res = refalrts::splice_evar( res, context[15], context[16] );
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

static refalrts::NativeReference nat_ref_Substm_Generalization("Subst-Generalization", 2843096177U, 236654120U, func_Substm_Generalization);


static refalrts::FnResult func_gen_Substm_Collapse_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
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
    // </0 & Subst-Collapse\1/4 (/7 t.Image#2/15 ':'/13 (/11 'e'/14 e.Index#2/9 )/12 )/8 >/1
    if( ! refalrts::char_term( 'e', context[14] ) )
      continue;
    // closed e.Index#2 as range 9
    //DEBUG: t.Image#2: 15
    //DEBUG: e.Index#2: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: </4 HalfReuse: & Collapse/7 AsIs: t.Image#2/15 } Tile{ AsIs: >/1 } Tile{ AsIs: ':'/13 AsIs: (/11 AsIs: 'e'/14 AsIs: e.Index#2/9 AsIs: )/12 AsIs: )/8 } Tile{ ]] }
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_open_call( context[4] );
    refalrts::reinit_name( context[7], ref_Collapse.ref(vm) );
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
    // </0 & Subst-Collapse\1/4 (/7 t.Image#2/15 ':'/13 (/11 't'/14 e.Index#2/9 )/12 )/8 >/1
    if( ! refalrts::char_term( 't', context[14] ) )
      continue;
    // closed e.Index#2 as range 9
    //DEBUG: t.Image#2: 15
    //DEBUG: e.Index#2: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: </4 HalfReuse: & Collapse-Term/7 AsIs: t.Image#2/15 } Tile{ AsIs: >/1 } Tile{ AsIs: ':'/13 AsIs: (/11 AsIs: 't'/14 AsIs: e.Index#2/9 AsIs: )/12 AsIs: )/8 } Tile{ ]] }
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_open_call( context[4] );
    refalrts::reinit_name( context[7], ref_Collapsem_Term.ref(vm) );
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

static refalrts::NativeReference nat_ref_gen_Substm_Collapse_L1("Subst-Collapse\\1", 2843096177U, 236654120U, func_gen_Substm_Collapse_L1);


static refalrts::FnResult func_Substm_Collapse(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  // </0 & Subst-Collapse/4 e.Substitution#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Substitution#1 as range 2
  //DEBUG: e.Substitution#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Map/0 Reuse: & Subst-Collapse\1/4 AsIs: e.Substitution#1/2 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( vm, context[5] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_name( context[0], ref_Map.ref(vm) );
  refalrts::update_name( context[4], ref_gen_Substm_Collapse_L1.ref(vm) );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[5] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Substm_Collapse("Subst-Collapse", 2843096177U, 236654120U, func_Substm_Collapse);


//End of file
