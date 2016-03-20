// Automatically generated file. Don't edit!
#include "refalrts.h"


extern refalrts::FnResult ExistFile(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult FindFiles(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Map(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult AnalyzeBoth_CheckExist(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult AnalyzeFile(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult AnalyzeFile_ByFolders(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult AnalyzeFile_CheckNotFound(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult AnalyzeInFolder(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult AnalyzeOutput_CheckExist(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult AnalyzeSource_CheckExist(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult ExistFile_T(refalrts::Iter arg_begin, refalrts::Iter arg_end);

// identifier #Current
template <typename SREFAL_PARAM_INT>
struct ident_Current {
  static const char *name() {
    return "Current";
  }
};

// identifier #False
template <typename SREFAL_PARAM_INT>
struct ident_False {
  static const char *name() {
    return "False";
  }
};

// identifier #NotFound
template <typename SREFAL_PARAM_INT>
struct ident_NotFound {
  static const char *name() {
    return "NotFound";
  }
};

// identifier #Output
template <typename SREFAL_PARAM_INT>
struct ident_Output {
  static const char *name() {
    return "Output";
  }
};

// identifier #Source
template <typename SREFAL_PARAM_INT>
struct ident_Source {
  static const char *name() {
    return "Source";
  }
};

// identifier #True
template <typename SREFAL_PARAM_INT>
struct ident_True {
  static const char *name() {
    return "True";
  }
};

refalrts::FnResult FindFiles(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { AnalyzeFile_ByFolders, "AnalyzeFile_ByFolders" },
    { Map, "Map" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_Current<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Folders#1/2 ) e.Files#1/0
    {refalrts::icBracketLeft, 0, 2, 0},
    // closed e.Folders#1 as range 2
    // closed e.Files#1 as range 0
    //0: e.Files#1
    //2: e.Folders#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 4},
    {refalrts::icFunc, 0, 1, 5},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icFunc, 0, 0, 7},
    {refalrts::icIdent, 0, 0, 8},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 9},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 10},
    {refalrts::icPushStack, 0, 0, 10},
    {refalrts::icPushStack, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icLinkBrackets, 6, 9, 0},
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
  // ( e.Folders#1/2 ) e.Files#1/0
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Folders#1 as range 2
  // closed e.Files#1 as range 0
  //0: e.Files#1
  //2: e.Folders#1

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_call( context[4] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[5], Map, "Map" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[7], AnalyzeFile_ByFolders, "AnalyzeFile_ByFolders" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[8], & ident_Current<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[10] ) )
    return refalrts::cNoMemory;
  refalrts::push_stack( context[10] );
  refalrts::push_stack( context[4] );
  res = refalrts::splice_elem( res, context[10] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  refalrts::link_brackets( context[6], context[9] );
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

static refalrts::FnResult AnalyzeFile_ByFolders(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { AnalyzeInFolder, "AnalyzeInFolder" },
    { Map, "Map" },
    { AnalyzeFile_CheckNotFound, "AnalyzeFile_CheckNotFound" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    // e.Folders#1/0 ( e.FileName#1/2 )
    {refalrts::icBracketRight, 0, 2, 0},
    // closed e.Folders#1 as range 0
    // closed e.FileName#1 as range 2
    //0: e.Folders#1
    //2: e.FileName#1
    //12: e.FileName#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 4},
    {refalrts::icFunc, 0, 2, 5},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 7},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 8},
    {refalrts::icFunc, 0, 1, 9},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 10},
    {refalrts::icFunc, 0, 0, 11},
    {refalrts::icCopyEVar, 12, 2, 0},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 14},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 15},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 16},
    {refalrts::icPushStack, 0, 0, 16},
    {refalrts::icPushStack, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icPushStack, 0, 0, 15},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icLinkBrackets, 10, 14, 0},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceEVar, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icLinkBrackets, 6, 7, 0},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceEVar, 0, 0, 2},
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
  // e.Folders#1/0 ( e.FileName#1/2 )
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_right( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Folders#1 as range 0
  // closed e.FileName#1 as range 2
  //0: e.Folders#1
  //2: e.FileName#1
  //12: e.FileName#1

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_call( context[4] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[5], AnalyzeFile_CheckNotFound, "AnalyzeFile_CheckNotFound" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[9], Map, "Map" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[11], AnalyzeInFolder, "AnalyzeInFolder" ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[12], context[13], context[2], context[3]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[16] ) )
    return refalrts::cNoMemory;
  refalrts::push_stack( context[16] );
  refalrts::push_stack( context[4] );
  res = refalrts::splice_elem( res, context[16] );
  refalrts::push_stack( context[15] );
  refalrts::push_stack( context[8] );
  res = refalrts::splice_elem( res, context[15] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  refalrts::link_brackets( context[10], context[14] );
  res = refalrts::splice_elem( res, context[14] );
  res = refalrts::splice_evar( res, context[12], context[13] );
  res = refalrts::splice_elem( res, context[11] );
  res = refalrts::splice_elem( res, context[10] );
  res = refalrts::splice_elem( res, context[9] );
  res = refalrts::splice_elem( res, context[8] );
  refalrts::link_brackets( context[6], context[7] );
  res = refalrts::splice_elem( res, context[7] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_elem( res, context[6] );
  res = refalrts::splice_elem( res, context[5] );
  res = refalrts::splice_elem( res, context[4] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult AnalyzeInFolder(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 8 elems
  refalrts::Iter context[8];
  refalrts::zeros( context, 8 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { AnalyzeFile, "AnalyzeFile" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_Current<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +13, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // e.FileName#1/0 # Current
    {refalrts::icIdentRight, 0, 0, 0},
    // closed e.FileName#1 as range 0
    //0: e.FileName#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 2},
    {refalrts::icFunc, 0, 0, 3},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 4},
    {refalrts::icPushStack, 0, 0, 4},
    {refalrts::icPushStack, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icSpliceElem, 0, 0, 3},
    {refalrts::icSpliceElem, 0, 0, 2},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // e.FileName#1/0 ( e.Folder#1/2 )
    {refalrts::icBracketRight, 0, 2, 0},
    // closed e.FileName#1 as range 0
    // closed e.Folder#1 as range 2
    //0: e.FileName#1
    //2: e.Folder#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 4},
    {refalrts::icFunc, 0, 0, 5},
    {refalrts::icChar, 0, '/', 6},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 7},
    {refalrts::icPushStack, 0, 0, 7},
    {refalrts::icPushStack, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceEVar, 0, 0, 0},
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
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    // e.FileName#1/0 # Current
    if( ! refalrts::ident_right(  & ident_Current<int>::name, context[0], context[1] ) )
      continue;
    // closed e.FileName#1 as range 0
    //0: e.FileName#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[2] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[3], AnalyzeFile, "AnalyzeFile" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[4] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[4] );
    refalrts::push_stack( context[2] );
    res = refalrts::splice_elem( res, context[4] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    res = refalrts::splice_elem( res, context[3] );
    res = refalrts::splice_elem( res, context[2] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  refalrts::move_left( context[0], context[1] );
  refalrts::move_left( context[0], context[1] );
  refalrts::move_right( context[0], context[1] );
  // e.FileName#1/0 ( e.Folder#1/2 )
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_right( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.FileName#1 as range 0
  // closed e.Folder#1 as range 2
  //0: e.FileName#1
  //2: e.Folder#1

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_call( context[4] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[5], AnalyzeFile, "AnalyzeFile" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[6], '/' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[7] ) )
    return refalrts::cNoMemory;
  refalrts::push_stack( context[7] );
  refalrts::push_stack( context[4] );
  res = refalrts::splice_elem( res, context[7] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_elem( res, context[6] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_elem( res, context[5] );
  res = refalrts::splice_elem( res, context[4] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult AnalyzeFile_CheckNotFound(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { AnalyzeFile_CheckNotFound, "AnalyzeFile_CheckNotFound" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_NotFound<int>::name,
    & ident_Output<int>::name,
    & ident_Source<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +21, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.FileName#1/2 ) ( # Source ( e.Source#1/6 ) e.Output#1/4 ) e.Variants#1/0
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icIdentLeft, 0, 2, 4},
    {refalrts::icBracketLeft, 0, 6, 4},
    // closed e.FileName#1 as range 2
    // closed e.Source#1 as range 6
    // closed e.Output#1 as range 4
    // closed e.Variants#1 as range 0
    //0: e.Variants#1
    //2: e.FileName#1
    //4: e.Output#1
    //6: e.Source#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icIdent, 0, 2, 9},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 10},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 11},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 12},
    {refalrts::icLinkBrackets, 8, 12, 0},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceEVar, 0, 0, 4},
    {refalrts::icLinkBrackets, 10, 11, 0},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceEVar, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +14, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.FileName#1/2 ) ( # Output e.Output#1/4 ) e.Variants#1/0
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icIdentLeft, 0, 1, 4},
    // closed e.FileName#1 as range 2
    // closed e.Output#1 as range 4
    // closed e.Variants#1 as range 0
    //0: e.Variants#1
    //2: e.FileName#1
    //4: e.Output#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icIdent, 0, 1, 7},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 8},
    {refalrts::icLinkBrackets, 6, 8, 0},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceEVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +21, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.FileName#1/2 ) ( # NotFound e.NotFoundPath#1/4 ) e.Variants#1/0
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icIdentLeft, 0, 0, 4},
    // closed e.FileName#1 as range 2
    // closed e.NotFoundPath#1 as range 4
    // closed e.Variants#1 as range 0
    //0: e.Variants#1
    //2: e.FileName#1
    //4: e.NotFoundPath#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 6},
    {refalrts::icFunc, 0, 0, 7},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 9},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 10},
    {refalrts::icPushStack, 0, 0, 10},
    {refalrts::icPushStack, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icLinkBrackets, 8, 9, 0},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.FileName#1/2 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icEmpty, 0, 0, 0},
    // closed e.FileName#1 as range 2
    //2: e.FileName#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 4},
    {refalrts::icIdent, 0, 0, 5},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 6},
    {refalrts::icLinkBrackets, 4, 6, 0},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[3];
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
    // ( e.FileName#1/2 ) ( # Source ( e.Source#1/6 ) e.Output#1/4 ) e.Variants#1/0
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_Source<int>::name, context[4], context[5] ) )
      continue;
    context[6] = 0;
    context[7] = 0;
    if( ! refalrts::brackets_left( context[6], context[7], context[4], context[5] ) )
      continue;
    // closed e.FileName#1 as range 2
    // closed e.Source#1 as range 6
    // closed e.Output#1 as range 4
    // closed e.Variants#1 as range 0
    //0: e.Variants#1
    //2: e.FileName#1
    //4: e.Output#1
    //6: e.Source#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[9], & ident_Source<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[12] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[8], context[12] );
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_evar( res, context[4], context[5] );
    refalrts::link_brackets( context[10], context[11] );
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_evar( res, context[6], context[7] );
    res = refalrts::splice_elem( res, context[10] );
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
    // ( e.FileName#1/2 ) ( # Output e.Output#1/4 ) e.Variants#1/0
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_Output<int>::name, context[4], context[5] ) )
      continue;
    // closed e.FileName#1 as range 2
    // closed e.Output#1 as range 4
    // closed e.Variants#1 as range 0
    //0: e.Variants#1
    //2: e.FileName#1
    //4: e.Output#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[7], & ident_Output<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[8] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[6], context[8] );
    res = refalrts::splice_elem( res, context[8] );
    res = refalrts::splice_evar( res, context[4], context[5] );
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
    // ( e.FileName#1/2 ) ( # NotFound e.NotFoundPath#1/4 ) e.Variants#1/0
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_NotFound<int>::name, context[4], context[5] ) )
      continue;
    // closed e.FileName#1 as range 2
    // closed e.NotFoundPath#1 as range 4
    // closed e.Variants#1 as range 0
    //0: e.Variants#1
    //2: e.FileName#1
    //4: e.NotFoundPath#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[7], AnalyzeFile_CheckNotFound, "AnalyzeFile_CheckNotFound" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[9] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[10] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[10] );
    refalrts::push_stack( context[6] );
    res = refalrts::splice_elem( res, context[10] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    refalrts::link_brackets( context[8], context[9] );
    res = refalrts::splice_elem( res, context[9] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_elem( res, context[8] );
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
  // ( e.FileName#1/2 )
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.FileName#1 as range 2
  //2: e.FileName#1

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_bracket( context[4] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[5], & ident_NotFound<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[6] ) )
    return refalrts::cNoMemory;
  refalrts::link_brackets( context[4], context[6] );
  res = refalrts::splice_elem( res, context[6] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_elem( res, context[5] );
  res = refalrts::splice_elem( res, context[4] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult ExistFile_T(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 7 elems
  refalrts::Iter context[7];
  refalrts::zeros( context, 7 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { ExistFile, "ExistFile" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    // e.FileName#1/0
    // closed e.FileName#1 as range 0
    //0: e.FileName#1
    //5: e.FileName#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 2},
    {refalrts::icFunc, 0, 0, 3},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 4},
    {refalrts::icCopyEVar, 5, 0, 0},
    {refalrts::icSpliceEVar, 0, 0, 5},
    {refalrts::icPushStack, 0, 0, 4},
    {refalrts::icPushStack, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icSpliceEVar, 0, 0, 0},
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
  //5: e.FileName#1

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_call( context[2] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[3], ExistFile, "ExistFile" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[4] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[5], context[6], context[0], context[1]))
    return refalrts::cNoMemory;
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::push_stack( context[4] );
  refalrts::push_stack( context[2] );
  res = refalrts::splice_elem( res, context[4] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_elem( res, context[3] );
  res = refalrts::splice_elem( res, context[2] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult AnalyzeFile(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { ExistFile_T, "ExistFile_T" },
    { AnalyzeBoth_CheckExist, "AnalyzeBoth_CheckExist" },
    { AnalyzeOutput_CheckExist, "AnalyzeOutput_CheckExist" },
    { AnalyzeSource_CheckExist, "AnalyzeSource_CheckExist" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  static const refalrts::StringItem strings[] = {
    {".cpp", 4},
    {".sref", 5}
  };
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +27, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // e.FileName#1/0 '.sref'
    {refalrts::icCharRight, 0, static_cast<unsigned char>('f'), 0},
    {refalrts::icCharRight, 0, static_cast<unsigned char>('e'), 0},
    {refalrts::icCharRight, 0, static_cast<unsigned char>('r'), 0},
    {refalrts::icCharRight, 0, static_cast<unsigned char>('s'), 0},
    {refalrts::icCharRight, 0, static_cast<unsigned char>('.'), 0},
    // closed e.FileName#1 as range 0
    //0: e.FileName#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 2},
    {refalrts::icFunc, 0, 3, 3},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 4},
    {refalrts::icFunc, 0, 0, 5},
    {refalrts::icString, 0, 1, 6},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 8},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 9},
    {refalrts::icPushStack, 0, 0, 9},
    {refalrts::icPushStack, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icPushStack, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceRange, 0, 0, 6},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 3},
    {refalrts::icSpliceElem, 0, 0, 2},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +26, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // e.FileName#1/0 '.cpp'
    {refalrts::icCharRight, 0, static_cast<unsigned char>('p'), 0},
    {refalrts::icCharRight, 0, static_cast<unsigned char>('p'), 0},
    {refalrts::icCharRight, 0, static_cast<unsigned char>('c'), 0},
    {refalrts::icCharRight, 0, static_cast<unsigned char>('.'), 0},
    // closed e.FileName#1 as range 0
    //0: e.FileName#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 2},
    {refalrts::icFunc, 0, 2, 3},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 4},
    {refalrts::icFunc, 0, 0, 5},
    {refalrts::icString, 0, 0, 6},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 8},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 9},
    {refalrts::icPushStack, 0, 0, 9},
    {refalrts::icPushStack, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icPushStack, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceRange, 0, 0, 6},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 3},
    {refalrts::icSpliceElem, 0, 0, 2},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // e.FileName#1/0
    // closed e.FileName#1 as range 0
    //0: e.FileName#1
    //13: e.FileName#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 2},
    {refalrts::icFunc, 0, 1, 3},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 4},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 5},
    {refalrts::icFunc, 0, 0, 6},
    {refalrts::icString, 0, 1, 7},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 9},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 10},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 11},
    {refalrts::icFunc, 0, 0, 12},
    {refalrts::icCopyEVar, 13, 0, 0},
    {refalrts::icString, 0, 0, 15},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 17},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 18},
    {refalrts::icPushStack, 0, 0, 18},
    {refalrts::icPushStack, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icPushStack, 0, 0, 17},
    {refalrts::icPushStack, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceRange, 0, 0, 15},
    {refalrts::icSpliceEVar, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icLinkBrackets, 4, 10, 0},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icPushStack, 0, 0, 9},
    {refalrts::icPushStack, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceRange, 0, 0, 7},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 3},
    {refalrts::icSpliceElem, 0, 0, 2},
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
    // e.FileName#1/0 '.sref'
    if( ! refalrts::char_right( 'f', context[0], context[1] ) )
      continue;
    if( ! refalrts::char_right( 'e', context[0], context[1] ) )
      continue;
    if( ! refalrts::char_right( 'r', context[0], context[1] ) )
      continue;
    if( ! refalrts::char_right( 's', context[0], context[1] ) )
      continue;
    if( ! refalrts::char_right( '.', context[0], context[1] ) )
      continue;
    // closed e.FileName#1 as range 0
    //0: e.FileName#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[2] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[3], AnalyzeSource_CheckExist, "AnalyzeSource_CheckExist" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[4] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[5], ExistFile_T, "ExistFile_T" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[6], context[7], ".sref", 5 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[9] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[9] );
    refalrts::push_stack( context[2] );
    res = refalrts::splice_elem( res, context[9] );
    refalrts::push_stack( context[8] );
    refalrts::push_stack( context[4] );
    res = refalrts::splice_elem( res, context[8] );
    res = refalrts::splice_evar( res, context[6], context[7] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    res = refalrts::splice_elem( res, context[5] );
    res = refalrts::splice_elem( res, context[4] );
    res = refalrts::splice_elem( res, context[3] );
    res = refalrts::splice_elem( res, context[2] );
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
    // e.FileName#1/0 '.cpp'
    if( ! refalrts::char_right( 'p', context[0], context[1] ) )
      continue;
    if( ! refalrts::char_right( 'p', context[0], context[1] ) )
      continue;
    if( ! refalrts::char_right( 'c', context[0], context[1] ) )
      continue;
    if( ! refalrts::char_right( '.', context[0], context[1] ) )
      continue;
    // closed e.FileName#1 as range 0
    //0: e.FileName#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[2] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[3], AnalyzeOutput_CheckExist, "AnalyzeOutput_CheckExist" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[4] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[5], ExistFile_T, "ExistFile_T" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[6], context[7], ".cpp", 4 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[9] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[9] );
    refalrts::push_stack( context[2] );
    res = refalrts::splice_elem( res, context[9] );
    refalrts::push_stack( context[8] );
    refalrts::push_stack( context[4] );
    res = refalrts::splice_elem( res, context[8] );
    res = refalrts::splice_evar( res, context[6], context[7] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    res = refalrts::splice_elem( res, context[5] );
    res = refalrts::splice_elem( res, context[4] );
    res = refalrts::splice_elem( res, context[3] );
    res = refalrts::splice_elem( res, context[2] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  refalrts::move_left( context[0], context[1] );
  refalrts::move_left( context[0], context[1] );
  refalrts::move_right( context[0], context[1] );
  // e.FileName#1/0
  // closed e.FileName#1 as range 0
  //0: e.FileName#1
  //13: e.FileName#1

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_call( context[2] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[3], AnalyzeBoth_CheckExist, "AnalyzeBoth_CheckExist" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[4] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[5] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[6], ExistFile_T, "ExistFile_T" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[7], context[8], ".sref", 5 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[12], ExistFile_T, "ExistFile_T" ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[13], context[14], context[0], context[1]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[15], context[16], ".cpp", 4 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[17] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[18] ) )
    return refalrts::cNoMemory;
  refalrts::push_stack( context[18] );
  refalrts::push_stack( context[2] );
  res = refalrts::splice_elem( res, context[18] );
  refalrts::push_stack( context[17] );
  refalrts::push_stack( context[11] );
  res = refalrts::splice_elem( res, context[17] );
  res = refalrts::splice_evar( res, context[15], context[16] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_elem( res, context[12] );
  res = refalrts::splice_elem( res, context[11] );
  refalrts::link_brackets( context[4], context[10] );
  res = refalrts::splice_elem( res, context[10] );
  refalrts::push_stack( context[9] );
  refalrts::push_stack( context[5] );
  res = refalrts::splice_elem( res, context[9] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_elem( res, context[6] );
  res = refalrts::splice_elem( res, context[5] );
  res = refalrts::splice_elem( res, context[4] );
  res = refalrts::splice_elem( res, context[3] );
  res = refalrts::splice_elem( res, context[2] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult AnalyzeSource_CheckExist(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
#ifdef INTERPRET
  using refalrts::functions;
  static const refalrts::RefalIdentifier idents[] = {
    & ident_NotFound<int>::name,
    & ident_False<int>::name,
    & ident_Source<int>::name,
    & ident_True<int>::name
  };
  using refalrts::numbers;
  static const refalrts::StringItem strings[] = {
    {".cpp", 4},
    {".sref", 5}
  };
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +28, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // # True e.UnitName#1/0 '.sref'
    {refalrts::icIdentLeft, 0, 3, 0},
    {refalrts::icCharRight, 0, static_cast<unsigned char>('f'), 0},
    {refalrts::icCharRight, 0, static_cast<unsigned char>('e'), 0},
    {refalrts::icCharRight, 0, static_cast<unsigned char>('r'), 0},
    {refalrts::icCharRight, 0, static_cast<unsigned char>('s'), 0},
    {refalrts::icCharRight, 0, static_cast<unsigned char>('.'), 0},
    // closed e.UnitName#1 as range 0
    //0: e.UnitName#1
    //8: e.UnitName#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 2},
    {refalrts::icIdent, 0, 2, 3},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 4},
    {refalrts::icString, 0, 1, 5},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 7},
    {refalrts::icCopyEVar, 8, 0, 0},
    {refalrts::icString, 0, 0, 10},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 12},
    {refalrts::icLinkBrackets, 2, 12, 0},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceRange, 0, 0, 10},
    {refalrts::icSpliceEVar, 0, 0, 8},
    {refalrts::icLinkBrackets, 4, 7, 0},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceRange, 0, 0, 5},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 3},
    {refalrts::icSpliceElem, 0, 0, 2},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // # False e.SourceName#1/0
    {refalrts::icIdentLeft, 0, 1, 0},
    // closed e.SourceName#1 as range 0
    //0: e.SourceName#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 2},
    {refalrts::icIdent, 0, 0, 3},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 4},
    {refalrts::icLinkBrackets, 2, 4, 0},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icSpliceEVar, 0, 0, 0},
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
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    // # True e.UnitName#1/0 '.sref'
    if( ! refalrts::ident_left(  & ident_True<int>::name, context[0], context[1] ) )
      continue;
    if( ! refalrts::char_right( 'f', context[0], context[1] ) )
      continue;
    if( ! refalrts::char_right( 'e', context[0], context[1] ) )
      continue;
    if( ! refalrts::char_right( 'r', context[0], context[1] ) )
      continue;
    if( ! refalrts::char_right( 's', context[0], context[1] ) )
      continue;
    if( ! refalrts::char_right( '.', context[0], context[1] ) )
      continue;
    // closed e.UnitName#1 as range 0
    //0: e.UnitName#1
    //8: e.UnitName#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[2] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[3], & ident_Source<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[4] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[5], context[6], ".sref", 5 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[7] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[8], context[9], context[0], context[1]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[10], context[11], ".cpp", 4 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[12] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[2], context[12] );
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_evar( res, context[10], context[11] );
    res = refalrts::splice_evar( res, context[8], context[9] );
    refalrts::link_brackets( context[4], context[7] );
    res = refalrts::splice_elem( res, context[7] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    res = refalrts::splice_elem( res, context[4] );
    res = refalrts::splice_elem( res, context[3] );
    res = refalrts::splice_elem( res, context[2] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  refalrts::move_left( context[0], context[1] );
  refalrts::move_left( context[0], context[1] );
  refalrts::move_right( context[0], context[1] );
  // # False e.SourceName#1/0
  if( ! refalrts::ident_left(  & ident_False<int>::name, context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.SourceName#1 as range 0
  //0: e.SourceName#1

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_bracket( context[2] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[3], & ident_NotFound<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[4] ) )
    return refalrts::cNoMemory;
  refalrts::link_brackets( context[2], context[4] );
  res = refalrts::splice_elem( res, context[4] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_elem( res, context[3] );
  res = refalrts::splice_elem( res, context[2] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult AnalyzeOutput_CheckExist(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 5 elems
  refalrts::Iter context[5];
  refalrts::zeros( context, 5 );
#ifdef INTERPRET
  using refalrts::functions;
  static const refalrts::RefalIdentifier idents[] = {
    & ident_NotFound<int>::name,
    & ident_False<int>::name,
    & ident_Output<int>::name,
    & ident_True<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +12, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // # True e.OutName#1/0
    {refalrts::icIdentLeft, 0, 3, 0},
    // closed e.OutName#1 as range 0
    //0: e.OutName#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 2},
    {refalrts::icIdent, 0, 2, 3},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 4},
    {refalrts::icLinkBrackets, 2, 4, 0},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icSpliceElem, 0, 0, 3},
    {refalrts::icSpliceElem, 0, 0, 2},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // # False e.OutName#1/0
    {refalrts::icIdentLeft, 0, 1, 0},
    // closed e.OutName#1 as range 0
    //0: e.OutName#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 2},
    {refalrts::icIdent, 0, 0, 3},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 4},
    {refalrts::icLinkBrackets, 2, 4, 0},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icSpliceEVar, 0, 0, 0},
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
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    // # True e.OutName#1/0
    if( ! refalrts::ident_left(  & ident_True<int>::name, context[0], context[1] ) )
      continue;
    // closed e.OutName#1 as range 0
    //0: e.OutName#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[2] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[3], & ident_Output<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[4] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[2], context[4] );
    res = refalrts::splice_elem( res, context[4] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    res = refalrts::splice_elem( res, context[3] );
    res = refalrts::splice_elem( res, context[2] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  refalrts::move_left( context[0], context[1] );
  refalrts::move_left( context[0], context[1] );
  refalrts::move_right( context[0], context[1] );
  // # False e.OutName#1/0
  if( ! refalrts::ident_left(  & ident_False<int>::name, context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.OutName#1 as range 0
  //0: e.OutName#1

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_bracket( context[2] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[3], & ident_NotFound<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[4] ) )
    return refalrts::cNoMemory;
  refalrts::link_brackets( context[2], context[4] );
  res = refalrts::splice_elem( res, context[4] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_elem( res, context[3] );
  res = refalrts::splice_elem( res, context[2] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult AnalyzeBoth_CheckExist(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
#ifdef INTERPRET
  using refalrts::functions;
  static const refalrts::RefalIdentifier idents[] = {
    & ident_NotFound<int>::name,
    & ident_False<int>::name,
    & ident_Output<int>::name,
    & ident_True<int>::name,
    & ident_Source<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +20, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( # True e.SourceName#1/2 ) s.Res#1/4 e.OutName#1/0
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icIdentLeft, 0, 3, 2},
    // closed e.SourceName#1 as range 2
    {refalrts::icsVarLeft, 0, 4, 0},
    // closed e.OutName#1 as range 0
    //0: e.OutName#1
    //2: e.SourceName#1
    //4: s.Res#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 5},
    {refalrts::icIdent, 0, 4, 6},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 7},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 8},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 9},
    {refalrts::icLinkBrackets, 5, 9, 0},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +14, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( # False e.SourceName#1/2 ) # True e.OutName#1/0
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icIdentLeft, 0, 1, 2},
    {refalrts::icIdentLeft, 0, 3, 0},
    // closed e.SourceName#1 as range 2
    // closed e.OutName#1 as range 0
    //0: e.OutName#1
    //2: e.SourceName#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 4},
    {refalrts::icIdent, 0, 2, 5},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 6},
    {refalrts::icLinkBrackets, 4, 6, 0},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( # False e.UnitName#1/2 '.sref' ) # False e.UnitName#1/4 '.cpp'
    {refalrts::icCharRight, 0, static_cast<unsigned char>('p'), 0},
    {refalrts::icCharRight, 0, static_cast<unsigned char>('p'), 0},
    {refalrts::icCharRight, 0, static_cast<unsigned char>('c'), 0},
    {refalrts::icCharRight, 0, static_cast<unsigned char>('.'), 0},
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icIdentLeft, 0, 1, 2},
    {refalrts::icIdentLeft, 0, 1, 0},
    {refalrts::icCharRight, 0, static_cast<unsigned char>('f'), 2},
    {refalrts::icCharRight, 0, static_cast<unsigned char>('e'), 2},
    {refalrts::icCharRight, 0, static_cast<unsigned char>('r'), 2},
    {refalrts::icCharRight, 0, static_cast<unsigned char>('s'), 2},
    {refalrts::icCharRight, 0, static_cast<unsigned char>('.'), 2},
    // closed e.UnitName#1 as range 2
    {refalrts::iceRepeatLeft, 4, 2, 0},
    {refalrts::icEmpty, 0, 0, 0},
    //2: e.UnitName#1
    //4: e.UnitName#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icIdent, 0, 0, 7},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 8},
    {refalrts::icLinkBrackets, 6, 8, 0},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 6},
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
    // ( # True e.SourceName#1/2 ) s.Res#1/4 e.OutName#1/0
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_True<int>::name, context[2], context[3] ) )
      continue;
    // closed e.SourceName#1 as range 2
    if( ! refalrts::svar_left( context[4], context[0], context[1] ) )
      continue;
    // closed e.OutName#1 as range 0
    //0: e.OutName#1
    //2: e.SourceName#1
    //4: s.Res#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[5] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[6], & ident_Source<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[7] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[9] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[5], context[9] );
    res = refalrts::splice_elem( res, context[9] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    refalrts::link_brackets( context[7], context[8] );
    res = refalrts::splice_elem( res, context[8] );
    res = refalrts::splice_evar( res, context[2], context[3] );
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
    // ( # False e.SourceName#1/2 ) # True e.OutName#1/0
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_False<int>::name, context[2], context[3] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_True<int>::name, context[0], context[1] ) )
      continue;
    // closed e.SourceName#1 as range 2
    // closed e.OutName#1 as range 0
    //0: e.OutName#1
    //2: e.SourceName#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[4] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[5], & ident_Output<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[6] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[4], context[6] );
    res = refalrts::splice_elem( res, context[6] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    res = refalrts::splice_elem( res, context[5] );
    res = refalrts::splice_elem( res, context[4] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  refalrts::move_left( context[0], context[1] );
  refalrts::move_left( context[0], context[1] );
  refalrts::move_right( context[0], context[1] );
  // ( # False e.UnitName#1/2 '.sref' ) # False e.UnitName#1/4 '.cpp'
  if( ! refalrts::char_right( 'p', context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::char_right( 'p', context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::char_right( 'c', context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::char_right( '.', context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::ident_left(  & ident_False<int>::name, context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::ident_left(  & ident_False<int>::name, context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::char_right( 'f', context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::char_right( 'e', context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::char_right( 'r', context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::char_right( 's', context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::char_right( '.', context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.UnitName#1 as range 2
  if( ! refalrts::repeated_evar_left( context[4], context[5], context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  //2: e.UnitName#1
  //4: e.UnitName#1

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_bracket( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[7], & ident_NotFound<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[8] ) )
    return refalrts::cNoMemory;
  refalrts::link_brackets( context[6], context[8] );
  res = refalrts::splice_elem( res, context[8] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_elem( res, context[7] );
  res = refalrts::splice_elem( res, context[6] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}


//End of file
