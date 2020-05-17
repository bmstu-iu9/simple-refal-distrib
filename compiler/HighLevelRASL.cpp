// This file automatically generated from 'HighLevelRASL.ref'
// Don't edit! Edit 'HighLevelRASL.ref' and recompile it

#include "refalrts.h"

#define cookie_ns cookie_ns_1198552893_2009435645
#define COOKIE1_ 1198552893U
#define COOKIE2_ 2009435645U

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
  efunc_HighLevelRASLm_Function = 15,
  efunc_gen_Map_Z1 = 16,
  efunc_gen_Map_Z2 = 17,
  efunc_GenResultFuncs = 18,
  efunc_HighLevelRASLm_Functionm_Aux = 19,
  efunc_GenSentenceFunc = 20,
  efunc_gen_HighLevelRASLm_Function_A1L1A1L1A1 = 21,
  efunc_FixupName = 22,
  efunc_gen_HighLevelRASLm_Function_A1L1A1 = 23,
  efunc_gen_MapAccum_Z1 = 24,
  efunc_gen_MapAccum_Z2 = 25,
  efunc_gen_HighLevelRASLm_Function_A1 = 26,
  efunc_FixupNamem_Suf = 27,
  efunc_HighLevelRASLm_Functionm_Disjoint = 28,
  efunc_HighLevelRASLm_Functionm_Conjoint = 29,
  efunc_GenSubstm_Simple = 30,
  efunc_GenResultm_Simple = 31,
  efunc_GenSubstm_Save = 32,
  efunc_GenResultm_Opt = 33,
  efunc_Mu = 34,
  efunc_Up = 35,
  efunc_Evm_met = 36,
  efunc_Residue = 37,
  efunc_u_u_Metau_Residue = 38,
  efunc_MapAccum = 39,
  efunc_UnBracket = 40,
  efunc_DelAccumulator = 41,
  efunc_Inc = 42,
  efunc_Dec = 43,
  efunc_HighLevelRASL = 44,
  efunc_gen_HighLevelRASL_L1D8 = 45,
  efunc_gen_Map_Z0 = 46,
  efunc_gen_HighLevelRASL_L1 = 47,
  efunc_gen_HighLevelRASLm_Function_L1D1 = 48,
  efunc_gen_HighLevelRASLm_Function_L1 = 49,
  efunc_gen_DoMapAccum_Z1 = 50,
  efunc_gen_HighLevelRASLm_Function_A1L1A1L1 = 51,
  efunc_gen_MapAccum_Z0 = 52,
  efunc_gen_DoMapAccum_Z2 = 53,
  efunc_gen_HighLevelRASLm_Function_A1L1 = 54,
  efunc_gen_DoMapAccum_S1A1Z1 = 55,
  efunc_gen_HighLevelRASLm_Function_A1L1A1L1D1 = 56,
  efunc_gen_DoMapAccum_Z0 = 57,
  efunc_gen_DoMapAccum_S1A1Z2 = 58,
  efunc_gen_HighLevelRASLm_Function_A1L1D1 = 59,
  efunc_gen_DoMapAccum_S1A1Z0 = 60,
};


enum ident {
  ident_Function = 0,
  ident_Sentences = 1,
  ident_NativeBody = 2,
  ident_CmdNativeFunction = 3,
  ident_Metatable = 4,
  ident_CmdMetatable = 5,
  ident_Swap = 6,
  ident_CmdSwap = 7,
  ident_Declaration = 8,
  ident_CmdDeclaration = 9,
  ident_Ident = 10,
  ident_CmdDefineIdent = 11,
  ident_NativeBlock = 12,
  ident_CmdEmitNativeCode = 13,
  ident_Spec = 14,
  ident_CmdConditionFunc = 15,
  ident_GNm_Local = 16,
  ident_Condition = 17,
  ident_SUF = 18,
  ident_CmdEnum = 19,
  ident_Conjoint = 20,
  ident_Disjoint = 21,
  ident_NoOpt = 22,
  ident_OptResult = 23,
  ident_Mu = 24,
  ident_Up = 25,
  ident_Evm_met = 26,
  ident_Residue = 27,
  ident_u_u_Metau_Residue = 28,
  ident_Apply = 29,
  ident_Map = 30,
  ident_Reduce = 31,
  ident_Fetch = 32,
  ident_MapAccum = 33,
  ident_DoMapAccum = 34,
  ident_UnBracket = 35,
  ident_DelAccumulator = 36,
  ident_Inc = 37,
  ident_Dec = 38,
  ident_Pipe = 39,
  ident_HighLevelRASL = 40,
  ident_HighLevelRASLm_Function = 41,
  ident_FixupName = 42,
  ident_FixupNamem_Suf = 43,
  ident_HighLevelRASLm_Functionm_Aux = 44,
  ident_GenSentenceFunc = 45,
  ident_GenResultFuncs = 46,
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


static refalrts::FnResult func_gen_HighLevelRASL_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 28 elems
  refalrts::Iter context[28];
  refalrts::zeros( context, 28 );
  // </0 & HighLevelRASL\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & HighLevelRASL\1/4 s.new#1/9 s.new#2/10 (/7 s.new#3/11 e.new#4/5 )/8 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[11], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#4 as range 5
  do {
    // </0 & HighLevelRASL\1/4 s.new#5/9 s.new#6/10 (/7 s.new#7/11 s.new#8/14 e.new#9/12 )/8 >/1
    context[12] = context[5];
    context[13] = context[6];
    if( ! refalrts::svar_left( context[14], context[12], context[13] ) )
      continue;
    // closed e.new#9 as range 12
    do {
      // </0 & HighLevelRASL\1/4 s.new#10/9 s.new#11/10 (/7 # Function/11 s.new#12/14 (/19 e.new#13/17 )/20 s.new#14/21 e.new#15/15 )/8 >/1
      context[15] = context[12];
      context[16] = context[13];
      if( ! refalrts::ident_term( identifiers[ident_Function], context[11] ) )
        continue;
      context[17] = 0;
      context[18] = 0;
      context[19] = refalrts::brackets_left( context[17], context[18], context[15], context[16] );
      if( ! context[19] )
        continue;
      refalrts::bracket_pointers(context[19], context[20]);
      // closed e.new#13 as range 17
      if( ! refalrts::svar_left( context[21], context[15], context[16] ) )
        continue;
      // closed e.new#15 as range 15
      do {
        // </0 & HighLevelRASL\1/4 s.Joint#1/9 s.OptResult#1/10 (/7 # Function/11 s.ScopeClass#2/14 (/19 e.Name#2/22 )/20 # Sentences/21 e.Sentences#2/24 )/8 >/1
        context[22] = context[17];
        context[23] = context[18];
        context[24] = context[15];
        context[25] = context[16];
        if( ! refalrts::ident_term( identifiers[ident_Sentences], context[21] ) )
          continue;
        // closed e.Name#2 as range 22
        // closed e.Sentences#2 as range 24
        //DEBUG: s.Joint#1: 9
        //DEBUG: s.OptResult#1: 10
        //DEBUG: s.ScopeClass#2: 14
        //DEBUG: e.Name#2: 22
        //DEBUG: e.Sentences#2: 24

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} s.ScopeClass#2/14 (/19 {REMOVED TILE} )/20 # Sentences/21 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & HighLevelRASL-Function/4 AsIs: s.Joint#1/9 AsIs: s.OptResult#1/10 HalfReuse: s.ScopeClass2 #14/7 HalfReuse: (/11 } Tile{ AsIs: e.Name#2/22 } Tile{ AsIs: )/8 } Tile{ AsIs: e.Sentences#2/24 } Tile{ AsIs: >/1 ]] }
        refalrts::update_name(context[4], functions[efunc_HighLevelRASLm_Function]);
        refalrts::reinit_svar( context[7], context[14] );
        refalrts::reinit_open_bracket(context[11]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[11], context[8] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[24], context[25] );
        res = refalrts::splice_evar( res, context[8], context[8] );
        res = refalrts::splice_evar( res, context[22], context[23] );
        refalrts::splice_to_freelist_open( vm, context[11], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & HighLevelRASL\1/4 s.Joint#1/9 s.OptResult#1/10 (/7 # Function/11 s.ScopeClass#2/14 (/19 e.Name#2/22 )/20 # NativeBody/21 t.SrcPos#2/26 e.Code#2/24 )/8 >/1
        context[22] = context[17];
        context[23] = context[18];
        context[24] = context[15];
        context[25] = context[16];
        if( ! refalrts::ident_term( identifiers[ident_NativeBody], context[21] ) )
          continue;
        // closed e.Name#2 as range 22
        context[27] = refalrts::tvar_left( context[26], context[24], context[25] );
        if( ! context[27] )
          continue;
        // closed e.Code#2 as range 24
        //DEBUG: s.Joint#1: 9
        //DEBUG: s.OptResult#1: 10
        //DEBUG: s.ScopeClass#2: 14
        //DEBUG: e.Name#2: 22
        //DEBUG: t.SrcPos#2: 26
        //DEBUG: e.Code#2: 24

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 & HighLevelRASL\1/4 s.Joint#1/9 s.OptResult#1/10 {REMOVED TILE} # NativeBody/21 {REMOVED TILE} >/1 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ AsIs: (/7 Reuse: # CmdNativeFunction/11 AsIs: s.ScopeClass#2/14 AsIs: (/19 AsIs: e.Name#2/22 AsIs: )/20 } Tile{ AsIs: t.SrcPos#2/26 AsIs: e.Code#2/24 AsIs: )/8 } Tile{ ]] }
        refalrts::update_ident(context[11], identifiers[ident_CmdNativeFunction]);
        refalrts::link_brackets( context[7], context[8] );
        refalrts::link_brackets( context[19], context[20] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[26], context[8] );
        res = refalrts::splice_evar( res, context[7], context[20] );
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & HighLevelRASL\1/4 s.Joint#1/9 s.OptResult#1/10 (/7 # Function/11 s.ScopeClass#2/14 (/19 e.Name#2/22 )/20 # Metatable/21 e.Metatable#2/24 )/8 >/1
      context[22] = context[17];
      context[23] = context[18];
      context[24] = context[15];
      context[25] = context[16];
      if( ! refalrts::ident_term( identifiers[ident_Metatable], context[21] ) )
        continue;
      // closed e.Name#2 as range 22
      // closed e.Metatable#2 as range 24
      //DEBUG: s.Joint#1: 9
      //DEBUG: s.OptResult#1: 10
      //DEBUG: s.ScopeClass#2: 14
      //DEBUG: e.Name#2: 22
      //DEBUG: e.Metatable#2: 24

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & HighLevelRASL\1/4 s.Joint#1/9 s.OptResult#1/10 {REMOVED TILE} # Metatable/21 {REMOVED TILE} )/8 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 Reuse: # CmdMetatable/11 AsIs: s.ScopeClass#2/14 AsIs: (/19 AsIs: e.Name#2/22 AsIs: )/20 } Tile{ AsIs: e.Metatable#2/24 } Tile{ HalfReuse: )/1 ]] }
      refalrts::update_ident(context[11], identifiers[ident_CmdMetatable]);
      refalrts::reinit_close_bracket(context[1]);
      refalrts::link_brackets( context[7], context[1] );
      refalrts::link_brackets( context[19], context[20] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[24], context[25] );
      res = refalrts::splice_evar( res, context[7], context[20] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & HighLevelRASL\1/4 s.Joint#1/9 s.OptResult#1/10 (/7 # Swap/11 s.ScopeClass#2/14 e.Name#2/15 )/8 >/1
      context[15] = context[12];
      context[16] = context[13];
      if( ! refalrts::ident_term( identifiers[ident_Swap], context[11] ) )
        continue;
      // closed e.Name#2 as range 15
      //DEBUG: s.Joint#1: 9
      //DEBUG: s.OptResult#1: 10
      //DEBUG: s.ScopeClass#2: 14
      //DEBUG: e.Name#2: 15

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & HighLevelRASL\1/4 s.Joint#1/9 s.OptResult#1/10 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 Reuse: # CmdSwap/11 AsIs: s.ScopeClass#2/14 AsIs: e.Name#2/15 AsIs: )/8 } Tile{ ]] }
      refalrts::update_ident(context[11], identifiers[ident_CmdSwap]);
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[7], context[8] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & HighLevelRASL\1/4 s.Joint#1/9 s.OptResult#1/10 (/7 # Declaration/11 s.ScopeClass#2/14 e.Name#2/15 )/8 >/1
    context[15] = context[12];
    context[16] = context[13];
    if( ! refalrts::ident_term( identifiers[ident_Declaration], context[11] ) )
      continue;
    // closed e.Name#2 as range 15
    //DEBUG: s.Joint#1: 9
    //DEBUG: s.OptResult#1: 10
    //DEBUG: s.ScopeClass#2: 14
    //DEBUG: e.Name#2: 15

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & HighLevelRASL\1/4 s.Joint#1/9 s.OptResult#1/10 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 Reuse: # CmdDeclaration/11 AsIs: s.ScopeClass#2/14 AsIs: e.Name#2/15 AsIs: )/8 } Tile{ ]] }
    refalrts::update_ident(context[11], identifiers[ident_CmdDeclaration]);
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
    // </0 & HighLevelRASL\1/4 s.Joint#1/9 s.OptResult#1/10 (/7 # Ident/11 e.Name#2/12 )/8 >/1
    context[12] = context[5];
    context[13] = context[6];
    if( ! refalrts::ident_term( identifiers[ident_Ident], context[11] ) )
      continue;
    // closed e.Name#2 as range 12
    //DEBUG: s.Joint#1: 9
    //DEBUG: s.OptResult#1: 10
    //DEBUG: e.Name#2: 12

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & HighLevelRASL\1/4 s.Joint#1/9 s.OptResult#1/10 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 Reuse: # CmdDefineIdent/11 AsIs: e.Name#2/12 AsIs: )/8 } Tile{ ]] }
    refalrts::update_ident(context[11], identifiers[ident_CmdDefineIdent]);
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[7], context[8] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & HighLevelRASL\1/4 s.new#5/9 s.new#6/10 (/7 s.new#7/11 t.new#8/12 e.new#9/5 )/8 >/1
  context[13] = refalrts::tvar_left( context[12], context[5], context[6] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#9 as range 5
  do {
    // </0 & HighLevelRASL\1/4 s.Joint#1/9 s.OptResult#1/10 (/7 # NativeBlock/11 t.SrcPos#2/12 e.Code#2/14 )/8 >/1
    context[14] = context[5];
    context[15] = context[6];
    if( ! refalrts::ident_term( identifiers[ident_NativeBlock], context[11] ) )
      continue;
    // closed e.Code#2 as range 14
    //DEBUG: t.SrcPos#2: 12
    //DEBUG: s.Joint#1: 9
    //DEBUG: s.OptResult#1: 10
    //DEBUG: e.Code#2: 14

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & HighLevelRASL\1/4 s.Joint#1/9 s.OptResult#1/10 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 Reuse: # CmdEmitNativeCode/11 AsIs: t.SrcPos#2/12 AsIs: e.Code#2/14 AsIs: )/8 } Tile{ ]] }
    refalrts::update_ident(context[11], identifiers[ident_CmdEmitNativeCode]);
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[7], context[8] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & HighLevelRASL\1/4 s.Joint#1/9 s.OptResult#1/10 (/7 # Spec/11 t.Name#2/12 e.Pattern#2/5 )/8 >/1
  if( ! refalrts::ident_term( identifiers[ident_Spec], context[11] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Pattern#2 as range 5
  //DEBUG: t.Name#2: 12
  //DEBUG: s.Joint#1: 9
  //DEBUG: s.OptResult#1: 10
  //DEBUG: e.Pattern#2: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & HighLevelRASL\1/4 s.Joint#1/9 s.OptResult#1/10 (/7 # Spec/11 t.Name#2/12 e.Pattern#2/5 )/8 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_HighLevelRASL_L1("HighLevelRASL\\1", COOKIE1_, COOKIE2_, func_gen_HighLevelRASL_L1);


static refalrts::FnResult func_HighLevelRASL(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 7 elems
  refalrts::Iter context[7];
  refalrts::zeros( context, 7 );
  // </0 & HighLevelRASL/4 s.Joint#1/5 s.OptResult#1/6 e.ProgramElements#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.ProgramElements#1 as range 2
  //DEBUG: s.Joint#1: 5
  //DEBUG: s.OptResult#1: 6
  //DEBUG: e.ProgramElements#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map@1/4 AsIs: s.Joint#1/5 AsIs: s.OptResult#1/6 AsIs: e.ProgramElements#1/2 AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_gen_Map_Z1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_HighLevelRASL("HighLevelRASL", 0U, 0U, func_HighLevelRASL);


static refalrts::FnResult func_gen_HighLevelRASLm_Function_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  // </0 & HighLevelRASL-Function\1/4 (/7 e.CondName#3/5 )/8 >/1
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
  // closed e.CondName#3 as range 5
  //DEBUG: e.CondName#3: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # CmdConditionFunc/4 HalfReuse: # GN-Local/7 AsIs: e.CondName#3/5 AsIs: )/8 } Tile{ ]] }
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_ident(context[4], identifiers[ident_CmdConditionFunc]);
  refalrts::reinit_ident(context[7], identifiers[ident_GNm_Local]);
  refalrts::link_brackets( context[0], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, context[8], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_HighLevelRASLm_Function_L1("HighLevelRASL-Function\\1", COOKIE1_, COOKIE2_, func_gen_HighLevelRASLm_Function_L1);


static refalrts::FnResult func_gen_HighLevelRASLm_Function_A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 23 elems
  refalrts::Iter context[23];
  refalrts::zeros( context, 23 );
  // </0 & HighLevelRASL-Function=1/4 s.Joint#1/5 s.OptResult#1/6 s.ScopeClass#1/7 (/10 e.Name#1/8 )/11 (/14 e.CondNames#2/12 )/15 e.Sentences#2/2 >/1
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
  context[12] = 0;
  context[13] = 0;
  context[14] = refalrts::brackets_left( context[12], context[13], context[2], context[3] );
  if( ! context[14] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[14], context[15]);
  // closed e.Name#1 as range 8
  // closed e.CondNames#2 as range 12
  // closed e.Sentences#2 as range 2
  //DEBUG: s.Joint#1: 5
  //DEBUG: s.OptResult#1: 6
  //DEBUG: s.ScopeClass#1: 7
  //DEBUG: e.Name#1: 8
  //DEBUG: e.CondNames#2: 12
  //DEBUG: e.Sentences#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </16 & Map@2/17 Tile{ AsIs: e.CondNames#2/12 } >/18 Tile{ HalfReuse: </11 HalfReuse: & HighLevelRASL-Function-Aux/14 } Tile{ AsIs: </0 Reuse: & GenSentenceFunc/4 AsIs: s.Joint#1/5 } >/19 </20 & GenResultFuncs/21 Tile{ AsIs: s.OptResult#1/6 } >/22 Tile{ AsIs: s.ScopeClass#1/7 AsIs: (/10 } Tile{ AsIs: e.Name#1/8 } Tile{ AsIs: )/15 AsIs: e.Sentences#2/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[16]);
  refalrts::alloc_name(vm, context[17], functions[efunc_gen_Map_Z2]);
  refalrts::alloc_close_call(vm, context[18]);
  refalrts::alloc_close_call(vm, context[19]);
  refalrts::alloc_open_call(vm, context[20]);
  refalrts::alloc_name(vm, context[21], functions[efunc_GenResultFuncs]);
  refalrts::alloc_close_call(vm, context[22]);
  refalrts::reinit_open_call(context[11]);
  refalrts::reinit_name(context[14], functions[efunc_HighLevelRASLm_Functionm_Aux]);
  refalrts::update_name(context[4], functions[efunc_GenSentenceFunc]);
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
  res = refalrts::splice_evar( res, context[22], context[22] );
  res = refalrts::splice_evar( res, context[6], context[6] );
  res = refalrts::splice_evar( res, context[19], context[21] );
  res = refalrts::splice_evar( res, context[0], context[5] );
  res = refalrts::splice_evar( res, context[11], context[14] );
  res = refalrts::splice_evar( res, context[18], context[18] );
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
  // </0 & HighLevelRASL-Function=1\1=1/4 (/7 e.CondNames#2/5 )/8 (/11 e.Pattern#2/9 )/12 (/15 e.Result#2/13 )/16 (/19 e.SentenceCondNames#3/17 )/20 e.Conditions#3/2 >/1
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
  // closed e.CondNames#2 as range 5
  // closed e.Pattern#2 as range 9
  // closed e.Result#2 as range 13
  // closed e.SentenceCondNames#3 as range 17
  // closed e.Conditions#3 as range 2
  //DEBUG: e.CondNames#2: 5
  //DEBUG: e.Pattern#2: 9
  //DEBUG: e.Result#2: 13
  //DEBUG: e.SentenceCondNames#3: 17
  //DEBUG: e.Conditions#3: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} & HighLevelRASL-Function=1\1=1/4 (/7 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.CondNames#2/5 } Tile{ AsIs: e.SentenceCondNames#3/17 } Tile{ AsIs: )/20 } Tile{ HalfReuse: (/8 AsIs: (/11 AsIs: e.Pattern#2/9 AsIs: )/12 } Tile{ AsIs: e.Conditions#3/2 } Tile{ AsIs: (/15 AsIs: e.Result#2/13 AsIs: )/16 HalfReuse: )/19 } Tile{ ]] }
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
  res = refalrts::splice_evar( res, context[20], context[20] );
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
  // </0 & HighLevelRASL-Function=1\1=1\1=1/4 (/7 e.CondNames#3/5 )/8 (/11 e.Result#3/9 )/12 (/15 e.Pattern#3/13 )/16 e.CondName#4/2 >/1
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
  // closed e.CondNames#3 as range 5
  // closed e.Result#3 as range 9
  // closed e.Pattern#3 as range 13
  // closed e.CondName#4 as range 2
  //DEBUG: e.CondNames#3: 5
  //DEBUG: e.Result#3: 9
  //DEBUG: e.Pattern#3: 13
  //DEBUG: e.CondName#4: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } (/17 Tile{ AsIs: e.CondNames#3/5 } (/18 Tile{ AsIs: e.CondName#4/2 } Tile{ HalfReuse: )/0 HalfReuse: )/4 AsIs: (/7 } # Condition/19 (/20 e.CondName#4/2/21 Tile{ AsIs: )/8 AsIs: (/11 AsIs: e.Result#3/9 AsIs: )/12 AsIs: (/15 AsIs: e.Pattern#3/13 AsIs: )/16 } Tile{ HalfReuse: )/1 ]] }
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
  res = refalrts::splice_evar( res, context[18], context[18] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[17], context[17] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_HighLevelRASLm_Function_A1L1A1L1A1("HighLevelRASL-Function=1\\1=1\\1=1", COOKIE1_, COOKIE2_, func_gen_HighLevelRASLm_Function_A1L1A1L1A1);


static refalrts::FnResult func_gen_HighLevelRASLm_Function_A1L1A1L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 30 elems
  refalrts::Iter context[30];
  refalrts::zeros( context, 30 );
  // </0 & HighLevelRASL-Function=1\1=1\1/4 (/7 e.Name#1/5 )/8 (/11 e.CondNames#3/9 )/12 (/15 # Condition/17 (/20 e.CondName#3/18 )/21 (/24 e.Result#3/22 )/25 (/28 e.Pattern#3/26 )/29 )/16 >/1
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
  context[17] = refalrts::ident_left( identifiers[ident_Condition], context[13], context[14] );
  if( ! context[17] )
    return refalrts::cRecognitionImpossible;
  context[18] = 0;
  context[19] = 0;
  context[20] = refalrts::brackets_left( context[18], context[19], context[13], context[14] );
  if( ! context[20] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[20], context[21]);
  context[22] = 0;
  context[23] = 0;
  context[24] = refalrts::brackets_left( context[22], context[23], context[13], context[14] );
  if( ! context[24] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[24], context[25]);
  context[26] = 0;
  context[27] = 0;
  context[28] = refalrts::brackets_left( context[26], context[27], context[13], context[14] );
  if( ! context[28] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[28], context[29]);
  if( ! refalrts::empty_seq( context[13], context[14] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Name#1 as range 5
  // closed e.CondNames#3 as range 9
  // closed e.CondName#3 as range 18
  // closed e.Result#3 as range 22
  // closed e.Pattern#3 as range 26
  //DEBUG: e.Name#1: 5
  //DEBUG: e.CondNames#3: 9
  //DEBUG: e.CondName#3: 18
  //DEBUG: e.Result#3: 22
  //DEBUG: e.Pattern#3: 26

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} )/8 (/11 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & HighLevelRASL-Function=1\1=1\1=1/4 AsIs: (/7 } Tile{ AsIs: e.CondNames#3/9 } Tile{ AsIs: )/21 AsIs: (/24 AsIs: e.Result#3/22 AsIs: )/25 AsIs: (/28 AsIs: e.Pattern#3/26 AsIs: )/29 HalfReuse: </16 HalfReuse: & FixupName/1 } Tile{ AsIs: (/20 } Tile{ AsIs: e.Name#1/5 } Tile{ AsIs: )/12 } Tile{ AsIs: e.CondName#3/18 } Tile{ HalfReuse: >/15 HalfReuse: >/17 } Tile{ ]] }
  refalrts::update_name(context[4], functions[efunc_gen_HighLevelRASLm_Function_A1L1A1L1A1]);
  refalrts::reinit_open_call(context[16]);
  refalrts::reinit_name(context[1], functions[efunc_FixupName]);
  refalrts::reinit_close_call(context[15]);
  refalrts::reinit_close_call(context[17]);
  refalrts::push_stack( vm, context[17] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[15] );
  refalrts::push_stack( vm, context[16] );
  refalrts::link_brackets( context[20], context[12] );
  refalrts::link_brackets( context[28], context[29] );
  refalrts::link_brackets( context[24], context[25] );
  refalrts::link_brackets( context[7], context[21] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[15], context[17] );
  res = refalrts::splice_evar( res, context[18], context[19] );
  res = refalrts::splice_evar( res, context[12], context[12] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[20], context[20] );
  res = refalrts::splice_evar( res, context[21], context[1] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::splice_to_freelist_open( vm, context[7], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_HighLevelRASLm_Function_A1L1A1L1("HighLevelRASL-Function=1\\1=1\\1", COOKIE1_, COOKIE2_, func_gen_HighLevelRASLm_Function_A1L1A1L1);


static refalrts::FnResult func_gen_HighLevelRASLm_Function_A1L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 28 elems
  refalrts::Iter context[28];
  refalrts::zeros( context, 28 );
  // </0 & HighLevelRASL-Function=1\1/4 (/7 e.Name#1/5 )/8 (/11 e.CondNames#2/9 )/12 (/15 (/19 e.Pattern#2/17 )/20 e.Conditions#2/13 (/23 e.Result#2/21 )/24 )/16 >/1
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
  context[19] = refalrts::brackets_left( context[17], context[18], context[13], context[14] );
  if( ! context[19] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[19], context[20]);
  context[21] = 0;
  context[22] = 0;
  context[23] = refalrts::brackets_right( context[21], context[22], context[13], context[14] );
  if( ! context[23] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[23], context[24]);
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Name#1 as range 5
  // closed e.CondNames#2 as range 9
  // closed e.Pattern#2 as range 17
  // closed e.Conditions#2 as range 13
  // closed e.Result#2 as range 21
  //DEBUG: e.Name#1: 5
  //DEBUG: e.CondNames#2: 9
  //DEBUG: e.Pattern#2: 17
  //DEBUG: e.Conditions#2: 13
  //DEBUG: e.Result#2: 21

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </25 & HighLevelRASL-Function=1\1=1/26 (/27 Tile{ AsIs: e.CondNames#2/9 } Tile{ HalfReuse: )/15 AsIs: (/19 AsIs: e.Pattern#2/17 AsIs: )/20 } Tile{ AsIs: (/23 AsIs: e.Result#2/21 AsIs: )/24 } Tile{ AsIs: </0 Reuse: & MapAccum@1/4 AsIs: (/7 AsIs: e.Name#1/5 AsIs: )/8 AsIs: (/11 } Tile{ AsIs: )/12 } Tile{ AsIs: e.Conditions#2/13 } Tile{ HalfReuse: >/16 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[25]);
  refalrts::alloc_name(vm, context[26], functions[efunc_gen_HighLevelRASLm_Function_A1L1A1]);
  refalrts::alloc_open_bracket(vm, context[27]);
  refalrts::reinit_close_bracket(context[15]);
  refalrts::update_name(context[4], functions[efunc_gen_MapAccum_Z1]);
  refalrts::reinit_close_call(context[16]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[25] );
  refalrts::push_stack( vm, context[16] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[23], context[24] );
  refalrts::link_brackets( context[19], context[20] );
  refalrts::link_brackets( context[27], context[15] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[16];
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[12], context[12] );
  res = refalrts::splice_evar( res, context[0], context[11] );
  res = refalrts::splice_evar( res, context[23], context[24] );
  res = refalrts::splice_evar( res, context[15], context[20] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[25], context[27] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_HighLevelRASLm_Function_A1L1("HighLevelRASL-Function=1\\1", COOKIE1_, COOKIE2_, func_gen_HighLevelRASLm_Function_A1L1);


static refalrts::FnResult func_HighLevelRASLm_Function(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
  // </0 & HighLevelRASL-Function/4 s.Joint#1/5 s.OptResult#1/6 s.ScopeClass#1/7 (/10 e.Name#1/8 )/11 e.Sentences#1/2 >/1
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
  //DEBUG: s.Joint#1: 5
  //DEBUG: s.OptResult#1: 6
  //DEBUG: s.ScopeClass#1: 7
  //DEBUG: e.Name#1: 8
  //DEBUG: e.Sentences#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & HighLevelRASL-Function=1/4 AsIs: s.Joint#1/5 AsIs: s.OptResult#1/6 AsIs: s.ScopeClass#1/7 AsIs: (/10 AsIs: e.Name#1/8 AsIs: )/11 } </12 & MapAccum@2/13 (/14 e.Name#1/8/15 )/17 (/18 )/19 Tile{ AsIs: e.Sentences#1/2 } >/20 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[12]);
  refalrts::alloc_name(vm, context[13], functions[efunc_gen_MapAccum_Z2]);
  refalrts::alloc_open_bracket(vm, context[14]);
  refalrts::copy_evar(vm, context[15], context[16], context[8], context[9]);
  refalrts::alloc_close_bracket(vm, context[17]);
  refalrts::alloc_open_bracket(vm, context[18]);
  refalrts::alloc_close_bracket(vm, context[19]);
  refalrts::alloc_close_call(vm, context[20]);
  refalrts::update_name(context[4], functions[efunc_gen_HighLevelRASLm_Function_A1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[20] );
  refalrts::push_stack( vm, context[12] );
  refalrts::link_brackets( context[18], context[19] );
  refalrts::link_brackets( context[14], context[17] );
  refalrts::link_brackets( context[10], context[11] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[20], context[20] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[12], context[19] );
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
  // </0 & FixupName/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & FixupName/4 (/7 e.new#1/5 )/8 e.new#2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  // closed e.new#2 as range 2
  do {
    // </0 & FixupName/4 (/7 e.Name#1/13 # SUF/19 e.Suf#1/15 )/8 e.Name#1/20 # SUF/22 e.CondSuf#1/17 >/1
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
      // closed e.Suf#1 as range 15
      // closed e.CondSuf#1 as range 17
      //DEBUG: e.Name#1: 13
      //DEBUG: e.Suf#1: 15
      //DEBUG: e.CondSuf#1: 17

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} e.Name#1/13 {REMOVED TILE} {REMOVED TILE} )/8 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: e.Name#1/20 } Tile{ AsIs: # SUF/19 } Tile{ AsIs: </0 Reuse: & FixupName-Suf/4 AsIs: (/7 } Tile{ AsIs: e.Suf#1/15 } Tile{ HalfReuse: )/22 AsIs: e.CondSuf#1/17 AsIs: >/1 ]] }
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
      res = refalrts::splice_evar( res, context[19], context[19] );
      res = refalrts::splice_evar( res, context[20], context[21] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[13], context[14], context[9], context[10] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & FixupName/4 (/7 e.Name#1/5 )/8 e.Name#1/9 # SUF/11 e.CondSuf#1/2 >/1
  // closed e.Name#1 as range 5
  if( ! refalrts::repeated_evar_left( vm, context[9], context[10], context[5], context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[11] = refalrts::ident_left( identifiers[ident_SUF], context[2], context[3] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  // closed e.CondSuf#1 as range 2
  //DEBUG: e.Name#1: 5
  //DEBUG: e.CondSuf#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & FixupName/4 (/7 e.Name#1/5 )/8 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Name#1/9 } Tile{ AsIs: # SUF/11 } Tile{ AsIs: e.CondSuf#1/2 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[11], context[11] );
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
  // </0 & FixupName-Suf/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & FixupName-Suf/4 (/7 e.new#1/5 )/8 e.new#2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  // closed e.new#2 as range 2
  do {
    // </0 & FixupName-Suf/4 (/7 s.Tag#1/13 s.Num#1/15 e.Suf#1/9 )/8 s.Tag#1/14 s.Num#1/16 e.CondSuf#1/11 >/1
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
    // closed e.Suf#1 as range 9
    // closed e.CondSuf#1 as range 11
    //DEBUG: s.Tag#1: 13
    //DEBUG: s.Num#1: 15
    //DEBUG: e.Suf#1: 9
    //DEBUG: e.CondSuf#1: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Tag#1/14 s.Num#1/16 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: s.Tag#1/13 AsIs: s.Num#1/15 } Tile{ AsIs: </0 AsIs: & FixupName-Suf/4 AsIs: (/7 } Tile{ AsIs: e.Suf#1/9 } Tile{ AsIs: )/8 } Tile{ AsIs: e.CondSuf#1/11 } Tile{ AsIs: >/1 ]] }
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[8], context[8] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[0], context[7] );
    res = refalrts::splice_evar( res, context[13], context[15] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & FixupName-Suf/4 (/7 e.Suf#1/5 )/8 e.CondSuf#1/2 >/1
  // closed e.Suf#1 as range 5
  // closed e.CondSuf#1 as range 2
  //DEBUG: e.Suf#1: 5
  //DEBUG: e.CondSuf#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & FixupName-Suf/4 (/7 {REMOVED TILE} )/8 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Suf#1/5 } Tile{ AsIs: e.CondSuf#1/2 } Tile{ ]] }
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
  // </0 & HighLevelRASL-Function-Aux/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & HighLevelRASL-Function-Aux/4 s.new#1/5 s.new#2/6 s.new#3/7 s.new#4/8 (/11 e.new#5/9 )/12 e.new#6/2 >/1
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
  // closed e.new#5 as range 9
  // closed e.new#6 as range 2
  do {
    // </0 & HighLevelRASL-Function-Aux/4 s.FnGenFunction#1/5 s.FnGenSubst#1/6 s.FnGenResult#1/7 s.ScopeClass#1/8 (/11 e.Name#1/13 )/12 >/1
    context[13] = context[9];
    context[14] = context[10];
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Name#1 as range 13
    //DEBUG: s.FnGenFunction#1: 5
    //DEBUG: s.FnGenSubst#1: 6
    //DEBUG: s.FnGenResult#1: 7
    //DEBUG: s.ScopeClass#1: 8
    //DEBUG: e.Name#1: 13

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} s.FnGenFunction#1/5 s.FnGenSubst#1/6 s.FnGenResult#1/7 s.ScopeClass#1/8 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # CmdEnum/4 } Tile{ HalfReuse: s.ScopeClass1 #8/11 AsIs: e.Name#1/13 AsIs: )/12 } Tile{ ]] }
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
    // </0 & HighLevelRASL-Function-Aux/4 s.FnGenFunction#1/5 s.FnGenSubst#1/6 s.FnGenResult#1/7 s.ScopeClass#1/8 (/11 e.Name#1/13 )/12 t.OneSentence#1/17 >/1
    context[13] = context[9];
    context[14] = context[10];
    context[15] = context[2];
    context[16] = context[3];
    // closed e.Name#1 as range 13
    context[18] = refalrts::tvar_left( context[17], context[15], context[16] );
    if( ! context[18] )
      continue;
    if( ! refalrts::empty_seq( context[15], context[16] ) )
      continue;
    //DEBUG: s.FnGenFunction#1: 5
    //DEBUG: s.FnGenSubst#1: 6
    //DEBUG: s.FnGenResult#1: 7
    //DEBUG: s.ScopeClass#1: 8
    //DEBUG: e.Name#1: 13
    //DEBUG: t.OneSentence#1: 17

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} s.FnGenFunction#1/5 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & HighLevelRASL-Function-Disjoint/4 } Tile{ AsIs: s.FnGenSubst#1/6 AsIs: s.FnGenResult#1/7 AsIs: s.ScopeClass#1/8 AsIs: (/11 AsIs: e.Name#1/13 AsIs: )/12 AsIs: t.OneSentence#1/17 AsIs: >/1 ]] }
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

  // </0 & HighLevelRASL-Function-Aux/4 s.FnGenFunction#1/5 s.FnGenSubst#1/6 s.FnGenResult#1/7 s.ScopeClass#1/8 (/11 e.Name#1/9 )/12 e.Sentences#1/2 >/1
  // closed e.Name#1 as range 9
  // closed e.Sentences#1 as range 2
  //DEBUG: s.FnGenFunction#1: 5
  //DEBUG: s.FnGenSubst#1: 6
  //DEBUG: s.FnGenResult#1: 7
  //DEBUG: s.ScopeClass#1: 8
  //DEBUG: e.Name#1: 9
  //DEBUG: e.Sentences#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: </4 AsIs: s.FnGenFunction#1/5 AsIs: s.FnGenSubst#1/6 AsIs: s.FnGenResult#1/7 AsIs: s.ScopeClass#1/8 AsIs: (/11 AsIs: e.Name#1/9 AsIs: )/12 AsIs: e.Sentences#1/2 AsIs: >/1 ]] }
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
  // </0 & GenSentenceFunc/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & GenSentenceFunc/4 s.new#1/5 >/1
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
  // </0 & GenResultFuncs/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & GenResultFuncs/4 s.new#1/5 >/1
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


static refalrts::FnResult func_gen_Map_Z1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 38 elems
  refalrts::Iter context[38];
  refalrts::zeros( context, 38 );
  // </0 & Map@1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Map@1/4 s.new#1/5 s.new#2/6 e.new#3/2 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#3 as range 2
  do {
    // </0 & Map@1/4 s.new#4/5 s.new#5/6 t.new#6/9 e.new#7/7 >/1
    context[7] = context[2];
    context[8] = context[3];
    context[10] = refalrts::tvar_left( context[9], context[7], context[8] );
    if( ! context[10] )
      continue;
    // closed e.new#7 as range 7
    do {
      // </0 & Map@1/4 s.new#8/5 s.new#9/6 (/9 s.new#10/15 e.new#11/13 )/10 e.new#12/11 >/1
      context[11] = context[7];
      context[12] = context[8];
      context[13] = 0;
      context[14] = 0;
      if( ! refalrts::brackets_term( context[13], context[14], context[9] ) )
        continue;
      // closed e.new#12 as range 11
      if( ! refalrts::svar_left( context[15], context[13], context[14] ) )
        continue;
      // closed e.new#11 as range 13
      do {
        // </0 & Map@1/4 s.new#13/5 s.new#14/6 (/9 s.new#15/15 s.new#16/20 e.new#17/16 )/10 e.new#18/18 >/1
        context[16] = context[13];
        context[17] = context[14];
        context[18] = context[11];
        context[19] = context[12];
        // closed e.new#18 as range 18
        if( ! refalrts::svar_left( context[20], context[16], context[17] ) )
          continue;
        // closed e.new#17 as range 16
        do {
          // </0 & Map@1/4 s.new#19/5 s.new#20/6 (/9 # Function/15 s.new#21/20 (/27 e.new#22/25 )/28 s.new#23/29 e.new#24/21 )/10 e.new#25/23 >/1
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
          // closed e.new#22 as range 25
          // closed e.new#25 as range 23
          if( ! refalrts::svar_left( context[29], context[21], context[22] ) )
            continue;
          // closed e.new#24 as range 21
          do {
            // </0 & Map@1/4 s.Joint#1/5 s.OptResult#1/6 (/9 # Function/15 s.ScopeClass#2/20 (/27 e.3#0/30 )/28 # Sentences/29 e.4#0/32 )/10 e.Tail#1/34 >/1
            context[30] = context[25];
            context[31] = context[26];
            context[32] = context[21];
            context[33] = context[22];
            context[34] = context[23];
            context[35] = context[24];
            if( ! refalrts::ident_term( identifiers[ident_Sentences], context[29] ) )
              continue;
            // closed e.3#0 as range 30
            // closed e.4#0 as range 32
            // closed e.Tail#1 as range 34
            //DEBUG: s.Joint#1: 5
            //DEBUG: s.OptResult#1: 6
            //DEBUG: s.ScopeClass#2: 20
            //DEBUG: e.3#0: 30
            //DEBUG: e.4#0: 32
            //DEBUG: e.Tail#1: 34

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} s.ScopeClass#2/20 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
            //RESULT: Tile{ [[ AsIs: </0 Reuse: & HighLevelRASL-Function/4 AsIs: s.Joint#1/5 AsIs: s.OptResult#1/6 HalfReuse: s.ScopeClass2 #20/9 HalfReuse: (/15 } Tile{ AsIs: e.3#0/30 } Tile{ AsIs: )/28 } Tile{ AsIs: e.4#0/32 } Tile{ HalfReuse: >/27 } Tile{ HalfReuse: </29 } & Map@1/36 s.Joint#1/5/37 Tile{ HalfReuse: s.OptResult1 #6/10 AsIs: e.Tail#1/34 AsIs: >/1 ]] }
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
            res = refalrts::splice_evar( res, context[29], context[29] );
            res = refalrts::splice_evar( res, context[27], context[27] );
            res = refalrts::splice_evar( res, context[32], context[33] );
            res = refalrts::splice_evar( res, context[28], context[28] );
            res = refalrts::splice_evar( res, context[30], context[31] );
            refalrts::splice_to_freelist_open( vm, context[15], res );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          do {
            // </0 & Map@1/4 s.Joint#1/5 s.OptResult#1/6 (/9 # Function/15 s.ScopeClass#2/20 (/27 e.3#0/30 )/28 # NativeBody/29 t.3#0/36 e.5#0/32 )/10 e.Tail#1/34 >/1
            context[30] = context[25];
            context[31] = context[26];
            context[32] = context[21];
            context[33] = context[22];
            context[34] = context[23];
            context[35] = context[24];
            if( ! refalrts::ident_term( identifiers[ident_NativeBody], context[29] ) )
              continue;
            // closed e.3#0 as range 30
            // closed e.Tail#1 as range 34
            context[37] = refalrts::tvar_left( context[36], context[32], context[33] );
            if( ! context[37] )
              continue;
            // closed e.5#0 as range 32
            //DEBUG: s.Joint#1: 5
            //DEBUG: s.OptResult#1: 6
            //DEBUG: s.ScopeClass#2: 20
            //DEBUG: e.3#0: 30
            //DEBUG: e.Tail#1: 34
            //DEBUG: t.3#0: 36
            //DEBUG: e.5#0: 32

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} # NativeBody/29 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
            //RESULT: Tile{ [[ } Tile{ AsIs: (/9 Reuse: # CmdNativeFunction/15 AsIs: s.ScopeClass#2/20 AsIs: (/27 AsIs: e.3#0/30 AsIs: )/28 } Tile{ AsIs: t.3#0/36 AsIs: e.5#0/32 AsIs: )/10 } Tile{ AsIs: </0 AsIs: & Map@1/4 AsIs: s.Joint#1/5 AsIs: s.OptResult#1/6 } Tile{ AsIs: e.Tail#1/34 } Tile{ AsIs: >/1 ]] }
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

          // </0 & Map@1/4 s.Joint#1/5 s.OptResult#1/6 (/9 # Function/15 s.ScopeClass#2/20 (/27 e.3#0/30 )/28 # Metatable/29 e.4#0/32 )/10 e.Tail#1/34 >/1
          context[30] = context[25];
          context[31] = context[26];
          context[32] = context[21];
          context[33] = context[22];
          context[34] = context[23];
          context[35] = context[24];
          if( ! refalrts::ident_term( identifiers[ident_Metatable], context[29] ) )
            continue;
          // closed e.3#0 as range 30
          // closed e.4#0 as range 32
          // closed e.Tail#1 as range 34
          //DEBUG: s.Joint#1: 5
          //DEBUG: s.OptResult#1: 6
          //DEBUG: s.ScopeClass#2: 20
          //DEBUG: e.3#0: 30
          //DEBUG: e.4#0: 32
          //DEBUG: e.Tail#1: 34

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} # Metatable/29 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ } Tile{ AsIs: (/9 Reuse: # CmdMetatable/15 AsIs: s.ScopeClass#2/20 AsIs: (/27 AsIs: e.3#0/30 AsIs: )/28 } Tile{ AsIs: e.4#0/32 } Tile{ AsIs: )/10 } Tile{ AsIs: </0 AsIs: & Map@1/4 AsIs: s.Joint#1/5 AsIs: s.OptResult#1/6 } Tile{ AsIs: e.Tail#1/34 } Tile{ AsIs: >/1 ]] }
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
          res = refalrts::splice_evar( res, context[10], context[10] );
          res = refalrts::splice_evar( res, context[32], context[33] );
          res = refalrts::splice_evar( res, context[9], context[28] );
          refalrts::splice_to_freelist_open( vm, trash_prev, res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        do {
          // </0 & Map@1/4 s.Joint#1/5 s.OptResult#1/6 (/9 # Swap/15 s.ScopeClass#2/20 e.1#0/21 )/10 e.Tail#1/23 >/1
          context[21] = context[16];
          context[22] = context[17];
          context[23] = context[18];
          context[24] = context[19];
          if( ! refalrts::ident_term( identifiers[ident_Swap], context[15] ) )
            continue;
          // closed e.1#0 as range 21
          // closed e.Tail#1 as range 23
          //DEBUG: s.Joint#1: 5
          //DEBUG: s.OptResult#1: 6
          //DEBUG: s.ScopeClass#2: 20
          //DEBUG: e.1#0: 21
          //DEBUG: e.Tail#1: 23

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ } Tile{ AsIs: (/9 Reuse: # CmdSwap/15 AsIs: s.ScopeClass#2/20 AsIs: e.1#0/21 AsIs: )/10 } Tile{ AsIs: </0 AsIs: & Map@1/4 AsIs: s.Joint#1/5 AsIs: s.OptResult#1/6 } Tile{ AsIs: e.Tail#1/23 } Tile{ AsIs: >/1 ]] }
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

        // </0 & Map@1/4 s.Joint#1/5 s.OptResult#1/6 (/9 # Declaration/15 s.ScopeClass#2/20 e.1#0/21 )/10 e.Tail#1/23 >/1
        context[21] = context[16];
        context[22] = context[17];
        context[23] = context[18];
        context[24] = context[19];
        if( ! refalrts::ident_term( identifiers[ident_Declaration], context[15] ) )
          continue;
        // closed e.1#0 as range 21
        // closed e.Tail#1 as range 23
        //DEBUG: s.Joint#1: 5
        //DEBUG: s.OptResult#1: 6
        //DEBUG: s.ScopeClass#2: 20
        //DEBUG: e.1#0: 21
        //DEBUG: e.Tail#1: 23

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ AsIs: (/9 Reuse: # CmdDeclaration/15 AsIs: s.ScopeClass#2/20 AsIs: e.1#0/21 AsIs: )/10 } Tile{ AsIs: </0 AsIs: & Map@1/4 AsIs: s.Joint#1/5 AsIs: s.OptResult#1/6 } Tile{ AsIs: e.Tail#1/23 } Tile{ AsIs: >/1 ]] }
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
        // </0 & Map@1/4 s.Joint#1/5 s.OptResult#1/6 (/9 # Ident/15 e.0#0/16 )/10 e.Tail#1/18 >/1
        context[16] = context[13];
        context[17] = context[14];
        context[18] = context[11];
        context[19] = context[12];
        if( ! refalrts::ident_term( identifiers[ident_Ident], context[15] ) )
          continue;
        // closed e.0#0 as range 16
        // closed e.Tail#1 as range 18
        //DEBUG: s.Joint#1: 5
        //DEBUG: s.OptResult#1: 6
        //DEBUG: e.0#0: 16
        //DEBUG: e.Tail#1: 18

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ AsIs: (/9 Reuse: # CmdDefineIdent/15 AsIs: e.0#0/16 AsIs: )/10 } Tile{ AsIs: </0 AsIs: & Map@1/4 AsIs: s.Joint#1/5 AsIs: s.OptResult#1/6 } Tile{ AsIs: e.Tail#1/18 } Tile{ AsIs: >/1 ]] }
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

      // </0 & Map@1/4 s.new#13/5 s.new#14/6 (/9 s.new#15/15 t.new#16/20 e.new#17/16 )/10 e.new#18/18 >/1
      context[16] = context[13];
      context[17] = context[14];
      context[18] = context[11];
      context[19] = context[12];
      // closed e.new#18 as range 18
      context[21] = refalrts::tvar_left( context[20], context[16], context[17] );
      if( ! context[21] )
        continue;
      // closed e.new#17 as range 16
      do {
        // </0 & Map@1/4 s.Joint#1/5 s.OptResult#1/6 (/9 # NativeBlock/15 t.0#0/20 e.1#0/22 )/10 e.Tail#1/24 >/1
        context[22] = context[16];
        context[23] = context[17];
        context[24] = context[18];
        context[25] = context[19];
        if( ! refalrts::ident_term( identifiers[ident_NativeBlock], context[15] ) )
          continue;
        // closed e.1#0 as range 22
        // closed e.Tail#1 as range 24
        //DEBUG: t.0#0: 20
        //DEBUG: s.Joint#1: 5
        //DEBUG: s.OptResult#1: 6
        //DEBUG: e.1#0: 22
        //DEBUG: e.Tail#1: 24

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ AsIs: (/9 Reuse: # CmdEmitNativeCode/15 AsIs: t.0#0/20 AsIs: e.1#0/22 AsIs: )/10 } Tile{ AsIs: </0 AsIs: & Map@1/4 AsIs: s.Joint#1/5 AsIs: s.OptResult#1/6 } Tile{ AsIs: e.Tail#1/24 } Tile{ AsIs: >/1 ]] }
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

      // </0 & Map@1/4 s.Joint#1/5 s.OptResult#1/6 (/9 # Spec/15 t.0#0/20 e.1#0/22 )/10 e.Tail#1/24 >/1
      context[22] = context[16];
      context[23] = context[17];
      context[24] = context[18];
      context[25] = context[19];
      if( ! refalrts::ident_term( identifiers[ident_Spec], context[15] ) )
        continue;
      // closed e.1#0 as range 22
      // closed e.Tail#1 as range 24
      //DEBUG: t.0#0: 20
      //DEBUG: s.Joint#1: 5
      //DEBUG: s.OptResult#1: 6
      //DEBUG: e.1#0: 22
      //DEBUG: e.Tail#1: 24

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} (/9 # Spec/15 t.0#0/20 e.1#0/22 )/10 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Map@1/4 AsIs: s.Joint#1/5 AsIs: s.OptResult#1/6 } Tile{ AsIs: e.Tail#1/24 } Tile{ AsIs: >/1 ]] }
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

    // </0 & Map@1/4 s.Joint#1/5 s.OptResult#1/6 t.Next#1/9 e.Tail#1/11 >/1
    context[11] = context[7];
    context[12] = context[8];
    // closed e.Tail#1 as range 11
    //DEBUG: t.Next#1: 9
    //DEBUG: s.Joint#1: 5
    //DEBUG: s.OptResult#1: 6
    //DEBUG: e.Tail#1: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & HighLevelRASL\1*8/4 AsIs: s.Joint#1/5 AsIs: s.OptResult#1/6 AsIs: t.Next#1/9 } >/13 </14 & Map@1/15 s.Joint#1/5/16 s.OptResult#1/6/17 Tile{ AsIs: e.Tail#1/11 } Tile{ AsIs: >/1 ]] }
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
    // </0 & Map@1/4 s.Joint#1/5 s.OptResult#1/6 >/1
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    //DEBUG: s.Joint#1: 5
    //DEBUG: s.OptResult#1: 6

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Map@1/4 s.Joint#1/5 s.OptResult#1/6 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Map@1/4 s.Joint#1/5 s.OptResult#1/6 e.items#0/2 >/1
  // closed e.items#0 as range 2
  //DEBUG: s.Joint#1: 5
  //DEBUG: s.OptResult#1: 6
  //DEBUG: e.items#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </7 & Map@0/8 Tile{ HalfReuse: [*]/0 Reuse: & HighLevelRASL\1/4 AsIs: s.Joint#1/5 AsIs: s.OptResult#1/6 } {*}/9 Tile{ AsIs: e.items#0/2 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[7]);
  refalrts::alloc_name(vm, context[8], functions[efunc_gen_Map_Z0]);
  refalrts::alloc_unwrapped_closure(vm, context[9], context[0]);
  refalrts::reinit_closure_head(context[0]);
  refalrts::update_name(context[4], functions[efunc_gen_HighLevelRASL_L1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[7] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[9], context[9] );
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
  // </0 & Map@2/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & Map@2/4 t.new#1/7 e.new#2/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[8] = refalrts::tvar_left( context[7], context[5], context[6] );
    if( ! context[8] )
      continue;
    // closed e.new#2 as range 5
    do {
      // </0 & Map@2/4 (/7 e.#0/11 )/8 e.Tail#1/9 >/1
      context[9] = context[5];
      context[10] = context[6];
      context[11] = 0;
      context[12] = 0;
      if( ! refalrts::brackets_term( context[11], context[12], context[7] ) )
        continue;
      // closed e.#0 as range 11
      // closed e.Tail#1 as range 9
      //DEBUG: e.#0: 11
      //DEBUG: e.Tail#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # CmdConditionFunc/4 HalfReuse: # GN-Local/7 AsIs: e.#0/11 AsIs: )/8 } </13 & Map@2/14 Tile{ AsIs: e.Tail#1/9 } Tile{ AsIs: >/1 ]] }
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

    // </0 & Map@2/4 t.Next#1/7 e.Tail#1/9 >/1
    context[9] = context[5];
    context[10] = context[6];
    // closed e.Tail#1 as range 9
    //DEBUG: t.Next#1: 7
    //DEBUG: e.Tail#1: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & HighLevelRASL-Function\1*1/4 AsIs: t.Next#1/7 } >/11 </12 & Map@2/13 Tile{ AsIs: e.Tail#1/9 } Tile{ AsIs: >/1 ]] }
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

  // </0 & Map@2/4 e.items#0/2 >/1
  // closed e.items#0 as range 2
  //DEBUG: e.items#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Map@0/0 Reuse: & HighLevelRASL-Function\1/4 AsIs: e.items#0/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::reinit_name(context[0], functions[efunc_gen_Map_Z0]);
  refalrts::update_name(context[4], functions[efunc_gen_HighLevelRASLm_Function_L1]);
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


static refalrts::FnResult func_gen_MapAccum_Z1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & MapAccum@1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & MapAccum@1/4 (/7 e.new#1/5 )/8 t.new#2/9 e.new#3/2 >/1
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
  // closed e.new#3 as range 2
  do {
    // </0 & MapAccum@1/4 (/7 e.Name#1/11 )/8 t.Acc#1/9 e.Tail#1/13 >/1
    context[11] = context[5];
    context[12] = context[6];
    context[13] = context[2];
    context[14] = context[3];
    // closed e.Name#1 as range 11
    // closed e.Tail#1 as range 13
    //DEBUG: t.Acc#1: 9
    //DEBUG: e.Name#1: 11
    //DEBUG: e.Tail#1: 13

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum@1/4 AsIs: (/7 AsIs: e.Name#1/11 AsIs: )/8 AsIs: t.Acc#1/9 } (/15 )/16 Tile{ AsIs: e.Tail#1/13 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_bracket(vm, context[15]);
    refalrts::alloc_close_bracket(vm, context[16]);
    refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_Z1]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[15], context[16] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & MapAccum@1/4 (/7 e.Name#1/5 )/8 t.accum#0/9 e.items#0/2 >/1
  // closed e.Name#1 as range 5
  // closed e.items#0 as range 2
  //DEBUG: t.accum#0: 9
  //DEBUG: e.Name#1: 5
  //DEBUG: e.items#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & MapAccum@0/4 HalfReuse: [*]/7 } & HighLevelRASL-Function=1\1=1\1/11 (/12 Tile{ AsIs: e.Name#1/5 } )/13 Tile{ HalfReuse: {*}/8 AsIs: t.accum#0/9 AsIs: e.items#0/2 AsIs: >/1 ]] }
  refalrts::alloc_name(vm, context[11], functions[efunc_gen_HighLevelRASLm_Function_A1L1A1L1]);
  refalrts::alloc_open_bracket(vm, context[12]);
  refalrts::alloc_close_bracket(vm, context[13]);
  refalrts::update_name(context[4], functions[efunc_gen_MapAccum_Z0]);
  refalrts::reinit_closure_head(context[7]);
  refalrts::reinit_unwrapped_closure(context[8], context[7]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[12], context[13] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[13], context[13] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  refalrts::use( res );
  refalrts::wrap_closure( context[8] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_MapAccum_Z1("MapAccum@1", COOKIE1_, COOKIE2_, func_gen_MapAccum_Z1);


static refalrts::FnResult func_gen_MapAccum_Z2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & MapAccum@2/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & MapAccum@2/4 (/7 e.new#1/5 )/8 t.new#2/9 e.new#3/2 >/1
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
  // closed e.new#3 as range 2
  do {
    // </0 & MapAccum@2/4 (/7 e.Name#1/11 )/8 t.Acc#1/9 e.Tail#1/13 >/1
    context[11] = context[5];
    context[12] = context[6];
    context[13] = context[2];
    context[14] = context[3];
    // closed e.Name#1 as range 11
    // closed e.Tail#1 as range 13
    //DEBUG: t.Acc#1: 9
    //DEBUG: e.Name#1: 11
    //DEBUG: e.Tail#1: 13

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum@2/4 AsIs: (/7 AsIs: e.Name#1/11 AsIs: )/8 AsIs: t.Acc#1/9 } (/15 )/16 Tile{ AsIs: e.Tail#1/13 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_bracket(vm, context[15]);
    refalrts::alloc_close_bracket(vm, context[16]);
    refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_Z2]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[15], context[16] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & MapAccum@2/4 (/7 e.Name#1/5 )/8 t.accum#0/9 e.items#0/2 >/1
  // closed e.Name#1 as range 5
  // closed e.items#0 as range 2
  //DEBUG: t.accum#0: 9
  //DEBUG: e.Name#1: 5
  //DEBUG: e.items#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & MapAccum@0/4 HalfReuse: [*]/7 } & HighLevelRASL-Function=1\1/11 (/12 Tile{ AsIs: e.Name#1/5 } )/13 Tile{ HalfReuse: {*}/8 AsIs: t.accum#0/9 AsIs: e.items#0/2 AsIs: >/1 ]] }
  refalrts::alloc_name(vm, context[11], functions[efunc_gen_HighLevelRASLm_Function_A1L1]);
  refalrts::alloc_open_bracket(vm, context[12]);
  refalrts::alloc_close_bracket(vm, context[13]);
  refalrts::update_name(context[4], functions[efunc_gen_MapAccum_Z0]);
  refalrts::reinit_closure_head(context[7]);
  refalrts::reinit_unwrapped_closure(context[8], context[7]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[12], context[13] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[13], context[13] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  refalrts::use( res );
  refalrts::wrap_closure( context[8] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_MapAccum_Z2("MapAccum@2", COOKIE1_, COOKIE2_, func_gen_MapAccum_Z2);


static refalrts::FnResult func_gen_DoMapAccum_Z1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 53 elems
  refalrts::Iter context[53];
  refalrts::zeros( context, 53 );
  // </0 & DoMapAccum@1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DoMapAccum@1/4 (/7 e.new#1/5 )/8 t.new#2/9 (/13 e.new#3/11 )/14 e.new#4/2 >/1
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
    // </0 & DoMapAccum@1/4 (/7 e.new#8/15 )/8 t.new#5/9 (/13 e.new#9/17 )/14 t.new#6/21 e.new#7/19 >/1
    context[15] = context[5];
    context[16] = context[6];
    context[17] = context[11];
    context[18] = context[12];
    context[19] = context[2];
    context[20] = context[3];
    // closed e.new#8 as range 15
    // closed e.new#9 as range 17
    context[22] = refalrts::tvar_left( context[21], context[19], context[20] );
    if( ! context[22] )
      continue;
    // closed e.new#7 as range 19
    do {
      // </0 & DoMapAccum@1/4 (/7 e.Name#1/23 )/8 (/9 e.#0/29 )/10 (/13 e.Scanned#1/25 )/14 (/21 # Condition/33 (/36 e.3#0/34 )/37 (/40 e.5#0/38 )/41 (/44 e.7#0/42 )/45 )/22 e.Tail#1/27 >/1
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
      // closed e.Name#1 as range 23
      // closed e.#0 as range 29
      // closed e.Scanned#1 as range 25
      // closed e.3#0 as range 34
      // closed e.5#0 as range 38
      // closed e.7#0 as range 42
      // closed e.Tail#1 as range 27
      //DEBUG: e.Name#1: 23
      //DEBUG: e.#0: 29
      //DEBUG: e.Scanned#1: 25
      //DEBUG: e.3#0: 34
      //DEBUG: e.5#0: 38
      //DEBUG: e.7#0: 42
      //DEBUG: e.Tail#1: 27

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum$1=1@1/4 AsIs: (/7 AsIs: e.Name#1/23 AsIs: )/8 AsIs: (/9 } Tile{ AsIs: e.Scanned#1/25 } Tile{ AsIs: )/10 AsIs: (/13 } Tile{ AsIs: e.Tail#1/27 } Tile{ AsIs: )/14 HalfReuse: </21 HalfReuse: & HighLevelRASL-Function=1\1=1\1=1/33 AsIs: (/36 } Tile{ AsIs: e.#0/29 } Tile{ AsIs: )/37 AsIs: (/40 AsIs: e.5#0/38 AsIs: )/41 AsIs: (/44 AsIs: e.7#0/42 AsIs: )/45 HalfReuse: </22 } & FixupName/46 (/47 e.Name#1/23/48 )/50 Tile{ AsIs: e.3#0/34 } >/51 >/52 Tile{ AsIs: >/1 ]] }
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

    // </0 & DoMapAccum@1/4 (/7 e.Name#1/23 )/8 t.Acc#1/9 (/13 e.Scanned#1/25 )/14 t.Next#1/21 e.Tail#1/27 >/1
    context[23] = context[15];
    context[24] = context[16];
    context[25] = context[17];
    context[26] = context[18];
    context[27] = context[19];
    context[28] = context[20];
    // closed e.Name#1 as range 23
    // closed e.Scanned#1 as range 25
    // closed e.Tail#1 as range 27
    //DEBUG: t.Acc#1: 9
    //DEBUG: t.Next#1: 21
    //DEBUG: e.Name#1: 23
    //DEBUG: e.Scanned#1: 25
    //DEBUG: e.Tail#1: 27

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum$1=1@1/4 AsIs: (/7 AsIs: e.Name#1/23 AsIs: )/8 } Tile{ AsIs: (/13 AsIs: e.Scanned#1/25 AsIs: )/14 } (/29 Tile{ AsIs: e.Tail#1/27 } )/30 </31 & HighLevelRASL-Function=1\1=1\1*1/32 (/33 e.Name#1/23/34 )/36 Tile{ AsIs: t.Acc#1/9 } Tile{ AsIs: t.Next#1/21 } >/37 Tile{ AsIs: >/1 ]] }
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
    res = refalrts::splice_evar( res, context[37], context[37] );
    res = refalrts::splice_evar( res, context[21], context[22] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[30], context[36] );
    res = refalrts::splice_evar( res, context[27], context[28] );
    res = refalrts::splice_evar( res, context[29], context[29] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoMapAccum@1/4 (/7 e.Name#1/15 )/8 t.Acc#1/9 (/13 e.Scanned#1/17 )/14 >/1
    context[15] = context[5];
    context[16] = context[6];
    context[17] = context[11];
    context[18] = context[12];
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Name#1 as range 15
    // closed e.Scanned#1 as range 17
    //DEBUG: t.Acc#1: 9
    //DEBUG: e.Name#1: 15
    //DEBUG: e.Scanned#1: 17

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & DoMapAccum@1/4 (/7 e.Name#1/15 )/8 {REMOVED TILE} (/13 {REMOVED TILE} )/14 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: t.Acc#1/9 } Tile{ AsIs: e.Scanned#1/17 } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoMapAccum@1/4 (/7 e.Name#1/5 )/8 t.acc#0/9 (/13 e.scanned#0/11 )/14 e.items#0/2 >/1
  // closed e.Name#1 as range 5
  // closed e.scanned#0 as range 11
  // closed e.items#0 as range 2
  //DEBUG: t.acc#0: 9
  //DEBUG: e.Name#1: 5
  //DEBUG: e.scanned#0: 11
  //DEBUG: e.items#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum@0/4 HalfReuse: [*]/7 } & HighLevelRASL-Function=1\1=1\1/15 (/16 Tile{ AsIs: e.Name#1/5 } )/17 Tile{ HalfReuse: {*}/8 AsIs: t.acc#0/9 AsIs: (/13 AsIs: e.scanned#0/11 AsIs: )/14 AsIs: e.items#0/2 AsIs: >/1 ]] }
  refalrts::alloc_name(vm, context[15], functions[efunc_gen_HighLevelRASLm_Function_A1L1A1L1]);
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
  res = refalrts::splice_evar( res, context[17], context[17] );
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
  // issue here memory for vars with 53 elems
  refalrts::Iter context[53];
  refalrts::zeros( context, 53 );
  // </0 & DoMapAccum@2/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DoMapAccum@2/4 (/7 e.new#1/5 )/8 t.new#2/9 (/13 e.new#3/11 )/14 e.new#4/2 >/1
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
    // </0 & DoMapAccum@2/4 (/7 e.new#8/15 )/8 t.new#5/9 (/13 e.new#9/17 )/14 t.new#6/21 e.new#7/19 >/1
    context[15] = context[5];
    context[16] = context[6];
    context[17] = context[11];
    context[18] = context[12];
    context[19] = context[2];
    context[20] = context[3];
    // closed e.new#8 as range 15
    // closed e.new#9 as range 17
    context[22] = refalrts::tvar_left( context[21], context[19], context[20] );
    if( ! context[22] )
      continue;
    // closed e.new#7 as range 19
    do {
      // </0 & DoMapAccum@2/4 (/7 e.Name#1/23 )/8 (/9 e.#0/29 )/10 (/13 e.Scanned#1/25 )/14 (/21 (/35 e.2#0/33 )/36 e.3#0/31 (/39 e.4#0/37 )/40 )/22 e.Tail#1/27 >/1
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
      // closed e.Name#1 as range 23
      // closed e.#0 as range 29
      // closed e.Scanned#1 as range 25
      // closed e.2#0 as range 33
      // closed e.3#0 as range 31
      // closed e.4#0 as range 37
      // closed e.Tail#1 as range 27
      //DEBUG: e.Name#1: 23
      //DEBUG: e.#0: 29
      //DEBUG: e.Scanned#1: 25
      //DEBUG: e.2#0: 33
      //DEBUG: e.3#0: 31
      //DEBUG: e.4#0: 37
      //DEBUG: e.Tail#1: 27

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum$1=1@2/4 AsIs: (/7 AsIs: e.Name#1/23 AsIs: )/8 AsIs: (/9 } Tile{ AsIs: e.Scanned#1/25 } Tile{ AsIs: )/10 AsIs: (/13 } Tile{ AsIs: e.Tail#1/27 } Tile{ AsIs: )/14 } </41 & HighLevelRASL-Function=1\1=1/42 (/43 Tile{ AsIs: e.#0/29 } Tile{ HalfReuse: )/21 AsIs: (/35 AsIs: e.2#0/33 AsIs: )/36 } Tile{ AsIs: (/39 AsIs: e.4#0/37 AsIs: )/40 HalfReuse: </22 } & MapAccum@1/44 (/45 e.Name#1/23/46 )/48 (/49 )/50 Tile{ AsIs: e.3#0/31 } >/51 >/52 Tile{ AsIs: >/1 ]] }
      refalrts::alloc_open_call(vm, context[41]);
      refalrts::alloc_name(vm, context[42], functions[efunc_gen_HighLevelRASLm_Function_A1L1A1]);
      refalrts::alloc_open_bracket(vm, context[43]);
      refalrts::alloc_name(vm, context[44], functions[efunc_gen_MapAccum_Z1]);
      refalrts::alloc_open_bracket(vm, context[45]);
      refalrts::copy_evar(vm, context[46], context[47], context[23], context[24]);
      refalrts::alloc_close_bracket(vm, context[48]);
      refalrts::alloc_open_bracket(vm, context[49]);
      refalrts::alloc_close_bracket(vm, context[50]);
      refalrts::alloc_close_call(vm, context[51]);
      refalrts::alloc_close_call(vm, context[52]);
      refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_S1A1Z2]);
      refalrts::reinit_close_bracket(context[21]);
      refalrts::reinit_open_call(context[22]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[52] );
      refalrts::push_stack( vm, context[41] );
      refalrts::push_stack( vm, context[51] );
      refalrts::push_stack( vm, context[22] );
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
      res = refalrts::splice_evar( res, context[51], context[52] );
      res = refalrts::splice_evar( res, context[31], context[32] );
      res = refalrts::splice_evar( res, context[44], context[50] );
      res = refalrts::splice_evar( res, context[39], context[22] );
      res = refalrts::splice_evar( res, context[21], context[36] );
      res = refalrts::splice_evar( res, context[29], context[30] );
      res = refalrts::splice_evar( res, context[41], context[43] );
      res = refalrts::splice_evar( res, context[14], context[14] );
      res = refalrts::splice_evar( res, context[27], context[28] );
      res = refalrts::splice_evar( res, context[10], context[13] );
      res = refalrts::splice_evar( res, context[25], context[26] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & DoMapAccum@2/4 (/7 e.Name#1/23 )/8 t.Acc#1/9 (/13 e.Scanned#1/25 )/14 t.Next#1/21 e.Tail#1/27 >/1
    context[23] = context[15];
    context[24] = context[16];
    context[25] = context[17];
    context[26] = context[18];
    context[27] = context[19];
    context[28] = context[20];
    // closed e.Name#1 as range 23
    // closed e.Scanned#1 as range 25
    // closed e.Tail#1 as range 27
    //DEBUG: t.Acc#1: 9
    //DEBUG: t.Next#1: 21
    //DEBUG: e.Name#1: 23
    //DEBUG: e.Scanned#1: 25
    //DEBUG: e.Tail#1: 27

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum$1=1@2/4 AsIs: (/7 AsIs: e.Name#1/23 AsIs: )/8 } Tile{ AsIs: (/13 AsIs: e.Scanned#1/25 AsIs: )/14 } (/29 Tile{ AsIs: e.Tail#1/27 } )/30 </31 & HighLevelRASL-Function=1\1*1/32 (/33 e.Name#1/23/34 )/36 Tile{ AsIs: t.Acc#1/9 } Tile{ AsIs: t.Next#1/21 } >/37 Tile{ AsIs: >/1 ]] }
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
    res = refalrts::splice_evar( res, context[37], context[37] );
    res = refalrts::splice_evar( res, context[21], context[22] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[30], context[36] );
    res = refalrts::splice_evar( res, context[27], context[28] );
    res = refalrts::splice_evar( res, context[29], context[29] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoMapAccum@2/4 (/7 e.Name#1/15 )/8 t.Acc#1/9 (/13 e.Scanned#1/17 )/14 >/1
    context[15] = context[5];
    context[16] = context[6];
    context[17] = context[11];
    context[18] = context[12];
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Name#1 as range 15
    // closed e.Scanned#1 as range 17
    //DEBUG: t.Acc#1: 9
    //DEBUG: e.Name#1: 15
    //DEBUG: e.Scanned#1: 17

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & DoMapAccum@2/4 (/7 e.Name#1/15 )/8 {REMOVED TILE} (/13 {REMOVED TILE} )/14 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: t.Acc#1/9 } Tile{ AsIs: e.Scanned#1/17 } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoMapAccum@2/4 (/7 e.Name#1/5 )/8 t.acc#0/9 (/13 e.scanned#0/11 )/14 e.items#0/2 >/1
  // closed e.Name#1 as range 5
  // closed e.scanned#0 as range 11
  // closed e.items#0 as range 2
  //DEBUG: t.acc#0: 9
  //DEBUG: e.Name#1: 5
  //DEBUG: e.scanned#0: 11
  //DEBUG: e.items#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum@0/4 HalfReuse: [*]/7 } & HighLevelRASL-Function=1\1/15 (/16 Tile{ AsIs: e.Name#1/5 } )/17 Tile{ HalfReuse: {*}/8 AsIs: t.acc#0/9 AsIs: (/13 AsIs: e.scanned#0/11 AsIs: )/14 AsIs: e.items#0/2 AsIs: >/1 ]] }
  refalrts::alloc_name(vm, context[15], functions[efunc_gen_HighLevelRASLm_Function_A1L1]);
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
  res = refalrts::splice_evar( res, context[17], context[17] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[15], context[16] );
  refalrts::use( res );
  refalrts::wrap_closure( context[8] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoMapAccum_Z2("DoMapAccum@2", COOKIE1_, COOKIE2_, func_gen_DoMapAccum_Z2);


static refalrts::FnResult func_gen_DoMapAccum_S1A1Z1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 27 elems
  refalrts::Iter context[27];
  refalrts::zeros( context, 27 );
  // </0 & DoMapAccum$1=1@1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DoMapAccum$1=1@1/4 (/7 e.new#1/5 )/8 (/11 e.new#2/9 )/12 (/15 e.new#3/13 )/16 e.new#4/2 >/1
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
    // </0 & DoMapAccum$1=1@1/4 (/7 e.Name#1/17 )/8 (/11 e.Scanned0#1/19 )/12 (/15 e.Tail0#1/21 )/16 t.Acc#2/25 e.StepScanned#2/23 >/1
    context[17] = context[5];
    context[18] = context[6];
    context[19] = context[9];
    context[20] = context[10];
    context[21] = context[13];
    context[22] = context[14];
    context[23] = context[2];
    context[24] = context[3];
    // closed e.Name#1 as range 17
    // closed e.Scanned0#1 as range 19
    // closed e.Tail0#1 as range 21
    context[26] = refalrts::tvar_left( context[25], context[23], context[24] );
    if( ! context[26] )
      continue;
    // closed e.StepScanned#2 as range 23
    //DEBUG: e.Name#1: 17
    //DEBUG: e.Scanned0#1: 19
    //DEBUG: e.Tail0#1: 21
    //DEBUG: t.Acc#2: 25
    //DEBUG: e.StepScanned#2: 23

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} (/11 {REMOVED TILE} )/12 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum@1/4 AsIs: (/7 AsIs: e.Name#1/17 AsIs: )/8 } Tile{ AsIs: t.Acc#2/25 } Tile{ AsIs: (/15 } Tile{ AsIs: e.Scanned0#1/19 } Tile{ AsIs: e.StepScanned#2/23 } Tile{ AsIs: )/16 } Tile{ AsIs: e.Tail0#1/21 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_Z1]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[15], context[16] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[21], context[22] );
    res = refalrts::splice_evar( res, context[16], context[16] );
    res = refalrts::splice_evar( res, context[23], context[24] );
    res = refalrts::splice_evar( res, context[19], context[20] );
    res = refalrts::splice_evar( res, context[15], context[15] );
    res = refalrts::splice_evar( res, context[25], context[26] );
    refalrts::splice_to_freelist_open( vm, context[8], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoMapAccum$1=1@1/4 (/7 e.Name#1/5 )/8 (/11 e.Scanned0#1/9 )/12 (/15 e.Tail0#1/13 )/16 e.dyn#0/2 >/1
  // closed e.Name#1 as range 5
  // closed e.Scanned0#1 as range 9
  // closed e.Tail0#1 as range 13
  // closed e.dyn#0 as range 2
  //DEBUG: e.Name#1: 5
  //DEBUG: e.Scanned0#1: 9
  //DEBUG: e.Tail0#1: 13
  //DEBUG: e.dyn#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum$1=1@0/4 HalfReuse: [*]/7 } & HighLevelRASL-Function=1\1=1\1/17 (/18 Tile{ AsIs: e.Name#1/5 } )/19 Tile{ HalfReuse: {*}/8 AsIs: (/11 AsIs: e.Scanned0#1/9 AsIs: )/12 AsIs: (/15 AsIs: e.Tail0#1/13 AsIs: )/16 AsIs: e.dyn#0/2 AsIs: >/1 ]] }
  refalrts::alloc_name(vm, context[17], functions[efunc_gen_HighLevelRASLm_Function_A1L1A1L1]);
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
  res = refalrts::splice_evar( res, context[19], context[19] );
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
  // </0 & DoMapAccum$1=1@2/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DoMapAccum$1=1@2/4 (/7 e.new#1/5 )/8 (/11 e.new#2/9 )/12 (/15 e.new#3/13 )/16 e.new#4/2 >/1
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
    // </0 & DoMapAccum$1=1@2/4 (/7 e.Name#1/17 )/8 (/11 e.Scanned0#1/19 )/12 (/15 e.Tail0#1/21 )/16 t.Acc#2/25 e.StepScanned#2/23 >/1
    context[17] = context[5];
    context[18] = context[6];
    context[19] = context[9];
    context[20] = context[10];
    context[21] = context[13];
    context[22] = context[14];
    context[23] = context[2];
    context[24] = context[3];
    // closed e.Name#1 as range 17
    // closed e.Scanned0#1 as range 19
    // closed e.Tail0#1 as range 21
    context[26] = refalrts::tvar_left( context[25], context[23], context[24] );
    if( ! context[26] )
      continue;
    // closed e.StepScanned#2 as range 23
    //DEBUG: e.Name#1: 17
    //DEBUG: e.Scanned0#1: 19
    //DEBUG: e.Tail0#1: 21
    //DEBUG: t.Acc#2: 25
    //DEBUG: e.StepScanned#2: 23

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} (/11 {REMOVED TILE} )/12 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum@2/4 AsIs: (/7 AsIs: e.Name#1/17 AsIs: )/8 } Tile{ AsIs: t.Acc#2/25 } Tile{ AsIs: (/15 } Tile{ AsIs: e.Scanned0#1/19 } Tile{ AsIs: e.StepScanned#2/23 } Tile{ AsIs: )/16 } Tile{ AsIs: e.Tail0#1/21 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_Z2]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[15], context[16] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[21], context[22] );
    res = refalrts::splice_evar( res, context[16], context[16] );
    res = refalrts::splice_evar( res, context[23], context[24] );
    res = refalrts::splice_evar( res, context[19], context[20] );
    res = refalrts::splice_evar( res, context[15], context[15] );
    res = refalrts::splice_evar( res, context[25], context[26] );
    refalrts::splice_to_freelist_open( vm, context[8], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoMapAccum$1=1@2/4 (/7 e.Name#1/5 )/8 (/11 e.Scanned0#1/9 )/12 (/15 e.Tail0#1/13 )/16 e.dyn#0/2 >/1
  // closed e.Name#1 as range 5
  // closed e.Scanned0#1 as range 9
  // closed e.Tail0#1 as range 13
  // closed e.dyn#0 as range 2
  //DEBUG: e.Name#1: 5
  //DEBUG: e.Scanned0#1: 9
  //DEBUG: e.Tail0#1: 13
  //DEBUG: e.dyn#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum$1=1@0/4 HalfReuse: [*]/7 } & HighLevelRASL-Function=1\1/17 (/18 Tile{ AsIs: e.Name#1/5 } )/19 Tile{ HalfReuse: {*}/8 AsIs: (/11 AsIs: e.Scanned0#1/9 AsIs: )/12 AsIs: (/15 AsIs: e.Tail0#1/13 AsIs: )/16 AsIs: e.dyn#0/2 AsIs: >/1 ]] }
  refalrts::alloc_name(vm, context[17], functions[efunc_gen_HighLevelRASLm_Function_A1L1]);
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
  res = refalrts::splice_evar( res, context[19], context[19] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[17], context[18] );
  refalrts::use( res );
  refalrts::wrap_closure( context[8] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoMapAccum_S1A1Z2("DoMapAccum$1=1@2", COOKIE1_, COOKIE2_, func_gen_DoMapAccum_S1A1Z2);


//End of file
