// Automatically generated file. Don't edit!
#include "refalrts.h"


// identifier #AlgLeft
template <typename SREFAL_PARAM_INT>
struct ident_AlgLeft {
  static const char *name() {
    return "AlgLeft";
  }
};

// identifier #AsIs
template <typename SREFAL_PARAM_INT>
struct ident_AsIs {
  static const char *name() {
    return "AsIs";
  }
};

// identifier #CmdIssueMem
template <typename SREFAL_PARAM_INT>
struct ident_CmdIssueMem {
  static const char *name() {
    return "CmdIssueMem";
  }
};

// identifier #CmdOpenELoop
template <typename SREFAL_PARAM_INT>
struct ident_CmdOpenELoop {
  static const char *name() {
    return "CmdOpenELoop";
  }
};

// identifier #CmdOpenedE
template <typename SREFAL_PARAM_INT>
struct ident_CmdOpenedE {
  static const char *name() {
    return "CmdOpenedE";
  }
};

// identifier #E
template <typename SREFAL_PARAM_INT>
struct ident_E {
  static const char *name() {
    return "E";
  }
};

// identifier #HalfReuse
template <typename SREFAL_PARAM_INT>
struct ident_HalfReuse {
  static const char *name() {
    return "HalfReuse";
  }
};

// identifier #Junk
template <typename SREFAL_PARAM_INT>
struct ident_Junk {
  static const char *name() {
    return "Junk";
  }
};

// identifier #LEFT-EDGE
template <typename SREFAL_PARAM_INT>
struct ident_LEFT_EDGE {
  static const char *name() {
    return "LEFT-EDGE";
  }
};

// identifier #NoDepth
template <typename SREFAL_PARAM_INT>
struct ident_NoDepth {
  static const char *name() {
    return "NoDepth";
  }
};

// identifier #NoOffset
template <typename SREFAL_PARAM_INT>
struct ident_NoOffset {
  static const char *name() {
    return "NoOffset";
  }
};

// identifier #Offset
template <typename SREFAL_PARAM_INT>
struct ident_Offset {
  static const char *name() {
    return "Offset";
  }
};

// identifier #RIGHT-EDGE
template <typename SREFAL_PARAM_INT>
struct ident_RIGHT_EDGE {
  static const char *name() {
    return "RIGHT-EDGE";
  }
};

// identifier #RemovedTile
template <typename SREFAL_PARAM_INT>
struct ident_RemovedTile {
  static const char *name() {
    return "RemovedTile";
  }
};

// identifier #Reuse
template <typename SREFAL_PARAM_INT>
struct ident_Reuse {
  static const char *name() {
    return "Reuse";
  }
};

// identifier #Tile
template <typename SREFAL_PARAM_INT>
struct ident_Tile {
  static const char *name() {
    return "Tile";
  }
};

// identifier #TkChar
template <typename SREFAL_PARAM_INT>
struct ident_TkChar {
  static const char *name() {
    return "TkChar";
  }
};

// identifier #TkChars
template <typename SREFAL_PARAM_INT>
struct ident_TkChars {
  static const char *name() {
    return "TkChars";
  }
};

// identifier #TkCloseADT
template <typename SREFAL_PARAM_INT>
struct ident_TkCloseADT {
  static const char *name() {
    return "TkCloseADT";
  }
};

// identifier #TkCloseBracket
template <typename SREFAL_PARAM_INT>
struct ident_TkCloseBracket {
  static const char *name() {
    return "TkCloseBracket";
  }
};

// identifier #TkCloseCall
template <typename SREFAL_PARAM_INT>
struct ident_TkCloseCall {
  static const char *name() {
    return "TkCloseCall";
  }
};

// identifier #TkIdentifier
template <typename SREFAL_PARAM_INT>
struct ident_TkIdentifier {
  static const char *name() {
    return "TkIdentifier";
  }
};

// identifier #TkName
template <typename SREFAL_PARAM_INT>
struct ident_TkName {
  static const char *name() {
    return "TkName";
  }
};

// identifier #TkNumber
template <typename SREFAL_PARAM_INT>
struct ident_TkNumber {
  static const char *name() {
    return "TkNumber";
  }
};

// identifier #TkOpenADT
template <typename SREFAL_PARAM_INT>
struct ident_TkOpenADT {
  static const char *name() {
    return "TkOpenADT";
  }
};

// identifier #TkOpenBracket
template <typename SREFAL_PARAM_INT>
struct ident_TkOpenBracket {
  static const char *name() {
    return "TkOpenBracket";
  }
};

// identifier #TkOpenCall
template <typename SREFAL_PARAM_INT>
struct ident_TkOpenCall {
  static const char *name() {
    return "TkOpenCall";
  }
};

// identifier #TkString
template <typename SREFAL_PARAM_INT>
struct ident_TkString {
  static const char *name() {
    return "TkString";
  }
};

// identifier #TkVariable
template <typename SREFAL_PARAM_INT>
struct ident_TkVariable {
  static const char *name() {
    return "TkVariable";
  }
};

// identifier #TkVariableCopy
template <typename SREFAL_PARAM_INT>
struct ident_TkVariableCopy {
  static const char *name() {
    return "TkVariableCopy";
  }
};

extern refalrts::RefalFunction& Add;
extern refalrts::RefalFunction& Inc;
extern refalrts::RefalFunction& StrFromInt;
extern refalrts::RefalFunction& Map;
extern refalrts::RefalFunction& Fetch;
extern refalrts::RefalFunction& DisplayName;
extern refalrts::RefalFunction& EscapeChar;
#ifdef INTERPRET
extern refalrts::RefalFunction& Inc2;
#else
extern refalrts::RefalFunction& Inc2;
#endif
#ifdef INTERPRET
extern refalrts::RefalFunction& IncVarOffset;
#else
extern refalrts::RefalFunction& IncVarOffset;
#endif
#ifdef INTERPRET
extern refalrts::RefalFunction& PrintVar;
#else
extern refalrts::RefalFunction& PrintVar;
#endif
#ifdef INTERPRET
namespace /* unnamed */ {
extern refalrts::RefalFunction& gen_FakeOffset_L1;
} // unnamed namespace

#else
namespace /* unnamed */ {
extern refalrts::RefalFunction& gen_FakeOffset_L1;
} // unnamed namespace

#endif
#ifdef INTERPRET
extern refalrts::RefalFunction& FakeOffset;
#else
extern refalrts::RefalFunction& FakeOffset;
#endif
#ifdef INTERPRET
namespace /* unnamed */ {
extern refalrts::RefalFunction& gen_TextFromExpr_L1;
} // unnamed namespace

#else
namespace /* unnamed */ {
extern refalrts::RefalFunction& gen_TextFromExpr_L1;
} // unnamed namespace

#endif
#ifdef INTERPRET
extern refalrts::RefalFunction& TextFromExpr;
#else
extern refalrts::RefalFunction& TextFromExpr;
#endif
#ifdef INTERPRET
namespace /* unnamed */ {
extern refalrts::RefalFunction& TextFromExpr_Prepare;
} // unnamed namespace

#else
namespace /* unnamed */ {
extern refalrts::RefalFunction& TextFromExpr_Prepare;
} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
extern refalrts::RefalFunction& TextFromExpr_Prepare_Chars;
} // unnamed namespace

#else
namespace /* unnamed */ {
extern refalrts::RefalFunction& TextFromExpr_Prepare_Chars;
} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
extern refalrts::RefalFunction& Offset;
} // unnamed namespace

#else
namespace /* unnamed */ {
extern refalrts::RefalFunction& Offset;
} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
extern refalrts::RefalFunction& gen_GenPattern_L1;
} // unnamed namespace

#else
namespace /* unnamed */ {
extern refalrts::RefalFunction& gen_GenPattern_L1;
} // unnamed namespace

#endif
#ifdef INTERPRET
extern refalrts::RefalFunction& GenPattern;
#else
extern refalrts::RefalFunction& GenPattern;
#endif
#ifdef INTERPRET
namespace /* unnamed */ {
extern refalrts::RefalFunction& gen_GenResult_L1;
} // unnamed namespace

#else
namespace /* unnamed */ {
extern refalrts::RefalFunction& gen_GenResult_L1;
} // unnamed namespace

#endif
#ifdef INTERPRET
extern refalrts::RefalFunction& GenResult;
#else
extern refalrts::RefalFunction& GenResult;
#endif
#ifdef INTERPRET
namespace /* unnamed */ {
extern refalrts::RefalFunction& FoldOpenELoops;
} // unnamed namespace

#else
namespace /* unnamed */ {
extern refalrts::RefalFunction& FoldOpenELoops;
} // unnamed namespace

#endif

#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_Inc2 {
    static refalrts::RefalFunction *functions[] = {
      & Add
    };
    using refalrts::idents;
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icIssueMemory, 7, 0, 0},
      // </0 & Inc2/4 s.Num#1/5 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icsVarLeft, 0, 5, 2},
      {refalrts::icEmpty, 0, 0, 2},
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } </6 Tile{ HalfReuse: & Add/0 HalfReuse: 2/4 AsIs: s.Num#1/5 AsIs: >/1 ]] }
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 6},
      {refalrts::icReinitFunc, 0, 0, 0},
      {refalrts::icReinitInt, 0, 2, 4},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 6},
      {refalrts::icSetRes, 0, 0, 0},
      {refalrts::icSpliceTile, 6, 6, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_Inc2

} // unnamed namespace

refalrts::RASLFunction descr_Inc2(
  "Inc2",
  scope_Inc2::raa,
  scope_Inc2::functions,
  scope_Inc2::idents,
  scope_Inc2::numbers,
  scope_Inc2::strings
);
refalrts::RefalFunction& Inc2 = descr_Inc2;

#else
static refalrts::FnResult func_Inc2(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 7 elems
  refalrts::Iter context[7];
  refalrts::zeros( context, 7 );
  // </0 & Inc2/4 s.Num#1/5 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </6 Tile{ HalfReuse: & Add/0 HalfReuse: 2/4 AsIs: s.Num#1/5 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[6] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_name( context[0], & Add );
  refalrts::reinit_number( context[4], 2UL );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[6] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[6], context[6] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

refalrts::RefalFunction descr_Inc2(func_Inc2, "Inc2");
refalrts::RefalFunction& Inc2 = descr_Inc2;

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_IncVarOffset {
    static refalrts::RefalFunction *functions[] = {
      & Inc,
      & Inc2
    };
    using refalrts::idents;
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icReserveBacktrackStack, 2, 0, 0},
      {refalrts::icIssueMemory, 7, 0, 0},
      //FAST GEN: s.$ s.$
      //GLOBAL GEN: s.$ s.$
      // </0 & IncVarOffset/4 s.idx#0/5 s.idxV#0/6 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icsVarLeft, 0, 5, 2},
      {refalrts::icsVarLeft, 0, 6, 2},
      {refalrts::icEmpty, 0, 0, 2},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // s.idx 'e'
      // </0 & IncVarOffset/4 s.ContextOffset#1/5 'e'/6 >/1
      {refalrts::icCharTerm, 0, static_cast<unsigned char>('e'), 6},
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Inc2/4 AsIs: s.ContextOffset#1/5 HalfReuse: >/6 } Tile{ ]] }
      {refalrts::icUpdateFunc, 0, 1, 4},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 6},
      {refalrts::icPushStack, 0, 0, 6},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icTrash, 0, 0, 6},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // s.idx 't'
      // </0 & IncVarOffset/4 s.ContextOffset#1/5 't'/6 >/1
      {refalrts::icCharTerm, 0, static_cast<unsigned char>('t'), 6},
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Inc/4 AsIs: s.ContextOffset#1/5 HalfReuse: >/6 } Tile{ ]] }
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 6},
      {refalrts::icPushStack, 0, 0, 6},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icTrash, 0, 0, 6},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      // s.idx 's'
      // </0 & IncVarOffset/4 s.ContextOffset#1/5 's'/6 >/1
      {refalrts::icCharTerm, 0, static_cast<unsigned char>('s'), 6},
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Inc/4 AsIs: s.ContextOffset#1/5 HalfReuse: >/6 } Tile{ ]] }
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 6},
      {refalrts::icPushStack, 0, 0, 6},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icTrash, 0, 0, 6},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_IncVarOffset

} // unnamed namespace

refalrts::RASLFunction descr_IncVarOffset(
  "IncVarOffset",
  scope_IncVarOffset::raa,
  scope_IncVarOffset::functions,
  scope_IncVarOffset::idents,
  scope_IncVarOffset::numbers,
  scope_IncVarOffset::strings
);
refalrts::RefalFunction& IncVarOffset = descr_IncVarOffset;

#else
static refalrts::FnResult func_IncVarOffset(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 7 elems
  refalrts::Iter context[7];
  refalrts::zeros( context, 7 );
  //FAST GEN: s.$ s.$
  //GLOBAL GEN: s.$ s.$
  // </0 & IncVarOffset/4 s.idx#0/5 s.idxV#0/6 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    refalrts::start_sentence();
    // s.idx 'e'
    // </0 & IncVarOffset/4 s.ContextOffset#1/5 'e'/6 >/1
    if( ! refalrts::char_term( 'e', context[6] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Inc2/4 AsIs: s.ContextOffset#1/5 HalfReuse: >/6 } Tile{ ]] }
    refalrts::update_name( context[4], & Inc2 );
    refalrts::reinit_close_call( context[6] );
    refalrts::push_stack( context[6] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[6], res );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // s.idx 't'
    // </0 & IncVarOffset/4 s.ContextOffset#1/5 't'/6 >/1
    if( ! refalrts::char_term( 't', context[6] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Inc/4 AsIs: s.ContextOffset#1/5 HalfReuse: >/6 } Tile{ ]] }
    refalrts::update_name( context[4], & Inc );
    refalrts::reinit_close_call( context[6] );
    refalrts::push_stack( context[6] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[6], res );
    return refalrts::cSuccess;
  } while ( 0 );

  // s.idx 's'
  // </0 & IncVarOffset/4 s.ContextOffset#1/5 's'/6 >/1
  if( ! refalrts::char_term( 's', context[6] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Inc/4 AsIs: s.ContextOffset#1/5 HalfReuse: >/6 } Tile{ ]] }
  refalrts::update_name( context[4], & Inc );
  refalrts::reinit_close_call( context[6] );
  refalrts::push_stack( context[6] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[6], res );
  return refalrts::cSuccess;
}

refalrts::RefalFunction descr_IncVarOffset(func_IncVarOffset, "IncVarOffset");
refalrts::RefalFunction& IncVarOffset = descr_IncVarOffset;

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_PrintVar {
    static refalrts::RefalFunction *functions[] = {
      & StrFromInt
    };
    static const refalrts::RefalIdentifier idents[] = {
      & ident_NoDepth<int>::name
    };
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icReserveBacktrackStack, 1, 0, 0},
      {refalrts::icIssueMemory, 10, 0, 0},
      //FAST GEN: s.$ e.$ s.$
      //GLOBAL GEN: s.$ e.$ s.$
      // </0 & PrintVar/4 s.idx#0/5 e.idxV#0/2 s.idxVV#0/6 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icsVarLeft, 0, 5, 2},
      {refalrts::icsVarRight, 0, 6, 2},
      // closed e.idxV#0 as range 2
      {refalrts::icOnFailGoTo, +8, 0, 0},
      // s.idx e.idx # NoDepth
      // </0 & PrintVar/4 s.Mode#1/5 e.Index#1/2 # NoDepth/6 >/1
      {refalrts::icIdentTerm, 0, 0, 6},
      // closed e.Index#1 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} s.Mode#1/5 {REMOVED TILE} # NoDepth/6 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: s.Mode1 #5/0 HalfReuse: '.'/4 } Tile{ AsIs: e.Index#1/2 } Tile{ ]] }
      {refalrts::icReinitSVar, 0, 5, 0},
      {refalrts::icReinitChar, 0, '.', 4},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, 0, 2},
      {refalrts::icTrash, 0, 0, 4},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      // s.idx e.idx s.idx
      // </0 & PrintVar/4 s.Mode#1/5 e.Index#1/2 s.Depth#1/6 >/1
      // closed e.Index#1 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} s.Mode#1/5 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: s.Mode1 #5/0 HalfReuse: '.'/4 } Tile{ AsIs: e.Index#1/2 } '#'/7 </8 & StrFromInt/9 Tile{ AsIs: s.Depth#1/6 AsIs: >/1 ]] }
      {refalrts::icAllocChar, 0, '#', 7},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 8},
      {refalrts::icAllocFunc, 0, 0, 9},
      {refalrts::icReinitSVar, 0, 5, 0},
      {refalrts::icReinitChar, 0, '.', 4},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 8},
      {refalrts::icSetRes, 0, 0, 6},
      {refalrts::icSpliceTile, 7, 9, 0},
      {refalrts::icSpliceEVar, 0, 0, 2},
      {refalrts::icTrash, 0, 0, 4},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_PrintVar

} // unnamed namespace

refalrts::RASLFunction descr_PrintVar(
  "PrintVar",
  scope_PrintVar::raa,
  scope_PrintVar::functions,
  scope_PrintVar::idents,
  scope_PrintVar::numbers,
  scope_PrintVar::strings
);
refalrts::RefalFunction& PrintVar = descr_PrintVar;

#else
static refalrts::FnResult func_PrintVar(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  //FAST GEN: s.$ e.$ s.$
  //GLOBAL GEN: s.$ e.$ s.$
  // </0 & PrintVar/4 s.idx#0/5 e.idxV#0/2 s.idxVV#0/6 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_right( context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.idxV#0 as range 2
  do {
    refalrts::start_sentence();
    // s.idx e.idx # NoDepth
    // </0 & PrintVar/4 s.Mode#1/5 e.Index#1/2 # NoDepth/6 >/1
    if( ! refalrts::ident_term(  & ident_NoDepth<int>::name, context[6] ) )
      continue;
    // closed e.Index#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} s.Mode#1/5 {REMOVED TILE} # NoDepth/6 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: s.Mode1 #5/0 HalfReuse: '.'/4 } Tile{ AsIs: e.Index#1/2 } Tile{ ]] }
    refalrts::reinit_svar( context[0], context[5] );
    refalrts::reinit_char( context[4], '.' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[2], context[3] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );

  // s.idx e.idx s.idx
  // </0 & PrintVar/4 s.Mode#1/5 e.Index#1/2 s.Depth#1/6 >/1
  // closed e.Index#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} s.Mode#1/5 {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: s.Mode1 #5/0 HalfReuse: '.'/4 } Tile{ AsIs: e.Index#1/2 } '#'/7 </8 & StrFromInt/9 Tile{ AsIs: s.Depth#1/6 AsIs: >/1 ]] }
  if( ! refalrts::alloc_char( context[7], '#' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[9], & StrFromInt ) )
    return refalrts::cNoMemory;
  refalrts::reinit_svar( context[0], context[5] );
  refalrts::reinit_char( context[4], '.' );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[6];
  res = refalrts::splice_evar( res, context[7], context[9] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[4], res );
  return refalrts::cSuccess;
}

refalrts::RefalFunction descr_PrintVar(func_PrintVar, "PrintVar");
refalrts::RefalFunction& PrintVar = descr_PrintVar;

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_gen_FakeOffset_L1 {
    using refalrts::functions;
    static const refalrts::RefalIdentifier idents[] = {
      & ident_NoOffset<int>::name,
      & ident_TkVariable<int>::name
    };
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icReserveBacktrackStack, 2, 0, 0},
      {refalrts::icIssueMemory, 15, 0, 0},
      //FAST GEN: ( e.$ )
      //GLOBAL GEN: ( s.$ e.$ )
      // </0 & FakeOffset\1/4 (/7 s.idxB#0/9 e.idxBV#0/5 )/8 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icBracketLeftSave, 0, 5, 2},
      {refalrts::icEmpty, 0, 0, 2},
      {refalrts::icsVarLeft, 0, 9, 5},
      // closed e.idxBV#0 as range 5
      {refalrts::icOnFailGoTo, +9, 0, 0},
      // ( s.idx )
      // </0 & FakeOffset\1/4 (/7 s.Bracket#2/9 )/8 >/1
      {refalrts::icSave, 0, 13, 5},
      {refalrts::icEmpty, 0, 0, 13},
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & FakeOffset\1/4 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: s.Bracket#2/9 HalfReuse: # NoOffset/8 HalfReuse: )/1 ]] }
      {refalrts::icReinitIdent, 0, 0, 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
      {refalrts::icLinkBrackets, 7, 1, 0},
      {refalrts::icSetRes, 0, 0, 7},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +11, 0, 0},
      // ( # TkVariable s.idx e.idx s.idx s.idx )
      // </0 & FakeOffset\1/4 (/7 # TkVariable/9 s.Mode#2/10 e.Index#2/5 s.Depth#2/12 s.Offset#2/11 )/8 >/1
      {refalrts::icIdentTerm, 0, 1, 9},
      {refalrts::icSave, 0, 13, 5},
      {refalrts::icsVarLeft, 0, 10, 13},
      {refalrts::icsVarRight, 0, 11, 13},
      {refalrts::icsVarRight, 0, 12, 13},
      // closed e.Index#2 as range 13(5)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & FakeOffset\1/4 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # TkVariable/9 AsIs: s.Mode#2/10 AsIs: e.Index#2/13(5) AsIs: s.Depth#2/12 AsIs: s.Offset#2/11 AsIs: )/8 } Tile{ ]] }
      {refalrts::icLinkBrackets, 7, 8, 0},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceTile, 7, 8, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      // ( s.idx e.idx )
      // </0 & FakeOffset\1/4 (/7 s.Token#2/9 e.TokenInfo#2/5 )/8 >/1
      // closed e.TokenInfo#2 as range 5
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & FakeOffset\1/4 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: s.Token#2/9 AsIs: e.TokenInfo#2/5 HalfReuse: # NoOffset/8 HalfReuse: )/1 ]] }
      {refalrts::icReinitIdent, 0, 0, 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
      {refalrts::icLinkBrackets, 7, 1, 0},
      {refalrts::icSetRes, 0, 0, 7},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_gen_FakeOffset_L1

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction descr_gen_FakeOffset_L1(
  "FakeOffset\\1",
  scope_gen_FakeOffset_L1::raa,
  scope_gen_FakeOffset_L1::functions,
  scope_gen_FakeOffset_L1::idents,
  scope_gen_FakeOffset_L1::numbers,
  scope_gen_FakeOffset_L1::strings
);
refalrts::RefalFunction& gen_FakeOffset_L1 = descr_gen_FakeOffset_L1;

} // unnamed namespace

#else
static refalrts::FnResult func_gen_FakeOffset_L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
  //FAST GEN: ( e.$ )
  //GLOBAL GEN: ( s.$ e.$ )
  // </0 & FakeOffset\1/4 (/7 s.idxB#0/9 e.idxBV#0/5 )/8 >/1
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
  // closed e.idxBV#0 as range 5
  do {
    refalrts::start_sentence();
    // ( s.idx )
    // </0 & FakeOffset\1/4 (/7 s.Bracket#2/9 )/8 >/1
    context[13] = context[5];
    context[14] = context[6];
    if( ! refalrts::empty_seq( context[13], context[14] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & FakeOffset\1/4 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: s.Bracket#2/9 HalfReuse: # NoOffset/8 HalfReuse: )/1 ]] }
    refalrts::reinit_ident( context[8], & ident_NoOffset<int>::name );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[7], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[7];
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( # TkVariable s.idx e.idx s.idx s.idx )
    // </0 & FakeOffset\1/4 (/7 # TkVariable/9 s.Mode#2/10 e.Index#2/5 s.Depth#2/12 s.Offset#2/11 )/8 >/1
    if( ! refalrts::ident_term(  & ident_TkVariable<int>::name, context[9] ) )
      continue;
    context[13] = context[5];
    context[14] = context[6];
    if( ! refalrts::svar_left( context[10], context[13], context[14] ) )
      continue;
    if( ! refalrts::svar_right( context[11], context[13], context[14] ) )
      continue;
    if( ! refalrts::svar_right( context[12], context[13], context[14] ) )
      continue;
    // closed e.Index#2 as range 13(5)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & FakeOffset\1/4 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # TkVariable/9 AsIs: s.Mode#2/10 AsIs: e.Index#2/13(5) AsIs: s.Depth#2/12 AsIs: s.Offset#2/11 AsIs: )/8 } Tile{ ]] }
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[7], context[8] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );

  // ( s.idx e.idx )
  // </0 & FakeOffset\1/4 (/7 s.Token#2/9 e.TokenInfo#2/5 )/8 >/1
  // closed e.TokenInfo#2 as range 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & FakeOffset\1/4 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: s.Token#2/9 AsIs: e.TokenInfo#2/5 HalfReuse: # NoOffset/8 HalfReuse: )/1 ]] }
  refalrts::reinit_ident( context[8], & ident_NoOffset<int>::name );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[7], context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[7];
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalFunction descr_gen_FakeOffset_L1(func_gen_FakeOffset_L1, "FakeOffset\\1");
refalrts::RefalFunction& gen_FakeOffset_L1 = descr_gen_FakeOffset_L1;

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_FakeOffset {
    static refalrts::RefalFunction *functions[] = {
      & gen_FakeOffset_L1,
      & Map
    };
    using refalrts::idents;
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icIssueMemory, 6, 0, 0},
      // </0 & FakeOffset/4 e.Expr#1/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      // closed e.Expr#1 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Map/0 Reuse: & FakeOffset\1/4 AsIs: e.Expr#1/2 AsIs: >/1 ]] }
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 5},
      {refalrts::icReinitFunc, 0, 1, 0},
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 5},
      {refalrts::icSetRes, 0, 0, 0},
      {refalrts::icSpliceTile, 5, 5, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_FakeOffset

} // unnamed namespace

refalrts::RASLFunction descr_FakeOffset(
  "FakeOffset",
  scope_FakeOffset::raa,
  scope_FakeOffset::functions,
  scope_FakeOffset::idents,
  scope_FakeOffset::numbers,
  scope_FakeOffset::strings
);
refalrts::RefalFunction& FakeOffset = descr_FakeOffset;

#else
static refalrts::FnResult func_FakeOffset(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  // </0 & FakeOffset/4 e.Expr#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Expr#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Map/0 Reuse: & FakeOffset\1/4 AsIs: e.Expr#1/2 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[5] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_name( context[0], & Map );
  refalrts::update_name( context[4], & gen_FakeOffset_L1 );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[5] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

refalrts::RefalFunction descr_FakeOffset(func_FakeOffset, "FakeOffset");
refalrts::RefalFunction& FakeOffset = descr_FakeOffset;

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_gen_TextFromExpr_L1 {
    static refalrts::RefalFunction *functions[] = {
      & TextFromExpr,
      & Offset,
      & DisplayName,
      & PrintVar,
      & EscapeChar,
      & Map,
      & StrFromInt
    };
    static const refalrts::RefalIdentifier idents[] = {
      & ident_RemovedTile<int>::name,
      & ident_RIGHT_EDGE<int>::name,
      & ident_LEFT_EDGE<int>::name,
      & ident_HalfReuse<int>::name,
      & ident_Reuse<int>::name,
      & ident_AsIs<int>::name,
      & ident_Tile<int>::name,
      & ident_TkIdentifier<int>::name,
      & ident_TkVariableCopy<int>::name,
      & ident_TkVariable<int>::name,
      & ident_TkString<int>::name,
      & ident_TkName<int>::name,
      & ident_TkNumber<int>::name,
      & ident_TkChars<int>::name,
      & ident_TkChar<int>::name,
      & ident_TkCloseADT<int>::name,
      & ident_TkOpenADT<int>::name,
      & ident_TkCloseCall<int>::name,
      & ident_TkOpenCall<int>::name,
      & ident_TkCloseBracket<int>::name,
      & ident_TkOpenBracket<int>::name
    };
    using refalrts::numbers;
    static const refalrts::StringItem strings[] = {
      {"MOVED TILE}", 11},
      {"fReus", 5},
      {" Ha", 3},
      {" Re", 3},
      {" As", 3},
      {" Til", 4}
    };
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icReserveBacktrackStack, 21, 0, 0},
      {refalrts::icIssueMemory, 19, 0, 0},
      //FAST GEN: t.$
      //GLOBAL GEN: t.$
      // </0 & TextFromExpr\1/4 t.idx#0/5 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::ictVarLeftSave, 0, 5, 2},
      {refalrts::icEmpty, 0, 0, 2},
      {refalrts::icOnFailGoTo, +15, 0, 0},
      // ( # TkOpenBracket s.idx )
      // </0 & TextFromExpr\1/4 (/5 # TkOpenBracket/9 s.ContextOffset#2/10 )/6 >/1
      {refalrts::icBracketTerm, 0, 7, 5},
      {refalrts::icIdentLeftSave, 9, 20, 7},
      {refalrts::icsVarLeft, 0, 10, 7},
      {refalrts::icEmpty, 0, 0, 7},
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: ' '/0 HalfReuse: '('/4 HalfReuse: </5 HalfReuse: & Offset/9 AsIs: s.ContextOffset#2/10 HalfReuse: >/6 } Tile{ ]] }
      {refalrts::icReinitChar, 0, ' ', 0},
      {refalrts::icReinitChar, 0, '(', 4},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 5},
      {refalrts::icReinitFunc, 0, 1, 9},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 6},
      {refalrts::icPushStack, 0, 0, 6},
      {refalrts::icPushStack, 0, 0, 5},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icTrash, 0, 0, 6},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +15, 0, 0},
      // ( # TkCloseBracket s.idx )
      // </0 & TextFromExpr\1/4 (/5 # TkCloseBracket/9 s.ContextOffset#2/10 )/6 >/1
      {refalrts::icBracketTerm, 0, 7, 5},
      {refalrts::icIdentLeftSave, 9, 19, 7},
      {refalrts::icsVarLeft, 0, 10, 7},
      {refalrts::icEmpty, 0, 0, 7},
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: ' '/0 HalfReuse: ')'/4 HalfReuse: </5 HalfReuse: & Offset/9 AsIs: s.ContextOffset#2/10 HalfReuse: >/6 } Tile{ ]] }
      {refalrts::icReinitChar, 0, ' ', 0},
      {refalrts::icReinitChar, 0, ')', 4},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 5},
      {refalrts::icReinitFunc, 0, 1, 9},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 6},
      {refalrts::icPushStack, 0, 0, 6},
      {refalrts::icPushStack, 0, 0, 5},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icTrash, 0, 0, 6},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +15, 0, 0},
      // ( # TkOpenCall s.idx )
      // </0 & TextFromExpr\1/4 (/5 # TkOpenCall/9 s.ContextOffset#2/10 )/6 >/1
      {refalrts::icBracketTerm, 0, 7, 5},
      {refalrts::icIdentLeftSave, 9, 18, 7},
      {refalrts::icsVarLeft, 0, 10, 7},
      {refalrts::icEmpty, 0, 0, 7},
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: ' '/0 HalfReuse: '<'/4 HalfReuse: </5 HalfReuse: & Offset/9 AsIs: s.ContextOffset#2/10 HalfReuse: >/6 } Tile{ ]] }
      {refalrts::icReinitChar, 0, ' ', 0},
      {refalrts::icReinitChar, 0, '<', 4},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 5},
      {refalrts::icReinitFunc, 0, 1, 9},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 6},
      {refalrts::icPushStack, 0, 0, 6},
      {refalrts::icPushStack, 0, 0, 5},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icTrash, 0, 0, 6},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +15, 0, 0},
      // ( # TkCloseCall s.idx )
      // </0 & TextFromExpr\1/4 (/5 # TkCloseCall/9 s.ContextOffset#2/10 )/6 >/1
      {refalrts::icBracketTerm, 0, 7, 5},
      {refalrts::icIdentLeftSave, 9, 17, 7},
      {refalrts::icsVarLeft, 0, 10, 7},
      {refalrts::icEmpty, 0, 0, 7},
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: ' '/0 HalfReuse: '>'/4 HalfReuse: </5 HalfReuse: & Offset/9 AsIs: s.ContextOffset#2/10 HalfReuse: >/6 } Tile{ ]] }
      {refalrts::icReinitChar, 0, ' ', 0},
      {refalrts::icReinitChar, 0, '>', 4},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 5},
      {refalrts::icReinitFunc, 0, 1, 9},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 6},
      {refalrts::icPushStack, 0, 0, 6},
      {refalrts::icPushStack, 0, 0, 5},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icTrash, 0, 0, 6},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +28, 0, 0},
      // ( # TkOpenADT s.idx e.idx s.idx )
      // </0 & TextFromExpr\1/4 (/5 # TkOpenADT/9 s.ContextOffset#2/10 e.Name#2/7 s.NameOffset#2/11 )/6 >/1
      {refalrts::icBracketTerm, 0, 7, 5},
      {refalrts::icIdentLeftSave, 9, 16, 7},
      {refalrts::icsVarLeft, 0, 10, 7},
      {refalrts::icsVarRight, 0, 11, 7},
      // closed e.Name#2 as range 7
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} s.NameOffset#2/11 {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: ' '/0 HalfReuse: '['/4 HalfReuse: </5 HalfReuse: & Offset/9 AsIs: s.ContextOffset#2/10 } >/12 </13 & DisplayName/14 Tile{ AsIs: e.Name#2/7 } >/15 </16 & Offset/17 Tile{ HalfReuse: s.NameOffset2 #11/6 AsIs: >/1 ]] }
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 12},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 13},
      {refalrts::icAllocFunc, 0, 2, 14},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 15},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 16},
      {refalrts::icAllocFunc, 0, 1, 17},
      {refalrts::icReinitChar, 0, ' ', 0},
      {refalrts::icReinitChar, 0, '[', 4},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 5},
      {refalrts::icReinitFunc, 0, 1, 9},
      {refalrts::icReinitSVar, 0, 11, 6},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 16},
      {refalrts::icPushStack, 0, 0, 15},
      {refalrts::icPushStack, 0, 0, 13},
      {refalrts::icPushStack, 0, 0, 12},
      {refalrts::icPushStack, 0, 0, 5},
      {refalrts::icSetRes, 0, 0, 6},
      {refalrts::icSpliceTile, 15, 17, 0},
      {refalrts::icSpliceEVar, 0, 0, 7},
      {refalrts::icSpliceTile, 12, 14, 0},
      {refalrts::icTrash, 0, 0, 10},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +15, 0, 0},
      // ( # TkOpenADT s.idx )
      // </0 & TextFromExpr\1/4 (/5 # TkOpenADT/9 s.ContextOffset#2/10 )/6 >/1
      {refalrts::icBracketTerm, 0, 7, 5},
      {refalrts::icIdentLeftSave, 9, 16, 7},
      {refalrts::icsVarLeft, 0, 10, 7},
      {refalrts::icEmpty, 0, 0, 7},
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: ' '/0 HalfReuse: '['/4 HalfReuse: </5 HalfReuse: & Offset/9 AsIs: s.ContextOffset#2/10 HalfReuse: >/6 } Tile{ ]] }
      {refalrts::icReinitChar, 0, ' ', 0},
      {refalrts::icReinitChar, 0, '[', 4},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 5},
      {refalrts::icReinitFunc, 0, 1, 9},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 6},
      {refalrts::icPushStack, 0, 0, 6},
      {refalrts::icPushStack, 0, 0, 5},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icTrash, 0, 0, 6},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +15, 0, 0},
      // ( # TkCloseADT s.idx )
      // </0 & TextFromExpr\1/4 (/5 # TkCloseADT/9 s.ContextOffset#2/10 )/6 >/1
      {refalrts::icBracketTerm, 0, 7, 5},
      {refalrts::icIdentLeftSave, 9, 15, 7},
      {refalrts::icsVarLeft, 0, 10, 7},
      {refalrts::icEmpty, 0, 0, 7},
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: ' '/0 HalfReuse: ']'/4 HalfReuse: </5 HalfReuse: & Offset/9 AsIs: s.ContextOffset#2/10 HalfReuse: >/6 } Tile{ ]] }
      {refalrts::icReinitChar, 0, ' ', 0},
      {refalrts::icReinitChar, 0, ']', 4},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 5},
      {refalrts::icReinitFunc, 0, 1, 9},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 6},
      {refalrts::icPushStack, 0, 0, 6},
      {refalrts::icPushStack, 0, 0, 5},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icTrash, 0, 0, 6},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +23, 0, 0},
      // ( # TkChar s.idx s.idx )
      // </0 & TextFromExpr\1/4 (/5 # TkChar/9 s.Char#2/10 s.Offset#2/11 )/6 >/1
      {refalrts::icBracketTerm, 0, 7, 5},
      {refalrts::icIdentLeftSave, 9, 14, 7},
      {refalrts::icsVarLeft, 0, 10, 7},
      {refalrts::icsVarLeft, 0, 11, 7},
      {refalrts::icEmpty, 0, 0, 7},
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} s.Offset#2/11 {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: ' '/0 HalfReuse: '\''/4 HalfReuse: </5 HalfReuse: & EscapeChar/9 AsIs: s.Char#2/10 } >/12 '\''/13 </14 & Offset/15 Tile{ HalfReuse: s.Offset2 #11/6 AsIs: >/1 ]] }
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 12},
      {refalrts::icAllocChar, 0, '\'', 13},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 14},
      {refalrts::icAllocFunc, 0, 1, 15},
      {refalrts::icReinitChar, 0, ' ', 0},
      {refalrts::icReinitChar, 0, '\'', 4},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 5},
      {refalrts::icReinitFunc, 0, 4, 9},
      {refalrts::icReinitSVar, 0, 11, 6},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 14},
      {refalrts::icPushStack, 0, 0, 12},
      {refalrts::icPushStack, 0, 0, 5},
      {refalrts::icSetRes, 0, 0, 6},
      {refalrts::icSpliceTile, 12, 15, 0},
      {refalrts::icTrash, 0, 0, 10},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +10, 0, 0},
      // ( # TkChars e.idx )
      // </0 & TextFromExpr\1/4 (/5 # TkChars/9 e.Chars#2/7 )/6 >/1
      {refalrts::icBracketTerm, 0, 7, 5},
      {refalrts::icIdentLeftSave, 9, 13, 7},
      // closed e.Chars#2 as range 7
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & TextFromExpr\1/4 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: ' '/5 HalfReuse: '\''/9 AsIs: e.Chars#2/7 HalfReuse: '\''/6 } Tile{ ]] }
      {refalrts::icReinitChar, 0, ' ', 5},
      {refalrts::icReinitChar, 0, '\'', 9},
      {refalrts::icReinitChar, 0, '\'', 6},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceTile, 5, 6, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +22, 0, 0},
      // ( # TkNumber s.idx s.idx )
      // </0 & TextFromExpr\1/4 (/5 # TkNumber/9 s.Number#2/10 s.Offset#2/11 )/6 >/1
      {refalrts::icBracketTerm, 0, 7, 5},
      {refalrts::icIdentLeftSave, 9, 12, 7},
      {refalrts::icsVarLeft, 0, 10, 7},
      {refalrts::icsVarLeft, 0, 11, 7},
      {refalrts::icEmpty, 0, 0, 7},
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} s.Number#2/10 s.Offset#2/11 {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: ' '/0 HalfReuse: </4 HalfReuse: & StrFromInt/5 HalfReuse: s.Number2 #10/9 } >/12 </13 & Offset/14 Tile{ HalfReuse: s.Offset2 #11/6 AsIs: >/1 ]] }
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 12},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 13},
      {refalrts::icAllocFunc, 0, 1, 14},
      {refalrts::icReinitChar, 0, ' ', 0},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 4},
      {refalrts::icReinitFunc, 0, 6, 5},
      {refalrts::icReinitSVar, 0, 10, 9},
      {refalrts::icReinitSVar, 0, 11, 6},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 13},
      {refalrts::icPushStack, 0, 0, 12},
      {refalrts::icPushStack, 0, 0, 4},
      {refalrts::icSetRes, 0, 0, 6},
      {refalrts::icSpliceTile, 12, 14, 0},
      {refalrts::icTrash, 0, 0, 9},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +23, 0, 0},
      // ( # TkName e.idx s.idx )
      // </0 & TextFromExpr\1/4 (/5 # TkName/9 e.Name#2/7 s.Offset#2/10 )/6 >/1
      {refalrts::icBracketTerm, 0, 7, 5},
      {refalrts::icIdentLeftSave, 9, 11, 7},
      {refalrts::icsVarRight, 0, 10, 7},
      // closed e.Name#2 as range 7
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} s.Offset#2/10 {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: ' '/0 HalfReuse: '&'/4 HalfReuse: ' '/5 HalfReuse: </9 } & DisplayName/11 Tile{ AsIs: e.Name#2/7 } >/12 </13 & Offset/14 Tile{ HalfReuse: s.Offset2 #10/6 AsIs: >/1 ]] }
      {refalrts::icAllocFunc, 0, 2, 11},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 12},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 13},
      {refalrts::icAllocFunc, 0, 1, 14},
      {refalrts::icReinitChar, 0, ' ', 0},
      {refalrts::icReinitChar, 0, '&', 4},
      {refalrts::icReinitChar, 0, ' ', 5},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 9},
      {refalrts::icReinitSVar, 0, 10, 6},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 13},
      {refalrts::icPushStack, 0, 0, 12},
      {refalrts::icPushStack, 0, 0, 9},
      {refalrts::icSetRes, 0, 0, 6},
      {refalrts::icSpliceTile, 12, 14, 0},
      {refalrts::icSpliceEVar, 0, 0, 7},
      {refalrts::icSpliceTile, 11, 11, 0},
      {refalrts::icTrash, 0, 0, 9},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +22, 0, 0},
      // ( # TkString e.idx s.idx )
      // </0 & TextFromExpr\1/4 (/5 # TkString/9 e.String#2/7 s.Offset#2/10 )/6 >/1
      {refalrts::icBracketTerm, 0, 7, 5},
      {refalrts::icIdentLeftSave, 9, 10, 7},
      {refalrts::icsVarRight, 0, 10, 7},
      // closed e.String#2 as range 7
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} s.Offset#2/10 {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: '\"'/0 HalfReuse: </4 HalfReuse: & Map/5 HalfReuse: & EscapeChar/9 } Tile{ AsIs: e.String#2/7 } >/11 '\"'/12 </13 & Offset/14 Tile{ HalfReuse: s.Offset2 #10/6 AsIs: >/1 ]] }
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 11},
      {refalrts::icAllocChar, 0, '\"', 12},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 13},
      {refalrts::icAllocFunc, 0, 1, 14},
      {refalrts::icReinitChar, 0, '\"', 0},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 4},
      {refalrts::icReinitFunc, 0, 5, 5},
      {refalrts::icReinitFunc, 0, 4, 9},
      {refalrts::icReinitSVar, 0, 10, 6},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 13},
      {refalrts::icPushStack, 0, 0, 11},
      {refalrts::icPushStack, 0, 0, 4},
      {refalrts::icSetRes, 0, 0, 6},
      {refalrts::icSpliceTile, 11, 14, 0},
      {refalrts::icSpliceEVar, 0, 0, 7},
      {refalrts::icTrash, 0, 0, 9},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +23, 0, 0},
      // ( # TkVariable s.idx e.idx s.idx s.idx )
      // </0 & TextFromExpr\1/4 (/5 # TkVariable/9 s.Mode#2/10 e.Index#2/7 s.Depth#2/12 s.Offset#2/11 )/6 >/1
      {refalrts::icBracketTerm, 0, 7, 5},
      {refalrts::icIdentLeftSave, 9, 9, 7},
      {refalrts::icsVarLeft, 0, 10, 7},
      {refalrts::icsVarRight, 0, 11, 7},
      {refalrts::icsVarRight, 0, 12, 7},
      // closed e.Index#2 as range 7
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Offset#2/11 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: ' '/4 HalfReuse: </5 HalfReuse: & PrintVar/9 AsIs: s.Mode#2/10 AsIs: e.Index#2/7 AsIs: s.Depth#2/12 } >/13 Tile{ AsIs: </0 } & Offset/14 Tile{ HalfReuse: s.Offset2 #11/6 AsIs: >/1 ]] }
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 13},
      {refalrts::icAllocFunc, 0, 1, 14},
      {refalrts::icReinitChar, 0, ' ', 4},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 5},
      {refalrts::icReinitFunc, 0, 3, 9},
      {refalrts::icReinitSVar, 0, 11, 6},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icPushStack, 0, 0, 13},
      {refalrts::icPushStack, 0, 0, 5},
      {refalrts::icSetRes, 0, 0, 6},
      {refalrts::icSpliceTile, 14, 14, 0},
      {refalrts::icSpliceTile, 0, 0, 0},
      {refalrts::icSpliceTile, 13, 13, 0},
      {refalrts::icSpliceTile, 4, 12, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +31, 0, 0},
      // ( # TkVariableCopy s.idx e.idx s.idx s.idx s.idx )
      // </0 & TextFromExpr\1/4 (/5 # TkVariableCopy/9 s.Mode#2/10 e.Index#2/7 s.Depth#2/13 s.SampleOffset#2/12 s.CopyOffset#2/11 )/6 >/1
      {refalrts::icBracketTerm, 0, 7, 5},
      {refalrts::icIdentLeftSave, 9, 8, 7},
      {refalrts::icsVarLeft, 0, 10, 7},
      {refalrts::icsVarRight, 0, 11, 7},
      {refalrts::icsVarRight, 0, 12, 7},
      {refalrts::icsVarRight, 0, 13, 7},
      // closed e.Index#2 as range 7
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.CopyOffset#2/11 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: ' '/4 HalfReuse: </5 HalfReuse: & PrintVar/9 AsIs: s.Mode#2/10 AsIs: e.Index#2/7 AsIs: s.Depth#2/13 } >/14 Tile{ AsIs: </0 } & Offset/15 Tile{ AsIs: s.SampleOffset#2/12 } >/16 </17 & Offset/18 Tile{ HalfReuse: s.CopyOffset2 #11/6 AsIs: >/1 ]] }
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 14},
      {refalrts::icAllocFunc, 0, 1, 15},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 16},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 17},
      {refalrts::icAllocFunc, 0, 1, 18},
      {refalrts::icReinitChar, 0, ' ', 4},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 5},
      {refalrts::icReinitFunc, 0, 3, 9},
      {refalrts::icReinitSVar, 0, 11, 6},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 17},
      {refalrts::icPushStack, 0, 0, 16},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icPushStack, 0, 0, 14},
      {refalrts::icPushStack, 0, 0, 5},
      {refalrts::icSetRes, 0, 0, 6},
      {refalrts::icSpliceTile, 16, 18, 0},
      {refalrts::icSpliceTile, 12, 12, 0},
      {refalrts::icSpliceTile, 15, 15, 0},
      {refalrts::icSpliceTile, 0, 0, 0},
      {refalrts::icSpliceTile, 14, 14, 0},
      {refalrts::icSpliceTile, 4, 13, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +23, 0, 0},
      // ( # TkIdentifier e.idx s.idx )
      // </0 & TextFromExpr\1/4 (/5 # TkIdentifier/9 e.Name#2/7 s.Offset#2/10 )/6 >/1
      {refalrts::icBracketTerm, 0, 7, 5},
      {refalrts::icIdentLeftSave, 9, 7, 7},
      {refalrts::icsVarRight, 0, 10, 7},
      // closed e.Name#2 as range 7
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} s.Offset#2/10 {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: ' '/0 HalfReuse: '#'/4 HalfReuse: ' '/5 HalfReuse: </9 } & DisplayName/11 Tile{ AsIs: e.Name#2/7 } >/12 </13 & Offset/14 Tile{ HalfReuse: s.Offset2 #10/6 AsIs: >/1 ]] }
      {refalrts::icAllocFunc, 0, 2, 11},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 12},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 13},
      {refalrts::icAllocFunc, 0, 1, 14},
      {refalrts::icReinitChar, 0, ' ', 0},
      {refalrts::icReinitChar, 0, '#', 4},
      {refalrts::icReinitChar, 0, ' ', 5},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 9},
      {refalrts::icReinitSVar, 0, 10, 6},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 13},
      {refalrts::icPushStack, 0, 0, 12},
      {refalrts::icPushStack, 0, 0, 9},
      {refalrts::icSetRes, 0, 0, 6},
      {refalrts::icSpliceTile, 12, 14, 0},
      {refalrts::icSpliceEVar, 0, 0, 7},
      {refalrts::icSpliceTile, 11, 11, 0},
      {refalrts::icTrash, 0, 0, 9},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +18, 0, 0},
      // ( # Tile e.idx )
      // </0 & TextFromExpr\1/4 (/5 # Tile/9 e.SubRange#2/7 )/6 >/1
      {refalrts::icBracketTerm, 0, 7, 5},
      {refalrts::icIdentLeftSave, 9, 6, 7},
      // closed e.SubRange#2 as range 7
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ }" Til"/10 Tile{ HalfReuse: 'e'/0 HalfReuse: '{'/4 HalfReuse: </5 HalfReuse: & TextFromExpr/9 AsIs: e.SubRange#2/7 HalfReuse: >/6 HalfReuse: ' '/1 } '}'/12 Tile{ ]] }
      {refalrts::icAllocString, 0, 5, 10},
      {refalrts::icAllocChar, 0, '}', 12},
      {refalrts::icReinitChar, 0, 'e', 0},
      {refalrts::icReinitChar, 0, '{', 4},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 5},
      {refalrts::icReinitFunc, 0, 0, 9},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 6},
      {refalrts::icReinitChar, 0, ' ', 1},
      {refalrts::icPushStack, 0, 0, 6},
      {refalrts::icPushStack, 0, 0, 5},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceTile, 12, 12, 0},
      {refalrts::icSpliceTile, 0, 1, 0},
      {refalrts::icSpliceTile, 10, 11, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +17, 0, 0},
      // ( # AsIs e.idx )
      // </0 & TextFromExpr\1/4 (/5 # AsIs/9 e.SubRange#2/7 )/6 >/1
      {refalrts::icBracketTerm, 0, 7, 5},
      {refalrts::icIdentLeftSave, 9, 5, 7},
      // closed e.SubRange#2 as range 7
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ }" As"/10 Tile{ HalfReuse: 'I'/1 } Tile{ HalfReuse: 's'/0 HalfReuse: ':'/4 HalfReuse: </5 HalfReuse: & TextFromExpr/9 AsIs: e.SubRange#2/7 HalfReuse: >/6 } Tile{ ]] }
      {refalrts::icAllocString, 0, 4, 10},
      {refalrts::icReinitChar, 0, 'I', 1},
      {refalrts::icReinitChar, 0, 's', 0},
      {refalrts::icReinitChar, 0, ':', 4},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 5},
      {refalrts::icReinitFunc, 0, 0, 9},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 6},
      {refalrts::icPushStack, 0, 0, 6},
      {refalrts::icPushStack, 0, 0, 5},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceTile, 0, 6, 0},
      {refalrts::icSpliceTile, 1, 1, 0},
      {refalrts::icSpliceTile, 10, 11, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +19, 0, 0},
      // ( # Reuse e.idx )
      // </0 & TextFromExpr\1/4 (/5 # Reuse/9 e.SubRange#2/7 )/6 >/1
      {refalrts::icBracketTerm, 0, 7, 5},
      {refalrts::icIdentLeftSave, 9, 4, 7},
      // closed e.SubRange#2 as range 7
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ }" Re"/10 Tile{ HalfReuse: 'u'/1 } 's'/12 Tile{ HalfReuse: 'e'/0 HalfReuse: ':'/4 HalfReuse: </5 HalfReuse: & TextFromExpr/9 AsIs: e.SubRange#2/7 HalfReuse: >/6 } Tile{ ]] }
      {refalrts::icAllocString, 0, 3, 10},
      {refalrts::icAllocChar, 0, 's', 12},
      {refalrts::icReinitChar, 0, 'u', 1},
      {refalrts::icReinitChar, 0, 'e', 0},
      {refalrts::icReinitChar, 0, ':', 4},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 5},
      {refalrts::icReinitFunc, 0, 0, 9},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 6},
      {refalrts::icPushStack, 0, 0, 6},
      {refalrts::icPushStack, 0, 0, 5},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceTile, 0, 6, 0},
      {refalrts::icSpliceTile, 12, 12, 0},
      {refalrts::icSpliceTile, 1, 1, 0},
      {refalrts::icSpliceTile, 10, 11, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +19, 0, 0},
      // ( # HalfReuse e.idx )
      // </0 & TextFromExpr\1/4 (/5 # HalfReuse/9 e.SubRange#2/7 )/6 >/1
      {refalrts::icBracketTerm, 0, 7, 5},
      {refalrts::icIdentLeftSave, 9, 3, 7},
      // closed e.SubRange#2 as range 7
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ }" Ha"/10 Tile{ HalfReuse: 'l'/1 }"fReus"/12 Tile{ HalfReuse: 'e'/0 HalfReuse: ':'/4 HalfReuse: </5 HalfReuse: & TextFromExpr/9 AsIs: e.SubRange#2/7 HalfReuse: >/6 } Tile{ ]] }
      {refalrts::icAllocString, 0, 2, 10},
      {refalrts::icAllocString, 0, 1, 12},
      {refalrts::icReinitChar, 0, 'l', 1},
      {refalrts::icReinitChar, 0, 'e', 0},
      {refalrts::icReinitChar, 0, ':', 4},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 5},
      {refalrts::icReinitFunc, 0, 0, 9},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 6},
      {refalrts::icPushStack, 0, 0, 6},
      {refalrts::icPushStack, 0, 0, 5},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceTile, 0, 6, 0},
      {refalrts::icSpliceTile, 12, 13, 0},
      {refalrts::icSpliceTile, 1, 1, 0},
      {refalrts::icSpliceTile, 10, 11, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +10, 0, 0},
      // ( # LEFT-EDGE )
      // </0 & TextFromExpr\1/4 (/5 # LEFT-EDGE/9 )/6 >/1
      {refalrts::icBracketTerm, 0, 7, 5},
      {refalrts::icIdentLeftSave, 9, 2, 7},
      {refalrts::icEmpty, 0, 0, 7},
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & TextFromExpr\1/4 (/5 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: ' '/9 HalfReuse: '['/6 HalfReuse: '['/1 ]] }
      {refalrts::icReinitChar, 0, ' ', 9},
      {refalrts::icReinitChar, 0, '[', 6},
      {refalrts::icReinitChar, 0, '[', 1},
      {refalrts::icSetRes, 0, 0, 9},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +10, 0, 0},
      // ( # RIGHT-EDGE )
      // </0 & TextFromExpr\1/4 (/5 # RIGHT-EDGE/9 )/6 >/1
      {refalrts::icBracketTerm, 0, 7, 5},
      {refalrts::icIdentLeftSave, 9, 1, 7},
      {refalrts::icEmpty, 0, 0, 7},
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & TextFromExpr\1/4 (/5 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: ' '/9 HalfReuse: ']'/6 HalfReuse: ']'/1 ]] }
      {refalrts::icReinitChar, 0, ' ', 9},
      {refalrts::icReinitChar, 0, ']', 6},
      {refalrts::icReinitChar, 0, ']', 1},
      {refalrts::icSetRes, 0, 0, 9},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      // # RemovedTile
      // </0 & TextFromExpr\1/4 # RemovedTile/5 >/1
      {refalrts::icIdentTerm, 0, 0, 5},
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: ' '/0 HalfReuse: '{'/4 HalfReuse: 'R'/5 HalfReuse: 'E'/1 }"MOVED TILE}"/7 Tile{ ]] }
      {refalrts::icAllocString, 0, 0, 7},
      {refalrts::icReinitChar, 0, ' ', 0},
      {refalrts::icReinitChar, 0, '{', 4},
      {refalrts::icReinitChar, 0, 'R', 5},
      {refalrts::icReinitChar, 0, 'E', 1},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceTile, 7, 8, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_gen_TextFromExpr_L1

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction descr_gen_TextFromExpr_L1(
  "TextFromExpr\\1",
  scope_gen_TextFromExpr_L1::raa,
  scope_gen_TextFromExpr_L1::functions,
  scope_gen_TextFromExpr_L1::idents,
  scope_gen_TextFromExpr_L1::numbers,
  scope_gen_TextFromExpr_L1::strings
);
refalrts::RefalFunction& gen_TextFromExpr_L1 = descr_gen_TextFromExpr_L1;

} // unnamed namespace

#else
static refalrts::FnResult func_gen_TextFromExpr_L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  //FAST GEN: t.$
  //GLOBAL GEN: t.$
  // </0 & TextFromExpr\1/4 t.idx#0/5 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    refalrts::start_sentence();
    // ( # TkOpenBracket s.idx )
    // </0 & TextFromExpr\1/4 (/5 # TkOpenBracket/9 s.ContextOffset#2/10 )/6 >/1
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
      continue;
    context[9] = refalrts::ident_left(  & ident_TkOpenBracket<int>::name, context[7], context[8] );
    if( ! context[9] )
      continue;
    if( ! refalrts::svar_left( context[10], context[7], context[8] ) )
      continue;
    if( ! refalrts::empty_seq( context[7], context[8] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: ' '/0 HalfReuse: '('/4 HalfReuse: </5 HalfReuse: & Offset/9 AsIs: s.ContextOffset#2/10 HalfReuse: >/6 } Tile{ ]] }
    refalrts::reinit_char( context[0], ' ' );
    refalrts::reinit_char( context[4], '(' );
    refalrts::reinit_open_call( context[5] );
    refalrts::reinit_name( context[9], & Offset );
    refalrts::reinit_close_call( context[6] );
    refalrts::push_stack( context[6] );
    refalrts::push_stack( context[5] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[6], res );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( # TkCloseBracket s.idx )
    // </0 & TextFromExpr\1/4 (/5 # TkCloseBracket/9 s.ContextOffset#2/10 )/6 >/1
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
      continue;
    context[9] = refalrts::ident_left(  & ident_TkCloseBracket<int>::name, context[7], context[8] );
    if( ! context[9] )
      continue;
    if( ! refalrts::svar_left( context[10], context[7], context[8] ) )
      continue;
    if( ! refalrts::empty_seq( context[7], context[8] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: ' '/0 HalfReuse: ')'/4 HalfReuse: </5 HalfReuse: & Offset/9 AsIs: s.ContextOffset#2/10 HalfReuse: >/6 } Tile{ ]] }
    refalrts::reinit_char( context[0], ' ' );
    refalrts::reinit_char( context[4], ')' );
    refalrts::reinit_open_call( context[5] );
    refalrts::reinit_name( context[9], & Offset );
    refalrts::reinit_close_call( context[6] );
    refalrts::push_stack( context[6] );
    refalrts::push_stack( context[5] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[6], res );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( # TkOpenCall s.idx )
    // </0 & TextFromExpr\1/4 (/5 # TkOpenCall/9 s.ContextOffset#2/10 )/6 >/1
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
      continue;
    context[9] = refalrts::ident_left(  & ident_TkOpenCall<int>::name, context[7], context[8] );
    if( ! context[9] )
      continue;
    if( ! refalrts::svar_left( context[10], context[7], context[8] ) )
      continue;
    if( ! refalrts::empty_seq( context[7], context[8] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: ' '/0 HalfReuse: '<'/4 HalfReuse: </5 HalfReuse: & Offset/9 AsIs: s.ContextOffset#2/10 HalfReuse: >/6 } Tile{ ]] }
    refalrts::reinit_char( context[0], ' ' );
    refalrts::reinit_char( context[4], '<' );
    refalrts::reinit_open_call( context[5] );
    refalrts::reinit_name( context[9], & Offset );
    refalrts::reinit_close_call( context[6] );
    refalrts::push_stack( context[6] );
    refalrts::push_stack( context[5] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[6], res );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( # TkCloseCall s.idx )
    // </0 & TextFromExpr\1/4 (/5 # TkCloseCall/9 s.ContextOffset#2/10 )/6 >/1
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
      continue;
    context[9] = refalrts::ident_left(  & ident_TkCloseCall<int>::name, context[7], context[8] );
    if( ! context[9] )
      continue;
    if( ! refalrts::svar_left( context[10], context[7], context[8] ) )
      continue;
    if( ! refalrts::empty_seq( context[7], context[8] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: ' '/0 HalfReuse: '>'/4 HalfReuse: </5 HalfReuse: & Offset/9 AsIs: s.ContextOffset#2/10 HalfReuse: >/6 } Tile{ ]] }
    refalrts::reinit_char( context[0], ' ' );
    refalrts::reinit_char( context[4], '>' );
    refalrts::reinit_open_call( context[5] );
    refalrts::reinit_name( context[9], & Offset );
    refalrts::reinit_close_call( context[6] );
    refalrts::push_stack( context[6] );
    refalrts::push_stack( context[5] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[6], res );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( # TkOpenADT s.idx e.idx s.idx )
    // </0 & TextFromExpr\1/4 (/5 # TkOpenADT/9 s.ContextOffset#2/10 e.Name#2/7 s.NameOffset#2/11 )/6 >/1
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
      continue;
    context[9] = refalrts::ident_left(  & ident_TkOpenADT<int>::name, context[7], context[8] );
    if( ! context[9] )
      continue;
    if( ! refalrts::svar_left( context[10], context[7], context[8] ) )
      continue;
    if( ! refalrts::svar_right( context[11], context[7], context[8] ) )
      continue;
    // closed e.Name#2 as range 7

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} s.NameOffset#2/11 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: ' '/0 HalfReuse: '['/4 HalfReuse: </5 HalfReuse: & Offset/9 AsIs: s.ContextOffset#2/10 } >/12 </13 & DisplayName/14 Tile{ AsIs: e.Name#2/7 } >/15 </16 & Offset/17 Tile{ HalfReuse: s.NameOffset2 #11/6 AsIs: >/1 ]] }
    if( ! refalrts::alloc_close_call( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[14], & DisplayName ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[15] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[17], & Offset ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[0], ' ' );
    refalrts::reinit_char( context[4], '[' );
    refalrts::reinit_open_call( context[5] );
    refalrts::reinit_name( context[9], & Offset );
    refalrts::reinit_svar( context[6], context[11] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[16] );
    refalrts::push_stack( context[15] );
    refalrts::push_stack( context[13] );
    refalrts::push_stack( context[12] );
    refalrts::push_stack( context[5] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[6];
    res = refalrts::splice_evar( res, context[15], context[17] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_evar( res, context[12], context[14] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[10], res );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( # TkOpenADT s.idx )
    // </0 & TextFromExpr\1/4 (/5 # TkOpenADT/9 s.ContextOffset#2/10 )/6 >/1
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
      continue;
    context[9] = refalrts::ident_left(  & ident_TkOpenADT<int>::name, context[7], context[8] );
    if( ! context[9] )
      continue;
    if( ! refalrts::svar_left( context[10], context[7], context[8] ) )
      continue;
    if( ! refalrts::empty_seq( context[7], context[8] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: ' '/0 HalfReuse: '['/4 HalfReuse: </5 HalfReuse: & Offset/9 AsIs: s.ContextOffset#2/10 HalfReuse: >/6 } Tile{ ]] }
    refalrts::reinit_char( context[0], ' ' );
    refalrts::reinit_char( context[4], '[' );
    refalrts::reinit_open_call( context[5] );
    refalrts::reinit_name( context[9], & Offset );
    refalrts::reinit_close_call( context[6] );
    refalrts::push_stack( context[6] );
    refalrts::push_stack( context[5] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[6], res );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( # TkCloseADT s.idx )
    // </0 & TextFromExpr\1/4 (/5 # TkCloseADT/9 s.ContextOffset#2/10 )/6 >/1
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
      continue;
    context[9] = refalrts::ident_left(  & ident_TkCloseADT<int>::name, context[7], context[8] );
    if( ! context[9] )
      continue;
    if( ! refalrts::svar_left( context[10], context[7], context[8] ) )
      continue;
    if( ! refalrts::empty_seq( context[7], context[8] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: ' '/0 HalfReuse: ']'/4 HalfReuse: </5 HalfReuse: & Offset/9 AsIs: s.ContextOffset#2/10 HalfReuse: >/6 } Tile{ ]] }
    refalrts::reinit_char( context[0], ' ' );
    refalrts::reinit_char( context[4], ']' );
    refalrts::reinit_open_call( context[5] );
    refalrts::reinit_name( context[9], & Offset );
    refalrts::reinit_close_call( context[6] );
    refalrts::push_stack( context[6] );
    refalrts::push_stack( context[5] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[6], res );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( # TkChar s.idx s.idx )
    // </0 & TextFromExpr\1/4 (/5 # TkChar/9 s.Char#2/10 s.Offset#2/11 )/6 >/1
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
      continue;
    context[9] = refalrts::ident_left(  & ident_TkChar<int>::name, context[7], context[8] );
    if( ! context[9] )
      continue;
    if( ! refalrts::svar_left( context[10], context[7], context[8] ) )
      continue;
    if( ! refalrts::svar_left( context[11], context[7], context[8] ) )
      continue;
    if( ! refalrts::empty_seq( context[7], context[8] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} s.Offset#2/11 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: ' '/0 HalfReuse: '\''/4 HalfReuse: </5 HalfReuse: & EscapeChar/9 AsIs: s.Char#2/10 } >/12 '\''/13 </14 & Offset/15 Tile{ HalfReuse: s.Offset2 #11/6 AsIs: >/1 ]] }
    if( ! refalrts::alloc_close_call( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[13], '\'' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[15], & Offset ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[0], ' ' );
    refalrts::reinit_char( context[4], '\'' );
    refalrts::reinit_open_call( context[5] );
    refalrts::reinit_name( context[9], & EscapeChar );
    refalrts::reinit_svar( context[6], context[11] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[14] );
    refalrts::push_stack( context[12] );
    refalrts::push_stack( context[5] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[6];
    res = refalrts::splice_evar( res, context[12], context[15] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[10], res );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( # TkChars e.idx )
    // </0 & TextFromExpr\1/4 (/5 # TkChars/9 e.Chars#2/7 )/6 >/1
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
      continue;
    context[9] = refalrts::ident_left(  & ident_TkChars<int>::name, context[7], context[8] );
    if( ! context[9] )
      continue;
    // closed e.Chars#2 as range 7

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & TextFromExpr\1/4 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: ' '/5 HalfReuse: '\''/9 AsIs: e.Chars#2/7 HalfReuse: '\''/6 } Tile{ ]] }
    refalrts::reinit_char( context[5], ' ' );
    refalrts::reinit_char( context[9], '\'' );
    refalrts::reinit_char( context[6], '\'' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( # TkNumber s.idx s.idx )
    // </0 & TextFromExpr\1/4 (/5 # TkNumber/9 s.Number#2/10 s.Offset#2/11 )/6 >/1
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
      continue;
    context[9] = refalrts::ident_left(  & ident_TkNumber<int>::name, context[7], context[8] );
    if( ! context[9] )
      continue;
    if( ! refalrts::svar_left( context[10], context[7], context[8] ) )
      continue;
    if( ! refalrts::svar_left( context[11], context[7], context[8] ) )
      continue;
    if( ! refalrts::empty_seq( context[7], context[8] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} s.Number#2/10 s.Offset#2/11 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: ' '/0 HalfReuse: </4 HalfReuse: & StrFromInt/5 HalfReuse: s.Number2 #10/9 } >/12 </13 & Offset/14 Tile{ HalfReuse: s.Offset2 #11/6 AsIs: >/1 ]] }
    if( ! refalrts::alloc_close_call( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[14], & Offset ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[0], ' ' );
    refalrts::reinit_open_call( context[4] );
    refalrts::reinit_name( context[5], & StrFromInt );
    refalrts::reinit_svar( context[9], context[10] );
    refalrts::reinit_svar( context[6], context[11] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[13] );
    refalrts::push_stack( context[12] );
    refalrts::push_stack( context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[6];
    res = refalrts::splice_evar( res, context[12], context[14] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[9], res );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( # TkName e.idx s.idx )
    // </0 & TextFromExpr\1/4 (/5 # TkName/9 e.Name#2/7 s.Offset#2/10 )/6 >/1
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
      continue;
    context[9] = refalrts::ident_left(  & ident_TkName<int>::name, context[7], context[8] );
    if( ! context[9] )
      continue;
    if( ! refalrts::svar_right( context[10], context[7], context[8] ) )
      continue;
    // closed e.Name#2 as range 7

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} s.Offset#2/10 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: ' '/0 HalfReuse: '&'/4 HalfReuse: ' '/5 HalfReuse: </9 } & DisplayName/11 Tile{ AsIs: e.Name#2/7 } >/12 </13 & Offset/14 Tile{ HalfReuse: s.Offset2 #10/6 AsIs: >/1 ]] }
    if( ! refalrts::alloc_name( context[11], & DisplayName ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[14], & Offset ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[0], ' ' );
    refalrts::reinit_char( context[4], '&' );
    refalrts::reinit_char( context[5], ' ' );
    refalrts::reinit_open_call( context[9] );
    refalrts::reinit_svar( context[6], context[10] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[13] );
    refalrts::push_stack( context[12] );
    refalrts::push_stack( context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[6];
    res = refalrts::splice_evar( res, context[12], context[14] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_evar( res, context[11], context[11] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[9], res );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( # TkString e.idx s.idx )
    // </0 & TextFromExpr\1/4 (/5 # TkString/9 e.String#2/7 s.Offset#2/10 )/6 >/1
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
      continue;
    context[9] = refalrts::ident_left(  & ident_TkString<int>::name, context[7], context[8] );
    if( ! context[9] )
      continue;
    if( ! refalrts::svar_right( context[10], context[7], context[8] ) )
      continue;
    // closed e.String#2 as range 7

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} s.Offset#2/10 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: '\"'/0 HalfReuse: </4 HalfReuse: & Map/5 HalfReuse: & EscapeChar/9 } Tile{ AsIs: e.String#2/7 } >/11 '\"'/12 </13 & Offset/14 Tile{ HalfReuse: s.Offset2 #10/6 AsIs: >/1 ]] }
    if( ! refalrts::alloc_close_call( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[12], '\"' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[14], & Offset ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[0], '\"' );
    refalrts::reinit_open_call( context[4] );
    refalrts::reinit_name( context[5], & Map );
    refalrts::reinit_name( context[9], & EscapeChar );
    refalrts::reinit_svar( context[6], context[10] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[13] );
    refalrts::push_stack( context[11] );
    refalrts::push_stack( context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[6];
    res = refalrts::splice_evar( res, context[11], context[14] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[9], res );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( # TkVariable s.idx e.idx s.idx s.idx )
    // </0 & TextFromExpr\1/4 (/5 # TkVariable/9 s.Mode#2/10 e.Index#2/7 s.Depth#2/12 s.Offset#2/11 )/6 >/1
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
      continue;
    context[9] = refalrts::ident_left(  & ident_TkVariable<int>::name, context[7], context[8] );
    if( ! context[9] )
      continue;
    if( ! refalrts::svar_left( context[10], context[7], context[8] ) )
      continue;
    if( ! refalrts::svar_right( context[11], context[7], context[8] ) )
      continue;
    if( ! refalrts::svar_right( context[12], context[7], context[8] ) )
      continue;
    // closed e.Index#2 as range 7

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Offset#2/11 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: ' '/4 HalfReuse: </5 HalfReuse: & PrintVar/9 AsIs: s.Mode#2/10 AsIs: e.Index#2/7 AsIs: s.Depth#2/12 } >/13 Tile{ AsIs: </0 } & Offset/14 Tile{ HalfReuse: s.Offset2 #11/6 AsIs: >/1 ]] }
    if( ! refalrts::alloc_close_call( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[14], & Offset ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[4], ' ' );
    refalrts::reinit_open_call( context[5] );
    refalrts::reinit_name( context[9], & PrintVar );
    refalrts::reinit_svar( context[6], context[11] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[13] );
    refalrts::push_stack( context[5] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[6];
    res = refalrts::splice_evar( res, context[14], context[14] );
    res = refalrts::splice_evar( res, context[0], context[0] );
    res = refalrts::splice_evar( res, context[13], context[13] );
    res = refalrts::splice_evar( res, context[4], context[12] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( # TkVariableCopy s.idx e.idx s.idx s.idx s.idx )
    // </0 & TextFromExpr\1/4 (/5 # TkVariableCopy/9 s.Mode#2/10 e.Index#2/7 s.Depth#2/13 s.SampleOffset#2/12 s.CopyOffset#2/11 )/6 >/1
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
      continue;
    context[9] = refalrts::ident_left(  & ident_TkVariableCopy<int>::name, context[7], context[8] );
    if( ! context[9] )
      continue;
    if( ! refalrts::svar_left( context[10], context[7], context[8] ) )
      continue;
    if( ! refalrts::svar_right( context[11], context[7], context[8] ) )
      continue;
    if( ! refalrts::svar_right( context[12], context[7], context[8] ) )
      continue;
    if( ! refalrts::svar_right( context[13], context[7], context[8] ) )
      continue;
    // closed e.Index#2 as range 7

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.CopyOffset#2/11 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: ' '/4 HalfReuse: </5 HalfReuse: & PrintVar/9 AsIs: s.Mode#2/10 AsIs: e.Index#2/7 AsIs: s.Depth#2/13 } >/14 Tile{ AsIs: </0 } & Offset/15 Tile{ AsIs: s.SampleOffset#2/12 } >/16 </17 & Offset/18 Tile{ HalfReuse: s.CopyOffset2 #11/6 AsIs: >/1 ]] }
    if( ! refalrts::alloc_close_call( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[15], & Offset ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[17] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[18], & Offset ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[4], ' ' );
    refalrts::reinit_open_call( context[5] );
    refalrts::reinit_name( context[9], & PrintVar );
    refalrts::reinit_svar( context[6], context[11] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[17] );
    refalrts::push_stack( context[16] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[14] );
    refalrts::push_stack( context[5] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[6];
    res = refalrts::splice_evar( res, context[16], context[18] );
    res = refalrts::splice_evar( res, context[12], context[12] );
    res = refalrts::splice_evar( res, context[15], context[15] );
    res = refalrts::splice_evar( res, context[0], context[0] );
    res = refalrts::splice_evar( res, context[14], context[14] );
    res = refalrts::splice_evar( res, context[4], context[13] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( # TkIdentifier e.idx s.idx )
    // </0 & TextFromExpr\1/4 (/5 # TkIdentifier/9 e.Name#2/7 s.Offset#2/10 )/6 >/1
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
      continue;
    context[9] = refalrts::ident_left(  & ident_TkIdentifier<int>::name, context[7], context[8] );
    if( ! context[9] )
      continue;
    if( ! refalrts::svar_right( context[10], context[7], context[8] ) )
      continue;
    // closed e.Name#2 as range 7

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} s.Offset#2/10 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: ' '/0 HalfReuse: '#'/4 HalfReuse: ' '/5 HalfReuse: </9 } & DisplayName/11 Tile{ AsIs: e.Name#2/7 } >/12 </13 & Offset/14 Tile{ HalfReuse: s.Offset2 #10/6 AsIs: >/1 ]] }
    if( ! refalrts::alloc_name( context[11], & DisplayName ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[14], & Offset ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[0], ' ' );
    refalrts::reinit_char( context[4], '#' );
    refalrts::reinit_char( context[5], ' ' );
    refalrts::reinit_open_call( context[9] );
    refalrts::reinit_svar( context[6], context[10] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[13] );
    refalrts::push_stack( context[12] );
    refalrts::push_stack( context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[6];
    res = refalrts::splice_evar( res, context[12], context[14] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_evar( res, context[11], context[11] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[9], res );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( # Tile e.idx )
    // </0 & TextFromExpr\1/4 (/5 # Tile/9 e.SubRange#2/7 )/6 >/1
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
      continue;
    context[9] = refalrts::ident_left(  & ident_Tile<int>::name, context[7], context[8] );
    if( ! context[9] )
      continue;
    // closed e.SubRange#2 as range 7

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ }" Til"/10 Tile{ HalfReuse: 'e'/0 HalfReuse: '{'/4 HalfReuse: </5 HalfReuse: & TextFromExpr/9 AsIs: e.SubRange#2/7 HalfReuse: >/6 HalfReuse: ' '/1 } '}'/12 Tile{ ]] }
    if( ! refalrts::alloc_chars( context[10], context[11], " Til", 4 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[12], '}' ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[0], 'e' );
    refalrts::reinit_char( context[4], '{' );
    refalrts::reinit_open_call( context[5] );
    refalrts::reinit_name( context[9], & TextFromExpr );
    refalrts::reinit_close_call( context[6] );
    refalrts::reinit_char( context[1], ' ' );
    refalrts::push_stack( context[6] );
    refalrts::push_stack( context[5] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[12], context[12] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    res = refalrts::splice_evar( res, context[10], context[11] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( # AsIs e.idx )
    // </0 & TextFromExpr\1/4 (/5 # AsIs/9 e.SubRange#2/7 )/6 >/1
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
      continue;
    context[9] = refalrts::ident_left(  & ident_AsIs<int>::name, context[7], context[8] );
    if( ! context[9] )
      continue;
    // closed e.SubRange#2 as range 7

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ }" As"/10 Tile{ HalfReuse: 'I'/1 } Tile{ HalfReuse: 's'/0 HalfReuse: ':'/4 HalfReuse: </5 HalfReuse: & TextFromExpr/9 AsIs: e.SubRange#2/7 HalfReuse: >/6 } Tile{ ]] }
    if( ! refalrts::alloc_chars( context[10], context[11], " As", 3 ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[1], 'I' );
    refalrts::reinit_char( context[0], 's' );
    refalrts::reinit_char( context[4], ':' );
    refalrts::reinit_open_call( context[5] );
    refalrts::reinit_name( context[9], & TextFromExpr );
    refalrts::reinit_close_call( context[6] );
    refalrts::push_stack( context[6] );
    refalrts::push_stack( context[5] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[0], context[6] );
    res = refalrts::splice_evar( res, context[1], context[1] );
    res = refalrts::splice_evar( res, context[10], context[11] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( # Reuse e.idx )
    // </0 & TextFromExpr\1/4 (/5 # Reuse/9 e.SubRange#2/7 )/6 >/1
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
      continue;
    context[9] = refalrts::ident_left(  & ident_Reuse<int>::name, context[7], context[8] );
    if( ! context[9] )
      continue;
    // closed e.SubRange#2 as range 7

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ }" Re"/10 Tile{ HalfReuse: 'u'/1 } 's'/12 Tile{ HalfReuse: 'e'/0 HalfReuse: ':'/4 HalfReuse: </5 HalfReuse: & TextFromExpr/9 AsIs: e.SubRange#2/7 HalfReuse: >/6 } Tile{ ]] }
    if( ! refalrts::alloc_chars( context[10], context[11], " Re", 3 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[12], 's' ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[1], 'u' );
    refalrts::reinit_char( context[0], 'e' );
    refalrts::reinit_char( context[4], ':' );
    refalrts::reinit_open_call( context[5] );
    refalrts::reinit_name( context[9], & TextFromExpr );
    refalrts::reinit_close_call( context[6] );
    refalrts::push_stack( context[6] );
    refalrts::push_stack( context[5] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[0], context[6] );
    res = refalrts::splice_evar( res, context[12], context[12] );
    res = refalrts::splice_evar( res, context[1], context[1] );
    res = refalrts::splice_evar( res, context[10], context[11] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( # HalfReuse e.idx )
    // </0 & TextFromExpr\1/4 (/5 # HalfReuse/9 e.SubRange#2/7 )/6 >/1
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
      continue;
    context[9] = refalrts::ident_left(  & ident_HalfReuse<int>::name, context[7], context[8] );
    if( ! context[9] )
      continue;
    // closed e.SubRange#2 as range 7

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ }" Ha"/10 Tile{ HalfReuse: 'l'/1 }"fReus"/12 Tile{ HalfReuse: 'e'/0 HalfReuse: ':'/4 HalfReuse: </5 HalfReuse: & TextFromExpr/9 AsIs: e.SubRange#2/7 HalfReuse: >/6 } Tile{ ]] }
    if( ! refalrts::alloc_chars( context[10], context[11], " Ha", 3 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[12], context[13], "fReus", 5 ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[1], 'l' );
    refalrts::reinit_char( context[0], 'e' );
    refalrts::reinit_char( context[4], ':' );
    refalrts::reinit_open_call( context[5] );
    refalrts::reinit_name( context[9], & TextFromExpr );
    refalrts::reinit_close_call( context[6] );
    refalrts::push_stack( context[6] );
    refalrts::push_stack( context[5] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[0], context[6] );
    res = refalrts::splice_evar( res, context[12], context[13] );
    res = refalrts::splice_evar( res, context[1], context[1] );
    res = refalrts::splice_evar( res, context[10], context[11] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( # LEFT-EDGE )
    // </0 & TextFromExpr\1/4 (/5 # LEFT-EDGE/9 )/6 >/1
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
      continue;
    context[9] = refalrts::ident_left(  & ident_LEFT_EDGE<int>::name, context[7], context[8] );
    if( ! context[9] )
      continue;
    if( ! refalrts::empty_seq( context[7], context[8] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & TextFromExpr\1/4 (/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: ' '/9 HalfReuse: '['/6 HalfReuse: '['/1 ]] }
    refalrts::reinit_char( context[9], ' ' );
    refalrts::reinit_char( context[6], '[' );
    refalrts::reinit_char( context[1], '[' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[9];
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( # RIGHT-EDGE )
    // </0 & TextFromExpr\1/4 (/5 # RIGHT-EDGE/9 )/6 >/1
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
      continue;
    context[9] = refalrts::ident_left(  & ident_RIGHT_EDGE<int>::name, context[7], context[8] );
    if( ! context[9] )
      continue;
    if( ! refalrts::empty_seq( context[7], context[8] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & TextFromExpr\1/4 (/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: ' '/9 HalfReuse: ']'/6 HalfReuse: ']'/1 ]] }
    refalrts::reinit_char( context[9], ' ' );
    refalrts::reinit_char( context[6], ']' );
    refalrts::reinit_char( context[1], ']' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[9];
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );

  // # RemovedTile
  // </0 & TextFromExpr\1/4 # RemovedTile/5 >/1
  if( ! refalrts::ident_term(  & ident_RemovedTile<int>::name, context[5] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: ' '/0 HalfReuse: '{'/4 HalfReuse: 'R'/5 HalfReuse: 'E'/1 }"MOVED TILE}"/7 Tile{ ]] }
  if( ! refalrts::alloc_chars( context[7], context[8], "MOVED TILE}", 11 ) )
    return refalrts::cNoMemory;
  refalrts::reinit_char( context[0], ' ' );
  refalrts::reinit_char( context[4], '{' );
  refalrts::reinit_char( context[5], 'R' );
  refalrts::reinit_char( context[1], 'E' );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalFunction descr_gen_TextFromExpr_L1(func_gen_TextFromExpr_L1, "TextFromExpr\\1");
refalrts::RefalFunction& gen_TextFromExpr_L1 = descr_gen_TextFromExpr_L1;

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_TextFromExpr {
    static refalrts::RefalFunction *functions[] = {
      & TextFromExpr_Prepare,
      & gen_TextFromExpr_L1,
      & Map
    };
    using refalrts::idents;
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icIssueMemory, 9, 0, 0},
      // </0 & TextFromExpr/4 e.Expr#1/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      // closed e.Expr#1 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } </5 & Map/6 & TextFromExpr\1/7 Tile{ AsIs: </0 Reuse: & TextFromExpr-Prepare/4 AsIs: e.Expr#1/2 AsIs: >/1 } >/8 Tile{ ]] }
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 5},
      {refalrts::icAllocFunc, 0, 2, 6},
      {refalrts::icAllocFunc, 0, 1, 7},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 8},
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icPushStack, 0, 0, 8},
      {refalrts::icPushStack, 0, 0, 5},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceTile, 8, 8, 0},
      {refalrts::icSpliceTile, 0, 1, 0},
      {refalrts::icSpliceTile, 5, 7, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_TextFromExpr

} // unnamed namespace

refalrts::RASLFunction descr_TextFromExpr(
  "TextFromExpr",
  scope_TextFromExpr::raa,
  scope_TextFromExpr::functions,
  scope_TextFromExpr::idents,
  scope_TextFromExpr::numbers,
  scope_TextFromExpr::strings
);
refalrts::RefalFunction& TextFromExpr = descr_TextFromExpr;

#else
static refalrts::FnResult func_TextFromExpr(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  // </0 & TextFromExpr/4 e.Expr#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Expr#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & Map/6 & TextFromExpr\1/7 Tile{ AsIs: </0 Reuse: & TextFromExpr-Prepare/4 AsIs: e.Expr#1/2 AsIs: >/1 } >/8 Tile{ ]] }
  if( ! refalrts::alloc_open_call( context[5] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[6], & Map ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[7], & gen_TextFromExpr_L1 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[8] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], & TextFromExpr_Prepare );
  refalrts::push_stack( context[8] );
  refalrts::push_stack( context[5] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[5], context[7] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

refalrts::RefalFunction descr_TextFromExpr(func_TextFromExpr, "TextFromExpr");
refalrts::RefalFunction& TextFromExpr = descr_TextFromExpr;

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_TextFromExpr_Prepare {
    static refalrts::RefalFunction *functions[] = {
      & TextFromExpr_Prepare_Chars
    };
    static const refalrts::RefalIdentifier idents[] = {
      & ident_TkOpenADT<int>::name,
      & ident_TkName<int>::name,
      & ident_NoOffset<int>::name,
      & ident_TkChar<int>::name
    };
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icReserveBacktrackStack, 3, 0, 0},
      {refalrts::icIssueMemory, 19, 0, 0},
      //FAST GEN: e.$
      //GLOBAL GEN: e.$
      // </0 & TextFromExpr-Prepare/4 e.idx#0/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      // closed e.idx#0 as range 2
      {refalrts::icOnFailGoTo, +18, 0, 0},
      // ( # TkChar s.idx # NoOffset ) e.idx
      // </0 & TextFromExpr-Prepare/4 (/7 # TkChar/9 s.Char#1/11 # NoOffset/10 )/8 e.Tail#1/2 >/1
      {refalrts::icSave, 0, 17, 2},
      {refalrts::icBracketLeftSave, 0, 5, 17},
      {refalrts::icIdentLeftSave, 9, 3, 5},
      {refalrts::icIdentRightSave, 10, 2, 5},
      // closed e.Tail#1 as range 17(2)
      {refalrts::icsVarLeft, 0, 11, 5},
      {refalrts::icEmpty, 0, 0, 5},
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } </12 & TextFromExpr-Prepare-Chars/13 Tile{ HalfReuse: (/0 HalfReuse: )/4 AsIs: (/7 AsIs: # TkChar/9 AsIs: s.Char#1/11 AsIs: # NoOffset/10 AsIs: )/8 AsIs: e.Tail#1/17(2) AsIs: >/1 ]] }
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 12},
      {refalrts::icAllocFunc, 0, 0, 13},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 4},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 12},
      {refalrts::icLinkBrackets, 7, 8, 0},
      {refalrts::icLinkBrackets, 0, 4, 0},
      {refalrts::icSetRes, 0, 0, 0},
      {refalrts::icSpliceTile, 12, 13, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +21, 0, 0},
      // ( # TkOpenADT s.idx ) ( # TkName e.idx s.idx ) e.idx
      // </0 & TextFromExpr-Prepare/4 (/7 # TkOpenADT/9 s.BracketOffset#1/15 )/8 (/12 # TkName/14 e.Name#1/10 s.NameOffset#1/16 )/13 e.Tail#1/2 >/1
      {refalrts::icSave, 0, 17, 2},
      {refalrts::icBracketLeftSave, 0, 5, 17},
      {refalrts::icIdentLeftSave, 9, 0, 5},
      {refalrts::icBracketLeftSave, 0, 10, 17},
      {refalrts::icIdentLeftSave, 14, 1, 10},
      // closed e.Tail#1 as range 17(2)
      {refalrts::icsVarLeft, 0, 15, 5},
      {refalrts::icEmpty, 0, 0, 5},
      {refalrts::icsVarRight, 0, 16, 10},
      // closed e.Name#1 as range 10
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} (/7 # TkOpenADT/9 s.BracketOffset#1/15 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: (/8 HalfReuse: # TkOpenADT/12 HalfReuse: s.BracketOffset1 #15/14 AsIs: e.Name#1/10 AsIs: s.NameOffset#1/16 AsIs: )/13 } Tile{ AsIs: </0 AsIs: & TextFromExpr-Prepare/4 } Tile{ AsIs: e.Tail#1/17(2) } Tile{ AsIs: >/1 ]] }
      {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 8},
      {refalrts::icReinitIdent, 0, 0, 12},
      {refalrts::icReinitSVar, 0, 15, 14},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 8, 13, 0},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icSpliceEVar, 0, 0, 17},
      {refalrts::icSpliceTile, 0, 4, 0},
      {refalrts::icSpliceTile, 8, 13, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +10, 0, 0},
      // t.idx e.idx
      // </0 & TextFromExpr-Prepare/4 t.Other#1/5 e.Tail#1/2 >/1
      {refalrts::icSave, 0, 17, 2},
      {refalrts::ictVarLeftSave, 0, 5, 17},
      // closed e.Tail#1 as range 17(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: t.Other#1/5 } Tile{ AsIs: </0 AsIs: & TextFromExpr-Prepare/4 } Tile{ AsIs: e.Tail#1/17(2) } Tile{ AsIs: >/1 ]] }
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icSpliceEVar, 0, 0, 17},
      {refalrts::icSpliceTile, 0, 4, 0},
      {refalrts::icSpliceTile, 5, 6, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      //
      // </0 & TextFromExpr-Prepare/4 >/1
      {refalrts::icEmpty, 0, 0, 2},
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & TextFromExpr-Prepare/4 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ ]] }
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_TextFromExpr_Prepare

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction descr_TextFromExpr_Prepare(
  "TextFromExpr-Prepare",
  scope_TextFromExpr_Prepare::raa,
  scope_TextFromExpr_Prepare::functions,
  scope_TextFromExpr_Prepare::idents,
  scope_TextFromExpr_Prepare::numbers,
  scope_TextFromExpr_Prepare::strings
);
refalrts::RefalFunction& TextFromExpr_Prepare = descr_TextFromExpr_Prepare;

} // unnamed namespace

#else
static refalrts::FnResult func_TextFromExpr_Prepare(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  //FAST GEN: e.$
  //GLOBAL GEN: e.$
  // </0 & TextFromExpr-Prepare/4 e.idx#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.idx#0 as range 2
  do {
    refalrts::start_sentence();
    // ( # TkChar s.idx # NoOffset ) e.idx
    // </0 & TextFromExpr-Prepare/4 (/7 # TkChar/9 s.Char#1/11 # NoOffset/10 )/8 e.Tail#1/2 >/1
    context[17] = context[2];
    context[18] = context[3];
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[17], context[18] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_TkChar<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    context[10] = refalrts::ident_right(  & ident_NoOffset<int>::name, context[5], context[6] );
    if( ! context[10] )
      continue;
    // closed e.Tail#1 as range 17(2)
    if( ! refalrts::svar_left( context[11], context[5], context[6] ) )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </12 & TextFromExpr-Prepare-Chars/13 Tile{ HalfReuse: (/0 HalfReuse: )/4 AsIs: (/7 AsIs: # TkChar/9 AsIs: s.Char#1/11 AsIs: # NoOffset/10 AsIs: )/8 AsIs: e.Tail#1/17(2) AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_call( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[13], & TextFromExpr_Prepare_Chars ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_close_bracket( context[4] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[12] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[0], context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[0];
    res = refalrts::splice_evar( res, context[12], context[13] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( # TkOpenADT s.idx ) ( # TkName e.idx s.idx ) e.idx
    // </0 & TextFromExpr-Prepare/4 (/7 # TkOpenADT/9 s.BracketOffset#1/15 )/8 (/12 # TkName/14 e.Name#1/10 s.NameOffset#1/16 )/13 e.Tail#1/2 >/1
    context[17] = context[2];
    context[18] = context[3];
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[17], context[18] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_TkOpenADT<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    context[10] = 0;
    context[11] = 0;
    context[12] = refalrts::brackets_left( context[10], context[11], context[17], context[18] );
    if( ! context[12] )
      continue;
    refalrts::bracket_pointers(context[12], context[13]);
    context[14] = refalrts::ident_left(  & ident_TkName<int>::name, context[10], context[11] );
    if( ! context[14] )
      continue;
    // closed e.Tail#1 as range 17(2)
    if( ! refalrts::svar_left( context[15], context[5], context[6] ) )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    if( ! refalrts::svar_right( context[16], context[10], context[11] ) )
      continue;
    // closed e.Name#1 as range 10

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} (/7 # TkOpenADT/9 s.BracketOffset#1/15 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: (/8 HalfReuse: # TkOpenADT/12 HalfReuse: s.BracketOffset1 #15/14 AsIs: e.Name#1/10 AsIs: s.NameOffset#1/16 AsIs: )/13 } Tile{ AsIs: </0 AsIs: & TextFromExpr-Prepare/4 } Tile{ AsIs: e.Tail#1/17(2) } Tile{ AsIs: >/1 ]] }
    refalrts::reinit_open_bracket( context[8] );
    refalrts::reinit_ident( context[12], & ident_TkOpenADT<int>::name );
    refalrts::reinit_svar( context[14], context[15] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[8], context[13] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[8], context[13] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // t.idx e.idx
    // </0 & TextFromExpr-Prepare/4 t.Other#1/5 e.Tail#1/2 >/1
    context[17] = context[2];
    context[18] = context[3];
    context[6] = refalrts::tvar_left( context[5], context[17], context[18] );
    if( ! context[6] )
      continue;
    // closed e.Tail#1 as range 17(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: t.Other#1/5 } Tile{ AsIs: </0 AsIs: & TextFromExpr-Prepare/4 } Tile{ AsIs: e.Tail#1/17(2) } Tile{ AsIs: >/1 ]] }
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );

  //
  // </0 & TextFromExpr-Prepare/4 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & TextFromExpr-Prepare/4 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalFunction descr_TextFromExpr_Prepare(func_TextFromExpr_Prepare, "TextFromExpr-Prepare");
refalrts::RefalFunction& TextFromExpr_Prepare = descr_TextFromExpr_Prepare;

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_TextFromExpr_Prepare_Chars {
    static refalrts::RefalFunction *functions[] = {
      & TextFromExpr_Prepare,
      & EscapeChar
    };
    static const refalrts::RefalIdentifier idents[] = {
      & ident_TkChars<int>::name,
      & ident_NoOffset<int>::name,
      & ident_TkChar<int>::name
    };
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icReserveBacktrackStack, 1, 0, 0},
      {refalrts::icIssueMemory, 18, 0, 0},
      //FAST GEN: ( e.$ ) e.$
      //GLOBAL GEN: ( e.$ ) e.$
      // </0 & TextFromExpr-Prepare-Chars/4 (/7 e.idxB#0/5 )/8 e.idxT#0/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icBracketLeftSave, 0, 5, 2},
      // closed e.idxB#0 as range 5
      // closed e.idxT#0 as range 2
      {refalrts::icOnFailGoTo, +19, 0, 0},
      // ( e.idx ) ( # TkChar s.idx # NoOffset ) e.idx
      // </0 & TextFromExpr-Prepare-Chars/4 (/7 e.Chars#1/5 )/8 (/11 # TkChar/13 s.Char#1/15 # NoOffset/14 )/12 e.Tail#1/2 >/1
      {refalrts::icSave, 0, 16, 2},
      {refalrts::icBracketLeftSave, 0, 9, 16},
      {refalrts::icIdentLeftSave, 13, 2, 9},
      {refalrts::icIdentRightSave, 14, 1, 9},
      // closed e.Chars#1 as range 5
      // closed e.Tail#1 as range 16(2)
      {refalrts::icsVarLeft, 0, 15, 9},
      {refalrts::icEmpty, 0, 0, 9},
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} )/8 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & TextFromExpr-Prepare-Chars/4 AsIs: (/7 } Tile{ AsIs: e.Chars#1/5 } Tile{ HalfReuse: </11 HalfReuse: & EscapeChar/13 AsIs: s.Char#1/15 HalfReuse: >/14 AsIs: )/12 AsIs: e.Tail#1/16(2) AsIs: >/1 ]] }
      {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 11},
      {refalrts::icReinitFunc, 0, 1, 13},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 14},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 12, 0},
      {refalrts::icPushStack, 0, 0, 14},
      {refalrts::icPushStack, 0, 0, 11},
      {refalrts::icSetRes, 0, 0, 11},
      {refalrts::icSpliceEVar, 0, 0, 5},
      {refalrts::icTrash, 0, 0, 7},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      // ( e.idx ) e.idx
      // </0 & TextFromExpr-Prepare-Chars/4 (/7 e.Chars#1/5 )/8 e.Tail#1/2 >/1
      // closed e.Chars#1 as range 5
      // closed e.Tail#1 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TkChars/4 } Tile{ AsIs: e.Chars#1/5 } Tile{ HalfReuse: )/7 } </9 Tile{ HalfReuse: & TextFromExpr-Prepare/8 AsIs: e.Tail#1/2 AsIs: >/1 ]] }
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 9},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icReinitIdent, 0, 0, 4},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 7},
      {refalrts::icReinitFunc, 0, 0, 8},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 9},
      {refalrts::icLinkBrackets, 0, 7, 0},
      {refalrts::icSetRes, 0, 0, 8},
      {refalrts::icSpliceTile, 9, 9, 0},
      {refalrts::icSpliceTile, 7, 7, 0},
      {refalrts::icSpliceEVar, 0, 0, 5},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_TextFromExpr_Prepare_Chars

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction descr_TextFromExpr_Prepare_Chars(
  "TextFromExpr-Prepare-Chars",
  scope_TextFromExpr_Prepare_Chars::raa,
  scope_TextFromExpr_Prepare_Chars::functions,
  scope_TextFromExpr_Prepare_Chars::idents,
  scope_TextFromExpr_Prepare_Chars::numbers,
  scope_TextFromExpr_Prepare_Chars::strings
);
refalrts::RefalFunction& TextFromExpr_Prepare_Chars = descr_TextFromExpr_Prepare_Chars;

} // unnamed namespace

#else
static refalrts::FnResult func_TextFromExpr_Prepare_Chars(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  //FAST GEN: ( e.$ ) e.$
  //GLOBAL GEN: ( e.$ ) e.$
  // </0 & TextFromExpr-Prepare-Chars/4 (/7 e.idxB#0/5 )/8 e.idxT#0/2 >/1
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
  // closed e.idxB#0 as range 5
  // closed e.idxT#0 as range 2
  do {
    refalrts::start_sentence();
    // ( e.idx ) ( # TkChar s.idx # NoOffset ) e.idx
    // </0 & TextFromExpr-Prepare-Chars/4 (/7 e.Chars#1/5 )/8 (/11 # TkChar/13 s.Char#1/15 # NoOffset/14 )/12 e.Tail#1/2 >/1
    context[16] = context[2];
    context[17] = context[3];
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_left( context[9], context[10], context[16], context[17] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    context[13] = refalrts::ident_left(  & ident_TkChar<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    context[14] = refalrts::ident_right(  & ident_NoOffset<int>::name, context[9], context[10] );
    if( ! context[14] )
      continue;
    // closed e.Chars#1 as range 5
    // closed e.Tail#1 as range 16(2)
    if( ! refalrts::svar_left( context[15], context[9], context[10] ) )
      continue;
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} )/8 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & TextFromExpr-Prepare-Chars/4 AsIs: (/7 } Tile{ AsIs: e.Chars#1/5 } Tile{ HalfReuse: </11 HalfReuse: & EscapeChar/13 AsIs: s.Char#1/15 HalfReuse: >/14 AsIs: )/12 AsIs: e.Tail#1/16(2) AsIs: >/1 ]] }
    refalrts::reinit_open_call( context[11] );
    refalrts::reinit_name( context[13], & EscapeChar );
    refalrts::reinit_close_call( context[14] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[12] );
    refalrts::push_stack( context[14] );
    refalrts::push_stack( context[11] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[11];
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[7], res );
    return refalrts::cSuccess;
  } while ( 0 );

  // ( e.idx ) e.idx
  // </0 & TextFromExpr-Prepare-Chars/4 (/7 e.Chars#1/5 )/8 e.Tail#1/2 >/1
  // closed e.Chars#1 as range 5
  // closed e.Tail#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TkChars/4 } Tile{ AsIs: e.Chars#1/5 } Tile{ HalfReuse: )/7 } </9 Tile{ HalfReuse: & TextFromExpr-Prepare/8 AsIs: e.Tail#1/2 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[9] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_ident( context[4], & ident_TkChars<int>::name );
  refalrts::reinit_close_bracket( context[7] );
  refalrts::reinit_name( context[8], & TextFromExpr_Prepare );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[9] );
  refalrts::link_brackets( context[0], context[7] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[9], context[9] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalFunction descr_TextFromExpr_Prepare_Chars(func_TextFromExpr_Prepare_Chars, "TextFromExpr-Prepare-Chars");
refalrts::RefalFunction& TextFromExpr_Prepare_Chars = descr_TextFromExpr_Prepare_Chars;

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_Offset {
    using refalrts::functions;
    static const refalrts::RefalIdentifier idents[] = {
      & ident_Offset<int>::name,
      & ident_NoOffset<int>::name
    };
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icReserveBacktrackStack, 1, 0, 0},
      {refalrts::icIssueMemory, 6, 0, 0},
      //FAST GEN: s.$
      //GLOBAL GEN: s.$
      // </0 & Offset/4 s.idx#0/5 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icsVarLeft, 0, 5, 2},
      {refalrts::icEmpty, 0, 0, 2},
      {refalrts::icOnFailGoTo, +5, 0, 0},
      // # NoOffset
      // </0 & Offset/4 # NoOffset/5 >/1
      {refalrts::icIdentTerm, 0, 1, 5},
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & Offset/4 # NoOffset/5 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ ]] }
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      // s.idx
      // </0 & Offset/4 s.Offset#1/5 >/1
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: '/'/0 HalfReuse: # Offset/4 AsIs: s.Offset#1/5 } Tile{ ]] }
      {refalrts::icReinitChar, 0, '/', 0},
      {refalrts::icReinitIdent, 0, 0, 4},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icTrash, 0, 0, 5},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_Offset

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction descr_Offset(
  "Offset",
  scope_Offset::raa,
  scope_Offset::functions,
  scope_Offset::idents,
  scope_Offset::numbers,
  scope_Offset::strings
);
refalrts::RefalFunction& Offset = descr_Offset;

} // unnamed namespace

#else
static refalrts::FnResult func_Offset(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  //FAST GEN: s.$
  //GLOBAL GEN: s.$
  // </0 & Offset/4 s.idx#0/5 >/1
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
    refalrts::start_sentence();
    // # NoOffset
    // </0 & Offset/4 # NoOffset/5 >/1
    if( ! refalrts::ident_term(  & ident_NoOffset<int>::name, context[5] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & Offset/4 # NoOffset/5 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );

  // s.idx
  // </0 & Offset/4 s.Offset#1/5 >/1

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: '/'/0 HalfReuse: # Offset/4 AsIs: s.Offset#1/5 } Tile{ ]] }
  refalrts::reinit_char( context[0], '/' );
  refalrts::reinit_ident( context[4], & ident_Offset<int>::name );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[5], res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalFunction descr_Offset(func_Offset, "Offset");
refalrts::RefalFunction& Offset = descr_Offset;

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_gen_GenPattern_L1 {
    using refalrts::functions;
    static const refalrts::RefalIdentifier idents[] = {
      & ident_E<int>::name,
      & ident_Junk<int>::name
    };
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icIssueMemory, 26, 0, 0},
      // </0 & GenPattern\1/4 s.FnGenSubst#1/5 (/8 e.Pattern#1/6 )/9 s.B0-Offset#2/10 s.ContextTop#2/11 (/14 # Junk/16 e.JunkLeft#2/12 )/15 (/19 # Junk/21 e.JunkRight#2/17 )/20 e.InitCommands#2/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icsVarLeft, 0, 5, 2},
      {refalrts::icBracketLeftSave, 0, 6, 2},
      // closed e.Pattern#1 as range 6
      {refalrts::icsVarLeft, 0, 10, 2},
      {refalrts::icsVarLeft, 0, 11, 2},
      {refalrts::icBracketLeftSave, 0, 12, 2},
      {refalrts::icIdentLeftSave, 16, 1, 12},
      {refalrts::icBracketLeftSave, 0, 17, 2},
      {refalrts::icIdentLeftSave, 21, 1, 17},
      // closed e.JunkLeft#2 as range 12
      // closed e.JunkRight#2 as range 17
      // closed e.InitCommands#2 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} s.FnGenSubst#1/5 {REMOVED TILE} s.B0-Offset#2/10 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 HalfReuse: s.FnGenSubst1 #5/4 } Tile{ AsIs: s.ContextTop#2/11 AsIs: (/14 AsIs: # Junk/16 AsIs: e.JunkLeft#2/12 AsIs: )/15 AsIs: (/19 Reuse: # E/21 } Tile{ HalfReuse: s.B0-Offset2 #10/8 AsIs: e.Pattern#1/6 AsIs: )/9 } (/22 # Junk/23 Tile{ AsIs: e.JunkRight#2/17 } Tile{ AsIs: )/20 } (/24 Tile{ AsIs: e.InitCommands#2/2 } )/25 Tile{ AsIs: >/1 ]] }
      {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 22},
      {refalrts::icAllocIdent, 0, 1, 23},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 24},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 25},
      {refalrts::icReinitSVar, 0, 5, 4},
      {refalrts::icUpdateIdent, 0, 0, 21},
      {refalrts::icReinitSVar, 0, 10, 8},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 24, 25, 0},
      {refalrts::icLinkBrackets, 22, 20, 0},
      {refalrts::icLinkBrackets, 19, 9, 0},
      {refalrts::icLinkBrackets, 14, 15, 0},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icSpliceTile, 25, 25, 0},
      {refalrts::icSpliceEVar, 0, 0, 2},
      {refalrts::icSpliceTile, 24, 24, 0},
      {refalrts::icSpliceTile, 20, 20, 0},
      {refalrts::icSpliceEVar, 0, 0, 17},
      {refalrts::icSpliceTile, 22, 23, 0},
      {refalrts::icSpliceTile, 8, 9, 0},
      {refalrts::icSpliceTile, 11, 21, 0},
      {refalrts::icTrash, 0, 0, 4},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_gen_GenPattern_L1

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction descr_gen_GenPattern_L1(
  "GenPattern\\1",
  scope_gen_GenPattern_L1::raa,
  scope_gen_GenPattern_L1::functions,
  scope_gen_GenPattern_L1::idents,
  scope_gen_GenPattern_L1::numbers,
  scope_gen_GenPattern_L1::strings
);
refalrts::RefalFunction& gen_GenPattern_L1 = descr_gen_GenPattern_L1;

} // unnamed namespace

#else
static refalrts::FnResult func_gen_GenPattern_L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 26 elems
  refalrts::Iter context[26];
  refalrts::zeros( context, 26 );
  // </0 & GenPattern\1/4 s.FnGenSubst#1/5 (/8 e.Pattern#1/6 )/9 s.B0-Offset#2/10 s.ContextTop#2/11 (/14 # Junk/16 e.JunkLeft#2/12 )/15 (/19 # Junk/21 e.JunkRight#2/17 )/20 e.InitCommands#2/2 >/1
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
  // closed e.Pattern#1 as range 6
  if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[11], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[12] = 0;
  context[13] = 0;
  context[14] = refalrts::brackets_left( context[12], context[13], context[2], context[3] );
  if( ! context[14] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[14], context[15]);
  context[16] = refalrts::ident_left(  & ident_Junk<int>::name, context[12], context[13] );
  if( ! context[16] )
    return refalrts::cRecognitionImpossible;
  context[17] = 0;
  context[18] = 0;
  context[19] = refalrts::brackets_left( context[17], context[18], context[2], context[3] );
  if( ! context[19] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[19], context[20]);
  context[21] = refalrts::ident_left(  & ident_Junk<int>::name, context[17], context[18] );
  if( ! context[21] )
    return refalrts::cRecognitionImpossible;
  // closed e.JunkLeft#2 as range 12
  // closed e.JunkRight#2 as range 17
  // closed e.InitCommands#2 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} s.FnGenSubst#1/5 {REMOVED TILE} s.B0-Offset#2/10 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 HalfReuse: s.FnGenSubst1 #5/4 } Tile{ AsIs: s.ContextTop#2/11 AsIs: (/14 AsIs: # Junk/16 AsIs: e.JunkLeft#2/12 AsIs: )/15 AsIs: (/19 Reuse: # E/21 } Tile{ HalfReuse: s.B0-Offset2 #10/8 AsIs: e.Pattern#1/6 AsIs: )/9 } (/22 # Junk/23 Tile{ AsIs: e.JunkRight#2/17 } Tile{ AsIs: )/20 } (/24 Tile{ AsIs: e.InitCommands#2/2 } )/25 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_bracket( context[22] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[23], & ident_Junk<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[24] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[25] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_svar( context[4], context[5] );
  refalrts::update_ident( context[21], & ident_E<int>::name );
  refalrts::reinit_svar( context[8], context[10] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[24], context[25] );
  refalrts::link_brackets( context[22], context[20] );
  refalrts::link_brackets( context[19], context[9] );
  refalrts::link_brackets( context[14], context[15] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[25], context[25] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[24], context[24] );
  res = refalrts::splice_evar( res, context[20], context[20] );
  res = refalrts::splice_evar( res, context[17], context[18] );
  res = refalrts::splice_evar( res, context[22], context[23] );
  res = refalrts::splice_evar( res, context[8], context[9] );
  res = refalrts::splice_evar( res, context[11], context[21] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[4], res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalFunction descr_gen_GenPattern_L1(func_gen_GenPattern_L1, "GenPattern\\1");
refalrts::RefalFunction& gen_GenPattern_L1 = descr_gen_GenPattern_L1;

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_GenPattern {
    static refalrts::RefalFunction *functions[] = {
      & Fetch,
      & gen_GenPattern_L1,
      & refalrts::create_closure
    };
    using refalrts::idents;
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icIssueMemory, 17, 0, 0},
      // </0 & GenPattern/4 s.FnGenInitSubst#1/5 s.FnGenSubst#1/6 (/9 e.Name#1/7 )/10 e.Pattern#1/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icsVarLeft, 0, 5, 2},
      {refalrts::icsVarLeft, 0, 6, 2},
      {refalrts::icBracketLeftSave, 0, 7, 2},
      // closed e.Name#1 as range 7
      // closed e.Pattern#1 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 } </11 Tile{ AsIs: s.FnGenInitSubst#1/5 } Tile{ AsIs: e.Name#1/7 } >/12 </13 & @create_closure@/14 & GenPattern\1/15 Tile{ AsIs: s.FnGenSubst#1/6 AsIs: (/9 } Tile{ AsIs: e.Pattern#1/2 } Tile{ AsIs: )/10 } >/16 Tile{ AsIs: >/1 ]] }
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 11},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 12},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 13},
      {refalrts::icAllocFunc, 0, 2, 14},
      {refalrts::icAllocFunc, 0, 1, 15},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 16},
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icPushStack, 0, 0, 16},
      {refalrts::icPushStack, 0, 0, 13},
      {refalrts::icLinkBrackets, 9, 10, 0},
      {refalrts::icPushStack, 0, 0, 12},
      {refalrts::icPushStack, 0, 0, 11},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icSpliceTile, 16, 16, 0},
      {refalrts::icSpliceTile, 10, 10, 0},
      {refalrts::icSpliceEVar, 0, 0, 2},
      {refalrts::icSpliceTile, 6, 9, 0},
      {refalrts::icSpliceTile, 12, 15, 0},
      {refalrts::icSpliceEVar, 0, 0, 7},
      {refalrts::icSpliceTile, 5, 5, 0},
      {refalrts::icSpliceTile, 11, 11, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_GenPattern

} // unnamed namespace

refalrts::RASLFunction descr_GenPattern(
  "GenPattern",
  scope_GenPattern::raa,
  scope_GenPattern::functions,
  scope_GenPattern::idents,
  scope_GenPattern::numbers,
  scope_GenPattern::strings
);
refalrts::RefalFunction& GenPattern = descr_GenPattern;

#else
static refalrts::FnResult func_GenPattern(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & GenPattern/4 s.FnGenInitSubst#1/5 s.FnGenSubst#1/6 (/9 e.Name#1/7 )/10 e.Pattern#1/2 >/1
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
  // closed e.Name#1 as range 7
  // closed e.Pattern#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 } </11 Tile{ AsIs: s.FnGenInitSubst#1/5 } Tile{ AsIs: e.Name#1/7 } >/12 </13 & @create_closure@/14 & GenPattern\1/15 Tile{ AsIs: s.FnGenSubst#1/6 AsIs: (/9 } Tile{ AsIs: e.Pattern#1/2 } Tile{ AsIs: )/10 } >/16 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[14], & refalrts::create_closure ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[15], & gen_GenPattern_L1 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[16] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], & Fetch );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[16] );
  refalrts::push_stack( context[13] );
  refalrts::link_brackets( context[9], context[10] );
  refalrts::push_stack( context[12] );
  refalrts::push_stack( context[11] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[16], context[16] );
  res = refalrts::splice_evar( res, context[10], context[10] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[6], context[9] );
  res = refalrts::splice_evar( res, context[12], context[15] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_evar( res, context[5], context[5] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

refalrts::RefalFunction descr_GenPattern(func_GenPattern, "GenPattern");
refalrts::RefalFunction& GenPattern = descr_GenPattern;

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_gen_GenResult_L1 {
    static refalrts::RefalFunction *functions[] = {
      & FoldOpenELoops
    };
    static const refalrts::RefalIdentifier idents[] = {
      & ident_CmdIssueMem<int>::name
    };
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icIssueMemory, 11, 0, 0},
      // </0 & GenResult\1/4 (/7 e.PatternCommands#1/5 )/8 s.ContextCount#2/9 e.ResultCommands#2/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icBracketLeftSave, 0, 5, 2},
      // closed e.PatternCommands#1 as range 5
      {refalrts::icsVarLeft, 0, 9, 2},
      // closed e.ResultCommands#2 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & FoldOpenELoops/4 AsIs: (/7 } Tile{ HalfReuse: # CmdIssueMem/8 AsIs: s.ContextCount#2/9 } )/10 Tile{ AsIs: e.PatternCommands#1/5 } Tile{ AsIs: e.ResultCommands#2/2 } Tile{ AsIs: >/1 ]] }
      {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 10},
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icReinitIdent, 0, 0, 8},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 10, 0},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icSpliceEVar, 0, 0, 2},
      {refalrts::icSpliceEVar, 0, 0, 5},
      {refalrts::icSpliceTile, 10, 10, 0},
      {refalrts::icSpliceTile, 8, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_gen_GenResult_L1

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction descr_gen_GenResult_L1(
  "GenResult\\1",
  scope_gen_GenResult_L1::raa,
  scope_gen_GenResult_L1::functions,
  scope_gen_GenResult_L1::idents,
  scope_gen_GenResult_L1::numbers,
  scope_gen_GenResult_L1::strings
);
refalrts::RefalFunction& gen_GenResult_L1 = descr_gen_GenResult_L1;

} // unnamed namespace

#else
static refalrts::FnResult func_gen_GenResult_L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
  // </0 & GenResult\1/4 (/7 e.PatternCommands#1/5 )/8 s.ContextCount#2/9 e.ResultCommands#2/2 >/1
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
  // closed e.PatternCommands#1 as range 5
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.ResultCommands#2 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & FoldOpenELoops/4 AsIs: (/7 } Tile{ HalfReuse: # CmdIssueMem/8 AsIs: s.ContextCount#2/9 } )/10 Tile{ AsIs: e.PatternCommands#1/5 } Tile{ AsIs: e.ResultCommands#2/2 } Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_close_bracket( context[10] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], & FoldOpenELoops );
  refalrts::reinit_ident( context[8], & ident_CmdIssueMem<int>::name );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[7], context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[10], context[10] );
  res = refalrts::splice_evar( res, context[8], context[9] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalFunction descr_gen_GenResult_L1(func_gen_GenResult_L1, "GenResult\\1");
refalrts::RefalFunction& gen_GenResult_L1 = descr_gen_GenResult_L1;

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_GenResult {
    static refalrts::RefalFunction *functions[] = {
      & Fetch,
      & gen_GenResult_L1,
      & refalrts::create_closure
    };
    using refalrts::idents;
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icIssueMemory, 26, 0, 0},
      // </0 & GenResult/4 s.FnGenResult#1/5 (/8 e.Result#1/6 )/9 s.ContextOffset#1/10 (/13 e.PatternVars#1/11 )/14 (/17 e.MarkedPattern#1/15 )/18 e.PatternCommands#1/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icsVarLeft, 0, 5, 2},
      {refalrts::icBracketLeftSave, 0, 6, 2},
      // closed e.Result#1 as range 6
      {refalrts::icsVarLeft, 0, 10, 2},
      {refalrts::icBracketLeftSave, 0, 11, 2},
      {refalrts::icBracketLeftSave, 0, 15, 2},
      // closed e.PatternVars#1 as range 11
      // closed e.MarkedPattern#1 as range 15
      // closed e.PatternCommands#1 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} s.FnGenResult#1/5 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 } </19 Tile{ HalfReuse: s.FnGenResult1 #5/9 AsIs: s.ContextOffset#1/10 AsIs: (/13 AsIs: e.PatternVars#1/11 AsIs: )/14 AsIs: (/17 AsIs: e.MarkedPattern#1/15 AsIs: )/18 } Tile{ AsIs: e.Result#1/6 } >/20 </21 & @create_closure@/22 & GenResult\1/23 Tile{ AsIs: (/8 } Tile{ AsIs: e.PatternCommands#1/2 } )/24 >/25 Tile{ AsIs: >/1 ]] }
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 19},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 20},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 21},
      {refalrts::icAllocFunc, 0, 2, 22},
      {refalrts::icAllocFunc, 0, 1, 23},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 24},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 25},
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icReinitSVar, 0, 5, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icPushStack, 0, 0, 25},
      {refalrts::icPushStack, 0, 0, 21},
      {refalrts::icLinkBrackets, 8, 24, 0},
      {refalrts::icPushStack, 0, 0, 20},
      {refalrts::icPushStack, 0, 0, 19},
      {refalrts::icLinkBrackets, 17, 18, 0},
      {refalrts::icLinkBrackets, 13, 14, 0},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icSpliceTile, 24, 25, 0},
      {refalrts::icSpliceEVar, 0, 0, 2},
      {refalrts::icSpliceTile, 8, 8, 0},
      {refalrts::icSpliceTile, 20, 23, 0},
      {refalrts::icSpliceEVar, 0, 0, 6},
      {refalrts::icSpliceTile, 9, 18, 0},
      {refalrts::icSpliceTile, 19, 19, 0},
      {refalrts::icTrash, 0, 0, 4},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_GenResult

} // unnamed namespace

refalrts::RASLFunction descr_GenResult(
  "GenResult",
  scope_GenResult::raa,
  scope_GenResult::functions,
  scope_GenResult::idents,
  scope_GenResult::numbers,
  scope_GenResult::strings
);
refalrts::RefalFunction& GenResult = descr_GenResult;

#else
static refalrts::FnResult func_GenResult(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 26 elems
  refalrts::Iter context[26];
  refalrts::zeros( context, 26 );
  // </0 & GenResult/4 s.FnGenResult#1/5 (/8 e.Result#1/6 )/9 s.ContextOffset#1/10 (/13 e.PatternVars#1/11 )/14 (/17 e.MarkedPattern#1/15 )/18 e.PatternCommands#1/2 >/1
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
  // closed e.PatternVars#1 as range 11
  // closed e.MarkedPattern#1 as range 15
  // closed e.PatternCommands#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} s.FnGenResult#1/5 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 } </19 Tile{ HalfReuse: s.FnGenResult1 #5/9 AsIs: s.ContextOffset#1/10 AsIs: (/13 AsIs: e.PatternVars#1/11 AsIs: )/14 AsIs: (/17 AsIs: e.MarkedPattern#1/15 AsIs: )/18 } Tile{ AsIs: e.Result#1/6 } >/20 </21 & @create_closure@/22 & GenResult\1/23 Tile{ AsIs: (/8 } Tile{ AsIs: e.PatternCommands#1/2 } )/24 >/25 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[19] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[20] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[21] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[22], & refalrts::create_closure ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[23], & gen_GenResult_L1 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[24] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[25] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], & Fetch );
  refalrts::reinit_svar( context[9], context[5] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[25] );
  refalrts::push_stack( context[21] );
  refalrts::link_brackets( context[8], context[24] );
  refalrts::push_stack( context[20] );
  refalrts::push_stack( context[19] );
  refalrts::link_brackets( context[17], context[18] );
  refalrts::link_brackets( context[13], context[14] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[24], context[25] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[20], context[23] );
  res = refalrts::splice_evar( res, context[6], context[7] );
  res = refalrts::splice_evar( res, context[9], context[18] );
  res = refalrts::splice_evar( res, context[19], context[19] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[4], res );
  return refalrts::cSuccess;
}

refalrts::RefalFunction descr_GenResult(func_GenResult, "GenResult");
refalrts::RefalFunction& GenResult = descr_GenResult;

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_FoldOpenELoops {
    using refalrts::functions;
    static const refalrts::RefalIdentifier idents[] = {
      & ident_CmdOpenELoop<int>::name,
      & ident_AlgLeft<int>::name,
      & ident_CmdOpenedE<int>::name
    };
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icReserveBacktrackStack, 2, 0, 0},
      {refalrts::icIssueMemory, 19, 0, 0},
      //FAST GEN: e.$
      //GLOBAL GEN: e.$
      // </0 & FoldOpenELoops/4 e.idx#0/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      // closed e.idx#0 as range 2
      {refalrts::icOnFailGoTo, +25, 0, 0},
      // e.idx
      // </0 & FoldOpenELoops/4 e.Commands-B#1/5 (/9 # CmdOpenedE/11 # AlgLeft/12 s.BracketNum#1/13 s.VarNumber#1/14 )/10 e.Commands-E#1/2 >/1
      {refalrts::icSave, 0, 15, 2},
      {refalrts::icEPrepare, 0, 5, 15},
      {refalrts::icEStart, 0, 5, 15},
      {refalrts::icSave, 0, 17, 15},
      {refalrts::icBracketLeftSave, 0, 7, 17},
      {refalrts::icIdentLeftSave, 11, 2, 7},
      {refalrts::icIdentLeftSave, 12, 1, 7},
      // closed e.Commands-E#1 as range 17(2)
      {refalrts::icsVarLeft, 0, 13, 7},
      {refalrts::icsVarLeft, 0, 14, 7},
      {refalrts::icEmpty, 0, 0, 7},
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: e.Commands-B#1/5 } Tile{ AsIs: (/9 Reuse: # CmdOpenELoop/11 AsIs: # AlgLeft/12 AsIs: s.BracketNum#1/13 AsIs: s.VarNumber#1/14 HalfReuse: </10 } Tile{ AsIs: & FoldOpenELoops/4 } Tile{ AsIs: e.Commands-E#1/17(2) } Tile{ HalfReuse: >/0 } Tile{ HalfReuse: )/1 ]] }
      {refalrts::icUpdateIdent, 0, 0, 11},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 10},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
      {refalrts::icLinkBrackets, 9, 1, 0},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icPushStack, 0, 0, 10},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icSpliceTile, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, 0, 17},
      {refalrts::icSpliceTile, 4, 4, 0},
      {refalrts::icSpliceTile, 9, 10, 0},
      {refalrts::icSpliceEVar, 0, 0, 5},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      // e.idx
      // </0 & FoldOpenELoops/4 e.Commands#1/2 >/1
      // closed e.Commands#1 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & FoldOpenELoops/4 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: e.Commands#1/2 } Tile{ ]] }
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, 0, 2},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_FoldOpenELoops

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction descr_FoldOpenELoops(
  "FoldOpenELoops",
  scope_FoldOpenELoops::raa,
  scope_FoldOpenELoops::functions,
  scope_FoldOpenELoops::idents,
  scope_FoldOpenELoops::numbers,
  scope_FoldOpenELoops::strings
);
refalrts::RefalFunction& FoldOpenELoops = descr_FoldOpenELoops;

} // unnamed namespace

#else
static refalrts::FnResult func_FoldOpenELoops(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  //FAST GEN: e.$
  //GLOBAL GEN: e.$
  // </0 & FoldOpenELoops/4 e.idx#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.idx#0 as range 2
  do {
    refalrts::start_sentence();
    // e.idx
    // </0 & FoldOpenELoops/4 e.Commands-B#1/5 (/9 # CmdOpenedE/11 # AlgLeft/12 s.BracketNum#1/13 s.VarNumber#1/14 )/10 e.Commands-E#1/2 >/1
    context[15] = context[2];
    context[16] = context[3];
    context[5] = 0;
    context[6] = 0;
    refalrts::start_e_loop();
    do {
      context[17] = context[15];
      context[18] = context[16];
      context[7] = 0;
      context[8] = 0;
      context[9] = refalrts::brackets_left( context[7], context[8], context[17], context[18] );
      if( ! context[9] )
        continue;
      refalrts::bracket_pointers(context[9], context[10]);
      context[11] = refalrts::ident_left(  & ident_CmdOpenedE<int>::name, context[7], context[8] );
      if( ! context[11] )
        continue;
      context[12] = refalrts::ident_left(  & ident_AlgLeft<int>::name, context[7], context[8] );
      if( ! context[12] )
        continue;
      // closed e.Commands-E#1 as range 17(2)
      if( ! refalrts::svar_left( context[13], context[7], context[8] ) )
        continue;
      if( ! refalrts::svar_left( context[14], context[7], context[8] ) )
        continue;
      if( ! refalrts::empty_seq( context[7], context[8] ) )
        continue;

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: e.Commands-B#1/5 } Tile{ AsIs: (/9 Reuse: # CmdOpenELoop/11 AsIs: # AlgLeft/12 AsIs: s.BracketNum#1/13 AsIs: s.VarNumber#1/14 HalfReuse: </10 } Tile{ AsIs: & FoldOpenELoops/4 } Tile{ AsIs: e.Commands-E#1/17(2) } Tile{ HalfReuse: >/0 } Tile{ HalfReuse: )/1 ]] }
      refalrts::update_ident( context[11], & ident_CmdOpenELoop<int>::name );
      refalrts::reinit_open_call( context[10] );
      refalrts::reinit_close_call( context[0] );
      refalrts::reinit_close_bracket( context[1] );
      refalrts::link_brackets( context[9], context[1] );
      refalrts::push_stack( context[0] );
      refalrts::push_stack( context[10] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[0], context[0] );
      res = refalrts::splice_evar( res, context[17], context[18] );
      res = refalrts::splice_evar( res, context[4], context[4] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      res = refalrts::splice_evar( res, context[5], context[6] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[5], context[6], context[15], context[16] ) );
  } while ( 0 );

  // e.idx
  // </0 & FoldOpenELoops/4 e.Commands#1/2 >/1
  // closed e.Commands#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & FoldOpenELoops/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Commands#1/2 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalFunction descr_FoldOpenELoops(func_FoldOpenELoops, "FoldOpenELoops");
refalrts::RefalFunction& FoldOpenELoops = descr_FoldOpenELoops;

} // unnamed namespace

#endif

//End of file
