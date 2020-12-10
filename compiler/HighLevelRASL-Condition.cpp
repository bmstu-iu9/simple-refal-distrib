// This file automatically generated from 'HighLevelRASL-Condition.ref'
// Don't edit! Edit 'HighLevelRASL-Condition.ref' and recompile it

#include "refalrts.h"

#define cookie_ns cookie_ns_2271934433_4140915981
#define COOKIE1_ 2271934433U
#define COOKIE2_ 4140915981U

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
  efunc_FoldOpenELoops = 18,
  efunc_gen_SentenceTail_S1A8 = 19,
  efunc_PutVariableDebugTable = 20,
  efunc_Max = 21,
  efunc_gen_SentenceTail_S1A7 = 22,
  efunc_gen_SentenceTail_S1A6 = 23,
  efunc_SentenceTail = 24,
  efunc_gen_SentenceTail_S1A4D1 = 25,
  efunc_gen_SentenceTail_S1A3 = 26,
  efunc_GenSubstm_Save = 27,
  efunc_GenInitSubst = 28,
  efunc_gen_SentenceTail_S1A2 = 29,
  efunc_GenResultm_Condition = 30,
  efunc_Inc2 = 31,
  efunc_gen_SentenceTail_S1A1 = 32,
  efunc_Mu = 33,
  efunc_Up = 34,
  efunc_Evm_met = 35,
  efunc_Residue = 36,
  efunc_u_u_Metau_Residue = 37,
  efunc_MapAccum = 38,
  efunc_UnBracket = 39,
  efunc_DelAccumulator = 40,
  efunc_Inc = 41,
  efunc_Dec = 42,
  efunc_gen_Apply_Z4 = 43,
};


enum ident {
  ident_CmdCallCondition = 0,
  ident_CmdProfileFunction = 1,
  ident_CmdFail = 2,
  ident_CmdSentence = 3,
  ident_CmdSpliceToFreeListm_Range = 4,
  ident_Condition = 5,
  ident_TkOpenCallCond = 6,
  ident_TkCloseCallCond = 7,
  ident_Symbol = 8,
  ident_Name = 9,
  ident_Mu = 10,
  ident_Up = 11,
  ident_Evm_met = 12,
  ident_Residue = 13,
  ident_u_u_Metau_Residue = 14,
  ident_Apply = 15,
  ident_Map = 16,
  ident_Reduce = 17,
  ident_Fetch = 18,
  ident_MapAccum = 19,
  ident_DoMapAccum = 20,
  ident_UnBracket = 21,
  ident_DelAccumulator = 22,
  ident_Inc = 23,
  ident_Dec = 24,
  ident_Pipe = 25,
  ident_SentenceTail = 26,
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
      //RESULT: Tile{ [[ } </17 & Apply@3/18 t.#0/15/19 e.0#0/13/21 Tile{ AsIs: t.Next#1/9 } >/23 Tile{ AsIs: </0 AsIs: & Map/4 AsIs: (/5 AsIs: t.#0/15 AsIs: e.0#0/13 AsIs: )/6 } Tile{ AsIs: e.Tail#1/11 } Tile{ AsIs: >/1 ]] }
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


static refalrts::FnResult func_gen_SentenceTail_S1A8(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
  // </0 & SentenceTail$1=8/4 s.StackTop#8/5 (/8 e.CondResultCommands#2/6 )/9 e.CmdSentenceCommands#9/2 >/1
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
  // closed e.CondResultCommands#2 as range 6
  // closed e.CmdSentenceCommands#9 as range 2
  //DEBUG: s.StackTop#8: 5
  //DEBUG: e.CondResultCommands#2: 6
  //DEBUG: e.CmdSentenceCommands#9: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} s.StackTop#8/5 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: s.StackTop8 #5/0 } Tile{ AsIs: e.CondResultCommands#2/6 } Tile{ AsIs: (/8 } # CmdCallCondition/10 Tile{ HalfReuse: )/4 } (/11 # CmdProfileFunction/12 Tile{ AsIs: )/9 AsIs: e.CmdSentenceCommands#9/2 HalfReuse: (/1 } # CmdFail/13 )/14 Tile{ ]] }
  refalrts::alloc_ident(vm, context[10], identifiers[ident_CmdCallCondition]);
  refalrts::alloc_open_bracket(vm, context[11]);
  refalrts::alloc_ident(vm, context[12], identifiers[ident_CmdProfileFunction]);
  refalrts::alloc_ident(vm, context[13], identifiers[ident_CmdFail]);
  refalrts::alloc_close_bracket(vm, context[14]);
  refalrts::reinit_svar( context[0], context[5] );
  refalrts::reinit_close_bracket(context[4]);
  refalrts::reinit_open_bracket(context[1]);
  refalrts::link_brackets( context[1], context[14] );
  refalrts::link_brackets( context[11], context[9] );
  refalrts::link_brackets( context[8], context[4] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[9], context[1] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_elem( res, context[4] );
  res = refalrts::splice_elem( res, context[10] );
  res = refalrts::splice_elem( res, context[8] );
  res = refalrts::splice_evar( res, context[6], context[7] );
  refalrts::splice_to_freelist_open( vm, context[0], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_SentenceTail_S1A8("SentenceTail$1=8", COOKIE1_, COOKIE2_, func_gen_SentenceTail_S1A8);


static refalrts::FnResult func_gen_SentenceTail_S1A7(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 35 elems
  refalrts::Iter context[35];
  refalrts::zeros( context, 35 );
  // </0 & SentenceTail$1=7/4 (/7 e.CondResultCommands#2/5 )/8 (/11 e.CondPatternCommands#4/9 )/12 (/15 e.PatternVars#4/13 )/16 (/19 e.NestedSentence#7/17 )/20 s.StartOffsetCond#1/21 s.StackTop#8/22 >/1
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
  // closed e.CondResultCommands#2 as range 5
  // closed e.CondPatternCommands#4 as range 9
  // closed e.PatternVars#4 as range 13
  // closed e.NestedSentence#7 as range 17
  if( ! refalrts::svar_left( context[21], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[22], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: e.CondResultCommands#2: 5
  //DEBUG: e.CondPatternCommands#4: 9
  //DEBUG: e.PatternVars#4: 13
  //DEBUG: e.NestedSentence#7: 17
  //DEBUG: s.StartOffsetCond#1: 21
  //DEBUG: s.StackTop#8: 22

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.StackTop#8/22 {REMOVED TILE}
  //RESULT: Tile{ [[ } </23 Tile{ HalfReuse: & SentenceTail$1=8/0 HalfReuse: s.StackTop8 #22/4 AsIs: (/7 AsIs: e.CondResultCommands#2/5 AsIs: )/8 AsIs: (/11 } # CmdSentence/24 </25 & FoldOpenELoops/26 Tile{ AsIs: e.CondPatternCommands#4/9 } Tile{ HalfReuse: </12 HalfReuse: & PutVariableDebugTable/15 AsIs: e.PatternVars#4/13 HalfReuse: >/16 } Tile{ AsIs: e.NestedSentence#7/17 } >/27 )/28 Tile{ AsIs: (/19 } # CmdSpliceToFreeList-Range/29 s.StartOffsetCond#1/21/30 </31 & Add/32 Tile{ HalfReuse: 1/20 AsIs: s.StartOffsetCond#1/21 } >/33 )/34 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[23]);
  refalrts::alloc_ident(vm, context[24], identifiers[ident_CmdSentence]);
  refalrts::alloc_open_call(vm, context[25]);
  refalrts::alloc_name(vm, context[26], functions[efunc_FoldOpenELoops]);
  refalrts::alloc_close_call(vm, context[27]);
  refalrts::alloc_close_bracket(vm, context[28]);
  refalrts::alloc_ident(vm, context[29], identifiers[ident_CmdSpliceToFreeListm_Range]);
  refalrts::copy_stvar(vm, context[30], context[21]);
  refalrts::alloc_open_call(vm, context[31]);
  refalrts::alloc_name(vm, context[32], functions[efunc_Add]);
  refalrts::alloc_close_call(vm, context[33]);
  refalrts::alloc_close_bracket(vm, context[34]);
  refalrts::reinit_name(context[0], functions[efunc_gen_SentenceTail_S1A8]);
  refalrts::reinit_svar( context[4], context[22] );
  refalrts::reinit_open_call(context[12]);
  refalrts::reinit_name(context[15], functions[efunc_PutVariableDebugTable]);
  refalrts::reinit_close_call(context[16]);
  refalrts::reinit_number(context[20], 1UL);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[23] );
  refalrts::link_brackets( context[19], context[34] );
  refalrts::push_stack( vm, context[33] );
  refalrts::push_stack( vm, context[31] );
  refalrts::link_brackets( context[11], context[28] );
  refalrts::push_stack( vm, context[27] );
  refalrts::push_stack( vm, context[25] );
  refalrts::push_stack( vm, context[16] );
  refalrts::push_stack( vm, context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[33], context[34] );
  res = refalrts::splice_evar( res, context[20], context[21] );
  res = refalrts::splice_evar( res, context[29], context[32] );
  res = refalrts::splice_elem( res, context[19] );
  res = refalrts::splice_evar( res, context[27], context[28] );
  res = refalrts::splice_evar( res, context[17], context[18] );
  res = refalrts::splice_evar( res, context[12], context[16] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[24], context[26] );
  res = refalrts::splice_evar( res, context[0], context[11] );
  res = refalrts::splice_elem( res, context[23] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_SentenceTail_S1A7("SentenceTail$1=7", COOKIE1_, COOKIE2_, func_gen_SentenceTail_S1A7);


static refalrts::FnResult func_gen_SentenceTail_S1A6(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 25 elems
  refalrts::Iter context[25];
  refalrts::zeros( context, 25 );
  // </0 & SentenceTail$1=6/4 (/7 e.CondResultCommands#2/5 )/8 (/11 e.CondPatternCommands#4/9 )/12 (/15 e.PatternVars#4/13 )/16 s.StartOffsetCond#1/17 s.EndOffsetCond-Res#2/18 s.NestedStackTop#7/19 e.NestedSentence#7/2 >/1
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
  // closed e.CondResultCommands#2 as range 5
  // closed e.CondPatternCommands#4 as range 9
  // closed e.PatternVars#4 as range 13
  if( ! refalrts::svar_left( context[17], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[18], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[19], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.NestedSentence#7 as range 2
  //DEBUG: e.CondResultCommands#2: 5
  //DEBUG: e.CondPatternCommands#4: 9
  //DEBUG: e.PatternVars#4: 13
  //DEBUG: s.StartOffsetCond#1: 17
  //DEBUG: s.EndOffsetCond-Res#2: 18
  //DEBUG: s.NestedStackTop#7: 19
  //DEBUG: e.NestedSentence#7: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & SentenceTail$1=7/4 AsIs: (/7 AsIs: e.CondResultCommands#2/5 AsIs: )/8 AsIs: (/11 AsIs: e.CondPatternCommands#4/9 AsIs: )/12 AsIs: (/15 AsIs: e.PatternVars#4/13 AsIs: )/16 } (/20 Tile{ AsIs: e.NestedSentence#7/2 } )/21 Tile{ AsIs: s.StartOffsetCond#1/17 } </22 & Max/23 Tile{ AsIs: s.EndOffsetCond-Res#2/18 AsIs: s.NestedStackTop#7/19 } >/24 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[20]);
  refalrts::alloc_close_bracket(vm, context[21]);
  refalrts::alloc_open_call(vm, context[22]);
  refalrts::alloc_name(vm, context[23], functions[efunc_Max]);
  refalrts::alloc_close_call(vm, context[24]);
  refalrts::update_name(context[4], functions[efunc_gen_SentenceTail_S1A7]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[24] );
  refalrts::push_stack( vm, context[22] );
  refalrts::link_brackets( context[20], context[21] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_elem( res, context[24] );
  res = refalrts::splice_evar( res, context[18], context[19] );
  res = refalrts::splice_evar( res, context[22], context[23] );
  res = refalrts::splice_elem( res, context[17] );
  res = refalrts::splice_elem( res, context[21] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_elem( res, context[20] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_SentenceTail_S1A6("SentenceTail$1=6", COOKIE1_, COOKIE2_, func_gen_SentenceTail_S1A6);


static refalrts::FnResult func_gen_SentenceTail_S1A3(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 53 elems
  refalrts::Iter context[53];
  refalrts::zeros( context, 53 );
  // </0 & SentenceTail$1=3/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & SentenceTail$1=3/4 (/7 e.new#1/5 )/8 s.new#2/9 s.new#3/10 (/13 e.new#4/11 )/14 (/17 e.new#5/15 )/18 (/21 e.new#6/19 )/22 s.new#7/23 (/26 e.new#8/24 )/27 (/30 e.new#9/28 )/31 e.new#10/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
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
  // closed e.new#4 as range 11
  // closed e.new#5 as range 15
  // closed e.new#6 as range 19
  if( ! refalrts::svar_left( context[23], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
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
  // closed e.new#8 as range 24
  // closed e.new#9 as range 28
  // closed e.new#10 as range 2
  do {
    // </0 & SentenceTail$1=3/4 (/7 e.CondResultCommands#2/32 )/8 s.StartOffsetCond#1/9 s.EndOffsetCond-Res#2/10 (/13 e.ConditionsTail#1/34 )/14 (/17 e.ResultSentence#1/36 )/18 (/21 e.#0/38 t.#0/46 )/22 s.StartOffsetCondNext#4/23 (/26 e.PatternVars#4/40 )/27 (/30 e.MarkedPatternCond#4/42 )/31 e.CondPatternCommands#4/44 >/1
    context[32] = context[5];
    context[33] = context[6];
    context[34] = context[11];
    context[35] = context[12];
    context[36] = context[15];
    context[37] = context[16];
    context[38] = context[19];
    context[39] = context[20];
    context[40] = context[24];
    context[41] = context[25];
    context[42] = context[28];
    context[43] = context[29];
    context[44] = context[2];
    context[45] = context[3];
    // closed e.CondResultCommands#2 as range 32
    // closed e.ConditionsTail#1 as range 34
    // closed e.ResultSentence#1 as range 36
    // closed e.PatternVars#4 as range 40
    // closed e.MarkedPatternCond#4 as range 42
    // closed e.CondPatternCommands#4 as range 44
    context[47] = refalrts::tvar_right( context[46], context[38], context[39] );
    if( ! context[47] )
      continue;
    // closed e.#0 as range 38
    //DEBUG: s.StartOffsetCond#1: 9
    //DEBUG: s.EndOffsetCond-Res#2: 10
    //DEBUG: s.StartOffsetCondNext#4: 23
    //DEBUG: e.CondResultCommands#2: 32
    //DEBUG: e.ConditionsTail#1: 34
    //DEBUG: e.ResultSentence#1: 36
    //DEBUG: e.PatternVars#4: 40
    //DEBUG: e.MarkedPatternCond#4: 42
    //DEBUG: e.CondPatternCommands#4: 44
    //DEBUG: t.#0: 46
    //DEBUG: e.#0: 38

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & SentenceTail$1=6/4 AsIs: (/7 AsIs: e.CondResultCommands#2/32 AsIs: )/8 } (/48 Tile{ AsIs: e.CondPatternCommands#4/44 } Tile{ AsIs: )/31 } (/49 e.PatternVars#4/40/50 Tile{ AsIs: )/14 } Tile{ AsIs: s.StartOffsetCond#1/9 AsIs: s.EndOffsetCond-Res#2/10 HalfReuse: </13 } Tile{ HalfReuse: & SentenceTail/22 AsIs: s.StartOffsetCondNext#4/23 AsIs: (/26 AsIs: e.PatternVars#4/40 AsIs: )/27 AsIs: (/30 } Tile{ AsIs: e.#0/38 } Tile{ AsIs: e.MarkedPatternCond#4/42 } Tile{ AsIs: t.#0/46 } )/52 Tile{ AsIs: e.ConditionsTail#1/34 } Tile{ AsIs: (/17 AsIs: e.ResultSentence#1/36 AsIs: )/18 HalfReuse: >/21 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_bracket(vm, context[48]);
    refalrts::alloc_open_bracket(vm, context[49]);
    refalrts::copy_evar(vm, context[50], context[51], context[40], context[41]);
    refalrts::alloc_close_bracket(vm, context[52]);
    refalrts::update_name(context[4], functions[efunc_gen_SentenceTail_S1A6]);
    refalrts::reinit_open_call(context[13]);
    refalrts::reinit_name(context[22], functions[efunc_SentenceTail]);
    refalrts::reinit_close_call(context[21]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[21] );
    refalrts::push_stack( vm, context[13] );
    refalrts::link_brackets( context[17], context[18] );
    refalrts::link_brackets( context[30], context[52] );
    refalrts::link_brackets( context[26], context[27] );
    refalrts::link_brackets( context[49], context[14] );
    refalrts::link_brackets( context[48], context[31] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[17], context[21] );
    res = refalrts::splice_evar( res, context[34], context[35] );
    res = refalrts::splice_elem( res, context[52] );
    res = refalrts::splice_evar( res, context[46], context[47] );
    res = refalrts::splice_evar( res, context[42], context[43] );
    res = refalrts::splice_evar( res, context[38], context[39] );
    res = refalrts::splice_evar( res, context[22], context[30] );
    res = refalrts::splice_evar( res, context[9], context[13] );
    res = refalrts::splice_elem( res, context[14] );
    res = refalrts::splice_evar( res, context[50], context[51] );
    res = refalrts::splice_elem( res, context[49] );
    res = refalrts::splice_elem( res, context[31] );
    res = refalrts::splice_evar( res, context[44], context[45] );
    res = refalrts::splice_elem( res, context[48] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & SentenceTail$1=3/4 (/7 e.CondResultCommands#2/5 )/8 s.StartOffsetCond#1/9 s.EndOffsetCond-Res#2/10 (/13 e.ConditionsTail#1/11 )/14 (/17 e.ResultSentence#1/15 )/18 (/21 e.MarkedPattern#1/19 )/22 s.StartOffsetCondNext#4/23 (/26 e.PatternVars#4/24 )/27 (/30 e.MarkedPatternCond#4/28 )/31 e.CondPatternCommands#4/2 >/1
  // closed e.CondResultCommands#2 as range 5
  // closed e.ConditionsTail#1 as range 11
  // closed e.ResultSentence#1 as range 15
  // closed e.MarkedPattern#1 as range 19
  // closed e.PatternVars#4 as range 24
  // closed e.MarkedPatternCond#4 as range 28
  // closed e.CondPatternCommands#4 as range 2
  //DEBUG: s.StartOffsetCond#1: 9
  //DEBUG: s.EndOffsetCond-Res#2: 10
  //DEBUG: s.StartOffsetCondNext#4: 23
  //DEBUG: e.CondResultCommands#2: 5
  //DEBUG: e.ConditionsTail#1: 11
  //DEBUG: e.ResultSentence#1: 15
  //DEBUG: e.MarkedPattern#1: 19
  //DEBUG: e.PatternVars#4: 24
  //DEBUG: e.MarkedPatternCond#4: 28
  //DEBUG: e.CondPatternCommands#4: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} s.StartOffsetCond#1/9 s.EndOffsetCond-Res#2/10 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & SentenceTail$1=4*1/4 AsIs: (/7 AsIs: e.CondResultCommands#2/5 AsIs: )/8 } (/32 Tile{ AsIs: e.CondPatternCommands#4/2 } Tile{ AsIs: )/31 } Tile{ AsIs: (/26 AsIs: e.PatternVars#4/24 AsIs: )/27 HalfReuse: s.StartOffsetCond1 #9/30 } Tile{ HalfReuse: s.EndOffsetCond-Res2 #10/22 AsIs: s.StartOffsetCondNext#4/23 } Tile{ AsIs: (/13 AsIs: e.ConditionsTail#1/11 AsIs: )/14 AsIs: (/17 AsIs: e.ResultSentence#1/15 AsIs: )/18 AsIs: (/21 } Tile{ AsIs: e.MarkedPatternCond#4/28 } )/33 Tile{ AsIs: e.MarkedPattern#1/19 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[32]);
  refalrts::alloc_close_bracket(vm, context[33]);
  refalrts::update_name(context[4], functions[efunc_gen_SentenceTail_S1A4D1]);
  refalrts::reinit_svar( context[30], context[9] );
  refalrts::reinit_svar( context[22], context[10] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[21], context[33] );
  refalrts::link_brackets( context[17], context[18] );
  refalrts::link_brackets( context[13], context[14] );
  refalrts::link_brackets( context[26], context[27] );
  refalrts::link_brackets( context[32], context[31] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[19], context[20] );
  res = refalrts::splice_elem( res, context[33] );
  res = refalrts::splice_evar( res, context[28], context[29] );
  res = refalrts::splice_evar( res, context[13], context[21] );
  res = refalrts::splice_evar( res, context[22], context[23] );
  res = refalrts::splice_evar( res, context[26], context[30] );
  res = refalrts::splice_elem( res, context[31] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_elem( res, context[32] );
  refalrts::splice_to_freelist_open( vm, context[8], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_SentenceTail_S1A3("SentenceTail$1=3", COOKIE1_, COOKIE2_, func_gen_SentenceTail_S1A3);


static refalrts::FnResult func_gen_SentenceTail_S1A2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 35 elems
  refalrts::Iter context[35];
  refalrts::zeros( context, 35 );
  // </0 & SentenceTail$1=2/4 (/7 e.CondResultCommands#2/5 )/8 s.StartOffsetCond#1/13 s.EndOffsetCond-Res#2/14 (/17 e.ConditionsTail#1/15 )/18 (/21 e.ResultSentence#1/19 )/22 (/25 e.MarkedPattern#1/23 )/26 (/29 e.PatternVars#1/27 )/30 s.OffsetCond#3/31 e.CondSubstitutes#3/2 (/11 e.FirstCondPatternCommands#3/9 )/12 >/1
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
  // closed e.CondResultCommands#2 as range 5
  // closed e.FirstCondPatternCommands#3 as range 9
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
  // closed e.ConditionsTail#1 as range 15
  // closed e.ResultSentence#1 as range 19
  // closed e.MarkedPattern#1 as range 23
  // closed e.PatternVars#1 as range 27
  if( ! refalrts::svar_left( context[31], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.CondSubstitutes#3 as range 2
  //DEBUG: e.CondResultCommands#2: 5
  //DEBUG: e.FirstCondPatternCommands#3: 9
  //DEBUG: s.StartOffsetCond#1: 13
  //DEBUG: s.EndOffsetCond-Res#2: 14
  //DEBUG: e.ConditionsTail#1: 15
  //DEBUG: e.ResultSentence#1: 19
  //DEBUG: e.MarkedPattern#1: 23
  //DEBUG: e.PatternVars#1: 27
  //DEBUG: s.OffsetCond#3: 31
  //DEBUG: e.CondSubstitutes#3: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & SentenceTail$1=3/4 AsIs: (/7 AsIs: e.CondResultCommands#2/5 AsIs: )/8 AsIs: s.StartOffsetCond#1/13 AsIs: s.EndOffsetCond-Res#2/14 AsIs: (/17 AsIs: e.ConditionsTail#1/15 AsIs: )/18 AsIs: (/21 AsIs: e.ResultSentence#1/19 AsIs: )/22 AsIs: (/25 AsIs: e.MarkedPattern#1/23 AsIs: )/26 HalfReuse: </29 } Tile{ HalfReuse: & GenSubst-Save/30 AsIs: s.OffsetCond#3/31 } Tile{ AsIs: e.CondSubstitutes#3/2 } (/32 Tile{ AsIs: e.PatternVars#1/27 } )/33 Tile{ AsIs: (/11 AsIs: e.FirstCondPatternCommands#3/9 AsIs: )/12 AsIs: >/1 } >/34 Tile{ ]] }
  refalrts::alloc_open_bracket(vm, context[32]);
  refalrts::alloc_close_bracket(vm, context[33]);
  refalrts::alloc_close_call(vm, context[34]);
  refalrts::update_name(context[4], functions[efunc_gen_SentenceTail_S1A3]);
  refalrts::reinit_open_call(context[29]);
  refalrts::reinit_name(context[30], functions[efunc_GenSubstm_Save]);
  refalrts::push_stack( vm, context[34] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[29] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[32], context[33] );
  refalrts::link_brackets( context[25], context[26] );
  refalrts::link_brackets( context[21], context[22] );
  refalrts::link_brackets( context[17], context[18] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_elem( res, context[34] );
  res = refalrts::splice_evar( res, context[11], context[1] );
  res = refalrts::splice_elem( res, context[33] );
  res = refalrts::splice_evar( res, context[27], context[28] );
  res = refalrts::splice_elem( res, context[32] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[30], context[31] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_SentenceTail_S1A2("SentenceTail$1=2", COOKIE1_, COOKIE2_, func_gen_SentenceTail_S1A2);


static refalrts::FnResult func_gen_SentenceTail_S1A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 35 elems
  refalrts::Iter context[35];
  refalrts::zeros( context, 35 );
  // </0 & SentenceTail$1=1/4 s.StartOffsetCond#1/5 (/8 e.ConditionsTail#1/6 )/9 (/12 e.ResultSentence#1/10 )/13 (/16 e.MarkedPattern#1/14 )/17 (/20 e.PatternVars#1/18 )/21 (/24 e.CondName#1/22 )/25 (/28 e.CondPattern#1/26 )/29 s.EndOffsetCond-Res#2/30 e.CondResultCommands#2/2 >/1
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
  // closed e.ConditionsTail#1 as range 6
  // closed e.ResultSentence#1 as range 10
  // closed e.MarkedPattern#1 as range 14
  // closed e.PatternVars#1 as range 18
  // closed e.CondName#1 as range 22
  // closed e.CondPattern#1 as range 26
  if( ! refalrts::svar_left( context[30], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.CondResultCommands#2 as range 2
  //DEBUG: s.StartOffsetCond#1: 5
  //DEBUG: e.ConditionsTail#1: 6
  //DEBUG: e.ResultSentence#1: 10
  //DEBUG: e.MarkedPattern#1: 14
  //DEBUG: e.PatternVars#1: 18
  //DEBUG: e.CondName#1: 22
  //DEBUG: e.CondPattern#1: 26
  //DEBUG: s.EndOffsetCond-Res#2: 30
  //DEBUG: e.CondResultCommands#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & SentenceTail$1=2/4 } (/31 Tile{ AsIs: e.CondResultCommands#2/2 } Tile{ AsIs: )/25 } Tile{ AsIs: s.StartOffsetCond#1/5 } Tile{ AsIs: s.EndOffsetCond-Res#2/30 } Tile{ AsIs: (/8 AsIs: e.ConditionsTail#1/6 AsIs: )/9 AsIs: (/12 AsIs: e.ResultSentence#1/10 AsIs: )/13 AsIs: (/16 AsIs: e.MarkedPattern#1/14 AsIs: )/17 AsIs: (/20 AsIs: e.PatternVars#1/18 AsIs: )/21 HalfReuse: </24 } & GenInitSubst/32 s.StartOffsetCond#1/5/33 (/34 Tile{ AsIs: e.CondName#1/22 } Tile{ HalfReuse: )/28 AsIs: e.CondPattern#1/26 HalfReuse: >/29 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[31]);
  refalrts::alloc_name(vm, context[32], functions[efunc_GenInitSubst]);
  refalrts::copy_stvar(vm, context[33], context[5]);
  refalrts::alloc_open_bracket(vm, context[34]);
  refalrts::update_name(context[4], functions[efunc_gen_SentenceTail_S1A2]);
  refalrts::reinit_open_call(context[24]);
  refalrts::reinit_close_bracket(context[28]);
  refalrts::reinit_close_call(context[29]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[29] );
  refalrts::push_stack( vm, context[24] );
  refalrts::link_brackets( context[34], context[28] );
  refalrts::link_brackets( context[20], context[21] );
  refalrts::link_brackets( context[16], context[17] );
  refalrts::link_brackets( context[12], context[13] );
  refalrts::link_brackets( context[8], context[9] );
  refalrts::link_brackets( context[31], context[25] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[28], context[29] );
  res = refalrts::splice_evar( res, context[22], context[23] );
  res = refalrts::splice_evar( res, context[32], context[34] );
  res = refalrts::splice_evar( res, context[8], context[24] );
  res = refalrts::splice_elem( res, context[30] );
  res = refalrts::splice_elem( res, context[5] );
  res = refalrts::splice_elem( res, context[25] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_elem( res, context[31] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_SentenceTail_S1A1("SentenceTail$1=1", COOKIE1_, COOKIE2_, func_gen_SentenceTail_S1A1);


static refalrts::FnResult func_SentenceTail(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 69 elems
  refalrts::Iter context[69];
  refalrts::zeros( context, 69 );
  // </0 & SentenceTail/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & SentenceTail/4 s.new#1/5 (/8 e.new#2/6 )/9 (/12 e.new#3/10 )/13 (/16 s.new#4/18 e.new#5/14 )/17 e.new#6/2 >/1
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
  // closed e.new#6 as range 2
  if( ! refalrts::svar_left( context[18], context[14], context[15] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#5 as range 14
  do {
    // </0 & SentenceTail/4 s.StartOffsetCond#1/5 (/8 e.PatternVars#1/19 )/9 (/12 e.MarkedPattern#1/21 )/13 (/16 # Condition/18 (/29 e.CondName#1/27 )/30 (/33 e.CondResult#1/31 )/34 (/37 e.CondPattern#1/35 )/38 )/17 e.ConditionsTail#1/25 (/41 e.ResultSentence#1/39 )/42 >/1
    context[19] = context[6];
    context[20] = context[7];
    context[21] = context[10];
    context[22] = context[11];
    context[23] = context[14];
    context[24] = context[15];
    context[25] = context[2];
    context[26] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_Condition], context[18] ) )
      continue;
    context[27] = 0;
    context[28] = 0;
    context[29] = refalrts::brackets_left( context[27], context[28], context[23], context[24] );
    if( ! context[29] )
      continue;
    refalrts::bracket_pointers(context[29], context[30]);
    context[31] = 0;
    context[32] = 0;
    context[33] = refalrts::brackets_left( context[31], context[32], context[23], context[24] );
    if( ! context[33] )
      continue;
    refalrts::bracket_pointers(context[33], context[34]);
    context[35] = 0;
    context[36] = 0;
    context[37] = refalrts::brackets_left( context[35], context[36], context[23], context[24] );
    if( ! context[37] )
      continue;
    refalrts::bracket_pointers(context[37], context[38]);
    context[39] = 0;
    context[40] = 0;
    context[41] = refalrts::brackets_right( context[39], context[40], context[25], context[26] );
    if( ! context[41] )
      continue;
    refalrts::bracket_pointers(context[41], context[42]);
    if( ! refalrts::empty_seq( context[23], context[24] ) )
      continue;
    // closed e.PatternVars#1 as range 19
    // closed e.MarkedPattern#1 as range 21
    // closed e.CondName#1 as range 27
    // closed e.CondResult#1 as range 31
    // closed e.CondPattern#1 as range 35
    // closed e.ConditionsTail#1 as range 25
    // closed e.ResultSentence#1 as range 39
    //DEBUG: s.StartOffsetCond#1: 5
    //DEBUG: e.PatternVars#1: 19
    //DEBUG: e.MarkedPattern#1: 21
    //DEBUG: e.CondName#1: 27
    //DEBUG: e.CondResult#1: 31
    //DEBUG: e.CondPattern#1: 35
    //DEBUG: e.ConditionsTail#1: 25
    //DEBUG: e.ResultSentence#1: 39

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & SentenceTail$1=1/4 AsIs: s.StartOffsetCond#1/5 AsIs: (/8 } Tile{ AsIs: e.ConditionsTail#1/25 } )/43 (/44 Tile{ AsIs: e.ResultSentence#1/39 } Tile{ AsIs: )/9 AsIs: (/12 AsIs: e.MarkedPattern#1/21 AsIs: )/13 AsIs: (/16 } Tile{ AsIs: e.PatternVars#1/19 } )/45 Tile{ AsIs: (/41 } e.CondName#1/27/46 Tile{ AsIs: )/34 AsIs: (/37 AsIs: e.CondPattern#1/35 AsIs: )/38 HalfReuse: </17 } & GenResult-Condition/48 </49 & Inc2/50 s.StartOffsetCond#1/5/51 >/52 Tile{ AsIs: (/33 } e.PatternVars#1/19/53 )/55 (/56 # TkOpenCallCond/57 s.StartOffsetCond#1/5/58 )/59 (/60 Tile{ Reuse: # Symbol/18 HalfReuse: # Name/29 AsIs: e.CondName#1/27 AsIs: )/30 } Tile{ AsIs: e.CondResult#1/31 } (/61 # TkCloseCallCond/62 </63 & Add/64 1/65 s.StartOffsetCond#1/5/66 >/67 )/68 Tile{ HalfReuse: >/42 AsIs: >/1 ]] }
    refalrts::alloc_close_bracket(vm, context[43]);
    refalrts::alloc_open_bracket(vm, context[44]);
    refalrts::alloc_close_bracket(vm, context[45]);
    refalrts::copy_evar(vm, context[46], context[47], context[27], context[28]);
    refalrts::alloc_name(vm, context[48], functions[efunc_GenResultm_Condition]);
    refalrts::alloc_open_call(vm, context[49]);
    refalrts::alloc_name(vm, context[50], functions[efunc_Inc2]);
    refalrts::copy_stvar(vm, context[51], context[5]);
    refalrts::alloc_close_call(vm, context[52]);
    refalrts::copy_evar(vm, context[53], context[54], context[19], context[20]);
    refalrts::alloc_close_bracket(vm, context[55]);
    refalrts::alloc_open_bracket(vm, context[56]);
    refalrts::alloc_ident(vm, context[57], identifiers[ident_TkOpenCallCond]);
    refalrts::copy_stvar(vm, context[58], context[5]);
    refalrts::alloc_close_bracket(vm, context[59]);
    refalrts::alloc_open_bracket(vm, context[60]);
    refalrts::alloc_open_bracket(vm, context[61]);
    refalrts::alloc_ident(vm, context[62], identifiers[ident_TkCloseCallCond]);
    refalrts::alloc_open_call(vm, context[63]);
    refalrts::alloc_name(vm, context[64], functions[efunc_Add]);
    refalrts::alloc_number(vm, context[65], 1UL);
    refalrts::copy_stvar(vm, context[66], context[5]);
    refalrts::alloc_close_call(vm, context[67]);
    refalrts::alloc_close_bracket(vm, context[68]);
    refalrts::update_name(context[4], functions[efunc_gen_SentenceTail_S1A1]);
    refalrts::reinit_open_call(context[17]);
    refalrts::update_ident(context[18], identifiers[ident_Symbol]);
    refalrts::reinit_ident(context[29], identifiers[ident_Name]);
    refalrts::reinit_close_call(context[42]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[42] );
    refalrts::push_stack( vm, context[17] );
    refalrts::link_brackets( context[61], context[68] );
    refalrts::push_stack( vm, context[67] );
    refalrts::push_stack( vm, context[63] );
    refalrts::link_brackets( context[60], context[30] );
    refalrts::link_brackets( context[56], context[59] );
    refalrts::link_brackets( context[33], context[55] );
    refalrts::push_stack( vm, context[52] );
    refalrts::push_stack( vm, context[49] );
    refalrts::link_brackets( context[37], context[38] );
    refalrts::link_brackets( context[41], context[34] );
    refalrts::link_brackets( context[16], context[45] );
    refalrts::link_brackets( context[12], context[13] );
    refalrts::link_brackets( context[44], context[9] );
    refalrts::link_brackets( context[8], context[43] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[42];
    res = refalrts::splice_evar( res, context[61], context[68] );
    res = refalrts::splice_evar( res, context[31], context[32] );
    res = refalrts::splice_evar( res, context[18], context[30] );
    res = refalrts::splice_evar( res, context[55], context[60] );
    res = refalrts::splice_evar( res, context[53], context[54] );
    res = refalrts::splice_elem( res, context[33] );
    res = refalrts::splice_evar( res, context[48], context[52] );
    res = refalrts::splice_evar( res, context[34], context[17] );
    res = refalrts::splice_evar( res, context[46], context[47] );
    res = refalrts::splice_elem( res, context[41] );
    res = refalrts::splice_elem( res, context[45] );
    res = refalrts::splice_evar( res, context[19], context[20] );
    res = refalrts::splice_evar( res, context[9], context[16] );
    res = refalrts::splice_evar( res, context[39], context[40] );
    res = refalrts::splice_evar( res, context[43], context[44] );
    res = refalrts::splice_evar( res, context[25], context[26] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & SentenceTail/4 s.ContextOffset#1/5 (/8 e.PatternVars#1/6 )/9 (/12 e.MarkedPattern#1/10 )/13 (/16 s.FnGenResult#1/18 e.Result#1/14 )/17 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.PatternVars#1 as range 6
  // closed e.MarkedPattern#1 as range 10
  // closed e.Result#1 as range 14
  //DEBUG: s.ContextOffset#1: 5
  //DEBUG: s.FnGenResult#1: 18
  //DEBUG: e.PatternVars#1: 6
  //DEBUG: e.MarkedPattern#1: 10
  //DEBUG: e.Result#1: 14

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} (/16 s.FnGenResult#1/18 {REMOVED TILE} )/17 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 HalfReuse: s.FnGenResult1 #18/4 AsIs: s.ContextOffset#1/5 AsIs: (/8 AsIs: e.PatternVars#1/6 AsIs: )/9 AsIs: (/12 AsIs: e.MarkedPattern#1/10 AsIs: )/13 } Tile{ AsIs: e.Result#1/14 } Tile{ AsIs: >/1 ]] }
  refalrts::reinit_svar( context[4], context[18] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[12], context[13] );
  refalrts::link_brackets( context[8], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[14], context[15] );
  refalrts::splice_to_freelist_open( vm, context[13], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_SentenceTail("SentenceTail", 0U, 0U, func_SentenceTail);


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
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Apply@4/4 } Tile{ AsIs: t.Closure#1/13 } Tile{ AsIs: e.Bounded#1/11 } Tile{ AsIs: t.Acc#1/7 AsIs: t.Next#1/9 AsIs: >/1 ]] }
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


static refalrts::FnResult func_gen_Apply_Z3(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
  // </0 & Apply@3/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Apply@3/4 t.new#1/5 e.new#2/2 t.new#3/7 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  context[8] = refalrts::tvar_right( context[7], context[2], context[3] );
  if( ! context[8] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 2
  do {
    // </0 & Apply@3/4 s.Fn#1/5 e.X#0/9 t.X#0/7 >/1
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
    // </0 & Apply@3/4 (/5 t.Closure#1/13 e.Bounded#1/11 )/6 e.X#0/9 t.X#0/7 >/1
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
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Apply@3/4 } Tile{ AsIs: t.Closure#1/13 } Tile{ AsIs: e.Bounded#1/11 } Tile{ AsIs: e.X#0/9 } Tile{ AsIs: t.X#0/7 AsIs: >/1 ]] }
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

  // </0 & Apply@3/4 t.dyn#0/5 e.X#0/2 t.X#0/7 >/1
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
  // </0 & Apply@4/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Apply@4/4 t.new#1/5 e.new#2/2 t.new#3/9 t.new#4/7 >/1
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
    // </0 & Apply@4/4 s.Fn#1/5 e.X#0/11 t.X#0/9 t.X0#0/7 >/1
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
    // </0 & Apply@4/4 (/5 t.Closure#1/15 e.Bounded#1/13 )/6 e.X#0/11 t.X#0/9 t.X0#0/7 >/1
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
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Apply@4/4 } Tile{ AsIs: t.Closure#1/15 } Tile{ AsIs: e.Bounded#1/13 } Tile{ AsIs: e.X#0/11 } Tile{ AsIs: t.X#0/9 AsIs: t.X0#0/7 AsIs: >/1 ]] }
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

  // </0 & Apply@4/4 t.dyn#0/5 e.X#0/2 t.X#0/9 t.X0#0/7 >/1
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

static refalrts::NativeReference nat_ref_gen_Apply_Z4("Apply@4", COOKIE1_, COOKIE2_, func_gen_Apply_Z4);


//End of file
