// This file automatically generated from 'GenericMatch.ref'
// Don't edit! Edit 'GenericMatch.ref' and recompile it

#include "refalrts.h"

#define cookie_ns cookie_ns_2667426315_2390753526
#define COOKIE1_ 2667426315U
#define COOKIE2_ 2390753526U

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
  efunc_gen_Map_Z1 = 23,
  efunc_FormatAssigns = 24,
  efunc_gen_GenericMatch_B1 = 25,
  efunc_Solve = 26,
  efunc_ExtractVariables = 27,
  efunc_CombineResults = 28,
  efunc_Solvem_Aux = 29,
  efunc_gen_Solve_B1 = 30,
  efunc_gen_Solutionm_PostProcess_S1C1 = 31,
  efunc_AddContraction = 32,
  efunc_gen_Solutionm_PostProcess_S2C1 = 33,
  efunc_Solutionm_PostProcess = 34,
  efunc_gen_Solutionm_PostProcess_S3C1 = 35,
  efunc_gen_Solutionm_PostProcess_S4C1 = 36,
  efunc_gen_Solutionm_PostProcess_S5C1 = 37,
  efunc_gen_Solutionm_PostProcess_S6C1 = 38,
  efunc_gen_Solutionm_PostProcess_S7C1 = 39,
  efunc_gen_Solutionm_PostProcess_S8C1 = 40,
  efunc_gen_Solvem_Aux_S3A6 = 41,
  efunc_gen_Solvem_Aux_S3A5 = 42,
  efunc_NewVarName = 43,
  efunc_gen_Solvem_Aux_S3A4 = 44,
  efunc_gen_Solvem_Aux_S4A6 = 45,
  efunc_gen_Solvem_Aux_S4A5 = 46,
  efunc_gen_Solvem_Aux_S4A4 = 47,
  efunc_AddContractions = 48,
  efunc_gen_Solvem_Aux_S8B1S1A1 = 49,
  efunc_gen_Solvem_Aux_S8B1S1A1L1 = 50,
  efunc_gen_Solvem_Aux_S1C1 = 51,
  efunc_IsTerm = 52,
  efunc_gen_Solvem_Aux_S1C2 = 53,
  efunc_gen_Solvem_Aux_S1B1 = 54,
  efunc_Solvem_TermEquation = 55,
  efunc_gen_Solvem_Aux_S2C1 = 56,
  efunc_gen_Solvem_Aux_S2C2 = 57,
  efunc_gen_Solvem_Aux_S2B1 = 58,
  efunc_gen_Solvem_Aux_S3C1 = 59,
  efunc_gen_Solvem_Aux_S3C2 = 60,
  efunc_gen_Solvem_Aux_S3A3 = 61,
  efunc_gen_Solvem_Aux_S4C1 = 62,
  efunc_gen_Solvem_Aux_S4C2 = 63,
  efunc_gen_Solvem_Aux_S4A3 = 64,
  efunc_gen_Solvem_Aux_S6C1 = 65,
  efunc_gen_Solvem_Aux_S7C1 = 66,
  efunc_gen_Solvem_Aux_S8B1 = 67,
  efunc_IsFreeVariableSeq = 68,
  efunc_gen_Solvem_TermEquation_S1C1 = 69,
  efunc_gen_Solvem_TermEquation_S2C1 = 70,
  efunc_IsSVarSubset = 71,
  efunc_gen_Solvem_TermEquation_S2C2 = 72,
  efunc_gen_Solvem_TermEquation_S3C1 = 73,
  efunc_gen_Solvem_TermEquation_S4C1 = 74,
  efunc_gen_Solvem_TermEquation_S4C2 = 75,
  efunc_gen_Solvem_TermEquation_S5C1 = 76,
  efunc_gen_Solvem_TermEquation_S6C1 = 77,
  efunc_gen_Solvem_TermEquation_S6A2 = 78,
  efunc_gen_Solvem_TermEquation_S7C1 = 79,
  efunc_gen_Solvem_TermEquation_S7A2 = 80,
  efunc_gen_Solvem_TermEquation_S8C1 = 81,
  efunc_gen_Solvem_TermEquation_S9C1 = 82,
  efunc_gen_Solvem_TermEquation_S9A2 = 83,
  efunc_ApplyContraction = 84,
  efunc_gen_Map_Z3 = 85,
  efunc_gen_Map_Z2 = 86,
  efunc_ApplyContractionm_toExpr = 87,
  efunc_gen_FormatAssigns_L1D1 = 88,
  efunc_ApplyContractionm_toEquation = 89,
  efunc_ApplyContractionm_toAssign = 90,
};


enum ident {
  ident_k43_ = 0,
  ident_k47_ = 1,
  ident_k37_ = 2,
  ident_k42_ = 3,
  ident_k63_ = 4,
  ident_m_ = 5,
  ident_TkVariable = 6,
  ident_Success = 7,
  ident_Clear = 8,
  ident_Failure = 9,
  ident_Undefined = 10,
  ident_Symbol = 11,
  ident_True = 12,
  ident_Closure = 13,
  ident_ClosureBrackets = 14,
  ident_False = 15,
  ident_Brackets = 16,
  ident_ADTm_Brackets = 17,
  ident_CallBrackets = 18,
  ident_ColdCallBrackets = 19,
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
    refalrts::alloc_number(vm, context[9], 2390753526UL);
    refalrts::update_name(context[4], functions[efunc_u_u_FindMuPtr]);
    refalrts::reinit_number(context[5], 2667426315UL);
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
  refalrts::reinit_number(context[5], 2667426315UL);
  refalrts::reinit_number(context[7], 2390753526UL);
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


static refalrts::FnResult func_gen_FormatAssigns_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
  // </0 & FormatAssigns\1/4 (/7 e.Left#2/5 ':'/14 (/11 # TkVariable/13 e.Index#2/9 )/12 )/8 >/1
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
  context[13] = refalrts::ident_left( identifiers[ident_TkVariable], context[9], context[10] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  context[14] = refalrts::char_right( ':', context[5], context[6] );
  if( ! context[14] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Left#2 as range 5
  // closed e.Index#2 as range 9
  //DEBUG: e.Left#2: 5
  //DEBUG: e.Index#2: 9

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & FormatAssigns\1/4 {REMOVED TILE} # TkVariable/13 {REMOVED TILE} )/12 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Left#2/5 AsIs: ':'/14 AsIs: (/11 } Tile{ AsIs: e.Index#2/9 } Tile{ AsIs: )/8 HalfReuse: )/1 ]] }
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[7], context[1] );
  refalrts::link_brackets( context[11], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[7], context[11] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_FormatAssigns_L1("FormatAssigns\\1", COOKIE1_, COOKIE2_, func_gen_FormatAssigns_L1);


static refalrts::FnResult func_FormatAssigns(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 5 elems
  refalrts::Iter context[5];
  refalrts::zeros( context, 5 );
  // </0 & FormatAssigns/4 e.Assigns#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Assigns#1 as range 2
  //DEBUG: e.Assigns#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map@1/4 AsIs: e.Assigns#1/2 AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_gen_Map_Z1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_FormatAssigns("FormatAssigns", COOKIE1_, COOKIE2_, func_FormatAssigns);


static refalrts::FnResult func_gen_GenericMatch_B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
  // </0 & GenericMatch:1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & GenericMatch:1/4 s.new#1/7 e.new#2/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    if( ! refalrts::svar_left( context[7], context[5], context[6] ) )
      continue;
    // closed e.new#2 as range 5
    do {
      // </0 & GenericMatch:1/4 # Success/7 (/12 (/16 )/17 (/20 e.Assigns#2/18 )/21 )/13 >/1
      context[8] = context[5];
      context[9] = context[6];
      if( ! refalrts::ident_term( identifiers[ident_Success], context[7] ) )
        continue;
      context[10] = 0;
      context[11] = 0;
      context[12] = refalrts::brackets_left( context[10], context[11], context[8], context[9] );
      if( ! context[12] )
        continue;
      refalrts::bracket_pointers(context[12], context[13]);
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
      if( ! refalrts::empty_seq( context[14], context[15] ) )
        continue;
      if( ! refalrts::empty_seq( context[10], context[11] ) )
        continue;
      if( ! refalrts::empty_seq( context[8], context[9] ) )
        continue;
      // closed e.Assigns#2 as range 18
      //DEBUG: e.Assigns#2: 18

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & GenericMatch:1/4 # Success/7 (/12 {REMOVED TILE} )/13 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: # Clear/16 HalfReuse: </17 HalfReuse: & FormatAssigns/20 AsIs: e.Assigns#2/18 HalfReuse: >/21 } Tile{ ]] }
      refalrts::reinit_ident(context[16], identifiers[ident_Clear]);
      refalrts::reinit_open_call(context[17]);
      refalrts::reinit_name(context[20], functions[efunc_FormatAssigns]);
      refalrts::reinit_close_call(context[21]);
      refalrts::push_stack( vm, context[21] );
      refalrts::push_stack( vm, context[17] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[16], context[21] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & GenericMatch:1/4 s.new#3/7 >/1
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    do {
      // </0 & GenericMatch:1/4 # Failure/7 >/1
      if( ! refalrts::ident_term( identifiers[ident_Failure], context[7] ) )
        continue;

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & GenericMatch:1/4 # Failure/7 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: # Failure/1 ]] }
      refalrts::reinit_ident(context[1], identifiers[ident_Failure]);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & GenericMatch:1/4 # Undefined/7 >/1
    if( ! refalrts::ident_term( identifiers[ident_Undefined], context[7] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & GenericMatch:1/4 # Undefined/7 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # Undefined/1 ]] }
    refalrts::reinit_ident(context[1], identifiers[ident_Undefined]);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & GenericMatch:1/4 e.Other#2/2 >/1
  // closed e.Other#2 as range 2
  //DEBUG: e.Other#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & GenericMatch:1/4 e.Other#2/2 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: # Undefined/1 ]] }
  refalrts::reinit_ident(context[1], identifiers[ident_Undefined]);
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_GenericMatch_B1("GenericMatch:1", COOKIE1_, COOKIE2_, func_gen_GenericMatch_B1);


static refalrts::FnResult func_GenericMatch(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 34 elems
  refalrts::Iter context[34];
  refalrts::zeros( context, 34 );
  // </0 & GenericMatch/4 (/7 e.Pattern#1/5 )/8 (/11 e.LPattern#1/9 )/12 >/1
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
  // closed e.Pattern#1 as range 5
  // closed e.LPattern#1 as range 9
  //DEBUG: e.Pattern#1: 5
  //DEBUG: e.LPattern#1: 9

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </13 & GenericMatch:1/14 </15 & Solve/16 (/17 </18 & ExtractVariables/19 (/20 (/21 e.Pattern#1/5/22 Tile{ AsIs: e.LPattern#1/9 } )/24 (/25 )/26 )/27 >/28 Tile{ HalfReuse: )/0 HalfReuse: (/4 AsIs: (/7 AsIs: e.Pattern#1/5 AsIs: )/8 HalfReuse: ':'/11 } (/29 e.LPattern#1/9/30 )/32 )/33 Tile{ HalfReuse: >/12 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[13]);
  refalrts::alloc_name(vm, context[14], functions[efunc_gen_GenericMatch_B1]);
  refalrts::alloc_open_call(vm, context[15]);
  refalrts::alloc_name(vm, context[16], functions[efunc_Solve]);
  refalrts::alloc_open_bracket(vm, context[17]);
  refalrts::alloc_open_call(vm, context[18]);
  refalrts::alloc_name(vm, context[19], functions[efunc_ExtractVariables]);
  refalrts::alloc_open_bracket(vm, context[20]);
  refalrts::alloc_open_bracket(vm, context[21]);
  refalrts::copy_evar(vm, context[22], context[23], context[5], context[6]);
  refalrts::alloc_close_bracket(vm, context[24]);
  refalrts::alloc_open_bracket(vm, context[25]);
  refalrts::alloc_close_bracket(vm, context[26]);
  refalrts::alloc_close_bracket(vm, context[27]);
  refalrts::alloc_close_call(vm, context[28]);
  refalrts::alloc_open_bracket(vm, context[29]);
  refalrts::copy_evar(vm, context[30], context[31], context[9], context[10]);
  refalrts::alloc_close_bracket(vm, context[32]);
  refalrts::alloc_close_bracket(vm, context[33]);
  refalrts::reinit_close_bracket(context[0]);
  refalrts::reinit_open_bracket(context[4]);
  refalrts::reinit_char(context[11], ':');
  refalrts::reinit_close_call(context[12]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[13] );
  refalrts::push_stack( vm, context[12] );
  refalrts::push_stack( vm, context[15] );
  refalrts::link_brackets( context[4], context[33] );
  refalrts::link_brackets( context[29], context[32] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[17], context[0] );
  refalrts::push_stack( vm, context[28] );
  refalrts::push_stack( vm, context[18] );
  refalrts::link_brackets( context[20], context[27] );
  refalrts::link_brackets( context[25], context[26] );
  refalrts::link_brackets( context[21], context[24] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[12];
  res = refalrts::splice_evar( res, context[29], context[33] );
  res = refalrts::splice_evar( res, context[0], context[11] );
  res = refalrts::splice_evar( res, context[24], context[28] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[22], context[23] );
  res = refalrts::splice_evar( res, context[13], context[21] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_GenericMatch("GenericMatch", 0U, 0U, func_GenericMatch);


static refalrts::FnResult func_IsSVarSubset(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
  // </0 & IsSVarSubset/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & IsSVarSubset/4 t.new#1/5 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & IsSVarSubset/4 (/5 s.new#2/9 e.new#3/7 )/6 >/1
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
      continue;
    if( ! refalrts::svar_left( context[9], context[7], context[8] ) )
      continue;
    // closed e.new#3 as range 7
    do {
      // </0 & IsSVarSubset/4 (/5 s.new#4/9 s.new#5/12 e.new#6/10 )/6 >/1
      context[10] = context[7];
      context[11] = context[8];
      if( ! refalrts::svar_left( context[12], context[10], context[11] ) )
        continue;
      // closed e.new#6 as range 10
      do {
        // </0 & IsSVarSubset/4 (/5 # Symbol/9 s.Type#1/12 e.Info#1/13 )/6 >/1
        context[13] = context[10];
        context[14] = context[11];
        if( ! refalrts::ident_term( identifiers[ident_Symbol], context[9] ) )
          continue;
        // closed e.Info#1 as range 13
        //DEBUG: s.Type#1: 12
        //DEBUG: e.Info#1: 13

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 & IsSVarSubset/4 (/5 # Symbol/9 s.Type#1/12 e.Info#1/13 )/6 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: # True/1 ]] }
        refalrts::reinit_ident(context[1], identifiers[ident_True]);
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & IsSVarSubset/4 (/5 # TkVariable/9 's'/12 e.Tindex#1/13 )/6 >/1
      context[13] = context[10];
      context[14] = context[11];
      if( ! refalrts::char_term( 's', context[12] ) )
        continue;
      if( ! refalrts::ident_term( identifiers[ident_TkVariable], context[9] ) )
        continue;
      // closed e.Tindex#1 as range 13
      //DEBUG: e.Tindex#1: 13

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & IsSVarSubset/4 (/5 # TkVariable/9 's'/12 e.Tindex#1/13 )/6 {REMOVED TILE}
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
      // </0 & IsSVarSubset/4 (/5 # Closure/9 e.Body#1/10 )/6 >/1
      context[10] = context[7];
      context[11] = context[8];
      if( ! refalrts::ident_term( identifiers[ident_Closure], context[9] ) )
        continue;
      // closed e.Body#1 as range 10
      //DEBUG: e.Body#1: 10

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & IsSVarSubset/4 (/5 # Closure/9 e.Body#1/10 )/6 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: # True/1 ]] }
      refalrts::reinit_ident(context[1], identifiers[ident_True]);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & IsSVarSubset/4 (/5 # ClosureBrackets/9 e.Context#1/10 )/6 >/1
    context[10] = context[7];
    context[11] = context[8];
    if( ! refalrts::ident_term( identifiers[ident_ClosureBrackets], context[9] ) )
      continue;
    // closed e.Context#1 as range 10
    //DEBUG: e.Context#1: 10

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & IsSVarSubset/4 (/5 # ClosureBrackets/9 e.Context#1/10 )/6 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # True/1 ]] }
    refalrts::reinit_ident(context[1], identifiers[ident_True]);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & IsSVarSubset/4 t.OtherTerm#1/5 >/1
  //DEBUG: t.OtherTerm#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & IsSVarSubset/4 t.OtherTerm#1/5 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: # False/1 ]] }
  refalrts::reinit_ident(context[1], identifiers[ident_False]);
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_IsSVarSubset("IsSVarSubset", COOKIE1_, COOKIE2_, func_IsSVarSubset);


static refalrts::FnResult func_gen_Solve_B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  // </0 & Solve:1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & Solve:1/4 >/1
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Solve:1/4 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # Failure/1 ]] }
    refalrts::reinit_ident(context[1], identifiers[ident_Failure]);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Solve:1/4 e.B#2/7 # Undefined/11 e.A#2/9 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[7] = 0;
    context[8] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[9] = context[5];
      context[10] = context[6];
      context[11] = refalrts::ident_left( identifiers[ident_Undefined], context[9], context[10] );
      if( ! context[11] )
        continue;
      // closed e.A#2 as range 9
      //DEBUG: e.B#2: 7
      //DEBUG: e.A#2: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & Solve:1/4 e.B#2/7 # Undefined/11 e.A#2/9 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: # Undefined/1 ]] }
      refalrts::reinit_ident(context[1], identifiers[ident_Undefined]);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[7], context[8], context[5], context[6] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Solve:1/4 e.Other#2/2 >/1
  // closed e.Other#2 as range 2
  //DEBUG: e.Other#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } # Success/5 </6 & CombineResults/7 Tile{ HalfReuse: (/0 HalfReuse: )/4 AsIs: e.Other#2/2 AsIs: >/1 ]] }
  refalrts::alloc_ident(vm, context[5], identifiers[ident_Success]);
  refalrts::alloc_open_call(vm, context[6]);
  refalrts::alloc_name(vm, context[7], functions[efunc_CombineResults]);
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_close_bracket(context[4]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[6] );
  refalrts::link_brackets( context[0], context[4] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[7] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Solve_B1("Solve:1", COOKIE1_, COOKIE2_, func_gen_Solve_B1);


static refalrts::FnResult func_Solve(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 29 elems
  refalrts::Iter context[29];
  refalrts::zeros( context, 29 );
  // </0 & Solve/4 (/7 e.UsedVars#1/5 )/8 (/11 (/15 e.Expr#1/13 )/16 ':'/17 (/20 e.Lexpr#1/18 )/21 )/12 >/1
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
  context[17] = refalrts::char_left( ':', context[9], context[10] );
  if( ! context[17] )
    return refalrts::cRecognitionImpossible;
  context[18] = 0;
  context[19] = 0;
  context[20] = refalrts::brackets_left( context[18], context[19], context[9], context[10] );
  if( ! context[20] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[20], context[21]);
  if( ! refalrts::empty_seq( context[9], context[10] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.UsedVars#1 as range 5
  // closed e.Expr#1 as range 13
  // closed e.Lexpr#1 as range 18
  //DEBUG: e.UsedVars#1: 5
  //DEBUG: e.Expr#1: 13
  //DEBUG: e.Lexpr#1: 18

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Solve:1/4 HalfReuse: </7 } & Solve-Aux/22 (/23 Tile{ AsIs: e.UsedVars#1/5 } )/24 (/25 Tile{ AsIs: )/8 AsIs: (/11 AsIs: (/15 AsIs: e.Expr#1/13 AsIs: )/16 AsIs: ':'/17 AsIs: (/20 AsIs: e.Lexpr#1/18 AsIs: )/21 AsIs: )/12 HalfReuse: (/1 } )/26 >/27 >/28 Tile{ ]] }
  refalrts::alloc_name(vm, context[22], functions[efunc_Solvem_Aux]);
  refalrts::alloc_open_bracket(vm, context[23]);
  refalrts::alloc_close_bracket(vm, context[24]);
  refalrts::alloc_open_bracket(vm, context[25]);
  refalrts::alloc_close_bracket(vm, context[26]);
  refalrts::alloc_close_call(vm, context[27]);
  refalrts::alloc_close_call(vm, context[28]);
  refalrts::update_name(context[4], functions[efunc_gen_Solve_B1]);
  refalrts::reinit_open_call(context[7]);
  refalrts::reinit_open_bracket(context[1]);
  refalrts::push_stack( vm, context[28] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[27] );
  refalrts::push_stack( vm, context[7] );
  refalrts::link_brackets( context[1], context[26] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[20], context[21] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[25], context[8] );
  refalrts::link_brackets( context[23], context[24] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[26], context[28] );
  res = refalrts::splice_evar( res, context[8], context[1] );
  res = refalrts::splice_evar( res, context[24], context[25] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[22], context[23] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Solve("Solve", 0U, 0U, func_Solve);


static refalrts::FnResult func_CombineResults(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 23 elems
  refalrts::Iter context[23];
  refalrts::zeros( context, 23 );
  // </0 & CombineResults/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & CombineResults/4 (/7 e.new#1/5 )/8 e.new#2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  // closed e.new#2 as range 2
  do {
    // </0 & CombineResults/4 (/7 e.Solutions#1/9 )/8 # Success/13 (/16 e.Contrs#1/14 )/17 (/20 e.Assigns#1/18 )/21 e.Rest#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::ident_left( identifiers[ident_Success], context[11], context[12] );
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
    // closed e.Solutions#1 as range 9
    // closed e.Contrs#1 as range 14
    // closed e.Assigns#1 as range 18
    // closed e.Rest#1 as range 11
    //DEBUG: e.Solutions#1: 9
    //DEBUG: e.Contrs#1: 14
    //DEBUG: e.Assigns#1: 18
    //DEBUG: e.Rest#1: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & CombineResults/4 AsIs: (/7 } Tile{ AsIs: e.Solutions#1/9 } Tile{ HalfReuse: (/13 AsIs: (/16 AsIs: e.Contrs#1/14 AsIs: )/17 AsIs: (/20 AsIs: e.Assigns#1/18 AsIs: )/21 } Tile{ AsIs: )/8 } )/22 Tile{ AsIs: e.Rest#1/11 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_close_bracket(vm, context[22]);
    refalrts::reinit_open_bracket(context[13]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[22] );
    refalrts::link_brackets( context[13], context[8] );
    refalrts::link_brackets( context[20], context[21] );
    refalrts::link_brackets( context[16], context[17] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[22], context[22] );
    res = refalrts::splice_evar( res, context[8], context[8] );
    res = refalrts::splice_evar( res, context[13], context[21] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & CombineResults/4 (/7 e.Solutions#1/5 )/8 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Solutions#1 as range 5
  //DEBUG: e.Solutions#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & CombineResults/4 (/7 {REMOVED TILE} )/8 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Solutions#1/5 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_CombineResults("CombineResults", COOKIE1_, COOKIE2_, func_CombineResults);


static refalrts::FnResult func_Eq(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
  // </0 & Eq/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & Eq/4 (/9 e.X#1/7 )/10 (/13 s.X#1/15 )/14 >/1
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
    context[13] = refalrts::brackets_left( context[11], context[12], context[5], context[6] );
    if( ! context[13] )
      continue;
    refalrts::bracket_pointers(context[13], context[14]);
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    // closed e.X#1 as range 7
    if( ! refalrts::svar_left( context[15], context[11], context[12] ) )
      continue;
    if( ! refalrts::empty_seq( context[11], context[12] ) )
      continue;
    //DEBUG: e.X#1: 7
    //DEBUG: s.X#1: 15

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Eq/4 (/9 e.X#1/7 )/10 (/13 s.X#1/15 )/14 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # True/1 ]] }
    refalrts::reinit_ident(context[1], identifiers[ident_True]);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Eq/4 e.Other#1/2 >/1
  // closed e.Other#1 as range 2
  //DEBUG: e.Other#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Eq/4 e.Other#1/2 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: # False/1 ]] }
  refalrts::reinit_ident(context[1], identifiers[ident_False]);
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Eq("Eq", COOKIE1_, COOKIE2_, func_Eq);


static refalrts::FnResult func_HasRepeatedVarsAssigns(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 36 elems
  refalrts::Iter context[36];
  refalrts::zeros( context, 36 );
  // </0 & HasRepeatedVarsAssigns/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & HasRepeatedVarsAssigns/4 (/7 e.new#1/5 )/8 (/11 e.new#2/9 )/12 >/1
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
    // </0 & HasRepeatedVarsAssigns/4 (/7 e.B#1/17 (/25 e.Expr#1/23 ':'/29 t.Var#1/27 )/26 e.M#1/19 )/8 (/11 e.L#1/30 t.Var#1/34 e.R#1/32 )/12 >/1
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
      // closed e.M#1 as range 19
      context[28] = refalrts::tvar_right( context[27], context[23], context[24] );
      if( ! context[28] )
        continue;
      context[29] = refalrts::char_right( ':', context[23], context[24] );
      if( ! context[29] )
        continue;
      // closed e.Expr#1 as range 23
      context[30] = 0;
      context[31] = 0;
      refalrts::start_e_loop(vm);
      do {
        context[32] = context[21];
        context[33] = context[22];
        context[35] = refalrts::repeated_stvar_left( vm, context[34], context[27], context[32], context[33] );
        if( ! context[35] )
          continue;
        // closed e.R#1 as range 32
        //DEBUG: e.B#1: 17
        //DEBUG: e.M#1: 19
        //DEBUG: t.Var#1: 27
        //DEBUG: e.Expr#1: 23
        //DEBUG: e.L#1: 30
        //DEBUG: e.R#1: 32

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 & HasRepeatedVarsAssigns/4 (/7 e.B#1/17 (/25 e.Expr#1/23 ':'/29 t.Var#1/27 )/26 e.M#1/19 )/8 (/11 e.L#1/30 t.Var#1/34 e.R#1/32 )/12 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: # True/1 ]] }
        refalrts::reinit_ident(context[1], identifiers[ident_True]);
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[30], context[31], context[21], context[22] ) );
    } while ( refalrts::open_evar_advance( context[17], context[18], context[13], context[14] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & HasRepeatedVarsAssigns/4 (/7 e.Lexpr#1/5 )/8 (/11 e.RVars#1/9 )/12 >/1
  // closed e.Lexpr#1 as range 5
  // closed e.RVars#1 as range 9
  //DEBUG: e.Lexpr#1: 5
  //DEBUG: e.RVars#1: 9

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & HasRepeatedVarsAssigns/4 (/7 e.Lexpr#1/5 )/8 (/11 e.RVars#1/9 )/12 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: # False/1 ]] }
  refalrts::reinit_ident(context[1], identifiers[ident_False]);
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_HasRepeatedVarsAssigns("HasRepeatedVarsAssigns", COOKIE1_, COOKIE2_, func_HasRepeatedVarsAssigns);


static refalrts::FnResult func_Solutionm_PostProcess(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 67 elems
  refalrts::Iter context[67];
  refalrts::zeros( context, 67 );
  // </0 & Solution-PostProcess/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Solution-PostProcess/4 (/7 e.new#1/5 )/8 (/11 e.new#2/9 )/12 >/1
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
    // </0 & Solution-PostProcess/4 (/7 e.Contractions#1/13 )/8 (/11 e.Assigns#1/15 )/12 >/1
    context[13] = context[5];
    context[14] = context[6];
    context[15] = context[9];
    context[16] = context[10];
    // closed e.Contractions#1 as range 13
    // closed e.Assigns#1 as range 15
    //DEBUG: e.Contractions#1: 13
    //DEBUG: e.Assigns#1: 15
    //13: e.Contractions#1
    //15: e.Assigns#1
    //20: e.Assigns#1

    refalrts::reset_allocator(vm);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::alloc_open_call(vm, context[17]);
    refalrts::alloc_name(vm, context[19], functions[efunc_gen_Solutionm_PostProcess_S1C1]);
    refalrts::copy_evar(vm, context[20], context[21], context[15], context[16]);
    refalrts::alloc_close_call(vm, context[18]);
    refalrts::push_stack( vm, context[18] );
    refalrts::push_stack( vm, context[17] );
    res = refalrts::splice_elem( res, context[18] );
    res = refalrts::splice_evar( res, context[20], context[21] );
    res = refalrts::splice_elem( res, context[19] );
    res = refalrts::splice_elem( res, context[17] );
    refalrts::use( res );
    refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
    if (rec_res != refalrts::cSuccess)
      return rec_res;
    refalrts::this_is_generated_function(vm);
    do {
      // </17 & Solution-PostProcess$1?1/21 e.B#2/22 (/28 (/32 # TkVariable/35 's'/36 e.Index1#2/30 )/33 ':'/34 (/39 # TkVariable/41 e.HIndex#2/37 )/40 )/29 e.M#2/42 (/48 (/52 # TkVariable/55 's'/56 e.Index2#2/50 )/53 ':'/54 (/59 # TkVariable/61 e.HIndex#2/62 )/60 )/49 e.E#2/44 >/18
      context[19] = 0;
      context[20] = 0;
      context[21] = refalrts::call_left( context[19], context[20], context[17], context[18] );
      context[22] = 0;
      context[23] = 0;
      refalrts::start_e_loop(vm);
      do {
        context[24] = context[19];
        context[25] = context[20];
        context[26] = 0;
        context[27] = 0;
        context[28] = refalrts::brackets_left( context[26], context[27], context[24], context[25] );
        if( ! context[28] )
          continue;
        refalrts::bracket_pointers(context[28], context[29]);
        context[30] = 0;
        context[31] = 0;
        context[32] = refalrts::brackets_left( context[30], context[31], context[26], context[27] );
        if( ! context[32] )
          continue;
        refalrts::bracket_pointers(context[32], context[33]);
        context[34] = refalrts::char_left( ':', context[26], context[27] );
        if( ! context[34] )
          continue;
        context[35] = refalrts::ident_left( identifiers[ident_TkVariable], context[30], context[31] );
        if( ! context[35] )
          continue;
        context[36] = refalrts::char_left( 's', context[30], context[31] );
        if( ! context[36] )
          continue;
        context[37] = 0;
        context[38] = 0;
        context[39] = refalrts::brackets_left( context[37], context[38], context[26], context[27] );
        if( ! context[39] )
          continue;
        refalrts::bracket_pointers(context[39], context[40]);
        context[41] = refalrts::ident_left( identifiers[ident_TkVariable], context[37], context[38] );
        if( ! context[41] )
          continue;
        if( ! refalrts::empty_seq( context[26], context[27] ) )
          continue;
        // closed e.Index1#2 as range 30
        // closed e.HIndex#2 as range 37
        context[42] = 0;
        context[43] = 0;
        refalrts::start_e_loop(vm);
        do {
          context[44] = context[24];
          context[45] = context[25];
          context[46] = 0;
          context[47] = 0;
          context[48] = refalrts::brackets_left( context[46], context[47], context[44], context[45] );
          if( ! context[48] )
            continue;
          refalrts::bracket_pointers(context[48], context[49]);
          context[50] = 0;
          context[51] = 0;
          context[52] = refalrts::brackets_left( context[50], context[51], context[46], context[47] );
          if( ! context[52] )
            continue;
          refalrts::bracket_pointers(context[52], context[53]);
          context[54] = refalrts::char_left( ':', context[46], context[47] );
          if( ! context[54] )
            continue;
          context[55] = refalrts::ident_left( identifiers[ident_TkVariable], context[50], context[51] );
          if( ! context[55] )
            continue;
          context[56] = refalrts::char_left( 's', context[50], context[51] );
          if( ! context[56] )
            continue;
          context[57] = 0;
          context[58] = 0;
          context[59] = refalrts::brackets_left( context[57], context[58], context[46], context[47] );
          if( ! context[59] )
            continue;
          refalrts::bracket_pointers(context[59], context[60]);
          context[61] = refalrts::ident_left( identifiers[ident_TkVariable], context[57], context[58] );
          if( ! context[61] )
            continue;
          if( ! refalrts::empty_seq( context[46], context[47] ) )
            continue;
          if( ! refalrts::repeated_evar_left( vm, context[62], context[63], context[37], context[38], context[57], context[58] ) )
            continue;
          if( ! refalrts::empty_seq( context[57], context[58] ) )
            continue;
          // closed e.Index2#2 as range 50
          // closed e.E#2 as range 44
          //DEBUG: e.Contractions#1: 13
          //DEBUG: e.Assigns#1: 15
          //DEBUG: e.B#2: 22
          //DEBUG: e.Index1#2: 30
          //DEBUG: e.HIndex#2: 37
          //DEBUG: e.M#2: 42
          //DEBUG: e.Index2#2: 50
          //DEBUG: e.E#2: 44

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.Assigns#1/15 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.HIndex#2/62 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 AsIs: & Solution-PostProcess/4 HalfReuse: </7 } & AddContraction/64 Tile{ AsIs: (/48 AsIs: (/52 AsIs: # TkVariable/55 AsIs: 's'/56 AsIs: e.Index2#2/50 AsIs: )/53 AsIs: ':'/54 AsIs: (/59 AsIs: # TkVariable/61 } Tile{ HalfReuse: 's'/8 } e.Index1#2/30/65 Tile{ AsIs: )/60 AsIs: )/49 } Tile{ AsIs: (/11 } Tile{ AsIs: e.Contractions#1/13 } Tile{ HalfReuse: )/17 HalfReuse: (/21 AsIs: e.B#2/22 AsIs: (/28 AsIs: (/32 AsIs: # TkVariable/35 AsIs: 's'/36 AsIs: e.Index1#2/30 AsIs: )/33 AsIs: ':'/34 AsIs: (/39 AsIs: # TkVariable/41 AsIs: e.HIndex#2/37 AsIs: )/40 AsIs: )/29 } Tile{ AsIs: e.M#2/42 } Tile{ AsIs: e.E#2/44 } Tile{ AsIs: )/12 } Tile{ AsIs: >/18 AsIs: >/1 ]] }
          refalrts::alloc_name(vm, context[64], functions[efunc_AddContraction]);
          refalrts::copy_evar(vm, context[65], context[66], context[30], context[31]);
          refalrts::reinit_open_call(context[7]);
          refalrts::reinit_char(context[8], 's');
          refalrts::reinit_close_bracket(context[17]);
          refalrts::reinit_open_bracket(context[21]);
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[0] );
          refalrts::push_stack( vm, context[18] );
          refalrts::push_stack( vm, context[7] );
          refalrts::link_brackets( context[21], context[12] );
          refalrts::link_brackets( context[28], context[29] );
          refalrts::link_brackets( context[39], context[40] );
          refalrts::link_brackets( context[32], context[33] );
          refalrts::link_brackets( context[11], context[17] );
          refalrts::link_brackets( context[48], context[49] );
          refalrts::link_brackets( context[59], context[60] );
          refalrts::link_brackets( context[52], context[53] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[18];
          res = refalrts::splice_evar( res, context[12], context[12] );
          res = refalrts::splice_evar( res, context[44], context[45] );
          res = refalrts::splice_evar( res, context[42], context[43] );
          res = refalrts::splice_evar( res, context[17], context[29] );
          res = refalrts::splice_evar( res, context[13], context[14] );
          res = refalrts::splice_evar( res, context[11], context[11] );
          res = refalrts::splice_evar( res, context[60], context[49] );
          res = refalrts::splice_evar( res, context[65], context[66] );
          res = refalrts::splice_evar( res, context[8], context[8] );
          res = refalrts::splice_evar( res, context[48], context[61] );
          res = refalrts::splice_evar( res, context[64], context[64] );
          refalrts::splice_to_freelist_open( vm, context[7], res );
          return refalrts::cSuccess;
        } while ( refalrts::open_evar_advance( context[42], context[43], context[24], context[25] ) );
      } while ( refalrts::open_evar_advance( context[22], context[23], context[19], context[20] ) );
    } while ( 0 );
    refalrts::stop_sentence(vm);

    refalrts::splice_to_freelist(vm, context[17], context[18]);
    continue;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Solution-PostProcess/4 (/7 e.Contractions#1/13 )/8 (/11 e.Assigns#1/15 )/12 >/1
    context[13] = context[5];
    context[14] = context[6];
    context[15] = context[9];
    context[16] = context[10];
    // closed e.Contractions#1 as range 13
    // closed e.Assigns#1 as range 15
    //DEBUG: e.Contractions#1: 13
    //DEBUG: e.Assigns#1: 15
    //13: e.Contractions#1
    //15: e.Assigns#1
    //20: e.Assigns#1

    refalrts::reset_allocator(vm);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::alloc_open_call(vm, context[17]);
    refalrts::alloc_name(vm, context[19], functions[efunc_gen_Solutionm_PostProcess_S2C1]);
    refalrts::copy_evar(vm, context[20], context[21], context[15], context[16]);
    refalrts::alloc_close_call(vm, context[18]);
    refalrts::push_stack( vm, context[18] );
    refalrts::push_stack( vm, context[17] );
    res = refalrts::splice_elem( res, context[18] );
    res = refalrts::splice_evar( res, context[20], context[21] );
    res = refalrts::splice_elem( res, context[19] );
    res = refalrts::splice_elem( res, context[17] );
    refalrts::use( res );
    refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
    if (rec_res != refalrts::cSuccess)
      return rec_res;
    refalrts::this_is_generated_function(vm);
    do {
      // </17 & Solution-PostProcess$2?1/21 e.B#2/22 (/28 (/32 # TkVariable/35 's'/36 e.PIndex#2/30 )/33 ':'/34 (/39 # TkVariable/41 e.HIndex#2/37 )/40 )/29 e.M#2/42 (/48 (/52 # Symbol/55 s.Type#2/63 e.Info#2/50 )/53 ':'/54 (/58 # TkVariable/60 e.HIndex#2/61 )/59 )/49 e.E#2/44 >/18
      context[19] = 0;
      context[20] = 0;
      context[21] = refalrts::call_left( context[19], context[20], context[17], context[18] );
      context[22] = 0;
      context[23] = 0;
      refalrts::start_e_loop(vm);
      do {
        context[24] = context[19];
        context[25] = context[20];
        context[26] = 0;
        context[27] = 0;
        context[28] = refalrts::brackets_left( context[26], context[27], context[24], context[25] );
        if( ! context[28] )
          continue;
        refalrts::bracket_pointers(context[28], context[29]);
        context[30] = 0;
        context[31] = 0;
        context[32] = refalrts::brackets_left( context[30], context[31], context[26], context[27] );
        if( ! context[32] )
          continue;
        refalrts::bracket_pointers(context[32], context[33]);
        context[34] = refalrts::char_left( ':', context[26], context[27] );
        if( ! context[34] )
          continue;
        context[35] = refalrts::ident_left( identifiers[ident_TkVariable], context[30], context[31] );
        if( ! context[35] )
          continue;
        context[36] = refalrts::char_left( 's', context[30], context[31] );
        if( ! context[36] )
          continue;
        context[37] = 0;
        context[38] = 0;
        context[39] = refalrts::brackets_left( context[37], context[38], context[26], context[27] );
        if( ! context[39] )
          continue;
        refalrts::bracket_pointers(context[39], context[40]);
        context[41] = refalrts::ident_left( identifiers[ident_TkVariable], context[37], context[38] );
        if( ! context[41] )
          continue;
        if( ! refalrts::empty_seq( context[26], context[27] ) )
          continue;
        // closed e.PIndex#2 as range 30
        // closed e.HIndex#2 as range 37
        context[42] = 0;
        context[43] = 0;
        refalrts::start_e_loop(vm);
        do {
          context[44] = context[24];
          context[45] = context[25];
          context[46] = 0;
          context[47] = 0;
          context[48] = refalrts::brackets_left( context[46], context[47], context[44], context[45] );
          if( ! context[48] )
            continue;
          refalrts::bracket_pointers(context[48], context[49]);
          context[50] = 0;
          context[51] = 0;
          context[52] = refalrts::brackets_left( context[50], context[51], context[46], context[47] );
          if( ! context[52] )
            continue;
          refalrts::bracket_pointers(context[52], context[53]);
          context[54] = refalrts::char_left( ':', context[46], context[47] );
          if( ! context[54] )
            continue;
          context[55] = refalrts::ident_left( identifiers[ident_Symbol], context[50], context[51] );
          if( ! context[55] )
            continue;
          context[56] = 0;
          context[57] = 0;
          context[58] = refalrts::brackets_left( context[56], context[57], context[46], context[47] );
          if( ! context[58] )
            continue;
          refalrts::bracket_pointers(context[58], context[59]);
          context[60] = refalrts::ident_left( identifiers[ident_TkVariable], context[56], context[57] );
          if( ! context[60] )
            continue;
          if( ! refalrts::empty_seq( context[46], context[47] ) )
            continue;
          if( ! refalrts::repeated_evar_left( vm, context[61], context[62], context[37], context[38], context[56], context[57] ) )
            continue;
          if( ! refalrts::empty_seq( context[56], context[57] ) )
            continue;
          // closed e.E#2 as range 44
          if( ! refalrts::svar_left( context[63], context[50], context[51] ) )
            continue;
          // closed e.Info#2 as range 50
          //DEBUG: e.Contractions#1: 13
          //DEBUG: e.Assigns#1: 15
          //DEBUG: e.B#2: 22
          //DEBUG: e.PIndex#2: 30
          //DEBUG: e.HIndex#2: 37
          //DEBUG: e.M#2: 42
          //DEBUG: e.E#2: 44
          //DEBUG: s.Type#2: 63
          //DEBUG: e.Info#2: 50

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} e.Assigns#1/15 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.HIndex#2/37 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ } Tile{ HalfReuse: </40 } Tile{ HalfReuse: & Solution-PostProcess/12 AsIs: </17 Reuse: & AddContraction/21 } Tile{ AsIs: (/28 AsIs: (/32 AsIs: # TkVariable/35 AsIs: 's'/36 AsIs: e.PIndex#2/30 AsIs: )/33 AsIs: ':'/34 AsIs: (/39 Reuse: # Symbol/41 } s.Type#2/63/64 e.Info#2/50/65 Tile{ HalfReuse: )/0 HalfReuse: )/4 AsIs: (/7 AsIs: e.Contractions#1/13 AsIs: )/8 AsIs: (/11 } Tile{ AsIs: e.B#2/22 } Tile{ AsIs: (/48 AsIs: (/52 AsIs: # Symbol/55 AsIs: s.Type#2/63 AsIs: e.Info#2/50 AsIs: )/53 AsIs: ':'/54 AsIs: (/58 AsIs: # TkVariable/60 AsIs: e.HIndex#2/61 AsIs: )/59 AsIs: )/49 } Tile{ AsIs: e.M#2/42 } Tile{ AsIs: e.E#2/44 } Tile{ AsIs: )/29 } Tile{ AsIs: >/18 AsIs: >/1 ]] }
          refalrts::copy_stvar(vm, context[64], context[63]);
          refalrts::copy_evar(vm, context[65], context[66], context[50], context[51]);
          refalrts::reinit_open_call(context[40]);
          refalrts::reinit_name(context[12], functions[efunc_Solutionm_PostProcess]);
          refalrts::update_name(context[21], functions[efunc_AddContraction]);
          refalrts::update_ident(context[41], identifiers[ident_Symbol]);
          refalrts::reinit_close_bracket(context[0]);
          refalrts::reinit_close_bracket(context[4]);
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[40] );
          refalrts::push_stack( vm, context[18] );
          refalrts::push_stack( vm, context[17] );
          refalrts::link_brackets( context[11], context[29] );
          refalrts::link_brackets( context[48], context[49] );
          refalrts::link_brackets( context[58], context[59] );
          refalrts::link_brackets( context[52], context[53] );
          refalrts::link_brackets( context[7], context[8] );
          refalrts::link_brackets( context[28], context[4] );
          refalrts::link_brackets( context[39], context[0] );
          refalrts::link_brackets( context[32], context[33] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[18];
          res = refalrts::splice_evar( res, context[29], context[29] );
          res = refalrts::splice_evar( res, context[44], context[45] );
          res = refalrts::splice_evar( res, context[42], context[43] );
          res = refalrts::splice_evar( res, context[48], context[49] );
          res = refalrts::splice_evar( res, context[22], context[23] );
          res = refalrts::splice_evar( res, context[0], context[11] );
          res = refalrts::splice_evar( res, context[65], context[66] );
          res = refalrts::splice_evar( res, context[64], context[64] );
          res = refalrts::splice_evar( res, context[28], context[41] );
          res = refalrts::splice_evar( res, context[12], context[21] );
          res = refalrts::splice_evar( res, context[40], context[40] );
          refalrts::splice_to_freelist_open( vm, trash_prev, res );
          return refalrts::cSuccess;
        } while ( refalrts::open_evar_advance( context[42], context[43], context[24], context[25] ) );
      } while ( refalrts::open_evar_advance( context[22], context[23], context[19], context[20] ) );
    } while ( 0 );
    refalrts::stop_sentence(vm);

    refalrts::splice_to_freelist(vm, context[17], context[18]);
    continue;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Solution-PostProcess/4 (/7 e.Contractions#1/13 )/8 (/11 e.Assigns#1/15 )/12 >/1
    context[13] = context[5];
    context[14] = context[6];
    context[15] = context[9];
    context[16] = context[10];
    // closed e.Contractions#1 as range 13
    // closed e.Assigns#1 as range 15
    //DEBUG: e.Contractions#1: 13
    //DEBUG: e.Assigns#1: 15
    //13: e.Contractions#1
    //15: e.Assigns#1
    //20: e.Assigns#1

    refalrts::reset_allocator(vm);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::alloc_open_call(vm, context[17]);
    refalrts::alloc_name(vm, context[19], functions[efunc_gen_Solutionm_PostProcess_S3C1]);
    refalrts::copy_evar(vm, context[20], context[21], context[15], context[16]);
    refalrts::alloc_close_call(vm, context[18]);
    refalrts::push_stack( vm, context[18] );
    refalrts::push_stack( vm, context[17] );
    res = refalrts::splice_elem( res, context[18] );
    res = refalrts::splice_evar( res, context[20], context[21] );
    res = refalrts::splice_elem( res, context[19] );
    res = refalrts::splice_elem( res, context[17] );
    refalrts::use( res );
    refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
    if (rec_res != refalrts::cSuccess)
      return rec_res;
    refalrts::this_is_generated_function(vm);
    do {
      // </17 & Solution-PostProcess$3?1/21 e.B#2/22 (/28 (/32 # Symbol/35 s.Type#2/41 e.Info#2/30 )/33 ':'/34 (/38 # TkVariable/40 e.HIndex#2/36 )/39 )/29 e.M#2/42 (/48 (/52 # TkVariable/55 's'/56 e.PIndex#2/50 )/53 ':'/54 (/59 # TkVariable/61 e.HIndex#2/62 )/60 )/49 e.E#2/44 >/18
      context[19] = 0;
      context[20] = 0;
      context[21] = refalrts::call_left( context[19], context[20], context[17], context[18] );
      context[22] = 0;
      context[23] = 0;
      refalrts::start_e_loop(vm);
      do {
        context[24] = context[19];
        context[25] = context[20];
        context[26] = 0;
        context[27] = 0;
        context[28] = refalrts::brackets_left( context[26], context[27], context[24], context[25] );
        if( ! context[28] )
          continue;
        refalrts::bracket_pointers(context[28], context[29]);
        context[30] = 0;
        context[31] = 0;
        context[32] = refalrts::brackets_left( context[30], context[31], context[26], context[27] );
        if( ! context[32] )
          continue;
        refalrts::bracket_pointers(context[32], context[33]);
        context[34] = refalrts::char_left( ':', context[26], context[27] );
        if( ! context[34] )
          continue;
        context[35] = refalrts::ident_left( identifiers[ident_Symbol], context[30], context[31] );
        if( ! context[35] )
          continue;
        context[36] = 0;
        context[37] = 0;
        context[38] = refalrts::brackets_left( context[36], context[37], context[26], context[27] );
        if( ! context[38] )
          continue;
        refalrts::bracket_pointers(context[38], context[39]);
        context[40] = refalrts::ident_left( identifiers[ident_TkVariable], context[36], context[37] );
        if( ! context[40] )
          continue;
        if( ! refalrts::empty_seq( context[26], context[27] ) )
          continue;
        // closed e.HIndex#2 as range 36
        if( ! refalrts::svar_left( context[41], context[30], context[31] ) )
          continue;
        // closed e.Info#2 as range 30
        context[42] = 0;
        context[43] = 0;
        refalrts::start_e_loop(vm);
        do {
          context[44] = context[24];
          context[45] = context[25];
          context[46] = 0;
          context[47] = 0;
          context[48] = refalrts::brackets_left( context[46], context[47], context[44], context[45] );
          if( ! context[48] )
            continue;
          refalrts::bracket_pointers(context[48], context[49]);
          context[50] = 0;
          context[51] = 0;
          context[52] = refalrts::brackets_left( context[50], context[51], context[46], context[47] );
          if( ! context[52] )
            continue;
          refalrts::bracket_pointers(context[52], context[53]);
          context[54] = refalrts::char_left( ':', context[46], context[47] );
          if( ! context[54] )
            continue;
          context[55] = refalrts::ident_left( identifiers[ident_TkVariable], context[50], context[51] );
          if( ! context[55] )
            continue;
          context[56] = refalrts::char_left( 's', context[50], context[51] );
          if( ! context[56] )
            continue;
          context[57] = 0;
          context[58] = 0;
          context[59] = refalrts::brackets_left( context[57], context[58], context[46], context[47] );
          if( ! context[59] )
            continue;
          refalrts::bracket_pointers(context[59], context[60]);
          context[61] = refalrts::ident_left( identifiers[ident_TkVariable], context[57], context[58] );
          if( ! context[61] )
            continue;
          if( ! refalrts::empty_seq( context[46], context[47] ) )
            continue;
          if( ! refalrts::repeated_evar_left( vm, context[62], context[63], context[36], context[37], context[57], context[58] ) )
            continue;
          if( ! refalrts::empty_seq( context[57], context[58] ) )
            continue;
          // closed e.PIndex#2 as range 50
          // closed e.E#2 as range 44
          //DEBUG: e.Contractions#1: 13
          //DEBUG: e.Assigns#1: 15
          //DEBUG: e.B#2: 22
          //DEBUG: e.HIndex#2: 36
          //DEBUG: s.Type#2: 41
          //DEBUG: e.Info#2: 30
          //DEBUG: e.M#2: 42
          //DEBUG: e.PIndex#2: 50
          //DEBUG: e.E#2: 44

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.Assigns#1/15 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.HIndex#2/62 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 AsIs: & Solution-PostProcess/4 HalfReuse: </7 } & AddContraction/64 Tile{ AsIs: (/48 AsIs: (/52 AsIs: # TkVariable/55 AsIs: 's'/56 AsIs: e.PIndex#2/50 AsIs: )/53 AsIs: ':'/54 AsIs: (/59 Reuse: # Symbol/61 } Tile{ HalfReuse: s.Type2 #41/8 } e.Info#2/30/65 Tile{ AsIs: )/60 AsIs: )/49 } Tile{ AsIs: (/11 } Tile{ AsIs: e.Contractions#1/13 } Tile{ HalfReuse: )/17 HalfReuse: (/21 AsIs: e.B#2/22 AsIs: (/28 AsIs: (/32 AsIs: # Symbol/35 AsIs: s.Type#2/41 AsIs: e.Info#2/30 AsIs: )/33 AsIs: ':'/34 AsIs: (/38 AsIs: # TkVariable/40 AsIs: e.HIndex#2/36 AsIs: )/39 AsIs: )/29 } Tile{ AsIs: e.M#2/42 } Tile{ AsIs: e.E#2/44 } Tile{ AsIs: )/12 } Tile{ AsIs: >/18 AsIs: >/1 ]] }
          refalrts::alloc_name(vm, context[64], functions[efunc_AddContraction]);
          refalrts::copy_evar(vm, context[65], context[66], context[30], context[31]);
          refalrts::reinit_open_call(context[7]);
          refalrts::update_ident(context[61], identifiers[ident_Symbol]);
          refalrts::reinit_svar( context[8], context[41] );
          refalrts::reinit_close_bracket(context[17]);
          refalrts::reinit_open_bracket(context[21]);
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[0] );
          refalrts::push_stack( vm, context[18] );
          refalrts::push_stack( vm, context[7] );
          refalrts::link_brackets( context[21], context[12] );
          refalrts::link_brackets( context[28], context[29] );
          refalrts::link_brackets( context[38], context[39] );
          refalrts::link_brackets( context[32], context[33] );
          refalrts::link_brackets( context[11], context[17] );
          refalrts::link_brackets( context[48], context[49] );
          refalrts::link_brackets( context[59], context[60] );
          refalrts::link_brackets( context[52], context[53] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[18];
          res = refalrts::splice_evar( res, context[12], context[12] );
          res = refalrts::splice_evar( res, context[44], context[45] );
          res = refalrts::splice_evar( res, context[42], context[43] );
          res = refalrts::splice_evar( res, context[17], context[29] );
          res = refalrts::splice_evar( res, context[13], context[14] );
          res = refalrts::splice_evar( res, context[11], context[11] );
          res = refalrts::splice_evar( res, context[60], context[49] );
          res = refalrts::splice_evar( res, context[65], context[66] );
          res = refalrts::splice_evar( res, context[8], context[8] );
          res = refalrts::splice_evar( res, context[48], context[61] );
          res = refalrts::splice_evar( res, context[64], context[64] );
          refalrts::splice_to_freelist_open( vm, context[7], res );
          return refalrts::cSuccess;
        } while ( refalrts::open_evar_advance( context[42], context[43], context[24], context[25] ) );
      } while ( refalrts::open_evar_advance( context[22], context[23], context[19], context[20] ) );
    } while ( 0 );
    refalrts::stop_sentence(vm);

    refalrts::splice_to_freelist(vm, context[17], context[18]);
    continue;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Solution-PostProcess/4 (/7 e.Contractions#1/13 )/8 (/11 e.Assigns#1/15 )/12 >/1
    context[13] = context[5];
    context[14] = context[6];
    context[15] = context[9];
    context[16] = context[10];
    // closed e.Contractions#1 as range 13
    // closed e.Assigns#1 as range 15
    //DEBUG: e.Contractions#1: 13
    //DEBUG: e.Assigns#1: 15
    //13: e.Contractions#1
    //15: e.Assigns#1
    //20: e.Assigns#1

    refalrts::reset_allocator(vm);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::alloc_open_call(vm, context[17]);
    refalrts::alloc_name(vm, context[19], functions[efunc_gen_Solutionm_PostProcess_S4C1]);
    refalrts::copy_evar(vm, context[20], context[21], context[15], context[16]);
    refalrts::alloc_close_call(vm, context[18]);
    refalrts::push_stack( vm, context[18] );
    refalrts::push_stack( vm, context[17] );
    res = refalrts::splice_elem( res, context[18] );
    res = refalrts::splice_evar( res, context[20], context[21] );
    res = refalrts::splice_elem( res, context[19] );
    res = refalrts::splice_elem( res, context[17] );
    refalrts::use( res );
    refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
    if (rec_res != refalrts::cSuccess)
      return rec_res;
    refalrts::this_is_generated_function(vm);
    do {
      // </17 & Solution-PostProcess$4?1/21 e.B#2/22 (/28 (/32 # Symbol/35 s.Type#2/41 e.Info#2/30 )/33 ':'/34 (/38 # TkVariable/40 e.HIndex#2/36 )/39 )/29 e.M#2/42 (/48 (/52 # Symbol/55 s.Type#2/61 e.Info#2/62 )/53 ':'/54 (/58 # TkVariable/60 e.HIndex#2/64 )/59 )/49 e.E#2/44 >/18
      context[19] = 0;
      context[20] = 0;
      context[21] = refalrts::call_left( context[19], context[20], context[17], context[18] );
      context[22] = 0;
      context[23] = 0;
      refalrts::start_e_loop(vm);
      do {
        context[24] = context[19];
        context[25] = context[20];
        context[26] = 0;
        context[27] = 0;
        context[28] = refalrts::brackets_left( context[26], context[27], context[24], context[25] );
        if( ! context[28] )
          continue;
        refalrts::bracket_pointers(context[28], context[29]);
        context[30] = 0;
        context[31] = 0;
        context[32] = refalrts::brackets_left( context[30], context[31], context[26], context[27] );
        if( ! context[32] )
          continue;
        refalrts::bracket_pointers(context[32], context[33]);
        context[34] = refalrts::char_left( ':', context[26], context[27] );
        if( ! context[34] )
          continue;
        context[35] = refalrts::ident_left( identifiers[ident_Symbol], context[30], context[31] );
        if( ! context[35] )
          continue;
        context[36] = 0;
        context[37] = 0;
        context[38] = refalrts::brackets_left( context[36], context[37], context[26], context[27] );
        if( ! context[38] )
          continue;
        refalrts::bracket_pointers(context[38], context[39]);
        context[40] = refalrts::ident_left( identifiers[ident_TkVariable], context[36], context[37] );
        if( ! context[40] )
          continue;
        if( ! refalrts::empty_seq( context[26], context[27] ) )
          continue;
        // closed e.HIndex#2 as range 36
        if( ! refalrts::svar_left( context[41], context[30], context[31] ) )
          continue;
        // closed e.Info#2 as range 30
        context[42] = 0;
        context[43] = 0;
        refalrts::start_e_loop(vm);
        do {
          context[44] = context[24];
          context[45] = context[25];
          context[46] = 0;
          context[47] = 0;
          context[48] = refalrts::brackets_left( context[46], context[47], context[44], context[45] );
          if( ! context[48] )
            continue;
          refalrts::bracket_pointers(context[48], context[49]);
          context[50] = 0;
          context[51] = 0;
          context[52] = refalrts::brackets_left( context[50], context[51], context[46], context[47] );
          if( ! context[52] )
            continue;
          refalrts::bracket_pointers(context[52], context[53]);
          context[54] = refalrts::char_left( ':', context[46], context[47] );
          if( ! context[54] )
            continue;
          context[55] = refalrts::ident_left( identifiers[ident_Symbol], context[50], context[51] );
          if( ! context[55] )
            continue;
          context[56] = 0;
          context[57] = 0;
          context[58] = refalrts::brackets_left( context[56], context[57], context[46], context[47] );
          if( ! context[58] )
            continue;
          refalrts::bracket_pointers(context[58], context[59]);
          context[60] = refalrts::ident_left( identifiers[ident_TkVariable], context[56], context[57] );
          if( ! context[60] )
            continue;
          if( ! refalrts::empty_seq( context[46], context[47] ) )
            continue;
          if( ! refalrts::repeated_stvar_left( vm, context[61], context[41], context[50], context[51] ) )
            continue;
          if( ! refalrts::repeated_evar_left( vm, context[62], context[63], context[30], context[31], context[50], context[51] ) )
            continue;
          if( ! refalrts::empty_seq( context[50], context[51] ) )
            continue;
          if( ! refalrts::repeated_evar_left( vm, context[64], context[65], context[36], context[37], context[56], context[57] ) )
            continue;
          if( ! refalrts::empty_seq( context[56], context[57] ) )
            continue;
          // closed e.E#2 as range 44
          //DEBUG: e.Contractions#1: 13
          //DEBUG: e.Assigns#1: 15
          //DEBUG: e.B#2: 22
          //DEBUG: e.HIndex#2: 36
          //DEBUG: s.Type#2: 41
          //DEBUG: e.Info#2: 30
          //DEBUG: e.M#2: 42
          //DEBUG: e.E#2: 44

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} )/8 (/11 e.Assigns#1/15 )/12 {REMOVED TILE} {REMOVED TILE} (/48 (/52 # Symbol/55 s.Type#2/61 e.Info#2/62 )/53 ':'/54 (/58 # TkVariable/60 e.HIndex#2/64 )/59 )/49 {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 AsIs: & Solution-PostProcess/4 AsIs: (/7 } Tile{ AsIs: e.Contractions#1/13 } Tile{ HalfReuse: )/17 HalfReuse: (/21 AsIs: e.B#2/22 AsIs: (/28 AsIs: (/32 AsIs: # Symbol/35 AsIs: s.Type#2/41 AsIs: e.Info#2/30 AsIs: )/33 AsIs: ':'/34 AsIs: (/38 AsIs: # TkVariable/40 AsIs: e.HIndex#2/36 AsIs: )/39 AsIs: )/29 } Tile{ AsIs: e.M#2/42 } Tile{ AsIs: e.E#2/44 } Tile{ HalfReuse: )/18 AsIs: >/1 ]] }
          refalrts::reinit_close_bracket(context[17]);
          refalrts::reinit_open_bracket(context[21]);
          refalrts::reinit_close_bracket(context[18]);
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[0] );
          refalrts::link_brackets( context[21], context[18] );
          refalrts::link_brackets( context[28], context[29] );
          refalrts::link_brackets( context[38], context[39] );
          refalrts::link_brackets( context[32], context[33] );
          refalrts::link_brackets( context[7], context[17] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[18];
          res = refalrts::splice_evar( res, context[44], context[45] );
          res = refalrts::splice_evar( res, context[42], context[43] );
          res = refalrts::splice_evar( res, context[17], context[29] );
          res = refalrts::splice_evar( res, context[13], context[14] );
          refalrts::splice_to_freelist_open( vm, context[7], res );
          return refalrts::cSuccess;
        } while ( refalrts::open_evar_advance( context[42], context[43], context[24], context[25] ) );
      } while ( refalrts::open_evar_advance( context[22], context[23], context[19], context[20] ) );
    } while ( 0 );
    refalrts::stop_sentence(vm);

    refalrts::splice_to_freelist(vm, context[17], context[18]);
    continue;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Solution-PostProcess/4 (/7 e.Contractions#1/13 )/8 (/11 e.Assigns#1/15 )/12 >/1
    context[13] = context[5];
    context[14] = context[6];
    context[15] = context[9];
    context[16] = context[10];
    // closed e.Contractions#1 as range 13
    // closed e.Assigns#1 as range 15
    //DEBUG: e.Contractions#1: 13
    //DEBUG: e.Assigns#1: 15
    //13: e.Contractions#1
    //15: e.Assigns#1
    //20: e.Assigns#1

    refalrts::reset_allocator(vm);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::alloc_open_call(vm, context[17]);
    refalrts::alloc_name(vm, context[19], functions[efunc_gen_Solutionm_PostProcess_S5C1]);
    refalrts::copy_evar(vm, context[20], context[21], context[15], context[16]);
    refalrts::alloc_close_call(vm, context[18]);
    refalrts::push_stack( vm, context[18] );
    refalrts::push_stack( vm, context[17] );
    res = refalrts::splice_elem( res, context[18] );
    res = refalrts::splice_evar( res, context[20], context[21] );
    res = refalrts::splice_elem( res, context[19] );
    res = refalrts::splice_elem( res, context[17] );
    refalrts::use( res );
    refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
    if (rec_res != refalrts::cSuccess)
      return rec_res;
    refalrts::this_is_generated_function(vm);
    do {
      // </17 & Solution-PostProcess$5?1/21 e.B#2/22 (/28 (/32 # Symbol/35 e.Info1#2/30 )/33 ':'/34 (/38 # TkVariable/40 e.HIndex#2/36 )/39 )/29 e.M#2/41 (/47 (/51 # Symbol/54 e.Info2#2/49 )/52 ':'/53 (/57 # TkVariable/59 e.HIndex#2/60 )/58 )/48 e.E#2/43 >/18
      context[19] = 0;
      context[20] = 0;
      context[21] = refalrts::call_left( context[19], context[20], context[17], context[18] );
      context[22] = 0;
      context[23] = 0;
      refalrts::start_e_loop(vm);
      do {
        context[24] = context[19];
        context[25] = context[20];
        context[26] = 0;
        context[27] = 0;
        context[28] = refalrts::brackets_left( context[26], context[27], context[24], context[25] );
        if( ! context[28] )
          continue;
        refalrts::bracket_pointers(context[28], context[29]);
        context[30] = 0;
        context[31] = 0;
        context[32] = refalrts::brackets_left( context[30], context[31], context[26], context[27] );
        if( ! context[32] )
          continue;
        refalrts::bracket_pointers(context[32], context[33]);
        context[34] = refalrts::char_left( ':', context[26], context[27] );
        if( ! context[34] )
          continue;
        context[35] = refalrts::ident_left( identifiers[ident_Symbol], context[30], context[31] );
        if( ! context[35] )
          continue;
        context[36] = 0;
        context[37] = 0;
        context[38] = refalrts::brackets_left( context[36], context[37], context[26], context[27] );
        if( ! context[38] )
          continue;
        refalrts::bracket_pointers(context[38], context[39]);
        context[40] = refalrts::ident_left( identifiers[ident_TkVariable], context[36], context[37] );
        if( ! context[40] )
          continue;
        if( ! refalrts::empty_seq( context[26], context[27] ) )
          continue;
        // closed e.Info1#2 as range 30
        // closed e.HIndex#2 as range 36
        context[41] = 0;
        context[42] = 0;
        refalrts::start_e_loop(vm);
        do {
          context[43] = context[24];
          context[44] = context[25];
          context[45] = 0;
          context[46] = 0;
          context[47] = refalrts::brackets_left( context[45], context[46], context[43], context[44] );
          if( ! context[47] )
            continue;
          refalrts::bracket_pointers(context[47], context[48]);
          context[49] = 0;
          context[50] = 0;
          context[51] = refalrts::brackets_left( context[49], context[50], context[45], context[46] );
          if( ! context[51] )
            continue;
          refalrts::bracket_pointers(context[51], context[52]);
          context[53] = refalrts::char_left( ':', context[45], context[46] );
          if( ! context[53] )
            continue;
          context[54] = refalrts::ident_left( identifiers[ident_Symbol], context[49], context[50] );
          if( ! context[54] )
            continue;
          context[55] = 0;
          context[56] = 0;
          context[57] = refalrts::brackets_left( context[55], context[56], context[45], context[46] );
          if( ! context[57] )
            continue;
          refalrts::bracket_pointers(context[57], context[58]);
          context[59] = refalrts::ident_left( identifiers[ident_TkVariable], context[55], context[56] );
          if( ! context[59] )
            continue;
          if( ! refalrts::empty_seq( context[45], context[46] ) )
            continue;
          if( ! refalrts::repeated_evar_left( vm, context[60], context[61], context[36], context[37], context[55], context[56] ) )
            continue;
          if( ! refalrts::empty_seq( context[55], context[56] ) )
            continue;
          // closed e.Info2#2 as range 49
          // closed e.E#2 as range 43
          //DEBUG: e.Contractions#1: 13
          //DEBUG: e.Assigns#1: 15
          //DEBUG: e.B#2: 22
          //DEBUG: e.Info1#2: 30
          //DEBUG: e.HIndex#2: 36
          //DEBUG: e.M#2: 41
          //DEBUG: e.Info2#2: 49
          //DEBUG: e.E#2: 43

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} </0 & Solution-PostProcess/4 (/7 e.Contractions#1/13 )/8 (/11 e.Assigns#1/15 )/12 </17 & Solution-PostProcess$5?1/21 e.B#2/22 (/28 (/32 # Symbol/35 e.Info1#2/30 )/33 ':'/34 (/38 # TkVariable/40 e.HIndex#2/36 )/39 )/29 e.M#2/41 (/47 (/51 # Symbol/54 e.Info2#2/49 )/52 ':'/53 (/57 # TkVariable/59 e.HIndex#2/60 )/58 )/48 e.E#2/43 >/18 >/1 {REMOVED TILE}
          //RESULT: Tile{ [[ } Tile{ ]] }
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = arg_end->next;
          refalrts::splice_to_freelist_open( vm, trash_prev, res );
          return refalrts::cSuccess;
        } while ( refalrts::open_evar_advance( context[41], context[42], context[24], context[25] ) );
      } while ( refalrts::open_evar_advance( context[22], context[23], context[19], context[20] ) );
    } while ( 0 );
    refalrts::stop_sentence(vm);

    refalrts::splice_to_freelist(vm, context[17], context[18]);
    continue;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Solution-PostProcess/4 (/7 e.Contractions#1/13 )/8 (/11 e.Assigns#1/15 )/12 >/1
    context[13] = context[5];
    context[14] = context[6];
    context[15] = context[9];
    context[16] = context[10];
    // closed e.Contractions#1 as range 13
    // closed e.Assigns#1 as range 15
    //DEBUG: e.Contractions#1: 13
    //DEBUG: e.Assigns#1: 15
    //13: e.Contractions#1
    //15: e.Assigns#1
    //20: e.Assigns#1

    refalrts::reset_allocator(vm);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::alloc_open_call(vm, context[17]);
    refalrts::alloc_name(vm, context[19], functions[efunc_gen_Solutionm_PostProcess_S6C1]);
    refalrts::copy_evar(vm, context[20], context[21], context[15], context[16]);
    refalrts::alloc_close_call(vm, context[18]);
    refalrts::push_stack( vm, context[18] );
    refalrts::push_stack( vm, context[17] );
    res = refalrts::splice_elem( res, context[18] );
    res = refalrts::splice_evar( res, context[20], context[21] );
    res = refalrts::splice_elem( res, context[19] );
    res = refalrts::splice_elem( res, context[17] );
    refalrts::use( res );
    refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
    if (rec_res != refalrts::cSuccess)
      return rec_res;
    refalrts::this_is_generated_function(vm);
    do {
      // </17 & Solution-PostProcess$6?1/21 e.B#2/22 (/28 e.Expr#2/26 ':'/35 (/32 # TkVariable/34 e.HIndex#2/30 )/33 )/29 e.M#2/36 (/42 e.Expr#2/50 ':'/49 (/46 # TkVariable/48 e.HIndex#2/52 )/47 )/43 e.E#2/38 >/18
      context[19] = 0;
      context[20] = 0;
      context[21] = refalrts::call_left( context[19], context[20], context[17], context[18] );
      context[22] = 0;
      context[23] = 0;
      refalrts::start_e_loop(vm);
      do {
        context[24] = context[19];
        context[25] = context[20];
        context[26] = 0;
        context[27] = 0;
        context[28] = refalrts::brackets_left( context[26], context[27], context[24], context[25] );
        if( ! context[28] )
          continue;
        refalrts::bracket_pointers(context[28], context[29]);
        context[30] = 0;
        context[31] = 0;
        context[32] = refalrts::brackets_right( context[30], context[31], context[26], context[27] );
        if( ! context[32] )
          continue;
        refalrts::bracket_pointers(context[32], context[33]);
        context[34] = refalrts::ident_left( identifiers[ident_TkVariable], context[30], context[31] );
        if( ! context[34] )
          continue;
        context[35] = refalrts::char_right( ':', context[26], context[27] );
        if( ! context[35] )
          continue;
        // closed e.Expr#2 as range 26
        // closed e.HIndex#2 as range 30
        context[36] = 0;
        context[37] = 0;
        refalrts::start_e_loop(vm);
        do {
          context[38] = context[24];
          context[39] = context[25];
          context[40] = 0;
          context[41] = 0;
          context[42] = refalrts::brackets_left( context[40], context[41], context[38], context[39] );
          if( ! context[42] )
            continue;
          refalrts::bracket_pointers(context[42], context[43]);
          context[44] = 0;
          context[45] = 0;
          context[46] = refalrts::brackets_right( context[44], context[45], context[40], context[41] );
          if( ! context[46] )
            continue;
          refalrts::bracket_pointers(context[46], context[47]);
          context[48] = refalrts::ident_left( identifiers[ident_TkVariable], context[44], context[45] );
          if( ! context[48] )
            continue;
          context[49] = refalrts::char_right( ':', context[40], context[41] );
          if( ! context[49] )
            continue;
          if( ! refalrts::repeated_evar_left( vm, context[50], context[51], context[26], context[27], context[40], context[41] ) )
            continue;
          if( ! refalrts::empty_seq( context[40], context[41] ) )
            continue;
          if( ! refalrts::repeated_evar_left( vm, context[52], context[53], context[30], context[31], context[44], context[45] ) )
            continue;
          if( ! refalrts::empty_seq( context[44], context[45] ) )
            continue;
          // closed e.E#2 as range 38
          //DEBUG: e.Contractions#1: 13
          //DEBUG: e.Assigns#1: 15
          //DEBUG: e.B#2: 22
          //DEBUG: e.Expr#2: 26
          //DEBUG: e.HIndex#2: 30
          //DEBUG: e.M#2: 36
          //DEBUG: e.E#2: 38

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} )/8 (/11 e.Assigns#1/15 )/12 {REMOVED TILE} {REMOVED TILE} (/42 e.Expr#2/50 ':'/49 (/46 # TkVariable/48 e.HIndex#2/52 )/47 )/43 {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 AsIs: & Solution-PostProcess/4 AsIs: (/7 } Tile{ AsIs: e.Contractions#1/13 } Tile{ HalfReuse: )/17 HalfReuse: (/21 AsIs: e.B#2/22 AsIs: (/28 AsIs: e.Expr#2/26 AsIs: ':'/35 AsIs: (/32 AsIs: # TkVariable/34 AsIs: e.HIndex#2/30 AsIs: )/33 AsIs: )/29 } Tile{ AsIs: e.M#2/36 } Tile{ AsIs: e.E#2/38 } Tile{ HalfReuse: )/18 AsIs: >/1 ]] }
          refalrts::reinit_close_bracket(context[17]);
          refalrts::reinit_open_bracket(context[21]);
          refalrts::reinit_close_bracket(context[18]);
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[0] );
          refalrts::link_brackets( context[21], context[18] );
          refalrts::link_brackets( context[28], context[29] );
          refalrts::link_brackets( context[32], context[33] );
          refalrts::link_brackets( context[7], context[17] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[18];
          res = refalrts::splice_evar( res, context[38], context[39] );
          res = refalrts::splice_evar( res, context[36], context[37] );
          res = refalrts::splice_evar( res, context[17], context[29] );
          res = refalrts::splice_evar( res, context[13], context[14] );
          refalrts::splice_to_freelist_open( vm, context[7], res );
          return refalrts::cSuccess;
        } while ( refalrts::open_evar_advance( context[36], context[37], context[24], context[25] ) );
      } while ( refalrts::open_evar_advance( context[22], context[23], context[19], context[20] ) );
    } while ( 0 );
    refalrts::stop_sentence(vm);

    refalrts::splice_to_freelist(vm, context[17], context[18]);
    continue;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Solution-PostProcess/4 (/7 e.Contractions#1/13 )/8 (/11 e.Assigns#1/15 )/12 >/1
    context[13] = context[5];
    context[14] = context[6];
    context[15] = context[9];
    context[16] = context[10];
    // closed e.Contractions#1 as range 13
    // closed e.Assigns#1 as range 15
    //DEBUG: e.Contractions#1: 13
    //DEBUG: e.Assigns#1: 15
    //13: e.Contractions#1
    //15: e.Assigns#1
    //20: e.Contractions#1

    refalrts::reset_allocator(vm);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::alloc_open_call(vm, context[17]);
    refalrts::alloc_name(vm, context[19], functions[efunc_gen_Solutionm_PostProcess_S7C1]);
    refalrts::copy_evar(vm, context[20], context[21], context[13], context[14]);
    refalrts::alloc_close_call(vm, context[18]);
    refalrts::push_stack( vm, context[18] );
    refalrts::push_stack( vm, context[17] );
    res = refalrts::splice_elem( res, context[18] );
    res = refalrts::splice_evar( res, context[20], context[21] );
    res = refalrts::splice_elem( res, context[19] );
    res = refalrts::splice_elem( res, context[17] );
    refalrts::use( res );
    refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
    if (rec_res != refalrts::cSuccess)
      return rec_res;
    refalrts::this_is_generated_function(vm);
    do {
      // </17 & Solution-PostProcess$7?1/21 e.B#2/22 (/28 e.Expr#2/26 ':'/35 (/32 # TkVariable/34 e.HIndex#2/30 )/33 )/29 e.M#2/36 (/42 e.Expr#2/50 ':'/49 (/46 # TkVariable/48 e.HIndex#2/52 )/47 )/43 e.E#2/38 >/18
      context[19] = 0;
      context[20] = 0;
      context[21] = refalrts::call_left( context[19], context[20], context[17], context[18] );
      context[22] = 0;
      context[23] = 0;
      refalrts::start_e_loop(vm);
      do {
        context[24] = context[19];
        context[25] = context[20];
        context[26] = 0;
        context[27] = 0;
        context[28] = refalrts::brackets_left( context[26], context[27], context[24], context[25] );
        if( ! context[28] )
          continue;
        refalrts::bracket_pointers(context[28], context[29]);
        context[30] = 0;
        context[31] = 0;
        context[32] = refalrts::brackets_right( context[30], context[31], context[26], context[27] );
        if( ! context[32] )
          continue;
        refalrts::bracket_pointers(context[32], context[33]);
        context[34] = refalrts::ident_left( identifiers[ident_TkVariable], context[30], context[31] );
        if( ! context[34] )
          continue;
        context[35] = refalrts::char_right( ':', context[26], context[27] );
        if( ! context[35] )
          continue;
        // closed e.Expr#2 as range 26
        // closed e.HIndex#2 as range 30
        context[36] = 0;
        context[37] = 0;
        refalrts::start_e_loop(vm);
        do {
          context[38] = context[24];
          context[39] = context[25];
          context[40] = 0;
          context[41] = 0;
          context[42] = refalrts::brackets_left( context[40], context[41], context[38], context[39] );
          if( ! context[42] )
            continue;
          refalrts::bracket_pointers(context[42], context[43]);
          context[44] = 0;
          context[45] = 0;
          context[46] = refalrts::brackets_right( context[44], context[45], context[40], context[41] );
          if( ! context[46] )
            continue;
          refalrts::bracket_pointers(context[46], context[47]);
          context[48] = refalrts::ident_left( identifiers[ident_TkVariable], context[44], context[45] );
          if( ! context[48] )
            continue;
          context[49] = refalrts::char_right( ':', context[40], context[41] );
          if( ! context[49] )
            continue;
          if( ! refalrts::repeated_evar_left( vm, context[50], context[51], context[26], context[27], context[40], context[41] ) )
            continue;
          if( ! refalrts::empty_seq( context[40], context[41] ) )
            continue;
          if( ! refalrts::repeated_evar_left( vm, context[52], context[53], context[30], context[31], context[44], context[45] ) )
            continue;
          if( ! refalrts::empty_seq( context[44], context[45] ) )
            continue;
          // closed e.E#2 as range 38
          //DEBUG: e.Contractions#1: 13
          //DEBUG: e.Assigns#1: 15
          //DEBUG: e.B#2: 22
          //DEBUG: e.Expr#2: 26
          //DEBUG: e.HIndex#2: 30
          //DEBUG: e.M#2: 36
          //DEBUG: e.E#2: 38

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} )/8 (/11 e.Assigns#1/15 )/12 {REMOVED TILE} {REMOVED TILE} (/42 e.Expr#2/50 ':'/49 (/46 # TkVariable/48 e.HIndex#2/52 )/47 )/43 {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 AsIs: & Solution-PostProcess/4 AsIs: (/7 } Tile{ AsIs: e.Contractions#1/13 } Tile{ HalfReuse: )/17 HalfReuse: (/21 AsIs: e.B#2/22 AsIs: (/28 AsIs: e.Expr#2/26 AsIs: ':'/35 AsIs: (/32 AsIs: # TkVariable/34 AsIs: e.HIndex#2/30 AsIs: )/33 AsIs: )/29 } Tile{ AsIs: e.M#2/36 } Tile{ AsIs: e.E#2/38 } Tile{ HalfReuse: )/18 AsIs: >/1 ]] }
          refalrts::reinit_close_bracket(context[17]);
          refalrts::reinit_open_bracket(context[21]);
          refalrts::reinit_close_bracket(context[18]);
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[0] );
          refalrts::link_brackets( context[21], context[18] );
          refalrts::link_brackets( context[28], context[29] );
          refalrts::link_brackets( context[32], context[33] );
          refalrts::link_brackets( context[7], context[17] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[18];
          res = refalrts::splice_evar( res, context[38], context[39] );
          res = refalrts::splice_evar( res, context[36], context[37] );
          res = refalrts::splice_evar( res, context[17], context[29] );
          res = refalrts::splice_evar( res, context[13], context[14] );
          refalrts::splice_to_freelist_open( vm, context[7], res );
          return refalrts::cSuccess;
        } while ( refalrts::open_evar_advance( context[36], context[37], context[24], context[25] ) );
      } while ( refalrts::open_evar_advance( context[22], context[23], context[19], context[20] ) );
    } while ( 0 );
    refalrts::stop_sentence(vm);

    refalrts::splice_to_freelist(vm, context[17], context[18]);
    continue;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Solution-PostProcess/4 (/7 e.Contractions#1/13 )/8 (/11 e.Assigns#1/15 )/12 >/1
    context[13] = context[5];
    context[14] = context[6];
    context[15] = context[9];
    context[16] = context[10];
    // closed e.Contractions#1 as range 13
    // closed e.Assigns#1 as range 15
    //DEBUG: e.Contractions#1: 13
    //DEBUG: e.Assigns#1: 15
    //13: e.Contractions#1
    //15: e.Assigns#1
    //20: e.Assigns#1

    refalrts::reset_allocator(vm);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::alloc_open_call(vm, context[17]);
    refalrts::alloc_name(vm, context[19], functions[efunc_gen_Solutionm_PostProcess_S8C1]);
    refalrts::copy_evar(vm, context[20], context[21], context[15], context[16]);
    refalrts::alloc_close_call(vm, context[18]);
    refalrts::push_stack( vm, context[18] );
    refalrts::push_stack( vm, context[17] );
    res = refalrts::splice_elem( res, context[18] );
    res = refalrts::splice_evar( res, context[20], context[21] );
    res = refalrts::splice_elem( res, context[19] );
    res = refalrts::splice_elem( res, context[17] );
    refalrts::use( res );
    refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
    if (rec_res != refalrts::cSuccess)
      return rec_res;
    refalrts::this_is_generated_function(vm);
    do {
      // </17 & Solution-PostProcess$8?1/21 e.B#2/22 (/28 e.Expr1#2/26 ':'/35 (/32 # TkVariable/34 e.HIndex#2/30 )/33 )/29 e.M#2/36 (/42 e.Expr2#2/40 ':'/49 (/46 # TkVariable/48 e.HIndex#2/50 )/47 )/43 e.E#2/38 >/18
      context[19] = 0;
      context[20] = 0;
      context[21] = refalrts::call_left( context[19], context[20], context[17], context[18] );
      context[22] = 0;
      context[23] = 0;
      refalrts::start_e_loop(vm);
      do {
        context[24] = context[19];
        context[25] = context[20];
        context[26] = 0;
        context[27] = 0;
        context[28] = refalrts::brackets_left( context[26], context[27], context[24], context[25] );
        if( ! context[28] )
          continue;
        refalrts::bracket_pointers(context[28], context[29]);
        context[30] = 0;
        context[31] = 0;
        context[32] = refalrts::brackets_right( context[30], context[31], context[26], context[27] );
        if( ! context[32] )
          continue;
        refalrts::bracket_pointers(context[32], context[33]);
        context[34] = refalrts::ident_left( identifiers[ident_TkVariable], context[30], context[31] );
        if( ! context[34] )
          continue;
        context[35] = refalrts::char_right( ':', context[26], context[27] );
        if( ! context[35] )
          continue;
        // closed e.Expr1#2 as range 26
        // closed e.HIndex#2 as range 30
        context[36] = 0;
        context[37] = 0;
        refalrts::start_e_loop(vm);
        do {
          context[38] = context[24];
          context[39] = context[25];
          context[40] = 0;
          context[41] = 0;
          context[42] = refalrts::brackets_left( context[40], context[41], context[38], context[39] );
          if( ! context[42] )
            continue;
          refalrts::bracket_pointers(context[42], context[43]);
          context[44] = 0;
          context[45] = 0;
          context[46] = refalrts::brackets_right( context[44], context[45], context[40], context[41] );
          if( ! context[46] )
            continue;
          refalrts::bracket_pointers(context[46], context[47]);
          context[48] = refalrts::ident_left( identifiers[ident_TkVariable], context[44], context[45] );
          if( ! context[48] )
            continue;
          context[49] = refalrts::char_right( ':', context[40], context[41] );
          if( ! context[49] )
            continue;
          if( ! refalrts::repeated_evar_left( vm, context[50], context[51], context[30], context[31], context[44], context[45] ) )
            continue;
          if( ! refalrts::empty_seq( context[44], context[45] ) )
            continue;
          // closed e.Expr2#2 as range 40
          // closed e.E#2 as range 38
          //DEBUG: e.Contractions#1: 13
          //DEBUG: e.Assigns#1: 15
          //DEBUG: e.B#2: 22
          //DEBUG: e.Expr1#2: 26
          //DEBUG: e.HIndex#2: 30
          //DEBUG: e.M#2: 36
          //DEBUG: e.Expr2#2: 40
          //DEBUG: e.E#2: 38

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} </0 & Solution-PostProcess/4 (/7 e.Contractions#1/13 )/8 (/11 e.Assigns#1/15 )/12 </17 & Solution-PostProcess$8?1/21 e.B#2/22 (/28 e.Expr1#2/26 ':'/35 (/32 # TkVariable/34 e.HIndex#2/30 )/33 )/29 e.M#2/36 (/42 e.Expr2#2/40 ':'/49 (/46 # TkVariable/48 e.HIndex#2/50 )/47 )/43 e.E#2/38 >/18 {REMOVED TILE}
          //RESULT: Tile{ [[ } Tile{ HalfReuse: # Undefined/1 ]] }
          refalrts::reinit_ident(context[1], identifiers[ident_Undefined]);
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[1];
          refalrts::splice_to_freelist_open( vm, trash_prev, res );
          return refalrts::cSuccess;
        } while ( refalrts::open_evar_advance( context[36], context[37], context[24], context[25] ) );
      } while ( refalrts::open_evar_advance( context[22], context[23], context[19], context[20] ) );
    } while ( 0 );
    refalrts::stop_sentence(vm);

    refalrts::splice_to_freelist(vm, context[17], context[18]);
    continue;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Solution-PostProcess/4 (/7 e.Contractions#1/5 )/8 (/11 e.Assigns#1/9 )/12 >/1
  // closed e.Contractions#1 as range 5
  // closed e.Assigns#1 as range 9
  //DEBUG: e.Contractions#1: 5
  //DEBUG: e.Assigns#1: 9

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: # Success/4 AsIs: (/7 AsIs: e.Contractions#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.Assigns#1/9 AsIs: )/12 } Tile{ ]] }
  refalrts::reinit_ident(context[4], identifiers[ident_Success]);
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[4], context[12] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Solutionm_PostProcess("Solution-PostProcess", COOKIE1_, COOKIE2_, func_Solutionm_PostProcess);


static refalrts::FnResult func_gen_Solvem_Aux_S1B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 8 elems
  refalrts::Iter context[8];
  refalrts::zeros( context, 8 );
  // </0 & Solve-Aux$1:1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Solve-Aux$1:1/4 s.new#1/5 e.new#2/2 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 2
  do {
    // </0 & Solve-Aux$1:1/4 # Success/5 e.PRTC#4/6 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_Success], context[5] ) )
      continue;
    // closed e.PRTC#4 as range 6
    //DEBUG: e.PRTC#4: 6

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </4 HalfReuse: & Solve-Aux/5 AsIs: e.PRTC#4/6 AsIs: >/1 ]] }
    refalrts::reinit_open_call(context[4]);
    refalrts::reinit_name(context[5], functions[efunc_Solvem_Aux]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[4];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Solve-Aux$1:1/4 # Failure/5 >/1
  if( ! refalrts::ident_term( identifiers[ident_Failure], context[5] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Solve-Aux$1:1/4 # Failure/5 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Solvem_Aux_S1B1("Solve-Aux$1:1", COOKIE1_, COOKIE2_, func_gen_Solvem_Aux_S1B1);


static refalrts::FnResult func_gen_Solvem_Aux_S2B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 8 elems
  refalrts::Iter context[8];
  refalrts::zeros( context, 8 );
  // </0 & Solve-Aux$2:1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Solve-Aux$2:1/4 s.new#1/5 e.new#2/2 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 2
  do {
    // </0 & Solve-Aux$2:1/4 # Success/5 e.PRTC#4/6 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_Success], context[5] ) )
      continue;
    // closed e.PRTC#4 as range 6
    //DEBUG: e.PRTC#4: 6

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </4 HalfReuse: & Solve-Aux/5 AsIs: e.PRTC#4/6 AsIs: >/1 ]] }
    refalrts::reinit_open_call(context[4]);
    refalrts::reinit_name(context[5], functions[efunc_Solvem_Aux]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[4];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Solve-Aux$2:1/4 # Failure/5 >/1
  if( ! refalrts::ident_term( identifiers[ident_Failure], context[5] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Solve-Aux$2:1/4 # Failure/5 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Solvem_Aux_S2B1("Solve-Aux$2:1", COOKIE1_, COOKIE2_, func_gen_Solvem_Aux_S2B1);


static refalrts::FnResult func_gen_Solvem_Aux_S3A6(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  // </0 & Solve-Aux$3=6/4 (/7 e.UsedVars#5/5 )/8 (/11 e.Branch1#6/9 )/12 e.Branch2#7/2 >/1
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
  // closed e.UsedVars#5 as range 5
  // closed e.Branch1#6 as range 9
  // closed e.Branch2#7 as range 2
  //DEBUG: e.UsedVars#5: 5
  //DEBUG: e.Branch1#6: 9
  //DEBUG: e.Branch2#7: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Solve-Aux/4 AsIs: (/7 AsIs: e.UsedVars#5/5 AsIs: )/8 } Tile{ AsIs: e.Branch1#6/9 } >/13 </14 & Solve-Aux/15 Tile{ AsIs: (/11 } e.UsedVars#5/5/16 Tile{ AsIs: )/12 AsIs: e.Branch2#7/2 AsIs: >/1 ]] }
  refalrts::alloc_close_call(vm, context[13]);
  refalrts::alloc_open_call(vm, context[14]);
  refalrts::alloc_name(vm, context[15], functions[efunc_Solvem_Aux]);
  refalrts::copy_evar(vm, context[16], context[17], context[5], context[6]);
  refalrts::update_name(context[4], functions[efunc_Solvem_Aux]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[14] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::push_stack( vm, context[13] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[12];
  res = refalrts::splice_evar( res, context[16], context[17] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  res = refalrts::splice_evar( res, context[13], context[15] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Solvem_Aux_S3A6("Solve-Aux$3=6", COOKIE1_, COOKIE2_, func_gen_Solvem_Aux_S3A6);


static refalrts::FnResult func_gen_Solvem_Aux_S3A5(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 56 elems
  refalrts::Iter context[56];
  refalrts::zeros( context, 56 );
  // </0 & Solve-Aux$3=5/4 (/7 e.UsedVars#5/5 )/8 t.Pt#1/9 (/13 e.tIdx#4/11 )/14 (/17 e.eIdx#5/15 )/18 (/21 e.Contrs#1/19 )/22 (/25 e.Pe#1/23 )/26 t.Ht#1/27 (/31 e.He#1/29 )/32 (/35 e.Equations#1/33 )/36 (/39 e.Assigns#1/37 )/40 e.Branch1#6/2 >/1
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
  // closed e.UsedVars#5 as range 5
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
  // closed e.tIdx#4 as range 11
  // closed e.eIdx#5 as range 15
  // closed e.Contrs#1 as range 19
  // closed e.Pe#1 as range 23
  context[28] = refalrts::tvar_left( context[27], context[2], context[3] );
  if( ! context[28] )
    return refalrts::cRecognitionImpossible;
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
  context[37] = 0;
  context[38] = 0;
  context[39] = refalrts::brackets_left( context[37], context[38], context[2], context[3] );
  if( ! context[39] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[39], context[40]);
  // closed e.He#1 as range 29
  // closed e.Equations#1 as range 33
  // closed e.Assigns#1 as range 37
  // closed e.Branch1#6 as range 2
  //DEBUG: e.UsedVars#5: 5
  //DEBUG: t.Pt#1: 9
  //DEBUG: e.tIdx#4: 11
  //DEBUG: e.eIdx#5: 15
  //DEBUG: e.Contrs#1: 19
  //DEBUG: e.Pe#1: 23
  //DEBUG: t.Ht#1: 27
  //DEBUG: e.He#1: 29
  //DEBUG: e.Equations#1: 33
  //DEBUG: e.Assigns#1: 37
  //DEBUG: e.Branch1#6: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Solve-Aux$3=6/4 AsIs: (/7 AsIs: e.UsedVars#5/5 AsIs: )/8 } (/41 Tile{ AsIs: e.Branch1#6/2 } Tile{ AsIs: )/36 } </42 Tile{ HalfReuse: & AddContraction/32 AsIs: (/35 } Tile{ AsIs: t.Pt#1/9 } ':'/43 Tile{ AsIs: (/31 } # TkVariable/44 Tile{ HalfReuse: 't'/13 AsIs: e.tIdx#4/11 AsIs: )/14 AsIs: (/17 } # TkVariable/45 'e'/46 Tile{ AsIs: e.eIdx#5/15 } )/47 Tile{ AsIs: )/18 AsIs: (/21 AsIs: e.Contrs#1/19 AsIs: )/22 AsIs: (/25 } (/48 t.Pt#1/9/49 Tile{ AsIs: e.Pe#1/23 } )/51 ':'/52 Tile{ HalfReuse: (/26 AsIs: t.Ht#1/27 } Tile{ AsIs: e.He#1/29 } )/53 )/54 Tile{ AsIs: e.Equations#1/33 } Tile{ AsIs: (/39 AsIs: e.Assigns#1/37 AsIs: )/40 } >/55 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[41]);
  refalrts::alloc_open_call(vm, context[42]);
  refalrts::alloc_char(vm, context[43], ':');
  refalrts::alloc_ident(vm, context[44], identifiers[ident_TkVariable]);
  refalrts::alloc_ident(vm, context[45], identifiers[ident_TkVariable]);
  refalrts::alloc_char(vm, context[46], 'e');
  refalrts::alloc_close_bracket(vm, context[47]);
  refalrts::alloc_open_bracket(vm, context[48]);
  refalrts::copy_evar(vm, context[49], context[50], context[9], context[10]);
  refalrts::alloc_close_bracket(vm, context[51]);
  refalrts::alloc_char(vm, context[52], ':');
  refalrts::alloc_close_bracket(vm, context[53]);
  refalrts::alloc_close_bracket(vm, context[54]);
  refalrts::alloc_close_call(vm, context[55]);
  refalrts::update_name(context[4], functions[efunc_gen_Solvem_Aux_S3A6]);
  refalrts::reinit_name(context[32], functions[efunc_AddContraction]);
  refalrts::reinit_char(context[13], 't');
  refalrts::reinit_open_bracket(context[26]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[55] );
  refalrts::push_stack( vm, context[42] );
  refalrts::link_brackets( context[39], context[40] );
  refalrts::link_brackets( context[25], context[54] );
  refalrts::link_brackets( context[26], context[53] );
  refalrts::link_brackets( context[48], context[51] );
  refalrts::link_brackets( context[21], context[22] );
  refalrts::link_brackets( context[35], context[18] );
  refalrts::link_brackets( context[17], context[47] );
  refalrts::link_brackets( context[31], context[14] );
  refalrts::link_brackets( context[41], context[36] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[55], context[55] );
  res = refalrts::splice_evar( res, context[39], context[40] );
  res = refalrts::splice_evar( res, context[33], context[34] );
  res = refalrts::splice_evar( res, context[53], context[54] );
  res = refalrts::splice_evar( res, context[29], context[30] );
  res = refalrts::splice_evar( res, context[26], context[28] );
  res = refalrts::splice_evar( res, context[51], context[52] );
  res = refalrts::splice_evar( res, context[23], context[24] );
  res = refalrts::splice_evar( res, context[48], context[50] );
  res = refalrts::splice_evar( res, context[18], context[25] );
  res = refalrts::splice_evar( res, context[47], context[47] );
  res = refalrts::splice_evar( res, context[15], context[16] );
  res = refalrts::splice_evar( res, context[45], context[46] );
  res = refalrts::splice_evar( res, context[13], context[17] );
  res = refalrts::splice_evar( res, context[44], context[44] );
  res = refalrts::splice_evar( res, context[31], context[31] );
  res = refalrts::splice_evar( res, context[43], context[43] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[32], context[35] );
  res = refalrts::splice_evar( res, context[42], context[42] );
  res = refalrts::splice_evar( res, context[36], context[36] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[41], context[41] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Solvem_Aux_S3A5("Solve-Aux$3=5", COOKIE1_, COOKIE2_, func_gen_Solvem_Aux_S3A5);


static refalrts::FnResult func_gen_Solvem_Aux_S3A4(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 70 elems
  refalrts::Iter context[70];
  refalrts::zeros( context, 70 );
  // </0 & Solve-Aux$3=4/4 t.Pt#1/5 (/9 e.tIdx#4/7 )/10 (/13 e.Contrs#1/11 )/14 (/17 e.Pe#1/15 )/18 t.Ht#1/19 (/23 e.He#1/21 )/24 (/27 e.Equations#1/25 )/28 (/31 e.Assigns#1/29 )/32 (/35 e.UsedVars#5/33 )/36 'e'/37 e.eIdx#5/2 >/1
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
  context[15] = 0;
  context[16] = 0;
  context[17] = refalrts::brackets_left( context[15], context[16], context[2], context[3] );
  if( ! context[17] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[17], context[18]);
  // closed e.tIdx#4 as range 7
  // closed e.Contrs#1 as range 11
  // closed e.Pe#1 as range 15
  context[20] = refalrts::tvar_left( context[19], context[2], context[3] );
  if( ! context[20] )
    return refalrts::cRecognitionImpossible;
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
  context[37] = refalrts::char_left( 'e', context[2], context[3] );
  if( ! context[37] )
    return refalrts::cRecognitionImpossible;
  // closed e.He#1 as range 21
  // closed e.Equations#1 as range 25
  // closed e.Assigns#1 as range 29
  // closed e.UsedVars#5 as range 33
  // closed e.eIdx#5 as range 2
  //DEBUG: t.Pt#1: 5
  //DEBUG: e.tIdx#4: 7
  //DEBUG: e.Contrs#1: 11
  //DEBUG: e.Pe#1: 15
  //DEBUG: t.Ht#1: 19
  //DEBUG: e.He#1: 21
  //DEBUG: e.Equations#1: 25
  //DEBUG: e.Assigns#1: 29
  //DEBUG: e.UsedVars#5: 33
  //DEBUG: e.eIdx#5: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Solve-Aux$3=5/4 } (/38 Tile{ AsIs: e.UsedVars#5/33 } )/39 Tile{ AsIs: t.Pt#1/5 AsIs: (/9 } Tile{ AsIs: e.tIdx#4/7 } )/40 (/41 Tile{ AsIs: e.eIdx#5/2 } Tile{ AsIs: )/10 AsIs: (/13 AsIs: e.Contrs#1/11 AsIs: )/14 AsIs: (/17 AsIs: e.Pe#1/15 AsIs: )/18 AsIs: t.Ht#1/19 AsIs: (/23 AsIs: e.He#1/21 AsIs: )/24 AsIs: (/27 AsIs: e.Equations#1/25 AsIs: )/28 AsIs: (/31 AsIs: e.Assigns#1/29 AsIs: )/32 HalfReuse: </35 } & AddContraction/42 (/43 t.Pt#1/5/44 ':'/46 )/47 (/48 e.Contrs#1/11/49 )/51 (/52 (/53 e.Pe#1/15/54 Tile{ AsIs: )/36 Reuse: ':'/37 } (/56 t.Ht#1/19/57 e.He#1/21/59 )/61 )/62 e.Equations#1/25/63 (/65 e.Assigns#1/29/66 )/68 >/69 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[38]);
  refalrts::alloc_close_bracket(vm, context[39]);
  refalrts::alloc_close_bracket(vm, context[40]);
  refalrts::alloc_open_bracket(vm, context[41]);
  refalrts::alloc_name(vm, context[42], functions[efunc_AddContraction]);
  refalrts::alloc_open_bracket(vm, context[43]);
  refalrts::copy_evar(vm, context[44], context[45], context[5], context[6]);
  refalrts::alloc_char(vm, context[46], ':');
  refalrts::alloc_close_bracket(vm, context[47]);
  refalrts::alloc_open_bracket(vm, context[48]);
  refalrts::copy_evar(vm, context[49], context[50], context[11], context[12]);
  refalrts::alloc_close_bracket(vm, context[51]);
  refalrts::alloc_open_bracket(vm, context[52]);
  refalrts::alloc_open_bracket(vm, context[53]);
  refalrts::copy_evar(vm, context[54], context[55], context[15], context[16]);
  refalrts::alloc_open_bracket(vm, context[56]);
  refalrts::copy_evar(vm, context[57], context[58], context[19], context[20]);
  refalrts::copy_evar(vm, context[59], context[60], context[21], context[22]);
  refalrts::alloc_close_bracket(vm, context[61]);
  refalrts::alloc_close_bracket(vm, context[62]);
  refalrts::copy_evar(vm, context[63], context[64], context[25], context[26]);
  refalrts::alloc_open_bracket(vm, context[65]);
  refalrts::copy_evar(vm, context[66], context[67], context[29], context[30]);
  refalrts::alloc_close_bracket(vm, context[68]);
  refalrts::alloc_close_call(vm, context[69]);
  refalrts::update_name(context[4], functions[efunc_gen_Solvem_Aux_S3A5]);
  refalrts::reinit_open_call(context[35]);
  refalrts::update_char(context[37], ':');
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[69] );
  refalrts::push_stack( vm, context[35] );
  refalrts::link_brackets( context[65], context[68] );
  refalrts::link_brackets( context[52], context[62] );
  refalrts::link_brackets( context[56], context[61] );
  refalrts::link_brackets( context[53], context[36] );
  refalrts::link_brackets( context[48], context[51] );
  refalrts::link_brackets( context[43], context[47] );
  refalrts::link_brackets( context[31], context[32] );
  refalrts::link_brackets( context[27], context[28] );
  refalrts::link_brackets( context[23], context[24] );
  refalrts::link_brackets( context[17], context[18] );
  refalrts::link_brackets( context[13], context[14] );
  refalrts::link_brackets( context[41], context[10] );
  refalrts::link_brackets( context[9], context[40] );
  refalrts::link_brackets( context[38], context[39] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[56], context[69] );
  res = refalrts::splice_evar( res, context[36], context[37] );
  res = refalrts::splice_evar( res, context[54], context[55] );
  res = refalrts::splice_evar( res, context[42], context[53] );
  res = refalrts::splice_evar( res, context[10], context[35] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[40], context[41] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_evar( res, context[5], context[9] );
  res = refalrts::splice_evar( res, context[39], context[39] );
  res = refalrts::splice_evar( res, context[33], context[34] );
  res = refalrts::splice_evar( res, context[38], context[38] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Solvem_Aux_S3A4("Solve-Aux$3=4", COOKIE1_, COOKIE2_, func_gen_Solvem_Aux_S3A4);


static refalrts::FnResult func_gen_Solvem_Aux_S3A3(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 42 elems
  refalrts::Iter context[42];
  refalrts::zeros( context, 42 );
  // </0 & Solve-Aux$3=3/4 t.Pt#1/5 (/9 e.Contrs#1/7 )/10 (/13 e.Pe#1/11 )/14 t.Ht#1/15 (/19 e.He#1/17 )/20 (/23 e.Equations#1/21 )/24 (/27 e.Assigns#1/25 )/28 (/31 e.UsedVars#4/29 )/32 't'/33 e.tIdx#4/2 >/1
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
  // closed e.Contrs#1 as range 7
  // closed e.Pe#1 as range 11
  context[16] = refalrts::tvar_left( context[15], context[2], context[3] );
  if( ! context[16] )
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
  context[33] = refalrts::char_left( 't', context[2], context[3] );
  if( ! context[33] )
    return refalrts::cRecognitionImpossible;
  // closed e.He#1 as range 17
  // closed e.Equations#1 as range 21
  // closed e.Assigns#1 as range 25
  // closed e.UsedVars#4 as range 29
  // closed e.tIdx#4 as range 2
  //DEBUG: t.Pt#1: 5
  //DEBUG: e.Contrs#1: 7
  //DEBUG: e.Pe#1: 11
  //DEBUG: t.Ht#1: 15
  //DEBUG: e.He#1: 17
  //DEBUG: e.Equations#1: 21
  //DEBUG: e.Assigns#1: 25
  //DEBUG: e.UsedVars#4: 29
  //DEBUG: e.tIdx#4: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Solve-Aux$3=4/4 AsIs: t.Pt#1/5 } (/34 Tile{ AsIs: e.tIdx#4/2 } )/35 Tile{ AsIs: (/9 AsIs: e.Contrs#1/7 AsIs: )/10 AsIs: (/13 AsIs: e.Pe#1/11 AsIs: )/14 AsIs: t.Ht#1/15 AsIs: (/19 AsIs: e.He#1/17 AsIs: )/20 AsIs: (/23 AsIs: e.Equations#1/21 AsIs: )/24 AsIs: (/27 AsIs: e.Assigns#1/25 AsIs: )/28 HalfReuse: </31 } & NewVarName/36 (/37 Tile{ AsIs: e.UsedVars#4/29 } Tile{ AsIs: )/32 Reuse: 'e'/33 } 0/38 (/39 )/40 >/41 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[34]);
  refalrts::alloc_close_bracket(vm, context[35]);
  refalrts::alloc_name(vm, context[36], functions[efunc_NewVarName]);
  refalrts::alloc_open_bracket(vm, context[37]);
  refalrts::alloc_number(vm, context[38], 0UL);
  refalrts::alloc_open_bracket(vm, context[39]);
  refalrts::alloc_close_bracket(vm, context[40]);
  refalrts::alloc_close_call(vm, context[41]);
  refalrts::update_name(context[4], functions[efunc_gen_Solvem_Aux_S3A4]);
  refalrts::reinit_open_call(context[31]);
  refalrts::update_char(context[33], 'e');
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[41] );
  refalrts::push_stack( vm, context[31] );
  refalrts::link_brackets( context[39], context[40] );
  refalrts::link_brackets( context[37], context[32] );
  refalrts::link_brackets( context[27], context[28] );
  refalrts::link_brackets( context[23], context[24] );
  refalrts::link_brackets( context[19], context[20] );
  refalrts::link_brackets( context[13], context[14] );
  refalrts::link_brackets( context[9], context[10] );
  refalrts::link_brackets( context[34], context[35] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[38], context[41] );
  res = refalrts::splice_evar( res, context[32], context[33] );
  res = refalrts::splice_evar( res, context[29], context[30] );
  res = refalrts::splice_evar( res, context[36], context[37] );
  res = refalrts::splice_evar( res, context[9], context[31] );
  res = refalrts::splice_evar( res, context[35], context[35] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[34], context[34] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Solvem_Aux_S3A3("Solve-Aux$3=3", COOKIE1_, COOKIE2_, func_gen_Solvem_Aux_S3A3);


static refalrts::FnResult func_gen_Solvem_Aux_S4A6(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  // </0 & Solve-Aux$4=6/4 (/7 e.UsedVars#5/5 )/8 (/11 e.Branch1#6/9 )/12 e.Branch2#7/2 >/1
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
  // closed e.UsedVars#5 as range 5
  // closed e.Branch1#6 as range 9
  // closed e.Branch2#7 as range 2
  //DEBUG: e.UsedVars#5: 5
  //DEBUG: e.Branch1#6: 9
  //DEBUG: e.Branch2#7: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Solve-Aux/4 AsIs: (/7 AsIs: e.UsedVars#5/5 AsIs: )/8 } Tile{ AsIs: e.Branch1#6/9 } >/13 </14 & Solve-Aux/15 Tile{ AsIs: (/11 } e.UsedVars#5/5/16 Tile{ AsIs: )/12 AsIs: e.Branch2#7/2 AsIs: >/1 ]] }
  refalrts::alloc_close_call(vm, context[13]);
  refalrts::alloc_open_call(vm, context[14]);
  refalrts::alloc_name(vm, context[15], functions[efunc_Solvem_Aux]);
  refalrts::copy_evar(vm, context[16], context[17], context[5], context[6]);
  refalrts::update_name(context[4], functions[efunc_Solvem_Aux]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[14] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::push_stack( vm, context[13] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[12];
  res = refalrts::splice_evar( res, context[16], context[17] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  res = refalrts::splice_evar( res, context[13], context[15] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Solvem_Aux_S4A6("Solve-Aux$4=6", COOKIE1_, COOKIE2_, func_gen_Solvem_Aux_S4A6);


static refalrts::FnResult func_gen_Solvem_Aux_S4A5(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 56 elems
  refalrts::Iter context[56];
  refalrts::zeros( context, 56 );
  // </0 & Solve-Aux$4=5/4 (/7 e.UsedVars#5/5 )/8 t.Pt#1/9 (/13 e.eIdx#5/11 )/14 (/17 e.tIdx#4/15 )/18 (/21 e.Contrs#1/19 )/22 (/25 e.Pe#1/23 )/26 (/29 e.He#1/27 )/30 t.Ht#1/31 (/35 e.Equations#1/33 )/36 (/39 e.Assigns#1/37 )/40 e.Branch1#6/2 >/1
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
  // closed e.UsedVars#5 as range 5
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
  // closed e.eIdx#5 as range 11
  // closed e.tIdx#4 as range 15
  // closed e.Contrs#1 as range 19
  // closed e.Pe#1 as range 23
  // closed e.He#1 as range 27
  context[32] = refalrts::tvar_left( context[31], context[2], context[3] );
  if( ! context[32] )
    return refalrts::cRecognitionImpossible;
  context[33] = 0;
  context[34] = 0;
  context[35] = refalrts::brackets_left( context[33], context[34], context[2], context[3] );
  if( ! context[35] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[35], context[36]);
  context[37] = 0;
  context[38] = 0;
  context[39] = refalrts::brackets_left( context[37], context[38], context[2], context[3] );
  if( ! context[39] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[39], context[40]);
  // closed e.Equations#1 as range 33
  // closed e.Assigns#1 as range 37
  // closed e.Branch1#6 as range 2
  //DEBUG: e.UsedVars#5: 5
  //DEBUG: t.Pt#1: 9
  //DEBUG: e.eIdx#5: 11
  //DEBUG: e.tIdx#4: 15
  //DEBUG: e.Contrs#1: 19
  //DEBUG: e.Pe#1: 23
  //DEBUG: e.He#1: 27
  //DEBUG: t.Ht#1: 31
  //DEBUG: e.Equations#1: 33
  //DEBUG: e.Assigns#1: 37
  //DEBUG: e.Branch1#6: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Solve-Aux$4=6/4 AsIs: (/7 AsIs: e.UsedVars#5/5 AsIs: )/8 } (/41 Tile{ AsIs: e.Branch1#6/2 } Tile{ AsIs: )/36 } </42 Tile{ HalfReuse: & AddContraction/26 AsIs: (/29 } Tile{ AsIs: t.Pt#1/9 } ':'/43 (/44 # TkVariable/45 Tile{ HalfReuse: 'e'/13 AsIs: e.eIdx#5/11 AsIs: )/14 AsIs: (/17 } # TkVariable/46 't'/47 Tile{ AsIs: e.tIdx#4/15 } Tile{ AsIs: )/30 } Tile{ AsIs: )/18 AsIs: (/21 AsIs: e.Contrs#1/19 AsIs: )/22 AsIs: (/25 } (/48 Tile{ AsIs: e.Pe#1/23 } t.Pt#1/9/49 )/51 ':'/52 (/53 Tile{ AsIs: e.He#1/27 } Tile{ AsIs: t.Ht#1/31 HalfReuse: )/35 } )/54 Tile{ AsIs: e.Equations#1/33 } Tile{ AsIs: (/39 AsIs: e.Assigns#1/37 AsIs: )/40 } >/55 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[41]);
  refalrts::alloc_open_call(vm, context[42]);
  refalrts::alloc_char(vm, context[43], ':');
  refalrts::alloc_open_bracket(vm, context[44]);
  refalrts::alloc_ident(vm, context[45], identifiers[ident_TkVariable]);
  refalrts::alloc_ident(vm, context[46], identifiers[ident_TkVariable]);
  refalrts::alloc_char(vm, context[47], 't');
  refalrts::alloc_open_bracket(vm, context[48]);
  refalrts::copy_evar(vm, context[49], context[50], context[9], context[10]);
  refalrts::alloc_close_bracket(vm, context[51]);
  refalrts::alloc_char(vm, context[52], ':');
  refalrts::alloc_open_bracket(vm, context[53]);
  refalrts::alloc_close_bracket(vm, context[54]);
  refalrts::alloc_close_call(vm, context[55]);
  refalrts::update_name(context[4], functions[efunc_gen_Solvem_Aux_S4A6]);
  refalrts::reinit_name(context[26], functions[efunc_AddContraction]);
  refalrts::reinit_char(context[13], 'e');
  refalrts::reinit_close_bracket(context[35]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[55] );
  refalrts::push_stack( vm, context[42] );
  refalrts::link_brackets( context[39], context[40] );
  refalrts::link_brackets( context[25], context[54] );
  refalrts::link_brackets( context[53], context[35] );
  refalrts::link_brackets( context[48], context[51] );
  refalrts::link_brackets( context[21], context[22] );
  refalrts::link_brackets( context[29], context[18] );
  refalrts::link_brackets( context[17], context[30] );
  refalrts::link_brackets( context[44], context[14] );
  refalrts::link_brackets( context[41], context[36] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[55], context[55] );
  res = refalrts::splice_evar( res, context[39], context[40] );
  res = refalrts::splice_evar( res, context[33], context[34] );
  res = refalrts::splice_evar( res, context[54], context[54] );
  res = refalrts::splice_evar( res, context[31], context[35] );
  res = refalrts::splice_evar( res, context[27], context[28] );
  res = refalrts::splice_evar( res, context[49], context[53] );
  res = refalrts::splice_evar( res, context[23], context[24] );
  res = refalrts::splice_evar( res, context[48], context[48] );
  res = refalrts::splice_evar( res, context[18], context[25] );
  res = refalrts::splice_evar( res, context[30], context[30] );
  res = refalrts::splice_evar( res, context[15], context[16] );
  res = refalrts::splice_evar( res, context[46], context[47] );
  res = refalrts::splice_evar( res, context[13], context[17] );
  res = refalrts::splice_evar( res, context[43], context[45] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[26], context[29] );
  res = refalrts::splice_evar( res, context[42], context[42] );
  res = refalrts::splice_evar( res, context[36], context[36] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[41], context[41] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Solvem_Aux_S4A5("Solve-Aux$4=5", COOKIE1_, COOKIE2_, func_gen_Solvem_Aux_S4A5);


static refalrts::FnResult func_gen_Solvem_Aux_S4A4(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 70 elems
  refalrts::Iter context[70];
  refalrts::zeros( context, 70 );
  // </0 & Solve-Aux$4=4/4 t.Pt#1/5 (/9 e.tIdx#4/7 )/10 (/13 e.Contrs#1/11 )/14 (/17 e.Pe#1/15 )/18 (/21 e.He#1/19 )/22 t.Ht#1/23 (/27 e.Equations#1/25 )/28 (/31 e.Assigns#1/29 )/32 (/35 e.UsedVars#5/33 )/36 'e'/37 e.eIdx#5/2 >/1
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
  // closed e.tIdx#4 as range 7
  // closed e.Contrs#1 as range 11
  // closed e.Pe#1 as range 15
  // closed e.He#1 as range 19
  context[24] = refalrts::tvar_left( context[23], context[2], context[3] );
  if( ! context[24] )
    return refalrts::cRecognitionImpossible;
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
  context[37] = refalrts::char_left( 'e', context[2], context[3] );
  if( ! context[37] )
    return refalrts::cRecognitionImpossible;
  // closed e.Equations#1 as range 25
  // closed e.Assigns#1 as range 29
  // closed e.UsedVars#5 as range 33
  // closed e.eIdx#5 as range 2
  //DEBUG: t.Pt#1: 5
  //DEBUG: e.tIdx#4: 7
  //DEBUG: e.Contrs#1: 11
  //DEBUG: e.Pe#1: 15
  //DEBUG: e.He#1: 19
  //DEBUG: t.Ht#1: 23
  //DEBUG: e.Equations#1: 25
  //DEBUG: e.Assigns#1: 29
  //DEBUG: e.UsedVars#5: 33
  //DEBUG: e.eIdx#5: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Solve-Aux$4=5/4 } (/38 Tile{ AsIs: e.UsedVars#5/33 } )/39 Tile{ AsIs: t.Pt#1/5 } (/40 Tile{ AsIs: e.eIdx#5/2 } )/41 Tile{ AsIs: (/9 AsIs: e.tIdx#4/7 AsIs: )/10 AsIs: (/13 AsIs: e.Contrs#1/11 AsIs: )/14 AsIs: (/17 AsIs: e.Pe#1/15 AsIs: )/18 AsIs: (/21 AsIs: e.He#1/19 AsIs: )/22 AsIs: t.Ht#1/23 AsIs: (/27 AsIs: e.Equations#1/25 AsIs: )/28 AsIs: (/31 AsIs: e.Assigns#1/29 AsIs: )/32 HalfReuse: </35 } & AddContraction/42 (/43 t.Pt#1/5/44 ':'/46 )/47 (/48 e.Contrs#1/11/49 )/51 (/52 (/53 e.Pe#1/15/54 Tile{ AsIs: )/36 Reuse: ':'/37 } (/56 e.He#1/19/57 t.Ht#1/23/59 )/61 )/62 e.Equations#1/25/63 (/65 e.Assigns#1/29/66 )/68 >/69 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[38]);
  refalrts::alloc_close_bracket(vm, context[39]);
  refalrts::alloc_open_bracket(vm, context[40]);
  refalrts::alloc_close_bracket(vm, context[41]);
  refalrts::alloc_name(vm, context[42], functions[efunc_AddContraction]);
  refalrts::alloc_open_bracket(vm, context[43]);
  refalrts::copy_evar(vm, context[44], context[45], context[5], context[6]);
  refalrts::alloc_char(vm, context[46], ':');
  refalrts::alloc_close_bracket(vm, context[47]);
  refalrts::alloc_open_bracket(vm, context[48]);
  refalrts::copy_evar(vm, context[49], context[50], context[11], context[12]);
  refalrts::alloc_close_bracket(vm, context[51]);
  refalrts::alloc_open_bracket(vm, context[52]);
  refalrts::alloc_open_bracket(vm, context[53]);
  refalrts::copy_evar(vm, context[54], context[55], context[15], context[16]);
  refalrts::alloc_open_bracket(vm, context[56]);
  refalrts::copy_evar(vm, context[57], context[58], context[19], context[20]);
  refalrts::copy_evar(vm, context[59], context[60], context[23], context[24]);
  refalrts::alloc_close_bracket(vm, context[61]);
  refalrts::alloc_close_bracket(vm, context[62]);
  refalrts::copy_evar(vm, context[63], context[64], context[25], context[26]);
  refalrts::alloc_open_bracket(vm, context[65]);
  refalrts::copy_evar(vm, context[66], context[67], context[29], context[30]);
  refalrts::alloc_close_bracket(vm, context[68]);
  refalrts::alloc_close_call(vm, context[69]);
  refalrts::update_name(context[4], functions[efunc_gen_Solvem_Aux_S4A5]);
  refalrts::reinit_open_call(context[35]);
  refalrts::update_char(context[37], ':');
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[69] );
  refalrts::push_stack( vm, context[35] );
  refalrts::link_brackets( context[65], context[68] );
  refalrts::link_brackets( context[52], context[62] );
  refalrts::link_brackets( context[56], context[61] );
  refalrts::link_brackets( context[53], context[36] );
  refalrts::link_brackets( context[48], context[51] );
  refalrts::link_brackets( context[43], context[47] );
  refalrts::link_brackets( context[31], context[32] );
  refalrts::link_brackets( context[27], context[28] );
  refalrts::link_brackets( context[21], context[22] );
  refalrts::link_brackets( context[17], context[18] );
  refalrts::link_brackets( context[13], context[14] );
  refalrts::link_brackets( context[9], context[10] );
  refalrts::link_brackets( context[40], context[41] );
  refalrts::link_brackets( context[38], context[39] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[56], context[69] );
  res = refalrts::splice_evar( res, context[36], context[37] );
  res = refalrts::splice_evar( res, context[54], context[55] );
  res = refalrts::splice_evar( res, context[42], context[53] );
  res = refalrts::splice_evar( res, context[9], context[35] );
  res = refalrts::splice_evar( res, context[41], context[41] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[40], context[40] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[39], context[39] );
  res = refalrts::splice_evar( res, context[33], context[34] );
  res = refalrts::splice_evar( res, context[38], context[38] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Solvem_Aux_S4A4("Solve-Aux$4=4", COOKIE1_, COOKIE2_, func_gen_Solvem_Aux_S4A4);


static refalrts::FnResult func_gen_Solvem_Aux_S4A3(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 42 elems
  refalrts::Iter context[42];
  refalrts::zeros( context, 42 );
  // </0 & Solve-Aux$4=3/4 t.Pt#1/5 (/9 e.Contrs#1/7 )/10 (/13 e.Pe#1/11 )/14 (/17 e.He#1/15 )/18 t.Ht#1/19 (/23 e.Equations#1/21 )/24 (/27 e.Assigns#1/25 )/28 (/31 e.UsedVars#4/29 )/32 't'/33 e.tIdx#4/2 >/1
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
  context[15] = 0;
  context[16] = 0;
  context[17] = refalrts::brackets_left( context[15], context[16], context[2], context[3] );
  if( ! context[17] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[17], context[18]);
  // closed e.Contrs#1 as range 7
  // closed e.Pe#1 as range 11
  // closed e.He#1 as range 15
  context[20] = refalrts::tvar_left( context[19], context[2], context[3] );
  if( ! context[20] )
    return refalrts::cRecognitionImpossible;
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
  context[33] = refalrts::char_left( 't', context[2], context[3] );
  if( ! context[33] )
    return refalrts::cRecognitionImpossible;
  // closed e.Equations#1 as range 21
  // closed e.Assigns#1 as range 25
  // closed e.UsedVars#4 as range 29
  // closed e.tIdx#4 as range 2
  //DEBUG: t.Pt#1: 5
  //DEBUG: e.Contrs#1: 7
  //DEBUG: e.Pe#1: 11
  //DEBUG: e.He#1: 15
  //DEBUG: t.Ht#1: 19
  //DEBUG: e.Equations#1: 21
  //DEBUG: e.Assigns#1: 25
  //DEBUG: e.UsedVars#4: 29
  //DEBUG: e.tIdx#4: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Solve-Aux$4=4/4 AsIs: t.Pt#1/5 } (/34 Tile{ AsIs: e.tIdx#4/2 } )/35 Tile{ AsIs: (/9 AsIs: e.Contrs#1/7 AsIs: )/10 AsIs: (/13 AsIs: e.Pe#1/11 AsIs: )/14 AsIs: (/17 AsIs: e.He#1/15 AsIs: )/18 AsIs: t.Ht#1/19 AsIs: (/23 AsIs: e.Equations#1/21 AsIs: )/24 AsIs: (/27 AsIs: e.Assigns#1/25 AsIs: )/28 HalfReuse: </31 } & NewVarName/36 (/37 Tile{ AsIs: e.UsedVars#4/29 } Tile{ AsIs: )/32 Reuse: 'e'/33 } 0/38 (/39 )/40 >/41 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[34]);
  refalrts::alloc_close_bracket(vm, context[35]);
  refalrts::alloc_name(vm, context[36], functions[efunc_NewVarName]);
  refalrts::alloc_open_bracket(vm, context[37]);
  refalrts::alloc_number(vm, context[38], 0UL);
  refalrts::alloc_open_bracket(vm, context[39]);
  refalrts::alloc_close_bracket(vm, context[40]);
  refalrts::alloc_close_call(vm, context[41]);
  refalrts::update_name(context[4], functions[efunc_gen_Solvem_Aux_S4A4]);
  refalrts::reinit_open_call(context[31]);
  refalrts::update_char(context[33], 'e');
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[41] );
  refalrts::push_stack( vm, context[31] );
  refalrts::link_brackets( context[39], context[40] );
  refalrts::link_brackets( context[37], context[32] );
  refalrts::link_brackets( context[27], context[28] );
  refalrts::link_brackets( context[23], context[24] );
  refalrts::link_brackets( context[17], context[18] );
  refalrts::link_brackets( context[13], context[14] );
  refalrts::link_brackets( context[9], context[10] );
  refalrts::link_brackets( context[34], context[35] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[38], context[41] );
  res = refalrts::splice_evar( res, context[32], context[33] );
  res = refalrts::splice_evar( res, context[29], context[30] );
  res = refalrts::splice_evar( res, context[36], context[37] );
  res = refalrts::splice_evar( res, context[9], context[31] );
  res = refalrts::splice_evar( res, context[35], context[35] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[34], context[34] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Solvem_Aux_S4A3("Solve-Aux$4=3", COOKIE1_, COOKIE2_, func_gen_Solvem_Aux_S4A3);


static refalrts::FnResult func_gen_Solvem_Aux_S8B1S1A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 24 elems
  refalrts::Iter context[24];
  refalrts::zeros( context, 24 );
  // </0 & Solve-Aux$8:1$1=1/4 (/7 e.UsedVars#1/5 )/8 (/11 e.Contrs#1/9 )/12 (/15 e.Equations#1/13 )/16 (/19 e.Assigns#1/17 )/20 e.NewContrs#3/2 >/1
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
  // closed e.UsedVars#1 as range 5
  // closed e.Contrs#1 as range 9
  // closed e.Equations#1 as range 13
  // closed e.Assigns#1 as range 17
  // closed e.NewContrs#3 as range 2
  //DEBUG: e.UsedVars#1: 5
  //DEBUG: e.Contrs#1: 9
  //DEBUG: e.Equations#1: 13
  //DEBUG: e.Assigns#1: 17
  //DEBUG: e.NewContrs#3: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Solve-Aux/4 AsIs: (/7 AsIs: e.UsedVars#1/5 AsIs: )/8 HalfReuse: </11 } & AddContractions/21 (/22 Tile{ AsIs: e.NewContrs#3/2 } Tile{ AsIs: )/12 AsIs: (/15 } Tile{ AsIs: e.Contrs#1/9 } Tile{ AsIs: )/16 } Tile{ AsIs: e.Equations#1/13 } Tile{ AsIs: (/19 AsIs: e.Assigns#1/17 AsIs: )/20 } >/23 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_name(vm, context[21], functions[efunc_AddContractions]);
  refalrts::alloc_open_bracket(vm, context[22]);
  refalrts::alloc_close_call(vm, context[23]);
  refalrts::update_name(context[4], functions[efunc_Solvem_Aux]);
  refalrts::reinit_open_call(context[11]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[23] );
  refalrts::push_stack( vm, context[11] );
  refalrts::link_brackets( context[19], context[20] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[22], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[23], context[23] );
  res = refalrts::splice_evar( res, context[19], context[20] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[16], context[16] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[12], context[15] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[21], context[22] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Solvem_Aux_S8B1S1A1("Solve-Aux$8:1$1=1", COOKIE1_, COOKIE2_, func_gen_Solvem_Aux_S8B1S1A1);


static refalrts::FnResult func_gen_Solvem_Aux_S8B1S1A1L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 7 elems
  refalrts::Iter context[7];
  refalrts::zeros( context, 7 );
  // </0 & Solve-Aux$8:1$1=1\1/4 t.Free#3/5 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: t.Free#3: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 AsIs: t.Free#3/5 HalfReuse: ':'/1 } Tile{ HalfReuse: )/0 } Tile{ ]] }
  refalrts::reinit_open_bracket(context[4]);
  refalrts::reinit_char(context[1], ':');
  refalrts::reinit_close_bracket(context[0]);
  refalrts::link_brackets( context[4], context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[0], context[0] );
  res = refalrts::splice_evar( res, context[4], context[1] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Solvem_Aux_S8B1S1A1L1("Solve-Aux$8:1$1=1\\1", COOKIE1_, COOKIE2_, func_gen_Solvem_Aux_S8B1S1A1L1);


static refalrts::FnResult func_gen_Solvem_Aux_S8B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 37 elems
  refalrts::Iter context[37];
  refalrts::zeros( context, 37 );
  // </0 & Solve-Aux$8:1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Solve-Aux$8:1/4 (/7 e.new#1/5 )/8 (/11 e.new#2/9 )/12 (/15 e.new#3/13 )/16 (/19 e.new#4/17 )/20 (/23 e.new#5/21 )/24 s.new#6/25 >/1
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
  if( ! refalrts::svar_left( context[25], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & Solve-Aux$8:1/4 (/7 e.UsedVars#1/26 )/8 (/11 e.Contrs#1/28 )/12 (/15 e.Equations#1/30 )/16 (/19 e.Assigns#1/32 )/20 (/23 e.Pt#1/34 )/24 # True/25 >/1
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
    if( ! refalrts::ident_term( identifiers[ident_True], context[25] ) )
      continue;
    // closed e.UsedVars#1 as range 26
    // closed e.Contrs#1 as range 28
    // closed e.Equations#1 as range 30
    // closed e.Assigns#1 as range 32
    // closed e.Pt#1 as range 34
    //DEBUG: e.UsedVars#1: 26
    //DEBUG: e.Contrs#1: 28
    //DEBUG: e.Equations#1: 30
    //DEBUG: e.Assigns#1: 32
    //DEBUG: e.Pt#1: 34

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Solve-Aux$8:1$1=1/4 AsIs: (/7 AsIs: e.UsedVars#1/26 AsIs: )/8 AsIs: (/11 AsIs: e.Contrs#1/28 AsIs: )/12 AsIs: (/15 AsIs: e.Equations#1/30 AsIs: )/16 AsIs: (/19 AsIs: e.Assigns#1/32 AsIs: )/20 HalfReuse: </23 } & Map/36 Tile{ HalfReuse: & Solve-Aux$8:1$1=1\1/24 } Tile{ AsIs: e.Pt#1/34 } Tile{ HalfReuse: >/25 AsIs: >/1 ]] }
    refalrts::alloc_name(vm, context[36], functions[efunc_Map]);
    refalrts::update_name(context[4], functions[efunc_gen_Solvem_Aux_S8B1S1A1]);
    refalrts::reinit_open_call(context[23]);
    refalrts::reinit_name(context[24], functions[efunc_gen_Solvem_Aux_S8B1S1A1L1]);
    refalrts::reinit_close_call(context[25]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[25] );
    refalrts::push_stack( vm, context[23] );
    refalrts::link_brackets( context[19], context[20] );
    refalrts::link_brackets( context[15], context[16] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[25];
    res = refalrts::splice_evar( res, context[34], context[35] );
    res = refalrts::splice_evar( res, context[24], context[24] );
    res = refalrts::splice_evar( res, context[36], context[36] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Solve-Aux$8:1/4 (/7 e.UsedVars#1/5 )/8 (/11 e.Contrs#1/9 )/12 (/15 e.Equations#1/13 )/16 (/19 e.Assigns#1/17 )/20 (/23 e.Pt#1/21 )/24 # False/25 >/1
  if( ! refalrts::ident_term( identifiers[ident_False], context[25] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.UsedVars#1 as range 5
  // closed e.Contrs#1 as range 9
  // closed e.Equations#1 as range 13
  // closed e.Assigns#1 as range 17
  // closed e.Pt#1 as range 21
  //DEBUG: e.UsedVars#1: 5
  //DEBUG: e.Contrs#1: 9
  //DEBUG: e.Equations#1: 13
  //DEBUG: e.Assigns#1: 17
  //DEBUG: e.Pt#1: 21

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Solve-Aux$8:1/4 (/7 e.UsedVars#1/5 )/8 (/11 e.Contrs#1/9 )/12 (/15 e.Equations#1/13 )/16 (/19 e.Assigns#1/17 )/20 (/23 e.Pt#1/21 )/24 # False/25 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Solvem_Aux_S8B1("Solve-Aux$8:1", COOKIE1_, COOKIE2_, func_gen_Solvem_Aux_S8B1);


static refalrts::FnResult func_Solvem_Aux(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 85 elems
  refalrts::Iter context[85];
  refalrts::zeros( context, 85 );
  // </0 & Solve-Aux/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & Solve-Aux/4 (/9 e.new#1/7 )/10 (/13 e.new#2/11 )/14 e.new#3/5 (/17 e.new#4/15 )/18 >/1
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
    context[13] = refalrts::brackets_left( context[11], context[12], context[5], context[6] );
    if( ! context[13] )
      continue;
    refalrts::bracket_pointers(context[13], context[14]);
    context[15] = 0;
    context[16] = 0;
    context[17] = refalrts::brackets_right( context[15], context[16], context[5], context[6] );
    if( ! context[17] )
      continue;
    refalrts::bracket_pointers(context[17], context[18]);
    // closed e.new#1 as range 7
    // closed e.new#2 as range 11
    // closed e.new#3 as range 5
    // closed e.new#4 as range 15
    do {
      // </0 & Solve-Aux/4 (/9 e.new#8/19 )/10 (/13 e.new#9/21 )/14 (/29 (/33 e.new#5/31 )/34 ':'/35 (/38 e.new#6/36 )/39 )/30 e.new#7/23 (/17 e.new#10/25 )/18 >/1
      context[19] = context[7];
      context[20] = context[8];
      context[21] = context[11];
      context[22] = context[12];
      context[23] = context[5];
      context[24] = context[6];
      context[25] = context[15];
      context[26] = context[16];
      context[27] = 0;
      context[28] = 0;
      context[29] = refalrts::brackets_left( context[27], context[28], context[23], context[24] );
      if( ! context[29] )
        continue;
      refalrts::bracket_pointers(context[29], context[30]);
      context[31] = 0;
      context[32] = 0;
      context[33] = refalrts::brackets_left( context[31], context[32], context[27], context[28] );
      if( ! context[33] )
        continue;
      refalrts::bracket_pointers(context[33], context[34]);
      context[35] = refalrts::char_left( ':', context[27], context[28] );
      if( ! context[35] )
        continue;
      context[36] = 0;
      context[37] = 0;
      context[38] = refalrts::brackets_left( context[36], context[37], context[27], context[28] );
      if( ! context[38] )
        continue;
      refalrts::bracket_pointers(context[38], context[39]);
      if( ! refalrts::empty_seq( context[27], context[28] ) )
        continue;
      // closed e.new#8 as range 19
      // closed e.new#9 as range 21
      // closed e.new#5 as range 31
      // closed e.new#6 as range 36
      // closed e.new#7 as range 23
      // closed e.new#10 as range 25
      do {
        // </0 & Solve-Aux/4 (/9 e.UsedVars#1/40 )/10 (/13 e.Contrs#1/42 )/14 (/29 (/33 t.Pt#1/52 e.Pe#1/44 )/34 ':'/35 (/38 t.Ht#1/54 e.He#1/46 )/39 )/30 e.Equations#1/48 (/17 e.Assigns#1/50 )/18 >/1
        context[40] = context[19];
        context[41] = context[20];
        context[42] = context[21];
        context[43] = context[22];
        context[44] = context[31];
        context[45] = context[32];
        context[46] = context[36];
        context[47] = context[37];
        context[48] = context[23];
        context[49] = context[24];
        context[50] = context[25];
        context[51] = context[26];
        // closed e.UsedVars#1 as range 40
        // closed e.Contrs#1 as range 42
        // closed e.Equations#1 as range 48
        // closed e.Assigns#1 as range 50
        context[53] = refalrts::tvar_left( context[52], context[44], context[45] );
        if( ! context[53] )
          continue;
        // closed e.Pe#1 as range 44
        context[55] = refalrts::tvar_left( context[54], context[46], context[47] );
        if( ! context[55] )
          continue;
        // closed e.He#1 as range 46
        //DEBUG: e.UsedVars#1: 40
        //DEBUG: e.Contrs#1: 42
        //DEBUG: e.Equations#1: 48
        //DEBUG: e.Assigns#1: 50
        //DEBUG: t.Pt#1: 52
        //DEBUG: e.Pe#1: 44
        //DEBUG: t.Ht#1: 54
        //DEBUG: e.He#1: 46
        //40: e.UsedVars#1
        //42: e.Contrs#1
        //44: e.Pe#1
        //46: e.He#1
        //48: e.Equations#1
        //50: e.Assigns#1
        //52: t.Pt#1
        //54: t.Ht#1
        //61: t.Ht#1

        refalrts::reset_allocator(vm);
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        refalrts::alloc_open_call(vm, context[56]);
        refalrts::alloc_name(vm, context[58], functions[efunc_gen_Solvem_Aux_S1C1]);
        refalrts::alloc_open_call(vm, context[59]);
        refalrts::alloc_name(vm, context[60], functions[efunc_IsTerm]);
        refalrts::copy_stvar(vm, context[61], context[54]);
        refalrts::alloc_close_call(vm, context[62]);
        refalrts::alloc_close_call(vm, context[57]);
        refalrts::push_stack( vm, context[57] );
        refalrts::push_stack( vm, context[56] );
        res = refalrts::splice_elem( res, context[57] );
        refalrts::push_stack( vm, context[62] );
        refalrts::push_stack( vm, context[59] );
        res = refalrts::splice_elem( res, context[62] );
        res = refalrts::splice_stvar( res, context[61] );
        res = refalrts::splice_elem( res, context[60] );
        res = refalrts::splice_elem( res, context[59] );
        res = refalrts::splice_elem( res, context[58] );
        res = refalrts::splice_elem( res, context[56] );
        refalrts::use( res );
        refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
        if (rec_res != refalrts::cSuccess)
          return rec_res;
        refalrts::this_is_generated_function(vm);
        do {
          // </56 & Solve-Aux$1?1/60 # True/61 >/57
          context[58] = 0;
          context[59] = 0;
          context[60] = refalrts::call_left( context[58], context[59], context[56], context[57] );
          context[61] = refalrts::ident_left( identifiers[ident_True], context[58], context[59] );
          if( ! context[61] )
            continue;
          if( ! refalrts::empty_seq( context[58], context[59] ) )
            continue;
          //DEBUG: e.UsedVars#1: 40
          //DEBUG: e.Contrs#1: 42
          //DEBUG: e.Equations#1: 48
          //DEBUG: e.Assigns#1: 50
          //DEBUG: t.Pt#1: 52
          //DEBUG: e.Pe#1: 44
          //DEBUG: t.Ht#1: 54
          //DEBUG: e.He#1: 46
          //40: e.UsedVars#1
          //42: e.Contrs#1
          //44: e.Pe#1
          //46: e.He#1
          //48: e.Equations#1
          //50: e.Assigns#1
          //52: t.Pt#1
          //54: t.Ht#1
          //67: t.Pt#1

          refalrts::reset_allocator(vm);
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[1];
          refalrts::alloc_open_call(vm, context[62]);
          refalrts::alloc_name(vm, context[64], functions[efunc_gen_Solvem_Aux_S1C2]);
          refalrts::alloc_open_call(vm, context[65]);
          refalrts::alloc_name(vm, context[66], functions[efunc_IsTerm]);
          refalrts::copy_stvar(vm, context[67], context[52]);
          refalrts::alloc_close_call(vm, context[68]);
          refalrts::alloc_close_call(vm, context[63]);
          refalrts::push_stack( vm, context[63] );
          refalrts::push_stack( vm, context[62] );
          res = refalrts::splice_elem( res, context[63] );
          refalrts::push_stack( vm, context[68] );
          refalrts::push_stack( vm, context[65] );
          res = refalrts::splice_elem( res, context[68] );
          res = refalrts::splice_stvar( res, context[67] );
          res = refalrts::splice_elem( res, context[66] );
          res = refalrts::splice_elem( res, context[65] );
          res = refalrts::splice_elem( res, context[64] );
          res = refalrts::splice_elem( res, context[62] );
          refalrts::use( res );
          refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
          if (rec_res != refalrts::cSuccess)
            return rec_res;
          refalrts::this_is_generated_function(vm);
          do {
            // </62 & Solve-Aux$1?2/66 # True/67 >/63
            context[64] = 0;
            context[65] = 0;
            context[66] = refalrts::call_left( context[64], context[65], context[62], context[63] );
            context[67] = refalrts::ident_left( identifiers[ident_True], context[64], context[65] );
            if( ! context[67] )
              continue;
            if( ! refalrts::empty_seq( context[64], context[65] ) )
              continue;
            //DEBUG: e.UsedVars#1: 40
            //DEBUG: e.Contrs#1: 42
            //DEBUG: e.Equations#1: 48
            //DEBUG: e.Assigns#1: 50
            //DEBUG: t.Pt#1: 52
            //DEBUG: e.Pe#1: 44
            //DEBUG: t.Ht#1: 54
            //DEBUG: e.He#1: 46

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} # True/61 >/57 {REMOVED TILE} # True/67 >/63 >/1 {REMOVED TILE}
            //RESULT: Tile{ [[ } Tile{ AsIs: </62 Reuse: & Solve-Aux$1:1/66 } Tile{ AsIs: </0 Reuse: & Solve-TermEquation/4 AsIs: (/9 AsIs: e.UsedVars#1/40 AsIs: )/10 } Tile{ AsIs: t.Pt#1/52 } Tile{ AsIs: t.Ht#1/54 } Tile{ AsIs: (/13 AsIs: e.Contrs#1/42 AsIs: )/14 AsIs: (/29 AsIs: (/33 } Tile{ AsIs: e.Pe#1/44 } Tile{ AsIs: )/34 AsIs: ':'/35 AsIs: (/38 } Tile{ AsIs: e.He#1/46 } Tile{ AsIs: )/39 AsIs: )/30 AsIs: e.Equations#1/48 AsIs: (/17 AsIs: e.Assigns#1/50 AsIs: )/18 HalfReuse: >/56 HalfReuse: >/60 } Tile{ ]] }
            refalrts::update_name(context[66], functions[efunc_gen_Solvem_Aux_S1B1]);
            refalrts::update_name(context[4], functions[efunc_Solvem_TermEquation]);
            refalrts::reinit_close_call(context[56]);
            refalrts::reinit_close_call(context[60]);
            refalrts::push_stack( vm, context[60] );
            refalrts::push_stack( vm, context[62] );
            refalrts::push_stack( vm, context[56] );
            refalrts::push_stack( vm, context[0] );
            refalrts::link_brackets( context[17], context[18] );
            refalrts::link_brackets( context[29], context[30] );
            refalrts::link_brackets( context[38], context[39] );
            refalrts::link_brackets( context[33], context[34] );
            refalrts::link_brackets( context[13], context[14] );
            refalrts::link_brackets( context[9], context[10] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = arg_end->next;
            res = refalrts::splice_evar( res, context[39], context[60] );
            res = refalrts::splice_evar( res, context[46], context[47] );
            res = refalrts::splice_evar( res, context[34], context[38] );
            res = refalrts::splice_evar( res, context[44], context[45] );
            res = refalrts::splice_evar( res, context[13], context[33] );
            res = refalrts::splice_evar( res, context[54], context[55] );
            res = refalrts::splice_evar( res, context[52], context[53] );
            res = refalrts::splice_evar( res, context[0], context[10] );
            res = refalrts::splice_evar( res, context[62], context[66] );
            refalrts::splice_to_freelist_open( vm, trash_prev, res );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          refalrts::splice_to_freelist(vm, context[62], context[63]);
          continue;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        refalrts::splice_to_freelist(vm, context[56], context[57]);
        continue;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & Solve-Aux/4 (/9 e.UsedVars#1/40 )/10 (/13 e.Contrs#1/42 )/14 (/29 (/33 e.Pe#1/44 t.Pt#1/52 )/34 ':'/35 (/38 e.He#1/46 t.Ht#1/54 )/39 )/30 e.Equations#1/48 (/17 e.Assigns#1/50 )/18 >/1
        context[40] = context[19];
        context[41] = context[20];
        context[42] = context[21];
        context[43] = context[22];
        context[44] = context[31];
        context[45] = context[32];
        context[46] = context[36];
        context[47] = context[37];
        context[48] = context[23];
        context[49] = context[24];
        context[50] = context[25];
        context[51] = context[26];
        // closed e.UsedVars#1 as range 40
        // closed e.Contrs#1 as range 42
        // closed e.Equations#1 as range 48
        // closed e.Assigns#1 as range 50
        context[53] = refalrts::tvar_right( context[52], context[44], context[45] );
        if( ! context[53] )
          continue;
        // closed e.Pe#1 as range 44
        context[55] = refalrts::tvar_right( context[54], context[46], context[47] );
        if( ! context[55] )
          continue;
        // closed e.He#1 as range 46
        //DEBUG: e.UsedVars#1: 40
        //DEBUG: e.Contrs#1: 42
        //DEBUG: e.Equations#1: 48
        //DEBUG: e.Assigns#1: 50
        //DEBUG: t.Pt#1: 52
        //DEBUG: e.Pe#1: 44
        //DEBUG: t.Ht#1: 54
        //DEBUG: e.He#1: 46
        //40: e.UsedVars#1
        //42: e.Contrs#1
        //44: e.Pe#1
        //46: e.He#1
        //48: e.Equations#1
        //50: e.Assigns#1
        //52: t.Pt#1
        //54: t.Ht#1
        //61: t.Ht#1

        refalrts::reset_allocator(vm);
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        refalrts::alloc_open_call(vm, context[56]);
        refalrts::alloc_name(vm, context[58], functions[efunc_gen_Solvem_Aux_S2C1]);
        refalrts::alloc_open_call(vm, context[59]);
        refalrts::alloc_name(vm, context[60], functions[efunc_IsTerm]);
        refalrts::copy_stvar(vm, context[61], context[54]);
        refalrts::alloc_close_call(vm, context[62]);
        refalrts::alloc_close_call(vm, context[57]);
        refalrts::push_stack( vm, context[57] );
        refalrts::push_stack( vm, context[56] );
        res = refalrts::splice_elem( res, context[57] );
        refalrts::push_stack( vm, context[62] );
        refalrts::push_stack( vm, context[59] );
        res = refalrts::splice_elem( res, context[62] );
        res = refalrts::splice_stvar( res, context[61] );
        res = refalrts::splice_elem( res, context[60] );
        res = refalrts::splice_elem( res, context[59] );
        res = refalrts::splice_elem( res, context[58] );
        res = refalrts::splice_elem( res, context[56] );
        refalrts::use( res );
        refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
        if (rec_res != refalrts::cSuccess)
          return rec_res;
        refalrts::this_is_generated_function(vm);
        do {
          // </56 & Solve-Aux$2?1/60 # True/61 >/57
          context[58] = 0;
          context[59] = 0;
          context[60] = refalrts::call_left( context[58], context[59], context[56], context[57] );
          context[61] = refalrts::ident_left( identifiers[ident_True], context[58], context[59] );
          if( ! context[61] )
            continue;
          if( ! refalrts::empty_seq( context[58], context[59] ) )
            continue;
          //DEBUG: e.UsedVars#1: 40
          //DEBUG: e.Contrs#1: 42
          //DEBUG: e.Equations#1: 48
          //DEBUG: e.Assigns#1: 50
          //DEBUG: t.Pt#1: 52
          //DEBUG: e.Pe#1: 44
          //DEBUG: t.Ht#1: 54
          //DEBUG: e.He#1: 46
          //40: e.UsedVars#1
          //42: e.Contrs#1
          //44: e.Pe#1
          //46: e.He#1
          //48: e.Equations#1
          //50: e.Assigns#1
          //52: t.Pt#1
          //54: t.Ht#1
          //67: t.Pt#1

          refalrts::reset_allocator(vm);
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[1];
          refalrts::alloc_open_call(vm, context[62]);
          refalrts::alloc_name(vm, context[64], functions[efunc_gen_Solvem_Aux_S2C2]);
          refalrts::alloc_open_call(vm, context[65]);
          refalrts::alloc_name(vm, context[66], functions[efunc_IsTerm]);
          refalrts::copy_stvar(vm, context[67], context[52]);
          refalrts::alloc_close_call(vm, context[68]);
          refalrts::alloc_close_call(vm, context[63]);
          refalrts::push_stack( vm, context[63] );
          refalrts::push_stack( vm, context[62] );
          res = refalrts::splice_elem( res, context[63] );
          refalrts::push_stack( vm, context[68] );
          refalrts::push_stack( vm, context[65] );
          res = refalrts::splice_elem( res, context[68] );
          res = refalrts::splice_stvar( res, context[67] );
          res = refalrts::splice_elem( res, context[66] );
          res = refalrts::splice_elem( res, context[65] );
          res = refalrts::splice_elem( res, context[64] );
          res = refalrts::splice_elem( res, context[62] );
          refalrts::use( res );
          refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
          if (rec_res != refalrts::cSuccess)
            return rec_res;
          refalrts::this_is_generated_function(vm);
          do {
            // </62 & Solve-Aux$2?2/66 # True/67 >/63
            context[64] = 0;
            context[65] = 0;
            context[66] = refalrts::call_left( context[64], context[65], context[62], context[63] );
            context[67] = refalrts::ident_left( identifiers[ident_True], context[64], context[65] );
            if( ! context[67] )
              continue;
            if( ! refalrts::empty_seq( context[64], context[65] ) )
              continue;
            //DEBUG: e.UsedVars#1: 40
            //DEBUG: e.Contrs#1: 42
            //DEBUG: e.Equations#1: 48
            //DEBUG: e.Assigns#1: 50
            //DEBUG: t.Pt#1: 52
            //DEBUG: e.Pe#1: 44
            //DEBUG: t.Ht#1: 54
            //DEBUG: e.He#1: 46

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} # True/61 >/57 {REMOVED TILE} # True/67 >/63 >/1 {REMOVED TILE}
            //RESULT: Tile{ [[ } Tile{ AsIs: </62 Reuse: & Solve-Aux$2:1/66 } Tile{ AsIs: </0 Reuse: & Solve-TermEquation/4 AsIs: (/9 AsIs: e.UsedVars#1/40 AsIs: )/10 } Tile{ AsIs: t.Pt#1/52 } Tile{ AsIs: t.Ht#1/54 } Tile{ AsIs: (/13 AsIs: e.Contrs#1/42 AsIs: )/14 AsIs: (/29 AsIs: (/33 } Tile{ AsIs: e.Pe#1/44 } Tile{ AsIs: )/34 AsIs: ':'/35 AsIs: (/38 } Tile{ AsIs: e.He#1/46 } Tile{ AsIs: )/39 AsIs: )/30 AsIs: e.Equations#1/48 AsIs: (/17 AsIs: e.Assigns#1/50 AsIs: )/18 HalfReuse: >/56 HalfReuse: >/60 } Tile{ ]] }
            refalrts::update_name(context[66], functions[efunc_gen_Solvem_Aux_S2B1]);
            refalrts::update_name(context[4], functions[efunc_Solvem_TermEquation]);
            refalrts::reinit_close_call(context[56]);
            refalrts::reinit_close_call(context[60]);
            refalrts::push_stack( vm, context[60] );
            refalrts::push_stack( vm, context[62] );
            refalrts::push_stack( vm, context[56] );
            refalrts::push_stack( vm, context[0] );
            refalrts::link_brackets( context[17], context[18] );
            refalrts::link_brackets( context[29], context[30] );
            refalrts::link_brackets( context[38], context[39] );
            refalrts::link_brackets( context[33], context[34] );
            refalrts::link_brackets( context[13], context[14] );
            refalrts::link_brackets( context[9], context[10] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = arg_end->next;
            res = refalrts::splice_evar( res, context[39], context[60] );
            res = refalrts::splice_evar( res, context[46], context[47] );
            res = refalrts::splice_evar( res, context[34], context[38] );
            res = refalrts::splice_evar( res, context[44], context[45] );
            res = refalrts::splice_evar( res, context[13], context[33] );
            res = refalrts::splice_evar( res, context[54], context[55] );
            res = refalrts::splice_evar( res, context[52], context[53] );
            res = refalrts::splice_evar( res, context[0], context[10] );
            res = refalrts::splice_evar( res, context[62], context[66] );
            refalrts::splice_to_freelist_open( vm, trash_prev, res );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          refalrts::splice_to_freelist(vm, context[62], context[63]);
          continue;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        refalrts::splice_to_freelist(vm, context[56], context[57]);
        continue;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & Solve-Aux/4 (/9 e.UsedVars#1/40 )/10 (/13 e.Contrs#1/42 )/14 (/29 (/33 t.Pt#1/52 e.Pe#1/44 )/34 ':'/35 (/38 t.Ht#1/54 e.He#1/46 )/39 )/30 e.Equations#1/48 (/17 e.Assigns#1/50 )/18 >/1
        context[40] = context[19];
        context[41] = context[20];
        context[42] = context[21];
        context[43] = context[22];
        context[44] = context[31];
        context[45] = context[32];
        context[46] = context[36];
        context[47] = context[37];
        context[48] = context[23];
        context[49] = context[24];
        context[50] = context[25];
        context[51] = context[26];
        // closed e.UsedVars#1 as range 40
        // closed e.Contrs#1 as range 42
        // closed e.Equations#1 as range 48
        // closed e.Assigns#1 as range 50
        context[53] = refalrts::tvar_left( context[52], context[44], context[45] );
        if( ! context[53] )
          continue;
        // closed e.Pe#1 as range 44
        context[55] = refalrts::tvar_left( context[54], context[46], context[47] );
        if( ! context[55] )
          continue;
        // closed e.He#1 as range 46
        //DEBUG: e.UsedVars#1: 40
        //DEBUG: e.Contrs#1: 42
        //DEBUG: e.Equations#1: 48
        //DEBUG: e.Assigns#1: 50
        //DEBUG: t.Pt#1: 52
        //DEBUG: e.Pe#1: 44
        //DEBUG: t.Ht#1: 54
        //DEBUG: e.He#1: 46
        //40: e.UsedVars#1
        //42: e.Contrs#1
        //44: e.Pe#1
        //46: e.He#1
        //48: e.Equations#1
        //50: e.Assigns#1
        //52: t.Pt#1
        //54: t.Ht#1
        //61: t.Ht#1

        refalrts::reset_allocator(vm);
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        refalrts::alloc_open_call(vm, context[56]);
        refalrts::alloc_name(vm, context[58], functions[efunc_gen_Solvem_Aux_S3C1]);
        refalrts::alloc_open_call(vm, context[59]);
        refalrts::alloc_name(vm, context[60], functions[efunc_IsTerm]);
        refalrts::copy_stvar(vm, context[61], context[54]);
        refalrts::alloc_close_call(vm, context[62]);
        refalrts::alloc_close_call(vm, context[57]);
        refalrts::push_stack( vm, context[57] );
        refalrts::push_stack( vm, context[56] );
        res = refalrts::splice_elem( res, context[57] );
        refalrts::push_stack( vm, context[62] );
        refalrts::push_stack( vm, context[59] );
        res = refalrts::splice_elem( res, context[62] );
        res = refalrts::splice_stvar( res, context[61] );
        res = refalrts::splice_elem( res, context[60] );
        res = refalrts::splice_elem( res, context[59] );
        res = refalrts::splice_elem( res, context[58] );
        res = refalrts::splice_elem( res, context[56] );
        refalrts::use( res );
        refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
        if (rec_res != refalrts::cSuccess)
          return rec_res;
        refalrts::this_is_generated_function(vm);
        do {
          // </56 & Solve-Aux$3?1/60 # True/61 >/57
          context[58] = 0;
          context[59] = 0;
          context[60] = refalrts::call_left( context[58], context[59], context[56], context[57] );
          context[61] = refalrts::ident_left( identifiers[ident_True], context[58], context[59] );
          if( ! context[61] )
            continue;
          if( ! refalrts::empty_seq( context[58], context[59] ) )
            continue;
          //DEBUG: e.UsedVars#1: 40
          //DEBUG: e.Contrs#1: 42
          //DEBUG: e.Equations#1: 48
          //DEBUG: e.Assigns#1: 50
          //DEBUG: t.Pt#1: 52
          //DEBUG: e.Pe#1: 44
          //DEBUG: t.Ht#1: 54
          //DEBUG: e.He#1: 46
          //40: e.UsedVars#1
          //42: e.Contrs#1
          //44: e.Pe#1
          //46: e.He#1
          //48: e.Equations#1
          //50: e.Assigns#1
          //52: t.Pt#1
          //54: t.Ht#1
          //65: t.Pt#1

          refalrts::reset_allocator(vm);
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[1];
          refalrts::alloc_open_call(vm, context[62]);
          refalrts::alloc_name(vm, context[64], functions[efunc_gen_Solvem_Aux_S3C2]);
          refalrts::copy_stvar(vm, context[65], context[52]);
          refalrts::alloc_close_call(vm, context[63]);
          refalrts::push_stack( vm, context[63] );
          refalrts::push_stack( vm, context[62] );
          res = refalrts::splice_elem( res, context[63] );
          res = refalrts::splice_stvar( res, context[65] );
          res = refalrts::splice_elem( res, context[64] );
          res = refalrts::splice_elem( res, context[62] );
          refalrts::use( res );
          refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
          if (rec_res != refalrts::cSuccess)
            return rec_res;
          refalrts::this_is_generated_function(vm);
          do {
            // </62 & Solve-Aux$3?2/66 (/69 # TkVariable/71 'e'/72 e.Index#3/67 )/70 >/63
            context[64] = 0;
            context[65] = 0;
            context[66] = refalrts::call_left( context[64], context[65], context[62], context[63] );
            context[67] = 0;
            context[68] = 0;
            context[69] = refalrts::brackets_left( context[67], context[68], context[64], context[65] );
            if( ! context[69] )
              continue;
            refalrts::bracket_pointers(context[69], context[70]);
            context[71] = refalrts::ident_left( identifiers[ident_TkVariable], context[67], context[68] );
            if( ! context[71] )
              continue;
            context[72] = refalrts::char_left( 'e', context[67], context[68] );
            if( ! context[72] )
              continue;
            if( ! refalrts::empty_seq( context[64], context[65] ) )
              continue;
            // closed e.Index#3 as range 67
            //DEBUG: e.UsedVars#1: 40
            //DEBUG: e.Contrs#1: 42
            //DEBUG: e.Equations#1: 48
            //DEBUG: e.Assigns#1: 50
            //DEBUG: t.Pt#1: 52
            //DEBUG: e.Pe#1: 44
            //DEBUG: t.Ht#1: 54
            //DEBUG: e.He#1: 46
            //DEBUG: e.Index#3: 67

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} (/9 {REMOVED TILE} )/10 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} ':'/35 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} # TkVariable/71 'e'/72 e.Index#3/67 {REMOVED TILE}
            //RESULT: Tile{ [[ AsIs: </0 Reuse: & Solve-Aux$3=3/4 } Tile{ AsIs: t.Pt#1/52 } Tile{ AsIs: (/13 AsIs: e.Contrs#1/42 AsIs: )/14 AsIs: (/29 } Tile{ AsIs: e.Pe#1/44 } Tile{ HalfReuse: )/38 AsIs: t.Ht#1/54 } Tile{ AsIs: (/33 } Tile{ AsIs: e.He#1/46 } Tile{ AsIs: )/39 HalfReuse: (/30 } Tile{ AsIs: e.Equations#1/48 } Tile{ AsIs: )/34 } Tile{ AsIs: (/17 AsIs: e.Assigns#1/50 AsIs: )/18 AsIs: </56 Reuse: & NewVarName/60 HalfReuse: (/61 } Tile{ AsIs: e.UsedVars#1/40 } Tile{ HalfReuse: )/57 HalfReuse: 't'/62 HalfReuse: 0/66 AsIs: (/69 } Tile{ AsIs: )/70 AsIs: >/63 AsIs: >/1 ]] }
            refalrts::update_name(context[4], functions[efunc_gen_Solvem_Aux_S3A3]);
            refalrts::reinit_close_bracket(context[38]);
            refalrts::reinit_open_bracket(context[30]);
            refalrts::update_name(context[60], functions[efunc_NewVarName]);
            refalrts::reinit_open_bracket(context[61]);
            refalrts::reinit_close_bracket(context[57]);
            refalrts::reinit_char(context[62], 't');
            refalrts::reinit_number(context[66], 0UL);
            refalrts::push_stack( vm, context[1] );
            refalrts::push_stack( vm, context[0] );
            refalrts::push_stack( vm, context[63] );
            refalrts::push_stack( vm, context[56] );
            refalrts::link_brackets( context[69], context[70] );
            refalrts::link_brackets( context[61], context[57] );
            refalrts::link_brackets( context[17], context[18] );
            refalrts::link_brackets( context[30], context[34] );
            refalrts::link_brackets( context[33], context[39] );
            refalrts::link_brackets( context[29], context[38] );
            refalrts::link_brackets( context[13], context[14] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = context[70];
            res = refalrts::splice_evar( res, context[57], context[69] );
            res = refalrts::splice_evar( res, context[40], context[41] );
            res = refalrts::splice_evar( res, context[17], context[61] );
            res = refalrts::splice_evar( res, context[34], context[34] );
            res = refalrts::splice_evar( res, context[48], context[49] );
            res = refalrts::splice_evar( res, context[39], context[30] );
            res = refalrts::splice_evar( res, context[46], context[47] );
            res = refalrts::splice_evar( res, context[33], context[33] );
            res = refalrts::splice_evar( res, context[38], context[55] );
            res = refalrts::splice_evar( res, context[44], context[45] );
            res = refalrts::splice_evar( res, context[13], context[29] );
            res = refalrts::splice_evar( res, context[52], context[53] );
            refalrts::splice_to_freelist_open( vm, context[4], res );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          refalrts::splice_to_freelist(vm, context[62], context[63]);
          continue;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        refalrts::splice_to_freelist(vm, context[56], context[57]);
        continue;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & Solve-Aux/4 (/9 e.new#15/40 )/10 (/13 e.new#16/42 )/14 (/29 (/33 e.new#12/44 )/34 ':'/35 (/38 e.new#13/46 t.new#14/52 )/39 )/30 e.new#11/48 (/17 e.new#17/50 )/18 >/1
        context[40] = context[19];
        context[41] = context[20];
        context[42] = context[21];
        context[43] = context[22];
        context[44] = context[31];
        context[45] = context[32];
        context[46] = context[36];
        context[47] = context[37];
        context[48] = context[23];
        context[49] = context[24];
        context[50] = context[25];
        context[51] = context[26];
        // closed e.new#15 as range 40
        // closed e.new#16 as range 42
        // closed e.new#12 as range 44
        // closed e.new#11 as range 48
        // closed e.new#17 as range 50
        context[53] = refalrts::tvar_right( context[52], context[46], context[47] );
        if( ! context[53] )
          continue;
        // closed e.new#13 as range 46
        do {
          // </0 & Solve-Aux/4 (/9 e.UsedVars#1/54 )/10 (/13 e.Contrs#1/56 )/14 (/29 (/33 e.Pe#1/58 t.Pt#1/66 )/34 ':'/35 (/38 e.He#1/60 t.Ht#1/52 )/39 )/30 e.Equations#1/62 (/17 e.Assigns#1/64 )/18 >/1
          context[54] = context[40];
          context[55] = context[41];
          context[56] = context[42];
          context[57] = context[43];
          context[58] = context[44];
          context[59] = context[45];
          context[60] = context[46];
          context[61] = context[47];
          context[62] = context[48];
          context[63] = context[49];
          context[64] = context[50];
          context[65] = context[51];
          // closed e.UsedVars#1 as range 54
          // closed e.Contrs#1 as range 56
          // closed e.He#1 as range 60
          // closed e.Equations#1 as range 62
          // closed e.Assigns#1 as range 64
          context[67] = refalrts::tvar_right( context[66], context[58], context[59] );
          if( ! context[67] )
            continue;
          // closed e.Pe#1 as range 58
          //DEBUG: t.Ht#1: 52
          //DEBUG: e.UsedVars#1: 54
          //DEBUG: e.Contrs#1: 56
          //DEBUG: e.He#1: 60
          //DEBUG: e.Equations#1: 62
          //DEBUG: e.Assigns#1: 64
          //DEBUG: t.Pt#1: 66
          //DEBUG: e.Pe#1: 58
          //52: t.Ht#1
          //54: e.UsedVars#1
          //56: e.Contrs#1
          //58: e.Pe#1
          //60: e.He#1
          //62: e.Equations#1
          //64: e.Assigns#1
          //66: t.Pt#1
          //73: t.Ht#1

          refalrts::reset_allocator(vm);
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[1];
          refalrts::alloc_open_call(vm, context[68]);
          refalrts::alloc_name(vm, context[70], functions[efunc_gen_Solvem_Aux_S4C1]);
          refalrts::alloc_open_call(vm, context[71]);
          refalrts::alloc_name(vm, context[72], functions[efunc_IsTerm]);
          refalrts::copy_stvar(vm, context[73], context[52]);
          refalrts::alloc_close_call(vm, context[74]);
          refalrts::alloc_close_call(vm, context[69]);
          refalrts::push_stack( vm, context[69] );
          refalrts::push_stack( vm, context[68] );
          res = refalrts::splice_elem( res, context[69] );
          refalrts::push_stack( vm, context[74] );
          refalrts::push_stack( vm, context[71] );
          res = refalrts::splice_elem( res, context[74] );
          res = refalrts::splice_stvar( res, context[73] );
          res = refalrts::splice_elem( res, context[72] );
          res = refalrts::splice_elem( res, context[71] );
          res = refalrts::splice_elem( res, context[70] );
          res = refalrts::splice_elem( res, context[68] );
          refalrts::use( res );
          refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
          if (rec_res != refalrts::cSuccess)
            return rec_res;
          refalrts::this_is_generated_function(vm);
          do {
            // </68 & Solve-Aux$4?1/72 # True/73 >/69
            context[70] = 0;
            context[71] = 0;
            context[72] = refalrts::call_left( context[70], context[71], context[68], context[69] );
            context[73] = refalrts::ident_left( identifiers[ident_True], context[70], context[71] );
            if( ! context[73] )
              continue;
            if( ! refalrts::empty_seq( context[70], context[71] ) )
              continue;
            //DEBUG: t.Ht#1: 52
            //DEBUG: e.UsedVars#1: 54
            //DEBUG: e.Contrs#1: 56
            //DEBUG: e.He#1: 60
            //DEBUG: e.Equations#1: 62
            //DEBUG: e.Assigns#1: 64
            //DEBUG: t.Pt#1: 66
            //DEBUG: e.Pe#1: 58
            //52: t.Ht#1
            //54: e.UsedVars#1
            //56: e.Contrs#1
            //58: e.Pe#1
            //60: e.He#1
            //62: e.Equations#1
            //64: e.Assigns#1
            //66: t.Pt#1
            //77: t.Pt#1

            refalrts::reset_allocator(vm);
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = context[1];
            refalrts::alloc_open_call(vm, context[74]);
            refalrts::alloc_name(vm, context[76], functions[efunc_gen_Solvem_Aux_S4C2]);
            refalrts::copy_stvar(vm, context[77], context[66]);
            refalrts::alloc_close_call(vm, context[75]);
            refalrts::push_stack( vm, context[75] );
            refalrts::push_stack( vm, context[74] );
            res = refalrts::splice_elem( res, context[75] );
            res = refalrts::splice_stvar( res, context[77] );
            res = refalrts::splice_elem( res, context[76] );
            res = refalrts::splice_elem( res, context[74] );
            refalrts::use( res );
            refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
            if (rec_res != refalrts::cSuccess)
              return rec_res;
            refalrts::this_is_generated_function(vm);
            do {
              // </74 & Solve-Aux$4?2/78 (/81 # TkVariable/83 'e'/84 e.Index#3/79 )/82 >/75
              context[76] = 0;
              context[77] = 0;
              context[78] = refalrts::call_left( context[76], context[77], context[74], context[75] );
              context[79] = 0;
              context[80] = 0;
              context[81] = refalrts::brackets_left( context[79], context[80], context[76], context[77] );
              if( ! context[81] )
                continue;
              refalrts::bracket_pointers(context[81], context[82]);
              context[83] = refalrts::ident_left( identifiers[ident_TkVariable], context[79], context[80] );
              if( ! context[83] )
                continue;
              context[84] = refalrts::char_left( 'e', context[79], context[80] );
              if( ! context[84] )
                continue;
              if( ! refalrts::empty_seq( context[76], context[77] ) )
                continue;
              // closed e.Index#3 as range 79
              //DEBUG: t.Ht#1: 52
              //DEBUG: e.UsedVars#1: 54
              //DEBUG: e.Contrs#1: 56
              //DEBUG: e.He#1: 60
              //DEBUG: e.Equations#1: 62
              //DEBUG: e.Assigns#1: 64
              //DEBUG: t.Pt#1: 66
              //DEBUG: e.Pe#1: 58
              //DEBUG: e.Index#3: 79

              refalrts::reset_allocator(vm);
              //TRASH: {REMOVED TILE} (/9 {REMOVED TILE} )/10 {REMOVED TILE} (/33 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} # TkVariable/83 'e'/84 e.Index#3/79 {REMOVED TILE}
              //RESULT: Tile{ [[ AsIs: </0 Reuse: & Solve-Aux$4=3/4 } Tile{ AsIs: t.Pt#1/66 } Tile{ AsIs: (/13 AsIs: e.Contrs#1/56 AsIs: )/14 AsIs: (/29 } Tile{ AsIs: e.Pe#1/58 } Tile{ HalfReuse: )/35 AsIs: (/38 } Tile{ AsIs: e.He#1/60 } Tile{ AsIs: )/30 } Tile{ AsIs: t.Ht#1/52 HalfReuse: (/39 } Tile{ AsIs: e.Equations#1/62 } Tile{ AsIs: )/34 } Tile{ AsIs: (/17 AsIs: e.Assigns#1/64 AsIs: )/18 AsIs: </68 Reuse: & NewVarName/72 HalfReuse: (/73 } Tile{ AsIs: e.UsedVars#1/54 } Tile{ HalfReuse: )/69 HalfReuse: 't'/74 HalfReuse: 0/78 AsIs: (/81 } Tile{ AsIs: )/82 AsIs: >/75 AsIs: >/1 ]] }
              refalrts::update_name(context[4], functions[efunc_gen_Solvem_Aux_S4A3]);
              refalrts::reinit_close_bracket(context[35]);
              refalrts::reinit_open_bracket(context[39]);
              refalrts::update_name(context[72], functions[efunc_NewVarName]);
              refalrts::reinit_open_bracket(context[73]);
              refalrts::reinit_close_bracket(context[69]);
              refalrts::reinit_char(context[74], 't');
              refalrts::reinit_number(context[78], 0UL);
              refalrts::push_stack( vm, context[1] );
              refalrts::push_stack( vm, context[0] );
              refalrts::push_stack( vm, context[75] );
              refalrts::push_stack( vm, context[68] );
              refalrts::link_brackets( context[81], context[82] );
              refalrts::link_brackets( context[73], context[69] );
              refalrts::link_brackets( context[17], context[18] );
              refalrts::link_brackets( context[39], context[34] );
              refalrts::link_brackets( context[38], context[30] );
              refalrts::link_brackets( context[29], context[35] );
              refalrts::link_brackets( context[13], context[14] );
              refalrts::Iter trash_prev = arg_begin->prev;
              refalrts::use(trash_prev);
              refalrts::Iter res = context[82];
              res = refalrts::splice_evar( res, context[69], context[81] );
              res = refalrts::splice_evar( res, context[54], context[55] );
              res = refalrts::splice_evar( res, context[17], context[73] );
              res = refalrts::splice_evar( res, context[34], context[34] );
              res = refalrts::splice_evar( res, context[62], context[63] );
              res = refalrts::splice_evar( res, context[52], context[39] );
              res = refalrts::splice_evar( res, context[30], context[30] );
              res = refalrts::splice_evar( res, context[60], context[61] );
              res = refalrts::splice_evar( res, context[35], context[38] );
              res = refalrts::splice_evar( res, context[58], context[59] );
              res = refalrts::splice_evar( res, context[13], context[29] );
              res = refalrts::splice_evar( res, context[66], context[67] );
              refalrts::splice_to_freelist_open( vm, context[4], res );
              return refalrts::cSuccess;
            } while ( 0 );
            refalrts::stop_sentence(vm);

            refalrts::splice_to_freelist(vm, context[74], context[75]);
            continue;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          refalrts::splice_to_freelist(vm, context[68], context[69]);
          continue;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & Solve-Aux/4 (/9 e.UsedVars#1/54 )/10 (/13 e.Contrs#1/56 )/14 (/29 (/33 e.Pe#1/58 )/34 ':'/35 (/38 (/52 # TkVariable/66 'e'/67 e.Idx#1/64 )/53 )/39 )/30 e.Equations#1/60 (/17 e.Assigns#1/62 )/18 >/1
        context[54] = context[40];
        context[55] = context[41];
        context[56] = context[42];
        context[57] = context[43];
        context[58] = context[44];
        context[59] = context[45];
        context[60] = context[48];
        context[61] = context[49];
        context[62] = context[50];
        context[63] = context[51];
        context[64] = 0;
        context[65] = 0;
        if( ! refalrts::brackets_term( context[64], context[65], context[52] ) )
          continue;
        context[66] = refalrts::ident_left( identifiers[ident_TkVariable], context[64], context[65] );
        if( ! context[66] )
          continue;
        context[67] = refalrts::char_left( 'e', context[64], context[65] );
        if( ! context[67] )
          continue;
        if( ! refalrts::empty_seq( context[46], context[47] ) )
          continue;
        // closed e.UsedVars#1 as range 54
        // closed e.Contrs#1 as range 56
        // closed e.Pe#1 as range 58
        // closed e.Idx#1 as range 64
        // closed e.Equations#1 as range 60
        // closed e.Assigns#1 as range 62
        //DEBUG: e.UsedVars#1: 54
        //DEBUG: e.Contrs#1: 56
        //DEBUG: e.Pe#1: 58
        //DEBUG: e.Idx#1: 64
        //DEBUG: e.Equations#1: 60
        //DEBUG: e.Assigns#1: 62

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} (/29 (/33 {REMOVED TILE} )/34 ':'/35 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & Solve-Aux/4 AsIs: (/9 AsIs: e.UsedVars#1/54 AsIs: )/10 AsIs: (/13 AsIs: e.Contrs#1/56 AsIs: )/14 } Tile{ AsIs: e.Equations#1/60 } Tile{ AsIs: (/17 AsIs: e.Assigns#1/62 HalfReuse: (/18 } Tile{ AsIs: e.Pe#1/58 } Tile{ HalfReuse: ':'/38 AsIs: (/52 AsIs: # TkVariable/66 AsIs: 'e'/67 AsIs: e.Idx#1/64 AsIs: )/53 AsIs: )/39 AsIs: )/30 } Tile{ AsIs: >/1 ]] }
        refalrts::reinit_open_bracket(context[18]);
        refalrts::reinit_char(context[38], ':');
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[17], context[30] );
        refalrts::link_brackets( context[18], context[39] );
        refalrts::link_brackets( context[52], context[53] );
        refalrts::link_brackets( context[13], context[14] );
        refalrts::link_brackets( context[9], context[10] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[38], context[30] );
        res = refalrts::splice_evar( res, context[58], context[59] );
        res = refalrts::splice_evar( res, context[17], context[18] );
        res = refalrts::splice_evar( res, context[60], context[61] );
        refalrts::splice_to_freelist_open( vm, context[14], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & Solve-Aux/4 (/9 e.new#13/40 )/10 (/13 e.new#14/42 )/14 (/29 (/33 )/34 ':'/35 (/38 e.new#12/44 )/39 )/30 e.new#11/46 (/17 e.new#15/48 )/18 >/1
        context[40] = context[19];
        context[41] = context[20];
        context[42] = context[21];
        context[43] = context[22];
        context[44] = context[36];
        context[45] = context[37];
        context[46] = context[23];
        context[47] = context[24];
        context[48] = context[25];
        context[49] = context[26];
        if( ! refalrts::empty_seq( context[31], context[32] ) )
          continue;
        // closed e.new#13 as range 40
        // closed e.new#14 as range 42
        // closed e.new#12 as range 44
        // closed e.new#11 as range 46
        // closed e.new#15 as range 48
        do {
          // </0 & Solve-Aux/4 (/9 e.UsedVars#1/50 )/10 (/13 e.Contrs#1/52 )/14 (/29 (/33 )/34 ':'/35 (/38 t.Ht#1/60 e.He#1/54 )/39 )/30 e.Equations#1/56 (/17 e.Assigns#1/58 )/18 >/1
          context[50] = context[40];
          context[51] = context[41];
          context[52] = context[42];
          context[53] = context[43];
          context[54] = context[44];
          context[55] = context[45];
          context[56] = context[46];
          context[57] = context[47];
          context[58] = context[48];
          context[59] = context[49];
          // closed e.UsedVars#1 as range 50
          // closed e.Contrs#1 as range 52
          // closed e.Equations#1 as range 56
          // closed e.Assigns#1 as range 58
          context[61] = refalrts::tvar_left( context[60], context[54], context[55] );
          if( ! context[61] )
            continue;
          // closed e.He#1 as range 54
          //DEBUG: e.UsedVars#1: 50
          //DEBUG: e.Contrs#1: 52
          //DEBUG: e.Equations#1: 56
          //DEBUG: e.Assigns#1: 58
          //DEBUG: t.Ht#1: 60
          //DEBUG: e.He#1: 54
          //50: e.UsedVars#1
          //52: e.Contrs#1
          //54: e.He#1
          //56: e.Equations#1
          //58: e.Assigns#1
          //60: t.Ht#1
          //67: t.Ht#1

          refalrts::reset_allocator(vm);
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[1];
          refalrts::alloc_open_call(vm, context[62]);
          refalrts::alloc_name(vm, context[64], functions[efunc_gen_Solvem_Aux_S6C1]);
          refalrts::alloc_open_call(vm, context[65]);
          refalrts::alloc_name(vm, context[66], functions[efunc_IsTerm]);
          refalrts::copy_stvar(vm, context[67], context[60]);
          refalrts::alloc_close_call(vm, context[68]);
          refalrts::alloc_close_call(vm, context[63]);
          refalrts::push_stack( vm, context[63] );
          refalrts::push_stack( vm, context[62] );
          res = refalrts::splice_elem( res, context[63] );
          refalrts::push_stack( vm, context[68] );
          refalrts::push_stack( vm, context[65] );
          res = refalrts::splice_elem( res, context[68] );
          res = refalrts::splice_stvar( res, context[67] );
          res = refalrts::splice_elem( res, context[66] );
          res = refalrts::splice_elem( res, context[65] );
          res = refalrts::splice_elem( res, context[64] );
          res = refalrts::splice_elem( res, context[62] );
          refalrts::use( res );
          refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
          if (rec_res != refalrts::cSuccess)
            return rec_res;
          refalrts::this_is_generated_function(vm);
          do {
            // </62 & Solve-Aux$6?1/66 # True/67 >/63
            context[64] = 0;
            context[65] = 0;
            context[66] = refalrts::call_left( context[64], context[65], context[62], context[63] );
            context[67] = refalrts::ident_left( identifiers[ident_True], context[64], context[65] );
            if( ! context[67] )
              continue;
            if( ! refalrts::empty_seq( context[64], context[65] ) )
              continue;
            //DEBUG: e.UsedVars#1: 50
            //DEBUG: e.Contrs#1: 52
            //DEBUG: e.Equations#1: 56
            //DEBUG: e.Assigns#1: 58
            //DEBUG: t.Ht#1: 60
            //DEBUG: e.He#1: 54

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} </0 & Solve-Aux/4 (/9 e.UsedVars#1/50 )/10 (/13 e.Contrs#1/52 )/14 (/29 (/33 )/34 ':'/35 (/38 t.Ht#1/60 e.He#1/54 )/39 )/30 e.Equations#1/56 (/17 e.Assigns#1/58 )/18 </62 & Solve-Aux$6?1/66 # True/67 >/63 >/1 {REMOVED TILE}
            //RESULT: Tile{ [[ } Tile{ ]] }
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = arg_end->next;
            refalrts::splice_to_freelist_open( vm, trash_prev, res );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          refalrts::splice_to_freelist(vm, context[62], context[63]);
          continue;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & Solve-Aux/4 (/9 e.UsedVars#1/50 )/10 (/13 e.Contrs#1/52 )/14 (/29 (/33 )/34 ':'/35 (/38 e.He#1/54 t.Ht#1/60 )/39 )/30 e.Equations#1/56 (/17 e.Assigns#1/58 )/18 >/1
        context[50] = context[40];
        context[51] = context[41];
        context[52] = context[42];
        context[53] = context[43];
        context[54] = context[44];
        context[55] = context[45];
        context[56] = context[46];
        context[57] = context[47];
        context[58] = context[48];
        context[59] = context[49];
        // closed e.UsedVars#1 as range 50
        // closed e.Contrs#1 as range 52
        // closed e.Equations#1 as range 56
        // closed e.Assigns#1 as range 58
        context[61] = refalrts::tvar_right( context[60], context[54], context[55] );
        if( ! context[61] )
          continue;
        // closed e.He#1 as range 54
        //DEBUG: e.UsedVars#1: 50
        //DEBUG: e.Contrs#1: 52
        //DEBUG: e.Equations#1: 56
        //DEBUG: e.Assigns#1: 58
        //DEBUG: t.Ht#1: 60
        //DEBUG: e.He#1: 54
        //50: e.UsedVars#1
        //52: e.Contrs#1
        //54: e.He#1
        //56: e.Equations#1
        //58: e.Assigns#1
        //60: t.Ht#1
        //67: t.Ht#1

        refalrts::reset_allocator(vm);
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        refalrts::alloc_open_call(vm, context[62]);
        refalrts::alloc_name(vm, context[64], functions[efunc_gen_Solvem_Aux_S7C1]);
        refalrts::alloc_open_call(vm, context[65]);
        refalrts::alloc_name(vm, context[66], functions[efunc_IsTerm]);
        refalrts::copy_stvar(vm, context[67], context[60]);
        refalrts::alloc_close_call(vm, context[68]);
        refalrts::alloc_close_call(vm, context[63]);
        refalrts::push_stack( vm, context[63] );
        refalrts::push_stack( vm, context[62] );
        res = refalrts::splice_elem( res, context[63] );
        refalrts::push_stack( vm, context[68] );
        refalrts::push_stack( vm, context[65] );
        res = refalrts::splice_elem( res, context[68] );
        res = refalrts::splice_stvar( res, context[67] );
        res = refalrts::splice_elem( res, context[66] );
        res = refalrts::splice_elem( res, context[65] );
        res = refalrts::splice_elem( res, context[64] );
        res = refalrts::splice_elem( res, context[62] );
        refalrts::use( res );
        refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
        if (rec_res != refalrts::cSuccess)
          return rec_res;
        refalrts::this_is_generated_function(vm);
        do {
          // </62 & Solve-Aux$7?1/66 # True/67 >/63
          context[64] = 0;
          context[65] = 0;
          context[66] = refalrts::call_left( context[64], context[65], context[62], context[63] );
          context[67] = refalrts::ident_left( identifiers[ident_True], context[64], context[65] );
          if( ! context[67] )
            continue;
          if( ! refalrts::empty_seq( context[64], context[65] ) )
            continue;
          //DEBUG: e.UsedVars#1: 50
          //DEBUG: e.Contrs#1: 52
          //DEBUG: e.Equations#1: 56
          //DEBUG: e.Assigns#1: 58
          //DEBUG: t.Ht#1: 60
          //DEBUG: e.He#1: 54

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} </0 & Solve-Aux/4 (/9 e.UsedVars#1/50 )/10 (/13 e.Contrs#1/52 )/14 (/29 (/33 )/34 ':'/35 (/38 e.He#1/54 t.Ht#1/60 )/39 )/30 e.Equations#1/56 (/17 e.Assigns#1/58 )/18 </62 & Solve-Aux$7?1/66 # True/67 >/63 >/1 {REMOVED TILE}
          //RESULT: Tile{ [[ } Tile{ ]] }
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = arg_end->next;
          refalrts::splice_to_freelist_open( vm, trash_prev, res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        refalrts::splice_to_freelist(vm, context[62], context[63]);
        continue;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & Solve-Aux/4 (/9 e.UsedVars#1/40 )/10 (/13 e.Contrs#1/42 )/14 (/29 (/33 e.Pt#1/44 )/34 ':'/35 (/38 )/39 )/30 e.Equations#1/46 (/17 e.Assigns#1/48 )/18 >/1
      context[40] = context[19];
      context[41] = context[20];
      context[42] = context[21];
      context[43] = context[22];
      context[44] = context[31];
      context[45] = context[32];
      context[46] = context[23];
      context[47] = context[24];
      context[48] = context[25];
      context[49] = context[26];
      if( ! refalrts::empty_seq( context[36], context[37] ) )
        continue;
      // closed e.UsedVars#1 as range 40
      // closed e.Contrs#1 as range 42
      // closed e.Pt#1 as range 44
      // closed e.Equations#1 as range 46
      // closed e.Assigns#1 as range 48
      //DEBUG: e.UsedVars#1: 40
      //DEBUG: e.Contrs#1: 42
      //DEBUG: e.Pt#1: 44
      //DEBUG: e.Equations#1: 46
      //DEBUG: e.Assigns#1: 48

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Solve-Aux$8:1/4 AsIs: (/9 AsIs: e.UsedVars#1/40 AsIs: )/10 AsIs: (/13 AsIs: e.Contrs#1/42 AsIs: )/14 AsIs: (/29 } Tile{ AsIs: e.Equations#1/46 } Tile{ AsIs: )/39 } Tile{ AsIs: (/17 AsIs: e.Assigns#1/48 AsIs: )/18 } Tile{ AsIs: (/33 AsIs: e.Pt#1/44 AsIs: )/34 HalfReuse: </35 HalfReuse: & IsFreeVariableSeq/38 } e.Pt#1/44/50 Tile{ HalfReuse: >/30 } Tile{ AsIs: >/1 ]] }
      refalrts::copy_evar(vm, context[50], context[51], context[44], context[45]);
      refalrts::update_name(context[4], functions[efunc_gen_Solvem_Aux_S8B1]);
      refalrts::reinit_open_call(context[35]);
      refalrts::reinit_name(context[38], functions[efunc_IsFreeVariableSeq]);
      refalrts::reinit_close_call(context[30]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[30] );
      refalrts::push_stack( vm, context[35] );
      refalrts::link_brackets( context[33], context[34] );
      refalrts::link_brackets( context[17], context[18] );
      refalrts::link_brackets( context[29], context[39] );
      refalrts::link_brackets( context[13], context[14] );
      refalrts::link_brackets( context[9], context[10] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[30], context[30] );
      res = refalrts::splice_evar( res, context[50], context[51] );
      res = refalrts::splice_evar( res, context[33], context[38] );
      res = refalrts::splice_evar( res, context[17], context[18] );
      res = refalrts::splice_evar( res, context[39], context[39] );
      res = refalrts::splice_evar( res, context[46], context[47] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Solve-Aux/4 (/9 e.UsedVars#1/19 )/10 (/13 e.Contrs#1/21 )/14 (/17 e.Assigns#1/23 )/18 >/1
    context[19] = context[7];
    context[20] = context[8];
    context[21] = context[11];
    context[22] = context[12];
    context[23] = context[15];
    context[24] = context[16];
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    // closed e.UsedVars#1 as range 19
    // closed e.Contrs#1 as range 21
    // closed e.Assigns#1 as range 23
    //DEBUG: e.UsedVars#1: 19
    //DEBUG: e.Contrs#1: 21
    //DEBUG: e.Assigns#1: 23

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} & Solve-Aux/4 (/9 e.UsedVars#1/19 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 } Tile{ HalfReuse: & Solution-PostProcess/10 AsIs: (/13 AsIs: e.Contrs#1/21 AsIs: )/14 AsIs: (/17 AsIs: e.Assigns#1/23 AsIs: )/18 AsIs: >/1 ]] }
    refalrts::reinit_name(context[10], functions[efunc_Solutionm_PostProcess]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[17], context[18] );
    refalrts::link_brackets( context[13], context[14] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[10];
    refalrts::splice_to_freelist_open( vm, context[0], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Solve-Aux/4 e.Other#1/2 >/1
  // closed e.Other#1 as range 2
  //DEBUG: e.Other#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Solve-Aux/4 e.Other#1/2 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: # Undefined/1 ]] }
  refalrts::reinit_ident(context[1], identifiers[ident_Undefined]);
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Solvem_Aux("Solve-Aux", COOKIE1_, COOKIE2_, func_Solvem_Aux);


static refalrts::FnResult func_gen_Solvem_TermEquation_S6A2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 45 elems
  refalrts::Iter context[45];
  refalrts::zeros( context, 45 );
  // </0 & Solve-TermEquation$6=2/4 t.PTvar#1/5 (/9 e.Contrs#1/7 )/10 (/13 e.Equations#1/11 )/14 (/17 e.HBody#1/15 )/18 (/21 e.Assigns#1/19 )/22 t.NewVars#3/23 'e'/25 e.NewIndex#3/2 >/1
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
  // closed e.Contrs#1 as range 7
  // closed e.Equations#1 as range 11
  // closed e.HBody#1 as range 15
  // closed e.Assigns#1 as range 19
  context[24] = refalrts::tvar_left( context[23], context[2], context[3] );
  if( ! context[24] )
    return refalrts::cRecognitionImpossible;
  context[25] = refalrts::char_left( 'e', context[2], context[3] );
  if( ! context[25] )
    return refalrts::cRecognitionImpossible;
  // closed e.NewIndex#3 as range 2
  //DEBUG: t.PTvar#1: 5
  //DEBUG: e.Contrs#1: 7
  //DEBUG: e.Equations#1: 11
  //DEBUG: e.HBody#1: 15
  //DEBUG: e.Assigns#1: 19
  //DEBUG: t.NewVars#3: 23
  //DEBUG: e.NewIndex#3: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } # Success/26 Tile{ AsIs: t.NewVars#3/23 } </27 Tile{ HalfReuse: & AddContraction/0 HalfReuse: (/4 AsIs: t.PTvar#1/5 } ':'/28 Tile{ AsIs: (/13 } Tile{ HalfReuse: # Brackets/14 AsIs: (/17 } # TkVariable/29 Tile{ AsIs: 'e'/25 AsIs: e.NewIndex#3/2 HalfReuse: )/1 } )/30 )/31 Tile{ AsIs: (/9 AsIs: e.Contrs#1/7 AsIs: )/10 } Tile{ AsIs: e.Equations#1/11 } (/32 (/33 (/34 # TkVariable/35 'e'/36 e.NewIndex#3/2/37 )/39 )/40 ':'/41 (/42 Tile{ AsIs: e.HBody#1/15 } )/43 Tile{ AsIs: )/18 AsIs: (/21 AsIs: e.Assigns#1/19 AsIs: )/22 } >/44 Tile{ ]] }
  refalrts::alloc_ident(vm, context[26], identifiers[ident_Success]);
  refalrts::alloc_open_call(vm, context[27]);
  refalrts::alloc_char(vm, context[28], ':');
  refalrts::alloc_ident(vm, context[29], identifiers[ident_TkVariable]);
  refalrts::alloc_close_bracket(vm, context[30]);
  refalrts::alloc_close_bracket(vm, context[31]);
  refalrts::alloc_open_bracket(vm, context[32]);
  refalrts::alloc_open_bracket(vm, context[33]);
  refalrts::alloc_open_bracket(vm, context[34]);
  refalrts::alloc_ident(vm, context[35], identifiers[ident_TkVariable]);
  refalrts::alloc_char(vm, context[36], 'e');
  refalrts::copy_evar(vm, context[37], context[38], context[2], context[3]);
  refalrts::alloc_close_bracket(vm, context[39]);
  refalrts::alloc_close_bracket(vm, context[40]);
  refalrts::alloc_char(vm, context[41], ':');
  refalrts::alloc_open_bracket(vm, context[42]);
  refalrts::alloc_close_bracket(vm, context[43]);
  refalrts::alloc_close_call(vm, context[44]);
  refalrts::reinit_name(context[0], functions[efunc_AddContraction]);
  refalrts::reinit_open_bracket(context[4]);
  refalrts::reinit_ident(context[14], identifiers[ident_Brackets]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::push_stack( vm, context[44] );
  refalrts::push_stack( vm, context[27] );
  refalrts::link_brackets( context[21], context[22] );
  refalrts::link_brackets( context[32], context[18] );
  refalrts::link_brackets( context[42], context[43] );
  refalrts::link_brackets( context[33], context[40] );
  refalrts::link_brackets( context[34], context[39] );
  refalrts::link_brackets( context[9], context[10] );
  refalrts::link_brackets( context[4], context[31] );
  refalrts::link_brackets( context[13], context[30] );
  refalrts::link_brackets( context[17], context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[44], context[44] );
  res = refalrts::splice_evar( res, context[18], context[22] );
  res = refalrts::splice_evar( res, context[43], context[43] );
  res = refalrts::splice_evar( res, context[15], context[16] );
  res = refalrts::splice_evar( res, context[32], context[42] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[30], context[31] );
  res = refalrts::splice_evar( res, context[25], context[1] );
  res = refalrts::splice_evar( res, context[29], context[29] );
  res = refalrts::splice_evar( res, context[14], context[17] );
  res = refalrts::splice_evar( res, context[13], context[13] );
  res = refalrts::splice_evar( res, context[28], context[28] );
  res = refalrts::splice_evar( res, context[0], context[6] );
  res = refalrts::splice_evar( res, context[27], context[27] );
  res = refalrts::splice_evar( res, context[23], context[24] );
  res = refalrts::splice_evar( res, context[26], context[26] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Solvem_TermEquation_S6A2("Solve-TermEquation$6=2", COOKIE1_, COOKIE2_, func_gen_Solvem_TermEquation_S6A2);


static refalrts::FnResult func_gen_Solvem_TermEquation_S7A2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 49 elems
  refalrts::Iter context[49];
  refalrts::zeros( context, 49 );
  // </0 & Solve-TermEquation$7=2/4 t.PTvar#1/5 (/9 e.Name#1/7 )/10 (/13 e.Contrs#1/11 )/14 (/17 e.Equations#1/15 )/18 (/21 e.HBody#1/19 )/22 (/25 e.Assigns#1/23 )/26 t.NewVars#3/27 'e'/29 e.NewIndex#3/2 >/1
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
  // closed e.Name#1 as range 7
  // closed e.Contrs#1 as range 11
  // closed e.Equations#1 as range 15
  // closed e.HBody#1 as range 19
  // closed e.Assigns#1 as range 23
  context[28] = refalrts::tvar_left( context[27], context[2], context[3] );
  if( ! context[28] )
    return refalrts::cRecognitionImpossible;
  context[29] = refalrts::char_left( 'e', context[2], context[3] );
  if( ! context[29] )
    return refalrts::cRecognitionImpossible;
  // closed e.NewIndex#3 as range 2
  //DEBUG: t.PTvar#1: 5
  //DEBUG: e.Name#1: 7
  //DEBUG: e.Contrs#1: 11
  //DEBUG: e.Equations#1: 15
  //DEBUG: e.HBody#1: 19
  //DEBUG: e.Assigns#1: 23
  //DEBUG: t.NewVars#3: 27
  //DEBUG: e.NewIndex#3: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } # Success/30 Tile{ AsIs: t.NewVars#3/27 } Tile{ AsIs: </0 Reuse: & AddContraction/4 } (/31 Tile{ AsIs: t.PTvar#1/5 } ':'/32 (/33 # ADT-Brackets/34 Tile{ AsIs: (/9 AsIs: e.Name#1/7 AsIs: )/10 AsIs: (/13 } # TkVariable/35 Tile{ AsIs: 'e'/29 AsIs: e.NewIndex#3/2 HalfReuse: )/1 } Tile{ AsIs: )/14 } )/36 (/37 Tile{ AsIs: e.Contrs#1/11 } Tile{ HalfReuse: )/17 AsIs: e.Equations#1/15 HalfReuse: (/18 AsIs: (/21 } (/38 # TkVariable/39 'e'/40 e.NewIndex#3/2/41 )/43 )/44 ':'/45 (/46 Tile{ AsIs: e.HBody#1/19 } )/47 Tile{ AsIs: )/22 AsIs: (/25 AsIs: e.Assigns#1/23 AsIs: )/26 } >/48 Tile{ ]] }
  refalrts::alloc_ident(vm, context[30], identifiers[ident_Success]);
  refalrts::alloc_open_bracket(vm, context[31]);
  refalrts::alloc_char(vm, context[32], ':');
  refalrts::alloc_open_bracket(vm, context[33]);
  refalrts::alloc_ident(vm, context[34], identifiers[ident_ADTm_Brackets]);
  refalrts::alloc_ident(vm, context[35], identifiers[ident_TkVariable]);
  refalrts::alloc_close_bracket(vm, context[36]);
  refalrts::alloc_open_bracket(vm, context[37]);
  refalrts::alloc_open_bracket(vm, context[38]);
  refalrts::alloc_ident(vm, context[39], identifiers[ident_TkVariable]);
  refalrts::alloc_char(vm, context[40], 'e');
  refalrts::copy_evar(vm, context[41], context[42], context[2], context[3]);
  refalrts::alloc_close_bracket(vm, context[43]);
  refalrts::alloc_close_bracket(vm, context[44]);
  refalrts::alloc_char(vm, context[45], ':');
  refalrts::alloc_open_bracket(vm, context[46]);
  refalrts::alloc_close_bracket(vm, context[47]);
  refalrts::alloc_close_call(vm, context[48]);
  refalrts::update_name(context[4], functions[efunc_AddContraction]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::reinit_close_bracket(context[17]);
  refalrts::reinit_open_bracket(context[18]);
  refalrts::push_stack( vm, context[48] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[25], context[26] );
  refalrts::link_brackets( context[18], context[22] );
  refalrts::link_brackets( context[46], context[47] );
  refalrts::link_brackets( context[21], context[44] );
  refalrts::link_brackets( context[38], context[43] );
  refalrts::link_brackets( context[37], context[17] );
  refalrts::link_brackets( context[31], context[36] );
  refalrts::link_brackets( context[33], context[14] );
  refalrts::link_brackets( context[13], context[1] );
  refalrts::link_brackets( context[9], context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[48], context[48] );
  res = refalrts::splice_evar( res, context[22], context[26] );
  res = refalrts::splice_evar( res, context[47], context[47] );
  res = refalrts::splice_evar( res, context[19], context[20] );
  res = refalrts::splice_evar( res, context[38], context[46] );
  res = refalrts::splice_evar( res, context[17], context[21] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_evar( res, context[36], context[37] );
  res = refalrts::splice_evar( res, context[14], context[14] );
  res = refalrts::splice_evar( res, context[29], context[1] );
  res = refalrts::splice_evar( res, context[35], context[35] );
  res = refalrts::splice_evar( res, context[9], context[13] );
  res = refalrts::splice_evar( res, context[32], context[34] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[31], context[31] );
  res = refalrts::splice_evar( res, context[0], context[4] );
  res = refalrts::splice_evar( res, context[27], context[28] );
  res = refalrts::splice_evar( res, context[30], context[30] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Solvem_TermEquation_S7A2("Solve-TermEquation$7=2", COOKIE1_, COOKIE2_, func_gen_Solvem_TermEquation_S7A2);


static refalrts::FnResult func_gen_Solvem_TermEquation_S9A2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 40 elems
  refalrts::Iter context[40];
  refalrts::zeros( context, 40 );
  // </0 & Solve-TermEquation$9=2/4 t.PTvar#1/5 (/9 e.Contrs#1/7 )/10 (/13 e.Equations#1/11 )/14 (/17 e.Assigns#1/15 )/18 t.HSvar#1/19 (/23 e.UsedVars#3/21 )/24 's'/25 e.sIdx#3/2 >/1
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
  context[15] = 0;
  context[16] = 0;
  context[17] = refalrts::brackets_left( context[15], context[16], context[2], context[3] );
  if( ! context[17] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[17], context[18]);
  // closed e.Contrs#1 as range 7
  // closed e.Equations#1 as range 11
  // closed e.Assigns#1 as range 15
  context[20] = refalrts::tvar_left( context[19], context[2], context[3] );
  if( ! context[20] )
    return refalrts::cRecognitionImpossible;
  context[21] = 0;
  context[22] = 0;
  context[23] = refalrts::brackets_left( context[21], context[22], context[2], context[3] );
  if( ! context[23] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[23], context[24]);
  context[25] = refalrts::char_left( 's', context[2], context[3] );
  if( ! context[25] )
    return refalrts::cRecognitionImpossible;
  // closed e.UsedVars#3 as range 21
  // closed e.sIdx#3 as range 2
  //DEBUG: t.PTvar#1: 5
  //DEBUG: e.Contrs#1: 7
  //DEBUG: e.Equations#1: 11
  //DEBUG: e.Assigns#1: 15
  //DEBUG: t.HSvar#1: 19
  //DEBUG: e.UsedVars#3: 21
  //DEBUG: e.sIdx#3: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } # Success/26 Tile{ AsIs: (/23 AsIs: e.UsedVars#3/21 AsIs: )/24 HalfReuse: </25 } Tile{ HalfReuse: & AddContraction/0 HalfReuse: (/4 AsIs: t.PTvar#1/5 } ':'/27 Tile{ AsIs: (/13 } # TkVariable/28 's'/29 e.sIdx#3/2/30 Tile{ AsIs: )/14 } )/32 Tile{ AsIs: (/9 AsIs: e.Contrs#1/7 AsIs: )/10 } Tile{ AsIs: e.Equations#1/11 } Tile{ AsIs: (/17 AsIs: e.Assigns#1/15 HalfReuse: (/18 } (/33 # TkVariable/34 's'/35 Tile{ AsIs: e.sIdx#3/2 } )/36 ':'/37 Tile{ AsIs: t.HSvar#1/19 } )/38 )/39 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_ident(vm, context[26], identifiers[ident_Success]);
  refalrts::alloc_char(vm, context[27], ':');
  refalrts::alloc_ident(vm, context[28], identifiers[ident_TkVariable]);
  refalrts::alloc_char(vm, context[29], 's');
  refalrts::copy_evar(vm, context[30], context[31], context[2], context[3]);
  refalrts::alloc_close_bracket(vm, context[32]);
  refalrts::alloc_open_bracket(vm, context[33]);
  refalrts::alloc_ident(vm, context[34], identifiers[ident_TkVariable]);
  refalrts::alloc_char(vm, context[35], 's');
  refalrts::alloc_close_bracket(vm, context[36]);
  refalrts::alloc_char(vm, context[37], ':');
  refalrts::alloc_close_bracket(vm, context[38]);
  refalrts::alloc_close_bracket(vm, context[39]);
  refalrts::reinit_open_call(context[25]);
  refalrts::reinit_name(context[0], functions[efunc_AddContraction]);
  refalrts::reinit_open_bracket(context[4]);
  refalrts::reinit_open_bracket(context[18]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[25] );
  refalrts::link_brackets( context[17], context[39] );
  refalrts::link_brackets( context[18], context[38] );
  refalrts::link_brackets( context[33], context[36] );
  refalrts::link_brackets( context[9], context[10] );
  refalrts::link_brackets( context[4], context[32] );
  refalrts::link_brackets( context[13], context[14] );
  refalrts::link_brackets( context[23], context[24] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[38], context[39] );
  res = refalrts::splice_evar( res, context[19], context[20] );
  res = refalrts::splice_evar( res, context[36], context[37] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[33], context[35] );
  res = refalrts::splice_evar( res, context[17], context[18] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[32], context[32] );
  res = refalrts::splice_evar( res, context[14], context[14] );
  res = refalrts::splice_evar( res, context[30], context[31] );
  res = refalrts::splice_evar( res, context[28], context[29] );
  res = refalrts::splice_evar( res, context[13], context[13] );
  res = refalrts::splice_evar( res, context[27], context[27] );
  res = refalrts::splice_evar( res, context[0], context[6] );
  res = refalrts::splice_evar( res, context[23], context[25] );
  res = refalrts::splice_evar( res, context[26], context[26] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Solvem_TermEquation_S9A2("Solve-TermEquation$9=2", COOKIE1_, COOKIE2_, func_gen_Solvem_TermEquation_S9A2);


static refalrts::FnResult func_Solvem_TermEquation(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 64 elems
  refalrts::Iter context[64];
  refalrts::zeros( context, 64 );
  // </0 & Solve-TermEquation/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & Solve-TermEquation/4 (/9 e.new#1/7 )/10 t.new#2/11 t.new#3/13 e.new#4/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[7] = 0;
    context[8] = 0;
    context[9] = refalrts::brackets_left( context[7], context[8], context[5], context[6] );
    if( ! context[9] )
      continue;
    refalrts::bracket_pointers(context[9], context[10]);
    // closed e.new#1 as range 7
    context[12] = refalrts::tvar_left( context[11], context[5], context[6] );
    if( ! context[12] )
      continue;
    context[14] = refalrts::tvar_left( context[13], context[5], context[6] );
    if( ! context[14] )
      continue;
    // closed e.new#4 as range 5
    do {
      // </0 & Solve-TermEquation/4 (/9 e.UsedVars#1/15 )/10 t.Symbol#1/11 t.Symbol#1/13 e.PRTC#1/17 >/1
      context[15] = context[7];
      context[16] = context[8];
      context[17] = context[5];
      context[18] = context[6];
      if( ! refalrts::repeated_stvar_term( vm, context[13], context[11] ) )
        continue;
      // closed e.UsedVars#1 as range 15
      // closed e.PRTC#1 as range 17
      //DEBUG: t.Symbol#1: 11
      //DEBUG: e.UsedVars#1: 15
      //DEBUG: e.PRTC#1: 17
      //11: t.Symbol#1
      //13: t.Symbol#1
      //15: e.UsedVars#1
      //17: e.PRTC#1
      //22: t.Symbol#1

      refalrts::reset_allocator(vm);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::alloc_open_call(vm, context[19]);
      refalrts::alloc_name(vm, context[21], functions[efunc_gen_Solvem_TermEquation_S1C1]);
      refalrts::copy_stvar(vm, context[22], context[13]);
      refalrts::alloc_close_call(vm, context[20]);
      refalrts::push_stack( vm, context[20] );
      refalrts::push_stack( vm, context[19] );
      res = refalrts::splice_elem( res, context[20] );
      res = refalrts::splice_stvar( res, context[22] );
      res = refalrts::splice_elem( res, context[21] );
      res = refalrts::splice_elem( res, context[19] );
      refalrts::use( res );
      refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
      if (rec_res != refalrts::cSuccess)
        return rec_res;
      refalrts::this_is_generated_function(vm);
      do {
        // </19 & Solve-TermEquation$1?1/23 (/26 # Symbol/28 s.Type#2/29 e.Info#2/24 )/27 >/20
        context[21] = 0;
        context[22] = 0;
        context[23] = refalrts::call_left( context[21], context[22], context[19], context[20] );
        context[24] = 0;
        context[25] = 0;
        context[26] = refalrts::brackets_left( context[24], context[25], context[21], context[22] );
        if( ! context[26] )
          continue;
        refalrts::bracket_pointers(context[26], context[27]);
        context[28] = refalrts::ident_left( identifiers[ident_Symbol], context[24], context[25] );
        if( ! context[28] )
          continue;
        if( ! refalrts::empty_seq( context[21], context[22] ) )
          continue;
        if( ! refalrts::svar_left( context[29], context[24], context[25] ) )
          continue;
        // closed e.Info#2 as range 24
        //DEBUG: t.Symbol#1: 11
        //DEBUG: e.UsedVars#1: 15
        //DEBUG: e.PRTC#1: 17
        //DEBUG: s.Type#2: 29
        //DEBUG: e.Info#2: 24

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 {REMOVED TILE} t.Symbol#1/11 t.Symbol#1/13 {REMOVED TILE} </19 & Solve-TermEquation$1?1/23 (/26 # Symbol/28 s.Type#2/29 e.Info#2/24 )/27 >/20 >/1 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: # Success/4 AsIs: (/9 AsIs: e.UsedVars#1/15 AsIs: )/10 } Tile{ AsIs: e.PRTC#1/17 } Tile{ ]] }
        refalrts::reinit_ident(context[4], identifiers[ident_Success]);
        refalrts::link_brackets( context[9], context[10] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[17], context[18] );
        res = refalrts::splice_evar( res, context[4], context[10] );
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      refalrts::splice_to_freelist(vm, context[19], context[20]);
      continue;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Solve-TermEquation/4 (/9 e.new#10/15 )/10 t.new#5/11 t.new#6/13 (/21 e.new#7/19 )/22 e.new#8/17 (/25 e.new#9/23 )/26 >/1
    context[15] = context[7];
    context[16] = context[8];
    context[17] = context[5];
    context[18] = context[6];
    context[19] = 0;
    context[20] = 0;
    context[21] = refalrts::brackets_left( context[19], context[20], context[17], context[18] );
    if( ! context[21] )
      continue;
    refalrts::bracket_pointers(context[21], context[22]);
    context[23] = 0;
    context[24] = 0;
    context[25] = refalrts::brackets_right( context[23], context[24], context[17], context[18] );
    if( ! context[25] )
      continue;
    refalrts::bracket_pointers(context[25], context[26]);
    // closed e.new#10 as range 15
    // closed e.new#7 as range 19
    // closed e.new#8 as range 17
    // closed e.new#9 as range 23
    do {
      // </0 & Solve-TermEquation/4 (/9 e.UsedVars#1/27 )/10 t.Symbol#1/11 t.Svar#1/13 (/21 e.Contrs#1/29 )/22 e.Equations#1/31 (/25 e.Assigns#1/33 )/26 >/1
      context[27] = context[15];
      context[28] = context[16];
      context[29] = context[19];
      context[30] = context[20];
      context[31] = context[17];
      context[32] = context[18];
      context[33] = context[23];
      context[34] = context[24];
      // closed e.UsedVars#1 as range 27
      // closed e.Contrs#1 as range 29
      // closed e.Equations#1 as range 31
      // closed e.Assigns#1 as range 33
      //DEBUG: t.Symbol#1: 11
      //DEBUG: t.Svar#1: 13
      //DEBUG: e.UsedVars#1: 27
      //DEBUG: e.Contrs#1: 29
      //DEBUG: e.Equations#1: 31
      //DEBUG: e.Assigns#1: 33
      //11: t.Symbol#1
      //13: t.Svar#1
      //27: e.UsedVars#1
      //29: e.Contrs#1
      //31: e.Equations#1
      //33: e.Assigns#1
      //40: t.Symbol#1

      refalrts::reset_allocator(vm);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::alloc_open_call(vm, context[35]);
      refalrts::alloc_name(vm, context[37], functions[efunc_gen_Solvem_TermEquation_S2C1]);
      refalrts::alloc_open_call(vm, context[38]);
      refalrts::alloc_name(vm, context[39], functions[efunc_IsSVarSubset]);
      refalrts::copy_stvar(vm, context[40], context[11]);
      refalrts::alloc_close_call(vm, context[41]);
      refalrts::alloc_close_call(vm, context[36]);
      refalrts::push_stack( vm, context[36] );
      refalrts::push_stack( vm, context[35] );
      res = refalrts::splice_elem( res, context[36] );
      refalrts::push_stack( vm, context[41] );
      refalrts::push_stack( vm, context[38] );
      res = refalrts::splice_elem( res, context[41] );
      res = refalrts::splice_stvar( res, context[40] );
      res = refalrts::splice_elem( res, context[39] );
      res = refalrts::splice_elem( res, context[38] );
      res = refalrts::splice_elem( res, context[37] );
      res = refalrts::splice_elem( res, context[35] );
      refalrts::use( res );
      refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
      if (rec_res != refalrts::cSuccess)
        return rec_res;
      refalrts::this_is_generated_function(vm);
      do {
        // </35 & Solve-TermEquation$2?1/39 # True/40 >/36
        context[37] = 0;
        context[38] = 0;
        context[39] = refalrts::call_left( context[37], context[38], context[35], context[36] );
        context[40] = refalrts::ident_left( identifiers[ident_True], context[37], context[38] );
        if( ! context[40] )
          continue;
        if( ! refalrts::empty_seq( context[37], context[38] ) )
          continue;
        //DEBUG: t.Symbol#1: 11
        //DEBUG: t.Svar#1: 13
        //DEBUG: e.UsedVars#1: 27
        //DEBUG: e.Contrs#1: 29
        //DEBUG: e.Equations#1: 31
        //DEBUG: e.Assigns#1: 33
        //11: t.Symbol#1
        //13: t.Svar#1
        //27: e.UsedVars#1
        //29: e.Contrs#1
        //31: e.Equations#1
        //33: e.Assigns#1
        //44: t.Svar#1

        refalrts::reset_allocator(vm);
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        refalrts::alloc_open_call(vm, context[41]);
        refalrts::alloc_name(vm, context[43], functions[efunc_gen_Solvem_TermEquation_S2C2]);
        refalrts::copy_stvar(vm, context[44], context[13]);
        refalrts::alloc_close_call(vm, context[42]);
        refalrts::push_stack( vm, context[42] );
        refalrts::push_stack( vm, context[41] );
        res = refalrts::splice_elem( res, context[42] );
        res = refalrts::splice_stvar( res, context[44] );
        res = refalrts::splice_elem( res, context[43] );
        res = refalrts::splice_elem( res, context[41] );
        refalrts::use( res );
        refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
        if (rec_res != refalrts::cSuccess)
          return rec_res;
        refalrts::this_is_generated_function(vm);
        do {
          // </41 & Solve-TermEquation$2?2/45 (/48 # TkVariable/50 's'/51 e.Hindex#3/46 )/49 >/42
          context[43] = 0;
          context[44] = 0;
          context[45] = refalrts::call_left( context[43], context[44], context[41], context[42] );
          context[46] = 0;
          context[47] = 0;
          context[48] = refalrts::brackets_left( context[46], context[47], context[43], context[44] );
          if( ! context[48] )
            continue;
          refalrts::bracket_pointers(context[48], context[49]);
          context[50] = refalrts::ident_left( identifiers[ident_TkVariable], context[46], context[47] );
          if( ! context[50] )
            continue;
          context[51] = refalrts::char_left( 's', context[46], context[47] );
          if( ! context[51] )
            continue;
          if( ! refalrts::empty_seq( context[43], context[44] ) )
            continue;
          // closed e.Hindex#3 as range 46
          //DEBUG: t.Symbol#1: 11
          //DEBUG: t.Svar#1: 13
          //DEBUG: e.UsedVars#1: 27
          //DEBUG: e.Contrs#1: 29
          //DEBUG: e.Equations#1: 31
          //DEBUG: e.Assigns#1: 33
          //DEBUG: e.Hindex#3: 46

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} </0 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} </35 & Solve-TermEquation$2?1/39 # True/40 >/36 </41 & Solve-TermEquation$2?2/45 (/48 # TkVariable/50 {REMOVED TILE} e.Hindex#3/46 )/49 {REMOVED TILE}
          //RESULT: Tile{ [[ } Tile{ HalfReuse: # Success/4 AsIs: (/9 AsIs: e.UsedVars#1/27 AsIs: )/10 } Tile{ AsIs: (/21 AsIs: e.Contrs#1/29 AsIs: )/22 AsIs: e.Equations#1/31 AsIs: (/25 AsIs: e.Assigns#1/33 HalfReuse: (/26 } Tile{ AsIs: t.Symbol#1/11 } Tile{ Reuse: ':'/51 } Tile{ AsIs: t.Svar#1/13 } Tile{ HalfReuse: )/42 HalfReuse: )/1 ]] }
          refalrts::reinit_ident(context[4], identifiers[ident_Success]);
          refalrts::reinit_open_bracket(context[26]);
          refalrts::update_char(context[51], ':');
          refalrts::reinit_close_bracket(context[42]);
          refalrts::reinit_close_bracket(context[1]);
          refalrts::link_brackets( context[25], context[1] );
          refalrts::link_brackets( context[26], context[42] );
          refalrts::link_brackets( context[21], context[22] );
          refalrts::link_brackets( context[9], context[10] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[42];
          res = refalrts::splice_evar( res, context[13], context[14] );
          res = refalrts::splice_evar( res, context[51], context[51] );
          res = refalrts::splice_evar( res, context[11], context[12] );
          res = refalrts::splice_evar( res, context[21], context[26] );
          res = refalrts::splice_evar( res, context[4], context[10] );
          refalrts::splice_to_freelist_open( vm, trash_prev, res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        refalrts::splice_to_freelist(vm, context[41], context[42]);
        continue;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      refalrts::splice_to_freelist(vm, context[35], context[36]);
      continue;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Solve-TermEquation/4 (/9 e.UsedVars#1/27 )/10 t.PSvar#1/11 t.HSvar#1/13 (/21 e.Contrs#1/29 )/22 e.Equations#1/31 (/25 e.Assigns#1/33 )/26 >/1
      context[27] = context[15];
      context[28] = context[16];
      context[29] = context[19];
      context[30] = context[20];
      context[31] = context[17];
      context[32] = context[18];
      context[33] = context[23];
      context[34] = context[24];
      // closed e.UsedVars#1 as range 27
      // closed e.Contrs#1 as range 29
      // closed e.Equations#1 as range 31
      // closed e.Assigns#1 as range 33
      //DEBUG: t.PSvar#1: 11
      //DEBUG: t.HSvar#1: 13
      //DEBUG: e.UsedVars#1: 27
      //DEBUG: e.Contrs#1: 29
      //DEBUG: e.Equations#1: 31
      //DEBUG: e.Assigns#1: 33
      //11: t.PSvar#1
      //13: t.HSvar#1
      //27: e.UsedVars#1
      //29: e.Contrs#1
      //31: e.Equations#1
      //33: e.Assigns#1
      //38: t.PSvar#1
      //39: t.HSvar#1

      refalrts::reset_allocator(vm);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::alloc_open_call(vm, context[35]);
      refalrts::alloc_name(vm, context[37], functions[efunc_gen_Solvem_TermEquation_S3C1]);
      refalrts::copy_stvar(vm, context[38], context[11]);
      refalrts::copy_stvar(vm, context[39], context[13]);
      refalrts::alloc_close_call(vm, context[36]);
      refalrts::push_stack( vm, context[36] );
      refalrts::push_stack( vm, context[35] );
      res = refalrts::splice_elem( res, context[36] );
      res = refalrts::splice_stvar( res, context[39] );
      res = refalrts::splice_stvar( res, context[38] );
      res = refalrts::splice_elem( res, context[37] );
      res = refalrts::splice_elem( res, context[35] );
      refalrts::use( res );
      refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
      if (rec_res != refalrts::cSuccess)
        return rec_res;
      refalrts::this_is_generated_function(vm);
      do {
        // </35 & Solve-TermEquation$3?1/39 (/42 # TkVariable/44 's'/45 e.Pindex#2/40 )/43 (/48 # TkVariable/50 's'/51 e.Hindex#2/46 )/49 >/36
        context[37] = 0;
        context[38] = 0;
        context[39] = refalrts::call_left( context[37], context[38], context[35], context[36] );
        context[40] = 0;
        context[41] = 0;
        context[42] = refalrts::brackets_left( context[40], context[41], context[37], context[38] );
        if( ! context[42] )
          continue;
        refalrts::bracket_pointers(context[42], context[43]);
        context[44] = refalrts::ident_left( identifiers[ident_TkVariable], context[40], context[41] );
        if( ! context[44] )
          continue;
        context[45] = refalrts::char_left( 's', context[40], context[41] );
        if( ! context[45] )
          continue;
        context[46] = 0;
        context[47] = 0;
        context[48] = refalrts::brackets_left( context[46], context[47], context[37], context[38] );
        if( ! context[48] )
          continue;
        refalrts::bracket_pointers(context[48], context[49]);
        context[50] = refalrts::ident_left( identifiers[ident_TkVariable], context[46], context[47] );
        if( ! context[50] )
          continue;
        context[51] = refalrts::char_left( 's', context[46], context[47] );
        if( ! context[51] )
          continue;
        if( ! refalrts::empty_seq( context[37], context[38] ) )
          continue;
        // closed e.Pindex#2 as range 40
        // closed e.Hindex#2 as range 46
        //DEBUG: t.PSvar#1: 11
        //DEBUG: t.HSvar#1: 13
        //DEBUG: e.UsedVars#1: 27
        //DEBUG: e.Contrs#1: 29
        //DEBUG: e.Equations#1: 31
        //DEBUG: e.Assigns#1: 33
        //DEBUG: e.Pindex#2: 40
        //DEBUG: e.Hindex#2: 46

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} </35 & Solve-TermEquation$3?1/39 (/42 # TkVariable/44 {REMOVED TILE} e.Pindex#2/40 )/43 (/48 # TkVariable/50 's'/51 e.Hindex#2/46 )/49 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: # Success/4 AsIs: (/9 AsIs: e.UsedVars#1/27 AsIs: )/10 } Tile{ AsIs: (/21 AsIs: e.Contrs#1/29 AsIs: )/22 AsIs: e.Equations#1/31 AsIs: (/25 AsIs: e.Assigns#1/33 HalfReuse: (/26 } Tile{ AsIs: t.PSvar#1/11 } Tile{ Reuse: ':'/45 } Tile{ AsIs: t.HSvar#1/13 } Tile{ HalfReuse: )/36 HalfReuse: )/1 ]] }
        refalrts::reinit_ident(context[4], identifiers[ident_Success]);
        refalrts::reinit_open_bracket(context[26]);
        refalrts::update_char(context[45], ':');
        refalrts::reinit_close_bracket(context[36]);
        refalrts::reinit_close_bracket(context[1]);
        refalrts::link_brackets( context[25], context[1] );
        refalrts::link_brackets( context[26], context[36] );
        refalrts::link_brackets( context[21], context[22] );
        refalrts::link_brackets( context[9], context[10] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[36];
        res = refalrts::splice_evar( res, context[13], context[14] );
        res = refalrts::splice_evar( res, context[45], context[45] );
        res = refalrts::splice_evar( res, context[11], context[12] );
        res = refalrts::splice_evar( res, context[21], context[26] );
        res = refalrts::splice_evar( res, context[4], context[10] );
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      refalrts::splice_to_freelist(vm, context[35], context[36]);
      continue;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Solve-TermEquation/4 (/9 e.UsedVars#1/27 )/10 t.Svar#1/11 t.Symbol#1/13 (/21 e.Contrs#1/29 )/22 e.Equations#1/31 (/25 e.Assigns#1/33 )/26 >/1
      context[27] = context[15];
      context[28] = context[16];
      context[29] = context[19];
      context[30] = context[20];
      context[31] = context[17];
      context[32] = context[18];
      context[33] = context[23];
      context[34] = context[24];
      // closed e.UsedVars#1 as range 27
      // closed e.Contrs#1 as range 29
      // closed e.Equations#1 as range 31
      // closed e.Assigns#1 as range 33
      //DEBUG: t.Svar#1: 11
      //DEBUG: t.Symbol#1: 13
      //DEBUG: e.UsedVars#1: 27
      //DEBUG: e.Contrs#1: 29
      //DEBUG: e.Equations#1: 31
      //DEBUG: e.Assigns#1: 33
      //11: t.Svar#1
      //13: t.Symbol#1
      //27: e.UsedVars#1
      //29: e.Contrs#1
      //31: e.Equations#1
      //33: e.Assigns#1
      //38: t.Svar#1

      refalrts::reset_allocator(vm);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::alloc_open_call(vm, context[35]);
      refalrts::alloc_name(vm, context[37], functions[efunc_gen_Solvem_TermEquation_S4C1]);
      refalrts::copy_stvar(vm, context[38], context[11]);
      refalrts::alloc_close_call(vm, context[36]);
      refalrts::push_stack( vm, context[36] );
      refalrts::push_stack( vm, context[35] );
      res = refalrts::splice_elem( res, context[36] );
      res = refalrts::splice_stvar( res, context[38] );
      res = refalrts::splice_elem( res, context[37] );
      res = refalrts::splice_elem( res, context[35] );
      refalrts::use( res );
      refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
      if (rec_res != refalrts::cSuccess)
        return rec_res;
      refalrts::this_is_generated_function(vm);
      do {
        // </35 & Solve-TermEquation$4?1/39 (/42 # TkVariable/44 's'/45 e.Pindex#2/40 )/43 >/36
        context[37] = 0;
        context[38] = 0;
        context[39] = refalrts::call_left( context[37], context[38], context[35], context[36] );
        context[40] = 0;
        context[41] = 0;
        context[42] = refalrts::brackets_left( context[40], context[41], context[37], context[38] );
        if( ! context[42] )
          continue;
        refalrts::bracket_pointers(context[42], context[43]);
        context[44] = refalrts::ident_left( identifiers[ident_TkVariable], context[40], context[41] );
        if( ! context[44] )
          continue;
        context[45] = refalrts::char_left( 's', context[40], context[41] );
        if( ! context[45] )
          continue;
        if( ! refalrts::empty_seq( context[37], context[38] ) )
          continue;
        // closed e.Pindex#2 as range 40
        //DEBUG: t.Svar#1: 11
        //DEBUG: t.Symbol#1: 13
        //DEBUG: e.UsedVars#1: 27
        //DEBUG: e.Contrs#1: 29
        //DEBUG: e.Equations#1: 31
        //DEBUG: e.Assigns#1: 33
        //DEBUG: e.Pindex#2: 40
        //11: t.Svar#1
        //13: t.Symbol#1
        //27: e.UsedVars#1
        //29: e.Contrs#1
        //31: e.Equations#1
        //33: e.Assigns#1
        //40: e.Pindex#2
        //51: t.Symbol#1

        refalrts::reset_allocator(vm);
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        refalrts::alloc_open_call(vm, context[46]);
        refalrts::alloc_name(vm, context[48], functions[efunc_gen_Solvem_TermEquation_S4C2]);
        refalrts::alloc_open_call(vm, context[49]);
        refalrts::alloc_name(vm, context[50], functions[efunc_IsSVarSubset]);
        refalrts::copy_stvar(vm, context[51], context[13]);
        refalrts::alloc_close_call(vm, context[52]);
        refalrts::alloc_close_call(vm, context[47]);
        refalrts::push_stack( vm, context[47] );
        refalrts::push_stack( vm, context[46] );
        res = refalrts::splice_elem( res, context[47] );
        refalrts::push_stack( vm, context[52] );
        refalrts::push_stack( vm, context[49] );
        res = refalrts::splice_elem( res, context[52] );
        res = refalrts::splice_stvar( res, context[51] );
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
          // </46 & Solve-TermEquation$4?2/50 # True/51 >/47
          context[48] = 0;
          context[49] = 0;
          context[50] = refalrts::call_left( context[48], context[49], context[46], context[47] );
          context[51] = refalrts::ident_left( identifiers[ident_True], context[48], context[49] );
          if( ! context[51] )
            continue;
          if( ! refalrts::empty_seq( context[48], context[49] ) )
            continue;
          //DEBUG: t.Svar#1: 11
          //DEBUG: t.Symbol#1: 13
          //DEBUG: e.UsedVars#1: 27
          //DEBUG: e.Contrs#1: 29
          //DEBUG: e.Equations#1: 31
          //DEBUG: e.Assigns#1: 33
          //DEBUG: e.Pindex#2: 40

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} </0 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} & Solve-TermEquation$4?1/39 (/42 # TkVariable/44 {REMOVED TILE} e.Pindex#2/40 {REMOVED TILE} >/36 {REMOVED TILE} >/47 >/1 {REMOVED TILE}
          //RESULT: Tile{ [[ } Tile{ HalfReuse: # Success/4 AsIs: (/9 AsIs: e.UsedVars#1/27 AsIs: )/10 } Tile{ AsIs: </46 Reuse: & AddContraction/50 HalfReuse: (/51 } Tile{ AsIs: t.Svar#1/11 } Tile{ Reuse: ':'/45 } Tile{ AsIs: t.Symbol#1/13 } Tile{ AsIs: )/43 } Tile{ AsIs: (/21 AsIs: e.Contrs#1/29 AsIs: )/22 AsIs: e.Equations#1/31 AsIs: (/25 AsIs: e.Assigns#1/33 AsIs: )/26 HalfReuse: >/35 } Tile{ ]] }
          refalrts::reinit_ident(context[4], identifiers[ident_Success]);
          refalrts::update_name(context[50], functions[efunc_AddContraction]);
          refalrts::reinit_open_bracket(context[51]);
          refalrts::update_char(context[45], ':');
          refalrts::reinit_close_call(context[35]);
          refalrts::push_stack( vm, context[35] );
          refalrts::push_stack( vm, context[46] );
          refalrts::link_brackets( context[25], context[26] );
          refalrts::link_brackets( context[21], context[22] );
          refalrts::link_brackets( context[51], context[43] );
          refalrts::link_brackets( context[9], context[10] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = arg_end->next;
          res = refalrts::splice_evar( res, context[21], context[35] );
          res = refalrts::splice_evar( res, context[43], context[43] );
          res = refalrts::splice_evar( res, context[13], context[14] );
          res = refalrts::splice_evar( res, context[45], context[45] );
          res = refalrts::splice_evar( res, context[11], context[12] );
          res = refalrts::splice_evar( res, context[46], context[51] );
          res = refalrts::splice_evar( res, context[4], context[10] );
          refalrts::splice_to_freelist_open( vm, trash_prev, res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        refalrts::splice_to_freelist(vm, context[46], context[47]);
        continue;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      refalrts::splice_to_freelist(vm, context[35], context[36]);
      continue;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Solve-TermEquation/4 (/9 e.UsedVars#1/27 )/10 t.PVar#1/11 t.HVar#1/13 (/21 e.Contrs#1/29 )/22 e.Equations#1/31 (/25 e.Assigns#1/33 )/26 >/1
      context[27] = context[15];
      context[28] = context[16];
      context[29] = context[19];
      context[30] = context[20];
      context[31] = context[17];
      context[32] = context[18];
      context[33] = context[23];
      context[34] = context[24];
      // closed e.UsedVars#1 as range 27
      // closed e.Contrs#1 as range 29
      // closed e.Equations#1 as range 31
      // closed e.Assigns#1 as range 33
      //DEBUG: t.PVar#1: 11
      //DEBUG: t.HVar#1: 13
      //DEBUG: e.UsedVars#1: 27
      //DEBUG: e.Contrs#1: 29
      //DEBUG: e.Equations#1: 31
      //DEBUG: e.Assigns#1: 33
      //11: t.PVar#1
      //13: t.HVar#1
      //27: e.UsedVars#1
      //29: e.Contrs#1
      //31: e.Equations#1
      //33: e.Assigns#1
      //38: t.HVar#1

      refalrts::reset_allocator(vm);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::alloc_open_call(vm, context[35]);
      refalrts::alloc_name(vm, context[37], functions[efunc_gen_Solvem_TermEquation_S5C1]);
      refalrts::copy_stvar(vm, context[38], context[13]);
      refalrts::alloc_close_call(vm, context[36]);
      refalrts::push_stack( vm, context[36] );
      refalrts::push_stack( vm, context[35] );
      res = refalrts::splice_elem( res, context[36] );
      res = refalrts::splice_stvar( res, context[38] );
      res = refalrts::splice_elem( res, context[37] );
      res = refalrts::splice_elem( res, context[35] );
      refalrts::use( res );
      refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
      if (rec_res != refalrts::cSuccess)
        return rec_res;
      refalrts::this_is_generated_function(vm);
      do {
        // </35 & Solve-TermEquation$5?1/39 (/42 # TkVariable/44 't'/45 e.Tindex#2/40 )/43 >/36
        context[37] = 0;
        context[38] = 0;
        context[39] = refalrts::call_left( context[37], context[38], context[35], context[36] );
        context[40] = 0;
        context[41] = 0;
        context[42] = refalrts::brackets_left( context[40], context[41], context[37], context[38] );
        if( ! context[42] )
          continue;
        refalrts::bracket_pointers(context[42], context[43]);
        context[44] = refalrts::ident_left( identifiers[ident_TkVariable], context[40], context[41] );
        if( ! context[44] )
          continue;
        context[45] = refalrts::char_left( 't', context[40], context[41] );
        if( ! context[45] )
          continue;
        if( ! refalrts::empty_seq( context[37], context[38] ) )
          continue;
        // closed e.Tindex#2 as range 40
        //DEBUG: t.PVar#1: 11
        //DEBUG: t.HVar#1: 13
        //DEBUG: e.UsedVars#1: 27
        //DEBUG: e.Contrs#1: 29
        //DEBUG: e.Equations#1: 31
        //DEBUG: e.Assigns#1: 33
        //DEBUG: e.Tindex#2: 40

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 {REMOVED TILE} {REMOVED TILE} t.HVar#1/13 {REMOVED TILE} </35 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: # Success/4 AsIs: (/9 AsIs: e.UsedVars#1/27 AsIs: )/10 } Tile{ AsIs: (/21 AsIs: e.Contrs#1/29 AsIs: )/22 AsIs: e.Equations#1/31 AsIs: (/25 AsIs: e.Assigns#1/33 HalfReuse: (/26 } Tile{ AsIs: t.PVar#1/11 } Tile{ HalfReuse: ':'/39 AsIs: (/42 AsIs: # TkVariable/44 AsIs: 't'/45 AsIs: e.Tindex#2/40 AsIs: )/43 HalfReuse: )/36 HalfReuse: )/1 ]] }
        refalrts::reinit_ident(context[4], identifiers[ident_Success]);
        refalrts::reinit_open_bracket(context[26]);
        refalrts::reinit_char(context[39], ':');
        refalrts::reinit_close_bracket(context[36]);
        refalrts::reinit_close_bracket(context[1]);
        refalrts::link_brackets( context[25], context[1] );
        refalrts::link_brackets( context[26], context[36] );
        refalrts::link_brackets( context[42], context[43] );
        refalrts::link_brackets( context[21], context[22] );
        refalrts::link_brackets( context[9], context[10] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[39];
        res = refalrts::splice_evar( res, context[11], context[12] );
        res = refalrts::splice_evar( res, context[21], context[26] );
        res = refalrts::splice_evar( res, context[4], context[10] );
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      refalrts::splice_to_freelist(vm, context[35], context[36]);
      continue;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Solve-TermEquation/4 (/9 e.new#17/27 )/10 t.new#11/11 (/13 s.new#12/37 e.new#13/35 )/14 (/21 e.new#15/29 )/22 e.new#14/31 (/25 e.new#16/33 )/26 >/1
      context[27] = context[15];
      context[28] = context[16];
      context[29] = context[19];
      context[30] = context[20];
      context[31] = context[17];
      context[32] = context[18];
      context[33] = context[23];
      context[34] = context[24];
      context[35] = 0;
      context[36] = 0;
      if( ! refalrts::brackets_term( context[35], context[36], context[13] ) )
        continue;
      // closed e.new#17 as range 27
      // closed e.new#15 as range 29
      // closed e.new#14 as range 31
      // closed e.new#16 as range 33
      if( ! refalrts::svar_left( context[37], context[35], context[36] ) )
        continue;
      // closed e.new#13 as range 35
      do {
        // </0 & Solve-TermEquation/4 (/9 e.UsedVars#1/38 )/10 t.PTvar#1/11 (/13 # Brackets/37 e.HBody#1/40 )/14 (/21 e.Contrs#1/42 )/22 e.Equations#1/44 (/25 e.Assigns#1/46 )/26 >/1
        context[38] = context[27];
        context[39] = context[28];
        context[40] = context[35];
        context[41] = context[36];
        context[42] = context[29];
        context[43] = context[30];
        context[44] = context[31];
        context[45] = context[32];
        context[46] = context[33];
        context[47] = context[34];
        if( ! refalrts::ident_term( identifiers[ident_Brackets], context[37] ) )
          continue;
        // closed e.UsedVars#1 as range 38
        // closed e.HBody#1 as range 40
        // closed e.Contrs#1 as range 42
        // closed e.Equations#1 as range 44
        // closed e.Assigns#1 as range 46
        //DEBUG: t.PTvar#1: 11
        //DEBUG: e.UsedVars#1: 38
        //DEBUG: e.HBody#1: 40
        //DEBUG: e.Contrs#1: 42
        //DEBUG: e.Equations#1: 44
        //DEBUG: e.Assigns#1: 46
        //11: t.PTvar#1
        //38: e.UsedVars#1
        //40: e.HBody#1
        //42: e.Contrs#1
        //44: e.Equations#1
        //46: e.Assigns#1
        //51: t.PTvar#1

        refalrts::reset_allocator(vm);
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        refalrts::alloc_open_call(vm, context[48]);
        refalrts::alloc_name(vm, context[50], functions[efunc_gen_Solvem_TermEquation_S6C1]);
        refalrts::copy_stvar(vm, context[51], context[11]);
        refalrts::alloc_close_call(vm, context[49]);
        refalrts::push_stack( vm, context[49] );
        refalrts::push_stack( vm, context[48] );
        res = refalrts::splice_elem( res, context[49] );
        res = refalrts::splice_stvar( res, context[51] );
        res = refalrts::splice_elem( res, context[50] );
        res = refalrts::splice_elem( res, context[48] );
        refalrts::use( res );
        refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
        if (rec_res != refalrts::cSuccess)
          return rec_res;
        refalrts::this_is_generated_function(vm);
        do {
          // </48 & Solve-TermEquation$6?1/52 (/55 # TkVariable/57 't'/58 e.Pindex#2/53 )/56 >/49
          context[50] = 0;
          context[51] = 0;
          context[52] = refalrts::call_left( context[50], context[51], context[48], context[49] );
          context[53] = 0;
          context[54] = 0;
          context[55] = refalrts::brackets_left( context[53], context[54], context[50], context[51] );
          if( ! context[55] )
            continue;
          refalrts::bracket_pointers(context[55], context[56]);
          context[57] = refalrts::ident_left( identifiers[ident_TkVariable], context[53], context[54] );
          if( ! context[57] )
            continue;
          context[58] = refalrts::char_left( 't', context[53], context[54] );
          if( ! context[58] )
            continue;
          if( ! refalrts::empty_seq( context[50], context[51] ) )
            continue;
          // closed e.Pindex#2 as range 53
          //DEBUG: t.PTvar#1: 11
          //DEBUG: e.UsedVars#1: 38
          //DEBUG: e.HBody#1: 40
          //DEBUG: e.Contrs#1: 42
          //DEBUG: e.Equations#1: 44
          //DEBUG: e.Assigns#1: 46
          //DEBUG: e.Pindex#2: 53

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.Pindex#2/53 {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 Reuse: & Solve-TermEquation$6=2/4 } Tile{ AsIs: t.PTvar#1/11 } Tile{ AsIs: (/21 AsIs: e.Contrs#1/42 AsIs: )/22 } Tile{ AsIs: (/9 } Tile{ AsIs: e.Equations#1/44 } Tile{ HalfReuse: )/13 HalfReuse: (/37 AsIs: e.HBody#1/40 AsIs: )/14 } Tile{ AsIs: (/25 AsIs: e.Assigns#1/46 AsIs: )/26 AsIs: </48 Reuse: & NewVarName/52 AsIs: (/55 } Tile{ AsIs: e.UsedVars#1/38 } Tile{ HalfReuse: )/57 Reuse: 'e'/58 } Tile{ HalfReuse: 0/10 } (/59 Tile{ AsIs: )/56 AsIs: >/49 AsIs: >/1 ]] }
          refalrts::alloc_open_bracket(vm, context[59]);
          refalrts::update_name(context[4], functions[efunc_gen_Solvem_TermEquation_S6A2]);
          refalrts::reinit_close_bracket(context[13]);
          refalrts::reinit_open_bracket(context[37]);
          refalrts::update_name(context[52], functions[efunc_NewVarName]);
          refalrts::reinit_close_bracket(context[57]);
          refalrts::update_char(context[58], 'e');
          refalrts::reinit_number(context[10], 0UL);
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[0] );
          refalrts::push_stack( vm, context[49] );
          refalrts::push_stack( vm, context[48] );
          refalrts::link_brackets( context[59], context[56] );
          refalrts::link_brackets( context[55], context[57] );
          refalrts::link_brackets( context[25], context[26] );
          refalrts::link_brackets( context[37], context[14] );
          refalrts::link_brackets( context[9], context[13] );
          refalrts::link_brackets( context[21], context[22] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[56];
          res = refalrts::splice_evar( res, context[59], context[59] );
          res = refalrts::splice_evar( res, context[10], context[10] );
          res = refalrts::splice_evar( res, context[57], context[58] );
          res = refalrts::splice_evar( res, context[38], context[39] );
          res = refalrts::splice_evar( res, context[25], context[55] );
          res = refalrts::splice_evar( res, context[13], context[14] );
          res = refalrts::splice_evar( res, context[44], context[45] );
          res = refalrts::splice_evar( res, context[9], context[9] );
          res = refalrts::splice_evar( res, context[21], context[22] );
          res = refalrts::splice_evar( res, context[11], context[12] );
          refalrts::splice_to_freelist_open( vm, context[4], res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        refalrts::splice_to_freelist(vm, context[48], context[49]);
        continue;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & Solve-TermEquation/4 (/9 e.UsedVars#1/38 )/10 t.PTvar#1/11 (/13 # ADT-Brackets/37 (/50 e.Name#1/48 )/51 e.HBody#1/40 )/14 (/21 e.Contrs#1/42 )/22 e.Equations#1/44 (/25 e.Assigns#1/46 )/26 >/1
      context[38] = context[27];
      context[39] = context[28];
      context[40] = context[35];
      context[41] = context[36];
      context[42] = context[29];
      context[43] = context[30];
      context[44] = context[31];
      context[45] = context[32];
      context[46] = context[33];
      context[47] = context[34];
      if( ! refalrts::ident_term( identifiers[ident_ADTm_Brackets], context[37] ) )
        continue;
      context[48] = 0;
      context[49] = 0;
      context[50] = refalrts::brackets_left( context[48], context[49], context[40], context[41] );
      if( ! context[50] )
        continue;
      refalrts::bracket_pointers(context[50], context[51]);
      // closed e.UsedVars#1 as range 38
      // closed e.Name#1 as range 48
      // closed e.HBody#1 as range 40
      // closed e.Contrs#1 as range 42
      // closed e.Equations#1 as range 44
      // closed e.Assigns#1 as range 46
      //DEBUG: t.PTvar#1: 11
      //DEBUG: e.UsedVars#1: 38
      //DEBUG: e.Name#1: 48
      //DEBUG: e.HBody#1: 40
      //DEBUG: e.Contrs#1: 42
      //DEBUG: e.Equations#1: 44
      //DEBUG: e.Assigns#1: 46
      //11: t.PTvar#1
      //38: e.UsedVars#1
      //40: e.HBody#1
      //42: e.Contrs#1
      //44: e.Equations#1
      //46: e.Assigns#1
      //48: e.Name#1
      //55: t.PTvar#1

      refalrts::reset_allocator(vm);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::alloc_open_call(vm, context[52]);
      refalrts::alloc_name(vm, context[54], functions[efunc_gen_Solvem_TermEquation_S7C1]);
      refalrts::copy_stvar(vm, context[55], context[11]);
      refalrts::alloc_close_call(vm, context[53]);
      refalrts::push_stack( vm, context[53] );
      refalrts::push_stack( vm, context[52] );
      res = refalrts::splice_elem( res, context[53] );
      res = refalrts::splice_stvar( res, context[55] );
      res = refalrts::splice_elem( res, context[54] );
      res = refalrts::splice_elem( res, context[52] );
      refalrts::use( res );
      refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
      if (rec_res != refalrts::cSuccess)
        return rec_res;
      refalrts::this_is_generated_function(vm);
      do {
        // </52 & Solve-TermEquation$7?1/56 (/59 # TkVariable/61 't'/62 e.Pindex#2/57 )/60 >/53
        context[54] = 0;
        context[55] = 0;
        context[56] = refalrts::call_left( context[54], context[55], context[52], context[53] );
        context[57] = 0;
        context[58] = 0;
        context[59] = refalrts::brackets_left( context[57], context[58], context[54], context[55] );
        if( ! context[59] )
          continue;
        refalrts::bracket_pointers(context[59], context[60]);
        context[61] = refalrts::ident_left( identifiers[ident_TkVariable], context[57], context[58] );
        if( ! context[61] )
          continue;
        context[62] = refalrts::char_left( 't', context[57], context[58] );
        if( ! context[62] )
          continue;
        if( ! refalrts::empty_seq( context[54], context[55] ) )
          continue;
        // closed e.Pindex#2 as range 57
        //DEBUG: t.PTvar#1: 11
        //DEBUG: e.UsedVars#1: 38
        //DEBUG: e.Name#1: 48
        //DEBUG: e.HBody#1: 40
        //DEBUG: e.Contrs#1: 42
        //DEBUG: e.Equations#1: 44
        //DEBUG: e.Assigns#1: 46
        //DEBUG: e.Pindex#2: 57

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.Pindex#2/57 {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & Solve-TermEquation$7=2/4 } Tile{ AsIs: t.PTvar#1/11 AsIs: (/13 } Tile{ AsIs: e.Name#1/48 } Tile{ AsIs: )/14 AsIs: (/21 AsIs: e.Contrs#1/42 AsIs: )/22 } Tile{ AsIs: (/9 } Tile{ AsIs: e.Equations#1/44 } Tile{ HalfReuse: )/37 AsIs: (/50 } Tile{ AsIs: e.HBody#1/40 } Tile{ AsIs: )/51 } Tile{ AsIs: (/25 AsIs: e.Assigns#1/46 AsIs: )/26 AsIs: </52 Reuse: & NewVarName/56 AsIs: (/59 } Tile{ AsIs: e.UsedVars#1/38 } Tile{ HalfReuse: )/61 Reuse: 'e'/62 } Tile{ HalfReuse: 0/10 } (/63 Tile{ AsIs: )/60 AsIs: >/53 AsIs: >/1 ]] }
        refalrts::alloc_open_bracket(vm, context[63]);
        refalrts::update_name(context[4], functions[efunc_gen_Solvem_TermEquation_S7A2]);
        refalrts::reinit_close_bracket(context[37]);
        refalrts::update_name(context[56], functions[efunc_NewVarName]);
        refalrts::reinit_close_bracket(context[61]);
        refalrts::update_char(context[62], 'e');
        refalrts::reinit_number(context[10], 0UL);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::push_stack( vm, context[53] );
        refalrts::push_stack( vm, context[52] );
        refalrts::link_brackets( context[63], context[60] );
        refalrts::link_brackets( context[59], context[61] );
        refalrts::link_brackets( context[25], context[26] );
        refalrts::link_brackets( context[50], context[51] );
        refalrts::link_brackets( context[9], context[37] );
        refalrts::link_brackets( context[21], context[22] );
        refalrts::link_brackets( context[13], context[14] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[60];
        res = refalrts::splice_evar( res, context[63], context[63] );
        res = refalrts::splice_evar( res, context[10], context[10] );
        res = refalrts::splice_evar( res, context[61], context[62] );
        res = refalrts::splice_evar( res, context[38], context[39] );
        res = refalrts::splice_evar( res, context[25], context[59] );
        res = refalrts::splice_evar( res, context[51], context[51] );
        res = refalrts::splice_evar( res, context[40], context[41] );
        res = refalrts::splice_evar( res, context[37], context[50] );
        res = refalrts::splice_evar( res, context[44], context[45] );
        res = refalrts::splice_evar( res, context[9], context[9] );
        res = refalrts::splice_evar( res, context[14], context[22] );
        res = refalrts::splice_evar( res, context[48], context[49] );
        res = refalrts::splice_evar( res, context[11], context[13] );
        refalrts::splice_to_freelist_open( vm, context[4], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      refalrts::splice_to_freelist(vm, context[52], context[53]);
      continue;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Solve-TermEquation/4 (/9 e.UsedVars#1/27 )/10 t.PTvar#1/11 t.Symbol#1/13 (/21 e.Contrs#1/29 )/22 e.Equations#1/31 (/25 e.Assigns#1/33 )/26 >/1
      context[27] = context[15];
      context[28] = context[16];
      context[29] = context[19];
      context[30] = context[20];
      context[31] = context[17];
      context[32] = context[18];
      context[33] = context[23];
      context[34] = context[24];
      // closed e.UsedVars#1 as range 27
      // closed e.Contrs#1 as range 29
      // closed e.Equations#1 as range 31
      // closed e.Assigns#1 as range 33
      //DEBUG: t.PTvar#1: 11
      //DEBUG: t.Symbol#1: 13
      //DEBUG: e.UsedVars#1: 27
      //DEBUG: e.Contrs#1: 29
      //DEBUG: e.Equations#1: 31
      //DEBUG: e.Assigns#1: 33
      //11: t.PTvar#1
      //13: t.Symbol#1
      //27: e.UsedVars#1
      //29: e.Contrs#1
      //31: e.Equations#1
      //33: e.Assigns#1
      //38: t.PTvar#1
      //39: t.Symbol#1

      refalrts::reset_allocator(vm);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::alloc_open_call(vm, context[35]);
      refalrts::alloc_name(vm, context[37], functions[efunc_gen_Solvem_TermEquation_S8C1]);
      refalrts::copy_stvar(vm, context[38], context[11]);
      refalrts::copy_stvar(vm, context[39], context[13]);
      refalrts::alloc_close_call(vm, context[36]);
      refalrts::push_stack( vm, context[36] );
      refalrts::push_stack( vm, context[35] );
      res = refalrts::splice_elem( res, context[36] );
      res = refalrts::splice_stvar( res, context[39] );
      res = refalrts::splice_stvar( res, context[38] );
      res = refalrts::splice_elem( res, context[37] );
      res = refalrts::splice_elem( res, context[35] );
      refalrts::use( res );
      refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
      if (rec_res != refalrts::cSuccess)
        return rec_res;
      refalrts::this_is_generated_function(vm);
      do {
        // </35 & Solve-TermEquation$8?1/39 (/42 # TkVariable/44 't'/45 e.Pindex#2/40 )/43 (/48 # Symbol/50 s.Type#2/51 e.Info#2/46 )/49 >/36
        context[37] = 0;
        context[38] = 0;
        context[39] = refalrts::call_left( context[37], context[38], context[35], context[36] );
        context[40] = 0;
        context[41] = 0;
        context[42] = refalrts::brackets_left( context[40], context[41], context[37], context[38] );
        if( ! context[42] )
          continue;
        refalrts::bracket_pointers(context[42], context[43]);
        context[44] = refalrts::ident_left( identifiers[ident_TkVariable], context[40], context[41] );
        if( ! context[44] )
          continue;
        context[45] = refalrts::char_left( 't', context[40], context[41] );
        if( ! context[45] )
          continue;
        context[46] = 0;
        context[47] = 0;
        context[48] = refalrts::brackets_left( context[46], context[47], context[37], context[38] );
        if( ! context[48] )
          continue;
        refalrts::bracket_pointers(context[48], context[49]);
        context[50] = refalrts::ident_left( identifiers[ident_Symbol], context[46], context[47] );
        if( ! context[50] )
          continue;
        if( ! refalrts::empty_seq( context[37], context[38] ) )
          continue;
        // closed e.Pindex#2 as range 40
        if( ! refalrts::svar_left( context[51], context[46], context[47] ) )
          continue;
        // closed e.Info#2 as range 46
        //DEBUG: t.PTvar#1: 11
        //DEBUG: t.Symbol#1: 13
        //DEBUG: e.UsedVars#1: 27
        //DEBUG: e.Contrs#1: 29
        //DEBUG: e.Equations#1: 31
        //DEBUG: e.Assigns#1: 33
        //DEBUG: e.Pindex#2: 40
        //DEBUG: s.Type#2: 51
        //DEBUG: e.Info#2: 46

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} # TkVariable/44 {REMOVED TILE} e.Pindex#2/40 )/43 (/48 # Symbol/50 s.Type#2/51 e.Info#2/46 {REMOVED TILE} >/36 >/1 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: # Success/4 AsIs: (/9 AsIs: e.UsedVars#1/27 AsIs: )/10 } Tile{ AsIs: </0 } Tile{ Reuse: & AddContraction/39 AsIs: (/42 } Tile{ AsIs: t.PTvar#1/11 } Tile{ Reuse: ':'/45 } Tile{ AsIs: t.Symbol#1/13 } Tile{ AsIs: )/49 } Tile{ AsIs: (/21 AsIs: e.Contrs#1/29 AsIs: )/22 AsIs: e.Equations#1/31 AsIs: (/25 AsIs: e.Assigns#1/33 AsIs: )/26 HalfReuse: >/35 } Tile{ ]] }
        refalrts::reinit_ident(context[4], identifiers[ident_Success]);
        refalrts::update_name(context[39], functions[efunc_AddContraction]);
        refalrts::update_char(context[45], ':');
        refalrts::reinit_close_call(context[35]);
        refalrts::push_stack( vm, context[35] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[25], context[26] );
        refalrts::link_brackets( context[21], context[22] );
        refalrts::link_brackets( context[42], context[49] );
        refalrts::link_brackets( context[9], context[10] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[21], context[35] );
        res = refalrts::splice_evar( res, context[49], context[49] );
        res = refalrts::splice_evar( res, context[13], context[14] );
        res = refalrts::splice_evar( res, context[45], context[45] );
        res = refalrts::splice_evar( res, context[11], context[12] );
        res = refalrts::splice_evar( res, context[39], context[42] );
        res = refalrts::splice_evar( res, context[0], context[0] );
        res = refalrts::splice_evar( res, context[4], context[10] );
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      refalrts::splice_to_freelist(vm, context[35], context[36]);
      continue;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Solve-TermEquation/4 (/9 e.UsedVars#1/27 )/10 t.PTvar#1/11 t.HSvar#1/13 (/21 e.Contrs#1/29 )/22 e.Equations#1/31 (/25 e.Assigns#1/33 )/26 >/1
      context[27] = context[15];
      context[28] = context[16];
      context[29] = context[19];
      context[30] = context[20];
      context[31] = context[17];
      context[32] = context[18];
      context[33] = context[23];
      context[34] = context[24];
      // closed e.UsedVars#1 as range 27
      // closed e.Contrs#1 as range 29
      // closed e.Equations#1 as range 31
      // closed e.Assigns#1 as range 33
      //DEBUG: t.PTvar#1: 11
      //DEBUG: t.HSvar#1: 13
      //DEBUG: e.UsedVars#1: 27
      //DEBUG: e.Contrs#1: 29
      //DEBUG: e.Equations#1: 31
      //DEBUG: e.Assigns#1: 33
      //11: t.PTvar#1
      //13: t.HSvar#1
      //27: e.UsedVars#1
      //29: e.Contrs#1
      //31: e.Equations#1
      //33: e.Assigns#1
      //38: t.PTvar#1
      //39: t.HSvar#1

      refalrts::reset_allocator(vm);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::alloc_open_call(vm, context[35]);
      refalrts::alloc_name(vm, context[37], functions[efunc_gen_Solvem_TermEquation_S9C1]);
      refalrts::copy_stvar(vm, context[38], context[11]);
      refalrts::copy_stvar(vm, context[39], context[13]);
      refalrts::alloc_close_call(vm, context[36]);
      refalrts::push_stack( vm, context[36] );
      refalrts::push_stack( vm, context[35] );
      res = refalrts::splice_elem( res, context[36] );
      res = refalrts::splice_stvar( res, context[39] );
      res = refalrts::splice_stvar( res, context[38] );
      res = refalrts::splice_elem( res, context[37] );
      res = refalrts::splice_elem( res, context[35] );
      refalrts::use( res );
      refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
      if (rec_res != refalrts::cSuccess)
        return rec_res;
      refalrts::this_is_generated_function(vm);
      do {
        // </35 & Solve-TermEquation$9?1/39 (/42 # TkVariable/44 't'/45 e.Pindex#2/40 )/43 (/48 # TkVariable/50 's'/51 e.Hindex#2/46 )/49 >/36
        context[37] = 0;
        context[38] = 0;
        context[39] = refalrts::call_left( context[37], context[38], context[35], context[36] );
        context[40] = 0;
        context[41] = 0;
        context[42] = refalrts::brackets_left( context[40], context[41], context[37], context[38] );
        if( ! context[42] )
          continue;
        refalrts::bracket_pointers(context[42], context[43]);
        context[44] = refalrts::ident_left( identifiers[ident_TkVariable], context[40], context[41] );
        if( ! context[44] )
          continue;
        context[45] = refalrts::char_left( 't', context[40], context[41] );
        if( ! context[45] )
          continue;
        context[46] = 0;
        context[47] = 0;
        context[48] = refalrts::brackets_left( context[46], context[47], context[37], context[38] );
        if( ! context[48] )
          continue;
        refalrts::bracket_pointers(context[48], context[49]);
        context[50] = refalrts::ident_left( identifiers[ident_TkVariable], context[46], context[47] );
        if( ! context[50] )
          continue;
        context[51] = refalrts::char_left( 's', context[46], context[47] );
        if( ! context[51] )
          continue;
        if( ! refalrts::empty_seq( context[37], context[38] ) )
          continue;
        // closed e.Pindex#2 as range 40
        // closed e.Hindex#2 as range 46
        //DEBUG: t.PTvar#1: 11
        //DEBUG: t.HSvar#1: 13
        //DEBUG: e.UsedVars#1: 27
        //DEBUG: e.Contrs#1: 29
        //DEBUG: e.Equations#1: 31
        //DEBUG: e.Assigns#1: 33
        //DEBUG: e.Pindex#2: 40
        //DEBUG: e.Hindex#2: 46

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} # TkVariable/44 't'/45 e.Pindex#2/40 {REMOVED TILE} {REMOVED TILE} # TkVariable/50 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ AsIs: </35 Reuse: & Solve-TermEquation$9=2/39 } Tile{ AsIs: t.PTvar#1/11 } Tile{ AsIs: (/21 AsIs: e.Contrs#1/29 AsIs: )/22 } Tile{ AsIs: (/42 } Tile{ AsIs: e.Equations#1/31 } Tile{ AsIs: )/43 } Tile{ AsIs: (/25 AsIs: e.Assigns#1/33 AsIs: )/26 } Tile{ AsIs: t.HSvar#1/13 } Tile{ AsIs: </0 Reuse: & NewVarName/4 AsIs: (/9 AsIs: e.UsedVars#1/27 AsIs: )/10 } Tile{ AsIs: 's'/51 } Tile{ AsIs: e.Hindex#2/46 } Tile{ AsIs: (/48 } Tile{ AsIs: )/49 AsIs: >/36 AsIs: >/1 ]] }
        refalrts::update_name(context[39], functions[efunc_gen_Solvem_TermEquation_S9A2]);
        refalrts::update_name(context[4], functions[efunc_NewVarName]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[35] );
        refalrts::push_stack( vm, context[36] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[48], context[49] );
        refalrts::link_brackets( context[9], context[10] );
        refalrts::link_brackets( context[25], context[26] );
        refalrts::link_brackets( context[42], context[43] );
        refalrts::link_brackets( context[21], context[22] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[49];
        res = refalrts::splice_evar( res, context[48], context[48] );
        res = refalrts::splice_evar( res, context[46], context[47] );
        res = refalrts::splice_evar( res, context[51], context[51] );
        res = refalrts::splice_evar( res, context[0], context[10] );
        res = refalrts::splice_evar( res, context[13], context[14] );
        res = refalrts::splice_evar( res, context[25], context[26] );
        res = refalrts::splice_evar( res, context[43], context[43] );
        res = refalrts::splice_evar( res, context[31], context[32] );
        res = refalrts::splice_evar( res, context[42], context[42] );
        res = refalrts::splice_evar( res, context[21], context[22] );
        res = refalrts::splice_evar( res, context[11], context[12] );
        res = refalrts::splice_evar( res, context[35], context[39] );
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      refalrts::splice_to_freelist(vm, context[35], context[36]);
      continue;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Solve-TermEquation/4 (/9 e.new#18/27 )/10 (/11 s.new#11/39 e.new#12/35 )/12 (/13 s.new#13/40 e.new#14/37 )/14 (/21 e.new#16/29 )/22 e.new#15/31 (/25 e.new#17/33 )/26 >/1
    context[27] = context[15];
    context[28] = context[16];
    context[29] = context[19];
    context[30] = context[20];
    context[31] = context[17];
    context[32] = context[18];
    context[33] = context[23];
    context[34] = context[24];
    context[35] = 0;
    context[36] = 0;
    if( ! refalrts::brackets_term( context[35], context[36], context[11] ) )
      continue;
    context[37] = 0;
    context[38] = 0;
    if( ! refalrts::brackets_term( context[37], context[38], context[13] ) )
      continue;
    // closed e.new#18 as range 27
    // closed e.new#16 as range 29
    // closed e.new#15 as range 31
    // closed e.new#17 as range 33
    if( ! refalrts::svar_left( context[39], context[35], context[36] ) )
      continue;
    // closed e.new#12 as range 35
    if( ! refalrts::svar_left( context[40], context[37], context[38] ) )
      continue;
    // closed e.new#14 as range 37
    do {
      // </0 & Solve-TermEquation/4 (/9 e.UsedVars#1/41 )/10 (/11 # Brackets/39 e.TBody#1/43 )/12 (/13 # Brackets/40 e.HBody#1/45 )/14 (/21 e.Contrs#1/47 )/22 e.Equations#1/49 (/25 e.Assigns#1/51 )/26 >/1
      context[41] = context[27];
      context[42] = context[28];
      context[43] = context[35];
      context[44] = context[36];
      context[45] = context[37];
      context[46] = context[38];
      context[47] = context[29];
      context[48] = context[30];
      context[49] = context[31];
      context[50] = context[32];
      context[51] = context[33];
      context[52] = context[34];
      if( ! refalrts::ident_term( identifiers[ident_Brackets], context[39] ) )
        continue;
      if( ! refalrts::ident_term( identifiers[ident_Brackets], context[40] ) )
        continue;
      // closed e.UsedVars#1 as range 41
      // closed e.TBody#1 as range 43
      // closed e.HBody#1 as range 45
      // closed e.Contrs#1 as range 47
      // closed e.Equations#1 as range 49
      // closed e.Assigns#1 as range 51
      //DEBUG: e.UsedVars#1: 41
      //DEBUG: e.TBody#1: 43
      //DEBUG: e.HBody#1: 45
      //DEBUG: e.Contrs#1: 47
      //DEBUG: e.Equations#1: 49
      //DEBUG: e.Assigns#1: 51

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: # Success/4 AsIs: (/9 AsIs: e.UsedVars#1/41 AsIs: )/10 } Tile{ HalfReuse: (/1 } Tile{ AsIs: e.Contrs#1/47 } Tile{ AsIs: )/22 } Tile{ AsIs: e.Equations#1/49 } Tile{ AsIs: (/11 HalfReuse: (/39 AsIs: e.TBody#1/43 AsIs: )/12 HalfReuse: ':'/13 HalfReuse: (/40 AsIs: e.HBody#1/45 AsIs: )/14 HalfReuse: )/21 } Tile{ AsIs: (/25 AsIs: e.Assigns#1/51 AsIs: )/26 } Tile{ ]] }
      refalrts::reinit_ident(context[4], identifiers[ident_Success]);
      refalrts::reinit_open_bracket(context[1]);
      refalrts::reinit_open_bracket(context[39]);
      refalrts::reinit_char(context[13], ':');
      refalrts::reinit_open_bracket(context[40]);
      refalrts::reinit_close_bracket(context[21]);
      refalrts::link_brackets( context[25], context[26] );
      refalrts::link_brackets( context[11], context[21] );
      refalrts::link_brackets( context[40], context[14] );
      refalrts::link_brackets( context[39], context[12] );
      refalrts::link_brackets( context[1], context[22] );
      refalrts::link_brackets( context[9], context[10] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[25], context[26] );
      res = refalrts::splice_evar( res, context[11], context[21] );
      res = refalrts::splice_evar( res, context[49], context[50] );
      res = refalrts::splice_evar( res, context[22], context[22] );
      res = refalrts::splice_evar( res, context[47], context[48] );
      res = refalrts::splice_evar( res, context[1], context[1] );
      res = refalrts::splice_evar( res, context[4], context[10] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Solve-TermEquation/4 (/9 e.UsedVars#1/41 )/10 (/11 # ADT-Brackets/39 (/55 e.Name#1/53 )/56 e.TBody#1/43 )/12 (/13 # ADT-Brackets/40 (/59 e.Name#1/61 )/60 e.HBody#1/45 )/14 (/21 e.Contrs#1/47 )/22 e.Equations#1/49 (/25 e.Assigns#1/51 )/26 >/1
    context[41] = context[27];
    context[42] = context[28];
    context[43] = context[35];
    context[44] = context[36];
    context[45] = context[37];
    context[46] = context[38];
    context[47] = context[29];
    context[48] = context[30];
    context[49] = context[31];
    context[50] = context[32];
    context[51] = context[33];
    context[52] = context[34];
    if( ! refalrts::ident_term( identifiers[ident_ADTm_Brackets], context[39] ) )
      continue;
    if( ! refalrts::ident_term( identifiers[ident_ADTm_Brackets], context[40] ) )
      continue;
    context[53] = 0;
    context[54] = 0;
    context[55] = refalrts::brackets_left( context[53], context[54], context[43], context[44] );
    if( ! context[55] )
      continue;
    refalrts::bracket_pointers(context[55], context[56]);
    context[57] = 0;
    context[58] = 0;
    context[59] = refalrts::brackets_left( context[57], context[58], context[45], context[46] );
    if( ! context[59] )
      continue;
    refalrts::bracket_pointers(context[59], context[60]);
    // closed e.UsedVars#1 as range 41
    // closed e.Name#1 as range 53
    if( ! refalrts::repeated_evar_left( vm, context[61], context[62], context[53], context[54], context[57], context[58] ) )
      continue;
    if( ! refalrts::empty_seq( context[57], context[58] ) )
      continue;
    // closed e.TBody#1 as range 43
    // closed e.HBody#1 as range 45
    // closed e.Contrs#1 as range 47
    // closed e.Equations#1 as range 49
    // closed e.Assigns#1 as range 51
    //DEBUG: e.UsedVars#1: 41
    //DEBUG: e.Name#1: 53
    //DEBUG: e.TBody#1: 43
    //DEBUG: e.HBody#1: 45
    //DEBUG: e.Contrs#1: 47
    //DEBUG: e.Equations#1: 49
    //DEBUG: e.Assigns#1: 51

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} (/9 {REMOVED TILE} {REMOVED TILE} # ADT-Brackets/39 (/55 e.Name#1/53 {REMOVED TILE} (/59 e.Name#1/61 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} )/26 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: # Success/0 HalfReuse: (/4 } Tile{ AsIs: e.UsedVars#1/41 } Tile{ AsIs: )/14 AsIs: (/21 AsIs: e.Contrs#1/47 AsIs: )/22 AsIs: e.Equations#1/49 AsIs: (/25 } Tile{ HalfReuse: (/56 AsIs: e.TBody#1/43 AsIs: )/12 HalfReuse: ':'/13 HalfReuse: (/40 } Tile{ AsIs: e.HBody#1/45 } Tile{ AsIs: )/60 } Tile{ AsIs: )/10 AsIs: (/11 } Tile{ AsIs: e.Assigns#1/51 } Tile{ HalfReuse: )/1 ]] }
    refalrts::reinit_ident(context[0], identifiers[ident_Success]);
    refalrts::reinit_open_bracket(context[4]);
    refalrts::reinit_open_bracket(context[56]);
    refalrts::reinit_char(context[13], ':');
    refalrts::reinit_open_bracket(context[40]);
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[11], context[1] );
    refalrts::link_brackets( context[25], context[10] );
    refalrts::link_brackets( context[40], context[60] );
    refalrts::link_brackets( context[56], context[12] );
    refalrts::link_brackets( context[21], context[22] );
    refalrts::link_brackets( context[4], context[14] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[51], context[52] );
    res = refalrts::splice_evar( res, context[10], context[11] );
    res = refalrts::splice_evar( res, context[60], context[60] );
    res = refalrts::splice_evar( res, context[45], context[46] );
    res = refalrts::splice_evar( res, context[56], context[40] );
    res = refalrts::splice_evar( res, context[14], context[25] );
    res = refalrts::splice_evar( res, context[41], context[42] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Solve-TermEquation/4 e.Other#1/2 >/1
  // closed e.Other#1 as range 2
  //DEBUG: e.Other#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Solve-TermEquation/4 e.Other#1/2 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: # Failure/1 ]] }
  refalrts::reinit_ident(context[1], identifiers[ident_Failure]);
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Solvem_TermEquation("Solve-TermEquation", COOKIE1_, COOKIE2_, func_Solvem_TermEquation);


static refalrts::FnResult func_IsTerm(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
  // </0 & IsTerm/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & IsTerm/4 t.new#1/5 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & IsTerm/4 (/5 s.new#2/9 e.new#3/7 )/6 >/1
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
      continue;
    if( ! refalrts::svar_left( context[9], context[7], context[8] ) )
      continue;
    // closed e.new#3 as range 7
    do {
      // </0 & IsTerm/4 (/5 # TkVariable/9 'e'/12 e.Index#1/10 )/6 >/1
      context[10] = context[7];
      context[11] = context[8];
      if( ! refalrts::ident_term( identifiers[ident_TkVariable], context[9] ) )
        continue;
      context[12] = refalrts::char_left( 'e', context[10], context[11] );
      if( ! context[12] )
        continue;
      // closed e.Index#1 as range 10
      //DEBUG: e.Index#1: 10

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & IsTerm/4 (/5 # TkVariable/9 'e'/12 e.Index#1/10 )/6 {REMOVED TILE}
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
      // </0 & IsTerm/4 (/5 # CallBrackets/9 e.Nested#1/10 )/6 >/1
      context[10] = context[7];
      context[11] = context[8];
      if( ! refalrts::ident_term( identifiers[ident_CallBrackets], context[9] ) )
        continue;
      // closed e.Nested#1 as range 10
      //DEBUG: e.Nested#1: 10

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & IsTerm/4 (/5 # CallBrackets/9 e.Nested#1/10 )/6 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: # False/1 ]] }
      refalrts::reinit_ident(context[1], identifiers[ident_False]);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & IsTerm/4 (/5 # ColdCallBrackets/9 e.Nested#1/10 )/6 >/1
    context[10] = context[7];
    context[11] = context[8];
    if( ! refalrts::ident_term( identifiers[ident_ColdCallBrackets], context[9] ) )
      continue;
    // closed e.Nested#1 as range 10
    //DEBUG: e.Nested#1: 10

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & IsTerm/4 (/5 # ColdCallBrackets/9 e.Nested#1/10 )/6 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # False/1 ]] }
    refalrts::reinit_ident(context[1], identifiers[ident_False]);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & IsTerm/4 t.OtherTerm#1/5 >/1
  //DEBUG: t.OtherTerm#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & IsTerm/4 t.OtherTerm#1/5 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: # True/1 ]] }
  refalrts::reinit_ident(context[1], identifiers[ident_True]);
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_IsTerm("IsTerm", COOKIE1_, COOKIE2_, func_IsTerm);


static refalrts::FnResult func_AddContractions(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 26 elems
  refalrts::Iter context[26];
  refalrts::zeros( context, 26 );
  // </0 & AddContractions/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & AddContractions/4 (/7 e.new#1/5 )/8 e.new#2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  // closed e.new#2 as range 2
  do {
    // </0 & AddContractions/4 (/7 t.toAdd#1/21 e.Rem#1/9 )/8 (/15 e.Contractions#1/13 )/16 e.Equations#1/11 (/19 e.Assigns#1/17 )/20 >/1
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
    context[17] = 0;
    context[18] = 0;
    context[19] = refalrts::brackets_right( context[17], context[18], context[11], context[12] );
    if( ! context[19] )
      continue;
    refalrts::bracket_pointers(context[19], context[20]);
    // closed e.Contractions#1 as range 13
    // closed e.Equations#1 as range 11
    // closed e.Assigns#1 as range 17
    context[22] = refalrts::tvar_left( context[21], context[9], context[10] );
    if( ! context[22] )
      continue;
    // closed e.Rem#1 as range 9
    //DEBUG: e.Contractions#1: 13
    //DEBUG: e.Equations#1: 11
    //DEBUG: e.Assigns#1: 17
    //DEBUG: t.toAdd#1: 21
    //DEBUG: e.Rem#1: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & AddContractions/4 AsIs: (/7 } Tile{ AsIs: e.Rem#1/9 } Tile{ AsIs: )/8 } </23 & AddContraction/24 Tile{ AsIs: t.toAdd#1/21 } Tile{ AsIs: (/15 AsIs: e.Contractions#1/13 AsIs: )/16 AsIs: e.Equations#1/11 AsIs: (/19 AsIs: e.Assigns#1/17 AsIs: )/20 AsIs: >/1 } >/25 Tile{ ]] }
    refalrts::alloc_open_call(vm, context[23]);
    refalrts::alloc_name(vm, context[24], functions[efunc_AddContraction]);
    refalrts::alloc_close_call(vm, context[25]);
    refalrts::push_stack( vm, context[25] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[23] );
    refalrts::link_brackets( context[19], context[20] );
    refalrts::link_brackets( context[15], context[16] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[25], context[25] );
    res = refalrts::splice_evar( res, context[15], context[1] );
    res = refalrts::splice_evar( res, context[21], context[22] );
    res = refalrts::splice_evar( res, context[23], context[24] );
    res = refalrts::splice_evar( res, context[8], context[8] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & AddContractions/4 (/7 )/8 e.PRTC#1/2 >/1
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.PRTC#1 as range 2
  //DEBUG: e.PRTC#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & AddContractions/4 (/7 )/8 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.PRTC#1/2 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_AddContractions("AddContractions", COOKIE1_, COOKIE2_, func_AddContractions);


static refalrts::FnResult func_AddContraction(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & AddContraction/4 t.toAdd#1/9 (/13 e.Contractions#1/11 )/14 e.Equations#1/2 (/7 e.Assigns#1/5 )/8 >/1
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
  // closed e.Assigns#1 as range 5
  context[10] = refalrts::tvar_left( context[9], context[2], context[3] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  context[11] = 0;
  context[12] = 0;
  context[13] = refalrts::brackets_left( context[11], context[12], context[2], context[3] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[13], context[14]);
  // closed e.Contractions#1 as range 11
  // closed e.Equations#1 as range 2
  //DEBUG: e.Assigns#1: 5
  //DEBUG: t.toAdd#1: 9
  //DEBUG: e.Contractions#1: 11
  //DEBUG: e.Equations#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/13 } Tile{ AsIs: e.Contractions#1/11 } t.toAdd#1/9/15 Tile{ AsIs: )/14 } Tile{ AsIs: </0 Reuse: & ApplyContraction/4 AsIs: t.toAdd#1/9 } Tile{ AsIs: e.Equations#1/2 } Tile{ AsIs: (/7 AsIs: e.Assigns#1/5 AsIs: )/8 AsIs: >/1 ]] }
  refalrts::copy_evar(vm, context[15], context[16], context[9], context[10]);
  refalrts::update_name(context[4], functions[efunc_ApplyContraction]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[13], context[14] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[7];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[0], context[10] );
  res = refalrts::splice_evar( res, context[14], context[14] );
  res = refalrts::splice_evar( res, context[15], context[16] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_evar( res, context[13], context[13] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_AddContraction("AddContraction", COOKIE1_, COOKIE2_, func_AddContraction);


static refalrts::FnResult func_ApplyContraction(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
  // </0 & ApplyContraction/4 t.Contraction#1/9 e.Equations#1/2 (/7 e.Assigns#1/5 )/8 >/1
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
  // closed e.Assigns#1 as range 5
  context[10] = refalrts::tvar_left( context[9], context[2], context[3] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  // closed e.Equations#1 as range 2
  //DEBUG: e.Assigns#1: 5
  //DEBUG: t.Contraction#1: 9
  //DEBUG: e.Equations#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map@2/4 AsIs: t.Contraction#1/9 AsIs: e.Equations#1/2 HalfReuse: >/7 } (/11 </12 & Map@3/13 t.Contraction#1/9/14 Tile{ AsIs: e.Assigns#1/5 } Tile{ HalfReuse: >/8 HalfReuse: )/1 ]] }
  refalrts::alloc_open_bracket(vm, context[11]);
  refalrts::alloc_open_call(vm, context[12]);
  refalrts::alloc_name(vm, context[13], functions[efunc_gen_Map_Z3]);
  refalrts::copy_evar(vm, context[14], context[15], context[9], context[10]);
  refalrts::update_name(context[4], functions[efunc_gen_Map_Z2]);
  refalrts::reinit_close_call(context[7]);
  refalrts::reinit_close_call(context[8]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[11], context[1] );
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[12] );
  refalrts::push_stack( vm, context[7] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[11], context[15] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ApplyContraction("ApplyContraction", COOKIE1_, COOKIE2_, func_ApplyContraction);


static refalrts::FnResult func_ApplyContractionm_toAssign(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  // </0 & ApplyContraction-toAssign/4 t.Contraction#1/9 (/7 e.M#1/5 ':'/13 t.Rval#1/11 )/8 >/1
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
  context[10] = refalrts::tvar_left( context[9], context[2], context[3] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[12] = refalrts::tvar_right( context[11], context[5], context[6] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  context[13] = refalrts::char_right( ':', context[5], context[6] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  // closed e.M#1 as range 5
  //DEBUG: t.Contraction#1: 9
  //DEBUG: t.Rval#1: 11
  //DEBUG: e.M#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 } Tile{ AsIs: </0 Reuse: & ApplyContraction-toExpr/4 AsIs: t.Contraction#1/9 } Tile{ AsIs: e.M#1/5 } Tile{ AsIs: >/1 } Tile{ AsIs: ':'/13 AsIs: t.Rval#1/11 AsIs: )/8 } Tile{ ]] }
  refalrts::update_name(context[4], functions[efunc_ApplyContractionm_toExpr]);
  refalrts::link_brackets( context[7], context[8] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[13], context[8] );
  res = refalrts::splice_evar( res, context[1], context[1] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[0], context[10] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ApplyContractionm_toAssign("ApplyContraction-toAssign", COOKIE1_, COOKIE2_, func_ApplyContractionm_toAssign);


static refalrts::FnResult func_ApplyContractionm_toEquation(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
  // </0 & ApplyContraction-toEquation/4 t.Contraction#1/18 (/7 (/11 e.Expr#1/9 )/12 ':'/13 (/16 e.Lexpr#1/14 )/17 )/8 >/1
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
  context[13] = refalrts::char_left( ':', context[5], context[6] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  context[14] = 0;
  context[15] = 0;
  context[16] = refalrts::brackets_left( context[14], context[15], context[5], context[6] );
  if( ! context[16] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[16], context[17]);
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Expr#1 as range 9
  // closed e.Lexpr#1 as range 14
  context[19] = refalrts::tvar_left( context[18], context[2], context[3] );
  if( ! context[19] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: e.Expr#1: 9
  //DEBUG: e.Lexpr#1: 14
  //DEBUG: t.Contraction#1: 18

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: (/11 } Tile{ AsIs: </0 Reuse: & ApplyContraction-toExpr/4 AsIs: t.Contraction#1/18 } Tile{ AsIs: e.Expr#1/9 } Tile{ AsIs: >/1 } Tile{ AsIs: )/12 AsIs: ':'/13 AsIs: (/16 AsIs: e.Lexpr#1/14 AsIs: )/17 AsIs: )/8 } Tile{ ]] }
  refalrts::update_name(context[4], functions[efunc_ApplyContractionm_toExpr]);
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[16], context[17] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[12], context[8] );
  res = refalrts::splice_evar( res, context[1], context[1] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[0], context[19] );
  res = refalrts::splice_evar( res, context[7], context[11] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ApplyContractionm_toEquation("ApplyContraction-toEquation", COOKIE1_, COOKIE2_, func_ApplyContractionm_toEquation);


static refalrts::FnResult func_ApplyContractionm_toExpr(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 30 elems
  refalrts::Iter context[30];
  refalrts::zeros( context, 30 );
  // </0 & ApplyContraction-toExpr/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & ApplyContraction-toExpr/4 t.new#1/5 e.new#2/2 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 2
  do {
    // </0 & ApplyContraction-toExpr/4 (/5 t.Var#1/11 ':'/13 e.Lval#1/9 )/6 e.B#1/14 t.Var#1/18 e.E#1/16 >/1
    context[7] = context[2];
    context[8] = context[3];
    context[9] = 0;
    context[10] = 0;
    if( ! refalrts::brackets_term( context[9], context[10], context[5] ) )
      continue;
    context[12] = refalrts::tvar_left( context[11], context[9], context[10] );
    if( ! context[12] )
      continue;
    context[13] = refalrts::char_left( ':', context[9], context[10] );
    if( ! context[13] )
      continue;
    // closed e.Lval#1 as range 9
    context[14] = 0;
    context[15] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[16] = context[7];
      context[17] = context[8];
      context[19] = refalrts::repeated_stvar_left( vm, context[18], context[11], context[16], context[17] );
      if( ! context[19] )
        continue;
      // closed e.E#1 as range 16
      //DEBUG: t.Var#1: 11
      //DEBUG: e.Lval#1: 9
      //DEBUG: e.B#1: 14
      //DEBUG: e.E#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ApplyContraction-toExpr/4 AsIs: (/5 AsIs: t.Var#1/11 AsIs: ':'/13 AsIs: e.Lval#1/9 AsIs: )/6 } Tile{ AsIs: e.B#1/14 } >/20 e.Lval#1/9/21 </23 & ApplyContraction-toExpr/24 (/25 Tile{ AsIs: t.Var#1/18 } ':'/26 e.Lval#1/9/27 )/29 Tile{ AsIs: e.E#1/16 } Tile{ AsIs: >/1 ]] }
      refalrts::alloc_close_call(vm, context[20]);
      refalrts::copy_evar(vm, context[21], context[22], context[9], context[10]);
      refalrts::alloc_open_call(vm, context[23]);
      refalrts::alloc_name(vm, context[24], functions[efunc_ApplyContractionm_toExpr]);
      refalrts::alloc_open_bracket(vm, context[25]);
      refalrts::alloc_char(vm, context[26], ':');
      refalrts::copy_evar(vm, context[27], context[28], context[9], context[10]);
      refalrts::alloc_close_bracket(vm, context[29]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[23] );
      refalrts::link_brackets( context[25], context[29] );
      refalrts::push_stack( vm, context[20] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[5], context[6] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[16], context[17] );
      res = refalrts::splice_evar( res, context[26], context[29] );
      res = refalrts::splice_evar( res, context[18], context[19] );
      res = refalrts::splice_evar( res, context[20], context[25] );
      res = refalrts::splice_evar( res, context[14], context[15] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[14], context[15], context[7], context[8] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & ApplyContraction-toExpr/4 t.Contraction#1/5 e.B#1/9 (/15 # Brackets/17 e.M#1/13 )/16 e.E#1/11 >/1
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
      context[17] = refalrts::ident_left( identifiers[ident_Brackets], context[13], context[14] );
      if( ! context[17] )
        continue;
      // closed e.M#1 as range 13
      // closed e.E#1 as range 11
      //DEBUG: t.Contraction#1: 5
      //DEBUG: e.B#1: 9
      //DEBUG: e.M#1: 13
      //DEBUG: e.E#1: 11

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ApplyContraction-toExpr/4 AsIs: t.Contraction#1/5 AsIs: e.B#1/9 HalfReuse: >/15 HalfReuse: (/17 } # Brackets/18 </19 & ApplyContraction-toExpr/20 t.Contraction#1/5/21 Tile{ AsIs: e.M#1/13 } >/23 Tile{ AsIs: )/16 } </24 & ApplyContraction-toExpr/25 t.Contraction#1/5/26 Tile{ AsIs: e.E#1/11 } Tile{ AsIs: >/1 ]] }
      refalrts::alloc_ident(vm, context[18], identifiers[ident_Brackets]);
      refalrts::alloc_open_call(vm, context[19]);
      refalrts::alloc_name(vm, context[20], functions[efunc_ApplyContractionm_toExpr]);
      refalrts::copy_evar(vm, context[21], context[22], context[5], context[6]);
      refalrts::alloc_close_call(vm, context[23]);
      refalrts::alloc_open_call(vm, context[24]);
      refalrts::alloc_name(vm, context[25], functions[efunc_ApplyContractionm_toExpr]);
      refalrts::copy_evar(vm, context[26], context[27], context[5], context[6]);
      refalrts::reinit_close_call(context[15]);
      refalrts::reinit_open_bracket(context[17]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[24] );
      refalrts::link_brackets( context[17], context[16] );
      refalrts::push_stack( vm, context[23] );
      refalrts::push_stack( vm, context[19] );
      refalrts::push_stack( vm, context[15] );
      refalrts::push_stack( vm, context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[11], context[12] );
      res = refalrts::splice_evar( res, context[24], context[27] );
      res = refalrts::splice_evar( res, context[16], context[16] );
      res = refalrts::splice_evar( res, context[23], context[23] );
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_evar( res, context[18], context[22] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[9], context[10], context[7], context[8] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & ApplyContraction-toExpr/4 t.Contraction#1/5 e.B#1/9 (/15 # ADT-Brackets/17 e.M#1/13 )/16 e.E#1/11 >/1
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
      context[17] = refalrts::ident_left( identifiers[ident_ADTm_Brackets], context[13], context[14] );
      if( ! context[17] )
        continue;
      // closed e.M#1 as range 13
      // closed e.E#1 as range 11
      //DEBUG: t.Contraction#1: 5
      //DEBUG: e.B#1: 9
      //DEBUG: e.M#1: 13
      //DEBUG: e.E#1: 11

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ApplyContraction-toExpr/4 AsIs: t.Contraction#1/5 AsIs: e.B#1/9 HalfReuse: >/15 HalfReuse: (/17 } # ADT-Brackets/18 </19 & ApplyContraction-toExpr/20 t.Contraction#1/5/21 Tile{ AsIs: e.M#1/13 } >/23 Tile{ AsIs: )/16 } </24 & ApplyContraction-toExpr/25 t.Contraction#1/5/26 Tile{ AsIs: e.E#1/11 } Tile{ AsIs: >/1 ]] }
      refalrts::alloc_ident(vm, context[18], identifiers[ident_ADTm_Brackets]);
      refalrts::alloc_open_call(vm, context[19]);
      refalrts::alloc_name(vm, context[20], functions[efunc_ApplyContractionm_toExpr]);
      refalrts::copy_evar(vm, context[21], context[22], context[5], context[6]);
      refalrts::alloc_close_call(vm, context[23]);
      refalrts::alloc_open_call(vm, context[24]);
      refalrts::alloc_name(vm, context[25], functions[efunc_ApplyContractionm_toExpr]);
      refalrts::copy_evar(vm, context[26], context[27], context[5], context[6]);
      refalrts::reinit_close_call(context[15]);
      refalrts::reinit_open_bracket(context[17]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[24] );
      refalrts::link_brackets( context[17], context[16] );
      refalrts::push_stack( vm, context[23] );
      refalrts::push_stack( vm, context[19] );
      refalrts::push_stack( vm, context[15] );
      refalrts::push_stack( vm, context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[11], context[12] );
      res = refalrts::splice_evar( res, context[24], context[27] );
      res = refalrts::splice_evar( res, context[16], context[16] );
      res = refalrts::splice_evar( res, context[23], context[23] );
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_evar( res, context[18], context[22] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[9], context[10], context[7], context[8] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ApplyContraction-toExpr/4 t.Contraction#1/5 e.Expr#1/2 >/1
  // closed e.Expr#1 as range 2
  //DEBUG: t.Contraction#1: 5
  //DEBUG: e.Expr#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & ApplyContraction-toExpr/4 t.Contraction#1/5 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Expr#1/2 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ApplyContractionm_toExpr("ApplyContraction-toExpr", COOKIE1_, COOKIE2_, func_ApplyContractionm_toExpr);


static refalrts::FnResult func_IsFreeVariableSeq(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
  // </0 & IsFreeVariableSeq/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & IsFreeVariableSeq/4 >/1
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & IsFreeVariableSeq/4 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # True/1 ]] }
    refalrts::reinit_ident(context[1], identifiers[ident_True]);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & IsFreeVariableSeq/4 t.new#1/5 e.new#2/2 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 2
  do {
    // </0 & IsFreeVariableSeq/4 (/5 # TkVariable/11 'e'/12 e.Idx#1/9 )/6 e.Rem#1/7 >/1
    context[7] = context[2];
    context[8] = context[3];
    context[9] = 0;
    context[10] = 0;
    if( ! refalrts::brackets_term( context[9], context[10], context[5] ) )
      continue;
    context[11] = refalrts::ident_left( identifiers[ident_TkVariable], context[9], context[10] );
    if( ! context[11] )
      continue;
    context[12] = refalrts::char_left( 'e', context[9], context[10] );
    if( ! context[12] )
      continue;
    // closed e.Idx#1 as range 9
    // closed e.Rem#1 as range 7
    //DEBUG: e.Idx#1: 9
    //DEBUG: e.Rem#1: 7

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} & IsFreeVariableSeq/4 (/5 # TkVariable/11 'e'/12 e.Idx#1/9 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 } Tile{ HalfReuse: & IsFreeVariableSeq/6 AsIs: e.Rem#1/7 AsIs: >/1 ]] }
    refalrts::reinit_name(context[6], functions[efunc_IsFreeVariableSeq]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[6];
    refalrts::splice_to_freelist_open( vm, context[0], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & IsFreeVariableSeq/4 t.Other#1/5 e.Rem#1/2 >/1
  // closed e.Rem#1 as range 2
  //DEBUG: t.Other#1: 5
  //DEBUG: e.Rem#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & IsFreeVariableSeq/4 t.Other#1/5 e.Rem#1/2 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: # False/1 ]] }
  refalrts::reinit_ident(context[1], identifiers[ident_False]);
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_IsFreeVariableSeq("IsFreeVariableSeq", COOKIE1_, COOKIE2_, func_IsFreeVariableSeq);


static refalrts::FnResult func_gen_Map_Z1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
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
      // </0 & Map@1/4 (/7 e.2#0/11 ':'/18 (/15 # TkVariable/17 e.3#0/13 )/16 )/8 e.Tail#1/9 >/1
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
      context[17] = refalrts::ident_left( identifiers[ident_TkVariable], context[13], context[14] );
      if( ! context[17] )
        continue;
      context[18] = refalrts::char_right( ':', context[11], context[12] );
      if( ! context[18] )
        continue;
      // closed e.2#0 as range 11
      // closed e.3#0 as range 13
      // closed e.Tail#1 as range 9
      //DEBUG: e.2#0: 11
      //DEBUG: e.3#0: 13
      //DEBUG: e.Tail#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} # TkVariable/17 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.2#0/11 AsIs: ':'/18 AsIs: (/15 } Tile{ AsIs: e.3#0/13 } Tile{ HalfReuse: )/0 HalfReuse: )/4 } Tile{ HalfReuse: </16 HalfReuse: & Map@1/8 AsIs: e.Tail#1/9 AsIs: >/1 ]] }
      refalrts::reinit_close_bracket(context[0]);
      refalrts::reinit_close_bracket(context[4]);
      refalrts::reinit_open_call(context[16]);
      refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z1]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[16] );
      refalrts::link_brackets( context[7], context[4] );
      refalrts::link_brackets( context[15], context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[16];
      res = refalrts::splice_evar( res, context[0], context[4] );
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_evar( res, context[7], context[15] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
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
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & FormatAssigns\1*1/4 AsIs: t.Next#1/7 } >/11 </12 & Map@1/13 Tile{ AsIs: e.Tail#1/9 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_close_call(vm, context[11]);
    refalrts::alloc_open_call(vm, context[12]);
    refalrts::alloc_name(vm, context[13], functions[efunc_gen_Map_Z1]);
    refalrts::update_name(context[4], functions[efunc_gen_FormatAssigns_L1D1]);
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
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
  // </0 & Map@2/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Map@2/4 t.new#1/5 e.new#2/2 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 2
  do {
    // </0 & Map@2/4 t.Contraction#1/5 t.Next#1/9 e.Tail#1/7 >/1
    context[7] = context[2];
    context[8] = context[3];
    context[10] = refalrts::tvar_left( context[9], context[7], context[8] );
    if( ! context[10] )
      continue;
    // closed e.Tail#1 as range 7
    //DEBUG: t.Contraction#1: 5
    //DEBUG: t.Next#1: 9
    //DEBUG: e.Tail#1: 7

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ApplyContraction-toEquation/4 AsIs: t.Contraction#1/5 AsIs: t.Next#1/9 } >/11 </12 & Map@2/13 t.Contraction#1/5/14 Tile{ AsIs: e.Tail#1/7 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_close_call(vm, context[11]);
    refalrts::alloc_open_call(vm, context[12]);
    refalrts::alloc_name(vm, context[13], functions[efunc_gen_Map_Z2]);
    refalrts::copy_evar(vm, context[14], context[15], context[5], context[6]);
    refalrts::update_name(context[4], functions[efunc_ApplyContractionm_toEquation]);
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

  // </0 & Map@2/4 t.Contraction#1/5 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: t.Contraction#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Map@2/4 t.Contraction#1/5 >/1 {REMOVED TILE}
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
  // </0 & Map@3/4 t.new#1/5 e.new#2/2 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 2
  do {
    // </0 & Map@3/4 t.Contraction#1/5 t.Next#1/9 e.Tail#1/7 >/1
    context[7] = context[2];
    context[8] = context[3];
    context[10] = refalrts::tvar_left( context[9], context[7], context[8] );
    if( ! context[10] )
      continue;
    // closed e.Tail#1 as range 7
    //DEBUG: t.Contraction#1: 5
    //DEBUG: t.Next#1: 9
    //DEBUG: e.Tail#1: 7

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ApplyContraction-toAssign/4 AsIs: t.Contraction#1/5 AsIs: t.Next#1/9 } >/11 </12 & Map@3/13 t.Contraction#1/5/14 Tile{ AsIs: e.Tail#1/7 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_close_call(vm, context[11]);
    refalrts::alloc_open_call(vm, context[12]);
    refalrts::alloc_name(vm, context[13], functions[efunc_gen_Map_Z3]);
    refalrts::copy_evar(vm, context[14], context[15], context[5], context[6]);
    refalrts::update_name(context[4], functions[efunc_ApplyContractionm_toAssign]);
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

  // </0 & Map@3/4 t.Contraction#1/5 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: t.Contraction#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Map@3/4 t.Contraction#1/5 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Map_Z3("Map@3", COOKIE1_, COOKIE2_, func_gen_Map_Z3);


//End of file
