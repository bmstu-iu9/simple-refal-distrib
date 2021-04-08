// This file automatically generated from 'GenericMatch.ref'
// Don't edit! Edit 'GenericMatch.ref' and recompile it

#include "refalrts.h"

#define cookie_ns cookie_ns_1291367540_3278503741
#define COOKIE1_ 1291367540U
#define COOKIE2_ 3278503741U

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
  efunc_gen_Map_Z1 = 18,
  efunc_gen_GenericMatch_B1 = 19,
  efunc_Solve = 20,
  efunc_ExtractVariables = 21,
  efunc_CombineResults = 22,
  efunc_gen_CombineResults_Z0 = 23,
  efunc_Solvem_Aux = 24,
  efunc_gen_Solve_B1 = 25,
  efunc_gen_Solutionm_PostProcess_S1C1 = 26,
  efunc_gen_Solutionm_PostProcess_S2C1 = 27,
  efunc_Solutionm_PostProcess = 28,
  efunc_gen_AddContraction_Z1 = 29,
  efunc_gen_Solutionm_PostProcess_S3C1 = 30,
  efunc_gen_AddContraction_Z2 = 31,
  efunc_gen_Solutionm_PostProcess_S4C1 = 32,
  efunc_gen_Solutionm_PostProcess_S5C1 = 33,
  efunc_gen_Solutionm_PostProcess_S6C1 = 34,
  efunc_gen_Solutionm_PostProcess_S7C1 = 35,
  efunc_gen_Map_Z3 = 36,
  efunc_gen_Solvem_Aux_S3A6 = 37,
  efunc_gen_Map_Z2 = 38,
  efunc_gen_Solvem_Aux_S3A5 = 39,
  efunc_gen_Map_Z5 = 40,
  efunc_gen_Map_Z4 = 41,
  efunc_NewVarName = 42,
  efunc_gen_Solvem_Aux_S3A4 = 43,
  efunc_gen_Map_Z7 = 44,
  efunc_gen_Solvem_Aux_S4A6 = 45,
  efunc_gen_Map_Z6 = 46,
  efunc_gen_Solvem_Aux_S4A5 = 47,
  efunc_gen_Solvem_Aux_S4A4 = 48,
  efunc_AddContractions = 49,
  efunc_gen_Solvem_Aux_S8B1S1A1 = 50,
  efunc_gen_Map_Z8 = 51,
  efunc_gen_Solvem_Aux_S1C1 = 52,
  efunc_IsTerm = 53,
  efunc_gen_Solvem_Aux_S1C2 = 54,
  efunc_gen_Solvem_Aux_S1B1 = 55,
  efunc_Solvem_TermEquation = 56,
  efunc_gen_Solvem_Aux_S2C1 = 57,
  efunc_gen_Solvem_Aux_S2C2 = 58,
  efunc_gen_Solvem_Aux_S2B1 = 59,
  efunc_gen_Solvem_Aux_S3C1 = 60,
  efunc_gen_Solvem_Aux_S3C2 = 61,
  efunc_gen_Solvem_Aux_S3A3 = 62,
  efunc_gen_Solvem_Aux_S4C1 = 63,
  efunc_gen_Solvem_Aux_S4C2 = 64,
  efunc_gen_Solvem_Aux_S4A3 = 65,
  efunc_gen_Solvem_Aux_S6C1 = 66,
  efunc_gen_Solvem_Aux_S7C1 = 67,
  efunc_gen_Solvem_Aux_S8B1 = 68,
  efunc_IsFreeVariableSeq = 69,
  efunc_gen_Map_Z10 = 70,
  efunc_gen_Map_Z9 = 71,
  efunc_gen_Map_Z12 = 72,
  efunc_gen_Map_Z11 = 73,
  efunc_gen_Map_Z14 = 74,
  efunc_gen_Map_Z13 = 75,
  efunc_gen_Solvem_TermEquation_S1C1 = 76,
  efunc_gen_Solvem_TermEquation_S2C1 = 77,
  efunc_IsSVarSubset = 78,
  efunc_gen_Solvem_TermEquation_S2C2 = 79,
  efunc_gen_Solvem_TermEquation_S3C1 = 80,
  efunc_gen_Solvem_TermEquation_S4C1 = 81,
  efunc_gen_Solvem_TermEquation_S4C2 = 82,
  efunc_gen_AddContraction_Z3 = 83,
  efunc_gen_Solvem_TermEquation_S5C1 = 84,
  efunc_gen_Solvem_TermEquation_S6C1 = 85,
  efunc_gen_Solvem_TermEquation_S6A2 = 86,
  efunc_gen_Solvem_TermEquation_S7C1 = 87,
  efunc_gen_Solvem_TermEquation_S7A2 = 88,
  efunc_gen_Solvem_TermEquation_S8C1 = 89,
  efunc_gen_Solvem_TermEquation_S9C1 = 90,
  efunc_gen_Solvem_TermEquation_S9A2 = 91,
  efunc_gen_Map_Z15 = 92,
  efunc_gen_Map_Z16 = 93,
  efunc_ApplyContractionm_toExpr = 94,
  efunc_Mu = 95,
  efunc_Up = 96,
  efunc_Evm_met = 97,
  efunc_Residue = 98,
  efunc_u_u_Metau_Residue = 99,
  efunc_MapAccum = 100,
  efunc_UnBracket = 101,
  efunc_DelAccumulator = 102,
  efunc_Inc = 103,
  efunc_Dec = 104,
  efunc_FormatAssigns = 105,
  efunc_GenericMatch = 106,
  efunc_Eq = 107,
  efunc_HasRepeatedVarsAssigns = 108,
  efunc_AddContraction = 109,
  efunc_ApplyContraction = 110,
  efunc_ApplyContractionm_toAssign = 111,
  efunc_ApplyContractionm_toEquation = 112,
  efunc_gen_Apply_Z4 = 113,
  efunc_gen_FormatAssigns_L1D1 = 114,
  efunc_gen_Map_Z0 = 115,
  efunc_gen_FormatAssigns_L1Z0 = 116,
  efunc_gen_Map_Z18 = 117,
  efunc_gen_Map_Z17 = 118,
  efunc_gen_AddContraction_Z0 = 119,
  efunc_gen_Map_Z20 = 120,
  efunc_gen_Map_Z19 = 121,
  efunc_gen_ApplyContractionm_toEquation_D1 = 122,
  efunc_gen_ApplyContractionm_toEquation_Z0 = 123,
  efunc_gen_ApplyContractionm_toAssign_D1 = 124,
  efunc_gen_ApplyContractionm_toAssign_Z0 = 125,
  efunc_gen_Solvem_Aux_S8B1S1A1L1Z0 = 126,
  efunc_gen_Map_Z22 = 127,
  efunc_gen_Map_Z21 = 128,
};


enum ident {
  ident_Success = 0,
  ident_Clear = 1,
  ident_Contracted = 2,
  ident_Failure = 3,
  ident_Undefined = 4,
  ident_Symbol = 5,
  ident_True = 6,
  ident_Var = 7,
  ident_Closure = 8,
  ident_ClosureBrackets = 9,
  ident_False = 10,
  ident_Brackets = 11,
  ident_ADTm_Brackets = 12,
  ident_CallBrackets = 13,
  ident_ColdCallBrackets = 14,
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
  ident_FormatAssigns = 31,
  ident_GenericMatch = 32,
  ident_IsSVarSubset = 33,
  ident_Solve = 34,
  ident_CombineResults = 35,
  ident_Eq = 36,
  ident_HasRepeatedVarsAssigns = 37,
  ident_Solutionm_PostProcess = 38,
  ident_Solvem_Aux = 39,
  ident_Solvem_TermEquation = 40,
  ident_IsTerm = 41,
  ident_AddContractions = 42,
  ident_AddContraction = 43,
  ident_ApplyContraction = 44,
  ident_ApplyContractionm_toAssign = 45,
  ident_ApplyContractionm_toEquation = 46,
  ident_ApplyContractionm_toExpr = 47,
  ident_IsFreeVariableSeq = 48,
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


static refalrts::FnResult func_FormatAssigns(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 5 elems
  refalrts::Iter context[5];
  refalrts::zeros( context, 5 );
  // </0 & FormatAssigns/4 e.Assigns/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Assigns as range 2
  //DEBUG: e.Assigns: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map@1/4 AsIs: e.Assigns/2 AsIs: >/1 ]] }
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
  // </0 & GenericMatch:1/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & GenericMatch:1/4 s.new1/5 e.new2/2 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new2 as range 2
  do {
    // </0 & GenericMatch:1/4 # Success/5 e.new3/6 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_Success], context[5] ) )
      continue;
    // closed e.new3 as range 6
    do {
      // </0 & GenericMatch:1/4 # Success/5 (/12 (/16 )/17 (/20 e.Assigns/18 )/21 )/13 >/1
      context[8] = context[6];
      context[9] = context[7];
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
      // closed e.Assigns as range 18
      //DEBUG: e.Assigns: 18

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & GenericMatch:1/4 # Success/5 (/12 {REMOVED TILE} )/13 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: # Clear/16 HalfReuse: </17 HalfReuse: & Map@1/20 AsIs: e.Assigns/18 HalfReuse: >/21 } Tile{ ]] }
      refalrts::reinit_ident(context[16], identifiers[ident_Clear]);
      refalrts::reinit_open_call(context[17]);
      refalrts::reinit_name(context[20], functions[efunc_gen_Map_Z1]);
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

    // </0 & GenericMatch:1/4 # Success/5 e.Solutions/8 >/1
    context[8] = context[6];
    context[9] = context[7];
    // closed e.Solutions as range 8
    //DEBUG: e.Solutions: 8

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} & GenericMatch:1/4 # Success/5 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: # Contracted/0 } Tile{ AsIs: e.Solutions/8 } Tile{ ]] }
    refalrts::reinit_ident(context[0], identifiers[ident_Contracted]);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[8], context[9] );
    refalrts::splice_to_freelist_open( vm, context[0], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & GenericMatch:1/4 s.new3/5 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & GenericMatch:1/4 # Failure/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_Failure], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & GenericMatch:1/4 # Failure/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # Failure/1 ]] }
    refalrts::reinit_ident(context[1], identifiers[ident_Failure]);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & GenericMatch:1/4 # Undefined/5 >/1
  if( ! refalrts::ident_term( identifiers[ident_Undefined], context[5] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & GenericMatch:1/4 # Undefined/5 {REMOVED TILE}
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
  // </0 & GenericMatch/4 (/7 e.Pattern/5 )/8 (/11 e.LPattern/9 )/12 >/1
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
  // closed e.Pattern as range 5
  // closed e.LPattern as range 9
  //DEBUG: e.Pattern: 5
  //DEBUG: e.LPattern: 9

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </13 & GenericMatch:1/14 </15 & Solve/16 (/17 </18 & ExtractVariables/19 (/20 (/21 e.Pattern/5/22 Tile{ AsIs: e.LPattern/9 } )/24 (/25 )/26 )/27 >/28 Tile{ HalfReuse: )/0 HalfReuse: (/4 AsIs: (/7 AsIs: e.Pattern/5 AsIs: )/8 HalfReuse: ':'/11 } (/29 e.LPattern/9/30 )/32 )/33 Tile{ HalfReuse: >/12 AsIs: >/1 ]] }
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
  // </0 & IsSVarSubset/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & IsSVarSubset/4 t.new1/5 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & IsSVarSubset/4 (/5 s.new2/9 e.new3/7 )/6 >/1
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
      continue;
    if( ! refalrts::svar_left( context[9], context[7], context[8] ) )
      continue;
    // closed e.new3 as range 7
    do {
      // </0 & IsSVarSubset/4 (/5 s.new4/9 s.new5/12 e.new6/10 )/6 >/1
      context[10] = context[7];
      context[11] = context[8];
      if( ! refalrts::svar_left( context[12], context[10], context[11] ) )
        continue;
      // closed e.new6 as range 10
      do {
        // </0 & IsSVarSubset/4 (/5 # Symbol/9 s.Type/12 e.Info/13 )/6 >/1
        context[13] = context[10];
        context[14] = context[11];
        if( ! refalrts::ident_term( identifiers[ident_Symbol], context[9] ) )
          continue;
        // closed e.Info as range 13
        //DEBUG: s.Type: 12
        //DEBUG: e.Info: 13

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 & IsSVarSubset/4 (/5 # Symbol/9 s.Type/12 e.Info/13 )/6 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: # True/1 ]] }
        refalrts::reinit_ident(context[1], identifiers[ident_True]);
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & IsSVarSubset/4 (/5 # Var/9 's'/12 e.Tindex/13 )/6 >/1
      context[13] = context[10];
      context[14] = context[11];
      if( ! refalrts::char_term( 's', context[12] ) )
        continue;
      if( ! refalrts::ident_term( identifiers[ident_Var], context[9] ) )
        continue;
      // closed e.Tindex as range 13
      //DEBUG: e.Tindex: 13

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & IsSVarSubset/4 (/5 # Var/9 's'/12 e.Tindex/13 )/6 {REMOVED TILE}
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
      // </0 & IsSVarSubset/4 (/5 # Closure/9 e.Body/10 )/6 >/1
      context[10] = context[7];
      context[11] = context[8];
      if( ! refalrts::ident_term( identifiers[ident_Closure], context[9] ) )
        continue;
      // closed e.Body as range 10
      //DEBUG: e.Body: 10

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & IsSVarSubset/4 (/5 # Closure/9 e.Body/10 )/6 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: # True/1 ]] }
      refalrts::reinit_ident(context[1], identifiers[ident_True]);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & IsSVarSubset/4 (/5 # ClosureBrackets/9 e.Context/10 )/6 >/1
    context[10] = context[7];
    context[11] = context[8];
    if( ! refalrts::ident_term( identifiers[ident_ClosureBrackets], context[9] ) )
      continue;
    // closed e.Context as range 10
    //DEBUG: e.Context: 10

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & IsSVarSubset/4 (/5 # ClosureBrackets/9 e.Context/10 )/6 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # True/1 ]] }
    refalrts::reinit_ident(context[1], identifiers[ident_True]);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & IsSVarSubset/4 t.OtherTerm/5 >/1
  //DEBUG: t.OtherTerm: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & IsSVarSubset/4 t.OtherTerm/5 {REMOVED TILE}
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
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
  // </0 & Solve:1/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
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
    // </0 & Solve:1/4 e.B/7 # Undefined/11 e.A/9 >/1
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
      // closed e.A as range 9
      //DEBUG: e.B: 7
      //DEBUG: e.A: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & Solve:1/4 e.B/7 # Undefined/11 e.A/9 {REMOVED TILE}
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

  do {
    // </0 & Solve:1/4 # Success/7 (/10 e.1/8 )/11 (/14 e.3/12 )/15 e.2/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[7] = refalrts::ident_left( identifiers[ident_Success], context[5], context[6] );
    if( ! context[7] )
      continue;
    context[8] = 0;
    context[9] = 0;
    context[10] = refalrts::brackets_left( context[8], context[9], context[5], context[6] );
    if( ! context[10] )
      continue;
    refalrts::bracket_pointers(context[10], context[11]);
    context[12] = 0;
    context[13] = 0;
    context[14] = refalrts::brackets_left( context[12], context[13], context[5], context[6] );
    if( ! context[14] )
      continue;
    refalrts::bracket_pointers(context[14], context[15]);
    // closed e.1 as range 8
    // closed e.3 as range 12
    // closed e.2 as range 5
    //DEBUG: e.1: 8
    //DEBUG: e.3: 12
    //DEBUG: e.2: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } # Success/16 </17 Tile{ HalfReuse: & CombineResults/0 HalfReuse: (/4 HalfReuse: (/7 AsIs: (/10 AsIs: e.1/8 AsIs: )/11 AsIs: (/14 AsIs: e.3/12 AsIs: )/15 } )/18 )/19 Tile{ AsIs: e.2/5 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_ident(vm, context[16], identifiers[ident_Success]);
    refalrts::alloc_open_call(vm, context[17]);
    refalrts::alloc_close_bracket(vm, context[18]);
    refalrts::alloc_close_bracket(vm, context[19]);
    refalrts::reinit_name(context[0], functions[efunc_CombineResults]);
    refalrts::reinit_open_bracket(context[4]);
    refalrts::reinit_open_bracket(context[7]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[17] );
    refalrts::link_brackets( context[4], context[19] );
    refalrts::link_brackets( context[7], context[18] );
    refalrts::link_brackets( context[14], context[15] );
    refalrts::link_brackets( context[10], context[11] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[18], context[19] );
    res = refalrts::splice_evar( res, context[0], context[15] );
    res = refalrts::splice_evar( res, context[16], context[17] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Solve:1/4 >/1
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Solve:1/4 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # Success/1 ]] }
    refalrts::reinit_ident(context[1], identifiers[ident_Success]);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Solve:1/4 e.Other/2 >/1
  // closed e.Other as range 2
  //DEBUG: e.Other: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } # Success/5 </6 & CombineResults@0/7 Tile{ HalfReuse: (/0 HalfReuse: )/4 AsIs: e.Other/2 AsIs: >/1 ]] }
  refalrts::alloc_ident(vm, context[5], identifiers[ident_Success]);
  refalrts::alloc_open_call(vm, context[6]);
  refalrts::alloc_name(vm, context[7], functions[efunc_gen_CombineResults_Z0]);
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
  // </0 & Solve/4 (/7 e.UsedVars/5 )/8 (/11 (/15 e.Expr/13 )/16 ':'/17 (/20 e.Lexpr/18 )/21 )/12 >/1
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
  // closed e.UsedVars as range 5
  // closed e.Expr as range 13
  // closed e.Lexpr as range 18
  //DEBUG: e.UsedVars: 5
  //DEBUG: e.Expr: 13
  //DEBUG: e.Lexpr: 18

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Solve:1/4 HalfReuse: </7 } & Solve-Aux/22 (/23 Tile{ AsIs: e.UsedVars/5 } )/24 (/25 Tile{ AsIs: )/8 AsIs: (/11 AsIs: (/15 AsIs: e.Expr/13 AsIs: )/16 AsIs: ':'/17 AsIs: (/20 AsIs: e.Lexpr/18 AsIs: )/21 AsIs: )/12 HalfReuse: (/1 } )/26 >/27 >/28 Tile{ ]] }
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
  // </0 & CombineResults/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & CombineResults/4 (/7 e.new1/5 )/8 e.new2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new1 as range 5
  // closed e.new2 as range 2
  do {
    // </0 & CombineResults/4 (/7 e.Solutions/9 )/8 # Success/13 (/16 e.Contrs/14 )/17 (/20 e.Assigns/18 )/21 e.Rest/11 >/1
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
    // closed e.Solutions as range 9
    // closed e.Contrs as range 14
    // closed e.Assigns as range 18
    // closed e.Rest as range 11
    //DEBUG: e.Solutions: 9
    //DEBUG: e.Contrs: 14
    //DEBUG: e.Assigns: 18
    //DEBUG: e.Rest: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & CombineResults/4 AsIs: (/7 } Tile{ AsIs: e.Solutions/9 } Tile{ HalfReuse: (/13 AsIs: (/16 AsIs: e.Contrs/14 AsIs: )/17 AsIs: (/20 AsIs: e.Assigns/18 AsIs: )/21 } Tile{ AsIs: )/8 } )/22 Tile{ AsIs: e.Rest/11 } Tile{ AsIs: >/1 ]] }
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
    res = refalrts::splice_elem( res, context[22] );
    res = refalrts::splice_elem( res, context[8] );
    res = refalrts::splice_evar( res, context[13], context[21] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & CombineResults/4 (/7 e.Solutions/5 )/8 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Solutions as range 5
  //DEBUG: e.Solutions: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & CombineResults/4 (/7 {REMOVED TILE} )/8 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Solutions/5 } Tile{ ]] }
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
  // </0 & Eq/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  do {
    // </0 & Eq/4 (/9 e.X/7 )/10 (/13 s.X/15 )/14 >/1
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
    // closed e.X as range 7
    if( ! refalrts::svar_left( context[15], context[11], context[12] ) )
      continue;
    if( ! refalrts::empty_seq( context[11], context[12] ) )
      continue;
    //DEBUG: e.X: 7
    //DEBUG: s.X: 15

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Eq/4 (/9 e.X/7 )/10 (/13 s.X/15 )/14 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # True/1 ]] }
    refalrts::reinit_ident(context[1], identifiers[ident_True]);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Eq/4 e.Other/2 >/1
  // closed e.Other as range 2
  //DEBUG: e.Other: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Eq/4 e.Other/2 {REMOVED TILE}
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
  // </0 & HasRepeatedVarsAssigns/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & HasRepeatedVarsAssigns/4 (/7 e.new1/5 )/8 (/11 e.new2/9 )/12 >/1
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
    // </0 & HasRepeatedVarsAssigns/4 (/7 e.B/17 (/25 e.Expr/23 ':'/29 t.Var/27 )/26 e.M/19 )/8 (/11 e.L/30 t.Var/34 e.R/32 )/12 >/1
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
      // closed e.M as range 19
      context[28] = refalrts::tvar_right( context[27], context[23], context[24] );
      if( ! context[28] )
        continue;
      context[29] = refalrts::char_right( ':', context[23], context[24] );
      if( ! context[29] )
        continue;
      // closed e.Expr as range 23
      context[30] = 0;
      context[31] = 0;
      refalrts::start_e_loop(vm);
      do {
        context[32] = context[21];
        context[33] = context[22];
        context[35] = refalrts::repeated_stvar_left( vm, context[34], context[27], context[32], context[33] );
        if( ! context[35] )
          continue;
        // closed e.R as range 32
        //DEBUG: e.B: 17
        //DEBUG: e.M: 19
        //DEBUG: t.Var: 27
        //DEBUG: e.Expr: 23
        //DEBUG: e.L: 30
        //DEBUG: e.R: 32

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 & HasRepeatedVarsAssigns/4 (/7 e.B/17 (/25 e.Expr/23 ':'/29 t.Var/27 )/26 e.M/19 )/8 (/11 e.L/30 t.Var/34 e.R/32 )/12 {REMOVED TILE}
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

  // </0 & HasRepeatedVarsAssigns/4 (/7 e.Lexpr/5 )/8 (/11 e.RVars/9 )/12 >/1
  // closed e.Lexpr as range 5
  // closed e.RVars as range 9
  //DEBUG: e.Lexpr: 5
  //DEBUG: e.RVars: 9

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & HasRepeatedVarsAssigns/4 (/7 e.Lexpr/5 )/8 (/11 e.RVars/9 )/12 {REMOVED TILE}
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
  // issue here memory for vars with 66 elems
  refalrts::Iter context[66];
  refalrts::zeros( context, 66 );
  // </0 & Solution-PostProcess/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & Solution-PostProcess/4 (/7 e.new1/5 )/8 (/11 e.new2/9 )/12 >/1
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
    // </0 & Solution-PostProcess/4 (/7 e.Contractions/13 )/8 (/11 e.Assigns/15 )/12 >/1
    context[13] = context[5];
    context[14] = context[6];
    context[15] = context[9];
    context[16] = context[10];
    // closed e.Contractions as range 13
    // closed e.Assigns as range 15
    //DEBUG: e.Contractions: 13
    //DEBUG: e.Assigns: 15
    //13: e.Contractions
    //15: e.Assigns
    //20: e.Assigns

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
      // </17 & Solution-PostProcess$1?1/21 e.B/22 (/28 e.Expr/26 ':'/35 (/32 # Var/34 e.HIndex/30 )/33 )/29 e.M/36 (/42 e.Expr/50 ':'/49 (/46 # Var/48 e.HIndex/52 )/47 )/43 e.E/38 >/18
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
        context[34] = refalrts::ident_left( identifiers[ident_Var], context[30], context[31] );
        if( ! context[34] )
          continue;
        context[35] = refalrts::char_right( ':', context[26], context[27] );
        if( ! context[35] )
          continue;
        // closed e.Expr as range 26
        // closed e.HIndex as range 30
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
          context[48] = refalrts::ident_left( identifiers[ident_Var], context[44], context[45] );
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
          // closed e.E as range 38
          //DEBUG: e.Contractions: 13
          //DEBUG: e.Assigns: 15
          //DEBUG: e.B: 22
          //DEBUG: e.Expr: 26
          //DEBUG: e.HIndex: 30
          //DEBUG: e.M: 36
          //DEBUG: e.E: 38

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} )/8 (/11 e.Assigns/15 )/12 {REMOVED TILE} {REMOVED TILE} (/42 e.Expr/50 ':'/49 (/46 # Var/48 e.HIndex/52 )/47 )/43 {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 AsIs: & Solution-PostProcess/4 AsIs: (/7 } Tile{ AsIs: e.Contractions/13 } Tile{ HalfReuse: )/17 HalfReuse: (/21 AsIs: e.B/22 AsIs: (/28 AsIs: e.Expr/26 AsIs: ':'/35 AsIs: (/32 AsIs: # Var/34 AsIs: e.HIndex/30 AsIs: )/33 AsIs: )/29 } Tile{ AsIs: e.M/36 } Tile{ AsIs: e.E/38 } Tile{ HalfReuse: )/18 AsIs: >/1 ]] }
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
    // </0 & Solution-PostProcess/4 (/7 e.Contractions/13 )/8 (/11 e.Assigns/15 )/12 >/1
    context[13] = context[5];
    context[14] = context[6];
    context[15] = context[9];
    context[16] = context[10];
    // closed e.Contractions as range 13
    // closed e.Assigns as range 15
    //DEBUG: e.Contractions: 13
    //DEBUG: e.Assigns: 15
    //13: e.Contractions
    //15: e.Assigns
    //20: e.Assigns

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
      // </17 & Solution-PostProcess$2?1/21 e.B/22 (/28 (/32 # Var/35 's'/36 e.Index1/30 )/33 ':'/34 (/39 # Var/41 e.HIndex/37 )/40 )/29 e.M/42 (/48 (/52 # Var/55 's'/56 e.Index2/50 )/53 ':'/54 (/59 # Var/61 e.HIndex/62 )/60 )/49 e.E/44 >/18
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
        context[35] = refalrts::ident_left( identifiers[ident_Var], context[30], context[31] );
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
        context[41] = refalrts::ident_left( identifiers[ident_Var], context[37], context[38] );
        if( ! context[41] )
          continue;
        if( ! refalrts::empty_seq( context[26], context[27] ) )
          continue;
        // closed e.Index1 as range 30
        // closed e.HIndex as range 37
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
          context[55] = refalrts::ident_left( identifiers[ident_Var], context[50], context[51] );
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
          context[61] = refalrts::ident_left( identifiers[ident_Var], context[57], context[58] );
          if( ! context[61] )
            continue;
          if( ! refalrts::empty_seq( context[46], context[47] ) )
            continue;
          if( ! refalrts::repeated_evar_left( vm, context[62], context[63], context[37], context[38], context[57], context[58] ) )
            continue;
          if( ! refalrts::empty_seq( context[57], context[58] ) )
            continue;
          // closed e.Index2 as range 50
          // closed e.E as range 44
          //DEBUG: e.Contractions: 13
          //DEBUG: e.Assigns: 15
          //DEBUG: e.B: 22
          //DEBUG: e.Index1: 30
          //DEBUG: e.HIndex: 37
          //DEBUG: e.M: 42
          //DEBUG: e.Index2: 50
          //DEBUG: e.E: 44

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} e.Assigns/15 )/12 </17 & Solution-PostProcess$2?1/21 {REMOVED TILE} (/28 (/32 # Var/35 's'/36 {REMOVED TILE} )/33 ':'/34 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} (/59 # Var/61 e.HIndex/62 )/60 {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 } Tile{ HalfReuse: & Solution-PostProcess/48 HalfReuse: </52 HalfReuse: & AddContraction@1/55 HalfReuse: (/56 AsIs: e.Index2/50 AsIs: )/53 HalfReuse: (/54 } Tile{ AsIs: e.Index1/30 } Tile{ HalfReuse: )/4 AsIs: (/7 AsIs: e.Contractions/13 AsIs: )/8 AsIs: (/11 } Tile{ AsIs: e.B/22 } Tile{ HalfReuse: )/39 HalfReuse: (/41 AsIs: e.HIndex/37 AsIs: )/40 HalfReuse: (/29 } Tile{ AsIs: e.M/42 } Tile{ AsIs: )/49 AsIs: e.E/44 AsIs: >/18 AsIs: >/1 ]] }
          refalrts::reinit_name(context[48], functions[efunc_Solutionm_PostProcess]);
          refalrts::reinit_open_call(context[52]);
          refalrts::reinit_name(context[55], functions[efunc_gen_AddContraction_Z1]);
          refalrts::reinit_open_bracket(context[56]);
          refalrts::reinit_open_bracket(context[54]);
          refalrts::reinit_close_bracket(context[4]);
          refalrts::reinit_close_bracket(context[39]);
          refalrts::reinit_open_bracket(context[41]);
          refalrts::reinit_open_bracket(context[29]);
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[0] );
          refalrts::push_stack( vm, context[18] );
          refalrts::push_stack( vm, context[52] );
          refalrts::link_brackets( context[29], context[49] );
          refalrts::link_brackets( context[41], context[40] );
          refalrts::link_brackets( context[11], context[39] );
          refalrts::link_brackets( context[7], context[8] );
          refalrts::link_brackets( context[54], context[4] );
          refalrts::link_brackets( context[56], context[53] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[49];
          res = refalrts::splice_evar( res, context[42], context[43] );
          res = refalrts::splice_evar( res, context[39], context[29] );
          res = refalrts::splice_evar( res, context[22], context[23] );
          res = refalrts::splice_evar( res, context[4], context[11] );
          res = refalrts::splice_evar( res, context[30], context[31] );
          res = refalrts::splice_evar( res, context[48], context[54] );
          refalrts::splice_to_freelist_open( vm, context[0], res );
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
    // </0 & Solution-PostProcess/4 (/7 e.Contractions/13 )/8 (/11 e.Assigns/15 )/12 >/1
    context[13] = context[5];
    context[14] = context[6];
    context[15] = context[9];
    context[16] = context[10];
    // closed e.Contractions as range 13
    // closed e.Assigns as range 15
    //DEBUG: e.Contractions: 13
    //DEBUG: e.Assigns: 15
    //13: e.Contractions
    //15: e.Assigns
    //20: e.Assigns

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
      // </17 & Solution-PostProcess$3?1/21 e.B/22 (/28 (/32 # Var/35 's'/36 e.PIndex/30 )/33 ':'/34 (/39 # Var/41 e.HIndex/37 )/40 )/29 e.M/42 (/48 (/52 # Symbol/55 s.Type/63 e.Info/50 )/53 ':'/54 (/58 # Var/60 e.HIndex/61 )/59 )/49 e.E/44 >/18
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
        context[35] = refalrts::ident_left( identifiers[ident_Var], context[30], context[31] );
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
        context[41] = refalrts::ident_left( identifiers[ident_Var], context[37], context[38] );
        if( ! context[41] )
          continue;
        if( ! refalrts::empty_seq( context[26], context[27] ) )
          continue;
        // closed e.PIndex as range 30
        // closed e.HIndex as range 37
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
          context[60] = refalrts::ident_left( identifiers[ident_Var], context[56], context[57] );
          if( ! context[60] )
            continue;
          if( ! refalrts::empty_seq( context[46], context[47] ) )
            continue;
          if( ! refalrts::repeated_evar_left( vm, context[61], context[62], context[37], context[38], context[56], context[57] ) )
            continue;
          if( ! refalrts::empty_seq( context[56], context[57] ) )
            continue;
          // closed e.E as range 44
          if( ! refalrts::svar_left( context[63], context[50], context[51] ) )
            continue;
          // closed e.Info as range 50
          //DEBUG: e.Contractions: 13
          //DEBUG: e.Assigns: 15
          //DEBUG: e.B: 22
          //DEBUG: e.PIndex: 30
          //DEBUG: e.HIndex: 37
          //DEBUG: e.M: 42
          //DEBUG: e.E: 44
          //DEBUG: s.Type: 63
          //DEBUG: e.Info: 50

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} e.Assigns/15 )/12 </17 & Solution-PostProcess$3?1/21 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} (/48 (/52 # Symbol/55 s.Type/63 {REMOVED TILE} {REMOVED TILE} ':'/54 (/58 # Var/60 e.HIndex/61 )/59 {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 } Tile{ HalfReuse: & Solution-PostProcess/28 HalfReuse: </32 HalfReuse: & AddContraction@2/35 HalfReuse: (/36 AsIs: e.PIndex/30 AsIs: )/33 HalfReuse: s.Type63 /34 AsIs: (/39 } Tile{ AsIs: e.Info/50 } Tile{ HalfReuse: )/4 AsIs: (/7 AsIs: e.Contractions/13 AsIs: )/8 AsIs: (/11 } Tile{ AsIs: e.B/22 } Tile{ AsIs: )/53 } Tile{ HalfReuse: (/41 AsIs: e.HIndex/37 AsIs: )/40 HalfReuse: (/29 } Tile{ AsIs: e.M/42 } Tile{ AsIs: )/49 AsIs: e.E/44 AsIs: >/18 AsIs: >/1 ]] }
          refalrts::reinit_name(context[28], functions[efunc_Solutionm_PostProcess]);
          refalrts::reinit_open_call(context[32]);
          refalrts::reinit_name(context[35], functions[efunc_gen_AddContraction_Z2]);
          refalrts::reinit_open_bracket(context[36]);
          refalrts::reinit_svar( context[34], context[63] );
          refalrts::reinit_close_bracket(context[4]);
          refalrts::reinit_open_bracket(context[41]);
          refalrts::reinit_open_bracket(context[29]);
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[0] );
          refalrts::push_stack( vm, context[18] );
          refalrts::push_stack( vm, context[32] );
          refalrts::link_brackets( context[29], context[49] );
          refalrts::link_brackets( context[41], context[40] );
          refalrts::link_brackets( context[11], context[53] );
          refalrts::link_brackets( context[7], context[8] );
          refalrts::link_brackets( context[39], context[4] );
          refalrts::link_brackets( context[36], context[33] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[49];
          res = refalrts::splice_evar( res, context[42], context[43] );
          res = refalrts::splice_evar( res, context[41], context[29] );
          res = refalrts::splice_elem( res, context[53] );
          res = refalrts::splice_evar( res, context[22], context[23] );
          res = refalrts::splice_evar( res, context[4], context[11] );
          res = refalrts::splice_evar( res, context[50], context[51] );
          res = refalrts::splice_evar( res, context[28], context[39] );
          refalrts::splice_to_freelist_open( vm, context[0], res );
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
    // </0 & Solution-PostProcess/4 (/7 e.Contractions/13 )/8 (/11 e.Assigns/15 )/12 >/1
    context[13] = context[5];
    context[14] = context[6];
    context[15] = context[9];
    context[16] = context[10];
    // closed e.Contractions as range 13
    // closed e.Assigns as range 15
    //DEBUG: e.Contractions: 13
    //DEBUG: e.Assigns: 15
    //13: e.Contractions
    //15: e.Assigns
    //20: e.Assigns

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
      // </17 & Solution-PostProcess$4?1/21 e.B/22 (/28 (/32 # Symbol/35 s.Type/41 e.Info/30 )/33 ':'/34 (/38 # Var/40 e.HIndex/36 )/39 )/29 e.M/42 (/48 (/52 # Var/55 's'/56 e.PIndex/50 )/53 ':'/54 (/59 # Var/61 e.HIndex/62 )/60 )/49 e.E/44 >/18
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
        context[40] = refalrts::ident_left( identifiers[ident_Var], context[36], context[37] );
        if( ! context[40] )
          continue;
        if( ! refalrts::empty_seq( context[26], context[27] ) )
          continue;
        // closed e.HIndex as range 36
        if( ! refalrts::svar_left( context[41], context[30], context[31] ) )
          continue;
        // closed e.Info as range 30
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
          context[55] = refalrts::ident_left( identifiers[ident_Var], context[50], context[51] );
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
          context[61] = refalrts::ident_left( identifiers[ident_Var], context[57], context[58] );
          if( ! context[61] )
            continue;
          if( ! refalrts::empty_seq( context[46], context[47] ) )
            continue;
          if( ! refalrts::repeated_evar_left( vm, context[62], context[63], context[36], context[37], context[57], context[58] ) )
            continue;
          if( ! refalrts::empty_seq( context[57], context[58] ) )
            continue;
          // closed e.PIndex as range 50
          // closed e.E as range 44
          //DEBUG: e.Contractions: 13
          //DEBUG: e.Assigns: 15
          //DEBUG: e.B: 22
          //DEBUG: e.HIndex: 36
          //DEBUG: s.Type: 41
          //DEBUG: e.Info: 30
          //DEBUG: e.M: 42
          //DEBUG: e.PIndex: 50
          //DEBUG: e.E: 44

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} e.Assigns/15 )/12 </17 & Solution-PostProcess$4?1/21 {REMOVED TILE} (/28 (/32 # Symbol/35 s.Type/41 {REMOVED TILE} )/33 ':'/34 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} # Var/61 e.HIndex/62 )/60 {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 } Tile{ HalfReuse: & Solution-PostProcess/48 HalfReuse: </52 HalfReuse: & AddContraction@2/55 HalfReuse: (/56 AsIs: e.PIndex/50 AsIs: )/53 HalfReuse: s.Type41 /54 AsIs: (/59 } Tile{ AsIs: e.Info/30 } Tile{ HalfReuse: )/4 AsIs: (/7 AsIs: e.Contractions/13 AsIs: )/8 AsIs: (/11 } Tile{ AsIs: e.B/22 } Tile{ HalfReuse: )/38 HalfReuse: (/40 AsIs: e.HIndex/36 AsIs: )/39 HalfReuse: (/29 } Tile{ AsIs: e.M/42 } Tile{ AsIs: )/49 AsIs: e.E/44 AsIs: >/18 AsIs: >/1 ]] }
          refalrts::reinit_name(context[48], functions[efunc_Solutionm_PostProcess]);
          refalrts::reinit_open_call(context[52]);
          refalrts::reinit_name(context[55], functions[efunc_gen_AddContraction_Z2]);
          refalrts::reinit_open_bracket(context[56]);
          refalrts::reinit_svar( context[54], context[41] );
          refalrts::reinit_close_bracket(context[4]);
          refalrts::reinit_close_bracket(context[38]);
          refalrts::reinit_open_bracket(context[40]);
          refalrts::reinit_open_bracket(context[29]);
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[0] );
          refalrts::push_stack( vm, context[18] );
          refalrts::push_stack( vm, context[52] );
          refalrts::link_brackets( context[29], context[49] );
          refalrts::link_brackets( context[40], context[39] );
          refalrts::link_brackets( context[11], context[38] );
          refalrts::link_brackets( context[7], context[8] );
          refalrts::link_brackets( context[59], context[4] );
          refalrts::link_brackets( context[56], context[53] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[49];
          res = refalrts::splice_evar( res, context[42], context[43] );
          res = refalrts::splice_evar( res, context[38], context[29] );
          res = refalrts::splice_evar( res, context[22], context[23] );
          res = refalrts::splice_evar( res, context[4], context[11] );
          res = refalrts::splice_evar( res, context[30], context[31] );
          res = refalrts::splice_evar( res, context[48], context[59] );
          refalrts::splice_to_freelist_open( vm, context[0], res );
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
    // </0 & Solution-PostProcess/4 (/7 e.Contractions/13 )/8 (/11 e.Assigns/15 )/12 >/1
    context[13] = context[5];
    context[14] = context[6];
    context[15] = context[9];
    context[16] = context[10];
    // closed e.Contractions as range 13
    // closed e.Assigns as range 15
    //DEBUG: e.Contractions: 13
    //DEBUG: e.Assigns: 15
    //13: e.Contractions
    //15: e.Assigns
    //20: e.Assigns

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
      // </17 & Solution-PostProcess$5?1/21 e.B/22 (/28 (/32 # Symbol/35 s.Type/41 e.Info/30 )/33 ':'/34 (/38 # Var/40 e.HIndex/36 )/39 )/29 e.M/42 (/48 (/52 # Symbol/55 s.Type/61 e.Info/62 )/53 ':'/54 (/58 # Var/60 e.HIndex/64 )/59 )/49 e.E/44 >/18
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
        context[40] = refalrts::ident_left( identifiers[ident_Var], context[36], context[37] );
        if( ! context[40] )
          continue;
        if( ! refalrts::empty_seq( context[26], context[27] ) )
          continue;
        // closed e.HIndex as range 36
        if( ! refalrts::svar_left( context[41], context[30], context[31] ) )
          continue;
        // closed e.Info as range 30
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
          context[60] = refalrts::ident_left( identifiers[ident_Var], context[56], context[57] );
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
          // closed e.E as range 44
          //DEBUG: e.Contractions: 13
          //DEBUG: e.Assigns: 15
          //DEBUG: e.B: 22
          //DEBUG: e.HIndex: 36
          //DEBUG: s.Type: 41
          //DEBUG: e.Info: 30
          //DEBUG: e.M: 42
          //DEBUG: e.E: 44

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} )/8 (/11 e.Assigns/15 )/12 {REMOVED TILE} {REMOVED TILE} (/48 (/52 # Symbol/55 s.Type/61 e.Info/62 )/53 ':'/54 (/58 # Var/60 e.HIndex/64 )/59 )/49 {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 AsIs: & Solution-PostProcess/4 AsIs: (/7 } Tile{ AsIs: e.Contractions/13 } Tile{ HalfReuse: )/17 HalfReuse: (/21 AsIs: e.B/22 AsIs: (/28 AsIs: (/32 AsIs: # Symbol/35 AsIs: s.Type/41 AsIs: e.Info/30 AsIs: )/33 AsIs: ':'/34 AsIs: (/38 AsIs: # Var/40 AsIs: e.HIndex/36 AsIs: )/39 AsIs: )/29 } Tile{ AsIs: e.M/42 } Tile{ AsIs: e.E/44 } Tile{ HalfReuse: )/18 AsIs: >/1 ]] }
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
    // </0 & Solution-PostProcess/4 (/7 e.Contractions/13 )/8 (/11 e.Assigns/15 )/12 >/1
    context[13] = context[5];
    context[14] = context[6];
    context[15] = context[9];
    context[16] = context[10];
    // closed e.Contractions as range 13
    // closed e.Assigns as range 15
    //DEBUG: e.Contractions: 13
    //DEBUG: e.Assigns: 15
    //13: e.Contractions
    //15: e.Assigns
    //20: e.Assigns

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
      // </17 & Solution-PostProcess$6?1/21 e.B/22 (/28 (/32 # Symbol/35 e.Info1/30 )/33 ':'/34 (/38 # Var/40 e.HIndex/36 )/39 )/29 e.M/41 (/47 (/51 # Symbol/54 e.Info2/49 )/52 ':'/53 (/57 # Var/59 e.HIndex/60 )/58 )/48 e.E/43 >/18
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
        context[40] = refalrts::ident_left( identifiers[ident_Var], context[36], context[37] );
        if( ! context[40] )
          continue;
        if( ! refalrts::empty_seq( context[26], context[27] ) )
          continue;
        // closed e.Info1 as range 30
        // closed e.HIndex as range 36
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
          context[59] = refalrts::ident_left( identifiers[ident_Var], context[55], context[56] );
          if( ! context[59] )
            continue;
          if( ! refalrts::empty_seq( context[45], context[46] ) )
            continue;
          if( ! refalrts::repeated_evar_left( vm, context[60], context[61], context[36], context[37], context[55], context[56] ) )
            continue;
          if( ! refalrts::empty_seq( context[55], context[56] ) )
            continue;
          // closed e.Info2 as range 49
          // closed e.E as range 43
          //DEBUG: e.Contractions: 13
          //DEBUG: e.Assigns: 15
          //DEBUG: e.B: 22
          //DEBUG: e.Info1: 30
          //DEBUG: e.HIndex: 36
          //DEBUG: e.M: 41
          //DEBUG: e.Info2: 49
          //DEBUG: e.E: 43

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} </0 & Solution-PostProcess/4 (/7 e.Contractions/13 )/8 (/11 e.Assigns/15 )/12 </17 & Solution-PostProcess$6?1/21 e.B/22 (/28 (/32 # Symbol/35 e.Info1/30 )/33 ':'/34 (/38 # Var/40 e.HIndex/36 )/39 )/29 e.M/41 (/47 (/51 # Symbol/54 e.Info2/49 )/52 ':'/53 (/57 # Var/59 e.HIndex/60 )/58 )/48 e.E/43 >/18 >/1 {REMOVED TILE}
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
    // </0 & Solution-PostProcess/4 (/7 e.Contractions/13 )/8 (/11 e.Assigns/15 )/12 >/1
    context[13] = context[5];
    context[14] = context[6];
    context[15] = context[9];
    context[16] = context[10];
    // closed e.Contractions as range 13
    // closed e.Assigns as range 15
    //DEBUG: e.Contractions: 13
    //DEBUG: e.Assigns: 15
    //13: e.Contractions
    //15: e.Assigns
    //20: e.Assigns

    refalrts::reset_allocator(vm);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::alloc_open_call(vm, context[17]);
    refalrts::alloc_name(vm, context[19], functions[efunc_gen_Solutionm_PostProcess_S7C1]);
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
      // </17 & Solution-PostProcess$7?1/21 e.B/22 (/28 e.Expr1/26 ':'/35 (/32 # Var/34 e.HIndex/30 )/33 )/29 e.M/36 (/42 e.Expr2/40 ':'/49 (/46 # Var/48 e.HIndex/50 )/47 )/43 e.E/38 >/18
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
        context[34] = refalrts::ident_left( identifiers[ident_Var], context[30], context[31] );
        if( ! context[34] )
          continue;
        context[35] = refalrts::char_right( ':', context[26], context[27] );
        if( ! context[35] )
          continue;
        // closed e.Expr1 as range 26
        // closed e.HIndex as range 30
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
          context[48] = refalrts::ident_left( identifiers[ident_Var], context[44], context[45] );
          if( ! context[48] )
            continue;
          context[49] = refalrts::char_right( ':', context[40], context[41] );
          if( ! context[49] )
            continue;
          if( ! refalrts::repeated_evar_left( vm, context[50], context[51], context[30], context[31], context[44], context[45] ) )
            continue;
          if( ! refalrts::empty_seq( context[44], context[45] ) )
            continue;
          // closed e.Expr2 as range 40
          // closed e.E as range 38
          //DEBUG: e.Contractions: 13
          //DEBUG: e.Assigns: 15
          //DEBUG: e.B: 22
          //DEBUG: e.Expr1: 26
          //DEBUG: e.HIndex: 30
          //DEBUG: e.M: 36
          //DEBUG: e.Expr2: 40
          //DEBUG: e.E: 38

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} </0 & Solution-PostProcess/4 (/7 e.Contractions/13 )/8 (/11 e.Assigns/15 )/12 </17 & Solution-PostProcess$7?1/21 e.B/22 (/28 e.Expr1/26 ':'/35 (/32 # Var/34 e.HIndex/30 )/33 )/29 e.M/36 (/42 e.Expr2/40 ':'/49 (/46 # Var/48 e.HIndex/50 )/47 )/43 e.E/38 >/18 {REMOVED TILE}
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

  // </0 & Solution-PostProcess/4 (/7 e.Contractions/5 )/8 (/11 e.Assigns/9 )/12 >/1
  // closed e.Contractions as range 5
  // closed e.Assigns as range 9
  //DEBUG: e.Contractions: 5
  //DEBUG: e.Assigns: 9

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: # Success/4 AsIs: (/7 AsIs: e.Contractions/5 AsIs: )/8 AsIs: (/11 AsIs: e.Assigns/9 AsIs: )/12 } Tile{ ]] }
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
  // </0 & Solve-Aux$1:1/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & Solve-Aux$1:1/4 s.new1/5 e.new2/2 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new2 as range 2
  do {
    // </0 & Solve-Aux$1:1/4 # Success/5 e.PRTC/6 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_Success], context[5] ) )
      continue;
    // closed e.PRTC as range 6
    //DEBUG: e.PRTC: 6

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </4 HalfReuse: & Solve-Aux/5 AsIs: e.PRTC/6 AsIs: >/1 ]] }
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
  // </0 & Solve-Aux$2:1/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & Solve-Aux$2:1/4 s.new1/5 e.new2/2 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new2 as range 2
  do {
    // </0 & Solve-Aux$2:1/4 # Success/5 e.PRTC/6 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_Success], context[5] ) )
      continue;
    // closed e.PRTC as range 6
    //DEBUG: e.PRTC: 6

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </4 HalfReuse: & Solve-Aux/5 AsIs: e.PRTC/6 AsIs: >/1 ]] }
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
  // </0 & Solve-Aux$3=6/4 (/7 e.UsedVars$b/5 )/8 (/11 e.Branch1/9 )/12 e.Branch2/2 >/1
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
  // closed e.UsedVars$b as range 5
  // closed e.Branch1 as range 9
  // closed e.Branch2 as range 2
  //DEBUG: e.UsedVars$b: 5
  //DEBUG: e.Branch1: 9
  //DEBUG: e.Branch2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Solve-Aux/4 AsIs: (/7 AsIs: e.UsedVars$b/5 AsIs: )/8 } Tile{ AsIs: e.Branch1/9 } >/13 </14 & Solve-Aux/15 Tile{ AsIs: (/11 } e.UsedVars$b/5/16 Tile{ AsIs: )/12 AsIs: e.Branch2/2 AsIs: >/1 ]] }
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
  res = refalrts::splice_elem( res, context[11] );
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
  // issue here memory for vars with 79 elems
  refalrts::Iter context[79];
  refalrts::zeros( context, 79 );
  // </0 & Solve-Aux$3=5/4 (/7 e.UsedVars$b/5 )/8 t.Pt/9 (/13 e.tIdx/11 )/14 (/17 e.eIdx/15 )/18 (/21 e.Contrs/19 )/22 (/25 e.Pe/23 )/26 t.Ht/27 (/31 e.He/29 )/32 (/35 e.Equations/33 )/36 (/39 e.Assigns/37 )/40 e.Branch1/2 >/1
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
  // closed e.UsedVars$b as range 5
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
  // closed e.tIdx as range 11
  // closed e.eIdx as range 15
  // closed e.Contrs as range 19
  // closed e.Pe as range 23
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
  // closed e.He as range 29
  // closed e.Equations as range 33
  // closed e.Assigns as range 37
  // closed e.Branch1 as range 2
  //DEBUG: e.UsedVars$b: 5
  //DEBUG: t.Pt: 9
  //DEBUG: e.tIdx: 11
  //DEBUG: e.eIdx: 15
  //DEBUG: e.Contrs: 19
  //DEBUG: e.Pe: 23
  //DEBUG: t.Ht: 27
  //DEBUG: e.He: 29
  //DEBUG: e.Equations: 33
  //DEBUG: e.Assigns: 37
  //DEBUG: e.Branch1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Solve-Aux$3=6/4 AsIs: (/7 } Tile{ AsIs: e.UsedVars$b/5 } Tile{ AsIs: )/22 AsIs: (/25 } Tile{ AsIs: e.Branch1/2 } )/41 (/42 Tile{ AsIs: e.Contrs/19 } Tile{ AsIs: (/31 } t.Pt/9/43 ':'/45 (/46 # Var/47 't'/48 e.tIdx/11/49 Tile{ AsIs: )/40 } (/51 # Var/52 'e'/53 e.eIdx/15/54 )/56 )/57 )/58 </59 Tile{ HalfReuse: & Map@2/8 AsIs: t.Pt/9 AsIs: (/13 AsIs: e.tIdx/11 AsIs: )/14 AsIs: (/17 AsIs: e.eIdx/15 AsIs: )/18 AsIs: (/21 } (/60 t.Pt/9/61 Tile{ AsIs: e.Pe/23 } )/63 ':'/64 Tile{ HalfReuse: (/26 AsIs: t.Ht/27 } Tile{ AsIs: e.He/29 } Tile{ AsIs: )/32 HalfReuse: )/35 AsIs: e.Equations/33 HalfReuse: >/36 AsIs: (/39 } </65 & Map@3/66 t.Pt/9/67 (/69 e.tIdx/11/70 )/72 (/73 e.eIdx/15/74 )/76 Tile{ AsIs: e.Assigns/37 } >/77 )/78 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_close_bracket(vm, context[41]);
  refalrts::alloc_open_bracket(vm, context[42]);
  refalrts::copy_evar(vm, context[43], context[44], context[9], context[10]);
  refalrts::alloc_char(vm, context[45], ':');
  refalrts::alloc_open_bracket(vm, context[46]);
  refalrts::alloc_ident(vm, context[47], identifiers[ident_Var]);
  refalrts::alloc_char(vm, context[48], 't');
  refalrts::copy_evar(vm, context[49], context[50], context[11], context[12]);
  refalrts::alloc_open_bracket(vm, context[51]);
  refalrts::alloc_ident(vm, context[52], identifiers[ident_Var]);
  refalrts::alloc_char(vm, context[53], 'e');
  refalrts::copy_evar(vm, context[54], context[55], context[15], context[16]);
  refalrts::alloc_close_bracket(vm, context[56]);
  refalrts::alloc_close_bracket(vm, context[57]);
  refalrts::alloc_close_bracket(vm, context[58]);
  refalrts::alloc_open_call(vm, context[59]);
  refalrts::alloc_open_bracket(vm, context[60]);
  refalrts::copy_evar(vm, context[61], context[62], context[9], context[10]);
  refalrts::alloc_close_bracket(vm, context[63]);
  refalrts::alloc_char(vm, context[64], ':');
  refalrts::alloc_open_call(vm, context[65]);
  refalrts::alloc_name(vm, context[66], functions[efunc_gen_Map_Z3]);
  refalrts::copy_evar(vm, context[67], context[68], context[9], context[10]);
  refalrts::alloc_open_bracket(vm, context[69]);
  refalrts::copy_evar(vm, context[70], context[71], context[11], context[12]);
  refalrts::alloc_close_bracket(vm, context[72]);
  refalrts::alloc_open_bracket(vm, context[73]);
  refalrts::copy_evar(vm, context[74], context[75], context[15], context[16]);
  refalrts::alloc_close_bracket(vm, context[76]);
  refalrts::alloc_close_call(vm, context[77]);
  refalrts::alloc_close_bracket(vm, context[78]);
  refalrts::update_name(context[4], functions[efunc_gen_Solvem_Aux_S3A6]);
  refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z2]);
  refalrts::reinit_open_bracket(context[26]);
  refalrts::reinit_close_bracket(context[35]);
  refalrts::reinit_close_call(context[36]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[39], context[78] );
  refalrts::push_stack( vm, context[77] );
  refalrts::push_stack( vm, context[65] );
  refalrts::link_brackets( context[73], context[76] );
  refalrts::link_brackets( context[69], context[72] );
  refalrts::push_stack( vm, context[36] );
  refalrts::push_stack( vm, context[59] );
  refalrts::link_brackets( context[21], context[35] );
  refalrts::link_brackets( context[26], context[32] );
  refalrts::link_brackets( context[60], context[63] );
  refalrts::link_brackets( context[17], context[18] );
  refalrts::link_brackets( context[13], context[14] );
  refalrts::link_brackets( context[42], context[58] );
  refalrts::link_brackets( context[31], context[57] );
  refalrts::link_brackets( context[51], context[56] );
  refalrts::link_brackets( context[46], context[40] );
  refalrts::link_brackets( context[25], context[41] );
  refalrts::link_brackets( context[7], context[22] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[77], context[78] );
  res = refalrts::splice_evar( res, context[37], context[38] );
  res = refalrts::splice_evar( res, context[65], context[76] );
  res = refalrts::splice_evar( res, context[32], context[39] );
  res = refalrts::splice_evar( res, context[29], context[30] );
  res = refalrts::splice_evar( res, context[26], context[28] );
  res = refalrts::splice_evar( res, context[63], context[64] );
  res = refalrts::splice_evar( res, context[23], context[24] );
  res = refalrts::splice_evar( res, context[60], context[62] );
  res = refalrts::splice_evar( res, context[8], context[21] );
  res = refalrts::splice_evar( res, context[51], context[59] );
  res = refalrts::splice_elem( res, context[40] );
  res = refalrts::splice_evar( res, context[49], context[50] );
  res = refalrts::splice_evar( res, context[43], context[48] );
  res = refalrts::splice_elem( res, context[31] );
  res = refalrts::splice_evar( res, context[19], context[20] );
  res = refalrts::splice_evar( res, context[41], context[42] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[22], context[25] );
  res = refalrts::splice_evar( res, context[5], context[6] );
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
  // issue here memory for vars with 77 elems
  refalrts::Iter context[77];
  refalrts::zeros( context, 77 );
  // </0 & Solve-Aux$3=4/4 t.Pt/5 (/9 e.tIdx/7 )/10 (/13 e.Contrs/11 )/14 (/17 e.Pe/15 )/18 t.Ht/19 (/23 e.He/21 )/24 (/27 e.Equations/25 )/28 (/31 e.Assigns/29 )/32 (/35 e.UsedVars$b/33 )/36 'e'/37 e.eIdx/2 >/1
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
  // closed e.tIdx as range 7
  // closed e.Contrs as range 11
  // closed e.Pe as range 15
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
  // closed e.He as range 21
  // closed e.Equations as range 25
  // closed e.Assigns as range 29
  // closed e.UsedVars$b as range 33
  // closed e.eIdx as range 2
  //DEBUG: t.Pt: 5
  //DEBUG: e.tIdx: 7
  //DEBUG: e.Contrs: 11
  //DEBUG: e.Pe: 15
  //DEBUG: t.Ht: 19
  //DEBUG: e.He: 21
  //DEBUG: e.Equations: 25
  //DEBUG: e.Assigns: 29
  //DEBUG: e.UsedVars$b: 33
  //DEBUG: e.eIdx: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </38 & Solve-Aux$3=5/39 (/40 Tile{ AsIs: e.UsedVars$b/33 } )/41 t.Pt/5/42 (/44 Tile{ AsIs: e.tIdx/7 } )/45 (/46 Tile{ AsIs: e.eIdx/2 } Tile{ AsIs: )/10 AsIs: (/13 AsIs: e.Contrs/11 AsIs: )/14 AsIs: (/17 AsIs: e.Pe/15 AsIs: )/18 AsIs: t.Ht/19 AsIs: (/23 AsIs: e.He/21 AsIs: )/24 AsIs: (/27 AsIs: e.Equations/25 AsIs: )/28 AsIs: (/31 AsIs: e.Assigns/29 AsIs: )/32 AsIs: (/35 } e.Contrs/11/47 (/49 t.Pt/5/50 ':'/52 )/53 )/54 Tile{ AsIs: </0 Reuse: & Map@4/4 AsIs: t.Pt/5 AsIs: (/9 } (/55 e.Pe/15/56 Tile{ AsIs: )/36 Reuse: ':'/37 } (/58 t.Ht/19/59 e.He/21/61 )/63 )/64 e.Equations/25/65 >/67 (/68 </69 & Map@5/70 t.Pt/5/71 e.Assigns/29/73 >/75 )/76 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[38]);
  refalrts::alloc_name(vm, context[39], functions[efunc_gen_Solvem_Aux_S3A5]);
  refalrts::alloc_open_bracket(vm, context[40]);
  refalrts::alloc_close_bracket(vm, context[41]);
  refalrts::copy_evar(vm, context[42], context[43], context[5], context[6]);
  refalrts::alloc_open_bracket(vm, context[44]);
  refalrts::alloc_close_bracket(vm, context[45]);
  refalrts::alloc_open_bracket(vm, context[46]);
  refalrts::copy_evar(vm, context[47], context[48], context[11], context[12]);
  refalrts::alloc_open_bracket(vm, context[49]);
  refalrts::copy_evar(vm, context[50], context[51], context[5], context[6]);
  refalrts::alloc_char(vm, context[52], ':');
  refalrts::alloc_close_bracket(vm, context[53]);
  refalrts::alloc_close_bracket(vm, context[54]);
  refalrts::alloc_open_bracket(vm, context[55]);
  refalrts::copy_evar(vm, context[56], context[57], context[15], context[16]);
  refalrts::alloc_open_bracket(vm, context[58]);
  refalrts::copy_evar(vm, context[59], context[60], context[19], context[20]);
  refalrts::copy_evar(vm, context[61], context[62], context[21], context[22]);
  refalrts::alloc_close_bracket(vm, context[63]);
  refalrts::alloc_close_bracket(vm, context[64]);
  refalrts::copy_evar(vm, context[65], context[66], context[25], context[26]);
  refalrts::alloc_close_call(vm, context[67]);
  refalrts::alloc_open_bracket(vm, context[68]);
  refalrts::alloc_open_call(vm, context[69]);
  refalrts::alloc_name(vm, context[70], functions[efunc_gen_Map_Z5]);
  refalrts::copy_evar(vm, context[71], context[72], context[5], context[6]);
  refalrts::copy_evar(vm, context[73], context[74], context[29], context[30]);
  refalrts::alloc_close_call(vm, context[75]);
  refalrts::alloc_close_bracket(vm, context[76]);
  refalrts::update_name(context[4], functions[efunc_gen_Map_Z4]);
  refalrts::update_char(context[37], ':');
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[38] );
  refalrts::link_brackets( context[68], context[76] );
  refalrts::push_stack( vm, context[75] );
  refalrts::push_stack( vm, context[69] );
  refalrts::push_stack( vm, context[67] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[9], context[64] );
  refalrts::link_brackets( context[58], context[63] );
  refalrts::link_brackets( context[55], context[36] );
  refalrts::link_brackets( context[35], context[54] );
  refalrts::link_brackets( context[49], context[53] );
  refalrts::link_brackets( context[31], context[32] );
  refalrts::link_brackets( context[27], context[28] );
  refalrts::link_brackets( context[23], context[24] );
  refalrts::link_brackets( context[17], context[18] );
  refalrts::link_brackets( context[13], context[14] );
  refalrts::link_brackets( context[46], context[10] );
  refalrts::link_brackets( context[44], context[45] );
  refalrts::link_brackets( context[40], context[41] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[58], context[76] );
  res = refalrts::splice_evar( res, context[36], context[37] );
  res = refalrts::splice_evar( res, context[56], context[57] );
  res = refalrts::splice_elem( res, context[55] );
  res = refalrts::splice_evar( res, context[0], context[9] );
  res = refalrts::splice_evar( res, context[49], context[54] );
  res = refalrts::splice_evar( res, context[47], context[48] );
  res = refalrts::splice_evar( res, context[10], context[35] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[45], context[46] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_evar( res, context[41], context[44] );
  res = refalrts::splice_evar( res, context[33], context[34] );
  res = refalrts::splice_evar( res, context[38], context[40] );
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
  // issue here memory for vars with 39 elems
  refalrts::Iter context[39];
  refalrts::zeros( context, 39 );
  // </0 & Solve-Aux$3=3/4 t.Pt/5 (/9 e.Contrs/7 )/10 (/13 e.Pe/11 )/14 t.Ht/15 (/19 e.He/17 )/20 (/23 e.Equations/21 )/24 (/27 e.Assigns/25 )/28 (/31 e.UsedVars$a/29 )/32 't'/33 e.tIdx/2 >/1
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
  // closed e.Contrs as range 7
  // closed e.Pe as range 11
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
  // closed e.He as range 17
  // closed e.Equations as range 21
  // closed e.Assigns as range 25
  // closed e.UsedVars$a as range 29
  // closed e.tIdx as range 2
  //DEBUG: t.Pt: 5
  //DEBUG: e.Contrs: 7
  //DEBUG: e.Pe: 11
  //DEBUG: t.Ht: 15
  //DEBUG: e.He: 17
  //DEBUG: e.Equations: 21
  //DEBUG: e.Assigns: 25
  //DEBUG: e.UsedVars$a: 29
  //DEBUG: e.tIdx: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Solve-Aux$3=4/4 AsIs: t.Pt/5 } (/34 Tile{ AsIs: e.tIdx/2 } )/35 Tile{ AsIs: (/9 AsIs: e.Contrs/7 AsIs: )/10 AsIs: (/13 AsIs: e.Pe/11 AsIs: )/14 AsIs: t.Ht/15 AsIs: (/19 AsIs: e.He/17 AsIs: )/20 AsIs: (/23 AsIs: e.Equations/21 AsIs: )/24 AsIs: (/27 AsIs: e.Assigns/25 AsIs: )/28 HalfReuse: </31 } & NewVarName/36 (/37 Tile{ AsIs: e.UsedVars$a/29 } Tile{ AsIs: )/32 Reuse: 'e'/33 } >/38 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[34]);
  refalrts::alloc_close_bracket(vm, context[35]);
  refalrts::alloc_name(vm, context[36], functions[efunc_NewVarName]);
  refalrts::alloc_open_bracket(vm, context[37]);
  refalrts::alloc_close_call(vm, context[38]);
  refalrts::update_name(context[4], functions[efunc_gen_Solvem_Aux_S3A4]);
  refalrts::reinit_open_call(context[31]);
  refalrts::update_char(context[33], 'e');
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[38] );
  refalrts::push_stack( vm, context[31] );
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
  res = refalrts::splice_elem( res, context[38] );
  res = refalrts::splice_evar( res, context[32], context[33] );
  res = refalrts::splice_evar( res, context[29], context[30] );
  res = refalrts::splice_evar( res, context[36], context[37] );
  res = refalrts::splice_evar( res, context[9], context[31] );
  res = refalrts::splice_elem( res, context[35] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_elem( res, context[34] );
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
  // </0 & Solve-Aux$4=6/4 (/7 e.UsedVars$b/5 )/8 (/11 e.Branch1/9 )/12 e.Branch2/2 >/1
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
  // closed e.UsedVars$b as range 5
  // closed e.Branch1 as range 9
  // closed e.Branch2 as range 2
  //DEBUG: e.UsedVars$b: 5
  //DEBUG: e.Branch1: 9
  //DEBUG: e.Branch2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Solve-Aux/4 AsIs: (/7 AsIs: e.UsedVars$b/5 AsIs: )/8 } Tile{ AsIs: e.Branch1/9 } >/13 </14 & Solve-Aux/15 Tile{ AsIs: (/11 } e.UsedVars$b/5/16 Tile{ AsIs: )/12 AsIs: e.Branch2/2 AsIs: >/1 ]] }
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
  res = refalrts::splice_elem( res, context[11] );
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
  // issue here memory for vars with 79 elems
  refalrts::Iter context[79];
  refalrts::zeros( context, 79 );
  // </0 & Solve-Aux$4=5/4 (/7 e.UsedVars$b/5 )/8 t.Pt/9 (/13 e.eIdx/11 )/14 (/17 e.tIdx/15 )/18 (/21 e.Contrs/19 )/22 (/25 e.Pe/23 )/26 (/29 e.He/27 )/30 t.Ht/31 (/35 e.Equations/33 )/36 (/39 e.Assigns/37 )/40 e.Branch1/2 >/1
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
  // closed e.UsedVars$b as range 5
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
  // closed e.eIdx as range 11
  // closed e.tIdx as range 15
  // closed e.Contrs as range 19
  // closed e.Pe as range 23
  // closed e.He as range 27
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
  // closed e.Equations as range 33
  // closed e.Assigns as range 37
  // closed e.Branch1 as range 2
  //DEBUG: e.UsedVars$b: 5
  //DEBUG: t.Pt: 9
  //DEBUG: e.eIdx: 11
  //DEBUG: e.tIdx: 15
  //DEBUG: e.Contrs: 19
  //DEBUG: e.Pe: 23
  //DEBUG: e.He: 27
  //DEBUG: t.Ht: 31
  //DEBUG: e.Equations: 33
  //DEBUG: e.Assigns: 37
  //DEBUG: e.Branch1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Solve-Aux$4=6/4 AsIs: (/7 } Tile{ AsIs: e.UsedVars$b/5 } Tile{ AsIs: )/22 AsIs: (/25 } Tile{ AsIs: e.Branch1/2 } Tile{ AsIs: )/26 AsIs: (/29 } Tile{ AsIs: e.Contrs/19 } (/41 t.Pt/9/42 ':'/44 (/45 # Var/46 'e'/47 e.eIdx/11/48 Tile{ AsIs: )/40 } (/50 # Var/51 't'/52 e.tIdx/15/53 Tile{ AsIs: )/30 } )/55 )/56 </57 Tile{ HalfReuse: & Map@6/8 AsIs: t.Pt/9 AsIs: (/13 AsIs: e.eIdx/11 AsIs: )/14 AsIs: (/17 AsIs: e.tIdx/15 AsIs: )/18 AsIs: (/21 } (/58 Tile{ AsIs: e.Pe/23 } t.Pt/9/59 )/61 ':'/62 (/63 Tile{ AsIs: e.He/27 } Tile{ AsIs: t.Ht/31 } )/64 Tile{ HalfReuse: )/35 AsIs: e.Equations/33 HalfReuse: >/36 AsIs: (/39 } </65 & Map@7/66 t.Pt/9/67 (/69 e.eIdx/11/70 )/72 (/73 e.tIdx/15/74 )/76 Tile{ AsIs: e.Assigns/37 } >/77 )/78 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[41]);
  refalrts::copy_evar(vm, context[42], context[43], context[9], context[10]);
  refalrts::alloc_char(vm, context[44], ':');
  refalrts::alloc_open_bracket(vm, context[45]);
  refalrts::alloc_ident(vm, context[46], identifiers[ident_Var]);
  refalrts::alloc_char(vm, context[47], 'e');
  refalrts::copy_evar(vm, context[48], context[49], context[11], context[12]);
  refalrts::alloc_open_bracket(vm, context[50]);
  refalrts::alloc_ident(vm, context[51], identifiers[ident_Var]);
  refalrts::alloc_char(vm, context[52], 't');
  refalrts::copy_evar(vm, context[53], context[54], context[15], context[16]);
  refalrts::alloc_close_bracket(vm, context[55]);
  refalrts::alloc_close_bracket(vm, context[56]);
  refalrts::alloc_open_call(vm, context[57]);
  refalrts::alloc_open_bracket(vm, context[58]);
  refalrts::copy_evar(vm, context[59], context[60], context[9], context[10]);
  refalrts::alloc_close_bracket(vm, context[61]);
  refalrts::alloc_char(vm, context[62], ':');
  refalrts::alloc_open_bracket(vm, context[63]);
  refalrts::alloc_close_bracket(vm, context[64]);
  refalrts::alloc_open_call(vm, context[65]);
  refalrts::alloc_name(vm, context[66], functions[efunc_gen_Map_Z7]);
  refalrts::copy_evar(vm, context[67], context[68], context[9], context[10]);
  refalrts::alloc_open_bracket(vm, context[69]);
  refalrts::copy_evar(vm, context[70], context[71], context[11], context[12]);
  refalrts::alloc_close_bracket(vm, context[72]);
  refalrts::alloc_open_bracket(vm, context[73]);
  refalrts::copy_evar(vm, context[74], context[75], context[15], context[16]);
  refalrts::alloc_close_bracket(vm, context[76]);
  refalrts::alloc_close_call(vm, context[77]);
  refalrts::alloc_close_bracket(vm, context[78]);
  refalrts::update_name(context[4], functions[efunc_gen_Solvem_Aux_S4A6]);
  refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z6]);
  refalrts::reinit_close_bracket(context[35]);
  refalrts::reinit_close_call(context[36]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[39], context[78] );
  refalrts::push_stack( vm, context[77] );
  refalrts::push_stack( vm, context[65] );
  refalrts::link_brackets( context[73], context[76] );
  refalrts::link_brackets( context[69], context[72] );
  refalrts::push_stack( vm, context[36] );
  refalrts::push_stack( vm, context[57] );
  refalrts::link_brackets( context[21], context[35] );
  refalrts::link_brackets( context[63], context[64] );
  refalrts::link_brackets( context[58], context[61] );
  refalrts::link_brackets( context[17], context[18] );
  refalrts::link_brackets( context[13], context[14] );
  refalrts::link_brackets( context[29], context[56] );
  refalrts::link_brackets( context[41], context[55] );
  refalrts::link_brackets( context[50], context[30] );
  refalrts::link_brackets( context[45], context[40] );
  refalrts::link_brackets( context[25], context[26] );
  refalrts::link_brackets( context[7], context[22] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[77], context[78] );
  res = refalrts::splice_evar( res, context[37], context[38] );
  res = refalrts::splice_evar( res, context[65], context[76] );
  res = refalrts::splice_evar( res, context[35], context[39] );
  res = refalrts::splice_elem( res, context[64] );
  res = refalrts::splice_evar( res, context[31], context[32] );
  res = refalrts::splice_evar( res, context[27], context[28] );
  res = refalrts::splice_evar( res, context[59], context[63] );
  res = refalrts::splice_evar( res, context[23], context[24] );
  res = refalrts::splice_elem( res, context[58] );
  res = refalrts::splice_evar( res, context[8], context[21] );
  res = refalrts::splice_evar( res, context[55], context[57] );
  res = refalrts::splice_elem( res, context[30] );
  res = refalrts::splice_evar( res, context[53], context[54] );
  res = refalrts::splice_evar( res, context[50], context[52] );
  res = refalrts::splice_elem( res, context[40] );
  res = refalrts::splice_evar( res, context[48], context[49] );
  res = refalrts::splice_evar( res, context[41], context[47] );
  res = refalrts::splice_evar( res, context[19], context[20] );
  res = refalrts::splice_evar( res, context[26], context[29] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[22], context[25] );
  res = refalrts::splice_evar( res, context[5], context[6] );
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
  // issue here memory for vars with 77 elems
  refalrts::Iter context[77];
  refalrts::zeros( context, 77 );
  // </0 & Solve-Aux$4=4/4 t.Pt/5 (/9 e.tIdx/7 )/10 (/13 e.Contrs/11 )/14 (/17 e.Pe/15 )/18 (/21 e.He/19 )/22 t.Ht/23 (/27 e.Equations/25 )/28 (/31 e.Assigns/29 )/32 (/35 e.UsedVars$b/33 )/36 'e'/37 e.eIdx/2 >/1
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
  // closed e.tIdx as range 7
  // closed e.Contrs as range 11
  // closed e.Pe as range 15
  // closed e.He as range 19
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
  // closed e.Equations as range 25
  // closed e.Assigns as range 29
  // closed e.UsedVars$b as range 33
  // closed e.eIdx as range 2
  //DEBUG: t.Pt: 5
  //DEBUG: e.tIdx: 7
  //DEBUG: e.Contrs: 11
  //DEBUG: e.Pe: 15
  //DEBUG: e.He: 19
  //DEBUG: t.Ht: 23
  //DEBUG: e.Equations: 25
  //DEBUG: e.Assigns: 29
  //DEBUG: e.UsedVars$b: 33
  //DEBUG: e.eIdx: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Solve-Aux$4=5/4 } (/38 Tile{ AsIs: e.UsedVars$b/33 } )/39 Tile{ AsIs: t.Pt/5 } (/40 Tile{ AsIs: e.eIdx/2 } )/41 Tile{ AsIs: (/9 AsIs: e.tIdx/7 AsIs: )/10 AsIs: (/13 AsIs: e.Contrs/11 AsIs: )/14 AsIs: (/17 AsIs: e.Pe/15 AsIs: )/18 AsIs: (/21 AsIs: e.He/19 AsIs: )/22 AsIs: t.Ht/23 AsIs: (/27 AsIs: e.Equations/25 AsIs: )/28 AsIs: (/31 AsIs: e.Assigns/29 AsIs: )/32 AsIs: (/35 } e.Contrs/11/42 (/44 t.Pt/5/45 ':'/47 )/48 )/49 </50 & Map@4/51 t.Pt/5/52 (/54 (/55 e.Pe/15/56 Tile{ AsIs: )/36 Reuse: ':'/37 } (/58 e.He/19/59 t.Ht/23/61 )/63 )/64 e.Equations/25/65 >/67 (/68 </69 & Map@5/70 t.Pt/5/71 e.Assigns/29/73 >/75 )/76 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[38]);
  refalrts::alloc_close_bracket(vm, context[39]);
  refalrts::alloc_open_bracket(vm, context[40]);
  refalrts::alloc_close_bracket(vm, context[41]);
  refalrts::copy_evar(vm, context[42], context[43], context[11], context[12]);
  refalrts::alloc_open_bracket(vm, context[44]);
  refalrts::copy_evar(vm, context[45], context[46], context[5], context[6]);
  refalrts::alloc_char(vm, context[47], ':');
  refalrts::alloc_close_bracket(vm, context[48]);
  refalrts::alloc_close_bracket(vm, context[49]);
  refalrts::alloc_open_call(vm, context[50]);
  refalrts::alloc_name(vm, context[51], functions[efunc_gen_Map_Z4]);
  refalrts::copy_evar(vm, context[52], context[53], context[5], context[6]);
  refalrts::alloc_open_bracket(vm, context[54]);
  refalrts::alloc_open_bracket(vm, context[55]);
  refalrts::copy_evar(vm, context[56], context[57], context[15], context[16]);
  refalrts::alloc_open_bracket(vm, context[58]);
  refalrts::copy_evar(vm, context[59], context[60], context[19], context[20]);
  refalrts::copy_evar(vm, context[61], context[62], context[23], context[24]);
  refalrts::alloc_close_bracket(vm, context[63]);
  refalrts::alloc_close_bracket(vm, context[64]);
  refalrts::copy_evar(vm, context[65], context[66], context[25], context[26]);
  refalrts::alloc_close_call(vm, context[67]);
  refalrts::alloc_open_bracket(vm, context[68]);
  refalrts::alloc_open_call(vm, context[69]);
  refalrts::alloc_name(vm, context[70], functions[efunc_gen_Map_Z5]);
  refalrts::copy_evar(vm, context[71], context[72], context[5], context[6]);
  refalrts::copy_evar(vm, context[73], context[74], context[29], context[30]);
  refalrts::alloc_close_call(vm, context[75]);
  refalrts::alloc_close_bracket(vm, context[76]);
  refalrts::update_name(context[4], functions[efunc_gen_Solvem_Aux_S4A5]);
  refalrts::update_char(context[37], ':');
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[68], context[76] );
  refalrts::push_stack( vm, context[75] );
  refalrts::push_stack( vm, context[69] );
  refalrts::push_stack( vm, context[67] );
  refalrts::push_stack( vm, context[50] );
  refalrts::link_brackets( context[54], context[64] );
  refalrts::link_brackets( context[58], context[63] );
  refalrts::link_brackets( context[55], context[36] );
  refalrts::link_brackets( context[35], context[49] );
  refalrts::link_brackets( context[44], context[48] );
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
  res = refalrts::splice_evar( res, context[58], context[76] );
  res = refalrts::splice_evar( res, context[36], context[37] );
  res = refalrts::splice_evar( res, context[56], context[57] );
  res = refalrts::splice_evar( res, context[44], context[55] );
  res = refalrts::splice_evar( res, context[42], context[43] );
  res = refalrts::splice_evar( res, context[9], context[35] );
  res = refalrts::splice_elem( res, context[41] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_elem( res, context[40] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_elem( res, context[39] );
  res = refalrts::splice_evar( res, context[33], context[34] );
  res = refalrts::splice_elem( res, context[38] );
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
  // issue here memory for vars with 39 elems
  refalrts::Iter context[39];
  refalrts::zeros( context, 39 );
  // </0 & Solve-Aux$4=3/4 t.Pt/5 (/9 e.Contrs/7 )/10 (/13 e.Pe/11 )/14 (/17 e.He/15 )/18 t.Ht/19 (/23 e.Equations/21 )/24 (/27 e.Assigns/25 )/28 (/31 e.UsedVars$a/29 )/32 't'/33 e.tIdx/2 >/1
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
  // closed e.Contrs as range 7
  // closed e.Pe as range 11
  // closed e.He as range 15
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
  // closed e.Equations as range 21
  // closed e.Assigns as range 25
  // closed e.UsedVars$a as range 29
  // closed e.tIdx as range 2
  //DEBUG: t.Pt: 5
  //DEBUG: e.Contrs: 7
  //DEBUG: e.Pe: 11
  //DEBUG: e.He: 15
  //DEBUG: t.Ht: 19
  //DEBUG: e.Equations: 21
  //DEBUG: e.Assigns: 25
  //DEBUG: e.UsedVars$a: 29
  //DEBUG: e.tIdx: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Solve-Aux$4=4/4 AsIs: t.Pt/5 } (/34 Tile{ AsIs: e.tIdx/2 } )/35 Tile{ AsIs: (/9 AsIs: e.Contrs/7 AsIs: )/10 AsIs: (/13 AsIs: e.Pe/11 AsIs: )/14 AsIs: (/17 AsIs: e.He/15 AsIs: )/18 AsIs: t.Ht/19 AsIs: (/23 AsIs: e.Equations/21 AsIs: )/24 AsIs: (/27 AsIs: e.Assigns/25 AsIs: )/28 HalfReuse: </31 } & NewVarName/36 (/37 Tile{ AsIs: e.UsedVars$a/29 } Tile{ AsIs: )/32 Reuse: 'e'/33 } >/38 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[34]);
  refalrts::alloc_close_bracket(vm, context[35]);
  refalrts::alloc_name(vm, context[36], functions[efunc_NewVarName]);
  refalrts::alloc_open_bracket(vm, context[37]);
  refalrts::alloc_close_call(vm, context[38]);
  refalrts::update_name(context[4], functions[efunc_gen_Solvem_Aux_S4A4]);
  refalrts::reinit_open_call(context[31]);
  refalrts::update_char(context[33], 'e');
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[38] );
  refalrts::push_stack( vm, context[31] );
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
  res = refalrts::splice_elem( res, context[38] );
  res = refalrts::splice_evar( res, context[32], context[33] );
  res = refalrts::splice_evar( res, context[29], context[30] );
  res = refalrts::splice_evar( res, context[36], context[37] );
  res = refalrts::splice_evar( res, context[9], context[31] );
  res = refalrts::splice_elem( res, context[35] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_elem( res, context[34] );
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
  // </0 & Solve-Aux$8:1$1=1/4 (/7 e.UsedVars/5 )/8 (/11 e.Contrs/9 )/12 (/15 e.Equations/13 )/16 (/19 e.Assigns/17 )/20 e.NewContrs/2 >/1
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
  // closed e.UsedVars as range 5
  // closed e.Contrs as range 9
  // closed e.Equations as range 13
  // closed e.Assigns as range 17
  // closed e.NewContrs as range 2
  //DEBUG: e.UsedVars: 5
  //DEBUG: e.Contrs: 9
  //DEBUG: e.Equations: 13
  //DEBUG: e.Assigns: 17
  //DEBUG: e.NewContrs: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Solve-Aux/4 AsIs: (/7 AsIs: e.UsedVars/5 AsIs: )/8 HalfReuse: </11 } & AddContractions/21 (/22 Tile{ AsIs: e.NewContrs/2 } Tile{ AsIs: )/12 AsIs: (/15 } Tile{ AsIs: e.Contrs/9 } Tile{ AsIs: )/16 } Tile{ AsIs: e.Equations/13 } Tile{ AsIs: (/19 AsIs: e.Assigns/17 AsIs: )/20 } >/23 Tile{ AsIs: >/1 ]] }
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
  res = refalrts::splice_elem( res, context[23] );
  res = refalrts::splice_evar( res, context[19], context[20] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_elem( res, context[16] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[12], context[15] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[21], context[22] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Solvem_Aux_S8B1S1A1("Solve-Aux$8:1$1=1", COOKIE1_, COOKIE2_, func_gen_Solvem_Aux_S8B1S1A1);


static refalrts::FnResult func_gen_Solvem_Aux_S8B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 36 elems
  refalrts::Iter context[36];
  refalrts::zeros( context, 36 );
  // </0 & Solve-Aux$8:1/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & Solve-Aux$8:1/4 (/7 e.new1/5 )/8 (/11 e.new2/9 )/12 (/15 e.new3/13 )/16 (/19 e.new4/17 )/20 (/23 e.new5/21 )/24 s.new6/25 >/1
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
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & Solve-Aux$8:1/4 (/7 e.UsedVars/26 )/8 (/11 e.Contrs/28 )/12 (/15 e.Equations/30 )/16 (/19 e.Assigns/32 )/20 (/23 e.Pt/34 )/24 # True/25 >/1
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
    // closed e.UsedVars as range 26
    // closed e.Contrs as range 28
    // closed e.Equations as range 30
    // closed e.Assigns as range 32
    // closed e.Pt as range 34
    //DEBUG: e.UsedVars: 26
    //DEBUG: e.Contrs: 28
    //DEBUG: e.Equations: 30
    //DEBUG: e.Assigns: 32
    //DEBUG: e.Pt: 34

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Solve-Aux$8:1$1=1/4 AsIs: (/7 AsIs: e.UsedVars/26 AsIs: )/8 AsIs: (/11 AsIs: e.Contrs/28 AsIs: )/12 AsIs: (/15 AsIs: e.Equations/30 AsIs: )/16 AsIs: (/19 AsIs: e.Assigns/32 AsIs: )/20 HalfReuse: </23 } Tile{ HalfReuse: & Map@8/24 } Tile{ AsIs: e.Pt/34 } Tile{ HalfReuse: >/25 AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_gen_Solvem_Aux_S8B1S1A1]);
    refalrts::reinit_open_call(context[23]);
    refalrts::reinit_name(context[24], functions[efunc_gen_Map_Z8]);
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
    res = refalrts::splice_elem( res, context[24] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Solve-Aux$8:1/4 (/7 e.UsedVars/5 )/8 (/11 e.Contrs/9 )/12 (/15 e.Equations/13 )/16 (/19 e.Assigns/17 )/20 (/23 e.Pt/21 )/24 # False/25 >/1
  if( ! refalrts::ident_term( identifiers[ident_False], context[25] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.UsedVars as range 5
  // closed e.Contrs as range 9
  // closed e.Equations as range 13
  // closed e.Assigns as range 17
  // closed e.Pt as range 21
  //DEBUG: e.UsedVars: 5
  //DEBUG: e.Contrs: 9
  //DEBUG: e.Equations: 13
  //DEBUG: e.Assigns: 17
  //DEBUG: e.Pt: 21

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Solve-Aux$8:1/4 (/7 e.UsedVars/5 )/8 (/11 e.Contrs/9 )/12 (/15 e.Equations/13 )/16 (/19 e.Assigns/17 )/20 (/23 e.Pt/21 )/24 # False/25 >/1 {REMOVED TILE}
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
  // </0 & Solve-Aux/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  do {
    // </0 & Solve-Aux/4 (/9 e.new1/7 )/10 (/13 e.new2/11 )/14 e.new3/5 (/17 e.new4/15 )/18 >/1
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
    // closed e.new1 as range 7
    // closed e.new2 as range 11
    // closed e.new3 as range 5
    // closed e.new4 as range 15
    do {
      // </0 & Solve-Aux/4 (/9 e.new8/19 )/10 (/13 e.new9/21 )/14 (/29 (/33 e.new5/31 )/34 ':'/35 (/38 e.new6/36 )/39 )/30 e.new7/23 (/17 e.new10/25 )/18 >/1
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
      // closed e.new8 as range 19
      // closed e.new9 as range 21
      // closed e.new5 as range 31
      // closed e.new6 as range 36
      // closed e.new7 as range 23
      // closed e.new10 as range 25
      do {
        // </0 & Solve-Aux/4 (/9 e.UsedVars/40 )/10 (/13 e.Contrs/42 )/14 (/29 (/33 t.Pt/52 e.Pe/44 )/34 ':'/35 (/38 t.Ht/54 e.He/46 )/39 )/30 e.Equations/48 (/17 e.Assigns/50 )/18 >/1
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
        // closed e.UsedVars as range 40
        // closed e.Contrs as range 42
        // closed e.Equations as range 48
        // closed e.Assigns as range 50
        context[53] = refalrts::tvar_left( context[52], context[44], context[45] );
        if( ! context[53] )
          continue;
        // closed e.Pe as range 44
        context[55] = refalrts::tvar_left( context[54], context[46], context[47] );
        if( ! context[55] )
          continue;
        // closed e.He as range 46
        //DEBUG: e.UsedVars: 40
        //DEBUG: e.Contrs: 42
        //DEBUG: e.Equations: 48
        //DEBUG: e.Assigns: 50
        //DEBUG: t.Pt: 52
        //DEBUG: e.Pe: 44
        //DEBUG: t.Ht: 54
        //DEBUG: e.He: 46
        //40: e.UsedVars
        //42: e.Contrs
        //44: e.Pe
        //46: e.He
        //48: e.Equations
        //50: e.Assigns
        //52: t.Pt
        //54: t.Ht
        //61: t.Ht

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
          //DEBUG: e.UsedVars: 40
          //DEBUG: e.Contrs: 42
          //DEBUG: e.Equations: 48
          //DEBUG: e.Assigns: 50
          //DEBUG: t.Pt: 52
          //DEBUG: e.Pe: 44
          //DEBUG: t.Ht: 54
          //DEBUG: e.He: 46
          //40: e.UsedVars
          //42: e.Contrs
          //44: e.Pe
          //46: e.He
          //48: e.Equations
          //50: e.Assigns
          //52: t.Pt
          //54: t.Ht
          //67: t.Pt

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
            //DEBUG: e.UsedVars: 40
            //DEBUG: e.Contrs: 42
            //DEBUG: e.Equations: 48
            //DEBUG: e.Assigns: 50
            //DEBUG: t.Pt: 52
            //DEBUG: e.Pe: 44
            //DEBUG: t.Ht: 54
            //DEBUG: e.He: 46

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} # True/61 >/57 {REMOVED TILE} # True/67 >/63 >/1 {REMOVED TILE}
            //RESULT: Tile{ [[ } Tile{ AsIs: </62 Reuse: & Solve-Aux$1:1/66 } Tile{ AsIs: </0 Reuse: & Solve-TermEquation/4 AsIs: (/9 AsIs: e.UsedVars/40 AsIs: )/10 } Tile{ AsIs: t.Pt/52 } Tile{ AsIs: t.Ht/54 } Tile{ AsIs: (/13 AsIs: e.Contrs/42 AsIs: )/14 AsIs: (/29 AsIs: (/33 } Tile{ AsIs: e.Pe/44 } Tile{ AsIs: )/34 AsIs: ':'/35 AsIs: (/38 } Tile{ AsIs: e.He/46 } Tile{ AsIs: )/39 AsIs: )/30 AsIs: e.Equations/48 AsIs: (/17 AsIs: e.Assigns/50 AsIs: )/18 HalfReuse: >/56 HalfReuse: >/60 } Tile{ ]] }
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
        // </0 & Solve-Aux/4 (/9 e.UsedVars/40 )/10 (/13 e.Contrs/42 )/14 (/29 (/33 e.Pe/44 t.Pt/52 )/34 ':'/35 (/38 e.He/46 t.Ht/54 )/39 )/30 e.Equations/48 (/17 e.Assigns/50 )/18 >/1
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
        // closed e.UsedVars as range 40
        // closed e.Contrs as range 42
        // closed e.Equations as range 48
        // closed e.Assigns as range 50
        context[53] = refalrts::tvar_right( context[52], context[44], context[45] );
        if( ! context[53] )
          continue;
        // closed e.Pe as range 44
        context[55] = refalrts::tvar_right( context[54], context[46], context[47] );
        if( ! context[55] )
          continue;
        // closed e.He as range 46
        //DEBUG: e.UsedVars: 40
        //DEBUG: e.Contrs: 42
        //DEBUG: e.Equations: 48
        //DEBUG: e.Assigns: 50
        //DEBUG: t.Pt: 52
        //DEBUG: e.Pe: 44
        //DEBUG: t.Ht: 54
        //DEBUG: e.He: 46
        //40: e.UsedVars
        //42: e.Contrs
        //44: e.Pe
        //46: e.He
        //48: e.Equations
        //50: e.Assigns
        //52: t.Pt
        //54: t.Ht
        //61: t.Ht

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
          //DEBUG: e.UsedVars: 40
          //DEBUG: e.Contrs: 42
          //DEBUG: e.Equations: 48
          //DEBUG: e.Assigns: 50
          //DEBUG: t.Pt: 52
          //DEBUG: e.Pe: 44
          //DEBUG: t.Ht: 54
          //DEBUG: e.He: 46
          //40: e.UsedVars
          //42: e.Contrs
          //44: e.Pe
          //46: e.He
          //48: e.Equations
          //50: e.Assigns
          //52: t.Pt
          //54: t.Ht
          //67: t.Pt

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
            //DEBUG: e.UsedVars: 40
            //DEBUG: e.Contrs: 42
            //DEBUG: e.Equations: 48
            //DEBUG: e.Assigns: 50
            //DEBUG: t.Pt: 52
            //DEBUG: e.Pe: 44
            //DEBUG: t.Ht: 54
            //DEBUG: e.He: 46

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} # True/61 >/57 {REMOVED TILE} # True/67 >/63 >/1 {REMOVED TILE}
            //RESULT: Tile{ [[ } Tile{ AsIs: </62 Reuse: & Solve-Aux$2:1/66 } Tile{ AsIs: </0 Reuse: & Solve-TermEquation/4 AsIs: (/9 AsIs: e.UsedVars/40 AsIs: )/10 } Tile{ AsIs: t.Pt/52 } Tile{ AsIs: t.Ht/54 } Tile{ AsIs: (/13 AsIs: e.Contrs/42 AsIs: )/14 AsIs: (/29 AsIs: (/33 } Tile{ AsIs: e.Pe/44 } Tile{ AsIs: )/34 AsIs: ':'/35 AsIs: (/38 } Tile{ AsIs: e.He/46 } Tile{ AsIs: )/39 AsIs: )/30 AsIs: e.Equations/48 AsIs: (/17 AsIs: e.Assigns/50 AsIs: )/18 HalfReuse: >/56 HalfReuse: >/60 } Tile{ ]] }
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
        // </0 & Solve-Aux/4 (/9 e.UsedVars/40 )/10 (/13 e.Contrs/42 )/14 (/29 (/33 t.Pt/52 e.Pe/44 )/34 ':'/35 (/38 t.Ht/54 e.He/46 )/39 )/30 e.Equations/48 (/17 e.Assigns/50 )/18 >/1
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
        // closed e.UsedVars as range 40
        // closed e.Contrs as range 42
        // closed e.Equations as range 48
        // closed e.Assigns as range 50
        context[53] = refalrts::tvar_left( context[52], context[44], context[45] );
        if( ! context[53] )
          continue;
        // closed e.Pe as range 44
        context[55] = refalrts::tvar_left( context[54], context[46], context[47] );
        if( ! context[55] )
          continue;
        // closed e.He as range 46
        //DEBUG: e.UsedVars: 40
        //DEBUG: e.Contrs: 42
        //DEBUG: e.Equations: 48
        //DEBUG: e.Assigns: 50
        //DEBUG: t.Pt: 52
        //DEBUG: e.Pe: 44
        //DEBUG: t.Ht: 54
        //DEBUG: e.He: 46
        //40: e.UsedVars
        //42: e.Contrs
        //44: e.Pe
        //46: e.He
        //48: e.Equations
        //50: e.Assigns
        //52: t.Pt
        //54: t.Ht
        //61: t.Ht

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
          //DEBUG: e.UsedVars: 40
          //DEBUG: e.Contrs: 42
          //DEBUG: e.Equations: 48
          //DEBUG: e.Assigns: 50
          //DEBUG: t.Pt: 52
          //DEBUG: e.Pe: 44
          //DEBUG: t.Ht: 54
          //DEBUG: e.He: 46
          //40: e.UsedVars
          //42: e.Contrs
          //44: e.Pe
          //46: e.He
          //48: e.Equations
          //50: e.Assigns
          //52: t.Pt
          //54: t.Ht
          //65: t.Pt

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
            // </62 & Solve-Aux$3?2/66 (/69 # Var/71 'e'/72 e.Index/67 )/70 >/63
            context[64] = 0;
            context[65] = 0;
            context[66] = refalrts::call_left( context[64], context[65], context[62], context[63] );
            context[67] = 0;
            context[68] = 0;
            context[69] = refalrts::brackets_left( context[67], context[68], context[64], context[65] );
            if( ! context[69] )
              continue;
            refalrts::bracket_pointers(context[69], context[70]);
            context[71] = refalrts::ident_left( identifiers[ident_Var], context[67], context[68] );
            if( ! context[71] )
              continue;
            context[72] = refalrts::char_left( 'e', context[67], context[68] );
            if( ! context[72] )
              continue;
            if( ! refalrts::empty_seq( context[64], context[65] ) )
              continue;
            // closed e.Index as range 67
            //DEBUG: e.UsedVars: 40
            //DEBUG: e.Contrs: 42
            //DEBUG: e.Equations: 48
            //DEBUG: e.Assigns: 50
            //DEBUG: t.Pt: 52
            //DEBUG: e.Pe: 44
            //DEBUG: t.Ht: 54
            //DEBUG: e.He: 46
            //DEBUG: e.Index: 67

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} (/9 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} (/33 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} ':'/35 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} >/57 </62 & Solve-Aux$3?2/66 {REMOVED TILE} # Var/71 'e'/72 e.Index/67 {REMOVED TILE}
            //RESULT: Tile{ [[ AsIs: </0 Reuse: & Solve-Aux$3=3/4 } Tile{ AsIs: t.Pt/52 } Tile{ AsIs: (/13 AsIs: e.Contrs/42 AsIs: )/14 AsIs: (/29 } Tile{ AsIs: e.Pe/44 } Tile{ HalfReuse: )/38 AsIs: t.Ht/54 } Tile{ AsIs: (/69 } Tile{ AsIs: e.He/46 } Tile{ AsIs: )/39 HalfReuse: (/30 } Tile{ AsIs: e.Equations/48 } Tile{ AsIs: )/34 } Tile{ AsIs: (/17 AsIs: e.Assigns/50 AsIs: )/18 AsIs: </56 Reuse: & NewVarName/60 HalfReuse: (/61 } Tile{ AsIs: e.UsedVars/40 } Tile{ AsIs: )/10 } Tile{ HalfReuse: 't'/70 AsIs: >/63 AsIs: >/1 ]] }
            refalrts::update_name(context[4], functions[efunc_gen_Solvem_Aux_S3A3]);
            refalrts::reinit_close_bracket(context[38]);
            refalrts::reinit_open_bracket(context[30]);
            refalrts::update_name(context[60], functions[efunc_NewVarName]);
            refalrts::reinit_open_bracket(context[61]);
            refalrts::reinit_char(context[70], 't');
            refalrts::push_stack( vm, context[1] );
            refalrts::push_stack( vm, context[0] );
            refalrts::push_stack( vm, context[63] );
            refalrts::push_stack( vm, context[56] );
            refalrts::link_brackets( context[61], context[10] );
            refalrts::link_brackets( context[17], context[18] );
            refalrts::link_brackets( context[30], context[34] );
            refalrts::link_brackets( context[69], context[39] );
            refalrts::link_brackets( context[29], context[38] );
            refalrts::link_brackets( context[13], context[14] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = context[70];
            res = refalrts::splice_elem( res, context[10] );
            res = refalrts::splice_evar( res, context[40], context[41] );
            res = refalrts::splice_evar( res, context[17], context[61] );
            res = refalrts::splice_elem( res, context[34] );
            res = refalrts::splice_evar( res, context[48], context[49] );
            res = refalrts::splice_evar( res, context[39], context[30] );
            res = refalrts::splice_evar( res, context[46], context[47] );
            res = refalrts::splice_elem( res, context[69] );
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
        // </0 & Solve-Aux/4 (/9 e.new15/40 )/10 (/13 e.new16/42 )/14 (/29 (/33 e.new12/44 )/34 ':'/35 (/38 e.new13/46 t.new14/52 )/39 )/30 e.new11/48 (/17 e.new17/50 )/18 >/1
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
        // closed e.new15 as range 40
        // closed e.new16 as range 42
        // closed e.new12 as range 44
        // closed e.new11 as range 48
        // closed e.new17 as range 50
        context[53] = refalrts::tvar_right( context[52], context[46], context[47] );
        if( ! context[53] )
          continue;
        // closed e.new13 as range 46
        do {
          // </0 & Solve-Aux/4 (/9 e.UsedVars/54 )/10 (/13 e.Contrs/56 )/14 (/29 (/33 e.Pe/58 t.Pt/66 )/34 ':'/35 (/38 e.He/60 t.Ht/52 )/39 )/30 e.Equations/62 (/17 e.Assigns/64 )/18 >/1
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
          // closed e.UsedVars as range 54
          // closed e.Contrs as range 56
          // closed e.He as range 60
          // closed e.Equations as range 62
          // closed e.Assigns as range 64
          context[67] = refalrts::tvar_right( context[66], context[58], context[59] );
          if( ! context[67] )
            continue;
          // closed e.Pe as range 58
          //DEBUG: t.Ht: 52
          //DEBUG: e.UsedVars: 54
          //DEBUG: e.Contrs: 56
          //DEBUG: e.He: 60
          //DEBUG: e.Equations: 62
          //DEBUG: e.Assigns: 64
          //DEBUG: t.Pt: 66
          //DEBUG: e.Pe: 58
          //52: t.Ht
          //54: e.UsedVars
          //56: e.Contrs
          //58: e.Pe
          //60: e.He
          //62: e.Equations
          //64: e.Assigns
          //66: t.Pt
          //73: t.Ht

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
            //DEBUG: t.Ht: 52
            //DEBUG: e.UsedVars: 54
            //DEBUG: e.Contrs: 56
            //DEBUG: e.He: 60
            //DEBUG: e.Equations: 62
            //DEBUG: e.Assigns: 64
            //DEBUG: t.Pt: 66
            //DEBUG: e.Pe: 58
            //52: t.Ht
            //54: e.UsedVars
            //56: e.Contrs
            //58: e.Pe
            //60: e.He
            //62: e.Equations
            //64: e.Assigns
            //66: t.Pt
            //77: t.Pt

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
              // </74 & Solve-Aux$4?2/78 (/81 # Var/83 'e'/84 e.Index/79 )/82 >/75
              context[76] = 0;
              context[77] = 0;
              context[78] = refalrts::call_left( context[76], context[77], context[74], context[75] );
              context[79] = 0;
              context[80] = 0;
              context[81] = refalrts::brackets_left( context[79], context[80], context[76], context[77] );
              if( ! context[81] )
                continue;
              refalrts::bracket_pointers(context[81], context[82]);
              context[83] = refalrts::ident_left( identifiers[ident_Var], context[79], context[80] );
              if( ! context[83] )
                continue;
              context[84] = refalrts::char_left( 'e', context[79], context[80] );
              if( ! context[84] )
                continue;
              if( ! refalrts::empty_seq( context[76], context[77] ) )
                continue;
              // closed e.Index as range 79
              //DEBUG: t.Ht: 52
              //DEBUG: e.UsedVars: 54
              //DEBUG: e.Contrs: 56
              //DEBUG: e.He: 60
              //DEBUG: e.Equations: 62
              //DEBUG: e.Assigns: 64
              //DEBUG: t.Pt: 66
              //DEBUG: e.Pe: 58
              //DEBUG: e.Index: 79

              refalrts::reset_allocator(vm);
              //TRASH: {REMOVED TILE} (/9 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} (/33 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} ':'/35 (/38 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} >/69 </74 & Solve-Aux$4?2/78 {REMOVED TILE} {REMOVED TILE} 'e'/84 e.Index/79 {REMOVED TILE}
              //RESULT: Tile{ [[ AsIs: </0 Reuse: & Solve-Aux$4=3/4 } Tile{ AsIs: t.Pt/66 } Tile{ AsIs: (/13 AsIs: e.Contrs/56 AsIs: )/14 AsIs: (/29 } Tile{ AsIs: e.Pe/58 } Tile{ AsIs: )/39 HalfReuse: (/30 } Tile{ AsIs: e.He/60 } Tile{ AsIs: )/34 } Tile{ AsIs: t.Ht/52 } Tile{ AsIs: (/81 } Tile{ AsIs: e.Equations/62 } Tile{ AsIs: )/10 } Tile{ AsIs: (/17 AsIs: e.Assigns/64 AsIs: )/18 AsIs: </68 Reuse: & NewVarName/72 HalfReuse: (/73 } Tile{ AsIs: e.UsedVars/54 } Tile{ HalfReuse: )/83 } Tile{ HalfReuse: 't'/82 AsIs: >/75 AsIs: >/1 ]] }
              refalrts::update_name(context[4], functions[efunc_gen_Solvem_Aux_S4A3]);
              refalrts::reinit_open_bracket(context[30]);
              refalrts::update_name(context[72], functions[efunc_NewVarName]);
              refalrts::reinit_open_bracket(context[73]);
              refalrts::reinit_close_bracket(context[83]);
              refalrts::reinit_char(context[82], 't');
              refalrts::push_stack( vm, context[1] );
              refalrts::push_stack( vm, context[0] );
              refalrts::push_stack( vm, context[75] );
              refalrts::push_stack( vm, context[68] );
              refalrts::link_brackets( context[73], context[83] );
              refalrts::link_brackets( context[17], context[18] );
              refalrts::link_brackets( context[81], context[10] );
              refalrts::link_brackets( context[30], context[34] );
              refalrts::link_brackets( context[29], context[39] );
              refalrts::link_brackets( context[13], context[14] );
              refalrts::Iter trash_prev = arg_begin->prev;
              refalrts::use(trash_prev);
              refalrts::Iter res = context[82];
              res = refalrts::splice_elem( res, context[83] );
              res = refalrts::splice_evar( res, context[54], context[55] );
              res = refalrts::splice_evar( res, context[17], context[73] );
              res = refalrts::splice_elem( res, context[10] );
              res = refalrts::splice_evar( res, context[62], context[63] );
              res = refalrts::splice_elem( res, context[81] );
              res = refalrts::splice_evar( res, context[52], context[53] );
              res = refalrts::splice_elem( res, context[34] );
              res = refalrts::splice_evar( res, context[60], context[61] );
              res = refalrts::splice_evar( res, context[39], context[30] );
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

        // </0 & Solve-Aux/4 (/9 e.UsedVars/54 )/10 (/13 e.Contrs/56 )/14 (/29 (/33 e.Pe/58 )/34 ':'/35 (/38 (/52 # Var/66 'e'/67 e.Idx/64 )/53 )/39 )/30 e.Equations/60 (/17 e.Assigns/62 )/18 >/1
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
        context[66] = refalrts::ident_left( identifiers[ident_Var], context[64], context[65] );
        if( ! context[66] )
          continue;
        context[67] = refalrts::char_left( 'e', context[64], context[65] );
        if( ! context[67] )
          continue;
        if( ! refalrts::empty_seq( context[46], context[47] ) )
          continue;
        // closed e.UsedVars as range 54
        // closed e.Contrs as range 56
        // closed e.Pe as range 58
        // closed e.Idx as range 64
        // closed e.Equations as range 60
        // closed e.Assigns as range 62
        //DEBUG: e.UsedVars: 54
        //DEBUG: e.Contrs: 56
        //DEBUG: e.Pe: 58
        //DEBUG: e.Idx: 64
        //DEBUG: e.Equations: 60
        //DEBUG: e.Assigns: 62

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} (/29 (/33 {REMOVED TILE} )/34 ':'/35 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & Solve-Aux/4 AsIs: (/9 AsIs: e.UsedVars/54 AsIs: )/10 AsIs: (/13 AsIs: e.Contrs/56 AsIs: )/14 } Tile{ AsIs: e.Equations/60 } Tile{ AsIs: (/17 AsIs: e.Assigns/62 HalfReuse: (/18 } Tile{ AsIs: e.Pe/58 } Tile{ HalfReuse: ':'/38 AsIs: (/52 AsIs: # Var/66 AsIs: 'e'/67 AsIs: e.Idx/64 AsIs: )/53 AsIs: )/39 AsIs: )/30 } Tile{ AsIs: >/1 ]] }
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
        // </0 & Solve-Aux/4 (/9 e.new13/40 )/10 (/13 e.new14/42 )/14 (/29 (/33 )/34 ':'/35 (/38 e.new12/44 )/39 )/30 e.new11/46 (/17 e.new15/48 )/18 >/1
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
        // closed e.new13 as range 40
        // closed e.new14 as range 42
        // closed e.new12 as range 44
        // closed e.new11 as range 46
        // closed e.new15 as range 48
        do {
          // </0 & Solve-Aux/4 (/9 e.UsedVars/50 )/10 (/13 e.Contrs/52 )/14 (/29 (/33 )/34 ':'/35 (/38 t.Ht/60 e.He/54 )/39 )/30 e.Equations/56 (/17 e.Assigns/58 )/18 >/1
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
          // closed e.UsedVars as range 50
          // closed e.Contrs as range 52
          // closed e.Equations as range 56
          // closed e.Assigns as range 58
          context[61] = refalrts::tvar_left( context[60], context[54], context[55] );
          if( ! context[61] )
            continue;
          // closed e.He as range 54
          //DEBUG: e.UsedVars: 50
          //DEBUG: e.Contrs: 52
          //DEBUG: e.Equations: 56
          //DEBUG: e.Assigns: 58
          //DEBUG: t.Ht: 60
          //DEBUG: e.He: 54
          //50: e.UsedVars
          //52: e.Contrs
          //54: e.He
          //56: e.Equations
          //58: e.Assigns
          //60: t.Ht
          //67: t.Ht

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
            //DEBUG: e.UsedVars: 50
            //DEBUG: e.Contrs: 52
            //DEBUG: e.Equations: 56
            //DEBUG: e.Assigns: 58
            //DEBUG: t.Ht: 60
            //DEBUG: e.He: 54

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} </0 & Solve-Aux/4 (/9 e.UsedVars/50 )/10 (/13 e.Contrs/52 )/14 (/29 (/33 )/34 ':'/35 (/38 t.Ht/60 e.He/54 )/39 )/30 e.Equations/56 (/17 e.Assigns/58 )/18 </62 & Solve-Aux$6?1/66 # True/67 >/63 >/1 {REMOVED TILE}
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

        // </0 & Solve-Aux/4 (/9 e.UsedVars/50 )/10 (/13 e.Contrs/52 )/14 (/29 (/33 )/34 ':'/35 (/38 e.He/54 t.Ht/60 )/39 )/30 e.Equations/56 (/17 e.Assigns/58 )/18 >/1
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
        // closed e.UsedVars as range 50
        // closed e.Contrs as range 52
        // closed e.Equations as range 56
        // closed e.Assigns as range 58
        context[61] = refalrts::tvar_right( context[60], context[54], context[55] );
        if( ! context[61] )
          continue;
        // closed e.He as range 54
        //DEBUG: e.UsedVars: 50
        //DEBUG: e.Contrs: 52
        //DEBUG: e.Equations: 56
        //DEBUG: e.Assigns: 58
        //DEBUG: t.Ht: 60
        //DEBUG: e.He: 54
        //50: e.UsedVars
        //52: e.Contrs
        //54: e.He
        //56: e.Equations
        //58: e.Assigns
        //60: t.Ht
        //67: t.Ht

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
          //DEBUG: e.UsedVars: 50
          //DEBUG: e.Contrs: 52
          //DEBUG: e.Equations: 56
          //DEBUG: e.Assigns: 58
          //DEBUG: t.Ht: 60
          //DEBUG: e.He: 54

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} </0 & Solve-Aux/4 (/9 e.UsedVars/50 )/10 (/13 e.Contrs/52 )/14 (/29 (/33 )/34 ':'/35 (/38 e.He/54 t.Ht/60 )/39 )/30 e.Equations/56 (/17 e.Assigns/58 )/18 </62 & Solve-Aux$7?1/66 # True/67 >/63 >/1 {REMOVED TILE}
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

      // </0 & Solve-Aux/4 (/9 e.UsedVars/40 )/10 (/13 e.Contrs/42 )/14 (/29 (/33 e.Pt/44 )/34 ':'/35 (/38 )/39 )/30 e.Equations/46 (/17 e.Assigns/48 )/18 >/1
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
      // closed e.UsedVars as range 40
      // closed e.Contrs as range 42
      // closed e.Pt as range 44
      // closed e.Equations as range 46
      // closed e.Assigns as range 48
      //DEBUG: e.UsedVars: 40
      //DEBUG: e.Contrs: 42
      //DEBUG: e.Pt: 44
      //DEBUG: e.Equations: 46
      //DEBUG: e.Assigns: 48

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Solve-Aux$8:1/4 AsIs: (/9 AsIs: e.UsedVars/40 AsIs: )/10 AsIs: (/13 AsIs: e.Contrs/42 AsIs: )/14 AsIs: (/29 } Tile{ AsIs: e.Equations/46 } Tile{ AsIs: )/39 } Tile{ AsIs: (/17 AsIs: e.Assigns/48 AsIs: )/18 } Tile{ AsIs: (/33 AsIs: e.Pt/44 AsIs: )/34 HalfReuse: </35 HalfReuse: & IsFreeVariableSeq/38 } e.Pt/44/50 Tile{ HalfReuse: >/30 } Tile{ AsIs: >/1 ]] }
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
      res = refalrts::splice_elem( res, context[30] );
      res = refalrts::splice_evar( res, context[50], context[51] );
      res = refalrts::splice_evar( res, context[33], context[38] );
      res = refalrts::splice_evar( res, context[17], context[18] );
      res = refalrts::splice_elem( res, context[39] );
      res = refalrts::splice_evar( res, context[46], context[47] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Solve-Aux/4 (/9 e.UsedVars/19 )/10 (/13 e.Contrs/21 )/14 (/17 e.Assigns/23 )/18 >/1
    context[19] = context[7];
    context[20] = context[8];
    context[21] = context[11];
    context[22] = context[12];
    context[23] = context[15];
    context[24] = context[16];
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    // closed e.UsedVars as range 19
    // closed e.Contrs as range 21
    // closed e.Assigns as range 23
    //DEBUG: e.UsedVars: 19
    //DEBUG: e.Contrs: 21
    //DEBUG: e.Assigns: 23

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} & Solve-Aux/4 (/9 e.UsedVars/19 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 } Tile{ HalfReuse: & Solution-PostProcess/10 AsIs: (/13 AsIs: e.Contrs/21 AsIs: )/14 AsIs: (/17 AsIs: e.Assigns/23 AsIs: )/18 AsIs: >/1 ]] }
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

  // </0 & Solve-Aux/4 e.Other/2 >/1
  // closed e.Other as range 2
  //DEBUG: e.Other: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Solve-Aux/4 e.Other/2 {REMOVED TILE}
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
  // issue here memory for vars with 60 elems
  refalrts::Iter context[60];
  refalrts::zeros( context, 60 );
  // </0 & Solve-TermEquation$6=2/4 t.PTvar/5 (/9 e.Contrs/7 )/10 (/13 e.Equations/11 )/14 (/17 e.HBody/15 )/18 (/21 e.Assigns/19 )/22 t.NewVars/23 'e'/25 e.NewIndex/2 >/1
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
  // closed e.Contrs as range 7
  // closed e.Equations as range 11
  // closed e.HBody as range 15
  // closed e.Assigns as range 19
  context[24] = refalrts::tvar_left( context[23], context[2], context[3] );
  if( ! context[24] )
    return refalrts::cRecognitionImpossible;
  context[25] = refalrts::char_left( 'e', context[2], context[3] );
  if( ! context[25] )
    return refalrts::cRecognitionImpossible;
  // closed e.NewIndex as range 2
  //DEBUG: t.PTvar: 5
  //DEBUG: e.Contrs: 7
  //DEBUG: e.Equations: 11
  //DEBUG: e.HBody: 15
  //DEBUG: e.Assigns: 19
  //DEBUG: t.NewVars: 23
  //DEBUG: e.NewIndex: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: # Success/22 AsIs: t.NewVars/23 } (/26 Tile{ AsIs: e.Contrs/7 } (/27 t.PTvar/5/28 ':'/30 (/31 Tile{ HalfReuse: # Brackets/10 AsIs: (/13 } # Var/32 Tile{ AsIs: 'e'/25 AsIs: e.NewIndex/2 HalfReuse: )/1 } )/33 )/34 )/35 Tile{ AsIs: </0 Reuse: & Map@9/4 AsIs: t.PTvar/5 AsIs: (/9 } e.NewIndex/2/36 )/38 Tile{ AsIs: e.Equations/11 } (/39 (/40 (/41 # Var/42 'e'/43 e.NewIndex/2/44 )/46 )/47 Tile{ HalfReuse: ':'/14 AsIs: (/17 AsIs: e.HBody/15 AsIs: )/18 HalfReuse: )/21 } >/48 (/49 </50 & Map@10/51 t.PTvar/5/52 (/54 e.NewIndex/2/55 )/57 Tile{ AsIs: e.Assigns/19 } >/58 )/59 Tile{ ]] }
  refalrts::alloc_open_bracket(vm, context[26]);
  refalrts::alloc_open_bracket(vm, context[27]);
  refalrts::copy_evar(vm, context[28], context[29], context[5], context[6]);
  refalrts::alloc_char(vm, context[30], ':');
  refalrts::alloc_open_bracket(vm, context[31]);
  refalrts::alloc_ident(vm, context[32], identifiers[ident_Var]);
  refalrts::alloc_close_bracket(vm, context[33]);
  refalrts::alloc_close_bracket(vm, context[34]);
  refalrts::alloc_close_bracket(vm, context[35]);
  refalrts::copy_evar(vm, context[36], context[37], context[2], context[3]);
  refalrts::alloc_close_bracket(vm, context[38]);
  refalrts::alloc_open_bracket(vm, context[39]);
  refalrts::alloc_open_bracket(vm, context[40]);
  refalrts::alloc_open_bracket(vm, context[41]);
  refalrts::alloc_ident(vm, context[42], identifiers[ident_Var]);
  refalrts::alloc_char(vm, context[43], 'e');
  refalrts::copy_evar(vm, context[44], context[45], context[2], context[3]);
  refalrts::alloc_close_bracket(vm, context[46]);
  refalrts::alloc_close_bracket(vm, context[47]);
  refalrts::alloc_close_call(vm, context[48]);
  refalrts::alloc_open_bracket(vm, context[49]);
  refalrts::alloc_open_call(vm, context[50]);
  refalrts::alloc_name(vm, context[51], functions[efunc_gen_Map_Z10]);
  refalrts::copy_evar(vm, context[52], context[53], context[5], context[6]);
  refalrts::alloc_open_bracket(vm, context[54]);
  refalrts::copy_evar(vm, context[55], context[56], context[2], context[3]);
  refalrts::alloc_close_bracket(vm, context[57]);
  refalrts::alloc_close_call(vm, context[58]);
  refalrts::alloc_close_bracket(vm, context[59]);
  refalrts::reinit_ident(context[22], identifiers[ident_Success]);
  refalrts::reinit_ident(context[10], identifiers[ident_Brackets]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::update_name(context[4], functions[efunc_gen_Map_Z9]);
  refalrts::reinit_char(context[14], ':');
  refalrts::reinit_close_bracket(context[21]);
  refalrts::link_brackets( context[49], context[59] );
  refalrts::push_stack( vm, context[58] );
  refalrts::push_stack( vm, context[50] );
  refalrts::link_brackets( context[54], context[57] );
  refalrts::push_stack( vm, context[48] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[39], context[21] );
  refalrts::link_brackets( context[17], context[18] );
  refalrts::link_brackets( context[40], context[47] );
  refalrts::link_brackets( context[41], context[46] );
  refalrts::link_brackets( context[9], context[38] );
  refalrts::link_brackets( context[26], context[35] );
  refalrts::link_brackets( context[27], context[34] );
  refalrts::link_brackets( context[31], context[33] );
  refalrts::link_brackets( context[13], context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[58], context[59] );
  res = refalrts::splice_evar( res, context[19], context[20] );
  res = refalrts::splice_evar( res, context[48], context[57] );
  res = refalrts::splice_evar( res, context[14], context[21] );
  res = refalrts::splice_evar( res, context[39], context[47] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_elem( res, context[38] );
  res = refalrts::splice_evar( res, context[36], context[37] );
  res = refalrts::splice_evar( res, context[0], context[9] );
  res = refalrts::splice_evar( res, context[33], context[35] );
  res = refalrts::splice_evar( res, context[25], context[1] );
  res = refalrts::splice_elem( res, context[32] );
  res = refalrts::splice_evar( res, context[10], context[13] );
  res = refalrts::splice_evar( res, context[27], context[31] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_elem( res, context[26] );
  res = refalrts::splice_evar( res, context[22], context[24] );
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
  // issue here memory for vars with 72 elems
  refalrts::Iter context[72];
  refalrts::zeros( context, 72 );
  // </0 & Solve-TermEquation$7=2/4 t.PTvar/5 (/9 e.Name/7 )/10 (/13 e.Contrs/11 )/14 (/17 e.Equations/15 )/18 (/21 e.HBody/19 )/22 (/25 e.Assigns/23 )/26 t.NewVars/27 'e'/29 e.NewIndex/2 >/1
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
  // closed e.Name as range 7
  // closed e.Contrs as range 11
  // closed e.Equations as range 15
  // closed e.HBody as range 19
  // closed e.Assigns as range 23
  context[28] = refalrts::tvar_left( context[27], context[2], context[3] );
  if( ! context[28] )
    return refalrts::cRecognitionImpossible;
  context[29] = refalrts::char_left( 'e', context[2], context[3] );
  if( ! context[29] )
    return refalrts::cRecognitionImpossible;
  // closed e.NewIndex as range 2
  //DEBUG: t.PTvar: 5
  //DEBUG: e.Name: 7
  //DEBUG: e.Contrs: 11
  //DEBUG: e.Equations: 15
  //DEBUG: e.HBody: 19
  //DEBUG: e.Assigns: 23
  //DEBUG: t.NewVars: 27
  //DEBUG: e.NewIndex: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: # Success/26 AsIs: t.NewVars/27 } (/30 Tile{ AsIs: e.Contrs/11 } (/31 t.PTvar/5/32 ':'/34 (/35 # ADT-Brackets/36 (/37 e.Name/7/38 Tile{ AsIs: )/14 AsIs: (/17 } # Var/40 'e'/41 e.NewIndex/2/42 )/44 )/45 )/46 )/47 Tile{ AsIs: </0 Reuse: & Map@11/4 AsIs: t.PTvar/5 AsIs: (/9 AsIs: e.Name/7 AsIs: )/10 AsIs: (/13 } e.NewIndex/2/48 )/50 Tile{ AsIs: e.Equations/15 } (/51 (/52 (/53 # Var/54 Tile{ AsIs: 'e'/29 AsIs: e.NewIndex/2 HalfReuse: )/1 } )/55 Tile{ HalfReuse: ':'/18 AsIs: (/21 AsIs: e.HBody/19 AsIs: )/22 HalfReuse: )/25 } >/56 (/57 </58 & Map@12/59 t.PTvar/5/60 (/62 e.Name/7/63 )/65 (/66 e.NewIndex/2/67 )/69 Tile{ AsIs: e.Assigns/23 } >/70 )/71 Tile{ ]] }
  refalrts::alloc_open_bracket(vm, context[30]);
  refalrts::alloc_open_bracket(vm, context[31]);
  refalrts::copy_evar(vm, context[32], context[33], context[5], context[6]);
  refalrts::alloc_char(vm, context[34], ':');
  refalrts::alloc_open_bracket(vm, context[35]);
  refalrts::alloc_ident(vm, context[36], identifiers[ident_ADTm_Brackets]);
  refalrts::alloc_open_bracket(vm, context[37]);
  refalrts::copy_evar(vm, context[38], context[39], context[7], context[8]);
  refalrts::alloc_ident(vm, context[40], identifiers[ident_Var]);
  refalrts::alloc_char(vm, context[41], 'e');
  refalrts::copy_evar(vm, context[42], context[43], context[2], context[3]);
  refalrts::alloc_close_bracket(vm, context[44]);
  refalrts::alloc_close_bracket(vm, context[45]);
  refalrts::alloc_close_bracket(vm, context[46]);
  refalrts::alloc_close_bracket(vm, context[47]);
  refalrts::copy_evar(vm, context[48], context[49], context[2], context[3]);
  refalrts::alloc_close_bracket(vm, context[50]);
  refalrts::alloc_open_bracket(vm, context[51]);
  refalrts::alloc_open_bracket(vm, context[52]);
  refalrts::alloc_open_bracket(vm, context[53]);
  refalrts::alloc_ident(vm, context[54], identifiers[ident_Var]);
  refalrts::alloc_close_bracket(vm, context[55]);
  refalrts::alloc_close_call(vm, context[56]);
  refalrts::alloc_open_bracket(vm, context[57]);
  refalrts::alloc_open_call(vm, context[58]);
  refalrts::alloc_name(vm, context[59], functions[efunc_gen_Map_Z12]);
  refalrts::copy_evar(vm, context[60], context[61], context[5], context[6]);
  refalrts::alloc_open_bracket(vm, context[62]);
  refalrts::copy_evar(vm, context[63], context[64], context[7], context[8]);
  refalrts::alloc_close_bracket(vm, context[65]);
  refalrts::alloc_open_bracket(vm, context[66]);
  refalrts::copy_evar(vm, context[67], context[68], context[2], context[3]);
  refalrts::alloc_close_bracket(vm, context[69]);
  refalrts::alloc_close_call(vm, context[70]);
  refalrts::alloc_close_bracket(vm, context[71]);
  refalrts::reinit_ident(context[26], identifiers[ident_Success]);
  refalrts::update_name(context[4], functions[efunc_gen_Map_Z11]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::reinit_char(context[18], ':');
  refalrts::reinit_close_bracket(context[25]);
  refalrts::link_brackets( context[57], context[71] );
  refalrts::push_stack( vm, context[70] );
  refalrts::push_stack( vm, context[58] );
  refalrts::link_brackets( context[66], context[69] );
  refalrts::link_brackets( context[62], context[65] );
  refalrts::push_stack( vm, context[56] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[51], context[25] );
  refalrts::link_brackets( context[21], context[22] );
  refalrts::link_brackets( context[52], context[55] );
  refalrts::link_brackets( context[53], context[1] );
  refalrts::link_brackets( context[13], context[50] );
  refalrts::link_brackets( context[9], context[10] );
  refalrts::link_brackets( context[30], context[47] );
  refalrts::link_brackets( context[31], context[46] );
  refalrts::link_brackets( context[35], context[45] );
  refalrts::link_brackets( context[17], context[44] );
  refalrts::link_brackets( context[37], context[14] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[70], context[71] );
  res = refalrts::splice_evar( res, context[23], context[24] );
  res = refalrts::splice_evar( res, context[56], context[69] );
  res = refalrts::splice_evar( res, context[18], context[25] );
  res = refalrts::splice_elem( res, context[55] );
  res = refalrts::splice_evar( res, context[29], context[1] );
  res = refalrts::splice_evar( res, context[51], context[54] );
  res = refalrts::splice_evar( res, context[15], context[16] );
  res = refalrts::splice_elem( res, context[50] );
  res = refalrts::splice_evar( res, context[48], context[49] );
  res = refalrts::splice_evar( res, context[0], context[13] );
  res = refalrts::splice_evar( res, context[40], context[47] );
  res = refalrts::splice_evar( res, context[14], context[17] );
  res = refalrts::splice_evar( res, context[38], context[39] );
  res = refalrts::splice_evar( res, context[31], context[37] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_elem( res, context[30] );
  res = refalrts::splice_evar( res, context[26], context[28] );
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
  // issue here memory for vars with 55 elems
  refalrts::Iter context[55];
  refalrts::zeros( context, 55 );
  // </0 & Solve-TermEquation$9=2/4 t.PTvar/5 (/9 e.Contrs/7 )/10 (/13 e.Equations/11 )/14 (/17 e.Assigns/15 )/18 t.HSvar/19 (/23 e.UsedVars$a/21 )/24 's'/25 e.sIdx/2 >/1
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
  // closed e.Contrs as range 7
  // closed e.Equations as range 11
  // closed e.Assigns as range 15
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
  // closed e.UsedVars$a as range 21
  // closed e.sIdx as range 2
  //DEBUG: t.PTvar: 5
  //DEBUG: e.Contrs: 7
  //DEBUG: e.Equations: 11
  //DEBUG: e.Assigns: 15
  //DEBUG: t.HSvar: 19
  //DEBUG: e.UsedVars$a: 21
  //DEBUG: e.sIdx: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } # Success/26 Tile{ AsIs: (/23 AsIs: e.UsedVars$a/21 AsIs: )/24 HalfReuse: (/25 } Tile{ AsIs: e.Contrs/7 } (/27 t.PTvar/5/28 ':'/30 (/31 # Var/32 's'/33 e.sIdx/2/34 Tile{ AsIs: )/10 } )/36 )/37 Tile{ AsIs: </0 Reuse: & Map@13/4 AsIs: t.PTvar/5 AsIs: (/9 } Tile{ AsIs: e.sIdx/2 } Tile{ HalfReuse: )/13 AsIs: e.Equations/11 HalfReuse: >/14 AsIs: (/17 } </38 & Map@14/39 t.PTvar/5/40 (/42 e.sIdx/2/43 )/45 Tile{ AsIs: e.Assigns/15 } (/46 (/47 # Var/48 's'/49 e.sIdx/2/50 )/52 Tile{ HalfReuse: ':'/18 AsIs: t.HSvar/19 } )/53 >/54 Tile{ HalfReuse: )/1 ]] }
  refalrts::alloc_ident(vm, context[26], identifiers[ident_Success]);
  refalrts::alloc_open_bracket(vm, context[27]);
  refalrts::copy_evar(vm, context[28], context[29], context[5], context[6]);
  refalrts::alloc_char(vm, context[30], ':');
  refalrts::alloc_open_bracket(vm, context[31]);
  refalrts::alloc_ident(vm, context[32], identifiers[ident_Var]);
  refalrts::alloc_char(vm, context[33], 's');
  refalrts::copy_evar(vm, context[34], context[35], context[2], context[3]);
  refalrts::alloc_close_bracket(vm, context[36]);
  refalrts::alloc_close_bracket(vm, context[37]);
  refalrts::alloc_open_call(vm, context[38]);
  refalrts::alloc_name(vm, context[39], functions[efunc_gen_Map_Z14]);
  refalrts::copy_evar(vm, context[40], context[41], context[5], context[6]);
  refalrts::alloc_open_bracket(vm, context[42]);
  refalrts::copy_evar(vm, context[43], context[44], context[2], context[3]);
  refalrts::alloc_close_bracket(vm, context[45]);
  refalrts::alloc_open_bracket(vm, context[46]);
  refalrts::alloc_open_bracket(vm, context[47]);
  refalrts::alloc_ident(vm, context[48], identifiers[ident_Var]);
  refalrts::alloc_char(vm, context[49], 's');
  refalrts::copy_evar(vm, context[50], context[51], context[2], context[3]);
  refalrts::alloc_close_bracket(vm, context[52]);
  refalrts::alloc_close_bracket(vm, context[53]);
  refalrts::alloc_close_call(vm, context[54]);
  refalrts::reinit_open_bracket(context[25]);
  refalrts::update_name(context[4], functions[efunc_gen_Map_Z13]);
  refalrts::reinit_close_bracket(context[13]);
  refalrts::reinit_close_call(context[14]);
  refalrts::reinit_char(context[18], ':');
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[17], context[1] );
  refalrts::push_stack( vm, context[54] );
  refalrts::push_stack( vm, context[38] );
  refalrts::link_brackets( context[46], context[53] );
  refalrts::link_brackets( context[47], context[52] );
  refalrts::link_brackets( context[42], context[45] );
  refalrts::push_stack( vm, context[14] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[9], context[13] );
  refalrts::link_brackets( context[25], context[37] );
  refalrts::link_brackets( context[27], context[36] );
  refalrts::link_brackets( context[31], context[10] );
  refalrts::link_brackets( context[23], context[24] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[53], context[54] );
  res = refalrts::splice_evar( res, context[18], context[20] );
  res = refalrts::splice_evar( res, context[46], context[52] );
  res = refalrts::splice_evar( res, context[15], context[16] );
  res = refalrts::splice_evar( res, context[38], context[45] );
  res = refalrts::splice_evar( res, context[13], context[17] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[0], context[9] );
  res = refalrts::splice_evar( res, context[36], context[37] );
  res = refalrts::splice_elem( res, context[10] );
  res = refalrts::splice_evar( res, context[34], context[35] );
  res = refalrts::splice_evar( res, context[27], context[33] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_evar( res, context[23], context[25] );
  res = refalrts::splice_elem( res, context[26] );
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
  // issue here memory for vars with 63 elems
  refalrts::Iter context[63];
  refalrts::zeros( context, 63 );
  // </0 & Solve-TermEquation/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  do {
    // </0 & Solve-TermEquation/4 (/9 e.new1/7 )/10 t.new2/11 t.new3/13 e.new4/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[7] = 0;
    context[8] = 0;
    context[9] = refalrts::brackets_left( context[7], context[8], context[5], context[6] );
    if( ! context[9] )
      continue;
    refalrts::bracket_pointers(context[9], context[10]);
    // closed e.new1 as range 7
    context[12] = refalrts::tvar_left( context[11], context[5], context[6] );
    if( ! context[12] )
      continue;
    context[14] = refalrts::tvar_left( context[13], context[5], context[6] );
    if( ! context[14] )
      continue;
    // closed e.new4 as range 5
    do {
      // </0 & Solve-TermEquation/4 (/9 e.UsedVars/15 )/10 t.Symbol/11 t.Symbol/13 e.PRTC/17 >/1
      context[15] = context[7];
      context[16] = context[8];
      context[17] = context[5];
      context[18] = context[6];
      if( ! refalrts::repeated_stvar_term( vm, context[13], context[11] ) )
        continue;
      // closed e.UsedVars as range 15
      // closed e.PRTC as range 17
      //DEBUG: t.Symbol: 11
      //DEBUG: e.UsedVars: 15
      //DEBUG: e.PRTC: 17
      //11: t.Symbol
      //13: t.Symbol
      //15: e.UsedVars
      //17: e.PRTC
      //22: t.Symbol

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
        // </19 & Solve-TermEquation$1?1/23 (/26 # Symbol/28 s.Type/29 e.Info/24 )/27 >/20
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
        // closed e.Info as range 24
        //DEBUG: t.Symbol: 11
        //DEBUG: e.UsedVars: 15
        //DEBUG: e.PRTC: 17
        //DEBUG: s.Type: 29
        //DEBUG: e.Info: 24

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 {REMOVED TILE} t.Symbol/11 t.Symbol/13 {REMOVED TILE} </19 & Solve-TermEquation$1?1/23 (/26 # Symbol/28 s.Type/29 e.Info/24 )/27 >/20 >/1 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: # Success/4 AsIs: (/9 AsIs: e.UsedVars/15 AsIs: )/10 } Tile{ AsIs: e.PRTC/17 } Tile{ ]] }
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

    // </0 & Solve-TermEquation/4 (/9 e.new10/15 )/10 t.new5/11 t.new6/13 (/21 e.new7/19 )/22 e.new8/17 (/25 e.new9/23 )/26 >/1
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
    // closed e.new10 as range 15
    // closed e.new7 as range 19
    // closed e.new8 as range 17
    // closed e.new9 as range 23
    do {
      // </0 & Solve-TermEquation/4 (/9 e.UsedVars/27 )/10 t.Symbol/11 t.Svar/13 (/21 e.Contrs/29 )/22 e.Equations/31 (/25 e.Assigns/33 )/26 >/1
      context[27] = context[15];
      context[28] = context[16];
      context[29] = context[19];
      context[30] = context[20];
      context[31] = context[17];
      context[32] = context[18];
      context[33] = context[23];
      context[34] = context[24];
      // closed e.UsedVars as range 27
      // closed e.Contrs as range 29
      // closed e.Equations as range 31
      // closed e.Assigns as range 33
      //DEBUG: t.Symbol: 11
      //DEBUG: t.Svar: 13
      //DEBUG: e.UsedVars: 27
      //DEBUG: e.Contrs: 29
      //DEBUG: e.Equations: 31
      //DEBUG: e.Assigns: 33
      //11: t.Symbol
      //13: t.Svar
      //27: e.UsedVars
      //29: e.Contrs
      //31: e.Equations
      //33: e.Assigns
      //40: t.Symbol

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
        //DEBUG: t.Symbol: 11
        //DEBUG: t.Svar: 13
        //DEBUG: e.UsedVars: 27
        //DEBUG: e.Contrs: 29
        //DEBUG: e.Equations: 31
        //DEBUG: e.Assigns: 33
        //11: t.Symbol
        //13: t.Svar
        //27: e.UsedVars
        //29: e.Contrs
        //31: e.Equations
        //33: e.Assigns
        //44: t.Svar

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
          // </41 & Solve-TermEquation$2?2/45 (/48 # Var/50 's'/51 e.Hindex/46 )/49 >/42
          context[43] = 0;
          context[44] = 0;
          context[45] = refalrts::call_left( context[43], context[44], context[41], context[42] );
          context[46] = 0;
          context[47] = 0;
          context[48] = refalrts::brackets_left( context[46], context[47], context[43], context[44] );
          if( ! context[48] )
            continue;
          refalrts::bracket_pointers(context[48], context[49]);
          context[50] = refalrts::ident_left( identifiers[ident_Var], context[46], context[47] );
          if( ! context[50] )
            continue;
          context[51] = refalrts::char_left( 's', context[46], context[47] );
          if( ! context[51] )
            continue;
          if( ! refalrts::empty_seq( context[43], context[44] ) )
            continue;
          // closed e.Hindex as range 46
          //DEBUG: t.Symbol: 11
          //DEBUG: t.Svar: 13
          //DEBUG: e.UsedVars: 27
          //DEBUG: e.Contrs: 29
          //DEBUG: e.Equations: 31
          //DEBUG: e.Assigns: 33
          //DEBUG: e.Hindex: 46

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} </0 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} </35 & Solve-TermEquation$2?1/39 # True/40 >/36 </41 & Solve-TermEquation$2?2/45 (/48 # Var/50 {REMOVED TILE} e.Hindex/46 )/49 {REMOVED TILE}
          //RESULT: Tile{ [[ } Tile{ HalfReuse: # Success/4 AsIs: (/9 AsIs: e.UsedVars/27 AsIs: )/10 } Tile{ AsIs: (/21 AsIs: e.Contrs/29 AsIs: )/22 AsIs: e.Equations/31 AsIs: (/25 AsIs: e.Assigns/33 HalfReuse: (/26 } Tile{ AsIs: t.Symbol/11 } Tile{ Reuse: ':'/51 } Tile{ AsIs: t.Svar/13 } Tile{ HalfReuse: )/42 HalfReuse: )/1 ]] }
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
          res = refalrts::splice_elem( res, context[51] );
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
      // </0 & Solve-TermEquation/4 (/9 e.UsedVars/27 )/10 t.PSvar/11 t.HSvar/13 (/21 e.Contrs/29 )/22 e.Equations/31 (/25 e.Assigns/33 )/26 >/1
      context[27] = context[15];
      context[28] = context[16];
      context[29] = context[19];
      context[30] = context[20];
      context[31] = context[17];
      context[32] = context[18];
      context[33] = context[23];
      context[34] = context[24];
      // closed e.UsedVars as range 27
      // closed e.Contrs as range 29
      // closed e.Equations as range 31
      // closed e.Assigns as range 33
      //DEBUG: t.PSvar: 11
      //DEBUG: t.HSvar: 13
      //DEBUG: e.UsedVars: 27
      //DEBUG: e.Contrs: 29
      //DEBUG: e.Equations: 31
      //DEBUG: e.Assigns: 33
      //11: t.PSvar
      //13: t.HSvar
      //27: e.UsedVars
      //29: e.Contrs
      //31: e.Equations
      //33: e.Assigns
      //38: t.PSvar
      //39: t.HSvar

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
        // </35 & Solve-TermEquation$3?1/39 (/42 # Var/44 's'/45 e.Pindex/40 )/43 (/48 # Var/50 's'/51 e.Hindex/46 )/49 >/36
        context[37] = 0;
        context[38] = 0;
        context[39] = refalrts::call_left( context[37], context[38], context[35], context[36] );
        context[40] = 0;
        context[41] = 0;
        context[42] = refalrts::brackets_left( context[40], context[41], context[37], context[38] );
        if( ! context[42] )
          continue;
        refalrts::bracket_pointers(context[42], context[43]);
        context[44] = refalrts::ident_left( identifiers[ident_Var], context[40], context[41] );
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
        context[50] = refalrts::ident_left( identifiers[ident_Var], context[46], context[47] );
        if( ! context[50] )
          continue;
        context[51] = refalrts::char_left( 's', context[46], context[47] );
        if( ! context[51] )
          continue;
        if( ! refalrts::empty_seq( context[37], context[38] ) )
          continue;
        // closed e.Pindex as range 40
        // closed e.Hindex as range 46
        //DEBUG: t.PSvar: 11
        //DEBUG: t.HSvar: 13
        //DEBUG: e.UsedVars: 27
        //DEBUG: e.Contrs: 29
        //DEBUG: e.Equations: 31
        //DEBUG: e.Assigns: 33
        //DEBUG: e.Pindex: 40
        //DEBUG: e.Hindex: 46

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} </35 & Solve-TermEquation$3?1/39 (/42 # Var/44 {REMOVED TILE} e.Pindex/40 )/43 (/48 # Var/50 's'/51 e.Hindex/46 )/49 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: # Success/4 AsIs: (/9 AsIs: e.UsedVars/27 AsIs: )/10 } Tile{ AsIs: (/21 AsIs: e.Contrs/29 AsIs: )/22 AsIs: e.Equations/31 AsIs: (/25 AsIs: e.Assigns/33 HalfReuse: (/26 } Tile{ AsIs: t.PSvar/11 } Tile{ Reuse: ':'/45 } Tile{ AsIs: t.HSvar/13 } Tile{ HalfReuse: )/36 HalfReuse: )/1 ]] }
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
        res = refalrts::splice_elem( res, context[45] );
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
      // </0 & Solve-TermEquation/4 (/9 e.UsedVars/27 )/10 t.Svar/11 t.Symbol/13 (/21 e.Contrs/29 )/22 e.Equations/31 (/25 e.Assigns/33 )/26 >/1
      context[27] = context[15];
      context[28] = context[16];
      context[29] = context[19];
      context[30] = context[20];
      context[31] = context[17];
      context[32] = context[18];
      context[33] = context[23];
      context[34] = context[24];
      // closed e.UsedVars as range 27
      // closed e.Contrs as range 29
      // closed e.Equations as range 31
      // closed e.Assigns as range 33
      //DEBUG: t.Svar: 11
      //DEBUG: t.Symbol: 13
      //DEBUG: e.UsedVars: 27
      //DEBUG: e.Contrs: 29
      //DEBUG: e.Equations: 31
      //DEBUG: e.Assigns: 33
      //11: t.Svar
      //13: t.Symbol
      //27: e.UsedVars
      //29: e.Contrs
      //31: e.Equations
      //33: e.Assigns
      //38: t.Svar

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
        // </35 & Solve-TermEquation$4?1/39 (/42 # Var/44 's'/45 e.Pindex/40 )/43 >/36
        context[37] = 0;
        context[38] = 0;
        context[39] = refalrts::call_left( context[37], context[38], context[35], context[36] );
        context[40] = 0;
        context[41] = 0;
        context[42] = refalrts::brackets_left( context[40], context[41], context[37], context[38] );
        if( ! context[42] )
          continue;
        refalrts::bracket_pointers(context[42], context[43]);
        context[44] = refalrts::ident_left( identifiers[ident_Var], context[40], context[41] );
        if( ! context[44] )
          continue;
        context[45] = refalrts::char_left( 's', context[40], context[41] );
        if( ! context[45] )
          continue;
        if( ! refalrts::empty_seq( context[37], context[38] ) )
          continue;
        // closed e.Pindex as range 40
        //DEBUG: t.Svar: 11
        //DEBUG: t.Symbol: 13
        //DEBUG: e.UsedVars: 27
        //DEBUG: e.Contrs: 29
        //DEBUG: e.Equations: 31
        //DEBUG: e.Assigns: 33
        //DEBUG: e.Pindex: 40
        //11: t.Svar
        //13: t.Symbol
        //27: e.UsedVars
        //29: e.Contrs
        //31: e.Equations
        //33: e.Assigns
        //40: e.Pindex
        //51: t.Symbol

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
          //DEBUG: t.Svar: 11
          //DEBUG: t.Symbol: 13
          //DEBUG: e.UsedVars: 27
          //DEBUG: e.Contrs: 29
          //DEBUG: e.Equations: 31
          //DEBUG: e.Assigns: 33
          //DEBUG: e.Pindex: 40

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} (/9 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} (/25 {REMOVED TILE} {REMOVED TILE} & Solve-TermEquation$4?1/39 {REMOVED TILE} # Var/44 's'/45 e.Pindex/40 {REMOVED TILE} >/36 </46 & Solve-TermEquation$4?2/50 # True/51 >/47 {REMOVED TILE}
          //RESULT: Tile{ [[ HalfReuse: # Success/0 HalfReuse: (/4 } Tile{ AsIs: e.UsedVars/27 } Tile{ AsIs: )/26 AsIs: </35 } Tile{ HalfReuse: & AddContraction@3/10 AsIs: t.Svar/11 AsIs: t.Symbol/13 AsIs: (/21 AsIs: e.Contrs/29 AsIs: )/22 } Tile{ AsIs: (/42 } Tile{ AsIs: e.Equations/31 } Tile{ AsIs: )/43 } Tile{ AsIs: e.Assigns/33 } Tile{ AsIs: >/1 ]] }
          refalrts::reinit_ident(context[0], identifiers[ident_Success]);
          refalrts::reinit_open_bracket(context[4]);
          refalrts::reinit_name(context[10], functions[efunc_gen_AddContraction_Z3]);
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[35] );
          refalrts::link_brackets( context[42], context[43] );
          refalrts::link_brackets( context[21], context[22] );
          refalrts::link_brackets( context[4], context[26] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[1];
          res = refalrts::splice_evar( res, context[33], context[34] );
          res = refalrts::splice_elem( res, context[43] );
          res = refalrts::splice_evar( res, context[31], context[32] );
          res = refalrts::splice_elem( res, context[42] );
          res = refalrts::splice_evar( res, context[10], context[22] );
          res = refalrts::splice_evar( res, context[26], context[35] );
          res = refalrts::splice_evar( res, context[27], context[28] );
          refalrts::splice_to_freelist_open( vm, context[4], res );
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
      // </0 & Solve-TermEquation/4 (/9 e.UsedVars/27 )/10 t.PVar/11 t.HVar/13 (/21 e.Contrs/29 )/22 e.Equations/31 (/25 e.Assigns/33 )/26 >/1
      context[27] = context[15];
      context[28] = context[16];
      context[29] = context[19];
      context[30] = context[20];
      context[31] = context[17];
      context[32] = context[18];
      context[33] = context[23];
      context[34] = context[24];
      // closed e.UsedVars as range 27
      // closed e.Contrs as range 29
      // closed e.Equations as range 31
      // closed e.Assigns as range 33
      //DEBUG: t.PVar: 11
      //DEBUG: t.HVar: 13
      //DEBUG: e.UsedVars: 27
      //DEBUG: e.Contrs: 29
      //DEBUG: e.Equations: 31
      //DEBUG: e.Assigns: 33
      //11: t.PVar
      //13: t.HVar
      //27: e.UsedVars
      //29: e.Contrs
      //31: e.Equations
      //33: e.Assigns
      //38: t.HVar

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
        // </35 & Solve-TermEquation$5?1/39 (/42 # Var/44 't'/45 e.Tindex/40 )/43 >/36
        context[37] = 0;
        context[38] = 0;
        context[39] = refalrts::call_left( context[37], context[38], context[35], context[36] );
        context[40] = 0;
        context[41] = 0;
        context[42] = refalrts::brackets_left( context[40], context[41], context[37], context[38] );
        if( ! context[42] )
          continue;
        refalrts::bracket_pointers(context[42], context[43]);
        context[44] = refalrts::ident_left( identifiers[ident_Var], context[40], context[41] );
        if( ! context[44] )
          continue;
        context[45] = refalrts::char_left( 't', context[40], context[41] );
        if( ! context[45] )
          continue;
        if( ! refalrts::empty_seq( context[37], context[38] ) )
          continue;
        // closed e.Tindex as range 40
        //DEBUG: t.PVar: 11
        //DEBUG: t.HVar: 13
        //DEBUG: e.UsedVars: 27
        //DEBUG: e.Contrs: 29
        //DEBUG: e.Equations: 31
        //DEBUG: e.Assigns: 33
        //DEBUG: e.Tindex: 40

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 {REMOVED TILE} {REMOVED TILE} t.HVar/13 {REMOVED TILE} </35 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: # Success/4 AsIs: (/9 AsIs: e.UsedVars/27 AsIs: )/10 } Tile{ AsIs: (/21 AsIs: e.Contrs/29 AsIs: )/22 AsIs: e.Equations/31 AsIs: (/25 AsIs: e.Assigns/33 HalfReuse: (/26 } Tile{ AsIs: t.PVar/11 } Tile{ HalfReuse: ':'/39 AsIs: (/42 AsIs: # Var/44 AsIs: 't'/45 AsIs: e.Tindex/40 AsIs: )/43 HalfReuse: )/36 HalfReuse: )/1 ]] }
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
      // </0 & Solve-TermEquation/4 (/9 e.new17/27 )/10 t.new11/11 (/13 s.new12/37 e.new13/35 )/14 (/21 e.new15/29 )/22 e.new14/31 (/25 e.new16/33 )/26 >/1
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
      // closed e.new17 as range 27
      // closed e.new15 as range 29
      // closed e.new14 as range 31
      // closed e.new16 as range 33
      if( ! refalrts::svar_left( context[37], context[35], context[36] ) )
        continue;
      // closed e.new13 as range 35
      do {
        // </0 & Solve-TermEquation/4 (/9 e.UsedVars/38 )/10 t.PTvar/11 (/13 # Brackets/37 e.HBody/40 )/14 (/21 e.Contrs/42 )/22 e.Equations/44 (/25 e.Assigns/46 )/26 >/1
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
        // closed e.UsedVars as range 38
        // closed e.HBody as range 40
        // closed e.Contrs as range 42
        // closed e.Equations as range 44
        // closed e.Assigns as range 46
        //DEBUG: t.PTvar: 11
        //DEBUG: e.UsedVars: 38
        //DEBUG: e.HBody: 40
        //DEBUG: e.Contrs: 42
        //DEBUG: e.Equations: 44
        //DEBUG: e.Assigns: 46
        //11: t.PTvar
        //38: e.UsedVars
        //40: e.HBody
        //42: e.Contrs
        //44: e.Equations
        //46: e.Assigns
        //51: t.PTvar

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
          // </48 & Solve-TermEquation$6?1/52 (/55 # Var/57 't'/58 e.Pindex/53 )/56 >/49
          context[50] = 0;
          context[51] = 0;
          context[52] = refalrts::call_left( context[50], context[51], context[48], context[49] );
          context[53] = 0;
          context[54] = 0;
          context[55] = refalrts::brackets_left( context[53], context[54], context[50], context[51] );
          if( ! context[55] )
            continue;
          refalrts::bracket_pointers(context[55], context[56]);
          context[57] = refalrts::ident_left( identifiers[ident_Var], context[53], context[54] );
          if( ! context[57] )
            continue;
          context[58] = refalrts::char_left( 't', context[53], context[54] );
          if( ! context[58] )
            continue;
          if( ! refalrts::empty_seq( context[50], context[51] ) )
            continue;
          // closed e.Pindex as range 53
          //DEBUG: t.PTvar: 11
          //DEBUG: e.UsedVars: 38
          //DEBUG: e.HBody: 40
          //DEBUG: e.Contrs: 42
          //DEBUG: e.Equations: 44
          //DEBUG: e.Assigns: 46
          //DEBUG: e.Pindex: 53

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} # Var/57 't'/58 e.Pindex/53 {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 Reuse: & Solve-TermEquation$6=2/4 } Tile{ AsIs: t.PTvar/11 } Tile{ AsIs: (/21 AsIs: e.Contrs/42 AsIs: )/22 } Tile{ AsIs: (/9 } Tile{ AsIs: e.Equations/44 } Tile{ HalfReuse: )/13 HalfReuse: (/37 AsIs: e.HBody/40 AsIs: )/14 } Tile{ AsIs: (/25 AsIs: e.Assigns/46 AsIs: )/26 AsIs: </48 Reuse: & NewVarName/52 AsIs: (/55 } Tile{ AsIs: e.UsedVars/38 } Tile{ AsIs: )/10 } Tile{ HalfReuse: 'e'/56 AsIs: >/49 AsIs: >/1 ]] }
          refalrts::update_name(context[4], functions[efunc_gen_Solvem_TermEquation_S6A2]);
          refalrts::reinit_close_bracket(context[13]);
          refalrts::reinit_open_bracket(context[37]);
          refalrts::update_name(context[52], functions[efunc_NewVarName]);
          refalrts::reinit_char(context[56], 'e');
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[0] );
          refalrts::push_stack( vm, context[49] );
          refalrts::push_stack( vm, context[48] );
          refalrts::link_brackets( context[55], context[10] );
          refalrts::link_brackets( context[25], context[26] );
          refalrts::link_brackets( context[37], context[14] );
          refalrts::link_brackets( context[9], context[13] );
          refalrts::link_brackets( context[21], context[22] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[56];
          res = refalrts::splice_elem( res, context[10] );
          res = refalrts::splice_evar( res, context[38], context[39] );
          res = refalrts::splice_evar( res, context[25], context[55] );
          res = refalrts::splice_evar( res, context[13], context[14] );
          res = refalrts::splice_evar( res, context[44], context[45] );
          res = refalrts::splice_elem( res, context[9] );
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

      // </0 & Solve-TermEquation/4 (/9 e.UsedVars/38 )/10 t.PTvar/11 (/13 # ADT-Brackets/37 (/50 e.Name/48 )/51 e.HBody/40 )/14 (/21 e.Contrs/42 )/22 e.Equations/44 (/25 e.Assigns/46 )/26 >/1
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
      // closed e.UsedVars as range 38
      // closed e.Name as range 48
      // closed e.HBody as range 40
      // closed e.Contrs as range 42
      // closed e.Equations as range 44
      // closed e.Assigns as range 46
      //DEBUG: t.PTvar: 11
      //DEBUG: e.UsedVars: 38
      //DEBUG: e.Name: 48
      //DEBUG: e.HBody: 40
      //DEBUG: e.Contrs: 42
      //DEBUG: e.Equations: 44
      //DEBUG: e.Assigns: 46
      //11: t.PTvar
      //38: e.UsedVars
      //40: e.HBody
      //42: e.Contrs
      //44: e.Equations
      //46: e.Assigns
      //48: e.Name
      //55: t.PTvar

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
        // </52 & Solve-TermEquation$7?1/56 (/59 # Var/61 't'/62 e.Pindex/57 )/60 >/53
        context[54] = 0;
        context[55] = 0;
        context[56] = refalrts::call_left( context[54], context[55], context[52], context[53] );
        context[57] = 0;
        context[58] = 0;
        context[59] = refalrts::brackets_left( context[57], context[58], context[54], context[55] );
        if( ! context[59] )
          continue;
        refalrts::bracket_pointers(context[59], context[60]);
        context[61] = refalrts::ident_left( identifiers[ident_Var], context[57], context[58] );
        if( ! context[61] )
          continue;
        context[62] = refalrts::char_left( 't', context[57], context[58] );
        if( ! context[62] )
          continue;
        if( ! refalrts::empty_seq( context[54], context[55] ) )
          continue;
        // closed e.Pindex as range 57
        //DEBUG: t.PTvar: 11
        //DEBUG: e.UsedVars: 38
        //DEBUG: e.Name: 48
        //DEBUG: e.HBody: 40
        //DEBUG: e.Contrs: 42
        //DEBUG: e.Equations: 44
        //DEBUG: e.Assigns: 46
        //DEBUG: e.Pindex: 57

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} # Var/61 't'/62 e.Pindex/57 {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & Solve-TermEquation$7=2/4 } Tile{ AsIs: t.PTvar/11 AsIs: (/13 } Tile{ AsIs: e.Name/48 } Tile{ AsIs: )/14 AsIs: (/21 AsIs: e.Contrs/42 AsIs: )/22 } Tile{ AsIs: (/9 } Tile{ AsIs: e.Equations/44 } Tile{ HalfReuse: )/37 AsIs: (/50 } Tile{ AsIs: e.HBody/40 } Tile{ AsIs: )/51 } Tile{ AsIs: (/25 AsIs: e.Assigns/46 AsIs: )/26 AsIs: </52 Reuse: & NewVarName/56 AsIs: (/59 } Tile{ AsIs: e.UsedVars/38 } Tile{ AsIs: )/10 } Tile{ HalfReuse: 'e'/60 AsIs: >/53 AsIs: >/1 ]] }
        refalrts::update_name(context[4], functions[efunc_gen_Solvem_TermEquation_S7A2]);
        refalrts::reinit_close_bracket(context[37]);
        refalrts::update_name(context[56], functions[efunc_NewVarName]);
        refalrts::reinit_char(context[60], 'e');
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::push_stack( vm, context[53] );
        refalrts::push_stack( vm, context[52] );
        refalrts::link_brackets( context[59], context[10] );
        refalrts::link_brackets( context[25], context[26] );
        refalrts::link_brackets( context[50], context[51] );
        refalrts::link_brackets( context[9], context[37] );
        refalrts::link_brackets( context[21], context[22] );
        refalrts::link_brackets( context[13], context[14] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[60];
        res = refalrts::splice_elem( res, context[10] );
        res = refalrts::splice_evar( res, context[38], context[39] );
        res = refalrts::splice_evar( res, context[25], context[59] );
        res = refalrts::splice_elem( res, context[51] );
        res = refalrts::splice_evar( res, context[40], context[41] );
        res = refalrts::splice_evar( res, context[37], context[50] );
        res = refalrts::splice_evar( res, context[44], context[45] );
        res = refalrts::splice_elem( res, context[9] );
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
      // </0 & Solve-TermEquation/4 (/9 e.UsedVars/27 )/10 t.PTvar/11 t.Symbol/13 (/21 e.Contrs/29 )/22 e.Equations/31 (/25 e.Assigns/33 )/26 >/1
      context[27] = context[15];
      context[28] = context[16];
      context[29] = context[19];
      context[30] = context[20];
      context[31] = context[17];
      context[32] = context[18];
      context[33] = context[23];
      context[34] = context[24];
      // closed e.UsedVars as range 27
      // closed e.Contrs as range 29
      // closed e.Equations as range 31
      // closed e.Assigns as range 33
      //DEBUG: t.PTvar: 11
      //DEBUG: t.Symbol: 13
      //DEBUG: e.UsedVars: 27
      //DEBUG: e.Contrs: 29
      //DEBUG: e.Equations: 31
      //DEBUG: e.Assigns: 33
      //11: t.PTvar
      //13: t.Symbol
      //27: e.UsedVars
      //29: e.Contrs
      //31: e.Equations
      //33: e.Assigns
      //38: t.PTvar
      //39: t.Symbol

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
        // </35 & Solve-TermEquation$8?1/39 (/42 # Var/44 't'/45 e.Pindex/40 )/43 (/48 # Symbol/50 s.Type/51 e.Info/46 )/49 >/36
        context[37] = 0;
        context[38] = 0;
        context[39] = refalrts::call_left( context[37], context[38], context[35], context[36] );
        context[40] = 0;
        context[41] = 0;
        context[42] = refalrts::brackets_left( context[40], context[41], context[37], context[38] );
        if( ! context[42] )
          continue;
        refalrts::bracket_pointers(context[42], context[43]);
        context[44] = refalrts::ident_left( identifiers[ident_Var], context[40], context[41] );
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
        // closed e.Pindex as range 40
        if( ! refalrts::svar_left( context[51], context[46], context[47] ) )
          continue;
        // closed e.Info as range 46
        //DEBUG: t.PTvar: 11
        //DEBUG: t.Symbol: 13
        //DEBUG: e.UsedVars: 27
        //DEBUG: e.Contrs: 29
        //DEBUG: e.Equations: 31
        //DEBUG: e.Assigns: 33
        //DEBUG: e.Pindex: 40
        //DEBUG: s.Type: 51
        //DEBUG: e.Info: 46

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} (/9 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} (/25 {REMOVED TILE} {REMOVED TILE} & Solve-TermEquation$8?1/39 (/42 # Var/44 't'/45 e.Pindex/40 )/43 {REMOVED TILE} # Symbol/50 s.Type/51 e.Info/46 {REMOVED TILE} >/36 {REMOVED TILE}
        //RESULT: Tile{ [[ HalfReuse: # Success/0 HalfReuse: (/4 } Tile{ AsIs: e.UsedVars/27 } Tile{ AsIs: )/26 AsIs: </35 } Tile{ HalfReuse: & AddContraction@3/10 AsIs: t.PTvar/11 AsIs: t.Symbol/13 AsIs: (/21 AsIs: e.Contrs/29 AsIs: )/22 } Tile{ AsIs: (/48 } Tile{ AsIs: e.Equations/31 } Tile{ AsIs: )/49 } Tile{ AsIs: e.Assigns/33 } Tile{ AsIs: >/1 ]] }
        refalrts::reinit_ident(context[0], identifiers[ident_Success]);
        refalrts::reinit_open_bracket(context[4]);
        refalrts::reinit_name(context[10], functions[efunc_gen_AddContraction_Z3]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[35] );
        refalrts::link_brackets( context[48], context[49] );
        refalrts::link_brackets( context[21], context[22] );
        refalrts::link_brackets( context[4], context[26] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[33], context[34] );
        res = refalrts::splice_elem( res, context[49] );
        res = refalrts::splice_evar( res, context[31], context[32] );
        res = refalrts::splice_elem( res, context[48] );
        res = refalrts::splice_evar( res, context[10], context[22] );
        res = refalrts::splice_evar( res, context[26], context[35] );
        res = refalrts::splice_evar( res, context[27], context[28] );
        refalrts::splice_to_freelist_open( vm, context[4], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      refalrts::splice_to_freelist(vm, context[35], context[36]);
      continue;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Solve-TermEquation/4 (/9 e.UsedVars/27 )/10 t.PTvar/11 t.HSvar/13 (/21 e.Contrs/29 )/22 e.Equations/31 (/25 e.Assigns/33 )/26 >/1
      context[27] = context[15];
      context[28] = context[16];
      context[29] = context[19];
      context[30] = context[20];
      context[31] = context[17];
      context[32] = context[18];
      context[33] = context[23];
      context[34] = context[24];
      // closed e.UsedVars as range 27
      // closed e.Contrs as range 29
      // closed e.Equations as range 31
      // closed e.Assigns as range 33
      //DEBUG: t.PTvar: 11
      //DEBUG: t.HSvar: 13
      //DEBUG: e.UsedVars: 27
      //DEBUG: e.Contrs: 29
      //DEBUG: e.Equations: 31
      //DEBUG: e.Assigns: 33
      //11: t.PTvar
      //13: t.HSvar
      //27: e.UsedVars
      //29: e.Contrs
      //31: e.Equations
      //33: e.Assigns
      //38: t.PTvar
      //39: t.HSvar

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
        // </35 & Solve-TermEquation$9?1/39 (/42 # Var/44 't'/45 e.Pindex/40 )/43 (/48 # Var/50 's'/51 e.Hindex/46 )/49 >/36
        context[37] = 0;
        context[38] = 0;
        context[39] = refalrts::call_left( context[37], context[38], context[35], context[36] );
        context[40] = 0;
        context[41] = 0;
        context[42] = refalrts::brackets_left( context[40], context[41], context[37], context[38] );
        if( ! context[42] )
          continue;
        refalrts::bracket_pointers(context[42], context[43]);
        context[44] = refalrts::ident_left( identifiers[ident_Var], context[40], context[41] );
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
        context[50] = refalrts::ident_left( identifiers[ident_Var], context[46], context[47] );
        if( ! context[50] )
          continue;
        context[51] = refalrts::char_left( 's', context[46], context[47] );
        if( ! context[51] )
          continue;
        if( ! refalrts::empty_seq( context[37], context[38] ) )
          continue;
        // closed e.Pindex as range 40
        // closed e.Hindex as range 46
        //DEBUG: t.PTvar: 11
        //DEBUG: t.HSvar: 13
        //DEBUG: e.UsedVars: 27
        //DEBUG: e.Contrs: 29
        //DEBUG: e.Equations: 31
        //DEBUG: e.Assigns: 33
        //DEBUG: e.Pindex: 40
        //DEBUG: e.Hindex: 46

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} # Var/44 't'/45 e.Pindex/40 {REMOVED TILE} (/48 # Var/50 {REMOVED TILE} >/1 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ AsIs: </35 Reuse: & Solve-TermEquation$9=2/39 } Tile{ AsIs: t.PTvar/11 } Tile{ AsIs: (/21 AsIs: e.Contrs/29 AsIs: )/22 } Tile{ AsIs: (/42 } Tile{ AsIs: e.Equations/31 } Tile{ AsIs: )/43 } Tile{ AsIs: (/25 AsIs: e.Assigns/33 AsIs: )/26 } Tile{ AsIs: t.HSvar/13 } Tile{ AsIs: </0 Reuse: & NewVarName/4 AsIs: (/9 AsIs: e.UsedVars/27 AsIs: )/10 } Tile{ AsIs: 's'/51 AsIs: e.Hindex/46 HalfReuse: >/49 AsIs: >/36 } Tile{ ]] }
        refalrts::update_name(context[39], functions[efunc_gen_Solvem_TermEquation_S9A2]);
        refalrts::update_name(context[4], functions[efunc_NewVarName]);
        refalrts::reinit_close_call(context[49]);
        refalrts::push_stack( vm, context[36] );
        refalrts::push_stack( vm, context[35] );
        refalrts::push_stack( vm, context[49] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[9], context[10] );
        refalrts::link_brackets( context[25], context[26] );
        refalrts::link_brackets( context[42], context[43] );
        refalrts::link_brackets( context[21], context[22] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[51], context[36] );
        res = refalrts::splice_evar( res, context[0], context[10] );
        res = refalrts::splice_evar( res, context[13], context[14] );
        res = refalrts::splice_evar( res, context[25], context[26] );
        res = refalrts::splice_elem( res, context[43] );
        res = refalrts::splice_evar( res, context[31], context[32] );
        res = refalrts::splice_elem( res, context[42] );
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

    // </0 & Solve-TermEquation/4 (/9 e.new18/27 )/10 (/11 s.new11/39 e.new12/35 )/12 (/13 s.new13/40 e.new14/37 )/14 (/21 e.new16/29 )/22 e.new15/31 (/25 e.new17/33 )/26 >/1
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
    // closed e.new18 as range 27
    // closed e.new16 as range 29
    // closed e.new15 as range 31
    // closed e.new17 as range 33
    if( ! refalrts::svar_left( context[39], context[35], context[36] ) )
      continue;
    // closed e.new12 as range 35
    if( ! refalrts::svar_left( context[40], context[37], context[38] ) )
      continue;
    // closed e.new14 as range 37
    do {
      // </0 & Solve-TermEquation/4 (/9 e.UsedVars/41 )/10 (/11 # Brackets/39 e.TBody/43 )/12 (/13 # Brackets/40 e.HBody/45 )/14 (/21 e.Contrs/47 )/22 e.Equations/49 (/25 e.Assigns/51 )/26 >/1
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
      // closed e.UsedVars as range 41
      // closed e.TBody as range 43
      // closed e.HBody as range 45
      // closed e.Contrs as range 47
      // closed e.Equations as range 49
      // closed e.Assigns as range 51
      //DEBUG: e.UsedVars: 41
      //DEBUG: e.TBody: 43
      //DEBUG: e.HBody: 45
      //DEBUG: e.Contrs: 47
      //DEBUG: e.Equations: 49
      //DEBUG: e.Assigns: 51

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: # Success/4 AsIs: (/9 AsIs: e.UsedVars/41 AsIs: )/10 } Tile{ HalfReuse: (/1 } Tile{ AsIs: e.Contrs/47 } Tile{ AsIs: )/22 } Tile{ AsIs: e.Equations/49 } Tile{ AsIs: (/11 HalfReuse: (/39 AsIs: e.TBody/43 AsIs: )/12 HalfReuse: ':'/13 HalfReuse: (/40 AsIs: e.HBody/45 AsIs: )/14 HalfReuse: )/21 } Tile{ AsIs: (/25 AsIs: e.Assigns/51 AsIs: )/26 } Tile{ ]] }
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
      res = refalrts::splice_elem( res, context[22] );
      res = refalrts::splice_evar( res, context[47], context[48] );
      res = refalrts::splice_elem( res, context[1] );
      res = refalrts::splice_evar( res, context[4], context[10] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Solve-TermEquation/4 (/9 e.UsedVars/41 )/10 (/11 # ADT-Brackets/39 (/55 e.Name/53 )/56 e.TBody/43 )/12 (/13 # ADT-Brackets/40 (/59 e.Name/61 )/60 e.HBody/45 )/14 (/21 e.Contrs/47 )/22 e.Equations/49 (/25 e.Assigns/51 )/26 >/1
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
    // closed e.UsedVars as range 41
    // closed e.Name as range 53
    if( ! refalrts::repeated_evar_left( vm, context[61], context[62], context[53], context[54], context[57], context[58] ) )
      continue;
    if( ! refalrts::empty_seq( context[57], context[58] ) )
      continue;
    // closed e.TBody as range 43
    // closed e.HBody as range 45
    // closed e.Contrs as range 47
    // closed e.Equations as range 49
    // closed e.Assigns as range 51
    //DEBUG: e.UsedVars: 41
    //DEBUG: e.Name: 53
    //DEBUG: e.TBody: 43
    //DEBUG: e.HBody: 45
    //DEBUG: e.Contrs: 47
    //DEBUG: e.Equations: 49
    //DEBUG: e.Assigns: 51

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} (/9 {REMOVED TILE} {REMOVED TILE} # ADT-Brackets/39 (/55 e.Name/53 {REMOVED TILE} (/59 e.Name/61 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} )/26 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: # Success/0 HalfReuse: (/4 } Tile{ AsIs: e.UsedVars/41 } Tile{ AsIs: )/14 AsIs: (/21 AsIs: e.Contrs/47 AsIs: )/22 AsIs: e.Equations/49 AsIs: (/25 } Tile{ HalfReuse: (/56 AsIs: e.TBody/43 AsIs: )/12 HalfReuse: ':'/13 HalfReuse: (/40 } Tile{ AsIs: e.HBody/45 } Tile{ AsIs: )/60 } Tile{ AsIs: )/10 AsIs: (/11 } Tile{ AsIs: e.Assigns/51 } Tile{ HalfReuse: )/1 ]] }
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
    res = refalrts::splice_elem( res, context[60] );
    res = refalrts::splice_evar( res, context[45], context[46] );
    res = refalrts::splice_evar( res, context[56], context[40] );
    res = refalrts::splice_evar( res, context[14], context[25] );
    res = refalrts::splice_evar( res, context[41], context[42] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Solve-TermEquation/4 e.Other/2 >/1
  // closed e.Other as range 2
  //DEBUG: e.Other: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Solve-TermEquation/4 e.Other/2 {REMOVED TILE}
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
  // </0 & IsTerm/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & IsTerm/4 t.new1/5 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & IsTerm/4 (/5 s.new2/9 e.new3/7 )/6 >/1
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
      continue;
    if( ! refalrts::svar_left( context[9], context[7], context[8] ) )
      continue;
    // closed e.new3 as range 7
    do {
      // </0 & IsTerm/4 (/5 # Var/9 'e'/12 e.Index/10 )/6 >/1
      context[10] = context[7];
      context[11] = context[8];
      if( ! refalrts::ident_term( identifiers[ident_Var], context[9] ) )
        continue;
      context[12] = refalrts::char_left( 'e', context[10], context[11] );
      if( ! context[12] )
        continue;
      // closed e.Index as range 10
      //DEBUG: e.Index: 10

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & IsTerm/4 (/5 # Var/9 'e'/12 e.Index/10 )/6 {REMOVED TILE}
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
      // </0 & IsTerm/4 (/5 # CallBrackets/9 e.Nested/10 )/6 >/1
      context[10] = context[7];
      context[11] = context[8];
      if( ! refalrts::ident_term( identifiers[ident_CallBrackets], context[9] ) )
        continue;
      // closed e.Nested as range 10
      //DEBUG: e.Nested: 10

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & IsTerm/4 (/5 # CallBrackets/9 e.Nested/10 )/6 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: # False/1 ]] }
      refalrts::reinit_ident(context[1], identifiers[ident_False]);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & IsTerm/4 (/5 # ColdCallBrackets/9 e.Nested/10 )/6 >/1
    context[10] = context[7];
    context[11] = context[8];
    if( ! refalrts::ident_term( identifiers[ident_ColdCallBrackets], context[9] ) )
      continue;
    // closed e.Nested as range 10
    //DEBUG: e.Nested: 10

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & IsTerm/4 (/5 # ColdCallBrackets/9 e.Nested/10 )/6 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # False/1 ]] }
    refalrts::reinit_ident(context[1], identifiers[ident_False]);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & IsTerm/4 t.OtherTerm/5 >/1
  //DEBUG: t.OtherTerm: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & IsTerm/4 t.OtherTerm/5 {REMOVED TILE}
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
  // issue here memory for vars with 33 elems
  refalrts::Iter context[33];
  refalrts::zeros( context, 33 );
  // </0 & AddContractions/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & AddContractions/4 (/7 e.new1/5 )/8 e.new2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new1 as range 5
  // closed e.new2 as range 2
  do {
    // </0 & AddContractions/4 (/7 t.toAdd/21 e.Rem/9 )/8 (/15 e.Contractions/13 )/16 e.Equations/11 (/19 e.Assigns/17 )/20 >/1
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
    // closed e.Contractions as range 13
    // closed e.Equations as range 11
    // closed e.Assigns as range 17
    context[22] = refalrts::tvar_left( context[21], context[9], context[10] );
    if( ! context[22] )
      continue;
    // closed e.Rem as range 9
    //DEBUG: e.Contractions: 13
    //DEBUG: e.Equations: 11
    //DEBUG: e.Assigns: 17
    //DEBUG: t.toAdd: 21
    //DEBUG: e.Rem: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & AddContractions/4 AsIs: (/7 } Tile{ AsIs: e.Rem/9 } Tile{ AsIs: )/8 AsIs: (/15 } Tile{ AsIs: e.Contractions/13 } Tile{ AsIs: t.toAdd/21 } Tile{ AsIs: )/16 } </23 & Map@15/24 t.toAdd/21/25 Tile{ AsIs: e.Equations/11 } >/27 Tile{ AsIs: (/19 } </28 & Map@16/29 t.toAdd/21/30 Tile{ AsIs: e.Assigns/17 } >/32 Tile{ AsIs: )/20 AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[23]);
    refalrts::alloc_name(vm, context[24], functions[efunc_gen_Map_Z15]);
    refalrts::copy_evar(vm, context[25], context[26], context[21], context[22]);
    refalrts::alloc_close_call(vm, context[27]);
    refalrts::alloc_open_call(vm, context[28]);
    refalrts::alloc_name(vm, context[29], functions[efunc_gen_Map_Z16]);
    refalrts::copy_evar(vm, context[30], context[31], context[21], context[22]);
    refalrts::alloc_close_call(vm, context[32]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[19], context[20] );
    refalrts::push_stack( vm, context[32] );
    refalrts::push_stack( vm, context[28] );
    refalrts::push_stack( vm, context[27] );
    refalrts::push_stack( vm, context[23] );
    refalrts::link_brackets( context[15], context[16] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[20];
    res = refalrts::splice_elem( res, context[32] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[28], context[31] );
    res = refalrts::splice_elem( res, context[19] );
    res = refalrts::splice_elem( res, context[27] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[23], context[26] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_evar( res, context[21], context[22] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[8], context[15] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & AddContractions/4 (/7 )/8 e.PRTC/2 >/1
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.PRTC as range 2
  //DEBUG: e.PRTC: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & AddContractions/4 (/7 )/8 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.PRTC/2 } Tile{ ]] }
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
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
  // </0 & AddContraction/4 t.toAdd/9 (/13 e.Contractions/11 )/14 e.Equations/2 (/7 e.Assigns/5 )/8 >/1
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
  // closed e.Assigns as range 5
  context[10] = refalrts::tvar_left( context[9], context[2], context[3] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  context[11] = 0;
  context[12] = 0;
  context[13] = refalrts::brackets_left( context[11], context[12], context[2], context[3] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[13], context[14]);
  // closed e.Contractions as range 11
  // closed e.Equations as range 2
  //DEBUG: e.Assigns: 5
  //DEBUG: t.toAdd: 9
  //DEBUG: e.Contractions: 11
  //DEBUG: e.Equations: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/13 } Tile{ AsIs: e.Contractions/11 } t.toAdd/9/15 Tile{ AsIs: )/14 } Tile{ AsIs: </0 Reuse: & Map@15/4 AsIs: t.toAdd/9 } Tile{ AsIs: e.Equations/2 } >/17 Tile{ AsIs: (/7 } </18 & Map@16/19 t.toAdd/9/20 Tile{ AsIs: e.Assigns/5 } Tile{ HalfReuse: >/8 HalfReuse: )/1 ]] }
  refalrts::copy_evar(vm, context[15], context[16], context[9], context[10]);
  refalrts::alloc_close_call(vm, context[17]);
  refalrts::alloc_open_call(vm, context[18]);
  refalrts::alloc_name(vm, context[19], functions[efunc_gen_Map_Z16]);
  refalrts::copy_evar(vm, context[20], context[21], context[9], context[10]);
  refalrts::update_name(context[4], functions[efunc_gen_Map_Z15]);
  refalrts::reinit_close_call(context[8]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[7], context[1] );
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[18] );
  refalrts::push_stack( vm, context[17] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[13], context[14] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[18], context[21] );
  res = refalrts::splice_elem( res, context[7] );
  res = refalrts::splice_elem( res, context[17] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[0], context[10] );
  res = refalrts::splice_elem( res, context[14] );
  res = refalrts::splice_evar( res, context[15], context[16] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_elem( res, context[13] );
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
  // </0 & ApplyContraction/4 t.Contraction/9 e.Equations/2 (/7 e.Assigns/5 )/8 >/1
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
  // closed e.Assigns as range 5
  context[10] = refalrts::tvar_left( context[9], context[2], context[3] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  // closed e.Equations as range 2
  //DEBUG: e.Assigns: 5
  //DEBUG: t.Contraction: 9
  //DEBUG: e.Equations: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map@15/4 AsIs: t.Contraction/9 AsIs: e.Equations/2 HalfReuse: >/7 } (/11 </12 & Map@16/13 t.Contraction/9/14 Tile{ AsIs: e.Assigns/5 } Tile{ HalfReuse: >/8 HalfReuse: )/1 ]] }
  refalrts::alloc_open_bracket(vm, context[11]);
  refalrts::alloc_open_call(vm, context[12]);
  refalrts::alloc_name(vm, context[13], functions[efunc_gen_Map_Z16]);
  refalrts::copy_evar(vm, context[14], context[15], context[9], context[10]);
  refalrts::update_name(context[4], functions[efunc_gen_Map_Z15]);
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
  // </0 & ApplyContraction-toAssign/4 t.Contraction/9 (/7 e.M/5 ':'/13 t.Rval/11 )/8 >/1
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
  // closed e.M as range 5
  //DEBUG: t.Contraction: 9
  //DEBUG: t.Rval: 11
  //DEBUG: e.M: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 } Tile{ AsIs: </0 Reuse: & ApplyContraction-toExpr/4 AsIs: t.Contraction/9 } Tile{ AsIs: e.M/5 } Tile{ AsIs: >/1 } Tile{ AsIs: ':'/13 AsIs: t.Rval/11 AsIs: )/8 } Tile{ ]] }
  refalrts::update_name(context[4], functions[efunc_ApplyContractionm_toExpr]);
  refalrts::link_brackets( context[7], context[8] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[13], context[8] );
  res = refalrts::splice_elem( res, context[1] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[0], context[10] );
  res = refalrts::splice_elem( res, context[7] );
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
  // </0 & ApplyContraction-toEquation/4 t.Contraction/18 (/7 (/11 e.Expr/9 )/12 ':'/13 (/16 e.Lexpr/14 )/17 )/8 >/1
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
  // closed e.Expr as range 9
  // closed e.Lexpr as range 14
  context[19] = refalrts::tvar_left( context[18], context[2], context[3] );
  if( ! context[19] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: e.Expr: 9
  //DEBUG: e.Lexpr: 14
  //DEBUG: t.Contraction: 18

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: (/11 } Tile{ AsIs: </0 Reuse: & ApplyContraction-toExpr/4 AsIs: t.Contraction/18 } Tile{ AsIs: e.Expr/9 } Tile{ AsIs: >/1 } Tile{ AsIs: )/12 AsIs: ':'/13 AsIs: (/16 AsIs: e.Lexpr/14 AsIs: )/17 AsIs: )/8 } Tile{ ]] }
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
  res = refalrts::splice_elem( res, context[1] );
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
  // </0 & ApplyContraction-toExpr/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & ApplyContraction-toExpr/4 t.new1/5 e.new2/2 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  // closed e.new2 as range 2
  do {
    // </0 & ApplyContraction-toExpr/4 (/5 t.Var/11 ':'/13 e.Lval/9 )/6 e.B/14 t.Var/18 e.E/16 >/1
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
    // closed e.Lval as range 9
    context[14] = 0;
    context[15] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[16] = context[7];
      context[17] = context[8];
      context[19] = refalrts::repeated_stvar_left( vm, context[18], context[11], context[16], context[17] );
      if( ! context[19] )
        continue;
      // closed e.E as range 16
      //DEBUG: t.Var: 11
      //DEBUG: e.Lval: 9
      //DEBUG: e.B: 14
      //DEBUG: e.E: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ApplyContraction-toExpr/4 AsIs: (/5 AsIs: t.Var/11 AsIs: ':'/13 AsIs: e.Lval/9 AsIs: )/6 } Tile{ AsIs: e.B/14 } >/20 e.Lval/9/21 </23 & ApplyContraction-toExpr/24 (/25 Tile{ AsIs: t.Var/18 } ':'/26 e.Lval/9/27 )/29 Tile{ AsIs: e.E/16 } Tile{ AsIs: >/1 ]] }
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
    // </0 & ApplyContraction-toExpr/4 t.Contraction/5 e.B/9 (/15 # Brackets/17 e.M/13 )/16 e.E/11 >/1
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
      // closed e.M as range 13
      // closed e.E as range 11
      //DEBUG: t.Contraction: 5
      //DEBUG: e.B: 9
      //DEBUG: e.M: 13
      //DEBUG: e.E: 11

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ApplyContraction-toExpr/4 AsIs: t.Contraction/5 AsIs: e.B/9 HalfReuse: >/15 HalfReuse: (/17 } # Brackets/18 </19 & ApplyContraction-toExpr/20 t.Contraction/5/21 Tile{ AsIs: e.M/13 } >/23 Tile{ AsIs: )/16 } </24 & ApplyContraction-toExpr/25 t.Contraction/5/26 Tile{ AsIs: e.E/11 } Tile{ AsIs: >/1 ]] }
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
      res = refalrts::splice_elem( res, context[16] );
      res = refalrts::splice_elem( res, context[23] );
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_evar( res, context[18], context[22] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[9], context[10], context[7], context[8] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & ApplyContraction-toExpr/4 t.Contraction/5 e.B/9 (/15 # ADT-Brackets/17 e.M/13 )/16 e.E/11 >/1
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
      // closed e.M as range 13
      // closed e.E as range 11
      //DEBUG: t.Contraction: 5
      //DEBUG: e.B: 9
      //DEBUG: e.M: 13
      //DEBUG: e.E: 11

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ApplyContraction-toExpr/4 AsIs: t.Contraction/5 AsIs: e.B/9 HalfReuse: >/15 HalfReuse: (/17 } # ADT-Brackets/18 </19 & ApplyContraction-toExpr/20 t.Contraction/5/21 Tile{ AsIs: e.M/13 } >/23 Tile{ AsIs: )/16 } </24 & ApplyContraction-toExpr/25 t.Contraction/5/26 Tile{ AsIs: e.E/11 } Tile{ AsIs: >/1 ]] }
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
      res = refalrts::splice_elem( res, context[16] );
      res = refalrts::splice_elem( res, context[23] );
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_evar( res, context[18], context[22] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[9], context[10], context[7], context[8] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ApplyContraction-toExpr/4 t.Contraction/5 e.Expr/2 >/1
  // closed e.Expr as range 2
  //DEBUG: t.Contraction: 5
  //DEBUG: e.Expr: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & ApplyContraction-toExpr/4 t.Contraction/5 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Expr/2 } Tile{ ]] }
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
  // </0 & IsFreeVariableSeq/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
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

  // </0 & IsFreeVariableSeq/4 t.new1/5 e.new2/2 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  // closed e.new2 as range 2
  do {
    // </0 & IsFreeVariableSeq/4 (/5 # Var/11 'e'/12 e.Idx/9 )/6 e.Rem/7 >/1
    context[7] = context[2];
    context[8] = context[3];
    context[9] = 0;
    context[10] = 0;
    if( ! refalrts::brackets_term( context[9], context[10], context[5] ) )
      continue;
    context[11] = refalrts::ident_left( identifiers[ident_Var], context[9], context[10] );
    if( ! context[11] )
      continue;
    context[12] = refalrts::char_left( 'e', context[9], context[10] );
    if( ! context[12] )
      continue;
    // closed e.Idx as range 9
    // closed e.Rem as range 7
    //DEBUG: e.Idx: 9
    //DEBUG: e.Rem: 7

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} & IsFreeVariableSeq/4 (/5 # Var/11 'e'/12 e.Idx/9 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 } Tile{ HalfReuse: & IsFreeVariableSeq/6 AsIs: e.Rem/7 AsIs: >/1 ]] }
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

  // </0 & IsFreeVariableSeq/4 t.Other/5 e.Rem/2 >/1
  // closed e.Rem as range 2
  //DEBUG: t.Other: 5
  //DEBUG: e.Rem: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & IsFreeVariableSeq/4 t.Other/5 e.Rem/2 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: # False/1 ]] }
  refalrts::reinit_ident(context[1], identifiers[ident_False]);
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_IsFreeVariableSeq("IsFreeVariableSeq", COOKIE1_, COOKIE2_, func_IsFreeVariableSeq);


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


static refalrts::FnResult func_gen_Map_Z1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
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
      // </0 & Map@1/4 (/7 e.2/11 ':'/18 (/15 # Var/17 e.3/13 )/16 )/8 e.Tail/9 >/1
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
      context[17] = refalrts::ident_left( identifiers[ident_Var], context[13], context[14] );
      if( ! context[17] )
        continue;
      context[18] = refalrts::char_right( ':', context[11], context[12] );
      if( ! context[18] )
        continue;
      // closed e.2 as range 11
      // closed e.3 as range 13
      // closed e.Tail as range 9
      //DEBUG: e.2: 11
      //DEBUG: e.3: 13
      //DEBUG: e.Tail: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} # Var/17 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.2/11 AsIs: ':'/18 AsIs: (/15 } Tile{ AsIs: e.3/13 } Tile{ HalfReuse: )/0 HalfReuse: )/4 } Tile{ HalfReuse: </16 HalfReuse: & Map@1/8 AsIs: e.Tail/9 AsIs: >/1 ]] }
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

    // </0 & Map@1/4 t.Next/7 e.Tail/9 >/1
    context[9] = context[5];
    context[10] = context[6];
    // closed e.Tail as range 9
    //DEBUG: t.Next: 7
    //DEBUG: e.Tail: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & FormatAssigns\1*1/4 AsIs: t.Next/7 } >/11 </12 & Map@1/13 Tile{ AsIs: e.Tail/9 } Tile{ AsIs: >/1 ]] }
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
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Map@0/0 Reuse: & FormatAssigns\1@0/4 AsIs: e.items/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::reinit_name(context[0], functions[efunc_gen_Map_Z0]);
  refalrts::update_name(context[4], functions[efunc_gen_FormatAssigns_L1Z0]);
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


static refalrts::FnResult func_gen_AddContraction_Z1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 77 elems
  refalrts::Iter context[77];
  refalrts::zeros( context, 77 );
  // </0 & AddContraction@1/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & AddContraction@1/4 (/7 e.new1/5 )/8 (/11 e.new2/9 )/12 (/15 e.new3/13 )/16 (/19 e.new4/17 )/20 (/23 e.new5/21 )/24 (/27 e.new6/25 )/28 e.new7/2 >/1
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
  // closed e.new1 as range 5
  // closed e.new2 as range 9
  // closed e.new3 as range 13
  // closed e.new4 as range 17
  // closed e.new5 as range 21
  // closed e.new6 as range 25
  // closed e.new7 as range 2
  do {
    // </0 & AddContraction@1/4 (/7 e.Index2/29 )/8 (/11 e.Index1/31 )/12 (/15 e.Contractions0/33 )/16 (/19 e.B/35 )/20 (/23 e.HIndex/37 )/24 (/27 e.M/39 )/28 e.E/41 >/1
    context[29] = context[5];
    context[30] = context[6];
    context[31] = context[9];
    context[32] = context[10];
    context[33] = context[13];
    context[34] = context[14];
    context[35] = context[17];
    context[36] = context[18];
    context[37] = context[21];
    context[38] = context[22];
    context[39] = context[25];
    context[40] = context[26];
    context[41] = context[2];
    context[42] = context[3];
    // closed e.Index2 as range 29
    // closed e.Index1 as range 31
    // closed e.Contractions0 as range 33
    // closed e.B as range 35
    // closed e.HIndex as range 37
    // closed e.M as range 39
    // closed e.E as range 41
    //DEBUG: e.Index2: 29
    //DEBUG: e.Index1: 31
    //DEBUG: e.Contractions0: 33
    //DEBUG: e.B: 35
    //DEBUG: e.HIndex: 37
    //DEBUG: e.M: 39
    //DEBUG: e.E: 41

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } (/43 Tile{ AsIs: e.Contractions0/33 } (/44 (/45 # Var/46 's'/47 e.Index2/29/48 )/50 ':'/51 (/52 # Var/53 's'/54 e.Index1/31/55 )/57 Tile{ AsIs: )/28 } )/58 Tile{ AsIs: </0 Reuse: & Map@17/4 AsIs: (/7 AsIs: e.Index2/29 AsIs: )/8 AsIs: (/11 AsIs: e.Index1/31 AsIs: )/12 HalfReuse: >/15 } (/59 </60 & Map@18/61 (/62 e.Index2/29/63 Tile{ AsIs: )/16 AsIs: (/19 } e.Index1/31/65 )/67 Tile{ AsIs: e.B/35 } (/68 (/69 # Var/70 's'/71 e.Index1/31/72 )/74 ':'/75 Tile{ HalfReuse: (/20 HalfReuse: # Var/23 AsIs: e.HIndex/37 AsIs: )/24 HalfReuse: )/27 } Tile{ AsIs: e.M/39 } Tile{ AsIs: e.E/41 } >/76 Tile{ HalfReuse: )/1 ]] }
    refalrts::alloc_open_bracket(vm, context[43]);
    refalrts::alloc_open_bracket(vm, context[44]);
    refalrts::alloc_open_bracket(vm, context[45]);
    refalrts::alloc_ident(vm, context[46], identifiers[ident_Var]);
    refalrts::alloc_char(vm, context[47], 's');
    refalrts::copy_evar(vm, context[48], context[49], context[29], context[30]);
    refalrts::alloc_close_bracket(vm, context[50]);
    refalrts::alloc_char(vm, context[51], ':');
    refalrts::alloc_open_bracket(vm, context[52]);
    refalrts::alloc_ident(vm, context[53], identifiers[ident_Var]);
    refalrts::alloc_char(vm, context[54], 's');
    refalrts::copy_evar(vm, context[55], context[56], context[31], context[32]);
    refalrts::alloc_close_bracket(vm, context[57]);
    refalrts::alloc_close_bracket(vm, context[58]);
    refalrts::alloc_open_bracket(vm, context[59]);
    refalrts::alloc_open_call(vm, context[60]);
    refalrts::alloc_name(vm, context[61], functions[efunc_gen_Map_Z18]);
    refalrts::alloc_open_bracket(vm, context[62]);
    refalrts::copy_evar(vm, context[63], context[64], context[29], context[30]);
    refalrts::copy_evar(vm, context[65], context[66], context[31], context[32]);
    refalrts::alloc_close_bracket(vm, context[67]);
    refalrts::alloc_open_bracket(vm, context[68]);
    refalrts::alloc_open_bracket(vm, context[69]);
    refalrts::alloc_ident(vm, context[70], identifiers[ident_Var]);
    refalrts::alloc_char(vm, context[71], 's');
    refalrts::copy_evar(vm, context[72], context[73], context[31], context[32]);
    refalrts::alloc_close_bracket(vm, context[74]);
    refalrts::alloc_char(vm, context[75], ':');
    refalrts::alloc_close_call(vm, context[76]);
    refalrts::update_name(context[4], functions[efunc_gen_Map_Z17]);
    refalrts::reinit_close_call(context[15]);
    refalrts::reinit_open_bracket(context[20]);
    refalrts::reinit_ident(context[23], identifiers[ident_Var]);
    refalrts::reinit_close_bracket(context[27]);
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[59], context[1] );
    refalrts::push_stack( vm, context[76] );
    refalrts::push_stack( vm, context[60] );
    refalrts::link_brackets( context[68], context[27] );
    refalrts::link_brackets( context[20], context[24] );
    refalrts::link_brackets( context[69], context[74] );
    refalrts::link_brackets( context[19], context[67] );
    refalrts::link_brackets( context[62], context[16] );
    refalrts::push_stack( vm, context[15] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[43], context[58] );
    refalrts::link_brackets( context[44], context[28] );
    refalrts::link_brackets( context[52], context[57] );
    refalrts::link_brackets( context[45], context[50] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_elem( res, context[76] );
    res = refalrts::splice_evar( res, context[41], context[42] );
    res = refalrts::splice_evar( res, context[39], context[40] );
    res = refalrts::splice_evar( res, context[20], context[27] );
    res = refalrts::splice_evar( res, context[68], context[75] );
    res = refalrts::splice_evar( res, context[35], context[36] );
    res = refalrts::splice_elem( res, context[67] );
    res = refalrts::splice_evar( res, context[65], context[66] );
    res = refalrts::splice_evar( res, context[16], context[19] );
    res = refalrts::splice_evar( res, context[63], context[64] );
    res = refalrts::splice_evar( res, context[59], context[62] );
    res = refalrts::splice_evar( res, context[0], context[15] );
    res = refalrts::splice_elem( res, context[58] );
    res = refalrts::splice_elem( res, context[28] );
    res = refalrts::splice_evar( res, context[44], context[57] );
    res = refalrts::splice_evar( res, context[33], context[34] );
    res = refalrts::splice_elem( res, context[43] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & AddContraction@1/4 (/7 e.Index2/5 )/8 (/11 e.Index1/9 )/12 (/15 e.Contractions0/13 )/16 (/19 e.B/17 )/20 (/23 e.HIndex/21 )/24 (/27 e.M/25 )/28 e.E/2 >/1
  // closed e.Index2 as range 5
  // closed e.Index1 as range 9
  // closed e.Contractions0 as range 13
  // closed e.B as range 17
  // closed e.HIndex as range 21
  // closed e.M as range 25
  // closed e.E as range 2
  //DEBUG: e.Index2: 5
  //DEBUG: e.Index1: 9
  //DEBUG: e.Contractions0: 13
  //DEBUG: e.B: 17
  //DEBUG: e.HIndex: 21
  //DEBUG: e.M: 25
  //DEBUG: e.E: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & AddContraction@0/4 AsIs: (/7 } (/29 # Var/30 's'/31 Tile{ AsIs: e.Index2/5 } )/32 Tile{ HalfReuse: ':'/24 AsIs: (/27 } # Var/33 's'/34 Tile{ AsIs: e.Index1/9 } Tile{ AsIs: )/28 } Tile{ AsIs: )/12 AsIs: (/15 AsIs: e.Contractions0/13 AsIs: )/16 AsIs: (/19 AsIs: e.B/17 HalfReuse: (/20 AsIs: (/23 } # Var/35 's'/36 e.Index1/9/37 Tile{ AsIs: )/8 HalfReuse: ':'/11 } (/39 # Var/40 Tile{ AsIs: e.HIndex/21 } )/41 )/42 Tile{ AsIs: e.M/25 } Tile{ AsIs: e.E/2 } )/43 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[29]);
  refalrts::alloc_ident(vm, context[30], identifiers[ident_Var]);
  refalrts::alloc_char(vm, context[31], 's');
  refalrts::alloc_close_bracket(vm, context[32]);
  refalrts::alloc_ident(vm, context[33], identifiers[ident_Var]);
  refalrts::alloc_char(vm, context[34], 's');
  refalrts::alloc_ident(vm, context[35], identifiers[ident_Var]);
  refalrts::alloc_char(vm, context[36], 's');
  refalrts::copy_evar(vm, context[37], context[38], context[9], context[10]);
  refalrts::alloc_open_bracket(vm, context[39]);
  refalrts::alloc_ident(vm, context[40], identifiers[ident_Var]);
  refalrts::alloc_close_bracket(vm, context[41]);
  refalrts::alloc_close_bracket(vm, context[42]);
  refalrts::alloc_close_bracket(vm, context[43]);
  refalrts::update_name(context[4], functions[efunc_gen_AddContraction_Z0]);
  refalrts::reinit_char(context[24], ':');
  refalrts::reinit_open_bracket(context[20]);
  refalrts::reinit_char(context[11], ':');
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[19], context[43] );
  refalrts::link_brackets( context[20], context[42] );
  refalrts::link_brackets( context[39], context[41] );
  refalrts::link_brackets( context[23], context[8] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[7], context[12] );
  refalrts::link_brackets( context[27], context[28] );
  refalrts::link_brackets( context[29], context[32] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_elem( res, context[43] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[25], context[26] );
  res = refalrts::splice_evar( res, context[41], context[42] );
  res = refalrts::splice_evar( res, context[21], context[22] );
  res = refalrts::splice_evar( res, context[39], context[40] );
  res = refalrts::splice_evar( res, context[8], context[11] );
  res = refalrts::splice_evar( res, context[37], context[38] );
  res = refalrts::splice_evar( res, context[35], context[36] );
  res = refalrts::splice_evar( res, context[12], context[23] );
  res = refalrts::splice_elem( res, context[28] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[33], context[34] );
  res = refalrts::splice_evar( res, context[24], context[27] );
  res = refalrts::splice_elem( res, context[32] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[29], context[31] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_AddContraction_Z1("AddContraction@1", COOKIE1_, COOKIE2_, func_gen_AddContraction_Z1);


static refalrts::FnResult func_gen_AddContraction_Z2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 79 elems
  refalrts::Iter context[79];
  refalrts::zeros( context, 79 );
  // </0 & AddContraction@2/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & AddContraction@2/4 (/7 e.new1/5 )/8 s.new2/9 (/12 e.new3/10 )/13 (/16 e.new4/14 )/17 (/20 e.new5/18 )/21 (/24 e.new6/22 )/25 (/28 e.new7/26 )/29 e.new8/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new1 as range 5
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
  context[26] = 0;
  context[27] = 0;
  context[28] = refalrts::brackets_left( context[26], context[27], context[2], context[3] );
  if( ! context[28] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[28], context[29]);
  // closed e.new3 as range 10
  // closed e.new4 as range 14
  // closed e.new5 as range 18
  // closed e.new6 as range 22
  // closed e.new7 as range 26
  // closed e.new8 as range 2
  do {
    // </0 & AddContraction@2/4 (/7 e.PIndex/30 )/8 s.Type/9 (/12 e.Info/32 )/13 (/16 e.Contractions0/34 )/17 (/20 e.B/36 )/21 (/24 e.HIndex/38 )/25 (/28 e.M/40 )/29 e.E/42 >/1
    context[30] = context[5];
    context[31] = context[6];
    context[32] = context[10];
    context[33] = context[11];
    context[34] = context[14];
    context[35] = context[15];
    context[36] = context[18];
    context[37] = context[19];
    context[38] = context[22];
    context[39] = context[23];
    context[40] = context[26];
    context[41] = context[27];
    context[42] = context[2];
    context[43] = context[3];
    // closed e.PIndex as range 30
    // closed e.Info as range 32
    // closed e.Contractions0 as range 34
    // closed e.B as range 36
    // closed e.HIndex as range 38
    // closed e.M as range 40
    // closed e.E as range 42
    //DEBUG: s.Type: 9
    //DEBUG: e.PIndex: 30
    //DEBUG: e.Info: 32
    //DEBUG: e.Contractions0: 34
    //DEBUG: e.B: 36
    //DEBUG: e.HIndex: 38
    //DEBUG: e.M: 40
    //DEBUG: e.E: 42

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } (/44 Tile{ AsIs: e.Contractions0/34 } (/45 (/46 # Var/47 's'/48 e.PIndex/30/49 Tile{ AsIs: )/17 HalfReuse: ':'/20 } (/51 # Symbol/52 s.Type/9/53 e.Info/32/54 )/56 Tile{ AsIs: )/29 } )/57 Tile{ AsIs: </0 Reuse: & Map@19/4 AsIs: (/7 AsIs: e.PIndex/30 AsIs: )/8 AsIs: s.Type/9 AsIs: (/12 AsIs: e.Info/32 AsIs: )/13 HalfReuse: >/16 } (/58 </59 & Map@20/60 (/61 e.PIndex/30/62 )/64 s.Type/9/65 (/66 e.Info/32/67 )/69 Tile{ AsIs: e.B/36 } (/70 (/71 # Symbol/72 s.Type/9/73 e.Info/32/74 )/76 ':'/77 Tile{ HalfReuse: (/21 HalfReuse: # Var/24 AsIs: e.HIndex/38 AsIs: )/25 HalfReuse: )/28 } Tile{ AsIs: e.M/40 } Tile{ AsIs: e.E/42 } >/78 Tile{ HalfReuse: )/1 ]] }
    refalrts::alloc_open_bracket(vm, context[44]);
    refalrts::alloc_open_bracket(vm, context[45]);
    refalrts::alloc_open_bracket(vm, context[46]);
    refalrts::alloc_ident(vm, context[47], identifiers[ident_Var]);
    refalrts::alloc_char(vm, context[48], 's');
    refalrts::copy_evar(vm, context[49], context[50], context[30], context[31]);
    refalrts::alloc_open_bracket(vm, context[51]);
    refalrts::alloc_ident(vm, context[52], identifiers[ident_Symbol]);
    refalrts::copy_stvar(vm, context[53], context[9]);
    refalrts::copy_evar(vm, context[54], context[55], context[32], context[33]);
    refalrts::alloc_close_bracket(vm, context[56]);
    refalrts::alloc_close_bracket(vm, context[57]);
    refalrts::alloc_open_bracket(vm, context[58]);
    refalrts::alloc_open_call(vm, context[59]);
    refalrts::alloc_name(vm, context[60], functions[efunc_gen_Map_Z20]);
    refalrts::alloc_open_bracket(vm, context[61]);
    refalrts::copy_evar(vm, context[62], context[63], context[30], context[31]);
    refalrts::alloc_close_bracket(vm, context[64]);
    refalrts::copy_stvar(vm, context[65], context[9]);
    refalrts::alloc_open_bracket(vm, context[66]);
    refalrts::copy_evar(vm, context[67], context[68], context[32], context[33]);
    refalrts::alloc_close_bracket(vm, context[69]);
    refalrts::alloc_open_bracket(vm, context[70]);
    refalrts::alloc_open_bracket(vm, context[71]);
    refalrts::alloc_ident(vm, context[72], identifiers[ident_Symbol]);
    refalrts::copy_stvar(vm, context[73], context[9]);
    refalrts::copy_evar(vm, context[74], context[75], context[32], context[33]);
    refalrts::alloc_close_bracket(vm, context[76]);
    refalrts::alloc_char(vm, context[77], ':');
    refalrts::alloc_close_call(vm, context[78]);
    refalrts::reinit_char(context[20], ':');
    refalrts::update_name(context[4], functions[efunc_gen_Map_Z19]);
    refalrts::reinit_close_call(context[16]);
    refalrts::reinit_open_bracket(context[21]);
    refalrts::reinit_ident(context[24], identifiers[ident_Var]);
    refalrts::reinit_close_bracket(context[28]);
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[58], context[1] );
    refalrts::push_stack( vm, context[78] );
    refalrts::push_stack( vm, context[59] );
    refalrts::link_brackets( context[70], context[28] );
    refalrts::link_brackets( context[21], context[25] );
    refalrts::link_brackets( context[71], context[76] );
    refalrts::link_brackets( context[66], context[69] );
    refalrts::link_brackets( context[61], context[64] );
    refalrts::push_stack( vm, context[16] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[12], context[13] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[44], context[57] );
    refalrts::link_brackets( context[45], context[29] );
    refalrts::link_brackets( context[51], context[56] );
    refalrts::link_brackets( context[46], context[17] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_elem( res, context[78] );
    res = refalrts::splice_evar( res, context[42], context[43] );
    res = refalrts::splice_evar( res, context[40], context[41] );
    res = refalrts::splice_evar( res, context[21], context[28] );
    res = refalrts::splice_evar( res, context[70], context[77] );
    res = refalrts::splice_evar( res, context[36], context[37] );
    res = refalrts::splice_evar( res, context[58], context[69] );
    res = refalrts::splice_evar( res, context[0], context[16] );
    res = refalrts::splice_elem( res, context[57] );
    res = refalrts::splice_elem( res, context[29] );
    res = refalrts::splice_evar( res, context[51], context[56] );
    res = refalrts::splice_evar( res, context[17], context[20] );
    res = refalrts::splice_evar( res, context[49], context[50] );
    res = refalrts::splice_evar( res, context[45], context[48] );
    res = refalrts::splice_evar( res, context[34], context[35] );
    res = refalrts::splice_elem( res, context[44] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & AddContraction@2/4 (/7 e.PIndex/5 )/8 s.Type/9 (/12 e.Info/10 )/13 (/16 e.Contractions0/14 )/17 (/20 e.B/18 )/21 (/24 e.HIndex/22 )/25 (/28 e.M/26 )/29 e.E/2 >/1
  // closed e.PIndex as range 5
  // closed e.Info as range 10
  // closed e.Contractions0 as range 14
  // closed e.B as range 18
  // closed e.HIndex as range 22
  // closed e.M as range 26
  // closed e.E as range 2
  //DEBUG: s.Type: 9
  //DEBUG: e.PIndex: 5
  //DEBUG: e.Info: 10
  //DEBUG: e.Contractions0: 14
  //DEBUG: e.B: 18
  //DEBUG: e.HIndex: 22
  //DEBUG: e.M: 26
  //DEBUG: e.E: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & AddContraction@0/4 AsIs: (/7 } Tile{ AsIs: (/12 } # Var/30 's'/31 Tile{ AsIs: e.PIndex/5 } )/32 Tile{ HalfReuse: ':'/25 AsIs: (/28 } Tile{ HalfReuse: # Symbol/8 AsIs: s.Type/9 } Tile{ AsIs: e.Info/10 } Tile{ AsIs: )/29 } Tile{ AsIs: )/13 AsIs: (/16 AsIs: e.Contractions0/14 AsIs: )/17 AsIs: (/20 AsIs: e.B/18 HalfReuse: (/21 AsIs: (/24 } # Symbol/33 s.Type/9/34 e.Info/10/35 )/37 ':'/38 (/39 # Var/40 Tile{ AsIs: e.HIndex/22 } )/41 )/42 Tile{ AsIs: e.M/26 } Tile{ AsIs: e.E/2 } )/43 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_ident(vm, context[30], identifiers[ident_Var]);
  refalrts::alloc_char(vm, context[31], 's');
  refalrts::alloc_close_bracket(vm, context[32]);
  refalrts::alloc_ident(vm, context[33], identifiers[ident_Symbol]);
  refalrts::copy_stvar(vm, context[34], context[9]);
  refalrts::copy_evar(vm, context[35], context[36], context[10], context[11]);
  refalrts::alloc_close_bracket(vm, context[37]);
  refalrts::alloc_char(vm, context[38], ':');
  refalrts::alloc_open_bracket(vm, context[39]);
  refalrts::alloc_ident(vm, context[40], identifiers[ident_Var]);
  refalrts::alloc_close_bracket(vm, context[41]);
  refalrts::alloc_close_bracket(vm, context[42]);
  refalrts::alloc_close_bracket(vm, context[43]);
  refalrts::update_name(context[4], functions[efunc_gen_AddContraction_Z0]);
  refalrts::reinit_char(context[25], ':');
  refalrts::reinit_ident(context[8], identifiers[ident_Symbol]);
  refalrts::reinit_open_bracket(context[21]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[20], context[43] );
  refalrts::link_brackets( context[21], context[42] );
  refalrts::link_brackets( context[39], context[41] );
  refalrts::link_brackets( context[24], context[37] );
  refalrts::link_brackets( context[16], context[17] );
  refalrts::link_brackets( context[7], context[13] );
  refalrts::link_brackets( context[28], context[29] );
  refalrts::link_brackets( context[12], context[32] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_elem( res, context[43] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[26], context[27] );
  res = refalrts::splice_evar( res, context[41], context[42] );
  res = refalrts::splice_evar( res, context[22], context[23] );
  res = refalrts::splice_evar( res, context[33], context[40] );
  res = refalrts::splice_evar( res, context[13], context[24] );
  res = refalrts::splice_elem( res, context[29] );
  res = refalrts::splice_evar( res, context[10], context[11] );
  res = refalrts::splice_evar( res, context[8], context[9] );
  res = refalrts::splice_evar( res, context[25], context[28] );
  res = refalrts::splice_elem( res, context[32] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[30], context[31] );
  res = refalrts::splice_elem( res, context[12] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_AddContraction_Z2("AddContraction@2", COOKIE1_, COOKIE2_, func_gen_AddContraction_Z2);


static refalrts::FnResult func_gen_Map_Z2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 60 elems
  refalrts::Iter context[60];
  refalrts::zeros( context, 60 );
  // </0 & Map@2/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & Map@2/4 t.new1/5 (/9 e.new2/7 )/10 (/13 e.new3/11 )/14 e.new4/2 >/1
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
  // closed e.new2 as range 7
  // closed e.new3 as range 11
  // closed e.new4 as range 2
  do {
    // </0 & Map@2/4 t.new5/5 (/9 e.new8/15 )/10 (/13 e.new9/17 )/14 t.new6/21 e.new7/19 >/1
    context[15] = context[7];
    context[16] = context[8];
    context[17] = context[11];
    context[18] = context[12];
    context[19] = context[2];
    context[20] = context[3];
    // closed e.new8 as range 15
    // closed e.new9 as range 17
    context[22] = refalrts::tvar_left( context[21], context[19], context[20] );
    if( ! context[22] )
      continue;
    // closed e.new7 as range 19
    do {
      // </0 & Map@2/4 t.Pt/5 (/9 e.tIdx/23 )/10 (/13 e.eIdx/25 )/14 (/21 (/33 e.1/31 )/34 ':'/35 (/38 e.4/36 )/39 )/22 e.Tail/27 >/1
      context[23] = context[15];
      context[24] = context[16];
      context[25] = context[17];
      context[26] = context[18];
      context[27] = context[19];
      context[28] = context[20];
      context[29] = 0;
      context[30] = 0;
      if( ! refalrts::brackets_term( context[29], context[30], context[21] ) )
        continue;
      context[31] = 0;
      context[32] = 0;
      context[33] = refalrts::brackets_left( context[31], context[32], context[29], context[30] );
      if( ! context[33] )
        continue;
      refalrts::bracket_pointers(context[33], context[34]);
      context[35] = refalrts::char_left( ':', context[29], context[30] );
      if( ! context[35] )
        continue;
      context[36] = 0;
      context[37] = 0;
      context[38] = refalrts::brackets_left( context[36], context[37], context[29], context[30] );
      if( ! context[38] )
        continue;
      refalrts::bracket_pointers(context[38], context[39]);
      if( ! refalrts::empty_seq( context[29], context[30] ) )
        continue;
      // closed e.tIdx as range 23
      // closed e.eIdx as range 25
      // closed e.1 as range 31
      // closed e.4 as range 36
      // closed e.Tail as range 27
      //DEBUG: t.Pt: 5
      //DEBUG: e.tIdx: 23
      //DEBUG: e.eIdx: 25
      //DEBUG: e.1: 31
      //DEBUG: e.4: 36
      //DEBUG: e.Tail: 27

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/21 AsIs: (/33 } </40 & ApplyContraction-toExpr/41 (/42 t.Pt/5/43 ':'/45 (/46 # Var/47 't'/48 e.tIdx/23/49 )/51 (/52 # Var/53 'e'/54 e.eIdx/25/55 )/57 )/58 Tile{ AsIs: e.1/31 } >/59 Tile{ AsIs: )/34 AsIs: ':'/35 AsIs: (/38 AsIs: e.4/36 AsIs: )/39 AsIs: )/22 } Tile{ AsIs: </0 AsIs: & Map@2/4 AsIs: t.Pt/5 AsIs: (/9 AsIs: e.tIdx/23 AsIs: )/10 AsIs: (/13 AsIs: e.eIdx/25 AsIs: )/14 } Tile{ AsIs: e.Tail/27 } Tile{ AsIs: >/1 ]] }
      refalrts::alloc_open_call(vm, context[40]);
      refalrts::alloc_name(vm, context[41], functions[efunc_ApplyContractionm_toExpr]);
      refalrts::alloc_open_bracket(vm, context[42]);
      refalrts::copy_evar(vm, context[43], context[44], context[5], context[6]);
      refalrts::alloc_char(vm, context[45], ':');
      refalrts::alloc_open_bracket(vm, context[46]);
      refalrts::alloc_ident(vm, context[47], identifiers[ident_Var]);
      refalrts::alloc_char(vm, context[48], 't');
      refalrts::copy_evar(vm, context[49], context[50], context[23], context[24]);
      refalrts::alloc_close_bracket(vm, context[51]);
      refalrts::alloc_open_bracket(vm, context[52]);
      refalrts::alloc_ident(vm, context[53], identifiers[ident_Var]);
      refalrts::alloc_char(vm, context[54], 'e');
      refalrts::copy_evar(vm, context[55], context[56], context[25], context[26]);
      refalrts::alloc_close_bracket(vm, context[57]);
      refalrts::alloc_close_bracket(vm, context[58]);
      refalrts::alloc_close_call(vm, context[59]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[13], context[14] );
      refalrts::link_brackets( context[9], context[10] );
      refalrts::link_brackets( context[21], context[22] );
      refalrts::link_brackets( context[38], context[39] );
      refalrts::link_brackets( context[33], context[34] );
      refalrts::push_stack( vm, context[59] );
      refalrts::push_stack( vm, context[40] );
      refalrts::link_brackets( context[42], context[58] );
      refalrts::link_brackets( context[52], context[57] );
      refalrts::link_brackets( context[46], context[51] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[27], context[28] );
      res = refalrts::splice_evar( res, context[0], context[14] );
      res = refalrts::splice_evar( res, context[34], context[22] );
      res = refalrts::splice_elem( res, context[59] );
      res = refalrts::splice_evar( res, context[31], context[32] );
      res = refalrts::splice_evar( res, context[40], context[58] );
      res = refalrts::splice_evar( res, context[21], context[33] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Map@2/4 t.Pt/5 (/9 e.tIdx/23 )/10 (/13 e.eIdx/25 )/14 t.Next/21 e.Tail/27 >/1
    context[23] = context[15];
    context[24] = context[16];
    context[25] = context[17];
    context[26] = context[18];
    context[27] = context[19];
    context[28] = context[20];
    // closed e.tIdx as range 23
    // closed e.eIdx as range 25
    // closed e.Tail as range 27
    //DEBUG: t.Pt: 5
    //DEBUG: t.Next: 21
    //DEBUG: e.tIdx: 23
    //DEBUG: e.eIdx: 25
    //DEBUG: e.Tail: 27

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </29 & ApplyContraction-toEquation*1/30 (/31 t.Pt/5/32 ':'/34 (/35 # Var/36 't'/37 e.tIdx/23/38 )/40 (/41 # Var/42 'e'/43 e.eIdx/25/44 )/46 )/47 Tile{ AsIs: t.Next/21 } >/48 Tile{ AsIs: </0 AsIs: & Map@2/4 AsIs: t.Pt/5 AsIs: (/9 AsIs: e.tIdx/23 AsIs: )/10 AsIs: (/13 AsIs: e.eIdx/25 AsIs: )/14 } Tile{ AsIs: e.Tail/27 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[29]);
    refalrts::alloc_name(vm, context[30], functions[efunc_gen_ApplyContractionm_toEquation_D1]);
    refalrts::alloc_open_bracket(vm, context[31]);
    refalrts::copy_evar(vm, context[32], context[33], context[5], context[6]);
    refalrts::alloc_char(vm, context[34], ':');
    refalrts::alloc_open_bracket(vm, context[35]);
    refalrts::alloc_ident(vm, context[36], identifiers[ident_Var]);
    refalrts::alloc_char(vm, context[37], 't');
    refalrts::copy_evar(vm, context[38], context[39], context[23], context[24]);
    refalrts::alloc_close_bracket(vm, context[40]);
    refalrts::alloc_open_bracket(vm, context[41]);
    refalrts::alloc_ident(vm, context[42], identifiers[ident_Var]);
    refalrts::alloc_char(vm, context[43], 'e');
    refalrts::copy_evar(vm, context[44], context[45], context[25], context[26]);
    refalrts::alloc_close_bracket(vm, context[46]);
    refalrts::alloc_close_bracket(vm, context[47]);
    refalrts::alloc_close_call(vm, context[48]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[13], context[14] );
    refalrts::link_brackets( context[9], context[10] );
    refalrts::push_stack( vm, context[48] );
    refalrts::push_stack( vm, context[29] );
    refalrts::link_brackets( context[31], context[47] );
    refalrts::link_brackets( context[41], context[46] );
    refalrts::link_brackets( context[35], context[40] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[27], context[28] );
    res = refalrts::splice_evar( res, context[0], context[14] );
    res = refalrts::splice_elem( res, context[48] );
    res = refalrts::splice_evar( res, context[21], context[22] );
    res = refalrts::splice_evar( res, context[29], context[47] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Map@2/4 t.Pt/5 (/9 e.tIdx/15 )/10 (/13 e.eIdx/17 )/14 >/1
    context[15] = context[7];
    context[16] = context[8];
    context[17] = context[11];
    context[18] = context[12];
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.tIdx as range 15
    // closed e.eIdx as range 17
    //DEBUG: t.Pt: 5
    //DEBUG: e.tIdx: 15
    //DEBUG: e.eIdx: 17

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Map@2/4 t.Pt/5 (/9 e.tIdx/15 )/10 (/13 e.eIdx/17 )/14 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Map@2/4 t.Pt/5 (/9 e.tIdx/7 )/10 (/13 e.eIdx/11 )/14 e.items/2 >/1
  // closed e.tIdx as range 7
  // closed e.eIdx as range 11
  // closed e.items as range 2
  //DEBUG: t.Pt: 5
  //DEBUG: e.tIdx: 7
  //DEBUG: e.eIdx: 11
  //DEBUG: e.items: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map@0/4 } (/15 & ApplyContraction-toEquation@0/16 (/17 Tile{ AsIs: t.Pt/5 } ':'/18 (/19 # Var/20 Tile{ HalfReuse: 't'/9 AsIs: e.tIdx/7 AsIs: )/10 AsIs: (/13 } # Var/21 'e'/22 Tile{ AsIs: e.eIdx/11 } )/23 )/24 Tile{ AsIs: )/14 AsIs: e.items/2 AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[15]);
  refalrts::alloc_name(vm, context[16], functions[efunc_gen_ApplyContractionm_toEquation_Z0]);
  refalrts::alloc_open_bracket(vm, context[17]);
  refalrts::alloc_char(vm, context[18], ':');
  refalrts::alloc_open_bracket(vm, context[19]);
  refalrts::alloc_ident(vm, context[20], identifiers[ident_Var]);
  refalrts::alloc_ident(vm, context[21], identifiers[ident_Var]);
  refalrts::alloc_char(vm, context[22], 'e');
  refalrts::alloc_close_bracket(vm, context[23]);
  refalrts::alloc_close_bracket(vm, context[24]);
  refalrts::update_name(context[4], functions[efunc_gen_Map_Z0]);
  refalrts::reinit_char(context[9], 't');
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[15], context[14] );
  refalrts::link_brackets( context[17], context[24] );
  refalrts::link_brackets( context[13], context[23] );
  refalrts::link_brackets( context[19], context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[14];
  res = refalrts::splice_evar( res, context[23], context[24] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_evar( res, context[21], context[22] );
  res = refalrts::splice_evar( res, context[9], context[13] );
  res = refalrts::splice_evar( res, context[18], context[20] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[15], context[17] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Map_Z2("Map@2", COOKIE1_, COOKIE2_, func_gen_Map_Z2);


static refalrts::FnResult func_gen_Map_Z3(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 54 elems
  refalrts::Iter context[54];
  refalrts::zeros( context, 54 );
  // </0 & Map@3/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & Map@3/4 t.new1/5 (/9 e.new2/7 )/10 (/13 e.new3/11 )/14 e.new4/2 >/1
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
  // closed e.new2 as range 7
  // closed e.new3 as range 11
  // closed e.new4 as range 2
  do {
    // </0 & Map@3/4 t.new5/5 (/9 e.new8/15 )/10 (/13 e.new9/17 )/14 t.new6/21 e.new7/19 >/1
    context[15] = context[7];
    context[16] = context[8];
    context[17] = context[11];
    context[18] = context[12];
    context[19] = context[2];
    context[20] = context[3];
    // closed e.new8 as range 15
    // closed e.new9 as range 17
    context[22] = refalrts::tvar_left( context[21], context[19], context[20] );
    if( ! context[22] )
      continue;
    // closed e.new7 as range 19
    do {
      // </0 & Map@3/4 t.Pt/5 (/9 e.tIdx/23 )/10 (/13 e.eIdx/25 )/14 (/21 e.1/29 ':'/33 t./31 )/22 e.Tail/27 >/1
      context[23] = context[15];
      context[24] = context[16];
      context[25] = context[17];
      context[26] = context[18];
      context[27] = context[19];
      context[28] = context[20];
      context[29] = 0;
      context[30] = 0;
      if( ! refalrts::brackets_term( context[29], context[30], context[21] ) )
        continue;
      // closed e.tIdx as range 23
      // closed e.eIdx as range 25
      // closed e.Tail as range 27
      context[32] = refalrts::tvar_right( context[31], context[29], context[30] );
      if( ! context[32] )
        continue;
      context[33] = refalrts::char_right( ':', context[29], context[30] );
      if( ! context[33] )
        continue;
      // closed e.1 as range 29
      //DEBUG: t.Pt: 5
      //DEBUG: e.tIdx: 23
      //DEBUG: e.eIdx: 25
      //DEBUG: e.Tail: 27
      //DEBUG: t.: 31
      //DEBUG: e.1: 29

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } (/34 </35 & ApplyContraction-toExpr/36 Tile{ AsIs: (/21 } t.Pt/5/37 ':'/39 (/40 # Var/41 't'/42 e.tIdx/23/43 )/45 (/46 # Var/47 'e'/48 e.eIdx/25/49 )/51 )/52 Tile{ AsIs: e.1/29 } >/53 Tile{ AsIs: ':'/33 AsIs: t./31 AsIs: )/22 } Tile{ AsIs: </0 AsIs: & Map@3/4 AsIs: t.Pt/5 AsIs: (/9 AsIs: e.tIdx/23 AsIs: )/10 AsIs: (/13 AsIs: e.eIdx/25 AsIs: )/14 } Tile{ AsIs: e.Tail/27 } Tile{ AsIs: >/1 ]] }
      refalrts::alloc_open_bracket(vm, context[34]);
      refalrts::alloc_open_call(vm, context[35]);
      refalrts::alloc_name(vm, context[36], functions[efunc_ApplyContractionm_toExpr]);
      refalrts::copy_evar(vm, context[37], context[38], context[5], context[6]);
      refalrts::alloc_char(vm, context[39], ':');
      refalrts::alloc_open_bracket(vm, context[40]);
      refalrts::alloc_ident(vm, context[41], identifiers[ident_Var]);
      refalrts::alloc_char(vm, context[42], 't');
      refalrts::copy_evar(vm, context[43], context[44], context[23], context[24]);
      refalrts::alloc_close_bracket(vm, context[45]);
      refalrts::alloc_open_bracket(vm, context[46]);
      refalrts::alloc_ident(vm, context[47], identifiers[ident_Var]);
      refalrts::alloc_char(vm, context[48], 'e');
      refalrts::copy_evar(vm, context[49], context[50], context[25], context[26]);
      refalrts::alloc_close_bracket(vm, context[51]);
      refalrts::alloc_close_bracket(vm, context[52]);
      refalrts::alloc_close_call(vm, context[53]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[13], context[14] );
      refalrts::link_brackets( context[9], context[10] );
      refalrts::link_brackets( context[34], context[22] );
      refalrts::push_stack( vm, context[53] );
      refalrts::push_stack( vm, context[35] );
      refalrts::link_brackets( context[21], context[52] );
      refalrts::link_brackets( context[46], context[51] );
      refalrts::link_brackets( context[40], context[45] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[27], context[28] );
      res = refalrts::splice_evar( res, context[0], context[14] );
      res = refalrts::splice_evar( res, context[33], context[22] );
      res = refalrts::splice_elem( res, context[53] );
      res = refalrts::splice_evar( res, context[29], context[30] );
      res = refalrts::splice_evar( res, context[37], context[52] );
      res = refalrts::splice_elem( res, context[21] );
      res = refalrts::splice_evar( res, context[34], context[36] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Map@3/4 t.Pt/5 (/9 e.tIdx/23 )/10 (/13 e.eIdx/25 )/14 t.Next/21 e.Tail/27 >/1
    context[23] = context[15];
    context[24] = context[16];
    context[25] = context[17];
    context[26] = context[18];
    context[27] = context[19];
    context[28] = context[20];
    // closed e.tIdx as range 23
    // closed e.eIdx as range 25
    // closed e.Tail as range 27
    //DEBUG: t.Pt: 5
    //DEBUG: t.Next: 21
    //DEBUG: e.tIdx: 23
    //DEBUG: e.eIdx: 25
    //DEBUG: e.Tail: 27

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </29 & ApplyContraction-toAssign*1/30 (/31 t.Pt/5/32 ':'/34 (/35 # Var/36 't'/37 e.tIdx/23/38 )/40 (/41 # Var/42 'e'/43 e.eIdx/25/44 )/46 )/47 Tile{ AsIs: t.Next/21 } >/48 Tile{ AsIs: </0 AsIs: & Map@3/4 AsIs: t.Pt/5 AsIs: (/9 AsIs: e.tIdx/23 AsIs: )/10 AsIs: (/13 AsIs: e.eIdx/25 AsIs: )/14 } Tile{ AsIs: e.Tail/27 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[29]);
    refalrts::alloc_name(vm, context[30], functions[efunc_gen_ApplyContractionm_toAssign_D1]);
    refalrts::alloc_open_bracket(vm, context[31]);
    refalrts::copy_evar(vm, context[32], context[33], context[5], context[6]);
    refalrts::alloc_char(vm, context[34], ':');
    refalrts::alloc_open_bracket(vm, context[35]);
    refalrts::alloc_ident(vm, context[36], identifiers[ident_Var]);
    refalrts::alloc_char(vm, context[37], 't');
    refalrts::copy_evar(vm, context[38], context[39], context[23], context[24]);
    refalrts::alloc_close_bracket(vm, context[40]);
    refalrts::alloc_open_bracket(vm, context[41]);
    refalrts::alloc_ident(vm, context[42], identifiers[ident_Var]);
    refalrts::alloc_char(vm, context[43], 'e');
    refalrts::copy_evar(vm, context[44], context[45], context[25], context[26]);
    refalrts::alloc_close_bracket(vm, context[46]);
    refalrts::alloc_close_bracket(vm, context[47]);
    refalrts::alloc_close_call(vm, context[48]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[13], context[14] );
    refalrts::link_brackets( context[9], context[10] );
    refalrts::push_stack( vm, context[48] );
    refalrts::push_stack( vm, context[29] );
    refalrts::link_brackets( context[31], context[47] );
    refalrts::link_brackets( context[41], context[46] );
    refalrts::link_brackets( context[35], context[40] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[27], context[28] );
    res = refalrts::splice_evar( res, context[0], context[14] );
    res = refalrts::splice_elem( res, context[48] );
    res = refalrts::splice_evar( res, context[21], context[22] );
    res = refalrts::splice_evar( res, context[29], context[47] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Map@3/4 t.Pt/5 (/9 e.tIdx/15 )/10 (/13 e.eIdx/17 )/14 >/1
    context[15] = context[7];
    context[16] = context[8];
    context[17] = context[11];
    context[18] = context[12];
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.tIdx as range 15
    // closed e.eIdx as range 17
    //DEBUG: t.Pt: 5
    //DEBUG: e.tIdx: 15
    //DEBUG: e.eIdx: 17

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Map@3/4 t.Pt/5 (/9 e.tIdx/15 )/10 (/13 e.eIdx/17 )/14 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Map@3/4 t.Pt/5 (/9 e.tIdx/7 )/10 (/13 e.eIdx/11 )/14 e.items/2 >/1
  // closed e.tIdx as range 7
  // closed e.eIdx as range 11
  // closed e.items as range 2
  //DEBUG: t.Pt: 5
  //DEBUG: e.tIdx: 7
  //DEBUG: e.eIdx: 11
  //DEBUG: e.items: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map@0/4 } (/15 & ApplyContraction-toAssign@0/16 (/17 Tile{ AsIs: t.Pt/5 } ':'/18 (/19 # Var/20 Tile{ HalfReuse: 't'/9 AsIs: e.tIdx/7 AsIs: )/10 AsIs: (/13 } # Var/21 'e'/22 Tile{ AsIs: e.eIdx/11 } )/23 )/24 Tile{ AsIs: )/14 AsIs: e.items/2 AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[15]);
  refalrts::alloc_name(vm, context[16], functions[efunc_gen_ApplyContractionm_toAssign_Z0]);
  refalrts::alloc_open_bracket(vm, context[17]);
  refalrts::alloc_char(vm, context[18], ':');
  refalrts::alloc_open_bracket(vm, context[19]);
  refalrts::alloc_ident(vm, context[20], identifiers[ident_Var]);
  refalrts::alloc_ident(vm, context[21], identifiers[ident_Var]);
  refalrts::alloc_char(vm, context[22], 'e');
  refalrts::alloc_close_bracket(vm, context[23]);
  refalrts::alloc_close_bracket(vm, context[24]);
  refalrts::update_name(context[4], functions[efunc_gen_Map_Z0]);
  refalrts::reinit_char(context[9], 't');
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[15], context[14] );
  refalrts::link_brackets( context[17], context[24] );
  refalrts::link_brackets( context[13], context[23] );
  refalrts::link_brackets( context[19], context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[14];
  res = refalrts::splice_evar( res, context[23], context[24] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_evar( res, context[21], context[22] );
  res = refalrts::splice_evar( res, context[9], context[13] );
  res = refalrts::splice_evar( res, context[18], context[20] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[15], context[17] );
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
  // issue here memory for vars with 32 elems
  refalrts::Iter context[32];
  refalrts::zeros( context, 32 );
  // </0 & Map@4/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & Map@4/4 t.new1/5 e.new2/2 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  // closed e.new2 as range 2
  do {
    // </0 & Map@4/4 t.new3/5 t.new4/9 e.new5/7 >/1
    context[7] = context[2];
    context[8] = context[3];
    context[10] = refalrts::tvar_left( context[9], context[7], context[8] );
    if( ! context[10] )
      continue;
    // closed e.new5 as range 7
    do {
      // </0 & Map@4/4 t.Pt/5 (/9 (/17 e.1/15 )/18 ':'/19 (/22 e.4/20 )/23 )/10 e.Tail/11 >/1
      context[11] = context[7];
      context[12] = context[8];
      context[13] = 0;
      context[14] = 0;
      if( ! refalrts::brackets_term( context[13], context[14], context[9] ) )
        continue;
      context[15] = 0;
      context[16] = 0;
      context[17] = refalrts::brackets_left( context[15], context[16], context[13], context[14] );
      if( ! context[17] )
        continue;
      refalrts::bracket_pointers(context[17], context[18]);
      context[19] = refalrts::char_left( ':', context[13], context[14] );
      if( ! context[19] )
        continue;
      context[20] = 0;
      context[21] = 0;
      context[22] = refalrts::brackets_left( context[20], context[21], context[13], context[14] );
      if( ! context[22] )
        continue;
      refalrts::bracket_pointers(context[22], context[23]);
      if( ! refalrts::empty_seq( context[13], context[14] ) )
        continue;
      // closed e.1 as range 15
      // closed e.4 as range 20
      // closed e.Tail as range 11
      //DEBUG: t.Pt: 5
      //DEBUG: e.1: 15
      //DEBUG: e.4: 20
      //DEBUG: e.Tail: 11

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/9 AsIs: (/17 } </24 & ApplyContraction-toExpr/25 (/26 t.Pt/5/27 ':'/29 )/30 Tile{ AsIs: e.1/15 } >/31 Tile{ AsIs: )/18 AsIs: ':'/19 AsIs: (/22 AsIs: e.4/20 AsIs: )/23 AsIs: )/10 } Tile{ AsIs: </0 AsIs: & Map@4/4 AsIs: t.Pt/5 } Tile{ AsIs: e.Tail/11 } Tile{ AsIs: >/1 ]] }
      refalrts::alloc_open_call(vm, context[24]);
      refalrts::alloc_name(vm, context[25], functions[efunc_ApplyContractionm_toExpr]);
      refalrts::alloc_open_bracket(vm, context[26]);
      refalrts::copy_evar(vm, context[27], context[28], context[5], context[6]);
      refalrts::alloc_char(vm, context[29], ':');
      refalrts::alloc_close_bracket(vm, context[30]);
      refalrts::alloc_close_call(vm, context[31]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[10] );
      refalrts::link_brackets( context[22], context[23] );
      refalrts::link_brackets( context[17], context[18] );
      refalrts::push_stack( vm, context[31] );
      refalrts::push_stack( vm, context[24] );
      refalrts::link_brackets( context[26], context[30] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[11], context[12] );
      res = refalrts::splice_evar( res, context[0], context[6] );
      res = refalrts::splice_evar( res, context[18], context[10] );
      res = refalrts::splice_elem( res, context[31] );
      res = refalrts::splice_evar( res, context[15], context[16] );
      res = refalrts::splice_evar( res, context[24], context[30] );
      res = refalrts::splice_evar( res, context[9], context[17] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Map@4/4 t.Pt/5 t.Next/9 e.Tail/11 >/1
    context[11] = context[7];
    context[12] = context[8];
    // closed e.Tail as range 11
    //DEBUG: t.Pt: 5
    //DEBUG: t.Next: 9
    //DEBUG: e.Tail: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </13 & ApplyContraction-toEquation*1/14 (/15 t.Pt/5/16 ':'/18 )/19 Tile{ AsIs: t.Next/9 } >/20 Tile{ AsIs: </0 AsIs: & Map@4/4 AsIs: t.Pt/5 } Tile{ AsIs: e.Tail/11 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[13]);
    refalrts::alloc_name(vm, context[14], functions[efunc_gen_ApplyContractionm_toEquation_D1]);
    refalrts::alloc_open_bracket(vm, context[15]);
    refalrts::copy_evar(vm, context[16], context[17], context[5], context[6]);
    refalrts::alloc_char(vm, context[18], ':');
    refalrts::alloc_close_bracket(vm, context[19]);
    refalrts::alloc_close_call(vm, context[20]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[20] );
    refalrts::push_stack( vm, context[13] );
    refalrts::link_brackets( context[15], context[19] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[0], context[6] );
    res = refalrts::splice_elem( res, context[20] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[13], context[19] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Map@4/4 t.Pt/5 >/1
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    //DEBUG: t.Pt: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Map@4/4 t.Pt/5 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Map@4/4 t.Pt/5 e.items/2 >/1
  // closed e.items as range 2
  //DEBUG: t.Pt: 5
  //DEBUG: e.items: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map@0/4 } (/7 & ApplyContraction-toEquation@0/8 (/9 Tile{ AsIs: t.Pt/5 } ':'/10 )/11 )/12 Tile{ AsIs: e.items/2 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[7]);
  refalrts::alloc_name(vm, context[8], functions[efunc_gen_ApplyContractionm_toEquation_Z0]);
  refalrts::alloc_open_bracket(vm, context[9]);
  refalrts::alloc_char(vm, context[10], ':');
  refalrts::alloc_close_bracket(vm, context[11]);
  refalrts::alloc_close_bracket(vm, context[12]);
  refalrts::update_name(context[4], functions[efunc_gen_Map_Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[12] );
  refalrts::link_brackets( context[9], context[11] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[10], context[12] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[7], context[9] );
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
  // issue here memory for vars with 26 elems
  refalrts::Iter context[26];
  refalrts::zeros( context, 26 );
  // </0 & Map@5/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & Map@5/4 t.new1/5 e.new2/2 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  // closed e.new2 as range 2
  do {
    // </0 & Map@5/4 t.new3/5 t.new4/9 e.new5/7 >/1
    context[7] = context[2];
    context[8] = context[3];
    context[10] = refalrts::tvar_left( context[9], context[7], context[8] );
    if( ! context[10] )
      continue;
    // closed e.new5 as range 7
    do {
      // </0 & Map@5/4 t.Pt/5 (/9 e.1/13 ':'/17 t./15 )/10 e.Tail/11 >/1
      context[11] = context[7];
      context[12] = context[8];
      context[13] = 0;
      context[14] = 0;
      if( ! refalrts::brackets_term( context[13], context[14], context[9] ) )
        continue;
      // closed e.Tail as range 11
      context[16] = refalrts::tvar_right( context[15], context[13], context[14] );
      if( ! context[16] )
        continue;
      context[17] = refalrts::char_right( ':', context[13], context[14] );
      if( ! context[17] )
        continue;
      // closed e.1 as range 13
      //DEBUG: t.Pt: 5
      //DEBUG: e.Tail: 11
      //DEBUG: t.: 15
      //DEBUG: e.1: 13

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } (/18 </19 & ApplyContraction-toExpr/20 Tile{ AsIs: (/9 } t.Pt/5/21 ':'/23 )/24 Tile{ AsIs: e.1/13 } >/25 Tile{ AsIs: ':'/17 AsIs: t./15 AsIs: )/10 } Tile{ AsIs: </0 AsIs: & Map@5/4 AsIs: t.Pt/5 } Tile{ AsIs: e.Tail/11 } Tile{ AsIs: >/1 ]] }
      refalrts::alloc_open_bracket(vm, context[18]);
      refalrts::alloc_open_call(vm, context[19]);
      refalrts::alloc_name(vm, context[20], functions[efunc_ApplyContractionm_toExpr]);
      refalrts::copy_evar(vm, context[21], context[22], context[5], context[6]);
      refalrts::alloc_char(vm, context[23], ':');
      refalrts::alloc_close_bracket(vm, context[24]);
      refalrts::alloc_close_call(vm, context[25]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[18], context[10] );
      refalrts::push_stack( vm, context[25] );
      refalrts::push_stack( vm, context[19] );
      refalrts::link_brackets( context[9], context[24] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[11], context[12] );
      res = refalrts::splice_evar( res, context[0], context[6] );
      res = refalrts::splice_evar( res, context[17], context[10] );
      res = refalrts::splice_elem( res, context[25] );
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_evar( res, context[21], context[24] );
      res = refalrts::splice_elem( res, context[9] );
      res = refalrts::splice_evar( res, context[18], context[20] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Map@5/4 t.Pt/5 t.Next/9 e.Tail/11 >/1
    context[11] = context[7];
    context[12] = context[8];
    // closed e.Tail as range 11
    //DEBUG: t.Pt: 5
    //DEBUG: t.Next: 9
    //DEBUG: e.Tail: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </13 & ApplyContraction-toAssign*1/14 (/15 t.Pt/5/16 ':'/18 )/19 Tile{ AsIs: t.Next/9 } >/20 Tile{ AsIs: </0 AsIs: & Map@5/4 AsIs: t.Pt/5 } Tile{ AsIs: e.Tail/11 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[13]);
    refalrts::alloc_name(vm, context[14], functions[efunc_gen_ApplyContractionm_toAssign_D1]);
    refalrts::alloc_open_bracket(vm, context[15]);
    refalrts::copy_evar(vm, context[16], context[17], context[5], context[6]);
    refalrts::alloc_char(vm, context[18], ':');
    refalrts::alloc_close_bracket(vm, context[19]);
    refalrts::alloc_close_call(vm, context[20]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[20] );
    refalrts::push_stack( vm, context[13] );
    refalrts::link_brackets( context[15], context[19] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[0], context[6] );
    res = refalrts::splice_elem( res, context[20] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[13], context[19] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Map@5/4 t.Pt/5 >/1
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    //DEBUG: t.Pt: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Map@5/4 t.Pt/5 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Map@5/4 t.Pt/5 e.items/2 >/1
  // closed e.items as range 2
  //DEBUG: t.Pt: 5
  //DEBUG: e.items: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map@0/4 } (/7 & ApplyContraction-toAssign@0/8 (/9 Tile{ AsIs: t.Pt/5 } ':'/10 )/11 )/12 Tile{ AsIs: e.items/2 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[7]);
  refalrts::alloc_name(vm, context[8], functions[efunc_gen_ApplyContractionm_toAssign_Z0]);
  refalrts::alloc_open_bracket(vm, context[9]);
  refalrts::alloc_char(vm, context[10], ':');
  refalrts::alloc_close_bracket(vm, context[11]);
  refalrts::alloc_close_bracket(vm, context[12]);
  refalrts::update_name(context[4], functions[efunc_gen_Map_Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[12] );
  refalrts::link_brackets( context[9], context[11] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[10], context[12] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[7], context[9] );
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
  // issue here memory for vars with 60 elems
  refalrts::Iter context[60];
  refalrts::zeros( context, 60 );
  // </0 & Map@6/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & Map@6/4 t.new1/5 (/9 e.new2/7 )/10 (/13 e.new3/11 )/14 e.new4/2 >/1
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
  // closed e.new2 as range 7
  // closed e.new3 as range 11
  // closed e.new4 as range 2
  do {
    // </0 & Map@6/4 t.new5/5 (/9 e.new8/15 )/10 (/13 e.new9/17 )/14 t.new6/21 e.new7/19 >/1
    context[15] = context[7];
    context[16] = context[8];
    context[17] = context[11];
    context[18] = context[12];
    context[19] = context[2];
    context[20] = context[3];
    // closed e.new8 as range 15
    // closed e.new9 as range 17
    context[22] = refalrts::tvar_left( context[21], context[19], context[20] );
    if( ! context[22] )
      continue;
    // closed e.new7 as range 19
    do {
      // </0 & Map@6/4 t.Pt/5 (/9 e.eIdx/23 )/10 (/13 e.tIdx/25 )/14 (/21 (/33 e.1/31 )/34 ':'/35 (/38 e.4/36 )/39 )/22 e.Tail/27 >/1
      context[23] = context[15];
      context[24] = context[16];
      context[25] = context[17];
      context[26] = context[18];
      context[27] = context[19];
      context[28] = context[20];
      context[29] = 0;
      context[30] = 0;
      if( ! refalrts::brackets_term( context[29], context[30], context[21] ) )
        continue;
      context[31] = 0;
      context[32] = 0;
      context[33] = refalrts::brackets_left( context[31], context[32], context[29], context[30] );
      if( ! context[33] )
        continue;
      refalrts::bracket_pointers(context[33], context[34]);
      context[35] = refalrts::char_left( ':', context[29], context[30] );
      if( ! context[35] )
        continue;
      context[36] = 0;
      context[37] = 0;
      context[38] = refalrts::brackets_left( context[36], context[37], context[29], context[30] );
      if( ! context[38] )
        continue;
      refalrts::bracket_pointers(context[38], context[39]);
      if( ! refalrts::empty_seq( context[29], context[30] ) )
        continue;
      // closed e.eIdx as range 23
      // closed e.tIdx as range 25
      // closed e.1 as range 31
      // closed e.4 as range 36
      // closed e.Tail as range 27
      //DEBUG: t.Pt: 5
      //DEBUG: e.eIdx: 23
      //DEBUG: e.tIdx: 25
      //DEBUG: e.1: 31
      //DEBUG: e.4: 36
      //DEBUG: e.Tail: 27

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/21 AsIs: (/33 } </40 & ApplyContraction-toExpr/41 (/42 t.Pt/5/43 ':'/45 (/46 # Var/47 'e'/48 e.eIdx/23/49 )/51 (/52 # Var/53 't'/54 e.tIdx/25/55 )/57 )/58 Tile{ AsIs: e.1/31 } >/59 Tile{ AsIs: )/34 AsIs: ':'/35 AsIs: (/38 AsIs: e.4/36 AsIs: )/39 AsIs: )/22 } Tile{ AsIs: </0 AsIs: & Map@6/4 AsIs: t.Pt/5 AsIs: (/9 AsIs: e.eIdx/23 AsIs: )/10 AsIs: (/13 AsIs: e.tIdx/25 AsIs: )/14 } Tile{ AsIs: e.Tail/27 } Tile{ AsIs: >/1 ]] }
      refalrts::alloc_open_call(vm, context[40]);
      refalrts::alloc_name(vm, context[41], functions[efunc_ApplyContractionm_toExpr]);
      refalrts::alloc_open_bracket(vm, context[42]);
      refalrts::copy_evar(vm, context[43], context[44], context[5], context[6]);
      refalrts::alloc_char(vm, context[45], ':');
      refalrts::alloc_open_bracket(vm, context[46]);
      refalrts::alloc_ident(vm, context[47], identifiers[ident_Var]);
      refalrts::alloc_char(vm, context[48], 'e');
      refalrts::copy_evar(vm, context[49], context[50], context[23], context[24]);
      refalrts::alloc_close_bracket(vm, context[51]);
      refalrts::alloc_open_bracket(vm, context[52]);
      refalrts::alloc_ident(vm, context[53], identifiers[ident_Var]);
      refalrts::alloc_char(vm, context[54], 't');
      refalrts::copy_evar(vm, context[55], context[56], context[25], context[26]);
      refalrts::alloc_close_bracket(vm, context[57]);
      refalrts::alloc_close_bracket(vm, context[58]);
      refalrts::alloc_close_call(vm, context[59]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[13], context[14] );
      refalrts::link_brackets( context[9], context[10] );
      refalrts::link_brackets( context[21], context[22] );
      refalrts::link_brackets( context[38], context[39] );
      refalrts::link_brackets( context[33], context[34] );
      refalrts::push_stack( vm, context[59] );
      refalrts::push_stack( vm, context[40] );
      refalrts::link_brackets( context[42], context[58] );
      refalrts::link_brackets( context[52], context[57] );
      refalrts::link_brackets( context[46], context[51] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[27], context[28] );
      res = refalrts::splice_evar( res, context[0], context[14] );
      res = refalrts::splice_evar( res, context[34], context[22] );
      res = refalrts::splice_elem( res, context[59] );
      res = refalrts::splice_evar( res, context[31], context[32] );
      res = refalrts::splice_evar( res, context[40], context[58] );
      res = refalrts::splice_evar( res, context[21], context[33] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Map@6/4 t.Pt/5 (/9 e.eIdx/23 )/10 (/13 e.tIdx/25 )/14 t.Next/21 e.Tail/27 >/1
    context[23] = context[15];
    context[24] = context[16];
    context[25] = context[17];
    context[26] = context[18];
    context[27] = context[19];
    context[28] = context[20];
    // closed e.eIdx as range 23
    // closed e.tIdx as range 25
    // closed e.Tail as range 27
    //DEBUG: t.Pt: 5
    //DEBUG: t.Next: 21
    //DEBUG: e.eIdx: 23
    //DEBUG: e.tIdx: 25
    //DEBUG: e.Tail: 27

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </29 & ApplyContraction-toEquation*1/30 (/31 t.Pt/5/32 ':'/34 (/35 # Var/36 'e'/37 e.eIdx/23/38 )/40 (/41 # Var/42 't'/43 e.tIdx/25/44 )/46 )/47 Tile{ AsIs: t.Next/21 } >/48 Tile{ AsIs: </0 AsIs: & Map@6/4 AsIs: t.Pt/5 AsIs: (/9 AsIs: e.eIdx/23 AsIs: )/10 AsIs: (/13 AsIs: e.tIdx/25 AsIs: )/14 } Tile{ AsIs: e.Tail/27 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[29]);
    refalrts::alloc_name(vm, context[30], functions[efunc_gen_ApplyContractionm_toEquation_D1]);
    refalrts::alloc_open_bracket(vm, context[31]);
    refalrts::copy_evar(vm, context[32], context[33], context[5], context[6]);
    refalrts::alloc_char(vm, context[34], ':');
    refalrts::alloc_open_bracket(vm, context[35]);
    refalrts::alloc_ident(vm, context[36], identifiers[ident_Var]);
    refalrts::alloc_char(vm, context[37], 'e');
    refalrts::copy_evar(vm, context[38], context[39], context[23], context[24]);
    refalrts::alloc_close_bracket(vm, context[40]);
    refalrts::alloc_open_bracket(vm, context[41]);
    refalrts::alloc_ident(vm, context[42], identifiers[ident_Var]);
    refalrts::alloc_char(vm, context[43], 't');
    refalrts::copy_evar(vm, context[44], context[45], context[25], context[26]);
    refalrts::alloc_close_bracket(vm, context[46]);
    refalrts::alloc_close_bracket(vm, context[47]);
    refalrts::alloc_close_call(vm, context[48]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[13], context[14] );
    refalrts::link_brackets( context[9], context[10] );
    refalrts::push_stack( vm, context[48] );
    refalrts::push_stack( vm, context[29] );
    refalrts::link_brackets( context[31], context[47] );
    refalrts::link_brackets( context[41], context[46] );
    refalrts::link_brackets( context[35], context[40] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[27], context[28] );
    res = refalrts::splice_evar( res, context[0], context[14] );
    res = refalrts::splice_elem( res, context[48] );
    res = refalrts::splice_evar( res, context[21], context[22] );
    res = refalrts::splice_evar( res, context[29], context[47] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Map@6/4 t.Pt/5 (/9 e.eIdx/15 )/10 (/13 e.tIdx/17 )/14 >/1
    context[15] = context[7];
    context[16] = context[8];
    context[17] = context[11];
    context[18] = context[12];
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.eIdx as range 15
    // closed e.tIdx as range 17
    //DEBUG: t.Pt: 5
    //DEBUG: e.eIdx: 15
    //DEBUG: e.tIdx: 17

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Map@6/4 t.Pt/5 (/9 e.eIdx/15 )/10 (/13 e.tIdx/17 )/14 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Map@6/4 t.Pt/5 (/9 e.eIdx/7 )/10 (/13 e.tIdx/11 )/14 e.items/2 >/1
  // closed e.eIdx as range 7
  // closed e.tIdx as range 11
  // closed e.items as range 2
  //DEBUG: t.Pt: 5
  //DEBUG: e.eIdx: 7
  //DEBUG: e.tIdx: 11
  //DEBUG: e.items: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map@0/4 } (/15 & ApplyContraction-toEquation@0/16 (/17 Tile{ AsIs: t.Pt/5 } ':'/18 (/19 # Var/20 Tile{ HalfReuse: 'e'/9 AsIs: e.eIdx/7 AsIs: )/10 AsIs: (/13 } # Var/21 't'/22 Tile{ AsIs: e.tIdx/11 } )/23 )/24 Tile{ AsIs: )/14 AsIs: e.items/2 AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[15]);
  refalrts::alloc_name(vm, context[16], functions[efunc_gen_ApplyContractionm_toEquation_Z0]);
  refalrts::alloc_open_bracket(vm, context[17]);
  refalrts::alloc_char(vm, context[18], ':');
  refalrts::alloc_open_bracket(vm, context[19]);
  refalrts::alloc_ident(vm, context[20], identifiers[ident_Var]);
  refalrts::alloc_ident(vm, context[21], identifiers[ident_Var]);
  refalrts::alloc_char(vm, context[22], 't');
  refalrts::alloc_close_bracket(vm, context[23]);
  refalrts::alloc_close_bracket(vm, context[24]);
  refalrts::update_name(context[4], functions[efunc_gen_Map_Z0]);
  refalrts::reinit_char(context[9], 'e');
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[15], context[14] );
  refalrts::link_brackets( context[17], context[24] );
  refalrts::link_brackets( context[13], context[23] );
  refalrts::link_brackets( context[19], context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[14];
  res = refalrts::splice_evar( res, context[23], context[24] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_evar( res, context[21], context[22] );
  res = refalrts::splice_evar( res, context[9], context[13] );
  res = refalrts::splice_evar( res, context[18], context[20] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[15], context[17] );
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
  // issue here memory for vars with 54 elems
  refalrts::Iter context[54];
  refalrts::zeros( context, 54 );
  // </0 & Map@7/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & Map@7/4 t.new1/5 (/9 e.new2/7 )/10 (/13 e.new3/11 )/14 e.new4/2 >/1
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
  // closed e.new2 as range 7
  // closed e.new3 as range 11
  // closed e.new4 as range 2
  do {
    // </0 & Map@7/4 t.new5/5 (/9 e.new8/15 )/10 (/13 e.new9/17 )/14 t.new6/21 e.new7/19 >/1
    context[15] = context[7];
    context[16] = context[8];
    context[17] = context[11];
    context[18] = context[12];
    context[19] = context[2];
    context[20] = context[3];
    // closed e.new8 as range 15
    // closed e.new9 as range 17
    context[22] = refalrts::tvar_left( context[21], context[19], context[20] );
    if( ! context[22] )
      continue;
    // closed e.new7 as range 19
    do {
      // </0 & Map@7/4 t.Pt/5 (/9 e.eIdx/23 )/10 (/13 e.tIdx/25 )/14 (/21 e.1/29 ':'/33 t./31 )/22 e.Tail/27 >/1
      context[23] = context[15];
      context[24] = context[16];
      context[25] = context[17];
      context[26] = context[18];
      context[27] = context[19];
      context[28] = context[20];
      context[29] = 0;
      context[30] = 0;
      if( ! refalrts::brackets_term( context[29], context[30], context[21] ) )
        continue;
      // closed e.eIdx as range 23
      // closed e.tIdx as range 25
      // closed e.Tail as range 27
      context[32] = refalrts::tvar_right( context[31], context[29], context[30] );
      if( ! context[32] )
        continue;
      context[33] = refalrts::char_right( ':', context[29], context[30] );
      if( ! context[33] )
        continue;
      // closed e.1 as range 29
      //DEBUG: t.Pt: 5
      //DEBUG: e.eIdx: 23
      //DEBUG: e.tIdx: 25
      //DEBUG: e.Tail: 27
      //DEBUG: t.: 31
      //DEBUG: e.1: 29

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } (/34 </35 & ApplyContraction-toExpr/36 Tile{ AsIs: (/21 } t.Pt/5/37 ':'/39 (/40 # Var/41 'e'/42 e.eIdx/23/43 )/45 (/46 # Var/47 't'/48 e.tIdx/25/49 )/51 )/52 Tile{ AsIs: e.1/29 } >/53 Tile{ AsIs: ':'/33 AsIs: t./31 AsIs: )/22 } Tile{ AsIs: </0 AsIs: & Map@7/4 AsIs: t.Pt/5 AsIs: (/9 AsIs: e.eIdx/23 AsIs: )/10 AsIs: (/13 AsIs: e.tIdx/25 AsIs: )/14 } Tile{ AsIs: e.Tail/27 } Tile{ AsIs: >/1 ]] }
      refalrts::alloc_open_bracket(vm, context[34]);
      refalrts::alloc_open_call(vm, context[35]);
      refalrts::alloc_name(vm, context[36], functions[efunc_ApplyContractionm_toExpr]);
      refalrts::copy_evar(vm, context[37], context[38], context[5], context[6]);
      refalrts::alloc_char(vm, context[39], ':');
      refalrts::alloc_open_bracket(vm, context[40]);
      refalrts::alloc_ident(vm, context[41], identifiers[ident_Var]);
      refalrts::alloc_char(vm, context[42], 'e');
      refalrts::copy_evar(vm, context[43], context[44], context[23], context[24]);
      refalrts::alloc_close_bracket(vm, context[45]);
      refalrts::alloc_open_bracket(vm, context[46]);
      refalrts::alloc_ident(vm, context[47], identifiers[ident_Var]);
      refalrts::alloc_char(vm, context[48], 't');
      refalrts::copy_evar(vm, context[49], context[50], context[25], context[26]);
      refalrts::alloc_close_bracket(vm, context[51]);
      refalrts::alloc_close_bracket(vm, context[52]);
      refalrts::alloc_close_call(vm, context[53]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[13], context[14] );
      refalrts::link_brackets( context[9], context[10] );
      refalrts::link_brackets( context[34], context[22] );
      refalrts::push_stack( vm, context[53] );
      refalrts::push_stack( vm, context[35] );
      refalrts::link_brackets( context[21], context[52] );
      refalrts::link_brackets( context[46], context[51] );
      refalrts::link_brackets( context[40], context[45] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[27], context[28] );
      res = refalrts::splice_evar( res, context[0], context[14] );
      res = refalrts::splice_evar( res, context[33], context[22] );
      res = refalrts::splice_elem( res, context[53] );
      res = refalrts::splice_evar( res, context[29], context[30] );
      res = refalrts::splice_evar( res, context[37], context[52] );
      res = refalrts::splice_elem( res, context[21] );
      res = refalrts::splice_evar( res, context[34], context[36] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Map@7/4 t.Pt/5 (/9 e.eIdx/23 )/10 (/13 e.tIdx/25 )/14 t.Next/21 e.Tail/27 >/1
    context[23] = context[15];
    context[24] = context[16];
    context[25] = context[17];
    context[26] = context[18];
    context[27] = context[19];
    context[28] = context[20];
    // closed e.eIdx as range 23
    // closed e.tIdx as range 25
    // closed e.Tail as range 27
    //DEBUG: t.Pt: 5
    //DEBUG: t.Next: 21
    //DEBUG: e.eIdx: 23
    //DEBUG: e.tIdx: 25
    //DEBUG: e.Tail: 27

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </29 & ApplyContraction-toAssign*1/30 (/31 t.Pt/5/32 ':'/34 (/35 # Var/36 'e'/37 e.eIdx/23/38 )/40 (/41 # Var/42 't'/43 e.tIdx/25/44 )/46 )/47 Tile{ AsIs: t.Next/21 } >/48 Tile{ AsIs: </0 AsIs: & Map@7/4 AsIs: t.Pt/5 AsIs: (/9 AsIs: e.eIdx/23 AsIs: )/10 AsIs: (/13 AsIs: e.tIdx/25 AsIs: )/14 } Tile{ AsIs: e.Tail/27 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[29]);
    refalrts::alloc_name(vm, context[30], functions[efunc_gen_ApplyContractionm_toAssign_D1]);
    refalrts::alloc_open_bracket(vm, context[31]);
    refalrts::copy_evar(vm, context[32], context[33], context[5], context[6]);
    refalrts::alloc_char(vm, context[34], ':');
    refalrts::alloc_open_bracket(vm, context[35]);
    refalrts::alloc_ident(vm, context[36], identifiers[ident_Var]);
    refalrts::alloc_char(vm, context[37], 'e');
    refalrts::copy_evar(vm, context[38], context[39], context[23], context[24]);
    refalrts::alloc_close_bracket(vm, context[40]);
    refalrts::alloc_open_bracket(vm, context[41]);
    refalrts::alloc_ident(vm, context[42], identifiers[ident_Var]);
    refalrts::alloc_char(vm, context[43], 't');
    refalrts::copy_evar(vm, context[44], context[45], context[25], context[26]);
    refalrts::alloc_close_bracket(vm, context[46]);
    refalrts::alloc_close_bracket(vm, context[47]);
    refalrts::alloc_close_call(vm, context[48]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[13], context[14] );
    refalrts::link_brackets( context[9], context[10] );
    refalrts::push_stack( vm, context[48] );
    refalrts::push_stack( vm, context[29] );
    refalrts::link_brackets( context[31], context[47] );
    refalrts::link_brackets( context[41], context[46] );
    refalrts::link_brackets( context[35], context[40] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[27], context[28] );
    res = refalrts::splice_evar( res, context[0], context[14] );
    res = refalrts::splice_elem( res, context[48] );
    res = refalrts::splice_evar( res, context[21], context[22] );
    res = refalrts::splice_evar( res, context[29], context[47] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Map@7/4 t.Pt/5 (/9 e.eIdx/15 )/10 (/13 e.tIdx/17 )/14 >/1
    context[15] = context[7];
    context[16] = context[8];
    context[17] = context[11];
    context[18] = context[12];
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.eIdx as range 15
    // closed e.tIdx as range 17
    //DEBUG: t.Pt: 5
    //DEBUG: e.eIdx: 15
    //DEBUG: e.tIdx: 17

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Map@7/4 t.Pt/5 (/9 e.eIdx/15 )/10 (/13 e.tIdx/17 )/14 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Map@7/4 t.Pt/5 (/9 e.eIdx/7 )/10 (/13 e.tIdx/11 )/14 e.items/2 >/1
  // closed e.eIdx as range 7
  // closed e.tIdx as range 11
  // closed e.items as range 2
  //DEBUG: t.Pt: 5
  //DEBUG: e.eIdx: 7
  //DEBUG: e.tIdx: 11
  //DEBUG: e.items: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map@0/4 } (/15 & ApplyContraction-toAssign@0/16 (/17 Tile{ AsIs: t.Pt/5 } ':'/18 (/19 # Var/20 Tile{ HalfReuse: 'e'/9 AsIs: e.eIdx/7 AsIs: )/10 AsIs: (/13 } # Var/21 't'/22 Tile{ AsIs: e.tIdx/11 } )/23 )/24 Tile{ AsIs: )/14 AsIs: e.items/2 AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[15]);
  refalrts::alloc_name(vm, context[16], functions[efunc_gen_ApplyContractionm_toAssign_Z0]);
  refalrts::alloc_open_bracket(vm, context[17]);
  refalrts::alloc_char(vm, context[18], ':');
  refalrts::alloc_open_bracket(vm, context[19]);
  refalrts::alloc_ident(vm, context[20], identifiers[ident_Var]);
  refalrts::alloc_ident(vm, context[21], identifiers[ident_Var]);
  refalrts::alloc_char(vm, context[22], 't');
  refalrts::alloc_close_bracket(vm, context[23]);
  refalrts::alloc_close_bracket(vm, context[24]);
  refalrts::update_name(context[4], functions[efunc_gen_Map_Z0]);
  refalrts::reinit_char(context[9], 'e');
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[15], context[14] );
  refalrts::link_brackets( context[17], context[24] );
  refalrts::link_brackets( context[13], context[23] );
  refalrts::link_brackets( context[19], context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[14];
  res = refalrts::splice_evar( res, context[23], context[24] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_evar( res, context[21], context[22] );
  res = refalrts::splice_evar( res, context[9], context[13] );
  res = refalrts::splice_evar( res, context[18], context[20] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[15], context[17] );
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
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  // </0 & Map@8/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  do {
    // </0 & Map@8/4 t.Next/7 e.Tail/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[8] = refalrts::tvar_left( context[7], context[5], context[6] );
    if( ! context[8] )
      continue;
    // closed e.Tail as range 5
    //DEBUG: t.Next: 7
    //DEBUG: e.Tail: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } (/9 Tile{ AsIs: t.Next/7 } ':'/10 )/11 Tile{ AsIs: </0 AsIs: & Map@8/4 } Tile{ AsIs: e.Tail/5 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_bracket(vm, context[9]);
    refalrts::alloc_char(vm, context[10], ':');
    refalrts::alloc_close_bracket(vm, context[11]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[9], context[11] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[10], context[11] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_elem( res, context[9] );
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

  // </0 & Map@8/4 e.items/2 >/1
  // closed e.items as range 2
  //DEBUG: e.items: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Map@0/0 Reuse: & Solve-Aux$8:1$1=1\1@0/4 AsIs: e.items/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::reinit_name(context[0], functions[efunc_gen_Map_Z0]);
  refalrts::update_name(context[4], functions[efunc_gen_Solvem_Aux_S8B1S1A1L1Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_elem( res, context[5] );
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
  // issue here memory for vars with 49 elems
  refalrts::Iter context[49];
  refalrts::zeros( context, 49 );
  // </0 & Map@9/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & Map@9/4 t.new1/5 (/9 e.new2/7 )/10 e.new3/2 >/1
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
    // </0 & Map@9/4 t.new4/5 (/9 e.new7/11 )/10 t.new5/15 e.new6/13 >/1
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
      // </0 & Map@9/4 t.PTvar/5 (/9 e.NewIndex/17 )/10 (/15 (/25 e.1/23 )/26 ':'/27 (/30 e.4/28 )/31 )/16 e.Tail/19 >/1
      context[17] = context[11];
      context[18] = context[12];
      context[19] = context[13];
      context[20] = context[14];
      context[21] = 0;
      context[22] = 0;
      if( ! refalrts::brackets_term( context[21], context[22], context[15] ) )
        continue;
      context[23] = 0;
      context[24] = 0;
      context[25] = refalrts::brackets_left( context[23], context[24], context[21], context[22] );
      if( ! context[25] )
        continue;
      refalrts::bracket_pointers(context[25], context[26]);
      context[27] = refalrts::char_left( ':', context[21], context[22] );
      if( ! context[27] )
        continue;
      context[28] = 0;
      context[29] = 0;
      context[30] = refalrts::brackets_left( context[28], context[29], context[21], context[22] );
      if( ! context[30] )
        continue;
      refalrts::bracket_pointers(context[30], context[31]);
      if( ! refalrts::empty_seq( context[21], context[22] ) )
        continue;
      // closed e.NewIndex as range 17
      // closed e.1 as range 23
      // closed e.4 as range 28
      // closed e.Tail as range 19
      //DEBUG: t.PTvar: 5
      //DEBUG: e.NewIndex: 17
      //DEBUG: e.1: 23
      //DEBUG: e.4: 28
      //DEBUG: e.Tail: 19

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/15 AsIs: (/25 } </32 & ApplyContraction-toExpr/33 (/34 t.PTvar/5/35 ':'/37 (/38 # Brackets/39 (/40 # Var/41 'e'/42 e.NewIndex/17/43 )/45 )/46 )/47 Tile{ AsIs: e.1/23 } >/48 Tile{ AsIs: )/26 AsIs: ':'/27 AsIs: (/30 AsIs: e.4/28 AsIs: )/31 AsIs: )/16 } Tile{ AsIs: </0 AsIs: & Map@9/4 AsIs: t.PTvar/5 AsIs: (/9 AsIs: e.NewIndex/17 AsIs: )/10 } Tile{ AsIs: e.Tail/19 } Tile{ AsIs: >/1 ]] }
      refalrts::alloc_open_call(vm, context[32]);
      refalrts::alloc_name(vm, context[33], functions[efunc_ApplyContractionm_toExpr]);
      refalrts::alloc_open_bracket(vm, context[34]);
      refalrts::copy_evar(vm, context[35], context[36], context[5], context[6]);
      refalrts::alloc_char(vm, context[37], ':');
      refalrts::alloc_open_bracket(vm, context[38]);
      refalrts::alloc_ident(vm, context[39], identifiers[ident_Brackets]);
      refalrts::alloc_open_bracket(vm, context[40]);
      refalrts::alloc_ident(vm, context[41], identifiers[ident_Var]);
      refalrts::alloc_char(vm, context[42], 'e');
      refalrts::copy_evar(vm, context[43], context[44], context[17], context[18]);
      refalrts::alloc_close_bracket(vm, context[45]);
      refalrts::alloc_close_bracket(vm, context[46]);
      refalrts::alloc_close_bracket(vm, context[47]);
      refalrts::alloc_close_call(vm, context[48]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[10] );
      refalrts::link_brackets( context[15], context[16] );
      refalrts::link_brackets( context[30], context[31] );
      refalrts::link_brackets( context[25], context[26] );
      refalrts::push_stack( vm, context[48] );
      refalrts::push_stack( vm, context[32] );
      refalrts::link_brackets( context[34], context[47] );
      refalrts::link_brackets( context[38], context[46] );
      refalrts::link_brackets( context[40], context[45] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[19], context[20] );
      res = refalrts::splice_evar( res, context[0], context[10] );
      res = refalrts::splice_evar( res, context[26], context[16] );
      res = refalrts::splice_elem( res, context[48] );
      res = refalrts::splice_evar( res, context[23], context[24] );
      res = refalrts::splice_evar( res, context[32], context[47] );
      res = refalrts::splice_evar( res, context[15], context[25] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Map@9/4 t.PTvar/5 (/9 e.NewIndex/17 )/10 t.Next/15 e.Tail/19 >/1
    context[17] = context[11];
    context[18] = context[12];
    context[19] = context[13];
    context[20] = context[14];
    // closed e.NewIndex as range 17
    // closed e.Tail as range 19
    //DEBUG: t.PTvar: 5
    //DEBUG: t.Next: 15
    //DEBUG: e.NewIndex: 17
    //DEBUG: e.Tail: 19

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </21 & ApplyContraction-toEquation*1/22 (/23 t.PTvar/5/24 ':'/26 (/27 # Brackets/28 (/29 # Var/30 'e'/31 e.NewIndex/17/32 )/34 )/35 )/36 Tile{ AsIs: t.Next/15 } >/37 Tile{ AsIs: </0 AsIs: & Map@9/4 AsIs: t.PTvar/5 AsIs: (/9 AsIs: e.NewIndex/17 AsIs: )/10 } Tile{ AsIs: e.Tail/19 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[21]);
    refalrts::alloc_name(vm, context[22], functions[efunc_gen_ApplyContractionm_toEquation_D1]);
    refalrts::alloc_open_bracket(vm, context[23]);
    refalrts::copy_evar(vm, context[24], context[25], context[5], context[6]);
    refalrts::alloc_char(vm, context[26], ':');
    refalrts::alloc_open_bracket(vm, context[27]);
    refalrts::alloc_ident(vm, context[28], identifiers[ident_Brackets]);
    refalrts::alloc_open_bracket(vm, context[29]);
    refalrts::alloc_ident(vm, context[30], identifiers[ident_Var]);
    refalrts::alloc_char(vm, context[31], 'e');
    refalrts::copy_evar(vm, context[32], context[33], context[17], context[18]);
    refalrts::alloc_close_bracket(vm, context[34]);
    refalrts::alloc_close_bracket(vm, context[35]);
    refalrts::alloc_close_bracket(vm, context[36]);
    refalrts::alloc_close_call(vm, context[37]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[9], context[10] );
    refalrts::push_stack( vm, context[37] );
    refalrts::push_stack( vm, context[21] );
    refalrts::link_brackets( context[23], context[36] );
    refalrts::link_brackets( context[27], context[35] );
    refalrts::link_brackets( context[29], context[34] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[19], context[20] );
    res = refalrts::splice_evar( res, context[0], context[10] );
    res = refalrts::splice_elem( res, context[37] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[21], context[36] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Map@9/4 t.PTvar/5 (/9 e.NewIndex/11 )/10 >/1
    context[11] = context[7];
    context[12] = context[8];
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.NewIndex as range 11
    //DEBUG: t.PTvar: 5
    //DEBUG: e.NewIndex: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Map@9/4 t.PTvar/5 (/9 e.NewIndex/11 )/10 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Map@9/4 t.PTvar/5 (/9 e.NewIndex/7 )/10 e.items/2 >/1
  // closed e.NewIndex as range 7
  // closed e.items as range 2
  //DEBUG: t.PTvar: 5
  //DEBUG: e.NewIndex: 7
  //DEBUG: e.items: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map@0/4 } (/11 & ApplyContraction-toEquation@0/12 (/13 Tile{ AsIs: t.PTvar/5 HalfReuse: ':'/9 } (/14 # Brackets/15 (/16 # Var/17 'e'/18 Tile{ AsIs: e.NewIndex/7 } )/19 )/20 )/21 Tile{ AsIs: )/10 AsIs: e.items/2 AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[11]);
  refalrts::alloc_name(vm, context[12], functions[efunc_gen_ApplyContractionm_toEquation_Z0]);
  refalrts::alloc_open_bracket(vm, context[13]);
  refalrts::alloc_open_bracket(vm, context[14]);
  refalrts::alloc_ident(vm, context[15], identifiers[ident_Brackets]);
  refalrts::alloc_open_bracket(vm, context[16]);
  refalrts::alloc_ident(vm, context[17], identifiers[ident_Var]);
  refalrts::alloc_char(vm, context[18], 'e');
  refalrts::alloc_close_bracket(vm, context[19]);
  refalrts::alloc_close_bracket(vm, context[20]);
  refalrts::alloc_close_bracket(vm, context[21]);
  refalrts::update_name(context[4], functions[efunc_gen_Map_Z0]);
  refalrts::reinit_char(context[9], ':');
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[11], context[10] );
  refalrts::link_brackets( context[13], context[21] );
  refalrts::link_brackets( context[14], context[20] );
  refalrts::link_brackets( context[16], context[19] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[10];
  res = refalrts::splice_evar( res, context[19], context[21] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_evar( res, context[14], context[18] );
  res = refalrts::splice_evar( res, context[5], context[9] );
  res = refalrts::splice_evar( res, context[11], context[13] );
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
  // issue here memory for vars with 43 elems
  refalrts::Iter context[43];
  refalrts::zeros( context, 43 );
  // </0 & Map@10/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & Map@10/4 t.new1/5 (/9 e.new2/7 )/10 e.new3/2 >/1
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
    // </0 & Map@10/4 t.new4/5 (/9 e.new7/11 )/10 t.new5/15 e.new6/13 >/1
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
      // </0 & Map@10/4 t.PTvar/5 (/9 e.NewIndex/17 )/10 (/15 e.1/21 ':'/25 t./23 )/16 e.Tail/19 >/1
      context[17] = context[11];
      context[18] = context[12];
      context[19] = context[13];
      context[20] = context[14];
      context[21] = 0;
      context[22] = 0;
      if( ! refalrts::brackets_term( context[21], context[22], context[15] ) )
        continue;
      // closed e.NewIndex as range 17
      // closed e.Tail as range 19
      context[24] = refalrts::tvar_right( context[23], context[21], context[22] );
      if( ! context[24] )
        continue;
      context[25] = refalrts::char_right( ':', context[21], context[22] );
      if( ! context[25] )
        continue;
      // closed e.1 as range 21
      //DEBUG: t.PTvar: 5
      //DEBUG: e.NewIndex: 17
      //DEBUG: e.Tail: 19
      //DEBUG: t.: 23
      //DEBUG: e.1: 21

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } (/26 </27 & ApplyContraction-toExpr/28 (/29 t.PTvar/5/30 ':'/32 Tile{ AsIs: (/15 } # Brackets/33 (/34 # Var/35 'e'/36 e.NewIndex/17/37 )/39 )/40 )/41 Tile{ AsIs: e.1/21 } >/42 Tile{ AsIs: ':'/25 AsIs: t./23 AsIs: )/16 } Tile{ AsIs: </0 AsIs: & Map@10/4 AsIs: t.PTvar/5 AsIs: (/9 AsIs: e.NewIndex/17 AsIs: )/10 } Tile{ AsIs: e.Tail/19 } Tile{ AsIs: >/1 ]] }
      refalrts::alloc_open_bracket(vm, context[26]);
      refalrts::alloc_open_call(vm, context[27]);
      refalrts::alloc_name(vm, context[28], functions[efunc_ApplyContractionm_toExpr]);
      refalrts::alloc_open_bracket(vm, context[29]);
      refalrts::copy_evar(vm, context[30], context[31], context[5], context[6]);
      refalrts::alloc_char(vm, context[32], ':');
      refalrts::alloc_ident(vm, context[33], identifiers[ident_Brackets]);
      refalrts::alloc_open_bracket(vm, context[34]);
      refalrts::alloc_ident(vm, context[35], identifiers[ident_Var]);
      refalrts::alloc_char(vm, context[36], 'e');
      refalrts::copy_evar(vm, context[37], context[38], context[17], context[18]);
      refalrts::alloc_close_bracket(vm, context[39]);
      refalrts::alloc_close_bracket(vm, context[40]);
      refalrts::alloc_close_bracket(vm, context[41]);
      refalrts::alloc_close_call(vm, context[42]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[10] );
      refalrts::link_brackets( context[26], context[16] );
      refalrts::push_stack( vm, context[42] );
      refalrts::push_stack( vm, context[27] );
      refalrts::link_brackets( context[29], context[41] );
      refalrts::link_brackets( context[15], context[40] );
      refalrts::link_brackets( context[34], context[39] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[19], context[20] );
      res = refalrts::splice_evar( res, context[0], context[10] );
      res = refalrts::splice_evar( res, context[25], context[16] );
      res = refalrts::splice_elem( res, context[42] );
      res = refalrts::splice_evar( res, context[21], context[22] );
      res = refalrts::splice_evar( res, context[33], context[41] );
      res = refalrts::splice_elem( res, context[15] );
      res = refalrts::splice_evar( res, context[26], context[32] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Map@10/4 t.PTvar/5 (/9 e.NewIndex/17 )/10 t.Next/15 e.Tail/19 >/1
    context[17] = context[11];
    context[18] = context[12];
    context[19] = context[13];
    context[20] = context[14];
    // closed e.NewIndex as range 17
    // closed e.Tail as range 19
    //DEBUG: t.PTvar: 5
    //DEBUG: t.Next: 15
    //DEBUG: e.NewIndex: 17
    //DEBUG: e.Tail: 19

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </21 & ApplyContraction-toAssign*1/22 (/23 t.PTvar/5/24 ':'/26 (/27 # Brackets/28 (/29 # Var/30 'e'/31 e.NewIndex/17/32 )/34 )/35 )/36 Tile{ AsIs: t.Next/15 } >/37 Tile{ AsIs: </0 AsIs: & Map@10/4 AsIs: t.PTvar/5 AsIs: (/9 AsIs: e.NewIndex/17 AsIs: )/10 } Tile{ AsIs: e.Tail/19 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[21]);
    refalrts::alloc_name(vm, context[22], functions[efunc_gen_ApplyContractionm_toAssign_D1]);
    refalrts::alloc_open_bracket(vm, context[23]);
    refalrts::copy_evar(vm, context[24], context[25], context[5], context[6]);
    refalrts::alloc_char(vm, context[26], ':');
    refalrts::alloc_open_bracket(vm, context[27]);
    refalrts::alloc_ident(vm, context[28], identifiers[ident_Brackets]);
    refalrts::alloc_open_bracket(vm, context[29]);
    refalrts::alloc_ident(vm, context[30], identifiers[ident_Var]);
    refalrts::alloc_char(vm, context[31], 'e');
    refalrts::copy_evar(vm, context[32], context[33], context[17], context[18]);
    refalrts::alloc_close_bracket(vm, context[34]);
    refalrts::alloc_close_bracket(vm, context[35]);
    refalrts::alloc_close_bracket(vm, context[36]);
    refalrts::alloc_close_call(vm, context[37]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[9], context[10] );
    refalrts::push_stack( vm, context[37] );
    refalrts::push_stack( vm, context[21] );
    refalrts::link_brackets( context[23], context[36] );
    refalrts::link_brackets( context[27], context[35] );
    refalrts::link_brackets( context[29], context[34] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[19], context[20] );
    res = refalrts::splice_evar( res, context[0], context[10] );
    res = refalrts::splice_elem( res, context[37] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[21], context[36] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Map@10/4 t.PTvar/5 (/9 e.NewIndex/11 )/10 >/1
    context[11] = context[7];
    context[12] = context[8];
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.NewIndex as range 11
    //DEBUG: t.PTvar: 5
    //DEBUG: e.NewIndex: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Map@10/4 t.PTvar/5 (/9 e.NewIndex/11 )/10 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Map@10/4 t.PTvar/5 (/9 e.NewIndex/7 )/10 e.items/2 >/1
  // closed e.NewIndex as range 7
  // closed e.items as range 2
  //DEBUG: t.PTvar: 5
  //DEBUG: e.NewIndex: 7
  //DEBUG: e.items: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map@0/4 } (/11 & ApplyContraction-toAssign@0/12 (/13 Tile{ AsIs: t.PTvar/5 HalfReuse: ':'/9 } (/14 # Brackets/15 (/16 # Var/17 'e'/18 Tile{ AsIs: e.NewIndex/7 } )/19 )/20 )/21 Tile{ AsIs: )/10 AsIs: e.items/2 AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[11]);
  refalrts::alloc_name(vm, context[12], functions[efunc_gen_ApplyContractionm_toAssign_Z0]);
  refalrts::alloc_open_bracket(vm, context[13]);
  refalrts::alloc_open_bracket(vm, context[14]);
  refalrts::alloc_ident(vm, context[15], identifiers[ident_Brackets]);
  refalrts::alloc_open_bracket(vm, context[16]);
  refalrts::alloc_ident(vm, context[17], identifiers[ident_Var]);
  refalrts::alloc_char(vm, context[18], 'e');
  refalrts::alloc_close_bracket(vm, context[19]);
  refalrts::alloc_close_bracket(vm, context[20]);
  refalrts::alloc_close_bracket(vm, context[21]);
  refalrts::update_name(context[4], functions[efunc_gen_Map_Z0]);
  refalrts::reinit_char(context[9], ':');
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[11], context[10] );
  refalrts::link_brackets( context[13], context[21] );
  refalrts::link_brackets( context[14], context[20] );
  refalrts::link_brackets( context[16], context[19] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[10];
  res = refalrts::splice_evar( res, context[19], context[21] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_evar( res, context[14], context[18] );
  res = refalrts::splice_evar( res, context[5], context[9] );
  res = refalrts::splice_evar( res, context[11], context[13] );
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
  // issue here memory for vars with 61 elems
  refalrts::Iter context[61];
  refalrts::zeros( context, 61 );
  // </0 & Map@11/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & Map@11/4 t.new1/5 (/9 e.new2/7 )/10 (/13 e.new3/11 )/14 e.new4/2 >/1
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
  // closed e.new2 as range 7
  // closed e.new3 as range 11
  // closed e.new4 as range 2
  do {
    // </0 & Map@11/4 t.new5/5 (/9 e.new8/15 )/10 (/13 e.new9/17 )/14 t.new6/21 e.new7/19 >/1
    context[15] = context[7];
    context[16] = context[8];
    context[17] = context[11];
    context[18] = context[12];
    context[19] = context[2];
    context[20] = context[3];
    // closed e.new8 as range 15
    // closed e.new9 as range 17
    context[22] = refalrts::tvar_left( context[21], context[19], context[20] );
    if( ! context[22] )
      continue;
    // closed e.new7 as range 19
    do {
      // </0 & Map@11/4 t.PTvar/5 (/9 e.Name/23 )/10 (/13 e.NewIndex/25 )/14 (/21 (/33 e.1/31 )/34 ':'/35 (/38 e.4/36 )/39 )/22 e.Tail/27 >/1
      context[23] = context[15];
      context[24] = context[16];
      context[25] = context[17];
      context[26] = context[18];
      context[27] = context[19];
      context[28] = context[20];
      context[29] = 0;
      context[30] = 0;
      if( ! refalrts::brackets_term( context[29], context[30], context[21] ) )
        continue;
      context[31] = 0;
      context[32] = 0;
      context[33] = refalrts::brackets_left( context[31], context[32], context[29], context[30] );
      if( ! context[33] )
        continue;
      refalrts::bracket_pointers(context[33], context[34]);
      context[35] = refalrts::char_left( ':', context[29], context[30] );
      if( ! context[35] )
        continue;
      context[36] = 0;
      context[37] = 0;
      context[38] = refalrts::brackets_left( context[36], context[37], context[29], context[30] );
      if( ! context[38] )
        continue;
      refalrts::bracket_pointers(context[38], context[39]);
      if( ! refalrts::empty_seq( context[29], context[30] ) )
        continue;
      // closed e.Name as range 23
      // closed e.NewIndex as range 25
      // closed e.1 as range 31
      // closed e.4 as range 36
      // closed e.Tail as range 27
      //DEBUG: t.PTvar: 5
      //DEBUG: e.Name: 23
      //DEBUG: e.NewIndex: 25
      //DEBUG: e.1: 31
      //DEBUG: e.4: 36
      //DEBUG: e.Tail: 27

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/21 AsIs: (/33 } </40 & ApplyContraction-toExpr/41 (/42 t.PTvar/5/43 ':'/45 (/46 # ADT-Brackets/47 (/48 e.Name/23/49 )/51 (/52 # Var/53 'e'/54 e.NewIndex/25/55 )/57 )/58 )/59 Tile{ AsIs: e.1/31 } >/60 Tile{ AsIs: )/34 AsIs: ':'/35 AsIs: (/38 AsIs: e.4/36 AsIs: )/39 AsIs: )/22 } Tile{ AsIs: </0 AsIs: & Map@11/4 AsIs: t.PTvar/5 AsIs: (/9 AsIs: e.Name/23 AsIs: )/10 AsIs: (/13 AsIs: e.NewIndex/25 AsIs: )/14 } Tile{ AsIs: e.Tail/27 } Tile{ AsIs: >/1 ]] }
      refalrts::alloc_open_call(vm, context[40]);
      refalrts::alloc_name(vm, context[41], functions[efunc_ApplyContractionm_toExpr]);
      refalrts::alloc_open_bracket(vm, context[42]);
      refalrts::copy_evar(vm, context[43], context[44], context[5], context[6]);
      refalrts::alloc_char(vm, context[45], ':');
      refalrts::alloc_open_bracket(vm, context[46]);
      refalrts::alloc_ident(vm, context[47], identifiers[ident_ADTm_Brackets]);
      refalrts::alloc_open_bracket(vm, context[48]);
      refalrts::copy_evar(vm, context[49], context[50], context[23], context[24]);
      refalrts::alloc_close_bracket(vm, context[51]);
      refalrts::alloc_open_bracket(vm, context[52]);
      refalrts::alloc_ident(vm, context[53], identifiers[ident_Var]);
      refalrts::alloc_char(vm, context[54], 'e');
      refalrts::copy_evar(vm, context[55], context[56], context[25], context[26]);
      refalrts::alloc_close_bracket(vm, context[57]);
      refalrts::alloc_close_bracket(vm, context[58]);
      refalrts::alloc_close_bracket(vm, context[59]);
      refalrts::alloc_close_call(vm, context[60]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[13], context[14] );
      refalrts::link_brackets( context[9], context[10] );
      refalrts::link_brackets( context[21], context[22] );
      refalrts::link_brackets( context[38], context[39] );
      refalrts::link_brackets( context[33], context[34] );
      refalrts::push_stack( vm, context[60] );
      refalrts::push_stack( vm, context[40] );
      refalrts::link_brackets( context[42], context[59] );
      refalrts::link_brackets( context[46], context[58] );
      refalrts::link_brackets( context[52], context[57] );
      refalrts::link_brackets( context[48], context[51] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[27], context[28] );
      res = refalrts::splice_evar( res, context[0], context[14] );
      res = refalrts::splice_evar( res, context[34], context[22] );
      res = refalrts::splice_elem( res, context[60] );
      res = refalrts::splice_evar( res, context[31], context[32] );
      res = refalrts::splice_evar( res, context[40], context[59] );
      res = refalrts::splice_evar( res, context[21], context[33] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Map@11/4 t.PTvar/5 (/9 e.Name/23 )/10 (/13 e.NewIndex/25 )/14 t.Next/21 e.Tail/27 >/1
    context[23] = context[15];
    context[24] = context[16];
    context[25] = context[17];
    context[26] = context[18];
    context[27] = context[19];
    context[28] = context[20];
    // closed e.Name as range 23
    // closed e.NewIndex as range 25
    // closed e.Tail as range 27
    //DEBUG: t.PTvar: 5
    //DEBUG: t.Next: 21
    //DEBUG: e.Name: 23
    //DEBUG: e.NewIndex: 25
    //DEBUG: e.Tail: 27

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </29 & ApplyContraction-toEquation*1/30 (/31 t.PTvar/5/32 ':'/34 (/35 # ADT-Brackets/36 (/37 e.Name/23/38 )/40 (/41 # Var/42 'e'/43 e.NewIndex/25/44 )/46 )/47 )/48 Tile{ AsIs: t.Next/21 } >/49 Tile{ AsIs: </0 AsIs: & Map@11/4 AsIs: t.PTvar/5 AsIs: (/9 AsIs: e.Name/23 AsIs: )/10 AsIs: (/13 AsIs: e.NewIndex/25 AsIs: )/14 } Tile{ AsIs: e.Tail/27 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[29]);
    refalrts::alloc_name(vm, context[30], functions[efunc_gen_ApplyContractionm_toEquation_D1]);
    refalrts::alloc_open_bracket(vm, context[31]);
    refalrts::copy_evar(vm, context[32], context[33], context[5], context[6]);
    refalrts::alloc_char(vm, context[34], ':');
    refalrts::alloc_open_bracket(vm, context[35]);
    refalrts::alloc_ident(vm, context[36], identifiers[ident_ADTm_Brackets]);
    refalrts::alloc_open_bracket(vm, context[37]);
    refalrts::copy_evar(vm, context[38], context[39], context[23], context[24]);
    refalrts::alloc_close_bracket(vm, context[40]);
    refalrts::alloc_open_bracket(vm, context[41]);
    refalrts::alloc_ident(vm, context[42], identifiers[ident_Var]);
    refalrts::alloc_char(vm, context[43], 'e');
    refalrts::copy_evar(vm, context[44], context[45], context[25], context[26]);
    refalrts::alloc_close_bracket(vm, context[46]);
    refalrts::alloc_close_bracket(vm, context[47]);
    refalrts::alloc_close_bracket(vm, context[48]);
    refalrts::alloc_close_call(vm, context[49]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[13], context[14] );
    refalrts::link_brackets( context[9], context[10] );
    refalrts::push_stack( vm, context[49] );
    refalrts::push_stack( vm, context[29] );
    refalrts::link_brackets( context[31], context[48] );
    refalrts::link_brackets( context[35], context[47] );
    refalrts::link_brackets( context[41], context[46] );
    refalrts::link_brackets( context[37], context[40] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[27], context[28] );
    res = refalrts::splice_evar( res, context[0], context[14] );
    res = refalrts::splice_elem( res, context[49] );
    res = refalrts::splice_evar( res, context[21], context[22] );
    res = refalrts::splice_evar( res, context[29], context[48] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Map@11/4 t.PTvar/5 (/9 e.Name/15 )/10 (/13 e.NewIndex/17 )/14 >/1
    context[15] = context[7];
    context[16] = context[8];
    context[17] = context[11];
    context[18] = context[12];
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Name as range 15
    // closed e.NewIndex as range 17
    //DEBUG: t.PTvar: 5
    //DEBUG: e.Name: 15
    //DEBUG: e.NewIndex: 17

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Map@11/4 t.PTvar/5 (/9 e.Name/15 )/10 (/13 e.NewIndex/17 )/14 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Map@11/4 t.PTvar/5 (/9 e.Name/7 )/10 (/13 e.NewIndex/11 )/14 e.items/2 >/1
  // closed e.Name as range 7
  // closed e.NewIndex as range 11
  // closed e.items as range 2
  //DEBUG: t.PTvar: 5
  //DEBUG: e.Name: 7
  //DEBUG: e.NewIndex: 11
  //DEBUG: e.items: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map@0/4 } (/15 & ApplyContraction-toEquation@0/16 (/17 Tile{ AsIs: t.PTvar/5 } ':'/18 (/19 # ADT-Brackets/20 Tile{ AsIs: (/9 AsIs: e.Name/7 AsIs: )/10 AsIs: (/13 } # Var/21 'e'/22 Tile{ AsIs: e.NewIndex/11 } )/23 )/24 )/25 Tile{ AsIs: )/14 AsIs: e.items/2 AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[15]);
  refalrts::alloc_name(vm, context[16], functions[efunc_gen_ApplyContractionm_toEquation_Z0]);
  refalrts::alloc_open_bracket(vm, context[17]);
  refalrts::alloc_char(vm, context[18], ':');
  refalrts::alloc_open_bracket(vm, context[19]);
  refalrts::alloc_ident(vm, context[20], identifiers[ident_ADTm_Brackets]);
  refalrts::alloc_ident(vm, context[21], identifiers[ident_Var]);
  refalrts::alloc_char(vm, context[22], 'e');
  refalrts::alloc_close_bracket(vm, context[23]);
  refalrts::alloc_close_bracket(vm, context[24]);
  refalrts::alloc_close_bracket(vm, context[25]);
  refalrts::update_name(context[4], functions[efunc_gen_Map_Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[15], context[14] );
  refalrts::link_brackets( context[17], context[25] );
  refalrts::link_brackets( context[19], context[24] );
  refalrts::link_brackets( context[13], context[23] );
  refalrts::link_brackets( context[9], context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[14];
  res = refalrts::splice_evar( res, context[23], context[25] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_evar( res, context[21], context[22] );
  res = refalrts::splice_evar( res, context[9], context[13] );
  res = refalrts::splice_evar( res, context[18], context[20] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[15], context[17] );
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
  // issue here memory for vars with 55 elems
  refalrts::Iter context[55];
  refalrts::zeros( context, 55 );
  // </0 & Map@12/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & Map@12/4 t.new1/5 (/9 e.new2/7 )/10 (/13 e.new3/11 )/14 e.new4/2 >/1
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
  // closed e.new2 as range 7
  // closed e.new3 as range 11
  // closed e.new4 as range 2
  do {
    // </0 & Map@12/4 t.new5/5 (/9 e.new8/15 )/10 (/13 e.new9/17 )/14 t.new6/21 e.new7/19 >/1
    context[15] = context[7];
    context[16] = context[8];
    context[17] = context[11];
    context[18] = context[12];
    context[19] = context[2];
    context[20] = context[3];
    // closed e.new8 as range 15
    // closed e.new9 as range 17
    context[22] = refalrts::tvar_left( context[21], context[19], context[20] );
    if( ! context[22] )
      continue;
    // closed e.new7 as range 19
    do {
      // </0 & Map@12/4 t.PTvar/5 (/9 e.Name/23 )/10 (/13 e.NewIndex/25 )/14 (/21 e.1/29 ':'/33 t./31 )/22 e.Tail/27 >/1
      context[23] = context[15];
      context[24] = context[16];
      context[25] = context[17];
      context[26] = context[18];
      context[27] = context[19];
      context[28] = context[20];
      context[29] = 0;
      context[30] = 0;
      if( ! refalrts::brackets_term( context[29], context[30], context[21] ) )
        continue;
      // closed e.Name as range 23
      // closed e.NewIndex as range 25
      // closed e.Tail as range 27
      context[32] = refalrts::tvar_right( context[31], context[29], context[30] );
      if( ! context[32] )
        continue;
      context[33] = refalrts::char_right( ':', context[29], context[30] );
      if( ! context[33] )
        continue;
      // closed e.1 as range 29
      //DEBUG: t.PTvar: 5
      //DEBUG: e.Name: 23
      //DEBUG: e.NewIndex: 25
      //DEBUG: e.Tail: 27
      //DEBUG: t.: 31
      //DEBUG: e.1: 29

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } (/34 </35 & ApplyContraction-toExpr/36 (/37 t.PTvar/5/38 ':'/40 (/41 # ADT-Brackets/42 Tile{ AsIs: (/21 } e.Name/23/43 )/45 (/46 # Var/47 'e'/48 e.NewIndex/25/49 )/51 )/52 )/53 Tile{ AsIs: e.1/29 } >/54 Tile{ AsIs: ':'/33 AsIs: t./31 AsIs: )/22 } Tile{ AsIs: </0 AsIs: & Map@12/4 AsIs: t.PTvar/5 AsIs: (/9 AsIs: e.Name/23 AsIs: )/10 AsIs: (/13 AsIs: e.NewIndex/25 AsIs: )/14 } Tile{ AsIs: e.Tail/27 } Tile{ AsIs: >/1 ]] }
      refalrts::alloc_open_bracket(vm, context[34]);
      refalrts::alloc_open_call(vm, context[35]);
      refalrts::alloc_name(vm, context[36], functions[efunc_ApplyContractionm_toExpr]);
      refalrts::alloc_open_bracket(vm, context[37]);
      refalrts::copy_evar(vm, context[38], context[39], context[5], context[6]);
      refalrts::alloc_char(vm, context[40], ':');
      refalrts::alloc_open_bracket(vm, context[41]);
      refalrts::alloc_ident(vm, context[42], identifiers[ident_ADTm_Brackets]);
      refalrts::copy_evar(vm, context[43], context[44], context[23], context[24]);
      refalrts::alloc_close_bracket(vm, context[45]);
      refalrts::alloc_open_bracket(vm, context[46]);
      refalrts::alloc_ident(vm, context[47], identifiers[ident_Var]);
      refalrts::alloc_char(vm, context[48], 'e');
      refalrts::copy_evar(vm, context[49], context[50], context[25], context[26]);
      refalrts::alloc_close_bracket(vm, context[51]);
      refalrts::alloc_close_bracket(vm, context[52]);
      refalrts::alloc_close_bracket(vm, context[53]);
      refalrts::alloc_close_call(vm, context[54]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[13], context[14] );
      refalrts::link_brackets( context[9], context[10] );
      refalrts::link_brackets( context[34], context[22] );
      refalrts::push_stack( vm, context[54] );
      refalrts::push_stack( vm, context[35] );
      refalrts::link_brackets( context[37], context[53] );
      refalrts::link_brackets( context[41], context[52] );
      refalrts::link_brackets( context[46], context[51] );
      refalrts::link_brackets( context[21], context[45] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[27], context[28] );
      res = refalrts::splice_evar( res, context[0], context[14] );
      res = refalrts::splice_evar( res, context[33], context[22] );
      res = refalrts::splice_elem( res, context[54] );
      res = refalrts::splice_evar( res, context[29], context[30] );
      res = refalrts::splice_evar( res, context[45], context[53] );
      res = refalrts::splice_evar( res, context[43], context[44] );
      res = refalrts::splice_elem( res, context[21] );
      res = refalrts::splice_evar( res, context[34], context[42] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Map@12/4 t.PTvar/5 (/9 e.Name/23 )/10 (/13 e.NewIndex/25 )/14 t.Next/21 e.Tail/27 >/1
    context[23] = context[15];
    context[24] = context[16];
    context[25] = context[17];
    context[26] = context[18];
    context[27] = context[19];
    context[28] = context[20];
    // closed e.Name as range 23
    // closed e.NewIndex as range 25
    // closed e.Tail as range 27
    //DEBUG: t.PTvar: 5
    //DEBUG: t.Next: 21
    //DEBUG: e.Name: 23
    //DEBUG: e.NewIndex: 25
    //DEBUG: e.Tail: 27

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </29 & ApplyContraction-toAssign*1/30 (/31 t.PTvar/5/32 ':'/34 (/35 # ADT-Brackets/36 (/37 e.Name/23/38 )/40 (/41 # Var/42 'e'/43 e.NewIndex/25/44 )/46 )/47 )/48 Tile{ AsIs: t.Next/21 } >/49 Tile{ AsIs: </0 AsIs: & Map@12/4 AsIs: t.PTvar/5 AsIs: (/9 AsIs: e.Name/23 AsIs: )/10 AsIs: (/13 AsIs: e.NewIndex/25 AsIs: )/14 } Tile{ AsIs: e.Tail/27 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[29]);
    refalrts::alloc_name(vm, context[30], functions[efunc_gen_ApplyContractionm_toAssign_D1]);
    refalrts::alloc_open_bracket(vm, context[31]);
    refalrts::copy_evar(vm, context[32], context[33], context[5], context[6]);
    refalrts::alloc_char(vm, context[34], ':');
    refalrts::alloc_open_bracket(vm, context[35]);
    refalrts::alloc_ident(vm, context[36], identifiers[ident_ADTm_Brackets]);
    refalrts::alloc_open_bracket(vm, context[37]);
    refalrts::copy_evar(vm, context[38], context[39], context[23], context[24]);
    refalrts::alloc_close_bracket(vm, context[40]);
    refalrts::alloc_open_bracket(vm, context[41]);
    refalrts::alloc_ident(vm, context[42], identifiers[ident_Var]);
    refalrts::alloc_char(vm, context[43], 'e');
    refalrts::copy_evar(vm, context[44], context[45], context[25], context[26]);
    refalrts::alloc_close_bracket(vm, context[46]);
    refalrts::alloc_close_bracket(vm, context[47]);
    refalrts::alloc_close_bracket(vm, context[48]);
    refalrts::alloc_close_call(vm, context[49]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[13], context[14] );
    refalrts::link_brackets( context[9], context[10] );
    refalrts::push_stack( vm, context[49] );
    refalrts::push_stack( vm, context[29] );
    refalrts::link_brackets( context[31], context[48] );
    refalrts::link_brackets( context[35], context[47] );
    refalrts::link_brackets( context[41], context[46] );
    refalrts::link_brackets( context[37], context[40] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[27], context[28] );
    res = refalrts::splice_evar( res, context[0], context[14] );
    res = refalrts::splice_elem( res, context[49] );
    res = refalrts::splice_evar( res, context[21], context[22] );
    res = refalrts::splice_evar( res, context[29], context[48] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Map@12/4 t.PTvar/5 (/9 e.Name/15 )/10 (/13 e.NewIndex/17 )/14 >/1
    context[15] = context[7];
    context[16] = context[8];
    context[17] = context[11];
    context[18] = context[12];
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Name as range 15
    // closed e.NewIndex as range 17
    //DEBUG: t.PTvar: 5
    //DEBUG: e.Name: 15
    //DEBUG: e.NewIndex: 17

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Map@12/4 t.PTvar/5 (/9 e.Name/15 )/10 (/13 e.NewIndex/17 )/14 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Map@12/4 t.PTvar/5 (/9 e.Name/7 )/10 (/13 e.NewIndex/11 )/14 e.items/2 >/1
  // closed e.Name as range 7
  // closed e.NewIndex as range 11
  // closed e.items as range 2
  //DEBUG: t.PTvar: 5
  //DEBUG: e.Name: 7
  //DEBUG: e.NewIndex: 11
  //DEBUG: e.items: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map@0/4 } (/15 & ApplyContraction-toAssign@0/16 (/17 Tile{ AsIs: t.PTvar/5 } ':'/18 (/19 # ADT-Brackets/20 Tile{ AsIs: (/9 AsIs: e.Name/7 AsIs: )/10 AsIs: (/13 } # Var/21 'e'/22 Tile{ AsIs: e.NewIndex/11 } )/23 )/24 )/25 Tile{ AsIs: )/14 AsIs: e.items/2 AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[15]);
  refalrts::alloc_name(vm, context[16], functions[efunc_gen_ApplyContractionm_toAssign_Z0]);
  refalrts::alloc_open_bracket(vm, context[17]);
  refalrts::alloc_char(vm, context[18], ':');
  refalrts::alloc_open_bracket(vm, context[19]);
  refalrts::alloc_ident(vm, context[20], identifiers[ident_ADTm_Brackets]);
  refalrts::alloc_ident(vm, context[21], identifiers[ident_Var]);
  refalrts::alloc_char(vm, context[22], 'e');
  refalrts::alloc_close_bracket(vm, context[23]);
  refalrts::alloc_close_bracket(vm, context[24]);
  refalrts::alloc_close_bracket(vm, context[25]);
  refalrts::update_name(context[4], functions[efunc_gen_Map_Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[15], context[14] );
  refalrts::link_brackets( context[17], context[25] );
  refalrts::link_brackets( context[19], context[24] );
  refalrts::link_brackets( context[13], context[23] );
  refalrts::link_brackets( context[9], context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[14];
  res = refalrts::splice_evar( res, context[23], context[25] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_evar( res, context[21], context[22] );
  res = refalrts::splice_evar( res, context[9], context[13] );
  res = refalrts::splice_evar( res, context[18], context[20] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[15], context[17] );
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
  // issue here memory for vars with 46 elems
  refalrts::Iter context[46];
  refalrts::zeros( context, 46 );
  // </0 & Map@13/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & Map@13/4 t.new1/5 (/9 e.new2/7 )/10 e.new3/2 >/1
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
    // </0 & Map@13/4 t.new4/5 (/9 e.new7/11 )/10 t.new5/15 e.new6/13 >/1
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
      // </0 & Map@13/4 t.PTvar/5 (/9 e.sIdx/17 )/10 (/15 (/25 e.1/23 )/26 ':'/27 (/30 e.4/28 )/31 )/16 e.Tail/19 >/1
      context[17] = context[11];
      context[18] = context[12];
      context[19] = context[13];
      context[20] = context[14];
      context[21] = 0;
      context[22] = 0;
      if( ! refalrts::brackets_term( context[21], context[22], context[15] ) )
        continue;
      context[23] = 0;
      context[24] = 0;
      context[25] = refalrts::brackets_left( context[23], context[24], context[21], context[22] );
      if( ! context[25] )
        continue;
      refalrts::bracket_pointers(context[25], context[26]);
      context[27] = refalrts::char_left( ':', context[21], context[22] );
      if( ! context[27] )
        continue;
      context[28] = 0;
      context[29] = 0;
      context[30] = refalrts::brackets_left( context[28], context[29], context[21], context[22] );
      if( ! context[30] )
        continue;
      refalrts::bracket_pointers(context[30], context[31]);
      if( ! refalrts::empty_seq( context[21], context[22] ) )
        continue;
      // closed e.sIdx as range 17
      // closed e.1 as range 23
      // closed e.4 as range 28
      // closed e.Tail as range 19
      //DEBUG: t.PTvar: 5
      //DEBUG: e.sIdx: 17
      //DEBUG: e.1: 23
      //DEBUG: e.4: 28
      //DEBUG: e.Tail: 19

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/15 AsIs: (/25 } </32 & ApplyContraction-toExpr/33 (/34 t.PTvar/5/35 ':'/37 (/38 # Var/39 's'/40 e.sIdx/17/41 )/43 )/44 Tile{ AsIs: e.1/23 } >/45 Tile{ AsIs: )/26 AsIs: ':'/27 AsIs: (/30 AsIs: e.4/28 AsIs: )/31 AsIs: )/16 } Tile{ AsIs: </0 AsIs: & Map@13/4 AsIs: t.PTvar/5 AsIs: (/9 AsIs: e.sIdx/17 AsIs: )/10 } Tile{ AsIs: e.Tail/19 } Tile{ AsIs: >/1 ]] }
      refalrts::alloc_open_call(vm, context[32]);
      refalrts::alloc_name(vm, context[33], functions[efunc_ApplyContractionm_toExpr]);
      refalrts::alloc_open_bracket(vm, context[34]);
      refalrts::copy_evar(vm, context[35], context[36], context[5], context[6]);
      refalrts::alloc_char(vm, context[37], ':');
      refalrts::alloc_open_bracket(vm, context[38]);
      refalrts::alloc_ident(vm, context[39], identifiers[ident_Var]);
      refalrts::alloc_char(vm, context[40], 's');
      refalrts::copy_evar(vm, context[41], context[42], context[17], context[18]);
      refalrts::alloc_close_bracket(vm, context[43]);
      refalrts::alloc_close_bracket(vm, context[44]);
      refalrts::alloc_close_call(vm, context[45]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[10] );
      refalrts::link_brackets( context[15], context[16] );
      refalrts::link_brackets( context[30], context[31] );
      refalrts::link_brackets( context[25], context[26] );
      refalrts::push_stack( vm, context[45] );
      refalrts::push_stack( vm, context[32] );
      refalrts::link_brackets( context[34], context[44] );
      refalrts::link_brackets( context[38], context[43] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[19], context[20] );
      res = refalrts::splice_evar( res, context[0], context[10] );
      res = refalrts::splice_evar( res, context[26], context[16] );
      res = refalrts::splice_elem( res, context[45] );
      res = refalrts::splice_evar( res, context[23], context[24] );
      res = refalrts::splice_evar( res, context[32], context[44] );
      res = refalrts::splice_evar( res, context[15], context[25] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Map@13/4 t.PTvar/5 (/9 e.sIdx/17 )/10 t.Next/15 e.Tail/19 >/1
    context[17] = context[11];
    context[18] = context[12];
    context[19] = context[13];
    context[20] = context[14];
    // closed e.sIdx as range 17
    // closed e.Tail as range 19
    //DEBUG: t.PTvar: 5
    //DEBUG: t.Next: 15
    //DEBUG: e.sIdx: 17
    //DEBUG: e.Tail: 19

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </21 & ApplyContraction-toEquation*1/22 (/23 t.PTvar/5/24 ':'/26 (/27 # Var/28 's'/29 e.sIdx/17/30 )/32 )/33 Tile{ AsIs: t.Next/15 } >/34 Tile{ AsIs: </0 AsIs: & Map@13/4 AsIs: t.PTvar/5 AsIs: (/9 AsIs: e.sIdx/17 AsIs: )/10 } Tile{ AsIs: e.Tail/19 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[21]);
    refalrts::alloc_name(vm, context[22], functions[efunc_gen_ApplyContractionm_toEquation_D1]);
    refalrts::alloc_open_bracket(vm, context[23]);
    refalrts::copy_evar(vm, context[24], context[25], context[5], context[6]);
    refalrts::alloc_char(vm, context[26], ':');
    refalrts::alloc_open_bracket(vm, context[27]);
    refalrts::alloc_ident(vm, context[28], identifiers[ident_Var]);
    refalrts::alloc_char(vm, context[29], 's');
    refalrts::copy_evar(vm, context[30], context[31], context[17], context[18]);
    refalrts::alloc_close_bracket(vm, context[32]);
    refalrts::alloc_close_bracket(vm, context[33]);
    refalrts::alloc_close_call(vm, context[34]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[9], context[10] );
    refalrts::push_stack( vm, context[34] );
    refalrts::push_stack( vm, context[21] );
    refalrts::link_brackets( context[23], context[33] );
    refalrts::link_brackets( context[27], context[32] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[19], context[20] );
    res = refalrts::splice_evar( res, context[0], context[10] );
    res = refalrts::splice_elem( res, context[34] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[21], context[33] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Map@13/4 t.PTvar/5 (/9 e.sIdx/11 )/10 >/1
    context[11] = context[7];
    context[12] = context[8];
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.sIdx as range 11
    //DEBUG: t.PTvar: 5
    //DEBUG: e.sIdx: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Map@13/4 t.PTvar/5 (/9 e.sIdx/11 )/10 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Map@13/4 t.PTvar/5 (/9 e.sIdx/7 )/10 e.items/2 >/1
  // closed e.sIdx as range 7
  // closed e.items as range 2
  //DEBUG: t.PTvar: 5
  //DEBUG: e.sIdx: 7
  //DEBUG: e.items: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map@0/4 } (/11 & ApplyContraction-toEquation@0/12 (/13 Tile{ AsIs: t.PTvar/5 HalfReuse: ':'/9 } (/14 # Var/15 's'/16 Tile{ AsIs: e.sIdx/7 } )/17 )/18 Tile{ AsIs: )/10 AsIs: e.items/2 AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[11]);
  refalrts::alloc_name(vm, context[12], functions[efunc_gen_ApplyContractionm_toEquation_Z0]);
  refalrts::alloc_open_bracket(vm, context[13]);
  refalrts::alloc_open_bracket(vm, context[14]);
  refalrts::alloc_ident(vm, context[15], identifiers[ident_Var]);
  refalrts::alloc_char(vm, context[16], 's');
  refalrts::alloc_close_bracket(vm, context[17]);
  refalrts::alloc_close_bracket(vm, context[18]);
  refalrts::update_name(context[4], functions[efunc_gen_Map_Z0]);
  refalrts::reinit_char(context[9], ':');
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[11], context[10] );
  refalrts::link_brackets( context[13], context[18] );
  refalrts::link_brackets( context[14], context[17] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[10];
  res = refalrts::splice_evar( res, context[17], context[18] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_evar( res, context[14], context[16] );
  res = refalrts::splice_evar( res, context[5], context[9] );
  res = refalrts::splice_evar( res, context[11], context[13] );
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
  // issue here memory for vars with 40 elems
  refalrts::Iter context[40];
  refalrts::zeros( context, 40 );
  // </0 & Map@14/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & Map@14/4 t.new1/5 (/9 e.new2/7 )/10 e.new3/2 >/1
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
    // </0 & Map@14/4 t.new4/5 (/9 e.new7/11 )/10 t.new5/15 e.new6/13 >/1
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
      // </0 & Map@14/4 t.PTvar/5 (/9 e.sIdx/17 )/10 (/15 e.1/21 ':'/25 t./23 )/16 e.Tail/19 >/1
      context[17] = context[11];
      context[18] = context[12];
      context[19] = context[13];
      context[20] = context[14];
      context[21] = 0;
      context[22] = 0;
      if( ! refalrts::brackets_term( context[21], context[22], context[15] ) )
        continue;
      // closed e.sIdx as range 17
      // closed e.Tail as range 19
      context[24] = refalrts::tvar_right( context[23], context[21], context[22] );
      if( ! context[24] )
        continue;
      context[25] = refalrts::char_right( ':', context[21], context[22] );
      if( ! context[25] )
        continue;
      // closed e.1 as range 21
      //DEBUG: t.PTvar: 5
      //DEBUG: e.sIdx: 17
      //DEBUG: e.Tail: 19
      //DEBUG: t.: 23
      //DEBUG: e.1: 21

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } (/26 </27 & ApplyContraction-toExpr/28 (/29 t.PTvar/5/30 ':'/32 Tile{ AsIs: (/15 } # Var/33 's'/34 e.sIdx/17/35 )/37 )/38 Tile{ AsIs: e.1/21 } >/39 Tile{ AsIs: ':'/25 AsIs: t./23 AsIs: )/16 } Tile{ AsIs: </0 AsIs: & Map@14/4 AsIs: t.PTvar/5 AsIs: (/9 AsIs: e.sIdx/17 AsIs: )/10 } Tile{ AsIs: e.Tail/19 } Tile{ AsIs: >/1 ]] }
      refalrts::alloc_open_bracket(vm, context[26]);
      refalrts::alloc_open_call(vm, context[27]);
      refalrts::alloc_name(vm, context[28], functions[efunc_ApplyContractionm_toExpr]);
      refalrts::alloc_open_bracket(vm, context[29]);
      refalrts::copy_evar(vm, context[30], context[31], context[5], context[6]);
      refalrts::alloc_char(vm, context[32], ':');
      refalrts::alloc_ident(vm, context[33], identifiers[ident_Var]);
      refalrts::alloc_char(vm, context[34], 's');
      refalrts::copy_evar(vm, context[35], context[36], context[17], context[18]);
      refalrts::alloc_close_bracket(vm, context[37]);
      refalrts::alloc_close_bracket(vm, context[38]);
      refalrts::alloc_close_call(vm, context[39]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[10] );
      refalrts::link_brackets( context[26], context[16] );
      refalrts::push_stack( vm, context[39] );
      refalrts::push_stack( vm, context[27] );
      refalrts::link_brackets( context[29], context[38] );
      refalrts::link_brackets( context[15], context[37] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[19], context[20] );
      res = refalrts::splice_evar( res, context[0], context[10] );
      res = refalrts::splice_evar( res, context[25], context[16] );
      res = refalrts::splice_elem( res, context[39] );
      res = refalrts::splice_evar( res, context[21], context[22] );
      res = refalrts::splice_evar( res, context[33], context[38] );
      res = refalrts::splice_elem( res, context[15] );
      res = refalrts::splice_evar( res, context[26], context[32] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Map@14/4 t.PTvar/5 (/9 e.sIdx/17 )/10 t.Next/15 e.Tail/19 >/1
    context[17] = context[11];
    context[18] = context[12];
    context[19] = context[13];
    context[20] = context[14];
    // closed e.sIdx as range 17
    // closed e.Tail as range 19
    //DEBUG: t.PTvar: 5
    //DEBUG: t.Next: 15
    //DEBUG: e.sIdx: 17
    //DEBUG: e.Tail: 19

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </21 & ApplyContraction-toAssign*1/22 (/23 t.PTvar/5/24 ':'/26 (/27 # Var/28 's'/29 e.sIdx/17/30 )/32 )/33 Tile{ AsIs: t.Next/15 } >/34 Tile{ AsIs: </0 AsIs: & Map@14/4 AsIs: t.PTvar/5 AsIs: (/9 AsIs: e.sIdx/17 AsIs: )/10 } Tile{ AsIs: e.Tail/19 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[21]);
    refalrts::alloc_name(vm, context[22], functions[efunc_gen_ApplyContractionm_toAssign_D1]);
    refalrts::alloc_open_bracket(vm, context[23]);
    refalrts::copy_evar(vm, context[24], context[25], context[5], context[6]);
    refalrts::alloc_char(vm, context[26], ':');
    refalrts::alloc_open_bracket(vm, context[27]);
    refalrts::alloc_ident(vm, context[28], identifiers[ident_Var]);
    refalrts::alloc_char(vm, context[29], 's');
    refalrts::copy_evar(vm, context[30], context[31], context[17], context[18]);
    refalrts::alloc_close_bracket(vm, context[32]);
    refalrts::alloc_close_bracket(vm, context[33]);
    refalrts::alloc_close_call(vm, context[34]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[9], context[10] );
    refalrts::push_stack( vm, context[34] );
    refalrts::push_stack( vm, context[21] );
    refalrts::link_brackets( context[23], context[33] );
    refalrts::link_brackets( context[27], context[32] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[19], context[20] );
    res = refalrts::splice_evar( res, context[0], context[10] );
    res = refalrts::splice_elem( res, context[34] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[21], context[33] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Map@14/4 t.PTvar/5 (/9 e.sIdx/11 )/10 >/1
    context[11] = context[7];
    context[12] = context[8];
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.sIdx as range 11
    //DEBUG: t.PTvar: 5
    //DEBUG: e.sIdx: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Map@14/4 t.PTvar/5 (/9 e.sIdx/11 )/10 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Map@14/4 t.PTvar/5 (/9 e.sIdx/7 )/10 e.items/2 >/1
  // closed e.sIdx as range 7
  // closed e.items as range 2
  //DEBUG: t.PTvar: 5
  //DEBUG: e.sIdx: 7
  //DEBUG: e.items: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map@0/4 } (/11 & ApplyContraction-toAssign@0/12 (/13 Tile{ AsIs: t.PTvar/5 HalfReuse: ':'/9 } (/14 # Var/15 's'/16 Tile{ AsIs: e.sIdx/7 } )/17 )/18 Tile{ AsIs: )/10 AsIs: e.items/2 AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[11]);
  refalrts::alloc_name(vm, context[12], functions[efunc_gen_ApplyContractionm_toAssign_Z0]);
  refalrts::alloc_open_bracket(vm, context[13]);
  refalrts::alloc_open_bracket(vm, context[14]);
  refalrts::alloc_ident(vm, context[15], identifiers[ident_Var]);
  refalrts::alloc_char(vm, context[16], 's');
  refalrts::alloc_close_bracket(vm, context[17]);
  refalrts::alloc_close_bracket(vm, context[18]);
  refalrts::update_name(context[4], functions[efunc_gen_Map_Z0]);
  refalrts::reinit_char(context[9], ':');
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[11], context[10] );
  refalrts::link_brackets( context[13], context[18] );
  refalrts::link_brackets( context[14], context[17] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[10];
  res = refalrts::splice_evar( res, context[17], context[18] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_evar( res, context[14], context[16] );
  res = refalrts::splice_evar( res, context[5], context[9] );
  res = refalrts::splice_evar( res, context[11], context[13] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Map_Z14("Map@14", COOKIE1_, COOKIE2_, func_gen_Map_Z14);


static refalrts::FnResult func_gen_AddContraction_Z3(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 37 elems
  refalrts::Iter context[37];
  refalrts::zeros( context, 37 );
  // </0 & AddContraction@3/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & AddContraction@3/4 t.new1/5 t.new2/7 (/11 e.new3/9 )/12 (/15 e.new4/13 )/16 e.new5/2 >/1
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
  context[13] = 0;
  context[14] = 0;
  context[15] = refalrts::brackets_left( context[13], context[14], context[2], context[3] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[15], context[16]);
  // closed e.new3 as range 9
  // closed e.new4 as range 13
  // closed e.new5 as range 2
  do {
    // </0 & AddContraction@3/4 t.Svar/5 t.Symbol/7 (/11 e.Contrs/17 )/12 (/15 e.Equations0/19 )/16 e.Assigns0/21 >/1
    context[17] = context[9];
    context[18] = context[10];
    context[19] = context[13];
    context[20] = context[14];
    context[21] = context[2];
    context[22] = context[3];
    // closed e.Contrs as range 17
    // closed e.Equations0 as range 19
    // closed e.Assigns0 as range 21
    //DEBUG: t.Svar: 5
    //DEBUG: t.Symbol: 7
    //DEBUG: e.Contrs: 17
    //DEBUG: e.Equations0: 19
    //DEBUG: e.Assigns0: 21

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/11 AsIs: e.Contrs/17 HalfReuse: (/12 } t.Svar/5/23 ':'/25 t.Symbol/7/26 )/28 Tile{ AsIs: )/16 } Tile{ AsIs: </0 Reuse: & Map@21/4 AsIs: t.Svar/5 AsIs: t.Symbol/7 } Tile{ AsIs: e.Equations0/19 } >/29 Tile{ AsIs: (/15 } </30 & Map@22/31 t.Svar/5/32 t.Symbol/7/34 Tile{ AsIs: e.Assigns0/21 } >/36 Tile{ HalfReuse: )/1 ]] }
    refalrts::copy_evar(vm, context[23], context[24], context[5], context[6]);
    refalrts::alloc_char(vm, context[25], ':');
    refalrts::copy_evar(vm, context[26], context[27], context[7], context[8]);
    refalrts::alloc_close_bracket(vm, context[28]);
    refalrts::alloc_close_call(vm, context[29]);
    refalrts::alloc_open_call(vm, context[30]);
    refalrts::alloc_name(vm, context[31], functions[efunc_gen_Map_Z22]);
    refalrts::copy_evar(vm, context[32], context[33], context[5], context[6]);
    refalrts::copy_evar(vm, context[34], context[35], context[7], context[8]);
    refalrts::alloc_close_call(vm, context[36]);
    refalrts::reinit_open_bracket(context[12]);
    refalrts::update_name(context[4], functions[efunc_gen_Map_Z21]);
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[15], context[1] );
    refalrts::push_stack( vm, context[36] );
    refalrts::push_stack( vm, context[30] );
    refalrts::push_stack( vm, context[29] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[11], context[16] );
    refalrts::link_brackets( context[12], context[28] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_elem( res, context[36] );
    res = refalrts::splice_evar( res, context[21], context[22] );
    res = refalrts::splice_evar( res, context[30], context[35] );
    res = refalrts::splice_elem( res, context[15] );
    res = refalrts::splice_elem( res, context[29] );
    res = refalrts::splice_evar( res, context[19], context[20] );
    res = refalrts::splice_evar( res, context[0], context[8] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_evar( res, context[23], context[28] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & AddContraction@3/4 t.Svar/5 t.Symbol/7 (/11 e.Contrs/9 )/12 (/15 e.Equations0/13 )/16 e.Assigns0/2 >/1
  // closed e.Contrs as range 9
  // closed e.Equations0 as range 13
  // closed e.Assigns0 as range 2
  //DEBUG: t.Svar: 5
  //DEBUG: t.Symbol: 7
  //DEBUG: e.Contrs: 9
  //DEBUG: e.Equations0: 13
  //DEBUG: e.Assigns0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & AddContraction@0/4 } (/17 Tile{ AsIs: t.Svar/5 } Tile{ HalfReuse: ':'/12 } Tile{ AsIs: t.Symbol/7 HalfReuse: )/11 } (/18 Tile{ AsIs: e.Contrs/9 } Tile{ HalfReuse: )/15 AsIs: e.Equations0/13 HalfReuse: (/16 AsIs: e.Assigns0/2 HalfReuse: )/1 } >/19 Tile{ ]] }
  refalrts::alloc_open_bracket(vm, context[17]);
  refalrts::alloc_open_bracket(vm, context[18]);
  refalrts::alloc_close_call(vm, context[19]);
  refalrts::update_name(context[4], functions[efunc_gen_AddContraction_Z0]);
  refalrts::reinit_char(context[12], ':');
  refalrts::reinit_close_bracket(context[11]);
  refalrts::reinit_close_bracket(context[15]);
  refalrts::reinit_open_bracket(context[16]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::push_stack( vm, context[19] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[16], context[1] );
  refalrts::link_brackets( context[18], context[15] );
  refalrts::link_brackets( context[17], context[11] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_elem( res, context[19] );
  res = refalrts::splice_evar( res, context[15], context[1] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_elem( res, context[18] );
  res = refalrts::splice_evar( res, context[7], context[11] );
  res = refalrts::splice_elem( res, context[12] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_elem( res, context[17] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_AddContraction_Z3("AddContraction@3", COOKIE1_, COOKIE2_, func_gen_AddContraction_Z3);


static refalrts::FnResult func_gen_Map_Z15(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 29 elems
  refalrts::Iter context[29];
  refalrts::zeros( context, 29 );
  // </0 & Map@15/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & Map@15/4 t.new1/5 e.new2/2 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  // closed e.new2 as range 2
  do {
    // </0 & Map@15/4 t.new3/5 t.new4/9 e.new5/7 >/1
    context[7] = context[2];
    context[8] = context[3];
    context[10] = refalrts::tvar_left( context[9], context[7], context[8] );
    if( ! context[10] )
      continue;
    // closed e.new5 as range 7
    do {
      // </0 & Map@15/4 t.toAdd/5 (/9 (/17 e.1/15 )/18 ':'/19 (/22 e.4/20 )/23 )/10 e.Tail/11 >/1
      context[11] = context[7];
      context[12] = context[8];
      context[13] = 0;
      context[14] = 0;
      if( ! refalrts::brackets_term( context[13], context[14], context[9] ) )
        continue;
      context[15] = 0;
      context[16] = 0;
      context[17] = refalrts::brackets_left( context[15], context[16], context[13], context[14] );
      if( ! context[17] )
        continue;
      refalrts::bracket_pointers(context[17], context[18]);
      context[19] = refalrts::char_left( ':', context[13], context[14] );
      if( ! context[19] )
        continue;
      context[20] = 0;
      context[21] = 0;
      context[22] = refalrts::brackets_left( context[20], context[21], context[13], context[14] );
      if( ! context[22] )
        continue;
      refalrts::bracket_pointers(context[22], context[23]);
      if( ! refalrts::empty_seq( context[13], context[14] ) )
        continue;
      // closed e.1 as range 15
      // closed e.4 as range 20
      // closed e.Tail as range 11
      //DEBUG: t.toAdd: 5
      //DEBUG: e.1: 15
      //DEBUG: e.4: 20
      //DEBUG: e.Tail: 11

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/9 AsIs: (/17 } </24 & ApplyContraction-toExpr/25 t.toAdd/5/26 Tile{ AsIs: e.1/15 } >/28 Tile{ AsIs: )/18 AsIs: ':'/19 AsIs: (/22 AsIs: e.4/20 AsIs: )/23 AsIs: )/10 } Tile{ AsIs: </0 AsIs: & Map@15/4 AsIs: t.toAdd/5 } Tile{ AsIs: e.Tail/11 } Tile{ AsIs: >/1 ]] }
      refalrts::alloc_open_call(vm, context[24]);
      refalrts::alloc_name(vm, context[25], functions[efunc_ApplyContractionm_toExpr]);
      refalrts::copy_evar(vm, context[26], context[27], context[5], context[6]);
      refalrts::alloc_close_call(vm, context[28]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[10] );
      refalrts::link_brackets( context[22], context[23] );
      refalrts::link_brackets( context[17], context[18] );
      refalrts::push_stack( vm, context[28] );
      refalrts::push_stack( vm, context[24] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[11], context[12] );
      res = refalrts::splice_evar( res, context[0], context[6] );
      res = refalrts::splice_evar( res, context[18], context[10] );
      res = refalrts::splice_elem( res, context[28] );
      res = refalrts::splice_evar( res, context[15], context[16] );
      res = refalrts::splice_evar( res, context[24], context[27] );
      res = refalrts::splice_evar( res, context[9], context[17] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Map@15/4 t.toAdd/5 t.Next/9 e.Tail/11 >/1
    context[11] = context[7];
    context[12] = context[8];
    // closed e.Tail as range 11
    //DEBUG: t.toAdd: 5
    //DEBUG: t.Next: 9
    //DEBUG: e.Tail: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ApplyContraction-toEquation*1/4 AsIs: t.toAdd/5 AsIs: t.Next/9 } >/13 </14 & Map@15/15 t.toAdd/5/16 Tile{ AsIs: e.Tail/11 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_close_call(vm, context[13]);
    refalrts::alloc_open_call(vm, context[14]);
    refalrts::alloc_name(vm, context[15], functions[efunc_gen_Map_Z15]);
    refalrts::copy_evar(vm, context[16], context[17], context[5], context[6]);
    refalrts::update_name(context[4], functions[efunc_gen_ApplyContractionm_toEquation_D1]);
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

  do {
    // </0 & Map@15/4 t.toAdd/5 >/1
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    //DEBUG: t.toAdd: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Map@15/4 t.toAdd/5 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Map@15/4 t.toAdd/5 e.items/2 >/1
  // closed e.items as range 2
  //DEBUG: t.toAdd: 5
  //DEBUG: e.items: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map@0/4 } (/7 & ApplyContraction-toEquation@0/8 Tile{ AsIs: t.toAdd/5 } )/9 Tile{ AsIs: e.items/2 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[7]);
  refalrts::alloc_name(vm, context[8], functions[efunc_gen_ApplyContractionm_toEquation_Z0]);
  refalrts::alloc_close_bracket(vm, context[9]);
  refalrts::update_name(context[4], functions[efunc_gen_Map_Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_elem( res, context[9] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Map_Z15("Map@15", COOKIE1_, COOKIE2_, func_gen_Map_Z15);


static refalrts::FnResult func_gen_Map_Z16(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 23 elems
  refalrts::Iter context[23];
  refalrts::zeros( context, 23 );
  // </0 & Map@16/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & Map@16/4 t.new1/5 e.new2/2 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  // closed e.new2 as range 2
  do {
    // </0 & Map@16/4 t.new3/5 t.new4/9 e.new5/7 >/1
    context[7] = context[2];
    context[8] = context[3];
    context[10] = refalrts::tvar_left( context[9], context[7], context[8] );
    if( ! context[10] )
      continue;
    // closed e.new5 as range 7
    do {
      // </0 & Map@16/4 t.toAdd/5 (/9 e.1/13 ':'/17 t./15 )/10 e.Tail/11 >/1
      context[11] = context[7];
      context[12] = context[8];
      context[13] = 0;
      context[14] = 0;
      if( ! refalrts::brackets_term( context[13], context[14], context[9] ) )
        continue;
      // closed e.Tail as range 11
      context[16] = refalrts::tvar_right( context[15], context[13], context[14] );
      if( ! context[16] )
        continue;
      context[17] = refalrts::char_right( ':', context[13], context[14] );
      if( ! context[17] )
        continue;
      // closed e.1 as range 13
      //DEBUG: t.toAdd: 5
      //DEBUG: e.Tail: 11
      //DEBUG: t.: 15
      //DEBUG: e.1: 13

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/9 } </18 & ApplyContraction-toExpr/19 t.toAdd/5/20 Tile{ AsIs: e.1/13 } >/22 Tile{ AsIs: ':'/17 AsIs: t./15 AsIs: )/10 } Tile{ AsIs: </0 AsIs: & Map@16/4 AsIs: t.toAdd/5 } Tile{ AsIs: e.Tail/11 } Tile{ AsIs: >/1 ]] }
      refalrts::alloc_open_call(vm, context[18]);
      refalrts::alloc_name(vm, context[19], functions[efunc_ApplyContractionm_toExpr]);
      refalrts::copy_evar(vm, context[20], context[21], context[5], context[6]);
      refalrts::alloc_close_call(vm, context[22]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[10] );
      refalrts::push_stack( vm, context[22] );
      refalrts::push_stack( vm, context[18] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[11], context[12] );
      res = refalrts::splice_evar( res, context[0], context[6] );
      res = refalrts::splice_evar( res, context[17], context[10] );
      res = refalrts::splice_elem( res, context[22] );
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_evar( res, context[18], context[21] );
      res = refalrts::splice_elem( res, context[9] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Map@16/4 t.toAdd/5 t.Next/9 e.Tail/11 >/1
    context[11] = context[7];
    context[12] = context[8];
    // closed e.Tail as range 11
    //DEBUG: t.toAdd: 5
    //DEBUG: t.Next: 9
    //DEBUG: e.Tail: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ApplyContraction-toAssign*1/4 AsIs: t.toAdd/5 AsIs: t.Next/9 } >/13 </14 & Map@16/15 t.toAdd/5/16 Tile{ AsIs: e.Tail/11 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_close_call(vm, context[13]);
    refalrts::alloc_open_call(vm, context[14]);
    refalrts::alloc_name(vm, context[15], functions[efunc_gen_Map_Z16]);
    refalrts::copy_evar(vm, context[16], context[17], context[5], context[6]);
    refalrts::update_name(context[4], functions[efunc_gen_ApplyContractionm_toAssign_D1]);
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

  do {
    // </0 & Map@16/4 t.toAdd/5 >/1
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    //DEBUG: t.toAdd: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Map@16/4 t.toAdd/5 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Map@16/4 t.toAdd/5 e.items/2 >/1
  // closed e.items as range 2
  //DEBUG: t.toAdd: 5
  //DEBUG: e.items: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map@0/4 } (/7 & ApplyContraction-toAssign@0/8 Tile{ AsIs: t.toAdd/5 } )/9 Tile{ AsIs: e.items/2 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[7]);
  refalrts::alloc_name(vm, context[8], functions[efunc_gen_ApplyContractionm_toAssign_Z0]);
  refalrts::alloc_close_bracket(vm, context[9]);
  refalrts::update_name(context[4], functions[efunc_gen_Map_Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_elem( res, context[9] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Map_Z16("Map@16", COOKIE1_, COOKIE2_, func_gen_Map_Z16);


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


static refalrts::FnResult func_gen_Map_Z17(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 56 elems
  refalrts::Iter context[56];
  refalrts::zeros( context, 56 );
  // </0 & Map@17/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & Map@17/4 (/7 e.new1/5 )/8 (/11 e.new2/9 )/12 e.new3/2 >/1
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
    // </0 & Map@17/4 (/7 e.new6/13 )/8 (/11 e.new7/15 )/12 t.new4/19 e.new5/17 >/1
    context[13] = context[5];
    context[14] = context[6];
    context[15] = context[9];
    context[16] = context[10];
    context[17] = context[2];
    context[18] = context[3];
    // closed e.new6 as range 13
    // closed e.new7 as range 15
    context[20] = refalrts::tvar_left( context[19], context[17], context[18] );
    if( ! context[20] )
      continue;
    // closed e.new5 as range 17
    do {
      // </0 & Map@17/4 (/7 e.Index2/21 )/8 (/11 e.Index1/23 )/12 (/19 (/31 e.1/29 )/32 ':'/33 (/36 e.4/34 )/37 )/20 e.Tail/25 >/1
      context[21] = context[13];
      context[22] = context[14];
      context[23] = context[15];
      context[24] = context[16];
      context[25] = context[17];
      context[26] = context[18];
      context[27] = 0;
      context[28] = 0;
      if( ! refalrts::brackets_term( context[27], context[28], context[19] ) )
        continue;
      context[29] = 0;
      context[30] = 0;
      context[31] = refalrts::brackets_left( context[29], context[30], context[27], context[28] );
      if( ! context[31] )
        continue;
      refalrts::bracket_pointers(context[31], context[32]);
      context[33] = refalrts::char_left( ':', context[27], context[28] );
      if( ! context[33] )
        continue;
      context[34] = 0;
      context[35] = 0;
      context[36] = refalrts::brackets_left( context[34], context[35], context[27], context[28] );
      if( ! context[36] )
        continue;
      refalrts::bracket_pointers(context[36], context[37]);
      if( ! refalrts::empty_seq( context[27], context[28] ) )
        continue;
      // closed e.Index2 as range 21
      // closed e.Index1 as range 23
      // closed e.1 as range 29
      // closed e.4 as range 34
      // closed e.Tail as range 25
      //DEBUG: e.Index2: 21
      //DEBUG: e.Index1: 23
      //DEBUG: e.1: 29
      //DEBUG: e.4: 34
      //DEBUG: e.Tail: 25

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } (/38 (/39 </40 & ApplyContraction-toExpr/41 Tile{ AsIs: (/19 AsIs: (/31 } # Var/42 's'/43 e.Index2/21/44 )/46 ':'/47 (/48 # Var/49 's'/50 e.Index1/23/51 )/53 )/54 Tile{ AsIs: e.1/29 } >/55 Tile{ AsIs: )/32 AsIs: ':'/33 AsIs: (/36 AsIs: e.4/34 AsIs: )/37 AsIs: )/20 } Tile{ AsIs: </0 AsIs: & Map@17/4 AsIs: (/7 AsIs: e.Index2/21 AsIs: )/8 AsIs: (/11 AsIs: e.Index1/23 AsIs: )/12 } Tile{ AsIs: e.Tail/25 } Tile{ AsIs: >/1 ]] }
      refalrts::alloc_open_bracket(vm, context[38]);
      refalrts::alloc_open_bracket(vm, context[39]);
      refalrts::alloc_open_call(vm, context[40]);
      refalrts::alloc_name(vm, context[41], functions[efunc_ApplyContractionm_toExpr]);
      refalrts::alloc_ident(vm, context[42], identifiers[ident_Var]);
      refalrts::alloc_char(vm, context[43], 's');
      refalrts::copy_evar(vm, context[44], context[45], context[21], context[22]);
      refalrts::alloc_close_bracket(vm, context[46]);
      refalrts::alloc_char(vm, context[47], ':');
      refalrts::alloc_open_bracket(vm, context[48]);
      refalrts::alloc_ident(vm, context[49], identifiers[ident_Var]);
      refalrts::alloc_char(vm, context[50], 's');
      refalrts::copy_evar(vm, context[51], context[52], context[23], context[24]);
      refalrts::alloc_close_bracket(vm, context[53]);
      refalrts::alloc_close_bracket(vm, context[54]);
      refalrts::alloc_close_call(vm, context[55]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::link_brackets( context[38], context[20] );
      refalrts::link_brackets( context[36], context[37] );
      refalrts::link_brackets( context[39], context[32] );
      refalrts::push_stack( vm, context[55] );
      refalrts::push_stack( vm, context[40] );
      refalrts::link_brackets( context[19], context[54] );
      refalrts::link_brackets( context[48], context[53] );
      refalrts::link_brackets( context[31], context[46] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[25], context[26] );
      res = refalrts::splice_evar( res, context[0], context[12] );
      res = refalrts::splice_evar( res, context[32], context[20] );
      res = refalrts::splice_elem( res, context[55] );
      res = refalrts::splice_evar( res, context[29], context[30] );
      res = refalrts::splice_evar( res, context[42], context[54] );
      res = refalrts::splice_evar( res, context[19], context[31] );
      res = refalrts::splice_evar( res, context[38], context[41] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Map@17/4 (/7 e.Index2/21 )/8 (/11 e.Index1/23 )/12 t.Next/19 e.Tail/25 >/1
    context[21] = context[13];
    context[22] = context[14];
    context[23] = context[15];
    context[24] = context[16];
    context[25] = context[17];
    context[26] = context[18];
    // closed e.Index2 as range 21
    // closed e.Index1 as range 23
    // closed e.Tail as range 25
    //DEBUG: t.Next: 19
    //DEBUG: e.Index2: 21
    //DEBUG: e.Index1: 23
    //DEBUG: e.Tail: 25

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </27 & ApplyContraction-toEquation*1/28 (/29 (/30 # Var/31 's'/32 e.Index2/21/33 )/35 ':'/36 (/37 # Var/38 's'/39 e.Index1/23/40 )/42 )/43 Tile{ AsIs: t.Next/19 } >/44 Tile{ AsIs: </0 AsIs: & Map@17/4 AsIs: (/7 AsIs: e.Index2/21 AsIs: )/8 AsIs: (/11 AsIs: e.Index1/23 AsIs: )/12 } Tile{ AsIs: e.Tail/25 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[27]);
    refalrts::alloc_name(vm, context[28], functions[efunc_gen_ApplyContractionm_toEquation_D1]);
    refalrts::alloc_open_bracket(vm, context[29]);
    refalrts::alloc_open_bracket(vm, context[30]);
    refalrts::alloc_ident(vm, context[31], identifiers[ident_Var]);
    refalrts::alloc_char(vm, context[32], 's');
    refalrts::copy_evar(vm, context[33], context[34], context[21], context[22]);
    refalrts::alloc_close_bracket(vm, context[35]);
    refalrts::alloc_char(vm, context[36], ':');
    refalrts::alloc_open_bracket(vm, context[37]);
    refalrts::alloc_ident(vm, context[38], identifiers[ident_Var]);
    refalrts::alloc_char(vm, context[39], 's');
    refalrts::copy_evar(vm, context[40], context[41], context[23], context[24]);
    refalrts::alloc_close_bracket(vm, context[42]);
    refalrts::alloc_close_bracket(vm, context[43]);
    refalrts::alloc_close_call(vm, context[44]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::push_stack( vm, context[44] );
    refalrts::push_stack( vm, context[27] );
    refalrts::link_brackets( context[29], context[43] );
    refalrts::link_brackets( context[37], context[42] );
    refalrts::link_brackets( context[30], context[35] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[25], context[26] );
    res = refalrts::splice_evar( res, context[0], context[12] );
    res = refalrts::splice_elem( res, context[44] );
    res = refalrts::splice_evar( res, context[19], context[20] );
    res = refalrts::splice_evar( res, context[27], context[43] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Map@17/4 (/7 e.Index2/13 )/8 (/11 e.Index1/15 )/12 >/1
    context[13] = context[5];
    context[14] = context[6];
    context[15] = context[9];
    context[16] = context[10];
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Index2 as range 13
    // closed e.Index1 as range 15
    //DEBUG: e.Index2: 13
    //DEBUG: e.Index1: 15

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Map@17/4 (/7 e.Index2/13 )/8 (/11 e.Index1/15 )/12 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Map@17/4 (/7 e.Index2/5 )/8 (/11 e.Index1/9 )/12 e.items/2 >/1
  // closed e.Index2 as range 5
  // closed e.Index1 as range 9
  // closed e.items as range 2
  //DEBUG: e.Index2: 5
  //DEBUG: e.Index1: 9
  //DEBUG: e.items: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map@0/4 AsIs: (/7 } & ApplyContraction-toEquation@0/13 Tile{ HalfReuse: (/8 AsIs: (/11 } # Var/14 's'/15 Tile{ AsIs: e.Index2/5 } )/16 ':'/17 (/18 # Var/19 's'/20 Tile{ AsIs: e.Index1/9 } )/21 )/22 Tile{ AsIs: )/12 AsIs: e.items/2 AsIs: >/1 ]] }
  refalrts::alloc_name(vm, context[13], functions[efunc_gen_ApplyContractionm_toEquation_Z0]);
  refalrts::alloc_ident(vm, context[14], identifiers[ident_Var]);
  refalrts::alloc_char(vm, context[15], 's');
  refalrts::alloc_close_bracket(vm, context[16]);
  refalrts::alloc_char(vm, context[17], ':');
  refalrts::alloc_open_bracket(vm, context[18]);
  refalrts::alloc_ident(vm, context[19], identifiers[ident_Var]);
  refalrts::alloc_char(vm, context[20], 's');
  refalrts::alloc_close_bracket(vm, context[21]);
  refalrts::alloc_close_bracket(vm, context[22]);
  refalrts::update_name(context[4], functions[efunc_gen_Map_Z0]);
  refalrts::reinit_open_bracket(context[8]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[12] );
  refalrts::link_brackets( context[8], context[22] );
  refalrts::link_brackets( context[18], context[21] );
  refalrts::link_brackets( context[11], context[16] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[12];
  res = refalrts::splice_evar( res, context[21], context[22] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[16], context[20] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[14], context[15] );
  res = refalrts::splice_evar( res, context[8], context[11] );
  res = refalrts::splice_elem( res, context[13] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Map_Z17("Map@17", COOKIE1_, COOKIE2_, func_gen_Map_Z17);


static refalrts::FnResult func_gen_Map_Z18(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 50 elems
  refalrts::Iter context[50];
  refalrts::zeros( context, 50 );
  // </0 & Map@18/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & Map@18/4 (/7 e.new1/5 )/8 (/11 e.new2/9 )/12 e.new3/2 >/1
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
    // </0 & Map@18/4 (/7 e.new6/13 )/8 (/11 e.new7/15 )/12 t.new4/19 e.new5/17 >/1
    context[13] = context[5];
    context[14] = context[6];
    context[15] = context[9];
    context[16] = context[10];
    context[17] = context[2];
    context[18] = context[3];
    // closed e.new6 as range 13
    // closed e.new7 as range 15
    context[20] = refalrts::tvar_left( context[19], context[17], context[18] );
    if( ! context[20] )
      continue;
    // closed e.new5 as range 17
    do {
      // </0 & Map@18/4 (/7 e.Index2/21 )/8 (/11 e.Index1/23 )/12 (/19 e.1/27 ':'/31 t./29 )/20 e.Tail/25 >/1
      context[21] = context[13];
      context[22] = context[14];
      context[23] = context[15];
      context[24] = context[16];
      context[25] = context[17];
      context[26] = context[18];
      context[27] = 0;
      context[28] = 0;
      if( ! refalrts::brackets_term( context[27], context[28], context[19] ) )
        continue;
      // closed e.Index2 as range 21
      // closed e.Index1 as range 23
      // closed e.Tail as range 25
      context[30] = refalrts::tvar_right( context[29], context[27], context[28] );
      if( ! context[30] )
        continue;
      context[31] = refalrts::char_right( ':', context[27], context[28] );
      if( ! context[31] )
        continue;
      // closed e.1 as range 27
      //DEBUG: e.Index2: 21
      //DEBUG: e.Index1: 23
      //DEBUG: e.Tail: 25
      //DEBUG: t.: 29
      //DEBUG: e.1: 27

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } (/32 </33 & ApplyContraction-toExpr/34 Tile{ AsIs: (/19 } (/35 # Var/36 's'/37 e.Index2/21/38 )/40 ':'/41 (/42 # Var/43 's'/44 e.Index1/23/45 )/47 )/48 Tile{ AsIs: e.1/27 } >/49 Tile{ AsIs: ':'/31 AsIs: t./29 AsIs: )/20 } Tile{ AsIs: </0 AsIs: & Map@18/4 AsIs: (/7 AsIs: e.Index2/21 AsIs: )/8 AsIs: (/11 AsIs: e.Index1/23 AsIs: )/12 } Tile{ AsIs: e.Tail/25 } Tile{ AsIs: >/1 ]] }
      refalrts::alloc_open_bracket(vm, context[32]);
      refalrts::alloc_open_call(vm, context[33]);
      refalrts::alloc_name(vm, context[34], functions[efunc_ApplyContractionm_toExpr]);
      refalrts::alloc_open_bracket(vm, context[35]);
      refalrts::alloc_ident(vm, context[36], identifiers[ident_Var]);
      refalrts::alloc_char(vm, context[37], 's');
      refalrts::copy_evar(vm, context[38], context[39], context[21], context[22]);
      refalrts::alloc_close_bracket(vm, context[40]);
      refalrts::alloc_char(vm, context[41], ':');
      refalrts::alloc_open_bracket(vm, context[42]);
      refalrts::alloc_ident(vm, context[43], identifiers[ident_Var]);
      refalrts::alloc_char(vm, context[44], 's');
      refalrts::copy_evar(vm, context[45], context[46], context[23], context[24]);
      refalrts::alloc_close_bracket(vm, context[47]);
      refalrts::alloc_close_bracket(vm, context[48]);
      refalrts::alloc_close_call(vm, context[49]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::link_brackets( context[32], context[20] );
      refalrts::push_stack( vm, context[49] );
      refalrts::push_stack( vm, context[33] );
      refalrts::link_brackets( context[19], context[48] );
      refalrts::link_brackets( context[42], context[47] );
      refalrts::link_brackets( context[35], context[40] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[25], context[26] );
      res = refalrts::splice_evar( res, context[0], context[12] );
      res = refalrts::splice_evar( res, context[31], context[20] );
      res = refalrts::splice_elem( res, context[49] );
      res = refalrts::splice_evar( res, context[27], context[28] );
      res = refalrts::splice_evar( res, context[35], context[48] );
      res = refalrts::splice_elem( res, context[19] );
      res = refalrts::splice_evar( res, context[32], context[34] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Map@18/4 (/7 e.Index2/21 )/8 (/11 e.Index1/23 )/12 t.Next/19 e.Tail/25 >/1
    context[21] = context[13];
    context[22] = context[14];
    context[23] = context[15];
    context[24] = context[16];
    context[25] = context[17];
    context[26] = context[18];
    // closed e.Index2 as range 21
    // closed e.Index1 as range 23
    // closed e.Tail as range 25
    //DEBUG: t.Next: 19
    //DEBUG: e.Index2: 21
    //DEBUG: e.Index1: 23
    //DEBUG: e.Tail: 25

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </27 & ApplyContraction-toAssign*1/28 (/29 (/30 # Var/31 's'/32 e.Index2/21/33 )/35 ':'/36 (/37 # Var/38 's'/39 e.Index1/23/40 )/42 )/43 Tile{ AsIs: t.Next/19 } >/44 Tile{ AsIs: </0 AsIs: & Map@18/4 AsIs: (/7 AsIs: e.Index2/21 AsIs: )/8 AsIs: (/11 AsIs: e.Index1/23 AsIs: )/12 } Tile{ AsIs: e.Tail/25 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[27]);
    refalrts::alloc_name(vm, context[28], functions[efunc_gen_ApplyContractionm_toAssign_D1]);
    refalrts::alloc_open_bracket(vm, context[29]);
    refalrts::alloc_open_bracket(vm, context[30]);
    refalrts::alloc_ident(vm, context[31], identifiers[ident_Var]);
    refalrts::alloc_char(vm, context[32], 's');
    refalrts::copy_evar(vm, context[33], context[34], context[21], context[22]);
    refalrts::alloc_close_bracket(vm, context[35]);
    refalrts::alloc_char(vm, context[36], ':');
    refalrts::alloc_open_bracket(vm, context[37]);
    refalrts::alloc_ident(vm, context[38], identifiers[ident_Var]);
    refalrts::alloc_char(vm, context[39], 's');
    refalrts::copy_evar(vm, context[40], context[41], context[23], context[24]);
    refalrts::alloc_close_bracket(vm, context[42]);
    refalrts::alloc_close_bracket(vm, context[43]);
    refalrts::alloc_close_call(vm, context[44]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::push_stack( vm, context[44] );
    refalrts::push_stack( vm, context[27] );
    refalrts::link_brackets( context[29], context[43] );
    refalrts::link_brackets( context[37], context[42] );
    refalrts::link_brackets( context[30], context[35] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[25], context[26] );
    res = refalrts::splice_evar( res, context[0], context[12] );
    res = refalrts::splice_elem( res, context[44] );
    res = refalrts::splice_evar( res, context[19], context[20] );
    res = refalrts::splice_evar( res, context[27], context[43] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Map@18/4 (/7 e.Index2/13 )/8 (/11 e.Index1/15 )/12 >/1
    context[13] = context[5];
    context[14] = context[6];
    context[15] = context[9];
    context[16] = context[10];
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Index2 as range 13
    // closed e.Index1 as range 15
    //DEBUG: e.Index2: 13
    //DEBUG: e.Index1: 15

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Map@18/4 (/7 e.Index2/13 )/8 (/11 e.Index1/15 )/12 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Map@18/4 (/7 e.Index2/5 )/8 (/11 e.Index1/9 )/12 e.items/2 >/1
  // closed e.Index2 as range 5
  // closed e.Index1 as range 9
  // closed e.items as range 2
  //DEBUG: e.Index2: 5
  //DEBUG: e.Index1: 9
  //DEBUG: e.items: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map@0/4 AsIs: (/7 } & ApplyContraction-toAssign@0/13 Tile{ HalfReuse: (/8 AsIs: (/11 } # Var/14 's'/15 Tile{ AsIs: e.Index2/5 } )/16 ':'/17 (/18 # Var/19 's'/20 Tile{ AsIs: e.Index1/9 } )/21 )/22 Tile{ AsIs: )/12 AsIs: e.items/2 AsIs: >/1 ]] }
  refalrts::alloc_name(vm, context[13], functions[efunc_gen_ApplyContractionm_toAssign_Z0]);
  refalrts::alloc_ident(vm, context[14], identifiers[ident_Var]);
  refalrts::alloc_char(vm, context[15], 's');
  refalrts::alloc_close_bracket(vm, context[16]);
  refalrts::alloc_char(vm, context[17], ':');
  refalrts::alloc_open_bracket(vm, context[18]);
  refalrts::alloc_ident(vm, context[19], identifiers[ident_Var]);
  refalrts::alloc_char(vm, context[20], 's');
  refalrts::alloc_close_bracket(vm, context[21]);
  refalrts::alloc_close_bracket(vm, context[22]);
  refalrts::update_name(context[4], functions[efunc_gen_Map_Z0]);
  refalrts::reinit_open_bracket(context[8]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[12] );
  refalrts::link_brackets( context[8], context[22] );
  refalrts::link_brackets( context[18], context[21] );
  refalrts::link_brackets( context[11], context[16] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[12];
  res = refalrts::splice_evar( res, context[21], context[22] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[16], context[20] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[14], context[15] );
  res = refalrts::splice_evar( res, context[8], context[11] );
  res = refalrts::splice_elem( res, context[13] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Map_Z18("Map@18", COOKIE1_, COOKIE2_, func_gen_Map_Z18);


static refalrts::FnResult func_gen_Map_Z19(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 57 elems
  refalrts::Iter context[57];
  refalrts::zeros( context, 57 );
  // </0 & Map@19/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & Map@19/4 (/7 e.new1/5 )/8 s.new2/9 (/12 e.new3/10 )/13 e.new4/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new1 as range 5
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[10] = 0;
  context[11] = 0;
  context[12] = refalrts::brackets_left( context[10], context[11], context[2], context[3] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[12], context[13]);
  // closed e.new3 as range 10
  // closed e.new4 as range 2
  do {
    // </0 & Map@19/4 (/7 e.new8/14 )/8 s.new5/9 (/12 e.new9/16 )/13 t.new6/20 e.new7/18 >/1
    context[14] = context[5];
    context[15] = context[6];
    context[16] = context[10];
    context[17] = context[11];
    context[18] = context[2];
    context[19] = context[3];
    // closed e.new8 as range 14
    // closed e.new9 as range 16
    context[21] = refalrts::tvar_left( context[20], context[18], context[19] );
    if( ! context[21] )
      continue;
    // closed e.new7 as range 18
    do {
      // </0 & Map@19/4 (/7 e.PIndex/22 )/8 s.Type/9 (/12 e.Info/24 )/13 (/20 (/32 e.1/30 )/33 ':'/34 (/37 e.4/35 )/38 )/21 e.Tail/26 >/1
      context[22] = context[14];
      context[23] = context[15];
      context[24] = context[16];
      context[25] = context[17];
      context[26] = context[18];
      context[27] = context[19];
      context[28] = 0;
      context[29] = 0;
      if( ! refalrts::brackets_term( context[28], context[29], context[20] ) )
        continue;
      context[30] = 0;
      context[31] = 0;
      context[32] = refalrts::brackets_left( context[30], context[31], context[28], context[29] );
      if( ! context[32] )
        continue;
      refalrts::bracket_pointers(context[32], context[33]);
      context[34] = refalrts::char_left( ':', context[28], context[29] );
      if( ! context[34] )
        continue;
      context[35] = 0;
      context[36] = 0;
      context[37] = refalrts::brackets_left( context[35], context[36], context[28], context[29] );
      if( ! context[37] )
        continue;
      refalrts::bracket_pointers(context[37], context[38]);
      if( ! refalrts::empty_seq( context[28], context[29] ) )
        continue;
      // closed e.PIndex as range 22
      // closed e.Info as range 24
      // closed e.1 as range 30
      // closed e.4 as range 35
      // closed e.Tail as range 26
      //DEBUG: s.Type: 9
      //DEBUG: e.PIndex: 22
      //DEBUG: e.Info: 24
      //DEBUG: e.1: 30
      //DEBUG: e.4: 35
      //DEBUG: e.Tail: 26

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } (/39 (/40 </41 & ApplyContraction-toExpr/42 Tile{ AsIs: (/20 AsIs: (/32 } # Var/43 's'/44 e.PIndex/22/45 )/47 ':'/48 (/49 # Symbol/50 s.Type/9/51 e.Info/24/52 )/54 )/55 Tile{ AsIs: e.1/30 } >/56 Tile{ AsIs: )/33 AsIs: ':'/34 AsIs: (/37 AsIs: e.4/35 AsIs: )/38 AsIs: )/21 } Tile{ AsIs: </0 AsIs: & Map@19/4 AsIs: (/7 AsIs: e.PIndex/22 AsIs: )/8 AsIs: s.Type/9 AsIs: (/12 AsIs: e.Info/24 AsIs: )/13 } Tile{ AsIs: e.Tail/26 } Tile{ AsIs: >/1 ]] }
      refalrts::alloc_open_bracket(vm, context[39]);
      refalrts::alloc_open_bracket(vm, context[40]);
      refalrts::alloc_open_call(vm, context[41]);
      refalrts::alloc_name(vm, context[42], functions[efunc_ApplyContractionm_toExpr]);
      refalrts::alloc_ident(vm, context[43], identifiers[ident_Var]);
      refalrts::alloc_char(vm, context[44], 's');
      refalrts::copy_evar(vm, context[45], context[46], context[22], context[23]);
      refalrts::alloc_close_bracket(vm, context[47]);
      refalrts::alloc_char(vm, context[48], ':');
      refalrts::alloc_open_bracket(vm, context[49]);
      refalrts::alloc_ident(vm, context[50], identifiers[ident_Symbol]);
      refalrts::copy_stvar(vm, context[51], context[9]);
      refalrts::copy_evar(vm, context[52], context[53], context[24], context[25]);
      refalrts::alloc_close_bracket(vm, context[54]);
      refalrts::alloc_close_bracket(vm, context[55]);
      refalrts::alloc_close_call(vm, context[56]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[12], context[13] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::link_brackets( context[39], context[21] );
      refalrts::link_brackets( context[37], context[38] );
      refalrts::link_brackets( context[40], context[33] );
      refalrts::push_stack( vm, context[56] );
      refalrts::push_stack( vm, context[41] );
      refalrts::link_brackets( context[20], context[55] );
      refalrts::link_brackets( context[49], context[54] );
      refalrts::link_brackets( context[32], context[47] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[26], context[27] );
      res = refalrts::splice_evar( res, context[0], context[13] );
      res = refalrts::splice_evar( res, context[33], context[21] );
      res = refalrts::splice_elem( res, context[56] );
      res = refalrts::splice_evar( res, context[30], context[31] );
      res = refalrts::splice_evar( res, context[43], context[55] );
      res = refalrts::splice_evar( res, context[20], context[32] );
      res = refalrts::splice_evar( res, context[39], context[42] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Map@19/4 (/7 e.PIndex/22 )/8 s.Type/9 (/12 e.Info/24 )/13 t.Next/20 e.Tail/26 >/1
    context[22] = context[14];
    context[23] = context[15];
    context[24] = context[16];
    context[25] = context[17];
    context[26] = context[18];
    context[27] = context[19];
    // closed e.PIndex as range 22
    // closed e.Info as range 24
    // closed e.Tail as range 26
    //DEBUG: t.Next: 20
    //DEBUG: s.Type: 9
    //DEBUG: e.PIndex: 22
    //DEBUG: e.Info: 24
    //DEBUG: e.Tail: 26

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </28 & ApplyContraction-toEquation*1/29 (/30 (/31 # Var/32 's'/33 e.PIndex/22/34 )/36 ':'/37 (/38 # Symbol/39 s.Type/9/40 e.Info/24/41 )/43 )/44 Tile{ AsIs: t.Next/20 } >/45 Tile{ AsIs: </0 AsIs: & Map@19/4 AsIs: (/7 AsIs: e.PIndex/22 AsIs: )/8 AsIs: s.Type/9 AsIs: (/12 AsIs: e.Info/24 AsIs: )/13 } Tile{ AsIs: e.Tail/26 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[28]);
    refalrts::alloc_name(vm, context[29], functions[efunc_gen_ApplyContractionm_toEquation_D1]);
    refalrts::alloc_open_bracket(vm, context[30]);
    refalrts::alloc_open_bracket(vm, context[31]);
    refalrts::alloc_ident(vm, context[32], identifiers[ident_Var]);
    refalrts::alloc_char(vm, context[33], 's');
    refalrts::copy_evar(vm, context[34], context[35], context[22], context[23]);
    refalrts::alloc_close_bracket(vm, context[36]);
    refalrts::alloc_char(vm, context[37], ':');
    refalrts::alloc_open_bracket(vm, context[38]);
    refalrts::alloc_ident(vm, context[39], identifiers[ident_Symbol]);
    refalrts::copy_stvar(vm, context[40], context[9]);
    refalrts::copy_evar(vm, context[41], context[42], context[24], context[25]);
    refalrts::alloc_close_bracket(vm, context[43]);
    refalrts::alloc_close_bracket(vm, context[44]);
    refalrts::alloc_close_call(vm, context[45]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[12], context[13] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::push_stack( vm, context[45] );
    refalrts::push_stack( vm, context[28] );
    refalrts::link_brackets( context[30], context[44] );
    refalrts::link_brackets( context[38], context[43] );
    refalrts::link_brackets( context[31], context[36] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[26], context[27] );
    res = refalrts::splice_evar( res, context[0], context[13] );
    res = refalrts::splice_elem( res, context[45] );
    res = refalrts::splice_evar( res, context[20], context[21] );
    res = refalrts::splice_evar( res, context[28], context[44] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Map@19/4 (/7 e.PIndex/14 )/8 s.Type/9 (/12 e.Info/16 )/13 >/1
    context[14] = context[5];
    context[15] = context[6];
    context[16] = context[10];
    context[17] = context[11];
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.PIndex as range 14
    // closed e.Info as range 16
    //DEBUG: s.Type: 9
    //DEBUG: e.PIndex: 14
    //DEBUG: e.Info: 16

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Map@19/4 (/7 e.PIndex/14 )/8 s.Type/9 (/12 e.Info/16 )/13 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Map@19/4 (/7 e.PIndex/5 )/8 s.Type/9 (/12 e.Info/10 )/13 e.items/2 >/1
  // closed e.PIndex as range 5
  // closed e.Info as range 10
  // closed e.items as range 2
  //DEBUG: s.Type: 9
  //DEBUG: e.PIndex: 5
  //DEBUG: e.Info: 10
  //DEBUG: e.items: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map@0/4 AsIs: (/7 } & ApplyContraction-toEquation@0/14 Tile{ AsIs: (/12 } (/15 # Var/16 's'/17 Tile{ AsIs: e.PIndex/5 } )/18 ':'/19 (/20 Tile{ HalfReuse: # Symbol/8 AsIs: s.Type/9 } Tile{ AsIs: e.Info/10 } )/21 )/22 Tile{ AsIs: )/13 AsIs: e.items/2 AsIs: >/1 ]] }
  refalrts::alloc_name(vm, context[14], functions[efunc_gen_ApplyContractionm_toEquation_Z0]);
  refalrts::alloc_open_bracket(vm, context[15]);
  refalrts::alloc_ident(vm, context[16], identifiers[ident_Var]);
  refalrts::alloc_char(vm, context[17], 's');
  refalrts::alloc_close_bracket(vm, context[18]);
  refalrts::alloc_char(vm, context[19], ':');
  refalrts::alloc_open_bracket(vm, context[20]);
  refalrts::alloc_close_bracket(vm, context[21]);
  refalrts::alloc_close_bracket(vm, context[22]);
  refalrts::update_name(context[4], functions[efunc_gen_Map_Z0]);
  refalrts::reinit_ident(context[8], identifiers[ident_Symbol]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[13] );
  refalrts::link_brackets( context[12], context[22] );
  refalrts::link_brackets( context[20], context[21] );
  refalrts::link_brackets( context[15], context[18] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[13];
  res = refalrts::splice_evar( res, context[21], context[22] );
  res = refalrts::splice_evar( res, context[10], context[11] );
  res = refalrts::splice_evar( res, context[8], context[9] );
  res = refalrts::splice_evar( res, context[18], context[20] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[15], context[17] );
  res = refalrts::splice_elem( res, context[12] );
  res = refalrts::splice_elem( res, context[14] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Map_Z19("Map@19", COOKIE1_, COOKIE2_, func_gen_Map_Z19);


static refalrts::FnResult func_gen_Map_Z20(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 51 elems
  refalrts::Iter context[51];
  refalrts::zeros( context, 51 );
  // </0 & Map@20/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & Map@20/4 (/7 e.new1/5 )/8 s.new2/9 (/12 e.new3/10 )/13 e.new4/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new1 as range 5
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[10] = 0;
  context[11] = 0;
  context[12] = refalrts::brackets_left( context[10], context[11], context[2], context[3] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[12], context[13]);
  // closed e.new3 as range 10
  // closed e.new4 as range 2
  do {
    // </0 & Map@20/4 (/7 e.new8/14 )/8 s.new5/9 (/12 e.new9/16 )/13 t.new6/20 e.new7/18 >/1
    context[14] = context[5];
    context[15] = context[6];
    context[16] = context[10];
    context[17] = context[11];
    context[18] = context[2];
    context[19] = context[3];
    // closed e.new8 as range 14
    // closed e.new9 as range 16
    context[21] = refalrts::tvar_left( context[20], context[18], context[19] );
    if( ! context[21] )
      continue;
    // closed e.new7 as range 18
    do {
      // </0 & Map@20/4 (/7 e.PIndex/22 )/8 s.Type/9 (/12 e.Info/24 )/13 (/20 e.1/28 ':'/32 t./30 )/21 e.Tail/26 >/1
      context[22] = context[14];
      context[23] = context[15];
      context[24] = context[16];
      context[25] = context[17];
      context[26] = context[18];
      context[27] = context[19];
      context[28] = 0;
      context[29] = 0;
      if( ! refalrts::brackets_term( context[28], context[29], context[20] ) )
        continue;
      // closed e.PIndex as range 22
      // closed e.Info as range 24
      // closed e.Tail as range 26
      context[31] = refalrts::tvar_right( context[30], context[28], context[29] );
      if( ! context[31] )
        continue;
      context[32] = refalrts::char_right( ':', context[28], context[29] );
      if( ! context[32] )
        continue;
      // closed e.1 as range 28
      //DEBUG: s.Type: 9
      //DEBUG: e.PIndex: 22
      //DEBUG: e.Info: 24
      //DEBUG: e.Tail: 26
      //DEBUG: t.: 30
      //DEBUG: e.1: 28

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } (/33 </34 & ApplyContraction-toExpr/35 Tile{ AsIs: (/20 } (/36 # Var/37 's'/38 e.PIndex/22/39 )/41 ':'/42 (/43 # Symbol/44 s.Type/9/45 e.Info/24/46 )/48 )/49 Tile{ AsIs: e.1/28 } >/50 Tile{ AsIs: ':'/32 AsIs: t./30 AsIs: )/21 } Tile{ AsIs: </0 AsIs: & Map@20/4 AsIs: (/7 AsIs: e.PIndex/22 AsIs: )/8 AsIs: s.Type/9 AsIs: (/12 AsIs: e.Info/24 AsIs: )/13 } Tile{ AsIs: e.Tail/26 } Tile{ AsIs: >/1 ]] }
      refalrts::alloc_open_bracket(vm, context[33]);
      refalrts::alloc_open_call(vm, context[34]);
      refalrts::alloc_name(vm, context[35], functions[efunc_ApplyContractionm_toExpr]);
      refalrts::alloc_open_bracket(vm, context[36]);
      refalrts::alloc_ident(vm, context[37], identifiers[ident_Var]);
      refalrts::alloc_char(vm, context[38], 's');
      refalrts::copy_evar(vm, context[39], context[40], context[22], context[23]);
      refalrts::alloc_close_bracket(vm, context[41]);
      refalrts::alloc_char(vm, context[42], ':');
      refalrts::alloc_open_bracket(vm, context[43]);
      refalrts::alloc_ident(vm, context[44], identifiers[ident_Symbol]);
      refalrts::copy_stvar(vm, context[45], context[9]);
      refalrts::copy_evar(vm, context[46], context[47], context[24], context[25]);
      refalrts::alloc_close_bracket(vm, context[48]);
      refalrts::alloc_close_bracket(vm, context[49]);
      refalrts::alloc_close_call(vm, context[50]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[12], context[13] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::link_brackets( context[33], context[21] );
      refalrts::push_stack( vm, context[50] );
      refalrts::push_stack( vm, context[34] );
      refalrts::link_brackets( context[20], context[49] );
      refalrts::link_brackets( context[43], context[48] );
      refalrts::link_brackets( context[36], context[41] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[26], context[27] );
      res = refalrts::splice_evar( res, context[0], context[13] );
      res = refalrts::splice_evar( res, context[32], context[21] );
      res = refalrts::splice_elem( res, context[50] );
      res = refalrts::splice_evar( res, context[28], context[29] );
      res = refalrts::splice_evar( res, context[36], context[49] );
      res = refalrts::splice_elem( res, context[20] );
      res = refalrts::splice_evar( res, context[33], context[35] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Map@20/4 (/7 e.PIndex/22 )/8 s.Type/9 (/12 e.Info/24 )/13 t.Next/20 e.Tail/26 >/1
    context[22] = context[14];
    context[23] = context[15];
    context[24] = context[16];
    context[25] = context[17];
    context[26] = context[18];
    context[27] = context[19];
    // closed e.PIndex as range 22
    // closed e.Info as range 24
    // closed e.Tail as range 26
    //DEBUG: t.Next: 20
    //DEBUG: s.Type: 9
    //DEBUG: e.PIndex: 22
    //DEBUG: e.Info: 24
    //DEBUG: e.Tail: 26

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </28 & ApplyContraction-toAssign*1/29 (/30 (/31 # Var/32 's'/33 e.PIndex/22/34 )/36 ':'/37 (/38 # Symbol/39 s.Type/9/40 e.Info/24/41 )/43 )/44 Tile{ AsIs: t.Next/20 } >/45 Tile{ AsIs: </0 AsIs: & Map@20/4 AsIs: (/7 AsIs: e.PIndex/22 AsIs: )/8 AsIs: s.Type/9 AsIs: (/12 AsIs: e.Info/24 AsIs: )/13 } Tile{ AsIs: e.Tail/26 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[28]);
    refalrts::alloc_name(vm, context[29], functions[efunc_gen_ApplyContractionm_toAssign_D1]);
    refalrts::alloc_open_bracket(vm, context[30]);
    refalrts::alloc_open_bracket(vm, context[31]);
    refalrts::alloc_ident(vm, context[32], identifiers[ident_Var]);
    refalrts::alloc_char(vm, context[33], 's');
    refalrts::copy_evar(vm, context[34], context[35], context[22], context[23]);
    refalrts::alloc_close_bracket(vm, context[36]);
    refalrts::alloc_char(vm, context[37], ':');
    refalrts::alloc_open_bracket(vm, context[38]);
    refalrts::alloc_ident(vm, context[39], identifiers[ident_Symbol]);
    refalrts::copy_stvar(vm, context[40], context[9]);
    refalrts::copy_evar(vm, context[41], context[42], context[24], context[25]);
    refalrts::alloc_close_bracket(vm, context[43]);
    refalrts::alloc_close_bracket(vm, context[44]);
    refalrts::alloc_close_call(vm, context[45]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[12], context[13] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::push_stack( vm, context[45] );
    refalrts::push_stack( vm, context[28] );
    refalrts::link_brackets( context[30], context[44] );
    refalrts::link_brackets( context[38], context[43] );
    refalrts::link_brackets( context[31], context[36] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[26], context[27] );
    res = refalrts::splice_evar( res, context[0], context[13] );
    res = refalrts::splice_elem( res, context[45] );
    res = refalrts::splice_evar( res, context[20], context[21] );
    res = refalrts::splice_evar( res, context[28], context[44] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Map@20/4 (/7 e.PIndex/14 )/8 s.Type/9 (/12 e.Info/16 )/13 >/1
    context[14] = context[5];
    context[15] = context[6];
    context[16] = context[10];
    context[17] = context[11];
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.PIndex as range 14
    // closed e.Info as range 16
    //DEBUG: s.Type: 9
    //DEBUG: e.PIndex: 14
    //DEBUG: e.Info: 16

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Map@20/4 (/7 e.PIndex/14 )/8 s.Type/9 (/12 e.Info/16 )/13 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Map@20/4 (/7 e.PIndex/5 )/8 s.Type/9 (/12 e.Info/10 )/13 e.items/2 >/1
  // closed e.PIndex as range 5
  // closed e.Info as range 10
  // closed e.items as range 2
  //DEBUG: s.Type: 9
  //DEBUG: e.PIndex: 5
  //DEBUG: e.Info: 10
  //DEBUG: e.items: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map@0/4 AsIs: (/7 } & ApplyContraction-toAssign@0/14 Tile{ AsIs: (/12 } (/15 # Var/16 's'/17 Tile{ AsIs: e.PIndex/5 } )/18 ':'/19 (/20 Tile{ HalfReuse: # Symbol/8 AsIs: s.Type/9 } Tile{ AsIs: e.Info/10 } )/21 )/22 Tile{ AsIs: )/13 AsIs: e.items/2 AsIs: >/1 ]] }
  refalrts::alloc_name(vm, context[14], functions[efunc_gen_ApplyContractionm_toAssign_Z0]);
  refalrts::alloc_open_bracket(vm, context[15]);
  refalrts::alloc_ident(vm, context[16], identifiers[ident_Var]);
  refalrts::alloc_char(vm, context[17], 's');
  refalrts::alloc_close_bracket(vm, context[18]);
  refalrts::alloc_char(vm, context[19], ':');
  refalrts::alloc_open_bracket(vm, context[20]);
  refalrts::alloc_close_bracket(vm, context[21]);
  refalrts::alloc_close_bracket(vm, context[22]);
  refalrts::update_name(context[4], functions[efunc_gen_Map_Z0]);
  refalrts::reinit_ident(context[8], identifiers[ident_Symbol]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[13] );
  refalrts::link_brackets( context[12], context[22] );
  refalrts::link_brackets( context[20], context[21] );
  refalrts::link_brackets( context[15], context[18] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[13];
  res = refalrts::splice_evar( res, context[21], context[22] );
  res = refalrts::splice_evar( res, context[10], context[11] );
  res = refalrts::splice_evar( res, context[8], context[9] );
  res = refalrts::splice_evar( res, context[18], context[20] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[15], context[17] );
  res = refalrts::splice_elem( res, context[12] );
  res = refalrts::splice_elem( res, context[14] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Map_Z20("Map@20", COOKIE1_, COOKIE2_, func_gen_Map_Z20);


static refalrts::FnResult func_gen_Map_Z21(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 36 elems
  refalrts::Iter context[36];
  refalrts::zeros( context, 36 );
  // </0 & Map@21/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & Map@21/4 t.new1/5 t.new2/7 e.new3/2 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  context[8] = refalrts::tvar_left( context[7], context[2], context[3] );
  if( ! context[8] )
    return refalrts::cRecognitionImpossible;
  // closed e.new3 as range 2
  do {
    // </0 & Map@21/4 t.new4/5 t.new5/7 t.new6/11 e.new7/9 >/1
    context[9] = context[2];
    context[10] = context[3];
    context[12] = refalrts::tvar_left( context[11], context[9], context[10] );
    if( ! context[12] )
      continue;
    // closed e.new7 as range 9
    do {
      // </0 & Map@21/4 t.Svar/5 t.Symbol/7 (/11 (/19 e.1/17 )/20 ':'/21 (/24 e.4/22 )/25 )/12 e.Tail/13 >/1
      context[13] = context[9];
      context[14] = context[10];
      context[15] = 0;
      context[16] = 0;
      if( ! refalrts::brackets_term( context[15], context[16], context[11] ) )
        continue;
      context[17] = 0;
      context[18] = 0;
      context[19] = refalrts::brackets_left( context[17], context[18], context[15], context[16] );
      if( ! context[19] )
        continue;
      refalrts::bracket_pointers(context[19], context[20]);
      context[21] = refalrts::char_left( ':', context[15], context[16] );
      if( ! context[21] )
        continue;
      context[22] = 0;
      context[23] = 0;
      context[24] = refalrts::brackets_left( context[22], context[23], context[15], context[16] );
      if( ! context[24] )
        continue;
      refalrts::bracket_pointers(context[24], context[25]);
      if( ! refalrts::empty_seq( context[15], context[16] ) )
        continue;
      // closed e.1 as range 17
      // closed e.4 as range 22
      // closed e.Tail as range 13
      //DEBUG: t.Svar: 5
      //DEBUG: t.Symbol: 7
      //DEBUG: e.1: 17
      //DEBUG: e.4: 22
      //DEBUG: e.Tail: 13

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/11 AsIs: (/19 } </26 & ApplyContraction-toExpr/27 (/28 t.Svar/5/29 ':'/31 t.Symbol/7/32 )/34 Tile{ AsIs: e.1/17 } >/35 Tile{ AsIs: )/20 AsIs: ':'/21 AsIs: (/24 AsIs: e.4/22 AsIs: )/25 AsIs: )/12 } Tile{ AsIs: </0 AsIs: & Map@21/4 AsIs: t.Svar/5 AsIs: t.Symbol/7 } Tile{ AsIs: e.Tail/13 } Tile{ AsIs: >/1 ]] }
      refalrts::alloc_open_call(vm, context[26]);
      refalrts::alloc_name(vm, context[27], functions[efunc_ApplyContractionm_toExpr]);
      refalrts::alloc_open_bracket(vm, context[28]);
      refalrts::copy_evar(vm, context[29], context[30], context[5], context[6]);
      refalrts::alloc_char(vm, context[31], ':');
      refalrts::copy_evar(vm, context[32], context[33], context[7], context[8]);
      refalrts::alloc_close_bracket(vm, context[34]);
      refalrts::alloc_close_call(vm, context[35]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[24], context[25] );
      refalrts::link_brackets( context[19], context[20] );
      refalrts::push_stack( vm, context[35] );
      refalrts::push_stack( vm, context[26] );
      refalrts::link_brackets( context[28], context[34] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_evar( res, context[0], context[8] );
      res = refalrts::splice_evar( res, context[20], context[12] );
      res = refalrts::splice_elem( res, context[35] );
      res = refalrts::splice_evar( res, context[17], context[18] );
      res = refalrts::splice_evar( res, context[26], context[34] );
      res = refalrts::splice_evar( res, context[11], context[19] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Map@21/4 t.Svar/5 t.Symbol/7 t.Next/11 e.Tail/13 >/1
    context[13] = context[9];
    context[14] = context[10];
    // closed e.Tail as range 13
    //DEBUG: t.Svar: 5
    //DEBUG: t.Symbol: 7
    //DEBUG: t.Next: 11
    //DEBUG: e.Tail: 13

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </15 & ApplyContraction-toEquation*1/16 (/17 t.Svar/5/18 ':'/20 t.Symbol/7/21 )/23 Tile{ AsIs: t.Next/11 } >/24 Tile{ AsIs: </0 AsIs: & Map@21/4 AsIs: t.Svar/5 AsIs: t.Symbol/7 } Tile{ AsIs: e.Tail/13 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[15]);
    refalrts::alloc_name(vm, context[16], functions[efunc_gen_ApplyContractionm_toEquation_D1]);
    refalrts::alloc_open_bracket(vm, context[17]);
    refalrts::copy_evar(vm, context[18], context[19], context[5], context[6]);
    refalrts::alloc_char(vm, context[20], ':');
    refalrts::copy_evar(vm, context[21], context[22], context[7], context[8]);
    refalrts::alloc_close_bracket(vm, context[23]);
    refalrts::alloc_close_call(vm, context[24]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[24] );
    refalrts::push_stack( vm, context[15] );
    refalrts::link_brackets( context[17], context[23] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[0], context[8] );
    res = refalrts::splice_elem( res, context[24] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[15], context[23] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Map@21/4 t.Svar/5 t.Symbol/7 >/1
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    //DEBUG: t.Svar: 5
    //DEBUG: t.Symbol: 7

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Map@21/4 t.Svar/5 t.Symbol/7 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Map@21/4 t.Svar/5 t.Symbol/7 e.items/2 >/1
  // closed e.items as range 2
  //DEBUG: t.Svar: 5
  //DEBUG: t.Symbol: 7
  //DEBUG: e.items: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map@0/4 } (/9 & ApplyContraction-toEquation@0/10 (/11 Tile{ AsIs: t.Svar/5 } ':'/12 Tile{ AsIs: t.Symbol/7 } )/13 )/14 Tile{ AsIs: e.items/2 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[9]);
  refalrts::alloc_name(vm, context[10], functions[efunc_gen_ApplyContractionm_toEquation_Z0]);
  refalrts::alloc_open_bracket(vm, context[11]);
  refalrts::alloc_char(vm, context[12], ':');
  refalrts::alloc_close_bracket(vm, context[13]);
  refalrts::alloc_close_bracket(vm, context[14]);
  refalrts::update_name(context[4], functions[efunc_gen_Map_Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[9], context[14] );
  refalrts::link_brackets( context[11], context[13] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_elem( res, context[12] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[9], context[11] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Map_Z21("Map@21", COOKIE1_, COOKIE2_, func_gen_Map_Z21);


static refalrts::FnResult func_gen_Map_Z22(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 30 elems
  refalrts::Iter context[30];
  refalrts::zeros( context, 30 );
  // </0 & Map@22/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & Map@22/4 t.new1/5 t.new2/7 e.new3/2 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  context[8] = refalrts::tvar_left( context[7], context[2], context[3] );
  if( ! context[8] )
    return refalrts::cRecognitionImpossible;
  // closed e.new3 as range 2
  do {
    // </0 & Map@22/4 t.new4/5 t.new5/7 t.new6/11 e.new7/9 >/1
    context[9] = context[2];
    context[10] = context[3];
    context[12] = refalrts::tvar_left( context[11], context[9], context[10] );
    if( ! context[12] )
      continue;
    // closed e.new7 as range 9
    do {
      // </0 & Map@22/4 t.Svar/5 t.Symbol/7 (/11 e.1/15 ':'/19 t./17 )/12 e.Tail/13 >/1
      context[13] = context[9];
      context[14] = context[10];
      context[15] = 0;
      context[16] = 0;
      if( ! refalrts::brackets_term( context[15], context[16], context[11] ) )
        continue;
      // closed e.Tail as range 13
      context[18] = refalrts::tvar_right( context[17], context[15], context[16] );
      if( ! context[18] )
        continue;
      context[19] = refalrts::char_right( ':', context[15], context[16] );
      if( ! context[19] )
        continue;
      // closed e.1 as range 15
      //DEBUG: t.Svar: 5
      //DEBUG: t.Symbol: 7
      //DEBUG: e.Tail: 13
      //DEBUG: t.: 17
      //DEBUG: e.1: 15

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/11 } </20 & ApplyContraction-toExpr/21 (/22 t.Svar/5/23 ':'/25 t.Symbol/7/26 )/28 Tile{ AsIs: e.1/15 } >/29 Tile{ AsIs: ':'/19 AsIs: t./17 AsIs: )/12 } Tile{ AsIs: </0 AsIs: & Map@22/4 AsIs: t.Svar/5 AsIs: t.Symbol/7 } Tile{ AsIs: e.Tail/13 } Tile{ AsIs: >/1 ]] }
      refalrts::alloc_open_call(vm, context[20]);
      refalrts::alloc_name(vm, context[21], functions[efunc_ApplyContractionm_toExpr]);
      refalrts::alloc_open_bracket(vm, context[22]);
      refalrts::copy_evar(vm, context[23], context[24], context[5], context[6]);
      refalrts::alloc_char(vm, context[25], ':');
      refalrts::copy_evar(vm, context[26], context[27], context[7], context[8]);
      refalrts::alloc_close_bracket(vm, context[28]);
      refalrts::alloc_close_call(vm, context[29]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::push_stack( vm, context[29] );
      refalrts::push_stack( vm, context[20] );
      refalrts::link_brackets( context[22], context[28] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_evar( res, context[0], context[8] );
      res = refalrts::splice_evar( res, context[19], context[12] );
      res = refalrts::splice_elem( res, context[29] );
      res = refalrts::splice_evar( res, context[15], context[16] );
      res = refalrts::splice_evar( res, context[20], context[28] );
      res = refalrts::splice_elem( res, context[11] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Map@22/4 t.Svar/5 t.Symbol/7 t.Next/11 e.Tail/13 >/1
    context[13] = context[9];
    context[14] = context[10];
    // closed e.Tail as range 13
    //DEBUG: t.Svar: 5
    //DEBUG: t.Symbol: 7
    //DEBUG: t.Next: 11
    //DEBUG: e.Tail: 13

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </15 & ApplyContraction-toAssign*1/16 (/17 t.Svar/5/18 ':'/20 t.Symbol/7/21 )/23 Tile{ AsIs: t.Next/11 } >/24 Tile{ AsIs: </0 AsIs: & Map@22/4 AsIs: t.Svar/5 AsIs: t.Symbol/7 } Tile{ AsIs: e.Tail/13 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[15]);
    refalrts::alloc_name(vm, context[16], functions[efunc_gen_ApplyContractionm_toAssign_D1]);
    refalrts::alloc_open_bracket(vm, context[17]);
    refalrts::copy_evar(vm, context[18], context[19], context[5], context[6]);
    refalrts::alloc_char(vm, context[20], ':');
    refalrts::copy_evar(vm, context[21], context[22], context[7], context[8]);
    refalrts::alloc_close_bracket(vm, context[23]);
    refalrts::alloc_close_call(vm, context[24]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[24] );
    refalrts::push_stack( vm, context[15] );
    refalrts::link_brackets( context[17], context[23] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[0], context[8] );
    res = refalrts::splice_elem( res, context[24] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[15], context[23] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Map@22/4 t.Svar/5 t.Symbol/7 >/1
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    //DEBUG: t.Svar: 5
    //DEBUG: t.Symbol: 7

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Map@22/4 t.Svar/5 t.Symbol/7 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Map@22/4 t.Svar/5 t.Symbol/7 e.items/2 >/1
  // closed e.items as range 2
  //DEBUG: t.Svar: 5
  //DEBUG: t.Symbol: 7
  //DEBUG: e.items: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map@0/4 } (/9 & ApplyContraction-toAssign@0/10 (/11 Tile{ AsIs: t.Svar/5 } ':'/12 Tile{ AsIs: t.Symbol/7 } )/13 )/14 Tile{ AsIs: e.items/2 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[9]);
  refalrts::alloc_name(vm, context[10], functions[efunc_gen_ApplyContractionm_toAssign_Z0]);
  refalrts::alloc_open_bracket(vm, context[11]);
  refalrts::alloc_char(vm, context[12], ':');
  refalrts::alloc_close_bracket(vm, context[13]);
  refalrts::alloc_close_bracket(vm, context[14]);
  refalrts::update_name(context[4], functions[efunc_gen_Map_Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[9], context[14] );
  refalrts::link_brackets( context[11], context[13] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_elem( res, context[12] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[9], context[11] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Map_Z22("Map@22", COOKIE1_, COOKIE2_, func_gen_Map_Z22);


//End of file
