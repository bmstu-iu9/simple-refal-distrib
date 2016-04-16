// Automatically generated file. Don't edit!
#include "refalrts.h"


extern refalrts::FnResult ParseCommandLine(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult DoParseCommandLine(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult DoParseFileNames(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult DoParseFileNamesOnly(refalrts::Iter arg_begin, refalrts::Iter arg_end);

// identifier #CmdLineError
template <typename SREFAL_PARAM_INT>
struct ident_CmdLineError {
  static const char *name() {
    return "CmdLineError";
  }
};

// identifier #CompileCommand
template <typename SREFAL_PARAM_INT>
struct ident_CompileCommand {
  static const char *name() {
    return "CompileCommand";
  }
};

// identifier #NoCompile
template <typename SREFAL_PARAM_INT>
struct ident_NoCompile {
  static const char *name() {
    return "NoCompile";
  }
};

// identifier #Runtime
template <typename SREFAL_PARAM_INT>
struct ident_Runtime {
  static const char *name() {
    return "Runtime";
  }
};

// identifier #Search
template <typename SREFAL_PARAM_INT>
struct ident_Search {
  static const char *name() {
    return "Search";
  }
};

refalrts::FnResult ParseCommandLine(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { DoParseCommandLine, "DoParseCommandLine" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    // e.Arguments#1/0
    // closed e.Arguments#1 as range 0
    //0: e.Arguments#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 2},
    {refalrts::icFunc, 0, 0, 3},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 4},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 5},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 7},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 8},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icPushStack, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icLinkBrackets, 6, 7, 0},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 6},
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
  // e.Arguments#1/0
  // closed e.Arguments#1 as range 0
  //0: e.Arguments#1

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_call( context[2] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[3], DoParseCommandLine, "DoParseCommandLine" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[4] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[5] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[8] ) )
    return refalrts::cNoMemory;
  refalrts::push_stack( context[8] );
  refalrts::push_stack( context[2] );
  res = refalrts::splice_elem( res, context[8] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  refalrts::link_brackets( context[6], context[7] );
  res = refalrts::splice_elem( res, context[7] );
  res = refalrts::splice_elem( res, context[6] );
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

static refalrts::FnResult DoParseCommandLine(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { DoParseCommandLine, "DoParseCommandLine" },
    { DoParseFileNamesOnly, "DoParseFileNamesOnly" },
    { DoParseFileNames, "DoParseFileNames" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_NoCompile<int>::name,
    & ident_CmdLineError<int>::name,
    & ident_Runtime<int>::name,
    & ident_Search<int>::name,
    & ident_CompileCommand<int>::name
  };
  using refalrts::numbers;
  static const refalrts::StringItem strings[] = {
    {"After option \'-d\' expected find directory", 41},
    {"After option \'-c\' expected C++ compiler command line", 52}
  };
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +39, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.ScannedFiles#1/2 ) ( e.Folders#1/4 ) ( '-c' ) ( e.CompileCommand#1/8 ) e.Files#1/0
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icBracketLeft, 0, 6, 0},
    {refalrts::icCharLeft, 0, static_cast<unsigned char>('-'), 6},
    {refalrts::icCharLeft, 0, static_cast<unsigned char>('c'), 6},
    {refalrts::icBracketLeft, 0, 8, 0},
    {refalrts::icEmpty, 0, 0, 6},
    // closed e.ScannedFiles#1 as range 2
    // closed e.Folders#1 as range 4
    // closed e.CompileCommand#1 as range 8
    // closed e.Files#1 as range 0
    //0: e.Files#1
    //2: e.ScannedFiles#1
    //4: e.Folders#1
    //8: e.CompileCommand#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 10},
    {refalrts::icFunc, 0, 2, 11},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 12},
    {refalrts::icIdent, 0, 4, 13},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 14},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 15},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 16},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 17},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 18},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 19},
    {refalrts::icPushStack, 0, 0, 19},
    {refalrts::icPushStack, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icLinkBrackets, 17, 18, 0},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceEVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icLinkBrackets, 15, 16, 0},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icLinkBrackets, 12, 14, 0},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceEVar, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +19, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.ScannedFiles#1/2 ) ( e.Folders#1/4 ) ( '-c' )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icBracketLeft, 0, 6, 0},
    {refalrts::icCharLeft, 0, static_cast<unsigned char>('-'), 6},
    {refalrts::icCharLeft, 0, static_cast<unsigned char>('c'), 6},
    {refalrts::icEmpty, 0, 0, 6},
    {refalrts::icEmpty, 0, 0, 0},
    // closed e.ScannedFiles#1 as range 2
    // closed e.Folders#1 as range 4
    //2: e.ScannedFiles#1
    //4: e.Folders#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icIdent, 0, 1, 9},
    {refalrts::icString, 0, 1, 10},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 12},
    {refalrts::icLinkBrackets, 8, 12, 0},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceRange, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +39, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.ScannedFiles#1/2 ) ( e.Folders#1/4 ) ( '-d' ) ( e.Directory#1/8 ) e.Options#1/0
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icBracketLeft, 0, 6, 0},
    {refalrts::icCharLeft, 0, static_cast<unsigned char>('-'), 6},
    {refalrts::icCharLeft, 0, static_cast<unsigned char>('d'), 6},
    {refalrts::icBracketLeft, 0, 8, 0},
    {refalrts::icEmpty, 0, 0, 6},
    // closed e.ScannedFiles#1 as range 2
    // closed e.Folders#1 as range 4
    // closed e.Directory#1 as range 8
    // closed e.Options#1 as range 0
    //0: e.Options#1
    //2: e.ScannedFiles#1
    //4: e.Folders#1
    //8: e.Directory#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 10},
    {refalrts::icFunc, 0, 0, 11},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 12},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 13},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 14},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 15},
    {refalrts::icIdent, 0, 3, 16},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 17},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 18},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 19},
    {refalrts::icPushStack, 0, 0, 19},
    {refalrts::icPushStack, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icLinkBrackets, 14, 18, 0},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icLinkBrackets, 15, 17, 0},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceEVar, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceEVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icLinkBrackets, 12, 13, 0},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +19, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.ScannedFiles#1/2 ) ( e.Folders#1/4 ) ( '-d' )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icBracketLeft, 0, 6, 0},
    {refalrts::icCharLeft, 0, static_cast<unsigned char>('-'), 6},
    {refalrts::icCharLeft, 0, static_cast<unsigned char>('d'), 6},
    {refalrts::icEmpty, 0, 0, 6},
    {refalrts::icEmpty, 0, 0, 0},
    // closed e.ScannedFiles#1 as range 2
    // closed e.Folders#1 as range 4
    //2: e.ScannedFiles#1
    //4: e.Folders#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icIdent, 0, 1, 9},
    {refalrts::icString, 0, 0, 10},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 12},
    {refalrts::icLinkBrackets, 8, 12, 0},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceRange, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +39, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.ScannedFiles#1/2 ) ( e.Folders#1/4 ) ( '-D' ) ( e.Directory#1/8 ) e.Options#1/0
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icBracketLeft, 0, 6, 0},
    {refalrts::icCharLeft, 0, static_cast<unsigned char>('-'), 6},
    {refalrts::icCharLeft, 0, static_cast<unsigned char>('D'), 6},
    {refalrts::icBracketLeft, 0, 8, 0},
    {refalrts::icEmpty, 0, 0, 6},
    // closed e.ScannedFiles#1 as range 2
    // closed e.Folders#1 as range 4
    // closed e.Directory#1 as range 8
    // closed e.Options#1 as range 0
    //0: e.Options#1
    //2: e.ScannedFiles#1
    //4: e.Folders#1
    //8: e.Directory#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 10},
    {refalrts::icFunc, 0, 0, 11},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 12},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 13},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 14},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 15},
    {refalrts::icIdent, 0, 2, 16},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 17},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 18},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 19},
    {refalrts::icPushStack, 0, 0, 19},
    {refalrts::icPushStack, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icLinkBrackets, 14, 18, 0},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icLinkBrackets, 15, 17, 0},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceEVar, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceEVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icLinkBrackets, 12, 13, 0},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +19, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.ScannedFiles#1/2 ) ( e.Folders#1/4 ) ( '-D' )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icBracketLeft, 0, 6, 0},
    {refalrts::icCharLeft, 0, static_cast<unsigned char>('-'), 6},
    {refalrts::icCharLeft, 0, static_cast<unsigned char>('D'), 6},
    {refalrts::icEmpty, 0, 0, 6},
    {refalrts::icEmpty, 0, 0, 0},
    // closed e.ScannedFiles#1 as range 2
    // closed e.Folders#1 as range 4
    //2: e.ScannedFiles#1
    //4: e.Folders#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icIdent, 0, 1, 9},
    {refalrts::icString, 0, 0, 10},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 12},
    {refalrts::icLinkBrackets, 8, 12, 0},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceRange, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +37, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.ScannedFiles#1/2 ) ( e.Folders#1/4 ) ( '--' ) e.Options#1/0
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icBracketLeft, 0, 6, 0},
    {refalrts::icCharLeft, 0, static_cast<unsigned char>('-'), 6},
    {refalrts::icCharLeft, 0, static_cast<unsigned char>('-'), 6},
    {refalrts::icEmpty, 0, 0, 6},
    // closed e.ScannedFiles#1 as range 2
    // closed e.Folders#1 as range 4
    // closed e.Options#1 as range 0
    //0: e.Options#1
    //2: e.ScannedFiles#1
    //4: e.Folders#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 8},
    {refalrts::icFunc, 0, 1, 9},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 10},
    {refalrts::icIdent, 0, 0, 11},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 12},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 13},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 14},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 15},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 16},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 17},
    {refalrts::icPushStack, 0, 0, 17},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icLinkBrackets, 15, 16, 0},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceEVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icLinkBrackets, 13, 14, 0},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icLinkBrackets, 10, 12, 0},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +33, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.ScannedFiles#1/2 ) ( e.Folders#1/4 ) ( e.NextFileName#1/6 ) e.Options#1/0
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icBracketLeft, 0, 6, 0},
    // closed e.ScannedFiles#1 as range 2
    // closed e.Folders#1 as range 4
    // closed e.NextFileName#1 as range 6
    // closed e.Options#1 as range 0
    //0: e.Options#1
    //2: e.ScannedFiles#1
    //4: e.Folders#1
    //6: e.NextFileName#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 8},
    {refalrts::icFunc, 0, 0, 9},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 10},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 11},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 12},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 13},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 14},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 15},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 16},
    {refalrts::icPushStack, 0, 0, 16},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icLinkBrackets, 14, 15, 0},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceEVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icLinkBrackets, 10, 13, 0},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icLinkBrackets, 11, 12, 0},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceEVar, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.ScannedFiles#1/2 ) ( e.Folders#1/4 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icEmpty, 0, 0, 0},
    // closed e.ScannedFiles#1 as range 2
    // closed e.Folders#1 as range 4
    //2: e.ScannedFiles#1
    //4: e.Folders#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icIdent, 0, 0, 7},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 8},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 9},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 10},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icLinkBrackets, 9, 10, 0},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceEVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icLinkBrackets, 6, 8, 0},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 6},
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
    // ( e.ScannedFiles#1/2 ) ( e.Folders#1/4 ) ( '-c' ) ( e.CompileCommand#1/8 ) e.Files#1/0
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      continue;
    context[6] = 0;
    context[7] = 0;
    if( ! refalrts::brackets_left( context[6], context[7], context[0], context[1] ) )
      continue;
    if( ! refalrts::char_left( '-', context[6], context[7] ) )
      continue;
    if( ! refalrts::char_left( 'c', context[6], context[7] ) )
      continue;
    context[8] = 0;
    context[9] = 0;
    if( ! refalrts::brackets_left( context[8], context[9], context[0], context[1] ) )
      continue;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      continue;
    // closed e.ScannedFiles#1 as range 2
    // closed e.Folders#1 as range 4
    // closed e.CompileCommand#1 as range 8
    // closed e.Files#1 as range 0
    //0: e.Files#1
    //2: e.ScannedFiles#1
    //4: e.Folders#1
    //8: e.CompileCommand#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[11], DoParseFileNames, "DoParseFileNames" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[13], & ident_CompileCommand<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[15] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[17] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[18] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[19] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[19] );
    refalrts::push_stack( context[10] );
    res = refalrts::splice_elem( res, context[19] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    refalrts::link_brackets( context[17], context[18] );
    res = refalrts::splice_elem( res, context[18] );
    res = refalrts::splice_evar( res, context[4], context[5] );
    res = refalrts::splice_elem( res, context[17] );
    refalrts::link_brackets( context[15], context[16] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_elem( res, context[15] );
    refalrts::link_brackets( context[12], context[14] );
    res = refalrts::splice_elem( res, context[14] );
    res = refalrts::splice_evar( res, context[8], context[9] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_elem( res, context[11] );
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
    // ( e.ScannedFiles#1/2 ) ( e.Folders#1/4 ) ( '-c' )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      continue;
    context[6] = 0;
    context[7] = 0;
    if( ! refalrts::brackets_left( context[6], context[7], context[0], context[1] ) )
      continue;
    if( ! refalrts::char_left( '-', context[6], context[7] ) )
      continue;
    if( ! refalrts::char_left( 'c', context[6], context[7] ) )
      continue;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    // closed e.ScannedFiles#1 as range 2
    // closed e.Folders#1 as range 4
    //2: e.ScannedFiles#1
    //4: e.Folders#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[9], & ident_CmdLineError<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[10], context[11], "After option \'-c\' expected C++ compiler command line", 52 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[12] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[8], context[12] );
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_evar( res, context[10], context[11] );
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
    // ( e.ScannedFiles#1/2 ) ( e.Folders#1/4 ) ( '-d' ) ( e.Directory#1/8 ) e.Options#1/0
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      continue;
    context[6] = 0;
    context[7] = 0;
    if( ! refalrts::brackets_left( context[6], context[7], context[0], context[1] ) )
      continue;
    if( ! refalrts::char_left( '-', context[6], context[7] ) )
      continue;
    if( ! refalrts::char_left( 'd', context[6], context[7] ) )
      continue;
    context[8] = 0;
    context[9] = 0;
    if( ! refalrts::brackets_left( context[8], context[9], context[0], context[1] ) )
      continue;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      continue;
    // closed e.ScannedFiles#1 as range 2
    // closed e.Folders#1 as range 4
    // closed e.Directory#1 as range 8
    // closed e.Options#1 as range 0
    //0: e.Options#1
    //2: e.ScannedFiles#1
    //4: e.Folders#1
    //8: e.Directory#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[11], DoParseCommandLine, "DoParseCommandLine" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[15] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[16], & ident_Search<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[17] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[18] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[19] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[19] );
    refalrts::push_stack( context[10] );
    res = refalrts::splice_elem( res, context[19] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    refalrts::link_brackets( context[14], context[18] );
    res = refalrts::splice_elem( res, context[18] );
    refalrts::link_brackets( context[15], context[17] );
    res = refalrts::splice_elem( res, context[17] );
    res = refalrts::splice_evar( res, context[8], context[9] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_elem( res, context[15] );
    res = refalrts::splice_evar( res, context[4], context[5] );
    res = refalrts::splice_elem( res, context[14] );
    refalrts::link_brackets( context[12], context[13] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_elem( res, context[11] );
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
    // ( e.ScannedFiles#1/2 ) ( e.Folders#1/4 ) ( '-d' )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      continue;
    context[6] = 0;
    context[7] = 0;
    if( ! refalrts::brackets_left( context[6], context[7], context[0], context[1] ) )
      continue;
    if( ! refalrts::char_left( '-', context[6], context[7] ) )
      continue;
    if( ! refalrts::char_left( 'd', context[6], context[7] ) )
      continue;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    // closed e.ScannedFiles#1 as range 2
    // closed e.Folders#1 as range 4
    //2: e.ScannedFiles#1
    //4: e.Folders#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[9], & ident_CmdLineError<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[10], context[11], "After option \'-d\' expected find directory", 41 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[12] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[8], context[12] );
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_evar( res, context[10], context[11] );
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
    // ( e.ScannedFiles#1/2 ) ( e.Folders#1/4 ) ( '-D' ) ( e.Directory#1/8 ) e.Options#1/0
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      continue;
    context[6] = 0;
    context[7] = 0;
    if( ! refalrts::brackets_left( context[6], context[7], context[0], context[1] ) )
      continue;
    if( ! refalrts::char_left( '-', context[6], context[7] ) )
      continue;
    if( ! refalrts::char_left( 'D', context[6], context[7] ) )
      continue;
    context[8] = 0;
    context[9] = 0;
    if( ! refalrts::brackets_left( context[8], context[9], context[0], context[1] ) )
      continue;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      continue;
    // closed e.ScannedFiles#1 as range 2
    // closed e.Folders#1 as range 4
    // closed e.Directory#1 as range 8
    // closed e.Options#1 as range 0
    //0: e.Options#1
    //2: e.ScannedFiles#1
    //4: e.Folders#1
    //8: e.Directory#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[11], DoParseCommandLine, "DoParseCommandLine" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[15] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[16], & ident_Runtime<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[17] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[18] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[19] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[19] );
    refalrts::push_stack( context[10] );
    res = refalrts::splice_elem( res, context[19] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    refalrts::link_brackets( context[14], context[18] );
    res = refalrts::splice_elem( res, context[18] );
    refalrts::link_brackets( context[15], context[17] );
    res = refalrts::splice_elem( res, context[17] );
    res = refalrts::splice_evar( res, context[8], context[9] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_elem( res, context[15] );
    res = refalrts::splice_evar( res, context[4], context[5] );
    res = refalrts::splice_elem( res, context[14] );
    refalrts::link_brackets( context[12], context[13] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_elem( res, context[11] );
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
    // ( e.ScannedFiles#1/2 ) ( e.Folders#1/4 ) ( '-D' )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      continue;
    context[6] = 0;
    context[7] = 0;
    if( ! refalrts::brackets_left( context[6], context[7], context[0], context[1] ) )
      continue;
    if( ! refalrts::char_left( '-', context[6], context[7] ) )
      continue;
    if( ! refalrts::char_left( 'D', context[6], context[7] ) )
      continue;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    // closed e.ScannedFiles#1 as range 2
    // closed e.Folders#1 as range 4
    //2: e.ScannedFiles#1
    //4: e.Folders#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[9], & ident_CmdLineError<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[10], context[11], "After option \'-d\' expected find directory", 41 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[12] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[8], context[12] );
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_evar( res, context[10], context[11] );
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
    // ( e.ScannedFiles#1/2 ) ( e.Folders#1/4 ) ( '--' ) e.Options#1/0
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      continue;
    context[6] = 0;
    context[7] = 0;
    if( ! refalrts::brackets_left( context[6], context[7], context[0], context[1] ) )
      continue;
    if( ! refalrts::char_left( '-', context[6], context[7] ) )
      continue;
    if( ! refalrts::char_left( '-', context[6], context[7] ) )
      continue;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      continue;
    // closed e.ScannedFiles#1 as range 2
    // closed e.Folders#1 as range 4
    // closed e.Options#1 as range 0
    //0: e.Options#1
    //2: e.ScannedFiles#1
    //4: e.Folders#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[9], DoParseFileNamesOnly, "DoParseFileNamesOnly" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[11], & ident_NoCompile<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[15] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[17] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[17] );
    refalrts::push_stack( context[8] );
    res = refalrts::splice_elem( res, context[17] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    refalrts::link_brackets( context[15], context[16] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_evar( res, context[4], context[5] );
    res = refalrts::splice_elem( res, context[15] );
    refalrts::link_brackets( context[13], context[14] );
    res = refalrts::splice_elem( res, context[14] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_elem( res, context[13] );
    refalrts::link_brackets( context[10], context[12] );
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_elem( res, context[11] );
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
    // ( e.ScannedFiles#1/2 ) ( e.Folders#1/4 ) ( e.NextFileName#1/6 ) e.Options#1/0
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      continue;
    context[6] = 0;
    context[7] = 0;
    if( ! refalrts::brackets_left( context[6], context[7], context[0], context[1] ) )
      continue;
    // closed e.ScannedFiles#1 as range 2
    // closed e.Folders#1 as range 4
    // closed e.NextFileName#1 as range 6
    // closed e.Options#1 as range 0
    //0: e.Options#1
    //2: e.ScannedFiles#1
    //4: e.Folders#1
    //6: e.NextFileName#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[9], DoParseCommandLine, "DoParseCommandLine" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[15] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[16] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[16] );
    refalrts::push_stack( context[8] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    refalrts::link_brackets( context[14], context[15] );
    res = refalrts::splice_elem( res, context[15] );
    res = refalrts::splice_evar( res, context[4], context[5] );
    res = refalrts::splice_elem( res, context[14] );
    refalrts::link_brackets( context[10], context[13] );
    res = refalrts::splice_elem( res, context[13] );
    refalrts::link_brackets( context[11], context[12] );
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_evar( res, context[6], context[7] );
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_elem( res, context[10] );
    res = refalrts::splice_elem( res, context[9] );
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
  // ( e.ScannedFiles#1/2 ) ( e.Folders#1/4 )
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[4] = 0;
  context[5] = 0;
  if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.ScannedFiles#1 as range 2
  // closed e.Folders#1 as range 4
  //2: e.ScannedFiles#1
  //4: e.Folders#1

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_bracket( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[7], & ident_NoCompile<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[10] ) )
    return refalrts::cNoMemory;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::link_brackets( context[9], context[10] );
  res = refalrts::splice_elem( res, context[10] );
  res = refalrts::splice_evar( res, context[4], context[5] );
  res = refalrts::splice_elem( res, context[9] );
  refalrts::link_brackets( context[6], context[8] );
  res = refalrts::splice_elem( res, context[8] );
  res = refalrts::splice_elem( res, context[7] );
  res = refalrts::splice_elem( res, context[6] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult DoParseFileNames(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { DoParseFileNames, "DoParseFileNames" },
    { DoParseFileNamesOnly, "DoParseFileNamesOnly" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_CmdLineError<int>::name,
    & ident_Runtime<int>::name,
    & ident_Search<int>::name
  };
  using refalrts::numbers;
  static const refalrts::StringItem strings[] = {
    {"After option \'-d\' expected find directory", 41},
    {"After option \'-c\' expected C++ compiler command line", 52},
    {"Multiple declaration of C++ compiler command line", 49}
  };
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +20, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // t.Compiler#1/2 ( e.ScannedFiles#1/3 ) ( e.Folders#1/5 ) ( '-c' ) ( e.CompileCommand#1/9 ) e.Options#1/0
    {refalrts::ictVarLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 3, 0},
    {refalrts::icBracketLeft, 0, 5, 0},
    {refalrts::icBracketLeft, 0, 7, 0},
    {refalrts::icCharLeft, 0, static_cast<unsigned char>('-'), 7},
    {refalrts::icCharLeft, 0, static_cast<unsigned char>('c'), 7},
    {refalrts::icBracketLeft, 0, 9, 0},
    {refalrts::icEmpty, 0, 0, 7},
    // closed e.ScannedFiles#1 as range 3
    // closed e.Folders#1 as range 5
    // closed e.CompileCommand#1 as range 9
    // closed e.Options#1 as range 0
    //0: e.Options#1
    //2: t.Compiler#1
    //3: e.ScannedFiles#1
    //5: e.Folders#1
    //9: e.CompileCommand#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 11},
    {refalrts::icIdent, 0, 0, 12},
    {refalrts::icString, 0, 2, 13},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 15},
    {refalrts::icLinkBrackets, 11, 15, 0},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceRange, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +20, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // t.Compiler#1/8 ( e.ScannedFiles#1/6 ) ( e.Folders#1/4 ) ( '-c' )
    {refalrts::icBracketRight, 0, 2, 0},
    {refalrts::icCharLeft, 0, static_cast<unsigned char>('-'), 2},
    {refalrts::icCharLeft, 0, static_cast<unsigned char>('c'), 2},
    {refalrts::icBracketRight, 0, 4, 0},
    {refalrts::icBracketRight, 0, 6, 0},
    {refalrts::icEmpty, 0, 0, 2},
    // closed e.ScannedFiles#1 as range 6
    // closed e.Folders#1 as range 4
    {refalrts::ictVarLeft, 0, 8, 0},
    {refalrts::icEmpty, 0, 0, 0},
    //4: e.Folders#1
    //6: e.ScannedFiles#1
    //8: t.Compiler#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 9},
    {refalrts::icIdent, 0, 0, 10},
    {refalrts::icString, 0, 1, 11},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 13},
    {refalrts::icLinkBrackets, 9, 13, 0},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceRange, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +41, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // t.Compiler#1/2 ( e.ScannedFiles#1/3 ) ( e.Folders#1/5 ) ( '-d' ) ( e.Directory#1/9 ) e.Options#1/0
    {refalrts::ictVarLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 3, 0},
    {refalrts::icBracketLeft, 0, 5, 0},
    {refalrts::icBracketLeft, 0, 7, 0},
    {refalrts::icCharLeft, 0, static_cast<unsigned char>('-'), 7},
    {refalrts::icCharLeft, 0, static_cast<unsigned char>('d'), 7},
    {refalrts::icBracketLeft, 0, 9, 0},
    {refalrts::icEmpty, 0, 0, 7},
    // closed e.ScannedFiles#1 as range 3
    // closed e.Folders#1 as range 5
    // closed e.Directory#1 as range 9
    // closed e.Options#1 as range 0
    //0: e.Options#1
    //2: t.Compiler#1
    //3: e.ScannedFiles#1
    //5: e.Folders#1
    //9: e.Directory#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 11},
    {refalrts::icFunc, 0, 0, 12},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 13},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 14},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 15},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 16},
    {refalrts::icIdent, 0, 2, 17},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 18},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 19},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 20},
    {refalrts::icPushStack, 0, 0, 20},
    {refalrts::icPushStack, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icLinkBrackets, 15, 19, 0},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icLinkBrackets, 16, 18, 0},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceEVar, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceEVar, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icLinkBrackets, 13, 14, 0},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceEVar, 0, 0, 3},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceSTVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +20, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // t.Compiler#1/8 ( e.ScannedFiles#1/6 ) ( e.Folders#1/4 ) ( '-d' )
    {refalrts::icBracketRight, 0, 2, 0},
    {refalrts::icCharLeft, 0, static_cast<unsigned char>('-'), 2},
    {refalrts::icCharLeft, 0, static_cast<unsigned char>('d'), 2},
    {refalrts::icBracketRight, 0, 4, 0},
    {refalrts::icBracketRight, 0, 6, 0},
    {refalrts::icEmpty, 0, 0, 2},
    // closed e.ScannedFiles#1 as range 6
    // closed e.Folders#1 as range 4
    {refalrts::ictVarLeft, 0, 8, 0},
    {refalrts::icEmpty, 0, 0, 0},
    //4: e.Folders#1
    //6: e.ScannedFiles#1
    //8: t.Compiler#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 9},
    {refalrts::icIdent, 0, 0, 10},
    {refalrts::icString, 0, 0, 11},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 13},
    {refalrts::icLinkBrackets, 9, 13, 0},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceRange, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +41, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // t.Compiler#1/2 ( e.ScannedFiles#1/3 ) ( e.Folders#1/5 ) ( '-D' ) ( e.Directory#1/9 ) e.Options#1/0
    {refalrts::ictVarLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 3, 0},
    {refalrts::icBracketLeft, 0, 5, 0},
    {refalrts::icBracketLeft, 0, 7, 0},
    {refalrts::icCharLeft, 0, static_cast<unsigned char>('-'), 7},
    {refalrts::icCharLeft, 0, static_cast<unsigned char>('D'), 7},
    {refalrts::icBracketLeft, 0, 9, 0},
    {refalrts::icEmpty, 0, 0, 7},
    // closed e.ScannedFiles#1 as range 3
    // closed e.Folders#1 as range 5
    // closed e.Directory#1 as range 9
    // closed e.Options#1 as range 0
    //0: e.Options#1
    //2: t.Compiler#1
    //3: e.ScannedFiles#1
    //5: e.Folders#1
    //9: e.Directory#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 11},
    {refalrts::icFunc, 0, 0, 12},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 13},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 14},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 15},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 16},
    {refalrts::icIdent, 0, 1, 17},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 18},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 19},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 20},
    {refalrts::icPushStack, 0, 0, 20},
    {refalrts::icPushStack, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icLinkBrackets, 15, 19, 0},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icLinkBrackets, 16, 18, 0},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceEVar, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceEVar, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icLinkBrackets, 13, 14, 0},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceEVar, 0, 0, 3},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceSTVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +20, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // t.Compiler#1/8 ( e.ScannedFiles#1/6 ) ( e.Folders#1/4 ) ( '-D' )
    {refalrts::icBracketRight, 0, 2, 0},
    {refalrts::icCharLeft, 0, static_cast<unsigned char>('-'), 2},
    {refalrts::icCharLeft, 0, static_cast<unsigned char>('D'), 2},
    {refalrts::icBracketRight, 0, 4, 0},
    {refalrts::icBracketRight, 0, 6, 0},
    {refalrts::icEmpty, 0, 0, 2},
    // closed e.ScannedFiles#1 as range 6
    // closed e.Folders#1 as range 4
    {refalrts::ictVarLeft, 0, 8, 0},
    {refalrts::icEmpty, 0, 0, 0},
    //4: e.Folders#1
    //6: e.ScannedFiles#1
    //8: t.Compiler#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 9},
    {refalrts::icIdent, 0, 0, 10},
    {refalrts::icString, 0, 0, 11},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 13},
    {refalrts::icLinkBrackets, 9, 13, 0},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceRange, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +32, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // t.Compiler#1/2 ( e.ScannedFiles#1/3 ) ( e.Folders#1/5 ) ( '--' ) e.Files#1/0
    {refalrts::ictVarLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 3, 0},
    {refalrts::icBracketLeft, 0, 5, 0},
    {refalrts::icBracketLeft, 0, 7, 0},
    {refalrts::icCharLeft, 0, static_cast<unsigned char>('-'), 7},
    {refalrts::icCharLeft, 0, static_cast<unsigned char>('-'), 7},
    {refalrts::icEmpty, 0, 0, 7},
    // closed e.ScannedFiles#1 as range 3
    // closed e.Folders#1 as range 5
    // closed e.Files#1 as range 0
    //0: e.Files#1
    //2: t.Compiler#1
    //3: e.ScannedFiles#1
    //5: e.Folders#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 9},
    {refalrts::icFunc, 0, 1, 10},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 11},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 12},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 13},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 14},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 15},
    {refalrts::icPushStack, 0, 0, 15},
    {refalrts::icPushStack, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icLinkBrackets, 13, 14, 0},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceEVar, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icLinkBrackets, 11, 12, 0},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceEVar, 0, 0, 3},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceSTVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +35, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // t.Compiler#1/2 ( e.ScannedFiles#1/3 ) ( e.Folders#1/5 ) ( e.NextFileName#1/7 ) e.Options#1/0
    {refalrts::ictVarLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 3, 0},
    {refalrts::icBracketLeft, 0, 5, 0},
    {refalrts::icBracketLeft, 0, 7, 0},
    // closed e.ScannedFiles#1 as range 3
    // closed e.Folders#1 as range 5
    // closed e.NextFileName#1 as range 7
    // closed e.Options#1 as range 0
    //0: e.Options#1
    //2: t.Compiler#1
    //3: e.ScannedFiles#1
    //5: e.Folders#1
    //7: e.NextFileName#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 9},
    {refalrts::icFunc, 0, 0, 10},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 11},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 12},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 13},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 14},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 15},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 16},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 17},
    {refalrts::icPushStack, 0, 0, 17},
    {refalrts::icPushStack, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icLinkBrackets, 15, 16, 0},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceEVar, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icLinkBrackets, 11, 14, 0},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icLinkBrackets, 12, 13, 0},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceEVar, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceEVar, 0, 0, 3},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceSTVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // t.Compiler#1/6 ( e.ScannedFiles#1/4 ) ( e.Folders#1/2 )
    {refalrts::icBracketRight, 0, 2, 0},
    {refalrts::icBracketRight, 0, 4, 0},
    // closed e.ScannedFiles#1 as range 4
    // closed e.Folders#1 as range 2
    {refalrts::ictVarLeft, 0, 6, 0},
    {refalrts::icEmpty, 0, 0, 0},
    //2: e.Folders#1
    //4: e.ScannedFiles#1
    //6: t.Compiler#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 7},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 8},
    {refalrts::icSpliceEVar, 0, 0, 4},
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceSTVar, 0, 0, 6},
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
    // t.Compiler#1/2 ( e.ScannedFiles#1/3 ) ( e.Folders#1/5 ) ( '-c' ) ( e.CompileCommand#1/9 ) e.Options#1/0
    if( ! refalrts::tvar_left( context[2], context[0], context[1] ) )
      continue;
    context[3] = 0;
    context[4] = 0;
    if( ! refalrts::brackets_left( context[3], context[4], context[0], context[1] ) )
      continue;
    context[5] = 0;
    context[6] = 0;
    if( ! refalrts::brackets_left( context[5], context[6], context[0], context[1] ) )
      continue;
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_left( context[7], context[8], context[0], context[1] ) )
      continue;
    if( ! refalrts::char_left( '-', context[7], context[8] ) )
      continue;
    if( ! refalrts::char_left( 'c', context[7], context[8] ) )
      continue;
    context[9] = 0;
    context[10] = 0;
    if( ! refalrts::brackets_left( context[9], context[10], context[0], context[1] ) )
      continue;
    if( ! refalrts::empty_seq( context[7], context[8] ) )
      continue;
    // closed e.ScannedFiles#1 as range 3
    // closed e.Folders#1 as range 5
    // closed e.CompileCommand#1 as range 9
    // closed e.Options#1 as range 0
    //0: e.Options#1
    //2: t.Compiler#1
    //3: e.ScannedFiles#1
    //5: e.Folders#1
    //9: e.CompileCommand#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[12], & ident_CmdLineError<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[13], context[14], "Multiple declaration of C++ compiler command line", 49 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[15] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[11], context[15] );
    res = refalrts::splice_elem( res, context[15] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_elem( res, context[12] );
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
    // t.Compiler#1/8 ( e.ScannedFiles#1/6 ) ( e.Folders#1/4 ) ( '-c' )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_right( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::char_left( '-', context[2], context[3] ) )
      continue;
    if( ! refalrts::char_left( 'c', context[2], context[3] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_right( context[4], context[5], context[0], context[1] ) )
      continue;
    context[6] = 0;
    context[7] = 0;
    if( ! refalrts::brackets_right( context[6], context[7], context[0], context[1] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.ScannedFiles#1 as range 6
    // closed e.Folders#1 as range 4
    if( ! refalrts::tvar_left( context[8], context[0], context[1] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    //4: e.Folders#1
    //6: e.ScannedFiles#1
    //8: t.Compiler#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[9] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[10], & ident_CmdLineError<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[11], context[12], "After option \'-c\' expected C++ compiler command line", 52 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[13] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[9], context[13] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_evar( res, context[11], context[12] );
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
    // t.Compiler#1/2 ( e.ScannedFiles#1/3 ) ( e.Folders#1/5 ) ( '-d' ) ( e.Directory#1/9 ) e.Options#1/0
    if( ! refalrts::tvar_left( context[2], context[0], context[1] ) )
      continue;
    context[3] = 0;
    context[4] = 0;
    if( ! refalrts::brackets_left( context[3], context[4], context[0], context[1] ) )
      continue;
    context[5] = 0;
    context[6] = 0;
    if( ! refalrts::brackets_left( context[5], context[6], context[0], context[1] ) )
      continue;
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_left( context[7], context[8], context[0], context[1] ) )
      continue;
    if( ! refalrts::char_left( '-', context[7], context[8] ) )
      continue;
    if( ! refalrts::char_left( 'd', context[7], context[8] ) )
      continue;
    context[9] = 0;
    context[10] = 0;
    if( ! refalrts::brackets_left( context[9], context[10], context[0], context[1] ) )
      continue;
    if( ! refalrts::empty_seq( context[7], context[8] ) )
      continue;
    // closed e.ScannedFiles#1 as range 3
    // closed e.Folders#1 as range 5
    // closed e.Directory#1 as range 9
    // closed e.Options#1 as range 0
    //0: e.Options#1
    //2: t.Compiler#1
    //3: e.ScannedFiles#1
    //5: e.Folders#1
    //9: e.Directory#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[12], DoParseFileNames, "DoParseFileNames" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[15] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[17], & ident_Search<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[18] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[19] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[20] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[20] );
    refalrts::push_stack( context[11] );
    res = refalrts::splice_elem( res, context[20] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    refalrts::link_brackets( context[15], context[19] );
    res = refalrts::splice_elem( res, context[19] );
    refalrts::link_brackets( context[16], context[18] );
    res = refalrts::splice_elem( res, context[18] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_elem( res, context[17] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_elem( res, context[15] );
    refalrts::link_brackets( context[13], context[14] );
    res = refalrts::splice_elem( res, context[14] );
    res = refalrts::splice_evar( res, context[3], context[4] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_stvar( res, context[2] );
    res = refalrts::splice_elem( res, context[12] );
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
    // t.Compiler#1/8 ( e.ScannedFiles#1/6 ) ( e.Folders#1/4 ) ( '-d' )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_right( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::char_left( '-', context[2], context[3] ) )
      continue;
    if( ! refalrts::char_left( 'd', context[2], context[3] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_right( context[4], context[5], context[0], context[1] ) )
      continue;
    context[6] = 0;
    context[7] = 0;
    if( ! refalrts::brackets_right( context[6], context[7], context[0], context[1] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.ScannedFiles#1 as range 6
    // closed e.Folders#1 as range 4
    if( ! refalrts::tvar_left( context[8], context[0], context[1] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    //4: e.Folders#1
    //6: e.ScannedFiles#1
    //8: t.Compiler#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[9] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[10], & ident_CmdLineError<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[11], context[12], "After option \'-d\' expected find directory", 41 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[13] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[9], context[13] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_evar( res, context[11], context[12] );
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
    // t.Compiler#1/2 ( e.ScannedFiles#1/3 ) ( e.Folders#1/5 ) ( '-D' ) ( e.Directory#1/9 ) e.Options#1/0
    if( ! refalrts::tvar_left( context[2], context[0], context[1] ) )
      continue;
    context[3] = 0;
    context[4] = 0;
    if( ! refalrts::brackets_left( context[3], context[4], context[0], context[1] ) )
      continue;
    context[5] = 0;
    context[6] = 0;
    if( ! refalrts::brackets_left( context[5], context[6], context[0], context[1] ) )
      continue;
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_left( context[7], context[8], context[0], context[1] ) )
      continue;
    if( ! refalrts::char_left( '-', context[7], context[8] ) )
      continue;
    if( ! refalrts::char_left( 'D', context[7], context[8] ) )
      continue;
    context[9] = 0;
    context[10] = 0;
    if( ! refalrts::brackets_left( context[9], context[10], context[0], context[1] ) )
      continue;
    if( ! refalrts::empty_seq( context[7], context[8] ) )
      continue;
    // closed e.ScannedFiles#1 as range 3
    // closed e.Folders#1 as range 5
    // closed e.Directory#1 as range 9
    // closed e.Options#1 as range 0
    //0: e.Options#1
    //2: t.Compiler#1
    //3: e.ScannedFiles#1
    //5: e.Folders#1
    //9: e.Directory#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[12], DoParseFileNames, "DoParseFileNames" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[15] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[17], & ident_Runtime<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[18] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[19] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[20] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[20] );
    refalrts::push_stack( context[11] );
    res = refalrts::splice_elem( res, context[20] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    refalrts::link_brackets( context[15], context[19] );
    res = refalrts::splice_elem( res, context[19] );
    refalrts::link_brackets( context[16], context[18] );
    res = refalrts::splice_elem( res, context[18] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_elem( res, context[17] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_elem( res, context[15] );
    refalrts::link_brackets( context[13], context[14] );
    res = refalrts::splice_elem( res, context[14] );
    res = refalrts::splice_evar( res, context[3], context[4] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_stvar( res, context[2] );
    res = refalrts::splice_elem( res, context[12] );
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
    // t.Compiler#1/8 ( e.ScannedFiles#1/6 ) ( e.Folders#1/4 ) ( '-D' )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_right( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::char_left( '-', context[2], context[3] ) )
      continue;
    if( ! refalrts::char_left( 'D', context[2], context[3] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_right( context[4], context[5], context[0], context[1] ) )
      continue;
    context[6] = 0;
    context[7] = 0;
    if( ! refalrts::brackets_right( context[6], context[7], context[0], context[1] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.ScannedFiles#1 as range 6
    // closed e.Folders#1 as range 4
    if( ! refalrts::tvar_left( context[8], context[0], context[1] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    //4: e.Folders#1
    //6: e.ScannedFiles#1
    //8: t.Compiler#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[9] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[10], & ident_CmdLineError<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[11], context[12], "After option \'-d\' expected find directory", 41 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[13] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[9], context[13] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_evar( res, context[11], context[12] );
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
    // t.Compiler#1/2 ( e.ScannedFiles#1/3 ) ( e.Folders#1/5 ) ( '--' ) e.Files#1/0
    if( ! refalrts::tvar_left( context[2], context[0], context[1] ) )
      continue;
    context[3] = 0;
    context[4] = 0;
    if( ! refalrts::brackets_left( context[3], context[4], context[0], context[1] ) )
      continue;
    context[5] = 0;
    context[6] = 0;
    if( ! refalrts::brackets_left( context[5], context[6], context[0], context[1] ) )
      continue;
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_left( context[7], context[8], context[0], context[1] ) )
      continue;
    if( ! refalrts::char_left( '-', context[7], context[8] ) )
      continue;
    if( ! refalrts::char_left( '-', context[7], context[8] ) )
      continue;
    if( ! refalrts::empty_seq( context[7], context[8] ) )
      continue;
    // closed e.ScannedFiles#1 as range 3
    // closed e.Folders#1 as range 5
    // closed e.Files#1 as range 0
    //0: e.Files#1
    //2: t.Compiler#1
    //3: e.ScannedFiles#1
    //5: e.Folders#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[9] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[10], DoParseFileNamesOnly, "DoParseFileNamesOnly" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[15] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[15] );
    refalrts::push_stack( context[9] );
    res = refalrts::splice_elem( res, context[15] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    refalrts::link_brackets( context[13], context[14] );
    res = refalrts::splice_elem( res, context[14] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_elem( res, context[13] );
    refalrts::link_brackets( context[11], context[12] );
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_evar( res, context[3], context[4] );
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_stvar( res, context[2] );
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
    // t.Compiler#1/2 ( e.ScannedFiles#1/3 ) ( e.Folders#1/5 ) ( e.NextFileName#1/7 ) e.Options#1/0
    if( ! refalrts::tvar_left( context[2], context[0], context[1] ) )
      continue;
    context[3] = 0;
    context[4] = 0;
    if( ! refalrts::brackets_left( context[3], context[4], context[0], context[1] ) )
      continue;
    context[5] = 0;
    context[6] = 0;
    if( ! refalrts::brackets_left( context[5], context[6], context[0], context[1] ) )
      continue;
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_left( context[7], context[8], context[0], context[1] ) )
      continue;
    // closed e.ScannedFiles#1 as range 3
    // closed e.Folders#1 as range 5
    // closed e.NextFileName#1 as range 7
    // closed e.Options#1 as range 0
    //0: e.Options#1
    //2: t.Compiler#1
    //3: e.ScannedFiles#1
    //5: e.Folders#1
    //7: e.NextFileName#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[9] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[10], DoParseFileNames, "DoParseFileNames" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[15] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[17] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[17] );
    refalrts::push_stack( context[9] );
    res = refalrts::splice_elem( res, context[17] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    refalrts::link_brackets( context[15], context[16] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_elem( res, context[15] );
    refalrts::link_brackets( context[11], context[14] );
    res = refalrts::splice_elem( res, context[14] );
    refalrts::link_brackets( context[12], context[13] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_evar( res, context[3], context[4] );
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_stvar( res, context[2] );
    res = refalrts::splice_elem( res, context[10] );
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
  // t.Compiler#1/6 ( e.ScannedFiles#1/4 ) ( e.Folders#1/2 )
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_right( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[4] = 0;
  context[5] = 0;
  if( ! refalrts::brackets_right( context[4], context[5], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.ScannedFiles#1 as range 4
  // closed e.Folders#1 as range 2
  if( ! refalrts::tvar_left( context[6], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  //2: e.Folders#1
  //4: e.ScannedFiles#1
  //6: t.Compiler#1

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_bracket( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[8] ) )
    return refalrts::cNoMemory;
  res = refalrts::splice_evar( res, context[4], context[5] );
  refalrts::link_brackets( context[7], context[8] );
  res = refalrts::splice_elem( res, context[8] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_elem( res, context[7] );
  res = refalrts::splice_stvar( res, context[6] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult DoParseFileNamesOnly(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { DoParseFileNamesOnly, "DoParseFileNamesOnly" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +29, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // t.Compiler#1/2 ( e.ScannedFiles#1/3 ) ( e.Folders#1/5 ) ( e.NextFileName#1/7 ) e.Files#1/0
    {refalrts::ictVarLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 3, 0},
    {refalrts::icBracketLeft, 0, 5, 0},
    {refalrts::icBracketLeft, 0, 7, 0},
    // closed e.ScannedFiles#1 as range 3
    // closed e.Folders#1 as range 5
    // closed e.NextFileName#1 as range 7
    // closed e.Files#1 as range 0
    //0: e.Files#1
    //2: t.Compiler#1
    //3: e.ScannedFiles#1
    //5: e.Folders#1
    //7: e.NextFileName#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 9},
    {refalrts::icFunc, 0, 0, 10},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 11},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 12},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 13},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 14},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 15},
    {refalrts::icPushStack, 0, 0, 15},
    {refalrts::icPushStack, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icLinkBrackets, 11, 14, 0},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icLinkBrackets, 12, 13, 0},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceEVar, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceEVar, 0, 0, 3},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceSTVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // t.Compiler#1/6 ( e.ScannedFiles#1/4 ) ( e.Folders#1/2 )
    {refalrts::icBracketRight, 0, 2, 0},
    {refalrts::icBracketRight, 0, 4, 0},
    // closed e.ScannedFiles#1 as range 4
    // closed e.Folders#1 as range 2
    {refalrts::ictVarLeft, 0, 6, 0},
    {refalrts::icEmpty, 0, 0, 0},
    //2: e.Folders#1
    //4: e.ScannedFiles#1
    //6: t.Compiler#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 7},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 8},
    {refalrts::icSpliceEVar, 0, 0, 4},
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceSTVar, 0, 0, 6},
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
    // t.Compiler#1/2 ( e.ScannedFiles#1/3 ) ( e.Folders#1/5 ) ( e.NextFileName#1/7 ) e.Files#1/0
    if( ! refalrts::tvar_left( context[2], context[0], context[1] ) )
      continue;
    context[3] = 0;
    context[4] = 0;
    if( ! refalrts::brackets_left( context[3], context[4], context[0], context[1] ) )
      continue;
    context[5] = 0;
    context[6] = 0;
    if( ! refalrts::brackets_left( context[5], context[6], context[0], context[1] ) )
      continue;
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_left( context[7], context[8], context[0], context[1] ) )
      continue;
    // closed e.ScannedFiles#1 as range 3
    // closed e.Folders#1 as range 5
    // closed e.NextFileName#1 as range 7
    // closed e.Files#1 as range 0
    //0: e.Files#1
    //2: t.Compiler#1
    //3: e.ScannedFiles#1
    //5: e.Folders#1
    //7: e.NextFileName#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[9] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[10], DoParseFileNamesOnly, "DoParseFileNamesOnly" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[15] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[15] );
    refalrts::push_stack( context[9] );
    res = refalrts::splice_elem( res, context[15] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    refalrts::link_brackets( context[11], context[14] );
    res = refalrts::splice_elem( res, context[14] );
    refalrts::link_brackets( context[12], context[13] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_evar( res, context[3], context[4] );
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_stvar( res, context[2] );
    res = refalrts::splice_elem( res, context[10] );
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
  // t.Compiler#1/6 ( e.ScannedFiles#1/4 ) ( e.Folders#1/2 )
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_right( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[4] = 0;
  context[5] = 0;
  if( ! refalrts::brackets_right( context[4], context[5], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.ScannedFiles#1 as range 4
  // closed e.Folders#1 as range 2
  if( ! refalrts::tvar_left( context[6], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  //2: e.Folders#1
  //4: e.ScannedFiles#1
  //6: t.Compiler#1

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_bracket( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[8] ) )
    return refalrts::cNoMemory;
  res = refalrts::splice_evar( res, context[4], context[5] );
  refalrts::link_brackets( context[7], context[8] );
  res = refalrts::splice_elem( res, context[8] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_elem( res, context[7] );
  res = refalrts::splice_stvar( res, context[6] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}


//End of file
