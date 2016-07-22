// Automatically generated file. Don't edit!
#include "refalrts.h"


extern refalrts::FnResult CreateGlobalGen(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult CreateHardPattern(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult DelAccumulator(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Fetch(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult FoldOpenELoops(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult GenPattern(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult GenResult(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult HighLevelRASL_Function_Conjoint(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult MapReduce(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Max(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult PatternComment(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult ReverseGen(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Seq(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult SplitGen(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult ComposeVars(refalrts::Iter arg_begin, refalrts::Iter arg_end);

// identifier #CmdComment
template <typename SREFAL_PARAM_INT>
struct ident_CmdComment {
  static const char *name() {
    return "CmdComment";
  }
};

// identifier #CmdFail
template <typename SREFAL_PARAM_INT>
struct ident_CmdFail {
  static const char *name() {
    return "CmdFail";
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

// identifier #CmdSentence
template <typename SREFAL_PARAM_INT>
struct ident_CmdSentence {
  static const char *name() {
    return "CmdSentence";
  }
};

// identifier #Function
template <typename SREFAL_PARAM_INT>
struct ident_Function {
  static const char *name() {
    return "Function";
  }
};

// identifier #Junk
template <typename SREFAL_PARAM_INT>
struct ident_Junk {
  static const char *name() {
    return "Junk";
  }
};

// identifier #TkVariable
template <typename SREFAL_PARAM_INT>
struct ident_TkVariable {
  static const char *name() {
    return "TkVariable";
  }
};

static refalrts::FnResult lambda_HighLevelRASL_Function_Conjoint_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { PatternComment, "PatternComment" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    // </0 & lambda_HighLevelRASL_Function_Conjoint_0/4 (/7 e.HardGens#2/5 )/8 (/11 e.Result#2/9 )/12 e.HardGen#3/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icBracketLeftSave, 0, 5, 2},
    {refalrts::icBracketLeftSave, 0, 9, 2},
    // closed e.HardGens#2 as range 5
    // closed e.Result#2 as range 9
    // closed e.HardGen#3 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } (/13 Tile{ AsIs: e.HardGens#2/5 } (/14 Tile{ AsIs: e.HardGen#3/2 } Tile{ HalfReuse: )/0 HalfReuse: )/4 AsIs: (/7 } (/15 </16 & PatternComment/17 e.HardGen#3/2/18 >/20 Tile{ AsIs: )/8 AsIs: (/11 AsIs: e.Result#2/9 AsIs: )/12 } Tile{ HalfReuse: )/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 13},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 14},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 15},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 16},
    {refalrts::icAllocFunc, 0, 0, 17},
    {refalrts::icCopyEVar, 18, 2, 0},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 20},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 0},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 4},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
    {refalrts::icLinkBrackets, 7, 1, 0},
    {refalrts::icLinkBrackets, 11, 12, 0},
    {refalrts::icLinkBrackets, 15, 8, 0},
    {refalrts::icPushStack, 0, 0, 20},
    {refalrts::icPushStack, 0, 0, 16},
    {refalrts::icLinkBrackets, 13, 4, 0},
    {refalrts::icLinkBrackets, 14, 0, 0},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceTile, 8, 12, 0},
    {refalrts::icSpliceTile, 15, 20, 0},
    {refalrts::icSpliceTile, 0, 7, 0},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceTile, 14, 14, 0},
    {refalrts::icSpliceEVar, 0, 0, 5},
    {refalrts::icSpliceTile, 13, 13, 0},
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
  // </0 & lambda_HighLevelRASL_Function_Conjoint_0/4 (/7 e.HardGens#2/5 )/8 (/11 e.Result#2/9 )/12 e.HardGen#3/2 >/1
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
  context[9] = 0;
  context[10] = 0;
  context[11] = refalrts::brackets_left( context[9], context[10], context[2], context[3] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[11], context[12]);
  // closed e.HardGens#2 as range 5
  // closed e.Result#2 as range 9
  // closed e.HardGen#3 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } (/13 Tile{ AsIs: e.HardGens#2/5 } (/14 Tile{ AsIs: e.HardGen#3/2 } Tile{ HalfReuse: )/0 HalfReuse: )/4 AsIs: (/7 } (/15 </16 & PatternComment/17 e.HardGen#3/2/18 >/20 Tile{ AsIs: )/8 AsIs: (/11 AsIs: e.Result#2/9 AsIs: )/12 } Tile{ HalfReuse: )/1 ]] }
  if( ! refalrts::alloc_open_bracket( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[16] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[17], PatternComment, "PatternComment" ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[18], context[19], context[2], context[3]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[20] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_close_bracket( context[0] );
  refalrts::reinit_close_bracket( context[4] );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[7], context[1] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[15], context[8] );
  refalrts::push_stack( context[20] );
  refalrts::push_stack( context[16] );
  refalrts::link_brackets( context[13], context[4] );
  refalrts::link_brackets( context[14], context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[8], context[12] );
  res = refalrts::splice_evar( res, context[15], context[20] );
  res = refalrts::splice_evar( res, context[0], context[7] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[14], context[14] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[13], context[13] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult lambda_HighLevelRASL_Function_Conjoint_1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 24 elems
  refalrts::Iter context[24];
  refalrts::zeros( context, 24 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { lambda_HighLevelRASL_Function_Conjoint_0, "lambda_HighLevelRASL_Function_Conjoint_0" },
    { refalrts::create_closure, "refalrts::create_closure" },
    { Fetch, "Fetch" },
    { CreateHardPattern, "CreateHardPattern" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    // </0 & lambda_HighLevelRASL_Function_Conjoint_1/4 (/7 e.HardGens#2/5 )/8 (/11 (/15 e.Pattern#2/13 )/16 (/19 e.Result#2/17 )/20 )/12 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icBracketLeftSave, 0, 5, 2},
    {refalrts::icBracketLeftSave, 0, 9, 2},
    {refalrts::icBracketLeftSave, 0, 13, 9},
    {refalrts::icBracketLeftSave, 0, 17, 9},
    {refalrts::icEmpty, 0, 0, 9},
    {refalrts::icEmpty, 0, 0, 2},
    // closed e.HardGens#2 as range 5
    // closed e.Pattern#2 as range 13
    // closed e.Result#2 as range 17
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 HalfReuse: </7 } & CreateHardPattern/21 Tile{ AsIs: e.Pattern#2/13 } >/22 </23 Tile{ HalfReuse: & CreateClosure /8 HalfReuse: & lambda_HighLevelRASL_Function_Conjoint_0/11 AsIs: (/15 } Tile{ AsIs: e.HardGens#2/5 } Tile{ AsIs: )/16 AsIs: (/19 AsIs: e.Result#2/17 AsIs: )/20 HalfReuse: >/12 AsIs: >/1 ]] }
    {refalrts::icAllocFunc, 0, 3, 21},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 22},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 23},
    {refalrts::icUpdateFunc, 0, 2, 4},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 7},
    {refalrts::icReinitFunc, 0, 1, 8},
    {refalrts::icReinitFunc, 0, 0, 11},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 12},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icPushStack, 0, 0, 23},
    {refalrts::icLinkBrackets, 19, 20, 0},
    {refalrts::icLinkBrackets, 15, 16, 0},
    {refalrts::icPushStack, 0, 0, 22},
    {refalrts::icPushStack, 0, 0, 7},
    {refalrts::icSetRes, 0, 0, 16},
    {refalrts::icSpliceEVar, 0, 0, 5},
    {refalrts::icSpliceTile, 8, 15, 0},
    {refalrts::icSpliceTile, 22, 23, 0},
    {refalrts::icSpliceEVar, 0, 0, 13},
    {refalrts::icSpliceTile, 21, 21, 0},
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
  // </0 & lambda_HighLevelRASL_Function_Conjoint_1/4 (/7 e.HardGens#2/5 )/8 (/11 (/15 e.Pattern#2/13 )/16 (/19 e.Result#2/17 )/20 )/12 >/1
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
  context[9] = 0;
  context[10] = 0;
  context[11] = refalrts::brackets_left( context[9], context[10], context[2], context[3] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[11], context[12]);
  context[13] = 0;
  context[14] = 0;
  context[15] = refalrts::brackets_left( context[13], context[14], context[9], context[10] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[15], context[16]);
  context[17] = 0;
  context[18] = 0;
  context[19] = refalrts::brackets_left( context[17], context[18], context[9], context[10] );
  if( ! context[19] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[19], context[20]);
  if( ! refalrts::empty_seq( context[9], context[10] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.HardGens#2 as range 5
  // closed e.Pattern#2 as range 13
  // closed e.Result#2 as range 17

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 HalfReuse: </7 } & CreateHardPattern/21 Tile{ AsIs: e.Pattern#2/13 } >/22 </23 Tile{ HalfReuse: & CreateClosure /8 HalfReuse: & lambda_HighLevelRASL_Function_Conjoint_0/11 AsIs: (/15 } Tile{ AsIs: e.HardGens#2/5 } Tile{ AsIs: )/16 AsIs: (/19 AsIs: e.Result#2/17 AsIs: )/20 HalfReuse: >/12 AsIs: >/1 ]] }
  if( ! refalrts::alloc_name( context[21], CreateHardPattern, "CreateHardPattern" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[22] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[23] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], Fetch, "Fetch" );
  refalrts::reinit_open_call( context[7] );
  refalrts::reinit_name( context[8], refalrts::create_closure, "refalrts::create_closure" );
  refalrts::reinit_name( context[11], lambda_HighLevelRASL_Function_Conjoint_0, "lambda_HighLevelRASL_Function_Conjoint_0" );
  refalrts::reinit_close_call( context[12] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[12] );
  refalrts::push_stack( context[23] );
  refalrts::link_brackets( context[19], context[20] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::push_stack( context[22] );
  refalrts::push_stack( context[7] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[16];
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[8], context[15] );
  res = refalrts::splice_evar( res, context[22], context[23] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[21], context[21] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult lambda_HighLevelRASL_Function_Conjoint_2(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { CreateGlobalGen, "CreateGlobalGen" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    // </0 & lambda_HighLevelRASL_Function_Conjoint_2/4 (/7 e.HardPatterns#2/5 )/8 e.SentenceTails#2/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icBracketLeftSave, 0, 5, 2},
    // closed e.HardPatterns#2 as range 5
    // closed e.SentenceTails#2 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  (/7 {REMOVED TILE}  )/8 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & CreateGlobalGen/4 } Tile{ AsIs: e.HardPatterns#2/5 } Tile{ AsIs: >/1 } Tile{ AsIs: e.SentenceTails#2/2 } Tile{ ]] }
    {refalrts::icUpdateFunc, 0, 0, 4},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceTile, 1, 1, 0},
    {refalrts::icSpliceEVar, 0, 0, 5},
    {refalrts::icTrash, 0, 0, 4},
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
  // </0 & lambda_HighLevelRASL_Function_Conjoint_2/4 (/7 e.HardPatterns#2/5 )/8 e.SentenceTails#2/2 >/1
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
  // closed e.HardPatterns#2 as range 5
  // closed e.SentenceTails#2 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  (/7 {REMOVED TILE}  )/8 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & CreateGlobalGen/4 } Tile{ AsIs: e.HardPatterns#2/5 } Tile{ AsIs: >/1 } Tile{ AsIs: e.SentenceTails#2/2 } Tile{ ]] }
  refalrts::update_name( context[4], CreateGlobalGen, "CreateGlobalGen" );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[1], context[1] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[4], res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult lambda_HighLevelRASL_Function_Conjoint_3(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 35 elems
  refalrts::Iter context[35];
  refalrts::zeros( context, 35 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { SplitGen, "SplitGen" },
    { PatternComment, "PatternComment" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_CmdComment<int>::name
  };
  using refalrts::numbers;
  static const refalrts::StringItem strings[] = {
    {"GLOBAL GEN:", 11},
    {"FAST GEN:", 9}
  };
  static const refalrts::RASLCommand raa[] = {
    // </0 & lambda_HighLevelRASL_Function_Conjoint_3/4 (/7 e.FastGen#2/5 )/8 (/11 e.GlobalGen#2/9 )/12 e.SentenceTails#2/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icBracketLeftSave, 0, 5, 2},
    {refalrts::icBracketLeftSave, 0, 9, 2},
    // closed e.FastGen#2 as range 5
    // closed e.GlobalGen#2 as range 9
    // closed e.SentenceTails#2 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: (/4 HalfReuse: # CmdComment/7 }"FAST GEN:"/13 </15 & PatternComment/16 Tile{ AsIs: e.FastGen#2/5 } >/17 )/18 (/19 # CmdComment/20"GLOBAL GEN:"/21 </23 & PatternComment/24 e.GlobalGen#2/9/25 >/27 )/28 )/29 (/30 </31 Tile{ HalfReuse: & SplitGen/8 AsIs: (/11 AsIs: e.GlobalGen#2/9 AsIs: )/12 AsIs: e.SentenceTails#2/2 AsIs: >/1 } )/32 e.SentenceTails#2/2/33 Tile{ ]] }
    {refalrts::icAllocString, 0, 1, 13},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 15},
    {refalrts::icAllocFunc, 0, 1, 16},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 17},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 18},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 19},
    {refalrts::icAllocIdent, 0, 0, 20},
    {refalrts::icAllocString, 0, 0, 21},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 23},
    {refalrts::icAllocFunc, 0, 1, 24},
    {refalrts::icCopyEVar, 25, 9, 0},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 27},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 28},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 29},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 30},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 31},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 32},
    {refalrts::icCopyEVar, 33, 2, 0},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 0},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 4},
    {refalrts::icReinitIdent, 0, 0, 7},
    {refalrts::icReinitFunc, 0, 0, 8},
    {refalrts::icLinkBrackets, 30, 32, 0},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 31},
    {refalrts::icLinkBrackets, 11, 12, 0},
    {refalrts::icLinkBrackets, 0, 29, 0},
    {refalrts::icLinkBrackets, 19, 28, 0},
    {refalrts::icPushStack, 0, 0, 27},
    {refalrts::icPushStack, 0, 0, 23},
    {refalrts::icLinkBrackets, 4, 18, 0},
    {refalrts::icPushStack, 0, 0, 17},
    {refalrts::icPushStack, 0, 0, 15},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 33, 34, 0},
    {refalrts::icSpliceTile, 32, 32, 0},
    {refalrts::icSpliceTile, 8, 1, 0},
    {refalrts::icSpliceTile, 17, 31, 0},
    {refalrts::icSpliceEVar, 0, 0, 5},
    {refalrts::icSpliceTile, 13, 16, 0},
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
  // </0 & lambda_HighLevelRASL_Function_Conjoint_3/4 (/7 e.FastGen#2/5 )/8 (/11 e.GlobalGen#2/9 )/12 e.SentenceTails#2/2 >/1
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
  context[9] = 0;
  context[10] = 0;
  context[11] = refalrts::brackets_left( context[9], context[10], context[2], context[3] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[11], context[12]);
  // closed e.FastGen#2 as range 5
  // closed e.GlobalGen#2 as range 9
  // closed e.SentenceTails#2 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: (/4 HalfReuse: # CmdComment/7 }"FAST GEN:"/13 </15 & PatternComment/16 Tile{ AsIs: e.FastGen#2/5 } >/17 )/18 (/19 # CmdComment/20"GLOBAL GEN:"/21 </23 & PatternComment/24 e.GlobalGen#2/9/25 >/27 )/28 )/29 (/30 </31 Tile{ HalfReuse: & SplitGen/8 AsIs: (/11 AsIs: e.GlobalGen#2/9 AsIs: )/12 AsIs: e.SentenceTails#2/2 AsIs: >/1 } )/32 e.SentenceTails#2/2/33 Tile{ ]] }
  if( ! refalrts::alloc_chars( context[13], context[14], "FAST GEN:", 9 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[16], PatternComment, "PatternComment" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[17] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[18] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[19] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[20], & ident_CmdComment<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[21], context[22], "GLOBAL GEN:", 11 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[23] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[24], PatternComment, "PatternComment" ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[25], context[26], context[9], context[10]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[27] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[28] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[29] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[30] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[31] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[32] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[33], context[34], context[2], context[3]))
    return refalrts::cNoMemory;
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_open_bracket( context[4] );
  refalrts::reinit_ident( context[7], & ident_CmdComment<int>::name );
  refalrts::reinit_name( context[8], SplitGen, "SplitGen" );
  refalrts::link_brackets( context[30], context[32] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[31] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[0], context[29] );
  refalrts::link_brackets( context[19], context[28] );
  refalrts::push_stack( context[27] );
  refalrts::push_stack( context[23] );
  refalrts::link_brackets( context[4], context[18] );
  refalrts::push_stack( context[17] );
  refalrts::push_stack( context[15] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[33], context[34] );
  res = refalrts::splice_evar( res, context[32], context[32] );
  res = refalrts::splice_evar( res, context[8], context[1] );
  res = refalrts::splice_evar( res, context[17], context[31] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[13], context[16] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult lambda_HighLevelRASL_Function_Conjoint_4(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 25 elems
  refalrts::Iter context[25];
  refalrts::zeros( context, 25 );
#ifdef INTERPRET
  using refalrts::functions;
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    // </0 & lambda_HighLevelRASL_Function_Conjoint_4/4 (/7 (/11 e.Substitute#3/9 )/12 e.Substs#3/5 )/8 (/15 (/19 e.HardGenComment#3/17 )/20 (/23 e.Result#3/21 )/24 )/16 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icBracketLeftSave, 0, 5, 2},
    {refalrts::icBracketLeftSave, 0, 9, 5},
    {refalrts::icBracketLeftSave, 0, 13, 2},
    {refalrts::icBracketLeftSave, 0, 17, 13},
    {refalrts::icBracketLeftSave, 0, 21, 13},
    {refalrts::icEmpty, 0, 0, 13},
    {refalrts::icEmpty, 0, 0, 2},
    // closed e.Substitute#3 as range 9
    // closed e.Substs#3 as range 5
    // closed e.HardGenComment#3 as range 17
    // closed e.Result#3 as range 21
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  )/12 {REMOVED TILE}  )/8 {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.Substs#3/5 } Tile{ HalfReuse: )/4 AsIs: (/7 AsIs: (/11 } Tile{ AsIs: e.Substitute#3/9 } Tile{ HalfReuse: )/15 AsIs: (/19 AsIs: e.HardGenComment#3/17 AsIs: )/20 AsIs: (/23 AsIs: e.Result#3/21 AsIs: )/24 AsIs: )/16 } Tile{ ]] }
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 0},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 4},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 15},
    {refalrts::icLinkBrackets, 7, 16, 0},
    {refalrts::icLinkBrackets, 23, 24, 0},
    {refalrts::icLinkBrackets, 19, 20, 0},
    {refalrts::icLinkBrackets, 11, 15, 0},
    {refalrts::icLinkBrackets, 0, 4, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 15, 16, 0},
    {refalrts::icSpliceEVar, 0, 0, 9},
    {refalrts::icSpliceTile, 4, 11, 0},
    {refalrts::icSpliceEVar, 0, 0, 5},
    {refalrts::icTrash, 0, 0, 0},
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
  // </0 & lambda_HighLevelRASL_Function_Conjoint_4/4 (/7 (/11 e.Substitute#3/9 )/12 e.Substs#3/5 )/8 (/15 (/19 e.HardGenComment#3/17 )/20 (/23 e.Result#3/21 )/24 )/16 >/1
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
  context[9] = 0;
  context[10] = 0;
  context[11] = refalrts::brackets_left( context[9], context[10], context[5], context[6] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[11], context[12]);
  context[13] = 0;
  context[14] = 0;
  context[15] = refalrts::brackets_left( context[13], context[14], context[2], context[3] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[15], context[16]);
  context[17] = 0;
  context[18] = 0;
  context[19] = refalrts::brackets_left( context[17], context[18], context[13], context[14] );
  if( ! context[19] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[19], context[20]);
  context[21] = 0;
  context[22] = 0;
  context[23] = refalrts::brackets_left( context[21], context[22], context[13], context[14] );
  if( ! context[23] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[23], context[24]);
  if( ! refalrts::empty_seq( context[13], context[14] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Substitute#3 as range 9
  // closed e.Substs#3 as range 5
  // closed e.HardGenComment#3 as range 17
  // closed e.Result#3 as range 21

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  )/12 {REMOVED TILE}  )/8 {REMOVED TILE}  >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.Substs#3/5 } Tile{ HalfReuse: )/4 AsIs: (/7 AsIs: (/11 } Tile{ AsIs: e.Substitute#3/9 } Tile{ HalfReuse: )/15 AsIs: (/19 AsIs: e.HardGenComment#3/17 AsIs: )/20 AsIs: (/23 AsIs: e.Result#3/21 AsIs: )/24 AsIs: )/16 } Tile{ ]] }
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_close_bracket( context[4] );
  refalrts::reinit_close_bracket( context[15] );
  refalrts::link_brackets( context[7], context[16] );
  refalrts::link_brackets( context[23], context[24] );
  refalrts::link_brackets( context[19], context[20] );
  refalrts::link_brackets( context[11], context[15] );
  refalrts::link_brackets( context[0], context[4] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[15], context[16] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[4], context[11] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[0], res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult lambda_HighLevelRASL_Function_Conjoint_5(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 33 elems
  refalrts::Iter context[33];
  refalrts::zeros( context, 33 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { GenPattern, "GenPattern" },
    { lambda_HighLevelRASL_Function_Conjoint_4, "lambda_HighLevelRASL_Function_Conjoint_4" },
    { MapReduce, "MapReduce" },
    { DelAccumulator, "DelAccumulator" },
    { ReverseGen, "ReverseGen" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    // </0 & lambda_HighLevelRASL_Function_Conjoint_5/4 s.FnGenInitSubst#1/5 s.FnGenSubst#1/6 (/9 e.Name#1/7 )/10 (/13 e.Comments#2/11 )/14 (/17 (/21 e.CommonPattern#2/19 )/22 e.SentSubsts#2/15 )/18 e.SentenceTails#2/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icsVarLeft, 0, 5, 2},
    {refalrts::icsVarLeft, 0, 6, 2},
    {refalrts::icBracketLeftSave, 0, 7, 2},
    {refalrts::icBracketLeftSave, 0, 11, 2},
    {refalrts::icBracketLeftSave, 0, 15, 2},
    {refalrts::icBracketLeftSave, 0, 19, 15},
    // closed e.Name#1 as range 7
    // closed e.Comments#2 as range 11
    // closed e.CommonPattern#2 as range 19
    // closed e.SentSubsts#2 as range 15
    // closed e.SentenceTails#2 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/21 } Tile{ AsIs: e.Comments#2/11 } Tile{ AsIs: )/14 AsIs: (/17 } Tile{ AsIs: </0 Reuse: & GenPattern/4 AsIs: s.FnGenInitSubst#1/5 AsIs: s.FnGenSubst#1/6 AsIs: (/9 AsIs: e.Name#1/7 AsIs: )/10 HalfReuse: </13 } & ReverseGen/23 Tile{ AsIs: e.CommonPattern#2/19 } >/24 >/25 )/26 </27 & DelAccumulator/28 </29 & MapReduce/30 & lambda_HighLevelRASL_Function_Conjoint_4/31 Tile{ HalfReuse: (/22 AsIs: e.SentSubsts#2/15 AsIs: )/18 AsIs: e.SentenceTails#2/2 AsIs: >/1 } >/32 Tile{ ]] }
    {refalrts::icAllocFunc, 0, 4, 23},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 24},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 25},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 26},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 27},
    {refalrts::icAllocFunc, 0, 3, 28},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 29},
    {refalrts::icAllocFunc, 0, 2, 30},
    {refalrts::icAllocFunc, 0, 1, 31},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 32},
    {refalrts::icUpdateFunc, 0, 0, 4},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 13},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 22},
    {refalrts::icPushStack, 0, 0, 32},
    {refalrts::icPushStack, 0, 0, 27},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 29},
    {refalrts::icLinkBrackets, 22, 18, 0},
    {refalrts::icLinkBrackets, 17, 26, 0},
    {refalrts::icPushStack, 0, 0, 25},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icPushStack, 0, 0, 24},
    {refalrts::icPushStack, 0, 0, 13},
    {refalrts::icLinkBrackets, 9, 10, 0},
    {refalrts::icLinkBrackets, 21, 14, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 32, 32, 0},
    {refalrts::icSpliceTile, 22, 1, 0},
    {refalrts::icSpliceTile, 24, 31, 0},
    {refalrts::icSpliceEVar, 0, 0, 19},
    {refalrts::icSpliceTile, 23, 23, 0},
    {refalrts::icSpliceTile, 0, 13, 0},
    {refalrts::icSpliceTile, 14, 17, 0},
    {refalrts::icSpliceEVar, 0, 0, 11},
    {refalrts::icSpliceTile, 21, 21, 0},
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
  // </0 & lambda_HighLevelRASL_Function_Conjoint_5/4 s.FnGenInitSubst#1/5 s.FnGenSubst#1/6 (/9 e.Name#1/7 )/10 (/13 e.Comments#2/11 )/14 (/17 (/21 e.CommonPattern#2/19 )/22 e.SentSubsts#2/15 )/18 e.SentenceTails#2/2 >/1
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
  context[15] = 0;
  context[16] = 0;
  context[17] = refalrts::brackets_left( context[15], context[16], context[2], context[3] );
  if( ! context[17] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[17], context[18]);
  context[19] = 0;
  context[20] = 0;
  context[21] = refalrts::brackets_left( context[19], context[20], context[15], context[16] );
  if( ! context[21] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[21], context[22]);
  // closed e.Name#1 as range 7
  // closed e.Comments#2 as range 11
  // closed e.CommonPattern#2 as range 19
  // closed e.SentSubsts#2 as range 15
  // closed e.SentenceTails#2 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ AsIs: (/21 } Tile{ AsIs: e.Comments#2/11 } Tile{ AsIs: )/14 AsIs: (/17 } Tile{ AsIs: </0 Reuse: & GenPattern/4 AsIs: s.FnGenInitSubst#1/5 AsIs: s.FnGenSubst#1/6 AsIs: (/9 AsIs: e.Name#1/7 AsIs: )/10 HalfReuse: </13 } & ReverseGen/23 Tile{ AsIs: e.CommonPattern#2/19 } >/24 >/25 )/26 </27 & DelAccumulator/28 </29 & MapReduce/30 & lambda_HighLevelRASL_Function_Conjoint_4/31 Tile{ HalfReuse: (/22 AsIs: e.SentSubsts#2/15 AsIs: )/18 AsIs: e.SentenceTails#2/2 AsIs: >/1 } >/32 Tile{ ]] }
  if( ! refalrts::alloc_name( context[23], ReverseGen, "ReverseGen" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[24] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[25] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[26] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[27] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[28], DelAccumulator, "DelAccumulator" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[29] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[30], MapReduce, "MapReduce" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[31], lambda_HighLevelRASL_Function_Conjoint_4, "lambda_HighLevelRASL_Function_Conjoint_4" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[32] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], GenPattern, "GenPattern" );
  refalrts::reinit_open_call( context[13] );
  refalrts::reinit_open_bracket( context[22] );
  refalrts::push_stack( context[32] );
  refalrts::push_stack( context[27] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[29] );
  refalrts::link_brackets( context[22], context[18] );
  refalrts::link_brackets( context[17], context[26] );
  refalrts::push_stack( context[25] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[24] );
  refalrts::push_stack( context[13] );
  refalrts::link_brackets( context[9], context[10] );
  refalrts::link_brackets( context[21], context[14] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[32], context[32] );
  res = refalrts::splice_evar( res, context[22], context[1] );
  res = refalrts::splice_evar( res, context[24], context[31] );
  res = refalrts::splice_evar( res, context[19], context[20] );
  res = refalrts::splice_evar( res, context[23], context[23] );
  res = refalrts::splice_evar( res, context[0], context[13] );
  res = refalrts::splice_evar( res, context[14], context[17] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_evar( res, context[21], context[21] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult lambda_HighLevelRASL_Function_Conjoint_6(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { Max, "Max" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_CmdSentence<int>::name,
    & ident_CmdComment<int>::name,
    & ident_CmdIssueMem<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    // </0 & lambda_HighLevelRASL_Function_Conjoint_6/4 s.MaxMemory#3/5 (/8 e.HardGenComment#3/6 )/9 (/12 # CmdIssueMem/14 s.Memory#4/15 )/13 e.Commands#4/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icsVarLeft, 0, 5, 2},
    {refalrts::icBracketLeftSave, 0, 6, 2},
    {refalrts::icBracketLeftSave, 0, 10, 2},
    {refalrts::icIdentLeftSave, 14, 2, 10},
    // closed e.HardGenComment#3 as range 6
    // closed e.Commands#4 as range 2
    {refalrts::icsVarLeft, 0, 15, 10},
    {refalrts::icEmpty, 0, 0, 10},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  s.Memory#4/15 {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Max/4 AsIs: s.MaxMemory#3/5 HalfReuse: s.Memory4 #15/8 } Tile{ HalfReuse: >/9 AsIs: (/12 Reuse: # CmdSentence/14 } (/16 # CmdComment/17 Tile{ AsIs: e.HardGenComment#3/6 } Tile{ AsIs: )/13 AsIs: e.Commands#4/2 HalfReuse: )/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 16},
    {refalrts::icAllocIdent, 0, 1, 17},
    {refalrts::icUpdateFunc, 0, 0, 4},
    {refalrts::icReinitSVar, 0, 15, 8},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 9},
    {refalrts::icUpdateIdent, 0, 0, 14},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
    {refalrts::icLinkBrackets, 12, 1, 0},
    {refalrts::icLinkBrackets, 16, 13, 0},
    {refalrts::icPushStack, 0, 0, 9},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icSetRes, 0, 0, 13},
    {refalrts::icSpliceEVar, 0, 0, 6},
    {refalrts::icSpliceTile, 16, 17, 0},
    {refalrts::icSpliceTile, 9, 14, 0},
    {refalrts::icTrash, 0, 0, 8},
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
  // </0 & lambda_HighLevelRASL_Function_Conjoint_6/4 s.MaxMemory#3/5 (/8 e.HardGenComment#3/6 )/9 (/12 # CmdIssueMem/14 s.Memory#4/15 )/13 e.Commands#4/2 >/1
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
  context[14] = refalrts::ident_left(  & ident_CmdIssueMem<int>::name, context[10], context[11] );
  if( ! context[14] )
    return refalrts::cRecognitionImpossible;
  // closed e.HardGenComment#3 as range 6
  // closed e.Commands#4 as range 2
  if( ! refalrts::svar_left( context[15], context[10], context[11] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[10], context[11] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  s.Memory#4/15 {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Max/4 AsIs: s.MaxMemory#3/5 HalfReuse: s.Memory4 #15/8 } Tile{ HalfReuse: >/9 AsIs: (/12 Reuse: # CmdSentence/14 } (/16 # CmdComment/17 Tile{ AsIs: e.HardGenComment#3/6 } Tile{ AsIs: )/13 AsIs: e.Commands#4/2 HalfReuse: )/1 ]] }
  if( ! refalrts::alloc_open_bracket( context[16] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[17], & ident_CmdComment<int>::name ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], Max, "Max" );
  refalrts::reinit_svar( context[8], context[15] );
  refalrts::reinit_close_call( context[9] );
  refalrts::update_ident( context[14], & ident_CmdSentence<int>::name );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[12], context[1] );
  refalrts::link_brackets( context[16], context[13] );
  refalrts::push_stack( context[9] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[13];
  res = refalrts::splice_evar( res, context[6], context[7] );
  res = refalrts::splice_evar( res, context[16], context[17] );
  res = refalrts::splice_evar( res, context[9], context[14] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[8], res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult lambda_HighLevelRASL_Function_Conjoint_7(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 47 elems
  refalrts::Iter context[47];
  refalrts::zeros( context, 47 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { lambda_HighLevelRASL_Function_Conjoint_6, "lambda_HighLevelRASL_Function_Conjoint_6" },
    { ComposeVars, "ComposeVars" },
    { Fetch, "Fetch" },
    { refalrts::create_closure, "refalrts::create_closure" },
    { GenResult, "GenResult" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    // </0 & lambda_HighLevelRASL_Function_Conjoint_7/4 s.FnGenResult#1/21 s.FnGenSubst#1/22 s.ContextSize#2/23 (/26 e.MarkedPattern#2/24 )/27 (/30 e.Vars#2/28 )/31 s.MaxMemory#3/32 (/7 (/11 e.Substitute#3/9 )/12 (/15 e.HardGenComment#3/13 )/16 (/19 e.Result#3/17 )/20 )/8 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icBracketRightSave, 0, 5, 2},
    {refalrts::icBracketLeftSave, 0, 9, 5},
    {refalrts::icBracketLeftSave, 0, 13, 5},
    {refalrts::icBracketLeftSave, 0, 17, 5},
    {refalrts::icEmpty, 0, 0, 5},
    // closed e.Substitute#3 as range 9
    // closed e.HardGenComment#3 as range 13
    // closed e.Result#3 as range 17
    {refalrts::icsVarLeft, 0, 21, 2},
    {refalrts::icsVarLeft, 0, 22, 2},
    {refalrts::icsVarLeft, 0, 23, 2},
    {refalrts::icBracketLeftSave, 0, 24, 2},
    {refalrts::icBracketLeftSave, 0, 28, 2},
    // closed e.MarkedPattern#2 as range 24
    // closed e.Vars#2 as range 28
    {refalrts::icsVarLeft, 0, 32, 2},
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  s.FnGenResult#1/21 s.FnGenSubst#1/22 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 } </33 & GenResult/34 Tile{ HalfReuse: s.FnGenResult1 #21/16 AsIs: (/19 AsIs: e.Result#3/17 AsIs: )/20 HalfReuse: </8 HalfReuse: s.FnGenSubst1 #22/1 } Tile{ AsIs: s.ContextSize#2/23 HalfReuse: </26 } Tile{ HalfReuse: & ComposeVars/27 AsIs: (/30 } Tile{ AsIs: e.MarkedPattern#2/24 } Tile{ HalfReuse: )/7 AsIs: (/11 AsIs: e.Substitute#3/9 AsIs: )/12 AsIs: (/15 } Tile{ AsIs: e.Vars#2/28 } )/35 >/36 (/37 )/38 >/39 >/40 </41 & CreateClosure /42 Tile{ HalfReuse: & lambda_HighLevelRASL_Function_Conjoint_6/31 AsIs: s.MaxMemory#3/32 } (/43 Tile{ AsIs: e.HardGenComment#3/13 } )/44 >/45 >/46 Tile{ ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 33},
    {refalrts::icAllocFunc, 0, 4, 34},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 35},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 36},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 37},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 38},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 39},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 40},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 41},
    {refalrts::icAllocFunc, 0, 3, 42},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 43},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 44},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 45},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 46},
    {refalrts::icUpdateFunc, 0, 2, 4},
    {refalrts::icReinitSVar, 0, 21, 16},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 8},
    {refalrts::icReinitSVar, 0, 22, 1},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 26},
    {refalrts::icReinitFunc, 0, 1, 27},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 7},
    {refalrts::icReinitFunc, 0, 0, 31},
    {refalrts::icPushStack, 0, 0, 46},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icPushStack, 0, 0, 45},
    {refalrts::icPushStack, 0, 0, 41},
    {refalrts::icLinkBrackets, 43, 44, 0},
    {refalrts::icPushStack, 0, 0, 40},
    {refalrts::icPushStack, 0, 0, 33},
    {refalrts::icPushStack, 0, 0, 39},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icLinkBrackets, 37, 38, 0},
    {refalrts::icPushStack, 0, 0, 36},
    {refalrts::icPushStack, 0, 0, 26},
    {refalrts::icLinkBrackets, 15, 35, 0},
    {refalrts::icLinkBrackets, 11, 12, 0},
    {refalrts::icLinkBrackets, 30, 7, 0},
    {refalrts::icLinkBrackets, 19, 20, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 44, 46, 0},
    {refalrts::icSpliceEVar, 0, 0, 13},
    {refalrts::icSpliceTile, 43, 43, 0},
    {refalrts::icSpliceTile, 31, 32, 0},
    {refalrts::icSpliceTile, 35, 42, 0},
    {refalrts::icSpliceEVar, 0, 0, 28},
    {refalrts::icSpliceTile, 7, 15, 0},
    {refalrts::icSpliceEVar, 0, 0, 24},
    {refalrts::icSpliceTile, 27, 30, 0},
    {refalrts::icSpliceTile, 23, 26, 0},
    {refalrts::icSpliceTile, 16, 1, 0},
    {refalrts::icSpliceTile, 33, 34, 0},
    {refalrts::icTrash, 0, 0, 4},
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
  // </0 & lambda_HighLevelRASL_Function_Conjoint_7/4 s.FnGenResult#1/21 s.FnGenSubst#1/22 s.ContextSize#2/23 (/26 e.MarkedPattern#2/24 )/27 (/30 e.Vars#2/28 )/31 s.MaxMemory#3/32 (/7 (/11 e.Substitute#3/9 )/12 (/15 e.HardGenComment#3/13 )/16 (/19 e.Result#3/17 )/20 )/8 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  context[9] = 0;
  context[10] = 0;
  context[11] = refalrts::brackets_left( context[9], context[10], context[5], context[6] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[11], context[12]);
  context[13] = 0;
  context[14] = 0;
  context[15] = refalrts::brackets_left( context[13], context[14], context[5], context[6] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[15], context[16]);
  context[17] = 0;
  context[18] = 0;
  context[19] = refalrts::brackets_left( context[17], context[18], context[5], context[6] );
  if( ! context[19] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[19], context[20]);
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Substitute#3 as range 9
  // closed e.HardGenComment#3 as range 13
  // closed e.Result#3 as range 17
  if( ! refalrts::svar_left( context[21], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[22], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[23], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[24] = 0;
  context[25] = 0;
  context[26] = refalrts::brackets_left( context[24], context[25], context[2], context[3] );
  if( ! context[26] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[26], context[27]);
  context[28] = 0;
  context[29] = 0;
  context[30] = refalrts::brackets_left( context[28], context[29], context[2], context[3] );
  if( ! context[30] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[30], context[31]);
  // closed e.MarkedPattern#2 as range 24
  // closed e.Vars#2 as range 28
  if( ! refalrts::svar_left( context[32], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  s.FnGenResult#1/21 s.FnGenSubst#1/22 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 } </33 & GenResult/34 Tile{ HalfReuse: s.FnGenResult1 #21/16 AsIs: (/19 AsIs: e.Result#3/17 AsIs: )/20 HalfReuse: </8 HalfReuse: s.FnGenSubst1 #22/1 } Tile{ AsIs: s.ContextSize#2/23 HalfReuse: </26 } Tile{ HalfReuse: & ComposeVars/27 AsIs: (/30 } Tile{ AsIs: e.MarkedPattern#2/24 } Tile{ HalfReuse: )/7 AsIs: (/11 AsIs: e.Substitute#3/9 AsIs: )/12 AsIs: (/15 } Tile{ AsIs: e.Vars#2/28 } )/35 >/36 (/37 )/38 >/39 >/40 </41 & CreateClosure /42 Tile{ HalfReuse: & lambda_HighLevelRASL_Function_Conjoint_6/31 AsIs: s.MaxMemory#3/32 } (/43 Tile{ AsIs: e.HardGenComment#3/13 } )/44 >/45 >/46 Tile{ ]] }
  if( ! refalrts::alloc_open_call( context[33] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[34], GenResult, "GenResult" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[35] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[36] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[37] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[38] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[39] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[40] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[41] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[42], refalrts::create_closure, "refalrts::create_closure" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[43] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[44] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[45] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[46] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], Fetch, "Fetch" );
  refalrts::reinit_svar( context[16], context[21] );
  refalrts::reinit_open_call( context[8] );
  refalrts::reinit_svar( context[1], context[22] );
  refalrts::reinit_open_call( context[26] );
  refalrts::reinit_name( context[27], ComposeVars, "ComposeVars" );
  refalrts::reinit_close_bracket( context[7] );
  refalrts::reinit_name( context[31], lambda_HighLevelRASL_Function_Conjoint_6, "lambda_HighLevelRASL_Function_Conjoint_6" );
  refalrts::push_stack( context[46] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[45] );
  refalrts::push_stack( context[41] );
  refalrts::link_brackets( context[43], context[44] );
  refalrts::push_stack( context[40] );
  refalrts::push_stack( context[33] );
  refalrts::push_stack( context[39] );
  refalrts::push_stack( context[8] );
  refalrts::link_brackets( context[37], context[38] );
  refalrts::push_stack( context[36] );
  refalrts::push_stack( context[26] );
  refalrts::link_brackets( context[15], context[35] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[30], context[7] );
  refalrts::link_brackets( context[19], context[20] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[44], context[46] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[43], context[43] );
  res = refalrts::splice_evar( res, context[31], context[32] );
  res = refalrts::splice_evar( res, context[35], context[42] );
  res = refalrts::splice_evar( res, context[28], context[29] );
  res = refalrts::splice_evar( res, context[7], context[15] );
  res = refalrts::splice_evar( res, context[24], context[25] );
  res = refalrts::splice_evar( res, context[27], context[30] );
  res = refalrts::splice_evar( res, context[23], context[26] );
  res = refalrts::splice_evar( res, context[16], context[1] );
  res = refalrts::splice_evar( res, context[33], context[34] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[4], res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult lambda_HighLevelRASL_Function_Conjoint_8(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 28 elems
  refalrts::Iter context[28];
  refalrts::zeros( context, 28 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { lambda_HighLevelRASL_Function_Conjoint_7, "lambda_HighLevelRASL_Function_Conjoint_7" },
    { refalrts::create_closure, "refalrts::create_closure" },
    { MapReduce, "MapReduce" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    // </0 & lambda_HighLevelRASL_Function_Conjoint_8/4 s.FnGenResult#1/5 s.FnGenSubst#1/6 (/9 e.Comments#2/7 )/10 (/13 s.ContextSize#2/15 (/18 e.Vars#2/16 )/19 (/22 e.MarkedPattern#2/20 )/23 e.CommonMatchCommands#2/11 )/14 e.SentencesWithSubst#2/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icsVarLeft, 0, 5, 2},
    {refalrts::icsVarLeft, 0, 6, 2},
    {refalrts::icBracketLeftSave, 0, 7, 2},
    {refalrts::icBracketLeftSave, 0, 11, 2},
    // closed e.Comments#2 as range 7
    // closed e.SentencesWithSubst#2 as range 2
    {refalrts::icsVarLeft, 0, 15, 11},
    {refalrts::icBracketLeftSave, 0, 16, 11},
    {refalrts::icBracketLeftSave, 0, 20, 11},
    // closed e.Vars#2 as range 16
    // closed e.MarkedPattern#2 as range 20
    // closed e.CommonMatchCommands#2 as range 11
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  s.ContextSize#2/15 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } (/24 Tile{ AsIs: e.Comments#2/7 } Tile{ AsIs: e.CommonMatchCommands#2/11 } Tile{ AsIs: )/10 HalfReuse: </13 } & MapReduce/25 </26 Tile{ HalfReuse: & CreateClosure /0 Reuse: & lambda_HighLevelRASL_Function_Conjoint_7/4 AsIs: s.FnGenResult#1/5 AsIs: s.FnGenSubst#1/6 HalfReuse: s.ContextSize2 #15/9 } (/27 Tile{ AsIs: e.MarkedPattern#2/20 } Tile{ AsIs: )/23 } Tile{ AsIs: (/18 AsIs: e.Vars#2/16 AsIs: )/19 HalfReuse: >/22 } Tile{ HalfReuse: s.ContextSize2 #15/14 AsIs: e.SentencesWithSubst#2/2 AsIs: >/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 24},
    {refalrts::icAllocFunc, 0, 2, 25},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 26},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 27},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 13},
    {refalrts::icReinitFunc, 0, 1, 0},
    {refalrts::icUpdateFunc, 0, 0, 4},
    {refalrts::icReinitSVar, 0, 15, 9},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 22},
    {refalrts::icReinitSVar, 0, 15, 14},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 13},
    {refalrts::icPushStack, 0, 0, 22},
    {refalrts::icPushStack, 0, 0, 26},
    {refalrts::icLinkBrackets, 18, 19, 0},
    {refalrts::icLinkBrackets, 27, 23, 0},
    {refalrts::icLinkBrackets, 24, 10, 0},
    {refalrts::icSetRes, 0, 0, 14},
    {refalrts::icSpliceTile, 18, 22, 0},
    {refalrts::icSpliceTile, 23, 23, 0},
    {refalrts::icSpliceEVar, 0, 0, 20},
    {refalrts::icSpliceTile, 27, 27, 0},
    {refalrts::icSpliceTile, 0, 9, 0},
    {refalrts::icSpliceTile, 25, 26, 0},
    {refalrts::icSpliceTile, 10, 13, 0},
    {refalrts::icSpliceEVar, 0, 0, 11},
    {refalrts::icSpliceEVar, 0, 0, 7},
    {refalrts::icSpliceTile, 24, 24, 0},
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
  // </0 & lambda_HighLevelRASL_Function_Conjoint_8/4 s.FnGenResult#1/5 s.FnGenSubst#1/6 (/9 e.Comments#2/7 )/10 (/13 s.ContextSize#2/15 (/18 e.Vars#2/16 )/19 (/22 e.MarkedPattern#2/20 )/23 e.CommonMatchCommands#2/11 )/14 e.SentencesWithSubst#2/2 >/1
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
  // closed e.Comments#2 as range 7
  // closed e.SentencesWithSubst#2 as range 2
  if( ! refalrts::svar_left( context[15], context[11], context[12] ) )
    return refalrts::cRecognitionImpossible;
  context[16] = 0;
  context[17] = 0;
  context[18] = refalrts::brackets_left( context[16], context[17], context[11], context[12] );
  if( ! context[18] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[18], context[19]);
  context[20] = 0;
  context[21] = 0;
  context[22] = refalrts::brackets_left( context[20], context[21], context[11], context[12] );
  if( ! context[22] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[22], context[23]);
  // closed e.Vars#2 as range 16
  // closed e.MarkedPattern#2 as range 20
  // closed e.CommonMatchCommands#2 as range 11

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  s.ContextSize#2/15 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } (/24 Tile{ AsIs: e.Comments#2/7 } Tile{ AsIs: e.CommonMatchCommands#2/11 } Tile{ AsIs: )/10 HalfReuse: </13 } & MapReduce/25 </26 Tile{ HalfReuse: & CreateClosure /0 Reuse: & lambda_HighLevelRASL_Function_Conjoint_7/4 AsIs: s.FnGenResult#1/5 AsIs: s.FnGenSubst#1/6 HalfReuse: s.ContextSize2 #15/9 } (/27 Tile{ AsIs: e.MarkedPattern#2/20 } Tile{ AsIs: )/23 } Tile{ AsIs: (/18 AsIs: e.Vars#2/16 AsIs: )/19 HalfReuse: >/22 } Tile{ HalfReuse: s.ContextSize2 #15/14 AsIs: e.SentencesWithSubst#2/2 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_bracket( context[24] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[25], MapReduce, "MapReduce" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[26] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[27] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_open_call( context[13] );
  refalrts::reinit_name( context[0], refalrts::create_closure, "refalrts::create_closure" );
  refalrts::update_name( context[4], lambda_HighLevelRASL_Function_Conjoint_7, "lambda_HighLevelRASL_Function_Conjoint_7" );
  refalrts::reinit_svar( context[9], context[15] );
  refalrts::reinit_close_call( context[22] );
  refalrts::reinit_svar( context[14], context[15] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[13] );
  refalrts::push_stack( context[22] );
  refalrts::push_stack( context[26] );
  refalrts::link_brackets( context[18], context[19] );
  refalrts::link_brackets( context[27], context[23] );
  refalrts::link_brackets( context[24], context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[14];
  res = refalrts::splice_evar( res, context[18], context[22] );
  res = refalrts::splice_evar( res, context[23], context[23] );
  res = refalrts::splice_evar( res, context[20], context[21] );
  res = refalrts::splice_evar( res, context[27], context[27] );
  res = refalrts::splice_evar( res, context[0], context[9] );
  res = refalrts::splice_evar( res, context[25], context[26] );
  res = refalrts::splice_evar( res, context[10], context[13] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_evar( res, context[24], context[24] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult lambda_HighLevelRASL_Function_Conjoint_9(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
#ifdef INTERPRET
  using refalrts::functions;
  static const refalrts::RefalIdentifier idents[] = {
    & ident_CmdFail<int>::name,
    & ident_CmdOpenELoop<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    //FAST GEN:E 
    //GLOBAL GEN:E 
    // </0 & lambda_HighLevelRASL_Function_Conjoint_9/4 e.idx#0/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    // closed e.idx#0 as range 2
    {refalrts::icOnFailGoTo, +14, 0, 0},
    //E (#CmdOpenELoopE )
    // </0 & lambda_HighLevelRASL_Function_Conjoint_9/4 e.Commands#3/2 (/7 # CmdOpenELoop/9 e.OpenELoop#3/5 )/8 >/1
    {refalrts::icSave, 0, 10, 2},
    {refalrts::icBracketRightSave, 0, 5, 10},
    {refalrts::icIdentLeftSave, 9, 1, 5},
    // closed e.Commands#3 as range 10(2)
    // closed e.OpenELoop#3 as range 5
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: e.Commands#3/10(2) } Tile{ AsIs: (/7 AsIs: # CmdOpenELoop/9 AsIs: e.OpenELoop#3/5 AsIs: )/8 HalfReuse: (/1 } Tile{ HalfReuse: # CmdFail/0 HalfReuse: )/4 } Tile{ ]] }
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 1},
    {refalrts::icReinitIdent, 0, 0, 0},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 4},
    {refalrts::icLinkBrackets, 1, 4, 0},
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 0, 4, 0},
    {refalrts::icSpliceTile, 7, 1, 0},
    {refalrts::icSpliceEVar, 0, 0, 10},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    //E 
    // </0 & lambda_HighLevelRASL_Function_Conjoint_9/4 e.LastSentence#3/2 >/1
    // closed e.LastSentence#3 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 & lambda_HighLevelRASL_Function_Conjoint_9/4 {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: e.LastSentence#3/2 } Tile{ ]] }
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceEVar, 0, 0, 2},
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
  //FAST GEN:E 
  //GLOBAL GEN:E 
  // </0 & lambda_HighLevelRASL_Function_Conjoint_9/4 e.idx#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.idx#0 as range 2
  do {
    refalrts::start_sentence();
    //E (#CmdOpenELoopE )
    // </0 & lambda_HighLevelRASL_Function_Conjoint_9/4 e.Commands#3/2 (/7 # CmdOpenELoop/9 e.OpenELoop#3/5 )/8 >/1
    context[10] = context[2];
    context[11] = context[3];
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_right( context[5], context[6], context[10], context[11] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_CmdOpenELoop<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    // closed e.Commands#3 as range 10(2)
    // closed e.OpenELoop#3 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: e.Commands#3/10(2) } Tile{ AsIs: (/7 AsIs: # CmdOpenELoop/9 AsIs: e.OpenELoop#3/5 AsIs: )/8 HalfReuse: (/1 } Tile{ HalfReuse: # CmdFail/0 HalfReuse: )/4 } Tile{ ]] }
    refalrts::reinit_open_bracket( context[1] );
    refalrts::reinit_ident( context[0], & ident_CmdFail<int>::name );
    refalrts::reinit_close_bracket( context[4] );
    refalrts::link_brackets( context[1], context[4] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[7], context[1] );
    res = refalrts::splice_evar( res, context[10], context[11] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  //E 
  // </0 & lambda_HighLevelRASL_Function_Conjoint_9/4 e.LastSentence#3/2 >/1
  // closed e.LastSentence#3 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  </0 & lambda_HighLevelRASL_Function_Conjoint_9/4 {REMOVED TILE}  >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ AsIs: e.LastSentence#3/2 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult lambda_HighLevelRASL_Function_Conjoint_10(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { lambda_HighLevelRASL_Function_Conjoint_9, "lambda_HighLevelRASL_Function_Conjoint_9" },
    { Fetch, "Fetch" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_CmdIssueMem<int>::name,
    & ident_Function<int>::name,
    & ident_CmdSentence<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    // </0 & lambda_HighLevelRASL_Function_Conjoint_10/4 s.ScopeClass#1/10 (/13 e.Name#1/11 )/14 (/17 e.Prefix#2/15 )/18 s.MaxMemory#2/19 e.Sentences#2/2 (/7 # CmdSentence/9 e.LastSentence#2/5 )/8 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icBracketRightSave, 0, 5, 2},
    {refalrts::icIdentLeftSave, 9, 2, 5},
    // closed e.LastSentence#2 as range 5
    {refalrts::icsVarLeft, 0, 10, 2},
    {refalrts::icBracketLeftSave, 0, 11, 2},
    {refalrts::icBracketLeftSave, 0, 15, 2},
    // closed e.Name#1 as range 11
    // closed e.Prefix#2 as range 15
    {refalrts::icsVarLeft, 0, 19, 2},
    // closed e.Sentences#2 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # Function/4 AsIs: s.ScopeClass#1/10 AsIs: (/13 AsIs: e.Name#1/11 AsIs: )/14 AsIs: (/17 } Tile{ HalfReuse: # CmdIssueMem/18 AsIs: s.MaxMemory#2/19 } )/20 Tile{ AsIs: e.Prefix#2/15 } Tile{ AsIs: e.Sentences#2/2 } Tile{ HalfReuse: </7 HalfReuse: & Fetch/9 AsIs: e.LastSentence#2/5 HalfReuse: & lambda_HighLevelRASL_Function_Conjoint_9/8 AsIs: >/1 } )/21 Tile{ ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 20},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 21},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 0},
    {refalrts::icReinitIdent, 0, 1, 4},
    {refalrts::icReinitIdent, 0, 0, 18},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 7},
    {refalrts::icReinitFunc, 0, 1, 9},
    {refalrts::icReinitFunc, 0, 0, 8},
    {refalrts::icLinkBrackets, 0, 21, 0},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 7},
    {refalrts::icLinkBrackets, 17, 20, 0},
    {refalrts::icLinkBrackets, 13, 14, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 21, 21, 0},
    {refalrts::icSpliceTile, 7, 1, 0},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceEVar, 0, 0, 15},
    {refalrts::icSpliceTile, 20, 20, 0},
    {refalrts::icSpliceTile, 18, 19, 0},
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
  // </0 & lambda_HighLevelRASL_Function_Conjoint_10/4 s.ScopeClass#1/10 (/13 e.Name#1/11 )/14 (/17 e.Prefix#2/15 )/18 s.MaxMemory#2/19 e.Sentences#2/2 (/7 # CmdSentence/9 e.LastSentence#2/5 )/8 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  context[9] = refalrts::ident_left(  & ident_CmdSentence<int>::name, context[5], context[6] );
  if( ! context[9] )
    return refalrts::cRecognitionImpossible;
  // closed e.LastSentence#2 as range 5
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
  // closed e.Name#1 as range 11
  // closed e.Prefix#2 as range 15
  if( ! refalrts::svar_left( context[19], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Sentences#2 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # Function/4 AsIs: s.ScopeClass#1/10 AsIs: (/13 AsIs: e.Name#1/11 AsIs: )/14 AsIs: (/17 } Tile{ HalfReuse: # CmdIssueMem/18 AsIs: s.MaxMemory#2/19 } )/20 Tile{ AsIs: e.Prefix#2/15 } Tile{ AsIs: e.Sentences#2/2 } Tile{ HalfReuse: </7 HalfReuse: & Fetch/9 AsIs: e.LastSentence#2/5 HalfReuse: & lambda_HighLevelRASL_Function_Conjoint_9/8 AsIs: >/1 } )/21 Tile{ ]] }
  if( ! refalrts::alloc_close_bracket( context[20] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[21] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_ident( context[4], & ident_Function<int>::name );
  refalrts::reinit_ident( context[18], & ident_CmdIssueMem<int>::name );
  refalrts::reinit_open_call( context[7] );
  refalrts::reinit_name( context[9], Fetch, "Fetch" );
  refalrts::reinit_name( context[8], lambda_HighLevelRASL_Function_Conjoint_9, "lambda_HighLevelRASL_Function_Conjoint_9" );
  refalrts::link_brackets( context[0], context[21] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[7] );
  refalrts::link_brackets( context[17], context[20] );
  refalrts::link_brackets( context[13], context[14] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[21], context[21] );
  res = refalrts::splice_evar( res, context[7], context[1] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[15], context[16] );
  res = refalrts::splice_evar( res, context[20], context[20] );
  res = refalrts::splice_evar( res, context[18], context[19] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

refalrts::FnResult HighLevelRASL_Function_Conjoint(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 41 elems
  refalrts::Iter context[41];
  refalrts::zeros( context, 41 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { lambda_HighLevelRASL_Function_Conjoint_5, "lambda_HighLevelRASL_Function_Conjoint_5" },
    { refalrts::create_closure, "refalrts::create_closure" },
    { lambda_HighLevelRASL_Function_Conjoint_10, "lambda_HighLevelRASL_Function_Conjoint_10" },
    { lambda_HighLevelRASL_Function_Conjoint_8, "lambda_HighLevelRASL_Function_Conjoint_8" },
    { lambda_HighLevelRASL_Function_Conjoint_3, "lambda_HighLevelRASL_Function_Conjoint_3" },
    { lambda_HighLevelRASL_Function_Conjoint_2, "lambda_HighLevelRASL_Function_Conjoint_2" },
    { lambda_HighLevelRASL_Function_Conjoint_1, "lambda_HighLevelRASL_Function_Conjoint_1" },
    { MapReduce, "MapReduce" },
    { Seq, "Seq" },
    { Fetch, "Fetch" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    // </0 & HighLevelRASL_Function_Conjoint/4 s.FnGenInitSubst#1/5 s.FnGenSubst#1/6 s.FnGenResult#1/7 s.ScopeClass#1/8 (/11 e.Name#1/9 )/12 e.Sentences#1/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icsVarLeft, 0, 5, 2},
    {refalrts::icsVarLeft, 0, 6, 2},
    {refalrts::icsVarLeft, 0, 7, 2},
    {refalrts::icsVarLeft, 0, 8, 2},
    {refalrts::icBracketLeftSave, 0, 9, 2},
    // closed e.Name#1 as range 9
    // closed e.Sentences#1 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } </13 & Fetch/14 Tile{ AsIs: e.Sentences#1/2 } </15 & Seq/16 (/17 & MapReduce/18 & lambda_HighLevelRASL_Function_Conjoint_1/19 (/20 )/21 )/22 & lambda_HighLevelRASL_Function_Conjoint_2/23 & lambda_HighLevelRASL_Function_Conjoint_3/24 </25 Tile{ HalfReuse: & CreateClosure /0 Reuse: & lambda_HighLevelRASL_Function_Conjoint_5/4 AsIs: s.FnGenInitSubst#1/5 AsIs: s.FnGenSubst#1/6 } (/26 e.Name#1/9/27 )/29 >/30 </31 & CreateClosure /32 & lambda_HighLevelRASL_Function_Conjoint_8/33 Tile{ AsIs: s.FnGenResult#1/7 } s.FnGenSubst#1/6/34 >/35 </36 & CreateClosure /37 & lambda_HighLevelRASL_Function_Conjoint_10/38 Tile{ AsIs: s.ScopeClass#1/8 AsIs: (/11 AsIs: e.Name#1/9 AsIs: )/12 } >/39 >/40 Tile{ AsIs: >/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 13},
    {refalrts::icAllocFunc, 0, 9, 14},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 15},
    {refalrts::icAllocFunc, 0, 8, 16},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 17},
    {refalrts::icAllocFunc, 0, 7, 18},
    {refalrts::icAllocFunc, 0, 6, 19},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 20},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 21},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 22},
    {refalrts::icAllocFunc, 0, 5, 23},
    {refalrts::icAllocFunc, 0, 4, 24},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 25},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 26},
    {refalrts::icCopyEVar, 27, 9, 0},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 29},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 30},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 31},
    {refalrts::icAllocFunc, 0, 1, 32},
    {refalrts::icAllocFunc, 0, 3, 33},
    {refalrts::icCopySTVar, 34, 6, 0},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 35},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 36},
    {refalrts::icAllocFunc, 0, 1, 37},
    {refalrts::icAllocFunc, 0, 2, 38},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 39},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 40},
    {refalrts::icReinitFunc, 0, 1, 0},
    {refalrts::icUpdateFunc, 0, 0, 4},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 13},
    {refalrts::icPushStack, 0, 0, 40},
    {refalrts::icPushStack, 0, 0, 15},
    {refalrts::icPushStack, 0, 0, 39},
    {refalrts::icPushStack, 0, 0, 36},
    {refalrts::icLinkBrackets, 11, 12, 0},
    {refalrts::icPushStack, 0, 0, 35},
    {refalrts::icPushStack, 0, 0, 31},
    {refalrts::icPushStack, 0, 0, 30},
    {refalrts::icPushStack, 0, 0, 25},
    {refalrts::icLinkBrackets, 26, 29, 0},
    {refalrts::icLinkBrackets, 17, 22, 0},
    {refalrts::icLinkBrackets, 20, 21, 0},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceTile, 39, 40, 0},
    {refalrts::icSpliceTile, 8, 12, 0},
    {refalrts::icSpliceTile, 34, 38, 0},
    {refalrts::icSpliceTile, 7, 7, 0},
    {refalrts::icSpliceTile, 26, 33, 0},
    {refalrts::icSpliceTile, 0, 6, 0},
    {refalrts::icSpliceTile, 15, 25, 0},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceTile, 13, 14, 0},
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
  // </0 & HighLevelRASL_Function_Conjoint/4 s.FnGenInitSubst#1/5 s.FnGenSubst#1/6 s.FnGenResult#1/7 s.ScopeClass#1/8 (/11 e.Name#1/9 )/12 e.Sentences#1/2 >/1
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
  // closed e.Name#1 as range 9
  // closed e.Sentences#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } </13 & Fetch/14 Tile{ AsIs: e.Sentences#1/2 } </15 & Seq/16 (/17 & MapReduce/18 & lambda_HighLevelRASL_Function_Conjoint_1/19 (/20 )/21 )/22 & lambda_HighLevelRASL_Function_Conjoint_2/23 & lambda_HighLevelRASL_Function_Conjoint_3/24 </25 Tile{ HalfReuse: & CreateClosure /0 Reuse: & lambda_HighLevelRASL_Function_Conjoint_5/4 AsIs: s.FnGenInitSubst#1/5 AsIs: s.FnGenSubst#1/6 } (/26 e.Name#1/9/27 )/29 >/30 </31 & CreateClosure /32 & lambda_HighLevelRASL_Function_Conjoint_8/33 Tile{ AsIs: s.FnGenResult#1/7 } s.FnGenSubst#1/6/34 >/35 </36 & CreateClosure /37 & lambda_HighLevelRASL_Function_Conjoint_10/38 Tile{ AsIs: s.ScopeClass#1/8 AsIs: (/11 AsIs: e.Name#1/9 AsIs: )/12 } >/39 >/40 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[14], Fetch, "Fetch" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[16], Seq, "Seq" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[17] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[18], MapReduce, "MapReduce" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[19], lambda_HighLevelRASL_Function_Conjoint_1, "lambda_HighLevelRASL_Function_Conjoint_1" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[20] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[21] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[22] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[23], lambda_HighLevelRASL_Function_Conjoint_2, "lambda_HighLevelRASL_Function_Conjoint_2" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[24], lambda_HighLevelRASL_Function_Conjoint_3, "lambda_HighLevelRASL_Function_Conjoint_3" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[25] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[26] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[27], context[28], context[9], context[10]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[29] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[30] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[31] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[32], refalrts::create_closure, "refalrts::create_closure" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[33], lambda_HighLevelRASL_Function_Conjoint_8, "lambda_HighLevelRASL_Function_Conjoint_8" ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_stvar(context[34], context[6]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[35] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[36] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[37], refalrts::create_closure, "refalrts::create_closure" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[38], lambda_HighLevelRASL_Function_Conjoint_10, "lambda_HighLevelRASL_Function_Conjoint_10" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[39] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[40] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_name( context[0], refalrts::create_closure, "refalrts::create_closure" );
  refalrts::update_name( context[4], lambda_HighLevelRASL_Function_Conjoint_5, "lambda_HighLevelRASL_Function_Conjoint_5" );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[13] );
  refalrts::push_stack( context[40] );
  refalrts::push_stack( context[15] );
  refalrts::push_stack( context[39] );
  refalrts::push_stack( context[36] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::push_stack( context[35] );
  refalrts::push_stack( context[31] );
  refalrts::push_stack( context[30] );
  refalrts::push_stack( context[25] );
  refalrts::link_brackets( context[26], context[29] );
  refalrts::link_brackets( context[17], context[22] );
  refalrts::link_brackets( context[20], context[21] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[39], context[40] );
  res = refalrts::splice_evar( res, context[8], context[12] );
  res = refalrts::splice_evar( res, context[34], context[38] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[26], context[33] );
  res = refalrts::splice_evar( res, context[0], context[6] );
  res = refalrts::splice_evar( res, context[15], context[25] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult ComposeVars(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 66 elems
  refalrts::Iter context[66];
  refalrts::zeros( context, 66 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { ComposeVars, "ComposeVars" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_Junk<int>::name,
    & ident_TkVariable<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    //FAST GEN:(E )(E )(E )
    //GLOBAL GEN:(E )(E )(E )
    // </0 & ComposeVars/4 (/7 e.idxB#0/5 )/8 (/11 e.idxTB#0/9 )/12 (/15 e.idxTTB#0/13 )/16 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icBracketLeftSave, 0, 5, 2},
    {refalrts::icBracketLeftSave, 0, 9, 2},
    {refalrts::icBracketLeftSave, 0, 13, 2},
    {refalrts::icEmpty, 0, 0, 2},
    // closed e.idxB#0 as range 5
    // closed e.idxTB#0 as range 9
    // closed e.idxTTB#0 as range 13
    {refalrts::icOnFailGoTo, +58, 0, 0},
    //(E )(E )(E )
    // </0 & ComposeVars/4 (/7 e.MarkedPattern_B#1/17 (/21 # TkVariable/23 s.Mode#1/24 e.Name#1/19 s.Offset#1/25 )/22 e.MarkedPattern_E#1/5 )/8 (/11 e.Substitute_B#1/26 (/30 s.Tag#1/32 (/35 e.Name#1/38 )/36 '$'/37 e.Subst#1/28 )/31 e.Substitute_E#1/9 )/12 (/15 e.Vars_B#1/40 (/44 s.Mode#1/46 (/49 e.Name#1/51 )/50 s.Offset#1/53 )/45 e.Vars_E#1/13 )/16 >/1
    {refalrts::icSave, 0, 54, 5},
    {refalrts::icEPrepare, 0, 17, 54},
    {refalrts::icEStart, 0, 17, 54},
    {refalrts::icSave, 0, 56, 54},
    {refalrts::icBracketLeftSave, 0, 19, 56},
    {refalrts::icIdentLeftSave, 23, 1, 19},
    // closed e.MarkedPattern_E#1 as range 56(5)
    {refalrts::icsVarLeft, 0, 24, 19},
    {refalrts::icsVarRight, 0, 25, 19},
    // closed e.Name#1 as range 19
    {refalrts::icSave, 0, 58, 9},
    {refalrts::icEPrepare, 0, 26, 58},
    {refalrts::icEStart, 0, 26, 58},
    {refalrts::icSave, 0, 60, 58},
    {refalrts::icBracketLeftSave, 0, 28, 60},
    // closed e.Substitute_E#1 as range 60(9)
    {refalrts::icsVarLeft, 0, 32, 28},
    {refalrts::icBracketLeftSave, 0, 33, 28},
    {refalrts::icCharLeftSave, 37, static_cast<unsigned char>('$'), 28},
    {refalrts::iceRepeatLeft, 38, 19, 33},
    {refalrts::icEmpty, 0, 0, 33},
    // closed e.Subst#1 as range 28
    {refalrts::icSave, 0, 62, 13},
    {refalrts::icEPrepare, 0, 40, 62},
    {refalrts::icEStart, 0, 40, 62},
    {refalrts::icSave, 0, 64, 62},
    {refalrts::icBracketLeftSave, 0, 42, 64},
    {refalrts::icsRepeatLeft, 46, 24, 42},
    {refalrts::icBracketLeftSave, 0, 47, 42},
    {refalrts::iceRepeatLeft, 51, 38, 47},
    {refalrts::icEmpty, 0, 0, 47},
    {refalrts::icsRepeatLeft, 53, 25, 42},
    {refalrts::icEmpty, 0, 0, 42},
    // closed e.Vars_E#1 as range 64(13)
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  s.Mode#1/24 e.Name#1/19 s.Offset#1/25 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  s.Tag#1/32 (/35 e.Name#1/38 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  (/44 s.Mode#1/46 (/49 e.Name#1/51 )/50 s.Offset#1/53 )/45 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 HalfReuse: # Junk/7 AsIs: e.MarkedPattern_B#1/17 HalfReuse: )/21 HalfReuse: (/23 } Tile{ HalfReuse: s.Tag1 #32/36 HalfReuse: s.Offset1 #53/37 AsIs: e.Subst#1/28 AsIs: )/31 } Tile{ AsIs: </0 } Tile{ HalfReuse: & ComposeVars/30 } Tile{ HalfReuse: (/22 AsIs: e.MarkedPattern_E#1/56(5) AsIs: )/8 AsIs: (/11 } Tile{ AsIs: e.Substitute_B#1/26 } Tile{ AsIs: e.Substitute_E#1/60(9) } Tile{ AsIs: )/12 AsIs: (/15 } Tile{ AsIs: e.Vars_B#1/40 } Tile{ AsIs: e.Vars_E#1/64(13) } Tile{ AsIs: )/16 AsIs: >/1 ]] }
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 4},
    {refalrts::icReinitIdent, 0, 0, 7},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 21},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 23},
    {refalrts::icReinitSVar, 0, 32, 36},
    {refalrts::icReinitSVar, 0, 53, 37},
    {refalrts::icReinitFunc, 0, 0, 30},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 22},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 15, 16, 0},
    {refalrts::icLinkBrackets, 11, 12, 0},
    {refalrts::icLinkBrackets, 22, 8, 0},
    {refalrts::icLinkBrackets, 23, 31, 0},
    {refalrts::icLinkBrackets, 4, 21, 0},
    {refalrts::icSetRes, 0, 0, 16},
    {refalrts::icSpliceEVar, 0, 0, 64},
    {refalrts::icSpliceEVar, 0, 0, 40},
    {refalrts::icSpliceTile, 12, 15, 0},
    {refalrts::icSpliceEVar, 0, 0, 60},
    {refalrts::icSpliceEVar, 0, 0, 26},
    {refalrts::icSpliceTile, 22, 11, 0},
    {refalrts::icSpliceTile, 30, 30, 0},
    {refalrts::icSpliceTile, 0, 0, 0},
    {refalrts::icSpliceTile, 36, 31, 0},
    {refalrts::icSpliceTile, 4, 23, 0},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    //(E )()()
    // </0 & ComposeVars/4 (/7 e.MarkedPattern#1/5 )/8 (/11 )/12 (/15 )/16 >/1
    {refalrts::icEmpty, 0, 0, 9},
    {refalrts::icEmpty, 0, 0, 13},
    // closed e.MarkedPattern#1 as range 5
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 {REMOVED TILE}  (/11 )/12 (/15 )/16 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 HalfReuse: # Junk/7 AsIs: e.MarkedPattern#1/5 AsIs: )/8 } Tile{ ]] }
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 4},
    {refalrts::icReinitIdent, 0, 0, 7},
    {refalrts::icLinkBrackets, 4, 8, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 4, 8, 0},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[4];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  //FAST GEN:(E )(E )(E )
  //GLOBAL GEN:(E )(E )(E )
  // </0 & ComposeVars/4 (/7 e.idxB#0/5 )/8 (/11 e.idxTB#0/9 )/12 (/15 e.idxTTB#0/13 )/16 >/1
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
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.idxB#0 as range 5
  // closed e.idxTB#0 as range 9
  // closed e.idxTTB#0 as range 13
  do {
    refalrts::start_sentence();
    //(E )(E )(E )
    // </0 & ComposeVars/4 (/7 e.MarkedPattern_B#1/17 (/21 # TkVariable/23 s.Mode#1/24 e.Name#1/19 s.Offset#1/25 )/22 e.MarkedPattern_E#1/5 )/8 (/11 e.Substitute_B#1/26 (/30 s.Tag#1/32 (/35 e.Name#1/38 )/36 '$'/37 e.Subst#1/28 )/31 e.Substitute_E#1/9 )/12 (/15 e.Vars_B#1/40 (/44 s.Mode#1/46 (/49 e.Name#1/51 )/50 s.Offset#1/53 )/45 e.Vars_E#1/13 )/16 >/1
    context[54] = context[5];
    context[55] = context[6];
    context[17] = 0;
    context[18] = 0;
    refalrts::start_e_loop();
    do {
      context[56] = context[54];
      context[57] = context[55];
      context[19] = 0;
      context[20] = 0;
      context[21] = refalrts::brackets_left( context[19], context[20], context[56], context[57] );
      if( ! context[21] )
        continue;
      refalrts::bracket_pointers(context[21], context[22]);
      context[23] = refalrts::ident_left(  & ident_TkVariable<int>::name, context[19], context[20] );
      if( ! context[23] )
        continue;
      // closed e.MarkedPattern_E#1 as range 56(5)
      if( ! refalrts::svar_left( context[24], context[19], context[20] ) )
        continue;
      if( ! refalrts::svar_right( context[25], context[19], context[20] ) )
        continue;
      // closed e.Name#1 as range 19
      context[58] = context[9];
      context[59] = context[10];
      context[26] = 0;
      context[27] = 0;
      refalrts::start_e_loop();
      do {
        context[60] = context[58];
        context[61] = context[59];
        context[28] = 0;
        context[29] = 0;
        context[30] = refalrts::brackets_left( context[28], context[29], context[60], context[61] );
        if( ! context[30] )
          continue;
        refalrts::bracket_pointers(context[30], context[31]);
        // closed e.Substitute_E#1 as range 60(9)
        if( ! refalrts::svar_left( context[32], context[28], context[29] ) )
          continue;
        context[33] = 0;
        context[34] = 0;
        context[35] = refalrts::brackets_left( context[33], context[34], context[28], context[29] );
        if( ! context[35] )
          continue;
        refalrts::bracket_pointers(context[35], context[36]);
        context[37] = refalrts::char_left( '$', context[28], context[29] );
        if( ! context[37] )
          continue;
        if( ! refalrts::repeated_evar_left( context[38], context[39], context[19], context[20], context[33], context[34] ) )
          continue;
        if( ! refalrts::empty_seq( context[33], context[34] ) )
          continue;
        // closed e.Subst#1 as range 28
        context[62] = context[13];
        context[63] = context[14];
        context[40] = 0;
        context[41] = 0;
        refalrts::start_e_loop();
        do {
          context[64] = context[62];
          context[65] = context[63];
          context[42] = 0;
          context[43] = 0;
          context[44] = refalrts::brackets_left( context[42], context[43], context[64], context[65] );
          if( ! context[44] )
            continue;
          refalrts::bracket_pointers(context[44], context[45]);
          if( ! refalrts::repeated_stvar_left( context[46], context[24], context[42], context[43] ) )
            continue;
          context[47] = 0;
          context[48] = 0;
          context[49] = refalrts::brackets_left( context[47], context[48], context[42], context[43] );
          if( ! context[49] )
            continue;
          refalrts::bracket_pointers(context[49], context[50]);
          if( ! refalrts::repeated_evar_left( context[51], context[52], context[38], context[39], context[47], context[48] ) )
            continue;
          if( ! refalrts::empty_seq( context[47], context[48] ) )
            continue;
          if( ! refalrts::repeated_stvar_left( context[53], context[25], context[42], context[43] ) )
            continue;
          if( ! refalrts::empty_seq( context[42], context[43] ) )
            continue;
          // closed e.Vars_E#1 as range 64(13)

          refalrts::reset_allocator();
          //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  s.Mode#1/24 e.Name#1/19 s.Offset#1/25 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  s.Tag#1/32 (/35 e.Name#1/38 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  (/44 s.Mode#1/46 (/49 e.Name#1/51 )/50 s.Offset#1/53 )/45 {REMOVED TILE}  {REMOVED TILE} 
          //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 HalfReuse: # Junk/7 AsIs: e.MarkedPattern_B#1/17 HalfReuse: )/21 HalfReuse: (/23 } Tile{ HalfReuse: s.Tag1 #32/36 HalfReuse: s.Offset1 #53/37 AsIs: e.Subst#1/28 AsIs: )/31 } Tile{ AsIs: </0 } Tile{ HalfReuse: & ComposeVars/30 } Tile{ HalfReuse: (/22 AsIs: e.MarkedPattern_E#1/56(5) AsIs: )/8 AsIs: (/11 } Tile{ AsIs: e.Substitute_B#1/26 } Tile{ AsIs: e.Substitute_E#1/60(9) } Tile{ AsIs: )/12 AsIs: (/15 } Tile{ AsIs: e.Vars_B#1/40 } Tile{ AsIs: e.Vars_E#1/64(13) } Tile{ AsIs: )/16 AsIs: >/1 ]] }
          refalrts::reinit_open_bracket( context[4] );
          refalrts::reinit_ident( context[7], & ident_Junk<int>::name );
          refalrts::reinit_close_bracket( context[21] );
          refalrts::reinit_open_bracket( context[23] );
          refalrts::reinit_svar( context[36], context[32] );
          refalrts::reinit_svar( context[37], context[53] );
          refalrts::reinit_name( context[30], ComposeVars, "ComposeVars" );
          refalrts::reinit_open_bracket( context[22] );
          refalrts::push_stack( context[1] );
          refalrts::push_stack( context[0] );
          refalrts::link_brackets( context[15], context[16] );
          refalrts::link_brackets( context[11], context[12] );
          refalrts::link_brackets( context[22], context[8] );
          refalrts::link_brackets( context[23], context[31] );
          refalrts::link_brackets( context[4], context[21] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[16];
          res = refalrts::splice_evar( res, context[64], context[65] );
          res = refalrts::splice_evar( res, context[40], context[41] );
          res = refalrts::splice_evar( res, context[12], context[15] );
          res = refalrts::splice_evar( res, context[60], context[61] );
          res = refalrts::splice_evar( res, context[26], context[27] );
          res = refalrts::splice_evar( res, context[22], context[11] );
          res = refalrts::splice_evar( res, context[30], context[30] );
          res = refalrts::splice_evar( res, context[0], context[0] );
          res = refalrts::splice_evar( res, context[36], context[31] );
          res = refalrts::splice_evar( res, context[4], context[23] );
          refalrts::use( res );
          refalrts::splice_to_freelist_open( trash_prev, res );
          return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
        } while ( refalrts::open_evar_advance( context[40], context[41], context[62], context[63] ) );
      } while ( refalrts::open_evar_advance( context[26], context[27], context[58], context[59] ) );
    } while ( refalrts::open_evar_advance( context[17], context[18], context[54], context[55] ) );
  } while ( 0 );

  //(E )()()
  // </0 & ComposeVars/4 (/7 e.MarkedPattern#1/5 )/8 (/11 )/12 (/15 )/16 >/1
  if( ! refalrts::empty_seq( context[9], context[10] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[13], context[14] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.MarkedPattern#1 as range 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  </0 {REMOVED TILE}  (/11 )/12 (/15 )/16 >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 HalfReuse: # Junk/7 AsIs: e.MarkedPattern#1/5 AsIs: )/8 } Tile{ ]] }
  refalrts::reinit_open_bracket( context[4] );
  refalrts::reinit_ident( context[7], & ident_Junk<int>::name );
  refalrts::link_brackets( context[4], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[4], context[8] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}


//End of file
