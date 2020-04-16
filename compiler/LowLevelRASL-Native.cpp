// This file automatically generated from 'LowLevelRASL-Native.ref'
// Don't edit! Edit 'LowLevelRASL-Native.ref' and recompile it

#include "refalrts.h"

#define cookie_ns cookie_ns_3194306013_3453407793
#define COOKIE1_ 3194306013U
#define COOKIE2_ 3453407793U

enum efunc {
  efunc_u_u_Stepm_Drop = 0,
  efunc_u_u_Metau_Mu = 1,
  efunc_d_table = 2,
  efunc_Map = 3,
  efunc_Apply = 4,
  efunc_Reduce = 5,
  efunc_DoMapAccum = 6,
  efunc_DoMapAccumm_Aux = 7,
  efunc_Add = 8,
  efunc_Sub = 9,
  efunc_Fetch = 10,
  efunc_Pipe = 11,
  efunc_gen_Pipe_S2L1 = 12,
  efunc_gen_Pipe_S3L1 = 13,
  efunc_PrepareTable = 14,
  efunc_gen_Map_Z1 = 15,
  efunc_gen_LowLevelRASLm_Native_B1S2A1 = 16,
  efunc_gen_LowLevelRASLm_Native_B1 = 17,
  efunc_gen_Map_Z2 = 18,
  efunc_gen_Map_Z3 = 19,
  efunc_MingleName = 20,
  efunc_ConvertDirectCommands = 21,
  efunc_Symb = 22,
  efunc_Mu = 23,
  efunc_Up = 24,
  efunc_Evm_met = 25,
  efunc_Residue = 26,
  efunc_u_u_Metau_Residue = 27,
  efunc_MapAccum = 28,
  efunc_UnBracket = 29,
  efunc_DelAccumulator = 30,
  efunc_Inc = 31,
  efunc_Dec = 32,
  efunc_LowLevelRASLm_Native = 33,
  efunc_SetCookies = 34,
  efunc_PrepareFunctionsRASL = 35,
  efunc_gen_Map_Z0 = 36,
  efunc_gen_PrepareTable_S2L1D1 = 37,
  efunc_gen_PrepareTable_S2L1 = 38,
};


enum ident {
  ident_CmdCookieNS = 0,
  ident_CmdCEnumm_Item = 1,
  ident_CmdCEnumm_Start = 2,
  ident_CmdCEnumm_End = 3,
  ident_UnitName = 4,
  ident_Functionm_ToRASL = 5,
  ident_Functionm_ToNative = 6,
  ident_CmdNativeFunction = 7,
  ident_CmdMetatable = 8,
  ident_CmdEnum = 9,
  ident_CmdSwap = 10,
  ident_CmdConditionFuncm_ToRASL = 11,
  ident_CmdConditionFuncm_ToNative = 12,
  ident_CmdDeclaration = 13,
  ident_CmdEmitNativeCode = 14,
  ident_GNm_Entry = 15,
  ident_Hash = 16,
  ident_GNm_Local = 17,
  ident_CmdFnStart = 18,
  ident_CmdProfileFunction = 19,
  ident_CmdLoadConstants = 20,
  ident_CmdFnEnd = 21,
  ident_CmdNativeFuncDescr = 22,
  ident_CmdSentence = 23,
  ident_CmdEndSentence = 24,
  ident_CmdStartSentence = 25,
  ident_CmdOpenELoop = 26,
  ident_AlgLeft = 27,
  ident_CmdOpenedEm_Start = 28,
  ident_CmdOpenedEm_End = 29,
  ident_CmdVariableDebugTable = 30,
  ident_CmdComment = 31,
  ident_Mu = 32,
  ident_Up = 33,
  ident_Evm_met = 34,
  ident_Residue = 35,
  ident_u_u_Metau_Residue = 36,
  ident_Apply = 37,
  ident_Map = 38,
  ident_Reduce = 39,
  ident_Fetch = 40,
  ident_MapAccum = 41,
  ident_DoMapAccum = 42,
  ident_DoMapAccumm_Aux = 43,
  ident_UnBracket = 44,
  ident_DelAccumulator = 45,
  ident_Inc = 46,
  ident_Dec = 47,
  ident_Pipe = 48,
  ident_LowLevelRASLm_Native = 49,
  ident_PrepareTable = 50,
  ident_SetCookies = 51,
  ident_MingleName = 52,
  ident_PrepareFunctionsRASL = 53,
  ident_ConvertDirectCommands = 54,
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


static refalrts::FnResult func_gen_LowLevelRASLm_Native_B1S2A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 23 elems
  refalrts::Iter context[23];
  refalrts::zeros( context, 23 );
  // </0 & LowLevelRASL-Native:1$2=1/4 s.Hash1#1/5 s.Hash2#1/6 t.FuncTable#1/7 t.IdentTable#1/9 e.DefinitionsRASL#3/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[8] = refalrts::tvar_left( context[7], context[2], context[3] );
  if( ! context[8] )
    return refalrts::cRecognitionImpossible;
  context[10] = refalrts::tvar_left( context[9], context[2], context[3] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  // closed e.DefinitionsRASL#3 as range 2
  //DEBUG: s.Hash1#1: 5
  //DEBUG: s.Hash2#1: 6
  //DEBUG: t.FuncTable#1: 7
  //DEBUG: t.IdentTable#1: 9
  //DEBUG: e.DefinitionsRASL#3: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } (/11 Tile{ HalfReuse: (/0 HalfReuse: # CmdCookieNS/4 AsIs: s.Hash1#1/5 AsIs: s.Hash2#1/6 } )/12 </13 & PrepareTable/14"efunc"/15 Tile{ AsIs: t.FuncTable#1/7 } >/17 </18 & PrepareTable/19"ident"/20 Tile{ AsIs: t.IdentTable#1/9 } >/22 Tile{ AsIs: e.DefinitionsRASL#3/2 } Tile{ HalfReuse: )/1 ]] }
  refalrts::alloc_open_bracket(vm, context[11]);
  refalrts::alloc_close_bracket(vm, context[12]);
  refalrts::alloc_open_call(vm, context[13]);
  refalrts::alloc_name(vm, context[14], functions[efunc_PrepareTable]);
  refalrts::alloc_chars(vm, context[15], context[16], "efunc", 5);
  refalrts::alloc_close_call(vm, context[17]);
  refalrts::alloc_open_call(vm, context[18]);
  refalrts::alloc_name(vm, context[19], functions[efunc_PrepareTable]);
  refalrts::alloc_chars(vm, context[20], context[21], "ident", 5);
  refalrts::alloc_close_call(vm, context[22]);
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_ident(context[4], identifiers[ident_CmdCookieNS]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[11], context[1] );
  refalrts::push_stack( vm, context[22] );
  refalrts::push_stack( vm, context[18] );
  refalrts::push_stack( vm, context[17] );
  refalrts::push_stack( vm, context[13] );
  refalrts::link_brackets( context[0], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[22], context[22] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[17], context[21] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_evar( res, context[12], context[16] );
  res = refalrts::splice_evar( res, context[0], context[6] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_LowLevelRASLm_Native_B1S2A1("LowLevelRASL-Native:1$2=1", COOKIE1_, COOKIE2_, func_gen_LowLevelRASLm_Native_B1S2A1);


static refalrts::FnResult func_gen_LowLevelRASLm_Native_B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  // </0 & LowLevelRASL-Native:1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & LowLevelRASL-Native:1/4 s.new#1/5 s.new#2/6 t.new#3/7 t.new#4/9 e.new#5/2 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[8] = refalrts::tvar_left( context[7], context[2], context[3] );
  if( ! context[8] )
    return refalrts::cRecognitionImpossible;
  context[10] = refalrts::tvar_left( context[9], context[2], context[3] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#5 as range 2
  do {
    // </0 & LowLevelRASL-Native:1/4 s.Hash1#1/5 s.Hash2#1/6 t.FuncTable#1/7 t.IdentTable#1/9 >/1
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    //DEBUG: t.FuncTable#1: 7
    //DEBUG: t.IdentTable#1: 9
    //DEBUG: s.Hash1#1: 5
    //DEBUG: s.Hash2#1: 6

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & LowLevelRASL-Native:1/4 s.Hash1#1/5 s.Hash2#1/6 t.FuncTable#1/7 t.IdentTable#1/9 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & LowLevelRASL-Native:1/4 s.Hash1#1/5 s.Hash2#1/6 t.FuncTable#1/7 t.IdentTable#1/9 e.Definitions#2/2 >/1
  // closed e.Definitions#2 as range 2
  //DEBUG: t.FuncTable#1: 7
  //DEBUG: t.IdentTable#1: 9
  //DEBUG: s.Hash1#1: 5
  //DEBUG: s.Hash2#1: 6
  //DEBUG: e.Definitions#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & LowLevelRASL-Native:1$2=1/4 AsIs: s.Hash1#1/5 AsIs: s.Hash2#1/6 AsIs: t.FuncTable#1/7 AsIs: t.IdentTable#1/9 } </11 & Map@1/12 Tile{ AsIs: e.Definitions#2/2 } >/13 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[11]);
  refalrts::alloc_name(vm, context[12], functions[efunc_gen_Map_Z1]);
  refalrts::alloc_close_call(vm, context[13]);
  refalrts::update_name(context[4], functions[efunc_gen_LowLevelRASLm_Native_B1S2A1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[13] );
  refalrts::push_stack( vm, context[11] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[13], context[13] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_LowLevelRASLm_Native_B1("LowLevelRASL-Native:1", COOKIE1_, COOKIE2_, func_gen_LowLevelRASLm_Native_B1);


static refalrts::FnResult func_LowLevelRASLm_Native(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  // </0 & LowLevelRASL-Native/4 s.Hash1#1/5 s.Hash2#1/6 (/9 t.FuncTable#1/11 t.IdentTable#1/13 )/10 e.Items#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[7] = 0;
  context[8] = 0;
  context[9] = refalrts::brackets_left( context[7], context[8], context[2], context[3] );
  if( ! context[9] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[9], context[10]);
  // closed e.Items#1 as range 2
  context[12] = refalrts::tvar_left( context[11], context[7], context[8] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  context[14] = refalrts::tvar_left( context[13], context[7], context[8] );
  if( ! context[14] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[7], context[8] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: s.Hash1#1: 5
  //DEBUG: s.Hash2#1: 6
  //DEBUG: e.Items#1: 2
  //DEBUG: t.FuncTable#1: 11
  //DEBUG: t.IdentTable#1: 13

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & LowLevelRASL-Native:1/4 AsIs: s.Hash1#1/5 AsIs: s.Hash2#1/6 } Tile{ AsIs: t.FuncTable#1/11 AsIs: t.IdentTable#1/13 HalfReuse: </10 } Tile{ HalfReuse: & Map@2/9 } s.Hash1#1/5/15 s.Hash2#1/6/16 Tile{ AsIs: e.Items#1/2 } >/17 Tile{ AsIs: >/1 ]] }
  refalrts::copy_stvar(vm, context[15], context[5]);
  refalrts::copy_stvar(vm, context[16], context[6]);
  refalrts::alloc_close_call(vm, context[17]);
  refalrts::update_name(context[4], functions[efunc_gen_LowLevelRASLm_Native_B1]);
  refalrts::reinit_open_call(context[10]);
  refalrts::reinit_name(context[9], functions[efunc_gen_Map_Z2]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[17] );
  refalrts::push_stack( vm, context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[17], context[17] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[15], context[16] );
  res = refalrts::splice_evar( res, context[9], context[9] );
  res = refalrts::splice_evar( res, context[11], context[10] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_LowLevelRASLm_Native("LowLevelRASL-Native", 0U, 0U, func_LowLevelRASLm_Native);


static refalrts::FnResult func_gen_PrepareTable_S2L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  // </0 & PrepareTable$2\1/4 (/7 e.Prefix#1/5 )/8 (/11 s.Id#2/13 e.Name#2/9 )/12 >/1
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
  // closed e.Prefix#1 as range 5
  if( ! refalrts::svar_left( context[13], context[9], context[10] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Name#2 as range 9
  //DEBUG: e.Prefix#1: 5
  //DEBUG: s.Id#2: 13
  //DEBUG: e.Name#2: 9

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} (/11 s.Id#2/13 {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # CmdCEnum-Item/4 AsIs: (/7 AsIs: e.Prefix#1/5 AsIs: )/8 } Tile{ AsIs: e.Name#2/9 } Tile{ HalfReuse: s.Id2 #13/12 HalfReuse: )/1 ]] }
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_ident(context[4], identifiers[ident_CmdCEnumm_Item]);
  refalrts::reinit_svar( context[12], context[13] );
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[0], context[1] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[12];
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::splice_to_freelist_open( vm, context[8], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_PrepareTable_S2L1("PrepareTable$2\\1", COOKIE1_, COOKIE2_, func_gen_PrepareTable_S2L1);


static refalrts::FnResult func_PrepareTable(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  // </0 & PrepareTable/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & PrepareTable/4 e.new#1/2 (/7 s.new#2/9 e.new#3/5 )/8 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 2
  if( ! refalrts::svar_left( context[9], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#3 as range 5
  do {
    // </0 & PrepareTable/4 e.Prefix#1/10 (/7 0/9 )/8 >/1
    context[10] = context[2];
    context[11] = context[3];
    if( ! refalrts::number_term( 0UL, context[9] ) )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    // closed e.Prefix#1 as range 10
    //DEBUG: e.Prefix#1: 10

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & PrepareTable/4 e.Prefix#1/10 (/7 0/9 )/8 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & PrepareTable/4 e.Prefix#1/2 (/7 s.Count#1/9 e.Items#1/5 )/8 >/1
  // closed e.Prefix#1 as range 2
  // closed e.Items#1 as range 5
  //DEBUG: s.Count#1: 9
  //DEBUG: e.Prefix#1: 2
  //DEBUG: e.Items#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} s.Count#1/9 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } (/10 # CmdCEnum-Start/11 e.Prefix#1/2/12 )/14 Tile{ AsIs: </0 Reuse: & Map@3/4 AsIs: e.Prefix#1/2 AsIs: (/7 } Tile{ AsIs: e.Items#1/5 } Tile{ AsIs: )/8 AsIs: >/1 } (/15 # CmdCEnum-End/16 )/17 Tile{ ]] }
  refalrts::alloc_open_bracket(vm, context[10]);
  refalrts::alloc_ident(vm, context[11], identifiers[ident_CmdCEnumm_Start]);
  refalrts::copy_evar(vm, context[12], context[13], context[2], context[3]);
  refalrts::alloc_close_bracket(vm, context[14]);
  refalrts::alloc_open_bracket(vm, context[15]);
  refalrts::alloc_ident(vm, context[16], identifiers[ident_CmdCEnumm_End]);
  refalrts::alloc_close_bracket(vm, context[17]);
  refalrts::update_name(context[4], functions[efunc_gen_Map_Z3]);
  refalrts::link_brackets( context[15], context[17] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[10], context[14] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[15], context[17] );
  res = refalrts::splice_evar( res, context[8], context[1] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[0], context[7] );
  res = refalrts::splice_evar( res, context[10], context[14] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_PrepareTable("PrepareTable", COOKIE1_, COOKIE2_, func_PrepareTable);


static refalrts::FnResult func_SetCookies(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 28 elems
  refalrts::Iter context[28];
  refalrts::zeros( context, 28 );
  // </0 & SetCookies/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & SetCookies/4 s.new#1/9 s.new#2/10 (/7 s.new#3/11 e.new#4/5 )/8 >/1
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
    // </0 & SetCookies/4 s.Hash1#1/9 s.Hash2#1/10 (/7 # UnitName/11 e.SrcName#1/12 )/8 >/1
    context[12] = context[5];
    context[13] = context[6];
    if( ! refalrts::ident_term( identifiers[ident_UnitName], context[11] ) )
      continue;
    // closed e.SrcName#1 as range 12
    //DEBUG: s.Hash1#1: 9
    //DEBUG: s.Hash2#1: 10
    //DEBUG: e.SrcName#1: 12

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & SetCookies/4 s.Hash1#1/9 s.Hash2#1/10 (/7 # UnitName/11 e.SrcName#1/12 )/8 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & SetCookies/4 s.new#5/9 s.new#6/10 (/7 s.new#7/11 t.new#8/12 e.new#9/5 )/8 >/1
  context[13] = refalrts::tvar_left( context[12], context[5], context[6] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#9 as range 5
  do {
    // </0 & SetCookies/4 s.new#10/9 s.new#11/10 (/7 s.new#12/11 s.new#13/12 e.new#14/14 )/8 >/1
    context[14] = context[5];
    context[15] = context[6];
    if( ! refalrts::svar_term( context[12], context[12] ) )
      continue;
    // closed e.new#14 as range 14
    do {
      // </0 & SetCookies/4 s.new#15/9 s.new#16/10 (/7 s.new#17/11 s.new#18/12 (/20 e.new#19/18 )/21 e.new#20/16 )/8 >/1
      context[16] = context[14];
      context[17] = context[15];
      context[18] = 0;
      context[19] = 0;
      context[20] = refalrts::brackets_left( context[18], context[19], context[16], context[17] );
      if( ! context[20] )
        continue;
      refalrts::bracket_pointers(context[20], context[21]);
      // closed e.new#19 as range 18
      // closed e.new#20 as range 16
      do {
        // </0 & SetCookies/4 s.Hash1#1/9 s.Hash2#1/10 (/7 # Function-ToRASL/11 s.ScopeClass#1/12 (/20 e.Name#1/22 )/21 e.Commands#1/24 )/8 >/1
        context[22] = context[18];
        context[23] = context[19];
        context[24] = context[16];
        context[25] = context[17];
        if( ! refalrts::ident_term( identifiers[ident_Functionm_ToRASL], context[11] ) )
          continue;
        // closed e.Name#1 as range 22
        // closed e.Commands#1 as range 24
        //DEBUG: s.Hash1#1: 9
        //DEBUG: s.Hash2#1: 10
        //DEBUG: s.ScopeClass#1: 12
        //DEBUG: e.Name#1: 22
        //DEBUG: e.Commands#1: 24

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 & SetCookies/4 s.Hash1#1/9 s.Hash2#1/10 (/7 # Function-ToRASL/11 s.ScopeClass#1/12 (/20 e.Name#1/22 )/21 e.Commands#1/24 )/8 >/1 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ ]] }
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & SetCookies/4 s.Hash1#1/9 s.Hash2#1/10 (/7 # Function-ToNative/11 s.ScopeClass#1/12 (/20 e.Name#1/22 )/21 e.Commands#1/24 )/8 >/1
        context[22] = context[18];
        context[23] = context[19];
        context[24] = context[16];
        context[25] = context[17];
        if( ! refalrts::ident_term( identifiers[ident_Functionm_ToNative], context[11] ) )
          continue;
        // closed e.Name#1 as range 22
        // closed e.Commands#1 as range 24
        //DEBUG: s.Hash1#1: 9
        //DEBUG: s.Hash2#1: 10
        //DEBUG: s.ScopeClass#1: 12
        //DEBUG: e.Name#1: 22
        //DEBUG: e.Commands#1: 24

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # Function-ToNative/4 } Tile{ AsIs: (/20 } Tile{ HalfReuse: </1 } Tile{ HalfReuse: & MingleName/11 AsIs: s.ScopeClass#1/12 } Tile{ AsIs: e.Name#1/22 } Tile{ AsIs: s.Hash1#1/9 AsIs: s.Hash2#1/10 HalfReuse: >/7 } Tile{ AsIs: )/21 AsIs: e.Commands#1/24 AsIs: )/8 } Tile{ ]] }
        refalrts::reinit_open_bracket(context[0]);
        refalrts::reinit_ident(context[4], identifiers[ident_Functionm_ToNative]);
        refalrts::reinit_open_call(context[1]);
        refalrts::reinit_name(context[11], functions[efunc_MingleName]);
        refalrts::reinit_close_call(context[7]);
        refalrts::link_brackets( context[0], context[8] );
        refalrts::link_brackets( context[20], context[21] );
        refalrts::push_stack( vm, context[7] );
        refalrts::push_stack( vm, context[1] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[21], context[8] );
        res = refalrts::splice_evar( res, context[9], context[7] );
        res = refalrts::splice_evar( res, context[22], context[23] );
        res = refalrts::splice_evar( res, context[11], context[12] );
        res = refalrts::splice_evar( res, context[1], context[1] );
        res = refalrts::splice_evar( res, context[20], context[20] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & SetCookies/4 s.Hash1#1/9 s.Hash2#1/10 (/7 # CmdNativeFunction/11 s.ScopeClass#1/12 (/20 e.Name#1/22 )/21 t.SrcPos#1/26 e.Code#1/24 )/8 >/1
        context[22] = context[18];
        context[23] = context[19];
        context[24] = context[16];
        context[25] = context[17];
        if( ! refalrts::ident_term( identifiers[ident_CmdNativeFunction], context[11] ) )
          continue;
        // closed e.Name#1 as range 22
        context[27] = refalrts::tvar_left( context[26], context[24], context[25] );
        if( ! context[27] )
          continue;
        // closed e.Code#1 as range 24
        //DEBUG: s.Hash1#1: 9
        //DEBUG: s.Hash2#1: 10
        //DEBUG: s.ScopeClass#1: 12
        //DEBUG: e.Name#1: 22
        //DEBUG: t.SrcPos#1: 26
        //DEBUG: e.Code#1: 24

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # CmdNativeFunction/4 } Tile{ AsIs: (/20 } Tile{ HalfReuse: </1 } Tile{ HalfReuse: & MingleName/11 AsIs: s.ScopeClass#1/12 } Tile{ AsIs: e.Name#1/22 } Tile{ AsIs: s.Hash1#1/9 AsIs: s.Hash2#1/10 HalfReuse: >/7 } Tile{ AsIs: )/21 AsIs: t.SrcPos#1/26 AsIs: e.Code#1/24 AsIs: )/8 } Tile{ ]] }
        refalrts::reinit_open_bracket(context[0]);
        refalrts::reinit_ident(context[4], identifiers[ident_CmdNativeFunction]);
        refalrts::reinit_open_call(context[1]);
        refalrts::reinit_name(context[11], functions[efunc_MingleName]);
        refalrts::reinit_close_call(context[7]);
        refalrts::link_brackets( context[0], context[8] );
        refalrts::link_brackets( context[20], context[21] );
        refalrts::push_stack( vm, context[7] );
        refalrts::push_stack( vm, context[1] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[21], context[8] );
        res = refalrts::splice_evar( res, context[9], context[7] );
        res = refalrts::splice_evar( res, context[22], context[23] );
        res = refalrts::splice_evar( res, context[11], context[12] );
        res = refalrts::splice_evar( res, context[1], context[1] );
        res = refalrts::splice_evar( res, context[20], context[20] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & SetCookies/4 s.Hash1#1/9 s.Hash2#1/10 (/7 # CmdMetatable/11 s.ScopeClass#1/12 (/20 e.Name#1/22 )/21 e.Metatable#1/24 )/8 >/1
      context[22] = context[18];
      context[23] = context[19];
      context[24] = context[16];
      context[25] = context[17];
      if( ! refalrts::ident_term( identifiers[ident_CmdMetatable], context[11] ) )
        continue;
      // closed e.Name#1 as range 22
      // closed e.Metatable#1 as range 24
      //DEBUG: s.Hash1#1: 9
      //DEBUG: s.Hash2#1: 10
      //DEBUG: s.ScopeClass#1: 12
      //DEBUG: e.Name#1: 22
      //DEBUG: e.Metatable#1: 24

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & SetCookies/4 s.Hash1#1/9 s.Hash2#1/10 (/7 # CmdMetatable/11 s.ScopeClass#1/12 (/20 e.Name#1/22 )/21 e.Metatable#1/24 )/8 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ ]] }
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & SetCookies/4 s.Hash1#1/9 s.Hash2#1/10 (/7 # CmdEnum/11 s.ScopeClass#1/12 e.Name#1/16 )/8 >/1
      context[16] = context[14];
      context[17] = context[15];
      if( ! refalrts::ident_term( identifiers[ident_CmdEnum], context[11] ) )
        continue;
      // closed e.Name#1 as range 16
      //DEBUG: s.Hash1#1: 9
      //DEBUG: s.Hash2#1: 10
      //DEBUG: s.ScopeClass#1: 12
      //DEBUG: e.Name#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & SetCookies/4 s.Hash1#1/9 s.Hash2#1/10 (/7 # CmdEnum/11 s.ScopeClass#1/12 e.Name#1/16 )/8 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ ]] }
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & SetCookies/4 s.Hash1#1/9 s.Hash2#1/10 (/7 # CmdSwap/11 s.ScopeClass#1/12 e.Name#1/16 )/8 >/1
      context[16] = context[14];
      context[17] = context[15];
      if( ! refalrts::ident_term( identifiers[ident_CmdSwap], context[11] ) )
        continue;
      // closed e.Name#1 as range 16
      //DEBUG: s.Hash1#1: 9
      //DEBUG: s.Hash2#1: 10
      //DEBUG: s.ScopeClass#1: 12
      //DEBUG: e.Name#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & SetCookies/4 s.Hash1#1/9 s.Hash2#1/10 (/7 # CmdSwap/11 s.ScopeClass#1/12 e.Name#1/16 )/8 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ ]] }
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & SetCookies/4 s.Hash1#1/9 s.Hash2#1/10 (/7 # CmdConditionFunc-ToRASL/11 s.ScopeClass#1/12 e.Name#1/16 )/8 >/1
      context[16] = context[14];
      context[17] = context[15];
      if( ! refalrts::ident_term( identifiers[ident_CmdConditionFuncm_ToRASL], context[11] ) )
        continue;
      // closed e.Name#1 as range 16
      //DEBUG: s.Hash1#1: 9
      //DEBUG: s.Hash2#1: 10
      //DEBUG: s.ScopeClass#1: 12
      //DEBUG: e.Name#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & SetCookies/4 s.Hash1#1/9 s.Hash2#1/10 (/7 # CmdConditionFunc-ToRASL/11 s.ScopeClass#1/12 e.Name#1/16 )/8 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ ]] }
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & SetCookies/4 s.Hash1#1/9 s.Hash2#1/10 (/7 # CmdConditionFunc-ToNative/11 s.ScopeClass#1/12 e.Name#1/16 )/8 >/1
      context[16] = context[14];
      context[17] = context[15];
      if( ! refalrts::ident_term( identifiers[ident_CmdConditionFuncm_ToNative], context[11] ) )
        continue;
      // closed e.Name#1 as range 16
      //DEBUG: s.Hash1#1: 9
      //DEBUG: s.Hash2#1: 10
      //DEBUG: s.ScopeClass#1: 12
      //DEBUG: e.Name#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & SetCookies/4 s.Hash1#1/9 s.Hash2#1/10 (/7 # CmdConditionFunc-ToNative/11 s.ScopeClass#1/12 e.Name#1/16 )/8 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ ]] }
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & SetCookies/4 s.Hash1#1/9 s.Hash2#1/10 (/7 # CmdDeclaration/11 s.ScopeClass#1/12 e.Name#1/16 )/8 >/1
    context[16] = context[14];
    context[17] = context[15];
    if( ! refalrts::ident_term( identifiers[ident_CmdDeclaration], context[11] ) )
      continue;
    // closed e.Name#1 as range 16
    //DEBUG: s.Hash1#1: 9
    //DEBUG: s.Hash2#1: 10
    //DEBUG: s.ScopeClass#1: 12
    //DEBUG: e.Name#1: 16

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & SetCookies/4 s.Hash1#1/9 s.Hash2#1/10 (/7 # CmdDeclaration/11 s.ScopeClass#1/12 e.Name#1/16 )/8 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & SetCookies/4 s.Hash1#1/9 s.Hash2#1/10 (/7 # CmdEmitNativeCode/11 t.SrcPos#1/12 e.Code#1/5 )/8 >/1
  if( ! refalrts::ident_term( identifiers[ident_CmdEmitNativeCode], context[11] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Code#1 as range 5
  //DEBUG: t.SrcPos#1: 12
  //DEBUG: s.Hash1#1: 9
  //DEBUG: s.Hash2#1: 10
  //DEBUG: e.Code#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & SetCookies/4 s.Hash1#1/9 s.Hash2#1/10 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # CmdEmitNativeCode/11 AsIs: t.SrcPos#1/12 AsIs: e.Code#1/5 AsIs: )/8 } Tile{ ]] }
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_SetCookies("SetCookies", COOKIE1_, COOKIE2_, func_SetCookies);


static refalrts::FnResult func_MingleName(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  // </0 & MingleName/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & MingleName/4 s.new#1/5 e.new#2/2 s.new#3/7 s.new#4/6 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_right( context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_right( context[7], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 2
  do {
    // </0 & MingleName/4 # GN-Entry/5 e.Name#1/8 s.Hash1#1/7 s.Hash2#1/6 >/1
    context[8] = context[2];
    context[9] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_GNm_Entry], context[5] ) )
      continue;
    // closed e.Name#1 as range 8
    //DEBUG: s.Hash1#1: 7
    //DEBUG: s.Hash2#1: 6
    //DEBUG: e.Name#1: 8

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Hash1#1/7 s.Hash2#1/6 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: e.Name#1/8 } Tile{ Reuse: # Hash/5 } Tile{ HalfReuse: 0/4 } Tile{ HalfReuse: 0/1 ]] }
    refalrts::update_ident(context[5], identifiers[ident_Hash]);
    refalrts::reinit_number(context[4], 0UL);
    refalrts::reinit_number(context[1], 0UL);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[4], context[4] );
    res = refalrts::splice_evar( res, context[5], context[5] );
    res = refalrts::splice_evar( res, context[8], context[9] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & MingleName/4 # GN-Local/5 e.Name#1/2 s.Hash1#1/7 s.Hash2#1/6 >/1
  if( ! refalrts::ident_term( identifiers[ident_GNm_Local], context[5] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Name#1 as range 2
  //DEBUG: s.Hash1#1: 7
  //DEBUG: s.Hash2#1: 6
  //DEBUG: e.Name#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & MingleName/4 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Name#1/2 } Tile{ Reuse: # Hash/5 } Tile{ AsIs: s.Hash1#1/7 AsIs: s.Hash2#1/6 } Tile{ ]] }
  refalrts::update_ident(context[5], identifiers[ident_Hash]);
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[6] );
  res = refalrts::splice_evar( res, context[5], context[5] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_MingleName("MingleName", COOKIE1_, COOKIE2_, func_MingleName);


static refalrts::FnResult func_PrepareFunctionsRASL(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 32 elems
  refalrts::Iter context[32];
  refalrts::zeros( context, 32 );
  // </0 & PrepareFunctionsRASL/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & PrepareFunctionsRASL/4 (/7 s.new#1/9 t.new#2/10 e.new#3/5 )/8 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[9], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  context[11] = refalrts::tvar_left( context[10], context[5], context[6] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#3 as range 5
  do {
    // </0 & PrepareFunctionsRASL/4 (/7 s.new#4/9 (/10 e.new#5/14 )/11 e.new#6/12 )/8 >/1
    context[12] = context[5];
    context[13] = context[6];
    context[14] = 0;
    context[15] = 0;
    if( ! refalrts::brackets_term( context[14], context[15], context[10] ) )
      continue;
    // closed e.new#5 as range 14
    // closed e.new#6 as range 12
    do {
      // </0 & PrepareFunctionsRASL/4 (/7 # Function-ToNative/9 (/10 e.Name#1/16 )/11 e.Body#1/18 )/8 >/1
      context[16] = context[14];
      context[17] = context[15];
      context[18] = context[12];
      context[19] = context[13];
      if( ! refalrts::ident_term( identifiers[ident_Functionm_ToNative], context[9] ) )
        continue;
      // closed e.Name#1 as range 16
      // closed e.Body#1 as range 18
      //DEBUG: e.Name#1: 16
      //DEBUG: e.Body#1: 18

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } (/20 # CmdFnStart/21 e.Name#1/16/22 Tile{ AsIs: )/8 HalfReuse: (/1 } # CmdProfileFunction/24 )/25 (/26 # CmdLoadConstants/27 )/28 </29 & ConvertDirectCommands/30 Tile{ AsIs: e.Body#1/18 } >/31 Tile{ HalfReuse: (/0 HalfReuse: # CmdFnEnd/4 HalfReuse: )/7 HalfReuse: (/9 HalfReuse: # CmdNativeFuncDescr/10 AsIs: e.Name#1/16 AsIs: )/11 } Tile{ ]] }
      refalrts::alloc_open_bracket(vm, context[20]);
      refalrts::alloc_ident(vm, context[21], identifiers[ident_CmdFnStart]);
      refalrts::copy_evar(vm, context[22], context[23], context[16], context[17]);
      refalrts::alloc_ident(vm, context[24], identifiers[ident_CmdProfileFunction]);
      refalrts::alloc_close_bracket(vm, context[25]);
      refalrts::alloc_open_bracket(vm, context[26]);
      refalrts::alloc_ident(vm, context[27], identifiers[ident_CmdLoadConstants]);
      refalrts::alloc_close_bracket(vm, context[28]);
      refalrts::alloc_open_call(vm, context[29]);
      refalrts::alloc_name(vm, context[30], functions[efunc_ConvertDirectCommands]);
      refalrts::alloc_close_call(vm, context[31]);
      refalrts::reinit_open_bracket(context[1]);
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_ident(context[4], identifiers[ident_CmdFnEnd]);
      refalrts::reinit_close_bracket(context[7]);
      refalrts::reinit_open_bracket(context[9]);
      refalrts::reinit_ident(context[10], identifiers[ident_CmdNativeFuncDescr]);
      refalrts::link_brackets( context[9], context[11] );
      refalrts::link_brackets( context[0], context[7] );
      refalrts::push_stack( vm, context[31] );
      refalrts::push_stack( vm, context[29] );
      refalrts::link_brackets( context[26], context[28] );
      refalrts::link_brackets( context[1], context[25] );
      refalrts::link_brackets( context[20], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[0], context[11] );
      res = refalrts::splice_evar( res, context[31], context[31] );
      res = refalrts::splice_evar( res, context[18], context[19] );
      res = refalrts::splice_evar( res, context[24], context[30] );
      res = refalrts::splice_evar( res, context[8], context[1] );
      res = refalrts::splice_evar( res, context[22], context[23] );
      res = refalrts::splice_evar( res, context[20], context[21] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & PrepareFunctionsRASL/4 (/7 # CmdNativeFunction/9 (/10 e.Name#1/16 )/11 t.SrcPos#1/20 e.Code#1/18 )/8 >/1
    context[16] = context[14];
    context[17] = context[15];
    context[18] = context[12];
    context[19] = context[13];
    if( ! refalrts::ident_term( identifiers[ident_CmdNativeFunction], context[9] ) )
      continue;
    // closed e.Name#1 as range 16
    context[21] = refalrts::tvar_left( context[20], context[18], context[19] );
    if( ! context[21] )
      continue;
    // closed e.Code#1 as range 18
    //DEBUG: e.Name#1: 16
    //DEBUG: t.SrcPos#1: 20
    //DEBUG: e.Code#1: 18

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 } # CmdFnStart/22 Tile{ AsIs: e.Name#1/16 } Tile{ HalfReuse: )/4 AsIs: (/7 Reuse: # CmdLoadConstants/9 HalfReuse: )/10 } (/23 Tile{ HalfReuse: # CmdEmitNativeCode/11 AsIs: t.SrcPos#1/20 AsIs: e.Code#1/18 AsIs: )/8 HalfReuse: (/1 } # CmdFnEnd/24 )/25 (/26 # CmdNativeFuncDescr/27 e.Name#1/16/28 )/30 Tile{ ]] }
    refalrts::alloc_ident(vm, context[22], identifiers[ident_CmdFnStart]);
    refalrts::alloc_open_bracket(vm, context[23]);
    refalrts::alloc_ident(vm, context[24], identifiers[ident_CmdFnEnd]);
    refalrts::alloc_close_bracket(vm, context[25]);
    refalrts::alloc_open_bracket(vm, context[26]);
    refalrts::alloc_ident(vm, context[27], identifiers[ident_CmdNativeFuncDescr]);
    refalrts::copy_evar(vm, context[28], context[29], context[16], context[17]);
    refalrts::alloc_close_bracket(vm, context[30]);
    refalrts::reinit_open_bracket(context[0]);
    refalrts::reinit_close_bracket(context[4]);
    refalrts::update_ident(context[9], identifiers[ident_CmdLoadConstants]);
    refalrts::reinit_close_bracket(context[10]);
    refalrts::reinit_ident(context[11], identifiers[ident_CmdEmitNativeCode]);
    refalrts::reinit_open_bracket(context[1]);
    refalrts::link_brackets( context[26], context[30] );
    refalrts::link_brackets( context[1], context[25] );
    refalrts::link_brackets( context[23], context[8] );
    refalrts::link_brackets( context[7], context[10] );
    refalrts::link_brackets( context[0], context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[24], context[30] );
    res = refalrts::splice_evar( res, context[11], context[1] );
    res = refalrts::splice_evar( res, context[23], context[23] );
    res = refalrts::splice_evar( res, context[4], context[10] );
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_evar( res, context[22], context[22] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & PrepareFunctionsRASL/4 (/7 # CmdEmitNativeCode/9 t.SrcPos#1/10 e.Code#1/5 )/8 >/1
  if( ! refalrts::ident_term( identifiers[ident_CmdEmitNativeCode], context[9] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Code#1 as range 5
  //DEBUG: t.SrcPos#1: 10
  //DEBUG: e.Code#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & PrepareFunctionsRASL/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # CmdEmitNativeCode/9 AsIs: t.SrcPos#1/10 AsIs: e.Code#1/5 AsIs: )/8 } Tile{ ]] }
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_PrepareFunctionsRASL("PrepareFunctionsRASL", COOKIE1_, COOKIE2_, func_PrepareFunctionsRASL);


static refalrts::FnResult func_ConvertDirectCommands(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 41 elems
  refalrts::Iter context[41];
  refalrts::zeros( context, 41 );
  // </0 & ConvertDirectCommands/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & ConvertDirectCommands/4 t.new#1/7 e.new#2/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[8] = refalrts::tvar_left( context[7], context[5], context[6] );
    if( ! context[8] )
      continue;
    // closed e.new#2 as range 5
    do {
      // </0 & ConvertDirectCommands/4 (/7 s.new#3/13 e.new#4/11 )/8 e.new#5/9 >/1
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
        // </0 & ConvertDirectCommands/4 (/7 # CmdSentence/13 e.SubCommands#1/14 )/8 e.Tail#1/16 >/1
        context[14] = context[11];
        context[15] = context[12];
        context[16] = context[9];
        context[17] = context[10];
        if( ! refalrts::ident_term( identifiers[ident_CmdSentence], context[13] ) )
          continue;
        // closed e.SubCommands#1 as range 14
        // closed e.Tail#1 as range 16
        //DEBUG: e.SubCommands#1: 14
        //DEBUG: e.Tail#1: 16

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # CmdStartSentence/4 HalfReuse: )/7 HalfReuse: </13 } & ConvertDirectCommands/18 Tile{ AsIs: e.SubCommands#1/14 } >/19 (/20 # CmdEndSentence/21 )/22 </23 Tile{ HalfReuse: & ConvertDirectCommands/8 AsIs: e.Tail#1/16 AsIs: >/1 ]] }
        refalrts::alloc_name(vm, context[18], functions[efunc_ConvertDirectCommands]);
        refalrts::alloc_close_call(vm, context[19]);
        refalrts::alloc_open_bracket(vm, context[20]);
        refalrts::alloc_ident(vm, context[21], identifiers[ident_CmdEndSentence]);
        refalrts::alloc_close_bracket(vm, context[22]);
        refalrts::alloc_open_call(vm, context[23]);
        refalrts::reinit_open_bracket(context[0]);
        refalrts::reinit_ident(context[4], identifiers[ident_CmdStartSentence]);
        refalrts::reinit_close_bracket(context[7]);
        refalrts::reinit_open_call(context[13]);
        refalrts::reinit_name(context[8], functions[efunc_ConvertDirectCommands]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[23] );
        refalrts::link_brackets( context[20], context[22] );
        refalrts::push_stack( vm, context[19] );
        refalrts::push_stack( vm, context[13] );
        refalrts::link_brackets( context[0], context[7] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[8];
        res = refalrts::splice_evar( res, context[19], context[23] );
        res = refalrts::splice_evar( res, context[14], context[15] );
        res = refalrts::splice_evar( res, context[18], context[18] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & ConvertDirectCommands/4 (/7 s.new#6/13 s.new#7/18 e.new#8/14 )/8 e.new#9/16 >/1
      context[14] = context[11];
      context[15] = context[12];
      context[16] = context[9];
      context[17] = context[10];
      // closed e.new#9 as range 16
      if( ! refalrts::svar_left( context[18], context[14], context[15] ) )
        continue;
      // closed e.new#8 as range 14
      do {
        // </0 & ConvertDirectCommands/4 (/7 # CmdOpenELoop/13 # AlgLeft/18 s.BracketNum#1/23 s.VarNumber#1/24 e.SubCommands#1/19 )/8 e.Tail#1/21 >/1
        context[19] = context[14];
        context[20] = context[15];
        context[21] = context[16];
        context[22] = context[17];
        if( ! refalrts::ident_term( identifiers[ident_CmdOpenELoop], context[13] ) )
          continue;
        if( ! refalrts::ident_term( identifiers[ident_AlgLeft], context[18] ) )
          continue;
        // closed e.Tail#1 as range 21
        if( ! refalrts::svar_left( context[23], context[19], context[20] ) )
          continue;
        if( ! refalrts::svar_left( context[24], context[19], context[20] ) )
          continue;
        // closed e.SubCommands#1 as range 19
        //DEBUG: e.Tail#1: 21
        //DEBUG: s.BracketNum#1: 23
        //DEBUG: s.VarNumber#1: 24
        //DEBUG: e.SubCommands#1: 19

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ HalfReuse: (/0 } # CmdOpenedE-Start/25 # AlgLeft/26 s.BracketNum#1/23/27 s.VarNumber#1/24/28 )/29 </30 & ConvertDirectCommands/31 Tile{ AsIs: e.SubCommands#1/19 } Tile{ HalfReuse: >/4 AsIs: (/7 Reuse: # CmdOpenedE-End/13 AsIs: # AlgLeft/18 AsIs: s.BracketNum#1/23 AsIs: s.VarNumber#1/24 } )/32 </33 Tile{ HalfReuse: & ConvertDirectCommands/8 AsIs: e.Tail#1/21 AsIs: >/1 ]] }
        refalrts::alloc_ident(vm, context[25], identifiers[ident_CmdOpenedEm_Start]);
        refalrts::alloc_ident(vm, context[26], identifiers[ident_AlgLeft]);
        refalrts::copy_stvar(vm, context[27], context[23]);
        refalrts::copy_stvar(vm, context[28], context[24]);
        refalrts::alloc_close_bracket(vm, context[29]);
        refalrts::alloc_open_call(vm, context[30]);
        refalrts::alloc_name(vm, context[31], functions[efunc_ConvertDirectCommands]);
        refalrts::alloc_close_bracket(vm, context[32]);
        refalrts::alloc_open_call(vm, context[33]);
        refalrts::reinit_open_bracket(context[0]);
        refalrts::reinit_close_call(context[4]);
        refalrts::update_ident(context[13], identifiers[ident_CmdOpenedEm_End]);
        refalrts::reinit_name(context[8], functions[efunc_ConvertDirectCommands]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[33] );
        refalrts::link_brackets( context[7], context[32] );
        refalrts::push_stack( vm, context[4] );
        refalrts::push_stack( vm, context[30] );
        refalrts::link_brackets( context[0], context[29] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[8];
        res = refalrts::splice_evar( res, context[32], context[33] );
        res = refalrts::splice_evar( res, context[4], context[24] );
        res = refalrts::splice_evar( res, context[19], context[20] );
        res = refalrts::splice_evar( res, context[25], context[31] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & ConvertDirectCommands/4 (/7 # CmdVariableDebugTable/13 s.Mode#1/18 e.Index#1/19 s.Depth#1/24 s.Offset#1/23 )/8 e.Tail#1/21 >/1
      context[19] = context[14];
      context[20] = context[15];
      context[21] = context[16];
      context[22] = context[17];
      if( ! refalrts::ident_term( identifiers[ident_CmdVariableDebugTable], context[13] ) )
        continue;
      // closed e.Tail#1 as range 21
      if( ! refalrts::svar_right( context[23], context[19], context[20] ) )
        continue;
      if( ! refalrts::svar_right( context[24], context[19], context[20] ) )
        continue;
      // closed e.Index#1 as range 19
      //DEBUG: s.Mode#1: 18
      //DEBUG: e.Tail#1: 21
      //DEBUG: s.Offset#1: 23
      //DEBUG: s.Depth#1: 24
      //DEBUG: e.Index#1: 19

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } (/25 # CmdComment/26"DEB"/27 Tile{ HalfReuse: 'U'/0 HalfReuse: 'G'/4 HalfReuse: ':'/7 HalfReuse: ' '/13 AsIs: s.Mode#1/18 } '.'/29 Tile{ AsIs: e.Index#1/19 } '#'/30 </31 & Symb/32 Tile{ AsIs: s.Depth#1/24 } >/33": "/34 </36 & Symb/37 Tile{ AsIs: s.Offset#1/23 } >/38 )/39 </40 Tile{ HalfReuse: & ConvertDirectCommands/8 AsIs: e.Tail#1/21 AsIs: >/1 ]] }
      refalrts::alloc_open_bracket(vm, context[25]);
      refalrts::alloc_ident(vm, context[26], identifiers[ident_CmdComment]);
      refalrts::alloc_chars(vm, context[27], context[28], "DEB", 3);
      refalrts::alloc_char(vm, context[29], '.');
      refalrts::alloc_char(vm, context[30], '#');
      refalrts::alloc_open_call(vm, context[31]);
      refalrts::alloc_name(vm, context[32], functions[efunc_Symb]);
      refalrts::alloc_close_call(vm, context[33]);
      refalrts::alloc_chars(vm, context[34], context[35], ": ", 2);
      refalrts::alloc_open_call(vm, context[36]);
      refalrts::alloc_name(vm, context[37], functions[efunc_Symb]);
      refalrts::alloc_close_call(vm, context[38]);
      refalrts::alloc_close_bracket(vm, context[39]);
      refalrts::alloc_open_call(vm, context[40]);
      refalrts::reinit_char(context[0], 'U');
      refalrts::reinit_char(context[4], 'G');
      refalrts::reinit_char(context[7], ':');
      refalrts::reinit_char(context[13], ' ');
      refalrts::reinit_name(context[8], functions[efunc_ConvertDirectCommands]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[40] );
      refalrts::link_brackets( context[25], context[39] );
      refalrts::push_stack( vm, context[38] );
      refalrts::push_stack( vm, context[36] );
      refalrts::push_stack( vm, context[33] );
      refalrts::push_stack( vm, context[31] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[38], context[40] );
      res = refalrts::splice_evar( res, context[23], context[23] );
      res = refalrts::splice_evar( res, context[33], context[37] );
      res = refalrts::splice_evar( res, context[24], context[24] );
      res = refalrts::splice_evar( res, context[30], context[32] );
      res = refalrts::splice_evar( res, context[19], context[20] );
      res = refalrts::splice_evar( res, context[29], context[29] );
      res = refalrts::splice_evar( res, context[0], context[18] );
      res = refalrts::splice_evar( res, context[25], context[28] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & ConvertDirectCommands/4 t.Command#1/7 e.Tail#1/9 >/1
    context[9] = context[5];
    context[10] = context[6];
    // closed e.Tail#1 as range 9
    //DEBUG: t.Command#1: 7
    //DEBUG: e.Tail#1: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: t.Command#1/7 } Tile{ AsIs: </0 AsIs: & ConvertDirectCommands/4 } Tile{ AsIs: e.Tail#1/9 } Tile{ AsIs: >/1 ]] }
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

  // </0 & ConvertDirectCommands/4 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & ConvertDirectCommands/4 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ConvertDirectCommands("ConvertDirectCommands", COOKIE1_, COOKIE2_, func_ConvertDirectCommands);


static refalrts::FnResult func_gen_Map_Z1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  // </0 & Map@1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & Map@1/4 t.Next#1/7 e.Tail#1/5 >/1
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
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & PrepareFunctionsRASL/4 AsIs: t.Next#1/7 } >/9 </10 & Map@1/11 Tile{ AsIs: e.Tail#1/5 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_close_call(vm, context[9]);
    refalrts::alloc_open_call(vm, context[10]);
    refalrts::alloc_name(vm, context[11], functions[efunc_gen_Map_Z1]);
    refalrts::update_name(context[4], functions[efunc_PrepareFunctionsRASL]);
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

  // </0 & Map@1/4 e.items#0/2 >/1
  // closed e.items#0 as range 2
  //DEBUG: e.items#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Map@0/0 Reuse: & PrepareFunctionsRASL/4 AsIs: e.items#0/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::reinit_name(context[0], functions[efunc_gen_Map_Z0]);
  refalrts::update_name(context[4], functions[efunc_PrepareFunctionsRASL]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[5] );
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
  // </0 & Map@2/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Map@2/4 s.new#1/5 s.new#2/6 e.new#3/2 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#3 as range 2
  do {
    // </0 & Map@2/4 s.Hash1#1/5 s.Hash2#1/6 t.Next#1/9 e.Tail#1/7 >/1
    context[7] = context[2];
    context[8] = context[3];
    context[10] = refalrts::tvar_left( context[9], context[7], context[8] );
    if( ! context[10] )
      continue;
    // closed e.Tail#1 as range 7
    //DEBUG: s.Hash1#1: 5
    //DEBUG: s.Hash2#1: 6
    //DEBUG: t.Next#1: 9
    //DEBUG: e.Tail#1: 7

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & SetCookies/4 AsIs: s.Hash1#1/5 AsIs: s.Hash2#1/6 AsIs: t.Next#1/9 } >/11 </12 & Map@2/13 s.Hash1#1/5/14 s.Hash2#1/6/15 Tile{ AsIs: e.Tail#1/7 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_close_call(vm, context[11]);
    refalrts::alloc_open_call(vm, context[12]);
    refalrts::alloc_name(vm, context[13], functions[efunc_gen_Map_Z2]);
    refalrts::copy_stvar(vm, context[14], context[5]);
    refalrts::copy_stvar(vm, context[15], context[6]);
    refalrts::update_name(context[4], functions[efunc_SetCookies]);
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

  do {
    // </0 & Map@2/4 s.Hash1#1/5 s.Hash2#1/6 >/1
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    //DEBUG: s.Hash1#1: 5
    //DEBUG: s.Hash2#1: 6

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Map@2/4 s.Hash1#1/5 s.Hash2#1/6 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Map@2/4 s.Hash1#1/5 s.Hash2#1/6 e.items#0/2 >/1
  // closed e.items#0 as range 2
  //DEBUG: s.Hash1#1: 5
  //DEBUG: s.Hash2#1: 6
  //DEBUG: e.items#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </7 & Map@0/8 Tile{ HalfReuse: (/0 Reuse: & SetCookies/4 AsIs: s.Hash1#1/5 AsIs: s.Hash2#1/6 } )/9 Tile{ AsIs: e.items#0/2 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[7]);
  refalrts::alloc_name(vm, context[8], functions[efunc_gen_Map_Z0]);
  refalrts::alloc_close_bracket(vm, context[9]);
  refalrts::reinit_open_bracket(context[0]);
  refalrts::update_name(context[4], functions[efunc_SetCookies]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[7] );
  refalrts::link_brackets( context[0], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[9], context[9] );
  res = refalrts::splice_evar( res, context[0], context[6] );
  res = refalrts::splice_evar( res, context[7], context[8] );
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
  // issue here memory for vars with 27 elems
  refalrts::Iter context[27];
  refalrts::zeros( context, 27 );
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
    // </0 & Map@3/4 e.new#3/9 (/7 t.new#4/13 e.new#5/11 )/8 >/1
    context[9] = context[2];
    context[10] = context[3];
    context[11] = context[5];
    context[12] = context[6];
    // closed e.new#3 as range 9
    context[14] = refalrts::tvar_left( context[13], context[11], context[12] );
    if( ! context[14] )
      continue;
    // closed e.new#5 as range 11
    do {
      // </0 & Map@3/4 e.Prefix#1/15 (/7 (/13 s.Id#2/21 e.0#0/19 )/14 e.Tail#1/17 )/8 >/1
      context[15] = context[9];
      context[16] = context[10];
      context[17] = context[11];
      context[18] = context[12];
      context[19] = 0;
      context[20] = 0;
      if( ! refalrts::brackets_term( context[19], context[20], context[13] ) )
        continue;
      // closed e.Prefix#1 as range 15
      // closed e.Tail#1 as range 17
      if( ! refalrts::svar_left( context[21], context[19], context[20] ) )
        continue;
      // closed e.0#0 as range 19
      //DEBUG: e.Prefix#1: 15
      //DEBUG: e.Tail#1: 17
      //DEBUG: s.Id#2: 21
      //DEBUG: e.0#0: 19

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/13 } Tile{ HalfReuse: # CmdCEnum-Item/0 HalfReuse: (/4 AsIs: e.Prefix#1/15 HalfReuse: )/7 } Tile{ AsIs: e.0#0/19 } Tile{ AsIs: s.Id#2/21 } )/22 </23 & Map@3/24 e.Prefix#1/15/25 Tile{ HalfReuse: (/14 AsIs: e.Tail#1/17 AsIs: )/8 AsIs: >/1 ]] }
      refalrts::alloc_close_bracket(vm, context[22]);
      refalrts::alloc_open_call(vm, context[23]);
      refalrts::alloc_name(vm, context[24], functions[efunc_gen_Map_Z3]);
      refalrts::copy_evar(vm, context[25], context[26], context[15], context[16]);
      refalrts::reinit_ident(context[0], identifiers[ident_CmdCEnumm_Item]);
      refalrts::reinit_open_bracket(context[4]);
      refalrts::reinit_close_bracket(context[7]);
      refalrts::reinit_open_bracket(context[14]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[23] );
      refalrts::link_brackets( context[14], context[8] );
      refalrts::link_brackets( context[13], context[22] );
      refalrts::link_brackets( context[4], context[7] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[14];
      res = refalrts::splice_evar( res, context[25], context[26] );
      res = refalrts::splice_evar( res, context[22], context[24] );
      res = refalrts::splice_evar( res, context[21], context[21] );
      res = refalrts::splice_evar( res, context[19], context[20] );
      res = refalrts::splice_evar( res, context[0], context[7] );
      res = refalrts::splice_evar( res, context[13], context[13] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Map@3/4 e.Prefix#1/15 (/7 t.Next#1/13 e.Tail#1/17 )/8 >/1
    context[15] = context[9];
    context[16] = context[10];
    context[17] = context[11];
    context[18] = context[12];
    // closed e.Prefix#1 as range 15
    // closed e.Tail#1 as range 17
    //DEBUG: t.Next#1: 13
    //DEBUG: e.Prefix#1: 15
    //DEBUG: e.Tail#1: 17

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </19 & PrepareTable$2\1*1/20 (/21 e.Prefix#1/15/22 )/24 Tile{ AsIs: t.Next#1/13 } >/25 Tile{ AsIs: </0 AsIs: & Map@3/4 AsIs: e.Prefix#1/15 AsIs: (/7 } Tile{ AsIs: e.Tail#1/17 } Tile{ AsIs: )/8 AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[19]);
    refalrts::alloc_name(vm, context[20], functions[efunc_gen_PrepareTable_S2L1D1]);
    refalrts::alloc_open_bracket(vm, context[21]);
    refalrts::copy_evar(vm, context[22], context[23], context[15], context[16]);
    refalrts::alloc_close_bracket(vm, context[24]);
    refalrts::alloc_close_call(vm, context[25]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::push_stack( vm, context[25] );
    refalrts::push_stack( vm, context[19] );
    refalrts::link_brackets( context[21], context[24] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[0], context[7] );
    res = refalrts::splice_evar( res, context[25], context[25] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[19], context[24] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Map@3/4 e.Prefix#1/9 (/7 )/8 >/1
    context[9] = context[2];
    context[10] = context[3];
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    // closed e.Prefix#1 as range 9
    //DEBUG: e.Prefix#1: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Map@3/4 e.Prefix#1/9 (/7 )/8 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Map@3/4 e.Prefix#1/2 (/7 e.items#0/5 )/8 >/1
  // closed e.Prefix#1 as range 2
  // closed e.items#0 as range 5
  //DEBUG: e.Prefix#1: 2
  //DEBUG: e.items#0: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map@0/4 } [*]/9 & PrepareTable$2\1/10 Tile{ AsIs: (/7 } Tile{ AsIs: e.Prefix#1/2 } Tile{ AsIs: )/8 } {*}/11 Tile{ AsIs: e.items#0/5 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_closure_head(vm, context[9]);
  refalrts::alloc_name(vm, context[10], functions[efunc_gen_PrepareTable_S2L1]);
  refalrts::alloc_unwrapped_closure(vm, context[11], context[9]);
  refalrts::update_name(context[4], functions[efunc_gen_Map_Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::use( res );
  refalrts::wrap_closure( context[11] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Map_Z3("Map@3", COOKIE1_, COOKIE2_, func_gen_Map_Z3);


//End of file
