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
static const refalrts::RefalIdentifier ident_CmdMainLoopReturnSuccess = refalrts::ident_from_static("CmdMainLoopReturnSuccess");
static const refalrts::RefalIdentifier ident_CmdName = refalrts::ident_from_static("CmdName");
static const refalrts::RefalIdentifier ident_CmdNameSave = refalrts::ident_from_static("CmdNameSave");
static const refalrts::RefalIdentifier ident_CmdNextStep = refalrts::ident_from_static("CmdNextStep");
static const refalrts::RefalIdentifier ident_CmdNotEmpty = refalrts::ident_from_static("CmdNotEmpty");
static const refalrts::RefalIdentifier ident_CmdNumber = refalrts::ident_from_static("CmdNumber");
static const refalrts::RefalIdentifier ident_CmdNumberSave = refalrts::ident_from_static("CmdNumberSave");
static const refalrts::RefalIdentifier ident_CmdOnFailGoTo = refalrts::ident_from_static("CmdOnFailGoTo");
static const refalrts::RefalIdentifier ident_CmdPerformNative = refalrts::ident_from_static("CmdPerformNative");
static const refalrts::RefalIdentifier ident_CmdPopState = refalrts::ident_from_static("CmdPopState");
static const refalrts::RefalIdentifier ident_CmdProfileFunction = refalrts::ident_from_static("CmdProfileFunction");
static const refalrts::RefalIdentifier ident_CmdProfilerStopSentence = refalrts::ident_from_static("CmdProfilerStopSentence");
static const refalrts::RefalIdentifier ident_CmdPushStack = refalrts::ident_from_static("CmdPushStack");
static const refalrts::RefalIdentifier ident_CmdPushState = refalrts::ident_from_static("CmdPushState");
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
static const refalrts::RefalIdentifier ident_CmdSpliceToFreeListm_Range = refalrts::ident_from_static("CmdSpliceToFreeList-Range");
static const refalrts::RefalIdentifier ident_CmdSwapSave = refalrts::ident_from_static("CmdSwapSave");
static const refalrts::RefalIdentifier ident_CmdTrash = refalrts::ident_from_static("CmdTrash");
static const refalrts::RefalIdentifier ident_CmdTrashLeftEdge = refalrts::ident_from_static("CmdTrashLeftEdge");
static const refalrts::RefalIdentifier ident_CmdVar = refalrts::ident_from_static("CmdVar");
static const refalrts::RefalIdentifier ident_CmdVarSave = refalrts::ident_from_static("CmdVarSave");
static const refalrts::RefalIdentifier ident_CmdVariableDebugOffset = refalrts::ident_from_static("CmdVariableDebugOffset");
static const refalrts::RefalIdentifier ident_CmdWrapClosure = refalrts::ident_from_static("CmdWrapClosure");
static const refalrts::RefalIdentifier ident_ConditionNative = refalrts::ident_from_static("ConditionNative");
static const refalrts::RefalIdentifier ident_ConditionRasl = refalrts::ident_from_static("ConditionRasl");
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
  // </0 & NumberFromOpcode/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & NumberFromOpcode/4 e.new#1/2 s.new#2/5 >/1
  if( ! refalrts::svar_right( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#1 as range 2
  do {
    // </0 & NumberFromOpcode/4 s.new#3/5 >/1
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    do {
      // </0 & NumberFromOpcode/4 # CmdProfileFunction/5 >/1
      if( ! refalrts::ident_term(  ident_CmdProfileFunction, context[5] ) )
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
      // </0 & NumberFromOpcode/4 # CmdLoadConstants/5 >/1
      if( ! refalrts::ident_term(  ident_CmdLoadConstants, context[5] ) )
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
      // </0 & NumberFromOpcode/4 # CmdIssueMemory/5 >/1
      if( ! refalrts::ident_term(  ident_CmdIssueMemory, context[5] ) )
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
      // </0 & NumberFromOpcode/4 # CmdReserveBacktrackStack/5 >/1
      if( ! refalrts::ident_term(  ident_CmdReserveBacktrackStack, context[5] ) )
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
      // </0 & NumberFromOpcode/4 # CmdOnFailGoTo/5 >/1
      if( ! refalrts::ident_term(  ident_CmdOnFailGoTo, context[5] ) )
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
      // </0 & NumberFromOpcode/4 # CmdProfilerStopSentence/5 >/1
      if( ! refalrts::ident_term(  ident_CmdProfilerStopSentence, context[5] ) )
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
      // </0 & NumberFromOpcode/4 # CmdInitB0/5 >/1
      if( ! refalrts::ident_term(  ident_CmdInitB0, context[5] ) )
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

    // </0 & NumberFromOpcode/4 # CmdInitB0-Lite/5 >/1
    if( ! refalrts::ident_term(  ident_CmdInitB0m_Lite, context[5] ) )
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
    // </0 & NumberFromOpcode/4 s.new#4/8 s.new#3/5 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::svar_left( context[8], context[6], context[7] ) )
      continue;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      continue;
    do {
      // </0 & NumberFromOpcode/4 # CmdChar/8 s.new#5/5 >/1
      if( ! refalrts::ident_term(  ident_CmdChar, context[8] ) )
        continue;
      do {
        // </0 & NumberFromOpcode/4 # CmdChar/8 # AlgLeft/5 >/1
        if( ! refalrts::ident_term(  ident_AlgLeft, context[5] ) )
          continue;

        refalrts::reset_allocator();
        //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdChar/8 # AlgLeft/5 {REMOVED TILE}
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
        // </0 & NumberFromOpcode/4 # CmdChar/8 # AlgRight/5 >/1
        if( ! refalrts::ident_term(  ident_AlgRight, context[5] ) )
          continue;

        refalrts::reset_allocator();
        //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdChar/8 # AlgRight/5 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: 9/1 ]] }
        refalrts::reinit_number( context[1], 9UL );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        refalrts::splice_to_freelist_open( trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence();

      // </0 & NumberFromOpcode/4 # CmdChar/8 # AlgTerm/5 >/1
      if( ! refalrts::ident_term(  ident_AlgTerm, context[5] ) )
        continue;

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdChar/8 # AlgTerm/5 {REMOVED TILE}
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
      // </0 & NumberFromOpcode/4 # CmdCharSave/8 s.new#5/5 >/1
      if( ! refalrts::ident_term(  ident_CmdCharSave, context[8] ) )
        continue;
      do {
        // </0 & NumberFromOpcode/4 # CmdCharSave/8 # AlgLeft/5 >/1
        if( ! refalrts::ident_term(  ident_AlgLeft, context[5] ) )
          continue;

        refalrts::reset_allocator();
        //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdCharSave/8 # AlgLeft/5 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: 11/1 ]] }
        refalrts::reinit_number( context[1], 11UL );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        refalrts::splice_to_freelist_open( trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence();

      // </0 & NumberFromOpcode/4 # CmdCharSave/8 # AlgRight/5 >/1
      if( ! refalrts::ident_term(  ident_AlgRight, context[5] ) )
        continue;

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdCharSave/8 # AlgRight/5 {REMOVED TILE}
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
      // </0 & NumberFromOpcode/4 # CmdNumber/8 s.new#5/5 >/1
      if( ! refalrts::ident_term(  ident_CmdNumber, context[8] ) )
        continue;
      do {
        // </0 & NumberFromOpcode/4 # CmdNumber/8 # AlgLeft/5 >/1
        if( ! refalrts::ident_term(  ident_AlgLeft, context[5] ) )
          continue;

        refalrts::reset_allocator();
        //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdNumber/8 # AlgLeft/5 {REMOVED TILE}
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
        // </0 & NumberFromOpcode/4 # CmdNumber/8 # AlgRight/5 >/1
        if( ! refalrts::ident_term(  ident_AlgRight, context[5] ) )
          continue;

        refalrts::reset_allocator();
        //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdNumber/8 # AlgRight/5 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: 14/1 ]] }
        refalrts::reinit_number( context[1], 14UL );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        refalrts::splice_to_freelist_open( trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence();

      // </0 & NumberFromOpcode/4 # CmdNumber/8 # AlgTerm/5 >/1
      if( ! refalrts::ident_term(  ident_AlgTerm, context[5] ) )
        continue;

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdNumber/8 # AlgTerm/5 {REMOVED TILE}
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
      // </0 & NumberFromOpcode/4 # CmdNumberSave/8 s.new#5/5 >/1
      if( ! refalrts::ident_term(  ident_CmdNumberSave, context[8] ) )
        continue;
      do {
        // </0 & NumberFromOpcode/4 # CmdNumberSave/8 # AlgLeft/5 >/1
        if( ! refalrts::ident_term(  ident_AlgLeft, context[5] ) )
          continue;

        refalrts::reset_allocator();
        //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdNumberSave/8 # AlgLeft/5 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: 16/1 ]] }
        refalrts::reinit_number( context[1], 16UL );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        refalrts::splice_to_freelist_open( trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence();

      // </0 & NumberFromOpcode/4 # CmdNumberSave/8 # AlgRight/5 >/1
      if( ! refalrts::ident_term(  ident_AlgRight, context[5] ) )
        continue;

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdNumberSave/8 # AlgRight/5 {REMOVED TILE}
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
      // </0 & NumberFromOpcode/4 # CmdHugeNum/8 s.new#5/5 >/1
      if( ! refalrts::ident_term(  ident_CmdHugeNum, context[8] ) )
        continue;
      do {
        // </0 & NumberFromOpcode/4 # CmdHugeNum/8 # AlgLeft/5 >/1
        if( ! refalrts::ident_term(  ident_AlgLeft, context[5] ) )
          continue;

        refalrts::reset_allocator();
        //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdHugeNum/8 # AlgLeft/5 {REMOVED TILE}
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
        // </0 & NumberFromOpcode/4 # CmdHugeNum/8 # AlgRight/5 >/1
        if( ! refalrts::ident_term(  ident_AlgRight, context[5] ) )
          continue;

        refalrts::reset_allocator();
        //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdHugeNum/8 # AlgRight/5 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: 19/1 ]] }
        refalrts::reinit_number( context[1], 19UL );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        refalrts::splice_to_freelist_open( trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence();

      // </0 & NumberFromOpcode/4 # CmdHugeNum/8 # AlgTerm/5 >/1
      if( ! refalrts::ident_term(  ident_AlgTerm, context[5] ) )
        continue;

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdHugeNum/8 # AlgTerm/5 {REMOVED TILE}
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
      // </0 & NumberFromOpcode/4 # CmdHugeNumSave/8 s.new#5/5 >/1
      if( ! refalrts::ident_term(  ident_CmdHugeNumSave, context[8] ) )
        continue;
      do {
        // </0 & NumberFromOpcode/4 # CmdHugeNumSave/8 # AlgLeft/5 >/1
        if( ! refalrts::ident_term(  ident_AlgLeft, context[5] ) )
          continue;

        refalrts::reset_allocator();
        //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdHugeNumSave/8 # AlgLeft/5 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: 21/1 ]] }
        refalrts::reinit_number( context[1], 21UL );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        refalrts::splice_to_freelist_open( trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence();

      // </0 & NumberFromOpcode/4 # CmdHugeNumSave/8 # AlgRight/5 >/1
      if( ! refalrts::ident_term(  ident_AlgRight, context[5] ) )
        continue;

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdHugeNumSave/8 # AlgRight/5 {REMOVED TILE}
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
      // </0 & NumberFromOpcode/4 # CmdName/8 s.new#5/5 >/1
      if( ! refalrts::ident_term(  ident_CmdName, context[8] ) )
        continue;
      do {
        // </0 & NumberFromOpcode/4 # CmdName/8 # AlgLeft/5 >/1
        if( ! refalrts::ident_term(  ident_AlgLeft, context[5] ) )
          continue;

        refalrts::reset_allocator();
        //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdName/8 # AlgLeft/5 {REMOVED TILE}
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
        // </0 & NumberFromOpcode/4 # CmdName/8 # AlgRight/5 >/1
        if( ! refalrts::ident_term(  ident_AlgRight, context[5] ) )
          continue;

        refalrts::reset_allocator();
        //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdName/8 # AlgRight/5 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: 24/1 ]] }
        refalrts::reinit_number( context[1], 24UL );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        refalrts::splice_to_freelist_open( trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence();

      // </0 & NumberFromOpcode/4 # CmdName/8 # AlgTerm/5 >/1
      if( ! refalrts::ident_term(  ident_AlgTerm, context[5] ) )
        continue;

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdName/8 # AlgTerm/5 {REMOVED TILE}
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
      // </0 & NumberFromOpcode/4 # CmdNameSave/8 s.new#5/5 >/1
      if( ! refalrts::ident_term(  ident_CmdNameSave, context[8] ) )
        continue;
      do {
        // </0 & NumberFromOpcode/4 # CmdNameSave/8 # AlgLeft/5 >/1
        if( ! refalrts::ident_term(  ident_AlgLeft, context[5] ) )
          continue;

        refalrts::reset_allocator();
        //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdNameSave/8 # AlgLeft/5 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: 26/1 ]] }
        refalrts::reinit_number( context[1], 26UL );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        refalrts::splice_to_freelist_open( trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence();

      // </0 & NumberFromOpcode/4 # CmdNameSave/8 # AlgRight/5 >/1
      if( ! refalrts::ident_term(  ident_AlgRight, context[5] ) )
        continue;

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdNameSave/8 # AlgRight/5 {REMOVED TILE}
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
      // </0 & NumberFromOpcode/4 # CmdIdent/8 s.new#5/5 >/1
      if( ! refalrts::ident_term(  ident_CmdIdent, context[8] ) )
        continue;
      do {
        // </0 & NumberFromOpcode/4 # CmdIdent/8 # AlgLeft/5 >/1
        if( ! refalrts::ident_term(  ident_AlgLeft, context[5] ) )
          continue;

        refalrts::reset_allocator();
        //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdIdent/8 # AlgLeft/5 {REMOVED TILE}
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
        // </0 & NumberFromOpcode/4 # CmdIdent/8 # AlgRight/5 >/1
        if( ! refalrts::ident_term(  ident_AlgRight, context[5] ) )
          continue;

        refalrts::reset_allocator();
        //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdIdent/8 # AlgRight/5 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: 29/1 ]] }
        refalrts::reinit_number( context[1], 29UL );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        refalrts::splice_to_freelist_open( trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence();

      // </0 & NumberFromOpcode/4 # CmdIdent/8 # AlgTerm/5 >/1
      if( ! refalrts::ident_term(  ident_AlgTerm, context[5] ) )
        continue;

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdIdent/8 # AlgTerm/5 {REMOVED TILE}
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
      // </0 & NumberFromOpcode/4 # CmdIdentSave/8 s.new#5/5 >/1
      if( ! refalrts::ident_term(  ident_CmdIdentSave, context[8] ) )
        continue;
      do {
        // </0 & NumberFromOpcode/4 # CmdIdentSave/8 # AlgLeft/5 >/1
        if( ! refalrts::ident_term(  ident_AlgLeft, context[5] ) )
          continue;

        refalrts::reset_allocator();
        //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdIdentSave/8 # AlgLeft/5 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: 31/1 ]] }
        refalrts::reinit_number( context[1], 31UL );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        refalrts::splice_to_freelist_open( trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence();

      // </0 & NumberFromOpcode/4 # CmdIdentSave/8 # AlgRight/5 >/1
      if( ! refalrts::ident_term(  ident_AlgRight, context[5] ) )
        continue;

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdIdentSave/8 # AlgRight/5 {REMOVED TILE}
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
      // </0 & NumberFromOpcode/4 # CmdBrackets/8 s.new#5/5 >/1
      if( ! refalrts::ident_term(  ident_CmdBrackets, context[8] ) )
        continue;
      do {
        // </0 & NumberFromOpcode/4 # CmdBrackets/8 # AlgLeft/5 >/1
        if( ! refalrts::ident_term(  ident_AlgLeft, context[5] ) )
          continue;

        refalrts::reset_allocator();
        //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdBrackets/8 # AlgLeft/5 {REMOVED TILE}
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
        // </0 & NumberFromOpcode/4 # CmdBrackets/8 # AlgRight/5 >/1
        if( ! refalrts::ident_term(  ident_AlgRight, context[5] ) )
          continue;

        refalrts::reset_allocator();
        //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdBrackets/8 # AlgRight/5 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: 34/1 ]] }
        refalrts::reinit_number( context[1], 34UL );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        refalrts::splice_to_freelist_open( trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence();

      // </0 & NumberFromOpcode/4 # CmdBrackets/8 # AlgTerm/5 >/1
      if( ! refalrts::ident_term(  ident_AlgTerm, context[5] ) )
        continue;

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdBrackets/8 # AlgTerm/5 {REMOVED TILE}
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
      // </0 & NumberFromOpcode/4 # CmdBracketsSave/8 s.new#5/5 >/1
      if( ! refalrts::ident_term(  ident_CmdBracketsSave, context[8] ) )
        continue;
      do {
        // </0 & NumberFromOpcode/4 # CmdBracketsSave/8 # AlgLeft/5 >/1
        if( ! refalrts::ident_term(  ident_AlgLeft, context[5] ) )
          continue;

        refalrts::reset_allocator();
        //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdBracketsSave/8 # AlgLeft/5 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: 36/1 ]] }
        refalrts::reinit_number( context[1], 36UL );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        refalrts::splice_to_freelist_open( trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence();

      // </0 & NumberFromOpcode/4 # CmdBracketsSave/8 # AlgRight/5 >/1
      if( ! refalrts::ident_term(  ident_AlgRight, context[5] ) )
        continue;

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdBracketsSave/8 # AlgRight/5 {REMOVED TILE}
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
      // </0 & NumberFromOpcode/4 # CmdADT/8 s.new#5/5 >/1
      if( ! refalrts::ident_term(  ident_CmdADT, context[8] ) )
        continue;
      do {
        // </0 & NumberFromOpcode/4 # CmdADT/8 # AlgLeft/5 >/1
        if( ! refalrts::ident_term(  ident_AlgLeft, context[5] ) )
          continue;

        refalrts::reset_allocator();
        //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdADT/8 # AlgLeft/5 {REMOVED TILE}
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
        // </0 & NumberFromOpcode/4 # CmdADT/8 # AlgRight/5 >/1
        if( ! refalrts::ident_term(  ident_AlgRight, context[5] ) )
          continue;

        refalrts::reset_allocator();
        //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdADT/8 # AlgRight/5 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: 39/1 ]] }
        refalrts::reinit_number( context[1], 39UL );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        refalrts::splice_to_freelist_open( trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence();

      // </0 & NumberFromOpcode/4 # CmdADT/8 # AlgTerm/5 >/1
      if( ! refalrts::ident_term(  ident_AlgTerm, context[5] ) )
        continue;

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdADT/8 # AlgTerm/5 {REMOVED TILE}
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
      // </0 & NumberFromOpcode/4 # CmdADTSave/8 s.new#5/5 >/1
      if( ! refalrts::ident_term(  ident_CmdADTSave, context[8] ) )
        continue;
      do {
        // </0 & NumberFromOpcode/4 # CmdADTSave/8 # AlgLeft/5 >/1
        if( ! refalrts::ident_term(  ident_AlgLeft, context[5] ) )
          continue;

        refalrts::reset_allocator();
        //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdADTSave/8 # AlgLeft/5 {REMOVED TILE}
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
        // </0 & NumberFromOpcode/4 # CmdADTSave/8 # AlgRight/5 >/1
        if( ! refalrts::ident_term(  ident_AlgRight, context[5] ) )
          continue;

        refalrts::reset_allocator();
        //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdADTSave/8 # AlgRight/5 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: 42/1 ]] }
        refalrts::reinit_number( context[1], 42UL );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        refalrts::splice_to_freelist_open( trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence();

      // </0 & NumberFromOpcode/4 # CmdADTSave/8 # AlgTerm/5 >/1
      if( ! refalrts::ident_term(  ident_AlgTerm, context[5] ) )
        continue;

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdADTSave/8 # AlgTerm/5 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: 43/1 ]] }
      refalrts::reinit_number( context[1], 43UL );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence();

    // </0 & NumberFromOpcode/4 # CmdCallSave/8 # AlgLeft/5 >/1
    if( ! refalrts::ident_term(  ident_CmdCallSave, context[8] ) )
      continue;
    if( ! refalrts::ident_term(  ident_AlgLeft, context[5] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdCallSave/8 # AlgLeft/5 {REMOVED TILE}
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
    // </0 & NumberFromOpcode/4 s.new#3/5 >/1
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    do {
      // </0 & NumberFromOpcode/4 # CmdEmpty/5 >/1
      if( ! refalrts::ident_term(  ident_CmdEmpty, context[5] ) )
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

    // </0 & NumberFromOpcode/4 # CmdNotEmpty/5 >/1
    if( ! refalrts::ident_term(  ident_CmdNotEmpty, context[5] ) )
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
    // </0 & NumberFromOpcode/4 s.new#4/8 s.new#5/9 s.new#3/5 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::svar_left( context[8], context[6], context[7] ) )
      continue;
    if( ! refalrts::svar_left( context[9], context[6], context[7] ) )
      continue;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      continue;
    do {
      // </0 & NumberFromOpcode/4 s.new#7/8 # CmdVar/9 s.new#6/5 >/1
      if( ! refalrts::ident_term(  ident_CmdVar, context[9] ) )
        continue;
      do {
        // </0 & NumberFromOpcode/4 's'/8 # CmdVar/9 s.new#8/5 >/1
        if( ! refalrts::char_term( 's', context[8] ) )
          continue;
        do {
          // </0 & NumberFromOpcode/4 's'/8 # CmdVar/9 # AlgLeft/5 >/1
          if( ! refalrts::ident_term(  ident_AlgLeft, context[5] ) )
            continue;

          refalrts::reset_allocator();
          //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 's'/8 # CmdVar/9 # AlgLeft/5 {REMOVED TILE}
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
          // </0 & NumberFromOpcode/4 's'/8 # CmdVar/9 # AlgRight/5 >/1
          if( ! refalrts::ident_term(  ident_AlgRight, context[5] ) )
            continue;

          refalrts::reset_allocator();
          //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 's'/8 # CmdVar/9 # AlgRight/5 {REMOVED TILE}
          //RESULT: Tile{ [[ } Tile{ HalfReuse: 48/1 ]] }
          refalrts::reinit_number( context[1], 48UL );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[1];
          refalrts::splice_to_freelist_open( trash_prev, res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence();

        // </0 & NumberFromOpcode/4 's'/8 # CmdVar/9 # AlgTerm/5 >/1
        if( ! refalrts::ident_term(  ident_AlgTerm, context[5] ) )
          continue;

        refalrts::reset_allocator();
        //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 's'/8 # CmdVar/9 # AlgTerm/5 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: 49/1 ]] }
        refalrts::reinit_number( context[1], 49UL );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        refalrts::splice_to_freelist_open( trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence();

      // </0 & NumberFromOpcode/4 't'/8 # CmdVar/9 s.new#8/5 >/1
      if( ! refalrts::char_term( 't', context[8] ) )
        continue;
      do {
        // </0 & NumberFromOpcode/4 't'/8 # CmdVar/9 # AlgLeft/5 >/1
        if( ! refalrts::ident_term(  ident_AlgLeft, context[5] ) )
          continue;

        refalrts::reset_allocator();
        //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 't'/8 # CmdVar/9 # AlgLeft/5 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: 50/1 ]] }
        refalrts::reinit_number( context[1], 50UL );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        refalrts::splice_to_freelist_open( trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence();

      // </0 & NumberFromOpcode/4 't'/8 # CmdVar/9 # AlgRight/5 >/1
      if( ! refalrts::ident_term(  ident_AlgRight, context[5] ) )
        continue;

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 't'/8 # CmdVar/9 # AlgRight/5 {REMOVED TILE}
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
      // </0 & NumberFromOpcode/4 't'/8 # CmdVarSave/9 s.new#6/5 >/1
      if( ! refalrts::char_term( 't', context[8] ) )
        continue;
      if( ! refalrts::ident_term(  ident_CmdVarSave, context[9] ) )
        continue;
      do {
        // </0 & NumberFromOpcode/4 't'/8 # CmdVarSave/9 # AlgLeft/5 >/1
        if( ! refalrts::ident_term(  ident_AlgLeft, context[5] ) )
          continue;

        refalrts::reset_allocator();
        //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 't'/8 # CmdVarSave/9 # AlgLeft/5 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: 52/1 ]] }
        refalrts::reinit_number( context[1], 52UL );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        refalrts::splice_to_freelist_open( trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence();

      // </0 & NumberFromOpcode/4 't'/8 # CmdVarSave/9 # AlgRight/5 >/1
      if( ! refalrts::ident_term(  ident_AlgRight, context[5] ) )
        continue;

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 't'/8 # CmdVarSave/9 # AlgRight/5 {REMOVED TILE}
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
      // </0 & NumberFromOpcode/4 s.new#7/8 # CmdRepeated/9 s.new#6/5 >/1
      if( ! refalrts::ident_term(  ident_CmdRepeated, context[9] ) )
        continue;
      do {
        // </0 & NumberFromOpcode/4 'e'/8 # CmdRepeated/9 s.new#8/5 >/1
        if( ! refalrts::char_term( 'e', context[8] ) )
          continue;
        do {
          // </0 & NumberFromOpcode/4 'e'/8 # CmdRepeated/9 # AlgLeft/5 >/1
          if( ! refalrts::ident_term(  ident_AlgLeft, context[5] ) )
            continue;

          refalrts::reset_allocator();
          //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 'e'/8 # CmdRepeated/9 # AlgLeft/5 {REMOVED TILE}
          //RESULT: Tile{ [[ } Tile{ HalfReuse: 54/1 ]] }
          refalrts::reinit_number( context[1], 54UL );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[1];
          refalrts::splice_to_freelist_open( trash_prev, res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence();

        // </0 & NumberFromOpcode/4 'e'/8 # CmdRepeated/9 # AlgRight/5 >/1
        if( ! refalrts::ident_term(  ident_AlgRight, context[5] ) )
          continue;

        refalrts::reset_allocator();
        //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 'e'/8 # CmdRepeated/9 # AlgRight/5 {REMOVED TILE}
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
        // </0 & NumberFromOpcode/4 's'/8 # CmdRepeated/9 s.new#8/5 >/1
        if( ! refalrts::char_term( 's', context[8] ) )
          continue;
        do {
          // </0 & NumberFromOpcode/4 's'/8 # CmdRepeated/9 # AlgLeft/5 >/1
          if( ! refalrts::ident_term(  ident_AlgLeft, context[5] ) )
            continue;

          refalrts::reset_allocator();
          //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 's'/8 # CmdRepeated/9 # AlgLeft/5 {REMOVED TILE}
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
          // </0 & NumberFromOpcode/4 's'/8 # CmdRepeated/9 # AlgRight/5 >/1
          if( ! refalrts::ident_term(  ident_AlgRight, context[5] ) )
            continue;

          refalrts::reset_allocator();
          //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 's'/8 # CmdRepeated/9 # AlgRight/5 {REMOVED TILE}
          //RESULT: Tile{ [[ } Tile{ HalfReuse: 57/1 ]] }
          refalrts::reinit_number( context[1], 57UL );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[1];
          refalrts::splice_to_freelist_open( trash_prev, res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence();

        // </0 & NumberFromOpcode/4 's'/8 # CmdRepeated/9 # AlgTerm/5 >/1
        if( ! refalrts::ident_term(  ident_AlgTerm, context[5] ) )
          continue;

        refalrts::reset_allocator();
        //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 's'/8 # CmdRepeated/9 # AlgTerm/5 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: 58/1 ]] }
        refalrts::reinit_number( context[1], 58UL );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        refalrts::splice_to_freelist_open( trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence();

      // </0 & NumberFromOpcode/4 't'/8 # CmdRepeated/9 s.new#8/5 >/1
      if( ! refalrts::char_term( 't', context[8] ) )
        continue;
      do {
        // </0 & NumberFromOpcode/4 't'/8 # CmdRepeated/9 # AlgLeft/5 >/1
        if( ! refalrts::ident_term(  ident_AlgLeft, context[5] ) )
          continue;

        refalrts::reset_allocator();
        //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 't'/8 # CmdRepeated/9 # AlgLeft/5 {REMOVED TILE}
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
        // </0 & NumberFromOpcode/4 't'/8 # CmdRepeated/9 # AlgRight/5 >/1
        if( ! refalrts::ident_term(  ident_AlgRight, context[5] ) )
          continue;

        refalrts::reset_allocator();
        //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 't'/8 # CmdRepeated/9 # AlgRight/5 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: 60/1 ]] }
        refalrts::reinit_number( context[1], 60UL );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        refalrts::splice_to_freelist_open( trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence();

      // </0 & NumberFromOpcode/4 't'/8 # CmdRepeated/9 # AlgTerm/5 >/1
      if( ! refalrts::ident_term(  ident_AlgTerm, context[5] ) )
        continue;

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 't'/8 # CmdRepeated/9 # AlgTerm/5 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: 61/1 ]] }
      refalrts::reinit_number( context[1], 61UL );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence();

    // </0 & NumberFromOpcode/4 't'/8 # CmdRepeatedSave/9 s.new#6/5 >/1
    if( ! refalrts::char_term( 't', context[8] ) )
      continue;
    if( ! refalrts::ident_term(  ident_CmdRepeatedSave, context[9] ) )
      continue;
    do {
      // </0 & NumberFromOpcode/4 't'/8 # CmdRepeatedSave/9 # AlgLeft/5 >/1
      if( ! refalrts::ident_term(  ident_AlgLeft, context[5] ) )
        continue;

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 't'/8 # CmdRepeatedSave/9 # AlgLeft/5 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: 62/1 ]] }
      refalrts::reinit_number( context[1], 62UL );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence();

    // </0 & NumberFromOpcode/4 't'/8 # CmdRepeatedSave/9 # AlgRight/5 >/1
    if( ! refalrts::ident_term(  ident_AlgRight, context[5] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 't'/8 # CmdRepeatedSave/9 # AlgRight/5 {REMOVED TILE}
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
    // </0 & NumberFromOpcode/4 s.new#3/5 >/1
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    do {
      // </0 & NumberFromOpcode/4 # CmdEPrepare/5 >/1
      if( ! refalrts::ident_term(  ident_CmdEPrepare, context[5] ) )
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
      // </0 & NumberFromOpcode/4 # CmdEStart/5 >/1
      if( ! refalrts::ident_term(  ident_CmdEStart, context[5] ) )
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
      // </0 & NumberFromOpcode/4 # CmdSave/5 >/1
      if( ! refalrts::ident_term(  ident_CmdSave, context[5] ) )
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
      // </0 & NumberFromOpcode/4 # CmdResetAllocator/5 >/1
      if( ! refalrts::ident_term(  ident_CmdResetAllocator, context[5] ) )
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
      // </0 & NumberFromOpcode/4 # CmdSetResArgBegin/5 >/1
      if( ! refalrts::ident_term(  ident_CmdSetResArgBegin, context[5] ) )
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
      // </0 & NumberFromOpcode/4 # CmdSetResRightEdge/5 >/1
      if( ! refalrts::ident_term(  ident_CmdSetResRightEdge, context[5] ) )
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
      // </0 & NumberFromOpcode/4 # CmdSetRes/5 >/1
      if( ! refalrts::ident_term(  ident_CmdSetRes, context[5] ) )
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
      // </0 & NumberFromOpcode/4 # CmdCopyEVar/5 >/1
      if( ! refalrts::ident_term(  ident_CmdCopyEVar, context[5] ) )
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
      // </0 & NumberFromOpcode/4 # CmdCopySTVar/5 >/1
      if( ! refalrts::ident_term(  ident_CmdCopySTVar, context[5] ) )
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

    // </0 & NumberFromOpcode/4 # CmdReinitSVar/5 >/1
    if( ! refalrts::ident_term(  ident_CmdReinitSVar, context[5] ) )
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
    // </0 & NumberFromOpcode/4 s.new#4/8 s.new#3/5 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::svar_left( context[8], context[6], context[7] ) )
      continue;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      continue;
    do {
      // </0 & NumberFromOpcode/4 # Allocate/8 s.new#5/5 >/1
      if( ! refalrts::ident_term(  ident_Allocate, context[8] ) )
        continue;
      do {
        // </0 & NumberFromOpcode/4 # Allocate/8 # ElChar/5 >/1
        if( ! refalrts::ident_term(  ident_ElChar, context[5] ) )
          continue;

        refalrts::reset_allocator();
        //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # Allocate/8 # ElChar/5 {REMOVED TILE}
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
        // </0 & NumberFromOpcode/4 # Allocate/8 # ElName/5 >/1
        if( ! refalrts::ident_term(  ident_ElName, context[5] ) )
          continue;

        refalrts::reset_allocator();
        //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # Allocate/8 # ElName/5 {REMOVED TILE}
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
        // </0 & NumberFromOpcode/4 # Allocate/8 # ElNumber/5 >/1
        if( ! refalrts::ident_term(  ident_ElNumber, context[5] ) )
          continue;

        refalrts::reset_allocator();
        //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # Allocate/8 # ElNumber/5 {REMOVED TILE}
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
        // </0 & NumberFromOpcode/4 # Allocate/8 # ElHugeNumber/5 >/1
        if( ! refalrts::ident_term(  ident_ElHugeNumber, context[5] ) )
          continue;

        refalrts::reset_allocator();
        //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # Allocate/8 # ElHugeNumber/5 {REMOVED TILE}
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
        // </0 & NumberFromOpcode/4 # Allocate/8 # ElIdent/5 >/1
        if( ! refalrts::ident_term(  ident_ElIdent, context[5] ) )
          continue;

        refalrts::reset_allocator();
        //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # Allocate/8 # ElIdent/5 {REMOVED TILE}
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
        // </0 & NumberFromOpcode/4 # Allocate/8 # ElBracket/5 >/1
        if( ! refalrts::ident_term(  ident_ElBracket, context[5] ) )
          continue;

        refalrts::reset_allocator();
        //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # Allocate/8 # ElBracket/5 {REMOVED TILE}
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
        // </0 & NumberFromOpcode/4 # Allocate/8 # ElString/5 >/1
        if( ! refalrts::ident_term(  ident_ElString, context[5] ) )
          continue;

        refalrts::reset_allocator();
        //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # Allocate/8 # ElString/5 {REMOVED TILE}
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
        // </0 & NumberFromOpcode/4 # Allocate/8 # ElClosureHead/5 >/1
        if( ! refalrts::ident_term(  ident_ElClosureHead, context[5] ) )
          continue;

        refalrts::reset_allocator();
        //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # Allocate/8 # ElClosureHead/5 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: 113/1 ]] }
        refalrts::reinit_number( context[1], 113UL );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        refalrts::splice_to_freelist_open( trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence();

      // </0 & NumberFromOpcode/4 # Allocate/8 # ElUnwrappedClosure/5 >/1
      if( ! refalrts::ident_term(  ident_ElUnwrappedClosure, context[5] ) )
        continue;

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # Allocate/8 # ElUnwrappedClosure/5 {REMOVED TILE}
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
      // </0 & NumberFromOpcode/4 # Reinit/8 s.new#5/5 >/1
      if( ! refalrts::ident_term(  ident_Reinit, context[8] ) )
        continue;
      do {
        // </0 & NumberFromOpcode/4 # Reinit/8 # ElChar/5 >/1
        if( ! refalrts::ident_term(  ident_ElChar, context[5] ) )
          continue;

        refalrts::reset_allocator();
        //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # Reinit/8 # ElChar/5 {REMOVED TILE}
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
        // </0 & NumberFromOpcode/4 # Reinit/8 # ElName/5 >/1
        if( ! refalrts::ident_term(  ident_ElName, context[5] ) )
          continue;

        refalrts::reset_allocator();
        //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # Reinit/8 # ElName/5 {REMOVED TILE}
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
        // </0 & NumberFromOpcode/4 # Reinit/8 # ElNumber/5 >/1
        if( ! refalrts::ident_term(  ident_ElNumber, context[5] ) )
          continue;

        refalrts::reset_allocator();
        //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # Reinit/8 # ElNumber/5 {REMOVED TILE}
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
        // </0 & NumberFromOpcode/4 # Reinit/8 # ElHugeNumber/5 >/1
        if( ! refalrts::ident_term(  ident_ElHugeNumber, context[5] ) )
          continue;

        refalrts::reset_allocator();
        //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # Reinit/8 # ElHugeNumber/5 {REMOVED TILE}
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
        // </0 & NumberFromOpcode/4 # Reinit/8 # ElIdent/5 >/1
        if( ! refalrts::ident_term(  ident_ElIdent, context[5] ) )
          continue;

        refalrts::reset_allocator();
        //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # Reinit/8 # ElIdent/5 {REMOVED TILE}
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
        // </0 & NumberFromOpcode/4 # Reinit/8 # ElBracket/5 >/1
        if( ! refalrts::ident_term(  ident_ElBracket, context[5] ) )
          continue;

        refalrts::reset_allocator();
        //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # Reinit/8 # ElBracket/5 {REMOVED TILE}
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
        // </0 & NumberFromOpcode/4 # Reinit/8 # ElClosureHead/5 >/1
        if( ! refalrts::ident_term(  ident_ElClosureHead, context[5] ) )
          continue;

        refalrts::reset_allocator();
        //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # Reinit/8 # ElClosureHead/5 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: 87/1 ]] }
        refalrts::reinit_number( context[1], 87UL );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        refalrts::splice_to_freelist_open( trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence();

      // </0 & NumberFromOpcode/4 # Reinit/8 # ElUnwrappedClosure/5 >/1
      if( ! refalrts::ident_term(  ident_ElUnwrappedClosure, context[5] ) )
        continue;

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # Reinit/8 # ElUnwrappedClosure/5 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: 88/1 ]] }
      refalrts::reinit_number( context[1], 88UL );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence();

    // </0 & NumberFromOpcode/4 # Update/8 s.new#5/5 >/1
    if( ! refalrts::ident_term(  ident_Update, context[8] ) )
      continue;
    do {
      // </0 & NumberFromOpcode/4 # Update/8 # ElChar/5 >/1
      if( ! refalrts::ident_term(  ident_ElChar, context[5] ) )
        continue;

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # Update/8 # ElChar/5 {REMOVED TILE}
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
      // </0 & NumberFromOpcode/4 # Update/8 # ElName/5 >/1
      if( ! refalrts::ident_term(  ident_ElName, context[5] ) )
        continue;

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # Update/8 # ElName/5 {REMOVED TILE}
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
      // </0 & NumberFromOpcode/4 # Update/8 # ElNumber/5 >/1
      if( ! refalrts::ident_term(  ident_ElNumber, context[5] ) )
        continue;

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # Update/8 # ElNumber/5 {REMOVED TILE}
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
      // </0 & NumberFromOpcode/4 # Update/8 # ElHugeNumber/5 >/1
      if( ! refalrts::ident_term(  ident_ElHugeNumber, context[5] ) )
        continue;

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # Update/8 # ElHugeNumber/5 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: 92/1 ]] }
      refalrts::reinit_number( context[1], 92UL );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence();

    // </0 & NumberFromOpcode/4 # Update/8 # ElIdent/5 >/1
    if( ! refalrts::ident_term(  ident_ElIdent, context[5] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # Update/8 # ElIdent/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 93/1 ]] }
    refalrts::reinit_number( context[1], 93UL );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // </0 & NumberFromOpcode/4 s.new#3/5 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & NumberFromOpcode/4 # CmdLinkBrackets/5 >/1
    if( ! refalrts::ident_term(  ident_CmdLinkBrackets, context[5] ) )
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
    // </0 & NumberFromOpcode/4 # CmdPushStack/5 >/1
    if( ! refalrts::ident_term(  ident_CmdPushStack, context[5] ) )
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
    // </0 & NumberFromOpcode/4 # CmdWrapClosure/5 >/1
    if( ! refalrts::ident_term(  ident_CmdWrapClosure, context[5] ) )
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
    // </0 & NumberFromOpcode/4 # CmdSpliceElem/5 >/1
    if( ! refalrts::ident_term(  ident_CmdSpliceElem, context[5] ) )
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
    // </0 & NumberFromOpcode/4 # CmdSpliceEVar/5 >/1
    if( ! refalrts::ident_term(  ident_CmdSpliceEVar, context[5] ) )
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
    // </0 & NumberFromOpcode/4 # CmdSpliceSTVar/5 >/1
    if( ! refalrts::ident_term(  ident_CmdSpliceSTVar, context[5] ) )
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
    // </0 & NumberFromOpcode/4 # CmdSpliceRange/5 >/1
    if( ! refalrts::ident_term(  ident_CmdSpliceRange, context[5] ) )
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
    // </0 & NumberFromOpcode/4 # CmdSpliceTile/5 >/1
    if( ! refalrts::ident_term(  ident_CmdSpliceTile, context[5] ) )
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
    // </0 & NumberFromOpcode/4 # CmdSpliceToFreeList/5 >/1
    if( ! refalrts::ident_term(  ident_CmdSpliceToFreeList, context[5] ) )
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
    // </0 & NumberFromOpcode/4 # CmdNextStep/5 >/1
    if( ! refalrts::ident_term(  ident_CmdNextStep, context[5] ) )
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
    // </0 & NumberFromOpcode/4 # CmdTrashLeftEdge/5 >/1
    if( ! refalrts::ident_term(  ident_CmdTrashLeftEdge, context[5] ) )
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
    // </0 & NumberFromOpcode/4 # CmdTrash/5 >/1
    if( ! refalrts::ident_term(  ident_CmdTrash, context[5] ) )
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
    // </0 & NumberFromOpcode/4 # CmdFail/5 >/1
    if( ! refalrts::ident_term(  ident_CmdFail, context[5] ) )
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
    // </0 & NumberFromOpcode/4 # CmdFetchSwapHead/5 >/1
    if( ! refalrts::ident_term(  ident_CmdFetchSwapHead, context[5] ) )
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
    // </0 & NumberFromOpcode/4 # CmdFetchSwapInfoBounds/5 >/1
    if( ! refalrts::ident_term(  ident_CmdFetchSwapInfoBounds, context[5] ) )
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
    // </0 & NumberFromOpcode/4 # CmdSwapSave/5 >/1
    if( ! refalrts::ident_term(  ident_CmdSwapSave, context[5] ) )
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
    // </0 & NumberFromOpcode/4 # CmdPerformNative/5 >/1
    if( ! refalrts::ident_term(  ident_CmdPerformNative, context[5] ) )
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
    // </0 & NumberFromOpcode/4 # CmdScale/5 >/1
    if( ! refalrts::ident_term(  ident_CmdScale, context[5] ) )
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

  do {
    // </0 & NumberFromOpcode/4 # CmdVariableDebugOffset/5 >/1
    if( ! refalrts::ident_term(  ident_CmdVariableDebugOffset, context[5] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdVariableDebugOffset/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 112/1 ]] }
    refalrts::reinit_number( context[1], 112UL );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // </0 & NumberFromOpcode/4 # CmdSpliceToFreeList-Range/5 >/1
    if( ! refalrts::ident_term(  ident_CmdSpliceToFreeListm_Range, context[5] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdSpliceToFreeList-Range/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 115/1 ]] }
    refalrts::reinit_number( context[1], 115UL );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // </0 & NumberFromOpcode/4 # CmdPushState/5 >/1
    if( ! refalrts::ident_term(  ident_CmdPushState, context[5] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdPushState/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 116/1 ]] }
    refalrts::reinit_number( context[1], 116UL );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // </0 & NumberFromOpcode/4 # CmdPopState/5 >/1
    if( ! refalrts::ident_term(  ident_CmdPopState, context[5] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdPopState/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 117/1 ]] }
    refalrts::reinit_number( context[1], 117UL );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // </0 & NumberFromOpcode/4 # CmdMainLoopReturnSuccess/5 >/1
  if( ! refalrts::ident_term(  ident_CmdMainLoopReturnSuccess, context[5] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdMainLoopReturnSuccess/5 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: 118/1 ]] }
  refalrts::reinit_number( context[1], 118UL );
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
  // </0 & NumberFromBracket/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & NumberFromBracket/4 s.new#1/5 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
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
  // </0 & BlockTypeNumber/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & BlockTypeNumber/4 s.new#1/5 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
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

  do {
    // </0 & BlockTypeNumber/4 # Reference/5 >/1
    if( ! refalrts::ident_term(  ident_Reference, context[5] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & BlockTypeNumber/4 # Reference/5 {REMOVED TILE}
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
    // </0 & BlockTypeNumber/4 # ConditionRasl/5 >/1
    if( ! refalrts::ident_term(  ident_ConditionRasl, context[5] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & BlockTypeNumber/4 # ConditionRasl/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 8/1 ]] }
    refalrts::reinit_number( context[1], 8UL );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // </0 & BlockTypeNumber/4 # ConditionNative/5 >/1
  if( ! refalrts::ident_term(  ident_ConditionNative, context[5] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & BlockTypeNumber/4 # ConditionNative/5 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: 9/1 ]] }
  refalrts::reinit_number( context[1], 9UL );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_BlockTypeNumber("BlockTypeNumber", 0U, 0U, func_BlockTypeNumber);


//End of file
