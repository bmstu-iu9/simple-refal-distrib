// This file automatically generated from 'Desugaring-UnCondition.ref'
// Don't edit! Edit 'Desugaring-UnCondition.ref' and recompile it

#include "refalrts.h"

#define cookie_ns cookie_ns_1097634219_507462218

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
  efunc_Transformm_Unit = 14,
  efunc_Map = 15,
  efunc_UnCondition = 16,
  efunc_DoUnCondition = 17,
  efunc_gen_DoUnCondition_S1C1 = 18,
  efunc_gen_DoUnCondition_S1C2 = 19,
  efunc_UnConditionSentence = 20,
  efunc_gen_UnConditionSentence_C1 = 21,
  efunc_AnalyzeContinuation = 22,
  efunc_gen_UnConditionSentence_C2 = 23,
  efunc_ConditionSubFunctions = 24,
  efunc_MakeContinuationSentence = 25,
  efunc_gen_AnalyzeContinuation_S2C1 = 26,
  efunc_DoPatternSteps = 27,
  efunc_gen_DoPatternSteps_B1S1C1 = 28,
  efunc_HardItem = 29,
  efunc_gen_DoPatternSteps_B1S2C1 = 30,
  efunc_BindBrackets = 31,
  efunc_T1 = 32,
  efunc_T2 = 33,
  efunc_T3 = 34,
  efunc_T4 = 35,
  efunc_T5 = 36,
  efunc_T5m_sub = 37,
  efunc_T6 = 38,
  efunc_T7 = 39,
  efunc_T0 = 40,
  efunc_gen_DoPatternSteps_B1 = 41,
  efunc_DoBindBrackets = 42,
  efunc_gen_T1_C1 = 43,
  efunc_NewVarName = 44,
  efunc_gen_T1_C2 = 45,
  efunc_gen_T1_C3 = 46,
  efunc_PassiveHoles = 47,
  efunc_gen_PassiveHoles_S1C1 = 48,
  efunc_gen_T2_C1 = 49,
  efunc_gen_T2_C2 = 50,
  efunc_gen_T2_C3 = 51,
  efunc_gen_T3_C1 = 52,
  efunc_gen_T4_C1 = 53,
  efunc_gen_T5_C1 = 54,
  efunc_Substitute = 55,
  efunc_T5m_UnHole = 56,
  efunc_gen_T5m_sub_C1 = 57,
  efunc_gen_T5m_sub_C2 = 58,
  efunc_gen_T6_C1 = 59,
  efunc_gen_T6_C2 = 60,
  efunc_gen_T7_C1 = 61,
  efunc_gen_T7_C2 = 62,
  efunc_DoT0 = 63,
  efunc_gen_ConditionSubFunctions_C1 = 64,
  efunc_gen_ConditionSubFunctions_C2 = 65,
  efunc_gen_ConditionSubFunctions_C3 = 66,
  efunc_ExtractVariables = 67,
  efunc_gen_ConditionSubFunctions_C4 = 68,
  efunc_ConditionContext = 69,
  efunc_gen_ConditionSubFunctions_C5 = 70,
  efunc_PatternSteps = 71,
  efunc_gen_ConditionSubFunctions_C6 = 72,
  efunc_OpenEChain = 73,
  efunc_gen_ConditionSubFunctions_C7 = 74,
  efunc_MakeVariables = 75,
  efunc_Unique = 76,
  efunc_ExtractVariablesm_Expr = 77,
  efunc_gen_OpenEChain_S2C1 = 78,
  efunc_gen_OpenEChain_S3C1 = 79,
  efunc_gen_OpenEChain_S3C2 = 80,
  efunc_DoOpenEChain = 81,
  efunc_gen_OpenEChain_S3C3 = 82,
  efunc_gen_DoOpenEChain_S1C1 = 83,
  efunc_MakeOpenEm_ForwardNext = 84,
  efunc_gen_DoOpenEChain_S2C1 = 85,
  efunc_gen_DoOpenEChain_S2C2 = 86,
  efunc_gen_DoOpenEChain_S2C3 = 87,
  efunc_gen_MakeOpenEm_ForwardNext_C1 = 88,
  efunc_gen_MakeOpenEm_ForwardNext_C2 = 89,
  efunc_ExtractVariablesm_Sentences = 90,
  efunc_ExtractVariablesm_Tail = 91,
  efunc_DoNewVarName = 92,
  efunc_gen_DoNewVarName_C1 = 93,
  efunc_Symb = 94,
  efunc_gen_DoNewVarName_B1 = 95,
};


enum ident {
  ident_k43_ = 0,
  ident_k47_ = 1,
  ident_k37_ = 2,
  ident_k42_ = 3,
  ident_k63_ = 4,
  ident_m_ = 5,
  ident_Function = 6,
  ident_Sentences = 7,
  ident_Ident = 8,
  ident_NativeBlock = 9,
  ident_Spec = 10,
  ident_Condition = 11,
  ident_TkVariable = 12,
  ident_NoContinuation = 13,
  ident_GNm_Local = 14,
  ident_Symbol = 15,
  ident_Name = 16,
  ident_CallBrackets = 17,
  ident_HOLE = 18,
  ident_True = 19,
  ident_Brackets = 20,
  ident_RightBracket = 21,
  ident_LeftBracket = 22,
  ident_ADTm_Brackets = 23,
  ident_LeftADT = 24,
  ident_RightADT = 25,
  ident_OpenE = 26,
  ident_False = 27,
  ident_ClosureBrackets = 28,
  ident_MarkupContext = 29,
  ident_Identifier = 30,
  ident_VAR = 31,
  ident_NoMarkupContext = 32,
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

static refalrts::NativeReference nat_ref_Mu("Mu", 1097634219U, 507462218U, func_Mu);


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
    refalrts::alloc_number(vm, context[9], 507462218UL);
    refalrts::update_name(context[4], functions[efunc_u_u_FindMuPtr]);
    refalrts::reinit_number(context[5], 1097634219UL);
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
  refalrts::reinit_number(context[5], 1097634219UL);
  refalrts::reinit_number(context[7], 507462218UL);
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

static refalrts::NativeReference nat_ref_gen_u_u_Mum_Aux_S13B1("__Mu-Aux$13:1", 1097634219U, 507462218U, func_gen_u_u_Mum_Aux_S13B1);


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

static refalrts::NativeReference nat_ref_u_u_Mum_Aux("__Mu-Aux", 1097634219U, 507462218U, func_u_u_Mum_Aux);


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

static refalrts::NativeReference nat_ref_Residue("Residue", 1097634219U, 507462218U, func_Residue);


static refalrts::FnResult func_Passm_UnCondition(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  // </0 & Pass-UnCondition/4 s.MarkupContext#1/5 e.Units#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Units#1 as range 2
  //DEBUG: s.MarkupContext#1: 5
  //DEBUG: e.Units#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map/4 } (/6 & Transform-Unit/7 Tile{ AsIs: s.MarkupContext#1/5 } )/8 Tile{ AsIs: e.Units#1/2 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[6]);
  refalrts::alloc_name(vm, context[7], functions[efunc_Transformm_Unit]);
  refalrts::alloc_close_bracket(vm, context[8]);
  refalrts::update_name(context[4], functions[efunc_Map]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[6], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[5], context[5] );
  res = refalrts::splice_evar( res, context[6], context[7] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Passm_UnCondition("Pass-UnCondition", 0U, 0U, func_Passm_UnCondition);


static refalrts::FnResult func_Transformm_Unit(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  // </0 & Transform-Unit/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Transform-Unit/4 s.new#1/9 (/7 s.new#2/10 e.new#3/5 )/8 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[10], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#3 as range 5
  do {
    // </0 & Transform-Unit/4 s.MarkupContext#1/9 (/7 # Function/10 s.Scope#1/13 (/16 e.Name#1/14 )/17 # Sentences/18 e.Sentences#1/11 )/8 >/1
    context[11] = context[5];
    context[12] = context[6];
    if( ! refalrts::ident_term( identifiers[ident_Function], context[10] ) )
      continue;
    if( ! refalrts::svar_left( context[13], context[11], context[12] ) )
      continue;
    context[14] = 0;
    context[15] = 0;
    context[16] = refalrts::brackets_left( context[14], context[15], context[11], context[12] );
    if( ! context[16] )
      continue;
    refalrts::bracket_pointers(context[16], context[17]);
    context[18] = refalrts::ident_left( identifiers[ident_Sentences], context[11], context[12] );
    if( ! context[18] )
      continue;
    // closed e.Name#1 as range 14
    // closed e.Sentences#1 as range 11
    //DEBUG: s.MarkupContext#1: 9
    //DEBUG: s.Scope#1: 13
    //DEBUG: e.Name#1: 14
    //DEBUG: e.Sentences#1: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} (/7 # Function/10 s.Scope#1/13 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & UnCondition/4 AsIs: s.MarkupContext#1/9 } Tile{ AsIs: (/16 AsIs: e.Name#1/14 AsIs: )/17 HalfReuse: s.Scope1 #13/18 AsIs: e.Sentences#1/11 HalfReuse: >/8 } Tile{ ]] }
    refalrts::update_name(context[4], functions[efunc_UnCondition]);
    refalrts::reinit_svar( context[18], context[13] );
    refalrts::reinit_close_call(context[8]);
    refalrts::push_stack( vm, context[8] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[16], context[17] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[16], context[8] );
    refalrts::splice_to_freelist_open( vm, context[9], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Transform-Unit/4 s.MarkupContext#1/9 (/7 # Ident/10 e.Name#1/11 )/8 >/1
    context[11] = context[5];
    context[12] = context[6];
    if( ! refalrts::ident_term( identifiers[ident_Ident], context[10] ) )
      continue;
    // closed e.Name#1 as range 11
    //DEBUG: s.MarkupContext#1: 9
    //DEBUG: e.Name#1: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Transform-Unit/4 s.MarkupContext#1/9 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # Ident/10 AsIs: e.Name#1/11 AsIs: )/8 } Tile{ ]] }
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[7], context[8] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Transform-Unit/4 s.new#4/9 (/7 s.new#5/10 t.new#6/11 e.new#7/5 )/8 >/1
  context[12] = refalrts::tvar_left( context[11], context[5], context[6] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#7 as range 5
  do {
    // </0 & Transform-Unit/4 s.MarkupContext#1/9 (/7 # NativeBlock/10 t.SrcPos#1/11 e.Code#1/13 )/8 >/1
    context[13] = context[5];
    context[14] = context[6];
    if( ! refalrts::ident_term( identifiers[ident_NativeBlock], context[10] ) )
      continue;
    // closed e.Code#1 as range 13
    //DEBUG: t.SrcPos#1: 11
    //DEBUG: s.MarkupContext#1: 9
    //DEBUG: e.Code#1: 13

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Transform-Unit/4 s.MarkupContext#1/9 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # NativeBlock/10 AsIs: t.SrcPos#1/11 AsIs: e.Code#1/13 AsIs: )/8 } Tile{ ]] }
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
    // </0 & Transform-Unit/4 s.MarkupContext#1/9 (/7 # Spec/10 (/11 e.Name#1/15 )/12 e.Pattern#1/13 )/8 >/1
    context[13] = context[5];
    context[14] = context[6];
    context[15] = 0;
    context[16] = 0;
    if( ! refalrts::brackets_term( context[15], context[16], context[11] ) )
      continue;
    if( ! refalrts::ident_term( identifiers[ident_Spec], context[10] ) )
      continue;
    // closed e.Name#1 as range 15
    // closed e.Pattern#1 as range 13
    //DEBUG: s.MarkupContext#1: 9
    //DEBUG: e.Name#1: 15
    //DEBUG: e.Pattern#1: 13

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Transform-Unit/4 s.MarkupContext#1/9 (/7 # Spec/10 (/11 e.Name#1/15 )/12 e.Pattern#1/13 )/8 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Transform-Unit/4 s.MarkupContext#1/9 (/7 s.EnumSwapDeclaration#1/10 s.ScopeClass#1/11 e.Name#1/5 )/8 >/1
  if( ! refalrts::svar_term( context[11], context[11] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Name#1 as range 5
  //DEBUG: s.ScopeClass#1: 11
  //DEBUG: s.MarkupContext#1: 9
  //DEBUG: s.EnumSwapDeclaration#1: 10
  //DEBUG: e.Name#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Transform-Unit/4 s.MarkupContext#1/9 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: s.EnumSwapDeclaration#1/10 AsIs: s.ScopeClass#1/11 AsIs: e.Name#1/5 AsIs: )/8 } Tile{ ]] }
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Transformm_Unit("Transform-Unit", 1097634219U, 507462218U, func_Transformm_Unit);


static refalrts::FnResult func_UnCondition(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
  // </0 & UnCondition/4 s.MarkupContext#1/5 (/8 e.Name#1/6 )/9 s.Scope#1/10 e.Sentences#1/2 >/1
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
  // closed e.Sentences#1 as range 2
  //DEBUG: s.MarkupContext#1: 5
  //DEBUG: e.Name#1: 6
  //DEBUG: s.Scope#1: 10
  //DEBUG: e.Sentences#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoUnCondition/4 AsIs: s.MarkupContext#1/5 AsIs: (/8 } Tile{ AsIs: s.Scope#1/10 } (/11 Tile{ AsIs: e.Name#1/6 } Tile{ AsIs: )/9 } Tile{ AsIs: e.Sentences#1/2 } )/12 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[11]);
  refalrts::alloc_close_bracket(vm, context[12]);
  refalrts::update_name(context[4], functions[efunc_DoUnCondition]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[8], context[12] );
  refalrts::link_brackets( context[11], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[12], context[12] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[9], context[9] );
  res = refalrts::splice_evar( res, context[6], context[7] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  res = refalrts::splice_evar( res, context[10], context[10] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_UnCondition("UnCondition", 1097634219U, 507462218U, func_UnCondition);


static refalrts::FnResult func_DoUnCondition(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 74 elems
  refalrts::Iter context[74];
  refalrts::zeros( context, 74 );
  // </0 & DoUnCondition/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DoUnCondition/4 s.new#1/5 e.new#2/2 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 2
  do {
    // </0 & DoUnCondition/4 s.new#3/5 (/10 s.new#4/12 (/15 e.new#5/13 )/16 e.new#6/8 )/11 e.new#7/6 >/1
    context[6] = context[2];
    context[7] = context[3];
    context[8] = 0;
    context[9] = 0;
    context[10] = refalrts::brackets_left( context[8], context[9], context[6], context[7] );
    if( ! context[10] )
      continue;
    refalrts::bracket_pointers(context[10], context[11]);
    // closed e.new#7 as range 6
    if( ! refalrts::svar_left( context[12], context[8], context[9] ) )
      continue;
    context[13] = 0;
    context[14] = 0;
    context[15] = refalrts::brackets_left( context[13], context[14], context[8], context[9] );
    if( ! context[15] )
      continue;
    refalrts::bracket_pointers(context[15], context[16]);
    // closed e.new#5 as range 13
    // closed e.new#6 as range 8
    do {
      // </0 & DoUnCondition/4 s.MarkupContext#1/5 (/10 s.Scope#1/12 (/15 e.Name#1/17 )/16 e.Sentences-B#1/23 (/29 e.ConditionalSentence#1/27 )/30 e.Sentences-E#1/25 )/11 e.UnscannedFunctions#1/21 >/1
      context[17] = context[13];
      context[18] = context[14];
      context[19] = context[8];
      context[20] = context[9];
      context[21] = context[6];
      context[22] = context[7];
      // closed e.Name#1 as range 17
      // closed e.UnscannedFunctions#1 as range 21
      context[23] = 0;
      context[24] = 0;
      refalrts::start_e_loop(vm);
      do {
        context[25] = context[19];
        context[26] = context[20];
        context[27] = 0;
        context[28] = 0;
        context[29] = refalrts::brackets_left( context[27], context[28], context[25], context[26] );
        if( ! context[29] )
          continue;
        refalrts::bracket_pointers(context[29], context[30]);
        // closed e.ConditionalSentence#1 as range 27
        // closed e.Sentences-E#1 as range 25
        //DEBUG: s.MarkupContext#1: 5
        //DEBUG: s.Scope#1: 12
        //DEBUG: e.Name#1: 17
        //DEBUG: e.UnscannedFunctions#1: 21
        //DEBUG: e.Sentences-B#1: 23
        //DEBUG: e.ConditionalSentence#1: 27
        //DEBUG: e.Sentences-E#1: 25
        //5: s.MarkupContext#1
        //12: s.Scope#1
        //17: e.Name#1
        //21: e.UnscannedFunctions#1
        //23: e.Sentences-B#1
        //25: e.Sentences-E#1
        //27: e.ConditionalSentence#1
        //34: e.ConditionalSentence#1

        refalrts::reset_allocator(vm);
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        refalrts::alloc_open_call(vm, context[31]);
        refalrts::alloc_name(vm, context[33], functions[efunc_gen_DoUnCondition_S1C1]);
        refalrts::copy_evar(vm, context[34], context[35], context[27], context[28]);
        refalrts::alloc_close_call(vm, context[32]);
        refalrts::push_stack( vm, context[32] );
        refalrts::push_stack( vm, context[31] );
        res = refalrts::splice_elem( res, context[32] );
        res = refalrts::splice_evar( res, context[34], context[35] );
        res = refalrts::splice_elem( res, context[33] );
        res = refalrts::splice_elem( res, context[31] );
        refalrts::use( res );
        refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
        if (rec_res != refalrts::cSuccess)
          return rec_res;
        refalrts::this_is_generated_function(vm);
        do {
          // </31 & DoUnCondition$1?1/35 (/38 e.Pattern#2/36 )/39 (/42 # Condition/44 (/47 e.ConditionName#2/45 )/48 (/51 e.CondResult#2/49 )/52 (/55 e.CondPattern#2/53 )/56 )/43 e.Tail#2/33 >/32
          context[33] = 0;
          context[34] = 0;
          context[35] = refalrts::call_left( context[33], context[34], context[31], context[32] );
          context[36] = 0;
          context[37] = 0;
          context[38] = refalrts::brackets_left( context[36], context[37], context[33], context[34] );
          if( ! context[38] )
            continue;
          refalrts::bracket_pointers(context[38], context[39]);
          context[40] = 0;
          context[41] = 0;
          context[42] = refalrts::brackets_left( context[40], context[41], context[33], context[34] );
          if( ! context[42] )
            continue;
          refalrts::bracket_pointers(context[42], context[43]);
          context[44] = refalrts::ident_left( identifiers[ident_Condition], context[40], context[41] );
          if( ! context[44] )
            continue;
          context[45] = 0;
          context[46] = 0;
          context[47] = refalrts::brackets_left( context[45], context[46], context[40], context[41] );
          if( ! context[47] )
            continue;
          refalrts::bracket_pointers(context[47], context[48]);
          context[49] = 0;
          context[50] = 0;
          context[51] = refalrts::brackets_left( context[49], context[50], context[40], context[41] );
          if( ! context[51] )
            continue;
          refalrts::bracket_pointers(context[51], context[52]);
          context[53] = 0;
          context[54] = 0;
          context[55] = refalrts::brackets_left( context[53], context[54], context[40], context[41] );
          if( ! context[55] )
            continue;
          refalrts::bracket_pointers(context[55], context[56]);
          if( ! refalrts::empty_seq( context[40], context[41] ) )
            continue;
          // closed e.Pattern#2 as range 36
          // closed e.ConditionName#2 as range 45
          // closed e.CondResult#2 as range 49
          // closed e.CondPattern#2 as range 53
          // closed e.Tail#2 as range 33
          //DEBUG: s.MarkupContext#1: 5
          //DEBUG: s.Scope#1: 12
          //DEBUG: e.Name#1: 17
          //DEBUG: e.UnscannedFunctions#1: 21
          //DEBUG: e.Sentences-B#1: 23
          //DEBUG: e.ConditionalSentence#1: 27
          //DEBUG: e.Sentences-E#1: 25
          //DEBUG: e.Pattern#2: 36
          //DEBUG: e.ConditionName#2: 45
          //DEBUG: e.CondResult#2: 49
          //DEBUG: e.CondPattern#2: 53
          //DEBUG: e.Tail#2: 33
          //5: s.MarkupContext#1
          //12: s.Scope#1
          //17: e.Name#1
          //21: e.UnscannedFunctions#1
          //23: e.Sentences-B#1
          //25: e.Sentences-E#1
          //27: e.ConditionalSentence#1
          //33: e.Tail#2
          //36: e.Pattern#2
          //45: e.ConditionName#2
          //49: e.CondResult#2
          //53: e.CondPattern#2
          //62: s.MarkupContext#1
          //64: e.ConditionName#2
          //68: e.ConditionalSentence#1
          //71: e.Sentences-E#1

          refalrts::reset_allocator(vm);
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[1];
          refalrts::alloc_open_call(vm, context[57]);
          refalrts::alloc_name(vm, context[59], functions[efunc_gen_DoUnCondition_S1C2]);
          refalrts::alloc_open_call(vm, context[60]);
          refalrts::alloc_name(vm, context[61], functions[efunc_UnConditionSentence]);
          refalrts::copy_stvar(vm, context[62], context[5]);
          refalrts::alloc_open_bracket(vm, context[63]);
          refalrts::copy_evar(vm, context[64], context[65], context[45], context[46]);
          refalrts::alloc_close_bracket(vm, context[66]);
          refalrts::alloc_open_bracket(vm, context[67]);
          refalrts::copy_evar(vm, context[68], context[69], context[27], context[28]);
          refalrts::alloc_close_bracket(vm, context[70]);
          refalrts::copy_evar(vm, context[71], context[72], context[25], context[26]);
          refalrts::alloc_close_call(vm, context[73]);
          refalrts::alloc_close_call(vm, context[58]);
          refalrts::push_stack( vm, context[58] );
          refalrts::push_stack( vm, context[57] );
          res = refalrts::splice_elem( res, context[58] );
          refalrts::push_stack( vm, context[73] );
          refalrts::push_stack( vm, context[60] );
          res = refalrts::splice_elem( res, context[73] );
          res = refalrts::splice_evar( res, context[71], context[72] );
          refalrts::link_brackets( context[67], context[70] );
          res = refalrts::splice_elem( res, context[70] );
          res = refalrts::splice_evar( res, context[68], context[69] );
          res = refalrts::splice_elem( res, context[67] );
          refalrts::link_brackets( context[63], context[66] );
          res = refalrts::splice_elem( res, context[66] );
          res = refalrts::splice_evar( res, context[64], context[65] );
          res = refalrts::splice_elem( res, context[63] );
          res = refalrts::splice_stvar( res, context[62] );
          res = refalrts::splice_elem( res, context[61] );
          res = refalrts::splice_elem( res, context[60] );
          res = refalrts::splice_elem( res, context[59] );
          res = refalrts::splice_elem( res, context[57] );
          refalrts::use( res );
          refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
          if (rec_res != refalrts::cSuccess)
            return rec_res;
          refalrts::this_is_generated_function(vm);
          do {
            // </57 & DoUnCondition$1?2/61 (/64 e.TransformedSentences#3/62 )/65 e.NewFunctions#3/59 >/58
            context[59] = 0;
            context[60] = 0;
            context[61] = refalrts::call_left( context[59], context[60], context[57], context[58] );
            context[62] = 0;
            context[63] = 0;
            context[64] = refalrts::brackets_left( context[62], context[63], context[59], context[60] );
            if( ! context[64] )
              continue;
            refalrts::bracket_pointers(context[64], context[65]);
            // closed e.TransformedSentences#3 as range 62
            // closed e.NewFunctions#3 as range 59
            //DEBUG: s.MarkupContext#1: 5
            //DEBUG: s.Scope#1: 12
            //DEBUG: e.Name#1: 17
            //DEBUG: e.UnscannedFunctions#1: 21
            //DEBUG: e.Sentences-B#1: 23
            //DEBUG: e.ConditionalSentence#1: 27
            //DEBUG: e.Sentences-E#1: 25
            //DEBUG: e.Pattern#2: 36
            //DEBUG: e.ConditionName#2: 45
            //DEBUG: e.CondResult#2: 49
            //DEBUG: e.CondPattern#2: 53
            //DEBUG: e.Tail#2: 33
            //DEBUG: e.TransformedSentences#3: 62
            //DEBUG: e.NewFunctions#3: 59

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} (/29 e.ConditionalSentence#1/27 )/30 e.Sentences-E#1/25 )/11 {REMOVED TILE} </31 & DoUnCondition$1?1/35 (/38 e.Pattern#2/36 )/39 (/42 {REMOVED TILE} (/47 e.ConditionName#2/45 )/48 (/51 e.CondResult#2/49 )/52 {REMOVED TILE} e.CondPattern#2/53 )/56 )/43 e.Tail#2/33 >/32 </57 & DoUnCondition$1?2/61 (/64 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} >/58 {REMOVED TILE}
            //RESULT: Tile{ [[ } Tile{ AsIs: (/55 } Tile{ HalfReuse: # Function/10 AsIs: s.Scope#1/12 AsIs: (/15 AsIs: e.Name#1/17 AsIs: )/16 } Tile{ Reuse: # Sentences/44 } Tile{ AsIs: e.Sentences-B#1/23 } Tile{ AsIs: e.TransformedSentences#3/62 } Tile{ AsIs: )/65 } Tile{ AsIs: </0 AsIs: & DoUnCondition/4 AsIs: s.MarkupContext#1/5 } Tile{ AsIs: e.UnscannedFunctions#1/21 } Tile{ AsIs: e.NewFunctions#3/59 } Tile{ AsIs: >/1 ]] }
            refalrts::reinit_ident(context[10], identifiers[ident_Function]);
            refalrts::update_ident(context[44], identifiers[ident_Sentences]);
            refalrts::push_stack( vm, context[1] );
            refalrts::push_stack( vm, context[0] );
            refalrts::link_brackets( context[55], context[65] );
            refalrts::link_brackets( context[15], context[16] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = context[1];
            res = refalrts::splice_evar( res, context[59], context[60] );
            res = refalrts::splice_evar( res, context[21], context[22] );
            res = refalrts::splice_evar( res, context[0], context[5] );
            res = refalrts::splice_evar( res, context[65], context[65] );
            res = refalrts::splice_evar( res, context[62], context[63] );
            res = refalrts::splice_evar( res, context[23], context[24] );
            res = refalrts::splice_evar( res, context[44], context[44] );
            res = refalrts::splice_evar( res, context[10], context[16] );
            res = refalrts::splice_evar( res, context[55], context[55] );
            refalrts::splice_to_freelist_open( vm, trash_prev, res );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          refalrts::splice_to_freelist(vm, context[57], context[58]);
          continue;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        refalrts::splice_to_freelist(vm, context[31], context[32]);
        continue;
      } while ( refalrts::open_evar_advance( context[23], context[24], context[19], context[20] ) );
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & DoUnCondition/4 s.MarkupContext#1/5 (/10 s.Scope#1/12 (/15 e.Name#1/17 )/16 e.Sentences#1/19 )/11 e.UnscannedFunctions#1/21 >/1
    context[17] = context[13];
    context[18] = context[14];
    context[19] = context[8];
    context[20] = context[9];
    context[21] = context[6];
    context[22] = context[7];
    // closed e.Name#1 as range 17
    // closed e.Sentences#1 as range 19
    // closed e.UnscannedFunctions#1 as range 21
    //DEBUG: s.MarkupContext#1: 5
    //DEBUG: s.Scope#1: 12
    //DEBUG: e.Name#1: 17
    //DEBUG: e.Sentences#1: 19
    //DEBUG: e.UnscannedFunctions#1: 21

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} s.MarkupContext#1/5 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } (/23 Tile{ HalfReuse: # Function/10 AsIs: s.Scope#1/12 AsIs: (/15 AsIs: e.Name#1/17 AsIs: )/16 } # Sentences/24 Tile{ AsIs: e.Sentences#1/19 } )/25 Tile{ AsIs: </0 AsIs: & DoUnCondition/4 } Tile{ HalfReuse: s.MarkupContext1 #5/11 AsIs: e.UnscannedFunctions#1/21 AsIs: >/1 ]] }
    refalrts::alloc_open_bracket(vm, context[23]);
    refalrts::alloc_ident(vm, context[24], identifiers[ident_Sentences]);
    refalrts::alloc_close_bracket(vm, context[25]);
    refalrts::reinit_ident(context[10], identifiers[ident_Function]);
    refalrts::reinit_svar( context[11], context[5] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[23], context[25] );
    refalrts::link_brackets( context[15], context[16] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[11];
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[25], context[25] );
    res = refalrts::splice_evar( res, context[19], context[20] );
    res = refalrts::splice_evar( res, context[24], context[24] );
    res = refalrts::splice_evar( res, context[10], context[16] );
    res = refalrts::splice_evar( res, context[23], context[23] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoUnCondition/4 s.MarkupContext#1/5 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: s.MarkupContext#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & DoUnCondition/4 s.MarkupContext#1/5 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_DoUnCondition("DoUnCondition", 1097634219U, 507462218U, func_DoUnCondition);


static refalrts::FnResult func_UnConditionSentence(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 41 elems
  refalrts::Iter context[41];
  refalrts::zeros( context, 41 );
  // </0 & UnConditionSentence/4 s.MarkupContext#1/5 (/8 e.ConditionName#1/6 )/9 (/12 e.Sentence#1/10 )/13 e.ContinuationSentences#1/2 >/1
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
  // closed e.ConditionName#1 as range 6
  // closed e.Sentence#1 as range 10
  // closed e.ContinuationSentences#1 as range 2
  //DEBUG: s.MarkupContext#1: 5
  //DEBUG: e.ConditionName#1: 6
  //DEBUG: e.Sentence#1: 10
  //DEBUG: e.ContinuationSentences#1: 2
  //2: e.ContinuationSentences#1
  //5: s.MarkupContext#1
  //6: e.ConditionName#1
  //10: e.Sentence#1
  //20: e.ConditionName#1
  //23: e.ContinuationSentences#1

  refalrts::reset_allocator(vm);
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::alloc_open_call(vm, context[14]);
  refalrts::alloc_name(vm, context[16], functions[efunc_gen_UnConditionSentence_C1]);
  refalrts::alloc_open_call(vm, context[17]);
  refalrts::alloc_name(vm, context[18], functions[efunc_AnalyzeContinuation]);
  refalrts::alloc_open_bracket(vm, context[19]);
  refalrts::copy_evar(vm, context[20], context[21], context[6], context[7]);
  refalrts::alloc_close_bracket(vm, context[22]);
  refalrts::copy_evar(vm, context[23], context[24], context[2], context[3]);
  refalrts::alloc_close_call(vm, context[25]);
  refalrts::alloc_close_call(vm, context[15]);
  refalrts::push_stack( vm, context[15] );
  refalrts::push_stack( vm, context[14] );
  res = refalrts::splice_elem( res, context[15] );
  refalrts::push_stack( vm, context[25] );
  refalrts::push_stack( vm, context[17] );
  res = refalrts::splice_elem( res, context[25] );
  res = refalrts::splice_evar( res, context[23], context[24] );
  refalrts::link_brackets( context[19], context[22] );
  res = refalrts::splice_elem( res, context[22] );
  res = refalrts::splice_evar( res, context[20], context[21] );
  res = refalrts::splice_elem( res, context[19] );
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
    // </14 & UnConditionSentence?1/18 t.ContName#2/19 e.ContFunction#2/16 >/15
    context[16] = 0;
    context[17] = 0;
    context[18] = refalrts::call_left( context[16], context[17], context[14], context[15] );
    context[20] = refalrts::tvar_left( context[19], context[16], context[17] );
    if( ! context[20] )
      continue;
    // closed e.ContFunction#2 as range 16
    //DEBUG: s.MarkupContext#1: 5
    //DEBUG: e.ConditionName#1: 6
    //DEBUG: e.Sentence#1: 10
    //DEBUG: e.ContinuationSentences#1: 2
    //DEBUG: t.ContName#2: 19
    //DEBUG: e.ContFunction#2: 16
    //2: e.ContinuationSentences#1
    //5: s.MarkupContext#1
    //6: e.ConditionName#1
    //10: e.Sentence#1
    //16: e.ContFunction#2
    //19: t.ContName#2
    //26: s.MarkupContext#1
    //28: e.ConditionName#1
    //31: t.ContName#2
    //32: e.Sentence#1

    refalrts::reset_allocator(vm);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::alloc_open_call(vm, context[21]);
    refalrts::alloc_name(vm, context[23], functions[efunc_gen_UnConditionSentence_C2]);
    refalrts::alloc_open_call(vm, context[24]);
    refalrts::alloc_name(vm, context[25], functions[efunc_ConditionSubFunctions]);
    refalrts::copy_stvar(vm, context[26], context[5]);
    refalrts::alloc_open_bracket(vm, context[27]);
    refalrts::copy_evar(vm, context[28], context[29], context[6], context[7]);
    refalrts::alloc_close_bracket(vm, context[30]);
    refalrts::copy_stvar(vm, context[31], context[19]);
    refalrts::copy_evar(vm, context[32], context[33], context[10], context[11]);
    refalrts::alloc_close_call(vm, context[34]);
    refalrts::alloc_close_call(vm, context[22]);
    refalrts::push_stack( vm, context[22] );
    refalrts::push_stack( vm, context[21] );
    res = refalrts::splice_elem( res, context[22] );
    refalrts::push_stack( vm, context[34] );
    refalrts::push_stack( vm, context[24] );
    res = refalrts::splice_elem( res, context[34] );
    res = refalrts::splice_evar( res, context[32], context[33] );
    res = refalrts::splice_stvar( res, context[31] );
    refalrts::link_brackets( context[27], context[30] );
    res = refalrts::splice_elem( res, context[30] );
    res = refalrts::splice_evar( res, context[28], context[29] );
    res = refalrts::splice_elem( res, context[27] );
    res = refalrts::splice_stvar( res, context[26] );
    res = refalrts::splice_elem( res, context[25] );
    res = refalrts::splice_elem( res, context[24] );
    res = refalrts::splice_elem( res, context[23] );
    res = refalrts::splice_elem( res, context[21] );
    refalrts::use( res );
    refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
    if (rec_res != refalrts::cSuccess)
      return rec_res;
    refalrts::this_is_generated_function(vm);
    do {
      // </21 & UnConditionSentence?2/25 (/28 e.CallCheckSentence#3/26 )/29 e.SubFunctions#3/23 >/22
      context[23] = 0;
      context[24] = 0;
      context[25] = refalrts::call_left( context[23], context[24], context[21], context[22] );
      context[26] = 0;
      context[27] = 0;
      context[28] = refalrts::brackets_left( context[26], context[27], context[23], context[24] );
      if( ! context[28] )
        continue;
      refalrts::bracket_pointers(context[28], context[29]);
      // closed e.CallCheckSentence#3 as range 26
      // closed e.SubFunctions#3 as range 23
      //DEBUG: s.MarkupContext#1: 5
      //DEBUG: e.ConditionName#1: 6
      //DEBUG: e.Sentence#1: 10
      //DEBUG: e.ContinuationSentences#1: 2
      //DEBUG: t.ContName#2: 19
      //DEBUG: e.ContFunction#2: 16
      //DEBUG: e.CallCheckSentence#3: 26
      //DEBUG: e.SubFunctions#3: 23

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} s.MarkupContext#1/5 {REMOVED TILE} e.ConditionName#1/6 {REMOVED TILE} e.Sentence#1/10 {REMOVED TILE} e.ContinuationSentences#1/2 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: (/25 AsIs: (/28 AsIs: e.CallCheckSentence#3/26 AsIs: )/29 } Tile{ AsIs: </14 Reuse: & MakeContinuationSentence/18 AsIs: t.ContName#2/19 } Tile{ AsIs: (/8 } Tile{ HalfReuse: (/0 HalfReuse: # TkVariable/4 }"eOt"/30 Tile{ HalfReuse: 'h'/15 HalfReuse: 'e'/21 } 'r'/32 0/33 Tile{ AsIs: )/13 } Tile{ AsIs: )/9 AsIs: (/12 } (/34 # TkVariable/35"eOther"/36 0/38 )/39 Tile{ HalfReuse: )/22 AsIs: >/1 } )/40 Tile{ AsIs: e.SubFunctions#3/23 } Tile{ AsIs: e.ContFunction#2/16 } Tile{ ]] }
      refalrts::alloc_chars(vm, context[30], context[31], "eOt", 3);
      refalrts::alloc_char(vm, context[32], 'r');
      refalrts::alloc_number(vm, context[33], 0UL);
      refalrts::alloc_open_bracket(vm, context[34]);
      refalrts::alloc_ident(vm, context[35], identifiers[ident_TkVariable]);
      refalrts::alloc_chars(vm, context[36], context[37], "eOther", 6);
      refalrts::alloc_number(vm, context[38], 0UL);
      refalrts::alloc_close_bracket(vm, context[39]);
      refalrts::alloc_close_bracket(vm, context[40]);
      refalrts::reinit_open_bracket(context[25]);
      refalrts::update_name(context[18], functions[efunc_MakeContinuationSentence]);
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_ident(context[4], identifiers[ident_TkVariable]);
      refalrts::reinit_char(context[15], 'h');
      refalrts::reinit_char(context[21], 'e');
      refalrts::reinit_close_bracket(context[22]);
      refalrts::link_brackets( context[25], context[40] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[14] );
      refalrts::link_brackets( context[12], context[22] );
      refalrts::link_brackets( context[34], context[39] );
      refalrts::link_brackets( context[8], context[9] );
      refalrts::link_brackets( context[0], context[13] );
      refalrts::link_brackets( context[28], context[29] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[16], context[17] );
      res = refalrts::splice_evar( res, context[23], context[24] );
      res = refalrts::splice_evar( res, context[40], context[40] );
      res = refalrts::splice_evar( res, context[22], context[1] );
      res = refalrts::splice_evar( res, context[34], context[39] );
      res = refalrts::splice_evar( res, context[9], context[12] );
      res = refalrts::splice_evar( res, context[13], context[13] );
      res = refalrts::splice_evar( res, context[32], context[33] );
      res = refalrts::splice_evar( res, context[15], context[21] );
      res = refalrts::splice_evar( res, context[30], context[31] );
      res = refalrts::splice_evar( res, context[0], context[4] );
      res = refalrts::splice_evar( res, context[8], context[8] );
      res = refalrts::splice_evar( res, context[14], context[20] );
      res = refalrts::splice_evar( res, context[25], context[29] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    refalrts::splice_to_freelist(vm, context[21], context[22]);
    continue;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  refalrts::splice_to_freelist(vm, context[14], context[15]);
  return refalrts::cRecognitionImpossible;
}

static refalrts::NativeReference nat_ref_UnConditionSentence("UnConditionSentence", 1097634219U, 507462218U, func_UnConditionSentence);


static refalrts::FnResult func_AnalyzeContinuation(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
  // </0 & AnalyzeContinuation/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & AnalyzeContinuation/4 (/7 e.new#1/5 )/8 e.new#2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  // closed e.new#2 as range 2
  do {
    // </0 & AnalyzeContinuation/4 (/7 e.ConditionName#1/9 )/8 >/1
    context[9] = context[5];
    context[10] = context[6];
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.ConditionName#1 as range 9
    //DEBUG: e.ConditionName#1: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & AnalyzeContinuation/4 (/7 e.ConditionName#1/9 )/8 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # NoContinuation/1 ]] }
    refalrts::reinit_ident(context[1], identifiers[ident_NoContinuation]);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & AnalyzeContinuation/4 (/7 e.ConditionName#1/5 )/8 e.Sentences#1/2 >/1
  // closed e.ConditionName#1 as range 5
  // closed e.Sentences#1 as range 2
  //DEBUG: e.ConditionName#1: 5
  //DEBUG: e.Sentences#1: 2
  //2: e.Sentences#1
  //5: e.ConditionName#1
  //12: e.ConditionName#1

  refalrts::reset_allocator(vm);
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::alloc_open_call(vm, context[9]);
  refalrts::alloc_name(vm, context[11], functions[efunc_gen_AnalyzeContinuation_S2C1]);
  refalrts::copy_evar(vm, context[12], context[13], context[5], context[6]);
  refalrts::alloc_char(vm, context[14], '?');
  refalrts::alloc_number(vm, context[15], 1UL);
  refalrts::alloc_close_call(vm, context[10]);
  refalrts::push_stack( vm, context[10] );
  refalrts::push_stack( vm, context[9] );
  res = refalrts::splice_elem( res, context[10] );
  res = refalrts::splice_elem( res, context[15] );
  res = refalrts::splice_elem( res, context[14] );
  res = refalrts::splice_evar( res, context[12], context[13] );
  res = refalrts::splice_elem( res, context[11] );
  res = refalrts::splice_elem( res, context[9] );
  refalrts::use( res );
  refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
  if (rec_res != refalrts::cSuccess)
    return rec_res;
  refalrts::this_is_generated_function(vm);
  do {
    // </9 & AnalyzeContinuation$2?1/13 e.ContName#2/11 >/10
    context[11] = 0;
    context[12] = 0;
    context[13] = refalrts::call_left( context[11], context[12], context[9], context[10] );
    // closed e.ContName#2 as range 11
    //DEBUG: e.ConditionName#1: 5
    //DEBUG: e.Sentences#1: 2
    //DEBUG: e.ContName#2: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE} e.ConditionName#1/5 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: (/13 AsIs: e.ContName#2/11 HalfReuse: )/10 HalfReuse: (/1 } Tile{ HalfReuse: # GN-Local/4 AsIs: (/7 } e.ContName#2/11/14 Tile{ AsIs: )/8 AsIs: e.Sentences#1/2 HalfReuse: )/9 } Tile{ ]] }
    refalrts::copy_evar(vm, context[14], context[15], context[11], context[12]);
    refalrts::reinit_open_bracket(context[13]);
    refalrts::reinit_close_bracket(context[10]);
    refalrts::reinit_open_bracket(context[1]);
    refalrts::reinit_ident(context[4], identifiers[ident_GNm_Local]);
    refalrts::reinit_close_bracket(context[9]);
    refalrts::link_brackets( context[1], context[9] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[13], context[10] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[8], context[9] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    res = refalrts::splice_evar( res, context[4], context[7] );
    res = refalrts::splice_evar( res, context[13], context[1] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  refalrts::splice_to_freelist(vm, context[9], context[10]);
  return refalrts::cRecognitionImpossible;
}

static refalrts::NativeReference nat_ref_AnalyzeContinuation("AnalyzeContinuation", 1097634219U, 507462218U, func_AnalyzeContinuation);


static refalrts::FnResult func_MakeContinuationSentence(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
  // </0 & MakeContinuationSentence/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & MakeContinuationSentence/4 t.new#1/13 (/11 e.new#2/9 )/12 (/7 e.new#3/5 )/8 >/1
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
  // closed e.new#2 as range 9
  // closed e.new#3 as range 5
  context[14] = refalrts::tvar_left( context[13], context[2], context[3] );
  if( ! context[14] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & MakeContinuationSentence/4 # NoContinuation/13 (/11 e.Pattern#1/15 )/12 (/7 e.ContArg#1/17 )/8 >/1
    context[15] = context[9];
    context[16] = context[10];
    context[17] = context[5];
    context[18] = context[6];
    if( ! refalrts::ident_term( identifiers[ident_NoContinuation], context[13] ) )
      continue;
    // closed e.Pattern#1 as range 15
    // closed e.ContArg#1 as range 17
    //DEBUG: e.Pattern#1: 15
    //DEBUG: e.ContArg#1: 17

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & MakeContinuationSentence/4 # NoContinuation/13 (/11 e.Pattern#1/15 )/12 (/7 e.ContArg#1/17 )/8 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & MakeContinuationSentence/4 (/13 e.ContName#1/15 )/14 (/11 e.Pattern#1/9 )/12 (/7 e.ContArg#1/5 )/8 >/1
  context[15] = 0;
  context[16] = 0;
  if( ! refalrts::brackets_term( context[15], context[16], context[13] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.ContName#1 as range 15
  // closed e.Pattern#1 as range 9
  // closed e.ContArg#1 as range 5
  //DEBUG: e.ContName#1: 15
  //DEBUG: e.Pattern#1: 9
  //DEBUG: e.ContArg#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: (/14 AsIs: (/11 AsIs: e.Pattern#1/9 AsIs: )/12 AsIs: (/7 } Tile{ HalfReuse: (/0 HalfReuse: # CallBrackets/4 AsIs: (/13 } # Symbol/17 # Name/18 Tile{ AsIs: e.ContName#1/15 } )/19 Tile{ AsIs: e.ContArg#1/5 } )/20 Tile{ AsIs: )/8 HalfReuse: )/1 ]] }
  refalrts::alloc_ident(vm, context[17], identifiers[ident_Symbol]);
  refalrts::alloc_ident(vm, context[18], identifiers[ident_Name]);
  refalrts::alloc_close_bracket(vm, context[19]);
  refalrts::alloc_close_bracket(vm, context[20]);
  refalrts::reinit_open_bracket(context[14]);
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_ident(context[4], identifiers[ident_CallBrackets]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[14], context[1] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[0], context[20] );
  refalrts::link_brackets( context[13], context[19] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[20], context[20] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[19], context[19] );
  res = refalrts::splice_evar( res, context[15], context[16] );
  res = refalrts::splice_evar( res, context[17], context[18] );
  res = refalrts::splice_evar( res, context[0], context[13] );
  res = refalrts::splice_evar( res, context[14], context[7] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_MakeContinuationSentence("MakeContinuationSentence", 1097634219U, 507462218U, func_MakeContinuationSentence);


static refalrts::FnResult func_PatternSteps(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  // </0 & PatternSteps/4 (/7 e.UsedVariables#1/5 )/8 e.Pattern#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.UsedVariables#1 as range 5
  // closed e.Pattern#1 as range 2
  //DEBUG: e.UsedVariables#1: 5
  //DEBUG: e.Pattern#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoPatternSteps/4 AsIs: (/7 AsIs: e.UsedVariables#1/5 AsIs: )/8 } (/9 )/10 (/11 # HOLE/12 Tile{ AsIs: e.Pattern#1/2 } )/13 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[9]);
  refalrts::alloc_close_bracket(vm, context[10]);
  refalrts::alloc_open_bracket(vm, context[11]);
  refalrts::alloc_ident(vm, context[12], identifiers[ident_HOLE]);
  refalrts::alloc_close_bracket(vm, context[13]);
  refalrts::update_name(context[4], functions[efunc_DoPatternSteps]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[11], context[13] );
  refalrts::link_brackets( context[9], context[10] );
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

static refalrts::NativeReference nat_ref_PatternSteps("PatternSteps", 1097634219U, 507462218U, func_PatternSteps);


static refalrts::FnResult func_gen_DoPatternSteps_B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 98 elems
  refalrts::Iter context[98];
  refalrts::zeros( context, 98 );
  // </0 & DoPatternSteps:1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DoPatternSteps:1/4 (/7 e.new#1/5 )/8 t.new#2/9 (/13 e.new#3/11 )/14 e.new#4/2 >/1
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
    // </0 & DoPatternSteps:1/4 (/7 e.BoundEVariables#1/15 )/8 t.UsedVariables#1/9 (/13 e.HolesAndItems#1/17 )/14 e.HolesAndItems-B#2/21 (/27 # HOLE/29 t.Item#2/30 e.Pattern#2/25 )/28 e.HolesAndItems-E#2/23 >/1
    context[15] = context[5];
    context[16] = context[6];
    context[17] = context[11];
    context[18] = context[12];
    context[19] = context[2];
    context[20] = context[3];
    // closed e.BoundEVariables#1 as range 15
    // closed e.HolesAndItems#1 as range 17
    context[21] = 0;
    context[22] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[23] = context[19];
      context[24] = context[20];
      context[25] = 0;
      context[26] = 0;
      context[27] = refalrts::brackets_left( context[25], context[26], context[23], context[24] );
      if( ! context[27] )
        continue;
      refalrts::bracket_pointers(context[27], context[28]);
      context[29] = refalrts::ident_left( identifiers[ident_HOLE], context[25], context[26] );
      if( ! context[29] )
        continue;
      // closed e.HolesAndItems-E#2 as range 23
      context[31] = refalrts::tvar_left( context[30], context[25], context[26] );
      if( ! context[31] )
        continue;
      // closed e.Pattern#2 as range 25
      //DEBUG: t.UsedVariables#1: 9
      //DEBUG: e.BoundEVariables#1: 15
      //DEBUG: e.HolesAndItems#1: 17
      //DEBUG: e.HolesAndItems-B#2: 21
      //DEBUG: e.HolesAndItems-E#2: 23
      //DEBUG: t.Item#2: 30
      //DEBUG: e.Pattern#2: 25
      //9: t.UsedVariables#1
      //15: e.BoundEVariables#1
      //17: e.HolesAndItems#1
      //21: e.HolesAndItems-B#2
      //23: e.HolesAndItems-E#2
      //25: e.Pattern#2
      //30: t.Item#2
      //38: e.BoundEVariables#1
      //41: t.Item#2

      refalrts::reset_allocator(vm);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::alloc_open_call(vm, context[32]);
      refalrts::alloc_name(vm, context[34], functions[efunc_gen_DoPatternSteps_B1S1C1]);
      refalrts::alloc_open_call(vm, context[35]);
      refalrts::alloc_name(vm, context[36], functions[efunc_HardItem]);
      refalrts::alloc_open_bracket(vm, context[37]);
      refalrts::copy_evar(vm, context[38], context[39], context[15], context[16]);
      refalrts::alloc_close_bracket(vm, context[40]);
      refalrts::copy_stvar(vm, context[41], context[30]);
      refalrts::alloc_close_call(vm, context[42]);
      refalrts::alloc_close_call(vm, context[33]);
      refalrts::push_stack( vm, context[33] );
      refalrts::push_stack( vm, context[32] );
      res = refalrts::splice_elem( res, context[33] );
      refalrts::push_stack( vm, context[42] );
      refalrts::push_stack( vm, context[35] );
      res = refalrts::splice_elem( res, context[42] );
      res = refalrts::splice_stvar( res, context[41] );
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
        // </32 & DoPatternSteps:1$1?1/36 # True/37 >/33
        context[34] = 0;
        context[35] = 0;
        context[36] = refalrts::call_left( context[34], context[35], context[32], context[33] );
        context[37] = refalrts::ident_left( identifiers[ident_True], context[34], context[35] );
        if( ! context[37] )
          continue;
        if( ! refalrts::empty_seq( context[34], context[35] ) )
          continue;
        //DEBUG: t.UsedVariables#1: 9
        //DEBUG: e.BoundEVariables#1: 15
        //DEBUG: e.HolesAndItems#1: 17
        //DEBUG: e.HolesAndItems-B#2: 21
        //DEBUG: e.HolesAndItems-E#2: 23
        //DEBUG: t.Item#2: 30
        //DEBUG: e.Pattern#2: 25

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} (/13 e.HolesAndItems#1/17 )/14 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} & DoPatternSteps:1$1?1/36 # True/37 >/33 >/1 {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoPatternSteps/4 } Tile{ AsIs: t.UsedVariables#1/9 } Tile{ AsIs: (/7 AsIs: e.BoundEVariables#1/15 AsIs: )/8 } Tile{ AsIs: e.HolesAndItems-B#2/21 } Tile{ AsIs: t.Item#2/30 } Tile{ AsIs: (/27 AsIs: # HOLE/29 } Tile{ AsIs: e.Pattern#2/25 } Tile{ AsIs: )/28 AsIs: e.HolesAndItems-E#2/23 HalfReuse: >/32 } Tile{ ]] }
        refalrts::update_name(context[4], functions[efunc_DoPatternSteps]);
        refalrts::reinit_close_call(context[32]);
        refalrts::push_stack( vm, context[32] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[27], context[28] );
        refalrts::link_brackets( context[7], context[8] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[28], context[32] );
        res = refalrts::splice_evar( res, context[25], context[26] );
        res = refalrts::splice_evar( res, context[27], context[29] );
        res = refalrts::splice_evar( res, context[30], context[31] );
        res = refalrts::splice_evar( res, context[21], context[22] );
        res = refalrts::splice_evar( res, context[7], context[8] );
        res = refalrts::splice_evar( res, context[9], context[10] );
        refalrts::splice_to_freelist_open( vm, context[4], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      refalrts::splice_to_freelist(vm, context[32], context[33]);
      continue;
    } while ( refalrts::open_evar_advance( context[21], context[22], context[19], context[20] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoPatternSteps:1/4 (/7 e.BoundEVariables#1/15 )/8 t.UsedVariables#1/9 (/13 e.HolesAndItems#1/17 )/14 e.HolesAndItems-B#2/21 (/27 # HOLE/29 e.Pattern#2/25 t.Item#2/30 )/28 e.HolesAndItems-E#2/23 >/1
    context[15] = context[5];
    context[16] = context[6];
    context[17] = context[11];
    context[18] = context[12];
    context[19] = context[2];
    context[20] = context[3];
    // closed e.BoundEVariables#1 as range 15
    // closed e.HolesAndItems#1 as range 17
    context[21] = 0;
    context[22] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[23] = context[19];
      context[24] = context[20];
      context[25] = 0;
      context[26] = 0;
      context[27] = refalrts::brackets_left( context[25], context[26], context[23], context[24] );
      if( ! context[27] )
        continue;
      refalrts::bracket_pointers(context[27], context[28]);
      context[29] = refalrts::ident_left( identifiers[ident_HOLE], context[25], context[26] );
      if( ! context[29] )
        continue;
      // closed e.HolesAndItems-E#2 as range 23
      context[31] = refalrts::tvar_right( context[30], context[25], context[26] );
      if( ! context[31] )
        continue;
      // closed e.Pattern#2 as range 25
      //DEBUG: t.UsedVariables#1: 9
      //DEBUG: e.BoundEVariables#1: 15
      //DEBUG: e.HolesAndItems#1: 17
      //DEBUG: e.HolesAndItems-B#2: 21
      //DEBUG: e.HolesAndItems-E#2: 23
      //DEBUG: t.Item#2: 30
      //DEBUG: e.Pattern#2: 25
      //9: t.UsedVariables#1
      //15: e.BoundEVariables#1
      //17: e.HolesAndItems#1
      //21: e.HolesAndItems-B#2
      //23: e.HolesAndItems-E#2
      //25: e.Pattern#2
      //30: t.Item#2
      //38: e.BoundEVariables#1
      //41: t.Item#2

      refalrts::reset_allocator(vm);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::alloc_open_call(vm, context[32]);
      refalrts::alloc_name(vm, context[34], functions[efunc_gen_DoPatternSteps_B1S2C1]);
      refalrts::alloc_open_call(vm, context[35]);
      refalrts::alloc_name(vm, context[36], functions[efunc_HardItem]);
      refalrts::alloc_open_bracket(vm, context[37]);
      refalrts::copy_evar(vm, context[38], context[39], context[15], context[16]);
      refalrts::alloc_close_bracket(vm, context[40]);
      refalrts::copy_stvar(vm, context[41], context[30]);
      refalrts::alloc_close_call(vm, context[42]);
      refalrts::alloc_close_call(vm, context[33]);
      refalrts::push_stack( vm, context[33] );
      refalrts::push_stack( vm, context[32] );
      res = refalrts::splice_elem( res, context[33] );
      refalrts::push_stack( vm, context[42] );
      refalrts::push_stack( vm, context[35] );
      res = refalrts::splice_elem( res, context[42] );
      res = refalrts::splice_stvar( res, context[41] );
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
        // </32 & DoPatternSteps:1$2?1/36 # True/37 >/33
        context[34] = 0;
        context[35] = 0;
        context[36] = refalrts::call_left( context[34], context[35], context[32], context[33] );
        context[37] = refalrts::ident_left( identifiers[ident_True], context[34], context[35] );
        if( ! context[37] )
          continue;
        if( ! refalrts::empty_seq( context[34], context[35] ) )
          continue;
        //DEBUG: t.UsedVariables#1: 9
        //DEBUG: e.BoundEVariables#1: 15
        //DEBUG: e.HolesAndItems#1: 17
        //DEBUG: e.HolesAndItems-B#2: 21
        //DEBUG: e.HolesAndItems-E#2: 23
        //DEBUG: t.Item#2: 30
        //DEBUG: e.Pattern#2: 25

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} (/7 {REMOVED TILE} )/8 {REMOVED TILE} e.HolesAndItems#1/17 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} </32 & DoPatternSteps:1$2?1/36 # True/37 >/33 {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoPatternSteps/4 } Tile{ AsIs: t.UsedVariables#1/9 AsIs: (/13 } Tile{ AsIs: e.BoundEVariables#1/15 } Tile{ AsIs: )/14 AsIs: e.HolesAndItems-B#2/21 AsIs: (/27 AsIs: # HOLE/29 } Tile{ AsIs: e.Pattern#2/25 } Tile{ AsIs: )/28 } Tile{ AsIs: t.Item#2/30 } Tile{ AsIs: e.HolesAndItems-E#2/23 } Tile{ AsIs: >/1 ]] }
        refalrts::update_name(context[4], functions[efunc_DoPatternSteps]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[27], context[28] );
        refalrts::link_brackets( context[13], context[14] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[23], context[24] );
        res = refalrts::splice_evar( res, context[30], context[31] );
        res = refalrts::splice_evar( res, context[28], context[28] );
        res = refalrts::splice_evar( res, context[25], context[26] );
        res = refalrts::splice_evar( res, context[14], context[29] );
        res = refalrts::splice_evar( res, context[15], context[16] );
        res = refalrts::splice_evar( res, context[9], context[13] );
        refalrts::splice_to_freelist_open( vm, context[4], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      refalrts::splice_to_freelist(vm, context[32], context[33]);
      continue;
    } while ( refalrts::open_evar_advance( context[21], context[22], context[19], context[20] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoPatternSteps:1/4 (/7 e.BoundEVariables#1/15 )/8 t.UsedVariables#1/9 (/13 e.HolesAndItems#1/17 )/14 e.HolesAndItems-B#2/21 (/27 # HOLE/29 (/32 # TkVariable/34 'e'/35 e.Index#2/30 )/33 )/28 e.HolesAndItems-E#2/23 >/1
    context[15] = context[5];
    context[16] = context[6];
    context[17] = context[11];
    context[18] = context[12];
    context[19] = context[2];
    context[20] = context[3];
    // closed e.BoundEVariables#1 as range 15
    // closed e.HolesAndItems#1 as range 17
    context[21] = 0;
    context[22] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[23] = context[19];
      context[24] = context[20];
      context[25] = 0;
      context[26] = 0;
      context[27] = refalrts::brackets_left( context[25], context[26], context[23], context[24] );
      if( ! context[27] )
        continue;
      refalrts::bracket_pointers(context[27], context[28]);
      context[29] = refalrts::ident_left( identifiers[ident_HOLE], context[25], context[26] );
      if( ! context[29] )
        continue;
      context[30] = 0;
      context[31] = 0;
      context[32] = refalrts::brackets_left( context[30], context[31], context[25], context[26] );
      if( ! context[32] )
        continue;
      refalrts::bracket_pointers(context[32], context[33]);
      context[34] = refalrts::ident_left( identifiers[ident_TkVariable], context[30], context[31] );
      if( ! context[34] )
        continue;
      context[35] = refalrts::char_left( 'e', context[30], context[31] );
      if( ! context[35] )
        continue;
      if( ! refalrts::empty_seq( context[25], context[26] ) )
        continue;
      // closed e.Index#2 as range 30
      // closed e.HolesAndItems-E#2 as range 23
      //DEBUG: t.UsedVariables#1: 9
      //DEBUG: e.BoundEVariables#1: 15
      //DEBUG: e.HolesAndItems#1: 17
      //DEBUG: e.HolesAndItems-B#2: 21
      //DEBUG: e.Index#2: 30
      //DEBUG: e.HolesAndItems-E#2: 23

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} (/13 e.HolesAndItems#1/17 {REMOVED TILE} {REMOVED TILE} (/27 # HOLE/29 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoPatternSteps/4 } Tile{ AsIs: t.UsedVariables#1/9 } Tile{ AsIs: (/7 AsIs: e.BoundEVariables#1/15 HalfReuse: (/8 } e.Index#2/30/36 Tile{ AsIs: )/14 } Tile{ AsIs: )/28 } Tile{ AsIs: e.HolesAndItems-B#2/21 } Tile{ AsIs: (/32 AsIs: # TkVariable/34 AsIs: 'e'/35 AsIs: e.Index#2/30 AsIs: )/33 } Tile{ AsIs: e.HolesAndItems-E#2/23 } Tile{ AsIs: >/1 ]] }
      refalrts::copy_evar(vm, context[36], context[37], context[30], context[31]);
      refalrts::update_name(context[4], functions[efunc_DoPatternSteps]);
      refalrts::reinit_open_bracket(context[8]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[32], context[33] );
      refalrts::link_brackets( context[7], context[28] );
      refalrts::link_brackets( context[8], context[14] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[23], context[24] );
      res = refalrts::splice_evar( res, context[32], context[33] );
      res = refalrts::splice_evar( res, context[21], context[22] );
      res = refalrts::splice_evar( res, context[28], context[28] );
      res = refalrts::splice_evar( res, context[14], context[14] );
      res = refalrts::splice_evar( res, context[36], context[37] );
      res = refalrts::splice_evar( res, context[7], context[8] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      refalrts::splice_to_freelist_open( vm, context[4], res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[21], context[22], context[19], context[20] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoPatternSteps:1/4 (/7 e.BoundEVariables#1/15 )/8 t.UsedVariables#1/9 (/13 e.HolesAndItems#1/17 )/14 e.HolesAndItems-B#2/21 (/27 # HOLE/29 )/28 e.HolesAndItems-E#2/23 >/1
    context[15] = context[5];
    context[16] = context[6];
    context[17] = context[11];
    context[18] = context[12];
    context[19] = context[2];
    context[20] = context[3];
    // closed e.BoundEVariables#1 as range 15
    // closed e.HolesAndItems#1 as range 17
    context[21] = 0;
    context[22] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[23] = context[19];
      context[24] = context[20];
      context[25] = 0;
      context[26] = 0;
      context[27] = refalrts::brackets_left( context[25], context[26], context[23], context[24] );
      if( ! context[27] )
        continue;
      refalrts::bracket_pointers(context[27], context[28]);
      context[29] = refalrts::ident_left( identifiers[ident_HOLE], context[25], context[26] );
      if( ! context[29] )
        continue;
      if( ! refalrts::empty_seq( context[25], context[26] ) )
        continue;
      // closed e.HolesAndItems-E#2 as range 23
      //DEBUG: t.UsedVariables#1: 9
      //DEBUG: e.BoundEVariables#1: 15
      //DEBUG: e.HolesAndItems#1: 17
      //DEBUG: e.HolesAndItems-B#2: 21
      //DEBUG: e.HolesAndItems-E#2: 23

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} (/13 e.HolesAndItems#1/17 )/14 {REMOVED TILE} (/27 # HOLE/29 )/28 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoPatternSteps/4 } Tile{ AsIs: t.UsedVariables#1/9 } Tile{ AsIs: (/7 AsIs: e.BoundEVariables#1/15 AsIs: )/8 } Tile{ AsIs: e.HolesAndItems-B#2/21 } Tile{ AsIs: e.HolesAndItems-E#2/23 } Tile{ AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_DoPatternSteps]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[23], context[24] );
      res = refalrts::splice_evar( res, context[21], context[22] );
      res = refalrts::splice_evar( res, context[7], context[8] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      refalrts::splice_to_freelist_open( vm, context[4], res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[21], context[22], context[19], context[20] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoPatternSteps:1/4 (/7 e.BoundEVariables#1/15 )/8 t.UsedVariables#1/9 (/13 e.HolesAndItems#1/17 )/14 e.HolesAndItems-B#2/21 (/27 # HOLE/29 (/32 # Brackets/34 e.InBrackets#2/30 )/33 e.Pattern#2/25 )/28 e.HolesAndItems-E#2/23 >/1
    context[15] = context[5];
    context[16] = context[6];
    context[17] = context[11];
    context[18] = context[12];
    context[19] = context[2];
    context[20] = context[3];
    // closed e.BoundEVariables#1 as range 15
    // closed e.HolesAndItems#1 as range 17
    context[21] = 0;
    context[22] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[23] = context[19];
      context[24] = context[20];
      context[25] = 0;
      context[26] = 0;
      context[27] = refalrts::brackets_left( context[25], context[26], context[23], context[24] );
      if( ! context[27] )
        continue;
      refalrts::bracket_pointers(context[27], context[28]);
      context[29] = refalrts::ident_left( identifiers[ident_HOLE], context[25], context[26] );
      if( ! context[29] )
        continue;
      context[30] = 0;
      context[31] = 0;
      context[32] = refalrts::brackets_left( context[30], context[31], context[25], context[26] );
      if( ! context[32] )
        continue;
      refalrts::bracket_pointers(context[32], context[33]);
      context[34] = refalrts::ident_left( identifiers[ident_Brackets], context[30], context[31] );
      if( ! context[34] )
        continue;
      // closed e.InBrackets#2 as range 30
      // closed e.Pattern#2 as range 25
      // closed e.HolesAndItems-E#2 as range 23
      //DEBUG: t.UsedVariables#1: 9
      //DEBUG: e.BoundEVariables#1: 15
      //DEBUG: e.HolesAndItems#1: 17
      //DEBUG: e.HolesAndItems-B#2: 21
      //DEBUG: e.InBrackets#2: 30
      //DEBUG: e.Pattern#2: 25
      //DEBUG: e.HolesAndItems-E#2: 23

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.HolesAndItems#1/17 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoPatternSteps/4 } Tile{ AsIs: t.UsedVariables#1/9 AsIs: (/13 } Tile{ AsIs: e.BoundEVariables#1/15 } Tile{ AsIs: )/14 AsIs: e.HolesAndItems-B#2/21 AsIs: (/27 Reuse: # LeftBracket/29 HalfReuse: )/32 HalfReuse: (/34 } # HOLE/35 Tile{ AsIs: e.InBrackets#2/30 } Tile{ AsIs: )/8 } Tile{ AsIs: (/7 } # RightBracket/36 )/37 (/38 Tile{ HalfReuse: # HOLE/33 AsIs: e.Pattern#2/25 AsIs: )/28 AsIs: e.HolesAndItems-E#2/23 AsIs: >/1 ]] }
      refalrts::alloc_ident(vm, context[35], identifiers[ident_HOLE]);
      refalrts::alloc_ident(vm, context[36], identifiers[ident_RightBracket]);
      refalrts::alloc_close_bracket(vm, context[37]);
      refalrts::alloc_open_bracket(vm, context[38]);
      refalrts::update_name(context[4], functions[efunc_DoPatternSteps]);
      refalrts::update_ident(context[29], identifiers[ident_LeftBracket]);
      refalrts::reinit_close_bracket(context[32]);
      refalrts::reinit_open_bracket(context[34]);
      refalrts::reinit_ident(context[33], identifiers[ident_HOLE]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[38], context[28] );
      refalrts::link_brackets( context[7], context[37] );
      refalrts::link_brackets( context[34], context[8] );
      refalrts::link_brackets( context[27], context[32] );
      refalrts::link_brackets( context[13], context[14] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[33];
      res = refalrts::splice_evar( res, context[36], context[38] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      res = refalrts::splice_evar( res, context[8], context[8] );
      res = refalrts::splice_evar( res, context[30], context[31] );
      res = refalrts::splice_evar( res, context[35], context[35] );
      res = refalrts::splice_evar( res, context[14], context[34] );
      res = refalrts::splice_evar( res, context[15], context[16] );
      res = refalrts::splice_evar( res, context[9], context[13] );
      refalrts::splice_to_freelist_open( vm, context[4], res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[21], context[22], context[19], context[20] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoPatternSteps:1/4 (/7 e.BoundEVariables#1/15 )/8 t.UsedVariables#1/9 (/13 e.HolesAndItems#1/17 )/14 e.HolesAndItems-B#2/21 (/27 # HOLE/29 e.Pattern#2/25 (/32 # Brackets/34 e.InBrackets#2/30 )/33 )/28 e.HolesAndItems-E#2/23 >/1
    context[15] = context[5];
    context[16] = context[6];
    context[17] = context[11];
    context[18] = context[12];
    context[19] = context[2];
    context[20] = context[3];
    // closed e.BoundEVariables#1 as range 15
    // closed e.HolesAndItems#1 as range 17
    context[21] = 0;
    context[22] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[23] = context[19];
      context[24] = context[20];
      context[25] = 0;
      context[26] = 0;
      context[27] = refalrts::brackets_left( context[25], context[26], context[23], context[24] );
      if( ! context[27] )
        continue;
      refalrts::bracket_pointers(context[27], context[28]);
      context[29] = refalrts::ident_left( identifiers[ident_HOLE], context[25], context[26] );
      if( ! context[29] )
        continue;
      context[30] = 0;
      context[31] = 0;
      context[32] = refalrts::brackets_right( context[30], context[31], context[25], context[26] );
      if( ! context[32] )
        continue;
      refalrts::bracket_pointers(context[32], context[33]);
      context[34] = refalrts::ident_left( identifiers[ident_Brackets], context[30], context[31] );
      if( ! context[34] )
        continue;
      // closed e.Pattern#2 as range 25
      // closed e.InBrackets#2 as range 30
      // closed e.HolesAndItems-E#2 as range 23
      //DEBUG: t.UsedVariables#1: 9
      //DEBUG: e.BoundEVariables#1: 15
      //DEBUG: e.HolesAndItems#1: 17
      //DEBUG: e.HolesAndItems-B#2: 21
      //DEBUG: e.Pattern#2: 25
      //DEBUG: e.InBrackets#2: 30
      //DEBUG: e.HolesAndItems-E#2: 23

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.HolesAndItems#1/17 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoPatternSteps/4 } Tile{ AsIs: t.UsedVariables#1/9 AsIs: (/13 } Tile{ AsIs: e.BoundEVariables#1/15 } Tile{ AsIs: )/14 AsIs: e.HolesAndItems-B#2/21 AsIs: (/27 AsIs: # HOLE/29 AsIs: e.Pattern#2/25 HalfReuse: )/32 HalfReuse: (/34 } # LeftBracket/35 Tile{ AsIs: )/8 } Tile{ AsIs: (/7 } # HOLE/36 Tile{ AsIs: e.InBrackets#2/30 } )/37 (/38 Tile{ HalfReuse: # RightBracket/33 AsIs: )/28 AsIs: e.HolesAndItems-E#2/23 AsIs: >/1 ]] }
      refalrts::alloc_ident(vm, context[35], identifiers[ident_LeftBracket]);
      refalrts::alloc_ident(vm, context[36], identifiers[ident_HOLE]);
      refalrts::alloc_close_bracket(vm, context[37]);
      refalrts::alloc_open_bracket(vm, context[38]);
      refalrts::update_name(context[4], functions[efunc_DoPatternSteps]);
      refalrts::reinit_close_bracket(context[32]);
      refalrts::reinit_open_bracket(context[34]);
      refalrts::reinit_ident(context[33], identifiers[ident_RightBracket]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[38], context[28] );
      refalrts::link_brackets( context[7], context[37] );
      refalrts::link_brackets( context[34], context[8] );
      refalrts::link_brackets( context[27], context[32] );
      refalrts::link_brackets( context[13], context[14] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[33];
      res = refalrts::splice_evar( res, context[37], context[38] );
      res = refalrts::splice_evar( res, context[30], context[31] );
      res = refalrts::splice_evar( res, context[36], context[36] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      res = refalrts::splice_evar( res, context[8], context[8] );
      res = refalrts::splice_evar( res, context[35], context[35] );
      res = refalrts::splice_evar( res, context[14], context[34] );
      res = refalrts::splice_evar( res, context[15], context[16] );
      res = refalrts::splice_evar( res, context[9], context[13] );
      refalrts::splice_to_freelist_open( vm, context[4], res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[21], context[22], context[19], context[20] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoPatternSteps:1/4 (/7 e.BoundEVariables#1/15 )/8 t.UsedVariables#1/9 (/13 e.HolesAndItems#1/17 )/14 e.HolesAndItems-B#2/21 (/27 # HOLE/29 (/32 # ADT-Brackets/34 (/37 e.Name#2/35 )/38 e.InBrackets#2/30 )/33 e.Pattern#2/25 )/28 e.HolesAndItems-E#2/23 >/1
    context[15] = context[5];
    context[16] = context[6];
    context[17] = context[11];
    context[18] = context[12];
    context[19] = context[2];
    context[20] = context[3];
    // closed e.BoundEVariables#1 as range 15
    // closed e.HolesAndItems#1 as range 17
    context[21] = 0;
    context[22] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[23] = context[19];
      context[24] = context[20];
      context[25] = 0;
      context[26] = 0;
      context[27] = refalrts::brackets_left( context[25], context[26], context[23], context[24] );
      if( ! context[27] )
        continue;
      refalrts::bracket_pointers(context[27], context[28]);
      context[29] = refalrts::ident_left( identifiers[ident_HOLE], context[25], context[26] );
      if( ! context[29] )
        continue;
      context[30] = 0;
      context[31] = 0;
      context[32] = refalrts::brackets_left( context[30], context[31], context[25], context[26] );
      if( ! context[32] )
        continue;
      refalrts::bracket_pointers(context[32], context[33]);
      context[34] = refalrts::ident_left( identifiers[ident_ADTm_Brackets], context[30], context[31] );
      if( ! context[34] )
        continue;
      context[35] = 0;
      context[36] = 0;
      context[37] = refalrts::brackets_left( context[35], context[36], context[30], context[31] );
      if( ! context[37] )
        continue;
      refalrts::bracket_pointers(context[37], context[38]);
      // closed e.Name#2 as range 35
      // closed e.InBrackets#2 as range 30
      // closed e.Pattern#2 as range 25
      // closed e.HolesAndItems-E#2 as range 23
      //DEBUG: t.UsedVariables#1: 9
      //DEBUG: e.BoundEVariables#1: 15
      //DEBUG: e.HolesAndItems#1: 17
      //DEBUG: e.HolesAndItems-B#2: 21
      //DEBUG: e.Name#2: 35
      //DEBUG: e.InBrackets#2: 30
      //DEBUG: e.Pattern#2: 25
      //DEBUG: e.HolesAndItems-E#2: 23

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.HolesAndItems#1/17 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoPatternSteps/4 } Tile{ AsIs: t.UsedVariables#1/9 AsIs: (/13 } Tile{ AsIs: e.BoundEVariables#1/15 } Tile{ AsIs: )/14 AsIs: e.HolesAndItems-B#2/21 AsIs: (/27 Reuse: # LeftADT/29 } Tile{ AsIs: e.Name#2/35 } Tile{ AsIs: )/8 } Tile{ AsIs: (/7 } # HOLE/39 Tile{ AsIs: e.InBrackets#2/30 } Tile{ AsIs: )/38 } Tile{ AsIs: (/32 Reuse: # RightADT/34 HalfReuse: )/37 } (/40 Tile{ HalfReuse: # HOLE/33 AsIs: e.Pattern#2/25 AsIs: )/28 AsIs: e.HolesAndItems-E#2/23 AsIs: >/1 ]] }
      refalrts::alloc_ident(vm, context[39], identifiers[ident_HOLE]);
      refalrts::alloc_open_bracket(vm, context[40]);
      refalrts::update_name(context[4], functions[efunc_DoPatternSteps]);
      refalrts::update_ident(context[29], identifiers[ident_LeftADT]);
      refalrts::update_ident(context[34], identifiers[ident_RightADT]);
      refalrts::reinit_close_bracket(context[37]);
      refalrts::reinit_ident(context[33], identifiers[ident_HOLE]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[40], context[28] );
      refalrts::link_brackets( context[32], context[37] );
      refalrts::link_brackets( context[7], context[38] );
      refalrts::link_brackets( context[27], context[8] );
      refalrts::link_brackets( context[13], context[14] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[33];
      res = refalrts::splice_evar( res, context[40], context[40] );
      res = refalrts::splice_evar( res, context[32], context[37] );
      res = refalrts::splice_evar( res, context[38], context[38] );
      res = refalrts::splice_evar( res, context[30], context[31] );
      res = refalrts::splice_evar( res, context[39], context[39] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      res = refalrts::splice_evar( res, context[8], context[8] );
      res = refalrts::splice_evar( res, context[35], context[36] );
      res = refalrts::splice_evar( res, context[14], context[29] );
      res = refalrts::splice_evar( res, context[15], context[16] );
      res = refalrts::splice_evar( res, context[9], context[13] );
      refalrts::splice_to_freelist_open( vm, context[4], res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[21], context[22], context[19], context[20] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoPatternSteps:1/4 (/7 e.BoundEVariables#1/15 )/8 t.UsedVariables#1/9 (/13 e.HolesAndItems#1/17 )/14 e.HolesAndItems-B#2/21 (/27 # HOLE/29 e.Pattern#2/25 (/32 # ADT-Brackets/34 (/37 e.Name#2/35 )/38 e.InBrackets#2/30 )/33 )/28 e.HolesAndItems-E#2/23 >/1
    context[15] = context[5];
    context[16] = context[6];
    context[17] = context[11];
    context[18] = context[12];
    context[19] = context[2];
    context[20] = context[3];
    // closed e.BoundEVariables#1 as range 15
    // closed e.HolesAndItems#1 as range 17
    context[21] = 0;
    context[22] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[23] = context[19];
      context[24] = context[20];
      context[25] = 0;
      context[26] = 0;
      context[27] = refalrts::brackets_left( context[25], context[26], context[23], context[24] );
      if( ! context[27] )
        continue;
      refalrts::bracket_pointers(context[27], context[28]);
      context[29] = refalrts::ident_left( identifiers[ident_HOLE], context[25], context[26] );
      if( ! context[29] )
        continue;
      context[30] = 0;
      context[31] = 0;
      context[32] = refalrts::brackets_right( context[30], context[31], context[25], context[26] );
      if( ! context[32] )
        continue;
      refalrts::bracket_pointers(context[32], context[33]);
      context[34] = refalrts::ident_left( identifiers[ident_ADTm_Brackets], context[30], context[31] );
      if( ! context[34] )
        continue;
      context[35] = 0;
      context[36] = 0;
      context[37] = refalrts::brackets_left( context[35], context[36], context[30], context[31] );
      if( ! context[37] )
        continue;
      refalrts::bracket_pointers(context[37], context[38]);
      // closed e.Pattern#2 as range 25
      // closed e.Name#2 as range 35
      // closed e.InBrackets#2 as range 30
      // closed e.HolesAndItems-E#2 as range 23
      //DEBUG: t.UsedVariables#1: 9
      //DEBUG: e.BoundEVariables#1: 15
      //DEBUG: e.HolesAndItems#1: 17
      //DEBUG: e.HolesAndItems-B#2: 21
      //DEBUG: e.Pattern#2: 25
      //DEBUG: e.Name#2: 35
      //DEBUG: e.InBrackets#2: 30
      //DEBUG: e.HolesAndItems-E#2: 23

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.HolesAndItems#1/17 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoPatternSteps/4 } Tile{ AsIs: t.UsedVariables#1/9 AsIs: (/13 } Tile{ AsIs: e.BoundEVariables#1/15 } Tile{ AsIs: )/14 AsIs: e.HolesAndItems-B#2/21 AsIs: (/27 AsIs: # HOLE/29 AsIs: e.Pattern#2/25 HalfReuse: )/32 HalfReuse: (/34 HalfReuse: # LeftADT/37 AsIs: e.Name#2/35 AsIs: )/38 } Tile{ AsIs: (/7 } # HOLE/39 Tile{ AsIs: e.InBrackets#2/30 } Tile{ AsIs: )/8 } (/40 Tile{ HalfReuse: # RightADT/33 AsIs: )/28 AsIs: e.HolesAndItems-E#2/23 AsIs: >/1 ]] }
      refalrts::alloc_ident(vm, context[39], identifiers[ident_HOLE]);
      refalrts::alloc_open_bracket(vm, context[40]);
      refalrts::update_name(context[4], functions[efunc_DoPatternSteps]);
      refalrts::reinit_close_bracket(context[32]);
      refalrts::reinit_open_bracket(context[34]);
      refalrts::reinit_ident(context[37], identifiers[ident_LeftADT]);
      refalrts::reinit_ident(context[33], identifiers[ident_RightADT]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[40], context[28] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::link_brackets( context[34], context[38] );
      refalrts::link_brackets( context[27], context[32] );
      refalrts::link_brackets( context[13], context[14] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[33];
      res = refalrts::splice_evar( res, context[40], context[40] );
      res = refalrts::splice_evar( res, context[8], context[8] );
      res = refalrts::splice_evar( res, context[30], context[31] );
      res = refalrts::splice_evar( res, context[39], context[39] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      res = refalrts::splice_evar( res, context[14], context[38] );
      res = refalrts::splice_evar( res, context[15], context[16] );
      res = refalrts::splice_evar( res, context[9], context[13] );
      refalrts::splice_to_freelist_open( vm, context[4], res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[21], context[22], context[19], context[20] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoPatternSteps:1/4 (/7 e.BoundEVariables#1/15 )/8 t.UsedVariables#1/9 (/13 e.HolesAndItems#1/17 )/14 e.HolesAndItems-B#2/21 (/27 # HOLE/29 (/32 # TkVariable/34 'e'/35 e.Index#2/30 )/33 e.Pattern#2/25 )/28 e.HolesAndItems-E#2/23 >/1
    context[15] = context[5];
    context[16] = context[6];
    context[17] = context[11];
    context[18] = context[12];
    context[19] = context[2];
    context[20] = context[3];
    // closed e.BoundEVariables#1 as range 15
    // closed e.HolesAndItems#1 as range 17
    context[21] = 0;
    context[22] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[23] = context[19];
      context[24] = context[20];
      context[25] = 0;
      context[26] = 0;
      context[27] = refalrts::brackets_left( context[25], context[26], context[23], context[24] );
      if( ! context[27] )
        continue;
      refalrts::bracket_pointers(context[27], context[28]);
      context[29] = refalrts::ident_left( identifiers[ident_HOLE], context[25], context[26] );
      if( ! context[29] )
        continue;
      context[30] = 0;
      context[31] = 0;
      context[32] = refalrts::brackets_left( context[30], context[31], context[25], context[26] );
      if( ! context[32] )
        continue;
      refalrts::bracket_pointers(context[32], context[33]);
      context[34] = refalrts::ident_left( identifiers[ident_TkVariable], context[30], context[31] );
      if( ! context[34] )
        continue;
      context[35] = refalrts::char_left( 'e', context[30], context[31] );
      if( ! context[35] )
        continue;
      // closed e.Index#2 as range 30
      // closed e.Pattern#2 as range 25
      // closed e.HolesAndItems-E#2 as range 23
      //DEBUG: t.UsedVariables#1: 9
      //DEBUG: e.BoundEVariables#1: 15
      //DEBUG: e.HolesAndItems#1: 17
      //DEBUG: e.HolesAndItems-B#2: 21
      //DEBUG: e.Index#2: 30
      //DEBUG: e.Pattern#2: 25
      //DEBUG: e.HolesAndItems-E#2: 23

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoPatternSteps/4 } Tile{ AsIs: t.UsedVariables#1/9 } Tile{ AsIs: (/7 AsIs: e.BoundEVariables#1/15 HalfReuse: (/8 } e.Index#2/30/36 )/38 Tile{ AsIs: )/14 } Tile{ AsIs: e.HolesAndItems-B#2/21 } Tile{ AsIs: (/32 Reuse: # OpenE/34 AsIs: 'e'/35 AsIs: e.Index#2/30 AsIs: )/33 } Tile{ AsIs: (/27 AsIs: # HOLE/29 } Tile{ AsIs: e.Pattern#2/25 } Tile{ AsIs: )/28 AsIs: e.HolesAndItems-E#2/23 AsIs: >/1 } Tile{ AsIs: (/13 } </39 & Map/40 & BindBrackets/41 </42 & T1/43 t.UsedVariables#1/9/44 Tile{ AsIs: e.HolesAndItems#1/17 } >/46 </47 & T2/48 t.UsedVariables#1/9/49 e.HolesAndItems#1/17/51 >/53 </54 & T3/55 t.UsedVariables#1/9/56 e.HolesAndItems#1/17/58 >/60 </61 & T4/62 t.UsedVariables#1/9/63 e.HolesAndItems#1/17/65 >/67 </68 & T5/69 t.UsedVariables#1/9/70 e.HolesAndItems#1/17/72 >/74 </75 & T5-sub/76 t.UsedVariables#1/9/77 e.Index#2/30/79 >/81 </82 & T6/83 t.UsedVariables#1/9/84 e.HolesAndItems#1/17/86 >/88 </89 & T7/90 t.UsedVariables#1/9/91 e.HolesAndItems#1/17/93 >/95 >/96 )/97 Tile{ ]] }
      refalrts::copy_evar(vm, context[36], context[37], context[30], context[31]);
      refalrts::alloc_close_bracket(vm, context[38]);
      refalrts::alloc_open_call(vm, context[39]);
      refalrts::alloc_name(vm, context[40], functions[efunc_Map]);
      refalrts::alloc_name(vm, context[41], functions[efunc_BindBrackets]);
      refalrts::alloc_open_call(vm, context[42]);
      refalrts::alloc_name(vm, context[43], functions[efunc_T1]);
      refalrts::copy_evar(vm, context[44], context[45], context[9], context[10]);
      refalrts::alloc_close_call(vm, context[46]);
      refalrts::alloc_open_call(vm, context[47]);
      refalrts::alloc_name(vm, context[48], functions[efunc_T2]);
      refalrts::copy_evar(vm, context[49], context[50], context[9], context[10]);
      refalrts::copy_evar(vm, context[51], context[52], context[17], context[18]);
      refalrts::alloc_close_call(vm, context[53]);
      refalrts::alloc_open_call(vm, context[54]);
      refalrts::alloc_name(vm, context[55], functions[efunc_T3]);
      refalrts::copy_evar(vm, context[56], context[57], context[9], context[10]);
      refalrts::copy_evar(vm, context[58], context[59], context[17], context[18]);
      refalrts::alloc_close_call(vm, context[60]);
      refalrts::alloc_open_call(vm, context[61]);
      refalrts::alloc_name(vm, context[62], functions[efunc_T4]);
      refalrts::copy_evar(vm, context[63], context[64], context[9], context[10]);
      refalrts::copy_evar(vm, context[65], context[66], context[17], context[18]);
      refalrts::alloc_close_call(vm, context[67]);
      refalrts::alloc_open_call(vm, context[68]);
      refalrts::alloc_name(vm, context[69], functions[efunc_T5]);
      refalrts::copy_evar(vm, context[70], context[71], context[9], context[10]);
      refalrts::copy_evar(vm, context[72], context[73], context[17], context[18]);
      refalrts::alloc_close_call(vm, context[74]);
      refalrts::alloc_open_call(vm, context[75]);
      refalrts::alloc_name(vm, context[76], functions[efunc_T5m_sub]);
      refalrts::copy_evar(vm, context[77], context[78], context[9], context[10]);
      refalrts::copy_evar(vm, context[79], context[80], context[30], context[31]);
      refalrts::alloc_close_call(vm, context[81]);
      refalrts::alloc_open_call(vm, context[82]);
      refalrts::alloc_name(vm, context[83], functions[efunc_T6]);
      refalrts::copy_evar(vm, context[84], context[85], context[9], context[10]);
      refalrts::copy_evar(vm, context[86], context[87], context[17], context[18]);
      refalrts::alloc_close_call(vm, context[88]);
      refalrts::alloc_open_call(vm, context[89]);
      refalrts::alloc_name(vm, context[90], functions[efunc_T7]);
      refalrts::copy_evar(vm, context[91], context[92], context[9], context[10]);
      refalrts::copy_evar(vm, context[93], context[94], context[17], context[18]);
      refalrts::alloc_close_call(vm, context[95]);
      refalrts::alloc_close_call(vm, context[96]);
      refalrts::alloc_close_bracket(vm, context[97]);
      refalrts::update_name(context[4], functions[efunc_DoPatternSteps]);
      refalrts::reinit_open_bracket(context[8]);
      refalrts::update_ident(context[34], identifiers[ident_OpenE]);
      refalrts::link_brackets( context[13], context[97] );
      refalrts::push_stack( vm, context[96] );
      refalrts::push_stack( vm, context[39] );
      refalrts::push_stack( vm, context[95] );
      refalrts::push_stack( vm, context[89] );
      refalrts::push_stack( vm, context[88] );
      refalrts::push_stack( vm, context[82] );
      refalrts::push_stack( vm, context[81] );
      refalrts::push_stack( vm, context[75] );
      refalrts::push_stack( vm, context[74] );
      refalrts::push_stack( vm, context[68] );
      refalrts::push_stack( vm, context[67] );
      refalrts::push_stack( vm, context[61] );
      refalrts::push_stack( vm, context[60] );
      refalrts::push_stack( vm, context[54] );
      refalrts::push_stack( vm, context[53] );
      refalrts::push_stack( vm, context[47] );
      refalrts::push_stack( vm, context[46] );
      refalrts::push_stack( vm, context[42] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[27], context[28] );
      refalrts::link_brackets( context[32], context[33] );
      refalrts::link_brackets( context[7], context[14] );
      refalrts::link_brackets( context[8], context[38] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[46], context[97] );
      res = refalrts::splice_evar( res, context[17], context[18] );
      res = refalrts::splice_evar( res, context[39], context[45] );
      res = refalrts::splice_evar( res, context[13], context[13] );
      res = refalrts::splice_evar( res, context[28], context[1] );
      res = refalrts::splice_evar( res, context[25], context[26] );
      res = refalrts::splice_evar( res, context[27], context[29] );
      res = refalrts::splice_evar( res, context[32], context[33] );
      res = refalrts::splice_evar( res, context[21], context[22] );
      res = refalrts::splice_evar( res, context[14], context[14] );
      res = refalrts::splice_evar( res, context[38], context[38] );
      res = refalrts::splice_evar( res, context[36], context[37] );
      res = refalrts::splice_evar( res, context[7], context[8] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[21], context[22], context[19], context[20] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoPatternSteps:1/4 (/7 e.BoundEVariables#1/5 )/8 t.UsedVariables#1/9 (/13 e.HolesAndItems#1/11 )/14 e.OnlyItems#2/2 >/1
  // closed e.BoundEVariables#1 as range 5
  // closed e.HolesAndItems#1 as range 11
  // closed e.OnlyItems#2 as range 2
  //DEBUG: t.UsedVariables#1: 9
  //DEBUG: e.BoundEVariables#1: 5
  //DEBUG: e.HolesAndItems#1: 11
  //DEBUG: e.OnlyItems#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} e.BoundEVariables#1/5 {REMOVED TILE} t.UsedVariables#1/9 {REMOVED TILE} e.HolesAndItems#1/11 {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: </4 HalfReuse: & BindBrackets/7 } </15 Tile{ HalfReuse: & T0/14 AsIs: e.OnlyItems#2/2 AsIs: >/1 } Tile{ HalfReuse: >/13 } Tile{ AsIs: )/8 } Tile{ ]] }
  refalrts::alloc_open_call(vm, context[15]);
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_open_call(context[4]);
  refalrts::reinit_name(context[7], functions[efunc_BindBrackets]);
  refalrts::reinit_name(context[14], functions[efunc_T0]);
  refalrts::reinit_close_call(context[13]);
  refalrts::link_brackets( context[0], context[8] );
  refalrts::push_stack( vm, context[13] );
  refalrts::push_stack( vm, context[4] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[15] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[13], context[13] );
  res = refalrts::splice_evar( res, context[14], context[1] );
  res = refalrts::splice_evar( res, context[15], context[15] );
  refalrts::splice_to_freelist_open( vm, context[7], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoPatternSteps_B1("DoPatternSteps:1", 1097634219U, 507462218U, func_gen_DoPatternSteps_B1);


static refalrts::FnResult func_DoPatternSteps(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & DoPatternSteps/4 t.UsedVariables#1/5 (/9 e.BoundEVariables#1/7 )/10 e.HolesAndItems#1/2 >/1
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
  // closed e.BoundEVariables#1 as range 7
  // closed e.HolesAndItems#1 as range 2
  //DEBUG: t.UsedVariables#1: 5
  //DEBUG: e.BoundEVariables#1: 7
  //DEBUG: e.HolesAndItems#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 HalfReuse: [*]/4 } & DoPatternSteps:1/11 (/12 Tile{ AsIs: e.BoundEVariables#1/7 } )/13 Tile{ AsIs: t.UsedVariables#1/5 AsIs: (/9 } e.HolesAndItems#1/2/14 )/16 Tile{ HalfReuse: {*}/10 AsIs: e.HolesAndItems#1/2 AsIs: >/1 ]] }
  refalrts::alloc_name(vm, context[11], functions[efunc_gen_DoPatternSteps_B1]);
  refalrts::alloc_open_bracket(vm, context[12]);
  refalrts::alloc_close_bracket(vm, context[13]);
  refalrts::copy_evar(vm, context[14], context[15], context[2], context[3]);
  refalrts::alloc_close_bracket(vm, context[16]);
  refalrts::reinit_closure_head(context[4]);
  refalrts::reinit_unwrapped_closure(context[10], context[4]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[9], context[16] );
  refalrts::link_brackets( context[12], context[13] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[10];
  res = refalrts::splice_evar( res, context[16], context[16] );
  res = refalrts::splice_evar( res, context[14], context[15] );
  res = refalrts::splice_evar( res, context[5], context[9] );
  res = refalrts::splice_evar( res, context[13], context[13] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  refalrts::use( res );
  refalrts::wrap_closure( context[10] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_DoPatternSteps("DoPatternSteps", 1097634219U, 507462218U, func_DoPatternSteps);


static refalrts::FnResult func_HardItem(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 41 elems
  refalrts::Iter context[41];
  refalrts::zeros( context, 41 );
  // </0 & HardItem/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & HardItem/4 (/7 e.new#1/5 )/8 (/11 s.new#2/13 e.new#3/9 )/12 >/1
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
    // </0 & HardItem/4 (/7 e.new#4/14 )/8 (/11 s.new#5/13 s.new#6/18 e.new#7/16 )/12 >/1
    context[14] = context[5];
    context[15] = context[6];
    context[16] = context[9];
    context[17] = context[10];
    // closed e.new#4 as range 14
    if( ! refalrts::svar_left( context[18], context[16], context[17] ) )
      continue;
    // closed e.new#7 as range 16
    do {
      // </0 & HardItem/4 (/7 e.BoundEVariables#1/19 )/8 (/11 # Symbol/13 s.Type#1/18 e.Info#1/21 )/12 >/1
      context[19] = context[14];
      context[20] = context[15];
      context[21] = context[16];
      context[22] = context[17];
      if( ! refalrts::ident_term( identifiers[ident_Symbol], context[13] ) )
        continue;
      // closed e.BoundEVariables#1 as range 19
      // closed e.Info#1 as range 21
      //DEBUG: s.Type#1: 18
      //DEBUG: e.BoundEVariables#1: 19
      //DEBUG: e.Info#1: 21

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & HardItem/4 (/7 e.BoundEVariables#1/19 )/8 (/11 # Symbol/13 s.Type#1/18 e.Info#1/21 )/12 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: # True/1 ]] }
      refalrts::reinit_ident(context[1], identifiers[ident_True]);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & HardItem/4 (/7 e.new#8/19 )/8 (/11 # TkVariable/13 s.new#9/18 e.new#10/21 )/12 >/1
    context[19] = context[14];
    context[20] = context[15];
    context[21] = context[16];
    context[22] = context[17];
    if( ! refalrts::ident_term( identifiers[ident_TkVariable], context[13] ) )
      continue;
    // closed e.new#8 as range 19
    // closed e.new#10 as range 21
    do {
      // </0 & HardItem/4 (/7 e.BoundEVariables#1/23 )/8 (/11 # TkVariable/13 's'/18 e.Index#1/25 )/12 >/1
      context[23] = context[19];
      context[24] = context[20];
      context[25] = context[21];
      context[26] = context[22];
      if( ! refalrts::char_term( 's', context[18] ) )
        continue;
      // closed e.BoundEVariables#1 as range 23
      // closed e.Index#1 as range 25
      //DEBUG: e.BoundEVariables#1: 23
      //DEBUG: e.Index#1: 25

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & HardItem/4 (/7 e.BoundEVariables#1/23 )/8 (/11 # TkVariable/13 's'/18 e.Index#1/25 )/12 {REMOVED TILE}
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
      // </0 & HardItem/4 (/7 e.BoundEVariables#1/23 )/8 (/11 # TkVariable/13 't'/18 e.Index#1/25 )/12 >/1
      context[23] = context[19];
      context[24] = context[20];
      context[25] = context[21];
      context[26] = context[22];
      if( ! refalrts::char_term( 't', context[18] ) )
        continue;
      // closed e.BoundEVariables#1 as range 23
      // closed e.Index#1 as range 25
      //DEBUG: e.BoundEVariables#1: 23
      //DEBUG: e.Index#1: 25

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & HardItem/4 (/7 e.BoundEVariables#1/23 )/8 (/11 # TkVariable/13 't'/18 e.Index#1/25 )/12 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: # True/1 ]] }
      refalrts::reinit_ident(context[1], identifiers[ident_True]);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & HardItem/4 (/7 e.new#11/23 )/8 (/11 # TkVariable/13 'e'/18 e.new#12/25 )/12 >/1
    context[23] = context[19];
    context[24] = context[20];
    context[25] = context[21];
    context[26] = context[22];
    if( ! refalrts::char_term( 'e', context[18] ) )
      continue;
    // closed e.new#11 as range 23
    // closed e.new#12 as range 25
    do {
      // </0 & HardItem/4 (/7 e.BoundEVariables-B#1/31 (/37 e.Index#1/39 )/38 e.BoundEVariables-E#1/33 )/8 (/11 # TkVariable/13 'e'/18 e.Index#1/29 )/12 >/1
      context[27] = context[23];
      context[28] = context[24];
      context[29] = context[25];
      context[30] = context[26];
      // closed e.Index#1 as range 29
      context[31] = 0;
      context[32] = 0;
      refalrts::start_e_loop(vm);
      do {
        context[33] = context[27];
        context[34] = context[28];
        context[35] = 0;
        context[36] = 0;
        context[37] = refalrts::brackets_left( context[35], context[36], context[33], context[34] );
        if( ! context[37] )
          continue;
        refalrts::bracket_pointers(context[37], context[38]);
        if( ! refalrts::repeated_evar_left( vm, context[39], context[40], context[29], context[30], context[35], context[36] ) )
          continue;
        if( ! refalrts::empty_seq( context[35], context[36] ) )
          continue;
        // closed e.BoundEVariables-E#1 as range 33
        //DEBUG: e.Index#1: 29
        //DEBUG: e.BoundEVariables-B#1: 31
        //DEBUG: e.BoundEVariables-E#1: 33

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 & HardItem/4 (/7 e.BoundEVariables-B#1/31 (/37 e.Index#1/39 )/38 e.BoundEVariables-E#1/33 )/8 (/11 # TkVariable/13 'e'/18 e.Index#1/29 )/12 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: # True/1 ]] }
        refalrts::reinit_ident(context[1], identifiers[ident_True]);
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[31], context[32], context[27], context[28] ) );
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & HardItem/4 (/7 e.BoundEVariables#1/27 )/8 (/11 # TkVariable/13 'e'/18 e.Index#1/29 )/12 >/1
    context[27] = context[23];
    context[28] = context[24];
    context[29] = context[25];
    context[30] = context[26];
    // closed e.BoundEVariables#1 as range 27
    // closed e.Index#1 as range 29
    //DEBUG: e.BoundEVariables#1: 27
    //DEBUG: e.Index#1: 29

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & HardItem/4 (/7 e.BoundEVariables#1/27 )/8 (/11 # TkVariable/13 'e'/18 e.Index#1/29 )/12 {REMOVED TILE}
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
    // </0 & HardItem/4 (/7 e.BoundEVariables#1/14 )/8 (/11 # Brackets/13 e.Pattern#1/16 )/12 >/1
    context[14] = context[5];
    context[15] = context[6];
    context[16] = context[9];
    context[17] = context[10];
    if( ! refalrts::ident_term( identifiers[ident_Brackets], context[13] ) )
      continue;
    // closed e.BoundEVariables#1 as range 14
    // closed e.Pattern#1 as range 16
    //DEBUG: e.BoundEVariables#1: 14
    //DEBUG: e.Pattern#1: 16

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & HardItem/4 (/7 e.BoundEVariables#1/14 )/8 (/11 # Brackets/13 e.Pattern#1/16 )/12 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # False/1 ]] }
    refalrts::reinit_ident(context[1], identifiers[ident_False]);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & HardItem/4 (/7 e.BoundEVariables#1/5 )/8 (/11 # ADT-Brackets/13 (/16 e.Name#1/14 )/17 e.Pattern#1/9 )/12 >/1
  if( ! refalrts::ident_term( identifiers[ident_ADTm_Brackets], context[13] ) )
    return refalrts::cRecognitionImpossible;
  context[14] = 0;
  context[15] = 0;
  context[16] = refalrts::brackets_left( context[14], context[15], context[9], context[10] );
  if( ! context[16] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[16], context[17]);
  // closed e.BoundEVariables#1 as range 5
  // closed e.Name#1 as range 14
  // closed e.Pattern#1 as range 9
  //DEBUG: e.BoundEVariables#1: 5
  //DEBUG: e.Name#1: 14
  //DEBUG: e.Pattern#1: 9

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & HardItem/4 (/7 e.BoundEVariables#1/5 )/8 (/11 # ADT-Brackets/13 (/16 e.Name#1/14 )/17 e.Pattern#1/9 )/12 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: # False/1 ]] }
  refalrts::reinit_ident(context[1], identifiers[ident_False]);
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_HardItem("HardItem", 1097634219U, 507462218U, func_HardItem);


static refalrts::FnResult func_BindBrackets(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  // </0 & BindBrackets/4 (/7 e.Expr#1/5 )/8 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
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
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } (/9 </10 & DoBindBrackets/11 Tile{ HalfReuse: (/0 HalfReuse: '$'/4 HalfReuse: )/7 AsIs: e.Expr#1/5 HalfReuse: >/8 HalfReuse: )/1 ]] }
  refalrts::alloc_open_bracket(vm, context[9]);
  refalrts::alloc_open_call(vm, context[10]);
  refalrts::alloc_name(vm, context[11], functions[efunc_DoBindBrackets]);
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_char(context[4], '$');
  refalrts::reinit_close_bracket(context[7]);
  refalrts::reinit_close_call(context[8]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[9], context[1] );
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[10] );
  refalrts::link_brackets( context[0], context[7] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[9], context[11] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_BindBrackets("BindBrackets", 1097634219U, 507462218U, func_BindBrackets);


static refalrts::FnResult func_DoBindBrackets(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 36 elems
  refalrts::Iter context[36];
  refalrts::zeros( context, 36 );
  // </0 & DoBindBrackets/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DoBindBrackets/4 (/7 t.new#1/9 e.new#2/5 )/8 e.new#3/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#3 as range 2
  context[10] = refalrts::tvar_left( context[9], context[5], context[6] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 5
  do {
    // </0 & DoBindBrackets/4 (/7 t.new#4/9 e.new#5/11 )/8 (/17 s.new#6/19 e.new#7/15 )/18 e.new#8/13 >/1
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
    // closed e.new#5 as range 11
    // closed e.new#8 as range 13
    if( ! refalrts::svar_left( context[19], context[15], context[16] ) )
      continue;
    // closed e.new#7 as range 15
    do {
      // </0 & DoBindBrackets/4 (/7 t.new#9/9 e.new#10/20 )/8 (/17 s.new#11/19 s.new#12/26 e.new#13/22 )/18 e.new#14/24 >/1
      context[20] = context[11];
      context[21] = context[12];
      context[22] = context[15];
      context[23] = context[16];
      context[24] = context[13];
      context[25] = context[14];
      // closed e.new#10 as range 20
      // closed e.new#14 as range 24
      if( ! refalrts::svar_left( context[26], context[22], context[23] ) )
        continue;
      // closed e.new#13 as range 22
      do {
        // </0 & DoBindBrackets/4 (/7 t.MultiBracket#1/9 e.Scanned#1/27 )/8 (/17 # Symbol/19 s.Type#1/26 e.Info#1/29 )/18 e.Tail#1/31 >/1
        context[27] = context[20];
        context[28] = context[21];
        context[29] = context[22];
        context[30] = context[23];
        context[31] = context[24];
        context[32] = context[25];
        if( ! refalrts::ident_term( identifiers[ident_Symbol], context[19] ) )
          continue;
        // closed e.Scanned#1 as range 27
        // closed e.Info#1 as range 29
        // closed e.Tail#1 as range 31
        //DEBUG: t.MultiBracket#1: 9
        //DEBUG: s.Type#1: 26
        //DEBUG: e.Scanned#1: 27
        //DEBUG: e.Info#1: 29
        //DEBUG: e.Tail#1: 31

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} s.Type#1/26 {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoBindBrackets/4 AsIs: (/7 AsIs: t.MultiBracket#1/9 AsIs: e.Scanned#1/27 HalfReuse: (/8 HalfReuse: # Symbol/17 HalfReuse: s.Type1 #26/19 } Tile{ AsIs: e.Info#1/29 } )/33 Tile{ AsIs: )/18 AsIs: e.Tail#1/31 AsIs: >/1 ]] }
        refalrts::alloc_close_bracket(vm, context[33]);
        refalrts::reinit_open_bracket(context[8]);
        refalrts::reinit_ident(context[17], identifiers[ident_Symbol]);
        refalrts::reinit_svar( context[19], context[26] );
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[7], context[18] );
        refalrts::link_brackets( context[8], context[33] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[18];
        res = refalrts::splice_evar( res, context[33], context[33] );
        res = refalrts::splice_evar( res, context[29], context[30] );
        refalrts::splice_to_freelist_open( vm, context[19], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & DoBindBrackets/4 (/7 t.MultiBracket#1/9 e.Scanned#1/27 )/8 (/17 # TkVariable/19 s.Type#1/26 e.Index#1/29 )/18 e.Tail#1/31 >/1
        context[27] = context[20];
        context[28] = context[21];
        context[29] = context[22];
        context[30] = context[23];
        context[31] = context[24];
        context[32] = context[25];
        if( ! refalrts::ident_term( identifiers[ident_TkVariable], context[19] ) )
          continue;
        // closed e.Scanned#1 as range 27
        // closed e.Index#1 as range 29
        // closed e.Tail#1 as range 31
        //DEBUG: t.MultiBracket#1: 9
        //DEBUG: s.Type#1: 26
        //DEBUG: e.Scanned#1: 27
        //DEBUG: e.Index#1: 29
        //DEBUG: e.Tail#1: 31

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} s.Type#1/26 {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoBindBrackets/4 AsIs: (/7 AsIs: t.MultiBracket#1/9 AsIs: e.Scanned#1/27 HalfReuse: (/8 HalfReuse: # TkVariable/17 HalfReuse: s.Type1 #26/19 } Tile{ AsIs: e.Index#1/29 } )/33 Tile{ AsIs: )/18 AsIs: e.Tail#1/31 AsIs: >/1 ]] }
        refalrts::alloc_close_bracket(vm, context[33]);
        refalrts::reinit_open_bracket(context[8]);
        refalrts::reinit_ident(context[17], identifiers[ident_TkVariable]);
        refalrts::reinit_svar( context[19], context[26] );
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[7], context[18] );
        refalrts::link_brackets( context[8], context[33] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[18];
        res = refalrts::splice_evar( res, context[33], context[33] );
        res = refalrts::splice_evar( res, context[29], context[30] );
        refalrts::splice_to_freelist_open( vm, context[19], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & DoBindBrackets/4 (/7 t.MultiBracket#1/9 e.Scanned#1/27 )/8 (/17 # OpenE/19 s.Type#1/26 e.Index#1/29 )/18 e.Tail#1/31 >/1
      context[27] = context[20];
      context[28] = context[21];
      context[29] = context[22];
      context[30] = context[23];
      context[31] = context[24];
      context[32] = context[25];
      if( ! refalrts::ident_term( identifiers[ident_OpenE], context[19] ) )
        continue;
      // closed e.Scanned#1 as range 27
      // closed e.Index#1 as range 29
      // closed e.Tail#1 as range 31
      //DEBUG: t.MultiBracket#1: 9
      //DEBUG: s.Type#1: 26
      //DEBUG: e.Scanned#1: 27
      //DEBUG: e.Index#1: 29
      //DEBUG: e.Tail#1: 31

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoBindBrackets/4 AsIs: (/7 AsIs: t.MultiBracket#1/9 AsIs: e.Scanned#1/27 HalfReuse: (/8 HalfReuse: # Brackets/17 HalfReuse: (/19 } # TkVariable/33 Tile{ AsIs: s.Type#1/26 } Tile{ AsIs: e.Index#1/29 } )/34 )/35 Tile{ AsIs: )/18 AsIs: e.Tail#1/31 AsIs: >/1 ]] }
      refalrts::alloc_ident(vm, context[33], identifiers[ident_TkVariable]);
      refalrts::alloc_close_bracket(vm, context[34]);
      refalrts::alloc_close_bracket(vm, context[35]);
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_ident(context[17], identifiers[ident_Brackets]);
      refalrts::reinit_open_bracket(context[19]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[18] );
      refalrts::link_brackets( context[8], context[35] );
      refalrts::link_brackets( context[19], context[34] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[18];
      res = refalrts::splice_evar( res, context[34], context[35] );
      res = refalrts::splice_evar( res, context[29], context[30] );
      res = refalrts::splice_evar( res, context[26], context[26] );
      res = refalrts::splice_evar( res, context[33], context[33] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & DoBindBrackets/4 (/7 t.MultiBracket#1/9 e.Scanned#1/20 )/8 (/17 # Brackets/19 e.InBrackets#1/22 )/18 e.Tail#1/24 >/1
      context[20] = context[11];
      context[21] = context[12];
      context[22] = context[15];
      context[23] = context[16];
      context[24] = context[13];
      context[25] = context[14];
      if( ! refalrts::ident_term( identifiers[ident_Brackets], context[19] ) )
        continue;
      // closed e.Scanned#1 as range 20
      // closed e.InBrackets#1 as range 22
      // closed e.Tail#1 as range 24
      //DEBUG: t.MultiBracket#1: 9
      //DEBUG: e.Scanned#1: 20
      //DEBUG: e.InBrackets#1: 22
      //DEBUG: e.Tail#1: 24

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoBindBrackets/4 AsIs: (/7 AsIs: t.MultiBracket#1/9 AsIs: e.Scanned#1/20 HalfReuse: (/8 HalfReuse: # Brackets/17 } Tile{ AsIs: e.InBrackets#1/22 } Tile{ HalfReuse: )/19 } Tile{ AsIs: )/18 AsIs: e.Tail#1/24 AsIs: >/1 ]] }
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_ident(context[17], identifiers[ident_Brackets]);
      refalrts::reinit_close_bracket(context[19]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[18] );
      refalrts::link_brackets( context[8], context[19] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[18];
      res = refalrts::splice_evar( res, context[19], context[19] );
      res = refalrts::splice_evar( res, context[22], context[23] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & DoBindBrackets/4 (/7 t.new#9/9 e.new#10/20 )/8 (/17 s.new#11/19 )/18 e.new#12/22 >/1
      context[20] = context[11];
      context[21] = context[12];
      context[22] = context[13];
      context[23] = context[14];
      if( ! refalrts::empty_seq( context[15], context[16] ) )
        continue;
      // closed e.new#10 as range 20
      // closed e.new#12 as range 22
      do {
        // </0 & DoBindBrackets/4 (/7 t.MultiBracket#1/9 e.Scanned#1/24 )/8 (/17 # LeftBracket/19 )/18 e.Tail#1/26 >/1
        context[24] = context[20];
        context[25] = context[21];
        context[26] = context[22];
        context[27] = context[23];
        if( ! refalrts::ident_term( identifiers[ident_LeftBracket], context[19] ) )
          continue;
        // closed e.Scanned#1 as range 24
        // closed e.Tail#1 as range 26
        //DEBUG: t.MultiBracket#1: 9
        //DEBUG: e.Scanned#1: 24
        //DEBUG: e.Tail#1: 26

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} )/18 {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: </19 } Tile{ HalfReuse: & DoBindBrackets/0 HalfReuse: (/4 AsIs: (/7 AsIs: t.MultiBracket#1/9 AsIs: e.Scanned#1/24 AsIs: )/8 HalfReuse: )/17 } Tile{ AsIs: e.Tail#1/26 } Tile{ AsIs: >/1 ]] }
        refalrts::reinit_open_call(context[19]);
        refalrts::reinit_name(context[0], functions[efunc_DoBindBrackets]);
        refalrts::reinit_open_bracket(context[4]);
        refalrts::reinit_close_bracket(context[17]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[19] );
        refalrts::link_brackets( context[4], context[17] );
        refalrts::link_brackets( context[7], context[8] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[26], context[27] );
        res = refalrts::splice_evar( res, context[0], context[17] );
        res = refalrts::splice_evar( res, context[19], context[19] );
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & DoBindBrackets/4 (/7 (/9 t.MultiBracket#1/30 e.Scanned#1/28 )/10 e.InBrackets#1/24 )/8 (/17 # RightBracket/19 )/18 e.Tail#1/26 >/1
      context[24] = context[20];
      context[25] = context[21];
      context[26] = context[22];
      context[27] = context[23];
      context[28] = 0;
      context[29] = 0;
      if( ! refalrts::brackets_term( context[28], context[29], context[9] ) )
        continue;
      if( ! refalrts::ident_term( identifiers[ident_RightBracket], context[19] ) )
        continue;
      // closed e.InBrackets#1 as range 24
      // closed e.Tail#1 as range 26
      context[31] = refalrts::tvar_left( context[30], context[28], context[29] );
      if( ! context[31] )
        continue;
      // closed e.Scanned#1 as range 28
      //DEBUG: e.InBrackets#1: 24
      //DEBUG: e.Tail#1: 26
      //DEBUG: t.MultiBracket#1: 30
      //DEBUG: e.Scanned#1: 28

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 {REMOVED TILE} {REMOVED TILE} )/8 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: </4 HalfReuse: & DoBindBrackets/7 AsIs: (/9 AsIs: t.MultiBracket#1/30 AsIs: e.Scanned#1/28 HalfReuse: (/10 } Tile{ HalfReuse: # Brackets/17 } Tile{ AsIs: e.InBrackets#1/24 } Tile{ HalfReuse: )/19 AsIs: )/18 AsIs: e.Tail#1/26 AsIs: >/1 ]] }
      refalrts::reinit_open_call(context[4]);
      refalrts::reinit_name(context[7], functions[efunc_DoBindBrackets]);
      refalrts::reinit_open_bracket(context[10]);
      refalrts::reinit_ident(context[17], identifiers[ident_Brackets]);
      refalrts::reinit_close_bracket(context[19]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[4] );
      refalrts::link_brackets( context[9], context[18] );
      refalrts::link_brackets( context[10], context[19] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[19];
      res = refalrts::splice_evar( res, context[24], context[25] );
      res = refalrts::splice_evar( res, context[17], context[17] );
      res = refalrts::splice_evar( res, context[4], context[10] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & DoBindBrackets/4 (/7 t.MultiBracket#1/9 e.Scanned#1/20 )/8 (/17 # LeftADT/19 e.Name#1/22 )/18 e.Tail#1/24 >/1
      context[20] = context[11];
      context[21] = context[12];
      context[22] = context[15];
      context[23] = context[16];
      context[24] = context[13];
      context[25] = context[14];
      if( ! refalrts::ident_term( identifiers[ident_LeftADT], context[19] ) )
        continue;
      // closed e.Scanned#1 as range 20
      // closed e.Name#1 as range 22
      // closed e.Tail#1 as range 24
      //DEBUG: t.MultiBracket#1: 9
      //DEBUG: e.Scanned#1: 20
      //DEBUG: e.Name#1: 22
      //DEBUG: e.Tail#1: 24

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: </19 } Tile{ HalfReuse: & DoBindBrackets/0 HalfReuse: (/4 AsIs: (/7 AsIs: t.MultiBracket#1/9 AsIs: e.Scanned#1/20 AsIs: )/8 AsIs: (/17 } Tile{ AsIs: e.Name#1/22 } )/26 Tile{ AsIs: )/18 AsIs: e.Tail#1/24 AsIs: >/1 ]] }
      refalrts::alloc_close_bracket(vm, context[26]);
      refalrts::reinit_open_call(context[19]);
      refalrts::reinit_name(context[0], functions[efunc_DoBindBrackets]);
      refalrts::reinit_open_bracket(context[4]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[19] );
      refalrts::link_brackets( context[4], context[18] );
      refalrts::link_brackets( context[17], context[26] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[18];
      res = refalrts::splice_evar( res, context[26], context[26] );
      res = refalrts::splice_evar( res, context[22], context[23] );
      res = refalrts::splice_evar( res, context[0], context[17] );
      res = refalrts::splice_evar( res, context[19], context[19] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & DoBindBrackets/4 (/7 (/9 t.MultiBracket#1/30 e.Scanned#1/24 )/10 (/28 e.Name#1/26 )/29 e.InBrackets#1/20 )/8 (/17 # RightADT/19 )/18 e.Tail#1/22 >/1
    context[20] = context[11];
    context[21] = context[12];
    context[22] = context[13];
    context[23] = context[14];
    context[24] = 0;
    context[25] = 0;
    if( ! refalrts::brackets_term( context[24], context[25], context[9] ) )
      continue;
    if( ! refalrts::ident_term( identifiers[ident_RightADT], context[19] ) )
      continue;
    context[26] = 0;
    context[27] = 0;
    context[28] = refalrts::brackets_left( context[26], context[27], context[20], context[21] );
    if( ! context[28] )
      continue;
    refalrts::bracket_pointers(context[28], context[29]);
    if( ! refalrts::empty_seq( context[15], context[16] ) )
      continue;
    // closed e.Name#1 as range 26
    // closed e.InBrackets#1 as range 20
    // closed e.Tail#1 as range 22
    context[31] = refalrts::tvar_left( context[30], context[24], context[25] );
    if( ! context[31] )
      continue;
    // closed e.Scanned#1 as range 24
    //DEBUG: e.Name#1: 26
    //DEBUG: e.InBrackets#1: 20
    //DEBUG: e.Tail#1: 22
    //DEBUG: t.MultiBracket#1: 30
    //DEBUG: e.Scanned#1: 24

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} # RightADT/19 )/18 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoBindBrackets/4 AsIs: (/7 } Tile{ AsIs: t.MultiBracket#1/30 } Tile{ AsIs: e.Scanned#1/24 } Tile{ AsIs: (/9 } Tile{ HalfReuse: # ADT-Brackets/10 AsIs: (/28 AsIs: e.Name#1/26 AsIs: )/29 AsIs: e.InBrackets#1/20 AsIs: )/8 HalfReuse: )/17 } Tile{ AsIs: e.Tail#1/22 } Tile{ AsIs: >/1 ]] }
    refalrts::reinit_ident(context[10], identifiers[ident_ADTm_Brackets]);
    refalrts::reinit_close_bracket(context[17]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[17] );
    refalrts::link_brackets( context[9], context[8] );
    refalrts::link_brackets( context[28], context[29] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[22], context[23] );
    res = refalrts::splice_evar( res, context[10], context[17] );
    res = refalrts::splice_evar( res, context[9], context[9] );
    res = refalrts::splice_evar( res, context[24], context[25] );
    res = refalrts::splice_evar( res, context[30], context[31] );
    refalrts::splice_to_freelist_open( vm, context[7], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoBindBrackets/4 (/7 '$'/9 e.Scanned#1/5 )/8 >/1
  if( ! refalrts::char_term( '$', context[9] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Scanned#1 as range 5
  //DEBUG: e.Scanned#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & DoBindBrackets/4 (/7 '$'/9 {REMOVED TILE} )/8 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Scanned#1/5 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_DoBindBrackets("DoBindBrackets", 1097634219U, 507462218U, func_DoBindBrackets);


static refalrts::FnResult func_T1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 50 elems
  refalrts::Iter context[50];
  refalrts::zeros( context, 50 );
  // </0 & T1/4 t.UsedVars#1/5 e.Items#1/7 (/13 # HOLE/15 (/18 # TkVariable/20 'e'/21 e.Index#1/16 )/19 e.Pattern#1/11 )/14 e.ItemsAndHoles#1/9 >/1
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
  refalrts::start_e_loop(vm);
  do {
    context[9] = context[2];
    context[10] = context[3];
    context[11] = 0;
    context[12] = 0;
    context[13] = refalrts::brackets_left( context[11], context[12], context[9], context[10] );
    if( ! context[13] )
      continue;
    refalrts::bracket_pointers(context[13], context[14]);
    context[15] = refalrts::ident_left( identifiers[ident_HOLE], context[11], context[12] );
    if( ! context[15] )
      continue;
    context[16] = 0;
    context[17] = 0;
    context[18] = refalrts::brackets_left( context[16], context[17], context[11], context[12] );
    if( ! context[18] )
      continue;
    refalrts::bracket_pointers(context[18], context[19]);
    context[20] = refalrts::ident_left( identifiers[ident_TkVariable], context[16], context[17] );
    if( ! context[20] )
      continue;
    context[21] = refalrts::char_left( 'e', context[16], context[17] );
    if( ! context[21] )
      continue;
    // closed e.Index#1 as range 16
    // closed e.Pattern#1 as range 11
    // closed e.ItemsAndHoles#1 as range 9
    //DEBUG: t.UsedVars#1: 5
    //DEBUG: e.Items#1: 7
    //DEBUG: e.Index#1: 16
    //DEBUG: e.Pattern#1: 11
    //DEBUG: e.ItemsAndHoles#1: 9
    //5: t.UsedVars#1
    //7: e.Items#1
    //9: e.ItemsAndHoles#1
    //11: e.Pattern#1
    //16: e.Index#1
    //27: t.UsedVars#1
    //29: e.Index#1

    refalrts::reset_allocator(vm);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::alloc_open_call(vm, context[22]);
    refalrts::alloc_name(vm, context[24], functions[efunc_gen_T1_C1]);
    refalrts::alloc_open_call(vm, context[25]);
    refalrts::alloc_name(vm, context[26], functions[efunc_NewVarName]);
    refalrts::copy_stvar(vm, context[27], context[5]);
    refalrts::alloc_char(vm, context[28], 'e');
    refalrts::copy_evar(vm, context[29], context[30], context[16], context[17]);
    refalrts::alloc_open_bracket(vm, context[31]);
    refalrts::alloc_chars(vm, context[32], context[33], "_fix", 4);
    refalrts::alloc_close_bracket(vm, context[34]);
    refalrts::alloc_close_call(vm, context[35]);
    refalrts::alloc_close_call(vm, context[23]);
    refalrts::push_stack( vm, context[23] );
    refalrts::push_stack( vm, context[22] );
    res = refalrts::splice_elem( res, context[23] );
    refalrts::push_stack( vm, context[35] );
    refalrts::push_stack( vm, context[25] );
    res = refalrts::splice_elem( res, context[35] );
    refalrts::link_brackets( context[31], context[34] );
    res = refalrts::splice_elem( res, context[34] );
    res = refalrts::splice_evar( res, context[32], context[33] );
    res = refalrts::splice_elem( res, context[31] );
    res = refalrts::splice_evar( res, context[29], context[30] );
    res = refalrts::splice_elem( res, context[28] );
    res = refalrts::splice_stvar( res, context[27] );
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
      // </22 & T1?1/26 t.UsedVars1#2/27 e.eX_fix#2/24 >/23
      context[24] = 0;
      context[25] = 0;
      context[26] = refalrts::call_left( context[24], context[25], context[22], context[23] );
      context[28] = refalrts::tvar_left( context[27], context[24], context[25] );
      if( ! context[28] )
        continue;
      // closed e.eX_fix#2 as range 24
      //DEBUG: t.UsedVars#1: 5
      //DEBUG: e.Items#1: 7
      //DEBUG: e.Index#1: 16
      //DEBUG: e.Pattern#1: 11
      //DEBUG: e.ItemsAndHoles#1: 9
      //DEBUG: t.UsedVars1#2: 27
      //DEBUG: e.eX_fix#2: 24
      //5: t.UsedVars#1
      //7: e.Items#1
      //9: e.ItemsAndHoles#1
      //11: e.Pattern#1
      //16: e.Index#1
      //24: e.eX_fix#2
      //27: t.UsedVars1#2
      //34: t.UsedVars1#2
      //36: e.Index#1

      refalrts::reset_allocator(vm);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::alloc_open_call(vm, context[29]);
      refalrts::alloc_name(vm, context[31], functions[efunc_gen_T1_C2]);
      refalrts::alloc_open_call(vm, context[32]);
      refalrts::alloc_name(vm, context[33], functions[efunc_NewVarName]);
      refalrts::copy_stvar(vm, context[34], context[27]);
      refalrts::alloc_char(vm, context[35], 't');
      refalrts::copy_evar(vm, context[36], context[37], context[16], context[17]);
      refalrts::alloc_open_bracket(vm, context[38]);
      refalrts::alloc_chars(vm, context[39], context[40], "_next", 5);
      refalrts::alloc_close_bracket(vm, context[41]);
      refalrts::alloc_close_call(vm, context[42]);
      refalrts::alloc_close_call(vm, context[30]);
      refalrts::push_stack( vm, context[30] );
      refalrts::push_stack( vm, context[29] );
      res = refalrts::splice_elem( res, context[30] );
      refalrts::push_stack( vm, context[42] );
      refalrts::push_stack( vm, context[32] );
      res = refalrts::splice_elem( res, context[42] );
      refalrts::link_brackets( context[38], context[41] );
      res = refalrts::splice_elem( res, context[41] );
      res = refalrts::splice_evar( res, context[39], context[40] );
      res = refalrts::splice_elem( res, context[38] );
      res = refalrts::splice_evar( res, context[36], context[37] );
      res = refalrts::splice_elem( res, context[35] );
      res = refalrts::splice_stvar( res, context[34] );
      res = refalrts::splice_elem( res, context[33] );
      res = refalrts::splice_elem( res, context[32] );
      res = refalrts::splice_elem( res, context[31] );
      res = refalrts::splice_elem( res, context[29] );
      refalrts::use( res );
      refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
      if (rec_res != refalrts::cSuccess)
        return rec_res;
      refalrts::this_is_generated_function(vm);
      do {
        // </29 & T1?2/33 t.UsedVars2#3/34 e.tX_next#3/31 >/30
        context[31] = 0;
        context[32] = 0;
        context[33] = refalrts::call_left( context[31], context[32], context[29], context[30] );
        context[35] = refalrts::tvar_left( context[34], context[31], context[32] );
        if( ! context[35] )
          continue;
        // closed e.tX_next#3 as range 31
        //DEBUG: t.UsedVars#1: 5
        //DEBUG: e.Items#1: 7
        //DEBUG: e.Index#1: 16
        //DEBUG: e.Pattern#1: 11
        //DEBUG: e.ItemsAndHoles#1: 9
        //DEBUG: t.UsedVars1#2: 27
        //DEBUG: e.eX_fix#2: 24
        //DEBUG: t.UsedVars2#3: 34
        //DEBUG: e.tX_next#3: 31
        //5: t.UsedVars#1
        //7: e.Items#1
        //9: e.ItemsAndHoles#1
        //11: e.Pattern#1
        //16: e.Index#1
        //24: e.eX_fix#2
        //27: t.UsedVars1#2
        //31: e.tX_next#3
        //34: t.UsedVars2#3
        //41: t.UsedVars2#3
        //43: e.Index#1

        refalrts::reset_allocator(vm);
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        refalrts::alloc_open_call(vm, context[36]);
        refalrts::alloc_name(vm, context[38], functions[efunc_gen_T1_C3]);
        refalrts::alloc_open_call(vm, context[39]);
        refalrts::alloc_name(vm, context[40], functions[efunc_NewVarName]);
        refalrts::copy_stvar(vm, context[41], context[34]);
        refalrts::alloc_char(vm, context[42], 'e');
        refalrts::copy_evar(vm, context[43], context[44], context[16], context[17]);
        refalrts::alloc_open_bracket(vm, context[45]);
        refalrts::alloc_chars(vm, context[46], context[47], "_rest", 5);
        refalrts::alloc_close_bracket(vm, context[48]);
        refalrts::alloc_close_call(vm, context[49]);
        refalrts::alloc_close_call(vm, context[37]);
        refalrts::push_stack( vm, context[37] );
        refalrts::push_stack( vm, context[36] );
        res = refalrts::splice_elem( res, context[37] );
        refalrts::push_stack( vm, context[49] );
        refalrts::push_stack( vm, context[39] );
        res = refalrts::splice_elem( res, context[49] );
        refalrts::link_brackets( context[45], context[48] );
        res = refalrts::splice_elem( res, context[48] );
        res = refalrts::splice_evar( res, context[46], context[47] );
        res = refalrts::splice_elem( res, context[45] );
        res = refalrts::splice_evar( res, context[43], context[44] );
        res = refalrts::splice_elem( res, context[42] );
        res = refalrts::splice_stvar( res, context[41] );
        res = refalrts::splice_elem( res, context[40] );
        res = refalrts::splice_elem( res, context[39] );
        res = refalrts::splice_elem( res, context[38] );
        res = refalrts::splice_elem( res, context[36] );
        refalrts::use( res );
        refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
        if (rec_res != refalrts::cSuccess)
          return rec_res;
        refalrts::this_is_generated_function(vm);
        do {
          // </36 & T1?3/40 t.UsedVars3#4/41 e.eX_rest#4/38 >/37
          context[38] = 0;
          context[39] = 0;
          context[40] = refalrts::call_left( context[38], context[39], context[36], context[37] );
          context[42] = refalrts::tvar_left( context[41], context[38], context[39] );
          if( ! context[42] )
            continue;
          // closed e.eX_rest#4 as range 38
          //DEBUG: t.UsedVars#1: 5
          //DEBUG: e.Items#1: 7
          //DEBUG: e.Index#1: 16
          //DEBUG: e.Pattern#1: 11
          //DEBUG: e.ItemsAndHoles#1: 9
          //DEBUG: t.UsedVars1#2: 27
          //DEBUG: e.eX_fix#2: 24
          //DEBUG: t.UsedVars2#3: 34
          //DEBUG: e.tX_next#3: 31
          //DEBUG: t.UsedVars3#4: 41
          //DEBUG: e.eX_rest#4: 38

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} & T1/4 t.UsedVars#1/5 {REMOVED TILE} {REMOVED TILE} 'e'/21 e.Index#1/16 {REMOVED TILE} e.Pattern#1/11 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} t.UsedVars1#2/27 {REMOVED TILE} {REMOVED TILE} t.UsedVars2#3/34 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.Items#1/7 } Tile{ AsIs: (/13 Reuse: # Brackets/15 AsIs: (/18 AsIs: # TkVariable/20 } Tile{ AsIs: e.eX_fix#2/24 } Tile{ HalfReuse: )/23 HalfReuse: )/29 HalfReuse: (/33 } Tile{ HalfReuse: # TkVariable/19 } Tile{ AsIs: e.tX_next#3/31 } Tile{ AsIs: )/14 } Tile{ HalfReuse: (/22 HalfReuse: # TkVariable/26 } Tile{ AsIs: e.eX_rest#4/38 } Tile{ HalfReuse: )/30 AsIs: </36 Reuse: & PassiveHoles/40 AsIs: t.UsedVars3#4/41 } Tile{ AsIs: e.ItemsAndHoles#1/9 } Tile{ AsIs: >/37 HalfReuse: )/1 ]] }
          refalrts::reinit_open_bracket(context[0]);
          refalrts::update_ident(context[15], identifiers[ident_Brackets]);
          refalrts::reinit_close_bracket(context[23]);
          refalrts::reinit_close_bracket(context[29]);
          refalrts::reinit_open_bracket(context[33]);
          refalrts::reinit_ident(context[19], identifiers[ident_TkVariable]);
          refalrts::reinit_open_bracket(context[22]);
          refalrts::reinit_ident(context[26], identifiers[ident_TkVariable]);
          refalrts::reinit_close_bracket(context[30]);
          refalrts::update_name(context[40], functions[efunc_PassiveHoles]);
          refalrts::reinit_close_bracket(context[1]);
          refalrts::link_brackets( context[0], context[1] );
          refalrts::push_stack( vm, context[37] );
          refalrts::push_stack( vm, context[36] );
          refalrts::link_brackets( context[22], context[30] );
          refalrts::link_brackets( context[33], context[14] );
          refalrts::link_brackets( context[13], context[29] );
          refalrts::link_brackets( context[18], context[23] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[37];
          res = refalrts::splice_evar( res, context[9], context[10] );
          res = refalrts::splice_evar( res, context[30], context[42] );
          res = refalrts::splice_evar( res, context[38], context[39] );
          res = refalrts::splice_evar( res, context[22], context[26] );
          res = refalrts::splice_evar( res, context[14], context[14] );
          res = refalrts::splice_evar( res, context[31], context[32] );
          res = refalrts::splice_evar( res, context[19], context[19] );
          res = refalrts::splice_evar( res, context[23], context[33] );
          res = refalrts::splice_evar( res, context[24], context[25] );
          res = refalrts::splice_evar( res, context[13], context[20] );
          res = refalrts::splice_evar( res, context[7], context[8] );
          refalrts::splice_to_freelist_open( vm, context[0], res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        refalrts::splice_to_freelist(vm, context[36], context[37]);
        continue;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      refalrts::splice_to_freelist(vm, context[29], context[30]);
      continue;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    refalrts::splice_to_freelist(vm, context[22], context[23]);
    continue;
  } while ( refalrts::open_evar_advance( context[7], context[8], context[2], context[3] ) );
  return refalrts::cRecognitionImpossible;
}

static refalrts::NativeReference nat_ref_T1("T1", 1097634219U, 507462218U, func_T1);


static refalrts::FnResult func_PassiveHoles(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 38 elems
  refalrts::Iter context[38];
  refalrts::zeros( context, 38 );
  // </0 & PassiveHoles/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & PassiveHoles/4 t.new#1/5 e.new#2/2 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 2
  do {
    // </0 & PassiveHoles/4 t.UsedVariables#1/5 e.Items#1/9 (/15 # HOLE/17 (/20 # TkVariable/22 'e'/23 e.Index#1/18 )/21 e.Pattern#1/13 )/16 e.ItemsAndHoles#1/11 >/1
    context[7] = context[2];
    context[8] = context[3];
    context[9] = 0;
    context[10] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[11] = context[7];
      context[12] = context[8];
      context[13] = 0;
      context[14] = 0;
      context[15] = refalrts::brackets_left( context[13], context[14], context[11], context[12] );
      if( ! context[15] )
        continue;
      refalrts::bracket_pointers(context[15], context[16]);
      context[17] = refalrts::ident_left( identifiers[ident_HOLE], context[13], context[14] );
      if( ! context[17] )
        continue;
      context[18] = 0;
      context[19] = 0;
      context[20] = refalrts::brackets_left( context[18], context[19], context[13], context[14] );
      if( ! context[20] )
        continue;
      refalrts::bracket_pointers(context[20], context[21]);
      context[22] = refalrts::ident_left( identifiers[ident_TkVariable], context[18], context[19] );
      if( ! context[22] )
        continue;
      context[23] = refalrts::char_left( 'e', context[18], context[19] );
      if( ! context[23] )
        continue;
      // closed e.Index#1 as range 18
      // closed e.Pattern#1 as range 13
      // closed e.ItemsAndHoles#1 as range 11
      //DEBUG: t.UsedVariables#1: 5
      //DEBUG: e.Items#1: 9
      //DEBUG: e.Index#1: 18
      //DEBUG: e.Pattern#1: 13
      //DEBUG: e.ItemsAndHoles#1: 11
      //5: t.UsedVariables#1
      //9: e.Items#1
      //11: e.ItemsAndHoles#1
      //13: e.Pattern#1
      //18: e.Index#1
      //29: t.UsedVariables#1
      //31: e.Index#1

      refalrts::reset_allocator(vm);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::alloc_open_call(vm, context[24]);
      refalrts::alloc_name(vm, context[26], functions[efunc_gen_PassiveHoles_S1C1]);
      refalrts::alloc_open_call(vm, context[27]);
      refalrts::alloc_name(vm, context[28], functions[efunc_NewVarName]);
      refalrts::copy_stvar(vm, context[29], context[5]);
      refalrts::alloc_char(vm, context[30], 'e');
      refalrts::copy_evar(vm, context[31], context[32], context[18], context[19]);
      refalrts::alloc_open_bracket(vm, context[33]);
      refalrts::alloc_chars(vm, context[34], context[35], "_rest", 5);
      refalrts::alloc_close_bracket(vm, context[36]);
      refalrts::alloc_close_call(vm, context[37]);
      refalrts::alloc_close_call(vm, context[25]);
      refalrts::push_stack( vm, context[25] );
      refalrts::push_stack( vm, context[24] );
      res = refalrts::splice_elem( res, context[25] );
      refalrts::push_stack( vm, context[37] );
      refalrts::push_stack( vm, context[27] );
      res = refalrts::splice_elem( res, context[37] );
      refalrts::link_brackets( context[33], context[36] );
      res = refalrts::splice_elem( res, context[36] );
      res = refalrts::splice_evar( res, context[34], context[35] );
      res = refalrts::splice_elem( res, context[33] );
      res = refalrts::splice_evar( res, context[31], context[32] );
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
        // </24 & PassiveHoles$1?1/28 t.NewVars#2/29 e.eX_rest#2/26 >/25
        context[26] = 0;
        context[27] = 0;
        context[28] = refalrts::call_left( context[26], context[27], context[24], context[25] );
        context[30] = refalrts::tvar_left( context[29], context[26], context[27] );
        if( ! context[30] )
          continue;
        // closed e.eX_rest#2 as range 26
        //DEBUG: t.UsedVariables#1: 5
        //DEBUG: e.Items#1: 9
        //DEBUG: e.Index#1: 18
        //DEBUG: e.Pattern#1: 13
        //DEBUG: e.ItemsAndHoles#1: 11
        //DEBUG: t.NewVars#2: 29
        //DEBUG: e.eX_rest#2: 26

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 & PassiveHoles/4 t.UsedVariables#1/5 {REMOVED TILE} (/15 # HOLE/17 {REMOVED TILE} 'e'/23 e.Index#1/18 )/21 e.Pattern#1/13 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} >/25 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ AsIs: e.Items#1/9 } Tile{ AsIs: (/20 AsIs: # TkVariable/22 } Tile{ AsIs: e.eX_rest#2/26 } Tile{ AsIs: )/16 } Tile{ AsIs: </24 Reuse: & PassiveHoles/28 AsIs: t.NewVars#2/29 } Tile{ AsIs: e.ItemsAndHoles#1/11 } Tile{ AsIs: >/1 ]] }
        refalrts::update_name(context[28], functions[efunc_PassiveHoles]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[24] );
        refalrts::link_brackets( context[20], context[16] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[11], context[12] );
        res = refalrts::splice_evar( res, context[24], context[30] );
        res = refalrts::splice_evar( res, context[16], context[16] );
        res = refalrts::splice_evar( res, context[26], context[27] );
        res = refalrts::splice_evar( res, context[20], context[22] );
        res = refalrts::splice_evar( res, context[9], context[10] );
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      refalrts::splice_to_freelist(vm, context[24], context[25]);
      continue;
    } while ( refalrts::open_evar_advance( context[9], context[10], context[7], context[8] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & PassiveHoles/4 t.UsedVariables#1/5 e.Items#1/2 >/1
  // closed e.Items#1 as range 2
  //DEBUG: t.UsedVariables#1: 5
  //DEBUG: e.Items#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & PassiveHoles/4 t.UsedVariables#1/5 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Items#1/2 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_PassiveHoles("PassiveHoles", 1097634219U, 507462218U, func_PassiveHoles);


static refalrts::FnResult func_T2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 50 elems
  refalrts::Iter context[50];
  refalrts::zeros( context, 50 );
  // </0 & T2/4 t.UsedVars#1/5 e.Items#1/7 (/13 # HOLE/15 (/18 # TkVariable/20 'e'/21 e.Index#1/16 )/19 e.Pattern#1/11 )/14 e.ItemsAndHoles#1/9 >/1
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
  refalrts::start_e_loop(vm);
  do {
    context[9] = context[2];
    context[10] = context[3];
    context[11] = 0;
    context[12] = 0;
    context[13] = refalrts::brackets_left( context[11], context[12], context[9], context[10] );
    if( ! context[13] )
      continue;
    refalrts::bracket_pointers(context[13], context[14]);
    context[15] = refalrts::ident_left( identifiers[ident_HOLE], context[11], context[12] );
    if( ! context[15] )
      continue;
    context[16] = 0;
    context[17] = 0;
    context[18] = refalrts::brackets_left( context[16], context[17], context[11], context[12] );
    if( ! context[18] )
      continue;
    refalrts::bracket_pointers(context[18], context[19]);
    context[20] = refalrts::ident_left( identifiers[ident_TkVariable], context[16], context[17] );
    if( ! context[20] )
      continue;
    context[21] = refalrts::char_left( 'e', context[16], context[17] );
    if( ! context[21] )
      continue;
    // closed e.Index#1 as range 16
    // closed e.Pattern#1 as range 11
    // closed e.ItemsAndHoles#1 as range 9
    //DEBUG: t.UsedVars#1: 5
    //DEBUG: e.Items#1: 7
    //DEBUG: e.Index#1: 16
    //DEBUG: e.Pattern#1: 11
    //DEBUG: e.ItemsAndHoles#1: 9
    //5: t.UsedVars#1
    //7: e.Items#1
    //9: e.ItemsAndHoles#1
    //11: e.Pattern#1
    //16: e.Index#1
    //27: t.UsedVars#1
    //29: e.Index#1

    refalrts::reset_allocator(vm);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::alloc_open_call(vm, context[22]);
    refalrts::alloc_name(vm, context[24], functions[efunc_gen_T2_C1]);
    refalrts::alloc_open_call(vm, context[25]);
    refalrts::alloc_name(vm, context[26], functions[efunc_NewVarName]);
    refalrts::copy_stvar(vm, context[27], context[5]);
    refalrts::alloc_char(vm, context[28], 'e');
    refalrts::copy_evar(vm, context[29], context[30], context[16], context[17]);
    refalrts::alloc_open_bracket(vm, context[31]);
    refalrts::alloc_chars(vm, context[32], context[33], "_fix", 4);
    refalrts::alloc_close_bracket(vm, context[34]);
    refalrts::alloc_close_call(vm, context[35]);
    refalrts::alloc_close_call(vm, context[23]);
    refalrts::push_stack( vm, context[23] );
    refalrts::push_stack( vm, context[22] );
    res = refalrts::splice_elem( res, context[23] );
    refalrts::push_stack( vm, context[35] );
    refalrts::push_stack( vm, context[25] );
    res = refalrts::splice_elem( res, context[35] );
    refalrts::link_brackets( context[31], context[34] );
    res = refalrts::splice_elem( res, context[34] );
    res = refalrts::splice_evar( res, context[32], context[33] );
    res = refalrts::splice_elem( res, context[31] );
    res = refalrts::splice_evar( res, context[29], context[30] );
    res = refalrts::splice_elem( res, context[28] );
    res = refalrts::splice_stvar( res, context[27] );
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
      // </22 & T2?1/26 t.UsedVars1#2/27 e.eX_fix#2/24 >/23
      context[24] = 0;
      context[25] = 0;
      context[26] = refalrts::call_left( context[24], context[25], context[22], context[23] );
      context[28] = refalrts::tvar_left( context[27], context[24], context[25] );
      if( ! context[28] )
        continue;
      // closed e.eX_fix#2 as range 24
      //DEBUG: t.UsedVars#1: 5
      //DEBUG: e.Items#1: 7
      //DEBUG: e.Index#1: 16
      //DEBUG: e.Pattern#1: 11
      //DEBUG: e.ItemsAndHoles#1: 9
      //DEBUG: t.UsedVars1#2: 27
      //DEBUG: e.eX_fix#2: 24
      //5: t.UsedVars#1
      //7: e.Items#1
      //9: e.ItemsAndHoles#1
      //11: e.Pattern#1
      //16: e.Index#1
      //24: e.eX_fix#2
      //27: t.UsedVars1#2
      //34: t.UsedVars1#2
      //36: e.Index#1

      refalrts::reset_allocator(vm);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::alloc_open_call(vm, context[29]);
      refalrts::alloc_name(vm, context[31], functions[efunc_gen_T2_C2]);
      refalrts::alloc_open_call(vm, context[32]);
      refalrts::alloc_name(vm, context[33], functions[efunc_NewVarName]);
      refalrts::copy_stvar(vm, context[34], context[27]);
      refalrts::alloc_char(vm, context[35], 't');
      refalrts::copy_evar(vm, context[36], context[37], context[16], context[17]);
      refalrts::alloc_open_bracket(vm, context[38]);
      refalrts::alloc_chars(vm, context[39], context[40], "_next", 5);
      refalrts::alloc_close_bracket(vm, context[41]);
      refalrts::alloc_close_call(vm, context[42]);
      refalrts::alloc_close_call(vm, context[30]);
      refalrts::push_stack( vm, context[30] );
      refalrts::push_stack( vm, context[29] );
      res = refalrts::splice_elem( res, context[30] );
      refalrts::push_stack( vm, context[42] );
      refalrts::push_stack( vm, context[32] );
      res = refalrts::splice_elem( res, context[42] );
      refalrts::link_brackets( context[38], context[41] );
      res = refalrts::splice_elem( res, context[41] );
      res = refalrts::splice_evar( res, context[39], context[40] );
      res = refalrts::splice_elem( res, context[38] );
      res = refalrts::splice_evar( res, context[36], context[37] );
      res = refalrts::splice_elem( res, context[35] );
      res = refalrts::splice_stvar( res, context[34] );
      res = refalrts::splice_elem( res, context[33] );
      res = refalrts::splice_elem( res, context[32] );
      res = refalrts::splice_elem( res, context[31] );
      res = refalrts::splice_elem( res, context[29] );
      refalrts::use( res );
      refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
      if (rec_res != refalrts::cSuccess)
        return rec_res;
      refalrts::this_is_generated_function(vm);
      do {
        // </29 & T2?2/33 t.UsedVars2#3/34 e.tX_next#3/31 >/30
        context[31] = 0;
        context[32] = 0;
        context[33] = refalrts::call_left( context[31], context[32], context[29], context[30] );
        context[35] = refalrts::tvar_left( context[34], context[31], context[32] );
        if( ! context[35] )
          continue;
        // closed e.tX_next#3 as range 31
        //DEBUG: t.UsedVars#1: 5
        //DEBUG: e.Items#1: 7
        //DEBUG: e.Index#1: 16
        //DEBUG: e.Pattern#1: 11
        //DEBUG: e.ItemsAndHoles#1: 9
        //DEBUG: t.UsedVars1#2: 27
        //DEBUG: e.eX_fix#2: 24
        //DEBUG: t.UsedVars2#3: 34
        //DEBUG: e.tX_next#3: 31
        //5: t.UsedVars#1
        //7: e.Items#1
        //9: e.ItemsAndHoles#1
        //11: e.Pattern#1
        //16: e.Index#1
        //24: e.eX_fix#2
        //27: t.UsedVars1#2
        //31: e.tX_next#3
        //34: t.UsedVars2#3
        //41: t.UsedVars2#3
        //43: e.Index#1

        refalrts::reset_allocator(vm);
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        refalrts::alloc_open_call(vm, context[36]);
        refalrts::alloc_name(vm, context[38], functions[efunc_gen_T2_C3]);
        refalrts::alloc_open_call(vm, context[39]);
        refalrts::alloc_name(vm, context[40], functions[efunc_NewVarName]);
        refalrts::copy_stvar(vm, context[41], context[34]);
        refalrts::alloc_char(vm, context[42], 'e');
        refalrts::copy_evar(vm, context[43], context[44], context[16], context[17]);
        refalrts::alloc_open_bracket(vm, context[45]);
        refalrts::alloc_chars(vm, context[46], context[47], "_rest", 5);
        refalrts::alloc_close_bracket(vm, context[48]);
        refalrts::alloc_close_call(vm, context[49]);
        refalrts::alloc_close_call(vm, context[37]);
        refalrts::push_stack( vm, context[37] );
        refalrts::push_stack( vm, context[36] );
        res = refalrts::splice_elem( res, context[37] );
        refalrts::push_stack( vm, context[49] );
        refalrts::push_stack( vm, context[39] );
        res = refalrts::splice_elem( res, context[49] );
        refalrts::link_brackets( context[45], context[48] );
        res = refalrts::splice_elem( res, context[48] );
        res = refalrts::splice_evar( res, context[46], context[47] );
        res = refalrts::splice_elem( res, context[45] );
        res = refalrts::splice_evar( res, context[43], context[44] );
        res = refalrts::splice_elem( res, context[42] );
        res = refalrts::splice_stvar( res, context[41] );
        res = refalrts::splice_elem( res, context[40] );
        res = refalrts::splice_elem( res, context[39] );
        res = refalrts::splice_elem( res, context[38] );
        res = refalrts::splice_elem( res, context[36] );
        refalrts::use( res );
        refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
        if (rec_res != refalrts::cSuccess)
          return rec_res;
        refalrts::this_is_generated_function(vm);
        do {
          // </36 & T2?3/40 t.UsedVars3#4/41 e.eX_rest#4/38 >/37
          context[38] = 0;
          context[39] = 0;
          context[40] = refalrts::call_left( context[38], context[39], context[36], context[37] );
          context[42] = refalrts::tvar_left( context[41], context[38], context[39] );
          if( ! context[42] )
            continue;
          // closed e.eX_rest#4 as range 38
          //DEBUG: t.UsedVars#1: 5
          //DEBUG: e.Items#1: 7
          //DEBUG: e.Index#1: 16
          //DEBUG: e.Pattern#1: 11
          //DEBUG: e.ItemsAndHoles#1: 9
          //DEBUG: t.UsedVars1#2: 27
          //DEBUG: e.eX_fix#2: 24
          //DEBUG: t.UsedVars2#3: 34
          //DEBUG: e.tX_next#3: 31
          //DEBUG: t.UsedVars3#4: 41
          //DEBUG: e.eX_rest#4: 38

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} & T2/4 t.UsedVars#1/5 {REMOVED TILE} {REMOVED TILE} 'e'/21 e.Index#1/16 {REMOVED TILE} e.Pattern#1/11 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} t.UsedVars1#2/27 {REMOVED TILE} {REMOVED TILE} t.UsedVars2#3/34 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.Items#1/7 } Tile{ AsIs: (/13 Reuse: # Brackets/15 AsIs: (/18 AsIs: # TkVariable/20 } Tile{ AsIs: e.eX_fix#2/24 } Tile{ HalfReuse: )/23 HalfReuse: (/29 HalfReuse: # TkVariable/33 } Tile{ AsIs: e.tX_next#3/31 } Tile{ AsIs: )/14 } Tile{ AsIs: )/19 } Tile{ HalfReuse: (/22 HalfReuse: # TkVariable/26 } Tile{ AsIs: e.eX_rest#4/38 } Tile{ HalfReuse: )/30 AsIs: </36 Reuse: & PassiveHoles/40 AsIs: t.UsedVars3#4/41 } Tile{ AsIs: e.ItemsAndHoles#1/9 } Tile{ AsIs: >/37 HalfReuse: )/1 ]] }
          refalrts::reinit_open_bracket(context[0]);
          refalrts::update_ident(context[15], identifiers[ident_Brackets]);
          refalrts::reinit_close_bracket(context[23]);
          refalrts::reinit_open_bracket(context[29]);
          refalrts::reinit_ident(context[33], identifiers[ident_TkVariable]);
          refalrts::reinit_open_bracket(context[22]);
          refalrts::reinit_ident(context[26], identifiers[ident_TkVariable]);
          refalrts::reinit_close_bracket(context[30]);
          refalrts::update_name(context[40], functions[efunc_PassiveHoles]);
          refalrts::reinit_close_bracket(context[1]);
          refalrts::link_brackets( context[0], context[1] );
          refalrts::push_stack( vm, context[37] );
          refalrts::push_stack( vm, context[36] );
          refalrts::link_brackets( context[22], context[30] );
          refalrts::link_brackets( context[13], context[19] );
          refalrts::link_brackets( context[29], context[14] );
          refalrts::link_brackets( context[18], context[23] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[37];
          res = refalrts::splice_evar( res, context[9], context[10] );
          res = refalrts::splice_evar( res, context[30], context[42] );
          res = refalrts::splice_evar( res, context[38], context[39] );
          res = refalrts::splice_evar( res, context[22], context[26] );
          res = refalrts::splice_evar( res, context[19], context[19] );
          res = refalrts::splice_evar( res, context[14], context[14] );
          res = refalrts::splice_evar( res, context[31], context[32] );
          res = refalrts::splice_evar( res, context[23], context[33] );
          res = refalrts::splice_evar( res, context[24], context[25] );
          res = refalrts::splice_evar( res, context[13], context[20] );
          res = refalrts::splice_evar( res, context[7], context[8] );
          refalrts::splice_to_freelist_open( vm, context[0], res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        refalrts::splice_to_freelist(vm, context[36], context[37]);
        continue;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      refalrts::splice_to_freelist(vm, context[29], context[30]);
      continue;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    refalrts::splice_to_freelist(vm, context[22], context[23]);
    continue;
  } while ( refalrts::open_evar_advance( context[7], context[8], context[2], context[3] ) );
  return refalrts::cRecognitionImpossible;
}

static refalrts::NativeReference nat_ref_T2("T2", 1097634219U, 507462218U, func_T2);


static refalrts::FnResult func_T3(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 36 elems
  refalrts::Iter context[36];
  refalrts::zeros( context, 36 );
  // </0 & T3/4 t.UsedVars#1/5 e.Items#1/7 (/13 # HOLE/15 (/18 # TkVariable/20 'e'/21 e.Index#1/16 )/19 e.Pattern#1/11 )/14 e.ItemsAndHoles#1/9 >/1
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
  refalrts::start_e_loop(vm);
  do {
    context[9] = context[2];
    context[10] = context[3];
    context[11] = 0;
    context[12] = 0;
    context[13] = refalrts::brackets_left( context[11], context[12], context[9], context[10] );
    if( ! context[13] )
      continue;
    refalrts::bracket_pointers(context[13], context[14]);
    context[15] = refalrts::ident_left( identifiers[ident_HOLE], context[11], context[12] );
    if( ! context[15] )
      continue;
    context[16] = 0;
    context[17] = 0;
    context[18] = refalrts::brackets_left( context[16], context[17], context[11], context[12] );
    if( ! context[18] )
      continue;
    refalrts::bracket_pointers(context[18], context[19]);
    context[20] = refalrts::ident_left( identifiers[ident_TkVariable], context[16], context[17] );
    if( ! context[20] )
      continue;
    context[21] = refalrts::char_left( 'e', context[16], context[17] );
    if( ! context[21] )
      continue;
    // closed e.Index#1 as range 16
    // closed e.Pattern#1 as range 11
    // closed e.ItemsAndHoles#1 as range 9
    //DEBUG: t.UsedVars#1: 5
    //DEBUG: e.Items#1: 7
    //DEBUG: e.Index#1: 16
    //DEBUG: e.Pattern#1: 11
    //DEBUG: e.ItemsAndHoles#1: 9
    //5: t.UsedVars#1
    //7: e.Items#1
    //9: e.ItemsAndHoles#1
    //11: e.Pattern#1
    //16: e.Index#1
    //27: t.UsedVars#1
    //29: e.Index#1

    refalrts::reset_allocator(vm);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::alloc_open_call(vm, context[22]);
    refalrts::alloc_name(vm, context[24], functions[efunc_gen_T3_C1]);
    refalrts::alloc_open_call(vm, context[25]);
    refalrts::alloc_name(vm, context[26], functions[efunc_NewVarName]);
    refalrts::copy_stvar(vm, context[27], context[5]);
    refalrts::alloc_char(vm, context[28], 'e');
    refalrts::copy_evar(vm, context[29], context[30], context[16], context[17]);
    refalrts::alloc_open_bracket(vm, context[31]);
    refalrts::alloc_chars(vm, context[32], context[33], "_fix", 4);
    refalrts::alloc_close_bracket(vm, context[34]);
    refalrts::alloc_close_call(vm, context[35]);
    refalrts::alloc_close_call(vm, context[23]);
    refalrts::push_stack( vm, context[23] );
    refalrts::push_stack( vm, context[22] );
    res = refalrts::splice_elem( res, context[23] );
    refalrts::push_stack( vm, context[35] );
    refalrts::push_stack( vm, context[25] );
    res = refalrts::splice_elem( res, context[35] );
    refalrts::link_brackets( context[31], context[34] );
    res = refalrts::splice_elem( res, context[34] );
    res = refalrts::splice_evar( res, context[32], context[33] );
    res = refalrts::splice_elem( res, context[31] );
    res = refalrts::splice_evar( res, context[29], context[30] );
    res = refalrts::splice_elem( res, context[28] );
    res = refalrts::splice_stvar( res, context[27] );
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
      // </22 & T3?1/26 t.UsedVars1#2/27 e.eX_fix#2/24 >/23
      context[24] = 0;
      context[25] = 0;
      context[26] = refalrts::call_left( context[24], context[25], context[22], context[23] );
      context[28] = refalrts::tvar_left( context[27], context[24], context[25] );
      if( ! context[28] )
        continue;
      // closed e.eX_fix#2 as range 24
      //DEBUG: t.UsedVars#1: 5
      //DEBUG: e.Items#1: 7
      //DEBUG: e.Index#1: 16
      //DEBUG: e.Pattern#1: 11
      //DEBUG: e.ItemsAndHoles#1: 9
      //DEBUG: t.UsedVars1#2: 27
      //DEBUG: e.eX_fix#2: 24

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} & T3/4 t.UsedVars#1/5 {REMOVED TILE} {REMOVED TILE} 'e'/21 e.Index#1/16 {REMOVED TILE} e.Pattern#1/11 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.Items#1/7 } Tile{ AsIs: (/13 Reuse: # Brackets/15 AsIs: (/18 AsIs: # TkVariable/20 } Tile{ AsIs: e.eX_fix#2/24 } Tile{ AsIs: )/19 } Tile{ AsIs: )/14 } Tile{ AsIs: </22 Reuse: & PassiveHoles/26 AsIs: t.UsedVars1#2/27 } Tile{ AsIs: e.ItemsAndHoles#1/9 } Tile{ AsIs: >/23 HalfReuse: )/1 ]] }
      refalrts::reinit_open_bracket(context[0]);
      refalrts::update_ident(context[15], identifiers[ident_Brackets]);
      refalrts::update_name(context[26], functions[efunc_PassiveHoles]);
      refalrts::reinit_close_bracket(context[1]);
      refalrts::link_brackets( context[0], context[1] );
      refalrts::push_stack( vm, context[23] );
      refalrts::push_stack( vm, context[22] );
      refalrts::link_brackets( context[13], context[14] );
      refalrts::link_brackets( context[18], context[19] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[23];
      res = refalrts::splice_evar( res, context[9], context[10] );
      res = refalrts::splice_evar( res, context[22], context[28] );
      res = refalrts::splice_evar( res, context[14], context[14] );
      res = refalrts::splice_evar( res, context[19], context[19] );
      res = refalrts::splice_evar( res, context[24], context[25] );
      res = refalrts::splice_evar( res, context[13], context[20] );
      res = refalrts::splice_evar( res, context[7], context[8] );
      refalrts::splice_to_freelist_open( vm, context[0], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    refalrts::splice_to_freelist(vm, context[22], context[23]);
    continue;
  } while ( refalrts::open_evar_advance( context[7], context[8], context[2], context[3] ) );
  return refalrts::cRecognitionImpossible;
}

static refalrts::NativeReference nat_ref_T3("T3", 1097634219U, 507462218U, func_T3);


static refalrts::FnResult func_T4(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 36 elems
  refalrts::Iter context[36];
  refalrts::zeros( context, 36 );
  // </0 & T4/4 t.UsedVars#1/5 e.Items#1/7 (/13 # HOLE/15 (/18 # TkVariable/20 'e'/21 e.Index#1/16 )/19 e.Pattern#1/11 )/14 e.ItemsAndHoles#1/9 >/1
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
  refalrts::start_e_loop(vm);
  do {
    context[9] = context[2];
    context[10] = context[3];
    context[11] = 0;
    context[12] = 0;
    context[13] = refalrts::brackets_left( context[11], context[12], context[9], context[10] );
    if( ! context[13] )
      continue;
    refalrts::bracket_pointers(context[13], context[14]);
    context[15] = refalrts::ident_left( identifiers[ident_HOLE], context[11], context[12] );
    if( ! context[15] )
      continue;
    context[16] = 0;
    context[17] = 0;
    context[18] = refalrts::brackets_left( context[16], context[17], context[11], context[12] );
    if( ! context[18] )
      continue;
    refalrts::bracket_pointers(context[18], context[19]);
    context[20] = refalrts::ident_left( identifiers[ident_TkVariable], context[16], context[17] );
    if( ! context[20] )
      continue;
    context[21] = refalrts::char_left( 'e', context[16], context[17] );
    if( ! context[21] )
      continue;
    // closed e.Index#1 as range 16
    // closed e.Pattern#1 as range 11
    // closed e.ItemsAndHoles#1 as range 9
    //DEBUG: t.UsedVars#1: 5
    //DEBUG: e.Items#1: 7
    //DEBUG: e.Index#1: 16
    //DEBUG: e.Pattern#1: 11
    //DEBUG: e.ItemsAndHoles#1: 9
    //5: t.UsedVars#1
    //7: e.Items#1
    //9: e.ItemsAndHoles#1
    //11: e.Pattern#1
    //16: e.Index#1
    //27: t.UsedVars#1
    //29: e.Index#1

    refalrts::reset_allocator(vm);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::alloc_open_call(vm, context[22]);
    refalrts::alloc_name(vm, context[24], functions[efunc_gen_T4_C1]);
    refalrts::alloc_open_call(vm, context[25]);
    refalrts::alloc_name(vm, context[26], functions[efunc_NewVarName]);
    refalrts::copy_stvar(vm, context[27], context[5]);
    refalrts::alloc_char(vm, context[28], 'e');
    refalrts::copy_evar(vm, context[29], context[30], context[16], context[17]);
    refalrts::alloc_open_bracket(vm, context[31]);
    refalrts::alloc_chars(vm, context[32], context[33], "_fix", 4);
    refalrts::alloc_close_bracket(vm, context[34]);
    refalrts::alloc_close_call(vm, context[35]);
    refalrts::alloc_close_call(vm, context[23]);
    refalrts::push_stack( vm, context[23] );
    refalrts::push_stack( vm, context[22] );
    res = refalrts::splice_elem( res, context[23] );
    refalrts::push_stack( vm, context[35] );
    refalrts::push_stack( vm, context[25] );
    res = refalrts::splice_elem( res, context[35] );
    refalrts::link_brackets( context[31], context[34] );
    res = refalrts::splice_elem( res, context[34] );
    res = refalrts::splice_evar( res, context[32], context[33] );
    res = refalrts::splice_elem( res, context[31] );
    res = refalrts::splice_evar( res, context[29], context[30] );
    res = refalrts::splice_elem( res, context[28] );
    res = refalrts::splice_stvar( res, context[27] );
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
      // </22 & T4?1/26 t.UsedVars1#2/27 e.eX_fix#2/24 >/23
      context[24] = 0;
      context[25] = 0;
      context[26] = refalrts::call_left( context[24], context[25], context[22], context[23] );
      context[28] = refalrts::tvar_left( context[27], context[24], context[25] );
      if( ! context[28] )
        continue;
      // closed e.eX_fix#2 as range 24
      //DEBUG: t.UsedVars#1: 5
      //DEBUG: e.Items#1: 7
      //DEBUG: e.Index#1: 16
      //DEBUG: e.Pattern#1: 11
      //DEBUG: e.ItemsAndHoles#1: 9
      //DEBUG: t.UsedVars1#2: 27
      //DEBUG: e.eX_fix#2: 24

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} & T4/4 t.UsedVars#1/5 {REMOVED TILE} (/13 # HOLE/15 {REMOVED TILE} 'e'/21 e.Index#1/16 {REMOVED TILE} e.Pattern#1/11 )/14 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.Items#1/7 } Tile{ AsIs: (/18 AsIs: # TkVariable/20 } Tile{ AsIs: e.eX_fix#2/24 } Tile{ AsIs: )/19 } Tile{ AsIs: </22 Reuse: & PassiveHoles/26 AsIs: t.UsedVars1#2/27 } Tile{ AsIs: e.ItemsAndHoles#1/9 } Tile{ AsIs: >/23 HalfReuse: )/1 ]] }
      refalrts::reinit_open_bracket(context[0]);
      refalrts::update_name(context[26], functions[efunc_PassiveHoles]);
      refalrts::reinit_close_bracket(context[1]);
      refalrts::link_brackets( context[0], context[1] );
      refalrts::push_stack( vm, context[23] );
      refalrts::push_stack( vm, context[22] );
      refalrts::link_brackets( context[18], context[19] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[23];
      res = refalrts::splice_evar( res, context[9], context[10] );
      res = refalrts::splice_evar( res, context[22], context[28] );
      res = refalrts::splice_evar( res, context[19], context[19] );
      res = refalrts::splice_evar( res, context[24], context[25] );
      res = refalrts::splice_evar( res, context[18], context[20] );
      res = refalrts::splice_evar( res, context[7], context[8] );
      refalrts::splice_to_freelist_open( vm, context[0], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    refalrts::splice_to_freelist(vm, context[22], context[23]);
    continue;
  } while ( refalrts::open_evar_advance( context[7], context[8], context[2], context[3] ) );
  return refalrts::cRecognitionImpossible;
}

static refalrts::NativeReference nat_ref_T4("T4", 1097634219U, 507462218U, func_T4);


static refalrts::FnResult func_T5(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 41 elems
  refalrts::Iter context[41];
  refalrts::zeros( context, 41 );
  // </0 & T5/4 t.UsedVars#1/5 e.Items#1/7 (/13 # HOLE/15 (/18 # TkVariable/20 'e'/21 e.Index#1/16 )/19 e.Pattern#1/11 )/14 e.ItemsAndHoles#1/9 >/1
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
  refalrts::start_e_loop(vm);
  do {
    context[9] = context[2];
    context[10] = context[3];
    context[11] = 0;
    context[12] = 0;
    context[13] = refalrts::brackets_left( context[11], context[12], context[9], context[10] );
    if( ! context[13] )
      continue;
    refalrts::bracket_pointers(context[13], context[14]);
    context[15] = refalrts::ident_left( identifiers[ident_HOLE], context[11], context[12] );
    if( ! context[15] )
      continue;
    context[16] = 0;
    context[17] = 0;
    context[18] = refalrts::brackets_left( context[16], context[17], context[11], context[12] );
    if( ! context[18] )
      continue;
    refalrts::bracket_pointers(context[18], context[19]);
    context[20] = refalrts::ident_left( identifiers[ident_TkVariable], context[16], context[17] );
    if( ! context[20] )
      continue;
    context[21] = refalrts::char_left( 'e', context[16], context[17] );
    if( ! context[21] )
      continue;
    // closed e.Index#1 as range 16
    // closed e.Pattern#1 as range 11
    // closed e.ItemsAndHoles#1 as range 9
    //DEBUG: t.UsedVars#1: 5
    //DEBUG: e.Items#1: 7
    //DEBUG: e.Index#1: 16
    //DEBUG: e.Pattern#1: 11
    //DEBUG: e.ItemsAndHoles#1: 9
    //5: t.UsedVars#1
    //7: e.Items#1
    //9: e.ItemsAndHoles#1
    //11: e.Pattern#1
    //16: e.Index#1
    //27: t.UsedVars#1
    //28: e.Index#1

    refalrts::reset_allocator(vm);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::alloc_open_call(vm, context[22]);
    refalrts::alloc_name(vm, context[24], functions[efunc_gen_T5_C1]);
    refalrts::alloc_open_call(vm, context[25]);
    refalrts::alloc_name(vm, context[26], functions[efunc_T5m_sub]);
    refalrts::copy_stvar(vm, context[27], context[5]);
    refalrts::copy_evar(vm, context[28], context[29], context[16], context[17]);
    refalrts::alloc_close_call(vm, context[30]);
    refalrts::alloc_close_call(vm, context[23]);
    refalrts::push_stack( vm, context[23] );
    refalrts::push_stack( vm, context[22] );
    res = refalrts::splice_elem( res, context[23] );
    refalrts::push_stack( vm, context[30] );
    refalrts::push_stack( vm, context[25] );
    res = refalrts::splice_elem( res, context[30] );
    res = refalrts::splice_evar( res, context[28], context[29] );
    res = refalrts::splice_stvar( res, context[27] );
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
      // </22 & T5?1/26 (/29 t.SourceVar#2/31 t.eX_fix#2/33 t.eX_var#2/35 )/30 >/23
      context[24] = 0;
      context[25] = 0;
      context[26] = refalrts::call_left( context[24], context[25], context[22], context[23] );
      context[27] = 0;
      context[28] = 0;
      context[29] = refalrts::brackets_left( context[27], context[28], context[24], context[25] );
      if( ! context[29] )
        continue;
      refalrts::bracket_pointers(context[29], context[30]);
      if( ! refalrts::empty_seq( context[24], context[25] ) )
        continue;
      context[32] = refalrts::tvar_left( context[31], context[27], context[28] );
      if( ! context[32] )
        continue;
      context[34] = refalrts::tvar_left( context[33], context[27], context[28] );
      if( ! context[34] )
        continue;
      context[36] = refalrts::tvar_left( context[35], context[27], context[28] );
      if( ! context[36] )
        continue;
      if( ! refalrts::empty_seq( context[27], context[28] ) )
        continue;
      //DEBUG: t.UsedVars#1: 5
      //DEBUG: e.Items#1: 7
      //DEBUG: e.Index#1: 16
      //DEBUG: e.Pattern#1: 11
      //DEBUG: e.ItemsAndHoles#1: 9
      //DEBUG: t.SourceVar#2: 31
      //DEBUG: t.eX_fix#2: 33
      //DEBUG: t.eX_var#2: 35

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} t.UsedVars#1/5 {REMOVED TILE} (/13 {REMOVED TILE} {REMOVED TILE} 'e'/21 e.Index#1/16 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.Items#1/7 } Tile{ AsIs: (/18 Reuse: # Brackets/20 } t.eX_fix#2/33/37 Tile{ HalfReuse: )/15 } t.eX_var#2/35/39 Tile{ AsIs: </22 } Tile{ HalfReuse: & Substitute/19 AsIs: e.Pattern#1/11 HalfReuse: </14 } Tile{ Reuse: & T5-UnHole/4 } Tile{ AsIs: e.ItemsAndHoles#1/9 } Tile{ HalfReuse: >/26 AsIs: (/29 AsIs: t.SourceVar#2/31 AsIs: t.eX_fix#2/33 AsIs: t.eX_var#2/35 AsIs: )/30 AsIs: >/23 HalfReuse: )/1 ]] }
      refalrts::copy_evar(vm, context[37], context[38], context[33], context[34]);
      refalrts::copy_evar(vm, context[39], context[40], context[35], context[36]);
      refalrts::reinit_open_bracket(context[0]);
      refalrts::update_ident(context[20], identifiers[ident_Brackets]);
      refalrts::reinit_close_bracket(context[15]);
      refalrts::reinit_name(context[19], functions[efunc_Substitute]);
      refalrts::reinit_open_call(context[14]);
      refalrts::update_name(context[4], functions[efunc_T5m_UnHole]);
      refalrts::reinit_close_call(context[26]);
      refalrts::reinit_close_bracket(context[1]);
      refalrts::link_brackets( context[0], context[1] );
      refalrts::push_stack( vm, context[23] );
      refalrts::push_stack( vm, context[22] );
      refalrts::link_brackets( context[29], context[30] );
      refalrts::push_stack( vm, context[26] );
      refalrts::push_stack( vm, context[14] );
      refalrts::link_brackets( context[18], context[15] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[26];
      res = refalrts::splice_evar( res, context[9], context[10] );
      res = refalrts::splice_evar( res, context[4], context[4] );
      res = refalrts::splice_evar( res, context[19], context[14] );
      res = refalrts::splice_evar( res, context[22], context[22] );
      res = refalrts::splice_evar( res, context[39], context[40] );
      res = refalrts::splice_evar( res, context[15], context[15] );
      res = refalrts::splice_evar( res, context[37], context[38] );
      res = refalrts::splice_evar( res, context[18], context[20] );
      res = refalrts::splice_evar( res, context[7], context[8] );
      refalrts::splice_to_freelist_open( vm, context[0], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    refalrts::splice_to_freelist(vm, context[22], context[23]);
    continue;
  } while ( refalrts::open_evar_advance( context[7], context[8], context[2], context[3] ) );
  return refalrts::cRecognitionImpossible;
}

static refalrts::NativeReference nat_ref_T5("T5", 1097634219U, 507462218U, func_T5);


static refalrts::FnResult func_T5m_UnHole(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
  // </0 & T5-UnHole/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & T5-UnHole/4 e.Items#1/7 (/13 # HOLE/15 e.Pattern#1/11 )/14 e.ItemsAndHoles#1/9 >/1
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
      context[15] = refalrts::ident_left( identifiers[ident_HOLE], context[11], context[12] );
      if( ! context[15] )
        continue;
      // closed e.Pattern#1 as range 11
      // closed e.ItemsAndHoles#1 as range 9
      //DEBUG: e.Items#1: 7
      //DEBUG: e.Pattern#1: 11
      //DEBUG: e.ItemsAndHoles#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} & T5-UnHole/4 {REMOVED TILE} (/13 # HOLE/15 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: e.Items#1/7 } Tile{ AsIs: e.Pattern#1/11 } Tile{ AsIs: </0 } Tile{ HalfReuse: & T5-UnHole/14 AsIs: e.ItemsAndHoles#1/9 AsIs: >/1 ]] }
      refalrts::reinit_name(context[14], functions[efunc_T5m_UnHole]);
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

  // </0 & T5-UnHole/4 e.Items#1/2 >/1
  // closed e.Items#1 as range 2
  //DEBUG: e.Items#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & T5-UnHole/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Items#1/2 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_T5m_UnHole("T5-UnHole", 1097634219U, 507462218U, func_T5m_UnHole);


static refalrts::FnResult func_T5m_sub(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 28 elems
  refalrts::Iter context[28];
  refalrts::zeros( context, 28 );
  // </0 & T5-sub/4 t.UsedVars#1/5 e.Index#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  // closed e.Index#1 as range 2
  //DEBUG: t.UsedVars#1: 5
  //DEBUG: e.Index#1: 2
  //2: e.Index#1
  //5: t.UsedVars#1
  //12: t.UsedVars#1
  //14: e.Index#1

  refalrts::reset_allocator(vm);
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::alloc_open_call(vm, context[7]);
  refalrts::alloc_name(vm, context[9], functions[efunc_gen_T5m_sub_C1]);
  refalrts::alloc_open_call(vm, context[10]);
  refalrts::alloc_name(vm, context[11], functions[efunc_NewVarName]);
  refalrts::copy_stvar(vm, context[12], context[5]);
  refalrts::alloc_char(vm, context[13], 'e');
  refalrts::copy_evar(vm, context[14], context[15], context[2], context[3]);
  refalrts::alloc_open_bracket(vm, context[16]);
  refalrts::alloc_chars(vm, context[17], context[18], "_fix", 4);
  refalrts::alloc_close_bracket(vm, context[19]);
  refalrts::alloc_close_call(vm, context[20]);
  refalrts::alloc_close_call(vm, context[8]);
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[7] );
  res = refalrts::splice_elem( res, context[8] );
  refalrts::push_stack( vm, context[20] );
  refalrts::push_stack( vm, context[10] );
  res = refalrts::splice_elem( res, context[20] );
  refalrts::link_brackets( context[16], context[19] );
  res = refalrts::splice_elem( res, context[19] );
  res = refalrts::splice_evar( res, context[17], context[18] );
  res = refalrts::splice_elem( res, context[16] );
  res = refalrts::splice_evar( res, context[14], context[15] );
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
    // </7 & T5-sub?1/11 t.UsedVars1#2/12 e.eX_fix#2/9 >/8
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::call_left( context[9], context[10], context[7], context[8] );
    context[13] = refalrts::tvar_left( context[12], context[9], context[10] );
    if( ! context[13] )
      continue;
    // closed e.eX_fix#2 as range 9
    //DEBUG: t.UsedVars#1: 5
    //DEBUG: e.Index#1: 2
    //DEBUG: t.UsedVars1#2: 12
    //DEBUG: e.eX_fix#2: 9
    //2: e.Index#1
    //5: t.UsedVars#1
    //9: e.eX_fix#2
    //12: t.UsedVars1#2
    //19: t.UsedVars#1
    //21: e.Index#1

    refalrts::reset_allocator(vm);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::alloc_open_call(vm, context[14]);
    refalrts::alloc_name(vm, context[16], functions[efunc_gen_T5m_sub_C2]);
    refalrts::alloc_open_call(vm, context[17]);
    refalrts::alloc_name(vm, context[18], functions[efunc_NewVarName]);
    refalrts::copy_stvar(vm, context[19], context[5]);
    refalrts::alloc_char(vm, context[20], 'e');
    refalrts::copy_evar(vm, context[21], context[22], context[2], context[3]);
    refalrts::alloc_open_bracket(vm, context[23]);
    refalrts::alloc_chars(vm, context[24], context[25], "_var", 4);
    refalrts::alloc_close_bracket(vm, context[26]);
    refalrts::alloc_close_call(vm, context[27]);
    refalrts::alloc_close_call(vm, context[15]);
    refalrts::push_stack( vm, context[15] );
    refalrts::push_stack( vm, context[14] );
    res = refalrts::splice_elem( res, context[15] );
    refalrts::push_stack( vm, context[27] );
    refalrts::push_stack( vm, context[17] );
    res = refalrts::splice_elem( res, context[27] );
    refalrts::link_brackets( context[23], context[26] );
    res = refalrts::splice_elem( res, context[26] );
    res = refalrts::splice_evar( res, context[24], context[25] );
    res = refalrts::splice_elem( res, context[23] );
    res = refalrts::splice_evar( res, context[21], context[22] );
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
      // </14 & T5-sub?2/18 t.UsedVars2#3/19 e.eX_var#3/16 >/15
      context[16] = 0;
      context[17] = 0;
      context[18] = refalrts::call_left( context[16], context[17], context[14], context[15] );
      context[20] = refalrts::tvar_left( context[19], context[16], context[17] );
      if( ! context[20] )
        continue;
      // closed e.eX_var#3 as range 16
      //DEBUG: t.UsedVars#1: 5
      //DEBUG: e.Index#1: 2
      //DEBUG: t.UsedVars1#2: 12
      //DEBUG: e.eX_fix#2: 9
      //DEBUG: t.UsedVars2#3: 19
      //DEBUG: e.eX_var#3: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} t.UsedVars#1/5 {REMOVED TILE} {REMOVED TILE} t.UsedVars1#2/12 {REMOVED TILE} {REMOVED TILE} t.UsedVars2#3/19 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: (/4 } Tile{ HalfReuse: # TkVariable/7 HalfReuse: 'e'/11 } Tile{ AsIs: e.Index#1/2 } Tile{ HalfReuse: )/8 HalfReuse: (/14 HalfReuse: # TkVariable/18 } Tile{ AsIs: e.eX_fix#2/9 } )/21 (/22 # TkVariable/23 Tile{ AsIs: e.eX_var#3/16 } Tile{ HalfReuse: )/15 HalfReuse: )/1 ]] }
      refalrts::alloc_close_bracket(vm, context[21]);
      refalrts::alloc_open_bracket(vm, context[22]);
      refalrts::alloc_ident(vm, context[23], identifiers[ident_TkVariable]);
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_open_bracket(context[4]);
      refalrts::reinit_ident(context[7], identifiers[ident_TkVariable]);
      refalrts::reinit_char(context[11], 'e');
      refalrts::reinit_close_bracket(context[8]);
      refalrts::reinit_open_bracket(context[14]);
      refalrts::reinit_ident(context[18], identifiers[ident_TkVariable]);
      refalrts::reinit_close_bracket(context[15]);
      refalrts::reinit_close_bracket(context[1]);
      refalrts::link_brackets( context[0], context[1] );
      refalrts::link_brackets( context[22], context[15] );
      refalrts::link_brackets( context[14], context[21] );
      refalrts::link_brackets( context[4], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[15];
      res = refalrts::splice_evar( res, context[16], context[17] );
      res = refalrts::splice_evar( res, context[21], context[23] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      res = refalrts::splice_evar( res, context[8], context[18] );
      res = refalrts::splice_evar( res, context[2], context[3] );
      res = refalrts::splice_evar( res, context[7], context[11] );
      refalrts::splice_to_freelist_open( vm, context[4], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    refalrts::splice_to_freelist(vm, context[14], context[15]);
    continue;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  refalrts::splice_to_freelist(vm, context[7], context[8]);
  return refalrts::cRecognitionImpossible;
}

static refalrts::NativeReference nat_ref_T5m_sub("T5-sub", 1097634219U, 507462218U, func_T5m_sub);


static refalrts::FnResult func_Substitute(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 43 elems
  refalrts::Iter context[43];
  refalrts::zeros( context, 43 );
  // </0 & Substitute/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Substitute/4 e.new#1/2 (/7 t.new#2/9 e.new#3/5 )/8 >/1
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
    // </0 & Substitute/4 t.new#6/15 e.new#7/11 (/7 t.new#4/9 e.new#5/13 )/8 >/1
    context[11] = context[2];
    context[12] = context[3];
    context[13] = context[5];
    context[14] = context[6];
    // closed e.new#5 as range 13
    context[16] = refalrts::tvar_left( context[15], context[11], context[12] );
    if( ! context[16] )
      continue;
    // closed e.new#7 as range 11
    do {
      // </0 & Substitute/4 (/15 s.new#10/23 e.new#11/21 )/16 e.new#12/17 (/7 t.new#8/9 e.new#9/19 )/8 >/1
      context[17] = context[11];
      context[18] = context[12];
      context[19] = context[13];
      context[20] = context[14];
      context[21] = 0;
      context[22] = 0;
      if( ! refalrts::brackets_term( context[21], context[22], context[15] ) )
        continue;
      // closed e.new#12 as range 17
      // closed e.new#9 as range 19
      if( ! refalrts::svar_left( context[23], context[21], context[22] ) )
        continue;
      // closed e.new#11 as range 21
      do {
        // </0 & Substitute/4 (/15 # TkVariable/23 s.Type#1/33 e.Index#1/24 )/16 e.Tail#1/26 (/7 (/9 # TkVariable/32 s.Type#1/34 e.Index#1/35 )/10 e.Expr#1/28 )/8 >/1
        context[24] = context[21];
        context[25] = context[22];
        context[26] = context[17];
        context[27] = context[18];
        context[28] = context[19];
        context[29] = context[20];
        context[30] = 0;
        context[31] = 0;
        if( ! refalrts::brackets_term( context[30], context[31], context[9] ) )
          continue;
        if( ! refalrts::ident_term( identifiers[ident_TkVariable], context[23] ) )
          continue;
        context[32] = refalrts::ident_left( identifiers[ident_TkVariable], context[30], context[31] );
        if( ! context[32] )
          continue;
        // closed e.Tail#1 as range 26
        // closed e.Expr#1 as range 28
        if( ! refalrts::svar_left( context[33], context[24], context[25] ) )
          continue;
        if( ! refalrts::repeated_stvar_left( vm, context[34], context[33], context[30], context[31] ) )
          continue;
        // closed e.Index#1 as range 24
        if( ! refalrts::repeated_evar_left( vm, context[35], context[36], context[24], context[25], context[30], context[31] ) )
          continue;
        if( ! refalrts::empty_seq( context[30], context[31] ) )
          continue;
        //DEBUG: e.Tail#1: 26
        //DEBUG: e.Expr#1: 28
        //DEBUG: s.Type#1: 33
        //DEBUG: e.Index#1: 24

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} & Substitute/4 (/15 # TkVariable/23 s.Type#1/33 e.Index#1/24 {REMOVED TILE}
        //RESULT: Tile{ [[ } e.Expr#1/28/37 Tile{ AsIs: </0 } Tile{ HalfReuse: & Substitute/16 AsIs: e.Tail#1/26 AsIs: (/7 AsIs: (/9 AsIs: # TkVariable/32 AsIs: s.Type#1/34 AsIs: e.Index#1/35 AsIs: )/10 AsIs: e.Expr#1/28 AsIs: )/8 AsIs: >/1 ]] }
        refalrts::copy_evar(vm, context[37], context[38], context[28], context[29]);
        refalrts::reinit_name(context[16], functions[efunc_Substitute]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[7], context[8] );
        refalrts::link_brackets( context[9], context[10] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[16];
        res = refalrts::splice_evar( res, context[0], context[0] );
        res = refalrts::splice_evar( res, context[37], context[38] );
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & Substitute/4 (/15 # Brackets/23 e.InBrackets#1/24 )/16 e.Tail#1/26 (/7 t.Variable#1/9 e.Expr#1/28 )/8 >/1
        context[24] = context[21];
        context[25] = context[22];
        context[26] = context[17];
        context[27] = context[18];
        context[28] = context[19];
        context[29] = context[20];
        if( ! refalrts::ident_term( identifiers[ident_Brackets], context[23] ) )
          continue;
        // closed e.InBrackets#1 as range 24
        // closed e.Tail#1 as range 26
        // closed e.Expr#1 as range 28
        //DEBUG: t.Variable#1: 9
        //DEBUG: e.InBrackets#1: 24
        //DEBUG: e.Tail#1: 26
        //DEBUG: e.Expr#1: 28

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # Brackets/4 HalfReuse: </15 HalfReuse: & Substitute/23 } Tile{ AsIs: e.InBrackets#1/24 } (/30 t.Variable#1/9/31 e.Expr#1/28/33 )/35 >/36 )/37 </38 Tile{ HalfReuse: & Substitute/16 AsIs: e.Tail#1/26 AsIs: (/7 AsIs: t.Variable#1/9 AsIs: e.Expr#1/28 AsIs: )/8 AsIs: >/1 ]] }
        refalrts::alloc_open_bracket(vm, context[30]);
        refalrts::copy_evar(vm, context[31], context[32], context[9], context[10]);
        refalrts::copy_evar(vm, context[33], context[34], context[28], context[29]);
        refalrts::alloc_close_bracket(vm, context[35]);
        refalrts::alloc_close_call(vm, context[36]);
        refalrts::alloc_close_bracket(vm, context[37]);
        refalrts::alloc_open_call(vm, context[38]);
        refalrts::reinit_open_bracket(context[0]);
        refalrts::reinit_ident(context[4], identifiers[ident_Brackets]);
        refalrts::reinit_open_call(context[15]);
        refalrts::reinit_name(context[23], functions[efunc_Substitute]);
        refalrts::reinit_name(context[16], functions[efunc_Substitute]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[38] );
        refalrts::link_brackets( context[7], context[8] );
        refalrts::link_brackets( context[0], context[37] );
        refalrts::push_stack( vm, context[36] );
        refalrts::push_stack( vm, context[15] );
        refalrts::link_brackets( context[30], context[35] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[16];
        res = refalrts::splice_evar( res, context[30], context[38] );
        res = refalrts::splice_evar( res, context[24], context[25] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & Substitute/4 (/15 # ADT-Brackets/23 (/32 e.Name#1/30 )/33 e.InBrackets#1/24 )/16 e.Tail#1/26 (/7 t.Variable#1/9 e.Expr#1/28 )/8 >/1
        context[24] = context[21];
        context[25] = context[22];
        context[26] = context[17];
        context[27] = context[18];
        context[28] = context[19];
        context[29] = context[20];
        if( ! refalrts::ident_term( identifiers[ident_ADTm_Brackets], context[23] ) )
          continue;
        context[30] = 0;
        context[31] = 0;
        context[32] = refalrts::brackets_left( context[30], context[31], context[24], context[25] );
        if( ! context[32] )
          continue;
        refalrts::bracket_pointers(context[32], context[33]);
        // closed e.Name#1 as range 30
        // closed e.InBrackets#1 as range 24
        // closed e.Tail#1 as range 26
        // closed e.Expr#1 as range 28
        //DEBUG: t.Variable#1: 9
        //DEBUG: e.Name#1: 30
        //DEBUG: e.InBrackets#1: 24
        //DEBUG: e.Tail#1: 26
        //DEBUG: e.Expr#1: 28

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ AsIs: (/15 AsIs: # ADT-Brackets/23 AsIs: (/32 AsIs: e.Name#1/30 AsIs: )/33 } Tile{ AsIs: </0 AsIs: & Substitute/4 } Tile{ AsIs: e.InBrackets#1/24 } (/34 t.Variable#1/9/35 e.Expr#1/28/37 )/39 >/40 )/41 </42 Tile{ HalfReuse: & Substitute/16 AsIs: e.Tail#1/26 AsIs: (/7 AsIs: t.Variable#1/9 AsIs: e.Expr#1/28 AsIs: )/8 AsIs: >/1 ]] }
        refalrts::alloc_open_bracket(vm, context[34]);
        refalrts::copy_evar(vm, context[35], context[36], context[9], context[10]);
        refalrts::copy_evar(vm, context[37], context[38], context[28], context[29]);
        refalrts::alloc_close_bracket(vm, context[39]);
        refalrts::alloc_close_call(vm, context[40]);
        refalrts::alloc_close_bracket(vm, context[41]);
        refalrts::alloc_open_call(vm, context[42]);
        refalrts::reinit_name(context[16], functions[efunc_Substitute]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[42] );
        refalrts::link_brackets( context[7], context[8] );
        refalrts::link_brackets( context[15], context[41] );
        refalrts::push_stack( vm, context[40] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[34], context[39] );
        refalrts::link_brackets( context[32], context[33] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[16];
        res = refalrts::splice_evar( res, context[34], context[42] );
        res = refalrts::splice_evar( res, context[24], context[25] );
        res = refalrts::splice_evar( res, context[0], context[4] );
        res = refalrts::splice_evar( res, context[15], context[33] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & Substitute/4 (/15 # CallBrackets/23 e.InBrackets#1/24 )/16 e.Tail#1/26 (/7 t.Variable#1/9 e.Expr#1/28 )/8 >/1
        context[24] = context[21];
        context[25] = context[22];
        context[26] = context[17];
        context[27] = context[18];
        context[28] = context[19];
        context[29] = context[20];
        if( ! refalrts::ident_term( identifiers[ident_CallBrackets], context[23] ) )
          continue;
        // closed e.InBrackets#1 as range 24
        // closed e.Tail#1 as range 26
        // closed e.Expr#1 as range 28
        //DEBUG: t.Variable#1: 9
        //DEBUG: e.InBrackets#1: 24
        //DEBUG: e.Tail#1: 26
        //DEBUG: e.Expr#1: 28

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # CallBrackets/4 HalfReuse: </15 HalfReuse: & Substitute/23 } Tile{ AsIs: e.InBrackets#1/24 } (/30 t.Variable#1/9/31 e.Expr#1/28/33 )/35 >/36 )/37 </38 Tile{ HalfReuse: & Substitute/16 AsIs: e.Tail#1/26 AsIs: (/7 AsIs: t.Variable#1/9 AsIs: e.Expr#1/28 AsIs: )/8 AsIs: >/1 ]] }
        refalrts::alloc_open_bracket(vm, context[30]);
        refalrts::copy_evar(vm, context[31], context[32], context[9], context[10]);
        refalrts::copy_evar(vm, context[33], context[34], context[28], context[29]);
        refalrts::alloc_close_bracket(vm, context[35]);
        refalrts::alloc_close_call(vm, context[36]);
        refalrts::alloc_close_bracket(vm, context[37]);
        refalrts::alloc_open_call(vm, context[38]);
        refalrts::reinit_open_bracket(context[0]);
        refalrts::reinit_ident(context[4], identifiers[ident_CallBrackets]);
        refalrts::reinit_open_call(context[15]);
        refalrts::reinit_name(context[23], functions[efunc_Substitute]);
        refalrts::reinit_name(context[16], functions[efunc_Substitute]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[38] );
        refalrts::link_brackets( context[7], context[8] );
        refalrts::link_brackets( context[0], context[37] );
        refalrts::push_stack( vm, context[36] );
        refalrts::push_stack( vm, context[15] );
        refalrts::link_brackets( context[30], context[35] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[16];
        res = refalrts::splice_evar( res, context[30], context[38] );
        res = refalrts::splice_evar( res, context[24], context[25] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & Substitute/4 (/15 # ClosureBrackets/23 e.InBrackets#1/24 )/16 e.Tail#1/26 (/7 t.Variable#1/9 e.Expr#1/28 )/8 >/1
      context[24] = context[21];
      context[25] = context[22];
      context[26] = context[17];
      context[27] = context[18];
      context[28] = context[19];
      context[29] = context[20];
      if( ! refalrts::ident_term( identifiers[ident_ClosureBrackets], context[23] ) )
        continue;
      // closed e.InBrackets#1 as range 24
      // closed e.Tail#1 as range 26
      // closed e.Expr#1 as range 28
      //DEBUG: t.Variable#1: 9
      //DEBUG: e.InBrackets#1: 24
      //DEBUG: e.Tail#1: 26
      //DEBUG: e.Expr#1: 28

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # ClosureBrackets/4 HalfReuse: </15 HalfReuse: & Substitute/23 } Tile{ AsIs: e.InBrackets#1/24 } (/30 t.Variable#1/9/31 e.Expr#1/28/33 )/35 >/36 )/37 </38 Tile{ HalfReuse: & Substitute/16 AsIs: e.Tail#1/26 AsIs: (/7 AsIs: t.Variable#1/9 AsIs: e.Expr#1/28 AsIs: )/8 AsIs: >/1 ]] }
      refalrts::alloc_open_bracket(vm, context[30]);
      refalrts::copy_evar(vm, context[31], context[32], context[9], context[10]);
      refalrts::copy_evar(vm, context[33], context[34], context[28], context[29]);
      refalrts::alloc_close_bracket(vm, context[35]);
      refalrts::alloc_close_call(vm, context[36]);
      refalrts::alloc_close_bracket(vm, context[37]);
      refalrts::alloc_open_call(vm, context[38]);
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_ident(context[4], identifiers[ident_ClosureBrackets]);
      refalrts::reinit_open_call(context[15]);
      refalrts::reinit_name(context[23], functions[efunc_Substitute]);
      refalrts::reinit_name(context[16], functions[efunc_Substitute]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[38] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::link_brackets( context[0], context[37] );
      refalrts::push_stack( vm, context[36] );
      refalrts::push_stack( vm, context[15] );
      refalrts::link_brackets( context[30], context[35] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[16];
      res = refalrts::splice_evar( res, context[30], context[38] );
      res = refalrts::splice_evar( res, context[24], context[25] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Substitute/4 t.OtherItem#1/15 e.Tail#1/17 (/7 t.Variable#1/9 e.Expr#1/19 )/8 >/1
    context[17] = context[11];
    context[18] = context[12];
    context[19] = context[13];
    context[20] = context[14];
    // closed e.Tail#1 as range 17
    // closed e.Expr#1 as range 19
    //DEBUG: t.OtherItem#1: 15
    //DEBUG: t.Variable#1: 9
    //DEBUG: e.Tail#1: 17
    //DEBUG: e.Expr#1: 19

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: t.OtherItem#1/15 } Tile{ AsIs: </0 AsIs: & Substitute/4 } Tile{ AsIs: e.Tail#1/17 } Tile{ AsIs: (/7 AsIs: t.Variable#1/9 AsIs: e.Expr#1/19 AsIs: )/8 AsIs: >/1 ]] }
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[7];
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Substitute/4 (/7 t.Variable#1/9 e.Expr#1/5 )/8 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Expr#1 as range 5
  //DEBUG: t.Variable#1: 9
  //DEBUG: e.Expr#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Substitute/4 (/7 t.Variable#1/9 e.Expr#1/5 )/8 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Substitute("Substitute", 1097634219U, 507462218U, func_Substitute);


static refalrts::FnResult func_T6(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 43 elems
  refalrts::Iter context[43];
  refalrts::zeros( context, 43 );
  // </0 & T6/4 t.UsedVars#1/5 e.Items#1/7 (/13 # HOLE/15 (/18 # TkVariable/20 'e'/21 e.Index#1/16 )/19 e.Pattern#1/11 )/14 e.ItemsAndHoles#1/9 >/1
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
  refalrts::start_e_loop(vm);
  do {
    context[9] = context[2];
    context[10] = context[3];
    context[11] = 0;
    context[12] = 0;
    context[13] = refalrts::brackets_left( context[11], context[12], context[9], context[10] );
    if( ! context[13] )
      continue;
    refalrts::bracket_pointers(context[13], context[14]);
    context[15] = refalrts::ident_left( identifiers[ident_HOLE], context[11], context[12] );
    if( ! context[15] )
      continue;
    context[16] = 0;
    context[17] = 0;
    context[18] = refalrts::brackets_left( context[16], context[17], context[11], context[12] );
    if( ! context[18] )
      continue;
    refalrts::bracket_pointers(context[18], context[19]);
    context[20] = refalrts::ident_left( identifiers[ident_TkVariable], context[16], context[17] );
    if( ! context[20] )
      continue;
    context[21] = refalrts::char_left( 'e', context[16], context[17] );
    if( ! context[21] )
      continue;
    // closed e.Index#1 as range 16
    // closed e.Pattern#1 as range 11
    // closed e.ItemsAndHoles#1 as range 9
    //DEBUG: t.UsedVars#1: 5
    //DEBUG: e.Items#1: 7
    //DEBUG: e.Index#1: 16
    //DEBUG: e.Pattern#1: 11
    //DEBUG: e.ItemsAndHoles#1: 9
    //5: t.UsedVars#1
    //7: e.Items#1
    //9: e.ItemsAndHoles#1
    //11: e.Pattern#1
    //16: e.Index#1
    //27: t.UsedVars#1
    //29: e.Index#1

    refalrts::reset_allocator(vm);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::alloc_open_call(vm, context[22]);
    refalrts::alloc_name(vm, context[24], functions[efunc_gen_T6_C1]);
    refalrts::alloc_open_call(vm, context[25]);
    refalrts::alloc_name(vm, context[26], functions[efunc_NewVarName]);
    refalrts::copy_stvar(vm, context[27], context[5]);
    refalrts::alloc_char(vm, context[28], 'e');
    refalrts::copy_evar(vm, context[29], context[30], context[16], context[17]);
    refalrts::alloc_open_bracket(vm, context[31]);
    refalrts::alloc_chars(vm, context[32], context[33], "_fix", 4);
    refalrts::alloc_close_bracket(vm, context[34]);
    refalrts::alloc_close_call(vm, context[35]);
    refalrts::alloc_close_call(vm, context[23]);
    refalrts::push_stack( vm, context[23] );
    refalrts::push_stack( vm, context[22] );
    res = refalrts::splice_elem( res, context[23] );
    refalrts::push_stack( vm, context[35] );
    refalrts::push_stack( vm, context[25] );
    res = refalrts::splice_elem( res, context[35] );
    refalrts::link_brackets( context[31], context[34] );
    res = refalrts::splice_elem( res, context[34] );
    res = refalrts::splice_evar( res, context[32], context[33] );
    res = refalrts::splice_elem( res, context[31] );
    res = refalrts::splice_evar( res, context[29], context[30] );
    res = refalrts::splice_elem( res, context[28] );
    res = refalrts::splice_stvar( res, context[27] );
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
      // </22 & T6?1/26 t.UsedVars1#2/27 e.eX_fix#2/24 >/23
      context[24] = 0;
      context[25] = 0;
      context[26] = refalrts::call_left( context[24], context[25], context[22], context[23] );
      context[28] = refalrts::tvar_left( context[27], context[24], context[25] );
      if( ! context[28] )
        continue;
      // closed e.eX_fix#2 as range 24
      //DEBUG: t.UsedVars#1: 5
      //DEBUG: e.Items#1: 7
      //DEBUG: e.Index#1: 16
      //DEBUG: e.Pattern#1: 11
      //DEBUG: e.ItemsAndHoles#1: 9
      //DEBUG: t.UsedVars1#2: 27
      //DEBUG: e.eX_fix#2: 24
      //5: t.UsedVars#1
      //7: e.Items#1
      //9: e.ItemsAndHoles#1
      //11: e.Pattern#1
      //16: e.Index#1
      //24: e.eX_fix#2
      //27: t.UsedVars1#2
      //34: t.UsedVars1#2
      //36: e.Index#1

      refalrts::reset_allocator(vm);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::alloc_open_call(vm, context[29]);
      refalrts::alloc_name(vm, context[31], functions[efunc_gen_T6_C2]);
      refalrts::alloc_open_call(vm, context[32]);
      refalrts::alloc_name(vm, context[33], functions[efunc_NewVarName]);
      refalrts::copy_stvar(vm, context[34], context[27]);
      refalrts::alloc_char(vm, context[35], 'e');
      refalrts::copy_evar(vm, context[36], context[37], context[16], context[17]);
      refalrts::alloc_open_bracket(vm, context[38]);
      refalrts::alloc_chars(vm, context[39], context[40], "_rest", 5);
      refalrts::alloc_close_bracket(vm, context[41]);
      refalrts::alloc_close_call(vm, context[42]);
      refalrts::alloc_close_call(vm, context[30]);
      refalrts::push_stack( vm, context[30] );
      refalrts::push_stack( vm, context[29] );
      res = refalrts::splice_elem( res, context[30] );
      refalrts::push_stack( vm, context[42] );
      refalrts::push_stack( vm, context[32] );
      res = refalrts::splice_elem( res, context[42] );
      refalrts::link_brackets( context[38], context[41] );
      res = refalrts::splice_elem( res, context[41] );
      res = refalrts::splice_evar( res, context[39], context[40] );
      res = refalrts::splice_elem( res, context[38] );
      res = refalrts::splice_evar( res, context[36], context[37] );
      res = refalrts::splice_elem( res, context[35] );
      res = refalrts::splice_stvar( res, context[34] );
      res = refalrts::splice_elem( res, context[33] );
      res = refalrts::splice_elem( res, context[32] );
      res = refalrts::splice_elem( res, context[31] );
      res = refalrts::splice_elem( res, context[29] );
      refalrts::use( res );
      refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
      if (rec_res != refalrts::cSuccess)
        return rec_res;
      refalrts::this_is_generated_function(vm);
      do {
        // </29 & T6?2/33 t.UsedVars2#3/34 e.eX_rest#3/31 >/30
        context[31] = 0;
        context[32] = 0;
        context[33] = refalrts::call_left( context[31], context[32], context[29], context[30] );
        context[35] = refalrts::tvar_left( context[34], context[31], context[32] );
        if( ! context[35] )
          continue;
        // closed e.eX_rest#3 as range 31
        //DEBUG: t.UsedVars#1: 5
        //DEBUG: e.Items#1: 7
        //DEBUG: e.Index#1: 16
        //DEBUG: e.Pattern#1: 11
        //DEBUG: e.ItemsAndHoles#1: 9
        //DEBUG: t.UsedVars1#2: 27
        //DEBUG: e.eX_fix#2: 24
        //DEBUG: t.UsedVars2#3: 34
        //DEBUG: e.eX_rest#3: 31

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} & T6/4 t.UsedVars#1/5 {REMOVED TILE} {REMOVED TILE} 'e'/21 e.Index#1/16 {REMOVED TILE} e.Pattern#1/11 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} t.UsedVars1#2/27 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.Items#1/7 } Tile{ AsIs: (/13 Reuse: # Brackets/15 AsIs: (/18 AsIs: # TkVariable/20 } Tile{ AsIs: e.eX_fix#2/24 } Tile{ AsIs: )/14 } Tile{ AsIs: )/19 } Tile{ HalfReuse: (/22 HalfReuse: # TkVariable/26 } Tile{ AsIs: e.eX_rest#3/31 } Tile{ HalfReuse: )/23 AsIs: </29 Reuse: & PassiveHoles/33 AsIs: t.UsedVars2#3/34 } Tile{ AsIs: e.ItemsAndHoles#1/9 } Tile{ AsIs: >/30 HalfReuse: )/1 ]] }
        refalrts::reinit_open_bracket(context[0]);
        refalrts::update_ident(context[15], identifiers[ident_Brackets]);
        refalrts::reinit_open_bracket(context[22]);
        refalrts::reinit_ident(context[26], identifiers[ident_TkVariable]);
        refalrts::reinit_close_bracket(context[23]);
        refalrts::update_name(context[33], functions[efunc_PassiveHoles]);
        refalrts::reinit_close_bracket(context[1]);
        refalrts::link_brackets( context[0], context[1] );
        refalrts::push_stack( vm, context[30] );
        refalrts::push_stack( vm, context[29] );
        refalrts::link_brackets( context[22], context[23] );
        refalrts::link_brackets( context[13], context[19] );
        refalrts::link_brackets( context[18], context[14] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[30];
        res = refalrts::splice_evar( res, context[9], context[10] );
        res = refalrts::splice_evar( res, context[23], context[35] );
        res = refalrts::splice_evar( res, context[31], context[32] );
        res = refalrts::splice_evar( res, context[22], context[26] );
        res = refalrts::splice_evar( res, context[19], context[19] );
        res = refalrts::splice_evar( res, context[14], context[14] );
        res = refalrts::splice_evar( res, context[24], context[25] );
        res = refalrts::splice_evar( res, context[13], context[20] );
        res = refalrts::splice_evar( res, context[7], context[8] );
        refalrts::splice_to_freelist_open( vm, context[0], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      refalrts::splice_to_freelist(vm, context[29], context[30]);
      continue;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    refalrts::splice_to_freelist(vm, context[22], context[23]);
    continue;
  } while ( refalrts::open_evar_advance( context[7], context[8], context[2], context[3] ) );
  return refalrts::cRecognitionImpossible;
}

static refalrts::NativeReference nat_ref_T6("T6", 1097634219U, 507462218U, func_T6);


static refalrts::FnResult func_T7(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 43 elems
  refalrts::Iter context[43];
  refalrts::zeros( context, 43 );
  // </0 & T7/4 t.UsedVars#1/5 e.Items#1/7 (/13 # HOLE/15 (/18 # TkVariable/20 'e'/21 e.Index#1/16 )/19 e.Pattern#1/11 )/14 e.ItemsAndHoles#1/9 >/1
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
  refalrts::start_e_loop(vm);
  do {
    context[9] = context[2];
    context[10] = context[3];
    context[11] = 0;
    context[12] = 0;
    context[13] = refalrts::brackets_left( context[11], context[12], context[9], context[10] );
    if( ! context[13] )
      continue;
    refalrts::bracket_pointers(context[13], context[14]);
    context[15] = refalrts::ident_left( identifiers[ident_HOLE], context[11], context[12] );
    if( ! context[15] )
      continue;
    context[16] = 0;
    context[17] = 0;
    context[18] = refalrts::brackets_left( context[16], context[17], context[11], context[12] );
    if( ! context[18] )
      continue;
    refalrts::bracket_pointers(context[18], context[19]);
    context[20] = refalrts::ident_left( identifiers[ident_TkVariable], context[16], context[17] );
    if( ! context[20] )
      continue;
    context[21] = refalrts::char_left( 'e', context[16], context[17] );
    if( ! context[21] )
      continue;
    // closed e.Index#1 as range 16
    // closed e.Pattern#1 as range 11
    // closed e.ItemsAndHoles#1 as range 9
    //DEBUG: t.UsedVars#1: 5
    //DEBUG: e.Items#1: 7
    //DEBUG: e.Index#1: 16
    //DEBUG: e.Pattern#1: 11
    //DEBUG: e.ItemsAndHoles#1: 9
    //5: t.UsedVars#1
    //7: e.Items#1
    //9: e.ItemsAndHoles#1
    //11: e.Pattern#1
    //16: e.Index#1
    //27: t.UsedVars#1
    //29: e.Index#1

    refalrts::reset_allocator(vm);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::alloc_open_call(vm, context[22]);
    refalrts::alloc_name(vm, context[24], functions[efunc_gen_T7_C1]);
    refalrts::alloc_open_call(vm, context[25]);
    refalrts::alloc_name(vm, context[26], functions[efunc_NewVarName]);
    refalrts::copy_stvar(vm, context[27], context[5]);
    refalrts::alloc_char(vm, context[28], 'e');
    refalrts::copy_evar(vm, context[29], context[30], context[16], context[17]);
    refalrts::alloc_open_bracket(vm, context[31]);
    refalrts::alloc_chars(vm, context[32], context[33], "_fix", 4);
    refalrts::alloc_close_bracket(vm, context[34]);
    refalrts::alloc_close_call(vm, context[35]);
    refalrts::alloc_close_call(vm, context[23]);
    refalrts::push_stack( vm, context[23] );
    refalrts::push_stack( vm, context[22] );
    res = refalrts::splice_elem( res, context[23] );
    refalrts::push_stack( vm, context[35] );
    refalrts::push_stack( vm, context[25] );
    res = refalrts::splice_elem( res, context[35] );
    refalrts::link_brackets( context[31], context[34] );
    res = refalrts::splice_elem( res, context[34] );
    res = refalrts::splice_evar( res, context[32], context[33] );
    res = refalrts::splice_elem( res, context[31] );
    res = refalrts::splice_evar( res, context[29], context[30] );
    res = refalrts::splice_elem( res, context[28] );
    res = refalrts::splice_stvar( res, context[27] );
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
      // </22 & T7?1/26 t.UsedVars1#2/27 e.eX_fix#2/24 >/23
      context[24] = 0;
      context[25] = 0;
      context[26] = refalrts::call_left( context[24], context[25], context[22], context[23] );
      context[28] = refalrts::tvar_left( context[27], context[24], context[25] );
      if( ! context[28] )
        continue;
      // closed e.eX_fix#2 as range 24
      //DEBUG: t.UsedVars#1: 5
      //DEBUG: e.Items#1: 7
      //DEBUG: e.Index#1: 16
      //DEBUG: e.Pattern#1: 11
      //DEBUG: e.ItemsAndHoles#1: 9
      //DEBUG: t.UsedVars1#2: 27
      //DEBUG: e.eX_fix#2: 24
      //5: t.UsedVars#1
      //7: e.Items#1
      //9: e.ItemsAndHoles#1
      //11: e.Pattern#1
      //16: e.Index#1
      //24: e.eX_fix#2
      //27: t.UsedVars1#2
      //34: t.UsedVars1#2
      //36: e.Index#1

      refalrts::reset_allocator(vm);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::alloc_open_call(vm, context[29]);
      refalrts::alloc_name(vm, context[31], functions[efunc_gen_T7_C2]);
      refalrts::alloc_open_call(vm, context[32]);
      refalrts::alloc_name(vm, context[33], functions[efunc_NewVarName]);
      refalrts::copy_stvar(vm, context[34], context[27]);
      refalrts::alloc_char(vm, context[35], 'e');
      refalrts::copy_evar(vm, context[36], context[37], context[16], context[17]);
      refalrts::alloc_open_bracket(vm, context[38]);
      refalrts::alloc_chars(vm, context[39], context[40], "_rest", 5);
      refalrts::alloc_close_bracket(vm, context[41]);
      refalrts::alloc_close_call(vm, context[42]);
      refalrts::alloc_close_call(vm, context[30]);
      refalrts::push_stack( vm, context[30] );
      refalrts::push_stack( vm, context[29] );
      res = refalrts::splice_elem( res, context[30] );
      refalrts::push_stack( vm, context[42] );
      refalrts::push_stack( vm, context[32] );
      res = refalrts::splice_elem( res, context[42] );
      refalrts::link_brackets( context[38], context[41] );
      res = refalrts::splice_elem( res, context[41] );
      res = refalrts::splice_evar( res, context[39], context[40] );
      res = refalrts::splice_elem( res, context[38] );
      res = refalrts::splice_evar( res, context[36], context[37] );
      res = refalrts::splice_elem( res, context[35] );
      res = refalrts::splice_stvar( res, context[34] );
      res = refalrts::splice_elem( res, context[33] );
      res = refalrts::splice_elem( res, context[32] );
      res = refalrts::splice_elem( res, context[31] );
      res = refalrts::splice_elem( res, context[29] );
      refalrts::use( res );
      refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
      if (rec_res != refalrts::cSuccess)
        return rec_res;
      refalrts::this_is_generated_function(vm);
      do {
        // </29 & T7?2/33 t.UsedVars2#3/34 e.eX_rest#3/31 >/30
        context[31] = 0;
        context[32] = 0;
        context[33] = refalrts::call_left( context[31], context[32], context[29], context[30] );
        context[35] = refalrts::tvar_left( context[34], context[31], context[32] );
        if( ! context[35] )
          continue;
        // closed e.eX_rest#3 as range 31
        //DEBUG: t.UsedVars#1: 5
        //DEBUG: e.Items#1: 7
        //DEBUG: e.Index#1: 16
        //DEBUG: e.Pattern#1: 11
        //DEBUG: e.ItemsAndHoles#1: 9
        //DEBUG: t.UsedVars1#2: 27
        //DEBUG: e.eX_fix#2: 24
        //DEBUG: t.UsedVars2#3: 34
        //DEBUG: e.eX_rest#3: 31

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} & T7/4 t.UsedVars#1/5 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.Index#1/16 )/19 e.Pattern#1/11 )/14 {REMOVED TILE} </22 & T7?1/26 t.UsedVars1#2/27 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.Items#1/7 } Tile{ AsIs: (/13 } Tile{ HalfReuse: # TkVariable/21 } Tile{ AsIs: e.eX_fix#2/24 } Tile{ HalfReuse: )/15 AsIs: (/18 AsIs: # TkVariable/20 } Tile{ AsIs: e.eX_rest#3/31 } Tile{ HalfReuse: )/23 AsIs: </29 Reuse: & PassiveHoles/33 AsIs: t.UsedVars2#3/34 } Tile{ AsIs: e.ItemsAndHoles#1/9 } Tile{ AsIs: >/30 HalfReuse: )/1 ]] }
        refalrts::reinit_open_bracket(context[0]);
        refalrts::reinit_ident(context[21], identifiers[ident_TkVariable]);
        refalrts::reinit_close_bracket(context[15]);
        refalrts::reinit_close_bracket(context[23]);
        refalrts::update_name(context[33], functions[efunc_PassiveHoles]);
        refalrts::reinit_close_bracket(context[1]);
        refalrts::link_brackets( context[0], context[1] );
        refalrts::push_stack( vm, context[30] );
        refalrts::push_stack( vm, context[29] );
        refalrts::link_brackets( context[18], context[23] );
        refalrts::link_brackets( context[13], context[15] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[30];
        res = refalrts::splice_evar( res, context[9], context[10] );
        res = refalrts::splice_evar( res, context[23], context[35] );
        res = refalrts::splice_evar( res, context[31], context[32] );
        res = refalrts::splice_evar( res, context[15], context[20] );
        res = refalrts::splice_evar( res, context[24], context[25] );
        res = refalrts::splice_evar( res, context[21], context[21] );
        res = refalrts::splice_evar( res, context[13], context[13] );
        res = refalrts::splice_evar( res, context[7], context[8] );
        refalrts::splice_to_freelist_open( vm, context[0], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      refalrts::splice_to_freelist(vm, context[29], context[30]);
      continue;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    refalrts::splice_to_freelist(vm, context[22], context[23]);
    continue;
  } while ( refalrts::open_evar_advance( context[7], context[8], context[2], context[3] ) );
  return refalrts::cRecognitionImpossible;
}

static refalrts::NativeReference nat_ref_T7("T7", 1097634219U, 507462218U, func_T7);


static refalrts::FnResult func_T0(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 7 elems
  refalrts::Iter context[7];
  refalrts::zeros( context, 7 );
  // </0 & T0/4 e.Items#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Items#1 as range 2
  //DEBUG: e.Items#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } (/5 Tile{ AsIs: </0 Reuse: & DoT0/4 AsIs: e.Items#1/2 AsIs: >/1 } )/6 Tile{ ]] }
  refalrts::alloc_open_bracket(vm, context[5]);
  refalrts::alloc_close_bracket(vm, context[6]);
  refalrts::update_name(context[4], functions[efunc_DoT0]);
  refalrts::link_brackets( context[5], context[6] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[6], context[6] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[5], context[5] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_T0("T0", 1097634219U, 507462218U, func_T0);


static refalrts::FnResult func_DoT0(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 25 elems
  refalrts::Iter context[25];
  refalrts::zeros( context, 25 );
  // </0 & DoT0/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & DoT0/4 t.new#1/7 e.new#2/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[8] = refalrts::tvar_left( context[7], context[5], context[6] );
    if( ! context[8] )
      continue;
    // closed e.new#2 as range 5
    do {
      // </0 & DoT0/4 (/7 s.new#3/13 e.new#4/11 )/8 e.new#5/9 >/1
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
        // </0 & DoT0/4 (/7 # OpenE/13 'e'/18 e.Index#1/14 )/8 e.Tail#1/16 >/1
        context[14] = context[11];
        context[15] = context[12];
        context[16] = context[9];
        context[17] = context[10];
        if( ! refalrts::ident_term( identifiers[ident_OpenE], context[13] ) )
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
        //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # Brackets/4 AsIs: (/7 Reuse: # TkVariable/13 AsIs: 'e'/18 AsIs: e.Index#1/14 AsIs: )/8 } )/19 </20 & DoT0/21 Tile{ AsIs: e.Tail#1/16 } Tile{ AsIs: >/1 ]] }
        refalrts::alloc_close_bracket(vm, context[19]);
        refalrts::alloc_open_call(vm, context[20]);
        refalrts::alloc_name(vm, context[21], functions[efunc_DoT0]);
        refalrts::reinit_open_bracket(context[0]);
        refalrts::reinit_ident(context[4], identifiers[ident_Brackets]);
        refalrts::update_ident(context[13], identifiers[ident_TkVariable]);
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

      do {
        // </0 & DoT0/4 (/7 # Brackets/13 e.InBrackets#1/14 )/8 e.Tail#1/16 >/1
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
        //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # Brackets/4 HalfReuse: </7 HalfReuse: & DoT0/13 AsIs: e.InBrackets#1/14 HalfReuse: >/8 } )/18 </19 & DoT0/20 Tile{ AsIs: e.Tail#1/16 } Tile{ AsIs: >/1 ]] }
        refalrts::alloc_close_bracket(vm, context[18]);
        refalrts::alloc_open_call(vm, context[19]);
        refalrts::alloc_name(vm, context[20], functions[efunc_DoT0]);
        refalrts::reinit_open_bracket(context[0]);
        refalrts::reinit_ident(context[4], identifiers[ident_Brackets]);
        refalrts::reinit_open_call(context[7]);
        refalrts::reinit_name(context[13], functions[efunc_DoT0]);
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

      // </0 & DoT0/4 (/7 # ADT-Brackets/13 (/20 e.Name#1/18 )/21 e.InBrackets#1/14 )/8 e.Tail#1/16 >/1
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
      // closed e.Name#1 as range 18
      // closed e.InBrackets#1 as range 14
      // closed e.Tail#1 as range 16
      //DEBUG: e.Name#1: 18
      //DEBUG: e.InBrackets#1: 14
      //DEBUG: e.Tail#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # ADT-Brackets/13 AsIs: (/20 AsIs: e.Name#1/18 AsIs: )/21 } Tile{ AsIs: </0 AsIs: & DoT0/4 } Tile{ AsIs: e.InBrackets#1/14 } >/22 )/23 </24 Tile{ HalfReuse: & DoT0/8 AsIs: e.Tail#1/16 AsIs: >/1 ]] }
      refalrts::alloc_close_call(vm, context[22]);
      refalrts::alloc_close_bracket(vm, context[23]);
      refalrts::alloc_open_call(vm, context[24]);
      refalrts::reinit_name(context[8], functions[efunc_DoT0]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[24] );
      refalrts::link_brackets( context[7], context[23] );
      refalrts::push_stack( vm, context[22] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[20], context[21] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[22], context[24] );
      res = refalrts::splice_evar( res, context[14], context[15] );
      res = refalrts::splice_evar( res, context[0], context[4] );
      res = refalrts::splice_evar( res, context[7], context[21] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & DoT0/4 t.OtherItem#1/7 e.Tail#1/9 >/1
    context[9] = context[5];
    context[10] = context[6];
    // closed e.Tail#1 as range 9
    //DEBUG: t.OtherItem#1: 7
    //DEBUG: e.Tail#1: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: t.OtherItem#1/7 } Tile{ AsIs: </0 AsIs: & DoT0/4 } Tile{ AsIs: e.Tail#1/9 } Tile{ AsIs: >/1 ]] }
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

  // </0 & DoT0/4 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & DoT0/4 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_DoT0("DoT0", 1097634219U, 507462218U, func_DoT0);


static refalrts::FnResult func_ConditionSubFunctions(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 91 elems
  refalrts::Iter context[91];
  refalrts::zeros( context, 91 );
  // </0 & ConditionSubFunctions/4 s.MarkupContext#1/5 (/8 e.ConditionName#1/6 )/9 t.ContName#1/10 e.Sentence#1/2 >/1
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
  // closed e.ConditionName#1 as range 6
  context[11] = refalrts::tvar_left( context[10], context[2], context[3] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  // closed e.Sentence#1 as range 2
  //DEBUG: s.MarkupContext#1: 5
  //DEBUG: e.ConditionName#1: 6
  //DEBUG: t.ContName#1: 10
  //DEBUG: e.Sentence#1: 2
  //2: e.Sentence#1
  //5: s.MarkupContext#1
  //6: e.ConditionName#1
  //10: t.ContName#1
  //15: e.Sentence#1

  refalrts::reset_allocator(vm);
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::alloc_open_call(vm, context[12]);
  refalrts::alloc_name(vm, context[14], functions[efunc_gen_ConditionSubFunctions_C1]);
  refalrts::copy_evar(vm, context[15], context[16], context[2], context[3]);
  refalrts::alloc_close_call(vm, context[13]);
  refalrts::push_stack( vm, context[13] );
  refalrts::push_stack( vm, context[12] );
  res = refalrts::splice_elem( res, context[13] );
  res = refalrts::splice_evar( res, context[15], context[16] );
  res = refalrts::splice_elem( res, context[14] );
  res = refalrts::splice_elem( res, context[12] );
  refalrts::use( res );
  refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
  if (rec_res != refalrts::cSuccess)
    return rec_res;
  refalrts::this_is_generated_function(vm);
  do {
    // </12 & ConditionSubFunctions?1/16 (/19 e.Pattern#2/17 )/20 (/23 # Condition/25 (/28 e.ConditionName#1/38 )/29 (/32 e.CondResult#2/30 )/33 (/36 e.CondPattern#2/34 )/37 )/24 e.SentenceTail#2/14 >/13
    context[14] = 0;
    context[15] = 0;
    context[16] = refalrts::call_left( context[14], context[15], context[12], context[13] );
    context[17] = 0;
    context[18] = 0;
    context[19] = refalrts::brackets_left( context[17], context[18], context[14], context[15] );
    if( ! context[19] )
      continue;
    refalrts::bracket_pointers(context[19], context[20]);
    context[21] = 0;
    context[22] = 0;
    context[23] = refalrts::brackets_left( context[21], context[22], context[14], context[15] );
    if( ! context[23] )
      continue;
    refalrts::bracket_pointers(context[23], context[24]);
    context[25] = refalrts::ident_left( identifiers[ident_Condition], context[21], context[22] );
    if( ! context[25] )
      continue;
    context[26] = 0;
    context[27] = 0;
    context[28] = refalrts::brackets_left( context[26], context[27], context[21], context[22] );
    if( ! context[28] )
      continue;
    refalrts::bracket_pointers(context[28], context[29]);
    context[30] = 0;
    context[31] = 0;
    context[32] = refalrts::brackets_left( context[30], context[31], context[21], context[22] );
    if( ! context[32] )
      continue;
    refalrts::bracket_pointers(context[32], context[33]);
    context[34] = 0;
    context[35] = 0;
    context[36] = refalrts::brackets_left( context[34], context[35], context[21], context[22] );
    if( ! context[36] )
      continue;
    refalrts::bracket_pointers(context[36], context[37]);
    if( ! refalrts::empty_seq( context[21], context[22] ) )
      continue;
    if( ! refalrts::repeated_evar_left( vm, context[38], context[39], context[6], context[7], context[26], context[27] ) )
      continue;
    if( ! refalrts::empty_seq( context[26], context[27] ) )
      continue;
    // closed e.Pattern#2 as range 17
    // closed e.CondResult#2 as range 30
    // closed e.CondPattern#2 as range 34
    // closed e.SentenceTail#2 as range 14
    //DEBUG: s.MarkupContext#1: 5
    //DEBUG: e.ConditionName#1: 6
    //DEBUG: t.ContName#1: 10
    //DEBUG: e.Sentence#1: 2
    //DEBUG: e.Pattern#2: 17
    //DEBUG: e.CondResult#2: 30
    //DEBUG: e.CondPattern#2: 34
    //DEBUG: e.SentenceTail#2: 14
    //2: e.Sentence#1
    //5: s.MarkupContext#1
    //6: e.ConditionName#1
    //10: t.ContName#1
    //14: e.SentenceTail#2
    //17: e.Pattern#2
    //30: e.CondResult#2
    //34: e.CondPattern#2
    //38: e.ConditionName#1
    //43: e.ConditionName#1

    refalrts::reset_allocator(vm);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::alloc_open_call(vm, context[40]);
    refalrts::alloc_name(vm, context[42], functions[efunc_gen_ConditionSubFunctions_C2]);
    refalrts::copy_evar(vm, context[43], context[44], context[38], context[39]);
    refalrts::alloc_char(vm, context[45], '?');
    refalrts::alloc_number(vm, context[46], 0UL);
    refalrts::alloc_close_call(vm, context[41]);
    refalrts::push_stack( vm, context[41] );
    refalrts::push_stack( vm, context[40] );
    res = refalrts::splice_elem( res, context[41] );
    res = refalrts::splice_elem( res, context[46] );
    res = refalrts::splice_elem( res, context[45] );
    res = refalrts::splice_evar( res, context[43], context[44] );
    res = refalrts::splice_elem( res, context[42] );
    res = refalrts::splice_elem( res, context[40] );
    refalrts::use( res );
    refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
    if (rec_res != refalrts::cSuccess)
      return rec_res;
    refalrts::this_is_generated_function(vm);
    do {
      // </40 & ConditionSubFunctions?2/44 e.CheckFunction#3/42 >/41
      context[42] = 0;
      context[43] = 0;
      context[44] = refalrts::call_left( context[42], context[43], context[40], context[41] );
      // closed e.CheckFunction#3 as range 42
      //DEBUG: s.MarkupContext#1: 5
      //DEBUG: e.ConditionName#1: 6
      //DEBUG: t.ContName#1: 10
      //DEBUG: e.Sentence#1: 2
      //DEBUG: e.Pattern#2: 17
      //DEBUG: e.CondResult#2: 30
      //DEBUG: e.CondPattern#2: 34
      //DEBUG: e.SentenceTail#2: 14
      //DEBUG: e.CheckFunction#3: 42
      //2: e.Sentence#1
      //5: s.MarkupContext#1
      //6: e.ConditionName#1
      //10: t.ContName#1
      //14: e.SentenceTail#2
      //17: e.Pattern#2
      //30: e.CondResult#2
      //34: e.CondPattern#2
      //38: e.ConditionName#1
      //42: e.CheckFunction#3
      //51: e.Sentence#1

      refalrts::reset_allocator(vm);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::alloc_open_call(vm, context[45]);
      refalrts::alloc_name(vm, context[47], functions[efunc_gen_ConditionSubFunctions_C3]);
      refalrts::alloc_open_call(vm, context[48]);
      refalrts::alloc_name(vm, context[49], functions[efunc_ExtractVariables]);
      refalrts::alloc_open_bracket(vm, context[50]);
      refalrts::copy_evar(vm, context[51], context[52], context[2], context[3]);
      refalrts::alloc_close_bracket(vm, context[53]);
      refalrts::alloc_close_call(vm, context[54]);
      refalrts::alloc_close_call(vm, context[46]);
      refalrts::push_stack( vm, context[46] );
      refalrts::push_stack( vm, context[45] );
      res = refalrts::splice_elem( res, context[46] );
      refalrts::push_stack( vm, context[54] );
      refalrts::push_stack( vm, context[48] );
      res = refalrts::splice_elem( res, context[54] );
      refalrts::link_brackets( context[50], context[53] );
      res = refalrts::splice_elem( res, context[53] );
      res = refalrts::splice_evar( res, context[51], context[52] );
      res = refalrts::splice_elem( res, context[50] );
      res = refalrts::splice_elem( res, context[49] );
      res = refalrts::splice_elem( res, context[48] );
      res = refalrts::splice_elem( res, context[47] );
      res = refalrts::splice_elem( res, context[45] );
      refalrts::use( res );
      refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
      if (rec_res != refalrts::cSuccess)
        return rec_res;
      refalrts::this_is_generated_function(vm);
      do {
        // </45 & ConditionSubFunctions?3/49 e.SentenceVariables#4/47 >/46
        context[47] = 0;
        context[48] = 0;
        context[49] = refalrts::call_left( context[47], context[48], context[45], context[46] );
        // closed e.SentenceVariables#4 as range 47
        //DEBUG: s.MarkupContext#1: 5
        //DEBUG: e.ConditionName#1: 6
        //DEBUG: t.ContName#1: 10
        //DEBUG: e.Sentence#1: 2
        //DEBUG: e.Pattern#2: 17
        //DEBUG: e.CondResult#2: 30
        //DEBUG: e.CondPattern#2: 34
        //DEBUG: e.SentenceTail#2: 14
        //DEBUG: e.CheckFunction#3: 42
        //DEBUG: e.SentenceVariables#4: 47
        //2: e.Sentence#1
        //5: s.MarkupContext#1
        //6: e.ConditionName#1
        //10: t.ContName#1
        //14: e.SentenceTail#2
        //17: e.Pattern#2
        //30: e.CondResult#2
        //34: e.CondPattern#2
        //38: e.ConditionName#1
        //42: e.CheckFunction#3
        //47: e.SentenceVariables#4
        //55: s.MarkupContext#1
        //56: e.Pattern#2

        refalrts::reset_allocator(vm);
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        refalrts::alloc_open_call(vm, context[50]);
        refalrts::alloc_name(vm, context[52], functions[efunc_gen_ConditionSubFunctions_C4]);
        refalrts::alloc_open_call(vm, context[53]);
        refalrts::alloc_name(vm, context[54], functions[efunc_ConditionContext]);
        refalrts::copy_stvar(vm, context[55], context[5]);
        refalrts::copy_evar(vm, context[56], context[57], context[17], context[18]);
        refalrts::alloc_close_call(vm, context[58]);
        refalrts::alloc_close_call(vm, context[51]);
        refalrts::push_stack( vm, context[51] );
        refalrts::push_stack( vm, context[50] );
        res = refalrts::splice_elem( res, context[51] );
        refalrts::push_stack( vm, context[58] );
        refalrts::push_stack( vm, context[53] );
        res = refalrts::splice_elem( res, context[58] );
        res = refalrts::splice_evar( res, context[56], context[57] );
        res = refalrts::splice_stvar( res, context[55] );
        res = refalrts::splice_elem( res, context[54] );
        res = refalrts::splice_elem( res, context[53] );
        res = refalrts::splice_elem( res, context[52] );
        res = refalrts::splice_elem( res, context[50] );
        refalrts::use( res );
        refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
        if (rec_res != refalrts::cSuccess)
          return rec_res;
        refalrts::this_is_generated_function(vm);
        do {
          // </50 & ConditionSubFunctions?4/54 e.PatternVarsAsExpr#5/52 >/51
          context[52] = 0;
          context[53] = 0;
          context[54] = refalrts::call_left( context[52], context[53], context[50], context[51] );
          // closed e.PatternVarsAsExpr#5 as range 52
          //DEBUG: s.MarkupContext#1: 5
          //DEBUG: e.ConditionName#1: 6
          //DEBUG: t.ContName#1: 10
          //DEBUG: e.Sentence#1: 2
          //DEBUG: e.Pattern#2: 17
          //DEBUG: e.CondResult#2: 30
          //DEBUG: e.CondPattern#2: 34
          //DEBUG: e.SentenceTail#2: 14
          //DEBUG: e.CheckFunction#3: 42
          //DEBUG: e.SentenceVariables#4: 47
          //DEBUG: e.PatternVarsAsExpr#5: 52
          //2: e.Sentence#1
          //5: s.MarkupContext#1
          //6: e.ConditionName#1
          //10: t.ContName#1
          //14: e.SentenceTail#2
          //17: e.Pattern#2
          //30: e.CondResult#2
          //34: e.CondPattern#2
          //38: e.ConditionName#1
          //42: e.CheckFunction#3
          //47: e.SentenceVariables#4
          //52: e.PatternVarsAsExpr#5
          //61: e.SentenceVariables#4
          //64: e.Pattern#2

          refalrts::reset_allocator(vm);
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[1];
          refalrts::alloc_open_call(vm, context[55]);
          refalrts::alloc_name(vm, context[57], functions[efunc_gen_ConditionSubFunctions_C5]);
          refalrts::alloc_open_call(vm, context[58]);
          refalrts::alloc_name(vm, context[59], functions[efunc_PatternSteps]);
          refalrts::alloc_open_bracket(vm, context[60]);
          refalrts::copy_evar(vm, context[61], context[62], context[47], context[48]);
          refalrts::alloc_close_bracket(vm, context[63]);
          refalrts::copy_evar(vm, context[64], context[65], context[17], context[18]);
          refalrts::alloc_close_call(vm, context[66]);
          refalrts::alloc_close_call(vm, context[56]);
          refalrts::push_stack( vm, context[56] );
          refalrts::push_stack( vm, context[55] );
          res = refalrts::splice_elem( res, context[56] );
          refalrts::push_stack( vm, context[66] );
          refalrts::push_stack( vm, context[58] );
          res = refalrts::splice_elem( res, context[66] );
          res = refalrts::splice_evar( res, context[64], context[65] );
          refalrts::link_brackets( context[60], context[63] );
          res = refalrts::splice_elem( res, context[63] );
          res = refalrts::splice_evar( res, context[61], context[62] );
          res = refalrts::splice_elem( res, context[60] );
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
            // </55 & ConditionSubFunctions?5/59 e.PatternSteps#6/57 >/56
            context[57] = 0;
            context[58] = 0;
            context[59] = refalrts::call_left( context[57], context[58], context[55], context[56] );
            // closed e.PatternSteps#6 as range 57
            //DEBUG: s.MarkupContext#1: 5
            //DEBUG: e.ConditionName#1: 6
            //DEBUG: t.ContName#1: 10
            //DEBUG: e.Sentence#1: 2
            //DEBUG: e.Pattern#2: 17
            //DEBUG: e.CondResult#2: 30
            //DEBUG: e.CondPattern#2: 34
            //DEBUG: e.SentenceTail#2: 14
            //DEBUG: e.CheckFunction#3: 42
            //DEBUG: e.SentenceVariables#4: 47
            //DEBUG: e.PatternVarsAsExpr#5: 52
            //DEBUG: e.PatternSteps#6: 57
            //2: e.Sentence#1
            //5: s.MarkupContext#1
            //6: e.ConditionName#1
            //10: t.ContName#1
            //14: e.SentenceTail#2
            //17: e.Pattern#2
            //30: e.CondResult#2
            //34: e.CondPattern#2
            //38: e.ConditionName#1
            //42: e.CheckFunction#3
            //47: e.SentenceVariables#4
            //52: e.PatternVarsAsExpr#5
            //57: e.PatternSteps#6
            //66: e.ConditionName#1
            //70: e.SentenceVariables#4
            //73: t.ContName#1
            //75: e.CheckFunction#3
            //79: e.PatternVarsAsExpr#5
            //83: e.CondResult#2
            //86: e.PatternSteps#6

            refalrts::reset_allocator(vm);
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = context[1];
            refalrts::alloc_open_call(vm, context[60]);
            refalrts::alloc_name(vm, context[62], functions[efunc_gen_ConditionSubFunctions_C6]);
            refalrts::alloc_open_call(vm, context[63]);
            refalrts::alloc_name(vm, context[64], functions[efunc_OpenEChain]);
            refalrts::alloc_open_bracket(vm, context[65]);
            refalrts::copy_evar(vm, context[66], context[67], context[38], context[39]);
            refalrts::alloc_close_bracket(vm, context[68]);
            refalrts::alloc_open_bracket(vm, context[69]);
            refalrts::copy_evar(vm, context[70], context[71], context[47], context[48]);
            refalrts::alloc_close_bracket(vm, context[72]);
            refalrts::copy_stvar(vm, context[73], context[10]);
            refalrts::alloc_open_bracket(vm, context[74]);
            refalrts::copy_evar(vm, context[75], context[76], context[42], context[43]);
            refalrts::alloc_close_bracket(vm, context[77]);
            refalrts::alloc_open_bracket(vm, context[78]);
            refalrts::copy_evar(vm, context[79], context[80], context[52], context[53]);
            refalrts::alloc_close_bracket(vm, context[81]);
            refalrts::alloc_open_bracket(vm, context[82]);
            refalrts::copy_evar(vm, context[83], context[84], context[30], context[31]);
            refalrts::alloc_close_bracket(vm, context[85]);
            refalrts::copy_evar(vm, context[86], context[87], context[57], context[58]);
            refalrts::alloc_close_call(vm, context[88]);
            refalrts::alloc_close_call(vm, context[61]);
            refalrts::push_stack( vm, context[61] );
            refalrts::push_stack( vm, context[60] );
            res = refalrts::splice_elem( res, context[61] );
            refalrts::push_stack( vm, context[88] );
            refalrts::push_stack( vm, context[63] );
            res = refalrts::splice_elem( res, context[88] );
            res = refalrts::splice_evar( res, context[86], context[87] );
            refalrts::link_brackets( context[82], context[85] );
            res = refalrts::splice_elem( res, context[85] );
            res = refalrts::splice_evar( res, context[83], context[84] );
            res = refalrts::splice_elem( res, context[82] );
            refalrts::link_brackets( context[78], context[81] );
            res = refalrts::splice_elem( res, context[81] );
            res = refalrts::splice_evar( res, context[79], context[80] );
            res = refalrts::splice_elem( res, context[78] );
            refalrts::link_brackets( context[74], context[77] );
            res = refalrts::splice_elem( res, context[77] );
            res = refalrts::splice_evar( res, context[75], context[76] );
            res = refalrts::splice_elem( res, context[74] );
            res = refalrts::splice_stvar( res, context[73] );
            refalrts::link_brackets( context[69], context[72] );
            res = refalrts::splice_elem( res, context[72] );
            res = refalrts::splice_evar( res, context[70], context[71] );
            res = refalrts::splice_elem( res, context[69] );
            refalrts::link_brackets( context[65], context[68] );
            res = refalrts::splice_elem( res, context[68] );
            res = refalrts::splice_evar( res, context[66], context[67] );
            res = refalrts::splice_elem( res, context[65] );
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
              // </60 & ConditionSubFunctions?6/64 (/67 e.ContSentence#7/65 )/68 e.OpenEFunctions#7/62 >/61
              context[62] = 0;
              context[63] = 0;
              context[64] = refalrts::call_left( context[62], context[63], context[60], context[61] );
              context[65] = 0;
              context[66] = 0;
              context[67] = refalrts::brackets_left( context[65], context[66], context[62], context[63] );
              if( ! context[67] )
                continue;
              refalrts::bracket_pointers(context[67], context[68]);
              // closed e.ContSentence#7 as range 65
              // closed e.OpenEFunctions#7 as range 62
              //DEBUG: s.MarkupContext#1: 5
              //DEBUG: e.ConditionName#1: 6
              //DEBUG: t.ContName#1: 10
              //DEBUG: e.Sentence#1: 2
              //DEBUG: e.Pattern#2: 17
              //DEBUG: e.CondResult#2: 30
              //DEBUG: e.CondPattern#2: 34
              //DEBUG: e.SentenceTail#2: 14
              //DEBUG: e.CheckFunction#3: 42
              //DEBUG: e.SentenceVariables#4: 47
              //DEBUG: e.PatternVarsAsExpr#5: 52
              //DEBUG: e.PatternSteps#6: 57
              //DEBUG: e.ContSentence#7: 65
              //DEBUG: e.OpenEFunctions#7: 62
              //2: e.Sentence#1
              //5: s.MarkupContext#1
              //6: e.ConditionName#1
              //10: t.ContName#1
              //14: e.SentenceTail#2
              //17: e.Pattern#2
              //30: e.CondResult#2
              //34: e.CondPattern#2
              //38: e.ConditionName#1
              //42: e.CheckFunction#3
              //47: e.SentenceVariables#4
              //52: e.PatternVarsAsExpr#5
              //57: e.PatternSteps#6
              //62: e.OpenEFunctions#7
              //65: e.ContSentence#7
              //75: e.CheckFunction#3
              //80: e.PatternVarsAsExpr#5
              //82: e.CondPattern#2
              //85: e.SentenceTail#2
              //88: e.ContSentence#7

              refalrts::reset_allocator(vm);
              refalrts::Iter trash_prev = arg_begin->prev;
              refalrts::use(trash_prev);
              refalrts::Iter res = context[1];
              refalrts::alloc_open_call(vm, context[69]);
              refalrts::alloc_name(vm, context[71], functions[efunc_gen_ConditionSubFunctions_C7]);
              refalrts::alloc_open_bracket(vm, context[72]);
              refalrts::alloc_ident(vm, context[73], identifiers[ident_GNm_Local]);
              refalrts::alloc_open_bracket(vm, context[74]);
              refalrts::copy_evar(vm, context[75], context[76], context[42], context[43]);
              refalrts::alloc_close_bracket(vm, context[77]);
              refalrts::alloc_open_bracket(vm, context[78]);
              refalrts::alloc_open_bracket(vm, context[79]);
              refalrts::copy_evar(vm, context[80], context[81], context[52], context[53]);
              refalrts::copy_evar(vm, context[82], context[83], context[34], context[35]);
              refalrts::alloc_close_bracket(vm, context[84]);
              refalrts::copy_evar(vm, context[85], context[86], context[14], context[15]);
              refalrts::alloc_close_bracket(vm, context[87]);
              refalrts::copy_evar(vm, context[88], context[89], context[65], context[66]);
              refalrts::alloc_close_bracket(vm, context[90]);
              refalrts::alloc_close_call(vm, context[70]);
              refalrts::push_stack( vm, context[70] );
              refalrts::push_stack( vm, context[69] );
              res = refalrts::splice_elem( res, context[70] );
              refalrts::link_brackets( context[72], context[90] );
              res = refalrts::splice_elem( res, context[90] );
              res = refalrts::splice_evar( res, context[88], context[89] );
              refalrts::link_brackets( context[78], context[87] );
              res = refalrts::splice_elem( res, context[87] );
              res = refalrts::splice_evar( res, context[85], context[86] );
              refalrts::link_brackets( context[79], context[84] );
              res = refalrts::splice_elem( res, context[84] );
              res = refalrts::splice_evar( res, context[82], context[83] );
              res = refalrts::splice_evar( res, context[80], context[81] );
              res = refalrts::splice_elem( res, context[79] );
              res = refalrts::splice_elem( res, context[78] );
              refalrts::link_brackets( context[74], context[77] );
              res = refalrts::splice_elem( res, context[77] );
              res = refalrts::splice_evar( res, context[75], context[76] );
              res = refalrts::splice_elem( res, context[74] );
              res = refalrts::splice_elem( res, context[73] );
              res = refalrts::splice_elem( res, context[72] );
              res = refalrts::splice_elem( res, context[71] );
              res = refalrts::splice_elem( res, context[69] );
              refalrts::use( res );
              refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
              if (rec_res != refalrts::cSuccess)
                return rec_res;
              refalrts::this_is_generated_function(vm);
              do {
                // </69 & ConditionSubFunctions?7/73 t.CheckFunction#8/74 >/70
                context[71] = 0;
                context[72] = 0;
                context[73] = refalrts::call_left( context[71], context[72], context[69], context[70] );
                context[75] = refalrts::tvar_left( context[74], context[71], context[72] );
                if( ! context[75] )
                  continue;
                if( ! refalrts::empty_seq( context[71], context[72] ) )
                  continue;
                //DEBUG: s.MarkupContext#1: 5
                //DEBUG: e.ConditionName#1: 6
                //DEBUG: t.ContName#1: 10
                //DEBUG: e.Sentence#1: 2
                //DEBUG: e.Pattern#2: 17
                //DEBUG: e.CondResult#2: 30
                //DEBUG: e.CondPattern#2: 34
                //DEBUG: e.SentenceTail#2: 14
                //DEBUG: e.CheckFunction#3: 42
                //DEBUG: e.SentenceVariables#4: 47
                //DEBUG: e.PatternVarsAsExpr#5: 52
                //DEBUG: e.PatternSteps#6: 57
                //DEBUG: e.ContSentence#7: 65
                //DEBUG: e.OpenEFunctions#7: 62
                //DEBUG: t.CheckFunction#8: 74

                refalrts::reset_allocator(vm);
                //TRASH: {REMOVED TILE} </0 & ConditionSubFunctions/4 s.MarkupContext#1/5 (/8 e.ConditionName#1/6 )/9 t.ContName#1/10 e.Sentence#1/2 </12 {REMOVED TILE} e.ConditionName#1/38 )/29 (/32 {REMOVED TILE} )/33 (/36 e.CondPattern#2/34 )/37 )/24 e.SentenceTail#2/14 {REMOVED TILE} </45 & ConditionSubFunctions?3/49 e.SentenceVariables#4/47 >/46 </50 & ConditionSubFunctions?4/54 {REMOVED TILE} >/51 </55 & ConditionSubFunctions?5/59 e.PatternSteps#6/57 >/56 </60 & ConditionSubFunctions?6/64 (/67 e.ContSentence#7/65 )/68 {REMOVED TILE} {REMOVED TILE} >/70 >/1 {REMOVED TILE}
                //RESULT: Tile{ [[ } Tile{ HalfReuse: (/16 AsIs: (/19 AsIs: e.Pattern#2/17 AsIs: )/20 AsIs: (/23 HalfReuse: (/25 HalfReuse: # CallBrackets/28 } Tile{ HalfReuse: (/13 HalfReuse: # Symbol/40 HalfReuse: # Name/44 AsIs: e.CheckFunction#3/42 HalfReuse: )/41 } Tile{ AsIs: e.PatternVarsAsExpr#5/52 } Tile{ AsIs: e.CondResult#2/30 } Tile{ HalfReuse: )/61 HalfReuse: )/69 HalfReuse: )/73 AsIs: t.CheckFunction#8/74 } Tile{ AsIs: e.OpenEFunctions#7/62 } Tile{ ]] }
                refalrts::reinit_open_bracket(context[16]);
                refalrts::reinit_open_bracket(context[25]);
                refalrts::reinit_ident(context[28], identifiers[ident_CallBrackets]);
                refalrts::reinit_open_bracket(context[13]);
                refalrts::reinit_ident(context[40], identifiers[ident_Symbol]);
                refalrts::reinit_ident(context[44], identifiers[ident_Name]);
                refalrts::reinit_close_bracket(context[41]);
                refalrts::reinit_close_bracket(context[61]);
                refalrts::reinit_close_bracket(context[69]);
                refalrts::reinit_close_bracket(context[73]);
                refalrts::link_brackets( context[16], context[73] );
                refalrts::link_brackets( context[23], context[69] );
                refalrts::link_brackets( context[25], context[61] );
                refalrts::link_brackets( context[13], context[41] );
                refalrts::link_brackets( context[19], context[20] );
                refalrts::Iter trash_prev = arg_begin->prev;
                refalrts::use(trash_prev);
                refalrts::Iter res = arg_end->next;
                res = refalrts::splice_evar( res, context[62], context[63] );
                res = refalrts::splice_evar( res, context[61], context[75] );
                res = refalrts::splice_evar( res, context[30], context[31] );
                res = refalrts::splice_evar( res, context[52], context[53] );
                res = refalrts::splice_evar( res, context[13], context[41] );
                res = refalrts::splice_evar( res, context[16], context[28] );
                refalrts::splice_to_freelist_open( vm, trash_prev, res );
                return refalrts::cSuccess;
              } while ( 0 );
              refalrts::stop_sentence(vm);

              refalrts::splice_to_freelist(vm, context[69], context[70]);
              continue;
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

        refalrts::splice_to_freelist(vm, context[50], context[51]);
        continue;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      refalrts::splice_to_freelist(vm, context[45], context[46]);
      continue;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    refalrts::splice_to_freelist(vm, context[40], context[41]);
    continue;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  refalrts::splice_to_freelist(vm, context[12], context[13]);
  return refalrts::cRecognitionImpossible;
}

static refalrts::NativeReference nat_ref_ConditionSubFunctions("ConditionSubFunctions", 1097634219U, 507462218U, func_ConditionSubFunctions);


static refalrts::FnResult func_ConditionContext(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
  // </0 & ConditionContext/4 s.MarkupContext#1/5 e.Pattern#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Pattern#1 as range 2
  //DEBUG: s.MarkupContext#1: 5
  //DEBUG: e.Pattern#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map/4 } (/6 & MakeVariables/7 Tile{ AsIs: s.MarkupContext#1/5 } )/8 </9 & Unique/10 </11 & ExtractVariables-Expr/12 Tile{ AsIs: e.Pattern#1/2 } >/13 >/14 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[6]);
  refalrts::alloc_name(vm, context[7], functions[efunc_MakeVariables]);
  refalrts::alloc_close_bracket(vm, context[8]);
  refalrts::alloc_open_call(vm, context[9]);
  refalrts::alloc_name(vm, context[10], functions[efunc_Unique]);
  refalrts::alloc_open_call(vm, context[11]);
  refalrts::alloc_name(vm, context[12], functions[efunc_ExtractVariablesm_Expr]);
  refalrts::alloc_close_call(vm, context[13]);
  refalrts::alloc_close_call(vm, context[14]);
  refalrts::update_name(context[4], functions[efunc_Map]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[14] );
  refalrts::push_stack( vm, context[9] );
  refalrts::push_stack( vm, context[13] );
  refalrts::push_stack( vm, context[11] );
  refalrts::link_brackets( context[6], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[8], context[12] );
  res = refalrts::splice_evar( res, context[5], context[5] );
  res = refalrts::splice_evar( res, context[6], context[7] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ConditionContext("ConditionContext", 1097634219U, 507462218U, func_ConditionContext);


static refalrts::FnResult func_MakeVariables(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 23 elems
  refalrts::Iter context[23];
  refalrts::zeros( context, 23 );
  // </0 & MakeVariables/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & MakeVariables/4 s.new#1/9 (/7 s.new#2/10 e.new#3/5 )/8 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[10], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#3 as range 5
  do {
    // </0 & MakeVariables/4 # MarkupContext/9 (/7 s.new#4/10 e.new#5/11 )/8 >/1
    context[11] = context[5];
    context[12] = context[6];
    if( ! refalrts::ident_term( identifiers[ident_MarkupContext], context[9] ) )
      continue;
    // closed e.new#5 as range 11
    do {
      // </0 & MakeVariables/4 # MarkupContext/9 (/7 'e'/10 e.Index#1/13 )/8 >/1
      context[13] = context[11];
      context[14] = context[12];
      if( ! refalrts::char_term( 'e', context[10] ) )
        continue;
      // closed e.Index#1 as range 13
      //DEBUG: e.Index#1: 13

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # Symbol/4 Reuse: # Identifier/9 HalfReuse: # VAR/7 AsIs: 'e'/10 AsIs: e.Index#1/13 AsIs: )/8 HalfReuse: (/1 } # Brackets/15 (/16 # TkVariable/17 'e'/18 e.Index#1/13/19 )/21 )/22 Tile{ ]] }
      refalrts::alloc_ident(vm, context[15], identifiers[ident_Brackets]);
      refalrts::alloc_open_bracket(vm, context[16]);
      refalrts::alloc_ident(vm, context[17], identifiers[ident_TkVariable]);
      refalrts::alloc_char(vm, context[18], 'e');
      refalrts::copy_evar(vm, context[19], context[20], context[13], context[14]);
      refalrts::alloc_close_bracket(vm, context[21]);
      refalrts::alloc_close_bracket(vm, context[22]);
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_ident(context[4], identifiers[ident_Symbol]);
      refalrts::update_ident(context[9], identifiers[ident_Identifier]);
      refalrts::reinit_ident(context[7], identifiers[ident_VAR]);
      refalrts::reinit_open_bracket(context[1]);
      refalrts::link_brackets( context[1], context[22] );
      refalrts::link_brackets( context[16], context[21] );
      refalrts::link_brackets( context[0], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[15], context[22] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & MakeVariables/4 # MarkupContext/9 (/7 s.VarType#1/10 e.Index#1/13 )/8 >/1
    context[13] = context[11];
    context[14] = context[12];
    // closed e.Index#1 as range 13
    //DEBUG: s.VarType#1: 10
    //DEBUG: e.Index#1: 13

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # Symbol/4 Reuse: # Identifier/9 HalfReuse: # VAR/7 AsIs: s.VarType#1/10 AsIs: e.Index#1/13 AsIs: )/8 HalfReuse: (/1 } # TkVariable/15 s.VarType#1/10/16 e.Index#1/13/17 )/19 Tile{ ]] }
    refalrts::alloc_ident(vm, context[15], identifiers[ident_TkVariable]);
    refalrts::copy_stvar(vm, context[16], context[10]);
    refalrts::copy_evar(vm, context[17], context[18], context[13], context[14]);
    refalrts::alloc_close_bracket(vm, context[19]);
    refalrts::reinit_open_bracket(context[0]);
    refalrts::reinit_ident(context[4], identifiers[ident_Symbol]);
    refalrts::update_ident(context[9], identifiers[ident_Identifier]);
    refalrts::reinit_ident(context[7], identifiers[ident_VAR]);
    refalrts::reinit_open_bracket(context[1]);
    refalrts::link_brackets( context[1], context[19] );
    refalrts::link_brackets( context[0], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[15], context[19] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & MakeVariables/4 # NoMarkupContext/9 (/7 s.new#4/10 e.new#5/5 )/8 >/1
  if( ! refalrts::ident_term( identifiers[ident_NoMarkupContext], context[9] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#5 as range 5
  do {
    // </0 & MakeVariables/4 # NoMarkupContext/9 (/7 'e'/10 e.Index#1/11 )/8 >/1
    context[11] = context[5];
    context[12] = context[6];
    if( ! refalrts::char_term( 'e', context[10] ) )
      continue;
    // closed e.Index#1 as range 11
    //DEBUG: e.Index#1: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # Brackets/4 HalfReuse: (/9 HalfReuse: # TkVariable/7 AsIs: 'e'/10 AsIs: e.Index#1/11 AsIs: )/8 HalfReuse: )/1 ]] }
    refalrts::reinit_open_bracket(context[0]);
    refalrts::reinit_ident(context[4], identifiers[ident_Brackets]);
    refalrts::reinit_open_bracket(context[9]);
    refalrts::reinit_ident(context[7], identifiers[ident_TkVariable]);
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[0], context[1] );
    refalrts::link_brackets( context[9], context[8] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & MakeVariables/4 # NoMarkupContext/9 (/7 s.VarType#1/10 e.Index#1/5 )/8 >/1
  // closed e.Index#1 as range 5
  //DEBUG: s.VarType#1: 10
  //DEBUG: e.Index#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & MakeVariables/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: (/9 HalfReuse: # TkVariable/7 AsIs: s.VarType#1/10 AsIs: e.Index#1/5 AsIs: )/8 } Tile{ ]] }
  refalrts::reinit_open_bracket(context[9]);
  refalrts::reinit_ident(context[7], identifiers[ident_TkVariable]);
  refalrts::link_brackets( context[9], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[9], context[8] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_MakeVariables("MakeVariables", 1097634219U, 507462218U, func_MakeVariables);


static refalrts::FnResult func_OpenEChain(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 77 elems
  refalrts::Iter context[77];
  refalrts::zeros( context, 77 );
  // </0 & OpenEChain/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & OpenEChain/4 (/7 e.new#1/5 )/8 (/11 e.new#2/9 )/12 t.new#3/13 (/17 e.new#4/15 )/18 (/21 e.new#5/19 )/22 (/25 e.new#6/23 )/26 (/29 (/33 e.new#7/31 )/34 )/30 e.new#8/2 >/1
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
  context[31] = 0;
  context[32] = 0;
  context[33] = refalrts::brackets_left( context[31], context[32], context[27], context[28] );
  if( ! context[33] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[33], context[34]);
  if( ! refalrts::empty_seq( context[27], context[28] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#4 as range 15
  // closed e.new#5 as range 19
  // closed e.new#6 as range 23
  // closed e.new#7 as range 31
  // closed e.new#8 as range 2
  do {
    // </0 & OpenEChain/4 (/7 e.new#9/35 )/8 (/11 e.new#10/37 )/12 t.new#11/13 (/17 e.new#12/39 )/18 (/21 e.new#13/41 )/22 (/25 e.new#14/43 )/26 (/29 (/33 e.new#15/45 )/34 )/30 >/1
    context[35] = context[5];
    context[36] = context[6];
    context[37] = context[9];
    context[38] = context[10];
    context[39] = context[15];
    context[40] = context[16];
    context[41] = context[19];
    context[42] = context[20];
    context[43] = context[23];
    context[44] = context[24];
    context[45] = context[31];
    context[46] = context[32];
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.new#9 as range 35
    // closed e.new#10 as range 37
    // closed e.new#12 as range 39
    // closed e.new#13 as range 41
    // closed e.new#14 as range 43
    // closed e.new#15 as range 45
    do {
      // </0 & OpenEChain/4 (/7 e.ConditionName#1/47 )/8 (/11 e.VarNames#1/49 )/12 # NoContinuation/13 (/17 e.CheckFunction#1/51 )/18 (/21 e.PatternVarsAsExpr#1/53 )/22 (/25 e.CondResult#1/55 )/26 (/29 (/33 e.T0#1/57 )/34 )/30 >/1
      context[47] = context[35];
      context[48] = context[36];
      context[49] = context[37];
      context[50] = context[38];
      context[51] = context[39];
      context[52] = context[40];
      context[53] = context[41];
      context[54] = context[42];
      context[55] = context[43];
      context[56] = context[44];
      context[57] = context[45];
      context[58] = context[46];
      if( ! refalrts::ident_term( identifiers[ident_NoContinuation], context[13] ) )
        continue;
      // closed e.ConditionName#1 as range 47
      // closed e.VarNames#1 as range 49
      // closed e.CheckFunction#1 as range 51
      // closed e.PatternVarsAsExpr#1 as range 53
      // closed e.CondResult#1 as range 55
      // closed e.T0#1 as range 57
      //DEBUG: e.ConditionName#1: 47
      //DEBUG: e.VarNames#1: 49
      //DEBUG: e.CheckFunction#1: 51
      //DEBUG: e.PatternVarsAsExpr#1: 53
      //DEBUG: e.CondResult#1: 55
      //DEBUG: e.T0#1: 57

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & OpenEChain/4 (/7 e.ConditionName#1/47 )/8 (/11 e.VarNames#1/49 )/12 # NoContinuation/13 (/17 e.CheckFunction#1/51 )/18 (/21 e.PatternVarsAsExpr#1/53 )/22 (/25 e.CondResult#1/55 )/26 (/29 (/33 e.T0#1/57 )/34 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: (/30 HalfReuse: )/1 ]] }
      refalrts::reinit_open_bracket(context[30]);
      refalrts::reinit_close_bracket(context[1]);
      refalrts::link_brackets( context[30], context[1] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[30];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & OpenEChain/4 (/7 e.ConditionName#1/47 )/8 (/11 e.VarNames#1/49 )/12 (/13 e.ContName#1/59 )/14 (/17 e.CheckFunction#1/51 )/18 (/21 e.PatternVarsAsExpr#1/53 )/22 (/25 e.CondResult#1/55 )/26 (/29 (/33 e.T0#1/57 )/34 )/30 >/1
    context[47] = context[35];
    context[48] = context[36];
    context[49] = context[37];
    context[50] = context[38];
    context[51] = context[39];
    context[52] = context[40];
    context[53] = context[41];
    context[54] = context[42];
    context[55] = context[43];
    context[56] = context[44];
    context[57] = context[45];
    context[58] = context[46];
    context[59] = 0;
    context[60] = 0;
    if( ! refalrts::brackets_term( context[59], context[60], context[13] ) )
      continue;
    // closed e.ConditionName#1 as range 47
    // closed e.VarNames#1 as range 49
    // closed e.ContName#1 as range 59
    // closed e.CheckFunction#1 as range 51
    // closed e.PatternVarsAsExpr#1 as range 53
    // closed e.CondResult#1 as range 55
    // closed e.T0#1 as range 57
    //DEBUG: e.ConditionName#1: 47
    //DEBUG: e.VarNames#1: 49
    //DEBUG: e.ContName#1: 59
    //DEBUG: e.CheckFunction#1: 51
    //DEBUG: e.PatternVarsAsExpr#1: 53
    //DEBUG: e.CondResult#1: 55
    //DEBUG: e.T0#1: 57
    //47: e.ConditionName#1
    //49: e.VarNames#1
    //51: e.CheckFunction#1
    //53: e.PatternVarsAsExpr#1
    //55: e.CondResult#1
    //57: e.T0#1
    //59: e.ContName#1
    //67: e.VarNames#1

    refalrts::reset_allocator(vm);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::alloc_open_call(vm, context[61]);
    refalrts::alloc_name(vm, context[63], functions[efunc_gen_OpenEChain_S2C1]);
    refalrts::alloc_open_call(vm, context[64]);
    refalrts::alloc_name(vm, context[65], functions[efunc_NewVarName]);
    refalrts::alloc_open_bracket(vm, context[66]);
    refalrts::copy_evar(vm, context[67], context[68], context[49], context[50]);
    refalrts::alloc_close_bracket(vm, context[69]);
    refalrts::alloc_char(vm, context[70], 'e');
    refalrts::alloc_number(vm, context[71], 0UL);
    refalrts::alloc_open_bracket(vm, context[72]);
    refalrts::alloc_chars(vm, context[73], context[74], "Other", 5);
    refalrts::alloc_close_bracket(vm, context[75]);
    refalrts::alloc_close_call(vm, context[76]);
    refalrts::alloc_close_call(vm, context[62]);
    refalrts::push_stack( vm, context[62] );
    refalrts::push_stack( vm, context[61] );
    res = refalrts::splice_elem( res, context[62] );
    refalrts::push_stack( vm, context[76] );
    refalrts::push_stack( vm, context[64] );
    res = refalrts::splice_elem( res, context[76] );
    refalrts::link_brackets( context[72], context[75] );
    res = refalrts::splice_elem( res, context[75] );
    res = refalrts::splice_evar( res, context[73], context[74] );
    res = refalrts::splice_elem( res, context[72] );
    res = refalrts::splice_elem( res, context[71] );
    res = refalrts::splice_elem( res, context[70] );
    refalrts::link_brackets( context[66], context[69] );
    res = refalrts::splice_elem( res, context[69] );
    res = refalrts::splice_evar( res, context[67], context[68] );
    res = refalrts::splice_elem( res, context[66] );
    res = refalrts::splice_elem( res, context[65] );
    res = refalrts::splice_elem( res, context[64] );
    res = refalrts::splice_elem( res, context[63] );
    res = refalrts::splice_elem( res, context[61] );
    refalrts::use( res );
    refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
    if (rec_res != refalrts::cSuccess)
      return rec_res;
    refalrts::this_is_generated_function(vm);
    do {
      // </61 & OpenEChain$2?1/65 (/68 e.NewVarNames#2/66 )/69 e.eOther#2/63 >/62
      context[63] = 0;
      context[64] = 0;
      context[65] = refalrts::call_left( context[63], context[64], context[61], context[62] );
      context[66] = 0;
      context[67] = 0;
      context[68] = refalrts::brackets_left( context[66], context[67], context[63], context[64] );
      if( ! context[68] )
        continue;
      refalrts::bracket_pointers(context[68], context[69]);
      // closed e.NewVarNames#2 as range 66
      // closed e.eOther#2 as range 63
      //DEBUG: e.ConditionName#1: 47
      //DEBUG: e.VarNames#1: 49
      //DEBUG: e.ContName#1: 59
      //DEBUG: e.CheckFunction#1: 51
      //DEBUG: e.PatternVarsAsExpr#1: 53
      //DEBUG: e.CondResult#1: 55
      //DEBUG: e.T0#1: 57
      //DEBUG: e.NewVarNames#2: 66
      //DEBUG: e.eOther#2: 63

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} e.ConditionName#1/47 )/8 (/11 e.VarNames#1/49 )/12 (/13 {REMOVED TILE} )/14 {REMOVED TILE} e.CheckFunction#1/51 {REMOVED TILE} e.CondResult#1/55 {REMOVED TILE} {REMOVED TILE} (/68 e.NewVarNames#2/66 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/17 } Tile{ HalfReuse: (/18 AsIs: (/21 AsIs: e.PatternVarsAsExpr#1/53 HalfReuse: (/22 HalfReuse: # TkVariable/25 } Tile{ AsIs: e.eOther#2/63 } Tile{ AsIs: )/69 } Tile{ AsIs: )/26 AsIs: (/29 } Tile{ HalfReuse: (/0 HalfReuse: # CallBrackets/4 AsIs: (/7 } Tile{ HalfReuse: # Symbol/62 HalfReuse: # Name/1 } Tile{ AsIs: e.ContName#1/59 } Tile{ HalfReuse: )/33 AsIs: e.T0#1/57 AsIs: )/34 AsIs: )/30 HalfReuse: )/61 HalfReuse: )/65 } Tile{ ]] }
      refalrts::reinit_open_bracket(context[18]);
      refalrts::reinit_open_bracket(context[22]);
      refalrts::reinit_ident(context[25], identifiers[ident_TkVariable]);
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_ident(context[4], identifiers[ident_CallBrackets]);
      refalrts::reinit_ident(context[62], identifiers[ident_Symbol]);
      refalrts::reinit_ident(context[1], identifiers[ident_Name]);
      refalrts::reinit_close_bracket(context[33]);
      refalrts::reinit_close_bracket(context[61]);
      refalrts::reinit_close_bracket(context[65]);
      refalrts::link_brackets( context[17], context[65] );
      refalrts::link_brackets( context[18], context[61] );
      refalrts::link_brackets( context[29], context[30] );
      refalrts::link_brackets( context[0], context[34] );
      refalrts::link_brackets( context[7], context[33] );
      refalrts::link_brackets( context[21], context[26] );
      refalrts::link_brackets( context[22], context[69] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[33], context[65] );
      res = refalrts::splice_evar( res, context[59], context[60] );
      res = refalrts::splice_evar( res, context[62], context[1] );
      res = refalrts::splice_evar( res, context[0], context[7] );
      res = refalrts::splice_evar( res, context[26], context[29] );
      res = refalrts::splice_evar( res, context[69], context[69] );
      res = refalrts::splice_evar( res, context[63], context[64] );
      res = refalrts::splice_evar( res, context[18], context[25] );
      res = refalrts::splice_evar( res, context[17], context[17] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    refalrts::splice_to_freelist(vm, context[61], context[62]);
    continue;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & OpenEChain/4 (/7 e.ConditionName#1/5 )/8 (/11 e.VarNames#1/9 )/12 t.ContName#1/13 (/17 e.CheckFunction#1/15 )/18 (/21 e.PatternVarsAsExpr#1/19 )/22 (/25 e.CondResult#1/23 )/26 (/29 (/33 e.T0#1/31 )/34 )/30 e.Templates#1/2 >/1
  // closed e.ConditionName#1 as range 5
  // closed e.VarNames#1 as range 9
  // closed e.CheckFunction#1 as range 15
  // closed e.PatternVarsAsExpr#1 as range 19
  // closed e.CondResult#1 as range 23
  // closed e.T0#1 as range 31
  // closed e.Templates#1 as range 2
  //DEBUG: t.ContName#1: 13
  //DEBUG: e.ConditionName#1: 5
  //DEBUG: e.VarNames#1: 9
  //DEBUG: e.CheckFunction#1: 15
  //DEBUG: e.PatternVarsAsExpr#1: 19
  //DEBUG: e.CondResult#1: 23
  //DEBUG: e.T0#1: 31
  //DEBUG: e.Templates#1: 2
  //2: e.Templates#1
  //5: e.ConditionName#1
  //9: e.VarNames#1
  //13: t.ContName#1
  //15: e.CheckFunction#1
  //19: e.PatternVarsAsExpr#1
  //23: e.CondResult#1
  //31: e.T0#1
  //38: e.ConditionName#1

  refalrts::reset_allocator(vm);
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::alloc_open_call(vm, context[35]);
  refalrts::alloc_name(vm, context[37], functions[efunc_gen_OpenEChain_S3C1]);
  refalrts::copy_evar(vm, context[38], context[39], context[5], context[6]);
  refalrts::alloc_char(vm, context[40], '?');
  refalrts::alloc_number(vm, context[41], 2UL);
  refalrts::alloc_close_call(vm, context[36]);
  refalrts::push_stack( vm, context[36] );
  refalrts::push_stack( vm, context[35] );
  res = refalrts::splice_elem( res, context[36] );
  res = refalrts::splice_elem( res, context[41] );
  res = refalrts::splice_elem( res, context[40] );
  res = refalrts::splice_evar( res, context[38], context[39] );
  res = refalrts::splice_elem( res, context[37] );
  res = refalrts::splice_elem( res, context[35] );
  refalrts::use( res );
  refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
  if (rec_res != refalrts::cSuccess)
    return rec_res;
  refalrts::this_is_generated_function(vm);
  do {
    // </35 & OpenEChain$3?1/39 e.NextForward#2/37 >/36
    context[37] = 0;
    context[38] = 0;
    context[39] = refalrts::call_left( context[37], context[38], context[35], context[36] );
    // closed e.NextForward#2 as range 37
    //DEBUG: t.ContName#1: 13
    //DEBUG: e.ConditionName#1: 5
    //DEBUG: e.VarNames#1: 9
    //DEBUG: e.CheckFunction#1: 15
    //DEBUG: e.PatternVarsAsExpr#1: 19
    //DEBUG: e.CondResult#1: 23
    //DEBUG: e.T0#1: 31
    //DEBUG: e.Templates#1: 2
    //DEBUG: e.NextForward#2: 37
    //2: e.Templates#1
    //5: e.ConditionName#1
    //9: e.VarNames#1
    //13: t.ContName#1
    //15: e.CheckFunction#1
    //19: e.PatternVarsAsExpr#1
    //23: e.CondResult#1
    //31: e.T0#1
    //37: e.NextForward#2
    //46: e.ConditionName#1
    //51: e.NextForward#2
    //54: t.ContName#1
    //56: e.CheckFunction#1
    //60: e.PatternVarsAsExpr#1
    //62: e.CondResult#1
    //67: e.Templates#1

    refalrts::reset_allocator(vm);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::alloc_open_call(vm, context[40]);
    refalrts::alloc_name(vm, context[42], functions[efunc_gen_OpenEChain_S3C2]);
    refalrts::alloc_open_call(vm, context[43]);
    refalrts::alloc_name(vm, context[44], functions[efunc_DoOpenEChain]);
    refalrts::alloc_open_bracket(vm, context[45]);
    refalrts::copy_evar(vm, context[46], context[47], context[5], context[6]);
    refalrts::alloc_close_bracket(vm, context[48]);
    refalrts::alloc_number(vm, context[49], 2UL);
    refalrts::alloc_open_bracket(vm, context[50]);
    refalrts::copy_evar(vm, context[51], context[52], context[37], context[38]);
    refalrts::alloc_close_bracket(vm, context[53]);
    refalrts::copy_stvar(vm, context[54], context[13]);
    refalrts::alloc_open_bracket(vm, context[55]);
    refalrts::copy_evar(vm, context[56], context[57], context[15], context[16]);
    refalrts::alloc_close_bracket(vm, context[58]);
    refalrts::alloc_open_bracket(vm, context[59]);
    refalrts::copy_evar(vm, context[60], context[61], context[19], context[20]);
    refalrts::copy_evar(vm, context[62], context[63], context[23], context[24]);
    refalrts::alloc_close_bracket(vm, context[64]);
    refalrts::alloc_open_bracket(vm, context[65]);
    refalrts::alloc_close_bracket(vm, context[66]);
    refalrts::copy_evar(vm, context[67], context[68], context[2], context[3]);
    refalrts::alloc_close_call(vm, context[69]);
    refalrts::alloc_close_call(vm, context[41]);
    refalrts::push_stack( vm, context[41] );
    refalrts::push_stack( vm, context[40] );
    res = refalrts::splice_elem( res, context[41] );
    refalrts::push_stack( vm, context[69] );
    refalrts::push_stack( vm, context[43] );
    res = refalrts::splice_elem( res, context[69] );
    res = refalrts::splice_evar( res, context[67], context[68] );
    refalrts::link_brackets( context[65], context[66] );
    res = refalrts::splice_elem( res, context[66] );
    res = refalrts::splice_elem( res, context[65] );
    refalrts::link_brackets( context[59], context[64] );
    res = refalrts::splice_elem( res, context[64] );
    res = refalrts::splice_evar( res, context[62], context[63] );
    res = refalrts::splice_evar( res, context[60], context[61] );
    res = refalrts::splice_elem( res, context[59] );
    refalrts::link_brackets( context[55], context[58] );
    res = refalrts::splice_elem( res, context[58] );
    res = refalrts::splice_evar( res, context[56], context[57] );
    res = refalrts::splice_elem( res, context[55] );
    res = refalrts::splice_stvar( res, context[54] );
    refalrts::link_brackets( context[50], context[53] );
    res = refalrts::splice_elem( res, context[53] );
    res = refalrts::splice_evar( res, context[51], context[52] );
    res = refalrts::splice_elem( res, context[50] );
    res = refalrts::splice_elem( res, context[49] );
    refalrts::link_brackets( context[45], context[48] );
    res = refalrts::splice_elem( res, context[48] );
    res = refalrts::splice_evar( res, context[46], context[47] );
    res = refalrts::splice_elem( res, context[45] );
    res = refalrts::splice_elem( res, context[44] );
    res = refalrts::splice_elem( res, context[43] );
    res = refalrts::splice_elem( res, context[42] );
    res = refalrts::splice_elem( res, context[40] );
    refalrts::use( res );
    refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
    if (rec_res != refalrts::cSuccess)
      return rec_res;
    refalrts::this_is_generated_function(vm);
    do {
      // </40 & OpenEChain$3?2/44 e.NewFunctions#3/42 >/41
      context[42] = 0;
      context[43] = 0;
      context[44] = refalrts::call_left( context[42], context[43], context[40], context[41] );
      // closed e.NewFunctions#3 as range 42
      //DEBUG: t.ContName#1: 13
      //DEBUG: e.ConditionName#1: 5
      //DEBUG: e.VarNames#1: 9
      //DEBUG: e.CheckFunction#1: 15
      //DEBUG: e.PatternVarsAsExpr#1: 19
      //DEBUG: e.CondResult#1: 23
      //DEBUG: e.T0#1: 31
      //DEBUG: e.Templates#1: 2
      //DEBUG: e.NextForward#2: 37
      //DEBUG: e.NewFunctions#3: 42
      //2: e.Templates#1
      //5: e.ConditionName#1
      //9: e.VarNames#1
      //13: t.ContName#1
      //15: e.CheckFunction#1
      //19: e.PatternVarsAsExpr#1
      //23: e.CondResult#1
      //31: e.T0#1
      //37: e.NextForward#2
      //42: e.NewFunctions#3
      //51: e.VarNames#1

      refalrts::reset_allocator(vm);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::alloc_open_call(vm, context[45]);
      refalrts::alloc_name(vm, context[47], functions[efunc_gen_OpenEChain_S3C3]);
      refalrts::alloc_open_call(vm, context[48]);
      refalrts::alloc_name(vm, context[49], functions[efunc_NewVarName]);
      refalrts::alloc_open_bracket(vm, context[50]);
      refalrts::copy_evar(vm, context[51], context[52], context[9], context[10]);
      refalrts::alloc_close_bracket(vm, context[53]);
      refalrts::alloc_char(vm, context[54], 'e');
      refalrts::alloc_number(vm, context[55], 0UL);
      refalrts::alloc_open_bracket(vm, context[56]);
      refalrts::alloc_chars(vm, context[57], context[58], "Other", 5);
      refalrts::alloc_close_bracket(vm, context[59]);
      refalrts::alloc_close_call(vm, context[60]);
      refalrts::alloc_close_call(vm, context[46]);
      refalrts::push_stack( vm, context[46] );
      refalrts::push_stack( vm, context[45] );
      res = refalrts::splice_elem( res, context[46] );
      refalrts::push_stack( vm, context[60] );
      refalrts::push_stack( vm, context[48] );
      res = refalrts::splice_elem( res, context[60] );
      refalrts::link_brackets( context[56], context[59] );
      res = refalrts::splice_elem( res, context[59] );
      res = refalrts::splice_evar( res, context[57], context[58] );
      res = refalrts::splice_elem( res, context[56] );
      res = refalrts::splice_elem( res, context[55] );
      res = refalrts::splice_elem( res, context[54] );
      refalrts::link_brackets( context[50], context[53] );
      res = refalrts::splice_elem( res, context[53] );
      res = refalrts::splice_evar( res, context[51], context[52] );
      res = refalrts::splice_elem( res, context[50] );
      res = refalrts::splice_elem( res, context[49] );
      res = refalrts::splice_elem( res, context[48] );
      res = refalrts::splice_elem( res, context[47] );
      res = refalrts::splice_elem( res, context[45] );
      refalrts::use( res );
      refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
      if (rec_res != refalrts::cSuccess)
        return rec_res;
      refalrts::this_is_generated_function(vm);
      do {
        // </45 & OpenEChain$3?3/49 (/52 e.NewVarNames#4/50 )/53 e.eOther#4/47 >/46
        context[47] = 0;
        context[48] = 0;
        context[49] = refalrts::call_left( context[47], context[48], context[45], context[46] );
        context[50] = 0;
        context[51] = 0;
        context[52] = refalrts::brackets_left( context[50], context[51], context[47], context[48] );
        if( ! context[52] )
          continue;
        refalrts::bracket_pointers(context[52], context[53]);
        // closed e.NewVarNames#4 as range 50
        // closed e.eOther#4 as range 47
        //DEBUG: t.ContName#1: 13
        //DEBUG: e.ConditionName#1: 5
        //DEBUG: e.VarNames#1: 9
        //DEBUG: e.CheckFunction#1: 15
        //DEBUG: e.PatternVarsAsExpr#1: 19
        //DEBUG: e.CondResult#1: 23
        //DEBUG: e.T0#1: 31
        //DEBUG: e.Templates#1: 2
        //DEBUG: e.NextForward#2: 37
        //DEBUG: e.NewFunctions#3: 42
        //DEBUG: e.NewVarNames#4: 50
        //DEBUG: e.eOther#4: 47

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} & OpenEChain/4 (/7 e.ConditionName#1/5 {REMOVED TILE} e.VarNames#1/9 )/12 t.ContName#1/13 (/17 e.CheckFunction#1/15 {REMOVED TILE} e.CondResult#1/23 {REMOVED TILE} {REMOVED TILE} e.Templates#1/2 </35 & OpenEChain$3?1/39 {REMOVED TILE} >/36 </40 & OpenEChain$3?2/44 {REMOVED TILE} {REMOVED TILE} e.NewVarNames#4/50 )/53 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ HalfReuse: (/18 AsIs: (/21 AsIs: e.PatternVarsAsExpr#1/19 HalfReuse: (/22 HalfReuse: # TkVariable/25 } Tile{ AsIs: e.eOther#4/47 } Tile{ AsIs: )/26 HalfReuse: )/29 } Tile{ HalfReuse: (/41 HalfReuse: (/45 HalfReuse: # CallBrackets/49 AsIs: (/52 } Tile{ HalfReuse: # Symbol/46 HalfReuse: # Name/1 } Tile{ AsIs: e.NextForward#2/37 } Tile{ HalfReuse: )/33 AsIs: e.T0#1/31 AsIs: )/34 AsIs: )/30 } Tile{ AsIs: )/8 HalfReuse: )/11 } Tile{ AsIs: e.NewFunctions#3/42 } Tile{ ]] }
        refalrts::reinit_open_bracket(context[0]);
        refalrts::reinit_open_bracket(context[18]);
        refalrts::reinit_open_bracket(context[22]);
        refalrts::reinit_ident(context[25], identifiers[ident_TkVariable]);
        refalrts::reinit_close_bracket(context[29]);
        refalrts::reinit_open_bracket(context[41]);
        refalrts::reinit_open_bracket(context[45]);
        refalrts::reinit_ident(context[49], identifiers[ident_CallBrackets]);
        refalrts::reinit_ident(context[46], identifiers[ident_Symbol]);
        refalrts::reinit_ident(context[1], identifiers[ident_Name]);
        refalrts::reinit_close_bracket(context[33]);
        refalrts::reinit_close_bracket(context[11]);
        refalrts::link_brackets( context[0], context[11] );
        refalrts::link_brackets( context[18], context[8] );
        refalrts::link_brackets( context[41], context[30] );
        refalrts::link_brackets( context[45], context[34] );
        refalrts::link_brackets( context[52], context[33] );
        refalrts::link_brackets( context[21], context[29] );
        refalrts::link_brackets( context[22], context[26] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[42], context[43] );
        res = refalrts::splice_evar( res, context[8], context[11] );
        res = refalrts::splice_evar( res, context[33], context[30] );
        res = refalrts::splice_evar( res, context[37], context[38] );
        res = refalrts::splice_evar( res, context[46], context[1] );
        res = refalrts::splice_evar( res, context[41], context[52] );
        res = refalrts::splice_evar( res, context[26], context[29] );
        res = refalrts::splice_evar( res, context[47], context[48] );
        res = refalrts::splice_evar( res, context[18], context[25] );
        refalrts::splice_to_freelist_open( vm, context[0], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      refalrts::splice_to_freelist(vm, context[45], context[46]);
      continue;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    refalrts::splice_to_freelist(vm, context[40], context[41]);
    continue;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  refalrts::splice_to_freelist(vm, context[35], context[36]);
  return refalrts::cRecognitionImpossible;
}

static refalrts::NativeReference nat_ref_OpenEChain("OpenEChain", 1097634219U, 507462218U, func_OpenEChain);


static refalrts::FnResult func_DoOpenEChain(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 72 elems
  refalrts::Iter context[72];
  refalrts::zeros( context, 72 );
  // </0 & DoOpenEChain/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DoOpenEChain/4 (/7 e.new#1/5 )/8 s.new#2/9 (/12 e.new#3/10 )/13 t.new#4/14 (/18 e.new#5/16 )/19 (/22 e.new#6/20 )/23 (/26 e.new#7/24 )/27 (/30 e.new#8/28 )/31 e.new#9/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[10] = 0;
  context[11] = 0;
  context[12] = refalrts::brackets_left( context[10], context[11], context[2], context[3] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[12], context[13]);
  // closed e.new#3 as range 10
  context[15] = refalrts::tvar_left( context[14], context[2], context[3] );
  if( ! context[15] )
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
  context[28] = 0;
  context[29] = 0;
  context[30] = refalrts::brackets_left( context[28], context[29], context[2], context[3] );
  if( ! context[30] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[30], context[31]);
  // closed e.new#5 as range 16
  // closed e.new#6 as range 20
  // closed e.new#7 as range 24
  // closed e.new#8 as range 28
  // closed e.new#9 as range 2
  do {
    // </0 & DoOpenEChain/4 (/7 e.ConditionName#1/32 )/8 s.CurrentForwardId#1/9 (/12 e.CurrentForward#1/34 )/13 t.ContName#1/14 (/18 e.CheckFunction#1/36 )/19 (/22 e.CheckFunctionArg#1/38 )/23 (/26 e.GeneratedFunctions#1/40 )/27 (/30 e.TemplateSet#1/42 )/31 >/1
    context[32] = context[5];
    context[33] = context[6];
    context[34] = context[10];
    context[35] = context[11];
    context[36] = context[16];
    context[37] = context[17];
    context[38] = context[20];
    context[39] = context[21];
    context[40] = context[24];
    context[41] = context[25];
    context[42] = context[28];
    context[43] = context[29];
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.ConditionName#1 as range 32
    // closed e.CurrentForward#1 as range 34
    // closed e.CheckFunction#1 as range 36
    // closed e.CheckFunctionArg#1 as range 38
    // closed e.GeneratedFunctions#1 as range 40
    // closed e.TemplateSet#1 as range 42
    //DEBUG: t.ContName#1: 14
    //DEBUG: s.CurrentForwardId#1: 9
    //DEBUG: e.ConditionName#1: 32
    //DEBUG: e.CurrentForward#1: 34
    //DEBUG: e.CheckFunction#1: 36
    //DEBUG: e.CheckFunctionArg#1: 38
    //DEBUG: e.GeneratedFunctions#1: 40
    //DEBUG: e.TemplateSet#1: 42
    //9: s.CurrentForwardId#1
    //14: t.ContName#1
    //32: e.ConditionName#1
    //34: e.CurrentForward#1
    //36: e.CheckFunction#1
    //38: e.CheckFunctionArg#1
    //40: e.GeneratedFunctions#1
    //42: e.TemplateSet#1
    //50: e.ConditionName#1
    //53: s.CurrentForwardId#1
    //55: e.CurrentForward#1
    //58: t.ContName#1
    //60: e.CheckFunction#1
    //64: e.CheckFunctionArg#1
    //67: e.TemplateSet#1

    refalrts::reset_allocator(vm);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::alloc_open_call(vm, context[44]);
    refalrts::alloc_name(vm, context[46], functions[efunc_gen_DoOpenEChain_S1C1]);
    refalrts::alloc_open_call(vm, context[47]);
    refalrts::alloc_name(vm, context[48], functions[efunc_MakeOpenEm_ForwardNext]);
    refalrts::alloc_open_bracket(vm, context[49]);
    refalrts::copy_evar(vm, context[50], context[51], context[32], context[33]);
    refalrts::alloc_close_bracket(vm, context[52]);
    refalrts::copy_stvar(vm, context[53], context[9]);
    refalrts::alloc_open_bracket(vm, context[54]);
    refalrts::copy_evar(vm, context[55], context[56], context[34], context[35]);
    refalrts::alloc_close_bracket(vm, context[57]);
    refalrts::copy_stvar(vm, context[58], context[14]);
    refalrts::alloc_open_bracket(vm, context[59]);
    refalrts::copy_evar(vm, context[60], context[61], context[36], context[37]);
    refalrts::alloc_close_bracket(vm, context[62]);
    refalrts::alloc_open_bracket(vm, context[63]);
    refalrts::copy_evar(vm, context[64], context[65], context[38], context[39]);
    refalrts::alloc_close_bracket(vm, context[66]);
    refalrts::copy_evar(vm, context[67], context[68], context[42], context[43]);
    refalrts::alloc_close_call(vm, context[69]);
    refalrts::alloc_close_call(vm, context[45]);
    refalrts::push_stack( vm, context[45] );
    refalrts::push_stack( vm, context[44] );
    res = refalrts::splice_elem( res, context[45] );
    refalrts::push_stack( vm, context[69] );
    refalrts::push_stack( vm, context[47] );
    res = refalrts::splice_elem( res, context[69] );
    res = refalrts::splice_evar( res, context[67], context[68] );
    refalrts::link_brackets( context[63], context[66] );
    res = refalrts::splice_elem( res, context[66] );
    res = refalrts::splice_evar( res, context[64], context[65] );
    res = refalrts::splice_elem( res, context[63] );
    refalrts::link_brackets( context[59], context[62] );
    res = refalrts::splice_elem( res, context[62] );
    res = refalrts::splice_evar( res, context[60], context[61] );
    res = refalrts::splice_elem( res, context[59] );
    res = refalrts::splice_stvar( res, context[58] );
    refalrts::link_brackets( context[54], context[57] );
    res = refalrts::splice_elem( res, context[57] );
    res = refalrts::splice_evar( res, context[55], context[56] );
    res = refalrts::splice_elem( res, context[54] );
    res = refalrts::splice_stvar( res, context[53] );
    refalrts::link_brackets( context[49], context[52] );
    res = refalrts::splice_elem( res, context[52] );
    res = refalrts::splice_evar( res, context[50], context[51] );
    res = refalrts::splice_elem( res, context[49] );
    res = refalrts::splice_elem( res, context[48] );
    res = refalrts::splice_elem( res, context[47] );
    res = refalrts::splice_elem( res, context[46] );
    res = refalrts::splice_elem( res, context[44] );
    refalrts::use( res );
    refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
    if (rec_res != refalrts::cSuccess)
      return rec_res;
    refalrts::this_is_generated_function(vm);
    do {
      // </44 & DoOpenEChain$1?1/48 e.NewFunctions#2/46 >/45
      context[46] = 0;
      context[47] = 0;
      context[48] = refalrts::call_left( context[46], context[47], context[44], context[45] );
      // closed e.NewFunctions#2 as range 46
      //DEBUG: t.ContName#1: 14
      //DEBUG: s.CurrentForwardId#1: 9
      //DEBUG: e.ConditionName#1: 32
      //DEBUG: e.CurrentForward#1: 34
      //DEBUG: e.CheckFunction#1: 36
      //DEBUG: e.CheckFunctionArg#1: 38
      //DEBUG: e.GeneratedFunctions#1: 40
      //DEBUG: e.TemplateSet#1: 42
      //DEBUG: e.NewFunctions#2: 46

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & DoOpenEChain/4 (/7 e.ConditionName#1/32 )/8 s.CurrentForwardId#1/9 (/12 e.CurrentForward#1/34 )/13 t.ContName#1/14 (/18 e.CheckFunction#1/36 )/19 (/22 e.CheckFunctionArg#1/38 )/23 (/26 {REMOVED TILE} )/27 (/30 e.TemplateSet#1/42 )/31 </44 & DoOpenEChain$1?1/48 {REMOVED TILE} >/45 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: e.GeneratedFunctions#1/40 } Tile{ AsIs: e.NewFunctions#2/46 } Tile{ ]] }
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[46], context[47] );
      res = refalrts::splice_evar( res, context[40], context[41] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    refalrts::splice_to_freelist(vm, context[44], context[45]);
    continue;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoOpenEChain/4 (/7 e.ConditionName#1/5 )/8 s.CurrentForwardId#1/9 (/12 e.CurrentForward#1/10 )/13 t.ContName#1/14 (/18 e.CheckFunction#1/16 )/19 (/22 e.CheckFunctionArg#1/20 )/23 (/26 e.GeneratedFunctions#1/24 )/27 (/30 e.TemplateSet#1/28 )/31 e.TemplateSets#1/2 >/1
  // closed e.ConditionName#1 as range 5
  // closed e.CurrentForward#1 as range 10
  // closed e.CheckFunction#1 as range 16
  // closed e.CheckFunctionArg#1 as range 20
  // closed e.GeneratedFunctions#1 as range 24
  // closed e.TemplateSet#1 as range 28
  // closed e.TemplateSets#1 as range 2
  //DEBUG: t.ContName#1: 14
  //DEBUG: s.CurrentForwardId#1: 9
  //DEBUG: e.ConditionName#1: 5
  //DEBUG: e.CurrentForward#1: 10
  //DEBUG: e.CheckFunction#1: 16
  //DEBUG: e.CheckFunctionArg#1: 20
  //DEBUG: e.GeneratedFunctions#1: 24
  //DEBUG: e.TemplateSet#1: 28
  //DEBUG: e.TemplateSets#1: 2
  //2: e.TemplateSets#1
  //5: e.ConditionName#1
  //9: s.CurrentForwardId#1
  //10: e.CurrentForward#1
  //14: t.ContName#1
  //16: e.CheckFunction#1
  //20: e.CheckFunctionArg#1
  //24: e.GeneratedFunctions#1
  //28: e.TemplateSet#1
  //38: s.CurrentForwardId#1

  refalrts::reset_allocator(vm);
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::alloc_open_call(vm, context[32]);
  refalrts::alloc_name(vm, context[34], functions[efunc_gen_DoOpenEChain_S2C1]);
  refalrts::alloc_open_call(vm, context[35]);
  refalrts::alloc_name(vm, context[36], functions[efunc_Add]);
  refalrts::alloc_number(vm, context[37], 2UL);
  refalrts::copy_stvar(vm, context[38], context[9]);
  refalrts::alloc_close_call(vm, context[39]);
  refalrts::alloc_close_call(vm, context[33]);
  refalrts::push_stack( vm, context[33] );
  refalrts::push_stack( vm, context[32] );
  res = refalrts::splice_elem( res, context[33] );
  refalrts::push_stack( vm, context[39] );
  refalrts::push_stack( vm, context[35] );
  res = refalrts::splice_elem( res, context[39] );
  res = refalrts::splice_stvar( res, context[38] );
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
    // </32 & DoOpenEChain$2?1/36 s.NextForwardId#2/37 >/33
    context[34] = 0;
    context[35] = 0;
    context[36] = refalrts::call_left( context[34], context[35], context[32], context[33] );
    if( ! refalrts::svar_left( context[37], context[34], context[35] ) )
      continue;
    if( ! refalrts::empty_seq( context[34], context[35] ) )
      continue;
    //DEBUG: t.ContName#1: 14
    //DEBUG: s.CurrentForwardId#1: 9
    //DEBUG: e.ConditionName#1: 5
    //DEBUG: e.CurrentForward#1: 10
    //DEBUG: e.CheckFunction#1: 16
    //DEBUG: e.CheckFunctionArg#1: 20
    //DEBUG: e.GeneratedFunctions#1: 24
    //DEBUG: e.TemplateSet#1: 28
    //DEBUG: e.TemplateSets#1: 2
    //DEBUG: s.NextForwardId#2: 37
    //2: e.TemplateSets#1
    //5: e.ConditionName#1
    //9: s.CurrentForwardId#1
    //10: e.CurrentForward#1
    //14: t.ContName#1
    //16: e.CheckFunction#1
    //20: e.CheckFunctionArg#1
    //24: e.GeneratedFunctions#1
    //28: e.TemplateSet#1
    //37: s.NextForwardId#2
    //41: e.ConditionName#1
    //44: s.NextForwardId#2

    refalrts::reset_allocator(vm);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::alloc_open_call(vm, context[38]);
    refalrts::alloc_name(vm, context[40], functions[efunc_gen_DoOpenEChain_S2C2]);
    refalrts::copy_evar(vm, context[41], context[42], context[5], context[6]);
    refalrts::alloc_char(vm, context[43], '?');
    refalrts::copy_stvar(vm, context[44], context[37]);
    refalrts::alloc_close_call(vm, context[39]);
    refalrts::push_stack( vm, context[39] );
    refalrts::push_stack( vm, context[38] );
    res = refalrts::splice_elem( res, context[39] );
    res = refalrts::splice_stvar( res, context[44] );
    res = refalrts::splice_elem( res, context[43] );
    res = refalrts::splice_evar( res, context[41], context[42] );
    res = refalrts::splice_elem( res, context[40] );
    res = refalrts::splice_elem( res, context[38] );
    refalrts::use( res );
    refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
    if (rec_res != refalrts::cSuccess)
      return rec_res;
    refalrts::this_is_generated_function(vm);
    do {
      // </38 & DoOpenEChain$2?2/42 e.NextForward#3/40 >/39
      context[40] = 0;
      context[41] = 0;
      context[42] = refalrts::call_left( context[40], context[41], context[38], context[39] );
      // closed e.NextForward#3 as range 40
      //DEBUG: t.ContName#1: 14
      //DEBUG: s.CurrentForwardId#1: 9
      //DEBUG: e.ConditionName#1: 5
      //DEBUG: e.CurrentForward#1: 10
      //DEBUG: e.CheckFunction#1: 16
      //DEBUG: e.CheckFunctionArg#1: 20
      //DEBUG: e.GeneratedFunctions#1: 24
      //DEBUG: e.TemplateSet#1: 28
      //DEBUG: e.TemplateSets#1: 2
      //DEBUG: s.NextForwardId#2: 37
      //DEBUG: e.NextForward#3: 40
      //2: e.TemplateSets#1
      //5: e.ConditionName#1
      //9: s.CurrentForwardId#1
      //10: e.CurrentForward#1
      //14: t.ContName#1
      //16: e.CheckFunction#1
      //20: e.CheckFunctionArg#1
      //24: e.GeneratedFunctions#1
      //28: e.TemplateSet#1
      //37: s.NextForwardId#2
      //40: e.NextForward#3
      //49: e.ConditionName#1
      //52: s.CurrentForwardId#1
      //54: e.CurrentForward#1
      //58: e.NextForward#3
      //62: e.CheckFunction#1
      //66: e.CheckFunctionArg#1
      //69: e.TemplateSet#1

      refalrts::reset_allocator(vm);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::alloc_open_call(vm, context[43]);
      refalrts::alloc_name(vm, context[45], functions[efunc_gen_DoOpenEChain_S2C3]);
      refalrts::alloc_open_call(vm, context[46]);
      refalrts::alloc_name(vm, context[47], functions[efunc_MakeOpenEm_ForwardNext]);
      refalrts::alloc_open_bracket(vm, context[48]);
      refalrts::copy_evar(vm, context[49], context[50], context[5], context[6]);
      refalrts::alloc_close_bracket(vm, context[51]);
      refalrts::copy_stvar(vm, context[52], context[9]);
      refalrts::alloc_open_bracket(vm, context[53]);
      refalrts::copy_evar(vm, context[54], context[55], context[10], context[11]);
      refalrts::alloc_close_bracket(vm, context[56]);
      refalrts::alloc_open_bracket(vm, context[57]);
      refalrts::copy_evar(vm, context[58], context[59], context[40], context[41]);
      refalrts::alloc_close_bracket(vm, context[60]);
      refalrts::alloc_open_bracket(vm, context[61]);
      refalrts::copy_evar(vm, context[62], context[63], context[16], context[17]);
      refalrts::alloc_close_bracket(vm, context[64]);
      refalrts::alloc_open_bracket(vm, context[65]);
      refalrts::copy_evar(vm, context[66], context[67], context[20], context[21]);
      refalrts::alloc_close_bracket(vm, context[68]);
      refalrts::copy_evar(vm, context[69], context[70], context[28], context[29]);
      refalrts::alloc_close_call(vm, context[71]);
      refalrts::alloc_close_call(vm, context[44]);
      refalrts::push_stack( vm, context[44] );
      refalrts::push_stack( vm, context[43] );
      res = refalrts::splice_elem( res, context[44] );
      refalrts::push_stack( vm, context[71] );
      refalrts::push_stack( vm, context[46] );
      res = refalrts::splice_elem( res, context[71] );
      res = refalrts::splice_evar( res, context[69], context[70] );
      refalrts::link_brackets( context[65], context[68] );
      res = refalrts::splice_elem( res, context[68] );
      res = refalrts::splice_evar( res, context[66], context[67] );
      res = refalrts::splice_elem( res, context[65] );
      refalrts::link_brackets( context[61], context[64] );
      res = refalrts::splice_elem( res, context[64] );
      res = refalrts::splice_evar( res, context[62], context[63] );
      res = refalrts::splice_elem( res, context[61] );
      refalrts::link_brackets( context[57], context[60] );
      res = refalrts::splice_elem( res, context[60] );
      res = refalrts::splice_evar( res, context[58], context[59] );
      res = refalrts::splice_elem( res, context[57] );
      refalrts::link_brackets( context[53], context[56] );
      res = refalrts::splice_elem( res, context[56] );
      res = refalrts::splice_evar( res, context[54], context[55] );
      res = refalrts::splice_elem( res, context[53] );
      res = refalrts::splice_stvar( res, context[52] );
      refalrts::link_brackets( context[48], context[51] );
      res = refalrts::splice_elem( res, context[51] );
      res = refalrts::splice_evar( res, context[49], context[50] );
      res = refalrts::splice_elem( res, context[48] );
      res = refalrts::splice_elem( res, context[47] );
      res = refalrts::splice_elem( res, context[46] );
      res = refalrts::splice_elem( res, context[45] );
      res = refalrts::splice_elem( res, context[43] );
      refalrts::use( res );
      refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
      if (rec_res != refalrts::cSuccess)
        return rec_res;
      refalrts::this_is_generated_function(vm);
      do {
        // </43 & DoOpenEChain$2?3/47 e.NewFunctions#4/45 >/44
        context[45] = 0;
        context[46] = 0;
        context[47] = refalrts::call_left( context[45], context[46], context[43], context[44] );
        // closed e.NewFunctions#4 as range 45
        //DEBUG: t.ContName#1: 14
        //DEBUG: s.CurrentForwardId#1: 9
        //DEBUG: e.ConditionName#1: 5
        //DEBUG: e.CurrentForward#1: 10
        //DEBUG: e.CheckFunction#1: 16
        //DEBUG: e.CheckFunctionArg#1: 20
        //DEBUG: e.GeneratedFunctions#1: 24
        //DEBUG: e.TemplateSet#1: 28
        //DEBUG: e.TemplateSets#1: 2
        //DEBUG: s.NextForwardId#2: 37
        //DEBUG: e.NextForward#3: 40
        //DEBUG: e.NewFunctions#4: 45

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} s.CurrentForwardId#1/9 (/12 e.CurrentForward#1/10 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.TemplateSet#1/28 {REMOVED TILE} & DoOpenEChain$2?1/36 s.NextForwardId#2/37 >/33 </38 & DoOpenEChain$2?2/42 {REMOVED TILE} >/39 </43 & DoOpenEChain$2?3/47 {REMOVED TILE} >/44 >/1 {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoOpenEChain/4 AsIs: (/7 AsIs: e.ConditionName#1/5 AsIs: )/8 } Tile{ HalfReuse: s.NextForwardId2 #37/27 AsIs: (/30 } Tile{ AsIs: e.NextForward#3/40 } Tile{ AsIs: )/13 AsIs: t.ContName#1/14 AsIs: (/18 AsIs: e.CheckFunction#1/16 AsIs: )/19 AsIs: (/22 AsIs: e.CheckFunctionArg#1/20 AsIs: )/23 AsIs: (/26 } Tile{ AsIs: e.GeneratedFunctions#1/24 } Tile{ AsIs: e.NewFunctions#4/45 } Tile{ AsIs: )/31 AsIs: e.TemplateSets#1/2 HalfReuse: >/32 } Tile{ ]] }
        refalrts::reinit_svar( context[27], context[37] );
        refalrts::reinit_close_call(context[32]);
        refalrts::push_stack( vm, context[32] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[26], context[31] );
        refalrts::link_brackets( context[22], context[23] );
        refalrts::link_brackets( context[18], context[19] );
        refalrts::link_brackets( context[30], context[13] );
        refalrts::link_brackets( context[7], context[8] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[31], context[32] );
        res = refalrts::splice_evar( res, context[45], context[46] );
        res = refalrts::splice_evar( res, context[24], context[25] );
        res = refalrts::splice_evar( res, context[13], context[26] );
        res = refalrts::splice_evar( res, context[40], context[41] );
        res = refalrts::splice_evar( res, context[27], context[30] );
        refalrts::splice_to_freelist_open( vm, context[8], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      refalrts::splice_to_freelist(vm, context[43], context[44]);
      continue;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    refalrts::splice_to_freelist(vm, context[38], context[39]);
    continue;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  refalrts::splice_to_freelist(vm, context[32], context[33]);
  return refalrts::cRecognitionImpossible;
}

static refalrts::NativeReference nat_ref_DoOpenEChain("DoOpenEChain", 1097634219U, 507462218U, func_DoOpenEChain);


static refalrts::FnResult func_MakeOpenEm_ForwardNext(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 87 elems
  refalrts::Iter context[87];
  refalrts::zeros( context, 87 );
  // </0 & MakeOpenE-ForwardNext/4 (/7 e.ConditionName#1/5 )/8 s.CurrentForwardId#1/49 (/52 e.CurrentForwardName#1/50 )/53 t.ContName#1/54 (/47 e.CheckFunction#1/45 )/48 (/43 e.CheckFunctionArg#1/41 )/44 (/39 e.T1#1/37 )/40 (/35 e.T2#1/33 )/36 (/31 e.T3#1/29 )/32 (/27 e.T4#1/25 )/28 (/23 e.T5#1/21 )/24 (/19 e.T5-sub#1/17 )/20 (/15 e.T6#1/13 )/16 (/11 e.T7#1/9 )/12 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
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
  context[45] = 0;
  context[46] = 0;
  context[47] = refalrts::brackets_right( context[45], context[46], context[2], context[3] );
  if( ! context[47] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[47], context[48]);
  // closed e.ConditionName#1 as range 5
  // closed e.CheckFunction#1 as range 45
  // closed e.CheckFunctionArg#1 as range 41
  // closed e.T1#1 as range 37
  // closed e.T2#1 as range 33
  // closed e.T3#1 as range 29
  // closed e.T4#1 as range 25
  // closed e.T5#1 as range 21
  // closed e.T5-sub#1 as range 17
  // closed e.T6#1 as range 13
  // closed e.T7#1 as range 9
  if( ! refalrts::svar_left( context[49], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[50] = 0;
  context[51] = 0;
  context[52] = refalrts::brackets_left( context[50], context[51], context[2], context[3] );
  if( ! context[52] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[52], context[53]);
  // closed e.CurrentForwardName#1 as range 50
  context[55] = refalrts::tvar_left( context[54], context[2], context[3] );
  if( ! context[55] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: e.ConditionName#1: 5
  //DEBUG: e.CheckFunction#1: 45
  //DEBUG: e.CheckFunctionArg#1: 41
  //DEBUG: e.T1#1: 37
  //DEBUG: e.T2#1: 33
  //DEBUG: e.T3#1: 29
  //DEBUG: e.T4#1: 25
  //DEBUG: e.T5#1: 21
  //DEBUG: e.T5-sub#1: 17
  //DEBUG: e.T6#1: 13
  //DEBUG: e.T7#1: 9
  //DEBUG: s.CurrentForwardId#1: 49
  //DEBUG: e.CurrentForwardName#1: 50
  //DEBUG: t.ContName#1: 54
  //5: e.ConditionName#1
  //9: e.T7#1
  //13: e.T6#1
  //17: e.T5-sub#1
  //21: e.T5#1
  //25: e.T4#1
  //29: e.T3#1
  //33: e.T2#1
  //37: e.T1#1
  //41: e.CheckFunctionArg#1
  //45: e.CheckFunction#1
  //49: s.CurrentForwardId#1
  //50: e.CurrentForwardName#1
  //54: t.ContName#1
  //59: e.ConditionName#1
  //65: s.CurrentForwardId#1

  refalrts::reset_allocator(vm);
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::alloc_open_call(vm, context[56]);
  refalrts::alloc_name(vm, context[58], functions[efunc_gen_MakeOpenEm_ForwardNext_C1]);
  refalrts::copy_evar(vm, context[59], context[60], context[5], context[6]);
  refalrts::alloc_char(vm, context[61], '?');
  refalrts::alloc_open_call(vm, context[62]);
  refalrts::alloc_name(vm, context[63], functions[efunc_Add]);
  refalrts::alloc_number(vm, context[64], 1UL);
  refalrts::copy_stvar(vm, context[65], context[49]);
  refalrts::alloc_close_call(vm, context[66]);
  refalrts::alloc_close_call(vm, context[57]);
  refalrts::push_stack( vm, context[57] );
  refalrts::push_stack( vm, context[56] );
  res = refalrts::splice_elem( res, context[57] );
  refalrts::push_stack( vm, context[66] );
  refalrts::push_stack( vm, context[62] );
  res = refalrts::splice_elem( res, context[66] );
  res = refalrts::splice_stvar( res, context[65] );
  res = refalrts::splice_elem( res, context[64] );
  res = refalrts::splice_elem( res, context[63] );
  res = refalrts::splice_elem( res, context[62] );
  res = refalrts::splice_elem( res, context[61] );
  res = refalrts::splice_evar( res, context[59], context[60] );
  res = refalrts::splice_elem( res, context[58] );
  res = refalrts::splice_elem( res, context[56] );
  refalrts::use( res );
  refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
  if (rec_res != refalrts::cSuccess)
    return rec_res;
  refalrts::this_is_generated_function(vm);
  do {
    // </56 & MakeOpenE-ForwardNext?1/60 e.NextName#2/58 >/57
    context[58] = 0;
    context[59] = 0;
    context[60] = refalrts::call_left( context[58], context[59], context[56], context[57] );
    // closed e.NextName#2 as range 58
    //DEBUG: e.ConditionName#1: 5
    //DEBUG: e.CheckFunction#1: 45
    //DEBUG: e.CheckFunctionArg#1: 41
    //DEBUG: e.T1#1: 37
    //DEBUG: e.T2#1: 33
    //DEBUG: e.T3#1: 29
    //DEBUG: e.T4#1: 25
    //DEBUG: e.T5#1: 21
    //DEBUG: e.T5-sub#1: 17
    //DEBUG: e.T6#1: 13
    //DEBUG: e.T7#1: 9
    //DEBUG: s.CurrentForwardId#1: 49
    //DEBUG: e.CurrentForwardName#1: 50
    //DEBUG: t.ContName#1: 54
    //DEBUG: e.NextName#2: 58
    //5: e.ConditionName#1
    //9: e.T7#1
    //13: e.T6#1
    //17: e.T5-sub#1
    //21: e.T5#1
    //25: e.T4#1
    //29: e.T3#1
    //33: e.T2#1
    //37: e.T1#1
    //41: e.CheckFunctionArg#1
    //45: e.CheckFunction#1
    //49: s.CurrentForwardId#1
    //50: e.CurrentForwardName#1
    //54: t.ContName#1
    //58: e.NextName#2
    //66: e.CheckFunctionArg#1
    //69: e.T5-sub#1

    refalrts::reset_allocator(vm);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::alloc_open_call(vm, context[61]);
    refalrts::alloc_name(vm, context[63], functions[efunc_gen_MakeOpenEm_ForwardNext_C2]);
    refalrts::alloc_open_call(vm, context[64]);
    refalrts::alloc_name(vm, context[65], functions[efunc_Substitute]);
    refalrts::copy_evar(vm, context[66], context[67], context[41], context[42]);
    refalrts::alloc_open_bracket(vm, context[68]);
    refalrts::copy_evar(vm, context[69], context[70], context[17], context[18]);
    refalrts::alloc_close_bracket(vm, context[71]);
    refalrts::alloc_close_call(vm, context[72]);
    refalrts::alloc_close_call(vm, context[62]);
    refalrts::push_stack( vm, context[62] );
    refalrts::push_stack( vm, context[61] );
    res = refalrts::splice_elem( res, context[62] );
    refalrts::push_stack( vm, context[72] );
    refalrts::push_stack( vm, context[64] );
    res = refalrts::splice_elem( res, context[72] );
    refalrts::link_brackets( context[68], context[71] );
    res = refalrts::splice_elem( res, context[71] );
    res = refalrts::splice_evar( res, context[69], context[70] );
    res = refalrts::splice_elem( res, context[68] );
    res = refalrts::splice_evar( res, context[66], context[67] );
    res = refalrts::splice_elem( res, context[65] );
    res = refalrts::splice_elem( res, context[64] );
    res = refalrts::splice_elem( res, context[63] );
    res = refalrts::splice_elem( res, context[61] );
    refalrts::use( res );
    refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
    if (rec_res != refalrts::cSuccess)
      return rec_res;
    refalrts::this_is_generated_function(vm);
    do {
      // </61 & MakeOpenE-ForwardNext?2/65 e.CheckFuncArgSubst#3/63 >/62
      context[63] = 0;
      context[64] = 0;
      context[65] = refalrts::call_left( context[63], context[64], context[61], context[62] );
      // closed e.CheckFuncArgSubst#3 as range 63
      //DEBUG: e.ConditionName#1: 5
      //DEBUG: e.CheckFunction#1: 45
      //DEBUG: e.CheckFunctionArg#1: 41
      //DEBUG: e.T1#1: 37
      //DEBUG: e.T2#1: 33
      //DEBUG: e.T3#1: 29
      //DEBUG: e.T4#1: 25
      //DEBUG: e.T5#1: 21
      //DEBUG: e.T5-sub#1: 17
      //DEBUG: e.T6#1: 13
      //DEBUG: e.T7#1: 9
      //DEBUG: s.CurrentForwardId#1: 49
      //DEBUG: e.CurrentForwardName#1: 50
      //DEBUG: t.ContName#1: 54
      //DEBUG: e.NextName#2: 58
      //DEBUG: e.CheckFuncArgSubst#3: 63

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} e.ConditionName#1/5 {REMOVED TILE} s.CurrentForwardId#1/49 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.CheckFunctionArg#1/41 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.T5-sub#1/17 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/43 } # GN-Local/66 Tile{ AsIs: (/52 AsIs: e.CurrentForwardName#1/50 AsIs: )/53 } Tile{ HalfReuse: (/44 AsIs: (/39 AsIs: e.T1#1/37 AsIs: )/40 AsIs: (/35 } Tile{ HalfReuse: (/0 HalfReuse: # CallBrackets/4 AsIs: (/7 } # Symbol/67 # Name/68 e.NextName#2/58/69 Tile{ AsIs: )/20 } Tile{ AsIs: e.T2#1/33 } Tile{ AsIs: )/8 } Tile{ AsIs: )/36 } Tile{ HalfReuse: )/57 AsIs: </61 Reuse: & MakeContinuationSentence/65 } Tile{ AsIs: t.ContName#1/54 } Tile{ AsIs: (/31 AsIs: e.T3#1/29 AsIs: )/32 AsIs: (/27 AsIs: e.T4#1/25 AsIs: )/28 HalfReuse: >/23 } )/71 (/72 # GN-Local/73 (/74 Tile{ AsIs: e.NextName#2/58 } Tile{ AsIs: )/24 AsIs: (/19 } (/75 Tile{ AsIs: e.T5#1/21 } )/76 (/77 (/78 # CallBrackets/79 Tile{ HalfReuse: (/62 HalfReuse: # Symbol/1 } Tile{ HalfReuse: # Name/47 AsIs: e.CheckFunction#1/45 AsIs: )/48 } Tile{ AsIs: e.CheckFuncArgSubst#3/63 } )/80 )/81 )/82 </83 & MakeContinuationSentence/84 t.ContName#1/54/85 Tile{ AsIs: (/15 AsIs: e.T6#1/13 AsIs: )/16 AsIs: (/11 AsIs: e.T7#1/9 AsIs: )/12 HalfReuse: >/56 HalfReuse: )/60 } Tile{ ]] }
      refalrts::alloc_ident(vm, context[66], identifiers[ident_GNm_Local]);
      refalrts::alloc_ident(vm, context[67], identifiers[ident_Symbol]);
      refalrts::alloc_ident(vm, context[68], identifiers[ident_Name]);
      refalrts::copy_evar(vm, context[69], context[70], context[58], context[59]);
      refalrts::alloc_close_bracket(vm, context[71]);
      refalrts::alloc_open_bracket(vm, context[72]);
      refalrts::alloc_ident(vm, context[73], identifiers[ident_GNm_Local]);
      refalrts::alloc_open_bracket(vm, context[74]);
      refalrts::alloc_open_bracket(vm, context[75]);
      refalrts::alloc_close_bracket(vm, context[76]);
      refalrts::alloc_open_bracket(vm, context[77]);
      refalrts::alloc_open_bracket(vm, context[78]);
      refalrts::alloc_ident(vm, context[79], identifiers[ident_CallBrackets]);
      refalrts::alloc_close_bracket(vm, context[80]);
      refalrts::alloc_close_bracket(vm, context[81]);
      refalrts::alloc_close_bracket(vm, context[82]);
      refalrts::alloc_open_call(vm, context[83]);
      refalrts::alloc_name(vm, context[84], functions[efunc_MakeContinuationSentence]);
      refalrts::copy_evar(vm, context[85], context[86], context[54], context[55]);
      refalrts::reinit_open_bracket(context[44]);
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_ident(context[4], identifiers[ident_CallBrackets]);
      refalrts::reinit_close_bracket(context[57]);
      refalrts::update_name(context[65], functions[efunc_MakeContinuationSentence]);
      refalrts::reinit_close_call(context[23]);
      refalrts::reinit_open_bracket(context[62]);
      refalrts::reinit_ident(context[1], identifiers[ident_Symbol]);
      refalrts::reinit_ident(context[47], identifiers[ident_Name]);
      refalrts::reinit_close_call(context[56]);
      refalrts::reinit_close_bracket(context[60]);
      refalrts::link_brackets( context[72], context[60] );
      refalrts::push_stack( vm, context[56] );
      refalrts::push_stack( vm, context[83] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[15], context[16] );
      refalrts::link_brackets( context[19], context[82] );
      refalrts::link_brackets( context[77], context[81] );
      refalrts::link_brackets( context[78], context[80] );
      refalrts::link_brackets( context[62], context[48] );
      refalrts::link_brackets( context[75], context[76] );
      refalrts::link_brackets( context[74], context[24] );
      refalrts::link_brackets( context[43], context[71] );
      refalrts::push_stack( vm, context[23] );
      refalrts::push_stack( vm, context[61] );
      refalrts::link_brackets( context[27], context[28] );
      refalrts::link_brackets( context[31], context[32] );
      refalrts::link_brackets( context[44], context[57] );
      refalrts::link_brackets( context[35], context[36] );
      refalrts::link_brackets( context[0], context[8] );
      refalrts::link_brackets( context[7], context[20] );
      refalrts::link_brackets( context[39], context[40] );
      refalrts::link_brackets( context[52], context[53] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[15], context[60] );
      res = refalrts::splice_evar( res, context[80], context[86] );
      res = refalrts::splice_evar( res, context[63], context[64] );
      res = refalrts::splice_evar( res, context[47], context[48] );
      res = refalrts::splice_evar( res, context[62], context[1] );
      res = refalrts::splice_evar( res, context[76], context[79] );
      res = refalrts::splice_evar( res, context[21], context[22] );
      res = refalrts::splice_evar( res, context[75], context[75] );
      res = refalrts::splice_evar( res, context[24], context[19] );
      res = refalrts::splice_evar( res, context[58], context[59] );
      res = refalrts::splice_evar( res, context[71], context[74] );
      res = refalrts::splice_evar( res, context[31], context[23] );
      res = refalrts::splice_evar( res, context[54], context[55] );
      res = refalrts::splice_evar( res, context[57], context[65] );
      res = refalrts::splice_evar( res, context[36], context[36] );
      res = refalrts::splice_evar( res, context[8], context[8] );
      res = refalrts::splice_evar( res, context[33], context[34] );
      res = refalrts::splice_evar( res, context[20], context[20] );
      res = refalrts::splice_evar( res, context[69], context[70] );
      res = refalrts::splice_evar( res, context[67], context[68] );
      res = refalrts::splice_evar( res, context[0], context[7] );
      res = refalrts::splice_evar( res, context[44], context[35] );
      res = refalrts::splice_evar( res, context[52], context[53] );
      res = refalrts::splice_evar( res, context[66], context[66] );
      res = refalrts::splice_evar( res, context[43], context[43] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    refalrts::splice_to_freelist(vm, context[61], context[62]);
    continue;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  refalrts::splice_to_freelist(vm, context[56], context[57]);
  return refalrts::cRecognitionImpossible;
}

static refalrts::NativeReference nat_ref_MakeOpenEm_ForwardNext("MakeOpenE-ForwardNext", 1097634219U, 507462218U, func_MakeOpenEm_ForwardNext);


static refalrts::FnResult func_ExtractVariables(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 8 elems
  refalrts::Iter context[8];
  refalrts::zeros( context, 8 );
  // </0 & ExtractVariables/4 e.Sentences#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Sentences#1 as range 2
  //DEBUG: e.Sentences#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & Unique/6 Tile{ AsIs: </0 Reuse: & ExtractVariables-Sentences/4 AsIs: e.Sentences#1/2 AsIs: >/1 } >/7 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::alloc_name(vm, context[6], functions[efunc_Unique]);
  refalrts::alloc_close_call(vm, context[7]);
  refalrts::update_name(context[4], functions[efunc_ExtractVariablesm_Sentences]);
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

static refalrts::NativeReference nat_ref_ExtractVariables("ExtractVariables", 0U, 0U, func_ExtractVariables);


static refalrts::FnResult func_ExtractVariablesm_Sentences(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & ExtractVariables-Sentences/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & ExtractVariables-Sentences/4 (/9 (/13 e.Pattern#1/11 )/14 e.Tail#1/7 )/10 e.Sentences#1/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[7] = 0;
    context[8] = 0;
    context[9] = refalrts::brackets_left( context[7], context[8], context[5], context[6] );
    if( ! context[9] )
      continue;
    refalrts::bracket_pointers(context[9], context[10]);
    context[11] = 0;
    context[12] = 0;
    context[13] = refalrts::brackets_left( context[11], context[12], context[7], context[8] );
    if( ! context[13] )
      continue;
    refalrts::bracket_pointers(context[13], context[14]);
    // closed e.Pattern#1 as range 11
    // closed e.Tail#1 as range 7
    // closed e.Sentences#1 as range 5
    //DEBUG: e.Pattern#1: 11
    //DEBUG: e.Tail#1: 7
    //DEBUG: e.Sentences#1: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ExtractVariables-Expr/4 } Tile{ AsIs: e.Pattern#1/11 } >/15 Tile{ HalfReuse: </9 HalfReuse: & ExtractVariables-Tail/13 } Tile{ AsIs: e.Tail#1/7 } Tile{ HalfReuse: >/14 } </16 Tile{ HalfReuse: & ExtractVariables-Sentences/10 AsIs: e.Sentences#1/5 AsIs: >/1 ]] }
    refalrts::alloc_close_call(vm, context[15]);
    refalrts::alloc_open_call(vm, context[16]);
    refalrts::update_name(context[4], functions[efunc_ExtractVariablesm_Expr]);
    refalrts::reinit_open_call(context[9]);
    refalrts::reinit_name(context[13], functions[efunc_ExtractVariablesm_Tail]);
    refalrts::reinit_close_call(context[14]);
    refalrts::reinit_name(context[10], functions[efunc_ExtractVariablesm_Sentences]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[16] );
    refalrts::push_stack( vm, context[14] );
    refalrts::push_stack( vm, context[9] );
    refalrts::push_stack( vm, context[15] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[10];
    res = refalrts::splice_evar( res, context[16], context[16] );
    res = refalrts::splice_evar( res, context[14], context[14] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_evar( res, context[9], context[13] );
    res = refalrts::splice_evar( res, context[15], context[15] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ExtractVariables-Sentences/4 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & ExtractVariables-Sentences/4 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ExtractVariablesm_Sentences("ExtractVariables-Sentences", 1097634219U, 507462218U, func_ExtractVariablesm_Sentences);


static refalrts::FnResult func_ExtractVariablesm_Tail(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 26 elems
  refalrts::Iter context[26];
  refalrts::zeros( context, 26 );
  // </0 & ExtractVariables-Tail/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & ExtractVariables-Tail/4 (/7 e.new#1/5 )/8 e.new#2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  // closed e.new#2 as range 2
  do {
    // </0 & ExtractVariables-Tail/4 (/7 # Condition/13 (/16 e.ConditionName#1/14 )/17 (/20 e.Result#1/18 )/21 (/24 e.Pattern#1/22 )/25 )/8 e.Tail#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::ident_left( identifiers[ident_Condition], context[9], context[10] );
    if( ! context[13] )
      continue;
    context[14] = 0;
    context[15] = 0;
    context[16] = refalrts::brackets_left( context[14], context[15], context[9], context[10] );
    if( ! context[16] )
      continue;
    refalrts::bracket_pointers(context[16], context[17]);
    context[18] = 0;
    context[19] = 0;
    context[20] = refalrts::brackets_left( context[18], context[19], context[9], context[10] );
    if( ! context[20] )
      continue;
    refalrts::bracket_pointers(context[20], context[21]);
    context[22] = 0;
    context[23] = 0;
    context[24] = refalrts::brackets_left( context[22], context[23], context[9], context[10] );
    if( ! context[24] )
      continue;
    refalrts::bracket_pointers(context[24], context[25]);
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;
    // closed e.ConditionName#1 as range 14
    // closed e.Result#1 as range 18
    // closed e.Pattern#1 as range 22
    // closed e.Tail#1 as range 11
    //DEBUG: e.ConditionName#1: 14
    //DEBUG: e.Result#1: 18
    //DEBUG: e.Pattern#1: 22
    //DEBUG: e.Tail#1: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} e.ConditionName#1/14 )/17 (/20 {REMOVED TILE} )/21 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ExtractVariables-Expr/4 } Tile{ AsIs: e.Result#1/18 } Tile{ HalfReuse: >/7 HalfReuse: </13 HalfReuse: & ExtractVariables-Expr/16 } Tile{ AsIs: e.Pattern#1/22 } Tile{ HalfReuse: >/24 } Tile{ HalfReuse: </25 HalfReuse: & ExtractVariables-Tail/8 AsIs: e.Tail#1/11 AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_ExtractVariablesm_Expr]);
    refalrts::reinit_close_call(context[7]);
    refalrts::reinit_open_call(context[13]);
    refalrts::reinit_name(context[16], functions[efunc_ExtractVariablesm_Expr]);
    refalrts::reinit_close_call(context[24]);
    refalrts::reinit_open_call(context[25]);
    refalrts::reinit_name(context[8], functions[efunc_ExtractVariablesm_Tail]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[25] );
    refalrts::push_stack( vm, context[24] );
    refalrts::push_stack( vm, context[13] );
    refalrts::push_stack( vm, context[7] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[25];
    res = refalrts::splice_evar( res, context[24], context[24] );
    res = refalrts::splice_evar( res, context[22], context[23] );
    res = refalrts::splice_evar( res, context[7], context[16] );
    res = refalrts::splice_evar( res, context[18], context[19] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ExtractVariables-Tail/4 (/7 e.Result#1/5 )/8 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Result#1 as range 5
  //DEBUG: e.Result#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} (/7 {REMOVED TILE} )/8 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & ExtractVariables-Expr/4 } Tile{ AsIs: e.Result#1/5 } Tile{ AsIs: >/1 ]] }
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

static refalrts::NativeReference nat_ref_ExtractVariablesm_Tail("ExtractVariables-Tail", 1097634219U, 507462218U, func_ExtractVariablesm_Tail);


static refalrts::FnResult func_ExtractVariablesm_Expr(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
  // </0 & ExtractVariables-Expr/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & ExtractVariables-Expr/4 t.new#1/7 e.new#2/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[8] = refalrts::tvar_left( context[7], context[5], context[6] );
    if( ! context[8] )
      continue;
    // closed e.new#2 as range 5
    do {
      // </0 & ExtractVariables-Expr/4 (/7 s.new#3/13 e.new#4/11 )/8 e.new#5/9 >/1
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
        // </0 & ExtractVariables-Expr/4 (/7 # TkVariable/13 s.VarType#1/18 e.Index#1/14 )/8 e.Terms#1/16 >/1
        context[14] = context[11];
        context[15] = context[12];
        context[16] = context[9];
        context[17] = context[10];
        if( ! refalrts::ident_term( identifiers[ident_TkVariable], context[13] ) )
          continue;
        // closed e.Terms#1 as range 16
        if( ! refalrts::svar_left( context[18], context[14], context[15] ) )
          continue;
        // closed e.Index#1 as range 14
        //DEBUG: e.Terms#1: 16
        //DEBUG: s.VarType#1: 18
        //DEBUG: e.Index#1: 14

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} (/7 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: (/13 AsIs: s.VarType#1/18 AsIs: e.Index#1/14 AsIs: )/8 } Tile{ AsIs: </0 AsIs: & ExtractVariables-Expr/4 } Tile{ AsIs: e.Terms#1/16 } Tile{ AsIs: >/1 ]] }
        refalrts::reinit_open_bracket(context[13]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[13], context[8] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[16], context[17] );
        res = refalrts::splice_evar( res, context[0], context[4] );
        res = refalrts::splice_evar( res, context[13], context[8] );
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & ExtractVariables-Expr/4 (/7 # Brackets/13 e.Inner#1/14 )/8 e.Terms#1/16 >/1
        context[14] = context[11];
        context[15] = context[12];
        context[16] = context[9];
        context[17] = context[10];
        if( ! refalrts::ident_term( identifiers[ident_Brackets], context[13] ) )
          continue;
        // closed e.Inner#1 as range 14
        // closed e.Terms#1 as range 16
        //DEBUG: e.Inner#1: 14
        //DEBUG: e.Terms#1: 16

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} (/7 # Brackets/13 {REMOVED TILE} )/8 {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & ExtractVariables-Expr/4 } Tile{ AsIs: e.Inner#1/14 } Tile{ AsIs: e.Terms#1/16 } Tile{ AsIs: >/1 ]] }
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[16], context[17] );
        res = refalrts::splice_evar( res, context[14], context[15] );
        refalrts::splice_to_freelist_open( vm, context[4], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & ExtractVariables-Expr/4 (/7 # ADT-Brackets/13 (/20 e.Name#1/18 )/21 e.Inner#1/14 )/8 e.Terms#1/16 >/1
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
        // closed e.Name#1 as range 18
        // closed e.Inner#1 as range 14
        // closed e.Terms#1 as range 16
        //DEBUG: e.Name#1: 18
        //DEBUG: e.Inner#1: 14
        //DEBUG: e.Terms#1: 16

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} (/7 # ADT-Brackets/13 (/20 e.Name#1/18 )/21 {REMOVED TILE} )/8 {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & ExtractVariables-Expr/4 } Tile{ AsIs: e.Inner#1/14 } Tile{ AsIs: e.Terms#1/16 } Tile{ AsIs: >/1 ]] }
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[16], context[17] );
        res = refalrts::splice_evar( res, context[14], context[15] );
        refalrts::splice_to_freelist_open( vm, context[4], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & ExtractVariables-Expr/4 (/7 # CallBrackets/13 e.Inner#1/14 )/8 e.Terms#1/16 >/1
        context[14] = context[11];
        context[15] = context[12];
        context[16] = context[9];
        context[17] = context[10];
        if( ! refalrts::ident_term( identifiers[ident_CallBrackets], context[13] ) )
          continue;
        // closed e.Inner#1 as range 14
        // closed e.Terms#1 as range 16
        //DEBUG: e.Inner#1: 14
        //DEBUG: e.Terms#1: 16

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} (/7 # CallBrackets/13 {REMOVED TILE} )/8 {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & ExtractVariables-Expr/4 } Tile{ AsIs: e.Inner#1/14 } Tile{ AsIs: e.Terms#1/16 } Tile{ AsIs: >/1 ]] }
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[16], context[17] );
        res = refalrts::splice_evar( res, context[14], context[15] );
        refalrts::splice_to_freelist_open( vm, context[4], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & ExtractVariables-Expr/4 (/7 # ClosureBrackets/13 e.Inner#1/14 )/8 e.Terms#1/16 >/1
      context[14] = context[11];
      context[15] = context[12];
      context[16] = context[9];
      context[17] = context[10];
      if( ! refalrts::ident_term( identifiers[ident_ClosureBrackets], context[13] ) )
        continue;
      // closed e.Inner#1 as range 14
      // closed e.Terms#1 as range 16
      //DEBUG: e.Inner#1: 14
      //DEBUG: e.Terms#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} (/7 # ClosureBrackets/13 {REMOVED TILE} )/8 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ExtractVariables-Expr/4 } Tile{ AsIs: e.Inner#1/14 } Tile{ AsIs: e.Terms#1/16 } Tile{ AsIs: >/1 ]] }
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[16], context[17] );
      res = refalrts::splice_evar( res, context[14], context[15] );
      refalrts::splice_to_freelist_open( vm, context[4], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & ExtractVariables-Expr/4 t.Other#1/7 e.Terms#1/9 >/1
    context[9] = context[5];
    context[10] = context[6];
    // closed e.Terms#1 as range 9
    //DEBUG: t.Other#1: 7
    //DEBUG: e.Terms#1: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} t.Other#1/7 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ExtractVariables-Expr/4 } Tile{ AsIs: e.Terms#1/9 } Tile{ AsIs: >/1 ]] }
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

  // </0 & ExtractVariables-Expr/4 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & ExtractVariables-Expr/4 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ExtractVariablesm_Expr("ExtractVariables-Expr", 1097634219U, 507462218U, func_ExtractVariablesm_Expr);


static refalrts::FnResult func_NewVarName(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 33 elems
  refalrts::Iter context[33];
  refalrts::zeros( context, 33 );
  // </0 & NewVarName/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & NewVarName/4 (/7 e.new#1/5 )/8 e.new#2/2 s.new#3/13 (/11 e.new#4/9 )/12 >/1
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
  // closed e.new#1 as range 5
  // closed e.new#4 as range 9
  if( ! refalrts::svar_right( context[13], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 2
  do {
    // </0 & NewVarName/4 (/7 e.Names-B#1/20 (/26 e.Prefix#1/28 e.Suffix#1/30 s.Depth#1/32 )/27 e.Names-E#1/22 )/8 e.Prefix#1/16 s.Depth#1/13 (/11 e.Suffix#1/18 )/12 >/1
    context[14] = context[5];
    context[15] = context[6];
    context[16] = context[2];
    context[17] = context[3];
    context[18] = context[9];
    context[19] = context[10];
    // closed e.Prefix#1 as range 16
    // closed e.Suffix#1 as range 18
    context[20] = 0;
    context[21] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[22] = context[14];
      context[23] = context[15];
      context[24] = 0;
      context[25] = 0;
      context[26] = refalrts::brackets_left( context[24], context[25], context[22], context[23] );
      if( ! context[26] )
        continue;
      refalrts::bracket_pointers(context[26], context[27]);
      if( ! refalrts::repeated_evar_left( vm, context[28], context[29], context[16], context[17], context[24], context[25] ) )
        continue;
      if( ! refalrts::repeated_evar_left( vm, context[30], context[31], context[18], context[19], context[24], context[25] ) )
        continue;
      if( ! refalrts::repeated_stvar_left( vm, context[32], context[13], context[24], context[25] ) )
        continue;
      if( ! refalrts::empty_seq( context[24], context[25] ) )
        continue;
      // closed e.Names-E#1 as range 22
      //DEBUG: s.Depth#1: 13
      //DEBUG: e.Prefix#1: 16
      //DEBUG: e.Suffix#1: 18
      //DEBUG: e.Names-B#1: 20
      //DEBUG: e.Names-E#1: 22

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} (/11 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoNewVarName/4 AsIs: (/7 } Tile{ AsIs: (/26 AsIs: e.Prefix#1/28 AsIs: e.Suffix#1/30 AsIs: s.Depth#1/32 AsIs: )/27 } Tile{ AsIs: e.Names-B#1/20 } Tile{ AsIs: e.Names-E#1/22 } Tile{ AsIs: )/8 } Tile{ AsIs: e.Prefix#1/16 } Tile{ AsIs: e.Suffix#1/18 } Tile{ AsIs: s.Depth#1/13 } Tile{ HalfReuse: 0/12 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_DoNewVarName]);
      refalrts::reinit_number(context[12], 0UL);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::link_brackets( context[26], context[27] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[12];
      res = refalrts::splice_evar( res, context[13], context[13] );
      res = refalrts::splice_evar( res, context[18], context[19] );
      res = refalrts::splice_evar( res, context[16], context[17] );
      res = refalrts::splice_evar( res, context[8], context[8] );
      res = refalrts::splice_evar( res, context[22], context[23] );
      res = refalrts::splice_evar( res, context[20], context[21] );
      res = refalrts::splice_evar( res, context[26], context[27] );
      refalrts::splice_to_freelist_open( vm, context[7], res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[20], context[21], context[14], context[15] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & NewVarName/4 (/7 e.Names#1/5 )/8 e.Prefix#1/2 s.Depth#1/13 (/11 e.Suffix#1/9 )/12 >/1
  // closed e.Names#1 as range 5
  // closed e.Prefix#1 as range 2
  // closed e.Suffix#1 as range 9
  //DEBUG: s.Depth#1: 13
  //DEBUG: e.Names#1: 5
  //DEBUG: e.Prefix#1: 2
  //DEBUG: e.Suffix#1: 9

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Depth#1/13 {REMOVED TILE} {REMOVED TILE} )/12 {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: (/11 } Tile{ AsIs: e.Prefix#1/2 } e.Suffix#1/9/14 Tile{ HalfReuse: s.Depth1 #13/4 HalfReuse: )/7 AsIs: e.Names#1/5 AsIs: )/8 } e.Prefix#1/2/16 Tile{ AsIs: e.Suffix#1/9 } Tile{ HalfReuse: s.Depth1 #13/1 ]] }
  refalrts::copy_evar(vm, context[14], context[15], context[9], context[10]);
  refalrts::copy_evar(vm, context[16], context[17], context[2], context[3]);
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_svar( context[4], context[13] );
  refalrts::reinit_close_bracket(context[7]);
  refalrts::reinit_svar( context[1], context[13] );
  refalrts::link_brackets( context[0], context[8] );
  refalrts::link_brackets( context[11], context[7] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[16], context[17] );
  res = refalrts::splice_evar( res, context[4], context[8] );
  res = refalrts::splice_evar( res, context[14], context[15] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  refalrts::splice_to_freelist_open( vm, context[0], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_NewVarName("NewVarName", 0U, 0U, func_NewVarName);


static refalrts::FnResult func_gen_DoNewVarName_B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 38 elems
  refalrts::Iter context[38];
  refalrts::zeros( context, 38 );
  // </0 & DoNewVarName:1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DoNewVarName:1/4 (/7 e.new#1/5 )/8 (/11 e.new#2/9 )/12 s.new#3/13 s.new#4/14 (/17 e.new#5/15 )/18 e.new#6/2 >/1
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
  if( ! refalrts::svar_left( context[14], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[15] = 0;
  context[16] = 0;
  context[17] = refalrts::brackets_left( context[15], context[16], context[2], context[3] );
  if( ! context[17] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[17], context[18]);
  // closed e.new#5 as range 15
  // closed e.new#6 as range 2
  do {
    // </0 & DoNewVarName:1/4 (/7 e.NewName#2/19 )/8 (/11 e.Prefix#1/21 )/12 s.Depth#1/13 s.SufNo#1/14 (/17 e.Names#1/23 )/18 e.Names-B#3/27 (/33 e.NewName#2/35 )/34 e.Names-E#3/29 >/1
    context[19] = context[5];
    context[20] = context[6];
    context[21] = context[9];
    context[22] = context[10];
    context[23] = context[15];
    context[24] = context[16];
    context[25] = context[2];
    context[26] = context[3];
    // closed e.NewName#2 as range 19
    // closed e.Prefix#1 as range 21
    // closed e.Names#1 as range 23
    context[27] = 0;
    context[28] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[29] = context[25];
      context[30] = context[26];
      context[31] = 0;
      context[32] = 0;
      context[33] = refalrts::brackets_left( context[31], context[32], context[29], context[30] );
      if( ! context[33] )
        continue;
      refalrts::bracket_pointers(context[33], context[34]);
      if( ! refalrts::repeated_evar_left( vm, context[35], context[36], context[19], context[20], context[31], context[32] ) )
        continue;
      if( ! refalrts::empty_seq( context[31], context[32] ) )
        continue;
      // closed e.Names-E#3 as range 29
      //DEBUG: s.Depth#1: 13
      //DEBUG: s.SufNo#1: 14
      //DEBUG: e.NewName#2: 19
      //DEBUG: e.Prefix#1: 21
      //DEBUG: e.Names#1: 23
      //DEBUG: e.Names-B#3: 27
      //DEBUG: e.Names-E#3: 29

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} e.NewName#2/19 {REMOVED TILE} {REMOVED TILE} s.Depth#1/13 {REMOVED TILE} e.Names#1/23 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoNewVarName/4 AsIs: (/7 } Tile{ AsIs: (/33 AsIs: e.NewName#2/35 AsIs: )/34 } Tile{ AsIs: e.Names-B#3/27 } Tile{ AsIs: e.Names-E#3/29 } Tile{ HalfReuse: )/11 AsIs: e.Prefix#1/21 HalfReuse: s.Depth1 #13/12 } Tile{ HalfReuse: </8 } Tile{ HalfReuse: & Add/18 } Tile{ AsIs: s.SufNo#1/14 HalfReuse: 1/17 } >/37 Tile{ AsIs: >/1 ]] }
      refalrts::alloc_close_call(vm, context[37]);
      refalrts::update_name(context[4], functions[efunc_DoNewVarName]);
      refalrts::reinit_close_bracket(context[11]);
      refalrts::reinit_svar( context[12], context[13] );
      refalrts::reinit_open_call(context[8]);
      refalrts::reinit_name(context[18], functions[efunc_Add]);
      refalrts::reinit_number(context[17], 1UL);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[37] );
      refalrts::push_stack( vm, context[8] );
      refalrts::link_brackets( context[7], context[11] );
      refalrts::link_brackets( context[33], context[34] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[37], context[37] );
      res = refalrts::splice_evar( res, context[14], context[17] );
      res = refalrts::splice_evar( res, context[18], context[18] );
      res = refalrts::splice_evar( res, context[8], context[8] );
      res = refalrts::splice_evar( res, context[11], context[12] );
      res = refalrts::splice_evar( res, context[29], context[30] );
      res = refalrts::splice_evar( res, context[27], context[28] );
      res = refalrts::splice_evar( res, context[33], context[34] );
      refalrts::splice_to_freelist_open( vm, context[7], res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[27], context[28], context[25], context[26] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoNewVarName:1/4 (/7 e.NewName#2/5 )/8 (/11 e.Prefix#1/9 )/12 s.Depth#1/13 s.SufNo#1/14 (/17 e.Names#1/15 )/18 e.Names#1/19 >/1
  // closed e.NewName#2 as range 5
  // closed e.Prefix#1 as range 9
  // closed e.Names#1 as range 15
  if( ! refalrts::repeated_evar_left( vm, context[19], context[20], context[15], context[16], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: s.Depth#1: 13
  //DEBUG: s.SufNo#1: 14
  //DEBUG: e.NewName#2: 5
  //DEBUG: e.Prefix#1: 9
  //DEBUG: e.Names#1: 15

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 {REMOVED TILE} (/11 e.Prefix#1/9 )/12 s.Depth#1/13 s.SufNo#1/14 (/17 {REMOVED TILE} {REMOVED TILE} e.Names#1/19 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 AsIs: (/7 AsIs: e.NewName#2/5 AsIs: )/8 } Tile{ AsIs: e.Names#1/15 } Tile{ AsIs: )/18 } e.NewName#2/5/21 Tile{ ]] }
  refalrts::copy_evar(vm, context[21], context[22], context[5], context[6]);
  refalrts::reinit_open_bracket(context[4]);
  refalrts::link_brackets( context[4], context[18] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[21], context[22] );
  res = refalrts::splice_evar( res, context[18], context[18] );
  res = refalrts::splice_evar( res, context[15], context[16] );
  res = refalrts::splice_evar( res, context[4], context[8] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoNewVarName_B1("DoNewVarName:1", 1097634219U, 507462218U, func_gen_DoNewVarName_B1);


static refalrts::FnResult func_DoNewVarName(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 23 elems
  refalrts::Iter context[23];
  refalrts::zeros( context, 23 );
  // </0 & DoNewVarName/4 (/7 e.Names#1/5 )/8 e.Prefix#1/2 s.Depth#1/10 s.SufNo#1/9 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.Names#1 as range 5
  if( ! refalrts::svar_right( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_right( context[10], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Prefix#1 as range 2
  //DEBUG: e.Names#1: 5
  //DEBUG: s.SufNo#1: 9
  //DEBUG: s.Depth#1: 10
  //DEBUG: e.Prefix#1: 2
  //2: e.Prefix#1
  //5: e.Names#1
  //9: s.SufNo#1
  //10: s.Depth#1
  //14: e.Prefix#1
  //18: s.SufNo#1
  //20: s.Depth#1

  refalrts::reset_allocator(vm);
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::alloc_open_call(vm, context[11]);
  refalrts::alloc_name(vm, context[13], functions[efunc_gen_DoNewVarName_C1]);
  refalrts::copy_evar(vm, context[14], context[15], context[2], context[3]);
  refalrts::alloc_open_call(vm, context[16]);
  refalrts::alloc_name(vm, context[17], functions[efunc_Symb]);
  refalrts::copy_stvar(vm, context[18], context[9]);
  refalrts::alloc_close_call(vm, context[19]);
  refalrts::copy_stvar(vm, context[20], context[10]);
  refalrts::alloc_close_call(vm, context[12]);
  refalrts::push_stack( vm, context[12] );
  refalrts::push_stack( vm, context[11] );
  res = refalrts::splice_elem( res, context[12] );
  res = refalrts::splice_stvar( res, context[20] );
  refalrts::push_stack( vm, context[19] );
  refalrts::push_stack( vm, context[16] );
  res = refalrts::splice_elem( res, context[19] );
  res = refalrts::splice_stvar( res, context[18] );
  res = refalrts::splice_elem( res, context[17] );
  res = refalrts::splice_elem( res, context[16] );
  res = refalrts::splice_evar( res, context[14], context[15] );
  res = refalrts::splice_elem( res, context[13] );
  res = refalrts::splice_elem( res, context[11] );
  refalrts::use( res );
  refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
  if (rec_res != refalrts::cSuccess)
    return rec_res;
  refalrts::this_is_generated_function(vm);
  do {
    // </11 & DoNewVarName?1/15 e.NewName#2/13 >/12
    context[13] = 0;
    context[14] = 0;
    context[15] = refalrts::call_left( context[13], context[14], context[11], context[12] );
    // closed e.NewName#2 as range 13
    //DEBUG: e.Names#1: 5
    //DEBUG: s.SufNo#1: 9
    //DEBUG: s.Depth#1: 10
    //DEBUG: e.Prefix#1: 2
    //DEBUG: e.NewName#2: 13

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Depth#1/10 s.SufNo#1/9 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </16 [*]/17 Tile{ HalfReuse: & DoNewVarName:1/11 HalfReuse: (/15 AsIs: e.NewName#2/13 HalfReuse: )/12 HalfReuse: (/1 } Tile{ AsIs: e.Prefix#1/2 } )/18 Tile{ HalfReuse: s.Depth1 #10/0 HalfReuse: s.SufNo1 #9/4 AsIs: (/7 AsIs: e.Names#1/5 AsIs: )/8 } {*}/19 e.Names#1/5/20 >/22 Tile{ ]] }
    refalrts::alloc_open_call(vm, context[16]);
    refalrts::alloc_closure_head(vm, context[17]);
    refalrts::alloc_close_bracket(vm, context[18]);
    refalrts::alloc_unwrapped_closure(vm, context[19], context[17]);
    refalrts::copy_evar(vm, context[20], context[21], context[5], context[6]);
    refalrts::alloc_close_call(vm, context[22]);
    refalrts::reinit_name(context[11], functions[efunc_gen_DoNewVarName_B1]);
    refalrts::reinit_open_bracket(context[15]);
    refalrts::reinit_close_bracket(context[12]);
    refalrts::reinit_open_bracket(context[1]);
    refalrts::reinit_svar( context[0], context[10] );
    refalrts::reinit_svar( context[4], context[9] );
    refalrts::push_stack( vm, context[22] );
    refalrts::push_stack( vm, context[16] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[1], context[18] );
    refalrts::link_brackets( context[15], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[19], context[22] );
    res = refalrts::splice_evar( res, context[0], context[8] );
    res = refalrts::splice_evar( res, context[18], context[18] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[11], context[1] );
    res = refalrts::splice_evar( res, context[16], context[17] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    refalrts::wrap_closure( context[19] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  refalrts::splice_to_freelist(vm, context[11], context[12]);
  return refalrts::cRecognitionImpossible;
}

static refalrts::NativeReference nat_ref_DoNewVarName("DoNewVarName", 1097634219U, 507462218U, func_DoNewVarName);


//End of file
