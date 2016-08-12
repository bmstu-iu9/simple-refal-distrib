// Automatically generated file. Don't edit!
#include "refalrts.h"


// identifier #FILE
template <typename SREFAL_PARAM_INT>
struct ident_FILE {
  static const char *name() {
    return "FILE";
  }
};

// identifier #Long
template <typename SREFAL_PARAM_INT>
struct ident_Long {
  static const char *name() {
    return "Long";
  }
};

// identifier #Long-Param
template <typename SREFAL_PARAM_INT>
struct ident_Long_Param {
  static const char *name() {
    return "Long-Param";
  }
};

// identifier #NoParam
template <typename SREFAL_PARAM_INT>
struct ident_NoParam {
  static const char *name() {
    return "NoParam";
  }
};

// identifier #NoRequiredParam
template <typename SREFAL_PARAM_INT>
struct ident_NoRequiredParam {
  static const char *name() {
    return "NoRequiredParam";
  }
};

// identifier #None
template <typename SREFAL_PARAM_INT>
struct ident_None {
  static const char *name() {
    return "None";
  }
};

// identifier #Optional
template <typename SREFAL_PARAM_INT>
struct ident_Optional {
  static const char *name() {
    return "Optional";
  }
};

// identifier #Required
template <typename SREFAL_PARAM_INT>
struct ident_Required {
  static const char *name() {
    return "Required";
  }
};

// identifier #Short
template <typename SREFAL_PARAM_INT>
struct ident_Short {
  static const char *name() {
    return "Short";
  }
};

// identifier #UnexpectedLongOptionParam
template <typename SREFAL_PARAM_INT>
struct ident_UnexpectedLongOptionParam {
  static const char *name() {
    return "UnexpectedLongOptionParam";
  }
};

// identifier #UnknownLongOption
template <typename SREFAL_PARAM_INT>
struct ident_UnknownLongOption {
  static const char *name() {
    return "UnknownLongOption";
  }
};

// identifier #UnknownShortOption
template <typename SREFAL_PARAM_INT>
struct ident_UnknownShortOption {
  static const char *name() {
    return "UnknownShortOption";
  }
};

// identifier #Word
template <typename SREFAL_PARAM_INT>
struct ident_Word {
  static const char *name() {
    return "Word";
  }
};

#ifdef INTERPRET
extern refalrts::RefalFunction& GetOpt;
#else
extern refalrts::RefalFunction& GetOpt;
#endif
extern refalrts::RefalFunction& Add;
#ifdef INTERPRET
namespace /* unnamed */ {
extern refalrts::RefalFunction& Inc;
} // unnamed namespace

#else
namespace /* unnamed */ {
extern refalrts::RefalFunction& Inc;
} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
extern refalrts::RefalFunction& MarkupArguments;
} // unnamed namespace

#else
namespace /* unnamed */ {
extern refalrts::RefalFunction& MarkupArguments;
} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
extern refalrts::RefalFunction& MarkupAllFiles;
} // unnamed namespace

#else
namespace /* unnamed */ {
extern refalrts::RefalFunction& MarkupAllFiles;
} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
extern refalrts::RefalFunction& ResolveOpts;
} // unnamed namespace

#else
namespace /* unnamed */ {
extern refalrts::RefalFunction& ResolveOpts;
} // unnamed namespace

#endif
namespace /* unnamed */ {
refalrts::RefalEmptyFunction descr_Error("Error");
refalrts::RefalFunction& Error = descr_Error;
} // unnamed namespace

#ifdef INTERPRET
namespace /* unnamed */ {
extern refalrts::RefalFunction& ResolveOpts_LongParam;
} // unnamed namespace

#else
namespace /* unnamed */ {
extern refalrts::RefalFunction& ResolveOpts_LongParam;
} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
extern refalrts::RefalFunction& ResolveOpts_Long;
} // unnamed namespace

#else
namespace /* unnamed */ {
extern refalrts::RefalFunction& ResolveOpts_Long;
} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
extern refalrts::RefalFunction& ResolveOpts_Short;
} // unnamed namespace

#else
namespace /* unnamed */ {
extern refalrts::RefalFunction& ResolveOpts_Short;
} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
extern refalrts::RefalFunction& FoldErrors;
} // unnamed namespace

#else
namespace /* unnamed */ {
extern refalrts::RefalFunction& FoldErrors;
} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
extern refalrts::RefalFunction& DoFoldErrors;
} // unnamed namespace

#else
namespace /* unnamed */ {
extern refalrts::RefalFunction& DoFoldErrors;
} // unnamed namespace

#endif

#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_GetOpt {
    static refalrts::RefalFunction *functions[] = {
      & ResolveOpts,
      & MarkupArguments,
      & FoldErrors
    };
    using refalrts::idents;
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icIssueMemory, 16, 0, 0},
      // </0 & GetOpt/4 (/7 e.Description#1/5 )/8 e.Arguments#1/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icBracketLeftSave, 0, 5, 2},
      // closed e.Description#1 as range 5
      // closed e.Arguments#1 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } </9 & FoldErrors/10 Tile{ AsIs: </0 Reuse: & ResolveOpts/4 AsIs: (/7 AsIs: e.Description#1/5 AsIs: )/8 } </11 & MarkupArguments/12 1/13 Tile{ AsIs: e.Arguments#1/2 } >/14 >/15 Tile{ AsIs: >/1 ]] }
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 9},
      {refalrts::icAllocFunc, 0, 2, 10},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 11},
      {refalrts::icAllocFunc, 0, 1, 12},
      {refalrts::icAllocInt, 0, 1, 13},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 14},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 15},
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 9},
      {refalrts::icPushStack, 0, 0, 15},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icPushStack, 0, 0, 14},
      {refalrts::icPushStack, 0, 0, 11},
      {refalrts::icLinkBrackets, 7, 8, 0},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icSpliceTile, 14, 15, 0},
      {refalrts::icSpliceEVar, 0, 0, 2},
      {refalrts::icSpliceTile, 11, 13, 0},
      {refalrts::icSpliceTile, 0, 8, 0},
      {refalrts::icSpliceTile, 9, 10, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_GetOpt

} // unnamed namespace

refalrts::RASLFunction descr_GetOpt(
  "GetOpt",
  scope_GetOpt::raa,
  scope_GetOpt::functions,
  scope_GetOpt::idents,
  scope_GetOpt::numbers,
  scope_GetOpt::strings
);
refalrts::RefalFunction& GetOpt = descr_GetOpt;

#else
static refalrts::FnResult func_GetOpt(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
  // </0 & GetOpt/4 (/7 e.Description#1/5 )/8 e.Arguments#1/2 >/1
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
  // closed e.Description#1 as range 5
  // closed e.Arguments#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </9 & FoldErrors/10 Tile{ AsIs: </0 Reuse: & ResolveOpts/4 AsIs: (/7 AsIs: e.Description#1/5 AsIs: )/8 } </11 & MarkupArguments/12 1/13 Tile{ AsIs: e.Arguments#1/2 } >/14 >/15 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[10], & FoldErrors ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[12], & MarkupArguments ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_number( context[13], 1UL ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[15] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], & ResolveOpts );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[9] );
  refalrts::push_stack( context[15] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[14] );
  refalrts::push_stack( context[11] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[14], context[15] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[11], context[13] );
  res = refalrts::splice_evar( res, context[0], context[8] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

refalrts::RefalFunction descr_GetOpt(func_GetOpt, "GetOpt");
refalrts::RefalFunction& GetOpt = descr_GetOpt;

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_Inc {
    static refalrts::RefalFunction *functions[] = {
      & Add
    };
    using refalrts::idents;
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icIssueMemory, 7, 0, 0},
      // </0 & Inc/4 s.Num#1/5 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icsVarLeft, 0, 5, 2},
      {refalrts::icEmpty, 0, 0, 2},
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Add/4 AsIs: s.Num#1/5 HalfReuse: 1/1 } >/6 Tile{ ]] }
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 6},
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icReinitInt, 0, 1, 1},
      {refalrts::icPushStack, 0, 0, 6},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceTile, 6, 6, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_Inc

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction descr_Inc(
  "Inc",
  scope_Inc::raa,
  scope_Inc::functions,
  scope_Inc::idents,
  scope_Inc::numbers,
  scope_Inc::strings
);
refalrts::RefalFunction& Inc = descr_Inc;

} // unnamed namespace

#else
static refalrts::FnResult func_Inc(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 7 elems
  refalrts::Iter context[7];
  refalrts::zeros( context, 7 );
  // </0 & Inc/4 s.Num#1/5 >/1
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
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Add/4 AsIs: s.Num#1/5 HalfReuse: 1/1 } >/6 Tile{ ]] }
  if( ! refalrts::alloc_close_call( context[6] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], & Add );
  refalrts::reinit_number( context[1], 1UL );
  refalrts::push_stack( context[6] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[6], context[6] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalFunction descr_Inc(func_Inc, "Inc");
refalrts::RefalFunction& Inc = descr_Inc;

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_MarkupArguments {
    static refalrts::RefalFunction *functions[] = {
      & Inc,
      & MarkupArguments,
      & MarkupAllFiles
    };
    static const refalrts::RefalIdentifier idents[] = {
      & ident_Word<int>::name,
      & ident_Short<int>::name,
      & ident_Long<int>::name,
      & ident_Long_Param<int>::name
    };
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icReserveBacktrackStack, 6, 0, 0},
      {refalrts::icIssueMemory, 23, 0, 0},
      //FAST GEN: e.$
      //GLOBAL GEN: s.$ e.$
      // </0 & MarkupArguments/4 s.idx#0/5 e.idxV#0/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icsVarLeft, 0, 5, 2},
      // closed e.idxV#0 as range 2
      {refalrts::icOnFailGoTo, +18, 0, 0},
      // s.idx ( '--' ) e.idx
      // </0 & MarkupArguments/4 s.Num#1/5 (/8 '-'/10 '-'/11 )/9 e.Tail#1/2 >/1
      {refalrts::icSave, 0, 19, 2},
      {refalrts::icBracketLeftSave, 0, 6, 19},
      {refalrts::icCharLeftSave, 10, static_cast<unsigned char>('-'), 6},
      {refalrts::icCharLeftSave, 11, static_cast<unsigned char>('-'), 6},
      {refalrts::icEmpty, 0, 0, 6},
      // closed e.Tail#1 as range 19(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} s.Num#1/5 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & MarkupAllFiles/4 } Tile{ HalfReuse: </8 HalfReuse: & Inc/10 HalfReuse: s.Num1 #5/11 HalfReuse: >/9 AsIs: e.Tail#1/19(2) AsIs: >/1 ]] }
      {refalrts::icUpdateFunc, 0, 2, 4},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 8},
      {refalrts::icReinitFunc, 0, 0, 10},
      {refalrts::icReinitSVar, 0, 5, 11},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icPushStack, 0, 0, 9},
      {refalrts::icPushStack, 0, 0, 8},
      {refalrts::icSetRes, 0, 0, 8},
      {refalrts::icTrash, 0, 0, 4},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +32, 0, 0},
      // s.idx ( '--' e.idx ) e.idx
      // </0 & MarkupArguments/4 s.Num#1/5 (/8 '-'/10 '-'/11 e.Arg#1/12 '='/14 e.Param#1/6 )/9 e.Tail#1/2 >/1
      {refalrts::icSave, 0, 19, 2},
      {refalrts::icBracketLeftSave, 0, 6, 19},
      {refalrts::icCharLeftSave, 10, static_cast<unsigned char>('-'), 6},
      {refalrts::icCharLeftSave, 11, static_cast<unsigned char>('-'), 6},
      // closed e.Tail#1 as range 19(2)
      {refalrts::icEPrepare, 0, 12, 6},
      {refalrts::icEStart, 0, 12, 6},
      {refalrts::icSave, 0, 21, 6},
      {refalrts::icCharLeftSave, 14, static_cast<unsigned char>('='), 21},
      // closed e.Param#1 as range 21(6)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } (/15 Tile{ HalfReuse: # Long-Param/8 HalfReuse: s.Num1 #5/10 HalfReuse: (/11 AsIs: e.Arg#1/12 HalfReuse: )/14 AsIs: e.Param#1/21(6) AsIs: )/9 } </16 & MarkupArguments/17 Tile{ AsIs: </0 Reuse: & Inc/4 AsIs: s.Num#1/5 } >/18 Tile{ AsIs: e.Tail#1/19(2) } Tile{ AsIs: >/1 ]] }
      {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 15},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 16},
      {refalrts::icAllocFunc, 0, 1, 17},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 18},
      {refalrts::icReinitIdent, 0, 3, 8},
      {refalrts::icReinitSVar, 0, 5, 10},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 11},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 14},
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 16},
      {refalrts::icPushStack, 0, 0, 18},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 15, 9, 0},
      {refalrts::icLinkBrackets, 11, 14, 0},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icSpliceEVar, 0, 0, 19},
      {refalrts::icSpliceTile, 18, 18, 0},
      {refalrts::icSpliceTile, 0, 5, 0},
      {refalrts::icSpliceTile, 16, 17, 0},
      {refalrts::icSpliceTile, 8, 9, 0},
      {refalrts::icSpliceTile, 15, 15, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +23, 0, 0},
      // s.idx ( '--' e.idx ) e.idx
      // </0 & MarkupArguments/4 s.Num#1/5 (/8 '-'/10 '-'/11 e.Arg#1/6 )/9 e.Tail#1/2 >/1
      {refalrts::icSave, 0, 19, 2},
      {refalrts::icBracketLeftSave, 0, 6, 19},
      {refalrts::icCharLeftSave, 10, static_cast<unsigned char>('-'), 6},
      {refalrts::icCharLeftSave, 11, static_cast<unsigned char>('-'), 6},
      // closed e.Arg#1 as range 6
      // closed e.Tail#1 as range 19(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/8 HalfReuse: # Long/10 HalfReuse: s.Num1 #5/11 AsIs: e.Arg#1/6 AsIs: )/9 } </12 & MarkupArguments/13 Tile{ AsIs: </0 Reuse: & Inc/4 AsIs: s.Num#1/5 } >/14 Tile{ AsIs: e.Tail#1/19(2) } Tile{ AsIs: >/1 ]] }
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 12},
      {refalrts::icAllocFunc, 0, 1, 13},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 14},
      {refalrts::icReinitIdent, 0, 2, 10},
      {refalrts::icReinitSVar, 0, 5, 11},
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 12},
      {refalrts::icPushStack, 0, 0, 14},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 8, 9, 0},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icSpliceEVar, 0, 0, 19},
      {refalrts::icSpliceTile, 14, 14, 0},
      {refalrts::icSpliceTile, 0, 5, 0},
      {refalrts::icSpliceTile, 12, 13, 0},
      {refalrts::icSpliceTile, 8, 9, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +25, 0, 0},
      // s.idx ( '-' s.idx e.idx ) e.idx
      // </0 & MarkupArguments/4 s.Num#1/5 (/8 '-'/10 s.Init#1/11 e.Arg#1/6 )/9 e.Tail#1/2 >/1
      {refalrts::icSave, 0, 19, 2},
      {refalrts::icBracketLeftSave, 0, 6, 19},
      {refalrts::icCharLeftSave, 10, static_cast<unsigned char>('-'), 6},
      // closed e.Tail#1 as range 19(2)
      {refalrts::icsVarLeft, 0, 11, 6},
      // closed e.Arg#1 as range 6
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } (/12 Tile{ HalfReuse: # Short/8 HalfReuse: s.Num1 #5/10 AsIs: s.Init#1/11 AsIs: e.Arg#1/6 AsIs: )/9 } </13 & MarkupArguments/14 Tile{ AsIs: </0 Reuse: & Inc/4 AsIs: s.Num#1/5 } >/15 Tile{ AsIs: e.Tail#1/19(2) } Tile{ AsIs: >/1 ]] }
      {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 12},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 13},
      {refalrts::icAllocFunc, 0, 1, 14},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 15},
      {refalrts::icReinitIdent, 0, 1, 8},
      {refalrts::icReinitSVar, 0, 5, 10},
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 13},
      {refalrts::icPushStack, 0, 0, 15},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 12, 9, 0},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icSpliceEVar, 0, 0, 19},
      {refalrts::icSpliceTile, 15, 15, 0},
      {refalrts::icSpliceTile, 0, 5, 0},
      {refalrts::icSpliceTile, 13, 14, 0},
      {refalrts::icSpliceTile, 8, 9, 0},
      {refalrts::icSpliceTile, 12, 12, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +22, 0, 0},
      // s.idx ( e.idx ) e.idx
      // </0 & MarkupArguments/4 s.Num#1/5 (/8 e.Arg#1/6 )/9 e.Tail#1/2 >/1
      {refalrts::icSave, 0, 19, 2},
      {refalrts::icBracketLeftSave, 0, 6, 19},
      // closed e.Arg#1 as range 6
      // closed e.Tail#1 as range 19(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # Word/4 AsIs: s.Num#1/5 } Tile{ AsIs: e.Arg#1/6 } Tile{ HalfReuse: )/8 } </10 & MarkupArguments/11 </12 & Inc/13 s.Num#1/5/14 Tile{ HalfReuse: >/9 AsIs: e.Tail#1/19(2) AsIs: >/1 ]] }
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 10},
      {refalrts::icAllocFunc, 0, 1, 11},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 12},
      {refalrts::icAllocFunc, 0, 0, 13},
      {refalrts::icCopySTVar, 14, 5, 0},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icReinitIdent, 0, 0, 4},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 10},
      {refalrts::icPushStack, 0, 0, 9},
      {refalrts::icPushStack, 0, 0, 12},
      {refalrts::icLinkBrackets, 0, 8, 0},
      {refalrts::icSetRes, 0, 0, 9},
      {refalrts::icSpliceTile, 10, 14, 0},
      {refalrts::icSpliceTile, 8, 8, 0},
      {refalrts::icSpliceEVar, 0, 0, 6},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      // s.idx
      // </0 & MarkupArguments/4 s.Num#1/5 >/1
      {refalrts::icEmpty, 0, 0, 2},
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & MarkupArguments/4 s.Num#1/5 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ ]] }
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_MarkupArguments

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction descr_MarkupArguments(
  "MarkupArguments",
  scope_MarkupArguments::raa,
  scope_MarkupArguments::functions,
  scope_MarkupArguments::idents,
  scope_MarkupArguments::numbers,
  scope_MarkupArguments::strings
);
refalrts::RefalFunction& MarkupArguments = descr_MarkupArguments;

} // unnamed namespace

#else
static refalrts::FnResult func_MarkupArguments(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 23 elems
  refalrts::Iter context[23];
  refalrts::zeros( context, 23 );
  //FAST GEN: e.$
  //GLOBAL GEN: s.$ e.$
  // </0 & MarkupArguments/4 s.idx#0/5 e.idxV#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.idxV#0 as range 2
  do {
    refalrts::start_sentence();
    // s.idx ( '--' ) e.idx
    // </0 & MarkupArguments/4 s.Num#1/5 (/8 '-'/10 '-'/11 )/9 e.Tail#1/2 >/1
    context[19] = context[2];
    context[20] = context[3];
    context[6] = 0;
    context[7] = 0;
    context[8] = refalrts::brackets_left( context[6], context[7], context[19], context[20] );
    if( ! context[8] )
      continue;
    refalrts::bracket_pointers(context[8], context[9]);
    context[10] = refalrts::char_left( '-', context[6], context[7] );
    if( ! context[10] )
      continue;
    context[11] = refalrts::char_left( '-', context[6], context[7] );
    if( ! context[11] )
      continue;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      continue;
    // closed e.Tail#1 as range 19(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} s.Num#1/5 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & MarkupAllFiles/4 } Tile{ HalfReuse: </8 HalfReuse: & Inc/10 HalfReuse: s.Num1 #5/11 HalfReuse: >/9 AsIs: e.Tail#1/19(2) AsIs: >/1 ]] }
    refalrts::update_name( context[4], & MarkupAllFiles );
    refalrts::reinit_open_call( context[8] );
    refalrts::reinit_name( context[10], & Inc );
    refalrts::reinit_svar( context[11], context[5] );
    refalrts::reinit_close_call( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[9] );
    refalrts::push_stack( context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // s.idx ( '--' e.idx ) e.idx
    // </0 & MarkupArguments/4 s.Num#1/5 (/8 '-'/10 '-'/11 e.Arg#1/12 '='/14 e.Param#1/6 )/9 e.Tail#1/2 >/1
    context[19] = context[2];
    context[20] = context[3];
    context[6] = 0;
    context[7] = 0;
    context[8] = refalrts::brackets_left( context[6], context[7], context[19], context[20] );
    if( ! context[8] )
      continue;
    refalrts::bracket_pointers(context[8], context[9]);
    context[10] = refalrts::char_left( '-', context[6], context[7] );
    if( ! context[10] )
      continue;
    context[11] = refalrts::char_left( '-', context[6], context[7] );
    if( ! context[11] )
      continue;
    // closed e.Tail#1 as range 19(2)
    context[12] = 0;
    context[13] = 0;
    refalrts::start_e_loop();
    do {
      context[21] = context[6];
      context[22] = context[7];
      context[14] = refalrts::char_left( '=', context[21], context[22] );
      if( ! context[14] )
        continue;
      // closed e.Param#1 as range 21(6)

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } (/15 Tile{ HalfReuse: # Long-Param/8 HalfReuse: s.Num1 #5/10 HalfReuse: (/11 AsIs: e.Arg#1/12 HalfReuse: )/14 AsIs: e.Param#1/21(6) AsIs: )/9 } </16 & MarkupArguments/17 Tile{ AsIs: </0 Reuse: & Inc/4 AsIs: s.Num#1/5 } >/18 Tile{ AsIs: e.Tail#1/19(2) } Tile{ AsIs: >/1 ]] }
      if( ! refalrts::alloc_open_bracket( context[15] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_call( context[16] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[17], & MarkupArguments ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[18] ) )
        return refalrts::cNoMemory;
      refalrts::reinit_ident( context[8], & ident_Long_Param<int>::name );
      refalrts::reinit_svar( context[10], context[5] );
      refalrts::reinit_open_bracket( context[11] );
      refalrts::reinit_close_bracket( context[14] );
      refalrts::update_name( context[4], & Inc );
      refalrts::push_stack( context[1] );
      refalrts::push_stack( context[16] );
      refalrts::push_stack( context[18] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[15], context[9] );
      refalrts::link_brackets( context[11], context[14] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[19], context[20] );
      res = refalrts::splice_evar( res, context[18], context[18] );
      res = refalrts::splice_evar( res, context[0], context[5] );
      res = refalrts::splice_evar( res, context[16], context[17] );
      res = refalrts::splice_evar( res, context[8], context[9] );
      res = refalrts::splice_evar( res, context[15], context[15] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[12], context[13], context[6], context[7] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // s.idx ( '--' e.idx ) e.idx
    // </0 & MarkupArguments/4 s.Num#1/5 (/8 '-'/10 '-'/11 e.Arg#1/6 )/9 e.Tail#1/2 >/1
    context[19] = context[2];
    context[20] = context[3];
    context[6] = 0;
    context[7] = 0;
    context[8] = refalrts::brackets_left( context[6], context[7], context[19], context[20] );
    if( ! context[8] )
      continue;
    refalrts::bracket_pointers(context[8], context[9]);
    context[10] = refalrts::char_left( '-', context[6], context[7] );
    if( ! context[10] )
      continue;
    context[11] = refalrts::char_left( '-', context[6], context[7] );
    if( ! context[11] )
      continue;
    // closed e.Arg#1 as range 6
    // closed e.Tail#1 as range 19(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/8 HalfReuse: # Long/10 HalfReuse: s.Num1 #5/11 AsIs: e.Arg#1/6 AsIs: )/9 } </12 & MarkupArguments/13 Tile{ AsIs: </0 Reuse: & Inc/4 AsIs: s.Num#1/5 } >/14 Tile{ AsIs: e.Tail#1/19(2) } Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_call( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[13], & MarkupArguments ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[14] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_ident( context[10], & ident_Long<int>::name );
    refalrts::reinit_svar( context[11], context[5] );
    refalrts::update_name( context[4], & Inc );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[12] );
    refalrts::push_stack( context[14] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[8], context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[19], context[20] );
    res = refalrts::splice_evar( res, context[14], context[14] );
    res = refalrts::splice_evar( res, context[0], context[5] );
    res = refalrts::splice_evar( res, context[12], context[13] );
    res = refalrts::splice_evar( res, context[8], context[9] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // s.idx ( '-' s.idx e.idx ) e.idx
    // </0 & MarkupArguments/4 s.Num#1/5 (/8 '-'/10 s.Init#1/11 e.Arg#1/6 )/9 e.Tail#1/2 >/1
    context[19] = context[2];
    context[20] = context[3];
    context[6] = 0;
    context[7] = 0;
    context[8] = refalrts::brackets_left( context[6], context[7], context[19], context[20] );
    if( ! context[8] )
      continue;
    refalrts::bracket_pointers(context[8], context[9]);
    context[10] = refalrts::char_left( '-', context[6], context[7] );
    if( ! context[10] )
      continue;
    // closed e.Tail#1 as range 19(2)
    if( ! refalrts::svar_left( context[11], context[6], context[7] ) )
      continue;
    // closed e.Arg#1 as range 6

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } (/12 Tile{ HalfReuse: # Short/8 HalfReuse: s.Num1 #5/10 AsIs: s.Init#1/11 AsIs: e.Arg#1/6 AsIs: )/9 } </13 & MarkupArguments/14 Tile{ AsIs: </0 Reuse: & Inc/4 AsIs: s.Num#1/5 } >/15 Tile{ AsIs: e.Tail#1/19(2) } Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_bracket( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[14], & MarkupArguments ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[15] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_ident( context[8], & ident_Short<int>::name );
    refalrts::reinit_svar( context[10], context[5] );
    refalrts::update_name( context[4], & Inc );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[13] );
    refalrts::push_stack( context[15] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[12], context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[19], context[20] );
    res = refalrts::splice_evar( res, context[15], context[15] );
    res = refalrts::splice_evar( res, context[0], context[5] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[8], context[9] );
    res = refalrts::splice_evar( res, context[12], context[12] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // s.idx ( e.idx ) e.idx
    // </0 & MarkupArguments/4 s.Num#1/5 (/8 e.Arg#1/6 )/9 e.Tail#1/2 >/1
    context[19] = context[2];
    context[20] = context[3];
    context[6] = 0;
    context[7] = 0;
    context[8] = refalrts::brackets_left( context[6], context[7], context[19], context[20] );
    if( ! context[8] )
      continue;
    refalrts::bracket_pointers(context[8], context[9]);
    // closed e.Arg#1 as range 6
    // closed e.Tail#1 as range 19(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # Word/4 AsIs: s.Num#1/5 } Tile{ AsIs: e.Arg#1/6 } Tile{ HalfReuse: )/8 } </10 & MarkupArguments/11 </12 & Inc/13 s.Num#1/5/14 Tile{ HalfReuse: >/9 AsIs: e.Tail#1/19(2) AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_call( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[11], & MarkupArguments ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[13], & Inc ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[14], context[5]))
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], & ident_Word<int>::name );
    refalrts::reinit_close_bracket( context[8] );
    refalrts::reinit_close_call( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[10] );
    refalrts::push_stack( context[9] );
    refalrts::push_stack( context[12] );
    refalrts::link_brackets( context[0], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[9];
    res = refalrts::splice_evar( res, context[10], context[14] );
    res = refalrts::splice_evar( res, context[8], context[8] );
    res = refalrts::splice_evar( res, context[6], context[7] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );

  // s.idx
  // </0 & MarkupArguments/4 s.Num#1/5 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & MarkupArguments/4 s.Num#1/5 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalFunction descr_MarkupArguments(func_MarkupArguments, "MarkupArguments");
refalrts::RefalFunction& MarkupArguments = descr_MarkupArguments;

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_MarkupAllFiles {
    static refalrts::RefalFunction *functions[] = {
      & Inc,
      & MarkupAllFiles
    };
    static const refalrts::RefalIdentifier idents[] = {
      & ident_Word<int>::name
    };
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icReserveBacktrackStack, 1, 0, 0},
      {refalrts::icIssueMemory, 17, 0, 0},
      //FAST GEN: e.$
      //GLOBAL GEN: s.$ e.$
      // </0 & MarkupAllFiles/4 s.idx#0/5 e.idxV#0/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icsVarLeft, 0, 5, 2},
      // closed e.idxV#0 as range 2
      {refalrts::icOnFailGoTo, +22, 0, 0},
      // s.idx ( e.idx ) e.idx
      // </0 & MarkupAllFiles/4 s.Num#1/5 (/8 e.Arg#1/6 )/9 e.Tail#1/2 >/1
      {refalrts::icSave, 0, 15, 2},
      {refalrts::icBracketLeftSave, 0, 6, 15},
      // closed e.Arg#1 as range 6
      // closed e.Tail#1 as range 15(2)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # Word/4 AsIs: s.Num#1/5 } Tile{ AsIs: e.Arg#1/6 } Tile{ HalfReuse: )/8 } </10 & MarkupAllFiles/11 </12 & Inc/13 s.Num#1/5/14 Tile{ HalfReuse: >/9 AsIs: e.Tail#1/15(2) AsIs: >/1 ]] }
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 10},
      {refalrts::icAllocFunc, 0, 1, 11},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 12},
      {refalrts::icAllocFunc, 0, 0, 13},
      {refalrts::icCopySTVar, 14, 5, 0},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icReinitIdent, 0, 0, 4},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 9},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 10},
      {refalrts::icPushStack, 0, 0, 9},
      {refalrts::icPushStack, 0, 0, 12},
      {refalrts::icLinkBrackets, 0, 8, 0},
      {refalrts::icSetRes, 0, 0, 9},
      {refalrts::icSpliceTile, 10, 14, 0},
      {refalrts::icSpliceTile, 8, 8, 0},
      {refalrts::icSpliceEVar, 0, 0, 6},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      // s.idx
      // </0 & MarkupAllFiles/4 s.Num#1/5 >/1
      {refalrts::icEmpty, 0, 0, 2},
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & MarkupAllFiles/4 s.Num#1/5 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ ]] }
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_MarkupAllFiles

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction descr_MarkupAllFiles(
  "MarkupAllFiles",
  scope_MarkupAllFiles::raa,
  scope_MarkupAllFiles::functions,
  scope_MarkupAllFiles::idents,
  scope_MarkupAllFiles::numbers,
  scope_MarkupAllFiles::strings
);
refalrts::RefalFunction& MarkupAllFiles = descr_MarkupAllFiles;

} // unnamed namespace

#else
static refalrts::FnResult func_MarkupAllFiles(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  //FAST GEN: e.$
  //GLOBAL GEN: s.$ e.$
  // </0 & MarkupAllFiles/4 s.idx#0/5 e.idxV#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.idxV#0 as range 2
  do {
    refalrts::start_sentence();
    // s.idx ( e.idx ) e.idx
    // </0 & MarkupAllFiles/4 s.Num#1/5 (/8 e.Arg#1/6 )/9 e.Tail#1/2 >/1
    context[15] = context[2];
    context[16] = context[3];
    context[6] = 0;
    context[7] = 0;
    context[8] = refalrts::brackets_left( context[6], context[7], context[15], context[16] );
    if( ! context[8] )
      continue;
    refalrts::bracket_pointers(context[8], context[9]);
    // closed e.Arg#1 as range 6
    // closed e.Tail#1 as range 15(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # Word/4 AsIs: s.Num#1/5 } Tile{ AsIs: e.Arg#1/6 } Tile{ HalfReuse: )/8 } </10 & MarkupAllFiles/11 </12 & Inc/13 s.Num#1/5/14 Tile{ HalfReuse: >/9 AsIs: e.Tail#1/15(2) AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_call( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[11], & MarkupAllFiles ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[13], & Inc ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[14], context[5]))
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], & ident_Word<int>::name );
    refalrts::reinit_close_bracket( context[8] );
    refalrts::reinit_close_call( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[10] );
    refalrts::push_stack( context[9] );
    refalrts::push_stack( context[12] );
    refalrts::link_brackets( context[0], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[9];
    res = refalrts::splice_evar( res, context[10], context[14] );
    res = refalrts::splice_evar( res, context[8], context[8] );
    res = refalrts::splice_evar( res, context[6], context[7] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );

  // s.idx
  // </0 & MarkupAllFiles/4 s.Num#1/5 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & MarkupAllFiles/4 s.Num#1/5 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalFunction descr_MarkupAllFiles(func_MarkupAllFiles, "MarkupAllFiles");
refalrts::RefalFunction& MarkupAllFiles = descr_MarkupAllFiles;

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_ResolveOpts {
    static refalrts::RefalFunction *functions[] = {
      & Error,
      & ResolveOpts_Short,
      & ResolveOpts_Long,
      & ResolveOpts_LongParam
    };
    static const refalrts::RefalIdentifier idents[] = {
      & ident_FILE<int>::name,
      & ident_Word<int>::name,
      & ident_UnknownShortOption<int>::name,
      & ident_Short<int>::name,
      & ident_UnknownLongOption<int>::name,
      & ident_Long<int>::name,
      & ident_Long_Param<int>::name
    };
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icReserveBacktrackStack, 14, 0, 0},
      {refalrts::icIssueMemory, 45, 0, 0},
      //FAST GEN: e.$
      //GLOBAL GEN: ( e.$ ) e.$
      // </0 & ResolveOpts/4 (/7 e.idxB#0/5 )/8 e.idxT#0/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icBracketLeftSave, 0, 5, 2},
      // closed e.idxB#0 as range 5
      // closed e.idxT#0 as range 2
      {refalrts::icOnFailGoTo, +39, 0, 0},
      // ( e.idx ) ( # Long-Param s.idx ( e.idx ) e.idx ) e.idx
      // </0 & ResolveOpts/4 (/7 e.Descrs-B#1/19 (/23 s.Tag#1/25 s.HasArg#1/26 e.Opts-B#1/27 (/31 e.Long#1/33 )/32 e.Opts-E#1/21 )/24 e.Descrs-E#1/5 )/8 (/11 # Long-Param/13 s.Num#1/14 (/17 e.Long#1/15 )/18 e.Param#1/9 )/12 e.ArgsTail#1/2 >/1
      {refalrts::icSave, 0, 37, 2},
      {refalrts::icBracketLeftSave, 0, 9, 37},
      {refalrts::icIdentLeftSave, 13, 6, 9},
      // closed e.ArgsTail#1 as range 37(2)
      {refalrts::icsVarLeft, 0, 14, 9},
      {refalrts::icBracketLeftSave, 0, 15, 9},
      // closed e.Long#1 as range 15
      // closed e.Param#1 as range 9
      {refalrts::icSave, 0, 39, 5},
      {refalrts::icEPrepare, 0, 19, 39},
      {refalrts::icEStart, 0, 19, 39},
      {refalrts::icSave, 0, 41, 39},
      {refalrts::icBracketLeftSave, 0, 21, 41},
      // closed e.Descrs-E#1 as range 41(5)
      {refalrts::icsVarLeft, 0, 25, 21},
      {refalrts::icsVarLeft, 0, 26, 21},
      {refalrts::icEPrepare, 0, 27, 21},
      {refalrts::icEStart, 0, 27, 21},
      {refalrts::icSave, 0, 43, 21},
      {refalrts::icBracketLeftSave, 0, 29, 43},
      {refalrts::iceRepeatLeft, 33, 15, 29},
      {refalrts::icEmpty, 0, 0, 29},
      // closed e.Opts-E#1 as range 43(21)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} s.Num#1/14 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & ResolveOpts-LongParam/4 AsIs: (/7 AsIs: e.Descrs-B#1/19 AsIs: (/23 AsIs: s.Tag#1/25 AsIs: s.HasArg#1/26 AsIs: e.Opts-B#1/27 AsIs: (/31 AsIs: e.Long#1/33 AsIs: )/32 AsIs: e.Opts-E#1/43(21) AsIs: )/24 AsIs: e.Descrs-E#1/41(5) AsIs: )/8 HalfReuse: s.Num1 #14/11 HalfReuse: s.Tag1 #25/13 } s.HasArg#1/26/35 Tile{ AsIs: (/17 } Tile{ AsIs: e.Long#1/15 } )/36 Tile{ HalfReuse: (/18 AsIs: e.Param#1/9 AsIs: )/12 AsIs: e.ArgsTail#1/37(2) AsIs: >/1 ]] }
      {refalrts::icCopySTVar, 35, 26, 0},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 36},
      {refalrts::icUpdateFunc, 0, 3, 4},
      {refalrts::icReinitSVar, 0, 14, 11},
      {refalrts::icReinitSVar, 0, 25, 13},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 18},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 18, 12, 0},
      {refalrts::icLinkBrackets, 17, 36, 0},
      {refalrts::icLinkBrackets, 7, 8, 0},
      {refalrts::icLinkBrackets, 23, 24, 0},
      {refalrts::icLinkBrackets, 31, 32, 0},
      {refalrts::icSetRes, 0, 0, 18},
      {refalrts::icSpliceTile, 36, 36, 0},
      {refalrts::icSpliceEVar, 0, 0, 15},
      {refalrts::icSpliceTile, 17, 17, 0},
      {refalrts::icSpliceTile, 35, 35, 0},
      {refalrts::icTrash, 0, 0, 13},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +18, 0, 0},
      // ( e.idx ) ( # Long-Param s.idx ( e.idx ) e.idx ) e.idx
      // </0 & ResolveOpts/4 (/7 e.Description#1/5 )/8 (/11 # Long-Param/13 s.Num#1/14 (/17 e.Long#1/15 )/18 e.Param#1/9 )/12 e.ArgsTail#1/2 >/1
      {refalrts::icSave, 0, 37, 2},
      {refalrts::icBracketLeftSave, 0, 9, 37},
      {refalrts::icIdentLeftSave, 13, 6, 9},
      // closed e.Description#1 as range 5
      // closed e.ArgsTail#1 as range 37(2)
      {refalrts::icsVarLeft, 0, 14, 9},
      {refalrts::icBracketLeftSave, 0, 15, 9},
      // closed e.Long#1 as range 15
      // closed e.Param#1 as range 9
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.Param#1/9 )/12 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/11 HalfReuse: & Error/13 AsIs: s.Num#1/14 HalfReuse: # UnknownLongOption/17 AsIs: e.Long#1/15 AsIs: )/18 } Tile{ AsIs: </0 AsIs: & ResolveOpts/4 AsIs: (/7 AsIs: e.Description#1/5 AsIs: )/8 } Tile{ AsIs: e.ArgsTail#1/37(2) } Tile{ AsIs: >/1 ]] }
      {refalrts::icReinitFunc, 0, 0, 13},
      {refalrts::icReinitIdent, 0, 4, 17},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 8, 0},
      {refalrts::icLinkBrackets, 11, 18, 0},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icSpliceEVar, 0, 0, 37},
      {refalrts::icSpliceTile, 0, 8, 0},
      {refalrts::icSpliceTile, 11, 18, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +34, 0, 0},
      // ( e.idx ) ( # Long s.idx e.idx ) e.idx
      // </0 & ResolveOpts/4 (/7 e.Descrs-B#1/15 (/19 s.Tag#1/21 s.HasArg#1/22 e.Opts-B#1/23 (/27 e.Long#1/29 )/28 e.Opts-E#1/17 )/20 e.Descrs-E#1/5 )/8 (/11 # Long/13 s.Num#1/14 e.Long#1/9 )/12 e.ArgsTail#1/2 >/1
      {refalrts::icSave, 0, 37, 2},
      {refalrts::icBracketLeftSave, 0, 9, 37},
      {refalrts::icIdentLeftSave, 13, 5, 9},
      // closed e.ArgsTail#1 as range 37(2)
      {refalrts::icsVarLeft, 0, 14, 9},
      // closed e.Long#1 as range 9
      {refalrts::icSave, 0, 39, 5},
      {refalrts::icEPrepare, 0, 15, 39},
      {refalrts::icEStart, 0, 15, 39},
      {refalrts::icSave, 0, 41, 39},
      {refalrts::icBracketLeftSave, 0, 17, 41},
      // closed e.Descrs-E#1 as range 41(5)
      {refalrts::icsVarLeft, 0, 21, 17},
      {refalrts::icsVarLeft, 0, 22, 17},
      {refalrts::icEPrepare, 0, 23, 17},
      {refalrts::icEStart, 0, 23, 17},
      {refalrts::icSave, 0, 43, 17},
      {refalrts::icBracketLeftSave, 0, 25, 43},
      {refalrts::iceRepeatLeft, 29, 9, 25},
      {refalrts::icEmpty, 0, 0, 25},
      // closed e.Opts-E#1 as range 43(17)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} s.Num#1/14 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & ResolveOpts-Long/4 AsIs: (/7 AsIs: e.Descrs-B#1/15 AsIs: (/19 AsIs: s.Tag#1/21 AsIs: s.HasArg#1/22 AsIs: e.Opts-B#1/23 AsIs: (/27 AsIs: e.Long#1/29 AsIs: )/28 AsIs: e.Opts-E#1/43(17) AsIs: )/20 AsIs: e.Descrs-E#1/41(5) AsIs: )/8 HalfReuse: s.Num1 #14/11 HalfReuse: s.Tag1 #21/13 } s.HasArg#1/22/31 (/32 Tile{ AsIs: e.Long#1/9 } Tile{ AsIs: )/12 AsIs: e.ArgsTail#1/37(2) AsIs: >/1 ]] }
      {refalrts::icCopySTVar, 31, 22, 0},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 32},
      {refalrts::icUpdateFunc, 0, 2, 4},
      {refalrts::icReinitSVar, 0, 14, 11},
      {refalrts::icReinitSVar, 0, 21, 13},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 32, 12, 0},
      {refalrts::icLinkBrackets, 7, 8, 0},
      {refalrts::icLinkBrackets, 19, 20, 0},
      {refalrts::icLinkBrackets, 27, 28, 0},
      {refalrts::icSetRes, 0, 0, 12},
      {refalrts::icSpliceEVar, 0, 0, 9},
      {refalrts::icSpliceTile, 31, 32, 0},
      {refalrts::icTrash, 0, 0, 13},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +19, 0, 0},
      // ( e.idx ) ( # Long s.idx e.idx ) e.idx
      // </0 & ResolveOpts/4 (/7 e.Description#1/5 )/8 (/11 # Long/13 s.Num#1/14 e.Long#1/9 )/12 e.ArgsTail#1/2 >/1
      {refalrts::icSave, 0, 37, 2},
      {refalrts::icBracketLeftSave, 0, 9, 37},
      {refalrts::icIdentLeftSave, 13, 5, 9},
      // closed e.Description#1 as range 5
      // closed e.ArgsTail#1 as range 37(2)
      {refalrts::icsVarLeft, 0, 14, 9},
      // closed e.Long#1 as range 9
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/11 HalfReuse: & Error/13 AsIs: s.Num#1/14 } # UnknownLongOption/15 Tile{ AsIs: e.Long#1/9 } Tile{ AsIs: )/12 } Tile{ AsIs: </0 AsIs: & ResolveOpts/4 AsIs: (/7 AsIs: e.Description#1/5 AsIs: )/8 } Tile{ AsIs: e.ArgsTail#1/37(2) } Tile{ AsIs: >/1 ]] }
      {refalrts::icAllocIdent, 0, 4, 15},
      {refalrts::icReinitFunc, 0, 0, 13},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 8, 0},
      {refalrts::icLinkBrackets, 11, 12, 0},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icSpliceEVar, 0, 0, 37},
      {refalrts::icSpliceTile, 0, 8, 0},
      {refalrts::icSpliceTile, 12, 12, 0},
      {refalrts::icSpliceEVar, 0, 0, 9},
      {refalrts::icSpliceTile, 15, 15, 0},
      {refalrts::icSpliceTile, 11, 14, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +34, 0, 0},
      // ( e.idx ) ( # Short s.idx s.idx e.idx ) e.idx
      // </0 & ResolveOpts/4 (/7 e.Descrs-B#1/16 (/20 s.Tag#1/22 s.HasArg#1/23 e.Opts-B#1/24 s.Short#1/26 e.Opts-E#1/18 )/21 e.Descrs-E#1/5 )/8 (/11 # Short/13 s.Num#1/14 s.Short#1/15 e.OptTail#1/9 )/12 e.ArgsTail#1/2 >/1
      {refalrts::icSave, 0, 37, 2},
      {refalrts::icBracketLeftSave, 0, 9, 37},
      {refalrts::icIdentLeftSave, 13, 3, 9},
      // closed e.ArgsTail#1 as range 37(2)
      {refalrts::icsVarLeft, 0, 14, 9},
      {refalrts::icsVarLeft, 0, 15, 9},
      // closed e.OptTail#1 as range 9
      {refalrts::icSave, 0, 39, 5},
      {refalrts::icEPrepare, 0, 16, 39},
      {refalrts::icEStart, 0, 16, 39},
      {refalrts::icSave, 0, 41, 39},
      {refalrts::icBracketLeftSave, 0, 18, 41},
      // closed e.Descrs-E#1 as range 41(5)
      {refalrts::icsVarLeft, 0, 22, 18},
      {refalrts::icsVarLeft, 0, 23, 18},
      {refalrts::icEPrepare, 0, 24, 18},
      {refalrts::icEStart, 0, 24, 18},
      {refalrts::icSave, 0, 43, 18},
      {refalrts::icsRepeatLeft, 26, 15, 43},
      // closed e.Opts-E#1 as range 43(18)
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} s.Num#1/14 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & ResolveOpts-Short/4 AsIs: (/7 AsIs: e.Descrs-B#1/16 AsIs: (/20 AsIs: s.Tag#1/22 AsIs: s.HasArg#1/23 AsIs: e.Opts-B#1/24 AsIs: s.Short#1/26 AsIs: e.Opts-E#1/43(18) AsIs: )/21 AsIs: e.Descrs-E#1/41(5) AsIs: )/8 HalfReuse: s.Num1 #14/11 HalfReuse: s.Tag1 #22/13 } s.HasArg#1/23/27 Tile{ AsIs: s.Short#1/15 } (/28 Tile{ AsIs: e.OptTail#1/9 } Tile{ AsIs: )/12 AsIs: e.ArgsTail#1/37(2) AsIs: >/1 ]] }
      {refalrts::icCopySTVar, 27, 23, 0},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 28},
      {refalrts::icUpdateFunc, 0, 1, 4},
      {refalrts::icReinitSVar, 0, 14, 11},
      {refalrts::icReinitSVar, 0, 22, 13},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 28, 12, 0},
      {refalrts::icLinkBrackets, 7, 8, 0},
      {refalrts::icLinkBrackets, 20, 21, 0},
      {refalrts::icSetRes, 0, 0, 12},
      {refalrts::icSpliceEVar, 0, 0, 9},
      {refalrts::icSpliceTile, 28, 28, 0},
      {refalrts::icSpliceTile, 15, 15, 0},
      {refalrts::icSpliceTile, 27, 27, 0},
      {refalrts::icTrash, 0, 0, 13},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +20, 0, 0},
      // ( e.idx ) ( # Short s.idx s.idx ) e.idx
      // </0 & ResolveOpts/4 (/7 e.Description#1/5 )/8 (/11 # Short/13 s.Num#1/14 s.Short#1/15 )/12 e.ArgsTail#1/2 >/1
      {refalrts::icSave, 0, 37, 2},
      {refalrts::icBracketLeftSave, 0, 9, 37},
      {refalrts::icIdentLeftSave, 13, 3, 9},
      // closed e.Description#1 as range 5
      // closed e.ArgsTail#1 as range 37(2)
      {refalrts::icsVarLeft, 0, 14, 9},
      {refalrts::icsVarLeft, 0, 15, 9},
      {refalrts::icEmpty, 0, 0, 9},
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/11 HalfReuse: & Error/13 AsIs: s.Num#1/14 } # UnknownShortOption/16 Tile{ AsIs: s.Short#1/15 AsIs: )/12 } Tile{ AsIs: </0 AsIs: & ResolveOpts/4 AsIs: (/7 AsIs: e.Description#1/5 AsIs: )/8 } Tile{ AsIs: e.ArgsTail#1/37(2) } Tile{ AsIs: >/1 ]] }
      {refalrts::icAllocIdent, 0, 2, 16},
      {refalrts::icReinitFunc, 0, 0, 13},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 8, 0},
      {refalrts::icLinkBrackets, 11, 12, 0},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icSpliceEVar, 0, 0, 37},
      {refalrts::icSpliceTile, 0, 8, 0},
      {refalrts::icSpliceTile, 15, 12, 0},
      {refalrts::icSpliceTile, 16, 16, 0},
      {refalrts::icSpliceTile, 11, 14, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +23, 0, 0},
      // ( e.idx ) ( # Short s.idx s.idx e.idx ) e.idx
      // </0 & ResolveOpts/4 (/7 e.Description#1/5 )/8 (/11 # Short/13 s.Num#1/14 s.Short#1/15 e.OptTail#1/9 )/12 e.ArgsTail#1/2 >/1
      {refalrts::icSave, 0, 37, 2},
      {refalrts::icBracketLeftSave, 0, 9, 37},
      {refalrts::icIdentLeftSave, 13, 3, 9},
      // closed e.Description#1 as range 5
      // closed e.ArgsTail#1 as range 37(2)
      {refalrts::icsVarLeft, 0, 14, 9},
      {refalrts::icsVarLeft, 0, 15, 9},
      // closed e.OptTail#1 as range 9
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } (/16 & Error/17 s.Num#1/14/18 # UnknownShortOption/19 Tile{ AsIs: s.Short#1/15 } )/20 Tile{ AsIs: </0 AsIs: & ResolveOpts/4 AsIs: (/7 AsIs: e.Description#1/5 AsIs: )/8 AsIs: (/11 AsIs: # Short/13 AsIs: s.Num#1/14 } Tile{ AsIs: e.OptTail#1/9 } Tile{ AsIs: )/12 AsIs: e.ArgsTail#1/37(2) AsIs: >/1 ]] }
      {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 16},
      {refalrts::icAllocFunc, 0, 0, 17},
      {refalrts::icCopySTVar, 18, 14, 0},
      {refalrts::icAllocIdent, 0, 2, 19},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 20},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 11, 12, 0},
      {refalrts::icLinkBrackets, 7, 8, 0},
      {refalrts::icLinkBrackets, 16, 20, 0},
      {refalrts::icSetRes, 0, 0, 12},
      {refalrts::icSpliceEVar, 0, 0, 9},
      {refalrts::icSpliceTile, 0, 14, 0},
      {refalrts::icSpliceTile, 20, 20, 0},
      {refalrts::icSpliceTile, 15, 15, 0},
      {refalrts::icSpliceTile, 16, 19, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +15, 0, 0},
      // ( e.idx ) ( # Word s.idx e.idx ) e.idx
      // </0 & ResolveOpts/4 (/7 e.Description#1/5 )/8 (/11 # Word/13 s.Num#1/14 e.File#1/9 )/12 e.ArgsTail#1/2 >/1
      {refalrts::icSave, 0, 37, 2},
      {refalrts::icBracketLeftSave, 0, 9, 37},
      {refalrts::icIdentLeftSave, 13, 1, 9},
      // closed e.Description#1 as range 5
      // closed e.ArgsTail#1 as range 37(2)
      {refalrts::icsVarLeft, 0, 14, 9},
      // closed e.File#1 as range 9
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/11 Reuse: # FILE/13 AsIs: s.Num#1/14 AsIs: e.File#1/9 AsIs: )/12 } Tile{ AsIs: </0 AsIs: & ResolveOpts/4 AsIs: (/7 AsIs: e.Description#1/5 AsIs: )/8 } Tile{ AsIs: e.ArgsTail#1/37(2) } Tile{ AsIs: >/1 ]] }
      {refalrts::icUpdateIdent, 0, 0, 13},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 8, 0},
      {refalrts::icLinkBrackets, 11, 12, 0},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icSpliceEVar, 0, 0, 37},
      {refalrts::icSpliceTile, 0, 8, 0},
      {refalrts::icSpliceTile, 11, 12, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      // ( e.idx )
      // </0 & ResolveOpts/4 (/7 e.Description#1/5 )/8 >/1
      {refalrts::icEmpty, 0, 0, 2},
      // closed e.Description#1 as range 5
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & ResolveOpts/4 (/7 e.Description#1/5 )/8 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ ]] }
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_ResolveOpts

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction descr_ResolveOpts(
  "ResolveOpts",
  scope_ResolveOpts::raa,
  scope_ResolveOpts::functions,
  scope_ResolveOpts::idents,
  scope_ResolveOpts::numbers,
  scope_ResolveOpts::strings
);
refalrts::RefalFunction& ResolveOpts = descr_ResolveOpts;

} // unnamed namespace

#else
static refalrts::FnResult func_ResolveOpts(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 45 elems
  refalrts::Iter context[45];
  refalrts::zeros( context, 45 );
  //FAST GEN: e.$
  //GLOBAL GEN: ( e.$ ) e.$
  // </0 & ResolveOpts/4 (/7 e.idxB#0/5 )/8 e.idxT#0/2 >/1
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
    // ( e.idx ) ( # Long-Param s.idx ( e.idx ) e.idx ) e.idx
    // </0 & ResolveOpts/4 (/7 e.Descrs-B#1/19 (/23 s.Tag#1/25 s.HasArg#1/26 e.Opts-B#1/27 (/31 e.Long#1/33 )/32 e.Opts-E#1/21 )/24 e.Descrs-E#1/5 )/8 (/11 # Long-Param/13 s.Num#1/14 (/17 e.Long#1/15 )/18 e.Param#1/9 )/12 e.ArgsTail#1/2 >/1
    context[37] = context[2];
    context[38] = context[3];
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_left( context[9], context[10], context[37], context[38] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    context[13] = refalrts::ident_left(  & ident_Long_Param<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    // closed e.ArgsTail#1 as range 37(2)
    if( ! refalrts::svar_left( context[14], context[9], context[10] ) )
      continue;
    context[15] = 0;
    context[16] = 0;
    context[17] = refalrts::brackets_left( context[15], context[16], context[9], context[10] );
    if( ! context[17] )
      continue;
    refalrts::bracket_pointers(context[17], context[18]);
    // closed e.Long#1 as range 15
    // closed e.Param#1 as range 9
    context[39] = context[5];
    context[40] = context[6];
    context[19] = 0;
    context[20] = 0;
    refalrts::start_e_loop();
    do {
      context[41] = context[39];
      context[42] = context[40];
      context[21] = 0;
      context[22] = 0;
      context[23] = refalrts::brackets_left( context[21], context[22], context[41], context[42] );
      if( ! context[23] )
        continue;
      refalrts::bracket_pointers(context[23], context[24]);
      // closed e.Descrs-E#1 as range 41(5)
      if( ! refalrts::svar_left( context[25], context[21], context[22] ) )
        continue;
      if( ! refalrts::svar_left( context[26], context[21], context[22] ) )
        continue;
      context[27] = 0;
      context[28] = 0;
      refalrts::start_e_loop();
      do {
        context[43] = context[21];
        context[44] = context[22];
        context[29] = 0;
        context[30] = 0;
        context[31] = refalrts::brackets_left( context[29], context[30], context[43], context[44] );
        if( ! context[31] )
          continue;
        refalrts::bracket_pointers(context[31], context[32]);
        if( ! refalrts::repeated_evar_left( context[33], context[34], context[15], context[16], context[29], context[30] ) )
          continue;
        if( ! refalrts::empty_seq( context[29], context[30] ) )
          continue;
        // closed e.Opts-E#1 as range 43(21)

        refalrts::reset_allocator();
        //TRASH: {REMOVED TILE} s.Num#1/14 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & ResolveOpts-LongParam/4 AsIs: (/7 AsIs: e.Descrs-B#1/19 AsIs: (/23 AsIs: s.Tag#1/25 AsIs: s.HasArg#1/26 AsIs: e.Opts-B#1/27 AsIs: (/31 AsIs: e.Long#1/33 AsIs: )/32 AsIs: e.Opts-E#1/43(21) AsIs: )/24 AsIs: e.Descrs-E#1/41(5) AsIs: )/8 HalfReuse: s.Num1 #14/11 HalfReuse: s.Tag1 #25/13 } s.HasArg#1/26/35 Tile{ AsIs: (/17 } Tile{ AsIs: e.Long#1/15 } )/36 Tile{ HalfReuse: (/18 AsIs: e.Param#1/9 AsIs: )/12 AsIs: e.ArgsTail#1/37(2) AsIs: >/1 ]] }
        if (! refalrts::copy_stvar(context[35], context[26]))
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_bracket( context[36] ) )
          return refalrts::cNoMemory;
        refalrts::update_name( context[4], & ResolveOpts_LongParam );
        refalrts::reinit_svar( context[11], context[14] );
        refalrts::reinit_svar( context[13], context[25] );
        refalrts::reinit_open_bracket( context[18] );
        refalrts::push_stack( context[1] );
        refalrts::push_stack( context[0] );
        refalrts::link_brackets( context[18], context[12] );
        refalrts::link_brackets( context[17], context[36] );
        refalrts::link_brackets( context[7], context[8] );
        refalrts::link_brackets( context[23], context[24] );
        refalrts::link_brackets( context[31], context[32] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[18];
        res = refalrts::splice_evar( res, context[36], context[36] );
        res = refalrts::splice_evar( res, context[15], context[16] );
        res = refalrts::splice_evar( res, context[17], context[17] );
        res = refalrts::splice_evar( res, context[35], context[35] );
        refalrts::use( res );
        refalrts::splice_to_freelist_open( context[13], res );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[27], context[28], context[21], context[22] ) );
    } while ( refalrts::open_evar_advance( context[19], context[20], context[39], context[40] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) ( # Long-Param s.idx ( e.idx ) e.idx ) e.idx
    // </0 & ResolveOpts/4 (/7 e.Description#1/5 )/8 (/11 # Long-Param/13 s.Num#1/14 (/17 e.Long#1/15 )/18 e.Param#1/9 )/12 e.ArgsTail#1/2 >/1
    context[37] = context[2];
    context[38] = context[3];
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_left( context[9], context[10], context[37], context[38] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    context[13] = refalrts::ident_left(  & ident_Long_Param<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    // closed e.Description#1 as range 5
    // closed e.ArgsTail#1 as range 37(2)
    if( ! refalrts::svar_left( context[14], context[9], context[10] ) )
      continue;
    context[15] = 0;
    context[16] = 0;
    context[17] = refalrts::brackets_left( context[15], context[16], context[9], context[10] );
    if( ! context[17] )
      continue;
    refalrts::bracket_pointers(context[17], context[18]);
    // closed e.Long#1 as range 15
    // closed e.Param#1 as range 9

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.Param#1/9 )/12 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/11 HalfReuse: & Error/13 AsIs: s.Num#1/14 HalfReuse: # UnknownLongOption/17 AsIs: e.Long#1/15 AsIs: )/18 } Tile{ AsIs: </0 AsIs: & ResolveOpts/4 AsIs: (/7 AsIs: e.Description#1/5 AsIs: )/8 } Tile{ AsIs: e.ArgsTail#1/37(2) } Tile{ AsIs: >/1 ]] }
    refalrts::reinit_name( context[13], & Error );
    refalrts::reinit_ident( context[17], & ident_UnknownLongOption<int>::name );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[11], context[18] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[37], context[38] );
    res = refalrts::splice_evar( res, context[0], context[8] );
    res = refalrts::splice_evar( res, context[11], context[18] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) ( # Long s.idx e.idx ) e.idx
    // </0 & ResolveOpts/4 (/7 e.Descrs-B#1/15 (/19 s.Tag#1/21 s.HasArg#1/22 e.Opts-B#1/23 (/27 e.Long#1/29 )/28 e.Opts-E#1/17 )/20 e.Descrs-E#1/5 )/8 (/11 # Long/13 s.Num#1/14 e.Long#1/9 )/12 e.ArgsTail#1/2 >/1
    context[37] = context[2];
    context[38] = context[3];
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_left( context[9], context[10], context[37], context[38] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    context[13] = refalrts::ident_left(  & ident_Long<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    // closed e.ArgsTail#1 as range 37(2)
    if( ! refalrts::svar_left( context[14], context[9], context[10] ) )
      continue;
    // closed e.Long#1 as range 9
    context[39] = context[5];
    context[40] = context[6];
    context[15] = 0;
    context[16] = 0;
    refalrts::start_e_loop();
    do {
      context[41] = context[39];
      context[42] = context[40];
      context[17] = 0;
      context[18] = 0;
      context[19] = refalrts::brackets_left( context[17], context[18], context[41], context[42] );
      if( ! context[19] )
        continue;
      refalrts::bracket_pointers(context[19], context[20]);
      // closed e.Descrs-E#1 as range 41(5)
      if( ! refalrts::svar_left( context[21], context[17], context[18] ) )
        continue;
      if( ! refalrts::svar_left( context[22], context[17], context[18] ) )
        continue;
      context[23] = 0;
      context[24] = 0;
      refalrts::start_e_loop();
      do {
        context[43] = context[17];
        context[44] = context[18];
        context[25] = 0;
        context[26] = 0;
        context[27] = refalrts::brackets_left( context[25], context[26], context[43], context[44] );
        if( ! context[27] )
          continue;
        refalrts::bracket_pointers(context[27], context[28]);
        if( ! refalrts::repeated_evar_left( context[29], context[30], context[9], context[10], context[25], context[26] ) )
          continue;
        if( ! refalrts::empty_seq( context[25], context[26] ) )
          continue;
        // closed e.Opts-E#1 as range 43(17)

        refalrts::reset_allocator();
        //TRASH: {REMOVED TILE} s.Num#1/14 {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & ResolveOpts-Long/4 AsIs: (/7 AsIs: e.Descrs-B#1/15 AsIs: (/19 AsIs: s.Tag#1/21 AsIs: s.HasArg#1/22 AsIs: e.Opts-B#1/23 AsIs: (/27 AsIs: e.Long#1/29 AsIs: )/28 AsIs: e.Opts-E#1/43(17) AsIs: )/20 AsIs: e.Descrs-E#1/41(5) AsIs: )/8 HalfReuse: s.Num1 #14/11 HalfReuse: s.Tag1 #21/13 } s.HasArg#1/22/31 (/32 Tile{ AsIs: e.Long#1/9 } Tile{ AsIs: )/12 AsIs: e.ArgsTail#1/37(2) AsIs: >/1 ]] }
        if (! refalrts::copy_stvar(context[31], context[22]))
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_open_bracket( context[32] ) )
          return refalrts::cNoMemory;
        refalrts::update_name( context[4], & ResolveOpts_Long );
        refalrts::reinit_svar( context[11], context[14] );
        refalrts::reinit_svar( context[13], context[21] );
        refalrts::push_stack( context[1] );
        refalrts::push_stack( context[0] );
        refalrts::link_brackets( context[32], context[12] );
        refalrts::link_brackets( context[7], context[8] );
        refalrts::link_brackets( context[19], context[20] );
        refalrts::link_brackets( context[27], context[28] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[12];
        res = refalrts::splice_evar( res, context[9], context[10] );
        res = refalrts::splice_evar( res, context[31], context[32] );
        refalrts::use( res );
        refalrts::splice_to_freelist_open( context[13], res );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[23], context[24], context[17], context[18] ) );
    } while ( refalrts::open_evar_advance( context[15], context[16], context[39], context[40] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) ( # Long s.idx e.idx ) e.idx
    // </0 & ResolveOpts/4 (/7 e.Description#1/5 )/8 (/11 # Long/13 s.Num#1/14 e.Long#1/9 )/12 e.ArgsTail#1/2 >/1
    context[37] = context[2];
    context[38] = context[3];
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_left( context[9], context[10], context[37], context[38] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    context[13] = refalrts::ident_left(  & ident_Long<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    // closed e.Description#1 as range 5
    // closed e.ArgsTail#1 as range 37(2)
    if( ! refalrts::svar_left( context[14], context[9], context[10] ) )
      continue;
    // closed e.Long#1 as range 9

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/11 HalfReuse: & Error/13 AsIs: s.Num#1/14 } # UnknownLongOption/15 Tile{ AsIs: e.Long#1/9 } Tile{ AsIs: )/12 } Tile{ AsIs: </0 AsIs: & ResolveOpts/4 AsIs: (/7 AsIs: e.Description#1/5 AsIs: )/8 } Tile{ AsIs: e.ArgsTail#1/37(2) } Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_ident( context[15], & ident_UnknownLongOption<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::reinit_name( context[13], & Error );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[37], context[38] );
    res = refalrts::splice_evar( res, context[0], context[8] );
    res = refalrts::splice_evar( res, context[12], context[12] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[15], context[15] );
    res = refalrts::splice_evar( res, context[11], context[14] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) ( # Short s.idx s.idx e.idx ) e.idx
    // </0 & ResolveOpts/4 (/7 e.Descrs-B#1/16 (/20 s.Tag#1/22 s.HasArg#1/23 e.Opts-B#1/24 s.Short#1/26 e.Opts-E#1/18 )/21 e.Descrs-E#1/5 )/8 (/11 # Short/13 s.Num#1/14 s.Short#1/15 e.OptTail#1/9 )/12 e.ArgsTail#1/2 >/1
    context[37] = context[2];
    context[38] = context[3];
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_left( context[9], context[10], context[37], context[38] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    context[13] = refalrts::ident_left(  & ident_Short<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    // closed e.ArgsTail#1 as range 37(2)
    if( ! refalrts::svar_left( context[14], context[9], context[10] ) )
      continue;
    if( ! refalrts::svar_left( context[15], context[9], context[10] ) )
      continue;
    // closed e.OptTail#1 as range 9
    context[39] = context[5];
    context[40] = context[6];
    context[16] = 0;
    context[17] = 0;
    refalrts::start_e_loop();
    do {
      context[41] = context[39];
      context[42] = context[40];
      context[18] = 0;
      context[19] = 0;
      context[20] = refalrts::brackets_left( context[18], context[19], context[41], context[42] );
      if( ! context[20] )
        continue;
      refalrts::bracket_pointers(context[20], context[21]);
      // closed e.Descrs-E#1 as range 41(5)
      if( ! refalrts::svar_left( context[22], context[18], context[19] ) )
        continue;
      if( ! refalrts::svar_left( context[23], context[18], context[19] ) )
        continue;
      context[24] = 0;
      context[25] = 0;
      refalrts::start_e_loop();
      do {
        context[43] = context[18];
        context[44] = context[19];
        if( ! refalrts::repeated_stvar_left( context[26], context[15], context[43], context[44] ) )
          continue;
        // closed e.Opts-E#1 as range 43(18)

        refalrts::reset_allocator();
        //TRASH: {REMOVED TILE} s.Num#1/14 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & ResolveOpts-Short/4 AsIs: (/7 AsIs: e.Descrs-B#1/16 AsIs: (/20 AsIs: s.Tag#1/22 AsIs: s.HasArg#1/23 AsIs: e.Opts-B#1/24 AsIs: s.Short#1/26 AsIs: e.Opts-E#1/43(18) AsIs: )/21 AsIs: e.Descrs-E#1/41(5) AsIs: )/8 HalfReuse: s.Num1 #14/11 HalfReuse: s.Tag1 #22/13 } s.HasArg#1/23/27 Tile{ AsIs: s.Short#1/15 } (/28 Tile{ AsIs: e.OptTail#1/9 } Tile{ AsIs: )/12 AsIs: e.ArgsTail#1/37(2) AsIs: >/1 ]] }
        if (! refalrts::copy_stvar(context[27], context[23]))
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_open_bracket( context[28] ) )
          return refalrts::cNoMemory;
        refalrts::update_name( context[4], & ResolveOpts_Short );
        refalrts::reinit_svar( context[11], context[14] );
        refalrts::reinit_svar( context[13], context[22] );
        refalrts::push_stack( context[1] );
        refalrts::push_stack( context[0] );
        refalrts::link_brackets( context[28], context[12] );
        refalrts::link_brackets( context[7], context[8] );
        refalrts::link_brackets( context[20], context[21] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[12];
        res = refalrts::splice_evar( res, context[9], context[10] );
        res = refalrts::splice_evar( res, context[28], context[28] );
        res = refalrts::splice_evar( res, context[15], context[15] );
        res = refalrts::splice_evar( res, context[27], context[27] );
        refalrts::use( res );
        refalrts::splice_to_freelist_open( context[13], res );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[24], context[25], context[18], context[19] ) );
    } while ( refalrts::open_evar_advance( context[16], context[17], context[39], context[40] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) ( # Short s.idx s.idx ) e.idx
    // </0 & ResolveOpts/4 (/7 e.Description#1/5 )/8 (/11 # Short/13 s.Num#1/14 s.Short#1/15 )/12 e.ArgsTail#1/2 >/1
    context[37] = context[2];
    context[38] = context[3];
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_left( context[9], context[10], context[37], context[38] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    context[13] = refalrts::ident_left(  & ident_Short<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    // closed e.Description#1 as range 5
    // closed e.ArgsTail#1 as range 37(2)
    if( ! refalrts::svar_left( context[14], context[9], context[10] ) )
      continue;
    if( ! refalrts::svar_left( context[15], context[9], context[10] ) )
      continue;
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/11 HalfReuse: & Error/13 AsIs: s.Num#1/14 } # UnknownShortOption/16 Tile{ AsIs: s.Short#1/15 AsIs: )/12 } Tile{ AsIs: </0 AsIs: & ResolveOpts/4 AsIs: (/7 AsIs: e.Description#1/5 AsIs: )/8 } Tile{ AsIs: e.ArgsTail#1/37(2) } Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_ident( context[16], & ident_UnknownShortOption<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::reinit_name( context[13], & Error );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[37], context[38] );
    res = refalrts::splice_evar( res, context[0], context[8] );
    res = refalrts::splice_evar( res, context[15], context[12] );
    res = refalrts::splice_evar( res, context[16], context[16] );
    res = refalrts::splice_evar( res, context[11], context[14] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) ( # Short s.idx s.idx e.idx ) e.idx
    // </0 & ResolveOpts/4 (/7 e.Description#1/5 )/8 (/11 # Short/13 s.Num#1/14 s.Short#1/15 e.OptTail#1/9 )/12 e.ArgsTail#1/2 >/1
    context[37] = context[2];
    context[38] = context[3];
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_left( context[9], context[10], context[37], context[38] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    context[13] = refalrts::ident_left(  & ident_Short<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    // closed e.Description#1 as range 5
    // closed e.ArgsTail#1 as range 37(2)
    if( ! refalrts::svar_left( context[14], context[9], context[10] ) )
      continue;
    if( ! refalrts::svar_left( context[15], context[9], context[10] ) )
      continue;
    // closed e.OptTail#1 as range 9

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } (/16 & Error/17 s.Num#1/14/18 # UnknownShortOption/19 Tile{ AsIs: s.Short#1/15 } )/20 Tile{ AsIs: </0 AsIs: & ResolveOpts/4 AsIs: (/7 AsIs: e.Description#1/5 AsIs: )/8 AsIs: (/11 AsIs: # Short/13 AsIs: s.Num#1/14 } Tile{ AsIs: e.OptTail#1/9 } Tile{ AsIs: )/12 AsIs: e.ArgsTail#1/37(2) AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_bracket( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[17], & Error ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[18], context[14]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[19], & ident_UnknownShortOption<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[20] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[16], context[20] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[12];
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[0], context[14] );
    res = refalrts::splice_evar( res, context[20], context[20] );
    res = refalrts::splice_evar( res, context[15], context[15] );
    res = refalrts::splice_evar( res, context[16], context[19] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) ( # Word s.idx e.idx ) e.idx
    // </0 & ResolveOpts/4 (/7 e.Description#1/5 )/8 (/11 # Word/13 s.Num#1/14 e.File#1/9 )/12 e.ArgsTail#1/2 >/1
    context[37] = context[2];
    context[38] = context[3];
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_left( context[9], context[10], context[37], context[38] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    context[13] = refalrts::ident_left(  & ident_Word<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    // closed e.Description#1 as range 5
    // closed e.ArgsTail#1 as range 37(2)
    if( ! refalrts::svar_left( context[14], context[9], context[10] ) )
      continue;
    // closed e.File#1 as range 9

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/11 Reuse: # FILE/13 AsIs: s.Num#1/14 AsIs: e.File#1/9 AsIs: )/12 } Tile{ AsIs: </0 AsIs: & ResolveOpts/4 AsIs: (/7 AsIs: e.Description#1/5 AsIs: )/8 } Tile{ AsIs: e.ArgsTail#1/37(2) } Tile{ AsIs: >/1 ]] }
    refalrts::update_ident( context[13], & ident_FILE<int>::name );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[37], context[38] );
    res = refalrts::splice_evar( res, context[0], context[8] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );

  // ( e.idx )
  // </0 & ResolveOpts/4 (/7 e.Description#1/5 )/8 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Description#1 as range 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & ResolveOpts/4 (/7 e.Description#1/5 )/8 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalFunction descr_ResolveOpts(func_ResolveOpts, "ResolveOpts");
refalrts::RefalFunction& ResolveOpts = descr_ResolveOpts;

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_ResolveOpts_LongParam {
    static refalrts::RefalFunction *functions[] = {
      & ResolveOpts,
      & Error
    };
    static const refalrts::RefalIdentifier idents[] = {
      & ident_UnexpectedLongOptionParam<int>::name,
      & ident_None<int>::name,
      & ident_Optional<int>::name,
      & ident_Required<int>::name
    };
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icReserveBacktrackStack, 2, 0, 0},
      {refalrts::icIssueMemory, 23, 0, 0},
      //FAST GEN: ( e.$ ) s.$ s.$ s.$ ( e.$ ) ( e.$ ) e.$
      //GLOBAL GEN: ( e.$ ) s.$ s.$ s.$ ( e.$ ) ( e.$ ) e.$
      // </0 & ResolveOpts-LongParam/4 (/7 e.idxB#0/5 )/8 s.idxT#0/9 s.idxTV#0/10 s.idxTVV#0/11 (/14 e.idxTVVVB#0/12 )/15 (/18 e.idxTVVVTB#0/16 )/19 e.idxTVVVTT#0/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icBracketLeftSave, 0, 5, 2},
      // closed e.idxB#0 as range 5
      {refalrts::icsVarLeft, 0, 9, 2},
      {refalrts::icsVarLeft, 0, 10, 2},
      {refalrts::icsVarLeft, 0, 11, 2},
      {refalrts::icBracketLeftSave, 0, 12, 2},
      {refalrts::icBracketLeftSave, 0, 16, 2},
      // closed e.idxTVVVB#0 as range 12
      // closed e.idxTVVVTB#0 as range 16
      // closed e.idxTVVVTT#0 as range 2
      {refalrts::icOnFailGoTo, +16, 0, 0},
      // ( e.idx ) s.idx s.idx # Required ( e.idx ) ( e.idx ) e.idx
      // </0 & ResolveOpts-LongParam/4 (/7 e.Description#1/5 )/8 s.Num#1/9 s.Tag#1/10 # Required/11 (/14 e.Long#1/12 )/15 (/18 e.Param#1/16 )/19 e.ArgsTail#1/2 >/1
      {refalrts::icIdentTerm, 0, 3, 11},
      // closed e.Description#1 as range 5
      // closed e.Long#1 as range 12
      // closed e.Param#1 as range 16
      // closed e.ArgsTail#1 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} s.Num#1/9 s.Tag#1/10 # Required/11 {REMOVED TILE} e.Long#1/12 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/14 } Tile{ HalfReuse: s.Tag1 #10/15 HalfReuse: s.Num1 #9/18 AsIs: e.Param#1/16 AsIs: )/19 } Tile{ AsIs: </0 Reuse: & ResolveOpts/4 AsIs: (/7 AsIs: e.Description#1/5 AsIs: )/8 } Tile{ AsIs: e.ArgsTail#1/2 } Tile{ AsIs: >/1 ]] }
      {refalrts::icReinitSVar, 0, 10, 15},
      {refalrts::icReinitSVar, 0, 9, 18},
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 8, 0},
      {refalrts::icLinkBrackets, 14, 19, 0},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icSpliceEVar, 0, 0, 2},
      {refalrts::icSpliceTile, 0, 8, 0},
      {refalrts::icSpliceTile, 15, 19, 0},
      {refalrts::icSpliceTile, 14, 14, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +16, 0, 0},
      // ( e.idx ) s.idx s.idx # Optional ( e.idx ) ( e.idx ) e.idx
      // </0 & ResolveOpts-LongParam/4 (/7 e.Description#1/5 )/8 s.Num#1/9 s.Tag#1/10 # Optional/11 (/14 e.Long#1/12 )/15 (/18 e.Param#1/16 )/19 e.ArgsTail#1/2 >/1
      {refalrts::icIdentTerm, 0, 2, 11},
      // closed e.Description#1 as range 5
      // closed e.Long#1 as range 12
      // closed e.Param#1 as range 16
      // closed e.ArgsTail#1 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} s.Num#1/9 s.Tag#1/10 # Optional/11 {REMOVED TILE} e.Long#1/12 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/14 } Tile{ HalfReuse: s.Tag1 #10/15 HalfReuse: s.Num1 #9/18 AsIs: e.Param#1/16 AsIs: )/19 } Tile{ AsIs: </0 Reuse: & ResolveOpts/4 AsIs: (/7 AsIs: e.Description#1/5 AsIs: )/8 } Tile{ AsIs: e.ArgsTail#1/2 } Tile{ AsIs: >/1 ]] }
      {refalrts::icReinitSVar, 0, 10, 15},
      {refalrts::icReinitSVar, 0, 9, 18},
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 8, 0},
      {refalrts::icLinkBrackets, 14, 19, 0},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icSpliceEVar, 0, 0, 2},
      {refalrts::icSpliceTile, 0, 8, 0},
      {refalrts::icSpliceTile, 15, 19, 0},
      {refalrts::icSpliceTile, 14, 14, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      // ( e.idx ) s.idx s.idx # None ( e.idx ) ( e.idx ) e.idx
      // </0 & ResolveOpts-LongParam/4 (/7 e.Description#1/5 )/8 s.Num#1/9 s.Tag#1/10 # None/11 (/14 e.Long#1/12 )/15 (/18 e.Param#1/16 )/19 e.ArgsTail#1/2 >/1
      {refalrts::icIdentTerm, 0, 1, 11},
      // closed e.Description#1 as range 5
      // closed e.Long#1 as range 12
      // closed e.Param#1 as range 16
      // closed e.ArgsTail#1 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Tag#1/10 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } (/20 & Error/21 Tile{ AsIs: s.Num#1/9 } # UnexpectedLongOptionParam/22 Tile{ AsIs: (/18 } Tile{ HalfReuse: '-'/11 HalfReuse: '-'/14 AsIs: e.Long#1/12 AsIs: )/15 } Tile{ AsIs: e.Param#1/16 } Tile{ AsIs: )/19 } Tile{ AsIs: </0 Reuse: & ResolveOpts/4 AsIs: (/7 AsIs: e.Description#1/5 AsIs: )/8 } Tile{ AsIs: e.ArgsTail#1/2 } Tile{ AsIs: >/1 ]] }
      {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 20},
      {refalrts::icAllocFunc, 0, 1, 21},
      {refalrts::icAllocIdent, 0, 0, 22},
      {refalrts::icReinitChar, 0, '-', 11},
      {refalrts::icReinitChar, 0, '-', 14},
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 8, 0},
      {refalrts::icLinkBrackets, 20, 19, 0},
      {refalrts::icLinkBrackets, 18, 15, 0},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icSpliceEVar, 0, 0, 2},
      {refalrts::icSpliceTile, 0, 8, 0},
      {refalrts::icSpliceTile, 19, 19, 0},
      {refalrts::icSpliceEVar, 0, 0, 16},
      {refalrts::icSpliceTile, 11, 15, 0},
      {refalrts::icSpliceTile, 18, 18, 0},
      {refalrts::icSpliceTile, 22, 22, 0},
      {refalrts::icSpliceTile, 9, 9, 0},
      {refalrts::icSpliceTile, 20, 21, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_ResolveOpts_LongParam

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction descr_ResolveOpts_LongParam(
  "ResolveOpts-LongParam",
  scope_ResolveOpts_LongParam::raa,
  scope_ResolveOpts_LongParam::functions,
  scope_ResolveOpts_LongParam::idents,
  scope_ResolveOpts_LongParam::numbers,
  scope_ResolveOpts_LongParam::strings
);
refalrts::RefalFunction& ResolveOpts_LongParam = descr_ResolveOpts_LongParam;

} // unnamed namespace

#else
static refalrts::FnResult func_ResolveOpts_LongParam(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 23 elems
  refalrts::Iter context[23];
  refalrts::zeros( context, 23 );
  //FAST GEN: ( e.$ ) s.$ s.$ s.$ ( e.$ ) ( e.$ ) e.$
  //GLOBAL GEN: ( e.$ ) s.$ s.$ s.$ ( e.$ ) ( e.$ ) e.$
  // </0 & ResolveOpts-LongParam/4 (/7 e.idxB#0/5 )/8 s.idxT#0/9 s.idxTV#0/10 s.idxTVV#0/11 (/14 e.idxTVVVB#0/12 )/15 (/18 e.idxTVVVTB#0/16 )/19 e.idxTVVVTT#0/2 >/1
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
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
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
  context[16] = 0;
  context[17] = 0;
  context[18] = refalrts::brackets_left( context[16], context[17], context[2], context[3] );
  if( ! context[18] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[18], context[19]);
  // closed e.idxTVVVB#0 as range 12
  // closed e.idxTVVVTB#0 as range 16
  // closed e.idxTVVVTT#0 as range 2
  do {
    refalrts::start_sentence();
    // ( e.idx ) s.idx s.idx # Required ( e.idx ) ( e.idx ) e.idx
    // </0 & ResolveOpts-LongParam/4 (/7 e.Description#1/5 )/8 s.Num#1/9 s.Tag#1/10 # Required/11 (/14 e.Long#1/12 )/15 (/18 e.Param#1/16 )/19 e.ArgsTail#1/2 >/1
    if( ! refalrts::ident_term(  & ident_Required<int>::name, context[11] ) )
      continue;
    // closed e.Description#1 as range 5
    // closed e.Long#1 as range 12
    // closed e.Param#1 as range 16
    // closed e.ArgsTail#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} s.Num#1/9 s.Tag#1/10 # Required/11 {REMOVED TILE} e.Long#1/12 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/14 } Tile{ HalfReuse: s.Tag1 #10/15 HalfReuse: s.Num1 #9/18 AsIs: e.Param#1/16 AsIs: )/19 } Tile{ AsIs: </0 Reuse: & ResolveOpts/4 AsIs: (/7 AsIs: e.Description#1/5 AsIs: )/8 } Tile{ AsIs: e.ArgsTail#1/2 } Tile{ AsIs: >/1 ]] }
    refalrts::reinit_svar( context[15], context[10] );
    refalrts::reinit_svar( context[18], context[9] );
    refalrts::update_name( context[4], & ResolveOpts );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[14], context[19] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[0], context[8] );
    res = refalrts::splice_evar( res, context[15], context[19] );
    res = refalrts::splice_evar( res, context[14], context[14] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) s.idx s.idx # Optional ( e.idx ) ( e.idx ) e.idx
    // </0 & ResolveOpts-LongParam/4 (/7 e.Description#1/5 )/8 s.Num#1/9 s.Tag#1/10 # Optional/11 (/14 e.Long#1/12 )/15 (/18 e.Param#1/16 )/19 e.ArgsTail#1/2 >/1
    if( ! refalrts::ident_term(  & ident_Optional<int>::name, context[11] ) )
      continue;
    // closed e.Description#1 as range 5
    // closed e.Long#1 as range 12
    // closed e.Param#1 as range 16
    // closed e.ArgsTail#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} s.Num#1/9 s.Tag#1/10 # Optional/11 {REMOVED TILE} e.Long#1/12 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/14 } Tile{ HalfReuse: s.Tag1 #10/15 HalfReuse: s.Num1 #9/18 AsIs: e.Param#1/16 AsIs: )/19 } Tile{ AsIs: </0 Reuse: & ResolveOpts/4 AsIs: (/7 AsIs: e.Description#1/5 AsIs: )/8 } Tile{ AsIs: e.ArgsTail#1/2 } Tile{ AsIs: >/1 ]] }
    refalrts::reinit_svar( context[15], context[10] );
    refalrts::reinit_svar( context[18], context[9] );
    refalrts::update_name( context[4], & ResolveOpts );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[14], context[19] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[0], context[8] );
    res = refalrts::splice_evar( res, context[15], context[19] );
    res = refalrts::splice_evar( res, context[14], context[14] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );

  // ( e.idx ) s.idx s.idx # None ( e.idx ) ( e.idx ) e.idx
  // </0 & ResolveOpts-LongParam/4 (/7 e.Description#1/5 )/8 s.Num#1/9 s.Tag#1/10 # None/11 (/14 e.Long#1/12 )/15 (/18 e.Param#1/16 )/19 e.ArgsTail#1/2 >/1
  if( ! refalrts::ident_term(  & ident_None<int>::name, context[11] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Description#1 as range 5
  // closed e.Long#1 as range 12
  // closed e.Param#1 as range 16
  // closed e.ArgsTail#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Tag#1/10 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } (/20 & Error/21 Tile{ AsIs: s.Num#1/9 } # UnexpectedLongOptionParam/22 Tile{ AsIs: (/18 } Tile{ HalfReuse: '-'/11 HalfReuse: '-'/14 AsIs: e.Long#1/12 AsIs: )/15 } Tile{ AsIs: e.Param#1/16 } Tile{ AsIs: )/19 } Tile{ AsIs: </0 Reuse: & ResolveOpts/4 AsIs: (/7 AsIs: e.Description#1/5 AsIs: )/8 } Tile{ AsIs: e.ArgsTail#1/2 } Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_bracket( context[20] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[21], & Error ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[22], & ident_UnexpectedLongOptionParam<int>::name ) )
    return refalrts::cNoMemory;
  refalrts::reinit_char( context[11], '-' );
  refalrts::reinit_char( context[14], '-' );
  refalrts::update_name( context[4], & ResolveOpts );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[20], context[19] );
  refalrts::link_brackets( context[18], context[15] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[0], context[8] );
  res = refalrts::splice_evar( res, context[19], context[19] );
  res = refalrts::splice_evar( res, context[16], context[17] );
  res = refalrts::splice_evar( res, context[11], context[15] );
  res = refalrts::splice_evar( res, context[18], context[18] );
  res = refalrts::splice_evar( res, context[22], context[22] );
  res = refalrts::splice_evar( res, context[9], context[9] );
  res = refalrts::splice_evar( res, context[20], context[21] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalFunction descr_ResolveOpts_LongParam(func_ResolveOpts_LongParam, "ResolveOpts-LongParam");
refalrts::RefalFunction& ResolveOpts_LongParam = descr_ResolveOpts_LongParam;

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_ResolveOpts_Long {
    static refalrts::RefalFunction *functions[] = {
      & ResolveOpts,
      & Error
    };
    static const refalrts::RefalIdentifier idents[] = {
      & ident_None<int>::name,
      & ident_NoParam<int>::name,
      & ident_Optional<int>::name,
      & ident_Word<int>::name,
      & ident_NoRequiredParam<int>::name,
      & ident_Required<int>::name
    };
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icReserveBacktrackStack, 4, 0, 0},
      {refalrts::icIssueMemory, 24, 0, 0},
      //FAST GEN: e.$
      //GLOBAL GEN: ( e.$ ) s.$ s.$ s.$ ( e.$ ) e.$
      // </0 & ResolveOpts-Long/4 (/7 e.idxB#0/5 )/8 s.idxT#0/9 s.idxTV#0/10 s.idxTVV#0/11 (/14 e.idxTVVVB#0/12 )/15 e.idxTVVVT#0/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icBracketLeftSave, 0, 5, 2},
      // closed e.idxB#0 as range 5
      {refalrts::icsVarLeft, 0, 9, 2},
      {refalrts::icsVarLeft, 0, 10, 2},
      {refalrts::icsVarLeft, 0, 11, 2},
      {refalrts::icBracketLeftSave, 0, 12, 2},
      // closed e.idxTVVVB#0 as range 12
      // closed e.idxTVVVT#0 as range 2
      {refalrts::icOnFailGoTo, +21, 0, 0},
      // ( e.idx ) s.idx s.idx # Required ( e.idx ) ( # Word s.idx e.idx ) e.idx
      // </0 & ResolveOpts-Long/4 (/7 e.Description#1/5 )/8 s.Num#1/9 s.Tag#1/10 # Required/11 (/14 e.Long#1/12 )/15 (/18 # Word/20 s.WordNum#1/21 e.Param#1/16 )/19 e.ArgsTail#1/2 >/1
      {refalrts::icIdentTerm, 0, 5, 11},
      {refalrts::icSave, 0, 22, 2},
      {refalrts::icBracketLeftSave, 0, 16, 22},
      {refalrts::icIdentLeftSave, 20, 3, 16},
      // closed e.Description#1 as range 5
      // closed e.Long#1 as range 12
      // closed e.ArgsTail#1 as range 22(2)
      {refalrts::icsVarLeft, 0, 21, 16},
      // closed e.Param#1 as range 16
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} s.Num#1/9 {REMOVED TILE} {REMOVED TILE} e.Long#1/12 {REMOVED TILE} (/18 # Word/20 s.WordNum#1/21 {REMOVED TILE} )/19 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/14 } Tile{ AsIs: s.Tag#1/10 HalfReuse: s.Num1 #9/11 } Tile{ AsIs: e.Param#1/16 } Tile{ AsIs: )/15 } Tile{ AsIs: </0 Reuse: & ResolveOpts/4 AsIs: (/7 AsIs: e.Description#1/5 AsIs: )/8 } Tile{ AsIs: e.ArgsTail#1/22(2) } Tile{ AsIs: >/1 ]] }
      {refalrts::icReinitSVar, 0, 9, 11},
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 8, 0},
      {refalrts::icLinkBrackets, 14, 15, 0},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icSpliceEVar, 0, 0, 22},
      {refalrts::icSpliceTile, 0, 8, 0},
      {refalrts::icSpliceTile, 15, 15, 0},
      {refalrts::icSpliceEVar, 0, 0, 16},
      {refalrts::icSpliceTile, 10, 11, 0},
      {refalrts::icSpliceTile, 14, 14, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +21, 0, 0},
      // ( e.idx ) s.idx s.idx # Required ( e.idx ) e.idx
      // </0 & ResolveOpts-Long/4 (/7 e.Description#1/5 )/8 s.Num#1/9 s.Tag#1/10 # Required/11 (/14 e.Long#1/12 )/15 e.ArgsTail#1/2 >/1
      {refalrts::icIdentTerm, 0, 5, 11},
      // closed e.Description#1 as range 5
      // closed e.Long#1 as range 12
      // closed e.ArgsTail#1 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Tag#1/10 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } (/16 & Error/17 Tile{ AsIs: s.Num#1/9 } # NoRequiredParam/18 Tile{ HalfReuse: '-'/11 HalfReuse: '-'/14 AsIs: e.Long#1/12 AsIs: )/15 } Tile{ AsIs: </0 Reuse: & ResolveOpts/4 AsIs: (/7 AsIs: e.Description#1/5 AsIs: )/8 } Tile{ AsIs: e.ArgsTail#1/2 } Tile{ AsIs: >/1 ]] }
      {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 16},
      {refalrts::icAllocFunc, 0, 1, 17},
      {refalrts::icAllocIdent, 0, 4, 18},
      {refalrts::icReinitChar, 0, '-', 11},
      {refalrts::icReinitChar, 0, '-', 14},
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 8, 0},
      {refalrts::icLinkBrackets, 16, 15, 0},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icSpliceEVar, 0, 0, 2},
      {refalrts::icSpliceTile, 0, 8, 0},
      {refalrts::icSpliceTile, 11, 15, 0},
      {refalrts::icSpliceTile, 18, 18, 0},
      {refalrts::icSpliceTile, 9, 9, 0},
      {refalrts::icSpliceTile, 16, 17, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +21, 0, 0},
      // ( e.idx ) s.idx s.idx # Optional ( e.idx ) ( # Word s.idx e.idx ) e.idx
      // </0 & ResolveOpts-Long/4 (/7 e.Description#1/5 )/8 s.Num#1/9 s.Tag#1/10 # Optional/11 (/14 e.Long#1/12 )/15 (/18 # Word/20 s.WordNum#1/21 e.Param#1/16 )/19 e.ArgsTail#1/2 >/1
      {refalrts::icIdentTerm, 0, 2, 11},
      {refalrts::icSave, 0, 22, 2},
      {refalrts::icBracketLeftSave, 0, 16, 22},
      {refalrts::icIdentLeftSave, 20, 3, 16},
      // closed e.Description#1 as range 5
      // closed e.Long#1 as range 12
      // closed e.ArgsTail#1 as range 22(2)
      {refalrts::icsVarLeft, 0, 21, 16},
      // closed e.Param#1 as range 16
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} s.Num#1/9 {REMOVED TILE} {REMOVED TILE} e.Long#1/12 {REMOVED TILE} (/18 # Word/20 s.WordNum#1/21 {REMOVED TILE} )/19 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/14 } Tile{ AsIs: s.Tag#1/10 HalfReuse: s.Num1 #9/11 } Tile{ AsIs: e.Param#1/16 } Tile{ AsIs: )/15 } Tile{ AsIs: </0 Reuse: & ResolveOpts/4 AsIs: (/7 AsIs: e.Description#1/5 AsIs: )/8 } Tile{ AsIs: e.ArgsTail#1/22(2) } Tile{ AsIs: >/1 ]] }
      {refalrts::icReinitSVar, 0, 9, 11},
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 8, 0},
      {refalrts::icLinkBrackets, 14, 15, 0},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icSpliceEVar, 0, 0, 22},
      {refalrts::icSpliceTile, 0, 8, 0},
      {refalrts::icSpliceTile, 15, 15, 0},
      {refalrts::icSpliceEVar, 0, 0, 16},
      {refalrts::icSpliceTile, 10, 11, 0},
      {refalrts::icSpliceTile, 14, 14, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +18, 0, 0},
      // ( e.idx ) s.idx s.idx # Optional ( e.idx ) e.idx
      // </0 & ResolveOpts-Long/4 (/7 e.Description#1/5 )/8 s.Num#1/9 s.Tag#1/10 # Optional/11 (/14 e.Long#1/12 )/15 e.ArgsTail#1/2 >/1
      {refalrts::icIdentTerm, 0, 2, 11},
      // closed e.Description#1 as range 5
      // closed e.Long#1 as range 12
      // closed e.ArgsTail#1 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} s.Num#1/9 {REMOVED TILE} e.Long#1/12 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } (/16 Tile{ AsIs: s.Tag#1/10 HalfReuse: s.Num1 #9/11 HalfReuse: # NoParam/14 } Tile{ AsIs: )/15 } Tile{ AsIs: </0 Reuse: & ResolveOpts/4 AsIs: (/7 AsIs: e.Description#1/5 AsIs: )/8 } Tile{ AsIs: e.ArgsTail#1/2 } Tile{ AsIs: >/1 ]] }
      {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 16},
      {refalrts::icReinitSVar, 0, 9, 11},
      {refalrts::icReinitIdent, 0, 1, 14},
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 8, 0},
      {refalrts::icLinkBrackets, 16, 15, 0},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icSpliceEVar, 0, 0, 2},
      {refalrts::icSpliceTile, 0, 8, 0},
      {refalrts::icSpliceTile, 15, 15, 0},
      {refalrts::icSpliceTile, 10, 14, 0},
      {refalrts::icSpliceTile, 16, 16, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      // ( e.idx ) s.idx s.idx # None ( e.idx ) e.idx
      // </0 & ResolveOpts-Long/4 (/7 e.Description#1/5 )/8 s.Num#1/9 s.Tag#1/10 # None/11 (/14 e.Long#1/12 )/15 e.ArgsTail#1/2 >/1
      {refalrts::icIdentTerm, 0, 0, 11},
      // closed e.Description#1 as range 5
      // closed e.Long#1 as range 12
      // closed e.ArgsTail#1 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} s.Num#1/9 {REMOVED TILE} e.Long#1/12 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: (/15 } Tile{ AsIs: s.Tag#1/10 HalfReuse: s.Num1 #9/11 HalfReuse: )/14 } Tile{ AsIs: </0 Reuse: & ResolveOpts/4 AsIs: (/7 AsIs: e.Description#1/5 AsIs: )/8 } Tile{ AsIs: e.ArgsTail#1/2 } Tile{ AsIs: >/1 ]] }
      {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 15},
      {refalrts::icReinitSVar, 0, 9, 11},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 14},
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 8, 0},
      {refalrts::icLinkBrackets, 15, 14, 0},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icSpliceEVar, 0, 0, 2},
      {refalrts::icSpliceTile, 0, 8, 0},
      {refalrts::icSpliceTile, 10, 14, 0},
      {refalrts::icSpliceTile, 15, 15, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_ResolveOpts_Long

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction descr_ResolveOpts_Long(
  "ResolveOpts-Long",
  scope_ResolveOpts_Long::raa,
  scope_ResolveOpts_Long::functions,
  scope_ResolveOpts_Long::idents,
  scope_ResolveOpts_Long::numbers,
  scope_ResolveOpts_Long::strings
);
refalrts::RefalFunction& ResolveOpts_Long = descr_ResolveOpts_Long;

} // unnamed namespace

#else
static refalrts::FnResult func_ResolveOpts_Long(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 24 elems
  refalrts::Iter context[24];
  refalrts::zeros( context, 24 );
  //FAST GEN: e.$
  //GLOBAL GEN: ( e.$ ) s.$ s.$ s.$ ( e.$ ) e.$
  // </0 & ResolveOpts-Long/4 (/7 e.idxB#0/5 )/8 s.idxT#0/9 s.idxTV#0/10 s.idxTVV#0/11 (/14 e.idxTVVVB#0/12 )/15 e.idxTVVVT#0/2 >/1
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
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
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
  // closed e.idxTVVVB#0 as range 12
  // closed e.idxTVVVT#0 as range 2
  do {
    refalrts::start_sentence();
    // ( e.idx ) s.idx s.idx # Required ( e.idx ) ( # Word s.idx e.idx ) e.idx
    // </0 & ResolveOpts-Long/4 (/7 e.Description#1/5 )/8 s.Num#1/9 s.Tag#1/10 # Required/11 (/14 e.Long#1/12 )/15 (/18 # Word/20 s.WordNum#1/21 e.Param#1/16 )/19 e.ArgsTail#1/2 >/1
    if( ! refalrts::ident_term(  & ident_Required<int>::name, context[11] ) )
      continue;
    context[22] = context[2];
    context[23] = context[3];
    context[16] = 0;
    context[17] = 0;
    context[18] = refalrts::brackets_left( context[16], context[17], context[22], context[23] );
    if( ! context[18] )
      continue;
    refalrts::bracket_pointers(context[18], context[19]);
    context[20] = refalrts::ident_left(  & ident_Word<int>::name, context[16], context[17] );
    if( ! context[20] )
      continue;
    // closed e.Description#1 as range 5
    // closed e.Long#1 as range 12
    // closed e.ArgsTail#1 as range 22(2)
    if( ! refalrts::svar_left( context[21], context[16], context[17] ) )
      continue;
    // closed e.Param#1 as range 16

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} s.Num#1/9 {REMOVED TILE} {REMOVED TILE} e.Long#1/12 {REMOVED TILE} (/18 # Word/20 s.WordNum#1/21 {REMOVED TILE} )/19 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/14 } Tile{ AsIs: s.Tag#1/10 HalfReuse: s.Num1 #9/11 } Tile{ AsIs: e.Param#1/16 } Tile{ AsIs: )/15 } Tile{ AsIs: </0 Reuse: & ResolveOpts/4 AsIs: (/7 AsIs: e.Description#1/5 AsIs: )/8 } Tile{ AsIs: e.ArgsTail#1/22(2) } Tile{ AsIs: >/1 ]] }
    refalrts::reinit_svar( context[11], context[9] );
    refalrts::update_name( context[4], & ResolveOpts );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[14], context[15] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[22], context[23] );
    res = refalrts::splice_evar( res, context[0], context[8] );
    res = refalrts::splice_evar( res, context[15], context[15] );
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_evar( res, context[10], context[11] );
    res = refalrts::splice_evar( res, context[14], context[14] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) s.idx s.idx # Required ( e.idx ) e.idx
    // </0 & ResolveOpts-Long/4 (/7 e.Description#1/5 )/8 s.Num#1/9 s.Tag#1/10 # Required/11 (/14 e.Long#1/12 )/15 e.ArgsTail#1/2 >/1
    if( ! refalrts::ident_term(  & ident_Required<int>::name, context[11] ) )
      continue;
    // closed e.Description#1 as range 5
    // closed e.Long#1 as range 12
    // closed e.ArgsTail#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Tag#1/10 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } (/16 & Error/17 Tile{ AsIs: s.Num#1/9 } # NoRequiredParam/18 Tile{ HalfReuse: '-'/11 HalfReuse: '-'/14 AsIs: e.Long#1/12 AsIs: )/15 } Tile{ AsIs: </0 Reuse: & ResolveOpts/4 AsIs: (/7 AsIs: e.Description#1/5 AsIs: )/8 } Tile{ AsIs: e.ArgsTail#1/2 } Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_bracket( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[17], & Error ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[18], & ident_NoRequiredParam<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[11], '-' );
    refalrts::reinit_char( context[14], '-' );
    refalrts::update_name( context[4], & ResolveOpts );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[16], context[15] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[0], context[8] );
    res = refalrts::splice_evar( res, context[11], context[15] );
    res = refalrts::splice_evar( res, context[18], context[18] );
    res = refalrts::splice_evar( res, context[9], context[9] );
    res = refalrts::splice_evar( res, context[16], context[17] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) s.idx s.idx # Optional ( e.idx ) ( # Word s.idx e.idx ) e.idx
    // </0 & ResolveOpts-Long/4 (/7 e.Description#1/5 )/8 s.Num#1/9 s.Tag#1/10 # Optional/11 (/14 e.Long#1/12 )/15 (/18 # Word/20 s.WordNum#1/21 e.Param#1/16 )/19 e.ArgsTail#1/2 >/1
    if( ! refalrts::ident_term(  & ident_Optional<int>::name, context[11] ) )
      continue;
    context[22] = context[2];
    context[23] = context[3];
    context[16] = 0;
    context[17] = 0;
    context[18] = refalrts::brackets_left( context[16], context[17], context[22], context[23] );
    if( ! context[18] )
      continue;
    refalrts::bracket_pointers(context[18], context[19]);
    context[20] = refalrts::ident_left(  & ident_Word<int>::name, context[16], context[17] );
    if( ! context[20] )
      continue;
    // closed e.Description#1 as range 5
    // closed e.Long#1 as range 12
    // closed e.ArgsTail#1 as range 22(2)
    if( ! refalrts::svar_left( context[21], context[16], context[17] ) )
      continue;
    // closed e.Param#1 as range 16

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} s.Num#1/9 {REMOVED TILE} {REMOVED TILE} e.Long#1/12 {REMOVED TILE} (/18 # Word/20 s.WordNum#1/21 {REMOVED TILE} )/19 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/14 } Tile{ AsIs: s.Tag#1/10 HalfReuse: s.Num1 #9/11 } Tile{ AsIs: e.Param#1/16 } Tile{ AsIs: )/15 } Tile{ AsIs: </0 Reuse: & ResolveOpts/4 AsIs: (/7 AsIs: e.Description#1/5 AsIs: )/8 } Tile{ AsIs: e.ArgsTail#1/22(2) } Tile{ AsIs: >/1 ]] }
    refalrts::reinit_svar( context[11], context[9] );
    refalrts::update_name( context[4], & ResolveOpts );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[14], context[15] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[22], context[23] );
    res = refalrts::splice_evar( res, context[0], context[8] );
    res = refalrts::splice_evar( res, context[15], context[15] );
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_evar( res, context[10], context[11] );
    res = refalrts::splice_evar( res, context[14], context[14] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) s.idx s.idx # Optional ( e.idx ) e.idx
    // </0 & ResolveOpts-Long/4 (/7 e.Description#1/5 )/8 s.Num#1/9 s.Tag#1/10 # Optional/11 (/14 e.Long#1/12 )/15 e.ArgsTail#1/2 >/1
    if( ! refalrts::ident_term(  & ident_Optional<int>::name, context[11] ) )
      continue;
    // closed e.Description#1 as range 5
    // closed e.Long#1 as range 12
    // closed e.ArgsTail#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} s.Num#1/9 {REMOVED TILE} e.Long#1/12 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } (/16 Tile{ AsIs: s.Tag#1/10 HalfReuse: s.Num1 #9/11 HalfReuse: # NoParam/14 } Tile{ AsIs: )/15 } Tile{ AsIs: </0 Reuse: & ResolveOpts/4 AsIs: (/7 AsIs: e.Description#1/5 AsIs: )/8 } Tile{ AsIs: e.ArgsTail#1/2 } Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_bracket( context[16] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_svar( context[11], context[9] );
    refalrts::reinit_ident( context[14], & ident_NoParam<int>::name );
    refalrts::update_name( context[4], & ResolveOpts );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[16], context[15] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[0], context[8] );
    res = refalrts::splice_evar( res, context[15], context[15] );
    res = refalrts::splice_evar( res, context[10], context[14] );
    res = refalrts::splice_evar( res, context[16], context[16] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );

  // ( e.idx ) s.idx s.idx # None ( e.idx ) e.idx
  // </0 & ResolveOpts-Long/4 (/7 e.Description#1/5 )/8 s.Num#1/9 s.Tag#1/10 # None/11 (/14 e.Long#1/12 )/15 e.ArgsTail#1/2 >/1
  if( ! refalrts::ident_term(  & ident_None<int>::name, context[11] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Description#1 as range 5
  // closed e.Long#1 as range 12
  // closed e.ArgsTail#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} s.Num#1/9 {REMOVED TILE} e.Long#1/12 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: (/15 } Tile{ AsIs: s.Tag#1/10 HalfReuse: s.Num1 #9/11 HalfReuse: )/14 } Tile{ AsIs: </0 Reuse: & ResolveOpts/4 AsIs: (/7 AsIs: e.Description#1/5 AsIs: )/8 } Tile{ AsIs: e.ArgsTail#1/2 } Tile{ AsIs: >/1 ]] }
  refalrts::reinit_open_bracket( context[15] );
  refalrts::reinit_svar( context[11], context[9] );
  refalrts::reinit_close_bracket( context[14] );
  refalrts::update_name( context[4], & ResolveOpts );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[15], context[14] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[0], context[8] );
  res = refalrts::splice_evar( res, context[10], context[14] );
  res = refalrts::splice_evar( res, context[15], context[15] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalFunction descr_ResolveOpts_Long(func_ResolveOpts_Long, "ResolveOpts-Long");
refalrts::RefalFunction& ResolveOpts_Long = descr_ResolveOpts_Long;

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_ResolveOpts_Short {
    static refalrts::RefalFunction *functions[] = {
      & ResolveOpts,
      & Error
    };
    static const refalrts::RefalIdentifier idents[] = {
      & ident_Short<int>::name,
      & ident_None<int>::name,
      & ident_Optional<int>::name,
      & ident_NoParam<int>::name,
      & ident_Word<int>::name,
      & ident_Required<int>::name,
      & ident_NoRequiredParam<int>::name
    };
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icReserveBacktrackStack, 7, 0, 0},
      {refalrts::icIssueMemory, 27, 0, 0},
      //FAST GEN: e.$
      //GLOBAL GEN: ( e.$ ) s.$ s.$ s.$ s.$ ( e.$ ) e.$
      // </0 & ResolveOpts-Short/4 (/7 e.idxB#0/5 )/8 s.idxT#0/9 s.idxTV#0/10 s.idxTVV#0/11 s.idxTVVV#0/12 (/15 e.idxTVVVVB#0/13 )/16 e.idxTVVVVT#0/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icBracketLeftSave, 0, 5, 2},
      // closed e.idxB#0 as range 5
      {refalrts::icsVarLeft, 0, 9, 2},
      {refalrts::icsVarLeft, 0, 10, 2},
      {refalrts::icsVarLeft, 0, 11, 2},
      {refalrts::icsVarLeft, 0, 12, 2},
      {refalrts::icBracketLeftSave, 0, 13, 2},
      // closed e.idxTVVVVB#0 as range 13
      // closed e.idxTVVVVT#0 as range 2
      {refalrts::icOnFailGoTo, +23, 0, 0},
      // ( e.idx ) s.idx s.idx # Required s.idx ( ) ( # Word s.idx e.idx ) e.idx
      // </0 & ResolveOpts-Short/4 (/7 e.Description#1/5 )/8 s.Num#1/9 s.Tag#1/10 # Required/11 s.Short#1/12 (/15 )/16 (/19 # Word/21 s.WordNum#1/22 e.Param#1/17 )/20 e.ArgsTail#1/2 >/1
      {refalrts::icIdentTerm, 0, 5, 11},
      {refalrts::icSave, 0, 23, 2},
      {refalrts::icBracketLeftSave, 0, 17, 23},
      {refalrts::icIdentLeftSave, 21, 4, 17},
      {refalrts::icSave, 0, 25, 13},
      {refalrts::icEmpty, 0, 0, 25},
      // closed e.Description#1 as range 5
      // closed e.ArgsTail#1 as range 23(2)
      {refalrts::icsVarLeft, 0, 22, 17},
      // closed e.Param#1 as range 17
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} s.Num#1/9 s.Tag#1/10 # Required/11 s.Short#1/12 {REMOVED TILE} # Word/21 s.WordNum#1/22 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/15 HalfReuse: s.Tag1 #10/16 HalfReuse: s.Num1 #9/19 } Tile{ AsIs: e.Param#1/17 } Tile{ AsIs: )/20 } Tile{ AsIs: </0 Reuse: & ResolveOpts/4 AsIs: (/7 AsIs: e.Description#1/5 AsIs: )/8 } Tile{ AsIs: e.ArgsTail#1/23(2) } Tile{ AsIs: >/1 ]] }
      {refalrts::icReinitSVar, 0, 10, 16},
      {refalrts::icReinitSVar, 0, 9, 19},
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 8, 0},
      {refalrts::icLinkBrackets, 15, 20, 0},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icSpliceEVar, 0, 0, 23},
      {refalrts::icSpliceTile, 0, 8, 0},
      {refalrts::icSpliceTile, 20, 20, 0},
      {refalrts::icSpliceEVar, 0, 0, 17},
      {refalrts::icSpliceTile, 15, 19, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +23, 0, 0},
      // ( e.idx ) s.idx s.idx # Required s.idx ( ) e.idx
      // </0 & ResolveOpts-Short/4 (/7 e.Description#1/5 )/8 s.Num#1/9 s.Tag#1/10 # Required/11 s.Short#1/12 (/15 )/16 e.ArgsTail#1/2 >/1
      {refalrts::icIdentTerm, 0, 5, 11},
      {refalrts::icSave, 0, 23, 13},
      {refalrts::icEmpty, 0, 0, 23},
      // closed e.Description#1 as range 5
      // closed e.ArgsTail#1 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Tag#1/10 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } (/17 & Error/18 Tile{ AsIs: s.Num#1/9 } Tile{ HalfReuse: # NoRequiredParam/16 } Tile{ HalfReuse: '-'/11 AsIs: s.Short#1/12 HalfReuse: )/15 } Tile{ AsIs: </0 Reuse: & ResolveOpts/4 AsIs: (/7 AsIs: e.Description#1/5 AsIs: )/8 } Tile{ AsIs: e.ArgsTail#1/2 } Tile{ AsIs: >/1 ]] }
      {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 17},
      {refalrts::icAllocFunc, 0, 1, 18},
      {refalrts::icReinitIdent, 0, 6, 16},
      {refalrts::icReinitChar, 0, '-', 11},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 15},
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 8, 0},
      {refalrts::icLinkBrackets, 17, 15, 0},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icSpliceEVar, 0, 0, 2},
      {refalrts::icSpliceTile, 0, 8, 0},
      {refalrts::icSpliceTile, 11, 15, 0},
      {refalrts::icSpliceTile, 16, 16, 0},
      {refalrts::icSpliceTile, 9, 9, 0},
      {refalrts::icSpliceTile, 17, 18, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +17, 0, 0},
      // ( e.idx ) s.idx s.idx # Required s.idx ( e.idx ) e.idx
      // </0 & ResolveOpts-Short/4 (/7 e.Description#1/5 )/8 s.Num#1/9 s.Tag#1/10 # Required/11 s.Short#1/12 (/15 e.Param#1/13 )/16 e.ArgsTail#1/2 >/1
      {refalrts::icIdentTerm, 0, 5, 11},
      // closed e.Description#1 as range 5
      // closed e.Param#1 as range 13
      // closed e.ArgsTail#1 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} s.Num#1/9 {REMOVED TILE} {REMOVED TILE} s.Short#1/12 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: (/11 } Tile{ AsIs: s.Tag#1/10 } Tile{ HalfReuse: s.Num1 #9/15 AsIs: e.Param#1/13 AsIs: )/16 } Tile{ AsIs: </0 Reuse: & ResolveOpts/4 AsIs: (/7 AsIs: e.Description#1/5 AsIs: )/8 } Tile{ AsIs: e.ArgsTail#1/2 } Tile{ AsIs: >/1 ]] }
      {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 11},
      {refalrts::icReinitSVar, 0, 9, 15},
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 8, 0},
      {refalrts::icLinkBrackets, 11, 16, 0},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icSpliceEVar, 0, 0, 2},
      {refalrts::icSpliceTile, 0, 8, 0},
      {refalrts::icSpliceTile, 15, 16, 0},
      {refalrts::icSpliceTile, 10, 10, 0},
      {refalrts::icSpliceTile, 11, 11, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +23, 0, 0},
      // ( e.idx ) s.idx s.idx # Optional s.idx ( ) ( # Word s.idx e.idx ) e.idx
      // </0 & ResolveOpts-Short/4 (/7 e.Description#1/5 )/8 s.Num#1/9 s.Tag#1/10 # Optional/11 s.Short#1/12 (/15 )/16 (/19 # Word/21 s.WordNum#1/22 e.Param#1/17 )/20 e.ArgsTail#1/2 >/1
      {refalrts::icIdentTerm, 0, 2, 11},
      {refalrts::icSave, 0, 23, 2},
      {refalrts::icBracketLeftSave, 0, 17, 23},
      {refalrts::icIdentLeftSave, 21, 4, 17},
      {refalrts::icSave, 0, 25, 13},
      {refalrts::icEmpty, 0, 0, 25},
      // closed e.Description#1 as range 5
      // closed e.ArgsTail#1 as range 23(2)
      {refalrts::icsVarLeft, 0, 22, 17},
      // closed e.Param#1 as range 17
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} s.Num#1/9 s.Tag#1/10 # Optional/11 s.Short#1/12 {REMOVED TILE} # Word/21 s.WordNum#1/22 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/15 HalfReuse: s.Tag1 #10/16 HalfReuse: s.Num1 #9/19 } Tile{ AsIs: e.Param#1/17 } Tile{ AsIs: )/20 } Tile{ AsIs: </0 Reuse: & ResolveOpts/4 AsIs: (/7 AsIs: e.Description#1/5 AsIs: )/8 } Tile{ AsIs: e.ArgsTail#1/23(2) } Tile{ AsIs: >/1 ]] }
      {refalrts::icReinitSVar, 0, 10, 16},
      {refalrts::icReinitSVar, 0, 9, 19},
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 8, 0},
      {refalrts::icLinkBrackets, 15, 20, 0},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icSpliceEVar, 0, 0, 23},
      {refalrts::icSpliceTile, 0, 8, 0},
      {refalrts::icSpliceTile, 20, 20, 0},
      {refalrts::icSpliceEVar, 0, 0, 17},
      {refalrts::icSpliceTile, 15, 19, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +20, 0, 0},
      // ( e.idx ) s.idx s.idx # Optional s.idx ( ) e.idx
      // </0 & ResolveOpts-Short/4 (/7 e.Description#1/5 )/8 s.Num#1/9 s.Tag#1/10 # Optional/11 s.Short#1/12 (/15 )/16 e.ArgsTail#1/2 >/1
      {refalrts::icIdentTerm, 0, 2, 11},
      {refalrts::icSave, 0, 23, 13},
      {refalrts::icEmpty, 0, 0, 23},
      // closed e.Description#1 as range 5
      // closed e.ArgsTail#1 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} s.Num#1/9 {REMOVED TILE} s.Short#1/12 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } (/17 Tile{ AsIs: s.Tag#1/10 HalfReuse: s.Num1 #9/11 } Tile{ HalfReuse: # NoParam/15 AsIs: )/16 } Tile{ AsIs: </0 Reuse: & ResolveOpts/4 AsIs: (/7 AsIs: e.Description#1/5 AsIs: )/8 } Tile{ AsIs: e.ArgsTail#1/2 } Tile{ AsIs: >/1 ]] }
      {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 17},
      {refalrts::icReinitSVar, 0, 9, 11},
      {refalrts::icReinitIdent, 0, 3, 15},
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 8, 0},
      {refalrts::icLinkBrackets, 17, 16, 0},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icSpliceEVar, 0, 0, 2},
      {refalrts::icSpliceTile, 0, 8, 0},
      {refalrts::icSpliceTile, 15, 16, 0},
      {refalrts::icSpliceTile, 10, 11, 0},
      {refalrts::icSpliceTile, 17, 17, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +17, 0, 0},
      // ( e.idx ) s.idx s.idx # Optional s.idx ( e.idx ) e.idx
      // </0 & ResolveOpts-Short/4 (/7 e.Description#1/5 )/8 s.Num#1/9 s.Tag#1/10 # Optional/11 s.Short#1/12 (/15 e.Param#1/13 )/16 e.ArgsTail#1/2 >/1
      {refalrts::icIdentTerm, 0, 2, 11},
      // closed e.Description#1 as range 5
      // closed e.Param#1 as range 13
      // closed e.ArgsTail#1 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} s.Num#1/9 {REMOVED TILE} {REMOVED TILE} s.Short#1/12 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: (/11 } Tile{ AsIs: s.Tag#1/10 } Tile{ HalfReuse: s.Num1 #9/15 AsIs: e.Param#1/13 AsIs: )/16 } Tile{ AsIs: </0 Reuse: & ResolveOpts/4 AsIs: (/7 AsIs: e.Description#1/5 AsIs: )/8 } Tile{ AsIs: e.ArgsTail#1/2 } Tile{ AsIs: >/1 ]] }
      {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 11},
      {refalrts::icReinitSVar, 0, 9, 15},
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 8, 0},
      {refalrts::icLinkBrackets, 11, 16, 0},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icSpliceEVar, 0, 0, 2},
      {refalrts::icSpliceTile, 0, 8, 0},
      {refalrts::icSpliceTile, 15, 16, 0},
      {refalrts::icSpliceTile, 10, 10, 0},
      {refalrts::icSpliceTile, 11, 11, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +18, 0, 0},
      // ( e.idx ) s.idx s.idx # None s.idx ( ) e.idx
      // </0 & ResolveOpts-Short/4 (/7 e.Description#1/5 )/8 s.Num#1/9 s.Tag#1/10 # None/11 s.Short#1/12 (/15 )/16 e.ArgsTail#1/2 >/1
      {refalrts::icIdentTerm, 0, 1, 11},
      {refalrts::icSave, 0, 23, 13},
      {refalrts::icEmpty, 0, 0, 23},
      // closed e.Description#1 as range 5
      // closed e.ArgsTail#1 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} s.Num#1/9 {REMOVED TILE} s.Short#1/12 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/15 } Tile{ AsIs: s.Tag#1/10 HalfReuse: s.Num1 #9/11 } Tile{ AsIs: )/16 } Tile{ AsIs: </0 Reuse: & ResolveOpts/4 AsIs: (/7 AsIs: e.Description#1/5 AsIs: )/8 } Tile{ AsIs: e.ArgsTail#1/2 } Tile{ AsIs: >/1 ]] }
      {refalrts::icReinitSVar, 0, 9, 11},
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 8, 0},
      {refalrts::icLinkBrackets, 15, 16, 0},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icSpliceEVar, 0, 0, 2},
      {refalrts::icSpliceTile, 0, 8, 0},
      {refalrts::icSpliceTile, 16, 16, 0},
      {refalrts::icSpliceTile, 10, 11, 0},
      {refalrts::icSpliceTile, 15, 15, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      // ( e.idx ) s.idx s.idx # None s.idx ( e.idx ) e.idx
      // </0 & ResolveOpts-Short/4 (/7 e.Description#1/5 )/8 s.Num#1/9 s.Tag#1/10 # None/11 s.Short#1/12 (/15 e.OptTail#1/13 )/16 e.ArgsTail#1/2 >/1
      {refalrts::icIdentTerm, 0, 1, 11},
      // closed e.Description#1 as range 5
      // closed e.OptTail#1 as range 13
      // closed e.ArgsTail#1 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} s.Num#1/9 {REMOVED TILE} s.Short#1/12 {REMOVED TILE}
      //RESULT: Tile{ [[ } (/17 Tile{ AsIs: s.Tag#1/10 HalfReuse: s.Num1 #9/11 } )/18 Tile{ AsIs: </0 Reuse: & ResolveOpts/4 AsIs: (/7 AsIs: e.Description#1/5 AsIs: )/8 } (/19 # Short/20 Tile{ HalfReuse: s.Num1 #9/15 AsIs: e.OptTail#1/13 AsIs: )/16 AsIs: e.ArgsTail#1/2 AsIs: >/1 ]] }
      {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 17},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 18},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 19},
      {refalrts::icAllocIdent, 0, 0, 20},
      {refalrts::icReinitSVar, 0, 9, 11},
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icReinitSVar, 0, 9, 15},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 19, 16, 0},
      {refalrts::icLinkBrackets, 7, 8, 0},
      {refalrts::icLinkBrackets, 17, 18, 0},
      {refalrts::icSetRes, 0, 0, 15},
      {refalrts::icSpliceTile, 19, 20, 0},
      {refalrts::icSpliceTile, 0, 8, 0},
      {refalrts::icSpliceTile, 18, 18, 0},
      {refalrts::icSpliceTile, 10, 11, 0},
      {refalrts::icSpliceTile, 17, 17, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_ResolveOpts_Short

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction descr_ResolveOpts_Short(
  "ResolveOpts-Short",
  scope_ResolveOpts_Short::raa,
  scope_ResolveOpts_Short::functions,
  scope_ResolveOpts_Short::idents,
  scope_ResolveOpts_Short::numbers,
  scope_ResolveOpts_Short::strings
);
refalrts::RefalFunction& ResolveOpts_Short = descr_ResolveOpts_Short;

} // unnamed namespace

#else
static refalrts::FnResult func_ResolveOpts_Short(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 27 elems
  refalrts::Iter context[27];
  refalrts::zeros( context, 27 );
  //FAST GEN: e.$
  //GLOBAL GEN: ( e.$ ) s.$ s.$ s.$ s.$ ( e.$ ) e.$
  // </0 & ResolveOpts-Short/4 (/7 e.idxB#0/5 )/8 s.idxT#0/9 s.idxTV#0/10 s.idxTVV#0/11 s.idxTVVV#0/12 (/15 e.idxTVVVVB#0/13 )/16 e.idxTVVVVT#0/2 >/1
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
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[11], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[12], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[13] = 0;
  context[14] = 0;
  context[15] = refalrts::brackets_left( context[13], context[14], context[2], context[3] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[15], context[16]);
  // closed e.idxTVVVVB#0 as range 13
  // closed e.idxTVVVVT#0 as range 2
  do {
    refalrts::start_sentence();
    // ( e.idx ) s.idx s.idx # Required s.idx ( ) ( # Word s.idx e.idx ) e.idx
    // </0 & ResolveOpts-Short/4 (/7 e.Description#1/5 )/8 s.Num#1/9 s.Tag#1/10 # Required/11 s.Short#1/12 (/15 )/16 (/19 # Word/21 s.WordNum#1/22 e.Param#1/17 )/20 e.ArgsTail#1/2 >/1
    if( ! refalrts::ident_term(  & ident_Required<int>::name, context[11] ) )
      continue;
    context[23] = context[2];
    context[24] = context[3];
    context[17] = 0;
    context[18] = 0;
    context[19] = refalrts::brackets_left( context[17], context[18], context[23], context[24] );
    if( ! context[19] )
      continue;
    refalrts::bracket_pointers(context[19], context[20]);
    context[21] = refalrts::ident_left(  & ident_Word<int>::name, context[17], context[18] );
    if( ! context[21] )
      continue;
    context[25] = context[13];
    context[26] = context[14];
    if( ! refalrts::empty_seq( context[25], context[26] ) )
      continue;
    // closed e.Description#1 as range 5
    // closed e.ArgsTail#1 as range 23(2)
    if( ! refalrts::svar_left( context[22], context[17], context[18] ) )
      continue;
    // closed e.Param#1 as range 17

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} s.Num#1/9 s.Tag#1/10 # Required/11 s.Short#1/12 {REMOVED TILE} # Word/21 s.WordNum#1/22 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/15 HalfReuse: s.Tag1 #10/16 HalfReuse: s.Num1 #9/19 } Tile{ AsIs: e.Param#1/17 } Tile{ AsIs: )/20 } Tile{ AsIs: </0 Reuse: & ResolveOpts/4 AsIs: (/7 AsIs: e.Description#1/5 AsIs: )/8 } Tile{ AsIs: e.ArgsTail#1/23(2) } Tile{ AsIs: >/1 ]] }
    refalrts::reinit_svar( context[16], context[10] );
    refalrts::reinit_svar( context[19], context[9] );
    refalrts::update_name( context[4], & ResolveOpts );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[15], context[20] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[23], context[24] );
    res = refalrts::splice_evar( res, context[0], context[8] );
    res = refalrts::splice_evar( res, context[20], context[20] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[15], context[19] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) s.idx s.idx # Required s.idx ( ) e.idx
    // </0 & ResolveOpts-Short/4 (/7 e.Description#1/5 )/8 s.Num#1/9 s.Tag#1/10 # Required/11 s.Short#1/12 (/15 )/16 e.ArgsTail#1/2 >/1
    if( ! refalrts::ident_term(  & ident_Required<int>::name, context[11] ) )
      continue;
    context[23] = context[13];
    context[24] = context[14];
    if( ! refalrts::empty_seq( context[23], context[24] ) )
      continue;
    // closed e.Description#1 as range 5
    // closed e.ArgsTail#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Tag#1/10 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } (/17 & Error/18 Tile{ AsIs: s.Num#1/9 } Tile{ HalfReuse: # NoRequiredParam/16 } Tile{ HalfReuse: '-'/11 AsIs: s.Short#1/12 HalfReuse: )/15 } Tile{ AsIs: </0 Reuse: & ResolveOpts/4 AsIs: (/7 AsIs: e.Description#1/5 AsIs: )/8 } Tile{ AsIs: e.ArgsTail#1/2 } Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_bracket( context[17] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[18], & Error ) )
      return refalrts::cNoMemory;
    refalrts::reinit_ident( context[16], & ident_NoRequiredParam<int>::name );
    refalrts::reinit_char( context[11], '-' );
    refalrts::reinit_close_bracket( context[15] );
    refalrts::update_name( context[4], & ResolveOpts );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[17], context[15] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[0], context[8] );
    res = refalrts::splice_evar( res, context[11], context[15] );
    res = refalrts::splice_evar( res, context[16], context[16] );
    res = refalrts::splice_evar( res, context[9], context[9] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) s.idx s.idx # Required s.idx ( e.idx ) e.idx
    // </0 & ResolveOpts-Short/4 (/7 e.Description#1/5 )/8 s.Num#1/9 s.Tag#1/10 # Required/11 s.Short#1/12 (/15 e.Param#1/13 )/16 e.ArgsTail#1/2 >/1
    if( ! refalrts::ident_term(  & ident_Required<int>::name, context[11] ) )
      continue;
    // closed e.Description#1 as range 5
    // closed e.Param#1 as range 13
    // closed e.ArgsTail#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} s.Num#1/9 {REMOVED TILE} {REMOVED TILE} s.Short#1/12 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: (/11 } Tile{ AsIs: s.Tag#1/10 } Tile{ HalfReuse: s.Num1 #9/15 AsIs: e.Param#1/13 AsIs: )/16 } Tile{ AsIs: </0 Reuse: & ResolveOpts/4 AsIs: (/7 AsIs: e.Description#1/5 AsIs: )/8 } Tile{ AsIs: e.ArgsTail#1/2 } Tile{ AsIs: >/1 ]] }
    refalrts::reinit_open_bracket( context[11] );
    refalrts::reinit_svar( context[15], context[9] );
    refalrts::update_name( context[4], & ResolveOpts );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[11], context[16] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[0], context[8] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[10], context[10] );
    res = refalrts::splice_evar( res, context[11], context[11] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) s.idx s.idx # Optional s.idx ( ) ( # Word s.idx e.idx ) e.idx
    // </0 & ResolveOpts-Short/4 (/7 e.Description#1/5 )/8 s.Num#1/9 s.Tag#1/10 # Optional/11 s.Short#1/12 (/15 )/16 (/19 # Word/21 s.WordNum#1/22 e.Param#1/17 )/20 e.ArgsTail#1/2 >/1
    if( ! refalrts::ident_term(  & ident_Optional<int>::name, context[11] ) )
      continue;
    context[23] = context[2];
    context[24] = context[3];
    context[17] = 0;
    context[18] = 0;
    context[19] = refalrts::brackets_left( context[17], context[18], context[23], context[24] );
    if( ! context[19] )
      continue;
    refalrts::bracket_pointers(context[19], context[20]);
    context[21] = refalrts::ident_left(  & ident_Word<int>::name, context[17], context[18] );
    if( ! context[21] )
      continue;
    context[25] = context[13];
    context[26] = context[14];
    if( ! refalrts::empty_seq( context[25], context[26] ) )
      continue;
    // closed e.Description#1 as range 5
    // closed e.ArgsTail#1 as range 23(2)
    if( ! refalrts::svar_left( context[22], context[17], context[18] ) )
      continue;
    // closed e.Param#1 as range 17

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} s.Num#1/9 s.Tag#1/10 # Optional/11 s.Short#1/12 {REMOVED TILE} # Word/21 s.WordNum#1/22 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/15 HalfReuse: s.Tag1 #10/16 HalfReuse: s.Num1 #9/19 } Tile{ AsIs: e.Param#1/17 } Tile{ AsIs: )/20 } Tile{ AsIs: </0 Reuse: & ResolveOpts/4 AsIs: (/7 AsIs: e.Description#1/5 AsIs: )/8 } Tile{ AsIs: e.ArgsTail#1/23(2) } Tile{ AsIs: >/1 ]] }
    refalrts::reinit_svar( context[16], context[10] );
    refalrts::reinit_svar( context[19], context[9] );
    refalrts::update_name( context[4], & ResolveOpts );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[15], context[20] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[23], context[24] );
    res = refalrts::splice_evar( res, context[0], context[8] );
    res = refalrts::splice_evar( res, context[20], context[20] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[15], context[19] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) s.idx s.idx # Optional s.idx ( ) e.idx
    // </0 & ResolveOpts-Short/4 (/7 e.Description#1/5 )/8 s.Num#1/9 s.Tag#1/10 # Optional/11 s.Short#1/12 (/15 )/16 e.ArgsTail#1/2 >/1
    if( ! refalrts::ident_term(  & ident_Optional<int>::name, context[11] ) )
      continue;
    context[23] = context[13];
    context[24] = context[14];
    if( ! refalrts::empty_seq( context[23], context[24] ) )
      continue;
    // closed e.Description#1 as range 5
    // closed e.ArgsTail#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} s.Num#1/9 {REMOVED TILE} s.Short#1/12 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } (/17 Tile{ AsIs: s.Tag#1/10 HalfReuse: s.Num1 #9/11 } Tile{ HalfReuse: # NoParam/15 AsIs: )/16 } Tile{ AsIs: </0 Reuse: & ResolveOpts/4 AsIs: (/7 AsIs: e.Description#1/5 AsIs: )/8 } Tile{ AsIs: e.ArgsTail#1/2 } Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_bracket( context[17] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_svar( context[11], context[9] );
    refalrts::reinit_ident( context[15], & ident_NoParam<int>::name );
    refalrts::update_name( context[4], & ResolveOpts );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[17], context[16] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[0], context[8] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[10], context[11] );
    res = refalrts::splice_evar( res, context[17], context[17] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) s.idx s.idx # Optional s.idx ( e.idx ) e.idx
    // </0 & ResolveOpts-Short/4 (/7 e.Description#1/5 )/8 s.Num#1/9 s.Tag#1/10 # Optional/11 s.Short#1/12 (/15 e.Param#1/13 )/16 e.ArgsTail#1/2 >/1
    if( ! refalrts::ident_term(  & ident_Optional<int>::name, context[11] ) )
      continue;
    // closed e.Description#1 as range 5
    // closed e.Param#1 as range 13
    // closed e.ArgsTail#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} s.Num#1/9 {REMOVED TILE} {REMOVED TILE} s.Short#1/12 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: (/11 } Tile{ AsIs: s.Tag#1/10 } Tile{ HalfReuse: s.Num1 #9/15 AsIs: e.Param#1/13 AsIs: )/16 } Tile{ AsIs: </0 Reuse: & ResolveOpts/4 AsIs: (/7 AsIs: e.Description#1/5 AsIs: )/8 } Tile{ AsIs: e.ArgsTail#1/2 } Tile{ AsIs: >/1 ]] }
    refalrts::reinit_open_bracket( context[11] );
    refalrts::reinit_svar( context[15], context[9] );
    refalrts::update_name( context[4], & ResolveOpts );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[11], context[16] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[0], context[8] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[10], context[10] );
    res = refalrts::splice_evar( res, context[11], context[11] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) s.idx s.idx # None s.idx ( ) e.idx
    // </0 & ResolveOpts-Short/4 (/7 e.Description#1/5 )/8 s.Num#1/9 s.Tag#1/10 # None/11 s.Short#1/12 (/15 )/16 e.ArgsTail#1/2 >/1
    if( ! refalrts::ident_term(  & ident_None<int>::name, context[11] ) )
      continue;
    context[23] = context[13];
    context[24] = context[14];
    if( ! refalrts::empty_seq( context[23], context[24] ) )
      continue;
    // closed e.Description#1 as range 5
    // closed e.ArgsTail#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} s.Num#1/9 {REMOVED TILE} s.Short#1/12 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/15 } Tile{ AsIs: s.Tag#1/10 HalfReuse: s.Num1 #9/11 } Tile{ AsIs: )/16 } Tile{ AsIs: </0 Reuse: & ResolveOpts/4 AsIs: (/7 AsIs: e.Description#1/5 AsIs: )/8 } Tile{ AsIs: e.ArgsTail#1/2 } Tile{ AsIs: >/1 ]] }
    refalrts::reinit_svar( context[11], context[9] );
    refalrts::update_name( context[4], & ResolveOpts );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[15], context[16] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[0], context[8] );
    res = refalrts::splice_evar( res, context[16], context[16] );
    res = refalrts::splice_evar( res, context[10], context[11] );
    res = refalrts::splice_evar( res, context[15], context[15] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );

  // ( e.idx ) s.idx s.idx # None s.idx ( e.idx ) e.idx
  // </0 & ResolveOpts-Short/4 (/7 e.Description#1/5 )/8 s.Num#1/9 s.Tag#1/10 # None/11 s.Short#1/12 (/15 e.OptTail#1/13 )/16 e.ArgsTail#1/2 >/1
  if( ! refalrts::ident_term(  & ident_None<int>::name, context[11] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Description#1 as range 5
  // closed e.OptTail#1 as range 13
  // closed e.ArgsTail#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} s.Num#1/9 {REMOVED TILE} s.Short#1/12 {REMOVED TILE}
  //RESULT: Tile{ [[ } (/17 Tile{ AsIs: s.Tag#1/10 HalfReuse: s.Num1 #9/11 } )/18 Tile{ AsIs: </0 Reuse: & ResolveOpts/4 AsIs: (/7 AsIs: e.Description#1/5 AsIs: )/8 } (/19 # Short/20 Tile{ HalfReuse: s.Num1 #9/15 AsIs: e.OptTail#1/13 AsIs: )/16 AsIs: e.ArgsTail#1/2 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_bracket( context[17] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[18] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[19] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[20], & ident_Short<int>::name ) )
    return refalrts::cNoMemory;
  refalrts::reinit_svar( context[11], context[9] );
  refalrts::update_name( context[4], & ResolveOpts );
  refalrts::reinit_svar( context[15], context[9] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[19], context[16] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[17], context[18] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[15];
  res = refalrts::splice_evar( res, context[19], context[20] );
  res = refalrts::splice_evar( res, context[0], context[8] );
  res = refalrts::splice_evar( res, context[18], context[18] );
  res = refalrts::splice_evar( res, context[10], context[11] );
  res = refalrts::splice_evar( res, context[17], context[17] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalFunction descr_ResolveOpts_Short(func_ResolveOpts_Short, "ResolveOpts-Short");
refalrts::RefalFunction& ResolveOpts_Short = descr_ResolveOpts_Short;

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_FoldErrors {
    static refalrts::RefalFunction *functions[] = {
      & DoFoldErrors
    };
    using refalrts::idents;
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icIssueMemory, 7, 0, 0},
      // </0 & FoldErrors/4 e.OptionsAndErrors#1/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      // closed e.OptionsAndErrors#1 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } </5 & DoFoldErrors/6 Tile{ HalfReuse: (/0 HalfReuse: )/4 AsIs: e.OptionsAndErrors#1/2 AsIs: >/1 ]] }
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 5},
      {refalrts::icAllocFunc, 0, 0, 6},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 4},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 5},
      {refalrts::icLinkBrackets, 0, 4, 0},
      {refalrts::icSetRes, 0, 0, 0},
      {refalrts::icSpliceTile, 5, 6, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_FoldErrors

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction descr_FoldErrors(
  "FoldErrors",
  scope_FoldErrors::raa,
  scope_FoldErrors::functions,
  scope_FoldErrors::idents,
  scope_FoldErrors::numbers,
  scope_FoldErrors::strings
);
refalrts::RefalFunction& FoldErrors = descr_FoldErrors;

} // unnamed namespace

#else
static refalrts::FnResult func_FoldErrors(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 7 elems
  refalrts::Iter context[7];
  refalrts::zeros( context, 7 );
  // </0 & FoldErrors/4 e.OptionsAndErrors#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.OptionsAndErrors#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & DoFoldErrors/6 Tile{ HalfReuse: (/0 HalfReuse: )/4 AsIs: e.OptionsAndErrors#1/2 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[5] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[6], & DoFoldErrors ) )
    return refalrts::cNoMemory;
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_close_bracket( context[4] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[5] );
  refalrts::link_brackets( context[0], context[4] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalFunction descr_FoldErrors(func_FoldErrors, "FoldErrors");
refalrts::RefalFunction& FoldErrors = descr_FoldErrors;

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_DoFoldErrors {
    static refalrts::RefalFunction *functions[] = {
      & Error
    };
    using refalrts::idents;
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icReserveBacktrackStack, 2, 0, 0},
      {refalrts::icIssueMemory, 22, 0, 0},
      //FAST GEN: ( e.$ ) e.$
      //GLOBAL GEN: ( e.$ ) e.$
      // </0 & DoFoldErrors/4 (/7 e.idxB#0/5 )/8 e.idxT#0/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icBracketLeftSave, 0, 5, 2},
      // closed e.idxB#0 as range 5
      // closed e.idxT#0 as range 2
      {refalrts::icOnFailGoTo, +22, 0, 0},
      // ( e.idx ) e.idx
      // </0 & DoFoldErrors/4 (/7 e.Errors#1/5 )/8 e.Options#1/9 (/13 & Error/15 s.Num#1/16 s.ErrorCode#1/17 e.Info#1/11 )/14 e.OptionsAndErrors#1/2 >/1
      // closed e.Errors#1 as range 5
      {refalrts::icSave, 0, 18, 2},
      {refalrts::icEPrepare, 0, 9, 18},
      {refalrts::icEStart, 0, 9, 18},
      {refalrts::icSave, 0, 20, 18},
      {refalrts::icBracketLeftSave, 0, 11, 20},
      {refalrts::icFuncLeftSave, 15, 0, 11},
      // closed e.OptionsAndErrors#1 as range 20(2)
      {refalrts::icsVarLeft, 0, 16, 11},
      {refalrts::icsVarLeft, 0, 17, 11},
      // closed e.Info#1 as range 11
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} & Error/15 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoFoldErrors/4 AsIs: (/7 AsIs: e.Errors#1/5 HalfReuse: (/8 } Tile{ AsIs: s.Num#1/16 AsIs: s.ErrorCode#1/17 AsIs: e.Info#1/11 AsIs: )/14 } Tile{ HalfReuse: )/13 } Tile{ AsIs: e.Options#1/9 } Tile{ AsIs: e.OptionsAndErrors#1/20(2) } Tile{ AsIs: >/1 ]] }
      {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 13},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 7, 13, 0},
      {refalrts::icLinkBrackets, 8, 14, 0},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icSpliceEVar, 0, 0, 20},
      {refalrts::icSpliceEVar, 0, 0, 9},
      {refalrts::icSpliceTile, 13, 13, 0},
      {refalrts::icSpliceTile, 16, 14, 0},
      {refalrts::icTrash, 0, 0, 8},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      // ( e.idx ) e.idx
      // </0 & DoFoldErrors/4 (/7 e.Errors#1/5 )/8 e.Options#1/2 >/1
      // closed e.Errors#1 as range 5
      // closed e.Options#1 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & DoFoldErrors/4 {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Errors#1/5 AsIs: )/8 } Tile{ AsIs: e.Options#1/2 } Tile{ ]] }
      {refalrts::icLinkBrackets, 7, 8, 0},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, 0, 2},
      {refalrts::icSpliceTile, 7, 8, 0},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_DoFoldErrors

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction descr_DoFoldErrors(
  "DoFoldErrors",
  scope_DoFoldErrors::raa,
  scope_DoFoldErrors::functions,
  scope_DoFoldErrors::idents,
  scope_DoFoldErrors::numbers,
  scope_DoFoldErrors::strings
);
refalrts::RefalFunction& DoFoldErrors = descr_DoFoldErrors;

} // unnamed namespace

#else
static refalrts::FnResult func_DoFoldErrors(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
  //FAST GEN: ( e.$ ) e.$
  //GLOBAL GEN: ( e.$ ) e.$
  // </0 & DoFoldErrors/4 (/7 e.idxB#0/5 )/8 e.idxT#0/2 >/1
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
    // ( e.idx ) e.idx
    // </0 & DoFoldErrors/4 (/7 e.Errors#1/5 )/8 e.Options#1/9 (/13 & Error/15 s.Num#1/16 s.ErrorCode#1/17 e.Info#1/11 )/14 e.OptionsAndErrors#1/2 >/1
    // closed e.Errors#1 as range 5
    context[18] = context[2];
    context[19] = context[3];
    context[9] = 0;
    context[10] = 0;
    refalrts::start_e_loop();
    do {
      context[20] = context[18];
      context[21] = context[19];
      context[11] = 0;
      context[12] = 0;
      context[13] = refalrts::brackets_left( context[11], context[12], context[20], context[21] );
      if( ! context[13] )
        continue;
      refalrts::bracket_pointers(context[13], context[14]);
      context[15] = refalrts::function_left( & Error, context[11], context[12] );
      if( ! context[15] )
        continue;
      // closed e.OptionsAndErrors#1 as range 20(2)
      if( ! refalrts::svar_left( context[16], context[11], context[12] ) )
        continue;
      if( ! refalrts::svar_left( context[17], context[11], context[12] ) )
        continue;
      // closed e.Info#1 as range 11

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} & Error/15 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoFoldErrors/4 AsIs: (/7 AsIs: e.Errors#1/5 HalfReuse: (/8 } Tile{ AsIs: s.Num#1/16 AsIs: s.ErrorCode#1/17 AsIs: e.Info#1/11 AsIs: )/14 } Tile{ HalfReuse: )/13 } Tile{ AsIs: e.Options#1/9 } Tile{ AsIs: e.OptionsAndErrors#1/20(2) } Tile{ AsIs: >/1 ]] }
      refalrts::reinit_open_bracket( context[8] );
      refalrts::reinit_close_bracket( context[13] );
      refalrts::push_stack( context[1] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[7], context[13] );
      refalrts::link_brackets( context[8], context[14] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[20], context[21] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      res = refalrts::splice_evar( res, context[13], context[13] );
      res = refalrts::splice_evar( res, context[16], context[14] );
      refalrts::use( res );
      refalrts::splice_to_freelist_open( context[8], res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[9], context[10], context[18], context[19] ) );
  } while ( 0 );

  // ( e.idx ) e.idx
  // </0 & DoFoldErrors/4 (/7 e.Errors#1/5 )/8 e.Options#1/2 >/1
  // closed e.Errors#1 as range 5
  // closed e.Options#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & DoFoldErrors/4 {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Errors#1/5 AsIs: )/8 } Tile{ AsIs: e.Options#1/2 } Tile{ ]] }
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalFunction descr_DoFoldErrors(func_DoFoldErrors, "DoFoldErrors");
refalrts::RefalFunction& DoFoldErrors = descr_DoFoldErrors;

} // unnamed namespace

#endif

//End of file
//FROM Library
