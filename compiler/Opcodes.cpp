// This file automatically generated from 'Opcodes.sref'
// Don't edit! Edit 'Opcodes.sref' and recompile it

#include "refalrts.h"

#define cookie_ns cookie_ns_3385448166_2406373470
static const refalrts::RefalIdentifier ident_AlgLeft = refalrts::ident_from_static("AlgLeft");
static const refalrts::RefalIdentifier ident_AlgRight = refalrts::ident_from_static("AlgRight");
static const refalrts::RefalIdentifier ident_AlgTerm = refalrts::ident_from_static("AlgTerm");
static const refalrts::RefalIdentifier ident_Allocate = refalrts::ident_from_static("Allocate");
static const refalrts::RefalIdentifier ident_CmdADT = refalrts::ident_from_static("CmdADT");
static const refalrts::RefalIdentifier ident_CmdADTSave = refalrts::ident_from_static("CmdADTSave");
static const refalrts::RefalIdentifier ident_CmdBrackets = refalrts::ident_from_static("CmdBrackets");
static const refalrts::RefalIdentifier ident_CmdBracketsSave = refalrts::ident_from_static("CmdBracketsSave");
static const refalrts::RefalIdentifier ident_CmdCallSave = refalrts::ident_from_static("CmdCallSave");
static const refalrts::RefalIdentifier ident_CmdChar = refalrts::ident_from_static("CmdChar");
static const refalrts::RefalIdentifier ident_CmdCharSave = refalrts::ident_from_static("CmdCharSave");
static const refalrts::RefalIdentifier ident_CmdCopyEVar = refalrts::ident_from_static("CmdCopyEVar");
static const refalrts::RefalIdentifier ident_CmdCopySTVar = refalrts::ident_from_static("CmdCopySTVar");
static const refalrts::RefalIdentifier ident_CmdEPrepare = refalrts::ident_from_static("CmdEPrepare");
static const refalrts::RefalIdentifier ident_CmdEStart = refalrts::ident_from_static("CmdEStart");
static const refalrts::RefalIdentifier ident_CmdEmpty = refalrts::ident_from_static("CmdEmpty");
static const refalrts::RefalIdentifier ident_CmdFail = refalrts::ident_from_static("CmdFail");
static const refalrts::RefalIdentifier ident_CmdFetchSwapHead = refalrts::ident_from_static("CmdFetchSwapHead");
static const refalrts::RefalIdentifier ident_CmdFetchSwapInfoBounds = refalrts::ident_from_static("CmdFetchSwapInfoBounds");
static const refalrts::RefalIdentifier ident_CmdHugeNum = refalrts::ident_from_static("CmdHugeNum");
static const refalrts::RefalIdentifier ident_CmdHugeNumSave = refalrts::ident_from_static("CmdHugeNumSave");
static const refalrts::RefalIdentifier ident_CmdIdent = refalrts::ident_from_static("CmdIdent");
static const refalrts::RefalIdentifier ident_CmdIdentSave = refalrts::ident_from_static("CmdIdentSave");
static const refalrts::RefalIdentifier ident_CmdInitB0 = refalrts::ident_from_static("CmdInitB0");
static const refalrts::RefalIdentifier ident_CmdInitB0m_Lite = refalrts::ident_from_static("CmdInitB0-Lite");
static const refalrts::RefalIdentifier ident_CmdIssueMemory = refalrts::ident_from_static("CmdIssueMemory");
static const refalrts::RefalIdentifier ident_CmdLinkBrackets = refalrts::ident_from_static("CmdLinkBrackets");
static const refalrts::RefalIdentifier ident_CmdLoadConstants = refalrts::ident_from_static("CmdLoadConstants");
static const refalrts::RefalIdentifier ident_CmdName = refalrts::ident_from_static("CmdName");
static const refalrts::RefalIdentifier ident_CmdNameSave = refalrts::ident_from_static("CmdNameSave");
static const refalrts::RefalIdentifier ident_CmdNextStep = refalrts::ident_from_static("CmdNextStep");
static const refalrts::RefalIdentifier ident_CmdNotEmpty = refalrts::ident_from_static("CmdNotEmpty");
static const refalrts::RefalIdentifier ident_CmdNumber = refalrts::ident_from_static("CmdNumber");
static const refalrts::RefalIdentifier ident_CmdNumberSave = refalrts::ident_from_static("CmdNumberSave");
static const refalrts::RefalIdentifier ident_CmdOnFailGoTo = refalrts::ident_from_static("CmdOnFailGoTo");
static const refalrts::RefalIdentifier ident_CmdPerformNative = refalrts::ident_from_static("CmdPerformNative");
static const refalrts::RefalIdentifier ident_CmdProfileFunction = refalrts::ident_from_static("CmdProfileFunction");
static const refalrts::RefalIdentifier ident_CmdProfilerStopSentence = refalrts::ident_from_static("CmdProfilerStopSentence");
static const refalrts::RefalIdentifier ident_CmdPushStack = refalrts::ident_from_static("CmdPushStack");
static const refalrts::RefalIdentifier ident_CmdReinitSVar = refalrts::ident_from_static("CmdReinitSVar");
static const refalrts::RefalIdentifier ident_CmdRepeated = refalrts::ident_from_static("CmdRepeated");
static const refalrts::RefalIdentifier ident_CmdRepeatedSave = refalrts::ident_from_static("CmdRepeatedSave");
static const refalrts::RefalIdentifier ident_CmdReserveBacktrackStack = refalrts::ident_from_static("CmdReserveBacktrackStack");
static const refalrts::RefalIdentifier ident_CmdResetAllocator = refalrts::ident_from_static("CmdResetAllocator");
static const refalrts::RefalIdentifier ident_CmdSave = refalrts::ident_from_static("CmdSave");
static const refalrts::RefalIdentifier ident_CmdScale = refalrts::ident_from_static("CmdScale");
static const refalrts::RefalIdentifier ident_CmdSetRes = refalrts::ident_from_static("CmdSetRes");
static const refalrts::RefalIdentifier ident_CmdSetResArgBegin = refalrts::ident_from_static("CmdSetResArgBegin");
static const refalrts::RefalIdentifier ident_CmdSetResRightEdge = refalrts::ident_from_static("CmdSetResRightEdge");
static const refalrts::RefalIdentifier ident_CmdSpliceEVar = refalrts::ident_from_static("CmdSpliceEVar");
static const refalrts::RefalIdentifier ident_CmdSpliceElem = refalrts::ident_from_static("CmdSpliceElem");
static const refalrts::RefalIdentifier ident_CmdSpliceRange = refalrts::ident_from_static("CmdSpliceRange");
static const refalrts::RefalIdentifier ident_CmdSpliceSTVar = refalrts::ident_from_static("CmdSpliceSTVar");
static const refalrts::RefalIdentifier ident_CmdSpliceTile = refalrts::ident_from_static("CmdSpliceTile");
static const refalrts::RefalIdentifier ident_CmdSpliceToFreeList = refalrts::ident_from_static("CmdSpliceToFreeList");
static const refalrts::RefalIdentifier ident_CmdSwapSave = refalrts::ident_from_static("CmdSwapSave");
static const refalrts::RefalIdentifier ident_CmdTrash = refalrts::ident_from_static("CmdTrash");
static const refalrts::RefalIdentifier ident_CmdTrashLeftEdge = refalrts::ident_from_static("CmdTrashLeftEdge");
static const refalrts::RefalIdentifier ident_CmdVar = refalrts::ident_from_static("CmdVar");
static const refalrts::RefalIdentifier ident_CmdVarSave = refalrts::ident_from_static("CmdVarSave");
static const refalrts::RefalIdentifier ident_CmdVariableDebugOffset = refalrts::ident_from_static("CmdVariableDebugOffset");
static const refalrts::RefalIdentifier ident_CmdWrapClosure = refalrts::ident_from_static("CmdWrapClosure");
static const refalrts::RefalIdentifier ident_ConstTable = refalrts::ident_from_static("ConstTable");
static const refalrts::RefalIdentifier ident_ElBracket = refalrts::ident_from_static("ElBracket");
static const refalrts::RefalIdentifier ident_ElChar = refalrts::ident_from_static("ElChar");
static const refalrts::RefalIdentifier ident_ElCloseADT = refalrts::ident_from_static("ElCloseADT");
static const refalrts::RefalIdentifier ident_ElCloseBracket = refalrts::ident_from_static("ElCloseBracket");
static const refalrts::RefalIdentifier ident_ElCloseCall = refalrts::ident_from_static("ElCloseCall");
static const refalrts::RefalIdentifier ident_ElClosureHead = refalrts::ident_from_static("ElClosureHead");
static const refalrts::RefalIdentifier ident_ElHugeNumber = refalrts::ident_from_static("ElHugeNumber");
static const refalrts::RefalIdentifier ident_ElIdent = refalrts::ident_from_static("ElIdent");
static const refalrts::RefalIdentifier ident_ElName = refalrts::ident_from_static("ElName");
static const refalrts::RefalIdentifier ident_ElNumber = refalrts::ident_from_static("ElNumber");
static const refalrts::RefalIdentifier ident_ElOpenADT = refalrts::ident_from_static("ElOpenADT");
static const refalrts::RefalIdentifier ident_ElOpenBracket = refalrts::ident_from_static("ElOpenBracket");
static const refalrts::RefalIdentifier ident_ElOpenCall = refalrts::ident_from_static("ElOpenCall");
static const refalrts::RefalIdentifier ident_ElString = refalrts::ident_from_static("ElString");
static const refalrts::RefalIdentifier ident_ElUnwrappedClosure = refalrts::ident_from_static("ElUnwrappedClosure");
static const refalrts::RefalIdentifier ident_EmptyFunction = refalrts::ident_from_static("EmptyFunction");
static const refalrts::RefalIdentifier ident_NativeFunction = refalrts::ident_from_static("NativeFunction");
static const refalrts::RefalIdentifier ident_RefalFunction = refalrts::ident_from_static("RefalFunction");
static const refalrts::RefalIdentifier ident_Reference = refalrts::ident_from_static("Reference");
static const refalrts::RefalIdentifier ident_Reinit = refalrts::ident_from_static("Reinit");
static const refalrts::RefalIdentifier ident_Start = refalrts::ident_from_static("Start");
static const refalrts::RefalIdentifier ident_Swap = refalrts::ident_from_static("Swap");
static const refalrts::RefalIdentifier ident_Update = refalrts::ident_from_static("Update");
static refalrts::ExternalReference ref_BlockTypeNumber("BlockTypeNumber", 0U, 0U);
static refalrts::ExternalReference ref_NumberFromBracket("NumberFromBracket", 0U, 0U);
static refalrts::ExternalReference ref_NumberFromOpcode("NumberFromOpcode", 0U, 0U);

static refalrts::FnResult func_NumberFromOpcode(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  //FAST GEN: e.$
  //GLOBAL GEN: s.$ e.$
  // </0 & NumberFromOpcode/4 s.idx#0/5 e.idxV#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.idxV#0 as range 2
  do {
    // # CmdProfileFunction
    // </0 & NumberFromOpcode/4 # CmdProfileFunction/5 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::ident_term(  ident_CmdProfileFunction, context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdProfileFunction/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 0/1 ]] }
    refalrts::reinit_number( context[1], 0UL );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // # CmdLoadConstants
    // </0 & NumberFromOpcode/4 # CmdLoadConstants/5 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::ident_term(  ident_CmdLoadConstants, context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdLoadConstants/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 1/1 ]] }
    refalrts::reinit_number( context[1], 1UL );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // # CmdIssueMemory
    // </0 & NumberFromOpcode/4 # CmdIssueMemory/5 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::ident_term(  ident_CmdIssueMemory, context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdIssueMemory/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 2/1 ]] }
    refalrts::reinit_number( context[1], 2UL );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // # CmdReserveBacktrackStack
    // </0 & NumberFromOpcode/4 # CmdReserveBacktrackStack/5 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::ident_term(  ident_CmdReserveBacktrackStack, context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdReserveBacktrackStack/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 3/1 ]] }
    refalrts::reinit_number( context[1], 3UL );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // # CmdOnFailGoTo
    // </0 & NumberFromOpcode/4 # CmdOnFailGoTo/5 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::ident_term(  ident_CmdOnFailGoTo, context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdOnFailGoTo/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 4/1 ]] }
    refalrts::reinit_number( context[1], 4UL );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // # CmdProfilerStopSentence
    // </0 & NumberFromOpcode/4 # CmdProfilerStopSentence/5 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::ident_term(  ident_CmdProfilerStopSentence, context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdProfilerStopSentence/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 5/1 ]] }
    refalrts::reinit_number( context[1], 5UL );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // # CmdInitB0
    // </0 & NumberFromOpcode/4 # CmdInitB0/5 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::ident_term(  ident_CmdInitB0, context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdInitB0/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 6/1 ]] }
    refalrts::reinit_number( context[1], 6UL );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // # CmdInitB0-Lite
    // </0 & NumberFromOpcode/4 # CmdInitB0-Lite/5 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::ident_term(  ident_CmdInitB0m_Lite, context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdInitB0-Lite/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 7/1 ]] }
    refalrts::reinit_number( context[1], 7UL );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // # CmdChar # AlgLeft
    // </0 & NumberFromOpcode/4 # CmdChar/5 # AlgLeft/8 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::ident_term(  ident_CmdChar, context[5] ) )
      continue;
    context[8] = refalrts::ident_left(  ident_AlgLeft, context[6], context[7] );
    if( ! context[8] )
      continue;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdChar/5 # AlgLeft/8 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 8/1 ]] }
    refalrts::reinit_number( context[1], 8UL );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // # CmdChar # AlgRight
    // </0 & NumberFromOpcode/4 # CmdChar/5 # AlgRight/8 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::ident_term(  ident_CmdChar, context[5] ) )
      continue;
    context[8] = refalrts::ident_left(  ident_AlgRight, context[6], context[7] );
    if( ! context[8] )
      continue;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdChar/5 # AlgRight/8 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 9/1 ]] }
    refalrts::reinit_number( context[1], 9UL );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // # CmdChar # AlgTerm
    // </0 & NumberFromOpcode/4 # CmdChar/5 # AlgTerm/8 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::ident_term(  ident_CmdChar, context[5] ) )
      continue;
    context[8] = refalrts::ident_left(  ident_AlgTerm, context[6], context[7] );
    if( ! context[8] )
      continue;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdChar/5 # AlgTerm/8 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 10/1 ]] }
    refalrts::reinit_number( context[1], 10UL );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // # CmdCharSave # AlgLeft
    // </0 & NumberFromOpcode/4 # CmdCharSave/5 # AlgLeft/8 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::ident_term(  ident_CmdCharSave, context[5] ) )
      continue;
    context[8] = refalrts::ident_left(  ident_AlgLeft, context[6], context[7] );
    if( ! context[8] )
      continue;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdCharSave/5 # AlgLeft/8 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 11/1 ]] }
    refalrts::reinit_number( context[1], 11UL );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // # CmdCharSave # AlgRight
    // </0 & NumberFromOpcode/4 # CmdCharSave/5 # AlgRight/8 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::ident_term(  ident_CmdCharSave, context[5] ) )
      continue;
    context[8] = refalrts::ident_left(  ident_AlgRight, context[6], context[7] );
    if( ! context[8] )
      continue;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdCharSave/5 # AlgRight/8 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 12/1 ]] }
    refalrts::reinit_number( context[1], 12UL );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // # CmdNumber # AlgLeft
    // </0 & NumberFromOpcode/4 # CmdNumber/5 # AlgLeft/8 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::ident_term(  ident_CmdNumber, context[5] ) )
      continue;
    context[8] = refalrts::ident_left(  ident_AlgLeft, context[6], context[7] );
    if( ! context[8] )
      continue;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdNumber/5 # AlgLeft/8 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 13/1 ]] }
    refalrts::reinit_number( context[1], 13UL );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // # CmdNumber # AlgRight
    // </0 & NumberFromOpcode/4 # CmdNumber/5 # AlgRight/8 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::ident_term(  ident_CmdNumber, context[5] ) )
      continue;
    context[8] = refalrts::ident_left(  ident_AlgRight, context[6], context[7] );
    if( ! context[8] )
      continue;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdNumber/5 # AlgRight/8 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 14/1 ]] }
    refalrts::reinit_number( context[1], 14UL );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // # CmdNumber # AlgTerm
    // </0 & NumberFromOpcode/4 # CmdNumber/5 # AlgTerm/8 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::ident_term(  ident_CmdNumber, context[5] ) )
      continue;
    context[8] = refalrts::ident_left(  ident_AlgTerm, context[6], context[7] );
    if( ! context[8] )
      continue;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdNumber/5 # AlgTerm/8 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 15/1 ]] }
    refalrts::reinit_number( context[1], 15UL );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // # CmdNumberSave # AlgLeft
    // </0 & NumberFromOpcode/4 # CmdNumberSave/5 # AlgLeft/8 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::ident_term(  ident_CmdNumberSave, context[5] ) )
      continue;
    context[8] = refalrts::ident_left(  ident_AlgLeft, context[6], context[7] );
    if( ! context[8] )
      continue;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdNumberSave/5 # AlgLeft/8 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 16/1 ]] }
    refalrts::reinit_number( context[1], 16UL );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // # CmdNumberSave # AlgRight
    // </0 & NumberFromOpcode/4 # CmdNumberSave/5 # AlgRight/8 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::ident_term(  ident_CmdNumberSave, context[5] ) )
      continue;
    context[8] = refalrts::ident_left(  ident_AlgRight, context[6], context[7] );
    if( ! context[8] )
      continue;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdNumberSave/5 # AlgRight/8 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 17/1 ]] }
    refalrts::reinit_number( context[1], 17UL );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // # CmdHugeNum # AlgLeft
    // </0 & NumberFromOpcode/4 # CmdHugeNum/5 # AlgLeft/8 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::ident_term(  ident_CmdHugeNum, context[5] ) )
      continue;
    context[8] = refalrts::ident_left(  ident_AlgLeft, context[6], context[7] );
    if( ! context[8] )
      continue;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdHugeNum/5 # AlgLeft/8 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 18/1 ]] }
    refalrts::reinit_number( context[1], 18UL );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // # CmdHugeNum # AlgRight
    // </0 & NumberFromOpcode/4 # CmdHugeNum/5 # AlgRight/8 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::ident_term(  ident_CmdHugeNum, context[5] ) )
      continue;
    context[8] = refalrts::ident_left(  ident_AlgRight, context[6], context[7] );
    if( ! context[8] )
      continue;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdHugeNum/5 # AlgRight/8 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 19/1 ]] }
    refalrts::reinit_number( context[1], 19UL );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // # CmdHugeNum # AlgTerm
    // </0 & NumberFromOpcode/4 # CmdHugeNum/5 # AlgTerm/8 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::ident_term(  ident_CmdHugeNum, context[5] ) )
      continue;
    context[8] = refalrts::ident_left(  ident_AlgTerm, context[6], context[7] );
    if( ! context[8] )
      continue;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdHugeNum/5 # AlgTerm/8 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 20/1 ]] }
    refalrts::reinit_number( context[1], 20UL );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // # CmdHugeNumSave # AlgLeft
    // </0 & NumberFromOpcode/4 # CmdHugeNumSave/5 # AlgLeft/8 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::ident_term(  ident_CmdHugeNumSave, context[5] ) )
      continue;
    context[8] = refalrts::ident_left(  ident_AlgLeft, context[6], context[7] );
    if( ! context[8] )
      continue;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdHugeNumSave/5 # AlgLeft/8 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 21/1 ]] }
    refalrts::reinit_number( context[1], 21UL );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // # CmdHugeNumSave # AlgRight
    // </0 & NumberFromOpcode/4 # CmdHugeNumSave/5 # AlgRight/8 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::ident_term(  ident_CmdHugeNumSave, context[5] ) )
      continue;
    context[8] = refalrts::ident_left(  ident_AlgRight, context[6], context[7] );
    if( ! context[8] )
      continue;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdHugeNumSave/5 # AlgRight/8 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 22/1 ]] }
    refalrts::reinit_number( context[1], 22UL );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // # CmdName # AlgLeft
    // </0 & NumberFromOpcode/4 # CmdName/5 # AlgLeft/8 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::ident_term(  ident_CmdName, context[5] ) )
      continue;
    context[8] = refalrts::ident_left(  ident_AlgLeft, context[6], context[7] );
    if( ! context[8] )
      continue;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdName/5 # AlgLeft/8 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 23/1 ]] }
    refalrts::reinit_number( context[1], 23UL );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // # CmdName # AlgRight
    // </0 & NumberFromOpcode/4 # CmdName/5 # AlgRight/8 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::ident_term(  ident_CmdName, context[5] ) )
      continue;
    context[8] = refalrts::ident_left(  ident_AlgRight, context[6], context[7] );
    if( ! context[8] )
      continue;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdName/5 # AlgRight/8 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 24/1 ]] }
    refalrts::reinit_number( context[1], 24UL );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // # CmdName # AlgTerm
    // </0 & NumberFromOpcode/4 # CmdName/5 # AlgTerm/8 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::ident_term(  ident_CmdName, context[5] ) )
      continue;
    context[8] = refalrts::ident_left(  ident_AlgTerm, context[6], context[7] );
    if( ! context[8] )
      continue;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdName/5 # AlgTerm/8 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 25/1 ]] }
    refalrts::reinit_number( context[1], 25UL );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // # CmdNameSave # AlgLeft
    // </0 & NumberFromOpcode/4 # CmdNameSave/5 # AlgLeft/8 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::ident_term(  ident_CmdNameSave, context[5] ) )
      continue;
    context[8] = refalrts::ident_left(  ident_AlgLeft, context[6], context[7] );
    if( ! context[8] )
      continue;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdNameSave/5 # AlgLeft/8 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 26/1 ]] }
    refalrts::reinit_number( context[1], 26UL );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // # CmdNameSave # AlgRight
    // </0 & NumberFromOpcode/4 # CmdNameSave/5 # AlgRight/8 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::ident_term(  ident_CmdNameSave, context[5] ) )
      continue;
    context[8] = refalrts::ident_left(  ident_AlgRight, context[6], context[7] );
    if( ! context[8] )
      continue;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdNameSave/5 # AlgRight/8 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 27/1 ]] }
    refalrts::reinit_number( context[1], 27UL );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // # CmdIdent # AlgLeft
    // </0 & NumberFromOpcode/4 # CmdIdent/5 # AlgLeft/8 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::ident_term(  ident_CmdIdent, context[5] ) )
      continue;
    context[8] = refalrts::ident_left(  ident_AlgLeft, context[6], context[7] );
    if( ! context[8] )
      continue;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdIdent/5 # AlgLeft/8 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 28/1 ]] }
    refalrts::reinit_number( context[1], 28UL );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // # CmdIdent # AlgRight
    // </0 & NumberFromOpcode/4 # CmdIdent/5 # AlgRight/8 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::ident_term(  ident_CmdIdent, context[5] ) )
      continue;
    context[8] = refalrts::ident_left(  ident_AlgRight, context[6], context[7] );
    if( ! context[8] )
      continue;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdIdent/5 # AlgRight/8 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 29/1 ]] }
    refalrts::reinit_number( context[1], 29UL );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // # CmdIdent # AlgTerm
    // </0 & NumberFromOpcode/4 # CmdIdent/5 # AlgTerm/8 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::ident_term(  ident_CmdIdent, context[5] ) )
      continue;
    context[8] = refalrts::ident_left(  ident_AlgTerm, context[6], context[7] );
    if( ! context[8] )
      continue;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdIdent/5 # AlgTerm/8 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 30/1 ]] }
    refalrts::reinit_number( context[1], 30UL );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // # CmdIdentSave # AlgLeft
    // </0 & NumberFromOpcode/4 # CmdIdentSave/5 # AlgLeft/8 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::ident_term(  ident_CmdIdentSave, context[5] ) )
      continue;
    context[8] = refalrts::ident_left(  ident_AlgLeft, context[6], context[7] );
    if( ! context[8] )
      continue;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdIdentSave/5 # AlgLeft/8 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 31/1 ]] }
    refalrts::reinit_number( context[1], 31UL );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // # CmdIdentSave # AlgRight
    // </0 & NumberFromOpcode/4 # CmdIdentSave/5 # AlgRight/8 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::ident_term(  ident_CmdIdentSave, context[5] ) )
      continue;
    context[8] = refalrts::ident_left(  ident_AlgRight, context[6], context[7] );
    if( ! context[8] )
      continue;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdIdentSave/5 # AlgRight/8 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 32/1 ]] }
    refalrts::reinit_number( context[1], 32UL );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // # CmdBrackets # AlgLeft
    // </0 & NumberFromOpcode/4 # CmdBrackets/5 # AlgLeft/8 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::ident_term(  ident_CmdBrackets, context[5] ) )
      continue;
    context[8] = refalrts::ident_left(  ident_AlgLeft, context[6], context[7] );
    if( ! context[8] )
      continue;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdBrackets/5 # AlgLeft/8 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 33/1 ]] }
    refalrts::reinit_number( context[1], 33UL );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // # CmdBrackets # AlgRight
    // </0 & NumberFromOpcode/4 # CmdBrackets/5 # AlgRight/8 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::ident_term(  ident_CmdBrackets, context[5] ) )
      continue;
    context[8] = refalrts::ident_left(  ident_AlgRight, context[6], context[7] );
    if( ! context[8] )
      continue;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdBrackets/5 # AlgRight/8 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 34/1 ]] }
    refalrts::reinit_number( context[1], 34UL );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // # CmdBrackets # AlgTerm
    // </0 & NumberFromOpcode/4 # CmdBrackets/5 # AlgTerm/8 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::ident_term(  ident_CmdBrackets, context[5] ) )
      continue;
    context[8] = refalrts::ident_left(  ident_AlgTerm, context[6], context[7] );
    if( ! context[8] )
      continue;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdBrackets/5 # AlgTerm/8 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 35/1 ]] }
    refalrts::reinit_number( context[1], 35UL );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // # CmdBracketsSave # AlgLeft
    // </0 & NumberFromOpcode/4 # CmdBracketsSave/5 # AlgLeft/8 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::ident_term(  ident_CmdBracketsSave, context[5] ) )
      continue;
    context[8] = refalrts::ident_left(  ident_AlgLeft, context[6], context[7] );
    if( ! context[8] )
      continue;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdBracketsSave/5 # AlgLeft/8 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 36/1 ]] }
    refalrts::reinit_number( context[1], 36UL );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // # CmdBracketsSave # AlgRight
    // </0 & NumberFromOpcode/4 # CmdBracketsSave/5 # AlgRight/8 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::ident_term(  ident_CmdBracketsSave, context[5] ) )
      continue;
    context[8] = refalrts::ident_left(  ident_AlgRight, context[6], context[7] );
    if( ! context[8] )
      continue;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdBracketsSave/5 # AlgRight/8 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 37/1 ]] }
    refalrts::reinit_number( context[1], 37UL );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // # CmdADT # AlgLeft
    // </0 & NumberFromOpcode/4 # CmdADT/5 # AlgLeft/8 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::ident_term(  ident_CmdADT, context[5] ) )
      continue;
    context[8] = refalrts::ident_left(  ident_AlgLeft, context[6], context[7] );
    if( ! context[8] )
      continue;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdADT/5 # AlgLeft/8 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 38/1 ]] }
    refalrts::reinit_number( context[1], 38UL );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // # CmdADT # AlgRight
    // </0 & NumberFromOpcode/4 # CmdADT/5 # AlgRight/8 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::ident_term(  ident_CmdADT, context[5] ) )
      continue;
    context[8] = refalrts::ident_left(  ident_AlgRight, context[6], context[7] );
    if( ! context[8] )
      continue;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdADT/5 # AlgRight/8 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 39/1 ]] }
    refalrts::reinit_number( context[1], 39UL );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // # CmdADT # AlgTerm
    // </0 & NumberFromOpcode/4 # CmdADT/5 # AlgTerm/8 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::ident_term(  ident_CmdADT, context[5] ) )
      continue;
    context[8] = refalrts::ident_left(  ident_AlgTerm, context[6], context[7] );
    if( ! context[8] )
      continue;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdADT/5 # AlgTerm/8 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 40/1 ]] }
    refalrts::reinit_number( context[1], 40UL );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // # CmdADTSave # AlgLeft
    // </0 & NumberFromOpcode/4 # CmdADTSave/5 # AlgLeft/8 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::ident_term(  ident_CmdADTSave, context[5] ) )
      continue;
    context[8] = refalrts::ident_left(  ident_AlgLeft, context[6], context[7] );
    if( ! context[8] )
      continue;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdADTSave/5 # AlgLeft/8 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 41/1 ]] }
    refalrts::reinit_number( context[1], 41UL );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // # CmdADTSave # AlgRight
    // </0 & NumberFromOpcode/4 # CmdADTSave/5 # AlgRight/8 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::ident_term(  ident_CmdADTSave, context[5] ) )
      continue;
    context[8] = refalrts::ident_left(  ident_AlgRight, context[6], context[7] );
    if( ! context[8] )
      continue;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdADTSave/5 # AlgRight/8 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 42/1 ]] }
    refalrts::reinit_number( context[1], 42UL );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // # CmdADTSave # AlgTerm
    // </0 & NumberFromOpcode/4 # CmdADTSave/5 # AlgTerm/8 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::ident_term(  ident_CmdADTSave, context[5] ) )
      continue;
    context[8] = refalrts::ident_left(  ident_AlgTerm, context[6], context[7] );
    if( ! context[8] )
      continue;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdADTSave/5 # AlgTerm/8 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 43/1 ]] }
    refalrts::reinit_number( context[1], 43UL );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // # CmdCallSave # AlgLeft
    // </0 & NumberFromOpcode/4 # CmdCallSave/5 # AlgLeft/8 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::ident_term(  ident_CmdCallSave, context[5] ) )
      continue;
    context[8] = refalrts::ident_left(  ident_AlgLeft, context[6], context[7] );
    if( ! context[8] )
      continue;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdCallSave/5 # AlgLeft/8 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 44/1 ]] }
    refalrts::reinit_number( context[1], 44UL );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // # CmdEmpty
    // </0 & NumberFromOpcode/4 # CmdEmpty/5 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::ident_term(  ident_CmdEmpty, context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdEmpty/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 45/1 ]] }
    refalrts::reinit_number( context[1], 45UL );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // # CmdNotEmpty
    // </0 & NumberFromOpcode/4 # CmdNotEmpty/5 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::ident_term(  ident_CmdNotEmpty, context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdNotEmpty/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 46/1 ]] }
    refalrts::reinit_number( context[1], 46UL );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // 's' # CmdVar # AlgLeft
    // </0 & NumberFromOpcode/4 's'/5 # CmdVar/8 # AlgLeft/9 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::char_term( 's', context[5] ) )
      continue;
    context[8] = refalrts::ident_left(  ident_CmdVar, context[6], context[7] );
    if( ! context[8] )
      continue;
    context[9] = refalrts::ident_left(  ident_AlgLeft, context[6], context[7] );
    if( ! context[9] )
      continue;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 's'/5 # CmdVar/8 # AlgLeft/9 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 47/1 ]] }
    refalrts::reinit_number( context[1], 47UL );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // 's' # CmdVar # AlgRight
    // </0 & NumberFromOpcode/4 's'/5 # CmdVar/8 # AlgRight/9 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::char_term( 's', context[5] ) )
      continue;
    context[8] = refalrts::ident_left(  ident_CmdVar, context[6], context[7] );
    if( ! context[8] )
      continue;
    context[9] = refalrts::ident_left(  ident_AlgRight, context[6], context[7] );
    if( ! context[9] )
      continue;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 's'/5 # CmdVar/8 # AlgRight/9 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 48/1 ]] }
    refalrts::reinit_number( context[1], 48UL );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // 's' # CmdVar # AlgTerm
    // </0 & NumberFromOpcode/4 's'/5 # CmdVar/8 # AlgTerm/9 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::char_term( 's', context[5] ) )
      continue;
    context[8] = refalrts::ident_left(  ident_CmdVar, context[6], context[7] );
    if( ! context[8] )
      continue;
    context[9] = refalrts::ident_left(  ident_AlgTerm, context[6], context[7] );
    if( ! context[9] )
      continue;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 's'/5 # CmdVar/8 # AlgTerm/9 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 49/1 ]] }
    refalrts::reinit_number( context[1], 49UL );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // 't' # CmdVar # AlgLeft
    // </0 & NumberFromOpcode/4 't'/5 # CmdVar/8 # AlgLeft/9 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::char_term( 't', context[5] ) )
      continue;
    context[8] = refalrts::ident_left(  ident_CmdVar, context[6], context[7] );
    if( ! context[8] )
      continue;
    context[9] = refalrts::ident_left(  ident_AlgLeft, context[6], context[7] );
    if( ! context[9] )
      continue;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 't'/5 # CmdVar/8 # AlgLeft/9 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 50/1 ]] }
    refalrts::reinit_number( context[1], 50UL );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // 't' # CmdVar # AlgRight
    // </0 & NumberFromOpcode/4 't'/5 # CmdVar/8 # AlgRight/9 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::char_term( 't', context[5] ) )
      continue;
    context[8] = refalrts::ident_left(  ident_CmdVar, context[6], context[7] );
    if( ! context[8] )
      continue;
    context[9] = refalrts::ident_left(  ident_AlgRight, context[6], context[7] );
    if( ! context[9] )
      continue;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 't'/5 # CmdVar/8 # AlgRight/9 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 51/1 ]] }
    refalrts::reinit_number( context[1], 51UL );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // 't' # CmdVarSave # AlgLeft
    // </0 & NumberFromOpcode/4 't'/5 # CmdVarSave/8 # AlgLeft/9 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::char_term( 't', context[5] ) )
      continue;
    context[8] = refalrts::ident_left(  ident_CmdVarSave, context[6], context[7] );
    if( ! context[8] )
      continue;
    context[9] = refalrts::ident_left(  ident_AlgLeft, context[6], context[7] );
    if( ! context[9] )
      continue;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 't'/5 # CmdVarSave/8 # AlgLeft/9 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 52/1 ]] }
    refalrts::reinit_number( context[1], 52UL );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // 't' # CmdVarSave # AlgRight
    // </0 & NumberFromOpcode/4 't'/5 # CmdVarSave/8 # AlgRight/9 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::char_term( 't', context[5] ) )
      continue;
    context[8] = refalrts::ident_left(  ident_CmdVarSave, context[6], context[7] );
    if( ! context[8] )
      continue;
    context[9] = refalrts::ident_left(  ident_AlgRight, context[6], context[7] );
    if( ! context[9] )
      continue;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 't'/5 # CmdVarSave/8 # AlgRight/9 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 53/1 ]] }
    refalrts::reinit_number( context[1], 53UL );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // 'e' # CmdRepeated # AlgLeft
    // </0 & NumberFromOpcode/4 'e'/5 # CmdRepeated/8 # AlgLeft/9 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::char_term( 'e', context[5] ) )
      continue;
    context[8] = refalrts::ident_left(  ident_CmdRepeated, context[6], context[7] );
    if( ! context[8] )
      continue;
    context[9] = refalrts::ident_left(  ident_AlgLeft, context[6], context[7] );
    if( ! context[9] )
      continue;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 'e'/5 # CmdRepeated/8 # AlgLeft/9 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 54/1 ]] }
    refalrts::reinit_number( context[1], 54UL );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // 'e' # CmdRepeated # AlgRight
    // </0 & NumberFromOpcode/4 'e'/5 # CmdRepeated/8 # AlgRight/9 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::char_term( 'e', context[5] ) )
      continue;
    context[8] = refalrts::ident_left(  ident_CmdRepeated, context[6], context[7] );
    if( ! context[8] )
      continue;
    context[9] = refalrts::ident_left(  ident_AlgRight, context[6], context[7] );
    if( ! context[9] )
      continue;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 'e'/5 # CmdRepeated/8 # AlgRight/9 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 55/1 ]] }
    refalrts::reinit_number( context[1], 55UL );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // 's' # CmdRepeated # AlgLeft
    // </0 & NumberFromOpcode/4 's'/5 # CmdRepeated/8 # AlgLeft/9 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::char_term( 's', context[5] ) )
      continue;
    context[8] = refalrts::ident_left(  ident_CmdRepeated, context[6], context[7] );
    if( ! context[8] )
      continue;
    context[9] = refalrts::ident_left(  ident_AlgLeft, context[6], context[7] );
    if( ! context[9] )
      continue;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 's'/5 # CmdRepeated/8 # AlgLeft/9 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 56/1 ]] }
    refalrts::reinit_number( context[1], 56UL );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // 's' # CmdRepeated # AlgRight
    // </0 & NumberFromOpcode/4 's'/5 # CmdRepeated/8 # AlgRight/9 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::char_term( 's', context[5] ) )
      continue;
    context[8] = refalrts::ident_left(  ident_CmdRepeated, context[6], context[7] );
    if( ! context[8] )
      continue;
    context[9] = refalrts::ident_left(  ident_AlgRight, context[6], context[7] );
    if( ! context[9] )
      continue;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 's'/5 # CmdRepeated/8 # AlgRight/9 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 57/1 ]] }
    refalrts::reinit_number( context[1], 57UL );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // 's' # CmdRepeated # AlgTerm
    // </0 & NumberFromOpcode/4 's'/5 # CmdRepeated/8 # AlgTerm/9 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::char_term( 's', context[5] ) )
      continue;
    context[8] = refalrts::ident_left(  ident_CmdRepeated, context[6], context[7] );
    if( ! context[8] )
      continue;
    context[9] = refalrts::ident_left(  ident_AlgTerm, context[6], context[7] );
    if( ! context[9] )
      continue;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 's'/5 # CmdRepeated/8 # AlgTerm/9 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 58/1 ]] }
    refalrts::reinit_number( context[1], 58UL );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // 't' # CmdRepeated # AlgLeft
    // </0 & NumberFromOpcode/4 't'/5 # CmdRepeated/8 # AlgLeft/9 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::char_term( 't', context[5] ) )
      continue;
    context[8] = refalrts::ident_left(  ident_CmdRepeated, context[6], context[7] );
    if( ! context[8] )
      continue;
    context[9] = refalrts::ident_left(  ident_AlgLeft, context[6], context[7] );
    if( ! context[9] )
      continue;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 't'/5 # CmdRepeated/8 # AlgLeft/9 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 59/1 ]] }
    refalrts::reinit_number( context[1], 59UL );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // 't' # CmdRepeated # AlgRight
    // </0 & NumberFromOpcode/4 't'/5 # CmdRepeated/8 # AlgRight/9 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::char_term( 't', context[5] ) )
      continue;
    context[8] = refalrts::ident_left(  ident_CmdRepeated, context[6], context[7] );
    if( ! context[8] )
      continue;
    context[9] = refalrts::ident_left(  ident_AlgRight, context[6], context[7] );
    if( ! context[9] )
      continue;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 't'/5 # CmdRepeated/8 # AlgRight/9 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 60/1 ]] }
    refalrts::reinit_number( context[1], 60UL );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // 't' # CmdRepeated # AlgTerm
    // </0 & NumberFromOpcode/4 't'/5 # CmdRepeated/8 # AlgTerm/9 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::char_term( 't', context[5] ) )
      continue;
    context[8] = refalrts::ident_left(  ident_CmdRepeated, context[6], context[7] );
    if( ! context[8] )
      continue;
    context[9] = refalrts::ident_left(  ident_AlgTerm, context[6], context[7] );
    if( ! context[9] )
      continue;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 't'/5 # CmdRepeated/8 # AlgTerm/9 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 61/1 ]] }
    refalrts::reinit_number( context[1], 61UL );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // 't' # CmdRepeatedSave # AlgLeft
    // </0 & NumberFromOpcode/4 't'/5 # CmdRepeatedSave/8 # AlgLeft/9 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::char_term( 't', context[5] ) )
      continue;
    context[8] = refalrts::ident_left(  ident_CmdRepeatedSave, context[6], context[7] );
    if( ! context[8] )
      continue;
    context[9] = refalrts::ident_left(  ident_AlgLeft, context[6], context[7] );
    if( ! context[9] )
      continue;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 't'/5 # CmdRepeatedSave/8 # AlgLeft/9 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 62/1 ]] }
    refalrts::reinit_number( context[1], 62UL );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // 't' # CmdRepeatedSave # AlgRight
    // </0 & NumberFromOpcode/4 't'/5 # CmdRepeatedSave/8 # AlgRight/9 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::char_term( 't', context[5] ) )
      continue;
    context[8] = refalrts::ident_left(  ident_CmdRepeatedSave, context[6], context[7] );
    if( ! context[8] )
      continue;
    context[9] = refalrts::ident_left(  ident_AlgRight, context[6], context[7] );
    if( ! context[9] )
      continue;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 't'/5 # CmdRepeatedSave/8 # AlgRight/9 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 63/1 ]] }
    refalrts::reinit_number( context[1], 63UL );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // # CmdEPrepare
    // </0 & NumberFromOpcode/4 # CmdEPrepare/5 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::ident_term(  ident_CmdEPrepare, context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdEPrepare/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 64/1 ]] }
    refalrts::reinit_number( context[1], 64UL );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // # CmdEStart
    // </0 & NumberFromOpcode/4 # CmdEStart/5 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::ident_term(  ident_CmdEStart, context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdEStart/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 65/1 ]] }
    refalrts::reinit_number( context[1], 65UL );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // # CmdSave
    // </0 & NumberFromOpcode/4 # CmdSave/5 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::ident_term(  ident_CmdSave, context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdSave/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 66/1 ]] }
    refalrts::reinit_number( context[1], 66UL );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // # CmdResetAllocator
    // </0 & NumberFromOpcode/4 # CmdResetAllocator/5 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::ident_term(  ident_CmdResetAllocator, context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdResetAllocator/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 67/1 ]] }
    refalrts::reinit_number( context[1], 67UL );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // # CmdSetResArgBegin
    // </0 & NumberFromOpcode/4 # CmdSetResArgBegin/5 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::ident_term(  ident_CmdSetResArgBegin, context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdSetResArgBegin/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 68/1 ]] }
    refalrts::reinit_number( context[1], 68UL );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // # CmdSetResRightEdge
    // </0 & NumberFromOpcode/4 # CmdSetResRightEdge/5 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::ident_term(  ident_CmdSetResRightEdge, context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdSetResRightEdge/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 69/1 ]] }
    refalrts::reinit_number( context[1], 69UL );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // # CmdSetRes
    // </0 & NumberFromOpcode/4 # CmdSetRes/5 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::ident_term(  ident_CmdSetRes, context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdSetRes/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 70/1 ]] }
    refalrts::reinit_number( context[1], 70UL );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // # CmdCopyEVar
    // </0 & NumberFromOpcode/4 # CmdCopyEVar/5 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::ident_term(  ident_CmdCopyEVar, context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdCopyEVar/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 71/1 ]] }
    refalrts::reinit_number( context[1], 71UL );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // # CmdCopySTVar
    // </0 & NumberFromOpcode/4 # CmdCopySTVar/5 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::ident_term(  ident_CmdCopySTVar, context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdCopySTVar/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 72/1 ]] }
    refalrts::reinit_number( context[1], 72UL );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // # CmdReinitSVar
    // </0 & NumberFromOpcode/4 # CmdReinitSVar/5 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::ident_term(  ident_CmdReinitSVar, context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdReinitSVar/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 73/1 ]] }
    refalrts::reinit_number( context[1], 73UL );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // # Allocate # ElChar
    // </0 & NumberFromOpcode/4 # Allocate/5 # ElChar/8 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::ident_term(  ident_Allocate, context[5] ) )
      continue;
    context[8] = refalrts::ident_left(  ident_ElChar, context[6], context[7] );
    if( ! context[8] )
      continue;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # Allocate/5 # ElChar/8 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 74/1 ]] }
    refalrts::reinit_number( context[1], 74UL );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // # Allocate # ElName
    // </0 & NumberFromOpcode/4 # Allocate/5 # ElName/8 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::ident_term(  ident_Allocate, context[5] ) )
      continue;
    context[8] = refalrts::ident_left(  ident_ElName, context[6], context[7] );
    if( ! context[8] )
      continue;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # Allocate/5 # ElName/8 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 75/1 ]] }
    refalrts::reinit_number( context[1], 75UL );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // # Allocate # ElNumber
    // </0 & NumberFromOpcode/4 # Allocate/5 # ElNumber/8 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::ident_term(  ident_Allocate, context[5] ) )
      continue;
    context[8] = refalrts::ident_left(  ident_ElNumber, context[6], context[7] );
    if( ! context[8] )
      continue;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # Allocate/5 # ElNumber/8 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 76/1 ]] }
    refalrts::reinit_number( context[1], 76UL );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // # Allocate # ElHugeNumber
    // </0 & NumberFromOpcode/4 # Allocate/5 # ElHugeNumber/8 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::ident_term(  ident_Allocate, context[5] ) )
      continue;
    context[8] = refalrts::ident_left(  ident_ElHugeNumber, context[6], context[7] );
    if( ! context[8] )
      continue;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # Allocate/5 # ElHugeNumber/8 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 77/1 ]] }
    refalrts::reinit_number( context[1], 77UL );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // # Allocate # ElIdent
    // </0 & NumberFromOpcode/4 # Allocate/5 # ElIdent/8 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::ident_term(  ident_Allocate, context[5] ) )
      continue;
    context[8] = refalrts::ident_left(  ident_ElIdent, context[6], context[7] );
    if( ! context[8] )
      continue;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # Allocate/5 # ElIdent/8 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 78/1 ]] }
    refalrts::reinit_number( context[1], 78UL );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // # Allocate # ElBracket
    // </0 & NumberFromOpcode/4 # Allocate/5 # ElBracket/8 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::ident_term(  ident_Allocate, context[5] ) )
      continue;
    context[8] = refalrts::ident_left(  ident_ElBracket, context[6], context[7] );
    if( ! context[8] )
      continue;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # Allocate/5 # ElBracket/8 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 79/1 ]] }
    refalrts::reinit_number( context[1], 79UL );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // # Allocate # ElString
    // </0 & NumberFromOpcode/4 # Allocate/5 # ElString/8 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::ident_term(  ident_Allocate, context[5] ) )
      continue;
    context[8] = refalrts::ident_left(  ident_ElString, context[6], context[7] );
    if( ! context[8] )
      continue;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # Allocate/5 # ElString/8 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 80/1 ]] }
    refalrts::reinit_number( context[1], 80UL );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // # Allocate # ElClosureHead
    // </0 & NumberFromOpcode/4 # Allocate/5 # ElClosureHead/8 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::ident_term(  ident_Allocate, context[5] ) )
      continue;
    context[8] = refalrts::ident_left(  ident_ElClosureHead, context[6], context[7] );
    if( ! context[8] )
      continue;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # Allocate/5 # ElClosureHead/8 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 113/1 ]] }
    refalrts::reinit_number( context[1], 113UL );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // # Allocate # ElUnwrappedClosure
    // </0 & NumberFromOpcode/4 # Allocate/5 # ElUnwrappedClosure/8 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::ident_term(  ident_Allocate, context[5] ) )
      continue;
    context[8] = refalrts::ident_left(  ident_ElUnwrappedClosure, context[6], context[7] );
    if( ! context[8] )
      continue;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # Allocate/5 # ElUnwrappedClosure/8 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 114/1 ]] }
    refalrts::reinit_number( context[1], 114UL );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // # Reinit # ElChar
    // </0 & NumberFromOpcode/4 # Reinit/5 # ElChar/8 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::ident_term(  ident_Reinit, context[5] ) )
      continue;
    context[8] = refalrts::ident_left(  ident_ElChar, context[6], context[7] );
    if( ! context[8] )
      continue;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # Reinit/5 # ElChar/8 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 81/1 ]] }
    refalrts::reinit_number( context[1], 81UL );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // # Reinit # ElName
    // </0 & NumberFromOpcode/4 # Reinit/5 # ElName/8 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::ident_term(  ident_Reinit, context[5] ) )
      continue;
    context[8] = refalrts::ident_left(  ident_ElName, context[6], context[7] );
    if( ! context[8] )
      continue;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # Reinit/5 # ElName/8 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 82/1 ]] }
    refalrts::reinit_number( context[1], 82UL );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // # Reinit # ElNumber
    // </0 & NumberFromOpcode/4 # Reinit/5 # ElNumber/8 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::ident_term(  ident_Reinit, context[5] ) )
      continue;
    context[8] = refalrts::ident_left(  ident_ElNumber, context[6], context[7] );
    if( ! context[8] )
      continue;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # Reinit/5 # ElNumber/8 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 83/1 ]] }
    refalrts::reinit_number( context[1], 83UL );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // # Reinit # ElHugeNumber
    // </0 & NumberFromOpcode/4 # Reinit/5 # ElHugeNumber/8 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::ident_term(  ident_Reinit, context[5] ) )
      continue;
    context[8] = refalrts::ident_left(  ident_ElHugeNumber, context[6], context[7] );
    if( ! context[8] )
      continue;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # Reinit/5 # ElHugeNumber/8 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 84/1 ]] }
    refalrts::reinit_number( context[1], 84UL );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // # Reinit # ElIdent
    // </0 & NumberFromOpcode/4 # Reinit/5 # ElIdent/8 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::ident_term(  ident_Reinit, context[5] ) )
      continue;
    context[8] = refalrts::ident_left(  ident_ElIdent, context[6], context[7] );
    if( ! context[8] )
      continue;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # Reinit/5 # ElIdent/8 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 85/1 ]] }
    refalrts::reinit_number( context[1], 85UL );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // # Reinit # ElBracket
    // </0 & NumberFromOpcode/4 # Reinit/5 # ElBracket/8 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::ident_term(  ident_Reinit, context[5] ) )
      continue;
    context[8] = refalrts::ident_left(  ident_ElBracket, context[6], context[7] );
    if( ! context[8] )
      continue;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # Reinit/5 # ElBracket/8 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 86/1 ]] }
    refalrts::reinit_number( context[1], 86UL );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // # Reinit # ElClosureHead
    // </0 & NumberFromOpcode/4 # Reinit/5 # ElClosureHead/8 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::ident_term(  ident_Reinit, context[5] ) )
      continue;
    context[8] = refalrts::ident_left(  ident_ElClosureHead, context[6], context[7] );
    if( ! context[8] )
      continue;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # Reinit/5 # ElClosureHead/8 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 87/1 ]] }
    refalrts::reinit_number( context[1], 87UL );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // # Reinit # ElUnwrappedClosure
    // </0 & NumberFromOpcode/4 # Reinit/5 # ElUnwrappedClosure/8 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::ident_term(  ident_Reinit, context[5] ) )
      continue;
    context[8] = refalrts::ident_left(  ident_ElUnwrappedClosure, context[6], context[7] );
    if( ! context[8] )
      continue;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # Reinit/5 # ElUnwrappedClosure/8 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 88/1 ]] }
    refalrts::reinit_number( context[1], 88UL );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // # Update # ElChar
    // </0 & NumberFromOpcode/4 # Update/5 # ElChar/8 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::ident_term(  ident_Update, context[5] ) )
      continue;
    context[8] = refalrts::ident_left(  ident_ElChar, context[6], context[7] );
    if( ! context[8] )
      continue;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # Update/5 # ElChar/8 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 89/1 ]] }
    refalrts::reinit_number( context[1], 89UL );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // # Update # ElName
    // </0 & NumberFromOpcode/4 # Update/5 # ElName/8 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::ident_term(  ident_Update, context[5] ) )
      continue;
    context[8] = refalrts::ident_left(  ident_ElName, context[6], context[7] );
    if( ! context[8] )
      continue;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # Update/5 # ElName/8 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 90/1 ]] }
    refalrts::reinit_number( context[1], 90UL );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // # Update # ElNumber
    // </0 & NumberFromOpcode/4 # Update/5 # ElNumber/8 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::ident_term(  ident_Update, context[5] ) )
      continue;
    context[8] = refalrts::ident_left(  ident_ElNumber, context[6], context[7] );
    if( ! context[8] )
      continue;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # Update/5 # ElNumber/8 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 91/1 ]] }
    refalrts::reinit_number( context[1], 91UL );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // # Update # ElHugeNumber
    // </0 & NumberFromOpcode/4 # Update/5 # ElHugeNumber/8 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::ident_term(  ident_Update, context[5] ) )
      continue;
    context[8] = refalrts::ident_left(  ident_ElHugeNumber, context[6], context[7] );
    if( ! context[8] )
      continue;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # Update/5 # ElHugeNumber/8 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 92/1 ]] }
    refalrts::reinit_number( context[1], 92UL );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // # Update # ElIdent
    // </0 & NumberFromOpcode/4 # Update/5 # ElIdent/8 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::ident_term(  ident_Update, context[5] ) )
      continue;
    context[8] = refalrts::ident_left(  ident_ElIdent, context[6], context[7] );
    if( ! context[8] )
      continue;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # Update/5 # ElIdent/8 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 93/1 ]] }
    refalrts::reinit_number( context[1], 93UL );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // # CmdLinkBrackets
    // </0 & NumberFromOpcode/4 # CmdLinkBrackets/5 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::ident_term(  ident_CmdLinkBrackets, context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdLinkBrackets/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 94/1 ]] }
    refalrts::reinit_number( context[1], 94UL );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // # CmdPushStack
    // </0 & NumberFromOpcode/4 # CmdPushStack/5 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::ident_term(  ident_CmdPushStack, context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdPushStack/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 95/1 ]] }
    refalrts::reinit_number( context[1], 95UL );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // # CmdWrapClosure
    // </0 & NumberFromOpcode/4 # CmdWrapClosure/5 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::ident_term(  ident_CmdWrapClosure, context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdWrapClosure/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 110/1 ]] }
    refalrts::reinit_number( context[1], 110UL );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // # CmdSpliceElem
    // </0 & NumberFromOpcode/4 # CmdSpliceElem/5 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::ident_term(  ident_CmdSpliceElem, context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdSpliceElem/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 96/1 ]] }
    refalrts::reinit_number( context[1], 96UL );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // # CmdSpliceEVar
    // </0 & NumberFromOpcode/4 # CmdSpliceEVar/5 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::ident_term(  ident_CmdSpliceEVar, context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdSpliceEVar/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 97/1 ]] }
    refalrts::reinit_number( context[1], 97UL );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // # CmdSpliceSTVar
    // </0 & NumberFromOpcode/4 # CmdSpliceSTVar/5 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::ident_term(  ident_CmdSpliceSTVar, context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdSpliceSTVar/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 98/1 ]] }
    refalrts::reinit_number( context[1], 98UL );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // # CmdSpliceRange
    // </0 & NumberFromOpcode/4 # CmdSpliceRange/5 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::ident_term(  ident_CmdSpliceRange, context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdSpliceRange/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 99/1 ]] }
    refalrts::reinit_number( context[1], 99UL );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // # CmdSpliceTile
    // </0 & NumberFromOpcode/4 # CmdSpliceTile/5 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::ident_term(  ident_CmdSpliceTile, context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdSpliceTile/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 100/1 ]] }
    refalrts::reinit_number( context[1], 100UL );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // # CmdSpliceToFreeList
    // </0 & NumberFromOpcode/4 # CmdSpliceToFreeList/5 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::ident_term(  ident_CmdSpliceToFreeList, context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdSpliceToFreeList/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 101/1 ]] }
    refalrts::reinit_number( context[1], 101UL );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // # CmdNextStep
    // </0 & NumberFromOpcode/4 # CmdNextStep/5 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::ident_term(  ident_CmdNextStep, context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdNextStep/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 102/1 ]] }
    refalrts::reinit_number( context[1], 102UL );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // # CmdTrashLeftEdge
    // </0 & NumberFromOpcode/4 # CmdTrashLeftEdge/5 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::ident_term(  ident_CmdTrashLeftEdge, context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdTrashLeftEdge/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 103/1 ]] }
    refalrts::reinit_number( context[1], 103UL );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // # CmdTrash
    // </0 & NumberFromOpcode/4 # CmdTrash/5 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::ident_term(  ident_CmdTrash, context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdTrash/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 104/1 ]] }
    refalrts::reinit_number( context[1], 104UL );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // # CmdFail
    // </0 & NumberFromOpcode/4 # CmdFail/5 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::ident_term(  ident_CmdFail, context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdFail/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 105/1 ]] }
    refalrts::reinit_number( context[1], 105UL );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // # CmdFetchSwapHead
    // </0 & NumberFromOpcode/4 # CmdFetchSwapHead/5 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::ident_term(  ident_CmdFetchSwapHead, context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdFetchSwapHead/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 106/1 ]] }
    refalrts::reinit_number( context[1], 106UL );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // # CmdFetchSwapInfoBounds
    // </0 & NumberFromOpcode/4 # CmdFetchSwapInfoBounds/5 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::ident_term(  ident_CmdFetchSwapInfoBounds, context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdFetchSwapInfoBounds/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 107/1 ]] }
    refalrts::reinit_number( context[1], 107UL );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // # CmdSwapSave
    // </0 & NumberFromOpcode/4 # CmdSwapSave/5 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::ident_term(  ident_CmdSwapSave, context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdSwapSave/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 108/1 ]] }
    refalrts::reinit_number( context[1], 108UL );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // # CmdPerformNative
    // </0 & NumberFromOpcode/4 # CmdPerformNative/5 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::ident_term(  ident_CmdPerformNative, context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdPerformNative/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 109/1 ]] }
    refalrts::reinit_number( context[1], 109UL );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // # CmdScale
    // </0 & NumberFromOpcode/4 # CmdScale/5 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::ident_term(  ident_CmdScale, context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdScale/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 111/1 ]] }
    refalrts::reinit_number( context[1], 111UL );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // # CmdVariableDebugOffset
  // </0 & NumberFromOpcode/4 # CmdVariableDebugOffset/5 >/1
  context[6] = context[2];
  context[7] = context[3];
  if( ! refalrts::ident_term(  ident_CmdVariableDebugOffset, context[5] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[6], context[7] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdVariableDebugOffset/5 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: 112/1 ]] }
  refalrts::reinit_number( context[1], 112UL );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_NumberFromOpcode("NumberFromOpcode", 0U, 0U, func_NumberFromOpcode);


static refalrts::FnResult func_NumberFromBracket(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  //FAST GEN: s.$
  //GLOBAL GEN: s.$
  // </0 & NumberFromBracket/4 s.idx#0/5 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // # ElOpenADT
    // </0 & NumberFromBracket/4 # ElOpenADT/5 >/1
    if( ! refalrts::ident_term(  ident_ElOpenADT, context[5] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & NumberFromBracket/4 # ElOpenADT/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 0/1 ]] }
    refalrts::reinit_number( context[1], 0UL );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // # ElOpenBracket
    // </0 & NumberFromBracket/4 # ElOpenBracket/5 >/1
    if( ! refalrts::ident_term(  ident_ElOpenBracket, context[5] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & NumberFromBracket/4 # ElOpenBracket/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 1/1 ]] }
    refalrts::reinit_number( context[1], 1UL );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // # ElOpenCall
    // </0 & NumberFromBracket/4 # ElOpenCall/5 >/1
    if( ! refalrts::ident_term(  ident_ElOpenCall, context[5] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & NumberFromBracket/4 # ElOpenCall/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 2/1 ]] }
    refalrts::reinit_number( context[1], 2UL );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // # ElCloseADT
    // </0 & NumberFromBracket/4 # ElCloseADT/5 >/1
    if( ! refalrts::ident_term(  ident_ElCloseADT, context[5] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & NumberFromBracket/4 # ElCloseADT/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 3/1 ]] }
    refalrts::reinit_number( context[1], 3UL );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // # ElCloseBracket
    // </0 & NumberFromBracket/4 # ElCloseBracket/5 >/1
    if( ! refalrts::ident_term(  ident_ElCloseBracket, context[5] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & NumberFromBracket/4 # ElCloseBracket/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 4/1 ]] }
    refalrts::reinit_number( context[1], 4UL );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // # ElCloseCall
  // </0 & NumberFromBracket/4 # ElCloseCall/5 >/1
  if( ! refalrts::ident_term(  ident_ElCloseCall, context[5] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & NumberFromBracket/4 # ElCloseCall/5 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: 5/1 ]] }
  refalrts::reinit_number( context[1], 5UL );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_NumberFromBracket("NumberFromBracket", 0U, 0U, func_NumberFromBracket);


static refalrts::FnResult func_BlockTypeNumber(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  //FAST GEN: s.$
  //GLOBAL GEN: s.$
  // </0 & BlockTypeNumber/4 s.idx#0/5 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // # Start
    // </0 & BlockTypeNumber/4 # Start/5 >/1
    if( ! refalrts::ident_term(  ident_Start, context[5] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & BlockTypeNumber/4 # Start/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 1/1 ]] }
    refalrts::reinit_number( context[1], 1UL );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // # ConstTable
    // </0 & BlockTypeNumber/4 # ConstTable/5 >/1
    if( ! refalrts::ident_term(  ident_ConstTable, context[5] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & BlockTypeNumber/4 # ConstTable/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 2/1 ]] }
    refalrts::reinit_number( context[1], 2UL );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // # RefalFunction
    // </0 & BlockTypeNumber/4 # RefalFunction/5 >/1
    if( ! refalrts::ident_term(  ident_RefalFunction, context[5] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & BlockTypeNumber/4 # RefalFunction/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 3/1 ]] }
    refalrts::reinit_number( context[1], 3UL );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // # NativeFunction
    // </0 & BlockTypeNumber/4 # NativeFunction/5 >/1
    if( ! refalrts::ident_term(  ident_NativeFunction, context[5] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & BlockTypeNumber/4 # NativeFunction/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 4/1 ]] }
    refalrts::reinit_number( context[1], 4UL );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // # EmptyFunction
    // </0 & BlockTypeNumber/4 # EmptyFunction/5 >/1
    if( ! refalrts::ident_term(  ident_EmptyFunction, context[5] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & BlockTypeNumber/4 # EmptyFunction/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 5/1 ]] }
    refalrts::reinit_number( context[1], 5UL );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // # Swap
    // </0 & BlockTypeNumber/4 # Swap/5 >/1
    if( ! refalrts::ident_term(  ident_Swap, context[5] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & BlockTypeNumber/4 # Swap/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 6/1 ]] }
    refalrts::reinit_number( context[1], 6UL );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // # Reference
  // </0 & BlockTypeNumber/4 # Reference/5 >/1
  if( ! refalrts::ident_term(  ident_Reference, context[5] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & BlockTypeNumber/4 # Reference/5 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: 7/1 ]] }
  refalrts::reinit_number( context[1], 7UL );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_BlockTypeNumber("BlockTypeNumber", 0U, 0U, func_BlockTypeNumber);


//End of file
