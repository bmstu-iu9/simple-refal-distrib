// This file automatically generated from 'Desugaring-UnCondition.ref'
// Don't edit! Edit 'Desugaring-UnCondition.ref' and recompile it

#include "refalrts.h"

#define cookie_ns cookie_ns_1440316424_4052151608
#define COOKIE1_ 1440316424U
#define COOKIE2_ 4052151608U

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
  efunc_gen_Map_Z1 = 15,
  efunc_UnConditionm_RemFunctions = 16,
  efunc_gen_MapAccum_Z1 = 17,
  efunc_gen_UnConditionm_Unit_S1A4 = 18,
  efunc_gen_UnConditionm_Unitm_Sentence_S1A3 = 19,
  efunc_UnConditionm_Sentence = 20,
  efunc_gen_UnConditionm_Unitm_Sentence_S1C1 = 21,
  efunc_gen_UnConditionm_Unitm_Sentence_S1A2 = 22,
  efunc_AddSuffix = 23,
  efunc_gen_UnConditionm_RemFunctions_S1L1D2 = 24,
  efunc_DoPatternSteps = 25,
  efunc_gen_DoPatternSteps_B1S1C1 = 26,
  efunc_HardItem = 27,
  efunc_gen_DoPatternSteps_B1S2C1 = 28,
  efunc_gen_Map_Z2 = 29,
  efunc_T1 = 30,
  efunc_T2 = 31,
  efunc_T3 = 32,
  efunc_T4 = 33,
  efunc_T5 = 34,
  efunc_T5m_sub = 35,
  efunc_T6 = 36,
  efunc_T7 = 37,
  efunc_BindBrackets = 38,
  efunc_T0 = 39,
  efunc_gen_DoPatternSteps_B1 = 40,
  efunc_DoBindBrackets = 41,
  efunc_gen_T1_C1 = 42,
  efunc_NewVarNameSuf = 43,
  efunc_gen_T1_C2 = 44,
  efunc_gen_T1_C3 = 45,
  efunc_PassiveHoles = 46,
  efunc_gen_PassiveHoles_S1C1 = 47,
  efunc_gen_T2_C1 = 48,
  efunc_gen_T2_C2 = 49,
  efunc_gen_T2_C3 = 50,
  efunc_gen_T3_C1 = 51,
  efunc_gen_T4_C1 = 52,
  efunc_gen_T5_C1 = 53,
  efunc_Substitute = 54,
  efunc_T5m_UnHole = 55,
  efunc_gen_T5m_sub_C1 = 56,
  efunc_gen_T5m_sub_C2 = 57,
  efunc_gen_T6_C1 = 58,
  efunc_gen_T6_C2 = 59,
  efunc_gen_T7_C1 = 60,
  efunc_gen_T7_C2 = 61,
  efunc_DoT0 = 62,
  efunc_gen_UnConditionm_Sentence_C1 = 63,
  efunc_gen_UnConditionm_Sentence_C2 = 64,
  efunc_gen_UnConditionm_Sentence_C3 = 65,
  efunc_ExtractVariables = 66,
  efunc_gen_UnConditionm_Sentence_C4 = 67,
  efunc_ConditionContext = 68,
  efunc_gen_UnConditionm_Sentence_C5 = 69,
  efunc_PatternSteps = 70,
  efunc_gen_UnConditionm_Sentence_C6 = 71,
  efunc_OpenEChain = 72,
  efunc_gen_UnConditionm_Sentence_C7 = 73,
  efunc_CreateSpecPatternForContext = 74,
  efunc_Unique = 75,
  efunc_ExtractVariablesm_Expr = 76,
  efunc_CreateContext = 77,
  efunc_gen_OpenEChain_S1C1 = 78,
  efunc_NewVarName = 79,
  efunc_gen_OpenEChain_S2C1 = 80,
  efunc_gen_OpenEChain_S2C2 = 81,
  efunc_DoOpenEChain = 82,
  efunc_gen_OpenEChain_S2C3 = 83,
  efunc_gen_DoOpenEChain_S1C1 = 84,
  efunc_MakeOpenEm_ForwardNext = 85,
  efunc_gen_DoOpenEChain_S2C1 = 86,
  efunc_gen_DoOpenEChain_S2C2 = 87,
  efunc_gen_DoOpenEChain_S2C3 = 88,
  efunc_gen_MakeOpenEm_ForwardNext_C1 = 89,
  efunc_gen_MakeOpenEm_ForwardNext_C2 = 90,
  efunc_Mu = 91,
  efunc_Up = 92,
  efunc_Evm_met = 93,
  efunc_Residue = 94,
  efunc_u_u_Metau_Residue = 95,
  efunc_MapAccum = 96,
  efunc_UnBracket = 97,
  efunc_DelAccumulator = 98,
  efunc_Inc = 99,
  efunc_Dec = 100,
  efunc_Passm_UnCondition = 101,
  efunc_UnConditionm_Unit = 102,
  efunc_UnConditionm_Unitm_Sentence = 103,
  efunc_gen_Map_Z0 = 104,
  efunc_gen_DoMapAccum_Z1 = 105,
  efunc_gen_MapAccum_Z0 = 106,
  efunc_gen_DoMapAccum_S1A1Z1 = 107,
  efunc_gen_DoMapAccum_Z0 = 108,
  efunc_gen_DoMapAccum_S1A1Z0 = 109,
};


enum ident {
  ident_Sentences = 0,
  ident_Function = 1,
  ident_Condition = 2,
  ident_GNm_Local = 3,
  ident_HOLE = 4,
  ident_True = 5,
  ident_TkVariable = 6,
  ident_Brackets = 7,
  ident_RightBracket = 8,
  ident_LeftBracket = 9,
  ident_ADTm_Brackets = 10,
  ident_LeftADT = 11,
  ident_RightADT = 12,
  ident_OpenE = 13,
  ident_Symbol = 14,
  ident_False = 15,
  ident_CallBrackets = 16,
  ident_ClosureBrackets = 17,
  ident_Name = 18,
  ident_Drive = 19,
  ident_Spec = 20,
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
  ident_Passm_UnCondition = 37,
  ident_UnConditionm_Unit = 38,
  ident_UnConditionm_Unitm_Sentence = 39,
  ident_UnConditionm_RemFunctions = 40,
  ident_PatternSteps = 41,
  ident_DoPatternSteps = 42,
  ident_HardItem = 43,
  ident_BindBrackets = 44,
  ident_DoBindBrackets = 45,
  ident_T1 = 46,
  ident_PassiveHoles = 47,
  ident_T2 = 48,
  ident_T3 = 49,
  ident_T4 = 50,
  ident_T5 = 51,
  ident_T5m_UnHole = 52,
  ident_T5m_sub = 53,
  ident_Substitute = 54,
  ident_T6 = 55,
  ident_T7 = 56,
  ident_T0 = 57,
  ident_DoT0 = 58,
  ident_UnConditionm_Sentence = 59,
  ident_ConditionContext = 60,
  ident_OpenEChain = 61,
  ident_DoOpenEChain = 62,
  ident_MakeOpenEm_ForwardNext = 63,
  ident_NewVarNameSuf = 64,
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


static refalrts::FnResult func_Passm_UnCondition(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
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
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map@1/4 AsIs: s.MarkupContext#1/5 AsIs: e.Units#1/2 AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_gen_Map_Z1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Passm_UnCondition("Pass-UnCondition", 0U, 0U, func_Passm_UnCondition);


static refalrts::FnResult func_gen_UnConditionm_Unit_S1A4(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 29 elems
  refalrts::Iter context[29];
  refalrts::zeros( context, 29 );
  // </0 & UnCondition-Unit$1=4/4 s.Scope#1/5 (/8 e.Name#1/6 )/9 s.MarkupContext#1/10 (/13 s.SkipNo#5/19 e.RemNames#5/11 (/17 e.NewFunctions#5/15 )/18 )/14 e.Sentences#5/2 >/1
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
  context[15] = 0;
  context[16] = 0;
  context[17] = refalrts::brackets_right( context[15], context[16], context[11], context[12] );
  if( ! context[17] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[17], context[18]);
  // closed e.NewFunctions#5 as range 15
  // closed e.Sentences#5 as range 2
  if( ! refalrts::svar_left( context[19], context[11], context[12] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.RemNames#5 as range 11
  //DEBUG: s.Scope#1: 5
  //DEBUG: e.Name#1: 6
  //DEBUG: s.MarkupContext#1: 10
  //DEBUG: e.NewFunctions#5: 15
  //DEBUG: e.Sentences#5: 2
  //DEBUG: s.SkipNo#5: 19
  //DEBUG: e.RemNames#5: 11

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} s.MarkupContext#1/10 {REMOVED TILE} s.SkipNo#5/19 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # Function/4 AsIs: s.Scope#1/5 AsIs: (/8 AsIs: e.Name#1/6 AsIs: )/9 } # Sentences/20 e.Sentences#5/2/21 )/23 </24 & UnCondition-RemFunctions/25 1/26 Tile{ AsIs: (/13 } Tile{ AsIs: e.RemNames#5/11 } Tile{ AsIs: )/14 AsIs: e.Sentences#5/2 AsIs: >/1 } </27 & Map@1/28 Tile{ HalfReuse: s.MarkupContext1 #10/17 AsIs: e.NewFunctions#5/15 HalfReuse: >/18 } Tile{ ]] }
  refalrts::alloc_ident(vm, context[20], identifiers[ident_Sentences]);
  refalrts::copy_evar(vm, context[21], context[22], context[2], context[3]);
  refalrts::alloc_close_bracket(vm, context[23]);
  refalrts::alloc_open_call(vm, context[24]);
  refalrts::alloc_name(vm, context[25], functions[efunc_UnConditionm_RemFunctions]);
  refalrts::alloc_number(vm, context[26], 1UL);
  refalrts::alloc_open_call(vm, context[27]);
  refalrts::alloc_name(vm, context[28], functions[efunc_gen_Map_Z1]);
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_ident(context[4], identifiers[ident_Function]);
  refalrts::reinit_svar( context[17], context[10] );
  refalrts::reinit_close_call(context[18]);
  refalrts::push_stack( vm, context[18] );
  refalrts::push_stack( vm, context[27] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[24] );
  refalrts::link_brackets( context[13], context[14] );
  refalrts::link_brackets( context[0], context[23] );
  refalrts::link_brackets( context[8], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[17], context[18] );
  res = refalrts::splice_evar( res, context[27], context[28] );
  res = refalrts::splice_evar( res, context[14], context[1] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_evar( res, context[13], context[13] );
  res = refalrts::splice_evar( res, context[20], context[26] );
  refalrts::splice_to_freelist_open( vm, context[9], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_UnConditionm_Unit_S1A4("UnCondition-Unit$1=4", COOKIE1_, COOKIE2_, func_gen_UnConditionm_Unit_S1A4);


static refalrts::FnResult func_gen_UnConditionm_Unit_S1A3(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 28 elems
  refalrts::Iter context[28];
  refalrts::zeros( context, 28 );
  // </0 & UnCondition-Unit$1=3/4 s.Scope#1/5 (/8 e.Name#1/6 )/9 s.MarkupContext#1/10 s.SkipNo#2/11 (/14 e.RemNames#3/12 )/15 (/18 e.Sentences#1/16 )/19 e.NewFunctions#4/2 >/1
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
  context[16] = 0;
  context[17] = 0;
  context[18] = refalrts::brackets_left( context[16], context[17], context[2], context[3] );
  if( ! context[18] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[18], context[19]);
  // closed e.RemNames#3 as range 12
  // closed e.Sentences#1 as range 16
  // closed e.NewFunctions#4 as range 2
  //DEBUG: s.Scope#1: 5
  //DEBUG: e.Name#1: 6
  //DEBUG: s.MarkupContext#1: 10
  //DEBUG: s.SkipNo#2: 11
  //DEBUG: e.RemNames#3: 12
  //DEBUG: e.Sentences#1: 16
  //DEBUG: e.NewFunctions#4: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & UnCondition-Unit$1=4/4 AsIs: s.Scope#1/5 AsIs: (/8 AsIs: e.Name#1/6 AsIs: )/9 AsIs: s.MarkupContext#1/10 } </20 & MapAccum@1/21 (/22 e.Name#1/6/23 )/25 s.MarkupContext#1/10/26 Tile{ AsIs: (/14 } Tile{ AsIs: s.SkipNo#2/11 } Tile{ AsIs: e.RemNames#3/12 } (/27 Tile{ AsIs: e.NewFunctions#4/2 } Tile{ AsIs: )/15 HalfReuse: )/18 AsIs: e.Sentences#1/16 HalfReuse: >/19 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[20]);
  refalrts::alloc_name(vm, context[21], functions[efunc_gen_MapAccum_Z1]);
  refalrts::alloc_open_bracket(vm, context[22]);
  refalrts::copy_evar(vm, context[23], context[24], context[6], context[7]);
  refalrts::alloc_close_bracket(vm, context[25]);
  refalrts::copy_stvar(vm, context[26], context[10]);
  refalrts::alloc_open_bracket(vm, context[27]);
  refalrts::update_name(context[4], functions[efunc_gen_UnConditionm_Unit_S1A4]);
  refalrts::reinit_close_bracket(context[18]);
  refalrts::reinit_close_call(context[19]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[19] );
  refalrts::push_stack( vm, context[20] );
  refalrts::link_brackets( context[14], context[18] );
  refalrts::link_brackets( context[27], context[15] );
  refalrts::link_brackets( context[22], context[25] );
  refalrts::link_brackets( context[8], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[15], context[19] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[27], context[27] );
  res = refalrts::splice_evar( res, context[12], context[13] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  res = refalrts::splice_evar( res, context[14], context[14] );
  res = refalrts::splice_evar( res, context[20], context[26] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_UnConditionm_Unit_S1A3("UnCondition-Unit$1=3", COOKIE1_, COOKIE2_, func_gen_UnConditionm_Unit_S1A3);


static refalrts::FnResult func_gen_UnConditionm_Unit_S1A2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 26 elems
  refalrts::Iter context[26];
  refalrts::zeros( context, 26 );
  // </0 & UnCondition-Unit$1=2/4 s.Scope#1/5 (/8 e.Name#1/6 )/9 s.MarkupContext#1/10 s.SkipNo#2/11 (/14 e.Sentences#1/12 )/15 e.RemNames#3/2 >/1
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
  // closed e.Sentences#1 as range 12
  // closed e.RemNames#3 as range 2
  //DEBUG: s.Scope#1: 5
  //DEBUG: e.Name#1: 6
  //DEBUG: s.MarkupContext#1: 10
  //DEBUG: s.SkipNo#2: 11
  //DEBUG: e.Sentences#1: 12
  //DEBUG: e.RemNames#3: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & UnCondition-Unit$1=4/4 AsIs: s.Scope#1/5 AsIs: (/8 AsIs: e.Name#1/6 AsIs: )/9 AsIs: s.MarkupContext#1/10 } </16 & MapAccum@1/17 (/18 e.Name#1/6/19 )/21 s.MarkupContext#1/10/22 (/23 Tile{ AsIs: s.SkipNo#2/11 } Tile{ AsIs: e.RemNames#3/2 } (/24 )/25 Tile{ HalfReuse: )/14 AsIs: e.Sentences#1/12 HalfReuse: >/15 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[16]);
  refalrts::alloc_name(vm, context[17], functions[efunc_gen_MapAccum_Z1]);
  refalrts::alloc_open_bracket(vm, context[18]);
  refalrts::copy_evar(vm, context[19], context[20], context[6], context[7]);
  refalrts::alloc_close_bracket(vm, context[21]);
  refalrts::copy_stvar(vm, context[22], context[10]);
  refalrts::alloc_open_bracket(vm, context[23]);
  refalrts::alloc_open_bracket(vm, context[24]);
  refalrts::alloc_close_bracket(vm, context[25]);
  refalrts::update_name(context[4], functions[efunc_gen_UnConditionm_Unit_S1A4]);
  refalrts::reinit_close_bracket(context[14]);
  refalrts::reinit_close_call(context[15]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[15] );
  refalrts::push_stack( vm, context[16] );
  refalrts::link_brackets( context[23], context[14] );
  refalrts::link_brackets( context[24], context[25] );
  refalrts::link_brackets( context[18], context[21] );
  refalrts::link_brackets( context[8], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[14], context[15] );
  res = refalrts::splice_evar( res, context[24], context[25] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  res = refalrts::splice_evar( res, context[16], context[23] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_UnConditionm_Unit_S1A2("UnCondition-Unit$1=2", COOKIE1_, COOKIE2_, func_gen_UnConditionm_Unit_S1A2);


static refalrts::FnResult func_gen_UnConditionm_Unit_S1A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 26 elems
  refalrts::Iter context[26];
  refalrts::zeros( context, 26 );
  // </0 & UnCondition-Unit$1=1/4 s.Scope#1/5 (/8 e.Name#1/6 )/9 s.MarkupContext#1/10 (/13 e.Sentences#1/11 )/14 s.SkipNo#2/15 >/1
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
  // closed e.Sentences#1 as range 11
  if( ! refalrts::svar_left( context[15], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: s.Scope#1: 5
  //DEBUG: e.Name#1: 6
  //DEBUG: s.MarkupContext#1: 10
  //DEBUG: e.Sentences#1: 11
  //DEBUG: s.SkipNo#2: 15

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & UnCondition-Unit$1=4/4 AsIs: s.Scope#1/5 AsIs: (/8 AsIs: e.Name#1/6 AsIs: )/9 AsIs: s.MarkupContext#1/10 HalfReuse: </13 } & MapAccum@1/16 (/17 e.Name#1/6/18 )/20 s.MarkupContext#1/10/21 Tile{ HalfReuse: (/14 AsIs: s.SkipNo#2/15 } (/22 )/23 )/24 Tile{ AsIs: e.Sentences#1/11 } >/25 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_name(vm, context[16], functions[efunc_gen_MapAccum_Z1]);
  refalrts::alloc_open_bracket(vm, context[17]);
  refalrts::copy_evar(vm, context[18], context[19], context[6], context[7]);
  refalrts::alloc_close_bracket(vm, context[20]);
  refalrts::copy_stvar(vm, context[21], context[10]);
  refalrts::alloc_open_bracket(vm, context[22]);
  refalrts::alloc_close_bracket(vm, context[23]);
  refalrts::alloc_close_bracket(vm, context[24]);
  refalrts::alloc_close_call(vm, context[25]);
  refalrts::update_name(context[4], functions[efunc_gen_UnConditionm_Unit_S1A4]);
  refalrts::reinit_open_call(context[13]);
  refalrts::reinit_open_bracket(context[14]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[25] );
  refalrts::push_stack( vm, context[13] );
  refalrts::link_brackets( context[14], context[24] );
  refalrts::link_brackets( context[22], context[23] );
  refalrts::link_brackets( context[17], context[20] );
  refalrts::link_brackets( context[8], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[25], context[25] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_evar( res, context[22], context[24] );
  res = refalrts::splice_evar( res, context[14], context[15] );
  res = refalrts::splice_evar( res, context[16], context[21] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_UnConditionm_Unit_S1A1("UnCondition-Unit$1=1", COOKIE1_, COOKIE2_, func_gen_UnConditionm_Unit_S1A1);


static refalrts::FnResult func_UnConditionm_Unit(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 26 elems
  refalrts::Iter context[26];
  refalrts::zeros( context, 26 );
  // </0 & UnCondition-Unit/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & UnCondition-Unit/4 s.new#1/5 t.new#2/6 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[7] = refalrts::tvar_left( context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & UnCondition-Unit/4 s.MarkupContext#1/5 (/6 # Function/10 s.Scope#1/11 (/14 e.Name#1/12 )/15 # Sentences/16 e.Sentences#1/8 )/7 >/1
    context[8] = 0;
    context[9] = 0;
    if( ! refalrts::brackets_term( context[8], context[9], context[6] ) )
      continue;
    context[10] = refalrts::ident_left( identifiers[ident_Function], context[8], context[9] );
    if( ! context[10] )
      continue;
    if( ! refalrts::svar_left( context[11], context[8], context[9] ) )
      continue;
    context[12] = 0;
    context[13] = 0;
    context[14] = refalrts::brackets_left( context[12], context[13], context[8], context[9] );
    if( ! context[14] )
      continue;
    refalrts::bracket_pointers(context[14], context[15]);
    context[16] = refalrts::ident_left( identifiers[ident_Sentences], context[8], context[9] );
    if( ! context[16] )
      continue;
    // closed e.Name#1 as range 12
    // closed e.Sentences#1 as range 8
    //DEBUG: s.MarkupContext#1: 5
    //DEBUG: s.Scope#1: 11
    //DEBUG: e.Name#1: 12
    //DEBUG: e.Sentences#1: 8

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </6 HalfReuse: & UnCondition-Unit$1=4/10 AsIs: s.Scope#1/11 AsIs: (/14 AsIs: e.Name#1/12 AsIs: )/15 HalfReuse: s.MarkupContext1 #5/16 } Tile{ AsIs: </0 Reuse: & MapAccum@1/4 } (/17 e.Name#1/12/18 )/20 Tile{ AsIs: s.MarkupContext#1/5 } (/21 1/22 (/23 )/24 )/25 Tile{ AsIs: e.Sentences#1/8 } Tile{ HalfReuse: >/7 AsIs: >/1 ]] }
    refalrts::alloc_open_bracket(vm, context[17]);
    refalrts::copy_evar(vm, context[18], context[19], context[12], context[13]);
    refalrts::alloc_close_bracket(vm, context[20]);
    refalrts::alloc_open_bracket(vm, context[21]);
    refalrts::alloc_number(vm, context[22], 1UL);
    refalrts::alloc_open_bracket(vm, context[23]);
    refalrts::alloc_close_bracket(vm, context[24]);
    refalrts::alloc_close_bracket(vm, context[25]);
    refalrts::reinit_open_call(context[6]);
    refalrts::reinit_name(context[10], functions[efunc_gen_UnConditionm_Unit_S1A4]);
    refalrts::reinit_svar( context[16], context[5] );
    refalrts::update_name(context[4], functions[efunc_gen_MapAccum_Z1]);
    refalrts::reinit_close_call(context[7]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[6] );
    refalrts::push_stack( vm, context[7] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[21], context[25] );
    refalrts::link_brackets( context[23], context[24] );
    refalrts::link_brackets( context[17], context[20] );
    refalrts::link_brackets( context[14], context[15] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[7];
    res = refalrts::splice_evar( res, context[8], context[9] );
    res = refalrts::splice_evar( res, context[21], context[25] );
    res = refalrts::splice_evar( res, context[5], context[5] );
    res = refalrts::splice_evar( res, context[17], context[20] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[6], context[16] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & UnCondition-Unit/4 s.MarkupContext#1/5 t.Other#1/6 >/1
  //DEBUG: t.Other#1: 6
  //DEBUG: s.MarkupContext#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & UnCondition-Unit/4 s.MarkupContext#1/5 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.Other#1/6 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[6], context[7] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_UnConditionm_Unit("UnCondition-Unit", COOKIE1_, COOKIE2_, func_UnConditionm_Unit);


static refalrts::FnResult func_gen_UnConditionm_Unitm_Sentence_S1A3(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 23 elems
  refalrts::Iter context[23];
  refalrts::zeros( context, 23 );
  // </0 & UnCondition-Unit-Sentence$1=3/4 s.SkipNo#1/5 (/8 e.RemNames#1/6 )/9 (/12 e.RemName#3/10 )/13 (/16 e.NewFunctions#1/14 )/17 (/20 e.Sentence#4/18 )/21 e.NewSentenceFunctions#4/2 >/1
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
  // closed e.RemNames#1 as range 6
  // closed e.RemName#3 as range 10
  // closed e.NewFunctions#1 as range 14
  // closed e.Sentence#4 as range 18
  // closed e.NewSentenceFunctions#4 as range 2
  //DEBUG: s.SkipNo#1: 5
  //DEBUG: e.RemNames#1: 6
  //DEBUG: e.RemName#3: 10
  //DEBUG: e.NewFunctions#1: 14
  //DEBUG: e.Sentence#4: 18
  //DEBUG: e.NewSentenceFunctions#4: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } (/22 Tile{ HalfReuse: </1 } Tile{ HalfReuse: & Add/0 HalfReuse: 1/4 AsIs: s.SkipNo#1/5 HalfReuse: >/8 } Tile{ AsIs: e.RemNames#1/6 } Tile{ AsIs: (/12 AsIs: e.RemName#3/10 AsIs: )/13 AsIs: (/16 } Tile{ AsIs: e.NewFunctions#1/14 } Tile{ AsIs: e.NewSentenceFunctions#4/2 } Tile{ AsIs: )/9 } Tile{ AsIs: )/17 AsIs: (/20 AsIs: e.Sentence#4/18 AsIs: )/21 } Tile{ ]] }
  refalrts::alloc_open_bracket(vm, context[22]);
  refalrts::reinit_open_call(context[1]);
  refalrts::reinit_name(context[0], functions[efunc_Add]);
  refalrts::reinit_number(context[4], 1UL);
  refalrts::reinit_close_call(context[8]);
  refalrts::link_brackets( context[20], context[21] );
  refalrts::link_brackets( context[22], context[17] );
  refalrts::link_brackets( context[16], context[9] );
  refalrts::link_brackets( context[12], context[13] );
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[17], context[21] );
  res = refalrts::splice_evar( res, context[9], context[9] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[14], context[15] );
  res = refalrts::splice_evar( res, context[12], context[16] );
  res = refalrts::splice_evar( res, context[6], context[7] );
  res = refalrts::splice_evar( res, context[0], context[8] );
  res = refalrts::splice_evar( res, context[1], context[1] );
  res = refalrts::splice_evar( res, context[22], context[22] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_UnConditionm_Unitm_Sentence_S1A3("UnCondition-Unit-Sentence$1=3", COOKIE1_, COOKIE2_, func_gen_UnConditionm_Unitm_Sentence_S1A3);


static refalrts::FnResult func_gen_UnConditionm_Unitm_Sentence_S1A2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 30 elems
  refalrts::Iter context[30];
  refalrts::zeros( context, 30 );
  // </0 & UnCondition-Unit-Sentence$1=2/4 s.SkipNo#1/5 (/8 e.RemNames#1/6 )/9 (/12 e.NewFunctions#1/10 )/13 s.MarkupContext#1/14 (/17 e.ConditionName#2/15 )/18 (/21 e.Sentence#1/19 )/22 e.RemName#3/2 >/1
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
  // closed e.RemNames#1 as range 6
  // closed e.NewFunctions#1 as range 10
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
  // closed e.ConditionName#2 as range 15
  // closed e.Sentence#1 as range 19
  // closed e.RemName#3 as range 2
  //DEBUG: s.SkipNo#1: 5
  //DEBUG: e.RemNames#1: 6
  //DEBUG: e.NewFunctions#1: 10
  //DEBUG: s.MarkupContext#1: 14
  //DEBUG: e.ConditionName#2: 15
  //DEBUG: e.Sentence#1: 19
  //DEBUG: e.RemName#3: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & UnCondition-Unit-Sentence$1=3/4 AsIs: s.SkipNo#1/5 AsIs: (/8 AsIs: e.RemNames#1/6 AsIs: )/9 AsIs: (/12 } Tile{ AsIs: e.RemName#3/2 } )/23 (/24 Tile{ AsIs: e.NewFunctions#1/10 } Tile{ AsIs: )/22 } </25 Tile{ HalfReuse: & UnCondition-Sentence/13 AsIs: s.MarkupContext#1/14 AsIs: (/17 AsIs: e.ConditionName#2/15 AsIs: )/18 AsIs: (/21 } e.RemName#3/2/26 )/28 Tile{ AsIs: e.Sentence#1/19 } >/29 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_close_bracket(vm, context[23]);
  refalrts::alloc_open_bracket(vm, context[24]);
  refalrts::alloc_open_call(vm, context[25]);
  refalrts::copy_evar(vm, context[26], context[27], context[2], context[3]);
  refalrts::alloc_close_bracket(vm, context[28]);
  refalrts::alloc_close_call(vm, context[29]);
  refalrts::update_name(context[4], functions[efunc_gen_UnConditionm_Unitm_Sentence_S1A3]);
  refalrts::reinit_name(context[13], functions[efunc_UnConditionm_Sentence]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[29] );
  refalrts::push_stack( vm, context[25] );
  refalrts::link_brackets( context[21], context[28] );
  refalrts::link_brackets( context[17], context[18] );
  refalrts::link_brackets( context[24], context[22] );
  refalrts::link_brackets( context[12], context[23] );
  refalrts::link_brackets( context[8], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[29], context[29] );
  res = refalrts::splice_evar( res, context[19], context[20] );
  res = refalrts::splice_evar( res, context[28], context[28] );
  res = refalrts::splice_evar( res, context[26], context[27] );
  res = refalrts::splice_evar( res, context[13], context[21] );
  res = refalrts::splice_evar( res, context[25], context[25] );
  res = refalrts::splice_evar( res, context[22], context[22] );
  res = refalrts::splice_evar( res, context[10], context[11] );
  res = refalrts::splice_evar( res, context[23], context[24] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_UnConditionm_Unitm_Sentence_S1A2("UnCondition-Unit-Sentence$1=2", COOKIE1_, COOKIE2_, func_gen_UnConditionm_Unitm_Sentence_S1A2);


static refalrts::FnResult func_UnConditionm_Unitm_Sentence(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 53 elems
  refalrts::Iter context[53];
  refalrts::zeros( context, 53 );
  // </0 & UnCondition-Unit-Sentence/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & UnCondition-Unit-Sentence/4 e.new#1/2 s.new#2/18 (/11 s.new#3/17 e.new#4/9 (/15 e.new#5/13 )/16 )/12 (/7 e.new#6/5 )/8 >/1
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
  context[15] = refalrts::brackets_right( context[13], context[14], context[9], context[10] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[15], context[16]);
  // closed e.new#5 as range 13
  // closed e.new#6 as range 5
  if( ! refalrts::svar_left( context[17], context[9], context[10] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#4 as range 9
  if( ! refalrts::svar_right( context[18], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#1 as range 2
  do {
    // </0 & UnCondition-Unit-Sentence/4 e.Name#1/19 s.MarkupContext#1/18 (/11 s.SkipNo#1/17 e.RemNames#1/21 (/15 e.NewFunctions#1/23 )/16 )/12 (/7 e.Sentence#1/25 )/8 >/1
    context[19] = context[2];
    context[20] = context[3];
    context[21] = context[9];
    context[22] = context[10];
    context[23] = context[13];
    context[24] = context[14];
    context[25] = context[5];
    context[26] = context[6];
    // closed e.Name#1 as range 19
    // closed e.RemNames#1 as range 21
    // closed e.NewFunctions#1 as range 23
    // closed e.Sentence#1 as range 25
    //DEBUG: s.MarkupContext#1: 18
    //DEBUG: s.SkipNo#1: 17
    //DEBUG: e.Name#1: 19
    //DEBUG: e.RemNames#1: 21
    //DEBUG: e.NewFunctions#1: 23
    //DEBUG: e.Sentence#1: 25
    //17: s.SkipNo#1
    //18: s.MarkupContext#1
    //19: e.Name#1
    //21: e.RemNames#1
    //23: e.NewFunctions#1
    //25: e.Sentence#1
    //30: e.Sentence#1

    refalrts::reset_allocator(vm);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::alloc_open_call(vm, context[27]);
    refalrts::alloc_name(vm, context[29], functions[efunc_gen_UnConditionm_Unitm_Sentence_S1C1]);
    refalrts::copy_evar(vm, context[30], context[31], context[25], context[26]);
    refalrts::alloc_close_call(vm, context[28]);
    refalrts::push_stack( vm, context[28] );
    refalrts::push_stack( vm, context[27] );
    res = refalrts::splice_elem( res, context[28] );
    res = refalrts::splice_evar( res, context[30], context[31] );
    res = refalrts::splice_elem( res, context[29] );
    res = refalrts::splice_elem( res, context[27] );
    refalrts::use( res );
    refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
    if (rec_res != refalrts::cSuccess)
      return rec_res;
    refalrts::this_is_generated_function(vm);
    do {
      // </27 & UnCondition-Unit-Sentence$1?1/31 (/34 e._#2/32 )/35 (/38 # Condition/40 (/43 e.ConditionName#2/41 )/44 (/47 e._0#2/45 )/48 (/51 e._1#2/49 )/52 )/39 e._2#2/29 >/28
      context[29] = 0;
      context[30] = 0;
      context[31] = refalrts::call_left( context[29], context[30], context[27], context[28] );
      context[32] = 0;
      context[33] = 0;
      context[34] = refalrts::brackets_left( context[32], context[33], context[29], context[30] );
      if( ! context[34] )
        continue;
      refalrts::bracket_pointers(context[34], context[35]);
      context[36] = 0;
      context[37] = 0;
      context[38] = refalrts::brackets_left( context[36], context[37], context[29], context[30] );
      if( ! context[38] )
        continue;
      refalrts::bracket_pointers(context[38], context[39]);
      context[40] = refalrts::ident_left( identifiers[ident_Condition], context[36], context[37] );
      if( ! context[40] )
        continue;
      context[41] = 0;
      context[42] = 0;
      context[43] = refalrts::brackets_left( context[41], context[42], context[36], context[37] );
      if( ! context[43] )
        continue;
      refalrts::bracket_pointers(context[43], context[44]);
      context[45] = 0;
      context[46] = 0;
      context[47] = refalrts::brackets_left( context[45], context[46], context[36], context[37] );
      if( ! context[47] )
        continue;
      refalrts::bracket_pointers(context[47], context[48]);
      context[49] = 0;
      context[50] = 0;
      context[51] = refalrts::brackets_left( context[49], context[50], context[36], context[37] );
      if( ! context[51] )
        continue;
      refalrts::bracket_pointers(context[51], context[52]);
      if( ! refalrts::empty_seq( context[36], context[37] ) )
        continue;
      // closed e._#2 as range 32
      // closed e.ConditionName#2 as range 41
      // closed e._0#2 as range 45
      // closed e._1#2 as range 49
      // closed e._2#2 as range 29
      //DEBUG: s.MarkupContext#1: 18
      //DEBUG: s.SkipNo#1: 17
      //DEBUG: e.Name#1: 19
      //DEBUG: e.RemNames#1: 21
      //DEBUG: e.NewFunctions#1: 23
      //DEBUG: e.Sentence#1: 25
      //DEBUG: e._#2: 32
      //DEBUG: e.ConditionName#2: 41
      //DEBUG: e._0#2: 45
      //DEBUG: e._1#2: 49
      //DEBUG: e._2#2: 29

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.SkipNo#1/17 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} (/34 e._#2/32 )/35 {REMOVED TILE} {REMOVED TILE} )/44 (/47 e._0#2/45 {REMOVED TILE} e._1#2/49 {REMOVED TILE} {REMOVED TILE} e._2#2/29 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & UnCondition-Unit-Sentence$1=2/4 } Tile{ HalfReuse: s.SkipNo1 #17/48 AsIs: (/51 } Tile{ AsIs: e.RemNames#1/21 } Tile{ AsIs: )/52 } Tile{ AsIs: (/15 AsIs: e.NewFunctions#1/23 AsIs: )/16 } Tile{ AsIs: s.MarkupContext#1/18 AsIs: (/11 } Tile{ AsIs: e.ConditionName#2/41 } Tile{ AsIs: )/12 AsIs: (/7 AsIs: e.Sentence#1/25 AsIs: )/8 AsIs: </27 Reuse: & AddSuffix/31 } Tile{ AsIs: e.Name#1/19 } Tile{ AsIs: (/38 HalfReuse: '*'/40 HalfReuse: s.SkipNo1 #17/43 } Tile{ AsIs: )/39 } Tile{ AsIs: >/28 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_gen_UnConditionm_Unitm_Sentence_S1A2]);
      refalrts::reinit_svar( context[48], context[17] );
      refalrts::update_name(context[31], functions[efunc_AddSuffix]);
      refalrts::reinit_char(context[40], '*');
      refalrts::reinit_svar( context[43], context[17] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[28] );
      refalrts::push_stack( vm, context[27] );
      refalrts::link_brackets( context[38], context[39] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[15], context[16] );
      refalrts::link_brackets( context[51], context[52] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[28];
      res = refalrts::splice_evar( res, context[39], context[39] );
      res = refalrts::splice_evar( res, context[38], context[43] );
      res = refalrts::splice_evar( res, context[19], context[20] );
      res = refalrts::splice_evar( res, context[12], context[31] );
      res = refalrts::splice_evar( res, context[41], context[42] );
      res = refalrts::splice_evar( res, context[18], context[11] );
      res = refalrts::splice_evar( res, context[15], context[16] );
      res = refalrts::splice_evar( res, context[52], context[52] );
      res = refalrts::splice_evar( res, context[21], context[22] );
      res = refalrts::splice_evar( res, context[48], context[51] );
      refalrts::splice_to_freelist_open( vm, context[4], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    refalrts::splice_to_freelist(vm, context[27], context[28]);
    continue;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & UnCondition-Unit-Sentence/4 e.Name#1/2 s.MarkupContext#1/18 (/11 s.SkipNo#1/17 e.RemNames#1/9 (/15 e.NewFunctions#1/13 )/16 )/12 (/7 e.Sentence#1/5 )/8 >/1
  // closed e.Name#1 as range 2
  // closed e.RemNames#1 as range 9
  // closed e.NewFunctions#1 as range 13
  // closed e.Sentence#1 as range 5
  //DEBUG: s.MarkupContext#1: 18
  //DEBUG: s.SkipNo#1: 17
  //DEBUG: e.Name#1: 2
  //DEBUG: e.RemNames#1: 9
  //DEBUG: e.NewFunctions#1: 13
  //DEBUG: e.Sentence#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} e.Name#1/2 s.MarkupContext#1/18 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } (/19 Tile{ AsIs: </0 Reuse: & Add/4 } Tile{ HalfReuse: 1/11 AsIs: s.SkipNo#1/17 } Tile{ AsIs: >/1 } Tile{ AsIs: e.RemNames#1/9 } '-'/20 Tile{ AsIs: (/15 AsIs: e.NewFunctions#1/13 AsIs: )/16 AsIs: )/12 AsIs: (/7 AsIs: e.Sentence#1/5 AsIs: )/8 } Tile{ ]] }
  refalrts::alloc_open_bracket(vm, context[19]);
  refalrts::alloc_char(vm, context[20], '-');
  refalrts::update_name(context[4], functions[efunc_Add]);
  refalrts::reinit_number(context[11], 1UL);
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[19], context[12] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[15], context[8] );
  res = refalrts::splice_evar( res, context[20], context[20] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[1], context[1] );
  res = refalrts::splice_evar( res, context[11], context[17] );
  res = refalrts::splice_evar( res, context[0], context[4] );
  res = refalrts::splice_evar( res, context[19], context[19] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_UnConditionm_Unitm_Sentence("UnCondition-Unit-Sentence", COOKIE1_, COOKIE2_, func_UnConditionm_Unitm_Sentence);


static refalrts::FnResult func_gen_UnConditionm_RemFunctions_S1L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
  // </0 & UnCondition-RemFunctions$1\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & UnCondition-RemFunctions$1\1/4 (/7 e.new#1/5 )/8 t.new#2/9 >/1
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
    // </0 & UnCondition-RemFunctions$1\1/4 (/7 e.Sentences#1/11 )/8 (/9 e.RemainderName#2/13 )/10 >/1
    context[11] = context[5];
    context[12] = context[6];
    context[13] = 0;
    context[14] = 0;
    if( ! refalrts::brackets_term( context[13], context[14], context[9] ) )
      continue;
    // closed e.Sentences#1 as range 11
    // closed e.RemainderName#2 as range 13
    //DEBUG: e.Sentences#1: 11
    //DEBUG: e.RemainderName#2: 13

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # Function/4 } Tile{ HalfReuse: # GN-Local/8 AsIs: (/9 AsIs: e.RemainderName#2/13 AsIs: )/10 HalfReuse: # Sentences/1 } Tile{ AsIs: e.Sentences#1/11 } Tile{ HalfReuse: )/7 } Tile{ ]] }
    refalrts::reinit_open_bracket(context[0]);
    refalrts::reinit_ident(context[4], identifiers[ident_Function]);
    refalrts::reinit_ident(context[8], identifiers[ident_GNm_Local]);
    refalrts::reinit_ident(context[1], identifiers[ident_Sentences]);
    refalrts::reinit_close_bracket(context[7]);
    refalrts::link_brackets( context[0], context[7] );
    refalrts::link_brackets( context[9], context[10] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[7], context[7] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[8], context[1] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & UnCondition-RemFunctions$1\1/4 (/7 e.Sentences#1/5 )/8 '-'/9 >/1
  if( ! refalrts::char_term( '-', context[9] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Sentences#1 as range 5
  //DEBUG: e.Sentences#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & UnCondition-RemFunctions$1\1/4 (/7 e.Sentences#1/5 )/8 '-'/9 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_UnConditionm_RemFunctions_S1L1("UnCondition-RemFunctions$1\\1", COOKIE1_, COOKIE2_, func_gen_UnConditionm_RemFunctions_S1L1);


static refalrts::FnResult func_UnConditionm_RemFunctions(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 35 elems
  refalrts::Iter context[35];
  refalrts::zeros( context, 35 );
  // </0 & UnCondition-RemFunctions/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & UnCondition-RemFunctions/4 s.new#1/5 (/8 e.new#2/6 )/9 e.new#3/2 >/1
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
    // </0 & UnCondition-RemFunctions/4 s.new#4/5 (/8 t.new#7/14 e.new#8/10 )/9 t.new#5/16 e.new#6/12 >/1
    context[10] = context[6];
    context[11] = context[7];
    context[12] = context[2];
    context[13] = context[3];
    context[15] = refalrts::tvar_left( context[14], context[10], context[11] );
    if( ! context[15] )
      continue;
    // closed e.new#8 as range 10
    context[17] = refalrts::tvar_left( context[16], context[12], context[13] );
    if( ! context[17] )
      continue;
    // closed e.new#6 as range 12
    do {
      // </0 & UnCondition-RemFunctions/4 s.SkipNo#1/5 (/8 (/14 e.#0/22 )/15 e.RemNames#1/18 )/9 t.Skip#1/16 e.Sentences#1/20 >/1
      context[18] = context[10];
      context[19] = context[11];
      context[20] = context[12];
      context[21] = context[13];
      context[22] = 0;
      context[23] = 0;
      if( ! refalrts::brackets_term( context[22], context[23], context[14] ) )
        continue;
      // closed e.#0 as range 22
      // closed e.RemNames#1 as range 18
      // closed e.Sentences#1 as range 20
      //DEBUG: t.Skip#1: 16
      //DEBUG: s.SkipNo#1: 5
      //DEBUG: e.#0: 22
      //DEBUG: e.RemNames#1: 18
      //DEBUG: e.Sentences#1: 20

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} t.Skip#1/16 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } (/24 # Function/25 Tile{ HalfReuse: # GN-Local/8 AsIs: (/14 AsIs: e.#0/22 AsIs: )/15 } # Sentences/26 e.Sentences#1/20/27 Tile{ AsIs: )/9 } Tile{ AsIs: </0 AsIs: & UnCondition-RemFunctions/4 } </29 & Add/30 1/31 Tile{ AsIs: s.SkipNo#1/5 } >/32 (/33 Tile{ AsIs: e.RemNames#1/18 } )/34 Tile{ AsIs: e.Sentences#1/20 } Tile{ AsIs: >/1 ]] }
      refalrts::alloc_open_bracket(vm, context[24]);
      refalrts::alloc_ident(vm, context[25], identifiers[ident_Function]);
      refalrts::alloc_ident(vm, context[26], identifiers[ident_Sentences]);
      refalrts::copy_evar(vm, context[27], context[28], context[20], context[21]);
      refalrts::alloc_open_call(vm, context[29]);
      refalrts::alloc_name(vm, context[30], functions[efunc_Add]);
      refalrts::alloc_number(vm, context[31], 1UL);
      refalrts::alloc_close_call(vm, context[32]);
      refalrts::alloc_open_bracket(vm, context[33]);
      refalrts::alloc_close_bracket(vm, context[34]);
      refalrts::reinit_ident(context[8], identifiers[ident_GNm_Local]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[33], context[34] );
      refalrts::push_stack( vm, context[32] );
      refalrts::push_stack( vm, context[29] );
      refalrts::link_brackets( context[24], context[9] );
      refalrts::link_brackets( context[14], context[15] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[20], context[21] );
      res = refalrts::splice_evar( res, context[34], context[34] );
      res = refalrts::splice_evar( res, context[18], context[19] );
      res = refalrts::splice_evar( res, context[32], context[33] );
      res = refalrts::splice_evar( res, context[5], context[5] );
      res = refalrts::splice_evar( res, context[29], context[31] );
      res = refalrts::splice_evar( res, context[0], context[4] );
      res = refalrts::splice_evar( res, context[9], context[9] );
      res = refalrts::splice_evar( res, context[27], context[28] );
      res = refalrts::splice_evar( res, context[26], context[26] );
      res = refalrts::splice_evar( res, context[8], context[15] );
      res = refalrts::splice_evar( res, context[24], context[25] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & UnCondition-RemFunctions/4 s.SkipNo#1/5 (/8 '-'/14 e.RemNames#1/18 )/9 t.Skip#1/16 e.Sentences#1/20 >/1
      context[18] = context[10];
      context[19] = context[11];
      context[20] = context[12];
      context[21] = context[13];
      if( ! refalrts::char_term( '-', context[14] ) )
        continue;
      // closed e.RemNames#1 as range 18
      // closed e.Sentences#1 as range 20
      //DEBUG: t.Skip#1: 16
      //DEBUG: s.SkipNo#1: 5
      //DEBUG: e.RemNames#1: 18
      //DEBUG: e.Sentences#1: 20

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} t.Skip#1/16 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } </22 & UnCondition-RemFunctions/23 </24 Tile{ HalfReuse: & Add/0 HalfReuse: 1/4 AsIs: s.SkipNo#1/5 HalfReuse: >/8 HalfReuse: (/14 AsIs: e.RemNames#1/18 AsIs: )/9 } Tile{ AsIs: e.Sentences#1/20 } Tile{ AsIs: >/1 ]] }
      refalrts::alloc_open_call(vm, context[22]);
      refalrts::alloc_name(vm, context[23], functions[efunc_UnConditionm_RemFunctions]);
      refalrts::alloc_open_call(vm, context[24]);
      refalrts::reinit_name(context[0], functions[efunc_Add]);
      refalrts::reinit_number(context[4], 1UL);
      refalrts::reinit_close_call(context[8]);
      refalrts::reinit_open_bracket(context[14]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[22] );
      refalrts::link_brackets( context[14], context[9] );
      refalrts::push_stack( vm, context[8] );
      refalrts::push_stack( vm, context[24] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[20], context[21] );
      res = refalrts::splice_evar( res, context[0], context[9] );
      res = refalrts::splice_evar( res, context[22], context[24] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & UnCondition-RemFunctions/4 s.SkipNo#1/5 (/8 t.RemainderName#1/14 e.RemNames#1/18 )/9 t.Skip#1/16 e.Sentences#1/20 >/1
    context[18] = context[10];
    context[19] = context[11];
    context[20] = context[12];
    context[21] = context[13];
    // closed e.RemNames#1 as range 18
    // closed e.Sentences#1 as range 20
    //DEBUG: t.RemainderName#1: 14
    //DEBUG: t.Skip#1: 16
    //DEBUG: s.SkipNo#1: 5
    //DEBUG: e.RemNames#1: 18
    //DEBUG: e.Sentences#1: 20

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} t.Skip#1/16 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & UnCondition-RemFunctions$1\1*2/4 } (/22 Tile{ AsIs: e.Sentences#1/20 } Tile{ HalfReuse: )/8 AsIs: t.RemainderName#1/14 } >/23 </24 & UnCondition-RemFunctions/25 </26 & Add/27 1/28 Tile{ AsIs: s.SkipNo#1/5 } >/29 (/30 Tile{ AsIs: e.RemNames#1/18 } Tile{ AsIs: )/9 } e.Sentences#1/20/31 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_bracket(vm, context[22]);
    refalrts::alloc_close_call(vm, context[23]);
    refalrts::alloc_open_call(vm, context[24]);
    refalrts::alloc_name(vm, context[25], functions[efunc_UnConditionm_RemFunctions]);
    refalrts::alloc_open_call(vm, context[26]);
    refalrts::alloc_name(vm, context[27], functions[efunc_Add]);
    refalrts::alloc_number(vm, context[28], 1UL);
    refalrts::alloc_close_call(vm, context[29]);
    refalrts::alloc_open_bracket(vm, context[30]);
    refalrts::copy_evar(vm, context[31], context[32], context[20], context[21]);
    refalrts::update_name(context[4], functions[efunc_gen_UnConditionm_RemFunctions_S1L1D2]);
    refalrts::reinit_close_bracket(context[8]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[24] );
    refalrts::link_brackets( context[30], context[9] );
    refalrts::push_stack( vm, context[29] );
    refalrts::push_stack( vm, context[26] );
    refalrts::push_stack( vm, context[23] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[22], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[31], context[32] );
    res = refalrts::splice_evar( res, context[9], context[9] );
    res = refalrts::splice_evar( res, context[18], context[19] );
    res = refalrts::splice_evar( res, context[29], context[30] );
    res = refalrts::splice_evar( res, context[5], context[5] );
    res = refalrts::splice_evar( res, context[23], context[28] );
    res = refalrts::splice_evar( res, context[8], context[15] );
    res = refalrts::splice_evar( res, context[20], context[21] );
    res = refalrts::splice_evar( res, context[22], context[22] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & UnCondition-RemFunctions/4 s.SkipNo#1/5 (/8 )/9 >/1
  if( ! refalrts::empty_seq( context[6], context[7] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: s.SkipNo#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & UnCondition-RemFunctions/4 s.SkipNo#1/5 (/8 )/9 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_UnConditionm_RemFunctions("UnCondition-RemFunctions", COOKIE1_, COOKIE2_, func_UnConditionm_RemFunctions);


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

static refalrts::NativeReference nat_ref_PatternSteps("PatternSteps", COOKIE1_, COOKIE2_, func_PatternSteps);


static refalrts::FnResult func_gen_DoPatternSteps_B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 97 elems
  refalrts::Iter context[97];
  refalrts::zeros( context, 97 );
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
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoPatternSteps/4 } Tile{ AsIs: t.UsedVariables#1/9 } Tile{ AsIs: (/7 AsIs: e.BoundEVariables#1/15 HalfReuse: (/8 } e.Index#2/30/36 )/38 Tile{ AsIs: )/14 } Tile{ AsIs: e.HolesAndItems-B#2/21 } Tile{ AsIs: (/32 Reuse: # OpenE/34 AsIs: 'e'/35 AsIs: e.Index#2/30 AsIs: )/33 } Tile{ AsIs: (/27 AsIs: # HOLE/29 } Tile{ AsIs: e.Pattern#2/25 } Tile{ AsIs: )/28 AsIs: e.HolesAndItems-E#2/23 AsIs: >/1 } Tile{ AsIs: (/13 } </39 & Map@2/40 </41 & T1/42 t.UsedVariables#1/9/43 Tile{ AsIs: e.HolesAndItems#1/17 } >/45 </46 & T2/47 t.UsedVariables#1/9/48 e.HolesAndItems#1/17/50 >/52 </53 & T3/54 t.UsedVariables#1/9/55 e.HolesAndItems#1/17/57 >/59 </60 & T4/61 t.UsedVariables#1/9/62 e.HolesAndItems#1/17/64 >/66 </67 & T5/68 t.UsedVariables#1/9/69 e.HolesAndItems#1/17/71 >/73 </74 & T5-sub/75 t.UsedVariables#1/9/76 e.Index#2/30/78 >/80 </81 & T6/82 t.UsedVariables#1/9/83 e.HolesAndItems#1/17/85 >/87 </88 & T7/89 t.UsedVariables#1/9/90 e.HolesAndItems#1/17/92 >/94 >/95 )/96 Tile{ ]] }
      refalrts::copy_evar(vm, context[36], context[37], context[30], context[31]);
      refalrts::alloc_close_bracket(vm, context[38]);
      refalrts::alloc_open_call(vm, context[39]);
      refalrts::alloc_name(vm, context[40], functions[efunc_gen_Map_Z2]);
      refalrts::alloc_open_call(vm, context[41]);
      refalrts::alloc_name(vm, context[42], functions[efunc_T1]);
      refalrts::copy_evar(vm, context[43], context[44], context[9], context[10]);
      refalrts::alloc_close_call(vm, context[45]);
      refalrts::alloc_open_call(vm, context[46]);
      refalrts::alloc_name(vm, context[47], functions[efunc_T2]);
      refalrts::copy_evar(vm, context[48], context[49], context[9], context[10]);
      refalrts::copy_evar(vm, context[50], context[51], context[17], context[18]);
      refalrts::alloc_close_call(vm, context[52]);
      refalrts::alloc_open_call(vm, context[53]);
      refalrts::alloc_name(vm, context[54], functions[efunc_T3]);
      refalrts::copy_evar(vm, context[55], context[56], context[9], context[10]);
      refalrts::copy_evar(vm, context[57], context[58], context[17], context[18]);
      refalrts::alloc_close_call(vm, context[59]);
      refalrts::alloc_open_call(vm, context[60]);
      refalrts::alloc_name(vm, context[61], functions[efunc_T4]);
      refalrts::copy_evar(vm, context[62], context[63], context[9], context[10]);
      refalrts::copy_evar(vm, context[64], context[65], context[17], context[18]);
      refalrts::alloc_close_call(vm, context[66]);
      refalrts::alloc_open_call(vm, context[67]);
      refalrts::alloc_name(vm, context[68], functions[efunc_T5]);
      refalrts::copy_evar(vm, context[69], context[70], context[9], context[10]);
      refalrts::copy_evar(vm, context[71], context[72], context[17], context[18]);
      refalrts::alloc_close_call(vm, context[73]);
      refalrts::alloc_open_call(vm, context[74]);
      refalrts::alloc_name(vm, context[75], functions[efunc_T5m_sub]);
      refalrts::copy_evar(vm, context[76], context[77], context[9], context[10]);
      refalrts::copy_evar(vm, context[78], context[79], context[30], context[31]);
      refalrts::alloc_close_call(vm, context[80]);
      refalrts::alloc_open_call(vm, context[81]);
      refalrts::alloc_name(vm, context[82], functions[efunc_T6]);
      refalrts::copy_evar(vm, context[83], context[84], context[9], context[10]);
      refalrts::copy_evar(vm, context[85], context[86], context[17], context[18]);
      refalrts::alloc_close_call(vm, context[87]);
      refalrts::alloc_open_call(vm, context[88]);
      refalrts::alloc_name(vm, context[89], functions[efunc_T7]);
      refalrts::copy_evar(vm, context[90], context[91], context[9], context[10]);
      refalrts::copy_evar(vm, context[92], context[93], context[17], context[18]);
      refalrts::alloc_close_call(vm, context[94]);
      refalrts::alloc_close_call(vm, context[95]);
      refalrts::alloc_close_bracket(vm, context[96]);
      refalrts::update_name(context[4], functions[efunc_DoPatternSteps]);
      refalrts::reinit_open_bracket(context[8]);
      refalrts::update_ident(context[34], identifiers[ident_OpenE]);
      refalrts::link_brackets( context[13], context[96] );
      refalrts::push_stack( vm, context[95] );
      refalrts::push_stack( vm, context[39] );
      refalrts::push_stack( vm, context[94] );
      refalrts::push_stack( vm, context[88] );
      refalrts::push_stack( vm, context[87] );
      refalrts::push_stack( vm, context[81] );
      refalrts::push_stack( vm, context[80] );
      refalrts::push_stack( vm, context[74] );
      refalrts::push_stack( vm, context[73] );
      refalrts::push_stack( vm, context[67] );
      refalrts::push_stack( vm, context[66] );
      refalrts::push_stack( vm, context[60] );
      refalrts::push_stack( vm, context[59] );
      refalrts::push_stack( vm, context[53] );
      refalrts::push_stack( vm, context[52] );
      refalrts::push_stack( vm, context[46] );
      refalrts::push_stack( vm, context[45] );
      refalrts::push_stack( vm, context[41] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[27], context[28] );
      refalrts::link_brackets( context[32], context[33] );
      refalrts::link_brackets( context[7], context[14] );
      refalrts::link_brackets( context[8], context[38] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[45], context[96] );
      res = refalrts::splice_evar( res, context[17], context[18] );
      res = refalrts::splice_evar( res, context[39], context[44] );
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

static refalrts::NativeReference nat_ref_gen_DoPatternSteps_B1("DoPatternSteps:1", COOKIE1_, COOKIE2_, func_gen_DoPatternSteps_B1);


static refalrts::FnResult func_DoPatternSteps(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
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
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoPatternSteps:1/4 } (/11 Tile{ AsIs: e.BoundEVariables#1/7 } )/12 Tile{ AsIs: t.UsedVariables#1/5 AsIs: (/9 } e.HolesAndItems#1/2/13 Tile{ AsIs: )/10 AsIs: e.HolesAndItems#1/2 AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[11]);
  refalrts::alloc_close_bracket(vm, context[12]);
  refalrts::copy_evar(vm, context[13], context[14], context[2], context[3]);
  refalrts::update_name(context[4], functions[efunc_gen_DoPatternSteps_B1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[9], context[10] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[10];
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[5], context[9] );
  res = refalrts::splice_evar( res, context[12], context[12] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_DoPatternSteps("DoPatternSteps", COOKIE1_, COOKIE2_, func_DoPatternSteps);


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

static refalrts::NativeReference nat_ref_HardItem("HardItem", COOKIE1_, COOKIE2_, func_HardItem);


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

static refalrts::NativeReference nat_ref_BindBrackets("BindBrackets", COOKIE1_, COOKIE2_, func_BindBrackets);


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
    // </0 & DoBindBrackets/4 (/7 t.new#7/9 e.new#8/11 )/8 (/17 s.new#4/19 e.new#5/15 )/18 e.new#6/13 >/1
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
    // closed e.new#8 as range 11
    // closed e.new#6 as range 13
    if( ! refalrts::svar_left( context[19], context[15], context[16] ) )
      continue;
    // closed e.new#5 as range 15
    do {
      // </0 & DoBindBrackets/4 (/7 t.new#13/9 e.new#14/20 )/8 (/17 s.new#10/19 s.new#11/26 e.new#12/22 )/18 e.new#9/24 >/1
      context[20] = context[11];
      context[21] = context[12];
      context[22] = context[15];
      context[23] = context[16];
      context[24] = context[13];
      context[25] = context[14];
      // closed e.new#14 as range 20
      // closed e.new#9 as range 24
      if( ! refalrts::svar_left( context[26], context[22], context[23] ) )
        continue;
      // closed e.new#12 as range 22
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
      // </0 & DoBindBrackets/4 (/7 t.new#11/9 e.new#12/20 )/8 (/17 s.new#10/19 )/18 e.new#9/22 >/1
      context[20] = context[11];
      context[21] = context[12];
      context[22] = context[13];
      context[23] = context[14];
      if( ! refalrts::empty_seq( context[15], context[16] ) )
        continue;
      // closed e.new#12 as range 20
      // closed e.new#9 as range 22
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

static refalrts::NativeReference nat_ref_DoBindBrackets("DoBindBrackets", COOKIE1_, COOKIE2_, func_DoBindBrackets);


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
    refalrts::alloc_name(vm, context[26], functions[efunc_NewVarNameSuf]);
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
      refalrts::alloc_name(vm, context[33], functions[efunc_NewVarNameSuf]);
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
        refalrts::alloc_name(vm, context[40], functions[efunc_NewVarNameSuf]);
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

static refalrts::NativeReference nat_ref_T1("T1", COOKIE1_, COOKIE2_, func_T1);


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
      refalrts::alloc_name(vm, context[28], functions[efunc_NewVarNameSuf]);
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

static refalrts::NativeReference nat_ref_PassiveHoles("PassiveHoles", COOKIE1_, COOKIE2_, func_PassiveHoles);


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
    refalrts::alloc_name(vm, context[26], functions[efunc_NewVarNameSuf]);
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
      refalrts::alloc_name(vm, context[33], functions[efunc_NewVarNameSuf]);
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
        refalrts::alloc_name(vm, context[40], functions[efunc_NewVarNameSuf]);
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

static refalrts::NativeReference nat_ref_T2("T2", COOKIE1_, COOKIE2_, func_T2);


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
    refalrts::alloc_name(vm, context[26], functions[efunc_NewVarNameSuf]);
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

static refalrts::NativeReference nat_ref_T3("T3", COOKIE1_, COOKIE2_, func_T3);


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
    refalrts::alloc_name(vm, context[26], functions[efunc_NewVarNameSuf]);
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

static refalrts::NativeReference nat_ref_T4("T4", COOKIE1_, COOKIE2_, func_T4);


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

static refalrts::NativeReference nat_ref_T5("T5", COOKIE1_, COOKIE2_, func_T5);


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

static refalrts::NativeReference nat_ref_T5m_UnHole("T5-UnHole", COOKIE1_, COOKIE2_, func_T5m_UnHole);


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
  refalrts::alloc_name(vm, context[11], functions[efunc_NewVarNameSuf]);
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
    refalrts::alloc_name(vm, context[18], functions[efunc_NewVarNameSuf]);
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

static refalrts::NativeReference nat_ref_T5m_sub("T5-sub", COOKIE1_, COOKIE2_, func_T5m_sub);


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
    // </0 & Substitute/4 t.new#4/15 e.new#5/11 (/7 t.new#6/9 e.new#7/13 )/8 >/1
    context[11] = context[2];
    context[12] = context[3];
    context[13] = context[5];
    context[14] = context[6];
    // closed e.new#7 as range 13
    context[16] = refalrts::tvar_left( context[15], context[11], context[12] );
    if( ! context[16] )
      continue;
    // closed e.new#5 as range 11
    do {
      // </0 & Substitute/4 (/15 s.new#8/23 e.new#9/21 )/16 e.new#10/17 (/7 t.new#11/9 e.new#12/19 )/8 >/1
      context[17] = context[11];
      context[18] = context[12];
      context[19] = context[13];
      context[20] = context[14];
      context[21] = 0;
      context[22] = 0;
      if( ! refalrts::brackets_term( context[21], context[22], context[15] ) )
        continue;
      // closed e.new#10 as range 17
      // closed e.new#12 as range 19
      if( ! refalrts::svar_left( context[23], context[21], context[22] ) )
        continue;
      // closed e.new#9 as range 21
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

static refalrts::NativeReference nat_ref_Substitute("Substitute", COOKIE1_, COOKIE2_, func_Substitute);


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
    refalrts::alloc_name(vm, context[26], functions[efunc_NewVarNameSuf]);
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
      refalrts::alloc_name(vm, context[33], functions[efunc_NewVarNameSuf]);
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

static refalrts::NativeReference nat_ref_T6("T6", COOKIE1_, COOKIE2_, func_T6);


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
    refalrts::alloc_name(vm, context[26], functions[efunc_NewVarNameSuf]);
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
      refalrts::alloc_name(vm, context[33], functions[efunc_NewVarNameSuf]);
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

static refalrts::NativeReference nat_ref_T7("T7", COOKIE1_, COOKIE2_, func_T7);


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

static refalrts::NativeReference nat_ref_T0("T0", COOKIE1_, COOKIE2_, func_T0);


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

static refalrts::NativeReference nat_ref_DoT0("DoT0", COOKIE1_, COOKIE2_, func_DoT0);


static refalrts::FnResult func_UnConditionm_Sentence(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 93 elems
  refalrts::Iter context[93];
  refalrts::zeros( context, 93 );
  // </0 & UnCondition-Sentence/4 s.MarkupContext#1/5 (/8 e.ConditionName#1/6 )/9 t.ContName#1/10 e.Sentence#1/2 >/1
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
  refalrts::alloc_name(vm, context[14], functions[efunc_gen_UnConditionm_Sentence_C1]);
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
    // </12 & UnCondition-Sentence?1/16 (/19 e.Pattern#2/17 )/20 (/23 # Condition/25 (/28 e.ConditionName#1/38 )/29 (/32 e.CondResult#2/30 )/33 (/36 e.CondPattern#2/34 )/37 )/24 e.SentenceTail#2/14 >/13
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
    refalrts::alloc_name(vm, context[42], functions[efunc_gen_UnConditionm_Sentence_C2]);
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
      // </40 & UnCondition-Sentence?2/44 e.CheckFunction#3/42 >/41
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
      refalrts::alloc_name(vm, context[47], functions[efunc_gen_UnConditionm_Sentence_C3]);
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
        // </45 & UnCondition-Sentence?3/49 e.SentenceVariables#4/47 >/46
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
        refalrts::alloc_name(vm, context[52], functions[efunc_gen_UnConditionm_Sentence_C4]);
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
          // </50 & UnCondition-Sentence?4/54 e.Context#5/52 >/51
          context[52] = 0;
          context[53] = 0;
          context[54] = refalrts::call_left( context[52], context[53], context[50], context[51] );
          // closed e.Context#5 as range 52
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
          //DEBUG: e.Context#5: 52
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
          //52: e.Context#5
          //61: e.SentenceVariables#4
          //64: e.Pattern#2

          refalrts::reset_allocator(vm);
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[1];
          refalrts::alloc_open_call(vm, context[55]);
          refalrts::alloc_name(vm, context[57], functions[efunc_gen_UnConditionm_Sentence_C5]);
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
            // </55 & UnCondition-Sentence?5/59 e.PatternSteps#6/57 >/56
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
            //DEBUG: e.Context#5: 52
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
            //52: e.Context#5
            //57: e.PatternSteps#6
            //66: e.ConditionName#1
            //70: e.SentenceVariables#4
            //73: t.ContName#1
            //75: e.CheckFunction#3
            //79: e.Context#5
            //83: e.CondResult#2
            //86: e.PatternSteps#6

            refalrts::reset_allocator(vm);
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = context[1];
            refalrts::alloc_open_call(vm, context[60]);
            refalrts::alloc_name(vm, context[62], functions[efunc_gen_UnConditionm_Sentence_C6]);
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
              // </60 & UnCondition-Sentence?6/64 (/67 e.ContSentence#7/65 )/68 e.OpenEFunctions#7/62 >/61
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
              //DEBUG: e.Context#5: 52
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
              //52: e.Context#5
              //57: e.PatternSteps#6
              //62: e.OpenEFunctions#7
              //65: e.ContSentence#7
              //76: e.CheckFunction#3
              //82: e.Context#5
              //84: e.CondPattern#2
              //87: e.SentenceTail#2
              //90: e.ContSentence#7

              refalrts::reset_allocator(vm);
              refalrts::Iter trash_prev = arg_begin->prev;
              refalrts::use(trash_prev);
              refalrts::Iter res = context[1];
              refalrts::alloc_open_call(vm, context[69]);
              refalrts::alloc_name(vm, context[71], functions[efunc_gen_UnConditionm_Sentence_C7]);
              refalrts::alloc_open_bracket(vm, context[72]);
              refalrts::alloc_ident(vm, context[73], identifiers[ident_Function]);
              refalrts::alloc_ident(vm, context[74], identifiers[ident_GNm_Local]);
              refalrts::alloc_open_bracket(vm, context[75]);
              refalrts::copy_evar(vm, context[76], context[77], context[42], context[43]);
              refalrts::alloc_close_bracket(vm, context[78]);
              refalrts::alloc_ident(vm, context[79], identifiers[ident_Sentences]);
              refalrts::alloc_open_bracket(vm, context[80]);
              refalrts::alloc_open_bracket(vm, context[81]);
              refalrts::copy_evar(vm, context[82], context[83], context[52], context[53]);
              refalrts::copy_evar(vm, context[84], context[85], context[34], context[35]);
              refalrts::alloc_close_bracket(vm, context[86]);
              refalrts::copy_evar(vm, context[87], context[88], context[14], context[15]);
              refalrts::alloc_close_bracket(vm, context[89]);
              refalrts::copy_evar(vm, context[90], context[91], context[65], context[66]);
              refalrts::alloc_close_bracket(vm, context[92]);
              refalrts::alloc_close_call(vm, context[70]);
              refalrts::push_stack( vm, context[70] );
              refalrts::push_stack( vm, context[69] );
              res = refalrts::splice_elem( res, context[70] );
              refalrts::link_brackets( context[72], context[92] );
              res = refalrts::splice_elem( res, context[92] );
              res = refalrts::splice_evar( res, context[90], context[91] );
              refalrts::link_brackets( context[80], context[89] );
              res = refalrts::splice_elem( res, context[89] );
              res = refalrts::splice_evar( res, context[87], context[88] );
              refalrts::link_brackets( context[81], context[86] );
              res = refalrts::splice_elem( res, context[86] );
              res = refalrts::splice_evar( res, context[84], context[85] );
              res = refalrts::splice_evar( res, context[82], context[83] );
              res = refalrts::splice_elem( res, context[81] );
              res = refalrts::splice_elem( res, context[80] );
              res = refalrts::splice_elem( res, context[79] );
              refalrts::link_brackets( context[75], context[78] );
              res = refalrts::splice_elem( res, context[78] );
              res = refalrts::splice_evar( res, context[76], context[77] );
              res = refalrts::splice_elem( res, context[75] );
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
                // </69 & UnCondition-Sentence?7/73 t.CheckFunction#8/74 >/70
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
                //DEBUG: e.Context#5: 52
                //DEBUG: e.PatternSteps#6: 57
                //DEBUG: e.ContSentence#7: 65
                //DEBUG: e.OpenEFunctions#7: 62
                //DEBUG: t.CheckFunction#8: 74

                refalrts::reset_allocator(vm);
                //TRASH: {REMOVED TILE} </0 & UnCondition-Sentence/4 s.MarkupContext#1/5 (/8 e.ConditionName#1/6 )/9 t.ContName#1/10 e.Sentence#1/2 </12 {REMOVED TILE} e.ConditionName#1/38 )/29 (/32 {REMOVED TILE} {REMOVED TILE} (/36 e.CondPattern#2/34 {REMOVED TILE} e.SentenceTail#2/14 {REMOVED TILE} e.SentenceVariables#4/47 {REMOVED TILE} & UnCondition-Sentence?5/59 e.PatternSteps#6/57 {REMOVED TILE} {REMOVED TILE} e.ContSentence#7/65 )/68 {REMOVED TILE} >/61 </69 & UnCondition-Sentence?7/73 {REMOVED TILE} >/70 >/1 {REMOVED TILE}
                //RESULT: Tile{ [[ } Tile{ HalfReuse: (/16 AsIs: (/19 AsIs: e.Pattern#2/17 AsIs: )/20 AsIs: (/23 HalfReuse: (/25 HalfReuse: # CallBrackets/28 } Tile{ HalfReuse: (/56 HalfReuse: # Symbol/60 HalfReuse: # Name/64 } e.CheckFunction#3/42/76 Tile{ AsIs: )/33 } e.Context#5/52/78 Tile{ AsIs: e.CondResult#2/30 } Tile{ AsIs: )/37 AsIs: )/24 } Tile{ HalfReuse: )/13 HalfReuse: (/40 HalfReuse: # Drive/44 AsIs: e.CheckFunction#3/42 HalfReuse: )/41 HalfReuse: (/45 HalfReuse: # Spec/49 } Tile{ AsIs: (/67 } e.CheckFunction#3/42/80 Tile{ HalfReuse: )/46 AsIs: </50 Reuse: & CreateSpecPatternForContext/54 AsIs: e.Context#5/52 AsIs: >/51 HalfReuse: )/55 } Tile{ AsIs: t.CheckFunction#8/74 } Tile{ AsIs: e.OpenEFunctions#7/62 } Tile{ ]] }
                refalrts::copy_evar(vm, context[76], context[77], context[42], context[43]);
                refalrts::copy_evar(vm, context[78], context[79], context[52], context[53]);
                refalrts::copy_evar(vm, context[80], context[81], context[42], context[43]);
                refalrts::reinit_open_bracket(context[16]);
                refalrts::reinit_open_bracket(context[25]);
                refalrts::reinit_ident(context[28], identifiers[ident_CallBrackets]);
                refalrts::reinit_open_bracket(context[56]);
                refalrts::reinit_ident(context[60], identifiers[ident_Symbol]);
                refalrts::reinit_ident(context[64], identifiers[ident_Name]);
                refalrts::reinit_close_bracket(context[13]);
                refalrts::reinit_open_bracket(context[40]);
                refalrts::reinit_ident(context[44], identifiers[ident_Drive]);
                refalrts::reinit_close_bracket(context[41]);
                refalrts::reinit_open_bracket(context[45]);
                refalrts::reinit_ident(context[49], identifiers[ident_Spec]);
                refalrts::reinit_close_bracket(context[46]);
                refalrts::update_name(context[54], functions[efunc_CreateSpecPatternForContext]);
                refalrts::reinit_close_bracket(context[55]);
                refalrts::link_brackets( context[45], context[55] );
                refalrts::push_stack( vm, context[51] );
                refalrts::push_stack( vm, context[50] );
                refalrts::link_brackets( context[67], context[46] );
                refalrts::link_brackets( context[40], context[41] );
                refalrts::link_brackets( context[16], context[13] );
                refalrts::link_brackets( context[23], context[24] );
                refalrts::link_brackets( context[25], context[37] );
                refalrts::link_brackets( context[56], context[33] );
                refalrts::link_brackets( context[19], context[20] );
                refalrts::Iter trash_prev = arg_begin->prev;
                refalrts::use(trash_prev);
                refalrts::Iter res = arg_end->next;
                res = refalrts::splice_evar( res, context[62], context[63] );
                res = refalrts::splice_evar( res, context[74], context[75] );
                res = refalrts::splice_evar( res, context[46], context[55] );
                res = refalrts::splice_evar( res, context[80], context[81] );
                res = refalrts::splice_evar( res, context[67], context[67] );
                res = refalrts::splice_evar( res, context[13], context[49] );
                res = refalrts::splice_evar( res, context[37], context[24] );
                res = refalrts::splice_evar( res, context[30], context[31] );
                res = refalrts::splice_evar( res, context[78], context[79] );
                res = refalrts::splice_evar( res, context[33], context[33] );
                res = refalrts::splice_evar( res, context[76], context[77] );
                res = refalrts::splice_evar( res, context[56], context[64] );
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

static refalrts::NativeReference nat_ref_UnConditionm_Sentence("UnCondition-Sentence", COOKIE1_, COOKIE2_, func_UnConditionm_Sentence);


static refalrts::FnResult func_ConditionContext(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
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
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & CreateContext/4 AsIs: s.MarkupContext#1/5 } </6 & Unique/7 </8 & ExtractVariables-Expr/9 Tile{ AsIs: e.Pattern#1/2 } >/10 >/11 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[6]);
  refalrts::alloc_name(vm, context[7], functions[efunc_Unique]);
  refalrts::alloc_open_call(vm, context[8]);
  refalrts::alloc_name(vm, context[9], functions[efunc_ExtractVariablesm_Expr]);
  refalrts::alloc_close_call(vm, context[10]);
  refalrts::alloc_close_call(vm, context[11]);
  refalrts::update_name(context[4], functions[efunc_CreateContext]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[11] );
  refalrts::push_stack( vm, context[6] );
  refalrts::push_stack( vm, context[10] );
  refalrts::push_stack( vm, context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[10], context[11] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[6], context[9] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ConditionContext("ConditionContext", COOKIE1_, COOKIE2_, func_ConditionContext);


static refalrts::FnResult func_OpenEChain(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 70 elems
  refalrts::Iter context[70];
  refalrts::zeros( context, 70 );
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
    // </0 & OpenEChain/4 (/7 e.ConditionName#1/35 )/8 (/11 e.VarNames#1/37 )/12 (/13 e.ContName#1/47 )/14 (/17 e.CheckFunction#1/39 )/18 (/21 e.Context#1/41 )/22 (/25 e.CondResult#1/43 )/26 (/29 (/33 e.T0#1/45 )/34 )/30 >/1
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
    context[47] = 0;
    context[48] = 0;
    if( ! refalrts::brackets_term( context[47], context[48], context[13] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.ConditionName#1 as range 35
    // closed e.VarNames#1 as range 37
    // closed e.ContName#1 as range 47
    // closed e.CheckFunction#1 as range 39
    // closed e.Context#1 as range 41
    // closed e.CondResult#1 as range 43
    // closed e.T0#1 as range 45
    //DEBUG: e.ConditionName#1: 35
    //DEBUG: e.VarNames#1: 37
    //DEBUG: e.ContName#1: 47
    //DEBUG: e.CheckFunction#1: 39
    //DEBUG: e.Context#1: 41
    //DEBUG: e.CondResult#1: 43
    //DEBUG: e.T0#1: 45
    //35: e.ConditionName#1
    //37: e.VarNames#1
    //39: e.CheckFunction#1
    //41: e.Context#1
    //43: e.CondResult#1
    //45: e.T0#1
    //47: e.ContName#1
    //55: e.VarNames#1

    refalrts::reset_allocator(vm);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::alloc_open_call(vm, context[49]);
    refalrts::alloc_name(vm, context[51], functions[efunc_gen_OpenEChain_S1C1]);
    refalrts::alloc_open_call(vm, context[52]);
    refalrts::alloc_name(vm, context[53], functions[efunc_NewVarName]);
    refalrts::alloc_open_bracket(vm, context[54]);
    refalrts::copy_evar(vm, context[55], context[56], context[37], context[38]);
    refalrts::alloc_close_bracket(vm, context[57]);
    refalrts::alloc_chars(vm, context[58], context[59], "eOther", 6);
    refalrts::alloc_number(vm, context[60], 0UL);
    refalrts::alloc_close_call(vm, context[61]);
    refalrts::alloc_close_call(vm, context[50]);
    refalrts::push_stack( vm, context[50] );
    refalrts::push_stack( vm, context[49] );
    res = refalrts::splice_elem( res, context[50] );
    refalrts::push_stack( vm, context[61] );
    refalrts::push_stack( vm, context[52] );
    res = refalrts::splice_elem( res, context[61] );
    res = refalrts::splice_elem( res, context[60] );
    res = refalrts::splice_evar( res, context[58], context[59] );
    refalrts::link_brackets( context[54], context[57] );
    res = refalrts::splice_elem( res, context[57] );
    res = refalrts::splice_evar( res, context[55], context[56] );
    res = refalrts::splice_elem( res, context[54] );
    res = refalrts::splice_elem( res, context[53] );
    res = refalrts::splice_elem( res, context[52] );
    res = refalrts::splice_elem( res, context[51] );
    res = refalrts::splice_elem( res, context[49] );
    refalrts::use( res );
    refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
    if (rec_res != refalrts::cSuccess)
      return rec_res;
    refalrts::this_is_generated_function(vm);
    do {
      // </49 & OpenEChain$1?1/53 (/56 e.NewVarNames#2/54 )/57 e.eOther#2/51 >/50
      context[51] = 0;
      context[52] = 0;
      context[53] = refalrts::call_left( context[51], context[52], context[49], context[50] );
      context[54] = 0;
      context[55] = 0;
      context[56] = refalrts::brackets_left( context[54], context[55], context[51], context[52] );
      if( ! context[56] )
        continue;
      refalrts::bracket_pointers(context[56], context[57]);
      // closed e.NewVarNames#2 as range 54
      // closed e.eOther#2 as range 51
      //DEBUG: e.ConditionName#1: 35
      //DEBUG: e.VarNames#1: 37
      //DEBUG: e.ContName#1: 47
      //DEBUG: e.CheckFunction#1: 39
      //DEBUG: e.Context#1: 41
      //DEBUG: e.CondResult#1: 43
      //DEBUG: e.T0#1: 45
      //DEBUG: e.NewVarNames#2: 54
      //DEBUG: e.eOther#2: 51

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} e.ConditionName#1/35 )/8 (/11 e.VarNames#1/37 )/12 (/13 {REMOVED TILE} )/14 {REMOVED TILE} e.CheckFunction#1/39 {REMOVED TILE} e.CondResult#1/43 {REMOVED TILE} {REMOVED TILE} (/56 e.NewVarNames#2/54 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/17 } Tile{ HalfReuse: (/18 AsIs: (/21 AsIs: e.Context#1/41 HalfReuse: (/22 HalfReuse: # TkVariable/25 } Tile{ AsIs: e.eOther#2/51 } Tile{ AsIs: )/57 } Tile{ AsIs: )/26 AsIs: (/29 } Tile{ HalfReuse: (/0 HalfReuse: # CallBrackets/4 AsIs: (/7 } Tile{ HalfReuse: # Symbol/50 HalfReuse: # Name/1 } Tile{ AsIs: e.ContName#1/47 } Tile{ HalfReuse: )/33 AsIs: e.T0#1/45 AsIs: )/34 AsIs: )/30 HalfReuse: )/49 HalfReuse: )/53 } Tile{ ]] }
      refalrts::reinit_open_bracket(context[18]);
      refalrts::reinit_open_bracket(context[22]);
      refalrts::reinit_ident(context[25], identifiers[ident_TkVariable]);
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_ident(context[4], identifiers[ident_CallBrackets]);
      refalrts::reinit_ident(context[50], identifiers[ident_Symbol]);
      refalrts::reinit_ident(context[1], identifiers[ident_Name]);
      refalrts::reinit_close_bracket(context[33]);
      refalrts::reinit_close_bracket(context[49]);
      refalrts::reinit_close_bracket(context[53]);
      refalrts::link_brackets( context[17], context[53] );
      refalrts::link_brackets( context[18], context[49] );
      refalrts::link_brackets( context[29], context[30] );
      refalrts::link_brackets( context[0], context[34] );
      refalrts::link_brackets( context[7], context[33] );
      refalrts::link_brackets( context[21], context[26] );
      refalrts::link_brackets( context[22], context[57] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[33], context[53] );
      res = refalrts::splice_evar( res, context[47], context[48] );
      res = refalrts::splice_evar( res, context[50], context[1] );
      res = refalrts::splice_evar( res, context[0], context[7] );
      res = refalrts::splice_evar( res, context[26], context[29] );
      res = refalrts::splice_evar( res, context[57], context[57] );
      res = refalrts::splice_evar( res, context[51], context[52] );
      res = refalrts::splice_evar( res, context[18], context[25] );
      res = refalrts::splice_evar( res, context[17], context[17] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    refalrts::splice_to_freelist(vm, context[49], context[50]);
    continue;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & OpenEChain/4 (/7 e.ConditionName#1/5 )/8 (/11 e.VarNames#1/9 )/12 t.ContName#1/13 (/17 e.CheckFunction#1/15 )/18 (/21 e.Context#1/19 )/22 (/25 e.CondResult#1/23 )/26 (/29 (/33 e.T0#1/31 )/34 )/30 e.Templates#1/2 >/1
  // closed e.ConditionName#1 as range 5
  // closed e.VarNames#1 as range 9
  // closed e.CheckFunction#1 as range 15
  // closed e.Context#1 as range 19
  // closed e.CondResult#1 as range 23
  // closed e.T0#1 as range 31
  // closed e.Templates#1 as range 2
  //DEBUG: t.ContName#1: 13
  //DEBUG: e.ConditionName#1: 5
  //DEBUG: e.VarNames#1: 9
  //DEBUG: e.CheckFunction#1: 15
  //DEBUG: e.Context#1: 19
  //DEBUG: e.CondResult#1: 23
  //DEBUG: e.T0#1: 31
  //DEBUG: e.Templates#1: 2
  //2: e.Templates#1
  //5: e.ConditionName#1
  //9: e.VarNames#1
  //13: t.ContName#1
  //15: e.CheckFunction#1
  //19: e.Context#1
  //23: e.CondResult#1
  //31: e.T0#1
  //38: e.ConditionName#1

  refalrts::reset_allocator(vm);
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::alloc_open_call(vm, context[35]);
  refalrts::alloc_name(vm, context[37], functions[efunc_gen_OpenEChain_S2C1]);
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
    // </35 & OpenEChain$2?1/39 e.NextForward#2/37 >/36
    context[37] = 0;
    context[38] = 0;
    context[39] = refalrts::call_left( context[37], context[38], context[35], context[36] );
    // closed e.NextForward#2 as range 37
    //DEBUG: t.ContName#1: 13
    //DEBUG: e.ConditionName#1: 5
    //DEBUG: e.VarNames#1: 9
    //DEBUG: e.CheckFunction#1: 15
    //DEBUG: e.Context#1: 19
    //DEBUG: e.CondResult#1: 23
    //DEBUG: e.T0#1: 31
    //DEBUG: e.Templates#1: 2
    //DEBUG: e.NextForward#2: 37
    //2: e.Templates#1
    //5: e.ConditionName#1
    //9: e.VarNames#1
    //13: t.ContName#1
    //15: e.CheckFunction#1
    //19: e.Context#1
    //23: e.CondResult#1
    //31: e.T0#1
    //37: e.NextForward#2
    //46: e.ConditionName#1
    //51: e.NextForward#2
    //54: t.ContName#1
    //56: e.CheckFunction#1
    //60: e.Context#1
    //62: e.CondResult#1
    //67: e.Templates#1

    refalrts::reset_allocator(vm);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::alloc_open_call(vm, context[40]);
    refalrts::alloc_name(vm, context[42], functions[efunc_gen_OpenEChain_S2C2]);
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
      // </40 & OpenEChain$2?2/44 e.NewFunctions#3/42 >/41
      context[42] = 0;
      context[43] = 0;
      context[44] = refalrts::call_left( context[42], context[43], context[40], context[41] );
      // closed e.NewFunctions#3 as range 42
      //DEBUG: t.ContName#1: 13
      //DEBUG: e.ConditionName#1: 5
      //DEBUG: e.VarNames#1: 9
      //DEBUG: e.CheckFunction#1: 15
      //DEBUG: e.Context#1: 19
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
      //19: e.Context#1
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
      refalrts::alloc_name(vm, context[47], functions[efunc_gen_OpenEChain_S2C3]);
      refalrts::alloc_open_call(vm, context[48]);
      refalrts::alloc_name(vm, context[49], functions[efunc_NewVarName]);
      refalrts::alloc_open_bracket(vm, context[50]);
      refalrts::copy_evar(vm, context[51], context[52], context[9], context[10]);
      refalrts::alloc_close_bracket(vm, context[53]);
      refalrts::alloc_chars(vm, context[54], context[55], "eOther", 6);
      refalrts::alloc_number(vm, context[56], 0UL);
      refalrts::alloc_close_call(vm, context[57]);
      refalrts::alloc_close_call(vm, context[46]);
      refalrts::push_stack( vm, context[46] );
      refalrts::push_stack( vm, context[45] );
      res = refalrts::splice_elem( res, context[46] );
      refalrts::push_stack( vm, context[57] );
      refalrts::push_stack( vm, context[48] );
      res = refalrts::splice_elem( res, context[57] );
      res = refalrts::splice_elem( res, context[56] );
      res = refalrts::splice_evar( res, context[54], context[55] );
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
        // </45 & OpenEChain$2?3/49 (/52 e.NewVarNames#4/50 )/53 e.eOther#4/47 >/46
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
        //DEBUG: e.Context#1: 19
        //DEBUG: e.CondResult#1: 23
        //DEBUG: e.T0#1: 31
        //DEBUG: e.Templates#1: 2
        //DEBUG: e.NextForward#2: 37
        //DEBUG: e.NewFunctions#3: 42
        //DEBUG: e.NewVarNames#4: 50
        //DEBUG: e.eOther#4: 47

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} & OpenEChain/4 (/7 e.ConditionName#1/5 {REMOVED TILE} e.VarNames#1/9 )/12 t.ContName#1/13 (/17 e.CheckFunction#1/15 {REMOVED TILE} e.CondResult#1/23 {REMOVED TILE} {REMOVED TILE} e.Templates#1/2 </35 & OpenEChain$2?1/39 {REMOVED TILE} >/36 </40 & OpenEChain$2?2/44 {REMOVED TILE} {REMOVED TILE} e.NewVarNames#4/50 )/53 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ HalfReuse: (/18 AsIs: (/21 AsIs: e.Context#1/19 HalfReuse: (/22 HalfReuse: # TkVariable/25 } Tile{ AsIs: e.eOther#4/47 } Tile{ AsIs: )/26 HalfReuse: )/29 } Tile{ HalfReuse: (/41 HalfReuse: (/45 HalfReuse: # CallBrackets/49 AsIs: (/52 } Tile{ HalfReuse: # Symbol/46 HalfReuse: # Name/1 } Tile{ AsIs: e.NextForward#2/37 } Tile{ HalfReuse: )/33 AsIs: e.T0#1/31 AsIs: )/34 AsIs: )/30 } Tile{ AsIs: )/8 HalfReuse: )/11 } Tile{ AsIs: e.NewFunctions#3/42 } Tile{ ]] }
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

static refalrts::NativeReference nat_ref_OpenEChain("OpenEChain", COOKIE1_, COOKIE2_, func_OpenEChain);


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

static refalrts::NativeReference nat_ref_DoOpenEChain("DoOpenEChain", COOKIE1_, COOKIE2_, func_DoOpenEChain);


static refalrts::FnResult func_MakeOpenEm_ForwardNext(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 108 elems
  refalrts::Iter context[108];
  refalrts::zeros( context, 108 );
  // </0 & MakeOpenE-ForwardNext/4 (/7 e.ConditionName#1/5 )/8 s.CurrentForwardId#1/57 (/55 e.CurrentForwardName#1/53 )/56 (/51 e.ContName#1/49 )/52 (/47 e.CheckFunction#1/45 )/48 (/43 e.CheckFunctionArg#1/41 )/44 (/39 e.T1#1/37 )/40 (/35 e.T2#1/33 )/36 (/31 e.T3#1/29 )/32 (/27 e.T4#1/25 )/28 (/23 e.T5#1/21 )/24 (/19 e.T5-sub#1/17 )/20 (/15 e.T6#1/13 )/16 (/11 e.T7#1/9 )/12 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
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
  context[49] = 0;
  context[50] = 0;
  context[51] = refalrts::brackets_right( context[49], context[50], context[2], context[3] );
  if( ! context[51] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[51], context[52]);
  context[53] = 0;
  context[54] = 0;
  context[55] = refalrts::brackets_right( context[53], context[54], context[2], context[3] );
  if( ! context[55] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[55], context[56]);
  // closed e.ConditionName#1 as range 5
  // closed e.CurrentForwardName#1 as range 53
  // closed e.ContName#1 as range 49
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
  if( ! refalrts::svar_left( context[57], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: e.ConditionName#1: 5
  //DEBUG: e.CurrentForwardName#1: 53
  //DEBUG: e.ContName#1: 49
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
  //DEBUG: s.CurrentForwardId#1: 57
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
  //49: e.ContName#1
  //53: e.CurrentForwardName#1
  //57: s.CurrentForwardId#1
  //61: e.ConditionName#1
  //67: s.CurrentForwardId#1

  refalrts::reset_allocator(vm);
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::alloc_open_call(vm, context[58]);
  refalrts::alloc_name(vm, context[60], functions[efunc_gen_MakeOpenEm_ForwardNext_C1]);
  refalrts::copy_evar(vm, context[61], context[62], context[5], context[6]);
  refalrts::alloc_char(vm, context[63], '?');
  refalrts::alloc_open_call(vm, context[64]);
  refalrts::alloc_name(vm, context[65], functions[efunc_Add]);
  refalrts::alloc_number(vm, context[66], 1UL);
  refalrts::copy_stvar(vm, context[67], context[57]);
  refalrts::alloc_close_call(vm, context[68]);
  refalrts::alloc_close_call(vm, context[59]);
  refalrts::push_stack( vm, context[59] );
  refalrts::push_stack( vm, context[58] );
  res = refalrts::splice_elem( res, context[59] );
  refalrts::push_stack( vm, context[68] );
  refalrts::push_stack( vm, context[64] );
  res = refalrts::splice_elem( res, context[68] );
  res = refalrts::splice_stvar( res, context[67] );
  res = refalrts::splice_elem( res, context[66] );
  res = refalrts::splice_elem( res, context[65] );
  res = refalrts::splice_elem( res, context[64] );
  res = refalrts::splice_elem( res, context[63] );
  res = refalrts::splice_evar( res, context[61], context[62] );
  res = refalrts::splice_elem( res, context[60] );
  res = refalrts::splice_elem( res, context[58] );
  refalrts::use( res );
  refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
  if (rec_res != refalrts::cSuccess)
    return rec_res;
  refalrts::this_is_generated_function(vm);
  do {
    // </58 & MakeOpenE-ForwardNext?1/62 e.NextName#2/60 >/59
    context[60] = 0;
    context[61] = 0;
    context[62] = refalrts::call_left( context[60], context[61], context[58], context[59] );
    // closed e.NextName#2 as range 60
    //DEBUG: e.ConditionName#1: 5
    //DEBUG: e.CurrentForwardName#1: 53
    //DEBUG: e.ContName#1: 49
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
    //DEBUG: s.CurrentForwardId#1: 57
    //DEBUG: e.NextName#2: 60
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
    //49: e.ContName#1
    //53: e.CurrentForwardName#1
    //57: s.CurrentForwardId#1
    //60: e.NextName#2
    //68: e.CheckFunctionArg#1
    //71: e.T5-sub#1

    refalrts::reset_allocator(vm);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::alloc_open_call(vm, context[63]);
    refalrts::alloc_name(vm, context[65], functions[efunc_gen_MakeOpenEm_ForwardNext_C2]);
    refalrts::alloc_open_call(vm, context[66]);
    refalrts::alloc_name(vm, context[67], functions[efunc_Substitute]);
    refalrts::copy_evar(vm, context[68], context[69], context[41], context[42]);
    refalrts::alloc_open_bracket(vm, context[70]);
    refalrts::copy_evar(vm, context[71], context[72], context[17], context[18]);
    refalrts::alloc_close_bracket(vm, context[73]);
    refalrts::alloc_close_call(vm, context[74]);
    refalrts::alloc_close_call(vm, context[64]);
    refalrts::push_stack( vm, context[64] );
    refalrts::push_stack( vm, context[63] );
    res = refalrts::splice_elem( res, context[64] );
    refalrts::push_stack( vm, context[74] );
    refalrts::push_stack( vm, context[66] );
    res = refalrts::splice_elem( res, context[74] );
    refalrts::link_brackets( context[70], context[73] );
    res = refalrts::splice_elem( res, context[73] );
    res = refalrts::splice_evar( res, context[71], context[72] );
    res = refalrts::splice_elem( res, context[70] );
    res = refalrts::splice_evar( res, context[68], context[69] );
    res = refalrts::splice_elem( res, context[67] );
    res = refalrts::splice_elem( res, context[66] );
    res = refalrts::splice_elem( res, context[65] );
    res = refalrts::splice_elem( res, context[63] );
    refalrts::use( res );
    refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
    if (rec_res != refalrts::cSuccess)
      return rec_res;
    refalrts::this_is_generated_function(vm);
    do {
      // </63 & MakeOpenE-ForwardNext?2/67 e.CheckFuncArgSubst#3/65 >/64
      context[65] = 0;
      context[66] = 0;
      context[67] = refalrts::call_left( context[65], context[66], context[63], context[64] );
      // closed e.CheckFuncArgSubst#3 as range 65
      //DEBUG: e.ConditionName#1: 5
      //DEBUG: e.CurrentForwardName#1: 53
      //DEBUG: e.ContName#1: 49
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
      //DEBUG: s.CurrentForwardId#1: 57
      //DEBUG: e.NextName#2: 60
      //DEBUG: e.CheckFuncArgSubst#3: 65

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} e.ConditionName#1/5 {REMOVED TILE} s.CurrentForwardId#1/57 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.CheckFunctionArg#1/41 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.T5-sub#1/17 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # Function/4 HalfReuse: # GN-Local/7 } Tile{ AsIs: (/55 AsIs: e.CurrentForwardName#1/53 AsIs: )/56 HalfReuse: # Sentences/51 } Tile{ HalfReuse: (/44 AsIs: (/39 AsIs: e.T1#1/37 AsIs: )/40 AsIs: (/35 } (/68 # CallBrackets/69 Tile{ AsIs: (/43 } # Symbol/70 # Name/71 e.NextName#2/60/72 Tile{ AsIs: )/8 } Tile{ AsIs: e.T2#1/33 } )/74 )/75 )/76 Tile{ HalfReuse: (/36 AsIs: (/31 AsIs: e.T3#1/29 AsIs: )/32 AsIs: (/27 } Tile{ HalfReuse: (/67 } # CallBrackets/77 (/78 # Symbol/79 # Name/80 Tile{ AsIs: e.ContName#1/49 } )/81 Tile{ AsIs: e.T4#1/25 } )/82 )/83 )/84 )/85 (/86 # Drive/87 e.CurrentForwardName#1/53/88 )/90 (/91 Tile{ HalfReuse: # Function/12 HalfReuse: # GN-Local/58 HalfReuse: (/62 AsIs: e.NextName#2/60 HalfReuse: )/59 HalfReuse: # Sentences/63 } Tile{ HalfReuse: (/28 AsIs: (/23 AsIs: e.T5#1/21 AsIs: )/24 AsIs: (/19 } (/92 # CallBrackets/93 (/94 Tile{ HalfReuse: # Symbol/52 HalfReuse: # Name/47 AsIs: e.CheckFunction#1/45 AsIs: )/48 } Tile{ AsIs: e.CheckFuncArgSubst#3/65 } )/95 )/96 )/97 Tile{ HalfReuse: (/20 AsIs: (/15 AsIs: e.T6#1/13 AsIs: )/16 AsIs: (/11 } (/98 # CallBrackets/99 (/100 # Symbol/101 # Name/102 e.ContName#1/49/103 )/105 Tile{ AsIs: e.T7#1/9 } )/106 )/107 Tile{ HalfReuse: )/64 HalfReuse: )/1 ]] }
      refalrts::alloc_open_bracket(vm, context[68]);
      refalrts::alloc_ident(vm, context[69], identifiers[ident_CallBrackets]);
      refalrts::alloc_ident(vm, context[70], identifiers[ident_Symbol]);
      refalrts::alloc_ident(vm, context[71], identifiers[ident_Name]);
      refalrts::copy_evar(vm, context[72], context[73], context[60], context[61]);
      refalrts::alloc_close_bracket(vm, context[74]);
      refalrts::alloc_close_bracket(vm, context[75]);
      refalrts::alloc_close_bracket(vm, context[76]);
      refalrts::alloc_ident(vm, context[77], identifiers[ident_CallBrackets]);
      refalrts::alloc_open_bracket(vm, context[78]);
      refalrts::alloc_ident(vm, context[79], identifiers[ident_Symbol]);
      refalrts::alloc_ident(vm, context[80], identifiers[ident_Name]);
      refalrts::alloc_close_bracket(vm, context[81]);
      refalrts::alloc_close_bracket(vm, context[82]);
      refalrts::alloc_close_bracket(vm, context[83]);
      refalrts::alloc_close_bracket(vm, context[84]);
      refalrts::alloc_close_bracket(vm, context[85]);
      refalrts::alloc_open_bracket(vm, context[86]);
      refalrts::alloc_ident(vm, context[87], identifiers[ident_Drive]);
      refalrts::copy_evar(vm, context[88], context[89], context[53], context[54]);
      refalrts::alloc_close_bracket(vm, context[90]);
      refalrts::alloc_open_bracket(vm, context[91]);
      refalrts::alloc_open_bracket(vm, context[92]);
      refalrts::alloc_ident(vm, context[93], identifiers[ident_CallBrackets]);
      refalrts::alloc_open_bracket(vm, context[94]);
      refalrts::alloc_close_bracket(vm, context[95]);
      refalrts::alloc_close_bracket(vm, context[96]);
      refalrts::alloc_close_bracket(vm, context[97]);
      refalrts::alloc_open_bracket(vm, context[98]);
      refalrts::alloc_ident(vm, context[99], identifiers[ident_CallBrackets]);
      refalrts::alloc_open_bracket(vm, context[100]);
      refalrts::alloc_ident(vm, context[101], identifiers[ident_Symbol]);
      refalrts::alloc_ident(vm, context[102], identifiers[ident_Name]);
      refalrts::copy_evar(vm, context[103], context[104], context[49], context[50]);
      refalrts::alloc_close_bracket(vm, context[105]);
      refalrts::alloc_close_bracket(vm, context[106]);
      refalrts::alloc_close_bracket(vm, context[107]);
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_ident(context[4], identifiers[ident_Function]);
      refalrts::reinit_ident(context[7], identifiers[ident_GNm_Local]);
      refalrts::reinit_ident(context[51], identifiers[ident_Sentences]);
      refalrts::reinit_open_bracket(context[44]);
      refalrts::reinit_open_bracket(context[36]);
      refalrts::reinit_open_bracket(context[67]);
      refalrts::reinit_ident(context[12], identifiers[ident_Function]);
      refalrts::reinit_ident(context[58], identifiers[ident_GNm_Local]);
      refalrts::reinit_open_bracket(context[62]);
      refalrts::reinit_close_bracket(context[59]);
      refalrts::reinit_ident(context[63], identifiers[ident_Sentences]);
      refalrts::reinit_open_bracket(context[28]);
      refalrts::reinit_ident(context[52], identifiers[ident_Symbol]);
      refalrts::reinit_ident(context[47], identifiers[ident_Name]);
      refalrts::reinit_open_bracket(context[20]);
      refalrts::reinit_close_bracket(context[64]);
      refalrts::reinit_close_bracket(context[1]);
      refalrts::link_brackets( context[91], context[1] );
      refalrts::link_brackets( context[20], context[64] );
      refalrts::link_brackets( context[11], context[107] );
      refalrts::link_brackets( context[98], context[106] );
      refalrts::link_brackets( context[100], context[105] );
      refalrts::link_brackets( context[15], context[16] );
      refalrts::link_brackets( context[28], context[97] );
      refalrts::link_brackets( context[19], context[96] );
      refalrts::link_brackets( context[92], context[95] );
      refalrts::link_brackets( context[94], context[48] );
      refalrts::link_brackets( context[23], context[24] );
      refalrts::link_brackets( context[62], context[59] );
      refalrts::link_brackets( context[86], context[90] );
      refalrts::link_brackets( context[0], context[85] );
      refalrts::link_brackets( context[36], context[84] );
      refalrts::link_brackets( context[27], context[83] );
      refalrts::link_brackets( context[67], context[82] );
      refalrts::link_brackets( context[78], context[81] );
      refalrts::link_brackets( context[31], context[32] );
      refalrts::link_brackets( context[44], context[76] );
      refalrts::link_brackets( context[35], context[75] );
      refalrts::link_brackets( context[68], context[74] );
      refalrts::link_brackets( context[43], context[8] );
      refalrts::link_brackets( context[39], context[40] );
      refalrts::link_brackets( context[55], context[56] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[64];
      res = refalrts::splice_evar( res, context[106], context[107] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      res = refalrts::splice_evar( res, context[98], context[105] );
      res = refalrts::splice_evar( res, context[20], context[11] );
      res = refalrts::splice_evar( res, context[95], context[97] );
      res = refalrts::splice_evar( res, context[65], context[66] );
      res = refalrts::splice_evar( res, context[52], context[48] );
      res = refalrts::splice_evar( res, context[92], context[94] );
      res = refalrts::splice_evar( res, context[28], context[19] );
      res = refalrts::splice_evar( res, context[12], context[63] );
      res = refalrts::splice_evar( res, context[82], context[91] );
      res = refalrts::splice_evar( res, context[25], context[26] );
      res = refalrts::splice_evar( res, context[81], context[81] );
      res = refalrts::splice_evar( res, context[49], context[50] );
      res = refalrts::splice_evar( res, context[77], context[80] );
      res = refalrts::splice_evar( res, context[67], context[67] );
      res = refalrts::splice_evar( res, context[36], context[27] );
      res = refalrts::splice_evar( res, context[74], context[76] );
      res = refalrts::splice_evar( res, context[33], context[34] );
      res = refalrts::splice_evar( res, context[8], context[8] );
      res = refalrts::splice_evar( res, context[72], context[73] );
      res = refalrts::splice_evar( res, context[70], context[71] );
      res = refalrts::splice_evar( res, context[43], context[43] );
      res = refalrts::splice_evar( res, context[68], context[69] );
      res = refalrts::splice_evar( res, context[44], context[35] );
      res = refalrts::splice_evar( res, context[55], context[51] );
      refalrts::splice_to_freelist_open( vm, context[7], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    refalrts::splice_to_freelist(vm, context[63], context[64]);
    continue;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  refalrts::splice_to_freelist(vm, context[58], context[59]);
  return refalrts::cRecognitionImpossible;
}

static refalrts::NativeReference nat_ref_MakeOpenEm_ForwardNext("MakeOpenE-ForwardNext", COOKIE1_, COOKIE2_, func_MakeOpenEm_ForwardNext);


static refalrts::FnResult func_NewVarNameSuf(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
  // </0 & NewVarNameSuf/4 (/7 e.Variables#1/5 )/8 s.Mode#1/13 e.Prefix#1/2 s.Depth#1/14 (/11 e.Suffix#1/9 )/12 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
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
  // closed e.Variables#1 as range 5
  // closed e.Suffix#1 as range 9
  if( ! refalrts::svar_left( context[13], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_right( context[14], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Prefix#1 as range 2
  //DEBUG: e.Variables#1: 5
  //DEBUG: e.Suffix#1: 9
  //DEBUG: s.Mode#1: 13
  //DEBUG: s.Depth#1: 14
  //DEBUG: e.Prefix#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} s.Depth#1/14 (/11 {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & NewVarName/4 AsIs: (/7 AsIs: e.Variables#1/5 AsIs: )/8 AsIs: s.Mode#1/13 } Tile{ AsIs: e.Prefix#1/2 } Tile{ AsIs: e.Suffix#1/9 } Tile{ HalfReuse: s.Depth1 #14/12 AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_NewVarName]);
  refalrts::reinit_svar( context[12], context[14] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[12];
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::splice_to_freelist_open( vm, context[13], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_NewVarNameSuf("NewVarNameSuf", COOKIE1_, COOKIE2_, func_NewVarNameSuf);


static refalrts::FnResult func_gen_Map_Z1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  // </0 & Map@1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Map@1/4 s.new#1/5 e.new#2/2 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 2
  do {
    // </0 & Map@1/4 s.MarkupContext#1/5 t.Next#1/8 e.Tail#1/6 >/1
    context[6] = context[2];
    context[7] = context[3];
    context[9] = refalrts::tvar_left( context[8], context[6], context[7] );
    if( ! context[9] )
      continue;
    // closed e.Tail#1 as range 6
    //DEBUG: s.MarkupContext#1: 5
    //DEBUG: t.Next#1: 8
    //DEBUG: e.Tail#1: 6

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & UnCondition-Unit/4 AsIs: s.MarkupContext#1/5 AsIs: t.Next#1/8 } >/10 </11 & Map@1/12 s.MarkupContext#1/5/13 Tile{ AsIs: e.Tail#1/6 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_close_call(vm, context[10]);
    refalrts::alloc_open_call(vm, context[11]);
    refalrts::alloc_name(vm, context[12], functions[efunc_gen_Map_Z1]);
    refalrts::copy_stvar(vm, context[13], context[5]);
    refalrts::update_name(context[4], functions[efunc_UnConditionm_Unit]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[11] );
    refalrts::push_stack( vm, context[10] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[6], context[7] );
    res = refalrts::splice_evar( res, context[10], context[13] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Map@1/4 s.MarkupContext#1/5 >/1
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    //DEBUG: s.MarkupContext#1: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Map@1/4 s.MarkupContext#1/5 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Map@1/4 s.MarkupContext#1/5 e.items#0/2 >/1
  // closed e.items#0 as range 2
  //DEBUG: s.MarkupContext#1: 5
  //DEBUG: e.items#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map@0/4 } (/6 & UnCondition-Unit/7 Tile{ AsIs: s.MarkupContext#1/5 } )/8 Tile{ AsIs: e.items#0/2 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[6]);
  refalrts::alloc_name(vm, context[7], functions[efunc_UnConditionm_Unit]);
  refalrts::alloc_close_bracket(vm, context[8]);
  refalrts::update_name(context[4], functions[efunc_gen_Map_Z0]);
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

static refalrts::NativeReference nat_ref_gen_Map_Z1("Map@1", COOKIE1_, COOKIE2_, func_gen_Map_Z1);


static refalrts::FnResult func_gen_MapAccum_Z1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  // </0 & MapAccum@1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & MapAccum@1/4 (/7 e.new#1/5 )/8 s.new#2/9 t.new#3/10 e.new#4/2 >/1
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
  // closed e.new#4 as range 2
  do {
    // </0 & MapAccum@1/4 (/7 e.Name#1/12 )/8 s.MarkupContext#1/9 t.Acc#1/10 e.Tail#1/14 >/1
    context[12] = context[5];
    context[13] = context[6];
    context[14] = context[2];
    context[15] = context[3];
    // closed e.Name#1 as range 12
    // closed e.Tail#1 as range 14
    //DEBUG: t.Acc#1: 10
    //DEBUG: s.MarkupContext#1: 9
    //DEBUG: e.Name#1: 12
    //DEBUG: e.Tail#1: 14

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum@1/4 AsIs: (/7 AsIs: e.Name#1/12 AsIs: )/8 AsIs: s.MarkupContext#1/9 AsIs: t.Acc#1/10 } (/16 )/17 Tile{ AsIs: e.Tail#1/14 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_bracket(vm, context[16]);
    refalrts::alloc_close_bracket(vm, context[17]);
    refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_Z1]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[16], context[17] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[14], context[15] );
    res = refalrts::splice_evar( res, context[16], context[17] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & MapAccum@1/4 (/7 e.Name#1/5 )/8 s.MarkupContext#1/9 t.accum#0/10 e.items#0/2 >/1
  // closed e.Name#1 as range 5
  // closed e.items#0 as range 2
  //DEBUG: t.accum#0: 10
  //DEBUG: s.MarkupContext#1: 9
  //DEBUG: e.Name#1: 5
  //DEBUG: e.items#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & MapAccum@0/4 AsIs: (/7 } & UnCondition-Unit-Sentence/12 Tile{ AsIs: e.Name#1/5 } Tile{ AsIs: s.MarkupContext#1/9 } Tile{ AsIs: )/8 } Tile{ AsIs: t.accum#0/10 AsIs: e.items#0/2 AsIs: >/1 ]] }
  refalrts::alloc_name(vm, context[12], functions[efunc_UnConditionm_Unitm_Sentence]);
  refalrts::update_name(context[4], functions[efunc_gen_MapAccum_Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[10];
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[9], context[9] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[12], context[12] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_MapAccum_Z1("MapAccum@1", COOKIE1_, COOKIE2_, func_gen_MapAccum_Z1);


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
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & BindBrackets/4 AsIs: t.Next#1/7 } >/9 </10 & Map@2/11 Tile{ AsIs: e.Tail#1/5 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_close_call(vm, context[9]);
    refalrts::alloc_open_call(vm, context[10]);
    refalrts::alloc_name(vm, context[11], functions[efunc_gen_Map_Z2]);
    refalrts::update_name(context[4], functions[efunc_BindBrackets]);
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
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Map@0/0 Reuse: & BindBrackets/4 AsIs: e.items#0/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::reinit_name(context[0], functions[efunc_gen_Map_Z0]);
  refalrts::update_name(context[4], functions[efunc_BindBrackets]);
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
  // </0 & DoMapAccum@1/4 (/7 e.new#1/5 )/8 s.new#2/9 t.new#3/10 (/14 e.new#4/12 )/15 e.new#5/2 >/1
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
  context[12] = 0;
  context[13] = 0;
  context[14] = refalrts::brackets_left( context[12], context[13], context[2], context[3] );
  if( ! context[14] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[14], context[15]);
  // closed e.new#4 as range 12
  // closed e.new#5 as range 2
  do {
    // </0 & DoMapAccum@1/4 (/7 e.Name#1/16 )/8 s.MarkupContext#1/9 t.Acc#1/10 (/14 e.Scanned#1/18 )/15 t.Next#1/22 e.Tail#1/20 >/1
    context[16] = context[5];
    context[17] = context[6];
    context[18] = context[12];
    context[19] = context[13];
    context[20] = context[2];
    context[21] = context[3];
    // closed e.Name#1 as range 16
    // closed e.Scanned#1 as range 18
    context[23] = refalrts::tvar_left( context[22], context[20], context[21] );
    if( ! context[23] )
      continue;
    // closed e.Tail#1 as range 20
    //DEBUG: t.Acc#1: 10
    //DEBUG: s.MarkupContext#1: 9
    //DEBUG: e.Name#1: 16
    //DEBUG: e.Scanned#1: 18
    //DEBUG: t.Next#1: 22
    //DEBUG: e.Tail#1: 20

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum$1=1@1/4 AsIs: (/7 AsIs: e.Name#1/16 AsIs: )/8 AsIs: s.MarkupContext#1/9 } Tile{ AsIs: (/14 AsIs: e.Scanned#1/18 AsIs: )/15 } (/24 Tile{ AsIs: e.Tail#1/20 } )/25 </26 & UnCondition-Unit-Sentence/27 e.Name#1/16/28 s.MarkupContext#1/9/30 Tile{ AsIs: t.Acc#1/10 } Tile{ AsIs: t.Next#1/22 } >/31 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_bracket(vm, context[24]);
    refalrts::alloc_close_bracket(vm, context[25]);
    refalrts::alloc_open_call(vm, context[26]);
    refalrts::alloc_name(vm, context[27], functions[efunc_UnConditionm_Unitm_Sentence]);
    refalrts::copy_evar(vm, context[28], context[29], context[16], context[17]);
    refalrts::copy_stvar(vm, context[30], context[9]);
    refalrts::alloc_close_call(vm, context[31]);
    refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_S1A1Z1]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[31] );
    refalrts::push_stack( vm, context[26] );
    refalrts::link_brackets( context[24], context[25] );
    refalrts::link_brackets( context[14], context[15] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[31], context[31] );
    res = refalrts::splice_evar( res, context[22], context[23] );
    res = refalrts::splice_evar( res, context[10], context[11] );
    res = refalrts::splice_evar( res, context[25], context[30] );
    res = refalrts::splice_evar( res, context[20], context[21] );
    res = refalrts::splice_evar( res, context[24], context[24] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoMapAccum@1/4 (/7 e.Name#1/16 )/8 s.MarkupContext#1/9 t.Acc#1/10 (/14 e.Scanned#1/18 )/15 >/1
    context[16] = context[5];
    context[17] = context[6];
    context[18] = context[12];
    context[19] = context[13];
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Name#1 as range 16
    // closed e.Scanned#1 as range 18
    //DEBUG: t.Acc#1: 10
    //DEBUG: s.MarkupContext#1: 9
    //DEBUG: e.Name#1: 16
    //DEBUG: e.Scanned#1: 18

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & DoMapAccum@1/4 (/7 e.Name#1/16 )/8 s.MarkupContext#1/9 {REMOVED TILE} (/14 {REMOVED TILE} )/15 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: t.Acc#1/10 } Tile{ AsIs: e.Scanned#1/18 } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[18], context[19] );
    res = refalrts::splice_evar( res, context[10], context[11] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoMapAccum@1/4 (/7 e.Name#1/5 )/8 s.MarkupContext#1/9 t.acc#0/10 (/14 e.scanned#0/12 )/15 e.items#0/2 >/1
  // closed e.Name#1 as range 5
  // closed e.scanned#0 as range 12
  // closed e.items#0 as range 2
  //DEBUG: t.acc#0: 10
  //DEBUG: s.MarkupContext#1: 9
  //DEBUG: e.Name#1: 5
  //DEBUG: e.scanned#0: 12
  //DEBUG: e.items#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum@0/4 AsIs: (/7 } & UnCondition-Unit-Sentence/16 Tile{ AsIs: e.Name#1/5 } Tile{ AsIs: s.MarkupContext#1/9 } Tile{ AsIs: )/8 } Tile{ AsIs: t.acc#0/10 AsIs: (/14 AsIs: e.scanned#0/12 AsIs: )/15 AsIs: e.items#0/2 AsIs: >/1 ]] }
  refalrts::alloc_name(vm, context[16], functions[efunc_UnConditionm_Unitm_Sentence]);
  refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[14], context[15] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[10];
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[9], context[9] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[16], context[16] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoMapAccum_Z1("DoMapAccum@1", COOKIE1_, COOKIE2_, func_gen_DoMapAccum_Z1);


static refalrts::FnResult func_gen_DoMapAccum_S1A1Z1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 28 elems
  refalrts::Iter context[28];
  refalrts::zeros( context, 28 );
  // </0 & DoMapAccum$1=1@1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DoMapAccum$1=1@1/4 (/7 e.new#1/5 )/8 s.new#2/9 (/12 e.new#3/10 )/13 (/16 e.new#4/14 )/17 e.new#5/2 >/1
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
  context[14] = 0;
  context[15] = 0;
  context[16] = refalrts::brackets_left( context[14], context[15], context[2], context[3] );
  if( ! context[16] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[16], context[17]);
  // closed e.new#3 as range 10
  // closed e.new#4 as range 14
  // closed e.new#5 as range 2
  do {
    // </0 & DoMapAccum$1=1@1/4 (/7 e.Name#1/18 )/8 s.MarkupContext#1/9 (/12 e.Scanned0#1/20 )/13 (/16 e.Tail0#1/22 )/17 t.Acc#2/26 e.StepScanned#2/24 >/1
    context[18] = context[5];
    context[19] = context[6];
    context[20] = context[10];
    context[21] = context[11];
    context[22] = context[14];
    context[23] = context[15];
    context[24] = context[2];
    context[25] = context[3];
    // closed e.Name#1 as range 18
    // closed e.Scanned0#1 as range 20
    // closed e.Tail0#1 as range 22
    context[27] = refalrts::tvar_left( context[26], context[24], context[25] );
    if( ! context[27] )
      continue;
    // closed e.StepScanned#2 as range 24
    //DEBUG: s.MarkupContext#1: 9
    //DEBUG: e.Name#1: 18
    //DEBUG: e.Scanned0#1: 20
    //DEBUG: e.Tail0#1: 22
    //DEBUG: t.Acc#2: 26
    //DEBUG: e.StepScanned#2: 24

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} (/12 {REMOVED TILE} )/13 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum@1/4 AsIs: (/7 AsIs: e.Name#1/18 AsIs: )/8 AsIs: s.MarkupContext#1/9 } Tile{ AsIs: t.Acc#2/26 } Tile{ AsIs: (/16 } Tile{ AsIs: e.Scanned0#1/20 } Tile{ AsIs: e.StepScanned#2/24 } Tile{ AsIs: )/17 } Tile{ AsIs: e.Tail0#1/22 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_Z1]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[16], context[17] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[22], context[23] );
    res = refalrts::splice_evar( res, context[17], context[17] );
    res = refalrts::splice_evar( res, context[24], context[25] );
    res = refalrts::splice_evar( res, context[20], context[21] );
    res = refalrts::splice_evar( res, context[16], context[16] );
    res = refalrts::splice_evar( res, context[26], context[27] );
    refalrts::splice_to_freelist_open( vm, context[9], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoMapAccum$1=1@1/4 (/7 e.Name#1/5 )/8 s.MarkupContext#1/9 (/12 e.Scanned0#1/10 )/13 (/16 e.Tail0#1/14 )/17 e.dyn#0/2 >/1
  // closed e.Name#1 as range 5
  // closed e.Scanned0#1 as range 10
  // closed e.Tail0#1 as range 14
  // closed e.dyn#0 as range 2
  //DEBUG: s.MarkupContext#1: 9
  //DEBUG: e.Name#1: 5
  //DEBUG: e.Scanned0#1: 10
  //DEBUG: e.Tail0#1: 14
  //DEBUG: e.dyn#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum$1=1@0/4 AsIs: (/7 } & UnCondition-Unit-Sentence/18 Tile{ AsIs: e.Name#1/5 } Tile{ AsIs: s.MarkupContext#1/9 } Tile{ AsIs: )/8 } Tile{ AsIs: (/12 AsIs: e.Scanned0#1/10 AsIs: )/13 AsIs: (/16 AsIs: e.Tail0#1/14 AsIs: )/17 AsIs: e.dyn#0/2 AsIs: >/1 ]] }
  refalrts::alloc_name(vm, context[18], functions[efunc_UnConditionm_Unitm_Sentence]);
  refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_S1A1Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[16], context[17] );
  refalrts::link_brackets( context[12], context[13] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[12];
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[9], context[9] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[18], context[18] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoMapAccum_S1A1Z1("DoMapAccum$1=1@1", COOKIE1_, COOKIE2_, func_gen_DoMapAccum_S1A1Z1);


//End of file
