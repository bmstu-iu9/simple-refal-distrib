// This file automatically generated from 'OptTree-Drive.ref'
// Don't edit! Edit 'OptTree-Drive.ref' and recompile it

#include "refalrts.h"

#define cookie_ns cookie_ns_858440880_3942715697

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
  efunc_MapAccum = 19,
  efunc_Fetch = 20,
  efunc_Pipe = 21,
  efunc_gen_Pipe_S2L1 = 22,
  efunc_gen_Pipe_S3L1 = 23,
  efunc_GetDrivenFunctions = 24,
  efunc_gen_OptTreem_Drivem_ExtractOptInfo_A1 = 25,
  efunc_DriveInlineOptimizerTick = 26,
  efunc_gen_GenRemainderFuncNames_A1 = 27,
  efunc_gen_GenRemainderFuncNames_A1L1 = 28,
  efunc_gen_GetDrivenFunctions_A2L1S1C1 = 29,
  efunc_gen_GetDrivenFunctions_A2L1S1C2 = 30,
  efunc_gen_GetDrivenFunctions_A2L1S1L1 = 31,
  efunc_GenRemainderFuncNames = 32,
  efunc_gen_GetDrivenFunctions_A2 = 33,
  efunc_gen_GetDrivenFunctions_A2L1 = 34,
  efunc_gen_GetDrivenFunctions_A1L1 = 35,
  efunc_gen_GetDrivenFunctions_A1 = 36,
  efunc_DistinctFuncs = 37,
  efunc_OptimizeF = 38,
  efunc_gen_DriveInlineOptimizerTick_A2 = 39,
  efunc_gen_DriveInlineOptimizerTick_A2L1 = 40,
  efunc_OptSwitch = 41,
  efunc_gen_DriveInlineOptimizerTick_A1 = 42,
  efunc_IsPassiveCallm_Aux = 43,
  efunc_gen_Reduce_Z1 = 44,
  efunc_IsPassiveCall = 45,
  efunc_gen_IsLexpr_B1 = 46,
  efunc_IsLexprm_Aux = 47,
  efunc_gen_Map_Z1 = 48,
  efunc_OptSentence = 49,
  efunc_gen_OptimizeF_A1L1A1 = 50,
  efunc_gen_OptimizeF_A1L1 = 51,
  efunc_gen_OptimizeF_A1 = 52,
  efunc_OptSentencem_Aux = 53,
  efunc_gen_OptSentence_S1B1S2A1 = 54,
  efunc_gen_OptSentence_S1B1 = 55,
  efunc_FindOptimizedCall = 56,
  efunc_ApplySolutions = 57,
  efunc_gen_MapAccum_Z1 = 58,
  efunc_OptSentencem_MakeSubstitutions = 59,
  efunc_gen_OptSentencem_Aux_A2 = 60,
  efunc_gen_OptSentencem_Aux_A1 = 61,
  efunc_FindOptInfo = 62,
  efunc_DoOptSentencem_MakeSubstitutions = 63,
  efunc_gen_OptSentencem_MakeSubstitutions_S2A3 = 64,
  efunc_DecreaseMode = 65,
  efunc_ExtractVariables = 66,
  efunc_gen_OptSentencem_MakeSubstitutions_S2A2 = 67,
  efunc_gen_OptSentencem_MakeSubstitutions_S1C1 = 68,
  efunc_MakeColdSolution = 69,
  efunc_IsLexpr = 70,
  efunc_gen_OptSentencem_MakeSubstitutions_S2A1 = 71,
  efunc_gen_OptSentencem_MakeSubstitutions_S2A1B1 = 72,
  efunc_gen_MakeColdSolution_S1C1 = 73,
  efunc_gen_DoOptSentencem_MakeSubstitutions_S1B1S2C1 = 74,
  efunc_RemainderFuncIncName = 75,
  efunc_gen_DoOptSentencem_MakeSubstitutions_S1B1 = 76,
  efunc_Solve = 77,
  efunc_FindOptInfom_Aux = 78,
  efunc_DropLeft = 79,
  efunc_gen_FindOptInfom_Aux_A1 = 80,
  efunc_gen_MapAccum_Z2 = 81,
  efunc_gen_FindOptimizedCallm_Term_S3B1 = 82,
  efunc_gen_FindOptimizedCallm_Term_S1A1 = 83,
  efunc_gen_FindOptimizedCallm_Term_S2A1 = 84,
  efunc_gen_FindOptimizedCallm_Term_S4A1 = 85,
  efunc_ApplySolution = 86,
  efunc_gen_Map_Z2 = 87,
  efunc_ApplyContractions = 88,
  efunc_gen_ApplySolution_A1 = 89,
  efunc_ApplyAssigns = 90,
  efunc_ApplyAssignsm_Term = 91,
  efunc_gen_Map_Z3 = 92,
  efunc_ApplyContractionsm_Term = 93,
  efunc_gen_Map_Z4 = 94,
  efunc_gen_ApplyContractionsm_Term_S3B1 = 95,
  efunc_gen_IsPassiveCall_L1D2 = 96,
  efunc_gen_DoMapAccum_Z1 = 97,
  efunc_gen_DoMapAccum_Z2 = 98,
  efunc_gen_DoMapAccumm_Aux_Z1 = 99,
  efunc_gen_OptSentencem_Aux_L1D1 = 100,
  efunc_gen_DoMapAccumm_Aux_Z2 = 101,
  efunc_FindOptimizedCallm_Term = 102,
};


enum ident {
  ident_k43_ = 0,
  ident_k47_ = 1,
  ident_k37_ = 2,
  ident_k42_ = 3,
  ident_k63_ = 4,
  ident_m_ = 5,
  ident_NoOpt = 6,
  ident_SUF = 7,
  ident_Function = 8,
  ident_Sentences = 9,
  ident_Drive = 10,
  ident_Inline = 11,
  ident_OptDrive = 12,
  ident_OptInline = 13,
  ident_True = 14,
  ident_False = 15,
  ident_Brackets = 16,
  ident_ADTm_Brackets = 17,
  ident_CallBrackets = 18,
  ident_ColdCallBrackets = 19,
  ident_OpenE = 20,
  ident_TkVariable = 21,
  ident_None = 22,
  ident_Symbol = 23,
  ident_Name = 24,
  ident_Success = 25,
  ident_GNm_Local = 26,
  ident_Failure = 27,
  ident_DRIVEN = 28,
  ident_ClosureBrackets = 29,
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

static refalrts::NativeReference nat_ref_Mu("Mu", 858440880U, 3942715697U, func_Mu);


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
    refalrts::alloc_number(vm, context[9], 3942715697UL);
    refalrts::update_name(context[4], functions[efunc_u_u_FindMuPtr]);
    refalrts::reinit_number(context[5], 858440880UL);
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
  refalrts::reinit_number(context[5], 858440880UL);
  refalrts::reinit_number(context[7], 3942715697UL);
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

static refalrts::NativeReference nat_ref_gen_u_u_Mum_Aux_S13B1("__Mu-Aux$13:1", 858440880U, 3942715697U, func_gen_u_u_Mum_Aux_S13B1);


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

static refalrts::NativeReference nat_ref_u_u_Mum_Aux("__Mu-Aux", 858440880U, 3942715697U, func_u_u_Mum_Aux);


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

static refalrts::NativeReference nat_ref_Residue("Residue", 858440880U, 3942715697U, func_Residue);


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

static refalrts::NativeReference nat_ref_Apply("Apply", 858440880U, 3942715697U, func_Apply);


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

static refalrts::NativeReference nat_ref_Map("Map", 858440880U, 3942715697U, func_Map);


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

static refalrts::NativeReference nat_ref_Reduce("Reduce", 858440880U, 3942715697U, func_Reduce);


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

static refalrts::NativeReference nat_ref_Fetch("Fetch", 858440880U, 3942715697U, func_Fetch);


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

static refalrts::NativeReference nat_ref_MapAccum("MapAccum", 858440880U, 3942715697U, func_MapAccum);


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

static refalrts::NativeReference nat_ref_DoMapAccum("DoMapAccum", 858440880U, 3942715697U, func_DoMapAccum);


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

static refalrts::NativeReference nat_ref_DoMapAccumm_Aux("DoMapAccum-Aux", 858440880U, 3942715697U, func_DoMapAccumm_Aux);


static refalrts::FnResult func_MapReduce(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  // </0 & MapReduce/4 t.Fn#1/5 t.Acc#1/7 e.Tail#1/2 >/1
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
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & MapAccum/4 AsIs: t.Fn#1/5 AsIs: t.Acc#1/7 AsIs: e.Tail#1/2 AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_MapAccum]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_MapReduce("MapReduce", 858440880U, 3942715697U, func_MapReduce);


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

static refalrts::NativeReference nat_ref_UnBracket("UnBracket", 858440880U, 3942715697U, func_UnBracket);


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

static refalrts::NativeReference nat_ref_DelAccumulator("DelAccumulator", 858440880U, 3942715697U, func_DelAccumulator);


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

static refalrts::NativeReference nat_ref_Inc("Inc", 858440880U, 3942715697U, func_Inc);


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

static refalrts::NativeReference nat_ref_Dec("Dec", 858440880U, 3942715697U, func_Dec);


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

static refalrts::NativeReference nat_ref_gen_Pipe_S2L1("Pipe$2\\1", 858440880U, 3942715697U, func_gen_Pipe_S2L1);


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

static refalrts::NativeReference nat_ref_gen_Pipe_S3L1("Pipe$3\\1", 858440880U, 3942715697U, func_gen_Pipe_S3L1);


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

static refalrts::NativeReference nat_ref_Pipe("Pipe", 858440880U, 3942715697U, func_Pipe);


static refalrts::FnResult func_Seq(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 5 elems
  refalrts::Iter context[5];
  refalrts::zeros( context, 5 );
  // </0 & Seq/4 e.Funcs#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Funcs#1 as range 2
  //DEBUG: e.Funcs#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Pipe/4 AsIs: e.Funcs#1/2 AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_Pipe]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Seq("Seq", 858440880U, 3942715697U, func_Seq);


static refalrts::FnResult func_gen_OptTreem_Drivem_ExtractOptInfo_B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 24 elems
  refalrts::Iter context[24];
  refalrts::zeros( context, 24 );
  // </0 & OptTree-Drive-ExtractOptInfo:1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & OptTree-Drive-ExtractOptInfo:1/4 (/7 e.new#1/5 )/8 (/11 e.new#2/9 )/12 (/15 e.new#3/13 )/16 s.new#4/17 >/1
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
    // </0 & OptTree-Drive-ExtractOptInfo:1/4 (/7 e.AST#2/18 )/8 (/11 e.Names#2/20 )/12 (/15 e.Info#2/22 )/16 # NoOpt/17 >/1
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

  // </0 & OptTree-Drive-ExtractOptInfo:1/4 (/7 e.AST#2/5 )/8 (/11 e.Names#2/9 )/12 (/15 e.Info#2/13 )/16 s.OptDrive#3/17 >/1
  // closed e.AST#2 as range 5
  // closed e.Names#2 as range 9
  // closed e.Info#2 as range 13
  //DEBUG: s.OptDrive#3: 17
  //DEBUG: e.AST#2: 5
  //DEBUG: e.Names#2: 9
  //DEBUG: e.Info#2: 13

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & OptTree-Drive-ExtractOptInfo:1/4 (/7 {REMOVED TILE} {REMOVED TILE} (/15 {REMOVED TILE} {REMOVED TILE} s.OptDrive#3/17 >/1 {REMOVED TILE}
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

static refalrts::NativeReference nat_ref_gen_OptTreem_Drivem_ExtractOptInfo_B1("OptTree-Drive-ExtractOptInfo:1", 858440880U, 3942715697U, func_gen_OptTreem_Drivem_ExtractOptInfo_B1);


static refalrts::FnResult func_gen_OptTreem_Drivem_ExtractOptInfo_A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
  // </0 & OptTree-Drive-ExtractOptInfo=1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & OptTree-Drive-ExtractOptInfo=1/4 s.new#1/5 (/8 (/12 e.new#2/10 )/13 e.new#3/6 )/9 e.new#4/2 >/1
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
    // </0 & OptTree-Drive-ExtractOptInfo=1/4 # NoOpt/5 (/8 (/12 e.Names#2/14 )/13 e.Info#2/16 )/9 e.AST#2/18 >/1
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

  // </0 & OptTree-Drive-ExtractOptInfo=1/4 s.OptDrive#1/5 (/8 (/12 e.Names#2/10 )/13 e.Info#2/6 )/9 e.AST#2/2 >/1
  // closed e.Names#2 as range 10
  // closed e.Info#2 as range 6
  // closed e.AST#2 as range 2
  //DEBUG: s.OptDrive#1: 5
  //DEBUG: e.Names#2: 10
  //DEBUG: e.Info#2: 6
  //DEBUG: e.AST#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & OptTree-Drive-ExtractOptInfo=1/4 s.OptDrive#1/5 {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
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

static refalrts::NativeReference nat_ref_gen_OptTreem_Drivem_ExtractOptInfo_A1("OptTree-Drive-ExtractOptInfo=1", 858440880U, 3942715697U, func_gen_OptTreem_Drivem_ExtractOptInfo_A1);


static refalrts::FnResult func_OptTreem_Drivem_ExtractOptInfo(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  // </0 & OptTree-Drive-ExtractOptInfo/4 s.OptDrive#1/5 e.AST#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.AST#1 as range 2
  //DEBUG: s.OptDrive#1: 5
  //DEBUG: e.AST#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & OptTree-Drive-ExtractOptInfo=1/4 AsIs: s.OptDrive#1/5 } </6 & GetDrivenFunctions/7 Tile{ AsIs: e.AST#1/2 } >/8 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[6]);
  refalrts::alloc_name(vm, context[7], functions[efunc_GetDrivenFunctions]);
  refalrts::alloc_close_call(vm, context[8]);
  refalrts::update_name(context[4], functions[efunc_gen_OptTreem_Drivem_ExtractOptInfo_A1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[6] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[6], context[7] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_OptTreem_Drivem_ExtractOptInfo("OptTree-Drive-ExtractOptInfo", 0U, 0U, func_OptTreem_Drivem_ExtractOptInfo);


static refalrts::FnResult func_OptTreem_Drive(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  // </0 & OptTree-Drive/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & OptTree-Drive/4 s.new#1/5 (/8 e.new#2/6 )/9 e.new#3/2 >/1
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
    // </0 & OptTree-Drive/4 # NoOpt/5 (/8 e.DriveInfo#1/10 )/9 e.AST#1/12 >/1
    context[10] = context[6];
    context[11] = context[7];
    context[12] = context[2];
    context[13] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_NoOpt], context[5] ) )
      continue;
    // closed e.DriveInfo#1 as range 10
    // closed e.AST#1 as range 12
    //DEBUG: e.DriveInfo#1: 10
    //DEBUG: e.AST#1: 12

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & OptTree-Drive/4 # NoOpt/5 {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/8 AsIs: e.DriveInfo#1/10 AsIs: )/9 } Tile{ AsIs: e.AST#1/12 } Tile{ ]] }
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

  // </0 & OptTree-Drive/4 s.Opt#1/5 (/8 e.DriveInfo#1/6 )/9 e.AST#1/2 >/1
  // closed e.DriveInfo#1 as range 6
  // closed e.AST#1 as range 2
  //DEBUG: s.Opt#1: 5
  //DEBUG: e.DriveInfo#1: 6
  //DEBUG: e.AST#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} s.Opt#1/5 {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DriveInlineOptimizerTick/4 } Tile{ AsIs: (/8 AsIs: e.DriveInfo#1/6 AsIs: )/9 AsIs: e.AST#1/2 HalfReuse: s.Opt1 #5/1 } >/10 Tile{ ]] }
  refalrts::alloc_close_call(vm, context[10]);
  refalrts::update_name(context[4], functions[efunc_DriveInlineOptimizerTick]);
  refalrts::reinit_svar( context[1], context[5] );
  refalrts::push_stack( vm, context[10] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[8], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[10], context[10] );
  res = refalrts::splice_evar( res, context[8], context[1] );
  refalrts::splice_to_freelist_open( vm, context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_OptTreem_Drive("OptTree-Drive", 0U, 0U, func_OptTreem_Drive);


static refalrts::FnResult func_OptTreem_Drivem_Finalize(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  // </0 & OptTree-Drive-Finalize/4 s.OptDrive#1/5 (/8 (/12 e.Names#1/10 )/13 e.Info#1/6 )/9 e.AST#1/2 >/1
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
  // closed e.Names#1 as range 10
  // closed e.Info#1 as range 6
  // closed e.AST#1 as range 2
  //DEBUG: s.OptDrive#1: 5
  //DEBUG: e.Names#1: 10
  //DEBUG: e.Info#1: 6
  //DEBUG: e.AST#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & OptTree-Drive-Finalize/4 s.OptDrive#1/5 (/8 (/12 e.Names#1/10 )/13 e.Info#1/6 )/9 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.AST#1/2 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_OptTreem_Drivem_Finalize("OptTree-Drive-Finalize", 0U, 0U, func_OptTreem_Drivem_Finalize);


static refalrts::FnResult func_gen_GenRemainderFuncNames_A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  // </0 & GenRemainderFuncNames=1/4 (/7 (/11 e.Name#2/9 )/12 (/15 e.Names#2/13 )/16 t.N#2/17 )/8 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
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
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Name#2 as range 9
  // closed e.Names#2 as range 13
  context[18] = refalrts::tvar_left( context[17], context[5], context[6] );
  if( ! context[18] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: e.Name#2: 9
  //DEBUG: e.Names#2: 13
  //DEBUG: t.N#2: 17

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & GenRemainderFuncNames=1/4 (/7 (/11 e.Name#2/9 )/12 (/15 {REMOVED TILE} )/16 t.N#2/17 )/8 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Names#2/13 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[13], context[14] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_GenRemainderFuncNames_A1("GenRemainderFuncNames=1", 858440880U, 3942715697U, func_gen_GenRemainderFuncNames_A1);


static refalrts::FnResult func_gen_GenRemainderFuncNames_A1L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 39 elems
  refalrts::Iter context[39];
  refalrts::zeros( context, 39 );
  // </0 & GenRemainderFuncNames=1\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & GenRemainderFuncNames=1\1/4 (/7 e.new#1/5 )/8 (/11 (/15 e.new#2/13 )/16 (/19 e.new#3/17 )/20 s.new#4/21 )/12 t.new#5/22 >/1
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
  // closed e.new#1 as range 5
  // closed e.new#2 as range 13
  // closed e.new#3 as range 17
  if( ! refalrts::svar_left( context[21], context[9], context[10] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[9], context[10] ) )
    return refalrts::cRecognitionImpossible;
  context[23] = refalrts::tvar_left( context[22], context[2], context[3] );
  if( ! context[23] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & GenRemainderFuncNames=1\1/4 (/7 e.Name#1/24 )/8 (/11 (/15 e.NewName#2/30 # SUF/34 e.Suffix#2/32 )/16 (/19 e.Names#2/28 )/20 s.N#2/21 )/12 t.A#2/22 >/1
    context[24] = context[5];
    context[25] = context[6];
    context[26] = context[13];
    context[27] = context[14];
    context[28] = context[17];
    context[29] = context[18];
    // closed e.Name#1 as range 24
    // closed e.Names#2 as range 28
    context[30] = 0;
    context[31] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[32] = context[26];
      context[33] = context[27];
      context[34] = refalrts::ident_left( identifiers[ident_SUF], context[32], context[33] );
      if( ! context[34] )
        continue;
      // closed e.Suffix#2 as range 32
      //DEBUG: t.A#2: 22
      //DEBUG: s.N#2: 21
      //DEBUG: e.Name#1: 24
      //DEBUG: e.Names#2: 28
      //DEBUG: e.NewName#2: 30
      //DEBUG: e.Suffix#2: 32

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.NewName#2/30 {REMOVED TILE} e.Suffix#2/32 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} t.A#2/22 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 AsIs: (/7 AsIs: e.Name#1/24 AsIs: )/8 AsIs: (/11 } Tile{ AsIs: e.Names#2/28 } Tile{ AsIs: (/15 } e.Name#1/24/35 Tile{ HalfReuse: '*'/20 AsIs: s.N#2/21 AsIs: )/12 } Tile{ AsIs: )/16 HalfReuse: </19 } Tile{ HalfReuse: & Add/34 } Tile{ HalfReuse: s.N2 #21/0 } 1/37 >/38 Tile{ HalfReuse: )/1 ]] }
      refalrts::copy_evar(vm, context[35], context[36], context[24], context[25]);
      refalrts::alloc_number(vm, context[37], 1UL);
      refalrts::alloc_close_call(vm, context[38]);
      refalrts::reinit_open_bracket(context[4]);
      refalrts::reinit_char(context[20], '*');
      refalrts::reinit_open_call(context[19]);
      refalrts::reinit_name(context[34], functions[efunc_Add]);
      refalrts::reinit_svar( context[0], context[21] );
      refalrts::reinit_close_bracket(context[1]);
      refalrts::link_brackets( context[4], context[1] );
      refalrts::push_stack( vm, context[38] );
      refalrts::push_stack( vm, context[19] );
      refalrts::link_brackets( context[11], context[16] );
      refalrts::link_brackets( context[15], context[12] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[37], context[38] );
      res = refalrts::splice_evar( res, context[0], context[0] );
      res = refalrts::splice_evar( res, context[34], context[34] );
      res = refalrts::splice_evar( res, context[16], context[19] );
      res = refalrts::splice_evar( res, context[20], context[12] );
      res = refalrts::splice_evar( res, context[35], context[36] );
      res = refalrts::splice_evar( res, context[15], context[15] );
      res = refalrts::splice_evar( res, context[28], context[29] );
      res = refalrts::splice_evar( res, context[4], context[11] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[30], context[31], context[26], context[27] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & GenRemainderFuncNames=1\1/4 (/7 e.Name#1/5 )/8 (/11 (/15 e.NewName#2/13 )/16 (/19 e.Names#2/17 )/20 s.N#2/21 )/12 t.A#2/22 >/1
  // closed e.Name#1 as range 5
  // closed e.NewName#2 as range 13
  // closed e.Names#2 as range 17
  //DEBUG: t.A#2: 22
  //DEBUG: s.N#2: 21
  //DEBUG: e.Name#1: 5
  //DEBUG: e.NewName#2: 13
  //DEBUG: e.Names#2: 17

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.NewName#2/13 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} t.A#2/22 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 AsIs: (/7 AsIs: e.Name#1/5 AsIs: )/8 AsIs: (/11 } Tile{ AsIs: e.Names#2/17 } Tile{ AsIs: (/15 } e.Name#1/5/24 Tile{ HalfReuse: # SUF/0 } Tile{ HalfReuse: '*'/20 AsIs: s.N#2/21 AsIs: )/12 } Tile{ AsIs: )/16 HalfReuse: </19 } & Add/26 s.N#2/21/27 1/28 >/29 Tile{ HalfReuse: )/1 ]] }
  refalrts::copy_evar(vm, context[24], context[25], context[5], context[6]);
  refalrts::alloc_name(vm, context[26], functions[efunc_Add]);
  refalrts::copy_stvar(vm, context[27], context[21]);
  refalrts::alloc_number(vm, context[28], 1UL);
  refalrts::alloc_close_call(vm, context[29]);
  refalrts::reinit_open_bracket(context[4]);
  refalrts::reinit_ident(context[0], identifiers[ident_SUF]);
  refalrts::reinit_char(context[20], '*');
  refalrts::reinit_open_call(context[19]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[4], context[1] );
  refalrts::push_stack( vm, context[29] );
  refalrts::push_stack( vm, context[19] );
  refalrts::link_brackets( context[11], context[16] );
  refalrts::link_brackets( context[15], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[26], context[29] );
  res = refalrts::splice_evar( res, context[16], context[19] );
  res = refalrts::splice_evar( res, context[20], context[12] );
  res = refalrts::splice_evar( res, context[0], context[0] );
  res = refalrts::splice_evar( res, context[24], context[25] );
  res = refalrts::splice_evar( res, context[15], context[15] );
  res = refalrts::splice_evar( res, context[17], context[18] );
  res = refalrts::splice_evar( res, context[4], context[11] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_GenRemainderFuncNames_A1L1("GenRemainderFuncNames=1\\1", 858440880U, 3942715697U, func_gen_GenRemainderFuncNames_A1L1);


static refalrts::FnResult func_GenRemainderFuncNames(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 26 elems
  refalrts::Iter context[26];
  refalrts::zeros( context, 26 );
  // </0 & GenRemainderFuncNames/4 (/7 e.Name#1/5 )/8 (/11 e.Sentences#1/9 )/12 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
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
  // closed e.Sentences#1 as range 9
  //DEBUG: e.Name#1: 5
  //DEBUG: e.Sentences#1: 9

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </13 & GenRemainderFuncNames=1/14 </15 & MapAccum/16 [*]/17 & GenRemainderFuncNames=1\1/18 (/19 e.Name#1/5/20 )/22 Tile{ HalfReuse: {*}/0 HalfReuse: (/4 AsIs: (/7 AsIs: e.Name#1/5 AsIs: )/8 AsIs: (/11 } )/23 1/24 )/25 Tile{ AsIs: e.Sentences#1/9 } Tile{ HalfReuse: >/12 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[13]);
  refalrts::alloc_name(vm, context[14], functions[efunc_gen_GenRemainderFuncNames_A1]);
  refalrts::alloc_open_call(vm, context[15]);
  refalrts::alloc_name(vm, context[16], functions[efunc_MapAccum]);
  refalrts::alloc_closure_head(vm, context[17]);
  refalrts::alloc_name(vm, context[18], functions[efunc_gen_GenRemainderFuncNames_A1L1]);
  refalrts::alloc_open_bracket(vm, context[19]);
  refalrts::copy_evar(vm, context[20], context[21], context[5], context[6]);
  refalrts::alloc_close_bracket(vm, context[22]);
  refalrts::alloc_close_bracket(vm, context[23]);
  refalrts::alloc_number(vm, context[24], 1UL);
  refalrts::alloc_close_bracket(vm, context[25]);
  refalrts::reinit_unwrapped_closure(context[0], context[17]);
  refalrts::reinit_open_bracket(context[4]);
  refalrts::reinit_close_call(context[12]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[13] );
  refalrts::push_stack( vm, context[12] );
  refalrts::push_stack( vm, context[15] );
  refalrts::link_brackets( context[4], context[25] );
  refalrts::link_brackets( context[11], context[23] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[19], context[22] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[12];
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[23], context[25] );
  res = refalrts::splice_evar( res, context[0], context[11] );
  res = refalrts::splice_evar( res, context[13], context[22] );
  refalrts::use( res );
  refalrts::wrap_closure( context[0] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_GenRemainderFuncNames("GenRemainderFuncNames", 858440880U, 3942715697U, func_GenRemainderFuncNames);


static refalrts::FnResult func_gen_GetDrivenFunctions_A2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & GetDrivenFunctions=2/4 (/7 (/11 e.OptFunctions#3/9 )/12 (/15 e.DrivenNames#3/13 )/16 )/8 e.AST#3/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
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
  // closed e.OptFunctions#3 as range 9
  // closed e.DrivenNames#3 as range 13
  // closed e.AST#3 as range 2
  //DEBUG: e.OptFunctions#3: 9
  //DEBUG: e.DrivenNames#3: 13
  //DEBUG: e.AST#3: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & GetDrivenFunctions=2/4 (/7 (/11 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: (/12 AsIs: (/15 AsIs: e.DrivenNames#3/13 AsIs: )/16 } Tile{ AsIs: e.OptFunctions#3/9 } Tile{ AsIs: )/8 } Tile{ AsIs: e.AST#3/2 } Tile{ ]] }
  refalrts::reinit_open_bracket(context[12]);
  refalrts::link_brackets( context[12], context[8] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[12], context[16] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_GetDrivenFunctions_A2("GetDrivenFunctions=2", 858440880U, 3942715697U, func_gen_GetDrivenFunctions_A2);


static refalrts::FnResult func_gen_GetDrivenFunctions_A2L1S1L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  // </0 & GetDrivenFunctions=2\1$1\1/4 (/7 e.Body#3/5 )/8 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
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
  // closed e.Body#3 as range 5
  //DEBUG: e.Body#3: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & GetDrivenFunctions=2\1$1\1/4 (/7 {REMOVED TILE} )/8 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Body#3/5 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_GetDrivenFunctions_A2L1S1L1("GetDrivenFunctions=2\\1$1\\1", 858440880U, 3942715697U, func_gen_GetDrivenFunctions_A2L1S1L1);


static refalrts::FnResult func_gen_GetDrivenFunctions_A2L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 69 elems
  refalrts::Iter context[69];
  refalrts::zeros( context, 69 );
  // </0 & GetDrivenFunctions=2\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & GetDrivenFunctions=2\1/4 (/7 e.new#1/5 )/8 (/11 e.new#2/9 )/12 t.new#3/13 >/1
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
    // </0 & GetDrivenFunctions=2\1/4 (/7 e.OptNames#2/15 )/8 (/11 (/24 e.OptFunctions#3/22 )/25 (/28 e.RemNames#3/26 )/29 )/12 (/13 # Function/21 s.ScopeClass#3/30 (/33 e.Name#3/31 )/34 e.Body#3/19 )/14 >/1
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
    // closed e.OptNames#2 as range 15
    // closed e.OptFunctions#3 as range 22
    // closed e.RemNames#3 as range 26
    if( ! refalrts::svar_left( context[30], context[19], context[20] ) )
      continue;
    context[31] = 0;
    context[32] = 0;
    context[33] = refalrts::brackets_left( context[31], context[32], context[19], context[20] );
    if( ! context[33] )
      continue;
    refalrts::bracket_pointers(context[33], context[34]);
    // closed e.Name#3 as range 31
    // closed e.Body#3 as range 19
    //DEBUG: e.OptNames#2: 15
    //DEBUG: e.OptFunctions#3: 22
    //DEBUG: e.RemNames#3: 26
    //DEBUG: s.ScopeClass#3: 30
    //DEBUG: e.Name#3: 31
    //DEBUG: e.Body#3: 19
    //15: e.OptNames#2
    //19: e.Body#3
    //22: e.OptFunctions#3
    //26: e.RemNames#3
    //30: s.ScopeClass#3
    //31: e.Name#3
    //38: e.OptNames#2

    refalrts::reset_allocator(vm);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::alloc_open_call(vm, context[35]);
    refalrts::alloc_name(vm, context[37], functions[efunc_gen_GetDrivenFunctions_A2L1S1C1]);
    refalrts::copy_evar(vm, context[38], context[39], context[15], context[16]);
    refalrts::alloc_close_call(vm, context[36]);
    refalrts::push_stack( vm, context[36] );
    refalrts::push_stack( vm, context[35] );
    res = refalrts::splice_elem( res, context[36] );
    res = refalrts::splice_evar( res, context[38], context[39] );
    res = refalrts::splice_elem( res, context[37] );
    res = refalrts::splice_elem( res, context[35] );
    refalrts::use( res );
    refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
    if (rec_res != refalrts::cSuccess)
      return rec_res;
    refalrts::this_is_generated_function(vm);
    do {
      // </35 & GetDrivenFunctions=2\1$1?1/39 e.B#4/40 (/46 s.Label#4/50 e.Name#3/48 )/47 e.E#4/42 >/36
      context[37] = 0;
      context[38] = 0;
      context[39] = refalrts::call_left( context[37], context[38], context[35], context[36] );
      context[40] = 0;
      context[41] = 0;
      refalrts::start_e_loop(vm);
      do {
        context[42] = context[37];
        context[43] = context[38];
        context[44] = 0;
        context[45] = 0;
        context[46] = refalrts::brackets_left( context[44], context[45], context[42], context[43] );
        if( ! context[46] )
          continue;
        refalrts::bracket_pointers(context[46], context[47]);
        if( ! refalrts::repeated_evar_right( vm, context[48], context[49], context[31], context[32], context[44], context[45] ) )
          continue;
        // closed e.E#4 as range 42
        if( ! refalrts::svar_left( context[50], context[44], context[45] ) )
          continue;
        if( ! refalrts::empty_seq( context[44], context[45] ) )
          continue;
        //DEBUG: e.OptNames#2: 15
        //DEBUG: e.OptFunctions#3: 22
        //DEBUG: e.RemNames#3: 26
        //DEBUG: s.ScopeClass#3: 30
        //DEBUG: e.Name#3: 31
        //DEBUG: e.Body#3: 19
        //DEBUG: e.B#4: 40
        //DEBUG: e.E#4: 42
        //DEBUG: s.Label#4: 50
        //15: e.OptNames#2
        //19: e.Body#3
        //22: e.OptFunctions#3
        //26: e.RemNames#3
        //30: s.ScopeClass#3
        //31: e.Name#3
        //40: e.B#4
        //42: e.E#4
        //48: e.Name#3
        //50: s.Label#4
        //54: e.Body#3

        refalrts::reset_allocator(vm);
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        refalrts::alloc_open_call(vm, context[51]);
        refalrts::alloc_name(vm, context[53], functions[efunc_gen_GetDrivenFunctions_A2L1S1C2]);
        refalrts::copy_evar(vm, context[54], context[55], context[19], context[20]);
        refalrts::alloc_close_call(vm, context[52]);
        refalrts::push_stack( vm, context[52] );
        refalrts::push_stack( vm, context[51] );
        res = refalrts::splice_elem( res, context[52] );
        res = refalrts::splice_evar( res, context[54], context[55] );
        res = refalrts::splice_elem( res, context[53] );
        res = refalrts::splice_elem( res, context[51] );
        refalrts::use( res );
        refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
        if (rec_res != refalrts::cSuccess)
          return rec_res;
        refalrts::this_is_generated_function(vm);
        do {
          // </51 & GetDrivenFunctions=2\1$1?2/55 # Sentences/56 e.Sentences#5/53 >/52
          context[53] = 0;
          context[54] = 0;
          context[55] = refalrts::call_left( context[53], context[54], context[51], context[52] );
          context[56] = refalrts::ident_left( identifiers[ident_Sentences], context[53], context[54] );
          if( ! context[56] )
            continue;
          // closed e.Sentences#5 as range 53
          //DEBUG: e.OptNames#2: 15
          //DEBUG: e.OptFunctions#3: 22
          //DEBUG: e.RemNames#3: 26
          //DEBUG: s.ScopeClass#3: 30
          //DEBUG: e.Name#3: 31
          //DEBUG: e.Body#3: 19
          //DEBUG: e.B#4: 40
          //DEBUG: e.E#4: 42
          //DEBUG: s.Label#4: 50
          //DEBUG: e.Sentences#5: 53

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} e.OptNames#2/15 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.B#4/40 {REMOVED TILE} s.Label#4/50 {REMOVED TILE} {REMOVED TILE} e.E#4/42 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ } Tile{ AsIs: (/11 AsIs: (/24 AsIs: e.OptFunctions#3/22 HalfReuse: (/25 HalfReuse: s.Label4 #50/28 } s.ScopeClass#3/30/57 Tile{ AsIs: (/46 } e.Name#3/48/58 Tile{ AsIs: )/47 } Tile{ HalfReuse: [*]/35 Reuse: & GetDrivenFunctions=2\1$1\1/39 } (/60 e.Body#3/19/61 Tile{ AsIs: )/8 } {*}/63 Tile{ HalfReuse: )/36 HalfReuse: )/51 } (/64 Tile{ AsIs: e.RemNames#3/26 } (/65 Tile{ AsIs: e.Name#3/48 } )/66 Tile{ AsIs: </0 Reuse: & GenRemainderFuncNames/4 AsIs: (/7 } e.Name#3/48/67 Tile{ HalfReuse: )/55 HalfReuse: (/56 AsIs: e.Sentences#5/53 HalfReuse: )/52 AsIs: >/1 } Tile{ AsIs: )/29 AsIs: )/12 AsIs: (/13 AsIs: # Function/21 AsIs: s.ScopeClass#3/30 AsIs: (/33 AsIs: e.Name#3/31 AsIs: )/34 AsIs: e.Body#3/19 AsIs: )/14 } Tile{ ]] }
          refalrts::copy_stvar(vm, context[57], context[30]);
          refalrts::copy_evar(vm, context[58], context[59], context[48], context[49]);
          refalrts::alloc_open_bracket(vm, context[60]);
          refalrts::copy_evar(vm, context[61], context[62], context[19], context[20]);
          refalrts::alloc_unwrapped_closure(vm, context[63], context[35]);
          refalrts::alloc_open_bracket(vm, context[64]);
          refalrts::alloc_open_bracket(vm, context[65]);
          refalrts::alloc_close_bracket(vm, context[66]);
          refalrts::copy_evar(vm, context[67], context[68], context[48], context[49]);
          refalrts::reinit_open_bracket(context[25]);
          refalrts::reinit_svar( context[28], context[50] );
          refalrts::reinit_closure_head(context[35]);
          refalrts::update_name(context[39], functions[efunc_gen_GetDrivenFunctions_A2L1S1L1]);
          refalrts::reinit_close_bracket(context[36]);
          refalrts::reinit_close_bracket(context[51]);
          refalrts::update_name(context[4], functions[efunc_GenRemainderFuncNames]);
          refalrts::reinit_close_bracket(context[55]);
          refalrts::reinit_open_bracket(context[56]);
          refalrts::reinit_close_bracket(context[52]);
          refalrts::link_brackets( context[13], context[14] );
          refalrts::link_brackets( context[33], context[34] );
          refalrts::link_brackets( context[11], context[12] );
          refalrts::link_brackets( context[64], context[29] );
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[0] );
          refalrts::link_brackets( context[56], context[52] );
          refalrts::link_brackets( context[7], context[55] );
          refalrts::link_brackets( context[65], context[66] );
          refalrts::link_brackets( context[24], context[51] );
          refalrts::link_brackets( context[25], context[36] );
          refalrts::link_brackets( context[60], context[8] );
          refalrts::link_brackets( context[46], context[47] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = arg_end->next;
          res = refalrts::splice_evar( res, context[29], context[14] );
          res = refalrts::splice_evar( res, context[55], context[1] );
          res = refalrts::splice_evar( res, context[67], context[68] );
          res = refalrts::splice_evar( res, context[0], context[7] );
          res = refalrts::splice_evar( res, context[66], context[66] );
          res = refalrts::splice_evar( res, context[48], context[49] );
          res = refalrts::splice_evar( res, context[65], context[65] );
          res = refalrts::splice_evar( res, context[26], context[27] );
          res = refalrts::splice_evar( res, context[64], context[64] );
          res = refalrts::splice_evar( res, context[36], context[51] );
          res = refalrts::splice_evar( res, context[63], context[63] );
          res = refalrts::splice_evar( res, context[8], context[8] );
          res = refalrts::splice_evar( res, context[61], context[62] );
          res = refalrts::splice_evar( res, context[60], context[60] );
          res = refalrts::splice_evar( res, context[35], context[39] );
          res = refalrts::splice_evar( res, context[47], context[47] );
          res = refalrts::splice_evar( res, context[58], context[59] );
          res = refalrts::splice_evar( res, context[46], context[46] );
          res = refalrts::splice_evar( res, context[57], context[57] );
          res = refalrts::splice_evar( res, context[11], context[28] );
          refalrts::splice_to_freelist_open( vm, trash_prev, res );
          refalrts::wrap_closure( context[63] );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        refalrts::splice_to_freelist(vm, context[51], context[52]);
        continue;
      } while ( refalrts::open_evar_advance( context[40], context[41], context[37], context[38] ) );
    } while ( 0 );
    refalrts::stop_sentence(vm);

    refalrts::splice_to_freelist(vm, context[35], context[36]);
    continue;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & GetDrivenFunctions=2\1/4 (/7 e.OptNames#2/5 )/8 (/11 e.OptInfo#3/9 )/12 t.Other#3/13 >/1
  // closed e.OptNames#2 as range 5
  // closed e.OptInfo#3 as range 9
  //DEBUG: t.Other#3: 13
  //DEBUG: e.OptNames#2: 5
  //DEBUG: e.OptInfo#3: 9

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & GetDrivenFunctions=2\1/4 (/7 e.OptNames#2/5 )/8 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/11 AsIs: e.OptInfo#3/9 AsIs: )/12 AsIs: t.Other#3/13 } Tile{ ]] }
  refalrts::link_brackets( context[11], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[11], context[14] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_GetDrivenFunctions_A2L1("GetDrivenFunctions=2\\1", 858440880U, 3942715697U, func_gen_GetDrivenFunctions_A2L1);


static refalrts::FnResult func_gen_GetDrivenFunctions_A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
  // </0 & GetDrivenFunctions=1/4 (/7 e.OptNames#2/5 )/8 e.AST#2/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.OptNames#2 as range 5
  // closed e.AST#2 as range 2
  //DEBUG: e.OptNames#2: 5
  //DEBUG: e.AST#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </9 & GetDrivenFunctions=2/10 </11 & MapAccum/12 Tile{ HalfReuse: [*]/0 Reuse: & GetDrivenFunctions=2\1/4 AsIs: (/7 AsIs: e.OptNames#2/5 AsIs: )/8 } {*}/13 (/14 (/15 )/16 (/17 )/18 )/19 Tile{ AsIs: e.AST#2/2 } >/20 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[9]);
  refalrts::alloc_name(vm, context[10], functions[efunc_gen_GetDrivenFunctions_A2]);
  refalrts::alloc_open_call(vm, context[11]);
  refalrts::alloc_name(vm, context[12], functions[efunc_MapAccum]);
  refalrts::alloc_unwrapped_closure(vm, context[13], context[0]);
  refalrts::alloc_open_bracket(vm, context[14]);
  refalrts::alloc_open_bracket(vm, context[15]);
  refalrts::alloc_close_bracket(vm, context[16]);
  refalrts::alloc_open_bracket(vm, context[17]);
  refalrts::alloc_close_bracket(vm, context[18]);
  refalrts::alloc_close_bracket(vm, context[19]);
  refalrts::alloc_close_call(vm, context[20]);
  refalrts::reinit_closure_head(context[0]);
  refalrts::update_name(context[4], functions[efunc_gen_GetDrivenFunctions_A2L1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[9] );
  refalrts::push_stack( vm, context[20] );
  refalrts::push_stack( vm, context[11] );
  refalrts::link_brackets( context[14], context[19] );
  refalrts::link_brackets( context[17], context[18] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[20], context[20] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[13], context[19] );
  res = refalrts::splice_evar( res, context[0], context[8] );
  res = refalrts::splice_evar( res, context[9], context[12] );
  refalrts::use( res );
  refalrts::wrap_closure( context[13] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_GetDrivenFunctions_A1("GetDrivenFunctions=1", 858440880U, 3942715697U, func_gen_GetDrivenFunctions_A1);


static refalrts::FnResult func_gen_GetDrivenFunctions_A1L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
  // </0 & GetDrivenFunctions=1\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & GetDrivenFunctions=1\1/4 (/7 e.new#1/5 )/8 t.new#2/9 >/1
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
    // </0 & GetDrivenFunctions=1\1/4 (/7 e.new#5/11 )/8 (/9 s.new#3/15 e.new#4/13 )/10 >/1
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
      // </0 & GetDrivenFunctions=1\1/4 (/7 e.Optimizable#2/16 )/8 (/9 # Drive/15 e.Name#2/18 )/10 >/1
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
      //TRASH: {REMOVED TILE} & GetDrivenFunctions=1\1/4 (/7 {REMOVED TILE} )/8 {REMOVED TILE}
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

    // </0 & GetDrivenFunctions=1\1/4 (/7 e.Optimizable#2/16 )/8 (/9 # Inline/15 e.Name#2/18 )/10 >/1
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
    //TRASH: {REMOVED TILE} & GetDrivenFunctions=1\1/4 (/7 {REMOVED TILE} )/8 {REMOVED TILE}
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

  // </0 & GetDrivenFunctions=1\1/4 (/7 e.Optimizable#2/5 )/8 t.Other#2/9 >/1
  // closed e.Optimizable#2 as range 5
  //DEBUG: t.Other#2: 9
  //DEBUG: e.Optimizable#2: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & GetDrivenFunctions=1\1/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Optimizable#2/5 AsIs: )/8 AsIs: t.Other#2/9 } Tile{ ]] }
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[10] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_GetDrivenFunctions_A1L1("GetDrivenFunctions=1\\1", 858440880U, 3942715697U, func_gen_GetDrivenFunctions_A1L1);


static refalrts::FnResult func_GetDrivenFunctions(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
  // </0 & GetDrivenFunctions/4 e.AST#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.AST#1 as range 2
  //DEBUG: e.AST#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & GetDrivenFunctions=1/4 } </5 & MapAccum/6 & GetDrivenFunctions=1\1/7 (/8 )/9 Tile{ AsIs: e.AST#1/2 } >/10 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::alloc_name(vm, context[6], functions[efunc_MapAccum]);
  refalrts::alloc_name(vm, context[7], functions[efunc_gen_GetDrivenFunctions_A1L1]);
  refalrts::alloc_open_bracket(vm, context[8]);
  refalrts::alloc_close_bracket(vm, context[9]);
  refalrts::alloc_close_call(vm, context[10]);
  refalrts::update_name(context[4], functions[efunc_gen_GetDrivenFunctions_A1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[10] );
  refalrts::push_stack( vm, context[5] );
  refalrts::link_brackets( context[8], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[10], context[10] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[5], context[9] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_GetDrivenFunctions("GetDrivenFunctions", 858440880U, 3942715697U, func_GetDrivenFunctions);


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

static refalrts::NativeReference nat_ref_OptSwitch("OptSwitch", 858440880U, 3942715697U, func_OptSwitch);


static refalrts::FnResult func_gen_DriveInlineOptimizerTick_A2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 5 elems
  refalrts::Iter context[5];
  refalrts::zeros( context, 5 );
  // </0 & DriveInlineOptimizerTick=2/4 e.AST#3/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.AST#3 as range 2
  //DEBUG: e.AST#3: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DistinctFuncs/4 AsIs: e.AST#3/2 AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_DistinctFuncs]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DriveInlineOptimizerTick_A2("DriveInlineOptimizerTick=2", 858440880U, 3942715697U, func_gen_DriveInlineOptimizerTick_A2);


static refalrts::FnResult func_gen_DriveInlineOptimizerTick_A2L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  // </0 & DriveInlineOptimizerTick=2\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DriveInlineOptimizerTick=2\1/4 s.new#1/5 t.new#2/6 t.new#3/8 >/1
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
    // </0 & DriveInlineOptimizerTick=2\1/4 s.Mode#2/5 t.OptInfo#3/6 (/8 # Function/12 s.ScopeClass#3/13 (/16 e.Name#3/14 )/17 # Sentences/18 e.Sentences#3/10 )/9 >/1
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
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & OptimizeF/4 } Tile{ AsIs: (/8 AsIs: # Function/12 AsIs: s.ScopeClass#3/13 AsIs: (/16 AsIs: e.Name#3/14 AsIs: )/17 AsIs: # Sentences/18 AsIs: e.Sentences#3/10 AsIs: )/9 } Tile{ AsIs: t.OptInfo#3/6 } Tile{ AsIs: s.Mode#2/5 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_OptimizeF]);
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

  // </0 & DriveInlineOptimizerTick=2\1/4 s.Mode#2/5 t.OptInfo#3/6 t.Other#3/8 >/1
  //DEBUG: t.OptInfo#3: 6
  //DEBUG: t.Other#3: 8
  //DEBUG: s.Mode#2: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & DriveInlineOptimizerTick=2\1/4 s.Mode#2/5 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.OptInfo#3/6 AsIs: t.Other#3/8 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[6], context[9] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DriveInlineOptimizerTick_A2L1("DriveInlineOptimizerTick=2\\1", 858440880U, 3942715697U, func_gen_DriveInlineOptimizerTick_A2L1);


static refalrts::FnResult func_gen_DriveInlineOptimizerTick_A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
  // </0 & DriveInlineOptimizerTick=1/4 t.OptInfo#1/5 (/9 e.AST#1/7 )/10 s.Mode#2/11 >/1
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
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DriveInlineOptimizerTick=2/4 } </12 & MapAccum/13 Tile{ HalfReuse: [*]/9 } Tile{ HalfReuse: & DriveInlineOptimizerTick=2\1/10 AsIs: s.Mode#2/11 } {*}/14 Tile{ AsIs: t.OptInfo#1/5 } Tile{ AsIs: e.AST#1/7 } >/15 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[12]);
  refalrts::alloc_name(vm, context[13], functions[efunc_MapAccum]);
  refalrts::alloc_unwrapped_closure(vm, context[14], context[9]);
  refalrts::alloc_close_call(vm, context[15]);
  refalrts::update_name(context[4], functions[efunc_gen_DriveInlineOptimizerTick_A2]);
  refalrts::reinit_closure_head(context[9]);
  refalrts::reinit_name(context[10], functions[efunc_gen_DriveInlineOptimizerTick_A2L1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[15] );
  refalrts::push_stack( vm, context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[15], context[15] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[14], context[14] );
  res = refalrts::splice_evar( res, context[10], context[11] );
  res = refalrts::splice_evar( res, context[9], context[9] );
  res = refalrts::splice_evar( res, context[12], context[13] );
  refalrts::use( res );
  refalrts::wrap_closure( context[14] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DriveInlineOptimizerTick_A1("DriveInlineOptimizerTick=1", 858440880U, 3942715697U, func_gen_DriveInlineOptimizerTick_A1);


static refalrts::FnResult func_DriveInlineOptimizerTick(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
  // </0 & DriveInlineOptimizerTick/4 t.OptInfo#1/5 e.AST#1/2 s.Opt#1/7 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_right( context[7], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.AST#1 as range 2
  //DEBUG: t.OptInfo#1: 5
  //DEBUG: s.Opt#1: 7
  //DEBUG: e.AST#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DriveInlineOptimizerTick=1/4 AsIs: t.OptInfo#1/5 } (/8 Tile{ AsIs: e.AST#1/2 } )/9 </10 & OptSwitch/11 Tile{ AsIs: s.Opt#1/7 AsIs: >/1 } >/12 Tile{ ]] }
  refalrts::alloc_open_bracket(vm, context[8]);
  refalrts::alloc_close_bracket(vm, context[9]);
  refalrts::alloc_open_call(vm, context[10]);
  refalrts::alloc_name(vm, context[11], functions[efunc_OptSwitch]);
  refalrts::alloc_close_call(vm, context[12]);
  refalrts::update_name(context[4], functions[efunc_gen_DriveInlineOptimizerTick_A1]);
  refalrts::push_stack( vm, context[12] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[10] );
  refalrts::link_brackets( context[8], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[12], context[12] );
  res = refalrts::splice_evar( res, context[7], context[1] );
  res = refalrts::splice_evar( res, context[9], context[11] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_DriveInlineOptimizerTick("DriveInlineOptimizerTick", 858440880U, 3942715697U, func_DriveInlineOptimizerTick);


static refalrts::FnResult func_DistinctFuncs(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 37 elems
  refalrts::Iter context[37];
  refalrts::zeros( context, 37 );
  // </0 & DistinctFuncs/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & DistinctFuncs/4 e.B#1/7 (/13 # Function/15 s.ScopeClass#1/16 (/19 e.Name#1/17 )/20 e.Body1#1/11 )/14 e.M#1/21 (/27 # Function/29 s.ScopeClass#1/30 (/33 e.Name#1/35 )/34 e.Body2#1/25 )/28 e.E#1/23 >/1
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
      if( ! refalrts::svar_left( context[16], context[11], context[12] ) )
        continue;
      context[17] = 0;
      context[18] = 0;
      context[19] = refalrts::brackets_left( context[17], context[18], context[11], context[12] );
      if( ! context[19] )
        continue;
      refalrts::bracket_pointers(context[19], context[20]);
      // closed e.Name#1 as range 17
      // closed e.Body1#1 as range 11
      context[21] = 0;
      context[22] = 0;
      refalrts::start_e_loop(vm);
      do {
        context[23] = context[9];
        context[24] = context[10];
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
        // closed e.Body2#1 as range 25
        // closed e.E#1 as range 23
        //DEBUG: e.B#1: 7
        //DEBUG: s.ScopeClass#1: 16
        //DEBUG: e.Name#1: 17
        //DEBUG: e.Body1#1: 11
        //DEBUG: e.M#1: 21
        //DEBUG: e.Body2#1: 25
        //DEBUG: e.E#1: 23

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} (/27 # Function/29 s.ScopeClass#1/30 (/33 e.Name#1/35 )/34 e.Body2#1/25 )/28 {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & DistinctFuncs/4 AsIs: e.B#1/7 AsIs: (/13 AsIs: # Function/15 AsIs: s.ScopeClass#1/16 AsIs: (/19 AsIs: e.Name#1/17 AsIs: )/20 AsIs: e.Body1#1/11 AsIs: )/14 } Tile{ AsIs: e.M#1/21 } Tile{ AsIs: e.E#1/23 } Tile{ AsIs: >/1 ]] }
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[13], context[14] );
        refalrts::link_brackets( context[19], context[20] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[23], context[24] );
        res = refalrts::splice_evar( res, context[21], context[22] );
        refalrts::splice_to_freelist_open( vm, context[14], res );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[21], context[22], context[9], context[10] ) );
    } while ( refalrts::open_evar_advance( context[7], context[8], context[5], context[6] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DistinctFuncs/4 e.Other#1/2 >/1
  // closed e.Other#1 as range 2
  //DEBUG: e.Other#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & DistinctFuncs/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Other#1/2 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_DistinctFuncs("DistinctFuncs", 858440880U, 3942715697U, func_DistinctFuncs);


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

static refalrts::NativeReference nat_ref_gen_IsPassiveCall_L1("IsPassiveCall\\1", 858440880U, 3942715697U, func_gen_IsPassiveCall_L1);


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

static refalrts::NativeReference nat_ref_IsPassiveCall("IsPassiveCall", 858440880U, 3942715697U, func_IsPassiveCall);


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

static refalrts::NativeReference nat_ref_IsPassiveCallm_Aux("IsPassiveCall-Aux", 858440880U, 3942715697U, func_IsPassiveCallm_Aux);


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

static refalrts::NativeReference nat_ref_gen_IsLexpr_B1("IsLexpr:1", 858440880U, 3942715697U, func_gen_IsLexpr_B1);


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

static refalrts::NativeReference nat_ref_IsLexpr("IsLexpr", 858440880U, 3942715697U, func_IsLexpr);


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

static refalrts::NativeReference nat_ref_gen_IsLexprm_Aux_S2L1("IsLexpr-Aux$2\\1", 858440880U, 3942715697U, func_gen_IsLexprm_Aux_S2L1);


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
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map@1/4 AsIs: e.Expr#1/2 AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_gen_Map_Z1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_IsLexprm_Aux("IsLexpr-Aux", 858440880U, 3942715697U, func_IsLexprm_Aux);


static refalrts::FnResult func_gen_OptimizeF_A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 26 elems
  refalrts::Iter context[26];
  refalrts::zeros( context, 26 );
  // </0 & OptimizeF=1/4 t.OptInfo#1/21 s.ScopeClass#1/25 (/11 e.Name#1/9 )/12 (/7 t.OptInfo#1/23 (/19 e.Sentences#2/17 )/20 (/15 e.Functions#2/13 )/16 )/8 >/1
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
  // closed e.Functions#2 as range 13
  context[22] = refalrts::tvar_left( context[21], context[2], context[3] );
  if( ! context[22] )
    return refalrts::cRecognitionImpossible;
  context[24] = refalrts::repeated_stvar_left( vm, context[23], context[21], context[5], context[6] );
  if( ! context[24] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[25], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: e.Name#1: 9
  //DEBUG: e.Sentences#2: 17
  //DEBUG: e.Functions#2: 13
  //DEBUG: t.OptInfo#1: 21
  //DEBUG: s.ScopeClass#1: 25

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & OptimizeF=1/4 t.OptInfo#1/21 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} )/20 (/15 {REMOVED TILE} )/16 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.OptInfo#1/23 AsIs: (/19 } Tile{ HalfReuse: # Function/1 } Tile{ AsIs: s.ScopeClass#1/25 AsIs: (/11 AsIs: e.Name#1/9 AsIs: )/12 HalfReuse: # Sentences/7 } Tile{ AsIs: e.Sentences#2/17 } Tile{ AsIs: )/8 } Tile{ AsIs: e.Functions#2/13 } Tile{ ]] }
  refalrts::reinit_ident(context[1], identifiers[ident_Function]);
  refalrts::reinit_ident(context[7], identifiers[ident_Sentences]);
  refalrts::link_brackets( context[19], context[8] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[17], context[18] );
  res = refalrts::splice_evar( res, context[25], context[7] );
  res = refalrts::splice_evar( res, context[1], context[1] );
  res = refalrts::splice_evar( res, context[23], context[19] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_OptimizeF_A1("OptimizeF=1", 858440880U, 3942715697U, func_gen_OptimizeF_A1);


static refalrts::FnResult func_gen_OptimizeF_A1L1A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  // </0 & OptimizeF=1\1=1/4 (/7 e.SntAcc#2/5 )/8 (/11 e.FunAcc#2/9 )/12 t.OptInfo#3/13 (/17 e.NewFunctions#3/15 )/18 e.NewSentences#3/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
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
  //TRASH: {REMOVED TILE} </0 & OptimizeF=1\1=1/4 (/7 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
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

static refalrts::NativeReference nat_ref_gen_OptimizeF_A1L1A1("OptimizeF=1\\1=1", 858440880U, 3942715697U, func_gen_OptimizeF_A1L1A1);


static refalrts::FnResult func_gen_OptimizeF_A1L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 23 elems
  refalrts::Iter context[23];
  refalrts::zeros( context, 23 );
  // </0 & OptimizeF=1\1/4 s.Mode#1/5 (/8 t.OptInfo#2/18 (/16 e.SntAcc#2/14 )/17 (/12 e.FunAcc#2/10 )/13 )/9 t.Sentence#2/20 >/1
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
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & OptimizeF=1\1=1/4 } Tile{ AsIs: (/16 AsIs: e.SntAcc#2/14 AsIs: )/17 AsIs: (/12 AsIs: e.FunAcc#2/10 AsIs: )/13 HalfReuse: </9 } & OptSentence/22 Tile{ AsIs: t.Sentence#2/20 } Tile{ AsIs: t.OptInfo#2/18 } Tile{ AsIs: s.Mode#1/5 HalfReuse: >/8 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_name(vm, context[22], functions[efunc_OptSentence]);
  refalrts::update_name(context[4], functions[efunc_gen_OptimizeF_A1L1A1]);
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

static refalrts::NativeReference nat_ref_gen_OptimizeF_A1L1("OptimizeF=1\\1", 858440880U, 3942715697U, func_gen_OptimizeF_A1L1);


static refalrts::FnResult func_OptimizeF(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 29 elems
  refalrts::Iter context[29];
  refalrts::zeros( context, 29 );
  // </0 & OptimizeF/4 (/7 # Function/9 s.ScopeClass#1/10 (/13 e.Name#1/11 )/14 # Sentences/15 e.Sentences#1/5 )/8 t.OptInfo#1/16 s.Mode#1/18 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
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
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & OptimizeF=1/4 } t.OptInfo#1/16/19 Tile{ AsIs: s.ScopeClass#1/10 AsIs: (/13 AsIs: e.Name#1/11 AsIs: )/14 HalfReuse: </15 } & Reduce/21 [*]/22 & OptimizeF=1\1/23 Tile{ AsIs: s.Mode#1/18 } {*}/24 Tile{ HalfReuse: (/8 AsIs: t.OptInfo#1/16 } Tile{ AsIs: (/7 HalfReuse: )/9 } (/25 )/26 )/27 Tile{ AsIs: e.Sentences#1/5 } >/28 Tile{ AsIs: >/1 ]] }
  refalrts::copy_evar(vm, context[19], context[20], context[16], context[17]);
  refalrts::alloc_name(vm, context[21], functions[efunc_Reduce]);
  refalrts::alloc_closure_head(vm, context[22]);
  refalrts::alloc_name(vm, context[23], functions[efunc_gen_OptimizeF_A1L1]);
  refalrts::alloc_unwrapped_closure(vm, context[24], context[22]);
  refalrts::alloc_open_bracket(vm, context[25]);
  refalrts::alloc_close_bracket(vm, context[26]);
  refalrts::alloc_close_bracket(vm, context[27]);
  refalrts::alloc_close_call(vm, context[28]);
  refalrts::update_name(context[4], functions[efunc_gen_OptimizeF_A1]);
  refalrts::reinit_open_call(context[15]);
  refalrts::reinit_open_bracket(context[8]);
  refalrts::reinit_close_bracket(context[9]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[28] );
  refalrts::push_stack( vm, context[15] );
  refalrts::link_brackets( context[8], context[27] );
  refalrts::link_brackets( context[25], context[26] );
  refalrts::link_brackets( context[7], context[9] );
  refalrts::link_brackets( context[13], context[14] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[28], context[28] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[25], context[27] );
  res = refalrts::splice_evar( res, context[7], context[9] );
  res = refalrts::splice_evar( res, context[8], context[17] );
  res = refalrts::splice_evar( res, context[24], context[24] );
  res = refalrts::splice_evar( res, context[18], context[18] );
  res = refalrts::splice_evar( res, context[21], context[23] );
  res = refalrts::splice_evar( res, context[10], context[15] );
  res = refalrts::splice_evar( res, context[19], context[20] );
  refalrts::use( res );
  refalrts::wrap_closure( context[24] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_OptimizeF("OptimizeF", 858440880U, 3942715697U, func_OptimizeF);


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

static refalrts::NativeReference nat_ref_gen_OptSentence_S1B1S2A1("OptSentence$1:1$2=1", 858440880U, 3942715697U, func_gen_OptSentence_S1B1S2A1);


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

static refalrts::NativeReference nat_ref_gen_OptSentence_S1B1("OptSentence$1:1", 858440880U, 3942715697U, func_gen_OptSentence_S1B1);


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

static refalrts::NativeReference nat_ref_OptSentence("OptSentence", 858440880U, 3942715697U, func_OptSentence);


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

static refalrts::NativeReference nat_ref_gen_OptSentencem_Aux_L1("OptSentence-Aux\\1", 858440880U, 3942715697U, func_gen_OptSentencem_Aux_L1);


static refalrts::FnResult func_gen_OptSentencem_Aux_A2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  // </0 & OptSentence-Aux=2/4 (/7 e.OptFuncs#1/5 )/8 (/11 e.Left#1/9 )/12 (/15 e.Right#1/13 )/16 e.SolutionPacks#3/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
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
  // closed e.OptFuncs#1 as range 5
  // closed e.Left#1 as range 9
  // closed e.Right#1 as range 13
  // closed e.SolutionPacks#3 as range 2
  //DEBUG: e.OptFuncs#1: 5
  //DEBUG: e.Left#1: 9
  //DEBUG: e.Right#1: 13
  //DEBUG: e.SolutionPacks#3: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.OptFuncs#1/5 AsIs: )/8 HalfReuse: </11 } Tile{ Reuse: & MapAccum@1/4 } Tile{ AsIs: e.Left#1/9 } Tile{ AsIs: (/15 AsIs: e.Right#1/13 AsIs: )/16 } Tile{ HalfReuse: (/0 } Tile{ AsIs: )/12 } (/17 Tile{ AsIs: e.SolutionPacks#3/2 } )/18 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[17]);
  refalrts::alloc_close_bracket(vm, context[18]);
  refalrts::reinit_open_call(context[11]);
  refalrts::update_name(context[4], functions[efunc_gen_MapAccum_Z1]);
  refalrts::reinit_open_bracket(context[0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[11] );
  refalrts::link_brackets( context[17], context[18] );
  refalrts::link_brackets( context[0], context[12] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[18], context[18] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[17], context[17] );
  res = refalrts::splice_evar( res, context[12], context[12] );
  res = refalrts::splice_evar( res, context[0], context[0] );
  res = refalrts::splice_evar( res, context[15], context[16] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[4], context[4] );
  res = refalrts::splice_evar( res, context[7], context[11] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_OptSentencem_Aux_A2("OptSentence-Aux=2", 858440880U, 3942715697U, func_gen_OptSentencem_Aux_A2);


static refalrts::FnResult func_gen_OptSentencem_Aux_A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 39 elems
  refalrts::Iter context[39];
  refalrts::zeros( context, 39 );
  // </0 & OptSentence-Aux=1/4 (/7 e.OptFuncs#1/5 )/8 (/11 e.Left#1/9 )/12 (/15 e.Right#1/13 )/16 s.Mode#1/17 (/20 e.Args#1/18 )/21 e.OptFuncs#1/22 t.FunctionForDrive#2/24 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
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
  // closed e.OptFuncs#1 as range 5
  // closed e.Left#1 as range 9
  // closed e.Right#1 as range 13
  if( ! refalrts::svar_left( context[17], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[18] = 0;
  context[19] = 0;
  context[20] = refalrts::brackets_left( context[18], context[19], context[2], context[3] );
  if( ! context[20] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[20], context[21]);
  if( ! refalrts::repeated_evar_left( vm, context[22], context[23], context[5], context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Args#1 as range 18
  context[25] = refalrts::tvar_left( context[24], context[2], context[3] );
  if( ! context[25] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: e.OptFuncs#1: 5
  //DEBUG: e.Left#1: 9
  //DEBUG: e.Right#1: 13
  //DEBUG: s.Mode#1: 17
  //DEBUG: e.Args#1: 18
  //DEBUG: t.FunctionForDrive#2: 24

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.OptFuncs#1/22 {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & OptSentence-Aux=2/4 AsIs: (/7 AsIs: e.OptFuncs#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.Left#1/9 AsIs: )/12 AsIs: (/15 AsIs: e.Right#1/13 AsIs: )/16 } </26 & OptSentence-MakeSubstitutions/27 Tile{ AsIs: s.Mode#1/17 } (/28 (/29 e.Left#1/9/30 )/32 (/33 e.Right#1/13/34 )/36 )/37 Tile{ AsIs: (/20 AsIs: e.Args#1/18 AsIs: )/21 } Tile{ AsIs: t.FunctionForDrive#2/24 AsIs: >/1 } >/38 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[26]);
  refalrts::alloc_name(vm, context[27], functions[efunc_OptSentencem_MakeSubstitutions]);
  refalrts::alloc_open_bracket(vm, context[28]);
  refalrts::alloc_open_bracket(vm, context[29]);
  refalrts::copy_evar(vm, context[30], context[31], context[9], context[10]);
  refalrts::alloc_close_bracket(vm, context[32]);
  refalrts::alloc_open_bracket(vm, context[33]);
  refalrts::copy_evar(vm, context[34], context[35], context[13], context[14]);
  refalrts::alloc_close_bracket(vm, context[36]);
  refalrts::alloc_close_bracket(vm, context[37]);
  refalrts::alloc_close_call(vm, context[38]);
  refalrts::update_name(context[4], functions[efunc_gen_OptSentencem_Aux_A2]);
  refalrts::push_stack( vm, context[38] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[26] );
  refalrts::link_brackets( context[20], context[21] );
  refalrts::link_brackets( context[28], context[37] );
  refalrts::link_brackets( context[33], context[36] );
  refalrts::link_brackets( context[29], context[32] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[38], context[38] );
  res = refalrts::splice_evar( res, context[24], context[1] );
  res = refalrts::splice_evar( res, context[20], context[21] );
  res = refalrts::splice_evar( res, context[28], context[37] );
  res = refalrts::splice_evar( res, context[17], context[17] );
  res = refalrts::splice_evar( res, context[26], context[27] );
  refalrts::splice_to_freelist_open( vm, context[16], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_OptSentencem_Aux_A1("OptSentence-Aux=1", 858440880U, 3942715697U, func_gen_OptSentencem_Aux_A1);


static refalrts::FnResult func_OptSentencem_Aux(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 32 elems
  refalrts::Iter context[32];
  refalrts::zeros( context, 32 );
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
  //TRASH: {REMOVED TILE} s.Mode#1/5 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & OptSentence-Aux=1/4 } Tile{ AsIs: (/25 } Tile{ AsIs: e.OptFuncs#1/2 } Tile{ HalfReuse: )/8 AsIs: (/12 AsIs: e.Left#1/10 AsIs: )/13 AsIs: (/16 AsIs: e.Right#1/14 AsIs: )/17 HalfReuse: s.Mode1 #5/9 AsIs: (/20 } Tile{ AsIs: e.Args#1/18 } Tile{ AsIs: )/21 } Tile{ HalfReuse: </27 } Tile{ HalfReuse: & FindOptInfo/22 } e.OptFuncs#1/2/29 Tile{ HalfReuse: (/28 AsIs: e.Name#1/23 AsIs: )/26 } >/31 Tile{ AsIs: >/1 ]] }
  refalrts::copy_evar(vm, context[29], context[30], context[2], context[3]);
  refalrts::alloc_close_call(vm, context[31]);
  refalrts::update_name(context[4], functions[efunc_gen_OptSentencem_Aux_A1]);
  refalrts::reinit_close_bracket(context[8]);
  refalrts::reinit_svar( context[9], context[5] );
  refalrts::reinit_open_call(context[27]);
  refalrts::reinit_name(context[22], functions[efunc_FindOptInfo]);
  refalrts::reinit_open_bracket(context[28]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[31] );
  refalrts::push_stack( vm, context[27] );
  refalrts::link_brackets( context[28], context[26] );
  refalrts::link_brackets( context[20], context[21] );
  refalrts::link_brackets( context[16], context[17] );
  refalrts::link_brackets( context[12], context[13] );
  refalrts::link_brackets( context[25], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[31], context[31] );
  res = refalrts::splice_evar( res, context[28], context[26] );
  res = refalrts::splice_evar( res, context[29], context[30] );
  res = refalrts::splice_evar( res, context[22], context[22] );
  res = refalrts::splice_evar( res, context[27], context[27] );
  res = refalrts::splice_evar( res, context[21], context[21] );
  res = refalrts::splice_evar( res, context[18], context[19] );
  res = refalrts::splice_evar( res, context[8], context[20] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[25], context[25] );
  refalrts::splice_to_freelist_open( vm, context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_OptSentencem_Aux("OptSentence-Aux", 858440880U, 3942715697U, func_OptSentencem_Aux);


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

static refalrts::NativeReference nat_ref_gen_OptSentencem_MakeSubstitutions_S2A3("OptSentence-MakeSubstitutions$2=3", 858440880U, 3942715697U, func_gen_OptSentencem_MakeSubstitutions_S2A3);


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

static refalrts::NativeReference nat_ref_gen_OptSentencem_MakeSubstitutions_S2A2("OptSentence-MakeSubstitutions$2=2", 858440880U, 3942715697U, func_gen_OptSentencem_MakeSubstitutions_S2A2);


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

static refalrts::NativeReference nat_ref_gen_OptSentencem_MakeSubstitutions_S2A1("OptSentence-MakeSubstitutions$2=1", 858440880U, 3942715697U, func_gen_OptSentencem_MakeSubstitutions_S2A1);


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

static refalrts::NativeReference nat_ref_gen_OptSentencem_MakeSubstitutions_S2A1B1("OptSentence-MakeSubstitutions$2=1:1", 858440880U, 3942715697U, func_gen_OptSentencem_MakeSubstitutions_S2A1B1);


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

static refalrts::NativeReference nat_ref_OptSentencem_MakeSubstitutions("OptSentence-MakeSubstitutions", 858440880U, 3942715697U, func_OptSentencem_MakeSubstitutions);


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
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: (/4 AsIs: (/7 } Tile{ HalfReuse: # ColdCallBrackets/28 } Tile{ HalfReuse: (/22 HalfReuse: # Symbol/26 } # Name/29 e.Name#1/16/30 )/32 Tile{ AsIs: e.Args#1/20 } )/33 )/34 (/35 (/36 )/37 (/38 )/39 )/40 (/41 (/42 # Function/43 Tile{ AsIs: s.ScopeClass#1/10 AsIs: (/13 AsIs: e.Name#1/16 AsIs: )/14 AsIs: # Sentences/15 AsIs: e.Body#1/18 AsIs: )/8 } Tile{ HalfReuse: )/23 HalfReuse: )/1 ]] }
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
      refalrts::alloc_ident(vm, context[43], identifiers[ident_Function]);
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

static refalrts::NativeReference nat_ref_MakeColdSolution("MakeColdSolution", 858440880U, 3942715697U, func_MakeColdSolution);


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

static refalrts::NativeReference nat_ref_DecreaseMode("DecreaseMode", 858440880U, 3942715697U, func_DecreaseMode);


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

static refalrts::NativeReference nat_ref_gen_DoOptSentencem_MakeSubstitutions_S1B1("DoOptSentence-MakeSubstitutions$1:1", 858440880U, 3942715697U, func_gen_DoOptSentencem_MakeSubstitutions_S1B1);


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

static refalrts::NativeReference nat_ref_DoOptSentencem_MakeSubstitutions("DoOptSentence-MakeSubstitutions", 858440880U, 3942715697U, func_DoOptSentencem_MakeSubstitutions);


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

static refalrts::NativeReference nat_ref_DropLeft("DropLeft", 858440880U, 3942715697U, func_DropLeft);


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

static refalrts::NativeReference nat_ref_gen_FindOptInfo_A1("FindOptInfo=1", 858440880U, 3942715697U, func_gen_FindOptInfo_A1);


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

static refalrts::NativeReference nat_ref_gen_FindOptInfo_A1B1("FindOptInfo=1:1", 858440880U, 3942715697U, func_gen_FindOptInfo_A1B1);


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

static refalrts::NativeReference nat_ref_FindOptInfo("FindOptInfo", 858440880U, 3942715697U, func_FindOptInfo);


static refalrts::FnResult func_gen_FindOptInfom_Aux_A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 29 elems
  refalrts::Iter context[29];
  refalrts::zeros( context, 29 );
  // </0 & FindOptInfo-Aux=1/4 (/7 e.OptFuncs-B#1/5 )/8 s.Mode#1/9 s.ScopeClass#1/10 (/13 e.LookupName#1/11 )/14 s.Body#1/15 (/18 e.OptFuncs-E#1/16 )/19 (/22 e.Name#1/20 )/23 s.Drop#1/24 # Sentences/25 e.Sentences#2/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
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
  // closed e.LookupName#1 as range 11
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
  // closed e.OptFuncs-E#1 as range 16
  // closed e.Name#1 as range 20
  if( ! refalrts::svar_left( context[24], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[25] = refalrts::ident_left( identifiers[ident_Sentences], context[2], context[3] );
  if( ! context[25] )
    return refalrts::cRecognitionImpossible;
  // closed e.Sentences#2 as range 2
  //DEBUG: e.OptFuncs-B#1: 5
  //DEBUG: s.Mode#1: 9
  //DEBUG: s.ScopeClass#1: 10
  //DEBUG: e.LookupName#1: 11
  //DEBUG: s.Body#1: 15
  //DEBUG: e.OptFuncs-E#1: 16
  //DEBUG: e.Name#1: 20
  //DEBUG: s.Drop#1: 24
  //DEBUG: e.Sentences#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Drop#1/24 {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.OptFuncs-B#1/5 } Tile{ HalfReuse: (/8 AsIs: s.Mode#1/9 AsIs: s.ScopeClass#1/10 AsIs: (/13 AsIs: e.LookupName#1/11 AsIs: )/14 AsIs: s.Body#1/15 HalfReuse: )/18 AsIs: e.OptFuncs-E#1/16 HalfReuse: (/19 HalfReuse: s.Mode1 #9/22 } Tile{ HalfReuse: s.ScopeClass1 #10/4 AsIs: (/7 } Tile{ AsIs: e.Name#1/20 } Tile{ AsIs: )/23 } # Sentences/26 Tile{ AsIs: </0 } Tile{ HalfReuse: & DropLeft/25 AsIs: e.Sentences#2/2 HalfReuse: s.Drop1 #24/1 } >/27 )/28 Tile{ ]] }
  refalrts::alloc_ident(vm, context[26], identifiers[ident_Sentences]);
  refalrts::alloc_close_call(vm, context[27]);
  refalrts::alloc_close_bracket(vm, context[28]);
  refalrts::reinit_open_bracket(context[8]);
  refalrts::reinit_close_bracket(context[18]);
  refalrts::reinit_open_bracket(context[19]);
  refalrts::reinit_svar( context[22], context[9] );
  refalrts::reinit_svar( context[4], context[10] );
  refalrts::reinit_name(context[25], functions[efunc_DropLeft]);
  refalrts::reinit_svar( context[1], context[24] );
  refalrts::link_brackets( context[19], context[28] );
  refalrts::push_stack( vm, context[27] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[23] );
  refalrts::link_brackets( context[8], context[18] );
  refalrts::link_brackets( context[13], context[14] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[27], context[28] );
  res = refalrts::splice_evar( res, context[25], context[1] );
  res = refalrts::splice_evar( res, context[0], context[0] );
  res = refalrts::splice_evar( res, context[26], context[26] );
  res = refalrts::splice_evar( res, context[23], context[23] );
  res = refalrts::splice_evar( res, context[20], context[21] );
  res = refalrts::splice_evar( res, context[4], context[7] );
  res = refalrts::splice_evar( res, context[8], context[22] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_FindOptInfom_Aux_A1("FindOptInfo-Aux=1", 858440880U, 3942715697U, func_gen_FindOptInfom_Aux_A1);


static refalrts::FnResult func_FindOptInfom_Aux(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 34 elems
  refalrts::Iter context[34];
  refalrts::zeros( context, 34 );
  // </0 & FindOptInfo-Aux/4 e.OptFuncs-B#1/14 (/20 s.Mode#1/22 s.ScopeClass#1/23 (/26 e.LookupName#1/28 )/27 s.Body#1/30 )/21 e.OptFuncs-E#1/16 (/12 e.Name#1/10 )/13 (/8 e.LookupName#1/6 )/9 s.Drop#1/5 >/1
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
    if( ! refalrts::svar_left( context[30], context[18], context[19] ) )
      continue;
    if( ! refalrts::empty_seq( context[18], context[19] ) )
      continue;
    //DEBUG: s.Drop#1: 5
    //DEBUG: e.Name#1: 10
    //DEBUG: e.LookupName#1: 6
    //DEBUG: e.OptFuncs-B#1: 14
    //DEBUG: e.OptFuncs-E#1: 16
    //DEBUG: s.Mode#1: 22
    //DEBUG: s.ScopeClass#1: 23
    //DEBUG: s.Body#1: 30

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.LookupName#1/6 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </13 } Tile{ HalfReuse: & FindOptInfo-Aux=1/0 HalfReuse: (/4 AsIs: e.OptFuncs-B#1/14 HalfReuse: )/20 AsIs: s.Mode#1/22 AsIs: s.ScopeClass#1/23 AsIs: (/26 AsIs: e.LookupName#1/28 AsIs: )/27 AsIs: s.Body#1/30 HalfReuse: (/21 AsIs: e.OptFuncs-E#1/16 HalfReuse: )/12 } Tile{ AsIs: (/8 } Tile{ AsIs: e.Name#1/10 } Tile{ AsIs: )/9 AsIs: s.Drop#1/5 HalfReuse: </1 } s.Body#1/30/31 >/32 >/33 Tile{ ]] }
    refalrts::copy_stvar(vm, context[31], context[30]);
    refalrts::alloc_close_call(vm, context[32]);
    refalrts::alloc_close_call(vm, context[33]);
    refalrts::reinit_open_call(context[13]);
    refalrts::reinit_name(context[0], functions[efunc_gen_FindOptInfom_Aux_A1]);
    refalrts::reinit_open_bracket(context[4]);
    refalrts::reinit_close_bracket(context[20]);
    refalrts::reinit_open_bracket(context[21]);
    refalrts::reinit_close_bracket(context[12]);
    refalrts::reinit_open_call(context[1]);
    refalrts::push_stack( vm, context[33] );
    refalrts::push_stack( vm, context[13] );
    refalrts::push_stack( vm, context[32] );
    refalrts::push_stack( vm, context[1] );
    refalrts::link_brackets( context[8], context[9] );
    refalrts::link_brackets( context[21], context[12] );
    refalrts::link_brackets( context[26], context[27] );
    refalrts::link_brackets( context[4], context[20] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[31], context[33] );
    res = refalrts::splice_evar( res, context[9], context[1] );
    res = refalrts::splice_evar( res, context[10], context[11] );
    res = refalrts::splice_evar( res, context[8], context[8] );
    res = refalrts::splice_evar( res, context[0], context[12] );
    res = refalrts::splice_evar( res, context[13], context[13] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( refalrts::open_evar_advance( context[14], context[15], context[2], context[3] ) );
  return refalrts::cRecognitionImpossible;
}

static refalrts::NativeReference nat_ref_FindOptInfom_Aux("FindOptInfo-Aux", 858440880U, 3942715697U, func_FindOptInfom_Aux);


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

static refalrts::NativeReference nat_ref_CutSUF("CutSUF", 858440880U, 3942715697U, func_CutSUF);


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
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & MapAccum@2/4 AsIs: (/7 AsIs: e.OptFuncNames#1/5 HalfReuse: # None/8 } )/9 Tile{ AsIs: e.Expr#1/2 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_close_bracket(vm, context[9]);
  refalrts::update_name(context[4], functions[efunc_gen_MapAccum_Z2]);
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

static refalrts::NativeReference nat_ref_FindOptimizedCall("FindOptimizedCall", 858440880U, 3942715697U, func_FindOptimizedCall);


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

static refalrts::NativeReference nat_ref_gen_FindOptimizedCallm_Term_S1A1("FindOptimizedCall-Term$1=1", 858440880U, 3942715697U, func_gen_FindOptimizedCallm_Term_S1A1);


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

static refalrts::NativeReference nat_ref_gen_FindOptimizedCallm_Term_S2A1("FindOptimizedCall-Term$2=1", 858440880U, 3942715697U, func_gen_FindOptimizedCallm_Term_S2A1);


static refalrts::FnResult func_gen_FindOptimizedCallm_Term_S3B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 28 elems
  refalrts::Iter context[28];
  refalrts::zeros( context, 28 );
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
    // </0 & FindOptimizedCall-Term$3:1/4 (/7 e.Name#1/15 )/8 (/11 e.OptFuncNames#3/17 # None/13 )/12 e.Expr#3/19 >/1
    context[15] = context[5];
    context[16] = context[6];
    context[17] = context[9];
    context[18] = context[10];
    context[19] = context[2];
    context[20] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_None], context[13] ) )
      continue;
    // closed e.Name#1 as range 15
    // closed e.OptFuncNames#3 as range 17
    // closed e.Expr#3 as range 19
    //DEBUG: e.Name#1: 15
    //DEBUG: e.OptFuncNames#3: 17
    //DEBUG: e.Expr#3: 19

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/11 AsIs: e.OptFuncNames#3/17 HalfReuse: (/13 HalfReuse: # CallBrackets/12 } Tile{ HalfReuse: (/0 HalfReuse: # Symbol/4 HalfReuse: # Name/7 AsIs: e.Name#1/15 AsIs: )/8 } Tile{ AsIs: e.Expr#3/19 } )/21 )/22 (/23 # TkVariable/24 'e'/25 # DRIVEN/26 0/27 Tile{ HalfReuse: )/1 ]] }
    refalrts::alloc_close_bracket(vm, context[21]);
    refalrts::alloc_close_bracket(vm, context[22]);
    refalrts::alloc_open_bracket(vm, context[23]);
    refalrts::alloc_ident(vm, context[24], identifiers[ident_TkVariable]);
    refalrts::alloc_char(vm, context[25], 'e');
    refalrts::alloc_ident(vm, context[26], identifiers[ident_DRIVEN]);
    refalrts::alloc_number(vm, context[27], 0UL);
    refalrts::reinit_open_bracket(context[13]);
    refalrts::reinit_ident(context[12], identifiers[ident_CallBrackets]);
    refalrts::reinit_open_bracket(context[0]);
    refalrts::reinit_ident(context[4], identifiers[ident_Symbol]);
    refalrts::reinit_ident(context[7], identifiers[ident_Name]);
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[23], context[1] );
    refalrts::link_brackets( context[11], context[22] );
    refalrts::link_brackets( context[13], context[21] );
    refalrts::link_brackets( context[0], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[21], context[27] );
    res = refalrts::splice_evar( res, context[19], context[20] );
    res = refalrts::splice_evar( res, context[0], context[8] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & FindOptimizedCall-Term$3:1/4 (/7 e.Name#1/5 )/8 (/11 e.OptFuncNames#3/9 t.Found#3/13 )/12 e.Expr#3/2 >/1
  // closed e.Name#1 as range 5
  // closed e.OptFuncNames#3 as range 9
  // closed e.Expr#3 as range 2
  //DEBUG: t.Found#3: 13
  //DEBUG: e.Name#1: 5
  //DEBUG: e.OptFuncNames#3: 9
  //DEBUG: e.Expr#3: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/11 AsIs: e.OptFuncNames#3/9 AsIs: t.Found#3/13 AsIs: )/12 } (/15 # CallBrackets/16 Tile{ HalfReuse: (/0 HalfReuse: # Symbol/4 HalfReuse: # Name/7 AsIs: e.Name#1/5 AsIs: )/8 } Tile{ AsIs: e.Expr#3/2 } Tile{ HalfReuse: )/1 ]] }
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

static refalrts::NativeReference nat_ref_gen_FindOptimizedCallm_Term_S3B1("FindOptimizedCall-Term$3:1", 858440880U, 3942715697U, func_gen_FindOptimizedCallm_Term_S3B1);


static refalrts::FnResult func_gen_FindOptimizedCallm_Term_S3A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
  // </0 & FindOptimizedCall-Term$3=1/4 (/7 e.Name#1/5 )/8 (/11 e.Expr#1/9 )/12 e.OptFuncNames#2/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
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
  // closed e.Expr#1 as range 9
  // closed e.OptFuncNames#2 as range 2
  //DEBUG: e.Name#1: 5
  //DEBUG: e.Expr#1: 9
  //DEBUG: e.OptFuncNames#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & FindOptimizedCall-Term$3:1/4 AsIs: (/7 AsIs: e.Name#1/5 AsIs: )/8 HalfReuse: </11 } & FindOptimizedCall/13 (/14 Tile{ AsIs: e.OptFuncNames#2/2 } Tile{ AsIs: )/12 } Tile{ AsIs: e.Expr#1/9 } >/15 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_name(vm, context[13], functions[efunc_FindOptimizedCall]);
  refalrts::alloc_open_bracket(vm, context[14]);
  refalrts::alloc_close_call(vm, context[15]);
  refalrts::update_name(context[4], functions[efunc_gen_FindOptimizedCallm_Term_S3B1]);
  refalrts::reinit_open_call(context[11]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[15] );
  refalrts::push_stack( vm, context[11] );
  refalrts::link_brackets( context[14], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[15], context[15] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[12], context[12] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_FindOptimizedCallm_Term_S3A1("FindOptimizedCall-Term$3=1", 858440880U, 3942715697U, func_gen_FindOptimizedCallm_Term_S3A1);


static refalrts::FnResult func_gen_FindOptimizedCallm_Term_S4A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
  // </0 & FindOptimizedCall-Term$4=1/4 t.F#1/5 (/9 e.OptFuncNames#2/7 t.Found#2/11 )/10 e.Expr#2/2 >/1
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
  // closed e.Expr#2 as range 2
  context[12] = refalrts::tvar_right( context[11], context[7], context[8] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  // closed e.OptFuncNames#2 as range 7
  //DEBUG: t.F#1: 5
  //DEBUG: e.Expr#2: 2
  //DEBUG: t.Found#2: 11
  //DEBUG: e.OptFuncNames#2: 7

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/9 AsIs: e.OptFuncNames#2/7 AsIs: t.Found#2/11 AsIs: )/10 } Tile{ HalfReuse: (/0 HalfReuse: # CallBrackets/4 AsIs: t.F#1/5 } Tile{ AsIs: e.Expr#2/2 } Tile{ HalfReuse: )/1 ]] }
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_ident(context[4], identifiers[ident_CallBrackets]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[0], context[1] );
  refalrts::link_brackets( context[9], context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[0], context[6] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_FindOptimizedCallm_Term_S4A1("FindOptimizedCall-Term$4=1", 858440880U, 3942715697U, func_gen_FindOptimizedCallm_Term_S4A1);


static refalrts::FnResult func_FindOptimizedCallm_Term(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 48 elems
  refalrts::Iter context[48];
  refalrts::zeros( context, 48 );
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

    // </0 & FindOptimizedCall-Term/4 (/7 e.new#10/18 # None/11 )/8 (/9 s.new#7/17 t.new#8/22 e.new#9/20 )/10 >/1
    context[18] = context[13];
    context[19] = context[14];
    context[20] = context[15];
    context[21] = context[16];
    // closed e.new#10 as range 18
    context[23] = refalrts::tvar_left( context[22], context[20], context[21] );
    if( ! context[23] )
      continue;
    // closed e.new#9 as range 20
    do {
      // </0 & FindOptimizedCall-Term/4 (/7 e.new#14/24 # None/11 )/8 (/9 s.new#11/17 (/22 e.new#12/28 )/23 e.new#13/26 )/10 >/1
      context[24] = context[18];
      context[25] = context[19];
      context[26] = context[20];
      context[27] = context[21];
      context[28] = 0;
      context[29] = 0;
      if( ! refalrts::brackets_term( context[28], context[29], context[22] ) )
        continue;
      // closed e.new#14 as range 24
      // closed e.new#12 as range 28
      // closed e.new#13 as range 26
      do {
        // </0 & FindOptimizedCall-Term/4 (/7 e.OptFuncNames#1/30 # None/11 )/8 (/9 # ADT-Brackets/17 (/22 e.Name#1/32 )/23 e.Expr#1/34 )/10 >/1
        context[30] = context[24];
        context[31] = context[25];
        context[32] = context[28];
        context[33] = context[29];
        context[34] = context[26];
        context[35] = context[27];
        if( ! refalrts::ident_term( identifiers[ident_ADTm_Brackets], context[17] ) )
          continue;
        // closed e.OptFuncNames#1 as range 30
        // closed e.Name#1 as range 32
        // closed e.Expr#1 as range 34
        //DEBUG: e.OptFuncNames#1: 30
        //DEBUG: e.Name#1: 32
        //DEBUG: e.Expr#1: 34

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} # None/11 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & FindOptimizedCall-Term$2=1/4 AsIs: (/7 } Tile{ AsIs: e.Name#1/32 } Tile{ AsIs: )/8 HalfReuse: </9 HalfReuse: & FindOptimizedCall/17 AsIs: (/22 } Tile{ AsIs: e.OptFuncNames#1/30 } Tile{ AsIs: )/23 AsIs: e.Expr#1/34 HalfReuse: >/10 AsIs: >/1 ]] }
        refalrts::update_name(context[4], functions[efunc_gen_FindOptimizedCallm_Term_S2A1]);
        refalrts::reinit_open_call(context[9]);
        refalrts::reinit_name(context[17], functions[efunc_FindOptimizedCall]);
        refalrts::reinit_close_call(context[10]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::push_stack( vm, context[10] );
        refalrts::push_stack( vm, context[9] );
        refalrts::link_brackets( context[22], context[23] );
        refalrts::link_brackets( context[7], context[8] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[23];
        res = refalrts::splice_evar( res, context[30], context[31] );
        res = refalrts::splice_evar( res, context[8], context[22] );
        res = refalrts::splice_evar( res, context[32], context[33] );
        refalrts::splice_to_freelist_open( vm, context[7], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & FindOptimizedCall-Term/4 (/7 e.OptFuncNames-B#1/38 (/44 e.Name#1/46 )/45 e.OptFuncNames-E#1/40 # None/11 )/8 (/9 # CallBrackets/17 (/22 # Symbol/36 # Name/37 e.Name#1/32 )/23 e.Expr#1/34 )/10 >/1
      context[30] = context[24];
      context[31] = context[25];
      context[32] = context[28];
      context[33] = context[29];
      context[34] = context[26];
      context[35] = context[27];
      if( ! refalrts::ident_term( identifiers[ident_CallBrackets], context[17] ) )
        continue;
      context[36] = refalrts::ident_left( identifiers[ident_Symbol], context[32], context[33] );
      if( ! context[36] )
        continue;
      context[37] = refalrts::ident_left( identifiers[ident_Name], context[32], context[33] );
      if( ! context[37] )
        continue;
      // closed e.Name#1 as range 32
      // closed e.Expr#1 as range 34
      context[38] = 0;
      context[39] = 0;
      refalrts::start_e_loop(vm);
      do {
        context[40] = context[30];
        context[41] = context[31];
        context[42] = 0;
        context[43] = 0;
        context[44] = refalrts::brackets_left( context[42], context[43], context[40], context[41] );
        if( ! context[44] )
          continue;
        refalrts::bracket_pointers(context[44], context[45]);
        if( ! refalrts::repeated_evar_left( vm, context[46], context[47], context[32], context[33], context[42], context[43] ) )
          continue;
        if( ! refalrts::empty_seq( context[42], context[43] ) )
          continue;
        // closed e.OptFuncNames-E#1 as range 40
        //DEBUG: e.Name#1: 32
        //DEBUG: e.Expr#1: 34
        //DEBUG: e.OptFuncNames-B#1: 38
        //DEBUG: e.OptFuncNames-E#1: 40

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} )/8 (/9 # CallBrackets/17 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: </22 HalfReuse: & FindOptimizedCall-Term$3:1/36 HalfReuse: (/37 AsIs: e.Name#1/32 AsIs: )/23 } Tile{ AsIs: </0 Reuse: & FindOptimizedCall/4 AsIs: (/7 AsIs: e.OptFuncNames-B#1/38 AsIs: (/44 AsIs: e.Name#1/46 AsIs: )/45 AsIs: e.OptFuncNames-E#1/40 HalfReuse: )/11 } Tile{ AsIs: e.Expr#1/34 } Tile{ HalfReuse: >/10 AsIs: >/1 ]] }
        refalrts::reinit_open_call(context[22]);
        refalrts::reinit_name(context[36], functions[efunc_gen_FindOptimizedCallm_Term_S3B1]);
        refalrts::reinit_open_bracket(context[37]);
        refalrts::update_name(context[4], functions[efunc_FindOptimizedCall]);
        refalrts::reinit_close_bracket(context[11]);
        refalrts::reinit_close_call(context[10]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[22] );
        refalrts::push_stack( vm, context[10] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[7], context[11] );
        refalrts::link_brackets( context[44], context[45] );
        refalrts::link_brackets( context[37], context[23] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[10];
        res = refalrts::splice_evar( res, context[34], context[35] );
        res = refalrts::splice_evar( res, context[0], context[11] );
        res = refalrts::splice_evar( res, context[22], context[23] );
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[38], context[39], context[30], context[31] ) );
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & FindOptimizedCall-Term/4 (/7 e.OptFuncNames#1/24 # None/11 )/8 (/9 # CallBrackets/17 t.F#1/22 e.Expr#1/26 )/10 >/1
    context[24] = context[18];
    context[25] = context[19];
    context[26] = context[20];
    context[27] = context[21];
    if( ! refalrts::ident_term( identifiers[ident_CallBrackets], context[17] ) )
      continue;
    // closed e.OptFuncNames#1 as range 24
    // closed e.Expr#1 as range 26
    //DEBUG: t.F#1: 22
    //DEBUG: e.OptFuncNames#1: 24
    //DEBUG: e.Expr#1: 26

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} )/8 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </9 HalfReuse: & FindOptimizedCall-Term$4=1/17 AsIs: t.F#1/22 } Tile{ AsIs: </0 Reuse: & FindOptimizedCall/4 AsIs: (/7 AsIs: e.OptFuncNames#1/24 HalfReuse: )/11 } Tile{ AsIs: e.Expr#1/26 } Tile{ HalfReuse: >/10 AsIs: >/1 ]] }
    refalrts::reinit_open_call(context[9]);
    refalrts::reinit_name(context[17], functions[efunc_gen_FindOptimizedCallm_Term_S4A1]);
    refalrts::update_name(context[4], functions[efunc_FindOptimizedCall]);
    refalrts::reinit_close_bracket(context[11]);
    refalrts::reinit_close_call(context[10]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[9] );
    refalrts::push_stack( vm, context[10] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[11] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[10];
    res = refalrts::splice_evar( res, context[26], context[27] );
    res = refalrts::splice_evar( res, context[0], context[11] );
    res = refalrts::splice_evar( res, context[9], context[23] );
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

static refalrts::NativeReference nat_ref_FindOptimizedCallm_Term("FindOptimizedCall-Term", 858440880U, 3942715697U, func_FindOptimizedCallm_Term);


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

static refalrts::NativeReference nat_ref_gen_ApplySolutions_L1("ApplySolutions\\1", 858440880U, 3942715697U, func_gen_ApplySolutions_L1);


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
  //TRASH: {REMOVED TILE} (/7 {REMOVED TILE} {REMOVED TILE} )/12 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map@2/4 } Tile{ AsIs: e.Left#1/9 } Tile{ AsIs: (/15 } Tile{ AsIs: e.Right#1/13 } Tile{ AsIs: )/8 AsIs: (/19 AsIs: e.RS#1/17 AsIs: )/20 } Tile{ AsIs: (/11 } Tile{ AsIs: e.Solutions#1/2 } Tile{ AsIs: )/16 } Tile{ AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_gen_Map_Z2]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[11], context[16] );
  refalrts::link_brackets( context[19], context[20] );
  refalrts::link_brackets( context[15], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[16], context[16] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  res = refalrts::splice_evar( res, context[8], context[20] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[15], context[15] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::splice_to_freelist_open( vm, context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ApplySolutions("ApplySolutions", 858440880U, 3942715697U, func_ApplySolutions);


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

static refalrts::NativeReference nat_ref_gen_ApplySolution_A2("ApplySolution=2", 858440880U, 3942715697U, func_gen_ApplySolution_A2);


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

static refalrts::NativeReference nat_ref_gen_ApplySolution_A1("ApplySolution=1", 858440880U, 3942715697U, func_gen_ApplySolution_A1);


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

static refalrts::NativeReference nat_ref_ApplySolution("ApplySolution", 858440880U, 3942715697U, func_ApplySolution);


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

static refalrts::NativeReference nat_ref_gen_ApplyAssigns_L1("ApplyAssigns\\1", 858440880U, 3942715697U, func_gen_ApplyAssigns_L1);


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
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map@3/4 } Tile{ AsIs: e.Assigns#1/5 } Tile{ AsIs: (/7 } Tile{ AsIs: e.Expr#1/2 } Tile{ AsIs: )/8 AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_gen_Map_Z3]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ApplyAssigns("ApplyAssigns", 858440880U, 3942715697U, func_ApplyAssigns);


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

static refalrts::NativeReference nat_ref_ApplyAssignsm_Term("ApplyAssigns-Term", 858440880U, 3942715697U, func_ApplyAssignsm_Term);


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

static refalrts::NativeReference nat_ref_gen_ApplyContractions_L1("ApplyContractions\\1", 858440880U, 3942715697U, func_gen_ApplyContractions_L1);


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
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map@4/4 } Tile{ AsIs: e.Contrs#1/5 } Tile{ AsIs: (/7 } Tile{ AsIs: e.Expr#1/2 } Tile{ AsIs: )/8 AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_gen_Map_Z4]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ApplyContractions("ApplyContractions", 858440880U, 3942715697U, func_ApplyContractions);


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

static refalrts::NativeReference nat_ref_gen_ApplyContractionsm_Term_S3B1("ApplyContractions-Term$3:1", 858440880U, 3942715697U, func_gen_ApplyContractionsm_Term_S3B1);


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

static refalrts::NativeReference nat_ref_ApplyContractionsm_Term("ApplyContractions-Term", 858440880U, 3942715697U, func_ApplyContractionsm_Term);


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

static refalrts::NativeReference nat_ref_RemainderFuncIncName("RemainderFuncIncName", 858440880U, 3942715697U, func_RemainderFuncIncName);


static refalrts::FnResult func_gen_Reduce_Z1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
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
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & Reduce@1/4 HalfReuse: </5 } & IsPassiveCall-Aux/15 Tile{ AsIs: t.Next#1/9 } >/16 Tile{ AsIs: e.Tail#1/13 } Tile{ AsIs: >/1 ]] }
        refalrts::alloc_name(vm, context[15], functions[efunc_IsPassiveCallm_Aux]);
        refalrts::alloc_close_call(vm, context[16]);
        refalrts::reinit_open_call(context[5]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::push_stack( vm, context[16] );
        refalrts::push_stack( vm, context[5] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[13], context[14] );
        res = refalrts::splice_evar( res, context[16], context[16] );
        res = refalrts::splice_evar( res, context[9], context[10] );
        res = refalrts::splice_evar( res, context[15], context[15] );
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
    //RESULT: Tile{ [[ } </13 & Reduce@1/14 Tile{ AsIs: </0 Reuse: & IsPassiveCall\1*2/4 AsIs: t.Acc#1/5 AsIs: t.Next#1/9 } >/15 Tile{ AsIs: e.Tail#1/11 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[13]);
    refalrts::alloc_name(vm, context[14], functions[efunc_gen_Reduce_Z1]);
    refalrts::alloc_close_call(vm, context[15]);
    refalrts::update_name(context[4], functions[efunc_gen_IsPassiveCall_L1D2]);
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

static refalrts::NativeReference nat_ref_gen_Reduce_Z1("Reduce@1", 858440880U, 3942715697U, func_gen_Reduce_Z1);


static refalrts::FnResult func_gen_Map_Z1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 23 elems
  refalrts::Iter context[23];
  refalrts::zeros( context, 23 );
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
      // </0 & Map@1/4 (/7 s.new#3/13 e.new#4/11 )/8 e.new#5/9 >/1
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
        // </0 & Map@1/4 (/7 # TkVariable/13 s.new#6/18 e.new#7/14 )/8 e.new#8/16 >/1
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
          // </0 & Map@1/4 (/7 # TkVariable/13 'e'/18 e.1#0/19 )/8 e.Tail#1/21 >/1
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
          //RESULT: Tile{ [[ } Tile{ HalfReuse: (/13 AsIs: 'e'/18 AsIs: e.1#0/19 AsIs: )/8 } Tile{ AsIs: </0 AsIs: & Map@1/4 } Tile{ AsIs: e.Tail#1/21 } Tile{ AsIs: >/1 ]] }
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

        // </0 & Map@1/4 (/7 # TkVariable/13 't'/18 e.1#0/19 )/8 e.Tail#1/21 >/1
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
        //RESULT: Tile{ [[ } Tile{ HalfReuse: (/13 AsIs: 't'/18 AsIs: e.1#0/19 AsIs: )/8 } Tile{ AsIs: </0 AsIs: & Map@1/4 } Tile{ AsIs: e.Tail#1/21 } Tile{ AsIs: >/1 ]] }
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
        // </0 & Map@1/4 (/7 # Brackets/13 e.0#0/14 )/8 e.Tail#1/16 >/1
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
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & IsLexpr-Aux/4 } Tile{ AsIs: e.0#0/14 } Tile{ HalfReuse: >/7 HalfReuse: </13 } Tile{ HalfReuse: & Map@1/8 AsIs: e.Tail#1/16 AsIs: >/1 ]] }
        refalrts::update_name(context[4], functions[efunc_IsLexprm_Aux]);
        refalrts::reinit_close_call(context[7]);
        refalrts::reinit_open_call(context[13]);
        refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z1]);
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

      // </0 & Map@1/4 (/7 # ADT-Brackets/13 (/20 e.2#0/18 )/21 e.1#0/14 )/8 e.Tail#1/16 >/1
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
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & IsLexpr-Aux/4 } Tile{ AsIs: e.1#0/14 } Tile{ HalfReuse: >/13 HalfReuse: </20 } Tile{ HalfReuse: & Map@1/8 AsIs: e.Tail#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_IsLexprm_Aux]);
      refalrts::reinit_close_call(context[13]);
      refalrts::reinit_open_call(context[20]);
      refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z1]);
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

    // </0 & Map@1/4 t.Next#1/7 e.Tail#1/9 >/1
    context[9] = context[5];
    context[10] = context[6];
    // closed e.Tail#1 as range 9
    //DEBUG: t.Next#1: 7
    //DEBUG: e.Tail#1: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} t.Next#1/7 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Map@1/4 } Tile{ AsIs: e.Tail#1/9 } Tile{ AsIs: >/1 ]] }
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

static refalrts::NativeReference nat_ref_gen_Map_Z1("Map@1", 858440880U, 3942715697U, func_gen_Map_Z1);


static refalrts::FnResult func_gen_MapAccum_Z1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & MapAccum@1/4 e.Left#1/2 (/13 e.Right#1/11 )/14 t.Acc#1/9 (/7 e.Tail#1/5 )/8 >/1
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
  // closed e.Tail#1 as range 5
  context[10] = refalrts::tvar_right( context[9], context[2], context[3] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  context[11] = 0;
  context[12] = 0;
  context[13] = refalrts::brackets_right( context[11], context[12], context[2], context[3] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[13], context[14]);
  // closed e.Left#1 as range 2
  // closed e.Right#1 as range 11
  //DEBUG: e.Tail#1: 5
  //DEBUG: t.Acc#1: 9
  //DEBUG: e.Left#1: 2
  //DEBUG: e.Right#1: 11

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum@1/4 AsIs: e.Left#1/2 AsIs: (/13 AsIs: e.Right#1/11 AsIs: )/14 AsIs: t.Acc#1/9 AsIs: (/7 AsIs: e.Tail#1/5 AsIs: )/8 HalfReuse: (/1 } )/15 >/16 Tile{ ]] }
  refalrts::alloc_close_bracket(vm, context[15]);
  refalrts::alloc_close_call(vm, context[16]);
  refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_Z1]);
  refalrts::reinit_open_bracket(context[1]);
  refalrts::push_stack( vm, context[16] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[1], context[15] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[13], context[14] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[15], context[16] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_MapAccum_Z1("MapAccum@1", 858440880U, 3942715697U, func_gen_MapAccum_Z1);


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

static refalrts::NativeReference nat_ref_gen_MapAccum_Z2("MapAccum@2", 858440880U, 3942715697U, func_gen_MapAccum_Z2);


static refalrts::FnResult func_gen_Map_Z2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 44 elems
  refalrts::Iter context[44];
  refalrts::zeros( context, 44 );
  // </0 & Map@2/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Map@2/4 e.new#1/2 (/15 e.new#2/13 )/16 (/11 e.new#3/9 )/12 (/7 e.new#4/5 )/8 >/1
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
    // </0 & Map@2/4 e.Left#1/17 (/15 e.Right#1/19 )/16 (/11 e.RS#1/21 )/12 (/7 t.Next#1/25 e.Tail#1/23 )/8 >/1
    context[17] = context[2];
    context[18] = context[3];
    context[19] = context[13];
    context[20] = context[14];
    context[21] = context[9];
    context[22] = context[10];
    context[23] = context[5];
    context[24] = context[6];
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
    //RESULT: Tile{ [[ } </27 & ApplySolution/28 (/29 (/30 e.Left#1/17/31 )/33 (/34 e.Right#1/19/35 )/37 )/38 (/39 e.RS#1/21/40 )/42 Tile{ AsIs: t.Next#1/25 } >/43 Tile{ AsIs: </0 AsIs: & Map@2/4 AsIs: e.Left#1/17 AsIs: (/15 AsIs: e.Right#1/19 AsIs: )/16 AsIs: (/11 AsIs: e.RS#1/21 AsIs: )/12 AsIs: (/7 } Tile{ AsIs: e.Tail#1/23 } Tile{ AsIs: )/8 AsIs: >/1 ]] }
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
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[15], context[16] );
    refalrts::push_stack( vm, context[43] );
    refalrts::push_stack( vm, context[27] );
    refalrts::link_brackets( context[39], context[42] );
    refalrts::link_brackets( context[29], context[38] );
    refalrts::link_brackets( context[34], context[37] );
    refalrts::link_brackets( context[30], context[33] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[23], context[24] );
    res = refalrts::splice_evar( res, context[0], context[7] );
    res = refalrts::splice_evar( res, context[43], context[43] );
    res = refalrts::splice_evar( res, context[25], context[26] );
    res = refalrts::splice_evar( res, context[27], context[42] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Map@2/4 e.Left#1/2 (/15 e.Right#1/13 )/16 (/11 e.RS#1/9 )/12 (/7 )/8 >/1
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Left#1 as range 2
  // closed e.Right#1 as range 13
  // closed e.RS#1 as range 9
  //DEBUG: e.Left#1: 2
  //DEBUG: e.Right#1: 13
  //DEBUG: e.RS#1: 9

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Map@2/4 e.Left#1/2 (/15 e.Right#1/13 )/16 (/11 e.RS#1/9 )/12 (/7 )/8 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Map_Z2("Map@2", 858440880U, 3942715697U, func_gen_Map_Z2);


static refalrts::FnResult func_gen_Map_Z3(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
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
    // </0 & Map@3/4 e.Assigns#1/9 (/7 t.Next#1/13 e.Tail#1/11 )/8 >/1
    context[9] = context[2];
    context[10] = context[3];
    context[11] = context[5];
    context[12] = context[6];
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
    //RESULT: Tile{ [[ } </15 & ApplyAssigns-Term/16 Tile{ AsIs: t.Next#1/13 } (/17 e.Assigns#1/9/18 )/20 >/21 Tile{ AsIs: </0 AsIs: & Map@3/4 AsIs: e.Assigns#1/9 AsIs: (/7 } Tile{ AsIs: e.Tail#1/11 } Tile{ AsIs: )/8 AsIs: >/1 ]] }
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
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[0], context[7] );
    res = refalrts::splice_evar( res, context[17], context[21] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Map@3/4 e.Assigns#1/2 (/7 )/8 >/1
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Assigns#1 as range 2
  //DEBUG: e.Assigns#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Map@3/4 e.Assigns#1/2 (/7 )/8 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Map_Z3("Map@3", 858440880U, 3942715697U, func_gen_Map_Z3);


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
  // </0 & Map@4/4 e.new#1/2 (/7 e.new#2/5 )/8 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 2
  // closed e.new#2 as range 5
  do {
    // </0 & Map@4/4 e.Contrs#1/9 (/7 t.Next#1/13 e.Tail#1/11 )/8 >/1
    context[9] = context[2];
    context[10] = context[3];
    context[11] = context[5];
    context[12] = context[6];
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
    //RESULT: Tile{ [[ } </15 & ApplyContractions-Term/16 Tile{ AsIs: t.Next#1/13 } (/17 e.Contrs#1/9/18 )/20 >/21 Tile{ AsIs: </0 AsIs: & Map@4/4 AsIs: e.Contrs#1/9 AsIs: (/7 } Tile{ AsIs: e.Tail#1/11 } Tile{ AsIs: )/8 AsIs: >/1 ]] }
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
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[0], context[7] );
    res = refalrts::splice_evar( res, context[17], context[21] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Map@4/4 e.Contrs#1/2 (/7 )/8 >/1
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Contrs#1 as range 2
  //DEBUG: e.Contrs#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Map@4/4 e.Contrs#1/2 (/7 )/8 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Map_Z4("Map@4", 858440880U, 3942715697U, func_gen_Map_Z4);


static refalrts::FnResult func_gen_DoMapAccum_Z1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 60 elems
  refalrts::Iter context[60];
  refalrts::zeros( context, 60 );
  // </0 & DoMapAccum@1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DoMapAccum@1/4 e.new#1/2 (/17 e.new#2/15 )/18 t.new#3/13 (/11 e.new#4/9 )/12 (/7 e.new#5/5 )/8 >/1
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
    // </0 & DoMapAccum@1/4 e.new#7/19 (/17 e.new#11/21 )/18 t.new#6/13 (/11 t.new#9/27 e.new#10/23 )/12 (/7 e.new#8/25 )/8 >/1
    context[19] = context[2];
    context[20] = context[3];
    context[21] = context[15];
    context[22] = context[16];
    context[23] = context[9];
    context[24] = context[10];
    context[25] = context[5];
    context[26] = context[6];
    // closed e.new#7 as range 19
    // closed e.new#11 as range 21
    // closed e.new#8 as range 25
    context[28] = refalrts::tvar_left( context[27], context[23], context[24] );
    if( ! context[28] )
      continue;
    // closed e.new#10 as range 23
    do {
      // </0 & DoMapAccum@1/4 e.Left#1/29 (/17 e.Right#1/31 )/18 (/13 e.#0/37 )/14 (/11 (/27 (/43 e.2#0/41 )/44 e.3#0/39 (/47 e.4#0/45 )/48 )/28 e.Tail#1/33 )/12 (/7 e.Scanned#1/35 )/8 >/1
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
      // closed e.2#0 as range 41
      // closed e.3#0 as range 39
      // closed e.4#0 as range 45
      // closed e.Tail#1 as range 33
      // closed e.Scanned#1 as range 35
      //DEBUG: e.Left#1: 29
      //DEBUG: e.Right#1: 31
      //DEBUG: e.#0: 37
      //DEBUG: e.2#0: 41
      //DEBUG: e.3#0: 39
      //DEBUG: e.4#0: 45
      //DEBUG: e.Tail#1: 33
      //DEBUG: e.Scanned#1: 35

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum-Aux@1/4 AsIs: e.Left#1/29 AsIs: (/17 AsIs: e.Right#1/31 AsIs: )/18 AsIs: (/13 } Tile{ AsIs: e.Tail#1/33 } Tile{ AsIs: )/12 AsIs: (/7 AsIs: e.Scanned#1/35 AsIs: )/8 HalfReuse: (/1 } (/49 Tile{ AsIs: e.#0/37 } Tile{ AsIs: e.4#0/45 } Tile{ AsIs: )/48 HalfReuse: </28 } & ApplySolutions/50 (/51 (/52 e.Left#1/29/53 Tile{ AsIs: )/14 } (/55 e.Right#1/31/56 Tile{ HalfReuse: )/11 HalfReuse: )/27 AsIs: (/43 AsIs: e.2#0/41 AsIs: )/44 AsIs: e.3#0/39 HalfReuse: >/47 } )/58 >/59 Tile{ ]] }
      refalrts::alloc_open_bracket(vm, context[49]);
      refalrts::alloc_name(vm, context[50], functions[efunc_ApplySolutions]);
      refalrts::alloc_open_bracket(vm, context[51]);
      refalrts::alloc_open_bracket(vm, context[52]);
      refalrts::copy_evar(vm, context[53], context[54], context[29], context[30]);
      refalrts::alloc_open_bracket(vm, context[55]);
      refalrts::copy_evar(vm, context[56], context[57], context[31], context[32]);
      refalrts::alloc_close_bracket(vm, context[58]);
      refalrts::alloc_close_call(vm, context[59]);
      refalrts::update_name(context[4], functions[efunc_gen_DoMapAccumm_Aux_Z1]);
      refalrts::reinit_open_bracket(context[1]);
      refalrts::reinit_open_call(context[28]);
      refalrts::reinit_close_bracket(context[11]);
      refalrts::reinit_close_bracket(context[27]);
      refalrts::reinit_close_call(context[47]);
      refalrts::push_stack( vm, context[59] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[1], context[58] );
      refalrts::push_stack( vm, context[47] );
      refalrts::push_stack( vm, context[28] );
      refalrts::link_brackets( context[43], context[44] );
      refalrts::link_brackets( context[51], context[27] );
      refalrts::link_brackets( context[55], context[11] );
      refalrts::link_brackets( context[52], context[14] );
      refalrts::link_brackets( context[49], context[48] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::link_brackets( context[13], context[12] );
      refalrts::link_brackets( context[17], context[18] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[58], context[59] );
      res = refalrts::splice_evar( res, context[11], context[47] );
      res = refalrts::splice_evar( res, context[56], context[57] );
      res = refalrts::splice_evar( res, context[55], context[55] );
      res = refalrts::splice_evar( res, context[14], context[14] );
      res = refalrts::splice_evar( res, context[53], context[54] );
      res = refalrts::splice_evar( res, context[50], context[52] );
      res = refalrts::splice_evar( res, context[48], context[28] );
      res = refalrts::splice_evar( res, context[45], context[46] );
      res = refalrts::splice_evar( res, context[37], context[38] );
      res = refalrts::splice_evar( res, context[49], context[49] );
      res = refalrts::splice_evar( res, context[12], context[1] );
      res = refalrts::splice_evar( res, context[33], context[34] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & DoMapAccum@1/4 e.Left#1/29 (/17 e.Right#1/31 )/18 t.Acc#1/13 (/11 t.Next#1/27 e.Tail#1/33 )/12 (/7 e.Scanned#1/35 )/8 >/1
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
    // closed e.Tail#1 as range 33
    // closed e.Scanned#1 as range 35
    //DEBUG: t.Acc#1: 13
    //DEBUG: t.Next#1: 27
    //DEBUG: e.Left#1: 29
    //DEBUG: e.Right#1: 31
    //DEBUG: e.Tail#1: 33
    //DEBUG: e.Scanned#1: 35

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum-Aux@1/4 AsIs: e.Left#1/29 AsIs: (/17 AsIs: e.Right#1/31 AsIs: )/18 } Tile{ AsIs: (/11 } Tile{ AsIs: e.Tail#1/33 } Tile{ AsIs: )/12 AsIs: (/7 AsIs: e.Scanned#1/35 AsIs: )/8 HalfReuse: (/1 } </37 & OptSentence-Aux\1*1/38 (/39 e.Left#1/29/40 )/42 (/43 e.Right#1/31/44 )/46 Tile{ AsIs: t.Acc#1/13 } Tile{ AsIs: t.Next#1/27 } >/47 )/48 >/49 Tile{ ]] }
    refalrts::alloc_open_call(vm, context[37]);
    refalrts::alloc_name(vm, context[38], functions[efunc_gen_OptSentencem_Aux_L1D1]);
    refalrts::alloc_open_bracket(vm, context[39]);
    refalrts::copy_evar(vm, context[40], context[41], context[29], context[30]);
    refalrts::alloc_close_bracket(vm, context[42]);
    refalrts::alloc_open_bracket(vm, context[43]);
    refalrts::copy_evar(vm, context[44], context[45], context[31], context[32]);
    refalrts::alloc_close_bracket(vm, context[46]);
    refalrts::alloc_close_call(vm, context[47]);
    refalrts::alloc_close_bracket(vm, context[48]);
    refalrts::alloc_close_call(vm, context[49]);
    refalrts::update_name(context[4], functions[efunc_gen_DoMapAccumm_Aux_Z1]);
    refalrts::reinit_open_bracket(context[1]);
    refalrts::push_stack( vm, context[49] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[1], context[48] );
    refalrts::push_stack( vm, context[47] );
    refalrts::push_stack( vm, context[37] );
    refalrts::link_brackets( context[43], context[46] );
    refalrts::link_brackets( context[39], context[42] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[17], context[18] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[47], context[49] );
    res = refalrts::splice_evar( res, context[27], context[28] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[37], context[46] );
    res = refalrts::splice_evar( res, context[12], context[1] );
    res = refalrts::splice_evar( res, context[33], context[34] );
    res = refalrts::splice_evar( res, context[11], context[11] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoMapAccum@1/4 e.Left#1/2 (/17 e.Right#1/15 )/18 t.Acc#1/13 (/11 )/12 (/7 e.Scanned#1/5 )/8 >/1
  if( ! refalrts::empty_seq( context[9], context[10] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Left#1 as range 2
  // closed e.Right#1 as range 15
  // closed e.Scanned#1 as range 5
  //DEBUG: t.Acc#1: 13
  //DEBUG: e.Left#1: 2
  //DEBUG: e.Right#1: 15
  //DEBUG: e.Scanned#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & DoMapAccum@1/4 e.Left#1/2 (/17 e.Right#1/15 )/18 {REMOVED TILE} (/11 )/12 (/7 {REMOVED TILE} )/8 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.Acc#1/13 } Tile{ AsIs: e.Scanned#1/5 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoMapAccum_Z1("DoMapAccum@1", 858440880U, 3942715697U, func_gen_DoMapAccum_Z1);


static refalrts::FnResult func_gen_DoMapAccum_Z2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
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
    // </0 & DoMapAccum@2/4 t.Acc#1/9 t.Next#1/15 e.Tail#1/11 (/7 e.Scanned#1/13 )/8 >/1
    context[11] = context[2];
    context[12] = context[3];
    context[13] = context[5];
    context[14] = context[6];
    // closed e.Scanned#1 as range 13
    context[16] = refalrts::tvar_left( context[15], context[11], context[12] );
    if( ! context[16] )
      continue;
    // closed e.Tail#1 as range 11
    //DEBUG: t.Acc#1: 9
    //DEBUG: e.Scanned#1: 13
    //DEBUG: t.Next#1: 15
    //DEBUG: e.Tail#1: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </17 & DoMapAccum-Aux@2/18 Tile{ AsIs: e.Tail#1/11 } Tile{ AsIs: (/7 AsIs: e.Scanned#1/13 AsIs: )/8 HalfReuse: (/1 } Tile{ AsIs: </0 Reuse: & FindOptimizedCall-Term/4 AsIs: t.Acc#1/9 AsIs: t.Next#1/15 } >/19 )/20 >/21 Tile{ ]] }
    refalrts::alloc_open_call(vm, context[17]);
    refalrts::alloc_name(vm, context[18], functions[efunc_gen_DoMapAccumm_Aux_Z2]);
    refalrts::alloc_close_call(vm, context[19]);
    refalrts::alloc_close_bracket(vm, context[20]);
    refalrts::alloc_close_call(vm, context[21]);
    refalrts::reinit_open_bracket(context[1]);
    refalrts::update_name(context[4], functions[efunc_FindOptimizedCallm_Term]);
    refalrts::push_stack( vm, context[21] );
    refalrts::push_stack( vm, context[17] );
    refalrts::link_brackets( context[1], context[20] );
    refalrts::push_stack( vm, context[19] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[19], context[21] );
    res = refalrts::splice_evar( res, context[0], context[16] );
    res = refalrts::splice_evar( res, context[7], context[1] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[17], context[18] );
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

static refalrts::NativeReference nat_ref_gen_DoMapAccum_Z2("DoMapAccum@2", 858440880U, 3942715697U, func_gen_DoMapAccum_Z2);


static refalrts::FnResult func_gen_DoMapAccumm_Aux_Z1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 23 elems
  refalrts::Iter context[23];
  refalrts::zeros( context, 23 );
  // </0 & DoMapAccum-Aux@1/4 e.Left#1/2 (/19 e.Right#1/17 )/20 (/15 e.Tail#1/13 )/16 (/11 e.Scanned#1/9 )/12 (/7 t.Acc#1/21 e.StepScanned#1/5 )/8 >/1
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
  // closed e.Left#1 as range 2
  // closed e.Right#1 as range 17
  // closed e.Tail#1 as range 13
  // closed e.Scanned#1 as range 9
  context[22] = refalrts::tvar_left( context[21], context[5], context[6] );
  if( ! context[22] )
    return refalrts::cRecognitionImpossible;
  // closed e.StepScanned#1 as range 5
  //DEBUG: e.Left#1: 2
  //DEBUG: e.Right#1: 17
  //DEBUG: e.Tail#1: 13
  //DEBUG: e.Scanned#1: 9
  //DEBUG: t.Acc#1: 21
  //DEBUG: e.StepScanned#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} )/12 (/7 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum@1/4 AsIs: e.Left#1/2 AsIs: (/19 AsIs: e.Right#1/17 AsIs: )/20 } Tile{ AsIs: t.Acc#1/21 } Tile{ AsIs: (/15 AsIs: e.Tail#1/13 AsIs: )/16 AsIs: (/11 } Tile{ AsIs: e.Scanned#1/9 } Tile{ AsIs: e.StepScanned#1/5 } Tile{ AsIs: )/8 AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_Z1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[11], context[8] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[19], context[20] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[15], context[11] );
  res = refalrts::splice_evar( res, context[21], context[22] );
  refalrts::splice_to_freelist_open( vm, context[20], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoMapAccumm_Aux_Z1("DoMapAccum-Aux@1", 858440880U, 3942715697U, func_gen_DoMapAccumm_Aux_Z1);


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

static refalrts::NativeReference nat_ref_gen_DoMapAccumm_Aux_Z2("DoMapAccum-Aux@2", 858440880U, 3942715697U, func_gen_DoMapAccumm_Aux_Z2);


//End of file
