// This file automatically generated from 'HighLevelRASL-DisjointFunc.sref'
// Don't edit! Edit 'HighLevelRASL-DisjointFunc.sref' and recompile it

#include "refalrts.h"

#define cookie_ns cookie_ns_489263093_1433179658
static const refalrts::IdentReference ident_CmdFail("CmdFail");
static const refalrts::IdentReference ident_CmdIssueMemory("CmdIssueMemory");
static const refalrts::IdentReference ident_CmdOpenELoop("CmdOpenELoop");
static const refalrts::IdentReference ident_CmdSentence("CmdSentence");
static const refalrts::IdentReference ident_Function("Function");
static refalrts::ExternalReference ref_Fetch("Fetch", 0U, 0U);
static refalrts::ExternalReference ref_GenPattern("GenPattern", 0U, 0U);
static refalrts::ExternalReference ref_GenResult("GenResult", 0U, 0U);
static refalrts::ExternalReference ref_HighLevelRASLm_Functionm_Disjoint("HighLevelRASL-Function-Disjoint", 0U, 0U);
static refalrts::ExternalReference ref_gen_HighLevelRASLm_Functionm_Disjoint_A1("HighLevelRASL-Function-Disjoint=1", 489263093U, 1433179658U);
static refalrts::ExternalReference ref_gen_HighLevelRASLm_Functionm_Disjoint_A1L1("HighLevelRASL-Function-Disjoint=1\\1", 489263093U, 1433179658U);
static refalrts::ExternalReference ref_gen_HighLevelRASLm_Functionm_Disjoint_A2("HighLevelRASL-Function-Disjoint=2", 489263093U, 1433179658U);
static refalrts::ExternalReference ref_gen_HighLevelRASLm_Functionm_Disjoint_A2L1("HighLevelRASL-Function-Disjoint=2\\1", 489263093U, 1433179658U);
static refalrts::ExternalReference ref_gen_HighLevelRASLm_Functionm_Disjoint_L1("HighLevelRASL-Function-Disjoint\\1", 489263093U, 1433179658U);
static refalrts::ExternalReference ref_Map("Map", 0U, 0U);
static refalrts::ExternalReference ref_MapReduce("MapReduce", 0U, 0U);
static refalrts::ExternalReference ref_Max("Max", 0U, 0U);

static refalrts::FnResult func_gen_HighLevelRASLm_Functionm_Disjoint_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  // </0 & HighLevelRASL-Function-Disjoint\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & HighLevelRASL-Function-Disjoint\1/4 e.Commands#4/5 (/9 # CmdOpenELoop/11 e.OpenELoop#4/7 )/10 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[7] = 0;
    context[8] = 0;
    context[9] = refalrts::brackets_right( context[7], context[8], context[5], context[6] );
    if( ! context[9] )
      continue;
    refalrts::bracket_pointers(context[9], context[10]);
    context[11] = refalrts::ident_left(  ident_CmdOpenELoop.ref(vm), context[7], context[8] );
    if( ! context[11] )
      continue;
    // closed e.Commands#4 as range 5
    // closed e.OpenELoop#4 as range 7
    //DEBUG: e.Commands#4: 5
    //DEBUG: e.OpenELoop#4: 7

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: e.Commands#4/5 } Tile{ AsIs: (/9 AsIs: # CmdOpenELoop/11 AsIs: e.OpenELoop#4/7 AsIs: )/10 HalfReuse: (/1 } Tile{ HalfReuse: # CmdFail/0 HalfReuse: )/4 } Tile{ ]] }
    refalrts::reinit_open_bracket( context[1] );
    refalrts::reinit_ident( context[0], ident_CmdFail.ref(vm) );
    refalrts::reinit_close_bracket( context[4] );
    refalrts::link_brackets( context[1], context[4] );
    refalrts::link_brackets( context[9], context[10] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[9], context[1] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & HighLevelRASL-Function-Disjoint\1/4 e.LastSentence#4/2 >/1
  // closed e.LastSentence#4 as range 2
  //DEBUG: e.LastSentence#4: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & HighLevelRASL-Function-Disjoint\1/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.LastSentence#4/2 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_HighLevelRASLm_Functionm_Disjoint_L1("HighLevelRASL-Function-Disjoint\\1", 489263093U, 1433179658U, func_gen_HighLevelRASLm_Functionm_Disjoint_L1);


static refalrts::FnResult func_gen_HighLevelRASLm_Functionm_Disjoint_A2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
  // </0 & HighLevelRASL-Function-Disjoint=2/4 s.ScopeClass#1/5 (/8 e.Name#1/6 )/9 (/12 e.LastSentence#2/10 )/13 s.MaxMemory#3/14 e.Sentences#3/2 >/1
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
  // closed e.Name#1 as range 6
  // closed e.LastSentence#2 as range 10
  if( ! refalrts::svar_left( context[14], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Sentences#3 as range 2
  //DEBUG: s.ScopeClass#1: 5
  //DEBUG: e.Name#1: 6
  //DEBUG: e.LastSentence#2: 10
  //DEBUG: s.MaxMemory#3: 14
  //DEBUG: e.Sentences#3: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # Function/4 AsIs: s.ScopeClass#1/5 AsIs: (/8 AsIs: e.Name#1/6 AsIs: )/9 AsIs: (/12 } Tile{ HalfReuse: # CmdIssueMemory/13 AsIs: s.MaxMemory#3/14 } )/15 Tile{ AsIs: e.Sentences#3/2 } </16 & Fetch/17 Tile{ AsIs: e.LastSentence#2/10 } & HighLevelRASL-Function-Disjoint\1/18 >/19 Tile{ HalfReuse: )/1 ]] }
  if( ! refalrts::alloc_close_bracket( vm, context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( vm, context[16] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[17], ref_Fetch.ref(vm) ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[18], ref_gen_HighLevelRASLm_Functionm_Disjoint_L1.ref(vm) ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( vm, context[19] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_ident( context[4], ident_Function.ref(vm) );
  refalrts::reinit_ident( context[13], ident_CmdIssueMemory.ref(vm) );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[0], context[1] );
  refalrts::push_stack( vm, context[19] );
  refalrts::push_stack( vm, context[16] );
  refalrts::link_brackets( context[12], context[15] );
  refalrts::link_brackets( context[8], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[18], context[19] );
  res = refalrts::splice_evar( res, context[10], context[11] );
  res = refalrts::splice_evar( res, context[16], context[17] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[15], context[15] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_HighLevelRASLm_Functionm_Disjoint_A2("HighLevelRASL-Function-Disjoint=2", 489263093U, 1433179658U, func_gen_HighLevelRASLm_Functionm_Disjoint_A2);


static refalrts::FnResult func_gen_HighLevelRASLm_Functionm_Disjoint_A2L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
  // </0 & HighLevelRASL-Function-Disjoint=2\1/4 s.MaxMemory#3/14 (/7 (/11 # CmdIssueMemory/13 s.Memory#3/15 )/12 e.Sentence#3/5 )/8 >/1
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
  context[13] = refalrts::ident_left(  ident_CmdIssueMemory.ref(vm), context[9], context[10] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  // closed e.Sentence#3 as range 5
  if( ! refalrts::svar_left( context[14], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[15], context[9], context[10] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[9], context[10] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: e.Sentence#3: 5
  //DEBUG: s.MaxMemory#3: 14
  //DEBUG: s.Memory#3: 15

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} s.Memory#3/15 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Max/4 AsIs: s.MaxMemory#3/14 HalfReuse: s.Memory3 #15/7 HalfReuse: >/11 HalfReuse: (/13 } Tile{ HalfReuse: # CmdSentence/12 AsIs: e.Sentence#3/5 AsIs: )/8 } Tile{ ]] }
  refalrts::update_name( context[4], ref_Max.ref(vm) );
  refalrts::reinit_svar( context[7], context[15] );
  refalrts::reinit_close_call( context[11] );
  refalrts::reinit_open_bracket( context[13] );
  refalrts::reinit_ident( context[12], ident_CmdSentence.ref(vm) );
  refalrts::link_brackets( context[13], context[8] );
  refalrts::push_stack( vm, context[11] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[12], context[8] );
  refalrts::splice_to_freelist_open( vm, context[13], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_HighLevelRASLm_Functionm_Disjoint_A2L1("HighLevelRASL-Function-Disjoint=2\\1", 489263093U, 1433179658U, func_gen_HighLevelRASLm_Functionm_Disjoint_A2L1);


static refalrts::FnResult func_gen_HighLevelRASLm_Functionm_Disjoint_A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  // issue here memory for vars with 23 elems
  refalrts::Iter context[23];
  refalrts::zeros( context, 23 );
  // </0 & HighLevelRASL-Function-Disjoint=1/4 s.ScopeClass#1/14 (/17 e.Name#1/15 )/18 e.Sentences#2/2 (/7 (/11 # CmdIssueMemory/13 s.LastMemory#2/19 )/12 e.LastSentence#2/5 )/8 >/1
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
  context[13] = refalrts::ident_left(  ident_CmdIssueMemory.ref(vm), context[9], context[10] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  // closed e.LastSentence#2 as range 5
  if( ! refalrts::svar_left( context[14], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[15] = 0;
  context[16] = 0;
  context[17] = refalrts::brackets_left( context[15], context[16], context[2], context[3] );
  if( ! context[17] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[17], context[18]);
  // closed e.Name#1 as range 15
  // closed e.Sentences#2 as range 2
  if( ! refalrts::svar_left( context[19], context[9], context[10] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[9], context[10] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: e.LastSentence#2: 5
  //DEBUG: s.ScopeClass#1: 14
  //DEBUG: e.Name#1: 15
  //DEBUG: e.Sentences#2: 2
  //DEBUG: s.LastMemory#2: 19

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </20 Tile{ HalfReuse: [*]/0 Reuse: & HighLevelRASL-Function-Disjoint=2/4 AsIs: s.ScopeClass#1/14 AsIs: (/17 AsIs: e.Name#1/15 AsIs: )/18 } Tile{ HalfReuse: (/12 AsIs: e.LastSentence#2/5 AsIs: )/8 HalfReuse: {*}/1 } Tile{ HalfReuse: </7 HalfReuse: & MapReduce/11 HalfReuse: & HighLevelRASL-Function-Disjoint=2\1/13 AsIs: s.LastMemory#2/19 } Tile{ AsIs: e.Sentences#2/2 } >/21 >/22 Tile{ ]] }
  if( ! refalrts::alloc_open_call( vm, context[20] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( vm, context[21] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( vm, context[22] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_closure_head( context[0] );
  refalrts::update_name( context[4], ref_gen_HighLevelRASLm_Functionm_Disjoint_A2.ref(vm) );
  refalrts::reinit_open_bracket( context[12] );
  refalrts::reinit_unwrapped_closure( context[1], context[0] );
  refalrts::reinit_open_call( context[7] );
  refalrts::reinit_name( context[11], ref_MapReduce.ref(vm) );
  refalrts::reinit_name( context[13], ref_gen_HighLevelRASLm_Functionm_Disjoint_A2L1.ref(vm) );
  refalrts::push_stack( vm, context[22] );
  refalrts::push_stack( vm, context[20] );
  refalrts::push_stack( vm, context[21] );
  refalrts::push_stack( vm, context[7] );
  refalrts::link_brackets( context[12], context[8] );
  refalrts::link_brackets( context[17], context[18] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[21], context[22] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[7], context[19] );
  res = refalrts::splice_evar( res, context[12], context[1] );
  res = refalrts::splice_evar( res, context[0], context[18] );
  res = refalrts::splice_evar( res, context[20], context[20] );
  refalrts::use( res );
  refalrts::wrap_closure( context[1] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_HighLevelRASLm_Functionm_Disjoint_A1("HighLevelRASL-Function-Disjoint=1", 489263093U, 1433179658U, func_gen_HighLevelRASLm_Functionm_Disjoint_A1);


static refalrts::FnResult func_gen_HighLevelRASLm_Functionm_Disjoint_A1L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  // issue here memory for vars with 26 elems
  refalrts::Iter context[26];
  refalrts::zeros( context, 26 );
  // </0 & HighLevelRASL-Function-Disjoint=1\1/4 s.FnGenResult#1/21 s.FnGenSubst#1/22 (/15 e.Name#1/13 )/16 (/7 (/11 e.Pattern#2/9 )/12 e.Conditions#2/5 (/19 e.Result#2/17 )/20 )/8 >/1
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
  context[13] = 0;
  context[14] = 0;
  context[15] = refalrts::brackets_right( context[13], context[14], context[2], context[3] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[15], context[16]);
  context[17] = 0;
  context[18] = 0;
  context[19] = refalrts::brackets_right( context[17], context[18], context[5], context[6] );
  if( ! context[19] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[19], context[20]);
  // closed e.Name#1 as range 13
  // closed e.Pattern#2 as range 9
  // closed e.Conditions#2 as range 5
  // closed e.Result#2 as range 17
  if( ! refalrts::svar_left( context[21], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[22], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: e.Name#1: 13
  //DEBUG: e.Pattern#2: 9
  //DEBUG: e.Conditions#2: 5
  //DEBUG: e.Result#2: 17
  //DEBUG: s.FnGenResult#1: 21
  //DEBUG: s.FnGenSubst#1: 22

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/11 } Tile{ AsIs: </0 Reuse: & GenResult/4 AsIs: s.FnGenResult#1/21 } Tile{ AsIs: (/7 } Tile{ AsIs: e.Conditions#2/5 } Tile{ AsIs: )/12 } Tile{ AsIs: (/19 AsIs: e.Result#2/17 AsIs: )/20 HalfReuse: </8 HalfReuse: & GenPattern/1 } Tile{ AsIs: s.FnGenSubst#1/22 AsIs: (/15 AsIs: e.Name#1/13 AsIs: )/16 } Tile{ AsIs: e.Pattern#2/9 } >/23 >/24 )/25 Tile{ ]] }
  if( ! refalrts::alloc_close_call( vm, context[23] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( vm, context[24] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[25] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_GenResult.ref(vm) );
  refalrts::reinit_open_call( context[8] );
  refalrts::reinit_name( context[1], ref_GenPattern.ref(vm) );
  refalrts::link_brackets( context[11], context[25] );
  refalrts::push_stack( vm, context[24] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[23] );
  refalrts::push_stack( vm, context[8] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[19], context[20] );
  refalrts::link_brackets( context[7], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[23], context[25] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[22], context[16] );
  res = refalrts::splice_evar( res, context[19], context[1] );
  res = refalrts::splice_evar( res, context[12], context[12] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[0], context[21] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_HighLevelRASLm_Functionm_Disjoint_A1L1("HighLevelRASL-Function-Disjoint=1\\1", 489263093U, 1433179658U, func_gen_HighLevelRASLm_Functionm_Disjoint_A1L1);


static refalrts::FnResult func_HighLevelRASLm_Functionm_Disjoint(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  // issue here memory for vars with 24 elems
  refalrts::Iter context[24];
  refalrts::zeros( context, 24 );
  // </0 & HighLevelRASL-Function-Disjoint/4 s.FnGenSubst#1/5 s.FnGenResult#1/6 s.ScopeClass#1/7 (/10 e.Name#1/8 )/11 e.Sentences#1/2 >/1
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
  //DEBUG: s.FnGenSubst#1: 5
  //DEBUG: s.FnGenResult#1: 6
  //DEBUG: s.ScopeClass#1: 7
  //DEBUG: e.Name#1: 8
  //DEBUG: e.Sentences#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 HalfReuse: [*]/4 } & HighLevelRASL-Function-Disjoint=1/12 Tile{ AsIs: s.ScopeClass#1/7 AsIs: (/10 AsIs: e.Name#1/8 AsIs: )/11 } {*}/13 </14 & Map/15 [*]/16 & HighLevelRASL-Function-Disjoint=1\1/17 Tile{ AsIs: s.FnGenResult#1/6 } Tile{ AsIs: s.FnGenSubst#1/5 } (/18 e.Name#1/8/19 )/21 {*}/22 Tile{ AsIs: e.Sentences#1/2 } >/23 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_name( vm, context[12], ref_gen_HighLevelRASLm_Functionm_Disjoint_A1.ref(vm) ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_unwrapped_closure( vm, context[13], context[4] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( vm, context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[15], ref_Map.ref(vm) ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_closure_head( vm, context[16] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[17], ref_gen_HighLevelRASLm_Functionm_Disjoint_A1L1.ref(vm) ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( vm, context[18] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(vm, context[19], context[20], context[8], context[9]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[21] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_unwrapped_closure( vm, context[22], context[16] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( vm, context[23] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_closure_head( context[4] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[23] );
  refalrts::push_stack( vm, context[14] );
  refalrts::link_brackets( context[18], context[21] );
  refalrts::link_brackets( context[10], context[11] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[23], context[23] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[18], context[22] );
  res = refalrts::splice_evar( res, context[5], context[5] );
  res = refalrts::splice_evar( res, context[6], context[6] );
  res = refalrts::splice_evar( res, context[13], context[17] );
  res = refalrts::splice_evar( res, context[7], context[11] );
  res = refalrts::splice_evar( res, context[12], context[12] );
  refalrts::use( res );
  refalrts::wrap_closure( context[13] );
  refalrts::wrap_closure( context[22] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_HighLevelRASLm_Functionm_Disjoint("HighLevelRASL-Function-Disjoint", 0U, 0U, func_HighLevelRASLm_Functionm_Disjoint);


//End of file
