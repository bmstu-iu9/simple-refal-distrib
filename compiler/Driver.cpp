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
      {refalrts::icReserveBacktrackStack, 1, 0, 0},
      {refalrts::icIssueMemory, 46, 0, 0},
      //FAST GEN: ( e.$ ) s.$ s.$ s.$ ( e.$ ) ( e.$ ) s.$
      //GLOBAL GEN: ( e.$ ) s.$ s.$ s.$ ( e.$ ) ( e.$ ) s.$
      // </0 & CompileFile\2\1/4 (/7 e.idxB#0/5 )/8 s.idxT#0/9 s.idxTV#0/10 s.idxTVV#0/11 (/14 e.idxTVVVB#0/12 )/15 (/18 e.idxTVVVTB#0/16 )/19 s.idxTVVVTT#0/20 >/1
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
      {refalrts::icsVarLeft, 0, 20, 2},
      {refalrts::icEmpty, 0, 0, 2},
      {refalrts::icOnFailGoTo, +57, 0, 0},
      // ( e.idx ) s.idx s.idx s.idx ( e.idx ) ( e.idx ) # EL-NoErrors
      // </0 & CompileFile\2\1/4 (/7 e.AST#2/5 )/8 s.MarkupContext#1/9 s.Opt#1/10 s.GenMode#1/11 (/14 e.SrcName#1/12 )/15 (/18 e.OutputName#1/16 )/19 # EL-NoErrors/20 >/1
      {refalrts::icIdentTerm, 0, 3, 20},
      // closed e.AST#2 as range 5
      // closed e.SrcName#1 as range 12
      // closed e.OutputName#1 as range 16
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } </21 & Fetch/22 Tile{ AsIs: e.AST#2/5 } Tile{ AsIs: </0 Reuse: & Seq/4 AsIs: (/7 } Tile{ HalfReuse: & Desugar/8 AsIs: s.MarkupContext#1/9 } )/23 (/24 & HighLevelRASL/25 </26 & SelectOptFlags/27 Tile{ AsIs: s.Opt#1/10 } >/28 )/29 (/30 & LowLevelRASL/31 Tile{ AsIs: s.GenMode#1/11 } )/32 (/33 & GenProgram/34 Tile{ AsIs: (/14 AsIs: e.SrcName#1/12 AsIs: )/15 AsIs: (/18 AsIs: e.OutputName#1/16 AsIs: )/19 HalfReuse: )/20 HalfReuse: (/1 } & SaveFile/35 (/36 e.OutputName#1/16/37 )/39 )/40 >/41 >/42 # Success/43 e.OutputName#1/16/44 Tile{ ]] }
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 21},
      {refalrts::icAllocFunc, 0, 7, 22},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 23},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 24},
      {refalrts::icAllocFunc, 0, 6, 25},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 26},
      {refalrts::icAllocFunc, 0, 5, 27},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 28},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 29},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 30},
      {refalrts::icAllocFunc, 0, 4, 31},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 32},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 33},
      {refalrts::icAllocFunc, 0, 3, 34},
      {refalrts::icAllocFunc, 0, 2, 35},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 36},
      {refalrts::icCopyEVar, 37, 16, 0},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 39},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 40},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 41},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 42},
      {refalrts::icAllocIdent, 0, 2, 43},
      {refalrts::icCopyEVar, 44, 16, 0},
      {refalrts::icUpdateFunc, 0, 1, 4},
      {refalrts::icReinitFunc, 0, 0, 8},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 20},
      {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 1},
      {refalrts::icPushStack, 0, 0, 42},
      {refalrts::icPushStack, 0, 0, 21},
      {refalrts::icPushStack, 0, 0, 41},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icLinkBrackets, 1, 40, 0},
      {refalrts::icLinkBrackets, 36, 39, 0},
      {refalrts::icLinkBrackets, 33, 20, 0},
      {refalrts::icLinkBrackets, 18, 19, 0},
      {refalrts::icLinkBrackets, 14, 15, 0},
      {refalrts::icLinkBrackets, 30, 32, 0},
      {refalrts::icLinkBrackets, 24, 29, 0},
      {refalrts::icPushStack, 0, 0, 28},
      {refalrts::icPushStack, 0, 0, 26},
      {refalrts::icLinkBrackets, 7, 23, 0},
      {refalrts::icSetResRightEdge, 0, 0, 0},
      {refalrts::icSpliceTile, 44, 45, 0},
      {refalrts::icSpliceTile, 35, 43, 0},
      {refalrts::icSpliceTile, 14, 1, 0},
      {refalrts::icSpliceTile, 32, 34, 0},
      {refalrts::icSpliceTile, 11, 11, 0},
      {refalrts::icSpliceTile, 28, 31, 0},
      {refalrts::icSpliceTile, 10, 10, 0},
      {refalrts::icSpliceTile, 23, 27, 0},
      {refalrts::icSpliceTile, 8, 9, 0},
      {refalrts::icSpliceTile, 0, 7, 0},
      {refalrts::icSpliceEVar, 0, 0, 5},
      {refalrts::icSpliceTile, 21, 22, 0},
      {refalrts::icReturnResult_NoTrash, 0, 0, 0},
      // ( e.idx ) s.idx s.idx s.idx ( e.idx ) ( e.idx ) # EL-HasErrors
      // </0 & CompileFile\2\1/4 (/7 e.AST#2/5 )/8 s.MarkupContext#1/9 s.Opt#1/10 s.GenMode#1/11 (/14 e.SrcName#1/12 )/15 (/18 e.OutputName#1/16 )/19 # EL-HasErrors/20 >/1
      {refalrts::icIdentTerm, 0, 1, 20},
      // closed e.AST#2 as range 5
      // closed e.SrcName#1 as range 12
      // closed e.OutputName#1 as range 16
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} </0 & CompileFile\2\1/4 (/7 e.AST#2/5 )/8 s.MarkupContext#1/9 s.Opt#1/10 s.GenMode#1/11 (/14 e.SrcName#1/12 )/15 (/18 e.OutputName#1/16 )/19 # EL-HasErrors/20 {REMOVED TILE}
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
  // issue here memory for vars with 46 elems
  refalrts::Iter context[46];
  refalrts::zeros( context, 46 );
  //FAST GEN: ( e.$ ) s.$ s.$ s.$ ( e.$ ) ( e.$ ) s.$
  //GLOBAL GEN: ( e.$ ) s.$ s.$ s.$ ( e.$ ) ( e.$ ) s.$
  // </0 & CompileFile\2\1/4 (/7 e.idxB#0/5 )/8 s.idxT#0/9 s.idxTV#0/10 s.idxTVV#0/11 (/14 e.idxTVVVB#0/12 )/15 (/18 e.idxTVVVTB#0/16 )/19 s.idxTVVVTT#0/20 >/1
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
  if( ! refalrts::svar_left( context[20], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    refalrts::start_sentence();
    // ( e.idx ) s.idx s.idx s.idx ( e.idx ) ( e.idx ) # EL-NoErrors
    // </0 & CompileFile\2\1/4 (/7 e.AST#2/5 )/8 s.MarkupContext#1/9 s.Opt#1/10 s.GenMode#1/11 (/14 e.SrcName#1/12 )/15 (/18 e.OutputName#1/16 )/19 # EL-NoErrors/20 >/1
    if( ! refalrts::ident_term(  & ident_EL_NoErrors<int>::name, context[20] ) )
      continue;
    // closed e.AST#2 as range 5
    // closed e.SrcName#1 as range 12
    // closed e.OutputName#1 as range 16

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </21 & Fetch/22 Tile{ AsIs: e.AST#2/5 } Tile{ AsIs: </0 Reuse: & Seq/4 AsIs: (/7 } Tile{ HalfReuse: & Desugar/8 AsIs: s.MarkupContext#1/9 } )/23 (/24 & HighLevelRASL/25 </26 & SelectOptFlags/27 Tile{ AsIs: s.Opt#1/10 } >/28 )/29 (/30 & LowLevelRASL/31 Tile{ AsIs: s.GenMode#1/11 } )/32 (/33 & GenProgram/34 Tile{ AsIs: (/14 AsIs: e.SrcName#1/12 AsIs: )/15 AsIs: (/18 AsIs: e.OutputName#1/16 AsIs: )/19 HalfReuse: )/20 HalfReuse: (/1 } & SaveFile/35 (/36 e.OutputName#1/16/37 )/39 )/40 >/41 >/42 # Success/43 e.OutputName#1/16/44 Tile{ ]] }
    if( ! refalrts::alloc_open_call( context[21] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[22], & Fetch ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[23] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[24] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[25], & HighLevelRASL ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[26] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[27], & SelectOptFlags ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[28] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[29] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[30] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[31], & LowLevelRASL ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[32] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[33] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[34], & GenProgram ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[35], & SaveFile ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[36] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[37], context[38], context[16], context[17]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[39] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[40] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[41] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[42] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[43], & ident_Success<int>::name ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[44], context[45], context[16], context[17]))
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], & Seq );
    refalrts::reinit_name( context[8], & Desugar );
    refalrts::reinit_close_bracket( context[20] );
    refalrts::reinit_open_bracket( context[1] );
    refalrts::push_stack( context[42] );
    refalrts::push_stack( context[21] );
    refalrts::push_stack( context[41] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[1], context[40] );
    refalrts::link_brackets( context[36], context[39] );
    refalrts::link_brackets( context[33], context[20] );
    refalrts::link_brackets( context[18], context[19] );
    refalrts::link_brackets( context[14], context[15] );
    refalrts::link_brackets( context[30], context[32] );
    refalrts::link_brackets( context[24], context[29] );
    refalrts::push_stack( context[28] );
    refalrts::push_stack( context[26] );
    refalrts::link_brackets( context[7], context[23] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[44], context[45] );
    res = refalrts::splice_evar( res, context[35], context[43] );
    res = refalrts::splice_evar( res, context[14], context[1] );
    res = refalrts::splice_evar( res, context[32], context[34] );
    res = refalrts::splice_evar( res, context[11], context[11] );
    res = refalrts::splice_evar( res, context[28], context[31] );
    res = refalrts::splice_evar( res, context[10], context[10] );
    res = refalrts::splice_evar( res, context[23], context[27] );
    res = refalrts::splice_evar( res, context[8], context[9] );
    res = refalrts::splice_evar( res, context[0], context[7] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[21], context[22] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );

  // ( e.idx ) s.idx s.idx s.idx ( e.idx ) ( e.idx ) # EL-HasErrors
  // </0 & CompileFile\2\1/4 (/7 e.AST#2/5 )/8 s.MarkupContext#1/9 s.Opt#1/10 s.GenMode#1/11 (/14 e.SrcName#1/12 )/15 (/18 e.OutputName#1/16 )/19 # EL-HasErrors/20 >/1
  if( ! refalrts::ident_term(  & ident_EL_HasErrors<int>::name, context[20] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.AST#2 as range 5
  // closed e.SrcName#1 as range 12
  // closed e.OutputName#1 as range 16

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & CompileFile\2\1/4 (/7 e.AST#2/5 )/8 s.MarkupContext#1/9 s.Opt#1/10 s.GenMode#1/11 (/14 e.SrcName#1/12 )/15 (/18 e.OutputName#1/16 )/19 # EL-HasErrors/20 {REMOVED TILE}
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
      {refalrts::icIssueMemory, 27, 0, 0},
      // </0 & CompileFile\2/4 s.MarkupContext#1/5 s.Opt#1/6 s.GenMode#1/7 (/10 e.SrcName#1/8 )/11 (/14 e.OutputName#1/12 )/15 t.ErrorList#2/16 e.AST#2/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icsVarLeft, 0, 5, 2},
      {refalrts::icsVarLeft, 0, 6, 2},
      {refalrts::icsVarLeft, 0, 7, 2},
      {refalrts::icBracketLeftSave, 0, 8, 2},
      {refalrts::icBracketLeftSave, 0, 12, 2},
      // closed e.SrcName#1 as range 8
      // closed e.OutputName#1 as range 12
      {refalrts::ictVarLeftSave, 0, 16, 2},
      // closed e.AST#2 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 } & Fetch/18 </19 & EL-Destroy/20 Tile{ AsIs: t.ErrorList#2/16 } >/21 </22 & @create_closure@/23 & CompileFile\2\1/24 (/25 Tile{ AsIs: e.AST#2/2 } Tile{ HalfReuse: )/4 AsIs: s.MarkupContext#1/5 AsIs: s.Opt#1/6 AsIs: s.GenMode#1/7 AsIs: (/10 AsIs: e.SrcName#1/8 AsIs: )/11 AsIs: (/14 AsIs: e.OutputName#1/12 AsIs: )/15 } >/26 Tile{ AsIs: >/1 ]] }
      {refalrts::icAllocFunc, 0, 3, 18},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 19},
      {refalrts::icAllocFunc, 0, 2, 20},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 21},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 22},
      {refalrts::icAllocFunc, 0, 1, 23},
      {refalrts::icAllocFunc, 0, 0, 24},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 25},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 26},
      {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 4},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icPushStack, 0, 0, 26},
      {refalrts::icPushStack, 0, 0, 22},
      {refalrts::icLinkBrackets, 14, 15, 0},
      {refalrts::icLinkBrackets, 10, 11, 0},
      {refalrts::icLinkBrackets, 25, 4, 0},
      {refalrts::icPushStack, 0, 0, 21},
      {refalrts::icPushStack, 0, 0, 19},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icSpliceTile, 26, 26, 0},
      {refalrts::icSpliceTile, 4, 15, 0},
      {refalrts::icSpliceEVar, 0, 0, 2},
      {refalrts::icSpliceTile, 21, 25, 0},
      {refalrts::icSpliceTile, 16, 17, 0},
      {refalrts::icSpliceTile, 18, 20, 0},
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
  // issue here memory for vars with 27 elems
  refalrts::Iter context[27];
  refalrts::zeros( context, 27 );
  // </0 & CompileFile\2/4 s.MarkupContext#1/5 s.Opt#1/6 s.GenMode#1/7 (/10 e.SrcName#1/8 )/11 (/14 e.OutputName#1/12 )/15 t.ErrorList#2/16 e.AST#2/2 >/1
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
  context[12] = 0;
  context[13] = 0;
  context[14] = refalrts::brackets_left( context[12], context[13], context[2], context[3] );
  if( ! context[14] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[14], context[15]);
  // closed e.SrcName#1 as range 8
  // closed e.OutputName#1 as range 12
  context[17] = refalrts::tvar_left( context[16], context[2], context[3] );
  if( ! context[17] )
    return refalrts::cRecognitionImpossible;
  // closed e.AST#2 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 } & Fetch/18 </19 & EL-Destroy/20 Tile{ AsIs: t.ErrorList#2/16 } >/21 </22 & @create_closure@/23 & CompileFile\2\1/24 (/25 Tile{ AsIs: e.AST#2/2 } Tile{ HalfReuse: )/4 AsIs: s.MarkupContext#1/5 AsIs: s.Opt#1/6 AsIs: s.GenMode#1/7 AsIs: (/10 AsIs: e.SrcName#1/8 AsIs: )/11 AsIs: (/14 AsIs: e.OutputName#1/12 AsIs: )/15 } >/26 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_name( context[18], & Fetch ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[19] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[20], & EL_Destroy ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[21] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[22] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[23], & refalrts::create_closure ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[24], & gen_CompileFile_L2L1 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[25] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[26] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_close_bracket( context[4] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[26] );
  refalrts::push_stack( context[22] );
  refalrts::link_brackets( context[14], context[15] );
  refalrts::link_brackets( context[10], context[11] );
  refalrts::link_brackets( context[25], context[4] );
  refalrts::push_stack( context[21] );
  refalrts::push_stack( context[19] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[26], context[26] );
  res = refalrts::splice_evar( res, context[4], context[15] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[21], context[25] );
  res = refalrts::splice_evar( res, context[16], context[17] );
  res = refalrts::splice_evar( res, context[18], context[20] );
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
      {refalrts::icIssueMemory, 34, 0, 0},
      // </0 & CompileFile/4 s.GenMode#1/5 s.Opt#1/6 s.MarkupContext#1/7 (/10 e.SrcName#1/8 )/11 e.OutputName#1/2 >/1
      {refalrts::icInitB0_Lite, 0, 0, 0},
      {refalrts::icCallSaveLeft, 0, 2, 0},
      {refalrts::icsVarLeft, 0, 5, 2},
      {refalrts::icsVarLeft, 0, 6, 2},
      {refalrts::icsVarLeft, 0, 7, 2},
      {refalrts::icBracketLeftSave, 0, 8, 2},
      // closed e.SrcName#1 as range 8
      // closed e.OutputName#1 as range 2
      {refalrts::icEmptyResult, 0, 0, 0},
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 } e.SrcName#1/8/12 </14 & Seq/15 & LoadSource/16 & LexFolding/17 (/18 & ParseProgram/19 </20 & EL-Create/21 e.SrcName#1/8/22 >/24 )/25 & CompileFile\1/26 </27 & @create_closure@/28 & CompileFile\2/29 Tile{ AsIs: s.MarkupContext#1/7 } Tile{ AsIs: s.Opt#1/6 } Tile{ AsIs: s.GenMode#1/5 } Tile{ AsIs: (/10 AsIs: e.SrcName#1/8 AsIs: )/11 } (/30 Tile{ AsIs: e.OutputName#1/2 } )/31 >/32 >/33 Tile{ AsIs: >/1 ]] }
      {refalrts::icCopyEVar, 12, 8, 0},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 14},
      {refalrts::icAllocFunc, 0, 8, 15},
      {refalrts::icAllocFunc, 0, 7, 16},
      {refalrts::icAllocFunc, 0, 6, 17},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 18},
      {refalrts::icAllocFunc, 0, 5, 19},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 20},
      {refalrts::icAllocFunc, 0, 4, 21},
      {refalrts::icCopyEVar, 22, 8, 0},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 24},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 25},
      {refalrts::icAllocFunc, 0, 3, 26},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 27},
      {refalrts::icAllocFunc, 0, 2, 28},
      {refalrts::icAllocFunc, 0, 1, 29},
      {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 30},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 31},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 32},
      {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 33},
      {refalrts::icUpdateFunc, 0, 0, 4},
      {refalrts::icPushStack, 0, 0, 1},
      {refalrts::icPushStack, 0, 0, 0},
      {refalrts::icPushStack, 0, 0, 33},
      {refalrts::icPushStack, 0, 0, 14},
      {refalrts::icPushStack, 0, 0, 32},
      {refalrts::icPushStack, 0, 0, 27},
      {refalrts::icLinkBrackets, 30, 31, 0},
      {refalrts::icLinkBrackets, 10, 11, 0},
      {refalrts::icLinkBrackets, 18, 25, 0},
      {refalrts::icPushStack, 0, 0, 24},
      {refalrts::icPushStack, 0, 0, 20},
      {refalrts::icSetRes, 0, 0, 1},
      {refalrts::icSpliceTile, 31, 33, 0},
      {refalrts::icSpliceEVar, 0, 0, 2},
      {refalrts::icSpliceTile, 30, 30, 0},
      {refalrts::icSpliceTile, 10, 11, 0},
      {refalrts::icSpliceTile, 5, 5, 0},
      {refalrts::icSpliceTile, 6, 6, 0},
      {refalrts::icSpliceTile, 7, 7, 0},
      {refalrts::icSpliceTile, 14, 29, 0},
      {refalrts::icSpliceTile, 12, 13, 0},
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
  // issue here memory for vars with 34 elems
  refalrts::Iter context[34];
  refalrts::zeros( context, 34 );
  // </0 & CompileFile/4 s.GenMode#1/5 s.Opt#1/6 s.MarkupContext#1/7 (/10 e.SrcName#1/8 )/11 e.OutputName#1/2 >/1
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
  // closed e.SrcName#1 as range 8
  // closed e.OutputName#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 } e.SrcName#1/8/12 </14 & Seq/15 & LoadSource/16 & LexFolding/17 (/18 & ParseProgram/19 </20 & EL-Create/21 e.SrcName#1/8/22 >/24 )/25 & CompileFile\1/26 </27 & @create_closure@/28 & CompileFile\2/29 Tile{ AsIs: s.MarkupContext#1/7 } Tile{ AsIs: s.Opt#1/6 } Tile{ AsIs: s.GenMode#1/5 } Tile{ AsIs: (/10 AsIs: e.SrcName#1/8 AsIs: )/11 } (/30 Tile{ AsIs: e.OutputName#1/2 } )/31 >/32 >/33 Tile{ AsIs: >/1 ]] }
  if (! refalrts::copy_evar(context[12], context[13], context[8], context[9]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[15], & Seq ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[16], & LoadSource ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[17], & LexFolding ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[18] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[19], & ParseProgram ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[20] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[21], & EL_Create ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[22], context[23], context[8], context[9]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[24] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[25] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[26], & gen_CompileFile_L1 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[27] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[28], & refalrts::create_closure ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[29], & gen_CompileFile_L2 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[30] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[31] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[32] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[33] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], & Fetch );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[33] );
  refalrts::push_stack( context[14] );
  refalrts::push_stack( context[32] );
  refalrts::push_stack( context[27] );
  refalrts::link_brackets( context[30], context[31] );
  refalrts::link_brackets( context[10], context[11] );
  refalrts::link_brackets( context[18], context[25] );
  refalrts::push_stack( context[24] );
  refalrts::push_stack( context[20] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[31], context[33] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[30], context[30] );
  res = refalrts::splice_evar( res, context[10], context[11] );
  res = refalrts::splice_evar( res, context[5], context[5] );
  res = refalrts::splice_evar( res, context[6], context[6] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[14], context[29] );
  res = refalrts::splice_evar( res, context[12], context[13] );
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
