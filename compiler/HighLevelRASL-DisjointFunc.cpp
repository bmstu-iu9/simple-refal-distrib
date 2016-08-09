// Automatically generated file. Don't edit!
#include "refalrts.h"


extern refalrts::FnResult Fetch(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult GenPattern(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult GenResult(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult HighLevelRASL_Function_Disjoint(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Map(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult MapReduce(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Max(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Seq(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult gen_HighLevelRASL_Function_Disjoint_L1(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult gen_HighLevelRASL_Function_Disjoint_L2(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult gen_HighLevelRASL_Function_Disjoint_L3(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult gen_HighLevelRASL_Function_Disjoint_L3L1(refalrts::Iter arg_begin, refalrts::Iter arg_end);

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

static refalrts::FnResult gen_HighLevelRASL_Function_Disjoint_L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 26 elems
  refalrts::Iter context[26];
  refalrts::zeros( context, 26 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { GenPattern, "GenPattern" },
    { GenResult, "GenResult" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    // </0 & HighLevelRASL-Function-Disjoint\1/4 s.FnGenResult#1/21 s.FnGenInitSubst#1/22 s.FnGenSubst#1/23 (/19 e.Name#1/17 )/20 (/7 (/11 e.Pattern#2/9 )/12 (/15 e.Result#2/13 )/16 )/8 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icBracketRightSave, 0, 5, 2},
    {refalrts::icBracketLeftSave, 0, 9, 5},
    {refalrts::icBracketLeftSave, 0, 13, 5},
    {refalrts::icBracketRightSave, 0, 17, 2},
    {refalrts::icEmpty, 0, 0, 5},
    // closed e.Name#1 as range 17
    // closed e.Pattern#2 as range 9
    // closed e.Result#2 as range 13
    {refalrts::icsVarLeft, 0, 21, 2},
    {refalrts::icsVarLeft, 0, 22, 2},
    {refalrts::icsVarLeft, 0, 23, 2},
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE} s.FnGenResult#1/21 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: </4 } & GenResult/24 Tile{ HalfReuse: s.FnGenResult1 #21/12 AsIs: (/15 AsIs: e.Result#2/13 AsIs: )/16 HalfReuse: </8 HalfReuse: & GenPattern/1 } Tile{ AsIs: s.FnGenInitSubst#1/22 AsIs: s.FnGenSubst#1/23 AsIs: (/19 AsIs: e.Name#1/17 AsIs: )/20 } Tile{ AsIs: e.Pattern#2/9 } Tile{ HalfReuse: >/7 HalfReuse: >/11 } )/25 Tile{ ]] }
    {refalrts::icAllocFunc, 0, 1, 24},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 25},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 0},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 4},
    {refalrts::icReinitSVar, 0, 21, 12},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 8},
    {refalrts::icReinitFunc, 0, 0, 1},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 7},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 11},
    {refalrts::icLinkBrackets, 0, 25, 0},
    {refalrts::icPushStack, 0, 0, 11},
    {refalrts::icPushStack, 0, 0, 4},
    {refalrts::icPushStack, 0, 0, 7},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icLinkBrackets, 19, 20, 0},
    {refalrts::icLinkBrackets, 15, 16, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 25, 25, 0},
    {refalrts::icSpliceTile, 7, 11, 0},
    {refalrts::icSpliceEVar, 0, 0, 9},
    {refalrts::icSpliceTile, 22, 20, 0},
    {refalrts::icSpliceTile, 12, 1, 0},
    {refalrts::icSpliceTile, 24, 24, 0},
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
  // </0 & HighLevelRASL-Function-Disjoint\1/4 s.FnGenResult#1/21 s.FnGenInitSubst#1/22 s.FnGenSubst#1/23 (/19 e.Name#1/17 )/20 (/7 (/11 e.Pattern#2/9 )/12 (/15 e.Result#2/13 )/16 )/8 >/1
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
  context[19] = refalrts::brackets_right( context[17], context[18], context[2], context[3] );
  if( ! context[19] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[19], context[20]);
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Name#1 as range 17
  // closed e.Pattern#2 as range 9
  // closed e.Result#2 as range 13
  if( ! refalrts::svar_left( context[21], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[22], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[23], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} s.FnGenResult#1/21 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: </4 } & GenResult/24 Tile{ HalfReuse: s.FnGenResult1 #21/12 AsIs: (/15 AsIs: e.Result#2/13 AsIs: )/16 HalfReuse: </8 HalfReuse: & GenPattern/1 } Tile{ AsIs: s.FnGenInitSubst#1/22 AsIs: s.FnGenSubst#1/23 AsIs: (/19 AsIs: e.Name#1/17 AsIs: )/20 } Tile{ AsIs: e.Pattern#2/9 } Tile{ HalfReuse: >/7 HalfReuse: >/11 } )/25 Tile{ ]] }
  if( ! refalrts::alloc_name( context[24], GenResult, "GenResult" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[25] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_open_call( context[4] );
  refalrts::reinit_svar( context[12], context[21] );
  refalrts::reinit_open_call( context[8] );
  refalrts::reinit_name( context[1], GenPattern, "GenPattern" );
  refalrts::reinit_close_call( context[7] );
  refalrts::reinit_close_call( context[11] );
  refalrts::link_brackets( context[0], context[25] );
  refalrts::push_stack( context[11] );
  refalrts::push_stack( context[4] );
  refalrts::push_stack( context[7] );
  refalrts::push_stack( context[8] );
  refalrts::link_brackets( context[19], context[20] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[25], context[25] );
  res = refalrts::splice_evar( res, context[7], context[11] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[22], context[20] );
  res = refalrts::splice_evar( res, context[12], context[1] );
  res = refalrts::splice_evar( res, context[24], context[24] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[4], res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult gen_HighLevelRASL_Function_Disjoint_L2(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { Max, "Max" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_CmdSentence<int>::name,
    & ident_CmdIssueMem<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    // </0 & HighLevelRASL-Function-Disjoint\2/4 s.MaxMemory#2/14 (/7 (/11 # CmdIssueMem/13 s.Memory#2/15 )/12 e.Sentence#2/5 )/8 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icBracketRightSave, 0, 5, 2},
    {refalrts::icBracketLeftSave, 0, 9, 5},
    {refalrts::icIdentLeftSave, 13, 1, 9},
    // closed e.Sentence#2 as range 5
    {refalrts::icsVarLeft, 0, 14, 2},
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icsVarLeft, 0, 15, 9},
    {refalrts::icEmpty, 0, 0, 9},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE} s.Memory#2/15 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Max/4 AsIs: s.MaxMemory#2/14 HalfReuse: s.Memory2 #15/7 HalfReuse: >/11 HalfReuse: (/13 } Tile{ HalfReuse: # CmdSentence/12 AsIs: e.Sentence#2/5 AsIs: )/8 } Tile{ ]] }
    {refalrts::icUpdateFunc, 0, 0, 4},
    {refalrts::icReinitSVar, 0, 15, 7},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 11},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 13},
    {refalrts::icReinitIdent, 0, 0, 12},
    {refalrts::icLinkBrackets, 13, 8, 0},
    {refalrts::icPushStack, 0, 0, 11},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 12, 8, 0},
    {refalrts::icTrash, 0, 0, 13},
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
  // </0 & HighLevelRASL-Function-Disjoint\2/4 s.MaxMemory#2/14 (/7 (/11 # CmdIssueMem/13 s.Memory#2/15 )/12 e.Sentence#2/5 )/8 >/1
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
  context[13] = refalrts::ident_left(  & ident_CmdIssueMem<int>::name, context[9], context[10] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  // closed e.Sentence#2 as range 5
  if( ! refalrts::svar_left( context[14], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[15], context[9], context[10] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[9], context[10] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} s.Memory#2/15 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Max/4 AsIs: s.MaxMemory#2/14 HalfReuse: s.Memory2 #15/7 HalfReuse: >/11 HalfReuse: (/13 } Tile{ HalfReuse: # CmdSentence/12 AsIs: e.Sentence#2/5 AsIs: )/8 } Tile{ ]] }
  refalrts::update_name( context[4], Max, "Max" );
  refalrts::reinit_svar( context[7], context[15] );
  refalrts::reinit_close_call( context[11] );
  refalrts::reinit_open_bracket( context[13] );
  refalrts::reinit_ident( context[12], & ident_CmdSentence<int>::name );
  refalrts::link_brackets( context[13], context[8] );
  refalrts::push_stack( context[11] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[12], context[8] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[13], res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult gen_HighLevelRASL_Function_Disjoint_L3L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
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
    //FAST GEN: e.$
    //GLOBAL GEN: e.$
    // </0 & HighLevelRASL-Function-Disjoint\3\1/4 e.idx#0/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    // closed e.idx#0 as range 2
    {refalrts::icOnFailGoTo, +14, 0, 0},
    // e.idx ( # CmdOpenELoop e.idx )
    // </0 & HighLevelRASL-Function-Disjoint\3\1/4 e.Commands#3/2 (/7 # CmdOpenELoop/9 e.OpenELoop#3/5 )/8 >/1
    {refalrts::icSave, 0, 10, 2},
    {refalrts::icBracketRightSave, 0, 5, 10},
    {refalrts::icIdentLeftSave, 9, 1, 5},
    // closed e.Commands#3 as range 10(2)
    // closed e.OpenELoop#3 as range 5
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
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
    // e.idx
    // </0 & HighLevelRASL-Function-Disjoint\3\1/4 e.LastSentence#3/2 >/1
    // closed e.LastSentence#3 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE} </0 & HighLevelRASL-Function-Disjoint\3\1/4 {REMOVED TILE} >/1 {REMOVED TILE}
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
  //FAST GEN: e.$
  //GLOBAL GEN: e.$
  // </0 & HighLevelRASL-Function-Disjoint\3\1/4 e.idx#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.idx#0 as range 2
  do {
    refalrts::start_sentence();
    // e.idx ( # CmdOpenELoop e.idx )
    // </0 & HighLevelRASL-Function-Disjoint\3\1/4 e.Commands#3/2 (/7 # CmdOpenELoop/9 e.OpenELoop#3/5 )/8 >/1
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
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
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

  // e.idx
  // </0 & HighLevelRASL-Function-Disjoint\3\1/4 e.LastSentence#3/2 >/1
  // closed e.LastSentence#3 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & HighLevelRASL-Function-Disjoint\3\1/4 {REMOVED TILE} >/1 {REMOVED TILE}
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

static refalrts::FnResult gen_HighLevelRASL_Function_Disjoint_L3(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { gen_HighLevelRASL_Function_Disjoint_L3L1, "HighLevelRASL-Function-Disjoint\\3\\1" },
    { Fetch, "Fetch" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_Function<int>::name,
    & ident_CmdIssueMem<int>::name,
    & ident_CmdSentence<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    // </0 & HighLevelRASL-Function-Disjoint\3/4 s.ScopeClass#1/10 (/13 e.Name#1/11 )/14 s.MaxMemory#2/15 e.Sentences#2/2 (/7 # CmdSentence/9 e.LastSentence#2/5 )/8 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icBracketRightSave, 0, 5, 2},
    {refalrts::icIdentLeftSave, 9, 2, 5},
    // closed e.LastSentence#2 as range 5
    {refalrts::icsVarLeft, 0, 10, 2},
    {refalrts::icBracketLeftSave, 0, 11, 2},
    // closed e.Name#1 as range 11
    {refalrts::icsVarLeft, 0, 15, 2},
    // closed e.Sentences#2 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # Function/4 AsIs: s.ScopeClass#1/10 AsIs: (/13 AsIs: e.Name#1/11 AsIs: )/14 } (/16 # CmdIssueMem/17 Tile{ AsIs: s.MaxMemory#2/15 } )/18 Tile{ AsIs: e.Sentences#2/2 } Tile{ HalfReuse: </7 HalfReuse: & Fetch/9 AsIs: e.LastSentence#2/5 HalfReuse: & HighLevelRASL-Function-Disjoint\3\1/8 AsIs: >/1 } )/19 Tile{ ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 16},
    {refalrts::icAllocIdent, 0, 1, 17},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 18},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 19},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 0},
    {refalrts::icReinitIdent, 0, 0, 4},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 7},
    {refalrts::icReinitFunc, 0, 1, 9},
    {refalrts::icReinitFunc, 0, 0, 8},
    {refalrts::icLinkBrackets, 0, 19, 0},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 7},
    {refalrts::icLinkBrackets, 16, 18, 0},
    {refalrts::icLinkBrackets, 13, 14, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 19, 19, 0},
    {refalrts::icSpliceTile, 7, 1, 0},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceTile, 18, 18, 0},
    {refalrts::icSpliceTile, 15, 15, 0},
    {refalrts::icSpliceTile, 16, 17, 0},
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
  // </0 & HighLevelRASL-Function-Disjoint\3/4 s.ScopeClass#1/10 (/13 e.Name#1/11 )/14 s.MaxMemory#2/15 e.Sentences#2/2 (/7 # CmdSentence/9 e.LastSentence#2/5 )/8 >/1
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
  // closed e.Name#1 as range 11
  if( ! refalrts::svar_left( context[15], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Sentences#2 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # Function/4 AsIs: s.ScopeClass#1/10 AsIs: (/13 AsIs: e.Name#1/11 AsIs: )/14 } (/16 # CmdIssueMem/17 Tile{ AsIs: s.MaxMemory#2/15 } )/18 Tile{ AsIs: e.Sentences#2/2 } Tile{ HalfReuse: </7 HalfReuse: & Fetch/9 AsIs: e.LastSentence#2/5 HalfReuse: & HighLevelRASL-Function-Disjoint\3\1/8 AsIs: >/1 } )/19 Tile{ ]] }
  if( ! refalrts::alloc_open_bracket( context[16] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[17], & ident_CmdIssueMem<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[18] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[19] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_ident( context[4], & ident_Function<int>::name );
  refalrts::reinit_open_call( context[7] );
  refalrts::reinit_name( context[9], Fetch, "Fetch" );
  refalrts::reinit_name( context[8], gen_HighLevelRASL_Function_Disjoint_L3L1, "HighLevelRASL-Function-Disjoint\\3\\1" );
  refalrts::link_brackets( context[0], context[19] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[7] );
  refalrts::link_brackets( context[16], context[18] );
  refalrts::link_brackets( context[13], context[14] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[19], context[19] );
  res = refalrts::splice_evar( res, context[7], context[1] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[18], context[18] );
  res = refalrts::splice_evar( res, context[15], context[15] );
  res = refalrts::splice_evar( res, context[16], context[17] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

refalrts::FnResult HighLevelRASL_Function_Disjoint(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 36 elems
  refalrts::Iter context[36];
  refalrts::zeros( context, 36 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { Fetch, "Fetch" },
    { gen_HighLevelRASL_Function_Disjoint_L3, "HighLevelRASL-Function-Disjoint\\3" },
    { refalrts::create_closure, "@create_closure@" },
    { gen_HighLevelRASL_Function_Disjoint_L2, "HighLevelRASL-Function-Disjoint\\2" },
    { MapReduce, "MapReduce" },
    { gen_HighLevelRASL_Function_Disjoint_L1, "HighLevelRASL-Function-Disjoint\\1" },
    { Map, "Map" },
    { Seq, "Seq" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    // </0 & HighLevelRASL-Function-Disjoint/4 s.FnGenInitSubst#1/5 s.FnGenSubst#1/6 s.FnGenResult#1/7 s.ScopeClass#1/8 (/11 e.Name#1/9 )/12 e.Sentences#1/2 >/1
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
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 } Tile{ AsIs: e.Sentences#1/2 } </13 & Seq/14 (/15 & Map/16 </17 & @create_closure@/18 & HighLevelRASL-Function-Disjoint\1/19 Tile{ AsIs: s.FnGenResult#1/7 } Tile{ AsIs: s.FnGenInitSubst#1/5 AsIs: s.FnGenSubst#1/6 } (/20 e.Name#1/9/21 )/23 >/24 )/25 (/26 & MapReduce/27 & HighLevelRASL-Function-Disjoint\2/28 0/29 )/30 </31 & @create_closure@/32 & HighLevelRASL-Function-Disjoint\3/33 Tile{ AsIs: s.ScopeClass#1/8 AsIs: (/11 AsIs: e.Name#1/9 AsIs: )/12 } >/34 >/35 Tile{ AsIs: >/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 13},
    {refalrts::icAllocFunc, 0, 7, 14},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 15},
    {refalrts::icAllocFunc, 0, 6, 16},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 17},
    {refalrts::icAllocFunc, 0, 2, 18},
    {refalrts::icAllocFunc, 0, 5, 19},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 20},
    {refalrts::icCopyEVar, 21, 9, 0},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 23},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 24},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 25},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 26},
    {refalrts::icAllocFunc, 0, 4, 27},
    {refalrts::icAllocFunc, 0, 3, 28},
    {refalrts::icAllocInt, 0, 0, 29},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 30},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 31},
    {refalrts::icAllocFunc, 0, 2, 32},
    {refalrts::icAllocFunc, 0, 1, 33},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 34},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 35},
    {refalrts::icUpdateFunc, 0, 0, 4},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icPushStack, 0, 0, 35},
    {refalrts::icPushStack, 0, 0, 13},
    {refalrts::icPushStack, 0, 0, 34},
    {refalrts::icPushStack, 0, 0, 31},
    {refalrts::icLinkBrackets, 11, 12, 0},
    {refalrts::icLinkBrackets, 26, 30, 0},
    {refalrts::icLinkBrackets, 15, 25, 0},
    {refalrts::icPushStack, 0, 0, 24},
    {refalrts::icPushStack, 0, 0, 17},
    {refalrts::icLinkBrackets, 20, 23, 0},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceTile, 34, 35, 0},
    {refalrts::icSpliceTile, 8, 12, 0},
    {refalrts::icSpliceTile, 20, 33, 0},
    {refalrts::icSpliceTile, 5, 6, 0},
    {refalrts::icSpliceTile, 7, 7, 0},
    {refalrts::icSpliceTile, 13, 19, 0},
    {refalrts::icSpliceEVar, 0, 0, 2},
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
  // </0 & HighLevelRASL-Function-Disjoint/4 s.FnGenInitSubst#1/5 s.FnGenSubst#1/6 s.FnGenResult#1/7 s.ScopeClass#1/8 (/11 e.Name#1/9 )/12 e.Sentences#1/2 >/1
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
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 } Tile{ AsIs: e.Sentences#1/2 } </13 & Seq/14 (/15 & Map/16 </17 & @create_closure@/18 & HighLevelRASL-Function-Disjoint\1/19 Tile{ AsIs: s.FnGenResult#1/7 } Tile{ AsIs: s.FnGenInitSubst#1/5 AsIs: s.FnGenSubst#1/6 } (/20 e.Name#1/9/21 )/23 >/24 )/25 (/26 & MapReduce/27 & HighLevelRASL-Function-Disjoint\2/28 0/29 )/30 </31 & @create_closure@/32 & HighLevelRASL-Function-Disjoint\3/33 Tile{ AsIs: s.ScopeClass#1/8 AsIs: (/11 AsIs: e.Name#1/9 AsIs: )/12 } >/34 >/35 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[14], Seq, "Seq" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[16], Map, "Map" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[17] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[18], refalrts::create_closure, "@create_closure@" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[19], gen_HighLevelRASL_Function_Disjoint_L1, "HighLevelRASL-Function-Disjoint\\1" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[20] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[21], context[22], context[9], context[10]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[23] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[24] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[25] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[26] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[27], MapReduce, "MapReduce" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[28], gen_HighLevelRASL_Function_Disjoint_L2, "HighLevelRASL-Function-Disjoint\\2" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_number( context[29], 0UL ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[30] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[31] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[32], refalrts::create_closure, "@create_closure@" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[33], gen_HighLevelRASL_Function_Disjoint_L3, "HighLevelRASL-Function-Disjoint\\3" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[34] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[35] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], Fetch, "Fetch" );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[35] );
  refalrts::push_stack( context[13] );
  refalrts::push_stack( context[34] );
  refalrts::push_stack( context[31] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[26], context[30] );
  refalrts::link_brackets( context[15], context[25] );
  refalrts::push_stack( context[24] );
  refalrts::push_stack( context[17] );
  refalrts::link_brackets( context[20], context[23] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[34], context[35] );
  res = refalrts::splice_evar( res, context[8], context[12] );
  res = refalrts::splice_evar( res, context[20], context[33] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[13], context[19] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}


//End of file
