// Automatically generated file. Don't edit!
#include "refalrts.h"


extern refalrts::FnResult Add(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult GetOpt(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult DoFoldErrors(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult Error(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult FoldErrors(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult Inc(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult MarkupAllFiles(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult MarkupArguments(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult ResolveOpts(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult ResolveOpts_Long(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult ResolveOpts_LongParam(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult ResolveOpts_Short(refalrts::Iter arg_begin, refalrts::Iter arg_end);

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

// identifier #Long_Param
template <typename SREFAL_PARAM_INT>
struct ident_Long_Param {
  static const char *name() {
    return "Long_Param";
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

// identifier #Word
template <typename SREFAL_PARAM_INT>
struct ident_Word {
  static const char *name() {
    return "Word";
  }
};

refalrts::FnResult GetOpt(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { MarkupArguments, "MarkupArguments" },
    { ResolveOpts, "ResolveOpts" },
    { FoldErrors, "FoldErrors" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Description#1/2 ) e.Arguments#1/0
    {refalrts::icBracketLeft, 0, 2, 0},
    // closed e.Description#1 as range 2
    // closed e.Arguments#1 as range 0
    //0: e.Arguments#1
    //2: e.Description#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 4},
    {refalrts::icFunc, 0, 2, 5},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 6},
    {refalrts::icFunc, 0, 1, 7},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 9},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 10},
    {refalrts::icFunc, 0, 0, 11},
    {refalrts::icInt, 0, 1, 12},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 13},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 14},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 15},
    {refalrts::icPushStack, 0, 0, 15},
    {refalrts::icPushStack, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icPushStack, 0, 0, 14},
    {refalrts::icPushStack, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icPushStack, 0, 0, 13},
    {refalrts::icPushStack, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icLinkBrackets, 8, 9, 0},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[1];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  context[0] = arg_begin;
  context[1] = arg_end;
  refalrts::move_left( context[0], context[1] );
  refalrts::move_left( context[0], context[1] );
  refalrts::move_right( context[0], context[1] );
  // ( e.Description#1/2 ) e.Arguments#1/0
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Description#1 as range 2
  // closed e.Arguments#1 as range 0
  //0: e.Arguments#1
  //2: e.Description#1

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_call( context[4] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[5], FoldErrors, "FoldErrors" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[7], ResolveOpts, "ResolveOpts" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[11], MarkupArguments, "MarkupArguments" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_number( context[12], 1UL ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[15] ) )
    return refalrts::cNoMemory;
  refalrts::push_stack( context[15] );
  refalrts::push_stack( context[4] );
  res = refalrts::splice_elem( res, context[15] );
  refalrts::push_stack( context[14] );
  refalrts::push_stack( context[6] );
  res = refalrts::splice_elem( res, context[14] );
  refalrts::push_stack( context[13] );
  refalrts::push_stack( context[10] );
  res = refalrts::splice_elem( res, context[13] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_elem( res, context[12] );
  res = refalrts::splice_elem( res, context[11] );
  res = refalrts::splice_elem( res, context[10] );
  refalrts::link_brackets( context[8], context[9] );
  res = refalrts::splice_elem( res, context[9] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_elem( res, context[8] );
  res = refalrts::splice_elem( res, context[7] );
  res = refalrts::splice_elem( res, context[6] );
  res = refalrts::splice_elem( res, context[5] );
  res = refalrts::splice_elem( res, context[4] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult Inc(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 7 elems
  refalrts::Iter context[7];
  refalrts::zeros( context, 7 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { Add, "Add" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    // s.Num#1/2
    {refalrts::icsVarLeft, 0, 2, 0},
    {refalrts::icEmpty, 0, 0, 0},
    //2: s.Num#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 3},
    {refalrts::icFunc, 0, 0, 4},
    {refalrts::icInt, 0, 1, 5},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 6},
    {refalrts::icPushStack, 0, 0, 6},
    {refalrts::icPushStack, 0, 0, 3},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icSpliceSTVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 3},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[1];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  context[0] = arg_begin;
  context[1] = arg_end;
  refalrts::move_left( context[0], context[1] );
  refalrts::move_left( context[0], context[1] );
  refalrts::move_right( context[0], context[1] );
  // s.Num#1/2
  if( ! refalrts::svar_left( context[2], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  //2: s.Num#1

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_call( context[3] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[4], Add, "Add" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_number( context[5], 1UL ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[6] ) )
    return refalrts::cNoMemory;
  refalrts::push_stack( context[6] );
  refalrts::push_stack( context[3] );
  res = refalrts::splice_elem( res, context[6] );
  res = refalrts::splice_elem( res, context[5] );
  res = refalrts::splice_stvar( res, context[2] );
  res = refalrts::splice_elem( res, context[4] );
  res = refalrts::splice_elem( res, context[3] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult MarkupArguments(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { Inc, "Inc" },
    { MarkupArguments, "MarkupArguments" },
    { MarkupAllFiles, "MarkupAllFiles" }
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
    {refalrts::icOnFailGoTo, +26, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // s.Num#1/2 ( '--' ) e.Tail#1/0
    {refalrts::icsVarLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 3, 0},
    {refalrts::icCharLeft, 0, static_cast<unsigned char>('-'), 3},
    {refalrts::icCharLeft, 0, static_cast<unsigned char>('-'), 3},
    {refalrts::icEmpty, 0, 0, 3},
    // closed e.Tail#1 as range 0
    //0: e.Tail#1
    //2: s.Num#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 5},
    {refalrts::icFunc, 0, 2, 6},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 7},
    {refalrts::icFunc, 0, 0, 8},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 9},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 10},
    {refalrts::icPushStack, 0, 0, 10},
    {refalrts::icPushStack, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icPushStack, 0, 0, 9},
    {refalrts::icPushStack, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceSTVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +45, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // s.Num#1/2 ( '--' e.Arg#1/5 '=' e.Param#1/7 ) e.Tail#1/0
    {refalrts::icsVarLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 3, 0},
    {refalrts::icCharLeft, 0, static_cast<unsigned char>('-'), 3},
    {refalrts::icCharLeft, 0, static_cast<unsigned char>('-'), 3},
    // closed e.Tail#1 as range 0
    {refalrts::icEPrepare, 0, 5, 3},
    {refalrts::icEStart, 0, 5, 3},
    {refalrts::icSave, 0, 7, 3},
    {refalrts::icCharLeft, 0, static_cast<unsigned char>('='), 7},
    // closed e.Param#1 as range 3
    //0: e.Tail#1
    //2: s.Num#1
    //5: e.Arg#1
    //7: e.Param#1
    //18: s.Num#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 9},
    {refalrts::icIdent, 0, 3, 10},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 11},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 12},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 13},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 14},
    {refalrts::icFunc, 0, 1, 15},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 16},
    {refalrts::icFunc, 0, 0, 17},
    {refalrts::icCopySTVar, 18, 2, 0},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 19},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 20},
    {refalrts::icPushStack, 0, 0, 20},
    {refalrts::icPushStack, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icPushStack, 0, 0, 19},
    {refalrts::icPushStack, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceSTVar, 0, 0, 18},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icLinkBrackets, 9, 13, 0},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceEVar, 0, 0, 7},
    {refalrts::icLinkBrackets, 11, 12, 0},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceEVar, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceSTVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +35, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // s.Num#1/2 ( '--' e.Arg#1/3 ) e.Tail#1/0
    {refalrts::icsVarLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 3, 0},
    {refalrts::icCharLeft, 0, static_cast<unsigned char>('-'), 3},
    {refalrts::icCharLeft, 0, static_cast<unsigned char>('-'), 3},
    // closed e.Arg#1 as range 3
    // closed e.Tail#1 as range 0
    //0: e.Tail#1
    //2: s.Num#1
    //3: e.Arg#1
    //12: s.Num#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 5},
    {refalrts::icIdent, 0, 2, 6},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 7},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 8},
    {refalrts::icFunc, 0, 1, 9},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 10},
    {refalrts::icFunc, 0, 0, 11},
    {refalrts::icCopySTVar, 12, 2, 0},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 13},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 14},
    {refalrts::icPushStack, 0, 0, 14},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icPushStack, 0, 0, 13},
    {refalrts::icPushStack, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceSTVar, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icLinkBrackets, 5, 7, 0},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceEVar, 0, 0, 3},
    {refalrts::icSpliceSTVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +34, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // s.Num#1/2 ( '-' e.Arg#1/3 ) e.Tail#1/0
    {refalrts::icsVarLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 3, 0},
    {refalrts::icCharLeft, 0, static_cast<unsigned char>('-'), 3},
    // closed e.Arg#1 as range 3
    // closed e.Tail#1 as range 0
    //0: e.Tail#1
    //2: s.Num#1
    //3: e.Arg#1
    //12: s.Num#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 5},
    {refalrts::icIdent, 0, 1, 6},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 7},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 8},
    {refalrts::icFunc, 0, 1, 9},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 10},
    {refalrts::icFunc, 0, 0, 11},
    {refalrts::icCopySTVar, 12, 2, 0},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 13},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 14},
    {refalrts::icPushStack, 0, 0, 14},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icPushStack, 0, 0, 13},
    {refalrts::icPushStack, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceSTVar, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icLinkBrackets, 5, 7, 0},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceEVar, 0, 0, 3},
    {refalrts::icSpliceSTVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +33, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // s.Num#1/2 ( e.Arg#1/3 ) e.Tail#1/0
    {refalrts::icsVarLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 3, 0},
    // closed e.Arg#1 as range 3
    // closed e.Tail#1 as range 0
    //0: e.Tail#1
    //2: s.Num#1
    //3: e.Arg#1
    //12: s.Num#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 5},
    {refalrts::icIdent, 0, 0, 6},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 7},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 8},
    {refalrts::icFunc, 0, 1, 9},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 10},
    {refalrts::icFunc, 0, 0, 11},
    {refalrts::icCopySTVar, 12, 2, 0},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 13},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 14},
    {refalrts::icPushStack, 0, 0, 14},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icPushStack, 0, 0, 13},
    {refalrts::icPushStack, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceSTVar, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icLinkBrackets, 5, 7, 0},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceEVar, 0, 0, 3},
    {refalrts::icSpliceSTVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // s.Num#1/2
    {refalrts::icsVarLeft, 0, 2, 0},
    {refalrts::icEmpty, 0, 0, 0},
    //2: s.Num#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[6];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    // s.Num#1/2 ( '--' ) e.Tail#1/0
    if( ! refalrts::svar_left( context[2], context[0], context[1] ) )
      continue;
    context[3] = 0;
    context[4] = 0;
    if( ! refalrts::brackets_left( context[3], context[4], context[0], context[1] ) )
      continue;
    if( ! refalrts::char_left( '-', context[3], context[4] ) )
      continue;
    if( ! refalrts::char_left( '-', context[3], context[4] ) )
      continue;
    if( ! refalrts::empty_seq( context[3], context[4] ) )
      continue;
    // closed e.Tail#1 as range 0
    //0: e.Tail#1
    //2: s.Num#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[5] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[6], MarkupAllFiles, "MarkupAllFiles" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[7] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[8], Inc, "Inc" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[9] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[10] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[10] );
    refalrts::push_stack( context[5] );
    res = refalrts::splice_elem( res, context[10] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    refalrts::push_stack( context[9] );
    refalrts::push_stack( context[7] );
    res = refalrts::splice_elem( res, context[9] );
    res = refalrts::splice_stvar( res, context[2] );
    res = refalrts::splice_elem( res, context[8] );
    res = refalrts::splice_elem( res, context[7] );
    res = refalrts::splice_elem( res, context[6] );
    res = refalrts::splice_elem( res, context[5] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    // s.Num#1/2 ( '--' e.Arg#1/5 '=' e.Param#1/7 ) e.Tail#1/0
    if( ! refalrts::svar_left( context[2], context[0], context[1] ) )
      continue;
    context[3] = 0;
    context[4] = 0;
    if( ! refalrts::brackets_left( context[3], context[4], context[0], context[1] ) )
      continue;
    if( ! refalrts::char_left( '-', context[3], context[4] ) )
      continue;
    if( ! refalrts::char_left( '-', context[3], context[4] ) )
      continue;
    // closed e.Tail#1 as range 0
    context[5] = 0;
    context[6] = 0;
    refalrts::start_e_loop();
    do {
      context[7] = context[3];
      context[8] = context[4];
      if( ! refalrts::char_left( '=', context[7], context[8] ) )
        continue;
      // closed e.Param#1 as range 3
      //0: e.Tail#1
      //2: s.Num#1
      //5: e.Arg#1
      //7: e.Param#1
      //18: s.Num#1

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::alloc_open_bracket( context[9] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[10], & ident_Long_Param<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[11] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[12] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[13] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_call( context[14] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[15], MarkupArguments, "MarkupArguments" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_call( context[16] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[17], Inc, "Inc" ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[18], context[2]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[19] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[20] ) )
        return refalrts::cNoMemory;
      refalrts::push_stack( context[20] );
      refalrts::push_stack( context[14] );
      res = refalrts::splice_elem( res, context[20] );
      res = refalrts::splice_evar( res, context[0], context[1] );
      refalrts::push_stack( context[19] );
      refalrts::push_stack( context[16] );
      res = refalrts::splice_elem( res, context[19] );
      res = refalrts::splice_stvar( res, context[18] );
      res = refalrts::splice_elem( res, context[17] );
      res = refalrts::splice_elem( res, context[16] );
      res = refalrts::splice_elem( res, context[15] );
      res = refalrts::splice_elem( res, context[14] );
      refalrts::link_brackets( context[9], context[13] );
      res = refalrts::splice_elem( res, context[13] );
      res = refalrts::splice_evar( res, context[7], context[8] );
      refalrts::link_brackets( context[11], context[12] );
      res = refalrts::splice_elem( res, context[12] );
      res = refalrts::splice_evar( res, context[5], context[6] );
      res = refalrts::splice_elem( res, context[11] );
      res = refalrts::splice_stvar( res, context[2] );
      res = refalrts::splice_elem( res, context[10] );
      res = refalrts::splice_elem( res, context[9] );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[5], context[6], context[3], context[4] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    // s.Num#1/2 ( '--' e.Arg#1/3 ) e.Tail#1/0
    if( ! refalrts::svar_left( context[2], context[0], context[1] ) )
      continue;
    context[3] = 0;
    context[4] = 0;
    if( ! refalrts::brackets_left( context[3], context[4], context[0], context[1] ) )
      continue;
    if( ! refalrts::char_left( '-', context[3], context[4] ) )
      continue;
    if( ! refalrts::char_left( '-', context[3], context[4] ) )
      continue;
    // closed e.Arg#1 as range 3
    // closed e.Tail#1 as range 0
    //0: e.Tail#1
    //2: s.Num#1
    //3: e.Arg#1
    //12: s.Num#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[5] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[6], & ident_Long<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[7] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[9], MarkupArguments, "MarkupArguments" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[11], Inc, "Inc" ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[12], context[2]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[14] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[14] );
    refalrts::push_stack( context[8] );
    res = refalrts::splice_elem( res, context[14] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    refalrts::push_stack( context[13] );
    refalrts::push_stack( context[10] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_stvar( res, context[12] );
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_elem( res, context[10] );
    res = refalrts::splice_elem( res, context[9] );
    res = refalrts::splice_elem( res, context[8] );
    refalrts::link_brackets( context[5], context[7] );
    res = refalrts::splice_elem( res, context[7] );
    res = refalrts::splice_evar( res, context[3], context[4] );
    res = refalrts::splice_stvar( res, context[2] );
    res = refalrts::splice_elem( res, context[6] );
    res = refalrts::splice_elem( res, context[5] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    // s.Num#1/2 ( '-' e.Arg#1/3 ) e.Tail#1/0
    if( ! refalrts::svar_left( context[2], context[0], context[1] ) )
      continue;
    context[3] = 0;
    context[4] = 0;
    if( ! refalrts::brackets_left( context[3], context[4], context[0], context[1] ) )
      continue;
    if( ! refalrts::char_left( '-', context[3], context[4] ) )
      continue;
    // closed e.Arg#1 as range 3
    // closed e.Tail#1 as range 0
    //0: e.Tail#1
    //2: s.Num#1
    //3: e.Arg#1
    //12: s.Num#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[5] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[6], & ident_Short<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[7] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[9], MarkupArguments, "MarkupArguments" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[11], Inc, "Inc" ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[12], context[2]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[14] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[14] );
    refalrts::push_stack( context[8] );
    res = refalrts::splice_elem( res, context[14] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    refalrts::push_stack( context[13] );
    refalrts::push_stack( context[10] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_stvar( res, context[12] );
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_elem( res, context[10] );
    res = refalrts::splice_elem( res, context[9] );
    res = refalrts::splice_elem( res, context[8] );
    refalrts::link_brackets( context[5], context[7] );
    res = refalrts::splice_elem( res, context[7] );
    res = refalrts::splice_evar( res, context[3], context[4] );
    res = refalrts::splice_stvar( res, context[2] );
    res = refalrts::splice_elem( res, context[6] );
    res = refalrts::splice_elem( res, context[5] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    // s.Num#1/2 ( e.Arg#1/3 ) e.Tail#1/0
    if( ! refalrts::svar_left( context[2], context[0], context[1] ) )
      continue;
    context[3] = 0;
    context[4] = 0;
    if( ! refalrts::brackets_left( context[3], context[4], context[0], context[1] ) )
      continue;
    // closed e.Arg#1 as range 3
    // closed e.Tail#1 as range 0
    //0: e.Tail#1
    //2: s.Num#1
    //3: e.Arg#1
    //12: s.Num#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[5] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[6], & ident_Word<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[7] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[9], MarkupArguments, "MarkupArguments" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[11], Inc, "Inc" ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[12], context[2]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[14] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[14] );
    refalrts::push_stack( context[8] );
    res = refalrts::splice_elem( res, context[14] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    refalrts::push_stack( context[13] );
    refalrts::push_stack( context[10] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_stvar( res, context[12] );
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_elem( res, context[10] );
    res = refalrts::splice_elem( res, context[9] );
    res = refalrts::splice_elem( res, context[8] );
    refalrts::link_brackets( context[5], context[7] );
    res = refalrts::splice_elem( res, context[7] );
    res = refalrts::splice_evar( res, context[3], context[4] );
    res = refalrts::splice_stvar( res, context[2] );
    res = refalrts::splice_elem( res, context[6] );
    res = refalrts::splice_elem( res, context[5] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  refalrts::move_left( context[0], context[1] );
  refalrts::move_left( context[0], context[1] );
  refalrts::move_right( context[0], context[1] );
  // s.Num#1/2
  if( ! refalrts::svar_left( context[2], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  //2: s.Num#1

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult MarkupAllFiles(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { Inc, "Inc" },
    { MarkupAllFiles, "MarkupAllFiles" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_Word<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +33, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // s.Num#1/2 ( e.Arg#1/3 ) e.Tail#1/0
    {refalrts::icsVarLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 3, 0},
    // closed e.Arg#1 as range 3
    // closed e.Tail#1 as range 0
    //0: e.Tail#1
    //2: s.Num#1
    //3: e.Arg#1
    //12: s.Num#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 5},
    {refalrts::icIdent, 0, 0, 6},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 7},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 8},
    {refalrts::icFunc, 0, 1, 9},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 10},
    {refalrts::icFunc, 0, 0, 11},
    {refalrts::icCopySTVar, 12, 2, 0},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 13},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 14},
    {refalrts::icPushStack, 0, 0, 14},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icPushStack, 0, 0, 13},
    {refalrts::icPushStack, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceSTVar, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icLinkBrackets, 5, 7, 0},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceEVar, 0, 0, 3},
    {refalrts::icSpliceSTVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // s.Num#1/2
    {refalrts::icsVarLeft, 0, 2, 0},
    {refalrts::icEmpty, 0, 0, 0},
    //2: s.Num#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[1];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    // s.Num#1/2 ( e.Arg#1/3 ) e.Tail#1/0
    if( ! refalrts::svar_left( context[2], context[0], context[1] ) )
      continue;
    context[3] = 0;
    context[4] = 0;
    if( ! refalrts::brackets_left( context[3], context[4], context[0], context[1] ) )
      continue;
    // closed e.Arg#1 as range 3
    // closed e.Tail#1 as range 0
    //0: e.Tail#1
    //2: s.Num#1
    //3: e.Arg#1
    //12: s.Num#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[5] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[6], & ident_Word<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[7] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[9], MarkupAllFiles, "MarkupAllFiles" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[11], Inc, "Inc" ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[12], context[2]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[14] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[14] );
    refalrts::push_stack( context[8] );
    res = refalrts::splice_elem( res, context[14] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    refalrts::push_stack( context[13] );
    refalrts::push_stack( context[10] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_stvar( res, context[12] );
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_elem( res, context[10] );
    res = refalrts::splice_elem( res, context[9] );
    res = refalrts::splice_elem( res, context[8] );
    refalrts::link_brackets( context[5], context[7] );
    res = refalrts::splice_elem( res, context[7] );
    res = refalrts::splice_evar( res, context[3], context[4] );
    res = refalrts::splice_stvar( res, context[2] );
    res = refalrts::splice_elem( res, context[6] );
    res = refalrts::splice_elem( res, context[5] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  refalrts::move_left( context[0], context[1] );
  refalrts::move_left( context[0], context[1] );
  refalrts::move_right( context[0], context[1] );
  // s.Num#1/2
  if( ! refalrts::svar_left( context[2], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  //2: s.Num#1

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult ResolveOpts(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 37 elems
  refalrts::Iter context[37];
  refalrts::zeros( context, 37 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { ResolveOpts, "ResolveOpts" },
    { ResolveOpts_Short, "ResolveOpts_Short" },
    { ResolveOpts_Long, "ResolveOpts_Long" },
    { ResolveOpts_LongParam, "ResolveOpts_LongParam" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_FILE<int>::name,
    & ident_Word<int>::name,
    & ident_Short<int>::name,
    & ident_Long<int>::name,
    & ident_Long_Param<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +66, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Descrs_B#1/9 ( s.Tag#1/13 s.HasArg#1/14 s.Opts_B#1/15 ( e.Long#1/18 ) e.Opts_E#1/11 ) e.Descrs_E#1/20 ) ( # Long_Param s.Num#1/6 ( e.Long#1/7 ) e.Param#1/4 ) e.ArgsTail#1/0
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icIdentLeft, 0, 4, 4},
    // closed e.ArgsTail#1 as range 0
    {refalrts::icsVarLeft, 0, 6, 4},
    {refalrts::icBracketLeft, 0, 7, 4},
    // closed e.Long#1 as range 7
    // closed e.Param#1 as range 4
    {refalrts::icEPrepare, 0, 9, 2},
    {refalrts::icEStart, 0, 9, 2},
    {refalrts::icSave, 0, 20, 2},
    {refalrts::icBracketLeft, 0, 11, 20},
    // closed e.Descrs_E#1 as range 2
    {refalrts::icsVarLeft, 0, 13, 11},
    {refalrts::icsVarLeft, 0, 14, 11},
    {refalrts::icsVarLeft, 0, 15, 11},
    {refalrts::icBracketLeft, 0, 16, 11},
    {refalrts::iceRepeatLeft, 18, 7, 16},
    {refalrts::icEmpty, 0, 0, 16},
    // closed e.Opts_E#1 as range 11
    //0: e.ArgsTail#1
    //4: e.Param#1
    //6: s.Num#1
    //7: e.Long#1
    //9: e.Descrs_B#1
    //11: e.Opts_E#1
    //13: s.Tag#1
    //14: s.HasArg#1
    //15: s.Opts_B#1
    //18: e.Long#1
    //20: e.Descrs_E#1
    //30: s.Tag#1
    //31: s.HasArg#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 22},
    {refalrts::icFunc, 0, 3, 23},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 24},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 25},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 26},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 27},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 28},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 29},
    {refalrts::icCopySTVar, 30, 13, 0},
    {refalrts::icCopySTVar, 31, 14, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 32},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 33},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 34},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 35},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 36},
    {refalrts::icPushStack, 0, 0, 36},
    {refalrts::icPushStack, 0, 0, 22},
    {refalrts::icSpliceElem, 0, 0, 36},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icLinkBrackets, 34, 35, 0},
    {refalrts::icSpliceElem, 0, 0, 35},
    {refalrts::icSpliceEVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 34},
    {refalrts::icLinkBrackets, 32, 33, 0},
    {refalrts::icSpliceElem, 0, 0, 33},
    {refalrts::icSpliceEVar, 0, 0, 18},
    {refalrts::icSpliceElem, 0, 0, 32},
    {refalrts::icSpliceSTVar, 0, 0, 31},
    {refalrts::icSpliceSTVar, 0, 0, 30},
    {refalrts::icSpliceSTVar, 0, 0, 6},
    {refalrts::icLinkBrackets, 24, 29, 0},
    {refalrts::icSpliceElem, 0, 0, 29},
    {refalrts::icSpliceEVar, 0, 0, 20},
    {refalrts::icLinkBrackets, 25, 28, 0},
    {refalrts::icSpliceElem, 0, 0, 28},
    {refalrts::icSpliceEVar, 0, 0, 11},
    {refalrts::icLinkBrackets, 26, 27, 0},
    {refalrts::icSpliceElem, 0, 0, 27},
    {refalrts::icSpliceEVar, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icSpliceSTVar, 0, 0, 15},
    {refalrts::icSpliceSTVar, 0, 0, 14},
    {refalrts::icSpliceSTVar, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icSpliceEVar, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +59, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Descrs_B#1/7 ( s.Tag#1/11 s.HasArg#1/12 s.Opts_B#1/13 ( e.Long#1/16 ) e.Opts_E#1/9 ) e.Descrs_E#1/18 ) ( # Long s.Num#1/6 e.Long#1/4 ) e.ArgsTail#1/0
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icIdentLeft, 0, 3, 4},
    // closed e.ArgsTail#1 as range 0
    {refalrts::icsVarLeft, 0, 6, 4},
    // closed e.Long#1 as range 4
    {refalrts::icEPrepare, 0, 7, 2},
    {refalrts::icEStart, 0, 7, 2},
    {refalrts::icSave, 0, 18, 2},
    {refalrts::icBracketLeft, 0, 9, 18},
    // closed e.Descrs_E#1 as range 2
    {refalrts::icsVarLeft, 0, 11, 9},
    {refalrts::icsVarLeft, 0, 12, 9},
    {refalrts::icsVarLeft, 0, 13, 9},
    {refalrts::icBracketLeft, 0, 14, 9},
    {refalrts::iceRepeatLeft, 16, 4, 14},
    {refalrts::icEmpty, 0, 0, 14},
    // closed e.Opts_E#1 as range 9
    //0: e.ArgsTail#1
    //4: e.Long#1
    //6: s.Num#1
    //7: e.Descrs_B#1
    //9: e.Opts_E#1
    //11: s.Tag#1
    //12: s.HasArg#1
    //13: s.Opts_B#1
    //16: e.Long#1
    //18: e.Descrs_E#1
    //28: s.Tag#1
    //29: s.HasArg#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 20},
    {refalrts::icFunc, 0, 2, 21},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 22},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 23},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 24},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 25},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 26},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 27},
    {refalrts::icCopySTVar, 28, 11, 0},
    {refalrts::icCopySTVar, 29, 12, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 30},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 31},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 32},
    {refalrts::icPushStack, 0, 0, 32},
    {refalrts::icPushStack, 0, 0, 20},
    {refalrts::icSpliceElem, 0, 0, 32},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icLinkBrackets, 30, 31, 0},
    {refalrts::icSpliceElem, 0, 0, 31},
    {refalrts::icSpliceEVar, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 30},
    {refalrts::icSpliceSTVar, 0, 0, 29},
    {refalrts::icSpliceSTVar, 0, 0, 28},
    {refalrts::icSpliceSTVar, 0, 0, 6},
    {refalrts::icLinkBrackets, 22, 27, 0},
    {refalrts::icSpliceElem, 0, 0, 27},
    {refalrts::icSpliceEVar, 0, 0, 18},
    {refalrts::icLinkBrackets, 23, 26, 0},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icSpliceEVar, 0, 0, 9},
    {refalrts::icLinkBrackets, 24, 25, 0},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icSpliceEVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icSpliceSTVar, 0, 0, 13},
    {refalrts::icSpliceSTVar, 0, 0, 12},
    {refalrts::icSpliceSTVar, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icSpliceEVar, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +56, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Descrs_B#1/8 ( s.Tag#1/12 s.HasArg#1/13 e.Opts_B#1/14 s.Short#1/16 e.Opts_E#1/19 ) e.Descrs_E#1/17 ) ( # Short s.Num#1/6 s.Short#1/7 e.OptTail#1/4 ) e.ArgsTail#1/0
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icIdentLeft, 0, 2, 4},
    // closed e.ArgsTail#1 as range 0
    {refalrts::icsVarLeft, 0, 6, 4},
    {refalrts::icsVarLeft, 0, 7, 4},
    // closed e.OptTail#1 as range 4
    {refalrts::icEPrepare, 0, 8, 2},
    {refalrts::icEStart, 0, 8, 2},
    {refalrts::icSave, 0, 17, 2},
    {refalrts::icBracketLeft, 0, 10, 17},
    // closed e.Descrs_E#1 as range 2
    {refalrts::icsVarLeft, 0, 12, 10},
    {refalrts::icsVarLeft, 0, 13, 10},
    {refalrts::icEPrepare, 0, 14, 10},
    {refalrts::icEStart, 0, 14, 10},
    {refalrts::icSave, 0, 19, 10},
    {refalrts::icsRepeatLeft, 16, 7, 19},
    // closed e.Opts_E#1 as range 10
    //0: e.ArgsTail#1
    //4: e.OptTail#1
    //6: s.Num#1
    //7: s.Short#1
    //8: e.Descrs_B#1
    //12: s.Tag#1
    //13: s.HasArg#1
    //14: e.Opts_B#1
    //16: s.Short#1
    //17: e.Descrs_E#1
    //19: e.Opts_E#1
    //27: s.Tag#1
    //28: s.HasArg#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 21},
    {refalrts::icFunc, 0, 1, 22},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 23},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 24},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 25},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 26},
    {refalrts::icCopySTVar, 27, 12, 0},
    {refalrts::icCopySTVar, 28, 13, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 29},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 30},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 31},
    {refalrts::icPushStack, 0, 0, 31},
    {refalrts::icPushStack, 0, 0, 21},
    {refalrts::icSpliceElem, 0, 0, 31},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icLinkBrackets, 29, 30, 0},
    {refalrts::icSpliceElem, 0, 0, 30},
    {refalrts::icSpliceEVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 29},
    {refalrts::icSpliceSTVar, 0, 0, 16},
    {refalrts::icSpliceSTVar, 0, 0, 28},
    {refalrts::icSpliceSTVar, 0, 0, 27},
    {refalrts::icSpliceSTVar, 0, 0, 6},
    {refalrts::icLinkBrackets, 23, 26, 0},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icSpliceEVar, 0, 0, 17},
    {refalrts::icLinkBrackets, 24, 25, 0},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icSpliceEVar, 0, 0, 19},
    {refalrts::icSpliceSTVar, 0, 0, 7},
    {refalrts::icSpliceEVar, 0, 0, 14},
    {refalrts::icSpliceSTVar, 0, 0, 13},
    {refalrts::icSpliceSTVar, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icSpliceEVar, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +31, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Description#1/2 ) ( # Word s.Num#1/6 e.File#1/4 ) e.ArgsTail#1/0
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icIdentLeft, 0, 1, 4},
    // closed e.Description#1 as range 2
    // closed e.ArgsTail#1 as range 0
    {refalrts::icsVarLeft, 0, 6, 4},
    // closed e.File#1 as range 4
    //0: e.ArgsTail#1
    //2: e.Description#1
    //4: e.File#1
    //6: s.Num#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 7},
    {refalrts::icIdent, 0, 0, 8},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 9},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 10},
    {refalrts::icFunc, 0, 0, 11},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 12},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 13},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 14},
    {refalrts::icPushStack, 0, 0, 14},
    {refalrts::icPushStack, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icLinkBrackets, 12, 13, 0},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icLinkBrackets, 7, 9, 0},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceEVar, 0, 0, 4},
    {refalrts::icSpliceSTVar, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Description#1/2 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icEmpty, 0, 0, 0},
    // closed e.Description#1 as range 2
    //2: e.Description#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[8];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    // ( e.Descrs_B#1/9 ( s.Tag#1/13 s.HasArg#1/14 s.Opts_B#1/15 ( e.Long#1/18 ) e.Opts_E#1/11 ) e.Descrs_E#1/20 ) ( # Long_Param s.Num#1/6 ( e.Long#1/7 ) e.Param#1/4 ) e.ArgsTail#1/0
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_Long_Param<int>::name, context[4], context[5] ) )
      continue;
    // closed e.ArgsTail#1 as range 0
    if( ! refalrts::svar_left( context[6], context[4], context[5] ) )
      continue;
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_left( context[7], context[8], context[4], context[5] ) )
      continue;
    // closed e.Long#1 as range 7
    // closed e.Param#1 as range 4
    context[9] = 0;
    context[10] = 0;
    refalrts::start_e_loop();
    do {
      context[20] = context[2];
      context[21] = context[3];
      context[11] = 0;
      context[12] = 0;
      if( ! refalrts::brackets_left( context[11], context[12], context[20], context[21] ) )
        continue;
      // closed e.Descrs_E#1 as range 2
      if( ! refalrts::svar_left( context[13], context[11], context[12] ) )
        continue;
      if( ! refalrts::svar_left( context[14], context[11], context[12] ) )
        continue;
      if( ! refalrts::svar_left( context[15], context[11], context[12] ) )
        continue;
      context[16] = 0;
      context[17] = 0;
      if( ! refalrts::brackets_left( context[16], context[17], context[11], context[12] ) )
        continue;
      if( ! refalrts::repeated_evar_left( context[18], context[19], context[7], context[8], context[16], context[17] ) )
        continue;
      if( ! refalrts::empty_seq( context[16], context[17] ) )
        continue;
      // closed e.Opts_E#1 as range 11
      //0: e.ArgsTail#1
      //4: e.Param#1
      //6: s.Num#1
      //7: e.Long#1
      //9: e.Descrs_B#1
      //11: e.Opts_E#1
      //13: s.Tag#1
      //14: s.HasArg#1
      //15: s.Opts_B#1
      //18: e.Long#1
      //20: e.Descrs_E#1
      //30: s.Tag#1
      //31: s.HasArg#1

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::alloc_open_call( context[22] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[23], ResolveOpts_LongParam, "ResolveOpts_LongParam" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[24] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[25] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[26] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[27] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[28] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[29] ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[30], context[13]))
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[31], context[14]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[32] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[33] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[34] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[35] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[36] ) )
        return refalrts::cNoMemory;
      refalrts::push_stack( context[36] );
      refalrts::push_stack( context[22] );
      res = refalrts::splice_elem( res, context[36] );
      res = refalrts::splice_evar( res, context[0], context[1] );
      refalrts::link_brackets( context[34], context[35] );
      res = refalrts::splice_elem( res, context[35] );
      res = refalrts::splice_evar( res, context[4], context[5] );
      res = refalrts::splice_elem( res, context[34] );
      refalrts::link_brackets( context[32], context[33] );
      res = refalrts::splice_elem( res, context[33] );
      res = refalrts::splice_evar( res, context[18], context[19] );
      res = refalrts::splice_elem( res, context[32] );
      res = refalrts::splice_stvar( res, context[31] );
      res = refalrts::splice_stvar( res, context[30] );
      res = refalrts::splice_stvar( res, context[6] );
      refalrts::link_brackets( context[24], context[29] );
      res = refalrts::splice_elem( res, context[29] );
      res = refalrts::splice_evar( res, context[20], context[21] );
      refalrts::link_brackets( context[25], context[28] );
      res = refalrts::splice_elem( res, context[28] );
      res = refalrts::splice_evar( res, context[11], context[12] );
      refalrts::link_brackets( context[26], context[27] );
      res = refalrts::splice_elem( res, context[27] );
      res = refalrts::splice_evar( res, context[7], context[8] );
      res = refalrts::splice_elem( res, context[26] );
      res = refalrts::splice_stvar( res, context[15] );
      res = refalrts::splice_stvar( res, context[14] );
      res = refalrts::splice_stvar( res, context[13] );
      res = refalrts::splice_elem( res, context[25] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      res = refalrts::splice_elem( res, context[24] );
      res = refalrts::splice_elem( res, context[23] );
      res = refalrts::splice_elem( res, context[22] );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[9], context[10], context[2], context[3] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    // ( e.Descrs_B#1/7 ( s.Tag#1/11 s.HasArg#1/12 s.Opts_B#1/13 ( e.Long#1/16 ) e.Opts_E#1/9 ) e.Descrs_E#1/18 ) ( # Long s.Num#1/6 e.Long#1/4 ) e.ArgsTail#1/0
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_Long<int>::name, context[4], context[5] ) )
      continue;
    // closed e.ArgsTail#1 as range 0
    if( ! refalrts::svar_left( context[6], context[4], context[5] ) )
      continue;
    // closed e.Long#1 as range 4
    context[7] = 0;
    context[8] = 0;
    refalrts::start_e_loop();
    do {
      context[18] = context[2];
      context[19] = context[3];
      context[9] = 0;
      context[10] = 0;
      if( ! refalrts::brackets_left( context[9], context[10], context[18], context[19] ) )
        continue;
      // closed e.Descrs_E#1 as range 2
      if( ! refalrts::svar_left( context[11], context[9], context[10] ) )
        continue;
      if( ! refalrts::svar_left( context[12], context[9], context[10] ) )
        continue;
      if( ! refalrts::svar_left( context[13], context[9], context[10] ) )
        continue;
      context[14] = 0;
      context[15] = 0;
      if( ! refalrts::brackets_left( context[14], context[15], context[9], context[10] ) )
        continue;
      if( ! refalrts::repeated_evar_left( context[16], context[17], context[4], context[5], context[14], context[15] ) )
        continue;
      if( ! refalrts::empty_seq( context[14], context[15] ) )
        continue;
      // closed e.Opts_E#1 as range 9
      //0: e.ArgsTail#1
      //4: e.Long#1
      //6: s.Num#1
      //7: e.Descrs_B#1
      //9: e.Opts_E#1
      //11: s.Tag#1
      //12: s.HasArg#1
      //13: s.Opts_B#1
      //16: e.Long#1
      //18: e.Descrs_E#1
      //28: s.Tag#1
      //29: s.HasArg#1

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::alloc_open_call( context[20] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[21], ResolveOpts_Long, "ResolveOpts_Long" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[22] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[23] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[24] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[25] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[26] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[27] ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[28], context[11]))
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[29], context[12]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[30] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[31] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[32] ) )
        return refalrts::cNoMemory;
      refalrts::push_stack( context[32] );
      refalrts::push_stack( context[20] );
      res = refalrts::splice_elem( res, context[32] );
      res = refalrts::splice_evar( res, context[0], context[1] );
      refalrts::link_brackets( context[30], context[31] );
      res = refalrts::splice_elem( res, context[31] );
      res = refalrts::splice_evar( res, context[16], context[17] );
      res = refalrts::splice_elem( res, context[30] );
      res = refalrts::splice_stvar( res, context[29] );
      res = refalrts::splice_stvar( res, context[28] );
      res = refalrts::splice_stvar( res, context[6] );
      refalrts::link_brackets( context[22], context[27] );
      res = refalrts::splice_elem( res, context[27] );
      res = refalrts::splice_evar( res, context[18], context[19] );
      refalrts::link_brackets( context[23], context[26] );
      res = refalrts::splice_elem( res, context[26] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      refalrts::link_brackets( context[24], context[25] );
      res = refalrts::splice_elem( res, context[25] );
      res = refalrts::splice_evar( res, context[4], context[5] );
      res = refalrts::splice_elem( res, context[24] );
      res = refalrts::splice_stvar( res, context[13] );
      res = refalrts::splice_stvar( res, context[12] );
      res = refalrts::splice_stvar( res, context[11] );
      res = refalrts::splice_elem( res, context[23] );
      res = refalrts::splice_evar( res, context[7], context[8] );
      res = refalrts::splice_elem( res, context[22] );
      res = refalrts::splice_elem( res, context[21] );
      res = refalrts::splice_elem( res, context[20] );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[7], context[8], context[2], context[3] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    // ( e.Descrs_B#1/8 ( s.Tag#1/12 s.HasArg#1/13 e.Opts_B#1/14 s.Short#1/16 e.Opts_E#1/19 ) e.Descrs_E#1/17 ) ( # Short s.Num#1/6 s.Short#1/7 e.OptTail#1/4 ) e.ArgsTail#1/0
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_Short<int>::name, context[4], context[5] ) )
      continue;
    // closed e.ArgsTail#1 as range 0
    if( ! refalrts::svar_left( context[6], context[4], context[5] ) )
      continue;
    if( ! refalrts::svar_left( context[7], context[4], context[5] ) )
      continue;
    // closed e.OptTail#1 as range 4
    context[8] = 0;
    context[9] = 0;
    refalrts::start_e_loop();
    do {
      context[17] = context[2];
      context[18] = context[3];
      context[10] = 0;
      context[11] = 0;
      if( ! refalrts::brackets_left( context[10], context[11], context[17], context[18] ) )
        continue;
      // closed e.Descrs_E#1 as range 2
      if( ! refalrts::svar_left( context[12], context[10], context[11] ) )
        continue;
      if( ! refalrts::svar_left( context[13], context[10], context[11] ) )
        continue;
      context[14] = 0;
      context[15] = 0;
      refalrts::start_e_loop();
      do {
        context[19] = context[10];
        context[20] = context[11];
        if( ! refalrts::repeated_stvar_left( context[16], context[7], context[19], context[20] ) )
          continue;
        // closed e.Opts_E#1 as range 10
        //0: e.ArgsTail#1
        //4: e.OptTail#1
        //6: s.Num#1
        //7: s.Short#1
        //8: e.Descrs_B#1
        //12: s.Tag#1
        //13: s.HasArg#1
        //14: e.Opts_B#1
        //16: s.Short#1
        //17: e.Descrs_E#1
        //19: e.Opts_E#1
        //27: s.Tag#1
        //28: s.HasArg#1

        refalrts::reset_allocator();
        refalrts::Iter res = arg_begin;
        if( ! refalrts::alloc_open_call( context[21] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_name( context[22], ResolveOpts_Short, "ResolveOpts_Short" ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_open_bracket( context[23] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_open_bracket( context[24] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_bracket( context[25] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_bracket( context[26] ) )
          return refalrts::cNoMemory;
        if (! refalrts::copy_stvar(context[27], context[12]))
          return refalrts::cNoMemory;
        if (! refalrts::copy_stvar(context[28], context[13]))
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_open_bracket( context[29] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_bracket( context[30] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_call( context[31] ) )
          return refalrts::cNoMemory;
        refalrts::push_stack( context[31] );
        refalrts::push_stack( context[21] );
        res = refalrts::splice_elem( res, context[31] );
        res = refalrts::splice_evar( res, context[0], context[1] );
        refalrts::link_brackets( context[29], context[30] );
        res = refalrts::splice_elem( res, context[30] );
        res = refalrts::splice_evar( res, context[4], context[5] );
        res = refalrts::splice_elem( res, context[29] );
        res = refalrts::splice_stvar( res, context[16] );
        res = refalrts::splice_stvar( res, context[28] );
        res = refalrts::splice_stvar( res, context[27] );
        res = refalrts::splice_stvar( res, context[6] );
        refalrts::link_brackets( context[23], context[26] );
        res = refalrts::splice_elem( res, context[26] );
        res = refalrts::splice_evar( res, context[17], context[18] );
        refalrts::link_brackets( context[24], context[25] );
        res = refalrts::splice_elem( res, context[25] );
        res = refalrts::splice_evar( res, context[19], context[20] );
        res = refalrts::splice_stvar( res, context[7] );
        res = refalrts::splice_evar( res, context[14], context[15] );
        res = refalrts::splice_stvar( res, context[13] );
        res = refalrts::splice_stvar( res, context[12] );
        res = refalrts::splice_elem( res, context[24] );
        res = refalrts::splice_evar( res, context[8], context[9] );
        res = refalrts::splice_elem( res, context[23] );
        res = refalrts::splice_elem( res, context[22] );
        res = refalrts::splice_elem( res, context[21] );
        refalrts::use( res );
        refalrts::splice_to_freelist( arg_begin, arg_end );
        return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
      } while ( refalrts::open_evar_advance( context[14], context[15], context[10], context[11] ) );
    } while ( refalrts::open_evar_advance( context[8], context[9], context[2], context[3] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    // ( e.Description#1/2 ) ( # Word s.Num#1/6 e.File#1/4 ) e.ArgsTail#1/0
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_Word<int>::name, context[4], context[5] ) )
      continue;
    // closed e.Description#1 as range 2
    // closed e.ArgsTail#1 as range 0
    if( ! refalrts::svar_left( context[6], context[4], context[5] ) )
      continue;
    // closed e.File#1 as range 4
    //0: e.ArgsTail#1
    //2: e.Description#1
    //4: e.File#1
    //6: s.Num#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[7] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[8], & ident_FILE<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[9] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[11], ResolveOpts, "ResolveOpts" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[14] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[14] );
    refalrts::push_stack( context[10] );
    res = refalrts::splice_elem( res, context[14] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    refalrts::link_brackets( context[12], context[13] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_elem( res, context[10] );
    refalrts::link_brackets( context[7], context[9] );
    res = refalrts::splice_elem( res, context[9] );
    res = refalrts::splice_evar( res, context[4], context[5] );
    res = refalrts::splice_stvar( res, context[6] );
    res = refalrts::splice_elem( res, context[8] );
    res = refalrts::splice_elem( res, context[7] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  refalrts::move_left( context[0], context[1] );
  refalrts::move_left( context[0], context[1] );
  refalrts::move_right( context[0], context[1] );
  // ( e.Description#1/2 )
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Description#1 as range 2
  //2: e.Description#1

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult Error(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::FnResult(refalrts::cRecognitionImpossible | (__LINE__ << 8));
}

static refalrts::FnResult ResolveOpts_LongParam(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 23 elems
  refalrts::Iter context[23];
  refalrts::zeros( context, 23 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { ResolveOpts, "ResolveOpts" },
    { Error, "Error" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_UnexpectedLongOptionParam<int>::name,
    & ident_None<int>::name,
    & ident_Optional<int>::name,
    & ident_Required<int>::name
  };
  using refalrts::numbers;
  static const refalrts::StringItem strings[] = {
    {"--", 2}
  };
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +32, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Description#1/2 ) s.Num#1/4 s.Tag#1/5 # Required ( e.Long#1/6 ) ( e.Param#1/8 ) e.ArgsTail#1/0
    {refalrts::icBracketLeft, 0, 2, 0},
    // closed e.Description#1 as range 2
    {refalrts::icsVarLeft, 0, 4, 0},
    {refalrts::icsVarLeft, 0, 5, 0},
    {refalrts::icIdentLeft, 0, 3, 0},
    {refalrts::icBracketLeft, 0, 6, 0},
    {refalrts::icBracketLeft, 0, 8, 0},
    // closed e.Long#1 as range 6
    // closed e.Param#1 as range 8
    // closed e.ArgsTail#1 as range 0
    //0: e.ArgsTail#1
    //2: e.Description#1
    //4: s.Num#1
    //5: s.Tag#1
    //6: e.Long#1
    //8: e.Param#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 10},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 11},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 12},
    {refalrts::icFunc, 0, 0, 13},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 14},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 15},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 16},
    {refalrts::icPushStack, 0, 0, 16},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icLinkBrackets, 14, 15, 0},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icLinkBrackets, 10, 11, 0},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceEVar, 0, 0, 8},
    {refalrts::icSpliceSTVar, 0, 0, 4},
    {refalrts::icSpliceSTVar, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +32, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Description#1/2 ) s.Num#1/4 s.Tag#1/5 # Optional ( e.Long#1/6 ) ( e.Param#1/8 ) e.ArgsTail#1/0
    {refalrts::icBracketLeft, 0, 2, 0},
    // closed e.Description#1 as range 2
    {refalrts::icsVarLeft, 0, 4, 0},
    {refalrts::icsVarLeft, 0, 5, 0},
    {refalrts::icIdentLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 6, 0},
    {refalrts::icBracketLeft, 0, 8, 0},
    // closed e.Long#1 as range 6
    // closed e.Param#1 as range 8
    // closed e.ArgsTail#1 as range 0
    //0: e.ArgsTail#1
    //2: e.Description#1
    //4: s.Num#1
    //5: s.Tag#1
    //6: e.Long#1
    //8: e.Param#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 10},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 11},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 12},
    {refalrts::icFunc, 0, 0, 13},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 14},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 15},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 16},
    {refalrts::icPushStack, 0, 0, 16},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icLinkBrackets, 14, 15, 0},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icLinkBrackets, 10, 11, 0},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceEVar, 0, 0, 8},
    {refalrts::icSpliceSTVar, 0, 0, 4},
    {refalrts::icSpliceSTVar, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Description#1/2 ) s.Num#1/4 s.Tag#1/5 # None ( e.Long#1/6 ) ( e.Param#1/8 ) e.ArgsTail#1/0
    {refalrts::icBracketLeft, 0, 2, 0},
    // closed e.Description#1 as range 2
    {refalrts::icsVarLeft, 0, 4, 0},
    {refalrts::icsVarLeft, 0, 5, 0},
    {refalrts::icIdentLeft, 0, 1, 0},
    {refalrts::icBracketLeft, 0, 6, 0},
    {refalrts::icBracketLeft, 0, 8, 0},
    // closed e.Long#1 as range 6
    // closed e.Param#1 as range 8
    // closed e.ArgsTail#1 as range 0
    //0: e.ArgsTail#1
    //2: e.Description#1
    //4: s.Num#1
    //5: s.Tag#1
    //6: e.Long#1
    //8: e.Param#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 10},
    {refalrts::icFunc, 0, 1, 11},
    {refalrts::icIdent, 0, 0, 12},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 13},
    {refalrts::icString, 0, 0, 14},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 16},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 17},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 18},
    {refalrts::icFunc, 0, 0, 19},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 20},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 21},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 22},
    {refalrts::icPushStack, 0, 0, 22},
    {refalrts::icPushStack, 0, 0, 18},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icLinkBrackets, 20, 21, 0},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icLinkBrackets, 10, 17, 0},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceEVar, 0, 0, 8},
    {refalrts::icLinkBrackets, 13, 16, 0},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceEVar, 0, 0, 6},
    {refalrts::icSpliceRange, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceSTVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[2];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    // ( e.Description#1/2 ) s.Num#1/4 s.Tag#1/5 # Required ( e.Long#1/6 ) ( e.Param#1/8 ) e.ArgsTail#1/0
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    // closed e.Description#1 as range 2
    if( ! refalrts::svar_left( context[4], context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[5], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_Required<int>::name, context[0], context[1] ) )
      continue;
    context[6] = 0;
    context[7] = 0;
    if( ! refalrts::brackets_left( context[6], context[7], context[0], context[1] ) )
      continue;
    context[8] = 0;
    context[9] = 0;
    if( ! refalrts::brackets_left( context[8], context[9], context[0], context[1] ) )
      continue;
    // closed e.Long#1 as range 6
    // closed e.Param#1 as range 8
    // closed e.ArgsTail#1 as range 0
    //0: e.ArgsTail#1
    //2: e.Description#1
    //4: s.Num#1
    //5: s.Tag#1
    //6: e.Long#1
    //8: e.Param#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[13], ResolveOpts, "ResolveOpts" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[15] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[16] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[16] );
    refalrts::push_stack( context[12] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    refalrts::link_brackets( context[14], context[15] );
    res = refalrts::splice_elem( res, context[15] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_elem( res, context[14] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_elem( res, context[12] );
    refalrts::link_brackets( context[10], context[11] );
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_evar( res, context[8], context[9] );
    res = refalrts::splice_stvar( res, context[4] );
    res = refalrts::splice_stvar( res, context[5] );
    res = refalrts::splice_elem( res, context[10] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    // ( e.Description#1/2 ) s.Num#1/4 s.Tag#1/5 # Optional ( e.Long#1/6 ) ( e.Param#1/8 ) e.ArgsTail#1/0
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    // closed e.Description#1 as range 2
    if( ! refalrts::svar_left( context[4], context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[5], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_Optional<int>::name, context[0], context[1] ) )
      continue;
    context[6] = 0;
    context[7] = 0;
    if( ! refalrts::brackets_left( context[6], context[7], context[0], context[1] ) )
      continue;
    context[8] = 0;
    context[9] = 0;
    if( ! refalrts::brackets_left( context[8], context[9], context[0], context[1] ) )
      continue;
    // closed e.Long#1 as range 6
    // closed e.Param#1 as range 8
    // closed e.ArgsTail#1 as range 0
    //0: e.ArgsTail#1
    //2: e.Description#1
    //4: s.Num#1
    //5: s.Tag#1
    //6: e.Long#1
    //8: e.Param#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[13], ResolveOpts, "ResolveOpts" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[15] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[16] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[16] );
    refalrts::push_stack( context[12] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    refalrts::link_brackets( context[14], context[15] );
    res = refalrts::splice_elem( res, context[15] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_elem( res, context[14] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_elem( res, context[12] );
    refalrts::link_brackets( context[10], context[11] );
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_evar( res, context[8], context[9] );
    res = refalrts::splice_stvar( res, context[4] );
    res = refalrts::splice_stvar( res, context[5] );
    res = refalrts::splice_elem( res, context[10] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  refalrts::move_left( context[0], context[1] );
  refalrts::move_left( context[0], context[1] );
  refalrts::move_right( context[0], context[1] );
  // ( e.Description#1/2 ) s.Num#1/4 s.Tag#1/5 # None ( e.Long#1/6 ) ( e.Param#1/8 ) e.ArgsTail#1/0
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Description#1 as range 2
  if( ! refalrts::svar_left( context[4], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[5], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::ident_left(  & ident_None<int>::name, context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[6] = 0;
  context[7] = 0;
  if( ! refalrts::brackets_left( context[6], context[7], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[8] = 0;
  context[9] = 0;
  if( ! refalrts::brackets_left( context[8], context[9], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Long#1 as range 6
  // closed e.Param#1 as range 8
  // closed e.ArgsTail#1 as range 0
  //0: e.ArgsTail#1
  //2: e.Description#1
  //4: s.Num#1
  //5: s.Tag#1
  //6: e.Long#1
  //8: e.Param#1

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_bracket( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[11], Error, "Error" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[12], & ident_UnexpectedLongOptionParam<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[14], context[15], "--", 2 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[16] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[17] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[18] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[19], ResolveOpts, "ResolveOpts" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[20] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[21] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[22] ) )
    return refalrts::cNoMemory;
  refalrts::push_stack( context[22] );
  refalrts::push_stack( context[18] );
  res = refalrts::splice_elem( res, context[22] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  refalrts::link_brackets( context[20], context[21] );
  res = refalrts::splice_elem( res, context[21] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_elem( res, context[20] );
  res = refalrts::splice_elem( res, context[19] );
  res = refalrts::splice_elem( res, context[18] );
  refalrts::link_brackets( context[10], context[17] );
  res = refalrts::splice_elem( res, context[17] );
  res = refalrts::splice_evar( res, context[8], context[9] );
  refalrts::link_brackets( context[13], context[16] );
  res = refalrts::splice_elem( res, context[16] );
  res = refalrts::splice_evar( res, context[6], context[7] );
  res = refalrts::splice_evar( res, context[14], context[15] );
  res = refalrts::splice_elem( res, context[13] );
  res = refalrts::splice_elem( res, context[12] );
  res = refalrts::splice_stvar( res, context[4] );
  res = refalrts::splice_elem( res, context[11] );
  res = refalrts::splice_elem( res, context[10] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult ResolveOpts_Long(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { ResolveOpts, "ResolveOpts" },
    { Error, "Error" }
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
  static const refalrts::StringItem strings[] = {
    {"--", 2}
  };
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +33, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Description#1/2 ) s.Num#1/4 s.Tag#1/5 # Required ( e.Long#1/6 ) ( # Word e.Param#1/8 ) e.ArgsTail#1/0
    {refalrts::icBracketLeft, 0, 2, 0},
    // closed e.Description#1 as range 2
    {refalrts::icsVarLeft, 0, 4, 0},
    {refalrts::icsVarLeft, 0, 5, 0},
    {refalrts::icIdentLeft, 0, 5, 0},
    {refalrts::icBracketLeft, 0, 6, 0},
    {refalrts::icBracketLeft, 0, 8, 0},
    {refalrts::icIdentLeft, 0, 3, 8},
    // closed e.Long#1 as range 6
    // closed e.Param#1 as range 8
    // closed e.ArgsTail#1 as range 0
    //0: e.ArgsTail#1
    //2: e.Description#1
    //4: s.Num#1
    //5: s.Tag#1
    //6: e.Long#1
    //8: e.Param#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 10},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 11},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 12},
    {refalrts::icFunc, 0, 0, 13},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 14},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 15},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 16},
    {refalrts::icPushStack, 0, 0, 16},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icLinkBrackets, 14, 15, 0},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icLinkBrackets, 10, 11, 0},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceEVar, 0, 0, 8},
    {refalrts::icSpliceSTVar, 0, 0, 4},
    {refalrts::icSpliceSTVar, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +36, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Description#1/2 ) s.Num#1/4 s.Tag#1/5 # Required ( e.Long#1/6 ) e.ArgsTail#1/0
    {refalrts::icBracketLeft, 0, 2, 0},
    // closed e.Description#1 as range 2
    {refalrts::icsVarLeft, 0, 4, 0},
    {refalrts::icsVarLeft, 0, 5, 0},
    {refalrts::icIdentLeft, 0, 5, 0},
    {refalrts::icBracketLeft, 0, 6, 0},
    // closed e.Long#1 as range 6
    // closed e.ArgsTail#1 as range 0
    //0: e.ArgsTail#1
    //2: e.Description#1
    //4: s.Num#1
    //5: s.Tag#1
    //6: e.Long#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icFunc, 0, 1, 9},
    {refalrts::icIdent, 0, 4, 10},
    {refalrts::icString, 0, 0, 11},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 13},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 14},
    {refalrts::icFunc, 0, 0, 15},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 16},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 17},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 18},
    {refalrts::icPushStack, 0, 0, 18},
    {refalrts::icPushStack, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icLinkBrackets, 16, 17, 0},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icLinkBrackets, 8, 13, 0},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceEVar, 0, 0, 6},
    {refalrts::icSpliceRange, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceSTVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +33, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Description#1/2 ) s.Num#1/4 s.Tag#1/5 # Optional ( e.Long#1/6 ) ( # Word e.Param#1/8 ) e.ArgsTail#1/0
    {refalrts::icBracketLeft, 0, 2, 0},
    // closed e.Description#1 as range 2
    {refalrts::icsVarLeft, 0, 4, 0},
    {refalrts::icsVarLeft, 0, 5, 0},
    {refalrts::icIdentLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 6, 0},
    {refalrts::icBracketLeft, 0, 8, 0},
    {refalrts::icIdentLeft, 0, 3, 8},
    // closed e.Long#1 as range 6
    // closed e.Param#1 as range 8
    // closed e.ArgsTail#1 as range 0
    //0: e.ArgsTail#1
    //2: e.Description#1
    //4: s.Num#1
    //5: s.Tag#1
    //6: e.Long#1
    //8: e.Param#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 10},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 11},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 12},
    {refalrts::icFunc, 0, 0, 13},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 14},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 15},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 16},
    {refalrts::icPushStack, 0, 0, 16},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icLinkBrackets, 14, 15, 0},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icLinkBrackets, 10, 11, 0},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceEVar, 0, 0, 8},
    {refalrts::icSpliceSTVar, 0, 0, 4},
    {refalrts::icSpliceSTVar, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +32, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Description#1/2 ) s.Num#1/4 s.Tag#1/5 # Optional ( e.Long#1/6 ) e.ArgsTail#1/0
    {refalrts::icBracketLeft, 0, 2, 0},
    // closed e.Description#1 as range 2
    {refalrts::icsVarLeft, 0, 4, 0},
    {refalrts::icsVarLeft, 0, 5, 0},
    {refalrts::icIdentLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 6, 0},
    // closed e.Long#1 as range 6
    // closed e.ArgsTail#1 as range 0
    //0: e.ArgsTail#1
    //2: e.Description#1
    //4: s.Num#1
    //5: s.Tag#1
    //6: e.Long#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icIdent, 0, 1, 9},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 10},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 11},
    {refalrts::icFunc, 0, 0, 12},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 13},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 14},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 15},
    {refalrts::icPushStack, 0, 0, 15},
    {refalrts::icPushStack, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icLinkBrackets, 13, 14, 0},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icLinkBrackets, 8, 10, 0},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceSTVar, 0, 0, 4},
    {refalrts::icSpliceSTVar, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Description#1/2 ) s.Num#1/4 s.Tag#1/5 # None ( e.Long#1/6 ) e.ArgsTail#1/0
    {refalrts::icBracketLeft, 0, 2, 0},
    // closed e.Description#1 as range 2
    {refalrts::icsVarLeft, 0, 4, 0},
    {refalrts::icsVarLeft, 0, 5, 0},
    {refalrts::icIdentLeft, 0, 0, 0},
    {refalrts::icBracketLeft, 0, 6, 0},
    // closed e.Long#1 as range 6
    // closed e.ArgsTail#1 as range 0
    //0: e.ArgsTail#1
    //2: e.Description#1
    //4: s.Num#1
    //5: s.Tag#1
    //6: e.Long#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 9},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 10},
    {refalrts::icFunc, 0, 0, 11},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 12},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 13},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 14},
    {refalrts::icPushStack, 0, 0, 14},
    {refalrts::icPushStack, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icLinkBrackets, 12, 13, 0},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icLinkBrackets, 8, 9, 0},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceSTVar, 0, 0, 4},
    {refalrts::icSpliceSTVar, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[4];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    // ( e.Description#1/2 ) s.Num#1/4 s.Tag#1/5 # Required ( e.Long#1/6 ) ( # Word e.Param#1/8 ) e.ArgsTail#1/0
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    // closed e.Description#1 as range 2
    if( ! refalrts::svar_left( context[4], context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[5], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_Required<int>::name, context[0], context[1] ) )
      continue;
    context[6] = 0;
    context[7] = 0;
    if( ! refalrts::brackets_left( context[6], context[7], context[0], context[1] ) )
      continue;
    context[8] = 0;
    context[9] = 0;
    if( ! refalrts::brackets_left( context[8], context[9], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_Word<int>::name, context[8], context[9] ) )
      continue;
    // closed e.Long#1 as range 6
    // closed e.Param#1 as range 8
    // closed e.ArgsTail#1 as range 0
    //0: e.ArgsTail#1
    //2: e.Description#1
    //4: s.Num#1
    //5: s.Tag#1
    //6: e.Long#1
    //8: e.Param#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[13], ResolveOpts, "ResolveOpts" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[15] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[16] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[16] );
    refalrts::push_stack( context[12] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    refalrts::link_brackets( context[14], context[15] );
    res = refalrts::splice_elem( res, context[15] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_elem( res, context[14] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_elem( res, context[12] );
    refalrts::link_brackets( context[10], context[11] );
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_evar( res, context[8], context[9] );
    res = refalrts::splice_stvar( res, context[4] );
    res = refalrts::splice_stvar( res, context[5] );
    res = refalrts::splice_elem( res, context[10] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    // ( e.Description#1/2 ) s.Num#1/4 s.Tag#1/5 # Required ( e.Long#1/6 ) e.ArgsTail#1/0
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    // closed e.Description#1 as range 2
    if( ! refalrts::svar_left( context[4], context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[5], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_Required<int>::name, context[0], context[1] ) )
      continue;
    context[6] = 0;
    context[7] = 0;
    if( ! refalrts::brackets_left( context[6], context[7], context[0], context[1] ) )
      continue;
    // closed e.Long#1 as range 6
    // closed e.ArgsTail#1 as range 0
    //0: e.ArgsTail#1
    //2: e.Description#1
    //4: s.Num#1
    //5: s.Tag#1
    //6: e.Long#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[9], Error, "Error" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[10], & ident_NoRequiredParam<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[11], context[12], "--", 2 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[15], ResolveOpts, "ResolveOpts" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[17] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[18] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[18] );
    refalrts::push_stack( context[14] );
    res = refalrts::splice_elem( res, context[18] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    refalrts::link_brackets( context[16], context[17] );
    res = refalrts::splice_elem( res, context[17] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_elem( res, context[15] );
    res = refalrts::splice_elem( res, context[14] );
    refalrts::link_brackets( context[8], context[13] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_evar( res, context[6], context[7] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_elem( res, context[10] );
    res = refalrts::splice_stvar( res, context[4] );
    res = refalrts::splice_elem( res, context[9] );
    res = refalrts::splice_elem( res, context[8] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    // ( e.Description#1/2 ) s.Num#1/4 s.Tag#1/5 # Optional ( e.Long#1/6 ) ( # Word e.Param#1/8 ) e.ArgsTail#1/0
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    // closed e.Description#1 as range 2
    if( ! refalrts::svar_left( context[4], context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[5], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_Optional<int>::name, context[0], context[1] ) )
      continue;
    context[6] = 0;
    context[7] = 0;
    if( ! refalrts::brackets_left( context[6], context[7], context[0], context[1] ) )
      continue;
    context[8] = 0;
    context[9] = 0;
    if( ! refalrts::brackets_left( context[8], context[9], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_Word<int>::name, context[8], context[9] ) )
      continue;
    // closed e.Long#1 as range 6
    // closed e.Param#1 as range 8
    // closed e.ArgsTail#1 as range 0
    //0: e.ArgsTail#1
    //2: e.Description#1
    //4: s.Num#1
    //5: s.Tag#1
    //6: e.Long#1
    //8: e.Param#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[13], ResolveOpts, "ResolveOpts" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[15] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[16] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[16] );
    refalrts::push_stack( context[12] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    refalrts::link_brackets( context[14], context[15] );
    res = refalrts::splice_elem( res, context[15] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_elem( res, context[14] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_elem( res, context[12] );
    refalrts::link_brackets( context[10], context[11] );
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_evar( res, context[8], context[9] );
    res = refalrts::splice_stvar( res, context[4] );
    res = refalrts::splice_stvar( res, context[5] );
    res = refalrts::splice_elem( res, context[10] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    // ( e.Description#1/2 ) s.Num#1/4 s.Tag#1/5 # Optional ( e.Long#1/6 ) e.ArgsTail#1/0
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    // closed e.Description#1 as range 2
    if( ! refalrts::svar_left( context[4], context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[5], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_Optional<int>::name, context[0], context[1] ) )
      continue;
    context[6] = 0;
    context[7] = 0;
    if( ! refalrts::brackets_left( context[6], context[7], context[0], context[1] ) )
      continue;
    // closed e.Long#1 as range 6
    // closed e.ArgsTail#1 as range 0
    //0: e.ArgsTail#1
    //2: e.Description#1
    //4: s.Num#1
    //5: s.Tag#1
    //6: e.Long#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[9], & ident_NoParam<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[12], ResolveOpts, "ResolveOpts" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[15] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[15] );
    refalrts::push_stack( context[11] );
    res = refalrts::splice_elem( res, context[15] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    refalrts::link_brackets( context[13], context[14] );
    res = refalrts::splice_elem( res, context[14] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_elem( res, context[11] );
    refalrts::link_brackets( context[8], context[10] );
    res = refalrts::splice_elem( res, context[10] );
    res = refalrts::splice_elem( res, context[9] );
    res = refalrts::splice_stvar( res, context[4] );
    res = refalrts::splice_stvar( res, context[5] );
    res = refalrts::splice_elem( res, context[8] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  refalrts::move_left( context[0], context[1] );
  refalrts::move_left( context[0], context[1] );
  refalrts::move_right( context[0], context[1] );
  // ( e.Description#1/2 ) s.Num#1/4 s.Tag#1/5 # None ( e.Long#1/6 ) e.ArgsTail#1/0
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Description#1 as range 2
  if( ! refalrts::svar_left( context[4], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[5], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::ident_left(  & ident_None<int>::name, context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[6] = 0;
  context[7] = 0;
  if( ! refalrts::brackets_left( context[6], context[7], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Long#1 as range 6
  // closed e.ArgsTail#1 as range 0
  //0: e.ArgsTail#1
  //2: e.Description#1
  //4: s.Num#1
  //5: s.Tag#1
  //6: e.Long#1

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_bracket( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[11], ResolveOpts, "ResolveOpts" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[14] ) )
    return refalrts::cNoMemory;
  refalrts::push_stack( context[14] );
  refalrts::push_stack( context[10] );
  res = refalrts::splice_elem( res, context[14] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  refalrts::link_brackets( context[12], context[13] );
  res = refalrts::splice_elem( res, context[13] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_elem( res, context[12] );
  res = refalrts::splice_elem( res, context[11] );
  res = refalrts::splice_elem( res, context[10] );
  refalrts::link_brackets( context[8], context[9] );
  res = refalrts::splice_elem( res, context[9] );
  res = refalrts::splice_stvar( res, context[4] );
  res = refalrts::splice_stvar( res, context[5] );
  res = refalrts::splice_elem( res, context[8] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult ResolveOpts_Short(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { ResolveOpts, "ResolveOpts" },
    { Error, "Error" }
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
    {refalrts::icOnFailGoTo, +35, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Description#1/2 ) s.Num#1/4 s.Tag#1/5 # Required s.Short#1/6 ( ) ( # Word e.Param#1/9 ) e.ArgsTail#1/0
    {refalrts::icBracketLeft, 0, 2, 0},
    // closed e.Description#1 as range 2
    {refalrts::icsVarLeft, 0, 4, 0},
    {refalrts::icsVarLeft, 0, 5, 0},
    {refalrts::icIdentLeft, 0, 5, 0},
    {refalrts::icsVarLeft, 0, 6, 0},
    {refalrts::icBracketLeft, 0, 7, 0},
    {refalrts::icBracketLeft, 0, 9, 0},
    {refalrts::icIdentLeft, 0, 4, 9},
    {refalrts::icEmpty, 0, 0, 7},
    // closed e.Param#1 as range 9
    // closed e.ArgsTail#1 as range 0
    //0: e.ArgsTail#1
    //2: e.Description#1
    //4: s.Num#1
    //5: s.Tag#1
    //6: s.Short#1
    //9: e.Param#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 11},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 12},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 13},
    {refalrts::icFunc, 0, 0, 14},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 15},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 16},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 17},
    {refalrts::icPushStack, 0, 0, 17},
    {refalrts::icPushStack, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icLinkBrackets, 15, 16, 0},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icLinkBrackets, 11, 12, 0},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceEVar, 0, 0, 9},
    {refalrts::icSpliceSTVar, 0, 0, 4},
    {refalrts::icSpliceSTVar, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +38, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Description#1/2 ) s.Num#1/4 s.Tag#1/5 # Required s.Short#1/6 ( ) e.ArgsTail#1/0
    {refalrts::icBracketLeft, 0, 2, 0},
    // closed e.Description#1 as range 2
    {refalrts::icsVarLeft, 0, 4, 0},
    {refalrts::icsVarLeft, 0, 5, 0},
    {refalrts::icIdentLeft, 0, 5, 0},
    {refalrts::icsVarLeft, 0, 6, 0},
    {refalrts::icBracketLeft, 0, 7, 0},
    {refalrts::icEmpty, 0, 0, 7},
    // closed e.ArgsTail#1 as range 0
    //0: e.ArgsTail#1
    //2: e.Description#1
    //4: s.Num#1
    //5: s.Tag#1
    //6: s.Short#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 9},
    {refalrts::icFunc, 0, 1, 10},
    {refalrts::icIdent, 0, 6, 11},
    {refalrts::icChar, 0, '-', 12},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 13},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 14},
    {refalrts::icFunc, 0, 0, 15},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 16},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 17},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 18},
    {refalrts::icPushStack, 0, 0, 18},
    {refalrts::icPushStack, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icLinkBrackets, 16, 17, 0},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icLinkBrackets, 9, 13, 0},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceSTVar, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceSTVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +32, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Description#1/2 ) s.Num#1/4 s.Tag#1/5 # Required s.Short#1/6 ( e.Param#1/7 ) e.ArgsTail#1/0
    {refalrts::icBracketLeft, 0, 2, 0},
    // closed e.Description#1 as range 2
    {refalrts::icsVarLeft, 0, 4, 0},
    {refalrts::icsVarLeft, 0, 5, 0},
    {refalrts::icIdentLeft, 0, 5, 0},
    {refalrts::icsVarLeft, 0, 6, 0},
    {refalrts::icBracketLeft, 0, 7, 0},
    // closed e.Param#1 as range 7
    // closed e.ArgsTail#1 as range 0
    //0: e.ArgsTail#1
    //2: e.Description#1
    //4: s.Num#1
    //5: s.Tag#1
    //6: s.Short#1
    //7: e.Param#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 9},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 10},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 11},
    {refalrts::icFunc, 0, 0, 12},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 13},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 14},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 15},
    {refalrts::icPushStack, 0, 0, 15},
    {refalrts::icPushStack, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icLinkBrackets, 13, 14, 0},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icLinkBrackets, 9, 10, 0},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceEVar, 0, 0, 7},
    {refalrts::icSpliceSTVar, 0, 0, 4},
    {refalrts::icSpliceSTVar, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +35, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Description#1/2 ) s.Num#1/4 s.Tag#1/5 # Optional s.Short#1/6 ( ) ( # Word e.Param#1/9 ) e.ArgsTail#1/0
    {refalrts::icBracketLeft, 0, 2, 0},
    // closed e.Description#1 as range 2
    {refalrts::icsVarLeft, 0, 4, 0},
    {refalrts::icsVarLeft, 0, 5, 0},
    {refalrts::icIdentLeft, 0, 2, 0},
    {refalrts::icsVarLeft, 0, 6, 0},
    {refalrts::icBracketLeft, 0, 7, 0},
    {refalrts::icBracketLeft, 0, 9, 0},
    {refalrts::icIdentLeft, 0, 4, 9},
    {refalrts::icEmpty, 0, 0, 7},
    // closed e.Param#1 as range 9
    // closed e.ArgsTail#1 as range 0
    //0: e.ArgsTail#1
    //2: e.Description#1
    //4: s.Num#1
    //5: s.Tag#1
    //6: s.Short#1
    //9: e.Param#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 11},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 12},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 13},
    {refalrts::icFunc, 0, 0, 14},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 15},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 16},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 17},
    {refalrts::icPushStack, 0, 0, 17},
    {refalrts::icPushStack, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icLinkBrackets, 15, 16, 0},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icLinkBrackets, 11, 12, 0},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceEVar, 0, 0, 9},
    {refalrts::icSpliceSTVar, 0, 0, 4},
    {refalrts::icSpliceSTVar, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +34, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Description#1/2 ) s.Num#1/4 s.Tag#1/5 # Optional s.Short#1/6 ( ) e.ArgsTail#1/0
    {refalrts::icBracketLeft, 0, 2, 0},
    // closed e.Description#1 as range 2
    {refalrts::icsVarLeft, 0, 4, 0},
    {refalrts::icsVarLeft, 0, 5, 0},
    {refalrts::icIdentLeft, 0, 2, 0},
    {refalrts::icsVarLeft, 0, 6, 0},
    {refalrts::icBracketLeft, 0, 7, 0},
    {refalrts::icEmpty, 0, 0, 7},
    // closed e.ArgsTail#1 as range 0
    //0: e.ArgsTail#1
    //2: e.Description#1
    //4: s.Num#1
    //5: s.Tag#1
    //6: s.Short#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 9},
    {refalrts::icIdent, 0, 3, 10},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 11},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 12},
    {refalrts::icFunc, 0, 0, 13},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 14},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 15},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 16},
    {refalrts::icPushStack, 0, 0, 16},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icLinkBrackets, 14, 15, 0},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icLinkBrackets, 9, 11, 0},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceSTVar, 0, 0, 4},
    {refalrts::icSpliceSTVar, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +32, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Description#1/2 ) s.Num#1/4 s.Tag#1/5 # Optional s.Short#1/6 ( e.Param#1/7 ) e.ArgsTail#1/0
    {refalrts::icBracketLeft, 0, 2, 0},
    // closed e.Description#1 as range 2
    {refalrts::icsVarLeft, 0, 4, 0},
    {refalrts::icsVarLeft, 0, 5, 0},
    {refalrts::icIdentLeft, 0, 2, 0},
    {refalrts::icsVarLeft, 0, 6, 0},
    {refalrts::icBracketLeft, 0, 7, 0},
    // closed e.Param#1 as range 7
    // closed e.ArgsTail#1 as range 0
    //0: e.ArgsTail#1
    //2: e.Description#1
    //4: s.Num#1
    //5: s.Tag#1
    //6: s.Short#1
    //7: e.Param#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 9},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 10},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 11},
    {refalrts::icFunc, 0, 0, 12},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 13},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 14},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 15},
    {refalrts::icPushStack, 0, 0, 15},
    {refalrts::icPushStack, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icLinkBrackets, 13, 14, 0},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icLinkBrackets, 9, 10, 0},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceEVar, 0, 0, 7},
    {refalrts::icSpliceSTVar, 0, 0, 4},
    {refalrts::icSpliceSTVar, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Description#1/2 ) s.Num#1/4 s.Tag#1/5 # None s.Short#1/6 ( e.OptTail#1/7 ) e.ArgsTail#1/0
    {refalrts::icBracketLeft, 0, 2, 0},
    // closed e.Description#1 as range 2
    {refalrts::icsVarLeft, 0, 4, 0},
    {refalrts::icsVarLeft, 0, 5, 0},
    {refalrts::icIdentLeft, 0, 1, 0},
    {refalrts::icsVarLeft, 0, 6, 0},
    {refalrts::icBracketLeft, 0, 7, 0},
    // closed e.OptTail#1 as range 7
    // closed e.ArgsTail#1 as range 0
    //0: e.ArgsTail#1
    //2: e.Description#1
    //4: s.Num#1
    //5: s.Tag#1
    //6: s.Short#1
    //7: e.OptTail#1
    //17: s.Num#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 9},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 10},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 11},
    {refalrts::icFunc, 0, 0, 12},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 13},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 14},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 15},
    {refalrts::icIdent, 0, 0, 16},
    {refalrts::icCopySTVar, 17, 4, 0},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 18},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 19},
    {refalrts::icPushStack, 0, 0, 19},
    {refalrts::icPushStack, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icLinkBrackets, 15, 18, 0},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceEVar, 0, 0, 7},
    {refalrts::icSpliceSTVar, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icLinkBrackets, 13, 14, 0},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icLinkBrackets, 9, 10, 0},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceSTVar, 0, 0, 4},
    {refalrts::icSpliceSTVar, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[6];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    // ( e.Description#1/2 ) s.Num#1/4 s.Tag#1/5 # Required s.Short#1/6 ( ) ( # Word e.Param#1/9 ) e.ArgsTail#1/0
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    // closed e.Description#1 as range 2
    if( ! refalrts::svar_left( context[4], context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[5], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_Required<int>::name, context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[6], context[0], context[1] ) )
      continue;
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_left( context[7], context[8], context[0], context[1] ) )
      continue;
    context[9] = 0;
    context[10] = 0;
    if( ! refalrts::brackets_left( context[9], context[10], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_Word<int>::name, context[9], context[10] ) )
      continue;
    if( ! refalrts::empty_seq( context[7], context[8] ) )
      continue;
    // closed e.Param#1 as range 9
    // closed e.ArgsTail#1 as range 0
    //0: e.ArgsTail#1
    //2: e.Description#1
    //4: s.Num#1
    //5: s.Tag#1
    //6: s.Short#1
    //9: e.Param#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[14], ResolveOpts, "ResolveOpts" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[15] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[17] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[17] );
    refalrts::push_stack( context[13] );
    res = refalrts::splice_elem( res, context[17] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    refalrts::link_brackets( context[15], context[16] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_elem( res, context[15] );
    res = refalrts::splice_elem( res, context[14] );
    res = refalrts::splice_elem( res, context[13] );
    refalrts::link_brackets( context[11], context[12] );
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_stvar( res, context[4] );
    res = refalrts::splice_stvar( res, context[5] );
    res = refalrts::splice_elem( res, context[11] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    // ( e.Description#1/2 ) s.Num#1/4 s.Tag#1/5 # Required s.Short#1/6 ( ) e.ArgsTail#1/0
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    // closed e.Description#1 as range 2
    if( ! refalrts::svar_left( context[4], context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[5], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_Required<int>::name, context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[6], context[0], context[1] ) )
      continue;
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_left( context[7], context[8], context[0], context[1] ) )
      continue;
    if( ! refalrts::empty_seq( context[7], context[8] ) )
      continue;
    // closed e.ArgsTail#1 as range 0
    //0: e.ArgsTail#1
    //2: e.Description#1
    //4: s.Num#1
    //5: s.Tag#1
    //6: s.Short#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[9] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[10], Error, "Error" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[11], & ident_NoRequiredParam<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[12], '-' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[15], ResolveOpts, "ResolveOpts" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[17] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[18] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[18] );
    refalrts::push_stack( context[14] );
    res = refalrts::splice_elem( res, context[18] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    refalrts::link_brackets( context[16], context[17] );
    res = refalrts::splice_elem( res, context[17] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_elem( res, context[15] );
    res = refalrts::splice_elem( res, context[14] );
    refalrts::link_brackets( context[9], context[13] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_stvar( res, context[6] );
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_stvar( res, context[4] );
    res = refalrts::splice_elem( res, context[10] );
    res = refalrts::splice_elem( res, context[9] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    // ( e.Description#1/2 ) s.Num#1/4 s.Tag#1/5 # Required s.Short#1/6 ( e.Param#1/7 ) e.ArgsTail#1/0
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    // closed e.Description#1 as range 2
    if( ! refalrts::svar_left( context[4], context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[5], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_Required<int>::name, context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[6], context[0], context[1] ) )
      continue;
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_left( context[7], context[8], context[0], context[1] ) )
      continue;
    // closed e.Param#1 as range 7
    // closed e.ArgsTail#1 as range 0
    //0: e.ArgsTail#1
    //2: e.Description#1
    //4: s.Num#1
    //5: s.Tag#1
    //6: s.Short#1
    //7: e.Param#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[9] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[12], ResolveOpts, "ResolveOpts" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[15] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[15] );
    refalrts::push_stack( context[11] );
    res = refalrts::splice_elem( res, context[15] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    refalrts::link_brackets( context[13], context[14] );
    res = refalrts::splice_elem( res, context[14] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_elem( res, context[11] );
    refalrts::link_brackets( context[9], context[10] );
    res = refalrts::splice_elem( res, context[10] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_stvar( res, context[4] );
    res = refalrts::splice_stvar( res, context[5] );
    res = refalrts::splice_elem( res, context[9] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    // ( e.Description#1/2 ) s.Num#1/4 s.Tag#1/5 # Optional s.Short#1/6 ( ) ( # Word e.Param#1/9 ) e.ArgsTail#1/0
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    // closed e.Description#1 as range 2
    if( ! refalrts::svar_left( context[4], context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[5], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_Optional<int>::name, context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[6], context[0], context[1] ) )
      continue;
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_left( context[7], context[8], context[0], context[1] ) )
      continue;
    context[9] = 0;
    context[10] = 0;
    if( ! refalrts::brackets_left( context[9], context[10], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_Word<int>::name, context[9], context[10] ) )
      continue;
    if( ! refalrts::empty_seq( context[7], context[8] ) )
      continue;
    // closed e.Param#1 as range 9
    // closed e.ArgsTail#1 as range 0
    //0: e.ArgsTail#1
    //2: e.Description#1
    //4: s.Num#1
    //5: s.Tag#1
    //6: s.Short#1
    //9: e.Param#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[14], ResolveOpts, "ResolveOpts" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[15] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[17] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[17] );
    refalrts::push_stack( context[13] );
    res = refalrts::splice_elem( res, context[17] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    refalrts::link_brackets( context[15], context[16] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_elem( res, context[15] );
    res = refalrts::splice_elem( res, context[14] );
    res = refalrts::splice_elem( res, context[13] );
    refalrts::link_brackets( context[11], context[12] );
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_stvar( res, context[4] );
    res = refalrts::splice_stvar( res, context[5] );
    res = refalrts::splice_elem( res, context[11] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    // ( e.Description#1/2 ) s.Num#1/4 s.Tag#1/5 # Optional s.Short#1/6 ( ) e.ArgsTail#1/0
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    // closed e.Description#1 as range 2
    if( ! refalrts::svar_left( context[4], context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[5], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_Optional<int>::name, context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[6], context[0], context[1] ) )
      continue;
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_left( context[7], context[8], context[0], context[1] ) )
      continue;
    if( ! refalrts::empty_seq( context[7], context[8] ) )
      continue;
    // closed e.ArgsTail#1 as range 0
    //0: e.ArgsTail#1
    //2: e.Description#1
    //4: s.Num#1
    //5: s.Tag#1
    //6: s.Short#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[9] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[10], & ident_NoParam<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[13], ResolveOpts, "ResolveOpts" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[15] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[16] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[16] );
    refalrts::push_stack( context[12] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    refalrts::link_brackets( context[14], context[15] );
    res = refalrts::splice_elem( res, context[15] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_elem( res, context[14] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_elem( res, context[12] );
    refalrts::link_brackets( context[9], context[11] );
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_elem( res, context[10] );
    res = refalrts::splice_stvar( res, context[4] );
    res = refalrts::splice_stvar( res, context[5] );
    res = refalrts::splice_elem( res, context[9] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    // ( e.Description#1/2 ) s.Num#1/4 s.Tag#1/5 # Optional s.Short#1/6 ( e.Param#1/7 ) e.ArgsTail#1/0
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    // closed e.Description#1 as range 2
    if( ! refalrts::svar_left( context[4], context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[5], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_Optional<int>::name, context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[6], context[0], context[1] ) )
      continue;
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_left( context[7], context[8], context[0], context[1] ) )
      continue;
    // closed e.Param#1 as range 7
    // closed e.ArgsTail#1 as range 0
    //0: e.ArgsTail#1
    //2: e.Description#1
    //4: s.Num#1
    //5: s.Tag#1
    //6: s.Short#1
    //7: e.Param#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[9] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[12], ResolveOpts, "ResolveOpts" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[15] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[15] );
    refalrts::push_stack( context[11] );
    res = refalrts::splice_elem( res, context[15] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    refalrts::link_brackets( context[13], context[14] );
    res = refalrts::splice_elem( res, context[14] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_elem( res, context[11] );
    refalrts::link_brackets( context[9], context[10] );
    res = refalrts::splice_elem( res, context[10] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_stvar( res, context[4] );
    res = refalrts::splice_stvar( res, context[5] );
    res = refalrts::splice_elem( res, context[9] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  refalrts::move_left( context[0], context[1] );
  refalrts::move_left( context[0], context[1] );
  refalrts::move_right( context[0], context[1] );
  // ( e.Description#1/2 ) s.Num#1/4 s.Tag#1/5 # None s.Short#1/6 ( e.OptTail#1/7 ) e.ArgsTail#1/0
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Description#1 as range 2
  if( ! refalrts::svar_left( context[4], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[5], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::ident_left(  & ident_None<int>::name, context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[6], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[7] = 0;
  context[8] = 0;
  if( ! refalrts::brackets_left( context[7], context[8], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.OptTail#1 as range 7
  // closed e.ArgsTail#1 as range 0
  //0: e.ArgsTail#1
  //2: e.Description#1
  //4: s.Num#1
  //5: s.Tag#1
  //6: s.Short#1
  //7: e.OptTail#1
  //17: s.Num#1

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_bracket( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[12], ResolveOpts, "ResolveOpts" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[16], & ident_Short<int>::name ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_stvar(context[17], context[4]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[18] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[19] ) )
    return refalrts::cNoMemory;
  refalrts::push_stack( context[19] );
  refalrts::push_stack( context[11] );
  res = refalrts::splice_elem( res, context[19] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  refalrts::link_brackets( context[15], context[18] );
  res = refalrts::splice_elem( res, context[18] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_stvar( res, context[17] );
  res = refalrts::splice_elem( res, context[16] );
  res = refalrts::splice_elem( res, context[15] );
  refalrts::link_brackets( context[13], context[14] );
  res = refalrts::splice_elem( res, context[14] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_elem( res, context[13] );
  res = refalrts::splice_elem( res, context[12] );
  res = refalrts::splice_elem( res, context[11] );
  refalrts::link_brackets( context[9], context[10] );
  res = refalrts::splice_elem( res, context[10] );
  res = refalrts::splice_stvar( res, context[4] );
  res = refalrts::splice_stvar( res, context[5] );
  res = refalrts::splice_elem( res, context[9] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult FoldErrors(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 7 elems
  refalrts::Iter context[7];
  refalrts::zeros( context, 7 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { DoFoldErrors, "DoFoldErrors" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    // e.OptionsAndErrors#1/0
    // closed e.OptionsAndErrors#1 as range 0
    //0: e.OptionsAndErrors#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 2},
    {refalrts::icFunc, 0, 0, 3},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 4},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 5},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 6},
    {refalrts::icPushStack, 0, 0, 6},
    {refalrts::icPushStack, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icLinkBrackets, 4, 5, 0},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 3},
    {refalrts::icSpliceElem, 0, 0, 2},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[1];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  context[0] = arg_begin;
  context[1] = arg_end;
  refalrts::move_left( context[0], context[1] );
  refalrts::move_left( context[0], context[1] );
  refalrts::move_right( context[0], context[1] );
  // e.OptionsAndErrors#1/0
  // closed e.OptionsAndErrors#1 as range 0
  //0: e.OptionsAndErrors#1

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_call( context[2] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[3], DoFoldErrors, "DoFoldErrors" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[4] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[5] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[6] ) )
    return refalrts::cNoMemory;
  refalrts::push_stack( context[6] );
  refalrts::push_stack( context[2] );
  res = refalrts::splice_elem( res, context[6] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  refalrts::link_brackets( context[4], context[5] );
  res = refalrts::splice_elem( res, context[5] );
  res = refalrts::splice_elem( res, context[4] );
  res = refalrts::splice_elem( res, context[3] );
  res = refalrts::splice_elem( res, context[2] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult DoFoldErrors(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { DoFoldErrors, "DoFoldErrors" },
    { Error, "Error" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +35, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // & Error s.Num#1/8 s.ErrorCode#1/9 e.Info#1/6 ) e.OptionsAndErrors#1/10
    {refalrts::icBracketLeft, 0, 2, 0},
    // closed e.Errors#1 as range 2
    {refalrts::icEPrepare, 0, 4, 0},
    {refalrts::icEStart, 0, 4, 0},
    {refalrts::icSave, 0, 10, 0},
    {refalrts::icBracketLeft, 0, 6, 10},
    {refalrts::icFuncLeft, 0, 1, 6},
    // closed e.OptionsAndErrors#1 as range 0
    {refalrts::icsVarLeft, 0, 8, 6},
    {refalrts::icsVarLeft, 0, 9, 6},
    // closed e.Info#1 as range 6
    //2: e.Errors#1
    //4: e.Options#1
    //6: e.Info#1
    //8: s.Num#1
    //9: s.ErrorCode#1
    //10: e.OptionsAndErrors#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 12},
    {refalrts::icFunc, 0, 0, 13},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 14},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 15},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 16},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 17},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 18},
    {refalrts::icPushStack, 0, 0, 18},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceEVar, 0, 0, 10},
    {refalrts::icSpliceEVar, 0, 0, 4},
    {refalrts::icLinkBrackets, 14, 17, 0},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icLinkBrackets, 15, 16, 0},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceEVar, 0, 0, 6},
    {refalrts::icSpliceSTVar, 0, 0, 9},
    {refalrts::icSpliceSTVar, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Errors#1/2 ) e.Options#1/0
    {refalrts::icBracketLeft, 0, 2, 0},
    // closed e.Errors#1 as range 2
    // closed e.Options#1 as range 0
    //0: e.Options#1
    //2: e.Errors#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 4},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 5},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icLinkBrackets, 4, 5, 0},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[2];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    // & Error s.Num#1/8 s.ErrorCode#1/9 e.Info#1/6 ) e.OptionsAndErrors#1/10
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    // closed e.Errors#1 as range 2
    context[4] = 0;
    context[5] = 0;
    refalrts::start_e_loop();
    do {
      context[10] = context[0];
      context[11] = context[1];
      context[6] = 0;
      context[7] = 0;
      if( ! refalrts::brackets_left( context[6], context[7], context[10], context[11] ) )
        continue;
      if( ! refalrts::function_left( Error, context[6], context[7] ) )
        continue;
      // closed e.OptionsAndErrors#1 as range 0
      if( ! refalrts::svar_left( context[8], context[6], context[7] ) )
        continue;
      if( ! refalrts::svar_left( context[9], context[6], context[7] ) )
        continue;
      // closed e.Info#1 as range 6
      //2: e.Errors#1
      //4: e.Options#1
      //6: e.Info#1
      //8: s.Num#1
      //9: s.ErrorCode#1
      //10: e.OptionsAndErrors#1

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::alloc_open_call( context[12] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[13], DoFoldErrors, "DoFoldErrors" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[14] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[15] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[16] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[17] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[18] ) )
        return refalrts::cNoMemory;
      refalrts::push_stack( context[18] );
      refalrts::push_stack( context[12] );
      res = refalrts::splice_elem( res, context[18] );
      res = refalrts::splice_evar( res, context[10], context[11] );
      res = refalrts::splice_evar( res, context[4], context[5] );
      refalrts::link_brackets( context[14], context[17] );
      res = refalrts::splice_elem( res, context[17] );
      refalrts::link_brackets( context[15], context[16] );
      res = refalrts::splice_elem( res, context[16] );
      res = refalrts::splice_evar( res, context[6], context[7] );
      res = refalrts::splice_stvar( res, context[9] );
      res = refalrts::splice_stvar( res, context[8] );
      res = refalrts::splice_elem( res, context[15] );
      res = refalrts::splice_evar( res, context[2], context[3] );
      res = refalrts::splice_elem( res, context[14] );
      res = refalrts::splice_elem( res, context[13] );
      res = refalrts::splice_elem( res, context[12] );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[4], context[5], context[0], context[1] ) );
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  refalrts::move_left( context[0], context[1] );
  refalrts::move_left( context[0], context[1] );
  refalrts::move_right( context[0], context[1] );
  // ( e.Errors#1/2 ) e.Options#1/0
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Errors#1 as range 2
  // closed e.Options#1 as range 0
  //0: e.Options#1
  //2: e.Errors#1

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_bracket( context[4] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[5] ) )
    return refalrts::cNoMemory;
  res = refalrts::splice_evar( res, context[0], context[1] );
  refalrts::link_brackets( context[4], context[5] );
  res = refalrts::splice_elem( res, context[5] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_elem( res, context[4] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}


//End of file
//FROM Library
