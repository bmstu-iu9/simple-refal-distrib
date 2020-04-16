// This file automatically generated from 'HighLevelRASL-GenResult-Simple.ref'
// Don't edit! Edit 'HighLevelRASL-GenResult-Simple.ref' and recompile it

#include "refalrts.h"

#define cookie_ns cookie_ns_2092043825_3273065468
#define COOKIE1_ 2092043825U
#define COOKIE2_ 3273065468U

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
  efunc_MakeVariableCommentTable = 14,
  efunc_gen_GenResultm_Simple_B1 = 15,
  efunc_GenResult = 16,
  efunc_MakeVarTablem_Simple = 17,
  efunc_MakeVarTablem_Conditions = 18,
  efunc_gen_GenResultm_Condition_A1 = 19,
  efunc_DoGenResult = 20,
  efunc_CollectStrings = 21,
  efunc_gen_Map_Z1 = 22,
  efunc_gen_GenResult_A1 = 23,
  efunc_IncVarOffset = 24,
  efunc_Sort = 25,
  efunc_MakeVariableComment = 26,
  efunc_gen_Map_Z2 = 27,
  efunc_gen_Map_Z3 = 28,
  efunc_PrintVar = 29,
  efunc_Mu = 30,
  efunc_Up = 31,
  efunc_Evm_met = 32,
  efunc_Residue = 33,
  efunc_u_u_Metau_Residue = 34,
  efunc_MapAccum = 35,
  efunc_UnBracket = 36,
  efunc_DelAccumulator = 37,
  efunc_Inc = 38,
  efunc_Dec = 39,
  efunc_GenResultm_Simple = 40,
  efunc_GenResultm_Condition = 41,
  efunc_ReplicateVar = 42,
  efunc_gen_Map_Z0 = 43,
  efunc_gen_ReplicateVar_L1D1 = 44,
  efunc_gen_ReplicateVar_L1 = 45,
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
  ident_DoMapAccumm_Aux = 58,
  ident_UnBracket = 59,
  ident_DelAccumulator = 60,
  ident_Inc = 61,
  ident_Dec = 62,
  ident_Pipe = 63,
  ident_GenResultm_Simple = 64,
  ident_GenResultm_Condition = 65,
  ident_MakeVarTablem_Simple = 66,
  ident_MakeVarTablem_Conditions = 67,
  ident_GenResult = 68,
  ident_DoGenResult = 69,
  ident_MakeVariableCommentTable = 70,
  ident_ReplicateVar = 71,
  ident_MakeVariableComment = 72,
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


static refalrts::FnResult func_gen_GenResultm_Simple_B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 25 elems
  refalrts::Iter context[25];
  refalrts::zeros( context, 25 );
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
    //TRASH: {REMOVED TILE} s.ContextOffset#2/5 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: s.ContextOffset2 #5/0 HalfReuse: </4 } Tile{ HalfReuse: & MakeVariableCommentTable/8 AsIs: e.CommonVars#2/10 HalfReuse: >/9 HalfReuse: (/1 } # CmdSpliceToFreeList/12 )/13 (/14 # CmdNextStep/15 )/16 Tile{ ]] }
    refalrts::alloc_ident(vm, context[12], identifiers[ident_CmdSpliceToFreeList]);
    refalrts::alloc_close_bracket(vm, context[13]);
    refalrts::alloc_open_bracket(vm, context[14]);
    refalrts::alloc_ident(vm, context[15], identifiers[ident_CmdNextStep]);
    refalrts::alloc_close_bracket(vm, context[16]);
    refalrts::reinit_svar( context[0], context[5] );
    refalrts::reinit_open_call(context[4]);
    refalrts::reinit_name(context[8], functions[efunc_MakeVariableCommentTable]);
    refalrts::reinit_close_call(context[9]);
    refalrts::reinit_open_bracket(context[1]);
    refalrts::link_brackets( context[14], context[16] );
    refalrts::link_brackets( context[1], context[13] );
    refalrts::push_stack( vm, context[9] );
    refalrts::push_stack( vm, context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[12], context[16] );
    res = refalrts::splice_evar( res, context[8], context[1] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
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
  //TRASH: {REMOVED TILE} s.ContextOffset#2/5 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: s.ContextOffset2 #5/0 HalfReuse: </4 } & MakeVariableCommentTable/10 Tile{ AsIs: e.CommonVars#2/6 } >/11 Tile{ AsIs: (/8 } # CmdResetAllocator/12 )/13 (/14 # CmdSetRes/15 # ARG-BEGIN/16 Tile{ AsIs: )/9 AsIs: e.ResultCommands#2/2 HalfReuse: (/1 } # CmdUseRes/17 )/18 (/19 # CmdSpliceToFreeList/20 )/21 (/22 # CmdNextStep/23 )/24 Tile{ ]] }
  refalrts::alloc_name(vm, context[10], functions[efunc_MakeVariableCommentTable]);
  refalrts::alloc_close_call(vm, context[11]);
  refalrts::alloc_ident(vm, context[12], identifiers[ident_CmdResetAllocator]);
  refalrts::alloc_close_bracket(vm, context[13]);
  refalrts::alloc_open_bracket(vm, context[14]);
  refalrts::alloc_ident(vm, context[15], identifiers[ident_CmdSetRes]);
  refalrts::alloc_ident(vm, context[16], identifiers[ident_ARGm_BEGIN]);
  refalrts::alloc_ident(vm, context[17], identifiers[ident_CmdUseRes]);
  refalrts::alloc_close_bracket(vm, context[18]);
  refalrts::alloc_open_bracket(vm, context[19]);
  refalrts::alloc_ident(vm, context[20], identifiers[ident_CmdSpliceToFreeList]);
  refalrts::alloc_close_bracket(vm, context[21]);
  refalrts::alloc_open_bracket(vm, context[22]);
  refalrts::alloc_ident(vm, context[23], identifiers[ident_CmdNextStep]);
  refalrts::alloc_close_bracket(vm, context[24]);
  refalrts::reinit_svar( context[0], context[5] );
  refalrts::reinit_open_call(context[4]);
  refalrts::reinit_open_bracket(context[1]);
  refalrts::link_brackets( context[22], context[24] );
  refalrts::link_brackets( context[19], context[21] );
  refalrts::link_brackets( context[1], context[18] );
  refalrts::link_brackets( context[14], context[9] );
  refalrts::link_brackets( context[8], context[13] );
  refalrts::push_stack( vm, context[11] );
  refalrts::push_stack( vm, context[4] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[17], context[24] );
  res = refalrts::splice_evar( res, context[9], context[1] );
  res = refalrts::splice_evar( res, context[12], context[16] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  res = refalrts::splice_evar( res, context[6], context[7] );
  res = refalrts::splice_evar( res, context[10], context[10] );
  refalrts::splice_to_freelist_open( vm, context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_GenResultm_Simple_B1("GenResult-Simple:1", COOKIE1_, COOKIE2_, func_gen_GenResultm_Simple_B1);


static refalrts::FnResult func_GenResultm_Simple(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
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
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.MarkedPattern#1/10 {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: </9 } & GenResult-Simple:1/14 Tile{ AsIs: </0 Reuse: & GenResult/4 AsIs: s.ContextOffset#1/5 HalfReuse: & MakeVarTable-Simple/8 } Tile{ AsIs: (/12 } Tile{ AsIs: e.PatternVars#1/6 } Tile{ AsIs: )/13 AsIs: e.Result#1/2 AsIs: >/1 } >/15 Tile{ ]] }
  refalrts::alloc_name(vm, context[14], functions[efunc_gen_GenResultm_Simple_B1]);
  refalrts::alloc_close_call(vm, context[15]);
  refalrts::reinit_open_call(context[9]);
  refalrts::update_name(context[4], functions[efunc_GenResult]);
  refalrts::reinit_name(context[8], functions[efunc_MakeVarTablem_Simple]);
  refalrts::push_stack( vm, context[15] );
  refalrts::push_stack( vm, context[9] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[12], context[13] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[15], context[15] );
  res = refalrts::splice_evar( res, context[13], context[1] );
  res = refalrts::splice_evar( res, context[6], context[7] );
  res = refalrts::splice_evar( res, context[12], context[12] );
  res = refalrts::splice_evar( res, context[0], context[8] );
  res = refalrts::splice_evar( res, context[14], context[14] );
  res = refalrts::splice_evar( res, context[9], context[9] );
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
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
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
  //TRASH: {REMOVED TILE} s.ContextOffset#2/5 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: s.ContextOffset2 #5/0 HalfReuse: </4 } & MakeVariableCommentTable/10 Tile{ AsIs: e.CommonVars#2/6 } >/11 Tile{ AsIs: (/8 } # CmdResetAllocator/12 )/13 (/14 # CmdSetRes/15 1/16 Tile{ AsIs: )/9 AsIs: e.ResultCommands#2/2 HalfReuse: (/1 } # CmdUseRes/17 )/18 Tile{ ]] }
  refalrts::alloc_name(vm, context[10], functions[efunc_MakeVariableCommentTable]);
  refalrts::alloc_close_call(vm, context[11]);
  refalrts::alloc_ident(vm, context[12], identifiers[ident_CmdResetAllocator]);
  refalrts::alloc_close_bracket(vm, context[13]);
  refalrts::alloc_open_bracket(vm, context[14]);
  refalrts::alloc_ident(vm, context[15], identifiers[ident_CmdSetRes]);
  refalrts::alloc_number(vm, context[16], 1UL);
  refalrts::alloc_ident(vm, context[17], identifiers[ident_CmdUseRes]);
  refalrts::alloc_close_bracket(vm, context[18]);
  refalrts::reinit_svar( context[0], context[5] );
  refalrts::reinit_open_call(context[4]);
  refalrts::reinit_open_bracket(context[1]);
  refalrts::link_brackets( context[1], context[18] );
  refalrts::link_brackets( context[14], context[9] );
  refalrts::link_brackets( context[8], context[13] );
  refalrts::push_stack( vm, context[11] );
  refalrts::push_stack( vm, context[4] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[17], context[18] );
  res = refalrts::splice_evar( res, context[9], context[1] );
  res = refalrts::splice_evar( res, context[12], context[16] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  res = refalrts::splice_evar( res, context[6], context[7] );
  res = refalrts::splice_evar( res, context[10], context[10] );
  refalrts::splice_to_freelist_open( vm, context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_GenResultm_Condition_A1("GenResult-Condition=1", COOKIE1_, COOKIE2_, func_gen_GenResultm_Condition_A1);


static refalrts::FnResult func_GenResultm_Condition(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
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
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & GenResult-Condition=1/4 } </10 & GenResult/11 Tile{ AsIs: s.ContextOffset#1/5 } & MakeVarTable-Conditions/12 Tile{ AsIs: (/8 AsIs: e.PatternVars#1/6 AsIs: )/9 AsIs: e.CondResult#1/2 AsIs: >/1 } >/13 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[10]);
  refalrts::alloc_name(vm, context[11], functions[efunc_GenResult]);
  refalrts::alloc_name(vm, context[12], functions[efunc_MakeVarTablem_Conditions]);
  refalrts::alloc_close_call(vm, context[13]);
  refalrts::update_name(context[4], functions[efunc_gen_GenResultm_Condition_A1]);
  refalrts::push_stack( vm, context[13] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[10] );
  refalrts::link_brackets( context[8], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[13], context[13] );
  res = refalrts::splice_evar( res, context[8], context[1] );
  res = refalrts::splice_evar( res, context[12], context[12] );
  res = refalrts::splice_evar( res, context[5], context[5] );
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
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[4], context[4] );
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
  res = refalrts::splice_evar( res, context[4], context[4] );
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
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
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
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoGenResult/4 } (/10 Tile{ AsIs: e.PatternVars#2/2 } )/11 (/12 )/13 (/14 )/15 Tile{ AsIs: s.ContextOffset#1/5 } </16 Tile{ HalfReuse: & CollectStrings/8 AsIs: e.Result#1/6 HalfReuse: >/9 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[10]);
  refalrts::alloc_close_bracket(vm, context[11]);
  refalrts::alloc_open_bracket(vm, context[12]);
  refalrts::alloc_close_bracket(vm, context[13]);
  refalrts::alloc_open_bracket(vm, context[14]);
  refalrts::alloc_close_bracket(vm, context[15]);
  refalrts::alloc_open_call(vm, context[16]);
  refalrts::update_name(context[4], functions[efunc_DoGenResult]);
  refalrts::reinit_name(context[8], functions[efunc_CollectStrings]);
  refalrts::reinit_close_call(context[9]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[9] );
  refalrts::push_stack( vm, context[16] );
  refalrts::link_brackets( context[14], context[15] );
  refalrts::link_brackets( context[12], context[13] );
  refalrts::link_brackets( context[10], context[11] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[8], context[9] );
  res = refalrts::splice_evar( res, context[16], context[16] );
  res = refalrts::splice_evar( res, context[5], context[5] );
  res = refalrts::splice_evar( res, context[11], context[15] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[10], context[10] );
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
  res = refalrts::splice_evar( res, context[11], context[11] );
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
        res = refalrts::splice_evar( res, context[66], context[66] );
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
        res = refalrts::splice_evar( res, context[65], context[65] );
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
        res = refalrts::splice_evar( res, context[66], context[66] );
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
      res = refalrts::splice_evar( res, context[65], context[65] );
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
      res = refalrts::splice_evar( res, context[30], context[30] );
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
      res = refalrts::splice_evar( res, context[58], context[58] );
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
        res = refalrts::splice_evar( res, context[67], context[67] );
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
        res = refalrts::splice_evar( res, context[67], context[67] );
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
        res = refalrts::splice_evar( res, context[83], context[83] );
        res = refalrts::splice_evar( res, context[56], context[57] );
        res = refalrts::splice_evar( res, context[82], context[82] );
        res = refalrts::splice_evar( res, context[81], context[81] );
        res = refalrts::splice_evar( res, context[28], context[41] );
        res = refalrts::splice_evar( res, context[69], context[15] );
        res = refalrts::splice_evar( res, context[66], context[67] );
        res = refalrts::splice_evar( res, context[16], context[16] );
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
      res = refalrts::splice_evar( res, context[82], context[82] );
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
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
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
  //RESULT: Tile{ [[ } </5 & Fetch/6 Tile{ AsIs: </0 Reuse: & Map@2/4 AsIs: e.Vars#1/2 AsIs: >/1 } [*]/7 & Pipe$2\1/8 & Sort/9 (/10 (/11 & Map/12 & MakeVariableComment/13 )/14 )/15 {*}/16 >/17 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::alloc_name(vm, context[6], functions[efunc_Fetch]);
  refalrts::alloc_closure_head(vm, context[7]);
  refalrts::alloc_name(vm, context[8], functions[efunc_gen_Pipe_S2L1]);
  refalrts::alloc_name(vm, context[9], functions[efunc_Sort]);
  refalrts::alloc_open_bracket(vm, context[10]);
  refalrts::alloc_open_bracket(vm, context[11]);
  refalrts::alloc_name(vm, context[12], functions[efunc_Map]);
  refalrts::alloc_name(vm, context[13], functions[efunc_MakeVariableComment]);
  refalrts::alloc_close_bracket(vm, context[14]);
  refalrts::alloc_close_bracket(vm, context[15]);
  refalrts::alloc_unwrapped_closure(vm, context[16], context[7]);
  refalrts::alloc_close_call(vm, context[17]);
  refalrts::update_name(context[4], functions[efunc_gen_Map_Z2]);
  refalrts::push_stack( vm, context[17] );
  refalrts::push_stack( vm, context[5] );
  refalrts::link_brackets( context[10], context[15] );
  refalrts::link_brackets( context[11], context[14] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[17] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  refalrts::wrap_closure( context[16] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_MakeVariableCommentTable("MakeVariableCommentTable", 0U, 0U, func_MakeVariableCommentTable);


static refalrts::FnResult func_gen_ReplicateVar_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
  // </0 & ReplicateVar\1/4 s.Mode#1/5 (/8 e.Index#1/6 )/9 s.ContextOffset#2/10 >/1
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
  // closed e.Index#1 as range 6
  if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: s.Mode#1: 5
  //DEBUG: e.Index#1: 6
  //DEBUG: s.ContextOffset#2: 10

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} (/8 {REMOVED TILE} )/9 s.ContextOffset#2/10 {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: s.ContextOffset2 #10/4 AsIs: s.Mode#1/5 } Tile{ AsIs: e.Index#1/6 } Tile{ HalfReuse: )/1 ]] }
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_svar( context[4], context[10] );
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[0], context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[6], context[7] );
  refalrts::splice_to_freelist_open( vm, context[5], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ReplicateVar_L1("ReplicateVar\\1", COOKIE1_, COOKIE2_, func_gen_ReplicateVar_L1);


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
  //TRASH: {REMOVED TILE} s.Mode#1/9 (/12 {REMOVED TILE} )/13 {REMOVED TILE} {REMOVED TILE} )/17 {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map@3/4 HalfReuse: s.Mode1 #9/7 } Tile{ AsIs: e.Index#1/10 } Tile{ AsIs: (/16 } Tile{ AsIs: e.ResultOccurences#1/14 } Tile{ AsIs: e.PatternOccurences#1/5 } Tile{ AsIs: )/8 AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_gen_Map_Z3]);
  refalrts::reinit_svar( context[7], context[9] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[16], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[14], context[15] );
  res = refalrts::splice_evar( res, context[16], context[16] );
  res = refalrts::splice_evar( res, context[10], context[11] );
  refalrts::splice_to_freelist_open( vm, context[7], res );
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


static refalrts::FnResult func_gen_Map_Z1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
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
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </10 s.FnMakeVarTable#1/5/11 Tile{ AsIs: t.Next#1/8 } >/12 Tile{ AsIs: </0 AsIs: & Map@1/4 AsIs: s.FnMakeVarTable#1/5 } Tile{ AsIs: e.Tail#1/6 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[10]);
    refalrts::copy_stvar(vm, context[11], context[5]);
    refalrts::alloc_close_call(vm, context[12]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[12] );
    refalrts::push_stack( vm, context[10] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[6], context[7] );
    res = refalrts::splice_evar( res, context[0], context[5] );
    res = refalrts::splice_evar( res, context[12], context[12] );
    res = refalrts::splice_evar( res, context[8], context[9] );
    res = refalrts::splice_evar( res, context[10], context[11] );
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
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  // </0 & Map@2/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & Map@2/4 t.Next#1/7 e.Tail#1/5 >/1
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
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ReplicateVar/4 AsIs: t.Next#1/7 } >/9 </10 & Map@2/11 Tile{ AsIs: e.Tail#1/5 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_close_call(vm, context[9]);
    refalrts::alloc_open_call(vm, context[10]);
    refalrts::alloc_name(vm, context[11], functions[efunc_gen_Map_Z2]);
    refalrts::update_name(context[4], functions[efunc_ReplicateVar]);
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
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Map@0/0 Reuse: & ReplicateVar/4 AsIs: e.items#0/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::reinit_name(context[0], functions[efunc_gen_Map_Z0]);
  refalrts::update_name(context[4], functions[efunc_ReplicateVar]);
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


static refalrts::FnResult func_gen_Map_Z3(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 28 elems
  refalrts::Iter context[28];
  refalrts::zeros( context, 28 );
  // </0 & Map@3/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Map@3/4 s.new#1/9 e.new#2/2 (/7 e.new#3/5 )/8 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#3 as range 5
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 2
  do {
    // </0 & Map@3/4 s.new#4/9 e.new#5/10 (/7 t.new#6/14 e.new#7/12 )/8 >/1
    context[10] = context[2];
    context[11] = context[3];
    context[12] = context[5];
    context[13] = context[6];
    // closed e.new#5 as range 10
    context[15] = refalrts::tvar_left( context[14], context[12], context[13] );
    if( ! context[15] )
      continue;
    // closed e.new#7 as range 12
    do {
      // </0 & Map@3/4 s.Mode#1/9 e.Index#1/16 (/7 s.ContextOffset#2/14 e.Tail#1/18 )/8 >/1
      context[16] = context[10];
      context[17] = context[11];
      context[18] = context[12];
      context[19] = context[13];
      if( ! refalrts::svar_term( context[14], context[14] ) )
        continue;
      // closed e.Index#1 as range 16
      // closed e.Tail#1 as range 18
      //DEBUG: s.ContextOffset#2: 14
      //DEBUG: s.Mode#1: 9
      //DEBUG: e.Index#1: 16
      //DEBUG: e.Tail#1: 18

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } (/20 Tile{ AsIs: s.ContextOffset#2/14 } s.Mode#1/9/21 e.Index#1/16/22 )/24 Tile{ AsIs: </0 AsIs: & Map@3/4 AsIs: s.Mode#1/9 AsIs: e.Index#1/16 AsIs: (/7 } Tile{ AsIs: e.Tail#1/18 } Tile{ AsIs: )/8 AsIs: >/1 ]] }
      refalrts::alloc_open_bracket(vm, context[20]);
      refalrts::copy_stvar(vm, context[21], context[9]);
      refalrts::copy_evar(vm, context[22], context[23], context[16], context[17]);
      refalrts::alloc_close_bracket(vm, context[24]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::link_brackets( context[20], context[24] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[18], context[19] );
      res = refalrts::splice_evar( res, context[0], context[7] );
      res = refalrts::splice_evar( res, context[21], context[24] );
      res = refalrts::splice_evar( res, context[14], context[14] );
      res = refalrts::splice_evar( res, context[20], context[20] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Map@3/4 s.Mode#1/9 e.Index#1/16 (/7 t.Next#1/14 e.Tail#1/18 )/8 >/1
    context[16] = context[10];
    context[17] = context[11];
    context[18] = context[12];
    context[19] = context[13];
    // closed e.Index#1 as range 16
    // closed e.Tail#1 as range 18
    //DEBUG: t.Next#1: 14
    //DEBUG: s.Mode#1: 9
    //DEBUG: e.Index#1: 16
    //DEBUG: e.Tail#1: 18

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </20 & ReplicateVar\1*1/21 s.Mode#1/9/22 (/23 e.Index#1/16/24 )/26 Tile{ AsIs: t.Next#1/14 } >/27 Tile{ AsIs: </0 AsIs: & Map@3/4 AsIs: s.Mode#1/9 AsIs: e.Index#1/16 AsIs: (/7 } Tile{ AsIs: e.Tail#1/18 } Tile{ AsIs: )/8 AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[20]);
    refalrts::alloc_name(vm, context[21], functions[efunc_gen_ReplicateVar_L1D1]);
    refalrts::copy_stvar(vm, context[22], context[9]);
    refalrts::alloc_open_bracket(vm, context[23]);
    refalrts::copy_evar(vm, context[24], context[25], context[16], context[17]);
    refalrts::alloc_close_bracket(vm, context[26]);
    refalrts::alloc_close_call(vm, context[27]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::push_stack( vm, context[27] );
    refalrts::push_stack( vm, context[20] );
    refalrts::link_brackets( context[23], context[26] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[18], context[19] );
    res = refalrts::splice_evar( res, context[0], context[7] );
    res = refalrts::splice_evar( res, context[27], context[27] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    res = refalrts::splice_evar( res, context[20], context[26] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Map@3/4 s.Mode#1/9 e.Index#1/10 (/7 )/8 >/1
    context[10] = context[2];
    context[11] = context[3];
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    // closed e.Index#1 as range 10
    //DEBUG: s.Mode#1: 9
    //DEBUG: e.Index#1: 10

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Map@3/4 s.Mode#1/9 e.Index#1/10 (/7 )/8 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Map@3/4 s.Mode#1/9 e.Index#1/2 (/7 e.items#0/5 )/8 >/1
  // closed e.Index#1 as range 2
  // closed e.items#0 as range 5
  //DEBUG: s.Mode#1: 9
  //DEBUG: e.Index#1: 2
  //DEBUG: e.items#0: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map@0/4 } [*]/10 & ReplicateVar\1/11 Tile{ AsIs: s.Mode#1/9 } Tile{ AsIs: (/7 } Tile{ AsIs: e.Index#1/2 } Tile{ AsIs: )/8 } {*}/12 Tile{ AsIs: e.items#0/5 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_closure_head(vm, context[10]);
  refalrts::alloc_name(vm, context[11], functions[efunc_gen_ReplicateVar_L1]);
  refalrts::alloc_unwrapped_closure(vm, context[12], context[10]);
  refalrts::update_name(context[4], functions[efunc_gen_Map_Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[12], context[12] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[9], context[9] );
  res = refalrts::splice_evar( res, context[10], context[11] );
  refalrts::use( res );
  refalrts::wrap_closure( context[12] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Map_Z3("Map@3", COOKIE1_, COOKIE2_, func_gen_Map_Z3);


//End of file
