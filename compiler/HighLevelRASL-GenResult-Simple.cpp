// This file automatically generated from 'HighLevelRASL-GenResult-Simple.sref'
// Don't edit! Edit 'HighLevelRASL-GenResult-Simple.sref' and recompile it

#include "refalrts.h"

#define cookie_ns cookie_ns_1584841285_782216036
static const refalrts::IdentReference ident_ADTm_Brackets("ADT-Brackets");
static const refalrts::IdentReference ident_ARGm_BEGIN("ARG-BEGIN");
static const refalrts::IdentReference ident_Allocate("Allocate");
static const refalrts::IdentReference ident_Brackets("Brackets");
static const refalrts::IdentReference ident_CallBrackets("CallBrackets");
static const refalrts::IdentReference ident_ClosureBrackets("ClosureBrackets");
static const refalrts::IdentReference ident_CmdComment("CmdComment");
static const refalrts::IdentReference ident_CmdCopyVar("CmdCopyVar");
static const refalrts::IdentReference ident_CmdCreateElem("CmdCreateElem");
static const refalrts::IdentReference ident_CmdInsertElem("CmdInsertElem");
static const refalrts::IdentReference ident_CmdInsertRange("CmdInsertRange");
static const refalrts::IdentReference ident_CmdInsertVar("CmdInsertVar");
static const refalrts::IdentReference ident_CmdLinkBrackets("CmdLinkBrackets");
static const refalrts::IdentReference ident_CmdNextStep("CmdNextStep");
static const refalrts::IdentReference ident_CmdPushStack("CmdPushStack");
static const refalrts::IdentReference ident_CmdResetAllocator("CmdResetAllocator");
static const refalrts::IdentReference ident_CmdSetRes("CmdSetRes");
static const refalrts::IdentReference ident_CmdSpliceToFreeList("CmdSpliceToFreeList");
static const refalrts::IdentReference ident_CmdUseRes("CmdUseRes");
static const refalrts::IdentReference ident_CmdWrapClosure("CmdWrapClosure");
static const refalrts::IdentReference ident_ElChar("ElChar");
static const refalrts::IdentReference ident_ElCloseADT("ElCloseADT");
static const refalrts::IdentReference ident_ElCloseBracket("ElCloseBracket");
static const refalrts::IdentReference ident_ElCloseCall("ElCloseCall");
static const refalrts::IdentReference ident_ElClosureHead("ElClosureHead");
static const refalrts::IdentReference ident_ElIdent("ElIdent");
static const refalrts::IdentReference ident_ElName("ElName");
static const refalrts::IdentReference ident_ElNumber("ElNumber");
static const refalrts::IdentReference ident_ElOpenADT("ElOpenADT");
static const refalrts::IdentReference ident_ElOpenBracket("ElOpenBracket");
static const refalrts::IdentReference ident_ElOpenCall("ElOpenCall");
static const refalrts::IdentReference ident_ElString("ElString");
static const refalrts::IdentReference ident_ElUnwrappedClosure("ElUnwrappedClosure");
static const refalrts::IdentReference ident_Offset("Offset");
static const refalrts::IdentReference ident_TkChar("TkChar");
static const refalrts::IdentReference ident_TkCloseADT("TkCloseADT");
static const refalrts::IdentReference ident_TkCloseBracket("TkCloseBracket");
static const refalrts::IdentReference ident_TkCloseCall("TkCloseCall");
static const refalrts::IdentReference ident_TkCloseCallCond("TkCloseCallCond");
static const refalrts::IdentReference ident_TkIdentifier("TkIdentifier");
static const refalrts::IdentReference ident_TkName("TkName");
static const refalrts::IdentReference ident_TkNumber("TkNumber");
static const refalrts::IdentReference ident_TkOpenCallCond("TkOpenCallCond");
static const refalrts::IdentReference ident_TkString("TkString");
static const refalrts::IdentReference ident_TkUnwrappedClosure("TkUnwrappedClosure");
static const refalrts::IdentReference ident_TkVariable("TkVariable");
static refalrts::ExternalReference ref_Add("Add", 0U, 0U);
static refalrts::ExternalReference ref_CollectStrings("CollectStrings", 0U, 0U);
static refalrts::ExternalReference ref_Dec("Dec", 0U, 0U);
static refalrts::ExternalReference ref_DoGenResult("DoGenResult", 1584841285U, 782216036U);
static refalrts::ExternalReference ref_Fetch("Fetch", 0U, 0U);
static refalrts::ExternalReference ref_GenResult("GenResult", 1584841285U, 782216036U);
static refalrts::ExternalReference ref_gen_GenResult_A1("GenResult=1", 1584841285U, 782216036U);
static refalrts::ExternalReference ref_GenResultm_Condition("GenResult-Condition", 0U, 0U);
static refalrts::ExternalReference ref_gen_GenResultm_Condition_A1("GenResult-Condition=1", 1584841285U, 782216036U);
static refalrts::ExternalReference ref_GenResultm_Simple("GenResult-Simple", 0U, 0U);
static refalrts::ExternalReference ref_gen_GenResultm_Simple_B1("GenResult-Simple:1", 1584841285U, 782216036U);
static refalrts::ExternalReference ref_Inc("Inc", 0U, 0U);
static refalrts::ExternalReference ref_IncVarOffset("IncVarOffset", 0U, 0U);
static refalrts::ExternalReference ref_MakeVarTablem_Conditions("MakeVarTable-Conditions", 1584841285U, 782216036U);
static refalrts::ExternalReference ref_MakeVarTablem_Simple("MakeVarTable-Simple", 1584841285U, 782216036U);
static refalrts::ExternalReference ref_MakeVariableComment("MakeVariableComment", 1584841285U, 782216036U);
static refalrts::ExternalReference ref_MakeVariableCommentTable("MakeVariableCommentTable", 0U, 0U);
static refalrts::ExternalReference ref_Map("Map", 0U, 0U);
static refalrts::ExternalReference ref_Pipe("Pipe", 0U, 0U);
static refalrts::ExternalReference ref_PrintVar("PrintVar", 0U, 0U);
static refalrts::ExternalReference ref_ReplicateVar("ReplicateVar", 1584841285U, 782216036U);
static refalrts::ExternalReference ref_gen_ReplicateVar_L1("ReplicateVar\\1", 1584841285U, 782216036U);
static refalrts::ExternalReference ref_Sort("Sort", 0U, 0U);

static refalrts::FnResult func_gen_GenResultm_Simple_B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
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
    // </0 & GenResult-Simple:1/4 s.ContextOffset#2/5 (/8 e.CommonVars#2/6 )/9 >/1
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.CommonVars#2 as range 6
    //DEBUG: s.ContextOffset#2: 5
    //DEBUG: e.CommonVars#2: 6

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} s.ContextOffset#2/5 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: s.ContextOffset2 #5/0 HalfReuse: </4 } Tile{ HalfReuse: & MakeVariableCommentTable/8 AsIs: e.CommonVars#2/6 HalfReuse: >/9 HalfReuse: (/1 } # CmdSpliceToFreeList/10 )/11 (/12 # CmdNextStep/13 )/14 Tile{ ]] }
    if( ! refalrts::alloc_ident( vm, context[10], ident_CmdSpliceToFreeList.ref(vm) ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( vm, context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( vm, context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( vm, context[13], ident_CmdNextStep.ref(vm) ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( vm, context[14] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_svar( context[0], context[5] );
    refalrts::reinit_open_call( context[4] );
    refalrts::reinit_name( context[8], ref_MakeVariableCommentTable.ref(vm) );
    refalrts::reinit_close_call( context[9] );
    refalrts::reinit_open_bracket( context[1] );
    refalrts::link_brackets( context[12], context[14] );
    refalrts::link_brackets( context[1], context[11] );
    refalrts::push_stack( vm, context[9] );
    refalrts::push_stack( vm, context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[10], context[14] );
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
  if( ! refalrts::alloc_name( vm, context[10], ref_MakeVariableCommentTable.ref(vm) ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( vm, context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( vm, context[12], ident_CmdResetAllocator.ref(vm) ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( vm, context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( vm, context[15], ident_CmdSetRes.ref(vm) ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( vm, context[16], ident_ARGm_BEGIN.ref(vm) ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( vm, context[17], ident_CmdUseRes.ref(vm) ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[18] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( vm, context[19] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( vm, context[20], ident_CmdSpliceToFreeList.ref(vm) ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[21] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( vm, context[22] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( vm, context[23], ident_CmdNextStep.ref(vm) ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[24] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_svar( context[0], context[5] );
  refalrts::reinit_open_call( context[4] );
  refalrts::reinit_open_bracket( context[1] );
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

static refalrts::NativeReference nat_ref_gen_GenResultm_Simple_B1("GenResult-Simple:1", 1584841285U, 782216036U, func_gen_GenResultm_Simple_B1);


static refalrts::FnResult func_GenResultm_Simple(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
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
  if( ! refalrts::alloc_name( vm, context[14], ref_gen_GenResultm_Simple_B1.ref(vm) ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( vm, context[15] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_open_call( context[9] );
  refalrts::update_name( context[4], ref_GenResult.ref(vm) );
  refalrts::reinit_name( context[8], ref_MakeVarTablem_Simple.ref(vm) );
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
  if( ! refalrts::alloc_name( vm, context[10], ref_MakeVariableCommentTable.ref(vm) ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( vm, context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( vm, context[12], ident_CmdResetAllocator.ref(vm) ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( vm, context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( vm, context[15], ident_CmdSetRes.ref(vm) ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_number( vm, context[16], 1UL ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( vm, context[17], ident_CmdUseRes.ref(vm) ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[18] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_svar( context[0], context[5] );
  refalrts::reinit_open_call( context[4] );
  refalrts::reinit_open_bracket( context[1] );
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

static refalrts::NativeReference nat_ref_gen_GenResultm_Condition_A1("GenResult-Condition=1", 1584841285U, 782216036U, func_gen_GenResultm_Condition_A1);


static refalrts::FnResult func_GenResultm_Condition(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
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
  if( ! refalrts::alloc_open_call( vm, context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[11], ref_GenResult.ref(vm) ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[12], ref_MakeVarTablem_Conditions.ref(vm) ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( vm, context[13] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_gen_GenResultm_Condition_A1.ref(vm) );
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
  refalrts::reinit_open_bracket( context[4] );
  refalrts::reinit_close_bracket( context[1] );
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

static refalrts::NativeReference nat_ref_MakeVarTablem_Simple("MakeVarTable-Simple", 1584841285U, 782216036U, func_MakeVarTablem_Simple);


static refalrts::FnResult func_MakeVarTablem_Conditions(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
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
  refalrts::reinit_open_bracket( context[4] );
  refalrts::reinit_close_bracket( context[1] );
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

static refalrts::NativeReference nat_ref_MakeVarTablem_Conditions("MakeVarTable-Conditions", 1584841285U, 782216036U, func_MakeVarTablem_Conditions);


static refalrts::FnResult func_gen_GenResult_A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
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
  if( ! refalrts::alloc_open_bracket( vm, context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( vm, context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( vm, context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( vm, context[16] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_DoGenResult.ref(vm) );
  refalrts::reinit_name( context[8], ref_CollectStrings.ref(vm) );
  refalrts::reinit_close_call( context[9] );
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

static refalrts::NativeReference nat_ref_gen_GenResult_A1("GenResult=1", 1584841285U, 782216036U, func_gen_GenResult_A1);


static refalrts::FnResult func_GenResult(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
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
  //TRASH: {REMOVED TILE} {REMOVED TILE} s.FnMakeVarTable#1/6 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 HalfReuse: [*]/4 } & GenResult=1/11 Tile{ AsIs: s.ContextOffset#1/5 } (/12 Tile{ AsIs: e.Result#1/2 } )/13 {*}/14 </15 & Map/16 Tile{ HalfReuse: s.FnMakeVarTable1 #6/9 AsIs: e.PatternVars#1/7 HalfReuse: >/10 } Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_name( vm, context[11], ref_gen_GenResult_A1.ref(vm) ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( vm, context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_unwrapped_closure( vm, context[14], context[4] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( vm, context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[16], ref_Map.ref(vm) ) )
    return refalrts::cNoMemory;
  refalrts::reinit_closure_head( context[4] );
  refalrts::reinit_svar( context[9], context[6] );
  refalrts::reinit_close_call( context[10] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[10] );
  refalrts::push_stack( vm, context[15] );
  refalrts::link_brackets( context[12], context[13] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[13], context[16] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[12], context[12] );
  res = refalrts::splice_evar( res, context[5], context[5] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  refalrts::splice_to_freelist_open( vm, context[4], res );
  refalrts::wrap_closure( context[14] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_GenResult("GenResult", 1584841285U, 782216036U, func_GenResult);


static refalrts::FnResult func_DoGenResult(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  // issue here memory for vars with 62 elems
  refalrts::Iter context[62];
  refalrts::zeros( context, 62 );
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
    // </0 & DoGenResult/4 (/7 e.new#6/5 )/8 (/11 e.new#7/9 )/12 (/15 e.new#8/13 )/16 s.new#9/17 (/22 s.new#10/24 e.new#11/20 )/23 e.new#12/18 >/1
    context[18] = context[2];
    context[19] = context[3];
    context[20] = 0;
    context[21] = 0;
    context[22] = refalrts::brackets_left( context[20], context[21], context[18], context[19] );
    if( ! context[22] )
      continue;
    refalrts::bracket_pointers(context[22], context[23]);
    // closed e.new#6 as range 5
    // closed e.new#7 as range 9
    // closed e.new#8 as range 13
    // closed e.new#12 as range 18
    if( ! refalrts::svar_left( context[24], context[20], context[21] ) )
      continue;
    // closed e.new#11 as range 20
    do {
      // </0 & DoGenResult/4 (/7 e.new#13/5 )/8 (/11 e.new#14/9 )/12 (/15 e.new#15/13 )/16 s.new#16/17 (/22 s.new#17/24 s.new#18/27 )/23 e.new#19/18 >/1
      context[25] = context[20];
      context[26] = context[21];
      // closed e.new#13 as range 5
      // closed e.new#14 as range 9
      // closed e.new#15 as range 13
      // closed e.new#19 as range 18
      if( ! refalrts::svar_left( context[27], context[25], context[26] ) )
        continue;
      if( ! refalrts::empty_seq( context[25], context[26] ) )
        continue;
      do {
        // </0 & DoGenResult/4 (/7 e.Vars#1/5 )/8 (/11 e.AllocCommands#1/9 )/12 (/15 e.Commands#1/13 )/16 s.Counter#1/17 (/22 # TkOpenCallCond/24 s.Offset#1/27 )/23 e.Result#1/18 >/1
        if( ! refalrts::ident_term(  ident_TkOpenCallCond.ref(vm), context[24] ) )
          continue;
        // closed e.Vars#1 as range 5
        // closed e.AllocCommands#1 as range 9
        // closed e.Commands#1 as range 13
        // closed e.Result#1 as range 18
        //DEBUG: s.Counter#1: 17
        //DEBUG: s.Offset#1: 27
        //DEBUG: e.Vars#1: 5
        //DEBUG: e.AllocCommands#1: 9
        //DEBUG: e.Commands#1: 13
        //DEBUG: e.Result#1: 18

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenResult/4 AsIs: (/7 AsIs: e.Vars#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.AllocCommands#1/9 HalfReuse: (/12 HalfReuse: # CmdCreateElem/15 } # Allocate/28 s.Offset#1/27/29 # ElOpenCall/30 )/31 )/32 (/33 Tile{ AsIs: (/22 Reuse: # CmdInsertElem/24 AsIs: s.Offset#1/27 AsIs: )/23 } Tile{ AsIs: e.Commands#1/13 } Tile{ AsIs: )/16 AsIs: s.Counter#1/17 } Tile{ AsIs: e.Result#1/18 } Tile{ AsIs: >/1 ]] }
        if( ! refalrts::alloc_ident( vm, context[28], ident_Allocate.ref(vm) ) )
          return refalrts::cNoMemory;
        if (! refalrts::copy_stvar(vm, context[29], context[27]))
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_ident( vm, context[30], ident_ElOpenCall.ref(vm) ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_bracket( vm, context[31] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_bracket( vm, context[32] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_open_bracket( vm, context[33] ) )
          return refalrts::cNoMemory;
        refalrts::reinit_open_bracket( context[12] );
        refalrts::reinit_ident( context[15], ident_CmdCreateElem.ref(vm) );
        refalrts::update_ident( context[24], ident_CmdInsertElem.ref(vm) );
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[33], context[16] );
        refalrts::link_brackets( context[22], context[23] );
        refalrts::link_brackets( context[11], context[32] );
        refalrts::link_brackets( context[12], context[31] );
        refalrts::link_brackets( context[7], context[8] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[18], context[19] );
        res = refalrts::splice_evar( res, context[16], context[17] );
        res = refalrts::splice_evar( res, context[13], context[14] );
        res = refalrts::splice_evar( res, context[22], context[23] );
        res = refalrts::splice_evar( res, context[28], context[33] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & DoGenResult/4 (/7 e.Vars#1/5 )/8 (/11 e.AllocCommands#1/9 )/12 (/15 e.Commands#1/13 )/16 s.Counter#1/17 (/22 # TkCloseCallCond/24 s.Offset#1/27 )/23 e.Result#1/18 >/1
        if( ! refalrts::ident_term(  ident_TkCloseCallCond.ref(vm), context[24] ) )
          continue;
        // closed e.Vars#1 as range 5
        // closed e.AllocCommands#1 as range 9
        // closed e.Commands#1 as range 13
        // closed e.Result#1 as range 18
        //DEBUG: s.Counter#1: 17
        //DEBUG: s.Offset#1: 27
        //DEBUG: e.Vars#1: 5
        //DEBUG: e.AllocCommands#1: 9
        //DEBUG: e.Commands#1: 13
        //DEBUG: e.Result#1: 18

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenResult/4 AsIs: (/7 AsIs: e.Vars#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.AllocCommands#1/9 HalfReuse: (/12 HalfReuse: # CmdCreateElem/15 } # Allocate/28 s.Offset#1/27/29 # ElCloseCall/30 )/31 )/32 (/33 Tile{ AsIs: (/22 Reuse: # CmdPushStack/24 AsIs: s.Offset#1/27 AsIs: )/23 } (/34 # CmdPushStack/35 </36 & Dec/37 s.Offset#1/27/38 >/39 )/40 (/41 # CmdInsertElem/42 s.Offset#1/27/43 )/44 Tile{ AsIs: e.Commands#1/13 } Tile{ AsIs: )/16 AsIs: s.Counter#1/17 } Tile{ AsIs: e.Result#1/18 } Tile{ AsIs: >/1 ]] }
        if( ! refalrts::alloc_ident( vm, context[28], ident_Allocate.ref(vm) ) )
          return refalrts::cNoMemory;
        if (! refalrts::copy_stvar(vm, context[29], context[27]))
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_ident( vm, context[30], ident_ElCloseCall.ref(vm) ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_bracket( vm, context[31] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_bracket( vm, context[32] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_open_bracket( vm, context[33] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_open_bracket( vm, context[34] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_ident( vm, context[35], ident_CmdPushStack.ref(vm) ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_open_call( vm, context[36] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_name( vm, context[37], ref_Dec.ref(vm) ) )
          return refalrts::cNoMemory;
        if (! refalrts::copy_stvar(vm, context[38], context[27]))
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_call( vm, context[39] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_bracket( vm, context[40] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_open_bracket( vm, context[41] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_ident( vm, context[42], ident_CmdInsertElem.ref(vm) ) )
          return refalrts::cNoMemory;
        if (! refalrts::copy_stvar(vm, context[43], context[27]))
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_bracket( vm, context[44] ) )
          return refalrts::cNoMemory;
        refalrts::reinit_open_bracket( context[12] );
        refalrts::reinit_ident( context[15], ident_CmdCreateElem.ref(vm) );
        refalrts::update_ident( context[24], ident_CmdPushStack.ref(vm) );
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[33], context[16] );
        refalrts::link_brackets( context[41], context[44] );
        refalrts::link_brackets( context[34], context[40] );
        refalrts::push_stack( vm, context[39] );
        refalrts::push_stack( vm, context[36] );
        refalrts::link_brackets( context[22], context[23] );
        refalrts::link_brackets( context[11], context[32] );
        refalrts::link_brackets( context[12], context[31] );
        refalrts::link_brackets( context[7], context[8] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[18], context[19] );
        res = refalrts::splice_evar( res, context[16], context[17] );
        res = refalrts::splice_evar( res, context[13], context[14] );
        res = refalrts::splice_evar( res, context[34], context[44] );
        res = refalrts::splice_evar( res, context[22], context[23] );
        res = refalrts::splice_evar( res, context[28], context[33] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & DoGenResult/4 (/7 e.Vars#1/5 )/8 (/11 e.AllocCommands#1/9 )/12 (/15 e.Commands#1/13 )/16 s.Counter#1/17 (/22 # TkChar/24 s.Value#1/27 )/23 e.Result#1/18 >/1
      if( ! refalrts::ident_term(  ident_TkChar.ref(vm), context[24] ) )
        continue;
      // closed e.Vars#1 as range 5
      // closed e.AllocCommands#1 as range 9
      // closed e.Commands#1 as range 13
      // closed e.Result#1 as range 18
      //DEBUG: s.Counter#1: 17
      //DEBUG: s.Value#1: 27
      //DEBUG: e.Vars#1: 5
      //DEBUG: e.AllocCommands#1: 9
      //DEBUG: e.Commands#1: 13
      //DEBUG: e.Result#1: 18

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Value#1/27 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenResult/4 AsIs: (/7 AsIs: e.Vars#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.AllocCommands#1/9 HalfReuse: (/12 HalfReuse: # CmdCreateElem/15 } Tile{ HalfReuse: # Allocate/16 AsIs: s.Counter#1/17 HalfReuse: # ElChar/22 HalfReuse: s.Value1 #27/24 } )/28 )/29 (/30 (/31 # CmdInsertElem/32 s.Counter#1/17/33 )/34 Tile{ AsIs: e.Commands#1/13 } )/35 </36 & Inc/37 s.Counter#1/17/38 Tile{ HalfReuse: >/23 AsIs: e.Result#1/18 AsIs: >/1 ]] }
      if( ! refalrts::alloc_close_bracket( vm, context[28] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( vm, context[29] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( vm, context[30] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( vm, context[31] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( vm, context[32], ident_CmdInsertElem.ref(vm) ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(vm, context[33], context[17]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( vm, context[34] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( vm, context[35] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_call( vm, context[36] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( vm, context[37], ref_Inc.ref(vm) ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(vm, context[38], context[17]))
        return refalrts::cNoMemory;
      refalrts::reinit_open_bracket( context[12] );
      refalrts::reinit_ident( context[15], ident_CmdCreateElem.ref(vm) );
      refalrts::reinit_ident( context[16], ident_Allocate.ref(vm) );
      refalrts::reinit_ident( context[22], ident_ElChar.ref(vm) );
      refalrts::reinit_svar( context[24], context[27] );
      refalrts::reinit_close_call( context[23] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[23] );
      refalrts::push_stack( vm, context[36] );
      refalrts::link_brackets( context[30], context[35] );
      refalrts::link_brackets( context[31], context[34] );
      refalrts::link_brackets( context[11], context[29] );
      refalrts::link_brackets( context[12], context[28] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[23];
      res = refalrts::splice_evar( res, context[35], context[38] );
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_evar( res, context[28], context[34] );
      res = refalrts::splice_evar( res, context[16], context[24] );
      refalrts::splice_to_freelist_open( vm, context[15], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & DoGenResult/4 (/7 e.Vars#1/5 )/8 (/11 e.AllocCommands#1/9 )/12 (/15 e.Commands#1/13 )/16 s.Counter#1/17 (/22 # TkName/24 e.Name#1/20 )/23 e.Result#1/18 >/1
      if( ! refalrts::ident_term(  ident_TkName.ref(vm), context[24] ) )
        continue;
      // closed e.Vars#1 as range 5
      // closed e.AllocCommands#1 as range 9
      // closed e.Commands#1 as range 13
      // closed e.Name#1 as range 20
      // closed e.Result#1 as range 18
      //DEBUG: s.Counter#1: 17
      //DEBUG: e.Vars#1: 5
      //DEBUG: e.AllocCommands#1: 9
      //DEBUG: e.Commands#1: 13
      //DEBUG: e.Name#1: 20
      //DEBUG: e.Result#1: 18

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenResult/4 AsIs: (/7 AsIs: e.Vars#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.AllocCommands#1/9 HalfReuse: (/12 HalfReuse: # CmdCreateElem/15 } Tile{ HalfReuse: # Allocate/16 AsIs: s.Counter#1/17 HalfReuse: # ElName/22 } Tile{ AsIs: e.Name#1/20 } )/25 )/26 (/27 (/28 Tile{ Reuse: # CmdInsertElem/24 } s.Counter#1/17/29 )/30 Tile{ AsIs: e.Commands#1/13 } )/31 </32 & Inc/33 s.Counter#1/17/34 Tile{ HalfReuse: >/23 AsIs: e.Result#1/18 AsIs: >/1 ]] }
      if( ! refalrts::alloc_close_bracket( vm, context[25] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( vm, context[26] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( vm, context[27] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( vm, context[28] ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(vm, context[29], context[17]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( vm, context[30] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( vm, context[31] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_call( vm, context[32] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( vm, context[33], ref_Inc.ref(vm) ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(vm, context[34], context[17]))
        return refalrts::cNoMemory;
      refalrts::reinit_open_bracket( context[12] );
      refalrts::reinit_ident( context[15], ident_CmdCreateElem.ref(vm) );
      refalrts::reinit_ident( context[16], ident_Allocate.ref(vm) );
      refalrts::reinit_ident( context[22], ident_ElName.ref(vm) );
      refalrts::update_ident( context[24], ident_CmdInsertElem.ref(vm) );
      refalrts::reinit_close_call( context[23] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[23] );
      refalrts::push_stack( vm, context[32] );
      refalrts::link_brackets( context[27], context[31] );
      refalrts::link_brackets( context[28], context[30] );
      refalrts::link_brackets( context[11], context[26] );
      refalrts::link_brackets( context[12], context[25] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[23];
      res = refalrts::splice_evar( res, context[31], context[34] );
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_evar( res, context[29], context[30] );
      res = refalrts::splice_evar( res, context[24], context[24] );
      res = refalrts::splice_evar( res, context[25], context[28] );
      res = refalrts::splice_evar( res, context[20], context[21] );
      res = refalrts::splice_evar( res, context[16], context[22] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & DoGenResult/4 (/7 e.Vars#1/5 )/8 (/11 e.AllocCommands#1/9 )/12 (/15 e.Commands#1/13 )/16 s.Counter#1/17 (/22 # TkNumber/24 s.Number#1/27 )/23 e.Result#1/18 >/1
      context[25] = context[20];
      context[26] = context[21];
      if( ! refalrts::ident_term(  ident_TkNumber.ref(vm), context[24] ) )
        continue;
      // closed e.Vars#1 as range 5
      // closed e.AllocCommands#1 as range 9
      // closed e.Commands#1 as range 13
      // closed e.Result#1 as range 18
      if( ! refalrts::svar_left( context[27], context[25], context[26] ) )
        continue;
      if( ! refalrts::empty_seq( context[25], context[26] ) )
        continue;
      //DEBUG: s.Counter#1: 17
      //DEBUG: e.Vars#1: 5
      //DEBUG: e.AllocCommands#1: 9
      //DEBUG: e.Commands#1: 13
      //DEBUG: e.Result#1: 18
      //DEBUG: s.Number#1: 27

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Number#1/27 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenResult/4 AsIs: (/7 AsIs: e.Vars#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.AllocCommands#1/9 HalfReuse: (/12 HalfReuse: # CmdCreateElem/15 } Tile{ HalfReuse: # Allocate/16 AsIs: s.Counter#1/17 HalfReuse: # ElNumber/22 HalfReuse: s.Number1 #27/24 } )/28 )/29 (/30 (/31 # CmdInsertElem/32 s.Counter#1/17/33 )/34 Tile{ AsIs: e.Commands#1/13 } )/35 </36 & Inc/37 s.Counter#1/17/38 Tile{ HalfReuse: >/23 AsIs: e.Result#1/18 AsIs: >/1 ]] }
      if( ! refalrts::alloc_close_bracket( vm, context[28] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( vm, context[29] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( vm, context[30] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( vm, context[31] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( vm, context[32], ident_CmdInsertElem.ref(vm) ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(vm, context[33], context[17]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( vm, context[34] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( vm, context[35] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_call( vm, context[36] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( vm, context[37], ref_Inc.ref(vm) ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(vm, context[38], context[17]))
        return refalrts::cNoMemory;
      refalrts::reinit_open_bracket( context[12] );
      refalrts::reinit_ident( context[15], ident_CmdCreateElem.ref(vm) );
      refalrts::reinit_ident( context[16], ident_Allocate.ref(vm) );
      refalrts::reinit_ident( context[22], ident_ElNumber.ref(vm) );
      refalrts::reinit_svar( context[24], context[27] );
      refalrts::reinit_close_call( context[23] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[23] );
      refalrts::push_stack( vm, context[36] );
      refalrts::link_brackets( context[30], context[35] );
      refalrts::link_brackets( context[31], context[34] );
      refalrts::link_brackets( context[11], context[29] );
      refalrts::link_brackets( context[12], context[28] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[23];
      res = refalrts::splice_evar( res, context[35], context[38] );
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_evar( res, context[28], context[34] );
      res = refalrts::splice_evar( res, context[16], context[24] );
      refalrts::splice_to_freelist_open( vm, context[15], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & DoGenResult/4 (/7 e.Vars#1/5 )/8 (/11 e.AllocCommands#1/9 )/12 (/15 e.Commands#1/13 )/16 s.Counter#1/17 (/22 # TkIdentifier/24 e.Name#1/20 )/23 e.Result#1/18 >/1
      if( ! refalrts::ident_term(  ident_TkIdentifier.ref(vm), context[24] ) )
        continue;
      // closed e.Vars#1 as range 5
      // closed e.AllocCommands#1 as range 9
      // closed e.Commands#1 as range 13
      // closed e.Name#1 as range 20
      // closed e.Result#1 as range 18
      //DEBUG: s.Counter#1: 17
      //DEBUG: e.Vars#1: 5
      //DEBUG: e.AllocCommands#1: 9
      //DEBUG: e.Commands#1: 13
      //DEBUG: e.Name#1: 20
      //DEBUG: e.Result#1: 18

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenResult/4 AsIs: (/7 AsIs: e.Vars#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.AllocCommands#1/9 HalfReuse: (/12 HalfReuse: # CmdCreateElem/15 } Tile{ HalfReuse: # Allocate/16 AsIs: s.Counter#1/17 HalfReuse: # ElIdent/22 } Tile{ AsIs: e.Name#1/20 } )/25 )/26 (/27 (/28 Tile{ Reuse: # CmdInsertElem/24 } s.Counter#1/17/29 )/30 Tile{ AsIs: e.Commands#1/13 } )/31 </32 & Inc/33 s.Counter#1/17/34 Tile{ HalfReuse: >/23 AsIs: e.Result#1/18 AsIs: >/1 ]] }
      if( ! refalrts::alloc_close_bracket( vm, context[25] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( vm, context[26] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( vm, context[27] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( vm, context[28] ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(vm, context[29], context[17]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( vm, context[30] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( vm, context[31] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_call( vm, context[32] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( vm, context[33], ref_Inc.ref(vm) ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(vm, context[34], context[17]))
        return refalrts::cNoMemory;
      refalrts::reinit_open_bracket( context[12] );
      refalrts::reinit_ident( context[15], ident_CmdCreateElem.ref(vm) );
      refalrts::reinit_ident( context[16], ident_Allocate.ref(vm) );
      refalrts::reinit_ident( context[22], ident_ElIdent.ref(vm) );
      refalrts::update_ident( context[24], ident_CmdInsertElem.ref(vm) );
      refalrts::reinit_close_call( context[23] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[23] );
      refalrts::push_stack( vm, context[32] );
      refalrts::link_brackets( context[27], context[31] );
      refalrts::link_brackets( context[28], context[30] );
      refalrts::link_brackets( context[11], context[26] );
      refalrts::link_brackets( context[12], context[25] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[23];
      res = refalrts::splice_evar( res, context[31], context[34] );
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_evar( res, context[29], context[30] );
      res = refalrts::splice_evar( res, context[24], context[24] );
      res = refalrts::splice_evar( res, context[25], context[28] );
      res = refalrts::splice_evar( res, context[20], context[21] );
      res = refalrts::splice_evar( res, context[16], context[22] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & DoGenResult/4 (/7 e.Vars#1/5 )/8 (/11 e.AllocCommands#1/9 )/12 (/15 e.Commands#1/13 )/16 s.Counter#1/17 (/22 # TkString/24 e.Chars#1/20 )/23 e.Result#1/18 >/1
      if( ! refalrts::ident_term(  ident_TkString.ref(vm), context[24] ) )
        continue;
      // closed e.Vars#1 as range 5
      // closed e.AllocCommands#1 as range 9
      // closed e.Commands#1 as range 13
      // closed e.Chars#1 as range 20
      // closed e.Result#1 as range 18
      //DEBUG: s.Counter#1: 17
      //DEBUG: e.Vars#1: 5
      //DEBUG: e.AllocCommands#1: 9
      //DEBUG: e.Commands#1: 13
      //DEBUG: e.Chars#1: 20
      //DEBUG: e.Result#1: 18

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenResult/4 AsIs: (/7 AsIs: e.Vars#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.AllocCommands#1/9 HalfReuse: (/12 HalfReuse: # CmdCreateElem/15 } Tile{ HalfReuse: # Allocate/16 AsIs: s.Counter#1/17 HalfReuse: # ElString/22 } Tile{ AsIs: e.Chars#1/20 } )/25 )/26 (/27 (/28 Tile{ Reuse: # CmdInsertRange/24 } s.Counter#1/17/29 )/30 Tile{ AsIs: e.Commands#1/13 } )/31 </32 & Add/33 s.Counter#1/17/34 2/35 Tile{ HalfReuse: >/23 AsIs: e.Result#1/18 AsIs: >/1 ]] }
      if( ! refalrts::alloc_close_bracket( vm, context[25] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( vm, context[26] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( vm, context[27] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( vm, context[28] ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(vm, context[29], context[17]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( vm, context[30] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( vm, context[31] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_call( vm, context[32] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( vm, context[33], ref_Add.ref(vm) ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(vm, context[34], context[17]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_number( vm, context[35], 2UL ) )
        return refalrts::cNoMemory;
      refalrts::reinit_open_bracket( context[12] );
      refalrts::reinit_ident( context[15], ident_CmdCreateElem.ref(vm) );
      refalrts::reinit_ident( context[16], ident_Allocate.ref(vm) );
      refalrts::reinit_ident( context[22], ident_ElString.ref(vm) );
      refalrts::update_ident( context[24], ident_CmdInsertRange.ref(vm) );
      refalrts::reinit_close_call( context[23] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[23] );
      refalrts::push_stack( vm, context[32] );
      refalrts::link_brackets( context[27], context[31] );
      refalrts::link_brackets( context[28], context[30] );
      refalrts::link_brackets( context[11], context[26] );
      refalrts::link_brackets( context[12], context[25] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[23];
      res = refalrts::splice_evar( res, context[31], context[35] );
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_evar( res, context[29], context[30] );
      res = refalrts::splice_evar( res, context[24], context[24] );
      res = refalrts::splice_evar( res, context[25], context[28] );
      res = refalrts::splice_evar( res, context[20], context[21] );
      res = refalrts::splice_evar( res, context[16], context[22] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & DoGenResult/4 (/7 e.Vars#1/5 )/8 (/11 e.AllocCommands#1/9 )/12 (/15 e.Commands#1/13 )/16 s.Counter#1/17 (/22 # Brackets/24 e.InBrackets#1/20 )/23 e.Result#1/18 >/1
      if( ! refalrts::ident_term(  ident_Brackets.ref(vm), context[24] ) )
        continue;
      // closed e.Vars#1 as range 5
      // closed e.AllocCommands#1 as range 9
      // closed e.Commands#1 as range 13
      // closed e.InBrackets#1 as range 20
      // closed e.Result#1 as range 18
      //DEBUG: s.Counter#1: 17
      //DEBUG: e.Vars#1: 5
      //DEBUG: e.AllocCommands#1: 9
      //DEBUG: e.Commands#1: 13
      //DEBUG: e.InBrackets#1: 20
      //DEBUG: e.Result#1: 18

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenResult/4 AsIs: (/7 AsIs: e.Vars#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.AllocCommands#1/9 HalfReuse: (/12 HalfReuse: # CmdCreateElem/15 } Tile{ HalfReuse: # Allocate/16 AsIs: s.Counter#1/17 HalfReuse: # ElOpenBracket/22 HalfReuse: )/24 } )/25 (/26 (/27 # CmdInsertElem/28 s.Counter#1/17/29 )/30 Tile{ AsIs: e.Commands#1/13 } )/31 </32 & Inc/33 s.Counter#1/17/34 >/35 Tile{ AsIs: e.InBrackets#1/20 } (/36 # TkCloseBracket/37 s.Counter#1/17/38 Tile{ AsIs: )/23 AsIs: e.Result#1/18 AsIs: >/1 ]] }
      if( ! refalrts::alloc_close_bracket( vm, context[25] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( vm, context[26] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( vm, context[27] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( vm, context[28], ident_CmdInsertElem.ref(vm) ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(vm, context[29], context[17]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( vm, context[30] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( vm, context[31] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_call( vm, context[32] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( vm, context[33], ref_Inc.ref(vm) ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(vm, context[34], context[17]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( vm, context[35] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( vm, context[36] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( vm, context[37], ident_TkCloseBracket.ref(vm) ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(vm, context[38], context[17]))
        return refalrts::cNoMemory;
      refalrts::reinit_open_bracket( context[12] );
      refalrts::reinit_ident( context[15], ident_CmdCreateElem.ref(vm) );
      refalrts::reinit_ident( context[16], ident_Allocate.ref(vm) );
      refalrts::reinit_ident( context[22], ident_ElOpenBracket.ref(vm) );
      refalrts::reinit_close_bracket( context[24] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[36], context[23] );
      refalrts::push_stack( vm, context[35] );
      refalrts::push_stack( vm, context[32] );
      refalrts::link_brackets( context[26], context[31] );
      refalrts::link_brackets( context[27], context[30] );
      refalrts::link_brackets( context[11], context[25] );
      refalrts::link_brackets( context[12], context[24] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[23];
      res = refalrts::splice_evar( res, context[36], context[38] );
      res = refalrts::splice_evar( res, context[20], context[21] );
      res = refalrts::splice_evar( res, context[31], context[35] );
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_evar( res, context[25], context[30] );
      res = refalrts::splice_evar( res, context[16], context[24] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & DoGenResult/4 (/7 e.Vars#1/5 )/8 (/11 e.AllocCommands#1/9 )/12 (/15 e.Commands#1/13 )/16 s.Counter#1/17 (/22 # CallBrackets/24 e.InBrackets#1/20 )/23 e.Result#1/18 >/1
      if( ! refalrts::ident_term(  ident_CallBrackets.ref(vm), context[24] ) )
        continue;
      // closed e.Vars#1 as range 5
      // closed e.AllocCommands#1 as range 9
      // closed e.Commands#1 as range 13
      // closed e.InBrackets#1 as range 20
      // closed e.Result#1 as range 18
      //DEBUG: s.Counter#1: 17
      //DEBUG: e.Vars#1: 5
      //DEBUG: e.AllocCommands#1: 9
      //DEBUG: e.Commands#1: 13
      //DEBUG: e.InBrackets#1: 20
      //DEBUG: e.Result#1: 18

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenResult/4 AsIs: (/7 AsIs: e.Vars#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.AllocCommands#1/9 HalfReuse: (/12 HalfReuse: # CmdCreateElem/15 } Tile{ HalfReuse: # Allocate/16 AsIs: s.Counter#1/17 HalfReuse: # ElOpenCall/22 HalfReuse: )/24 } )/25 (/26 (/27 # CmdInsertElem/28 s.Counter#1/17/29 )/30 Tile{ AsIs: e.Commands#1/13 } )/31 </32 & Inc/33 s.Counter#1/17/34 >/35 Tile{ AsIs: e.InBrackets#1/20 } (/36 # TkCloseCall/37 s.Counter#1/17/38 Tile{ AsIs: )/23 AsIs: e.Result#1/18 AsIs: >/1 ]] }
      if( ! refalrts::alloc_close_bracket( vm, context[25] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( vm, context[26] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( vm, context[27] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( vm, context[28], ident_CmdInsertElem.ref(vm) ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(vm, context[29], context[17]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( vm, context[30] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( vm, context[31] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_call( vm, context[32] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( vm, context[33], ref_Inc.ref(vm) ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(vm, context[34], context[17]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( vm, context[35] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( vm, context[36] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( vm, context[37], ident_TkCloseCall.ref(vm) ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(vm, context[38], context[17]))
        return refalrts::cNoMemory;
      refalrts::reinit_open_bracket( context[12] );
      refalrts::reinit_ident( context[15], ident_CmdCreateElem.ref(vm) );
      refalrts::reinit_ident( context[16], ident_Allocate.ref(vm) );
      refalrts::reinit_ident( context[22], ident_ElOpenCall.ref(vm) );
      refalrts::reinit_close_bracket( context[24] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[36], context[23] );
      refalrts::push_stack( vm, context[35] );
      refalrts::push_stack( vm, context[32] );
      refalrts::link_brackets( context[26], context[31] );
      refalrts::link_brackets( context[27], context[30] );
      refalrts::link_brackets( context[11], context[25] );
      refalrts::link_brackets( context[12], context[24] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[23];
      res = refalrts::splice_evar( res, context[36], context[38] );
      res = refalrts::splice_evar( res, context[20], context[21] );
      res = refalrts::splice_evar( res, context[31], context[35] );
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_evar( res, context[25], context[30] );
      res = refalrts::splice_evar( res, context[16], context[24] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & DoGenResult/4 (/7 e.Vars#1/5 )/8 (/11 e.AllocCommands#1/9 )/12 (/15 e.Commands#1/13 )/16 s.Counter#1/17 (/22 # ADT-Brackets/24 (/29 e.Name#1/27 )/30 e.InBrackets#1/25 )/23 e.Result#1/18 >/1
      context[25] = context[20];
      context[26] = context[21];
      if( ! refalrts::ident_term(  ident_ADTm_Brackets.ref(vm), context[24] ) )
        continue;
      context[27] = 0;
      context[28] = 0;
      context[29] = refalrts::brackets_left( context[27], context[28], context[25], context[26] );
      if( ! context[29] )
        continue;
      refalrts::bracket_pointers(context[29], context[30]);
      // closed e.Vars#1 as range 5
      // closed e.AllocCommands#1 as range 9
      // closed e.Commands#1 as range 13
      // closed e.Name#1 as range 27
      // closed e.InBrackets#1 as range 25
      // closed e.Result#1 as range 18
      //DEBUG: s.Counter#1: 17
      //DEBUG: e.Vars#1: 5
      //DEBUG: e.AllocCommands#1: 9
      //DEBUG: e.Commands#1: 13
      //DEBUG: e.Name#1: 27
      //DEBUG: e.InBrackets#1: 25
      //DEBUG: e.Result#1: 18

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenResult/4 AsIs: (/7 AsIs: e.Vars#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.AllocCommands#1/9 HalfReuse: (/12 HalfReuse: # CmdCreateElem/15 } # Allocate/31 s.Counter#1/17/32 # ElOpenADT/33 )/34 )/35 (/36 (/37 # CmdInsertElem/38 s.Counter#1/17/39 )/40 Tile{ AsIs: e.Commands#1/13 } )/41 </42 Tile{ HalfReuse: & Inc/16 AsIs: s.Counter#1/17 HalfReuse: >/22 HalfReuse: (/24 HalfReuse: # TkName/29 AsIs: e.Name#1/27 AsIs: )/30 AsIs: e.InBrackets#1/25 HalfReuse: (/23 } # TkCloseADT/43 s.Counter#1/17/44 )/45 Tile{ AsIs: e.Result#1/18 } Tile{ AsIs: >/1 ]] }
      if( ! refalrts::alloc_ident( vm, context[31], ident_Allocate.ref(vm) ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(vm, context[32], context[17]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( vm, context[33], ident_ElOpenADT.ref(vm) ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( vm, context[34] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( vm, context[35] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( vm, context[36] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( vm, context[37] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( vm, context[38], ident_CmdInsertElem.ref(vm) ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(vm, context[39], context[17]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( vm, context[40] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( vm, context[41] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_call( vm, context[42] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( vm, context[43], ident_TkCloseADT.ref(vm) ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(vm, context[44], context[17]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( vm, context[45] ) )
        return refalrts::cNoMemory;
      refalrts::reinit_open_bracket( context[12] );
      refalrts::reinit_ident( context[15], ident_CmdCreateElem.ref(vm) );
      refalrts::reinit_name( context[16], ref_Inc.ref(vm) );
      refalrts::reinit_close_call( context[22] );
      refalrts::reinit_open_bracket( context[24] );
      refalrts::reinit_ident( context[29], ident_TkName.ref(vm) );
      refalrts::reinit_open_bracket( context[23] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[23], context[45] );
      refalrts::link_brackets( context[24], context[30] );
      refalrts::push_stack( vm, context[22] );
      refalrts::push_stack( vm, context[42] );
      refalrts::link_brackets( context[36], context[41] );
      refalrts::link_brackets( context[37], context[40] );
      refalrts::link_brackets( context[11], context[35] );
      refalrts::link_brackets( context[12], context[34] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[18], context[19] );
      res = refalrts::splice_evar( res, context[43], context[45] );
      res = refalrts::splice_evar( res, context[16], context[23] );
      res = refalrts::splice_evar( res, context[41], context[42] );
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_evar( res, context[31], context[40] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & DoGenResult/4 (/7 e.Vars#1/5 )/8 (/11 e.AllocCommands#1/9 )/12 (/15 e.Commands#1/13 )/16 s.Counter#1/17 (/22 # ClosureBrackets/24 e.InBrackets#1/20 )/23 e.Result#1/18 >/1
      if( ! refalrts::ident_term(  ident_ClosureBrackets.ref(vm), context[24] ) )
        continue;
      // closed e.Vars#1 as range 5
      // closed e.AllocCommands#1 as range 9
      // closed e.Commands#1 as range 13
      // closed e.InBrackets#1 as range 20
      // closed e.Result#1 as range 18
      //DEBUG: s.Counter#1: 17
      //DEBUG: e.Vars#1: 5
      //DEBUG: e.AllocCommands#1: 9
      //DEBUG: e.Commands#1: 13
      //DEBUG: e.InBrackets#1: 20
      //DEBUG: e.Result#1: 18

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenResult/4 AsIs: (/7 AsIs: e.Vars#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.AllocCommands#1/9 HalfReuse: (/12 HalfReuse: # CmdCreateElem/15 } Tile{ HalfReuse: # Allocate/16 AsIs: s.Counter#1/17 HalfReuse: # ElClosureHead/22 HalfReuse: )/24 } )/25 (/26 (/27 # CmdInsertElem/28 s.Counter#1/17/29 )/30 Tile{ AsIs: e.Commands#1/13 } )/31 </32 & Inc/33 s.Counter#1/17/34 >/35 Tile{ AsIs: e.InBrackets#1/20 } (/36 # TkUnwrappedClosure/37 s.Counter#1/17/38 Tile{ AsIs: )/23 AsIs: e.Result#1/18 AsIs: >/1 ]] }
      if( ! refalrts::alloc_close_bracket( vm, context[25] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( vm, context[26] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( vm, context[27] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( vm, context[28], ident_CmdInsertElem.ref(vm) ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(vm, context[29], context[17]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( vm, context[30] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( vm, context[31] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_call( vm, context[32] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( vm, context[33], ref_Inc.ref(vm) ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(vm, context[34], context[17]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( vm, context[35] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( vm, context[36] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( vm, context[37], ident_TkUnwrappedClosure.ref(vm) ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(vm, context[38], context[17]))
        return refalrts::cNoMemory;
      refalrts::reinit_open_bracket( context[12] );
      refalrts::reinit_ident( context[15], ident_CmdCreateElem.ref(vm) );
      refalrts::reinit_ident( context[16], ident_Allocate.ref(vm) );
      refalrts::reinit_ident( context[22], ident_ElClosureHead.ref(vm) );
      refalrts::reinit_close_bracket( context[24] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[36], context[23] );
      refalrts::push_stack( vm, context[35] );
      refalrts::push_stack( vm, context[32] );
      refalrts::link_brackets( context[26], context[31] );
      refalrts::link_brackets( context[27], context[30] );
      refalrts::link_brackets( context[11], context[25] );
      refalrts::link_brackets( context[12], context[24] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[23];
      res = refalrts::splice_evar( res, context[36], context[38] );
      res = refalrts::splice_evar( res, context[20], context[21] );
      res = refalrts::splice_evar( res, context[31], context[35] );
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_evar( res, context[25], context[30] );
      res = refalrts::splice_evar( res, context[16], context[24] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & DoGenResult/4 (/7 e.new#13/5 )/8 (/11 e.new#14/9 )/12 (/15 e.new#15/13 )/16 s.new#16/17 (/22 s.new#17/24 s.new#18/27 e.new#19/25 )/23 e.new#20/18 >/1
    context[25] = context[20];
    context[26] = context[21];
    // closed e.new#13 as range 5
    // closed e.new#14 as range 9
    // closed e.new#15 as range 13
    // closed e.new#20 as range 18
    if( ! refalrts::svar_left( context[27], context[25], context[26] ) )
      continue;
    // closed e.new#19 as range 25
    do {
      // </0 & DoGenResult/4 (/7 e.new#21/5 )/8 (/11 e.new#22/9 )/12 (/15 e.new#23/13 )/16 s.new#24/17 (/22 s.new#25/24 s.new#26/27 )/23 e.new#27/18 >/1
      if( ! refalrts::empty_seq( context[25], context[26] ) )
        continue;
      // closed e.new#21 as range 5
      // closed e.new#22 as range 9
      // closed e.new#23 as range 13
      // closed e.new#27 as range 18
      do {
        // </0 & DoGenResult/4 (/7 e.Vars#1/5 )/8 (/11 e.AllocCommands#1/9 )/12 (/15 e.Commands#1/13 )/16 s.Counter#1/17 (/22 # TkCloseBracket/24 s.OpenCounter#1/27 )/23 e.Result#1/18 >/1
        if( ! refalrts::ident_term(  ident_TkCloseBracket.ref(vm), context[24] ) )
          continue;
        // closed e.Vars#1 as range 5
        // closed e.AllocCommands#1 as range 9
        // closed e.Commands#1 as range 13
        // closed e.Result#1 as range 18
        //DEBUG: s.Counter#1: 17
        //DEBUG: s.OpenCounter#1: 27
        //DEBUG: e.Vars#1: 5
        //DEBUG: e.AllocCommands#1: 9
        //DEBUG: e.Commands#1: 13
        //DEBUG: e.Result#1: 18

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenResult/4 AsIs: (/7 AsIs: e.Vars#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.AllocCommands#1/9 HalfReuse: (/12 HalfReuse: # CmdCreateElem/15 } # Allocate/28 s.Counter#1/17/29 # ElCloseBracket/30 )/31 )/32 (/33 Tile{ AsIs: (/22 Reuse: # CmdLinkBrackets/24 AsIs: s.OpenCounter#1/27 } s.Counter#1/17/34 )/35 (/36 Tile{ HalfReuse: # CmdInsertElem/16 AsIs: s.Counter#1/17 } )/37 Tile{ AsIs: e.Commands#1/13 } )/38 </39 & Inc/40 s.Counter#1/17/41 Tile{ HalfReuse: >/23 AsIs: e.Result#1/18 AsIs: >/1 ]] }
        if( ! refalrts::alloc_ident( vm, context[28], ident_Allocate.ref(vm) ) )
          return refalrts::cNoMemory;
        if (! refalrts::copy_stvar(vm, context[29], context[17]))
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_ident( vm, context[30], ident_ElCloseBracket.ref(vm) ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_bracket( vm, context[31] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_bracket( vm, context[32] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_open_bracket( vm, context[33] ) )
          return refalrts::cNoMemory;
        if (! refalrts::copy_stvar(vm, context[34], context[17]))
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_bracket( vm, context[35] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_open_bracket( vm, context[36] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_bracket( vm, context[37] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_bracket( vm, context[38] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_open_call( vm, context[39] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_name( vm, context[40], ref_Inc.ref(vm) ) )
          return refalrts::cNoMemory;
        if (! refalrts::copy_stvar(vm, context[41], context[17]))
          return refalrts::cNoMemory;
        refalrts::reinit_open_bracket( context[12] );
        refalrts::reinit_ident( context[15], ident_CmdCreateElem.ref(vm) );
        refalrts::update_ident( context[24], ident_CmdLinkBrackets.ref(vm) );
        refalrts::reinit_ident( context[16], ident_CmdInsertElem.ref(vm) );
        refalrts::reinit_close_call( context[23] );
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::push_stack( vm, context[23] );
        refalrts::push_stack( vm, context[39] );
        refalrts::link_brackets( context[33], context[38] );
        refalrts::link_brackets( context[36], context[37] );
        refalrts::link_brackets( context[22], context[35] );
        refalrts::link_brackets( context[11], context[32] );
        refalrts::link_brackets( context[12], context[31] );
        refalrts::link_brackets( context[7], context[8] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[23];
        res = refalrts::splice_evar( res, context[38], context[41] );
        res = refalrts::splice_evar( res, context[13], context[14] );
        res = refalrts::splice_evar( res, context[37], context[37] );
        res = refalrts::splice_evar( res, context[16], context[17] );
        res = refalrts::splice_evar( res, context[34], context[36] );
        res = refalrts::splice_evar( res, context[22], context[27] );
        res = refalrts::splice_evar( res, context[28], context[33] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & DoGenResult/4 (/7 e.Vars#1/5 )/8 (/11 e.AllocCommands#1/9 )/12 (/15 e.Commands#1/13 )/16 s.Counter#1/17 (/22 # TkCloseADT/24 s.OpenCounter#1/27 )/23 e.Result#1/18 >/1
        if( ! refalrts::ident_term(  ident_TkCloseADT.ref(vm), context[24] ) )
          continue;
        // closed e.Vars#1 as range 5
        // closed e.AllocCommands#1 as range 9
        // closed e.Commands#1 as range 13
        // closed e.Result#1 as range 18
        //DEBUG: s.Counter#1: 17
        //DEBUG: s.OpenCounter#1: 27
        //DEBUG: e.Vars#1: 5
        //DEBUG: e.AllocCommands#1: 9
        //DEBUG: e.Commands#1: 13
        //DEBUG: e.Result#1: 18

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenResult/4 AsIs: (/7 AsIs: e.Vars#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.AllocCommands#1/9 HalfReuse: (/12 HalfReuse: # CmdCreateElem/15 } # Allocate/28 s.Counter#1/17/29 # ElCloseADT/30 )/31 )/32 (/33 Tile{ AsIs: (/22 Reuse: # CmdLinkBrackets/24 AsIs: s.OpenCounter#1/27 } s.Counter#1/17/34 )/35 (/36 Tile{ HalfReuse: # CmdInsertElem/16 AsIs: s.Counter#1/17 } )/37 Tile{ AsIs: e.Commands#1/13 } )/38 </39 & Inc/40 s.Counter#1/17/41 Tile{ HalfReuse: >/23 AsIs: e.Result#1/18 AsIs: >/1 ]] }
        if( ! refalrts::alloc_ident( vm, context[28], ident_Allocate.ref(vm) ) )
          return refalrts::cNoMemory;
        if (! refalrts::copy_stvar(vm, context[29], context[17]))
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_ident( vm, context[30], ident_ElCloseADT.ref(vm) ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_bracket( vm, context[31] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_bracket( vm, context[32] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_open_bracket( vm, context[33] ) )
          return refalrts::cNoMemory;
        if (! refalrts::copy_stvar(vm, context[34], context[17]))
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_bracket( vm, context[35] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_open_bracket( vm, context[36] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_bracket( vm, context[37] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_bracket( vm, context[38] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_open_call( vm, context[39] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_name( vm, context[40], ref_Inc.ref(vm) ) )
          return refalrts::cNoMemory;
        if (! refalrts::copy_stvar(vm, context[41], context[17]))
          return refalrts::cNoMemory;
        refalrts::reinit_open_bracket( context[12] );
        refalrts::reinit_ident( context[15], ident_CmdCreateElem.ref(vm) );
        refalrts::update_ident( context[24], ident_CmdLinkBrackets.ref(vm) );
        refalrts::reinit_ident( context[16], ident_CmdInsertElem.ref(vm) );
        refalrts::reinit_close_call( context[23] );
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::push_stack( vm, context[23] );
        refalrts::push_stack( vm, context[39] );
        refalrts::link_brackets( context[33], context[38] );
        refalrts::link_brackets( context[36], context[37] );
        refalrts::link_brackets( context[22], context[35] );
        refalrts::link_brackets( context[11], context[32] );
        refalrts::link_brackets( context[12], context[31] );
        refalrts::link_brackets( context[7], context[8] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[23];
        res = refalrts::splice_evar( res, context[38], context[41] );
        res = refalrts::splice_evar( res, context[13], context[14] );
        res = refalrts::splice_evar( res, context[37], context[37] );
        res = refalrts::splice_evar( res, context[16], context[17] );
        res = refalrts::splice_evar( res, context[34], context[36] );
        res = refalrts::splice_evar( res, context[22], context[27] );
        res = refalrts::splice_evar( res, context[28], context[33] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & DoGenResult/4 (/7 e.Vars#1/5 )/8 (/11 e.AllocCommands#1/9 )/12 (/15 e.Commands#1/13 )/16 s.Counter#1/17 (/22 # TkCloseCall/24 s.OpenCounter#1/27 )/23 e.Result#1/18 >/1
        if( ! refalrts::ident_term(  ident_TkCloseCall.ref(vm), context[24] ) )
          continue;
        // closed e.Vars#1 as range 5
        // closed e.AllocCommands#1 as range 9
        // closed e.Commands#1 as range 13
        // closed e.Result#1 as range 18
        //DEBUG: s.Counter#1: 17
        //DEBUG: s.OpenCounter#1: 27
        //DEBUG: e.Vars#1: 5
        //DEBUG: e.AllocCommands#1: 9
        //DEBUG: e.Commands#1: 13
        //DEBUG: e.Result#1: 18

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenResult/4 AsIs: (/7 AsIs: e.Vars#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.AllocCommands#1/9 HalfReuse: (/12 HalfReuse: # CmdCreateElem/15 } Tile{ HalfReuse: # Allocate/16 AsIs: s.Counter#1/17 } # ElCloseCall/28 )/29 )/30 (/31 (/32 # CmdPushStack/33 s.Counter#1/17/34 )/35 Tile{ AsIs: (/22 Reuse: # CmdPushStack/24 AsIs: s.OpenCounter#1/27 AsIs: )/23 } (/36 # CmdInsertElem/37 s.Counter#1/17/38 )/39 Tile{ AsIs: e.Commands#1/13 } )/40 </41 & Inc/42 s.Counter#1/17/43 >/44 Tile{ AsIs: e.Result#1/18 } Tile{ AsIs: >/1 ]] }
        if( ! refalrts::alloc_ident( vm, context[28], ident_ElCloseCall.ref(vm) ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_bracket( vm, context[29] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_bracket( vm, context[30] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_open_bracket( vm, context[31] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_open_bracket( vm, context[32] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_ident( vm, context[33], ident_CmdPushStack.ref(vm) ) )
          return refalrts::cNoMemory;
        if (! refalrts::copy_stvar(vm, context[34], context[17]))
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_bracket( vm, context[35] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_open_bracket( vm, context[36] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_ident( vm, context[37], ident_CmdInsertElem.ref(vm) ) )
          return refalrts::cNoMemory;
        if (! refalrts::copy_stvar(vm, context[38], context[17]))
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_bracket( vm, context[39] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_bracket( vm, context[40] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_open_call( vm, context[41] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_name( vm, context[42], ref_Inc.ref(vm) ) )
          return refalrts::cNoMemory;
        if (! refalrts::copy_stvar(vm, context[43], context[17]))
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_call( vm, context[44] ) )
          return refalrts::cNoMemory;
        refalrts::reinit_open_bracket( context[12] );
        refalrts::reinit_ident( context[15], ident_CmdCreateElem.ref(vm) );
        refalrts::reinit_ident( context[16], ident_Allocate.ref(vm) );
        refalrts::update_ident( context[24], ident_CmdPushStack.ref(vm) );
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::push_stack( vm, context[44] );
        refalrts::push_stack( vm, context[41] );
        refalrts::link_brackets( context[31], context[40] );
        refalrts::link_brackets( context[36], context[39] );
        refalrts::link_brackets( context[22], context[23] );
        refalrts::link_brackets( context[32], context[35] );
        refalrts::link_brackets( context[11], context[30] );
        refalrts::link_brackets( context[12], context[29] );
        refalrts::link_brackets( context[7], context[8] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[18], context[19] );
        res = refalrts::splice_evar( res, context[40], context[44] );
        res = refalrts::splice_evar( res, context[13], context[14] );
        res = refalrts::splice_evar( res, context[36], context[39] );
        res = refalrts::splice_evar( res, context[22], context[23] );
        res = refalrts::splice_evar( res, context[28], context[35] );
        res = refalrts::splice_evar( res, context[16], context[17] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & DoGenResult/4 (/7 e.Vars#1/5 )/8 (/11 e.AllocCommands#1/9 )/12 (/15 e.Commands#1/13 )/16 s.Counter#1/17 (/22 # TkUnwrappedClosure/24 s.HeadCounter#1/27 )/23 e.Result#1/18 >/1
      if( ! refalrts::ident_term(  ident_TkUnwrappedClosure.ref(vm), context[24] ) )
        continue;
      // closed e.Vars#1 as range 5
      // closed e.AllocCommands#1 as range 9
      // closed e.Commands#1 as range 13
      // closed e.Result#1 as range 18
      //DEBUG: s.Counter#1: 17
      //DEBUG: s.HeadCounter#1: 27
      //DEBUG: e.Vars#1: 5
      //DEBUG: e.AllocCommands#1: 9
      //DEBUG: e.Commands#1: 13
      //DEBUG: e.Result#1: 18

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.HeadCounter#1/27 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenResult/4 AsIs: (/7 AsIs: e.Vars#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.AllocCommands#1/9 HalfReuse: (/12 HalfReuse: # CmdCreateElem/15 } Tile{ HalfReuse: # Allocate/16 AsIs: s.Counter#1/17 HalfReuse: # ElUnwrappedClosure/22 HalfReuse: s.HeadCounter1 #27/24 } )/28 )/29 (/30 (/31 # CmdInsertElem/32 s.Counter#1/17/33 )/34 Tile{ AsIs: e.Commands#1/13 } (/35 # CmdWrapClosure/36 s.Counter#1/17/37 )/38 )/39 </40 & Inc/41 s.Counter#1/17/42 Tile{ HalfReuse: >/23 AsIs: e.Result#1/18 AsIs: >/1 ]] }
      if( ! refalrts::alloc_close_bracket( vm, context[28] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( vm, context[29] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( vm, context[30] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( vm, context[31] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( vm, context[32], ident_CmdInsertElem.ref(vm) ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(vm, context[33], context[17]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( vm, context[34] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( vm, context[35] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( vm, context[36], ident_CmdWrapClosure.ref(vm) ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(vm, context[37], context[17]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( vm, context[38] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( vm, context[39] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_call( vm, context[40] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( vm, context[41], ref_Inc.ref(vm) ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(vm, context[42], context[17]))
        return refalrts::cNoMemory;
      refalrts::reinit_open_bracket( context[12] );
      refalrts::reinit_ident( context[15], ident_CmdCreateElem.ref(vm) );
      refalrts::reinit_ident( context[16], ident_Allocate.ref(vm) );
      refalrts::reinit_ident( context[22], ident_ElUnwrappedClosure.ref(vm) );
      refalrts::reinit_svar( context[24], context[27] );
      refalrts::reinit_close_call( context[23] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[23] );
      refalrts::push_stack( vm, context[40] );
      refalrts::link_brackets( context[30], context[39] );
      refalrts::link_brackets( context[35], context[38] );
      refalrts::link_brackets( context[31], context[34] );
      refalrts::link_brackets( context[11], context[29] );
      refalrts::link_brackets( context[12], context[28] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[23];
      res = refalrts::splice_evar( res, context[35], context[42] );
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_evar( res, context[28], context[34] );
      res = refalrts::splice_evar( res, context[16], context[24] );
      refalrts::splice_to_freelist_open( vm, context[15], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & DoGenResult/4 (/7 e.new#21/5 )/8 (/11 e.new#22/9 )/12 (/15 e.new#23/13 )/16 s.new#24/17 (/22 # TkVariable/24 s.new#25/27 e.new#26/25 )/23 e.new#27/18 >/1
    if( ! refalrts::ident_term(  ident_TkVariable.ref(vm), context[24] ) )
      continue;
    // closed e.new#21 as range 5
    // closed e.new#22 as range 9
    // closed e.new#23 as range 13
    // closed e.new#26 as range 25
    // closed e.new#27 as range 18
    do {
      // </0 & DoGenResult/4 (/7 e.Vars-B#1/30 (/36 s.Mode#1/38 (/41 e.Index#1/47 )/42 (/45 e.ResultVars#1/43 )/46 s.NextPatternVar#1/49 e.PatternVars#1/34 )/37 e.Vars-E#1/32 )/8 (/11 e.AllocCommands#1/9 )/12 (/15 e.Commands#1/13 )/16 s.Counter#1/17 (/22 # TkVariable/24 s.Mode#1/27 e.Index#1/25 )/23 e.Result#1/18 >/1
      context[28] = context[5];
      context[29] = context[6];
      // closed e.AllocCommands#1 as range 9
      // closed e.Commands#1 as range 13
      // closed e.Index#1 as range 25
      // closed e.Result#1 as range 18
      context[30] = 0;
      context[31] = 0;
      refalrts::start_e_loop(vm);
      do {
        context[32] = context[28];
        context[33] = context[29];
        context[34] = 0;
        context[35] = 0;
        context[36] = refalrts::brackets_left( context[34], context[35], context[32], context[33] );
        if( ! context[36] )
          continue;
        refalrts::bracket_pointers(context[36], context[37]);
        if( ! refalrts::repeated_stvar_left( vm, context[38], context[27], context[34], context[35] ) )
          continue;
        context[39] = 0;
        context[40] = 0;
        context[41] = refalrts::brackets_left( context[39], context[40], context[34], context[35] );
        if( ! context[41] )
          continue;
        refalrts::bracket_pointers(context[41], context[42]);
        context[43] = 0;
        context[44] = 0;
        context[45] = refalrts::brackets_left( context[43], context[44], context[34], context[35] );
        if( ! context[45] )
          continue;
        refalrts::bracket_pointers(context[45], context[46]);
        if( ! refalrts::repeated_evar_left( vm, context[47], context[48], context[25], context[26], context[39], context[40] ) )
          continue;
        if( ! refalrts::empty_seq( context[39], context[40] ) )
          continue;
        // closed e.ResultVars#1 as range 43
        // closed e.Vars-E#1 as range 32
        if( ! refalrts::svar_left( context[49], context[34], context[35] ) )
          continue;
        // closed e.PatternVars#1 as range 34
        //DEBUG: s.Counter#1: 17
        //DEBUG: s.Mode#1: 27
        //DEBUG: e.AllocCommands#1: 9
        //DEBUG: e.Commands#1: 13
        //DEBUG: e.Index#1: 25
        //DEBUG: e.Result#1: 18
        //DEBUG: e.Vars-B#1: 30
        //DEBUG: e.ResultVars#1: 43
        //DEBUG: e.Vars-E#1: 32
        //DEBUG: s.NextPatternVar#1: 49
        //DEBUG: e.PatternVars#1: 34

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Counter#1/17 {REMOVED TILE} e.Index#1/25 {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenResult/4 AsIs: (/7 AsIs: e.Vars-B#1/30 AsIs: (/36 AsIs: s.Mode#1/38 AsIs: (/41 AsIs: e.Index#1/47 AsIs: )/42 AsIs: (/45 AsIs: e.ResultVars#1/43 HalfReuse: s.NextPatternVar1 #49/46 } Tile{ AsIs: )/16 } Tile{ AsIs: e.PatternVars#1/34 } Tile{ AsIs: )/37 AsIs: e.Vars-E#1/32 AsIs: )/8 AsIs: (/11 AsIs: e.AllocCommands#1/9 AsIs: )/12 AsIs: (/15 } Tile{ AsIs: (/22 Reuse: # CmdInsertVar/24 AsIs: s.Mode#1/27 } Tile{ AsIs: s.NextPatternVar#1/49 } )/50 Tile{ AsIs: e.Commands#1/13 } )/51 Tile{ HalfReuse: s.Counter1 #17/23 AsIs: e.Result#1/18 AsIs: >/1 ]] }
        if( ! refalrts::alloc_close_bracket( vm, context[50] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_bracket( vm, context[51] ) )
          return refalrts::cNoMemory;
        refalrts::reinit_svar( context[46], context[49] );
        refalrts::update_ident( context[24], ident_CmdInsertVar.ref(vm) );
        refalrts::reinit_svar( context[23], context[17] );
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[15], context[51] );
        refalrts::link_brackets( context[22], context[50] );
        refalrts::link_brackets( context[11], context[12] );
        refalrts::link_brackets( context[7], context[8] );
        refalrts::link_brackets( context[36], context[37] );
        refalrts::link_brackets( context[45], context[16] );
        refalrts::link_brackets( context[41], context[42] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[23];
        res = refalrts::splice_evar( res, context[51], context[51] );
        res = refalrts::splice_evar( res, context[13], context[14] );
        res = refalrts::splice_evar( res, context[50], context[50] );
        res = refalrts::splice_evar( res, context[49], context[49] );
        res = refalrts::splice_evar( res, context[22], context[27] );
        res = refalrts::splice_evar( res, context[37], context[15] );
        res = refalrts::splice_evar( res, context[34], context[35] );
        res = refalrts::splice_evar( res, context[16], context[16] );
        refalrts::splice_to_freelist_open( vm, context[46], res );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[30], context[31], context[28], context[29] ) );
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & DoGenResult/4 (/7 e.Vars-B#1/30 (/36 s.Mode#1/46 (/44 e.Index#1/47 )/45 (/40 e.ResultVars#1/38 s.Sample#1/49 )/41 )/37 e.Vars-E#1/32 )/8 (/11 e.AllocCommands#1/9 )/12 (/15 e.Commands#1/13 )/16 s.Counter#1/17 (/22 # TkVariable/24 s.Mode#1/27 e.Index#1/25 )/23 e.Result#1/18 >/1
    context[28] = context[5];
    context[29] = context[6];
    // closed e.AllocCommands#1 as range 9
    // closed e.Commands#1 as range 13
    // closed e.Index#1 as range 25
    // closed e.Result#1 as range 18
    context[30] = 0;
    context[31] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[32] = context[28];
      context[33] = context[29];
      context[34] = 0;
      context[35] = 0;
      context[36] = refalrts::brackets_left( context[34], context[35], context[32], context[33] );
      if( ! context[36] )
        continue;
      refalrts::bracket_pointers(context[36], context[37]);
      context[38] = 0;
      context[39] = 0;
      context[40] = refalrts::brackets_right( context[38], context[39], context[34], context[35] );
      if( ! context[40] )
        continue;
      refalrts::bracket_pointers(context[40], context[41]);
      context[42] = 0;
      context[43] = 0;
      context[44] = refalrts::brackets_right( context[42], context[43], context[34], context[35] );
      if( ! context[44] )
        continue;
      refalrts::bracket_pointers(context[44], context[45]);
      if( ! refalrts::repeated_stvar_left( vm, context[46], context[27], context[34], context[35] ) )
        continue;
      if( ! refalrts::empty_seq( context[34], context[35] ) )
        continue;
      if( ! refalrts::repeated_evar_left( vm, context[47], context[48], context[25], context[26], context[42], context[43] ) )
        continue;
      if( ! refalrts::empty_seq( context[42], context[43] ) )
        continue;
      // closed e.Vars-E#1 as range 32
      if( ! refalrts::svar_right( context[49], context[38], context[39] ) )
        continue;
      // closed e.ResultVars#1 as range 38
      //DEBUG: s.Counter#1: 17
      //DEBUG: s.Mode#1: 27
      //DEBUG: e.AllocCommands#1: 9
      //DEBUG: e.Commands#1: 13
      //DEBUG: e.Index#1: 25
      //DEBUG: e.Result#1: 18
      //DEBUG: e.Vars-B#1: 30
      //DEBUG: e.Vars-E#1: 32
      //DEBUG: s.Sample#1: 49
      //DEBUG: e.ResultVars#1: 38

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.Index#1/25 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenResult/4 AsIs: (/7 AsIs: e.Vars-B#1/30 AsIs: (/36 AsIs: s.Mode#1/46 AsIs: (/44 AsIs: e.Index#1/47 AsIs: )/45 AsIs: (/40 AsIs: e.ResultVars#1/38 AsIs: s.Sample#1/49 HalfReuse: s.Counter1 #17/41 AsIs: )/37 } )/50 Tile{ AsIs: e.Vars-E#1/32 } Tile{ AsIs: )/8 AsIs: (/11 AsIs: e.AllocCommands#1/9 HalfReuse: (/12 HalfReuse: # CmdCopyVar/15 } Tile{ HalfReuse: s.Mode1 #46/16 AsIs: s.Counter#1/17 } s.Sample#1/49/51 )/52 )/53 (/54 Tile{ AsIs: (/22 Reuse: # CmdInsertVar/24 AsIs: s.Mode#1/27 } s.Counter#1/17/55 )/56 Tile{ AsIs: e.Commands#1/13 } )/57 </58 & IncVarOffset/59 s.Counter#1/17/60 s.Mode#1/46/61 Tile{ HalfReuse: >/23 AsIs: e.Result#1/18 AsIs: >/1 ]] }
      if( ! refalrts::alloc_close_bracket( vm, context[50] ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(vm, context[51], context[49]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( vm, context[52] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( vm, context[53] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( vm, context[54] ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(vm, context[55], context[17]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( vm, context[56] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( vm, context[57] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_call( vm, context[58] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( vm, context[59], ref_IncVarOffset.ref(vm) ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(vm, context[60], context[17]))
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(vm, context[61], context[46]))
        return refalrts::cNoMemory;
      refalrts::reinit_svar( context[41], context[17] );
      refalrts::reinit_open_bracket( context[12] );
      refalrts::reinit_ident( context[15], ident_CmdCopyVar.ref(vm) );
      refalrts::reinit_svar( context[16], context[46] );
      refalrts::update_ident( context[24], ident_CmdInsertVar.ref(vm) );
      refalrts::reinit_close_call( context[23] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[23] );
      refalrts::push_stack( vm, context[58] );
      refalrts::link_brackets( context[54], context[57] );
      refalrts::link_brackets( context[22], context[56] );
      refalrts::link_brackets( context[11], context[53] );
      refalrts::link_brackets( context[12], context[52] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::link_brackets( context[36], context[50] );
      refalrts::link_brackets( context[40], context[37] );
      refalrts::link_brackets( context[44], context[45] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[23];
      res = refalrts::splice_evar( res, context[57], context[61] );
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_evar( res, context[55], context[56] );
      res = refalrts::splice_evar( res, context[22], context[27] );
      res = refalrts::splice_evar( res, context[51], context[54] );
      res = refalrts::splice_evar( res, context[16], context[17] );
      res = refalrts::splice_evar( res, context[8], context[15] );
      res = refalrts::splice_evar( res, context[32], context[33] );
      res = refalrts::splice_evar( res, context[50], context[50] );
      refalrts::splice_to_freelist_open( vm, context[37], res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[30], context[31], context[28], context[29] ) );
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

static refalrts::NativeReference nat_ref_DoGenResult("DoGenResult", 1584841285U, 782216036U, func_DoGenResult);


static refalrts::FnResult func_MakeVariableCommentTable(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & MakeVariableCommentTable/4 e.Vars#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Vars#1 as range 2
  //DEBUG: e.Vars#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 AsIs: e.Vars#1/2 HalfReuse: </1 } & Pipe/5 (/6 & Map/7 & ReplicateVar/8 )/9 & Sort/10 (/11 & Map/12 & MakeVariableComment/13 )/14 >/15 >/16 Tile{ ]] }
  if( ! refalrts::alloc_name( vm, context[5], ref_Pipe.ref(vm) ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( vm, context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[7], ref_Map.ref(vm) ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[8], ref_ReplicateVar.ref(vm) ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[10], ref_Sort.ref(vm) ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( vm, context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[12], ref_Map.ref(vm) ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[13], ref_MakeVariableComment.ref(vm) ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( vm, context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( vm, context[16] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_Fetch.ref(vm) );
  refalrts::reinit_open_call( context[1] );
  refalrts::push_stack( vm, context[16] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[15] );
  refalrts::push_stack( vm, context[1] );
  refalrts::link_brackets( context[11], context[14] );
  refalrts::link_brackets( context[6], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[16] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_MakeVariableCommentTable("MakeVariableCommentTable", 0U, 0U, func_MakeVariableCommentTable);


static refalrts::FnResult func_gen_ReplicateVar_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
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
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_svar( context[4], context[10] );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[0], context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[6], context[7] );
  refalrts::splice_to_freelist_open( vm, context[5], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ReplicateVar_L1("ReplicateVar\\1", 1584841285U, 782216036U, func_gen_ReplicateVar_L1);


static refalrts::FnResult func_ReplicateVar(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
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
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} )/17 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: </8 } Tile{ HalfReuse: & Map/0 HalfReuse: [*]/4 HalfReuse: & ReplicateVar\1/7 AsIs: s.Mode#1/9 AsIs: (/12 AsIs: e.Index#1/10 AsIs: )/13 HalfReuse: {*}/16 } Tile{ AsIs: e.ResultOccurences#1/14 } Tile{ AsIs: e.PatternOccurences#1/5 } Tile{ AsIs: >/1 ]] }
  refalrts::reinit_open_call( context[8] );
  refalrts::reinit_name( context[0], ref_Map.ref(vm) );
  refalrts::reinit_closure_head( context[4] );
  refalrts::reinit_name( context[7], ref_gen_ReplicateVar_L1.ref(vm) );
  refalrts::reinit_unwrapped_closure( context[16], context[4] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[8] );
  refalrts::link_brackets( context[12], context[13] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[14], context[15] );
  res = refalrts::splice_evar( res, context[0], context[16] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  refalrts::wrap_closure( context[16] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ReplicateVar("ReplicateVar", 1584841285U, 782216036U, func_ReplicateVar);


static refalrts::FnResult func_MakeVariableComment(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
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
  if( ! refalrts::alloc_chars( vm, context[12], context[13], ": ", 2 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( vm, context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[15], ref_PrintVar.ref(vm) ) )
    return refalrts::cNoMemory;
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_ident( context[4], ident_CmdComment.ref(vm) );
  refalrts::reinit_ident( context[7], ident_Offset.ref(vm) );
  refalrts::reinit_close_call( context[8] );
  refalrts::reinit_close_bracket( context[1] );
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

static refalrts::NativeReference nat_ref_MakeVariableComment("MakeVariableComment", 1584841285U, 782216036U, func_MakeVariableComment);


//End of file
