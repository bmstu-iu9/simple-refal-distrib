// This file automatically generated from 'main.ref'
// Don't edit! Edit 'main.ref' and recompile it

#include "refalrts.h"

#define cookie_ns cookie_ns_2715631157_538598832
#define COOKIE1_ 2715631157U
#define COOKIE2_ 538598832U

enum efunc {
  efunc_u_u_Stepm_Drop = 0,
  efunc_u_u_Metau_Mu = 1,
  efunc_d_table = 2,
  efunc_Map = 3,
  efunc_gen_Apply_Z4 = 4,
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
  efunc_Transform = 18,
  efunc_LoadFile = 19,
  efunc_SaveFile = 20,
  efunc_gen_Go_B1 = 21,
  efunc_ParseCommandLine = 22,
  efunc_ArgList = 23,
  efunc_gen_Go_A1 = 24,
  efunc_gen_Fetch_Z1 = 25,
  efunc_DFAm_Tokens = 26,
  efunc_gen_Fetch_Z2 = 27,
  efunc_Flexm_Tokens = 28,
  efunc_gen_Transform_A2 = 29,
  efunc_ErrorAt = 30,
  efunc_gen_Transform_A1 = 31,
  efunc_SplitSource = 32,
  efunc_gen_SplitSource_S1A1 = 33,
  efunc_Lenw = 34,
  efunc_gen_SplitSource_S2A1 = 35,
  efunc_gen_Pipe_S2L1Z1 = 36,
  efunc_gen_Pipe_S2L1Z2 = 37,
  efunc_gen_Map_Z1 = 38,
  efunc_Mu = 39,
  efunc_Up = 40,
  efunc_Evm_met = 41,
  efunc_Residue = 42,
  efunc_u_u_Metau_Residue = 43,
  efunc_MapAccum = 44,
  efunc_UnBracket = 45,
  efunc_DelAccumulator = 46,
  efunc_Inc = 47,
  efunc_Dec = 48,
  efunc_Go = 49,
  efunc_GetTranslator = 50,
  efunc_GetDFATranslator = 51,
  efunc_GetFlexTranslator = 52,
  efunc_Flexm_Compile = 53,
  efunc_FillSourceToTokens = 54,
  efunc_FillSourceToToken = 55,
  efunc_gen_Apply_Z5 = 56,
  efunc_gen_Pipe_S2L1Z0 = 57,
  efunc_gen_DFAm_Tokens_Z0 = 58,
  efunc_gen_DFAm_Parse_Z0 = 59,
  efunc_gen_DFAm_Compile_Z0 = 60,
  efunc_gen_GenerateFromDFA_Z0 = 61,
  efunc_gen_FillSourceToTokens_Z0 = 62,
  efunc_gen_Flexm_Tokens_Z0 = 63,
  efunc_gen_Flexm_Parse_Z0 = 64,
  efunc_gen_GetFlexTranslator_L1Z0 = 65,
  efunc_gen_Flexm_Desugar_Z0 = 66,
  efunc_gen_Flexm_Compile_Z0 = 67,
  efunc_gen_FillSourceToToken_D2 = 68,
  efunc_gen_Map_Z0 = 69,
  efunc_gen_FillSourceToToken_Z0 = 70,
  efunc_gen_Fetch_Z3 = 71,
  efunc_gen_Fetch_Z0 = 72,
  efunc_gen_Fetch_Z4 = 73,
  efunc_gen_Fetch_Z5 = 74,
  efunc_DFAm_Parse = 75,
  efunc_gen_Fetch_Z6 = 76,
  efunc_Flexm_Parse = 77,
  efunc_gen_Fetch_Z7 = 78,
  efunc_DFAm_Compile = 79,
  efunc_gen_Fetch_Z8 = 80,
  efunc_Flexm_Check = 81,
  efunc_GenerateFromDFA = 82,
  efunc_gen_Fetch_Z9 = 83,
  efunc_Flexm_Desugar = 84,
};


enum ident {
  ident_InPlace = 0,
  ident_From = 1,
  ident_To = 2,
  ident_TError = 3,
  ident_Mu = 4,
  ident_Up = 5,
  ident_Evm_met = 6,
  ident_Residue = 7,
  ident_u_u_Metau_Residue = 8,
  ident_Apply = 9,
  ident_Map = 10,
  ident_Reduce = 11,
  ident_Fetch = 12,
  ident_MapAccum = 13,
  ident_DoMapAccum = 14,
  ident_UnBracket = 15,
  ident_DelAccumulator = 16,
  ident_Inc = 17,
  ident_Dec = 18,
  ident_Pipe = 19,
  ident_Go = 20,
  ident_Transform = 21,
  ident_SplitSource = 22,
  ident_GetTranslator = 23,
  ident_GetDFATranslator = 24,
  ident_GetFlexTranslator = 25,
  ident_Flexm_Compile = 26,
  ident_FillSourceToTokens = 27,
  ident_FillSourceToToken = 28,
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
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & __Meta_Mu/4 AsIs: s.Fn#1/5 AsIs: e.Argument#1/7 HalfReuse: & $table/1 } >/9 Tile{ ]] }
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
  // issue here memory for vars with 24 elems
  refalrts::Iter context[24];
  refalrts::zeros( context, 24 );
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
    // </0 & Map/4 t.new#3/5 t.new#4/9 e.new#5/7 >/1
    context[7] = context[2];
    context[8] = context[3];
    context[10] = refalrts::tvar_left( context[9], context[7], context[8] );
    if( ! context[10] )
      continue;
    // closed e.new#5 as range 7
    do {
      // </0 & Map/4 s.Fn#1/5 t.Next#1/9 e.Tail#1/11 >/1
      context[11] = context[7];
      context[12] = context[8];
      if( ! refalrts::svar_term( context[5], context[5] ) )
        continue;
      // closed e.Tail#1 as range 11
      //DEBUG: t.Next#1: 9
      //DEBUG: s.Fn#1: 5
      //DEBUG: e.Tail#1: 11

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & __Meta_Mu/4 AsIs: s.Fn#1/5 AsIs: t.Next#1/9 } & $table/13 >/14 </15 & Map/16 s.Fn#1/5/17 Tile{ AsIs: e.Tail#1/11 } Tile{ AsIs: >/1 ]] }
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
      // </0 & Map/4 (/5 t.#0/15 e.0#0/13 )/6 t.Next#1/9 e.Tail#1/11 >/1
      context[11] = context[7];
      context[12] = context[8];
      context[13] = 0;
      context[14] = 0;
      if( ! refalrts::brackets_term( context[13], context[14], context[5] ) )
        continue;
      // closed e.Tail#1 as range 11
      context[16] = refalrts::tvar_left( context[15], context[13], context[14] );
      if( ! context[16] )
        continue;
      // closed e.0#0 as range 13
      //DEBUG: t.Next#1: 9
      //DEBUG: e.Tail#1: 11
      //DEBUG: t.#0: 15
      //DEBUG: e.0#0: 13

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } </17 & Apply@4/18 t.#0/15/19 e.0#0/13/21 Tile{ AsIs: t.Next#1/9 } >/23 Tile{ AsIs: </0 AsIs: & Map/4 AsIs: (/5 AsIs: t.#0/15 AsIs: e.0#0/13 AsIs: )/6 } Tile{ AsIs: e.Tail#1/11 } Tile{ AsIs: >/1 ]] }
      refalrts::alloc_open_call(vm, context[17]);
      refalrts::alloc_name(vm, context[18], functions[efunc_gen_Apply_Z4]);
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

    // </0 & Map/4 t.Fn#1/5 t.Next#1/9 e.Tail#1/11 >/1
    context[11] = context[7];
    context[12] = context[8];
    // closed e.Tail#1 as range 11
    //DEBUG: t.Fn#1: 5
    //DEBUG: t.Next#1: 9
    //DEBUG: e.Tail#1: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Apply@0/4 AsIs: t.Fn#1/5 AsIs: t.Next#1/9 } >/13 </14 & Map/15 t.Fn#1/5/16 Tile{ AsIs: e.Tail#1/11 } Tile{ AsIs: >/1 ]] }
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
    //RESULT: Tile{ [[ } </13 & Reduce$1=1/14 t.Fn#1/5/15 (/17 Tile{ AsIs: e.Tail#1/9 } )/18 Tile{ AsIs: </0 Reuse: & Apply@2/4 AsIs: t.Fn#1/5 AsIs: t.Acc#1/7 AsIs: t.Next#1/11 } >/19 Tile{ AsIs: >/1 ]] }
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
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum$1=1/4 AsIs: t.Fn#1/5 } Tile{ AsIs: (/11 AsIs: e.Scanned#1/13 AsIs: )/12 } (/19 Tile{ AsIs: e.Tail#1/15 } )/20 </21 & Apply@2/22 t.Fn#1/5/23 Tile{ AsIs: t.Acc#1/7 } Tile{ AsIs: t.Next#1/17 } >/25 Tile{ AsIs: >/1 ]] }
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
    res = refalrts::splice_elem( res, context[8] );
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


static refalrts::FnResult func_gen_Go_B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 37 elems
  refalrts::Iter context[37];
  refalrts::zeros( context, 37 );
  // </0 & Go:1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Go:1/4 s.new#1/5 e.new#2/2 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 2
  do {
    // </0 & Go:1/4 # InPlace/5 e.FileName#3/6 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_InPlace], context[5] ) )
      continue;
    // closed e.FileName#3 as range 6
    //DEBUG: e.FileName#3: 6

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & SaveFile/4 HalfReuse: (/5 AsIs: e.FileName#3/6 HalfReuse: )/1 } </8 & Transform/9 (/10 e.FileName#3/6/11 )/13 </14 & LoadFile/15 e.FileName#3/6/16 >/18 >/19 >/20 Tile{ ]] }
    refalrts::alloc_open_call(vm, context[8]);
    refalrts::alloc_name(vm, context[9], functions[efunc_Transform]);
    refalrts::alloc_open_bracket(vm, context[10]);
    refalrts::copy_evar(vm, context[11], context[12], context[6], context[7]);
    refalrts::alloc_close_bracket(vm, context[13]);
    refalrts::alloc_open_call(vm, context[14]);
    refalrts::alloc_name(vm, context[15], functions[efunc_LoadFile]);
    refalrts::copy_evar(vm, context[16], context[17], context[6], context[7]);
    refalrts::alloc_close_call(vm, context[18]);
    refalrts::alloc_close_call(vm, context[19]);
    refalrts::alloc_close_call(vm, context[20]);
    refalrts::update_name(context[4], functions[efunc_SaveFile]);
    refalrts::reinit_open_bracket(context[5]);
    refalrts::reinit_close_bracket(context[1]);
    refalrts::push_stack( vm, context[20] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[19] );
    refalrts::push_stack( vm, context[8] );
    refalrts::push_stack( vm, context[18] );
    refalrts::push_stack( vm, context[14] );
    refalrts::link_brackets( context[10], context[13] );
    refalrts::link_brackets( context[5], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[8], context[20] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Go:1/4 # From/5 (/8 e.From#3/6 )/9 # To/10 (/13 e.To#3/11 )/14 >/1
  if( ! refalrts::ident_term( identifiers[ident_From], context[5] ) )
    return refalrts::cRecognitionImpossible;
  context[6] = 0;
  context[7] = 0;
  context[8] = refalrts::brackets_left( context[6], context[7], context[2], context[3] );
  if( ! context[8] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[8], context[9]);
  context[10] = refalrts::ident_left( identifiers[ident_To], context[2], context[3] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  context[11] = 0;
  context[12] = 0;
  context[13] = refalrts::brackets_left( context[11], context[12], context[2], context[3] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[13], context[14]);
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.From#3 as range 6
  // closed e.To#3 as range 11
  //DEBUG: e.From#3: 6
  //DEBUG: e.To#3: 11

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </15 & SaveFile/16 (/17 Tile{ AsIs: e.To#3/11 } )/18 (/19"/* Automatically generated file, don\'t edit! */"/20 )/22 (/23"/* Edit file \'"/24 e.From#3/6/26"\' */"/28 )/30 (/31 )/32 (/33 Tile{ HalfReuse: )/0 HalfReuse: </4 HalfReuse: & Transform/5 AsIs: (/8 AsIs: e.From#3/6 AsIs: )/9 HalfReuse: </10 HalfReuse: & LoadFile/13 } e.From#3/6/34 >/36 Tile{ HalfReuse: >/14 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[15]);
  refalrts::alloc_name(vm, context[16], functions[efunc_SaveFile]);
  refalrts::alloc_open_bracket(vm, context[17]);
  refalrts::alloc_close_bracket(vm, context[18]);
  refalrts::alloc_open_bracket(vm, context[19]);
  refalrts::alloc_chars(vm, context[20], context[21], "/* Automatically generated file, don\'t edit! */", 47);
  refalrts::alloc_close_bracket(vm, context[22]);
  refalrts::alloc_open_bracket(vm, context[23]);
  refalrts::alloc_chars(vm, context[24], context[25], "/* Edit file \'", 14);
  refalrts::copy_evar(vm, context[26], context[27], context[6], context[7]);
  refalrts::alloc_chars(vm, context[28], context[29], "\' */", 4);
  refalrts::alloc_close_bracket(vm, context[30]);
  refalrts::alloc_open_bracket(vm, context[31]);
  refalrts::alloc_close_bracket(vm, context[32]);
  refalrts::alloc_open_bracket(vm, context[33]);
  refalrts::copy_evar(vm, context[34], context[35], context[6], context[7]);
  refalrts::alloc_close_call(vm, context[36]);
  refalrts::reinit_close_bracket(context[0]);
  refalrts::reinit_open_call(context[4]);
  refalrts::reinit_name(context[5], functions[efunc_Transform]);
  refalrts::reinit_open_call(context[10]);
  refalrts::reinit_name(context[13], functions[efunc_LoadFile]);
  refalrts::reinit_close_call(context[14]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[15] );
  refalrts::push_stack( vm, context[14] );
  refalrts::push_stack( vm, context[4] );
  refalrts::push_stack( vm, context[36] );
  refalrts::push_stack( vm, context[10] );
  refalrts::link_brackets( context[8], context[9] );
  refalrts::link_brackets( context[33], context[0] );
  refalrts::link_brackets( context[31], context[32] );
  refalrts::link_brackets( context[23], context[30] );
  refalrts::link_brackets( context[19], context[22] );
  refalrts::link_brackets( context[17], context[18] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[14];
  res = refalrts::splice_elem( res, context[36] );
  res = refalrts::splice_evar( res, context[34], context[35] );
  res = refalrts::splice_evar( res, context[0], context[13] );
  res = refalrts::splice_evar( res, context[18], context[33] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_evar( res, context[15], context[17] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Go_B1("Go:1", COOKIE1_, COOKIE2_, func_gen_Go_B1);


static refalrts::FnResult func_gen_Go_A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  // </0 & Go=1/4 (/7 e.ProgName#2/5 )/8 e.Options#2/2 >/1
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
  // closed e.ProgName#2 as range 5
  // closed e.Options#2 as range 2
  //DEBUG: e.ProgName#2: 5
  //DEBUG: e.Options#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} e.ProgName#2/5 {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Go:1/4 HalfReuse: </7 } Tile{ HalfReuse: & ParseCommandLine/8 AsIs: e.Options#2/2 AsIs: >/1 } >/9 Tile{ ]] }
  refalrts::alloc_close_call(vm, context[9]);
  refalrts::update_name(context[4], functions[efunc_gen_Go_B1]);
  refalrts::reinit_open_call(context[7]);
  refalrts::reinit_name(context[8], functions[efunc_ParseCommandLine]);
  refalrts::push_stack( vm, context[9] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[7] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_elem( res, context[9] );
  res = refalrts::splice_evar( res, context[8], context[1] );
  refalrts::splice_to_freelist_open( vm, context[7], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Go_A1("Go=1", COOKIE1_, COOKIE2_, func_gen_Go_A1);


static refalrts::FnResult func_Go(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 8 elems
  refalrts::Iter context[8];
  refalrts::zeros( context, 8 );
  // </0 & Go/4 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Go=1/4 HalfReuse: </1 } & ArgList/5 >/6 >/7 Tile{ ]] }
  refalrts::alloc_name(vm, context[5], functions[efunc_ArgList]);
  refalrts::alloc_close_call(vm, context[6]);
  refalrts::alloc_close_call(vm, context[7]);
  refalrts::update_name(context[4], functions[efunc_gen_Go_A1]);
  refalrts::reinit_open_call(context[1]);
  refalrts::push_stack( vm, context[7] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[6] );
  refalrts::push_stack( vm, context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[7] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Go("Go", 0U, 0U, func_Go);


static refalrts::FnResult func_gen_Transform_A2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 36 elems
  refalrts::Iter context[36];
  refalrts::zeros( context, 36 );
  // </0 & Transform=2/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Transform=2/4 (/7 e.new#1/5 )/8 (/11 e.new#2/9 )/12 (/15 e.new#3/13 )/16 s.new#4/17 t.new#5/18 >/1
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
  context[19] = refalrts::tvar_left( context[18], context[2], context[3] );
  if( ! context[19] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & Transform=2/4 (/7 e.LinesBefore#2/20 )/8 (/11 e.GenMode#2/22 )/12 (/15 e.Description#2/24 )/16 s.Length#2/17 s.Fn#1/18 >/1
    context[20] = context[5];
    context[21] = context[6];
    context[22] = context[9];
    context[23] = context[10];
    context[24] = context[13];
    context[25] = context[14];
    if( ! refalrts::svar_term( context[18], context[18] ) )
      continue;
    // closed e.LinesBefore#2 as range 20
    // closed e.GenMode#2 as range 22
    // closed e.Description#2 as range 24
    //DEBUG: s.Fn#1: 18
    //DEBUG: s.Length#2: 17
    //DEBUG: e.LinesBefore#2: 20
    //DEBUG: e.GenMode#2: 22
    //DEBUG: e.Description#2: 24

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Length#2/17 s.Fn#1/18 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: e.LinesBefore#2/20 } (/26"/*GE"/27 Tile{ HalfReuse: 'N'/8 HalfReuse: ':'/11 AsIs: e.GenMode#2/22 AsIs: )/12 } e.Description#2/24/29 (/31"GEN:END*/"/32 )/34 Tile{ AsIs: </0 Reuse: & __Meta_Mu/4 HalfReuse: s.Fn1 #18/7 } Tile{ HalfReuse: s.Length2 #17/15 AsIs: e.Description#2/24 HalfReuse: & $table/16 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_bracket(vm, context[26]);
    refalrts::alloc_chars(vm, context[27], context[28], "/*GE", 4);
    refalrts::copy_evar(vm, context[29], context[30], context[24], context[25]);
    refalrts::alloc_open_bracket(vm, context[31]);
    refalrts::alloc_chars(vm, context[32], context[33], "GEN:END*/", 9);
    refalrts::alloc_close_bracket(vm, context[34]);
    refalrts::reinit_char(context[8], 'N');
    refalrts::reinit_char(context[11], ':');
    refalrts::update_name(context[4], functions[efunc_u_u_Metau_Mu]);
    refalrts::reinit_svar( context[7], context[18] );
    refalrts::reinit_svar( context[15], context[17] );
    refalrts::reinit_name(context[16], functions[efunc_d_table]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[31], context[34] );
    refalrts::link_brackets( context[26], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[0], context[7] );
    res = refalrts::splice_evar( res, context[31], context[34] );
    res = refalrts::splice_evar( res, context[29], context[30] );
    res = refalrts::splice_evar( res, context[8], context[12] );
    res = refalrts::splice_evar( res, context[26], context[28] );
    res = refalrts::splice_evar( res, context[20], context[21] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Transform=2/4 (/7 e.LinesBefore#2/20 )/8 (/11 e.GenMode#2/22 )/12 (/15 e.Description#2/24 )/16 s.Length#2/17 (/18 t.#0/28 e.0#0/26 )/19 >/1
    context[20] = context[5];
    context[21] = context[6];
    context[22] = context[9];
    context[23] = context[10];
    context[24] = context[13];
    context[25] = context[14];
    context[26] = 0;
    context[27] = 0;
    if( ! refalrts::brackets_term( context[26], context[27], context[18] ) )
      continue;
    // closed e.LinesBefore#2 as range 20
    // closed e.GenMode#2 as range 22
    // closed e.Description#2 as range 24
    context[29] = refalrts::tvar_left( context[28], context[26], context[27] );
    if( ! context[29] )
      continue;
    // closed e.0#0 as range 26
    //DEBUG: s.Length#2: 17
    //DEBUG: e.LinesBefore#2: 20
    //DEBUG: e.GenMode#2: 22
    //DEBUG: e.Description#2: 24
    //DEBUG: t.#0: 28
    //DEBUG: e.0#0: 26

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Length#2/17 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: e.LinesBefore#2/20 } Tile{ AsIs: (/7 } Tile{ HalfReuse: '/'/4 }"*GE"/30 Tile{ HalfReuse: 'N'/8 HalfReuse: ':'/11 AsIs: e.GenMode#2/22 AsIs: )/12 } Tile{ AsIs: e.Description#2/24 } Tile{ AsIs: (/15 }"GEN:END*/"/32 Tile{ AsIs: )/16 } Tile{ AsIs: </0 } Tile{ HalfReuse: & Apply/18 AsIs: t.#0/28 AsIs: e.0#0/26 HalfReuse: s.Length2 #17/19 } e.Description#2/24/34 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_chars(vm, context[30], context[31], "*GE", 3);
    refalrts::alloc_chars(vm, context[32], context[33], "GEN:END*/", 9);
    refalrts::copy_evar(vm, context[34], context[35], context[24], context[25]);
    refalrts::reinit_char(context[4], '/');
    refalrts::reinit_char(context[8], 'N');
    refalrts::reinit_char(context[11], ':');
    refalrts::reinit_name(context[18], functions[efunc_Apply]);
    refalrts::reinit_svar( context[19], context[17] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[15], context[16] );
    refalrts::link_brackets( context[7], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[34], context[35] );
    res = refalrts::splice_evar( res, context[18], context[19] );
    res = refalrts::splice_elem( res, context[0] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_evar( res, context[32], context[33] );
    res = refalrts::splice_elem( res, context[15] );
    res = refalrts::splice_evar( res, context[24], context[25] );
    res = refalrts::splice_evar( res, context[8], context[12] );
    res = refalrts::splice_evar( res, context[30], context[31] );
    res = refalrts::splice_elem( res, context[4] );
    res = refalrts::splice_elem( res, context[7] );
    res = refalrts::splice_evar( res, context[20], context[21] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Transform=2/4 (/7 e.LinesBefore#2/5 )/8 (/11 e.GenMode#2/9 )/12 (/15 e.Description#2/13 )/16 s.Length#2/17 t.Translator#3/18 >/1
  // closed e.LinesBefore#2 as range 5
  // closed e.GenMode#2 as range 9
  // closed e.Description#2 as range 13
  //DEBUG: t.Translator#3: 18
  //DEBUG: s.Length#2: 17
  //DEBUG: e.LinesBefore#2: 5
  //DEBUG: e.GenMode#2: 9
  //DEBUG: e.Description#2: 13

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.LinesBefore#2/5 } Tile{ AsIs: (/15 }"/*GE"/20 Tile{ HalfReuse: 'N'/8 HalfReuse: ':'/11 AsIs: e.GenMode#2/9 AsIs: )/12 } Tile{ AsIs: e.Description#2/13 } Tile{ AsIs: (/7 }"GEN:END*/"/22 Tile{ AsIs: )/16 } Tile{ AsIs: </0 Reuse: & Apply@0/4 } Tile{ AsIs: t.Translator#3/18 } Tile{ AsIs: s.Length#2/17 } e.Description#2/13/24 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_chars(vm, context[20], context[21], "/*GE", 4);
  refalrts::alloc_chars(vm, context[22], context[23], "GEN:END*/", 9);
  refalrts::copy_evar(vm, context[24], context[25], context[13], context[14]);
  refalrts::reinit_char(context[8], 'N');
  refalrts::reinit_char(context[11], ':');
  refalrts::update_name(context[4], functions[efunc_gen_Apply_Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[16] );
  refalrts::link_brackets( context[15], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[24], context[25] );
  res = refalrts::splice_elem( res, context[17] );
  res = refalrts::splice_evar( res, context[18], context[19] );
  res = refalrts::splice_evar( res, context[0], context[4] );
  res = refalrts::splice_elem( res, context[16] );
  res = refalrts::splice_evar( res, context[22], context[23] );
  res = refalrts::splice_elem( res, context[7] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[8], context[12] );
  res = refalrts::splice_evar( res, context[20], context[21] );
  res = refalrts::splice_elem( res, context[15] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Transform_A2("Transform=2", COOKIE1_, COOKIE2_, func_gen_Transform_A2);


static refalrts::FnResult func_gen_Transform_A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 51 elems
  refalrts::Iter context[51];
  refalrts::zeros( context, 51 );
  // </0 & Transform=1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Transform=1/4 (/7 e.new#1/5 )/8 s.new#2/9 (/12 e.new#3/10 )/13 (/16 e.new#4/14 )/17 e.new#5/2 >/1
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
    // </0 & Transform=1/4 (/7 e.new#8/18 )/8 s.new#6/9 (/12 e.new#9/20 )/13 (/16 e.new#10/22 s.new#11/29 s.new#12/28 s.new#13/27 s.new#14/26 )/17 e.new#7/24 >/1
    context[18] = context[5];
    context[19] = context[6];
    context[20] = context[10];
    context[21] = context[11];
    context[22] = context[14];
    context[23] = context[15];
    context[24] = context[2];
    context[25] = context[3];
    // closed e.new#8 as range 18
    // closed e.new#9 as range 20
    // closed e.new#7 as range 24
    if( ! refalrts::svar_right( context[26], context[22], context[23] ) )
      continue;
    if( ! refalrts::svar_right( context[27], context[22], context[23] ) )
      continue;
    if( ! refalrts::svar_right( context[28], context[22], context[23] ) )
      continue;
    if( ! refalrts::svar_right( context[29], context[22], context[23] ) )
      continue;
    // closed e.new#10 as range 22
    do {
      // </0 & Transform=1/4 (/7 e.Source#1/30 )/8 s.Length#2/9 (/12 e.LinesBefore#2/32 )/13 (/16 'T'/38 'O'/39 'K'/29 'E'/28 'N'/27 'S'/26 )/17 e.Description#2/36 >/1
      context[30] = context[18];
      context[31] = context[19];
      context[32] = context[20];
      context[33] = context[21];
      context[34] = context[22];
      context[35] = context[23];
      context[36] = context[24];
      context[37] = context[25];
      if( ! refalrts::char_term( 'K', context[29] ) )
        continue;
      if( ! refalrts::char_term( 'E', context[28] ) )
        continue;
      if( ! refalrts::char_term( 'N', context[27] ) )
        continue;
      if( ! refalrts::char_term( 'S', context[26] ) )
        continue;
      context[38] = refalrts::char_left( 'T', context[34], context[35] );
      if( ! context[38] )
        continue;
      context[39] = refalrts::char_left( 'O', context[34], context[35] );
      if( ! context[39] )
        continue;
      if( ! refalrts::empty_seq( context[34], context[35] ) )
        continue;
      // closed e.Source#1 as range 30
      // closed e.LinesBefore#2 as range 32
      // closed e.Description#2 as range 36
      //DEBUG: s.Length#2: 9
      //DEBUG: e.Source#1: 30
      //DEBUG: e.LinesBefore#2: 32
      //DEBUG: e.Description#2: 36

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: e.LinesBefore#2/32 } Tile{ AsIs: (/12 }"/*GE"/40 Tile{ HalfReuse: 'N'/13 HalfReuse: ':'/16 AsIs: 'T'/38 AsIs: 'O'/39 AsIs: 'K'/29 AsIs: 'E'/28 AsIs: 'N'/27 AsIs: 'S'/26 AsIs: )/17 AsIs: e.Description#2/36 HalfReuse: (/1 }"GEN:END*/"/42 )/44 Tile{ AsIs: </0 Reuse: & Fetch@1/4 AsIs: (/7 } </45 Tile{ HalfReuse: & DFA-Tokens/8 AsIs: s.Length#2/9 } e.Description#2/36/46 >/48 )/49 Tile{ AsIs: e.Source#1/30 } >/50 Tile{ ]] }
      refalrts::alloc_chars(vm, context[40], context[41], "/*GE", 4);
      refalrts::alloc_chars(vm, context[42], context[43], "GEN:END*/", 9);
      refalrts::alloc_close_bracket(vm, context[44]);
      refalrts::alloc_open_call(vm, context[45]);
      refalrts::copy_evar(vm, context[46], context[47], context[36], context[37]);
      refalrts::alloc_close_call(vm, context[48]);
      refalrts::alloc_close_bracket(vm, context[49]);
      refalrts::alloc_close_call(vm, context[50]);
      refalrts::reinit_char(context[13], 'N');
      refalrts::reinit_char(context[16], ':');
      refalrts::reinit_open_bracket(context[1]);
      refalrts::update_name(context[4], functions[efunc_gen_Fetch_Z1]);
      refalrts::reinit_name(context[8], functions[efunc_DFAm_Tokens]);
      refalrts::push_stack( vm, context[50] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[49] );
      refalrts::push_stack( vm, context[48] );
      refalrts::push_stack( vm, context[45] );
      refalrts::link_brackets( context[1], context[44] );
      refalrts::link_brackets( context[12], context[17] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_elem( res, context[50] );
      res = refalrts::splice_evar( res, context[30], context[31] );
      res = refalrts::splice_evar( res, context[48], context[49] );
      res = refalrts::splice_evar( res, context[46], context[47] );
      res = refalrts::splice_evar( res, context[8], context[9] );
      res = refalrts::splice_elem( res, context[45] );
      res = refalrts::splice_evar( res, context[0], context[7] );
      res = refalrts::splice_evar( res, context[42], context[44] );
      res = refalrts::splice_evar( res, context[13], context[1] );
      res = refalrts::splice_evar( res, context[40], context[41] );
      res = refalrts::splice_elem( res, context[12] );
      res = refalrts::splice_evar( res, context[32], context[33] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Transform=1/4 (/7 e.Source#1/30 )/8 s.Length#2/9 (/12 e.LinesBefore#2/32 )/13 (/16 'F'/29 'L'/28 'E'/27 'X'/26 )/17 e.Description#2/34 >/1
    context[30] = context[18];
    context[31] = context[19];
    context[32] = context[20];
    context[33] = context[21];
    context[34] = context[24];
    context[35] = context[25];
    if( ! refalrts::char_term( 'F', context[29] ) )
      continue;
    if( ! refalrts::char_term( 'L', context[28] ) )
      continue;
    if( ! refalrts::char_term( 'E', context[27] ) )
      continue;
    if( ! refalrts::char_term( 'X', context[26] ) )
      continue;
    if( ! refalrts::empty_seq( context[22], context[23] ) )
      continue;
    // closed e.Source#1 as range 30
    // closed e.LinesBefore#2 as range 32
    // closed e.Description#2 as range 34
    //DEBUG: s.Length#2: 9
    //DEBUG: e.Source#1: 30
    //DEBUG: e.LinesBefore#2: 32
    //DEBUG: e.Description#2: 34

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: e.LinesBefore#2/32 } Tile{ AsIs: (/12 }"/*GE"/36 Tile{ HalfReuse: 'N'/13 HalfReuse: ':'/16 AsIs: 'F'/29 AsIs: 'L'/28 AsIs: 'E'/27 AsIs: 'X'/26 AsIs: )/17 AsIs: e.Description#2/34 HalfReuse: (/1 }"GEN:END*/"/38 )/40 Tile{ AsIs: </0 Reuse: & Fetch@2/4 AsIs: (/7 } </41 Tile{ HalfReuse: & Flex-Tokens/8 AsIs: s.Length#2/9 } e.Description#2/34/42 >/44 )/45 Tile{ AsIs: e.Source#1/30 } >/46 Tile{ ]] }
    refalrts::alloc_chars(vm, context[36], context[37], "/*GE", 4);
    refalrts::alloc_chars(vm, context[38], context[39], "GEN:END*/", 9);
    refalrts::alloc_close_bracket(vm, context[40]);
    refalrts::alloc_open_call(vm, context[41]);
    refalrts::copy_evar(vm, context[42], context[43], context[34], context[35]);
    refalrts::alloc_close_call(vm, context[44]);
    refalrts::alloc_close_bracket(vm, context[45]);
    refalrts::alloc_close_call(vm, context[46]);
    refalrts::reinit_char(context[13], 'N');
    refalrts::reinit_char(context[16], ':');
    refalrts::reinit_open_bracket(context[1]);
    refalrts::update_name(context[4], functions[efunc_gen_Fetch_Z2]);
    refalrts::reinit_name(context[8], functions[efunc_Flexm_Tokens]);
    refalrts::push_stack( vm, context[46] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[45] );
    refalrts::push_stack( vm, context[44] );
    refalrts::push_stack( vm, context[41] );
    refalrts::link_brackets( context[1], context[40] );
    refalrts::link_brackets( context[12], context[17] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_elem( res, context[46] );
    res = refalrts::splice_evar( res, context[30], context[31] );
    res = refalrts::splice_evar( res, context[44], context[45] );
    res = refalrts::splice_evar( res, context[42], context[43] );
    res = refalrts::splice_evar( res, context[8], context[9] );
    res = refalrts::splice_elem( res, context[41] );
    res = refalrts::splice_evar( res, context[0], context[7] );
    res = refalrts::splice_evar( res, context[38], context[40] );
    res = refalrts::splice_evar( res, context[13], context[1] );
    res = refalrts::splice_evar( res, context[36], context[37] );
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_evar( res, context[32], context[33] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Transform=1/4 (/7 e.Source#1/5 )/8 s.Length#2/9 (/12 e.LinesBefore#2/10 )/13 (/16 e.GenMode#2/14 )/17 e.Description#2/2 >/1
  // closed e.Source#1 as range 5
  // closed e.LinesBefore#2 as range 10
  // closed e.GenMode#2 as range 14
  // closed e.Description#2 as range 2
  //DEBUG: s.Length#2: 9
  //DEBUG: e.Source#1: 5
  //DEBUG: e.LinesBefore#2: 10
  //DEBUG: e.GenMode#2: 14
  //DEBUG: e.Description#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </18 & Transform=2/19 Tile{ AsIs: (/12 AsIs: e.LinesBefore#2/10 AsIs: )/13 AsIs: (/16 AsIs: e.GenMode#2/14 AsIs: )/17 } (/20 Tile{ AsIs: e.Description#2/2 } )/21 Tile{ AsIs: s.Length#2/9 } </22 Tile{ HalfReuse: & ErrorAt/0 HalfReuse: (/4 HalfReuse: s.Length2 #9/7 AsIs: e.Source#1/5 AsIs: )/8 }"Unknown generation mode "/23 e.GenMode#2/14/25 >/27 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[18]);
  refalrts::alloc_name(vm, context[19], functions[efunc_gen_Transform_A2]);
  refalrts::alloc_open_bracket(vm, context[20]);
  refalrts::alloc_close_bracket(vm, context[21]);
  refalrts::alloc_open_call(vm, context[22]);
  refalrts::alloc_chars(vm, context[23], context[24], "Unknown generation mode ", 24);
  refalrts::copy_evar(vm, context[25], context[26], context[14], context[15]);
  refalrts::alloc_close_call(vm, context[27]);
  refalrts::reinit_name(context[0], functions[efunc_ErrorAt]);
  refalrts::reinit_open_bracket(context[4]);
  refalrts::reinit_svar( context[7], context[9] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[18] );
  refalrts::push_stack( vm, context[27] );
  refalrts::push_stack( vm, context[22] );
  refalrts::link_brackets( context[4], context[8] );
  refalrts::link_brackets( context[20], context[21] );
  refalrts::link_brackets( context[16], context[17] );
  refalrts::link_brackets( context[12], context[13] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[23], context[27] );
  res = refalrts::splice_evar( res, context[0], context[8] );
  res = refalrts::splice_elem( res, context[22] );
  res = refalrts::splice_elem( res, context[9] );
  res = refalrts::splice_elem( res, context[21] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_elem( res, context[20] );
  res = refalrts::splice_evar( res, context[12], context[17] );
  res = refalrts::splice_evar( res, context[18], context[19] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Transform_A1("Transform=1", COOKIE1_, COOKIE2_, func_gen_Transform_A1);


static refalrts::FnResult func_Transform(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
  // </0 & Transform/4 (/7 e.Source#1/5 )/8 e.Lines#1/2 >/1
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
  // closed e.Source#1 as range 5
  // closed e.Lines#1 as range 2
  //DEBUG: e.Source#1: 5
  //DEBUG: e.Lines#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </9 & Transform=1/10 (/11 e.Source#1/5/12 )/14 Tile{ AsIs: </0 Reuse: & SplitSource/4 AsIs: (/7 AsIs: e.Source#1/5 AsIs: )/8 AsIs: e.Lines#1/2 AsIs: >/1 } >/15 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[9]);
  refalrts::alloc_name(vm, context[10], functions[efunc_gen_Transform_A1]);
  refalrts::alloc_open_bracket(vm, context[11]);
  refalrts::copy_evar(vm, context[12], context[13], context[5], context[6]);
  refalrts::alloc_close_bracket(vm, context[14]);
  refalrts::alloc_close_call(vm, context[15]);
  refalrts::update_name(context[4], functions[efunc_SplitSource]);
  refalrts::push_stack( vm, context[15] );
  refalrts::push_stack( vm, context[9] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[11], context[14] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_elem( res, context[15] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[9], context[14] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Transform("Transform", COOKIE1_, COOKIE2_, func_Transform);


static refalrts::FnResult func_gen_SplitSource_S1A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
  // </0 & SplitSource$1=1/4 (/7 e.GenMode#1/5 )/8 (/11 e.Description#1/9 )/12 s.Length#2/13 e.LinesBefore#2/2 >/1
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
  // closed e.GenMode#1 as range 5
  // closed e.Description#1 as range 9
  if( ! refalrts::svar_left( context[13], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.LinesBefore#2 as range 2
  //DEBUG: e.GenMode#1: 5
  //DEBUG: e.Description#1: 9
  //DEBUG: s.Length#2: 13
  //DEBUG: e.LinesBefore#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 } & Add/14 Tile{ HalfReuse: 1/12 AsIs: s.Length#2/13 } Tile{ AsIs: >/1 } Tile{ AsIs: (/11 } Tile{ AsIs: e.LinesBefore#2/2 } Tile{ HalfReuse: )/4 AsIs: (/7 AsIs: e.GenMode#1/5 AsIs: )/8 } Tile{ AsIs: e.Description#1/9 } Tile{ ]] }
  refalrts::alloc_name(vm, context[14], functions[efunc_Add]);
  refalrts::reinit_number(context[12], 1UL);
  refalrts::reinit_close_bracket(context[4]);
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[11], context[4] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[4], context[8] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_elem( res, context[11] );
  res = refalrts::splice_elem( res, context[1] );
  res = refalrts::splice_evar( res, context[12], context[13] );
  res = refalrts::splice_elem( res, context[14] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_SplitSource_S1A1("SplitSource$1=1", COOKIE1_, COOKIE2_, func_gen_SplitSource_S1A1);


static refalrts::FnResult func_gen_SplitSource_S2A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  // </0 & SplitSource$2=1/4 (/7 e.Source#1/5 )/8 s.CommentPos#2/9 e.LinesBefore#2/2 >/1
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
  // closed e.Source#1 as range 5
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.LinesBefore#2 as range 2
  //DEBUG: e.Source#1: 5
  //DEBUG: s.CommentPos#2: 9
  //DEBUG: e.LinesBefore#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.LinesBefore#2/2 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & ErrorAt/4 AsIs: (/7 } Tile{ AsIs: s.CommentPos#2/9 } Tile{ AsIs: e.Source#1/5 } Tile{ AsIs: )/8 }"End of description not found"/10 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_chars(vm, context[10], context[11], "End of description not found", 28);
  refalrts::update_name(context[4], functions[efunc_ErrorAt]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[10], context[11] );
  res = refalrts::splice_elem( res, context[8] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_elem( res, context[9] );
  refalrts::splice_to_freelist_open( vm, context[7], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_SplitSource_S2A1("SplitSource$2=1", COOKIE1_, COOKIE2_, func_gen_SplitSource_S2A1);


static refalrts::FnResult func_SplitSource(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 44 elems
  refalrts::Iter context[44];
  refalrts::zeros( context, 44 );
  // </0 & SplitSource/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & SplitSource/4 (/7 e.new#1/5 )/8 e.new#2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  // closed e.new#2 as range 2
  do {
    // </0 & SplitSource/4 (/7 e.Source#1/9 )/8 e.LinesBefore#1/13 (/19 '/'/21 '*'/22 'G'/23 'E'/24 'N'/25 ':'/26 e.GenMode#1/17 )/20 e.Description#1/27 (/33 'G'/35 'E'/36 'N'/37 ':'/38 'E'/39 'N'/40 'D'/41 '*'/42 '/'/43 )/34 e.Skipped#1/29 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    // closed e.Source#1 as range 9
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
      context[21] = refalrts::char_left( '/', context[17], context[18] );
      if( ! context[21] )
        continue;
      context[22] = refalrts::char_left( '*', context[17], context[18] );
      if( ! context[22] )
        continue;
      context[23] = refalrts::char_left( 'G', context[17], context[18] );
      if( ! context[23] )
        continue;
      context[24] = refalrts::char_left( 'E', context[17], context[18] );
      if( ! context[24] )
        continue;
      context[25] = refalrts::char_left( 'N', context[17], context[18] );
      if( ! context[25] )
        continue;
      context[26] = refalrts::char_left( ':', context[17], context[18] );
      if( ! context[26] )
        continue;
      // closed e.GenMode#1 as range 17
      context[27] = 0;
      context[28] = 0;
      refalrts::start_e_loop(vm);
      do {
        context[29] = context[15];
        context[30] = context[16];
        context[31] = 0;
        context[32] = 0;
        context[33] = refalrts::brackets_left( context[31], context[32], context[29], context[30] );
        if( ! context[33] )
          continue;
        refalrts::bracket_pointers(context[33], context[34]);
        context[35] = refalrts::char_left( 'G', context[31], context[32] );
        if( ! context[35] )
          continue;
        context[36] = refalrts::char_left( 'E', context[31], context[32] );
        if( ! context[36] )
          continue;
        context[37] = refalrts::char_left( 'N', context[31], context[32] );
        if( ! context[37] )
          continue;
        context[38] = refalrts::char_left( ':', context[31], context[32] );
        if( ! context[38] )
          continue;
        context[39] = refalrts::char_left( 'E', context[31], context[32] );
        if( ! context[39] )
          continue;
        context[40] = refalrts::char_left( 'N', context[31], context[32] );
        if( ! context[40] )
          continue;
        context[41] = refalrts::char_left( 'D', context[31], context[32] );
        if( ! context[41] )
          continue;
        context[42] = refalrts::char_left( '*', context[31], context[32] );
        if( ! context[42] )
          continue;
        context[43] = refalrts::char_left( '/', context[31], context[32] );
        if( ! context[43] )
          continue;
        if( ! refalrts::empty_seq( context[31], context[32] ) )
          continue;
        // closed e.Skipped#1 as range 29
        //DEBUG: e.Source#1: 9
        //DEBUG: e.LinesBefore#1: 13
        //DEBUG: e.GenMode#1: 17
        //DEBUG: e.Description#1: 27
        //DEBUG: e.Skipped#1: 29

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} e.Source#1/9 )/8 {REMOVED TILE} (/19 '/'/21 '*'/22 'G'/23 'E'/24 'N'/25 ':'/26 {REMOVED TILE} {REMOVED TILE} 'N'/37 ':'/38 'E'/39 'N'/40 {REMOVED TILE} '*'/42 '/'/43 {REMOVED TILE} e.Skipped#1/29 {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & SplitSource$1=1/4 AsIs: (/7 } Tile{ AsIs: e.GenMode#1/17 } Tile{ AsIs: )/34 } Tile{ HalfReuse: (/20 AsIs: e.Description#1/27 HalfReuse: )/33 HalfReuse: </35 HalfReuse: & Lenw/36 } Tile{ AsIs: e.LinesBefore#1/13 } Tile{ HalfReuse: >/41 } Tile{ AsIs: >/1 ]] }
        refalrts::update_name(context[4], functions[efunc_gen_SplitSource_S1A1]);
        refalrts::reinit_open_bracket(context[20]);
        refalrts::reinit_close_bracket(context[33]);
        refalrts::reinit_open_call(context[35]);
        refalrts::reinit_name(context[36], functions[efunc_Lenw]);
        refalrts::reinit_close_call(context[41]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::push_stack( vm, context[41] );
        refalrts::push_stack( vm, context[35] );
        refalrts::link_brackets( context[20], context[33] );
        refalrts::link_brackets( context[7], context[34] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_elem( res, context[41] );
        res = refalrts::splice_evar( res, context[13], context[14] );
        res = refalrts::splice_evar( res, context[20], context[36] );
        res = refalrts::splice_elem( res, context[34] );
        res = refalrts::splice_evar( res, context[17], context[18] );
        refalrts::splice_to_freelist_open( vm, context[7], res );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[27], context[28], context[15], context[16] ) );
    } while ( refalrts::open_evar_advance( context[13], context[14], context[11], context[12] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & SplitSource/4 (/7 e.Source#1/9 )/8 e.LinesBefore#1/13 (/19 '/'/21 '*'/22 'G'/23 'E'/24 'N'/25 ':'/26 e.GenMode#1/17 )/20 e.DescriptionAndTail#1/15 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    // closed e.Source#1 as range 9
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
      context[21] = refalrts::char_left( '/', context[17], context[18] );
      if( ! context[21] )
        continue;
      context[22] = refalrts::char_left( '*', context[17], context[18] );
      if( ! context[22] )
        continue;
      context[23] = refalrts::char_left( 'G', context[17], context[18] );
      if( ! context[23] )
        continue;
      context[24] = refalrts::char_left( 'E', context[17], context[18] );
      if( ! context[24] )
        continue;
      context[25] = refalrts::char_left( 'N', context[17], context[18] );
      if( ! context[25] )
        continue;
      context[26] = refalrts::char_left( ':', context[17], context[18] );
      if( ! context[26] )
        continue;
      // closed e.GenMode#1 as range 17
      // closed e.DescriptionAndTail#1 as range 15
      //DEBUG: e.Source#1: 9
      //DEBUG: e.LinesBefore#1: 13
      //DEBUG: e.GenMode#1: 17
      //DEBUG: e.DescriptionAndTail#1: 15

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.DescriptionAndTail#1/15 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & SplitSource$2=1/4 AsIs: (/7 } Tile{ AsIs: e.Source#1/9 } )/27 </28 Tile{ HalfReuse: & Lenw/8 AsIs: e.LinesBefore#1/13 AsIs: (/19 AsIs: '/'/21 AsIs: '*'/22 AsIs: 'G'/23 AsIs: 'E'/24 AsIs: 'N'/25 AsIs: ':'/26 AsIs: e.GenMode#1/17 AsIs: )/20 } >/29 Tile{ AsIs: >/1 ]] }
      refalrts::alloc_close_bracket(vm, context[27]);
      refalrts::alloc_open_call(vm, context[28]);
      refalrts::alloc_close_call(vm, context[29]);
      refalrts::update_name(context[4], functions[efunc_gen_SplitSource_S2A1]);
      refalrts::reinit_name(context[8], functions[efunc_Lenw]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[29] );
      refalrts::push_stack( vm, context[28] );
      refalrts::link_brackets( context[19], context[20] );
      refalrts::link_brackets( context[7], context[27] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_elem( res, context[29] );
      res = refalrts::splice_evar( res, context[8], context[20] );
      res = refalrts::splice_evar( res, context[27], context[28] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      refalrts::splice_to_freelist_open( vm, context[7], res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[13], context[14], context[11], context[12] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & SplitSource/4 (/7 e.Source#1/5 )/8 e.Lines#1/2 >/1
  // closed e.Source#1 as range 5
  // closed e.Lines#1 as range 2
  //DEBUG: e.Source#1: 5
  //DEBUG: e.Lines#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.Lines#1/2 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & ErrorAt/4 AsIs: (/7 } 1/9 Tile{ AsIs: e.Source#1/5 } Tile{ AsIs: )/8 }"Lexer description not found"/10 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_number(vm, context[9], 1UL);
  refalrts::alloc_chars(vm, context[10], context[11], "Lexer description not found", 27);
  refalrts::update_name(context[4], functions[efunc_ErrorAt]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[10], context[11] );
  res = refalrts::splice_elem( res, context[8] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_elem( res, context[9] );
  refalrts::splice_to_freelist_open( vm, context[7], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_SplitSource("SplitSource", COOKIE1_, COOKIE2_, func_SplitSource);


static refalrts::FnResult func_GetTranslator(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 24 elems
  refalrts::Iter context[24];
  refalrts::zeros( context, 24 );
  // </0 & GetTranslator/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & GetTranslator/4 s.new#1/5 (/8 e.new#2/6 )/9 e.new#3/2 >/1
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
    // </0 & GetTranslator/4 s.new#4/5 (/8 e.new#10/10 )/9 e.new#5/12 s.new#6/17 s.new#7/16 s.new#8/15 s.new#9/14 >/1
    context[10] = context[6];
    context[11] = context[7];
    context[12] = context[2];
    context[13] = context[3];
    // closed e.new#10 as range 10
    if( ! refalrts::svar_right( context[14], context[12], context[13] ) )
      continue;
    if( ! refalrts::svar_right( context[15], context[12], context[13] ) )
      continue;
    if( ! refalrts::svar_right( context[16], context[12], context[13] ) )
      continue;
    if( ! refalrts::svar_right( context[17], context[12], context[13] ) )
      continue;
    // closed e.new#5 as range 12
    do {
      // </0 & GetTranslator/4 s.Length#1/5 (/8 e.Source#1/18 )/9 'T'/22 'O'/23 'K'/17 'E'/16 'N'/15 'S'/14 >/1
      context[18] = context[10];
      context[19] = context[11];
      context[20] = context[12];
      context[21] = context[13];
      if( ! refalrts::char_term( 'K', context[17] ) )
        continue;
      if( ! refalrts::char_term( 'E', context[16] ) )
        continue;
      if( ! refalrts::char_term( 'N', context[15] ) )
        continue;
      if( ! refalrts::char_term( 'S', context[14] ) )
        continue;
      context[22] = refalrts::char_left( 'T', context[20], context[21] );
      if( ! context[22] )
        continue;
      context[23] = refalrts::char_left( 'O', context[20], context[21] );
      if( ! context[23] )
        continue;
      if( ! refalrts::empty_seq( context[20], context[21] ) )
        continue;
      // closed e.Source#1 as range 18
      //DEBUG: s.Length#1: 5
      //DEBUG: e.Source#1: 18

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} s.Length#1/5 {REMOVED TILE} 'O'/23 'K'/17 'E'/16 'N'/15 'S'/14 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: [*]/0 Reuse: & Pipe$2\1@1/4 } Tile{ AsIs: (/8 AsIs: e.Source#1/18 AsIs: )/9 HalfReuse: {*}/22 } Tile{ ]] }
      refalrts::reinit_closure_head(context[0]);
      refalrts::update_name(context[4], functions[efunc_gen_Pipe_S2L1Z1]);
      refalrts::reinit_unwrapped_closure(context[22], context[0]);
      refalrts::link_brackets( context[8], context[9] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[8], context[22] );
      refalrts::splice_to_freelist_open( vm, context[4], res );
      refalrts::wrap_closure( context[22] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & GetTranslator/4 s.Length#1/5 (/8 e.Source#1/18 )/9 'F'/17 'L'/16 'E'/15 'X'/14 >/1
    context[18] = context[10];
    context[19] = context[11];
    if( ! refalrts::char_term( 'F', context[17] ) )
      continue;
    if( ! refalrts::char_term( 'L', context[16] ) )
      continue;
    if( ! refalrts::char_term( 'E', context[15] ) )
      continue;
    if( ! refalrts::char_term( 'X', context[14] ) )
      continue;
    if( ! refalrts::empty_seq( context[12], context[13] ) )
      continue;
    // closed e.Source#1 as range 18
    //DEBUG: s.Length#1: 5
    //DEBUG: e.Source#1: 18

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} s.Length#1/5 {REMOVED TILE} 'L'/16 'E'/15 'X'/14 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: [*]/0 Reuse: & Pipe$2\1@2/4 } Tile{ AsIs: (/8 AsIs: e.Source#1/18 AsIs: )/9 HalfReuse: {*}/17 } Tile{ ]] }
    refalrts::reinit_closure_head(context[0]);
    refalrts::update_name(context[4], functions[efunc_gen_Pipe_S2L1Z2]);
    refalrts::reinit_unwrapped_closure(context[17], context[0]);
    refalrts::link_brackets( context[8], context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[8], context[17] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    refalrts::wrap_closure( context[17] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & GetTranslator/4 s.Length#1/5 (/8 e.Source#1/6 )/9 e.OtherGenMode#1/2 >/1
  // closed e.Source#1 as range 6
  // closed e.OtherGenMode#1 as range 2
  //DEBUG: s.Length#1: 5
  //DEBUG: e.Source#1: 6
  //DEBUG: e.OtherGenMode#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & ErrorAt/4 } Tile{ AsIs: (/8 } Tile{ AsIs: s.Length#1/5 } Tile{ AsIs: e.Source#1/6 } )/10"Unknown generation mode"/11 Tile{ HalfReuse: ' '/9 AsIs: e.OtherGenMode#1/2 AsIs: >/1 ]] }
  refalrts::alloc_close_bracket(vm, context[10]);
  refalrts::alloc_chars(vm, context[11], context[12], "Unknown generation mode", 23);
  refalrts::update_name(context[4], functions[efunc_ErrorAt]);
  refalrts::reinit_char(context[9], ' ');
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[8], context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[9];
  res = refalrts::splice_evar( res, context[10], context[12] );
  res = refalrts::splice_evar( res, context[6], context[7] );
  res = refalrts::splice_elem( res, context[5] );
  res = refalrts::splice_elem( res, context[8] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_GetTranslator("GetTranslator", COOKIE1_, COOKIE2_, func_GetTranslator);


static refalrts::FnResult func_GetDFATranslator(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 7 elems
  refalrts::Iter context[7];
  refalrts::zeros( context, 7 );
  // </0 & GetDFATranslator/4 e.Source#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Source#1 as range 2
  //DEBUG: e.Source#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: [*]/0 Reuse: & Pipe$2\1@1/4 } (/5 Tile{ AsIs: e.Source#1/2 } )/6 Tile{ HalfReuse: {*}/1 ]] }
  refalrts::alloc_open_bracket(vm, context[5]);
  refalrts::alloc_close_bracket(vm, context[6]);
  refalrts::reinit_closure_head(context[0]);
  refalrts::update_name(context[4], functions[efunc_gen_Pipe_S2L1Z1]);
  refalrts::reinit_unwrapped_closure(context[1], context[0]);
  refalrts::link_brackets( context[5], context[6] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_elem( res, context[6] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_elem( res, context[5] );
  refalrts::use( res );
  refalrts::wrap_closure( context[1] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_GetDFATranslator("GetDFATranslator", COOKIE1_, COOKIE2_, func_GetDFATranslator);


static refalrts::FnResult func_GetFlexTranslator(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 7 elems
  refalrts::Iter context[7];
  refalrts::zeros( context, 7 );
  // </0 & GetFlexTranslator/4 e.Source#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Source#1 as range 2
  //DEBUG: e.Source#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: [*]/0 Reuse: & Pipe$2\1@2/4 } (/5 Tile{ AsIs: e.Source#1/2 } )/6 Tile{ HalfReuse: {*}/1 ]] }
  refalrts::alloc_open_bracket(vm, context[5]);
  refalrts::alloc_close_bracket(vm, context[6]);
  refalrts::reinit_closure_head(context[0]);
  refalrts::update_name(context[4], functions[efunc_gen_Pipe_S2L1Z2]);
  refalrts::reinit_unwrapped_closure(context[1], context[0]);
  refalrts::link_brackets( context[5], context[6] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_elem( res, context[6] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_elem( res, context[5] );
  refalrts::use( res );
  refalrts::wrap_closure( context[1] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_GetFlexTranslator("GetFlexTranslator", COOKIE1_, COOKIE2_, func_GetFlexTranslator);


static refalrts::FnResult func_Flexm_Compile(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 5 elems
  refalrts::Iter context[5];
  refalrts::zeros( context, 5 );
  // </0 & Flex-Compile/4 e.AnyInput#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.AnyInput#1 as range 2
  //DEBUG: e.AnyInput#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Flex-Compile/4 e.AnyInput#1/2 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Flexm_Compile("Flex-Compile", COOKIE1_, COOKIE2_, func_Flexm_Compile);


static refalrts::FnResult func_FillSourceToTokens(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  // </0 & FillSourceToTokens/4 (/7 e.Source#1/5 )/8 e.Tokens#1/2 >/1
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
  // closed e.Source#1 as range 5
  // closed e.Tokens#1 as range 2
  //DEBUG: e.Source#1: 5
  //DEBUG: e.Tokens#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map@1/4 AsIs: (/7 AsIs: e.Source#1/5 AsIs: )/8 AsIs: e.Tokens#1/2 AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_gen_Map_Z1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_FillSourceToTokens("FillSourceToTokens", COOKIE1_, COOKIE2_, func_FillSourceToTokens);


static refalrts::FnResult func_FillSourceToToken(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
  // </0 & FillSourceToToken/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & FillSourceToToken/4 e.new#1/2 (/7 s.new#2/9 s.new#3/10 e.new#4/5 )/8 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 2
  if( ! refalrts::svar_left( context[9], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[10], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#4 as range 5
  do {
    // </0 & FillSourceToToken/4 e.Source#1/11 (/7 # TError/9 s.LineNumber#1/10 e.Text#1/13 )/8 >/1
    context[11] = context[2];
    context[12] = context[3];
    context[13] = context[5];
    context[14] = context[6];
    if( ! refalrts::ident_term( identifiers[ident_TError], context[9] ) )
      continue;
    // closed e.Source#1 as range 11
    // closed e.Text#1 as range 13
    //DEBUG: s.LineNumber#1: 10
    //DEBUG: e.Source#1: 11
    //DEBUG: e.Text#1: 13

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} (/7 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ErrorAt/4 } Tile{ HalfReuse: (/9 AsIs: s.LineNumber#1/10 } Tile{ AsIs: e.Source#1/11 } Tile{ AsIs: )/8 } Tile{ AsIs: e.Text#1/13 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_ErrorAt]);
    refalrts::reinit_open_bracket(context[9]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[9], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_elem( res, context[8] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & FillSourceToToken/4 e.Source#1/2 (/7 s.TokType#1/9 s.LineNumber#1/10 e.Info#1/5 )/8 >/1
  // closed e.Source#1 as range 2
  // closed e.Info#1 as range 5
  //DEBUG: s.TokType#1: 9
  //DEBUG: s.LineNumber#1: 10
  //DEBUG: e.Source#1: 2
  //DEBUG: e.Info#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} & FillSourceToToken/4 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: s.TokType#1/9 } Tile{ HalfReuse: (/0 } Tile{ AsIs: s.LineNumber#1/10 } Tile{ AsIs: e.Source#1/2 } Tile{ AsIs: )/8 } Tile{ AsIs: e.Info#1/5 } Tile{ HalfReuse: )/1 ]] }
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[7], context[1] );
  refalrts::link_brackets( context[0], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_elem( res, context[8] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_elem( res, context[10] );
  res = refalrts::splice_elem( res, context[0] );
  res = refalrts::splice_evar( res, context[7], context[9] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_FillSourceToToken("FillSourceToToken", COOKIE1_, COOKIE2_, func_FillSourceToToken);


static refalrts::FnResult func_gen_Apply_Z2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
  // </0 & Apply@2/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Apply@2/4 t.new#1/5 t.new#2/7 t.new#3/9 >/1
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
    // </0 & Apply@2/4 s.Fn#1/5 t.Acc#1/7 t.Next#1/9 >/1
    if( ! refalrts::svar_term( context[5], context[5] ) )
      continue;
    //DEBUG: t.Acc#1: 7
    //DEBUG: t.Next#1: 9
    //DEBUG: s.Fn#1: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & __Meta_Mu/4 AsIs: s.Fn#1/5 AsIs: t.Acc#1/7 AsIs: t.Next#1/9 HalfReuse: & $table/1 } >/11 Tile{ ]] }
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
    // </0 & Apply@2/4 (/5 t.Closure#1/13 e.Bounded#1/11 )/6 t.Acc#1/7 t.Next#1/9 >/1
    context[11] = 0;
    context[12] = 0;
    if( ! refalrts::brackets_term( context[11], context[12], context[5] ) )
      continue;
    context[14] = refalrts::tvar_left( context[13], context[11], context[12] );
    if( ! context[14] )
      continue;
    // closed e.Bounded#1 as range 11
    //DEBUG: t.Acc#1: 7
    //DEBUG: t.Next#1: 9
    //DEBUG: t.Closure#1: 13
    //DEBUG: e.Bounded#1: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} (/5 {REMOVED TILE} {REMOVED TILE} )/6 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Apply@5/4 } Tile{ AsIs: t.Closure#1/13 } Tile{ AsIs: e.Bounded#1/11 } Tile{ AsIs: t.Acc#1/7 AsIs: t.Next#1/9 AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_gen_Apply_Z5]);
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

  // </0 & Apply@2/4 t.dyn#0/5 t.Acc#1/7 t.Next#1/9 >/1
  //DEBUG: t.dyn#0: 5
  //DEBUG: t.Acc#1: 7
  //DEBUG: t.Next#1: 9

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Apply@0/4 AsIs: t.dyn#0/5 AsIs: t.Acc#1/7 AsIs: t.Next#1/9 AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_gen_Apply_Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Apply_Z2("Apply@2", COOKIE1_, COOKIE2_, func_gen_Apply_Z2);


static refalrts::FnResult func_gen_Pipe_S2L1Z1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  // </0 & Pipe$2\1@1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Pipe$2\1@1/4 (/7 e.new#1/5 )/8 e.new#2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  // closed e.new#2 as range 2
  do {
    // </0 & Pipe$2\1@1/4 (/7 e.Source#1/9 )/8 e.Arg#2/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    // closed e.Source#1 as range 9
    // closed e.Arg#2 as range 11
    //DEBUG: e.Source#1: 9
    //DEBUG: e.Arg#2: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch@1/4 AsIs: (/7 } </13 Tile{ HalfReuse: & DFA-Tokens/8 AsIs: e.Arg#2/11 AsIs: >/1 } )/14 Tile{ AsIs: e.Source#1/9 } >/15 Tile{ ]] }
    refalrts::alloc_open_call(vm, context[13]);
    refalrts::alloc_close_bracket(vm, context[14]);
    refalrts::alloc_close_call(vm, context[15]);
    refalrts::update_name(context[4], functions[efunc_gen_Fetch_Z1]);
    refalrts::reinit_name(context[8], functions[efunc_DFAm_Tokens]);
    refalrts::push_stack( vm, context[15] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[14] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[13] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_elem( res, context[15] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_elem( res, context[14] );
    res = refalrts::splice_evar( res, context[8], context[1] );
    res = refalrts::splice_elem( res, context[13] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Pipe$2\1@1/4 (/7 e.Source#1/5 )/8 e.dyn#0/2 >/1
  // closed e.Source#1 as range 5
  // closed e.dyn#0 as range 2
  //DEBUG: e.Source#1: 5
  //DEBUG: e.dyn#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </9 & Pipe$2\1@0/10 & DFA-Tokens@0/11 (/12 Tile{ HalfReuse: (/0 Reuse: & FillSourceToTokens@0/4 AsIs: (/7 AsIs: e.Source#1/5 AsIs: )/8 } )/13 & DFA-Parse@0/14 & DFA-Compile@0/15 & GenerateFromDFA@0/16 )/17 Tile{ AsIs: e.dyn#0/2 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[9]);
  refalrts::alloc_name(vm, context[10], functions[efunc_gen_Pipe_S2L1Z0]);
  refalrts::alloc_name(vm, context[11], functions[efunc_gen_DFAm_Tokens_Z0]);
  refalrts::alloc_open_bracket(vm, context[12]);
  refalrts::alloc_close_bracket(vm, context[13]);
  refalrts::alloc_name(vm, context[14], functions[efunc_gen_DFAm_Parse_Z0]);
  refalrts::alloc_name(vm, context[15], functions[efunc_gen_DFAm_Compile_Z0]);
  refalrts::alloc_name(vm, context[16], functions[efunc_gen_GenerateFromDFA_Z0]);
  refalrts::alloc_close_bracket(vm, context[17]);
  refalrts::reinit_open_bracket(context[0]);
  refalrts::update_name(context[4], functions[efunc_gen_FillSourceToTokens_Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[9] );
  refalrts::link_brackets( context[12], context[17] );
  refalrts::link_brackets( context[0], context[13] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[13], context[17] );
  res = refalrts::splice_evar( res, context[0], context[8] );
  res = refalrts::splice_evar( res, context[9], context[12] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Pipe_S2L1Z1("Pipe$2\\1@1", COOKIE1_, COOKIE2_, func_gen_Pipe_S2L1Z1);


static refalrts::FnResult func_gen_Pipe_S2L1Z2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  // </0 & Pipe$2\1@2/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Pipe$2\1@2/4 (/7 e.new#1/5 )/8 e.new#2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  // closed e.new#2 as range 2
  do {
    // </0 & Pipe$2\1@2/4 (/7 e.Source#1/9 )/8 e.Arg#2/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    // closed e.Source#1 as range 9
    // closed e.Arg#2 as range 11
    //DEBUG: e.Source#1: 9
    //DEBUG: e.Arg#2: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch@2/4 AsIs: (/7 } </13 Tile{ HalfReuse: & Flex-Tokens/8 AsIs: e.Arg#2/11 AsIs: >/1 } )/14 Tile{ AsIs: e.Source#1/9 } >/15 Tile{ ]] }
    refalrts::alloc_open_call(vm, context[13]);
    refalrts::alloc_close_bracket(vm, context[14]);
    refalrts::alloc_close_call(vm, context[15]);
    refalrts::update_name(context[4], functions[efunc_gen_Fetch_Z2]);
    refalrts::reinit_name(context[8], functions[efunc_Flexm_Tokens]);
    refalrts::push_stack( vm, context[15] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[14] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[13] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_elem( res, context[15] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_elem( res, context[14] );
    res = refalrts::splice_evar( res, context[8], context[1] );
    res = refalrts::splice_elem( res, context[13] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Pipe$2\1@2/4 (/7 e.Source#1/5 )/8 e.dyn#0/2 >/1
  // closed e.Source#1 as range 5
  // closed e.dyn#0 as range 2
  //DEBUG: e.Source#1: 5
  //DEBUG: e.dyn#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </9 & Pipe$2\1@0/10 & Flex-Tokens@0/11 (/12 Tile{ HalfReuse: (/0 Reuse: & FillSourceToTokens@0/4 AsIs: (/7 AsIs: e.Source#1/5 AsIs: )/8 } )/13 & Flex-Parse@0/14 & GetFlexTranslator\1@0/15 & Flex-Desugar@0/16 & Flex-Compile@0/17 )/18 Tile{ AsIs: e.dyn#0/2 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[9]);
  refalrts::alloc_name(vm, context[10], functions[efunc_gen_Pipe_S2L1Z0]);
  refalrts::alloc_name(vm, context[11], functions[efunc_gen_Flexm_Tokens_Z0]);
  refalrts::alloc_open_bracket(vm, context[12]);
  refalrts::alloc_close_bracket(vm, context[13]);
  refalrts::alloc_name(vm, context[14], functions[efunc_gen_Flexm_Parse_Z0]);
  refalrts::alloc_name(vm, context[15], functions[efunc_gen_GetFlexTranslator_L1Z0]);
  refalrts::alloc_name(vm, context[16], functions[efunc_gen_Flexm_Desugar_Z0]);
  refalrts::alloc_name(vm, context[17], functions[efunc_gen_Flexm_Compile_Z0]);
  refalrts::alloc_close_bracket(vm, context[18]);
  refalrts::reinit_open_bracket(context[0]);
  refalrts::update_name(context[4], functions[efunc_gen_FillSourceToTokens_Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[9] );
  refalrts::link_brackets( context[12], context[18] );
  refalrts::link_brackets( context[0], context[13] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[13], context[18] );
  res = refalrts::splice_evar( res, context[0], context[8] );
  res = refalrts::splice_evar( res, context[9], context[12] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Pipe_S2L1Z2("Pipe$2\\1@2", COOKIE1_, COOKIE2_, func_gen_Pipe_S2L1Z2);


static refalrts::FnResult func_gen_Map_Z1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 33 elems
  refalrts::Iter context[33];
  refalrts::zeros( context, 33 );
  // </0 & Map@1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Map@1/4 (/7 e.new#1/5 )/8 e.new#2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  // closed e.new#2 as range 2
  do {
    // </0 & Map@1/4 (/7 e.new#5/9 )/8 t.new#3/13 e.new#4/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    // closed e.new#5 as range 9
    context[14] = refalrts::tvar_left( context[13], context[11], context[12] );
    if( ! context[14] )
      continue;
    // closed e.new#4 as range 11
    do {
      // </0 & Map@1/4 (/7 e.new#10/15 )/8 (/13 s.new#6/21 s.new#7/22 e.new#8/19 )/14 e.new#9/17 >/1
      context[15] = context[9];
      context[16] = context[10];
      context[17] = context[11];
      context[18] = context[12];
      context[19] = 0;
      context[20] = 0;
      if( ! refalrts::brackets_term( context[19], context[20], context[13] ) )
        continue;
      // closed e.new#10 as range 15
      // closed e.new#9 as range 17
      if( ! refalrts::svar_left( context[21], context[19], context[20] ) )
        continue;
      if( ! refalrts::svar_left( context[22], context[19], context[20] ) )
        continue;
      // closed e.new#8 as range 19
      do {
        // </0 & Map@1/4 (/7 e.Source#1/23 )/8 (/13 # TError/21 s.LineNumber#1/22 e.1#0/25 )/14 e.Tail#1/27 >/1
        context[23] = context[15];
        context[24] = context[16];
        context[25] = context[19];
        context[26] = context[20];
        context[27] = context[17];
        context[28] = context[18];
        if( ! refalrts::ident_term( identifiers[ident_TError], context[21] ) )
          continue;
        // closed e.Source#1 as range 23
        // closed e.1#0 as range 25
        // closed e.Tail#1 as range 27
        //DEBUG: s.LineNumber#1: 22
        //DEBUG: e.Source#1: 23
        //DEBUG: e.1#0: 25
        //DEBUG: e.Tail#1: 27

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } </29 Tile{ HalfReuse: & ErrorAt/13 HalfReuse: (/21 AsIs: s.LineNumber#1/22 } e.Source#1/23/30 Tile{ AsIs: )/14 } Tile{ AsIs: e.1#0/25 } >/32 Tile{ AsIs: </0 AsIs: & Map@1/4 AsIs: (/7 AsIs: e.Source#1/23 AsIs: )/8 } Tile{ AsIs: e.Tail#1/27 } Tile{ AsIs: >/1 ]] }
        refalrts::alloc_open_call(vm, context[29]);
        refalrts::copy_evar(vm, context[30], context[31], context[23], context[24]);
        refalrts::alloc_close_call(vm, context[32]);
        refalrts::reinit_name(context[13], functions[efunc_ErrorAt]);
        refalrts::reinit_open_bracket(context[21]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[7], context[8] );
        refalrts::push_stack( vm, context[32] );
        refalrts::push_stack( vm, context[29] );
        refalrts::link_brackets( context[21], context[14] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[27], context[28] );
        res = refalrts::splice_evar( res, context[0], context[8] );
        res = refalrts::splice_elem( res, context[32] );
        res = refalrts::splice_evar( res, context[25], context[26] );
        res = refalrts::splice_elem( res, context[14] );
        res = refalrts::splice_evar( res, context[30], context[31] );
        res = refalrts::splice_evar( res, context[13], context[22] );
        res = refalrts::splice_elem( res, context[29] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & Map@1/4 (/7 e.Source#1/23 )/8 (/13 s.TokType#1/21 s.LineNumber#1/22 e.1#0/25 )/14 e.Tail#1/27 >/1
      context[23] = context[15];
      context[24] = context[16];
      context[25] = context[19];
      context[26] = context[20];
      context[27] = context[17];
      context[28] = context[18];
      // closed e.Source#1 as range 23
      // closed e.1#0 as range 25
      // closed e.Tail#1 as range 27
      //DEBUG: s.TokType#1: 21
      //DEBUG: s.LineNumber#1: 22
      //DEBUG: e.Source#1: 23
      //DEBUG: e.1#0: 25
      //DEBUG: e.Tail#1: 27

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/13 AsIs: s.TokType#1/21 } (/29 Tile{ AsIs: s.LineNumber#1/22 } e.Source#1/23/30 )/32 Tile{ AsIs: e.1#0/25 } Tile{ AsIs: )/14 } Tile{ AsIs: </0 AsIs: & Map@1/4 AsIs: (/7 AsIs: e.Source#1/23 AsIs: )/8 } Tile{ AsIs: e.Tail#1/27 } Tile{ AsIs: >/1 ]] }
      refalrts::alloc_open_bracket(vm, context[29]);
      refalrts::copy_evar(vm, context[30], context[31], context[23], context[24]);
      refalrts::alloc_close_bracket(vm, context[32]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::link_brackets( context[13], context[14] );
      refalrts::link_brackets( context[29], context[32] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[27], context[28] );
      res = refalrts::splice_evar( res, context[0], context[8] );
      res = refalrts::splice_elem( res, context[14] );
      res = refalrts::splice_evar( res, context[25], context[26] );
      res = refalrts::splice_elem( res, context[32] );
      res = refalrts::splice_evar( res, context[30], context[31] );
      res = refalrts::splice_elem( res, context[22] );
      res = refalrts::splice_elem( res, context[29] );
      res = refalrts::splice_evar( res, context[13], context[21] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Map@1/4 (/7 e.Source#1/15 )/8 t.Next#1/13 e.Tail#1/17 >/1
    context[15] = context[9];
    context[16] = context[10];
    context[17] = context[11];
    context[18] = context[12];
    // closed e.Source#1 as range 15
    // closed e.Tail#1 as range 17
    //DEBUG: t.Next#1: 13
    //DEBUG: e.Source#1: 15
    //DEBUG: e.Tail#1: 17

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </19 & FillSourceToToken*2/20 e.Source#1/15/21 Tile{ AsIs: t.Next#1/13 } >/23 Tile{ AsIs: </0 AsIs: & Map@1/4 AsIs: (/7 AsIs: e.Source#1/15 AsIs: )/8 } Tile{ AsIs: e.Tail#1/17 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[19]);
    refalrts::alloc_name(vm, context[20], functions[efunc_gen_FillSourceToToken_D2]);
    refalrts::copy_evar(vm, context[21], context[22], context[15], context[16]);
    refalrts::alloc_close_call(vm, context[23]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::push_stack( vm, context[23] );
    refalrts::push_stack( vm, context[19] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[0], context[8] );
    res = refalrts::splice_elem( res, context[23] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[21], context[22] );
    res = refalrts::splice_evar( res, context[19], context[20] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Map@1/4 (/7 e.Source#1/9 )/8 >/1
    context[9] = context[5];
    context[10] = context[6];
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Source#1 as range 9
    //DEBUG: e.Source#1: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Map@1/4 (/7 e.Source#1/9 )/8 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Map@1/4 (/7 e.Source#1/5 )/8 e.items#0/2 >/1
  // closed e.Source#1 as range 5
  // closed e.items#0 as range 2
  //DEBUG: e.Source#1: 5
  //DEBUG: e.items#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </9 Tile{ HalfReuse: & Map@0/0 HalfReuse: (/4 HalfReuse: & FillSourceToToken@0/7 AsIs: e.Source#1/5 AsIs: )/8 AsIs: e.items#0/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[9]);
  refalrts::reinit_name(context[0], functions[efunc_gen_Map_Z0]);
  refalrts::reinit_open_bracket(context[4]);
  refalrts::reinit_name(context[7], functions[efunc_gen_FillSourceToToken_Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[9] );
  refalrts::link_brackets( context[4], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_elem( res, context[9] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Map_Z1("Map@1", COOKIE1_, COOKIE2_, func_gen_Map_Z1);


static refalrts::FnResult func_gen_Apply_Z4(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
  // </0 & Apply@4/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Apply@4/4 t.new#1/5 e.new#2/2 t.new#3/7 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  context[8] = refalrts::tvar_right( context[7], context[2], context[3] );
  if( ! context[8] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 2
  do {
    // </0 & Apply@4/4 s.Fn#1/5 e.X#0/9 t.X#0/7 >/1
    context[9] = context[2];
    context[10] = context[3];
    if( ! refalrts::svar_term( context[5], context[5] ) )
      continue;
    // closed e.X#0 as range 9
    //DEBUG: t.X#0: 7
    //DEBUG: s.Fn#1: 5
    //DEBUG: e.X#0: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & __Meta_Mu/4 AsIs: s.Fn#1/5 AsIs: e.X#0/9 AsIs: t.X#0/7 HalfReuse: & $table/1 } >/11 Tile{ ]] }
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
    // </0 & Apply@4/4 (/5 t.Closure#1/13 e.Bounded#1/11 )/6 e.X#0/9 t.X#0/7 >/1
    context[9] = context[2];
    context[10] = context[3];
    context[11] = 0;
    context[12] = 0;
    if( ! refalrts::brackets_term( context[11], context[12], context[5] ) )
      continue;
    // closed e.X#0 as range 9
    context[14] = refalrts::tvar_left( context[13], context[11], context[12] );
    if( ! context[14] )
      continue;
    // closed e.Bounded#1 as range 11
    //DEBUG: t.X#0: 7
    //DEBUG: e.X#0: 9
    //DEBUG: t.Closure#1: 13
    //DEBUG: e.Bounded#1: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} (/5 {REMOVED TILE} {REMOVED TILE} )/6 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Apply@4/4 } Tile{ AsIs: t.Closure#1/13 } Tile{ AsIs: e.Bounded#1/11 } Tile{ AsIs: e.X#0/9 } Tile{ AsIs: t.X#0/7 AsIs: >/1 ]] }
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

  // </0 & Apply@4/4 t.dyn#0/5 e.X#0/2 t.X#0/7 >/1
  // closed e.X#0 as range 2
  //DEBUG: t.dyn#0: 5
  //DEBUG: t.X#0: 7
  //DEBUG: e.X#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Apply@0/4 AsIs: t.dyn#0/5 AsIs: e.X#0/2 AsIs: t.X#0/7 AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_gen_Apply_Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Apply_Z4("Apply@4", COOKIE1_, COOKIE2_, func_gen_Apply_Z4);


static refalrts::FnResult func_gen_Apply_Z5(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & Apply@5/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Apply@5/4 t.new#1/5 e.new#2/2 t.new#3/9 t.new#4/7 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  context[8] = refalrts::tvar_right( context[7], context[2], context[3] );
  if( ! context[8] )
    return refalrts::cRecognitionImpossible;
  context[10] = refalrts::tvar_right( context[9], context[2], context[3] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 2
  do {
    // </0 & Apply@5/4 s.Fn#1/5 e.X#0/11 t.X#0/9 t.X0#0/7 >/1
    context[11] = context[2];
    context[12] = context[3];
    if( ! refalrts::svar_term( context[5], context[5] ) )
      continue;
    // closed e.X#0 as range 11
    //DEBUG: t.X#0: 9
    //DEBUG: t.X0#0: 7
    //DEBUG: s.Fn#1: 5
    //DEBUG: e.X#0: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & __Meta_Mu/4 AsIs: s.Fn#1/5 AsIs: e.X#0/11 AsIs: t.X#0/9 AsIs: t.X0#0/7 HalfReuse: & $table/1 } >/13 Tile{ ]] }
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
    // </0 & Apply@5/4 (/5 t.Closure#1/15 e.Bounded#1/13 )/6 e.X#0/11 t.X#0/9 t.X0#0/7 >/1
    context[11] = context[2];
    context[12] = context[3];
    context[13] = 0;
    context[14] = 0;
    if( ! refalrts::brackets_term( context[13], context[14], context[5] ) )
      continue;
    // closed e.X#0 as range 11
    context[16] = refalrts::tvar_left( context[15], context[13], context[14] );
    if( ! context[16] )
      continue;
    // closed e.Bounded#1 as range 13
    //DEBUG: t.X#0: 9
    //DEBUG: t.X0#0: 7
    //DEBUG: e.X#0: 11
    //DEBUG: t.Closure#1: 15
    //DEBUG: e.Bounded#1: 13

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} (/5 {REMOVED TILE} {REMOVED TILE} )/6 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Apply@5/4 } Tile{ AsIs: t.Closure#1/15 } Tile{ AsIs: e.Bounded#1/13 } Tile{ AsIs: e.X#0/11 } Tile{ AsIs: t.X#0/9 AsIs: t.X0#0/7 AsIs: >/1 ]] }
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

  // </0 & Apply@5/4 t.dyn#0/5 e.X#0/2 t.X#0/9 t.X0#0/7 >/1
  // closed e.X#0 as range 2
  //DEBUG: t.dyn#0: 5
  //DEBUG: t.X#0: 9
  //DEBUG: t.X0#0: 7
  //DEBUG: e.X#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Apply@0/4 AsIs: t.dyn#0/5 AsIs: e.X#0/2 AsIs: t.X#0/9 AsIs: t.X0#0/7 AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_gen_Apply_Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Apply_Z5("Apply@5", COOKIE1_, COOKIE2_, func_gen_Apply_Z5);


static refalrts::FnResult func_gen_Fetch_Z1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
  // </0 & Fetch@1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Fetch@1/4 (/7 e.new#1/5 )/8 e.new#2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  // closed e.new#2 as range 2
  do {
    // </0 & Fetch@1/4 (/7 e.Argument#1/9 )/8 e.Source#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    // closed e.Argument#1 as range 9
    // closed e.Source#1 as range 11
    //DEBUG: e.Argument#1: 9
    //DEBUG: e.Source#1: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch@3/4 HalfReuse: </7 } & Map@1/13 (/14 Tile{ AsIs: e.Source#1/11 } Tile{ AsIs: )/8 } Tile{ AsIs: e.Argument#1/9 } >/15 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_name(vm, context[13], functions[efunc_gen_Map_Z1]);
    refalrts::alloc_open_bracket(vm, context[14]);
    refalrts::alloc_close_call(vm, context[15]);
    refalrts::update_name(context[4], functions[efunc_gen_Fetch_Z3]);
    refalrts::reinit_open_call(context[7]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[15] );
    refalrts::push_stack( vm, context[7] );
    refalrts::link_brackets( context[14], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_elem( res, context[15] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_elem( res, context[8] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Fetch@1/4 (/7 e.arg#0/5 )/8 e.Source#1/2 >/1
  // closed e.arg#0 as range 5
  // closed e.Source#1 as range 2
  //DEBUG: e.arg#0: 5
  //DEBUG: e.Source#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch@0/4 } Tile{ AsIs: e.arg#0/5 } [*]/9 & Pipe$2\1@0/10 Tile{ AsIs: (/7 } & FillSourceToTokens@0/11 (/12 Tile{ AsIs: e.Source#1/2 } Tile{ AsIs: )/8 } )/13 (/14 & DFA-Parse@0/15 & DFA-Compile@0/16 & GenerateFromDFA@0/17 )/18 {*}/19 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_closure_head(vm, context[9]);
  refalrts::alloc_name(vm, context[10], functions[efunc_gen_Pipe_S2L1Z0]);
  refalrts::alloc_name(vm, context[11], functions[efunc_gen_FillSourceToTokens_Z0]);
  refalrts::alloc_open_bracket(vm, context[12]);
  refalrts::alloc_close_bracket(vm, context[13]);
  refalrts::alloc_open_bracket(vm, context[14]);
  refalrts::alloc_name(vm, context[15], functions[efunc_gen_DFAm_Parse_Z0]);
  refalrts::alloc_name(vm, context[16], functions[efunc_gen_DFAm_Compile_Z0]);
  refalrts::alloc_name(vm, context[17], functions[efunc_gen_GenerateFromDFA_Z0]);
  refalrts::alloc_close_bracket(vm, context[18]);
  refalrts::alloc_unwrapped_closure(vm, context[19], context[9]);
  refalrts::update_name(context[4], functions[efunc_gen_Fetch_Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[14], context[18] );
  refalrts::link_brackets( context[7], context[13] );
  refalrts::link_brackets( context[12], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[13], context[19] );
  res = refalrts::splice_elem( res, context[8] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_elem( res, context[7] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  refalrts::wrap_closure( context[19] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Fetch_Z1("Fetch@1", COOKIE1_, COOKIE2_, func_gen_Fetch_Z1);


static refalrts::FnResult func_gen_Fetch_Z2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
  // </0 & Fetch@2/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Fetch@2/4 (/7 e.new#1/5 )/8 e.new#2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  // closed e.new#2 as range 2
  do {
    // </0 & Fetch@2/4 (/7 e.Argument#1/9 )/8 e.Source#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    // closed e.Argument#1 as range 9
    // closed e.Source#1 as range 11
    //DEBUG: e.Argument#1: 9
    //DEBUG: e.Source#1: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch@4/4 HalfReuse: </7 } & Map@1/13 (/14 Tile{ AsIs: e.Source#1/11 } Tile{ AsIs: )/8 } Tile{ AsIs: e.Argument#1/9 } >/15 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_name(vm, context[13], functions[efunc_gen_Map_Z1]);
    refalrts::alloc_open_bracket(vm, context[14]);
    refalrts::alloc_close_call(vm, context[15]);
    refalrts::update_name(context[4], functions[efunc_gen_Fetch_Z4]);
    refalrts::reinit_open_call(context[7]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[15] );
    refalrts::push_stack( vm, context[7] );
    refalrts::link_brackets( context[14], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_elem( res, context[15] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_elem( res, context[8] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Fetch@2/4 (/7 e.arg#0/5 )/8 e.Source#1/2 >/1
  // closed e.arg#0 as range 5
  // closed e.Source#1 as range 2
  //DEBUG: e.arg#0: 5
  //DEBUG: e.Source#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch@0/4 } Tile{ AsIs: e.arg#0/5 } [*]/9 & Pipe$2\1@0/10 Tile{ AsIs: (/7 } & FillSourceToTokens@0/11 (/12 Tile{ AsIs: e.Source#1/2 } Tile{ AsIs: )/8 } )/13 (/14 & Flex-Parse@0/15 & GetFlexTranslator\1@0/16 & Flex-Desugar@0/17 & Flex-Compile@0/18 )/19 {*}/20 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_closure_head(vm, context[9]);
  refalrts::alloc_name(vm, context[10], functions[efunc_gen_Pipe_S2L1Z0]);
  refalrts::alloc_name(vm, context[11], functions[efunc_gen_FillSourceToTokens_Z0]);
  refalrts::alloc_open_bracket(vm, context[12]);
  refalrts::alloc_close_bracket(vm, context[13]);
  refalrts::alloc_open_bracket(vm, context[14]);
  refalrts::alloc_name(vm, context[15], functions[efunc_gen_Flexm_Parse_Z0]);
  refalrts::alloc_name(vm, context[16], functions[efunc_gen_GetFlexTranslator_L1Z0]);
  refalrts::alloc_name(vm, context[17], functions[efunc_gen_Flexm_Desugar_Z0]);
  refalrts::alloc_name(vm, context[18], functions[efunc_gen_Flexm_Compile_Z0]);
  refalrts::alloc_close_bracket(vm, context[19]);
  refalrts::alloc_unwrapped_closure(vm, context[20], context[9]);
  refalrts::update_name(context[4], functions[efunc_gen_Fetch_Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[14], context[19] );
  refalrts::link_brackets( context[7], context[13] );
  refalrts::link_brackets( context[12], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[13], context[20] );
  res = refalrts::splice_elem( res, context[8] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_elem( res, context[7] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  refalrts::wrap_closure( context[20] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Fetch_Z2("Fetch@2", COOKIE1_, COOKIE2_, func_gen_Fetch_Z2);


static refalrts::FnResult func_gen_Fetch_Z3(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
  // </0 & Fetch@3/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & Fetch@3/4 e.Argument#1/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    // closed e.Argument#1 as range 5
    //DEBUG: e.Argument#1: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </7 & Fetch@5/8 Tile{ AsIs: </0 Reuse: & DFA-Parse/4 AsIs: e.Argument#1/5 AsIs: >/1 } >/9 Tile{ ]] }
    refalrts::alloc_open_call(vm, context[7]);
    refalrts::alloc_name(vm, context[8], functions[efunc_gen_Fetch_Z5]);
    refalrts::alloc_close_call(vm, context[9]);
    refalrts::update_name(context[4], functions[efunc_DFAm_Parse]);
    refalrts::push_stack( vm, context[9] );
    refalrts::push_stack( vm, context[7] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_elem( res, context[9] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Fetch@3/4 e.arg#0/2 >/1
  // closed e.arg#0 as range 2
  //DEBUG: e.arg#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch@0/4 AsIs: e.arg#0/2 HalfReuse: [*]/1 } & Pipe$2\1@0/5 & DFA-Parse@0/6 (/7 & DFA-Compile@0/8 & GenerateFromDFA@0/9 )/10 {*}/11 >/12 Tile{ ]] }
  refalrts::alloc_name(vm, context[5], functions[efunc_gen_Pipe_S2L1Z0]);
  refalrts::alloc_name(vm, context[6], functions[efunc_gen_DFAm_Parse_Z0]);
  refalrts::alloc_open_bracket(vm, context[7]);
  refalrts::alloc_name(vm, context[8], functions[efunc_gen_DFAm_Compile_Z0]);
  refalrts::alloc_name(vm, context[9], functions[efunc_gen_GenerateFromDFA_Z0]);
  refalrts::alloc_close_bracket(vm, context[10]);
  refalrts::alloc_unwrapped_closure(vm, context[11], context[1]);
  refalrts::alloc_close_call(vm, context[12]);
  refalrts::update_name(context[4], functions[efunc_gen_Fetch_Z0]);
  refalrts::reinit_closure_head(context[1]);
  refalrts::push_stack( vm, context[12] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[12] );
  refalrts::use( res );
  refalrts::wrap_closure( context[11] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Fetch_Z3("Fetch@3", COOKIE1_, COOKIE2_, func_gen_Fetch_Z3);


static refalrts::FnResult func_gen_Fetch_Z4(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  // </0 & Fetch@4/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & Fetch@4/4 e.Argument#1/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    // closed e.Argument#1 as range 5
    //DEBUG: e.Argument#1: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </7 & Fetch@6/8 Tile{ AsIs: </0 Reuse: & Flex-Parse/4 AsIs: e.Argument#1/5 AsIs: >/1 } >/9 Tile{ ]] }
    refalrts::alloc_open_call(vm, context[7]);
    refalrts::alloc_name(vm, context[8], functions[efunc_gen_Fetch_Z6]);
    refalrts::alloc_close_call(vm, context[9]);
    refalrts::update_name(context[4], functions[efunc_Flexm_Parse]);
    refalrts::push_stack( vm, context[9] );
    refalrts::push_stack( vm, context[7] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_elem( res, context[9] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Fetch@4/4 e.arg#0/2 >/1
  // closed e.arg#0 as range 2
  //DEBUG: e.arg#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch@0/4 AsIs: e.arg#0/2 HalfReuse: [*]/1 } & Pipe$2\1@0/5 & Flex-Parse@0/6 (/7 & GetFlexTranslator\1@0/8 & Flex-Desugar@0/9 & Flex-Compile@0/10 )/11 {*}/12 >/13 Tile{ ]] }
  refalrts::alloc_name(vm, context[5], functions[efunc_gen_Pipe_S2L1Z0]);
  refalrts::alloc_name(vm, context[6], functions[efunc_gen_Flexm_Parse_Z0]);
  refalrts::alloc_open_bracket(vm, context[7]);
  refalrts::alloc_name(vm, context[8], functions[efunc_gen_GetFlexTranslator_L1Z0]);
  refalrts::alloc_name(vm, context[9], functions[efunc_gen_Flexm_Desugar_Z0]);
  refalrts::alloc_name(vm, context[10], functions[efunc_gen_Flexm_Compile_Z0]);
  refalrts::alloc_close_bracket(vm, context[11]);
  refalrts::alloc_unwrapped_closure(vm, context[12], context[1]);
  refalrts::alloc_close_call(vm, context[13]);
  refalrts::update_name(context[4], functions[efunc_gen_Fetch_Z0]);
  refalrts::reinit_closure_head(context[1]);
  refalrts::push_stack( vm, context[13] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[11] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[13] );
  refalrts::use( res );
  refalrts::wrap_closure( context[12] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Fetch_Z4("Fetch@4", COOKIE1_, COOKIE2_, func_gen_Fetch_Z4);


static refalrts::FnResult func_gen_Fetch_Z5(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  // </0 & Fetch@5/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & Fetch@5/4 e.Argument#1/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    // closed e.Argument#1 as range 5
    //DEBUG: e.Argument#1: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </7 & Fetch@7/8 Tile{ AsIs: </0 Reuse: & DFA-Compile/4 AsIs: e.Argument#1/5 AsIs: >/1 } >/9 Tile{ ]] }
    refalrts::alloc_open_call(vm, context[7]);
    refalrts::alloc_name(vm, context[8], functions[efunc_gen_Fetch_Z7]);
    refalrts::alloc_close_call(vm, context[9]);
    refalrts::update_name(context[4], functions[efunc_DFAm_Compile]);
    refalrts::push_stack( vm, context[9] );
    refalrts::push_stack( vm, context[7] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_elem( res, context[9] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Fetch@5/4 e.arg#0/2 >/1
  // closed e.arg#0 as range 2
  //DEBUG: e.arg#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch@0/4 AsIs: e.arg#0/2 HalfReuse: [*]/1 } & Pipe$2\1@0/5 & DFA-Compile@0/6 (/7 & GenerateFromDFA@0/8 )/9 {*}/10 >/11 Tile{ ]] }
  refalrts::alloc_name(vm, context[5], functions[efunc_gen_Pipe_S2L1Z0]);
  refalrts::alloc_name(vm, context[6], functions[efunc_gen_DFAm_Compile_Z0]);
  refalrts::alloc_open_bracket(vm, context[7]);
  refalrts::alloc_name(vm, context[8], functions[efunc_gen_GenerateFromDFA_Z0]);
  refalrts::alloc_close_bracket(vm, context[9]);
  refalrts::alloc_unwrapped_closure(vm, context[10], context[1]);
  refalrts::alloc_close_call(vm, context[11]);
  refalrts::update_name(context[4], functions[efunc_gen_Fetch_Z0]);
  refalrts::reinit_closure_head(context[1]);
  refalrts::push_stack( vm, context[11] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[11] );
  refalrts::use( res );
  refalrts::wrap_closure( context[10] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Fetch_Z5("Fetch@5", COOKIE1_, COOKIE2_, func_gen_Fetch_Z5);


static refalrts::FnResult func_gen_Fetch_Z6(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
  // </0 & Fetch@6/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & Fetch@6/4 e.Argument#1/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    // closed e.Argument#1 as range 5
    //DEBUG: e.Argument#1: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </7 & Fetch@8/8 Tile{ AsIs: </0 Reuse: & Flex-Check/4 AsIs: e.Argument#1/5 AsIs: >/1 } e.Argument#1/5/9 >/11 Tile{ ]] }
    refalrts::alloc_open_call(vm, context[7]);
    refalrts::alloc_name(vm, context[8], functions[efunc_gen_Fetch_Z8]);
    refalrts::copy_evar(vm, context[9], context[10], context[5], context[6]);
    refalrts::alloc_close_call(vm, context[11]);
    refalrts::update_name(context[4], functions[efunc_Flexm_Check]);
    refalrts::push_stack( vm, context[11] );
    refalrts::push_stack( vm, context[7] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Fetch@6/4 e.arg#0/2 >/1
  // closed e.arg#0 as range 2
  //DEBUG: e.arg#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch@0/4 AsIs: e.arg#0/2 HalfReuse: [*]/1 } & Pipe$2\1@0/5 & GetFlexTranslator\1@0/6 (/7 & Flex-Desugar@0/8 & Flex-Compile@0/9 )/10 {*}/11 >/12 Tile{ ]] }
  refalrts::alloc_name(vm, context[5], functions[efunc_gen_Pipe_S2L1Z0]);
  refalrts::alloc_name(vm, context[6], functions[efunc_gen_GetFlexTranslator_L1Z0]);
  refalrts::alloc_open_bracket(vm, context[7]);
  refalrts::alloc_name(vm, context[8], functions[efunc_gen_Flexm_Desugar_Z0]);
  refalrts::alloc_name(vm, context[9], functions[efunc_gen_Flexm_Compile_Z0]);
  refalrts::alloc_close_bracket(vm, context[10]);
  refalrts::alloc_unwrapped_closure(vm, context[11], context[1]);
  refalrts::alloc_close_call(vm, context[12]);
  refalrts::update_name(context[4], functions[efunc_gen_Fetch_Z0]);
  refalrts::reinit_closure_head(context[1]);
  refalrts::push_stack( vm, context[12] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[12] );
  refalrts::use( res );
  refalrts::wrap_closure( context[11] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Fetch_Z6("Fetch@6", COOKIE1_, COOKIE2_, func_gen_Fetch_Z6);


static refalrts::FnResult func_gen_Fetch_Z7(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 7 elems
  refalrts::Iter context[7];
  refalrts::zeros( context, 7 );
  // </0 & Fetch@7/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & Fetch@7/4 e.Argument#1/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    // closed e.Argument#1 as range 5
    //DEBUG: e.Argument#1: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & GenerateFromDFA/4 AsIs: e.Argument#1/5 AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_GenerateFromDFA]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Fetch@7/4 e.arg#0/2 >/1
  // closed e.arg#0 as range 2
  //DEBUG: e.arg#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch@0/4 AsIs: e.arg#0/2 HalfReuse: & GenerateFromDFA@0/1 } >/5 Tile{ ]] }
  refalrts::alloc_close_call(vm, context[5]);
  refalrts::update_name(context[4], functions[efunc_gen_Fetch_Z0]);
  refalrts::reinit_name(context[1], functions[efunc_gen_GenerateFromDFA_Z0]);
  refalrts::push_stack( vm, context[5] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_elem( res, context[5] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Fetch_Z7("Fetch@7", COOKIE1_, COOKIE2_, func_gen_Fetch_Z7);


static refalrts::FnResult func_gen_Fetch_Z8(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  // </0 & Fetch@8/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & Fetch@8/4 e.Argument#1/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    // closed e.Argument#1 as range 5
    //DEBUG: e.Argument#1: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </7 & Fetch@9/8 Tile{ AsIs: </0 Reuse: & Flex-Desugar/4 AsIs: e.Argument#1/5 AsIs: >/1 } >/9 Tile{ ]] }
    refalrts::alloc_open_call(vm, context[7]);
    refalrts::alloc_name(vm, context[8], functions[efunc_gen_Fetch_Z9]);
    refalrts::alloc_close_call(vm, context[9]);
    refalrts::update_name(context[4], functions[efunc_Flexm_Desugar]);
    refalrts::push_stack( vm, context[9] );
    refalrts::push_stack( vm, context[7] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_elem( res, context[9] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Fetch@8/4 e.arg#0/2 >/1
  // closed e.arg#0 as range 2
  //DEBUG: e.arg#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch@0/4 AsIs: e.arg#0/2 HalfReuse: [*]/1 } & Pipe$2\1@0/5 & Flex-Desugar@0/6 (/7 & Flex-Compile@0/8 )/9 {*}/10 >/11 Tile{ ]] }
  refalrts::alloc_name(vm, context[5], functions[efunc_gen_Pipe_S2L1Z0]);
  refalrts::alloc_name(vm, context[6], functions[efunc_gen_Flexm_Desugar_Z0]);
  refalrts::alloc_open_bracket(vm, context[7]);
  refalrts::alloc_name(vm, context[8], functions[efunc_gen_Flexm_Compile_Z0]);
  refalrts::alloc_close_bracket(vm, context[9]);
  refalrts::alloc_unwrapped_closure(vm, context[10], context[1]);
  refalrts::alloc_close_call(vm, context[11]);
  refalrts::update_name(context[4], functions[efunc_gen_Fetch_Z0]);
  refalrts::reinit_closure_head(context[1]);
  refalrts::push_stack( vm, context[11] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[11] );
  refalrts::use( res );
  refalrts::wrap_closure( context[10] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Fetch_Z8("Fetch@8", COOKIE1_, COOKIE2_, func_gen_Fetch_Z8);


static refalrts::FnResult func_gen_Fetch_Z9(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 7 elems
  refalrts::Iter context[7];
  refalrts::zeros( context, 7 );
  // </0 & Fetch@9/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & Fetch@9/4 e.Argument#1/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    // closed e.Argument#1 as range 5
    //DEBUG: e.Argument#1: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Fetch@9/4 e.Argument#1/5 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Fetch@9/4 e.arg#0/2 >/1
  // closed e.arg#0 as range 2
  //DEBUG: e.arg#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch@0/4 AsIs: e.arg#0/2 HalfReuse: & Flex-Compile@0/1 } >/5 Tile{ ]] }
  refalrts::alloc_close_call(vm, context[5]);
  refalrts::update_name(context[4], functions[efunc_gen_Fetch_Z0]);
  refalrts::reinit_name(context[1], functions[efunc_gen_Flexm_Compile_Z0]);
  refalrts::push_stack( vm, context[5] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_elem( res, context[5] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Fetch_Z9("Fetch@9", COOKIE1_, COOKIE2_, func_gen_Fetch_Z9);


//End of file
