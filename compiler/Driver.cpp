// Automatically generated file. Don't edit!
#include "refalrts.h"


// identifier #Conjoint
template <typename SREFAL_PARAM_INT>
struct ident_Conjoint {
  static const char *name() {
    return "Conjoint";
  }
};

// identifier #Disjoint
template <typename SREFAL_PARAM_INT>
struct ident_Disjoint {
  static const char *name() {
    return "Disjoint";
  }
};

// identifier #EL-HasErrors
template <typename SREFAL_PARAM_INT>
struct ident_EL_HasErrors {
  static const char *name() {
    return "EL-HasErrors";
  }
};

// identifier #EL-NoErrors
template <typename SREFAL_PARAM_INT>
struct ident_EL_NoErrors {
  static const char *name() {
    return "EL-NoErrors";
  }
};

// identifier #Fails
template <typename SREFAL_PARAM_INT>
struct ident_Fails {
  static const char *name() {
    return "Fails";
  }
};

// identifier #NoOpt
template <typename SREFAL_PARAM_INT>
struct ident_NoOpt {
  static const char *name() {
    return "NoOpt";
  }
};

// identifier #OptBoth
template <typename SREFAL_PARAM_INT>
struct ident_OptBoth {
  static const char *name() {
    return "OptBoth";
  }
};

// identifier #OptNone
template <typename SREFAL_PARAM_INT>
struct ident_OptNone {
  static const char *name() {
    return "OptNone";
  }
};

// identifier #OptPattern
template <typename SREFAL_PARAM_INT>
struct ident_OptPattern {
  static const char *name() {
    return "OptPattern";
  }
};

// identifier #OptResult
template <typename SREFAL_PARAM_INT>
struct ident_OptResult {
  static const char *name() {
    return "OptResult";
  }
};

// identifier #Success
template <typename SREFAL_PARAM_INT>
struct ident_Success {
  static const char *name() {
    return "Success";
  }
};

extern refalrts::RefalFunction& Fetch;
extern refalrts::RefalFunction& Seq;
extern refalrts::RefalFunction& SaveFile;
extern refalrts::RefalFunction& LoadSource;
extern refalrts::RefalFunction& LexFolding;
extern refalrts::RefalFunction& ParseProgram;
extern refalrts::RefalFunction& EL_Create;
extern refalrts::RefalFunction& EL_Destroy;
extern refalrts::RefalFunction& CheckProgram;
extern refalrts::RefalFunction& Desugar;
extern refalrts::RefalFunction& HighLevelRASL;
extern refalrts::RefalFunction& LowLevelRASL;
extern refalrts::RefalFunction& GenProgram;
#ifdef INTERPRET
namespace /* unnamed */ {
extern refalrts::RefalFunction& gen_CompileFile_L1;
} // unnamed namespace

#else
namespace /* unnamed */ {
extern refalrts::RefalFunction& gen_CompileFile_L1;
} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
extern refalrts::RefalFunction& gen_CompileFile_L2L1;
} // unnamed namespace

#else
namespace /* unnamed */ {
extern refalrts::RefalFunction& gen_CompileFile_L2L1;
} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
extern refalrts::RefalFunction& gen_CompileFile_L2;
} // unnamed namespace

#else
namespace /* unnamed */ {
extern refalrts::RefalFunction& gen_CompileFile_L2;
} // unnamed namespace

#endif
#ifdef INTERPRET
extern refalrts::RefalFunction& CompileFile;
#else
extern refalrts::RefalFunction& CompileFile;
#endif
#ifdef INTERPRET
namespace /* unnamed */ {
extern refalrts::RefalFunction& SelectOptFlags;
} // unnamed namespace

#else
namespace /* unnamed */ {
extern refalrts::RefalFunction& SelectOptFlags;
} // unnamed namespace

#endif

#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_gen_CompileFile_L1 {
    static refalrts::RefalFunction *functions[] = {
      & CheckProgram
    };
    using refalrts::idents;
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icIssueMemory, 9, 0, 0},
      // </0 & CompileFile\1/4 t.ErrorList#2/5 e.AST#2/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::ictVarLeftSave, 0, 5, 2},
      // closed e.AST#2 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & CheckProgram/4 AsIs: t.ErrorList#2/5 AsIs: e.AST#2/2 AsIs: >/1 } e.AST#2/2/7 Tile{ ]] }
      {refalrts::icCopyEVar, 7, 2, 0},
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceTile, 7, 8, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_gen_CompileFile_L1

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction descr_gen_CompileFile_L1(
  "CompileFile\\1",
  scope_gen_CompileFile_L1::raa,
  scope_gen_CompileFile_L1::functions,
  scope_gen_CompileFile_L1::idents,
  scope_gen_CompileFile_L1::numbers,
  scope_gen_CompileFile_L1::strings
);
refalrts::RefalFunction& gen_CompileFile_L1 = descr_gen_CompileFile_L1;

} // unnamed namespace

#else
static refalrts::FnResult func_gen_CompileFile_L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  // </0 & CompileFile\1/4 t.ErrorList#2/5 e.AST#2/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  // closed e.AST#2 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & CheckProgram/4 AsIs: t.ErrorList#2/5 AsIs: e.AST#2/2 AsIs: >/1 } e.AST#2/2/7 Tile{ ]] }
  if (! refalrts::copy_evar(context[7], context[8], context[2], context[3]))
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], & CheckProgram );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalFunction descr_gen_CompileFile_L1(func_gen_CompileFile_L1, "CompileFile\\1");
refalrts::RefalFunction& gen_CompileFile_L1 = descr_gen_CompileFile_L1;

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_gen_CompileFile_L2L1 {
    static refalrts::RefalFunction *functions[] = {
      & SelectOptFlags,
      & Fetch,
      & SaveFile,
      & GenProgram,
      & LowLevelRASL,
      & HighLevelRASL,
      & Desugar,
      & Seq
    };
    static const refalrts::RefalIdentifier idents[] = {
      & ident_Fails<int>::name,
      & ident_EL_HasErrors<int>::name,
      & ident_Success<int>::name,
      & ident_EL_NoErrors<int>::name
    };
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icReserveBacktrackStack, 1, 0, 0},
      {refalrts::icIssueMemory, 43, 0, 0},
      //FAST GEN: ( e.$ ) s.$ s.$ ( e.$ ) ( e.$ ) s.$
      //GLOBAL GEN: ( e.$ ) s.$ s.$ ( e.$ ) ( e.$ ) s.$
      // </0 & CompileFile\2\1/4 (/7 e.idxB#0/5 )/8 s.idxT#0/9 s.idxTV#0/10 (/13 e.idxTVVB#0/11 )/14 (/17 e.idxTVVTB#0/15 )/18 s.idxTVVTT#0/19 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icBracketLeftSave, 0, 5, 2},
      // closed e.idxB#0 as range 5
      {refalrts::icsVarLeft, 0, 9, 2},
      {refalrts::icsVarLeft, 0, 10, 2},
      {refalrts::icBracketLeftSave, 0, 11, 2},
      {refalrts::icBracketLeftSave, 0, 15, 2},
      // closed e.idxTVVB#0 as range 11
      // closed e.idxTVVTB#0 as range 15
      {refalrts::icsVarLeft, 0, 19, 2},
      {refalrts::icEmpty, 0, 0, 2},
      {refalrts::icOnFailGoTo, +53, 0, 0},
      // ( e.idx ) s.idx s.idx ( e.idx ) ( e.idx ) # EL-NoErrors
      // </0 & CompileFile\2\1/4 (/7 e.AST#2/5 )/8 s.Opt#1/9 s.GenMode#1/10 (/13 e.SrcName#1/11 )/14 (/17 e.OutputName#1/15 )/18 # EL-NoErrors/19 >/1
      {refalrts::icIdentTerm, 0, 3, 19},
      // closed e.AST#2 as range 5
      // closed e.SrcName#1 as range 11
      // closed e.OutputName#1 as range 15
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 } Tile{ AsIs: e.AST#2/5 } </20 & Seq/21 & Desugar/22 Tile{ AsIs: (/7 } & HighLevelRASL/23 </24 Tile{ HalfReuse: & SelectOptFlags/8 AsIs: s.Opt#1/9 } >/25 )/26 (/27 & LowLevelRASL/28 Tile{ AsIs: s.GenMode#1/10 } )/29 (/30 & GenProgram/31 Tile{ AsIs: (/13 AsIs: e.SrcName#1/11 AsIs: )/14 AsIs: (/17 AsIs: e.OutputName#1/15 AsIs: )/18 HalfReuse: )/19 HalfReuse: (/1 } & SaveFile/32 (/33 e.OutputName#1/15/34 )/36 )/37 >/38 >/39 # Success/40 e.OutputName#1/15/41 Tile{ ]] }
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 20},
      {refalrts::icAllocFunc, 0, 7, 21},
      {refalrts::icAllocFunc, 0, 6, 22},
      {refalrts::icAllocFunc, 0, 5, 23},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 24},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 25},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 26},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 27},
      {refalrts::icAllocFunc, 0, 4, 28},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 29},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 30},
      {refalrts::icAllocFunc, 0, 3, 31},
      {refalrts::icAllocFunc, 0, 2, 32},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 33},
      {refalrts::icCopyEVar, 34, 15, 0},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 36},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 37},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 38},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 39},
      {refalrts::icAllocIdent, 0, 2, 40},
      {refalrts::icCopyEVar, 41, 15, 0},
      {refalrts::icUpdateFunc, 0, 1, 4},
      {refalrts::icReinitFunc, 0, 0, 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 19},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 1},
      {refalrts::icPushStack, 0, 0, 39},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icPushStack, 0, 0, 38},
      {refalrts::icPushStack, 0, 0, 20},
      {refalrts::icLinkBrackets, 1, 37, 0},
      {refalrts::icLinkBrackets, 33, 36, 0},
      {refalrts::icLinkBrackets, 30, 19, 0},
      {refalrts::icLinkBrackets, 17, 18, 0},
      {refalrts::icLinkBrackets, 13, 14, 0},
      {refalrts::icLinkBrackets, 27, 29, 0},
      {refalrts::icLinkBrackets, 7, 26, 0},
      {refalrts::icPushStack, 0, 0, 25},
      {refalrts::icPushStack, 0, 0, 24},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceTile, 41, 42, 0},
      {refalrts::icSpliceTile, 32, 40, 0},
      {refalrts::icSpliceTile, 13, 1, 0},
      {refalrts::icSpliceTile, 29, 31, 0},
      {refalrts::icSpliceTile, 10, 10, 0},
      {refalrts::icSpliceTile, 25, 28, 0},
      {refalrts::icSpliceTile, 8, 9, 0},
      {refalrts::icSpliceTile, 23, 24, 0},
      {refalrts::icSpliceTile, 7, 7, 0},
      {refalrts::icSpliceTile, 20, 22, 0},
      {refalrts::icSpliceEVar, 0, 0, 5},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      // ( e.idx ) s.idx s.idx ( e.idx ) ( e.idx ) # EL-HasErrors
      // </0 & CompileFile\2\1/4 (/7 e.AST#2/5 )/8 s.Opt#1/9 s.GenMode#1/10 (/13 e.SrcName#1/11 )/14 (/17 e.OutputName#1/15 )/18 # EL-HasErrors/19 >/1
      {refalrts::icIdentTerm, 0, 1, 19},
      // closed e.AST#2 as range 5
      // closed e.SrcName#1 as range 11
      // closed e.OutputName#1 as range 15
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & CompileFile\2\1/4 (/7 e.AST#2/5 )/8 s.Opt#1/9 s.GenMode#1/10 (/13 e.SrcName#1/11 )/14 (/17 e.OutputName#1/15 )/18 # EL-HasErrors/19 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: # Fails/1 ]] }
      {refalrts::icReinitIdent, 0, 0, 1},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_gen_CompileFile_L2L1

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction descr_gen_CompileFile_L2L1(
  "CompileFile\\2\\1",
  scope_gen_CompileFile_L2L1::raa,
  scope_gen_CompileFile_L2L1::functions,
  scope_gen_CompileFile_L2L1::idents,
  scope_gen_CompileFile_L2L1::numbers,
  scope_gen_CompileFile_L2L1::strings
);
refalrts::RefalFunction& gen_CompileFile_L2L1 = descr_gen_CompileFile_L2L1;

} // unnamed namespace

#else
static refalrts::FnResult func_gen_CompileFile_L2L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 43 elems
  refalrts::Iter context[43];
  refalrts::zeros( context, 43 );
  //FAST GEN: ( e.$ ) s.$ s.$ ( e.$ ) ( e.$ ) s.$
  //GLOBAL GEN: ( e.$ ) s.$ s.$ ( e.$ ) ( e.$ ) s.$
  // </0 & CompileFile\2\1/4 (/7 e.idxB#0/5 )/8 s.idxT#0/9 s.idxTV#0/10 (/13 e.idxTVVB#0/11 )/14 (/17 e.idxTVVTB#0/15 )/18 s.idxTVVTT#0/19 >/1
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
  // closed e.idxTVVB#0 as range 11
  // closed e.idxTVVTB#0 as range 15
  if( ! refalrts::svar_left( context[19], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    refalrts::start_sentence();
    // ( e.idx ) s.idx s.idx ( e.idx ) ( e.idx ) # EL-NoErrors
    // </0 & CompileFile\2\1/4 (/7 e.AST#2/5 )/8 s.Opt#1/9 s.GenMode#1/10 (/13 e.SrcName#1/11 )/14 (/17 e.OutputName#1/15 )/18 # EL-NoErrors/19 >/1
    if( ! refalrts::ident_term(  & ident_EL_NoErrors<int>::name, context[19] ) )
      continue;
    // closed e.AST#2 as range 5
    // closed e.SrcName#1 as range 11
    // closed e.OutputName#1 as range 15

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 } Tile{ AsIs: e.AST#2/5 } </20 & Seq/21 & Desugar/22 Tile{ AsIs: (/7 } & HighLevelRASL/23 </24 Tile{ HalfReuse: & SelectOptFlags/8 AsIs: s.Opt#1/9 } >/25 )/26 (/27 & LowLevelRASL/28 Tile{ AsIs: s.GenMode#1/10 } )/29 (/30 & GenProgram/31 Tile{ AsIs: (/13 AsIs: e.SrcName#1/11 AsIs: )/14 AsIs: (/17 AsIs: e.OutputName#1/15 AsIs: )/18 HalfReuse: )/19 HalfReuse: (/1 } & SaveFile/32 (/33 e.OutputName#1/15/34 )/36 )/37 >/38 >/39 # Success/40 e.OutputName#1/15/41 Tile{ ]] }
    if( ! refalrts::alloc_open_call( context[20] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[21], & Seq ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[22], & Desugar ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[23], & HighLevelRASL ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[24] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[25] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[26] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[27] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[28], & LowLevelRASL ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[29] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[30] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[31], & GenProgram ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[32], & SaveFile ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[33] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[34], context[35], context[15], context[16]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[36] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[37] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[38] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[39] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[40], & ident_Success<int>::name ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[41], context[42], context[15], context[16]))
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], & Fetch );
    refalrts::reinit_name( context[8], & SelectOptFlags );
    refalrts::reinit_close_bracket( context[19] );
    refalrts::reinit_open_bracket( context[1] );
    refalrts::push_stack( context[39] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[38] );
    refalrts::push_stack( context[20] );
    refalrts::link_brackets( context[1], context[37] );
    refalrts::link_brackets( context[33], context[36] );
    refalrts::link_brackets( context[30], context[19] );
    refalrts::link_brackets( context[17], context[18] );
    refalrts::link_brackets( context[13], context[14] );
    refalrts::link_brackets( context[27], context[29] );
    refalrts::link_brackets( context[7], context[26] );
    refalrts::push_stack( context[25] );
    refalrts::push_stack( context[24] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[41], context[42] );
    res = refalrts::splice_evar( res, context[32], context[40] );
    res = refalrts::splice_evar( res, context[13], context[1] );
    res = refalrts::splice_evar( res, context[29], context[31] );
    res = refalrts::splice_evar( res, context[10], context[10] );
    res = refalrts::splice_evar( res, context[25], context[28] );
    res = refalrts::splice_evar( res, context[8], context[9] );
    res = refalrts::splice_evar( res, context[23], context[24] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    res = refalrts::splice_evar( res, context[20], context[22] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );

  // ( e.idx ) s.idx s.idx ( e.idx ) ( e.idx ) # EL-HasErrors
  // </0 & CompileFile\2\1/4 (/7 e.AST#2/5 )/8 s.Opt#1/9 s.GenMode#1/10 (/13 e.SrcName#1/11 )/14 (/17 e.OutputName#1/15 )/18 # EL-HasErrors/19 >/1
  if( ! refalrts::ident_term(  & ident_EL_HasErrors<int>::name, context[19] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.AST#2 as range 5
  // closed e.SrcName#1 as range 11
  // closed e.OutputName#1 as range 15

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & CompileFile\2\1/4 (/7 e.AST#2/5 )/8 s.Opt#1/9 s.GenMode#1/10 (/13 e.SrcName#1/11 )/14 (/17 e.OutputName#1/15 )/18 # EL-HasErrors/19 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: # Fails/1 ]] }
  refalrts::reinit_ident( context[1], & ident_Fails<int>::name );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalFunction descr_gen_CompileFile_L2L1(func_gen_CompileFile_L2L1, "CompileFile\\2\\1");
refalrts::RefalFunction& gen_CompileFile_L2L1 = descr_gen_CompileFile_L2L1;

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_gen_CompileFile_L2 {
    static refalrts::RefalFunction *functions[] = {
      & gen_CompileFile_L2L1,
      & refalrts::create_closure,
      & EL_Destroy,
      & Fetch
    };
    using refalrts::idents;
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icIssueMemory, 26, 0, 0},
      // </0 & CompileFile\2/4 s.Opt#1/5 s.GenMode#1/6 (/9 e.SrcName#1/7 )/10 (/13 e.OutputName#1/11 )/14 t.ErrorList#2/15 e.AST#2/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icsVarLeft, 0, 5, 2},
      {refalrts::icsVarLeft, 0, 6, 2},
      {refalrts::icBracketLeftSave, 0, 7, 2},
      {refalrts::icBracketLeftSave, 0, 11, 2},
      // closed e.SrcName#1 as range 7
      // closed e.OutputName#1 as range 11
      {refalrts::ictVarLeftSave, 0, 15, 2},
      // closed e.AST#2 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 } & Fetch/17 </18 & EL-Destroy/19 Tile{ AsIs: t.ErrorList#2/15 } >/20 </21 & @create_closure@/22 & CompileFile\2\1/23 (/24 Tile{ AsIs: e.AST#2/2 } Tile{ HalfReuse: )/4 AsIs: s.Opt#1/5 AsIs: s.GenMode#1/6 AsIs: (/9 AsIs: e.SrcName#1/7 AsIs: )/10 AsIs: (/13 AsIs: e.OutputName#1/11 AsIs: )/14 } >/25 Tile{ AsIs: >/1 ]] }
      {refalrts::icAllocFunc, 0, 3, 17},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 18},
      {refalrts::icAllocFunc, 0, 2, 19},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 20},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 21},
      {refalrts::icAllocFunc, 0, 1, 22},
      {refalrts::icAllocFunc, 0, 0, 23},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 24},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 25},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 4},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icPushStack, 0, 0, 25},
      {refalrts::icPushStack, 0, 0, 21},
      {refalrts::icLinkBrackets, 13, 14, 0},
      {refalrts::icLinkBrackets, 9, 10, 0},
      {refalrts::icLinkBrackets, 24, 4, 0},
      {refalrts::icPushStack, 0, 0, 20},
      {refalrts::icPushStack, 0, 0, 18},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icSpliceTile, 25, 25, 0},
      {refalrts::icSpliceTile, 4, 14, 0},
      {refalrts::icSpliceEVar, 0, 0, 2},
      {refalrts::icSpliceTile, 20, 24, 0},
      {refalrts::icSpliceTile, 15, 16, 0},
      {refalrts::icSpliceTile, 17, 19, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_gen_CompileFile_L2

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction descr_gen_CompileFile_L2(
  "CompileFile\\2",
  scope_gen_CompileFile_L2::raa,
  scope_gen_CompileFile_L2::functions,
  scope_gen_CompileFile_L2::idents,
  scope_gen_CompileFile_L2::numbers,
  scope_gen_CompileFile_L2::strings
);
refalrts::RefalFunction& gen_CompileFile_L2 = descr_gen_CompileFile_L2;

} // unnamed namespace

#else
static refalrts::FnResult func_gen_CompileFile_L2(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 26 elems
  refalrts::Iter context[26];
  refalrts::zeros( context, 26 );
  // </0 & CompileFile\2/4 s.Opt#1/5 s.GenMode#1/6 (/9 e.SrcName#1/7 )/10 (/13 e.OutputName#1/11 )/14 t.ErrorList#2/15 e.AST#2/2 >/1
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
  context[11] = 0;
  context[12] = 0;
  context[13] = refalrts::brackets_left( context[11], context[12], context[2], context[3] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[13], context[14]);
  // closed e.SrcName#1 as range 7
  // closed e.OutputName#1 as range 11
  context[16] = refalrts::tvar_left( context[15], context[2], context[3] );
  if( ! context[16] )
    return refalrts::cRecognitionImpossible;
  // closed e.AST#2 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 } & Fetch/17 </18 & EL-Destroy/19 Tile{ AsIs: t.ErrorList#2/15 } >/20 </21 & @create_closure@/22 & CompileFile\2\1/23 (/24 Tile{ AsIs: e.AST#2/2 } Tile{ HalfReuse: )/4 AsIs: s.Opt#1/5 AsIs: s.GenMode#1/6 AsIs: (/9 AsIs: e.SrcName#1/7 AsIs: )/10 AsIs: (/13 AsIs: e.OutputName#1/11 AsIs: )/14 } >/25 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_name( context[17], & Fetch ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[18] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[19], & EL_Destroy ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[20] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[21] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[22], & refalrts::create_closure ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[23], & gen_CompileFile_L2L1 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[24] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[25] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_close_bracket( context[4] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[25] );
  refalrts::push_stack( context[21] );
  refalrts::link_brackets( context[13], context[14] );
  refalrts::link_brackets( context[9], context[10] );
  refalrts::link_brackets( context[24], context[4] );
  refalrts::push_stack( context[20] );
  refalrts::push_stack( context[18] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[25], context[25] );
  res = refalrts::splice_evar( res, context[4], context[14] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[20], context[24] );
  res = refalrts::splice_evar( res, context[15], context[16] );
  res = refalrts::splice_evar( res, context[17], context[19] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalFunction descr_gen_CompileFile_L2(func_gen_CompileFile_L2, "CompileFile\\2");
refalrts::RefalFunction& gen_CompileFile_L2 = descr_gen_CompileFile_L2;

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_CompileFile {
    static refalrts::RefalFunction *functions[] = {
      & Fetch,
      & gen_CompileFile_L2,
      & refalrts::create_closure,
      & gen_CompileFile_L1,
      & EL_Create,
      & ParseProgram,
      & LexFolding,
      & LoadSource,
      & Seq
    };
    using refalrts::idents;
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icIssueMemory, 33, 0, 0},
      // </0 & CompileFile/4 s.GenMode#1/5 s.Opt#1/6 (/9 e.SrcName#1/7 )/10 e.OutputName#1/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icsVarLeft, 0, 5, 2},
      {refalrts::icsVarLeft, 0, 6, 2},
      {refalrts::icBracketLeftSave, 0, 7, 2},
      // closed e.SrcName#1 as range 7
      // closed e.OutputName#1 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 } e.SrcName#1/7/11 </13 & Seq/14 & LoadSource/15 & LexFolding/16 (/17 & ParseProgram/18 </19 & EL-Create/20 e.SrcName#1/7/21 >/23 )/24 & CompileFile\1/25 </26 & @create_closure@/27 & CompileFile\2/28 Tile{ AsIs: s.Opt#1/6 } Tile{ AsIs: s.GenMode#1/5 } Tile{ AsIs: (/9 AsIs: e.SrcName#1/7 AsIs: )/10 } (/29 Tile{ AsIs: e.OutputName#1/2 } )/30 >/31 >/32 Tile{ AsIs: >/1 ]] }
      {refalrts::icCopyEVar, 11, 7, 0},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 13},
      {refalrts::icAllocFunc, 0, 8, 14},
      {refalrts::icAllocFunc, 0, 7, 15},
      {refalrts::icAllocFunc, 0, 6, 16},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 17},
      {refalrts::icAllocFunc, 0, 5, 18},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 19},
      {refalrts::icAllocFunc, 0, 4, 20},
      {refalrts::icCopyEVar, 21, 7, 0},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 23},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 24},
      {refalrts::icAllocFunc, 0, 3, 25},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 26},
      {refalrts::icAllocFunc, 0, 2, 27},
      {refalrts::icAllocFunc, 0, 1, 28},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 29},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 30},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 31},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 32},
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icPushStack, 0, 0, 32},
      {refalrts::icPushStack, 0, 0, 13},
      {refalrts::icPushStack, 0, 0, 31},
      {refalrts::icPushStack, 0, 0, 26},
      {refalrts::icLinkBrackets, 29, 30, 0},
      {refalrts::icLinkBrackets, 9, 10, 0},
      {refalrts::icLinkBrackets, 17, 24, 0},
      {refalrts::icPushStack, 0, 0, 23},
      {refalrts::icPushStack, 0, 0, 19},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icSpliceTile, 30, 32, 0},
      {refalrts::icSpliceEVar, 0, 0, 2},
      {refalrts::icSpliceTile, 29, 29, 0},
      {refalrts::icSpliceTile, 9, 10, 0},
      {refalrts::icSpliceTile, 5, 5, 0},
      {refalrts::icSpliceTile, 6, 6, 0},
      {refalrts::icSpliceTile, 13, 28, 0},
      {refalrts::icSpliceTile, 11, 12, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_CompileFile

} // unnamed namespace

refalrts::RASLFunction descr_CompileFile(
  "CompileFile",
  scope_CompileFile::raa,
  scope_CompileFile::functions,
  scope_CompileFile::idents,
  scope_CompileFile::numbers,
  scope_CompileFile::strings
);
refalrts::RefalFunction& CompileFile = descr_CompileFile;

#else
static refalrts::FnResult func_CompileFile(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 33 elems
  refalrts::Iter context[33];
  refalrts::zeros( context, 33 );
  // </0 & CompileFile/4 s.GenMode#1/5 s.Opt#1/6 (/9 e.SrcName#1/7 )/10 e.OutputName#1/2 >/1
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
  // closed e.SrcName#1 as range 7
  // closed e.OutputName#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 } e.SrcName#1/7/11 </13 & Seq/14 & LoadSource/15 & LexFolding/16 (/17 & ParseProgram/18 </19 & EL-Create/20 e.SrcName#1/7/21 >/23 )/24 & CompileFile\1/25 </26 & @create_closure@/27 & CompileFile\2/28 Tile{ AsIs: s.Opt#1/6 } Tile{ AsIs: s.GenMode#1/5 } Tile{ AsIs: (/9 AsIs: e.SrcName#1/7 AsIs: )/10 } (/29 Tile{ AsIs: e.OutputName#1/2 } )/30 >/31 >/32 Tile{ AsIs: >/1 ]] }
  if (! refalrts::copy_evar(context[11], context[12], context[7], context[8]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[14], & Seq ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[15], & LoadSource ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[16], & LexFolding ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[17] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[18], & ParseProgram ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[19] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[20], & EL_Create ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[21], context[22], context[7], context[8]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[23] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[24] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[25], & gen_CompileFile_L1 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[26] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[27], & refalrts::create_closure ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[28], & gen_CompileFile_L2 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[29] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[30] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[31] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[32] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], & Fetch );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[32] );
  refalrts::push_stack( context[13] );
  refalrts::push_stack( context[31] );
  refalrts::push_stack( context[26] );
  refalrts::link_brackets( context[29], context[30] );
  refalrts::link_brackets( context[9], context[10] );
  refalrts::link_brackets( context[17], context[24] );
  refalrts::push_stack( context[23] );
  refalrts::push_stack( context[19] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[30], context[32] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[29], context[29] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[5], context[5] );
  res = refalrts::splice_evar( res, context[6], context[6] );
  res = refalrts::splice_evar( res, context[13], context[28] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

refalrts::RefalFunction descr_CompileFile(func_CompileFile, "CompileFile");
refalrts::RefalFunction& CompileFile = descr_CompileFile;

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_SelectOptFlags {
    using refalrts::functions;
    static const refalrts::RefalIdentifier idents[] = {
      & ident_OptResult<int>::name,
      & ident_Conjoint<int>::name,
      & ident_OptBoth<int>::name,
      & ident_Disjoint<int>::name,
      & ident_NoOpt<int>::name,
      & ident_OptPattern<int>::name,
      & ident_OptNone<int>::name
    };
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icReserveBacktrackStack, 3, 0, 0},
      {refalrts::icIssueMemory, 6, 0, 0},
      //FAST GEN: s.$
      //GLOBAL GEN: s.$
      // </0 & SelectOptFlags/4 s.idx#0/5 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icsVarLeft, 0, 5, 2},
      {refalrts::icEmpty, 0, 0, 2},
      {refalrts::icOnFailGoTo, +7, 0, 0},
      // # OptNone
      // </0 & SelectOptFlags/4 # OptNone/5 >/1
      {refalrts::icIdentTerm, 0, 6, 5},
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & SelectOptFlags/4 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ Reuse: # Disjoint/5 HalfReuse: # NoOpt/1 ]] }
      {refalrts::icUpdateIdent, 0, 3, 5},
      {refalrts::icReinitIdent, 0, 4, 1},
      {refalrts::icSetRes, 0, 0, 5},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +7, 0, 0},
      // # OptPattern
      // </0 & SelectOptFlags/4 # OptPattern/5 >/1
      {refalrts::icIdentTerm, 0, 5, 5},
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & SelectOptFlags/4 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ Reuse: # Conjoint/5 HalfReuse: # NoOpt/1 ]] }
      {refalrts::icUpdateIdent, 0, 1, 5},
      {refalrts::icReinitIdent, 0, 4, 1},
      {refalrts::icSetRes, 0, 0, 5},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icOnFailGoTo, +7, 0, 0},
      // # OptResult
      // </0 & SelectOptFlags/4 # OptResult/5 >/1
      {refalrts::icIdentTerm, 0, 0, 5},
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & SelectOptFlags/4 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ Reuse: # Disjoint/5 HalfReuse: # OptResult/1 ]] }
      {refalrts::icUpdateIdent, 0, 3, 5},
      {refalrts::icReinitIdent, 0, 0, 1},
      {refalrts::icSetRes, 0, 0, 5},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      // # OptBoth
      // </0 & SelectOptFlags/4 # OptBoth/5 >/1
      {refalrts::icIdentTerm, 0, 2, 5},
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & SelectOptFlags/4 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ Reuse: # Conjoint/5 HalfReuse: # OptResult/1 ]] }
      {refalrts::icUpdateIdent, 0, 1, 5},
      {refalrts::icReinitIdent, 0, 0, 1},
      {refalrts::icSetRes, 0, 0, 5},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_SelectOptFlags

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction descr_SelectOptFlags(
  "SelectOptFlags",
  scope_SelectOptFlags::raa,
  scope_SelectOptFlags::functions,
  scope_SelectOptFlags::idents,
  scope_SelectOptFlags::numbers,
  scope_SelectOptFlags::strings
);
refalrts::RefalFunction& SelectOptFlags = descr_SelectOptFlags;

} // unnamed namespace

#else
static refalrts::FnResult func_SelectOptFlags(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  //FAST GEN: s.$
  //GLOBAL GEN: s.$
  // </0 & SelectOptFlags/4 s.idx#0/5 >/1
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
    // # OptNone
    // </0 & SelectOptFlags/4 # OptNone/5 >/1
    if( ! refalrts::ident_term(  & ident_OptNone<int>::name, context[5] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & SelectOptFlags/4 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ Reuse: # Disjoint/5 HalfReuse: # NoOpt/1 ]] }
    refalrts::update_ident( context[5], & ident_Disjoint<int>::name );
    refalrts::reinit_ident( context[1], & ident_NoOpt<int>::name );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[5];
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // # OptPattern
    // </0 & SelectOptFlags/4 # OptPattern/5 >/1
    if( ! refalrts::ident_term(  & ident_OptPattern<int>::name, context[5] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & SelectOptFlags/4 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ Reuse: # Conjoint/5 HalfReuse: # NoOpt/1 ]] }
    refalrts::update_ident( context[5], & ident_Conjoint<int>::name );
    refalrts::reinit_ident( context[1], & ident_NoOpt<int>::name );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[5];
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // # OptResult
    // </0 & SelectOptFlags/4 # OptResult/5 >/1
    if( ! refalrts::ident_term(  & ident_OptResult<int>::name, context[5] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & SelectOptFlags/4 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ Reuse: # Disjoint/5 HalfReuse: # OptResult/1 ]] }
    refalrts::update_ident( context[5], & ident_Disjoint<int>::name );
    refalrts::reinit_ident( context[1], & ident_OptResult<int>::name );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[5];
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );

  // # OptBoth
  // </0 & SelectOptFlags/4 # OptBoth/5 >/1
  if( ! refalrts::ident_term(  & ident_OptBoth<int>::name, context[5] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & SelectOptFlags/4 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ Reuse: # Conjoint/5 HalfReuse: # OptResult/1 ]] }
  refalrts::update_ident( context[5], & ident_Conjoint<int>::name );
  refalrts::reinit_ident( context[1], & ident_OptResult<int>::name );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[5];
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalFunction descr_SelectOptFlags(func_SelectOptFlags, "SelectOptFlags");
refalrts::RefalFunction& SelectOptFlags = descr_SelectOptFlags;

} // unnamed namespace

#endif

//End of file
