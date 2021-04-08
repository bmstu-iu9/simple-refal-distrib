// This file automatically generated from 'HighLevelRASL.ref'
// Don't edit! Edit 'HighLevelRASL.ref' and recompile it

#include "refalrts.h"

#define cookie_ns cookie_ns_1508995057_1258557917
#define COOKIE1_ 1508995057U
#define COOKIE2_ 1258557917U

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
  efunc_gen_Map_Z2 = 19,
  efunc_HighLevelRASLm_Functionm_Disjoint = 20,
  efunc_GenSubstm_Simple = 21,
  efunc_GenResultm_Simple = 22,
  efunc_HighLevelRASLm_Functionm_Conjoint = 23,
  efunc_GenSubstm_Save = 24,
  efunc_GenResultm_Opt = 25,
  efunc_HighLevelRASLm_Functionm_Aux = 26,
  efunc_gen_GenResultFuncs_D2 = 27,
  efunc_gen_GenSentenceFunc_D2 = 28,
  efunc_gen_DoMapAccum_Z2 = 29,
  efunc_gen_HighLevelRASLm_Function_A1 = 30,
  efunc_FixupNamem_Suf = 31,
  efunc_Mu = 32,
  efunc_Up = 33,
  efunc_Evm_met = 34,
  efunc_Residue = 35,
  efunc_u_u_Metau_Residue = 36,
  efunc_MapAccum = 37,
  efunc_UnBracket = 38,
  efunc_DelAccumulator = 39,
  efunc_Inc = 40,
  efunc_Dec = 41,
  efunc_HighLevelRASL = 42,
  efunc_HighLevelRASLm_Function = 43,
  efunc_FixupName = 44,
  efunc_GenSentenceFunc = 45,
  efunc_GenResultFuncs = 46,
  efunc_gen_Apply_Z4 = 47,
  efunc_gen_HighLevelRASL_L1D8 = 48,
  efunc_gen_Map_Z0 = 49,
  efunc_gen_HighLevelRASL_L1Z0 = 50,
  efunc_gen_HighLevelRASLm_Function_L1D1 = 51,
  efunc_gen_HighLevelRASLm_Function_L1Z0 = 52,
  efunc_gen_DoMapAccum_S1A1Z1 = 53,
  efunc_gen_HighLevelRASLm_Function_A1L1A1L1A1 = 54,
  efunc_gen_HighLevelRASLm_Function_A1L1A1L1D1 = 55,
  efunc_gen_HighLevelRASLm_Function_A1L1A1L1Z0 = 56,
  efunc_gen_DoMapAccum_Z0 = 57,
  efunc_gen_HighLevelRASLm_Function_A1L1A1 = 58,
  efunc_gen_DoMapAccum_Z1 = 59,
  efunc_gen_DoMapAccum_S1A1Z2 = 60,
  efunc_gen_HighLevelRASLm_Function_A1L1D1 = 61,
  efunc_gen_HighLevelRASLm_Function_A1L1Z0 = 62,
  efunc_gen_DoMapAccum_S1A1Z0 = 63,
};


enum ident {
  ident_Conjoint = 0,
  ident_NoOpt = 1,
  ident_CmdEnum = 2,
  ident_OptResult = 3,
  ident_Disjoint = 4,
  ident_Condition = 5,
  ident_SUF = 6,
  ident_Mu = 7,
  ident_Up = 8,
  ident_Evm_met = 9,
  ident_Residue = 10,
  ident_u_u_Metau_Residue = 11,
  ident_Apply = 12,
  ident_Map = 13,
  ident_Reduce = 14,
  ident_Fetch = 15,
  ident_MapAccum = 16,
  ident_DoMapAccum = 17,
  ident_UnBracket = 18,
  ident_DelAccumulator = 19,
  ident_Inc = 20,
  ident_Dec = 21,
  ident_Pipe = 22,
  ident_HighLevelRASL = 23,
  ident_HighLevelRASLm_Function = 24,
  ident_FixupName = 25,
  ident_FixupNamem_Suf = 26,
  ident_HighLevelRASLm_Functionm_Aux = 27,
  ident_GenSentenceFunc = 28,
  ident_GenResultFuncs = 29,
  ident_Function = 30,
  ident_Sentences = 31,
  ident_NativeBody = 32,
  ident_CmdNativeFunction = 33,
  ident_Metatable = 34,
  ident_CmdMetatable = 35,
  ident_Swap = 36,
  ident_CmdSwap = 37,
  ident_Declaration = 38,
  ident_CmdDeclaration = 39,
  ident_Ident = 40,
  ident_CmdDefineIdent = 41,
  ident_NativeBlock = 42,
  ident_CmdEmitNativeCode = 43,
  ident_Spec = 44,
  ident_CmdConditionFunc = 45,
  ident_GNm_Local = 46,
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


static refalrts::FnResult func_HighLevelRASL(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 7 elems
  refalrts::Iter context[7];
  refalrts::zeros( context, 7 );
  // </0 & HighLevelRASL/4 s.Joint/5 s.OptResult/6 e.ProgramElements/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.ProgramElements as range 2
  //DEBUG: s.Joint: 5
  //DEBUG: s.OptResult: 6
  //DEBUG: e.ProgramElements: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map@1/4 AsIs: s.Joint/5 AsIs: s.OptResult/6 AsIs: e.ProgramElements/2 AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_gen_Map_Z1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_HighLevelRASL("HighLevelRASL", 0U, 0U, func_HighLevelRASL);


static refalrts::FnResult func_gen_HighLevelRASLm_Function_A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 37 elems
  refalrts::Iter context[37];
  refalrts::zeros( context, 37 );
  // </0 & HighLevelRASL-Function=1/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & HighLevelRASL-Function=1/4 s.new1/5 s.new2/6 s.new3/7 (/10 e.new4/8 )/11 (/14 e.new5/12 )/15 e.new6/2 >/1
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
  context[12] = 0;
  context[13] = 0;
  context[14] = refalrts::brackets_left( context[12], context[13], context[2], context[3] );
  if( ! context[14] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[14], context[15]);
  // closed e.new4 as range 8
  // closed e.new5 as range 12
  // closed e.new6 as range 2
  do {
    // </0 & HighLevelRASL-Function=1/4 # Conjoint/5 s.new7/6 s.new8/7 (/10 e.new10/16 )/11 (/14 e.new11/18 )/15 e.new9/20 >/1
    context[16] = context[8];
    context[17] = context[9];
    context[18] = context[12];
    context[19] = context[13];
    context[20] = context[2];
    context[21] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_Conjoint], context[5] ) )
      continue;
    // closed e.new10 as range 16
    // closed e.new11 as range 18
    // closed e.new9 as range 20
    do {
      // </0 & HighLevelRASL-Function=1/4 # Conjoint/5 # NoOpt/6 s.new12/7 (/10 e.new14/22 )/11 (/14 e.new15/24 )/15 e.new13/26 >/1
      context[22] = context[16];
      context[23] = context[17];
      context[24] = context[18];
      context[25] = context[19];
      context[26] = context[20];
      context[27] = context[21];
      if( ! refalrts::ident_term( identifiers[ident_NoOpt], context[6] ) )
        continue;
      // closed e.new14 as range 22
      // closed e.new15 as range 24
      // closed e.new13 as range 26
      do {
        // </0 & HighLevelRASL-Function=1/4 # Conjoint/5 # NoOpt/6 s.ScopeClass/7 (/10 e.Name/28 )/11 (/14 e.CondNames/30 )/15 >/1
        context[28] = context[22];
        context[29] = context[23];
        context[30] = context[24];
        context[31] = context[25];
        if( ! refalrts::empty_seq( context[26], context[27] ) )
          continue;
        // closed e.Name as range 28
        // closed e.CondNames as range 30
        //DEBUG: s.ScopeClass: 7
        //DEBUG: e.Name: 28
        //DEBUG: e.CondNames: 30

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} # Conjoint/5 {REMOVED TILE} s.ScopeClass/7 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} )/15 {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map@2/4 } Tile{ AsIs: e.CondNames/30 } Tile{ AsIs: >/1 } Tile{ AsIs: (/14 } Tile{ Reuse: # CmdEnum/6 } Tile{ HalfReuse: s.ScopeClass7 /10 AsIs: e.Name/28 AsIs: )/11 } Tile{ ]] }
        refalrts::update_name(context[4], functions[efunc_gen_Map_Z2]);
        refalrts::update_ident(context[6], identifiers[ident_CmdEnum]);
        refalrts::reinit_svar( context[10], context[7] );
        refalrts::link_brackets( context[14], context[11] );
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[10], context[11] );
        res = refalrts::splice_elem( res, context[6] );
        res = refalrts::splice_elem( res, context[14] );
        res = refalrts::splice_elem( res, context[1] );
        res = refalrts::splice_evar( res, context[30], context[31] );
        refalrts::splice_to_freelist_open( vm, context[4], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & HighLevelRASL-Function=1/4 # Conjoint/5 # NoOpt/6 s.ScopeClass/7 (/10 e.Name/28 )/11 (/14 e.CondNames/30 )/15 t./34 >/1
        context[28] = context[22];
        context[29] = context[23];
        context[30] = context[24];
        context[31] = context[25];
        context[32] = context[26];
        context[33] = context[27];
        // closed e.Name as range 28
        // closed e.CondNames as range 30
        context[35] = refalrts::tvar_left( context[34], context[32], context[33] );
        if( ! context[35] )
          continue;
        if( ! refalrts::empty_seq( context[32], context[33] ) )
          continue;
        //DEBUG: s.ScopeClass: 7
        //DEBUG: e.Name: 28
        //DEBUG: e.CondNames: 30
        //DEBUG: t.: 34

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } </36 Tile{ HalfReuse: & Map@2/14 AsIs: e.CondNames/30 HalfReuse: >/15 } Tile{ AsIs: </0 Reuse: & HighLevelRASL-Function-Disjoint/4 HalfReuse: & GenSubst-Simple/5 HalfReuse: & GenResult-Simple/6 AsIs: s.ScopeClass/7 AsIs: (/10 AsIs: e.Name/28 AsIs: )/11 } Tile{ AsIs: t./34 AsIs: >/1 ]] }
        refalrts::alloc_open_call(vm, context[36]);
        refalrts::reinit_name(context[14], functions[efunc_gen_Map_Z2]);
        refalrts::reinit_close_call(context[15]);
        refalrts::update_name(context[4], functions[efunc_HighLevelRASLm_Functionm_Disjoint]);
        refalrts::reinit_name(context[5], functions[efunc_GenSubstm_Simple]);
        refalrts::reinit_name(context[6], functions[efunc_GenResultm_Simple]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[10], context[11] );
        refalrts::push_stack( vm, context[15] );
        refalrts::push_stack( vm, context[36] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[34];
        res = refalrts::splice_evar( res, context[0], context[11] );
        res = refalrts::splice_evar( res, context[14], context[15] );
        res = refalrts::splice_elem( res, context[36] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & HighLevelRASL-Function=1/4 # Conjoint/5 # NoOpt/6 s.ScopeClass/7 (/10 e.Name/28 )/11 (/14 e.CondNames/30 )/15 e.Sentences$a/32 >/1
      context[28] = context[22];
      context[29] = context[23];
      context[30] = context[24];
      context[31] = context[25];
      context[32] = context[26];
      context[33] = context[27];
      // closed e.Name as range 28
      // closed e.CondNames as range 30
      // closed e.Sentences$a as range 32
      //DEBUG: s.ScopeClass: 7
      //DEBUG: e.Name: 28
      //DEBUG: e.CondNames: 30
      //DEBUG: e.Sentences$a: 32

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } </34 Tile{ HalfReuse: & Map@2/14 AsIs: e.CondNames/30 HalfReuse: >/15 } Tile{ AsIs: </0 Reuse: & HighLevelRASL-Function-Conjoint/4 HalfReuse: & GenSubst-Simple/5 HalfReuse: & GenResult-Simple/6 AsIs: s.ScopeClass/7 AsIs: (/10 AsIs: e.Name/28 AsIs: )/11 } Tile{ AsIs: e.Sentences$a/32 } Tile{ AsIs: >/1 ]] }
      refalrts::alloc_open_call(vm, context[34]);
      refalrts::reinit_name(context[14], functions[efunc_gen_Map_Z2]);
      refalrts::reinit_close_call(context[15]);
      refalrts::update_name(context[4], functions[efunc_HighLevelRASLm_Functionm_Conjoint]);
      refalrts::reinit_name(context[5], functions[efunc_GenSubstm_Simple]);
      refalrts::reinit_name(context[6], functions[efunc_GenResultm_Simple]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[10], context[11] );
      refalrts::push_stack( vm, context[15] );
      refalrts::push_stack( vm, context[34] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[32], context[33] );
      res = refalrts::splice_evar( res, context[0], context[11] );
      res = refalrts::splice_evar( res, context[14], context[15] );
      res = refalrts::splice_elem( res, context[34] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & HighLevelRASL-Function=1/4 # Conjoint/5 # OptResult/6 s.new12/7 (/10 e.new14/22 )/11 (/14 e.new15/24 )/15 e.new13/26 >/1
      context[22] = context[16];
      context[23] = context[17];
      context[24] = context[18];
      context[25] = context[19];
      context[26] = context[20];
      context[27] = context[21];
      if( ! refalrts::ident_term( identifiers[ident_OptResult], context[6] ) )
        continue;
      // closed e.new14 as range 22
      // closed e.new15 as range 24
      // closed e.new13 as range 26
      do {
        // </0 & HighLevelRASL-Function=1/4 # Conjoint/5 # OptResult/6 s.ScopeClass/7 (/10 e.Name/28 )/11 (/14 e.CondNames/30 )/15 >/1
        context[28] = context[22];
        context[29] = context[23];
        context[30] = context[24];
        context[31] = context[25];
        if( ! refalrts::empty_seq( context[26], context[27] ) )
          continue;
        // closed e.Name as range 28
        // closed e.CondNames as range 30
        //DEBUG: s.ScopeClass: 7
        //DEBUG: e.Name: 28
        //DEBUG: e.CondNames: 30

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} # Conjoint/5 {REMOVED TILE} s.ScopeClass/7 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} )/15 {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map@2/4 } Tile{ AsIs: e.CondNames/30 } Tile{ AsIs: >/1 } Tile{ AsIs: (/14 } Tile{ Reuse: # CmdEnum/6 } Tile{ HalfReuse: s.ScopeClass7 /10 AsIs: e.Name/28 AsIs: )/11 } Tile{ ]] }
        refalrts::update_name(context[4], functions[efunc_gen_Map_Z2]);
        refalrts::update_ident(context[6], identifiers[ident_CmdEnum]);
        refalrts::reinit_svar( context[10], context[7] );
        refalrts::link_brackets( context[14], context[11] );
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[10], context[11] );
        res = refalrts::splice_elem( res, context[6] );
        res = refalrts::splice_elem( res, context[14] );
        res = refalrts::splice_elem( res, context[1] );
        res = refalrts::splice_evar( res, context[30], context[31] );
        refalrts::splice_to_freelist_open( vm, context[4], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & HighLevelRASL-Function=1/4 # Conjoint/5 # OptResult/6 s.ScopeClass/7 (/10 e.Name/28 )/11 (/14 e.CondNames/30 )/15 t./34 >/1
        context[28] = context[22];
        context[29] = context[23];
        context[30] = context[24];
        context[31] = context[25];
        context[32] = context[26];
        context[33] = context[27];
        // closed e.Name as range 28
        // closed e.CondNames as range 30
        context[35] = refalrts::tvar_left( context[34], context[32], context[33] );
        if( ! context[35] )
          continue;
        if( ! refalrts::empty_seq( context[32], context[33] ) )
          continue;
        //DEBUG: s.ScopeClass: 7
        //DEBUG: e.Name: 28
        //DEBUG: e.CondNames: 30
        //DEBUG: t.: 34

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } </36 Tile{ HalfReuse: & Map@2/14 AsIs: e.CondNames/30 HalfReuse: >/15 } Tile{ AsIs: </0 Reuse: & HighLevelRASL-Function-Disjoint/4 HalfReuse: & GenSubst-Save/5 HalfReuse: & GenResult-Opt/6 AsIs: s.ScopeClass/7 AsIs: (/10 AsIs: e.Name/28 AsIs: )/11 } Tile{ AsIs: t./34 AsIs: >/1 ]] }
        refalrts::alloc_open_call(vm, context[36]);
        refalrts::reinit_name(context[14], functions[efunc_gen_Map_Z2]);
        refalrts::reinit_close_call(context[15]);
        refalrts::update_name(context[4], functions[efunc_HighLevelRASLm_Functionm_Disjoint]);
        refalrts::reinit_name(context[5], functions[efunc_GenSubstm_Save]);
        refalrts::reinit_name(context[6], functions[efunc_GenResultm_Opt]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[10], context[11] );
        refalrts::push_stack( vm, context[15] );
        refalrts::push_stack( vm, context[36] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[34];
        res = refalrts::splice_evar( res, context[0], context[11] );
        res = refalrts::splice_evar( res, context[14], context[15] );
        res = refalrts::splice_elem( res, context[36] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & HighLevelRASL-Function=1/4 # Conjoint/5 # OptResult/6 s.ScopeClass/7 (/10 e.Name/28 )/11 (/14 e.CondNames/30 )/15 e.Sentences$a/32 >/1
      context[28] = context[22];
      context[29] = context[23];
      context[30] = context[24];
      context[31] = context[25];
      context[32] = context[26];
      context[33] = context[27];
      // closed e.Name as range 28
      // closed e.CondNames as range 30
      // closed e.Sentences$a as range 32
      //DEBUG: s.ScopeClass: 7
      //DEBUG: e.Name: 28
      //DEBUG: e.CondNames: 30
      //DEBUG: e.Sentences$a: 32

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } </34 Tile{ HalfReuse: & Map@2/14 AsIs: e.CondNames/30 HalfReuse: >/15 } Tile{ AsIs: </0 Reuse: & HighLevelRASL-Function-Conjoint/4 HalfReuse: & GenSubst-Save/5 HalfReuse: & GenResult-Opt/6 AsIs: s.ScopeClass/7 AsIs: (/10 AsIs: e.Name/28 AsIs: )/11 } Tile{ AsIs: e.Sentences$a/32 } Tile{ AsIs: >/1 ]] }
      refalrts::alloc_open_call(vm, context[34]);
      refalrts::reinit_name(context[14], functions[efunc_gen_Map_Z2]);
      refalrts::reinit_close_call(context[15]);
      refalrts::update_name(context[4], functions[efunc_HighLevelRASLm_Functionm_Conjoint]);
      refalrts::reinit_name(context[5], functions[efunc_GenSubstm_Save]);
      refalrts::reinit_name(context[6], functions[efunc_GenResultm_Opt]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[10], context[11] );
      refalrts::push_stack( vm, context[15] );
      refalrts::push_stack( vm, context[34] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[32], context[33] );
      res = refalrts::splice_evar( res, context[0], context[11] );
      res = refalrts::splice_evar( res, context[14], context[15] );
      res = refalrts::splice_elem( res, context[34] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & HighLevelRASL-Function=1/4 # Conjoint/5 s.OptResult/6 s.ScopeClass/7 (/10 e.Name/22 )/11 (/14 e.CondNames/24 )/15 e.Sentences$a/26 >/1
    context[22] = context[16];
    context[23] = context[17];
    context[24] = context[18];
    context[25] = context[19];
    context[26] = context[20];
    context[27] = context[21];
    // closed e.Name as range 22
    // closed e.CondNames as range 24
    // closed e.Sentences$a as range 26
    //DEBUG: s.OptResult: 6
    //DEBUG: s.ScopeClass: 7
    //DEBUG: e.Name: 22
    //DEBUG: e.CondNames: 24
    //DEBUG: e.Sentences$a: 26

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map@2/4 } Tile{ AsIs: e.CondNames/24 } >/28 Tile{ HalfReuse: </11 HalfReuse: & HighLevelRASL-Function-Aux/14 } & HighLevelRASL-Function-Conjoint/29 </30 Tile{ HalfReuse: & GenResultFuncs*2/5 AsIs: s.OptResult/6 } >/31 Tile{ AsIs: s.ScopeClass/7 AsIs: (/10 } Tile{ AsIs: e.Name/22 } Tile{ AsIs: )/15 AsIs: e.Sentences$a/26 AsIs: >/1 ]] }
    refalrts::alloc_close_call(vm, context[28]);
    refalrts::alloc_name(vm, context[29], functions[efunc_HighLevelRASLm_Functionm_Conjoint]);
    refalrts::alloc_open_call(vm, context[30]);
    refalrts::alloc_close_call(vm, context[31]);
    refalrts::update_name(context[4], functions[efunc_gen_Map_Z2]);
    refalrts::reinit_open_call(context[11]);
    refalrts::reinit_name(context[14], functions[efunc_HighLevelRASLm_Functionm_Aux]);
    refalrts::reinit_name(context[5], functions[efunc_gen_GenResultFuncs_D2]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[11] );
    refalrts::link_brackets( context[10], context[15] );
    refalrts::push_stack( vm, context[31] );
    refalrts::push_stack( vm, context[30] );
    refalrts::push_stack( vm, context[28] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[15];
    res = refalrts::splice_evar( res, context[22], context[23] );
    res = refalrts::splice_evar( res, context[7], context[10] );
    res = refalrts::splice_elem( res, context[31] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[29], context[30] );
    res = refalrts::splice_evar( res, context[11], context[14] );
    res = refalrts::splice_elem( res, context[28] );
    res = refalrts::splice_evar( res, context[24], context[25] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & HighLevelRASL-Function=1/4 # Disjoint/5 s.new7/6 s.new8/7 (/10 e.new10/16 )/11 (/14 e.new11/18 )/15 e.new9/20 >/1
    context[16] = context[8];
    context[17] = context[9];
    context[18] = context[12];
    context[19] = context[13];
    context[20] = context[2];
    context[21] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_Disjoint], context[5] ) )
      continue;
    // closed e.new10 as range 16
    // closed e.new11 as range 18
    // closed e.new9 as range 20
    do {
      // </0 & HighLevelRASL-Function=1/4 # Disjoint/5 # NoOpt/6 s.new12/7 (/10 e.new14/22 )/11 (/14 e.new15/24 )/15 e.new13/26 >/1
      context[22] = context[16];
      context[23] = context[17];
      context[24] = context[18];
      context[25] = context[19];
      context[26] = context[20];
      context[27] = context[21];
      if( ! refalrts::ident_term( identifiers[ident_NoOpt], context[6] ) )
        continue;
      // closed e.new14 as range 22
      // closed e.new15 as range 24
      // closed e.new13 as range 26
      do {
        // </0 & HighLevelRASL-Function=1/4 # Disjoint/5 # NoOpt/6 s.ScopeClass/7 (/10 e.Name/28 )/11 (/14 e.CondNames/30 )/15 >/1
        context[28] = context[22];
        context[29] = context[23];
        context[30] = context[24];
        context[31] = context[25];
        if( ! refalrts::empty_seq( context[26], context[27] ) )
          continue;
        // closed e.Name as range 28
        // closed e.CondNames as range 30
        //DEBUG: s.ScopeClass: 7
        //DEBUG: e.Name: 28
        //DEBUG: e.CondNames: 30

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} # Disjoint/5 {REMOVED TILE} s.ScopeClass/7 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} )/15 {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map@2/4 } Tile{ AsIs: e.CondNames/30 } Tile{ AsIs: >/1 } Tile{ AsIs: (/14 } Tile{ Reuse: # CmdEnum/6 } Tile{ HalfReuse: s.ScopeClass7 /10 AsIs: e.Name/28 AsIs: )/11 } Tile{ ]] }
        refalrts::update_name(context[4], functions[efunc_gen_Map_Z2]);
        refalrts::update_ident(context[6], identifiers[ident_CmdEnum]);
        refalrts::reinit_svar( context[10], context[7] );
        refalrts::link_brackets( context[14], context[11] );
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[10], context[11] );
        res = refalrts::splice_elem( res, context[6] );
        res = refalrts::splice_elem( res, context[14] );
        res = refalrts::splice_elem( res, context[1] );
        res = refalrts::splice_evar( res, context[30], context[31] );
        refalrts::splice_to_freelist_open( vm, context[4], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & HighLevelRASL-Function=1/4 # Disjoint/5 # NoOpt/6 s.ScopeClass/7 (/10 e.Name/28 )/11 (/14 e.CondNames/30 )/15 t./34 >/1
        context[28] = context[22];
        context[29] = context[23];
        context[30] = context[24];
        context[31] = context[25];
        context[32] = context[26];
        context[33] = context[27];
        // closed e.Name as range 28
        // closed e.CondNames as range 30
        context[35] = refalrts::tvar_left( context[34], context[32], context[33] );
        if( ! context[35] )
          continue;
        if( ! refalrts::empty_seq( context[32], context[33] ) )
          continue;
        //DEBUG: s.ScopeClass: 7
        //DEBUG: e.Name: 28
        //DEBUG: e.CondNames: 30
        //DEBUG: t.: 34

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } </36 Tile{ HalfReuse: & Map@2/14 AsIs: e.CondNames/30 HalfReuse: >/15 } Tile{ AsIs: </0 Reuse: & HighLevelRASL-Function-Disjoint/4 HalfReuse: & GenSubst-Simple/5 HalfReuse: & GenResult-Simple/6 AsIs: s.ScopeClass/7 AsIs: (/10 AsIs: e.Name/28 AsIs: )/11 } Tile{ AsIs: t./34 AsIs: >/1 ]] }
        refalrts::alloc_open_call(vm, context[36]);
        refalrts::reinit_name(context[14], functions[efunc_gen_Map_Z2]);
        refalrts::reinit_close_call(context[15]);
        refalrts::update_name(context[4], functions[efunc_HighLevelRASLm_Functionm_Disjoint]);
        refalrts::reinit_name(context[5], functions[efunc_GenSubstm_Simple]);
        refalrts::reinit_name(context[6], functions[efunc_GenResultm_Simple]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[10], context[11] );
        refalrts::push_stack( vm, context[15] );
        refalrts::push_stack( vm, context[36] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[34];
        res = refalrts::splice_evar( res, context[0], context[11] );
        res = refalrts::splice_evar( res, context[14], context[15] );
        res = refalrts::splice_elem( res, context[36] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & HighLevelRASL-Function=1/4 # Disjoint/5 # NoOpt/6 s.ScopeClass/7 (/10 e.Name/28 )/11 (/14 e.CondNames/30 )/15 e.Sentences$a/32 >/1
      context[28] = context[22];
      context[29] = context[23];
      context[30] = context[24];
      context[31] = context[25];
      context[32] = context[26];
      context[33] = context[27];
      // closed e.Name as range 28
      // closed e.CondNames as range 30
      // closed e.Sentences$a as range 32
      //DEBUG: s.ScopeClass: 7
      //DEBUG: e.Name: 28
      //DEBUG: e.CondNames: 30
      //DEBUG: e.Sentences$a: 32

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } </34 Tile{ HalfReuse: & Map@2/14 AsIs: e.CondNames/30 HalfReuse: >/15 } Tile{ AsIs: </0 Reuse: & HighLevelRASL-Function-Disjoint/4 HalfReuse: & GenSubst-Simple/5 HalfReuse: & GenResult-Simple/6 AsIs: s.ScopeClass/7 AsIs: (/10 AsIs: e.Name/28 AsIs: )/11 } Tile{ AsIs: e.Sentences$a/32 } Tile{ AsIs: >/1 ]] }
      refalrts::alloc_open_call(vm, context[34]);
      refalrts::reinit_name(context[14], functions[efunc_gen_Map_Z2]);
      refalrts::reinit_close_call(context[15]);
      refalrts::update_name(context[4], functions[efunc_HighLevelRASLm_Functionm_Disjoint]);
      refalrts::reinit_name(context[5], functions[efunc_GenSubstm_Simple]);
      refalrts::reinit_name(context[6], functions[efunc_GenResultm_Simple]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[10], context[11] );
      refalrts::push_stack( vm, context[15] );
      refalrts::push_stack( vm, context[34] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[32], context[33] );
      res = refalrts::splice_evar( res, context[0], context[11] );
      res = refalrts::splice_evar( res, context[14], context[15] );
      res = refalrts::splice_elem( res, context[34] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & HighLevelRASL-Function=1/4 # Disjoint/5 # OptResult/6 s.new12/7 (/10 e.new14/22 )/11 (/14 e.new15/24 )/15 e.new13/26 >/1
      context[22] = context[16];
      context[23] = context[17];
      context[24] = context[18];
      context[25] = context[19];
      context[26] = context[20];
      context[27] = context[21];
      if( ! refalrts::ident_term( identifiers[ident_OptResult], context[6] ) )
        continue;
      // closed e.new14 as range 22
      // closed e.new15 as range 24
      // closed e.new13 as range 26
      do {
        // </0 & HighLevelRASL-Function=1/4 # Disjoint/5 # OptResult/6 s.ScopeClass/7 (/10 e.Name/28 )/11 (/14 e.CondNames/30 )/15 >/1
        context[28] = context[22];
        context[29] = context[23];
        context[30] = context[24];
        context[31] = context[25];
        if( ! refalrts::empty_seq( context[26], context[27] ) )
          continue;
        // closed e.Name as range 28
        // closed e.CondNames as range 30
        //DEBUG: s.ScopeClass: 7
        //DEBUG: e.Name: 28
        //DEBUG: e.CondNames: 30

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} # Disjoint/5 {REMOVED TILE} s.ScopeClass/7 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} )/15 {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map@2/4 } Tile{ AsIs: e.CondNames/30 } Tile{ AsIs: >/1 } Tile{ AsIs: (/14 } Tile{ Reuse: # CmdEnum/6 } Tile{ HalfReuse: s.ScopeClass7 /10 AsIs: e.Name/28 AsIs: )/11 } Tile{ ]] }
        refalrts::update_name(context[4], functions[efunc_gen_Map_Z2]);
        refalrts::update_ident(context[6], identifiers[ident_CmdEnum]);
        refalrts::reinit_svar( context[10], context[7] );
        refalrts::link_brackets( context[14], context[11] );
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[10], context[11] );
        res = refalrts::splice_elem( res, context[6] );
        res = refalrts::splice_elem( res, context[14] );
        res = refalrts::splice_elem( res, context[1] );
        res = refalrts::splice_evar( res, context[30], context[31] );
        refalrts::splice_to_freelist_open( vm, context[4], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & HighLevelRASL-Function=1/4 # Disjoint/5 # OptResult/6 s.ScopeClass/7 (/10 e.Name/28 )/11 (/14 e.CondNames/30 )/15 t./34 >/1
        context[28] = context[22];
        context[29] = context[23];
        context[30] = context[24];
        context[31] = context[25];
        context[32] = context[26];
        context[33] = context[27];
        // closed e.Name as range 28
        // closed e.CondNames as range 30
        context[35] = refalrts::tvar_left( context[34], context[32], context[33] );
        if( ! context[35] )
          continue;
        if( ! refalrts::empty_seq( context[32], context[33] ) )
          continue;
        //DEBUG: s.ScopeClass: 7
        //DEBUG: e.Name: 28
        //DEBUG: e.CondNames: 30
        //DEBUG: t.: 34

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } </36 Tile{ HalfReuse: & Map@2/14 AsIs: e.CondNames/30 HalfReuse: >/15 } Tile{ AsIs: </0 Reuse: & HighLevelRASL-Function-Disjoint/4 HalfReuse: & GenSubst-Save/5 HalfReuse: & GenResult-Opt/6 AsIs: s.ScopeClass/7 AsIs: (/10 AsIs: e.Name/28 AsIs: )/11 } Tile{ AsIs: t./34 AsIs: >/1 ]] }
        refalrts::alloc_open_call(vm, context[36]);
        refalrts::reinit_name(context[14], functions[efunc_gen_Map_Z2]);
        refalrts::reinit_close_call(context[15]);
        refalrts::update_name(context[4], functions[efunc_HighLevelRASLm_Functionm_Disjoint]);
        refalrts::reinit_name(context[5], functions[efunc_GenSubstm_Save]);
        refalrts::reinit_name(context[6], functions[efunc_GenResultm_Opt]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[10], context[11] );
        refalrts::push_stack( vm, context[15] );
        refalrts::push_stack( vm, context[36] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[34];
        res = refalrts::splice_evar( res, context[0], context[11] );
        res = refalrts::splice_evar( res, context[14], context[15] );
        res = refalrts::splice_elem( res, context[36] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & HighLevelRASL-Function=1/4 # Disjoint/5 # OptResult/6 s.ScopeClass/7 (/10 e.Name/28 )/11 (/14 e.CondNames/30 )/15 e.Sentences$a/32 >/1
      context[28] = context[22];
      context[29] = context[23];
      context[30] = context[24];
      context[31] = context[25];
      context[32] = context[26];
      context[33] = context[27];
      // closed e.Name as range 28
      // closed e.CondNames as range 30
      // closed e.Sentences$a as range 32
      //DEBUG: s.ScopeClass: 7
      //DEBUG: e.Name: 28
      //DEBUG: e.CondNames: 30
      //DEBUG: e.Sentences$a: 32

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } </34 Tile{ HalfReuse: & Map@2/14 AsIs: e.CondNames/30 HalfReuse: >/15 } Tile{ AsIs: </0 Reuse: & HighLevelRASL-Function-Disjoint/4 HalfReuse: & GenSubst-Save/5 HalfReuse: & GenResult-Opt/6 AsIs: s.ScopeClass/7 AsIs: (/10 AsIs: e.Name/28 AsIs: )/11 } Tile{ AsIs: e.Sentences$a/32 } Tile{ AsIs: >/1 ]] }
      refalrts::alloc_open_call(vm, context[34]);
      refalrts::reinit_name(context[14], functions[efunc_gen_Map_Z2]);
      refalrts::reinit_close_call(context[15]);
      refalrts::update_name(context[4], functions[efunc_HighLevelRASLm_Functionm_Disjoint]);
      refalrts::reinit_name(context[5], functions[efunc_GenSubstm_Save]);
      refalrts::reinit_name(context[6], functions[efunc_GenResultm_Opt]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[10], context[11] );
      refalrts::push_stack( vm, context[15] );
      refalrts::push_stack( vm, context[34] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[32], context[33] );
      res = refalrts::splice_evar( res, context[0], context[11] );
      res = refalrts::splice_evar( res, context[14], context[15] );
      res = refalrts::splice_elem( res, context[34] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & HighLevelRASL-Function=1/4 # Disjoint/5 s.OptResult/6 s.ScopeClass/7 (/10 e.Name/22 )/11 (/14 e.CondNames/24 )/15 e.Sentences$a/26 >/1
    context[22] = context[16];
    context[23] = context[17];
    context[24] = context[18];
    context[25] = context[19];
    context[26] = context[20];
    context[27] = context[21];
    // closed e.Name as range 22
    // closed e.CondNames as range 24
    // closed e.Sentences$a as range 26
    //DEBUG: s.OptResult: 6
    //DEBUG: s.ScopeClass: 7
    //DEBUG: e.Name: 22
    //DEBUG: e.CondNames: 24
    //DEBUG: e.Sentences$a: 26

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map@2/4 } Tile{ AsIs: e.CondNames/24 } >/28 Tile{ HalfReuse: </11 HalfReuse: & HighLevelRASL-Function-Aux/14 } & HighLevelRASL-Function-Disjoint/29 </30 Tile{ HalfReuse: & GenResultFuncs*2/5 AsIs: s.OptResult/6 } >/31 Tile{ AsIs: s.ScopeClass/7 AsIs: (/10 } Tile{ AsIs: e.Name/22 } Tile{ AsIs: )/15 AsIs: e.Sentences$a/26 AsIs: >/1 ]] }
    refalrts::alloc_close_call(vm, context[28]);
    refalrts::alloc_name(vm, context[29], functions[efunc_HighLevelRASLm_Functionm_Disjoint]);
    refalrts::alloc_open_call(vm, context[30]);
    refalrts::alloc_close_call(vm, context[31]);
    refalrts::update_name(context[4], functions[efunc_gen_Map_Z2]);
    refalrts::reinit_open_call(context[11]);
    refalrts::reinit_name(context[14], functions[efunc_HighLevelRASLm_Functionm_Aux]);
    refalrts::reinit_name(context[5], functions[efunc_gen_GenResultFuncs_D2]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[11] );
    refalrts::link_brackets( context[10], context[15] );
    refalrts::push_stack( vm, context[31] );
    refalrts::push_stack( vm, context[30] );
    refalrts::push_stack( vm, context[28] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[15];
    res = refalrts::splice_evar( res, context[22], context[23] );
    res = refalrts::splice_evar( res, context[7], context[10] );
    res = refalrts::splice_elem( res, context[31] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[29], context[30] );
    res = refalrts::splice_evar( res, context[11], context[14] );
    res = refalrts::splice_elem( res, context[28] );
    res = refalrts::splice_evar( res, context[24], context[25] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & HighLevelRASL-Function=1/4 s.Joint/5 # NoOpt/6 s.ScopeClass/7 (/10 e.Name/16 )/11 (/14 e.CondNames/18 )/15 e.Sentences$a/20 >/1
    context[16] = context[8];
    context[17] = context[9];
    context[18] = context[12];
    context[19] = context[13];
    context[20] = context[2];
    context[21] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_NoOpt], context[6] ) )
      continue;
    // closed e.Name as range 16
    // closed e.CondNames as range 18
    // closed e.Sentences$a as range 20
    //DEBUG: s.Joint: 5
    //DEBUG: s.ScopeClass: 7
    //DEBUG: e.Name: 16
    //DEBUG: e.CondNames: 18
    //DEBUG: e.Sentences$a: 20

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map@2/4 } Tile{ AsIs: e.CondNames/18 } >/22 Tile{ HalfReuse: </14 } & HighLevelRASL-Function-Aux/23 Tile{ HalfReuse: </15 } & GenSentenceFunc*2/24 Tile{ AsIs: s.Joint/5 } >/25 & GenSubst-Simple/26 Tile{ HalfReuse: & GenResult-Simple/6 AsIs: s.ScopeClass/7 AsIs: (/10 AsIs: e.Name/16 AsIs: )/11 } Tile{ AsIs: e.Sentences$a/20 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_close_call(vm, context[22]);
    refalrts::alloc_name(vm, context[23], functions[efunc_HighLevelRASLm_Functionm_Aux]);
    refalrts::alloc_name(vm, context[24], functions[efunc_gen_GenSentenceFunc_D2]);
    refalrts::alloc_close_call(vm, context[25]);
    refalrts::alloc_name(vm, context[26], functions[efunc_GenSubstm_Simple]);
    refalrts::update_name(context[4], functions[efunc_gen_Map_Z2]);
    refalrts::reinit_open_call(context[14]);
    refalrts::reinit_open_call(context[15]);
    refalrts::reinit_name(context[6], functions[efunc_GenResultm_Simple]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[14] );
    refalrts::link_brackets( context[10], context[11] );
    refalrts::push_stack( vm, context[25] );
    refalrts::push_stack( vm, context[15] );
    refalrts::push_stack( vm, context[22] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[20], context[21] );
    res = refalrts::splice_evar( res, context[6], context[11] );
    res = refalrts::splice_evar( res, context[25], context[26] );
    res = refalrts::splice_elem( res, context[5] );
    res = refalrts::splice_elem( res, context[24] );
    res = refalrts::splice_elem( res, context[15] );
    res = refalrts::splice_elem( res, context[23] );
    res = refalrts::splice_elem( res, context[14] );
    res = refalrts::splice_elem( res, context[22] );
    res = refalrts::splice_evar( res, context[18], context[19] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & HighLevelRASL-Function=1/4 s.Joint/5 # OptResult/6 s.ScopeClass/7 (/10 e.Name/16 )/11 (/14 e.CondNames/18 )/15 e.Sentences$a/20 >/1
    context[16] = context[8];
    context[17] = context[9];
    context[18] = context[12];
    context[19] = context[13];
    context[20] = context[2];
    context[21] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_OptResult], context[6] ) )
      continue;
    // closed e.Name as range 16
    // closed e.CondNames as range 18
    // closed e.Sentences$a as range 20
    //DEBUG: s.Joint: 5
    //DEBUG: s.ScopeClass: 7
    //DEBUG: e.Name: 16
    //DEBUG: e.CondNames: 18
    //DEBUG: e.Sentences$a: 20

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map@2/4 } Tile{ AsIs: e.CondNames/18 } >/22 Tile{ HalfReuse: </14 } & HighLevelRASL-Function-Aux/23 Tile{ HalfReuse: </15 } & GenSentenceFunc*2/24 Tile{ AsIs: s.Joint/5 } >/25 & GenSubst-Save/26 Tile{ HalfReuse: & GenResult-Opt/6 AsIs: s.ScopeClass/7 AsIs: (/10 AsIs: e.Name/16 AsIs: )/11 } Tile{ AsIs: e.Sentences$a/20 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_close_call(vm, context[22]);
    refalrts::alloc_name(vm, context[23], functions[efunc_HighLevelRASLm_Functionm_Aux]);
    refalrts::alloc_name(vm, context[24], functions[efunc_gen_GenSentenceFunc_D2]);
    refalrts::alloc_close_call(vm, context[25]);
    refalrts::alloc_name(vm, context[26], functions[efunc_GenSubstm_Save]);
    refalrts::update_name(context[4], functions[efunc_gen_Map_Z2]);
    refalrts::reinit_open_call(context[14]);
    refalrts::reinit_open_call(context[15]);
    refalrts::reinit_name(context[6], functions[efunc_GenResultm_Opt]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[14] );
    refalrts::link_brackets( context[10], context[11] );
    refalrts::push_stack( vm, context[25] );
    refalrts::push_stack( vm, context[15] );
    refalrts::push_stack( vm, context[22] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[20], context[21] );
    res = refalrts::splice_evar( res, context[6], context[11] );
    res = refalrts::splice_evar( res, context[25], context[26] );
    res = refalrts::splice_elem( res, context[5] );
    res = refalrts::splice_elem( res, context[24] );
    res = refalrts::splice_elem( res, context[15] );
    res = refalrts::splice_elem( res, context[23] );
    res = refalrts::splice_elem( res, context[14] );
    res = refalrts::splice_elem( res, context[22] );
    res = refalrts::splice_evar( res, context[18], context[19] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & HighLevelRASL-Function=1/4 s.Joint/5 s.OptResult/6 s.ScopeClass/7 (/10 e.Name/8 )/11 (/14 e.CondNames/12 )/15 e.Sentences$a/2 >/1
  // closed e.Name as range 8
  // closed e.CondNames as range 12
  // closed e.Sentences$a as range 2
  //DEBUG: s.Joint: 5
  //DEBUG: s.OptResult: 6
  //DEBUG: s.ScopeClass: 7
  //DEBUG: e.Name: 8
  //DEBUG: e.CondNames: 12
  //DEBUG: e.Sentences$a: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </16 & Map@2/17 Tile{ AsIs: e.CondNames/12 } >/18 Tile{ HalfReuse: </11 HalfReuse: & HighLevelRASL-Function-Aux/14 } Tile{ AsIs: </0 Reuse: & GenSentenceFunc*2/4 AsIs: s.Joint/5 } >/19 </20 & GenResultFuncs*2/21 Tile{ AsIs: s.OptResult/6 } >/22 Tile{ AsIs: s.ScopeClass/7 AsIs: (/10 } Tile{ AsIs: e.Name/8 } Tile{ AsIs: )/15 AsIs: e.Sentences$a/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[16]);
  refalrts::alloc_name(vm, context[17], functions[efunc_gen_Map_Z2]);
  refalrts::alloc_close_call(vm, context[18]);
  refalrts::alloc_close_call(vm, context[19]);
  refalrts::alloc_open_call(vm, context[20]);
  refalrts::alloc_name(vm, context[21], functions[efunc_gen_GenResultFuncs_D2]);
  refalrts::alloc_close_call(vm, context[22]);
  refalrts::reinit_open_call(context[11]);
  refalrts::reinit_name(context[14], functions[efunc_HighLevelRASLm_Functionm_Aux]);
  refalrts::update_name(context[4], functions[efunc_gen_GenSentenceFunc_D2]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[11] );
  refalrts::link_brackets( context[10], context[15] );
  refalrts::push_stack( vm, context[22] );
  refalrts::push_stack( vm, context[20] );
  refalrts::push_stack( vm, context[19] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[18] );
  refalrts::push_stack( vm, context[16] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[15];
  res = refalrts::splice_evar( res, context[8], context[9] );
  res = refalrts::splice_evar( res, context[7], context[10] );
  res = refalrts::splice_elem( res, context[22] );
  res = refalrts::splice_elem( res, context[6] );
  res = refalrts::splice_evar( res, context[19], context[21] );
  res = refalrts::splice_evar( res, context[0], context[5] );
  res = refalrts::splice_evar( res, context[11], context[14] );
  res = refalrts::splice_elem( res, context[18] );
  res = refalrts::splice_evar( res, context[12], context[13] );
  res = refalrts::splice_evar( res, context[16], context[17] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_HighLevelRASLm_Function_A1("HighLevelRASL-Function=1", COOKIE1_, COOKIE2_, func_gen_HighLevelRASLm_Function_A1);


static refalrts::FnResult func_gen_HighLevelRASLm_Function_A1L1A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
  // </0 & HighLevelRASL-Function=1\1=1/4 (/7 e.CondNames/5 )/8 (/11 e.Pattern/9 )/12 (/15 e.Result/13 )/16 (/19 e.SentenceCondNames/17 )/20 e.Conditions$a/2 >/1
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
  // closed e.CondNames as range 5
  // closed e.Pattern as range 9
  // closed e.Result as range 13
  // closed e.SentenceCondNames as range 17
  // closed e.Conditions$a as range 2
  //DEBUG: e.CondNames: 5
  //DEBUG: e.Pattern: 9
  //DEBUG: e.Result: 13
  //DEBUG: e.SentenceCondNames: 17
  //DEBUG: e.Conditions$a: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} & HighLevelRASL-Function=1\1=1/4 (/7 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.CondNames/5 } Tile{ AsIs: e.SentenceCondNames/17 } Tile{ AsIs: )/20 } Tile{ HalfReuse: (/8 AsIs: (/11 AsIs: e.Pattern/9 AsIs: )/12 } Tile{ AsIs: e.Conditions$a/2 } Tile{ AsIs: (/15 AsIs: e.Result/13 AsIs: )/16 HalfReuse: )/19 } Tile{ ]] }
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_open_bracket(context[8]);
  refalrts::reinit_close_bracket(context[19]);
  refalrts::link_brackets( context[8], context[19] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[0], context[20] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[15], context[19] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[8], context[12] );
  res = refalrts::splice_elem( res, context[20] );
  res = refalrts::splice_evar( res, context[17], context[18] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::splice_to_freelist_open( vm, context[0], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_HighLevelRASLm_Function_A1L1A1("HighLevelRASL-Function=1\\1=1", COOKIE1_, COOKIE2_, func_gen_HighLevelRASLm_Function_A1L1A1);


static refalrts::FnResult func_gen_HighLevelRASLm_Function_A1L1A1L1A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 23 elems
  refalrts::Iter context[23];
  refalrts::zeros( context, 23 );
  // </0 & HighLevelRASL-Function=1\1=1\1=1/4 (/7 e.CondNames$a/5 )/8 (/11 e.Result$a/9 )/12 (/15 e.Pattern$a/13 )/16 e.CondName$a/2 >/1
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
  // closed e.CondNames$a as range 5
  // closed e.Result$a as range 9
  // closed e.Pattern$a as range 13
  // closed e.CondName$a as range 2
  //DEBUG: e.CondNames$a: 5
  //DEBUG: e.Result$a: 9
  //DEBUG: e.Pattern$a: 13
  //DEBUG: e.CondName$a: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } (/17 Tile{ AsIs: e.CondNames$a/5 } (/18 Tile{ AsIs: e.CondName$a/2 } Tile{ HalfReuse: )/0 HalfReuse: )/4 AsIs: (/7 } # Condition/19 (/20 e.CondName$a/2/21 Tile{ AsIs: )/8 AsIs: (/11 AsIs: e.Result$a/9 AsIs: )/12 AsIs: (/15 AsIs: e.Pattern$a/13 AsIs: )/16 } Tile{ HalfReuse: )/1 ]] }
  refalrts::alloc_open_bracket(vm, context[17]);
  refalrts::alloc_open_bracket(vm, context[18]);
  refalrts::alloc_ident(vm, context[19], identifiers[ident_Condition]);
  refalrts::alloc_open_bracket(vm, context[20]);
  refalrts::copy_evar(vm, context[21], context[22], context[2], context[3]);
  refalrts::reinit_close_bracket(context[0]);
  refalrts::reinit_close_bracket(context[4]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[7], context[1] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[20], context[8] );
  refalrts::link_brackets( context[17], context[4] );
  refalrts::link_brackets( context[18], context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[8], context[16] );
  res = refalrts::splice_evar( res, context[21], context[22] );
  res = refalrts::splice_evar( res, context[19], context[20] );
  res = refalrts::splice_evar( res, context[0], context[7] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_elem( res, context[18] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_elem( res, context[17] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_HighLevelRASLm_Function_A1L1A1L1A1("HighLevelRASL-Function=1\\1=1\\1=1", COOKIE1_, COOKIE2_, func_gen_HighLevelRASLm_Function_A1L1A1L1A1);


static refalrts::FnResult func_HighLevelRASLm_Function(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 23 elems
  refalrts::Iter context[23];
  refalrts::zeros( context, 23 );
  // </0 & HighLevelRASL-Function/4 s.Joint/5 s.OptResult/6 s.ScopeClass/7 (/10 e.Name/8 )/11 e.Sentences/2 >/1
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
  // closed e.Name as range 8
  // closed e.Sentences as range 2
  //DEBUG: s.Joint: 5
  //DEBUG: s.OptResult: 6
  //DEBUG: s.ScopeClass: 7
  //DEBUG: e.Name: 8
  //DEBUG: e.Sentences: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & HighLevelRASL-Function=1/4 AsIs: s.Joint/5 AsIs: s.OptResult/6 AsIs: s.ScopeClass/7 AsIs: (/10 AsIs: e.Name/8 AsIs: )/11 } </12 & DoMapAccum@2/13 (/14 e.Name/8/15 )/17 (/18 )/19 (/20 )/21 Tile{ AsIs: e.Sentences/2 } >/22 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[12]);
  refalrts::alloc_name(vm, context[13], functions[efunc_gen_DoMapAccum_Z2]);
  refalrts::alloc_open_bracket(vm, context[14]);
  refalrts::copy_evar(vm, context[15], context[16], context[8], context[9]);
  refalrts::alloc_close_bracket(vm, context[17]);
  refalrts::alloc_open_bracket(vm, context[18]);
  refalrts::alloc_close_bracket(vm, context[19]);
  refalrts::alloc_open_bracket(vm, context[20]);
  refalrts::alloc_close_bracket(vm, context[21]);
  refalrts::alloc_close_call(vm, context[22]);
  refalrts::update_name(context[4], functions[efunc_gen_HighLevelRASLm_Function_A1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[22] );
  refalrts::push_stack( vm, context[12] );
  refalrts::link_brackets( context[20], context[21] );
  refalrts::link_brackets( context[18], context[19] );
  refalrts::link_brackets( context[14], context[17] );
  refalrts::link_brackets( context[10], context[11] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_elem( res, context[22] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[12], context[21] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_HighLevelRASLm_Function("HighLevelRASL-Function", COOKIE1_, COOKIE2_, func_HighLevelRASLm_Function);


static refalrts::FnResult func_FixupName(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 23 elems
  refalrts::Iter context[23];
  refalrts::zeros( context, 23 );
  // </0 & FixupName/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & FixupName/4 (/7 e.new1/5 )/8 e.new2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new1 as range 5
  // closed e.new2 as range 2
  do {
    // </0 & FixupName/4 (/7 e.Name/13 # SUF/19 e.Suf/15 )/8 e.Name/20 # SUF/22 e.CondSuf/17 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = 0;
    context[14] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[15] = context[9];
      context[16] = context[10];
      context[17] = context[11];
      context[18] = context[12];
      context[19] = refalrts::ident_left( identifiers[ident_SUF], context[15], context[16] );
      if( ! context[19] )
        continue;
      if( ! refalrts::repeated_evar_left( vm, context[20], context[21], context[13], context[14], context[17], context[18] ) )
        continue;
      context[22] = refalrts::ident_left( identifiers[ident_SUF], context[17], context[18] );
      if( ! context[22] )
        continue;
      // closed e.Suf as range 15
      // closed e.CondSuf as range 17
      //DEBUG: e.Name: 13
      //DEBUG: e.Suf: 15
      //DEBUG: e.CondSuf: 17

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} e.Name/13 {REMOVED TILE} {REMOVED TILE} )/8 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: e.Name/20 } Tile{ AsIs: # SUF/19 } Tile{ AsIs: </0 Reuse: & FixupName-Suf/4 AsIs: (/7 } Tile{ AsIs: e.Suf/15 } Tile{ HalfReuse: )/22 AsIs: e.CondSuf/17 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_FixupNamem_Suf]);
      refalrts::reinit_close_bracket(context[22]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[22] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[22];
      res = refalrts::splice_evar( res, context[15], context[16] );
      res = refalrts::splice_evar( res, context[0], context[7] );
      res = refalrts::splice_elem( res, context[19] );
      res = refalrts::splice_evar( res, context[20], context[21] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[13], context[14], context[9], context[10] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & FixupName/4 (/7 e.Name/5 )/8 e.Name/9 # SUF/11 e.CondSuf/2 >/1
  // closed e.Name as range 5
  if( ! refalrts::repeated_evar_left( vm, context[9], context[10], context[5], context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[11] = refalrts::ident_left( identifiers[ident_SUF], context[2], context[3] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  // closed e.CondSuf as range 2
  //DEBUG: e.Name: 5
  //DEBUG: e.CondSuf: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & FixupName/4 (/7 e.Name/5 )/8 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Name/9 } Tile{ AsIs: # SUF/11 } Tile{ AsIs: e.CondSuf/2 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_elem( res, context[11] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_FixupName("FixupName", COOKIE1_, COOKIE2_, func_FixupName);


static refalrts::FnResult func_FixupNamem_Suf(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & FixupName-Suf/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & FixupName-Suf/4 (/7 e.new1/5 )/8 e.new2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new1 as range 5
  // closed e.new2 as range 2
  do {
    // </0 & FixupName-Suf/4 (/7 s.Tag/13 s.Num/15 e.Suf/9 )/8 s.Tag/14 s.Num/16 e.CondSuf/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    if( ! refalrts::svar_left( context[13], context[9], context[10] ) )
      continue;
    if( ! refalrts::repeated_stvar_left( vm, context[14], context[13], context[11], context[12] ) )
      continue;
    if( ! refalrts::svar_left( context[15], context[9], context[10] ) )
      continue;
    if( ! refalrts::repeated_stvar_left( vm, context[16], context[15], context[11], context[12] ) )
      continue;
    // closed e.Suf as range 9
    // closed e.CondSuf as range 11
    //DEBUG: s.Tag: 13
    //DEBUG: s.Num: 15
    //DEBUG: e.Suf: 9
    //DEBUG: e.CondSuf: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Tag/14 s.Num/16 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: s.Tag/13 AsIs: s.Num/15 } Tile{ AsIs: </0 AsIs: & FixupName-Suf/4 AsIs: (/7 } Tile{ AsIs: e.Suf/9 } Tile{ AsIs: )/8 } Tile{ AsIs: e.CondSuf/11 } Tile{ AsIs: >/1 ]] }
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_elem( res, context[8] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[0], context[7] );
    res = refalrts::splice_evar( res, context[13], context[15] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & FixupName-Suf/4 (/7 e.Suf/5 )/8 e.CondSuf/2 >/1
  // closed e.Suf as range 5
  // closed e.CondSuf as range 2
  //DEBUG: e.Suf: 5
  //DEBUG: e.CondSuf: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & FixupName-Suf/4 (/7 {REMOVED TILE} )/8 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Suf/5 } Tile{ AsIs: e.CondSuf/2 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_FixupNamem_Suf("FixupName-Suf", COOKIE1_, COOKIE2_, func_FixupNamem_Suf);


static refalrts::FnResult func_HighLevelRASLm_Functionm_Aux(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  // </0 & HighLevelRASL-Function-Aux/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & HighLevelRASL-Function-Aux/4 s.new1/5 s.new2/6 s.new3/7 s.new4/8 (/11 e.new5/9 )/12 e.new6/2 >/1
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
  // closed e.new5 as range 9
  // closed e.new6 as range 2
  do {
    // </0 & HighLevelRASL-Function-Aux/4 s.FnGenFunction/5 s.FnGenSubst/6 s.FnGenResult/7 s.ScopeClass/8 (/11 e.Name/13 )/12 >/1
    context[13] = context[9];
    context[14] = context[10];
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Name as range 13
    //DEBUG: s.FnGenFunction: 5
    //DEBUG: s.FnGenSubst: 6
    //DEBUG: s.FnGenResult: 7
    //DEBUG: s.ScopeClass: 8
    //DEBUG: e.Name: 13

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} s.FnGenFunction/5 s.FnGenSubst/6 s.FnGenResult/7 s.ScopeClass/8 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # CmdEnum/4 } Tile{ HalfReuse: s.ScopeClass8 /11 AsIs: e.Name/13 AsIs: )/12 } Tile{ ]] }
    refalrts::reinit_open_bracket(context[0]);
    refalrts::reinit_ident(context[4], identifiers[ident_CmdEnum]);
    refalrts::reinit_svar( context[11], context[8] );
    refalrts::link_brackets( context[0], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[11], context[12] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & HighLevelRASL-Function-Aux/4 s.FnGenFunction/5 s.FnGenSubst/6 s.FnGenResult/7 s.ScopeClass/8 (/11 e.Name/13 )/12 t.OneSentence/17 >/1
    context[13] = context[9];
    context[14] = context[10];
    context[15] = context[2];
    context[16] = context[3];
    // closed e.Name as range 13
    context[18] = refalrts::tvar_left( context[17], context[15], context[16] );
    if( ! context[18] )
      continue;
    if( ! refalrts::empty_seq( context[15], context[16] ) )
      continue;
    //DEBUG: s.FnGenFunction: 5
    //DEBUG: s.FnGenSubst: 6
    //DEBUG: s.FnGenResult: 7
    //DEBUG: s.ScopeClass: 8
    //DEBUG: e.Name: 13
    //DEBUG: t.OneSentence: 17

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} s.FnGenFunction/5 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & HighLevelRASL-Function-Disjoint/4 } Tile{ AsIs: s.FnGenSubst/6 AsIs: s.FnGenResult/7 AsIs: s.ScopeClass/8 AsIs: (/11 AsIs: e.Name/13 AsIs: )/12 AsIs: t.OneSentence/17 AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_HighLevelRASLm_Functionm_Disjoint]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[6];
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & HighLevelRASL-Function-Aux/4 s.FnGenFunction/5 s.FnGenSubst/6 s.FnGenResult/7 s.ScopeClass/8 (/11 e.Name/9 )/12 e.Sentences/2 >/1
  // closed e.Name as range 9
  // closed e.Sentences as range 2
  //DEBUG: s.FnGenFunction: 5
  //DEBUG: s.FnGenSubst: 6
  //DEBUG: s.FnGenResult: 7
  //DEBUG: s.ScopeClass: 8
  //DEBUG: e.Name: 9
  //DEBUG: e.Sentences: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: </4 AsIs: s.FnGenFunction/5 AsIs: s.FnGenSubst/6 AsIs: s.FnGenResult/7 AsIs: s.ScopeClass/8 AsIs: (/11 AsIs: e.Name/9 AsIs: )/12 AsIs: e.Sentences/2 AsIs: >/1 ]] }
  refalrts::reinit_open_call(context[4]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[4] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[4];
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_HighLevelRASLm_Functionm_Aux("HighLevelRASL-Function-Aux", COOKIE1_, COOKIE2_, func_HighLevelRASLm_Functionm_Aux);


static refalrts::FnResult func_GenSentenceFunc(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  // </0 & GenSentenceFunc/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & GenSentenceFunc/4 s.new1/5 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & GenSentenceFunc/4 # Conjoint/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_Conjoint], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & GenSentenceFunc/4 # Conjoint/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: & HighLevelRASL-Function-Conjoint/1 ]] }
    refalrts::reinit_name(context[1], functions[efunc_HighLevelRASLm_Functionm_Conjoint]);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & GenSentenceFunc/4 # Disjoint/5 >/1
  if( ! refalrts::ident_term( identifiers[ident_Disjoint], context[5] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & GenSentenceFunc/4 # Disjoint/5 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: & HighLevelRASL-Function-Disjoint/1 ]] }
  refalrts::reinit_name(context[1], functions[efunc_HighLevelRASLm_Functionm_Disjoint]);
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_GenSentenceFunc("GenSentenceFunc", COOKIE1_, COOKIE2_, func_GenSentenceFunc);


static refalrts::FnResult func_GenResultFuncs(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  // </0 & GenResultFuncs/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & GenResultFuncs/4 s.new1/5 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & GenResultFuncs/4 # NoOpt/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_NoOpt], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} # NoOpt/5 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: & GenSubst-Simple/0 Reuse: & GenResult-Simple/4 } Tile{ ]] }
    refalrts::reinit_name(context[0], functions[efunc_GenSubstm_Simple]);
    refalrts::update_name(context[4], functions[efunc_GenResultm_Simple]);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & GenResultFuncs/4 # OptResult/5 >/1
  if( ! refalrts::ident_term( identifiers[ident_OptResult], context[5] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} # OptResult/5 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: & GenSubst-Save/0 Reuse: & GenResult-Opt/4 } Tile{ ]] }
  refalrts::reinit_name(context[0], functions[efunc_GenSubstm_Save]);
  refalrts::update_name(context[4], functions[efunc_GenResultm_Opt]);
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_GenResultFuncs("GenResultFuncs", COOKIE1_, COOKIE2_, func_GenResultFuncs);


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
  // issue here memory for vars with 38 elems
  refalrts::Iter context[38];
  refalrts::zeros( context, 38 );
  // </0 & Map@1/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & Map@1/4 s.new1/5 s.new2/6 e.new3/2 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new3 as range 2
  do {
    // </0 & Map@1/4 s.new4/5 s.new5/6 t.new6/9 e.new7/7 >/1
    context[7] = context[2];
    context[8] = context[3];
    context[10] = refalrts::tvar_left( context[9], context[7], context[8] );
    if( ! context[10] )
      continue;
    // closed e.new7 as range 7
    do {
      // </0 & Map@1/4 s.new8/5 s.new9/6 (/9 s.new10/15 e.new11/13 )/10 e.new12/11 >/1
      context[11] = context[7];
      context[12] = context[8];
      context[13] = 0;
      context[14] = 0;
      if( ! refalrts::brackets_term( context[13], context[14], context[9] ) )
        continue;
      // closed e.new12 as range 11
      if( ! refalrts::svar_left( context[15], context[13], context[14] ) )
        continue;
      // closed e.new11 as range 13
      do {
        // </0 & Map@1/4 s.new13/5 s.new14/6 (/9 s.new15/15 s.new16/20 e.new17/16 )/10 e.new18/18 >/1
        context[16] = context[13];
        context[17] = context[14];
        context[18] = context[11];
        context[19] = context[12];
        // closed e.new18 as range 18
        if( ! refalrts::svar_left( context[20], context[16], context[17] ) )
          continue;
        // closed e.new17 as range 16
        do {
          // </0 & Map@1/4 s.new19/5 s.new20/6 (/9 # Function/15 s.new21/20 (/27 e.new22/25 )/28 s.new23/29 e.new24/21 )/10 e.new25/23 >/1
          context[21] = context[16];
          context[22] = context[17];
          context[23] = context[18];
          context[24] = context[19];
          if( ! refalrts::ident_term( identifiers[ident_Function], context[15] ) )
            continue;
          context[25] = 0;
          context[26] = 0;
          context[27] = refalrts::brackets_left( context[25], context[26], context[21], context[22] );
          if( ! context[27] )
            continue;
          refalrts::bracket_pointers(context[27], context[28]);
          // closed e.new22 as range 25
          // closed e.new25 as range 23
          if( ! refalrts::svar_left( context[29], context[21], context[22] ) )
            continue;
          // closed e.new24 as range 21
          do {
            // </0 & Map@1/4 s.Joint/5 s.OptResult/6 (/9 # Function/15 s.ScopeClass/20 (/27 e.3/30 )/28 # Sentences/29 e.4/32 )/10 e.Tail/34 >/1
            context[30] = context[25];
            context[31] = context[26];
            context[32] = context[21];
            context[33] = context[22];
            context[34] = context[23];
            context[35] = context[24];
            if( ! refalrts::ident_term( identifiers[ident_Sentences], context[29] ) )
              continue;
            // closed e.3 as range 30
            // closed e.4 as range 32
            // closed e.Tail as range 34
            //DEBUG: s.Joint: 5
            //DEBUG: s.OptResult: 6
            //DEBUG: s.ScopeClass: 20
            //DEBUG: e.3: 30
            //DEBUG: e.4: 32
            //DEBUG: e.Tail: 34

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} s.ScopeClass/20 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
            //RESULT: Tile{ [[ AsIs: </0 Reuse: & HighLevelRASL-Function/4 AsIs: s.Joint/5 AsIs: s.OptResult/6 HalfReuse: s.ScopeClass20 /9 HalfReuse: (/15 } Tile{ AsIs: e.3/30 } Tile{ AsIs: )/28 } Tile{ AsIs: e.4/32 } Tile{ HalfReuse: >/27 } Tile{ HalfReuse: </29 } & Map@1/36 s.Joint/5/37 Tile{ HalfReuse: s.OptResult6 /10 AsIs: e.Tail/34 AsIs: >/1 ]] }
            refalrts::alloc_name(vm, context[36], functions[efunc_gen_Map_Z1]);
            refalrts::copy_stvar(vm, context[37], context[5]);
            refalrts::update_name(context[4], functions[efunc_HighLevelRASLm_Function]);
            refalrts::reinit_svar( context[9], context[20] );
            refalrts::reinit_open_bracket(context[15]);
            refalrts::reinit_close_call(context[27]);
            refalrts::reinit_open_call(context[29]);
            refalrts::reinit_svar( context[10], context[6] );
            refalrts::push_stack( vm, context[1] );
            refalrts::push_stack( vm, context[29] );
            refalrts::push_stack( vm, context[27] );
            refalrts::push_stack( vm, context[0] );
            refalrts::link_brackets( context[15], context[28] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = context[10];
            res = refalrts::splice_evar( res, context[36], context[37] );
            res = refalrts::splice_elem( res, context[29] );
            res = refalrts::splice_elem( res, context[27] );
            res = refalrts::splice_evar( res, context[32], context[33] );
            res = refalrts::splice_elem( res, context[28] );
            res = refalrts::splice_evar( res, context[30], context[31] );
            refalrts::splice_to_freelist_open( vm, context[15], res );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          do {
            // </0 & Map@1/4 s.Joint/5 s.OptResult/6 (/9 # Function/15 s.ScopeClass/20 (/27 e.3/30 )/28 # NativeBody/29 t.3/36 e.5/32 )/10 e.Tail/34 >/1
            context[30] = context[25];
            context[31] = context[26];
            context[32] = context[21];
            context[33] = context[22];
            context[34] = context[23];
            context[35] = context[24];
            if( ! refalrts::ident_term( identifiers[ident_NativeBody], context[29] ) )
              continue;
            // closed e.3 as range 30
            // closed e.Tail as range 34
            context[37] = refalrts::tvar_left( context[36], context[32], context[33] );
            if( ! context[37] )
              continue;
            // closed e.5 as range 32
            //DEBUG: s.Joint: 5
            //DEBUG: s.OptResult: 6
            //DEBUG: s.ScopeClass: 20
            //DEBUG: e.3: 30
            //DEBUG: e.Tail: 34
            //DEBUG: t.3: 36
            //DEBUG: e.5: 32

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} # NativeBody/29 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
            //RESULT: Tile{ [[ } Tile{ AsIs: (/9 Reuse: # CmdNativeFunction/15 AsIs: s.ScopeClass/20 AsIs: (/27 AsIs: e.3/30 AsIs: )/28 } Tile{ AsIs: t.3/36 AsIs: e.5/32 AsIs: )/10 } Tile{ AsIs: </0 AsIs: & Map@1/4 AsIs: s.Joint/5 AsIs: s.OptResult/6 } Tile{ AsIs: e.Tail/34 } Tile{ AsIs: >/1 ]] }
            refalrts::update_ident(context[15], identifiers[ident_CmdNativeFunction]);
            refalrts::push_stack( vm, context[1] );
            refalrts::push_stack( vm, context[0] );
            refalrts::link_brackets( context[9], context[10] );
            refalrts::link_brackets( context[27], context[28] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = context[1];
            res = refalrts::splice_evar( res, context[34], context[35] );
            res = refalrts::splice_evar( res, context[0], context[6] );
            res = refalrts::splice_evar( res, context[36], context[10] );
            res = refalrts::splice_evar( res, context[9], context[28] );
            refalrts::splice_to_freelist_open( vm, trash_prev, res );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          // </0 & Map@1/4 s.Joint/5 s.OptResult/6 (/9 # Function/15 s.ScopeClass/20 (/27 e.3/30 )/28 # Metatable/29 e.4/32 )/10 e.Tail/34 >/1
          context[30] = context[25];
          context[31] = context[26];
          context[32] = context[21];
          context[33] = context[22];
          context[34] = context[23];
          context[35] = context[24];
          if( ! refalrts::ident_term( identifiers[ident_Metatable], context[29] ) )
            continue;
          // closed e.3 as range 30
          // closed e.4 as range 32
          // closed e.Tail as range 34
          //DEBUG: s.Joint: 5
          //DEBUG: s.OptResult: 6
          //DEBUG: s.ScopeClass: 20
          //DEBUG: e.3: 30
          //DEBUG: e.4: 32
          //DEBUG: e.Tail: 34

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} # Metatable/29 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ } Tile{ AsIs: (/9 Reuse: # CmdMetatable/15 AsIs: s.ScopeClass/20 AsIs: (/27 AsIs: e.3/30 AsIs: )/28 } Tile{ AsIs: e.4/32 } Tile{ AsIs: )/10 } Tile{ AsIs: </0 AsIs: & Map@1/4 AsIs: s.Joint/5 AsIs: s.OptResult/6 } Tile{ AsIs: e.Tail/34 } Tile{ AsIs: >/1 ]] }
          refalrts::update_ident(context[15], identifiers[ident_CmdMetatable]);
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[0] );
          refalrts::link_brackets( context[9], context[10] );
          refalrts::link_brackets( context[27], context[28] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[1];
          res = refalrts::splice_evar( res, context[34], context[35] );
          res = refalrts::splice_evar( res, context[0], context[6] );
          res = refalrts::splice_elem( res, context[10] );
          res = refalrts::splice_evar( res, context[32], context[33] );
          res = refalrts::splice_evar( res, context[9], context[28] );
          refalrts::splice_to_freelist_open( vm, trash_prev, res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        do {
          // </0 & Map@1/4 s.Joint/5 s.OptResult/6 (/9 # Swap/15 s.ScopeClass/20 e.1/21 )/10 e.Tail/23 >/1
          context[21] = context[16];
          context[22] = context[17];
          context[23] = context[18];
          context[24] = context[19];
          if( ! refalrts::ident_term( identifiers[ident_Swap], context[15] ) )
            continue;
          // closed e.1 as range 21
          // closed e.Tail as range 23
          //DEBUG: s.Joint: 5
          //DEBUG: s.OptResult: 6
          //DEBUG: s.ScopeClass: 20
          //DEBUG: e.1: 21
          //DEBUG: e.Tail: 23

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ } Tile{ AsIs: (/9 Reuse: # CmdSwap/15 AsIs: s.ScopeClass/20 AsIs: e.1/21 AsIs: )/10 } Tile{ AsIs: </0 AsIs: & Map@1/4 AsIs: s.Joint/5 AsIs: s.OptResult/6 } Tile{ AsIs: e.Tail/23 } Tile{ AsIs: >/1 ]] }
          refalrts::update_ident(context[15], identifiers[ident_CmdSwap]);
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[0] );
          refalrts::link_brackets( context[9], context[10] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[1];
          res = refalrts::splice_evar( res, context[23], context[24] );
          res = refalrts::splice_evar( res, context[0], context[6] );
          res = refalrts::splice_evar( res, context[9], context[10] );
          refalrts::use( res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & Map@1/4 s.Joint/5 s.OptResult/6 (/9 # Declaration/15 s.ScopeClass/20 e.1/21 )/10 e.Tail/23 >/1
        context[21] = context[16];
        context[22] = context[17];
        context[23] = context[18];
        context[24] = context[19];
        if( ! refalrts::ident_term( identifiers[ident_Declaration], context[15] ) )
          continue;
        // closed e.1 as range 21
        // closed e.Tail as range 23
        //DEBUG: s.Joint: 5
        //DEBUG: s.OptResult: 6
        //DEBUG: s.ScopeClass: 20
        //DEBUG: e.1: 21
        //DEBUG: e.Tail: 23

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ AsIs: (/9 Reuse: # CmdDeclaration/15 AsIs: s.ScopeClass/20 AsIs: e.1/21 AsIs: )/10 } Tile{ AsIs: </0 AsIs: & Map@1/4 AsIs: s.Joint/5 AsIs: s.OptResult/6 } Tile{ AsIs: e.Tail/23 } Tile{ AsIs: >/1 ]] }
        refalrts::update_ident(context[15], identifiers[ident_CmdDeclaration]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[9], context[10] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[23], context[24] );
        res = refalrts::splice_evar( res, context[0], context[6] );
        res = refalrts::splice_evar( res, context[9], context[10] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & Map@1/4 s.Joint/5 s.OptResult/6 (/9 # Ident/15 e.0/16 )/10 e.Tail/18 >/1
        context[16] = context[13];
        context[17] = context[14];
        context[18] = context[11];
        context[19] = context[12];
        if( ! refalrts::ident_term( identifiers[ident_Ident], context[15] ) )
          continue;
        // closed e.0 as range 16
        // closed e.Tail as range 18
        //DEBUG: s.Joint: 5
        //DEBUG: s.OptResult: 6
        //DEBUG: e.0: 16
        //DEBUG: e.Tail: 18

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ AsIs: (/9 Reuse: # CmdDefineIdent/15 AsIs: e.0/16 AsIs: )/10 } Tile{ AsIs: </0 AsIs: & Map@1/4 AsIs: s.Joint/5 AsIs: s.OptResult/6 } Tile{ AsIs: e.Tail/18 } Tile{ AsIs: >/1 ]] }
        refalrts::update_ident(context[15], identifiers[ident_CmdDefineIdent]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[9], context[10] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[18], context[19] );
        res = refalrts::splice_evar( res, context[0], context[6] );
        res = refalrts::splice_evar( res, context[9], context[10] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & Map@1/4 s.new13/5 s.new14/6 (/9 s.new15/15 t.new16/20 e.new17/16 )/10 e.new18/18 >/1
      context[16] = context[13];
      context[17] = context[14];
      context[18] = context[11];
      context[19] = context[12];
      // closed e.new18 as range 18
      context[21] = refalrts::tvar_left( context[20], context[16], context[17] );
      if( ! context[21] )
        continue;
      // closed e.new17 as range 16
      do {
        // </0 & Map@1/4 s.Joint/5 s.OptResult/6 (/9 # NativeBlock/15 t.0/20 e.1/22 )/10 e.Tail/24 >/1
        context[22] = context[16];
        context[23] = context[17];
        context[24] = context[18];
        context[25] = context[19];
        if( ! refalrts::ident_term( identifiers[ident_NativeBlock], context[15] ) )
          continue;
        // closed e.1 as range 22
        // closed e.Tail as range 24
        //DEBUG: t.0: 20
        //DEBUG: s.Joint: 5
        //DEBUG: s.OptResult: 6
        //DEBUG: e.1: 22
        //DEBUG: e.Tail: 24

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ AsIs: (/9 Reuse: # CmdEmitNativeCode/15 AsIs: t.0/20 AsIs: e.1/22 AsIs: )/10 } Tile{ AsIs: </0 AsIs: & Map@1/4 AsIs: s.Joint/5 AsIs: s.OptResult/6 } Tile{ AsIs: e.Tail/24 } Tile{ AsIs: >/1 ]] }
        refalrts::update_ident(context[15], identifiers[ident_CmdEmitNativeCode]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[9], context[10] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[24], context[25] );
        res = refalrts::splice_evar( res, context[0], context[6] );
        res = refalrts::splice_evar( res, context[9], context[10] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & Map@1/4 s.Joint/5 s.OptResult/6 (/9 # Spec/15 t.0/20 e.1/22 )/10 e.Tail/24 >/1
      context[22] = context[16];
      context[23] = context[17];
      context[24] = context[18];
      context[25] = context[19];
      if( ! refalrts::ident_term( identifiers[ident_Spec], context[15] ) )
        continue;
      // closed e.1 as range 22
      // closed e.Tail as range 24
      //DEBUG: t.0: 20
      //DEBUG: s.Joint: 5
      //DEBUG: s.OptResult: 6
      //DEBUG: e.1: 22
      //DEBUG: e.Tail: 24

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} (/9 # Spec/15 t.0/20 e.1/22 )/10 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Map@1/4 AsIs: s.Joint/5 AsIs: s.OptResult/6 } Tile{ AsIs: e.Tail/24 } Tile{ AsIs: >/1 ]] }
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[24], context[25] );
      refalrts::splice_to_freelist_open( vm, context[6], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Map@1/4 s.Joint/5 s.OptResult/6 t.Next/9 e.Tail/11 >/1
    context[11] = context[7];
    context[12] = context[8];
    // closed e.Tail as range 11
    //DEBUG: t.Next: 9
    //DEBUG: s.Joint: 5
    //DEBUG: s.OptResult: 6
    //DEBUG: e.Tail: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & HighLevelRASL\1*8/4 AsIs: s.Joint/5 AsIs: s.OptResult/6 AsIs: t.Next/9 } >/13 </14 & Map@1/15 s.Joint/5/16 s.OptResult/6/17 Tile{ AsIs: e.Tail/11 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_close_call(vm, context[13]);
    refalrts::alloc_open_call(vm, context[14]);
    refalrts::alloc_name(vm, context[15], functions[efunc_gen_Map_Z1]);
    refalrts::copy_stvar(vm, context[16], context[5]);
    refalrts::copy_stvar(vm, context[17], context[6]);
    refalrts::update_name(context[4], functions[efunc_gen_HighLevelRASL_L1D8]);
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
    // </0 & Map@1/4 s.Joint/5 s.OptResult/6 >/1
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    //DEBUG: s.Joint: 5
    //DEBUG: s.OptResult: 6

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Map@1/4 s.Joint/5 s.OptResult/6 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Map@1/4 s.Joint/5 s.OptResult/6 e.items/2 >/1
  // closed e.items as range 2
  //DEBUG: s.Joint: 5
  //DEBUG: s.OptResult: 6
  //DEBUG: e.items: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </7 & Map@0/8 Tile{ HalfReuse: [*]/0 Reuse: & HighLevelRASL\1@0/4 AsIs: s.Joint/5 AsIs: s.OptResult/6 } {*}/9 Tile{ AsIs: e.items/2 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[7]);
  refalrts::alloc_name(vm, context[8], functions[efunc_gen_Map_Z0]);
  refalrts::alloc_unwrapped_closure(vm, context[9], context[0]);
  refalrts::reinit_closure_head(context[0]);
  refalrts::update_name(context[4], functions[efunc_gen_HighLevelRASL_L1Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[7] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_elem( res, context[9] );
  res = refalrts::splice_evar( res, context[0], context[6] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::use( res );
  refalrts::wrap_closure( context[9] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Map_Z1("Map@1", COOKIE1_, COOKIE2_, func_gen_Map_Z1);


static refalrts::FnResult func_gen_Map_Z2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
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
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # CmdConditionFunc/4 HalfReuse: # GN-Local/7 AsIs: e./11 AsIs: )/8 } </13 & Map@2/14 Tile{ AsIs: e.Tail/9 } Tile{ AsIs: >/1 ]] }
      refalrts::alloc_open_call(vm, context[13]);
      refalrts::alloc_name(vm, context[14], functions[efunc_gen_Map_Z2]);
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_ident(context[4], identifiers[ident_CmdConditionFunc]);
      refalrts::reinit_ident(context[7], identifiers[ident_GNm_Local]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[13] );
      refalrts::link_brackets( context[0], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[9], context[10] );
      res = refalrts::splice_evar( res, context[13], context[14] );
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
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & HighLevelRASL-Function\1*1/4 AsIs: t.Next/7 } >/11 </12 & Map@2/13 Tile{ AsIs: e.Tail/9 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_close_call(vm, context[11]);
    refalrts::alloc_open_call(vm, context[12]);
    refalrts::alloc_name(vm, context[13], functions[efunc_gen_Map_Z2]);
    refalrts::update_name(context[4], functions[efunc_gen_HighLevelRASLm_Function_L1D1]);
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
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Map@0/0 Reuse: & HighLevelRASL-Function\1@0/4 AsIs: e.items/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::reinit_name(context[0], functions[efunc_gen_Map_Z0]);
  refalrts::update_name(context[4], functions[efunc_gen_HighLevelRASLm_Function_L1Z0]);
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


static refalrts::FnResult func_gen_DoMapAccum_Z1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 53 elems
  refalrts::Iter context[53];
  refalrts::zeros( context, 53 );
  // </0 & DoMapAccum@1/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & DoMapAccum@1/4 (/7 e.new1/5 )/8 t.new2/9 (/13 e.new3/11 )/14 e.new4/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new1 as range 5
  context[10] = refalrts::tvar_left( context[9], context[2], context[3] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  context[11] = 0;
  context[12] = 0;
  context[13] = refalrts::brackets_left( context[11], context[12], context[2], context[3] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[13], context[14]);
  // closed e.new3 as range 11
  // closed e.new4 as range 2
  do {
    // </0 & DoMapAccum@1/4 (/7 e.new8/15 )/8 t.new5/9 (/13 e.new9/17 )/14 t.new6/21 e.new7/19 >/1
    context[15] = context[5];
    context[16] = context[6];
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
      // </0 & DoMapAccum@1/4 (/7 e.Name/23 )/8 (/9 e./29 )/10 (/13 e.Scanned/25 )/14 (/21 # Condition/33 (/36 e.3/34 )/37 (/40 e.5/38 )/41 (/44 e.7/42 )/45 )/22 e.Tail/27 >/1
      context[23] = context[15];
      context[24] = context[16];
      context[25] = context[17];
      context[26] = context[18];
      context[27] = context[19];
      context[28] = context[20];
      context[29] = 0;
      context[30] = 0;
      if( ! refalrts::brackets_term( context[29], context[30], context[9] ) )
        continue;
      context[31] = 0;
      context[32] = 0;
      if( ! refalrts::brackets_term( context[31], context[32], context[21] ) )
        continue;
      context[33] = refalrts::ident_left( identifiers[ident_Condition], context[31], context[32] );
      if( ! context[33] )
        continue;
      context[34] = 0;
      context[35] = 0;
      context[36] = refalrts::brackets_left( context[34], context[35], context[31], context[32] );
      if( ! context[36] )
        continue;
      refalrts::bracket_pointers(context[36], context[37]);
      context[38] = 0;
      context[39] = 0;
      context[40] = refalrts::brackets_left( context[38], context[39], context[31], context[32] );
      if( ! context[40] )
        continue;
      refalrts::bracket_pointers(context[40], context[41]);
      context[42] = 0;
      context[43] = 0;
      context[44] = refalrts::brackets_left( context[42], context[43], context[31], context[32] );
      if( ! context[44] )
        continue;
      refalrts::bracket_pointers(context[44], context[45]);
      if( ! refalrts::empty_seq( context[31], context[32] ) )
        continue;
      // closed e.Name as range 23
      // closed e. as range 29
      // closed e.Scanned as range 25
      // closed e.3 as range 34
      // closed e.5 as range 38
      // closed e.7 as range 42
      // closed e.Tail as range 27
      //DEBUG: e.Name: 23
      //DEBUG: e.: 29
      //DEBUG: e.Scanned: 25
      //DEBUG: e.3: 34
      //DEBUG: e.5: 38
      //DEBUG: e.7: 42
      //DEBUG: e.Tail: 27

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum$1=1@1/4 AsIs: (/7 AsIs: e.Name/23 AsIs: )/8 AsIs: (/9 } Tile{ AsIs: e.Scanned/25 } Tile{ AsIs: )/10 AsIs: (/13 } Tile{ AsIs: e.Tail/27 } Tile{ AsIs: )/14 HalfReuse: </21 HalfReuse: & HighLevelRASL-Function=1\1=1\1=1/33 AsIs: (/36 } Tile{ AsIs: e./29 } Tile{ AsIs: )/37 AsIs: (/40 AsIs: e.5/38 AsIs: )/41 AsIs: (/44 AsIs: e.7/42 AsIs: )/45 HalfReuse: </22 } & FixupName/46 (/47 e.Name/23/48 )/50 Tile{ AsIs: e.3/34 } >/51 >/52 Tile{ AsIs: >/1 ]] }
      refalrts::alloc_name(vm, context[46], functions[efunc_FixupName]);
      refalrts::alloc_open_bracket(vm, context[47]);
      refalrts::copy_evar(vm, context[48], context[49], context[23], context[24]);
      refalrts::alloc_close_bracket(vm, context[50]);
      refalrts::alloc_close_call(vm, context[51]);
      refalrts::alloc_close_call(vm, context[52]);
      refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_S1A1Z1]);
      refalrts::reinit_open_call(context[21]);
      refalrts::reinit_name(context[33], functions[efunc_gen_HighLevelRASLm_Function_A1L1A1L1A1]);
      refalrts::reinit_open_call(context[22]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[52] );
      refalrts::push_stack( vm, context[21] );
      refalrts::push_stack( vm, context[51] );
      refalrts::push_stack( vm, context[22] );
      refalrts::link_brackets( context[47], context[50] );
      refalrts::link_brackets( context[44], context[45] );
      refalrts::link_brackets( context[40], context[41] );
      refalrts::link_brackets( context[36], context[37] );
      refalrts::link_brackets( context[13], context[14] );
      refalrts::link_brackets( context[9], context[10] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[51], context[52] );
      res = refalrts::splice_evar( res, context[34], context[35] );
      res = refalrts::splice_evar( res, context[46], context[50] );
      res = refalrts::splice_evar( res, context[37], context[22] );
      res = refalrts::splice_evar( res, context[29], context[30] );
      res = refalrts::splice_evar( res, context[14], context[36] );
      res = refalrts::splice_evar( res, context[27], context[28] );
      res = refalrts::splice_evar( res, context[10], context[13] );
      res = refalrts::splice_evar( res, context[25], context[26] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & DoMapAccum@1/4 (/7 e.Name/23 )/8 t.Acc/9 (/13 e.Scanned/25 )/14 t.Next/21 e.Tail/27 >/1
    context[23] = context[15];
    context[24] = context[16];
    context[25] = context[17];
    context[26] = context[18];
    context[27] = context[19];
    context[28] = context[20];
    // closed e.Name as range 23
    // closed e.Scanned as range 25
    // closed e.Tail as range 27
    //DEBUG: t.Acc: 9
    //DEBUG: t.Next: 21
    //DEBUG: e.Name: 23
    //DEBUG: e.Scanned: 25
    //DEBUG: e.Tail: 27

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum$1=1@1/4 AsIs: (/7 AsIs: e.Name/23 AsIs: )/8 } Tile{ AsIs: (/13 AsIs: e.Scanned/25 AsIs: )/14 } (/29 Tile{ AsIs: e.Tail/27 } )/30 </31 & HighLevelRASL-Function=1\1=1\1*1/32 (/33 e.Name/23/34 )/36 Tile{ AsIs: t.Acc/9 } Tile{ AsIs: t.Next/21 } >/37 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_bracket(vm, context[29]);
    refalrts::alloc_close_bracket(vm, context[30]);
    refalrts::alloc_open_call(vm, context[31]);
    refalrts::alloc_name(vm, context[32], functions[efunc_gen_HighLevelRASLm_Function_A1L1A1L1D1]);
    refalrts::alloc_open_bracket(vm, context[33]);
    refalrts::copy_evar(vm, context[34], context[35], context[23], context[24]);
    refalrts::alloc_close_bracket(vm, context[36]);
    refalrts::alloc_close_call(vm, context[37]);
    refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_S1A1Z1]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[37] );
    refalrts::push_stack( vm, context[31] );
    refalrts::link_brackets( context[33], context[36] );
    refalrts::link_brackets( context[29], context[30] );
    refalrts::link_brackets( context[13], context[14] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_elem( res, context[37] );
    res = refalrts::splice_evar( res, context[21], context[22] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[30], context[36] );
    res = refalrts::splice_evar( res, context[27], context[28] );
    res = refalrts::splice_elem( res, context[29] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoMapAccum@1/4 (/7 e.Name/15 )/8 t.Acc/9 (/13 e.Scanned/17 )/14 >/1
    context[15] = context[5];
    context[16] = context[6];
    context[17] = context[11];
    context[18] = context[12];
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Name as range 15
    // closed e.Scanned as range 17
    //DEBUG: t.Acc: 9
    //DEBUG: e.Name: 15
    //DEBUG: e.Scanned: 17

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & DoMapAccum@1/4 (/7 e.Name/15 )/8 {REMOVED TILE} (/13 {REMOVED TILE} )/14 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: t.Acc/9 } Tile{ AsIs: e.Scanned/17 } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoMapAccum@1/4 (/7 e.Name/5 )/8 t.acc/9 (/13 e.scanned/11 )/14 e.items/2 >/1
  // closed e.Name as range 5
  // closed e.scanned as range 11
  // closed e.items as range 2
  //DEBUG: t.acc: 9
  //DEBUG: e.Name: 5
  //DEBUG: e.scanned: 11
  //DEBUG: e.items: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum@0/4 HalfReuse: [*]/7 } & HighLevelRASL-Function=1\1=1\1@0/15 (/16 Tile{ AsIs: e.Name/5 } )/17 Tile{ HalfReuse: {*}/8 AsIs: t.acc/9 AsIs: (/13 AsIs: e.scanned/11 AsIs: )/14 AsIs: e.items/2 AsIs: >/1 ]] }
  refalrts::alloc_name(vm, context[15], functions[efunc_gen_HighLevelRASLm_Function_A1L1A1L1Z0]);
  refalrts::alloc_open_bracket(vm, context[16]);
  refalrts::alloc_close_bracket(vm, context[17]);
  refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_Z0]);
  refalrts::reinit_closure_head(context[7]);
  refalrts::reinit_unwrapped_closure(context[8], context[7]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[13], context[14] );
  refalrts::link_brackets( context[16], context[17] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_elem( res, context[17] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[15], context[16] );
  refalrts::use( res );
  refalrts::wrap_closure( context[8] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoMapAccum_Z1("DoMapAccum@1", COOKIE1_, COOKIE2_, func_gen_DoMapAccum_Z1);


static refalrts::FnResult func_gen_DoMapAccum_Z2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 55 elems
  refalrts::Iter context[55];
  refalrts::zeros( context, 55 );
  // </0 & DoMapAccum@2/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & DoMapAccum@2/4 (/7 e.new1/5 )/8 t.new2/9 (/13 e.new3/11 )/14 e.new4/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new1 as range 5
  context[10] = refalrts::tvar_left( context[9], context[2], context[3] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  context[11] = 0;
  context[12] = 0;
  context[13] = refalrts::brackets_left( context[11], context[12], context[2], context[3] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[13], context[14]);
  // closed e.new3 as range 11
  // closed e.new4 as range 2
  do {
    // </0 & DoMapAccum@2/4 (/7 e.new8/15 )/8 t.new5/9 (/13 e.new9/17 )/14 t.new6/21 e.new7/19 >/1
    context[15] = context[5];
    context[16] = context[6];
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
      // </0 & DoMapAccum@2/4 (/7 e.Name/23 )/8 (/9 e./29 )/10 (/13 e.Scanned/25 )/14 (/21 (/35 e.2/33 )/36 e.3/31 (/39 e.4/37 )/40 )/22 e.Tail/27 >/1
      context[23] = context[15];
      context[24] = context[16];
      context[25] = context[17];
      context[26] = context[18];
      context[27] = context[19];
      context[28] = context[20];
      context[29] = 0;
      context[30] = 0;
      if( ! refalrts::brackets_term( context[29], context[30], context[9] ) )
        continue;
      context[31] = 0;
      context[32] = 0;
      if( ! refalrts::brackets_term( context[31], context[32], context[21] ) )
        continue;
      context[33] = 0;
      context[34] = 0;
      context[35] = refalrts::brackets_left( context[33], context[34], context[31], context[32] );
      if( ! context[35] )
        continue;
      refalrts::bracket_pointers(context[35], context[36]);
      context[37] = 0;
      context[38] = 0;
      context[39] = refalrts::brackets_right( context[37], context[38], context[31], context[32] );
      if( ! context[39] )
        continue;
      refalrts::bracket_pointers(context[39], context[40]);
      // closed e.Name as range 23
      // closed e. as range 29
      // closed e.Scanned as range 25
      // closed e.2 as range 33
      // closed e.3 as range 31
      // closed e.4 as range 37
      // closed e.Tail as range 27
      //DEBUG: e.Name: 23
      //DEBUG: e.: 29
      //DEBUG: e.Scanned: 25
      //DEBUG: e.2: 33
      //DEBUG: e.3: 31
      //DEBUG: e.4: 37
      //DEBUG: e.Tail: 27

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum$1=1@2/4 AsIs: (/7 AsIs: e.Name/23 AsIs: )/8 AsIs: (/9 } Tile{ AsIs: e.Scanned/25 } Tile{ AsIs: )/10 AsIs: (/13 } Tile{ AsIs: e.Tail/27 } Tile{ AsIs: )/14 } </41 & HighLevelRASL-Function=1\1=1/42 (/43 Tile{ AsIs: e./29 } Tile{ HalfReuse: )/21 AsIs: (/35 AsIs: e.2/33 AsIs: )/36 } Tile{ AsIs: (/39 AsIs: e.4/37 AsIs: )/40 HalfReuse: </22 } & DoMapAccum@1/44 (/45 e.Name/23/46 )/48 (/49 )/50 (/51 )/52 Tile{ AsIs: e.3/31 } >/53 >/54 Tile{ AsIs: >/1 ]] }
      refalrts::alloc_open_call(vm, context[41]);
      refalrts::alloc_name(vm, context[42], functions[efunc_gen_HighLevelRASLm_Function_A1L1A1]);
      refalrts::alloc_open_bracket(vm, context[43]);
      refalrts::alloc_name(vm, context[44], functions[efunc_gen_DoMapAccum_Z1]);
      refalrts::alloc_open_bracket(vm, context[45]);
      refalrts::copy_evar(vm, context[46], context[47], context[23], context[24]);
      refalrts::alloc_close_bracket(vm, context[48]);
      refalrts::alloc_open_bracket(vm, context[49]);
      refalrts::alloc_close_bracket(vm, context[50]);
      refalrts::alloc_open_bracket(vm, context[51]);
      refalrts::alloc_close_bracket(vm, context[52]);
      refalrts::alloc_close_call(vm, context[53]);
      refalrts::alloc_close_call(vm, context[54]);
      refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_S1A1Z2]);
      refalrts::reinit_close_bracket(context[21]);
      refalrts::reinit_open_call(context[22]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[54] );
      refalrts::push_stack( vm, context[41] );
      refalrts::push_stack( vm, context[53] );
      refalrts::push_stack( vm, context[22] );
      refalrts::link_brackets( context[51], context[52] );
      refalrts::link_brackets( context[49], context[50] );
      refalrts::link_brackets( context[45], context[48] );
      refalrts::link_brackets( context[39], context[40] );
      refalrts::link_brackets( context[35], context[36] );
      refalrts::link_brackets( context[43], context[21] );
      refalrts::link_brackets( context[13], context[14] );
      refalrts::link_brackets( context[9], context[10] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[53], context[54] );
      res = refalrts::splice_evar( res, context[31], context[32] );
      res = refalrts::splice_evar( res, context[44], context[52] );
      res = refalrts::splice_evar( res, context[39], context[22] );
      res = refalrts::splice_evar( res, context[21], context[36] );
      res = refalrts::splice_evar( res, context[29], context[30] );
      res = refalrts::splice_evar( res, context[41], context[43] );
      res = refalrts::splice_elem( res, context[14] );
      res = refalrts::splice_evar( res, context[27], context[28] );
      res = refalrts::splice_evar( res, context[10], context[13] );
      res = refalrts::splice_evar( res, context[25], context[26] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & DoMapAccum@2/4 (/7 e.Name/23 )/8 t.Acc/9 (/13 e.Scanned/25 )/14 t.Next/21 e.Tail/27 >/1
    context[23] = context[15];
    context[24] = context[16];
    context[25] = context[17];
    context[26] = context[18];
    context[27] = context[19];
    context[28] = context[20];
    // closed e.Name as range 23
    // closed e.Scanned as range 25
    // closed e.Tail as range 27
    //DEBUG: t.Acc: 9
    //DEBUG: t.Next: 21
    //DEBUG: e.Name: 23
    //DEBUG: e.Scanned: 25
    //DEBUG: e.Tail: 27

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum$1=1@2/4 AsIs: (/7 AsIs: e.Name/23 AsIs: )/8 } Tile{ AsIs: (/13 AsIs: e.Scanned/25 AsIs: )/14 } (/29 Tile{ AsIs: e.Tail/27 } )/30 </31 & HighLevelRASL-Function=1\1*1/32 (/33 e.Name/23/34 )/36 Tile{ AsIs: t.Acc/9 } Tile{ AsIs: t.Next/21 } >/37 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_bracket(vm, context[29]);
    refalrts::alloc_close_bracket(vm, context[30]);
    refalrts::alloc_open_call(vm, context[31]);
    refalrts::alloc_name(vm, context[32], functions[efunc_gen_HighLevelRASLm_Function_A1L1D1]);
    refalrts::alloc_open_bracket(vm, context[33]);
    refalrts::copy_evar(vm, context[34], context[35], context[23], context[24]);
    refalrts::alloc_close_bracket(vm, context[36]);
    refalrts::alloc_close_call(vm, context[37]);
    refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_S1A1Z2]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[37] );
    refalrts::push_stack( vm, context[31] );
    refalrts::link_brackets( context[33], context[36] );
    refalrts::link_brackets( context[29], context[30] );
    refalrts::link_brackets( context[13], context[14] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_elem( res, context[37] );
    res = refalrts::splice_evar( res, context[21], context[22] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[30], context[36] );
    res = refalrts::splice_evar( res, context[27], context[28] );
    res = refalrts::splice_elem( res, context[29] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoMapAccum@2/4 (/7 e.Name/15 )/8 t.Acc/9 (/13 e.Scanned/17 )/14 >/1
    context[15] = context[5];
    context[16] = context[6];
    context[17] = context[11];
    context[18] = context[12];
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Name as range 15
    // closed e.Scanned as range 17
    //DEBUG: t.Acc: 9
    //DEBUG: e.Name: 15
    //DEBUG: e.Scanned: 17

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & DoMapAccum@2/4 (/7 e.Name/15 )/8 {REMOVED TILE} (/13 {REMOVED TILE} )/14 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: t.Acc/9 } Tile{ AsIs: e.Scanned/17 } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoMapAccum@2/4 (/7 e.Name/5 )/8 t.acc/9 (/13 e.scanned/11 )/14 e.items/2 >/1
  // closed e.Name as range 5
  // closed e.scanned as range 11
  // closed e.items as range 2
  //DEBUG: t.acc: 9
  //DEBUG: e.Name: 5
  //DEBUG: e.scanned: 11
  //DEBUG: e.items: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum@0/4 HalfReuse: [*]/7 } & HighLevelRASL-Function=1\1@0/15 (/16 Tile{ AsIs: e.Name/5 } )/17 Tile{ HalfReuse: {*}/8 AsIs: t.acc/9 AsIs: (/13 AsIs: e.scanned/11 AsIs: )/14 AsIs: e.items/2 AsIs: >/1 ]] }
  refalrts::alloc_name(vm, context[15], functions[efunc_gen_HighLevelRASLm_Function_A1L1Z0]);
  refalrts::alloc_open_bracket(vm, context[16]);
  refalrts::alloc_close_bracket(vm, context[17]);
  refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_Z0]);
  refalrts::reinit_closure_head(context[7]);
  refalrts::reinit_unwrapped_closure(context[8], context[7]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[13], context[14] );
  refalrts::link_brackets( context[16], context[17] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_elem( res, context[17] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[15], context[16] );
  refalrts::use( res );
  refalrts::wrap_closure( context[8] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoMapAccum_Z2("DoMapAccum@2", COOKIE1_, COOKIE2_, func_gen_DoMapAccum_Z2);


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


static refalrts::FnResult func_gen_DoMapAccum_S1A1Z1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 27 elems
  refalrts::Iter context[27];
  refalrts::zeros( context, 27 );
  // </0 & DoMapAccum$1=1@1/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & DoMapAccum$1=1@1/4 (/7 e.new1/5 )/8 (/11 e.new2/9 )/12 (/15 e.new3/13 )/16 e.new4/2 >/1
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
  // closed e.new1 as range 5
  // closed e.new2 as range 9
  // closed e.new3 as range 13
  // closed e.new4 as range 2
  do {
    // </0 & DoMapAccum$1=1@1/4 (/7 e.Name/17 )/8 (/11 e.Scanned0/19 )/12 (/15 e.Tail0/21 )/16 t.Acc$a/25 e.StepScanned/23 >/1
    context[17] = context[5];
    context[18] = context[6];
    context[19] = context[9];
    context[20] = context[10];
    context[21] = context[13];
    context[22] = context[14];
    context[23] = context[2];
    context[24] = context[3];
    // closed e.Name as range 17
    // closed e.Scanned0 as range 19
    // closed e.Tail0 as range 21
    context[26] = refalrts::tvar_left( context[25], context[23], context[24] );
    if( ! context[26] )
      continue;
    // closed e.StepScanned as range 23
    //DEBUG: e.Name: 17
    //DEBUG: e.Scanned0: 19
    //DEBUG: e.Tail0: 21
    //DEBUG: t.Acc$a: 25
    //DEBUG: e.StepScanned: 23

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} (/11 {REMOVED TILE} )/12 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum@1/4 AsIs: (/7 AsIs: e.Name/17 AsIs: )/8 } Tile{ AsIs: t.Acc$a/25 } Tile{ AsIs: (/15 } Tile{ AsIs: e.Scanned0/19 } Tile{ AsIs: e.StepScanned/23 } Tile{ AsIs: )/16 } Tile{ AsIs: e.Tail0/21 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_Z1]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[15], context[16] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[21], context[22] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_evar( res, context[23], context[24] );
    res = refalrts::splice_evar( res, context[19], context[20] );
    res = refalrts::splice_elem( res, context[15] );
    res = refalrts::splice_evar( res, context[25], context[26] );
    refalrts::splice_to_freelist_open( vm, context[8], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoMapAccum$1=1@1/4 (/7 e.Name/5 )/8 (/11 e.Scanned0/9 )/12 (/15 e.Tail0/13 )/16 e.dyn/2 >/1
  // closed e.Name as range 5
  // closed e.Scanned0 as range 9
  // closed e.Tail0 as range 13
  // closed e.dyn as range 2
  //DEBUG: e.Name: 5
  //DEBUG: e.Scanned0: 9
  //DEBUG: e.Tail0: 13
  //DEBUG: e.dyn: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum$1=1@0/4 HalfReuse: [*]/7 } & HighLevelRASL-Function=1\1=1\1@0/17 (/18 Tile{ AsIs: e.Name/5 } )/19 Tile{ HalfReuse: {*}/8 AsIs: (/11 AsIs: e.Scanned0/9 AsIs: )/12 AsIs: (/15 AsIs: e.Tail0/13 AsIs: )/16 AsIs: e.dyn/2 AsIs: >/1 ]] }
  refalrts::alloc_name(vm, context[17], functions[efunc_gen_HighLevelRASLm_Function_A1L1A1L1Z0]);
  refalrts::alloc_open_bracket(vm, context[18]);
  refalrts::alloc_close_bracket(vm, context[19]);
  refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_S1A1Z0]);
  refalrts::reinit_closure_head(context[7]);
  refalrts::reinit_unwrapped_closure(context[8], context[7]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[18], context[19] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_elem( res, context[19] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[17], context[18] );
  refalrts::use( res );
  refalrts::wrap_closure( context[8] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoMapAccum_S1A1Z1("DoMapAccum$1=1@1", COOKIE1_, COOKIE2_, func_gen_DoMapAccum_S1A1Z1);


static refalrts::FnResult func_gen_DoMapAccum_S1A1Z2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 27 elems
  refalrts::Iter context[27];
  refalrts::zeros( context, 27 );
  // </0 & DoMapAccum$1=1@2/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & DoMapAccum$1=1@2/4 (/7 e.new1/5 )/8 (/11 e.new2/9 )/12 (/15 e.new3/13 )/16 e.new4/2 >/1
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
  // closed e.new1 as range 5
  // closed e.new2 as range 9
  // closed e.new3 as range 13
  // closed e.new4 as range 2
  do {
    // </0 & DoMapAccum$1=1@2/4 (/7 e.Name/17 )/8 (/11 e.Scanned0/19 )/12 (/15 e.Tail0/21 )/16 t.Acc$a/25 e.StepScanned/23 >/1
    context[17] = context[5];
    context[18] = context[6];
    context[19] = context[9];
    context[20] = context[10];
    context[21] = context[13];
    context[22] = context[14];
    context[23] = context[2];
    context[24] = context[3];
    // closed e.Name as range 17
    // closed e.Scanned0 as range 19
    // closed e.Tail0 as range 21
    context[26] = refalrts::tvar_left( context[25], context[23], context[24] );
    if( ! context[26] )
      continue;
    // closed e.StepScanned as range 23
    //DEBUG: e.Name: 17
    //DEBUG: e.Scanned0: 19
    //DEBUG: e.Tail0: 21
    //DEBUG: t.Acc$a: 25
    //DEBUG: e.StepScanned: 23

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} (/11 {REMOVED TILE} )/12 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum@2/4 AsIs: (/7 AsIs: e.Name/17 AsIs: )/8 } Tile{ AsIs: t.Acc$a/25 } Tile{ AsIs: (/15 } Tile{ AsIs: e.Scanned0/19 } Tile{ AsIs: e.StepScanned/23 } Tile{ AsIs: )/16 } Tile{ AsIs: e.Tail0/21 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_Z2]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[15], context[16] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[21], context[22] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_evar( res, context[23], context[24] );
    res = refalrts::splice_evar( res, context[19], context[20] );
    res = refalrts::splice_elem( res, context[15] );
    res = refalrts::splice_evar( res, context[25], context[26] );
    refalrts::splice_to_freelist_open( vm, context[8], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoMapAccum$1=1@2/4 (/7 e.Name/5 )/8 (/11 e.Scanned0/9 )/12 (/15 e.Tail0/13 )/16 e.dyn/2 >/1
  // closed e.Name as range 5
  // closed e.Scanned0 as range 9
  // closed e.Tail0 as range 13
  // closed e.dyn as range 2
  //DEBUG: e.Name: 5
  //DEBUG: e.Scanned0: 9
  //DEBUG: e.Tail0: 13
  //DEBUG: e.dyn: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum$1=1@0/4 HalfReuse: [*]/7 } & HighLevelRASL-Function=1\1@0/17 (/18 Tile{ AsIs: e.Name/5 } )/19 Tile{ HalfReuse: {*}/8 AsIs: (/11 AsIs: e.Scanned0/9 AsIs: )/12 AsIs: (/15 AsIs: e.Tail0/13 AsIs: )/16 AsIs: e.dyn/2 AsIs: >/1 ]] }
  refalrts::alloc_name(vm, context[17], functions[efunc_gen_HighLevelRASLm_Function_A1L1Z0]);
  refalrts::alloc_open_bracket(vm, context[18]);
  refalrts::alloc_close_bracket(vm, context[19]);
  refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_S1A1Z0]);
  refalrts::reinit_closure_head(context[7]);
  refalrts::reinit_unwrapped_closure(context[8], context[7]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[18], context[19] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_elem( res, context[19] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[17], context[18] );
  refalrts::use( res );
  refalrts::wrap_closure( context[8] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoMapAccum_S1A1Z2("DoMapAccum$1=1@2", COOKIE1_, COOKIE2_, func_gen_DoMapAccum_S1A1Z2);


//End of file
