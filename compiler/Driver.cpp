// Automatically generated file. Don't edit!
#include "refalrts.h"


extern refalrts::FnResult CheckProgram(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult CompileFile(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Desugar(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult EL_Create(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult EL_Destroy(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Fetch(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult GenProgram(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult HighLevelRASL(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult LexFolding(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult LoadSource(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult LowLevelRASL(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult ParseProgram(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult SaveFile(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Seq(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult gen_CompileFile_L1(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult gen_CompileFile_L2(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult gen_CompileFile_L2L1(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult SelectOptFlags(refalrts::Iter arg_begin, refalrts::Iter arg_end);

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

static refalrts::FnResult gen_CompileFile_L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { CheckProgram, "CheckProgram" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    // </0 & CompileFile\1/4 t.ErrorList#2/5 e.AST#2/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::ictVarLeftSave, 0, 5, 2},
    // closed e.AST#2 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE} 
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
  int open_e_stack[1];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
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
  //TRASH: {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & CheckProgram/4 AsIs: t.ErrorList#2/5 AsIs: e.AST#2/2 AsIs: >/1 } e.AST#2/2/7 Tile{ ]] }
  if (! refalrts::copy_evar(context[7], context[8], context[2], context[3]))
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], CheckProgram, "CheckProgram" );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult gen_CompileFile_L2L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 33 elems
  refalrts::Iter context[33];
  refalrts::zeros( context, 33 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { SelectOptFlags, "SelectOptFlags" },
    { Fetch, "Fetch" },
    { SaveFile, "SaveFile" },
    { GenProgram, "GenProgram" },
    { LowLevelRASL, "LowLevelRASL" },
    { HighLevelRASL, "HighLevelRASL" },
    { Desugar, "Desugar" },
    { Seq, "Seq" }
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
    //FAST GEN: ( e.$ ) s.$ s.$ ( e.$ ) s.$
    //GLOBAL GEN: ( e.$ ) s.$ s.$ ( e.$ ) s.$
    // </0 & CompileFile\2\1/4 (/7 e.idxB#0/5 )/8 s.idxT#0/9 s.idxTV#0/10 (/13 e.idxTVVB#0/11 )/14 s.idxTVVT#0/15 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icBracketLeftSave, 0, 5, 2},
    // closed e.idxB#0 as range 5
    {refalrts::icsVarLeft, 0, 9, 2},
    {refalrts::icsVarLeft, 0, 10, 2},
    {refalrts::icBracketLeftSave, 0, 11, 2},
    // closed e.idxTVVB#0 as range 11
    {refalrts::icsVarLeft, 0, 15, 2},
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icOnFailGoTo, +44, 0, 0},
    // ( e.idx ) s.idx s.idx ( e.idx ) # EL-NoErrors
    // </0 & CompileFile\2\1/4 (/7 e.AST#2/5 )/8 s.Opt#1/9 s.GenMode#1/10 (/13 e.OutputName#1/11 )/14 # EL-NoErrors/15 >/1
    {refalrts::icIdentTerm, 0, 3, 15},
    // closed e.AST#2 as range 5
    // closed e.OutputName#1 as range 11
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 } Tile{ AsIs: e.AST#2/5 } </16 & Seq/17 & Desugar/18 Tile{ AsIs: (/7 } & HighLevelRASL/19 </20 Tile{ HalfReuse: & SelectOptFlags/8 AsIs: s.Opt#1/9 } >/21 )/22 (/23 & LowLevelRASL/24 Tile{ AsIs: s.GenMode#1/10 } )/25 & GenProgram/26 (/27 & SaveFile/28 Tile{ AsIs: (/13 AsIs: e.OutputName#1/11 AsIs: )/14 HalfReuse: )/15 AsIs: >/1 } >/29 # Success/30 e.OutputName#1/11/31 Tile{ ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 16},
    {refalrts::icAllocFunc, 0, 7, 17},
    {refalrts::icAllocFunc, 0, 6, 18},
    {refalrts::icAllocFunc, 0, 5, 19},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 20},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 21},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 22},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 23},
    {refalrts::icAllocFunc, 0, 4, 24},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 25},
    {refalrts::icAllocFunc, 0, 3, 26},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 27},
    {refalrts::icAllocFunc, 0, 2, 28},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 29},
    {refalrts::icAllocIdent, 0, 2, 30},
    {refalrts::icCopyEVar, 31, 11, 0},
    {refalrts::icUpdateFunc, 0, 1, 4},
    {refalrts::icReinitFunc, 0, 0, 8},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 15},
    {refalrts::icPushStack, 0, 0, 29},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 16},
    {refalrts::icLinkBrackets, 27, 15, 0},
    {refalrts::icLinkBrackets, 13, 14, 0},
    {refalrts::icLinkBrackets, 23, 25, 0},
    {refalrts::icLinkBrackets, 7, 22, 0},
    {refalrts::icPushStack, 0, 0, 21},
    {refalrts::icPushStack, 0, 0, 20},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 31, 32, 0},
    {refalrts::icSpliceTile, 29, 30, 0},
    {refalrts::icSpliceTile, 13, 1, 0},
    {refalrts::icSpliceTile, 25, 28, 0},
    {refalrts::icSpliceTile, 10, 10, 0},
    {refalrts::icSpliceTile, 21, 24, 0},
    {refalrts::icSpliceTile, 8, 9, 0},
    {refalrts::icSpliceTile, 19, 20, 0},
    {refalrts::icSpliceTile, 7, 7, 0},
    {refalrts::icSpliceTile, 16, 18, 0},
    {refalrts::icSpliceEVar, 0, 0, 5},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    // ( e.idx ) s.idx s.idx ( e.idx ) # EL-HasErrors
    // </0 & CompileFile\2\1/4 (/7 e.AST#2/5 )/8 s.Opt#1/9 s.GenMode#1/10 (/13 e.OutputName#1/11 )/14 # EL-HasErrors/15 >/1
    {refalrts::icIdentTerm, 0, 1, 15},
    // closed e.AST#2 as range 5
    // closed e.OutputName#1 as range 11
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 & CompileFile\2\1/4 (/7 e.AST#2/5 )/8 s.Opt#1/9 s.GenMode#1/10 (/13 e.OutputName#1/11 )/14 # EL-HasErrors/15 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # Fails/1 ]] }
    {refalrts::icReinitIdent, 0, 0, 1},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[1];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  //FAST GEN: ( e.$ ) s.$ s.$ ( e.$ ) s.$
  //GLOBAL GEN: ( e.$ ) s.$ s.$ ( e.$ ) s.$
  // </0 & CompileFile\2\1/4 (/7 e.idxB#0/5 )/8 s.idxT#0/9 s.idxTV#0/10 (/13 e.idxTVVB#0/11 )/14 s.idxTVVT#0/15 >/1
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
  // closed e.idxTVVB#0 as range 11
  if( ! refalrts::svar_left( context[15], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    refalrts::start_sentence();
    // ( e.idx ) s.idx s.idx ( e.idx ) # EL-NoErrors
    // </0 & CompileFile\2\1/4 (/7 e.AST#2/5 )/8 s.Opt#1/9 s.GenMode#1/10 (/13 e.OutputName#1/11 )/14 # EL-NoErrors/15 >/1
    if( ! refalrts::ident_term(  & ident_EL_NoErrors<int>::name, context[15] ) )
      continue;
    // closed e.AST#2 as range 5
    // closed e.OutputName#1 as range 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 } Tile{ AsIs: e.AST#2/5 } </16 & Seq/17 & Desugar/18 Tile{ AsIs: (/7 } & HighLevelRASL/19 </20 Tile{ HalfReuse: & SelectOptFlags/8 AsIs: s.Opt#1/9 } >/21 )/22 (/23 & LowLevelRASL/24 Tile{ AsIs: s.GenMode#1/10 } )/25 & GenProgram/26 (/27 & SaveFile/28 Tile{ AsIs: (/13 AsIs: e.OutputName#1/11 AsIs: )/14 HalfReuse: )/15 AsIs: >/1 } >/29 # Success/30 e.OutputName#1/11/31 Tile{ ]] }
    if( ! refalrts::alloc_open_call( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[17], Seq, "Seq" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[18], Desugar, "Desugar" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[19], HighLevelRASL, "HighLevelRASL" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[20] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[21] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[22] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[23] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[24], LowLevelRASL, "LowLevelRASL" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[25] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[26], GenProgram, "GenProgram" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[27] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[28], SaveFile, "SaveFile" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[29] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[30], & ident_Success<int>::name ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[31], context[32], context[11], context[12]))
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], Fetch, "Fetch" );
    refalrts::reinit_name( context[8], SelectOptFlags, "SelectOptFlags" );
    refalrts::reinit_close_bracket( context[15] );
    refalrts::push_stack( context[29] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[16] );
    refalrts::link_brackets( context[27], context[15] );
    refalrts::link_brackets( context[13], context[14] );
    refalrts::link_brackets( context[23], context[25] );
    refalrts::link_brackets( context[7], context[22] );
    refalrts::push_stack( context[21] );
    refalrts::push_stack( context[20] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[31], context[32] );
    res = refalrts::splice_evar( res, context[29], context[30] );
    res = refalrts::splice_evar( res, context[13], context[1] );
    res = refalrts::splice_evar( res, context[25], context[28] );
    res = refalrts::splice_evar( res, context[10], context[10] );
    res = refalrts::splice_evar( res, context[21], context[24] );
    res = refalrts::splice_evar( res, context[8], context[9] );
    res = refalrts::splice_evar( res, context[19], context[20] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    res = refalrts::splice_evar( res, context[16], context[18] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  // ( e.idx ) s.idx s.idx ( e.idx ) # EL-HasErrors
  // </0 & CompileFile\2\1/4 (/7 e.AST#2/5 )/8 s.Opt#1/9 s.GenMode#1/10 (/13 e.OutputName#1/11 )/14 # EL-HasErrors/15 >/1
  if( ! refalrts::ident_term(  & ident_EL_HasErrors<int>::name, context[15] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.AST#2 as range 5
  // closed e.OutputName#1 as range 11

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  </0 & CompileFile\2\1/4 (/7 e.AST#2/5 )/8 s.Opt#1/9 s.GenMode#1/10 (/13 e.OutputName#1/11 )/14 # EL-HasErrors/15 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ HalfReuse: # Fails/1 ]] }
  refalrts::reinit_ident( context[1], & ident_Fails<int>::name );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult gen_CompileFile_L2(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { gen_CompileFile_L2L1, "CompileFile\\2\\1" },
    { refalrts::create_closure, "@create_closure@" },
    { EL_Destroy, "EL-Destroy" },
    { Fetch, "Fetch" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    // </0 & CompileFile\2/4 s.Opt#1/5 s.GenMode#1/6 (/9 e.OutputName#1/7 )/10 t.ErrorList#2/11 e.AST#2/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icsVarLeft, 0, 5, 2},
    {refalrts::icsVarLeft, 0, 6, 2},
    {refalrts::icBracketLeftSave, 0, 7, 2},
    // closed e.OutputName#1 as range 7
    {refalrts::ictVarLeftSave, 0, 11, 2},
    // closed e.AST#2 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 } & Fetch/13 </14 & EL-Destroy/15 Tile{ AsIs: t.ErrorList#2/11 } >/16 </17 & @create_closure@/18 & CompileFile\2\1/19 (/20 Tile{ AsIs: e.AST#2/2 } Tile{ HalfReuse: )/4 AsIs: s.Opt#1/5 AsIs: s.GenMode#1/6 AsIs: (/9 AsIs: e.OutputName#1/7 AsIs: )/10 } >/21 Tile{ AsIs: >/1 ]] }
    {refalrts::icAllocFunc, 0, 3, 13},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 14},
    {refalrts::icAllocFunc, 0, 2, 15},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 16},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 17},
    {refalrts::icAllocFunc, 0, 1, 18},
    {refalrts::icAllocFunc, 0, 0, 19},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 20},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 21},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 4},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icPushStack, 0, 0, 21},
    {refalrts::icPushStack, 0, 0, 17},
    {refalrts::icLinkBrackets, 9, 10, 0},
    {refalrts::icLinkBrackets, 20, 4, 0},
    {refalrts::icPushStack, 0, 0, 16},
    {refalrts::icPushStack, 0, 0, 14},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceTile, 21, 21, 0},
    {refalrts::icSpliceTile, 4, 10, 0},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceTile, 16, 20, 0},
    {refalrts::icSpliceTile, 11, 12, 0},
    {refalrts::icSpliceTile, 13, 15, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[1];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  // </0 & CompileFile\2/4 s.Opt#1/5 s.GenMode#1/6 (/9 e.OutputName#1/7 )/10 t.ErrorList#2/11 e.AST#2/2 >/1
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
  // closed e.OutputName#1 as range 7
  context[12] = refalrts::tvar_left( context[11], context[2], context[3] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  // closed e.AST#2 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 } & Fetch/13 </14 & EL-Destroy/15 Tile{ AsIs: t.ErrorList#2/11 } >/16 </17 & @create_closure@/18 & CompileFile\2\1/19 (/20 Tile{ AsIs: e.AST#2/2 } Tile{ HalfReuse: )/4 AsIs: s.Opt#1/5 AsIs: s.GenMode#1/6 AsIs: (/9 AsIs: e.OutputName#1/7 AsIs: )/10 } >/21 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_name( context[13], Fetch, "Fetch" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[15], EL_Destroy, "EL-Destroy" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[16] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[17] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[18], refalrts::create_closure, "@create_closure@" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[19], gen_CompileFile_L2L1, "CompileFile\\2\\1" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[20] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[21] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_close_bracket( context[4] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[21] );
  refalrts::push_stack( context[17] );
  refalrts::link_brackets( context[9], context[10] );
  refalrts::link_brackets( context[20], context[4] );
  refalrts::push_stack( context[16] );
  refalrts::push_stack( context[14] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[21], context[21] );
  res = refalrts::splice_evar( res, context[4], context[10] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[16], context[20] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_evar( res, context[13], context[15] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

refalrts::FnResult CompileFile(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 29 elems
  refalrts::Iter context[29];
  refalrts::zeros( context, 29 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { EL_Create, "EL-Create" },
    { Fetch, "Fetch" },
    { gen_CompileFile_L2, "CompileFile\\2" },
    { refalrts::create_closure, "@create_closure@" },
    { gen_CompileFile_L1, "CompileFile\\1" },
    { ParseProgram, "ParseProgram" },
    { LexFolding, "LexFolding" },
    { LoadSource, "LoadSource" },
    { Seq, "Seq" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    // </0 & CompileFile/4 s.GenMode#1/5 s.Opt#1/6 (/9 e.SrcName#1/7 )/10 e.OutputName#1/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icsVarLeft, 0, 5, 2},
    {refalrts::icsVarLeft, 0, 6, 2},
    {refalrts::icBracketLeftSave, 0, 7, 2},
    // closed e.SrcName#1 as range 7
    // closed e.OutputName#1 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 } e.SrcName#1/7/11 </13 & Seq/14 & LoadSource/15 & LexFolding/16 (/17 & ParseProgram/18 </19 Tile{ HalfReuse: & EL-Create/9 AsIs: e.SrcName#1/7 HalfReuse: >/10 } )/20 & CompileFile\1/21 </22 & @create_closure@/23 & CompileFile\2/24 Tile{ AsIs: s.Opt#1/6 } Tile{ AsIs: s.GenMode#1/5 } (/25 Tile{ AsIs: e.OutputName#1/2 } )/26 >/27 >/28 Tile{ AsIs: >/1 ]] }
    {refalrts::icCopyEVar, 11, 7, 0},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 13},
    {refalrts::icAllocFunc, 0, 8, 14},
    {refalrts::icAllocFunc, 0, 7, 15},
    {refalrts::icAllocFunc, 0, 6, 16},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 17},
    {refalrts::icAllocFunc, 0, 5, 18},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 19},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 20},
    {refalrts::icAllocFunc, 0, 4, 21},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 22},
    {refalrts::icAllocFunc, 0, 3, 23},
    {refalrts::icAllocFunc, 0, 2, 24},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 25},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 26},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 27},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 28},
    {refalrts::icUpdateFunc, 0, 1, 4},
    {refalrts::icReinitFunc, 0, 0, 9},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 10},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icPushStack, 0, 0, 28},
    {refalrts::icPushStack, 0, 0, 13},
    {refalrts::icPushStack, 0, 0, 27},
    {refalrts::icPushStack, 0, 0, 22},
    {refalrts::icLinkBrackets, 25, 26, 0},
    {refalrts::icLinkBrackets, 17, 20, 0},
    {refalrts::icPushStack, 0, 0, 10},
    {refalrts::icPushStack, 0, 0, 19},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceTile, 26, 28, 0},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceTile, 25, 25, 0},
    {refalrts::icSpliceTile, 5, 5, 0},
    {refalrts::icSpliceTile, 6, 6, 0},
    {refalrts::icSpliceTile, 20, 24, 0},
    {refalrts::icSpliceTile, 9, 10, 0},
    {refalrts::icSpliceTile, 13, 19, 0},
    {refalrts::icSpliceTile, 11, 12, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[1];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
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
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 } e.SrcName#1/7/11 </13 & Seq/14 & LoadSource/15 & LexFolding/16 (/17 & ParseProgram/18 </19 Tile{ HalfReuse: & EL-Create/9 AsIs: e.SrcName#1/7 HalfReuse: >/10 } )/20 & CompileFile\1/21 </22 & @create_closure@/23 & CompileFile\2/24 Tile{ AsIs: s.Opt#1/6 } Tile{ AsIs: s.GenMode#1/5 } (/25 Tile{ AsIs: e.OutputName#1/2 } )/26 >/27 >/28 Tile{ AsIs: >/1 ]] }
  if (! refalrts::copy_evar(context[11], context[12], context[7], context[8]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[14], Seq, "Seq" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[15], LoadSource, "LoadSource" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[16], LexFolding, "LexFolding" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[17] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[18], ParseProgram, "ParseProgram" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[19] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[20] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[21], gen_CompileFile_L1, "CompileFile\\1" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[22] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[23], refalrts::create_closure, "@create_closure@" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[24], gen_CompileFile_L2, "CompileFile\\2" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[25] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[26] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[27] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[28] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], Fetch, "Fetch" );
  refalrts::reinit_name( context[9], EL_Create, "EL-Create" );
  refalrts::reinit_close_call( context[10] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[28] );
  refalrts::push_stack( context[13] );
  refalrts::push_stack( context[27] );
  refalrts::push_stack( context[22] );
  refalrts::link_brackets( context[25], context[26] );
  refalrts::link_brackets( context[17], context[20] );
  refalrts::push_stack( context[10] );
  refalrts::push_stack( context[19] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[26], context[28] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[25], context[25] );
  res = refalrts::splice_evar( res, context[5], context[5] );
  res = refalrts::splice_evar( res, context[6], context[6] );
  res = refalrts::splice_evar( res, context[20], context[24] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[13], context[19] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult SelectOptFlags(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
#ifdef INTERPRET
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
    //TRASH: {REMOVED TILE}  </0 & SelectOptFlags/4 {REMOVED TILE} 
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
    //TRASH: {REMOVED TILE}  </0 & SelectOptFlags/4 {REMOVED TILE} 
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
    //TRASH: {REMOVED TILE}  </0 & SelectOptFlags/4 {REMOVED TILE} 
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
    //TRASH: {REMOVED TILE}  </0 & SelectOptFlags/4 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ Reuse: # Conjoint/5 HalfReuse: # OptResult/1 ]] }
    {refalrts::icUpdateIdent, 0, 1, 5},
    {refalrts::icReinitIdent, 0, 0, 1},
    {refalrts::icSetRes, 0, 0, 5},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[3];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
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
    //TRASH: {REMOVED TILE}  </0 & SelectOptFlags/4 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ Reuse: # Disjoint/5 HalfReuse: # NoOpt/1 ]] }
    refalrts::update_ident( context[5], & ident_Disjoint<int>::name );
    refalrts::reinit_ident( context[1], & ident_NoOpt<int>::name );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[5];
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // # OptPattern
    // </0 & SelectOptFlags/4 # OptPattern/5 >/1
    if( ! refalrts::ident_term(  & ident_OptPattern<int>::name, context[5] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & SelectOptFlags/4 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ Reuse: # Conjoint/5 HalfReuse: # NoOpt/1 ]] }
    refalrts::update_ident( context[5], & ident_Conjoint<int>::name );
    refalrts::reinit_ident( context[1], & ident_NoOpt<int>::name );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[5];
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // # OptResult
    // </0 & SelectOptFlags/4 # OptResult/5 >/1
    if( ! refalrts::ident_term(  & ident_OptResult<int>::name, context[5] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & SelectOptFlags/4 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ Reuse: # Disjoint/5 HalfReuse: # OptResult/1 ]] }
    refalrts::update_ident( context[5], & ident_Disjoint<int>::name );
    refalrts::reinit_ident( context[1], & ident_OptResult<int>::name );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[5];
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  // # OptBoth
  // </0 & SelectOptFlags/4 # OptBoth/5 >/1
  if( ! refalrts::ident_term(  & ident_OptBoth<int>::name, context[5] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  </0 & SelectOptFlags/4 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ Reuse: # Conjoint/5 HalfReuse: # OptResult/1 ]] }
  refalrts::update_ident( context[5], & ident_Conjoint<int>::name );
  refalrts::reinit_ident( context[1], & ident_OptResult<int>::name );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[5];
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}


//End of file
