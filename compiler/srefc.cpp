// Automatically generated file. Don't edit!
#include "refalrts.h"


extern refalrts::FnResult ArgList(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult CompileFile(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult DelAccumulator(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Exit(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Fetch(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult FindFiles(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Go(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Inc(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult LoadFile(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Map(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult MapReduce(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult ParseCommandLine(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult SaveFile(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Seq(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult StrFromInt(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult System(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult WriteLine(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult DoGetFileName(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult FindFiles_Compilers(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult ForEach(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult GetFileName(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult GetFileName_Aux(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult Link(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult Lower(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult Main(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult PrintNotFound(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult RenameFiles(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult Renumerate(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult RestoreName(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult ScanCollisions(refalrts::Iter arg_begin, refalrts::Iter arg_end);

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

// identifier #CompileList
template <typename SREFAL_PARAM_INT>
struct ident_CompileList {
  static const char *name() {
    return "CompileList";
  }
};

// identifier #CompileToTarget
template <typename SREFAL_PARAM_INT>
struct ident_CompileToTarget {
  static const char *name() {
    return "CompileToTarget";
  }
};

// identifier #ErrorFile
template <typename SREFAL_PARAM_INT>
struct ident_ErrorFile {
  static const char *name() {
    return "ErrorFile";
  }
};

// identifier #Fails
template <typename SREFAL_PARAM_INT>
struct ident_Fails {
  static const char *name() {
    return "Fails";
  }
};

// identifier #None
template <typename SREFAL_PARAM_INT>
struct ident_None {
  static const char *name() {
    return "None";
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

// identifier #Success
template <typename SREFAL_PARAM_INT>
struct ident_Success {
  static const char *name() {
    return "Success";
  }
};

refalrts::FnResult Go(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 8 elems
  refalrts::Iter context[8];
  refalrts::zeros( context, 8 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { ArgList, "ArgList" },
    { Main, "Main" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    //
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 2},
    {refalrts::icFunc, 0, 1, 3},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 4},
    {refalrts::icFunc, 0, 0, 5},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 6},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 7},
    {refalrts::icPushStack, 0, 0, 7},
    {refalrts::icPushStack, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icPushStack, 0, 0, 6},
    {refalrts::icPushStack, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 6},
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
  //
  if( ! refalrts::empty_seq( context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_call( context[2] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[3], Main, "Main" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[4] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[5], ArgList, "ArgList" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[7] ) )
    return refalrts::cNoMemory;
  refalrts::push_stack( context[7] );
  refalrts::push_stack( context[2] );
  res = refalrts::splice_elem( res, context[7] );
  refalrts::push_stack( context[6] );
  refalrts::push_stack( context[4] );
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

static refalrts::FnResult Main(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { ParseCommandLine, "ParseCommandLine" },
    { FindFiles_Compilers, "FindFiles_Compilers" },
    { LoadFile, "LoadFile" },
    { Main, "Main" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +30, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.ProgName#1/2 ) ( '@' e.Config#1/4 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icCharLeft, 0, static_cast<unsigned char>('@'), 4},
    {refalrts::icEmpty, 0, 0, 0},
    // closed e.ProgName#1 as range 2
    // closed e.Config#1 as range 4
    //2: e.ProgName#1
    //4: e.Config#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 6},
    {refalrts::icFunc, 0, 3, 7},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 9},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 10},
    {refalrts::icFunc, 0, 2, 11},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 12},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 13},
    {refalrts::icPushStack, 0, 0, 13},
    {refalrts::icPushStack, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icPushStack, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceEVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icLinkBrackets, 8, 9, 0},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.ProgName#1/2 ) e.Arguments#1/0
    {refalrts::icBracketLeft, 0, 2, 0},
    // closed e.ProgName#1 as range 2
    // closed e.Arguments#1 as range 0
    //0: e.Arguments#1
    //2: e.ProgName#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 4},
    {refalrts::icFunc, 0, 1, 5},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 6},
    {refalrts::icFunc, 0, 0, 7},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 8},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 9},
    {refalrts::icPushStack, 0, 0, 9},
    {refalrts::icPushStack, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icPushStack, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceEVar, 0, 0, 0},
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
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    // ( e.ProgName#1/2 ) ( '@' e.Config#1/4 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      continue;
    if( ! refalrts::char_left( '@', context[4], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    // closed e.ProgName#1 as range 2
    // closed e.Config#1 as range 4
    //2: e.ProgName#1
    //4: e.Config#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[7], Main, "Main" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[9] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[11], LoadFile, "LoadFile" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[13] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[13] );
    refalrts::push_stack( context[6] );
    res = refalrts::splice_elem( res, context[13] );
    refalrts::push_stack( context[12] );
    refalrts::push_stack( context[10] );
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_evar( res, context[4], context[5] );
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_elem( res, context[10] );
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
  // ( e.ProgName#1/2 ) e.Arguments#1/0
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.ProgName#1 as range 2
  // closed e.Arguments#1 as range 0
  //0: e.Arguments#1
  //2: e.ProgName#1

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_call( context[4] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[5], FindFiles_Compilers, "FindFiles_Compilers" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[7], ParseCommandLine, "ParseCommandLine" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[9] ) )
    return refalrts::cNoMemory;
  refalrts::push_stack( context[9] );
  refalrts::push_stack( context[4] );
  res = refalrts::splice_elem( res, context[9] );
  refalrts::push_stack( context[8] );
  refalrts::push_stack( context[6] );
  res = refalrts::splice_elem( res, context[8] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_elem( res, context[7] );
  res = refalrts::splice_elem( res, context[6] );
  res = refalrts::splice_elem( res, context[5] );
  res = refalrts::splice_elem( res, context[4] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult lambda_FindFiles_Compilers_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 4 elems
  refalrts::Iter context[4];
  refalrts::zeros( context, 4 );
#ifdef INTERPRET
  using refalrts::functions;
  static const refalrts::RefalIdentifier idents[] = {
    & ident_Fails<int>::name,
    & ident_Success<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +10, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // # Success e.OutputName#4/0
    {refalrts::icIdentLeft, 0, 1, 0},
    // closed e.OutputName#4 as range 0
    //0: e.OutputName#4
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 2},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 3},
    {refalrts::icLinkBrackets, 2, 3, 0},
    {refalrts::icSpliceElem, 0, 0, 3},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icSpliceElem, 0, 0, 2},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // # Fails
    {refalrts::icIdentLeft, 0, 0, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icIdent, 0, 0, 2},
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
    // # Success e.OutputName#4/0
    if( ! refalrts::ident_left(  & ident_Success<int>::name, context[0], context[1] ) )
      continue;
    // closed e.OutputName#4 as range 0
    //0: e.OutputName#4

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[2] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[3] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[2], context[3] );
    res = refalrts::splice_elem( res, context[3] );
    res = refalrts::splice_evar( res, context[0], context[1] );
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
  // # Fails
  if( ! refalrts::ident_left(  & ident_Fails<int>::name, context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_ident( context[2], & ident_Fails<int>::name ) )
    return refalrts::cNoMemory;
  res = refalrts::splice_elem( res, context[2] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult lambda_FindFiles_Compilers_1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 23 elems
  refalrts::Iter context[23];
  refalrts::zeros( context, 23 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { lambda_FindFiles_Compilers_0, "lambda_FindFiles_Compilers_0" },
    { CompileFile, "CompileFile" },
    { Fetch, "Fetch" },
    { WriteLine, "WriteLine" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_Source<int>::name,
    & ident_Output<int>::name
  };
  using refalrts::numbers;
  static const refalrts::StringItem strings[] = {
    {"*Compiling ", 11},
    {"+Linking ", 9}
  };
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +24, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( # Output e.OutputName#3/2 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icIdentLeft, 0, 1, 2},
    {refalrts::icEmpty, 0, 0, 0},
    // closed e.OutputName#3 as range 2
    //2: e.OutputName#3
    //10: e.OutputName#3
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 4},
    {refalrts::icFunc, 0, 3, 5},
    {refalrts::icString, 0, 1, 6},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 8},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 9},
    {refalrts::icCopyEVar, 10, 2, 0},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 12},
    {refalrts::icLinkBrackets, 9, 12, 0},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceEVar, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icPushStack, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceRange, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( # Source ( e.Source#3/4 ) e.OutputName#3/2 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icIdentLeft, 0, 0, 2},
    {refalrts::icBracketLeft, 0, 4, 2},
    {refalrts::icEmpty, 0, 0, 0},
    // closed e.Source#3 as range 4
    // closed e.OutputName#3 as range 2
    //2: e.OutputName#3
    //4: e.Source#3
    //17: e.Source#3
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 6},
    {refalrts::icFunc, 0, 3, 7},
    {refalrts::icString, 0, 0, 8},
    {refalrts::icChar, 0, ':', 10},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 11},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 12},
    {refalrts::icFunc, 0, 2, 13},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 14},
    {refalrts::icFunc, 0, 1, 15},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 16},
    {refalrts::icCopyEVar, 17, 4, 0},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 19},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 20},
    {refalrts::icFunc, 0, 0, 21},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 22},
    {refalrts::icPushStack, 0, 0, 22},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icPushStack, 0, 0, 20},
    {refalrts::icPushStack, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icLinkBrackets, 16, 19, 0},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceEVar, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icPushStack, 0, 0, 11},
    {refalrts::icPushStack, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceEVar, 0, 0, 4},
    {refalrts::icSpliceRange, 0, 0, 8},
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
    // ( # Output e.OutputName#3/2 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_Output<int>::name, context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    // closed e.OutputName#3 as range 2
    //2: e.OutputName#3
    //10: e.OutputName#3

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[4] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[5], WriteLine, "WriteLine" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[6], context[7], "+Linking ", 9 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[9] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[10], context[11], context[2], context[3]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[12] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[9], context[12] );
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_evar( res, context[10], context[11] );
    res = refalrts::splice_elem( res, context[9] );
    refalrts::push_stack( context[8] );
    refalrts::push_stack( context[4] );
    res = refalrts::splice_elem( res, context[8] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[6], context[7] );
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
  // ( # Source ( e.Source#3/4 ) e.OutputName#3/2 )
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::ident_left(  & ident_Source<int>::name, context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[4] = 0;
  context[5] = 0;
  if( ! refalrts::brackets_left( context[4], context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Source#3 as range 4
  // closed e.OutputName#3 as range 2
  //2: e.OutputName#3
  //4: e.Source#3
  //17: e.Source#3

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_call( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[7], WriteLine, "WriteLine" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[8], context[9], "*Compiling ", 11 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[10], ':' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[13], Fetch, "Fetch" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[15], CompileFile, "CompileFile" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[16] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[17], context[18], context[4], context[5]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[19] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[20] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[21], lambda_FindFiles_Compilers_0, "lambda_FindFiles_Compilers_0" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[22] ) )
    return refalrts::cNoMemory;
  refalrts::push_stack( context[22] );
  refalrts::push_stack( context[12] );
  res = refalrts::splice_elem( res, context[22] );
  res = refalrts::splice_elem( res, context[21] );
  refalrts::push_stack( context[20] );
  refalrts::push_stack( context[14] );
  res = refalrts::splice_elem( res, context[20] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::link_brackets( context[16], context[19] );
  res = refalrts::splice_elem( res, context[19] );
  res = refalrts::splice_evar( res, context[17], context[18] );
  res = refalrts::splice_elem( res, context[16] );
  res = refalrts::splice_elem( res, context[15] );
  res = refalrts::splice_elem( res, context[14] );
  res = refalrts::splice_elem( res, context[13] );
  res = refalrts::splice_elem( res, context[12] );
  refalrts::push_stack( context[11] );
  refalrts::push_stack( context[6] );
  res = refalrts::splice_elem( res, context[11] );
  res = refalrts::splice_elem( res, context[10] );
  res = refalrts::splice_evar( res, context[4], context[5] );
  res = refalrts::splice_evar( res, context[8], context[9] );
  res = refalrts::splice_elem( res, context[7] );
  res = refalrts::splice_elem( res, context[6] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult lambda_FindFiles_Compilers_2(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 7 elems
  refalrts::Iter context[7];
  refalrts::zeros( context, 7 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { SaveFile, "SaveFile" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_None<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +5, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // # None
    {refalrts::icIdentLeft, 0, 0, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // e.ErrorFileName#4/0
    // closed e.ErrorFileName#4 as range 0
    //0: e.ErrorFileName#4
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 2},
    {refalrts::icFunc, 0, 0, 3},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 4},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 5},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 6},
    {refalrts::icPushStack, 0, 0, 6},
    {refalrts::icPushStack, 0, 0, 2},
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
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    // # None
    if( ! refalrts::ident_left(  & ident_None<int>::name, context[0], context[1] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  refalrts::move_left( context[0], context[1] );
  refalrts::move_left( context[0], context[1] );
  refalrts::move_right( context[0], context[1] );
  // e.ErrorFileName#4/0
  // closed e.ErrorFileName#4 as range 0
  //0: e.ErrorFileName#4

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_call( context[2] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[3], SaveFile, "SaveFile" ) )
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

static refalrts::FnResult lambda_FindFiles_Compilers_3(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { WriteLine, "WriteLine" },
    { Link, "Link" },
    { lambda_FindFiles_Compilers_2, "lambda_FindFiles_Compilers_2" },
    { Fetch, "Fetch" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_ErrorFile<int>::name,
    & ident_Fails<int>::name
  };
  using refalrts::numbers;
  static const refalrts::StringItem strings[] = {
    {"** Compilation successed **", 27}
  };
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +27, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // s.CommandLineInfo#1/2 e.Outputs_B#3/3 # Fails e.Outputs_E#3/5
    {refalrts::icsVarLeft, 0, 2, 0},
    {refalrts::icEPrepare, 0, 3, 0},
    {refalrts::icEStart, 0, 3, 0},
    {refalrts::icSave, 0, 5, 0},
    {refalrts::icIdentLeft, 0, 1, 5},
    // closed e.Outputs_E#3 as range 0
    //2: s.CommandLineInfo#1
    //3: e.Outputs_B#3
    //5: e.Outputs_E#3
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 7},
    {refalrts::icFunc, 0, 3, 8},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 9},
    {refalrts::icIdent, 0, 0, 10},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 11},
    {refalrts::icFunc, 0, 2, 12},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 13},
    {refalrts::icPushStack, 0, 0, 13},
    {refalrts::icPushStack, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icPushStack, 0, 0, 11},
    {refalrts::icPushStack, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceSTVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // s.CommandLineInfo#1/2 e.Outputs#3/0
    {refalrts::icsVarLeft, 0, 2, 0},
    // closed e.Outputs#3 as range 0
    //0: e.Outputs#3
    //2: s.CommandLineInfo#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 3},
    {refalrts::icFunc, 0, 1, 4},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 5},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 6},
    {refalrts::icFunc, 0, 0, 7},
    {refalrts::icString, 0, 0, 8},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 10},
    {refalrts::icPushStack, 0, 0, 10},
    {refalrts::icPushStack, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceRange, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icPushStack, 0, 0, 5},
    {refalrts::icPushStack, 0, 0, 3},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icSpliceSTVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 3},
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
    // s.CommandLineInfo#1/2 e.Outputs_B#3/3 # Fails e.Outputs_E#3/5
    if( ! refalrts::svar_left( context[2], context[0], context[1] ) )
      continue;
    context[3] = 0;
    context[4] = 0;
    refalrts::start_e_loop();
    do {
      context[5] = context[0];
      context[6] = context[1];
      if( ! refalrts::ident_left(  & ident_Fails<int>::name, context[5], context[6] ) )
        continue;
      // closed e.Outputs_E#3 as range 0
      //2: s.CommandLineInfo#1
      //3: e.Outputs_B#3
      //5: e.Outputs_E#3

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::alloc_open_call( context[7] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[8], Fetch, "Fetch" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_call( context[9] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[10], & ident_ErrorFile<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[11] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[12], lambda_FindFiles_Compilers_2, "lambda_FindFiles_Compilers_2" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[13] ) )
        return refalrts::cNoMemory;
      refalrts::push_stack( context[13] );
      refalrts::push_stack( context[7] );
      res = refalrts::splice_elem( res, context[13] );
      res = refalrts::splice_elem( res, context[12] );
      refalrts::push_stack( context[11] );
      refalrts::push_stack( context[9] );
      res = refalrts::splice_elem( res, context[11] );
      res = refalrts::splice_elem( res, context[10] );
      res = refalrts::splice_stvar( res, context[2] );
      res = refalrts::splice_elem( res, context[9] );
      res = refalrts::splice_elem( res, context[8] );
      res = refalrts::splice_elem( res, context[7] );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[3], context[4], context[0], context[1] ) );
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  refalrts::move_left( context[0], context[1] );
  refalrts::move_left( context[0], context[1] );
  refalrts::move_right( context[0], context[1] );
  // s.CommandLineInfo#1/2 e.Outputs#3/0
  if( ! refalrts::svar_left( context[2], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Outputs#3 as range 0
  //0: e.Outputs#3
  //2: s.CommandLineInfo#1

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_call( context[3] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[4], Link, "Link" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[5] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[7], WriteLine, "WriteLine" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[8], context[9], "** Compilation successed **", 27 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[10] ) )
    return refalrts::cNoMemory;
  refalrts::push_stack( context[10] );
  refalrts::push_stack( context[6] );
  res = refalrts::splice_elem( res, context[10] );
  res = refalrts::splice_evar( res, context[8], context[9] );
  res = refalrts::splice_elem( res, context[7] );
  res = refalrts::splice_elem( res, context[6] );
  refalrts::push_stack( context[5] );
  refalrts::push_stack( context[3] );
  res = refalrts::splice_elem( res, context[5] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_stvar( res, context[2] );
  res = refalrts::splice_elem( res, context[4] );
  res = refalrts::splice_elem( res, context[3] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult lambda_FindFiles_Compilers_4(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { lambda_FindFiles_Compilers_3, "lambda_FindFiles_Compilers_3" },
    { refalrts::create_closure, "refalrts::create_closure" },
    { lambda_FindFiles_Compilers_1, "lambda_FindFiles_Compilers_1" },
    { ForEach, "ForEach" },
    { RenameFiles, "RenameFiles" },
    { Seq, "Seq" },
    { Fetch, "Fetch" },
    { PrintNotFound, "PrintNotFound" },
    { Map, "Map" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_NotFound<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +28, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // s.CommandLineInfo#1/2 e.Files_B#2/3 ( # NotFound e.FileName#2/5 ) e.Files_E#2/7
    {refalrts::icsVarLeft, 0, 2, 0},
    {refalrts::icEPrepare, 0, 3, 0},
    {refalrts::icEStart, 0, 3, 0},
    {refalrts::icSave, 0, 7, 0},
    {refalrts::icBracketLeft, 0, 5, 7},
    {refalrts::icIdentLeft, 0, 0, 5},
    // closed e.FileName#2 as range 5
    // closed e.Files_E#2 as range 0
    //2: s.CommandLineInfo#1
    //3: e.Files_B#2
    //5: e.FileName#2
    //7: e.Files_E#2
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 9},
    {refalrts::icFunc, 0, 8, 10},
    {refalrts::icFunc, 0, 7, 11},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 12},
    {refalrts::icIdent, 0, 0, 13},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 14},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 15},
    {refalrts::icPushStack, 0, 0, 15},
    {refalrts::icPushStack, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceEVar, 0, 0, 7},
    {refalrts::icLinkBrackets, 12, 14, 0},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceEVar, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // s.CommandLineInfo#1/2 e.FoundFiles#2/0
    {refalrts::icsVarLeft, 0, 2, 0},
    // closed e.FoundFiles#2 as range 0
    //0: e.FoundFiles#2
    //2: s.CommandLineInfo#1
    //17: s.CommandLineInfo#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 3},
    {refalrts::icFunc, 0, 6, 4},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 5},
    {refalrts::icFunc, 0, 5, 6},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 7},
    {refalrts::icFunc, 0, 4, 8},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 9},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 10},
    {refalrts::icFunc, 0, 3, 11},
    {refalrts::icFunc, 0, 2, 12},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 13},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 14},
    {refalrts::icFunc, 0, 1, 15},
    {refalrts::icFunc, 0, 0, 16},
    {refalrts::icCopySTVar, 17, 2, 0},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 18},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 19},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 20},
    {refalrts::icPushStack, 0, 0, 20},
    {refalrts::icPushStack, 0, 0, 3},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icPushStack, 0, 0, 19},
    {refalrts::icPushStack, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icPushStack, 0, 0, 18},
    {refalrts::icPushStack, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceSTVar, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icPushStack, 0, 0, 13},
    {refalrts::icPushStack, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icPushStack, 0, 0, 9},
    {refalrts::icPushStack, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceSTVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 3},
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
    // s.CommandLineInfo#1/2 e.Files_B#2/3 ( # NotFound e.FileName#2/5 ) e.Files_E#2/7
    if( ! refalrts::svar_left( context[2], context[0], context[1] ) )
      continue;
    context[3] = 0;
    context[4] = 0;
    refalrts::start_e_loop();
    do {
      context[7] = context[0];
      context[8] = context[1];
      context[5] = 0;
      context[6] = 0;
      if( ! refalrts::brackets_left( context[5], context[6], context[7], context[8] ) )
        continue;
      if( ! refalrts::ident_left(  & ident_NotFound<int>::name, context[5], context[6] ) )
        continue;
      // closed e.FileName#2 as range 5
      // closed e.Files_E#2 as range 0
      //2: s.CommandLineInfo#1
      //3: e.Files_B#2
      //5: e.FileName#2
      //7: e.Files_E#2

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::alloc_open_call( context[9] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[10], Map, "Map" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[11], PrintNotFound, "PrintNotFound" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[12] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[13], & ident_NotFound<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[14] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[15] ) )
        return refalrts::cNoMemory;
      refalrts::push_stack( context[15] );
      refalrts::push_stack( context[9] );
      res = refalrts::splice_elem( res, context[15] );
      res = refalrts::splice_evar( res, context[7], context[8] );
      refalrts::link_brackets( context[12], context[14] );
      res = refalrts::splice_elem( res, context[14] );
      res = refalrts::splice_evar( res, context[5], context[6] );
      res = refalrts::splice_elem( res, context[13] );
      res = refalrts::splice_elem( res, context[12] );
      res = refalrts::splice_elem( res, context[11] );
      res = refalrts::splice_elem( res, context[10] );
      res = refalrts::splice_elem( res, context[9] );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[3], context[4], context[0], context[1] ) );
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  refalrts::move_left( context[0], context[1] );
  refalrts::move_left( context[0], context[1] );
  refalrts::move_right( context[0], context[1] );
  // s.CommandLineInfo#1/2 e.FoundFiles#2/0
  if( ! refalrts::svar_left( context[2], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.FoundFiles#2 as range 0
  //0: e.FoundFiles#2
  //2: s.CommandLineInfo#1
  //17: s.CommandLineInfo#1

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_call( context[3] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[4], Fetch, "Fetch" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[5] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[6], Seq, "Seq" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[8], RenameFiles, "RenameFiles" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[11], ForEach, "ForEach" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[12], lambda_FindFiles_Compilers_1, "lambda_FindFiles_Compilers_1" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[15], refalrts::create_closure, "refalrts::create_closure" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[16], lambda_FindFiles_Compilers_3, "lambda_FindFiles_Compilers_3" ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_stvar(context[17], context[2]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[18] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[19] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[20] ) )
    return refalrts::cNoMemory;
  refalrts::push_stack( context[20] );
  refalrts::push_stack( context[3] );
  res = refalrts::splice_elem( res, context[20] );
  refalrts::push_stack( context[19] );
  refalrts::push_stack( context[5] );
  res = refalrts::splice_elem( res, context[19] );
  refalrts::push_stack( context[18] );
  refalrts::push_stack( context[14] );
  res = refalrts::splice_elem( res, context[18] );
  res = refalrts::splice_stvar( res, context[17] );
  res = refalrts::splice_elem( res, context[16] );
  res = refalrts::splice_elem( res, context[15] );
  res = refalrts::splice_elem( res, context[14] );
  refalrts::push_stack( context[13] );
  refalrts::push_stack( context[10] );
  res = refalrts::splice_elem( res, context[13] );
  res = refalrts::splice_elem( res, context[12] );
  res = refalrts::splice_elem( res, context[11] );
  res = refalrts::splice_elem( res, context[10] );
  refalrts::push_stack( context[9] );
  refalrts::push_stack( context[7] );
  res = refalrts::splice_elem( res, context[9] );
  res = refalrts::splice_stvar( res, context[2] );
  res = refalrts::splice_elem( res, context[8] );
  res = refalrts::splice_elem( res, context[7] );
  res = refalrts::splice_elem( res, context[6] );
  res = refalrts::splice_elem( res, context[5] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_elem( res, context[4] );
  res = refalrts::splice_elem( res, context[3] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult FindFiles_Compilers(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { lambda_FindFiles_Compilers_4, "lambda_FindFiles_Compilers_4" },
    { refalrts::create_closure, "refalrts::create_closure" },
    { FindFiles, "FindFiles" },
    { Fetch, "Fetch" },
    { WriteLine, "WriteLine" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_CompileList<int>::name,
    & ident_CompileToTarget<int>::name,
    & ident_CmdLineError<int>::name
  };
  using refalrts::numbers;
  static const refalrts::StringItem strings[] = {
    {"COMMAND LINE ERROR: ", 20}
  };
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +17, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( # CmdLineError e.Message#1/2 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icIdentLeft, 0, 2, 2},
    {refalrts::icEmpty, 0, 0, 0},
    // closed e.Message#1 as range 2
    //2: e.Message#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 4},
    {refalrts::icFunc, 0, 4, 5},
    {refalrts::icString, 0, 0, 6},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 8},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icPushStack, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceRange, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +9, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // s.CommandLineInfo#1/8 # CompileToTarget ( e.Folders#1/6 ) ( e.Source#1/4 ) ( e.Output#1/2 )
    {refalrts::icBracketRight, 0, 2, 0},
    {refalrts::icBracketRight, 0, 4, 0},
    {refalrts::icBracketRight, 0, 6, 0},
    {refalrts::icIdentRight, 0, 1, 0},
    // closed e.Folders#1 as range 6
    // closed e.Source#1 as range 4
    // closed e.Output#1 as range 2
    {refalrts::icsVarLeft, 0, 8, 0},
    {refalrts::icEmpty, 0, 0, 0},
    //2: e.Output#1
    //4: e.Source#1
    //6: e.Folders#1
    //8: s.CommandLineInfo#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // s.CommandLineInfo#1/2 # CompileList ( e.Folders#1/3 ) e.Files#1/0
    {refalrts::icsVarLeft, 0, 2, 0},
    {refalrts::icIdentLeft, 0, 0, 0},
    {refalrts::icBracketLeft, 0, 3, 0},
    // closed e.Folders#1 as range 3
    // closed e.Files#1 as range 0
    //0: e.Files#1
    //2: s.CommandLineInfo#1
    //3: e.Folders#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 5},
    {refalrts::icFunc, 0, 3, 6},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 7},
    {refalrts::icFunc, 0, 2, 8},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 9},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 10},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 11},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 12},
    {refalrts::icFunc, 0, 1, 13},
    {refalrts::icFunc, 0, 0, 14},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 15},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 16},
    {refalrts::icPushStack, 0, 0, 16},
    {refalrts::icPushStack, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icPushStack, 0, 0, 15},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceSTVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icPushStack, 0, 0, 11},
    {refalrts::icPushStack, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icLinkBrackets, 9, 10, 0},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceEVar, 0, 0, 3},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 5},
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
    // ( # CmdLineError e.Message#1/2 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdLineError<int>::name, context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    // closed e.Message#1 as range 2
    //2: e.Message#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[4] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[5], WriteLine, "WriteLine" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[6], context[7], "COMMAND LINE ERROR: ", 20 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[8] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[8] );
    refalrts::push_stack( context[4] );
    res = refalrts::splice_elem( res, context[8] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[6], context[7] );
    res = refalrts::splice_elem( res, context[5] );
    res = refalrts::splice_elem( res, context[4] );
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
    // s.CommandLineInfo#1/8 # CompileToTarget ( e.Folders#1/6 ) ( e.Source#1/4 ) ( e.Output#1/2 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_right( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_right( context[4], context[5], context[0], context[1] ) )
      continue;
    context[6] = 0;
    context[7] = 0;
    if( ! refalrts::brackets_right( context[6], context[7], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_right(  & ident_CompileToTarget<int>::name, context[0], context[1] ) )
      continue;
    // closed e.Folders#1 as range 6
    // closed e.Source#1 as range 4
    // closed e.Output#1 as range 2
    if( ! refalrts::svar_left( context[8], context[0], context[1] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    //2: e.Output#1
    //4: e.Source#1
    //6: e.Folders#1
    //8: s.CommandLineInfo#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  refalrts::move_left( context[0], context[1] );
  refalrts::move_left( context[0], context[1] );
  refalrts::move_right( context[0], context[1] );
  // s.CommandLineInfo#1/2 # CompileList ( e.Folders#1/3 ) e.Files#1/0
  if( ! refalrts::svar_left( context[2], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::ident_left(  & ident_CompileList<int>::name, context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[3] = 0;
  context[4] = 0;
  if( ! refalrts::brackets_left( context[3], context[4], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Folders#1 as range 3
  // closed e.Files#1 as range 0
  //0: e.Files#1
  //2: s.CommandLineInfo#1
  //3: e.Folders#1

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_call( context[5] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[6], Fetch, "Fetch" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[8], FindFiles, "FindFiles" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[13], refalrts::create_closure, "refalrts::create_closure" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[14], lambda_FindFiles_Compilers_4, "lambda_FindFiles_Compilers_4" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[16] ) )
    return refalrts::cNoMemory;
  refalrts::push_stack( context[16] );
  refalrts::push_stack( context[5] );
  res = refalrts::splice_elem( res, context[16] );
  refalrts::push_stack( context[15] );
  refalrts::push_stack( context[12] );
  res = refalrts::splice_elem( res, context[15] );
  res = refalrts::splice_stvar( res, context[2] );
  res = refalrts::splice_elem( res, context[14] );
  res = refalrts::splice_elem( res, context[13] );
  res = refalrts::splice_elem( res, context[12] );
  refalrts::push_stack( context[11] );
  refalrts::push_stack( context[7] );
  res = refalrts::splice_elem( res, context[11] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  refalrts::link_brackets( context[9], context[10] );
  res = refalrts::splice_elem( res, context[10] );
  res = refalrts::splice_evar( res, context[3], context[4] );
  res = refalrts::splice_elem( res, context[9] );
  res = refalrts::splice_elem( res, context[8] );
  res = refalrts::splice_elem( res, context[7] );
  res = refalrts::splice_elem( res, context[6] );
  res = refalrts::splice_elem( res, context[5] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult lambda_ForEach_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { Map, "Map" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    // s.Converter#1/2 e.Elems#2/0
    {refalrts::icsVarLeft, 0, 2, 0},
    // closed e.Elems#2 as range 0
    //0: e.Elems#2
    //2: s.Converter#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 3},
    {refalrts::icFunc, 0, 0, 4},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 5},
    {refalrts::icPushStack, 0, 0, 5},
    {refalrts::icPushStack, 0, 0, 3},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icSpliceEVar, 0, 0, 0},
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
  // s.Converter#1/2 e.Elems#2/0
  if( ! refalrts::svar_left( context[2], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Elems#2 as range 0
  //0: e.Elems#2
  //2: s.Converter#1

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_call( context[3] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[4], Map, "Map" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[5] ) )
    return refalrts::cNoMemory;
  refalrts::push_stack( context[5] );
  refalrts::push_stack( context[3] );
  res = refalrts::splice_elem( res, context[5] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_stvar( res, context[2] );
  res = refalrts::splice_elem( res, context[4] );
  res = refalrts::splice_elem( res, context[3] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult ForEach(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 7 elems
  refalrts::Iter context[7];
  refalrts::zeros( context, 7 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { lambda_ForEach_0, "lambda_ForEach_0" },
    { refalrts::create_closure, "refalrts::create_closure" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    // s.Converter#1/2
    {refalrts::icsVarLeft, 0, 2, 0},
    {refalrts::icEmpty, 0, 0, 0},
    //2: s.Converter#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 3},
    {refalrts::icFunc, 0, 1, 4},
    {refalrts::icFunc, 0, 0, 5},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 6},
    {refalrts::icPushStack, 0, 0, 6},
    {refalrts::icPushStack, 0, 0, 3},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceSTVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 5},
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
  // s.Converter#1/2
  if( ! refalrts::svar_left( context[2], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  //2: s.Converter#1

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_call( context[3] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[4], refalrts::create_closure, "refalrts::create_closure" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[5], lambda_ForEach_0, "lambda_ForEach_0" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[6] ) )
    return refalrts::cNoMemory;
  refalrts::push_stack( context[6] );
  refalrts::push_stack( context[3] );
  res = refalrts::splice_elem( res, context[6] );
  res = refalrts::splice_stvar( res, context[2] );
  res = refalrts::splice_elem( res, context[5] );
  res = refalrts::splice_elem( res, context[4] );
  res = refalrts::splice_elem( res, context[3] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult PrintNotFound(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { WriteLine, "WriteLine" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_Source<int>::name,
    & ident_Output<int>::name,
    & ident_NotFound<int>::name
  };
  using refalrts::numbers;
  static const refalrts::StringItem strings[] = {
    {" not found", 10},
    {"COMMAND LINE ERROR: file ", 25}
  };
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +19, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( # NotFound e.FileName#1/2 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icIdentLeft, 0, 2, 2},
    {refalrts::icEmpty, 0, 0, 0},
    // closed e.FileName#1 as range 2
    //2: e.FileName#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 4},
    {refalrts::icFunc, 0, 0, 5},
    {refalrts::icString, 0, 1, 6},
    {refalrts::icString, 0, 0, 8},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 10},
    {refalrts::icPushStack, 0, 0, 10},
    {refalrts::icPushStack, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceRange, 0, 0, 8},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceRange, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +6, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( # Output e.FileName#1/2 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icIdentLeft, 0, 1, 2},
    {refalrts::icEmpty, 0, 0, 0},
    // closed e.FileName#1 as range 2
    //2: e.FileName#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( # Source ( e.Source#1/4 ) e.Output#1/2 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icIdentLeft, 0, 0, 2},
    {refalrts::icBracketLeft, 0, 4, 2},
    {refalrts::icEmpty, 0, 0, 0},
    // closed e.Source#1 as range 4
    // closed e.Output#1 as range 2
    //2: e.Output#1
    //4: e.Source#1
    {refalrts::icEmptyResult, 0, 0, 0},
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
    // ( # NotFound e.FileName#1/2 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_NotFound<int>::name, context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    // closed e.FileName#1 as range 2
    //2: e.FileName#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[4] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[5], WriteLine, "WriteLine" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[6], context[7], "COMMAND LINE ERROR: file ", 25 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[8], context[9], " not found", 10 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[10] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[10] );
    refalrts::push_stack( context[4] );
    res = refalrts::splice_elem( res, context[10] );
    res = refalrts::splice_evar( res, context[8], context[9] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[6], context[7] );
    res = refalrts::splice_elem( res, context[5] );
    res = refalrts::splice_elem( res, context[4] );
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
    // ( # Output e.FileName#1/2 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_Output<int>::name, context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    // closed e.FileName#1 as range 2
    //2: e.FileName#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  refalrts::move_left( context[0], context[1] );
  refalrts::move_left( context[0], context[1] );
  refalrts::move_right( context[0], context[1] );
  // ( # Source ( e.Source#1/4 ) e.Output#1/2 )
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::ident_left(  & ident_Source<int>::name, context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[4] = 0;
  context[5] = 0;
  if( ! refalrts::brackets_left( context[4], context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Source#1 as range 4
  // closed e.Output#1 as range 2
  //2: e.Output#1
  //4: e.Source#1

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult lambda_Link_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 7 elems
  refalrts::Iter context[7];
  refalrts::zeros( context, 7 );
#ifdef INTERPRET
  using refalrts::functions;
  using refalrts::idents;
  using refalrts::numbers;
  static const refalrts::StringItem strings[] = {
    {" \"", 2}
  };
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.FileName#3/2 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icEmpty, 0, 0, 0},
    // closed e.FileName#3 as range 2
    //2: e.FileName#3
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icString, 0, 0, 4},
    {refalrts::icChar, 0, '\"', 6},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceRange, 0, 0, 4},
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
  // ( e.FileName#3/2 )
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.FileName#3 as range 2
  //2: e.FileName#3

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_chars( context[4], context[5], " \"", 2 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[6], '\"' ) )
    return refalrts::cNoMemory;
  res = refalrts::splice_elem( res, context[6] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[4], context[5] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult lambda_Link_1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { lambda_Link_0, "lambda_Link_0" },
    { Map, "Map" },
    { System, "System" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_None<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +6, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Files#1/2 ) # None
    {refalrts::icIdentRight, 0, 0, 0},
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icEmpty, 0, 0, 0},
    // closed e.Files#1 as range 2
    //2: e.Files#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Files#1/2 ) e.CommandLine#2/0
    {refalrts::icBracketLeft, 0, 2, 0},
    // closed e.Files#1 as range 2
    // closed e.CommandLine#2 as range 0
    //0: e.CommandLine#2
    //2: e.Files#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 4},
    {refalrts::icFunc, 0, 2, 5},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 6},
    {refalrts::icFunc, 0, 1, 7},
    {refalrts::icFunc, 0, 0, 8},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 9},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 10},
    {refalrts::icPushStack, 0, 0, 10},
    {refalrts::icPushStack, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icPushStack, 0, 0, 9},
    {refalrts::icPushStack, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceEVar, 0, 0, 0},
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
    // ( e.Files#1/2 ) # None
    if( ! refalrts::ident_right(  & ident_None<int>::name, context[0], context[1] ) )
      continue;
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    // closed e.Files#1 as range 2
    //2: e.Files#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  refalrts::move_left( context[0], context[1] );
  refalrts::move_left( context[0], context[1] );
  refalrts::move_right( context[0], context[1] );
  // ( e.Files#1/2 ) e.CommandLine#2/0
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Files#1 as range 2
  // closed e.CommandLine#2 as range 0
  //0: e.CommandLine#2
  //2: e.Files#1

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_call( context[4] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[5], System, "System" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[7], Map, "Map" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[8], lambda_Link_0, "lambda_Link_0" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[10] ) )
    return refalrts::cNoMemory;
  refalrts::push_stack( context[10] );
  refalrts::push_stack( context[4] );
  res = refalrts::splice_elem( res, context[10] );
  refalrts::push_stack( context[9] );
  refalrts::push_stack( context[6] );
  res = refalrts::splice_elem( res, context[9] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_elem( res, context[8] );
  res = refalrts::splice_elem( res, context[7] );
  res = refalrts::splice_elem( res, context[6] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_elem( res, context[5] );
  res = refalrts::splice_elem( res, context[4] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult Link(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { lambda_Link_1, "lambda_Link_1" },
    { refalrts::create_closure, "refalrts::create_closure" },
    { Fetch, "Fetch" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_CompileCommand<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    // s.CommandLineInfo#1/2 e.Files#1/0
    {refalrts::icsVarLeft, 0, 2, 0},
    // closed e.Files#1 as range 0
    //0: e.Files#1
    //2: s.CommandLineInfo#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 3},
    {refalrts::icFunc, 0, 2, 4},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 5},
    {refalrts::icIdent, 0, 0, 6},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 7},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 8},
    {refalrts::icFunc, 0, 1, 9},
    {refalrts::icFunc, 0, 0, 10},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 11},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 12},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 13},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 14},
    {refalrts::icPushStack, 0, 0, 14},
    {refalrts::icPushStack, 0, 0, 3},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icPushStack, 0, 0, 13},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icLinkBrackets, 11, 12, 0},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icPushStack, 0, 0, 7},
    {refalrts::icPushStack, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceSTVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 5},
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
  // s.CommandLineInfo#1/2 e.Files#1/0
  if( ! refalrts::svar_left( context[2], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Files#1 as range 0
  //0: e.Files#1
  //2: s.CommandLineInfo#1

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_call( context[3] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[4], Fetch, "Fetch" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[5] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[6], & ident_CompileCommand<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[9], refalrts::create_closure, "refalrts::create_closure" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[10], lambda_Link_1, "lambda_Link_1" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[14] ) )
    return refalrts::cNoMemory;
  refalrts::push_stack( context[14] );
  refalrts::push_stack( context[3] );
  res = refalrts::splice_elem( res, context[14] );
  refalrts::push_stack( context[13] );
  refalrts::push_stack( context[8] );
  res = refalrts::splice_elem( res, context[13] );
  refalrts::link_brackets( context[11], context[12] );
  res = refalrts::splice_elem( res, context[12] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_elem( res, context[11] );
  res = refalrts::splice_elem( res, context[10] );
  res = refalrts::splice_elem( res, context[9] );
  res = refalrts::splice_elem( res, context[8] );
  refalrts::push_stack( context[7] );
  refalrts::push_stack( context[5] );
  res = refalrts::splice_elem( res, context[7] );
  res = refalrts::splice_elem( res, context[6] );
  res = refalrts::splice_stvar( res, context[2] );
  res = refalrts::splice_elem( res, context[5] );
  res = refalrts::splice_elem( res, context[4] );
  res = refalrts::splice_elem( res, context[3] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult lambda_RenameFiles_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
#ifdef INTERPRET
  using refalrts::functions;
  static const refalrts::RefalIdentifier idents[] = {
    & ident_Output<int>::name,
    & ident_Source<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +21, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( # Source ( e.Source#3/4 ) e.Output#3/2 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icIdentLeft, 0, 1, 2},
    {refalrts::icBracketLeft, 0, 4, 2},
    {refalrts::icEmpty, 0, 0, 0},
    // closed e.Source#3 as range 4
    // closed e.Output#3 as range 2
    //2: e.Output#3
    //4: e.Source#3
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icIdent, 0, 1, 7},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 9},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 10},
    {refalrts::icLinkBrackets, 6, 10, 0},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icLinkBrackets, 8, 9, 0},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceEVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( # Output e.Output#3/2 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icIdentLeft, 0, 0, 2},
    {refalrts::icEmpty, 0, 0, 0},
    // closed e.Output#3 as range 2
    //2: e.Output#3
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
    // ( # Source ( e.Source#3/4 ) e.Output#3/2 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_Source<int>::name, context[2], context[3] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    // closed e.Source#3 as range 4
    // closed e.Output#3 as range 2
    //2: e.Output#3
    //4: e.Source#3

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[7], & ident_Source<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[9] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[10] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[6], context[10] );
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
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  refalrts::move_left( context[0], context[1] );
  refalrts::move_left( context[0], context[1] );
  refalrts::move_right( context[0], context[1] );
  // ( # Output e.Output#3/2 )
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::ident_left(  & ident_Output<int>::name, context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Output#3 as range 2
  //2: e.Output#3

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
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_elem( res, context[5] );
  res = refalrts::splice_elem( res, context[4] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult lambda_RenameFiles_1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { GetFileName, "GetFileName" },
    { Map, "Map" },
    { ScanCollisions, "ScanCollisions" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    // e.Files#3/0
    // closed e.Files#3 as range 0
    //0: e.Files#3
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 2},
    {refalrts::icFunc, 0, 2, 3},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 4},
    {refalrts::icFunc, 0, 1, 5},
    {refalrts::icFunc, 0, 0, 6},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 7},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 8},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icPushStack, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icPushStack, 0, 0, 7},
    {refalrts::icPushStack, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icSpliceElem, 0, 0, 6},
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
  // e.Files#3/0
  // closed e.Files#3 as range 0
  //0: e.Files#3

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_call( context[2] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[3], ScanCollisions, "ScanCollisions" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[4] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[5], Map, "Map" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[6], GetFileName, "GetFileName" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[8] ) )
    return refalrts::cNoMemory;
  refalrts::push_stack( context[8] );
  refalrts::push_stack( context[2] );
  res = refalrts::splice_elem( res, context[8] );
  refalrts::push_stack( context[7] );
  refalrts::push_stack( context[4] );
  res = refalrts::splice_elem( res, context[7] );
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

static refalrts::FnResult lambda_RenameFiles_2(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { lambda_RenameFiles_1, "lambda_RenameFiles_1" },
    { lambda_RenameFiles_0, "lambda_RenameFiles_0" },
    { ForEach, "ForEach" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_None<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +15, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // # None
    {refalrts::icIdentLeft, 0, 0, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 2},
    {refalrts::icFunc, 0, 2, 3},
    {refalrts::icFunc, 0, 1, 4},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 5},
    {refalrts::icPushStack, 0, 0, 5},
    {refalrts::icPushStack, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 3},
    {refalrts::icSpliceElem, 0, 0, 2},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // e.CommandLine#2/0
    // closed e.CommandLine#2 as range 0
    //0: e.CommandLine#2
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icFunc, 0, 0, 2},
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
    // # None
    if( ! refalrts::ident_left(  & ident_None<int>::name, context[0], context[1] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[2] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[3], ForEach, "ForEach" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[4], lambda_RenameFiles_0, "lambda_RenameFiles_0" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[5] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[5] );
    refalrts::push_stack( context[2] );
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
  // e.CommandLine#2/0
  // closed e.CommandLine#2 as range 0
  //0: e.CommandLine#2

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_name( context[2], lambda_RenameFiles_1, "lambda_RenameFiles_1" ) )
    return refalrts::cNoMemory;
  res = refalrts::splice_elem( res, context[2] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult RenameFiles(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { lambda_RenameFiles_2, "lambda_RenameFiles_2" },
    { Fetch, "Fetch" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_CompileCommand<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    // s.CommandLineInfo#1/2
    {refalrts::icsVarLeft, 0, 2, 0},
    {refalrts::icEmpty, 0, 0, 0},
    //2: s.CommandLineInfo#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 3},
    {refalrts::icFunc, 0, 1, 4},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 5},
    {refalrts::icIdent, 0, 0, 6},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 7},
    {refalrts::icFunc, 0, 0, 8},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 9},
    {refalrts::icPushStack, 0, 0, 9},
    {refalrts::icPushStack, 0, 0, 3},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icPushStack, 0, 0, 7},
    {refalrts::icPushStack, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceSTVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 5},
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
  // s.CommandLineInfo#1/2
  if( ! refalrts::svar_left( context[2], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  //2: s.CommandLineInfo#1

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_call( context[3] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[4], Fetch, "Fetch" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[5] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[6], & ident_CompileCommand<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[8], lambda_RenameFiles_2, "lambda_RenameFiles_2" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[9] ) )
    return refalrts::cNoMemory;
  refalrts::push_stack( context[9] );
  refalrts::push_stack( context[3] );
  res = refalrts::splice_elem( res, context[9] );
  res = refalrts::splice_elem( res, context[8] );
  refalrts::push_stack( context[7] );
  refalrts::push_stack( context[5] );
  res = refalrts::splice_elem( res, context[7] );
  res = refalrts::splice_elem( res, context[6] );
  res = refalrts::splice_stvar( res, context[2] );
  res = refalrts::splice_elem( res, context[5] );
  res = refalrts::splice_elem( res, context[4] );
  res = refalrts::splice_elem( res, context[3] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult GetFileName(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { GetFileName_Aux, "GetFileName_Aux" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_Source<int>::name,
    & ident_Output<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +31, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( # Output e.FileName#1/2 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icIdentLeft, 0, 1, 2},
    {refalrts::icEmpty, 0, 0, 0},
    // closed e.FileName#1 as range 2
    //2: e.FileName#1
    //11: e.FileName#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 4},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 5},
    {refalrts::icFunc, 0, 0, 6},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 7},
    {refalrts::icInt, 0, 0, 8},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 9},
    {refalrts::icIdent, 0, 1, 10},
    {refalrts::icCopyEVar, 11, 2, 0},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 13},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 14},
    {refalrts::icLinkBrackets, 4, 14, 0},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icLinkBrackets, 9, 13, 0},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceEVar, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icPushStack, 0, 0, 7},
    {refalrts::icPushStack, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( # Source ( e.Source#1/4 ) e.Output#1/2 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icIdentLeft, 0, 0, 2},
    {refalrts::icBracketLeft, 0, 4, 2},
    {refalrts::icEmpty, 0, 0, 0},
    // closed e.Source#1 as range 4
    // closed e.Output#1 as range 2
    //2: e.Output#1
    //4: e.Source#1
    //15: e.Output#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 7},
    {refalrts::icFunc, 0, 0, 8},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 9},
    {refalrts::icInt, 0, 0, 10},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 11},
    {refalrts::icIdent, 0, 0, 12},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 13},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 14},
    {refalrts::icCopyEVar, 15, 2, 0},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 17},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 18},
    {refalrts::icLinkBrackets, 6, 18, 0},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icLinkBrackets, 11, 17, 0},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceEVar, 0, 0, 15},
    {refalrts::icLinkBrackets, 13, 14, 0},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceEVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icPushStack, 0, 0, 9},
    {refalrts::icPushStack, 0, 0, 7},
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
    // ( # Output e.FileName#1/2 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_Output<int>::name, context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    // closed e.FileName#1 as range 2
    //2: e.FileName#1
    //11: e.FileName#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[4] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[5] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[6], GetFileName_Aux, "GetFileName_Aux" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[7] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_number( context[8], 0UL ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[9] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[10], & ident_Output<int>::name ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[11], context[12], context[2], context[3]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[14] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[4], context[14] );
    res = refalrts::splice_elem( res, context[14] );
    refalrts::link_brackets( context[9], context[13] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_elem( res, context[10] );
    res = refalrts::splice_elem( res, context[9] );
    res = refalrts::splice_elem( res, context[8] );
    refalrts::push_stack( context[7] );
    refalrts::push_stack( context[5] );
    res = refalrts::splice_elem( res, context[7] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_elem( res, context[6] );
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
  // ( # Source ( e.Source#1/4 ) e.Output#1/2 )
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::ident_left(  & ident_Source<int>::name, context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[4] = 0;
  context[5] = 0;
  if( ! refalrts::brackets_left( context[4], context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Source#1 as range 4
  // closed e.Output#1 as range 2
  //2: e.Output#1
  //4: e.Source#1
  //15: e.Output#1

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_bracket( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[8], GetFileName_Aux, "GetFileName_Aux" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_number( context[10], 0UL ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[12], & ident_Source<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[14] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[15], context[16], context[2], context[3]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[17] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[18] ) )
    return refalrts::cNoMemory;
  refalrts::link_brackets( context[6], context[18] );
  res = refalrts::splice_elem( res, context[18] );
  refalrts::link_brackets( context[11], context[17] );
  res = refalrts::splice_elem( res, context[17] );
  res = refalrts::splice_evar( res, context[15], context[16] );
  refalrts::link_brackets( context[13], context[14] );
  res = refalrts::splice_elem( res, context[14] );
  res = refalrts::splice_evar( res, context[4], context[5] );
  res = refalrts::splice_elem( res, context[13] );
  res = refalrts::splice_elem( res, context[12] );
  res = refalrts::splice_elem( res, context[11] );
  res = refalrts::splice_elem( res, context[10] );
  refalrts::push_stack( context[9] );
  refalrts::push_stack( context[7] );
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

static refalrts::FnResult GetFileName_Aux(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 5 elems
  refalrts::Iter context[5];
  refalrts::zeros( context, 5 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { DoGetFileName, "DoGetFileName" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
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
    {refalrts::icFunc, 0, 0, 3},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 4},
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
  // e.FileName#1/0 '.cpp'
  if( ! refalrts::char_right( 'p', context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::char_right( 'p', context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::char_right( 'c', context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::char_right( '.', context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.FileName#1 as range 0
  //0: e.FileName#1

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_call( context[2] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[3], DoGetFileName, "DoGetFileName" ) )
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
#endif
}

static refalrts::FnResult DoGetFileName(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { Lower, "Lower" },
    { DoGetFileName, "DoGetFileName" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +4, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // e.FileName#1/0 '/'
    {refalrts::icCharRight, 0, static_cast<unsigned char>('/'), 0},
    // closed e.FileName#1 as range 0
    //0: e.FileName#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +4, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // e.FileName#1/0 '\\'
    {refalrts::icCharRight, 0, static_cast<unsigned char>('\\'), 0},
    // closed e.FileName#1 as range 0
    //0: e.FileName#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +22, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // e.FileName#1/0 s.Last#1/2
    {refalrts::icsVarRight, 0, 2, 0},
    // closed e.FileName#1 as range 0
    //0: e.FileName#1
    //2: s.Last#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 3},
    {refalrts::icFunc, 0, 1, 4},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 5},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 6},
    {refalrts::icFunc, 0, 0, 7},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 8},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icPushStack, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceSTVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icPushStack, 0, 0, 5},
    {refalrts::icPushStack, 0, 0, 3},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 3},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
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
    // e.FileName#1/0 '/'
    if( ! refalrts::char_right( '/', context[0], context[1] ) )
      continue;
    // closed e.FileName#1 as range 0
    //0: e.FileName#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
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
    // e.FileName#1/0 '\\'
    if( ! refalrts::char_right( '\\', context[0], context[1] ) )
      continue;
    // closed e.FileName#1 as range 0
    //0: e.FileName#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
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
    // e.FileName#1/0 s.Last#1/2
    if( ! refalrts::svar_right( context[2], context[0], context[1] ) )
      continue;
    // closed e.FileName#1 as range 0
    //0: e.FileName#1
    //2: s.Last#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[3] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[4], DoGetFileName, "DoGetFileName" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[5] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[7], Lower, "Lower" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[8] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[8] );
    refalrts::push_stack( context[6] );
    res = refalrts::splice_elem( res, context[8] );
    res = refalrts::splice_stvar( res, context[2] );
    res = refalrts::splice_elem( res, context[7] );
    res = refalrts::splice_elem( res, context[6] );
    refalrts::push_stack( context[5] );
    refalrts::push_stack( context[3] );
    res = refalrts::splice_elem( res, context[5] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    res = refalrts::splice_elem( res, context[4] );
    res = refalrts::splice_elem( res, context[3] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  refalrts::move_left( context[0], context[1] );
  refalrts::move_left( context[0], context[1] );
  refalrts::move_right( context[0], context[1] );
  //
  if( ! refalrts::empty_seq( context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult lambda_Lower_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
#ifdef INTERPRET
  using refalrts::functions;
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    // s.Char#1/2 e.UpLo_B#3/3 s.Char#1/5 s.Lower#3/6 e.UpLo_E#3/7
    {refalrts::icsVarLeft, 0, 2, 0},
    {refalrts::icEPrepare, 0, 3, 0},
    {refalrts::icEStart, 0, 3, 0},
    {refalrts::icSave, 0, 7, 0},
    {refalrts::icsRepeatLeft, 5, 2, 7},
    {refalrts::icsVarLeft, 0, 6, 7},
    // closed e.UpLo_E#3 as range 0
    //2: s.Char#1
    //3: e.UpLo_B#3
    //5: s.Char#1
    //6: s.Lower#3
    //7: e.UpLo_E#3
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icSpliceSTVar, 0, 0, 6},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icFail, 0, 0, 0},
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
  // s.Char#1/2 e.UpLo_B#3/3 s.Char#1/5 s.Lower#3/6 e.UpLo_E#3/7
  if( ! refalrts::svar_left( context[2], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[3] = 0;
  context[4] = 0;
  refalrts::start_e_loop();
  do {
    context[7] = context[0];
    context[8] = context[1];
    if( ! refalrts::repeated_stvar_left( context[5], context[2], context[7], context[8] ) )
      continue;
    if( ! refalrts::svar_left( context[6], context[7], context[8] ) )
      continue;
    // closed e.UpLo_E#3 as range 0
    //2: s.Char#1
    //3: e.UpLo_B#3
    //5: s.Char#1
    //6: s.Lower#3
    //7: e.UpLo_E#3

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    res = refalrts::splice_stvar( res, context[6] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( refalrts::open_evar_advance( context[3], context[4], context[0], context[1] ) );
  return refalrts::FnResult(refalrts::cRecognitionImpossible | (__LINE__ << 8));
#endif
}

static refalrts::FnResult lambda_Lower_1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { lambda_Lower_0, "lambda_Lower_0" },
    { refalrts::create_closure, "refalrts::create_closure" },
    { Fetch, "Fetch" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  static const refalrts::StringItem strings[] = {
    {"AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz", 52}
  };
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +29, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // s.Char#1/2 e.Uppers_B#2/3 s.Char#1/5 e.Uppers_E#2/6
    {refalrts::icsVarLeft, 0, 2, 0},
    {refalrts::icEPrepare, 0, 3, 0},
    {refalrts::icEStart, 0, 3, 0},
    {refalrts::icSave, 0, 6, 0},
    {refalrts::icsRepeatLeft, 5, 2, 6},
    // closed e.Uppers_E#2 as range 0
    //2: s.Char#1
    //3: e.Uppers_B#2
    //5: s.Char#1
    //6: e.Uppers_E#2
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 8},
    {refalrts::icFunc, 0, 2, 9},
    {refalrts::icString, 0, 0, 10},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 12},
    {refalrts::icFunc, 0, 1, 13},
    {refalrts::icFunc, 0, 0, 14},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 15},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 16},
    {refalrts::icPushStack, 0, 0, 16},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icPushStack, 0, 0, 15},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceSTVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceRange, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // s.Char#1/2 e.Uppers#2/0
    {refalrts::icsVarLeft, 0, 2, 0},
    // closed e.Uppers#2 as range 0
    //0: e.Uppers#2
    //2: s.Char#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icSpliceSTVar, 0, 0, 2},
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
    // s.Char#1/2 e.Uppers_B#2/3 s.Char#1/5 e.Uppers_E#2/6
    if( ! refalrts::svar_left( context[2], context[0], context[1] ) )
      continue;
    context[3] = 0;
    context[4] = 0;
    refalrts::start_e_loop();
    do {
      context[6] = context[0];
      context[7] = context[1];
      if( ! refalrts::repeated_stvar_left( context[5], context[2], context[6], context[7] ) )
        continue;
      // closed e.Uppers_E#2 as range 0
      //2: s.Char#1
      //3: e.Uppers_B#2
      //5: s.Char#1
      //6: e.Uppers_E#2

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::alloc_open_call( context[8] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[9], Fetch, "Fetch" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_chars( context[10], context[11], "AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz", 52 ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_call( context[12] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[13], refalrts::create_closure, "refalrts::create_closure" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[14], lambda_Lower_0, "lambda_Lower_0" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[15] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[16] ) )
        return refalrts::cNoMemory;
      refalrts::push_stack( context[16] );
      refalrts::push_stack( context[8] );
      res = refalrts::splice_elem( res, context[16] );
      refalrts::push_stack( context[15] );
      refalrts::push_stack( context[12] );
      res = refalrts::splice_elem( res, context[15] );
      res = refalrts::splice_stvar( res, context[2] );
      res = refalrts::splice_elem( res, context[14] );
      res = refalrts::splice_elem( res, context[13] );
      res = refalrts::splice_elem( res, context[12] );
      res = refalrts::splice_evar( res, context[10], context[11] );
      res = refalrts::splice_elem( res, context[9] );
      res = refalrts::splice_elem( res, context[8] );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[3], context[4], context[0], context[1] ) );
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  refalrts::move_left( context[0], context[1] );
  refalrts::move_left( context[0], context[1] );
  refalrts::move_right( context[0], context[1] );
  // s.Char#1/2 e.Uppers#2/0
  if( ! refalrts::svar_left( context[2], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Uppers#2 as range 0
  //0: e.Uppers#2
  //2: s.Char#1

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  res = refalrts::splice_stvar( res, context[2] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult Lower(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { lambda_Lower_1, "lambda_Lower_1" },
    { refalrts::create_closure, "refalrts::create_closure" },
    { Fetch, "Fetch" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  static const refalrts::StringItem strings[] = {
    {"ABCDEFGHIJKLMNOPQRSTUVWXYZ", 26}
  };
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    // s.Char#1/2
    {refalrts::icsVarLeft, 0, 2, 0},
    {refalrts::icEmpty, 0, 0, 0},
    //2: s.Char#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 3},
    {refalrts::icFunc, 0, 2, 4},
    {refalrts::icString, 0, 0, 5},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 7},
    {refalrts::icFunc, 0, 1, 8},
    {refalrts::icFunc, 0, 0, 9},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 10},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 11},
    {refalrts::icPushStack, 0, 0, 11},
    {refalrts::icPushStack, 0, 0, 3},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icPushStack, 0, 0, 10},
    {refalrts::icPushStack, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceSTVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceRange, 0, 0, 5},
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
  // s.Char#1/2
  if( ! refalrts::svar_left( context[2], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  //2: s.Char#1

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_call( context[3] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[4], Fetch, "Fetch" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[5], context[6], "ABCDEFGHIJKLMNOPQRSTUVWXYZ", 26 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[8], refalrts::create_closure, "refalrts::create_closure" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[9], lambda_Lower_1, "lambda_Lower_1" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[11] ) )
    return refalrts::cNoMemory;
  refalrts::push_stack( context[11] );
  refalrts::push_stack( context[3] );
  res = refalrts::splice_elem( res, context[11] );
  refalrts::push_stack( context[10] );
  refalrts::push_stack( context[7] );
  res = refalrts::splice_elem( res, context[10] );
  res = refalrts::splice_stvar( res, context[2] );
  res = refalrts::splice_elem( res, context[9] );
  res = refalrts::splice_elem( res, context[8] );
  res = refalrts::splice_elem( res, context[7] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_elem( res, context[4] );
  res = refalrts::splice_elem( res, context[3] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult ScanCollisions(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 38 elems
  refalrts::Iter context[38];
  refalrts::zeros( context, 38 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { RestoreName, "RestoreName" },
    { Map, "Map" },
    { Renumerate, "Renumerate" },
    { ScanCollisions, "ScanCollisions" },
    { Exit, "Exit" },
    { WriteLine, "WriteLine" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_Output<int>::name
  };
  using refalrts::numbers;
  static const refalrts::StringItem strings[] = {
    {" has some filename ", 19},
    {" and ", 5},
    {"COMMAND LINE ERROR: output files ", 33}
  };
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +46, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // e.Files_B#1/2 ( e.FileName#1/4 0 ( # Output e.Output1#1/6 ) ) e.Files_M#1/8 ( e.FileName#1/14 0 ( # Output e.Output2#1/12 ) ) e.Files_E#1/18
    {refalrts::icEPrepare, 0, 2, 0},
    {refalrts::icEStart, 0, 2, 0},
    {refalrts::icSave, 0, 16, 0},
    {refalrts::icBracketLeft, 0, 4, 16},
    {refalrts::icBracketRight, 0, 6, 4},
    {refalrts::icIdentLeft, 0, 0, 6},
    {refalrts::icNumRight, 0, 0, 4},
    // closed e.FileName#1 as range 4
    // closed e.Output1#1 as range 6
    {refalrts::icEPrepare, 0, 8, 16},
    {refalrts::icEStart, 0, 8, 16},
    {refalrts::icSave, 0, 18, 16},
    {refalrts::icBracketLeft, 0, 10, 18},
    {refalrts::icBracketRight, 0, 12, 10},
    {refalrts::icIdentLeft, 0, 0, 12},
    {refalrts::icNumRight, 0, 0, 10},
    {refalrts::iceRepeatLeft, 14, 4, 10},
    {refalrts::icEmpty, 0, 0, 10},
    // closed e.Output2#1 as range 12
    // closed e.Files_E#1 as range 0
    //2: e.Files_B#1
    //4: e.FileName#1
    //6: e.Output1#1
    //8: e.Files_M#1
    //12: e.Output2#1
    //14: e.FileName#1
    //18: e.Files_E#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 20},
    {refalrts::icFunc, 0, 5, 21},
    {refalrts::icString, 0, 2, 22},
    {refalrts::icString, 0, 1, 24},
    {refalrts::icString, 0, 0, 26},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 28},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 29},
    {refalrts::icFunc, 0, 4, 30},
    {refalrts::icInt, 0, 1, 31},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 32},
    {refalrts::icPushStack, 0, 0, 32},
    {refalrts::icPushStack, 0, 0, 29},
    {refalrts::icSpliceElem, 0, 0, 32},
    {refalrts::icSpliceElem, 0, 0, 31},
    {refalrts::icSpliceElem, 0, 0, 30},
    {refalrts::icSpliceElem, 0, 0, 29},
    {refalrts::icPushStack, 0, 0, 28},
    {refalrts::icPushStack, 0, 0, 20},
    {refalrts::icSpliceElem, 0, 0, 28},
    {refalrts::icSpliceEVar, 0, 0, 4},
    {refalrts::icSpliceRange, 0, 0, 26},
    {refalrts::icSpliceEVar, 0, 0, 12},
    {refalrts::icSpliceRange, 0, 0, 24},
    {refalrts::icSpliceEVar, 0, 0, 6},
    {refalrts::icSpliceRange, 0, 0, 22},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +69, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // e.Files_B#1/2 ( e.FileName#1/4 0 t.Location#1/6 ) e.Files_M#1/7 ( e.FileName#1/13 0 ( # Output e.Output#1/11 ) ) e.Files_E#1/17
    {refalrts::icEPrepare, 0, 2, 0},
    {refalrts::icEStart, 0, 2, 0},
    {refalrts::icSave, 0, 15, 0},
    {refalrts::icBracketLeft, 0, 4, 15},
    {refalrts::ictVarRight, 0, 6, 4},
    {refalrts::icNumRight, 0, 0, 4},
    // closed e.FileName#1 as range 4
    {refalrts::icEPrepare, 0, 7, 15},
    {refalrts::icEStart, 0, 7, 15},
    {refalrts::icSave, 0, 17, 15},
    {refalrts::icBracketLeft, 0, 9, 17},
    {refalrts::icBracketRight, 0, 11, 9},
    {refalrts::icIdentLeft, 0, 0, 11},
    {refalrts::icNumRight, 0, 0, 9},
    {refalrts::iceRepeatLeft, 13, 4, 9},
    {refalrts::icEmpty, 0, 0, 9},
    // closed e.Output#1 as range 11
    // closed e.Files_E#1 as range 0
    //2: e.Files_B#1
    //4: e.FileName#1
    //6: t.Location#1
    //7: e.Files_M#1
    //11: e.Output#1
    //13: e.FileName#1
    //17: e.Files_E#1
    //33: e.FileName#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 19},
    {refalrts::icFunc, 0, 3, 20},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 21},
    {refalrts::icInt, 0, 1, 22},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 23},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 24},
    {refalrts::icInt, 0, 0, 25},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 26},
    {refalrts::icIdent, 0, 0, 27},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 28},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 29},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 30},
    {refalrts::icFunc, 0, 2, 31},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 32},
    {refalrts::icCopyEVar, 33, 13, 0},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 35},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 36},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 37},
    {refalrts::icPushStack, 0, 0, 37},
    {refalrts::icPushStack, 0, 0, 19},
    {refalrts::icSpliceElem, 0, 0, 37},
    {refalrts::icPushStack, 0, 0, 36},
    {refalrts::icPushStack, 0, 0, 30},
    {refalrts::icSpliceElem, 0, 0, 36},
    {refalrts::icSpliceEVar, 0, 0, 17},
    {refalrts::icLinkBrackets, 32, 35, 0},
    {refalrts::icSpliceElem, 0, 0, 35},
    {refalrts::icSpliceEVar, 0, 0, 33},
    {refalrts::icSpliceElem, 0, 0, 32},
    {refalrts::icSpliceElem, 0, 0, 31},
    {refalrts::icSpliceElem, 0, 0, 30},
    {refalrts::icLinkBrackets, 24, 29, 0},
    {refalrts::icSpliceElem, 0, 0, 29},
    {refalrts::icLinkBrackets, 26, 28, 0},
    {refalrts::icSpliceElem, 0, 0, 28},
    {refalrts::icSpliceEVar, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 27},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icSpliceEVar, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icSpliceEVar, 0, 0, 7},
    {refalrts::icLinkBrackets, 21, 23, 0},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icSpliceSTVar, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceEVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +69, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // e.Files_B#1/2 ( e.FileName#1/4 0 ( # Output e.Output#1/6 ) ) e.Files_M#1/8 ( e.FileName#1/12 0 t.Location#1/14 ) e.Files_E#1/17
    {refalrts::icEPrepare, 0, 2, 0},
    {refalrts::icEStart, 0, 2, 0},
    {refalrts::icSave, 0, 15, 0},
    {refalrts::icBracketLeft, 0, 4, 15},
    {refalrts::icBracketRight, 0, 6, 4},
    {refalrts::icIdentLeft, 0, 0, 6},
    {refalrts::icNumRight, 0, 0, 4},
    // closed e.FileName#1 as range 4
    // closed e.Output#1 as range 6
    {refalrts::icEPrepare, 0, 8, 15},
    {refalrts::icEStart, 0, 8, 15},
    {refalrts::icSave, 0, 17, 15},
    {refalrts::icBracketLeft, 0, 10, 17},
    {refalrts::iceRepeatLeft, 12, 4, 10},
    {refalrts::icNumLeft, 0, 0, 10},
    // closed e.Files_E#1 as range 0
    {refalrts::ictVarLeft, 0, 14, 10},
    {refalrts::icEmpty, 0, 0, 10},
    //2: e.Files_B#1
    //4: e.FileName#1
    //6: e.Output#1
    //8: e.Files_M#1
    //12: e.FileName#1
    //14: t.Location#1
    //17: e.Files_E#1
    //33: e.FileName#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 19},
    {refalrts::icFunc, 0, 3, 20},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 21},
    {refalrts::icInt, 0, 0, 22},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 23},
    {refalrts::icIdent, 0, 0, 24},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 25},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 26},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 27},
    {refalrts::icInt, 0, 1, 28},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 29},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 30},
    {refalrts::icFunc, 0, 2, 31},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 32},
    {refalrts::icCopyEVar, 33, 12, 0},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 35},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 36},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 37},
    {refalrts::icPushStack, 0, 0, 37},
    {refalrts::icPushStack, 0, 0, 19},
    {refalrts::icSpliceElem, 0, 0, 37},
    {refalrts::icPushStack, 0, 0, 36},
    {refalrts::icPushStack, 0, 0, 30},
    {refalrts::icSpliceElem, 0, 0, 36},
    {refalrts::icSpliceEVar, 0, 0, 17},
    {refalrts::icLinkBrackets, 32, 35, 0},
    {refalrts::icSpliceElem, 0, 0, 35},
    {refalrts::icSpliceEVar, 0, 0, 33},
    {refalrts::icSpliceElem, 0, 0, 32},
    {refalrts::icSpliceElem, 0, 0, 31},
    {refalrts::icSpliceElem, 0, 0, 30},
    {refalrts::icLinkBrackets, 27, 29, 0},
    {refalrts::icSpliceElem, 0, 0, 29},
    {refalrts::icSpliceSTVar, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 28},
    {refalrts::icSpliceEVar, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 27},
    {refalrts::icSpliceEVar, 0, 0, 8},
    {refalrts::icLinkBrackets, 21, 26, 0},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icLinkBrackets, 23, 25, 0},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icSpliceEVar, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceEVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +61, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // e.Files_B#1/2 ( e.FileName#1/4 0 t.Location1#1/6 ) e.Files_M#1/7 ( e.FileName#1/11 0 t.Location2#1/13 ) e.Files_E#1/16
    {refalrts::icEPrepare, 0, 2, 0},
    {refalrts::icEStart, 0, 2, 0},
    {refalrts::icSave, 0, 14, 0},
    {refalrts::icBracketLeft, 0, 4, 14},
    {refalrts::ictVarRight, 0, 6, 4},
    {refalrts::icNumRight, 0, 0, 4},
    // closed e.FileName#1 as range 4
    {refalrts::icEPrepare, 0, 7, 14},
    {refalrts::icEStart, 0, 7, 14},
    {refalrts::icSave, 0, 16, 14},
    {refalrts::icBracketLeft, 0, 9, 16},
    {refalrts::iceRepeatLeft, 11, 4, 9},
    {refalrts::icNumLeft, 0, 0, 9},
    // closed e.Files_E#1 as range 0
    {refalrts::ictVarLeft, 0, 13, 9},
    {refalrts::icEmpty, 0, 0, 9},
    //2: e.Files_B#1
    //4: e.FileName#1
    //6: t.Location1#1
    //7: e.Files_M#1
    //11: e.FileName#1
    //13: t.Location2#1
    //16: e.Files_E#1
    //29: e.FileName#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 18},
    {refalrts::icFunc, 0, 3, 19},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 20},
    {refalrts::icInt, 0, 0, 21},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 22},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 23},
    {refalrts::icInt, 0, 1, 24},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 25},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 26},
    {refalrts::icFunc, 0, 2, 27},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 28},
    {refalrts::icCopyEVar, 29, 11, 0},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 31},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 32},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 33},
    {refalrts::icPushStack, 0, 0, 33},
    {refalrts::icPushStack, 0, 0, 18},
    {refalrts::icSpliceElem, 0, 0, 33},
    {refalrts::icPushStack, 0, 0, 32},
    {refalrts::icPushStack, 0, 0, 26},
    {refalrts::icSpliceElem, 0, 0, 32},
    {refalrts::icSpliceEVar, 0, 0, 16},
    {refalrts::icLinkBrackets, 28, 31, 0},
    {refalrts::icSpliceElem, 0, 0, 31},
    {refalrts::icSpliceEVar, 0, 0, 29},
    {refalrts::icSpliceElem, 0, 0, 28},
    {refalrts::icSpliceElem, 0, 0, 27},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icLinkBrackets, 23, 25, 0},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icSpliceSTVar, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icSpliceEVar, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icSpliceEVar, 0, 0, 7},
    {refalrts::icLinkBrackets, 20, 22, 0},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceSTVar, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceEVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // e.Files#1/0
    // closed e.Files#1 as range 0
    //0: e.Files#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 2},
    {refalrts::icFunc, 0, 1, 3},
    {refalrts::icFunc, 0, 0, 4},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 5},
    {refalrts::icPushStack, 0, 0, 5},
    {refalrts::icPushStack, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 3},
    {refalrts::icSpliceElem, 0, 0, 2},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[12];
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
    // e.Files_B#1/2 ( e.FileName#1/4 0 ( # Output e.Output1#1/6 ) ) e.Files_M#1/8 ( e.FileName#1/14 0 ( # Output e.Output2#1/12 ) ) e.Files_E#1/18
    context[2] = 0;
    context[3] = 0;
    refalrts::start_e_loop();
    do {
      context[16] = context[0];
      context[17] = context[1];
      context[4] = 0;
      context[5] = 0;
      if( ! refalrts::brackets_left( context[4], context[5], context[16], context[17] ) )
        continue;
      context[6] = 0;
      context[7] = 0;
      if( ! refalrts::brackets_right( context[6], context[7], context[4], context[5] ) )
        continue;
      if( ! refalrts::ident_left(  & ident_Output<int>::name, context[6], context[7] ) )
        continue;
      if( ! refalrts::number_right( 0UL, context[4], context[5] ) )
        continue;
      // closed e.FileName#1 as range 4
      // closed e.Output1#1 as range 6
      context[8] = 0;
      context[9] = 0;
      refalrts::start_e_loop();
      do {
        context[18] = context[16];
        context[19] = context[17];
        context[10] = 0;
        context[11] = 0;
        if( ! refalrts::brackets_left( context[10], context[11], context[18], context[19] ) )
          continue;
        context[12] = 0;
        context[13] = 0;
        if( ! refalrts::brackets_right( context[12], context[13], context[10], context[11] ) )
          continue;
        if( ! refalrts::ident_left(  & ident_Output<int>::name, context[12], context[13] ) )
          continue;
        if( ! refalrts::number_right( 0UL, context[10], context[11] ) )
          continue;
        if( ! refalrts::repeated_evar_left( context[14], context[15], context[4], context[5], context[10], context[11] ) )
          continue;
        if( ! refalrts::empty_seq( context[10], context[11] ) )
          continue;
        // closed e.Output2#1 as range 12
        // closed e.Files_E#1 as range 0
        //2: e.Files_B#1
        //4: e.FileName#1
        //6: e.Output1#1
        //8: e.Files_M#1
        //12: e.Output2#1
        //14: e.FileName#1
        //18: e.Files_E#1

        refalrts::reset_allocator();
        refalrts::Iter res = arg_begin;
        if( ! refalrts::alloc_open_call( context[20] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_name( context[21], WriteLine, "WriteLine" ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_chars( context[22], context[23], "COMMAND LINE ERROR: output files ", 33 ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_chars( context[24], context[25], " and ", 5 ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_chars( context[26], context[27], " has some filename ", 19 ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_call( context[28] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_open_call( context[29] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_name( context[30], Exit, "Exit" ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_number( context[31], 1UL ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_call( context[32] ) )
          return refalrts::cNoMemory;
        refalrts::push_stack( context[32] );
        refalrts::push_stack( context[29] );
        res = refalrts::splice_elem( res, context[32] );
        res = refalrts::splice_elem( res, context[31] );
        res = refalrts::splice_elem( res, context[30] );
        res = refalrts::splice_elem( res, context[29] );
        refalrts::push_stack( context[28] );
        refalrts::push_stack( context[20] );
        res = refalrts::splice_elem( res, context[28] );
        res = refalrts::splice_evar( res, context[4], context[5] );
        res = refalrts::splice_evar( res, context[26], context[27] );
        res = refalrts::splice_evar( res, context[12], context[13] );
        res = refalrts::splice_evar( res, context[24], context[25] );
        res = refalrts::splice_evar( res, context[6], context[7] );
        res = refalrts::splice_evar( res, context[22], context[23] );
        res = refalrts::splice_elem( res, context[21] );
        res = refalrts::splice_elem( res, context[20] );
        refalrts::use( res );
        refalrts::splice_to_freelist( arg_begin, arg_end );
        return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
      } while ( refalrts::open_evar_advance( context[8], context[9], context[16], context[17] ) );
    } while ( refalrts::open_evar_advance( context[2], context[3], context[0], context[1] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    // e.Files_B#1/2 ( e.FileName#1/4 0 t.Location#1/6 ) e.Files_M#1/7 ( e.FileName#1/13 0 ( # Output e.Output#1/11 ) ) e.Files_E#1/17
    context[2] = 0;
    context[3] = 0;
    refalrts::start_e_loop();
    do {
      context[15] = context[0];
      context[16] = context[1];
      context[4] = 0;
      context[5] = 0;
      if( ! refalrts::brackets_left( context[4], context[5], context[15], context[16] ) )
        continue;
      if( ! refalrts::tvar_right( context[6], context[4], context[5] ) )
        continue;
      if( ! refalrts::number_right( 0UL, context[4], context[5] ) )
        continue;
      // closed e.FileName#1 as range 4
      context[7] = 0;
      context[8] = 0;
      refalrts::start_e_loop();
      do {
        context[17] = context[15];
        context[18] = context[16];
        context[9] = 0;
        context[10] = 0;
        if( ! refalrts::brackets_left( context[9], context[10], context[17], context[18] ) )
          continue;
        context[11] = 0;
        context[12] = 0;
        if( ! refalrts::brackets_right( context[11], context[12], context[9], context[10] ) )
          continue;
        if( ! refalrts::ident_left(  & ident_Output<int>::name, context[11], context[12] ) )
          continue;
        if( ! refalrts::number_right( 0UL, context[9], context[10] ) )
          continue;
        if( ! refalrts::repeated_evar_left( context[13], context[14], context[4], context[5], context[9], context[10] ) )
          continue;
        if( ! refalrts::empty_seq( context[9], context[10] ) )
          continue;
        // closed e.Output#1 as range 11
        // closed e.Files_E#1 as range 0
        //2: e.Files_B#1
        //4: e.FileName#1
        //6: t.Location#1
        //7: e.Files_M#1
        //11: e.Output#1
        //13: e.FileName#1
        //17: e.Files_E#1
        //33: e.FileName#1

        refalrts::reset_allocator();
        refalrts::Iter res = arg_begin;
        if( ! refalrts::alloc_open_call( context[19] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_name( context[20], ScanCollisions, "ScanCollisions" ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_open_bracket( context[21] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_number( context[22], 1UL ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_bracket( context[23] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_open_bracket( context[24] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_number( context[25], 0UL ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_open_bracket( context[26] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_ident( context[27], & ident_Output<int>::name ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_bracket( context[28] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_bracket( context[29] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_open_call( context[30] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_name( context[31], Renumerate, "Renumerate" ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_open_bracket( context[32] ) )
          return refalrts::cNoMemory;
        if (! refalrts::copy_evar(context[33], context[34], context[13], context[14]))
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_bracket( context[35] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_call( context[36] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_call( context[37] ) )
          return refalrts::cNoMemory;
        refalrts::push_stack( context[37] );
        refalrts::push_stack( context[19] );
        res = refalrts::splice_elem( res, context[37] );
        refalrts::push_stack( context[36] );
        refalrts::push_stack( context[30] );
        res = refalrts::splice_elem( res, context[36] );
        res = refalrts::splice_evar( res, context[17], context[18] );
        refalrts::link_brackets( context[32], context[35] );
        res = refalrts::splice_elem( res, context[35] );
        res = refalrts::splice_evar( res, context[33], context[34] );
        res = refalrts::splice_elem( res, context[32] );
        res = refalrts::splice_elem( res, context[31] );
        res = refalrts::splice_elem( res, context[30] );
        refalrts::link_brackets( context[24], context[29] );
        res = refalrts::splice_elem( res, context[29] );
        refalrts::link_brackets( context[26], context[28] );
        res = refalrts::splice_elem( res, context[28] );
        res = refalrts::splice_evar( res, context[11], context[12] );
        res = refalrts::splice_elem( res, context[27] );
        res = refalrts::splice_elem( res, context[26] );
        res = refalrts::splice_elem( res, context[25] );
        res = refalrts::splice_evar( res, context[13], context[14] );
        res = refalrts::splice_elem( res, context[24] );
        res = refalrts::splice_evar( res, context[7], context[8] );
        refalrts::link_brackets( context[21], context[23] );
        res = refalrts::splice_elem( res, context[23] );
        res = refalrts::splice_stvar( res, context[6] );
        res = refalrts::splice_elem( res, context[22] );
        res = refalrts::splice_evar( res, context[4], context[5] );
        res = refalrts::splice_elem( res, context[21] );
        res = refalrts::splice_evar( res, context[2], context[3] );
        res = refalrts::splice_elem( res, context[20] );
        res = refalrts::splice_elem( res, context[19] );
        refalrts::use( res );
        refalrts::splice_to_freelist( arg_begin, arg_end );
        return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
      } while ( refalrts::open_evar_advance( context[7], context[8], context[15], context[16] ) );
    } while ( refalrts::open_evar_advance( context[2], context[3], context[0], context[1] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    // e.Files_B#1/2 ( e.FileName#1/4 0 ( # Output e.Output#1/6 ) ) e.Files_M#1/8 ( e.FileName#1/12 0 t.Location#1/14 ) e.Files_E#1/17
    context[2] = 0;
    context[3] = 0;
    refalrts::start_e_loop();
    do {
      context[15] = context[0];
      context[16] = context[1];
      context[4] = 0;
      context[5] = 0;
      if( ! refalrts::brackets_left( context[4], context[5], context[15], context[16] ) )
        continue;
      context[6] = 0;
      context[7] = 0;
      if( ! refalrts::brackets_right( context[6], context[7], context[4], context[5] ) )
        continue;
      if( ! refalrts::ident_left(  & ident_Output<int>::name, context[6], context[7] ) )
        continue;
      if( ! refalrts::number_right( 0UL, context[4], context[5] ) )
        continue;
      // closed e.FileName#1 as range 4
      // closed e.Output#1 as range 6
      context[8] = 0;
      context[9] = 0;
      refalrts::start_e_loop();
      do {
        context[17] = context[15];
        context[18] = context[16];
        context[10] = 0;
        context[11] = 0;
        if( ! refalrts::brackets_left( context[10], context[11], context[17], context[18] ) )
          continue;
        if( ! refalrts::repeated_evar_left( context[12], context[13], context[4], context[5], context[10], context[11] ) )
          continue;
        if( ! refalrts::number_left( 0UL, context[10], context[11] ) )
          continue;
        // closed e.Files_E#1 as range 0
        if( ! refalrts::tvar_left( context[14], context[10], context[11] ) )
          continue;
        if( ! refalrts::empty_seq( context[10], context[11] ) )
          continue;
        //2: e.Files_B#1
        //4: e.FileName#1
        //6: e.Output#1
        //8: e.Files_M#1
        //12: e.FileName#1
        //14: t.Location#1
        //17: e.Files_E#1
        //33: e.FileName#1

        refalrts::reset_allocator();
        refalrts::Iter res = arg_begin;
        if( ! refalrts::alloc_open_call( context[19] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_name( context[20], ScanCollisions, "ScanCollisions" ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_open_bracket( context[21] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_number( context[22], 0UL ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_open_bracket( context[23] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_ident( context[24], & ident_Output<int>::name ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_bracket( context[25] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_bracket( context[26] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_open_bracket( context[27] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_number( context[28], 1UL ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_bracket( context[29] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_open_call( context[30] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_name( context[31], Renumerate, "Renumerate" ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_open_bracket( context[32] ) )
          return refalrts::cNoMemory;
        if (! refalrts::copy_evar(context[33], context[34], context[12], context[13]))
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_bracket( context[35] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_call( context[36] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_call( context[37] ) )
          return refalrts::cNoMemory;
        refalrts::push_stack( context[37] );
        refalrts::push_stack( context[19] );
        res = refalrts::splice_elem( res, context[37] );
        refalrts::push_stack( context[36] );
        refalrts::push_stack( context[30] );
        res = refalrts::splice_elem( res, context[36] );
        res = refalrts::splice_evar( res, context[17], context[18] );
        refalrts::link_brackets( context[32], context[35] );
        res = refalrts::splice_elem( res, context[35] );
        res = refalrts::splice_evar( res, context[33], context[34] );
        res = refalrts::splice_elem( res, context[32] );
        res = refalrts::splice_elem( res, context[31] );
        res = refalrts::splice_elem( res, context[30] );
        refalrts::link_brackets( context[27], context[29] );
        res = refalrts::splice_elem( res, context[29] );
        res = refalrts::splice_stvar( res, context[14] );
        res = refalrts::splice_elem( res, context[28] );
        res = refalrts::splice_evar( res, context[12], context[13] );
        res = refalrts::splice_elem( res, context[27] );
        res = refalrts::splice_evar( res, context[8], context[9] );
        refalrts::link_brackets( context[21], context[26] );
        res = refalrts::splice_elem( res, context[26] );
        refalrts::link_brackets( context[23], context[25] );
        res = refalrts::splice_elem( res, context[25] );
        res = refalrts::splice_evar( res, context[6], context[7] );
        res = refalrts::splice_elem( res, context[24] );
        res = refalrts::splice_elem( res, context[23] );
        res = refalrts::splice_elem( res, context[22] );
        res = refalrts::splice_evar( res, context[4], context[5] );
        res = refalrts::splice_elem( res, context[21] );
        res = refalrts::splice_evar( res, context[2], context[3] );
        res = refalrts::splice_elem( res, context[20] );
        res = refalrts::splice_elem( res, context[19] );
        refalrts::use( res );
        refalrts::splice_to_freelist( arg_begin, arg_end );
        return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
      } while ( refalrts::open_evar_advance( context[8], context[9], context[15], context[16] ) );
    } while ( refalrts::open_evar_advance( context[2], context[3], context[0], context[1] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    // e.Files_B#1/2 ( e.FileName#1/4 0 t.Location1#1/6 ) e.Files_M#1/7 ( e.FileName#1/11 0 t.Location2#1/13 ) e.Files_E#1/16
    context[2] = 0;
    context[3] = 0;
    refalrts::start_e_loop();
    do {
      context[14] = context[0];
      context[15] = context[1];
      context[4] = 0;
      context[5] = 0;
      if( ! refalrts::brackets_left( context[4], context[5], context[14], context[15] ) )
        continue;
      if( ! refalrts::tvar_right( context[6], context[4], context[5] ) )
        continue;
      if( ! refalrts::number_right( 0UL, context[4], context[5] ) )
        continue;
      // closed e.FileName#1 as range 4
      context[7] = 0;
      context[8] = 0;
      refalrts::start_e_loop();
      do {
        context[16] = context[14];
        context[17] = context[15];
        context[9] = 0;
        context[10] = 0;
        if( ! refalrts::brackets_left( context[9], context[10], context[16], context[17] ) )
          continue;
        if( ! refalrts::repeated_evar_left( context[11], context[12], context[4], context[5], context[9], context[10] ) )
          continue;
        if( ! refalrts::number_left( 0UL, context[9], context[10] ) )
          continue;
        // closed e.Files_E#1 as range 0
        if( ! refalrts::tvar_left( context[13], context[9], context[10] ) )
          continue;
        if( ! refalrts::empty_seq( context[9], context[10] ) )
          continue;
        //2: e.Files_B#1
        //4: e.FileName#1
        //6: t.Location1#1
        //7: e.Files_M#1
        //11: e.FileName#1
        //13: t.Location2#1
        //16: e.Files_E#1
        //29: e.FileName#1

        refalrts::reset_allocator();
        refalrts::Iter res = arg_begin;
        if( ! refalrts::alloc_open_call( context[18] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_name( context[19], ScanCollisions, "ScanCollisions" ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_open_bracket( context[20] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_number( context[21], 0UL ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_bracket( context[22] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_open_bracket( context[23] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_number( context[24], 1UL ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_bracket( context[25] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_open_call( context[26] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_name( context[27], Renumerate, "Renumerate" ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_open_bracket( context[28] ) )
          return refalrts::cNoMemory;
        if (! refalrts::copy_evar(context[29], context[30], context[11], context[12]))
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_bracket( context[31] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_call( context[32] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_call( context[33] ) )
          return refalrts::cNoMemory;
        refalrts::push_stack( context[33] );
        refalrts::push_stack( context[18] );
        res = refalrts::splice_elem( res, context[33] );
        refalrts::push_stack( context[32] );
        refalrts::push_stack( context[26] );
        res = refalrts::splice_elem( res, context[32] );
        res = refalrts::splice_evar( res, context[16], context[17] );
        refalrts::link_brackets( context[28], context[31] );
        res = refalrts::splice_elem( res, context[31] );
        res = refalrts::splice_evar( res, context[29], context[30] );
        res = refalrts::splice_elem( res, context[28] );
        res = refalrts::splice_elem( res, context[27] );
        res = refalrts::splice_elem( res, context[26] );
        refalrts::link_brackets( context[23], context[25] );
        res = refalrts::splice_elem( res, context[25] );
        res = refalrts::splice_stvar( res, context[13] );
        res = refalrts::splice_elem( res, context[24] );
        res = refalrts::splice_evar( res, context[11], context[12] );
        res = refalrts::splice_elem( res, context[23] );
        res = refalrts::splice_evar( res, context[7], context[8] );
        refalrts::link_brackets( context[20], context[22] );
        res = refalrts::splice_elem( res, context[22] );
        res = refalrts::splice_stvar( res, context[6] );
        res = refalrts::splice_elem( res, context[21] );
        res = refalrts::splice_evar( res, context[4], context[5] );
        res = refalrts::splice_elem( res, context[20] );
        res = refalrts::splice_evar( res, context[2], context[3] );
        res = refalrts::splice_elem( res, context[19] );
        res = refalrts::splice_elem( res, context[18] );
        refalrts::use( res );
        refalrts::splice_to_freelist( arg_begin, arg_end );
        return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
      } while ( refalrts::open_evar_advance( context[7], context[8], context[14], context[15] ) );
    } while ( refalrts::open_evar_advance( context[2], context[3], context[0], context[1] ) );
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  refalrts::move_left( context[0], context[1] );
  refalrts::move_left( context[0], context[1] );
  refalrts::move_right( context[0], context[1] );
  // e.Files#1/0
  // closed e.Files#1 as range 0
  //0: e.Files#1

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_call( context[2] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[3], Map, "Map" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[4], RestoreName, "RestoreName" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[5] ) )
    return refalrts::cNoMemory;
  refalrts::push_stack( context[5] );
  refalrts::push_stack( context[2] );
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

static refalrts::FnResult lambda_Renumerate_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 24 elems
  refalrts::Iter context[24];
  refalrts::zeros( context, 24 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { Inc, "Inc" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_Source<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +44, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.FileName#1/2 ) s.NextNumber#2/12 ( e.FileName#1/10 0 ( # Source ( e.Source#2/8 ) e.Output#2/6 ) )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketRight, 0, 4, 0},
    {refalrts::icBracketRight, 0, 6, 4},
    {refalrts::icIdentLeft, 0, 0, 6},
    {refalrts::icNumRight, 0, 0, 4},
    {refalrts::icBracketLeft, 0, 8, 6},
    // closed e.FileName#1 as range 2
    {refalrts::iceRepeatLeft, 10, 2, 4},
    {refalrts::icEmpty, 0, 0, 4},
    // closed e.Source#2 as range 8
    // closed e.Output#2 as range 6
    {refalrts::icsVarLeft, 0, 12, 0},
    {refalrts::icEmpty, 0, 0, 0},
    //2: e.FileName#1
    //6: e.Output#2
    //8: e.Source#2
    //10: e.FileName#1
    //12: s.NextNumber#2
    //17: s.NextNumber#2
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 13},
    {refalrts::icFunc, 0, 0, 14},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 15},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 16},
    {refalrts::icCopySTVar, 17, 12, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 18},
    {refalrts::icIdent, 0, 0, 19},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 20},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 21},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 22},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 23},
    {refalrts::icLinkBrackets, 16, 23, 0},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icLinkBrackets, 18, 22, 0},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceEVar, 0, 0, 6},
    {refalrts::icLinkBrackets, 20, 21, 0},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceEVar, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceSTVar, 0, 0, 17},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icPushStack, 0, 0, 15},
    {refalrts::icPushStack, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceSTVar, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.FileName#1/2 ) s.NextNumber#2/4 t.NextFile#2/5
    {refalrts::icBracketLeft, 0, 2, 0},
    // closed e.FileName#1 as range 2
    {refalrts::icsVarLeft, 0, 4, 0},
    {refalrts::ictVarLeft, 0, 5, 0},
    {refalrts::icEmpty, 0, 0, 0},
    //2: e.FileName#1
    //4: s.NextNumber#2
    //5: t.NextFile#2
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icSpliceSTVar, 0, 0, 5},
    {refalrts::icSpliceSTVar, 0, 0, 4},
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
    // ( e.FileName#1/2 ) s.NextNumber#2/12 ( e.FileName#1/10 0 ( # Source ( e.Source#2/8 ) e.Output#2/6 ) )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_right( context[4], context[5], context[0], context[1] ) )
      continue;
    context[6] = 0;
    context[7] = 0;
    if( ! refalrts::brackets_right( context[6], context[7], context[4], context[5] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_Source<int>::name, context[6], context[7] ) )
      continue;
    if( ! refalrts::number_right( 0UL, context[4], context[5] ) )
      continue;
    context[8] = 0;
    context[9] = 0;
    if( ! refalrts::brackets_left( context[8], context[9], context[6], context[7] ) )
      continue;
    // closed e.FileName#1 as range 2
    if( ! refalrts::repeated_evar_left( context[10], context[11], context[2], context[3], context[4], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[4], context[5] ) )
      continue;
    // closed e.Source#2 as range 8
    // closed e.Output#2 as range 6
    if( ! refalrts::svar_left( context[12], context[0], context[1] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    //2: e.FileName#1
    //6: e.Output#2
    //8: e.Source#2
    //10: e.FileName#1
    //12: s.NextNumber#2
    //17: s.NextNumber#2

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[14], Inc, "Inc" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[15] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[16] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[17], context[12]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[18] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[19], & ident_Source<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[20] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[21] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[22] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[23] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[16], context[23] );
    res = refalrts::splice_elem( res, context[23] );
    refalrts::link_brackets( context[18], context[22] );
    res = refalrts::splice_elem( res, context[22] );
    res = refalrts::splice_evar( res, context[6], context[7] );
    refalrts::link_brackets( context[20], context[21] );
    res = refalrts::splice_elem( res, context[21] );
    res = refalrts::splice_evar( res, context[8], context[9] );
    res = refalrts::splice_elem( res, context[20] );
    res = refalrts::splice_elem( res, context[19] );
    res = refalrts::splice_elem( res, context[18] );
    res = refalrts::splice_stvar( res, context[17] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_elem( res, context[16] );
    refalrts::push_stack( context[15] );
    refalrts::push_stack( context[13] );
    res = refalrts::splice_elem( res, context[15] );
    res = refalrts::splice_stvar( res, context[12] );
    res = refalrts::splice_elem( res, context[14] );
    res = refalrts::splice_elem( res, context[13] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  refalrts::move_left( context[0], context[1] );
  refalrts::move_left( context[0], context[1] );
  refalrts::move_right( context[0], context[1] );
  // ( e.FileName#1/2 ) s.NextNumber#2/4 t.NextFile#2/5
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.FileName#1 as range 2
  if( ! refalrts::svar_left( context[4], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::tvar_left( context[5], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  //2: e.FileName#1
  //4: s.NextNumber#2
  //5: t.NextFile#2

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  res = refalrts::splice_stvar( res, context[5] );
  res = refalrts::splice_stvar( res, context[4] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult Renumerate(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { lambda_Renumerate_0, "lambda_Renumerate_0" },
    { refalrts::create_closure, "refalrts::create_closure" },
    { MapReduce, "MapReduce" },
    { DelAccumulator, "DelAccumulator" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.FileName#1/2 ) e.Files#1/0
    {refalrts::icBracketLeft, 0, 2, 0},
    // closed e.FileName#1 as range 2
    // closed e.Files#1 as range 0
    //0: e.Files#1
    //2: e.FileName#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 4},
    {refalrts::icFunc, 0, 3, 5},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 6},
    {refalrts::icFunc, 0, 2, 7},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 8},
    {refalrts::icFunc, 0, 1, 9},
    {refalrts::icFunc, 0, 0, 10},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 11},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 12},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 13},
    {refalrts::icInt, 0, 2, 14},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 15},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 16},
    {refalrts::icPushStack, 0, 0, 16},
    {refalrts::icPushStack, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icPushStack, 0, 0, 15},
    {refalrts::icPushStack, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icPushStack, 0, 0, 13},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icLinkBrackets, 11, 12, 0},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 9},
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
  // ( e.FileName#1/2 ) e.Files#1/0
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.FileName#1 as range 2
  // closed e.Files#1 as range 0
  //0: e.Files#1
  //2: e.FileName#1

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_call( context[4] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[5], DelAccumulator, "DelAccumulator" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[7], MapReduce, "MapReduce" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[9], refalrts::create_closure, "refalrts::create_closure" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[10], lambda_Renumerate_0, "lambda_Renumerate_0" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_number( context[14], 2UL ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[16] ) )
    return refalrts::cNoMemory;
  refalrts::push_stack( context[16] );
  refalrts::push_stack( context[4] );
  res = refalrts::splice_elem( res, context[16] );
  refalrts::push_stack( context[15] );
  refalrts::push_stack( context[6] );
  res = refalrts::splice_elem( res, context[15] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_elem( res, context[14] );
  refalrts::push_stack( context[13] );
  refalrts::push_stack( context[8] );
  res = refalrts::splice_elem( res, context[13] );
  refalrts::link_brackets( context[11], context[12] );
  res = refalrts::splice_elem( res, context[12] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_elem( res, context[11] );
  res = refalrts::splice_elem( res, context[10] );
  res = refalrts::splice_elem( res, context[9] );
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

static refalrts::FnResult lambda_RestoreName_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { StrFromInt, "StrFromInt" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  static const refalrts::StringItem strings[] = {
    {".cpp", 4}
  };
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +5, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // 0 e.Output1#2/0
    {refalrts::icNumLeft, 0, 0, 0},
    // closed e.Output1#2 as range 0
    //0: e.Output1#2
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // s.Number#2/2 e.OutName#2/0 '.cpp'
    {refalrts::icCharRight, 0, static_cast<unsigned char>('p'), 0},
    {refalrts::icCharRight, 0, static_cast<unsigned char>('p'), 0},
    {refalrts::icCharRight, 0, static_cast<unsigned char>('c'), 0},
    {refalrts::icCharRight, 0, static_cast<unsigned char>('.'), 0},
    {refalrts::icsVarLeft, 0, 2, 0},
    // closed e.OutName#2 as range 0
    //0: e.OutName#2
    //2: s.Number#2
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icChar, 0, '@', 3},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 4},
    {refalrts::icFunc, 0, 0, 5},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 6},
    {refalrts::icString, 0, 0, 7},
    {refalrts::icSpliceRange, 0, 0, 7},
    {refalrts::icPushStack, 0, 0, 6},
    {refalrts::icPushStack, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceSTVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 3},
    {refalrts::icSpliceEVar, 0, 0, 0},
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
    // 0 e.Output1#2/0
    if( ! refalrts::number_left( 0UL, context[0], context[1] ) )
      continue;
    // closed e.Output1#2 as range 0
    //0: e.Output1#2

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    res = refalrts::splice_evar( res, context[0], context[1] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  refalrts::move_left( context[0], context[1] );
  refalrts::move_left( context[0], context[1] );
  refalrts::move_right( context[0], context[1] );
  // s.Number#2/2 e.OutName#2/0 '.cpp'
  if( ! refalrts::char_right( 'p', context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::char_right( 'p', context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::char_right( 'c', context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::char_right( '.', context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[2], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.OutName#2 as range 0
  //0: e.OutName#2
  //2: s.Number#2

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_char( context[3], '@' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[4] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[5], StrFromInt, "StrFromInt" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[7], context[8], ".cpp", 4 ) )
    return refalrts::cNoMemory;
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::push_stack( context[6] );
  refalrts::push_stack( context[4] );
  res = refalrts::splice_elem( res, context[6] );
  res = refalrts::splice_stvar( res, context[2] );
  res = refalrts::splice_elem( res, context[5] );
  res = refalrts::splice_elem( res, context[4] );
  res = refalrts::splice_elem( res, context[3] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult RestoreName(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { lambda_RestoreName_0, "lambda_RestoreName_0" },
    { Fetch, "Fetch" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_Source<int>::name,
    & ident_Output<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +16, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.FileName#1/2 s.Num#1/6 ( # Output e.OutputName#1/4 ) )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketRight, 0, 4, 2},
    {refalrts::icIdentLeft, 0, 1, 4},
    {refalrts::icEmpty, 0, 0, 0},
    // closed e.OutputName#1 as range 4
    {refalrts::icsVarRight, 0, 6, 2},
    // closed e.FileName#1 as range 2
    //2: e.FileName#1
    //4: e.OutputName#1
    //6: s.Num#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 7},
    {refalrts::icIdent, 0, 1, 8},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 9},
    {refalrts::icLinkBrackets, 7, 9, 0},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceEVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.FileName#1/2 s.Num#1/8 ( # Source ( e.Source#1/6 ) e.Output#1/4 ) )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketRight, 0, 4, 2},
    {refalrts::icIdentLeft, 0, 0, 4},
    {refalrts::icBracketLeft, 0, 6, 4},
    {refalrts::icEmpty, 0, 0, 0},
    // closed e.Source#1 as range 6
    // closed e.Output#1 as range 4
    {refalrts::icsVarRight, 0, 8, 2},
    // closed e.FileName#1 as range 2
    //2: e.FileName#1
    //4: e.Output#1
    //6: e.Source#1
    //8: s.Num#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 9},
    {refalrts::icIdent, 0, 0, 10},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 11},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 12},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 13},
    {refalrts::icFunc, 0, 1, 14},
    {refalrts::icFunc, 0, 0, 15},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 16},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 17},
    {refalrts::icLinkBrackets, 9, 17, 0},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icPushStack, 0, 0, 16},
    {refalrts::icPushStack, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceEVar, 0, 0, 4},
    {refalrts::icSpliceSTVar, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icLinkBrackets, 11, 12, 0},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceEVar, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 9},
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
    // ( e.FileName#1/2 s.Num#1/6 ( # Output e.OutputName#1/4 ) )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_right( context[4], context[5], context[2], context[3] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_Output<int>::name, context[4], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    // closed e.OutputName#1 as range 4
    if( ! refalrts::svar_right( context[6], context[2], context[3] ) )
      continue;
    // closed e.FileName#1 as range 2
    //2: e.FileName#1
    //4: e.OutputName#1
    //6: s.Num#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[7] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[8], & ident_Output<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[9] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[7], context[9] );
    res = refalrts::splice_elem( res, context[9] );
    res = refalrts::splice_evar( res, context[4], context[5] );
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
  // ( e.FileName#1/2 s.Num#1/8 ( # Source ( e.Source#1/6 ) e.Output#1/4 ) )
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[4] = 0;
  context[5] = 0;
  if( ! refalrts::brackets_right( context[4], context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::ident_left(  & ident_Source<int>::name, context[4], context[5] ) )
    return refalrts::cRecognitionImpossible;
  context[6] = 0;
  context[7] = 0;
  if( ! refalrts::brackets_left( context[6], context[7], context[4], context[5] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Source#1 as range 6
  // closed e.Output#1 as range 4
  if( ! refalrts::svar_right( context[8], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.FileName#1 as range 2
  //2: e.FileName#1
  //4: e.Output#1
  //6: e.Source#1
  //8: s.Num#1

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_bracket( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[10], & ident_Source<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[14], Fetch, "Fetch" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[15], lambda_RestoreName_0, "lambda_RestoreName_0" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[16] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[17] ) )
    return refalrts::cNoMemory;
  refalrts::link_brackets( context[9], context[17] );
  res = refalrts::splice_elem( res, context[17] );
  refalrts::push_stack( context[16] );
  refalrts::push_stack( context[13] );
  res = refalrts::splice_elem( res, context[16] );
  res = refalrts::splice_elem( res, context[15] );
  res = refalrts::splice_evar( res, context[4], context[5] );
  res = refalrts::splice_stvar( res, context[8] );
  res = refalrts::splice_elem( res, context[14] );
  res = refalrts::splice_elem( res, context[13] );
  refalrts::link_brackets( context[11], context[12] );
  res = refalrts::splice_elem( res, context[12] );
  res = refalrts::splice_evar( res, context[6], context[7] );
  res = refalrts::splice_elem( res, context[11] );
  res = refalrts::splice_elem( res, context[10] );
  res = refalrts::splice_elem( res, context[9] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}


//End of file
