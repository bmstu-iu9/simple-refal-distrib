// Automatically generated file. Don't edit!
#include "refalrts.h"


extern refalrts::FnResult Fetch(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult GetOpt(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Map(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult MapReduce(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult ParseCommandLine(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Seq(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult CheckRepeated(refalrts::Iter arg_begin, refalrts::Iter arg_end);

// identifier #BadValue_GenMode
template <typename SREFAL_PARAM_INT>
struct ident_BadValue_GenMode {
  static const char *name() {
    return "BadValue_GenMode";
  }
};

// identifier #BadValue_Opt
template <typename SREFAL_PARAM_INT>
struct ident_BadValue_Opt {
  static const char *name() {
    return "BadValue_Opt";
  }
};

// identifier #Both
template <typename SREFAL_PARAM_INT>
struct ident_Both {
  static const char *name() {
    return "Both";
  }
};

// identifier #CppCompiler
template <typename SREFAL_PARAM_INT>
struct ident_CppCompiler {
  static const char *name() {
    return "CppCompiler";
  }
};

// identifier #CppFlag
template <typename SREFAL_PARAM_INT>
struct ident_CppFlag {
  static const char *name() {
    return "CppFlag";
  }
};

// identifier #CppFlags
template <typename SREFAL_PARAM_INT>
struct ident_CppFlags {
  static const char *name() {
    return "CppFlags";
  }
};

// identifier #ErrorFile
template <typename SREFAL_PARAM_INT>
struct ident_ErrorFile {
  static const char *name() {
    return "ErrorFile";
  }
};

// identifier #FILE
template <typename SREFAL_PARAM_INT>
struct ident_FILE {
  static const char *name() {
    return "FILE";
  }
};

// identifier #Fails
template <typename SREFAL_PARAM_INT>
struct ident_Fails {
  static const char *name() {
    return "Fails";
  }
};

// identifier #FlagsForNoCompiler
template <typename SREFAL_PARAM_INT>
struct ident_FlagsForNoCompiler {
  static const char *name() {
    return "FlagsForNoCompiler";
  }
};

// identifier #GenMode
template <typename SREFAL_PARAM_INT>
struct ident_GenMode {
  static const char *name() {
    return "GenMode";
  }
};

// identifier #NoCppCompiler
template <typename SREFAL_PARAM_INT>
struct ident_NoCppCompiler {
  static const char *name() {
    return "NoCppCompiler";
  }
};

// identifier #NoErrorFile
template <typename SREFAL_PARAM_INT>
struct ident_NoErrorFile {
  static const char *name() {
    return "NoErrorFile";
  }
};

// identifier #NoRequiredParam
template <typename SREFAL_PARAM_INT>
struct ident_NoRequiredParam {
  static const char *name() {
    return "NoRequiredParam";
  }
};

// identifier #OnlyDirect
template <typename SREFAL_PARAM_INT>
struct ident_OnlyDirect {
  static const char *name() {
    return "OnlyDirect";
  }
};

// identifier #OnlyInterpret
template <typename SREFAL_PARAM_INT>
struct ident_OnlyInterpret {
  static const char *name() {
    return "OnlyInterpret";
  }
};

// identifier #Opt
template <typename SREFAL_PARAM_INT>
struct ident_Opt {
  static const char *name() {
    return "Opt";
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

// identifier #RepeatOption
template <typename SREFAL_PARAM_INT>
struct ident_RepeatOption {
  static const char *name() {
    return "RepeatOption";
  }
};

// identifier #Required
template <typename SREFAL_PARAM_INT>
struct ident_Required {
  static const char *name() {
    return "Required";
  }
};

// identifier #RuntimeFolder
template <typename SREFAL_PARAM_INT>
struct ident_RuntimeFolder {
  static const char *name() {
    return "RuntimeFolder";
  }
};

// identifier #SearchFolder
template <typename SREFAL_PARAM_INT>
struct ident_SearchFolder {
  static const char *name() {
    return "SearchFolder";
  }
};

// identifier #Success
template <typename SREFAL_PARAM_INT>
struct ident_Success {
  static const char *name() {
    return "Success";
  }
};

// identifier #UnknownLongOption
template <typename SREFAL_PARAM_INT>
struct ident_UnknownLongOption {
  static const char *name() {
    return "UnknownLongOption";
  }
};

// identifier #UnknownShortOption
template <typename SREFAL_PARAM_INT>
struct ident_UnknownShortOption {
  static const char *name() {
    return "UnknownShortOption";
  }
};

static refalrts::FnResult lambda_ParseCommandLine_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { CheckRepeated, "CheckRepeated" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_ErrorFile<int>::name,
    & ident_Opt<int>::name,
    & ident_GenMode<int>::name,
    & ident_CppCompiler<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Errors#2/2 ) e.Options#2/0
    {refalrts::icBracketLeft, 0, 2, 0},
    // closed e.Errors#2 as range 2
    // closed e.Options#2 as range 0
    //0: e.Options#2
    //2: e.Errors#2
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 4},
    {refalrts::icFunc, 0, 0, 5},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icIdent, 0, 3, 7},
    {refalrts::icIdent, 0, 2, 8},
    {refalrts::icIdent, 0, 1, 9},
    {refalrts::icIdent, 0, 0, 10},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 11},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 12},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 13},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 14},
    {refalrts::icPushStack, 0, 0, 14},
    {refalrts::icPushStack, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icLinkBrackets, 12, 13, 0},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icLinkBrackets, 6, 11, 0},
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
  // ( e.Errors#2/2 ) e.Options#2/0
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Errors#2 as range 2
  // closed e.Options#2 as range 0
  //0: e.Options#2
  //2: e.Errors#2

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_call( context[4] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[5], CheckRepeated, "CheckRepeated" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[7], & ident_CppCompiler<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[8], & ident_GenMode<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[9], & ident_Opt<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[10], & ident_ErrorFile<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[14] ) )
    return refalrts::cNoMemory;
  refalrts::push_stack( context[14] );
  refalrts::push_stack( context[4] );
  res = refalrts::splice_elem( res, context[14] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  refalrts::link_brackets( context[12], context[13] );
  res = refalrts::splice_elem( res, context[13] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_elem( res, context[12] );
  refalrts::link_brackets( context[6], context[11] );
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

static refalrts::FnResult lambda_ParseCommandLine_1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
#ifdef INTERPRET
  using refalrts::functions;
  static const refalrts::RefalIdentifier idents[] = {
    & ident_NoCppCompiler<int>::name,
    & ident_CppCompiler<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +29, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Errors#2/2 ) e.Options_B#2/4 ( # CppCompiler s.Num#2/8 e.CppCompiler#2/6 ) e.Options_E#2/9
    {refalrts::icBracketLeft, 0, 2, 0},
    // closed e.Errors#2 as range 2
    {refalrts::icEPrepare, 0, 4, 0},
    {refalrts::icEStart, 0, 4, 0},
    {refalrts::icSave, 0, 9, 0},
    {refalrts::icBracketLeft, 0, 6, 9},
    {refalrts::icIdentLeft, 0, 1, 6},
    // closed e.Options_E#2 as range 0
    {refalrts::icsVarLeft, 0, 8, 6},
    // closed e.CppCompiler#2 as range 6
    //2: e.Errors#2
    //4: e.Options_B#2
    //6: e.CppCompiler#2
    //8: s.Num#2
    //9: e.Options_E#2
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 11},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 12},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 13},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 14},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 15},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 16},
    {refalrts::icSpliceEVar, 0, 0, 9},
    {refalrts::icSpliceEVar, 0, 0, 4},
    {refalrts::icLinkBrackets, 13, 16, 0},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icLinkBrackets, 14, 15, 0},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceEVar, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icLinkBrackets, 11, 12, 0},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Errors#2/2 ) e.Options#2/0
    {refalrts::icBracketLeft, 0, 2, 0},
    // closed e.Errors#2 as range 2
    // closed e.Options#2 as range 0
    //0: e.Options#2
    //2: e.Errors#2
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 4},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 5},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icIdent, 0, 0, 7},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 8},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icLinkBrackets, 6, 8, 0},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 6},
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
    // ( e.Errors#2/2 ) e.Options_B#2/4 ( # CppCompiler s.Num#2/8 e.CppCompiler#2/6 ) e.Options_E#2/9
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    // closed e.Errors#2 as range 2
    context[4] = 0;
    context[5] = 0;
    refalrts::start_e_loop();
    do {
      context[9] = context[0];
      context[10] = context[1];
      context[6] = 0;
      context[7] = 0;
      if( ! refalrts::brackets_left( context[6], context[7], context[9], context[10] ) )
        continue;
      if( ! refalrts::ident_left(  & ident_CppCompiler<int>::name, context[6], context[7] ) )
        continue;
      // closed e.Options_E#2 as range 0
      if( ! refalrts::svar_left( context[8], context[6], context[7] ) )
        continue;
      // closed e.CppCompiler#2 as range 6
      //2: e.Errors#2
      //4: e.Options_B#2
      //6: e.CppCompiler#2
      //8: s.Num#2
      //9: e.Options_E#2

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::alloc_open_bracket( context[11] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[12] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[13] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[14] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[15] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[16] ) )
        return refalrts::cNoMemory;
      res = refalrts::splice_evar( res, context[9], context[10] );
      res = refalrts::splice_evar( res, context[4], context[5] );
      refalrts::link_brackets( context[13], context[16] );
      res = refalrts::splice_elem( res, context[16] );
      refalrts::link_brackets( context[14], context[15] );
      res = refalrts::splice_elem( res, context[15] );
      res = refalrts::splice_evar( res, context[6], context[7] );
      res = refalrts::splice_elem( res, context[14] );
      res = refalrts::splice_elem( res, context[13] );
      refalrts::link_brackets( context[11], context[12] );
      res = refalrts::splice_elem( res, context[12] );
      res = refalrts::splice_evar( res, context[2], context[3] );
      res = refalrts::splice_elem( res, context[11] );
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
  // ( e.Errors#2/2 ) e.Options#2/0
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Errors#2 as range 2
  // closed e.Options#2 as range 0
  //0: e.Options#2
  //2: e.Errors#2

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_bracket( context[4] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[5] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[7], & ident_NoCppCompiler<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[8] ) )
    return refalrts::cNoMemory;
  res = refalrts::splice_evar( res, context[0], context[1] );
  refalrts::link_brackets( context[6], context[8] );
  res = refalrts::splice_elem( res, context[8] );
  res = refalrts::splice_elem( res, context[7] );
  res = refalrts::splice_elem( res, context[6] );
  refalrts::link_brackets( context[4], context[5] );
  res = refalrts::splice_elem( res, context[5] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_elem( res, context[4] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult lambda_ParseCommandLine_2(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
#ifdef INTERPRET
  using refalrts::functions;
  static const refalrts::RefalIdentifier idents[] = {
    & ident_Both<int>::name,
    & ident_BadValue_GenMode<int>::name,
    & ident_GenMode<int>::name,
    & ident_OnlyInterpret<int>::name,
    & ident_OnlyDirect<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +32, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Errors#2/2 ) ( e.Bag#2/4 ) e.Options_B#2/6 ( # GenMode s.Num#2/10 'both' ) e.Options_E#2/11
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    // closed e.Errors#2 as range 2
    // closed e.Bag#2 as range 4
    {refalrts::icEPrepare, 0, 6, 0},
    {refalrts::icEStart, 0, 6, 0},
    {refalrts::icSave, 0, 11, 0},
    {refalrts::icBracketLeft, 0, 8, 11},
    {refalrts::icIdentLeft, 0, 2, 8},
    {refalrts::icCharRight, 0, static_cast<unsigned char>('h'), 8},
    {refalrts::icCharRight, 0, static_cast<unsigned char>('t'), 8},
    {refalrts::icCharRight, 0, static_cast<unsigned char>('o'), 8},
    {refalrts::icCharRight, 0, static_cast<unsigned char>('b'), 8},
    // closed e.Options_E#2 as range 0
    {refalrts::icsVarLeft, 0, 10, 8},
    {refalrts::icEmpty, 0, 0, 8},
    //2: e.Errors#2
    //4: e.Bag#2
    //6: e.Options_B#2
    //10: s.Num#2
    //11: e.Options_E#2
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 13},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 14},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 15},
    {refalrts::icIdent, 0, 0, 16},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 17},
    {refalrts::icSpliceEVar, 0, 0, 11},
    {refalrts::icSpliceEVar, 0, 0, 6},
    {refalrts::icLinkBrackets, 15, 17, 0},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceEVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icLinkBrackets, 13, 14, 0},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +34, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Errors#2/2 ) ( e.Bag#2/4 ) e.Options_B#2/6 ( # GenMode s.Num#2/10 'direct' ) e.Options_E#2/11
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    // closed e.Errors#2 as range 2
    // closed e.Bag#2 as range 4
    {refalrts::icEPrepare, 0, 6, 0},
    {refalrts::icEStart, 0, 6, 0},
    {refalrts::icSave, 0, 11, 0},
    {refalrts::icBracketLeft, 0, 8, 11},
    {refalrts::icIdentLeft, 0, 2, 8},
    {refalrts::icCharRight, 0, static_cast<unsigned char>('t'), 8},
    {refalrts::icCharRight, 0, static_cast<unsigned char>('c'), 8},
    {refalrts::icCharRight, 0, static_cast<unsigned char>('e'), 8},
    {refalrts::icCharRight, 0, static_cast<unsigned char>('r'), 8},
    {refalrts::icCharRight, 0, static_cast<unsigned char>('i'), 8},
    {refalrts::icCharRight, 0, static_cast<unsigned char>('d'), 8},
    // closed e.Options_E#2 as range 0
    {refalrts::icsVarLeft, 0, 10, 8},
    {refalrts::icEmpty, 0, 0, 8},
    //2: e.Errors#2
    //4: e.Bag#2
    //6: e.Options_B#2
    //10: s.Num#2
    //11: e.Options_E#2
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 13},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 14},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 15},
    {refalrts::icIdent, 0, 4, 16},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 17},
    {refalrts::icSpliceEVar, 0, 0, 11},
    {refalrts::icSpliceEVar, 0, 0, 6},
    {refalrts::icLinkBrackets, 15, 17, 0},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceEVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icLinkBrackets, 13, 14, 0},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +34, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Errors#2/2 ) ( e.Bag#2/4 ) e.Options_B#2/6 ( # GenMode s.Num#2/10 'interp' ) e.Options_E#2/11
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    // closed e.Errors#2 as range 2
    // closed e.Bag#2 as range 4
    {refalrts::icEPrepare, 0, 6, 0},
    {refalrts::icEStart, 0, 6, 0},
    {refalrts::icSave, 0, 11, 0},
    {refalrts::icBracketLeft, 0, 8, 11},
    {refalrts::icIdentLeft, 0, 2, 8},
    {refalrts::icCharRight, 0, static_cast<unsigned char>('p'), 8},
    {refalrts::icCharRight, 0, static_cast<unsigned char>('r'), 8},
    {refalrts::icCharRight, 0, static_cast<unsigned char>('e'), 8},
    {refalrts::icCharRight, 0, static_cast<unsigned char>('t'), 8},
    {refalrts::icCharRight, 0, static_cast<unsigned char>('n'), 8},
    {refalrts::icCharRight, 0, static_cast<unsigned char>('i'), 8},
    // closed e.Options_E#2 as range 0
    {refalrts::icsVarLeft, 0, 10, 8},
    {refalrts::icEmpty, 0, 0, 8},
    //2: e.Errors#2
    //4: e.Bag#2
    //6: e.Options_B#2
    //10: s.Num#2
    //11: e.Options_E#2
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 13},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 14},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 15},
    {refalrts::icIdent, 0, 3, 16},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 17},
    {refalrts::icSpliceEVar, 0, 0, 11},
    {refalrts::icSpliceEVar, 0, 0, 6},
    {refalrts::icLinkBrackets, 15, 17, 0},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceEVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icLinkBrackets, 13, 14, 0},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +36, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Errors#2/2 ) ( e.Bag#2/4 ) e.Options_B#2/6 ( # GenMode s.Num#2/10 e.BadVal#2/8 ) e.Options_E#2/11
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    // closed e.Errors#2 as range 2
    // closed e.Bag#2 as range 4
    {refalrts::icEPrepare, 0, 6, 0},
    {refalrts::icEStart, 0, 6, 0},
    {refalrts::icSave, 0, 11, 0},
    {refalrts::icBracketLeft, 0, 8, 11},
    {refalrts::icIdentLeft, 0, 2, 8},
    // closed e.Options_E#2 as range 0
    {refalrts::icsVarLeft, 0, 10, 8},
    // closed e.BadVal#2 as range 8
    //2: e.Errors#2
    //4: e.Bag#2
    //6: e.Options_B#2
    //8: e.BadVal#2
    //10: s.Num#2
    //11: e.Options_E#2
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 13},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 14},
    {refalrts::icIdent, 0, 1, 15},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 16},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 17},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 18},
    {refalrts::icIdent, 0, 0, 19},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 20},
    {refalrts::icSpliceEVar, 0, 0, 11},
    {refalrts::icSpliceEVar, 0, 0, 6},
    {refalrts::icLinkBrackets, 18, 20, 0},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceEVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icLinkBrackets, 13, 17, 0},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icLinkBrackets, 14, 16, 0},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceEVar, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceSTVar, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Errors#2/2 ) ( e.Bag#2/4 ) e.Options#2/0
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    // closed e.Errors#2 as range 2
    // closed e.Bag#2 as range 4
    // closed e.Options#2 as range 0
    //0: e.Options#2
    //2: e.Errors#2
    //4: e.Bag#2
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 7},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icIdent, 0, 0, 9},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 10},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icLinkBrackets, 8, 10, 0},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceEVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icLinkBrackets, 6, 7, 0},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceEVar, 0, 0, 2},
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
    // ( e.Errors#2/2 ) ( e.Bag#2/4 ) e.Options_B#2/6 ( # GenMode s.Num#2/10 'both' ) e.Options_E#2/11
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      continue;
    // closed e.Errors#2 as range 2
    // closed e.Bag#2 as range 4
    context[6] = 0;
    context[7] = 0;
    refalrts::start_e_loop();
    do {
      context[11] = context[0];
      context[12] = context[1];
      context[8] = 0;
      context[9] = 0;
      if( ! refalrts::brackets_left( context[8], context[9], context[11], context[12] ) )
        continue;
      if( ! refalrts::ident_left(  & ident_GenMode<int>::name, context[8], context[9] ) )
        continue;
      if( ! refalrts::char_right( 'h', context[8], context[9] ) )
        continue;
      if( ! refalrts::char_right( 't', context[8], context[9] ) )
        continue;
      if( ! refalrts::char_right( 'o', context[8], context[9] ) )
        continue;
      if( ! refalrts::char_right( 'b', context[8], context[9] ) )
        continue;
      // closed e.Options_E#2 as range 0
      if( ! refalrts::svar_left( context[10], context[8], context[9] ) )
        continue;
      if( ! refalrts::empty_seq( context[8], context[9] ) )
        continue;
      //2: e.Errors#2
      //4: e.Bag#2
      //6: e.Options_B#2
      //10: s.Num#2
      //11: e.Options_E#2

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::alloc_open_bracket( context[13] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[14] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[15] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[16], & ident_Both<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[17] ) )
        return refalrts::cNoMemory;
      res = refalrts::splice_evar( res, context[11], context[12] );
      res = refalrts::splice_evar( res, context[6], context[7] );
      refalrts::link_brackets( context[15], context[17] );
      res = refalrts::splice_elem( res, context[17] );
      res = refalrts::splice_elem( res, context[16] );
      res = refalrts::splice_evar( res, context[4], context[5] );
      res = refalrts::splice_elem( res, context[15] );
      refalrts::link_brackets( context[13], context[14] );
      res = refalrts::splice_elem( res, context[14] );
      res = refalrts::splice_evar( res, context[2], context[3] );
      res = refalrts::splice_elem( res, context[13] );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[6], context[7], context[0], context[1] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    // ( e.Errors#2/2 ) ( e.Bag#2/4 ) e.Options_B#2/6 ( # GenMode s.Num#2/10 'direct' ) e.Options_E#2/11
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      continue;
    // closed e.Errors#2 as range 2
    // closed e.Bag#2 as range 4
    context[6] = 0;
    context[7] = 0;
    refalrts::start_e_loop();
    do {
      context[11] = context[0];
      context[12] = context[1];
      context[8] = 0;
      context[9] = 0;
      if( ! refalrts::brackets_left( context[8], context[9], context[11], context[12] ) )
        continue;
      if( ! refalrts::ident_left(  & ident_GenMode<int>::name, context[8], context[9] ) )
        continue;
      if( ! refalrts::char_right( 't', context[8], context[9] ) )
        continue;
      if( ! refalrts::char_right( 'c', context[8], context[9] ) )
        continue;
      if( ! refalrts::char_right( 'e', context[8], context[9] ) )
        continue;
      if( ! refalrts::char_right( 'r', context[8], context[9] ) )
        continue;
      if( ! refalrts::char_right( 'i', context[8], context[9] ) )
        continue;
      if( ! refalrts::char_right( 'd', context[8], context[9] ) )
        continue;
      // closed e.Options_E#2 as range 0
      if( ! refalrts::svar_left( context[10], context[8], context[9] ) )
        continue;
      if( ! refalrts::empty_seq( context[8], context[9] ) )
        continue;
      //2: e.Errors#2
      //4: e.Bag#2
      //6: e.Options_B#2
      //10: s.Num#2
      //11: e.Options_E#2

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::alloc_open_bracket( context[13] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[14] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[15] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[16], & ident_OnlyDirect<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[17] ) )
        return refalrts::cNoMemory;
      res = refalrts::splice_evar( res, context[11], context[12] );
      res = refalrts::splice_evar( res, context[6], context[7] );
      refalrts::link_brackets( context[15], context[17] );
      res = refalrts::splice_elem( res, context[17] );
      res = refalrts::splice_elem( res, context[16] );
      res = refalrts::splice_evar( res, context[4], context[5] );
      res = refalrts::splice_elem( res, context[15] );
      refalrts::link_brackets( context[13], context[14] );
      res = refalrts::splice_elem( res, context[14] );
      res = refalrts::splice_evar( res, context[2], context[3] );
      res = refalrts::splice_elem( res, context[13] );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[6], context[7], context[0], context[1] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    // ( e.Errors#2/2 ) ( e.Bag#2/4 ) e.Options_B#2/6 ( # GenMode s.Num#2/10 'interp' ) e.Options_E#2/11
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      continue;
    // closed e.Errors#2 as range 2
    // closed e.Bag#2 as range 4
    context[6] = 0;
    context[7] = 0;
    refalrts::start_e_loop();
    do {
      context[11] = context[0];
      context[12] = context[1];
      context[8] = 0;
      context[9] = 0;
      if( ! refalrts::brackets_left( context[8], context[9], context[11], context[12] ) )
        continue;
      if( ! refalrts::ident_left(  & ident_GenMode<int>::name, context[8], context[9] ) )
        continue;
      if( ! refalrts::char_right( 'p', context[8], context[9] ) )
        continue;
      if( ! refalrts::char_right( 'r', context[8], context[9] ) )
        continue;
      if( ! refalrts::char_right( 'e', context[8], context[9] ) )
        continue;
      if( ! refalrts::char_right( 't', context[8], context[9] ) )
        continue;
      if( ! refalrts::char_right( 'n', context[8], context[9] ) )
        continue;
      if( ! refalrts::char_right( 'i', context[8], context[9] ) )
        continue;
      // closed e.Options_E#2 as range 0
      if( ! refalrts::svar_left( context[10], context[8], context[9] ) )
        continue;
      if( ! refalrts::empty_seq( context[8], context[9] ) )
        continue;
      //2: e.Errors#2
      //4: e.Bag#2
      //6: e.Options_B#2
      //10: s.Num#2
      //11: e.Options_E#2

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::alloc_open_bracket( context[13] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[14] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[15] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[16], & ident_OnlyInterpret<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[17] ) )
        return refalrts::cNoMemory;
      res = refalrts::splice_evar( res, context[11], context[12] );
      res = refalrts::splice_evar( res, context[6], context[7] );
      refalrts::link_brackets( context[15], context[17] );
      res = refalrts::splice_elem( res, context[17] );
      res = refalrts::splice_elem( res, context[16] );
      res = refalrts::splice_evar( res, context[4], context[5] );
      res = refalrts::splice_elem( res, context[15] );
      refalrts::link_brackets( context[13], context[14] );
      res = refalrts::splice_elem( res, context[14] );
      res = refalrts::splice_evar( res, context[2], context[3] );
      res = refalrts::splice_elem( res, context[13] );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[6], context[7], context[0], context[1] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    // ( e.Errors#2/2 ) ( e.Bag#2/4 ) e.Options_B#2/6 ( # GenMode s.Num#2/10 e.BadVal#2/8 ) e.Options_E#2/11
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      continue;
    // closed e.Errors#2 as range 2
    // closed e.Bag#2 as range 4
    context[6] = 0;
    context[7] = 0;
    refalrts::start_e_loop();
    do {
      context[11] = context[0];
      context[12] = context[1];
      context[8] = 0;
      context[9] = 0;
      if( ! refalrts::brackets_left( context[8], context[9], context[11], context[12] ) )
        continue;
      if( ! refalrts::ident_left(  & ident_GenMode<int>::name, context[8], context[9] ) )
        continue;
      // closed e.Options_E#2 as range 0
      if( ! refalrts::svar_left( context[10], context[8], context[9] ) )
        continue;
      // closed e.BadVal#2 as range 8
      //2: e.Errors#2
      //4: e.Bag#2
      //6: e.Options_B#2
      //8: e.BadVal#2
      //10: s.Num#2
      //11: e.Options_E#2

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::alloc_open_bracket( context[13] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[14] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[15], & ident_BadValue_GenMode<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[16] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[17] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[18] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[19], & ident_Both<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[20] ) )
        return refalrts::cNoMemory;
      res = refalrts::splice_evar( res, context[11], context[12] );
      res = refalrts::splice_evar( res, context[6], context[7] );
      refalrts::link_brackets( context[18], context[20] );
      res = refalrts::splice_elem( res, context[20] );
      res = refalrts::splice_elem( res, context[19] );
      res = refalrts::splice_evar( res, context[4], context[5] );
      res = refalrts::splice_elem( res, context[18] );
      refalrts::link_brackets( context[13], context[17] );
      res = refalrts::splice_elem( res, context[17] );
      refalrts::link_brackets( context[14], context[16] );
      res = refalrts::splice_elem( res, context[16] );
      res = refalrts::splice_evar( res, context[8], context[9] );
      res = refalrts::splice_elem( res, context[15] );
      res = refalrts::splice_stvar( res, context[10] );
      res = refalrts::splice_elem( res, context[14] );
      res = refalrts::splice_evar( res, context[2], context[3] );
      res = refalrts::splice_elem( res, context[13] );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[6], context[7], context[0], context[1] ) );
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  refalrts::move_left( context[0], context[1] );
  refalrts::move_left( context[0], context[1] );
  refalrts::move_right( context[0], context[1] );
  // ( e.Errors#2/2 ) ( e.Bag#2/4 ) e.Options#2/0
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[4] = 0;
  context[5] = 0;
  if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Errors#2 as range 2
  // closed e.Bag#2 as range 4
  // closed e.Options#2 as range 0
  //0: e.Options#2
  //2: e.Errors#2
  //4: e.Bag#2

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_bracket( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[9], & ident_Both<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[10] ) )
    return refalrts::cNoMemory;
  res = refalrts::splice_evar( res, context[0], context[1] );
  refalrts::link_brackets( context[8], context[10] );
  res = refalrts::splice_elem( res, context[10] );
  res = refalrts::splice_elem( res, context[9] );
  res = refalrts::splice_evar( res, context[4], context[5] );
  res = refalrts::splice_elem( res, context[8] );
  refalrts::link_brackets( context[6], context[7] );
  res = refalrts::splice_elem( res, context[7] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_elem( res, context[6] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult lambda_ParseCommandLine_3(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
#ifdef INTERPRET
  using refalrts::functions;
  static const refalrts::RefalIdentifier idents[] = {
    & ident_OptNone<int>::name,
    & ident_BadValue_Opt<int>::name,
    & ident_Opt<int>::name,
    & ident_OptResult<int>::name,
    & ident_OptPattern<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +29, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Errors#2/2 ) ( e.Bag#2/4 ) e.Options_B#2/6 ( # Opt s.Num#2/10 'P' ) e.Options_E#2/11
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    // closed e.Errors#2 as range 2
    // closed e.Bag#2 as range 4
    {refalrts::icEPrepare, 0, 6, 0},
    {refalrts::icEStart, 0, 6, 0},
    {refalrts::icSave, 0, 11, 0},
    {refalrts::icBracketLeft, 0, 8, 11},
    {refalrts::icIdentLeft, 0, 2, 8},
    {refalrts::icCharRight, 0, static_cast<unsigned char>('P'), 8},
    // closed e.Options_E#2 as range 0
    {refalrts::icsVarLeft, 0, 10, 8},
    {refalrts::icEmpty, 0, 0, 8},
    //2: e.Errors#2
    //4: e.Bag#2
    //6: e.Options_B#2
    //10: s.Num#2
    //11: e.Options_E#2
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 13},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 14},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 15},
    {refalrts::icIdent, 0, 4, 16},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 17},
    {refalrts::icSpliceEVar, 0, 0, 11},
    {refalrts::icSpliceEVar, 0, 0, 6},
    {refalrts::icLinkBrackets, 15, 17, 0},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceEVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icLinkBrackets, 13, 14, 0},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +29, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Errors#2/2 ) ( e.Bag#2/4 ) e.Options_B#2/6 ( # Opt s.Num#2/10 'R' ) e.Options_E#2/11
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    // closed e.Errors#2 as range 2
    // closed e.Bag#2 as range 4
    {refalrts::icEPrepare, 0, 6, 0},
    {refalrts::icEStart, 0, 6, 0},
    {refalrts::icSave, 0, 11, 0},
    {refalrts::icBracketLeft, 0, 8, 11},
    {refalrts::icIdentLeft, 0, 2, 8},
    {refalrts::icCharRight, 0, static_cast<unsigned char>('R'), 8},
    // closed e.Options_E#2 as range 0
    {refalrts::icsVarLeft, 0, 10, 8},
    {refalrts::icEmpty, 0, 0, 8},
    //2: e.Errors#2
    //4: e.Bag#2
    //6: e.Options_B#2
    //10: s.Num#2
    //11: e.Options_E#2
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 13},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 14},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 15},
    {refalrts::icIdent, 0, 3, 16},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 17},
    {refalrts::icSpliceEVar, 0, 0, 11},
    {refalrts::icSpliceEVar, 0, 0, 6},
    {refalrts::icLinkBrackets, 15, 17, 0},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceEVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icLinkBrackets, 13, 14, 0},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +36, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Errors#2/2 ) ( e.Bag#2/4 ) e.Options_B#2/6 ( # Opt s.Num#2/10 e.BadOpt#2/8 ) e.Options_E#2/11
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    // closed e.Errors#2 as range 2
    // closed e.Bag#2 as range 4
    {refalrts::icEPrepare, 0, 6, 0},
    {refalrts::icEStart, 0, 6, 0},
    {refalrts::icSave, 0, 11, 0},
    {refalrts::icBracketLeft, 0, 8, 11},
    {refalrts::icIdentLeft, 0, 2, 8},
    // closed e.Options_E#2 as range 0
    {refalrts::icsVarLeft, 0, 10, 8},
    // closed e.BadOpt#2 as range 8
    //2: e.Errors#2
    //4: e.Bag#2
    //6: e.Options_B#2
    //8: e.BadOpt#2
    //10: s.Num#2
    //11: e.Options_E#2
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 13},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 14},
    {refalrts::icIdent, 0, 1, 15},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 16},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 17},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 18},
    {refalrts::icIdent, 0, 0, 19},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 20},
    {refalrts::icSpliceEVar, 0, 0, 11},
    {refalrts::icSpliceEVar, 0, 0, 6},
    {refalrts::icLinkBrackets, 18, 20, 0},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceEVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icLinkBrackets, 13, 17, 0},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icLinkBrackets, 14, 16, 0},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceEVar, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceSTVar, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Errors#2/2 ) ( e.Bag#2/4 ) e.Options#2/0
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    // closed e.Errors#2 as range 2
    // closed e.Bag#2 as range 4
    // closed e.Options#2 as range 0
    //0: e.Options#2
    //2: e.Errors#2
    //4: e.Bag#2
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 7},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icIdent, 0, 0, 9},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 10},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icLinkBrackets, 8, 10, 0},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceEVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icLinkBrackets, 6, 7, 0},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 6},
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
    // ( e.Errors#2/2 ) ( e.Bag#2/4 ) e.Options_B#2/6 ( # Opt s.Num#2/10 'P' ) e.Options_E#2/11
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      continue;
    // closed e.Errors#2 as range 2
    // closed e.Bag#2 as range 4
    context[6] = 0;
    context[7] = 0;
    refalrts::start_e_loop();
    do {
      context[11] = context[0];
      context[12] = context[1];
      context[8] = 0;
      context[9] = 0;
      if( ! refalrts::brackets_left( context[8], context[9], context[11], context[12] ) )
        continue;
      if( ! refalrts::ident_left(  & ident_Opt<int>::name, context[8], context[9] ) )
        continue;
      if( ! refalrts::char_right( 'P', context[8], context[9] ) )
        continue;
      // closed e.Options_E#2 as range 0
      if( ! refalrts::svar_left( context[10], context[8], context[9] ) )
        continue;
      if( ! refalrts::empty_seq( context[8], context[9] ) )
        continue;
      //2: e.Errors#2
      //4: e.Bag#2
      //6: e.Options_B#2
      //10: s.Num#2
      //11: e.Options_E#2

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::alloc_open_bracket( context[13] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[14] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[15] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[16], & ident_OptPattern<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[17] ) )
        return refalrts::cNoMemory;
      res = refalrts::splice_evar( res, context[11], context[12] );
      res = refalrts::splice_evar( res, context[6], context[7] );
      refalrts::link_brackets( context[15], context[17] );
      res = refalrts::splice_elem( res, context[17] );
      res = refalrts::splice_elem( res, context[16] );
      res = refalrts::splice_evar( res, context[4], context[5] );
      res = refalrts::splice_elem( res, context[15] );
      refalrts::link_brackets( context[13], context[14] );
      res = refalrts::splice_elem( res, context[14] );
      res = refalrts::splice_evar( res, context[2], context[3] );
      res = refalrts::splice_elem( res, context[13] );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[6], context[7], context[0], context[1] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    // ( e.Errors#2/2 ) ( e.Bag#2/4 ) e.Options_B#2/6 ( # Opt s.Num#2/10 'R' ) e.Options_E#2/11
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      continue;
    // closed e.Errors#2 as range 2
    // closed e.Bag#2 as range 4
    context[6] = 0;
    context[7] = 0;
    refalrts::start_e_loop();
    do {
      context[11] = context[0];
      context[12] = context[1];
      context[8] = 0;
      context[9] = 0;
      if( ! refalrts::brackets_left( context[8], context[9], context[11], context[12] ) )
        continue;
      if( ! refalrts::ident_left(  & ident_Opt<int>::name, context[8], context[9] ) )
        continue;
      if( ! refalrts::char_right( 'R', context[8], context[9] ) )
        continue;
      // closed e.Options_E#2 as range 0
      if( ! refalrts::svar_left( context[10], context[8], context[9] ) )
        continue;
      if( ! refalrts::empty_seq( context[8], context[9] ) )
        continue;
      //2: e.Errors#2
      //4: e.Bag#2
      //6: e.Options_B#2
      //10: s.Num#2
      //11: e.Options_E#2

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::alloc_open_bracket( context[13] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[14] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[15] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[16], & ident_OptResult<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[17] ) )
        return refalrts::cNoMemory;
      res = refalrts::splice_evar( res, context[11], context[12] );
      res = refalrts::splice_evar( res, context[6], context[7] );
      refalrts::link_brackets( context[15], context[17] );
      res = refalrts::splice_elem( res, context[17] );
      res = refalrts::splice_elem( res, context[16] );
      res = refalrts::splice_evar( res, context[4], context[5] );
      res = refalrts::splice_elem( res, context[15] );
      refalrts::link_brackets( context[13], context[14] );
      res = refalrts::splice_elem( res, context[14] );
      res = refalrts::splice_evar( res, context[2], context[3] );
      res = refalrts::splice_elem( res, context[13] );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[6], context[7], context[0], context[1] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    // ( e.Errors#2/2 ) ( e.Bag#2/4 ) e.Options_B#2/6 ( # Opt s.Num#2/10 e.BadOpt#2/8 ) e.Options_E#2/11
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      continue;
    // closed e.Errors#2 as range 2
    // closed e.Bag#2 as range 4
    context[6] = 0;
    context[7] = 0;
    refalrts::start_e_loop();
    do {
      context[11] = context[0];
      context[12] = context[1];
      context[8] = 0;
      context[9] = 0;
      if( ! refalrts::brackets_left( context[8], context[9], context[11], context[12] ) )
        continue;
      if( ! refalrts::ident_left(  & ident_Opt<int>::name, context[8], context[9] ) )
        continue;
      // closed e.Options_E#2 as range 0
      if( ! refalrts::svar_left( context[10], context[8], context[9] ) )
        continue;
      // closed e.BadOpt#2 as range 8
      //2: e.Errors#2
      //4: e.Bag#2
      //6: e.Options_B#2
      //8: e.BadOpt#2
      //10: s.Num#2
      //11: e.Options_E#2

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::alloc_open_bracket( context[13] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[14] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[15], & ident_BadValue_Opt<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[16] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[17] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[18] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[19], & ident_OptNone<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[20] ) )
        return refalrts::cNoMemory;
      res = refalrts::splice_evar( res, context[11], context[12] );
      res = refalrts::splice_evar( res, context[6], context[7] );
      refalrts::link_brackets( context[18], context[20] );
      res = refalrts::splice_elem( res, context[20] );
      res = refalrts::splice_elem( res, context[19] );
      res = refalrts::splice_evar( res, context[4], context[5] );
      res = refalrts::splice_elem( res, context[18] );
      refalrts::link_brackets( context[13], context[17] );
      res = refalrts::splice_elem( res, context[17] );
      refalrts::link_brackets( context[14], context[16] );
      res = refalrts::splice_elem( res, context[16] );
      res = refalrts::splice_evar( res, context[8], context[9] );
      res = refalrts::splice_elem( res, context[15] );
      res = refalrts::splice_stvar( res, context[10] );
      res = refalrts::splice_elem( res, context[14] );
      res = refalrts::splice_evar( res, context[2], context[3] );
      res = refalrts::splice_elem( res, context[13] );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[6], context[7], context[0], context[1] ) );
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  refalrts::move_left( context[0], context[1] );
  refalrts::move_left( context[0], context[1] );
  refalrts::move_right( context[0], context[1] );
  // ( e.Errors#2/2 ) ( e.Bag#2/4 ) e.Options#2/0
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[4] = 0;
  context[5] = 0;
  if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Errors#2 as range 2
  // closed e.Bag#2 as range 4
  // closed e.Options#2 as range 0
  //0: e.Options#2
  //2: e.Errors#2
  //4: e.Bag#2

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_bracket( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[9], & ident_OptNone<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[10] ) )
    return refalrts::cNoMemory;
  res = refalrts::splice_evar( res, context[0], context[1] );
  refalrts::link_brackets( context[8], context[10] );
  res = refalrts::splice_elem( res, context[10] );
  res = refalrts::splice_elem( res, context[9] );
  res = refalrts::splice_evar( res, context[4], context[5] );
  res = refalrts::splice_elem( res, context[8] );
  refalrts::link_brackets( context[6], context[7] );
  res = refalrts::splice_elem( res, context[7] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_elem( res, context[6] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult lambda_ParseCommandLine_4(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
#ifdef INTERPRET
  using refalrts::functions;
  static const refalrts::RefalIdentifier idents[] = {
    & ident_NoErrorFile<int>::name,
    & ident_ErrorFile<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +33, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Errors#2/2 ) ( e.Bag#2/4 ) e.Options_B#2/6 ( # ErrorFile s.Num#2/10 e.ErrorFile#2/8 ) e.Options_E#2/11
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    // closed e.Errors#2 as range 2
    // closed e.Bag#2 as range 4
    {refalrts::icEPrepare, 0, 6, 0},
    {refalrts::icEStart, 0, 6, 0},
    {refalrts::icSave, 0, 11, 0},
    {refalrts::icBracketLeft, 0, 8, 11},
    {refalrts::icIdentLeft, 0, 1, 8},
    // closed e.Options_E#2 as range 0
    {refalrts::icsVarLeft, 0, 10, 8},
    // closed e.ErrorFile#2 as range 8
    //2: e.Errors#2
    //4: e.Bag#2
    //6: e.Options_B#2
    //8: e.ErrorFile#2
    //10: s.Num#2
    //11: e.Options_E#2
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 13},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 14},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 15},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 16},
    {refalrts::icIdent, 0, 1, 17},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 18},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 19},
    {refalrts::icSpliceEVar, 0, 0, 11},
    {refalrts::icSpliceEVar, 0, 0, 6},
    {refalrts::icLinkBrackets, 15, 19, 0},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icLinkBrackets, 16, 18, 0},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceEVar, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceEVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icLinkBrackets, 13, 14, 0},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Errors#2/2 ) ( e.Bag#2/4 ) e.Options#2/0
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    // closed e.Errors#2 as range 2
    // closed e.Bag#2 as range 4
    // closed e.Options#2 as range 0
    //0: e.Options#2
    //2: e.Errors#2
    //4: e.Bag#2
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 7},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icIdent, 0, 0, 9},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 10},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icLinkBrackets, 8, 10, 0},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceEVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icLinkBrackets, 6, 7, 0},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceEVar, 0, 0, 2},
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
    // ( e.Errors#2/2 ) ( e.Bag#2/4 ) e.Options_B#2/6 ( # ErrorFile s.Num#2/10 e.ErrorFile#2/8 ) e.Options_E#2/11
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      continue;
    // closed e.Errors#2 as range 2
    // closed e.Bag#2 as range 4
    context[6] = 0;
    context[7] = 0;
    refalrts::start_e_loop();
    do {
      context[11] = context[0];
      context[12] = context[1];
      context[8] = 0;
      context[9] = 0;
      if( ! refalrts::brackets_left( context[8], context[9], context[11], context[12] ) )
        continue;
      if( ! refalrts::ident_left(  & ident_ErrorFile<int>::name, context[8], context[9] ) )
        continue;
      // closed e.Options_E#2 as range 0
      if( ! refalrts::svar_left( context[10], context[8], context[9] ) )
        continue;
      // closed e.ErrorFile#2 as range 8
      //2: e.Errors#2
      //4: e.Bag#2
      //6: e.Options_B#2
      //8: e.ErrorFile#2
      //10: s.Num#2
      //11: e.Options_E#2

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::alloc_open_bracket( context[13] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[14] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[15] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[16] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[17], & ident_ErrorFile<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[18] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[19] ) )
        return refalrts::cNoMemory;
      res = refalrts::splice_evar( res, context[11], context[12] );
      res = refalrts::splice_evar( res, context[6], context[7] );
      refalrts::link_brackets( context[15], context[19] );
      res = refalrts::splice_elem( res, context[19] );
      refalrts::link_brackets( context[16], context[18] );
      res = refalrts::splice_elem( res, context[18] );
      res = refalrts::splice_evar( res, context[8], context[9] );
      res = refalrts::splice_elem( res, context[17] );
      res = refalrts::splice_elem( res, context[16] );
      res = refalrts::splice_evar( res, context[4], context[5] );
      res = refalrts::splice_elem( res, context[15] );
      refalrts::link_brackets( context[13], context[14] );
      res = refalrts::splice_elem( res, context[14] );
      res = refalrts::splice_evar( res, context[2], context[3] );
      res = refalrts::splice_elem( res, context[13] );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[6], context[7], context[0], context[1] ) );
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  refalrts::move_left( context[0], context[1] );
  refalrts::move_left( context[0], context[1] );
  refalrts::move_right( context[0], context[1] );
  // ( e.Errors#2/2 ) ( e.Bag#2/4 ) e.Options#2/0
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[4] = 0;
  context[5] = 0;
  if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Errors#2 as range 2
  // closed e.Bag#2 as range 4
  // closed e.Options#2 as range 0
  //0: e.Options#2
  //2: e.Errors#2
  //4: e.Bag#2

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_bracket( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[9], & ident_NoErrorFile<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[10] ) )
    return refalrts::cNoMemory;
  res = refalrts::splice_evar( res, context[0], context[1] );
  refalrts::link_brackets( context[8], context[10] );
  res = refalrts::splice_elem( res, context[10] );
  res = refalrts::splice_elem( res, context[9] );
  res = refalrts::splice_evar( res, context[4], context[5] );
  res = refalrts::splice_elem( res, context[8] );
  refalrts::link_brackets( context[6], context[7] );
  res = refalrts::splice_elem( res, context[7] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_elem( res, context[6] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult lambda_ParseCommandLine_5(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
#ifdef INTERPRET
  using refalrts::functions;
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Errors#2/2 ) ( e.Bag#2/4 ) e.Options#2/0
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    // closed e.Errors#2 as range 2
    // closed e.Bag#2 as range 4
    // closed e.Options#2 as range 0
    //0: e.Options#2
    //2: e.Errors#2
    //4: e.Bag#2
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 7},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 8},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 9},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 10},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 11},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icLinkBrackets, 6, 11, 0},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icLinkBrackets, 9, 10, 0},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceEVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceEVar, 0, 0, 2},
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
  // ( e.Errors#2/2 ) ( e.Bag#2/4 ) e.Options#2/0
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[4] = 0;
  context[5] = 0;
  if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Errors#2 as range 2
  // closed e.Bag#2 as range 4
  // closed e.Options#2 as range 0
  //0: e.Options#2
  //2: e.Errors#2
  //4: e.Bag#2

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_bracket( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[11] ) )
    return refalrts::cNoMemory;
  res = refalrts::splice_evar( res, context[0], context[1] );
  refalrts::link_brackets( context[6], context[11] );
  res = refalrts::splice_elem( res, context[11] );
  refalrts::link_brackets( context[9], context[10] );
  res = refalrts::splice_elem( res, context[10] );
  res = refalrts::splice_evar( res, context[4], context[5] );
  res = refalrts::splice_elem( res, context[9] );
  refalrts::link_brackets( context[7], context[8] );
  res = refalrts::splice_elem( res, context[8] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_elem( res, context[7] );
  res = refalrts::splice_elem( res, context[6] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult lambda_ParseCommandLine_6(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
#ifdef INTERPRET
  using refalrts::functions;
  static const refalrts::RefalIdentifier idents[] = {
    & ident_NoCppCompiler<int>::name
  };
  using refalrts::numbers;
  static const refalrts::StringItem strings[] = {
    {" -I\"", 4}
  };
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +8, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Folder#2/2 ) # NoCppCompiler
    {refalrts::icIdentRight, 0, 0, 0},
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icEmpty, 0, 0, 0},
    // closed e.Folder#2 as range 2
    //2: e.Folder#2
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icIdent, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Folder#2/2 ) ( e.CppCompiler#3/4 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icEmpty, 0, 0, 0},
    // closed e.Folder#2 as range 2
    // closed e.CppCompiler#3 as range 4
    //2: e.Folder#2
    //4: e.CppCompiler#3
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icString, 0, 0, 7},
    {refalrts::icChar, 0, '\"', 9},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 10},
    {refalrts::icLinkBrackets, 6, 10, 0},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceRange, 0, 0, 7},
    {refalrts::icSpliceEVar, 0, 0, 4},
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
    // ( e.Folder#2/2 ) # NoCppCompiler
    if( ! refalrts::ident_right(  & ident_NoCppCompiler<int>::name, context[0], context[1] ) )
      continue;
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    // closed e.Folder#2 as range 2
    //2: e.Folder#2

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_ident( context[4], & ident_NoCppCompiler<int>::name ) )
      return refalrts::cNoMemory;
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
  // ( e.Folder#2/2 ) ( e.CppCompiler#3/4 )
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
  // closed e.Folder#2 as range 2
  // closed e.CppCompiler#3 as range 4
  //2: e.Folder#2
  //4: e.CppCompiler#3

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_bracket( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[7], context[8], " -I\"", 4 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[9], '\"' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[10] ) )
    return refalrts::cNoMemory;
  refalrts::link_brackets( context[6], context[10] );
  res = refalrts::splice_elem( res, context[10] );
  res = refalrts::splice_elem( res, context[9] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_evar( res, context[4], context[5] );
  res = refalrts::splice_elem( res, context[6] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult lambda_ParseCommandLine_7(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 32 elems
  refalrts::Iter context[32];
  refalrts::zeros( context, 32 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { lambda_ParseCommandLine_6, "lambda_ParseCommandLine_6" },
    { refalrts::create_closure, "refalrts::create_closure" },
    { Fetch, "Fetch" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_SearchFolder<int>::name,
    & ident_RuntimeFolder<int>::name,
    & ident_CppFlag<int>::name,
    & ident_CppFlags<int>::name,
    & ident_NoCppCompiler<int>::name,
    & ident_FlagsForNoCompiler<int>::name
  };
  using refalrts::numbers;
  static const refalrts::StringItem strings[] = {
    {" \"", 2}
  };
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +39, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( ( e.Errors#2/4 ) ( # NoCppCompiler e.Bag#2/6 ) ) ( # CppFlags s.Num#2/10 e.Flags#2/8 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 2},
    {refalrts::icBracketLeft, 0, 6, 2},
    {refalrts::icIdentLeft, 0, 4, 6},
    {refalrts::icBracketLeft, 0, 8, 0},
    {refalrts::icIdentLeft, 0, 3, 8},
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icEmpty, 0, 0, 0},
    // closed e.Errors#2 as range 4
    // closed e.Bag#2 as range 6
    {refalrts::icsVarLeft, 0, 10, 8},
    // closed e.Flags#2 as range 8
    //4: e.Errors#2
    //6: e.Bag#2
    //8: e.Flags#2
    //10: s.Num#2
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 11},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 12},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 13},
    {refalrts::icIdent, 0, 5, 14},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 15},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 16},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 17},
    {refalrts::icIdent, 0, 4, 18},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 19},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 20},
    {refalrts::icLinkBrackets, 11, 20, 0},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icLinkBrackets, 17, 19, 0},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceEVar, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icLinkBrackets, 12, 16, 0},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icLinkBrackets, 13, 15, 0},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceSTVar, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceEVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +39, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( ( e.Errors#2/4 ) ( # NoCppCompiler e.Bag#2/6 ) ) ( # CppFlag s.Num#2/10 e.Flag#2/8 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 2},
    {refalrts::icBracketLeft, 0, 6, 2},
    {refalrts::icIdentLeft, 0, 4, 6},
    {refalrts::icBracketLeft, 0, 8, 0},
    {refalrts::icIdentLeft, 0, 2, 8},
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icEmpty, 0, 0, 0},
    // closed e.Errors#2 as range 4
    // closed e.Bag#2 as range 6
    {refalrts::icsVarLeft, 0, 10, 8},
    // closed e.Flag#2 as range 8
    //4: e.Errors#2
    //6: e.Bag#2
    //8: e.Flag#2
    //10: s.Num#2
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 11},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 12},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 13},
    {refalrts::icIdent, 0, 5, 14},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 15},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 16},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 17},
    {refalrts::icIdent, 0, 4, 18},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 19},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 20},
    {refalrts::icLinkBrackets, 11, 20, 0},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icLinkBrackets, 17, 19, 0},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceEVar, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icLinkBrackets, 12, 16, 0},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icLinkBrackets, 13, 15, 0},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceSTVar, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceEVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +38, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( ( e.Errors#2/4 ) ( ( e.CppCompiler#2/8 ) e.Bag#2/6 ) ) ( # CppFlags s.Num#2/12 e.Flags#2/10 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 2},
    {refalrts::icBracketLeft, 0, 6, 2},
    {refalrts::icBracketLeft, 0, 8, 6},
    {refalrts::icBracketLeft, 0, 10, 0},
    {refalrts::icIdentLeft, 0, 3, 10},
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icEmpty, 0, 0, 0},
    // closed e.Errors#2 as range 4
    // closed e.CppCompiler#2 as range 8
    // closed e.Bag#2 as range 6
    {refalrts::icsVarLeft, 0, 12, 10},
    // closed e.Flags#2 as range 10
    //4: e.Errors#2
    //6: e.Bag#2
    //8: e.CppCompiler#2
    //10: e.Flags#2
    //12: s.Num#2
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 13},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 14},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 15},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 16},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 17},
    {refalrts::icChar, 0, ' ', 18},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 19},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 20},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 21},
    {refalrts::icLinkBrackets, 13, 21, 0},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icLinkBrackets, 16, 20, 0},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceEVar, 0, 0, 6},
    {refalrts::icLinkBrackets, 17, 19, 0},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceEVar, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceEVar, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icLinkBrackets, 14, 15, 0},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceEVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +40, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( ( e.Errors#2/4 ) ( ( e.CppCompiler#2/8 ) e.Bag#2/6 ) ) ( # CppFlag s.Num#2/12 e.Flag#2/10 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 2},
    {refalrts::icBracketLeft, 0, 6, 2},
    {refalrts::icBracketLeft, 0, 8, 6},
    {refalrts::icBracketLeft, 0, 10, 0},
    {refalrts::icIdentLeft, 0, 2, 10},
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icEmpty, 0, 0, 0},
    // closed e.Errors#2 as range 4
    // closed e.CppCompiler#2 as range 8
    // closed e.Bag#2 as range 6
    {refalrts::icsVarLeft, 0, 12, 10},
    // closed e.Flag#2 as range 10
    //4: e.Errors#2
    //6: e.Bag#2
    //8: e.CppCompiler#2
    //10: e.Flag#2
    //12: s.Num#2
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 13},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 14},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 15},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 16},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 17},
    {refalrts::icString, 0, 0, 18},
    {refalrts::icChar, 0, '\"', 20},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 21},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 22},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 23},
    {refalrts::icLinkBrackets, 13, 23, 0},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icLinkBrackets, 16, 22, 0},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceEVar, 0, 0, 6},
    {refalrts::icLinkBrackets, 17, 21, 0},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceEVar, 0, 0, 10},
    {refalrts::icSpliceRange, 0, 0, 18},
    {refalrts::icSpliceEVar, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icLinkBrackets, 14, 15, 0},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceEVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +64, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( ( e.Errors#2/4 ) ( t.CppCompiler#2/11 e.Bag#2/6 ) ) ( # RuntimeFolder s.Num#2/10 e.Folder#2/8 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 2},
    {refalrts::icBracketLeft, 0, 6, 2},
    {refalrts::icBracketLeft, 0, 8, 0},
    {refalrts::icIdentLeft, 0, 1, 8},
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icEmpty, 0, 0, 0},
    // closed e.Errors#2 as range 4
    {refalrts::icsVarLeft, 0, 10, 8},
    // closed e.Folder#2 as range 8
    {refalrts::ictVarLeft, 0, 11, 6},
    // closed e.Bag#2 as range 6
    //4: e.Errors#2
    //6: e.Bag#2
    //8: e.Folder#2
    //10: s.Num#2
    //11: t.CppCompiler#2
    //29: e.Folder#2
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 12},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 13},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 14},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 15},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 16},
    {refalrts::icFunc, 0, 2, 17},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 18},
    {refalrts::icFunc, 0, 1, 19},
    {refalrts::icFunc, 0, 0, 20},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 21},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 22},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 23},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 24},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 25},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 26},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 27},
    {refalrts::icIdent, 0, 0, 28},
    {refalrts::icCopyEVar, 29, 8, 0},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 31},
    {refalrts::icLinkBrackets, 27, 31, 0},
    {refalrts::icSpliceElem, 0, 0, 31},
    {refalrts::icSpliceEVar, 0, 0, 29},
    {refalrts::icSpliceSTVar, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 28},
    {refalrts::icSpliceElem, 0, 0, 27},
    {refalrts::icLinkBrackets, 12, 26, 0},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icLinkBrackets, 15, 25, 0},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icSpliceEVar, 0, 0, 6},
    {refalrts::icPushStack, 0, 0, 24},
    {refalrts::icPushStack, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icPushStack, 0, 0, 23},
    {refalrts::icPushStack, 0, 0, 18},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icLinkBrackets, 21, 22, 0},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceEVar, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceSTVar, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icLinkBrackets, 13, 14, 0},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceEVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( ( e.Errors#2/4 ) ( e.Bag#2/6 ) ) t.OtherOption#2/8
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 2},
    {refalrts::icBracketLeft, 0, 6, 2},
    {refalrts::icEmpty, 0, 0, 2},
    // closed e.Errors#2 as range 4
    // closed e.Bag#2 as range 6
    {refalrts::ictVarLeft, 0, 8, 0},
    {refalrts::icEmpty, 0, 0, 0},
    //4: e.Errors#2
    //6: e.Bag#2
    //8: t.OtherOption#2
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 9},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 10},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 11},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 12},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 13},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 14},
    {refalrts::icSpliceSTVar, 0, 0, 8},
    {refalrts::icLinkBrackets, 9, 14, 0},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icLinkBrackets, 12, 13, 0},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceEVar, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icLinkBrackets, 10, 11, 0},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceEVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[5];
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
    // ( ( e.Errors#2/4 ) ( # NoCppCompiler e.Bag#2/6 ) ) ( # CppFlags s.Num#2/10 e.Flags#2/8 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[2], context[3] ) )
      continue;
    context[6] = 0;
    context[7] = 0;
    if( ! refalrts::brackets_left( context[6], context[7], context[2], context[3] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_NoCppCompiler<int>::name, context[6], context[7] ) )
      continue;
    context[8] = 0;
    context[9] = 0;
    if( ! refalrts::brackets_left( context[8], context[9], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CppFlags<int>::name, context[8], context[9] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    // closed e.Errors#2 as range 4
    // closed e.Bag#2 as range 6
    if( ! refalrts::svar_left( context[10], context[8], context[9] ) )
      continue;
    // closed e.Flags#2 as range 8
    //4: e.Errors#2
    //6: e.Bag#2
    //8: e.Flags#2
    //10: s.Num#2

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[14], & ident_FlagsForNoCompiler<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[15] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[17] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[18], & ident_NoCppCompiler<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[19] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[20] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[11], context[20] );
    res = refalrts::splice_elem( res, context[20] );
    refalrts::link_brackets( context[17], context[19] );
    res = refalrts::splice_elem( res, context[19] );
    res = refalrts::splice_evar( res, context[6], context[7] );
    res = refalrts::splice_elem( res, context[18] );
    res = refalrts::splice_elem( res, context[17] );
    refalrts::link_brackets( context[12], context[16] );
    res = refalrts::splice_elem( res, context[16] );
    refalrts::link_brackets( context[13], context[15] );
    res = refalrts::splice_elem( res, context[15] );
    res = refalrts::splice_elem( res, context[14] );
    res = refalrts::splice_stvar( res, context[10] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_evar( res, context[4], context[5] );
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
    // ( ( e.Errors#2/4 ) ( # NoCppCompiler e.Bag#2/6 ) ) ( # CppFlag s.Num#2/10 e.Flag#2/8 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[2], context[3] ) )
      continue;
    context[6] = 0;
    context[7] = 0;
    if( ! refalrts::brackets_left( context[6], context[7], context[2], context[3] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_NoCppCompiler<int>::name, context[6], context[7] ) )
      continue;
    context[8] = 0;
    context[9] = 0;
    if( ! refalrts::brackets_left( context[8], context[9], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CppFlag<int>::name, context[8], context[9] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    // closed e.Errors#2 as range 4
    // closed e.Bag#2 as range 6
    if( ! refalrts::svar_left( context[10], context[8], context[9] ) )
      continue;
    // closed e.Flag#2 as range 8
    //4: e.Errors#2
    //6: e.Bag#2
    //8: e.Flag#2
    //10: s.Num#2

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[14], & ident_FlagsForNoCompiler<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[15] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[17] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[18], & ident_NoCppCompiler<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[19] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[20] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[11], context[20] );
    res = refalrts::splice_elem( res, context[20] );
    refalrts::link_brackets( context[17], context[19] );
    res = refalrts::splice_elem( res, context[19] );
    res = refalrts::splice_evar( res, context[6], context[7] );
    res = refalrts::splice_elem( res, context[18] );
    res = refalrts::splice_elem( res, context[17] );
    refalrts::link_brackets( context[12], context[16] );
    res = refalrts::splice_elem( res, context[16] );
    refalrts::link_brackets( context[13], context[15] );
    res = refalrts::splice_elem( res, context[15] );
    res = refalrts::splice_elem( res, context[14] );
    res = refalrts::splice_stvar( res, context[10] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_evar( res, context[4], context[5] );
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
    // ( ( e.Errors#2/4 ) ( ( e.CppCompiler#2/8 ) e.Bag#2/6 ) ) ( # CppFlags s.Num#2/12 e.Flags#2/10 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[2], context[3] ) )
      continue;
    context[6] = 0;
    context[7] = 0;
    if( ! refalrts::brackets_left( context[6], context[7], context[2], context[3] ) )
      continue;
    context[8] = 0;
    context[9] = 0;
    if( ! refalrts::brackets_left( context[8], context[9], context[6], context[7] ) )
      continue;
    context[10] = 0;
    context[11] = 0;
    if( ! refalrts::brackets_left( context[10], context[11], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CppFlags<int>::name, context[10], context[11] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    // closed e.Errors#2 as range 4
    // closed e.CppCompiler#2 as range 8
    // closed e.Bag#2 as range 6
    if( ! refalrts::svar_left( context[12], context[10], context[11] ) )
      continue;
    // closed e.Flags#2 as range 10
    //4: e.Errors#2
    //6: e.Bag#2
    //8: e.CppCompiler#2
    //10: e.Flags#2
    //12: s.Num#2

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[15] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[17] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[18], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[19] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[20] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[21] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[13], context[21] );
    res = refalrts::splice_elem( res, context[21] );
    refalrts::link_brackets( context[16], context[20] );
    res = refalrts::splice_elem( res, context[20] );
    res = refalrts::splice_evar( res, context[6], context[7] );
    refalrts::link_brackets( context[17], context[19] );
    res = refalrts::splice_elem( res, context[19] );
    res = refalrts::splice_evar( res, context[10], context[11] );
    res = refalrts::splice_elem( res, context[18] );
    res = refalrts::splice_evar( res, context[8], context[9] );
    res = refalrts::splice_elem( res, context[17] );
    res = refalrts::splice_elem( res, context[16] );
    refalrts::link_brackets( context[14], context[15] );
    res = refalrts::splice_elem( res, context[15] );
    res = refalrts::splice_evar( res, context[4], context[5] );
    res = refalrts::splice_elem( res, context[14] );
    res = refalrts::splice_elem( res, context[13] );
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
    // ( ( e.Errors#2/4 ) ( ( e.CppCompiler#2/8 ) e.Bag#2/6 ) ) ( # CppFlag s.Num#2/12 e.Flag#2/10 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[2], context[3] ) )
      continue;
    context[6] = 0;
    context[7] = 0;
    if( ! refalrts::brackets_left( context[6], context[7], context[2], context[3] ) )
      continue;
    context[8] = 0;
    context[9] = 0;
    if( ! refalrts::brackets_left( context[8], context[9], context[6], context[7] ) )
      continue;
    context[10] = 0;
    context[11] = 0;
    if( ! refalrts::brackets_left( context[10], context[11], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CppFlag<int>::name, context[10], context[11] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    // closed e.Errors#2 as range 4
    // closed e.CppCompiler#2 as range 8
    // closed e.Bag#2 as range 6
    if( ! refalrts::svar_left( context[12], context[10], context[11] ) )
      continue;
    // closed e.Flag#2 as range 10
    //4: e.Errors#2
    //6: e.Bag#2
    //8: e.CppCompiler#2
    //10: e.Flag#2
    //12: s.Num#2

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[15] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[17] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[18], context[19], " \"", 2 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[20], '\"' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[21] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[22] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[23] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[13], context[23] );
    res = refalrts::splice_elem( res, context[23] );
    refalrts::link_brackets( context[16], context[22] );
    res = refalrts::splice_elem( res, context[22] );
    res = refalrts::splice_evar( res, context[6], context[7] );
    refalrts::link_brackets( context[17], context[21] );
    res = refalrts::splice_elem( res, context[21] );
    res = refalrts::splice_elem( res, context[20] );
    res = refalrts::splice_evar( res, context[10], context[11] );
    res = refalrts::splice_evar( res, context[18], context[19] );
    res = refalrts::splice_evar( res, context[8], context[9] );
    res = refalrts::splice_elem( res, context[17] );
    res = refalrts::splice_elem( res, context[16] );
    refalrts::link_brackets( context[14], context[15] );
    res = refalrts::splice_elem( res, context[15] );
    res = refalrts::splice_evar( res, context[4], context[5] );
    res = refalrts::splice_elem( res, context[14] );
    res = refalrts::splice_elem( res, context[13] );
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
    // ( ( e.Errors#2/4 ) ( t.CppCompiler#2/11 e.Bag#2/6 ) ) ( # RuntimeFolder s.Num#2/10 e.Folder#2/8 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[2], context[3] ) )
      continue;
    context[6] = 0;
    context[7] = 0;
    if( ! refalrts::brackets_left( context[6], context[7], context[2], context[3] ) )
      continue;
    context[8] = 0;
    context[9] = 0;
    if( ! refalrts::brackets_left( context[8], context[9], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_RuntimeFolder<int>::name, context[8], context[9] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    // closed e.Errors#2 as range 4
    if( ! refalrts::svar_left( context[10], context[8], context[9] ) )
      continue;
    // closed e.Folder#2 as range 8
    if( ! refalrts::tvar_left( context[11], context[6], context[7] ) )
      continue;
    // closed e.Bag#2 as range 6
    //4: e.Errors#2
    //6: e.Bag#2
    //8: e.Folder#2
    //10: s.Num#2
    //11: t.CppCompiler#2
    //29: e.Folder#2

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[15] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[17], Fetch, "Fetch" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[18] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[19], refalrts::create_closure, "refalrts::create_closure" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[20], lambda_ParseCommandLine_6, "lambda_ParseCommandLine_6" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[21] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[22] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[23] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[24] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[25] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[26] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[27] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[28], & ident_SearchFolder<int>::name ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[29], context[30], context[8], context[9]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[31] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[27], context[31] );
    res = refalrts::splice_elem( res, context[31] );
    res = refalrts::splice_evar( res, context[29], context[30] );
    res = refalrts::splice_stvar( res, context[10] );
    res = refalrts::splice_elem( res, context[28] );
    res = refalrts::splice_elem( res, context[27] );
    refalrts::link_brackets( context[12], context[26] );
    res = refalrts::splice_elem( res, context[26] );
    refalrts::link_brackets( context[15], context[25] );
    res = refalrts::splice_elem( res, context[25] );
    res = refalrts::splice_evar( res, context[6], context[7] );
    refalrts::push_stack( context[24] );
    refalrts::push_stack( context[16] );
    res = refalrts::splice_elem( res, context[24] );
    refalrts::push_stack( context[23] );
    refalrts::push_stack( context[18] );
    res = refalrts::splice_elem( res, context[23] );
    refalrts::link_brackets( context[21], context[22] );
    res = refalrts::splice_elem( res, context[22] );
    res = refalrts::splice_evar( res, context[8], context[9] );
    res = refalrts::splice_elem( res, context[21] );
    res = refalrts::splice_elem( res, context[20] );
    res = refalrts::splice_elem( res, context[19] );
    res = refalrts::splice_elem( res, context[18] );
    res = refalrts::splice_stvar( res, context[11] );
    res = refalrts::splice_elem( res, context[17] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_elem( res, context[15] );
    refalrts::link_brackets( context[13], context[14] );
    res = refalrts::splice_elem( res, context[14] );
    res = refalrts::splice_evar( res, context[4], context[5] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_elem( res, context[12] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  refalrts::move_left( context[0], context[1] );
  refalrts::move_left( context[0], context[1] );
  refalrts::move_right( context[0], context[1] );
  // ( ( e.Errors#2/4 ) ( e.Bag#2/6 ) ) t.OtherOption#2/8
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[4] = 0;
  context[5] = 0;
  if( ! refalrts::brackets_left( context[4], context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[6] = 0;
  context[7] = 0;
  if( ! refalrts::brackets_left( context[6], context[7], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Errors#2 as range 4
  // closed e.Bag#2 as range 6
  if( ! refalrts::tvar_left( context[8], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  //4: e.Errors#2
  //6: e.Bag#2
  //8: t.OtherOption#2

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_bracket( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[14] ) )
    return refalrts::cNoMemory;
  res = refalrts::splice_stvar( res, context[8] );
  refalrts::link_brackets( context[9], context[14] );
  res = refalrts::splice_elem( res, context[14] );
  refalrts::link_brackets( context[12], context[13] );
  res = refalrts::splice_elem( res, context[13] );
  res = refalrts::splice_evar( res, context[6], context[7] );
  res = refalrts::splice_elem( res, context[12] );
  refalrts::link_brackets( context[10], context[11] );
  res = refalrts::splice_elem( res, context[11] );
  res = refalrts::splice_evar( res, context[4], context[5] );
  res = refalrts::splice_elem( res, context[10] );
  res = refalrts::splice_elem( res, context[9] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult lambda_ParseCommandLine_8(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
#ifdef INTERPRET
  using refalrts::functions;
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    // ( ( e.Errors#2/4 ) ( e.Bag#2/6 ) ) e.Options#2/0
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 2},
    {refalrts::icBracketLeft, 0, 6, 2},
    {refalrts::icEmpty, 0, 0, 2},
    // closed e.Errors#2 as range 4
    // closed e.Bag#2 as range 6
    // closed e.Options#2 as range 0
    //0: e.Options#2
    //4: e.Errors#2
    //6: e.Bag#2
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 9},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 10},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 11},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icLinkBrackets, 10, 11, 0},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceEVar, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icLinkBrackets, 8, 9, 0},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceEVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 8},
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
  // ( ( e.Errors#2/4 ) ( e.Bag#2/6 ) ) e.Options#2/0
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[4] = 0;
  context[5] = 0;
  if( ! refalrts::brackets_left( context[4], context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[6] = 0;
  context[7] = 0;
  if( ! refalrts::brackets_left( context[6], context[7], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Errors#2 as range 4
  // closed e.Bag#2 as range 6
  // closed e.Options#2 as range 0
  //0: e.Options#2
  //4: e.Errors#2
  //6: e.Bag#2

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_bracket( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[11] ) )
    return refalrts::cNoMemory;
  res = refalrts::splice_evar( res, context[0], context[1] );
  refalrts::link_brackets( context[10], context[11] );
  res = refalrts::splice_elem( res, context[11] );
  res = refalrts::splice_evar( res, context[6], context[7] );
  res = refalrts::splice_elem( res, context[10] );
  refalrts::link_brackets( context[8], context[9] );
  res = refalrts::splice_elem( res, context[9] );
  res = refalrts::splice_evar( res, context[4], context[5] );
  res = refalrts::splice_elem( res, context[8] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult lambda_ParseCommandLine_9(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
#ifdef INTERPRET
  using refalrts::functions;
  static const refalrts::RefalIdentifier idents[] = {
    & ident_FILE<int>::name,
    & ident_SearchFolder<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +27, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Bag#3/2 ( e.Folders#3/6 ) ) ( # SearchFolder s.Num#3/8 e.Folder#3/4 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icIdentLeft, 0, 1, 4},
    {refalrts::icBracketRight, 0, 6, 2},
    {refalrts::icEmpty, 0, 0, 0},
    // closed e.Bag#3 as range 2
    // closed e.Folders#3 as range 6
    {refalrts::icsVarLeft, 0, 8, 4},
    // closed e.Folder#3 as range 4
    //2: e.Bag#3
    //4: e.Folder#3
    //6: e.Folders#3
    //8: s.Num#3
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 9},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 10},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 11},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 12},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 13},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 14},
    {refalrts::icLinkBrackets, 9, 14, 0},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icLinkBrackets, 10, 13, 0},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icLinkBrackets, 11, 12, 0},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceEVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceEVar, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Bag#3/2 ) ( # FILE s.Num#3/6 e.FileName#3/4 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icIdentLeft, 0, 0, 4},
    {refalrts::icEmpty, 0, 0, 0},
    // closed e.Bag#3 as range 2
    {refalrts::icsVarLeft, 0, 6, 4},
    // closed e.FileName#3 as range 4
    //2: e.Bag#3
    //4: e.FileName#3
    //6: s.Num#3
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 7},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 8},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 9},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 10},
    {refalrts::icLinkBrackets, 9, 10, 0},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceEVar, 0, 0, 4},
    {refalrts::icSpliceSTVar, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceEVar, 0, 0, 2},
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
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    // ( e.Bag#3/2 ( e.Folders#3/6 ) ) ( # SearchFolder s.Num#3/8 e.Folder#3/4 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_SearchFolder<int>::name, context[4], context[5] ) )
      continue;
    context[6] = 0;
    context[7] = 0;
    if( ! refalrts::brackets_right( context[6], context[7], context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    // closed e.Bag#3 as range 2
    // closed e.Folders#3 as range 6
    if( ! refalrts::svar_left( context[8], context[4], context[5] ) )
      continue;
    // closed e.Folder#3 as range 4
    //2: e.Bag#3
    //4: e.Folder#3
    //6: e.Folders#3
    //8: s.Num#3

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[9] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[14] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[9], context[14] );
    res = refalrts::splice_elem( res, context[14] );
    refalrts::link_brackets( context[10], context[13] );
    res = refalrts::splice_elem( res, context[13] );
    refalrts::link_brackets( context[11], context[12] );
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_evar( res, context[4], context[5] );
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_evar( res, context[6], context[7] );
    res = refalrts::splice_elem( res, context[10] );
    res = refalrts::splice_evar( res, context[2], context[3] );
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
  // ( e.Bag#3/2 ) ( # FILE s.Num#3/6 e.FileName#3/4 )
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[4] = 0;
  context[5] = 0;
  if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::ident_left(  & ident_FILE<int>::name, context[4], context[5] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Bag#3 as range 2
  if( ! refalrts::svar_left( context[6], context[4], context[5] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.FileName#3 as range 4
  //2: e.Bag#3
  //4: e.FileName#3
  //6: s.Num#3

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_bracket( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[10] ) )
    return refalrts::cNoMemory;
  refalrts::link_brackets( context[9], context[10] );
  res = refalrts::splice_elem( res, context[10] );
  res = refalrts::splice_evar( res, context[4], context[5] );
  res = refalrts::splice_stvar( res, context[6] );
  res = refalrts::splice_elem( res, context[9] );
  refalrts::link_brackets( context[7], context[8] );
  res = refalrts::splice_elem( res, context[8] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_elem( res, context[7] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult lambda_ParseCommandLine_10(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { lambda_ParseCommandLine_9, "lambda_ParseCommandLine_9" },
    { MapReduce, "MapReduce" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Errors#2/2 ) ( e.Bag#2/4 ) e.Options#2/0
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    // closed e.Errors#2 as range 2
    // closed e.Bag#2 as range 4
    // closed e.Options#2 as range 0
    //0: e.Options#2
    //2: e.Errors#2
    //4: e.Bag#2
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 7},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 8},
    {refalrts::icFunc, 0, 1, 9},
    {refalrts::icFunc, 0, 0, 10},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 11},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 12},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 13},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 14},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 15},
    {refalrts::icPushStack, 0, 0, 15},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icLinkBrackets, 11, 14, 0},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icLinkBrackets, 12, 13, 0},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceEVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icLinkBrackets, 6, 7, 0},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceEVar, 0, 0, 2},
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
  // ( e.Errors#2/2 ) ( e.Bag#2/4 ) e.Options#2/0
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[4] = 0;
  context[5] = 0;
  if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Errors#2 as range 2
  // closed e.Bag#2 as range 4
  // closed e.Options#2 as range 0
  //0: e.Options#2
  //2: e.Errors#2
  //4: e.Bag#2

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_bracket( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[9], MapReduce, "MapReduce" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[10], lambda_ParseCommandLine_9, "lambda_ParseCommandLine_9" ) )
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
  refalrts::push_stack( context[8] );
  res = refalrts::splice_elem( res, context[15] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  refalrts::link_brackets( context[11], context[14] );
  res = refalrts::splice_elem( res, context[14] );
  refalrts::link_brackets( context[12], context[13] );
  res = refalrts::splice_elem( res, context[13] );
  res = refalrts::splice_elem( res, context[12] );
  res = refalrts::splice_evar( res, context[4], context[5] );
  res = refalrts::splice_elem( res, context[11] );
  res = refalrts::splice_elem( res, context[10] );
  res = refalrts::splice_elem( res, context[9] );
  res = refalrts::splice_elem( res, context[8] );
  refalrts::link_brackets( context[6], context[7] );
  res = refalrts::splice_elem( res, context[7] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_elem( res, context[6] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult lambda_ParseCommandLine_11(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 4 elems
  refalrts::Iter context[4];
  refalrts::zeros( context, 4 );
#ifdef INTERPRET
  using refalrts::functions;
  static const refalrts::RefalIdentifier idents[] = {
    & ident_ErrorFile<int>::name,
    & ident_Opt<int>::name,
    & ident_GenMode<int>::name,
    & ident_CppCompiler<int>::name
  };
  using refalrts::numbers;
  static const refalrts::StringItem strings[] = {
    {"-e or --error-file", 18},
    {"-O", 2},
    {"--gen", 5},
    {"-c or --cpp-command", 19}
  };
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +7, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // # CppCompiler
    {refalrts::icIdentLeft, 0, 3, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icString, 0, 3, 2},
    {refalrts::icSpliceRange, 0, 0, 2},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +7, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // # GenMode
    {refalrts::icIdentLeft, 0, 2, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icString, 0, 2, 2},
    {refalrts::icSpliceRange, 0, 0, 2},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +7, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // # Opt
    {refalrts::icIdentLeft, 0, 1, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icString, 0, 1, 2},
    {refalrts::icSpliceRange, 0, 0, 2},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // # ErrorFile
    {refalrts::icIdentLeft, 0, 0, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icString, 0, 0, 2},
    {refalrts::icSpliceRange, 0, 0, 2},
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
    // # CppCompiler
    if( ! refalrts::ident_left(  & ident_CppCompiler<int>::name, context[0], context[1] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_chars( context[2], context[3], "-c or --cpp-command", 19 ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_evar( res, context[2], context[3] );
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
    // # GenMode
    if( ! refalrts::ident_left(  & ident_GenMode<int>::name, context[0], context[1] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_chars( context[2], context[3], "--gen", 5 ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_evar( res, context[2], context[3] );
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
    // # Opt
    if( ! refalrts::ident_left(  & ident_Opt<int>::name, context[0], context[1] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_chars( context[2], context[3], "-O", 2 ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_evar( res, context[2], context[3] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  refalrts::move_left( context[0], context[1] );
  refalrts::move_left( context[0], context[1] );
  refalrts::move_right( context[0], context[1] );
  // # ErrorFile
  if( ! refalrts::ident_left(  & ident_ErrorFile<int>::name, context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_chars( context[2], context[3], "-e or --error-file", 18 ) )
    return refalrts::cNoMemory;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult lambda_ParseCommandLine_12(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { lambda_ParseCommandLine_11, "lambda_ParseCommandLine_11" },
    { Fetch, "Fetch" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_BadValue_Opt<int>::name,
    & ident_BadValue_GenMode<int>::name,
    & ident_RepeatOption<int>::name,
    & ident_UnknownLongOption<int>::name,
    & ident_UnknownShortOption<int>::name,
    & ident_NoRequiredParam<int>::name
  };
  using refalrts::numbers;
  static const refalrts::StringItem strings[] = {
    {"option -O expects \'P\' or \'R\', but got \'", 39},
    {"option --gen expects \'both\', \'direct\' or \'interp\', but got \'", 60},
    {" must appear one time", 21},
    {"option ", 7},
    {"unknown option --", 17},
    {"unknown option -", 16},
    {" expects parameter", 18}
  };
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +18, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( s.Pos#3/4 # NoRequiredParam e.Param#3/2 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icsVarLeft, 0, 4, 2},
    {refalrts::icIdentLeft, 0, 5, 2},
    // closed e.Param#3 as range 2
    //2: e.Param#3
    //4: s.Pos#3
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 5},
    {refalrts::icString, 0, 3, 6},
    {refalrts::icString, 0, 6, 8},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 10},
    {refalrts::icLinkBrackets, 5, 10, 0},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceRange, 0, 0, 8},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceRange, 0, 0, 6},
    {refalrts::icSpliceSTVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +18, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( s.Pos#3/4 # UnknownShortOption s.Option#3/5 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icsVarLeft, 0, 4, 2},
    {refalrts::icIdentLeft, 0, 4, 2},
    {refalrts::icsVarLeft, 0, 5, 2},
    {refalrts::icEmpty, 0, 0, 2},
    //4: s.Pos#3
    //5: s.Option#3
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icString, 0, 5, 7},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 9},
    {refalrts::icLinkBrackets, 6, 9, 0},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceSTVar, 0, 0, 5},
    {refalrts::icSpliceRange, 0, 0, 7},
    {refalrts::icSpliceSTVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +16, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( s.Pos#3/4 # UnknownLongOption e.Option#3/2 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icsVarLeft, 0, 4, 2},
    {refalrts::icIdentLeft, 0, 3, 2},
    // closed e.Option#3 as range 2
    //2: e.Option#3
    //4: s.Pos#3
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 5},
    {refalrts::icString, 0, 4, 6},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 8},
    {refalrts::icLinkBrackets, 5, 8, 0},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceRange, 0, 0, 6},
    {refalrts::icSpliceSTVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +30, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( s.Pos#3/4 # RepeatOption s.Tag#3/5 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icsVarLeft, 0, 4, 2},
    {refalrts::icIdentLeft, 0, 2, 2},
    {refalrts::icsVarLeft, 0, 5, 2},
    {refalrts::icEmpty, 0, 0, 2},
    //4: s.Pos#3
    //5: s.Tag#3
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icString, 0, 3, 7},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 9},
    {refalrts::icFunc, 0, 1, 10},
    {refalrts::icFunc, 0, 0, 11},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 12},
    {refalrts::icString, 0, 2, 13},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 15},
    {refalrts::icLinkBrackets, 6, 15, 0},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceRange, 0, 0, 13},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icPushStack, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceSTVar, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceRange, 0, 0, 7},
    {refalrts::icSpliceSTVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +18, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( s.Pos#3/4 # BadValue_GenMode e.BadValue#3/2 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icsVarLeft, 0, 4, 2},
    {refalrts::icIdentLeft, 0, 1, 2},
    // closed e.BadValue#3 as range 2
    //2: e.BadValue#3
    //4: s.Pos#3
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 5},
    {refalrts::icString, 0, 1, 6},
    {refalrts::icChar, 0, '\'', 8},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 9},
    {refalrts::icLinkBrackets, 5, 9, 0},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceRange, 0, 0, 6},
    {refalrts::icSpliceSTVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( s.Pos#3/4 # BadValue_Opt e.BadValue#3/2 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icsVarLeft, 0, 4, 2},
    {refalrts::icIdentLeft, 0, 0, 2},
    // closed e.BadValue#3 as range 2
    //2: e.BadValue#3
    //4: s.Pos#3
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 5},
    {refalrts::icString, 0, 0, 6},
    {refalrts::icChar, 0, '\'', 8},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 9},
    {refalrts::icLinkBrackets, 5, 9, 0},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceRange, 0, 0, 6},
    {refalrts::icSpliceSTVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[5];
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
    // ( s.Pos#3/4 # NoRequiredParam e.Param#3/2 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[4], context[2], context[3] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_NoRequiredParam<int>::name, context[2], context[3] ) )
      continue;
    // closed e.Param#3 as range 2
    //2: e.Param#3
    //4: s.Pos#3

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[5] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[6], context[7], "option ", 7 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[8], context[9], " expects parameter", 18 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[10] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[5], context[10] );
    res = refalrts::splice_elem( res, context[10] );
    res = refalrts::splice_evar( res, context[8], context[9] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[6], context[7] );
    res = refalrts::splice_stvar( res, context[4] );
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
    // ( s.Pos#3/4 # UnknownShortOption s.Option#3/5 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[4], context[2], context[3] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_UnknownShortOption<int>::name, context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    //4: s.Pos#3
    //5: s.Option#3

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[7], context[8], "unknown option -", 16 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[9] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[6], context[9] );
    res = refalrts::splice_elem( res, context[9] );
    res = refalrts::splice_stvar( res, context[5] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_stvar( res, context[4] );
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
    // ( s.Pos#3/4 # UnknownLongOption e.Option#3/2 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[4], context[2], context[3] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_UnknownLongOption<int>::name, context[2], context[3] ) )
      continue;
    // closed e.Option#3 as range 2
    //2: e.Option#3
    //4: s.Pos#3

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[5] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[6], context[7], "unknown option --", 17 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[8] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[5], context[8] );
    res = refalrts::splice_elem( res, context[8] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[6], context[7] );
    res = refalrts::splice_stvar( res, context[4] );
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
    // ( s.Pos#3/4 # RepeatOption s.Tag#3/5 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[4], context[2], context[3] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_RepeatOption<int>::name, context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    //4: s.Pos#3
    //5: s.Tag#3

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[7], context[8], "option ", 7 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[9] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[10], Fetch, "Fetch" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[11], lambda_ParseCommandLine_11, "lambda_ParseCommandLine_11" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[13], context[14], " must appear one time", 21 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[15] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[6], context[15] );
    res = refalrts::splice_elem( res, context[15] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    refalrts::push_stack( context[12] );
    refalrts::push_stack( context[9] );
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_stvar( res, context[5] );
    res = refalrts::splice_elem( res, context[10] );
    res = refalrts::splice_elem( res, context[9] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_stvar( res, context[4] );
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
    // ( s.Pos#3/4 # BadValue_GenMode e.BadValue#3/2 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[4], context[2], context[3] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_BadValue_GenMode<int>::name, context[2], context[3] ) )
      continue;
    // closed e.BadValue#3 as range 2
    //2: e.BadValue#3
    //4: s.Pos#3

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[5] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[6], context[7], "option --gen expects \'both\', \'direct\' or \'interp\', but got \'", 60 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[8], '\'' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[9] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[5], context[9] );
    res = refalrts::splice_elem( res, context[9] );
    res = refalrts::splice_elem( res, context[8] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[6], context[7] );
    res = refalrts::splice_stvar( res, context[4] );
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
  // ( s.Pos#3/4 # BadValue_Opt e.BadValue#3/2 )
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[4], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::ident_left(  & ident_BadValue_Opt<int>::name, context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.BadValue#3 as range 2
  //2: e.BadValue#3
  //4: s.Pos#3

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_bracket( context[5] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[6], context[7], "option -O expects \'P\' or \'R\', but got \'", 39 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[8], '\'' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[9] ) )
    return refalrts::cNoMemory;
  refalrts::link_brackets( context[5], context[9] );
  res = refalrts::splice_elem( res, context[9] );
  res = refalrts::splice_elem( res, context[8] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[6], context[7] );
  res = refalrts::splice_stvar( res, context[4] );
  res = refalrts::splice_elem( res, context[5] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult lambda_ParseCommandLine_13(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { lambda_ParseCommandLine_12, "lambda_ParseCommandLine_12" },
    { Map, "Map" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_Fails<int>::name,
    & ident_Success<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +10, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( ) ( e.Bag#2/4 ) e.FileNames#2/0
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icEmpty, 0, 0, 2},
    // closed e.Bag#2 as range 4
    // closed e.FileNames#2 as range 0
    //0: e.FileNames#2
    //4: e.Bag#2
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icIdent, 0, 1, 6},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icSpliceEVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Errors#2/2 ) ( e.Bag#2/4 ) e.FileNames#2/0
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    // closed e.Errors#2 as range 2
    // closed e.Bag#2 as range 4
    // closed e.FileNames#2 as range 0
    //0: e.FileNames#2
    //2: e.Errors#2
    //4: e.Bag#2
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icIdent, 0, 0, 6},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 7},
    {refalrts::icFunc, 0, 1, 8},
    {refalrts::icFunc, 0, 0, 9},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 10},
    {refalrts::icPushStack, 0, 0, 10},
    {refalrts::icPushStack, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 9},
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
    // ( ) ( e.Bag#2/4 ) e.FileNames#2/0
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Bag#2 as range 4
    // closed e.FileNames#2 as range 0
    //0: e.FileNames#2
    //4: e.Bag#2

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_ident( context[6], & ident_Success<int>::name ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_evar( res, context[0], context[1] );
    res = refalrts::splice_evar( res, context[4], context[5] );
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
  // ( e.Errors#2/2 ) ( e.Bag#2/4 ) e.FileNames#2/0
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[4] = 0;
  context[5] = 0;
  if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Errors#2 as range 2
  // closed e.Bag#2 as range 4
  // closed e.FileNames#2 as range 0
  //0: e.FileNames#2
  //2: e.Errors#2
  //4: e.Bag#2

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_ident( context[6], & ident_Fails<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[8], Map, "Map" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[9], lambda_ParseCommandLine_12, "lambda_ParseCommandLine_12" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[10] ) )
    return refalrts::cNoMemory;
  refalrts::push_stack( context[10] );
  refalrts::push_stack( context[7] );
  res = refalrts::splice_elem( res, context[10] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_elem( res, context[9] );
  res = refalrts::splice_elem( res, context[8] );
  res = refalrts::splice_elem( res, context[7] );
  res = refalrts::splice_elem( res, context[6] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

refalrts::FnResult ParseCommandLine(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 102 elems
  refalrts::Iter context[102];
  refalrts::zeros( context, 102 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { lambda_ParseCommandLine_13, "lambda_ParseCommandLine_13" },
    { lambda_ParseCommandLine_10, "lambda_ParseCommandLine_10" },
    { lambda_ParseCommandLine_8, "lambda_ParseCommandLine_8" },
    { lambda_ParseCommandLine_7, "lambda_ParseCommandLine_7" },
    { MapReduce, "MapReduce" },
    { lambda_ParseCommandLine_5, "lambda_ParseCommandLine_5" },
    { lambda_ParseCommandLine_4, "lambda_ParseCommandLine_4" },
    { lambda_ParseCommandLine_3, "lambda_ParseCommandLine_3" },
    { lambda_ParseCommandLine_2, "lambda_ParseCommandLine_2" },
    { lambda_ParseCommandLine_1, "lambda_ParseCommandLine_1" },
    { lambda_ParseCommandLine_0, "lambda_ParseCommandLine_0" },
    { Seq, "Seq" },
    { GetOpt, "GetOpt" },
    { Fetch, "Fetch" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_Required<int>::name,
    & ident_RuntimeFolder<int>::name,
    & ident_CppFlag<int>::name,
    & ident_CppFlags<int>::name,
    & ident_SearchFolder<int>::name,
    & ident_ErrorFile<int>::name,
    & ident_Opt<int>::name,
    & ident_GenMode<int>::name,
    & ident_CppCompiler<int>::name
  };
  using refalrts::numbers;
  static const refalrts::StringItem strings[] = {
    {"runtime-directory", 17},
    {"runtime-dir", 11},
    {"cppflag", 7},
    {"cppflags", 8},
    {"CF", 2},
    {"directory", 9},
    {"dir", 3},
    {"error-file", 10},
    {"gen", 3},
    {"cpp-command", 11}
  };
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    // e.Arguments#1/0
    // closed e.Arguments#1 as range 0
    //0: e.Arguments#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 2},
    {refalrts::icFunc, 0, 13, 3},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 4},
    {refalrts::icFunc, 0, 12, 5},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 7},
    {refalrts::icIdent, 0, 8, 8},
    {refalrts::icIdent, 0, 0, 9},
    {refalrts::icChar, 0, 'c', 10},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 11},
    {refalrts::icString, 0, 9, 12},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 14},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 15},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 16},
    {refalrts::icIdent, 0, 7, 17},
    {refalrts::icIdent, 0, 0, 18},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 19},
    {refalrts::icString, 0, 8, 20},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 22},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 23},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 24},
    {refalrts::icIdent, 0, 6, 25},
    {refalrts::icIdent, 0, 0, 26},
    {refalrts::icChar, 0, 'O', 27},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 28},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 29},
    {refalrts::icIdent, 0, 5, 30},
    {refalrts::icIdent, 0, 0, 31},
    {refalrts::icChar, 0, 'e', 32},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 33},
    {refalrts::icString, 0, 7, 34},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 36},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 37},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 38},
    {refalrts::icIdent, 0, 4, 39},
    {refalrts::icIdent, 0, 0, 40},
    {refalrts::icChar, 0, 'd', 41},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 42},
    {refalrts::icString, 0, 6, 43},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 45},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 46},
    {refalrts::icString, 0, 5, 47},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 49},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 50},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 51},
    {refalrts::icIdent, 0, 3, 52},
    {refalrts::icIdent, 0, 0, 53},
    {refalrts::icString, 0, 4, 54},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 56},
    {refalrts::icString, 0, 3, 57},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 59},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 60},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 61},
    {refalrts::icIdent, 0, 2, 62},
    {refalrts::icIdent, 0, 0, 63},
    {refalrts::icChar, 0, 'f', 64},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 65},
    {refalrts::icString, 0, 2, 66},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 68},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 69},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 70},
    {refalrts::icIdent, 0, 1, 71},
    {refalrts::icIdent, 0, 0, 72},
    {refalrts::icChar, 0, 'D', 73},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 74},
    {refalrts::icString, 0, 1, 75},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 77},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 78},
    {refalrts::icString, 0, 0, 79},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 81},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 82},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 83},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 84},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 85},
    {refalrts::icFunc, 0, 11, 86},
    {refalrts::icFunc, 0, 10, 87},
    {refalrts::icFunc, 0, 9, 88},
    {refalrts::icFunc, 0, 8, 89},
    {refalrts::icFunc, 0, 7, 90},
    {refalrts::icFunc, 0, 6, 91},
    {refalrts::icFunc, 0, 5, 92},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 93},
    {refalrts::icFunc, 0, 4, 94},
    {refalrts::icFunc, 0, 3, 95},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 96},
    {refalrts::icFunc, 0, 2, 97},
    {refalrts::icFunc, 0, 1, 98},
    {refalrts::icFunc, 0, 0, 99},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 100},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 101},
    {refalrts::icPushStack, 0, 0, 101},
    {refalrts::icPushStack, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 101},
    {refalrts::icPushStack, 0, 0, 100},
    {refalrts::icPushStack, 0, 0, 85},
    {refalrts::icSpliceElem, 0, 0, 100},
    {refalrts::icSpliceElem, 0, 0, 99},
    {refalrts::icSpliceElem, 0, 0, 98},
    {refalrts::icSpliceElem, 0, 0, 97},
    {refalrts::icLinkBrackets, 93, 96, 0},
    {refalrts::icSpliceElem, 0, 0, 96},
    {refalrts::icSpliceElem, 0, 0, 95},
    {refalrts::icSpliceElem, 0, 0, 94},
    {refalrts::icSpliceElem, 0, 0, 93},
    {refalrts::icSpliceElem, 0, 0, 92},
    {refalrts::icSpliceElem, 0, 0, 91},
    {refalrts::icSpliceElem, 0, 0, 90},
    {refalrts::icSpliceElem, 0, 0, 89},
    {refalrts::icSpliceElem, 0, 0, 88},
    {refalrts::icSpliceElem, 0, 0, 87},
    {refalrts::icSpliceElem, 0, 0, 86},
    {refalrts::icSpliceElem, 0, 0, 85},
    {refalrts::icPushStack, 0, 0, 84},
    {refalrts::icPushStack, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 84},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icLinkBrackets, 6, 83, 0},
    {refalrts::icSpliceElem, 0, 0, 83},
    {refalrts::icLinkBrackets, 70, 82, 0},
    {refalrts::icSpliceElem, 0, 0, 82},
    {refalrts::icLinkBrackets, 78, 81, 0},
    {refalrts::icSpliceElem, 0, 0, 81},
    {refalrts::icSpliceRange, 0, 0, 79},
    {refalrts::icSpliceElem, 0, 0, 78},
    {refalrts::icLinkBrackets, 74, 77, 0},
    {refalrts::icSpliceElem, 0, 0, 77},
    {refalrts::icSpliceRange, 0, 0, 75},
    {refalrts::icSpliceElem, 0, 0, 74},
    {refalrts::icSpliceElem, 0, 0, 73},
    {refalrts::icSpliceElem, 0, 0, 72},
    {refalrts::icSpliceElem, 0, 0, 71},
    {refalrts::icSpliceElem, 0, 0, 70},
    {refalrts::icLinkBrackets, 61, 69, 0},
    {refalrts::icSpliceElem, 0, 0, 69},
    {refalrts::icLinkBrackets, 65, 68, 0},
    {refalrts::icSpliceElem, 0, 0, 68},
    {refalrts::icSpliceRange, 0, 0, 66},
    {refalrts::icSpliceElem, 0, 0, 65},
    {refalrts::icSpliceElem, 0, 0, 64},
    {refalrts::icSpliceElem, 0, 0, 63},
    {refalrts::icSpliceElem, 0, 0, 62},
    {refalrts::icSpliceElem, 0, 0, 61},
    {refalrts::icLinkBrackets, 51, 60, 0},
    {refalrts::icSpliceElem, 0, 0, 60},
    {refalrts::icLinkBrackets, 56, 59, 0},
    {refalrts::icSpliceElem, 0, 0, 59},
    {refalrts::icSpliceRange, 0, 0, 57},
    {refalrts::icSpliceElem, 0, 0, 56},
    {refalrts::icSpliceRange, 0, 0, 54},
    {refalrts::icSpliceElem, 0, 0, 53},
    {refalrts::icSpliceElem, 0, 0, 52},
    {refalrts::icSpliceElem, 0, 0, 51},
    {refalrts::icLinkBrackets, 38, 50, 0},
    {refalrts::icSpliceElem, 0, 0, 50},
    {refalrts::icLinkBrackets, 46, 49, 0},
    {refalrts::icSpliceElem, 0, 0, 49},
    {refalrts::icSpliceRange, 0, 0, 47},
    {refalrts::icSpliceElem, 0, 0, 46},
    {refalrts::icLinkBrackets, 42, 45, 0},
    {refalrts::icSpliceElem, 0, 0, 45},
    {refalrts::icSpliceRange, 0, 0, 43},
    {refalrts::icSpliceElem, 0, 0, 42},
    {refalrts::icSpliceElem, 0, 0, 41},
    {refalrts::icSpliceElem, 0, 0, 40},
    {refalrts::icSpliceElem, 0, 0, 39},
    {refalrts::icSpliceElem, 0, 0, 38},
    {refalrts::icLinkBrackets, 29, 37, 0},
    {refalrts::icSpliceElem, 0, 0, 37},
    {refalrts::icLinkBrackets, 33, 36, 0},
    {refalrts::icSpliceElem, 0, 0, 36},
    {refalrts::icSpliceRange, 0, 0, 34},
    {refalrts::icSpliceElem, 0, 0, 33},
    {refalrts::icSpliceElem, 0, 0, 32},
    {refalrts::icSpliceElem, 0, 0, 31},
    {refalrts::icSpliceElem, 0, 0, 30},
    {refalrts::icSpliceElem, 0, 0, 29},
    {refalrts::icLinkBrackets, 24, 28, 0},
    {refalrts::icSpliceElem, 0, 0, 28},
    {refalrts::icSpliceElem, 0, 0, 27},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icLinkBrackets, 16, 23, 0},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icLinkBrackets, 19, 22, 0},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceRange, 0, 0, 20},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icLinkBrackets, 7, 15, 0},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icLinkBrackets, 11, 14, 0},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceRange, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 7},
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
  // e.Arguments#1/0
  // closed e.Arguments#1 as range 0
  //0: e.Arguments#1

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_call( context[2] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[3], Fetch, "Fetch" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[4] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[5], GetOpt, "GetOpt" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[8], & ident_CppCompiler<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[9], & ident_Required<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[10], 'c' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[12], context[13], "cpp-command", 11 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[16] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[17], & ident_GenMode<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[18], & ident_Required<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[19] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[20], context[21], "gen", 3 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[22] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[23] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[24] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[25], & ident_Opt<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[26], & ident_Required<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[27], 'O' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[28] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[29] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[30], & ident_ErrorFile<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[31], & ident_Required<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[32], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[33] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[34], context[35], "error-file", 10 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[36] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[37] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[38] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[39], & ident_SearchFolder<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[40], & ident_Required<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[41], 'd' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[42] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[43], context[44], "dir", 3 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[45] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[46] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[47], context[48], "directory", 9 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[49] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[50] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[51] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[52], & ident_CppFlags<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[53], & ident_Required<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[54], context[55], "CF", 2 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[56] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[57], context[58], "cppflags", 8 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[59] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[60] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[61] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[62], & ident_CppFlag<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[63], & ident_Required<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[64], 'f' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[65] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[66], context[67], "cppflag", 7 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[68] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[69] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[70] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[71], & ident_RuntimeFolder<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[72], & ident_Required<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[73], 'D' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[74] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[75], context[76], "runtime-dir", 11 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[77] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[78] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[79], context[80], "runtime-directory", 17 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[81] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[82] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[83] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[84] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[85] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[86], Seq, "Seq" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[87], lambda_ParseCommandLine_0, "lambda_ParseCommandLine_0" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[88], lambda_ParseCommandLine_1, "lambda_ParseCommandLine_1" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[89], lambda_ParseCommandLine_2, "lambda_ParseCommandLine_2" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[90], lambda_ParseCommandLine_3, "lambda_ParseCommandLine_3" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[91], lambda_ParseCommandLine_4, "lambda_ParseCommandLine_4" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[92], lambda_ParseCommandLine_5, "lambda_ParseCommandLine_5" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[93] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[94], MapReduce, "MapReduce" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[95], lambda_ParseCommandLine_7, "lambda_ParseCommandLine_7" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[96] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[97], lambda_ParseCommandLine_8, "lambda_ParseCommandLine_8" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[98], lambda_ParseCommandLine_10, "lambda_ParseCommandLine_10" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[99], lambda_ParseCommandLine_13, "lambda_ParseCommandLine_13" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[100] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[101] ) )
    return refalrts::cNoMemory;
  refalrts::push_stack( context[101] );
  refalrts::push_stack( context[2] );
  res = refalrts::splice_elem( res, context[101] );
  refalrts::push_stack( context[100] );
  refalrts::push_stack( context[85] );
  res = refalrts::splice_elem( res, context[100] );
  res = refalrts::splice_elem( res, context[99] );
  res = refalrts::splice_elem( res, context[98] );
  res = refalrts::splice_elem( res, context[97] );
  refalrts::link_brackets( context[93], context[96] );
  res = refalrts::splice_elem( res, context[96] );
  res = refalrts::splice_elem( res, context[95] );
  res = refalrts::splice_elem( res, context[94] );
  res = refalrts::splice_elem( res, context[93] );
  res = refalrts::splice_elem( res, context[92] );
  res = refalrts::splice_elem( res, context[91] );
  res = refalrts::splice_elem( res, context[90] );
  res = refalrts::splice_elem( res, context[89] );
  res = refalrts::splice_elem( res, context[88] );
  res = refalrts::splice_elem( res, context[87] );
  res = refalrts::splice_elem( res, context[86] );
  res = refalrts::splice_elem( res, context[85] );
  refalrts::push_stack( context[84] );
  refalrts::push_stack( context[4] );
  res = refalrts::splice_elem( res, context[84] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  refalrts::link_brackets( context[6], context[83] );
  res = refalrts::splice_elem( res, context[83] );
  refalrts::link_brackets( context[70], context[82] );
  res = refalrts::splice_elem( res, context[82] );
  refalrts::link_brackets( context[78], context[81] );
  res = refalrts::splice_elem( res, context[81] );
  res = refalrts::splice_evar( res, context[79], context[80] );
  res = refalrts::splice_elem( res, context[78] );
  refalrts::link_brackets( context[74], context[77] );
  res = refalrts::splice_elem( res, context[77] );
  res = refalrts::splice_evar( res, context[75], context[76] );
  res = refalrts::splice_elem( res, context[74] );
  res = refalrts::splice_elem( res, context[73] );
  res = refalrts::splice_elem( res, context[72] );
  res = refalrts::splice_elem( res, context[71] );
  res = refalrts::splice_elem( res, context[70] );
  refalrts::link_brackets( context[61], context[69] );
  res = refalrts::splice_elem( res, context[69] );
  refalrts::link_brackets( context[65], context[68] );
  res = refalrts::splice_elem( res, context[68] );
  res = refalrts::splice_evar( res, context[66], context[67] );
  res = refalrts::splice_elem( res, context[65] );
  res = refalrts::splice_elem( res, context[64] );
  res = refalrts::splice_elem( res, context[63] );
  res = refalrts::splice_elem( res, context[62] );
  res = refalrts::splice_elem( res, context[61] );
  refalrts::link_brackets( context[51], context[60] );
  res = refalrts::splice_elem( res, context[60] );
  refalrts::link_brackets( context[56], context[59] );
  res = refalrts::splice_elem( res, context[59] );
  res = refalrts::splice_evar( res, context[57], context[58] );
  res = refalrts::splice_elem( res, context[56] );
  res = refalrts::splice_evar( res, context[54], context[55] );
  res = refalrts::splice_elem( res, context[53] );
  res = refalrts::splice_elem( res, context[52] );
  res = refalrts::splice_elem( res, context[51] );
  refalrts::link_brackets( context[38], context[50] );
  res = refalrts::splice_elem( res, context[50] );
  refalrts::link_brackets( context[46], context[49] );
  res = refalrts::splice_elem( res, context[49] );
  res = refalrts::splice_evar( res, context[47], context[48] );
  res = refalrts::splice_elem( res, context[46] );
  refalrts::link_brackets( context[42], context[45] );
  res = refalrts::splice_elem( res, context[45] );
  res = refalrts::splice_evar( res, context[43], context[44] );
  res = refalrts::splice_elem( res, context[42] );
  res = refalrts::splice_elem( res, context[41] );
  res = refalrts::splice_elem( res, context[40] );
  res = refalrts::splice_elem( res, context[39] );
  res = refalrts::splice_elem( res, context[38] );
  refalrts::link_brackets( context[29], context[37] );
  res = refalrts::splice_elem( res, context[37] );
  refalrts::link_brackets( context[33], context[36] );
  res = refalrts::splice_elem( res, context[36] );
  res = refalrts::splice_evar( res, context[34], context[35] );
  res = refalrts::splice_elem( res, context[33] );
  res = refalrts::splice_elem( res, context[32] );
  res = refalrts::splice_elem( res, context[31] );
  res = refalrts::splice_elem( res, context[30] );
  res = refalrts::splice_elem( res, context[29] );
  refalrts::link_brackets( context[24], context[28] );
  res = refalrts::splice_elem( res, context[28] );
  res = refalrts::splice_elem( res, context[27] );
  res = refalrts::splice_elem( res, context[26] );
  res = refalrts::splice_elem( res, context[25] );
  res = refalrts::splice_elem( res, context[24] );
  refalrts::link_brackets( context[16], context[23] );
  res = refalrts::splice_elem( res, context[23] );
  refalrts::link_brackets( context[19], context[22] );
  res = refalrts::splice_elem( res, context[22] );
  res = refalrts::splice_evar( res, context[20], context[21] );
  res = refalrts::splice_elem( res, context[19] );
  res = refalrts::splice_elem( res, context[18] );
  res = refalrts::splice_elem( res, context[17] );
  res = refalrts::splice_elem( res, context[16] );
  refalrts::link_brackets( context[7], context[15] );
  res = refalrts::splice_elem( res, context[15] );
  refalrts::link_brackets( context[11], context[14] );
  res = refalrts::splice_elem( res, context[14] );
  res = refalrts::splice_evar( res, context[12], context[13] );
  res = refalrts::splice_elem( res, context[11] );
  res = refalrts::splice_elem( res, context[10] );
  res = refalrts::splice_elem( res, context[9] );
  res = refalrts::splice_elem( res, context[8] );
  res = refalrts::splice_elem( res, context[7] );
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

static refalrts::FnResult CheckRepeated(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 41 elems
  refalrts::Iter context[41];
  refalrts::zeros( context, 41 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { CheckRepeated, "CheckRepeated" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_RepeatOption<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +57, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.CheckedTags_B#1/6 s.Tag#1/8 e.CheckedTags_E#1/25 ) ( e.Errors#1/4 ) e.Opts_B#1/9 ( s.Tag#1/13 s.Num1#1/14 e.Value#1/11 ) e.Opts_M#1/15 ( s.Tag#1/19 s.Num2#1/22 e.Value#1/20 ) e.Opts_E#1/29
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    // closed e.Errors#1 as range 4
    {refalrts::icEPrepare, 0, 6, 2},
    {refalrts::icEStart, 0, 6, 2},
    {refalrts::icSave, 0, 23, 0},
    {refalrts::icSave, 0, 25, 2},
    {refalrts::icsVarLeft, 0, 8, 25},
    // closed e.CheckedTags_E#1 as range 2
    {refalrts::icEPrepare, 0, 9, 23},
    {refalrts::icEStart, 0, 9, 23},
    {refalrts::icSave, 0, 27, 23},
    {refalrts::icBracketLeft, 0, 11, 27},
    {refalrts::icsRepeatLeft, 13, 8, 11},
    {refalrts::icsVarLeft, 0, 14, 11},
    // closed e.Value#1 as range 11
    {refalrts::icEPrepare, 0, 15, 27},
    {refalrts::icEStart, 0, 15, 27},
    {refalrts::icSave, 0, 29, 27},
    {refalrts::icBracketLeft, 0, 17, 29},
    {refalrts::icsRepeatLeft, 19, 13, 17},
    {refalrts::iceRepeatRight, 20, 11, 17},
    // closed e.Opts_E#1 as range 0
    {refalrts::icsVarLeft, 0, 22, 17},
    {refalrts::icEmpty, 0, 0, 17},
    //4: e.Errors#1
    //6: e.CheckedTags_B#1
    //8: s.Tag#1
    //9: e.Opts_B#1
    //11: e.Value#1
    //13: s.Tag#1
    //14: s.Num1#1
    //15: e.Opts_M#1
    //19: s.Tag#1
    //20: e.Value#1
    //22: s.Num2#1
    //25: e.CheckedTags_E#1
    //29: e.Opts_E#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 31},
    {refalrts::icFunc, 0, 0, 32},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 33},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 34},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 35},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 36},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 37},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 38},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 39},
    {refalrts::icPushStack, 0, 0, 39},
    {refalrts::icPushStack, 0, 0, 31},
    {refalrts::icSpliceElem, 0, 0, 39},
    {refalrts::icSpliceEVar, 0, 0, 29},
    {refalrts::icSpliceEVar, 0, 0, 15},
    {refalrts::icLinkBrackets, 37, 38, 0},
    {refalrts::icSpliceElem, 0, 0, 38},
    {refalrts::icSpliceEVar, 0, 0, 11},
    {refalrts::icSpliceSTVar, 0, 0, 14},
    {refalrts::icSpliceSTVar, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 37},
    {refalrts::icSpliceEVar, 0, 0, 9},
    {refalrts::icLinkBrackets, 35, 36, 0},
    {refalrts::icSpliceElem, 0, 0, 36},
    {refalrts::icSpliceEVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 35},
    {refalrts::icLinkBrackets, 33, 34, 0},
    {refalrts::icSpliceElem, 0, 0, 34},
    {refalrts::icSpliceEVar, 0, 0, 25},
    {refalrts::icSpliceSTVar, 0, 0, 8},
    {refalrts::icSpliceEVar, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 33},
    {refalrts::icSpliceElem, 0, 0, 32},
    {refalrts::icSpliceElem, 0, 0, 31},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +64, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.CheckedTags_B#1/6 s.Tag#1/8 e.CheckedTags_E#1/23 ) ( e.Errors#1/4 ) e.Opts_B#1/9 ( s.Tag#1/13 s.Num1#1/14 e.Value1#1/11 ) e.Opts_M#1/15 ( s.Tag#1/19 s.Num2#1/20 e.Value2#1/17 ) e.Opts_E#1/27
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    // closed e.Errors#1 as range 4
    {refalrts::icEPrepare, 0, 6, 2},
    {refalrts::icEStart, 0, 6, 2},
    {refalrts::icSave, 0, 21, 0},
    {refalrts::icSave, 0, 23, 2},
    {refalrts::icsVarLeft, 0, 8, 23},
    // closed e.CheckedTags_E#1 as range 2
    {refalrts::icEPrepare, 0, 9, 21},
    {refalrts::icEStart, 0, 9, 21},
    {refalrts::icSave, 0, 25, 21},
    {refalrts::icBracketLeft, 0, 11, 25},
    {refalrts::icsRepeatLeft, 13, 8, 11},
    {refalrts::icsVarLeft, 0, 14, 11},
    // closed e.Value1#1 as range 11
    {refalrts::icEPrepare, 0, 15, 25},
    {refalrts::icEStart, 0, 15, 25},
    {refalrts::icSave, 0, 27, 25},
    {refalrts::icBracketLeft, 0, 17, 27},
    {refalrts::icsRepeatLeft, 19, 13, 17},
    // closed e.Opts_E#1 as range 0
    {refalrts::icsVarLeft, 0, 20, 17},
    // closed e.Value2#1 as range 17
    //4: e.Errors#1
    //6: e.CheckedTags_B#1
    //8: s.Tag#1
    //9: e.Opts_B#1
    //11: e.Value1#1
    //13: s.Tag#1
    //14: s.Num1#1
    //15: e.Opts_M#1
    //17: e.Value2#1
    //19: s.Tag#1
    //20: s.Num2#1
    //23: e.CheckedTags_E#1
    //27: e.Opts_E#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 29},
    {refalrts::icFunc, 0, 0, 30},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 31},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 32},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 33},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 34},
    {refalrts::icIdent, 0, 0, 35},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 36},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 37},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 38},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 39},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 40},
    {refalrts::icPushStack, 0, 0, 40},
    {refalrts::icPushStack, 0, 0, 29},
    {refalrts::icSpliceElem, 0, 0, 40},
    {refalrts::icSpliceEVar, 0, 0, 27},
    {refalrts::icSpliceEVar, 0, 0, 15},
    {refalrts::icLinkBrackets, 38, 39, 0},
    {refalrts::icSpliceElem, 0, 0, 39},
    {refalrts::icSpliceEVar, 0, 0, 11},
    {refalrts::icSpliceSTVar, 0, 0, 14},
    {refalrts::icSpliceSTVar, 0, 0, 19},
    {refalrts::icSpliceElem, 0, 0, 38},
    {refalrts::icSpliceEVar, 0, 0, 9},
    {refalrts::icLinkBrackets, 33, 37, 0},
    {refalrts::icSpliceElem, 0, 0, 37},
    {refalrts::icLinkBrackets, 34, 36, 0},
    {refalrts::icSpliceElem, 0, 0, 36},
    {refalrts::icSpliceSTVar, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 35},
    {refalrts::icSpliceSTVar, 0, 0, 20},
    {refalrts::icSpliceElem, 0, 0, 34},
    {refalrts::icSpliceEVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 33},
    {refalrts::icLinkBrackets, 31, 32, 0},
    {refalrts::icSpliceElem, 0, 0, 32},
    {refalrts::icSpliceEVar, 0, 0, 23},
    {refalrts::icSpliceSTVar, 0, 0, 8},
    {refalrts::icSpliceEVar, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 31},
    {refalrts::icSpliceElem, 0, 0, 30},
    {refalrts::icSpliceElem, 0, 0, 29},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.CheckedTags#1/2 ) ( e.Errors#1/4 ) e.Options#1/0
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    // closed e.CheckedTags#1 as range 2
    // closed e.Errors#1 as range 4
    // closed e.Options#1 as range 0
    //0: e.Options#1
    //2: e.CheckedTags#1
    //4: e.Errors#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 7},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icLinkBrackets, 6, 7, 0},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceEVar, 0, 0, 4},
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
    // ( e.CheckedTags_B#1/6 s.Tag#1/8 e.CheckedTags_E#1/25 ) ( e.Errors#1/4 ) e.Opts_B#1/9 ( s.Tag#1/13 s.Num1#1/14 e.Value#1/11 ) e.Opts_M#1/15 ( s.Tag#1/19 s.Num2#1/22 e.Value#1/20 ) e.Opts_E#1/29
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      continue;
    // closed e.Errors#1 as range 4
    context[6] = 0;
    context[7] = 0;
    refalrts::start_e_loop();
    do {
      context[23] = context[0];
      context[24] = context[1];
      context[25] = context[2];
      context[26] = context[3];
      if( ! refalrts::svar_left( context[8], context[25], context[26] ) )
        continue;
      // closed e.CheckedTags_E#1 as range 2
      context[9] = 0;
      context[10] = 0;
      refalrts::start_e_loop();
      do {
        context[27] = context[23];
        context[28] = context[24];
        context[11] = 0;
        context[12] = 0;
        if( ! refalrts::brackets_left( context[11], context[12], context[27], context[28] ) )
          continue;
        if( ! refalrts::repeated_stvar_left( context[13], context[8], context[11], context[12] ) )
          continue;
        if( ! refalrts::svar_left( context[14], context[11], context[12] ) )
          continue;
        // closed e.Value#1 as range 11
        context[15] = 0;
        context[16] = 0;
        refalrts::start_e_loop();
        do {
          context[29] = context[27];
          context[30] = context[28];
          context[17] = 0;
          context[18] = 0;
          if( ! refalrts::brackets_left( context[17], context[18], context[29], context[30] ) )
            continue;
          if( ! refalrts::repeated_stvar_left( context[19], context[13], context[17], context[18] ) )
            continue;
          if( ! refalrts::repeated_evar_right( context[20], context[21], context[11], context[12], context[17], context[18] ) )
            continue;
          // closed e.Opts_E#1 as range 0
          if( ! refalrts::svar_left( context[22], context[17], context[18] ) )
            continue;
          if( ! refalrts::empty_seq( context[17], context[18] ) )
            continue;
          //4: e.Errors#1
          //6: e.CheckedTags_B#1
          //8: s.Tag#1
          //9: e.Opts_B#1
          //11: e.Value#1
          //13: s.Tag#1
          //14: s.Num1#1
          //15: e.Opts_M#1
          //19: s.Tag#1
          //20: e.Value#1
          //22: s.Num2#1
          //25: e.CheckedTags_E#1
          //29: e.Opts_E#1

          refalrts::reset_allocator();
          refalrts::Iter res = arg_begin;
          if( ! refalrts::alloc_open_call( context[31] ) )
            return refalrts::cNoMemory;
          if( ! refalrts::alloc_name( context[32], CheckRepeated, "CheckRepeated" ) )
            return refalrts::cNoMemory;
          if( ! refalrts::alloc_open_bracket( context[33] ) )
            return refalrts::cNoMemory;
          if( ! refalrts::alloc_close_bracket( context[34] ) )
            return refalrts::cNoMemory;
          if( ! refalrts::alloc_open_bracket( context[35] ) )
            return refalrts::cNoMemory;
          if( ! refalrts::alloc_close_bracket( context[36] ) )
            return refalrts::cNoMemory;
          if( ! refalrts::alloc_open_bracket( context[37] ) )
            return refalrts::cNoMemory;
          if( ! refalrts::alloc_close_bracket( context[38] ) )
            return refalrts::cNoMemory;
          if( ! refalrts::alloc_close_call( context[39] ) )
            return refalrts::cNoMemory;
          refalrts::push_stack( context[39] );
          refalrts::push_stack( context[31] );
          res = refalrts::splice_elem( res, context[39] );
          res = refalrts::splice_evar( res, context[29], context[30] );
          res = refalrts::splice_evar( res, context[15], context[16] );
          refalrts::link_brackets( context[37], context[38] );
          res = refalrts::splice_elem( res, context[38] );
          res = refalrts::splice_evar( res, context[11], context[12] );
          res = refalrts::splice_stvar( res, context[14] );
          res = refalrts::splice_stvar( res, context[13] );
          res = refalrts::splice_elem( res, context[37] );
          res = refalrts::splice_evar( res, context[9], context[10] );
          refalrts::link_brackets( context[35], context[36] );
          res = refalrts::splice_elem( res, context[36] );
          res = refalrts::splice_evar( res, context[4], context[5] );
          res = refalrts::splice_elem( res, context[35] );
          refalrts::link_brackets( context[33], context[34] );
          res = refalrts::splice_elem( res, context[34] );
          res = refalrts::splice_evar( res, context[25], context[26] );
          res = refalrts::splice_stvar( res, context[8] );
          res = refalrts::splice_evar( res, context[6], context[7] );
          res = refalrts::splice_elem( res, context[33] );
          res = refalrts::splice_elem( res, context[32] );
          res = refalrts::splice_elem( res, context[31] );
          refalrts::use( res );
          refalrts::splice_to_freelist( arg_begin, arg_end );
          return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
        } while ( refalrts::open_evar_advance( context[15], context[16], context[27], context[28] ) );
      } while ( refalrts::open_evar_advance( context[9], context[10], context[23], context[24] ) );
    } while ( refalrts::open_evar_advance( context[6], context[7], context[2], context[3] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    // ( e.CheckedTags_B#1/6 s.Tag#1/8 e.CheckedTags_E#1/23 ) ( e.Errors#1/4 ) e.Opts_B#1/9 ( s.Tag#1/13 s.Num1#1/14 e.Value1#1/11 ) e.Opts_M#1/15 ( s.Tag#1/19 s.Num2#1/20 e.Value2#1/17 ) e.Opts_E#1/27
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      continue;
    // closed e.Errors#1 as range 4
    context[6] = 0;
    context[7] = 0;
    refalrts::start_e_loop();
    do {
      context[21] = context[0];
      context[22] = context[1];
      context[23] = context[2];
      context[24] = context[3];
      if( ! refalrts::svar_left( context[8], context[23], context[24] ) )
        continue;
      // closed e.CheckedTags_E#1 as range 2
      context[9] = 0;
      context[10] = 0;
      refalrts::start_e_loop();
      do {
        context[25] = context[21];
        context[26] = context[22];
        context[11] = 0;
        context[12] = 0;
        if( ! refalrts::brackets_left( context[11], context[12], context[25], context[26] ) )
          continue;
        if( ! refalrts::repeated_stvar_left( context[13], context[8], context[11], context[12] ) )
          continue;
        if( ! refalrts::svar_left( context[14], context[11], context[12] ) )
          continue;
        // closed e.Value1#1 as range 11
        context[15] = 0;
        context[16] = 0;
        refalrts::start_e_loop();
        do {
          context[27] = context[25];
          context[28] = context[26];
          context[17] = 0;
          context[18] = 0;
          if( ! refalrts::brackets_left( context[17], context[18], context[27], context[28] ) )
            continue;
          if( ! refalrts::repeated_stvar_left( context[19], context[13], context[17], context[18] ) )
            continue;
          // closed e.Opts_E#1 as range 0
          if( ! refalrts::svar_left( context[20], context[17], context[18] ) )
            continue;
          // closed e.Value2#1 as range 17
          //4: e.Errors#1
          //6: e.CheckedTags_B#1
          //8: s.Tag#1
          //9: e.Opts_B#1
          //11: e.Value1#1
          //13: s.Tag#1
          //14: s.Num1#1
          //15: e.Opts_M#1
          //17: e.Value2#1
          //19: s.Tag#1
          //20: s.Num2#1
          //23: e.CheckedTags_E#1
          //27: e.Opts_E#1

          refalrts::reset_allocator();
          refalrts::Iter res = arg_begin;
          if( ! refalrts::alloc_open_call( context[29] ) )
            return refalrts::cNoMemory;
          if( ! refalrts::alloc_name( context[30], CheckRepeated, "CheckRepeated" ) )
            return refalrts::cNoMemory;
          if( ! refalrts::alloc_open_bracket( context[31] ) )
            return refalrts::cNoMemory;
          if( ! refalrts::alloc_close_bracket( context[32] ) )
            return refalrts::cNoMemory;
          if( ! refalrts::alloc_open_bracket( context[33] ) )
            return refalrts::cNoMemory;
          if( ! refalrts::alloc_open_bracket( context[34] ) )
            return refalrts::cNoMemory;
          if( ! refalrts::alloc_ident( context[35], & ident_RepeatOption<int>::name ) )
            return refalrts::cNoMemory;
          if( ! refalrts::alloc_close_bracket( context[36] ) )
            return refalrts::cNoMemory;
          if( ! refalrts::alloc_close_bracket( context[37] ) )
            return refalrts::cNoMemory;
          if( ! refalrts::alloc_open_bracket( context[38] ) )
            return refalrts::cNoMemory;
          if( ! refalrts::alloc_close_bracket( context[39] ) )
            return refalrts::cNoMemory;
          if( ! refalrts::alloc_close_call( context[40] ) )
            return refalrts::cNoMemory;
          refalrts::push_stack( context[40] );
          refalrts::push_stack( context[29] );
          res = refalrts::splice_elem( res, context[40] );
          res = refalrts::splice_evar( res, context[27], context[28] );
          res = refalrts::splice_evar( res, context[15], context[16] );
          refalrts::link_brackets( context[38], context[39] );
          res = refalrts::splice_elem( res, context[39] );
          res = refalrts::splice_evar( res, context[11], context[12] );
          res = refalrts::splice_stvar( res, context[14] );
          res = refalrts::splice_stvar( res, context[19] );
          res = refalrts::splice_elem( res, context[38] );
          res = refalrts::splice_evar( res, context[9], context[10] );
          refalrts::link_brackets( context[33], context[37] );
          res = refalrts::splice_elem( res, context[37] );
          refalrts::link_brackets( context[34], context[36] );
          res = refalrts::splice_elem( res, context[36] );
          res = refalrts::splice_stvar( res, context[13] );
          res = refalrts::splice_elem( res, context[35] );
          res = refalrts::splice_stvar( res, context[20] );
          res = refalrts::splice_elem( res, context[34] );
          res = refalrts::splice_evar( res, context[4], context[5] );
          res = refalrts::splice_elem( res, context[33] );
          refalrts::link_brackets( context[31], context[32] );
          res = refalrts::splice_elem( res, context[32] );
          res = refalrts::splice_evar( res, context[23], context[24] );
          res = refalrts::splice_stvar( res, context[8] );
          res = refalrts::splice_evar( res, context[6], context[7] );
          res = refalrts::splice_elem( res, context[31] );
          res = refalrts::splice_elem( res, context[30] );
          res = refalrts::splice_elem( res, context[29] );
          refalrts::use( res );
          refalrts::splice_to_freelist( arg_begin, arg_end );
          return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
        } while ( refalrts::open_evar_advance( context[15], context[16], context[25], context[26] ) );
      } while ( refalrts::open_evar_advance( context[9], context[10], context[21], context[22] ) );
    } while ( refalrts::open_evar_advance( context[6], context[7], context[2], context[3] ) );
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  refalrts::move_left( context[0], context[1] );
  refalrts::move_left( context[0], context[1] );
  refalrts::move_right( context[0], context[1] );
  // ( e.CheckedTags#1/2 ) ( e.Errors#1/4 ) e.Options#1/0
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[4] = 0;
  context[5] = 0;
  if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.CheckedTags#1 as range 2
  // closed e.Errors#1 as range 4
  // closed e.Options#1 as range 0
  //0: e.Options#1
  //2: e.CheckedTags#1
  //4: e.Errors#1

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_bracket( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[7] ) )
    return refalrts::cNoMemory;
  res = refalrts::splice_evar( res, context[0], context[1] );
  refalrts::link_brackets( context[6], context[7] );
  res = refalrts::splice_elem( res, context[7] );
  res = refalrts::splice_evar( res, context[4], context[5] );
  res = refalrts::splice_elem( res, context[6] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}


//End of file
