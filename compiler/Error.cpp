// Automatically generated file. Don't edit!
#include "refalrts.h"


extern refalrts::FnResult EL_AddError(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult EL_AddErrorAt(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult EL_AddUnexpected(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult EL_Create(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult EL_Destroy(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Map(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult StrFromInt(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult StrFromToken(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult WriteLine(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult ErrorList(refalrts::Iter arg_begin, refalrts::Iter arg_end);

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

// identifier #TkError
template <typename SREFAL_PARAM_INT>
struct ident_TkError {
  static const char *name() {
    return "TkError";
  }
};

// identifier #TkUnexpected
template <typename SREFAL_PARAM_INT>
struct ident_TkUnexpected {
  static const char *name() {
    return "TkUnexpected";
  }
};

static refalrts::FnResult ErrorList(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::FnResult(refalrts::cRecognitionImpossible | (__LINE__ << 8));
}

refalrts::FnResult EL_Create(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 7 elems
  refalrts::Iter context[7];
  refalrts::zeros( context, 7 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { ErrorList, "ErrorList" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    // e.FileName#1/0
    // closed e.FileName#1 as range 0
    //0: e.FileName#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenADT, 2},
    {refalrts::icFunc, 0, 0, 3},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 4},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 5},
    {refalrts::icBracket, 0, refalrts::ibCloseADT, 6},
    {refalrts::icLinkBrackets, 2, 6, 0},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icLinkBrackets, 4, 5, 0},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icSpliceEVar, 0, 0, 0},
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
  // e.FileName#1/0
  // closed e.FileName#1 as range 0
  //0: e.FileName#1

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_adt( context[2] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[3], ErrorList, "ErrorList" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[4] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[5] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_adt( context[6] ) )
    return refalrts::cNoMemory;
  refalrts::link_brackets( context[2], context[6] );
  res = refalrts::splice_elem( res, context[6] );
  refalrts::link_brackets( context[4], context[5] );
  res = refalrts::splice_elem( res, context[5] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_elem( res, context[4] );
  res = refalrts::splice_elem( res, context[3] );
  res = refalrts::splice_elem( res, context[2] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

refalrts::FnResult EL_AddError(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { ErrorList, "ErrorList" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  static const refalrts::StringItem strings[] = {
    {"  ERROR: ", 9}
  };
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    // [ErrorList ( e.FileName#1/4 ) e.Errors#1/2 ] e.Message#1/0
    {refalrts::icADTLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 2},
    // closed e.FileName#1 as range 4
    // closed e.Errors#1 as range 2
    // closed e.Message#1 as range 0
    //0: e.Message#1
    //2: e.Errors#1
    //4: e.FileName#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenADT, 6},
    {refalrts::icFunc, 0, 0, 7},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 9},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 10},
    {refalrts::icString, 0, 0, 11},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 13},
    {refalrts::icBracket, 0, refalrts::ibCloseADT, 14},
    {refalrts::icLinkBrackets, 6, 14, 0},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icLinkBrackets, 10, 13, 0},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icSpliceRange, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icLinkBrackets, 8, 9, 0},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceEVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 6},
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
  // [ErrorList ( e.FileName#1/4 ) e.Errors#1/2 ] e.Message#1/0
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::adt_left( context[2], context[3], ErrorList, context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[4] = 0;
  context[5] = 0;
  if( ! refalrts::brackets_left( context[4], context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.FileName#1 as range 4
  // closed e.Errors#1 as range 2
  // closed e.Message#1 as range 0
  //0: e.Message#1
  //2: e.Errors#1
  //4: e.FileName#1

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_adt( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[7], ErrorList, "ErrorList" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[11], context[12], "  ERROR: ", 9 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_adt( context[14] ) )
    return refalrts::cNoMemory;
  refalrts::link_brackets( context[6], context[14] );
  res = refalrts::splice_elem( res, context[14] );
  refalrts::link_brackets( context[10], context[13] );
  res = refalrts::splice_elem( res, context[13] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_elem( res, context[10] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::link_brackets( context[8], context[9] );
  res = refalrts::splice_elem( res, context[9] );
  res = refalrts::splice_evar( res, context[4], context[5] );
  res = refalrts::splice_elem( res, context[8] );
  res = refalrts::splice_elem( res, context[7] );
  res = refalrts::splice_elem( res, context[6] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

refalrts::FnResult EL_AddErrorAt(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { StrFromInt, "StrFromInt" },
    { ErrorList, "ErrorList" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  static const refalrts::StringItem strings[] = {
    {":ERROR: ", 8}
  };
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    // [ErrorList ( e.FileName#1/4 ) e.Errors#1/2 ] s.LineNumber#1/6 e.Message#1/0
    {refalrts::icADTLeft, 1, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 2},
    // closed e.FileName#1 as range 4
    // closed e.Errors#1 as range 2
    {refalrts::icsVarLeft, 0, 6, 0},
    // closed e.Message#1 as range 0
    //0: e.Message#1
    //2: e.Errors#1
    //4: e.FileName#1
    //6: s.LineNumber#1
    //12: e.FileName#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenADT, 7},
    {refalrts::icFunc, 0, 1, 8},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 9},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 10},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 11},
    {refalrts::icCopyEVar, 12, 4, 0},
    {refalrts::icChar, 0, ':', 14},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 15},
    {refalrts::icFunc, 0, 0, 16},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 17},
    {refalrts::icString, 0, 0, 18},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 20},
    {refalrts::icBracket, 0, refalrts::ibCloseADT, 21},
    {refalrts::icLinkBrackets, 7, 21, 0},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icLinkBrackets, 11, 20, 0},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icSpliceRange, 0, 0, 18},
    {refalrts::icPushStack, 0, 0, 17},
    {refalrts::icPushStack, 0, 0, 15},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceSTVar, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceEVar, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icLinkBrackets, 9, 10, 0},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceEVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 7},
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
  // [ErrorList ( e.FileName#1/4 ) e.Errors#1/2 ] s.LineNumber#1/6 e.Message#1/0
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::adt_left( context[2], context[3], ErrorList, context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[4] = 0;
  context[5] = 0;
  if( ! refalrts::brackets_left( context[4], context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.FileName#1 as range 4
  // closed e.Errors#1 as range 2
  if( ! refalrts::svar_left( context[6], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Message#1 as range 0
  //0: e.Message#1
  //2: e.Errors#1
  //4: e.FileName#1
  //6: s.LineNumber#1
  //12: e.FileName#1

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_adt( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[8], ErrorList, "ErrorList" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[11] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[12], context[13], context[4], context[5]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[14], ':' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[16], StrFromInt, "StrFromInt" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[17] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[18], context[19], ":ERROR: ", 8 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[20] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_adt( context[21] ) )
    return refalrts::cNoMemory;
  refalrts::link_brackets( context[7], context[21] );
  res = refalrts::splice_elem( res, context[21] );
  refalrts::link_brackets( context[11], context[20] );
  res = refalrts::splice_elem( res, context[20] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[18], context[19] );
  refalrts::push_stack( context[17] );
  refalrts::push_stack( context[15] );
  res = refalrts::splice_elem( res, context[17] );
  res = refalrts::splice_stvar( res, context[6] );
  res = refalrts::splice_elem( res, context[16] );
  res = refalrts::splice_elem( res, context[15] );
  res = refalrts::splice_elem( res, context[14] );
  res = refalrts::splice_evar( res, context[12], context[13] );
  res = refalrts::splice_elem( res, context[11] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::link_brackets( context[9], context[10] );
  res = refalrts::splice_elem( res, context[10] );
  res = refalrts::splice_evar( res, context[4], context[5] );
  res = refalrts::splice_elem( res, context[9] );
  res = refalrts::splice_elem( res, context[8] );
  res = refalrts::splice_elem( res, context[7] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

refalrts::FnResult EL_AddUnexpected(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { StrFromToken, "StrFromToken" },
    { EL_AddErrorAt, "EL_AddErrorAt" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_TkUnexpected<int>::name,
    & ident_TkError<int>::name
  };
  using refalrts::numbers;
  static const refalrts::StringItem strings[] = {
    {", expected ", 11},
    {"Unexpected ", 11},
    {"Unknown characters \"", 20}
  };
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +18, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // t.ErrorList#1/2 ( # TkError s.LineNumber#1/5 e.Message#1/3 ) e.Expected#1/0
    {refalrts::ictVarLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 3, 0},
    {refalrts::icIdentLeft, 0, 1, 3},
    // closed e.Expected#1 as range 0
    {refalrts::icsVarLeft, 0, 5, 3},
    // closed e.Message#1 as range 3
    //0: e.Expected#1
    //2: t.ErrorList#1
    //3: e.Message#1
    //5: s.LineNumber#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 6},
    {refalrts::icFunc, 0, 1, 7},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 8},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icPushStack, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceEVar, 0, 0, 3},
    {refalrts::icSpliceSTVar, 0, 0, 5},
    {refalrts::icSpliceSTVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +22, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // t.ErrorList#1/2 ( # TkUnexpected s.LineNumber#1/5 e.Unexpected#1/3 ) e.Expected#1/0
    {refalrts::ictVarLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 3, 0},
    {refalrts::icIdentLeft, 0, 0, 3},
    // closed e.Expected#1 as range 0
    {refalrts::icsVarLeft, 0, 5, 3},
    // closed e.Unexpected#1 as range 3
    //0: e.Expected#1
    //2: t.ErrorList#1
    //3: e.Unexpected#1
    //5: s.LineNumber#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 6},
    {refalrts::icFunc, 0, 1, 7},
    {refalrts::icString, 0, 2, 8},
    {refalrts::icChar, 0, '\"', 10},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 11},
    {refalrts::icPushStack, 0, 0, 11},
    {refalrts::icPushStack, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceEVar, 0, 0, 3},
    {refalrts::icSpliceRange, 0, 0, 8},
    {refalrts::icSpliceSTVar, 0, 0, 5},
    {refalrts::icSpliceSTVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // t.ErrorList#1/2 ( s.Unexpected#1/5 s.LineNumber#1/6 e.Info#1/3 ) e.Expected#1/0
    {refalrts::ictVarLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 3, 0},
    // closed e.Expected#1 as range 0
    {refalrts::icsVarLeft, 0, 5, 3},
    {refalrts::icsVarLeft, 0, 6, 3},
    // closed e.Info#1 as range 3
    //0: e.Expected#1
    //2: t.ErrorList#1
    //3: e.Info#1
    //5: s.Unexpected#1
    //6: s.LineNumber#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 7},
    {refalrts::icFunc, 0, 1, 8},
    {refalrts::icString, 0, 1, 9},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 11},
    {refalrts::icFunc, 0, 0, 12},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 13},
    {refalrts::icString, 0, 0, 14},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 16},
    {refalrts::icPushStack, 0, 0, 16},
    {refalrts::icPushStack, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icSpliceRange, 0, 0, 14},
    {refalrts::icPushStack, 0, 0, 13},
    {refalrts::icPushStack, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceEVar, 0, 0, 3},
    {refalrts::icSpliceSTVar, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceRange, 0, 0, 9},
    {refalrts::icSpliceSTVar, 0, 0, 6},
    {refalrts::icSpliceSTVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 7},
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
    // t.ErrorList#1/2 ( # TkError s.LineNumber#1/5 e.Message#1/3 ) e.Expected#1/0
    if( ! refalrts::tvar_left( context[2], context[0], context[1] ) )
      continue;
    context[3] = 0;
    context[4] = 0;
    if( ! refalrts::brackets_left( context[3], context[4], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_TkError<int>::name, context[3], context[4] ) )
      continue;
    // closed e.Expected#1 as range 0
    if( ! refalrts::svar_left( context[5], context[3], context[4] ) )
      continue;
    // closed e.Message#1 as range 3
    //0: e.Expected#1
    //2: t.ErrorList#1
    //3: e.Message#1
    //5: s.LineNumber#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[7], EL_AddErrorAt, "EL_AddErrorAt" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[8] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[8] );
    refalrts::push_stack( context[6] );
    res = refalrts::splice_elem( res, context[8] );
    res = refalrts::splice_evar( res, context[3], context[4] );
    res = refalrts::splice_stvar( res, context[5] );
    res = refalrts::splice_stvar( res, context[2] );
    res = refalrts::splice_elem( res, context[7] );
    res = refalrts::splice_elem( res, context[6] );
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
    // t.ErrorList#1/2 ( # TkUnexpected s.LineNumber#1/5 e.Unexpected#1/3 ) e.Expected#1/0
    if( ! refalrts::tvar_left( context[2], context[0], context[1] ) )
      continue;
    context[3] = 0;
    context[4] = 0;
    if( ! refalrts::brackets_left( context[3], context[4], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_TkUnexpected<int>::name, context[3], context[4] ) )
      continue;
    // closed e.Expected#1 as range 0
    if( ! refalrts::svar_left( context[5], context[3], context[4] ) )
      continue;
    // closed e.Unexpected#1 as range 3
    //0: e.Expected#1
    //2: t.ErrorList#1
    //3: e.Unexpected#1
    //5: s.LineNumber#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[7], EL_AddErrorAt, "EL_AddErrorAt" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[8], context[9], "Unknown characters \"", 20 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[10], '\"' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[11] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[11] );
    refalrts::push_stack( context[6] );
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_elem( res, context[10] );
    res = refalrts::splice_evar( res, context[3], context[4] );
    res = refalrts::splice_evar( res, context[8], context[9] );
    res = refalrts::splice_stvar( res, context[5] );
    res = refalrts::splice_stvar( res, context[2] );
    res = refalrts::splice_elem( res, context[7] );
    res = refalrts::splice_elem( res, context[6] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  refalrts::move_left( context[0], context[1] );
  refalrts::move_left( context[0], context[1] );
  refalrts::move_right( context[0], context[1] );
  // t.ErrorList#1/2 ( s.Unexpected#1/5 s.LineNumber#1/6 e.Info#1/3 ) e.Expected#1/0
  if( ! refalrts::tvar_left( context[2], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[3] = 0;
  context[4] = 0;
  if( ! refalrts::brackets_left( context[3], context[4], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Expected#1 as range 0
  if( ! refalrts::svar_left( context[5], context[3], context[4] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[6], context[3], context[4] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Info#1 as range 3
  //0: e.Expected#1
  //2: t.ErrorList#1
  //3: e.Info#1
  //5: s.Unexpected#1
  //6: s.LineNumber#1

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_call( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[8], EL_AddErrorAt, "EL_AddErrorAt" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[9], context[10], "Unexpected ", 11 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[12], StrFromToken, "StrFromToken" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[14], context[15], ", expected ", 11 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[16] ) )
    return refalrts::cNoMemory;
  refalrts::push_stack( context[16] );
  refalrts::push_stack( context[7] );
  res = refalrts::splice_elem( res, context[16] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[14], context[15] );
  refalrts::push_stack( context[13] );
  refalrts::push_stack( context[11] );
  res = refalrts::splice_elem( res, context[13] );
  res = refalrts::splice_evar( res, context[3], context[4] );
  res = refalrts::splice_stvar( res, context[5] );
  res = refalrts::splice_elem( res, context[12] );
  res = refalrts::splice_elem( res, context[11] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_stvar( res, context[6] );
  res = refalrts::splice_stvar( res, context[2] );
  res = refalrts::splice_elem( res, context[8] );
  res = refalrts::splice_elem( res, context[7] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult lambda_EL_Destroy_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 7 elems
  refalrts::Iter context[7];
  refalrts::zeros( context, 7 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { WriteLine, "WriteLine" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Line#2/2 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icEmpty, 0, 0, 0},
    // closed e.Line#2 as range 2
    //2: e.Line#2
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 4},
    {refalrts::icFunc, 0, 0, 5},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 6},
    {refalrts::icPushStack, 0, 0, 6},
    {refalrts::icPushStack, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceEVar, 0, 0, 2},
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
  // ( e.Line#2/2 )
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Line#2 as range 2
  //2: e.Line#2

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_call( context[4] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[5], WriteLine, "WriteLine" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[6] ) )
    return refalrts::cNoMemory;
  refalrts::push_stack( context[6] );
  refalrts::push_stack( context[4] );
  res = refalrts::splice_elem( res, context[6] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_elem( res, context[5] );
  res = refalrts::splice_elem( res, context[4] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

refalrts::FnResult EL_Destroy(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { lambda_EL_Destroy_0, "lambda_EL_Destroy_0" },
    { Map, "Map" },
    { ErrorList, "ErrorList" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_EL_HasErrors<int>::name,
    & ident_EL_NoErrors<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +9, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // [ErrorList ( e.FileName#1/4 ) ]
    {refalrts::icADTLeft, 2, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 2},
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icEmpty, 0, 0, 0},
    // closed e.FileName#1 as range 4
    //4: e.FileName#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icIdent, 0, 1, 6},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // [ErrorList ( e.FileName#1/4 ) e.Errors#1/2 ]
    {refalrts::icADTLeft, 2, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 2},
    {refalrts::icEmpty, 0, 0, 0},
    // closed e.FileName#1 as range 4
    // closed e.Errors#1 as range 2
    //2: e.Errors#1
    //4: e.FileName#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 6},
    {refalrts::icFunc, 0, 1, 7},
    {refalrts::icFunc, 0, 0, 8},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 9},
    {refalrts::icIdent, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icPushStack, 0, 0, 9},
    {refalrts::icPushStack, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 6},
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
    // [ErrorList ( e.FileName#1/4 ) ]
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::adt_left( context[2], context[3], ErrorList, context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    // closed e.FileName#1 as range 4
    //4: e.FileName#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_ident( context[6], & ident_EL_NoErrors<int>::name ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_elem( res, context[6] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  refalrts::move_left( context[0], context[1] );
  refalrts::move_left( context[0], context[1] );
  refalrts::move_right( context[0], context[1] );
  // [ErrorList ( e.FileName#1/4 ) e.Errors#1/2 ]
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::adt_left( context[2], context[3], ErrorList, context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[4] = 0;
  context[5] = 0;
  if( ! refalrts::brackets_left( context[4], context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.FileName#1 as range 4
  // closed e.Errors#1 as range 2
  //2: e.Errors#1
  //4: e.FileName#1

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_call( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[7], Map, "Map" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[8], lambda_EL_Destroy_0, "lambda_EL_Destroy_0" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[10], & ident_EL_HasErrors<int>::name ) )
    return refalrts::cNoMemory;
  res = refalrts::splice_elem( res, context[10] );
  refalrts::push_stack( context[9] );
  refalrts::push_stack( context[6] );
  res = refalrts::splice_elem( res, context[9] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_elem( res, context[8] );
  res = refalrts::splice_elem( res, context[7] );
  res = refalrts::splice_elem( res, context[6] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}


//End of file
