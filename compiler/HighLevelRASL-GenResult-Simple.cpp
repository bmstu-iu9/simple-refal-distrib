// This file automatically generated from 'HighLevelRASL-GenResult-Simple.ref'
// Don't edit! Edit 'HighLevelRASL-GenResult-Simple.ref' and recompile it

#include "refalrts.h"

#define cookie_ns cookie_ns_3556786118_3192673369
#define COOKIE1_ 3556786118U
#define COOKIE2_ 3192673369U

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
  efunc_gen_Fetch_Z1 = 18,
  efunc_gen_Map_Z5 = 19,
  efunc_gen_Map_Z3 = 20,
  efunc_gen_GenResultm_Simple_B1 = 21,
  efunc_gen_GenResult_A1 = 22,
  efunc_gen_GenResultm_Condition_A1 = 23,
  efunc_gen_Map_Z4 = 24,
  efunc_gen_DoGenResult_Z1 = 25,
  efunc_CollectStrings = 26,
  efunc_gen_Map_Z1 = 27,
  efunc_IncVarOffset = 28,
  efunc_gen_Map_Z2 = 29,
  efunc_PrintVar = 30,
  efunc_Mu = 31,
  efunc_Up = 32,
  efunc_Evm_met = 33,
  efunc_Residue = 34,
  efunc_u_u_Metau_Residue = 35,
  efunc_MapAccum = 36,
  efunc_UnBracket = 37,
  efunc_DelAccumulator = 38,
  efunc_Inc = 39,
  efunc_Dec = 40,
  efunc_GenResultm_Simple = 41,
  efunc_GenResultm_Condition = 42,
  efunc_MakeVarTablem_Simple = 43,
  efunc_MakeVarTablem_Conditions = 44,
  efunc_GenResult = 45,
  efunc_DoGenResult = 46,
  efunc_MakeVariableCommentTable = 47,
  efunc_ReplicateVar = 48,
  efunc_MakeVariableComment = 49,
  efunc_gen_Apply_Z4 = 50,
  efunc_gen_DoGenResult_Z2 = 51,
  efunc_gen_DoGenResult_Z0 = 52,
  efunc_gen_Map_Z0 = 53,
  efunc_gen_ReplicateVar_L1D1 = 54,
  efunc_gen_ReplicateVar_L1Z0 = 55,
  efunc_gen_MakeVarTablem_Simple_D1 = 56,
  efunc_gen_MakeVarTablem_Simple_Z0 = 57,
  efunc_gen_MakeVarTablem_Conditions_D1 = 58,
  efunc_gen_MakeVarTablem_Conditions_Z0 = 59,
  efunc_gen_ReplicateVar_D1 = 60,
  efunc_gen_ReplicateVar_Z0 = 61,
  efunc_gen_Fetch_Z2 = 62,
  efunc_Sort = 63,
  efunc_gen_Pipe_S2L1Z0 = 64,
  efunc_gen_Sort_Z0 = 65,
  efunc_gen_MakeVariableComment_Z0 = 66,
  efunc_gen_Fetch_Z0 = 67,
  efunc_gen_Map_Z6 = 68,
  efunc_gen_MakeVariableComment_D1 = 69,
};


enum ident {
  ident_CmdSpliceToFreeList = 0,
  ident_CmdNextStep = 1,
  ident_CmdResetAllocator = 2,
  ident_CmdSetRes = 3,
  ident_ARGm_BEGIN = 4,
  ident_CmdUseRes = 5,
  ident_TkOpenCallCond = 6,
  ident_Allocate = 7,
  ident_ElOpenCall = 8,
  ident_CmdCreateElem = 9,
  ident_CmdInsertElem = 10,
  ident_TkCloseCallCond = 11,
  ident_ElCloseCall = 12,
  ident_CmdPushStack = 13,
  ident_Symbol = 14,
  ident_Char = 15,
  ident_ElChar = 16,
  ident_Name = 17,
  ident_ElName = 18,
  ident_Number = 19,
  ident_ElNumber = 20,
  ident_Identifier = 21,
  ident_ElIdent = 22,
  ident_TkString = 23,
  ident_ElString = 24,
  ident_CmdInsertRange = 25,
  ident_Brackets = 26,
  ident_TkCloseBracket = 27,
  ident_ElOpenBracket = 28,
  ident_CallBrackets = 29,
  ident_TkCloseCall = 30,
  ident_ADTm_Brackets = 31,
  ident_ElOpenADT = 32,
  ident_TkCloseADT = 33,
  ident_ClosureBrackets = 34,
  ident_TkUnwrappedClosure = 35,
  ident_ElClosureHead = 36,
  ident_ElCloseBracket = 37,
  ident_CmdLinkBrackets = 38,
  ident_ElCloseADT = 39,
  ident_CmdWrapClosure = 40,
  ident_ElUnwrappedClosure = 41,
  ident_TkVariable = 42,
  ident_CmdInsertVar = 43,
  ident_CmdCopyVar = 44,
  ident_CmdComment = 45,
  ident_Offset = 46,
  ident_Mu = 47,
  ident_Up = 48,
  ident_Evm_met = 49,
  ident_Residue = 50,
  ident_u_u_Metau_Residue = 51,
  ident_Apply = 52,
  ident_Map = 53,
  ident_Reduce = 54,
  ident_Fetch = 55,
  ident_MapAccum = 56,
  ident_DoMapAccum = 57,
  ident_UnBracket = 58,
  ident_DelAccumulator = 59,
  ident_Inc = 60,
  ident_Dec = 61,
  ident_Pipe = 62,
  ident_GenResultm_Simple = 63,
  ident_GenResultm_Condition = 64,
  ident_MakeVarTablem_Simple = 65,
  ident_MakeVarTablem_Conditions = 66,
  ident_GenResult = 67,
  ident_DoGenResult = 68,
  ident_MakeVariableCommentTable = 69,
  ident_ReplicateVar = 70,
  ident_MakeVariableComment = 71,
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


static refalrts::FnResult func_gen_GenResultm_Simple_B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 27 elems
  refalrts::Iter context[27];
  refalrts::zeros( context, 27 );
  // </0 & GenResult-Simple:1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & GenResult-Simple:1/4 s.new#1/5 (/8 e.new#2/6 )/9 e.new#3/2 >/1
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
    // </0 & GenResult-Simple:1/4 s.ContextOffset#2/5 (/8 e.CommonVars#2/10 )/9 >/1
    context[10] = context[6];
    context[11] = context[7];
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.CommonVars#2 as range 10
    //DEBUG: s.ContextOffset#2: 5
    //DEBUG: e.CommonVars#2: 10

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: s.ContextOffset#2/5 } Tile{ AsIs: </0 Reuse: & Fetch@1/4 } </12 Tile{ HalfReuse: & Map@5/8 AsIs: e.CommonVars#2/10 HalfReuse: >/9 AsIs: >/1 } (/13 # CmdSpliceToFreeList/14 )/15 (/16 # CmdNextStep/17 )/18 Tile{ ]] }
    refalrts::alloc_open_call(vm, context[12]);
    refalrts::alloc_open_bracket(vm, context[13]);
    refalrts::alloc_ident(vm, context[14], identifiers[ident_CmdSpliceToFreeList]);
    refalrts::alloc_close_bracket(vm, context[15]);
    refalrts::alloc_open_bracket(vm, context[16]);
    refalrts::alloc_ident(vm, context[17], identifiers[ident_CmdNextStep]);
    refalrts::alloc_close_bracket(vm, context[18]);
    refalrts::update_name(context[4], functions[efunc_gen_Fetch_Z1]);
    refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z5]);
    refalrts::reinit_close_call(context[9]);
    refalrts::link_brackets( context[16], context[18] );
    refalrts::link_brackets( context[13], context[15] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[9] );
    refalrts::push_stack( vm, context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[13], context[18] );
    res = refalrts::splice_evar( res, context[8], context[1] );
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_elem( res, context[5] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & GenResult-Simple:1/4 s.ContextOffset#2/5 (/8 e.CommonVars#2/6 )/9 e.ResultCommands#2/2 >/1
  // closed e.CommonVars#2 as range 6
  // closed e.ResultCommands#2 as range 2
  //DEBUG: s.ContextOffset#2: 5
  //DEBUG: e.CommonVars#2: 6
  //DEBUG: e.ResultCommands#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: s.ContextOffset#2/5 } Tile{ AsIs: </0 Reuse: & Fetch@1/4 } </10 & Map@5/11 Tile{ AsIs: e.CommonVars#2/6 } >/12 >/13 Tile{ AsIs: (/8 } # CmdResetAllocator/14 )/15 (/16 # CmdSetRes/17 # ARG-BEGIN/18 Tile{ AsIs: )/9 AsIs: e.ResultCommands#2/2 HalfReuse: (/1 } # CmdUseRes/19 )/20 (/21 # CmdSpliceToFreeList/22 )/23 (/24 # CmdNextStep/25 )/26 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[10]);
  refalrts::alloc_name(vm, context[11], functions[efunc_gen_Map_Z5]);
  refalrts::alloc_close_call(vm, context[12]);
  refalrts::alloc_close_call(vm, context[13]);
  refalrts::alloc_ident(vm, context[14], identifiers[ident_CmdResetAllocator]);
  refalrts::alloc_close_bracket(vm, context[15]);
  refalrts::alloc_open_bracket(vm, context[16]);
  refalrts::alloc_ident(vm, context[17], identifiers[ident_CmdSetRes]);
  refalrts::alloc_ident(vm, context[18], identifiers[ident_ARGm_BEGIN]);
  refalrts::alloc_ident(vm, context[19], identifiers[ident_CmdUseRes]);
  refalrts::alloc_close_bracket(vm, context[20]);
  refalrts::alloc_open_bracket(vm, context[21]);
  refalrts::alloc_ident(vm, context[22], identifiers[ident_CmdSpliceToFreeList]);
  refalrts::alloc_close_bracket(vm, context[23]);
  refalrts::alloc_open_bracket(vm, context[24]);
  refalrts::alloc_ident(vm, context[25], identifiers[ident_CmdNextStep]);
  refalrts::alloc_close_bracket(vm, context[26]);
  refalrts::update_name(context[4], functions[efunc_gen_Fetch_Z1]);
  refalrts::reinit_open_bracket(context[1]);
  refalrts::link_brackets( context[24], context[26] );
  refalrts::link_brackets( context[21], context[23] );
  refalrts::link_brackets( context[1], context[20] );
  refalrts::link_brackets( context[16], context[9] );
  refalrts::link_brackets( context[8], context[15] );
  refalrts::push_stack( vm, context[13] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[12] );
  refalrts::push_stack( vm, context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[19], context[26] );
  res = refalrts::splice_evar( res, context[9], context[1] );
  res = refalrts::splice_evar( res, context[14], context[18] );
  res = refalrts::splice_elem( res, context[8] );
  res = refalrts::splice_evar( res, context[12], context[13] );
  res = refalrts::splice_evar( res, context[6], context[7] );
  res = refalrts::splice_evar( res, context[10], context[11] );
  res = refalrts::splice_evar( res, context[0], context[4] );
  res = refalrts::splice_elem( res, context[5] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_GenResultm_Simple_B1("GenResult-Simple:1", COOKIE1_, COOKIE2_, func_gen_GenResultm_Simple_B1);


static refalrts::FnResult func_GenResultm_Simple(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  // </0 & GenResult-Simple/4 s.ContextOffset#1/5 (/8 e.PatternVars#1/6 )/9 (/12 e.MarkedPattern#1/10 )/13 e.Result#1/2 >/1
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
  // closed e.PatternVars#1 as range 6
  // closed e.MarkedPattern#1 as range 10
  // closed e.Result#1 as range 2
  //DEBUG: s.ContextOffset#1: 5
  //DEBUG: e.PatternVars#1: 6
  //DEBUG: e.MarkedPattern#1: 10
  //DEBUG: e.Result#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.MarkedPattern#1/10 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </14 Tile{ HalfReuse: & GenResult-Simple:1/13 } Tile{ AsIs: </0 Reuse: & GenResult=1/4 AsIs: s.ContextOffset#1/5 AsIs: (/8 } Tile{ AsIs: e.Result#1/2 } Tile{ AsIs: )/9 HalfReuse: </12 } & Map@3/15 Tile{ AsIs: e.PatternVars#1/6 } >/16 >/17 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[14]);
  refalrts::alloc_name(vm, context[15], functions[efunc_gen_Map_Z3]);
  refalrts::alloc_close_call(vm, context[16]);
  refalrts::alloc_close_call(vm, context[17]);
  refalrts::reinit_name(context[13], functions[efunc_gen_GenResultm_Simple_B1]);
  refalrts::update_name(context[4], functions[efunc_gen_GenResult_A1]);
  refalrts::reinit_open_call(context[12]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[14] );
  refalrts::push_stack( vm, context[17] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[16] );
  refalrts::push_stack( vm, context[12] );
  refalrts::link_brackets( context[8], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[16], context[17] );
  res = refalrts::splice_evar( res, context[6], context[7] );
  res = refalrts::splice_elem( res, context[15] );
  res = refalrts::splice_evar( res, context[9], context[12] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[0], context[8] );
  res = refalrts::splice_elem( res, context[13] );
  res = refalrts::splice_elem( res, context[14] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_GenResultm_Simple("GenResult-Simple", 0U, 0U, func_GenResultm_Simple);


static refalrts::FnResult func_gen_GenResultm_Condition_A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
  // </0 & GenResult-Condition=1/4 s.ContextOffset#2/5 (/8 e.CommonVars#2/6 )/9 e.ResultCommands#2/2 >/1
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
  // closed e.CommonVars#2 as range 6
  // closed e.ResultCommands#2 as range 2
  //DEBUG: s.ContextOffset#2: 5
  //DEBUG: e.CommonVars#2: 6
  //DEBUG: e.ResultCommands#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: s.ContextOffset#2/5 } Tile{ AsIs: </0 Reuse: & Fetch@1/4 } </10 & Map@5/11 Tile{ AsIs: e.CommonVars#2/6 } >/12 >/13 Tile{ AsIs: (/8 } # CmdResetAllocator/14 )/15 (/16 # CmdSetRes/17 1/18 Tile{ AsIs: )/9 AsIs: e.ResultCommands#2/2 HalfReuse: (/1 } # CmdUseRes/19 )/20 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[10]);
  refalrts::alloc_name(vm, context[11], functions[efunc_gen_Map_Z5]);
  refalrts::alloc_close_call(vm, context[12]);
  refalrts::alloc_close_call(vm, context[13]);
  refalrts::alloc_ident(vm, context[14], identifiers[ident_CmdResetAllocator]);
  refalrts::alloc_close_bracket(vm, context[15]);
  refalrts::alloc_open_bracket(vm, context[16]);
  refalrts::alloc_ident(vm, context[17], identifiers[ident_CmdSetRes]);
  refalrts::alloc_number(vm, context[18], 1UL);
  refalrts::alloc_ident(vm, context[19], identifiers[ident_CmdUseRes]);
  refalrts::alloc_close_bracket(vm, context[20]);
  refalrts::update_name(context[4], functions[efunc_gen_Fetch_Z1]);
  refalrts::reinit_open_bracket(context[1]);
  refalrts::link_brackets( context[1], context[20] );
  refalrts::link_brackets( context[16], context[9] );
  refalrts::link_brackets( context[8], context[15] );
  refalrts::push_stack( vm, context[13] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[12] );
  refalrts::push_stack( vm, context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[19], context[20] );
  res = refalrts::splice_evar( res, context[9], context[1] );
  res = refalrts::splice_evar( res, context[14], context[18] );
  res = refalrts::splice_elem( res, context[8] );
  res = refalrts::splice_evar( res, context[12], context[13] );
  res = refalrts::splice_evar( res, context[6], context[7] );
  res = refalrts::splice_evar( res, context[10], context[11] );
  res = refalrts::splice_evar( res, context[0], context[4] );
  res = refalrts::splice_elem( res, context[5] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_GenResultm_Condition_A1("GenResult-Condition=1", COOKIE1_, COOKIE2_, func_gen_GenResultm_Condition_A1);


static refalrts::FnResult func_GenResultm_Condition(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
  // </0 & GenResult-Condition/4 s.ContextOffset#1/5 (/8 e.PatternVars#1/6 )/9 e.CondResult#1/2 >/1
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
  // closed e.PatternVars#1 as range 6
  // closed e.CondResult#1 as range 2
  //DEBUG: s.ContextOffset#1: 5
  //DEBUG: e.PatternVars#1: 6
  //DEBUG: e.CondResult#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </10 & GenResult-Condition=1/11 Tile{ AsIs: </0 Reuse: & GenResult=1/4 AsIs: s.ContextOffset#1/5 AsIs: (/8 } Tile{ AsIs: e.CondResult#1/2 } Tile{ AsIs: )/9 } </12 & Map@4/13 Tile{ AsIs: e.PatternVars#1/6 } >/14 >/15 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[10]);
  refalrts::alloc_name(vm, context[11], functions[efunc_gen_GenResultm_Condition_A1]);
  refalrts::alloc_open_call(vm, context[12]);
  refalrts::alloc_name(vm, context[13], functions[efunc_gen_Map_Z4]);
  refalrts::alloc_close_call(vm, context[14]);
  refalrts::alloc_close_call(vm, context[15]);
  refalrts::update_name(context[4], functions[efunc_gen_GenResult_A1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[10] );
  refalrts::push_stack( vm, context[15] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[14] );
  refalrts::push_stack( vm, context[12] );
  refalrts::link_brackets( context[8], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[14], context[15] );
  res = refalrts::splice_evar( res, context[6], context[7] );
  res = refalrts::splice_evar( res, context[12], context[13] );
  res = refalrts::splice_elem( res, context[9] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[0], context[8] );
  res = refalrts::splice_evar( res, context[10], context[11] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_GenResultm_Condition("GenResult-Condition", 0U, 0U, func_GenResultm_Condition);


static refalrts::FnResult func_MakeVarTablem_Simple(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  // </0 & MakeVarTable-Simple/4 (/7 s.Mode#1/9 (/12 e.Index#1/10 )/13 e.Offsets#1/5 )/8 >/1
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
  if( ! refalrts::svar_left( context[9], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  context[10] = 0;
  context[11] = 0;
  context[12] = refalrts::brackets_left( context[10], context[11], context[5], context[6] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[12], context[13]);
  // closed e.Index#1 as range 10
  // closed e.Offsets#1 as range 5
  //DEBUG: s.Mode#1: 9
  //DEBUG: e.Index#1: 10
  //DEBUG: e.Offsets#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: s.Mode#1/9 AsIs: (/12 AsIs: e.Index#1/10 AsIs: )/13 } Tile{ HalfReuse: (/4 } Tile{ AsIs: )/8 } Tile{ AsIs: e.Offsets#1/5 } Tile{ HalfReuse: )/1 ]] }
  refalrts::reinit_open_bracket(context[4]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[7], context[1] );
  refalrts::link_brackets( context[4], context[8] );
  refalrts::link_brackets( context[12], context[13] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_elem( res, context[8] );
  res = refalrts::splice_elem( res, context[4] );
  res = refalrts::splice_evar( res, context[7], context[13] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_MakeVarTablem_Simple("MakeVarTable-Simple", COOKIE1_, COOKIE2_, func_MakeVarTablem_Simple);


static refalrts::FnResult func_MakeVarTablem_Conditions(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  // </0 & MakeVarTable-Conditions/4 (/7 s.Mode#1/9 (/12 e.Index#1/10 )/13 e.Offsets#1/5 )/8 >/1
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
  if( ! refalrts::svar_left( context[9], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  context[10] = 0;
  context[11] = 0;
  context[12] = refalrts::brackets_left( context[10], context[11], context[5], context[6] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[12], context[13]);
  // closed e.Index#1 as range 10
  // closed e.Offsets#1 as range 5
  //DEBUG: s.Mode#1: 9
  //DEBUG: e.Index#1: 10
  //DEBUG: e.Offsets#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: s.Mode#1/9 AsIs: (/12 AsIs: e.Index#1/10 AsIs: )/13 } Tile{ HalfReuse: (/4 } Tile{ AsIs: e.Offsets#1/5 } Tile{ AsIs: )/8 HalfReuse: )/1 ]] }
  refalrts::reinit_open_bracket(context[4]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[7], context[1] );
  refalrts::link_brackets( context[4], context[8] );
  refalrts::link_brackets( context[12], context[13] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_elem( res, context[4] );
  res = refalrts::splice_evar( res, context[7], context[13] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_MakeVarTablem_Conditions("MakeVarTable-Conditions", COOKIE1_, COOKIE2_, func_MakeVarTablem_Conditions);


static refalrts::FnResult func_gen_GenResult_A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
  // </0 & GenResult=1/4 s.ContextOffset#1/5 (/8 e.Result#1/6 )/9 e.PatternVars#2/2 >/1
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
  // closed e.Result#1 as range 6
  // closed e.PatternVars#2 as range 2
  //DEBUG: s.ContextOffset#1: 5
  //DEBUG: e.Result#1: 6
  //DEBUG: e.PatternVars#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoGenResult@1/4 } (/10 Tile{ AsIs: e.PatternVars#2/2 } )/11 Tile{ AsIs: s.ContextOffset#1/5 } </12 Tile{ HalfReuse: & CollectStrings/8 AsIs: e.Result#1/6 HalfReuse: >/9 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[10]);
  refalrts::alloc_close_bracket(vm, context[11]);
  refalrts::alloc_open_call(vm, context[12]);
  refalrts::update_name(context[4], functions[efunc_gen_DoGenResult_Z1]);
  refalrts::reinit_name(context[8], functions[efunc_CollectStrings]);
  refalrts::reinit_close_call(context[9]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[9] );
  refalrts::push_stack( vm, context[12] );
  refalrts::link_brackets( context[10], context[11] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[8], context[9] );
  res = refalrts::splice_elem( res, context[12] );
  res = refalrts::splice_elem( res, context[5] );
  res = refalrts::splice_elem( res, context[11] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_elem( res, context[10] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_GenResult_A1("GenResult=1", COOKIE1_, COOKIE2_, func_gen_GenResult_A1);


static refalrts::FnResult func_GenResult(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
  // </0 & GenResult/4 s.ContextOffset#1/5 s.FnMakeVarTable#1/6 (/9 e.PatternVars#1/7 )/10 e.Result#1/2 >/1
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
  // closed e.PatternVars#1 as range 7
  // closed e.Result#1 as range 2
  //DEBUG: s.ContextOffset#1: 5
  //DEBUG: s.FnMakeVarTable#1: 6
  //DEBUG: e.PatternVars#1: 7
  //DEBUG: e.Result#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} s.FnMakeVarTable#1/6 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & GenResult=1/4 AsIs: s.ContextOffset#1/5 } (/11 Tile{ AsIs: e.Result#1/2 } )/12 </13 & Map@1/14 Tile{ HalfReuse: s.FnMakeVarTable1 #6/9 AsIs: e.PatternVars#1/7 HalfReuse: >/10 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[11]);
  refalrts::alloc_close_bracket(vm, context[12]);
  refalrts::alloc_open_call(vm, context[13]);
  refalrts::alloc_name(vm, context[14], functions[efunc_gen_Map_Z1]);
  refalrts::update_name(context[4], functions[efunc_gen_GenResult_A1]);
  refalrts::reinit_svar( context[9], context[6] );
  refalrts::reinit_close_call(context[10]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[10] );
  refalrts::push_stack( vm, context[13] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[12], context[14] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_elem( res, context[11] );
  refalrts::splice_to_freelist_open( vm, context[5], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_GenResult("GenResult", COOKIE1_, COOKIE2_, func_GenResult);


static refalrts::FnResult func_DoGenResult(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 94 elems
  refalrts::Iter context[94];
  refalrts::zeros( context, 94 );
  // </0 & DoGenResult/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DoGenResult/4 (/7 e.new#1/5 )/8 (/11 e.new#2/9 )/12 (/15 e.new#3/13 )/16 s.new#4/17 e.new#5/2 >/1
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
  // closed e.new#5 as range 2
  do {
    // </0 & DoGenResult/4 (/7 e.new#10/18 )/8 (/11 e.new#11/20 )/12 (/15 e.new#12/22 )/16 s.new#6/17 (/28 s.new#7/30 e.new#8/26 )/29 e.new#9/24 >/1
    context[18] = context[5];
    context[19] = context[6];
    context[20] = context[9];
    context[21] = context[10];
    context[22] = context[13];
    context[23] = context[14];
    context[24] = context[2];
    context[25] = context[3];
    context[26] = 0;
    context[27] = 0;
    context[28] = refalrts::brackets_left( context[26], context[27], context[24], context[25] );
    if( ! context[28] )
      continue;
    refalrts::bracket_pointers(context[28], context[29]);
    // closed e.new#10 as range 18
    // closed e.new#11 as range 20
    // closed e.new#12 as range 22
    // closed e.new#9 as range 24
    if( ! refalrts::svar_left( context[30], context[26], context[27] ) )
      continue;
    // closed e.new#8 as range 26
    do {
      // </0 & DoGenResult/4 (/7 e.new#18/31 )/8 (/11 e.new#19/33 )/12 (/15 e.new#20/35 )/16 s.new#13/17 (/28 s.new#15/30 s.new#16/41 e.new#17/37 )/29 e.new#14/39 >/1
      context[31] = context[18];
      context[32] = context[19];
      context[33] = context[20];
      context[34] = context[21];
      context[35] = context[22];
      context[36] = context[23];
      context[37] = context[26];
      context[38] = context[27];
      context[39] = context[24];
      context[40] = context[25];
      // closed e.new#18 as range 31
      // closed e.new#19 as range 33
      // closed e.new#20 as range 35
      // closed e.new#14 as range 39
      if( ! refalrts::svar_left( context[41], context[37], context[38] ) )
        continue;
      // closed e.new#17 as range 37
      do {
        // </0 & DoGenResult/4 (/7 e.new#25/42 )/8 (/11 e.new#26/44 )/12 (/15 e.new#27/46 )/16 s.new#21/17 (/28 s.new#23/30 s.new#24/41 )/29 e.new#22/48 >/1
        context[42] = context[31];
        context[43] = context[32];
        context[44] = context[33];
        context[45] = context[34];
        context[46] = context[35];
        context[47] = context[36];
        context[48] = context[39];
        context[49] = context[40];
        if( ! refalrts::empty_seq( context[37], context[38] ) )
          continue;
        // closed e.new#25 as range 42
        // closed e.new#26 as range 44
        // closed e.new#27 as range 46
        // closed e.new#22 as range 48
        do {
          // </0 & DoGenResult/4 (/7 e.Vars#1/50 )/8 (/11 e.AllocCommands#1/52 )/12 (/15 e.Commands#1/54 )/16 s.Counter#1/17 (/28 # TkOpenCallCond/30 s.Offset#1/41 )/29 e.Result#1/56 >/1
          context[50] = context[42];
          context[51] = context[43];
          context[52] = context[44];
          context[53] = context[45];
          context[54] = context[46];
          context[55] = context[47];
          context[56] = context[48];
          context[57] = context[49];
          if( ! refalrts::ident_term( identifiers[ident_TkOpenCallCond], context[30] ) )
            continue;
          // closed e.Vars#1 as range 50
          // closed e.AllocCommands#1 as range 52
          // closed e.Commands#1 as range 54
          // closed e.Result#1 as range 56
          //DEBUG: s.Counter#1: 17
          //DEBUG: s.Offset#1: 41
          //DEBUG: e.Vars#1: 50
          //DEBUG: e.AllocCommands#1: 52
          //DEBUG: e.Commands#1: 54
          //DEBUG: e.Result#1: 56

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenResult/4 AsIs: (/7 AsIs: e.Vars#1/50 AsIs: )/8 AsIs: (/11 AsIs: e.AllocCommands#1/52 HalfReuse: (/12 HalfReuse: # CmdCreateElem/15 } # Allocate/58 s.Offset#1/41/59 # ElOpenCall/60 )/61 )/62 (/63 Tile{ AsIs: (/28 Reuse: # CmdInsertElem/30 AsIs: s.Offset#1/41 AsIs: )/29 } Tile{ AsIs: e.Commands#1/54 } Tile{ AsIs: )/16 AsIs: s.Counter#1/17 } Tile{ AsIs: e.Result#1/56 } Tile{ AsIs: >/1 ]] }
          refalrts::alloc_ident(vm, context[58], identifiers[ident_Allocate]);
          refalrts::copy_stvar(vm, context[59], context[41]);
          refalrts::alloc_ident(vm, context[60], identifiers[ident_ElOpenCall]);
          refalrts::alloc_close_bracket(vm, context[61]);
          refalrts::alloc_close_bracket(vm, context[62]);
          refalrts::alloc_open_bracket(vm, context[63]);
          refalrts::reinit_open_bracket(context[12]);
          refalrts::reinit_ident(context[15], identifiers[ident_CmdCreateElem]);
          refalrts::update_ident(context[30], identifiers[ident_CmdInsertElem]);
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[0] );
          refalrts::link_brackets( context[63], context[16] );
          refalrts::link_brackets( context[28], context[29] );
          refalrts::link_brackets( context[11], context[62] );
          refalrts::link_brackets( context[12], context[61] );
          refalrts::link_brackets( context[7], context[8] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[1];
          res = refalrts::splice_evar( res, context[56], context[57] );
          res = refalrts::splice_evar( res, context[16], context[17] );
          res = refalrts::splice_evar( res, context[54], context[55] );
          res = refalrts::splice_evar( res, context[28], context[29] );
          res = refalrts::splice_evar( res, context[58], context[63] );
          refalrts::use( res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & DoGenResult/4 (/7 e.Vars#1/50 )/8 (/11 e.AllocCommands#1/52 )/12 (/15 e.Commands#1/54 )/16 s.Counter#1/17 (/28 # TkCloseCallCond/30 s.Offset#1/41 )/29 e.Result#1/56 >/1
        context[50] = context[42];
        context[51] = context[43];
        context[52] = context[44];
        context[53] = context[45];
        context[54] = context[46];
        context[55] = context[47];
        context[56] = context[48];
        context[57] = context[49];
        if( ! refalrts::ident_term( identifiers[ident_TkCloseCallCond], context[30] ) )
          continue;
        // closed e.Vars#1 as range 50
        // closed e.AllocCommands#1 as range 52
        // closed e.Commands#1 as range 54
        // closed e.Result#1 as range 56
        //DEBUG: s.Counter#1: 17
        //DEBUG: s.Offset#1: 41
        //DEBUG: e.Vars#1: 50
        //DEBUG: e.AllocCommands#1: 52
        //DEBUG: e.Commands#1: 54
        //DEBUG: e.Result#1: 56

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenResult/4 AsIs: (/7 AsIs: e.Vars#1/50 AsIs: )/8 AsIs: (/11 AsIs: e.AllocCommands#1/52 HalfReuse: (/12 HalfReuse: # CmdCreateElem/15 } # Allocate/58 s.Offset#1/41/59 # ElCloseCall/60 )/61 )/62 (/63 Tile{ AsIs: (/28 Reuse: # CmdPushStack/30 AsIs: s.Offset#1/41 AsIs: )/29 } (/64 # CmdPushStack/65 </66 & Sub/67 s.Offset#1/41/68 1/69 >/70 )/71 (/72 # CmdInsertElem/73 s.Offset#1/41/74 )/75 Tile{ AsIs: e.Commands#1/54 } Tile{ AsIs: )/16 AsIs: s.Counter#1/17 } Tile{ AsIs: e.Result#1/56 } Tile{ AsIs: >/1 ]] }
        refalrts::alloc_ident(vm, context[58], identifiers[ident_Allocate]);
        refalrts::copy_stvar(vm, context[59], context[41]);
        refalrts::alloc_ident(vm, context[60], identifiers[ident_ElCloseCall]);
        refalrts::alloc_close_bracket(vm, context[61]);
        refalrts::alloc_close_bracket(vm, context[62]);
        refalrts::alloc_open_bracket(vm, context[63]);
        refalrts::alloc_open_bracket(vm, context[64]);
        refalrts::alloc_ident(vm, context[65], identifiers[ident_CmdPushStack]);
        refalrts::alloc_open_call(vm, context[66]);
        refalrts::alloc_name(vm, context[67], functions[efunc_Sub]);
        refalrts::copy_stvar(vm, context[68], context[41]);
        refalrts::alloc_number(vm, context[69], 1UL);
        refalrts::alloc_close_call(vm, context[70]);
        refalrts::alloc_close_bracket(vm, context[71]);
        refalrts::alloc_open_bracket(vm, context[72]);
        refalrts::alloc_ident(vm, context[73], identifiers[ident_CmdInsertElem]);
        refalrts::copy_stvar(vm, context[74], context[41]);
        refalrts::alloc_close_bracket(vm, context[75]);
        refalrts::reinit_open_bracket(context[12]);
        refalrts::reinit_ident(context[15], identifiers[ident_CmdCreateElem]);
        refalrts::update_ident(context[30], identifiers[ident_CmdPushStack]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[63], context[16] );
        refalrts::link_brackets( context[72], context[75] );
        refalrts::link_brackets( context[64], context[71] );
        refalrts::push_stack( vm, context[70] );
        refalrts::push_stack( vm, context[66] );
        refalrts::link_brackets( context[28], context[29] );
        refalrts::link_brackets( context[11], context[62] );
        refalrts::link_brackets( context[12], context[61] );
        refalrts::link_brackets( context[7], context[8] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[56], context[57] );
        res = refalrts::splice_evar( res, context[16], context[17] );
        res = refalrts::splice_evar( res, context[54], context[55] );
        res = refalrts::splice_evar( res, context[64], context[75] );
        res = refalrts::splice_evar( res, context[28], context[29] );
        res = refalrts::splice_evar( res, context[58], context[63] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & DoGenResult/4 (/7 e.new#25/42 )/8 (/11 e.new#26/44 )/12 (/15 e.new#27/46 )/16 s.new#21/17 (/28 # Symbol/30 s.new#23/41 e.new#24/48 )/29 e.new#22/50 >/1
      context[42] = context[31];
      context[43] = context[32];
      context[44] = context[33];
      context[45] = context[34];
      context[46] = context[35];
      context[47] = context[36];
      context[48] = context[37];
      context[49] = context[38];
      context[50] = context[39];
      context[51] = context[40];
      if( ! refalrts::ident_term( identifiers[ident_Symbol], context[30] ) )
        continue;
      // closed e.new#25 as range 42
      // closed e.new#26 as range 44
      // closed e.new#27 as range 46
      // closed e.new#24 as range 48
      // closed e.new#22 as range 50
      do {
        // </0 & DoGenResult/4 (/7 e.Vars#1/52 )/8 (/11 e.AllocCommands#1/54 )/12 (/15 e.Commands#1/56 )/16 s.Counter#1/17 (/28 # Symbol/30 # Char/41 s.Value#1/62 )/29 e.Result#1/60 >/1
        context[52] = context[42];
        context[53] = context[43];
        context[54] = context[44];
        context[55] = context[45];
        context[56] = context[46];
        context[57] = context[47];
        context[58] = context[48];
        context[59] = context[49];
        context[60] = context[50];
        context[61] = context[51];
        if( ! refalrts::ident_term( identifiers[ident_Char], context[41] ) )
          continue;
        // closed e.Vars#1 as range 52
        // closed e.AllocCommands#1 as range 54
        // closed e.Commands#1 as range 56
        // closed e.Result#1 as range 60
        if( ! refalrts::svar_left( context[62], context[58], context[59] ) )
          continue;
        if( ! refalrts::empty_seq( context[58], context[59] ) )
          continue;
        //DEBUG: s.Counter#1: 17
        //DEBUG: e.Vars#1: 52
        //DEBUG: e.AllocCommands#1: 54
        //DEBUG: e.Commands#1: 56
        //DEBUG: e.Result#1: 60
        //DEBUG: s.Value#1: 62

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenResult/4 AsIs: (/7 AsIs: e.Vars#1/52 AsIs: )/8 AsIs: (/11 AsIs: e.AllocCommands#1/54 HalfReuse: (/12 HalfReuse: # CmdCreateElem/15 } Tile{ HalfReuse: # Allocate/28 HalfReuse: s.Counter1 #17/30 Reuse: # ElChar/41 AsIs: s.Value#1/62 AsIs: )/29 } )/63 (/64 (/65 Tile{ HalfReuse: # CmdInsertElem/16 AsIs: s.Counter#1/17 } )/66 Tile{ AsIs: e.Commands#1/56 } )/67 </68 & Add/69 1/70 s.Counter#1/17/71 >/72 Tile{ AsIs: e.Result#1/60 } Tile{ AsIs: >/1 ]] }
        refalrts::alloc_close_bracket(vm, context[63]);
        refalrts::alloc_open_bracket(vm, context[64]);
        refalrts::alloc_open_bracket(vm, context[65]);
        refalrts::alloc_close_bracket(vm, context[66]);
        refalrts::alloc_close_bracket(vm, context[67]);
        refalrts::alloc_open_call(vm, context[68]);
        refalrts::alloc_name(vm, context[69], functions[efunc_Add]);
        refalrts::alloc_number(vm, context[70], 1UL);
        refalrts::copy_stvar(vm, context[71], context[17]);
        refalrts::alloc_close_call(vm, context[72]);
        refalrts::reinit_open_bracket(context[12]);
        refalrts::reinit_ident(context[15], identifiers[ident_CmdCreateElem]);
        refalrts::reinit_ident(context[28], identifiers[ident_Allocate]);
        refalrts::reinit_svar( context[30], context[17] );
        refalrts::update_ident(context[41], identifiers[ident_ElChar]);
        refalrts::reinit_ident(context[16], identifiers[ident_CmdInsertElem]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::push_stack( vm, context[72] );
        refalrts::push_stack( vm, context[68] );
        refalrts::link_brackets( context[64], context[67] );
        refalrts::link_brackets( context[65], context[66] );
        refalrts::link_brackets( context[11], context[63] );
        refalrts::link_brackets( context[12], context[29] );
        refalrts::link_brackets( context[7], context[8] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[60], context[61] );
        res = refalrts::splice_evar( res, context[67], context[72] );
        res = refalrts::splice_evar( res, context[56], context[57] );
        res = refalrts::splice_elem( res, context[66] );
        res = refalrts::splice_evar( res, context[16], context[17] );
        res = refalrts::splice_evar( res, context[63], context[65] );
        res = refalrts::splice_evar( res, context[28], context[29] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & DoGenResult/4 (/7 e.Vars#1/52 )/8 (/11 e.AllocCommands#1/54 )/12 (/15 e.Commands#1/56 )/16 s.Counter#1/17 (/28 # Symbol/30 # Name/41 e.Name#1/58 )/29 e.Result#1/60 >/1
        context[52] = context[42];
        context[53] = context[43];
        context[54] = context[44];
        context[55] = context[45];
        context[56] = context[46];
        context[57] = context[47];
        context[58] = context[48];
        context[59] = context[49];
        context[60] = context[50];
        context[61] = context[51];
        if( ! refalrts::ident_term( identifiers[ident_Name], context[41] ) )
          continue;
        // closed e.Vars#1 as range 52
        // closed e.AllocCommands#1 as range 54
        // closed e.Commands#1 as range 56
        // closed e.Name#1 as range 58
        // closed e.Result#1 as range 60
        //DEBUG: s.Counter#1: 17
        //DEBUG: e.Vars#1: 52
        //DEBUG: e.AllocCommands#1: 54
        //DEBUG: e.Commands#1: 56
        //DEBUG: e.Name#1: 58
        //DEBUG: e.Result#1: 60

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenResult/4 AsIs: (/7 AsIs: e.Vars#1/52 AsIs: )/8 AsIs: (/11 AsIs: e.AllocCommands#1/54 HalfReuse: (/12 HalfReuse: # CmdCreateElem/15 } Tile{ HalfReuse: # Allocate/28 HalfReuse: s.Counter1 #17/30 Reuse: # ElName/41 AsIs: e.Name#1/58 AsIs: )/29 } )/62 (/63 (/64 Tile{ HalfReuse: # CmdInsertElem/16 AsIs: s.Counter#1/17 } )/65 Tile{ AsIs: e.Commands#1/56 } )/66 </67 & Add/68 1/69 s.Counter#1/17/70 >/71 Tile{ AsIs: e.Result#1/60 } Tile{ AsIs: >/1 ]] }
        refalrts::alloc_close_bracket(vm, context[62]);
        refalrts::alloc_open_bracket(vm, context[63]);
        refalrts::alloc_open_bracket(vm, context[64]);
        refalrts::alloc_close_bracket(vm, context[65]);
        refalrts::alloc_close_bracket(vm, context[66]);
        refalrts::alloc_open_call(vm, context[67]);
        refalrts::alloc_name(vm, context[68], functions[efunc_Add]);
        refalrts::alloc_number(vm, context[69], 1UL);
        refalrts::copy_stvar(vm, context[70], context[17]);
        refalrts::alloc_close_call(vm, context[71]);
        refalrts::reinit_open_bracket(context[12]);
        refalrts::reinit_ident(context[15], identifiers[ident_CmdCreateElem]);
        refalrts::reinit_ident(context[28], identifiers[ident_Allocate]);
        refalrts::reinit_svar( context[30], context[17] );
        refalrts::update_ident(context[41], identifiers[ident_ElName]);
        refalrts::reinit_ident(context[16], identifiers[ident_CmdInsertElem]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::push_stack( vm, context[71] );
        refalrts::push_stack( vm, context[67] );
        refalrts::link_brackets( context[63], context[66] );
        refalrts::link_brackets( context[64], context[65] );
        refalrts::link_brackets( context[11], context[62] );
        refalrts::link_brackets( context[12], context[29] );
        refalrts::link_brackets( context[7], context[8] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[60], context[61] );
        res = refalrts::splice_evar( res, context[66], context[71] );
        res = refalrts::splice_evar( res, context[56], context[57] );
        res = refalrts::splice_elem( res, context[65] );
        res = refalrts::splice_evar( res, context[16], context[17] );
        res = refalrts::splice_evar( res, context[62], context[64] );
        res = refalrts::splice_evar( res, context[28], context[29] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & DoGenResult/4 (/7 e.Vars#1/52 )/8 (/11 e.AllocCommands#1/54 )/12 (/15 e.Commands#1/56 )/16 s.Counter#1/17 (/28 # Symbol/30 # Number/41 s.Number#1/62 )/29 e.Result#1/60 >/1
        context[52] = context[42];
        context[53] = context[43];
        context[54] = context[44];
        context[55] = context[45];
        context[56] = context[46];
        context[57] = context[47];
        context[58] = context[48];
        context[59] = context[49];
        context[60] = context[50];
        context[61] = context[51];
        if( ! refalrts::ident_term( identifiers[ident_Number], context[41] ) )
          continue;
        // closed e.Vars#1 as range 52
        // closed e.AllocCommands#1 as range 54
        // closed e.Commands#1 as range 56
        // closed e.Result#1 as range 60
        if( ! refalrts::svar_left( context[62], context[58], context[59] ) )
          continue;
        if( ! refalrts::empty_seq( context[58], context[59] ) )
          continue;
        //DEBUG: s.Counter#1: 17
        //DEBUG: e.Vars#1: 52
        //DEBUG: e.AllocCommands#1: 54
        //DEBUG: e.Commands#1: 56
        //DEBUG: e.Result#1: 60
        //DEBUG: s.Number#1: 62

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenResult/4 AsIs: (/7 AsIs: e.Vars#1/52 AsIs: )/8 AsIs: (/11 AsIs: e.AllocCommands#1/54 HalfReuse: (/12 HalfReuse: # CmdCreateElem/15 } Tile{ HalfReuse: # Allocate/28 HalfReuse: s.Counter1 #17/30 Reuse: # ElNumber/41 AsIs: s.Number#1/62 AsIs: )/29 } )/63 (/64 (/65 Tile{ HalfReuse: # CmdInsertElem/16 AsIs: s.Counter#1/17 } )/66 Tile{ AsIs: e.Commands#1/56 } )/67 </68 & Add/69 1/70 s.Counter#1/17/71 >/72 Tile{ AsIs: e.Result#1/60 } Tile{ AsIs: >/1 ]] }
        refalrts::alloc_close_bracket(vm, context[63]);
        refalrts::alloc_open_bracket(vm, context[64]);
        refalrts::alloc_open_bracket(vm, context[65]);
        refalrts::alloc_close_bracket(vm, context[66]);
        refalrts::alloc_close_bracket(vm, context[67]);
        refalrts::alloc_open_call(vm, context[68]);
        refalrts::alloc_name(vm, context[69], functions[efunc_Add]);
        refalrts::alloc_number(vm, context[70], 1UL);
        refalrts::copy_stvar(vm, context[71], context[17]);
        refalrts::alloc_close_call(vm, context[72]);
        refalrts::reinit_open_bracket(context[12]);
        refalrts::reinit_ident(context[15], identifiers[ident_CmdCreateElem]);
        refalrts::reinit_ident(context[28], identifiers[ident_Allocate]);
        refalrts::reinit_svar( context[30], context[17] );
        refalrts::update_ident(context[41], identifiers[ident_ElNumber]);
        refalrts::reinit_ident(context[16], identifiers[ident_CmdInsertElem]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::push_stack( vm, context[72] );
        refalrts::push_stack( vm, context[68] );
        refalrts::link_brackets( context[64], context[67] );
        refalrts::link_brackets( context[65], context[66] );
        refalrts::link_brackets( context[11], context[63] );
        refalrts::link_brackets( context[12], context[29] );
        refalrts::link_brackets( context[7], context[8] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[60], context[61] );
        res = refalrts::splice_evar( res, context[67], context[72] );
        res = refalrts::splice_evar( res, context[56], context[57] );
        res = refalrts::splice_elem( res, context[66] );
        res = refalrts::splice_evar( res, context[16], context[17] );
        res = refalrts::splice_evar( res, context[63], context[65] );
        res = refalrts::splice_evar( res, context[28], context[29] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & DoGenResult/4 (/7 e.Vars#1/52 )/8 (/11 e.AllocCommands#1/54 )/12 (/15 e.Commands#1/56 )/16 s.Counter#1/17 (/28 # Symbol/30 # Identifier/41 e.Name#1/58 )/29 e.Result#1/60 >/1
      context[52] = context[42];
      context[53] = context[43];
      context[54] = context[44];
      context[55] = context[45];
      context[56] = context[46];
      context[57] = context[47];
      context[58] = context[48];
      context[59] = context[49];
      context[60] = context[50];
      context[61] = context[51];
      if( ! refalrts::ident_term( identifiers[ident_Identifier], context[41] ) )
        continue;
      // closed e.Vars#1 as range 52
      // closed e.AllocCommands#1 as range 54
      // closed e.Commands#1 as range 56
      // closed e.Name#1 as range 58
      // closed e.Result#1 as range 60
      //DEBUG: s.Counter#1: 17
      //DEBUG: e.Vars#1: 52
      //DEBUG: e.AllocCommands#1: 54
      //DEBUG: e.Commands#1: 56
      //DEBUG: e.Name#1: 58
      //DEBUG: e.Result#1: 60

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenResult/4 AsIs: (/7 AsIs: e.Vars#1/52 AsIs: )/8 AsIs: (/11 AsIs: e.AllocCommands#1/54 HalfReuse: (/12 HalfReuse: # CmdCreateElem/15 } Tile{ HalfReuse: # Allocate/28 HalfReuse: s.Counter1 #17/30 Reuse: # ElIdent/41 AsIs: e.Name#1/58 AsIs: )/29 } )/62 (/63 (/64 Tile{ HalfReuse: # CmdInsertElem/16 AsIs: s.Counter#1/17 } )/65 Tile{ AsIs: e.Commands#1/56 } )/66 </67 & Add/68 1/69 s.Counter#1/17/70 >/71 Tile{ AsIs: e.Result#1/60 } Tile{ AsIs: >/1 ]] }
      refalrts::alloc_close_bracket(vm, context[62]);
      refalrts::alloc_open_bracket(vm, context[63]);
      refalrts::alloc_open_bracket(vm, context[64]);
      refalrts::alloc_close_bracket(vm, context[65]);
      refalrts::alloc_close_bracket(vm, context[66]);
      refalrts::alloc_open_call(vm, context[67]);
      refalrts::alloc_name(vm, context[68], functions[efunc_Add]);
      refalrts::alloc_number(vm, context[69], 1UL);
      refalrts::copy_stvar(vm, context[70], context[17]);
      refalrts::alloc_close_call(vm, context[71]);
      refalrts::reinit_open_bracket(context[12]);
      refalrts::reinit_ident(context[15], identifiers[ident_CmdCreateElem]);
      refalrts::reinit_ident(context[28], identifiers[ident_Allocate]);
      refalrts::reinit_svar( context[30], context[17] );
      refalrts::update_ident(context[41], identifiers[ident_ElIdent]);
      refalrts::reinit_ident(context[16], identifiers[ident_CmdInsertElem]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[71] );
      refalrts::push_stack( vm, context[67] );
      refalrts::link_brackets( context[63], context[66] );
      refalrts::link_brackets( context[64], context[65] );
      refalrts::link_brackets( context[11], context[62] );
      refalrts::link_brackets( context[12], context[29] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[60], context[61] );
      res = refalrts::splice_evar( res, context[66], context[71] );
      res = refalrts::splice_evar( res, context[56], context[57] );
      res = refalrts::splice_elem( res, context[65] );
      res = refalrts::splice_evar( res, context[16], context[17] );
      res = refalrts::splice_evar( res, context[62], context[64] );
      res = refalrts::splice_evar( res, context[28], context[29] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & DoGenResult/4 (/7 e.Vars#1/31 )/8 (/11 e.AllocCommands#1/33 )/12 (/15 e.Commands#1/35 )/16 s.Counter#1/17 (/28 # TkString/30 e.Chars#1/37 )/29 e.Result#1/39 >/1
      context[31] = context[18];
      context[32] = context[19];
      context[33] = context[20];
      context[34] = context[21];
      context[35] = context[22];
      context[36] = context[23];
      context[37] = context[26];
      context[38] = context[27];
      context[39] = context[24];
      context[40] = context[25];
      if( ! refalrts::ident_term( identifiers[ident_TkString], context[30] ) )
        continue;
      // closed e.Vars#1 as range 31
      // closed e.AllocCommands#1 as range 33
      // closed e.Commands#1 as range 35
      // closed e.Chars#1 as range 37
      // closed e.Result#1 as range 39
      //DEBUG: s.Counter#1: 17
      //DEBUG: e.Vars#1: 31
      //DEBUG: e.AllocCommands#1: 33
      //DEBUG: e.Commands#1: 35
      //DEBUG: e.Chars#1: 37
      //DEBUG: e.Result#1: 39

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenResult/4 AsIs: (/7 AsIs: e.Vars#1/31 AsIs: )/8 AsIs: (/11 AsIs: e.AllocCommands#1/33 HalfReuse: (/12 HalfReuse: # CmdCreateElem/15 } Tile{ HalfReuse: # Allocate/16 AsIs: s.Counter#1/17 HalfReuse: # ElString/28 } Tile{ AsIs: e.Chars#1/37 } )/41 )/42 (/43 (/44 Tile{ Reuse: # CmdInsertRange/30 } s.Counter#1/17/45 )/46 Tile{ AsIs: e.Commands#1/35 } )/47 </48 & Add/49 s.Counter#1/17/50 2/51 Tile{ HalfReuse: >/29 AsIs: e.Result#1/39 AsIs: >/1 ]] }
      refalrts::alloc_close_bracket(vm, context[41]);
      refalrts::alloc_close_bracket(vm, context[42]);
      refalrts::alloc_open_bracket(vm, context[43]);
      refalrts::alloc_open_bracket(vm, context[44]);
      refalrts::copy_stvar(vm, context[45], context[17]);
      refalrts::alloc_close_bracket(vm, context[46]);
      refalrts::alloc_close_bracket(vm, context[47]);
      refalrts::alloc_open_call(vm, context[48]);
      refalrts::alloc_name(vm, context[49], functions[efunc_Add]);
      refalrts::copy_stvar(vm, context[50], context[17]);
      refalrts::alloc_number(vm, context[51], 2UL);
      refalrts::reinit_open_bracket(context[12]);
      refalrts::reinit_ident(context[15], identifiers[ident_CmdCreateElem]);
      refalrts::reinit_ident(context[16], identifiers[ident_Allocate]);
      refalrts::reinit_ident(context[28], identifiers[ident_ElString]);
      refalrts::update_ident(context[30], identifiers[ident_CmdInsertRange]);
      refalrts::reinit_close_call(context[29]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[29] );
      refalrts::push_stack( vm, context[48] );
      refalrts::link_brackets( context[43], context[47] );
      refalrts::link_brackets( context[44], context[46] );
      refalrts::link_brackets( context[11], context[42] );
      refalrts::link_brackets( context[12], context[41] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[29];
      res = refalrts::splice_evar( res, context[47], context[51] );
      res = refalrts::splice_evar( res, context[35], context[36] );
      res = refalrts::splice_evar( res, context[45], context[46] );
      res = refalrts::splice_elem( res, context[30] );
      res = refalrts::splice_evar( res, context[41], context[44] );
      res = refalrts::splice_evar( res, context[37], context[38] );
      res = refalrts::splice_evar( res, context[16], context[28] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & DoGenResult/4 (/7 e.Vars#1/31 )/8 (/11 e.AllocCommands#1/33 )/12 (/15 e.Commands#1/35 )/16 s.Counter#1/17 (/28 # Brackets/30 e.InBrackets#1/37 )/29 e.Result#1/39 >/1
      context[31] = context[18];
      context[32] = context[19];
      context[33] = context[20];
      context[34] = context[21];
      context[35] = context[22];
      context[36] = context[23];
      context[37] = context[26];
      context[38] = context[27];
      context[39] = context[24];
      context[40] = context[25];
      if( ! refalrts::ident_term( identifiers[ident_Brackets], context[30] ) )
        continue;
      // closed e.Vars#1 as range 31
      // closed e.AllocCommands#1 as range 33
      // closed e.Commands#1 as range 35
      // closed e.InBrackets#1 as range 37
      // closed e.Result#1 as range 39
      //DEBUG: s.Counter#1: 17
      //DEBUG: e.Vars#1: 31
      //DEBUG: e.AllocCommands#1: 33
      //DEBUG: e.Commands#1: 35
      //DEBUG: e.InBrackets#1: 37
      //DEBUG: e.Result#1: 39

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenResult/4 AsIs: (/7 AsIs: e.Vars#1/31 AsIs: )/8 AsIs: (/11 AsIs: e.AllocCommands#1/33 HalfReuse: (/12 HalfReuse: # CmdCreateElem/15 } Tile{ HalfReuse: # Allocate/16 AsIs: s.Counter#1/17 HalfReuse: # ElOpenBracket/28 HalfReuse: )/30 } )/41 (/42 (/43 # CmdInsertElem/44 s.Counter#1/17/45 )/46 Tile{ AsIs: e.Commands#1/35 } )/47 </48 & Add/49 1/50 s.Counter#1/17/51 >/52 Tile{ AsIs: e.InBrackets#1/37 } (/53 # TkCloseBracket/54 s.Counter#1/17/55 Tile{ AsIs: )/29 AsIs: e.Result#1/39 AsIs: >/1 ]] }
      refalrts::alloc_close_bracket(vm, context[41]);
      refalrts::alloc_open_bracket(vm, context[42]);
      refalrts::alloc_open_bracket(vm, context[43]);
      refalrts::alloc_ident(vm, context[44], identifiers[ident_CmdInsertElem]);
      refalrts::copy_stvar(vm, context[45], context[17]);
      refalrts::alloc_close_bracket(vm, context[46]);
      refalrts::alloc_close_bracket(vm, context[47]);
      refalrts::alloc_open_call(vm, context[48]);
      refalrts::alloc_name(vm, context[49], functions[efunc_Add]);
      refalrts::alloc_number(vm, context[50], 1UL);
      refalrts::copy_stvar(vm, context[51], context[17]);
      refalrts::alloc_close_call(vm, context[52]);
      refalrts::alloc_open_bracket(vm, context[53]);
      refalrts::alloc_ident(vm, context[54], identifiers[ident_TkCloseBracket]);
      refalrts::copy_stvar(vm, context[55], context[17]);
      refalrts::reinit_open_bracket(context[12]);
      refalrts::reinit_ident(context[15], identifiers[ident_CmdCreateElem]);
      refalrts::reinit_ident(context[16], identifiers[ident_Allocate]);
      refalrts::reinit_ident(context[28], identifiers[ident_ElOpenBracket]);
      refalrts::reinit_close_bracket(context[30]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[53], context[29] );
      refalrts::push_stack( vm, context[52] );
      refalrts::push_stack( vm, context[48] );
      refalrts::link_brackets( context[42], context[47] );
      refalrts::link_brackets( context[43], context[46] );
      refalrts::link_brackets( context[11], context[41] );
      refalrts::link_brackets( context[12], context[30] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[29];
      res = refalrts::splice_evar( res, context[53], context[55] );
      res = refalrts::splice_evar( res, context[37], context[38] );
      res = refalrts::splice_evar( res, context[47], context[52] );
      res = refalrts::splice_evar( res, context[35], context[36] );
      res = refalrts::splice_evar( res, context[41], context[46] );
      res = refalrts::splice_evar( res, context[16], context[30] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & DoGenResult/4 (/7 e.Vars#1/31 )/8 (/11 e.AllocCommands#1/33 )/12 (/15 e.Commands#1/35 )/16 s.Counter#1/17 (/28 # CallBrackets/30 e.InBrackets#1/37 )/29 e.Result#1/39 >/1
      context[31] = context[18];
      context[32] = context[19];
      context[33] = context[20];
      context[34] = context[21];
      context[35] = context[22];
      context[36] = context[23];
      context[37] = context[26];
      context[38] = context[27];
      context[39] = context[24];
      context[40] = context[25];
      if( ! refalrts::ident_term( identifiers[ident_CallBrackets], context[30] ) )
        continue;
      // closed e.Vars#1 as range 31
      // closed e.AllocCommands#1 as range 33
      // closed e.Commands#1 as range 35
      // closed e.InBrackets#1 as range 37
      // closed e.Result#1 as range 39
      //DEBUG: s.Counter#1: 17
      //DEBUG: e.Vars#1: 31
      //DEBUG: e.AllocCommands#1: 33
      //DEBUG: e.Commands#1: 35
      //DEBUG: e.InBrackets#1: 37
      //DEBUG: e.Result#1: 39

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenResult/4 AsIs: (/7 AsIs: e.Vars#1/31 AsIs: )/8 AsIs: (/11 AsIs: e.AllocCommands#1/33 HalfReuse: (/12 HalfReuse: # CmdCreateElem/15 } Tile{ HalfReuse: # Allocate/16 AsIs: s.Counter#1/17 HalfReuse: # ElOpenCall/28 HalfReuse: )/30 } )/41 (/42 (/43 # CmdInsertElem/44 s.Counter#1/17/45 )/46 Tile{ AsIs: e.Commands#1/35 } )/47 </48 & Add/49 1/50 s.Counter#1/17/51 >/52 Tile{ AsIs: e.InBrackets#1/37 } (/53 # TkCloseCall/54 s.Counter#1/17/55 Tile{ AsIs: )/29 AsIs: e.Result#1/39 AsIs: >/1 ]] }
      refalrts::alloc_close_bracket(vm, context[41]);
      refalrts::alloc_open_bracket(vm, context[42]);
      refalrts::alloc_open_bracket(vm, context[43]);
      refalrts::alloc_ident(vm, context[44], identifiers[ident_CmdInsertElem]);
      refalrts::copy_stvar(vm, context[45], context[17]);
      refalrts::alloc_close_bracket(vm, context[46]);
      refalrts::alloc_close_bracket(vm, context[47]);
      refalrts::alloc_open_call(vm, context[48]);
      refalrts::alloc_name(vm, context[49], functions[efunc_Add]);
      refalrts::alloc_number(vm, context[50], 1UL);
      refalrts::copy_stvar(vm, context[51], context[17]);
      refalrts::alloc_close_call(vm, context[52]);
      refalrts::alloc_open_bracket(vm, context[53]);
      refalrts::alloc_ident(vm, context[54], identifiers[ident_TkCloseCall]);
      refalrts::copy_stvar(vm, context[55], context[17]);
      refalrts::reinit_open_bracket(context[12]);
      refalrts::reinit_ident(context[15], identifiers[ident_CmdCreateElem]);
      refalrts::reinit_ident(context[16], identifiers[ident_Allocate]);
      refalrts::reinit_ident(context[28], identifiers[ident_ElOpenCall]);
      refalrts::reinit_close_bracket(context[30]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[53], context[29] );
      refalrts::push_stack( vm, context[52] );
      refalrts::push_stack( vm, context[48] );
      refalrts::link_brackets( context[42], context[47] );
      refalrts::link_brackets( context[43], context[46] );
      refalrts::link_brackets( context[11], context[41] );
      refalrts::link_brackets( context[12], context[30] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[29];
      res = refalrts::splice_evar( res, context[53], context[55] );
      res = refalrts::splice_evar( res, context[37], context[38] );
      res = refalrts::splice_evar( res, context[47], context[52] );
      res = refalrts::splice_evar( res, context[35], context[36] );
      res = refalrts::splice_evar( res, context[41], context[46] );
      res = refalrts::splice_evar( res, context[16], context[30] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & DoGenResult/4 (/7 e.Vars#1/31 )/8 (/11 e.AllocCommands#1/33 )/12 (/15 e.Commands#1/35 )/16 s.Counter#1/17 (/28 # ADT-Brackets/30 (/43 e.Name#1/41 )/44 e.InBrackets#1/37 )/29 e.Result#1/39 >/1
      context[31] = context[18];
      context[32] = context[19];
      context[33] = context[20];
      context[34] = context[21];
      context[35] = context[22];
      context[36] = context[23];
      context[37] = context[26];
      context[38] = context[27];
      context[39] = context[24];
      context[40] = context[25];
      if( ! refalrts::ident_term( identifiers[ident_ADTm_Brackets], context[30] ) )
        continue;
      context[41] = 0;
      context[42] = 0;
      context[43] = refalrts::brackets_left( context[41], context[42], context[37], context[38] );
      if( ! context[43] )
        continue;
      refalrts::bracket_pointers(context[43], context[44]);
      // closed e.Vars#1 as range 31
      // closed e.AllocCommands#1 as range 33
      // closed e.Commands#1 as range 35
      // closed e.Name#1 as range 41
      // closed e.InBrackets#1 as range 37
      // closed e.Result#1 as range 39
      //DEBUG: s.Counter#1: 17
      //DEBUG: e.Vars#1: 31
      //DEBUG: e.AllocCommands#1: 33
      //DEBUG: e.Commands#1: 35
      //DEBUG: e.Name#1: 41
      //DEBUG: e.InBrackets#1: 37
      //DEBUG: e.Result#1: 39

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenResult/4 AsIs: (/7 AsIs: e.Vars#1/31 AsIs: )/8 AsIs: (/11 AsIs: e.AllocCommands#1/33 HalfReuse: (/12 HalfReuse: # CmdCreateElem/15 } # Allocate/45 s.Counter#1/17/46 # ElOpenADT/47 )/48 )/49 (/50 (/51 # CmdInsertElem/52 s.Counter#1/17/53 )/54 Tile{ AsIs: e.Commands#1/35 } )/55 </56 & Add/57 Tile{ HalfReuse: 1/16 AsIs: s.Counter#1/17 } >/58 Tile{ AsIs: (/28 Reuse: # Symbol/30 HalfReuse: # Name/43 AsIs: e.Name#1/41 AsIs: )/44 AsIs: e.InBrackets#1/37 HalfReuse: (/29 } # TkCloseADT/59 s.Counter#1/17/60 )/61 Tile{ AsIs: e.Result#1/39 } Tile{ AsIs: >/1 ]] }
      refalrts::alloc_ident(vm, context[45], identifiers[ident_Allocate]);
      refalrts::copy_stvar(vm, context[46], context[17]);
      refalrts::alloc_ident(vm, context[47], identifiers[ident_ElOpenADT]);
      refalrts::alloc_close_bracket(vm, context[48]);
      refalrts::alloc_close_bracket(vm, context[49]);
      refalrts::alloc_open_bracket(vm, context[50]);
      refalrts::alloc_open_bracket(vm, context[51]);
      refalrts::alloc_ident(vm, context[52], identifiers[ident_CmdInsertElem]);
      refalrts::copy_stvar(vm, context[53], context[17]);
      refalrts::alloc_close_bracket(vm, context[54]);
      refalrts::alloc_close_bracket(vm, context[55]);
      refalrts::alloc_open_call(vm, context[56]);
      refalrts::alloc_name(vm, context[57], functions[efunc_Add]);
      refalrts::alloc_close_call(vm, context[58]);
      refalrts::alloc_ident(vm, context[59], identifiers[ident_TkCloseADT]);
      refalrts::copy_stvar(vm, context[60], context[17]);
      refalrts::alloc_close_bracket(vm, context[61]);
      refalrts::reinit_open_bracket(context[12]);
      refalrts::reinit_ident(context[15], identifiers[ident_CmdCreateElem]);
      refalrts::reinit_number(context[16], 1UL);
      refalrts::update_ident(context[30], identifiers[ident_Symbol]);
      refalrts::reinit_ident(context[43], identifiers[ident_Name]);
      refalrts::reinit_open_bracket(context[29]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[29], context[61] );
      refalrts::link_brackets( context[28], context[44] );
      refalrts::push_stack( vm, context[58] );
      refalrts::push_stack( vm, context[56] );
      refalrts::link_brackets( context[50], context[55] );
      refalrts::link_brackets( context[51], context[54] );
      refalrts::link_brackets( context[11], context[49] );
      refalrts::link_brackets( context[12], context[48] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[39], context[40] );
      res = refalrts::splice_evar( res, context[59], context[61] );
      res = refalrts::splice_evar( res, context[28], context[29] );
      res = refalrts::splice_elem( res, context[58] );
      res = refalrts::splice_evar( res, context[16], context[17] );
      res = refalrts::splice_evar( res, context[55], context[57] );
      res = refalrts::splice_evar( res, context[35], context[36] );
      res = refalrts::splice_evar( res, context[45], context[54] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & DoGenResult/4 (/7 e.Vars#1/31 )/8 (/11 e.AllocCommands#1/33 )/12 (/15 e.Commands#1/35 )/16 s.Counter#1/17 (/28 # ClosureBrackets/30 e.InBrackets#1/37 )/29 e.Result#1/39 >/1
      context[31] = context[18];
      context[32] = context[19];
      context[33] = context[20];
      context[34] = context[21];
      context[35] = context[22];
      context[36] = context[23];
      context[37] = context[26];
      context[38] = context[27];
      context[39] = context[24];
      context[40] = context[25];
      if( ! refalrts::ident_term( identifiers[ident_ClosureBrackets], context[30] ) )
        continue;
      // closed e.Vars#1 as range 31
      // closed e.AllocCommands#1 as range 33
      // closed e.Commands#1 as range 35
      // closed e.InBrackets#1 as range 37
      // closed e.Result#1 as range 39
      //DEBUG: s.Counter#1: 17
      //DEBUG: e.Vars#1: 31
      //DEBUG: e.AllocCommands#1: 33
      //DEBUG: e.Commands#1: 35
      //DEBUG: e.InBrackets#1: 37
      //DEBUG: e.Result#1: 39

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenResult/4 AsIs: (/7 AsIs: e.Vars#1/31 AsIs: )/8 AsIs: (/11 AsIs: e.AllocCommands#1/33 HalfReuse: (/12 HalfReuse: # CmdCreateElem/15 } Tile{ HalfReuse: # Allocate/16 AsIs: s.Counter#1/17 HalfReuse: # ElClosureHead/28 HalfReuse: )/30 } )/41 (/42 (/43 # CmdInsertElem/44 s.Counter#1/17/45 )/46 Tile{ AsIs: e.Commands#1/35 } )/47 </48 & Add/49 1/50 s.Counter#1/17/51 >/52 Tile{ AsIs: e.InBrackets#1/37 } (/53 # TkUnwrappedClosure/54 s.Counter#1/17/55 Tile{ AsIs: )/29 AsIs: e.Result#1/39 AsIs: >/1 ]] }
      refalrts::alloc_close_bracket(vm, context[41]);
      refalrts::alloc_open_bracket(vm, context[42]);
      refalrts::alloc_open_bracket(vm, context[43]);
      refalrts::alloc_ident(vm, context[44], identifiers[ident_CmdInsertElem]);
      refalrts::copy_stvar(vm, context[45], context[17]);
      refalrts::alloc_close_bracket(vm, context[46]);
      refalrts::alloc_close_bracket(vm, context[47]);
      refalrts::alloc_open_call(vm, context[48]);
      refalrts::alloc_name(vm, context[49], functions[efunc_Add]);
      refalrts::alloc_number(vm, context[50], 1UL);
      refalrts::copy_stvar(vm, context[51], context[17]);
      refalrts::alloc_close_call(vm, context[52]);
      refalrts::alloc_open_bracket(vm, context[53]);
      refalrts::alloc_ident(vm, context[54], identifiers[ident_TkUnwrappedClosure]);
      refalrts::copy_stvar(vm, context[55], context[17]);
      refalrts::reinit_open_bracket(context[12]);
      refalrts::reinit_ident(context[15], identifiers[ident_CmdCreateElem]);
      refalrts::reinit_ident(context[16], identifiers[ident_Allocate]);
      refalrts::reinit_ident(context[28], identifiers[ident_ElClosureHead]);
      refalrts::reinit_close_bracket(context[30]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[53], context[29] );
      refalrts::push_stack( vm, context[52] );
      refalrts::push_stack( vm, context[48] );
      refalrts::link_brackets( context[42], context[47] );
      refalrts::link_brackets( context[43], context[46] );
      refalrts::link_brackets( context[11], context[41] );
      refalrts::link_brackets( context[12], context[30] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[29];
      res = refalrts::splice_evar( res, context[53], context[55] );
      res = refalrts::splice_evar( res, context[37], context[38] );
      res = refalrts::splice_evar( res, context[47], context[52] );
      res = refalrts::splice_evar( res, context[35], context[36] );
      res = refalrts::splice_evar( res, context[41], context[46] );
      res = refalrts::splice_evar( res, context[16], context[30] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & DoGenResult/4 (/7 e.new#18/31 )/8 (/11 e.new#19/33 )/12 (/15 e.new#20/35 )/16 s.new#13/17 (/28 s.new#15/30 s.new#16/41 e.new#17/37 )/29 e.new#14/39 >/1
    context[31] = context[18];
    context[32] = context[19];
    context[33] = context[20];
    context[34] = context[21];
    context[35] = context[22];
    context[36] = context[23];
    context[37] = context[26];
    context[38] = context[27];
    context[39] = context[24];
    context[40] = context[25];
    // closed e.new#18 as range 31
    // closed e.new#19 as range 33
    // closed e.new#20 as range 35
    // closed e.new#14 as range 39
    if( ! refalrts::svar_left( context[41], context[37], context[38] ) )
      continue;
    // closed e.new#17 as range 37
    do {
      // </0 & DoGenResult/4 (/7 e.new#25/42 )/8 (/11 e.new#26/44 )/12 (/15 e.new#27/46 )/16 s.new#21/17 (/28 s.new#23/30 s.new#24/41 )/29 e.new#22/48 >/1
      context[42] = context[31];
      context[43] = context[32];
      context[44] = context[33];
      context[45] = context[34];
      context[46] = context[35];
      context[47] = context[36];
      context[48] = context[39];
      context[49] = context[40];
      if( ! refalrts::empty_seq( context[37], context[38] ) )
        continue;
      // closed e.new#25 as range 42
      // closed e.new#26 as range 44
      // closed e.new#27 as range 46
      // closed e.new#22 as range 48
      do {
        // </0 & DoGenResult/4 (/7 e.Vars#1/50 )/8 (/11 e.AllocCommands#1/52 )/12 (/15 e.Commands#1/54 )/16 s.Counter#1/17 (/28 # TkCloseBracket/30 s.OpenCounter#1/41 )/29 e.Result#1/56 >/1
        context[50] = context[42];
        context[51] = context[43];
        context[52] = context[44];
        context[53] = context[45];
        context[54] = context[46];
        context[55] = context[47];
        context[56] = context[48];
        context[57] = context[49];
        if( ! refalrts::ident_term( identifiers[ident_TkCloseBracket], context[30] ) )
          continue;
        // closed e.Vars#1 as range 50
        // closed e.AllocCommands#1 as range 52
        // closed e.Commands#1 as range 54
        // closed e.Result#1 as range 56
        //DEBUG: s.Counter#1: 17
        //DEBUG: s.OpenCounter#1: 41
        //DEBUG: e.Vars#1: 50
        //DEBUG: e.AllocCommands#1: 52
        //DEBUG: e.Commands#1: 54
        //DEBUG: e.Result#1: 56

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenResult/4 AsIs: (/7 AsIs: e.Vars#1/50 AsIs: )/8 AsIs: (/11 AsIs: e.AllocCommands#1/52 HalfReuse: (/12 HalfReuse: # CmdCreateElem/15 } # Allocate/58 s.Counter#1/17/59 # ElCloseBracket/60 )/61 )/62 (/63 Tile{ AsIs: (/28 Reuse: # CmdLinkBrackets/30 AsIs: s.OpenCounter#1/41 } s.Counter#1/17/64 )/65 (/66 Tile{ HalfReuse: # CmdInsertElem/16 AsIs: s.Counter#1/17 } )/67 Tile{ AsIs: e.Commands#1/54 } )/68 </69 & Add/70 1/71 s.Counter#1/17/72 Tile{ HalfReuse: >/29 AsIs: e.Result#1/56 AsIs: >/1 ]] }
        refalrts::alloc_ident(vm, context[58], identifiers[ident_Allocate]);
        refalrts::copy_stvar(vm, context[59], context[17]);
        refalrts::alloc_ident(vm, context[60], identifiers[ident_ElCloseBracket]);
        refalrts::alloc_close_bracket(vm, context[61]);
        refalrts::alloc_close_bracket(vm, context[62]);
        refalrts::alloc_open_bracket(vm, context[63]);
        refalrts::copy_stvar(vm, context[64], context[17]);
        refalrts::alloc_close_bracket(vm, context[65]);
        refalrts::alloc_open_bracket(vm, context[66]);
        refalrts::alloc_close_bracket(vm, context[67]);
        refalrts::alloc_close_bracket(vm, context[68]);
        refalrts::alloc_open_call(vm, context[69]);
        refalrts::alloc_name(vm, context[70], functions[efunc_Add]);
        refalrts::alloc_number(vm, context[71], 1UL);
        refalrts::copy_stvar(vm, context[72], context[17]);
        refalrts::reinit_open_bracket(context[12]);
        refalrts::reinit_ident(context[15], identifiers[ident_CmdCreateElem]);
        refalrts::update_ident(context[30], identifiers[ident_CmdLinkBrackets]);
        refalrts::reinit_ident(context[16], identifiers[ident_CmdInsertElem]);
        refalrts::reinit_close_call(context[29]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::push_stack( vm, context[29] );
        refalrts::push_stack( vm, context[69] );
        refalrts::link_brackets( context[63], context[68] );
        refalrts::link_brackets( context[66], context[67] );
        refalrts::link_brackets( context[28], context[65] );
        refalrts::link_brackets( context[11], context[62] );
        refalrts::link_brackets( context[12], context[61] );
        refalrts::link_brackets( context[7], context[8] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[29];
        res = refalrts::splice_evar( res, context[68], context[72] );
        res = refalrts::splice_evar( res, context[54], context[55] );
        res = refalrts::splice_elem( res, context[67] );
        res = refalrts::splice_evar( res, context[16], context[17] );
        res = refalrts::splice_evar( res, context[64], context[66] );
        res = refalrts::splice_evar( res, context[28], context[41] );
        res = refalrts::splice_evar( res, context[58], context[63] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & DoGenResult/4 (/7 e.Vars#1/50 )/8 (/11 e.AllocCommands#1/52 )/12 (/15 e.Commands#1/54 )/16 s.Counter#1/17 (/28 # TkCloseADT/30 s.OpenCounter#1/41 )/29 e.Result#1/56 >/1
        context[50] = context[42];
        context[51] = context[43];
        context[52] = context[44];
        context[53] = context[45];
        context[54] = context[46];
        context[55] = context[47];
        context[56] = context[48];
        context[57] = context[49];
        if( ! refalrts::ident_term( identifiers[ident_TkCloseADT], context[30] ) )
          continue;
        // closed e.Vars#1 as range 50
        // closed e.AllocCommands#1 as range 52
        // closed e.Commands#1 as range 54
        // closed e.Result#1 as range 56
        //DEBUG: s.Counter#1: 17
        //DEBUG: s.OpenCounter#1: 41
        //DEBUG: e.Vars#1: 50
        //DEBUG: e.AllocCommands#1: 52
        //DEBUG: e.Commands#1: 54
        //DEBUG: e.Result#1: 56

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenResult/4 AsIs: (/7 AsIs: e.Vars#1/50 AsIs: )/8 AsIs: (/11 AsIs: e.AllocCommands#1/52 HalfReuse: (/12 HalfReuse: # CmdCreateElem/15 } # Allocate/58 s.Counter#1/17/59 # ElCloseADT/60 )/61 )/62 (/63 Tile{ AsIs: (/28 Reuse: # CmdLinkBrackets/30 AsIs: s.OpenCounter#1/41 } s.Counter#1/17/64 )/65 (/66 Tile{ HalfReuse: # CmdInsertElem/16 AsIs: s.Counter#1/17 } )/67 Tile{ AsIs: e.Commands#1/54 } )/68 </69 & Add/70 1/71 s.Counter#1/17/72 Tile{ HalfReuse: >/29 AsIs: e.Result#1/56 AsIs: >/1 ]] }
        refalrts::alloc_ident(vm, context[58], identifiers[ident_Allocate]);
        refalrts::copy_stvar(vm, context[59], context[17]);
        refalrts::alloc_ident(vm, context[60], identifiers[ident_ElCloseADT]);
        refalrts::alloc_close_bracket(vm, context[61]);
        refalrts::alloc_close_bracket(vm, context[62]);
        refalrts::alloc_open_bracket(vm, context[63]);
        refalrts::copy_stvar(vm, context[64], context[17]);
        refalrts::alloc_close_bracket(vm, context[65]);
        refalrts::alloc_open_bracket(vm, context[66]);
        refalrts::alloc_close_bracket(vm, context[67]);
        refalrts::alloc_close_bracket(vm, context[68]);
        refalrts::alloc_open_call(vm, context[69]);
        refalrts::alloc_name(vm, context[70], functions[efunc_Add]);
        refalrts::alloc_number(vm, context[71], 1UL);
        refalrts::copy_stvar(vm, context[72], context[17]);
        refalrts::reinit_open_bracket(context[12]);
        refalrts::reinit_ident(context[15], identifiers[ident_CmdCreateElem]);
        refalrts::update_ident(context[30], identifiers[ident_CmdLinkBrackets]);
        refalrts::reinit_ident(context[16], identifiers[ident_CmdInsertElem]);
        refalrts::reinit_close_call(context[29]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::push_stack( vm, context[29] );
        refalrts::push_stack( vm, context[69] );
        refalrts::link_brackets( context[63], context[68] );
        refalrts::link_brackets( context[66], context[67] );
        refalrts::link_brackets( context[28], context[65] );
        refalrts::link_brackets( context[11], context[62] );
        refalrts::link_brackets( context[12], context[61] );
        refalrts::link_brackets( context[7], context[8] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[29];
        res = refalrts::splice_evar( res, context[68], context[72] );
        res = refalrts::splice_evar( res, context[54], context[55] );
        res = refalrts::splice_elem( res, context[67] );
        res = refalrts::splice_evar( res, context[16], context[17] );
        res = refalrts::splice_evar( res, context[64], context[66] );
        res = refalrts::splice_evar( res, context[28], context[41] );
        res = refalrts::splice_evar( res, context[58], context[63] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & DoGenResult/4 (/7 e.Vars#1/50 )/8 (/11 e.AllocCommands#1/52 )/12 (/15 e.Commands#1/54 )/16 s.Counter#1/17 (/28 # TkCloseCall/30 s.OpenCounter#1/41 )/29 e.Result#1/56 >/1
        context[50] = context[42];
        context[51] = context[43];
        context[52] = context[44];
        context[53] = context[45];
        context[54] = context[46];
        context[55] = context[47];
        context[56] = context[48];
        context[57] = context[49];
        if( ! refalrts::ident_term( identifiers[ident_TkCloseCall], context[30] ) )
          continue;
        // closed e.Vars#1 as range 50
        // closed e.AllocCommands#1 as range 52
        // closed e.Commands#1 as range 54
        // closed e.Result#1 as range 56
        //DEBUG: s.Counter#1: 17
        //DEBUG: s.OpenCounter#1: 41
        //DEBUG: e.Vars#1: 50
        //DEBUG: e.AllocCommands#1: 52
        //DEBUG: e.Commands#1: 54
        //DEBUG: e.Result#1: 56

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenResult/4 AsIs: (/7 AsIs: e.Vars#1/50 AsIs: )/8 AsIs: (/11 AsIs: e.AllocCommands#1/52 HalfReuse: (/12 HalfReuse: # CmdCreateElem/15 } Tile{ HalfReuse: # Allocate/16 AsIs: s.Counter#1/17 } # ElCloseCall/58 )/59 )/60 (/61 (/62 # CmdPushStack/63 s.Counter#1/17/64 )/65 Tile{ AsIs: (/28 Reuse: # CmdPushStack/30 AsIs: s.OpenCounter#1/41 AsIs: )/29 } (/66 # CmdInsertElem/67 s.Counter#1/17/68 )/69 Tile{ AsIs: e.Commands#1/54 } )/70 </71 & Add/72 1/73 s.Counter#1/17/74 >/75 Tile{ AsIs: e.Result#1/56 } Tile{ AsIs: >/1 ]] }
        refalrts::alloc_ident(vm, context[58], identifiers[ident_ElCloseCall]);
        refalrts::alloc_close_bracket(vm, context[59]);
        refalrts::alloc_close_bracket(vm, context[60]);
        refalrts::alloc_open_bracket(vm, context[61]);
        refalrts::alloc_open_bracket(vm, context[62]);
        refalrts::alloc_ident(vm, context[63], identifiers[ident_CmdPushStack]);
        refalrts::copy_stvar(vm, context[64], context[17]);
        refalrts::alloc_close_bracket(vm, context[65]);
        refalrts::alloc_open_bracket(vm, context[66]);
        refalrts::alloc_ident(vm, context[67], identifiers[ident_CmdInsertElem]);
        refalrts::copy_stvar(vm, context[68], context[17]);
        refalrts::alloc_close_bracket(vm, context[69]);
        refalrts::alloc_close_bracket(vm, context[70]);
        refalrts::alloc_open_call(vm, context[71]);
        refalrts::alloc_name(vm, context[72], functions[efunc_Add]);
        refalrts::alloc_number(vm, context[73], 1UL);
        refalrts::copy_stvar(vm, context[74], context[17]);
        refalrts::alloc_close_call(vm, context[75]);
        refalrts::reinit_open_bracket(context[12]);
        refalrts::reinit_ident(context[15], identifiers[ident_CmdCreateElem]);
        refalrts::reinit_ident(context[16], identifiers[ident_Allocate]);
        refalrts::update_ident(context[30], identifiers[ident_CmdPushStack]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::push_stack( vm, context[75] );
        refalrts::push_stack( vm, context[71] );
        refalrts::link_brackets( context[61], context[70] );
        refalrts::link_brackets( context[66], context[69] );
        refalrts::link_brackets( context[28], context[29] );
        refalrts::link_brackets( context[62], context[65] );
        refalrts::link_brackets( context[11], context[60] );
        refalrts::link_brackets( context[12], context[59] );
        refalrts::link_brackets( context[7], context[8] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[56], context[57] );
        res = refalrts::splice_evar( res, context[70], context[75] );
        res = refalrts::splice_evar( res, context[54], context[55] );
        res = refalrts::splice_evar( res, context[66], context[69] );
        res = refalrts::splice_evar( res, context[28], context[29] );
        res = refalrts::splice_evar( res, context[58], context[65] );
        res = refalrts::splice_evar( res, context[16], context[17] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & DoGenResult/4 (/7 e.Vars#1/50 )/8 (/11 e.AllocCommands#1/52 )/12 (/15 e.Commands#1/54 )/16 s.Counter#1/17 (/28 # TkUnwrappedClosure/30 s.HeadCounter#1/41 )/29 e.Result#1/56 >/1
      context[50] = context[42];
      context[51] = context[43];
      context[52] = context[44];
      context[53] = context[45];
      context[54] = context[46];
      context[55] = context[47];
      context[56] = context[48];
      context[57] = context[49];
      if( ! refalrts::ident_term( identifiers[ident_TkUnwrappedClosure], context[30] ) )
        continue;
      // closed e.Vars#1 as range 50
      // closed e.AllocCommands#1 as range 52
      // closed e.Commands#1 as range 54
      // closed e.Result#1 as range 56
      //DEBUG: s.Counter#1: 17
      //DEBUG: s.HeadCounter#1: 41
      //DEBUG: e.Vars#1: 50
      //DEBUG: e.AllocCommands#1: 52
      //DEBUG: e.Commands#1: 54
      //DEBUG: e.Result#1: 56

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.HeadCounter#1/41 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenResult/4 AsIs: (/7 AsIs: e.Vars#1/50 AsIs: )/8 AsIs: (/11 AsIs: e.AllocCommands#1/52 HalfReuse: (/12 HalfReuse: # CmdCreateElem/15 } Tile{ HalfReuse: # Allocate/16 AsIs: s.Counter#1/17 HalfReuse: # ElUnwrappedClosure/28 HalfReuse: s.HeadCounter1 #41/30 } )/58 )/59 (/60 (/61 # CmdInsertElem/62 s.Counter#1/17/63 )/64 Tile{ AsIs: e.Commands#1/54 } (/65 # CmdWrapClosure/66 s.Counter#1/17/67 )/68 )/69 </70 & Add/71 1/72 s.Counter#1/17/73 Tile{ HalfReuse: >/29 AsIs: e.Result#1/56 AsIs: >/1 ]] }
      refalrts::alloc_close_bracket(vm, context[58]);
      refalrts::alloc_close_bracket(vm, context[59]);
      refalrts::alloc_open_bracket(vm, context[60]);
      refalrts::alloc_open_bracket(vm, context[61]);
      refalrts::alloc_ident(vm, context[62], identifiers[ident_CmdInsertElem]);
      refalrts::copy_stvar(vm, context[63], context[17]);
      refalrts::alloc_close_bracket(vm, context[64]);
      refalrts::alloc_open_bracket(vm, context[65]);
      refalrts::alloc_ident(vm, context[66], identifiers[ident_CmdWrapClosure]);
      refalrts::copy_stvar(vm, context[67], context[17]);
      refalrts::alloc_close_bracket(vm, context[68]);
      refalrts::alloc_close_bracket(vm, context[69]);
      refalrts::alloc_open_call(vm, context[70]);
      refalrts::alloc_name(vm, context[71], functions[efunc_Add]);
      refalrts::alloc_number(vm, context[72], 1UL);
      refalrts::copy_stvar(vm, context[73], context[17]);
      refalrts::reinit_open_bracket(context[12]);
      refalrts::reinit_ident(context[15], identifiers[ident_CmdCreateElem]);
      refalrts::reinit_ident(context[16], identifiers[ident_Allocate]);
      refalrts::reinit_ident(context[28], identifiers[ident_ElUnwrappedClosure]);
      refalrts::reinit_svar( context[30], context[41] );
      refalrts::reinit_close_call(context[29]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[29] );
      refalrts::push_stack( vm, context[70] );
      refalrts::link_brackets( context[60], context[69] );
      refalrts::link_brackets( context[65], context[68] );
      refalrts::link_brackets( context[61], context[64] );
      refalrts::link_brackets( context[11], context[59] );
      refalrts::link_brackets( context[12], context[58] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[29];
      res = refalrts::splice_evar( res, context[65], context[73] );
      res = refalrts::splice_evar( res, context[54], context[55] );
      res = refalrts::splice_evar( res, context[58], context[64] );
      res = refalrts::splice_evar( res, context[16], context[30] );
      refalrts::splice_to_freelist_open( vm, context[15], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & DoGenResult/4 (/7 e.new#25/42 )/8 (/11 e.new#26/44 )/12 (/15 e.new#27/46 )/16 s.new#21/17 (/28 # TkVariable/30 s.new#23/41 e.new#24/48 )/29 e.new#22/50 >/1
    context[42] = context[31];
    context[43] = context[32];
    context[44] = context[33];
    context[45] = context[34];
    context[46] = context[35];
    context[47] = context[36];
    context[48] = context[37];
    context[49] = context[38];
    context[50] = context[39];
    context[51] = context[40];
    if( ! refalrts::ident_term( identifiers[ident_TkVariable], context[30] ) )
      continue;
    // closed e.new#25 as range 42
    // closed e.new#26 as range 44
    // closed e.new#27 as range 46
    // closed e.new#24 as range 48
    // closed e.new#22 as range 50
    do {
      // </0 & DoGenResult/4 (/7 e.Vars-B#1/62 (/68 s.Mode#1/70 (/73 e.Index#1/79 )/74 (/77 e.ResultVars#1/75 )/78 s.NextPatternVar#1/81 e.PatternVars#1/66 )/69 e.Vars-E#1/64 )/8 (/11 e.AllocCommands#1/54 )/12 (/15 e.Commands#1/56 )/16 s.Counter#1/17 (/28 # TkVariable/30 s.Mode#1/41 e.Index#1/58 )/29 e.Result#1/60 >/1
      context[52] = context[42];
      context[53] = context[43];
      context[54] = context[44];
      context[55] = context[45];
      context[56] = context[46];
      context[57] = context[47];
      context[58] = context[48];
      context[59] = context[49];
      context[60] = context[50];
      context[61] = context[51];
      // closed e.AllocCommands#1 as range 54
      // closed e.Commands#1 as range 56
      // closed e.Index#1 as range 58
      // closed e.Result#1 as range 60
      context[62] = 0;
      context[63] = 0;
      refalrts::start_e_loop(vm);
      do {
        context[64] = context[52];
        context[65] = context[53];
        context[66] = 0;
        context[67] = 0;
        context[68] = refalrts::brackets_left( context[66], context[67], context[64], context[65] );
        if( ! context[68] )
          continue;
        refalrts::bracket_pointers(context[68], context[69]);
        if( ! refalrts::repeated_stvar_left( vm, context[70], context[41], context[66], context[67] ) )
          continue;
        context[71] = 0;
        context[72] = 0;
        context[73] = refalrts::brackets_left( context[71], context[72], context[66], context[67] );
        if( ! context[73] )
          continue;
        refalrts::bracket_pointers(context[73], context[74]);
        context[75] = 0;
        context[76] = 0;
        context[77] = refalrts::brackets_left( context[75], context[76], context[66], context[67] );
        if( ! context[77] )
          continue;
        refalrts::bracket_pointers(context[77], context[78]);
        if( ! refalrts::repeated_evar_left( vm, context[79], context[80], context[58], context[59], context[71], context[72] ) )
          continue;
        if( ! refalrts::empty_seq( context[71], context[72] ) )
          continue;
        // closed e.ResultVars#1 as range 75
        // closed e.Vars-E#1 as range 64
        if( ! refalrts::svar_left( context[81], context[66], context[67] ) )
          continue;
        // closed e.PatternVars#1 as range 66
        //DEBUG: s.Counter#1: 17
        //DEBUG: s.Mode#1: 41
        //DEBUG: e.AllocCommands#1: 54
        //DEBUG: e.Commands#1: 56
        //DEBUG: e.Index#1: 58
        //DEBUG: e.Result#1: 60
        //DEBUG: e.Vars-B#1: 62
        //DEBUG: e.ResultVars#1: 75
        //DEBUG: e.Vars-E#1: 64
        //DEBUG: s.NextPatternVar#1: 81
        //DEBUG: e.PatternVars#1: 66

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Counter#1/17 {REMOVED TILE} e.Index#1/58 {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenResult/4 AsIs: (/7 AsIs: e.Vars-B#1/62 AsIs: (/68 AsIs: s.Mode#1/70 AsIs: (/73 AsIs: e.Index#1/79 AsIs: )/74 AsIs: (/77 AsIs: e.ResultVars#1/75 HalfReuse: s.NextPatternVar1 #81/78 } Tile{ AsIs: )/16 } Tile{ AsIs: e.PatternVars#1/66 } Tile{ AsIs: )/69 AsIs: e.Vars-E#1/64 AsIs: )/8 AsIs: (/11 AsIs: e.AllocCommands#1/54 AsIs: )/12 AsIs: (/15 } Tile{ AsIs: (/28 Reuse: # CmdInsertVar/30 AsIs: s.Mode#1/41 } Tile{ AsIs: s.NextPatternVar#1/81 } )/82 Tile{ AsIs: e.Commands#1/56 } )/83 Tile{ HalfReuse: s.Counter1 #17/29 AsIs: e.Result#1/60 AsIs: >/1 ]] }
        refalrts::alloc_close_bracket(vm, context[82]);
        refalrts::alloc_close_bracket(vm, context[83]);
        refalrts::reinit_svar( context[78], context[81] );
        refalrts::update_ident(context[30], identifiers[ident_CmdInsertVar]);
        refalrts::reinit_svar( context[29], context[17] );
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[15], context[83] );
        refalrts::link_brackets( context[28], context[82] );
        refalrts::link_brackets( context[11], context[12] );
        refalrts::link_brackets( context[7], context[8] );
        refalrts::link_brackets( context[68], context[69] );
        refalrts::link_brackets( context[77], context[16] );
        refalrts::link_brackets( context[73], context[74] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[29];
        res = refalrts::splice_elem( res, context[83] );
        res = refalrts::splice_evar( res, context[56], context[57] );
        res = refalrts::splice_elem( res, context[82] );
        res = refalrts::splice_elem( res, context[81] );
        res = refalrts::splice_evar( res, context[28], context[41] );
        res = refalrts::splice_evar( res, context[69], context[15] );
        res = refalrts::splice_evar( res, context[66], context[67] );
        res = refalrts::splice_elem( res, context[16] );
        refalrts::splice_to_freelist_open( vm, context[78], res );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[62], context[63], context[52], context[53] ) );
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & DoGenResult/4 (/7 e.Vars-B#1/62 (/68 s.Mode#1/78 (/76 e.Index#1/79 )/77 (/72 e.ResultVars#1/70 s.Sample#1/81 )/73 )/69 e.Vars-E#1/64 )/8 (/11 e.AllocCommands#1/54 )/12 (/15 e.Commands#1/56 )/16 s.Counter#1/17 (/28 # TkVariable/30 s.Mode#1/41 e.Index#1/58 )/29 e.Result#1/60 >/1
    context[52] = context[42];
    context[53] = context[43];
    context[54] = context[44];
    context[55] = context[45];
    context[56] = context[46];
    context[57] = context[47];
    context[58] = context[48];
    context[59] = context[49];
    context[60] = context[50];
    context[61] = context[51];
    // closed e.AllocCommands#1 as range 54
    // closed e.Commands#1 as range 56
    // closed e.Index#1 as range 58
    // closed e.Result#1 as range 60
    context[62] = 0;
    context[63] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[64] = context[52];
      context[65] = context[53];
      context[66] = 0;
      context[67] = 0;
      context[68] = refalrts::brackets_left( context[66], context[67], context[64], context[65] );
      if( ! context[68] )
        continue;
      refalrts::bracket_pointers(context[68], context[69]);
      context[70] = 0;
      context[71] = 0;
      context[72] = refalrts::brackets_right( context[70], context[71], context[66], context[67] );
      if( ! context[72] )
        continue;
      refalrts::bracket_pointers(context[72], context[73]);
      context[74] = 0;
      context[75] = 0;
      context[76] = refalrts::brackets_right( context[74], context[75], context[66], context[67] );
      if( ! context[76] )
        continue;
      refalrts::bracket_pointers(context[76], context[77]);
      if( ! refalrts::repeated_stvar_left( vm, context[78], context[41], context[66], context[67] ) )
        continue;
      if( ! refalrts::empty_seq( context[66], context[67] ) )
        continue;
      if( ! refalrts::repeated_evar_left( vm, context[79], context[80], context[58], context[59], context[74], context[75] ) )
        continue;
      if( ! refalrts::empty_seq( context[74], context[75] ) )
        continue;
      // closed e.Vars-E#1 as range 64
      if( ! refalrts::svar_right( context[81], context[70], context[71] ) )
        continue;
      // closed e.ResultVars#1 as range 70
      //DEBUG: s.Counter#1: 17
      //DEBUG: s.Mode#1: 41
      //DEBUG: e.AllocCommands#1: 54
      //DEBUG: e.Commands#1: 56
      //DEBUG: e.Index#1: 58
      //DEBUG: e.Result#1: 60
      //DEBUG: e.Vars-B#1: 62
      //DEBUG: e.Vars-E#1: 64
      //DEBUG: s.Sample#1: 81
      //DEBUG: e.ResultVars#1: 70

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.Index#1/58 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenResult/4 AsIs: (/7 AsIs: e.Vars-B#1/62 AsIs: (/68 AsIs: s.Mode#1/78 AsIs: (/76 AsIs: e.Index#1/79 AsIs: )/77 AsIs: (/72 AsIs: e.ResultVars#1/70 AsIs: s.Sample#1/81 HalfReuse: s.Counter1 #17/73 AsIs: )/69 } )/82 Tile{ AsIs: e.Vars-E#1/64 } Tile{ AsIs: )/8 AsIs: (/11 AsIs: e.AllocCommands#1/54 HalfReuse: (/12 HalfReuse: # CmdCopyVar/15 } Tile{ HalfReuse: s.Mode1 #78/16 AsIs: s.Counter#1/17 } s.Sample#1/81/83 )/84 )/85 (/86 Tile{ AsIs: (/28 Reuse: # CmdInsertVar/30 AsIs: s.Mode#1/41 } s.Counter#1/17/87 )/88 Tile{ AsIs: e.Commands#1/56 } )/89 </90 & IncVarOffset/91 s.Counter#1/17/92 s.Mode#1/78/93 Tile{ HalfReuse: >/29 AsIs: e.Result#1/60 AsIs: >/1 ]] }
      refalrts::alloc_close_bracket(vm, context[82]);
      refalrts::copy_stvar(vm, context[83], context[81]);
      refalrts::alloc_close_bracket(vm, context[84]);
      refalrts::alloc_close_bracket(vm, context[85]);
      refalrts::alloc_open_bracket(vm, context[86]);
      refalrts::copy_stvar(vm, context[87], context[17]);
      refalrts::alloc_close_bracket(vm, context[88]);
      refalrts::alloc_close_bracket(vm, context[89]);
      refalrts::alloc_open_call(vm, context[90]);
      refalrts::alloc_name(vm, context[91], functions[efunc_IncVarOffset]);
      refalrts::copy_stvar(vm, context[92], context[17]);
      refalrts::copy_stvar(vm, context[93], context[78]);
      refalrts::reinit_svar( context[73], context[17] );
      refalrts::reinit_open_bracket(context[12]);
      refalrts::reinit_ident(context[15], identifiers[ident_CmdCopyVar]);
      refalrts::reinit_svar( context[16], context[78] );
      refalrts::update_ident(context[30], identifiers[ident_CmdInsertVar]);
      refalrts::reinit_close_call(context[29]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[29] );
      refalrts::push_stack( vm, context[90] );
      refalrts::link_brackets( context[86], context[89] );
      refalrts::link_brackets( context[28], context[88] );
      refalrts::link_brackets( context[11], context[85] );
      refalrts::link_brackets( context[12], context[84] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::link_brackets( context[68], context[82] );
      refalrts::link_brackets( context[72], context[69] );
      refalrts::link_brackets( context[76], context[77] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[29];
      res = refalrts::splice_evar( res, context[89], context[93] );
      res = refalrts::splice_evar( res, context[56], context[57] );
      res = refalrts::splice_evar( res, context[87], context[88] );
      res = refalrts::splice_evar( res, context[28], context[41] );
      res = refalrts::splice_evar( res, context[83], context[86] );
      res = refalrts::splice_evar( res, context[16], context[17] );
      res = refalrts::splice_evar( res, context[8], context[15] );
      res = refalrts::splice_evar( res, context[64], context[65] );
      res = refalrts::splice_elem( res, context[82] );
      refalrts::splice_to_freelist_open( vm, context[69], res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[62], context[63], context[52], context[53] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoGenResult/4 (/7 e.Vars#1/5 )/8 (/11 e.AllocCommands#1/9 )/12 (/15 e.Commands#1/13 )/16 s.Counter#1/17 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Vars#1 as range 5
  // closed e.AllocCommands#1 as range 9
  // closed e.Commands#1 as range 13
  //DEBUG: s.Counter#1: 17
  //DEBUG: e.Vars#1: 5
  //DEBUG: e.AllocCommands#1: 9
  //DEBUG: e.Commands#1: 13

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 {REMOVED TILE} (/11 {REMOVED TILE} )/12 (/15 {REMOVED TILE} )/16 s.Counter#1/17 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: s.Counter1 #17/4 AsIs: (/7 AsIs: e.Vars#1/5 AsIs: )/8 } Tile{ AsIs: e.AllocCommands#1/9 } Tile{ AsIs: e.Commands#1/13 } Tile{ ]] }
  refalrts::reinit_svar( context[4], context[17] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[4], context[8] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_DoGenResult("DoGenResult", COOKIE1_, COOKIE2_, func_DoGenResult);


static refalrts::FnResult func_MakeVariableCommentTable(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 8 elems
  refalrts::Iter context[8];
  refalrts::zeros( context, 8 );
  // </0 & MakeVariableCommentTable/4 e.Vars#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Vars#1 as range 2
  //DEBUG: e.Vars#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & Fetch@1/6 Tile{ AsIs: </0 Reuse: & Map@5/4 AsIs: e.Vars#1/2 AsIs: >/1 } >/7 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::alloc_name(vm, context[6], functions[efunc_gen_Fetch_Z1]);
  refalrts::alloc_close_call(vm, context[7]);
  refalrts::update_name(context[4], functions[efunc_gen_Map_Z5]);
  refalrts::push_stack( vm, context[7] );
  refalrts::push_stack( vm, context[5] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_elem( res, context[7] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_MakeVariableCommentTable("MakeVariableCommentTable", 0U, 0U, func_MakeVariableCommentTable);


static refalrts::FnResult func_ReplicateVar(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  // </0 & ReplicateVar/4 (/7 s.Mode#1/9 (/12 e.Index#1/10 )/13 (/16 e.ResultOccurences#1/14 )/17 e.PatternOccurences#1/5 )/8 >/1
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
  if( ! refalrts::svar_left( context[9], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  context[10] = 0;
  context[11] = 0;
  context[12] = refalrts::brackets_left( context[10], context[11], context[5], context[6] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[12], context[13]);
  context[14] = 0;
  context[15] = 0;
  context[16] = refalrts::brackets_left( context[14], context[15], context[5], context[6] );
  if( ! context[16] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[16], context[17]);
  // closed e.Index#1 as range 10
  // closed e.ResultOccurences#1 as range 14
  // closed e.PatternOccurences#1 as range 5
  //DEBUG: s.Mode#1: 9
  //DEBUG: e.Index#1: 10
  //DEBUG: e.ResultOccurences#1: 14
  //DEBUG: e.PatternOccurences#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 {REMOVED TILE} (/16 {REMOVED TILE} )/17 {REMOVED TILE} )/8 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: </4 HalfReuse: & Map@2/7 AsIs: s.Mode#1/9 AsIs: (/12 AsIs: e.Index#1/10 AsIs: )/13 } Tile{ AsIs: e.ResultOccurences#1/14 } Tile{ AsIs: e.PatternOccurences#1/5 } Tile{ AsIs: >/1 ]] }
  refalrts::reinit_open_call(context[4]);
  refalrts::reinit_name(context[7], functions[efunc_gen_Map_Z2]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[4] );
  refalrts::link_brackets( context[12], context[13] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[14], context[15] );
  res = refalrts::splice_evar( res, context[4], context[13] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ReplicateVar("ReplicateVar", COOKIE1_, COOKIE2_, func_ReplicateVar);


static refalrts::FnResult func_MakeVariableComment(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
  // </0 & MakeVariableComment/4 (/7 s.Offset#1/9 s.Mode#1/10 e.Index#1/5 s.Depth#1/11 )/8 >/1
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
  if( ! refalrts::svar_left( context[9], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[10], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_right( context[11], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Index#1 as range 5
  //DEBUG: s.Offset#1: 9
  //DEBUG: s.Mode#1: 10
  //DEBUG: s.Depth#1: 11
  //DEBUG: e.Index#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # CmdComment/4 HalfReuse: # Offset/7 AsIs: s.Offset#1/9 }": "/12 </14 & PrintVar/15 Tile{ AsIs: s.Mode#1/10 AsIs: e.Index#1/5 AsIs: s.Depth#1/11 HalfReuse: >/8 HalfReuse: )/1 ]] }
  refalrts::alloc_chars(vm, context[12], context[13], ": ", 2);
  refalrts::alloc_open_call(vm, context[14]);
  refalrts::alloc_name(vm, context[15], functions[efunc_PrintVar]);
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_ident(context[4], identifiers[ident_CmdComment]);
  refalrts::reinit_ident(context[7], identifiers[ident_Offset]);
  refalrts::reinit_close_call(context[8]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[0], context[1] );
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[14] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[10];
  res = refalrts::splice_evar( res, context[12], context[15] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_MakeVariableComment("MakeVariableComment", COOKIE1_, COOKIE2_, func_MakeVariableComment);


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


static refalrts::FnResult func_gen_DoGenResult_Z1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 74 elems
  refalrts::Iter context[74];
  refalrts::zeros( context, 74 );
  // </0 & DoGenResult@1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DoGenResult@1/4 (/7 e.new#1/5 )/8 s.new#2/9 e.new#3/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#3 as range 2
  do {
    // </0 & DoGenResult@1/4 (/7 e.new#8/10 )/8 s.new#4/9 (/16 s.new#5/18 e.new#6/14 )/17 e.new#7/12 >/1
    context[10] = context[5];
    context[11] = context[6];
    context[12] = context[2];
    context[13] = context[3];
    context[14] = 0;
    context[15] = 0;
    context[16] = refalrts::brackets_left( context[14], context[15], context[12], context[13] );
    if( ! context[16] )
      continue;
    refalrts::bracket_pointers(context[16], context[17]);
    // closed e.new#8 as range 10
    // closed e.new#7 as range 12
    if( ! refalrts::svar_left( context[18], context[14], context[15] ) )
      continue;
    // closed e.new#6 as range 14
    do {
      // </0 & DoGenResult@1/4 (/7 e.new#14/19 )/8 s.new#9/9 (/16 s.new#11/18 s.new#12/25 e.new#13/21 )/17 e.new#10/23 >/1
      context[19] = context[10];
      context[20] = context[11];
      context[21] = context[14];
      context[22] = context[15];
      context[23] = context[12];
      context[24] = context[13];
      // closed e.new#14 as range 19
      // closed e.new#10 as range 23
      if( ! refalrts::svar_left( context[25], context[21], context[22] ) )
        continue;
      // closed e.new#13 as range 21
      do {
        // </0 & DoGenResult@1/4 (/7 e.new#19/26 )/8 s.new#15/9 (/16 s.new#17/18 s.new#18/25 )/17 e.new#16/28 >/1
        context[26] = context[19];
        context[27] = context[20];
        context[28] = context[23];
        context[29] = context[24];
        if( ! refalrts::empty_seq( context[21], context[22] ) )
          continue;
        // closed e.new#19 as range 26
        // closed e.new#16 as range 28
        do {
          // </0 & DoGenResult@1/4 (/7 e.Vars#1/30 )/8 s.ContextOffset#1/9 (/16 # TkOpenCallCond/18 s.Offset#1/25 )/17 e.Result#1/32 >/1
          context[30] = context[26];
          context[31] = context[27];
          context[32] = context[28];
          context[33] = context[29];
          if( ! refalrts::ident_term( identifiers[ident_TkOpenCallCond], context[18] ) )
            continue;
          // closed e.Vars#1 as range 30
          // closed e.Result#1 as range 32
          //DEBUG: s.ContextOffset#1: 9
          //DEBUG: s.Offset#1: 25
          //DEBUG: e.Vars#1: 30
          //DEBUG: e.Result#1: 32

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoGenResult/4 AsIs: (/7 AsIs: e.Vars#1/30 AsIs: )/8 } (/34 (/35 # CmdCreateElem/36 # Allocate/37 s.Offset#1/25/38 # ElOpenCall/39 )/40 )/41 (/42 Tile{ AsIs: (/16 Reuse: # CmdInsertElem/18 AsIs: s.Offset#1/25 AsIs: )/17 } )/43 Tile{ AsIs: s.ContextOffset#1/9 } Tile{ AsIs: e.Result#1/32 } Tile{ AsIs: >/1 ]] }
          refalrts::alloc_open_bracket(vm, context[34]);
          refalrts::alloc_open_bracket(vm, context[35]);
          refalrts::alloc_ident(vm, context[36], identifiers[ident_CmdCreateElem]);
          refalrts::alloc_ident(vm, context[37], identifiers[ident_Allocate]);
          refalrts::copy_stvar(vm, context[38], context[25]);
          refalrts::alloc_ident(vm, context[39], identifiers[ident_ElOpenCall]);
          refalrts::alloc_close_bracket(vm, context[40]);
          refalrts::alloc_close_bracket(vm, context[41]);
          refalrts::alloc_open_bracket(vm, context[42]);
          refalrts::alloc_close_bracket(vm, context[43]);
          refalrts::update_name(context[4], functions[efunc_DoGenResult]);
          refalrts::update_ident(context[18], identifiers[ident_CmdInsertElem]);
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[0] );
          refalrts::link_brackets( context[42], context[43] );
          refalrts::link_brackets( context[16], context[17] );
          refalrts::link_brackets( context[34], context[41] );
          refalrts::link_brackets( context[35], context[40] );
          refalrts::link_brackets( context[7], context[8] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[1];
          res = refalrts::splice_evar( res, context[32], context[33] );
          res = refalrts::splice_elem( res, context[9] );
          res = refalrts::splice_elem( res, context[43] );
          res = refalrts::splice_evar( res, context[16], context[17] );
          res = refalrts::splice_evar( res, context[34], context[42] );
          refalrts::use( res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & DoGenResult@1/4 (/7 e.Vars#1/30 )/8 s.ContextOffset#1/9 (/16 # TkCloseCallCond/18 s.Offset#1/25 )/17 e.Result#1/32 >/1
        context[30] = context[26];
        context[31] = context[27];
        context[32] = context[28];
        context[33] = context[29];
        if( ! refalrts::ident_term( identifiers[ident_TkCloseCallCond], context[18] ) )
          continue;
        // closed e.Vars#1 as range 30
        // closed e.Result#1 as range 32
        //DEBUG: s.ContextOffset#1: 9
        //DEBUG: s.Offset#1: 25
        //DEBUG: e.Vars#1: 30
        //DEBUG: e.Result#1: 32

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoGenResult/4 AsIs: (/7 AsIs: e.Vars#1/30 AsIs: )/8 } (/34 (/35 # CmdCreateElem/36 # Allocate/37 s.Offset#1/25/38 # ElCloseCall/39 )/40 )/41 (/42 Tile{ AsIs: (/16 Reuse: # CmdPushStack/18 AsIs: s.Offset#1/25 AsIs: )/17 } (/43 # CmdPushStack/44 </45 & Sub/46 s.Offset#1/25/47 1/48 >/49 )/50 (/51 # CmdInsertElem/52 s.Offset#1/25/53 )/54 )/55 Tile{ AsIs: s.ContextOffset#1/9 } Tile{ AsIs: e.Result#1/32 } Tile{ AsIs: >/1 ]] }
        refalrts::alloc_open_bracket(vm, context[34]);
        refalrts::alloc_open_bracket(vm, context[35]);
        refalrts::alloc_ident(vm, context[36], identifiers[ident_CmdCreateElem]);
        refalrts::alloc_ident(vm, context[37], identifiers[ident_Allocate]);
        refalrts::copy_stvar(vm, context[38], context[25]);
        refalrts::alloc_ident(vm, context[39], identifiers[ident_ElCloseCall]);
        refalrts::alloc_close_bracket(vm, context[40]);
        refalrts::alloc_close_bracket(vm, context[41]);
        refalrts::alloc_open_bracket(vm, context[42]);
        refalrts::alloc_open_bracket(vm, context[43]);
        refalrts::alloc_ident(vm, context[44], identifiers[ident_CmdPushStack]);
        refalrts::alloc_open_call(vm, context[45]);
        refalrts::alloc_name(vm, context[46], functions[efunc_Sub]);
        refalrts::copy_stvar(vm, context[47], context[25]);
        refalrts::alloc_number(vm, context[48], 1UL);
        refalrts::alloc_close_call(vm, context[49]);
        refalrts::alloc_close_bracket(vm, context[50]);
        refalrts::alloc_open_bracket(vm, context[51]);
        refalrts::alloc_ident(vm, context[52], identifiers[ident_CmdInsertElem]);
        refalrts::copy_stvar(vm, context[53], context[25]);
        refalrts::alloc_close_bracket(vm, context[54]);
        refalrts::alloc_close_bracket(vm, context[55]);
        refalrts::update_name(context[4], functions[efunc_DoGenResult]);
        refalrts::update_ident(context[18], identifiers[ident_CmdPushStack]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[42], context[55] );
        refalrts::link_brackets( context[51], context[54] );
        refalrts::link_brackets( context[43], context[50] );
        refalrts::push_stack( vm, context[49] );
        refalrts::push_stack( vm, context[45] );
        refalrts::link_brackets( context[16], context[17] );
        refalrts::link_brackets( context[34], context[41] );
        refalrts::link_brackets( context[35], context[40] );
        refalrts::link_brackets( context[7], context[8] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[32], context[33] );
        res = refalrts::splice_elem( res, context[9] );
        res = refalrts::splice_evar( res, context[43], context[55] );
        res = refalrts::splice_evar( res, context[16], context[17] );
        res = refalrts::splice_evar( res, context[34], context[42] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & DoGenResult@1/4 (/7 e.new#19/26 )/8 s.new#15/9 (/16 # Symbol/18 s.new#17/25 e.new#18/28 )/17 e.new#16/30 >/1
      context[26] = context[19];
      context[27] = context[20];
      context[28] = context[21];
      context[29] = context[22];
      context[30] = context[23];
      context[31] = context[24];
      if( ! refalrts::ident_term( identifiers[ident_Symbol], context[18] ) )
        continue;
      // closed e.new#19 as range 26
      // closed e.new#18 as range 28
      // closed e.new#16 as range 30
      do {
        // </0 & DoGenResult@1/4 (/7 e.Vars#1/32 )/8 s.ContextOffset#1/9 (/16 # Symbol/18 # Char/25 s.Value#1/38 )/17 e.Result#1/36 >/1
        context[32] = context[26];
        context[33] = context[27];
        context[34] = context[28];
        context[35] = context[29];
        context[36] = context[30];
        context[37] = context[31];
        if( ! refalrts::ident_term( identifiers[ident_Char], context[25] ) )
          continue;
        // closed e.Vars#1 as range 32
        // closed e.Result#1 as range 36
        if( ! refalrts::svar_left( context[38], context[34], context[35] ) )
          continue;
        if( ! refalrts::empty_seq( context[34], context[35] ) )
          continue;
        //DEBUG: s.ContextOffset#1: 9
        //DEBUG: e.Vars#1: 32
        //DEBUG: e.Result#1: 36
        //DEBUG: s.Value#1: 38

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoGenResult/4 AsIs: (/7 AsIs: e.Vars#1/32 AsIs: )/8 } (/39 (/40 # CmdCreateElem/41 Tile{ HalfReuse: # Allocate/16 HalfReuse: s.ContextOffset1 #9/18 Reuse: # ElChar/25 AsIs: s.Value#1/38 AsIs: )/17 } )/42 (/43 (/44 # CmdInsertElem/45 Tile{ AsIs: s.ContextOffset#1/9 } )/46 )/47 </48 & Add/49 1/50 s.ContextOffset#1/9/51 >/52 Tile{ AsIs: e.Result#1/36 } Tile{ AsIs: >/1 ]] }
        refalrts::alloc_open_bracket(vm, context[39]);
        refalrts::alloc_open_bracket(vm, context[40]);
        refalrts::alloc_ident(vm, context[41], identifiers[ident_CmdCreateElem]);
        refalrts::alloc_close_bracket(vm, context[42]);
        refalrts::alloc_open_bracket(vm, context[43]);
        refalrts::alloc_open_bracket(vm, context[44]);
        refalrts::alloc_ident(vm, context[45], identifiers[ident_CmdInsertElem]);
        refalrts::alloc_close_bracket(vm, context[46]);
        refalrts::alloc_close_bracket(vm, context[47]);
        refalrts::alloc_open_call(vm, context[48]);
        refalrts::alloc_name(vm, context[49], functions[efunc_Add]);
        refalrts::alloc_number(vm, context[50], 1UL);
        refalrts::copy_stvar(vm, context[51], context[9]);
        refalrts::alloc_close_call(vm, context[52]);
        refalrts::update_name(context[4], functions[efunc_DoGenResult]);
        refalrts::reinit_ident(context[16], identifiers[ident_Allocate]);
        refalrts::reinit_svar( context[18], context[9] );
        refalrts::update_ident(context[25], identifiers[ident_ElChar]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::push_stack( vm, context[52] );
        refalrts::push_stack( vm, context[48] );
        refalrts::link_brackets( context[43], context[47] );
        refalrts::link_brackets( context[44], context[46] );
        refalrts::link_brackets( context[39], context[42] );
        refalrts::link_brackets( context[40], context[17] );
        refalrts::link_brackets( context[7], context[8] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[36], context[37] );
        res = refalrts::splice_evar( res, context[46], context[52] );
        res = refalrts::splice_elem( res, context[9] );
        res = refalrts::splice_evar( res, context[42], context[45] );
        res = refalrts::splice_evar( res, context[16], context[17] );
        res = refalrts::splice_evar( res, context[39], context[41] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & DoGenResult@1/4 (/7 e.Vars#1/32 )/8 s.ContextOffset#1/9 (/16 # Symbol/18 # Name/25 e.Name#1/34 )/17 e.Result#1/36 >/1
        context[32] = context[26];
        context[33] = context[27];
        context[34] = context[28];
        context[35] = context[29];
        context[36] = context[30];
        context[37] = context[31];
        if( ! refalrts::ident_term( identifiers[ident_Name], context[25] ) )
          continue;
        // closed e.Vars#1 as range 32
        // closed e.Name#1 as range 34
        // closed e.Result#1 as range 36
        //DEBUG: s.ContextOffset#1: 9
        //DEBUG: e.Vars#1: 32
        //DEBUG: e.Name#1: 34
        //DEBUG: e.Result#1: 36

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoGenResult/4 AsIs: (/7 AsIs: e.Vars#1/32 AsIs: )/8 } (/38 (/39 # CmdCreateElem/40 Tile{ HalfReuse: # Allocate/16 HalfReuse: s.ContextOffset1 #9/18 Reuse: # ElName/25 AsIs: e.Name#1/34 AsIs: )/17 } )/41 (/42 (/43 # CmdInsertElem/44 Tile{ AsIs: s.ContextOffset#1/9 } )/45 )/46 </47 & Add/48 1/49 s.ContextOffset#1/9/50 >/51 Tile{ AsIs: e.Result#1/36 } Tile{ AsIs: >/1 ]] }
        refalrts::alloc_open_bracket(vm, context[38]);
        refalrts::alloc_open_bracket(vm, context[39]);
        refalrts::alloc_ident(vm, context[40], identifiers[ident_CmdCreateElem]);
        refalrts::alloc_close_bracket(vm, context[41]);
        refalrts::alloc_open_bracket(vm, context[42]);
        refalrts::alloc_open_bracket(vm, context[43]);
        refalrts::alloc_ident(vm, context[44], identifiers[ident_CmdInsertElem]);
        refalrts::alloc_close_bracket(vm, context[45]);
        refalrts::alloc_close_bracket(vm, context[46]);
        refalrts::alloc_open_call(vm, context[47]);
        refalrts::alloc_name(vm, context[48], functions[efunc_Add]);
        refalrts::alloc_number(vm, context[49], 1UL);
        refalrts::copy_stvar(vm, context[50], context[9]);
        refalrts::alloc_close_call(vm, context[51]);
        refalrts::update_name(context[4], functions[efunc_DoGenResult]);
        refalrts::reinit_ident(context[16], identifiers[ident_Allocate]);
        refalrts::reinit_svar( context[18], context[9] );
        refalrts::update_ident(context[25], identifiers[ident_ElName]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::push_stack( vm, context[51] );
        refalrts::push_stack( vm, context[47] );
        refalrts::link_brackets( context[42], context[46] );
        refalrts::link_brackets( context[43], context[45] );
        refalrts::link_brackets( context[38], context[41] );
        refalrts::link_brackets( context[39], context[17] );
        refalrts::link_brackets( context[7], context[8] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[36], context[37] );
        res = refalrts::splice_evar( res, context[45], context[51] );
        res = refalrts::splice_elem( res, context[9] );
        res = refalrts::splice_evar( res, context[41], context[44] );
        res = refalrts::splice_evar( res, context[16], context[17] );
        res = refalrts::splice_evar( res, context[38], context[40] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & DoGenResult@1/4 (/7 e.Vars#1/32 )/8 s.ContextOffset#1/9 (/16 # Symbol/18 # Number/25 s.Number#1/38 )/17 e.Result#1/36 >/1
        context[32] = context[26];
        context[33] = context[27];
        context[34] = context[28];
        context[35] = context[29];
        context[36] = context[30];
        context[37] = context[31];
        if( ! refalrts::ident_term( identifiers[ident_Number], context[25] ) )
          continue;
        // closed e.Vars#1 as range 32
        // closed e.Result#1 as range 36
        if( ! refalrts::svar_left( context[38], context[34], context[35] ) )
          continue;
        if( ! refalrts::empty_seq( context[34], context[35] ) )
          continue;
        //DEBUG: s.ContextOffset#1: 9
        //DEBUG: e.Vars#1: 32
        //DEBUG: e.Result#1: 36
        //DEBUG: s.Number#1: 38

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoGenResult/4 AsIs: (/7 AsIs: e.Vars#1/32 AsIs: )/8 } (/39 (/40 # CmdCreateElem/41 Tile{ HalfReuse: # Allocate/16 HalfReuse: s.ContextOffset1 #9/18 Reuse: # ElNumber/25 AsIs: s.Number#1/38 AsIs: )/17 } )/42 (/43 (/44 # CmdInsertElem/45 Tile{ AsIs: s.ContextOffset#1/9 } )/46 )/47 </48 & Add/49 1/50 s.ContextOffset#1/9/51 >/52 Tile{ AsIs: e.Result#1/36 } Tile{ AsIs: >/1 ]] }
        refalrts::alloc_open_bracket(vm, context[39]);
        refalrts::alloc_open_bracket(vm, context[40]);
        refalrts::alloc_ident(vm, context[41], identifiers[ident_CmdCreateElem]);
        refalrts::alloc_close_bracket(vm, context[42]);
        refalrts::alloc_open_bracket(vm, context[43]);
        refalrts::alloc_open_bracket(vm, context[44]);
        refalrts::alloc_ident(vm, context[45], identifiers[ident_CmdInsertElem]);
        refalrts::alloc_close_bracket(vm, context[46]);
        refalrts::alloc_close_bracket(vm, context[47]);
        refalrts::alloc_open_call(vm, context[48]);
        refalrts::alloc_name(vm, context[49], functions[efunc_Add]);
        refalrts::alloc_number(vm, context[50], 1UL);
        refalrts::copy_stvar(vm, context[51], context[9]);
        refalrts::alloc_close_call(vm, context[52]);
        refalrts::update_name(context[4], functions[efunc_DoGenResult]);
        refalrts::reinit_ident(context[16], identifiers[ident_Allocate]);
        refalrts::reinit_svar( context[18], context[9] );
        refalrts::update_ident(context[25], identifiers[ident_ElNumber]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::push_stack( vm, context[52] );
        refalrts::push_stack( vm, context[48] );
        refalrts::link_brackets( context[43], context[47] );
        refalrts::link_brackets( context[44], context[46] );
        refalrts::link_brackets( context[39], context[42] );
        refalrts::link_brackets( context[40], context[17] );
        refalrts::link_brackets( context[7], context[8] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[36], context[37] );
        res = refalrts::splice_evar( res, context[46], context[52] );
        res = refalrts::splice_elem( res, context[9] );
        res = refalrts::splice_evar( res, context[42], context[45] );
        res = refalrts::splice_evar( res, context[16], context[17] );
        res = refalrts::splice_evar( res, context[39], context[41] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & DoGenResult@1/4 (/7 e.Vars#1/32 )/8 s.ContextOffset#1/9 (/16 # Symbol/18 # Identifier/25 e.Name#1/34 )/17 e.Result#1/36 >/1
      context[32] = context[26];
      context[33] = context[27];
      context[34] = context[28];
      context[35] = context[29];
      context[36] = context[30];
      context[37] = context[31];
      if( ! refalrts::ident_term( identifiers[ident_Identifier], context[25] ) )
        continue;
      // closed e.Vars#1 as range 32
      // closed e.Name#1 as range 34
      // closed e.Result#1 as range 36
      //DEBUG: s.ContextOffset#1: 9
      //DEBUG: e.Vars#1: 32
      //DEBUG: e.Name#1: 34
      //DEBUG: e.Result#1: 36

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoGenResult/4 AsIs: (/7 AsIs: e.Vars#1/32 AsIs: )/8 } (/38 (/39 # CmdCreateElem/40 Tile{ HalfReuse: # Allocate/16 HalfReuse: s.ContextOffset1 #9/18 Reuse: # ElIdent/25 AsIs: e.Name#1/34 AsIs: )/17 } )/41 (/42 (/43 # CmdInsertElem/44 Tile{ AsIs: s.ContextOffset#1/9 } )/45 )/46 </47 & Add/48 1/49 s.ContextOffset#1/9/50 >/51 Tile{ AsIs: e.Result#1/36 } Tile{ AsIs: >/1 ]] }
      refalrts::alloc_open_bracket(vm, context[38]);
      refalrts::alloc_open_bracket(vm, context[39]);
      refalrts::alloc_ident(vm, context[40], identifiers[ident_CmdCreateElem]);
      refalrts::alloc_close_bracket(vm, context[41]);
      refalrts::alloc_open_bracket(vm, context[42]);
      refalrts::alloc_open_bracket(vm, context[43]);
      refalrts::alloc_ident(vm, context[44], identifiers[ident_CmdInsertElem]);
      refalrts::alloc_close_bracket(vm, context[45]);
      refalrts::alloc_close_bracket(vm, context[46]);
      refalrts::alloc_open_call(vm, context[47]);
      refalrts::alloc_name(vm, context[48], functions[efunc_Add]);
      refalrts::alloc_number(vm, context[49], 1UL);
      refalrts::copy_stvar(vm, context[50], context[9]);
      refalrts::alloc_close_call(vm, context[51]);
      refalrts::update_name(context[4], functions[efunc_DoGenResult]);
      refalrts::reinit_ident(context[16], identifiers[ident_Allocate]);
      refalrts::reinit_svar( context[18], context[9] );
      refalrts::update_ident(context[25], identifiers[ident_ElIdent]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[51] );
      refalrts::push_stack( vm, context[47] );
      refalrts::link_brackets( context[42], context[46] );
      refalrts::link_brackets( context[43], context[45] );
      refalrts::link_brackets( context[38], context[41] );
      refalrts::link_brackets( context[39], context[17] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[36], context[37] );
      res = refalrts::splice_evar( res, context[45], context[51] );
      res = refalrts::splice_elem( res, context[9] );
      res = refalrts::splice_evar( res, context[41], context[44] );
      res = refalrts::splice_evar( res, context[16], context[17] );
      res = refalrts::splice_evar( res, context[38], context[40] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & DoGenResult@1/4 (/7 e.Vars#1/19 )/8 s.ContextOffset#1/9 (/16 # TkString/18 e.Chars#1/21 )/17 e.Result#1/23 >/1
      context[19] = context[10];
      context[20] = context[11];
      context[21] = context[14];
      context[22] = context[15];
      context[23] = context[12];
      context[24] = context[13];
      if( ! refalrts::ident_term( identifiers[ident_TkString], context[18] ) )
        continue;
      // closed e.Vars#1 as range 19
      // closed e.Chars#1 as range 21
      // closed e.Result#1 as range 23
      //DEBUG: s.ContextOffset#1: 9
      //DEBUG: e.Vars#1: 19
      //DEBUG: e.Chars#1: 21
      //DEBUG: e.Result#1: 23

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoGenResult/4 AsIs: (/7 AsIs: e.Vars#1/19 AsIs: )/8 } (/25 Tile{ AsIs: (/16 Reuse: # CmdCreateElem/18 } # Allocate/26 Tile{ AsIs: s.ContextOffset#1/9 } # ElString/27 Tile{ AsIs: e.Chars#1/21 } )/28 )/29 (/30 (/31 # CmdInsertRange/32 s.ContextOffset#1/9/33 )/34 )/35 </36 & Add/37 s.ContextOffset#1/9/38 2/39 Tile{ HalfReuse: >/17 AsIs: e.Result#1/23 AsIs: >/1 ]] }
      refalrts::alloc_open_bracket(vm, context[25]);
      refalrts::alloc_ident(vm, context[26], identifiers[ident_Allocate]);
      refalrts::alloc_ident(vm, context[27], identifiers[ident_ElString]);
      refalrts::alloc_close_bracket(vm, context[28]);
      refalrts::alloc_close_bracket(vm, context[29]);
      refalrts::alloc_open_bracket(vm, context[30]);
      refalrts::alloc_open_bracket(vm, context[31]);
      refalrts::alloc_ident(vm, context[32], identifiers[ident_CmdInsertRange]);
      refalrts::copy_stvar(vm, context[33], context[9]);
      refalrts::alloc_close_bracket(vm, context[34]);
      refalrts::alloc_close_bracket(vm, context[35]);
      refalrts::alloc_open_call(vm, context[36]);
      refalrts::alloc_name(vm, context[37], functions[efunc_Add]);
      refalrts::copy_stvar(vm, context[38], context[9]);
      refalrts::alloc_number(vm, context[39], 2UL);
      refalrts::update_name(context[4], functions[efunc_DoGenResult]);
      refalrts::update_ident(context[18], identifiers[ident_CmdCreateElem]);
      refalrts::reinit_close_call(context[17]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[17] );
      refalrts::push_stack( vm, context[36] );
      refalrts::link_brackets( context[30], context[35] );
      refalrts::link_brackets( context[31], context[34] );
      refalrts::link_brackets( context[25], context[29] );
      refalrts::link_brackets( context[16], context[28] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[17];
      res = refalrts::splice_evar( res, context[28], context[39] );
      res = refalrts::splice_evar( res, context[21], context[22] );
      res = refalrts::splice_elem( res, context[27] );
      res = refalrts::splice_elem( res, context[9] );
      res = refalrts::splice_elem( res, context[26] );
      res = refalrts::splice_evar( res, context[16], context[18] );
      res = refalrts::splice_elem( res, context[25] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & DoGenResult@1/4 (/7 e.Vars#1/19 )/8 s.ContextOffset#1/9 (/16 # Brackets/18 e.InBrackets#1/21 )/17 e.Result#1/23 >/1
      context[19] = context[10];
      context[20] = context[11];
      context[21] = context[14];
      context[22] = context[15];
      context[23] = context[12];
      context[24] = context[13];
      if( ! refalrts::ident_term( identifiers[ident_Brackets], context[18] ) )
        continue;
      // closed e.Vars#1 as range 19
      // closed e.InBrackets#1 as range 21
      // closed e.Result#1 as range 23
      //DEBUG: s.ContextOffset#1: 9
      //DEBUG: e.Vars#1: 19
      //DEBUG: e.InBrackets#1: 21
      //DEBUG: e.Result#1: 23

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoGenResult/4 AsIs: (/7 AsIs: e.Vars#1/19 AsIs: )/8 } (/25 (/26 # CmdCreateElem/27 # Allocate/28 Tile{ AsIs: s.ContextOffset#1/9 HalfReuse: # ElOpenBracket/16 HalfReuse: )/18 } )/29 (/30 (/31 # CmdInsertElem/32 s.ContextOffset#1/9/33 )/34 )/35 </36 & Add/37 1/38 s.ContextOffset#1/9/39 >/40 Tile{ AsIs: e.InBrackets#1/21 } (/41 # TkCloseBracket/42 s.ContextOffset#1/9/43 Tile{ AsIs: )/17 AsIs: e.Result#1/23 AsIs: >/1 ]] }
      refalrts::alloc_open_bracket(vm, context[25]);
      refalrts::alloc_open_bracket(vm, context[26]);
      refalrts::alloc_ident(vm, context[27], identifiers[ident_CmdCreateElem]);
      refalrts::alloc_ident(vm, context[28], identifiers[ident_Allocate]);
      refalrts::alloc_close_bracket(vm, context[29]);
      refalrts::alloc_open_bracket(vm, context[30]);
      refalrts::alloc_open_bracket(vm, context[31]);
      refalrts::alloc_ident(vm, context[32], identifiers[ident_CmdInsertElem]);
      refalrts::copy_stvar(vm, context[33], context[9]);
      refalrts::alloc_close_bracket(vm, context[34]);
      refalrts::alloc_close_bracket(vm, context[35]);
      refalrts::alloc_open_call(vm, context[36]);
      refalrts::alloc_name(vm, context[37], functions[efunc_Add]);
      refalrts::alloc_number(vm, context[38], 1UL);
      refalrts::copy_stvar(vm, context[39], context[9]);
      refalrts::alloc_close_call(vm, context[40]);
      refalrts::alloc_open_bracket(vm, context[41]);
      refalrts::alloc_ident(vm, context[42], identifiers[ident_TkCloseBracket]);
      refalrts::copy_stvar(vm, context[43], context[9]);
      refalrts::update_name(context[4], functions[efunc_DoGenResult]);
      refalrts::reinit_ident(context[16], identifiers[ident_ElOpenBracket]);
      refalrts::reinit_close_bracket(context[18]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[41], context[17] );
      refalrts::push_stack( vm, context[40] );
      refalrts::push_stack( vm, context[36] );
      refalrts::link_brackets( context[30], context[35] );
      refalrts::link_brackets( context[31], context[34] );
      refalrts::link_brackets( context[25], context[29] );
      refalrts::link_brackets( context[26], context[18] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[17];
      res = refalrts::splice_evar( res, context[41], context[43] );
      res = refalrts::splice_evar( res, context[21], context[22] );
      res = refalrts::splice_evar( res, context[29], context[40] );
      res = refalrts::splice_evar( res, context[9], context[18] );
      res = refalrts::splice_evar( res, context[25], context[28] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & DoGenResult@1/4 (/7 e.Vars#1/19 )/8 s.ContextOffset#1/9 (/16 # CallBrackets/18 e.InBrackets#1/21 )/17 e.Result#1/23 >/1
      context[19] = context[10];
      context[20] = context[11];
      context[21] = context[14];
      context[22] = context[15];
      context[23] = context[12];
      context[24] = context[13];
      if( ! refalrts::ident_term( identifiers[ident_CallBrackets], context[18] ) )
        continue;
      // closed e.Vars#1 as range 19
      // closed e.InBrackets#1 as range 21
      // closed e.Result#1 as range 23
      //DEBUG: s.ContextOffset#1: 9
      //DEBUG: e.Vars#1: 19
      //DEBUG: e.InBrackets#1: 21
      //DEBUG: e.Result#1: 23

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoGenResult/4 AsIs: (/7 AsIs: e.Vars#1/19 AsIs: )/8 } (/25 (/26 # CmdCreateElem/27 # Allocate/28 Tile{ AsIs: s.ContextOffset#1/9 HalfReuse: # ElOpenCall/16 HalfReuse: )/18 } )/29 (/30 (/31 # CmdInsertElem/32 s.ContextOffset#1/9/33 )/34 )/35 </36 & Add/37 1/38 s.ContextOffset#1/9/39 >/40 Tile{ AsIs: e.InBrackets#1/21 } (/41 # TkCloseCall/42 s.ContextOffset#1/9/43 Tile{ AsIs: )/17 AsIs: e.Result#1/23 AsIs: >/1 ]] }
      refalrts::alloc_open_bracket(vm, context[25]);
      refalrts::alloc_open_bracket(vm, context[26]);
      refalrts::alloc_ident(vm, context[27], identifiers[ident_CmdCreateElem]);
      refalrts::alloc_ident(vm, context[28], identifiers[ident_Allocate]);
      refalrts::alloc_close_bracket(vm, context[29]);
      refalrts::alloc_open_bracket(vm, context[30]);
      refalrts::alloc_open_bracket(vm, context[31]);
      refalrts::alloc_ident(vm, context[32], identifiers[ident_CmdInsertElem]);
      refalrts::copy_stvar(vm, context[33], context[9]);
      refalrts::alloc_close_bracket(vm, context[34]);
      refalrts::alloc_close_bracket(vm, context[35]);
      refalrts::alloc_open_call(vm, context[36]);
      refalrts::alloc_name(vm, context[37], functions[efunc_Add]);
      refalrts::alloc_number(vm, context[38], 1UL);
      refalrts::copy_stvar(vm, context[39], context[9]);
      refalrts::alloc_close_call(vm, context[40]);
      refalrts::alloc_open_bracket(vm, context[41]);
      refalrts::alloc_ident(vm, context[42], identifiers[ident_TkCloseCall]);
      refalrts::copy_stvar(vm, context[43], context[9]);
      refalrts::update_name(context[4], functions[efunc_DoGenResult]);
      refalrts::reinit_ident(context[16], identifiers[ident_ElOpenCall]);
      refalrts::reinit_close_bracket(context[18]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[41], context[17] );
      refalrts::push_stack( vm, context[40] );
      refalrts::push_stack( vm, context[36] );
      refalrts::link_brackets( context[30], context[35] );
      refalrts::link_brackets( context[31], context[34] );
      refalrts::link_brackets( context[25], context[29] );
      refalrts::link_brackets( context[26], context[18] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[17];
      res = refalrts::splice_evar( res, context[41], context[43] );
      res = refalrts::splice_evar( res, context[21], context[22] );
      res = refalrts::splice_evar( res, context[29], context[40] );
      res = refalrts::splice_evar( res, context[9], context[18] );
      res = refalrts::splice_evar( res, context[25], context[28] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & DoGenResult@1/4 (/7 e.Vars#1/19 )/8 s.ContextOffset#1/9 (/16 # ADT-Brackets/18 (/27 e.Name#1/25 )/28 e.InBrackets#1/21 )/17 e.Result#1/23 >/1
      context[19] = context[10];
      context[20] = context[11];
      context[21] = context[14];
      context[22] = context[15];
      context[23] = context[12];
      context[24] = context[13];
      if( ! refalrts::ident_term( identifiers[ident_ADTm_Brackets], context[18] ) )
        continue;
      context[25] = 0;
      context[26] = 0;
      context[27] = refalrts::brackets_left( context[25], context[26], context[21], context[22] );
      if( ! context[27] )
        continue;
      refalrts::bracket_pointers(context[27], context[28]);
      // closed e.Vars#1 as range 19
      // closed e.Name#1 as range 25
      // closed e.InBrackets#1 as range 21
      // closed e.Result#1 as range 23
      //DEBUG: s.ContextOffset#1: 9
      //DEBUG: e.Vars#1: 19
      //DEBUG: e.Name#1: 25
      //DEBUG: e.InBrackets#1: 21
      //DEBUG: e.Result#1: 23

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoGenResult/4 AsIs: (/7 AsIs: e.Vars#1/19 AsIs: )/8 } (/29 (/30 # CmdCreateElem/31 # Allocate/32 s.ContextOffset#1/9/33 # ElOpenADT/34 )/35 )/36 (/37 (/38 # CmdInsertElem/39 Tile{ AsIs: s.ContextOffset#1/9 } )/40 )/41 </42 & Add/43 1/44 s.ContextOffset#1/9/45 >/46 Tile{ AsIs: (/16 Reuse: # Symbol/18 HalfReuse: # Name/27 AsIs: e.Name#1/25 AsIs: )/28 AsIs: e.InBrackets#1/21 HalfReuse: (/17 } # TkCloseADT/47 s.ContextOffset#1/9/48 )/49 Tile{ AsIs: e.Result#1/23 } Tile{ AsIs: >/1 ]] }
      refalrts::alloc_open_bracket(vm, context[29]);
      refalrts::alloc_open_bracket(vm, context[30]);
      refalrts::alloc_ident(vm, context[31], identifiers[ident_CmdCreateElem]);
      refalrts::alloc_ident(vm, context[32], identifiers[ident_Allocate]);
      refalrts::copy_stvar(vm, context[33], context[9]);
      refalrts::alloc_ident(vm, context[34], identifiers[ident_ElOpenADT]);
      refalrts::alloc_close_bracket(vm, context[35]);
      refalrts::alloc_close_bracket(vm, context[36]);
      refalrts::alloc_open_bracket(vm, context[37]);
      refalrts::alloc_open_bracket(vm, context[38]);
      refalrts::alloc_ident(vm, context[39], identifiers[ident_CmdInsertElem]);
      refalrts::alloc_close_bracket(vm, context[40]);
      refalrts::alloc_close_bracket(vm, context[41]);
      refalrts::alloc_open_call(vm, context[42]);
      refalrts::alloc_name(vm, context[43], functions[efunc_Add]);
      refalrts::alloc_number(vm, context[44], 1UL);
      refalrts::copy_stvar(vm, context[45], context[9]);
      refalrts::alloc_close_call(vm, context[46]);
      refalrts::alloc_ident(vm, context[47], identifiers[ident_TkCloseADT]);
      refalrts::copy_stvar(vm, context[48], context[9]);
      refalrts::alloc_close_bracket(vm, context[49]);
      refalrts::update_name(context[4], functions[efunc_DoGenResult]);
      refalrts::update_ident(context[18], identifiers[ident_Symbol]);
      refalrts::reinit_ident(context[27], identifiers[ident_Name]);
      refalrts::reinit_open_bracket(context[17]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[17], context[49] );
      refalrts::link_brackets( context[16], context[28] );
      refalrts::push_stack( vm, context[46] );
      refalrts::push_stack( vm, context[42] );
      refalrts::link_brackets( context[37], context[41] );
      refalrts::link_brackets( context[38], context[40] );
      refalrts::link_brackets( context[29], context[36] );
      refalrts::link_brackets( context[30], context[35] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[23], context[24] );
      res = refalrts::splice_evar( res, context[47], context[49] );
      res = refalrts::splice_evar( res, context[16], context[17] );
      res = refalrts::splice_evar( res, context[40], context[46] );
      res = refalrts::splice_elem( res, context[9] );
      res = refalrts::splice_evar( res, context[29], context[39] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & DoGenResult@1/4 (/7 e.Vars#1/19 )/8 s.ContextOffset#1/9 (/16 # ClosureBrackets/18 e.InBrackets#1/21 )/17 e.Result#1/23 >/1
      context[19] = context[10];
      context[20] = context[11];
      context[21] = context[14];
      context[22] = context[15];
      context[23] = context[12];
      context[24] = context[13];
      if( ! refalrts::ident_term( identifiers[ident_ClosureBrackets], context[18] ) )
        continue;
      // closed e.Vars#1 as range 19
      // closed e.InBrackets#1 as range 21
      // closed e.Result#1 as range 23
      //DEBUG: s.ContextOffset#1: 9
      //DEBUG: e.Vars#1: 19
      //DEBUG: e.InBrackets#1: 21
      //DEBUG: e.Result#1: 23

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoGenResult/4 AsIs: (/7 AsIs: e.Vars#1/19 AsIs: )/8 } (/25 (/26 # CmdCreateElem/27 # Allocate/28 Tile{ AsIs: s.ContextOffset#1/9 HalfReuse: # ElClosureHead/16 HalfReuse: )/18 } )/29 (/30 (/31 # CmdInsertElem/32 s.ContextOffset#1/9/33 )/34 )/35 </36 & Add/37 1/38 s.ContextOffset#1/9/39 >/40 Tile{ AsIs: e.InBrackets#1/21 } (/41 # TkUnwrappedClosure/42 s.ContextOffset#1/9/43 Tile{ AsIs: )/17 AsIs: e.Result#1/23 AsIs: >/1 ]] }
      refalrts::alloc_open_bracket(vm, context[25]);
      refalrts::alloc_open_bracket(vm, context[26]);
      refalrts::alloc_ident(vm, context[27], identifiers[ident_CmdCreateElem]);
      refalrts::alloc_ident(vm, context[28], identifiers[ident_Allocate]);
      refalrts::alloc_close_bracket(vm, context[29]);
      refalrts::alloc_open_bracket(vm, context[30]);
      refalrts::alloc_open_bracket(vm, context[31]);
      refalrts::alloc_ident(vm, context[32], identifiers[ident_CmdInsertElem]);
      refalrts::copy_stvar(vm, context[33], context[9]);
      refalrts::alloc_close_bracket(vm, context[34]);
      refalrts::alloc_close_bracket(vm, context[35]);
      refalrts::alloc_open_call(vm, context[36]);
      refalrts::alloc_name(vm, context[37], functions[efunc_Add]);
      refalrts::alloc_number(vm, context[38], 1UL);
      refalrts::copy_stvar(vm, context[39], context[9]);
      refalrts::alloc_close_call(vm, context[40]);
      refalrts::alloc_open_bracket(vm, context[41]);
      refalrts::alloc_ident(vm, context[42], identifiers[ident_TkUnwrappedClosure]);
      refalrts::copy_stvar(vm, context[43], context[9]);
      refalrts::update_name(context[4], functions[efunc_DoGenResult]);
      refalrts::reinit_ident(context[16], identifiers[ident_ElClosureHead]);
      refalrts::reinit_close_bracket(context[18]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[41], context[17] );
      refalrts::push_stack( vm, context[40] );
      refalrts::push_stack( vm, context[36] );
      refalrts::link_brackets( context[30], context[35] );
      refalrts::link_brackets( context[31], context[34] );
      refalrts::link_brackets( context[25], context[29] );
      refalrts::link_brackets( context[26], context[18] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[17];
      res = refalrts::splice_evar( res, context[41], context[43] );
      res = refalrts::splice_evar( res, context[21], context[22] );
      res = refalrts::splice_evar( res, context[29], context[40] );
      res = refalrts::splice_evar( res, context[9], context[18] );
      res = refalrts::splice_evar( res, context[25], context[28] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & DoGenResult@1/4 (/7 e.new#14/19 )/8 s.new#9/9 (/16 s.new#11/18 s.new#12/25 e.new#13/21 )/17 e.new#10/23 >/1
    context[19] = context[10];
    context[20] = context[11];
    context[21] = context[14];
    context[22] = context[15];
    context[23] = context[12];
    context[24] = context[13];
    // closed e.new#14 as range 19
    // closed e.new#10 as range 23
    if( ! refalrts::svar_left( context[25], context[21], context[22] ) )
      continue;
    // closed e.new#13 as range 21
    do {
      // </0 & DoGenResult@1/4 (/7 e.new#19/26 )/8 s.new#15/9 (/16 s.new#17/18 s.new#18/25 )/17 e.new#16/28 >/1
      context[26] = context[19];
      context[27] = context[20];
      context[28] = context[23];
      context[29] = context[24];
      if( ! refalrts::empty_seq( context[21], context[22] ) )
        continue;
      // closed e.new#19 as range 26
      // closed e.new#16 as range 28
      do {
        // </0 & DoGenResult@1/4 (/7 e.Vars#1/30 )/8 s.ContextOffset#1/9 (/16 # TkCloseBracket/18 s.OpenCounter#1/25 )/17 e.Result#1/32 >/1
        context[30] = context[26];
        context[31] = context[27];
        context[32] = context[28];
        context[33] = context[29];
        if( ! refalrts::ident_term( identifiers[ident_TkCloseBracket], context[18] ) )
          continue;
        // closed e.Vars#1 as range 30
        // closed e.Result#1 as range 32
        //DEBUG: s.ContextOffset#1: 9
        //DEBUG: s.OpenCounter#1: 25
        //DEBUG: e.Vars#1: 30
        //DEBUG: e.Result#1: 32

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoGenResult/4 AsIs: (/7 AsIs: e.Vars#1/30 AsIs: )/8 } (/34 (/35 # CmdCreateElem/36 # Allocate/37 s.ContextOffset#1/9/38 # ElCloseBracket/39 )/40 )/41 (/42 Tile{ AsIs: (/16 Reuse: # CmdLinkBrackets/18 AsIs: s.OpenCounter#1/25 } Tile{ AsIs: s.ContextOffset#1/9 } )/43 (/44 # CmdInsertElem/45 s.ContextOffset#1/9/46 )/47 )/48 </49 & Add/50 1/51 s.ContextOffset#1/9/52 Tile{ HalfReuse: >/17 AsIs: e.Result#1/32 AsIs: >/1 ]] }
        refalrts::alloc_open_bracket(vm, context[34]);
        refalrts::alloc_open_bracket(vm, context[35]);
        refalrts::alloc_ident(vm, context[36], identifiers[ident_CmdCreateElem]);
        refalrts::alloc_ident(vm, context[37], identifiers[ident_Allocate]);
        refalrts::copy_stvar(vm, context[38], context[9]);
        refalrts::alloc_ident(vm, context[39], identifiers[ident_ElCloseBracket]);
        refalrts::alloc_close_bracket(vm, context[40]);
        refalrts::alloc_close_bracket(vm, context[41]);
        refalrts::alloc_open_bracket(vm, context[42]);
        refalrts::alloc_close_bracket(vm, context[43]);
        refalrts::alloc_open_bracket(vm, context[44]);
        refalrts::alloc_ident(vm, context[45], identifiers[ident_CmdInsertElem]);
        refalrts::copy_stvar(vm, context[46], context[9]);
        refalrts::alloc_close_bracket(vm, context[47]);
        refalrts::alloc_close_bracket(vm, context[48]);
        refalrts::alloc_open_call(vm, context[49]);
        refalrts::alloc_name(vm, context[50], functions[efunc_Add]);
        refalrts::alloc_number(vm, context[51], 1UL);
        refalrts::copy_stvar(vm, context[52], context[9]);
        refalrts::update_name(context[4], functions[efunc_DoGenResult]);
        refalrts::update_ident(context[18], identifiers[ident_CmdLinkBrackets]);
        refalrts::reinit_close_call(context[17]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::push_stack( vm, context[17] );
        refalrts::push_stack( vm, context[49] );
        refalrts::link_brackets( context[42], context[48] );
        refalrts::link_brackets( context[44], context[47] );
        refalrts::link_brackets( context[16], context[43] );
        refalrts::link_brackets( context[34], context[41] );
        refalrts::link_brackets( context[35], context[40] );
        refalrts::link_brackets( context[7], context[8] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[17];
        res = refalrts::splice_evar( res, context[43], context[52] );
        res = refalrts::splice_elem( res, context[9] );
        res = refalrts::splice_evar( res, context[16], context[25] );
        res = refalrts::splice_evar( res, context[34], context[42] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & DoGenResult@1/4 (/7 e.Vars#1/30 )/8 s.ContextOffset#1/9 (/16 # TkCloseADT/18 s.OpenCounter#1/25 )/17 e.Result#1/32 >/1
        context[30] = context[26];
        context[31] = context[27];
        context[32] = context[28];
        context[33] = context[29];
        if( ! refalrts::ident_term( identifiers[ident_TkCloseADT], context[18] ) )
          continue;
        // closed e.Vars#1 as range 30
        // closed e.Result#1 as range 32
        //DEBUG: s.ContextOffset#1: 9
        //DEBUG: s.OpenCounter#1: 25
        //DEBUG: e.Vars#1: 30
        //DEBUG: e.Result#1: 32

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoGenResult/4 AsIs: (/7 AsIs: e.Vars#1/30 AsIs: )/8 } (/34 (/35 # CmdCreateElem/36 # Allocate/37 s.ContextOffset#1/9/38 # ElCloseADT/39 )/40 )/41 (/42 Tile{ AsIs: (/16 Reuse: # CmdLinkBrackets/18 AsIs: s.OpenCounter#1/25 } Tile{ AsIs: s.ContextOffset#1/9 } )/43 (/44 # CmdInsertElem/45 s.ContextOffset#1/9/46 )/47 )/48 </49 & Add/50 1/51 s.ContextOffset#1/9/52 Tile{ HalfReuse: >/17 AsIs: e.Result#1/32 AsIs: >/1 ]] }
        refalrts::alloc_open_bracket(vm, context[34]);
        refalrts::alloc_open_bracket(vm, context[35]);
        refalrts::alloc_ident(vm, context[36], identifiers[ident_CmdCreateElem]);
        refalrts::alloc_ident(vm, context[37], identifiers[ident_Allocate]);
        refalrts::copy_stvar(vm, context[38], context[9]);
        refalrts::alloc_ident(vm, context[39], identifiers[ident_ElCloseADT]);
        refalrts::alloc_close_bracket(vm, context[40]);
        refalrts::alloc_close_bracket(vm, context[41]);
        refalrts::alloc_open_bracket(vm, context[42]);
        refalrts::alloc_close_bracket(vm, context[43]);
        refalrts::alloc_open_bracket(vm, context[44]);
        refalrts::alloc_ident(vm, context[45], identifiers[ident_CmdInsertElem]);
        refalrts::copy_stvar(vm, context[46], context[9]);
        refalrts::alloc_close_bracket(vm, context[47]);
        refalrts::alloc_close_bracket(vm, context[48]);
        refalrts::alloc_open_call(vm, context[49]);
        refalrts::alloc_name(vm, context[50], functions[efunc_Add]);
        refalrts::alloc_number(vm, context[51], 1UL);
        refalrts::copy_stvar(vm, context[52], context[9]);
        refalrts::update_name(context[4], functions[efunc_DoGenResult]);
        refalrts::update_ident(context[18], identifiers[ident_CmdLinkBrackets]);
        refalrts::reinit_close_call(context[17]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::push_stack( vm, context[17] );
        refalrts::push_stack( vm, context[49] );
        refalrts::link_brackets( context[42], context[48] );
        refalrts::link_brackets( context[44], context[47] );
        refalrts::link_brackets( context[16], context[43] );
        refalrts::link_brackets( context[34], context[41] );
        refalrts::link_brackets( context[35], context[40] );
        refalrts::link_brackets( context[7], context[8] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[17];
        res = refalrts::splice_evar( res, context[43], context[52] );
        res = refalrts::splice_elem( res, context[9] );
        res = refalrts::splice_evar( res, context[16], context[25] );
        res = refalrts::splice_evar( res, context[34], context[42] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & DoGenResult@1/4 (/7 e.Vars#1/30 )/8 s.ContextOffset#1/9 (/16 # TkCloseCall/18 s.OpenCounter#1/25 )/17 e.Result#1/32 >/1
        context[30] = context[26];
        context[31] = context[27];
        context[32] = context[28];
        context[33] = context[29];
        if( ! refalrts::ident_term( identifiers[ident_TkCloseCall], context[18] ) )
          continue;
        // closed e.Vars#1 as range 30
        // closed e.Result#1 as range 32
        //DEBUG: s.ContextOffset#1: 9
        //DEBUG: s.OpenCounter#1: 25
        //DEBUG: e.Vars#1: 30
        //DEBUG: e.Result#1: 32

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoGenResult/4 AsIs: (/7 AsIs: e.Vars#1/30 AsIs: )/8 } (/34 (/35 # CmdCreateElem/36 # Allocate/37 s.ContextOffset#1/9/38 # ElCloseCall/39 )/40 )/41 (/42 (/43 # CmdPushStack/44 Tile{ AsIs: s.ContextOffset#1/9 } )/45 Tile{ AsIs: (/16 Reuse: # CmdPushStack/18 AsIs: s.OpenCounter#1/25 AsIs: )/17 } (/46 # CmdInsertElem/47 s.ContextOffset#1/9/48 )/49 )/50 </51 & Add/52 1/53 s.ContextOffset#1/9/54 >/55 Tile{ AsIs: e.Result#1/32 } Tile{ AsIs: >/1 ]] }
        refalrts::alloc_open_bracket(vm, context[34]);
        refalrts::alloc_open_bracket(vm, context[35]);
        refalrts::alloc_ident(vm, context[36], identifiers[ident_CmdCreateElem]);
        refalrts::alloc_ident(vm, context[37], identifiers[ident_Allocate]);
        refalrts::copy_stvar(vm, context[38], context[9]);
        refalrts::alloc_ident(vm, context[39], identifiers[ident_ElCloseCall]);
        refalrts::alloc_close_bracket(vm, context[40]);
        refalrts::alloc_close_bracket(vm, context[41]);
        refalrts::alloc_open_bracket(vm, context[42]);
        refalrts::alloc_open_bracket(vm, context[43]);
        refalrts::alloc_ident(vm, context[44], identifiers[ident_CmdPushStack]);
        refalrts::alloc_close_bracket(vm, context[45]);
        refalrts::alloc_open_bracket(vm, context[46]);
        refalrts::alloc_ident(vm, context[47], identifiers[ident_CmdInsertElem]);
        refalrts::copy_stvar(vm, context[48], context[9]);
        refalrts::alloc_close_bracket(vm, context[49]);
        refalrts::alloc_close_bracket(vm, context[50]);
        refalrts::alloc_open_call(vm, context[51]);
        refalrts::alloc_name(vm, context[52], functions[efunc_Add]);
        refalrts::alloc_number(vm, context[53], 1UL);
        refalrts::copy_stvar(vm, context[54], context[9]);
        refalrts::alloc_close_call(vm, context[55]);
        refalrts::update_name(context[4], functions[efunc_DoGenResult]);
        refalrts::update_ident(context[18], identifiers[ident_CmdPushStack]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::push_stack( vm, context[55] );
        refalrts::push_stack( vm, context[51] );
        refalrts::link_brackets( context[42], context[50] );
        refalrts::link_brackets( context[46], context[49] );
        refalrts::link_brackets( context[16], context[17] );
        refalrts::link_brackets( context[43], context[45] );
        refalrts::link_brackets( context[34], context[41] );
        refalrts::link_brackets( context[35], context[40] );
        refalrts::link_brackets( context[7], context[8] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[32], context[33] );
        res = refalrts::splice_evar( res, context[46], context[55] );
        res = refalrts::splice_evar( res, context[16], context[17] );
        res = refalrts::splice_elem( res, context[45] );
        res = refalrts::splice_elem( res, context[9] );
        res = refalrts::splice_evar( res, context[34], context[44] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & DoGenResult@1/4 (/7 e.Vars#1/30 )/8 s.ContextOffset#1/9 (/16 # TkUnwrappedClosure/18 s.HeadCounter#1/25 )/17 e.Result#1/32 >/1
      context[30] = context[26];
      context[31] = context[27];
      context[32] = context[28];
      context[33] = context[29];
      if( ! refalrts::ident_term( identifiers[ident_TkUnwrappedClosure], context[18] ) )
        continue;
      // closed e.Vars#1 as range 30
      // closed e.Result#1 as range 32
      //DEBUG: s.ContextOffset#1: 9
      //DEBUG: s.HeadCounter#1: 25
      //DEBUG: e.Vars#1: 30
      //DEBUG: e.Result#1: 32

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoGenResult/4 AsIs: (/7 AsIs: e.Vars#1/30 AsIs: )/8 } (/34 (/35 # CmdCreateElem/36 # Allocate/37 Tile{ HalfReuse: s.ContextOffset1 #9/16 Reuse: # ElUnwrappedClosure/18 AsIs: s.HeadCounter#1/25 } )/38 )/39 (/40 (/41 # CmdInsertElem/42 Tile{ AsIs: s.ContextOffset#1/9 } )/43 (/44 # CmdWrapClosure/45 s.ContextOffset#1/9/46 )/47 )/48 </49 & Add/50 1/51 s.ContextOffset#1/9/52 Tile{ HalfReuse: >/17 AsIs: e.Result#1/32 AsIs: >/1 ]] }
      refalrts::alloc_open_bracket(vm, context[34]);
      refalrts::alloc_open_bracket(vm, context[35]);
      refalrts::alloc_ident(vm, context[36], identifiers[ident_CmdCreateElem]);
      refalrts::alloc_ident(vm, context[37], identifiers[ident_Allocate]);
      refalrts::alloc_close_bracket(vm, context[38]);
      refalrts::alloc_close_bracket(vm, context[39]);
      refalrts::alloc_open_bracket(vm, context[40]);
      refalrts::alloc_open_bracket(vm, context[41]);
      refalrts::alloc_ident(vm, context[42], identifiers[ident_CmdInsertElem]);
      refalrts::alloc_close_bracket(vm, context[43]);
      refalrts::alloc_open_bracket(vm, context[44]);
      refalrts::alloc_ident(vm, context[45], identifiers[ident_CmdWrapClosure]);
      refalrts::copy_stvar(vm, context[46], context[9]);
      refalrts::alloc_close_bracket(vm, context[47]);
      refalrts::alloc_close_bracket(vm, context[48]);
      refalrts::alloc_open_call(vm, context[49]);
      refalrts::alloc_name(vm, context[50], functions[efunc_Add]);
      refalrts::alloc_number(vm, context[51], 1UL);
      refalrts::copy_stvar(vm, context[52], context[9]);
      refalrts::update_name(context[4], functions[efunc_DoGenResult]);
      refalrts::reinit_svar( context[16], context[9] );
      refalrts::update_ident(context[18], identifiers[ident_ElUnwrappedClosure]);
      refalrts::reinit_close_call(context[17]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[17] );
      refalrts::push_stack( vm, context[49] );
      refalrts::link_brackets( context[40], context[48] );
      refalrts::link_brackets( context[44], context[47] );
      refalrts::link_brackets( context[41], context[43] );
      refalrts::link_brackets( context[34], context[39] );
      refalrts::link_brackets( context[35], context[38] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[17];
      res = refalrts::splice_evar( res, context[43], context[52] );
      res = refalrts::splice_elem( res, context[9] );
      res = refalrts::splice_evar( res, context[38], context[42] );
      res = refalrts::splice_evar( res, context[16], context[25] );
      res = refalrts::splice_evar( res, context[34], context[37] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & DoGenResult@1/4 (/7 e.new#19/26 )/8 s.new#15/9 (/16 # TkVariable/18 s.new#17/25 e.new#18/28 )/17 e.new#16/30 >/1
    context[26] = context[19];
    context[27] = context[20];
    context[28] = context[21];
    context[29] = context[22];
    context[30] = context[23];
    context[31] = context[24];
    if( ! refalrts::ident_term( identifiers[ident_TkVariable], context[18] ) )
      continue;
    // closed e.new#19 as range 26
    // closed e.new#18 as range 28
    // closed e.new#16 as range 30
    do {
      // </0 & DoGenResult@1/4 (/7 e.Vars-B#1/38 (/44 s.Mode#1/46 (/49 e.Index#1/55 )/50 (/53 e.ResultVars#1/51 )/54 s.NextPatternVar#1/57 e.PatternVars#1/42 )/45 e.Vars-E#1/40 )/8 s.ContextOffset#1/9 (/16 # TkVariable/18 s.Mode#1/25 e.Index#1/34 )/17 e.Result#1/36 >/1
      context[32] = context[26];
      context[33] = context[27];
      context[34] = context[28];
      context[35] = context[29];
      context[36] = context[30];
      context[37] = context[31];
      // closed e.Index#1 as range 34
      // closed e.Result#1 as range 36
      context[38] = 0;
      context[39] = 0;
      refalrts::start_e_loop(vm);
      do {
        context[40] = context[32];
        context[41] = context[33];
        context[42] = 0;
        context[43] = 0;
        context[44] = refalrts::brackets_left( context[42], context[43], context[40], context[41] );
        if( ! context[44] )
          continue;
        refalrts::bracket_pointers(context[44], context[45]);
        if( ! refalrts::repeated_stvar_left( vm, context[46], context[25], context[42], context[43] ) )
          continue;
        context[47] = 0;
        context[48] = 0;
        context[49] = refalrts::brackets_left( context[47], context[48], context[42], context[43] );
        if( ! context[49] )
          continue;
        refalrts::bracket_pointers(context[49], context[50]);
        context[51] = 0;
        context[52] = 0;
        context[53] = refalrts::brackets_left( context[51], context[52], context[42], context[43] );
        if( ! context[53] )
          continue;
        refalrts::bracket_pointers(context[53], context[54]);
        if( ! refalrts::repeated_evar_left( vm, context[55], context[56], context[34], context[35], context[47], context[48] ) )
          continue;
        if( ! refalrts::empty_seq( context[47], context[48] ) )
          continue;
        // closed e.ResultVars#1 as range 51
        // closed e.Vars-E#1 as range 40
        if( ! refalrts::svar_left( context[57], context[42], context[43] ) )
          continue;
        // closed e.PatternVars#1 as range 42
        //DEBUG: s.ContextOffset#1: 9
        //DEBUG: s.Mode#1: 25
        //DEBUG: e.Index#1: 34
        //DEBUG: e.Result#1: 36
        //DEBUG: e.Vars-B#1: 38
        //DEBUG: e.ResultVars#1: 51
        //DEBUG: e.Vars-E#1: 40
        //DEBUG: s.NextPatternVar#1: 57
        //DEBUG: e.PatternVars#1: 42

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.ContextOffset#1/9 {REMOVED TILE} e.Index#1/34 {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoGenResult@2/4 AsIs: (/7 AsIs: e.Vars-B#1/38 AsIs: (/44 AsIs: s.Mode#1/46 AsIs: (/49 AsIs: e.Index#1/55 AsIs: )/50 AsIs: (/53 AsIs: e.ResultVars#1/51 HalfReuse: s.NextPatternVar1 #57/54 } )/58 Tile{ AsIs: e.PatternVars#1/42 } Tile{ AsIs: )/45 AsIs: e.Vars-E#1/40 AsIs: )/8 } (/59 Tile{ AsIs: (/16 Reuse: # CmdInsertVar/18 AsIs: s.Mode#1/25 } Tile{ AsIs: s.NextPatternVar#1/57 } )/60 )/61 Tile{ HalfReuse: s.ContextOffset1 #9/17 AsIs: e.Result#1/36 AsIs: >/1 ]] }
        refalrts::alloc_close_bracket(vm, context[58]);
        refalrts::alloc_open_bracket(vm, context[59]);
        refalrts::alloc_close_bracket(vm, context[60]);
        refalrts::alloc_close_bracket(vm, context[61]);
        refalrts::update_name(context[4], functions[efunc_gen_DoGenResult_Z2]);
        refalrts::reinit_svar( context[54], context[57] );
        refalrts::update_ident(context[18], identifiers[ident_CmdInsertVar]);
        refalrts::reinit_svar( context[17], context[9] );
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[59], context[61] );
        refalrts::link_brackets( context[16], context[60] );
        refalrts::link_brackets( context[7], context[8] );
        refalrts::link_brackets( context[44], context[45] );
        refalrts::link_brackets( context[53], context[58] );
        refalrts::link_brackets( context[49], context[50] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[17];
        res = refalrts::splice_evar( res, context[60], context[61] );
        res = refalrts::splice_elem( res, context[57] );
        res = refalrts::splice_evar( res, context[16], context[25] );
        res = refalrts::splice_elem( res, context[59] );
        res = refalrts::splice_evar( res, context[45], context[8] );
        res = refalrts::splice_evar( res, context[42], context[43] );
        res = refalrts::splice_elem( res, context[58] );
        refalrts::splice_to_freelist_open( vm, context[54], res );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[38], context[39], context[32], context[33] ) );
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & DoGenResult@1/4 (/7 e.Vars-B#1/38 (/44 s.Mode#1/54 (/52 e.Index#1/55 )/53 (/48 e.ResultVars#1/46 s.Sample#1/57 )/49 )/45 e.Vars-E#1/40 )/8 s.ContextOffset#1/9 (/16 # TkVariable/18 s.Mode#1/25 e.Index#1/34 )/17 e.Result#1/36 >/1
    context[32] = context[26];
    context[33] = context[27];
    context[34] = context[28];
    context[35] = context[29];
    context[36] = context[30];
    context[37] = context[31];
    // closed e.Index#1 as range 34
    // closed e.Result#1 as range 36
    context[38] = 0;
    context[39] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[40] = context[32];
      context[41] = context[33];
      context[42] = 0;
      context[43] = 0;
      context[44] = refalrts::brackets_left( context[42], context[43], context[40], context[41] );
      if( ! context[44] )
        continue;
      refalrts::bracket_pointers(context[44], context[45]);
      context[46] = 0;
      context[47] = 0;
      context[48] = refalrts::brackets_right( context[46], context[47], context[42], context[43] );
      if( ! context[48] )
        continue;
      refalrts::bracket_pointers(context[48], context[49]);
      context[50] = 0;
      context[51] = 0;
      context[52] = refalrts::brackets_right( context[50], context[51], context[42], context[43] );
      if( ! context[52] )
        continue;
      refalrts::bracket_pointers(context[52], context[53]);
      if( ! refalrts::repeated_stvar_left( vm, context[54], context[25], context[42], context[43] ) )
        continue;
      if( ! refalrts::empty_seq( context[42], context[43] ) )
        continue;
      if( ! refalrts::repeated_evar_left( vm, context[55], context[56], context[34], context[35], context[50], context[51] ) )
        continue;
      if( ! refalrts::empty_seq( context[50], context[51] ) )
        continue;
      // closed e.Vars-E#1 as range 40
      if( ! refalrts::svar_right( context[57], context[46], context[47] ) )
        continue;
      // closed e.ResultVars#1 as range 46
      //DEBUG: s.ContextOffset#1: 9
      //DEBUG: s.Mode#1: 25
      //DEBUG: e.Index#1: 34
      //DEBUG: e.Result#1: 36
      //DEBUG: e.Vars-B#1: 38
      //DEBUG: e.Vars-E#1: 40
      //DEBUG: s.Sample#1: 57
      //DEBUG: e.ResultVars#1: 46

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.Index#1/34 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoGenResult/4 AsIs: (/7 AsIs: e.Vars-B#1/38 AsIs: (/44 AsIs: s.Mode#1/54 AsIs: (/52 AsIs: e.Index#1/55 AsIs: )/53 AsIs: (/48 AsIs: e.ResultVars#1/46 AsIs: s.Sample#1/57 HalfReuse: s.ContextOffset1 #9/49 AsIs: )/45 } )/58 Tile{ AsIs: e.Vars-E#1/40 } )/59 (/60 (/61 # CmdCopyVar/62 Tile{ HalfReuse: s.Mode1 #54/8 AsIs: s.ContextOffset#1/9 } s.Sample#1/57/63 )/64 )/65 (/66 Tile{ AsIs: (/16 Reuse: # CmdInsertVar/18 AsIs: s.Mode#1/25 } s.ContextOffset#1/9/67 )/68 )/69 </70 & IncVarOffset/71 s.ContextOffset#1/9/72 s.Mode#1/54/73 Tile{ HalfReuse: >/17 AsIs: e.Result#1/36 AsIs: >/1 ]] }
      refalrts::alloc_close_bracket(vm, context[58]);
      refalrts::alloc_close_bracket(vm, context[59]);
      refalrts::alloc_open_bracket(vm, context[60]);
      refalrts::alloc_open_bracket(vm, context[61]);
      refalrts::alloc_ident(vm, context[62], identifiers[ident_CmdCopyVar]);
      refalrts::copy_stvar(vm, context[63], context[57]);
      refalrts::alloc_close_bracket(vm, context[64]);
      refalrts::alloc_close_bracket(vm, context[65]);
      refalrts::alloc_open_bracket(vm, context[66]);
      refalrts::copy_stvar(vm, context[67], context[9]);
      refalrts::alloc_close_bracket(vm, context[68]);
      refalrts::alloc_close_bracket(vm, context[69]);
      refalrts::alloc_open_call(vm, context[70]);
      refalrts::alloc_name(vm, context[71], functions[efunc_IncVarOffset]);
      refalrts::copy_stvar(vm, context[72], context[9]);
      refalrts::copy_stvar(vm, context[73], context[54]);
      refalrts::update_name(context[4], functions[efunc_DoGenResult]);
      refalrts::reinit_svar( context[49], context[9] );
      refalrts::reinit_svar( context[8], context[54] );
      refalrts::update_ident(context[18], identifiers[ident_CmdInsertVar]);
      refalrts::reinit_close_call(context[17]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[17] );
      refalrts::push_stack( vm, context[70] );
      refalrts::link_brackets( context[66], context[69] );
      refalrts::link_brackets( context[16], context[68] );
      refalrts::link_brackets( context[60], context[65] );
      refalrts::link_brackets( context[61], context[64] );
      refalrts::link_brackets( context[7], context[59] );
      refalrts::link_brackets( context[44], context[58] );
      refalrts::link_brackets( context[48], context[45] );
      refalrts::link_brackets( context[52], context[53] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[17];
      res = refalrts::splice_evar( res, context[67], context[73] );
      res = refalrts::splice_evar( res, context[16], context[25] );
      res = refalrts::splice_evar( res, context[63], context[66] );
      res = refalrts::splice_evar( res, context[8], context[9] );
      res = refalrts::splice_evar( res, context[59], context[62] );
      res = refalrts::splice_evar( res, context[40], context[41] );
      res = refalrts::splice_elem( res, context[58] );
      refalrts::splice_to_freelist_open( vm, context[45], res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[38], context[39], context[32], context[33] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoGenResult@1/4 (/7 e.Vars#1/10 )/8 s.ContextOffset#1/9 >/1
    context[10] = context[5];
    context[11] = context[6];
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Vars#1 as range 10
    //DEBUG: s.ContextOffset#1: 9
    //DEBUG: e.Vars#1: 10

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE} s.ContextOffset#1/9 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: s.ContextOffset1 #9/4 AsIs: (/7 AsIs: e.Vars#1/10 AsIs: )/8 } Tile{ ]] }
    refalrts::reinit_svar( context[4], context[9] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[4], context[8] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoGenResult@1/4 (/7 e.dyn#0/5 )/8 s.ContextOffset#1/9 e.dyn#3/2 >/1
  // closed e.dyn#0 as range 5
  // closed e.dyn#3 as range 2
  //DEBUG: s.ContextOffset#1: 9
  //DEBUG: e.dyn#0: 5
  //DEBUG: e.dyn#3: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoGenResult@0/4 AsIs: (/7 AsIs: e.dyn#0/5 AsIs: )/8 } (/10 )/11 (/12 )/13 Tile{ AsIs: s.ContextOffset#1/9 AsIs: e.dyn#3/2 AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[10]);
  refalrts::alloc_close_bracket(vm, context[11]);
  refalrts::alloc_open_bracket(vm, context[12]);
  refalrts::alloc_close_bracket(vm, context[13]);
  refalrts::update_name(context[4], functions[efunc_gen_DoGenResult_Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[12], context[13] );
  refalrts::link_brackets( context[10], context[11] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[9];
  res = refalrts::splice_evar( res, context[10], context[13] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoGenResult_Z1("DoGenResult@1", COOKIE1_, COOKIE2_, func_gen_DoGenResult_Z1);


static refalrts::FnResult func_gen_Map_Z1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
  // </0 & Map@1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Map@1/4 s.new#1/5 e.new#2/2 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 2
  do {
    // </0 & Map@1/4 s.FnMakeVarTable#1/5 t.Next#1/8 e.Tail#1/6 >/1
    context[6] = context[2];
    context[7] = context[3];
    context[9] = refalrts::tvar_left( context[8], context[6], context[7] );
    if( ! context[9] )
      continue;
    // closed e.Tail#1 as range 6
    //DEBUG: s.FnMakeVarTable#1: 5
    //DEBUG: t.Next#1: 8
    //DEBUG: e.Tail#1: 6

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & __Meta_Mu/4 AsIs: s.FnMakeVarTable#1/5 AsIs: t.Next#1/8 } & $table/10 >/11 </12 & Map@1/13 s.FnMakeVarTable#1/5/14 Tile{ AsIs: e.Tail#1/6 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_name(vm, context[10], functions[efunc_d_table]);
    refalrts::alloc_close_call(vm, context[11]);
    refalrts::alloc_open_call(vm, context[12]);
    refalrts::alloc_name(vm, context[13], functions[efunc_gen_Map_Z1]);
    refalrts::copy_stvar(vm, context[14], context[5]);
    refalrts::update_name(context[4], functions[efunc_u_u_Metau_Mu]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[12] );
    refalrts::push_stack( vm, context[11] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[6], context[7] );
    res = refalrts::splice_evar( res, context[10], context[14] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Map@1/4 s.FnMakeVarTable#1/5 >/1
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    //DEBUG: s.FnMakeVarTable#1: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Map@1/4 s.FnMakeVarTable#1/5 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Map@1/4 s.FnMakeVarTable#1/5 e.items#0/2 >/1
  // closed e.items#0 as range 2
  //DEBUG: s.FnMakeVarTable#1: 5
  //DEBUG: e.items#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map@0/4 AsIs: s.FnMakeVarTable#1/5 AsIs: e.items#0/2 AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_gen_Map_Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Map_Z1("Map@1", COOKIE1_, COOKIE2_, func_gen_Map_Z1);


static refalrts::FnResult func_gen_Map_Z2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 28 elems
  refalrts::Iter context[28];
  refalrts::zeros( context, 28 );
  // </0 & Map@2/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Map@2/4 s.new#1/5 (/8 e.new#2/6 )/9 e.new#3/2 >/1
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
    // </0 & Map@2/4 s.new#4/5 (/8 e.new#7/10 )/9 t.new#5/14 e.new#6/12 >/1
    context[10] = context[6];
    context[11] = context[7];
    context[12] = context[2];
    context[13] = context[3];
    // closed e.new#7 as range 10
    context[15] = refalrts::tvar_left( context[14], context[12], context[13] );
    if( ! context[15] )
      continue;
    // closed e.new#6 as range 12
    do {
      // </0 & Map@2/4 s.Mode#1/5 (/8 e.Index#1/16 )/9 s.ContextOffset#2/14 e.Tail#1/18 >/1
      context[16] = context[10];
      context[17] = context[11];
      context[18] = context[12];
      context[19] = context[13];
      if( ! refalrts::svar_term( context[14], context[14] ) )
        continue;
      // closed e.Index#1 as range 16
      // closed e.Tail#1 as range 18
      //DEBUG: s.ContextOffset#2: 14
      //DEBUG: s.Mode#1: 5
      //DEBUG: e.Index#1: 16
      //DEBUG: e.Tail#1: 18

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } (/20 Tile{ AsIs: s.ContextOffset#2/14 } s.Mode#1/5/21 e.Index#1/16/22 )/24 Tile{ AsIs: </0 AsIs: & Map@2/4 AsIs: s.Mode#1/5 AsIs: (/8 AsIs: e.Index#1/16 AsIs: )/9 } Tile{ AsIs: e.Tail#1/18 } Tile{ AsIs: >/1 ]] }
      refalrts::alloc_open_bracket(vm, context[20]);
      refalrts::copy_stvar(vm, context[21], context[5]);
      refalrts::copy_evar(vm, context[22], context[23], context[16], context[17]);
      refalrts::alloc_close_bracket(vm, context[24]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[8], context[9] );
      refalrts::link_brackets( context[20], context[24] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[18], context[19] );
      res = refalrts::splice_evar( res, context[0], context[9] );
      res = refalrts::splice_evar( res, context[21], context[24] );
      res = refalrts::splice_elem( res, context[14] );
      res = refalrts::splice_elem( res, context[20] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Map@2/4 s.Mode#1/5 (/8 e.Index#1/16 )/9 t.Next#1/14 e.Tail#1/18 >/1
    context[16] = context[10];
    context[17] = context[11];
    context[18] = context[12];
    context[19] = context[13];
    // closed e.Index#1 as range 16
    // closed e.Tail#1 as range 18
    //DEBUG: t.Next#1: 14
    //DEBUG: s.Mode#1: 5
    //DEBUG: e.Index#1: 16
    //DEBUG: e.Tail#1: 18

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ReplicateVar\1*1/4 AsIs: s.Mode#1/5 AsIs: (/8 AsIs: e.Index#1/16 AsIs: )/9 AsIs: t.Next#1/14 } >/20 </21 & Map@2/22 s.Mode#1/5/23 (/24 e.Index#1/16/25 )/27 Tile{ AsIs: e.Tail#1/18 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_close_call(vm, context[20]);
    refalrts::alloc_open_call(vm, context[21]);
    refalrts::alloc_name(vm, context[22], functions[efunc_gen_Map_Z2]);
    refalrts::copy_stvar(vm, context[23], context[5]);
    refalrts::alloc_open_bracket(vm, context[24]);
    refalrts::copy_evar(vm, context[25], context[26], context[16], context[17]);
    refalrts::alloc_close_bracket(vm, context[27]);
    refalrts::update_name(context[4], functions[efunc_gen_ReplicateVar_L1D1]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[21] );
    refalrts::link_brackets( context[24], context[27] );
    refalrts::push_stack( vm, context[20] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[8], context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[18], context[19] );
    res = refalrts::splice_evar( res, context[20], context[27] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Map@2/4 s.Mode#1/5 (/8 e.Index#1/10 )/9 >/1
    context[10] = context[6];
    context[11] = context[7];
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Index#1 as range 10
    //DEBUG: s.Mode#1: 5
    //DEBUG: e.Index#1: 10

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Map@2/4 s.Mode#1/5 (/8 e.Index#1/10 )/9 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Map@2/4 s.Mode#1/5 (/8 e.Index#1/6 )/9 e.items#0/2 >/1
  // closed e.Index#1 as range 6
  // closed e.items#0 as range 2
  //DEBUG: s.Mode#1: 5
  //DEBUG: e.Index#1: 6
  //DEBUG: e.items#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </10 & Map@0/11 Tile{ HalfReuse: [*]/0 Reuse: & ReplicateVar\1@0/4 AsIs: s.Mode#1/5 AsIs: (/8 AsIs: e.Index#1/6 AsIs: )/9 } {*}/12 Tile{ AsIs: e.items#0/2 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[10]);
  refalrts::alloc_name(vm, context[11], functions[efunc_gen_Map_Z0]);
  refalrts::alloc_unwrapped_closure(vm, context[12], context[0]);
  refalrts::reinit_closure_head(context[0]);
  refalrts::update_name(context[4], functions[efunc_gen_ReplicateVar_L1Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[10] );
  refalrts::link_brackets( context[8], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_elem( res, context[12] );
  res = refalrts::splice_evar( res, context[0], context[9] );
  res = refalrts::splice_evar( res, context[10], context[11] );
  refalrts::use( res );
  refalrts::wrap_closure( context[12] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Map_Z2("Map@2", COOKIE1_, COOKIE2_, func_gen_Map_Z2);


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


static refalrts::FnResult func_gen_Map_Z3(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
  // </0 & Map@3/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & Map@3/4 t.new#1/7 e.new#2/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[8] = refalrts::tvar_left( context[7], context[5], context[6] );
    if( ! context[8] )
      continue;
    // closed e.new#2 as range 5
    do {
      // </0 & Map@3/4 (/7 s.Mode#1/13 (/16 e.2#0/14 )/17 e.1#0/11 )/8 e.Tail#1/9 >/1
      context[9] = context[5];
      context[10] = context[6];
      context[11] = 0;
      context[12] = 0;
      if( ! refalrts::brackets_term( context[11], context[12], context[7] ) )
        continue;
      // closed e.Tail#1 as range 9
      if( ! refalrts::svar_left( context[13], context[11], context[12] ) )
        continue;
      context[14] = 0;
      context[15] = 0;
      context[16] = refalrts::brackets_left( context[14], context[15], context[11], context[12] );
      if( ! context[16] )
        continue;
      refalrts::bracket_pointers(context[16], context[17]);
      // closed e.2#0 as range 14
      // closed e.1#0 as range 11
      //DEBUG: e.Tail#1: 9
      //DEBUG: s.Mode#1: 13
      //DEBUG: e.2#0: 14
      //DEBUG: e.1#0: 11

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: s.Mode#1/13 AsIs: (/16 AsIs: e.2#0/14 AsIs: )/17 } Tile{ HalfReuse: (/4 } )/18 Tile{ AsIs: e.1#0/11 } )/19 Tile{ AsIs: </0 } Tile{ HalfReuse: & Map@3/8 AsIs: e.Tail#1/9 AsIs: >/1 ]] }
      refalrts::alloc_close_bracket(vm, context[18]);
      refalrts::alloc_close_bracket(vm, context[19]);
      refalrts::reinit_open_bracket(context[4]);
      refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z3]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[19] );
      refalrts::link_brackets( context[4], context[18] );
      refalrts::link_brackets( context[16], context[17] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_elem( res, context[0] );
      res = refalrts::splice_elem( res, context[19] );
      res = refalrts::splice_evar( res, context[11], context[12] );
      res = refalrts::splice_elem( res, context[18] );
      res = refalrts::splice_elem( res, context[4] );
      res = refalrts::splice_evar( res, context[7], context[17] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Map@3/4 t.Next#1/7 e.Tail#1/9 >/1
    context[9] = context[5];
    context[10] = context[6];
    // closed e.Tail#1 as range 9
    //DEBUG: t.Next#1: 7
    //DEBUG: e.Tail#1: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & MakeVarTable-Simple*1/4 AsIs: t.Next#1/7 } >/11 </12 & Map@3/13 Tile{ AsIs: e.Tail#1/9 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_close_call(vm, context[11]);
    refalrts::alloc_open_call(vm, context[12]);
    refalrts::alloc_name(vm, context[13], functions[efunc_gen_Map_Z3]);
    refalrts::update_name(context[4], functions[efunc_gen_MakeVarTablem_Simple_D1]);
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
    // </0 & Map@3/4 >/1
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Map@3/4 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Map@3/4 e.items#0/2 >/1
  // closed e.items#0 as range 2
  //DEBUG: e.items#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Map@0/0 Reuse: & MakeVarTable-Simple@0/4 AsIs: e.items#0/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::reinit_name(context[0], functions[efunc_gen_Map_Z0]);
  refalrts::update_name(context[4], functions[efunc_gen_MakeVarTablem_Simple_Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_elem( res, context[5] );
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
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
  // </0 & Map@4/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & Map@4/4 t.new#1/7 e.new#2/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[8] = refalrts::tvar_left( context[7], context[5], context[6] );
    if( ! context[8] )
      continue;
    // closed e.new#2 as range 5
    do {
      // </0 & Map@4/4 (/7 s.Mode#1/13 (/16 e.2#0/14 )/17 e.1#0/11 )/8 e.Tail#1/9 >/1
      context[9] = context[5];
      context[10] = context[6];
      context[11] = 0;
      context[12] = 0;
      if( ! refalrts::brackets_term( context[11], context[12], context[7] ) )
        continue;
      // closed e.Tail#1 as range 9
      if( ! refalrts::svar_left( context[13], context[11], context[12] ) )
        continue;
      context[14] = 0;
      context[15] = 0;
      context[16] = refalrts::brackets_left( context[14], context[15], context[11], context[12] );
      if( ! context[16] )
        continue;
      refalrts::bracket_pointers(context[16], context[17]);
      // closed e.2#0 as range 14
      // closed e.1#0 as range 11
      //DEBUG: e.Tail#1: 9
      //DEBUG: s.Mode#1: 13
      //DEBUG: e.2#0: 14
      //DEBUG: e.1#0: 11

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: s.Mode#1/13 AsIs: (/16 AsIs: e.2#0/14 AsIs: )/17 } (/18 Tile{ AsIs: e.1#0/11 } Tile{ HalfReuse: )/4 } )/19 Tile{ AsIs: </0 } Tile{ HalfReuse: & Map@4/8 AsIs: e.Tail#1/9 AsIs: >/1 ]] }
      refalrts::alloc_open_bracket(vm, context[18]);
      refalrts::alloc_close_bracket(vm, context[19]);
      refalrts::reinit_close_bracket(context[4]);
      refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z4]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[19] );
      refalrts::link_brackets( context[18], context[4] );
      refalrts::link_brackets( context[16], context[17] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_elem( res, context[0] );
      res = refalrts::splice_elem( res, context[19] );
      res = refalrts::splice_elem( res, context[4] );
      res = refalrts::splice_evar( res, context[11], context[12] );
      res = refalrts::splice_elem( res, context[18] );
      res = refalrts::splice_evar( res, context[7], context[17] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Map@4/4 t.Next#1/7 e.Tail#1/9 >/1
    context[9] = context[5];
    context[10] = context[6];
    // closed e.Tail#1 as range 9
    //DEBUG: t.Next#1: 7
    //DEBUG: e.Tail#1: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & MakeVarTable-Conditions*1/4 AsIs: t.Next#1/7 } >/11 </12 & Map@4/13 Tile{ AsIs: e.Tail#1/9 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_close_call(vm, context[11]);
    refalrts::alloc_open_call(vm, context[12]);
    refalrts::alloc_name(vm, context[13], functions[efunc_gen_Map_Z4]);
    refalrts::update_name(context[4], functions[efunc_gen_MakeVarTablem_Conditions_D1]);
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
    // </0 & Map@4/4 >/1
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Map@4/4 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Map@4/4 e.items#0/2 >/1
  // closed e.items#0 as range 2
  //DEBUG: e.items#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Map@0/0 Reuse: & MakeVarTable-Conditions@0/4 AsIs: e.items#0/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::reinit_name(context[0], functions[efunc_gen_Map_Z0]);
  refalrts::update_name(context[4], functions[efunc_gen_MakeVarTablem_Conditions_Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_elem( res, context[5] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Map_Z4("Map@4", COOKIE1_, COOKIE2_, func_gen_Map_Z4);


static refalrts::FnResult func_gen_DoGenResult_Z2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 84 elems
  refalrts::Iter context[84];
  refalrts::zeros( context, 84 );
  // </0 & DoGenResult@2/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DoGenResult@2/4 (/7 e.new#1/5 )/8 (/11 e.new#2/9 )/12 s.new#3/13 e.new#4/2 >/1
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
  // closed e.new#4 as range 2
  do {
    // </0 & DoGenResult@2/4 (/7 e.new#9/14 )/8 (/11 e.new#10/16 )/12 s.new#5/13 (/22 s.new#6/24 e.new#7/20 )/23 e.new#8/18 >/1
    context[14] = context[5];
    context[15] = context[6];
    context[16] = context[9];
    context[17] = context[10];
    context[18] = context[2];
    context[19] = context[3];
    context[20] = 0;
    context[21] = 0;
    context[22] = refalrts::brackets_left( context[20], context[21], context[18], context[19] );
    if( ! context[22] )
      continue;
    refalrts::bracket_pointers(context[22], context[23]);
    // closed e.new#9 as range 14
    // closed e.new#10 as range 16
    // closed e.new#8 as range 18
    if( ! refalrts::svar_left( context[24], context[20], context[21] ) )
      continue;
    // closed e.new#7 as range 20
    do {
      // </0 & DoGenResult@2/4 (/7 e.new#16/25 )/8 (/11 e.new#17/27 )/12 s.new#11/13 (/22 s.new#13/24 s.new#14/33 e.new#15/29 )/23 e.new#12/31 >/1
      context[25] = context[14];
      context[26] = context[15];
      context[27] = context[16];
      context[28] = context[17];
      context[29] = context[20];
      context[30] = context[21];
      context[31] = context[18];
      context[32] = context[19];
      // closed e.new#16 as range 25
      // closed e.new#17 as range 27
      // closed e.new#12 as range 31
      if( ! refalrts::svar_left( context[33], context[29], context[30] ) )
        continue;
      // closed e.new#15 as range 29
      do {
        // </0 & DoGenResult@2/4 (/7 e.new#22/34 )/8 (/11 e.new#23/36 )/12 s.new#18/13 (/22 s.new#20/24 s.new#21/33 )/23 e.new#19/38 >/1
        context[34] = context[25];
        context[35] = context[26];
        context[36] = context[27];
        context[37] = context[28];
        context[38] = context[31];
        context[39] = context[32];
        if( ! refalrts::empty_seq( context[29], context[30] ) )
          continue;
        // closed e.new#22 as range 34
        // closed e.new#23 as range 36
        // closed e.new#19 as range 38
        do {
          // </0 & DoGenResult@2/4 (/7 e.Vars#1/40 )/8 (/11 e.X#0/42 )/12 s.X#0/13 (/22 # TkOpenCallCond/24 s.Offset#1/33 )/23 e.Result#1/44 >/1
          context[40] = context[34];
          context[41] = context[35];
          context[42] = context[36];
          context[43] = context[37];
          context[44] = context[38];
          context[45] = context[39];
          if( ! refalrts::ident_term( identifiers[ident_TkOpenCallCond], context[24] ) )
            continue;
          // closed e.Vars#1 as range 40
          // closed e.X#0 as range 42
          // closed e.Result#1 as range 44
          //DEBUG: s.X#0: 13
          //DEBUG: s.Offset#1: 33
          //DEBUG: e.Vars#1: 40
          //DEBUG: e.X#0: 42
          //DEBUG: e.Result#1: 44

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoGenResult/4 AsIs: (/7 AsIs: e.Vars#1/40 AsIs: )/8 AsIs: (/11 } (/46 # CmdCreateElem/47 # Allocate/48 s.Offset#1/33/49 # ElOpenCall/50 )/51 )/52 (/53 Tile{ AsIs: (/22 Reuse: # CmdInsertElem/24 AsIs: s.Offset#1/33 AsIs: )/23 } Tile{ AsIs: e.X#0/42 } Tile{ AsIs: )/12 AsIs: s.X#0/13 } Tile{ AsIs: e.Result#1/44 } Tile{ AsIs: >/1 ]] }
          refalrts::alloc_open_bracket(vm, context[46]);
          refalrts::alloc_ident(vm, context[47], identifiers[ident_CmdCreateElem]);
          refalrts::alloc_ident(vm, context[48], identifiers[ident_Allocate]);
          refalrts::copy_stvar(vm, context[49], context[33]);
          refalrts::alloc_ident(vm, context[50], identifiers[ident_ElOpenCall]);
          refalrts::alloc_close_bracket(vm, context[51]);
          refalrts::alloc_close_bracket(vm, context[52]);
          refalrts::alloc_open_bracket(vm, context[53]);
          refalrts::update_name(context[4], functions[efunc_DoGenResult]);
          refalrts::update_ident(context[24], identifiers[ident_CmdInsertElem]);
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[0] );
          refalrts::link_brackets( context[53], context[12] );
          refalrts::link_brackets( context[22], context[23] );
          refalrts::link_brackets( context[11], context[52] );
          refalrts::link_brackets( context[46], context[51] );
          refalrts::link_brackets( context[7], context[8] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[1];
          res = refalrts::splice_evar( res, context[44], context[45] );
          res = refalrts::splice_evar( res, context[12], context[13] );
          res = refalrts::splice_evar( res, context[42], context[43] );
          res = refalrts::splice_evar( res, context[22], context[23] );
          res = refalrts::splice_evar( res, context[46], context[53] );
          refalrts::use( res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & DoGenResult@2/4 (/7 e.Vars#1/40 )/8 (/11 e.X#0/42 )/12 s.X#0/13 (/22 # TkCloseCallCond/24 s.Offset#1/33 )/23 e.Result#1/44 >/1
        context[40] = context[34];
        context[41] = context[35];
        context[42] = context[36];
        context[43] = context[37];
        context[44] = context[38];
        context[45] = context[39];
        if( ! refalrts::ident_term( identifiers[ident_TkCloseCallCond], context[24] ) )
          continue;
        // closed e.Vars#1 as range 40
        // closed e.X#0 as range 42
        // closed e.Result#1 as range 44
        //DEBUG: s.X#0: 13
        //DEBUG: s.Offset#1: 33
        //DEBUG: e.Vars#1: 40
        //DEBUG: e.X#0: 42
        //DEBUG: e.Result#1: 44

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoGenResult/4 AsIs: (/7 AsIs: e.Vars#1/40 AsIs: )/8 AsIs: (/11 } (/46 # CmdCreateElem/47 # Allocate/48 s.Offset#1/33/49 # ElCloseCall/50 )/51 )/52 (/53 Tile{ AsIs: (/22 Reuse: # CmdPushStack/24 AsIs: s.Offset#1/33 AsIs: )/23 } (/54 # CmdPushStack/55 </56 & Sub/57 s.Offset#1/33/58 1/59 >/60 )/61 (/62 # CmdInsertElem/63 s.Offset#1/33/64 )/65 Tile{ AsIs: e.X#0/42 } Tile{ AsIs: )/12 AsIs: s.X#0/13 } Tile{ AsIs: e.Result#1/44 } Tile{ AsIs: >/1 ]] }
        refalrts::alloc_open_bracket(vm, context[46]);
        refalrts::alloc_ident(vm, context[47], identifiers[ident_CmdCreateElem]);
        refalrts::alloc_ident(vm, context[48], identifiers[ident_Allocate]);
        refalrts::copy_stvar(vm, context[49], context[33]);
        refalrts::alloc_ident(vm, context[50], identifiers[ident_ElCloseCall]);
        refalrts::alloc_close_bracket(vm, context[51]);
        refalrts::alloc_close_bracket(vm, context[52]);
        refalrts::alloc_open_bracket(vm, context[53]);
        refalrts::alloc_open_bracket(vm, context[54]);
        refalrts::alloc_ident(vm, context[55], identifiers[ident_CmdPushStack]);
        refalrts::alloc_open_call(vm, context[56]);
        refalrts::alloc_name(vm, context[57], functions[efunc_Sub]);
        refalrts::copy_stvar(vm, context[58], context[33]);
        refalrts::alloc_number(vm, context[59], 1UL);
        refalrts::alloc_close_call(vm, context[60]);
        refalrts::alloc_close_bracket(vm, context[61]);
        refalrts::alloc_open_bracket(vm, context[62]);
        refalrts::alloc_ident(vm, context[63], identifiers[ident_CmdInsertElem]);
        refalrts::copy_stvar(vm, context[64], context[33]);
        refalrts::alloc_close_bracket(vm, context[65]);
        refalrts::update_name(context[4], functions[efunc_DoGenResult]);
        refalrts::update_ident(context[24], identifiers[ident_CmdPushStack]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[53], context[12] );
        refalrts::link_brackets( context[62], context[65] );
        refalrts::link_brackets( context[54], context[61] );
        refalrts::push_stack( vm, context[60] );
        refalrts::push_stack( vm, context[56] );
        refalrts::link_brackets( context[22], context[23] );
        refalrts::link_brackets( context[11], context[52] );
        refalrts::link_brackets( context[46], context[51] );
        refalrts::link_brackets( context[7], context[8] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[44], context[45] );
        res = refalrts::splice_evar( res, context[12], context[13] );
        res = refalrts::splice_evar( res, context[42], context[43] );
        res = refalrts::splice_evar( res, context[54], context[65] );
        res = refalrts::splice_evar( res, context[22], context[23] );
        res = refalrts::splice_evar( res, context[46], context[53] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & DoGenResult@2/4 (/7 e.new#22/34 )/8 (/11 e.new#23/36 )/12 s.new#18/13 (/22 # Symbol/24 s.new#20/33 e.new#21/38 )/23 e.new#19/40 >/1
      context[34] = context[25];
      context[35] = context[26];
      context[36] = context[27];
      context[37] = context[28];
      context[38] = context[29];
      context[39] = context[30];
      context[40] = context[31];
      context[41] = context[32];
      if( ! refalrts::ident_term( identifiers[ident_Symbol], context[24] ) )
        continue;
      // closed e.new#22 as range 34
      // closed e.new#23 as range 36
      // closed e.new#21 as range 38
      // closed e.new#19 as range 40
      do {
        // </0 & DoGenResult@2/4 (/7 e.Vars#1/42 )/8 (/11 e.X#0/44 )/12 s.X#0/13 (/22 # Symbol/24 # Char/33 s.Value#1/50 )/23 e.Result#1/48 >/1
        context[42] = context[34];
        context[43] = context[35];
        context[44] = context[36];
        context[45] = context[37];
        context[46] = context[38];
        context[47] = context[39];
        context[48] = context[40];
        context[49] = context[41];
        if( ! refalrts::ident_term( identifiers[ident_Char], context[33] ) )
          continue;
        // closed e.Vars#1 as range 42
        // closed e.X#0 as range 44
        // closed e.Result#1 as range 48
        if( ! refalrts::svar_left( context[50], context[46], context[47] ) )
          continue;
        if( ! refalrts::empty_seq( context[46], context[47] ) )
          continue;
        //DEBUG: s.X#0: 13
        //DEBUG: e.Vars#1: 42
        //DEBUG: e.X#0: 44
        //DEBUG: e.Result#1: 48
        //DEBUG: s.Value#1: 50

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoGenResult/4 AsIs: (/7 AsIs: e.Vars#1/42 AsIs: )/8 AsIs: (/11 } (/51 # CmdCreateElem/52 Tile{ HalfReuse: # Allocate/22 HalfReuse: s.X0 #13/24 Reuse: # ElChar/33 AsIs: s.Value#1/50 AsIs: )/23 } )/53 (/54 (/55 Tile{ HalfReuse: # CmdInsertElem/12 AsIs: s.X#0/13 } )/56 Tile{ AsIs: e.X#0/44 } )/57 </58 & Add/59 1/60 s.X#0/13/61 >/62 Tile{ AsIs: e.Result#1/48 } Tile{ AsIs: >/1 ]] }
        refalrts::alloc_open_bracket(vm, context[51]);
        refalrts::alloc_ident(vm, context[52], identifiers[ident_CmdCreateElem]);
        refalrts::alloc_close_bracket(vm, context[53]);
        refalrts::alloc_open_bracket(vm, context[54]);
        refalrts::alloc_open_bracket(vm, context[55]);
        refalrts::alloc_close_bracket(vm, context[56]);
        refalrts::alloc_close_bracket(vm, context[57]);
        refalrts::alloc_open_call(vm, context[58]);
        refalrts::alloc_name(vm, context[59], functions[efunc_Add]);
        refalrts::alloc_number(vm, context[60], 1UL);
        refalrts::copy_stvar(vm, context[61], context[13]);
        refalrts::alloc_close_call(vm, context[62]);
        refalrts::update_name(context[4], functions[efunc_DoGenResult]);
        refalrts::reinit_ident(context[22], identifiers[ident_Allocate]);
        refalrts::reinit_svar( context[24], context[13] );
        refalrts::update_ident(context[33], identifiers[ident_ElChar]);
        refalrts::reinit_ident(context[12], identifiers[ident_CmdInsertElem]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::push_stack( vm, context[62] );
        refalrts::push_stack( vm, context[58] );
        refalrts::link_brackets( context[54], context[57] );
        refalrts::link_brackets( context[55], context[56] );
        refalrts::link_brackets( context[11], context[53] );
        refalrts::link_brackets( context[51], context[23] );
        refalrts::link_brackets( context[7], context[8] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[48], context[49] );
        res = refalrts::splice_evar( res, context[57], context[62] );
        res = refalrts::splice_evar( res, context[44], context[45] );
        res = refalrts::splice_elem( res, context[56] );
        res = refalrts::splice_evar( res, context[12], context[13] );
        res = refalrts::splice_evar( res, context[53], context[55] );
        res = refalrts::splice_evar( res, context[22], context[23] );
        res = refalrts::splice_evar( res, context[51], context[52] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & DoGenResult@2/4 (/7 e.Vars#1/42 )/8 (/11 e.X#0/44 )/12 s.X#0/13 (/22 # Symbol/24 # Name/33 e.Name#1/46 )/23 e.Result#1/48 >/1
        context[42] = context[34];
        context[43] = context[35];
        context[44] = context[36];
        context[45] = context[37];
        context[46] = context[38];
        context[47] = context[39];
        context[48] = context[40];
        context[49] = context[41];
        if( ! refalrts::ident_term( identifiers[ident_Name], context[33] ) )
          continue;
        // closed e.Vars#1 as range 42
        // closed e.X#0 as range 44
        // closed e.Name#1 as range 46
        // closed e.Result#1 as range 48
        //DEBUG: s.X#0: 13
        //DEBUG: e.Vars#1: 42
        //DEBUG: e.X#0: 44
        //DEBUG: e.Name#1: 46
        //DEBUG: e.Result#1: 48

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoGenResult/4 AsIs: (/7 AsIs: e.Vars#1/42 AsIs: )/8 AsIs: (/11 } (/50 # CmdCreateElem/51 Tile{ HalfReuse: # Allocate/22 HalfReuse: s.X0 #13/24 Reuse: # ElName/33 AsIs: e.Name#1/46 AsIs: )/23 } )/52 (/53 (/54 Tile{ HalfReuse: # CmdInsertElem/12 AsIs: s.X#0/13 } )/55 Tile{ AsIs: e.X#0/44 } )/56 </57 & Add/58 1/59 s.X#0/13/60 >/61 Tile{ AsIs: e.Result#1/48 } Tile{ AsIs: >/1 ]] }
        refalrts::alloc_open_bracket(vm, context[50]);
        refalrts::alloc_ident(vm, context[51], identifiers[ident_CmdCreateElem]);
        refalrts::alloc_close_bracket(vm, context[52]);
        refalrts::alloc_open_bracket(vm, context[53]);
        refalrts::alloc_open_bracket(vm, context[54]);
        refalrts::alloc_close_bracket(vm, context[55]);
        refalrts::alloc_close_bracket(vm, context[56]);
        refalrts::alloc_open_call(vm, context[57]);
        refalrts::alloc_name(vm, context[58], functions[efunc_Add]);
        refalrts::alloc_number(vm, context[59], 1UL);
        refalrts::copy_stvar(vm, context[60], context[13]);
        refalrts::alloc_close_call(vm, context[61]);
        refalrts::update_name(context[4], functions[efunc_DoGenResult]);
        refalrts::reinit_ident(context[22], identifiers[ident_Allocate]);
        refalrts::reinit_svar( context[24], context[13] );
        refalrts::update_ident(context[33], identifiers[ident_ElName]);
        refalrts::reinit_ident(context[12], identifiers[ident_CmdInsertElem]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::push_stack( vm, context[61] );
        refalrts::push_stack( vm, context[57] );
        refalrts::link_brackets( context[53], context[56] );
        refalrts::link_brackets( context[54], context[55] );
        refalrts::link_brackets( context[11], context[52] );
        refalrts::link_brackets( context[50], context[23] );
        refalrts::link_brackets( context[7], context[8] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[48], context[49] );
        res = refalrts::splice_evar( res, context[56], context[61] );
        res = refalrts::splice_evar( res, context[44], context[45] );
        res = refalrts::splice_elem( res, context[55] );
        res = refalrts::splice_evar( res, context[12], context[13] );
        res = refalrts::splice_evar( res, context[52], context[54] );
        res = refalrts::splice_evar( res, context[22], context[23] );
        res = refalrts::splice_evar( res, context[50], context[51] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & DoGenResult@2/4 (/7 e.Vars#1/42 )/8 (/11 e.X#0/44 )/12 s.X#0/13 (/22 # Symbol/24 # Number/33 s.Number#1/50 )/23 e.Result#1/48 >/1
        context[42] = context[34];
        context[43] = context[35];
        context[44] = context[36];
        context[45] = context[37];
        context[46] = context[38];
        context[47] = context[39];
        context[48] = context[40];
        context[49] = context[41];
        if( ! refalrts::ident_term( identifiers[ident_Number], context[33] ) )
          continue;
        // closed e.Vars#1 as range 42
        // closed e.X#0 as range 44
        // closed e.Result#1 as range 48
        if( ! refalrts::svar_left( context[50], context[46], context[47] ) )
          continue;
        if( ! refalrts::empty_seq( context[46], context[47] ) )
          continue;
        //DEBUG: s.X#0: 13
        //DEBUG: e.Vars#1: 42
        //DEBUG: e.X#0: 44
        //DEBUG: e.Result#1: 48
        //DEBUG: s.Number#1: 50

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoGenResult/4 AsIs: (/7 AsIs: e.Vars#1/42 AsIs: )/8 AsIs: (/11 } (/51 # CmdCreateElem/52 Tile{ HalfReuse: # Allocate/22 HalfReuse: s.X0 #13/24 Reuse: # ElNumber/33 AsIs: s.Number#1/50 AsIs: )/23 } )/53 (/54 (/55 Tile{ HalfReuse: # CmdInsertElem/12 AsIs: s.X#0/13 } )/56 Tile{ AsIs: e.X#0/44 } )/57 </58 & Add/59 1/60 s.X#0/13/61 >/62 Tile{ AsIs: e.Result#1/48 } Tile{ AsIs: >/1 ]] }
        refalrts::alloc_open_bracket(vm, context[51]);
        refalrts::alloc_ident(vm, context[52], identifiers[ident_CmdCreateElem]);
        refalrts::alloc_close_bracket(vm, context[53]);
        refalrts::alloc_open_bracket(vm, context[54]);
        refalrts::alloc_open_bracket(vm, context[55]);
        refalrts::alloc_close_bracket(vm, context[56]);
        refalrts::alloc_close_bracket(vm, context[57]);
        refalrts::alloc_open_call(vm, context[58]);
        refalrts::alloc_name(vm, context[59], functions[efunc_Add]);
        refalrts::alloc_number(vm, context[60], 1UL);
        refalrts::copy_stvar(vm, context[61], context[13]);
        refalrts::alloc_close_call(vm, context[62]);
        refalrts::update_name(context[4], functions[efunc_DoGenResult]);
        refalrts::reinit_ident(context[22], identifiers[ident_Allocate]);
        refalrts::reinit_svar( context[24], context[13] );
        refalrts::update_ident(context[33], identifiers[ident_ElNumber]);
        refalrts::reinit_ident(context[12], identifiers[ident_CmdInsertElem]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::push_stack( vm, context[62] );
        refalrts::push_stack( vm, context[58] );
        refalrts::link_brackets( context[54], context[57] );
        refalrts::link_brackets( context[55], context[56] );
        refalrts::link_brackets( context[11], context[53] );
        refalrts::link_brackets( context[51], context[23] );
        refalrts::link_brackets( context[7], context[8] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[48], context[49] );
        res = refalrts::splice_evar( res, context[57], context[62] );
        res = refalrts::splice_evar( res, context[44], context[45] );
        res = refalrts::splice_elem( res, context[56] );
        res = refalrts::splice_evar( res, context[12], context[13] );
        res = refalrts::splice_evar( res, context[53], context[55] );
        res = refalrts::splice_evar( res, context[22], context[23] );
        res = refalrts::splice_evar( res, context[51], context[52] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & DoGenResult@2/4 (/7 e.Vars#1/42 )/8 (/11 e.X#0/44 )/12 s.X#0/13 (/22 # Symbol/24 # Identifier/33 e.Name#1/46 )/23 e.Result#1/48 >/1
      context[42] = context[34];
      context[43] = context[35];
      context[44] = context[36];
      context[45] = context[37];
      context[46] = context[38];
      context[47] = context[39];
      context[48] = context[40];
      context[49] = context[41];
      if( ! refalrts::ident_term( identifiers[ident_Identifier], context[33] ) )
        continue;
      // closed e.Vars#1 as range 42
      // closed e.X#0 as range 44
      // closed e.Name#1 as range 46
      // closed e.Result#1 as range 48
      //DEBUG: s.X#0: 13
      //DEBUG: e.Vars#1: 42
      //DEBUG: e.X#0: 44
      //DEBUG: e.Name#1: 46
      //DEBUG: e.Result#1: 48

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoGenResult/4 AsIs: (/7 AsIs: e.Vars#1/42 AsIs: )/8 AsIs: (/11 } (/50 # CmdCreateElem/51 Tile{ HalfReuse: # Allocate/22 HalfReuse: s.X0 #13/24 Reuse: # ElIdent/33 AsIs: e.Name#1/46 AsIs: )/23 } )/52 (/53 (/54 Tile{ HalfReuse: # CmdInsertElem/12 AsIs: s.X#0/13 } )/55 Tile{ AsIs: e.X#0/44 } )/56 </57 & Add/58 1/59 s.X#0/13/60 >/61 Tile{ AsIs: e.Result#1/48 } Tile{ AsIs: >/1 ]] }
      refalrts::alloc_open_bracket(vm, context[50]);
      refalrts::alloc_ident(vm, context[51], identifiers[ident_CmdCreateElem]);
      refalrts::alloc_close_bracket(vm, context[52]);
      refalrts::alloc_open_bracket(vm, context[53]);
      refalrts::alloc_open_bracket(vm, context[54]);
      refalrts::alloc_close_bracket(vm, context[55]);
      refalrts::alloc_close_bracket(vm, context[56]);
      refalrts::alloc_open_call(vm, context[57]);
      refalrts::alloc_name(vm, context[58], functions[efunc_Add]);
      refalrts::alloc_number(vm, context[59], 1UL);
      refalrts::copy_stvar(vm, context[60], context[13]);
      refalrts::alloc_close_call(vm, context[61]);
      refalrts::update_name(context[4], functions[efunc_DoGenResult]);
      refalrts::reinit_ident(context[22], identifiers[ident_Allocate]);
      refalrts::reinit_svar( context[24], context[13] );
      refalrts::update_ident(context[33], identifiers[ident_ElIdent]);
      refalrts::reinit_ident(context[12], identifiers[ident_CmdInsertElem]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[61] );
      refalrts::push_stack( vm, context[57] );
      refalrts::link_brackets( context[53], context[56] );
      refalrts::link_brackets( context[54], context[55] );
      refalrts::link_brackets( context[11], context[52] );
      refalrts::link_brackets( context[50], context[23] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[48], context[49] );
      res = refalrts::splice_evar( res, context[56], context[61] );
      res = refalrts::splice_evar( res, context[44], context[45] );
      res = refalrts::splice_elem( res, context[55] );
      res = refalrts::splice_evar( res, context[12], context[13] );
      res = refalrts::splice_evar( res, context[52], context[54] );
      res = refalrts::splice_evar( res, context[22], context[23] );
      res = refalrts::splice_evar( res, context[50], context[51] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & DoGenResult@2/4 (/7 e.Vars#1/25 )/8 (/11 e.X#0/27 )/12 s.X#0/13 (/22 # TkString/24 e.Chars#1/29 )/23 e.Result#1/31 >/1
      context[25] = context[14];
      context[26] = context[15];
      context[27] = context[16];
      context[28] = context[17];
      context[29] = context[20];
      context[30] = context[21];
      context[31] = context[18];
      context[32] = context[19];
      if( ! refalrts::ident_term( identifiers[ident_TkString], context[24] ) )
        continue;
      // closed e.Vars#1 as range 25
      // closed e.X#0 as range 27
      // closed e.Chars#1 as range 29
      // closed e.Result#1 as range 31
      //DEBUG: s.X#0: 13
      //DEBUG: e.Vars#1: 25
      //DEBUG: e.X#0: 27
      //DEBUG: e.Chars#1: 29
      //DEBUG: e.Result#1: 31

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoGenResult/4 AsIs: (/7 AsIs: e.Vars#1/25 AsIs: )/8 AsIs: (/11 } Tile{ AsIs: (/22 Reuse: # CmdCreateElem/24 } Tile{ HalfReuse: # Allocate/12 AsIs: s.X#0/13 } # ElString/33 Tile{ AsIs: e.Chars#1/29 } )/34 )/35 (/36 (/37 # CmdInsertRange/38 s.X#0/13/39 )/40 Tile{ AsIs: e.X#0/27 } )/41 </42 & Add/43 s.X#0/13/44 2/45 Tile{ HalfReuse: >/23 AsIs: e.Result#1/31 AsIs: >/1 ]] }
      refalrts::alloc_ident(vm, context[33], identifiers[ident_ElString]);
      refalrts::alloc_close_bracket(vm, context[34]);
      refalrts::alloc_close_bracket(vm, context[35]);
      refalrts::alloc_open_bracket(vm, context[36]);
      refalrts::alloc_open_bracket(vm, context[37]);
      refalrts::alloc_ident(vm, context[38], identifiers[ident_CmdInsertRange]);
      refalrts::copy_stvar(vm, context[39], context[13]);
      refalrts::alloc_close_bracket(vm, context[40]);
      refalrts::alloc_close_bracket(vm, context[41]);
      refalrts::alloc_open_call(vm, context[42]);
      refalrts::alloc_name(vm, context[43], functions[efunc_Add]);
      refalrts::copy_stvar(vm, context[44], context[13]);
      refalrts::alloc_number(vm, context[45], 2UL);
      refalrts::update_name(context[4], functions[efunc_DoGenResult]);
      refalrts::update_ident(context[24], identifiers[ident_CmdCreateElem]);
      refalrts::reinit_ident(context[12], identifiers[ident_Allocate]);
      refalrts::reinit_close_call(context[23]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[23] );
      refalrts::push_stack( vm, context[42] );
      refalrts::link_brackets( context[36], context[41] );
      refalrts::link_brackets( context[37], context[40] );
      refalrts::link_brackets( context[11], context[35] );
      refalrts::link_brackets( context[22], context[34] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[23];
      res = refalrts::splice_evar( res, context[41], context[45] );
      res = refalrts::splice_evar( res, context[27], context[28] );
      res = refalrts::splice_evar( res, context[34], context[40] );
      res = refalrts::splice_evar( res, context[29], context[30] );
      res = refalrts::splice_elem( res, context[33] );
      res = refalrts::splice_evar( res, context[12], context[13] );
      res = refalrts::splice_evar( res, context[22], context[24] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & DoGenResult@2/4 (/7 e.Vars#1/25 )/8 (/11 e.X#0/27 )/12 s.X#0/13 (/22 # Brackets/24 e.InBrackets#1/29 )/23 e.Result#1/31 >/1
      context[25] = context[14];
      context[26] = context[15];
      context[27] = context[16];
      context[28] = context[17];
      context[29] = context[20];
      context[30] = context[21];
      context[31] = context[18];
      context[32] = context[19];
      if( ! refalrts::ident_term( identifiers[ident_Brackets], context[24] ) )
        continue;
      // closed e.Vars#1 as range 25
      // closed e.X#0 as range 27
      // closed e.InBrackets#1 as range 29
      // closed e.Result#1 as range 31
      //DEBUG: s.X#0: 13
      //DEBUG: e.Vars#1: 25
      //DEBUG: e.X#0: 27
      //DEBUG: e.InBrackets#1: 29
      //DEBUG: e.Result#1: 31

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoGenResult/4 AsIs: (/7 AsIs: e.Vars#1/25 AsIs: )/8 AsIs: (/11 } (/33 # CmdCreateElem/34 Tile{ HalfReuse: # Allocate/12 AsIs: s.X#0/13 HalfReuse: # ElOpenBracket/22 HalfReuse: )/24 } )/35 (/36 (/37 # CmdInsertElem/38 s.X#0/13/39 )/40 Tile{ AsIs: e.X#0/27 } )/41 </42 & Add/43 1/44 s.X#0/13/45 >/46 Tile{ AsIs: e.InBrackets#1/29 } (/47 # TkCloseBracket/48 s.X#0/13/49 Tile{ AsIs: )/23 AsIs: e.Result#1/31 AsIs: >/1 ]] }
      refalrts::alloc_open_bracket(vm, context[33]);
      refalrts::alloc_ident(vm, context[34], identifiers[ident_CmdCreateElem]);
      refalrts::alloc_close_bracket(vm, context[35]);
      refalrts::alloc_open_bracket(vm, context[36]);
      refalrts::alloc_open_bracket(vm, context[37]);
      refalrts::alloc_ident(vm, context[38], identifiers[ident_CmdInsertElem]);
      refalrts::copy_stvar(vm, context[39], context[13]);
      refalrts::alloc_close_bracket(vm, context[40]);
      refalrts::alloc_close_bracket(vm, context[41]);
      refalrts::alloc_open_call(vm, context[42]);
      refalrts::alloc_name(vm, context[43], functions[efunc_Add]);
      refalrts::alloc_number(vm, context[44], 1UL);
      refalrts::copy_stvar(vm, context[45], context[13]);
      refalrts::alloc_close_call(vm, context[46]);
      refalrts::alloc_open_bracket(vm, context[47]);
      refalrts::alloc_ident(vm, context[48], identifiers[ident_TkCloseBracket]);
      refalrts::copy_stvar(vm, context[49], context[13]);
      refalrts::update_name(context[4], functions[efunc_DoGenResult]);
      refalrts::reinit_ident(context[12], identifiers[ident_Allocate]);
      refalrts::reinit_ident(context[22], identifiers[ident_ElOpenBracket]);
      refalrts::reinit_close_bracket(context[24]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[47], context[23] );
      refalrts::push_stack( vm, context[46] );
      refalrts::push_stack( vm, context[42] );
      refalrts::link_brackets( context[36], context[41] );
      refalrts::link_brackets( context[37], context[40] );
      refalrts::link_brackets( context[11], context[35] );
      refalrts::link_brackets( context[33], context[24] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[23];
      res = refalrts::splice_evar( res, context[47], context[49] );
      res = refalrts::splice_evar( res, context[29], context[30] );
      res = refalrts::splice_evar( res, context[41], context[46] );
      res = refalrts::splice_evar( res, context[27], context[28] );
      res = refalrts::splice_evar( res, context[35], context[40] );
      res = refalrts::splice_evar( res, context[12], context[24] );
      res = refalrts::splice_evar( res, context[33], context[34] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & DoGenResult@2/4 (/7 e.Vars#1/25 )/8 (/11 e.X#0/27 )/12 s.X#0/13 (/22 # CallBrackets/24 e.InBrackets#1/29 )/23 e.Result#1/31 >/1
      context[25] = context[14];
      context[26] = context[15];
      context[27] = context[16];
      context[28] = context[17];
      context[29] = context[20];
      context[30] = context[21];
      context[31] = context[18];
      context[32] = context[19];
      if( ! refalrts::ident_term( identifiers[ident_CallBrackets], context[24] ) )
        continue;
      // closed e.Vars#1 as range 25
      // closed e.X#0 as range 27
      // closed e.InBrackets#1 as range 29
      // closed e.Result#1 as range 31
      //DEBUG: s.X#0: 13
      //DEBUG: e.Vars#1: 25
      //DEBUG: e.X#0: 27
      //DEBUG: e.InBrackets#1: 29
      //DEBUG: e.Result#1: 31

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoGenResult/4 AsIs: (/7 AsIs: e.Vars#1/25 AsIs: )/8 AsIs: (/11 } (/33 # CmdCreateElem/34 Tile{ HalfReuse: # Allocate/12 AsIs: s.X#0/13 HalfReuse: # ElOpenCall/22 HalfReuse: )/24 } )/35 (/36 (/37 # CmdInsertElem/38 s.X#0/13/39 )/40 Tile{ AsIs: e.X#0/27 } )/41 </42 & Add/43 1/44 s.X#0/13/45 >/46 Tile{ AsIs: e.InBrackets#1/29 } (/47 # TkCloseCall/48 s.X#0/13/49 Tile{ AsIs: )/23 AsIs: e.Result#1/31 AsIs: >/1 ]] }
      refalrts::alloc_open_bracket(vm, context[33]);
      refalrts::alloc_ident(vm, context[34], identifiers[ident_CmdCreateElem]);
      refalrts::alloc_close_bracket(vm, context[35]);
      refalrts::alloc_open_bracket(vm, context[36]);
      refalrts::alloc_open_bracket(vm, context[37]);
      refalrts::alloc_ident(vm, context[38], identifiers[ident_CmdInsertElem]);
      refalrts::copy_stvar(vm, context[39], context[13]);
      refalrts::alloc_close_bracket(vm, context[40]);
      refalrts::alloc_close_bracket(vm, context[41]);
      refalrts::alloc_open_call(vm, context[42]);
      refalrts::alloc_name(vm, context[43], functions[efunc_Add]);
      refalrts::alloc_number(vm, context[44], 1UL);
      refalrts::copy_stvar(vm, context[45], context[13]);
      refalrts::alloc_close_call(vm, context[46]);
      refalrts::alloc_open_bracket(vm, context[47]);
      refalrts::alloc_ident(vm, context[48], identifiers[ident_TkCloseCall]);
      refalrts::copy_stvar(vm, context[49], context[13]);
      refalrts::update_name(context[4], functions[efunc_DoGenResult]);
      refalrts::reinit_ident(context[12], identifiers[ident_Allocate]);
      refalrts::reinit_ident(context[22], identifiers[ident_ElOpenCall]);
      refalrts::reinit_close_bracket(context[24]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[47], context[23] );
      refalrts::push_stack( vm, context[46] );
      refalrts::push_stack( vm, context[42] );
      refalrts::link_brackets( context[36], context[41] );
      refalrts::link_brackets( context[37], context[40] );
      refalrts::link_brackets( context[11], context[35] );
      refalrts::link_brackets( context[33], context[24] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[23];
      res = refalrts::splice_evar( res, context[47], context[49] );
      res = refalrts::splice_evar( res, context[29], context[30] );
      res = refalrts::splice_evar( res, context[41], context[46] );
      res = refalrts::splice_evar( res, context[27], context[28] );
      res = refalrts::splice_evar( res, context[35], context[40] );
      res = refalrts::splice_evar( res, context[12], context[24] );
      res = refalrts::splice_evar( res, context[33], context[34] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & DoGenResult@2/4 (/7 e.Vars#1/25 )/8 (/11 e.X#0/27 )/12 s.X#0/13 (/22 # ADT-Brackets/24 (/35 e.Name#1/33 )/36 e.InBrackets#1/29 )/23 e.Result#1/31 >/1
      context[25] = context[14];
      context[26] = context[15];
      context[27] = context[16];
      context[28] = context[17];
      context[29] = context[20];
      context[30] = context[21];
      context[31] = context[18];
      context[32] = context[19];
      if( ! refalrts::ident_term( identifiers[ident_ADTm_Brackets], context[24] ) )
        continue;
      context[33] = 0;
      context[34] = 0;
      context[35] = refalrts::brackets_left( context[33], context[34], context[29], context[30] );
      if( ! context[35] )
        continue;
      refalrts::bracket_pointers(context[35], context[36]);
      // closed e.Vars#1 as range 25
      // closed e.X#0 as range 27
      // closed e.Name#1 as range 33
      // closed e.InBrackets#1 as range 29
      // closed e.Result#1 as range 31
      //DEBUG: s.X#0: 13
      //DEBUG: e.Vars#1: 25
      //DEBUG: e.X#0: 27
      //DEBUG: e.Name#1: 33
      //DEBUG: e.InBrackets#1: 29
      //DEBUG: e.Result#1: 31

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoGenResult/4 AsIs: (/7 AsIs: e.Vars#1/25 AsIs: )/8 AsIs: (/11 } (/37 # CmdCreateElem/38 # Allocate/39 s.X#0/13/40 # ElOpenADT/41 )/42 )/43 (/44 (/45 # CmdInsertElem/46 s.X#0/13/47 )/48 Tile{ AsIs: e.X#0/27 } )/49 </50 & Add/51 Tile{ HalfReuse: 1/12 AsIs: s.X#0/13 } >/52 Tile{ AsIs: (/22 Reuse: # Symbol/24 HalfReuse: # Name/35 AsIs: e.Name#1/33 AsIs: )/36 AsIs: e.InBrackets#1/29 HalfReuse: (/23 } # TkCloseADT/53 s.X#0/13/54 )/55 Tile{ AsIs: e.Result#1/31 } Tile{ AsIs: >/1 ]] }
      refalrts::alloc_open_bracket(vm, context[37]);
      refalrts::alloc_ident(vm, context[38], identifiers[ident_CmdCreateElem]);
      refalrts::alloc_ident(vm, context[39], identifiers[ident_Allocate]);
      refalrts::copy_stvar(vm, context[40], context[13]);
      refalrts::alloc_ident(vm, context[41], identifiers[ident_ElOpenADT]);
      refalrts::alloc_close_bracket(vm, context[42]);
      refalrts::alloc_close_bracket(vm, context[43]);
      refalrts::alloc_open_bracket(vm, context[44]);
      refalrts::alloc_open_bracket(vm, context[45]);
      refalrts::alloc_ident(vm, context[46], identifiers[ident_CmdInsertElem]);
      refalrts::copy_stvar(vm, context[47], context[13]);
      refalrts::alloc_close_bracket(vm, context[48]);
      refalrts::alloc_close_bracket(vm, context[49]);
      refalrts::alloc_open_call(vm, context[50]);
      refalrts::alloc_name(vm, context[51], functions[efunc_Add]);
      refalrts::alloc_close_call(vm, context[52]);
      refalrts::alloc_ident(vm, context[53], identifiers[ident_TkCloseADT]);
      refalrts::copy_stvar(vm, context[54], context[13]);
      refalrts::alloc_close_bracket(vm, context[55]);
      refalrts::update_name(context[4], functions[efunc_DoGenResult]);
      refalrts::reinit_number(context[12], 1UL);
      refalrts::update_ident(context[24], identifiers[ident_Symbol]);
      refalrts::reinit_ident(context[35], identifiers[ident_Name]);
      refalrts::reinit_open_bracket(context[23]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[23], context[55] );
      refalrts::link_brackets( context[22], context[36] );
      refalrts::push_stack( vm, context[52] );
      refalrts::push_stack( vm, context[50] );
      refalrts::link_brackets( context[44], context[49] );
      refalrts::link_brackets( context[45], context[48] );
      refalrts::link_brackets( context[11], context[43] );
      refalrts::link_brackets( context[37], context[42] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[31], context[32] );
      res = refalrts::splice_evar( res, context[53], context[55] );
      res = refalrts::splice_evar( res, context[22], context[23] );
      res = refalrts::splice_elem( res, context[52] );
      res = refalrts::splice_evar( res, context[12], context[13] );
      res = refalrts::splice_evar( res, context[49], context[51] );
      res = refalrts::splice_evar( res, context[27], context[28] );
      res = refalrts::splice_evar( res, context[37], context[48] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & DoGenResult@2/4 (/7 e.Vars#1/25 )/8 (/11 e.X#0/27 )/12 s.X#0/13 (/22 # ClosureBrackets/24 e.InBrackets#1/29 )/23 e.Result#1/31 >/1
      context[25] = context[14];
      context[26] = context[15];
      context[27] = context[16];
      context[28] = context[17];
      context[29] = context[20];
      context[30] = context[21];
      context[31] = context[18];
      context[32] = context[19];
      if( ! refalrts::ident_term( identifiers[ident_ClosureBrackets], context[24] ) )
        continue;
      // closed e.Vars#1 as range 25
      // closed e.X#0 as range 27
      // closed e.InBrackets#1 as range 29
      // closed e.Result#1 as range 31
      //DEBUG: s.X#0: 13
      //DEBUG: e.Vars#1: 25
      //DEBUG: e.X#0: 27
      //DEBUG: e.InBrackets#1: 29
      //DEBUG: e.Result#1: 31

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoGenResult/4 AsIs: (/7 AsIs: e.Vars#1/25 AsIs: )/8 AsIs: (/11 } (/33 # CmdCreateElem/34 Tile{ HalfReuse: # Allocate/12 AsIs: s.X#0/13 HalfReuse: # ElClosureHead/22 HalfReuse: )/24 } )/35 (/36 (/37 # CmdInsertElem/38 s.X#0/13/39 )/40 Tile{ AsIs: e.X#0/27 } )/41 </42 & Add/43 1/44 s.X#0/13/45 >/46 Tile{ AsIs: e.InBrackets#1/29 } (/47 # TkUnwrappedClosure/48 s.X#0/13/49 Tile{ AsIs: )/23 AsIs: e.Result#1/31 AsIs: >/1 ]] }
      refalrts::alloc_open_bracket(vm, context[33]);
      refalrts::alloc_ident(vm, context[34], identifiers[ident_CmdCreateElem]);
      refalrts::alloc_close_bracket(vm, context[35]);
      refalrts::alloc_open_bracket(vm, context[36]);
      refalrts::alloc_open_bracket(vm, context[37]);
      refalrts::alloc_ident(vm, context[38], identifiers[ident_CmdInsertElem]);
      refalrts::copy_stvar(vm, context[39], context[13]);
      refalrts::alloc_close_bracket(vm, context[40]);
      refalrts::alloc_close_bracket(vm, context[41]);
      refalrts::alloc_open_call(vm, context[42]);
      refalrts::alloc_name(vm, context[43], functions[efunc_Add]);
      refalrts::alloc_number(vm, context[44], 1UL);
      refalrts::copy_stvar(vm, context[45], context[13]);
      refalrts::alloc_close_call(vm, context[46]);
      refalrts::alloc_open_bracket(vm, context[47]);
      refalrts::alloc_ident(vm, context[48], identifiers[ident_TkUnwrappedClosure]);
      refalrts::copy_stvar(vm, context[49], context[13]);
      refalrts::update_name(context[4], functions[efunc_DoGenResult]);
      refalrts::reinit_ident(context[12], identifiers[ident_Allocate]);
      refalrts::reinit_ident(context[22], identifiers[ident_ElClosureHead]);
      refalrts::reinit_close_bracket(context[24]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[47], context[23] );
      refalrts::push_stack( vm, context[46] );
      refalrts::push_stack( vm, context[42] );
      refalrts::link_brackets( context[36], context[41] );
      refalrts::link_brackets( context[37], context[40] );
      refalrts::link_brackets( context[11], context[35] );
      refalrts::link_brackets( context[33], context[24] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[23];
      res = refalrts::splice_evar( res, context[47], context[49] );
      res = refalrts::splice_evar( res, context[29], context[30] );
      res = refalrts::splice_evar( res, context[41], context[46] );
      res = refalrts::splice_evar( res, context[27], context[28] );
      res = refalrts::splice_evar( res, context[35], context[40] );
      res = refalrts::splice_evar( res, context[12], context[24] );
      res = refalrts::splice_evar( res, context[33], context[34] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & DoGenResult@2/4 (/7 e.new#16/25 )/8 (/11 e.new#17/27 )/12 s.new#11/13 (/22 s.new#13/24 s.new#14/33 e.new#15/29 )/23 e.new#12/31 >/1
    context[25] = context[14];
    context[26] = context[15];
    context[27] = context[16];
    context[28] = context[17];
    context[29] = context[20];
    context[30] = context[21];
    context[31] = context[18];
    context[32] = context[19];
    // closed e.new#16 as range 25
    // closed e.new#17 as range 27
    // closed e.new#12 as range 31
    if( ! refalrts::svar_left( context[33], context[29], context[30] ) )
      continue;
    // closed e.new#15 as range 29
    do {
      // </0 & DoGenResult@2/4 (/7 e.new#22/34 )/8 (/11 e.new#23/36 )/12 s.new#18/13 (/22 s.new#20/24 s.new#21/33 )/23 e.new#19/38 >/1
      context[34] = context[25];
      context[35] = context[26];
      context[36] = context[27];
      context[37] = context[28];
      context[38] = context[31];
      context[39] = context[32];
      if( ! refalrts::empty_seq( context[29], context[30] ) )
        continue;
      // closed e.new#22 as range 34
      // closed e.new#23 as range 36
      // closed e.new#19 as range 38
      do {
        // </0 & DoGenResult@2/4 (/7 e.Vars#1/40 )/8 (/11 e.X#0/42 )/12 s.X#0/13 (/22 # TkCloseBracket/24 s.OpenCounter#1/33 )/23 e.Result#1/44 >/1
        context[40] = context[34];
        context[41] = context[35];
        context[42] = context[36];
        context[43] = context[37];
        context[44] = context[38];
        context[45] = context[39];
        if( ! refalrts::ident_term( identifiers[ident_TkCloseBracket], context[24] ) )
          continue;
        // closed e.Vars#1 as range 40
        // closed e.X#0 as range 42
        // closed e.Result#1 as range 44
        //DEBUG: s.X#0: 13
        //DEBUG: s.OpenCounter#1: 33
        //DEBUG: e.Vars#1: 40
        //DEBUG: e.X#0: 42
        //DEBUG: e.Result#1: 44

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoGenResult/4 AsIs: (/7 AsIs: e.Vars#1/40 AsIs: )/8 AsIs: (/11 } (/46 # CmdCreateElem/47 # Allocate/48 s.X#0/13/49 # ElCloseBracket/50 )/51 )/52 (/53 Tile{ AsIs: (/22 Reuse: # CmdLinkBrackets/24 AsIs: s.OpenCounter#1/33 } s.X#0/13/54 )/55 (/56 Tile{ HalfReuse: # CmdInsertElem/12 AsIs: s.X#0/13 } )/57 Tile{ AsIs: e.X#0/42 } )/58 </59 & Add/60 1/61 s.X#0/13/62 Tile{ HalfReuse: >/23 AsIs: e.Result#1/44 AsIs: >/1 ]] }
        refalrts::alloc_open_bracket(vm, context[46]);
        refalrts::alloc_ident(vm, context[47], identifiers[ident_CmdCreateElem]);
        refalrts::alloc_ident(vm, context[48], identifiers[ident_Allocate]);
        refalrts::copy_stvar(vm, context[49], context[13]);
        refalrts::alloc_ident(vm, context[50], identifiers[ident_ElCloseBracket]);
        refalrts::alloc_close_bracket(vm, context[51]);
        refalrts::alloc_close_bracket(vm, context[52]);
        refalrts::alloc_open_bracket(vm, context[53]);
        refalrts::copy_stvar(vm, context[54], context[13]);
        refalrts::alloc_close_bracket(vm, context[55]);
        refalrts::alloc_open_bracket(vm, context[56]);
        refalrts::alloc_close_bracket(vm, context[57]);
        refalrts::alloc_close_bracket(vm, context[58]);
        refalrts::alloc_open_call(vm, context[59]);
        refalrts::alloc_name(vm, context[60], functions[efunc_Add]);
        refalrts::alloc_number(vm, context[61], 1UL);
        refalrts::copy_stvar(vm, context[62], context[13]);
        refalrts::update_name(context[4], functions[efunc_DoGenResult]);
        refalrts::update_ident(context[24], identifiers[ident_CmdLinkBrackets]);
        refalrts::reinit_ident(context[12], identifiers[ident_CmdInsertElem]);
        refalrts::reinit_close_call(context[23]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::push_stack( vm, context[23] );
        refalrts::push_stack( vm, context[59] );
        refalrts::link_brackets( context[53], context[58] );
        refalrts::link_brackets( context[56], context[57] );
        refalrts::link_brackets( context[22], context[55] );
        refalrts::link_brackets( context[11], context[52] );
        refalrts::link_brackets( context[46], context[51] );
        refalrts::link_brackets( context[7], context[8] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[23];
        res = refalrts::splice_evar( res, context[58], context[62] );
        res = refalrts::splice_evar( res, context[42], context[43] );
        res = refalrts::splice_elem( res, context[57] );
        res = refalrts::splice_evar( res, context[12], context[13] );
        res = refalrts::splice_evar( res, context[54], context[56] );
        res = refalrts::splice_evar( res, context[22], context[33] );
        res = refalrts::splice_evar( res, context[46], context[53] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & DoGenResult@2/4 (/7 e.Vars#1/40 )/8 (/11 e.X#0/42 )/12 s.X#0/13 (/22 # TkCloseADT/24 s.OpenCounter#1/33 )/23 e.Result#1/44 >/1
        context[40] = context[34];
        context[41] = context[35];
        context[42] = context[36];
        context[43] = context[37];
        context[44] = context[38];
        context[45] = context[39];
        if( ! refalrts::ident_term( identifiers[ident_TkCloseADT], context[24] ) )
          continue;
        // closed e.Vars#1 as range 40
        // closed e.X#0 as range 42
        // closed e.Result#1 as range 44
        //DEBUG: s.X#0: 13
        //DEBUG: s.OpenCounter#1: 33
        //DEBUG: e.Vars#1: 40
        //DEBUG: e.X#0: 42
        //DEBUG: e.Result#1: 44

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoGenResult/4 AsIs: (/7 AsIs: e.Vars#1/40 AsIs: )/8 AsIs: (/11 } (/46 # CmdCreateElem/47 # Allocate/48 s.X#0/13/49 # ElCloseADT/50 )/51 )/52 (/53 Tile{ AsIs: (/22 Reuse: # CmdLinkBrackets/24 AsIs: s.OpenCounter#1/33 } s.X#0/13/54 )/55 (/56 Tile{ HalfReuse: # CmdInsertElem/12 AsIs: s.X#0/13 } )/57 Tile{ AsIs: e.X#0/42 } )/58 </59 & Add/60 1/61 s.X#0/13/62 Tile{ HalfReuse: >/23 AsIs: e.Result#1/44 AsIs: >/1 ]] }
        refalrts::alloc_open_bracket(vm, context[46]);
        refalrts::alloc_ident(vm, context[47], identifiers[ident_CmdCreateElem]);
        refalrts::alloc_ident(vm, context[48], identifiers[ident_Allocate]);
        refalrts::copy_stvar(vm, context[49], context[13]);
        refalrts::alloc_ident(vm, context[50], identifiers[ident_ElCloseADT]);
        refalrts::alloc_close_bracket(vm, context[51]);
        refalrts::alloc_close_bracket(vm, context[52]);
        refalrts::alloc_open_bracket(vm, context[53]);
        refalrts::copy_stvar(vm, context[54], context[13]);
        refalrts::alloc_close_bracket(vm, context[55]);
        refalrts::alloc_open_bracket(vm, context[56]);
        refalrts::alloc_close_bracket(vm, context[57]);
        refalrts::alloc_close_bracket(vm, context[58]);
        refalrts::alloc_open_call(vm, context[59]);
        refalrts::alloc_name(vm, context[60], functions[efunc_Add]);
        refalrts::alloc_number(vm, context[61], 1UL);
        refalrts::copy_stvar(vm, context[62], context[13]);
        refalrts::update_name(context[4], functions[efunc_DoGenResult]);
        refalrts::update_ident(context[24], identifiers[ident_CmdLinkBrackets]);
        refalrts::reinit_ident(context[12], identifiers[ident_CmdInsertElem]);
        refalrts::reinit_close_call(context[23]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::push_stack( vm, context[23] );
        refalrts::push_stack( vm, context[59] );
        refalrts::link_brackets( context[53], context[58] );
        refalrts::link_brackets( context[56], context[57] );
        refalrts::link_brackets( context[22], context[55] );
        refalrts::link_brackets( context[11], context[52] );
        refalrts::link_brackets( context[46], context[51] );
        refalrts::link_brackets( context[7], context[8] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[23];
        res = refalrts::splice_evar( res, context[58], context[62] );
        res = refalrts::splice_evar( res, context[42], context[43] );
        res = refalrts::splice_elem( res, context[57] );
        res = refalrts::splice_evar( res, context[12], context[13] );
        res = refalrts::splice_evar( res, context[54], context[56] );
        res = refalrts::splice_evar( res, context[22], context[33] );
        res = refalrts::splice_evar( res, context[46], context[53] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & DoGenResult@2/4 (/7 e.Vars#1/40 )/8 (/11 e.X#0/42 )/12 s.X#0/13 (/22 # TkCloseCall/24 s.OpenCounter#1/33 )/23 e.Result#1/44 >/1
        context[40] = context[34];
        context[41] = context[35];
        context[42] = context[36];
        context[43] = context[37];
        context[44] = context[38];
        context[45] = context[39];
        if( ! refalrts::ident_term( identifiers[ident_TkCloseCall], context[24] ) )
          continue;
        // closed e.Vars#1 as range 40
        // closed e.X#0 as range 42
        // closed e.Result#1 as range 44
        //DEBUG: s.X#0: 13
        //DEBUG: s.OpenCounter#1: 33
        //DEBUG: e.Vars#1: 40
        //DEBUG: e.X#0: 42
        //DEBUG: e.Result#1: 44

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoGenResult/4 AsIs: (/7 AsIs: e.Vars#1/40 AsIs: )/8 AsIs: (/11 } (/46 # CmdCreateElem/47 Tile{ HalfReuse: # Allocate/12 AsIs: s.X#0/13 } # ElCloseCall/48 )/49 )/50 (/51 (/52 # CmdPushStack/53 s.X#0/13/54 )/55 Tile{ AsIs: (/22 Reuse: # CmdPushStack/24 AsIs: s.OpenCounter#1/33 AsIs: )/23 } (/56 # CmdInsertElem/57 s.X#0/13/58 )/59 Tile{ AsIs: e.X#0/42 } )/60 </61 & Add/62 1/63 s.X#0/13/64 >/65 Tile{ AsIs: e.Result#1/44 } Tile{ AsIs: >/1 ]] }
        refalrts::alloc_open_bracket(vm, context[46]);
        refalrts::alloc_ident(vm, context[47], identifiers[ident_CmdCreateElem]);
        refalrts::alloc_ident(vm, context[48], identifiers[ident_ElCloseCall]);
        refalrts::alloc_close_bracket(vm, context[49]);
        refalrts::alloc_close_bracket(vm, context[50]);
        refalrts::alloc_open_bracket(vm, context[51]);
        refalrts::alloc_open_bracket(vm, context[52]);
        refalrts::alloc_ident(vm, context[53], identifiers[ident_CmdPushStack]);
        refalrts::copy_stvar(vm, context[54], context[13]);
        refalrts::alloc_close_bracket(vm, context[55]);
        refalrts::alloc_open_bracket(vm, context[56]);
        refalrts::alloc_ident(vm, context[57], identifiers[ident_CmdInsertElem]);
        refalrts::copy_stvar(vm, context[58], context[13]);
        refalrts::alloc_close_bracket(vm, context[59]);
        refalrts::alloc_close_bracket(vm, context[60]);
        refalrts::alloc_open_call(vm, context[61]);
        refalrts::alloc_name(vm, context[62], functions[efunc_Add]);
        refalrts::alloc_number(vm, context[63], 1UL);
        refalrts::copy_stvar(vm, context[64], context[13]);
        refalrts::alloc_close_call(vm, context[65]);
        refalrts::update_name(context[4], functions[efunc_DoGenResult]);
        refalrts::reinit_ident(context[12], identifiers[ident_Allocate]);
        refalrts::update_ident(context[24], identifiers[ident_CmdPushStack]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::push_stack( vm, context[65] );
        refalrts::push_stack( vm, context[61] );
        refalrts::link_brackets( context[51], context[60] );
        refalrts::link_brackets( context[56], context[59] );
        refalrts::link_brackets( context[22], context[23] );
        refalrts::link_brackets( context[52], context[55] );
        refalrts::link_brackets( context[11], context[50] );
        refalrts::link_brackets( context[46], context[49] );
        refalrts::link_brackets( context[7], context[8] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[44], context[45] );
        res = refalrts::splice_evar( res, context[60], context[65] );
        res = refalrts::splice_evar( res, context[42], context[43] );
        res = refalrts::splice_evar( res, context[56], context[59] );
        res = refalrts::splice_evar( res, context[22], context[23] );
        res = refalrts::splice_evar( res, context[48], context[55] );
        res = refalrts::splice_evar( res, context[12], context[13] );
        res = refalrts::splice_evar( res, context[46], context[47] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & DoGenResult@2/4 (/7 e.Vars#1/40 )/8 (/11 e.X#0/42 )/12 s.X#0/13 (/22 # TkUnwrappedClosure/24 s.HeadCounter#1/33 )/23 e.Result#1/44 >/1
      context[40] = context[34];
      context[41] = context[35];
      context[42] = context[36];
      context[43] = context[37];
      context[44] = context[38];
      context[45] = context[39];
      if( ! refalrts::ident_term( identifiers[ident_TkUnwrappedClosure], context[24] ) )
        continue;
      // closed e.Vars#1 as range 40
      // closed e.X#0 as range 42
      // closed e.Result#1 as range 44
      //DEBUG: s.X#0: 13
      //DEBUG: s.HeadCounter#1: 33
      //DEBUG: e.Vars#1: 40
      //DEBUG: e.X#0: 42
      //DEBUG: e.Result#1: 44

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.HeadCounter#1/33 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoGenResult/4 AsIs: (/7 AsIs: e.Vars#1/40 AsIs: )/8 AsIs: (/11 } (/46 # CmdCreateElem/47 Tile{ HalfReuse: # Allocate/12 AsIs: s.X#0/13 HalfReuse: # ElUnwrappedClosure/22 HalfReuse: s.HeadCounter1 #33/24 } )/48 )/49 (/50 (/51 # CmdInsertElem/52 s.X#0/13/53 )/54 Tile{ AsIs: e.X#0/42 } (/55 # CmdWrapClosure/56 s.X#0/13/57 )/58 )/59 </60 & Add/61 1/62 s.X#0/13/63 Tile{ HalfReuse: >/23 AsIs: e.Result#1/44 AsIs: >/1 ]] }
      refalrts::alloc_open_bracket(vm, context[46]);
      refalrts::alloc_ident(vm, context[47], identifiers[ident_CmdCreateElem]);
      refalrts::alloc_close_bracket(vm, context[48]);
      refalrts::alloc_close_bracket(vm, context[49]);
      refalrts::alloc_open_bracket(vm, context[50]);
      refalrts::alloc_open_bracket(vm, context[51]);
      refalrts::alloc_ident(vm, context[52], identifiers[ident_CmdInsertElem]);
      refalrts::copy_stvar(vm, context[53], context[13]);
      refalrts::alloc_close_bracket(vm, context[54]);
      refalrts::alloc_open_bracket(vm, context[55]);
      refalrts::alloc_ident(vm, context[56], identifiers[ident_CmdWrapClosure]);
      refalrts::copy_stvar(vm, context[57], context[13]);
      refalrts::alloc_close_bracket(vm, context[58]);
      refalrts::alloc_close_bracket(vm, context[59]);
      refalrts::alloc_open_call(vm, context[60]);
      refalrts::alloc_name(vm, context[61], functions[efunc_Add]);
      refalrts::alloc_number(vm, context[62], 1UL);
      refalrts::copy_stvar(vm, context[63], context[13]);
      refalrts::update_name(context[4], functions[efunc_DoGenResult]);
      refalrts::reinit_ident(context[12], identifiers[ident_Allocate]);
      refalrts::reinit_ident(context[22], identifiers[ident_ElUnwrappedClosure]);
      refalrts::reinit_svar( context[24], context[33] );
      refalrts::reinit_close_call(context[23]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[23] );
      refalrts::push_stack( vm, context[60] );
      refalrts::link_brackets( context[50], context[59] );
      refalrts::link_brackets( context[55], context[58] );
      refalrts::link_brackets( context[51], context[54] );
      refalrts::link_brackets( context[11], context[49] );
      refalrts::link_brackets( context[46], context[48] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[23];
      res = refalrts::splice_evar( res, context[55], context[63] );
      res = refalrts::splice_evar( res, context[42], context[43] );
      res = refalrts::splice_evar( res, context[48], context[54] );
      res = refalrts::splice_evar( res, context[12], context[24] );
      res = refalrts::splice_evar( res, context[46], context[47] );
      refalrts::splice_to_freelist_open( vm, context[11], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & DoGenResult@2/4 (/7 e.new#22/34 )/8 (/11 e.new#23/36 )/12 s.new#18/13 (/22 # TkVariable/24 s.new#20/33 e.new#21/38 )/23 e.new#19/40 >/1
    context[34] = context[25];
    context[35] = context[26];
    context[36] = context[27];
    context[37] = context[28];
    context[38] = context[29];
    context[39] = context[30];
    context[40] = context[31];
    context[41] = context[32];
    if( ! refalrts::ident_term( identifiers[ident_TkVariable], context[24] ) )
      continue;
    // closed e.new#22 as range 34
    // closed e.new#23 as range 36
    // closed e.new#21 as range 38
    // closed e.new#19 as range 40
    do {
      // </0 & DoGenResult@2/4 (/7 e.Vars-B#1/50 (/56 s.Mode#1/58 (/61 e.Index#1/67 )/62 (/65 e.ResultVars#1/63 )/66 s.NextPatternVar#1/69 e.PatternVars#1/54 )/57 e.Vars-E#1/52 )/8 (/11 e.X#0/44 )/12 s.X#0/13 (/22 # TkVariable/24 s.Mode#1/33 e.Index#1/46 )/23 e.Result#1/48 >/1
      context[42] = context[34];
      context[43] = context[35];
      context[44] = context[36];
      context[45] = context[37];
      context[46] = context[38];
      context[47] = context[39];
      context[48] = context[40];
      context[49] = context[41];
      // closed e.X#0 as range 44
      // closed e.Index#1 as range 46
      // closed e.Result#1 as range 48
      context[50] = 0;
      context[51] = 0;
      refalrts::start_e_loop(vm);
      do {
        context[52] = context[42];
        context[53] = context[43];
        context[54] = 0;
        context[55] = 0;
        context[56] = refalrts::brackets_left( context[54], context[55], context[52], context[53] );
        if( ! context[56] )
          continue;
        refalrts::bracket_pointers(context[56], context[57]);
        if( ! refalrts::repeated_stvar_left( vm, context[58], context[33], context[54], context[55] ) )
          continue;
        context[59] = 0;
        context[60] = 0;
        context[61] = refalrts::brackets_left( context[59], context[60], context[54], context[55] );
        if( ! context[61] )
          continue;
        refalrts::bracket_pointers(context[61], context[62]);
        context[63] = 0;
        context[64] = 0;
        context[65] = refalrts::brackets_left( context[63], context[64], context[54], context[55] );
        if( ! context[65] )
          continue;
        refalrts::bracket_pointers(context[65], context[66]);
        if( ! refalrts::repeated_evar_left( vm, context[67], context[68], context[46], context[47], context[59], context[60] ) )
          continue;
        if( ! refalrts::empty_seq( context[59], context[60] ) )
          continue;
        // closed e.ResultVars#1 as range 63
        // closed e.Vars-E#1 as range 52
        if( ! refalrts::svar_left( context[69], context[54], context[55] ) )
          continue;
        // closed e.PatternVars#1 as range 54
        //DEBUG: s.X#0: 13
        //DEBUG: s.Mode#1: 33
        //DEBUG: e.X#0: 44
        //DEBUG: e.Index#1: 46
        //DEBUG: e.Result#1: 48
        //DEBUG: e.Vars-B#1: 50
        //DEBUG: e.ResultVars#1: 63
        //DEBUG: e.Vars-E#1: 52
        //DEBUG: s.NextPatternVar#1: 69
        //DEBUG: e.PatternVars#1: 54

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.X#0/13 {REMOVED TILE} e.Index#1/46 {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenResult@2/4 AsIs: (/7 AsIs: e.Vars-B#1/50 AsIs: (/56 AsIs: s.Mode#1/58 AsIs: (/61 AsIs: e.Index#1/67 AsIs: )/62 AsIs: (/65 AsIs: e.ResultVars#1/63 HalfReuse: s.NextPatternVar1 #69/66 } Tile{ AsIs: )/12 } Tile{ AsIs: e.PatternVars#1/54 } Tile{ AsIs: )/57 AsIs: e.Vars-E#1/52 AsIs: )/8 AsIs: (/11 } Tile{ AsIs: (/22 Reuse: # CmdInsertVar/24 AsIs: s.Mode#1/33 } Tile{ AsIs: s.NextPatternVar#1/69 } )/70 Tile{ AsIs: e.X#0/44 } )/71 Tile{ HalfReuse: s.X0 #13/23 AsIs: e.Result#1/48 AsIs: >/1 ]] }
        refalrts::alloc_close_bracket(vm, context[70]);
        refalrts::alloc_close_bracket(vm, context[71]);
        refalrts::reinit_svar( context[66], context[69] );
        refalrts::update_ident(context[24], identifiers[ident_CmdInsertVar]);
        refalrts::reinit_svar( context[23], context[13] );
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[11], context[71] );
        refalrts::link_brackets( context[22], context[70] );
        refalrts::link_brackets( context[7], context[8] );
        refalrts::link_brackets( context[56], context[57] );
        refalrts::link_brackets( context[65], context[12] );
        refalrts::link_brackets( context[61], context[62] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[23];
        res = refalrts::splice_elem( res, context[71] );
        res = refalrts::splice_evar( res, context[44], context[45] );
        res = refalrts::splice_elem( res, context[70] );
        res = refalrts::splice_elem( res, context[69] );
        res = refalrts::splice_evar( res, context[22], context[33] );
        res = refalrts::splice_evar( res, context[57], context[11] );
        res = refalrts::splice_evar( res, context[54], context[55] );
        res = refalrts::splice_elem( res, context[12] );
        refalrts::splice_to_freelist_open( vm, context[66], res );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[50], context[51], context[42], context[43] ) );
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & DoGenResult@2/4 (/7 e.Vars-B#1/50 (/56 s.Mode#1/66 (/64 e.Index#1/67 )/65 (/60 e.ResultVars#1/58 s.Sample#1/69 )/61 )/57 e.Vars-E#1/52 )/8 (/11 e.X#0/44 )/12 s.X#0/13 (/22 # TkVariable/24 s.Mode#1/33 e.Index#1/46 )/23 e.Result#1/48 >/1
    context[42] = context[34];
    context[43] = context[35];
    context[44] = context[36];
    context[45] = context[37];
    context[46] = context[38];
    context[47] = context[39];
    context[48] = context[40];
    context[49] = context[41];
    // closed e.X#0 as range 44
    // closed e.Index#1 as range 46
    // closed e.Result#1 as range 48
    context[50] = 0;
    context[51] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[52] = context[42];
      context[53] = context[43];
      context[54] = 0;
      context[55] = 0;
      context[56] = refalrts::brackets_left( context[54], context[55], context[52], context[53] );
      if( ! context[56] )
        continue;
      refalrts::bracket_pointers(context[56], context[57]);
      context[58] = 0;
      context[59] = 0;
      context[60] = refalrts::brackets_right( context[58], context[59], context[54], context[55] );
      if( ! context[60] )
        continue;
      refalrts::bracket_pointers(context[60], context[61]);
      context[62] = 0;
      context[63] = 0;
      context[64] = refalrts::brackets_right( context[62], context[63], context[54], context[55] );
      if( ! context[64] )
        continue;
      refalrts::bracket_pointers(context[64], context[65]);
      if( ! refalrts::repeated_stvar_left( vm, context[66], context[33], context[54], context[55] ) )
        continue;
      if( ! refalrts::empty_seq( context[54], context[55] ) )
        continue;
      if( ! refalrts::repeated_evar_left( vm, context[67], context[68], context[46], context[47], context[62], context[63] ) )
        continue;
      if( ! refalrts::empty_seq( context[62], context[63] ) )
        continue;
      // closed e.Vars-E#1 as range 52
      if( ! refalrts::svar_right( context[69], context[58], context[59] ) )
        continue;
      // closed e.ResultVars#1 as range 58
      //DEBUG: s.X#0: 13
      //DEBUG: s.Mode#1: 33
      //DEBUG: e.X#0: 44
      //DEBUG: e.Index#1: 46
      //DEBUG: e.Result#1: 48
      //DEBUG: e.Vars-B#1: 50
      //DEBUG: e.Vars-E#1: 52
      //DEBUG: s.Sample#1: 69
      //DEBUG: e.ResultVars#1: 58

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.Index#1/46 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoGenResult/4 AsIs: (/7 AsIs: e.Vars-B#1/50 AsIs: (/56 AsIs: s.Mode#1/66 AsIs: (/64 AsIs: e.Index#1/67 AsIs: )/65 AsIs: (/60 AsIs: e.ResultVars#1/58 AsIs: s.Sample#1/69 HalfReuse: s.X0 #13/61 AsIs: )/57 } )/70 Tile{ AsIs: e.Vars-E#1/52 } )/71 (/72 (/73 # CmdCopyVar/74 s.Mode#1/66/75 Tile{ AsIs: s.X#0/13 } s.Sample#1/69/76 )/77 )/78 (/79 Tile{ AsIs: (/22 Reuse: # CmdInsertVar/24 AsIs: s.Mode#1/33 } Tile{ HalfReuse: s.X0 #13/8 HalfReuse: )/11 AsIs: e.X#0/44 AsIs: )/12 } </80 & IncVarOffset/81 s.X#0/13/82 s.Mode#1/66/83 Tile{ HalfReuse: >/23 AsIs: e.Result#1/48 AsIs: >/1 ]] }
      refalrts::alloc_close_bracket(vm, context[70]);
      refalrts::alloc_close_bracket(vm, context[71]);
      refalrts::alloc_open_bracket(vm, context[72]);
      refalrts::alloc_open_bracket(vm, context[73]);
      refalrts::alloc_ident(vm, context[74], identifiers[ident_CmdCopyVar]);
      refalrts::copy_stvar(vm, context[75], context[66]);
      refalrts::copy_stvar(vm, context[76], context[69]);
      refalrts::alloc_close_bracket(vm, context[77]);
      refalrts::alloc_close_bracket(vm, context[78]);
      refalrts::alloc_open_bracket(vm, context[79]);
      refalrts::alloc_open_call(vm, context[80]);
      refalrts::alloc_name(vm, context[81], functions[efunc_IncVarOffset]);
      refalrts::copy_stvar(vm, context[82], context[13]);
      refalrts::copy_stvar(vm, context[83], context[66]);
      refalrts::update_name(context[4], functions[efunc_DoGenResult]);
      refalrts::reinit_svar( context[61], context[13] );
      refalrts::update_ident(context[24], identifiers[ident_CmdInsertVar]);
      refalrts::reinit_svar( context[8], context[13] );
      refalrts::reinit_close_bracket(context[11]);
      refalrts::reinit_close_call(context[23]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[23] );
      refalrts::push_stack( vm, context[80] );
      refalrts::link_brackets( context[79], context[12] );
      refalrts::link_brackets( context[22], context[11] );
      refalrts::link_brackets( context[72], context[78] );
      refalrts::link_brackets( context[73], context[77] );
      refalrts::link_brackets( context[7], context[71] );
      refalrts::link_brackets( context[56], context[70] );
      refalrts::link_brackets( context[60], context[57] );
      refalrts::link_brackets( context[64], context[65] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[23];
      res = refalrts::splice_evar( res, context[80], context[83] );
      res = refalrts::splice_evar( res, context[8], context[12] );
      res = refalrts::splice_evar( res, context[22], context[33] );
      res = refalrts::splice_evar( res, context[76], context[79] );
      res = refalrts::splice_elem( res, context[13] );
      res = refalrts::splice_evar( res, context[71], context[75] );
      res = refalrts::splice_evar( res, context[52], context[53] );
      res = refalrts::splice_elem( res, context[70] );
      refalrts::splice_to_freelist_open( vm, context[57], res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[50], context[51], context[42], context[43] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoGenResult@2/4 (/7 e.Vars#1/14 )/8 (/11 e.X#0/16 )/12 s.X#0/13 >/1
    context[14] = context[5];
    context[15] = context[6];
    context[16] = context[9];
    context[17] = context[10];
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Vars#1 as range 14
    // closed e.X#0 as range 16
    //DEBUG: s.X#0: 13
    //DEBUG: e.Vars#1: 14
    //DEBUG: e.X#0: 16

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE} (/11 {REMOVED TILE} )/12 s.X#0/13 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: s.X0 #13/4 AsIs: (/7 AsIs: e.Vars#1/14 AsIs: )/8 } Tile{ AsIs: e.X#0/16 } Tile{ ]] }
    refalrts::reinit_svar( context[4], context[13] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_evar( res, context[4], context[8] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoGenResult@2/4 (/7 e.dyn#0/5 )/8 (/11 e.X#0/9 )/12 s.X#0/13 e.dyn#3/2 >/1
  // closed e.dyn#0 as range 5
  // closed e.X#0 as range 9
  // closed e.dyn#3 as range 2
  //DEBUG: s.X#0: 13
  //DEBUG: e.dyn#0: 5
  //DEBUG: e.X#0: 9
  //DEBUG: e.dyn#3: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoGenResult@0/4 AsIs: (/7 } Tile{ AsIs: e.dyn#0/5 } )/14 (/15 Tile{ AsIs: )/8 AsIs: (/11 AsIs: e.X#0/9 AsIs: )/12 AsIs: s.X#0/13 AsIs: e.dyn#3/2 AsIs: >/1 ]] }
  refalrts::alloc_close_bracket(vm, context[14]);
  refalrts::alloc_open_bracket(vm, context[15]);
  refalrts::update_name(context[4], functions[efunc_gen_DoGenResult_Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[15], context[8] );
  refalrts::link_brackets( context[7], context[14] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[14], context[15] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoGenResult_Z2("DoGenResult@2", COOKIE1_, COOKIE2_, func_gen_DoGenResult_Z2);


static refalrts::FnResult func_gen_Map_Z5(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
  // </0 & Map@5/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & Map@5/4 t.new#1/7 e.new#2/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[8] = refalrts::tvar_left( context[7], context[5], context[6] );
    if( ! context[8] )
      continue;
    // closed e.new#2 as range 5
    do {
      // </0 & Map@5/4 (/7 s.Mode#1/13 (/16 e.2#0/14 )/17 (/20 e.4#0/18 )/21 e.3#0/11 )/8 e.Tail#1/9 >/1
      context[9] = context[5];
      context[10] = context[6];
      context[11] = 0;
      context[12] = 0;
      if( ! refalrts::brackets_term( context[11], context[12], context[7] ) )
        continue;
      // closed e.Tail#1 as range 9
      if( ! refalrts::svar_left( context[13], context[11], context[12] ) )
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
      // closed e.2#0 as range 14
      // closed e.4#0 as range 18
      // closed e.3#0 as range 11
      //DEBUG: e.Tail#1: 9
      //DEBUG: s.Mode#1: 13
      //DEBUG: e.2#0: 14
      //DEBUG: e.4#0: 18
      //DEBUG: e.3#0: 11

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} )/21 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: </4 HalfReuse: & Map@2/7 AsIs: s.Mode#1/13 AsIs: (/16 AsIs: e.2#0/14 AsIs: )/17 } Tile{ AsIs: e.4#0/18 } Tile{ AsIs: e.3#0/11 } Tile{ HalfReuse: >/20 } Tile{ AsIs: </0 } Tile{ HalfReuse: & Map@5/8 AsIs: e.Tail#1/9 AsIs: >/1 ]] }
      refalrts::reinit_open_call(context[4]);
      refalrts::reinit_name(context[7], functions[efunc_gen_Map_Z2]);
      refalrts::reinit_close_call(context[20]);
      refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z5]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[20] );
      refalrts::push_stack( vm, context[4] );
      refalrts::link_brackets( context[16], context[17] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_elem( res, context[0] );
      res = refalrts::splice_elem( res, context[20] );
      res = refalrts::splice_evar( res, context[11], context[12] );
      res = refalrts::splice_evar( res, context[18], context[19] );
      res = refalrts::splice_evar( res, context[4], context[17] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Map@5/4 t.Next#1/7 e.Tail#1/9 >/1
    context[9] = context[5];
    context[10] = context[6];
    // closed e.Tail#1 as range 9
    //DEBUG: t.Next#1: 7
    //DEBUG: e.Tail#1: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ReplicateVar*1/4 AsIs: t.Next#1/7 } >/11 </12 & Map@5/13 Tile{ AsIs: e.Tail#1/9 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_close_call(vm, context[11]);
    refalrts::alloc_open_call(vm, context[12]);
    refalrts::alloc_name(vm, context[13], functions[efunc_gen_Map_Z5]);
    refalrts::update_name(context[4], functions[efunc_gen_ReplicateVar_D1]);
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
    // </0 & Map@5/4 >/1
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Map@5/4 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Map@5/4 e.items#0/2 >/1
  // closed e.items#0 as range 2
  //DEBUG: e.items#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Map@0/0 Reuse: & ReplicateVar@0/4 AsIs: e.items#0/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::reinit_name(context[0], functions[efunc_gen_Map_Z0]);
  refalrts::update_name(context[4], functions[efunc_gen_ReplicateVar_Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_elem( res, context[5] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Map_Z5("Map@5", COOKIE1_, COOKIE2_, func_gen_Map_Z5);


static refalrts::FnResult func_gen_Fetch_Z1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
  // </0 & Fetch@1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & Fetch@1/4 e.Argument#1/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    // closed e.Argument#1 as range 5
    //DEBUG: e.Argument#1: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </7 & Fetch@2/8 Tile{ AsIs: </0 Reuse: & Sort/4 AsIs: e.Argument#1/5 AsIs: >/1 } >/9 Tile{ ]] }
    refalrts::alloc_open_call(vm, context[7]);
    refalrts::alloc_name(vm, context[8], functions[efunc_gen_Fetch_Z2]);
    refalrts::alloc_close_call(vm, context[9]);
    refalrts::update_name(context[4], functions[efunc_Sort]);
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

  // </0 & Fetch@1/4 e.arg#0/2 >/1
  // closed e.arg#0 as range 2
  //DEBUG: e.arg#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch@0/4 AsIs: e.arg#0/2 HalfReuse: [*]/1 } & Pipe$2\1@0/5 & Sort@0/6 (/7 (/8 & Map@0/9 & MakeVariableComment@0/10 )/11 )/12 {*}/13 >/14 Tile{ ]] }
  refalrts::alloc_name(vm, context[5], functions[efunc_gen_Pipe_S2L1Z0]);
  refalrts::alloc_name(vm, context[6], functions[efunc_gen_Sort_Z0]);
  refalrts::alloc_open_bracket(vm, context[7]);
  refalrts::alloc_open_bracket(vm, context[8]);
  refalrts::alloc_name(vm, context[9], functions[efunc_gen_Map_Z0]);
  refalrts::alloc_name(vm, context[10], functions[efunc_gen_MakeVariableComment_Z0]);
  refalrts::alloc_close_bracket(vm, context[11]);
  refalrts::alloc_close_bracket(vm, context[12]);
  refalrts::alloc_unwrapped_closure(vm, context[13], context[1]);
  refalrts::alloc_close_call(vm, context[14]);
  refalrts::update_name(context[4], functions[efunc_gen_Fetch_Z0]);
  refalrts::reinit_closure_head(context[1]);
  refalrts::push_stack( vm, context[14] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[12] );
  refalrts::link_brackets( context[8], context[11] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[14] );
  refalrts::use( res );
  refalrts::wrap_closure( context[13] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Fetch_Z1("Fetch@1", COOKIE1_, COOKIE2_, func_gen_Fetch_Z1);


static refalrts::FnResult func_gen_Fetch_Z2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  // </0 & Fetch@2/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & Fetch@2/4 e.Argument#1/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    // closed e.Argument#1 as range 5
    //DEBUG: e.Argument#1: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map@6/4 AsIs: e.Argument#1/5 AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_gen_Map_Z6]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Fetch@2/4 e.arg#0/2 >/1
  // closed e.arg#0 as range 2
  //DEBUG: e.arg#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch@0/4 AsIs: e.arg#0/2 HalfReuse: (/1 } & Map@0/5 & MakeVariableComment@0/6 )/7 >/8 Tile{ ]] }
  refalrts::alloc_name(vm, context[5], functions[efunc_gen_Map_Z0]);
  refalrts::alloc_name(vm, context[6], functions[efunc_gen_MakeVariableComment_Z0]);
  refalrts::alloc_close_bracket(vm, context[7]);
  refalrts::alloc_close_call(vm, context[8]);
  refalrts::update_name(context[4], functions[efunc_gen_Fetch_Z0]);
  refalrts::reinit_open_bracket(context[1]);
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[1], context[7] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[8] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Fetch_Z2("Fetch@2", COOKIE1_, COOKIE2_, func_gen_Fetch_Z2);


static refalrts::FnResult func_gen_Map_Z6(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 23 elems
  refalrts::Iter context[23];
  refalrts::zeros( context, 23 );
  // </0 & Map@6/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & Map@6/4 t.new#1/7 e.new#2/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[8] = refalrts::tvar_left( context[7], context[5], context[6] );
    if( ! context[8] )
      continue;
    // closed e.new#2 as range 5
    do {
      // </0 & Map@6/4 (/7 s.Offset#1/13 s.Mode#1/14 e.2#0/11 s.Depth#1/15 )/8 e.Tail#1/9 >/1
      context[9] = context[5];
      context[10] = context[6];
      context[11] = 0;
      context[12] = 0;
      if( ! refalrts::brackets_term( context[11], context[12], context[7] ) )
        continue;
      // closed e.Tail#1 as range 9
      if( ! refalrts::svar_left( context[13], context[11], context[12] ) )
        continue;
      if( ! refalrts::svar_left( context[14], context[11], context[12] ) )
        continue;
      if( ! refalrts::svar_right( context[15], context[11], context[12] ) )
        continue;
      // closed e.2#0 as range 11
      //DEBUG: e.Tail#1: 9
      //DEBUG: s.Offset#1: 13
      //DEBUG: s.Mode#1: 14
      //DEBUG: s.Depth#1: 15
      //DEBUG: e.2#0: 11

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # CmdComment/4 HalfReuse: # Offset/7 AsIs: s.Offset#1/13 }": "/16 </18 & PrintVar/19 Tile{ AsIs: s.Mode#1/14 AsIs: e.2#0/11 AsIs: s.Depth#1/15 HalfReuse: >/8 } )/20 </21 & Map@6/22 Tile{ AsIs: e.Tail#1/9 } Tile{ AsIs: >/1 ]] }
      refalrts::alloc_chars(vm, context[16], context[17], ": ", 2);
      refalrts::alloc_open_call(vm, context[18]);
      refalrts::alloc_name(vm, context[19], functions[efunc_PrintVar]);
      refalrts::alloc_close_bracket(vm, context[20]);
      refalrts::alloc_open_call(vm, context[21]);
      refalrts::alloc_name(vm, context[22], functions[efunc_gen_Map_Z6]);
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_ident(context[4], identifiers[ident_CmdComment]);
      refalrts::reinit_ident(context[7], identifiers[ident_Offset]);
      refalrts::reinit_close_call(context[8]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[21] );
      refalrts::link_brackets( context[0], context[20] );
      refalrts::push_stack( vm, context[8] );
      refalrts::push_stack( vm, context[18] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[9], context[10] );
      res = refalrts::splice_evar( res, context[20], context[22] );
      res = refalrts::splice_evar( res, context[14], context[8] );
      res = refalrts::splice_evar( res, context[16], context[19] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Map@6/4 t.Next#1/7 e.Tail#1/9 >/1
    context[9] = context[5];
    context[10] = context[6];
    // closed e.Tail#1 as range 9
    //DEBUG: t.Next#1: 7
    //DEBUG: e.Tail#1: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & MakeVariableComment*1/4 AsIs: t.Next#1/7 } >/11 </12 & Map@6/13 Tile{ AsIs: e.Tail#1/9 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_close_call(vm, context[11]);
    refalrts::alloc_open_call(vm, context[12]);
    refalrts::alloc_name(vm, context[13], functions[efunc_gen_Map_Z6]);
    refalrts::update_name(context[4], functions[efunc_gen_MakeVariableComment_D1]);
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
    // </0 & Map@6/4 >/1
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Map@6/4 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Map@6/4 e.items#0/2 >/1
  // closed e.items#0 as range 2
  //DEBUG: e.items#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Map@0/0 Reuse: & MakeVariableComment@0/4 AsIs: e.items#0/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::reinit_name(context[0], functions[efunc_gen_Map_Z0]);
  refalrts::update_name(context[4], functions[efunc_gen_MakeVariableComment_Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_elem( res, context[5] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Map_Z6("Map@6", COOKIE1_, COOKIE2_, func_gen_Map_Z6);


//End of file
