// This file automatically generated from 'LowLevelRASL-Native.ref'
// Don't edit! Edit 'LowLevelRASL-Native.ref' and recompile it

#include "refalrts.h"

#define cookie_ns cookie_ns_551473792_1723699915
#define COOKIE1_ 551473792U
#define COOKIE2_ 1723699915U

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
  efunc_gen_Map_Z3 = 18,
  efunc_gen_PrepareTable_D2 = 19,
  efunc_gen_Map_Z1 = 20,
  efunc_gen_LowLevelRASLm_Native_B1S2A1 = 21,
  efunc_gen_LowLevelRASLm_Native_B1 = 22,
  efunc_gen_Map_Z2 = 23,
  efunc_gen_MingleName_D2 = 24,
  efunc_ConvertDirectCommands = 25,
  efunc_Symb = 26,
  efunc_Mu = 27,
  efunc_Up = 28,
  efunc_Evm_met = 29,
  efunc_Residue = 30,
  efunc_u_u_Metau_Residue = 31,
  efunc_MapAccum = 32,
  efunc_UnBracket = 33,
  efunc_DelAccumulator = 34,
  efunc_Inc = 35,
  efunc_Dec = 36,
  efunc_LowLevelRASLm_Native = 37,
  efunc_PrepareTable = 38,
  efunc_SetCookies = 39,
  efunc_MingleName = 40,
  efunc_PrepareFunctionsRASL = 41,
  efunc_gen_Apply_Z4 = 42,
  efunc_gen_PrepareFunctionsRASL_D3 = 43,
  efunc_gen_Map_Z0 = 44,
  efunc_gen_PrepareFunctionsRASL_Z0 = 45,
  efunc_gen_SetCookies_D11 = 46,
  efunc_gen_SetCookies_Z0 = 47,
  efunc_gen_PrepareTable_S2L1D1 = 48,
  efunc_gen_PrepareTable_S2L1Z0 = 49,
};


enum ident {
  ident_CmdCookieNS = 0,
  ident_CmdCEnumm_End = 1,
  ident_CmdCEnumm_Start = 2,
  ident_UnitName = 3,
  ident_Functionm_ToRASL = 4,
  ident_Functionm_ToNative = 5,
  ident_GNm_Entry = 6,
  ident_Hash = 7,
  ident_GNm_Local = 8,
  ident_CmdNativeFunction = 9,
  ident_CmdMetatable = 10,
  ident_CmdEnum = 11,
  ident_CmdSwap = 12,
  ident_CmdConditionFuncm_ToRASL = 13,
  ident_CmdConditionFuncm_ToNative = 14,
  ident_CmdDeclaration = 15,
  ident_CmdEmitNativeCode = 16,
  ident_CmdFnStart = 17,
  ident_CmdProfileFunction = 18,
  ident_CmdLoadConstants = 19,
  ident_CmdFnEnd = 20,
  ident_CmdNativeFuncDescr = 21,
  ident_CmdSentence = 22,
  ident_CmdEndSentence = 23,
  ident_CmdStartSentence = 24,
  ident_CmdOpenELoop = 25,
  ident_AlgLeft = 26,
  ident_CmdOpenedEm_Start = 27,
  ident_CmdOpenedEm_End = 28,
  ident_CmdVariableDebugTable = 29,
  ident_CmdComment = 30,
  ident_Mu = 31,
  ident_Up = 32,
  ident_Evm_met = 33,
  ident_Residue = 34,
  ident_u_u_Metau_Residue = 35,
  ident_Apply = 36,
  ident_Map = 37,
  ident_Reduce = 38,
  ident_Fetch = 39,
  ident_MapAccum = 40,
  ident_DoMapAccum = 41,
  ident_UnBracket = 42,
  ident_DelAccumulator = 43,
  ident_Inc = 44,
  ident_Dec = 45,
  ident_Pipe = 46,
  ident_LowLevelRASLm_Native = 47,
  ident_PrepareTable = 48,
  ident_SetCookies = 49,
  ident_MingleName = 50,
  ident_PrepareFunctionsRASL = 51,
  ident_ConvertDirectCommands = 52,
  ident_CmdCEnumm_Item = 53,
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


static refalrts::FnResult func_gen_LowLevelRASLm_Native_B1S2A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 57 elems
  refalrts::Iter context[57];
  refalrts::zeros( context, 57 );
  // </0 & LowLevelRASL-Native:1$2=1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & LowLevelRASL-Native:1$2=1/4 s.new#1/5 s.new#2/6 t.new#3/7 t.new#4/9 e.new#5/2 >/1
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
    // </0 & LowLevelRASL-Native:1$2=1/4 s.new#6/5 s.new#7/6 (/7 s.new#8/15 e.new#9/13 )/8 t.new#10/9 e.new#11/11 >/1
    context[11] = context[2];
    context[12] = context[3];
    context[13] = 0;
    context[14] = 0;
    if( ! refalrts::brackets_term( context[13], context[14], context[7] ) )
      continue;
    // closed e.new#11 as range 11
    if( ! refalrts::svar_left( context[15], context[13], context[14] ) )
      continue;
    // closed e.new#9 as range 13
    do {
      // </0 & LowLevelRASL-Native:1$2=1/4 s.new#12/5 s.new#13/6 (/7 0/15 )/8 t.new#14/9 e.new#15/16 >/1
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::number_term( 0UL, context[15] ) )
        continue;
      if( ! refalrts::empty_seq( context[13], context[14] ) )
        continue;
      // closed e.new#15 as range 16
      do {
        // </0 & LowLevelRASL-Native:1$2=1/4 s.new#16/5 s.new#17/6 (/7 0/15 )/8 (/9 s.new#18/22 e.new#19/20 )/10 e.new#20/18 >/1
        context[18] = context[16];
        context[19] = context[17];
        context[20] = 0;
        context[21] = 0;
        if( ! refalrts::brackets_term( context[20], context[21], context[9] ) )
          continue;
        // closed e.new#20 as range 18
        if( ! refalrts::svar_left( context[22], context[20], context[21] ) )
          continue;
        // closed e.new#19 as range 20
        do {
          // </0 & LowLevelRASL-Native:1$2=1/4 s.Hash1#1/5 s.Hash2#1/6 (/7 0/15 )/8 (/9 0/22 )/10 e.DefinitionsRASL#3/23 >/1
          context[23] = context[18];
          context[24] = context[19];
          if( ! refalrts::number_term( 0UL, context[22] ) )
            continue;
          if( ! refalrts::empty_seq( context[20], context[21] ) )
            continue;
          // closed e.DefinitionsRASL#3 as range 23
          //DEBUG: s.Hash1#1: 5
          //DEBUG: s.Hash2#1: 6
          //DEBUG: e.DefinitionsRASL#3: 23

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} </0 & LowLevelRASL-Native:1$2=1/4 s.Hash1#1/5 s.Hash2#1/6 {REMOVED TILE}
          //RESULT: Tile{ [[ } Tile{ AsIs: (/7 HalfReuse: (/15 HalfReuse: # CmdCookieNS/8 HalfReuse: s.Hash11 #5/9 HalfReuse: s.Hash21 #6/22 AsIs: )/10 AsIs: e.DefinitionsRASL#3/23 HalfReuse: )/1 ]] }
          refalrts::reinit_open_bracket(context[15]);
          refalrts::reinit_ident(context[8], identifiers[ident_CmdCookieNS]);
          refalrts::reinit_svar( context[9], context[5] );
          refalrts::reinit_svar( context[22], context[6] );
          refalrts::reinit_close_bracket(context[1]);
          refalrts::link_brackets( context[7], context[1] );
          refalrts::link_brackets( context[15], context[10] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[7];
          refalrts::splice_to_freelist_open( vm, trash_prev, res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & LowLevelRASL-Native:1$2=1/4 s.Hash1#1/5 s.Hash2#1/6 (/7 0/15 )/8 (/9 s.Count#1/22 e.0#0/23 )/10 e.DefinitionsRASL#3/25 >/1
        context[23] = context[20];
        context[24] = context[21];
        context[25] = context[18];
        context[26] = context[19];
        // closed e.0#0 as range 23
        // closed e.DefinitionsRASL#3 as range 25
        //DEBUG: s.Hash1#1: 5
        //DEBUG: s.Hash2#1: 6
        //DEBUG: s.Count#1: 22
        //DEBUG: e.0#0: 23
        //DEBUG: e.DefinitionsRASL#3: 25

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} s.Count#1/22 {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } (/27 Tile{ HalfReuse: (/0 HalfReuse: # CmdCookieNS/4 AsIs: s.Hash1#1/5 AsIs: s.Hash2#1/6 HalfReuse: )/7 HalfReuse: (/15 HalfReuse: # CmdCEnum-Start/8 HalfReuse: 'i'/9 }"dent"/28 )/30 </31 & Map@3/32 (/33"ident"/34 )/36 Tile{ AsIs: e.0#0/23 } >/37 (/38 # CmdCEnum-End/39 Tile{ AsIs: )/10 AsIs: e.DefinitionsRASL#3/25 HalfReuse: )/1 ]] }
        refalrts::alloc_open_bracket(vm, context[27]);
        refalrts::alloc_chars(vm, context[28], context[29], "dent", 4);
        refalrts::alloc_close_bracket(vm, context[30]);
        refalrts::alloc_open_call(vm, context[31]);
        refalrts::alloc_name(vm, context[32], functions[efunc_gen_Map_Z3]);
        refalrts::alloc_open_bracket(vm, context[33]);
        refalrts::alloc_chars(vm, context[34], context[35], "ident", 5);
        refalrts::alloc_close_bracket(vm, context[36]);
        refalrts::alloc_close_call(vm, context[37]);
        refalrts::alloc_open_bracket(vm, context[38]);
        refalrts::alloc_ident(vm, context[39], identifiers[ident_CmdCEnumm_End]);
        refalrts::reinit_open_bracket(context[0]);
        refalrts::reinit_ident(context[4], identifiers[ident_CmdCookieNS]);
        refalrts::reinit_close_bracket(context[7]);
        refalrts::reinit_open_bracket(context[15]);
        refalrts::reinit_ident(context[8], identifiers[ident_CmdCEnumm_Start]);
        refalrts::reinit_char(context[9], 'i');
        refalrts::reinit_close_bracket(context[1]);
        refalrts::link_brackets( context[27], context[1] );
        refalrts::link_brackets( context[38], context[10] );
        refalrts::push_stack( vm, context[37] );
        refalrts::push_stack( vm, context[31] );
        refalrts::link_brackets( context[33], context[36] );
        refalrts::link_brackets( context[15], context[30] );
        refalrts::link_brackets( context[0], context[7] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[10];
        res = refalrts::splice_evar( res, context[37], context[39] );
        res = refalrts::splice_evar( res, context[23], context[24] );
        res = refalrts::splice_evar( res, context[28], context[36] );
        res = refalrts::splice_evar( res, context[0], context[9] );
        res = refalrts::splice_elem( res, context[27] );
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & LowLevelRASL-Native:1$2=1/4 s.Hash1#1/5 s.Hash2#1/6 (/7 0/15 )/8 t.IdentTable#1/9 e.DefinitionsRASL#3/18 >/1
      context[18] = context[16];
      context[19] = context[17];
      // closed e.DefinitionsRASL#3 as range 18
      //DEBUG: t.IdentTable#1: 9
      //DEBUG: s.Hash1#1: 5
      //DEBUG: s.Hash2#1: 6
      //DEBUG: e.DefinitionsRASL#3: 18

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } (/20 Tile{ HalfReuse: (/0 HalfReuse: # CmdCookieNS/4 AsIs: s.Hash1#1/5 AsIs: s.Hash2#1/6 HalfReuse: )/7 HalfReuse: </15 HalfReuse: & PrepareTable*2/8 }"ident"/21 Tile{ AsIs: t.IdentTable#1/9 } >/23 Tile{ AsIs: e.DefinitionsRASL#3/18 } Tile{ HalfReuse: )/1 ]] }
      refalrts::alloc_open_bracket(vm, context[20]);
      refalrts::alloc_chars(vm, context[21], context[22], "ident", 5);
      refalrts::alloc_close_call(vm, context[23]);
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_ident(context[4], identifiers[ident_CmdCookieNS]);
      refalrts::reinit_close_bracket(context[7]);
      refalrts::reinit_open_call(context[15]);
      refalrts::reinit_name(context[8], functions[efunc_gen_PrepareTable_D2]);
      refalrts::reinit_close_bracket(context[1]);
      refalrts::link_brackets( context[20], context[1] );
      refalrts::push_stack( vm, context[23] );
      refalrts::push_stack( vm, context[15] );
      refalrts::link_brackets( context[0], context[7] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[18], context[19] );
      res = refalrts::splice_elem( res, context[23] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      res = refalrts::splice_evar( res, context[21], context[22] );
      res = refalrts::splice_evar( res, context[0], context[8] );
      res = refalrts::splice_elem( res, context[20] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & LowLevelRASL-Native:1$2=1/4 s.new#12/5 s.new#13/6 (/7 s.new#14/15 e.new#15/16 )/8 (/9 s.new#16/22 e.new#17/20 )/10 e.new#18/18 >/1
      context[16] = context[13];
      context[17] = context[14];
      context[18] = context[11];
      context[19] = context[12];
      context[20] = 0;
      context[21] = 0;
      if( ! refalrts::brackets_term( context[20], context[21], context[9] ) )
        continue;
      // closed e.new#15 as range 16
      // closed e.new#18 as range 18
      if( ! refalrts::svar_left( context[22], context[20], context[21] ) )
        continue;
      // closed e.new#17 as range 20
      do {
        // </0 & LowLevelRASL-Native:1$2=1/4 s.Hash1#1/5 s.Hash2#1/6 (/7 s.Count#1/15 e.0#0/23 )/8 (/9 0/22 )/10 e.DefinitionsRASL#3/25 >/1
        context[23] = context[16];
        context[24] = context[17];
        context[25] = context[18];
        context[26] = context[19];
        if( ! refalrts::number_term( 0UL, context[22] ) )
          continue;
        if( ! refalrts::empty_seq( context[20], context[21] ) )
          continue;
        // closed e.0#0 as range 23
        // closed e.DefinitionsRASL#3 as range 25
        //DEBUG: s.Hash1#1: 5
        //DEBUG: s.Hash2#1: 6
        //DEBUG: s.Count#1: 15
        //DEBUG: e.0#0: 23
        //DEBUG: e.DefinitionsRASL#3: 25

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} s.Count#1/15 {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } (/27 Tile{ HalfReuse: (/0 HalfReuse: # CmdCookieNS/4 AsIs: s.Hash1#1/5 AsIs: s.Hash2#1/6 HalfReuse: )/7 } (/28 # CmdCEnum-Start/29"efunc"/30 )/32 </33 & Map@3/34 (/35"efunc"/36 )/38 Tile{ AsIs: e.0#0/23 } Tile{ HalfReuse: >/8 AsIs: (/9 HalfReuse: # CmdCEnum-End/22 AsIs: )/10 AsIs: e.DefinitionsRASL#3/25 HalfReuse: )/1 ]] }
        refalrts::alloc_open_bracket(vm, context[27]);
        refalrts::alloc_open_bracket(vm, context[28]);
        refalrts::alloc_ident(vm, context[29], identifiers[ident_CmdCEnumm_Start]);
        refalrts::alloc_chars(vm, context[30], context[31], "efunc", 5);
        refalrts::alloc_close_bracket(vm, context[32]);
        refalrts::alloc_open_call(vm, context[33]);
        refalrts::alloc_name(vm, context[34], functions[efunc_gen_Map_Z3]);
        refalrts::alloc_open_bracket(vm, context[35]);
        refalrts::alloc_chars(vm, context[36], context[37], "efunc", 5);
        refalrts::alloc_close_bracket(vm, context[38]);
        refalrts::reinit_open_bracket(context[0]);
        refalrts::reinit_ident(context[4], identifiers[ident_CmdCookieNS]);
        refalrts::reinit_close_bracket(context[7]);
        refalrts::reinit_close_call(context[8]);
        refalrts::reinit_ident(context[22], identifiers[ident_CmdCEnumm_End]);
        refalrts::reinit_close_bracket(context[1]);
        refalrts::link_brackets( context[27], context[1] );
        refalrts::link_brackets( context[9], context[10] );
        refalrts::push_stack( vm, context[8] );
        refalrts::push_stack( vm, context[33] );
        refalrts::link_brackets( context[35], context[38] );
        refalrts::link_brackets( context[28], context[32] );
        refalrts::link_brackets( context[0], context[7] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[8];
        res = refalrts::splice_evar( res, context[23], context[24] );
        res = refalrts::splice_evar( res, context[28], context[38] );
        res = refalrts::splice_evar( res, context[0], context[7] );
        res = refalrts::splice_elem( res, context[27] );
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & LowLevelRASL-Native:1$2=1/4 s.Hash1#1/5 s.Hash2#1/6 (/7 s.Count#1/15 e.0#0/23 )/8 (/9 s.Count0#1/22 e.1#0/25 )/10 e.DefinitionsRASL#3/27 >/1
      context[23] = context[16];
      context[24] = context[17];
      context[25] = context[20];
      context[26] = context[21];
      context[27] = context[18];
      context[28] = context[19];
      // closed e.0#0 as range 23
      // closed e.1#0 as range 25
      // closed e.DefinitionsRASL#3 as range 27
      //DEBUG: s.Hash1#1: 5
      //DEBUG: s.Hash2#1: 6
      //DEBUG: s.Count#1: 15
      //DEBUG: s.Count0#1: 22
      //DEBUG: e.0#0: 23
      //DEBUG: e.1#0: 25
      //DEBUG: e.DefinitionsRASL#3: 27

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} s.Count#1/15 {REMOVED TILE} {REMOVED TILE} s.Count0#1/22 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } (/29 Tile{ HalfReuse: (/0 HalfReuse: # CmdCookieNS/4 AsIs: s.Hash1#1/5 AsIs: s.Hash2#1/6 HalfReuse: )/7 } (/30 # CmdCEnum-Start/31"efunc"/32 )/34 </35 & Map@3/36 (/37"efunc"/38 )/40 Tile{ AsIs: e.0#0/23 } >/41 (/42 # CmdCEnum-End/43 Tile{ AsIs: )/8 AsIs: (/9 } # CmdCEnum-Start/44"ident"/45 )/47 </48 & Map@3/49 (/50"ident"/51 )/53 Tile{ AsIs: e.1#0/25 } >/54 (/55 # CmdCEnum-End/56 Tile{ AsIs: )/10 AsIs: e.DefinitionsRASL#3/27 HalfReuse: )/1 ]] }
      refalrts::alloc_open_bracket(vm, context[29]);
      refalrts::alloc_open_bracket(vm, context[30]);
      refalrts::alloc_ident(vm, context[31], identifiers[ident_CmdCEnumm_Start]);
      refalrts::alloc_chars(vm, context[32], context[33], "efunc", 5);
      refalrts::alloc_close_bracket(vm, context[34]);
      refalrts::alloc_open_call(vm, context[35]);
      refalrts::alloc_name(vm, context[36], functions[efunc_gen_Map_Z3]);
      refalrts::alloc_open_bracket(vm, context[37]);
      refalrts::alloc_chars(vm, context[38], context[39], "efunc", 5);
      refalrts::alloc_close_bracket(vm, context[40]);
      refalrts::alloc_close_call(vm, context[41]);
      refalrts::alloc_open_bracket(vm, context[42]);
      refalrts::alloc_ident(vm, context[43], identifiers[ident_CmdCEnumm_End]);
      refalrts::alloc_ident(vm, context[44], identifiers[ident_CmdCEnumm_Start]);
      refalrts::alloc_chars(vm, context[45], context[46], "ident", 5);
      refalrts::alloc_close_bracket(vm, context[47]);
      refalrts::alloc_open_call(vm, context[48]);
      refalrts::alloc_name(vm, context[49], functions[efunc_gen_Map_Z3]);
      refalrts::alloc_open_bracket(vm, context[50]);
      refalrts::alloc_chars(vm, context[51], context[52], "ident", 5);
      refalrts::alloc_close_bracket(vm, context[53]);
      refalrts::alloc_close_call(vm, context[54]);
      refalrts::alloc_open_bracket(vm, context[55]);
      refalrts::alloc_ident(vm, context[56], identifiers[ident_CmdCEnumm_End]);
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_ident(context[4], identifiers[ident_CmdCookieNS]);
      refalrts::reinit_close_bracket(context[7]);
      refalrts::reinit_close_bracket(context[1]);
      refalrts::link_brackets( context[29], context[1] );
      refalrts::link_brackets( context[55], context[10] );
      refalrts::push_stack( vm, context[54] );
      refalrts::push_stack( vm, context[48] );
      refalrts::link_brackets( context[50], context[53] );
      refalrts::link_brackets( context[9], context[47] );
      refalrts::link_brackets( context[42], context[8] );
      refalrts::push_stack( vm, context[41] );
      refalrts::push_stack( vm, context[35] );
      refalrts::link_brackets( context[37], context[40] );
      refalrts::link_brackets( context[30], context[34] );
      refalrts::link_brackets( context[0], context[7] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[10];
      res = refalrts::splice_evar( res, context[54], context[56] );
      res = refalrts::splice_evar( res, context[25], context[26] );
      res = refalrts::splice_evar( res, context[44], context[53] );
      res = refalrts::splice_evar( res, context[8], context[9] );
      res = refalrts::splice_evar( res, context[41], context[43] );
      res = refalrts::splice_evar( res, context[23], context[24] );
      res = refalrts::splice_evar( res, context[30], context[40] );
      res = refalrts::splice_evar( res, context[0], context[7] );
      res = refalrts::splice_elem( res, context[29] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & LowLevelRASL-Native:1$2=1/4 s.Hash1#1/5 s.Hash2#1/6 (/7 s.Count#1/15 e.0#0/16 )/8 t.IdentTable#1/9 e.DefinitionsRASL#3/18 >/1
    context[16] = context[13];
    context[17] = context[14];
    context[18] = context[11];
    context[19] = context[12];
    // closed e.0#0 as range 16
    // closed e.DefinitionsRASL#3 as range 18
    //DEBUG: t.IdentTable#1: 9
    //DEBUG: s.Hash1#1: 5
    //DEBUG: s.Hash2#1: 6
    //DEBUG: s.Count#1: 15
    //DEBUG: e.0#0: 16
    //DEBUG: e.DefinitionsRASL#3: 18

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} s.Count#1/15 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } (/20 Tile{ HalfReuse: (/0 HalfReuse: # CmdCookieNS/4 AsIs: s.Hash1#1/5 AsIs: s.Hash2#1/6 HalfReuse: )/7 } (/21 # CmdCEnum-Start/22"efunc"/23 )/25 </26 & Map@3/27 (/28"efunc"/29 )/31 Tile{ AsIs: e.0#0/16 } >/32 (/33 # CmdCEnum-End/34 )/35 </36 & PrepareTable*2/37"iden"/38 Tile{ HalfReuse: 't'/8 AsIs: t.IdentTable#1/9 } >/40 Tile{ AsIs: e.DefinitionsRASL#3/18 } Tile{ HalfReuse: )/1 ]] }
    refalrts::alloc_open_bracket(vm, context[20]);
    refalrts::alloc_open_bracket(vm, context[21]);
    refalrts::alloc_ident(vm, context[22], identifiers[ident_CmdCEnumm_Start]);
    refalrts::alloc_chars(vm, context[23], context[24], "efunc", 5);
    refalrts::alloc_close_bracket(vm, context[25]);
    refalrts::alloc_open_call(vm, context[26]);
    refalrts::alloc_name(vm, context[27], functions[efunc_gen_Map_Z3]);
    refalrts::alloc_open_bracket(vm, context[28]);
    refalrts::alloc_chars(vm, context[29], context[30], "efunc", 5);
    refalrts::alloc_close_bracket(vm, context[31]);
    refalrts::alloc_close_call(vm, context[32]);
    refalrts::alloc_open_bracket(vm, context[33]);
    refalrts::alloc_ident(vm, context[34], identifiers[ident_CmdCEnumm_End]);
    refalrts::alloc_close_bracket(vm, context[35]);
    refalrts::alloc_open_call(vm, context[36]);
    refalrts::alloc_name(vm, context[37], functions[efunc_gen_PrepareTable_D2]);
    refalrts::alloc_chars(vm, context[38], context[39], "iden", 4);
    refalrts::alloc_close_call(vm, context[40]);
    refalrts::reinit_open_bracket(context[0]);
    refalrts::reinit_ident(context[4], identifiers[ident_CmdCookieNS]);
    refalrts::reinit_close_bracket(context[7]);
    refalrts::reinit_char(context[8], 't');
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[20], context[1] );
    refalrts::push_stack( vm, context[40] );
    refalrts::push_stack( vm, context[36] );
    refalrts::link_brackets( context[33], context[35] );
    refalrts::push_stack( vm, context[32] );
    refalrts::push_stack( vm, context[26] );
    refalrts::link_brackets( context[28], context[31] );
    refalrts::link_brackets( context[21], context[25] );
    refalrts::link_brackets( context[0], context[7] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[18], context[19] );
    res = refalrts::splice_elem( res, context[40] );
    res = refalrts::splice_evar( res, context[8], context[10] );
    res = refalrts::splice_evar( res, context[32], context[39] );
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_evar( res, context[21], context[31] );
    res = refalrts::splice_evar( res, context[0], context[7] );
    res = refalrts::splice_elem( res, context[20] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & LowLevelRASL-Native:1$2=1/4 s.new#6/5 s.new#7/6 t.new#8/7 (/9 s.new#9/15 e.new#10/13 )/10 e.new#11/11 >/1
    context[11] = context[2];
    context[12] = context[3];
    context[13] = 0;
    context[14] = 0;
    if( ! refalrts::brackets_term( context[13], context[14], context[9] ) )
      continue;
    // closed e.new#11 as range 11
    if( ! refalrts::svar_left( context[15], context[13], context[14] ) )
      continue;
    // closed e.new#10 as range 13
    do {
      // </0 & LowLevelRASL-Native:1$2=1/4 s.Hash1#1/5 s.Hash2#1/6 t.FuncTable#1/7 (/9 0/15 )/10 e.DefinitionsRASL#3/16 >/1
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::number_term( 0UL, context[15] ) )
        continue;
      if( ! refalrts::empty_seq( context[13], context[14] ) )
        continue;
      // closed e.DefinitionsRASL#3 as range 16
      //DEBUG: t.FuncTable#1: 7
      //DEBUG: s.Hash1#1: 5
      //DEBUG: s.Hash2#1: 6
      //DEBUG: e.DefinitionsRASL#3: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/9 } Tile{ HalfReuse: (/0 HalfReuse: # CmdCookieNS/4 AsIs: s.Hash1#1/5 AsIs: s.Hash2#1/6 } )/18 Tile{ HalfReuse: </15 } & PrepareTable*2/19"efunc"/20 Tile{ AsIs: t.FuncTable#1/7 } Tile{ HalfReuse: >/10 AsIs: e.DefinitionsRASL#3/16 HalfReuse: )/1 ]] }
      refalrts::alloc_close_bracket(vm, context[18]);
      refalrts::alloc_name(vm, context[19], functions[efunc_gen_PrepareTable_D2]);
      refalrts::alloc_chars(vm, context[20], context[21], "efunc", 5);
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_ident(context[4], identifiers[ident_CmdCookieNS]);
      refalrts::reinit_open_call(context[15]);
      refalrts::reinit_close_call(context[10]);
      refalrts::reinit_close_bracket(context[1]);
      refalrts::link_brackets( context[9], context[1] );
      refalrts::push_stack( vm, context[10] );
      refalrts::push_stack( vm, context[15] );
      refalrts::link_brackets( context[0], context[18] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[10];
      res = refalrts::splice_evar( res, context[7], context[8] );
      res = refalrts::splice_evar( res, context[19], context[21] );
      res = refalrts::splice_elem( res, context[15] );
      res = refalrts::splice_elem( res, context[18] );
      res = refalrts::splice_evar( res, context[0], context[6] );
      res = refalrts::splice_elem( res, context[9] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & LowLevelRASL-Native:1$2=1/4 s.Hash1#1/5 s.Hash2#1/6 t.FuncTable#1/7 (/9 s.Count#1/15 e.0#0/16 )/10 e.DefinitionsRASL#3/18 >/1
    context[16] = context[13];
    context[17] = context[14];
    context[18] = context[11];
    context[19] = context[12];
    // closed e.0#0 as range 16
    // closed e.DefinitionsRASL#3 as range 18
    //DEBUG: t.FuncTable#1: 7
    //DEBUG: s.Hash1#1: 5
    //DEBUG: s.Hash2#1: 6
    //DEBUG: s.Count#1: 15
    //DEBUG: e.0#0: 16
    //DEBUG: e.DefinitionsRASL#3: 18

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Count#1/15 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } (/20 Tile{ HalfReuse: (/0 HalfReuse: # CmdCookieNS/4 AsIs: s.Hash1#1/5 AsIs: s.Hash2#1/6 } )/21 </22 & PrepareTable*2/23"efunc"/24 Tile{ AsIs: t.FuncTable#1/7 HalfReuse: >/9 } (/26 # CmdCEnum-Start/27"ident"/28 )/30 </31 & Map@3/32 (/33"ident"/34 )/36 Tile{ AsIs: e.0#0/16 } >/37 (/38 # CmdCEnum-End/39 Tile{ AsIs: )/10 AsIs: e.DefinitionsRASL#3/18 HalfReuse: )/1 ]] }
    refalrts::alloc_open_bracket(vm, context[20]);
    refalrts::alloc_close_bracket(vm, context[21]);
    refalrts::alloc_open_call(vm, context[22]);
    refalrts::alloc_name(vm, context[23], functions[efunc_gen_PrepareTable_D2]);
    refalrts::alloc_chars(vm, context[24], context[25], "efunc", 5);
    refalrts::alloc_open_bracket(vm, context[26]);
    refalrts::alloc_ident(vm, context[27], identifiers[ident_CmdCEnumm_Start]);
    refalrts::alloc_chars(vm, context[28], context[29], "ident", 5);
    refalrts::alloc_close_bracket(vm, context[30]);
    refalrts::alloc_open_call(vm, context[31]);
    refalrts::alloc_name(vm, context[32], functions[efunc_gen_Map_Z3]);
    refalrts::alloc_open_bracket(vm, context[33]);
    refalrts::alloc_chars(vm, context[34], context[35], "ident", 5);
    refalrts::alloc_close_bracket(vm, context[36]);
    refalrts::alloc_close_call(vm, context[37]);
    refalrts::alloc_open_bracket(vm, context[38]);
    refalrts::alloc_ident(vm, context[39], identifiers[ident_CmdCEnumm_End]);
    refalrts::reinit_open_bracket(context[0]);
    refalrts::reinit_ident(context[4], identifiers[ident_CmdCookieNS]);
    refalrts::reinit_close_call(context[9]);
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[20], context[1] );
    refalrts::link_brackets( context[38], context[10] );
    refalrts::push_stack( vm, context[37] );
    refalrts::push_stack( vm, context[31] );
    refalrts::link_brackets( context[33], context[36] );
    refalrts::link_brackets( context[26], context[30] );
    refalrts::push_stack( vm, context[9] );
    refalrts::push_stack( vm, context[22] );
    refalrts::link_brackets( context[0], context[21] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[10];
    res = refalrts::splice_evar( res, context[37], context[39] );
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_evar( res, context[26], context[36] );
    res = refalrts::splice_evar( res, context[7], context[9] );
    res = refalrts::splice_evar( res, context[21], context[25] );
    res = refalrts::splice_evar( res, context[0], context[6] );
    res = refalrts::splice_elem( res, context[20] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & LowLevelRASL-Native:1$2=1/4 s.Hash1#1/5 s.Hash2#1/6 t.FuncTable#1/7 t.IdentTable#1/9 e.DefinitionsRASL#3/2 >/1
  // closed e.DefinitionsRASL#3 as range 2
  //DEBUG: t.FuncTable#1: 7
  //DEBUG: t.IdentTable#1: 9
  //DEBUG: s.Hash1#1: 5
  //DEBUG: s.Hash2#1: 6
  //DEBUG: e.DefinitionsRASL#3: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } (/11 Tile{ HalfReuse: (/0 HalfReuse: # CmdCookieNS/4 AsIs: s.Hash1#1/5 AsIs: s.Hash2#1/6 } )/12 </13 & PrepareTable*2/14"efunc"/15 Tile{ AsIs: t.FuncTable#1/7 } >/17 </18 & PrepareTable*2/19"ident"/20 Tile{ AsIs: t.IdentTable#1/9 } >/22 Tile{ AsIs: e.DefinitionsRASL#3/2 } Tile{ HalfReuse: )/1 ]] }
  refalrts::alloc_open_bracket(vm, context[11]);
  refalrts::alloc_close_bracket(vm, context[12]);
  refalrts::alloc_open_call(vm, context[13]);
  refalrts::alloc_name(vm, context[14], functions[efunc_gen_PrepareTable_D2]);
  refalrts::alloc_chars(vm, context[15], context[16], "efunc", 5);
  refalrts::alloc_close_call(vm, context[17]);
  refalrts::alloc_open_call(vm, context[18]);
  refalrts::alloc_name(vm, context[19], functions[efunc_gen_PrepareTable_D2]);
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
  res = refalrts::splice_elem( res, context[22] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[17], context[21] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_evar( res, context[12], context[16] );
  res = refalrts::splice_evar( res, context[0], context[6] );
  res = refalrts::splice_elem( res, context[11] );
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
  res = refalrts::splice_elem( res, context[13] );
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
  res = refalrts::splice_elem( res, context[17] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[15], context[16] );
  res = refalrts::splice_elem( res, context[9] );
  res = refalrts::splice_evar( res, context[11], context[10] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_LowLevelRASLm_Native("LowLevelRASL-Native", 0U, 0U, func_LowLevelRASLm_Native);


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
  //TRASH: {REMOVED TILE} s.Count#1/9 {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # CmdCEnum-Start/4 AsIs: e.Prefix#1/2 HalfReuse: )/7 } </10 & Map@3/11 (/12 e.Prefix#1/2/13 )/15 Tile{ AsIs: e.Items#1/5 } >/16 (/17 Tile{ HalfReuse: # CmdCEnum-End/8 HalfReuse: )/1 ]] }
  refalrts::alloc_open_call(vm, context[10]);
  refalrts::alloc_name(vm, context[11], functions[efunc_gen_Map_Z3]);
  refalrts::alloc_open_bracket(vm, context[12]);
  refalrts::copy_evar(vm, context[13], context[14], context[2], context[3]);
  refalrts::alloc_close_bracket(vm, context[15]);
  refalrts::alloc_close_call(vm, context[16]);
  refalrts::alloc_open_bracket(vm, context[17]);
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_ident(context[4], identifiers[ident_CmdCEnumm_Start]);
  refalrts::reinit_close_bracket(context[7]);
  refalrts::reinit_ident(context[8], identifiers[ident_CmdCEnumm_End]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[17], context[1] );
  refalrts::push_stack( vm, context[16] );
  refalrts::push_stack( vm, context[10] );
  refalrts::link_brackets( context[12], context[15] );
  refalrts::link_brackets( context[0], context[7] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[16], context[17] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[10], context[15] );
  refalrts::splice_to_freelist_open( vm, context[7], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_PrepareTable("PrepareTable", COOKIE1_, COOKIE2_, func_PrepareTable);


static refalrts::FnResult func_SetCookies(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 32 elems
  refalrts::Iter context[32];
  refalrts::zeros( context, 32 );
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
        // </0 & SetCookies/4 s.new#21/9 s.new#22/10 (/7 # Function-ToNative/11 s.new#23/12 (/20 e.new#25/22 )/21 e.new#24/24 )/8 >/1
        context[22] = context[18];
        context[23] = context[19];
        context[24] = context[16];
        context[25] = context[17];
        if( ! refalrts::ident_term( identifiers[ident_Functionm_ToNative], context[11] ) )
          continue;
        // closed e.new#25 as range 22
        // closed e.new#24 as range 24
        do {
          // </0 & SetCookies/4 s.Hash1#1/9 s.Hash2#1/10 (/7 # Function-ToNative/11 # GN-Entry/12 (/20 e.Name#1/26 )/21 e.Commands#1/28 )/8 >/1
          context[26] = context[22];
          context[27] = context[23];
          context[28] = context[24];
          context[29] = context[25];
          if( ! refalrts::ident_term( identifiers[ident_GNm_Entry], context[12] ) )
            continue;
          // closed e.Name#1 as range 26
          // closed e.Commands#1 as range 28
          //DEBUG: s.Hash1#1: 9
          //DEBUG: s.Hash2#1: 10
          //DEBUG: e.Name#1: 26
          //DEBUG: e.Commands#1: 28

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} s.Hash1#1/9 s.Hash2#1/10 (/7 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ } Tile{ HalfReuse: (/11 Reuse: # Function-ToNative/12 AsIs: (/20 AsIs: e.Name#1/26 HalfReuse: # Hash/21 } Tile{ HalfReuse: 0/0 HalfReuse: 0/4 } Tile{ AsIs: )/8 } Tile{ AsIs: e.Commands#1/28 } Tile{ HalfReuse: )/1 ]] }
          refalrts::reinit_open_bracket(context[11]);
          refalrts::update_ident(context[12], identifiers[ident_Functionm_ToNative]);
          refalrts::reinit_ident(context[21], identifiers[ident_Hash]);
          refalrts::reinit_number(context[0], 0UL);
          refalrts::reinit_number(context[4], 0UL);
          refalrts::reinit_close_bracket(context[1]);
          refalrts::link_brackets( context[11], context[1] );
          refalrts::link_brackets( context[20], context[8] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[1];
          res = refalrts::splice_evar( res, context[28], context[29] );
          res = refalrts::splice_elem( res, context[8] );
          res = refalrts::splice_evar( res, context[0], context[4] );
          res = refalrts::splice_evar( res, context[11], context[21] );
          refalrts::splice_to_freelist_open( vm, trash_prev, res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        do {
          // </0 & SetCookies/4 s.Hash1#1/9 s.Hash2#1/10 (/7 # Function-ToNative/11 # GN-Local/12 (/20 e.Name#1/26 )/21 e.Commands#1/28 )/8 >/1
          context[26] = context[22];
          context[27] = context[23];
          context[28] = context[24];
          context[29] = context[25];
          if( ! refalrts::ident_term( identifiers[ident_GNm_Local], context[12] ) )
            continue;
          // closed e.Name#1 as range 26
          // closed e.Commands#1 as range 28
          //DEBUG: s.Hash1#1: 9
          //DEBUG: s.Hash2#1: 10
          //DEBUG: e.Name#1: 26
          //DEBUG: e.Commands#1: 28

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} </0 & SetCookies/4 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} )/8 {REMOVED TILE}
          //RESULT: Tile{ [[ } Tile{ HalfReuse: (/11 Reuse: # Function-ToNative/12 AsIs: (/20 AsIs: e.Name#1/26 HalfReuse: # Hash/21 } Tile{ AsIs: s.Hash1#1/9 AsIs: s.Hash2#1/10 HalfReuse: )/7 } Tile{ AsIs: e.Commands#1/28 } Tile{ HalfReuse: )/1 ]] }
          refalrts::reinit_open_bracket(context[11]);
          refalrts::update_ident(context[12], identifiers[ident_Functionm_ToNative]);
          refalrts::reinit_ident(context[21], identifiers[ident_Hash]);
          refalrts::reinit_close_bracket(context[7]);
          refalrts::reinit_close_bracket(context[1]);
          refalrts::link_brackets( context[11], context[1] );
          refalrts::link_brackets( context[20], context[7] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[1];
          res = refalrts::splice_evar( res, context[28], context[29] );
          res = refalrts::splice_evar( res, context[9], context[7] );
          res = refalrts::splice_evar( res, context[11], context[21] );
          refalrts::splice_to_freelist_open( vm, trash_prev, res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & SetCookies/4 s.Hash1#1/9 s.Hash2#1/10 (/7 # Function-ToNative/11 s.ScopeClass#1/12 (/20 e.Name#1/26 )/21 e.Commands#1/28 )/8 >/1
        context[26] = context[22];
        context[27] = context[23];
        context[28] = context[24];
        context[29] = context[25];
        // closed e.Name#1 as range 26
        // closed e.Commands#1 as range 28
        //DEBUG: s.Hash1#1: 9
        //DEBUG: s.Hash2#1: 10
        //DEBUG: s.ScopeClass#1: 12
        //DEBUG: e.Name#1: 26
        //DEBUG: e.Commands#1: 28

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # Function-ToNative/4 } Tile{ AsIs: (/20 } Tile{ HalfReuse: </1 } Tile{ HalfReuse: & MingleName*2/11 AsIs: s.ScopeClass#1/12 } Tile{ AsIs: e.Name#1/26 } Tile{ AsIs: s.Hash1#1/9 AsIs: s.Hash2#1/10 HalfReuse: >/7 } Tile{ AsIs: )/21 AsIs: e.Commands#1/28 AsIs: )/8 } Tile{ ]] }
        refalrts::reinit_open_bracket(context[0]);
        refalrts::reinit_ident(context[4], identifiers[ident_Functionm_ToNative]);
        refalrts::reinit_open_call(context[1]);
        refalrts::reinit_name(context[11], functions[efunc_gen_MingleName_D2]);
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
        res = refalrts::splice_evar( res, context[26], context[27] );
        res = refalrts::splice_evar( res, context[11], context[12] );
        res = refalrts::splice_elem( res, context[1] );
        res = refalrts::splice_elem( res, context[20] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & SetCookies/4 s.new#21/9 s.new#22/10 (/7 # CmdNativeFunction/11 s.new#23/12 (/20 e.new#26/22 )/21 t.new#24/26 e.new#25/24 )/8 >/1
        context[22] = context[18];
        context[23] = context[19];
        context[24] = context[16];
        context[25] = context[17];
        if( ! refalrts::ident_term( identifiers[ident_CmdNativeFunction], context[11] ) )
          continue;
        // closed e.new#26 as range 22
        context[27] = refalrts::tvar_left( context[26], context[24], context[25] );
        if( ! context[27] )
          continue;
        // closed e.new#25 as range 24
        do {
          // </0 & SetCookies/4 s.Hash1#1/9 s.Hash2#1/10 (/7 # CmdNativeFunction/11 # GN-Entry/12 (/20 e.Name#1/28 )/21 t.SrcPos#1/26 e.Code#1/30 )/8 >/1
          context[28] = context[22];
          context[29] = context[23];
          context[30] = context[24];
          context[31] = context[25];
          if( ! refalrts::ident_term( identifiers[ident_GNm_Entry], context[12] ) )
            continue;
          // closed e.Name#1 as range 28
          // closed e.Code#1 as range 30
          //DEBUG: t.SrcPos#1: 26
          //DEBUG: s.Hash1#1: 9
          //DEBUG: s.Hash2#1: 10
          //DEBUG: e.Name#1: 28
          //DEBUG: e.Code#1: 30

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} s.Hash1#1/9 s.Hash2#1/10 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
          //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # CmdNativeFunction/11 HalfReuse: (/12 } Tile{ AsIs: e.Name#1/28 } Tile{ HalfReuse: # Hash/0 HalfReuse: 0/4 } Tile{ HalfReuse: 0/20 } Tile{ AsIs: )/21 AsIs: t.SrcPos#1/26 AsIs: e.Code#1/30 AsIs: )/8 } Tile{ ]] }
          refalrts::reinit_open_bracket(context[12]);
          refalrts::reinit_ident(context[0], identifiers[ident_Hash]);
          refalrts::reinit_number(context[4], 0UL);
          refalrts::reinit_number(context[20], 0UL);
          refalrts::link_brackets( context[7], context[8] );
          refalrts::link_brackets( context[12], context[21] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = arg_end->next;
          res = refalrts::splice_evar( res, context[21], context[8] );
          res = refalrts::splice_elem( res, context[20] );
          res = refalrts::splice_evar( res, context[0], context[4] );
          res = refalrts::splice_evar( res, context[28], context[29] );
          res = refalrts::splice_evar( res, context[7], context[12] );
          refalrts::splice_to_freelist_open( vm, trash_prev, res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        do {
          // </0 & SetCookies/4 s.Hash1#1/9 s.Hash2#1/10 (/7 # CmdNativeFunction/11 # GN-Local/12 (/20 e.Name#1/28 )/21 t.SrcPos#1/26 e.Code#1/30 )/8 >/1
          context[28] = context[22];
          context[29] = context[23];
          context[30] = context[24];
          context[31] = context[25];
          if( ! refalrts::ident_term( identifiers[ident_GNm_Local], context[12] ) )
            continue;
          // closed e.Name#1 as range 28
          // closed e.Code#1 as range 30
          //DEBUG: t.SrcPos#1: 26
          //DEBUG: s.Hash1#1: 9
          //DEBUG: s.Hash2#1: 10
          //DEBUG: e.Name#1: 28
          //DEBUG: e.Code#1: 30

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} </0 {REMOVED TILE} {REMOVED TILE} (/20 {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
          //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # CmdNativeFunction/11 HalfReuse: (/12 } Tile{ AsIs: e.Name#1/28 } Tile{ HalfReuse: # Hash/4 AsIs: s.Hash1#1/9 AsIs: s.Hash2#1/10 } Tile{ AsIs: )/21 AsIs: t.SrcPos#1/26 AsIs: e.Code#1/30 AsIs: )/8 } Tile{ ]] }
          refalrts::reinit_open_bracket(context[12]);
          refalrts::reinit_ident(context[4], identifiers[ident_Hash]);
          refalrts::link_brackets( context[7], context[8] );
          refalrts::link_brackets( context[12], context[21] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = arg_end->next;
          res = refalrts::splice_evar( res, context[21], context[8] );
          res = refalrts::splice_evar( res, context[4], context[10] );
          res = refalrts::splice_evar( res, context[28], context[29] );
          res = refalrts::splice_evar( res, context[7], context[12] );
          refalrts::splice_to_freelist_open( vm, trash_prev, res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & SetCookies/4 s.Hash1#1/9 s.Hash2#1/10 (/7 # CmdNativeFunction/11 s.ScopeClass#1/12 (/20 e.Name#1/28 )/21 t.SrcPos#1/26 e.Code#1/30 )/8 >/1
        context[28] = context[22];
        context[29] = context[23];
        context[30] = context[24];
        context[31] = context[25];
        // closed e.Name#1 as range 28
        // closed e.Code#1 as range 30
        //DEBUG: t.SrcPos#1: 26
        //DEBUG: s.Hash1#1: 9
        //DEBUG: s.Hash2#1: 10
        //DEBUG: s.ScopeClass#1: 12
        //DEBUG: e.Name#1: 28
        //DEBUG: e.Code#1: 30

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # CmdNativeFunction/4 } Tile{ AsIs: (/20 } Tile{ HalfReuse: </1 } Tile{ HalfReuse: & MingleName*2/11 AsIs: s.ScopeClass#1/12 } Tile{ AsIs: e.Name#1/28 } Tile{ AsIs: s.Hash1#1/9 AsIs: s.Hash2#1/10 HalfReuse: >/7 } Tile{ AsIs: )/21 AsIs: t.SrcPos#1/26 AsIs: e.Code#1/30 AsIs: )/8 } Tile{ ]] }
        refalrts::reinit_open_bracket(context[0]);
        refalrts::reinit_ident(context[4], identifiers[ident_CmdNativeFunction]);
        refalrts::reinit_open_call(context[1]);
        refalrts::reinit_name(context[11], functions[efunc_gen_MingleName_D2]);
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
        res = refalrts::splice_evar( res, context[28], context[29] );
        res = refalrts::splice_evar( res, context[11], context[12] );
        res = refalrts::splice_elem( res, context[1] );
        res = refalrts::splice_elem( res, context[20] );
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
    res = refalrts::splice_elem( res, context[4] );
    res = refalrts::splice_elem( res, context[5] );
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
  res = refalrts::splice_elem( res, context[5] );
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
      res = refalrts::splice_elem( res, context[31] );
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
    res = refalrts::splice_elem( res, context[23] );
    res = refalrts::splice_evar( res, context[4], context[10] );
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_elem( res, context[22] );
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
        res = refalrts::splice_elem( res, context[18] );
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
      res = refalrts::splice_elem( res, context[23] );
      res = refalrts::splice_evar( res, context[33], context[37] );
      res = refalrts::splice_elem( res, context[24] );
      res = refalrts::splice_evar( res, context[30], context[32] );
      res = refalrts::splice_evar( res, context[19], context[20] );
      res = refalrts::splice_elem( res, context[29] );
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


static refalrts::FnResult func_gen_Map_Z1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 43 elems
  refalrts::Iter context[43];
  refalrts::zeros( context, 43 );
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
      // </0 & Map@1/4 (/7 s.new#3/13 t.new#4/14 e.new#5/11 )/8 e.new#6/9 >/1
      context[9] = context[5];
      context[10] = context[6];
      context[11] = 0;
      context[12] = 0;
      if( ! refalrts::brackets_term( context[11], context[12], context[7] ) )
        continue;
      // closed e.new#6 as range 9
      if( ! refalrts::svar_left( context[13], context[11], context[12] ) )
        continue;
      context[15] = refalrts::tvar_left( context[14], context[11], context[12] );
      if( ! context[15] )
        continue;
      // closed e.new#5 as range 11
      do {
        // </0 & Map@1/4 (/7 s.new#7/13 (/14 e.new#8/20 )/15 e.new#9/16 )/8 e.new#10/18 >/1
        context[16] = context[11];
        context[17] = context[12];
        context[18] = context[9];
        context[19] = context[10];
        context[20] = 0;
        context[21] = 0;
        if( ! refalrts::brackets_term( context[20], context[21], context[14] ) )
          continue;
        // closed e.new#8 as range 20
        // closed e.new#9 as range 16
        // closed e.new#10 as range 18
        do {
          // </0 & Map@1/4 (/7 # Function-ToNative/13 (/14 e.2#0/22 )/15 e.1#0/24 )/8 e.Tail#1/26 >/1
          context[22] = context[20];
          context[23] = context[21];
          context[24] = context[16];
          context[25] = context[17];
          context[26] = context[18];
          context[27] = context[19];
          if( ! refalrts::ident_term( identifiers[ident_Functionm_ToNative], context[13] ) )
            continue;
          // closed e.2#0 as range 22
          // closed e.1#0 as range 24
          // closed e.Tail#1 as range 26
          //DEBUG: e.2#0: 22
          //DEBUG: e.1#0: 24
          //DEBUG: e.Tail#1: 26

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ } (/28 # CmdFnStart/29 e.2#0/22/30 )/32 (/33 # CmdProfileFunction/34 )/35 (/36 # CmdLoadConstants/37 )/38 </39 & ConvertDirectCommands/40 Tile{ AsIs: e.1#0/24 } >/41 Tile{ HalfReuse: (/0 HalfReuse: # CmdFnEnd/4 HalfReuse: )/7 HalfReuse: (/13 HalfReuse: # CmdNativeFuncDescr/14 AsIs: e.2#0/22 AsIs: )/15 } </42 Tile{ HalfReuse: & Map@1/8 AsIs: e.Tail#1/26 AsIs: >/1 ]] }
          refalrts::alloc_open_bracket(vm, context[28]);
          refalrts::alloc_ident(vm, context[29], identifiers[ident_CmdFnStart]);
          refalrts::copy_evar(vm, context[30], context[31], context[22], context[23]);
          refalrts::alloc_close_bracket(vm, context[32]);
          refalrts::alloc_open_bracket(vm, context[33]);
          refalrts::alloc_ident(vm, context[34], identifiers[ident_CmdProfileFunction]);
          refalrts::alloc_close_bracket(vm, context[35]);
          refalrts::alloc_open_bracket(vm, context[36]);
          refalrts::alloc_ident(vm, context[37], identifiers[ident_CmdLoadConstants]);
          refalrts::alloc_close_bracket(vm, context[38]);
          refalrts::alloc_open_call(vm, context[39]);
          refalrts::alloc_name(vm, context[40], functions[efunc_ConvertDirectCommands]);
          refalrts::alloc_close_call(vm, context[41]);
          refalrts::alloc_open_call(vm, context[42]);
          refalrts::reinit_open_bracket(context[0]);
          refalrts::reinit_ident(context[4], identifiers[ident_CmdFnEnd]);
          refalrts::reinit_close_bracket(context[7]);
          refalrts::reinit_open_bracket(context[13]);
          refalrts::reinit_ident(context[14], identifiers[ident_CmdNativeFuncDescr]);
          refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z1]);
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[42] );
          refalrts::link_brackets( context[13], context[15] );
          refalrts::link_brackets( context[0], context[7] );
          refalrts::push_stack( vm, context[41] );
          refalrts::push_stack( vm, context[39] );
          refalrts::link_brackets( context[36], context[38] );
          refalrts::link_brackets( context[33], context[35] );
          refalrts::link_brackets( context[28], context[32] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[8];
          res = refalrts::splice_elem( res, context[42] );
          res = refalrts::splice_evar( res, context[0], context[15] );
          res = refalrts::splice_elem( res, context[41] );
          res = refalrts::splice_evar( res, context[24], context[25] );
          res = refalrts::splice_evar( res, context[28], context[40] );
          refalrts::use( res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & Map@1/4 (/7 # CmdNativeFunction/13 (/14 e.2#0/22 )/15 t.1#0/28 e.3#0/24 )/8 e.Tail#1/26 >/1
        context[22] = context[20];
        context[23] = context[21];
        context[24] = context[16];
        context[25] = context[17];
        context[26] = context[18];
        context[27] = context[19];
        if( ! refalrts::ident_term( identifiers[ident_CmdNativeFunction], context[13] ) )
          continue;
        // closed e.2#0 as range 22
        // closed e.Tail#1 as range 26
        context[29] = refalrts::tvar_left( context[28], context[24], context[25] );
        if( ! context[29] )
          continue;
        // closed e.3#0 as range 24
        //DEBUG: e.2#0: 22
        //DEBUG: e.Tail#1: 26
        //DEBUG: t.1#0: 28
        //DEBUG: e.3#0: 24

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } (/30 # CmdFnStart/31 e.2#0/22/32 )/34 (/35 # CmdLoadConstants/36 )/37 (/38 # CmdEmitNativeCode/39 Tile{ AsIs: t.1#0/28 } Tile{ AsIs: e.3#0/24 } )/40 Tile{ HalfReuse: (/0 HalfReuse: # CmdFnEnd/4 HalfReuse: )/7 HalfReuse: (/13 HalfReuse: # CmdNativeFuncDescr/14 AsIs: e.2#0/22 AsIs: )/15 } </41 Tile{ HalfReuse: & Map@1/8 AsIs: e.Tail#1/26 AsIs: >/1 ]] }
        refalrts::alloc_open_bracket(vm, context[30]);
        refalrts::alloc_ident(vm, context[31], identifiers[ident_CmdFnStart]);
        refalrts::copy_evar(vm, context[32], context[33], context[22], context[23]);
        refalrts::alloc_close_bracket(vm, context[34]);
        refalrts::alloc_open_bracket(vm, context[35]);
        refalrts::alloc_ident(vm, context[36], identifiers[ident_CmdLoadConstants]);
        refalrts::alloc_close_bracket(vm, context[37]);
        refalrts::alloc_open_bracket(vm, context[38]);
        refalrts::alloc_ident(vm, context[39], identifiers[ident_CmdEmitNativeCode]);
        refalrts::alloc_close_bracket(vm, context[40]);
        refalrts::alloc_open_call(vm, context[41]);
        refalrts::reinit_open_bracket(context[0]);
        refalrts::reinit_ident(context[4], identifiers[ident_CmdFnEnd]);
        refalrts::reinit_close_bracket(context[7]);
        refalrts::reinit_open_bracket(context[13]);
        refalrts::reinit_ident(context[14], identifiers[ident_CmdNativeFuncDescr]);
        refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z1]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[41] );
        refalrts::link_brackets( context[13], context[15] );
        refalrts::link_brackets( context[0], context[7] );
        refalrts::link_brackets( context[38], context[40] );
        refalrts::link_brackets( context[35], context[37] );
        refalrts::link_brackets( context[30], context[34] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[8];
        res = refalrts::splice_elem( res, context[41] );
        res = refalrts::splice_evar( res, context[0], context[15] );
        res = refalrts::splice_elem( res, context[40] );
        res = refalrts::splice_evar( res, context[24], context[25] );
        res = refalrts::splice_evar( res, context[28], context[29] );
        res = refalrts::splice_evar( res, context[30], context[39] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & Map@1/4 (/7 # CmdEmitNativeCode/13 t.0#0/14 e.1#0/16 )/8 e.Tail#1/18 >/1
      context[16] = context[11];
      context[17] = context[12];
      context[18] = context[9];
      context[19] = context[10];
      if( ! refalrts::ident_term( identifiers[ident_CmdEmitNativeCode], context[13] ) )
        continue;
      // closed e.1#0 as range 16
      // closed e.Tail#1 as range 18
      //DEBUG: t.0#0: 14
      //DEBUG: e.1#0: 16
      //DEBUG: e.Tail#1: 18

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # CmdEmitNativeCode/13 AsIs: t.0#0/14 AsIs: e.1#0/16 AsIs: )/8 } Tile{ AsIs: </0 AsIs: & Map@1/4 } Tile{ AsIs: e.Tail#1/18 } Tile{ AsIs: >/1 ]] }
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[18], context[19] );
      res = refalrts::splice_evar( res, context[0], context[4] );
      res = refalrts::splice_evar( res, context[7], context[8] );
      refalrts::use( res );
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
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & PrepareFunctionsRASL*3/4 AsIs: t.Next#1/7 } >/11 </12 & Map@1/13 Tile{ AsIs: e.Tail#1/9 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_close_call(vm, context[11]);
    refalrts::alloc_open_call(vm, context[12]);
    refalrts::alloc_name(vm, context[13], functions[efunc_gen_Map_Z1]);
    refalrts::update_name(context[4], functions[efunc_gen_PrepareFunctionsRASL_D3]);
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

  // </0 & Map@1/4 e.items#0/2 >/1
  // closed e.items#0 as range 2
  //DEBUG: e.items#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Map@0/0 Reuse: & PrepareFunctionsRASL@0/4 AsIs: e.items#0/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::reinit_name(context[0], functions[efunc_gen_Map_Z0]);
  refalrts::update_name(context[4], functions[efunc_gen_PrepareFunctionsRASL_Z0]);
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
  // issue here memory for vars with 53 elems
  refalrts::Iter context[53];
  refalrts::zeros( context, 53 );
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
    // </0 & Map@2/4 s.new#4/5 s.new#5/6 t.new#6/9 e.new#7/7 >/1
    context[7] = context[2];
    context[8] = context[3];
    context[10] = refalrts::tvar_left( context[9], context[7], context[8] );
    if( ! context[10] )
      continue;
    // closed e.new#7 as range 7
    do {
      // </0 & Map@2/4 s.new#8/5 s.new#9/6 (/9 s.new#10/15 e.new#11/13 )/10 e.new#12/11 >/1
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
        // </0 & Map@2/4 s.Hash1#1/5 s.Hash2#1/6 (/9 # UnitName/15 e.0#0/16 )/10 e.Tail#1/18 >/1
        context[16] = context[13];
        context[17] = context[14];
        context[18] = context[11];
        context[19] = context[12];
        if( ! refalrts::ident_term( identifiers[ident_UnitName], context[15] ) )
          continue;
        // closed e.0#0 as range 16
        // closed e.Tail#1 as range 18
        //DEBUG: s.Hash1#1: 5
        //DEBUG: s.Hash2#1: 6
        //DEBUG: e.0#0: 16
        //DEBUG: e.Tail#1: 18

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} (/9 # UnitName/15 e.0#0/16 )/10 {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & Map@2/4 AsIs: s.Hash1#1/5 AsIs: s.Hash2#1/6 } Tile{ AsIs: e.Tail#1/18 } Tile{ AsIs: >/1 ]] }
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[18], context[19] );
        refalrts::splice_to_freelist_open( vm, context[6], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & Map@2/4 s.new#13/5 s.new#14/6 (/9 s.new#15/15 t.new#16/20 e.new#17/16 )/10 e.new#18/18 >/1
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
        // </0 & Map@2/4 s.new#19/5 s.new#20/6 (/9 s.new#21/15 s.new#22/20 e.new#23/22 )/10 e.new#24/24 >/1
        context[22] = context[16];
        context[23] = context[17];
        context[24] = context[18];
        context[25] = context[19];
        if( ! refalrts::svar_term( context[20], context[20] ) )
          continue;
        // closed e.new#23 as range 22
        // closed e.new#24 as range 24
        do {
          // </0 & Map@2/4 s.new#25/5 s.new#26/6 (/9 s.new#27/15 s.new#28/20 (/32 e.new#29/30 )/33 e.new#30/26 )/10 e.new#31/28 >/1
          context[26] = context[22];
          context[27] = context[23];
          context[28] = context[24];
          context[29] = context[25];
          context[30] = 0;
          context[31] = 0;
          context[32] = refalrts::brackets_left( context[30], context[31], context[26], context[27] );
          if( ! context[32] )
            continue;
          refalrts::bracket_pointers(context[32], context[33]);
          // closed e.new#29 as range 30
          // closed e.new#30 as range 26
          // closed e.new#31 as range 28
          do {
            // </0 & Map@2/4 s.Hash1#1/5 s.Hash2#1/6 (/9 # Function-ToRASL/15 s.ScopeClass#1/20 (/32 e.3#0/34 )/33 e.2#0/36 )/10 e.Tail#1/38 >/1
            context[34] = context[30];
            context[35] = context[31];
            context[36] = context[26];
            context[37] = context[27];
            context[38] = context[28];
            context[39] = context[29];
            if( ! refalrts::ident_term( identifiers[ident_Functionm_ToRASL], context[15] ) )
              continue;
            // closed e.3#0 as range 34
            // closed e.2#0 as range 36
            // closed e.Tail#1 as range 38
            //DEBUG: s.Hash1#1: 5
            //DEBUG: s.Hash2#1: 6
            //DEBUG: s.ScopeClass#1: 20
            //DEBUG: e.3#0: 34
            //DEBUG: e.2#0: 36
            //DEBUG: e.Tail#1: 38

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} (/9 # Function-ToRASL/15 s.ScopeClass#1/20 (/32 e.3#0/34 )/33 e.2#0/36 )/10 {REMOVED TILE} {REMOVED TILE}
            //RESULT: Tile{ [[ AsIs: </0 AsIs: & Map@2/4 AsIs: s.Hash1#1/5 AsIs: s.Hash2#1/6 } Tile{ AsIs: e.Tail#1/38 } Tile{ AsIs: >/1 ]] }
            refalrts::push_stack( vm, context[1] );
            refalrts::push_stack( vm, context[0] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = context[1];
            res = refalrts::splice_evar( res, context[38], context[39] );
            refalrts::splice_to_freelist_open( vm, context[6], res );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          do {
            // </0 & Map@2/4 s.new#32/5 s.new#33/6 (/9 # Function-ToNative/15 s.new#34/20 (/32 e.new#36/34 )/33 e.new#35/36 )/10 e.new#37/38 >/1
            context[34] = context[30];
            context[35] = context[31];
            context[36] = context[26];
            context[37] = context[27];
            context[38] = context[28];
            context[39] = context[29];
            if( ! refalrts::ident_term( identifiers[ident_Functionm_ToNative], context[15] ) )
              continue;
            // closed e.new#36 as range 34
            // closed e.new#35 as range 36
            // closed e.new#37 as range 38
            do {
              // </0 & Map@2/4 s.Hash1#1/5 s.Hash2#1/6 (/9 # Function-ToNative/15 # GN-Entry/20 (/32 e.3#0/40 )/33 e.2#0/42 )/10 e.Tail#1/44 >/1
              context[40] = context[34];
              context[41] = context[35];
              context[42] = context[36];
              context[43] = context[37];
              context[44] = context[38];
              context[45] = context[39];
              if( ! refalrts::ident_term( identifiers[ident_GNm_Entry], context[20] ) )
                continue;
              // closed e.3#0 as range 40
              // closed e.2#0 as range 42
              // closed e.Tail#1 as range 44
              //DEBUG: s.Hash1#1: 5
              //DEBUG: s.Hash2#1: 6
              //DEBUG: e.3#0: 40
              //DEBUG: e.2#0: 42
              //DEBUG: e.Tail#1: 44

              refalrts::reset_allocator(vm);
              //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
              //RESULT: Tile{ [[ } Tile{ HalfReuse: (/15 Reuse: # Function-ToNative/20 AsIs: (/32 AsIs: e.3#0/40 HalfReuse: # Hash/33 } 0/46 Tile{ HalfReuse: 0/9 } Tile{ AsIs: )/10 } Tile{ AsIs: e.2#0/42 } )/47 Tile{ AsIs: </0 AsIs: & Map@2/4 AsIs: s.Hash1#1/5 AsIs: s.Hash2#1/6 } Tile{ AsIs: e.Tail#1/44 } Tile{ AsIs: >/1 ]] }
              refalrts::alloc_number(vm, context[46], 0UL);
              refalrts::alloc_close_bracket(vm, context[47]);
              refalrts::reinit_open_bracket(context[15]);
              refalrts::update_ident(context[20], identifiers[ident_Functionm_ToNative]);
              refalrts::reinit_ident(context[33], identifiers[ident_Hash]);
              refalrts::reinit_number(context[9], 0UL);
              refalrts::push_stack( vm, context[1] );
              refalrts::push_stack( vm, context[0] );
              refalrts::link_brackets( context[15], context[47] );
              refalrts::link_brackets( context[32], context[10] );
              refalrts::Iter trash_prev = arg_begin->prev;
              refalrts::use(trash_prev);
              refalrts::Iter res = context[1];
              res = refalrts::splice_evar( res, context[44], context[45] );
              res = refalrts::splice_evar( res, context[0], context[6] );
              res = refalrts::splice_elem( res, context[47] );
              res = refalrts::splice_evar( res, context[42], context[43] );
              res = refalrts::splice_elem( res, context[10] );
              res = refalrts::splice_elem( res, context[9] );
              res = refalrts::splice_elem( res, context[46] );
              res = refalrts::splice_evar( res, context[15], context[33] );
              refalrts::use( res );
              return refalrts::cSuccess;
            } while ( 0 );
            refalrts::stop_sentence(vm);

            do {
              // </0 & Map@2/4 s.Hash1#1/5 s.Hash2#1/6 (/9 # Function-ToNative/15 # GN-Local/20 (/32 e.3#0/40 )/33 e.2#0/42 )/10 e.Tail#1/44 >/1
              context[40] = context[34];
              context[41] = context[35];
              context[42] = context[36];
              context[43] = context[37];
              context[44] = context[38];
              context[45] = context[39];
              if( ! refalrts::ident_term( identifiers[ident_GNm_Local], context[20] ) )
                continue;
              // closed e.3#0 as range 40
              // closed e.2#0 as range 42
              // closed e.Tail#1 as range 44
              //DEBUG: s.Hash1#1: 5
              //DEBUG: s.Hash2#1: 6
              //DEBUG: e.3#0: 40
              //DEBUG: e.2#0: 42
              //DEBUG: e.Tail#1: 44

              refalrts::reset_allocator(vm);
              //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
              //RESULT: Tile{ [[ } Tile{ HalfReuse: (/15 Reuse: # Function-ToNative/20 AsIs: (/32 AsIs: e.3#0/40 HalfReuse: # Hash/33 } s.Hash1#1/5/46 Tile{ HalfReuse: s.Hash21 #6/9 } Tile{ AsIs: )/10 } Tile{ AsIs: e.2#0/42 } )/47 Tile{ AsIs: </0 AsIs: & Map@2/4 AsIs: s.Hash1#1/5 AsIs: s.Hash2#1/6 } Tile{ AsIs: e.Tail#1/44 } Tile{ AsIs: >/1 ]] }
              refalrts::copy_stvar(vm, context[46], context[5]);
              refalrts::alloc_close_bracket(vm, context[47]);
              refalrts::reinit_open_bracket(context[15]);
              refalrts::update_ident(context[20], identifiers[ident_Functionm_ToNative]);
              refalrts::reinit_ident(context[33], identifiers[ident_Hash]);
              refalrts::reinit_svar( context[9], context[6] );
              refalrts::push_stack( vm, context[1] );
              refalrts::push_stack( vm, context[0] );
              refalrts::link_brackets( context[15], context[47] );
              refalrts::link_brackets( context[32], context[10] );
              refalrts::Iter trash_prev = arg_begin->prev;
              refalrts::use(trash_prev);
              refalrts::Iter res = context[1];
              res = refalrts::splice_evar( res, context[44], context[45] );
              res = refalrts::splice_evar( res, context[0], context[6] );
              res = refalrts::splice_elem( res, context[47] );
              res = refalrts::splice_evar( res, context[42], context[43] );
              res = refalrts::splice_elem( res, context[10] );
              res = refalrts::splice_elem( res, context[9] );
              res = refalrts::splice_elem( res, context[46] );
              res = refalrts::splice_evar( res, context[15], context[33] );
              refalrts::use( res );
              return refalrts::cSuccess;
            } while ( 0 );
            refalrts::stop_sentence(vm);

            // </0 & Map@2/4 s.Hash1#1/5 s.Hash2#1/6 (/9 # Function-ToNative/15 s.ScopeClass#1/20 (/32 e.3#0/40 )/33 e.2#0/42 )/10 e.Tail#1/44 >/1
            context[40] = context[34];
            context[41] = context[35];
            context[42] = context[36];
            context[43] = context[37];
            context[44] = context[38];
            context[45] = context[39];
            // closed e.3#0 as range 40
            // closed e.2#0 as range 42
            // closed e.Tail#1 as range 44
            //DEBUG: s.Hash1#1: 5
            //DEBUG: s.Hash2#1: 6
            //DEBUG: s.ScopeClass#1: 20
            //DEBUG: e.3#0: 40
            //DEBUG: e.2#0: 42
            //DEBUG: e.Tail#1: 44

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
            //RESULT: Tile{ [[ } Tile{ AsIs: (/9 AsIs: # Function-ToNative/15 } Tile{ AsIs: (/32 } </46 & MingleName*2/47 Tile{ AsIs: s.ScopeClass#1/20 } Tile{ AsIs: e.3#0/40 } s.Hash1#1/5/48 s.Hash2#1/6/49 >/50 Tile{ AsIs: )/33 AsIs: e.2#0/42 AsIs: )/10 } Tile{ AsIs: </0 AsIs: & Map@2/4 AsIs: s.Hash1#1/5 AsIs: s.Hash2#1/6 } Tile{ AsIs: e.Tail#1/44 } Tile{ AsIs: >/1 ]] }
            refalrts::alloc_open_call(vm, context[46]);
            refalrts::alloc_name(vm, context[47], functions[efunc_gen_MingleName_D2]);
            refalrts::copy_stvar(vm, context[48], context[5]);
            refalrts::copy_stvar(vm, context[49], context[6]);
            refalrts::alloc_close_call(vm, context[50]);
            refalrts::push_stack( vm, context[1] );
            refalrts::push_stack( vm, context[0] );
            refalrts::link_brackets( context[9], context[10] );
            refalrts::link_brackets( context[32], context[33] );
            refalrts::push_stack( vm, context[50] );
            refalrts::push_stack( vm, context[46] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = context[1];
            res = refalrts::splice_evar( res, context[44], context[45] );
            res = refalrts::splice_evar( res, context[0], context[6] );
            res = refalrts::splice_evar( res, context[33], context[10] );
            res = refalrts::splice_evar( res, context[48], context[50] );
            res = refalrts::splice_evar( res, context[40], context[41] );
            res = refalrts::splice_elem( res, context[20] );
            res = refalrts::splice_evar( res, context[46], context[47] );
            res = refalrts::splice_elem( res, context[32] );
            res = refalrts::splice_evar( res, context[9], context[15] );
            refalrts::use( res );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          do {
            // </0 & Map@2/4 s.new#32/5 s.new#33/6 (/9 # CmdNativeFunction/15 s.new#34/20 (/32 e.new#37/34 )/33 t.new#35/40 e.new#36/36 )/10 e.new#38/38 >/1
            context[34] = context[30];
            context[35] = context[31];
            context[36] = context[26];
            context[37] = context[27];
            context[38] = context[28];
            context[39] = context[29];
            if( ! refalrts::ident_term( identifiers[ident_CmdNativeFunction], context[15] ) )
              continue;
            // closed e.new#37 as range 34
            // closed e.new#38 as range 38
            context[41] = refalrts::tvar_left( context[40], context[36], context[37] );
            if( ! context[41] )
              continue;
            // closed e.new#36 as range 36
            do {
              // </0 & Map@2/4 s.Hash1#1/5 s.Hash2#1/6 (/9 # CmdNativeFunction/15 # GN-Entry/20 (/32 e.3#0/42 )/33 t.2#0/40 e.4#0/44 )/10 e.Tail#1/46 >/1
              context[42] = context[34];
              context[43] = context[35];
              context[44] = context[36];
              context[45] = context[37];
              context[46] = context[38];
              context[47] = context[39];
              if( ! refalrts::ident_term( identifiers[ident_GNm_Entry], context[20] ) )
                continue;
              // closed e.3#0 as range 42
              // closed e.4#0 as range 44
              // closed e.Tail#1 as range 46
              //DEBUG: t.2#0: 40
              //DEBUG: s.Hash1#1: 5
              //DEBUG: s.Hash2#1: 6
              //DEBUG: e.3#0: 42
              //DEBUG: e.4#0: 44
              //DEBUG: e.Tail#1: 46

              refalrts::reset_allocator(vm);
              //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
              //RESULT: Tile{ [[ } Tile{ AsIs: (/9 AsIs: # CmdNativeFunction/15 HalfReuse: (/20 } Tile{ AsIs: e.3#0/42 } Tile{ HalfReuse: # Hash/32 } 0/48 0/49 Tile{ AsIs: )/33 AsIs: t.2#0/40 AsIs: e.4#0/44 AsIs: )/10 } Tile{ AsIs: </0 AsIs: & Map@2/4 AsIs: s.Hash1#1/5 AsIs: s.Hash2#1/6 } Tile{ AsIs: e.Tail#1/46 } Tile{ AsIs: >/1 ]] }
              refalrts::alloc_number(vm, context[48], 0UL);
              refalrts::alloc_number(vm, context[49], 0UL);
              refalrts::reinit_open_bracket(context[20]);
              refalrts::reinit_ident(context[32], identifiers[ident_Hash]);
              refalrts::push_stack( vm, context[1] );
              refalrts::push_stack( vm, context[0] );
              refalrts::link_brackets( context[9], context[10] );
              refalrts::link_brackets( context[20], context[33] );
              refalrts::Iter trash_prev = arg_begin->prev;
              refalrts::use(trash_prev);
              refalrts::Iter res = context[1];
              res = refalrts::splice_evar( res, context[46], context[47] );
              res = refalrts::splice_evar( res, context[0], context[6] );
              res = refalrts::splice_evar( res, context[33], context[10] );
              res = refalrts::splice_evar( res, context[48], context[49] );
              res = refalrts::splice_elem( res, context[32] );
              res = refalrts::splice_evar( res, context[42], context[43] );
              res = refalrts::splice_evar( res, context[9], context[20] );
              refalrts::use( res );
              return refalrts::cSuccess;
            } while ( 0 );
            refalrts::stop_sentence(vm);

            do {
              // </0 & Map@2/4 s.Hash1#1/5 s.Hash2#1/6 (/9 # CmdNativeFunction/15 # GN-Local/20 (/32 e.3#0/42 )/33 t.2#0/40 e.4#0/44 )/10 e.Tail#1/46 >/1
              context[42] = context[34];
              context[43] = context[35];
              context[44] = context[36];
              context[45] = context[37];
              context[46] = context[38];
              context[47] = context[39];
              if( ! refalrts::ident_term( identifiers[ident_GNm_Local], context[20] ) )
                continue;
              // closed e.3#0 as range 42
              // closed e.4#0 as range 44
              // closed e.Tail#1 as range 46
              //DEBUG: t.2#0: 40
              //DEBUG: s.Hash1#1: 5
              //DEBUG: s.Hash2#1: 6
              //DEBUG: e.3#0: 42
              //DEBUG: e.4#0: 44
              //DEBUG: e.Tail#1: 46

              refalrts::reset_allocator(vm);
              //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
              //RESULT: Tile{ [[ } Tile{ AsIs: (/9 AsIs: # CmdNativeFunction/15 HalfReuse: (/20 } Tile{ AsIs: e.3#0/42 } Tile{ HalfReuse: # Hash/32 } s.Hash1#1/5/48 s.Hash2#1/6/49 Tile{ AsIs: )/33 AsIs: t.2#0/40 AsIs: e.4#0/44 AsIs: )/10 } Tile{ AsIs: </0 AsIs: & Map@2/4 AsIs: s.Hash1#1/5 AsIs: s.Hash2#1/6 } Tile{ AsIs: e.Tail#1/46 } Tile{ AsIs: >/1 ]] }
              refalrts::copy_stvar(vm, context[48], context[5]);
              refalrts::copy_stvar(vm, context[49], context[6]);
              refalrts::reinit_open_bracket(context[20]);
              refalrts::reinit_ident(context[32], identifiers[ident_Hash]);
              refalrts::push_stack( vm, context[1] );
              refalrts::push_stack( vm, context[0] );
              refalrts::link_brackets( context[9], context[10] );
              refalrts::link_brackets( context[20], context[33] );
              refalrts::Iter trash_prev = arg_begin->prev;
              refalrts::use(trash_prev);
              refalrts::Iter res = context[1];
              res = refalrts::splice_evar( res, context[46], context[47] );
              res = refalrts::splice_evar( res, context[0], context[6] );
              res = refalrts::splice_evar( res, context[33], context[10] );
              res = refalrts::splice_evar( res, context[48], context[49] );
              res = refalrts::splice_elem( res, context[32] );
              res = refalrts::splice_evar( res, context[42], context[43] );
              res = refalrts::splice_evar( res, context[9], context[20] );
              refalrts::use( res );
              return refalrts::cSuccess;
            } while ( 0 );
            refalrts::stop_sentence(vm);

            // </0 & Map@2/4 s.Hash1#1/5 s.Hash2#1/6 (/9 # CmdNativeFunction/15 s.ScopeClass#1/20 (/32 e.3#0/42 )/33 t.2#0/40 e.4#0/44 )/10 e.Tail#1/46 >/1
            context[42] = context[34];
            context[43] = context[35];
            context[44] = context[36];
            context[45] = context[37];
            context[46] = context[38];
            context[47] = context[39];
            // closed e.3#0 as range 42
            // closed e.4#0 as range 44
            // closed e.Tail#1 as range 46
            //DEBUG: t.2#0: 40
            //DEBUG: s.Hash1#1: 5
            //DEBUG: s.Hash2#1: 6
            //DEBUG: s.ScopeClass#1: 20
            //DEBUG: e.3#0: 42
            //DEBUG: e.4#0: 44
            //DEBUG: e.Tail#1: 46

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
            //RESULT: Tile{ [[ } Tile{ AsIs: (/9 AsIs: # CmdNativeFunction/15 } Tile{ AsIs: (/32 } </48 & MingleName*2/49 Tile{ AsIs: s.ScopeClass#1/20 } Tile{ AsIs: e.3#0/42 } s.Hash1#1/5/50 s.Hash2#1/6/51 >/52 Tile{ AsIs: )/33 AsIs: t.2#0/40 AsIs: e.4#0/44 AsIs: )/10 } Tile{ AsIs: </0 AsIs: & Map@2/4 AsIs: s.Hash1#1/5 AsIs: s.Hash2#1/6 } Tile{ AsIs: e.Tail#1/46 } Tile{ AsIs: >/1 ]] }
            refalrts::alloc_open_call(vm, context[48]);
            refalrts::alloc_name(vm, context[49], functions[efunc_gen_MingleName_D2]);
            refalrts::copy_stvar(vm, context[50], context[5]);
            refalrts::copy_stvar(vm, context[51], context[6]);
            refalrts::alloc_close_call(vm, context[52]);
            refalrts::push_stack( vm, context[1] );
            refalrts::push_stack( vm, context[0] );
            refalrts::link_brackets( context[9], context[10] );
            refalrts::link_brackets( context[32], context[33] );
            refalrts::push_stack( vm, context[52] );
            refalrts::push_stack( vm, context[48] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = context[1];
            res = refalrts::splice_evar( res, context[46], context[47] );
            res = refalrts::splice_evar( res, context[0], context[6] );
            res = refalrts::splice_evar( res, context[33], context[10] );
            res = refalrts::splice_evar( res, context[50], context[52] );
            res = refalrts::splice_evar( res, context[42], context[43] );
            res = refalrts::splice_elem( res, context[20] );
            res = refalrts::splice_evar( res, context[48], context[49] );
            res = refalrts::splice_elem( res, context[32] );
            res = refalrts::splice_evar( res, context[9], context[15] );
            refalrts::use( res );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          // </0 & Map@2/4 s.Hash1#1/5 s.Hash2#1/6 (/9 # CmdMetatable/15 s.ScopeClass#1/20 (/32 e.3#0/34 )/33 e.2#0/36 )/10 e.Tail#1/38 >/1
          context[34] = context[30];
          context[35] = context[31];
          context[36] = context[26];
          context[37] = context[27];
          context[38] = context[28];
          context[39] = context[29];
          if( ! refalrts::ident_term( identifiers[ident_CmdMetatable], context[15] ) )
            continue;
          // closed e.3#0 as range 34
          // closed e.2#0 as range 36
          // closed e.Tail#1 as range 38
          //DEBUG: s.Hash1#1: 5
          //DEBUG: s.Hash2#1: 6
          //DEBUG: s.ScopeClass#1: 20
          //DEBUG: e.3#0: 34
          //DEBUG: e.2#0: 36
          //DEBUG: e.Tail#1: 38

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} (/9 # CmdMetatable/15 s.ScopeClass#1/20 (/32 e.3#0/34 )/33 e.2#0/36 )/10 {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 AsIs: & Map@2/4 AsIs: s.Hash1#1/5 AsIs: s.Hash2#1/6 } Tile{ AsIs: e.Tail#1/38 } Tile{ AsIs: >/1 ]] }
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[0] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[1];
          res = refalrts::splice_evar( res, context[38], context[39] );
          refalrts::splice_to_freelist_open( vm, context[6], res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        do {
          // </0 & Map@2/4 s.Hash1#1/5 s.Hash2#1/6 (/9 # CmdEnum/15 s.ScopeClass#1/20 e.1#0/26 )/10 e.Tail#1/28 >/1
          context[26] = context[22];
          context[27] = context[23];
          context[28] = context[24];
          context[29] = context[25];
          if( ! refalrts::ident_term( identifiers[ident_CmdEnum], context[15] ) )
            continue;
          // closed e.1#0 as range 26
          // closed e.Tail#1 as range 28
          //DEBUG: s.Hash1#1: 5
          //DEBUG: s.Hash2#1: 6
          //DEBUG: s.ScopeClass#1: 20
          //DEBUG: e.1#0: 26
          //DEBUG: e.Tail#1: 28

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} (/9 # CmdEnum/15 s.ScopeClass#1/20 e.1#0/26 )/10 {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 AsIs: & Map@2/4 AsIs: s.Hash1#1/5 AsIs: s.Hash2#1/6 } Tile{ AsIs: e.Tail#1/28 } Tile{ AsIs: >/1 ]] }
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[0] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[1];
          res = refalrts::splice_evar( res, context[28], context[29] );
          refalrts::splice_to_freelist_open( vm, context[6], res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        do {
          // </0 & Map@2/4 s.Hash1#1/5 s.Hash2#1/6 (/9 # CmdSwap/15 s.ScopeClass#1/20 e.1#0/26 )/10 e.Tail#1/28 >/1
          context[26] = context[22];
          context[27] = context[23];
          context[28] = context[24];
          context[29] = context[25];
          if( ! refalrts::ident_term( identifiers[ident_CmdSwap], context[15] ) )
            continue;
          // closed e.1#0 as range 26
          // closed e.Tail#1 as range 28
          //DEBUG: s.Hash1#1: 5
          //DEBUG: s.Hash2#1: 6
          //DEBUG: s.ScopeClass#1: 20
          //DEBUG: e.1#0: 26
          //DEBUG: e.Tail#1: 28

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} (/9 # CmdSwap/15 s.ScopeClass#1/20 e.1#0/26 )/10 {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 AsIs: & Map@2/4 AsIs: s.Hash1#1/5 AsIs: s.Hash2#1/6 } Tile{ AsIs: e.Tail#1/28 } Tile{ AsIs: >/1 ]] }
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[0] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[1];
          res = refalrts::splice_evar( res, context[28], context[29] );
          refalrts::splice_to_freelist_open( vm, context[6], res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        do {
          // </0 & Map@2/4 s.Hash1#1/5 s.Hash2#1/6 (/9 # CmdConditionFunc-ToRASL/15 s.ScopeClass#1/20 e.1#0/26 )/10 e.Tail#1/28 >/1
          context[26] = context[22];
          context[27] = context[23];
          context[28] = context[24];
          context[29] = context[25];
          if( ! refalrts::ident_term( identifiers[ident_CmdConditionFuncm_ToRASL], context[15] ) )
            continue;
          // closed e.1#0 as range 26
          // closed e.Tail#1 as range 28
          //DEBUG: s.Hash1#1: 5
          //DEBUG: s.Hash2#1: 6
          //DEBUG: s.ScopeClass#1: 20
          //DEBUG: e.1#0: 26
          //DEBUG: e.Tail#1: 28

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} (/9 # CmdConditionFunc-ToRASL/15 s.ScopeClass#1/20 e.1#0/26 )/10 {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 AsIs: & Map@2/4 AsIs: s.Hash1#1/5 AsIs: s.Hash2#1/6 } Tile{ AsIs: e.Tail#1/28 } Tile{ AsIs: >/1 ]] }
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[0] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[1];
          res = refalrts::splice_evar( res, context[28], context[29] );
          refalrts::splice_to_freelist_open( vm, context[6], res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        do {
          // </0 & Map@2/4 s.Hash1#1/5 s.Hash2#1/6 (/9 # CmdConditionFunc-ToNative/15 s.ScopeClass#1/20 e.1#0/26 )/10 e.Tail#1/28 >/1
          context[26] = context[22];
          context[27] = context[23];
          context[28] = context[24];
          context[29] = context[25];
          if( ! refalrts::ident_term( identifiers[ident_CmdConditionFuncm_ToNative], context[15] ) )
            continue;
          // closed e.1#0 as range 26
          // closed e.Tail#1 as range 28
          //DEBUG: s.Hash1#1: 5
          //DEBUG: s.Hash2#1: 6
          //DEBUG: s.ScopeClass#1: 20
          //DEBUG: e.1#0: 26
          //DEBUG: e.Tail#1: 28

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} (/9 # CmdConditionFunc-ToNative/15 s.ScopeClass#1/20 e.1#0/26 )/10 {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 AsIs: & Map@2/4 AsIs: s.Hash1#1/5 AsIs: s.Hash2#1/6 } Tile{ AsIs: e.Tail#1/28 } Tile{ AsIs: >/1 ]] }
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[0] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[1];
          res = refalrts::splice_evar( res, context[28], context[29] );
          refalrts::splice_to_freelist_open( vm, context[6], res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & Map@2/4 s.Hash1#1/5 s.Hash2#1/6 (/9 # CmdDeclaration/15 s.ScopeClass#1/20 e.1#0/26 )/10 e.Tail#1/28 >/1
        context[26] = context[22];
        context[27] = context[23];
        context[28] = context[24];
        context[29] = context[25];
        if( ! refalrts::ident_term( identifiers[ident_CmdDeclaration], context[15] ) )
          continue;
        // closed e.1#0 as range 26
        // closed e.Tail#1 as range 28
        //DEBUG: s.Hash1#1: 5
        //DEBUG: s.Hash2#1: 6
        //DEBUG: s.ScopeClass#1: 20
        //DEBUG: e.1#0: 26
        //DEBUG: e.Tail#1: 28

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} (/9 # CmdDeclaration/15 s.ScopeClass#1/20 e.1#0/26 )/10 {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & Map@2/4 AsIs: s.Hash1#1/5 AsIs: s.Hash2#1/6 } Tile{ AsIs: e.Tail#1/28 } Tile{ AsIs: >/1 ]] }
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[28], context[29] );
        refalrts::splice_to_freelist_open( vm, context[6], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & Map@2/4 s.Hash1#1/5 s.Hash2#1/6 (/9 # CmdEmitNativeCode/15 t.0#0/20 e.1#0/22 )/10 e.Tail#1/24 >/1
      context[22] = context[16];
      context[23] = context[17];
      context[24] = context[18];
      context[25] = context[19];
      if( ! refalrts::ident_term( identifiers[ident_CmdEmitNativeCode], context[15] ) )
        continue;
      // closed e.1#0 as range 22
      // closed e.Tail#1 as range 24
      //DEBUG: t.0#0: 20
      //DEBUG: s.Hash1#1: 5
      //DEBUG: s.Hash2#1: 6
      //DEBUG: e.1#0: 22
      //DEBUG: e.Tail#1: 24

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/9 AsIs: # CmdEmitNativeCode/15 AsIs: t.0#0/20 AsIs: e.1#0/22 AsIs: )/10 } Tile{ AsIs: </0 AsIs: & Map@2/4 AsIs: s.Hash1#1/5 AsIs: s.Hash2#1/6 } Tile{ AsIs: e.Tail#1/24 } Tile{ AsIs: >/1 ]] }
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

    // </0 & Map@2/4 s.Hash1#1/5 s.Hash2#1/6 t.Next#1/9 e.Tail#1/11 >/1
    context[11] = context[7];
    context[12] = context[8];
    // closed e.Tail#1 as range 11
    //DEBUG: t.Next#1: 9
    //DEBUG: s.Hash1#1: 5
    //DEBUG: s.Hash2#1: 6
    //DEBUG: e.Tail#1: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & SetCookies*11/4 AsIs: s.Hash1#1/5 AsIs: s.Hash2#1/6 AsIs: t.Next#1/9 } >/13 </14 & Map@2/15 s.Hash1#1/5/16 s.Hash2#1/6/17 Tile{ AsIs: e.Tail#1/11 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_close_call(vm, context[13]);
    refalrts::alloc_open_call(vm, context[14]);
    refalrts::alloc_name(vm, context[15], functions[efunc_gen_Map_Z2]);
    refalrts::copy_stvar(vm, context[16], context[5]);
    refalrts::copy_stvar(vm, context[17], context[6]);
    refalrts::update_name(context[4], functions[efunc_gen_SetCookies_D11]);
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
  //RESULT: Tile{ [[ } </7 & Map@0/8 Tile{ HalfReuse: (/0 Reuse: & SetCookies@0/4 AsIs: s.Hash1#1/5 AsIs: s.Hash2#1/6 } )/9 Tile{ AsIs: e.items#0/2 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[7]);
  refalrts::alloc_name(vm, context[8], functions[efunc_gen_Map_Z0]);
  refalrts::alloc_close_bracket(vm, context[9]);
  refalrts::reinit_open_bracket(context[0]);
  refalrts::update_name(context[4], functions[efunc_gen_SetCookies_Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[7] );
  refalrts::link_brackets( context[0], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_elem( res, context[9] );
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
  // </0 & Map@3/4 (/7 e.new#1/5 )/8 e.new#2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  // closed e.new#2 as range 2
  do {
    // </0 & Map@3/4 (/7 e.new#5/9 )/8 t.new#3/13 e.new#4/11 >/1
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
      // </0 & Map@3/4 (/7 e.Prefix#1/15 )/8 (/13 s.Id#2/21 e.0#0/19 )/14 e.Tail#1/17 >/1
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
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/13 } # CmdCEnum-Item/22 (/23 e.Prefix#1/15/24 )/26 Tile{ AsIs: e.0#0/19 } Tile{ AsIs: s.Id#2/21 } Tile{ AsIs: )/14 } Tile{ AsIs: </0 AsIs: & Map@3/4 AsIs: (/7 AsIs: e.Prefix#1/15 AsIs: )/8 } Tile{ AsIs: e.Tail#1/17 } Tile{ AsIs: >/1 ]] }
      refalrts::alloc_ident(vm, context[22], identifiers[ident_CmdCEnumm_Item]);
      refalrts::alloc_open_bracket(vm, context[23]);
      refalrts::copy_evar(vm, context[24], context[25], context[15], context[16]);
      refalrts::alloc_close_bracket(vm, context[26]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::link_brackets( context[13], context[14] );
      refalrts::link_brackets( context[23], context[26] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[17], context[18] );
      res = refalrts::splice_evar( res, context[0], context[8] );
      res = refalrts::splice_elem( res, context[14] );
      res = refalrts::splice_elem( res, context[21] );
      res = refalrts::splice_evar( res, context[19], context[20] );
      res = refalrts::splice_evar( res, context[22], context[26] );
      res = refalrts::splice_elem( res, context[13] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Map@3/4 (/7 e.Prefix#1/15 )/8 t.Next#1/13 e.Tail#1/17 >/1
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
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & PrepareTable$2\1*1/4 AsIs: (/7 AsIs: e.Prefix#1/15 AsIs: )/8 AsIs: t.Next#1/13 } >/19 </20 & Map@3/21 (/22 e.Prefix#1/15/23 )/25 Tile{ AsIs: e.Tail#1/17 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_close_call(vm, context[19]);
    refalrts::alloc_open_call(vm, context[20]);
    refalrts::alloc_name(vm, context[21], functions[efunc_gen_Map_Z3]);
    refalrts::alloc_open_bracket(vm, context[22]);
    refalrts::copy_evar(vm, context[23], context[24], context[15], context[16]);
    refalrts::alloc_close_bracket(vm, context[25]);
    refalrts::update_name(context[4], functions[efunc_gen_PrepareTable_S2L1D1]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[20] );
    refalrts::link_brackets( context[22], context[25] );
    refalrts::push_stack( vm, context[19] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[19], context[25] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Map@3/4 (/7 e.Prefix#1/9 )/8 >/1
    context[9] = context[5];
    context[10] = context[6];
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Prefix#1 as range 9
    //DEBUG: e.Prefix#1: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Map@3/4 (/7 e.Prefix#1/9 )/8 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Map@3/4 (/7 e.Prefix#1/5 )/8 e.items#0/2 >/1
  // closed e.Prefix#1 as range 5
  // closed e.items#0 as range 2
  //DEBUG: e.Prefix#1: 5
  //DEBUG: e.items#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </9 & Map@0/10 Tile{ HalfReuse: [*]/0 Reuse: & PrepareTable$2\1@0/4 AsIs: (/7 AsIs: e.Prefix#1/5 AsIs: )/8 } {*}/11 Tile{ AsIs: e.items#0/2 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[9]);
  refalrts::alloc_name(vm, context[10], functions[efunc_gen_Map_Z0]);
  refalrts::alloc_unwrapped_closure(vm, context[11], context[0]);
  refalrts::reinit_closure_head(context[0]);
  refalrts::update_name(context[4], functions[efunc_gen_PrepareTable_S2L1Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[9] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_elem( res, context[11] );
  res = refalrts::splice_evar( res, context[0], context[8] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::use( res );
  refalrts::wrap_closure( context[11] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Map_Z3("Map@3", COOKIE1_, COOKIE2_, func_gen_Map_Z3);


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
