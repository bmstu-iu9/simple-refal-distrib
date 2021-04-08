// This file automatically generated from 'OptTree-StopRelation.ref'
// Don't edit! Edit 'OptTree-StopRelation.ref' and recompile it

#include "refalrts.h"

#define cookie_ns cookie_ns_1074668825_717519711
#define COOKIE1_ 1074668825U
#define COOKIE2_ 717519711U

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
  efunc_OptTreem_CheckTupleStopRelation = 18,
  efunc_gen_OptTreem_CheckTupleStopRelation_S2C1 = 19,
  efunc_gen_OptTreem_CheckTupleStopRelation_S2C2 = 20,
  efunc_gen_OptTreem_CheckTupleStopRelation_S2B1 = 21,
  efunc_OptTreem_CheckExprStopRelation = 22,
  efunc_gen_OptTreem_CheckExprStopRelation_S1C1 = 23,
  efunc_gen_DoCheckExprPairForRelation_Z1 = 24,
  efunc_gen_OptTreem_CheckExprStopRelation_S2C1 = 25,
  efunc_gen_OptTreem_CheckExprStopRelation_S2B1 = 26,
  efunc_gen_DoCheckExprPairForRelation_S1C1 = 27,
  efunc_ContainsSignature = 28,
  efunc_gen_DoCheckExprPairForRelation_S2C1 = 29,
  efunc_gen_DoCheckExprPairForRelation_S3C1 = 30,
  efunc_PartiallyContainsSignature = 31,
  efunc_gen_DoCheckExprPairForRelation_S3C2 = 32,
  efunc_gen_ContainsSignature_S4C3B1S3C1 = 33,
  efunc_gen_ContainsSignature_S4C3B1S4C1 = 34,
  efunc_gen_DoCheckExprPairForRelation_Z2 = 35,
  efunc_gen_DoCheckExprPairForRelation_Z3 = 36,
  efunc_gen_ContainsSignature_S5B1S2C1 = 37,
  efunc_gen_ContainsSignature_S5B1S3C1 = 38,
  efunc_gen_ContainsSignature_S5B1S3C2 = 39,
  efunc_gen_DoCheckExprPairForRelation_Z4 = 40,
  efunc_gen_ContainsSignature_S4C1 = 41,
  efunc_gen_ContainsSignature_S4C2 = 42,
  efunc_gen_ContainsSignature_S4C3 = 43,
  efunc_gen_ContainsSignature_S4C3B1 = 44,
  efunc_gen_ContainsSignature_S4C4 = 45,
  efunc_gen_ContainsSignature_S4C4B1 = 46,
  efunc_gen_ContainsSignature_S4C5 = 47,
  efunc_gen_ContainsSignature_S4C6 = 48,
  efunc_gen_ContainsSignature_S4C6B1 = 49,
  efunc_gen_ContainsSignature_S4C7 = 50,
  efunc_gen_ContainsSignature_S5C1 = 51,
  efunc_gen_ContainsSignature_S5B1 = 52,
  efunc_gen_PartiallyContainsSignature_S1C1 = 53,
  efunc_gen_PartiallyContainsSignature_S2C1 = 54,
  efunc_gen_PartiallyContainsSignature_S2C2 = 55,
  efunc_gen_PartiallyContainsSignature_S2C3 = 56,
  efunc_gen_Map_Z2 = 57,
  efunc_gen_Map_Z1 = 58,
  efunc_gen_CanonizeExprm_Term_S2C1 = 59,
  efunc_OneOf = 60,
  efunc_gen_CanonizeExprm_Term_S2A2 = 61,
  efunc_OptTreem_CanonizeExpr = 62,
  efunc_gen_CanonizeExprm_Term_S3A1 = 63,
  efunc_Mu = 64,
  efunc_Up = 65,
  efunc_Evm_met = 66,
  efunc_Residue = 67,
  efunc_u_u_Metau_Residue = 68,
  efunc_MapAccum = 69,
  efunc_UnBracket = 70,
  efunc_DelAccumulator = 71,
  efunc_Inc = 72,
  efunc_Dec = 73,
  efunc_DoCheckExprPairForRelation = 74,
  efunc_OptTreem_CanonizeTuple = 75,
  efunc_CanonizeExprm_Term = 76,
  efunc_gen_Apply_Z4 = 77,
  efunc_gen_DoCheckExprPairForRelation_Z1S1C1 = 78,
  efunc_gen_DoCheckExprPairForRelation_Z1S2C1 = 79,
  efunc_gen_DoCheckExprPairForRelation_Z1S3C1 = 80,
  efunc_gen_PartiallyContainsSignature_Z1 = 81,
  efunc_gen_DoCheckExprPairForRelation_Z1S3C2 = 82,
  efunc_gen_DoCheckExprPairForRelation_Z0 = 83,
  efunc_gen_DoCheckExprPairForRelation_Z2S1C1 = 84,
  efunc_gen_DoCheckExprPairForRelation_Z2S2C1 = 85,
  efunc_gen_DoCheckExprPairForRelation_Z2S3C1 = 86,
  efunc_gen_DoCheckExprPairForRelation_Z2S3C2 = 87,
  efunc_gen_DoCheckExprPairForRelation_Z3S1C1 = 88,
  efunc_gen_DoCheckExprPairForRelation_Z3S2C1 = 89,
  efunc_gen_DoCheckExprPairForRelation_Z3S3C1 = 90,
  efunc_gen_DoCheckExprPairForRelation_Z3S3C2 = 91,
  efunc_gen_DoCheckExprPairForRelation_Z4S1C1 = 92,
  efunc_gen_DoCheckExprPairForRelation_Z4S2C1 = 93,
  efunc_gen_DoCheckExprPairForRelation_Z4S3C1 = 94,
  efunc_gen_PartiallyContainsSignature_Z2 = 95,
  efunc_gen_DoCheckExprPairForRelation_Z4S3C2 = 96,
  efunc_gen_CanonizeExprm_Term_D1 = 97,
  efunc_gen_Map_Z0 = 98,
  efunc_gen_CanonizeExprm_Term_Z0 = 99,
  efunc_gen_OptTreem_CanonizeTuple_L1D1 = 100,
  efunc_gen_OptTreem_CanonizeTuple_L1Z0 = 101,
  efunc_gen_CanonizeExprm_Term_D1S2C1 = 102,
  efunc_gen_PartiallyContainsSignature_Z1S1C1 = 103,
  efunc_gen_PartiallyContainsSignature_Z1S2C1 = 104,
  efunc_gen_PartiallyContainsSignature_Z1S2C2 = 105,
  efunc_gen_PartiallyContainsSignature_Z1S2C3 = 106,
  efunc_gen_PartiallyContainsSignature_Z0 = 107,
  efunc_gen_PartiallyContainsSignature_Z2S1C1 = 108,
  efunc_gen_PartiallyContainsSignature_Z2S2C1 = 109,
  efunc_gen_PartiallyContainsSignature_Z2S2C2 = 110,
  efunc_gen_PartiallyContainsSignature_Z2S2C3 = 111,
};


enum ident {
  ident_True = 0,
  ident_False = 1,
  ident_Brackets = 2,
  ident_ClosureBrackets = 3,
  ident_ADTm_Brackets = 4,
  ident_CallBrackets = 5,
  ident_Var = 6,
  ident_Symbol = 7,
  ident_Number = 8,
  ident_Mu = 9,
  ident_Up = 10,
  ident_Evm_met = 11,
  ident_Residue = 12,
  ident_u_u_Metau_Residue = 13,
  ident_Apply = 14,
  ident_Map = 15,
  ident_Reduce = 16,
  ident_Fetch = 17,
  ident_MapAccum = 18,
  ident_DoMapAccum = 19,
  ident_UnBracket = 20,
  ident_DelAccumulator = 21,
  ident_Inc = 22,
  ident_Dec = 23,
  ident_Pipe = 24,
  ident_OptTreem_CheckTupleStopRelation = 25,
  ident_OptTreem_CheckExprStopRelation = 26,
  ident_DoCheckExprPairForRelation = 27,
  ident_ContainsSignature = 28,
  ident_PartiallyContainsSignature = 29,
  ident_OptTreem_CanonizeTuple = 30,
  ident_OptTreem_CanonizeExpr = 31,
  ident_CanonizeExprm_Term = 32,
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


static refalrts::FnResult func_gen_OptTreem_CheckTupleStopRelation_S2B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  // </0 & OptTree-CheckTupleStopRelation$2:1/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & OptTree-CheckTupleStopRelation$2:1/4 (/7 e.new1/5 )/8 (/11 e.new2/9 )/12 s.new3/13 >/1
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
  if( ! refalrts::svar_left( context[13], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & OptTree-CheckTupleStopRelation$2:1/4 (/7 e.CurrentTuple-Rest/14 )/8 (/11 e.HistoryTuple-Rest/16 )/12 # True/13 >/1
    context[14] = context[5];
    context[15] = context[6];
    context[16] = context[9];
    context[17] = context[10];
    if( ! refalrts::ident_term( identifiers[ident_True], context[13] ) )
      continue;
    // closed e.CurrentTuple-Rest as range 14
    // closed e.HistoryTuple-Rest as range 16
    //DEBUG: e.CurrentTuple-Rest: 14
    //DEBUG: e.HistoryTuple-Rest: 16

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} (/11 {REMOVED TILE} )/12 # True/13 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & OptTree-CheckTupleStopRelation/4 AsIs: (/7 AsIs: e.CurrentTuple-Rest/14 AsIs: )/8 } Tile{ AsIs: e.HistoryTuple-Rest/16 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_OptTreem_CheckTupleStopRelation]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[16], context[17] );
    refalrts::splice_to_freelist_open( vm, context[8], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & OptTree-CheckTupleStopRelation$2:1/4 (/7 e.CurrentTuple-Rest/5 )/8 (/11 e.HistoryTuple-Rest/9 )/12 # False/13 >/1
  if( ! refalrts::ident_term( identifiers[ident_False], context[13] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.CurrentTuple-Rest as range 5
  // closed e.HistoryTuple-Rest as range 9
  //DEBUG: e.CurrentTuple-Rest: 5
  //DEBUG: e.HistoryTuple-Rest: 9

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & OptTree-CheckTupleStopRelation$2:1/4 (/7 e.CurrentTuple-Rest/5 )/8 (/11 e.HistoryTuple-Rest/9 )/12 # False/13 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: # False/1 ]] }
  refalrts::reinit_ident(context[1], identifiers[ident_False]);
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_OptTreem_CheckTupleStopRelation_S2B1("OptTree-CheckTupleStopRelation$2:1", COOKIE1_, COOKIE2_, func_gen_OptTreem_CheckTupleStopRelation_S2B1);


static refalrts::FnResult func_OptTreem_CheckTupleStopRelation(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 27 elems
  refalrts::Iter context[27];
  refalrts::zeros( context, 27 );
  // </0 & OptTree-CheckTupleStopRelation/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & OptTree-CheckTupleStopRelation/4 (/7 e.new1/5 )/8 e.new2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new1 as range 5
  // closed e.new2 as range 2
  do {
    // </0 & OptTree-CheckTupleStopRelation/4 (/7 )/8 >/1
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & OptTree-CheckTupleStopRelation/4 (/7 )/8 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # True/1 ]] }
    refalrts::reinit_ident(context[1], identifiers[ident_True]);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & OptTree-CheckTupleStopRelation/4 (/7 e.CurrentTuple/5 )/8 e.HistoryTuple/2 >/1
  // closed e.CurrentTuple as range 5
  // closed e.HistoryTuple as range 2
  //DEBUG: e.CurrentTuple: 5
  //DEBUG: e.HistoryTuple: 2
  //2: e.HistoryTuple
  //5: e.CurrentTuple
  //12: e.CurrentTuple

  refalrts::reset_allocator(vm);
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::alloc_open_call(vm, context[9]);
  refalrts::alloc_name(vm, context[11], functions[efunc_gen_OptTreem_CheckTupleStopRelation_S2C1]);
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
    // </9 & OptTree-CheckTupleStopRelation$2?1/13 (/16 e.CurrentExpr/14 )/17 e.CurrentTuple-Rest/11 >/10
    context[11] = 0;
    context[12] = 0;
    context[13] = refalrts::call_left( context[11], context[12], context[9], context[10] );
    context[14] = 0;
    context[15] = 0;
    context[16] = refalrts::brackets_left( context[14], context[15], context[11], context[12] );
    if( ! context[16] )
      continue;
    refalrts::bracket_pointers(context[16], context[17]);
    // closed e.CurrentExpr as range 14
    // closed e.CurrentTuple-Rest as range 11
    //DEBUG: e.CurrentTuple: 5
    //DEBUG: e.HistoryTuple: 2
    //DEBUG: e.CurrentExpr: 14
    //DEBUG: e.CurrentTuple-Rest: 11
    //2: e.HistoryTuple
    //5: e.CurrentTuple
    //11: e.CurrentTuple-Rest
    //14: e.CurrentExpr
    //21: e.HistoryTuple

    refalrts::reset_allocator(vm);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::alloc_open_call(vm, context[18]);
    refalrts::alloc_name(vm, context[20], functions[efunc_gen_OptTreem_CheckTupleStopRelation_S2C2]);
    refalrts::copy_evar(vm, context[21], context[22], context[2], context[3]);
    refalrts::alloc_close_call(vm, context[19]);
    refalrts::push_stack( vm, context[19] );
    refalrts::push_stack( vm, context[18] );
    res = refalrts::splice_elem( res, context[19] );
    res = refalrts::splice_evar( res, context[21], context[22] );
    res = refalrts::splice_elem( res, context[20] );
    res = refalrts::splice_elem( res, context[18] );
    refalrts::use( res );
    refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
    if (rec_res != refalrts::cSuccess)
      return rec_res;
    refalrts::this_is_generated_function(vm);
    do {
      // </18 & OptTree-CheckTupleStopRelation$2?2/22 (/25 e.HistoryExpr/23 )/26 e.HistoryTuple-Rest/20 >/19
      context[20] = 0;
      context[21] = 0;
      context[22] = refalrts::call_left( context[20], context[21], context[18], context[19] );
      context[23] = 0;
      context[24] = 0;
      context[25] = refalrts::brackets_left( context[23], context[24], context[20], context[21] );
      if( ! context[25] )
        continue;
      refalrts::bracket_pointers(context[25], context[26]);
      // closed e.HistoryExpr as range 23
      // closed e.HistoryTuple-Rest as range 20
      //DEBUG: e.CurrentTuple: 5
      //DEBUG: e.HistoryTuple: 2
      //DEBUG: e.CurrentExpr: 14
      //DEBUG: e.CurrentTuple-Rest: 11
      //DEBUG: e.HistoryExpr: 23
      //DEBUG: e.HistoryTuple-Rest: 20

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} e.CurrentTuple/5 )/8 e.HistoryTuple/2 {REMOVED TILE} {REMOVED TILE} >/10 </18 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & OptTree-CheckTupleStopRelation$2:1/4 AsIs: (/7 } Tile{ AsIs: e.CurrentTuple-Rest/11 } Tile{ HalfReuse: )/22 AsIs: (/25 } Tile{ AsIs: e.HistoryTuple-Rest/20 } Tile{ AsIs: )/26 } Tile{ AsIs: </9 Reuse: & OptTree-CheckExprStopRelation/13 AsIs: (/16 AsIs: e.CurrentExpr/14 AsIs: )/17 } Tile{ AsIs: e.HistoryExpr/23 } Tile{ AsIs: >/19 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_gen_OptTreem_CheckTupleStopRelation_S2B1]);
      refalrts::reinit_close_bracket(context[22]);
      refalrts::update_name(context[13], functions[efunc_OptTreem_CheckExprStopRelation]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[19] );
      refalrts::push_stack( vm, context[9] );
      refalrts::link_brackets( context[16], context[17] );
      refalrts::link_brackets( context[25], context[26] );
      refalrts::link_brackets( context[7], context[22] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[19];
      res = refalrts::splice_evar( res, context[23], context[24] );
      res = refalrts::splice_evar( res, context[9], context[17] );
      res = refalrts::splice_elem( res, context[26] );
      res = refalrts::splice_evar( res, context[20], context[21] );
      res = refalrts::splice_evar( res, context[22], context[25] );
      res = refalrts::splice_evar( res, context[11], context[12] );
      refalrts::splice_to_freelist_open( vm, context[7], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    refalrts::splice_to_freelist(vm, context[18], context[19]);
    continue;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  refalrts::splice_to_freelist(vm, context[9], context[10]);
  return refalrts::cRecognitionImpossible;
}

static refalrts::NativeReference nat_ref_OptTreem_CheckTupleStopRelation("OptTree-CheckTupleStopRelation", 0U, 0U, func_OptTreem_CheckTupleStopRelation);


static refalrts::FnResult func_gen_OptTreem_CheckExprStopRelation_S2B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 5 elems
  refalrts::Iter context[5];
  refalrts::zeros( context, 5 );
  // </0 & OptTree-CheckExprStopRelation$2:1/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  do {
    // </0 & OptTree-CheckExprStopRelation$2:1/4 >/1
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & OptTree-CheckExprStopRelation$2:1/4 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # True/1 ]] }
    refalrts::reinit_ident(context[1], identifiers[ident_True]);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & OptTree-CheckExprStopRelation$2:1/4 e._/2 >/1
  // closed e._ as range 2
  //DEBUG: e._: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & OptTree-CheckExprStopRelation$2:1/4 e._/2 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: # False/1 ]] }
  refalrts::reinit_ident(context[1], identifiers[ident_False]);
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_OptTreem_CheckExprStopRelation_S2B1("OptTree-CheckExprStopRelation$2:1", COOKIE1_, COOKIE2_, func_gen_OptTreem_CheckExprStopRelation_S2B1);


static refalrts::FnResult func_OptTreem_CheckExprStopRelation(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
  // </0 & OptTree-CheckExprStopRelation/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & OptTree-CheckExprStopRelation/4 (/7 e.new1/5 )/8 e.new2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new1 as range 5
  // closed e.new2 as range 2
  do {
    // </0 & OptTree-CheckExprStopRelation/4 (/7 e.CurrentExpr/9 )/8 e.HistoryExpr/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    // closed e.CurrentExpr as range 9
    // closed e.HistoryExpr as range 11
    //DEBUG: e.CurrentExpr: 9
    //DEBUG: e.HistoryExpr: 11
    //9: e.CurrentExpr
    //11: e.HistoryExpr
    //16: e.CurrentExpr

    refalrts::reset_allocator(vm);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::alloc_open_call(vm, context[13]);
    refalrts::alloc_name(vm, context[15], functions[efunc_gen_OptTreem_CheckExprStopRelation_S1C1]);
    refalrts::copy_evar(vm, context[16], context[17], context[9], context[10]);
    refalrts::alloc_close_call(vm, context[14]);
    refalrts::push_stack( vm, context[14] );
    refalrts::push_stack( vm, context[13] );
    res = refalrts::splice_elem( res, context[14] );
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_elem( res, context[15] );
    res = refalrts::splice_elem( res, context[13] );
    refalrts::use( res );
    refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
    if (rec_res != refalrts::cSuccess)
      return rec_res;
    refalrts::this_is_generated_function(vm);
    do {
      // </13 & OptTree-CheckExprStopRelation$1?1/17 t.Term/18 e.OtherPart/15 >/14
      context[15] = 0;
      context[16] = 0;
      context[17] = refalrts::call_left( context[15], context[16], context[13], context[14] );
      context[19] = refalrts::tvar_left( context[18], context[15], context[16] );
      if( ! context[19] )
        continue;
      // closed e.OtherPart as range 15
      //DEBUG: e.CurrentExpr: 9
      //DEBUG: e.HistoryExpr: 11
      //DEBUG: t.Term: 18
      //DEBUG: e.OtherPart: 15

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & OptTree-CheckExprStopRelation/4 {REMOVED TILE} e.CurrentExpr/9 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} >/14 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: </13 Reuse: & DoCheckExprPairForRelation@1/17 AsIs: t.Term/18 } Tile{ AsIs: (/7 } Tile{ AsIs: e.OtherPart/15 } Tile{ AsIs: )/8 } Tile{ AsIs: e.HistoryExpr/11 } Tile{ AsIs: >/1 ]] }
      refalrts::update_name(context[17], functions[efunc_gen_DoCheckExprPairForRelation_Z1]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[13] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[11], context[12] );
      res = refalrts::splice_elem( res, context[8] );
      res = refalrts::splice_evar( res, context[15], context[16] );
      res = refalrts::splice_elem( res, context[7] );
      res = refalrts::splice_evar( res, context[13], context[19] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    refalrts::splice_to_freelist(vm, context[13], context[14]);
    continue;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & OptTree-CheckExprStopRelation/4 (/7 e.CurrentExpr/5 )/8 e.HistoryExpr/2 >/1
  // closed e.CurrentExpr as range 5
  // closed e.HistoryExpr as range 2
  //DEBUG: e.CurrentExpr: 5
  //DEBUG: e.HistoryExpr: 2
  //2: e.HistoryExpr
  //5: e.CurrentExpr
  //12: e.CurrentExpr

  refalrts::reset_allocator(vm);
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::alloc_open_call(vm, context[9]);
  refalrts::alloc_name(vm, context[11], functions[efunc_gen_OptTreem_CheckExprStopRelation_S2C1]);
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
    // </9 & OptTree-CheckExprStopRelation$2?1/13 >/10
    context[11] = 0;
    context[12] = 0;
    context[13] = refalrts::call_left( context[11], context[12], context[9], context[10] );
    if( ! refalrts::empty_seq( context[11], context[12] ) )
      continue;
    //DEBUG: e.CurrentExpr: 5
    //DEBUG: e.HistoryExpr: 2

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} (/7 e.CurrentExpr/5 )/8 {REMOVED TILE} </9 & OptTree-CheckExprStopRelation$2?1/13 >/10 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & OptTree-CheckExprStopRelation$2:1/4 } Tile{ AsIs: e.HistoryExpr/2 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_gen_OptTreem_CheckExprStopRelation_S2B1]);
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

  refalrts::splice_to_freelist(vm, context[9], context[10]);
  return refalrts::cRecognitionImpossible;
}

static refalrts::NativeReference nat_ref_OptTreem_CheckExprStopRelation("OptTree-CheckExprStopRelation", 0U, 0U, func_OptTreem_CheckExprStopRelation);


static refalrts::FnResult func_DoCheckExprPairForRelation(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 37 elems
  refalrts::Iter context[37];
  refalrts::zeros( context, 37 );
  // </0 & DoCheckExprPairForRelation/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & DoCheckExprPairForRelation/4 (/7 e.new1/5 )/8 (/11 e.new2/9 )/12 e.new3/2 >/1
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
    // </0 & DoCheckExprPairForRelation/4 (/7 e.CurSig1/13 )/8 (/11 e.CurSig2/15 )/12 e.HistorySignature/17 >/1
    context[13] = context[5];
    context[14] = context[6];
    context[15] = context[9];
    context[16] = context[10];
    context[17] = context[2];
    context[18] = context[3];
    // closed e.CurSig1 as range 13
    // closed e.CurSig2 as range 15
    // closed e.HistorySignature as range 17
    //DEBUG: e.CurSig1: 13
    //DEBUG: e.CurSig2: 15
    //DEBUG: e.HistorySignature: 17
    //13: e.CurSig1
    //15: e.CurSig2
    //17: e.HistorySignature
    //25: e.CurSig1
    //28: e.HistorySignature

    refalrts::reset_allocator(vm);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::alloc_open_call(vm, context[19]);
    refalrts::alloc_name(vm, context[21], functions[efunc_gen_DoCheckExprPairForRelation_S1C1]);
    refalrts::alloc_open_call(vm, context[22]);
    refalrts::alloc_name(vm, context[23], functions[efunc_ContainsSignature]);
    refalrts::alloc_open_bracket(vm, context[24]);
    refalrts::copy_evar(vm, context[25], context[26], context[13], context[14]);
    refalrts::alloc_close_bracket(vm, context[27]);
    refalrts::copy_evar(vm, context[28], context[29], context[17], context[18]);
    refalrts::alloc_close_call(vm, context[30]);
    refalrts::alloc_close_call(vm, context[20]);
    refalrts::push_stack( vm, context[20] );
    refalrts::push_stack( vm, context[19] );
    res = refalrts::splice_elem( res, context[20] );
    refalrts::push_stack( vm, context[30] );
    refalrts::push_stack( vm, context[22] );
    res = refalrts::splice_elem( res, context[30] );
    res = refalrts::splice_evar( res, context[28], context[29] );
    refalrts::link_brackets( context[24], context[27] );
    res = refalrts::splice_elem( res, context[27] );
    res = refalrts::splice_evar( res, context[25], context[26] );
    res = refalrts::splice_elem( res, context[24] );
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
      // </19 & DoCheckExprPairForRelation$1?1/23 # True/24 >/20
      context[21] = 0;
      context[22] = 0;
      context[23] = refalrts::call_left( context[21], context[22], context[19], context[20] );
      context[24] = refalrts::ident_left( identifiers[ident_True], context[21], context[22] );
      if( ! context[24] )
        continue;
      if( ! refalrts::empty_seq( context[21], context[22] ) )
        continue;
      //DEBUG: e.CurSig1: 13
      //DEBUG: e.CurSig2: 15
      //DEBUG: e.HistorySignature: 17

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & DoCheckExprPairForRelation/4 (/7 e.CurSig1/13 )/8 (/11 e.CurSig2/15 )/12 e.HistorySignature/17 </19 & DoCheckExprPairForRelation$1?1/23 # True/24 >/20 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: # True/1 ]] }
      refalrts::reinit_ident(context[1], identifiers[ident_True]);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    refalrts::splice_to_freelist(vm, context[19], context[20]);
    continue;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoCheckExprPairForRelation/4 (/7 e.CurSig1/13 )/8 (/11 e.CurSig2/15 )/12 e.HistorySignature/17 >/1
    context[13] = context[5];
    context[14] = context[6];
    context[15] = context[9];
    context[16] = context[10];
    context[17] = context[2];
    context[18] = context[3];
    // closed e.CurSig1 as range 13
    // closed e.CurSig2 as range 15
    // closed e.HistorySignature as range 17
    //DEBUG: e.CurSig1: 13
    //DEBUG: e.CurSig2: 15
    //DEBUG: e.HistorySignature: 17
    //13: e.CurSig1
    //15: e.CurSig2
    //17: e.HistorySignature
    //25: e.CurSig2
    //28: e.HistorySignature

    refalrts::reset_allocator(vm);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::alloc_open_call(vm, context[19]);
    refalrts::alloc_name(vm, context[21], functions[efunc_gen_DoCheckExprPairForRelation_S2C1]);
    refalrts::alloc_open_call(vm, context[22]);
    refalrts::alloc_name(vm, context[23], functions[efunc_ContainsSignature]);
    refalrts::alloc_open_bracket(vm, context[24]);
    refalrts::copy_evar(vm, context[25], context[26], context[15], context[16]);
    refalrts::alloc_close_bracket(vm, context[27]);
    refalrts::copy_evar(vm, context[28], context[29], context[17], context[18]);
    refalrts::alloc_close_call(vm, context[30]);
    refalrts::alloc_close_call(vm, context[20]);
    refalrts::push_stack( vm, context[20] );
    refalrts::push_stack( vm, context[19] );
    res = refalrts::splice_elem( res, context[20] );
    refalrts::push_stack( vm, context[30] );
    refalrts::push_stack( vm, context[22] );
    res = refalrts::splice_elem( res, context[30] );
    res = refalrts::splice_evar( res, context[28], context[29] );
    refalrts::link_brackets( context[24], context[27] );
    res = refalrts::splice_elem( res, context[27] );
    res = refalrts::splice_evar( res, context[25], context[26] );
    res = refalrts::splice_elem( res, context[24] );
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
      // </19 & DoCheckExprPairForRelation$2?1/23 # True/24 >/20
      context[21] = 0;
      context[22] = 0;
      context[23] = refalrts::call_left( context[21], context[22], context[19], context[20] );
      context[24] = refalrts::ident_left( identifiers[ident_True], context[21], context[22] );
      if( ! context[24] )
        continue;
      if( ! refalrts::empty_seq( context[21], context[22] ) )
        continue;
      //DEBUG: e.CurSig1: 13
      //DEBUG: e.CurSig2: 15
      //DEBUG: e.HistorySignature: 17

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & DoCheckExprPairForRelation/4 (/7 e.CurSig1/13 )/8 (/11 e.CurSig2/15 )/12 e.HistorySignature/17 </19 & DoCheckExprPairForRelation$2?1/23 # True/24 >/20 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: # True/1 ]] }
      refalrts::reinit_ident(context[1], identifiers[ident_True]);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    refalrts::splice_to_freelist(vm, context[19], context[20]);
    continue;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoCheckExprPairForRelation/4 (/7 e.CurSig1/13 )/8 (/11 e.CurSig2/15 )/12 e.HistorySignature/17 >/1
    context[13] = context[5];
    context[14] = context[6];
    context[15] = context[9];
    context[16] = context[10];
    context[17] = context[2];
    context[18] = context[3];
    // closed e.CurSig1 as range 13
    // closed e.CurSig2 as range 15
    // closed e.HistorySignature as range 17
    //DEBUG: e.CurSig1: 13
    //DEBUG: e.CurSig2: 15
    //DEBUG: e.HistorySignature: 17
    //13: e.CurSig1
    //15: e.CurSig2
    //17: e.HistorySignature
    //25: e.CurSig1
    //28: e.HistorySignature

    refalrts::reset_allocator(vm);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::alloc_open_call(vm, context[19]);
    refalrts::alloc_name(vm, context[21], functions[efunc_gen_DoCheckExprPairForRelation_S3C1]);
    refalrts::alloc_open_call(vm, context[22]);
    refalrts::alloc_name(vm, context[23], functions[efunc_PartiallyContainsSignature]);
    refalrts::alloc_open_bracket(vm, context[24]);
    refalrts::copy_evar(vm, context[25], context[26], context[13], context[14]);
    refalrts::alloc_close_bracket(vm, context[27]);
    refalrts::copy_evar(vm, context[28], context[29], context[17], context[18]);
    refalrts::alloc_close_call(vm, context[30]);
    refalrts::alloc_close_call(vm, context[20]);
    refalrts::push_stack( vm, context[20] );
    refalrts::push_stack( vm, context[19] );
    res = refalrts::splice_elem( res, context[20] );
    refalrts::push_stack( vm, context[30] );
    refalrts::push_stack( vm, context[22] );
    res = refalrts::splice_elem( res, context[30] );
    res = refalrts::splice_evar( res, context[28], context[29] );
    refalrts::link_brackets( context[24], context[27] );
    res = refalrts::splice_elem( res, context[27] );
    res = refalrts::splice_evar( res, context[25], context[26] );
    res = refalrts::splice_elem( res, context[24] );
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
      // </19 & DoCheckExprPairForRelation$3?1/23 # True/24 e.HistorySignature-Rest/21 >/20
      context[21] = 0;
      context[22] = 0;
      context[23] = refalrts::call_left( context[21], context[22], context[19], context[20] );
      context[24] = refalrts::ident_left( identifiers[ident_True], context[21], context[22] );
      if( ! context[24] )
        continue;
      // closed e.HistorySignature-Rest as range 21
      //DEBUG: e.CurSig1: 13
      //DEBUG: e.CurSig2: 15
      //DEBUG: e.HistorySignature: 17
      //DEBUG: e.HistorySignature-Rest: 21
      //13: e.CurSig1
      //15: e.CurSig2
      //17: e.HistorySignature
      //21: e.HistorySignature-Rest
      //31: e.CurSig2
      //34: e.HistorySignature-Rest

      refalrts::reset_allocator(vm);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::alloc_open_call(vm, context[25]);
      refalrts::alloc_name(vm, context[27], functions[efunc_gen_DoCheckExprPairForRelation_S3C2]);
      refalrts::alloc_open_call(vm, context[28]);
      refalrts::alloc_name(vm, context[29], functions[efunc_ContainsSignature]);
      refalrts::alloc_open_bracket(vm, context[30]);
      refalrts::copy_evar(vm, context[31], context[32], context[15], context[16]);
      refalrts::alloc_close_bracket(vm, context[33]);
      refalrts::copy_evar(vm, context[34], context[35], context[21], context[22]);
      refalrts::alloc_close_call(vm, context[36]);
      refalrts::alloc_close_call(vm, context[26]);
      refalrts::push_stack( vm, context[26] );
      refalrts::push_stack( vm, context[25] );
      res = refalrts::splice_elem( res, context[26] );
      refalrts::push_stack( vm, context[36] );
      refalrts::push_stack( vm, context[28] );
      res = refalrts::splice_elem( res, context[36] );
      res = refalrts::splice_evar( res, context[34], context[35] );
      refalrts::link_brackets( context[30], context[33] );
      res = refalrts::splice_elem( res, context[33] );
      res = refalrts::splice_evar( res, context[31], context[32] );
      res = refalrts::splice_elem( res, context[30] );
      res = refalrts::splice_elem( res, context[29] );
      res = refalrts::splice_elem( res, context[28] );
      res = refalrts::splice_elem( res, context[27] );
      res = refalrts::splice_elem( res, context[25] );
      refalrts::use( res );
      refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
      if (rec_res != refalrts::cSuccess)
        return rec_res;
      refalrts::this_is_generated_function(vm);
      do {
        // </25 & DoCheckExprPairForRelation$3?2/29 # True/30 >/26
        context[27] = 0;
        context[28] = 0;
        context[29] = refalrts::call_left( context[27], context[28], context[25], context[26] );
        context[30] = refalrts::ident_left( identifiers[ident_True], context[27], context[28] );
        if( ! context[30] )
          continue;
        if( ! refalrts::empty_seq( context[27], context[28] ) )
          continue;
        //DEBUG: e.CurSig1: 13
        //DEBUG: e.CurSig2: 15
        //DEBUG: e.HistorySignature: 17
        //DEBUG: e.HistorySignature-Rest: 21

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 & DoCheckExprPairForRelation/4 (/7 e.CurSig1/13 )/8 (/11 e.CurSig2/15 )/12 e.HistorySignature/17 </19 & DoCheckExprPairForRelation$3?1/23 # True/24 e.HistorySignature-Rest/21 >/20 </25 & DoCheckExprPairForRelation$3?2/29 # True/30 >/26 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: # True/1 ]] }
        refalrts::reinit_ident(context[1], identifiers[ident_True]);
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      refalrts::splice_to_freelist(vm, context[25], context[26]);
      continue;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    refalrts::splice_to_freelist(vm, context[19], context[20]);
    continue;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoCheckExprPairForRelation/4 (/7 e.CurSig1/5 )/8 (/11 e.CurSig2/9 )/12 e.HistorySignature/2 >/1
  // closed e.CurSig1 as range 5
  // closed e.CurSig2 as range 9
  // closed e.HistorySignature as range 2
  //DEBUG: e.CurSig1: 5
  //DEBUG: e.CurSig2: 9
  //DEBUG: e.HistorySignature: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & DoCheckExprPairForRelation/4 (/7 e.CurSig1/5 )/8 (/11 e.CurSig2/9 )/12 e.HistorySignature/2 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: # False/1 ]] }
  refalrts::reinit_ident(context[1], identifiers[ident_False]);
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_DoCheckExprPairForRelation("DoCheckExprPairForRelation", COOKIE1_, COOKIE2_, func_DoCheckExprPairForRelation);


static refalrts::FnResult func_gen_ContainsSignature_S4C3B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 25 elems
  refalrts::Iter context[25];
  refalrts::zeros( context, 25 );
  // </0 & ContainsSignature$4?3:1/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & ContainsSignature$4?3:1/4 (/7 e.new1/5 )/8 e.new2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new1 as range 5
  // closed e.new2 as range 2
  do {
    // </0 & ContainsSignature$4?3:1/4 (/7 e.new4/9 )/8 s.new3/13 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    // closed e.new4 as range 9
    if( ! refalrts::svar_left( context[13], context[11], context[12] ) )
      continue;
    if( ! refalrts::empty_seq( context[11], context[12] ) )
      continue;
    do {
      // </0 & ContainsSignature$4?3:1/4 (/7 e.Inner/14 )/8 # Brackets/13 >/1
      context[14] = context[9];
      context[15] = context[10];
      if( ! refalrts::ident_term( identifiers[ident_Brackets], context[13] ) )
        continue;
      // closed e.Inner as range 14
      //DEBUG: e.Inner: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} & ContainsSignature$4?3:1/4 (/7 {REMOVED TILE} )/8 # Brackets/13 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: # True/0 } Tile{ AsIs: e.Inner/14 } Tile{ ]] }
      refalrts::reinit_ident(context[0], identifiers[ident_True]);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[14], context[15] );
      refalrts::splice_to_freelist_open( vm, context[0], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ContainsSignature$4?3:1/4 (/7 e.Inner/14 )/8 # ClosureBrackets/13 >/1
      context[14] = context[9];
      context[15] = context[10];
      if( ! refalrts::ident_term( identifiers[ident_ClosureBrackets], context[13] ) )
        continue;
      // closed e.Inner as range 14
      //DEBUG: e.Inner: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} & ContainsSignature$4?3:1/4 (/7 {REMOVED TILE} )/8 # ClosureBrackets/13 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: # True/0 } Tile{ AsIs: e.Inner/14 } Tile{ ]] }
      refalrts::reinit_ident(context[0], identifiers[ident_True]);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[14], context[15] );
      refalrts::splice_to_freelist_open( vm, context[0], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ContainsSignature$4?3:1/4 (/7 e.Inner/14 )/8 # ADT-Brackets/13 >/1
      context[14] = context[9];
      context[15] = context[10];
      if( ! refalrts::ident_term( identifiers[ident_ADTm_Brackets], context[13] ) )
        continue;
      // closed e.Inner as range 14
      //DEBUG: e.Inner: 14
      //14: e.Inner
      //19: e.Inner

      refalrts::reset_allocator(vm);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::alloc_open_call(vm, context[16]);
      refalrts::alloc_name(vm, context[18], functions[efunc_gen_ContainsSignature_S4C3B1S3C1]);
      refalrts::copy_evar(vm, context[19], context[20], context[14], context[15]);
      refalrts::alloc_close_call(vm, context[17]);
      refalrts::push_stack( vm, context[17] );
      refalrts::push_stack( vm, context[16] );
      res = refalrts::splice_elem( res, context[17] );
      res = refalrts::splice_evar( res, context[19], context[20] );
      res = refalrts::splice_elem( res, context[18] );
      res = refalrts::splice_elem( res, context[16] );
      refalrts::use( res );
      refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
      if (rec_res != refalrts::cSuccess)
        return rec_res;
      refalrts::this_is_generated_function(vm);
      do {
        // </16 & ContainsSignature$4?3:1$3?1/20 (/23 e.Name/21 )/24 e.ADT-Brackets-Inner-Rest/18 >/17
        context[18] = 0;
        context[19] = 0;
        context[20] = refalrts::call_left( context[18], context[19], context[16], context[17] );
        context[21] = 0;
        context[22] = 0;
        context[23] = refalrts::brackets_left( context[21], context[22], context[18], context[19] );
        if( ! context[23] )
          continue;
        refalrts::bracket_pointers(context[23], context[24]);
        // closed e.Name as range 21
        // closed e.ADT-Brackets-Inner-Rest as range 18
        //DEBUG: e.Inner: 14
        //DEBUG: e.Name: 21
        //DEBUG: e.ADT-Brackets-Inner-Rest: 18

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} & ContainsSignature$4?3:1/4 (/7 e.Inner/14 )/8 # ADT-Brackets/13 </16 & ContainsSignature$4?3:1$3?1/20 (/23 e.Name/21 )/24 {REMOVED TILE} >/17 >/1 {REMOVED TILE}
        //RESULT: Tile{ [[ HalfReuse: # True/0 } Tile{ AsIs: e.ADT-Brackets-Inner-Rest/18 } Tile{ ]] }
        refalrts::reinit_ident(context[0], identifiers[ident_True]);
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[18], context[19] );
        refalrts::splice_to_freelist_open( vm, context[0], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      refalrts::splice_to_freelist(vm, context[16], context[17]);
      continue;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & ContainsSignature$4?3:1/4 (/7 e.Inner/14 )/8 # CallBrackets/13 >/1
    context[14] = context[9];
    context[15] = context[10];
    if( ! refalrts::ident_term( identifiers[ident_CallBrackets], context[13] ) )
      continue;
    // closed e.Inner as range 14
    //DEBUG: e.Inner: 14
    //14: e.Inner
    //19: e.Inner

    refalrts::reset_allocator(vm);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::alloc_open_call(vm, context[16]);
    refalrts::alloc_name(vm, context[18], functions[efunc_gen_ContainsSignature_S4C3B1S4C1]);
    refalrts::copy_evar(vm, context[19], context[20], context[14], context[15]);
    refalrts::alloc_close_call(vm, context[17]);
    refalrts::push_stack( vm, context[17] );
    refalrts::push_stack( vm, context[16] );
    res = refalrts::splice_elem( res, context[17] );
    res = refalrts::splice_evar( res, context[19], context[20] );
    res = refalrts::splice_elem( res, context[18] );
    res = refalrts::splice_elem( res, context[16] );
    refalrts::use( res );
    refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
    if (rec_res != refalrts::cSuccess)
      return rec_res;
    refalrts::this_is_generated_function(vm);
    do {
      // </16 & ContainsSignature$4?3:1$4?1/20 (/23 e.SymbolName/21 )/24 e.Argument/18 >/17
      context[18] = 0;
      context[19] = 0;
      context[20] = refalrts::call_left( context[18], context[19], context[16], context[17] );
      context[21] = 0;
      context[22] = 0;
      context[23] = refalrts::brackets_left( context[21], context[22], context[18], context[19] );
      if( ! context[23] )
        continue;
      refalrts::bracket_pointers(context[23], context[24]);
      // closed e.SymbolName as range 21
      // closed e.Argument as range 18
      //DEBUG: e.Inner: 14
      //DEBUG: e.SymbolName: 21
      //DEBUG: e.Argument: 18

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} & ContainsSignature$4?3:1/4 (/7 e.Inner/14 )/8 # CallBrackets/13 </16 & ContainsSignature$4?3:1$4?1/20 (/23 e.SymbolName/21 )/24 {REMOVED TILE} >/17 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: # True/0 } Tile{ AsIs: e.Argument/18 } Tile{ ]] }
      refalrts::reinit_ident(context[0], identifiers[ident_True]);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[18], context[19] );
      refalrts::splice_to_freelist_open( vm, context[0], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    refalrts::splice_to_freelist(vm, context[16], context[17]);
    continue;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ContainsSignature$4?3:1/4 (/7 e.Inner/5 )/8 e.OtherTermType/2 >/1
  // closed e.Inner as range 5
  // closed e.OtherTermType as range 2
  //DEBUG: e.Inner: 5
  //DEBUG: e.OtherTermType: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & ContainsSignature$4?3:1/4 (/7 e.Inner/5 )/8 e.OtherTermType/2 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: # False/1 ]] }
  refalrts::reinit_ident(context[1], identifiers[ident_False]);
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ContainsSignature_S4C3B1("ContainsSignature$4?3:1", COOKIE1_, COOKIE2_, func_gen_ContainsSignature_S4C3B1);


static refalrts::FnResult func_gen_ContainsSignature_S4C4B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
  // </0 & ContainsSignature$4?4:1/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & ContainsSignature$4?4:1/4 (/7 e.new1/5 )/8 e.new2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new1 as range 5
  // closed e.new2 as range 2
  do {
    // </0 & ContainsSignature$4?4:1/4 (/7 e.OtherInner/9 )/8 t.Inner-FirstTerm$a/13 e.Inner-Rest$a/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    // closed e.OtherInner as range 9
    context[14] = refalrts::tvar_left( context[13], context[11], context[12] );
    if( ! context[14] )
      continue;
    // closed e.Inner-Rest$a as range 11
    //DEBUG: e.OtherInner: 9
    //DEBUG: t.Inner-FirstTerm$a: 13
    //DEBUG: e.Inner-Rest$a: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoCheckExprPairForRelation@1/4 } Tile{ AsIs: t.Inner-FirstTerm$a/13 } Tile{ AsIs: (/7 } Tile{ AsIs: e.Inner-Rest$a/11 } Tile{ AsIs: )/8 } Tile{ AsIs: e.OtherInner/9 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_gen_DoCheckExprPairForRelation_Z1]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_elem( res, context[8] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_elem( res, context[7] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ContainsSignature$4?4:1/4 (/7 e.OtherInner/5 )/8 e.Expr/2 >/1
  // closed e.OtherInner as range 5
  // closed e.Expr as range 2
  //DEBUG: e.OtherInner: 5
  //DEBUG: e.Expr: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoCheckExprPairForRelation@2/4 AsIs: (/7 } Tile{ AsIs: e.Expr/2 } Tile{ AsIs: )/8 } Tile{ AsIs: e.OtherInner/5 } Tile{ AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_gen_DoCheckExprPairForRelation_Z2]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_elem( res, context[8] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ContainsSignature_S4C4B1("ContainsSignature$4?4:1", COOKIE1_, COOKIE2_, func_gen_ContainsSignature_S4C4B1);


static refalrts::FnResult func_gen_ContainsSignature_S4C6B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
  // </0 & ContainsSignature$4?6:1/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & ContainsSignature$4?6:1/4 (/7 e.new1/5 )/8 e.new2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new1 as range 5
  // closed e.new2 as range 2
  do {
    // </0 & ContainsSignature$4?6:1/4 (/7 e.OtherRestExpr/9 )/8 t.RestExpr-Term/13 e.RestExpr-Rest/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    // closed e.OtherRestExpr as range 9
    context[14] = refalrts::tvar_left( context[13], context[11], context[12] );
    if( ! context[14] )
      continue;
    // closed e.RestExpr-Rest as range 11
    //DEBUG: e.OtherRestExpr: 9
    //DEBUG: t.RestExpr-Term: 13
    //DEBUG: e.RestExpr-Rest: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoCheckExprPairForRelation@1/4 } Tile{ AsIs: t.RestExpr-Term/13 } Tile{ AsIs: (/7 } Tile{ AsIs: e.RestExpr-Rest/11 } Tile{ AsIs: )/8 } Tile{ AsIs: e.OtherRestExpr/9 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_gen_DoCheckExprPairForRelation_Z1]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_elem( res, context[8] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_elem( res, context[7] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ContainsSignature$4?6:1/4 (/7 e.OtherRestExpr/5 )/8 e.Expr/2 >/1
  // closed e.OtherRestExpr as range 5
  // closed e.Expr as range 2
  //DEBUG: e.OtherRestExpr: 5
  //DEBUG: e.Expr: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoCheckExprPairForRelation@2/4 AsIs: (/7 } Tile{ AsIs: e.Expr/2 } Tile{ AsIs: )/8 } Tile{ AsIs: e.OtherRestExpr/5 } Tile{ AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_gen_DoCheckExprPairForRelation_Z2]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_elem( res, context[8] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ContainsSignature_S4C6B1("ContainsSignature$4?6:1", COOKIE1_, COOKIE2_, func_gen_ContainsSignature_S4C6B1);


static refalrts::FnResult func_gen_ContainsSignature_S5B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 48 elems
  refalrts::Iter context[48];
  refalrts::zeros( context, 48 );
  // </0 & ContainsSignature$5:1/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & ContainsSignature$5:1/4 t.new1/5 (/9 e.new2/7 )/10 (/13 e.new3/11 )/14 (/17 e.new4/15 )/18 (/21 e.new5/19 )/22 s.new6/23 >/1
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
  // closed e.new2 as range 7
  // closed e.new3 as range 11
  // closed e.new4 as range 15
  // closed e.new5 as range 19
  if( ! refalrts::svar_left( context[23], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & ContainsSignature$5:1/4 t.Inner-FirstTerm/5 (/9 e.Inner-Rest/24 )/10 (/13 e.RestExpr/26 )/14 (/17 e.Signature/28 )/18 (/21 e.Inner/30 )/22 # Brackets/23 >/1
    context[24] = context[7];
    context[25] = context[8];
    context[26] = context[11];
    context[27] = context[12];
    context[28] = context[15];
    context[29] = context[16];
    context[30] = context[19];
    context[31] = context[20];
    if( ! refalrts::ident_term( identifiers[ident_Brackets], context[23] ) )
      continue;
    // closed e.Inner-Rest as range 24
    // closed e.RestExpr as range 26
    // closed e.Signature as range 28
    // closed e.Inner as range 30
    //DEBUG: t.Inner-FirstTerm: 5
    //DEBUG: e.Inner-Rest: 24
    //DEBUG: e.RestExpr: 26
    //DEBUG: e.Signature: 28
    //DEBUG: e.Inner: 30

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} (/17 {REMOVED TILE} )/18 (/21 e.Inner/30 )/22 # Brackets/23 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoCheckExprPairForRelation@3/4 AsIs: t.Inner-FirstTerm/5 AsIs: (/9 AsIs: e.Inner-Rest/24 AsIs: )/10 AsIs: (/13 AsIs: e.RestExpr/26 AsIs: )/14 } Tile{ AsIs: e.Signature/28 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_gen_DoCheckExprPairForRelation_Z3]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[13], context[14] );
    refalrts::link_brackets( context[9], context[10] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[28], context[29] );
    refalrts::splice_to_freelist_open( vm, context[14], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & ContainsSignature$5:1/4 t.Inner-FirstTerm/5 (/9 e.Inner-Rest/24 )/10 (/13 e.RestExpr/26 )/14 (/17 e.Signature/28 )/18 (/21 e.Inner/30 )/22 # ADT-Brackets/23 >/1
    context[24] = context[7];
    context[25] = context[8];
    context[26] = context[11];
    context[27] = context[12];
    context[28] = context[15];
    context[29] = context[16];
    context[30] = context[19];
    context[31] = context[20];
    if( ! refalrts::ident_term( identifiers[ident_ADTm_Brackets], context[23] ) )
      continue;
    // closed e.Inner-Rest as range 24
    // closed e.RestExpr as range 26
    // closed e.Signature as range 28
    // closed e.Inner as range 30
    //DEBUG: t.Inner-FirstTerm: 5
    //DEBUG: e.Inner-Rest: 24
    //DEBUG: e.RestExpr: 26
    //DEBUG: e.Signature: 28
    //DEBUG: e.Inner: 30
    //5: t.Inner-FirstTerm
    //24: e.Inner-Rest
    //26: e.RestExpr
    //28: e.Signature
    //30: e.Inner
    //35: e.Inner

    refalrts::reset_allocator(vm);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::alloc_open_call(vm, context[32]);
    refalrts::alloc_name(vm, context[34], functions[efunc_gen_ContainsSignature_S5B1S2C1]);
    refalrts::copy_evar(vm, context[35], context[36], context[30], context[31]);
    refalrts::alloc_close_call(vm, context[33]);
    refalrts::push_stack( vm, context[33] );
    refalrts::push_stack( vm, context[32] );
    res = refalrts::splice_elem( res, context[33] );
    res = refalrts::splice_evar( res, context[35], context[36] );
    res = refalrts::splice_elem( res, context[34] );
    res = refalrts::splice_elem( res, context[32] );
    refalrts::use( res );
    refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
    if (rec_res != refalrts::cSuccess)
      return rec_res;
    refalrts::this_is_generated_function(vm);
    do {
      // </32 & ContainsSignature$5:1$2?1/36 (/39 e.Name/37 )/40 t.ADT-Brackets-Inner-FirstTerm/41 e.ADT-Brackets-Inner-Rest/34 >/33
      context[34] = 0;
      context[35] = 0;
      context[36] = refalrts::call_left( context[34], context[35], context[32], context[33] );
      context[37] = 0;
      context[38] = 0;
      context[39] = refalrts::brackets_left( context[37], context[38], context[34], context[35] );
      if( ! context[39] )
        continue;
      refalrts::bracket_pointers(context[39], context[40]);
      // closed e.Name as range 37
      context[42] = refalrts::tvar_left( context[41], context[34], context[35] );
      if( ! context[42] )
        continue;
      // closed e.ADT-Brackets-Inner-Rest as range 34
      //DEBUG: t.Inner-FirstTerm: 5
      //DEBUG: e.Inner-Rest: 24
      //DEBUG: e.RestExpr: 26
      //DEBUG: e.Signature: 28
      //DEBUG: e.Inner: 30
      //DEBUG: e.Name: 37
      //DEBUG: t.ADT-Brackets-Inner-FirstTerm: 41
      //DEBUG: e.ADT-Brackets-Inner-Rest: 34

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} t.Inner-FirstTerm/5 (/9 e.Inner-Rest/24 {REMOVED TILE} (/17 {REMOVED TILE} )/18 (/21 e.Inner/30 )/22 # ADT-Brackets/23 </32 & ContainsSignature$5:1$2?1/36 {REMOVED TILE} e.Name/37 )/40 {REMOVED TILE} {REMOVED TILE} >/33 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoCheckExprPairForRelation@3/4 } Tile{ AsIs: t.ADT-Brackets-Inner-FirstTerm/41 } Tile{ AsIs: (/39 } Tile{ AsIs: e.ADT-Brackets-Inner-Rest/34 } Tile{ AsIs: )/10 AsIs: (/13 AsIs: e.RestExpr/26 AsIs: )/14 } Tile{ AsIs: e.Signature/28 } Tile{ AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_gen_DoCheckExprPairForRelation_Z3]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[13], context[14] );
      refalrts::link_brackets( context[39], context[10] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[28], context[29] );
      res = refalrts::splice_evar( res, context[10], context[14] );
      res = refalrts::splice_evar( res, context[34], context[35] );
      res = refalrts::splice_elem( res, context[39] );
      res = refalrts::splice_evar( res, context[41], context[42] );
      refalrts::splice_to_freelist_open( vm, context[4], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    refalrts::splice_to_freelist(vm, context[32], context[33]);
    continue;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & ContainsSignature$5:1/4 t.Inner-FirstTerm/5 (/9 e.Inner-Rest/24 )/10 (/13 e.RestExpr/26 )/14 (/17 e.Signature/28 )/18 (/21 e.Inner/30 )/22 # CallBrackets/23 >/1
    context[24] = context[7];
    context[25] = context[8];
    context[26] = context[11];
    context[27] = context[12];
    context[28] = context[15];
    context[29] = context[16];
    context[30] = context[19];
    context[31] = context[20];
    if( ! refalrts::ident_term( identifiers[ident_CallBrackets], context[23] ) )
      continue;
    // closed e.Inner-Rest as range 24
    // closed e.RestExpr as range 26
    // closed e.Signature as range 28
    // closed e.Inner as range 30
    //DEBUG: t.Inner-FirstTerm: 5
    //DEBUG: e.Inner-Rest: 24
    //DEBUG: e.RestExpr: 26
    //DEBUG: e.Signature: 28
    //DEBUG: e.Inner: 30
    //5: t.Inner-FirstTerm
    //24: e.Inner-Rest
    //26: e.RestExpr
    //28: e.Signature
    //30: e.Inner
    //35: e.Inner

    refalrts::reset_allocator(vm);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::alloc_open_call(vm, context[32]);
    refalrts::alloc_name(vm, context[34], functions[efunc_gen_ContainsSignature_S5B1S3C1]);
    refalrts::copy_evar(vm, context[35], context[36], context[30], context[31]);
    refalrts::alloc_close_call(vm, context[33]);
    refalrts::push_stack( vm, context[33] );
    refalrts::push_stack( vm, context[32] );
    res = refalrts::splice_elem( res, context[33] );
    res = refalrts::splice_evar( res, context[35], context[36] );
    res = refalrts::splice_elem( res, context[34] );
    res = refalrts::splice_elem( res, context[32] );
    refalrts::use( res );
    refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
    if (rec_res != refalrts::cSuccess)
      return rec_res;
    refalrts::this_is_generated_function(vm);
    do {
      // </32 & ContainsSignature$5:1$3?1/36 (/39 e.SymbolName/37 )/40 e.Argument/34 >/33
      context[34] = 0;
      context[35] = 0;
      context[36] = refalrts::call_left( context[34], context[35], context[32], context[33] );
      context[37] = 0;
      context[38] = 0;
      context[39] = refalrts::brackets_left( context[37], context[38], context[34], context[35] );
      if( ! context[39] )
        continue;
      refalrts::bracket_pointers(context[39], context[40]);
      // closed e.SymbolName as range 37
      // closed e.Argument as range 34
      //DEBUG: t.Inner-FirstTerm: 5
      //DEBUG: e.Inner-Rest: 24
      //DEBUG: e.RestExpr: 26
      //DEBUG: e.Signature: 28
      //DEBUG: e.Inner: 30
      //DEBUG: e.SymbolName: 37
      //DEBUG: e.Argument: 34
      //5: t.Inner-FirstTerm
      //24: e.Inner-Rest
      //26: e.RestExpr
      //28: e.Signature
      //30: e.Inner
      //34: e.Argument
      //37: e.SymbolName
      //44: e.Argument

      refalrts::reset_allocator(vm);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::alloc_open_call(vm, context[41]);
      refalrts::alloc_name(vm, context[43], functions[efunc_gen_ContainsSignature_S5B1S3C2]);
      refalrts::copy_evar(vm, context[44], context[45], context[34], context[35]);
      refalrts::alloc_close_call(vm, context[42]);
      refalrts::push_stack( vm, context[42] );
      refalrts::push_stack( vm, context[41] );
      res = refalrts::splice_elem( res, context[42] );
      res = refalrts::splice_evar( res, context[44], context[45] );
      res = refalrts::splice_elem( res, context[43] );
      res = refalrts::splice_elem( res, context[41] );
      refalrts::use( res );
      refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
      if (rec_res != refalrts::cSuccess)
        return rec_res;
      refalrts::this_is_generated_function(vm);
      do {
        // </41 & ContainsSignature$5:1$3?2/45 t.Argument-FirstTerm/46 e.Argument-RestExpr/43 >/42
        context[43] = 0;
        context[44] = 0;
        context[45] = refalrts::call_left( context[43], context[44], context[41], context[42] );
        context[47] = refalrts::tvar_left( context[46], context[43], context[44] );
        if( ! context[47] )
          continue;
        // closed e.Argument-RestExpr as range 43
        //DEBUG: t.Inner-FirstTerm: 5
        //DEBUG: e.Inner-Rest: 24
        //DEBUG: e.RestExpr: 26
        //DEBUG: e.Signature: 28
        //DEBUG: e.Inner: 30
        //DEBUG: e.SymbolName: 37
        //DEBUG: e.Argument: 34
        //DEBUG: t.Argument-FirstTerm: 46
        //DEBUG: e.Argument-RestExpr: 43

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} t.Inner-FirstTerm/5 (/9 e.Inner-Rest/24 {REMOVED TILE} (/17 {REMOVED TILE} )/18 (/21 e.Inner/30 )/22 # CallBrackets/23 </32 & ContainsSignature$5:1$3?1/36 {REMOVED TILE} e.SymbolName/37 )/40 e.Argument/34 >/33 </41 & ContainsSignature$5:1$3?2/45 {REMOVED TILE} {REMOVED TILE} >/42 {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoCheckExprPairForRelation@3/4 } Tile{ AsIs: t.Argument-FirstTerm/46 } Tile{ AsIs: (/39 } Tile{ AsIs: e.Argument-RestExpr/43 } Tile{ AsIs: )/10 AsIs: (/13 AsIs: e.RestExpr/26 AsIs: )/14 } Tile{ AsIs: e.Signature/28 } Tile{ AsIs: >/1 ]] }
        refalrts::update_name(context[4], functions[efunc_gen_DoCheckExprPairForRelation_Z3]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[13], context[14] );
        refalrts::link_brackets( context[39], context[10] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[28], context[29] );
        res = refalrts::splice_evar( res, context[10], context[14] );
        res = refalrts::splice_evar( res, context[43], context[44] );
        res = refalrts::splice_elem( res, context[39] );
        res = refalrts::splice_evar( res, context[46], context[47] );
        refalrts::splice_to_freelist_open( vm, context[4], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      refalrts::splice_to_freelist(vm, context[41], context[42]);
      continue;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    refalrts::splice_to_freelist(vm, context[32], context[33]);
    continue;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & ContainsSignature$5:1/4 t.Inner-FirstTerm/5 (/9 e.Inner-Rest/24 )/10 (/13 e.RestExpr/26 )/14 (/17 e.Signature/28 )/18 (/21 e.Inner/30 )/22 # ClosureBrackets/23 >/1
    context[24] = context[7];
    context[25] = context[8];
    context[26] = context[11];
    context[27] = context[12];
    context[28] = context[15];
    context[29] = context[16];
    context[30] = context[19];
    context[31] = context[20];
    if( ! refalrts::ident_term( identifiers[ident_ClosureBrackets], context[23] ) )
      continue;
    // closed e.Inner-Rest as range 24
    // closed e.RestExpr as range 26
    // closed e.Signature as range 28
    // closed e.Inner as range 30
    //DEBUG: t.Inner-FirstTerm: 5
    //DEBUG: e.Inner-Rest: 24
    //DEBUG: e.RestExpr: 26
    //DEBUG: e.Signature: 28
    //DEBUG: e.Inner: 30

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} (/17 {REMOVED TILE} )/18 (/21 e.Inner/30 )/22 # ClosureBrackets/23 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoCheckExprPairForRelation@3/4 AsIs: t.Inner-FirstTerm/5 AsIs: (/9 AsIs: e.Inner-Rest/24 AsIs: )/10 AsIs: (/13 AsIs: e.RestExpr/26 AsIs: )/14 } Tile{ AsIs: e.Signature/28 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_gen_DoCheckExprPairForRelation_Z3]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[13], context[14] );
    refalrts::link_brackets( context[9], context[10] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[28], context[29] );
    refalrts::splice_to_freelist_open( vm, context[14], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & ContainsSignature$5:1/4 t.Inner-FirstTerm/5 (/9 e.Inner-Rest/24 )/10 (/13 e.RestExpr/26 )/14 (/17 e.Signature/28 )/18 (/21 e.Inner/30 )/22 # Var/23 >/1
    context[24] = context[7];
    context[25] = context[8];
    context[26] = context[11];
    context[27] = context[12];
    context[28] = context[15];
    context[29] = context[16];
    context[30] = context[19];
    context[31] = context[20];
    if( ! refalrts::ident_term( identifiers[ident_Var], context[23] ) )
      continue;
    // closed e.Inner-Rest as range 24
    // closed e.RestExpr as range 26
    // closed e.Signature as range 28
    // closed e.Inner as range 30
    //DEBUG: t.Inner-FirstTerm: 5
    //DEBUG: e.Inner-Rest: 24
    //DEBUG: e.RestExpr: 26
    //DEBUG: e.Signature: 28
    //DEBUG: e.Inner: 30

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} & ContainsSignature$5:1/4 t.Inner-FirstTerm/5 (/9 e.Inner-Rest/24 {REMOVED TILE} (/17 {REMOVED TILE} )/18 (/21 e.Inner/30 )/22 # Var/23 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 } Tile{ HalfReuse: & DoCheckExprPairForRelation@4/10 AsIs: (/13 AsIs: e.RestExpr/26 AsIs: )/14 } Tile{ AsIs: e.Signature/28 } Tile{ AsIs: >/1 ]] }
    refalrts::reinit_name(context[10], functions[efunc_gen_DoCheckExprPairForRelation_Z4]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[13], context[14] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[28], context[29] );
    res = refalrts::splice_evar( res, context[10], context[14] );
    refalrts::splice_to_freelist_open( vm, context[0], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & ContainsSignature$5:1/4 t.Inner-FirstTerm/5 (/9 e.Inner-Rest/24 )/10 (/13 e.RestExpr/26 )/14 (/17 e.Signature/28 )/18 (/21 e.Inner/30 )/22 # Symbol/23 >/1
    context[24] = context[7];
    context[25] = context[8];
    context[26] = context[11];
    context[27] = context[12];
    context[28] = context[15];
    context[29] = context[16];
    context[30] = context[19];
    context[31] = context[20];
    if( ! refalrts::ident_term( identifiers[ident_Symbol], context[23] ) )
      continue;
    // closed e.Inner-Rest as range 24
    // closed e.RestExpr as range 26
    // closed e.Signature as range 28
    // closed e.Inner as range 30
    //DEBUG: t.Inner-FirstTerm: 5
    //DEBUG: e.Inner-Rest: 24
    //DEBUG: e.RestExpr: 26
    //DEBUG: e.Signature: 28
    //DEBUG: e.Inner: 30

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} & ContainsSignature$5:1/4 t.Inner-FirstTerm/5 (/9 e.Inner-Rest/24 {REMOVED TILE} (/17 {REMOVED TILE} )/18 (/21 e.Inner/30 )/22 # Symbol/23 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 } Tile{ HalfReuse: & DoCheckExprPairForRelation@4/10 AsIs: (/13 AsIs: e.RestExpr/26 AsIs: )/14 } Tile{ AsIs: e.Signature/28 } Tile{ AsIs: >/1 ]] }
    refalrts::reinit_name(context[10], functions[efunc_gen_DoCheckExprPairForRelation_Z4]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[13], context[14] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[28], context[29] );
    res = refalrts::splice_evar( res, context[10], context[14] );
    refalrts::splice_to_freelist_open( vm, context[0], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ContainsSignature$5:1/4 t.Inner-FirstTerm/5 (/9 e.Inner-Rest/7 )/10 (/13 e.RestExpr/11 )/14 (/17 e.Signature/15 )/18 (/21 e.Inner/19 )/22 s.OtherTermType/23 >/1
  // closed e.Inner-Rest as range 7
  // closed e.RestExpr as range 11
  // closed e.Signature as range 15
  // closed e.Inner as range 19
  //DEBUG: t.Inner-FirstTerm: 5
  //DEBUG: s.OtherTermType: 23
  //DEBUG: e.Inner-Rest: 7
  //DEBUG: e.RestExpr: 11
  //DEBUG: e.Signature: 15
  //DEBUG: e.Inner: 19

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & ContainsSignature$5:1/4 t.Inner-FirstTerm/5 (/9 e.Inner-Rest/7 )/10 (/13 e.RestExpr/11 )/14 (/17 e.Signature/15 )/18 (/21 e.Inner/19 )/22 s.OtherTermType/23 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: # False/1 ]] }
  refalrts::reinit_ident(context[1], identifiers[ident_False]);
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ContainsSignature_S5B1("ContainsSignature$5:1", COOKIE1_, COOKIE2_, func_gen_ContainsSignature_S5B1);


static refalrts::FnResult func_ContainsSignature(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 73 elems
  refalrts::Iter context[73];
  refalrts::zeros( context, 73 );
  // </0 & ContainsSignature/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & ContainsSignature/4 (/7 e.new1/5 )/8 e.new2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new1 as range 5
  // closed e.new2 as range 2
  do {
    // </0 & ContainsSignature/4 (/7 e.Expr-B/13 e.Signature/17 e.Expr-E/15 )/8 e.Signature/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    // closed e.Signature as range 11
    context[13] = 0;
    context[14] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[15] = context[9];
      context[16] = context[10];
      if( ! refalrts::repeated_evar_left( vm, context[17], context[18], context[11], context[12], context[15], context[16] ) )
        continue;
      // closed e.Expr-E as range 15
      //DEBUG: e.Signature: 11
      //DEBUG: e.Expr-B: 13
      //DEBUG: e.Expr-E: 15

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & ContainsSignature/4 (/7 e.Expr-B/13 e.Signature/17 e.Expr-E/15 )/8 e.Signature/11 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: # True/1 ]] }
      refalrts::reinit_ident(context[1], identifiers[ident_True]);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[13], context[14], context[9], context[10] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & ContainsSignature/4 (/7 t.Common/13 e.Expr/9 )/8 t.Common/15 e.Signature/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[14] = refalrts::tvar_left( context[13], context[9], context[10] );
    if( ! context[14] )
      continue;
    context[16] = refalrts::repeated_stvar_left( vm, context[15], context[13], context[11], context[12] );
    if( ! context[16] )
      continue;
    // closed e.Expr as range 9
    // closed e.Signature as range 11
    //DEBUG: t.Common: 13
    //DEBUG: e.Expr: 9
    //DEBUG: e.Signature: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} t.Common/13 {REMOVED TILE} {REMOVED TILE} t.Common/15 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ContainsSignature/4 AsIs: (/7 } Tile{ AsIs: e.Expr/9 } Tile{ AsIs: )/8 } Tile{ AsIs: e.Signature/11 } Tile{ AsIs: >/1 ]] }
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_elem( res, context[8] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    refalrts::splice_to_freelist_open( vm, context[7], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & ContainsSignature/4 (/7 e.Expr/9 t.Common/13 )/8 e.Signature/11 t.Common/15 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[14] = refalrts::tvar_right( context[13], context[9], context[10] );
    if( ! context[14] )
      continue;
    context[16] = refalrts::repeated_stvar_right( vm, context[15], context[13], context[11], context[12] );
    if( ! context[16] )
      continue;
    // closed e.Expr as range 9
    // closed e.Signature as range 11
    //DEBUG: t.Common: 13
    //DEBUG: e.Expr: 9
    //DEBUG: e.Signature: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} t.Common/13 {REMOVED TILE} {REMOVED TILE} t.Common/15 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ContainsSignature/4 AsIs: (/7 } Tile{ AsIs: e.Expr/9 } Tile{ AsIs: )/8 } Tile{ AsIs: e.Signature/11 } Tile{ AsIs: >/1 ]] }
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_elem( res, context[8] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    refalrts::splice_to_freelist_open( vm, context[7], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & ContainsSignature/4 (/7 (/15 s.new4/17 e.new5/13 )/16 e.new6/9 )/8 e.new3/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = 0;
    context[14] = 0;
    context[15] = refalrts::brackets_left( context[13], context[14], context[9], context[10] );
    if( ! context[15] )
      continue;
    refalrts::bracket_pointers(context[15], context[16]);
    // closed e.new6 as range 9
    // closed e.new3 as range 11
    if( ! refalrts::svar_left( context[17], context[13], context[14] ) )
      continue;
    // closed e.new5 as range 13
    do {
      // </0 & ContainsSignature/4 (/7 (/15 s.TermType/17 e.Inner/18 )/16 e.RestExpr/20 )/8 (/26 s.TermType/28 e.OtherInner/24 )/27 e.OtherRestExpr/22 >/1
      context[18] = context[13];
      context[19] = context[14];
      context[20] = context[9];
      context[21] = context[10];
      context[22] = context[11];
      context[23] = context[12];
      context[24] = 0;
      context[25] = 0;
      context[26] = refalrts::brackets_left( context[24], context[25], context[22], context[23] );
      if( ! context[26] )
        continue;
      refalrts::bracket_pointers(context[26], context[27]);
      if( ! refalrts::repeated_stvar_left( vm, context[28], context[17], context[24], context[25] ) )
        continue;
      // closed e.Inner as range 18
      // closed e.RestExpr as range 20
      // closed e.OtherInner as range 24
      // closed e.OtherRestExpr as range 22
      //DEBUG: s.TermType: 17
      //DEBUG: e.Inner: 18
      //DEBUG: e.RestExpr: 20
      //DEBUG: e.OtherInner: 24
      //DEBUG: e.OtherRestExpr: 22
      //17: s.TermType
      //18: e.Inner
      //20: e.RestExpr
      //22: e.OtherRestExpr
      //24: e.OtherInner
      //28: s.TermType
      //32: e.Inner

      refalrts::reset_allocator(vm);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::alloc_open_call(vm, context[29]);
      refalrts::alloc_name(vm, context[31], functions[efunc_gen_ContainsSignature_S4C1]);
      refalrts::copy_evar(vm, context[32], context[33], context[18], context[19]);
      refalrts::alloc_close_call(vm, context[30]);
      refalrts::push_stack( vm, context[30] );
      refalrts::push_stack( vm, context[29] );
      res = refalrts::splice_elem( res, context[30] );
      res = refalrts::splice_evar( res, context[32], context[33] );
      res = refalrts::splice_elem( res, context[31] );
      res = refalrts::splice_elem( res, context[29] );
      refalrts::use( res );
      refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
      if (rec_res != refalrts::cSuccess)
        return rec_res;
      refalrts::this_is_generated_function(vm);
      do {
        // </29 & ContainsSignature$4?1/33 t.Inner-FirstTerm/34 e.Inner-Rest/31 >/30
        context[31] = 0;
        context[32] = 0;
        context[33] = refalrts::call_left( context[31], context[32], context[29], context[30] );
        context[35] = refalrts::tvar_left( context[34], context[31], context[32] );
        if( ! context[35] )
          continue;
        // closed e.Inner-Rest as range 31
        //DEBUG: s.TermType: 17
        //DEBUG: e.Inner: 18
        //DEBUG: e.RestExpr: 20
        //DEBUG: e.OtherInner: 24
        //DEBUG: e.OtherRestExpr: 22
        //DEBUG: t.Inner-FirstTerm: 34
        //DEBUG: e.Inner-Rest: 31
        //17: s.TermType
        //18: e.Inner
        //20: e.RestExpr
        //22: e.OtherRestExpr
        //24: e.OtherInner
        //28: s.TermType
        //31: e.Inner-Rest
        //34: t.Inner-FirstTerm
        //39: e.OtherInner

        refalrts::reset_allocator(vm);
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        refalrts::alloc_open_call(vm, context[36]);
        refalrts::alloc_name(vm, context[38], functions[efunc_gen_ContainsSignature_S4C2]);
        refalrts::copy_evar(vm, context[39], context[40], context[24], context[25]);
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
          // </36 & ContainsSignature$4?2/40 t.OtherInner-FirstTerm/41 e.OtherInner-Rest/38 >/37
          context[38] = 0;
          context[39] = 0;
          context[40] = refalrts::call_left( context[38], context[39], context[36], context[37] );
          context[42] = refalrts::tvar_left( context[41], context[38], context[39] );
          if( ! context[42] )
            continue;
          // closed e.OtherInner-Rest as range 38
          //DEBUG: s.TermType: 17
          //DEBUG: e.Inner: 18
          //DEBUG: e.RestExpr: 20
          //DEBUG: e.OtherInner: 24
          //DEBUG: e.OtherRestExpr: 22
          //DEBUG: t.Inner-FirstTerm: 34
          //DEBUG: e.Inner-Rest: 31
          //DEBUG: t.OtherInner-FirstTerm: 41
          //DEBUG: e.OtherInner-Rest: 38
          //17: s.TermType
          //18: e.Inner
          //20: e.RestExpr
          //22: e.OtherRestExpr
          //24: e.OtherInner
          //28: s.TermType
          //31: e.Inner-Rest
          //34: t.Inner-FirstTerm
          //38: e.OtherInner-Rest
          //41: t.OtherInner-FirstTerm
          //49: e.Inner
          //52: s.TermType

          refalrts::reset_allocator(vm);
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[1];
          refalrts::alloc_open_call(vm, context[43]);
          refalrts::alloc_name(vm, context[45], functions[efunc_gen_ContainsSignature_S4C3]);
          refalrts::alloc_open_call(vm, context[46]);
          refalrts::alloc_name(vm, context[47], functions[efunc_gen_ContainsSignature_S4C3B1]);
          refalrts::alloc_open_bracket(vm, context[48]);
          refalrts::copy_evar(vm, context[49], context[50], context[18], context[19]);
          refalrts::alloc_close_bracket(vm, context[51]);
          refalrts::copy_stvar(vm, context[52], context[28]);
          refalrts::alloc_close_call(vm, context[53]);
          refalrts::alloc_close_call(vm, context[44]);
          refalrts::push_stack( vm, context[44] );
          refalrts::push_stack( vm, context[43] );
          res = refalrts::splice_elem( res, context[44] );
          refalrts::push_stack( vm, context[53] );
          refalrts::push_stack( vm, context[46] );
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
            // </43 & ContainsSignature$4?3/47 # True/48 e.Inner$a/45 >/44
            context[45] = 0;
            context[46] = 0;
            context[47] = refalrts::call_left( context[45], context[46], context[43], context[44] );
            context[48] = refalrts::ident_left( identifiers[ident_True], context[45], context[46] );
            if( ! context[48] )
              continue;
            // closed e.Inner$a as range 45
            //DEBUG: s.TermType: 17
            //DEBUG: e.Inner: 18
            //DEBUG: e.RestExpr: 20
            //DEBUG: e.OtherInner: 24
            //DEBUG: e.OtherRestExpr: 22
            //DEBUG: t.Inner-FirstTerm: 34
            //DEBUG: e.Inner-Rest: 31
            //DEBUG: t.OtherInner-FirstTerm: 41
            //DEBUG: e.OtherInner-Rest: 38
            //DEBUG: e.Inner$a: 45
            //17: s.TermType
            //18: e.Inner
            //20: e.RestExpr
            //22: e.OtherRestExpr
            //24: e.OtherInner
            //28: s.TermType
            //31: e.Inner-Rest
            //34: t.Inner-FirstTerm
            //38: e.OtherInner-Rest
            //41: t.OtherInner-FirstTerm
            //45: e.Inner$a
            //55: e.OtherInner
            //58: e.Inner$a

            refalrts::reset_allocator(vm);
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = context[1];
            refalrts::alloc_open_call(vm, context[49]);
            refalrts::alloc_name(vm, context[51], functions[efunc_gen_ContainsSignature_S4C4]);
            refalrts::alloc_open_call(vm, context[52]);
            refalrts::alloc_name(vm, context[53], functions[efunc_gen_ContainsSignature_S4C4B1]);
            refalrts::alloc_open_bracket(vm, context[54]);
            refalrts::copy_evar(vm, context[55], context[56], context[24], context[25]);
            refalrts::alloc_close_bracket(vm, context[57]);
            refalrts::copy_evar(vm, context[58], context[59], context[45], context[46]);
            refalrts::alloc_close_call(vm, context[60]);
            refalrts::alloc_close_call(vm, context[50]);
            refalrts::push_stack( vm, context[50] );
            refalrts::push_stack( vm, context[49] );
            res = refalrts::splice_elem( res, context[50] );
            refalrts::push_stack( vm, context[60] );
            refalrts::push_stack( vm, context[52] );
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
              // </49 & ContainsSignature$4?4/53 s.InnerCheckResult/54 >/50
              context[51] = 0;
              context[52] = 0;
              context[53] = refalrts::call_left( context[51], context[52], context[49], context[50] );
              if( ! refalrts::svar_left( context[54], context[51], context[52] ) )
                continue;
              if( ! refalrts::empty_seq( context[51], context[52] ) )
                continue;
              //DEBUG: s.TermType: 17
              //DEBUG: e.Inner: 18
              //DEBUG: e.RestExpr: 20
              //DEBUG: e.OtherInner: 24
              //DEBUG: e.OtherRestExpr: 22
              //DEBUG: t.Inner-FirstTerm: 34
              //DEBUG: e.Inner-Rest: 31
              //DEBUG: t.OtherInner-FirstTerm: 41
              //DEBUG: e.OtherInner-Rest: 38
              //DEBUG: e.Inner$a: 45
              //DEBUG: s.InnerCheckResult: 54
              //17: s.TermType
              //18: e.Inner
              //20: e.RestExpr
              //22: e.OtherRestExpr
              //24: e.OtherInner
              //28: s.TermType
              //31: e.Inner-Rest
              //34: t.Inner-FirstTerm
              //38: e.OtherInner-Rest
              //41: t.OtherInner-FirstTerm
              //45: e.Inner$a
              //54: s.InnerCheckResult
              //58: s.InnerCheckResult

              refalrts::reset_allocator(vm);
              refalrts::Iter trash_prev = arg_begin->prev;
              refalrts::use(trash_prev);
              refalrts::Iter res = context[1];
              refalrts::alloc_open_call(vm, context[55]);
              refalrts::alloc_name(vm, context[57], functions[efunc_gen_ContainsSignature_S4C5]);
              refalrts::copy_stvar(vm, context[58], context[54]);
              refalrts::alloc_close_call(vm, context[56]);
              refalrts::push_stack( vm, context[56] );
              refalrts::push_stack( vm, context[55] );
              res = refalrts::splice_elem( res, context[56] );
              res = refalrts::splice_stvar( res, context[58] );
              res = refalrts::splice_elem( res, context[57] );
              res = refalrts::splice_elem( res, context[55] );
              refalrts::use( res );
              refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
              if (rec_res != refalrts::cSuccess)
                return rec_res;
              refalrts::this_is_generated_function(vm);
              do {
                // </55 & ContainsSignature$4?5/59 # True/60 >/56
                context[57] = 0;
                context[58] = 0;
                context[59] = refalrts::call_left( context[57], context[58], context[55], context[56] );
                context[60] = refalrts::ident_left( identifiers[ident_True], context[57], context[58] );
                if( ! context[60] )
                  continue;
                if( ! refalrts::empty_seq( context[57], context[58] ) )
                  continue;
                //DEBUG: s.TermType: 17
                //DEBUG: e.Inner: 18
                //DEBUG: e.RestExpr: 20
                //DEBUG: e.OtherInner: 24
                //DEBUG: e.OtherRestExpr: 22
                //DEBUG: t.Inner-FirstTerm: 34
                //DEBUG: e.Inner-Rest: 31
                //DEBUG: t.OtherInner-FirstTerm: 41
                //DEBUG: e.OtherInner-Rest: 38
                //DEBUG: e.Inner$a: 45
                //DEBUG: s.InnerCheckResult: 54
                //17: s.TermType
                //18: e.Inner
                //20: e.RestExpr
                //22: e.OtherRestExpr
                //24: e.OtherInner
                //28: s.TermType
                //31: e.Inner-Rest
                //34: t.Inner-FirstTerm
                //38: e.OtherInner-Rest
                //41: t.OtherInner-FirstTerm
                //45: e.Inner$a
                //54: s.InnerCheckResult
                //67: e.OtherRestExpr
                //70: e.RestExpr

                refalrts::reset_allocator(vm);
                refalrts::Iter trash_prev = arg_begin->prev;
                refalrts::use(trash_prev);
                refalrts::Iter res = context[1];
                refalrts::alloc_open_call(vm, context[61]);
                refalrts::alloc_name(vm, context[63], functions[efunc_gen_ContainsSignature_S4C6]);
                refalrts::alloc_open_call(vm, context[64]);
                refalrts::alloc_name(vm, context[65], functions[efunc_gen_ContainsSignature_S4C6B1]);
                refalrts::alloc_open_bracket(vm, context[66]);
                refalrts::copy_evar(vm, context[67], context[68], context[22], context[23]);
                refalrts::alloc_close_bracket(vm, context[69]);
                refalrts::copy_evar(vm, context[70], context[71], context[20], context[21]);
                refalrts::alloc_close_call(vm, context[72]);
                refalrts::alloc_close_call(vm, context[62]);
                refalrts::push_stack( vm, context[62] );
                refalrts::push_stack( vm, context[61] );
                res = refalrts::splice_elem( res, context[62] );
                refalrts::push_stack( vm, context[72] );
                refalrts::push_stack( vm, context[64] );
                res = refalrts::splice_elem( res, context[72] );
                res = refalrts::splice_evar( res, context[70], context[71] );
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
                  // </61 & ContainsSignature$4?6/65 s.RestExprCheckResult/66 >/62
                  context[63] = 0;
                  context[64] = 0;
                  context[65] = refalrts::call_left( context[63], context[64], context[61], context[62] );
                  if( ! refalrts::svar_left( context[66], context[63], context[64] ) )
                    continue;
                  if( ! refalrts::empty_seq( context[63], context[64] ) )
                    continue;
                  //DEBUG: s.TermType: 17
                  //DEBUG: e.Inner: 18
                  //DEBUG: e.RestExpr: 20
                  //DEBUG: e.OtherInner: 24
                  //DEBUG: e.OtherRestExpr: 22
                  //DEBUG: t.Inner-FirstTerm: 34
                  //DEBUG: e.Inner-Rest: 31
                  //DEBUG: t.OtherInner-FirstTerm: 41
                  //DEBUG: e.OtherInner-Rest: 38
                  //DEBUG: e.Inner$a: 45
                  //DEBUG: s.InnerCheckResult: 54
                  //DEBUG: s.RestExprCheckResult: 66
                  //17: s.TermType
                  //18: e.Inner
                  //20: e.RestExpr
                  //22: e.OtherRestExpr
                  //24: e.OtherInner
                  //28: s.TermType
                  //31: e.Inner-Rest
                  //34: t.Inner-FirstTerm
                  //38: e.OtherInner-Rest
                  //41: t.OtherInner-FirstTerm
                  //45: e.Inner$a
                  //54: s.InnerCheckResult
                  //66: s.RestExprCheckResult
                  //70: s.RestExprCheckResult

                  refalrts::reset_allocator(vm);
                  refalrts::Iter trash_prev = arg_begin->prev;
                  refalrts::use(trash_prev);
                  refalrts::Iter res = context[1];
                  refalrts::alloc_open_call(vm, context[67]);
                  refalrts::alloc_name(vm, context[69], functions[efunc_gen_ContainsSignature_S4C7]);
                  refalrts::copy_stvar(vm, context[70], context[66]);
                  refalrts::alloc_close_call(vm, context[68]);
                  refalrts::push_stack( vm, context[68] );
                  refalrts::push_stack( vm, context[67] );
                  res = refalrts::splice_elem( res, context[68] );
                  res = refalrts::splice_stvar( res, context[70] );
                  res = refalrts::splice_elem( res, context[69] );
                  res = refalrts::splice_elem( res, context[67] );
                  refalrts::use( res );
                  refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
                  if (rec_res != refalrts::cSuccess)
                    return rec_res;
                  refalrts::this_is_generated_function(vm);
                  do {
                    // </67 & ContainsSignature$4?7/71 # True/72 >/68
                    context[69] = 0;
                    context[70] = 0;
                    context[71] = refalrts::call_left( context[69], context[70], context[67], context[68] );
                    context[72] = refalrts::ident_left( identifiers[ident_True], context[69], context[70] );
                    if( ! context[72] )
                      continue;
                    if( ! refalrts::empty_seq( context[69], context[70] ) )
                      continue;
                    //DEBUG: s.TermType: 17
                    //DEBUG: e.Inner: 18
                    //DEBUG: e.RestExpr: 20
                    //DEBUG: e.OtherInner: 24
                    //DEBUG: e.OtherRestExpr: 22
                    //DEBUG: t.Inner-FirstTerm: 34
                    //DEBUG: e.Inner-Rest: 31
                    //DEBUG: t.OtherInner-FirstTerm: 41
                    //DEBUG: e.OtherInner-Rest: 38
                    //DEBUG: e.Inner$a: 45
                    //DEBUG: s.InnerCheckResult: 54
                    //DEBUG: s.RestExprCheckResult: 66

                    refalrts::reset_allocator(vm);
                    //TRASH: {REMOVED TILE} </0 & ContainsSignature/4 (/7 (/15 s.TermType/17 e.Inner/18 )/16 e.RestExpr/20 )/8 (/26 s.TermType/28 e.OtherInner/24 )/27 e.OtherRestExpr/22 </29 & ContainsSignature$4?1/33 t.Inner-FirstTerm/34 e.Inner-Rest/31 >/30 </36 & ContainsSignature$4?2/40 t.OtherInner-FirstTerm/41 e.OtherInner-Rest/38 >/37 </43 & ContainsSignature$4?3/47 # True/48 e.Inner$a/45 >/44 </49 & ContainsSignature$4?4/53 s.InnerCheckResult/54 >/50 </55 & ContainsSignature$4?5/59 # True/60 >/56 </61 & ContainsSignature$4?6/65 s.RestExprCheckResult/66 >/62 </67 & ContainsSignature$4?7/71 # True/72 >/68 {REMOVED TILE}
                    //RESULT: Tile{ [[ } Tile{ HalfReuse: # True/1 ]] }
                    refalrts::reinit_ident(context[1], identifiers[ident_True]);
                    refalrts::Iter trash_prev = arg_begin->prev;
                    refalrts::use(trash_prev);
                    refalrts::Iter res = context[1];
                    refalrts::splice_to_freelist_open( vm, trash_prev, res );
                    return refalrts::cSuccess;
                  } while ( 0 );
                  refalrts::stop_sentence(vm);

                  refalrts::splice_to_freelist(vm, context[67], context[68]);
                  continue;
                } while ( 0 );
                refalrts::stop_sentence(vm);

                refalrts::splice_to_freelist(vm, context[61], context[62]);
                continue;
              } while ( 0 );
              refalrts::stop_sentence(vm);

              refalrts::splice_to_freelist(vm, context[55], context[56]);
              continue;
            } while ( 0 );
            refalrts::stop_sentence(vm);

            refalrts::splice_to_freelist(vm, context[49], context[50]);
            continue;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          refalrts::splice_to_freelist(vm, context[43], context[44]);
          continue;
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

    // </0 & ContainsSignature/4 (/7 (/15 s.TermType/17 e.Inner/18 )/16 e.RestExpr/20 )/8 e.Signature/22 >/1
    context[18] = context[13];
    context[19] = context[14];
    context[20] = context[9];
    context[21] = context[10];
    context[22] = context[11];
    context[23] = context[12];
    // closed e.Inner as range 18
    // closed e.RestExpr as range 20
    // closed e.Signature as range 22
    //DEBUG: s.TermType: 17
    //DEBUG: e.Inner: 18
    //DEBUG: e.RestExpr: 20
    //DEBUG: e.Signature: 22
    //17: s.TermType
    //18: e.Inner
    //20: e.RestExpr
    //22: e.Signature
    //27: e.Inner

    refalrts::reset_allocator(vm);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::alloc_open_call(vm, context[24]);
    refalrts::alloc_name(vm, context[26], functions[efunc_gen_ContainsSignature_S5C1]);
    refalrts::copy_evar(vm, context[27], context[28], context[18], context[19]);
    refalrts::alloc_close_call(vm, context[25]);
    refalrts::push_stack( vm, context[25] );
    refalrts::push_stack( vm, context[24] );
    res = refalrts::splice_elem( res, context[25] );
    res = refalrts::splice_evar( res, context[27], context[28] );
    res = refalrts::splice_elem( res, context[26] );
    res = refalrts::splice_elem( res, context[24] );
    refalrts::use( res );
    refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
    if (rec_res != refalrts::cSuccess)
      return rec_res;
    refalrts::this_is_generated_function(vm);
    do {
      // </24 & ContainsSignature$5?1/28 t.Inner-FirstTerm/29 e.Inner-Rest/26 >/25
      context[26] = 0;
      context[27] = 0;
      context[28] = refalrts::call_left( context[26], context[27], context[24], context[25] );
      context[30] = refalrts::tvar_left( context[29], context[26], context[27] );
      if( ! context[30] )
        continue;
      // closed e.Inner-Rest as range 26
      //DEBUG: s.TermType: 17
      //DEBUG: e.Inner: 18
      //DEBUG: e.RestExpr: 20
      //DEBUG: e.Signature: 22
      //DEBUG: t.Inner-FirstTerm: 29
      //DEBUG: e.Inner-Rest: 26

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.TermType/17 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: </24 Reuse: & ContainsSignature$5:1/28 AsIs: t.Inner-FirstTerm/29 } Tile{ HalfReuse: (/0 } Tile{ AsIs: e.Inner-Rest/26 } Tile{ HalfReuse: )/4 } Tile{ HalfReuse: (/16 AsIs: e.RestExpr/20 AsIs: )/8 } (/31 Tile{ AsIs: e.Signature/22 } Tile{ HalfReuse: )/7 AsIs: (/15 } Tile{ AsIs: e.Inner/18 } )/32 Tile{ HalfReuse: s.TermType17 /25 AsIs: >/1 ]] }
      refalrts::alloc_open_bracket(vm, context[31]);
      refalrts::alloc_close_bracket(vm, context[32]);
      refalrts::update_name(context[28], functions[efunc_gen_ContainsSignature_S5B1]);
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_close_bracket(context[4]);
      refalrts::reinit_open_bracket(context[16]);
      refalrts::reinit_close_bracket(context[7]);
      refalrts::reinit_svar( context[25], context[17] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[24] );
      refalrts::link_brackets( context[15], context[32] );
      refalrts::link_brackets( context[31], context[7] );
      refalrts::link_brackets( context[16], context[8] );
      refalrts::link_brackets( context[0], context[4] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[25];
      res = refalrts::splice_elem( res, context[32] );
      res = refalrts::splice_evar( res, context[18], context[19] );
      res = refalrts::splice_evar( res, context[7], context[15] );
      res = refalrts::splice_evar( res, context[22], context[23] );
      res = refalrts::splice_elem( res, context[31] );
      res = refalrts::splice_evar( res, context[16], context[8] );
      res = refalrts::splice_elem( res, context[4] );
      res = refalrts::splice_evar( res, context[26], context[27] );
      res = refalrts::splice_elem( res, context[0] );
      res = refalrts::splice_evar( res, context[24], context[30] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    refalrts::splice_to_freelist(vm, context[24], context[25]);
    continue;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ContainsSignature/4 (/7 e.Expr/5 )/8 e.Signature/2 >/1
  // closed e.Expr as range 5
  // closed e.Signature as range 2
  //DEBUG: e.Expr: 5
  //DEBUG: e.Signature: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & ContainsSignature/4 (/7 e.Expr/5 )/8 e.Signature/2 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: # False/1 ]] }
  refalrts::reinit_ident(context[1], identifiers[ident_False]);
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ContainsSignature("ContainsSignature", COOKIE1_, COOKIE2_, func_ContainsSignature);


static refalrts::FnResult func_PartiallyContainsSignature(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 39 elems
  refalrts::Iter context[39];
  refalrts::zeros( context, 39 );
  // </0 & PartiallyContainsSignature/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & PartiallyContainsSignature/4 (/7 e.new1/5 )/8 e.new2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new1 as range 5
  // closed e.new2 as range 2
  do {
    // </0 & PartiallyContainsSignature/4 (/7 e.Expr/9 )/8 e.Signature/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    // closed e.Expr as range 9
    // closed e.Signature as range 11
    //DEBUG: e.Expr: 9
    //DEBUG: e.Signature: 11
    //9: e.Expr
    //11: e.Signature
    //16: e.Signature

    refalrts::reset_allocator(vm);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::alloc_open_call(vm, context[13]);
    refalrts::alloc_name(vm, context[15], functions[efunc_gen_PartiallyContainsSignature_S1C1]);
    refalrts::copy_evar(vm, context[16], context[17], context[11], context[12]);
    refalrts::alloc_close_call(vm, context[14]);
    refalrts::push_stack( vm, context[14] );
    refalrts::push_stack( vm, context[13] );
    res = refalrts::splice_elem( res, context[14] );
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_elem( res, context[15] );
    res = refalrts::splice_elem( res, context[13] );
    refalrts::use( res );
    refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
    if (rec_res != refalrts::cSuccess)
      return rec_res;
    refalrts::this_is_generated_function(vm);
    do {
      // </13 & PartiallyContainsSignature$1?1/17 >/14
      context[15] = 0;
      context[16] = 0;
      context[17] = refalrts::call_left( context[15], context[16], context[13], context[14] );
      if( ! refalrts::empty_seq( context[15], context[16] ) )
        continue;
      //DEBUG: e.Expr: 9
      //DEBUG: e.Signature: 11

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & PartiallyContainsSignature/4 (/7 e.Expr/9 )/8 e.Signature/11 </13 & PartiallyContainsSignature$1?1/17 >/14 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: # False/1 ]] }
      refalrts::reinit_ident(context[1], identifiers[ident_False]);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    refalrts::splice_to_freelist(vm, context[13], context[14]);
    continue;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & PartiallyContainsSignature/4 (/7 e.Expr/9 )/8 e.Signature/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    // closed e.Expr as range 9
    // closed e.Signature as range 11
    //DEBUG: e.Expr: 9
    //DEBUG: e.Signature: 11
    //9: e.Expr
    //11: e.Signature
    //16: e.Signature

    refalrts::reset_allocator(vm);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::alloc_open_call(vm, context[13]);
    refalrts::alloc_name(vm, context[15], functions[efunc_gen_PartiallyContainsSignature_S2C1]);
    refalrts::copy_evar(vm, context[16], context[17], context[11], context[12]);
    refalrts::alloc_close_call(vm, context[14]);
    refalrts::push_stack( vm, context[14] );
    refalrts::push_stack( vm, context[13] );
    res = refalrts::splice_elem( res, context[14] );
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_elem( res, context[15] );
    res = refalrts::splice_elem( res, context[13] );
    refalrts::use( res );
    refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
    if (rec_res != refalrts::cSuccess)
      return rec_res;
    refalrts::this_is_generated_function(vm);
    do {
      // </13 & PartiallyContainsSignature$2?1/17 e.Signature-Part/15 t.LastTerm/18 >/14
      context[15] = 0;
      context[16] = 0;
      context[17] = refalrts::call_left( context[15], context[16], context[13], context[14] );
      context[19] = refalrts::tvar_right( context[18], context[15], context[16] );
      if( ! context[19] )
        continue;
      // closed e.Signature-Part as range 15
      //DEBUG: e.Expr: 9
      //DEBUG: e.Signature: 11
      //DEBUG: t.LastTerm: 18
      //DEBUG: e.Signature-Part: 15
      //9: e.Expr
      //11: e.Signature
      //15: e.Signature-Part
      //18: t.LastTerm
      //23: e.Signature-Part

      refalrts::reset_allocator(vm);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::alloc_open_call(vm, context[20]);
      refalrts::alloc_name(vm, context[22], functions[efunc_gen_PartiallyContainsSignature_S2C2]);
      refalrts::copy_evar(vm, context[23], context[24], context[15], context[16]);
      refalrts::alloc_close_call(vm, context[21]);
      refalrts::push_stack( vm, context[21] );
      refalrts::push_stack( vm, context[20] );
      res = refalrts::splice_elem( res, context[21] );
      res = refalrts::splice_evar( res, context[23], context[24] );
      res = refalrts::splice_elem( res, context[22] );
      res = refalrts::splice_elem( res, context[20] );
      refalrts::use( res );
      refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
      if (rec_res != refalrts::cSuccess)
        return rec_res;
      refalrts::this_is_generated_function(vm);
      do {
        // </20 & PartiallyContainsSignature$2?2/24 t.FirstTerm/25 e.OtherPart/22 >/21
        context[22] = 0;
        context[23] = 0;
        context[24] = refalrts::call_left( context[22], context[23], context[20], context[21] );
        context[26] = refalrts::tvar_left( context[25], context[22], context[23] );
        if( ! context[26] )
          continue;
        // closed e.OtherPart as range 22
        //DEBUG: e.Expr: 9
        //DEBUG: e.Signature: 11
        //DEBUG: t.LastTerm: 18
        //DEBUG: e.Signature-Part: 15
        //DEBUG: t.FirstTerm: 25
        //DEBUG: e.OtherPart: 22
        //9: e.Expr
        //11: e.Signature
        //15: e.Signature-Part
        //18: t.LastTerm
        //22: e.OtherPart
        //25: t.FirstTerm
        //33: e.Expr
        //36: e.Signature-Part

        refalrts::reset_allocator(vm);
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        refalrts::alloc_open_call(vm, context[27]);
        refalrts::alloc_name(vm, context[29], functions[efunc_gen_PartiallyContainsSignature_S2C3]);
        refalrts::alloc_open_call(vm, context[30]);
        refalrts::alloc_name(vm, context[31], functions[efunc_ContainsSignature]);
        refalrts::alloc_open_bracket(vm, context[32]);
        refalrts::copy_evar(vm, context[33], context[34], context[9], context[10]);
        refalrts::alloc_close_bracket(vm, context[35]);
        refalrts::copy_evar(vm, context[36], context[37], context[15], context[16]);
        refalrts::alloc_close_call(vm, context[38]);
        refalrts::alloc_close_call(vm, context[28]);
        refalrts::push_stack( vm, context[28] );
        refalrts::push_stack( vm, context[27] );
        res = refalrts::splice_elem( res, context[28] );
        refalrts::push_stack( vm, context[38] );
        refalrts::push_stack( vm, context[30] );
        res = refalrts::splice_elem( res, context[38] );
        res = refalrts::splice_evar( res, context[36], context[37] );
        refalrts::link_brackets( context[32], context[35] );
        res = refalrts::splice_elem( res, context[35] );
        res = refalrts::splice_evar( res, context[33], context[34] );
        res = refalrts::splice_elem( res, context[32] );
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
          // </27 & PartiallyContainsSignature$2?3/31 # True/32 >/28
          context[29] = 0;
          context[30] = 0;
          context[31] = refalrts::call_left( context[29], context[30], context[27], context[28] );
          context[32] = refalrts::ident_left( identifiers[ident_True], context[29], context[30] );
          if( ! context[32] )
            continue;
          if( ! refalrts::empty_seq( context[29], context[30] ) )
            continue;
          //DEBUG: e.Expr: 9
          //DEBUG: e.Signature: 11
          //DEBUG: t.LastTerm: 18
          //DEBUG: e.Signature-Part: 15
          //DEBUG: t.FirstTerm: 25
          //DEBUG: e.OtherPart: 22

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} & PartiallyContainsSignature/4 (/7 e.Expr/9 )/8 e.Signature/11 </13 & PartiallyContainsSignature$2?1/17 e.Signature-Part/15 {REMOVED TILE} >/14 </20 & PartiallyContainsSignature$2?2/24 t.FirstTerm/25 e.OtherPart/22 >/21 </27 & PartiallyContainsSignature$2?3/31 # True/32 >/28 >/1 {REMOVED TILE}
          //RESULT: Tile{ [[ HalfReuse: # True/0 } Tile{ AsIs: t.LastTerm/18 } Tile{ ]] }
          refalrts::reinit_ident(context[0], identifiers[ident_True]);
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = arg_end->next;
          res = refalrts::splice_evar( res, context[18], context[19] );
          refalrts::splice_to_freelist_open( vm, context[0], res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        refalrts::splice_to_freelist(vm, context[27], context[28]);
        continue;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      refalrts::splice_to_freelist(vm, context[20], context[21]);
      continue;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    refalrts::splice_to_freelist(vm, context[13], context[14]);
    continue;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & PartiallyContainsSignature/4 (/7 e.Expr/5 )/8 e.Signature-Part/2 t.LastTerm/9 >/1
  // closed e.Expr as range 5
  context[10] = refalrts::tvar_right( context[9], context[2], context[3] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  // closed e.Signature-Part as range 2
  //DEBUG: e.Expr: 5
  //DEBUG: t.LastTerm: 9
  //DEBUG: e.Signature-Part: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 AsIs: & PartiallyContainsSignature/4 AsIs: (/7 AsIs: e.Expr/5 AsIs: )/8 } Tile{ AsIs: e.Signature-Part/2 } Tile{ AsIs: >/1 } Tile{ AsIs: t.LastTerm/9 } Tile{ ]] }
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_elem( res, context[1] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_PartiallyContainsSignature("PartiallyContainsSignature", COOKIE1_, COOKIE2_, func_PartiallyContainsSignature);


static refalrts::FnResult func_OptTreem_CanonizeTuple(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 5 elems
  refalrts::Iter context[5];
  refalrts::zeros( context, 5 );
  // </0 & OptTree-CanonizeTuple/4 e.Tuple/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Tuple as range 2
  //DEBUG: e.Tuple: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map@2/4 AsIs: e.Tuple/2 AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_gen_Map_Z2]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_OptTreem_CanonizeTuple("OptTree-CanonizeTuple", 0U, 0U, func_OptTreem_CanonizeTuple);


static refalrts::FnResult func_OptTreem_CanonizeExpr(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 5 elems
  refalrts::Iter context[5];
  refalrts::zeros( context, 5 );
  // </0 & OptTree-CanonizeExpr/4 e.Expr/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Expr as range 2
  //DEBUG: e.Expr: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map@1/4 AsIs: e.Expr/2 AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_gen_Map_Z1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_OptTreem_CanonizeExpr("OptTree-CanonizeExpr", 0U, 0U, func_OptTreem_CanonizeExpr);


static refalrts::FnResult func_gen_CanonizeExprm_Term_S2A2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  // </0 & CanonizeExpr-Term$2=2/4 s.BracketsTag/5 e.Expr$a/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Expr$a as range 2
  //DEBUG: s.BracketsTag: 5
  //DEBUG: e.Expr$a: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 AsIs: s.BracketsTag/5 AsIs: e.Expr$a/2 HalfReuse: )/1 ]] }
  refalrts::reinit_open_bracket(context[4]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[4], context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[4];
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_CanonizeExprm_Term_S2A2("CanonizeExpr-Term$2=2", COOKIE1_, COOKIE2_, func_gen_CanonizeExprm_Term_S2A2);


static refalrts::FnResult func_gen_CanonizeExprm_Term_S3A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  // </0 & CanonizeExpr-Term$3=1/4 (/7 e.Name/5 )/8 e.Expr$a/2 >/1
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
  // closed e.Expr$a as range 2
  //DEBUG: e.Name: 5
  //DEBUG: e.Expr$a: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # ADT-Brackets/4 AsIs: (/7 AsIs: e.Name/5 AsIs: )/8 AsIs: e.Expr$a/2 HalfReuse: )/1 ]] }
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_ident(context[4], identifiers[ident_ADTm_Brackets]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[0], context[1] );
  refalrts::link_brackets( context[7], context[8] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_CanonizeExprm_Term_S3A1("CanonizeExpr-Term$3=1", COOKIE1_, COOKIE2_, func_gen_CanonizeExprm_Term_S3A1);


static refalrts::FnResult func_CanonizeExprm_Term(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
  // </0 & CanonizeExpr-Term/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & CanonizeExpr-Term/4 t.new1/5 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & CanonizeExpr-Term/4 (/5 s.new2/9 e.new3/7 )/6 >/1
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
      continue;
    if( ! refalrts::svar_left( context[9], context[7], context[8] ) )
      continue;
    // closed e.new3 as range 7
    do {
      // </0 & CanonizeExpr-Term/4 (/5 # Var/9 s.Mode/12 e.Index/10 )/6 >/1
      context[10] = context[7];
      context[11] = context[8];
      if( ! refalrts::ident_term( identifiers[ident_Var], context[9] ) )
        continue;
      if( ! refalrts::svar_left( context[12], context[10], context[11] ) )
        continue;
      // closed e.Index as range 10
      //DEBUG: s.Mode: 12
      //DEBUG: e.Index: 10

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & CanonizeExpr-Term/4 {REMOVED TILE} e.Index/10 )/6 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/5 AsIs: # Var/9 AsIs: s.Mode/12 } Tile{ HalfReuse: )/1 ]] }
      refalrts::reinit_close_bracket(context[1]);
      refalrts::link_brackets( context[5], context[1] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[5], context[12] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & CanonizeExpr-Term/4 (/5 s.BracketsTag/9 e.Expr/10 )/6 >/1
      context[10] = context[7];
      context[11] = context[8];
      // closed e.Expr as range 10
      //DEBUG: s.BracketsTag: 9
      //DEBUG: e.Expr: 10
      //9: s.BracketsTag
      //10: e.Expr
      //17: s.BracketsTag

      refalrts::reset_allocator(vm);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::alloc_open_call(vm, context[12]);
      refalrts::alloc_name(vm, context[14], functions[efunc_gen_CanonizeExprm_Term_S2C1]);
      refalrts::alloc_open_call(vm, context[15]);
      refalrts::alloc_name(vm, context[16], functions[efunc_OneOf]);
      refalrts::copy_stvar(vm, context[17], context[9]);
      refalrts::alloc_ident(vm, context[18], identifiers[ident_CallBrackets]);
      refalrts::alloc_ident(vm, context[19], identifiers[ident_ClosureBrackets]);
      refalrts::alloc_ident(vm, context[20], identifiers[ident_Brackets]);
      refalrts::alloc_close_call(vm, context[21]);
      refalrts::alloc_close_call(vm, context[13]);
      refalrts::push_stack( vm, context[13] );
      refalrts::push_stack( vm, context[12] );
      res = refalrts::splice_elem( res, context[13] );
      refalrts::push_stack( vm, context[21] );
      refalrts::push_stack( vm, context[15] );
      res = refalrts::splice_elem( res, context[21] );
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
        // </12 & CanonizeExpr-Term$2?1/16 # True/17 >/13
        context[14] = 0;
        context[15] = 0;
        context[16] = refalrts::call_left( context[14], context[15], context[12], context[13] );
        context[17] = refalrts::ident_left( identifiers[ident_True], context[14], context[15] );
        if( ! context[17] )
          continue;
        if( ! refalrts::empty_seq( context[14], context[15] ) )
          continue;
        //DEBUG: s.BracketsTag: 9
        //DEBUG: e.Expr: 10

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} s.BracketsTag/9 {REMOVED TILE} )/6 {REMOVED TILE} # True/17 {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & CanonizeExpr-Term$2=2/4 HalfReuse: s.BracketsTag9 /5 } Tile{ AsIs: </12 Reuse: & OptTree-CanonizeExpr/16 } Tile{ AsIs: e.Expr/10 } Tile{ AsIs: >/13 AsIs: >/1 ]] }
        refalrts::update_name(context[4], functions[efunc_gen_CanonizeExprm_Term_S2A2]);
        refalrts::reinit_svar( context[5], context[9] );
        refalrts::update_name(context[16], functions[efunc_OptTreem_CanonizeExpr]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::push_stack( vm, context[13] );
        refalrts::push_stack( vm, context[12] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[13];
        res = refalrts::splice_evar( res, context[10], context[11] );
        res = refalrts::splice_evar( res, context[12], context[16] );
        refalrts::splice_to_freelist_open( vm, context[5], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      refalrts::splice_to_freelist(vm, context[12], context[13]);
      continue;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & CanonizeExpr-Term/4 (/5 s.new4/9 t.new5/12 e.new6/10 )/6 >/1
    context[10] = context[7];
    context[11] = context[8];
    context[13] = refalrts::tvar_left( context[12], context[10], context[11] );
    if( ! context[13] )
      continue;
    // closed e.new6 as range 10
    do {
      // </0 & CanonizeExpr-Term/4 (/5 # ADT-Brackets/9 (/12 e.Name/16 )/13 e.Expr/14 )/6 >/1
      context[14] = context[10];
      context[15] = context[11];
      context[16] = 0;
      context[17] = 0;
      if( ! refalrts::brackets_term( context[16], context[17], context[12] ) )
        continue;
      if( ! refalrts::ident_term( identifiers[ident_ADTm_Brackets], context[9] ) )
        continue;
      // closed e.Name as range 16
      // closed e.Expr as range 14
      //DEBUG: e.Name: 16
      //DEBUG: e.Expr: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: </5 HalfReuse: & CanonizeExpr-Term$3=1/9 AsIs: (/12 AsIs: e.Name/16 AsIs: )/13 } Tile{ AsIs: </0 Reuse: & Map@1/4 } Tile{ AsIs: e.Expr/14 } Tile{ HalfReuse: >/6 AsIs: >/1 ]] }
      refalrts::reinit_open_call(context[5]);
      refalrts::reinit_name(context[9], functions[efunc_gen_CanonizeExprm_Term_S3A1]);
      refalrts::update_name(context[4], functions[efunc_gen_Map_Z1]);
      refalrts::reinit_close_call(context[6]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[5] );
      refalrts::push_stack( vm, context[6] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[12], context[13] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[6];
      res = refalrts::splice_evar( res, context[14], context[15] );
      res = refalrts::splice_evar( res, context[0], context[4] );
      res = refalrts::splice_evar( res, context[5], context[13] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & CanonizeExpr-Term/4 (/5 # Symbol/9 # Number/12 s._/16 )/6 >/1
    context[14] = context[10];
    context[15] = context[11];
    if( ! refalrts::ident_term( identifiers[ident_Number], context[12] ) )
      continue;
    if( ! refalrts::ident_term( identifiers[ident_Symbol], context[9] ) )
      continue;
    if( ! refalrts::svar_left( context[16], context[14], context[15] ) )
      continue;
    if( ! refalrts::empty_seq( context[14], context[15] ) )
      continue;
    //DEBUG: s._: 16

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & CanonizeExpr-Term/4 {REMOVED TILE} s._/16 )/6 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/5 AsIs: # Symbol/9 AsIs: # Number/12 } Tile{ HalfReuse: )/1 ]] }
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[5], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[5], context[12] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & CanonizeExpr-Term/4 t.OtherTerm/5 >/1
  //DEBUG: t.OtherTerm: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & CanonizeExpr-Term/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.OtherTerm/5 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_CanonizeExprm_Term("CanonizeExpr-Term", COOKIE1_, COOKIE2_, func_CanonizeExprm_Term);


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


static refalrts::FnResult func_gen_DoCheckExprPairForRelation_Z1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 33 elems
  refalrts::Iter context[33];
  refalrts::zeros( context, 33 );
  // </0 & DoCheckExprPairForRelation@1/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & DoCheckExprPairForRelation@1/4 t.new1/5 (/9 e.new2/7 )/10 e.new3/2 >/1
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
    // </0 & DoCheckExprPairForRelation@1/4 t.Term/5 (/9 e.OtherPart/11 )/10 e.HistoryExpr/13 >/1
    context[11] = context[7];
    context[12] = context[8];
    context[13] = context[2];
    context[14] = context[3];
    // closed e.OtherPart as range 11
    // closed e.HistoryExpr as range 13
    //DEBUG: t.Term: 5
    //DEBUG: e.OtherPart: 11
    //DEBUG: e.HistoryExpr: 13
    //5: t.Term
    //11: e.OtherPart
    //13: e.HistoryExpr
    //21: t.Term
    //23: e.HistoryExpr

    refalrts::reset_allocator(vm);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::alloc_open_call(vm, context[15]);
    refalrts::alloc_name(vm, context[17], functions[efunc_gen_DoCheckExprPairForRelation_Z1S1C1]);
    refalrts::alloc_open_call(vm, context[18]);
    refalrts::alloc_name(vm, context[19], functions[efunc_ContainsSignature]);
    refalrts::alloc_open_bracket(vm, context[20]);
    refalrts::copy_stvar(vm, context[21], context[5]);
    refalrts::alloc_close_bracket(vm, context[22]);
    refalrts::copy_evar(vm, context[23], context[24], context[13], context[14]);
    refalrts::alloc_close_call(vm, context[25]);
    refalrts::alloc_close_call(vm, context[16]);
    refalrts::push_stack( vm, context[16] );
    refalrts::push_stack( vm, context[15] );
    res = refalrts::splice_elem( res, context[16] );
    refalrts::push_stack( vm, context[25] );
    refalrts::push_stack( vm, context[18] );
    res = refalrts::splice_elem( res, context[25] );
    res = refalrts::splice_evar( res, context[23], context[24] );
    refalrts::link_brackets( context[20], context[22] );
    res = refalrts::splice_elem( res, context[22] );
    res = refalrts::splice_stvar( res, context[21] );
    res = refalrts::splice_elem( res, context[20] );
    res = refalrts::splice_elem( res, context[19] );
    res = refalrts::splice_elem( res, context[18] );
    res = refalrts::splice_elem( res, context[17] );
    res = refalrts::splice_elem( res, context[15] );
    refalrts::use( res );
    refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
    if (rec_res != refalrts::cSuccess)
      return rec_res;
    refalrts::this_is_generated_function(vm);
    do {
      // </15 & DoCheckExprPairForRelation@1$1?1/19 # True/20 >/16
      context[17] = 0;
      context[18] = 0;
      context[19] = refalrts::call_left( context[17], context[18], context[15], context[16] );
      context[20] = refalrts::ident_left( identifiers[ident_True], context[17], context[18] );
      if( ! context[20] )
        continue;
      if( ! refalrts::empty_seq( context[17], context[18] ) )
        continue;
      //DEBUG: t.Term: 5
      //DEBUG: e.OtherPart: 11
      //DEBUG: e.HistoryExpr: 13

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & DoCheckExprPairForRelation@1/4 t.Term/5 (/9 e.OtherPart/11 )/10 e.HistoryExpr/13 </15 & DoCheckExprPairForRelation@1$1?1/19 # True/20 >/16 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: # True/1 ]] }
      refalrts::reinit_ident(context[1], identifiers[ident_True]);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    refalrts::splice_to_freelist(vm, context[15], context[16]);
    continue;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoCheckExprPairForRelation@1/4 t.Term/5 (/9 e.OtherPart/11 )/10 e.HistoryExpr/13 >/1
    context[11] = context[7];
    context[12] = context[8];
    context[13] = context[2];
    context[14] = context[3];
    // closed e.OtherPart as range 11
    // closed e.HistoryExpr as range 13
    //DEBUG: t.Term: 5
    //DEBUG: e.OtherPart: 11
    //DEBUG: e.HistoryExpr: 13
    //5: t.Term
    //11: e.OtherPart
    //13: e.HistoryExpr
    //21: e.OtherPart
    //24: e.HistoryExpr

    refalrts::reset_allocator(vm);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::alloc_open_call(vm, context[15]);
    refalrts::alloc_name(vm, context[17], functions[efunc_gen_DoCheckExprPairForRelation_Z1S2C1]);
    refalrts::alloc_open_call(vm, context[18]);
    refalrts::alloc_name(vm, context[19], functions[efunc_ContainsSignature]);
    refalrts::alloc_open_bracket(vm, context[20]);
    refalrts::copy_evar(vm, context[21], context[22], context[11], context[12]);
    refalrts::alloc_close_bracket(vm, context[23]);
    refalrts::copy_evar(vm, context[24], context[25], context[13], context[14]);
    refalrts::alloc_close_call(vm, context[26]);
    refalrts::alloc_close_call(vm, context[16]);
    refalrts::push_stack( vm, context[16] );
    refalrts::push_stack( vm, context[15] );
    res = refalrts::splice_elem( res, context[16] );
    refalrts::push_stack( vm, context[26] );
    refalrts::push_stack( vm, context[18] );
    res = refalrts::splice_elem( res, context[26] );
    res = refalrts::splice_evar( res, context[24], context[25] );
    refalrts::link_brackets( context[20], context[23] );
    res = refalrts::splice_elem( res, context[23] );
    res = refalrts::splice_evar( res, context[21], context[22] );
    res = refalrts::splice_elem( res, context[20] );
    res = refalrts::splice_elem( res, context[19] );
    res = refalrts::splice_elem( res, context[18] );
    res = refalrts::splice_elem( res, context[17] );
    res = refalrts::splice_elem( res, context[15] );
    refalrts::use( res );
    refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
    if (rec_res != refalrts::cSuccess)
      return rec_res;
    refalrts::this_is_generated_function(vm);
    do {
      // </15 & DoCheckExprPairForRelation@1$2?1/19 # True/20 >/16
      context[17] = 0;
      context[18] = 0;
      context[19] = refalrts::call_left( context[17], context[18], context[15], context[16] );
      context[20] = refalrts::ident_left( identifiers[ident_True], context[17], context[18] );
      if( ! context[20] )
        continue;
      if( ! refalrts::empty_seq( context[17], context[18] ) )
        continue;
      //DEBUG: t.Term: 5
      //DEBUG: e.OtherPart: 11
      //DEBUG: e.HistoryExpr: 13

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & DoCheckExprPairForRelation@1/4 t.Term/5 (/9 e.OtherPart/11 )/10 e.HistoryExpr/13 </15 & DoCheckExprPairForRelation@1$2?1/19 # True/20 >/16 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: # True/1 ]] }
      refalrts::reinit_ident(context[1], identifiers[ident_True]);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    refalrts::splice_to_freelist(vm, context[15], context[16]);
    continue;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoCheckExprPairForRelation@1/4 t.Term/5 (/9 e.OtherPart/11 )/10 e.HistoryExpr/13 >/1
    context[11] = context[7];
    context[12] = context[8];
    context[13] = context[2];
    context[14] = context[3];
    // closed e.OtherPart as range 11
    // closed e.HistoryExpr as range 13
    //DEBUG: t.Term: 5
    //DEBUG: e.OtherPart: 11
    //DEBUG: e.HistoryExpr: 13
    //5: t.Term
    //11: e.OtherPart
    //13: e.HistoryExpr
    //20: t.Term
    //21: e.HistoryExpr

    refalrts::reset_allocator(vm);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::alloc_open_call(vm, context[15]);
    refalrts::alloc_name(vm, context[17], functions[efunc_gen_DoCheckExprPairForRelation_Z1S3C1]);
    refalrts::alloc_open_call(vm, context[18]);
    refalrts::alloc_name(vm, context[19], functions[efunc_gen_PartiallyContainsSignature_Z1]);
    refalrts::copy_stvar(vm, context[20], context[5]);
    refalrts::copy_evar(vm, context[21], context[22], context[13], context[14]);
    refalrts::alloc_close_call(vm, context[23]);
    refalrts::alloc_close_call(vm, context[16]);
    refalrts::push_stack( vm, context[16] );
    refalrts::push_stack( vm, context[15] );
    res = refalrts::splice_elem( res, context[16] );
    refalrts::push_stack( vm, context[23] );
    refalrts::push_stack( vm, context[18] );
    res = refalrts::splice_elem( res, context[23] );
    res = refalrts::splice_evar( res, context[21], context[22] );
    res = refalrts::splice_stvar( res, context[20] );
    res = refalrts::splice_elem( res, context[19] );
    res = refalrts::splice_elem( res, context[18] );
    res = refalrts::splice_elem( res, context[17] );
    res = refalrts::splice_elem( res, context[15] );
    refalrts::use( res );
    refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
    if (rec_res != refalrts::cSuccess)
      return rec_res;
    refalrts::this_is_generated_function(vm);
    do {
      // </15 & DoCheckExprPairForRelation@1$3?1/19 # True/20 e.HistorySignature-Rest/17 >/16
      context[17] = 0;
      context[18] = 0;
      context[19] = refalrts::call_left( context[17], context[18], context[15], context[16] );
      context[20] = refalrts::ident_left( identifiers[ident_True], context[17], context[18] );
      if( ! context[20] )
        continue;
      // closed e.HistorySignature-Rest as range 17
      //DEBUG: t.Term: 5
      //DEBUG: e.OtherPart: 11
      //DEBUG: e.HistoryExpr: 13
      //DEBUG: e.HistorySignature-Rest: 17
      //5: t.Term
      //11: e.OtherPart
      //13: e.HistoryExpr
      //17: e.HistorySignature-Rest
      //27: e.OtherPart
      //30: e.HistorySignature-Rest

      refalrts::reset_allocator(vm);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::alloc_open_call(vm, context[21]);
      refalrts::alloc_name(vm, context[23], functions[efunc_gen_DoCheckExprPairForRelation_Z1S3C2]);
      refalrts::alloc_open_call(vm, context[24]);
      refalrts::alloc_name(vm, context[25], functions[efunc_ContainsSignature]);
      refalrts::alloc_open_bracket(vm, context[26]);
      refalrts::copy_evar(vm, context[27], context[28], context[11], context[12]);
      refalrts::alloc_close_bracket(vm, context[29]);
      refalrts::copy_evar(vm, context[30], context[31], context[17], context[18]);
      refalrts::alloc_close_call(vm, context[32]);
      refalrts::alloc_close_call(vm, context[22]);
      refalrts::push_stack( vm, context[22] );
      refalrts::push_stack( vm, context[21] );
      res = refalrts::splice_elem( res, context[22] );
      refalrts::push_stack( vm, context[32] );
      refalrts::push_stack( vm, context[24] );
      res = refalrts::splice_elem( res, context[32] );
      res = refalrts::splice_evar( res, context[30], context[31] );
      refalrts::link_brackets( context[26], context[29] );
      res = refalrts::splice_elem( res, context[29] );
      res = refalrts::splice_evar( res, context[27], context[28] );
      res = refalrts::splice_elem( res, context[26] );
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
        // </21 & DoCheckExprPairForRelation@1$3?2/25 # True/26 >/22
        context[23] = 0;
        context[24] = 0;
        context[25] = refalrts::call_left( context[23], context[24], context[21], context[22] );
        context[26] = refalrts::ident_left( identifiers[ident_True], context[23], context[24] );
        if( ! context[26] )
          continue;
        if( ! refalrts::empty_seq( context[23], context[24] ) )
          continue;
        //DEBUG: t.Term: 5
        //DEBUG: e.OtherPart: 11
        //DEBUG: e.HistoryExpr: 13
        //DEBUG: e.HistorySignature-Rest: 17

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 & DoCheckExprPairForRelation@1/4 t.Term/5 (/9 e.OtherPart/11 )/10 e.HistoryExpr/13 </15 & DoCheckExprPairForRelation@1$3?1/19 # True/20 e.HistorySignature-Rest/17 >/16 </21 & DoCheckExprPairForRelation@1$3?2/25 # True/26 >/22 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: # True/1 ]] }
        refalrts::reinit_ident(context[1], identifiers[ident_True]);
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      refalrts::splice_to_freelist(vm, context[21], context[22]);
      continue;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    refalrts::splice_to_freelist(vm, context[15], context[16]);
    continue;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoCheckExprPairForRelation@1/4 t.Term/5 (/9 e.OtherPart/11 )/10 e.HistoryExpr/13 >/1
    context[11] = context[7];
    context[12] = context[8];
    context[13] = context[2];
    context[14] = context[3];
    // closed e.OtherPart as range 11
    // closed e.HistoryExpr as range 13
    //DEBUG: t.Term: 5
    //DEBUG: e.OtherPart: 11
    //DEBUG: e.HistoryExpr: 13

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & DoCheckExprPairForRelation@1/4 t.Term/5 (/9 e.OtherPart/11 )/10 e.HistoryExpr/13 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # False/1 ]] }
    refalrts::reinit_ident(context[1], identifiers[ident_False]);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoCheckExprPairForRelation@1/4 t.Term/5 (/9 e.OtherPart/7 )/10 e.HistoryExpr/2 >/1
  // closed e.OtherPart as range 7
  // closed e.HistoryExpr as range 2
  //DEBUG: t.Term: 5
  //DEBUG: e.OtherPart: 7
  //DEBUG: e.HistoryExpr: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoCheckExprPairForRelation@0/4 } (/11 Tile{ AsIs: t.Term/5 } )/12 Tile{ AsIs: (/9 AsIs: e.OtherPart/7 AsIs: )/10 AsIs: e.HistoryExpr/2 AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[11]);
  refalrts::alloc_close_bracket(vm, context[12]);
  refalrts::update_name(context[4], functions[efunc_gen_DoCheckExprPairForRelation_Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[9], context[10] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[9];
  res = refalrts::splice_elem( res, context[12] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_elem( res, context[11] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoCheckExprPairForRelation_Z1("DoCheckExprPairForRelation@1", COOKIE1_, COOKIE2_, func_gen_DoCheckExprPairForRelation_Z1);


static refalrts::FnResult func_gen_DoCheckExprPairForRelation_Z2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 29 elems
  refalrts::Iter context[29];
  refalrts::zeros( context, 29 );
  // </0 & DoCheckExprPairForRelation@2/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & DoCheckExprPairForRelation@2/4 (/7 e.new1/5 )/8 e.new2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new1 as range 5
  // closed e.new2 as range 2
  do {
    // </0 & DoCheckExprPairForRelation@2/4 (/7 e.Expr/9 )/8 e.OtherInner/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    // closed e.Expr as range 9
    // closed e.OtherInner as range 11
    //DEBUG: e.Expr: 9
    //DEBUG: e.OtherInner: 11
    //9: e.Expr
    //11: e.OtherInner
    //19: e.Expr
    //22: e.OtherInner

    refalrts::reset_allocator(vm);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::alloc_open_call(vm, context[13]);
    refalrts::alloc_name(vm, context[15], functions[efunc_gen_DoCheckExprPairForRelation_Z2S1C1]);
    refalrts::alloc_open_call(vm, context[16]);
    refalrts::alloc_name(vm, context[17], functions[efunc_ContainsSignature]);
    refalrts::alloc_open_bracket(vm, context[18]);
    refalrts::copy_evar(vm, context[19], context[20], context[9], context[10]);
    refalrts::alloc_close_bracket(vm, context[21]);
    refalrts::copy_evar(vm, context[22], context[23], context[11], context[12]);
    refalrts::alloc_close_call(vm, context[24]);
    refalrts::alloc_close_call(vm, context[14]);
    refalrts::push_stack( vm, context[14] );
    refalrts::push_stack( vm, context[13] );
    res = refalrts::splice_elem( res, context[14] );
    refalrts::push_stack( vm, context[24] );
    refalrts::push_stack( vm, context[16] );
    res = refalrts::splice_elem( res, context[24] );
    res = refalrts::splice_evar( res, context[22], context[23] );
    refalrts::link_brackets( context[18], context[21] );
    res = refalrts::splice_elem( res, context[21] );
    res = refalrts::splice_evar( res, context[19], context[20] );
    res = refalrts::splice_elem( res, context[18] );
    res = refalrts::splice_elem( res, context[17] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_elem( res, context[15] );
    res = refalrts::splice_elem( res, context[13] );
    refalrts::use( res );
    refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
    if (rec_res != refalrts::cSuccess)
      return rec_res;
    refalrts::this_is_generated_function(vm);
    do {
      // </13 & DoCheckExprPairForRelation@2$1?1/17 # True/18 >/14
      context[15] = 0;
      context[16] = 0;
      context[17] = refalrts::call_left( context[15], context[16], context[13], context[14] );
      context[18] = refalrts::ident_left( identifiers[ident_True], context[15], context[16] );
      if( ! context[18] )
        continue;
      if( ! refalrts::empty_seq( context[15], context[16] ) )
        continue;
      //DEBUG: e.Expr: 9
      //DEBUG: e.OtherInner: 11

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & DoCheckExprPairForRelation@2/4 (/7 e.Expr/9 )/8 e.OtherInner/11 </13 & DoCheckExprPairForRelation@2$1?1/17 # True/18 >/14 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: # True/1 ]] }
      refalrts::reinit_ident(context[1], identifiers[ident_True]);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    refalrts::splice_to_freelist(vm, context[13], context[14]);
    continue;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoCheckExprPairForRelation@2/4 (/7 e.Expr/9 )/8 e.OtherInner/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    // closed e.Expr as range 9
    // closed e.OtherInner as range 11
    //DEBUG: e.Expr: 9
    //DEBUG: e.OtherInner: 11
    //9: e.Expr
    //11: e.OtherInner
    //20: e.OtherInner

    refalrts::reset_allocator(vm);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::alloc_open_call(vm, context[13]);
    refalrts::alloc_name(vm, context[15], functions[efunc_gen_DoCheckExprPairForRelation_Z2S2C1]);
    refalrts::alloc_open_call(vm, context[16]);
    refalrts::alloc_name(vm, context[17], functions[efunc_ContainsSignature]);
    refalrts::alloc_open_bracket(vm, context[18]);
    refalrts::alloc_close_bracket(vm, context[19]);
    refalrts::copy_evar(vm, context[20], context[21], context[11], context[12]);
    refalrts::alloc_close_call(vm, context[22]);
    refalrts::alloc_close_call(vm, context[14]);
    refalrts::push_stack( vm, context[14] );
    refalrts::push_stack( vm, context[13] );
    res = refalrts::splice_elem( res, context[14] );
    refalrts::push_stack( vm, context[22] );
    refalrts::push_stack( vm, context[16] );
    res = refalrts::splice_elem( res, context[22] );
    res = refalrts::splice_evar( res, context[20], context[21] );
    refalrts::link_brackets( context[18], context[19] );
    res = refalrts::splice_elem( res, context[19] );
    res = refalrts::splice_elem( res, context[18] );
    res = refalrts::splice_elem( res, context[17] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_elem( res, context[15] );
    res = refalrts::splice_elem( res, context[13] );
    refalrts::use( res );
    refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
    if (rec_res != refalrts::cSuccess)
      return rec_res;
    refalrts::this_is_generated_function(vm);
    do {
      // </13 & DoCheckExprPairForRelation@2$2?1/17 # True/18 >/14
      context[15] = 0;
      context[16] = 0;
      context[17] = refalrts::call_left( context[15], context[16], context[13], context[14] );
      context[18] = refalrts::ident_left( identifiers[ident_True], context[15], context[16] );
      if( ! context[18] )
        continue;
      if( ! refalrts::empty_seq( context[15], context[16] ) )
        continue;
      //DEBUG: e.Expr: 9
      //DEBUG: e.OtherInner: 11

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & DoCheckExprPairForRelation@2/4 (/7 e.Expr/9 )/8 e.OtherInner/11 </13 & DoCheckExprPairForRelation@2$2?1/17 # True/18 >/14 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: # True/1 ]] }
      refalrts::reinit_ident(context[1], identifiers[ident_True]);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    refalrts::splice_to_freelist(vm, context[13], context[14]);
    continue;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoCheckExprPairForRelation@2/4 (/7 e.Expr/9 )/8 e.OtherInner/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    // closed e.Expr as range 9
    // closed e.OtherInner as range 11
    //DEBUG: e.Expr: 9
    //DEBUG: e.OtherInner: 11
    //9: e.Expr
    //11: e.OtherInner
    //19: e.Expr
    //22: e.OtherInner

    refalrts::reset_allocator(vm);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::alloc_open_call(vm, context[13]);
    refalrts::alloc_name(vm, context[15], functions[efunc_gen_DoCheckExprPairForRelation_Z2S3C1]);
    refalrts::alloc_open_call(vm, context[16]);
    refalrts::alloc_name(vm, context[17], functions[efunc_PartiallyContainsSignature]);
    refalrts::alloc_open_bracket(vm, context[18]);
    refalrts::copy_evar(vm, context[19], context[20], context[9], context[10]);
    refalrts::alloc_close_bracket(vm, context[21]);
    refalrts::copy_evar(vm, context[22], context[23], context[11], context[12]);
    refalrts::alloc_close_call(vm, context[24]);
    refalrts::alloc_close_call(vm, context[14]);
    refalrts::push_stack( vm, context[14] );
    refalrts::push_stack( vm, context[13] );
    res = refalrts::splice_elem( res, context[14] );
    refalrts::push_stack( vm, context[24] );
    refalrts::push_stack( vm, context[16] );
    res = refalrts::splice_elem( res, context[24] );
    res = refalrts::splice_evar( res, context[22], context[23] );
    refalrts::link_brackets( context[18], context[21] );
    res = refalrts::splice_elem( res, context[21] );
    res = refalrts::splice_evar( res, context[19], context[20] );
    res = refalrts::splice_elem( res, context[18] );
    res = refalrts::splice_elem( res, context[17] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_elem( res, context[15] );
    res = refalrts::splice_elem( res, context[13] );
    refalrts::use( res );
    refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
    if (rec_res != refalrts::cSuccess)
      return rec_res;
    refalrts::this_is_generated_function(vm);
    do {
      // </13 & DoCheckExprPairForRelation@2$3?1/17 # True/18 e.HistorySignature-Rest/15 >/14
      context[15] = 0;
      context[16] = 0;
      context[17] = refalrts::call_left( context[15], context[16], context[13], context[14] );
      context[18] = refalrts::ident_left( identifiers[ident_True], context[15], context[16] );
      if( ! context[18] )
        continue;
      // closed e.HistorySignature-Rest as range 15
      //DEBUG: e.Expr: 9
      //DEBUG: e.OtherInner: 11
      //DEBUG: e.HistorySignature-Rest: 15
      //9: e.Expr
      //11: e.OtherInner
      //15: e.HistorySignature-Rest
      //26: e.HistorySignature-Rest

      refalrts::reset_allocator(vm);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::alloc_open_call(vm, context[19]);
      refalrts::alloc_name(vm, context[21], functions[efunc_gen_DoCheckExprPairForRelation_Z2S3C2]);
      refalrts::alloc_open_call(vm, context[22]);
      refalrts::alloc_name(vm, context[23], functions[efunc_ContainsSignature]);
      refalrts::alloc_open_bracket(vm, context[24]);
      refalrts::alloc_close_bracket(vm, context[25]);
      refalrts::copy_evar(vm, context[26], context[27], context[15], context[16]);
      refalrts::alloc_close_call(vm, context[28]);
      refalrts::alloc_close_call(vm, context[20]);
      refalrts::push_stack( vm, context[20] );
      refalrts::push_stack( vm, context[19] );
      res = refalrts::splice_elem( res, context[20] );
      refalrts::push_stack( vm, context[28] );
      refalrts::push_stack( vm, context[22] );
      res = refalrts::splice_elem( res, context[28] );
      res = refalrts::splice_evar( res, context[26], context[27] );
      refalrts::link_brackets( context[24], context[25] );
      res = refalrts::splice_elem( res, context[25] );
      res = refalrts::splice_elem( res, context[24] );
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
        // </19 & DoCheckExprPairForRelation@2$3?2/23 # True/24 >/20
        context[21] = 0;
        context[22] = 0;
        context[23] = refalrts::call_left( context[21], context[22], context[19], context[20] );
        context[24] = refalrts::ident_left( identifiers[ident_True], context[21], context[22] );
        if( ! context[24] )
          continue;
        if( ! refalrts::empty_seq( context[21], context[22] ) )
          continue;
        //DEBUG: e.Expr: 9
        //DEBUG: e.OtherInner: 11
        //DEBUG: e.HistorySignature-Rest: 15

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 & DoCheckExprPairForRelation@2/4 (/7 e.Expr/9 )/8 e.OtherInner/11 </13 & DoCheckExprPairForRelation@2$3?1/17 # True/18 e.HistorySignature-Rest/15 >/14 </19 & DoCheckExprPairForRelation@2$3?2/23 # True/24 >/20 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: # True/1 ]] }
        refalrts::reinit_ident(context[1], identifiers[ident_True]);
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      refalrts::splice_to_freelist(vm, context[19], context[20]);
      continue;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    refalrts::splice_to_freelist(vm, context[13], context[14]);
    continue;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoCheckExprPairForRelation@2/4 (/7 e.Expr/9 )/8 e.OtherInner/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    // closed e.Expr as range 9
    // closed e.OtherInner as range 11
    //DEBUG: e.Expr: 9
    //DEBUG: e.OtherInner: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & DoCheckExprPairForRelation@2/4 (/7 e.Expr/9 )/8 e.OtherInner/11 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # False/1 ]] }
    refalrts::reinit_ident(context[1], identifiers[ident_False]);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoCheckExprPairForRelation@2/4 (/7 e.Expr/5 )/8 e.OtherInner/2 >/1
  // closed e.Expr as range 5
  // closed e.OtherInner as range 2
  //DEBUG: e.Expr: 5
  //DEBUG: e.OtherInner: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoCheckExprPairForRelation@0/4 AsIs: (/7 AsIs: e.Expr/5 AsIs: )/8 } (/9 )/10 Tile{ AsIs: e.OtherInner/2 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[9]);
  refalrts::alloc_close_bracket(vm, context[10]);
  refalrts::update_name(context[4], functions[efunc_gen_DoCheckExprPairForRelation_Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[9], context[10] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoCheckExprPairForRelation_Z2("DoCheckExprPairForRelation@2", COOKIE1_, COOKIE2_, func_gen_DoCheckExprPairForRelation_Z2);


static refalrts::FnResult func_gen_DoCheckExprPairForRelation_Z3(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 41 elems
  refalrts::Iter context[41];
  refalrts::zeros( context, 41 );
  // </0 & DoCheckExprPairForRelation@3/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & DoCheckExprPairForRelation@3/4 t.new1/5 (/9 e.new2/7 )/10 (/13 e.new3/11 )/14 e.new4/2 >/1
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
    // </0 & DoCheckExprPairForRelation@3/4 t.Inner-FirstTerm/5 (/9 e.Inner-Rest/15 )/10 (/13 e.RestExpr/17 )/14 e.Signature/19 >/1
    context[15] = context[7];
    context[16] = context[8];
    context[17] = context[11];
    context[18] = context[12];
    context[19] = context[2];
    context[20] = context[3];
    // closed e.Inner-Rest as range 15
    // closed e.RestExpr as range 17
    // closed e.Signature as range 19
    //DEBUG: t.Inner-FirstTerm: 5
    //DEBUG: e.Inner-Rest: 15
    //DEBUG: e.RestExpr: 17
    //DEBUG: e.Signature: 19
    //5: t.Inner-FirstTerm
    //15: e.Inner-Rest
    //17: e.RestExpr
    //19: e.Signature
    //27: t.Inner-FirstTerm
    //29: e.Signature

    refalrts::reset_allocator(vm);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::alloc_open_call(vm, context[21]);
    refalrts::alloc_name(vm, context[23], functions[efunc_gen_DoCheckExprPairForRelation_Z3S1C1]);
    refalrts::alloc_open_call(vm, context[24]);
    refalrts::alloc_name(vm, context[25], functions[efunc_ContainsSignature]);
    refalrts::alloc_open_bracket(vm, context[26]);
    refalrts::copy_stvar(vm, context[27], context[5]);
    refalrts::alloc_close_bracket(vm, context[28]);
    refalrts::copy_evar(vm, context[29], context[30], context[19], context[20]);
    refalrts::alloc_close_call(vm, context[31]);
    refalrts::alloc_close_call(vm, context[22]);
    refalrts::push_stack( vm, context[22] );
    refalrts::push_stack( vm, context[21] );
    res = refalrts::splice_elem( res, context[22] );
    refalrts::push_stack( vm, context[31] );
    refalrts::push_stack( vm, context[24] );
    res = refalrts::splice_elem( res, context[31] );
    res = refalrts::splice_evar( res, context[29], context[30] );
    refalrts::link_brackets( context[26], context[28] );
    res = refalrts::splice_elem( res, context[28] );
    res = refalrts::splice_stvar( res, context[27] );
    res = refalrts::splice_elem( res, context[26] );
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
      // </21 & DoCheckExprPairForRelation@3$1?1/25 # True/26 >/22
      context[23] = 0;
      context[24] = 0;
      context[25] = refalrts::call_left( context[23], context[24], context[21], context[22] );
      context[26] = refalrts::ident_left( identifiers[ident_True], context[23], context[24] );
      if( ! context[26] )
        continue;
      if( ! refalrts::empty_seq( context[23], context[24] ) )
        continue;
      //DEBUG: t.Inner-FirstTerm: 5
      //DEBUG: e.Inner-Rest: 15
      //DEBUG: e.RestExpr: 17
      //DEBUG: e.Signature: 19

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & DoCheckExprPairForRelation@3/4 t.Inner-FirstTerm/5 (/9 e.Inner-Rest/15 )/10 (/13 e.RestExpr/17 )/14 e.Signature/19 </21 & DoCheckExprPairForRelation@3$1?1/25 # True/26 >/22 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: # True/1 ]] }
      refalrts::reinit_ident(context[1], identifiers[ident_True]);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    refalrts::splice_to_freelist(vm, context[21], context[22]);
    continue;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoCheckExprPairForRelation@3/4 t.Inner-FirstTerm/5 (/9 e.Inner-Rest/15 )/10 (/13 e.RestExpr/17 )/14 e.Signature/19 >/1
    context[15] = context[7];
    context[16] = context[8];
    context[17] = context[11];
    context[18] = context[12];
    context[19] = context[2];
    context[20] = context[3];
    // closed e.Inner-Rest as range 15
    // closed e.RestExpr as range 17
    // closed e.Signature as range 19
    //DEBUG: t.Inner-FirstTerm: 5
    //DEBUG: e.Inner-Rest: 15
    //DEBUG: e.RestExpr: 17
    //DEBUG: e.Signature: 19
    //5: t.Inner-FirstTerm
    //15: e.Inner-Rest
    //17: e.RestExpr
    //19: e.Signature
    //27: e.Inner-Rest
    //29: e.RestExpr
    //32: e.Signature

    refalrts::reset_allocator(vm);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::alloc_open_call(vm, context[21]);
    refalrts::alloc_name(vm, context[23], functions[efunc_gen_DoCheckExprPairForRelation_Z3S2C1]);
    refalrts::alloc_open_call(vm, context[24]);
    refalrts::alloc_name(vm, context[25], functions[efunc_ContainsSignature]);
    refalrts::alloc_open_bracket(vm, context[26]);
    refalrts::copy_evar(vm, context[27], context[28], context[15], context[16]);
    refalrts::copy_evar(vm, context[29], context[30], context[17], context[18]);
    refalrts::alloc_close_bracket(vm, context[31]);
    refalrts::copy_evar(vm, context[32], context[33], context[19], context[20]);
    refalrts::alloc_close_call(vm, context[34]);
    refalrts::alloc_close_call(vm, context[22]);
    refalrts::push_stack( vm, context[22] );
    refalrts::push_stack( vm, context[21] );
    res = refalrts::splice_elem( res, context[22] );
    refalrts::push_stack( vm, context[34] );
    refalrts::push_stack( vm, context[24] );
    res = refalrts::splice_elem( res, context[34] );
    res = refalrts::splice_evar( res, context[32], context[33] );
    refalrts::link_brackets( context[26], context[31] );
    res = refalrts::splice_elem( res, context[31] );
    res = refalrts::splice_evar( res, context[29], context[30] );
    res = refalrts::splice_evar( res, context[27], context[28] );
    res = refalrts::splice_elem( res, context[26] );
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
      // </21 & DoCheckExprPairForRelation@3$2?1/25 # True/26 >/22
      context[23] = 0;
      context[24] = 0;
      context[25] = refalrts::call_left( context[23], context[24], context[21], context[22] );
      context[26] = refalrts::ident_left( identifiers[ident_True], context[23], context[24] );
      if( ! context[26] )
        continue;
      if( ! refalrts::empty_seq( context[23], context[24] ) )
        continue;
      //DEBUG: t.Inner-FirstTerm: 5
      //DEBUG: e.Inner-Rest: 15
      //DEBUG: e.RestExpr: 17
      //DEBUG: e.Signature: 19

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & DoCheckExprPairForRelation@3/4 t.Inner-FirstTerm/5 (/9 e.Inner-Rest/15 )/10 (/13 e.RestExpr/17 )/14 e.Signature/19 </21 & DoCheckExprPairForRelation@3$2?1/25 # True/26 >/22 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: # True/1 ]] }
      refalrts::reinit_ident(context[1], identifiers[ident_True]);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    refalrts::splice_to_freelist(vm, context[21], context[22]);
    continue;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoCheckExprPairForRelation@3/4 t.Inner-FirstTerm/5 (/9 e.Inner-Rest/15 )/10 (/13 e.RestExpr/17 )/14 e.Signature/19 >/1
    context[15] = context[7];
    context[16] = context[8];
    context[17] = context[11];
    context[18] = context[12];
    context[19] = context[2];
    context[20] = context[3];
    // closed e.Inner-Rest as range 15
    // closed e.RestExpr as range 17
    // closed e.Signature as range 19
    //DEBUG: t.Inner-FirstTerm: 5
    //DEBUG: e.Inner-Rest: 15
    //DEBUG: e.RestExpr: 17
    //DEBUG: e.Signature: 19
    //5: t.Inner-FirstTerm
    //15: e.Inner-Rest
    //17: e.RestExpr
    //19: e.Signature
    //26: t.Inner-FirstTerm
    //27: e.Signature

    refalrts::reset_allocator(vm);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::alloc_open_call(vm, context[21]);
    refalrts::alloc_name(vm, context[23], functions[efunc_gen_DoCheckExprPairForRelation_Z3S3C1]);
    refalrts::alloc_open_call(vm, context[24]);
    refalrts::alloc_name(vm, context[25], functions[efunc_gen_PartiallyContainsSignature_Z1]);
    refalrts::copy_stvar(vm, context[26], context[5]);
    refalrts::copy_evar(vm, context[27], context[28], context[19], context[20]);
    refalrts::alloc_close_call(vm, context[29]);
    refalrts::alloc_close_call(vm, context[22]);
    refalrts::push_stack( vm, context[22] );
    refalrts::push_stack( vm, context[21] );
    res = refalrts::splice_elem( res, context[22] );
    refalrts::push_stack( vm, context[29] );
    refalrts::push_stack( vm, context[24] );
    res = refalrts::splice_elem( res, context[29] );
    res = refalrts::splice_evar( res, context[27], context[28] );
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
      // </21 & DoCheckExprPairForRelation@3$3?1/25 # True/26 e.HistorySignature-Rest/23 >/22
      context[23] = 0;
      context[24] = 0;
      context[25] = refalrts::call_left( context[23], context[24], context[21], context[22] );
      context[26] = refalrts::ident_left( identifiers[ident_True], context[23], context[24] );
      if( ! context[26] )
        continue;
      // closed e.HistorySignature-Rest as range 23
      //DEBUG: t.Inner-FirstTerm: 5
      //DEBUG: e.Inner-Rest: 15
      //DEBUG: e.RestExpr: 17
      //DEBUG: e.Signature: 19
      //DEBUG: e.HistorySignature-Rest: 23
      //5: t.Inner-FirstTerm
      //15: e.Inner-Rest
      //17: e.RestExpr
      //19: e.Signature
      //23: e.HistorySignature-Rest
      //33: e.Inner-Rest
      //35: e.RestExpr
      //38: e.HistorySignature-Rest

      refalrts::reset_allocator(vm);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::alloc_open_call(vm, context[27]);
      refalrts::alloc_name(vm, context[29], functions[efunc_gen_DoCheckExprPairForRelation_Z3S3C2]);
      refalrts::alloc_open_call(vm, context[30]);
      refalrts::alloc_name(vm, context[31], functions[efunc_ContainsSignature]);
      refalrts::alloc_open_bracket(vm, context[32]);
      refalrts::copy_evar(vm, context[33], context[34], context[15], context[16]);
      refalrts::copy_evar(vm, context[35], context[36], context[17], context[18]);
      refalrts::alloc_close_bracket(vm, context[37]);
      refalrts::copy_evar(vm, context[38], context[39], context[23], context[24]);
      refalrts::alloc_close_call(vm, context[40]);
      refalrts::alloc_close_call(vm, context[28]);
      refalrts::push_stack( vm, context[28] );
      refalrts::push_stack( vm, context[27] );
      res = refalrts::splice_elem( res, context[28] );
      refalrts::push_stack( vm, context[40] );
      refalrts::push_stack( vm, context[30] );
      res = refalrts::splice_elem( res, context[40] );
      res = refalrts::splice_evar( res, context[38], context[39] );
      refalrts::link_brackets( context[32], context[37] );
      res = refalrts::splice_elem( res, context[37] );
      res = refalrts::splice_evar( res, context[35], context[36] );
      res = refalrts::splice_evar( res, context[33], context[34] );
      res = refalrts::splice_elem( res, context[32] );
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
        // </27 & DoCheckExprPairForRelation@3$3?2/31 # True/32 >/28
        context[29] = 0;
        context[30] = 0;
        context[31] = refalrts::call_left( context[29], context[30], context[27], context[28] );
        context[32] = refalrts::ident_left( identifiers[ident_True], context[29], context[30] );
        if( ! context[32] )
          continue;
        if( ! refalrts::empty_seq( context[29], context[30] ) )
          continue;
        //DEBUG: t.Inner-FirstTerm: 5
        //DEBUG: e.Inner-Rest: 15
        //DEBUG: e.RestExpr: 17
        //DEBUG: e.Signature: 19
        //DEBUG: e.HistorySignature-Rest: 23

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 & DoCheckExprPairForRelation@3/4 t.Inner-FirstTerm/5 (/9 e.Inner-Rest/15 )/10 (/13 e.RestExpr/17 )/14 e.Signature/19 </21 & DoCheckExprPairForRelation@3$3?1/25 # True/26 e.HistorySignature-Rest/23 >/22 </27 & DoCheckExprPairForRelation@3$3?2/31 # True/32 >/28 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: # True/1 ]] }
        refalrts::reinit_ident(context[1], identifiers[ident_True]);
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      refalrts::splice_to_freelist(vm, context[27], context[28]);
      continue;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    refalrts::splice_to_freelist(vm, context[21], context[22]);
    continue;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoCheckExprPairForRelation@3/4 t.Inner-FirstTerm/5 (/9 e.Inner-Rest/15 )/10 (/13 e.RestExpr/17 )/14 e.Signature/19 >/1
    context[15] = context[7];
    context[16] = context[8];
    context[17] = context[11];
    context[18] = context[12];
    context[19] = context[2];
    context[20] = context[3];
    // closed e.Inner-Rest as range 15
    // closed e.RestExpr as range 17
    // closed e.Signature as range 19
    //DEBUG: t.Inner-FirstTerm: 5
    //DEBUG: e.Inner-Rest: 15
    //DEBUG: e.RestExpr: 17
    //DEBUG: e.Signature: 19

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & DoCheckExprPairForRelation@3/4 t.Inner-FirstTerm/5 (/9 e.Inner-Rest/15 )/10 (/13 e.RestExpr/17 )/14 e.Signature/19 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # False/1 ]] }
    refalrts::reinit_ident(context[1], identifiers[ident_False]);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoCheckExprPairForRelation@3/4 t.Inner-FirstTerm/5 (/9 e.Inner-Rest/7 )/10 (/13 e.RestExpr/11 )/14 e.Signature/2 >/1
  // closed e.Inner-Rest as range 7
  // closed e.RestExpr as range 11
  // closed e.Signature as range 2
  //DEBUG: t.Inner-FirstTerm: 5
  //DEBUG: e.Inner-Rest: 7
  //DEBUG: e.RestExpr: 11
  //DEBUG: e.Signature: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoCheckExprPairForRelation@0/4 } Tile{ AsIs: (/9 } Tile{ AsIs: t.Inner-FirstTerm/5 } Tile{ AsIs: )/10 AsIs: (/13 } Tile{ AsIs: e.Inner-Rest/7 } Tile{ AsIs: e.RestExpr/11 } Tile{ AsIs: )/14 AsIs: e.Signature/2 AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_gen_DoCheckExprPairForRelation_Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[13], context[14] );
  refalrts::link_brackets( context[9], context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[14];
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_evar( res, context[10], context[13] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_elem( res, context[9] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoCheckExprPairForRelation_Z3("DoCheckExprPairForRelation@3", COOKIE1_, COOKIE2_, func_gen_DoCheckExprPairForRelation_Z3);


static refalrts::FnResult func_gen_DoCheckExprPairForRelation_Z4(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 31 elems
  refalrts::Iter context[31];
  refalrts::zeros( context, 31 );
  // </0 & DoCheckExprPairForRelation@4/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & DoCheckExprPairForRelation@4/4 (/7 e.new1/5 )/8 e.new2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new1 as range 5
  // closed e.new2 as range 2
  do {
    // </0 & DoCheckExprPairForRelation@4/4 (/7 e.RestExpr/9 )/8 e.Signature/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    // closed e.RestExpr as range 9
    // closed e.Signature as range 11
    //DEBUG: e.RestExpr: 9
    //DEBUG: e.Signature: 11
    //9: e.RestExpr
    //11: e.Signature
    //20: e.Signature

    refalrts::reset_allocator(vm);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::alloc_open_call(vm, context[13]);
    refalrts::alloc_name(vm, context[15], functions[efunc_gen_DoCheckExprPairForRelation_Z4S1C1]);
    refalrts::alloc_open_call(vm, context[16]);
    refalrts::alloc_name(vm, context[17], functions[efunc_ContainsSignature]);
    refalrts::alloc_open_bracket(vm, context[18]);
    refalrts::alloc_close_bracket(vm, context[19]);
    refalrts::copy_evar(vm, context[20], context[21], context[11], context[12]);
    refalrts::alloc_close_call(vm, context[22]);
    refalrts::alloc_close_call(vm, context[14]);
    refalrts::push_stack( vm, context[14] );
    refalrts::push_stack( vm, context[13] );
    res = refalrts::splice_elem( res, context[14] );
    refalrts::push_stack( vm, context[22] );
    refalrts::push_stack( vm, context[16] );
    res = refalrts::splice_elem( res, context[22] );
    res = refalrts::splice_evar( res, context[20], context[21] );
    refalrts::link_brackets( context[18], context[19] );
    res = refalrts::splice_elem( res, context[19] );
    res = refalrts::splice_elem( res, context[18] );
    res = refalrts::splice_elem( res, context[17] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_elem( res, context[15] );
    res = refalrts::splice_elem( res, context[13] );
    refalrts::use( res );
    refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
    if (rec_res != refalrts::cSuccess)
      return rec_res;
    refalrts::this_is_generated_function(vm);
    do {
      // </13 & DoCheckExprPairForRelation@4$1?1/17 # True/18 >/14
      context[15] = 0;
      context[16] = 0;
      context[17] = refalrts::call_left( context[15], context[16], context[13], context[14] );
      context[18] = refalrts::ident_left( identifiers[ident_True], context[15], context[16] );
      if( ! context[18] )
        continue;
      if( ! refalrts::empty_seq( context[15], context[16] ) )
        continue;
      //DEBUG: e.RestExpr: 9
      //DEBUG: e.Signature: 11

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & DoCheckExprPairForRelation@4/4 (/7 e.RestExpr/9 )/8 e.Signature/11 </13 & DoCheckExprPairForRelation@4$1?1/17 # True/18 >/14 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: # True/1 ]] }
      refalrts::reinit_ident(context[1], identifiers[ident_True]);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    refalrts::splice_to_freelist(vm, context[13], context[14]);
    continue;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoCheckExprPairForRelation@4/4 (/7 e.RestExpr/9 )/8 e.Signature/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    // closed e.RestExpr as range 9
    // closed e.Signature as range 11
    //DEBUG: e.RestExpr: 9
    //DEBUG: e.Signature: 11
    //9: e.RestExpr
    //11: e.Signature
    //19: e.RestExpr
    //22: e.Signature

    refalrts::reset_allocator(vm);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::alloc_open_call(vm, context[13]);
    refalrts::alloc_name(vm, context[15], functions[efunc_gen_DoCheckExprPairForRelation_Z4S2C1]);
    refalrts::alloc_open_call(vm, context[16]);
    refalrts::alloc_name(vm, context[17], functions[efunc_ContainsSignature]);
    refalrts::alloc_open_bracket(vm, context[18]);
    refalrts::copy_evar(vm, context[19], context[20], context[9], context[10]);
    refalrts::alloc_close_bracket(vm, context[21]);
    refalrts::copy_evar(vm, context[22], context[23], context[11], context[12]);
    refalrts::alloc_close_call(vm, context[24]);
    refalrts::alloc_close_call(vm, context[14]);
    refalrts::push_stack( vm, context[14] );
    refalrts::push_stack( vm, context[13] );
    res = refalrts::splice_elem( res, context[14] );
    refalrts::push_stack( vm, context[24] );
    refalrts::push_stack( vm, context[16] );
    res = refalrts::splice_elem( res, context[24] );
    res = refalrts::splice_evar( res, context[22], context[23] );
    refalrts::link_brackets( context[18], context[21] );
    res = refalrts::splice_elem( res, context[21] );
    res = refalrts::splice_evar( res, context[19], context[20] );
    res = refalrts::splice_elem( res, context[18] );
    res = refalrts::splice_elem( res, context[17] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_elem( res, context[15] );
    res = refalrts::splice_elem( res, context[13] );
    refalrts::use( res );
    refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
    if (rec_res != refalrts::cSuccess)
      return rec_res;
    refalrts::this_is_generated_function(vm);
    do {
      // </13 & DoCheckExprPairForRelation@4$2?1/17 # True/18 >/14
      context[15] = 0;
      context[16] = 0;
      context[17] = refalrts::call_left( context[15], context[16], context[13], context[14] );
      context[18] = refalrts::ident_left( identifiers[ident_True], context[15], context[16] );
      if( ! context[18] )
        continue;
      if( ! refalrts::empty_seq( context[15], context[16] ) )
        continue;
      //DEBUG: e.RestExpr: 9
      //DEBUG: e.Signature: 11

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & DoCheckExprPairForRelation@4/4 (/7 e.RestExpr/9 )/8 e.Signature/11 </13 & DoCheckExprPairForRelation@4$2?1/17 # True/18 >/14 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: # True/1 ]] }
      refalrts::reinit_ident(context[1], identifiers[ident_True]);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    refalrts::splice_to_freelist(vm, context[13], context[14]);
    continue;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoCheckExprPairForRelation@4/4 (/7 e.RestExpr/9 )/8 e.Signature/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    // closed e.RestExpr as range 9
    // closed e.Signature as range 11
    //DEBUG: e.RestExpr: 9
    //DEBUG: e.Signature: 11
    //9: e.RestExpr
    //11: e.Signature
    //18: e.Signature

    refalrts::reset_allocator(vm);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::alloc_open_call(vm, context[13]);
    refalrts::alloc_name(vm, context[15], functions[efunc_gen_DoCheckExprPairForRelation_Z4S3C1]);
    refalrts::alloc_open_call(vm, context[16]);
    refalrts::alloc_name(vm, context[17], functions[efunc_gen_PartiallyContainsSignature_Z2]);
    refalrts::copy_evar(vm, context[18], context[19], context[11], context[12]);
    refalrts::alloc_close_call(vm, context[20]);
    refalrts::alloc_close_call(vm, context[14]);
    refalrts::push_stack( vm, context[14] );
    refalrts::push_stack( vm, context[13] );
    res = refalrts::splice_elem( res, context[14] );
    refalrts::push_stack( vm, context[20] );
    refalrts::push_stack( vm, context[16] );
    res = refalrts::splice_elem( res, context[20] );
    res = refalrts::splice_evar( res, context[18], context[19] );
    res = refalrts::splice_elem( res, context[17] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_elem( res, context[15] );
    res = refalrts::splice_elem( res, context[13] );
    refalrts::use( res );
    refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
    if (rec_res != refalrts::cSuccess)
      return rec_res;
    refalrts::this_is_generated_function(vm);
    do {
      // </13 & DoCheckExprPairForRelation@4$3?1/17 # True/18 e.HistorySignature-Rest/15 >/14
      context[15] = 0;
      context[16] = 0;
      context[17] = refalrts::call_left( context[15], context[16], context[13], context[14] );
      context[18] = refalrts::ident_left( identifiers[ident_True], context[15], context[16] );
      if( ! context[18] )
        continue;
      // closed e.HistorySignature-Rest as range 15
      //DEBUG: e.RestExpr: 9
      //DEBUG: e.Signature: 11
      //DEBUG: e.HistorySignature-Rest: 15
      //9: e.RestExpr
      //11: e.Signature
      //15: e.HistorySignature-Rest
      //25: e.RestExpr
      //28: e.HistorySignature-Rest

      refalrts::reset_allocator(vm);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::alloc_open_call(vm, context[19]);
      refalrts::alloc_name(vm, context[21], functions[efunc_gen_DoCheckExprPairForRelation_Z4S3C2]);
      refalrts::alloc_open_call(vm, context[22]);
      refalrts::alloc_name(vm, context[23], functions[efunc_ContainsSignature]);
      refalrts::alloc_open_bracket(vm, context[24]);
      refalrts::copy_evar(vm, context[25], context[26], context[9], context[10]);
      refalrts::alloc_close_bracket(vm, context[27]);
      refalrts::copy_evar(vm, context[28], context[29], context[15], context[16]);
      refalrts::alloc_close_call(vm, context[30]);
      refalrts::alloc_close_call(vm, context[20]);
      refalrts::push_stack( vm, context[20] );
      refalrts::push_stack( vm, context[19] );
      res = refalrts::splice_elem( res, context[20] );
      refalrts::push_stack( vm, context[30] );
      refalrts::push_stack( vm, context[22] );
      res = refalrts::splice_elem( res, context[30] );
      res = refalrts::splice_evar( res, context[28], context[29] );
      refalrts::link_brackets( context[24], context[27] );
      res = refalrts::splice_elem( res, context[27] );
      res = refalrts::splice_evar( res, context[25], context[26] );
      res = refalrts::splice_elem( res, context[24] );
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
        // </19 & DoCheckExprPairForRelation@4$3?2/23 # True/24 >/20
        context[21] = 0;
        context[22] = 0;
        context[23] = refalrts::call_left( context[21], context[22], context[19], context[20] );
        context[24] = refalrts::ident_left( identifiers[ident_True], context[21], context[22] );
        if( ! context[24] )
          continue;
        if( ! refalrts::empty_seq( context[21], context[22] ) )
          continue;
        //DEBUG: e.RestExpr: 9
        //DEBUG: e.Signature: 11
        //DEBUG: e.HistorySignature-Rest: 15

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 & DoCheckExprPairForRelation@4/4 (/7 e.RestExpr/9 )/8 e.Signature/11 </13 & DoCheckExprPairForRelation@4$3?1/17 # True/18 e.HistorySignature-Rest/15 >/14 </19 & DoCheckExprPairForRelation@4$3?2/23 # True/24 >/20 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: # True/1 ]] }
        refalrts::reinit_ident(context[1], identifiers[ident_True]);
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      refalrts::splice_to_freelist(vm, context[19], context[20]);
      continue;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    refalrts::splice_to_freelist(vm, context[13], context[14]);
    continue;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoCheckExprPairForRelation@4/4 (/7 e.RestExpr/9 )/8 e.Signature/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    // closed e.RestExpr as range 9
    // closed e.Signature as range 11
    //DEBUG: e.RestExpr: 9
    //DEBUG: e.Signature: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & DoCheckExprPairForRelation@4/4 (/7 e.RestExpr/9 )/8 e.Signature/11 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # False/1 ]] }
    refalrts::reinit_ident(context[1], identifiers[ident_False]);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoCheckExprPairForRelation@4/4 (/7 e.RestExpr/5 )/8 e.Signature/2 >/1
  // closed e.RestExpr as range 5
  // closed e.Signature as range 2
  //DEBUG: e.RestExpr: 5
  //DEBUG: e.Signature: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </9 & DoCheckExprPairForRelation@0/10 Tile{ HalfReuse: (/0 HalfReuse: )/4 AsIs: (/7 AsIs: e.RestExpr/5 AsIs: )/8 AsIs: e.Signature/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[9]);
  refalrts::alloc_name(vm, context[10], functions[efunc_gen_DoCheckExprPairForRelation_Z0]);
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_close_bracket(context[4]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[9] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[0], context[4] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoCheckExprPairForRelation_Z4("DoCheckExprPairForRelation@4", COOKIE1_, COOKIE2_, func_gen_DoCheckExprPairForRelation_Z4);


static refalrts::FnResult func_gen_Map_Z1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
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
      // </0 & Map@1/4 (/7 # Var/13 s.Mode/14 e.1/11 )/8 e.Tail/9 >/1
      context[9] = context[5];
      context[10] = context[6];
      context[11] = 0;
      context[12] = 0;
      if( ! refalrts::brackets_term( context[11], context[12], context[7] ) )
        continue;
      context[13] = refalrts::ident_left( identifiers[ident_Var], context[11], context[12] );
      if( ! context[13] )
        continue;
      // closed e.Tail as range 9
      if( ! refalrts::svar_left( context[14], context[11], context[12] ) )
        continue;
      // closed e.1 as range 11
      //DEBUG: e.Tail: 9
      //DEBUG: s.Mode: 14
      //DEBUG: e.1: 11

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.1/11 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # Var/13 AsIs: s.Mode/14 } Tile{ HalfReuse: )/4 } Tile{ AsIs: </0 } Tile{ HalfReuse: & Map@1/8 AsIs: e.Tail/9 AsIs: >/1 ]] }
      refalrts::reinit_close_bracket(context[4]);
      refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z1]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[4] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_elem( res, context[0] );
      res = refalrts::splice_elem( res, context[4] );
      res = refalrts::splice_evar( res, context[7], context[14] );
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
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & CanonizeExpr-Term*1/4 AsIs: t.Next/7 } >/11 </12 & Map@1/13 Tile{ AsIs: e.Tail/9 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_close_call(vm, context[11]);
    refalrts::alloc_open_call(vm, context[12]);
    refalrts::alloc_name(vm, context[13], functions[efunc_gen_Map_Z1]);
    refalrts::update_name(context[4], functions[efunc_gen_CanonizeExprm_Term_D1]);
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
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Map@0/0 Reuse: & CanonizeExpr-Term@0/4 AsIs: e.items/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::reinit_name(context[0], functions[efunc_gen_Map_Z0]);
  refalrts::update_name(context[4], functions[efunc_gen_CanonizeExprm_Term_Z0]);
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
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
  // </0 & Map@2/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  do {
    // </0 & Map@2/4 t.new1/7 e.new2/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[8] = refalrts::tvar_left( context[7], context[5], context[6] );
    if( ! context[8] )
      continue;
    // closed e.new2 as range 5
    do {
      // </0 & Map@2/4 (/7 e./11 )/8 e.Tail/9 >/1
      context[9] = context[5];
      context[10] = context[6];
      context[11] = 0;
      context[12] = 0;
      if( ! refalrts::brackets_term( context[11], context[12], context[7] ) )
        continue;
      // closed e. as range 11
      // closed e.Tail as range 9
      //DEBUG: e.: 11
      //DEBUG: e.Tail: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: </4 HalfReuse: & Map@1/7 AsIs: e./11 HalfReuse: >/8 } )/13 </14 & Map@2/15 Tile{ AsIs: e.Tail/9 } Tile{ AsIs: >/1 ]] }
      refalrts::alloc_close_bracket(vm, context[13]);
      refalrts::alloc_open_call(vm, context[14]);
      refalrts::alloc_name(vm, context[15], functions[efunc_gen_Map_Z2]);
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_open_call(context[4]);
      refalrts::reinit_name(context[7], functions[efunc_gen_Map_Z1]);
      refalrts::reinit_close_call(context[8]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[14] );
      refalrts::link_brackets( context[0], context[13] );
      refalrts::push_stack( vm, context[8] );
      refalrts::push_stack( vm, context[4] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[9], context[10] );
      res = refalrts::splice_evar( res, context[13], context[15] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Map@2/4 t.Next/7 e.Tail/9 >/1
    context[9] = context[5];
    context[10] = context[6];
    // closed e.Tail as range 9
    //DEBUG: t.Next: 7
    //DEBUG: e.Tail: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & OptTree-CanonizeTuple\1*1/4 AsIs: t.Next/7 } >/11 </12 & Map@2/13 Tile{ AsIs: e.Tail/9 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_close_call(vm, context[11]);
    refalrts::alloc_open_call(vm, context[12]);
    refalrts::alloc_name(vm, context[13], functions[efunc_gen_Map_Z2]);
    refalrts::update_name(context[4], functions[efunc_gen_OptTreem_CanonizeTuple_L1D1]);
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

  // </0 & Map@2/4 e.items/2 >/1
  // closed e.items as range 2
  //DEBUG: e.items: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Map@0/0 Reuse: & OptTree-CanonizeTuple\1@0/4 AsIs: e.items/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::reinit_name(context[0], functions[efunc_gen_Map_Z0]);
  refalrts::update_name(context[4], functions[efunc_gen_OptTreem_CanonizeTuple_L1Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_elem( res, context[5] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Map_Z2("Map@2", COOKIE1_, COOKIE2_, func_gen_Map_Z2);


static refalrts::FnResult func_gen_CanonizeExprm_Term_D1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
  // </0 & CanonizeExpr-Term*1/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & CanonizeExpr-Term*1/4 t.new1/5 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & CanonizeExpr-Term*1/4 (/5 s.new2/9 e.new3/7 )/6 >/1
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
      continue;
    if( ! refalrts::svar_left( context[9], context[7], context[8] ) )
      continue;
    // closed e.new3 as range 7
    do {
      // </0 & CanonizeExpr-Term*1/4 (/5 s.BracketsTag/9 e.Expr/10 )/6 >/1
      context[10] = context[7];
      context[11] = context[8];
      // closed e.Expr as range 10
      //DEBUG: s.BracketsTag: 9
      //DEBUG: e.Expr: 10
      //9: s.BracketsTag
      //10: e.Expr
      //17: s.BracketsTag

      refalrts::reset_allocator(vm);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::alloc_open_call(vm, context[12]);
      refalrts::alloc_name(vm, context[14], functions[efunc_gen_CanonizeExprm_Term_D1S2C1]);
      refalrts::alloc_open_call(vm, context[15]);
      refalrts::alloc_name(vm, context[16], functions[efunc_OneOf]);
      refalrts::copy_stvar(vm, context[17], context[9]);
      refalrts::alloc_ident(vm, context[18], identifiers[ident_CallBrackets]);
      refalrts::alloc_ident(vm, context[19], identifiers[ident_ClosureBrackets]);
      refalrts::alloc_ident(vm, context[20], identifiers[ident_Brackets]);
      refalrts::alloc_close_call(vm, context[21]);
      refalrts::alloc_close_call(vm, context[13]);
      refalrts::push_stack( vm, context[13] );
      refalrts::push_stack( vm, context[12] );
      res = refalrts::splice_elem( res, context[13] );
      refalrts::push_stack( vm, context[21] );
      refalrts::push_stack( vm, context[15] );
      res = refalrts::splice_elem( res, context[21] );
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
        // </12 & CanonizeExpr-Term*1$2?1/16 # True/17 >/13
        context[14] = 0;
        context[15] = 0;
        context[16] = refalrts::call_left( context[14], context[15], context[12], context[13] );
        context[17] = refalrts::ident_left( identifiers[ident_True], context[14], context[15] );
        if( ! context[17] )
          continue;
        if( ! refalrts::empty_seq( context[14], context[15] ) )
          continue;
        //DEBUG: s.BracketsTag: 9
        //DEBUG: e.Expr: 10

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} s.BracketsTag/9 {REMOVED TILE} )/6 {REMOVED TILE} # True/17 {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & CanonizeExpr-Term$2=2/4 HalfReuse: s.BracketsTag9 /5 } Tile{ AsIs: </12 Reuse: & OptTree-CanonizeExpr/16 } Tile{ AsIs: e.Expr/10 } Tile{ AsIs: >/13 AsIs: >/1 ]] }
        refalrts::update_name(context[4], functions[efunc_gen_CanonizeExprm_Term_S2A2]);
        refalrts::reinit_svar( context[5], context[9] );
        refalrts::update_name(context[16], functions[efunc_OptTreem_CanonizeExpr]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::push_stack( vm, context[13] );
        refalrts::push_stack( vm, context[12] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[13];
        res = refalrts::splice_evar( res, context[10], context[11] );
        res = refalrts::splice_evar( res, context[12], context[16] );
        refalrts::splice_to_freelist_open( vm, context[5], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      refalrts::splice_to_freelist(vm, context[12], context[13]);
      continue;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & CanonizeExpr-Term*1/4 (/5 s.new4/9 t.new5/12 e.new6/10 )/6 >/1
    context[10] = context[7];
    context[11] = context[8];
    context[13] = refalrts::tvar_left( context[12], context[10], context[11] );
    if( ! context[13] )
      continue;
    // closed e.new6 as range 10
    do {
      // </0 & CanonizeExpr-Term*1/4 (/5 # ADT-Brackets/9 (/12 e.Name/16 )/13 e.Expr/14 )/6 >/1
      context[14] = context[10];
      context[15] = context[11];
      context[16] = 0;
      context[17] = 0;
      if( ! refalrts::brackets_term( context[16], context[17], context[12] ) )
        continue;
      if( ! refalrts::ident_term( identifiers[ident_ADTm_Brackets], context[9] ) )
        continue;
      // closed e.Name as range 16
      // closed e.Expr as range 14
      //DEBUG: e.Name: 16
      //DEBUG: e.Expr: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: </5 HalfReuse: & CanonizeExpr-Term$3=1/9 AsIs: (/12 AsIs: e.Name/16 AsIs: )/13 } Tile{ AsIs: </0 Reuse: & Map@1/4 } Tile{ AsIs: e.Expr/14 } Tile{ HalfReuse: >/6 AsIs: >/1 ]] }
      refalrts::reinit_open_call(context[5]);
      refalrts::reinit_name(context[9], functions[efunc_gen_CanonizeExprm_Term_S3A1]);
      refalrts::update_name(context[4], functions[efunc_gen_Map_Z1]);
      refalrts::reinit_close_call(context[6]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[5] );
      refalrts::push_stack( vm, context[6] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[12], context[13] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[6];
      res = refalrts::splice_evar( res, context[14], context[15] );
      res = refalrts::splice_evar( res, context[0], context[4] );
      res = refalrts::splice_evar( res, context[5], context[13] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & CanonizeExpr-Term*1/4 (/5 # Symbol/9 # Number/12 s._/16 )/6 >/1
    context[14] = context[10];
    context[15] = context[11];
    if( ! refalrts::ident_term( identifiers[ident_Number], context[12] ) )
      continue;
    if( ! refalrts::ident_term( identifiers[ident_Symbol], context[9] ) )
      continue;
    if( ! refalrts::svar_left( context[16], context[14], context[15] ) )
      continue;
    if( ! refalrts::empty_seq( context[14], context[15] ) )
      continue;
    //DEBUG: s._: 16

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & CanonizeExpr-Term*1/4 {REMOVED TILE} s._/16 )/6 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/5 AsIs: # Symbol/9 AsIs: # Number/12 } Tile{ HalfReuse: )/1 ]] }
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[5], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[5], context[12] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & CanonizeExpr-Term*1/4 t.OtherTerm/5 >/1
  //DEBUG: t.OtherTerm: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & CanonizeExpr-Term*1/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.OtherTerm/5 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_CanonizeExprm_Term_D1("CanonizeExpr-Term*1", COOKIE1_, COOKIE2_, func_gen_CanonizeExprm_Term_D1);


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


static refalrts::FnResult func_gen_PartiallyContainsSignature_Z1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 34 elems
  refalrts::Iter context[34];
  refalrts::zeros( context, 34 );
  // </0 & PartiallyContainsSignature@1/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & PartiallyContainsSignature@1/4 t.new1/5 e.new2/2 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  // closed e.new2 as range 2
  do {
    // </0 & PartiallyContainsSignature@1/4 t.Term/5 e.Signature/7 >/1
    context[7] = context[2];
    context[8] = context[3];
    // closed e.Signature as range 7
    //DEBUG: t.Term: 5
    //DEBUG: e.Signature: 7
    //5: t.Term
    //7: e.Signature
    //12: e.Signature

    refalrts::reset_allocator(vm);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::alloc_open_call(vm, context[9]);
    refalrts::alloc_name(vm, context[11], functions[efunc_gen_PartiallyContainsSignature_Z1S1C1]);
    refalrts::copy_evar(vm, context[12], context[13], context[7], context[8]);
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
      // </9 & PartiallyContainsSignature@1$1?1/13 >/10
      context[11] = 0;
      context[12] = 0;
      context[13] = refalrts::call_left( context[11], context[12], context[9], context[10] );
      if( ! refalrts::empty_seq( context[11], context[12] ) )
        continue;
      //DEBUG: t.Term: 5
      //DEBUG: e.Signature: 7

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & PartiallyContainsSignature@1/4 t.Term/5 e.Signature/7 </9 & PartiallyContainsSignature@1$1?1/13 >/10 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: # False/1 ]] }
      refalrts::reinit_ident(context[1], identifiers[ident_False]);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    refalrts::splice_to_freelist(vm, context[9], context[10]);
    continue;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & PartiallyContainsSignature@1/4 t.Term/5 e.Signature/7 >/1
    context[7] = context[2];
    context[8] = context[3];
    // closed e.Signature as range 7
    //DEBUG: t.Term: 5
    //DEBUG: e.Signature: 7
    //5: t.Term
    //7: e.Signature
    //12: e.Signature

    refalrts::reset_allocator(vm);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::alloc_open_call(vm, context[9]);
    refalrts::alloc_name(vm, context[11], functions[efunc_gen_PartiallyContainsSignature_Z1S2C1]);
    refalrts::copy_evar(vm, context[12], context[13], context[7], context[8]);
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
      // </9 & PartiallyContainsSignature@1$2?1/13 e.Signature-Part/11 t.LastTerm/14 >/10
      context[11] = 0;
      context[12] = 0;
      context[13] = refalrts::call_left( context[11], context[12], context[9], context[10] );
      context[15] = refalrts::tvar_right( context[14], context[11], context[12] );
      if( ! context[15] )
        continue;
      // closed e.Signature-Part as range 11
      //DEBUG: t.Term: 5
      //DEBUG: e.Signature: 7
      //DEBUG: t.LastTerm: 14
      //DEBUG: e.Signature-Part: 11
      //5: t.Term
      //7: e.Signature
      //11: e.Signature-Part
      //14: t.LastTerm
      //19: e.Signature-Part

      refalrts::reset_allocator(vm);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::alloc_open_call(vm, context[16]);
      refalrts::alloc_name(vm, context[18], functions[efunc_gen_PartiallyContainsSignature_Z1S2C2]);
      refalrts::copy_evar(vm, context[19], context[20], context[11], context[12]);
      refalrts::alloc_close_call(vm, context[17]);
      refalrts::push_stack( vm, context[17] );
      refalrts::push_stack( vm, context[16] );
      res = refalrts::splice_elem( res, context[17] );
      res = refalrts::splice_evar( res, context[19], context[20] );
      res = refalrts::splice_elem( res, context[18] );
      res = refalrts::splice_elem( res, context[16] );
      refalrts::use( res );
      refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
      if (rec_res != refalrts::cSuccess)
        return rec_res;
      refalrts::this_is_generated_function(vm);
      do {
        // </16 & PartiallyContainsSignature@1$2?2/20 t.FirstTerm/21 e.OtherPart/18 >/17
        context[18] = 0;
        context[19] = 0;
        context[20] = refalrts::call_left( context[18], context[19], context[16], context[17] );
        context[22] = refalrts::tvar_left( context[21], context[18], context[19] );
        if( ! context[22] )
          continue;
        // closed e.OtherPart as range 18
        //DEBUG: t.Term: 5
        //DEBUG: e.Signature: 7
        //DEBUG: t.LastTerm: 14
        //DEBUG: e.Signature-Part: 11
        //DEBUG: t.FirstTerm: 21
        //DEBUG: e.OtherPart: 18
        //5: t.Term
        //7: e.Signature
        //11: e.Signature-Part
        //14: t.LastTerm
        //18: e.OtherPart
        //21: t.FirstTerm
        //29: t.Term
        //31: e.Signature-Part

        refalrts::reset_allocator(vm);
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        refalrts::alloc_open_call(vm, context[23]);
        refalrts::alloc_name(vm, context[25], functions[efunc_gen_PartiallyContainsSignature_Z1S2C3]);
        refalrts::alloc_open_call(vm, context[26]);
        refalrts::alloc_name(vm, context[27], functions[efunc_ContainsSignature]);
        refalrts::alloc_open_bracket(vm, context[28]);
        refalrts::copy_stvar(vm, context[29], context[5]);
        refalrts::alloc_close_bracket(vm, context[30]);
        refalrts::copy_evar(vm, context[31], context[32], context[11], context[12]);
        refalrts::alloc_close_call(vm, context[33]);
        refalrts::alloc_close_call(vm, context[24]);
        refalrts::push_stack( vm, context[24] );
        refalrts::push_stack( vm, context[23] );
        res = refalrts::splice_elem( res, context[24] );
        refalrts::push_stack( vm, context[33] );
        refalrts::push_stack( vm, context[26] );
        res = refalrts::splice_elem( res, context[33] );
        res = refalrts::splice_evar( res, context[31], context[32] );
        refalrts::link_brackets( context[28], context[30] );
        res = refalrts::splice_elem( res, context[30] );
        res = refalrts::splice_stvar( res, context[29] );
        res = refalrts::splice_elem( res, context[28] );
        res = refalrts::splice_elem( res, context[27] );
        res = refalrts::splice_elem( res, context[26] );
        res = refalrts::splice_elem( res, context[25] );
        res = refalrts::splice_elem( res, context[23] );
        refalrts::use( res );
        refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
        if (rec_res != refalrts::cSuccess)
          return rec_res;
        refalrts::this_is_generated_function(vm);
        do {
          // </23 & PartiallyContainsSignature@1$2?3/27 # True/28 >/24
          context[25] = 0;
          context[26] = 0;
          context[27] = refalrts::call_left( context[25], context[26], context[23], context[24] );
          context[28] = refalrts::ident_left( identifiers[ident_True], context[25], context[26] );
          if( ! context[28] )
            continue;
          if( ! refalrts::empty_seq( context[25], context[26] ) )
            continue;
          //DEBUG: t.Term: 5
          //DEBUG: e.Signature: 7
          //DEBUG: t.LastTerm: 14
          //DEBUG: e.Signature-Part: 11
          //DEBUG: t.FirstTerm: 21
          //DEBUG: e.OtherPart: 18

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} & PartiallyContainsSignature@1/4 t.Term/5 e.Signature/7 </9 & PartiallyContainsSignature@1$2?1/13 e.Signature-Part/11 {REMOVED TILE} >/10 </16 & PartiallyContainsSignature@1$2?2/20 t.FirstTerm/21 e.OtherPart/18 >/17 </23 & PartiallyContainsSignature@1$2?3/27 # True/28 >/24 >/1 {REMOVED TILE}
          //RESULT: Tile{ [[ HalfReuse: # True/0 } Tile{ AsIs: t.LastTerm/14 } Tile{ ]] }
          refalrts::reinit_ident(context[0], identifiers[ident_True]);
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = arg_end->next;
          res = refalrts::splice_evar( res, context[14], context[15] );
          refalrts::splice_to_freelist_open( vm, context[0], res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        refalrts::splice_to_freelist(vm, context[23], context[24]);
        continue;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      refalrts::splice_to_freelist(vm, context[16], context[17]);
      continue;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    refalrts::splice_to_freelist(vm, context[9], context[10]);
    continue;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & PartiallyContainsSignature@1/4 t.Term/5 e.Signature-Part/7 t.LastTerm/9 >/1
    context[7] = context[2];
    context[8] = context[3];
    context[10] = refalrts::tvar_right( context[9], context[7], context[8] );
    if( ! context[10] )
      continue;
    // closed e.Signature-Part as range 7
    //DEBUG: t.Term: 5
    //DEBUG: t.LastTerm: 9
    //DEBUG: e.Signature-Part: 7

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & PartiallyContainsSignature@1/4 AsIs: t.Term/5 } Tile{ AsIs: e.Signature-Part/7 } Tile{ AsIs: >/1 } Tile{ AsIs: t.LastTerm/9 } Tile{ ]] }
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_elem( res, context[1] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & PartiallyContainsSignature@1/4 t.Term/5 e.dyn1/2 >/1
  // closed e.dyn1 as range 2
  //DEBUG: t.Term: 5
  //DEBUG: e.dyn1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & PartiallyContainsSignature@0/4 } (/7 Tile{ AsIs: t.Term/5 } )/8 Tile{ AsIs: e.dyn1/2 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[7]);
  refalrts::alloc_close_bracket(vm, context[8]);
  refalrts::update_name(context[4], functions[efunc_gen_PartiallyContainsSignature_Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_elem( res, context[8] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_elem( res, context[7] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_PartiallyContainsSignature_Z1("PartiallyContainsSignature@1", COOKIE1_, COOKIE2_, func_gen_PartiallyContainsSignature_Z1);


static refalrts::FnResult func_gen_PartiallyContainsSignature_Z2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 31 elems
  refalrts::Iter context[31];
  refalrts::zeros( context, 31 );
  // </0 & PartiallyContainsSignature@2/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  do {
    // </0 & PartiallyContainsSignature@2/4 e.Signature/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    // closed e.Signature as range 5
    //DEBUG: e.Signature: 5
    //5: e.Signature
    //10: e.Signature

    refalrts::reset_allocator(vm);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::alloc_open_call(vm, context[7]);
    refalrts::alloc_name(vm, context[9], functions[efunc_gen_PartiallyContainsSignature_Z2S1C1]);
    refalrts::copy_evar(vm, context[10], context[11], context[5], context[6]);
    refalrts::alloc_close_call(vm, context[8]);
    refalrts::push_stack( vm, context[8] );
    refalrts::push_stack( vm, context[7] );
    res = refalrts::splice_elem( res, context[8] );
    res = refalrts::splice_evar( res, context[10], context[11] );
    res = refalrts::splice_elem( res, context[9] );
    res = refalrts::splice_elem( res, context[7] );
    refalrts::use( res );
    refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
    if (rec_res != refalrts::cSuccess)
      return rec_res;
    refalrts::this_is_generated_function(vm);
    do {
      // </7 & PartiallyContainsSignature@2$1?1/11 >/8
      context[9] = 0;
      context[10] = 0;
      context[11] = refalrts::call_left( context[9], context[10], context[7], context[8] );
      if( ! refalrts::empty_seq( context[9], context[10] ) )
        continue;
      //DEBUG: e.Signature: 5

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & PartiallyContainsSignature@2/4 e.Signature/5 </7 & PartiallyContainsSignature@2$1?1/11 >/8 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: # False/1 ]] }
      refalrts::reinit_ident(context[1], identifiers[ident_False]);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    refalrts::splice_to_freelist(vm, context[7], context[8]);
    continue;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & PartiallyContainsSignature@2/4 e.Signature/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    // closed e.Signature as range 5
    //DEBUG: e.Signature: 5
    //5: e.Signature
    //10: e.Signature

    refalrts::reset_allocator(vm);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::alloc_open_call(vm, context[7]);
    refalrts::alloc_name(vm, context[9], functions[efunc_gen_PartiallyContainsSignature_Z2S2C1]);
    refalrts::copy_evar(vm, context[10], context[11], context[5], context[6]);
    refalrts::alloc_close_call(vm, context[8]);
    refalrts::push_stack( vm, context[8] );
    refalrts::push_stack( vm, context[7] );
    res = refalrts::splice_elem( res, context[8] );
    res = refalrts::splice_evar( res, context[10], context[11] );
    res = refalrts::splice_elem( res, context[9] );
    res = refalrts::splice_elem( res, context[7] );
    refalrts::use( res );
    refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
    if (rec_res != refalrts::cSuccess)
      return rec_res;
    refalrts::this_is_generated_function(vm);
    do {
      // </7 & PartiallyContainsSignature@2$2?1/11 e.Signature-Part/9 t.LastTerm/12 >/8
      context[9] = 0;
      context[10] = 0;
      context[11] = refalrts::call_left( context[9], context[10], context[7], context[8] );
      context[13] = refalrts::tvar_right( context[12], context[9], context[10] );
      if( ! context[13] )
        continue;
      // closed e.Signature-Part as range 9
      //DEBUG: e.Signature: 5
      //DEBUG: t.LastTerm: 12
      //DEBUG: e.Signature-Part: 9
      //5: e.Signature
      //9: e.Signature-Part
      //12: t.LastTerm
      //17: e.Signature-Part

      refalrts::reset_allocator(vm);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::alloc_open_call(vm, context[14]);
      refalrts::alloc_name(vm, context[16], functions[efunc_gen_PartiallyContainsSignature_Z2S2C2]);
      refalrts::copy_evar(vm, context[17], context[18], context[9], context[10]);
      refalrts::alloc_close_call(vm, context[15]);
      refalrts::push_stack( vm, context[15] );
      refalrts::push_stack( vm, context[14] );
      res = refalrts::splice_elem( res, context[15] );
      res = refalrts::splice_evar( res, context[17], context[18] );
      res = refalrts::splice_elem( res, context[16] );
      res = refalrts::splice_elem( res, context[14] );
      refalrts::use( res );
      refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
      if (rec_res != refalrts::cSuccess)
        return rec_res;
      refalrts::this_is_generated_function(vm);
      do {
        // </14 & PartiallyContainsSignature@2$2?2/18 t.FirstTerm/19 e.OtherPart/16 >/15
        context[16] = 0;
        context[17] = 0;
        context[18] = refalrts::call_left( context[16], context[17], context[14], context[15] );
        context[20] = refalrts::tvar_left( context[19], context[16], context[17] );
        if( ! context[20] )
          continue;
        // closed e.OtherPart as range 16
        //DEBUG: e.Signature: 5
        //DEBUG: t.LastTerm: 12
        //DEBUG: e.Signature-Part: 9
        //DEBUG: t.FirstTerm: 19
        //DEBUG: e.OtherPart: 16
        //5: e.Signature
        //9: e.Signature-Part
        //12: t.LastTerm
        //16: e.OtherPart
        //19: t.FirstTerm
        //28: e.Signature-Part

        refalrts::reset_allocator(vm);
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        refalrts::alloc_open_call(vm, context[21]);
        refalrts::alloc_name(vm, context[23], functions[efunc_gen_PartiallyContainsSignature_Z2S2C3]);
        refalrts::alloc_open_call(vm, context[24]);
        refalrts::alloc_name(vm, context[25], functions[efunc_ContainsSignature]);
        refalrts::alloc_open_bracket(vm, context[26]);
        refalrts::alloc_close_bracket(vm, context[27]);
        refalrts::copy_evar(vm, context[28], context[29], context[9], context[10]);
        refalrts::alloc_close_call(vm, context[30]);
        refalrts::alloc_close_call(vm, context[22]);
        refalrts::push_stack( vm, context[22] );
        refalrts::push_stack( vm, context[21] );
        res = refalrts::splice_elem( res, context[22] );
        refalrts::push_stack( vm, context[30] );
        refalrts::push_stack( vm, context[24] );
        res = refalrts::splice_elem( res, context[30] );
        res = refalrts::splice_evar( res, context[28], context[29] );
        refalrts::link_brackets( context[26], context[27] );
        res = refalrts::splice_elem( res, context[27] );
        res = refalrts::splice_elem( res, context[26] );
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
          // </21 & PartiallyContainsSignature@2$2?3/25 # True/26 >/22
          context[23] = 0;
          context[24] = 0;
          context[25] = refalrts::call_left( context[23], context[24], context[21], context[22] );
          context[26] = refalrts::ident_left( identifiers[ident_True], context[23], context[24] );
          if( ! context[26] )
            continue;
          if( ! refalrts::empty_seq( context[23], context[24] ) )
            continue;
          //DEBUG: e.Signature: 5
          //DEBUG: t.LastTerm: 12
          //DEBUG: e.Signature-Part: 9
          //DEBUG: t.FirstTerm: 19
          //DEBUG: e.OtherPart: 16

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} & PartiallyContainsSignature@2/4 e.Signature/5 </7 & PartiallyContainsSignature@2$2?1/11 e.Signature-Part/9 {REMOVED TILE} >/8 </14 & PartiallyContainsSignature@2$2?2/18 t.FirstTerm/19 e.OtherPart/16 >/15 </21 & PartiallyContainsSignature@2$2?3/25 # True/26 >/22 >/1 {REMOVED TILE}
          //RESULT: Tile{ [[ HalfReuse: # True/0 } Tile{ AsIs: t.LastTerm/12 } Tile{ ]] }
          refalrts::reinit_ident(context[0], identifiers[ident_True]);
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = arg_end->next;
          res = refalrts::splice_evar( res, context[12], context[13] );
          refalrts::splice_to_freelist_open( vm, context[0], res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        refalrts::splice_to_freelist(vm, context[21], context[22]);
        continue;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      refalrts::splice_to_freelist(vm, context[14], context[15]);
      continue;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    refalrts::splice_to_freelist(vm, context[7], context[8]);
    continue;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & PartiallyContainsSignature@2/4 e.Signature-Part/5 t.LastTerm/7 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[8] = refalrts::tvar_right( context[7], context[5], context[6] );
    if( ! context[8] )
      continue;
    // closed e.Signature-Part as range 5
    //DEBUG: t.LastTerm: 7
    //DEBUG: e.Signature-Part: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & PartiallyContainsSignature@2/4 } Tile{ AsIs: e.Signature-Part/5 } Tile{ AsIs: >/1 } Tile{ AsIs: t.LastTerm/7 } Tile{ ]] }
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_elem( res, context[1] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & PartiallyContainsSignature@2/4 e.dyn1/2 >/1
  // closed e.dyn1 as range 2
  //DEBUG: e.dyn1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & PartiallyContainsSignature@0/6 Tile{ HalfReuse: (/0 HalfReuse: )/4 AsIs: e.dyn1/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::alloc_name(vm, context[6], functions[efunc_gen_PartiallyContainsSignature_Z0]);
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

static refalrts::NativeReference nat_ref_gen_PartiallyContainsSignature_Z2("PartiallyContainsSignature@2", COOKIE1_, COOKIE2_, func_gen_PartiallyContainsSignature_Z2);


//End of file
