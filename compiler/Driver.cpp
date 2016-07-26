// Automatically generated file. Don't edit!
#include "refalrts.h"


extern refalrts::FnResult CompileFile(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult EL_Create(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult EL_Destroy(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Fetch(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult GenProgram(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult HighLevelRASL(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult LexFolding(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult LowLevelRASL(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Map(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult ParseProgram(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult SaveFile(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Seq(refalrts::Iter arg_begin, refalrts::Iter arg_end);
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

// identifier #EL_HasErrors
template <typename SREFAL_PARAM_INT>
struct ident_EL_HasErrors {
  static const char *name() {
    return "EL_HasErrors";
  }
};

// identifier #EL_NoErrors
template <typename SREFAL_PARAM_INT>
struct ident_EL_NoErrors {
  static const char *name() {
    return "EL_NoErrors";
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

static refalrts::FnResult lambda_CompileFile_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { EL_Create, "EL_Create" },
    { ParseProgram, "ParseProgram" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    // </0 & lambda_CompileFile_0/4 (/7 e.SrcName#1/5 )/8 e.LexFolding#2/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icBracketLeftSave, 0, 5, 2},
    // closed e.SrcName#1 as range 5
    // closed e.LexFolding#2 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } </9 Tile{ HalfReuse: & ParseProgram/0 HalfReuse: </4 HalfReuse: & EL_Create/7 AsIs: e.SrcName#1/5 HalfReuse: >/8 AsIs: e.LexFolding#2/2 AsIs: >/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 9},
    {refalrts::icReinitFunc, 0, 1, 0},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 4},
    {refalrts::icReinitFunc, 0, 0, 7},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 8},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 9},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icPushStack, 0, 0, 4},
    {refalrts::icSetRes, 0, 0, 0},
    {refalrts::icSpliceTile, 9, 9, 0},
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
  // </0 & lambda_CompileFile_0/4 (/7 e.SrcName#1/5 )/8 e.LexFolding#2/2 >/1
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
  // closed e.SrcName#1 as range 5
  // closed e.LexFolding#2 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } </9 Tile{ HalfReuse: & ParseProgram/0 HalfReuse: </4 HalfReuse: & EL_Create/7 AsIs: e.SrcName#1/5 HalfReuse: >/8 AsIs: e.LexFolding#2/2 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[9] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_name( context[0], ParseProgram, "ParseProgram" );
  refalrts::reinit_open_call( context[4] );
  refalrts::reinit_name( context[7], EL_Create, "EL_Create" );
  refalrts::reinit_close_call( context[8] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[9] );
  refalrts::push_stack( context[8] );
  refalrts::push_stack( context[4] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[9], context[9] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult lambda_CompileFile_1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 32 elems
  refalrts::Iter context[32];
  refalrts::zeros( context, 32 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { SelectOptFlags, "SelectOptFlags" },
    { Seq, "Seq" },
    { SaveFile, "SaveFile" },
    { GenProgram, "GenProgram" },
    { LowLevelRASL, "LowLevelRASL" },
    { HighLevelRASL, "HighLevelRASL" },
    { Fetch, "Fetch" }
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
    //FAST GEN:(E )S S (E )S 
    //GLOBAL GEN:(E )S S (E )S 
    // </0 & lambda_CompileFile_1/4 (/7 e.idxB#0/5 )/8 s.idxT#0/9 s.idxTV#0/10 (/13 e.idxTVVB#0/11 )/14 s.idxTVVT#0/15 >/1
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
    {refalrts::icOnFailGoTo, +43, 0, 0},
    //(E )S S (E )#EL_NoErrors
    // </0 & lambda_CompileFile_1/4 (/7 e.AST#2/5 )/8 s.Opt#1/9 s.GenMode#1/10 (/13 e.OutputName#1/11 )/14 # EL_NoErrors/15 >/1
    {refalrts::icIdentTerm, 0, 3, 15},
    // closed e.AST#2 as range 5
    // closed e.OutputName#1 as range 11
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } </16 & Fetch/17 Tile{ AsIs: e.AST#2/5 } Tile{ AsIs: </0 Reuse: & Seq/4 AsIs: (/7 } & HighLevelRASL/18 </19 Tile{ HalfReuse: & SelectOptFlags/8 AsIs: s.Opt#1/9 } >/20 )/21 (/22 & LowLevelRASL/23 Tile{ AsIs: s.GenMode#1/10 } )/24 & GenProgram/25 (/26 & SaveFile/27 Tile{ AsIs: (/13 AsIs: e.OutputName#1/11 AsIs: )/14 HalfReuse: )/15 AsIs: >/1 } >/28 # Success/29 e.OutputName#1/11/30 Tile{ ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 16},
    {refalrts::icAllocFunc, 0, 6, 17},
    {refalrts::icAllocFunc, 0, 5, 18},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 19},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 20},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 21},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 22},
    {refalrts::icAllocFunc, 0, 4, 23},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 24},
    {refalrts::icAllocFunc, 0, 3, 25},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 26},
    {refalrts::icAllocFunc, 0, 2, 27},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 28},
    {refalrts::icAllocIdent, 0, 2, 29},
    {refalrts::icCopyEVar, 30, 11, 0},
    {refalrts::icUpdateFunc, 0, 1, 4},
    {refalrts::icReinitFunc, 0, 0, 8},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 15},
    {refalrts::icPushStack, 0, 0, 28},
    {refalrts::icPushStack, 0, 0, 16},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 26, 15, 0},
    {refalrts::icLinkBrackets, 13, 14, 0},
    {refalrts::icLinkBrackets, 22, 24, 0},
    {refalrts::icLinkBrackets, 7, 21, 0},
    {refalrts::icPushStack, 0, 0, 20},
    {refalrts::icPushStack, 0, 0, 19},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 30, 31, 0},
    {refalrts::icSpliceTile, 28, 29, 0},
    {refalrts::icSpliceTile, 13, 1, 0},
    {refalrts::icSpliceTile, 24, 27, 0},
    {refalrts::icSpliceTile, 10, 10, 0},
    {refalrts::icSpliceTile, 20, 23, 0},
    {refalrts::icSpliceTile, 8, 9, 0},
    {refalrts::icSpliceTile, 18, 19, 0},
    {refalrts::icSpliceTile, 0, 7, 0},
    {refalrts::icSpliceEVar, 0, 0, 5},
    {refalrts::icSpliceTile, 16, 17, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    //(E )S S (E )#EL_HasErrors
    // </0 & lambda_CompileFile_1/4 (/7 e.AST#2/5 )/8 s.Opt#1/9 s.GenMode#1/10 (/13 e.OutputName#1/11 )/14 # EL_HasErrors/15 >/1
    {refalrts::icIdentTerm, 0, 1, 15},
    // closed e.AST#2 as range 5
    // closed e.OutputName#1 as range 11
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 & lambda_CompileFile_1/4 (/7 e.AST#2/5 )/8 s.Opt#1/9 s.GenMode#1/10 (/13 e.OutputName#1/11 )/14 # EL_HasErrors/15 {REMOVED TILE} 
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
  //FAST GEN:(E )S S (E )S 
  //GLOBAL GEN:(E )S S (E )S 
  // </0 & lambda_CompileFile_1/4 (/7 e.idxB#0/5 )/8 s.idxT#0/9 s.idxTV#0/10 (/13 e.idxTVVB#0/11 )/14 s.idxTVVT#0/15 >/1
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
    //(E )S S (E )#EL_NoErrors
    // </0 & lambda_CompileFile_1/4 (/7 e.AST#2/5 )/8 s.Opt#1/9 s.GenMode#1/10 (/13 e.OutputName#1/11 )/14 # EL_NoErrors/15 >/1
    if( ! refalrts::ident_term(  & ident_EL_NoErrors<int>::name, context[15] ) )
      continue;
    // closed e.AST#2 as range 5
    // closed e.OutputName#1 as range 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } </16 & Fetch/17 Tile{ AsIs: e.AST#2/5 } Tile{ AsIs: </0 Reuse: & Seq/4 AsIs: (/7 } & HighLevelRASL/18 </19 Tile{ HalfReuse: & SelectOptFlags/8 AsIs: s.Opt#1/9 } >/20 )/21 (/22 & LowLevelRASL/23 Tile{ AsIs: s.GenMode#1/10 } )/24 & GenProgram/25 (/26 & SaveFile/27 Tile{ AsIs: (/13 AsIs: e.OutputName#1/11 AsIs: )/14 HalfReuse: )/15 AsIs: >/1 } >/28 # Success/29 e.OutputName#1/11/30 Tile{ ]] }
    if( ! refalrts::alloc_open_call( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[17], Fetch, "Fetch" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[18], HighLevelRASL, "HighLevelRASL" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[19] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[20] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[21] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[22] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[23], LowLevelRASL, "LowLevelRASL" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[24] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[25], GenProgram, "GenProgram" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[26] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[27], SaveFile, "SaveFile" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[28] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[29], & ident_Success<int>::name ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[30], context[31], context[11], context[12]))
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], Seq, "Seq" );
    refalrts::reinit_name( context[8], SelectOptFlags, "SelectOptFlags" );
    refalrts::reinit_close_bracket( context[15] );
    refalrts::push_stack( context[28] );
    refalrts::push_stack( context[16] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[26], context[15] );
    refalrts::link_brackets( context[13], context[14] );
    refalrts::link_brackets( context[22], context[24] );
    refalrts::link_brackets( context[7], context[21] );
    refalrts::push_stack( context[20] );
    refalrts::push_stack( context[19] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[30], context[31] );
    res = refalrts::splice_evar( res, context[28], context[29] );
    res = refalrts::splice_evar( res, context[13], context[1] );
    res = refalrts::splice_evar( res, context[24], context[27] );
    res = refalrts::splice_evar( res, context[10], context[10] );
    res = refalrts::splice_evar( res, context[20], context[23] );
    res = refalrts::splice_evar( res, context[8], context[9] );
    res = refalrts::splice_evar( res, context[18], context[19] );
    res = refalrts::splice_evar( res, context[0], context[7] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[16], context[17] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  //(E )S S (E )#EL_HasErrors
  // </0 & lambda_CompileFile_1/4 (/7 e.AST#2/5 )/8 s.Opt#1/9 s.GenMode#1/10 (/13 e.OutputName#1/11 )/14 # EL_HasErrors/15 >/1
  if( ! refalrts::ident_term(  & ident_EL_HasErrors<int>::name, context[15] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.AST#2 as range 5
  // closed e.OutputName#1 as range 11

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  </0 & lambda_CompileFile_1/4 (/7 e.AST#2/5 )/8 s.Opt#1/9 s.GenMode#1/10 (/13 e.OutputName#1/11 )/14 # EL_HasErrors/15 {REMOVED TILE} 
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

static refalrts::FnResult lambda_CompileFile_2(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { lambda_CompileFile_1, "lambda_CompileFile_1" },
    { refalrts::create_closure, "refalrts::create_closure" },
    { EL_Destroy, "EL_Destroy" },
    { Fetch, "Fetch" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    // </0 & lambda_CompileFile_2/4 s.Opt#1/5 s.GenMode#1/6 (/9 e.OutputName#1/7 )/10 t.ErrorList#2/11 e.AST#2/2 >/1
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
    //RESULT: Tile{ [[ AsIs: </0 } & Fetch/13 </14 & EL_Destroy/15 Tile{ AsIs: t.ErrorList#2/11 } >/16 </17 & CreateClosure /18 & lambda_CompileFile_1/19 (/20 Tile{ AsIs: e.AST#2/2 } Tile{ HalfReuse: )/4 AsIs: s.Opt#1/5 AsIs: s.GenMode#1/6 AsIs: (/9 AsIs: e.OutputName#1/7 AsIs: )/10 } >/21 Tile{ AsIs: >/1 ]] }
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
  // </0 & lambda_CompileFile_2/4 s.Opt#1/5 s.GenMode#1/6 (/9 e.OutputName#1/7 )/10 t.ErrorList#2/11 e.AST#2/2 >/1
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
  //RESULT: Tile{ [[ AsIs: </0 } & Fetch/13 </14 & EL_Destroy/15 Tile{ AsIs: t.ErrorList#2/11 } >/16 </17 & CreateClosure /18 & lambda_CompileFile_1/19 (/20 Tile{ AsIs: e.AST#2/2 } Tile{ HalfReuse: )/4 AsIs: s.Opt#1/5 AsIs: s.GenMode#1/6 AsIs: (/9 AsIs: e.OutputName#1/7 AsIs: )/10 } >/21 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_name( context[13], Fetch, "Fetch" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[15], EL_Destroy, "EL_Destroy" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[16] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[17] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[18], refalrts::create_closure, "refalrts::create_closure" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[19], lambda_CompileFile_1, "lambda_CompileFile_1" ) )
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
    { Fetch, "Fetch" },
    { lambda_CompileFile_2, "lambda_CompileFile_2" },
    { refalrts::create_closure, "refalrts::create_closure" },
    { lambda_CompileFile_0, "lambda_CompileFile_0" },
    { Seq, "Seq" },
    { LexFolding, "LexFolding" }
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
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 } </11 & LexFolding/12 e.SrcName#1/7/13 >/15 </16 & Seq/17 </18 & CreateClosure /19 & lambda_CompileFile_0/20 Tile{ AsIs: (/9 AsIs: e.SrcName#1/7 AsIs: )/10 } >/21 </22 & CreateClosure /23 & lambda_CompileFile_2/24 Tile{ AsIs: s.Opt#1/6 } Tile{ AsIs: s.GenMode#1/5 } (/25 Tile{ AsIs: e.OutputName#1/2 } )/26 >/27 >/28 Tile{ AsIs: >/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 11},
    {refalrts::icAllocFunc, 0, 5, 12},
    {refalrts::icCopyEVar, 13, 7, 0},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 15},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 16},
    {refalrts::icAllocFunc, 0, 4, 17},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 18},
    {refalrts::icAllocFunc, 0, 2, 19},
    {refalrts::icAllocFunc, 0, 3, 20},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 21},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 22},
    {refalrts::icAllocFunc, 0, 2, 23},
    {refalrts::icAllocFunc, 0, 1, 24},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 25},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 26},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 27},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 28},
    {refalrts::icUpdateFunc, 0, 0, 4},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icPushStack, 0, 0, 28},
    {refalrts::icPushStack, 0, 0, 16},
    {refalrts::icPushStack, 0, 0, 27},
    {refalrts::icPushStack, 0, 0, 22},
    {refalrts::icLinkBrackets, 25, 26, 0},
    {refalrts::icPushStack, 0, 0, 21},
    {refalrts::icPushStack, 0, 0, 18},
    {refalrts::icLinkBrackets, 9, 10, 0},
    {refalrts::icPushStack, 0, 0, 15},
    {refalrts::icPushStack, 0, 0, 11},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceTile, 26, 28, 0},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceTile, 25, 25, 0},
    {refalrts::icSpliceTile, 5, 5, 0},
    {refalrts::icSpliceTile, 6, 6, 0},
    {refalrts::icSpliceTile, 21, 24, 0},
    {refalrts::icSpliceTile, 9, 10, 0},
    {refalrts::icSpliceTile, 11, 20, 0},
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
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 } </11 & LexFolding/12 e.SrcName#1/7/13 >/15 </16 & Seq/17 </18 & CreateClosure /19 & lambda_CompileFile_0/20 Tile{ AsIs: (/9 AsIs: e.SrcName#1/7 AsIs: )/10 } >/21 </22 & CreateClosure /23 & lambda_CompileFile_2/24 Tile{ AsIs: s.Opt#1/6 } Tile{ AsIs: s.GenMode#1/5 } (/25 Tile{ AsIs: e.OutputName#1/2 } )/26 >/27 >/28 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[12], LexFolding, "LexFolding" ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[13], context[14], context[7], context[8]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[16] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[17], Seq, "Seq" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[18] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[19], refalrts::create_closure, "refalrts::create_closure" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[20], lambda_CompileFile_0, "lambda_CompileFile_0" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[21] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[22] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[23], refalrts::create_closure, "refalrts::create_closure" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[24], lambda_CompileFile_2, "lambda_CompileFile_2" ) )
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
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[28] );
  refalrts::push_stack( context[16] );
  refalrts::push_stack( context[27] );
  refalrts::push_stack( context[22] );
  refalrts::link_brackets( context[25], context[26] );
  refalrts::push_stack( context[21] );
  refalrts::push_stack( context[18] );
  refalrts::link_brackets( context[9], context[10] );
  refalrts::push_stack( context[15] );
  refalrts::push_stack( context[11] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[26], context[28] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[25], context[25] );
  res = refalrts::splice_evar( res, context[5], context[5] );
  res = refalrts::splice_evar( res, context[6], context[6] );
  res = refalrts::splice_evar( res, context[21], context[24] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[11], context[20] );
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
    //FAST GEN:S 
    //GLOBAL GEN:S 
    // </0 & SelectOptFlags/4 s.idx#0/5 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icsVarLeft, 0, 5, 2},
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icOnFailGoTo, +7, 0, 0},
    //#OptNone
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
    //#OptPattern
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
    //#OptResult
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
    //#OptBoth
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
  //FAST GEN:S 
  //GLOBAL GEN:S 
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
    //#OptNone
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
    //#OptPattern
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
    //#OptResult
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

  //#OptBoth
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
