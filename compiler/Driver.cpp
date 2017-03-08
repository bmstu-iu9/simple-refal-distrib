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
namespace /* unnamed */ {
extern refalrts::RefalFunction& gen_CompileFile_L1;
} // unnamed namespace

namespace /* unnamed */ {
extern refalrts::RefalFunction& gen_CompileFile_L2L1;
} // unnamed namespace

namespace /* unnamed */ {
extern refalrts::RefalFunction& gen_CompileFile_L2;
} // unnamed namespace

extern refalrts::RefalFunction& CompileFile;
namespace /* unnamed */ {
extern refalrts::RefalFunction& SelectOptFlags;
} // unnamed namespace

namespace /* unnamed */ {
extern refalrts::RefalFunction& gen_GrammarCheck_L1L1;
} // unnamed namespace

namespace /* unnamed */ {
extern refalrts::RefalFunction& gen_GrammarCheck_L1;
} // unnamed namespace

extern refalrts::RefalFunction& GrammarCheck;

#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_gen_CompileFile_L1 {
    static const char *filename = "Driver.cpp";
    static refalrts::RefalFunction *functions[] = {
      & CheckProgram
    };
    using refalrts::idents;
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icThisIsGeneratedFunction, 0, 0, 0},
      {refalrts::icLoadConstants, 0, 0, 0},
      {refalrts::icIssueMemory, 9, 0, 0},
      // </0 & CompileFile\1/4 t.ErrorList#2/5 e.AST#2/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::ictVarLeftSave, 0, 5, 2},
      // closed e.AST#2 as range 2
      //DEBUG: t.ErrorList#2: 5
      //DEBUG: e.AST#2: 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & CheckProgram/4 AsIs: t.ErrorList#2/5 AsIs: e.AST#2/2 AsIs: >/1 } e.AST#2/2/7 Tile{ ]] }
      {refalrts::icCopyEVar, 7, 2, 0},
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceTile, 7, 8, 0},
      {refalrts::icNextStep, 0, 0, 0},
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
  scope_gen_CompileFile_L1::strings,
  scope_gen_CompileFile_L1::filename
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
  //DEBUG: t.ErrorList#2: 5
  //DEBUG: e.AST#2: 2

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
refalrts::RefalNativeFunction descr_gen_CompileFile_L1(func_gen_CompileFile_L1, "CompileFile\\1");
refalrts::RefalFunction& gen_CompileFile_L1 = descr_gen_CompileFile_L1;

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_gen_CompileFile_L2L1 {
    static const char *filename = "Driver.cpp";
    static refalrts::RefalFunction *functions[] = {
      & Desugar,
      & Seq,
      & SaveFile,
      & GenProgram,
      & LowLevelRASL,
      & SelectOptFlags,
      & HighLevelRASL,
      & Fetch
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
      {refalrts::icThisIsGeneratedFunction, 0, 0, 0},
      {refalrts::icLoadConstants, 0, 0, 0},
      {refalrts::icReserveBacktrackStack, 1, 0, 0},
      {refalrts::icIssueMemory, 47, 0, 0},
      //FAST GEN: ( e.$ ) s.$ s.$ s.$ s.$ ( e.$ ) ( e.$ ) s.$
      //GLOBAL GEN: ( e.$ ) s.$ s.$ s.$ s.$ ( e.$ ) ( e.$ ) s.$
      // </0 & CompileFile\2\1/4 (/7 e.idxB#0/5 )/8 s.idxT#0/9 s.idxTV#0/10 s.idxTVV#0/11 s.idxTVVV#0/12 (/15 e.idxTVVVVB#0/13 )/16 (/19 e.idxTVVVVTB#0/17 )/20 s.idxTVVVVTT#0/21 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icBracketLeftSave, 0, 5, 2},
      // closed e.idxB#0 as range 5
      {refalrts::icsVarLeft, 0, 9, 2},
      {refalrts::icsVarLeft, 0, 10, 2},
      {refalrts::icsVarLeft, 0, 11, 2},
      {refalrts::icsVarLeft, 0, 12, 2},
      {refalrts::icBracketLeftSave, 0, 13, 2},
      {refalrts::icBracketLeftSave, 0, 17, 2},
      // closed e.idxTVVVVB#0 as range 13
      // closed e.idxTVVVVTB#0 as range 17
      {refalrts::icsVarLeft, 0, 21, 2},
      {refalrts::icEmpty, 0, 0, 2},
      {refalrts::icOnFailGoTo, +57, 0, 0},
      // ( e.idx ) s.idx s.idx s.idx s.idx ( e.idx ) ( e.idx ) # EL-NoErrors
      // </0 & CompileFile\2\1/4 (/7 e.AST#2/5 )/8 s.MarkupContext#1/9 s.Opt#1/10 s.GenMode#1/11 s.DebugInfo#1/12 (/15 e.SrcName#1/13 )/16 (/19 e.OutputName#1/17 )/20 # EL-NoErrors/21 >/1
      {refalrts::icIdentTerm, 0, 3, 21},
      // closed e.AST#2 as range 5
      // closed e.SrcName#1 as range 13
      // closed e.OutputName#1 as range 17
      //DEBUG: s.MarkupContext#1: 9
      //DEBUG: s.Opt#1: 10
      //DEBUG: s.GenMode#1: 11
      //DEBUG: s.DebugInfo#1: 12
      //DEBUG: e.AST#2: 5
      //DEBUG: e.SrcName#1: 13
      //DEBUG: e.OutputName#1: 17
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } </22 & Fetch/23 Tile{ AsIs: e.AST#2/5 } Tile{ AsIs: </0 Reuse: & Seq/4 AsIs: (/7 } Tile{ HalfReuse: & Desugar/8 AsIs: s.MarkupContext#1/9 } )/24 (/25 & HighLevelRASL/26 </27 & SelectOptFlags/28 Tile{ AsIs: s.Opt#1/10 } >/29 )/30 (/31 & LowLevelRASL/32 Tile{ AsIs: s.GenMode#1/11 AsIs: s.DebugInfo#1/12 } )/33 (/34 & GenProgram/35 Tile{ AsIs: (/15 AsIs: e.SrcName#1/13 AsIs: )/16 AsIs: (/19 AsIs: e.OutputName#1/17 AsIs: )/20 HalfReuse: )/21 HalfReuse: (/1 } & SaveFile/36 (/37 e.OutputName#1/17/38 )/40 )/41 >/42 >/43 # Success/44 e.OutputName#1/17/45 Tile{ ]] }
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 22},
      {refalrts::icAllocFunc, 0, 7, 23},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 24},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 25},
      {refalrts::icAllocFunc, 0, 6, 26},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 27},
      {refalrts::icAllocFunc, 0, 5, 28},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 29},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 30},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 31},
      {refalrts::icAllocFunc, 0, 4, 32},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 33},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 34},
      {refalrts::icAllocFunc, 0, 3, 35},
      {refalrts::icAllocFunc, 0, 2, 36},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 37},
      {refalrts::icCopyEVar, 38, 17, 0},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 40},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 41},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 42},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 43},
      {refalrts::icAllocIdent, 0, 2, 44},
      {refalrts::icCopyEVar, 45, 17, 0},
      {refalrts::icUpdateFunc, 0, 1, 4},
      {refalrts::icReinitFunc, 0, 0, 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 21},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 1},
      {refalrts::icPushStack, 0, 0, 43},
      {refalrts::icPushStack, 0, 0, 22},
      {refalrts::icPushStack, 0, 0, 42},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 1, 41, 0},
      {refalrts::icLinkBrackets, 37, 40, 0},
      {refalrts::icLinkBrackets, 34, 21, 0},
      {refalrts::icLinkBrackets, 19, 20, 0},
      {refalrts::icLinkBrackets, 15, 16, 0},
      {refalrts::icLinkBrackets, 31, 33, 0},
      {refalrts::icLinkBrackets, 25, 30, 0},
      {refalrts::icPushStack, 0, 0, 29},
      {refalrts::icPushStack, 0, 0, 27},
      {refalrts::icLinkBrackets, 7, 24, 0},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceTile, 45, 46, 0},
      {refalrts::icSpliceTile, 36, 44, 0},
      {refalrts::icSpliceTile, 15, 1, 0},
      {refalrts::icSpliceTile, 33, 35, 0},
      {refalrts::icSpliceTile, 11, 12, 0},
      {refalrts::icSpliceTile, 29, 32, 0},
      {refalrts::icSpliceTile, 10, 10, 0},
      {refalrts::icSpliceTile, 24, 28, 0},
      {refalrts::icSpliceTile, 8, 9, 0},
      {refalrts::icSpliceTile, 0, 7, 0},
      {refalrts::icSpliceEVar, 0, 0, 5},
      {refalrts::icSpliceTile, 22, 23, 0},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icProfilerStopSentence, 0, 0, 0},
      // ( e.idx ) s.idx s.idx s.idx s.idx ( e.idx ) ( e.idx ) # EL-HasErrors
      // </0 & CompileFile\2\1/4 (/7 e.AST#2/5 )/8 s.MarkupContext#1/9 s.Opt#1/10 s.GenMode#1/11 s.DebugInfo#1/12 (/15 e.SrcName#1/13 )/16 (/19 e.OutputName#1/17 )/20 # EL-HasErrors/21 >/1
      {refalrts::icIdentTerm, 0, 1, 21},
      // closed e.AST#2 as range 5
      // closed e.SrcName#1 as range 13
      // closed e.OutputName#1 as range 17
      //DEBUG: s.MarkupContext#1: 9
      //DEBUG: s.Opt#1: 10
      //DEBUG: s.GenMode#1: 11
      //DEBUG: s.DebugInfo#1: 12
      //DEBUG: e.AST#2: 5
      //DEBUG: e.SrcName#1: 13
      //DEBUG: e.OutputName#1: 17
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & CompileFile\2\1/4 (/7 e.AST#2/5 )/8 s.MarkupContext#1/9 s.Opt#1/10 s.GenMode#1/11 s.DebugInfo#1/12 (/15 e.SrcName#1/13 )/16 (/19 e.OutputName#1/17 )/20 # EL-HasErrors/21 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: # Fails/1 ]] }
      {refalrts::icReinitIdent, 0, 0, 1},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icNextStep, 0, 0, 0},
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
  scope_gen_CompileFile_L2L1::strings,
  scope_gen_CompileFile_L2L1::filename
);
refalrts::RefalFunction& gen_CompileFile_L2L1 = descr_gen_CompileFile_L2L1;

} // unnamed namespace

#else
static refalrts::FnResult func_gen_CompileFile_L2L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 47 elems
  refalrts::Iter context[47];
  refalrts::zeros( context, 47 );
  //FAST GEN: ( e.$ ) s.$ s.$ s.$ s.$ ( e.$ ) ( e.$ ) s.$
  //GLOBAL GEN: ( e.$ ) s.$ s.$ s.$ s.$ ( e.$ ) ( e.$ ) s.$
  // </0 & CompileFile\2\1/4 (/7 e.idxB#0/5 )/8 s.idxT#0/9 s.idxTV#0/10 s.idxTVV#0/11 s.idxTVVV#0/12 (/15 e.idxTVVVVB#0/13 )/16 (/19 e.idxTVVVVTB#0/17 )/20 s.idxTVVVVTT#0/21 >/1
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
  context[17] = 0;
  context[18] = 0;
  context[19] = refalrts::brackets_left( context[17], context[18], context[2], context[3] );
  if( ! context[19] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[19], context[20]);
  // closed e.idxTVVVVB#0 as range 13
  // closed e.idxTVVVVTB#0 as range 17
  if( ! refalrts::svar_left( context[21], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // ( e.idx ) s.idx s.idx s.idx s.idx ( e.idx ) ( e.idx ) # EL-NoErrors
    // </0 & CompileFile\2\1/4 (/7 e.AST#2/5 )/8 s.MarkupContext#1/9 s.Opt#1/10 s.GenMode#1/11 s.DebugInfo#1/12 (/15 e.SrcName#1/13 )/16 (/19 e.OutputName#1/17 )/20 # EL-NoErrors/21 >/1
    if( ! refalrts::ident_term(  & ident_EL_NoErrors<int>::name, context[21] ) )
      continue;
    // closed e.AST#2 as range 5
    // closed e.SrcName#1 as range 13
    // closed e.OutputName#1 as range 17
    //DEBUG: s.MarkupContext#1: 9
    //DEBUG: s.Opt#1: 10
    //DEBUG: s.GenMode#1: 11
    //DEBUG: s.DebugInfo#1: 12
    //DEBUG: e.AST#2: 5
    //DEBUG: e.SrcName#1: 13
    //DEBUG: e.OutputName#1: 17

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </22 & Fetch/23 Tile{ AsIs: e.AST#2/5 } Tile{ AsIs: </0 Reuse: & Seq/4 AsIs: (/7 } Tile{ HalfReuse: & Desugar/8 AsIs: s.MarkupContext#1/9 } )/24 (/25 & HighLevelRASL/26 </27 & SelectOptFlags/28 Tile{ AsIs: s.Opt#1/10 } >/29 )/30 (/31 & LowLevelRASL/32 Tile{ AsIs: s.GenMode#1/11 AsIs: s.DebugInfo#1/12 } )/33 (/34 & GenProgram/35 Tile{ AsIs: (/15 AsIs: e.SrcName#1/13 AsIs: )/16 AsIs: (/19 AsIs: e.OutputName#1/17 AsIs: )/20 HalfReuse: )/21 HalfReuse: (/1 } & SaveFile/36 (/37 e.OutputName#1/17/38 )/40 )/41 >/42 >/43 # Success/44 e.OutputName#1/17/45 Tile{ ]] }
    if( ! refalrts::alloc_open_call( context[22] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[23], & Fetch ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[24] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[25] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[26], & HighLevelRASL ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[27] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[28], & SelectOptFlags ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[29] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[30] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[31] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[32], & LowLevelRASL ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[33] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[34] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[35], & GenProgram ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[36], & SaveFile ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[37] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[38], context[39], context[17], context[18]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[40] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[41] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[42] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[43] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[44], & ident_Success<int>::name ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[45], context[46], context[17], context[18]))
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], & Seq );
    refalrts::reinit_name( context[8], & Desugar );
    refalrts::reinit_close_bracket( context[21] );
    refalrts::reinit_open_bracket( context[1] );
    refalrts::push_stack( context[43] );
    refalrts::push_stack( context[22] );
    refalrts::push_stack( context[42] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[1], context[41] );
    refalrts::link_brackets( context[37], context[40] );
    refalrts::link_brackets( context[34], context[21] );
    refalrts::link_brackets( context[19], context[20] );
    refalrts::link_brackets( context[15], context[16] );
    refalrts::link_brackets( context[31], context[33] );
    refalrts::link_brackets( context[25], context[30] );
    refalrts::push_stack( context[29] );
    refalrts::push_stack( context[27] );
    refalrts::link_brackets( context[7], context[24] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[45], context[46] );
    res = refalrts::splice_evar( res, context[36], context[44] );
    res = refalrts::splice_evar( res, context[15], context[1] );
    res = refalrts::splice_evar( res, context[33], context[35] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[29], context[32] );
    res = refalrts::splice_evar( res, context[10], context[10] );
    res = refalrts::splice_evar( res, context[24], context[28] );
    res = refalrts::splice_evar( res, context[8], context[9] );
    res = refalrts::splice_evar( res, context[0], context[7] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[22], context[23] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // ( e.idx ) s.idx s.idx s.idx s.idx ( e.idx ) ( e.idx ) # EL-HasErrors
  // </0 & CompileFile\2\1/4 (/7 e.AST#2/5 )/8 s.MarkupContext#1/9 s.Opt#1/10 s.GenMode#1/11 s.DebugInfo#1/12 (/15 e.SrcName#1/13 )/16 (/19 e.OutputName#1/17 )/20 # EL-HasErrors/21 >/1
  if( ! refalrts::ident_term(  & ident_EL_HasErrors<int>::name, context[21] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.AST#2 as range 5
  // closed e.SrcName#1 as range 13
  // closed e.OutputName#1 as range 17
  //DEBUG: s.MarkupContext#1: 9
  //DEBUG: s.Opt#1: 10
  //DEBUG: s.GenMode#1: 11
  //DEBUG: s.DebugInfo#1: 12
  //DEBUG: e.AST#2: 5
  //DEBUG: e.SrcName#1: 13
  //DEBUG: e.OutputName#1: 17

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & CompileFile\2\1/4 (/7 e.AST#2/5 )/8 s.MarkupContext#1/9 s.Opt#1/10 s.GenMode#1/11 s.DebugInfo#1/12 (/15 e.SrcName#1/13 )/16 (/19 e.OutputName#1/17 )/20 # EL-HasErrors/21 {REMOVED TILE}
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
refalrts::RefalNativeFunction descr_gen_CompileFile_L2L1(func_gen_CompileFile_L2L1, "CompileFile\\2\\1");
refalrts::RefalFunction& gen_CompileFile_L2L1 = descr_gen_CompileFile_L2L1;

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_gen_CompileFile_L2 {
    static const char *filename = "Driver.cpp";
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
      {refalrts::icThisIsGeneratedFunction, 0, 0, 0},
      {refalrts::icLoadConstants, 0, 0, 0},
      {refalrts::icIssueMemory, 28, 0, 0},
      // </0 & CompileFile\2/4 s.MarkupContext#1/5 s.Opt#1/6 s.GenMode#1/7 s.DebugInfo#1/8 (/11 e.SrcName#1/9 )/12 (/15 e.OutputName#1/13 )/16 t.ErrorList#2/17 e.AST#2/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icsVarLeft, 0, 5, 2},
      {refalrts::icsVarLeft, 0, 6, 2},
      {refalrts::icsVarLeft, 0, 7, 2},
      {refalrts::icsVarLeft, 0, 8, 2},
      {refalrts::icBracketLeftSave, 0, 9, 2},
      {refalrts::icBracketLeftSave, 0, 13, 2},
      // closed e.SrcName#1 as range 9
      // closed e.OutputName#1 as range 13
      {refalrts::ictVarLeftSave, 0, 17, 2},
      // closed e.AST#2 as range 2
      //DEBUG: s.MarkupContext#1: 5
      //DEBUG: s.Opt#1: 6
      //DEBUG: s.GenMode#1: 7
      //DEBUG: s.DebugInfo#1: 8
      //DEBUG: e.SrcName#1: 9
      //DEBUG: e.OutputName#1: 13
      //DEBUG: t.ErrorList#2: 17
      //DEBUG: e.AST#2: 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 } & Fetch/19 </20 & EL-Destroy/21 Tile{ AsIs: t.ErrorList#2/17 } >/22 </23 & @create_closure@/24 & CompileFile\2\1/25 (/26 Tile{ AsIs: e.AST#2/2 } Tile{ HalfReuse: )/4 AsIs: s.MarkupContext#1/5 AsIs: s.Opt#1/6 AsIs: s.GenMode#1/7 AsIs: s.DebugInfo#1/8 AsIs: (/11 AsIs: e.SrcName#1/9 AsIs: )/12 AsIs: (/15 AsIs: e.OutputName#1/13 AsIs: )/16 } >/27 Tile{ AsIs: >/1 ]] }
      {refalrts::icAllocFunc, 0, 3, 19},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 20},
      {refalrts::icAllocFunc, 0, 2, 21},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 22},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 23},
      {refalrts::icAllocFunc, 0, 1, 24},
      {refalrts::icAllocFunc, 0, 0, 25},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 26},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 27},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 4},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icPushStack, 0, 0, 27},
      {refalrts::icPushStack, 0, 0, 23},
      {refalrts::icLinkBrackets, 15, 16, 0},
      {refalrts::icLinkBrackets, 11, 12, 0},
      {refalrts::icLinkBrackets, 26, 4, 0},
      {refalrts::icPushStack, 0, 0, 22},
      {refalrts::icPushStack, 0, 0, 20},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icSpliceTile, 27, 27, 0},
      {refalrts::icSpliceTile, 4, 16, 0},
      {refalrts::icSpliceEVar, 0, 0, 2},
      {refalrts::icSpliceTile, 22, 26, 0},
      {refalrts::icSpliceTile, 17, 18, 0},
      {refalrts::icSpliceTile, 19, 21, 0},
      {refalrts::icNextStep, 0, 0, 0},
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
  scope_gen_CompileFile_L2::strings,
  scope_gen_CompileFile_L2::filename
);
refalrts::RefalFunction& gen_CompileFile_L2 = descr_gen_CompileFile_L2;

} // unnamed namespace

#else
static refalrts::FnResult func_gen_CompileFile_L2(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 28 elems
  refalrts::Iter context[28];
  refalrts::zeros( context, 28 );
  // </0 & CompileFile\2/4 s.MarkupContext#1/5 s.Opt#1/6 s.GenMode#1/7 s.DebugInfo#1/8 (/11 e.SrcName#1/9 )/12 (/15 e.OutputName#1/13 )/16 t.ErrorList#2/17 e.AST#2/2 >/1
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
  if( ! refalrts::svar_left( context[8], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
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
  // closed e.SrcName#1 as range 9
  // closed e.OutputName#1 as range 13
  context[18] = refalrts::tvar_left( context[17], context[2], context[3] );
  if( ! context[18] )
    return refalrts::cRecognitionImpossible;
  // closed e.AST#2 as range 2
  //DEBUG: s.MarkupContext#1: 5
  //DEBUG: s.Opt#1: 6
  //DEBUG: s.GenMode#1: 7
  //DEBUG: s.DebugInfo#1: 8
  //DEBUG: e.SrcName#1: 9
  //DEBUG: e.OutputName#1: 13
  //DEBUG: t.ErrorList#2: 17
  //DEBUG: e.AST#2: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 } & Fetch/19 </20 & EL-Destroy/21 Tile{ AsIs: t.ErrorList#2/17 } >/22 </23 & @create_closure@/24 & CompileFile\2\1/25 (/26 Tile{ AsIs: e.AST#2/2 } Tile{ HalfReuse: )/4 AsIs: s.MarkupContext#1/5 AsIs: s.Opt#1/6 AsIs: s.GenMode#1/7 AsIs: s.DebugInfo#1/8 AsIs: (/11 AsIs: e.SrcName#1/9 AsIs: )/12 AsIs: (/15 AsIs: e.OutputName#1/13 AsIs: )/16 } >/27 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_name( context[19], & Fetch ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[20] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[21], & EL_Destroy ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[22] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[23] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[24], & refalrts::create_closure ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[25], & gen_CompileFile_L2L1 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[26] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[27] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_close_bracket( context[4] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[27] );
  refalrts::push_stack( context[23] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[26], context[4] );
  refalrts::push_stack( context[22] );
  refalrts::push_stack( context[20] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[27], context[27] );
  res = refalrts::splice_evar( res, context[4], context[16] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[22], context[26] );
  res = refalrts::splice_evar( res, context[17], context[18] );
  res = refalrts::splice_evar( res, context[19], context[21] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalNativeFunction descr_gen_CompileFile_L2(func_gen_CompileFile_L2, "CompileFile\\2");
refalrts::RefalFunction& gen_CompileFile_L2 = descr_gen_CompileFile_L2;

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_CompileFile {
    static const char *filename = "Driver.cpp";
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
      {refalrts::icThisIsGeneratedFunction, 0, 0, 0},
      {refalrts::icLoadConstants, 0, 0, 0},
      {refalrts::icIssueMemory, 39, 0, 0},
      // </0 & CompileFile/4 s.GenMode#1/5 s.Opt#1/6 (/9 s.MarkupContext#1/15 s.DebugInfo#1/16 )/10 (/13 e.SrcName#1/11 )/14 e.OutputName#1/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icsVarLeft, 0, 5, 2},
      {refalrts::icsVarLeft, 0, 6, 2},
      {refalrts::icBracketLeftSave, 0, 7, 2},
      {refalrts::icBracketLeftSave, 0, 11, 2},
      // closed e.SrcName#1 as range 11
      // closed e.OutputName#1 as range 2
      {refalrts::icsVarLeft, 0, 15, 7},
      {refalrts::icsVarLeft, 0, 16, 7},
      {refalrts::icEmpty, 0, 0, 7},
      //DEBUG: s.GenMode#1: 5
      //DEBUG: s.Opt#1: 6
      //DEBUG: e.SrcName#1: 11
      //DEBUG: e.OutputName#1: 2
      //DEBUG: s.MarkupContext#1: 15
      //DEBUG: s.DebugInfo#1: 16
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} s.GenMode#1/5 {REMOVED TILE} {REMOVED TILE} s.DebugInfo#1/16 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 } e.SrcName#1/11/17 </19 & Seq/20 & LoadSource/21 & LexFolding/22 (/23 & ParseProgram/24 </25 & EL-Create/26 e.SrcName#1/11/27 >/29 )/30 & CompileFile\1/31 </32 & @create_closure@/33 & CompileFile\2/34 Tile{ AsIs: s.MarkupContext#1/15 } Tile{ AsIs: s.Opt#1/6 HalfReuse: s.GenMode1 #5/9 } Tile{ HalfReuse: s.DebugInfo1 #16/10 AsIs: (/13 AsIs: e.SrcName#1/11 AsIs: )/14 } (/35 Tile{ AsIs: e.OutputName#1/2 } )/36 >/37 >/38 Tile{ AsIs: >/1 ]] }
      {refalrts::icCopyEVar, 17, 11, 0},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 19},
      {refalrts::icAllocFunc, 0, 8, 20},
      {refalrts::icAllocFunc, 0, 7, 21},
      {refalrts::icAllocFunc, 0, 6, 22},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 23},
      {refalrts::icAllocFunc, 0, 5, 24},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 25},
      {refalrts::icAllocFunc, 0, 4, 26},
      {refalrts::icCopyEVar, 27, 11, 0},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 29},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 30},
      {refalrts::icAllocFunc, 0, 3, 31},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 32},
      {refalrts::icAllocFunc, 0, 2, 33},
      {refalrts::icAllocFunc, 0, 1, 34},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 35},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 36},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 37},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 38},
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icReinitSVar, 0, 5, 9},
      {refalrts::icReinitSVar, 0, 16, 10},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icPushStack, 0, 0, 38},
      {refalrts::icPushStack, 0, 0, 19},
      {refalrts::icPushStack, 0, 0, 37},
      {refalrts::icPushStack, 0, 0, 32},
      {refalrts::icLinkBrackets, 35, 36, 0},
      {refalrts::icLinkBrackets, 13, 14, 0},
      {refalrts::icLinkBrackets, 23, 30, 0},
      {refalrts::icPushStack, 0, 0, 29},
      {refalrts::icPushStack, 0, 0, 25},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icSpliceTile, 36, 38, 0},
      {refalrts::icSpliceEVar, 0, 0, 2},
      {refalrts::icSpliceTile, 35, 35, 0},
      {refalrts::icSpliceTile, 10, 14, 0},
      {refalrts::icSpliceTile, 6, 9, 0},
      {refalrts::icSpliceTile, 15, 15, 0},
      {refalrts::icSpliceTile, 19, 34, 0},
      {refalrts::icSpliceTile, 17, 18, 0},
      {refalrts::icTrash, 0, 0, 4},
      {refalrts::icNextStep, 0, 0, 0},
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
  scope_CompileFile::strings,
  scope_CompileFile::filename
);
refalrts::RefalFunction& CompileFile = descr_CompileFile;

#else
static refalrts::FnResult func_CompileFile(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 39 elems
  refalrts::Iter context[39];
  refalrts::zeros( context, 39 );
  // </0 & CompileFile/4 s.GenMode#1/5 s.Opt#1/6 (/9 s.MarkupContext#1/15 s.DebugInfo#1/16 )/10 (/13 e.SrcName#1/11 )/14 e.OutputName#1/2 >/1
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
  // closed e.SrcName#1 as range 11
  // closed e.OutputName#1 as range 2
  if( ! refalrts::svar_left( context[15], context[7], context[8] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[16], context[7], context[8] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[7], context[8] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: s.GenMode#1: 5
  //DEBUG: s.Opt#1: 6
  //DEBUG: e.SrcName#1: 11
  //DEBUG: e.OutputName#1: 2
  //DEBUG: s.MarkupContext#1: 15
  //DEBUG: s.DebugInfo#1: 16

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} s.GenMode#1/5 {REMOVED TILE} {REMOVED TILE} s.DebugInfo#1/16 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 } e.SrcName#1/11/17 </19 & Seq/20 & LoadSource/21 & LexFolding/22 (/23 & ParseProgram/24 </25 & EL-Create/26 e.SrcName#1/11/27 >/29 )/30 & CompileFile\1/31 </32 & @create_closure@/33 & CompileFile\2/34 Tile{ AsIs: s.MarkupContext#1/15 } Tile{ AsIs: s.Opt#1/6 HalfReuse: s.GenMode1 #5/9 } Tile{ HalfReuse: s.DebugInfo1 #16/10 AsIs: (/13 AsIs: e.SrcName#1/11 AsIs: )/14 } (/35 Tile{ AsIs: e.OutputName#1/2 } )/36 >/37 >/38 Tile{ AsIs: >/1 ]] }
  if (! refalrts::copy_evar(context[17], context[18], context[11], context[12]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[19] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[20], & Seq ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[21], & LoadSource ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[22], & LexFolding ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[23] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[24], & ParseProgram ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[25] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[26], & EL_Create ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[27], context[28], context[11], context[12]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[29] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[30] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[31], & gen_CompileFile_L1 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[32] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[33], & refalrts::create_closure ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[34], & gen_CompileFile_L2 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[35] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[36] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[37] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[38] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], & Fetch );
  refalrts::reinit_svar( context[9], context[5] );
  refalrts::reinit_svar( context[10], context[16] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[38] );
  refalrts::push_stack( context[19] );
  refalrts::push_stack( context[37] );
  refalrts::push_stack( context[32] );
  refalrts::link_brackets( context[35], context[36] );
  refalrts::link_brackets( context[13], context[14] );
  refalrts::link_brackets( context[23], context[30] );
  refalrts::push_stack( context[29] );
  refalrts::push_stack( context[25] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[36], context[38] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[35], context[35] );
  res = refalrts::splice_evar( res, context[10], context[14] );
  res = refalrts::splice_evar( res, context[6], context[9] );
  res = refalrts::splice_evar( res, context[15], context[15] );
  res = refalrts::splice_evar( res, context[19], context[34] );
  res = refalrts::splice_evar( res, context[17], context[18] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[4], res );
  return refalrts::cSuccess;
}

refalrts::RefalNativeFunction descr_CompileFile(func_CompileFile, "CompileFile");
refalrts::RefalFunction& CompileFile = descr_CompileFile;

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_SelectOptFlags {
    static const char *filename = "Driver.cpp";
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
      {refalrts::icThisIsGeneratedFunction, 0, 0, 0},
      {refalrts::icLoadConstants, 0, 0, 0},
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
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icProfilerStopSentence, 0, 0, 0},
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
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icProfilerStopSentence, 0, 0, 0},
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
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icProfilerStopSentence, 0, 0, 0},
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
      {refalrts::icNextStep, 0, 0, 0},
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
  scope_SelectOptFlags::strings,
  scope_SelectOptFlags::filename
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
  refalrts::stop_sentence();

  do {
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
  refalrts::stop_sentence();

  do {
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
  refalrts::stop_sentence();

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
refalrts::RefalNativeFunction descr_SelectOptFlags(func_SelectOptFlags, "SelectOptFlags");
refalrts::RefalFunction& SelectOptFlags = descr_SelectOptFlags;

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_gen_GrammarCheck_L1L1 {
    static const char *filename = "Driver.cpp";
    using refalrts::functions;
    static const refalrts::RefalIdentifier idents[] = {
      & ident_Fails<int>::name,
      & ident_EL_HasErrors<int>::name,
      & ident_Success<int>::name,
      & ident_EL_NoErrors<int>::name
    };
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icThisIsGeneratedFunction, 0, 0, 0},
      {refalrts::icLoadConstants, 0, 0, 0},
      {refalrts::icReserveBacktrackStack, 1, 0, 0},
      {refalrts::icIssueMemory, 6, 0, 0},
      //FAST GEN: s.$
      //GLOBAL GEN: s.$
      // </0 & GrammarCheck\1\1/4 s.idx#0/5 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icsVarLeft, 0, 5, 2},
      {refalrts::icEmpty, 0, 0, 2},
      {refalrts::icOnFailGoTo, +6, 0, 0},
      // # EL-NoErrors
      // </0 & GrammarCheck\1\1/4 # EL-NoErrors/5 >/1
      {refalrts::icIdentTerm, 0, 3, 5},
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & GrammarCheck\1\1/4 # EL-NoErrors/5 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: # Success/1 ]] }
      {refalrts::icReinitIdent, 0, 2, 1},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icProfilerStopSentence, 0, 0, 0},
      // # EL-HasErrors
      // </0 & GrammarCheck\1\1/4 # EL-HasErrors/5 >/1
      {refalrts::icIdentTerm, 0, 1, 5},
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & GrammarCheck\1\1/4 # EL-HasErrors/5 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: # Fails/1 ]] }
      {refalrts::icReinitIdent, 0, 0, 1},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icTrashLeftEdge, 0, 0, 0},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_gen_GrammarCheck_L1L1

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction descr_gen_GrammarCheck_L1L1(
  "GrammarCheck\\1\\1",
  scope_gen_GrammarCheck_L1L1::raa,
  scope_gen_GrammarCheck_L1L1::functions,
  scope_gen_GrammarCheck_L1L1::idents,
  scope_gen_GrammarCheck_L1L1::numbers,
  scope_gen_GrammarCheck_L1L1::strings,
  scope_gen_GrammarCheck_L1L1::filename
);
refalrts::RefalFunction& gen_GrammarCheck_L1L1 = descr_gen_GrammarCheck_L1L1;

} // unnamed namespace

#else
static refalrts::FnResult func_gen_GrammarCheck_L1L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  //FAST GEN: s.$
  //GLOBAL GEN: s.$
  // </0 & GrammarCheck\1\1/4 s.idx#0/5 >/1
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
    // # EL-NoErrors
    // </0 & GrammarCheck\1\1/4 # EL-NoErrors/5 >/1
    if( ! refalrts::ident_term(  & ident_EL_NoErrors<int>::name, context[5] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & GrammarCheck\1\1/4 # EL-NoErrors/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # Success/1 ]] }
    refalrts::reinit_ident( context[1], & ident_Success<int>::name );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // # EL-HasErrors
  // </0 & GrammarCheck\1\1/4 # EL-HasErrors/5 >/1
  if( ! refalrts::ident_term(  & ident_EL_HasErrors<int>::name, context[5] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & GrammarCheck\1\1/4 # EL-HasErrors/5 {REMOVED TILE}
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
refalrts::RefalNativeFunction descr_gen_GrammarCheck_L1L1(func_gen_GrammarCheck_L1L1, "GrammarCheck\\1\\1");
refalrts::RefalFunction& gen_GrammarCheck_L1L1 = descr_gen_GrammarCheck_L1L1;

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_gen_GrammarCheck_L1 {
    static const char *filename = "Driver.cpp";
    static refalrts::RefalFunction *functions[] = {
      & Fetch,
      & gen_GrammarCheck_L1L1,
      & EL_Destroy
    };
    using refalrts::idents;
    using refalrts::numbers;
    using refalrts::strings;
    static const refalrts::RASLCommand raa[] = {
      {refalrts::icThisIsGeneratedFunction, 0, 0, 0},
      {refalrts::icLoadConstants, 0, 0, 0},
      {refalrts::icIssueMemory, 11, 0, 0},
      // </0 & GrammarCheck\1/4 t.ErrorList#2/5 e.AST#2/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::ictVarLeftSave, 0, 5, 2},
      // closed e.AST#2 as range 2
      //DEBUG: t.ErrorList#2: 5
      //DEBUG: e.AST#2: 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} e.AST#2/2 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 } </7 & EL-Destroy/8 Tile{ AsIs: t.ErrorList#2/5 } >/9 & GrammarCheck\1\1/10 Tile{ AsIs: >/1 ]] }
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 7},
      {refalrts::icAllocFunc, 0, 2, 8},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 9},
      {refalrts::icAllocFunc, 0, 1, 10},
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icPushStack, 0, 0, 9},
      {refalrts::icPushStack, 0, 0, 7},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icSpliceTile, 9, 10, 0},
      {refalrts::icSpliceTile, 5, 6, 0},
      {refalrts::icSpliceTile, 7, 8, 0},
      {refalrts::icTrash, 0, 0, 4},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_gen_GrammarCheck_L1

} // unnamed namespace

namespace /* unnamed */ {
refalrts::RASLFunction descr_gen_GrammarCheck_L1(
  "GrammarCheck\\1",
  scope_gen_GrammarCheck_L1::raa,
  scope_gen_GrammarCheck_L1::functions,
  scope_gen_GrammarCheck_L1::idents,
  scope_gen_GrammarCheck_L1::numbers,
  scope_gen_GrammarCheck_L1::strings,
  scope_gen_GrammarCheck_L1::filename
);
refalrts::RefalFunction& gen_GrammarCheck_L1 = descr_gen_GrammarCheck_L1;

} // unnamed namespace

#else
static refalrts::FnResult func_gen_GrammarCheck_L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
  // </0 & GrammarCheck\1/4 t.ErrorList#2/5 e.AST#2/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  // closed e.AST#2 as range 2
  //DEBUG: t.ErrorList#2: 5
  //DEBUG: e.AST#2: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} e.AST#2/2 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 } </7 & EL-Destroy/8 Tile{ AsIs: t.ErrorList#2/5 } >/9 & GrammarCheck\1\1/10 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[8], & EL_Destroy ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[10], & gen_GrammarCheck_L1L1 ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], & Fetch );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[9] );
  refalrts::push_stack( context[7] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[4], res );
  return refalrts::cSuccess;
}

namespace /* unnamed */ {
refalrts::RefalNativeFunction descr_gen_GrammarCheck_L1(func_gen_GrammarCheck_L1, "GrammarCheck\\1");
refalrts::RefalFunction& gen_GrammarCheck_L1 = descr_gen_GrammarCheck_L1;

} // unnamed namespace

#endif
#ifdef INTERPRET
namespace /* unnamed */ {
  namespace scope_GrammarCheck {
    static const char *filename = "Driver.cpp";
    static refalrts::RefalFunction *functions[] = {
      & Fetch,
      & gen_GrammarCheck_L1,
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
      {refalrts::icThisIsGeneratedFunction, 0, 0, 0},
      {refalrts::icLoadConstants, 0, 0, 0},
      {refalrts::icIssueMemory, 19, 0, 0},
      // </0 & GrammarCheck/4 e.SrcName#1/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      // closed e.SrcName#1 as range 2
      //DEBUG: e.SrcName#1: 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 AsIs: e.SrcName#1/2 HalfReuse: </1 } & Seq/5 & LoadSource/6 & LexFolding/7 (/8 & ParseProgram/9 </10 & EL-Create/11 e.SrcName#1/2/12 >/14 )/15 & GrammarCheck\1/16 >/17 >/18 Tile{ ]] }
      {refalrts::icAllocFunc, 0, 6, 5},
      {refalrts::icAllocFunc, 0, 5, 6},
      {refalrts::icAllocFunc, 0, 4, 7},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 8},
      {refalrts::icAllocFunc, 0, 3, 9},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 10},
      {refalrts::icAllocFunc, 0, 2, 11},
      {refalrts::icCopyEVar, 12, 2, 0},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 14},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 15},
      {refalrts::icAllocFunc, 0, 1, 16},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 17},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 18},
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 1},
      {refalrts::icPushStack, 0, 0, 18},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icPushStack, 0, 0, 17},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icLinkBrackets, 8, 15, 0},
      {refalrts::icPushStack, 0, 0, 14},
      {refalrts::icPushStack, 0, 0, 10},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceTile, 5, 18, 0},
      {refalrts::icNextStep, 0, 0, 0},
      {refalrts::icEnd, 0, 0, 0}
    };
  } // namespace scope_GrammarCheck

} // unnamed namespace

refalrts::RASLFunction descr_GrammarCheck(
  "GrammarCheck",
  scope_GrammarCheck::raa,
  scope_GrammarCheck::functions,
  scope_GrammarCheck::idents,
  scope_GrammarCheck::numbers,
  scope_GrammarCheck::strings,
  scope_GrammarCheck::filename
);
refalrts::RefalFunction& GrammarCheck = descr_GrammarCheck;

#else
static refalrts::FnResult func_GrammarCheck(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  // </0 & GrammarCheck/4 e.SrcName#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.SrcName#1 as range 2
  //DEBUG: e.SrcName#1: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 AsIs: e.SrcName#1/2 HalfReuse: </1 } & Seq/5 & LoadSource/6 & LexFolding/7 (/8 & ParseProgram/9 </10 & EL-Create/11 e.SrcName#1/2/12 >/14 )/15 & GrammarCheck\1/16 >/17 >/18 Tile{ ]] }
  if( ! refalrts::alloc_name( context[5], & Seq ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[6], & LoadSource ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[7], & LexFolding ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[9], & ParseProgram ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[11], & EL_Create ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[12], context[13], context[2], context[3]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[16], & gen_GrammarCheck_L1 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[17] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[18] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], & Fetch );
  refalrts::reinit_open_call( context[1] );
  refalrts::push_stack( context[18] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[17] );
  refalrts::push_stack( context[1] );
  refalrts::link_brackets( context[8], context[15] );
  refalrts::push_stack( context[14] );
  refalrts::push_stack( context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[18] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

refalrts::RefalNativeFunction descr_GrammarCheck(func_GrammarCheck, "GrammarCheck");
refalrts::RefalFunction& GrammarCheck = descr_GrammarCheck;

#endif

//End of file
