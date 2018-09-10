// This file automatically generated from 'HighLevelRASL-Condition.sref'
// Don't edit! Edit 'HighLevelRASL-Condition.sref' and recompile it

#include "refalrts.h"

#define cookie_ns cookie_ns_190303813_3640286464
static const refalrts::IdentReference ident_CmdCallCondition("CmdCallCondition");
static const refalrts::IdentReference ident_CmdFail("CmdFail");
static const refalrts::IdentReference ident_CmdProfileFunction("CmdProfileFunction");
static const refalrts::IdentReference ident_CmdSentence("CmdSentence");
static const refalrts::IdentReference ident_CmdSpliceToFreeListm_Range("CmdSpliceToFreeList-Range");
static const refalrts::IdentReference ident_Condition("Condition");
static const refalrts::IdentReference ident_TkCloseCallCond("TkCloseCallCond");
static const refalrts::IdentReference ident_TkName("TkName");
static const refalrts::IdentReference ident_TkOpenCallCond("TkOpenCallCond");
static refalrts::ExternalReference ref_FoldOpenELoops("FoldOpenELoops", 0U, 0U);
static refalrts::ExternalReference ref_GenInitSubst("GenInitSubst", 0U, 0U);
static refalrts::ExternalReference ref_GenResultm_Condition("GenResult-Condition", 0U, 0U);
static refalrts::ExternalReference ref_GenSubstm_Save("GenSubst-Save", 0U, 0U);
static refalrts::ExternalReference ref_Inc("Inc", 0U, 0U);
static refalrts::ExternalReference ref_Inc2("Inc2", 0U, 0U);
static refalrts::ExternalReference ref_Max("Max", 0U, 0U);
static refalrts::ExternalReference ref_PutVariableDebugTable("PutVariableDebugTable", 0U, 0U);
static refalrts::ExternalReference ref_SentenceTail("SentenceTail", 0U, 0U);
static refalrts::ExternalReference ref_gen_SentenceTail_S1A1("SentenceTail$1=1", 190303813U, 3640286464U);
static refalrts::ExternalReference ref_gen_SentenceTail_S1A2("SentenceTail$1=2", 190303813U, 3640286464U);
static refalrts::ExternalReference ref_gen_SentenceTail_S1A3("SentenceTail$1=3", 190303813U, 3640286464U);
static refalrts::ExternalReference ref_gen_SentenceTail_S1A4("SentenceTail$1=4", 190303813U, 3640286464U);
static refalrts::ExternalReference ref_gen_SentenceTail_S1A5("SentenceTail$1=5", 190303813U, 3640286464U);
static refalrts::ExternalReference ref_gen_SentenceTail_S1A6("SentenceTail$1=6", 190303813U, 3640286464U);
static refalrts::ExternalReference ref_gen_SentenceTail_S1A7("SentenceTail$1=7", 190303813U, 3640286464U);
static refalrts::ExternalReference ref_gen_SentenceTail_S1A8("SentenceTail$1=8", 190303813U, 3640286464U);

static refalrts::FnResult func_gen_SentenceTail_S1A8(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
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
  if( ! refalrts::alloc_ident( vm, context[10], ident_CmdCallCondition.ref(vm) ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( vm, context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( vm, context[12], ident_CmdProfileFunction.ref(vm) ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( vm, context[13], ident_CmdFail.ref(vm) ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[14] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_svar( context[0], context[5] );
  refalrts::reinit_close_bracket( context[4] );
  refalrts::reinit_open_bracket( context[1] );
  refalrts::link_brackets( context[1], context[14] );
  refalrts::link_brackets( context[11], context[9] );
  refalrts::link_brackets( context[8], context[4] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[9], context[1] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_evar( res, context[4], context[4] );
  res = refalrts::splice_evar( res, context[10], context[10] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[6], context[7] );
  refalrts::splice_to_freelist_open( vm, context[0], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_SentenceTail_S1A8("SentenceTail$1=8", 190303813U, 3640286464U, func_gen_SentenceTail_S1A8);


static refalrts::FnResult func_gen_SentenceTail_S1A7(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  // issue here memory for vars with 36 elems
  refalrts::Iter context[36];
  refalrts::zeros( context, 36 );
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
  //RESULT: Tile{ [[ } </23 [*]/24 Tile{ HalfReuse: & SentenceTail$1=8/0 HalfReuse: s.StackTop8 #22/4 AsIs: (/7 AsIs: e.CondResultCommands#2/5 AsIs: )/8 HalfReuse: {*}/11 } (/25 # CmdSentence/26 </27 & FoldOpenELoops/28 Tile{ AsIs: e.CondPatternCommands#4/9 } Tile{ HalfReuse: </12 HalfReuse: & PutVariableDebugTable/15 AsIs: e.PatternVars#4/13 HalfReuse: >/16 } Tile{ AsIs: e.NestedSentence#7/17 } >/29 )/30 Tile{ AsIs: (/19 } # CmdSpliceToFreeList-Range/31 s.StartOffsetCond#1/21/32 </33 Tile{ HalfReuse: & Inc/20 AsIs: s.StartOffsetCond#1/21 } >/34 )/35 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( vm, context[23] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_closure_head( vm, context[24] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( vm, context[25] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( vm, context[26], ident_CmdSentence.ref(vm) ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( vm, context[27] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[28], ref_FoldOpenELoops.ref(vm) ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( vm, context[29] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[30] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( vm, context[31], ident_CmdSpliceToFreeListm_Range.ref(vm) ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_stvar(vm, context[32], context[21]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( vm, context[33] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( vm, context[34] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[35] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_name( context[0], ref_gen_SentenceTail_S1A8.ref(vm) );
  refalrts::reinit_svar( context[4], context[22] );
  refalrts::reinit_unwrapped_closure( context[11], context[24] );
  refalrts::reinit_open_call( context[12] );
  refalrts::reinit_name( context[15], ref_PutVariableDebugTable.ref(vm) );
  refalrts::reinit_close_call( context[16] );
  refalrts::reinit_name( context[20], ref_Inc.ref(vm) );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[23] );
  refalrts::link_brackets( context[19], context[35] );
  refalrts::push_stack( vm, context[34] );
  refalrts::push_stack( vm, context[33] );
  refalrts::link_brackets( context[25], context[30] );
  refalrts::push_stack( vm, context[29] );
  refalrts::push_stack( vm, context[27] );
  refalrts::push_stack( vm, context[16] );
  refalrts::push_stack( vm, context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[34], context[35] );
  res = refalrts::splice_evar( res, context[20], context[21] );
  res = refalrts::splice_evar( res, context[31], context[33] );
  res = refalrts::splice_evar( res, context[19], context[19] );
  res = refalrts::splice_evar( res, context[29], context[30] );
  res = refalrts::splice_evar( res, context[17], context[18] );
  res = refalrts::splice_evar( res, context[12], context[16] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[25], context[28] );
  res = refalrts::splice_evar( res, context[0], context[11] );
  res = refalrts::splice_evar( res, context[23], context[24] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  refalrts::wrap_closure( context[11] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_SentenceTail_S1A7("SentenceTail$1=7", 190303813U, 3640286464U, func_gen_SentenceTail_S1A7);


static refalrts::FnResult func_gen_SentenceTail_S1A6(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  // issue here memory for vars with 27 elems
  refalrts::Iter context[27];
  refalrts::zeros( context, 27 );
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
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </20 Tile{ HalfReuse: [*]/0 Reuse: & SentenceTail$1=7/4 AsIs: (/7 AsIs: e.CondResultCommands#2/5 AsIs: )/8 AsIs: (/11 AsIs: e.CondPatternCommands#4/9 AsIs: )/12 AsIs: (/15 AsIs: e.PatternVars#4/13 AsIs: )/16 } (/21 Tile{ AsIs: e.NestedSentence#7/2 } )/22 Tile{ AsIs: s.StartOffsetCond#1/17 } {*}/23 </24 & Max/25 Tile{ AsIs: s.EndOffsetCond-Res#2/18 AsIs: s.NestedStackTop#7/19 } >/26 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( vm, context[20] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( vm, context[21] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[22] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_unwrapped_closure( vm, context[23], context[0] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( vm, context[24] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[25], ref_Max.ref(vm) ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( vm, context[26] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_closure_head( context[0] );
  refalrts::update_name( context[4], ref_gen_SentenceTail_S1A7.ref(vm) );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[20] );
  refalrts::push_stack( vm, context[26] );
  refalrts::push_stack( vm, context[24] );
  refalrts::link_brackets( context[21], context[22] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[26], context[26] );
  res = refalrts::splice_evar( res, context[18], context[19] );
  res = refalrts::splice_evar( res, context[23], context[25] );
  res = refalrts::splice_evar( res, context[17], context[17] );
  res = refalrts::splice_evar( res, context[22], context[22] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[21], context[21] );
  res = refalrts::splice_evar( res, context[0], context[16] );
  res = refalrts::splice_evar( res, context[20], context[20] );
  refalrts::use( res );
  refalrts::wrap_closure( context[23] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_SentenceTail_S1A6("SentenceTail$1=6", 190303813U, 3640286464U, func_gen_SentenceTail_S1A6);


static refalrts::FnResult func_gen_SentenceTail_S1A5(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  // issue here memory for vars with 37 elems
  refalrts::Iter context[37];
  refalrts::zeros( context, 37 );
  // </0 & SentenceTail$1=5/4 (/7 e.CondResultCommands#2/5 )/8 (/11 e.CondPatternCommands#4/9 )/12 (/15 e.PatternVars#4/13 )/16 s.StartOffsetCond#1/17 s.EndOffsetCond-Res#2/18 s.StartOffsetCondNext#4/19 (/22 e.ConditionsTail#1/20 )/23 (/26 e.ResultSentence#1/24 )/27 e.MarkedPattern#6/2 >/1
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
  context[20] = 0;
  context[21] = 0;
  context[22] = refalrts::brackets_left( context[20], context[21], context[2], context[3] );
  if( ! context[22] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[22], context[23]);
  context[24] = 0;
  context[25] = 0;
  context[26] = refalrts::brackets_left( context[24], context[25], context[2], context[3] );
  if( ! context[26] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[26], context[27]);
  // closed e.ConditionsTail#1 as range 20
  // closed e.ResultSentence#1 as range 24
  // closed e.MarkedPattern#6 as range 2
  //DEBUG: e.CondResultCommands#2: 5
  //DEBUG: e.CondPatternCommands#4: 9
  //DEBUG: e.PatternVars#4: 13
  //DEBUG: s.StartOffsetCond#1: 17
  //DEBUG: s.EndOffsetCond-Res#2: 18
  //DEBUG: s.StartOffsetCondNext#4: 19
  //DEBUG: e.ConditionsTail#1: 20
  //DEBUG: e.ResultSentence#1: 24
  //DEBUG: e.MarkedPattern#6: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </28 Tile{ HalfReuse: [*]/0 Reuse: & SentenceTail$1=6/4 AsIs: (/7 AsIs: e.CondResultCommands#2/5 AsIs: )/8 AsIs: (/11 AsIs: e.CondPatternCommands#4/9 AsIs: )/12 AsIs: (/15 AsIs: e.PatternVars#4/13 AsIs: )/16 AsIs: s.StartOffsetCond#1/17 AsIs: s.EndOffsetCond-Res#2/18 } {*}/29 </30 & SentenceTail/31 Tile{ AsIs: s.StartOffsetCondNext#4/19 AsIs: (/22 } e.PatternVars#4/13/32 Tile{ AsIs: )/23 } (/34 Tile{ AsIs: e.MarkedPattern#6/2 } )/35 Tile{ AsIs: e.ConditionsTail#1/20 } Tile{ AsIs: (/26 AsIs: e.ResultSentence#1/24 AsIs: )/27 } >/36 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( vm, context[28] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_unwrapped_closure( vm, context[29], context[0] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( vm, context[30] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[31], ref_SentenceTail.ref(vm) ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(vm, context[32], context[33], context[13], context[14]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( vm, context[34] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[35] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( vm, context[36] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_closure_head( context[0] );
  refalrts::update_name( context[4], ref_gen_SentenceTail_S1A6.ref(vm) );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[28] );
  refalrts::push_stack( vm, context[36] );
  refalrts::push_stack( vm, context[30] );
  refalrts::link_brackets( context[26], context[27] );
  refalrts::link_brackets( context[34], context[35] );
  refalrts::link_brackets( context[22], context[23] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[36], context[36] );
  res = refalrts::splice_evar( res, context[26], context[27] );
  res = refalrts::splice_evar( res, context[20], context[21] );
  res = refalrts::splice_evar( res, context[35], context[35] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[34], context[34] );
  res = refalrts::splice_evar( res, context[23], context[23] );
  res = refalrts::splice_evar( res, context[32], context[33] );
  res = refalrts::splice_evar( res, context[19], context[22] );
  res = refalrts::splice_evar( res, context[29], context[31] );
  res = refalrts::splice_evar( res, context[0], context[18] );
  res = refalrts::splice_evar( res, context[28], context[28] );
  refalrts::use( res );
  refalrts::wrap_closure( context[29] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_SentenceTail_S1A5("SentenceTail$1=5", 190303813U, 3640286464U, func_gen_SentenceTail_S1A5);


static refalrts::FnResult func_gen_SentenceTail_S1A4(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  // issue here memory for vars with 34 elems
  refalrts::Iter context[34];
  refalrts::zeros( context, 34 );
  // </0 & SentenceTail$1=4/4 (/7 e.CondResultCommands#2/5 )/8 (/11 e.CondPatternCommands#4/9 )/12 (/15 e.PatternVars#4/13 )/16 s.StartOffsetCond#1/17 s.EndOffsetCond-Res#2/18 s.StartOffsetCondNext#4/19 (/22 e.ConditionsTail#1/20 )/23 (/26 e.ResultSentence#1/24 )/27 (/30 e.MarkedPatternCond#4/28 )/31 e.MarkedPatternPrefix#5/2 t.CloseCall#5/32 >/1
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
  context[20] = 0;
  context[21] = 0;
  context[22] = refalrts::brackets_left( context[20], context[21], context[2], context[3] );
  if( ! context[22] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[22], context[23]);
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
  // closed e.ConditionsTail#1 as range 20
  // closed e.ResultSentence#1 as range 24
  // closed e.MarkedPatternCond#4 as range 28
  context[33] = refalrts::tvar_right( context[32], context[2], context[3] );
  if( ! context[33] )
    return refalrts::cRecognitionImpossible;
  // closed e.MarkedPatternPrefix#5 as range 2
  //DEBUG: e.CondResultCommands#2: 5
  //DEBUG: e.CondPatternCommands#4: 9
  //DEBUG: e.PatternVars#4: 13
  //DEBUG: s.StartOffsetCond#1: 17
  //DEBUG: s.EndOffsetCond-Res#2: 18
  //DEBUG: s.StartOffsetCondNext#4: 19
  //DEBUG: e.ConditionsTail#1: 20
  //DEBUG: e.ResultSentence#1: 24
  //DEBUG: e.MarkedPatternCond#4: 28
  //DEBUG: t.CloseCall#5: 32
  //DEBUG: e.MarkedPatternPrefix#5: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: </31 } Tile{ HalfReuse: [*]/0 Reuse: & SentenceTail$1=5/4 AsIs: (/7 AsIs: e.CondResultCommands#2/5 AsIs: )/8 AsIs: (/11 AsIs: e.CondPatternCommands#4/9 AsIs: )/12 AsIs: (/15 AsIs: e.PatternVars#4/13 AsIs: )/16 AsIs: s.StartOffsetCond#1/17 AsIs: s.EndOffsetCond-Res#2/18 AsIs: s.StartOffsetCondNext#4/19 AsIs: (/22 AsIs: e.ConditionsTail#1/20 AsIs: )/23 AsIs: (/26 AsIs: e.ResultSentence#1/24 AsIs: )/27 HalfReuse: {*}/30 } Tile{ AsIs: e.MarkedPatternPrefix#5/2 } Tile{ AsIs: e.MarkedPatternCond#4/28 } Tile{ AsIs: t.CloseCall#5/32 AsIs: >/1 ]] }
  refalrts::reinit_open_call( context[31] );
  refalrts::reinit_closure_head( context[0] );
  refalrts::update_name( context[4], ref_gen_SentenceTail_S1A5.ref(vm) );
  refalrts::reinit_unwrapped_closure( context[30], context[0] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[31] );
  refalrts::link_brackets( context[26], context[27] );
  refalrts::link_brackets( context[22], context[23] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[32];
  res = refalrts::splice_evar( res, context[28], context[29] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[0], context[30] );
  res = refalrts::splice_evar( res, context[31], context[31] );
  refalrts::use( res );
  refalrts::wrap_closure( context[30] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_SentenceTail_S1A4("SentenceTail$1=4", 190303813U, 3640286464U, func_gen_SentenceTail_S1A4);


static refalrts::FnResult func_gen_SentenceTail_S1A3(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  // issue here memory for vars with 36 elems
  refalrts::Iter context[36];
  refalrts::zeros( context, 36 );
  // </0 & SentenceTail$1=3/4 (/7 e.CondResultCommands#2/5 )/8 s.StartOffsetCond#1/9 s.EndOffsetCond-Res#2/10 (/13 e.ConditionsTail#1/11 )/14 (/17 e.ResultSentence#1/15 )/18 (/21 e.MarkedPattern#1/19 )/22 s.StartOffsetCondNext#4/23 (/26 e.PatternVars#4/24 )/27 (/30 e.MarkedPatternCond#4/28 )/31 e.CondPatternCommands#4/2 >/1
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
  // closed e.CondResultCommands#2 as range 5
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
  // closed e.ConditionsTail#1 as range 11
  // closed e.ResultSentence#1 as range 15
  // closed e.MarkedPattern#1 as range 19
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
  // closed e.PatternVars#4 as range 24
  // closed e.MarkedPatternCond#4 as range 28
  // closed e.CondPatternCommands#4 as range 2
  //DEBUG: e.CondResultCommands#2: 5
  //DEBUG: s.StartOffsetCond#1: 9
  //DEBUG: s.EndOffsetCond-Res#2: 10
  //DEBUG: e.ConditionsTail#1: 11
  //DEBUG: e.ResultSentence#1: 15
  //DEBUG: e.MarkedPattern#1: 19
  //DEBUG: s.StartOffsetCondNext#4: 23
  //DEBUG: e.PatternVars#4: 24
  //DEBUG: e.MarkedPatternCond#4: 28
  //DEBUG: e.CondPatternCommands#4: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} s.StartOffsetCond#1/9 s.EndOffsetCond-Res#2/10 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </32 Tile{ HalfReuse: [*]/0 Reuse: & SentenceTail$1=4/4 AsIs: (/7 AsIs: e.CondResultCommands#2/5 AsIs: )/8 } (/33 Tile{ AsIs: e.CondPatternCommands#4/2 } Tile{ AsIs: )/31 } Tile{ AsIs: (/26 AsIs: e.PatternVars#4/24 AsIs: )/27 HalfReuse: s.StartOffsetCond1 #9/30 } Tile{ HalfReuse: s.EndOffsetCond-Res2 #10/22 AsIs: s.StartOffsetCondNext#4/23 } Tile{ AsIs: (/13 AsIs: e.ConditionsTail#1/11 AsIs: )/14 AsIs: (/17 AsIs: e.ResultSentence#1/15 AsIs: )/18 AsIs: (/21 } Tile{ AsIs: e.MarkedPatternCond#4/28 } )/34 {*}/35 Tile{ AsIs: e.MarkedPattern#1/19 } Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( vm, context[32] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( vm, context[33] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[34] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_unwrapped_closure( vm, context[35], context[0] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_closure_head( context[0] );
  refalrts::update_name( context[4], ref_gen_SentenceTail_S1A4.ref(vm) );
  refalrts::reinit_svar( context[30], context[9] );
  refalrts::reinit_svar( context[22], context[10] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[32] );
  refalrts::link_brackets( context[21], context[34] );
  refalrts::link_brackets( context[17], context[18] );
  refalrts::link_brackets( context[13], context[14] );
  refalrts::link_brackets( context[26], context[27] );
  refalrts::link_brackets( context[33], context[31] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[19], context[20] );
  res = refalrts::splice_evar( res, context[34], context[35] );
  res = refalrts::splice_evar( res, context[28], context[29] );
  res = refalrts::splice_evar( res, context[13], context[21] );
  res = refalrts::splice_evar( res, context[22], context[23] );
  res = refalrts::splice_evar( res, context[26], context[30] );
  res = refalrts::splice_evar( res, context[31], context[31] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[33], context[33] );
  res = refalrts::splice_evar( res, context[0], context[8] );
  res = refalrts::splice_evar( res, context[32], context[32] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  refalrts::wrap_closure( context[35] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_SentenceTail_S1A3("SentenceTail$1=3", 190303813U, 3640286464U, func_gen_SentenceTail_S1A3);


static refalrts::FnResult func_gen_SentenceTail_S1A2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  // issue here memory for vars with 37 elems
  refalrts::Iter context[37];
  refalrts::zeros( context, 37 );
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
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </32 Tile{ HalfReuse: [*]/0 Reuse: & SentenceTail$1=3/4 AsIs: (/7 AsIs: e.CondResultCommands#2/5 AsIs: )/8 AsIs: s.StartOffsetCond#1/13 AsIs: s.EndOffsetCond-Res#2/14 AsIs: (/17 AsIs: e.ConditionsTail#1/15 AsIs: )/18 AsIs: (/21 AsIs: e.ResultSentence#1/19 AsIs: )/22 AsIs: (/25 AsIs: e.MarkedPattern#1/23 AsIs: )/26 HalfReuse: {*}/29 } </33 Tile{ HalfReuse: & GenSubst-Save/30 AsIs: s.OffsetCond#3/31 } Tile{ AsIs: e.CondSubstitutes#3/2 } (/34 Tile{ AsIs: e.PatternVars#1/27 } )/35 Tile{ AsIs: (/11 AsIs: e.FirstCondPatternCommands#3/9 AsIs: )/12 AsIs: >/1 } >/36 Tile{ ]] }
  if( ! refalrts::alloc_open_call( vm, context[32] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( vm, context[33] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( vm, context[34] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[35] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( vm, context[36] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_closure_head( context[0] );
  refalrts::update_name( context[4], ref_gen_SentenceTail_S1A3.ref(vm) );
  refalrts::reinit_unwrapped_closure( context[29], context[0] );
  refalrts::reinit_name( context[30], ref_GenSubstm_Save.ref(vm) );
  refalrts::push_stack( vm, context[36] );
  refalrts::push_stack( vm, context[32] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[33] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[34], context[35] );
  refalrts::link_brackets( context[25], context[26] );
  refalrts::link_brackets( context[21], context[22] );
  refalrts::link_brackets( context[17], context[18] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[36], context[36] );
  res = refalrts::splice_evar( res, context[11], context[1] );
  res = refalrts::splice_evar( res, context[35], context[35] );
  res = refalrts::splice_evar( res, context[27], context[28] );
  res = refalrts::splice_evar( res, context[34], context[34] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[30], context[31] );
  res = refalrts::splice_evar( res, context[33], context[33] );
  res = refalrts::splice_evar( res, context[0], context[29] );
  res = refalrts::splice_evar( res, context[32], context[32] );
  refalrts::use( res );
  refalrts::wrap_closure( context[29] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_SentenceTail_S1A2("SentenceTail$1=2", 190303813U, 3640286464U, func_gen_SentenceTail_S1A2);


static refalrts::FnResult func_gen_SentenceTail_S1A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  // issue here memory for vars with 37 elems
  refalrts::Iter context[37];
  refalrts::zeros( context, 37 );
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
  //RESULT: Tile{ [[ } </31 [*]/32 & SentenceTail$1=2/33 (/34 Tile{ AsIs: e.CondResultCommands#2/2 } Tile{ AsIs: )/25 } s.StartOffsetCond#1/5/35 Tile{ AsIs: s.EndOffsetCond-Res#2/30 } Tile{ AsIs: (/8 AsIs: e.ConditionsTail#1/6 AsIs: )/9 AsIs: (/12 AsIs: e.ResultSentence#1/10 AsIs: )/13 AsIs: (/16 AsIs: e.MarkedPattern#1/14 AsIs: )/17 AsIs: (/20 AsIs: e.PatternVars#1/18 AsIs: )/21 HalfReuse: {*}/24 } Tile{ AsIs: </0 Reuse: & GenInitSubst/4 AsIs: s.StartOffsetCond#1/5 } (/36 Tile{ AsIs: e.CondName#1/22 } Tile{ HalfReuse: )/28 AsIs: e.CondPattern#1/26 HalfReuse: >/29 } Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( vm, context[31] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_closure_head( vm, context[32] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[33], ref_gen_SentenceTail_S1A2.ref(vm) ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( vm, context[34] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_stvar(vm, context[35], context[5]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( vm, context[36] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_unwrapped_closure( context[24], context[32] );
  refalrts::update_name( context[4], ref_GenInitSubst.ref(vm) );
  refalrts::reinit_close_bracket( context[28] );
  refalrts::reinit_close_call( context[29] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[31] );
  refalrts::push_stack( vm, context[29] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[36], context[28] );
  refalrts::link_brackets( context[20], context[21] );
  refalrts::link_brackets( context[16], context[17] );
  refalrts::link_brackets( context[12], context[13] );
  refalrts::link_brackets( context[8], context[9] );
  refalrts::link_brackets( context[34], context[25] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[28], context[29] );
  res = refalrts::splice_evar( res, context[22], context[23] );
  res = refalrts::splice_evar( res, context[36], context[36] );
  res = refalrts::splice_evar( res, context[0], context[5] );
  res = refalrts::splice_evar( res, context[8], context[24] );
  res = refalrts::splice_evar( res, context[30], context[30] );
  res = refalrts::splice_evar( res, context[35], context[35] );
  res = refalrts::splice_evar( res, context[25], context[25] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[31], context[34] );
  refalrts::use( res );
  refalrts::wrap_closure( context[24] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_SentenceTail_S1A1("SentenceTail$1=1", 190303813U, 3640286464U, func_gen_SentenceTail_S1A1);


static refalrts::FnResult func_SentenceTail(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  // issue here memory for vars with 65 elems
  refalrts::Iter context[65];
  refalrts::zeros( context, 65 );
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
    // </0 & SentenceTail/4 s.StartOffsetCond#1/5 (/8 e.PatternVars#1/6 )/9 (/12 e.MarkedPattern#1/10 )/13 (/16 # Condition/18 (/25 e.CondName#1/23 )/26 (/29 e.CondResult#1/27 )/30 (/33 e.CondPattern#1/31 )/34 )/17 e.ConditionsTail#1/21 (/37 e.ResultSentence#1/35 )/38 >/1
    context[19] = context[14];
    context[20] = context[15];
    context[21] = context[2];
    context[22] = context[3];
    if( ! refalrts::ident_term(  ident_Condition.ref(vm), context[18] ) )
      continue;
    context[23] = 0;
    context[24] = 0;
    context[25] = refalrts::brackets_left( context[23], context[24], context[19], context[20] );
    if( ! context[25] )
      continue;
    refalrts::bracket_pointers(context[25], context[26]);
    context[27] = 0;
    context[28] = 0;
    context[29] = refalrts::brackets_left( context[27], context[28], context[19], context[20] );
    if( ! context[29] )
      continue;
    refalrts::bracket_pointers(context[29], context[30]);
    context[31] = 0;
    context[32] = 0;
    context[33] = refalrts::brackets_left( context[31], context[32], context[19], context[20] );
    if( ! context[33] )
      continue;
    refalrts::bracket_pointers(context[33], context[34]);
    context[35] = 0;
    context[36] = 0;
    context[37] = refalrts::brackets_right( context[35], context[36], context[21], context[22] );
    if( ! context[37] )
      continue;
    refalrts::bracket_pointers(context[37], context[38]);
    if( ! refalrts::empty_seq( context[19], context[20] ) )
      continue;
    // closed e.PatternVars#1 as range 6
    // closed e.MarkedPattern#1 as range 10
    // closed e.CondName#1 as range 23
    // closed e.CondResult#1 as range 27
    // closed e.CondPattern#1 as range 31
    // closed e.ConditionsTail#1 as range 21
    // closed e.ResultSentence#1 as range 35
    //DEBUG: s.StartOffsetCond#1: 5
    //DEBUG: e.PatternVars#1: 6
    //DEBUG: e.MarkedPattern#1: 10
    //DEBUG: e.CondName#1: 23
    //DEBUG: e.CondResult#1: 27
    //DEBUG: e.CondPattern#1: 31
    //DEBUG: e.ConditionsTail#1: 21
    //DEBUG: e.ResultSentence#1: 35

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </39 Tile{ HalfReuse: [*]/0 Reuse: & SentenceTail$1=1/4 AsIs: s.StartOffsetCond#1/5 AsIs: (/8 } Tile{ AsIs: e.ConditionsTail#1/21 } )/40 (/41 Tile{ AsIs: e.ResultSentence#1/35 } Tile{ AsIs: )/9 AsIs: (/12 AsIs: e.MarkedPattern#1/10 AsIs: )/13 AsIs: (/16 } Tile{ AsIs: e.PatternVars#1/6 } )/42 Tile{ AsIs: (/37 } e.CondName#1/23/43 Tile{ AsIs: )/30 AsIs: (/33 AsIs: e.CondPattern#1/31 AsIs: )/34 HalfReuse: {*}/17 } </45 & GenResult-Condition/46 </47 & Inc2/48 s.StartOffsetCond#1/5/49 >/50 Tile{ AsIs: (/29 } e.PatternVars#1/6/51 )/53 (/54 # TkOpenCallCond/55 s.StartOffsetCond#1/5/56 )/57 Tile{ HalfReuse: (/18 HalfReuse: # TkName/25 AsIs: e.CondName#1/23 AsIs: )/26 } Tile{ AsIs: e.CondResult#1/27 } (/58 # TkCloseCallCond/59 </60 & Inc/61 s.StartOffsetCond#1/5/62 >/63 )/64 Tile{ HalfReuse: >/38 AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_call( vm, context[39] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( vm, context[40] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( vm, context[41] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( vm, context[42] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(vm, context[43], context[44], context[23], context[24]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( vm, context[45] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( vm, context[46], ref_GenResultm_Condition.ref(vm) ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( vm, context[47] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( vm, context[48], ref_Inc2.ref(vm) ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(vm, context[49], context[5]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( vm, context[50] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(vm, context[51], context[52], context[6], context[7]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( vm, context[53] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( vm, context[54] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( vm, context[55], ident_TkOpenCallCond.ref(vm) ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(vm, context[56], context[5]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( vm, context[57] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( vm, context[58] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( vm, context[59], ident_TkCloseCallCond.ref(vm) ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( vm, context[60] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( vm, context[61], ref_Inc.ref(vm) ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(vm, context[62], context[5]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( vm, context[63] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( vm, context[64] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_closure_head( context[0] );
    refalrts::update_name( context[4], ref_gen_SentenceTail_S1A1.ref(vm) );
    refalrts::reinit_unwrapped_closure( context[17], context[0] );
    refalrts::reinit_open_bracket( context[18] );
    refalrts::reinit_ident( context[25], ident_TkName.ref(vm) );
    refalrts::reinit_close_call( context[38] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[39] );
    refalrts::push_stack( vm, context[38] );
    refalrts::push_stack( vm, context[45] );
    refalrts::link_brackets( context[58], context[64] );
    refalrts::push_stack( vm, context[63] );
    refalrts::push_stack( vm, context[60] );
    refalrts::link_brackets( context[18], context[26] );
    refalrts::link_brackets( context[54], context[57] );
    refalrts::link_brackets( context[29], context[53] );
    refalrts::push_stack( vm, context[50] );
    refalrts::push_stack( vm, context[47] );
    refalrts::link_brackets( context[33], context[34] );
    refalrts::link_brackets( context[37], context[30] );
    refalrts::link_brackets( context[16], context[42] );
    refalrts::link_brackets( context[12], context[13] );
    refalrts::link_brackets( context[41], context[9] );
    refalrts::link_brackets( context[8], context[40] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[38];
    res = refalrts::splice_evar( res, context[58], context[64] );
    res = refalrts::splice_evar( res, context[27], context[28] );
    res = refalrts::splice_evar( res, context[18], context[26] );
    res = refalrts::splice_evar( res, context[53], context[57] );
    res = refalrts::splice_evar( res, context[51], context[52] );
    res = refalrts::splice_evar( res, context[29], context[29] );
    res = refalrts::splice_evar( res, context[45], context[50] );
    res = refalrts::splice_evar( res, context[30], context[17] );
    res = refalrts::splice_evar( res, context[43], context[44] );
    res = refalrts::splice_evar( res, context[37], context[37] );
    res = refalrts::splice_evar( res, context[42], context[42] );
    res = refalrts::splice_evar( res, context[6], context[7] );
    res = refalrts::splice_evar( res, context[9], context[16] );
    res = refalrts::splice_evar( res, context[35], context[36] );
    res = refalrts::splice_evar( res, context[40], context[41] );
    res = refalrts::splice_evar( res, context[21], context[22] );
    res = refalrts::splice_evar( res, context[0], context[8] );
    res = refalrts::splice_evar( res, context[39], context[39] );
    refalrts::use( res );
    refalrts::wrap_closure( context[17] );
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


//End of file
