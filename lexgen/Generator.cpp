// Automatically generated file. Don't edit!
#include "refalrts.h"


extern refalrts::FnResult Chr(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult DelAccumulator(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult EscapeChar(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Exit(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Fetch(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Generate_SelfUpdate(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Generate_ToDifferent(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Inc(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult IntFromStr(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult LoadFile(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Map(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult MapReduce(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Ord(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Reduce(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult SaveFile(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Seq(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult StrFromInt(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult WriteLine(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult Digits(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult EC(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult EndFlushName(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult Error(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult ErrorAt(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult ErrorFlush(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult ErrorFlushFail(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult Escape(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult ExtractAlternatives(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult ExtractAlternatives_Finish(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult ExtractAlternatives_Flush(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult ExtractAlternatives_NextState(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult ExtractExpected(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult ExtractSets(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult FlushName(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult FlushNameFail(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult FlushNameTail(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult GenCode(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult GenerateAutomat(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult GenerateFromDFA(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult GenerateSentences(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult HiLetters(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult Length_T(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult Literal(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult Literal_DecCode(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult LoLetters(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult LoTokens(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult Name(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult NameFail(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult NameTail(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult NameTailFail(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult NameTailSet(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult NextInSet(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult NextNum(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult NormalizeAlternative(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult NormalizeContent(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult NormalizeRule(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult NormingSet(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult Parse(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult ParseElements(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult ParseSentence(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult ParseSentence_Body(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult ParseSetDescr(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult ParseSetDescr_Sets(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult ParseSetDescr_Sets_Aux(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult ResolvingSets(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult ResolvingSets_Aux(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult Separate(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult SeparateOne(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult SetCheckRecursion(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult SetDiff(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult SetName(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult SetNameFail(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult SetPartNormalize(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult SetPartNormalizeOne(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult SetSubstitute(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult SimplifySet(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult SplitAlternatives(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult SubstituteSetsToRules(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult ToText(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult Tokens(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult UnexpectedToken(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult Warning(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult WarningAt(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult WriteAlternative(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult WriteCode(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult WriteFunction(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult WriteFunctions(refalrts::Iter arg_begin, refalrts::Iter arg_end);

// identifier #Any
template <typename SREFAL_PARAM_INT>
struct ident_Any {
  static const char *name() {
    return "Any";
  }
};

// identifier #Chars
template <typename SREFAL_PARAM_INT>
struct ident_Chars {
  static const char *name() {
    return "Chars";
  }
};

// identifier #Empty
template <typename SREFAL_PARAM_INT>
struct ident_Empty {
  static const char *name() {
    return "Empty";
  }
};

// identifier #Fails
template <typename SREFAL_PARAM_INT>
struct ident_Fails {
  static const char *name() {
    return "Fails";
  }
};

// identifier #Finitive
template <typename SREFAL_PARAM_INT>
struct ident_Finitive {
  static const char *name() {
    return "Finitive";
  }
};

// identifier #Flush
template <typename SREFAL_PARAM_INT>
struct ident_Flush {
  static const char *name() {
    return "Flush";
  }
};

// identifier #FlushError
template <typename SREFAL_PARAM_INT>
struct ident_FlushError {
  static const char *name() {
    return "FlushError";
  }
};

// identifier #None
template <typename SREFAL_PARAM_INT>
struct ident_None {
  static const char *name() {
    return "None";
  }
};

// identifier #NotUsed
template <typename SREFAL_PARAM_INT>
struct ident_NotUsed {
  static const char *name() {
    return "NotUsed";
  }
};

// identifier #Sentence
template <typename SREFAL_PARAM_INT>
struct ident_Sentence {
  static const char *name() {
    return "Sentence";
  }
};

// identifier #Set
template <typename SREFAL_PARAM_INT>
struct ident_Set {
  static const char *name() {
    return "Set";
  }
};

// identifier #Success
template <typename SREFAL_PARAM_INT>
struct ident_Success {
  static const char *name() {
    return "Success";
  }
};

// identifier #TAlternative
template <typename SREFAL_PARAM_INT>
struct ident_TAlternative {
  static const char *name() {
    return "TAlternative";
  }
};

// identifier #TDot
template <typename SREFAL_PARAM_INT>
struct ident_TDot {
  static const char *name() {
    return "TDot";
  }
};

// identifier #TEOF
template <typename SREFAL_PARAM_INT>
struct ident_TEOF {
  static const char *name() {
    return "TEOF";
  }
};

// identifier #TEquals
template <typename SREFAL_PARAM_INT>
struct ident_TEquals {
  static const char *name() {
    return "TEquals";
  }
};

// identifier #TError
template <typename SREFAL_PARAM_INT>
struct ident_TError {
  static const char *name() {
    return "TError";
  }
};

// identifier #TErrorFlush
template <typename SREFAL_PARAM_INT>
struct ident_TErrorFlush {
  static const char *name() {
    return "TErrorFlush";
  }
};

// identifier #TFlush
template <typename SREFAL_PARAM_INT>
struct ident_TFlush {
  static const char *name() {
    return "TFlush";
  }
};

// identifier #TLiteral
template <typename SREFAL_PARAM_INT>
struct ident_TLiteral {
  static const char *name() {
    return "TLiteral";
  }
};

// identifier #TName
template <typename SREFAL_PARAM_INT>
struct ident_TName {
  static const char *name() {
    return "TName";
  }
};

// identifier #TNamedFlush
template <typename SREFAL_PARAM_INT>
struct ident_TNamedFlush {
  static const char *name() {
    return "TNamedFlush";
  }
};

// identifier #TNewLine
template <typename SREFAL_PARAM_INT>
struct ident_TNewLine {
  static const char *name() {
    return "TNewLine";
  }
};

// identifier #TSetName
template <typename SREFAL_PARAM_INT>
struct ident_TSetName {
  static const char *name() {
    return "TSetName";
  }
};

// identifier #Unnamed
template <typename SREFAL_PARAM_INT>
struct ident_Unnamed {
  static const char *name() {
    return "Unnamed";
  }
};

// identifier #Used
template <typename SREFAL_PARAM_INT>
struct ident_Used {
  static const char *name() {
    return "Used";
  }
};

refalrts::FnResult Generate_SelfUpdate(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { LoadFile, "LoadFile" },
    { GenCode, "GenCode" },
    { SaveFile, "SaveFile" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    // e.FileName#1/0
    // closed e.FileName#1 as range 0
    //0: e.FileName#1
    //10: e.FileName#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 2},
    {refalrts::icFunc, 0, 2, 3},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 4},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 5},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 6},
    {refalrts::icFunc, 0, 1, 7},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 8},
    {refalrts::icFunc, 0, 0, 9},
    {refalrts::icCopyEVar, 10, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 12},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 13},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 14},
    {refalrts::icPushStack, 0, 0, 14},
    {refalrts::icPushStack, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icPushStack, 0, 0, 13},
    {refalrts::icPushStack, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceEVar, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 7},
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
  //10: e.FileName#1

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
  if( ! refalrts::alloc_open_call( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[7], GenCode, "GenCode" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[9], LoadFile, "LoadFile" ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[10], context[11], context[0], context[1]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[14] ) )
    return refalrts::cNoMemory;
  refalrts::push_stack( context[14] );
  refalrts::push_stack( context[2] );
  res = refalrts::splice_elem( res, context[14] );
  refalrts::push_stack( context[13] );
  refalrts::push_stack( context[6] );
  res = refalrts::splice_elem( res, context[13] );
  refalrts::push_stack( context[12] );
  refalrts::push_stack( context[8] );
  res = refalrts::splice_elem( res, context[12] );
  res = refalrts::splice_evar( res, context[10], context[11] );
  res = refalrts::splice_elem( res, context[9] );
  res = refalrts::splice_elem( res, context[8] );
  res = refalrts::splice_elem( res, context[7] );
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

refalrts::FnResult Generate_ToDifferent(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 30 elems
  refalrts::Iter context[30];
  refalrts::zeros( context, 30 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { LoadFile, "LoadFile" },
    { GenCode, "GenCode" },
    { SaveFile, "SaveFile" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  static const refalrts::StringItem strings[] = {
    {"// Edit file \'", 14},
    {"// Automatically generated file, don\'t edit!", 44}
  };
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.From#1/2 ) e.To#1/0
    {refalrts::icBracketLeft, 0, 2, 0},
    // closed e.From#1 as range 2
    // closed e.To#1 as range 0
    //0: e.To#1
    //2: e.From#1
    //25: e.From#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 4},
    {refalrts::icFunc, 0, 2, 5},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 7},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icString, 0, 1, 9},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 11},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 12},
    {refalrts::icString, 0, 0, 13},
    {refalrts::icChar, 0, '\'', 15},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 16},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 17},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 18},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 19},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 20},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 21},
    {refalrts::icFunc, 0, 1, 22},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 23},
    {refalrts::icFunc, 0, 0, 24},
    {refalrts::icCopyEVar, 25, 2, 0},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 27},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 28},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 29},
    {refalrts::icPushStack, 0, 0, 29},
    {refalrts::icPushStack, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 29},
    {refalrts::icPushStack, 0, 0, 28},
    {refalrts::icPushStack, 0, 0, 21},
    {refalrts::icSpliceElem, 0, 0, 28},
    {refalrts::icPushStack, 0, 0, 27},
    {refalrts::icPushStack, 0, 0, 23},
    {refalrts::icSpliceElem, 0, 0, 27},
    {refalrts::icSpliceEVar, 0, 0, 25},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icLinkBrackets, 19, 20, 0},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icLinkBrackets, 17, 18, 0},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icLinkBrackets, 12, 16, 0},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceRange, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icLinkBrackets, 8, 11, 0},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceRange, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icLinkBrackets, 6, 7, 0},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceEVar, 0, 0, 0},
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
  // ( e.From#1/2 ) e.To#1/0
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.From#1 as range 2
  // closed e.To#1 as range 0
  //0: e.To#1
  //2: e.From#1
  //25: e.From#1

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_call( context[4] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[5], SaveFile, "SaveFile" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[9], context[10], "// Automatically generated file, don\'t edit!", 44 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[13], context[14], "// Edit file \'", 14 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[15], '\'' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[16] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[17] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[18] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[19] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[20] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[21] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[22], GenCode, "GenCode" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[23] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[24], LoadFile, "LoadFile" ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[25], context[26], context[2], context[3]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[27] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[28] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[29] ) )
    return refalrts::cNoMemory;
  refalrts::push_stack( context[29] );
  refalrts::push_stack( context[4] );
  res = refalrts::splice_elem( res, context[29] );
  refalrts::push_stack( context[28] );
  refalrts::push_stack( context[21] );
  res = refalrts::splice_elem( res, context[28] );
  refalrts::push_stack( context[27] );
  refalrts::push_stack( context[23] );
  res = refalrts::splice_elem( res, context[27] );
  res = refalrts::splice_evar( res, context[25], context[26] );
  res = refalrts::splice_elem( res, context[24] );
  res = refalrts::splice_elem( res, context[23] );
  res = refalrts::splice_elem( res, context[22] );
  res = refalrts::splice_elem( res, context[21] );
  refalrts::link_brackets( context[19], context[20] );
  res = refalrts::splice_elem( res, context[20] );
  res = refalrts::splice_elem( res, context[19] );
  refalrts::link_brackets( context[17], context[18] );
  res = refalrts::splice_elem( res, context[18] );
  res = refalrts::splice_elem( res, context[17] );
  refalrts::link_brackets( context[12], context[16] );
  res = refalrts::splice_elem( res, context[16] );
  res = refalrts::splice_elem( res, context[15] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_elem( res, context[12] );
  refalrts::link_brackets( context[8], context[11] );
  res = refalrts::splice_elem( res, context[11] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_elem( res, context[8] );
  refalrts::link_brackets( context[6], context[7] );
  res = refalrts::splice_elem( res, context[7] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_elem( res, context[6] );
  res = refalrts::splice_elem( res, context[5] );
  res = refalrts::splice_elem( res, context[4] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult NextNum(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { Inc, "Inc" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    // s.Next#1/4 ( e.Line#1/2 )
    {refalrts::icBracketRight, 0, 2, 0},
    // closed e.Line#1 as range 2
    {refalrts::icsVarLeft, 0, 4, 0},
    {refalrts::icEmpty, 0, 0, 0},
    //2: e.Line#1
    //4: s.Next#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 5},
    {refalrts::icFunc, 0, 0, 6},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 7},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 9},
    {refalrts::icLinkBrackets, 8, 9, 0},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icPushStack, 0, 0, 7},
    {refalrts::icPushStack, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceSTVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 5},
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
  // s.Next#1/4 ( e.Line#1/2 )
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_right( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Line#1 as range 2
  if( ! refalrts::svar_left( context[4], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  //2: e.Line#1
  //4: s.Next#1

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_call( context[5] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[6], Inc, "Inc" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[9] ) )
    return refalrts::cNoMemory;
  refalrts::link_brackets( context[8], context[9] );
  res = refalrts::splice_elem( res, context[9] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_elem( res, context[8] );
  refalrts::push_stack( context[7] );
  refalrts::push_stack( context[5] );
  res = refalrts::splice_elem( res, context[7] );
  res = refalrts::splice_stvar( res, context[4] );
  res = refalrts::splice_elem( res, context[6] );
  res = refalrts::splice_elem( res, context[5] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult Length_T(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 7 elems
  refalrts::Iter context[7];
  refalrts::zeros( context, 7 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { NextNum, "NextNum" },
    { MapReduce, "MapReduce" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    // e.Line#1/0
    // closed e.Line#1 as range 0
    //0: e.Line#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 2},
    {refalrts::icFunc, 0, 1, 3},
    {refalrts::icFunc, 0, 0, 4},
    {refalrts::icInt, 0, 0, 5},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 6},
    {refalrts::icPushStack, 0, 0, 6},
    {refalrts::icPushStack, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceEVar, 0, 0, 0},
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
  // e.Line#1/0
  // closed e.Line#1 as range 0
  //0: e.Line#1

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_call( context[2] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[3], MapReduce, "MapReduce" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[4], NextNum, "NextNum" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_number( context[5], 0UL ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[6] ) )
    return refalrts::cNoMemory;
  refalrts::push_stack( context[6] );
  refalrts::push_stack( context[2] );
  res = refalrts::splice_elem( res, context[6] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_elem( res, context[5] );
  res = refalrts::splice_elem( res, context[4] );
  res = refalrts::splice_elem( res, context[3] );
  res = refalrts::splice_elem( res, context[2] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult Error(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { Exit, "Exit" },
    { WriteLine, "WriteLine" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    // e.Text#1/0
    // closed e.Text#1 as range 0
    //0: e.Text#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 2},
    {refalrts::icFunc, 0, 1, 3},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 4},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 5},
    {refalrts::icFunc, 0, 0, 6},
    {refalrts::icInt, 0, 1, 7},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 8},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icPushStack, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 5},
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
  // e.Text#1/0
  // closed e.Text#1 as range 0
  //0: e.Text#1

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_call( context[2] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[3], WriteLine, "WriteLine" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[4] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[5] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[6], Exit, "Exit" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_number( context[7], 1UL ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[8] ) )
    return refalrts::cNoMemory;
  refalrts::push_stack( context[8] );
  refalrts::push_stack( context[5] );
  res = refalrts::splice_elem( res, context[8] );
  res = refalrts::splice_elem( res, context[7] );
  res = refalrts::splice_elem( res, context[6] );
  res = refalrts::splice_elem( res, context[5] );
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

static refalrts::FnResult ErrorAt(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { StrFromInt, "StrFromInt" },
    { Error, "Error" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  static const refalrts::StringItem strings[] = {
    {": ", 2},
    {"ERROR at ", 9}
  };
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    // s.Number#1/2 e.Text#1/0
    {refalrts::icsVarLeft, 0, 2, 0},
    // closed e.Text#1 as range 0
    //0: e.Text#1
    //2: s.Number#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 3},
    {refalrts::icFunc, 0, 1, 4},
    {refalrts::icString, 0, 1, 5},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 7},
    {refalrts::icFunc, 0, 0, 8},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 9},
    {refalrts::icString, 0, 0, 10},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 12},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icPushStack, 0, 0, 3},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icSpliceRange, 0, 0, 10},
    {refalrts::icPushStack, 0, 0, 9},
    {refalrts::icPushStack, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceSTVar, 0, 0, 2},
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
  // s.Number#1/2 e.Text#1/0
  if( ! refalrts::svar_left( context[2], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Text#1 as range 0
  //0: e.Text#1
  //2: s.Number#1

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_call( context[3] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[4], Error, "Error" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[5], context[6], "ERROR at ", 9 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[8], StrFromInt, "StrFromInt" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[10], context[11], ": ", 2 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[12] ) )
    return refalrts::cNoMemory;
  refalrts::push_stack( context[12] );
  refalrts::push_stack( context[3] );
  res = refalrts::splice_elem( res, context[12] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[10], context[11] );
  refalrts::push_stack( context[9] );
  refalrts::push_stack( context[7] );
  res = refalrts::splice_elem( res, context[9] );
  res = refalrts::splice_stvar( res, context[2] );
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

static refalrts::FnResult Warning(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
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
  static const refalrts::StringItem strings[] = {
    {"WARNING: ", 9}
  };
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    // e.Message#1/0
    // closed e.Message#1 as range 0
    //0: e.Message#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 2},
    {refalrts::icFunc, 0, 0, 3},
    {refalrts::icString, 0, 0, 4},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 6},
    {refalrts::icPushStack, 0, 0, 6},
    {refalrts::icPushStack, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icSpliceRange, 0, 0, 4},
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
  // e.Message#1/0
  // closed e.Message#1 as range 0
  //0: e.Message#1

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_call( context[2] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[3], WriteLine, "WriteLine" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[4], context[5], "WARNING: ", 9 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[6] ) )
    return refalrts::cNoMemory;
  refalrts::push_stack( context[6] );
  refalrts::push_stack( context[2] );
  res = refalrts::splice_elem( res, context[6] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[4], context[5] );
  res = refalrts::splice_elem( res, context[3] );
  res = refalrts::splice_elem( res, context[2] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult WarningAt(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { StrFromInt, "StrFromInt" },
    { WriteLine, "WriteLine" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  static const refalrts::StringItem strings[] = {
    {"WARNING at ", 11}
  };
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    // s.Number#1/2 e.Message#1/0
    {refalrts::icsVarLeft, 0, 2, 0},
    // closed e.Message#1 as range 0
    //0: e.Message#1
    //2: s.Number#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 3},
    {refalrts::icFunc, 0, 1, 4},
    {refalrts::icString, 0, 0, 5},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 7},
    {refalrts::icFunc, 0, 0, 8},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 9},
    {refalrts::icChar, 0, ' ', 10},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 11},
    {refalrts::icPushStack, 0, 0, 11},
    {refalrts::icPushStack, 0, 0, 3},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icPushStack, 0, 0, 9},
    {refalrts::icPushStack, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceSTVar, 0, 0, 2},
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
  // s.Number#1/2 e.Message#1/0
  if( ! refalrts::svar_left( context[2], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Message#1 as range 0
  //0: e.Message#1
  //2: s.Number#1

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_call( context[3] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[4], WriteLine, "WriteLine" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[5], context[6], "WARNING at ", 11 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[8], StrFromInt, "StrFromInt" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[10], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[11] ) )
    return refalrts::cNoMemory;
  refalrts::push_stack( context[11] );
  refalrts::push_stack( context[3] );
  res = refalrts::splice_elem( res, context[11] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_elem( res, context[10] );
  refalrts::push_stack( context[9] );
  refalrts::push_stack( context[7] );
  res = refalrts::splice_elem( res, context[9] );
  res = refalrts::splice_stvar( res, context[2] );
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

static refalrts::FnResult lambda_GenCode_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 26 elems
  refalrts::Iter context[26];
  refalrts::zeros( context, 26 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { Error, "Error" },
    { Tokens, "Tokens" },
    { Parse, "Parse" },
    { GenerateFromDFA, "GenerateFromDFA" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  static const refalrts::StringItem strings[] = {
    {"End of description not found", 28},
    {"GEN:END*/", 9}
  };
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +55, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( s.Length#2/4 e.LinesBefore#2/2 ) e.Description#2/5 ( 'GEN:END*/' ) e.Deleted#2/9
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icsVarLeft, 0, 4, 2},
    // closed e.LinesBefore#2 as range 2
    {refalrts::icEPrepare, 0, 5, 0},
    {refalrts::icEStart, 0, 5, 0},
    {refalrts::icSave, 0, 9, 0},
    {refalrts::icBracketLeft, 0, 7, 9},
    {refalrts::icCharLeft, 0, static_cast<unsigned char>('G'), 7},
    {refalrts::icCharLeft, 0, static_cast<unsigned char>('E'), 7},
    {refalrts::icCharLeft, 0, static_cast<unsigned char>('N'), 7},
    {refalrts::icCharLeft, 0, static_cast<unsigned char>(':'), 7},
    {refalrts::icCharLeft, 0, static_cast<unsigned char>('E'), 7},
    {refalrts::icCharLeft, 0, static_cast<unsigned char>('N'), 7},
    {refalrts::icCharLeft, 0, static_cast<unsigned char>('D'), 7},
    {refalrts::icCharLeft, 0, static_cast<unsigned char>('*'), 7},
    {refalrts::icCharLeft, 0, static_cast<unsigned char>('/'), 7},
    {refalrts::icEmpty, 0, 0, 7},
    // closed e.Deleted#2 as range 0
    //2: e.LinesBefore#2
    //4: s.Length#2
    //5: e.Description#2
    //9: e.Deleted#2
    //21: e.Description#2
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 11},
    {refalrts::icString, 0, 1, 12},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 14},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 15},
    {refalrts::icFunc, 0, 3, 16},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 17},
    {refalrts::icFunc, 0, 2, 18},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 19},
    {refalrts::icFunc, 0, 1, 20},
    {refalrts::icCopyEVar, 21, 5, 0},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 23},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 24},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 25},
    {refalrts::icPushStack, 0, 0, 25},
    {refalrts::icPushStack, 0, 0, 15},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icPushStack, 0, 0, 24},
    {refalrts::icPushStack, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icPushStack, 0, 0, 23},
    {refalrts::icPushStack, 0, 0, 19},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icSpliceEVar, 0, 0, 21},
    {refalrts::icSpliceSTVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icLinkBrackets, 11, 14, 0},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceRange, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceEVar, 0, 0, 5},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // e.Other#2/0
    // closed e.Other#2 as range 0
    //0: e.Other#2
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 2},
    {refalrts::icFunc, 0, 0, 3},
    {refalrts::icString, 0, 0, 4},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 6},
    {refalrts::icPushStack, 0, 0, 6},
    {refalrts::icPushStack, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceRange, 0, 0, 4},
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
    // ( s.Length#2/4 e.LinesBefore#2/2 ) e.Description#2/5 ( 'GEN:END*/' ) e.Deleted#2/9
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[4], context[2], context[3] ) )
      continue;
    // closed e.LinesBefore#2 as range 2
    context[5] = 0;
    context[6] = 0;
    refalrts::start_e_loop();
    do {
      context[9] = context[0];
      context[10] = context[1];
      context[7] = 0;
      context[8] = 0;
      if( ! refalrts::brackets_left( context[7], context[8], context[9], context[10] ) )
        continue;
      if( ! refalrts::char_left( 'G', context[7], context[8] ) )
        continue;
      if( ! refalrts::char_left( 'E', context[7], context[8] ) )
        continue;
      if( ! refalrts::char_left( 'N', context[7], context[8] ) )
        continue;
      if( ! refalrts::char_left( ':', context[7], context[8] ) )
        continue;
      if( ! refalrts::char_left( 'E', context[7], context[8] ) )
        continue;
      if( ! refalrts::char_left( 'N', context[7], context[8] ) )
        continue;
      if( ! refalrts::char_left( 'D', context[7], context[8] ) )
        continue;
      if( ! refalrts::char_left( '*', context[7], context[8] ) )
        continue;
      if( ! refalrts::char_left( '/', context[7], context[8] ) )
        continue;
      if( ! refalrts::empty_seq( context[7], context[8] ) )
        continue;
      // closed e.Deleted#2 as range 0
      //2: e.LinesBefore#2
      //4: s.Length#2
      //5: e.Description#2
      //9: e.Deleted#2
      //21: e.Description#2

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::alloc_open_bracket( context[11] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_chars( context[12], context[13], "GEN:END*/", 9 ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[14] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_call( context[15] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[16], GenerateFromDFA, "GenerateFromDFA" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_call( context[17] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[18], Parse, "Parse" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_call( context[19] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[20], Tokens, "Tokens" ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_evar(context[21], context[22], context[5], context[6]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[23] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[24] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[25] ) )
        return refalrts::cNoMemory;
      refalrts::push_stack( context[25] );
      refalrts::push_stack( context[15] );
      res = refalrts::splice_elem( res, context[25] );
      refalrts::push_stack( context[24] );
      refalrts::push_stack( context[17] );
      res = refalrts::splice_elem( res, context[24] );
      refalrts::push_stack( context[23] );
      refalrts::push_stack( context[19] );
      res = refalrts::splice_elem( res, context[23] );
      res = refalrts::splice_evar( res, context[21], context[22] );
      res = refalrts::splice_stvar( res, context[4] );
      res = refalrts::splice_elem( res, context[20] );
      res = refalrts::splice_elem( res, context[19] );
      res = refalrts::splice_elem( res, context[18] );
      res = refalrts::splice_elem( res, context[17] );
      res = refalrts::splice_elem( res, context[16] );
      res = refalrts::splice_elem( res, context[15] );
      refalrts::link_brackets( context[11], context[14] );
      res = refalrts::splice_elem( res, context[14] );
      res = refalrts::splice_evar( res, context[12], context[13] );
      res = refalrts::splice_elem( res, context[11] );
      res = refalrts::splice_evar( res, context[5], context[6] );
      res = refalrts::splice_evar( res, context[2], context[3] );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[5], context[6], context[0], context[1] ) );
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  refalrts::move_left( context[0], context[1] );
  refalrts::move_left( context[0], context[1] );
  refalrts::move_right( context[0], context[1] );
  // e.Other#2/0
  // closed e.Other#2 as range 0
  //0: e.Other#2

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_call( context[2] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[3], Error, "Error" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[4], context[5], "End of description not found", 28 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[6] ) )
    return refalrts::cNoMemory;
  refalrts::push_stack( context[6] );
  refalrts::push_stack( context[2] );
  res = refalrts::splice_elem( res, context[6] );
  res = refalrts::splice_evar( res, context[4], context[5] );
  res = refalrts::splice_elem( res, context[3] );
  res = refalrts::splice_elem( res, context[2] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult GenCode(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { Error, "Error" },
    { lambda_GenCode_0, "lambda_GenCode_0" },
    { Length_T, "Length_T" },
    { Fetch, "Fetch" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  static const refalrts::StringItem strings[] = {
    {"Lexer description not found", 27},
    {"/*GEN:TOKENS", 12}
  };
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +52, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // e.LinesBefore#1/2 ( '/*GEN:TOKENS' ) e.Description#1/6
    {refalrts::icEPrepare, 0, 2, 0},
    {refalrts::icEStart, 0, 2, 0},
    {refalrts::icSave, 0, 6, 0},
    {refalrts::icBracketLeft, 0, 4, 6},
    {refalrts::icCharLeft, 0, static_cast<unsigned char>('/'), 4},
    {refalrts::icCharLeft, 0, static_cast<unsigned char>('*'), 4},
    {refalrts::icCharLeft, 0, static_cast<unsigned char>('G'), 4},
    {refalrts::icCharLeft, 0, static_cast<unsigned char>('E'), 4},
    {refalrts::icCharLeft, 0, static_cast<unsigned char>('N'), 4},
    {refalrts::icCharLeft, 0, static_cast<unsigned char>(':'), 4},
    {refalrts::icCharLeft, 0, static_cast<unsigned char>('T'), 4},
    {refalrts::icCharLeft, 0, static_cast<unsigned char>('O'), 4},
    {refalrts::icCharLeft, 0, static_cast<unsigned char>('K'), 4},
    {refalrts::icCharLeft, 0, static_cast<unsigned char>('E'), 4},
    {refalrts::icCharLeft, 0, static_cast<unsigned char>('N'), 4},
    {refalrts::icCharLeft, 0, static_cast<unsigned char>('S'), 4},
    {refalrts::icEmpty, 0, 0, 4},
    // closed e.Description#1 as range 0
    //2: e.LinesBefore#1
    //6: e.Description#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 8},
    {refalrts::icFunc, 0, 3, 9},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 10},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 11},
    {refalrts::icFunc, 0, 2, 12},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 13},
    {refalrts::icString, 0, 1, 14},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 16},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 17},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 18},
    {refalrts::icFunc, 0, 1, 19},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 20},
    {refalrts::icPushStack, 0, 0, 20},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceEVar, 0, 0, 6},
    {refalrts::icLinkBrackets, 10, 18, 0},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icPushStack, 0, 0, 17},
    {refalrts::icPushStack, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icLinkBrackets, 13, 16, 0},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceRange, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // e.Other#1/0
    // closed e.Other#1 as range 0
    //0: e.Other#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 2},
    {refalrts::icFunc, 0, 0, 3},
    {refalrts::icString, 0, 0, 4},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 6},
    {refalrts::icPushStack, 0, 0, 6},
    {refalrts::icPushStack, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceRange, 0, 0, 4},
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
    // e.LinesBefore#1/2 ( '/*GEN:TOKENS' ) e.Description#1/6
    context[2] = 0;
    context[3] = 0;
    refalrts::start_e_loop();
    do {
      context[6] = context[0];
      context[7] = context[1];
      context[4] = 0;
      context[5] = 0;
      if( ! refalrts::brackets_left( context[4], context[5], context[6], context[7] ) )
        continue;
      if( ! refalrts::char_left( '/', context[4], context[5] ) )
        continue;
      if( ! refalrts::char_left( '*', context[4], context[5] ) )
        continue;
      if( ! refalrts::char_left( 'G', context[4], context[5] ) )
        continue;
      if( ! refalrts::char_left( 'E', context[4], context[5] ) )
        continue;
      if( ! refalrts::char_left( 'N', context[4], context[5] ) )
        continue;
      if( ! refalrts::char_left( ':', context[4], context[5] ) )
        continue;
      if( ! refalrts::char_left( 'T', context[4], context[5] ) )
        continue;
      if( ! refalrts::char_left( 'O', context[4], context[5] ) )
        continue;
      if( ! refalrts::char_left( 'K', context[4], context[5] ) )
        continue;
      if( ! refalrts::char_left( 'E', context[4], context[5] ) )
        continue;
      if( ! refalrts::char_left( 'N', context[4], context[5] ) )
        continue;
      if( ! refalrts::char_left( 'S', context[4], context[5] ) )
        continue;
      if( ! refalrts::empty_seq( context[4], context[5] ) )
        continue;
      // closed e.Description#1 as range 0
      //2: e.LinesBefore#1
      //6: e.Description#1

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::alloc_open_call( context[8] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[9], Fetch, "Fetch" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[10] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_call( context[11] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[12], Length_T, "Length_T" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[13] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_chars( context[14], context[15], "/*GEN:TOKENS", 12 ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[16] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[17] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[18] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[19], lambda_GenCode_0, "lambda_GenCode_0" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[20] ) )
        return refalrts::cNoMemory;
      refalrts::push_stack( context[20] );
      refalrts::push_stack( context[8] );
      res = refalrts::splice_elem( res, context[20] );
      res = refalrts::splice_elem( res, context[19] );
      res = refalrts::splice_evar( res, context[6], context[7] );
      refalrts::link_brackets( context[10], context[18] );
      res = refalrts::splice_elem( res, context[18] );
      refalrts::push_stack( context[17] );
      refalrts::push_stack( context[11] );
      res = refalrts::splice_elem( res, context[17] );
      refalrts::link_brackets( context[13], context[16] );
      res = refalrts::splice_elem( res, context[16] );
      res = refalrts::splice_evar( res, context[14], context[15] );
      res = refalrts::splice_elem( res, context[13] );
      res = refalrts::splice_evar( res, context[2], context[3] );
      res = refalrts::splice_elem( res, context[12] );
      res = refalrts::splice_elem( res, context[11] );
      res = refalrts::splice_elem( res, context[10] );
      res = refalrts::splice_elem( res, context[9] );
      res = refalrts::splice_elem( res, context[8] );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[2], context[3], context[0], context[1] ) );
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  refalrts::move_left( context[0], context[1] );
  refalrts::move_left( context[0], context[1] );
  refalrts::move_right( context[0], context[1] );
  // e.Other#1/0
  // closed e.Other#1 as range 0
  //0: e.Other#1

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_call( context[2] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[3], Error, "Error" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[4], context[5], "Lexer description not found", 27 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[6] ) )
    return refalrts::cNoMemory;
  refalrts::push_stack( context[6] );
  refalrts::push_stack( context[2] );
  res = refalrts::splice_elem( res, context[6] );
  res = refalrts::splice_evar( res, context[4], context[5] );
  res = refalrts::splice_elem( res, context[3] );
  res = refalrts::splice_elem( res, context[2] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult GenerateFromDFA(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { Separate, "Separate" },
    { ResolvingSets, "ResolvingSets" },
    { GenerateAutomat, "GenerateAutomat" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    // e.Elements#1/0
    // closed e.Elements#1 as range 0
    //0: e.Elements#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 2},
    {refalrts::icFunc, 0, 2, 3},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 4},
    {refalrts::icFunc, 0, 1, 5},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 6},
    {refalrts::icFunc, 0, 0, 7},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 8},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 9},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 10},
    {refalrts::icPushStack, 0, 0, 10},
    {refalrts::icPushStack, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 10},
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
  // e.Elements#1/0
  // closed e.Elements#1 as range 0
  //0: e.Elements#1

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_call( context[2] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[3], GenerateAutomat, "GenerateAutomat" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[4] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[5], ResolvingSets, "ResolvingSets" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[7], Separate, "Separate" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[10] ) )
    return refalrts::cNoMemory;
  refalrts::push_stack( context[10] );
  refalrts::push_stack( context[2] );
  res = refalrts::splice_elem( res, context[10] );
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
  res = refalrts::splice_elem( res, context[3] );
  res = refalrts::splice_elem( res, context[2] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult SeparateOne(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
#ifdef INTERPRET
  using refalrts::functions;
  static const refalrts::RefalIdentifier idents[] = {
    & ident_Sentence<int>::name,
    & ident_Set<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +40, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( ( e.Sets#1/4 ) ( e.Rules#1/6 ) ) ( # Set ( e.Name#1/10 ) e.Content#1/8 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 2},
    {refalrts::icBracketLeft, 0, 6, 2},
    {refalrts::icBracketLeft, 0, 8, 0},
    {refalrts::icIdentLeft, 0, 1, 8},
    {refalrts::icBracketLeft, 0, 10, 8},
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icEmpty, 0, 0, 0},
    // closed e.Sets#1 as range 4
    // closed e.Rules#1 as range 6
    // closed e.Name#1 as range 10
    // closed e.Content#1 as range 8
    //4: e.Sets#1
    //6: e.Rules#1
    //8: e.Content#1
    //10: e.Name#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 12},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 13},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 14},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 15},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 16},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 17},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 18},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 19},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 20},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 21},
    {refalrts::icLinkBrackets, 12, 21, 0},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icLinkBrackets, 19, 20, 0},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceEVar, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icLinkBrackets, 13, 18, 0},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icLinkBrackets, 14, 17, 0},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceEVar, 0, 0, 8},
    {refalrts::icLinkBrackets, 15, 16, 0},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceEVar, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceEVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( ( e.Sets#1/4 ) ( e.Rules#1/6 ) ) ( # Sentence ( e.Name#1/10 ) e.Content#1/8 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 2},
    {refalrts::icBracketLeft, 0, 6, 2},
    {refalrts::icBracketLeft, 0, 8, 0},
    {refalrts::icIdentLeft, 0, 0, 8},
    {refalrts::icBracketLeft, 0, 10, 8},
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icEmpty, 0, 0, 0},
    // closed e.Sets#1 as range 4
    // closed e.Rules#1 as range 6
    // closed e.Name#1 as range 10
    // closed e.Content#1 as range 8
    //4: e.Sets#1
    //6: e.Rules#1
    //8: e.Content#1
    //10: e.Name#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 12},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 13},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 14},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 15},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 16},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 17},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 18},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 19},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 20},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 21},
    {refalrts::icLinkBrackets, 12, 21, 0},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icLinkBrackets, 15, 20, 0},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icLinkBrackets, 16, 19, 0},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceEVar, 0, 0, 8},
    {refalrts::icLinkBrackets, 17, 18, 0},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceEVar, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceEVar, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icLinkBrackets, 13, 14, 0},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceEVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 12},
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
    // ( ( e.Sets#1/4 ) ( e.Rules#1/6 ) ) ( # Set ( e.Name#1/10 ) e.Content#1/8 )
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
    if( ! refalrts::ident_left(  & ident_Set<int>::name, context[8], context[9] ) )
      continue;
    context[10] = 0;
    context[11] = 0;
    if( ! refalrts::brackets_left( context[10], context[11], context[8], context[9] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    // closed e.Sets#1 as range 4
    // closed e.Rules#1 as range 6
    // closed e.Name#1 as range 10
    // closed e.Content#1 as range 8
    //4: e.Sets#1
    //6: e.Rules#1
    //8: e.Content#1
    //10: e.Name#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[15] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[17] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[18] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[19] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[20] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[21] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[12], context[21] );
    res = refalrts::splice_elem( res, context[21] );
    refalrts::link_brackets( context[19], context[20] );
    res = refalrts::splice_elem( res, context[20] );
    res = refalrts::splice_evar( res, context[6], context[7] );
    res = refalrts::splice_elem( res, context[19] );
    refalrts::link_brackets( context[13], context[18] );
    res = refalrts::splice_elem( res, context[18] );
    refalrts::link_brackets( context[14], context[17] );
    res = refalrts::splice_elem( res, context[17] );
    res = refalrts::splice_evar( res, context[8], context[9] );
    refalrts::link_brackets( context[15], context[16] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_evar( res, context[10], context[11] );
    res = refalrts::splice_elem( res, context[15] );
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
  // ( ( e.Sets#1/4 ) ( e.Rules#1/6 ) ) ( # Sentence ( e.Name#1/10 ) e.Content#1/8 )
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
  context[8] = 0;
  context[9] = 0;
  if( ! refalrts::brackets_left( context[8], context[9], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::ident_left(  & ident_Sentence<int>::name, context[8], context[9] ) )
    return refalrts::cRecognitionImpossible;
  context[10] = 0;
  context[11] = 0;
  if( ! refalrts::brackets_left( context[10], context[11], context[8], context[9] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Sets#1 as range 4
  // closed e.Rules#1 as range 6
  // closed e.Name#1 as range 10
  // closed e.Content#1 as range 8
  //4: e.Sets#1
  //6: e.Rules#1
  //8: e.Content#1
  //10: e.Name#1

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
  if( ! refalrts::alloc_open_bracket( context[16] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[17] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[18] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[19] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[20] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[21] ) )
    return refalrts::cNoMemory;
  refalrts::link_brackets( context[12], context[21] );
  res = refalrts::splice_elem( res, context[21] );
  refalrts::link_brackets( context[15], context[20] );
  res = refalrts::splice_elem( res, context[20] );
  refalrts::link_brackets( context[16], context[19] );
  res = refalrts::splice_elem( res, context[19] );
  res = refalrts::splice_evar( res, context[8], context[9] );
  refalrts::link_brackets( context[17], context[18] );
  res = refalrts::splice_elem( res, context[18] );
  res = refalrts::splice_evar( res, context[10], context[11] );
  res = refalrts::splice_elem( res, context[17] );
  res = refalrts::splice_elem( res, context[16] );
  res = refalrts::splice_evar( res, context[6], context[7] );
  res = refalrts::splice_elem( res, context[15] );
  refalrts::link_brackets( context[13], context[14] );
  res = refalrts::splice_elem( res, context[14] );
  res = refalrts::splice_evar( res, context[4], context[5] );
  res = refalrts::splice_elem( res, context[13] );
  res = refalrts::splice_elem( res, context[12] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult Separate(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { SeparateOne, "SeparateOne" },
    { Reduce, "Reduce" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    // e.Elements#1/0
    // closed e.Elements#1 as range 0
    //0: e.Elements#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 2},
    {refalrts::icFunc, 0, 1, 3},
    {refalrts::icFunc, 0, 0, 4},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 5},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 7},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 9},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 10},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 11},
    {refalrts::icPushStack, 0, 0, 11},
    {refalrts::icPushStack, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icLinkBrackets, 5, 10, 0},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icLinkBrackets, 8, 9, 0},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icLinkBrackets, 6, 7, 0},
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
  // e.Elements#1/0
  // closed e.Elements#1 as range 0
  //0: e.Elements#1

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_call( context[2] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[3], Reduce, "Reduce" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[4], SeparateOne, "SeparateOne" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[5] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[11] ) )
    return refalrts::cNoMemory;
  refalrts::push_stack( context[11] );
  refalrts::push_stack( context[2] );
  res = refalrts::splice_elem( res, context[11] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  refalrts::link_brackets( context[5], context[10] );
  res = refalrts::splice_elem( res, context[10] );
  refalrts::link_brackets( context[8], context[9] );
  res = refalrts::splice_elem( res, context[9] );
  res = refalrts::splice_elem( res, context[8] );
  refalrts::link_brackets( context[6], context[7] );
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

static refalrts::FnResult ResolvingSets(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { ResolvingSets_Aux, "ResolvingSets_Aux" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    // ( ( e.Sets#1/4 ) ( e.Rules#1/6 ) )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 2},
    {refalrts::icBracketLeft, 0, 6, 2},
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icEmpty, 0, 0, 0},
    // closed e.Sets#1 as range 4
    // closed e.Rules#1 as range 6
    //4: e.Sets#1
    //6: e.Rules#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 9},
    {refalrts::icFunc, 0, 0, 10},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 11},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 12},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 13},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 14},
    {refalrts::icLinkBrackets, 13, 14, 0},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceEVar, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icLinkBrackets, 8, 12, 0},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icPushStack, 0, 0, 11},
    {refalrts::icPushStack, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceEVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 9},
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
  // ( ( e.Sets#1/4 ) ( e.Rules#1/6 ) )
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
  if( ! refalrts::empty_seq( context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Sets#1 as range 4
  // closed e.Rules#1 as range 6
  //4: e.Sets#1
  //6: e.Rules#1

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_bracket( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[10], ResolvingSets_Aux, "ResolvingSets_Aux" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[14] ) )
    return refalrts::cNoMemory;
  refalrts::link_brackets( context[13], context[14] );
  res = refalrts::splice_elem( res, context[14] );
  res = refalrts::splice_evar( res, context[6], context[7] );
  res = refalrts::splice_elem( res, context[13] );
  refalrts::link_brackets( context[8], context[12] );
  res = refalrts::splice_elem( res, context[12] );
  refalrts::push_stack( context[11] );
  refalrts::push_stack( context[9] );
  res = refalrts::splice_elem( res, context[11] );
  res = refalrts::splice_evar( res, context[4], context[5] );
  res = refalrts::splice_elem( res, context[10] );
  res = refalrts::splice_elem( res, context[9] );
  res = refalrts::splice_elem( res, context[8] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult NormingSet(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { NormingSet, "NormingSet" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +23, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // e.Set_B#1/2 s.Repeated#1/4 e.Set_M#1/5 s.Repeated#1/7 e.Set_E#1/10
    {refalrts::icEPrepare, 0, 2, 0},
    {refalrts::icEStart, 0, 2, 0},
    {refalrts::icSave, 0, 8, 0},
    {refalrts::icsVarLeft, 0, 4, 8},
    {refalrts::icEPrepare, 0, 5, 8},
    {refalrts::icEStart, 0, 5, 8},
    {refalrts::icSave, 0, 10, 8},
    {refalrts::icsRepeatLeft, 7, 4, 10},
    // closed e.Set_E#1 as range 0
    //2: e.Set_B#1
    //4: s.Repeated#1
    //5: e.Set_M#1
    //7: s.Repeated#1
    //10: e.Set_E#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 12},
    {refalrts::icFunc, 0, 0, 13},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 14},
    {refalrts::icPushStack, 0, 0, 14},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceEVar, 0, 0, 10},
    {refalrts::icSpliceEVar, 0, 0, 5},
    {refalrts::icSpliceSTVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // e.Set#1/0
    // closed e.Set#1 as range 0
    //0: e.Set#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icSpliceEVar, 0, 0, 0},
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
    // e.Set_B#1/2 s.Repeated#1/4 e.Set_M#1/5 s.Repeated#1/7 e.Set_E#1/10
    context[2] = 0;
    context[3] = 0;
    refalrts::start_e_loop();
    do {
      context[8] = context[0];
      context[9] = context[1];
      if( ! refalrts::svar_left( context[4], context[8], context[9] ) )
        continue;
      context[5] = 0;
      context[6] = 0;
      refalrts::start_e_loop();
      do {
        context[10] = context[8];
        context[11] = context[9];
        if( ! refalrts::repeated_stvar_left( context[7], context[4], context[10], context[11] ) )
          continue;
        // closed e.Set_E#1 as range 0
        //2: e.Set_B#1
        //4: s.Repeated#1
        //5: e.Set_M#1
        //7: s.Repeated#1
        //10: e.Set_E#1

        refalrts::reset_allocator();
        refalrts::Iter res = arg_begin;
        if( ! refalrts::alloc_open_call( context[12] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_name( context[13], NormingSet, "NormingSet" ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_call( context[14] ) )
          return refalrts::cNoMemory;
        refalrts::push_stack( context[14] );
        refalrts::push_stack( context[12] );
        res = refalrts::splice_elem( res, context[14] );
        res = refalrts::splice_evar( res, context[10], context[11] );
        res = refalrts::splice_evar( res, context[5], context[6] );
        res = refalrts::splice_stvar( res, context[4] );
        res = refalrts::splice_elem( res, context[13] );
        res = refalrts::splice_elem( res, context[12] );
        res = refalrts::splice_evar( res, context[2], context[3] );
        refalrts::use( res );
        refalrts::splice_to_freelist( arg_begin, arg_end );
        return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
      } while ( refalrts::open_evar_advance( context[5], context[6], context[8], context[9] ) );
    } while ( refalrts::open_evar_advance( context[2], context[3], context[0], context[1] ) );
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  refalrts::move_left( context[0], context[1] );
  refalrts::move_left( context[0], context[1] );
  refalrts::move_right( context[0], context[1] );
  // e.Set#1/0
  // closed e.Set#1 as range 0
  //0: e.Set#1

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  res = refalrts::splice_evar( res, context[0], context[1] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult ResolvingSets_Aux(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { SetPartNormalize, "SetPartNormalize" },
    { SetCheckRecursion, "SetCheckRecursion" },
    { SetSubstitute, "SetSubstitute" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    // e.Sets#1/0
    // closed e.Sets#1 as range 0
    //0: e.Sets#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 2},
    {refalrts::icFunc, 0, 2, 3},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 4},
    {refalrts::icFunc, 0, 1, 5},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 6},
    {refalrts::icFunc, 0, 0, 7},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 8},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 9},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 10},
    {refalrts::icPushStack, 0, 0, 10},
    {refalrts::icPushStack, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 10},
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
  // e.Sets#1/0
  // closed e.Sets#1 as range 0
  //0: e.Sets#1

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_call( context[2] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[3], SetSubstitute, "SetSubstitute" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[4] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[5], SetCheckRecursion, "SetCheckRecursion" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[7], SetPartNormalize, "SetPartNormalize" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[10] ) )
    return refalrts::cNoMemory;
  refalrts::push_stack( context[10] );
  refalrts::push_stack( context[2] );
  res = refalrts::splice_elem( res, context[10] );
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
  res = refalrts::splice_elem( res, context[3] );
  res = refalrts::splice_elem( res, context[2] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult NormalizeContent(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { NormalizeContent, "NormalizeContent" },
    { NormingSet, "NormingSet" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_Chars<int>::name,
    & ident_Set<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +30, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Chars#1/2 ) ( # Chars e.Symbols#1/4 ) e.Tail#1/0
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icIdentLeft, 0, 0, 4},
    // closed e.Chars#1 as range 2
    // closed e.Symbols#1 as range 4
    // closed e.Tail#1 as range 0
    //0: e.Tail#1
    //2: e.Chars#1
    //4: e.Symbols#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 6},
    {refalrts::icFunc, 0, 0, 7},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 9},
    {refalrts::icFunc, 0, 1, 10},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 11},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 12},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 13},
    {refalrts::icPushStack, 0, 0, 13},
    {refalrts::icPushStack, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icLinkBrackets, 8, 12, 0},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icPushStack, 0, 0, 11},
    {refalrts::icPushStack, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceEVar, 0, 0, 4},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +31, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Chars#1/2 ) ( # Set s.LineNumber#1/6 e.Name#1/4 ) e.Tail#1/0
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icIdentLeft, 0, 1, 4},
    // closed e.Chars#1 as range 2
    // closed e.Tail#1 as range 0
    {refalrts::icsVarLeft, 0, 6, 4},
    // closed e.Name#1 as range 4
    //0: e.Tail#1
    //2: e.Chars#1
    //4: e.Name#1
    //6: s.LineNumber#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 7},
    {refalrts::icIdent, 0, 1, 8},
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
    // ( e.Chars#1/2 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icEmpty, 0, 0, 0},
    // closed e.Chars#1 as range 2
    //2: e.Chars#1
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
    // ( e.Chars#1/2 ) ( # Chars e.Symbols#1/4 ) e.Tail#1/0
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_Chars<int>::name, context[4], context[5] ) )
      continue;
    // closed e.Chars#1 as range 2
    // closed e.Symbols#1 as range 4
    // closed e.Tail#1 as range 0
    //0: e.Tail#1
    //2: e.Chars#1
    //4: e.Symbols#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[7], NormalizeContent, "NormalizeContent" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[9] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[10], NormingSet, "NormingSet" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[13] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[13] );
    refalrts::push_stack( context[6] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    refalrts::link_brackets( context[8], context[12] );
    res = refalrts::splice_elem( res, context[12] );
    refalrts::push_stack( context[11] );
    refalrts::push_stack( context[9] );
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_evar( res, context[4], context[5] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_elem( res, context[10] );
    res = refalrts::splice_elem( res, context[9] );
    res = refalrts::splice_elem( res, context[8] );
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
    // ( e.Chars#1/2 ) ( # Set s.LineNumber#1/6 e.Name#1/4 ) e.Tail#1/0
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_Set<int>::name, context[4], context[5] ) )
      continue;
    // closed e.Chars#1 as range 2
    // closed e.Tail#1 as range 0
    if( ! refalrts::svar_left( context[6], context[4], context[5] ) )
      continue;
    // closed e.Name#1 as range 4
    //0: e.Tail#1
    //2: e.Chars#1
    //4: e.Name#1
    //6: s.LineNumber#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[7] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[8], & ident_Set<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[9] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[11], NormalizeContent, "NormalizeContent" ) )
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
  // ( e.Chars#1/2 )
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Chars#1 as range 2
  //2: e.Chars#1

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_bracket( context[4] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[5], & ident_Chars<int>::name ) )
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

static refalrts::FnResult SetPartNormalizeOne(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { NormalizeContent, "NormalizeContent" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_Any<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +21, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( ( e.Name#1/4 ) # Any )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icIdentRight, 0, 0, 2},
    {refalrts::icBracketLeft, 0, 4, 2},
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icEmpty, 0, 0, 0},
    // closed e.Name#1 as range 4
    //4: e.Name#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 7},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 8},
    {refalrts::icIdent, 0, 0, 9},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 10},
    {refalrts::icLinkBrackets, 6, 10, 0},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceEVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( ( e.Name#1/4 ) e.Content#1/2 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 2},
    {refalrts::icEmpty, 0, 0, 0},
    // closed e.Name#1 as range 4
    // closed e.Content#1 as range 2
    //2: e.Content#1
    //4: e.Name#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 7},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 8},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 9},
    {refalrts::icFunc, 0, 0, 10},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 11},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 12},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 13},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 14},
    {refalrts::icLinkBrackets, 6, 14, 0},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icPushStack, 0, 0, 13},
    {refalrts::icPushStack, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icLinkBrackets, 11, 12, 0},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceEVar, 0, 0, 4},
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
    // ( ( e.Name#1/4 ) # Any )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_right(  & ident_Any<int>::name, context[2], context[3] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    // closed e.Name#1 as range 4
    //4: e.Name#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[7] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[9], & ident_Any<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[10] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[6], context[10] );
    res = refalrts::splice_elem( res, context[10] );
    res = refalrts::splice_elem( res, context[9] );
    refalrts::link_brackets( context[7], context[8] );
    res = refalrts::splice_elem( res, context[8] );
    res = refalrts::splice_evar( res, context[4], context[5] );
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
  // ( ( e.Name#1/4 ) e.Content#1/2 )
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[4] = 0;
  context[5] = 0;
  if( ! refalrts::brackets_left( context[4], context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Name#1 as range 4
  // closed e.Content#1 as range 2
  //2: e.Content#1
  //4: e.Name#1

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_bracket( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[10], NormalizeContent, "NormalizeContent" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[14] ) )
    return refalrts::cNoMemory;
  refalrts::link_brackets( context[6], context[14] );
  res = refalrts::splice_elem( res, context[14] );
  refalrts::push_stack( context[13] );
  refalrts::push_stack( context[9] );
  res = refalrts::splice_elem( res, context[13] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::link_brackets( context[11], context[12] );
  res = refalrts::splice_elem( res, context[12] );
  res = refalrts::splice_elem( res, context[11] );
  res = refalrts::splice_elem( res, context[10] );
  res = refalrts::splice_elem( res, context[9] );
  refalrts::link_brackets( context[7], context[8] );
  res = refalrts::splice_elem( res, context[8] );
  res = refalrts::splice_evar( res, context[4], context[5] );
  res = refalrts::splice_elem( res, context[7] );
  res = refalrts::splice_elem( res, context[6] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult SetPartNormalize(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { SetPartNormalizeOne, "SetPartNormalizeOne" },
    { Map, "Map" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    // e.Sets#1/0
    // closed e.Sets#1 as range 0
    //0: e.Sets#1
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
  // e.Sets#1/0
  // closed e.Sets#1 as range 0
  //0: e.Sets#1

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_call( context[2] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[3], Map, "Map" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[4], SetPartNormalizeOne, "SetPartNormalizeOne" ) )
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

static refalrts::FnResult SetCheckRecursion(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 31 elems
  refalrts::Iter context[31];
  refalrts::zeros( context, 31 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { SetCheckRecursion, "SetCheckRecursion" },
    { WarningAt, "WarningAt" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_Set<int>::name
  };
  using refalrts::numbers;
  static const refalrts::StringItem strings[] = {
    {"Recursive depended set ", 23}
  };
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +51, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // e.Sets_B#1/2 ( ( e.Name#1/6 ) e.Content_B#1/8 ( # Set s.LineNumber#1/14 e.Name#1/12 ) e.Content_E#1/17 ) e.Sets_E#1/15
    {refalrts::icEPrepare, 0, 2, 0},
    {refalrts::icEStart, 0, 2, 0},
    {refalrts::icSave, 0, 15, 0},
    {refalrts::icBracketLeft, 0, 4, 15},
    {refalrts::icBracketLeft, 0, 6, 4},
    // closed e.Name#1 as range 6
    // closed e.Sets_E#1 as range 0
    {refalrts::icEPrepare, 0, 8, 4},
    {refalrts::icEStart, 0, 8, 4},
    {refalrts::icSave, 0, 17, 4},
    {refalrts::icBracketLeft, 0, 10, 17},
    {refalrts::icIdentLeft, 0, 0, 10},
    {refalrts::iceRepeatRight, 12, 6, 10},
    // closed e.Content_E#1 as range 4
    {refalrts::icsVarLeft, 0, 14, 10},
    {refalrts::icEmpty, 0, 0, 10},
    //2: e.Sets_B#1
    //6: e.Name#1
    //8: e.Content_B#1
    //12: e.Name#1
    //14: s.LineNumber#1
    //15: e.Sets_E#1
    //17: e.Content_E#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 19},
    {refalrts::icFunc, 0, 1, 20},
    {refalrts::icString, 0, 0, 21},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 23},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 24},
    {refalrts::icFunc, 0, 0, 25},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 26},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 27},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 28},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 29},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 30},
    {refalrts::icPushStack, 0, 0, 30},
    {refalrts::icPushStack, 0, 0, 24},
    {refalrts::icSpliceElem, 0, 0, 30},
    {refalrts::icSpliceEVar, 0, 0, 15},
    {refalrts::icLinkBrackets, 26, 29, 0},
    {refalrts::icSpliceElem, 0, 0, 29},
    {refalrts::icSpliceEVar, 0, 0, 17},
    {refalrts::icSpliceEVar, 0, 0, 8},
    {refalrts::icLinkBrackets, 27, 28, 0},
    {refalrts::icSpliceElem, 0, 0, 28},
    {refalrts::icSpliceEVar, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 27},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icPushStack, 0, 0, 23},
    {refalrts::icPushStack, 0, 0, 19},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icSpliceEVar, 0, 0, 6},
    {refalrts::icSpliceRange, 0, 0, 21},
    {refalrts::icSpliceSTVar, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // e.Sets#1/0
    // closed e.Sets#1 as range 0
    //0: e.Sets#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icSpliceEVar, 0, 0, 0},
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
    // e.Sets_B#1/2 ( ( e.Name#1/6 ) e.Content_B#1/8 ( # Set s.LineNumber#1/14 e.Name#1/12 ) e.Content_E#1/17 ) e.Sets_E#1/15
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
      if( ! refalrts::brackets_left( context[6], context[7], context[4], context[5] ) )
        continue;
      // closed e.Name#1 as range 6
      // closed e.Sets_E#1 as range 0
      context[8] = 0;
      context[9] = 0;
      refalrts::start_e_loop();
      do {
        context[17] = context[4];
        context[18] = context[5];
        context[10] = 0;
        context[11] = 0;
        if( ! refalrts::brackets_left( context[10], context[11], context[17], context[18] ) )
          continue;
        if( ! refalrts::ident_left(  & ident_Set<int>::name, context[10], context[11] ) )
          continue;
        if( ! refalrts::repeated_evar_right( context[12], context[13], context[6], context[7], context[10], context[11] ) )
          continue;
        // closed e.Content_E#1 as range 4
        if( ! refalrts::svar_left( context[14], context[10], context[11] ) )
          continue;
        if( ! refalrts::empty_seq( context[10], context[11] ) )
          continue;
        //2: e.Sets_B#1
        //6: e.Name#1
        //8: e.Content_B#1
        //12: e.Name#1
        //14: s.LineNumber#1
        //15: e.Sets_E#1
        //17: e.Content_E#1

        refalrts::reset_allocator();
        refalrts::Iter res = arg_begin;
        if( ! refalrts::alloc_open_call( context[19] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_name( context[20], WarningAt, "WarningAt" ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_chars( context[21], context[22], "Recursive depended set ", 23 ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_call( context[23] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_open_call( context[24] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_name( context[25], SetCheckRecursion, "SetCheckRecursion" ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_open_bracket( context[26] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_open_bracket( context[27] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_bracket( context[28] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_bracket( context[29] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_call( context[30] ) )
          return refalrts::cNoMemory;
        refalrts::push_stack( context[30] );
        refalrts::push_stack( context[24] );
        res = refalrts::splice_elem( res, context[30] );
        res = refalrts::splice_evar( res, context[15], context[16] );
        refalrts::link_brackets( context[26], context[29] );
        res = refalrts::splice_elem( res, context[29] );
        res = refalrts::splice_evar( res, context[17], context[18] );
        res = refalrts::splice_evar( res, context[8], context[9] );
        refalrts::link_brackets( context[27], context[28] );
        res = refalrts::splice_elem( res, context[28] );
        res = refalrts::splice_evar( res, context[12], context[13] );
        res = refalrts::splice_elem( res, context[27] );
        res = refalrts::splice_elem( res, context[26] );
        res = refalrts::splice_evar( res, context[2], context[3] );
        res = refalrts::splice_elem( res, context[25] );
        res = refalrts::splice_elem( res, context[24] );
        refalrts::push_stack( context[23] );
        refalrts::push_stack( context[19] );
        res = refalrts::splice_elem( res, context[23] );
        res = refalrts::splice_evar( res, context[6], context[7] );
        res = refalrts::splice_evar( res, context[21], context[22] );
        res = refalrts::splice_stvar( res, context[14] );
        res = refalrts::splice_elem( res, context[20] );
        res = refalrts::splice_elem( res, context[19] );
        refalrts::use( res );
        refalrts::splice_to_freelist( arg_begin, arg_end );
        return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
      } while ( refalrts::open_evar_advance( context[8], context[9], context[4], context[5] ) );
    } while ( refalrts::open_evar_advance( context[2], context[3], context[0], context[1] ) );
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  refalrts::move_left( context[0], context[1] );
  refalrts::move_left( context[0], context[1] );
  refalrts::move_right( context[0], context[1] );
  // e.Sets#1/0
  // closed e.Sets#1 as range 0
  //0: e.Sets#1

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  res = refalrts::splice_evar( res, context[0], context[1] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult SetSubstitute(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 42 elems
  refalrts::Iter context[42];
  refalrts::zeros( context, 42 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { ErrorAt, "ErrorAt" },
    { ResolvingSets_Aux, "ResolvingSets_Aux" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_Set<int>::name,
    & ident_Any<int>::name
  };
  using refalrts::numbers;
  static const refalrts::StringItem strings[] = {
    {" not defined", 12},
    {"set ", 4}
  };
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +41, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // e.Sets_B#1/2 ( ( e.Name#1/6 ) e.Content_B#1/8 ( # Set t.SrcPos#1/12 'Any' ) e.Content_E#1/15 ) e.Sets_E#1/13
    {refalrts::icEPrepare, 0, 2, 0},
    {refalrts::icEStart, 0, 2, 0},
    {refalrts::icSave, 0, 13, 0},
    {refalrts::icBracketLeft, 0, 4, 13},
    {refalrts::icBracketLeft, 0, 6, 4},
    // closed e.Name#1 as range 6
    // closed e.Sets_E#1 as range 0
    {refalrts::icEPrepare, 0, 8, 4},
    {refalrts::icEStart, 0, 8, 4},
    {refalrts::icSave, 0, 15, 4},
    {refalrts::icBracketLeft, 0, 10, 15},
    {refalrts::icIdentLeft, 0, 0, 10},
    {refalrts::icCharRight, 0, static_cast<unsigned char>('y'), 10},
    {refalrts::icCharRight, 0, static_cast<unsigned char>('n'), 10},
    {refalrts::icCharRight, 0, static_cast<unsigned char>('A'), 10},
    // closed e.Content_E#1 as range 4
    {refalrts::ictVarLeft, 0, 12, 10},
    {refalrts::icEmpty, 0, 0, 10},
    //2: e.Sets_B#1
    //6: e.Name#1
    //8: e.Content_B#1
    //12: t.SrcPos#1
    //13: e.Sets_E#1
    //15: e.Content_E#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 17},
    {refalrts::icFunc, 0, 1, 18},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 19},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 20},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 21},
    {refalrts::icIdent, 0, 1, 22},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 23},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 24},
    {refalrts::icPushStack, 0, 0, 24},
    {refalrts::icPushStack, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icSpliceEVar, 0, 0, 13},
    {refalrts::icLinkBrackets, 19, 23, 0},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icLinkBrackets, 20, 21, 0},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceEVar, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +60, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // e.Sets_B#1/2 ( ( e.Name#1/6 ) e.Content_B#1/8 ( # Set t.SrcPos#1/12 e.IncName#1/10 ) e.Content_E#1/25 ) e.Sets_M#1/13 ( ( e.IncName#1/19 ) e.IncContent#1/15 ) e.Sets_E#1/27
    {refalrts::icEPrepare, 0, 2, 0},
    {refalrts::icEStart, 0, 2, 0},
    {refalrts::icSave, 0, 21, 0},
    {refalrts::icBracketLeft, 0, 4, 21},
    {refalrts::icBracketLeft, 0, 6, 4},
    // closed e.Name#1 as range 6
    {refalrts::icEPrepare, 0, 8, 4},
    {refalrts::icEStart, 0, 8, 4},
    {refalrts::icSave, 0, 23, 21},
    {refalrts::icSave, 0, 25, 4},
    {refalrts::icBracketLeft, 0, 10, 25},
    {refalrts::icIdentLeft, 0, 0, 10},
    // closed e.Content_E#1 as range 4
    {refalrts::ictVarLeft, 0, 12, 10},
    // closed e.IncName#1 as range 10
    {refalrts::icEPrepare, 0, 13, 23},
    {refalrts::icEStart, 0, 13, 23},
    {refalrts::icSave, 0, 27, 23},
    {refalrts::icBracketLeft, 0, 15, 27},
    {refalrts::icBracketLeft, 0, 17, 15},
    {refalrts::iceRepeatLeft, 19, 10, 17},
    {refalrts::icEmpty, 0, 0, 17},
    // closed e.IncContent#1 as range 15
    // closed e.Sets_E#1 as range 0
    //2: e.Sets_B#1
    //6: e.Name#1
    //8: e.Content_B#1
    //10: e.IncName#1
    //12: t.SrcPos#1
    //13: e.Sets_M#1
    //15: e.IncContent#1
    //19: e.IncName#1
    //25: e.Content_E#1
    //27: e.Sets_E#1
    //38: e.IncContent#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 29},
    {refalrts::icFunc, 0, 1, 30},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 31},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 32},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 33},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 34},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 35},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 36},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 37},
    {refalrts::icCopyEVar, 38, 15, 0},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 40},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 41},
    {refalrts::icPushStack, 0, 0, 41},
    {refalrts::icPushStack, 0, 0, 29},
    {refalrts::icSpliceElem, 0, 0, 41},
    {refalrts::icSpliceEVar, 0, 0, 27},
    {refalrts::icLinkBrackets, 35, 40, 0},
    {refalrts::icSpliceElem, 0, 0, 40},
    {refalrts::icSpliceEVar, 0, 0, 38},
    {refalrts::icLinkBrackets, 36, 37, 0},
    {refalrts::icSpliceElem, 0, 0, 37},
    {refalrts::icSpliceEVar, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 36},
    {refalrts::icSpliceElem, 0, 0, 35},
    {refalrts::icSpliceEVar, 0, 0, 13},
    {refalrts::icLinkBrackets, 31, 34, 0},
    {refalrts::icSpliceElem, 0, 0, 34},
    {refalrts::icSpliceEVar, 0, 0, 25},
    {refalrts::icSpliceEVar, 0, 0, 15},
    {refalrts::icSpliceEVar, 0, 0, 8},
    {refalrts::icLinkBrackets, 32, 33, 0},
    {refalrts::icSpliceElem, 0, 0, 33},
    {refalrts::icSpliceEVar, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 32},
    {refalrts::icSpliceElem, 0, 0, 31},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 30},
    {refalrts::icSpliceElem, 0, 0, 29},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +59, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // e.Sets_B#1/2 ( ( e.IncName#1/6 ) e.IncContent#1/4 ) e.Sets_M#1/8 ( ( e.Name#1/12 ) e.Content_B#1/14 ( # Set t.SrcPos#1/20 e.IncName#1/18 ) e.Content_E#1/25 ) e.Sets_E#1/23
    {refalrts::icEPrepare, 0, 2, 0},
    {refalrts::icEStart, 0, 2, 0},
    {refalrts::icSave, 0, 21, 0},
    {refalrts::icBracketLeft, 0, 4, 21},
    {refalrts::icBracketLeft, 0, 6, 4},
    // closed e.IncName#1 as range 6
    // closed e.IncContent#1 as range 4
    {refalrts::icEPrepare, 0, 8, 21},
    {refalrts::icEStart, 0, 8, 21},
    {refalrts::icSave, 0, 23, 21},
    {refalrts::icBracketLeft, 0, 10, 23},
    {refalrts::icBracketLeft, 0, 12, 10},
    // closed e.Name#1 as range 12
    // closed e.Sets_E#1 as range 0
    {refalrts::icEPrepare, 0, 14, 10},
    {refalrts::icEStart, 0, 14, 10},
    {refalrts::icSave, 0, 25, 10},
    {refalrts::icBracketLeft, 0, 16, 25},
    {refalrts::icIdentLeft, 0, 0, 16},
    {refalrts::iceRepeatRight, 18, 6, 16},
    // closed e.Content_E#1 as range 10
    {refalrts::ictVarLeft, 0, 20, 16},
    {refalrts::icEmpty, 0, 0, 16},
    //2: e.Sets_B#1
    //4: e.IncContent#1
    //6: e.IncName#1
    //8: e.Sets_M#1
    //12: e.Name#1
    //14: e.Content_B#1
    //18: e.IncName#1
    //20: t.SrcPos#1
    //23: e.Sets_E#1
    //25: e.Content_E#1
    //36: e.IncContent#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 27},
    {refalrts::icFunc, 0, 1, 28},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 29},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 30},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 31},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 32},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 33},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 34},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 35},
    {refalrts::icCopyEVar, 36, 4, 0},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 38},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 39},
    {refalrts::icPushStack, 0, 0, 39},
    {refalrts::icPushStack, 0, 0, 27},
    {refalrts::icSpliceElem, 0, 0, 39},
    {refalrts::icSpliceEVar, 0, 0, 23},
    {refalrts::icLinkBrackets, 33, 38, 0},
    {refalrts::icSpliceElem, 0, 0, 38},
    {refalrts::icSpliceEVar, 0, 0, 25},
    {refalrts::icSpliceEVar, 0, 0, 36},
    {refalrts::icSpliceEVar, 0, 0, 14},
    {refalrts::icLinkBrackets, 34, 35, 0},
    {refalrts::icSpliceElem, 0, 0, 35},
    {refalrts::icSpliceEVar, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 34},
    {refalrts::icSpliceElem, 0, 0, 33},
    {refalrts::icSpliceEVar, 0, 0, 8},
    {refalrts::icLinkBrackets, 29, 32, 0},
    {refalrts::icSpliceElem, 0, 0, 32},
    {refalrts::icSpliceEVar, 0, 0, 4},
    {refalrts::icLinkBrackets, 30, 31, 0},
    {refalrts::icSpliceElem, 0, 0, 31},
    {refalrts::icSpliceEVar, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 30},
    {refalrts::icSpliceElem, 0, 0, 29},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 28},
    {refalrts::icSpliceElem, 0, 0, 27},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +28, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // e.Sets_B#1/2 ( ( e.Name#1/6 ) e.Content_B#1/8 ( # Set s.LineNumber#1/12 e.IncName#1/10 ) e.Content_E#1/15 ) e.Sets_E#1/13
    {refalrts::icEPrepare, 0, 2, 0},
    {refalrts::icEStart, 0, 2, 0},
    {refalrts::icSave, 0, 13, 0},
    {refalrts::icBracketLeft, 0, 4, 13},
    {refalrts::icBracketLeft, 0, 6, 4},
    // closed e.Name#1 as range 6
    // closed e.Sets_E#1 as range 0
    {refalrts::icEPrepare, 0, 8, 4},
    {refalrts::icEStart, 0, 8, 4},
    {refalrts::icSave, 0, 15, 4},
    {refalrts::icBracketLeft, 0, 10, 15},
    {refalrts::icIdentLeft, 0, 0, 10},
    // closed e.Content_E#1 as range 4
    {refalrts::icsVarLeft, 0, 12, 10},
    // closed e.IncName#1 as range 10
    //2: e.Sets_B#1
    //6: e.Name#1
    //8: e.Content_B#1
    //10: e.IncName#1
    //12: s.LineNumber#1
    //13: e.Sets_E#1
    //15: e.Content_E#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 17},
    {refalrts::icFunc, 0, 0, 18},
    {refalrts::icString, 0, 1, 19},
    {refalrts::icString, 0, 0, 21},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 23},
    {refalrts::icPushStack, 0, 0, 23},
    {refalrts::icPushStack, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icSpliceRange, 0, 0, 21},
    {refalrts::icSpliceEVar, 0, 0, 10},
    {refalrts::icSpliceRange, 0, 0, 19},
    {refalrts::icSpliceSTVar, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // e.Sets#1/0
    // closed e.Sets#1 as range 0
    //0: e.Sets#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[14];
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
    // e.Sets_B#1/2 ( ( e.Name#1/6 ) e.Content_B#1/8 ( # Set t.SrcPos#1/12 'Any' ) e.Content_E#1/15 ) e.Sets_E#1/13
    context[2] = 0;
    context[3] = 0;
    refalrts::start_e_loop();
    do {
      context[13] = context[0];
      context[14] = context[1];
      context[4] = 0;
      context[5] = 0;
      if( ! refalrts::brackets_left( context[4], context[5], context[13], context[14] ) )
        continue;
      context[6] = 0;
      context[7] = 0;
      if( ! refalrts::brackets_left( context[6], context[7], context[4], context[5] ) )
        continue;
      // closed e.Name#1 as range 6
      // closed e.Sets_E#1 as range 0
      context[8] = 0;
      context[9] = 0;
      refalrts::start_e_loop();
      do {
        context[15] = context[4];
        context[16] = context[5];
        context[10] = 0;
        context[11] = 0;
        if( ! refalrts::brackets_left( context[10], context[11], context[15], context[16] ) )
          continue;
        if( ! refalrts::ident_left(  & ident_Set<int>::name, context[10], context[11] ) )
          continue;
        if( ! refalrts::char_right( 'y', context[10], context[11] ) )
          continue;
        if( ! refalrts::char_right( 'n', context[10], context[11] ) )
          continue;
        if( ! refalrts::char_right( 'A', context[10], context[11] ) )
          continue;
        // closed e.Content_E#1 as range 4
        if( ! refalrts::tvar_left( context[12], context[10], context[11] ) )
          continue;
        if( ! refalrts::empty_seq( context[10], context[11] ) )
          continue;
        //2: e.Sets_B#1
        //6: e.Name#1
        //8: e.Content_B#1
        //12: t.SrcPos#1
        //13: e.Sets_E#1
        //15: e.Content_E#1

        refalrts::reset_allocator();
        refalrts::Iter res = arg_begin;
        if( ! refalrts::alloc_open_call( context[17] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_name( context[18], ResolvingSets_Aux, "ResolvingSets_Aux" ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_open_bracket( context[19] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_open_bracket( context[20] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_bracket( context[21] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_ident( context[22], & ident_Any<int>::name ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_bracket( context[23] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_call( context[24] ) )
          return refalrts::cNoMemory;
        refalrts::push_stack( context[24] );
        refalrts::push_stack( context[17] );
        res = refalrts::splice_elem( res, context[24] );
        res = refalrts::splice_evar( res, context[13], context[14] );
        refalrts::link_brackets( context[19], context[23] );
        res = refalrts::splice_elem( res, context[23] );
        res = refalrts::splice_elem( res, context[22] );
        refalrts::link_brackets( context[20], context[21] );
        res = refalrts::splice_elem( res, context[21] );
        res = refalrts::splice_evar( res, context[6], context[7] );
        res = refalrts::splice_elem( res, context[20] );
        res = refalrts::splice_elem( res, context[19] );
        res = refalrts::splice_evar( res, context[2], context[3] );
        res = refalrts::splice_elem( res, context[18] );
        res = refalrts::splice_elem( res, context[17] );
        refalrts::use( res );
        refalrts::splice_to_freelist( arg_begin, arg_end );
        return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
      } while ( refalrts::open_evar_advance( context[8], context[9], context[4], context[5] ) );
    } while ( refalrts::open_evar_advance( context[2], context[3], context[0], context[1] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    // e.Sets_B#1/2 ( ( e.Name#1/6 ) e.Content_B#1/8 ( # Set t.SrcPos#1/12 e.IncName#1/10 ) e.Content_E#1/25 ) e.Sets_M#1/13 ( ( e.IncName#1/19 ) e.IncContent#1/15 ) e.Sets_E#1/27
    context[2] = 0;
    context[3] = 0;
    refalrts::start_e_loop();
    do {
      context[21] = context[0];
      context[22] = context[1];
      context[4] = 0;
      context[5] = 0;
      if( ! refalrts::brackets_left( context[4], context[5], context[21], context[22] ) )
        continue;
      context[6] = 0;
      context[7] = 0;
      if( ! refalrts::brackets_left( context[6], context[7], context[4], context[5] ) )
        continue;
      // closed e.Name#1 as range 6
      context[8] = 0;
      context[9] = 0;
      refalrts::start_e_loop();
      do {
        context[23] = context[21];
        context[24] = context[22];
        context[25] = context[4];
        context[26] = context[5];
        context[10] = 0;
        context[11] = 0;
        if( ! refalrts::brackets_left( context[10], context[11], context[25], context[26] ) )
          continue;
        if( ! refalrts::ident_left(  & ident_Set<int>::name, context[10], context[11] ) )
          continue;
        // closed e.Content_E#1 as range 4
        if( ! refalrts::tvar_left( context[12], context[10], context[11] ) )
          continue;
        // closed e.IncName#1 as range 10
        context[13] = 0;
        context[14] = 0;
        refalrts::start_e_loop();
        do {
          context[27] = context[23];
          context[28] = context[24];
          context[15] = 0;
          context[16] = 0;
          if( ! refalrts::brackets_left( context[15], context[16], context[27], context[28] ) )
            continue;
          context[17] = 0;
          context[18] = 0;
          if( ! refalrts::brackets_left( context[17], context[18], context[15], context[16] ) )
            continue;
          if( ! refalrts::repeated_evar_left( context[19], context[20], context[10], context[11], context[17], context[18] ) )
            continue;
          if( ! refalrts::empty_seq( context[17], context[18] ) )
            continue;
          // closed e.IncContent#1 as range 15
          // closed e.Sets_E#1 as range 0
          //2: e.Sets_B#1
          //6: e.Name#1
          //8: e.Content_B#1
          //10: e.IncName#1
          //12: t.SrcPos#1
          //13: e.Sets_M#1
          //15: e.IncContent#1
          //19: e.IncName#1
          //25: e.Content_E#1
          //27: e.Sets_E#1
          //38: e.IncContent#1

          refalrts::reset_allocator();
          refalrts::Iter res = arg_begin;
          if( ! refalrts::alloc_open_call( context[29] ) )
            return refalrts::cNoMemory;
          if( ! refalrts::alloc_name( context[30], ResolvingSets_Aux, "ResolvingSets_Aux" ) )
            return refalrts::cNoMemory;
          if( ! refalrts::alloc_open_bracket( context[31] ) )
            return refalrts::cNoMemory;
          if( ! refalrts::alloc_open_bracket( context[32] ) )
            return refalrts::cNoMemory;
          if( ! refalrts::alloc_close_bracket( context[33] ) )
            return refalrts::cNoMemory;
          if( ! refalrts::alloc_close_bracket( context[34] ) )
            return refalrts::cNoMemory;
          if( ! refalrts::alloc_open_bracket( context[35] ) )
            return refalrts::cNoMemory;
          if( ! refalrts::alloc_open_bracket( context[36] ) )
            return refalrts::cNoMemory;
          if( ! refalrts::alloc_close_bracket( context[37] ) )
            return refalrts::cNoMemory;
          if (! refalrts::copy_evar(context[38], context[39], context[15], context[16]))
            return refalrts::cNoMemory;
          if( ! refalrts::alloc_close_bracket( context[40] ) )
            return refalrts::cNoMemory;
          if( ! refalrts::alloc_close_call( context[41] ) )
            return refalrts::cNoMemory;
          refalrts::push_stack( context[41] );
          refalrts::push_stack( context[29] );
          res = refalrts::splice_elem( res, context[41] );
          res = refalrts::splice_evar( res, context[27], context[28] );
          refalrts::link_brackets( context[35], context[40] );
          res = refalrts::splice_elem( res, context[40] );
          res = refalrts::splice_evar( res, context[38], context[39] );
          refalrts::link_brackets( context[36], context[37] );
          res = refalrts::splice_elem( res, context[37] );
          res = refalrts::splice_evar( res, context[10], context[11] );
          res = refalrts::splice_elem( res, context[36] );
          res = refalrts::splice_elem( res, context[35] );
          res = refalrts::splice_evar( res, context[13], context[14] );
          refalrts::link_brackets( context[31], context[34] );
          res = refalrts::splice_elem( res, context[34] );
          res = refalrts::splice_evar( res, context[25], context[26] );
          res = refalrts::splice_evar( res, context[15], context[16] );
          res = refalrts::splice_evar( res, context[8], context[9] );
          refalrts::link_brackets( context[32], context[33] );
          res = refalrts::splice_elem( res, context[33] );
          res = refalrts::splice_evar( res, context[6], context[7] );
          res = refalrts::splice_elem( res, context[32] );
          res = refalrts::splice_elem( res, context[31] );
          res = refalrts::splice_evar( res, context[2], context[3] );
          res = refalrts::splice_elem( res, context[30] );
          res = refalrts::splice_elem( res, context[29] );
          refalrts::use( res );
          refalrts::splice_to_freelist( arg_begin, arg_end );
          return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
        } while ( refalrts::open_evar_advance( context[13], context[14], context[23], context[24] ) );
      } while ( refalrts::open_evar_advance( context[8], context[9], context[4], context[5] ) );
    } while ( refalrts::open_evar_advance( context[2], context[3], context[0], context[1] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    // e.Sets_B#1/2 ( ( e.IncName#1/6 ) e.IncContent#1/4 ) e.Sets_M#1/8 ( ( e.Name#1/12 ) e.Content_B#1/14 ( # Set t.SrcPos#1/20 e.IncName#1/18 ) e.Content_E#1/25 ) e.Sets_E#1/23
    context[2] = 0;
    context[3] = 0;
    refalrts::start_e_loop();
    do {
      context[21] = context[0];
      context[22] = context[1];
      context[4] = 0;
      context[5] = 0;
      if( ! refalrts::brackets_left( context[4], context[5], context[21], context[22] ) )
        continue;
      context[6] = 0;
      context[7] = 0;
      if( ! refalrts::brackets_left( context[6], context[7], context[4], context[5] ) )
        continue;
      // closed e.IncName#1 as range 6
      // closed e.IncContent#1 as range 4
      context[8] = 0;
      context[9] = 0;
      refalrts::start_e_loop();
      do {
        context[23] = context[21];
        context[24] = context[22];
        context[10] = 0;
        context[11] = 0;
        if( ! refalrts::brackets_left( context[10], context[11], context[23], context[24] ) )
          continue;
        context[12] = 0;
        context[13] = 0;
        if( ! refalrts::brackets_left( context[12], context[13], context[10], context[11] ) )
          continue;
        // closed e.Name#1 as range 12
        // closed e.Sets_E#1 as range 0
        context[14] = 0;
        context[15] = 0;
        refalrts::start_e_loop();
        do {
          context[25] = context[10];
          context[26] = context[11];
          context[16] = 0;
          context[17] = 0;
          if( ! refalrts::brackets_left( context[16], context[17], context[25], context[26] ) )
            continue;
          if( ! refalrts::ident_left(  & ident_Set<int>::name, context[16], context[17] ) )
            continue;
          if( ! refalrts::repeated_evar_right( context[18], context[19], context[6], context[7], context[16], context[17] ) )
            continue;
          // closed e.Content_E#1 as range 10
          if( ! refalrts::tvar_left( context[20], context[16], context[17] ) )
            continue;
          if( ! refalrts::empty_seq( context[16], context[17] ) )
            continue;
          //2: e.Sets_B#1
          //4: e.IncContent#1
          //6: e.IncName#1
          //8: e.Sets_M#1
          //12: e.Name#1
          //14: e.Content_B#1
          //18: e.IncName#1
          //20: t.SrcPos#1
          //23: e.Sets_E#1
          //25: e.Content_E#1
          //36: e.IncContent#1

          refalrts::reset_allocator();
          refalrts::Iter res = arg_begin;
          if( ! refalrts::alloc_open_call( context[27] ) )
            return refalrts::cNoMemory;
          if( ! refalrts::alloc_name( context[28], ResolvingSets_Aux, "ResolvingSets_Aux" ) )
            return refalrts::cNoMemory;
          if( ! refalrts::alloc_open_bracket( context[29] ) )
            return refalrts::cNoMemory;
          if( ! refalrts::alloc_open_bracket( context[30] ) )
            return refalrts::cNoMemory;
          if( ! refalrts::alloc_close_bracket( context[31] ) )
            return refalrts::cNoMemory;
          if( ! refalrts::alloc_close_bracket( context[32] ) )
            return refalrts::cNoMemory;
          if( ! refalrts::alloc_open_bracket( context[33] ) )
            return refalrts::cNoMemory;
          if( ! refalrts::alloc_open_bracket( context[34] ) )
            return refalrts::cNoMemory;
          if( ! refalrts::alloc_close_bracket( context[35] ) )
            return refalrts::cNoMemory;
          if (! refalrts::copy_evar(context[36], context[37], context[4], context[5]))
            return refalrts::cNoMemory;
          if( ! refalrts::alloc_close_bracket( context[38] ) )
            return refalrts::cNoMemory;
          if( ! refalrts::alloc_close_call( context[39] ) )
            return refalrts::cNoMemory;
          refalrts::push_stack( context[39] );
          refalrts::push_stack( context[27] );
          res = refalrts::splice_elem( res, context[39] );
          res = refalrts::splice_evar( res, context[23], context[24] );
          refalrts::link_brackets( context[33], context[38] );
          res = refalrts::splice_elem( res, context[38] );
          res = refalrts::splice_evar( res, context[25], context[26] );
          res = refalrts::splice_evar( res, context[36], context[37] );
          res = refalrts::splice_evar( res, context[14], context[15] );
          refalrts::link_brackets( context[34], context[35] );
          res = refalrts::splice_elem( res, context[35] );
          res = refalrts::splice_evar( res, context[12], context[13] );
          res = refalrts::splice_elem( res, context[34] );
          res = refalrts::splice_elem( res, context[33] );
          res = refalrts::splice_evar( res, context[8], context[9] );
          refalrts::link_brackets( context[29], context[32] );
          res = refalrts::splice_elem( res, context[32] );
          res = refalrts::splice_evar( res, context[4], context[5] );
          refalrts::link_brackets( context[30], context[31] );
          res = refalrts::splice_elem( res, context[31] );
          res = refalrts::splice_evar( res, context[6], context[7] );
          res = refalrts::splice_elem( res, context[30] );
          res = refalrts::splice_elem( res, context[29] );
          res = refalrts::splice_evar( res, context[2], context[3] );
          res = refalrts::splice_elem( res, context[28] );
          res = refalrts::splice_elem( res, context[27] );
          refalrts::use( res );
          refalrts::splice_to_freelist( arg_begin, arg_end );
          return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
        } while ( refalrts::open_evar_advance( context[14], context[15], context[10], context[11] ) );
      } while ( refalrts::open_evar_advance( context[8], context[9], context[21], context[22] ) );
    } while ( refalrts::open_evar_advance( context[2], context[3], context[0], context[1] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    // e.Sets_B#1/2 ( ( e.Name#1/6 ) e.Content_B#1/8 ( # Set s.LineNumber#1/12 e.IncName#1/10 ) e.Content_E#1/15 ) e.Sets_E#1/13
    context[2] = 0;
    context[3] = 0;
    refalrts::start_e_loop();
    do {
      context[13] = context[0];
      context[14] = context[1];
      context[4] = 0;
      context[5] = 0;
      if( ! refalrts::brackets_left( context[4], context[5], context[13], context[14] ) )
        continue;
      context[6] = 0;
      context[7] = 0;
      if( ! refalrts::brackets_left( context[6], context[7], context[4], context[5] ) )
        continue;
      // closed e.Name#1 as range 6
      // closed e.Sets_E#1 as range 0
      context[8] = 0;
      context[9] = 0;
      refalrts::start_e_loop();
      do {
        context[15] = context[4];
        context[16] = context[5];
        context[10] = 0;
        context[11] = 0;
        if( ! refalrts::brackets_left( context[10], context[11], context[15], context[16] ) )
          continue;
        if( ! refalrts::ident_left(  & ident_Set<int>::name, context[10], context[11] ) )
          continue;
        // closed e.Content_E#1 as range 4
        if( ! refalrts::svar_left( context[12], context[10], context[11] ) )
          continue;
        // closed e.IncName#1 as range 10
        //2: e.Sets_B#1
        //6: e.Name#1
        //8: e.Content_B#1
        //10: e.IncName#1
        //12: s.LineNumber#1
        //13: e.Sets_E#1
        //15: e.Content_E#1

        refalrts::reset_allocator();
        refalrts::Iter res = arg_begin;
        if( ! refalrts::alloc_open_call( context[17] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_name( context[18], ErrorAt, "ErrorAt" ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_chars( context[19], context[20], "set ", 4 ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_chars( context[21], context[22], " not defined", 12 ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_call( context[23] ) )
          return refalrts::cNoMemory;
        refalrts::push_stack( context[23] );
        refalrts::push_stack( context[17] );
        res = refalrts::splice_elem( res, context[23] );
        res = refalrts::splice_evar( res, context[21], context[22] );
        res = refalrts::splice_evar( res, context[10], context[11] );
        res = refalrts::splice_evar( res, context[19], context[20] );
        res = refalrts::splice_stvar( res, context[12] );
        res = refalrts::splice_elem( res, context[18] );
        res = refalrts::splice_elem( res, context[17] );
        refalrts::use( res );
        refalrts::splice_to_freelist( arg_begin, arg_end );
        return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
      } while ( refalrts::open_evar_advance( context[8], context[9], context[4], context[5] ) );
    } while ( refalrts::open_evar_advance( context[2], context[3], context[0], context[1] ) );
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  refalrts::move_left( context[0], context[1] );
  refalrts::move_left( context[0], context[1] );
  refalrts::move_right( context[0], context[1] );
  // e.Sets#1/0
  // closed e.Sets#1 as range 0
  //0: e.Sets#1

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  res = refalrts::splice_evar( res, context[0], context[1] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult SimplifySet(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
#ifdef INTERPRET
  using refalrts::functions;
  static const refalrts::RefalIdentifier idents[] = {
    & ident_Chars<int>::name,
    & ident_NotUsed<int>::name,
    & ident_Any<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +23, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( ( e.Name#1/4 ) # Any )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icIdentRight, 0, 2, 2},
    {refalrts::icBracketLeft, 0, 4, 2},
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icEmpty, 0, 0, 0},
    // closed e.Name#1 as range 4
    //4: e.Name#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 7},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 8},
    {refalrts::icIdent, 0, 1, 9},
    {refalrts::icIdent, 0, 2, 10},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 11},
    {refalrts::icLinkBrackets, 6, 11, 0},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceEVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( ( e.Name#1/4 ) ( # Chars e.Content#1/6 ) )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 2},
    {refalrts::icBracketLeft, 0, 6, 2},
    {refalrts::icIdentLeft, 0, 0, 6},
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icEmpty, 0, 0, 0},
    // closed e.Name#1 as range 4
    // closed e.Content#1 as range 6
    //4: e.Name#1
    //6: e.Content#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 9},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 10},
    {refalrts::icIdent, 0, 1, 11},
    {refalrts::icIdent, 0, 0, 12},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 13},
    {refalrts::icLinkBrackets, 8, 13, 0},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceEVar, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icLinkBrackets, 9, 10, 0},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceEVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 9},
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
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    // ( ( e.Name#1/4 ) # Any )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_right(  & ident_Any<int>::name, context[2], context[3] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    // closed e.Name#1 as range 4
    //4: e.Name#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[7] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[9], & ident_NotUsed<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[10], & ident_Any<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[11] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[6], context[11] );
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_elem( res, context[10] );
    res = refalrts::splice_elem( res, context[9] );
    refalrts::link_brackets( context[7], context[8] );
    res = refalrts::splice_elem( res, context[8] );
    res = refalrts::splice_evar( res, context[4], context[5] );
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
  // ( ( e.Name#1/4 ) ( # Chars e.Content#1/6 ) )
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
  if( ! refalrts::ident_left(  & ident_Chars<int>::name, context[6], context[7] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Name#1 as range 4
  // closed e.Content#1 as range 6
  //4: e.Name#1
  //6: e.Content#1

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_bracket( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[11], & ident_NotUsed<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[12], & ident_Chars<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[13] ) )
    return refalrts::cNoMemory;
  refalrts::link_brackets( context[8], context[13] );
  res = refalrts::splice_elem( res, context[13] );
  res = refalrts::splice_evar( res, context[6], context[7] );
  res = refalrts::splice_elem( res, context[12] );
  res = refalrts::splice_elem( res, context[11] );
  refalrts::link_brackets( context[9], context[10] );
  res = refalrts::splice_elem( res, context[10] );
  res = refalrts::splice_evar( res, context[4], context[5] );
  res = refalrts::splice_elem( res, context[9] );
  res = refalrts::splice_elem( res, context[8] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult GenerateAutomat(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { SimplifySet, "SimplifySet" },
    { Map, "Map" },
    { SubstituteSetsToRules, "SubstituteSetsToRules" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Sets#1/2 ) ( e.Rules#1/4 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icEmpty, 0, 0, 0},
    // closed e.Sets#1 as range 2
    // closed e.Rules#1 as range 4
    //2: e.Sets#1
    //4: e.Rules#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 6},
    {refalrts::icFunc, 0, 2, 7},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 9},
    {refalrts::icFunc, 0, 1, 10},
    {refalrts::icFunc, 0, 0, 11},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 12},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 13},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 14},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 15},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 16},
    {refalrts::icPushStack, 0, 0, 16},
    {refalrts::icPushStack, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icLinkBrackets, 14, 15, 0},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceEVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icLinkBrackets, 8, 13, 0},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icPushStack, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 10},
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
  context[0] = arg_begin;
  context[1] = arg_end;
  refalrts::move_left( context[0], context[1] );
  refalrts::move_left( context[0], context[1] );
  refalrts::move_right( context[0], context[1] );
  // ( e.Sets#1/2 ) ( e.Rules#1/4 )
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
  // closed e.Sets#1 as range 2
  // closed e.Rules#1 as range 4
  //2: e.Sets#1
  //4: e.Rules#1

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_call( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[7], SubstituteSetsToRules, "SubstituteSetsToRules" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[10], Map, "Map" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[11], SimplifySet, "SimplifySet" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[12] ) )
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
  refalrts::push_stack( context[6] );
  res = refalrts::splice_elem( res, context[16] );
  refalrts::link_brackets( context[14], context[15] );
  res = refalrts::splice_elem( res, context[15] );
  res = refalrts::splice_evar( res, context[4], context[5] );
  res = refalrts::splice_elem( res, context[14] );
  refalrts::link_brackets( context[8], context[13] );
  res = refalrts::splice_elem( res, context[13] );
  refalrts::push_stack( context[12] );
  refalrts::push_stack( context[9] );
  res = refalrts::splice_elem( res, context[12] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_elem( res, context[11] );
  res = refalrts::splice_elem( res, context[10] );
  res = refalrts::splice_elem( res, context[9] );
  res = refalrts::splice_elem( res, context[8] );
  res = refalrts::splice_elem( res, context[7] );
  res = refalrts::splice_elem( res, context[6] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult SubstituteSetsToRules(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 56 elems
  refalrts::Iter context[56];
  refalrts::zeros( context, 56 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { GenerateSentences, "GenerateSentences" },
    { ErrorAt, "ErrorAt" },
    { SubstituteSetsToRules, "SubstituteSetsToRules" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_Set<int>::name,
    & ident_Any<int>::name,
    & ident_Used<int>::name,
    & ident_NotUsed<int>::name,
    & ident_Chars<int>::name
  };
  using refalrts::numbers;
  static const refalrts::StringItem strings[] = {
    {"Undeclared set ", 15}
  };
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +93, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( ( ( e.Name#1/6 ) s.Used#1/10 # Chars e.Content#1/4 ) e.Sets#1/2 ) ( e.Rules_B#1/11 ( ( e.RuleName#1/15 ) e.Alternatives_B#1/17 ( ( # Set t.SrcPos#1/25 e.Name#1/23 ) t.Flush#1/26 t.NextState#1/27 ) e.Alternatives_E#1/30 ) e.Rules_E#1/28 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 2},
    {refalrts::icBracketLeft, 0, 6, 4},
    {refalrts::icBracketLeft, 0, 8, 0},
    {refalrts::icEmpty, 0, 0, 0},
    // closed e.Name#1 as range 6
    // closed e.Sets#1 as range 2
    {refalrts::icsVarLeft, 0, 10, 4},
    {refalrts::icIdentLeft, 0, 4, 4},
    // closed e.Content#1 as range 4
    {refalrts::icEPrepare, 0, 11, 8},
    {refalrts::icEStart, 0, 11, 8},
    {refalrts::icSave, 0, 28, 8},
    {refalrts::icBracketLeft, 0, 13, 28},
    {refalrts::icBracketLeft, 0, 15, 13},
    // closed e.RuleName#1 as range 15
    // closed e.Rules_E#1 as range 8
    {refalrts::icEPrepare, 0, 17, 13},
    {refalrts::icEStart, 0, 17, 13},
    {refalrts::icSave, 0, 30, 13},
    {refalrts::icBracketLeft, 0, 19, 30},
    {refalrts::icBracketLeft, 0, 21, 19},
    {refalrts::icIdentLeft, 0, 0, 21},
    {refalrts::iceRepeatRight, 23, 6, 21},
    // closed e.Alternatives_E#1 as range 13
    {refalrts::ictVarLeft, 0, 25, 21},
    {refalrts::icEmpty, 0, 0, 21},
    {refalrts::ictVarLeft, 0, 26, 19},
    {refalrts::ictVarLeft, 0, 27, 19},
    {refalrts::icEmpty, 0, 0, 19},
    //2: e.Sets#1
    //4: e.Content#1
    //6: e.Name#1
    //10: s.Used#1
    //11: e.Rules_B#1
    //15: e.RuleName#1
    //17: e.Alternatives_B#1
    //23: e.Name#1
    //25: t.SrcPos#1
    //26: t.Flush#1
    //27: t.NextState#1
    //28: e.Rules_E#1
    //30: e.Alternatives_E#1
    //49: e.Content#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 32},
    {refalrts::icFunc, 0, 2, 33},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 34},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 35},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 36},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 37},
    {refalrts::icIdent, 0, 2, 38},
    {refalrts::icIdent, 0, 4, 39},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 40},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 41},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 42},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 43},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 44},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 45},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 46},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 47},
    {refalrts::icIdent, 0, 4, 48},
    {refalrts::icCopyEVar, 49, 4, 0},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 51},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 52},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 53},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 54},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 55},
    {refalrts::icPushStack, 0, 0, 55},
    {refalrts::icPushStack, 0, 0, 32},
    {refalrts::icSpliceElem, 0, 0, 55},
    {refalrts::icLinkBrackets, 42, 54, 0},
    {refalrts::icSpliceElem, 0, 0, 54},
    {refalrts::icSpliceEVar, 0, 0, 28},
    {refalrts::icLinkBrackets, 43, 53, 0},
    {refalrts::icSpliceElem, 0, 0, 53},
    {refalrts::icSpliceEVar, 0, 0, 30},
    {refalrts::icLinkBrackets, 46, 52, 0},
    {refalrts::icSpliceElem, 0, 0, 52},
    {refalrts::icSpliceSTVar, 0, 0, 27},
    {refalrts::icSpliceSTVar, 0, 0, 26},
    {refalrts::icLinkBrackets, 47, 51, 0},
    {refalrts::icSpliceElem, 0, 0, 51},
    {refalrts::icSpliceEVar, 0, 0, 49},
    {refalrts::icSpliceElem, 0, 0, 48},
    {refalrts::icSpliceElem, 0, 0, 47},
    {refalrts::icSpliceElem, 0, 0, 46},
    {refalrts::icSpliceEVar, 0, 0, 17},
    {refalrts::icLinkBrackets, 44, 45, 0},
    {refalrts::icSpliceElem, 0, 0, 45},
    {refalrts::icSpliceEVar, 0, 0, 15},
    {refalrts::icSpliceElem, 0, 0, 44},
    {refalrts::icSpliceElem, 0, 0, 43},
    {refalrts::icSpliceEVar, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 42},
    {refalrts::icLinkBrackets, 34, 41, 0},
    {refalrts::icSpliceElem, 0, 0, 41},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icLinkBrackets, 35, 40, 0},
    {refalrts::icSpliceElem, 0, 0, 40},
    {refalrts::icSpliceEVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 39},
    {refalrts::icSpliceElem, 0, 0, 38},
    {refalrts::icLinkBrackets, 36, 37, 0},
    {refalrts::icSpliceElem, 0, 0, 37},
    {refalrts::icSpliceEVar, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 36},
    {refalrts::icSpliceElem, 0, 0, 35},
    {refalrts::icSpliceElem, 0, 0, 34},
    {refalrts::icSpliceElem, 0, 0, 33},
    {refalrts::icSpliceElem, 0, 0, 32},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +85, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( ( ( e.Name#1/6 ) s.Used#1/10 # Any ) e.Sets#1/2 ) ( e.Rules_B#1/11 ( ( e.RuleName#1/15 ) e.Alternatives_B#1/17 ( ( # Set t.SrcPos#1/25 e.Name#1/23 ) t.Flush#1/26 t.NextState#1/27 ) e.Alternatives_E#1/30 ) e.Rules_E#1/28 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 2},
    {refalrts::icIdentRight, 0, 1, 4},
    {refalrts::icBracketLeft, 0, 6, 4},
    {refalrts::icBracketLeft, 0, 8, 0},
    {refalrts::icEmpty, 0, 0, 0},
    // closed e.Name#1 as range 6
    // closed e.Sets#1 as range 2
    {refalrts::icsVarLeft, 0, 10, 4},
    {refalrts::icEmpty, 0, 0, 4},
    {refalrts::icEPrepare, 0, 11, 8},
    {refalrts::icEStart, 0, 11, 8},
    {refalrts::icSave, 0, 28, 8},
    {refalrts::icBracketLeft, 0, 13, 28},
    {refalrts::icBracketLeft, 0, 15, 13},
    // closed e.RuleName#1 as range 15
    // closed e.Rules_E#1 as range 8
    {refalrts::icEPrepare, 0, 17, 13},
    {refalrts::icEStart, 0, 17, 13},
    {refalrts::icSave, 0, 30, 13},
    {refalrts::icBracketLeft, 0, 19, 30},
    {refalrts::icBracketLeft, 0, 21, 19},
    {refalrts::icIdentLeft, 0, 0, 21},
    {refalrts::iceRepeatRight, 23, 6, 21},
    // closed e.Alternatives_E#1 as range 13
    {refalrts::ictVarLeft, 0, 25, 21},
    {refalrts::icEmpty, 0, 0, 21},
    {refalrts::ictVarLeft, 0, 26, 19},
    {refalrts::ictVarLeft, 0, 27, 19},
    {refalrts::icEmpty, 0, 0, 19},
    //2: e.Sets#1
    //6: e.Name#1
    //10: s.Used#1
    //11: e.Rules_B#1
    //15: e.RuleName#1
    //17: e.Alternatives_B#1
    //23: e.Name#1
    //25: t.SrcPos#1
    //26: t.Flush#1
    //27: t.NextState#1
    //28: e.Rules_E#1
    //30: e.Alternatives_E#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 32},
    {refalrts::icFunc, 0, 2, 33},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 34},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 35},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 36},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 37},
    {refalrts::icIdent, 0, 1, 38},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 39},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 40},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 41},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 42},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 43},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 44},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 45},
    {refalrts::icIdent, 0, 1, 46},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 47},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 48},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 49},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 50},
    {refalrts::icPushStack, 0, 0, 50},
    {refalrts::icPushStack, 0, 0, 32},
    {refalrts::icSpliceElem, 0, 0, 50},
    {refalrts::icLinkBrackets, 41, 49, 0},
    {refalrts::icSpliceElem, 0, 0, 49},
    {refalrts::icSpliceEVar, 0, 0, 28},
    {refalrts::icLinkBrackets, 42, 48, 0},
    {refalrts::icSpliceElem, 0, 0, 48},
    {refalrts::icSpliceEVar, 0, 0, 30},
    {refalrts::icLinkBrackets, 45, 47, 0},
    {refalrts::icSpliceElem, 0, 0, 47},
    {refalrts::icSpliceSTVar, 0, 0, 27},
    {refalrts::icSpliceSTVar, 0, 0, 26},
    {refalrts::icSpliceElem, 0, 0, 46},
    {refalrts::icSpliceElem, 0, 0, 45},
    {refalrts::icSpliceEVar, 0, 0, 17},
    {refalrts::icLinkBrackets, 43, 44, 0},
    {refalrts::icSpliceElem, 0, 0, 44},
    {refalrts::icSpliceEVar, 0, 0, 15},
    {refalrts::icSpliceElem, 0, 0, 43},
    {refalrts::icSpliceElem, 0, 0, 42},
    {refalrts::icSpliceEVar, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 41},
    {refalrts::icLinkBrackets, 34, 40, 0},
    {refalrts::icSpliceElem, 0, 0, 40},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icLinkBrackets, 35, 39, 0},
    {refalrts::icSpliceElem, 0, 0, 39},
    {refalrts::icSpliceElem, 0, 0, 38},
    {refalrts::icSpliceSTVar, 0, 0, 10},
    {refalrts::icLinkBrackets, 36, 37, 0},
    {refalrts::icSpliceElem, 0, 0, 37},
    {refalrts::icSpliceEVar, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 36},
    {refalrts::icSpliceElem, 0, 0, 35},
    {refalrts::icSpliceElem, 0, 0, 34},
    {refalrts::icSpliceElem, 0, 0, 33},
    {refalrts::icSpliceElem, 0, 0, 32},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +29, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( ( ( e.Name#1/6 ) # NotUsed e.Content#1/4 ) e.Sets#1/2 ) ( e.Rules#1/8 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 2},
    {refalrts::icBracketLeft, 0, 6, 4},
    {refalrts::icIdentLeft, 0, 3, 4},
    {refalrts::icBracketLeft, 0, 8, 0},
    {refalrts::icEmpty, 0, 0, 0},
    // closed e.Name#1 as range 6
    // closed e.Content#1 as range 4
    // closed e.Sets#1 as range 2
    // closed e.Rules#1 as range 8
    //2: e.Sets#1
    //4: e.Content#1
    //6: e.Name#1
    //8: e.Rules#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 10},
    {refalrts::icFunc, 0, 2, 11},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 12},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 13},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 14},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 15},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 16},
    {refalrts::icPushStack, 0, 0, 16},
    {refalrts::icPushStack, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icLinkBrackets, 14, 15, 0},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceEVar, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icLinkBrackets, 12, 13, 0},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +29, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( ( ( e.Name#1/6 ) # Used e.Content#1/4 ) e.Sets#1/2 ) ( e.Rules#1/8 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 2},
    {refalrts::icBracketLeft, 0, 6, 4},
    {refalrts::icIdentLeft, 0, 2, 4},
    {refalrts::icBracketLeft, 0, 8, 0},
    {refalrts::icEmpty, 0, 0, 0},
    // closed e.Name#1 as range 6
    // closed e.Content#1 as range 4
    // closed e.Sets#1 as range 2
    // closed e.Rules#1 as range 8
    //2: e.Sets#1
    //4: e.Content#1
    //6: e.Name#1
    //8: e.Rules#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 10},
    {refalrts::icFunc, 0, 2, 11},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 12},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 13},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 14},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 15},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 16},
    {refalrts::icPushStack, 0, 0, 16},
    {refalrts::icPushStack, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icLinkBrackets, 14, 15, 0},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceEVar, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icLinkBrackets, 12, 13, 0},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +68, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( ) ( e.Rules_B#1/6 ( ( e.RuleName#1/10 ) e.Alternatives_B#1/12 ( ( # Set t.SrcPos#1/18 'Any' ) t.Flush#1/19 t.NextState#1/20 ) e.Alternatives_E#1/23 ) e.Rules_E#1/21 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icEPrepare, 0, 6, 4},
    {refalrts::icEStart, 0, 6, 4},
    {refalrts::icSave, 0, 21, 4},
    {refalrts::icBracketLeft, 0, 8, 21},
    {refalrts::icBracketLeft, 0, 10, 8},
    // closed e.RuleName#1 as range 10
    // closed e.Rules_E#1 as range 4
    {refalrts::icEPrepare, 0, 12, 8},
    {refalrts::icEStart, 0, 12, 8},
    {refalrts::icSave, 0, 23, 8},
    {refalrts::icBracketLeft, 0, 14, 23},
    {refalrts::icBracketLeft, 0, 16, 14},
    {refalrts::icIdentLeft, 0, 0, 16},
    {refalrts::icCharRight, 0, static_cast<unsigned char>('y'), 16},
    {refalrts::icCharRight, 0, static_cast<unsigned char>('n'), 16},
    {refalrts::icCharRight, 0, static_cast<unsigned char>('A'), 16},
    // closed e.Alternatives_E#1 as range 8
    {refalrts::ictVarLeft, 0, 18, 16},
    {refalrts::icEmpty, 0, 0, 16},
    {refalrts::ictVarLeft, 0, 19, 14},
    {refalrts::ictVarLeft, 0, 20, 14},
    {refalrts::icEmpty, 0, 0, 14},
    //6: e.Rules_B#1
    //10: e.RuleName#1
    //12: e.Alternatives_B#1
    //18: t.SrcPos#1
    //19: t.Flush#1
    //20: t.NextState#1
    //21: e.Rules_E#1
    //23: e.Alternatives_E#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 25},
    {refalrts::icFunc, 0, 2, 26},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 27},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 28},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 29},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 30},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 31},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 32},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 33},
    {refalrts::icIdent, 0, 1, 34},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 35},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 36},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 37},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 38},
    {refalrts::icPushStack, 0, 0, 38},
    {refalrts::icPushStack, 0, 0, 25},
    {refalrts::icSpliceElem, 0, 0, 38},
    {refalrts::icLinkBrackets, 29, 37, 0},
    {refalrts::icSpliceElem, 0, 0, 37},
    {refalrts::icSpliceEVar, 0, 0, 21},
    {refalrts::icLinkBrackets, 30, 36, 0},
    {refalrts::icSpliceElem, 0, 0, 36},
    {refalrts::icSpliceEVar, 0, 0, 23},
    {refalrts::icLinkBrackets, 33, 35, 0},
    {refalrts::icSpliceElem, 0, 0, 35},
    {refalrts::icSpliceSTVar, 0, 0, 20},
    {refalrts::icSpliceSTVar, 0, 0, 19},
    {refalrts::icSpliceElem, 0, 0, 34},
    {refalrts::icSpliceElem, 0, 0, 33},
    {refalrts::icSpliceEVar, 0, 0, 12},
    {refalrts::icLinkBrackets, 31, 32, 0},
    {refalrts::icSpliceElem, 0, 0, 32},
    {refalrts::icSpliceEVar, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 31},
    {refalrts::icSpliceElem, 0, 0, 30},
    {refalrts::icSpliceEVar, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 29},
    {refalrts::icLinkBrackets, 27, 28, 0},
    {refalrts::icSpliceElem, 0, 0, 28},
    {refalrts::icSpliceElem, 0, 0, 27},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +34, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( ) ( e.Rules_B#1/6 ( ( e.RuleName#1/10 ) e.Alternatives_B#1/12 ( ( # Set s.LineNumber#1/18 e.Name#1/16 ) t.Flush#1/19 t.NextState#1/20 ) e.Alternatives_E#1/23 ) e.Rules_E#1/21 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icEPrepare, 0, 6, 4},
    {refalrts::icEStart, 0, 6, 4},
    {refalrts::icSave, 0, 21, 4},
    {refalrts::icBracketLeft, 0, 8, 21},
    {refalrts::icBracketLeft, 0, 10, 8},
    // closed e.RuleName#1 as range 10
    // closed e.Rules_E#1 as range 4
    {refalrts::icEPrepare, 0, 12, 8},
    {refalrts::icEStart, 0, 12, 8},
    {refalrts::icSave, 0, 23, 8},
    {refalrts::icBracketLeft, 0, 14, 23},
    {refalrts::icBracketLeft, 0, 16, 14},
    {refalrts::icIdentLeft, 0, 0, 16},
    // closed e.Alternatives_E#1 as range 8
    {refalrts::icsVarLeft, 0, 18, 16},
    // closed e.Name#1 as range 16
    {refalrts::ictVarLeft, 0, 19, 14},
    {refalrts::ictVarLeft, 0, 20, 14},
    {refalrts::icEmpty, 0, 0, 14},
    //6: e.Rules_B#1
    //10: e.RuleName#1
    //12: e.Alternatives_B#1
    //16: e.Name#1
    //18: s.LineNumber#1
    //19: t.Flush#1
    //20: t.NextState#1
    //21: e.Rules_E#1
    //23: e.Alternatives_E#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 25},
    {refalrts::icFunc, 0, 1, 26},
    {refalrts::icString, 0, 0, 27},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 29},
    {refalrts::icPushStack, 0, 0, 29},
    {refalrts::icPushStack, 0, 0, 25},
    {refalrts::icSpliceElem, 0, 0, 29},
    {refalrts::icSpliceEVar, 0, 0, 16},
    {refalrts::icSpliceRange, 0, 0, 27},
    {refalrts::icSpliceSTVar, 0, 0, 18},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( ) ( e.Rules#1/4 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icEmpty, 0, 0, 0},
    // closed e.Rules#1 as range 4
    //4: e.Rules#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 6},
    {refalrts::icFunc, 0, 0, 7},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 8},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icPushStack, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceEVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[14];
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
    // ( ( ( e.Name#1/6 ) s.Used#1/10 # Chars e.Content#1/4 ) e.Sets#1/2 ) ( e.Rules_B#1/11 ( ( e.RuleName#1/15 ) e.Alternatives_B#1/17 ( ( # Set t.SrcPos#1/25 e.Name#1/23 ) t.Flush#1/26 t.NextState#1/27 ) e.Alternatives_E#1/30 ) e.Rules_E#1/28 )
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
    if( ! refalrts::brackets_left( context[6], context[7], context[4], context[5] ) )
      continue;
    context[8] = 0;
    context[9] = 0;
    if( ! refalrts::brackets_left( context[8], context[9], context[0], context[1] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    // closed e.Name#1 as range 6
    // closed e.Sets#1 as range 2
    if( ! refalrts::svar_left( context[10], context[4], context[5] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_Chars<int>::name, context[4], context[5] ) )
      continue;
    // closed e.Content#1 as range 4
    context[11] = 0;
    context[12] = 0;
    refalrts::start_e_loop();
    do {
      context[28] = context[8];
      context[29] = context[9];
      context[13] = 0;
      context[14] = 0;
      if( ! refalrts::brackets_left( context[13], context[14], context[28], context[29] ) )
        continue;
      context[15] = 0;
      context[16] = 0;
      if( ! refalrts::brackets_left( context[15], context[16], context[13], context[14] ) )
        continue;
      // closed e.RuleName#1 as range 15
      // closed e.Rules_E#1 as range 8
      context[17] = 0;
      context[18] = 0;
      refalrts::start_e_loop();
      do {
        context[30] = context[13];
        context[31] = context[14];
        context[19] = 0;
        context[20] = 0;
        if( ! refalrts::brackets_left( context[19], context[20], context[30], context[31] ) )
          continue;
        context[21] = 0;
        context[22] = 0;
        if( ! refalrts::brackets_left( context[21], context[22], context[19], context[20] ) )
          continue;
        if( ! refalrts::ident_left(  & ident_Set<int>::name, context[21], context[22] ) )
          continue;
        if( ! refalrts::repeated_evar_right( context[23], context[24], context[6], context[7], context[21], context[22] ) )
          continue;
        // closed e.Alternatives_E#1 as range 13
        if( ! refalrts::tvar_left( context[25], context[21], context[22] ) )
          continue;
        if( ! refalrts::empty_seq( context[21], context[22] ) )
          continue;
        if( ! refalrts::tvar_left( context[26], context[19], context[20] ) )
          continue;
        if( ! refalrts::tvar_left( context[27], context[19], context[20] ) )
          continue;
        if( ! refalrts::empty_seq( context[19], context[20] ) )
          continue;
        //2: e.Sets#1
        //4: e.Content#1
        //6: e.Name#1
        //10: s.Used#1
        //11: e.Rules_B#1
        //15: e.RuleName#1
        //17: e.Alternatives_B#1
        //23: e.Name#1
        //25: t.SrcPos#1
        //26: t.Flush#1
        //27: t.NextState#1
        //28: e.Rules_E#1
        //30: e.Alternatives_E#1
        //49: e.Content#1

        refalrts::reset_allocator();
        refalrts::Iter res = arg_begin;
        if( ! refalrts::alloc_open_call( context[32] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_name( context[33], SubstituteSetsToRules, "SubstituteSetsToRules" ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_open_bracket( context[34] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_open_bracket( context[35] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_open_bracket( context[36] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_bracket( context[37] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_ident( context[38], & ident_Used<int>::name ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_ident( context[39], & ident_Chars<int>::name ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_bracket( context[40] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_bracket( context[41] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_open_bracket( context[42] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_open_bracket( context[43] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_open_bracket( context[44] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_bracket( context[45] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_open_bracket( context[46] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_open_bracket( context[47] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_ident( context[48], & ident_Chars<int>::name ) )
          return refalrts::cNoMemory;
        if (! refalrts::copy_evar(context[49], context[50], context[4], context[5]))
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_bracket( context[51] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_bracket( context[52] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_bracket( context[53] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_bracket( context[54] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_call( context[55] ) )
          return refalrts::cNoMemory;
        refalrts::push_stack( context[55] );
        refalrts::push_stack( context[32] );
        res = refalrts::splice_elem( res, context[55] );
        refalrts::link_brackets( context[42], context[54] );
        res = refalrts::splice_elem( res, context[54] );
        res = refalrts::splice_evar( res, context[28], context[29] );
        refalrts::link_brackets( context[43], context[53] );
        res = refalrts::splice_elem( res, context[53] );
        res = refalrts::splice_evar( res, context[30], context[31] );
        refalrts::link_brackets( context[46], context[52] );
        res = refalrts::splice_elem( res, context[52] );
        res = refalrts::splice_stvar( res, context[27] );
        res = refalrts::splice_stvar( res, context[26] );
        refalrts::link_brackets( context[47], context[51] );
        res = refalrts::splice_elem( res, context[51] );
        res = refalrts::splice_evar( res, context[49], context[50] );
        res = refalrts::splice_elem( res, context[48] );
        res = refalrts::splice_elem( res, context[47] );
        res = refalrts::splice_elem( res, context[46] );
        res = refalrts::splice_evar( res, context[17], context[18] );
        refalrts::link_brackets( context[44], context[45] );
        res = refalrts::splice_elem( res, context[45] );
        res = refalrts::splice_evar( res, context[15], context[16] );
        res = refalrts::splice_elem( res, context[44] );
        res = refalrts::splice_elem( res, context[43] );
        res = refalrts::splice_evar( res, context[11], context[12] );
        res = refalrts::splice_elem( res, context[42] );
        refalrts::link_brackets( context[34], context[41] );
        res = refalrts::splice_elem( res, context[41] );
        res = refalrts::splice_evar( res, context[2], context[3] );
        refalrts::link_brackets( context[35], context[40] );
        res = refalrts::splice_elem( res, context[40] );
        res = refalrts::splice_evar( res, context[4], context[5] );
        res = refalrts::splice_elem( res, context[39] );
        res = refalrts::splice_elem( res, context[38] );
        refalrts::link_brackets( context[36], context[37] );
        res = refalrts::splice_elem( res, context[37] );
        res = refalrts::splice_evar( res, context[6], context[7] );
        res = refalrts::splice_elem( res, context[36] );
        res = refalrts::splice_elem( res, context[35] );
        res = refalrts::splice_elem( res, context[34] );
        res = refalrts::splice_elem( res, context[33] );
        res = refalrts::splice_elem( res, context[32] );
        refalrts::use( res );
        refalrts::splice_to_freelist( arg_begin, arg_end );
        return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
      } while ( refalrts::open_evar_advance( context[17], context[18], context[13], context[14] ) );
    } while ( refalrts::open_evar_advance( context[11], context[12], context[8], context[9] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    // ( ( ( e.Name#1/6 ) s.Used#1/10 # Any ) e.Sets#1/2 ) ( e.Rules_B#1/11 ( ( e.RuleName#1/15 ) e.Alternatives_B#1/17 ( ( # Set t.SrcPos#1/25 e.Name#1/23 ) t.Flush#1/26 t.NextState#1/27 ) e.Alternatives_E#1/30 ) e.Rules_E#1/28 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[2], context[3] ) )
      continue;
    if( ! refalrts::ident_right(  & ident_Any<int>::name, context[4], context[5] ) )
      continue;
    context[6] = 0;
    context[7] = 0;
    if( ! refalrts::brackets_left( context[6], context[7], context[4], context[5] ) )
      continue;
    context[8] = 0;
    context[9] = 0;
    if( ! refalrts::brackets_left( context[8], context[9], context[0], context[1] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    // closed e.Name#1 as range 6
    // closed e.Sets#1 as range 2
    if( ! refalrts::svar_left( context[10], context[4], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[4], context[5] ) )
      continue;
    context[11] = 0;
    context[12] = 0;
    refalrts::start_e_loop();
    do {
      context[28] = context[8];
      context[29] = context[9];
      context[13] = 0;
      context[14] = 0;
      if( ! refalrts::brackets_left( context[13], context[14], context[28], context[29] ) )
        continue;
      context[15] = 0;
      context[16] = 0;
      if( ! refalrts::brackets_left( context[15], context[16], context[13], context[14] ) )
        continue;
      // closed e.RuleName#1 as range 15
      // closed e.Rules_E#1 as range 8
      context[17] = 0;
      context[18] = 0;
      refalrts::start_e_loop();
      do {
        context[30] = context[13];
        context[31] = context[14];
        context[19] = 0;
        context[20] = 0;
        if( ! refalrts::brackets_left( context[19], context[20], context[30], context[31] ) )
          continue;
        context[21] = 0;
        context[22] = 0;
        if( ! refalrts::brackets_left( context[21], context[22], context[19], context[20] ) )
          continue;
        if( ! refalrts::ident_left(  & ident_Set<int>::name, context[21], context[22] ) )
          continue;
        if( ! refalrts::repeated_evar_right( context[23], context[24], context[6], context[7], context[21], context[22] ) )
          continue;
        // closed e.Alternatives_E#1 as range 13
        if( ! refalrts::tvar_left( context[25], context[21], context[22] ) )
          continue;
        if( ! refalrts::empty_seq( context[21], context[22] ) )
          continue;
        if( ! refalrts::tvar_left( context[26], context[19], context[20] ) )
          continue;
        if( ! refalrts::tvar_left( context[27], context[19], context[20] ) )
          continue;
        if( ! refalrts::empty_seq( context[19], context[20] ) )
          continue;
        //2: e.Sets#1
        //6: e.Name#1
        //10: s.Used#1
        //11: e.Rules_B#1
        //15: e.RuleName#1
        //17: e.Alternatives_B#1
        //23: e.Name#1
        //25: t.SrcPos#1
        //26: t.Flush#1
        //27: t.NextState#1
        //28: e.Rules_E#1
        //30: e.Alternatives_E#1

        refalrts::reset_allocator();
        refalrts::Iter res = arg_begin;
        if( ! refalrts::alloc_open_call( context[32] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_name( context[33], SubstituteSetsToRules, "SubstituteSetsToRules" ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_open_bracket( context[34] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_open_bracket( context[35] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_open_bracket( context[36] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_bracket( context[37] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_ident( context[38], & ident_Any<int>::name ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_bracket( context[39] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_bracket( context[40] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_open_bracket( context[41] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_open_bracket( context[42] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_open_bracket( context[43] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_bracket( context[44] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_open_bracket( context[45] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_ident( context[46], & ident_Any<int>::name ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_bracket( context[47] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_bracket( context[48] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_bracket( context[49] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_call( context[50] ) )
          return refalrts::cNoMemory;
        refalrts::push_stack( context[50] );
        refalrts::push_stack( context[32] );
        res = refalrts::splice_elem( res, context[50] );
        refalrts::link_brackets( context[41], context[49] );
        res = refalrts::splice_elem( res, context[49] );
        res = refalrts::splice_evar( res, context[28], context[29] );
        refalrts::link_brackets( context[42], context[48] );
        res = refalrts::splice_elem( res, context[48] );
        res = refalrts::splice_evar( res, context[30], context[31] );
        refalrts::link_brackets( context[45], context[47] );
        res = refalrts::splice_elem( res, context[47] );
        res = refalrts::splice_stvar( res, context[27] );
        res = refalrts::splice_stvar( res, context[26] );
        res = refalrts::splice_elem( res, context[46] );
        res = refalrts::splice_elem( res, context[45] );
        res = refalrts::splice_evar( res, context[17], context[18] );
        refalrts::link_brackets( context[43], context[44] );
        res = refalrts::splice_elem( res, context[44] );
        res = refalrts::splice_evar( res, context[15], context[16] );
        res = refalrts::splice_elem( res, context[43] );
        res = refalrts::splice_elem( res, context[42] );
        res = refalrts::splice_evar( res, context[11], context[12] );
        res = refalrts::splice_elem( res, context[41] );
        refalrts::link_brackets( context[34], context[40] );
        res = refalrts::splice_elem( res, context[40] );
        res = refalrts::splice_evar( res, context[2], context[3] );
        refalrts::link_brackets( context[35], context[39] );
        res = refalrts::splice_elem( res, context[39] );
        res = refalrts::splice_elem( res, context[38] );
        res = refalrts::splice_stvar( res, context[10] );
        refalrts::link_brackets( context[36], context[37] );
        res = refalrts::splice_elem( res, context[37] );
        res = refalrts::splice_evar( res, context[6], context[7] );
        res = refalrts::splice_elem( res, context[36] );
        res = refalrts::splice_elem( res, context[35] );
        res = refalrts::splice_elem( res, context[34] );
        res = refalrts::splice_elem( res, context[33] );
        res = refalrts::splice_elem( res, context[32] );
        refalrts::use( res );
        refalrts::splice_to_freelist( arg_begin, arg_end );
        return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
      } while ( refalrts::open_evar_advance( context[17], context[18], context[13], context[14] ) );
    } while ( refalrts::open_evar_advance( context[11], context[12], context[8], context[9] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    // ( ( ( e.Name#1/6 ) # NotUsed e.Content#1/4 ) e.Sets#1/2 ) ( e.Rules#1/8 )
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
    if( ! refalrts::brackets_left( context[6], context[7], context[4], context[5] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_NotUsed<int>::name, context[4], context[5] ) )
      continue;
    context[8] = 0;
    context[9] = 0;
    if( ! refalrts::brackets_left( context[8], context[9], context[0], context[1] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    // closed e.Name#1 as range 6
    // closed e.Content#1 as range 4
    // closed e.Sets#1 as range 2
    // closed e.Rules#1 as range 8
    //2: e.Sets#1
    //4: e.Content#1
    //6: e.Name#1
    //8: e.Rules#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[11], SubstituteSetsToRules, "SubstituteSetsToRules" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[12] ) )
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
    refalrts::push_stack( context[10] );
    res = refalrts::splice_elem( res, context[16] );
    refalrts::link_brackets( context[14], context[15] );
    res = refalrts::splice_elem( res, context[15] );
    res = refalrts::splice_evar( res, context[8], context[9] );
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
    // ( ( ( e.Name#1/6 ) # Used e.Content#1/4 ) e.Sets#1/2 ) ( e.Rules#1/8 )
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
    if( ! refalrts::brackets_left( context[6], context[7], context[4], context[5] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_Used<int>::name, context[4], context[5] ) )
      continue;
    context[8] = 0;
    context[9] = 0;
    if( ! refalrts::brackets_left( context[8], context[9], context[0], context[1] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    // closed e.Name#1 as range 6
    // closed e.Content#1 as range 4
    // closed e.Sets#1 as range 2
    // closed e.Rules#1 as range 8
    //2: e.Sets#1
    //4: e.Content#1
    //6: e.Name#1
    //8: e.Rules#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[11], SubstituteSetsToRules, "SubstituteSetsToRules" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[12] ) )
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
    refalrts::push_stack( context[10] );
    res = refalrts::splice_elem( res, context[16] );
    refalrts::link_brackets( context[14], context[15] );
    res = refalrts::splice_elem( res, context[15] );
    res = refalrts::splice_evar( res, context[8], context[9] );
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
    // ( ) ( e.Rules_B#1/6 ( ( e.RuleName#1/10 ) e.Alternatives_B#1/12 ( ( # Set t.SrcPos#1/18 'Any' ) t.Flush#1/19 t.NextState#1/20 ) e.Alternatives_E#1/23 ) e.Rules_E#1/21 )
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
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    context[6] = 0;
    context[7] = 0;
    refalrts::start_e_loop();
    do {
      context[21] = context[4];
      context[22] = context[5];
      context[8] = 0;
      context[9] = 0;
      if( ! refalrts::brackets_left( context[8], context[9], context[21], context[22] ) )
        continue;
      context[10] = 0;
      context[11] = 0;
      if( ! refalrts::brackets_left( context[10], context[11], context[8], context[9] ) )
        continue;
      // closed e.RuleName#1 as range 10
      // closed e.Rules_E#1 as range 4
      context[12] = 0;
      context[13] = 0;
      refalrts::start_e_loop();
      do {
        context[23] = context[8];
        context[24] = context[9];
        context[14] = 0;
        context[15] = 0;
        if( ! refalrts::brackets_left( context[14], context[15], context[23], context[24] ) )
          continue;
        context[16] = 0;
        context[17] = 0;
        if( ! refalrts::brackets_left( context[16], context[17], context[14], context[15] ) )
          continue;
        if( ! refalrts::ident_left(  & ident_Set<int>::name, context[16], context[17] ) )
          continue;
        if( ! refalrts::char_right( 'y', context[16], context[17] ) )
          continue;
        if( ! refalrts::char_right( 'n', context[16], context[17] ) )
          continue;
        if( ! refalrts::char_right( 'A', context[16], context[17] ) )
          continue;
        // closed e.Alternatives_E#1 as range 8
        if( ! refalrts::tvar_left( context[18], context[16], context[17] ) )
          continue;
        if( ! refalrts::empty_seq( context[16], context[17] ) )
          continue;
        if( ! refalrts::tvar_left( context[19], context[14], context[15] ) )
          continue;
        if( ! refalrts::tvar_left( context[20], context[14], context[15] ) )
          continue;
        if( ! refalrts::empty_seq( context[14], context[15] ) )
          continue;
        //6: e.Rules_B#1
        //10: e.RuleName#1
        //12: e.Alternatives_B#1
        //18: t.SrcPos#1
        //19: t.Flush#1
        //20: t.NextState#1
        //21: e.Rules_E#1
        //23: e.Alternatives_E#1

        refalrts::reset_allocator();
        refalrts::Iter res = arg_begin;
        if( ! refalrts::alloc_open_call( context[25] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_name( context[26], SubstituteSetsToRules, "SubstituteSetsToRules" ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_open_bracket( context[27] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_bracket( context[28] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_open_bracket( context[29] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_open_bracket( context[30] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_open_bracket( context[31] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_bracket( context[32] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_open_bracket( context[33] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_ident( context[34], & ident_Any<int>::name ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_bracket( context[35] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_bracket( context[36] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_bracket( context[37] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_call( context[38] ) )
          return refalrts::cNoMemory;
        refalrts::push_stack( context[38] );
        refalrts::push_stack( context[25] );
        res = refalrts::splice_elem( res, context[38] );
        refalrts::link_brackets( context[29], context[37] );
        res = refalrts::splice_elem( res, context[37] );
        res = refalrts::splice_evar( res, context[21], context[22] );
        refalrts::link_brackets( context[30], context[36] );
        res = refalrts::splice_elem( res, context[36] );
        res = refalrts::splice_evar( res, context[23], context[24] );
        refalrts::link_brackets( context[33], context[35] );
        res = refalrts::splice_elem( res, context[35] );
        res = refalrts::splice_stvar( res, context[20] );
        res = refalrts::splice_stvar( res, context[19] );
        res = refalrts::splice_elem( res, context[34] );
        res = refalrts::splice_elem( res, context[33] );
        res = refalrts::splice_evar( res, context[12], context[13] );
        refalrts::link_brackets( context[31], context[32] );
        res = refalrts::splice_elem( res, context[32] );
        res = refalrts::splice_evar( res, context[10], context[11] );
        res = refalrts::splice_elem( res, context[31] );
        res = refalrts::splice_elem( res, context[30] );
        res = refalrts::splice_evar( res, context[6], context[7] );
        res = refalrts::splice_elem( res, context[29] );
        refalrts::link_brackets( context[27], context[28] );
        res = refalrts::splice_elem( res, context[28] );
        res = refalrts::splice_elem( res, context[27] );
        res = refalrts::splice_elem( res, context[26] );
        res = refalrts::splice_elem( res, context[25] );
        refalrts::use( res );
        refalrts::splice_to_freelist( arg_begin, arg_end );
        return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
      } while ( refalrts::open_evar_advance( context[12], context[13], context[8], context[9] ) );
    } while ( refalrts::open_evar_advance( context[6], context[7], context[4], context[5] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    // ( ) ( e.Rules_B#1/6 ( ( e.RuleName#1/10 ) e.Alternatives_B#1/12 ( ( # Set s.LineNumber#1/18 e.Name#1/16 ) t.Flush#1/19 t.NextState#1/20 ) e.Alternatives_E#1/23 ) e.Rules_E#1/21 )
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
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    context[6] = 0;
    context[7] = 0;
    refalrts::start_e_loop();
    do {
      context[21] = context[4];
      context[22] = context[5];
      context[8] = 0;
      context[9] = 0;
      if( ! refalrts::brackets_left( context[8], context[9], context[21], context[22] ) )
        continue;
      context[10] = 0;
      context[11] = 0;
      if( ! refalrts::brackets_left( context[10], context[11], context[8], context[9] ) )
        continue;
      // closed e.RuleName#1 as range 10
      // closed e.Rules_E#1 as range 4
      context[12] = 0;
      context[13] = 0;
      refalrts::start_e_loop();
      do {
        context[23] = context[8];
        context[24] = context[9];
        context[14] = 0;
        context[15] = 0;
        if( ! refalrts::brackets_left( context[14], context[15], context[23], context[24] ) )
          continue;
        context[16] = 0;
        context[17] = 0;
        if( ! refalrts::brackets_left( context[16], context[17], context[14], context[15] ) )
          continue;
        if( ! refalrts::ident_left(  & ident_Set<int>::name, context[16], context[17] ) )
          continue;
        // closed e.Alternatives_E#1 as range 8
        if( ! refalrts::svar_left( context[18], context[16], context[17] ) )
          continue;
        // closed e.Name#1 as range 16
        if( ! refalrts::tvar_left( context[19], context[14], context[15] ) )
          continue;
        if( ! refalrts::tvar_left( context[20], context[14], context[15] ) )
          continue;
        if( ! refalrts::empty_seq( context[14], context[15] ) )
          continue;
        //6: e.Rules_B#1
        //10: e.RuleName#1
        //12: e.Alternatives_B#1
        //16: e.Name#1
        //18: s.LineNumber#1
        //19: t.Flush#1
        //20: t.NextState#1
        //21: e.Rules_E#1
        //23: e.Alternatives_E#1

        refalrts::reset_allocator();
        refalrts::Iter res = arg_begin;
        if( ! refalrts::alloc_open_call( context[25] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_name( context[26], ErrorAt, "ErrorAt" ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_chars( context[27], context[28], "Undeclared set ", 15 ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_call( context[29] ) )
          return refalrts::cNoMemory;
        refalrts::push_stack( context[29] );
        refalrts::push_stack( context[25] );
        res = refalrts::splice_elem( res, context[29] );
        res = refalrts::splice_evar( res, context[16], context[17] );
        res = refalrts::splice_evar( res, context[27], context[28] );
        res = refalrts::splice_stvar( res, context[18] );
        res = refalrts::splice_elem( res, context[26] );
        res = refalrts::splice_elem( res, context[25] );
        refalrts::use( res );
        refalrts::splice_to_freelist( arg_begin, arg_end );
        return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
      } while ( refalrts::open_evar_advance( context[12], context[13], context[8], context[9] ) );
    } while ( refalrts::open_evar_advance( context[6], context[7], context[4], context[5] ) );
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  refalrts::move_left( context[0], context[1] );
  refalrts::move_left( context[0], context[1] );
  refalrts::move_right( context[0], context[1] );
  // ( ) ( e.Rules#1/4 )
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[4] = 0;
  context[5] = 0;
  if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Rules#1 as range 4
  //4: e.Rules#1

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_call( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[7], GenerateSentences, "GenerateSentences" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[8] ) )
    return refalrts::cNoMemory;
  refalrts::push_stack( context[8] );
  refalrts::push_stack( context[6] );
  res = refalrts::splice_elem( res, context[8] );
  res = refalrts::splice_evar( res, context[4], context[5] );
  res = refalrts::splice_elem( res, context[7] );
  res = refalrts::splice_elem( res, context[6] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult GenerateSentences(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { NormalizeRule, "NormalizeRule" },
    { Map, "Map" },
    { WriteCode, "WriteCode" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    // e.Rules#1/0
    // closed e.Rules#1 as range 0
    //0: e.Rules#1
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
  // e.Rules#1/0
  // closed e.Rules#1 as range 0
  //0: e.Rules#1

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_call( context[2] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[3], WriteCode, "WriteCode" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[4] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[5], Map, "Map" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[6], NormalizeRule, "NormalizeRule" ) )
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

static refalrts::FnResult SetDiff(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 25 elems
  refalrts::Iter context[25];
  refalrts::zeros( context, 25 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { SetDiff, "SetDiff" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_Any<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +8, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Set#1/2 ) ( # Any )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icIdentLeft, 0, 0, 4},
    {refalrts::icEmpty, 0, 0, 4},
    {refalrts::icEmpty, 0, 0, 0},
    // closed e.Set#1 as range 2
    //2: e.Set#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +37, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Set1_B#1/6 s.Common#1/8 e.Set1_E#1/12 ) ( e.Set2_B#1/9 s.Common#1/11 e.Set2_E#1/16 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icEPrepare, 0, 6, 2},
    {refalrts::icEStart, 0, 6, 2},
    {refalrts::icSave, 0, 12, 2},
    {refalrts::icSave, 0, 14, 4},
    {refalrts::icsVarLeft, 0, 8, 12},
    // closed e.Set1_E#1 as range 2
    {refalrts::icEPrepare, 0, 9, 14},
    {refalrts::icEStart, 0, 9, 14},
    {refalrts::icSave, 0, 16, 14},
    {refalrts::icsRepeatLeft, 11, 8, 16},
    // closed e.Set2_E#1 as range 4
    //6: e.Set1_B#1
    //8: s.Common#1
    //9: e.Set2_B#1
    //11: s.Common#1
    //12: e.Set1_E#1
    //16: e.Set2_E#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 18},
    {refalrts::icFunc, 0, 0, 19},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 20},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 21},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 22},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 23},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 24},
    {refalrts::icPushStack, 0, 0, 24},
    {refalrts::icPushStack, 0, 0, 18},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icLinkBrackets, 22, 23, 0},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icSpliceEVar, 0, 0, 16},
    {refalrts::icSpliceEVar, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icLinkBrackets, 20, 21, 0},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceEVar, 0, 0, 12},
    {refalrts::icSpliceEVar, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.SetDiff#1/2 ) ( e.Set2#1/4 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icEmpty, 0, 0, 0},
    // closed e.SetDiff#1 as range 2
    // closed e.Set2#1 as range 4
    //2: e.SetDiff#1
    //4: e.Set2#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icSpliceEVar, 0, 0, 2},
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
    // ( e.Set#1/2 ) ( # Any )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_Any<int>::name, context[4], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[4], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    // closed e.Set#1 as range 2
    //2: e.Set#1

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
    // ( e.Set1_B#1/6 s.Common#1/8 e.Set1_E#1/12 ) ( e.Set2_B#1/9 s.Common#1/11 e.Set2_E#1/16 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    context[6] = 0;
    context[7] = 0;
    refalrts::start_e_loop();
    do {
      context[12] = context[2];
      context[13] = context[3];
      context[14] = context[4];
      context[15] = context[5];
      if( ! refalrts::svar_left( context[8], context[12], context[13] ) )
        continue;
      // closed e.Set1_E#1 as range 2
      context[9] = 0;
      context[10] = 0;
      refalrts::start_e_loop();
      do {
        context[16] = context[14];
        context[17] = context[15];
        if( ! refalrts::repeated_stvar_left( context[11], context[8], context[16], context[17] ) )
          continue;
        // closed e.Set2_E#1 as range 4
        //6: e.Set1_B#1
        //8: s.Common#1
        //9: e.Set2_B#1
        //11: s.Common#1
        //12: e.Set1_E#1
        //16: e.Set2_E#1

        refalrts::reset_allocator();
        refalrts::Iter res = arg_begin;
        if( ! refalrts::alloc_open_call( context[18] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_name( context[19], SetDiff, "SetDiff" ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_open_bracket( context[20] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_bracket( context[21] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_open_bracket( context[22] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_bracket( context[23] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_call( context[24] ) )
          return refalrts::cNoMemory;
        refalrts::push_stack( context[24] );
        refalrts::push_stack( context[18] );
        res = refalrts::splice_elem( res, context[24] );
        refalrts::link_brackets( context[22], context[23] );
        res = refalrts::splice_elem( res, context[23] );
        res = refalrts::splice_evar( res, context[16], context[17] );
        res = refalrts::splice_evar( res, context[9], context[10] );
        res = refalrts::splice_elem( res, context[22] );
        refalrts::link_brackets( context[20], context[21] );
        res = refalrts::splice_elem( res, context[21] );
        res = refalrts::splice_evar( res, context[12], context[13] );
        res = refalrts::splice_evar( res, context[6], context[7] );
        res = refalrts::splice_elem( res, context[20] );
        res = refalrts::splice_elem( res, context[19] );
        res = refalrts::splice_elem( res, context[18] );
        refalrts::use( res );
        refalrts::splice_to_freelist( arg_begin, arg_end );
        return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
      } while ( refalrts::open_evar_advance( context[9], context[10], context[14], context[15] ) );
    } while ( refalrts::open_evar_advance( context[6], context[7], context[2], context[3] ) );
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  refalrts::move_left( context[0], context[1] );
  refalrts::move_left( context[0], context[1] );
  refalrts::move_right( context[0], context[1] );
  // ( e.SetDiff#1/2 ) ( e.Set2#1/4 )
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
  // closed e.SetDiff#1 as range 2
  // closed e.Set2#1 as range 4
  //2: e.SetDiff#1
  //4: e.Set2#1

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult NormalizeAlternative(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 30 elems
  refalrts::Iter context[30];
  refalrts::zeros( context, 30 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { SetDiff, "SetDiff" },
    { NormingSet, "NormingSet" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_Empty<int>::name,
    & ident_Any<int>::name,
    & ident_Chars<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +60, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Diff#1/2 ) ( ( # Chars e.Alternative#1/6 ) t.Flush#1/8 t.Next#1/9 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icBracketLeft, 0, 6, 4},
    {refalrts::icIdentLeft, 0, 2, 6},
    {refalrts::icEmpty, 0, 0, 0},
    // closed e.Diff#1 as range 2
    // closed e.Alternative#1 as range 6
    {refalrts::ictVarLeft, 0, 8, 4},
    {refalrts::ictVarLeft, 0, 9, 4},
    {refalrts::icEmpty, 0, 0, 4},
    //2: e.Diff#1
    //6: e.Alternative#1
    //8: t.Flush#1
    //9: t.Next#1
    //20: e.Alternative#1
    //24: e.Diff#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 10},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 11},
    {refalrts::icFunc, 0, 1, 12},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 13},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 14},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 15},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 16},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 17},
    {refalrts::icFunc, 0, 0, 18},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 19},
    {refalrts::icCopyEVar, 20, 6, 0},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 22},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 23},
    {refalrts::icCopyEVar, 24, 2, 0},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 26},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 27},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 28},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 29},
    {refalrts::icLinkBrackets, 15, 29, 0},
    {refalrts::icSpliceElem, 0, 0, 29},
    {refalrts::icSpliceSTVar, 0, 0, 9},
    {refalrts::icSpliceSTVar, 0, 0, 8},
    {refalrts::icLinkBrackets, 16, 28, 0},
    {refalrts::icSpliceElem, 0, 0, 28},
    {refalrts::icPushStack, 0, 0, 27},
    {refalrts::icPushStack, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 27},
    {refalrts::icLinkBrackets, 23, 26, 0},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icSpliceEVar, 0, 0, 24},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icLinkBrackets, 19, 22, 0},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceEVar, 0, 0, 20},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icLinkBrackets, 10, 14, 0},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icPushStack, 0, 0, 13},
    {refalrts::icPushStack, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceEVar, 0, 0, 6},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +26, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Diff#1/2 ) ( # Any t.Flush#1/6 t.Next#1/7 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icIdentLeft, 0, 1, 4},
    {refalrts::icEmpty, 0, 0, 0},
    // closed e.Diff#1 as range 2
    {refalrts::ictVarLeft, 0, 6, 4},
    {refalrts::ictVarLeft, 0, 7, 4},
    {refalrts::icEmpty, 0, 0, 4},
    //2: e.Diff#1
    //6: t.Flush#1
    //7: t.Next#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icIdent, 0, 1, 9},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 10},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 11},
    {refalrts::icIdent, 0, 1, 12},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 13},
    {refalrts::icLinkBrackets, 11, 13, 0},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceSTVar, 0, 0, 7},
    {refalrts::icSpliceSTVar, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icLinkBrackets, 8, 10, 0},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Diff#1/2 ) ( # Empty t.Flush#1/6 t.Next#1/7 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icIdentLeft, 0, 0, 4},
    {refalrts::icEmpty, 0, 0, 0},
    // closed e.Diff#1 as range 2
    {refalrts::ictVarLeft, 0, 6, 4},
    {refalrts::ictVarLeft, 0, 7, 4},
    {refalrts::icEmpty, 0, 0, 4},
    //2: e.Diff#1
    //6: t.Flush#1
    //7: t.Next#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 9},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 10},
    {refalrts::icIdent, 0, 0, 11},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 12},
    {refalrts::icLinkBrackets, 10, 12, 0},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceSTVar, 0, 0, 7},
    {refalrts::icSpliceSTVar, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icLinkBrackets, 8, 9, 0},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 8},
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
    // ( e.Diff#1/2 ) ( ( # Chars e.Alternative#1/6 ) t.Flush#1/8 t.Next#1/9 )
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
    if( ! refalrts::brackets_left( context[6], context[7], context[4], context[5] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_Chars<int>::name, context[6], context[7] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    // closed e.Diff#1 as range 2
    // closed e.Alternative#1 as range 6
    if( ! refalrts::tvar_left( context[8], context[4], context[5] ) )
      continue;
    if( ! refalrts::tvar_left( context[9], context[4], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[4], context[5] ) )
      continue;
    //2: e.Diff#1
    //6: e.Alternative#1
    //8: t.Flush#1
    //9: t.Next#1
    //20: e.Alternative#1
    //24: e.Diff#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[12], NormingSet, "NormingSet" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[15] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[17] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[18], SetDiff, "SetDiff" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[19] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[20], context[21], context[6], context[7]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[22] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[23] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[24], context[25], context[2], context[3]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[26] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[27] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[28] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[29] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[15], context[29] );
    res = refalrts::splice_elem( res, context[29] );
    res = refalrts::splice_stvar( res, context[9] );
    res = refalrts::splice_stvar( res, context[8] );
    refalrts::link_brackets( context[16], context[28] );
    res = refalrts::splice_elem( res, context[28] );
    refalrts::push_stack( context[27] );
    refalrts::push_stack( context[17] );
    res = refalrts::splice_elem( res, context[27] );
    refalrts::link_brackets( context[23], context[26] );
    res = refalrts::splice_elem( res, context[26] );
    res = refalrts::splice_evar( res, context[24], context[25] );
    res = refalrts::splice_elem( res, context[23] );
    refalrts::link_brackets( context[19], context[22] );
    res = refalrts::splice_elem( res, context[22] );
    res = refalrts::splice_evar( res, context[20], context[21] );
    res = refalrts::splice_elem( res, context[19] );
    res = refalrts::splice_elem( res, context[18] );
    res = refalrts::splice_elem( res, context[17] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_elem( res, context[15] );
    refalrts::link_brackets( context[10], context[14] );
    res = refalrts::splice_elem( res, context[14] );
    refalrts::push_stack( context[13] );
    refalrts::push_stack( context[11] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_evar( res, context[6], context[7] );
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
    // ( e.Diff#1/2 ) ( # Any t.Flush#1/6 t.Next#1/7 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_Any<int>::name, context[4], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    // closed e.Diff#1 as range 2
    if( ! refalrts::tvar_left( context[6], context[4], context[5] ) )
      continue;
    if( ! refalrts::tvar_left( context[7], context[4], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[4], context[5] ) )
      continue;
    //2: e.Diff#1
    //6: t.Flush#1
    //7: t.Next#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[9], & ident_Any<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[12], & ident_Any<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[13] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[11], context[13] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_stvar( res, context[7] );
    res = refalrts::splice_stvar( res, context[6] );
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_elem( res, context[11] );
    refalrts::link_brackets( context[8], context[10] );
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
  // ( e.Diff#1/2 ) ( # Empty t.Flush#1/6 t.Next#1/7 )
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[4] = 0;
  context[5] = 0;
  if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::ident_left(  & ident_Empty<int>::name, context[4], context[5] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Diff#1 as range 2
  if( ! refalrts::tvar_left( context[6], context[4], context[5] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::tvar_left( context[7], context[4], context[5] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[4], context[5] ) )
    return refalrts::cRecognitionImpossible;
  //2: e.Diff#1
  //6: t.Flush#1
  //7: t.Next#1

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_bracket( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[11], & ident_Empty<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[12] ) )
    return refalrts::cNoMemory;
  refalrts::link_brackets( context[10], context[12] );
  res = refalrts::splice_elem( res, context[12] );
  res = refalrts::splice_stvar( res, context[7] );
  res = refalrts::splice_stvar( res, context[6] );
  res = refalrts::splice_elem( res, context[11] );
  res = refalrts::splice_elem( res, context[10] );
  refalrts::link_brackets( context[8], context[9] );
  res = refalrts::splice_elem( res, context[9] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_elem( res, context[8] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult SplitAlternatives(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { SplitAlternatives, "SplitAlternatives" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_Any<int>::name,
    & ident_Empty<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +18, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( # Empty t.Flush#1/4 t.Next#1/5 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icIdentLeft, 0, 1, 2},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::ictVarLeft, 0, 4, 2},
    {refalrts::ictVarLeft, 0, 5, 2},
    {refalrts::icEmpty, 0, 0, 2},
    //4: t.Flush#1
    //5: t.Next#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icIdent, 0, 1, 7},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 8},
    {refalrts::icLinkBrackets, 6, 8, 0},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceSTVar, 0, 0, 5},
    {refalrts::icSpliceSTVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +18, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( # Any t.Flush#1/4 t.Next#1/5 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icIdentLeft, 0, 0, 2},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::ictVarLeft, 0, 4, 2},
    {refalrts::ictVarLeft, 0, 5, 2},
    {refalrts::icEmpty, 0, 0, 2},
    //4: t.Flush#1
    //5: t.Next#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icIdent, 0, 0, 7},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 8},
    {refalrts::icLinkBrackets, 6, 8, 0},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceSTVar, 0, 0, 5},
    {refalrts::icSpliceSTVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +19, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( ( s.Char#1/6 ) t.Flush#1/7 t.Next#1/8 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 2},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icsVarLeft, 0, 6, 4},
    {refalrts::icEmpty, 0, 0, 4},
    {refalrts::ictVarLeft, 0, 7, 2},
    {refalrts::ictVarLeft, 0, 8, 2},
    {refalrts::icEmpty, 0, 0, 2},
    //6: s.Char#1
    //7: t.Flush#1
    //8: t.Next#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 9},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 10},
    {refalrts::icLinkBrackets, 9, 10, 0},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceSTVar, 0, 0, 8},
    {refalrts::icSpliceSTVar, 0, 0, 7},
    {refalrts::icSpliceSTVar, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( ( s.Char#1/6 e.Tail#1/4 ) t.Flush#1/7 t.Next#1/8 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 2},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icsVarLeft, 0, 6, 4},
    // closed e.Tail#1 as range 4
    {refalrts::ictVarLeft, 0, 7, 2},
    {refalrts::ictVarLeft, 0, 8, 2},
    {refalrts::icEmpty, 0, 0, 2},
    //4: e.Tail#1
    //6: s.Char#1
    //7: t.Flush#1
    //8: t.Next#1
    //16: t.Flush#1
    //17: t.Next#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 9},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 10},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 11},
    {refalrts::icFunc, 0, 0, 12},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 13},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 14},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 15},
    {refalrts::icCopySTVar, 16, 7, 0},
    {refalrts::icCopySTVar, 17, 8, 0},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 18},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 19},
    {refalrts::icPushStack, 0, 0, 19},
    {refalrts::icPushStack, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icLinkBrackets, 13, 18, 0},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceSTVar, 0, 0, 17},
    {refalrts::icSpliceSTVar, 0, 0, 16},
    {refalrts::icLinkBrackets, 14, 15, 0},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceEVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icLinkBrackets, 9, 10, 0},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceSTVar, 0, 0, 8},
    {refalrts::icSpliceSTVar, 0, 0, 7},
    {refalrts::icSpliceSTVar, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 9},
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
    // ( # Empty t.Flush#1/4 t.Next#1/5 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_Empty<int>::name, context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    if( ! refalrts::tvar_left( context[4], context[2], context[3] ) )
      continue;
    if( ! refalrts::tvar_left( context[5], context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    //4: t.Flush#1
    //5: t.Next#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[7], & ident_Empty<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[8] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[6], context[8] );
    res = refalrts::splice_elem( res, context[8] );
    res = refalrts::splice_stvar( res, context[5] );
    res = refalrts::splice_stvar( res, context[4] );
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
    // ( # Any t.Flush#1/4 t.Next#1/5 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_Any<int>::name, context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    if( ! refalrts::tvar_left( context[4], context[2], context[3] ) )
      continue;
    if( ! refalrts::tvar_left( context[5], context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    //4: t.Flush#1
    //5: t.Next#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[7], & ident_Any<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[8] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[6], context[8] );
    res = refalrts::splice_elem( res, context[8] );
    res = refalrts::splice_stvar( res, context[5] );
    res = refalrts::splice_stvar( res, context[4] );
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
    // ( ( s.Char#1/6 ) t.Flush#1/7 t.Next#1/8 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[6], context[4], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[4], context[5] ) )
      continue;
    if( ! refalrts::tvar_left( context[7], context[2], context[3] ) )
      continue;
    if( ! refalrts::tvar_left( context[8], context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    //6: s.Char#1
    //7: t.Flush#1
    //8: t.Next#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[9] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[10] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[9], context[10] );
    res = refalrts::splice_elem( res, context[10] );
    res = refalrts::splice_stvar( res, context[8] );
    res = refalrts::splice_stvar( res, context[7] );
    res = refalrts::splice_stvar( res, context[6] );
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
  // ( ( s.Char#1/6 e.Tail#1/4 ) t.Flush#1/7 t.Next#1/8 )
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[4] = 0;
  context[5] = 0;
  if( ! refalrts::brackets_left( context[4], context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[6], context[4], context[5] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Tail#1 as range 4
  if( ! refalrts::tvar_left( context[7], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::tvar_left( context[8], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //4: e.Tail#1
  //6: s.Char#1
  //7: t.Flush#1
  //8: t.Next#1
  //16: t.Flush#1
  //17: t.Next#1

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_bracket( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[12], SplitAlternatives, "SplitAlternatives" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[15] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_stvar(context[16], context[7]))
    return refalrts::cNoMemory;
  if (! refalrts::copy_stvar(context[17], context[8]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[18] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[19] ) )
    return refalrts::cNoMemory;
  refalrts::push_stack( context[19] );
  refalrts::push_stack( context[11] );
  res = refalrts::splice_elem( res, context[19] );
  refalrts::link_brackets( context[13], context[18] );
  res = refalrts::splice_elem( res, context[18] );
  res = refalrts::splice_stvar( res, context[17] );
  res = refalrts::splice_stvar( res, context[16] );
  refalrts::link_brackets( context[14], context[15] );
  res = refalrts::splice_elem( res, context[15] );
  res = refalrts::splice_evar( res, context[4], context[5] );
  res = refalrts::splice_elem( res, context[14] );
  res = refalrts::splice_elem( res, context[13] );
  res = refalrts::splice_elem( res, context[12] );
  res = refalrts::splice_elem( res, context[11] );
  refalrts::link_brackets( context[9], context[10] );
  res = refalrts::splice_elem( res, context[10] );
  res = refalrts::splice_stvar( res, context[8] );
  res = refalrts::splice_stvar( res, context[7] );
  res = refalrts::splice_stvar( res, context[6] );
  res = refalrts::splice_elem( res, context[9] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult NormalizeRule(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 23 elems
  refalrts::Iter context[23];
  refalrts::zeros( context, 23 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { NormalizeAlternative, "NormalizeAlternative" },
    { MapReduce, "MapReduce" },
    { DelAccumulator, "DelAccumulator" },
    { SplitAlternatives, "SplitAlternatives" },
    { Map, "Map" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    // ( ( e.Name#1/4 ) e.Alternatives#1/2 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 2},
    {refalrts::icEmpty, 0, 0, 0},
    // closed e.Name#1 as range 4
    // closed e.Alternatives#1 as range 2
    //2: e.Alternatives#1
    //4: e.Name#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 7},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 8},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 9},
    {refalrts::icFunc, 0, 4, 10},
    {refalrts::icFunc, 0, 3, 11},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 12},
    {refalrts::icFunc, 0, 2, 13},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 14},
    {refalrts::icFunc, 0, 1, 15},
    {refalrts::icFunc, 0, 0, 16},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 17},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 18},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 19},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 20},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 21},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 22},
    {refalrts::icLinkBrackets, 6, 22, 0},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icPushStack, 0, 0, 21},
    {refalrts::icPushStack, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icPushStack, 0, 0, 20},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icPushStack, 0, 0, 19},
    {refalrts::icPushStack, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icLinkBrackets, 17, 18, 0},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceEVar, 0, 0, 4},
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
  // ( ( e.Name#1/4 ) e.Alternatives#1/2 )
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[4] = 0;
  context[5] = 0;
  if( ! refalrts::brackets_left( context[4], context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Name#1 as range 4
  // closed e.Alternatives#1 as range 2
  //2: e.Alternatives#1
  //4: e.Name#1

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_bracket( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[10], Map, "Map" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[11], SplitAlternatives, "SplitAlternatives" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[13], DelAccumulator, "DelAccumulator" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[15], MapReduce, "MapReduce" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[16], NormalizeAlternative, "NormalizeAlternative" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[17] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[18] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[19] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[20] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[21] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[22] ) )
    return refalrts::cNoMemory;
  refalrts::link_brackets( context[6], context[22] );
  res = refalrts::splice_elem( res, context[22] );
  refalrts::push_stack( context[21] );
  refalrts::push_stack( context[9] );
  res = refalrts::splice_elem( res, context[21] );
  refalrts::push_stack( context[20] );
  refalrts::push_stack( context[12] );
  res = refalrts::splice_elem( res, context[20] );
  refalrts::push_stack( context[19] );
  refalrts::push_stack( context[14] );
  res = refalrts::splice_elem( res, context[19] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::link_brackets( context[17], context[18] );
  res = refalrts::splice_elem( res, context[18] );
  res = refalrts::splice_elem( res, context[17] );
  res = refalrts::splice_elem( res, context[16] );
  res = refalrts::splice_elem( res, context[15] );
  res = refalrts::splice_elem( res, context[14] );
  res = refalrts::splice_elem( res, context[13] );
  res = refalrts::splice_elem( res, context[12] );
  res = refalrts::splice_elem( res, context[11] );
  res = refalrts::splice_elem( res, context[10] );
  res = refalrts::splice_elem( res, context[9] );
  refalrts::link_brackets( context[7], context[8] );
  res = refalrts::splice_elem( res, context[8] );
  res = refalrts::splice_evar( res, context[4], context[5] );
  res = refalrts::splice_elem( res, context[7] );
  res = refalrts::splice_elem( res, context[6] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult WriteCode(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { WriteFunctions, "WriteFunctions" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  static const refalrts::StringItem strings[] = {
    {"Root", 4}
  };
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    // e.Rules#1/0
    // closed e.Rules#1 as range 0
    //0: e.Rules#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 2},
    {refalrts::icFunc, 0, 0, 3},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 4},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 5},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 7},
    {refalrts::icInt, 0, 0, 8},
    {refalrts::icString, 0, 0, 9},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 11},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 12},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 13},
    {refalrts::icPushStack, 0, 0, 13},
    {refalrts::icPushStack, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icLinkBrackets, 6, 12, 0},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icLinkBrackets, 7, 11, 0},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceRange, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 8},
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
  // e.Rules#1/0
  // closed e.Rules#1 as range 0
  //0: e.Rules#1

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_call( context[2] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[3], WriteFunctions, "WriteFunctions" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[4] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[5] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_number( context[8], 0UL ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[9], context[10], "Root", 4 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[13] ) )
    return refalrts::cNoMemory;
  refalrts::push_stack( context[13] );
  refalrts::push_stack( context[2] );
  res = refalrts::splice_elem( res, context[13] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  refalrts::link_brackets( context[6], context[12] );
  res = refalrts::splice_elem( res, context[12] );
  refalrts::link_brackets( context[7], context[11] );
  res = refalrts::splice_elem( res, context[11] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_elem( res, context[8] );
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

static refalrts::FnResult ExtractExpected(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
#ifdef INTERPRET
  using refalrts::functions;
  static const refalrts::RefalIdentifier idents[] = {
    & ident_Finitive<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +9, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( t.Head#1/4 t.Flush#1/5 # Finitive )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icIdentRight, 0, 0, 2},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::ictVarLeft, 0, 4, 2},
    {refalrts::ictVarLeft, 0, 5, 2},
    {refalrts::icEmpty, 0, 0, 2},
    //4: t.Head#1
    //5: t.Flush#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( t.Head#1/7 t.Flush#1/8 ( s.LineNumber#1/6 e.NextName#1/4 ) )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketRight, 0, 4, 2},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icsVarLeft, 0, 6, 4},
    // closed e.NextName#1 as range 4
    {refalrts::ictVarLeft, 0, 7, 2},
    {refalrts::ictVarLeft, 0, 8, 2},
    {refalrts::icEmpty, 0, 0, 2},
    //4: e.NextName#1
    //6: s.LineNumber#1
    //7: t.Head#1
    //8: t.Flush#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 9},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 10},
    {refalrts::icLinkBrackets, 9, 10, 0},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceEVar, 0, 0, 4},
    {refalrts::icSpliceSTVar, 0, 0, 6},
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
    // ( t.Head#1/4 t.Flush#1/5 # Finitive )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_right(  & ident_Finitive<int>::name, context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    if( ! refalrts::tvar_left( context[4], context[2], context[3] ) )
      continue;
    if( ! refalrts::tvar_left( context[5], context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    //4: t.Head#1
    //5: t.Flush#1

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
  // ( t.Head#1/7 t.Flush#1/8 ( s.LineNumber#1/6 e.NextName#1/4 ) )
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[4] = 0;
  context[5] = 0;
  if( ! refalrts::brackets_right( context[4], context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[6], context[4], context[5] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.NextName#1 as range 4
  if( ! refalrts::tvar_left( context[7], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::tvar_left( context[8], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //4: e.NextName#1
  //6: s.LineNumber#1
  //7: t.Head#1
  //8: t.Flush#1

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_bracket( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[10] ) )
    return refalrts::cNoMemory;
  refalrts::link_brackets( context[9], context[10] );
  res = refalrts::splice_elem( res, context[10] );
  res = refalrts::splice_evar( res, context[4], context[5] );
  res = refalrts::splice_stvar( res, context[6] );
  res = refalrts::splice_elem( res, context[9] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult WriteFunctions(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 39 elems
  refalrts::Iter context[39];
  refalrts::zeros( context, 39 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { ErrorAt, "ErrorAt" },
    { ExtractExpected, "ExtractExpected" },
    { Map, "Map" },
    { WriteFunctions, "WriteFunctions" },
    { WriteFunction, "WriteFunction" },
    { Warning, "Warning" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  static const refalrts::StringItem strings[] = {
    {" not found", 10},
    {"Rule ", 5},
    {" ...", 4},
    {"Found unused rules ", 19}
  };
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +7, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Written#1/2 ) ( )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icEmpty, 0, 0, 4},
    {refalrts::icEmpty, 0, 0, 0},
    // closed e.Written#1 as range 2
    //2: e.Written#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +21, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Written#1/2 ) ( ) ( ( e.Name#1/8 ) e.Content#1/6 ) e.Rules#1/0
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icBracketLeft, 0, 6, 0},
    {refalrts::icBracketLeft, 0, 8, 6},
    {refalrts::icEmpty, 0, 0, 4},
    // closed e.Written#1 as range 2
    // closed e.Name#1 as range 8
    // closed e.Content#1 as range 6
    // closed e.Rules#1 as range 0
    //0: e.Rules#1
    //2: e.Written#1
    //6: e.Content#1
    //8: e.Name#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 10},
    {refalrts::icFunc, 0, 5, 11},
    {refalrts::icString, 0, 3, 12},
    {refalrts::icString, 0, 2, 14},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 16},
    {refalrts::icPushStack, 0, 0, 16},
    {refalrts::icPushStack, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceRange, 0, 0, 14},
    {refalrts::icSpliceEVar, 0, 0, 8},
    {refalrts::icSpliceRange, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +41, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Written_B#1/9 ( e.Next#1/13 ) e.Written_E#1/15 ) ( ( s.LineNumber#1/8 e.Next#1/6 ) e.Expected#1/4 ) e.Rules#1/0
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icBracketLeft, 0, 6, 4},
    // closed e.Expected#1 as range 4
    // closed e.Rules#1 as range 0
    {refalrts::icsVarLeft, 0, 8, 6},
    // closed e.Next#1 as range 6
    {refalrts::icEPrepare, 0, 9, 2},
    {refalrts::icEStart, 0, 9, 2},
    {refalrts::icSave, 0, 15, 2},
    {refalrts::icBracketLeft, 0, 11, 15},
    {refalrts::iceRepeatLeft, 13, 6, 11},
    {refalrts::icEmpty, 0, 0, 11},
    // closed e.Written_E#1 as range 2
    //0: e.Rules#1
    //4: e.Expected#1
    //6: e.Next#1
    //8: s.LineNumber#1
    //9: e.Written_B#1
    //13: e.Next#1
    //15: e.Written_E#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 17},
    {refalrts::icFunc, 0, 3, 18},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 19},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 20},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 21},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 22},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 23},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 24},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 25},
    {refalrts::icPushStack, 0, 0, 25},
    {refalrts::icPushStack, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icLinkBrackets, 23, 24, 0},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icSpliceEVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icLinkBrackets, 19, 22, 0},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceEVar, 0, 0, 15},
    {refalrts::icLinkBrackets, 20, 21, 0},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceEVar, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceEVar, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +69, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Written#1/2 ) ( ( s.LineNumber#1/8 e.NextRule#1/6 ) e.Expected#1/4 ) e.Rules_B#1/9 ( ( e.NextRule#1/15 ) e.Alternatives#1/11 ) e.Rules_E#1/17
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icBracketLeft, 0, 6, 4},
    // closed e.Written#1 as range 2
    // closed e.Expected#1 as range 4
    {refalrts::icsVarLeft, 0, 8, 6},
    // closed e.NextRule#1 as range 6
    {refalrts::icEPrepare, 0, 9, 0},
    {refalrts::icEStart, 0, 9, 0},
    {refalrts::icSave, 0, 17, 0},
    {refalrts::icBracketLeft, 0, 11, 17},
    {refalrts::icBracketLeft, 0, 13, 11},
    {refalrts::iceRepeatLeft, 15, 6, 13},
    {refalrts::icEmpty, 0, 0, 13},
    // closed e.Alternatives#1 as range 11
    // closed e.Rules_E#1 as range 0
    //2: e.Written#1
    //4: e.Expected#1
    //6: e.NextRule#1
    //8: s.LineNumber#1
    //9: e.Rules_B#1
    //11: e.Alternatives#1
    //15: e.NextRule#1
    //17: e.Rules_E#1
    //34: e.Alternatives#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 19},
    {refalrts::icFunc, 0, 4, 20},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 21},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 22},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 23},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 24},
    {refalrts::icFunc, 0, 3, 25},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 26},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 27},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 28},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 29},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 30},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 31},
    {refalrts::icFunc, 0, 2, 32},
    {refalrts::icFunc, 0, 1, 33},
    {refalrts::icCopyEVar, 34, 11, 0},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 36},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 37},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 38},
    {refalrts::icPushStack, 0, 0, 38},
    {refalrts::icPushStack, 0, 0, 24},
    {refalrts::icSpliceElem, 0, 0, 38},
    {refalrts::icSpliceEVar, 0, 0, 17},
    {refalrts::icSpliceEVar, 0, 0, 9},
    {refalrts::icLinkBrackets, 30, 37, 0},
    {refalrts::icSpliceElem, 0, 0, 37},
    {refalrts::icPushStack, 0, 0, 36},
    {refalrts::icPushStack, 0, 0, 31},
    {refalrts::icSpliceElem, 0, 0, 36},
    {refalrts::icSpliceEVar, 0, 0, 34},
    {refalrts::icSpliceElem, 0, 0, 33},
    {refalrts::icSpliceElem, 0, 0, 32},
    {refalrts::icSpliceElem, 0, 0, 31},
    {refalrts::icSpliceEVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 30},
    {refalrts::icLinkBrackets, 26, 29, 0},
    {refalrts::icSpliceElem, 0, 0, 29},
    {refalrts::icLinkBrackets, 27, 28, 0},
    {refalrts::icSpliceElem, 0, 0, 28},
    {refalrts::icSpliceEVar, 0, 0, 15},
    {refalrts::icSpliceElem, 0, 0, 27},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icPushStack, 0, 0, 23},
    {refalrts::icPushStack, 0, 0, 19},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icSpliceEVar, 0, 0, 11},
    {refalrts::icLinkBrackets, 21, 22, 0},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceEVar, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( ( s.LineNumber#1/6 e.NextRule#1/4 ) e.Expected#1/2 ) e.Rules#1/0
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 2},
    // closed e.Expected#1 as range 2
    // closed e.Rules#1 as range 0
    {refalrts::icsVarLeft, 0, 6, 4},
    // closed e.NextRule#1 as range 4
    //0: e.Rules#1
    //2: e.Expected#1
    //4: e.NextRule#1
    //6: s.LineNumber#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 7},
    {refalrts::icFunc, 0, 0, 8},
    {refalrts::icString, 0, 1, 9},
    {refalrts::icString, 0, 0, 11},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 13},
    {refalrts::icPushStack, 0, 0, 13},
    {refalrts::icPushStack, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceRange, 0, 0, 11},
    {refalrts::icSpliceEVar, 0, 0, 4},
    {refalrts::icSpliceRange, 0, 0, 9},
    {refalrts::icSpliceSTVar, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 7},
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
    // ( e.Written#1/2 ) ( )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      continue;
    if( ! refalrts::empty_seq( context[4], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    // closed e.Written#1 as range 2
    //2: e.Written#1

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
    // ( e.Written#1/2 ) ( ) ( ( e.Name#1/8 ) e.Content#1/6 ) e.Rules#1/0
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
    context[8] = 0;
    context[9] = 0;
    if( ! refalrts::brackets_left( context[8], context[9], context[6], context[7] ) )
      continue;
    if( ! refalrts::empty_seq( context[4], context[5] ) )
      continue;
    // closed e.Written#1 as range 2
    // closed e.Name#1 as range 8
    // closed e.Content#1 as range 6
    // closed e.Rules#1 as range 0
    //0: e.Rules#1
    //2: e.Written#1
    //6: e.Content#1
    //8: e.Name#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[11], Warning, "Warning" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[12], context[13], "Found unused rules ", 19 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[14], context[15], " ...", 4 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[16] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[16] );
    refalrts::push_stack( context[10] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    res = refalrts::splice_evar( res, context[8], context[9] );
    res = refalrts::splice_evar( res, context[12], context[13] );
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
    // ( e.Written_B#1/9 ( e.Next#1/13 ) e.Written_E#1/15 ) ( ( s.LineNumber#1/8 e.Next#1/6 ) e.Expected#1/4 ) e.Rules#1/0
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
    if( ! refalrts::brackets_left( context[6], context[7], context[4], context[5] ) )
      continue;
    // closed e.Expected#1 as range 4
    // closed e.Rules#1 as range 0
    if( ! refalrts::svar_left( context[8], context[6], context[7] ) )
      continue;
    // closed e.Next#1 as range 6
    context[9] = 0;
    context[10] = 0;
    refalrts::start_e_loop();
    do {
      context[15] = context[2];
      context[16] = context[3];
      context[11] = 0;
      context[12] = 0;
      if( ! refalrts::brackets_left( context[11], context[12], context[15], context[16] ) )
        continue;
      if( ! refalrts::repeated_evar_left( context[13], context[14], context[6], context[7], context[11], context[12] ) )
        continue;
      if( ! refalrts::empty_seq( context[11], context[12] ) )
        continue;
      // closed e.Written_E#1 as range 2
      //0: e.Rules#1
      //4: e.Expected#1
      //6: e.Next#1
      //8: s.LineNumber#1
      //9: e.Written_B#1
      //13: e.Next#1
      //15: e.Written_E#1

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::alloc_open_call( context[17] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[18], WriteFunctions, "WriteFunctions" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[19] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[20] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[21] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[22] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[23] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[24] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[25] ) )
        return refalrts::cNoMemory;
      refalrts::push_stack( context[25] );
      refalrts::push_stack( context[17] );
      res = refalrts::splice_elem( res, context[25] );
      res = refalrts::splice_evar( res, context[0], context[1] );
      refalrts::link_brackets( context[23], context[24] );
      res = refalrts::splice_elem( res, context[24] );
      res = refalrts::splice_evar( res, context[4], context[5] );
      res = refalrts::splice_elem( res, context[23] );
      refalrts::link_brackets( context[19], context[22] );
      res = refalrts::splice_elem( res, context[22] );
      res = refalrts::splice_evar( res, context[15], context[16] );
      refalrts::link_brackets( context[20], context[21] );
      res = refalrts::splice_elem( res, context[21] );
      res = refalrts::splice_evar( res, context[6], context[7] );
      res = refalrts::splice_elem( res, context[20] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      res = refalrts::splice_elem( res, context[19] );
      res = refalrts::splice_elem( res, context[18] );
      res = refalrts::splice_elem( res, context[17] );
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
    // ( e.Written#1/2 ) ( ( s.LineNumber#1/8 e.NextRule#1/6 ) e.Expected#1/4 ) e.Rules_B#1/9 ( ( e.NextRule#1/15 ) e.Alternatives#1/11 ) e.Rules_E#1/17
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
    if( ! refalrts::brackets_left( context[6], context[7], context[4], context[5] ) )
      continue;
    // closed e.Written#1 as range 2
    // closed e.Expected#1 as range 4
    if( ! refalrts::svar_left( context[8], context[6], context[7] ) )
      continue;
    // closed e.NextRule#1 as range 6
    context[9] = 0;
    context[10] = 0;
    refalrts::start_e_loop();
    do {
      context[17] = context[0];
      context[18] = context[1];
      context[11] = 0;
      context[12] = 0;
      if( ! refalrts::brackets_left( context[11], context[12], context[17], context[18] ) )
        continue;
      context[13] = 0;
      context[14] = 0;
      if( ! refalrts::brackets_left( context[13], context[14], context[11], context[12] ) )
        continue;
      if( ! refalrts::repeated_evar_left( context[15], context[16], context[6], context[7], context[13], context[14] ) )
        continue;
      if( ! refalrts::empty_seq( context[13], context[14] ) )
        continue;
      // closed e.Alternatives#1 as range 11
      // closed e.Rules_E#1 as range 0
      //2: e.Written#1
      //4: e.Expected#1
      //6: e.NextRule#1
      //8: s.LineNumber#1
      //9: e.Rules_B#1
      //11: e.Alternatives#1
      //15: e.NextRule#1
      //17: e.Rules_E#1
      //34: e.Alternatives#1

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::alloc_open_call( context[19] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[20], WriteFunction, "WriteFunction" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[21] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[22] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[23] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_call( context[24] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[25], WriteFunctions, "WriteFunctions" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[26] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[27] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[28] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[29] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[30] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_call( context[31] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[32], Map, "Map" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[33], ExtractExpected, "ExtractExpected" ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_evar(context[34], context[35], context[11], context[12]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[36] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[37] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[38] ) )
        return refalrts::cNoMemory;
      refalrts::push_stack( context[38] );
      refalrts::push_stack( context[24] );
      res = refalrts::splice_elem( res, context[38] );
      res = refalrts::splice_evar( res, context[17], context[18] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      refalrts::link_brackets( context[30], context[37] );
      res = refalrts::splice_elem( res, context[37] );
      refalrts::push_stack( context[36] );
      refalrts::push_stack( context[31] );
      res = refalrts::splice_elem( res, context[36] );
      res = refalrts::splice_evar( res, context[34], context[35] );
      res = refalrts::splice_elem( res, context[33] );
      res = refalrts::splice_elem( res, context[32] );
      res = refalrts::splice_elem( res, context[31] );
      res = refalrts::splice_evar( res, context[4], context[5] );
      res = refalrts::splice_elem( res, context[30] );
      refalrts::link_brackets( context[26], context[29] );
      res = refalrts::splice_elem( res, context[29] );
      refalrts::link_brackets( context[27], context[28] );
      res = refalrts::splice_elem( res, context[28] );
      res = refalrts::splice_evar( res, context[15], context[16] );
      res = refalrts::splice_elem( res, context[27] );
      res = refalrts::splice_evar( res, context[2], context[3] );
      res = refalrts::splice_elem( res, context[26] );
      res = refalrts::splice_elem( res, context[25] );
      res = refalrts::splice_elem( res, context[24] );
      refalrts::push_stack( context[23] );
      refalrts::push_stack( context[19] );
      res = refalrts::splice_elem( res, context[23] );
      res = refalrts::splice_evar( res, context[11], context[12] );
      refalrts::link_brackets( context[21], context[22] );
      res = refalrts::splice_elem( res, context[22] );
      res = refalrts::splice_evar( res, context[6], context[7] );
      res = refalrts::splice_elem( res, context[21] );
      res = refalrts::splice_elem( res, context[20] );
      res = refalrts::splice_elem( res, context[19] );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[9], context[10], context[0], context[1] ) );
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  refalrts::move_left( context[0], context[1] );
  refalrts::move_left( context[0], context[1] );
  refalrts::move_right( context[0], context[1] );
  // ( ( s.LineNumber#1/6 e.NextRule#1/4 ) e.Expected#1/2 ) e.Rules#1/0
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[4] = 0;
  context[5] = 0;
  if( ! refalrts::brackets_left( context[4], context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Expected#1 as range 2
  // closed e.Rules#1 as range 0
  if( ! refalrts::svar_left( context[6], context[4], context[5] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.NextRule#1 as range 4
  //0: e.Rules#1
  //2: e.Expected#1
  //4: e.NextRule#1
  //6: s.LineNumber#1

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_call( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[8], ErrorAt, "ErrorAt" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[9], context[10], "Rule ", 5 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[11], context[12], " not found", 10 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[13] ) )
    return refalrts::cNoMemory;
  refalrts::push_stack( context[13] );
  refalrts::push_stack( context[7] );
  res = refalrts::splice_elem( res, context[13] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_evar( res, context[4], context[5] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_stvar( res, context[6] );
  res = refalrts::splice_elem( res, context[8] );
  res = refalrts::splice_elem( res, context[7] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult WriteFunction(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 29 elems
  refalrts::Iter context[29];
  refalrts::zeros( context, 29 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { WriteAlternative, "WriteAlternative" },
    { Map, "Map" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  static const refalrts::StringItem strings[] = {
    {"  (e.Accum) = (#TokenAccum e.Accum) (#TokenUnexpectedEOF);", 58},
    {"    (#TokenUnexpected s.Unexpected) <Root () e.Text>;", 53},
    {"  (e.Accum) s.Unexpected e.Text =", 33},
    {" {", 2}
  };
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.NextRule#1/2 ) e.Alternatives#1/0
    {refalrts::icBracketLeft, 0, 2, 0},
    // closed e.NextRule#1 as range 2
    // closed e.Alternatives#1 as range 0
    //0: e.Alternatives#1
    //2: e.NextRule#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 4},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 5},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icString, 0, 3, 7},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 9},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 10},
    {refalrts::icFunc, 0, 1, 11},
    {refalrts::icFunc, 0, 0, 12},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 13},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 14},
    {refalrts::icString, 0, 2, 15},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 17},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 18},
    {refalrts::icString, 0, 1, 19},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 21},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 22},
    {refalrts::icString, 0, 0, 23},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 25},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 26},
    {refalrts::icChar, 0, '}', 27},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 28},
    {refalrts::icLinkBrackets, 26, 28, 0},
    {refalrts::icSpliceElem, 0, 0, 28},
    {refalrts::icSpliceElem, 0, 0, 27},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icLinkBrackets, 22, 25, 0},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icSpliceRange, 0, 0, 23},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icLinkBrackets, 18, 21, 0},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceRange, 0, 0, 19},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icLinkBrackets, 14, 17, 0},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceRange, 0, 0, 15},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icPushStack, 0, 0, 13},
    {refalrts::icPushStack, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icLinkBrackets, 6, 9, 0},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceRange, 0, 0, 7},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icLinkBrackets, 4, 5, 0},
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
  // ( e.NextRule#1/2 ) e.Alternatives#1/0
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.NextRule#1 as range 2
  // closed e.Alternatives#1 as range 0
  //0: e.Alternatives#1
  //2: e.NextRule#1

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_bracket( context[4] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[5] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[7], context[8], " {", 2 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[11], Map, "Map" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[12], WriteAlternative, "WriteAlternative" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[15], context[16], "  (e.Accum) s.Unexpected e.Text =", 33 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[17] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[18] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[19], context[20], "    (#TokenUnexpected s.Unexpected) <Root () e.Text>;", 53 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[21] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[22] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[23], context[24], "  (e.Accum) = (#TokenAccum e.Accum) (#TokenUnexpectedEOF);", 58 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[25] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[26] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[27], '}' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[28] ) )
    return refalrts::cNoMemory;
  refalrts::link_brackets( context[26], context[28] );
  res = refalrts::splice_elem( res, context[28] );
  res = refalrts::splice_elem( res, context[27] );
  res = refalrts::splice_elem( res, context[26] );
  refalrts::link_brackets( context[22], context[25] );
  res = refalrts::splice_elem( res, context[25] );
  res = refalrts::splice_evar( res, context[23], context[24] );
  res = refalrts::splice_elem( res, context[22] );
  refalrts::link_brackets( context[18], context[21] );
  res = refalrts::splice_elem( res, context[21] );
  res = refalrts::splice_evar( res, context[19], context[20] );
  res = refalrts::splice_elem( res, context[18] );
  refalrts::link_brackets( context[14], context[17] );
  res = refalrts::splice_elem( res, context[17] );
  res = refalrts::splice_evar( res, context[15], context[16] );
  res = refalrts::splice_elem( res, context[14] );
  refalrts::push_stack( context[13] );
  refalrts::push_stack( context[10] );
  res = refalrts::splice_elem( res, context[13] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_elem( res, context[12] );
  res = refalrts::splice_elem( res, context[11] );
  res = refalrts::splice_elem( res, context[10] );
  refalrts::link_brackets( context[6], context[9] );
  res = refalrts::splice_elem( res, context[9] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_elem( res, context[6] );
  refalrts::link_brackets( context[4], context[5] );
  res = refalrts::splice_elem( res, context[5] );
  res = refalrts::splice_elem( res, context[4] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult WriteAlternative(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 29 elems
  refalrts::Iter context[29];
  refalrts::zeros( context, 29 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { EC, "EC" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_FlushError<int>::name,
    & ident_Finitive<int>::name,
    & ident_Flush<int>::name,
    & ident_Unnamed<int>::name,
    & ident_None<int>::name,
    & ident_Empty<int>::name
  };
  using refalrts::numbers;
  static const refalrts::StringItem strings[] = {
    {" () e.Text >;", 13},
    {"\') <", 4},
    {" e.Text = (#TokenError \'", 24},
    {"  (e.Accum) ", 12},
    {"\');", 3},
    {" = (#TokenError \'", 17},
    {" () e.Text>;", 12},
    {") <", 3},
    {" e.Accum ", 9},
    {" e.Text = (", 11},
    {");", 2},
    {" = (", 4},
    {" e.Text = <", 11},
    {" = ;", 4},
    {") e.Text>;", 10},
    {" (e.Accum ", 10},
    {" = (#TokenAccum e.Accum ", 24},
    {"  (e.Accum) e.Text = (#TokenError \'", 35},
    {"  (e.Accum) = (#TokenError \'", 28},
    {" e.Accum) <", 11},
    {"    (", 5},
    {"  (e.Accum) e.Text =", 20},
    {" e.Accum);", 10},
    {"  (e.Accum) =  (", 16},
    {"  (e.Accum) e.Text = <", 22},
    {"  (e.Accum) = ;", 15},
    {" (e.Accum) e.Text>;", 19},
    {"  (e.Accum) = (#TokenAccum e.Accum) ;", 37}
  };
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +16, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( # Empty # None # Finitive )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icIdentLeft, 0, 5, 2},
    {refalrts::icIdentLeft, 0, 4, 2},
    {refalrts::icIdentLeft, 0, 1, 2},
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 4},
    {refalrts::icString, 0, 27, 5},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 7},
    {refalrts::icLinkBrackets, 4, 7, 0},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceRange, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +20, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( # Empty # None ( t.SrcPos#1/6 e.NextStateName#1/4 ) )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icIdentLeft, 0, 5, 2},
    {refalrts::icIdentLeft, 0, 4, 2},
    {refalrts::icBracketLeft, 0, 4, 2},
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::ictVarLeft, 0, 6, 4},
    // closed e.NextStateName#1 as range 4
    //4: e.NextStateName#1
    //6: t.SrcPos#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 7},
    {refalrts::icString, 0, 24, 8},
    {refalrts::icString, 0, 26, 10},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 12},
    {refalrts::icLinkBrackets, 7, 12, 0},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceRange, 0, 0, 10},
    {refalrts::icSpliceEVar, 0, 0, 4},
    {refalrts::icSpliceRange, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +16, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( # Empty # Unnamed # Finitive )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icIdentLeft, 0, 5, 2},
    {refalrts::icIdentLeft, 0, 3, 2},
    {refalrts::icIdentLeft, 0, 1, 2},
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 4},
    {refalrts::icString, 0, 25, 5},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 7},
    {refalrts::icLinkBrackets, 4, 7, 0},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceRange, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +20, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( # Empty # Unnamed ( t.SrcPos#1/6 e.NextStateName#1/4 ) )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icIdentLeft, 0, 5, 2},
    {refalrts::icIdentLeft, 0, 3, 2},
    {refalrts::icBracketLeft, 0, 4, 2},
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::ictVarLeft, 0, 6, 4},
    // closed e.NextStateName#1 as range 4
    //4: e.NextStateName#1
    //6: t.SrcPos#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 7},
    {refalrts::icString, 0, 24, 8},
    {refalrts::icString, 0, 6, 10},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 12},
    {refalrts::icLinkBrackets, 7, 12, 0},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceRange, 0, 0, 10},
    {refalrts::icSpliceEVar, 0, 0, 4},
    {refalrts::icSpliceRange, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +20, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( # Empty ( # Flush e.FlushName#1/4 ) # Finitive )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icIdentLeft, 0, 5, 2},
    {refalrts::icIdentRight, 0, 1, 2},
    {refalrts::icBracketLeft, 0, 4, 2},
    {refalrts::icIdentLeft, 0, 2, 4},
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icEmpty, 0, 0, 0},
    // closed e.FlushName#1 as range 4
    //4: e.FlushName#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icString, 0, 23, 7},
    {refalrts::icString, 0, 22, 9},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 11},
    {refalrts::icLinkBrackets, 6, 11, 0},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceRange, 0, 0, 9},
    {refalrts::icSpliceEVar, 0, 0, 4},
    {refalrts::icSpliceRange, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +31, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( # Empty ( # Flush e.FlushName#1/4 ) ( t.SrcPos#1/8 e.NextStateName#1/6 ) )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icIdentLeft, 0, 5, 2},
    {refalrts::icBracketLeft, 0, 4, 2},
    {refalrts::icIdentLeft, 0, 2, 4},
    {refalrts::icBracketLeft, 0, 6, 2},
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icEmpty, 0, 0, 0},
    // closed e.FlushName#1 as range 4
    {refalrts::ictVarLeft, 0, 8, 6},
    // closed e.NextStateName#1 as range 6
    //4: e.FlushName#1
    //6: e.NextStateName#1
    //8: t.SrcPos#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 9},
    {refalrts::icString, 0, 21, 10},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 12},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 13},
    {refalrts::icString, 0, 20, 14},
    {refalrts::icString, 0, 19, 16},
    {refalrts::icString, 0, 6, 18},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 20},
    {refalrts::icLinkBrackets, 13, 20, 0},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceRange, 0, 0, 18},
    {refalrts::icSpliceEVar, 0, 0, 6},
    {refalrts::icSpliceRange, 0, 0, 16},
    {refalrts::icSpliceEVar, 0, 0, 4},
    {refalrts::icSpliceRange, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icLinkBrackets, 9, 12, 0},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceRange, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +20, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( # Empty ( # FlushError e.Message#1/4 ) # Finitive )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icIdentLeft, 0, 5, 2},
    {refalrts::icIdentRight, 0, 1, 2},
    {refalrts::icBracketLeft, 0, 4, 2},
    {refalrts::icIdentLeft, 0, 0, 4},
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icEmpty, 0, 0, 0},
    // closed e.Message#1 as range 4
    //4: e.Message#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icString, 0, 18, 7},
    {refalrts::icString, 0, 4, 9},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 11},
    {refalrts::icLinkBrackets, 6, 11, 0},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceRange, 0, 0, 9},
    {refalrts::icSpliceEVar, 0, 0, 4},
    {refalrts::icSpliceRange, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +24, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( # Empty ( # FlushError e.Message#1/4 ) ( t.SrcPos#1/8 e.NextStateName#1/6 ) )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icIdentLeft, 0, 5, 2},
    {refalrts::icBracketLeft, 0, 4, 2},
    {refalrts::icIdentLeft, 0, 0, 4},
    {refalrts::icBracketLeft, 0, 6, 2},
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icEmpty, 0, 0, 0},
    // closed e.Message#1 as range 4
    {refalrts::ictVarLeft, 0, 8, 6},
    // closed e.NextStateName#1 as range 6
    //4: e.Message#1
    //6: e.NextStateName#1
    //8: t.SrcPos#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 9},
    {refalrts::icString, 0, 17, 10},
    {refalrts::icString, 0, 1, 12},
    {refalrts::icString, 0, 6, 14},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 16},
    {refalrts::icLinkBrackets, 9, 16, 0},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceRange, 0, 0, 14},
    {refalrts::icSpliceEVar, 0, 0, 6},
    {refalrts::icSpliceRange, 0, 0, 12},
    {refalrts::icSpliceEVar, 0, 0, 4},
    {refalrts::icSpliceRange, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +39, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( s.Char#1/4 # None # Finitive )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icIdentRight, 0, 1, 2},
    {refalrts::icIdentRight, 0, 4, 2},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icsVarLeft, 0, 4, 2},
    {refalrts::icEmpty, 0, 0, 2},
    //4: s.Char#1
    //15: s.Char#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 5},
    {refalrts::icString, 0, 3, 6},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 8},
    {refalrts::icFunc, 0, 0, 9},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 10},
    {refalrts::icString, 0, 16, 11},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 13},
    {refalrts::icFunc, 0, 0, 14},
    {refalrts::icCopySTVar, 15, 4, 0},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 16},
    {refalrts::icString, 0, 10, 17},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 19},
    {refalrts::icLinkBrackets, 5, 19, 0},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceRange, 0, 0, 17},
    {refalrts::icPushStack, 0, 0, 16},
    {refalrts::icPushStack, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceSTVar, 0, 0, 15},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceRange, 0, 0, 11},
    {refalrts::icPushStack, 0, 0, 10},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceSTVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceRange, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +43, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( s.Char#1/6 # None ( t.SrcPos#1/7 e.NextStateName#1/4 ) )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketRight, 0, 4, 2},
    {refalrts::icIdentRight, 0, 4, 2},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icsVarLeft, 0, 6, 2},
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::ictVarLeft, 0, 7, 4},
    // closed e.NextStateName#1 as range 4
    //4: e.NextStateName#1
    //6: s.Char#1
    //7: t.SrcPos#1
    //20: s.Char#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icString, 0, 3, 9},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 11},
    {refalrts::icFunc, 0, 0, 12},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 13},
    {refalrts::icString, 0, 12, 14},
    {refalrts::icString, 0, 15, 16},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 18},
    {refalrts::icFunc, 0, 0, 19},
    {refalrts::icCopySTVar, 20, 6, 0},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 21},
    {refalrts::icString, 0, 14, 22},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 24},
    {refalrts::icLinkBrackets, 8, 24, 0},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icSpliceRange, 0, 0, 22},
    {refalrts::icPushStack, 0, 0, 21},
    {refalrts::icPushStack, 0, 0, 18},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceSTVar, 0, 0, 20},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceRange, 0, 0, 16},
    {refalrts::icSpliceEVar, 0, 0, 4},
    {refalrts::icSpliceRange, 0, 0, 14},
    {refalrts::icPushStack, 0, 0, 13},
    {refalrts::icPushStack, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceSTVar, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceRange, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +27, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( s.Char#1/4 # Unnamed # Finitive )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icIdentRight, 0, 1, 2},
    {refalrts::icIdentRight, 0, 3, 2},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icsVarLeft, 0, 4, 2},
    {refalrts::icEmpty, 0, 0, 2},
    //4: s.Char#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 5},
    {refalrts::icString, 0, 3, 6},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 8},
    {refalrts::icFunc, 0, 0, 9},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 10},
    {refalrts::icString, 0, 13, 11},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 13},
    {refalrts::icLinkBrackets, 5, 13, 0},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceRange, 0, 0, 11},
    {refalrts::icPushStack, 0, 0, 10},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceSTVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceRange, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +31, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( s.Char#1/6 # Unnamed ( t.SrcPos#1/7 e.NextStateName#1/4 ) )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketRight, 0, 4, 2},
    {refalrts::icIdentRight, 0, 3, 2},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icsVarLeft, 0, 6, 2},
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::ictVarLeft, 0, 7, 4},
    // closed e.NextStateName#1 as range 4
    //4: e.NextStateName#1
    //6: s.Char#1
    //7: t.SrcPos#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icString, 0, 3, 9},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 11},
    {refalrts::icFunc, 0, 0, 12},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 13},
    {refalrts::icString, 0, 12, 14},
    {refalrts::icString, 0, 6, 16},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 18},
    {refalrts::icLinkBrackets, 8, 18, 0},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceRange, 0, 0, 16},
    {refalrts::icSpliceEVar, 0, 0, 4},
    {refalrts::icSpliceRange, 0, 0, 14},
    {refalrts::icPushStack, 0, 0, 13},
    {refalrts::icPushStack, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceSTVar, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceRange, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +43, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( s.Char#1/6 ( # Flush e.FlushName#1/4 ) # Finitive )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icIdentRight, 0, 1, 2},
    {refalrts::icBracketRight, 0, 4, 2},
    {refalrts::icIdentLeft, 0, 2, 4},
    {refalrts::icEmpty, 0, 0, 0},
    // closed e.FlushName#1 as range 4
    {refalrts::icsVarLeft, 0, 6, 2},
    {refalrts::icEmpty, 0, 0, 2},
    //4: e.FlushName#1
    //6: s.Char#1
    //19: s.Char#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 7},
    {refalrts::icString, 0, 3, 8},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 10},
    {refalrts::icFunc, 0, 0, 11},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 12},
    {refalrts::icString, 0, 11, 13},
    {refalrts::icString, 0, 8, 15},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 17},
    {refalrts::icFunc, 0, 0, 18},
    {refalrts::icCopySTVar, 19, 6, 0},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 20},
    {refalrts::icString, 0, 10, 21},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 23},
    {refalrts::icLinkBrackets, 7, 23, 0},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icSpliceRange, 0, 0, 21},
    {refalrts::icPushStack, 0, 0, 20},
    {refalrts::icPushStack, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceSTVar, 0, 0, 19},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceRange, 0, 0, 15},
    {refalrts::icSpliceEVar, 0, 0, 4},
    {refalrts::icSpliceRange, 0, 0, 13},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icPushStack, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceSTVar, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceRange, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +47, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( s.Char#1/8 ( # Flush e.FlushName#1/6 ) ( t.SrcPos#1/9 e.NextStateName#1/4 ) )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketRight, 0, 4, 2},
    {refalrts::icBracketRight, 0, 6, 2},
    {refalrts::icIdentLeft, 0, 2, 6},
    {refalrts::icEmpty, 0, 0, 0},
    // closed e.FlushName#1 as range 6
    {refalrts::icsVarLeft, 0, 8, 2},
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::ictVarLeft, 0, 9, 4},
    // closed e.NextStateName#1 as range 4
    //4: e.NextStateName#1
    //6: e.FlushName#1
    //8: s.Char#1
    //9: t.SrcPos#1
    //22: s.Char#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 10},
    {refalrts::icString, 0, 3, 11},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 13},
    {refalrts::icFunc, 0, 0, 14},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 15},
    {refalrts::icString, 0, 9, 16},
    {refalrts::icString, 0, 8, 18},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 20},
    {refalrts::icFunc, 0, 0, 21},
    {refalrts::icCopySTVar, 22, 8, 0},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 23},
    {refalrts::icString, 0, 7, 24},
    {refalrts::icString, 0, 6, 26},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 28},
    {refalrts::icLinkBrackets, 10, 28, 0},
    {refalrts::icSpliceElem, 0, 0, 28},
    {refalrts::icSpliceRange, 0, 0, 26},
    {refalrts::icSpliceEVar, 0, 0, 4},
    {refalrts::icSpliceRange, 0, 0, 24},
    {refalrts::icPushStack, 0, 0, 23},
    {refalrts::icPushStack, 0, 0, 20},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icSpliceSTVar, 0, 0, 22},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceRange, 0, 0, 18},
    {refalrts::icSpliceEVar, 0, 0, 6},
    {refalrts::icSpliceRange, 0, 0, 16},
    {refalrts::icPushStack, 0, 0, 15},
    {refalrts::icPushStack, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceSTVar, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceRange, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +31, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( s.Char#1/6 ( # FlushError e.Message#1/4 ) # Finitive )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icIdentRight, 0, 1, 2},
    {refalrts::icBracketRight, 0, 4, 2},
    {refalrts::icIdentLeft, 0, 0, 4},
    {refalrts::icEmpty, 0, 0, 0},
    // closed e.Message#1 as range 4
    {refalrts::icsVarLeft, 0, 6, 2},
    {refalrts::icEmpty, 0, 0, 2},
    //4: e.Message#1
    //6: s.Char#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 7},
    {refalrts::icString, 0, 3, 8},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 10},
    {refalrts::icFunc, 0, 0, 11},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 12},
    {refalrts::icString, 0, 5, 13},
    {refalrts::icString, 0, 4, 15},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 17},
    {refalrts::icLinkBrackets, 7, 17, 0},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceRange, 0, 0, 15},
    {refalrts::icSpliceEVar, 0, 0, 4},
    {refalrts::icSpliceRange, 0, 0, 13},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icPushStack, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceSTVar, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceRange, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( s.Char#1/8 ( # FlushError e.Message#1/6 ) ( t.SrcPos#1/9 e.NextStateName#1/4 ) )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketRight, 0, 4, 2},
    {refalrts::icBracketRight, 0, 6, 2},
    {refalrts::icIdentLeft, 0, 0, 6},
    {refalrts::icEmpty, 0, 0, 0},
    // closed e.Message#1 as range 6
    {refalrts::icsVarLeft, 0, 8, 2},
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::ictVarLeft, 0, 9, 4},
    // closed e.NextStateName#1 as range 4
    //4: e.NextStateName#1
    //6: e.Message#1
    //8: s.Char#1
    //9: t.SrcPos#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 10},
    {refalrts::icString, 0, 3, 11},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 13},
    {refalrts::icFunc, 0, 0, 14},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 15},
    {refalrts::icString, 0, 2, 16},
    {refalrts::icString, 0, 1, 18},
    {refalrts::icString, 0, 0, 20},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 22},
    {refalrts::icLinkBrackets, 10, 22, 0},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceRange, 0, 0, 20},
    {refalrts::icSpliceEVar, 0, 0, 4},
    {refalrts::icSpliceRange, 0, 0, 18},
    {refalrts::icSpliceEVar, 0, 0, 6},
    {refalrts::icSpliceRange, 0, 0, 16},
    {refalrts::icPushStack, 0, 0, 15},
    {refalrts::icPushStack, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceSTVar, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceRange, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[15];
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
    // ( # Empty # None # Finitive )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_Empty<int>::name, context[2], context[3] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_None<int>::name, context[2], context[3] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_Finitive<int>::name, context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[4] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[5], context[6], "  (e.Accum) = (#TokenAccum e.Accum) ;", 37 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[7] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[4], context[7] );
    res = refalrts::splice_elem( res, context[7] );
    res = refalrts::splice_evar( res, context[5], context[6] );
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
    // ( # Empty # None ( t.SrcPos#1/6 e.NextStateName#1/4 ) )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_Empty<int>::name, context[2], context[3] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_None<int>::name, context[2], context[3] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    if( ! refalrts::tvar_left( context[6], context[4], context[5] ) )
      continue;
    // closed e.NextStateName#1 as range 4
    //4: e.NextStateName#1
    //6: t.SrcPos#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[7] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[8], context[9], "  (e.Accum) e.Text = <", 22 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[10], context[11], " (e.Accum) e.Text>;", 19 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[12] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[7], context[12] );
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_evar( res, context[10], context[11] );
    res = refalrts::splice_evar( res, context[4], context[5] );
    res = refalrts::splice_evar( res, context[8], context[9] );
    res = refalrts::splice_elem( res, context[7] );
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
    // ( # Empty # Unnamed # Finitive )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_Empty<int>::name, context[2], context[3] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_Unnamed<int>::name, context[2], context[3] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_Finitive<int>::name, context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[4] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[5], context[6], "  (e.Accum) = ;", 15 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[7] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[4], context[7] );
    res = refalrts::splice_elem( res, context[7] );
    res = refalrts::splice_evar( res, context[5], context[6] );
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
    // ( # Empty # Unnamed ( t.SrcPos#1/6 e.NextStateName#1/4 ) )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_Empty<int>::name, context[2], context[3] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_Unnamed<int>::name, context[2], context[3] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    if( ! refalrts::tvar_left( context[6], context[4], context[5] ) )
      continue;
    // closed e.NextStateName#1 as range 4
    //4: e.NextStateName#1
    //6: t.SrcPos#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[7] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[8], context[9], "  (e.Accum) e.Text = <", 22 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[10], context[11], " () e.Text>;", 12 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[12] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[7], context[12] );
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_evar( res, context[10], context[11] );
    res = refalrts::splice_evar( res, context[4], context[5] );
    res = refalrts::splice_evar( res, context[8], context[9] );
    res = refalrts::splice_elem( res, context[7] );
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
    // ( # Empty ( # Flush e.FlushName#1/4 ) # Finitive )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_Empty<int>::name, context[2], context[3] ) )
      continue;
    if( ! refalrts::ident_right(  & ident_Finitive<int>::name, context[2], context[3] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[2], context[3] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_Flush<int>::name, context[4], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    // closed e.FlushName#1 as range 4
    //4: e.FlushName#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[7], context[8], "  (e.Accum) =  (", 16 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[9], context[10], " e.Accum);", 10 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[11] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[6], context[11] );
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[4], context[5] );
    res = refalrts::splice_evar( res, context[7], context[8] );
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
    // ( # Empty ( # Flush e.FlushName#1/4 ) ( t.SrcPos#1/8 e.NextStateName#1/6 ) )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_Empty<int>::name, context[2], context[3] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[2], context[3] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_Flush<int>::name, context[4], context[5] ) )
      continue;
    context[6] = 0;
    context[7] = 0;
    if( ! refalrts::brackets_left( context[6], context[7], context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    // closed e.FlushName#1 as range 4
    if( ! refalrts::tvar_left( context[8], context[6], context[7] ) )
      continue;
    // closed e.NextStateName#1 as range 6
    //4: e.FlushName#1
    //6: e.NextStateName#1
    //8: t.SrcPos#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[9] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[10], context[11], "  (e.Accum) e.Text =", 20 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[14], context[15], "    (", 5 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[16], context[17], " e.Accum) <", 11 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[18], context[19], " () e.Text>;", 12 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[20] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[13], context[20] );
    res = refalrts::splice_elem( res, context[20] );
    res = refalrts::splice_evar( res, context[18], context[19] );
    res = refalrts::splice_evar( res, context[6], context[7] );
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_evar( res, context[4], context[5] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    res = refalrts::splice_elem( res, context[13] );
    refalrts::link_brackets( context[9], context[12] );
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_evar( res, context[10], context[11] );
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
    // ( # Empty ( # FlushError e.Message#1/4 ) # Finitive )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_Empty<int>::name, context[2], context[3] ) )
      continue;
    if( ! refalrts::ident_right(  & ident_Finitive<int>::name, context[2], context[3] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[2], context[3] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_FlushError<int>::name, context[4], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    // closed e.Message#1 as range 4
    //4: e.Message#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[7], context[8], "  (e.Accum) = (#TokenError \'", 28 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[9], context[10], "\');", 3 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[11] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[6], context[11] );
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[4], context[5] );
    res = refalrts::splice_evar( res, context[7], context[8] );
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
    // ( # Empty ( # FlushError e.Message#1/4 ) ( t.SrcPos#1/8 e.NextStateName#1/6 ) )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_Empty<int>::name, context[2], context[3] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[2], context[3] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_FlushError<int>::name, context[4], context[5] ) )
      continue;
    context[6] = 0;
    context[7] = 0;
    if( ! refalrts::brackets_left( context[6], context[7], context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    // closed e.Message#1 as range 4
    if( ! refalrts::tvar_left( context[8], context[6], context[7] ) )
      continue;
    // closed e.NextStateName#1 as range 6
    //4: e.Message#1
    //6: e.NextStateName#1
    //8: t.SrcPos#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[9] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[10], context[11], "  (e.Accum) e.Text = (#TokenError \'", 35 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[12], context[13], "\') <", 4 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[14], context[15], " () e.Text>;", 12 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[16] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[9], context[16] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    res = refalrts::splice_evar( res, context[6], context[7] );
    res = refalrts::splice_evar( res, context[12], context[13] );
    res = refalrts::splice_evar( res, context[4], context[5] );
    res = refalrts::splice_evar( res, context[10], context[11] );
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
    // ( s.Char#1/4 # None # Finitive )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_right(  & ident_Finitive<int>::name, context[2], context[3] ) )
      continue;
    if( ! refalrts::ident_right(  & ident_None<int>::name, context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[4], context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    //4: s.Char#1
    //15: s.Char#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[5] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[6], context[7], "  (e.Accum) ", 12 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[9], EC, "EC" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[11], context[12], " = (#TokenAccum e.Accum ", 24 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[14], EC, "EC" ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[15], context[4]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[17], context[18], ");", 2 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[19] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[5], context[19] );
    res = refalrts::splice_elem( res, context[19] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    refalrts::push_stack( context[16] );
    refalrts::push_stack( context[13] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_stvar( res, context[15] );
    res = refalrts::splice_elem( res, context[14] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    refalrts::push_stack( context[10] );
    refalrts::push_stack( context[8] );
    res = refalrts::splice_elem( res, context[10] );
    res = refalrts::splice_stvar( res, context[4] );
    res = refalrts::splice_elem( res, context[9] );
    res = refalrts::splice_elem( res, context[8] );
    res = refalrts::splice_evar( res, context[6], context[7] );
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
    // ( s.Char#1/6 # None ( t.SrcPos#1/7 e.NextStateName#1/4 ) )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_right( context[4], context[5], context[2], context[3] ) )
      continue;
    if( ! refalrts::ident_right(  & ident_None<int>::name, context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    if( ! refalrts::tvar_left( context[7], context[4], context[5] ) )
      continue;
    // closed e.NextStateName#1 as range 4
    //4: e.NextStateName#1
    //6: s.Char#1
    //7: t.SrcPos#1
    //20: s.Char#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[9], context[10], "  (e.Accum) ", 12 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[12], EC, "EC" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[14], context[15], " e.Text = <", 11 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[16], context[17], " (e.Accum ", 10 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[18] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[19], EC, "EC" ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[20], context[6]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[21] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[22], context[23], ") e.Text>;", 10 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[24] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[8], context[24] );
    res = refalrts::splice_elem( res, context[24] );
    res = refalrts::splice_evar( res, context[22], context[23] );
    refalrts::push_stack( context[21] );
    refalrts::push_stack( context[18] );
    res = refalrts::splice_elem( res, context[21] );
    res = refalrts::splice_stvar( res, context[20] );
    res = refalrts::splice_elem( res, context[19] );
    res = refalrts::splice_elem( res, context[18] );
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_evar( res, context[4], context[5] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    refalrts::push_stack( context[13] );
    refalrts::push_stack( context[11] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_stvar( res, context[6] );
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_evar( res, context[9], context[10] );
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
    // ( s.Char#1/4 # Unnamed # Finitive )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_right(  & ident_Finitive<int>::name, context[2], context[3] ) )
      continue;
    if( ! refalrts::ident_right(  & ident_Unnamed<int>::name, context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[4], context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    //4: s.Char#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[5] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[6], context[7], "  (e.Accum) ", 12 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[9], EC, "EC" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[11], context[12], " = ;", 4 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[13] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[5], context[13] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    refalrts::push_stack( context[10] );
    refalrts::push_stack( context[8] );
    res = refalrts::splice_elem( res, context[10] );
    res = refalrts::splice_stvar( res, context[4] );
    res = refalrts::splice_elem( res, context[9] );
    res = refalrts::splice_elem( res, context[8] );
    res = refalrts::splice_evar( res, context[6], context[7] );
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
    // ( s.Char#1/6 # Unnamed ( t.SrcPos#1/7 e.NextStateName#1/4 ) )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_right( context[4], context[5], context[2], context[3] ) )
      continue;
    if( ! refalrts::ident_right(  & ident_Unnamed<int>::name, context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    if( ! refalrts::tvar_left( context[7], context[4], context[5] ) )
      continue;
    // closed e.NextStateName#1 as range 4
    //4: e.NextStateName#1
    //6: s.Char#1
    //7: t.SrcPos#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[9], context[10], "  (e.Accum) ", 12 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[12], EC, "EC" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[14], context[15], " e.Text = <", 11 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[16], context[17], " () e.Text>;", 12 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[18] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[8], context[18] );
    res = refalrts::splice_elem( res, context[18] );
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_evar( res, context[4], context[5] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    refalrts::push_stack( context[13] );
    refalrts::push_stack( context[11] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_stvar( res, context[6] );
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_evar( res, context[9], context[10] );
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
    // ( s.Char#1/6 ( # Flush e.FlushName#1/4 ) # Finitive )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_right(  & ident_Finitive<int>::name, context[2], context[3] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_right( context[4], context[5], context[2], context[3] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_Flush<int>::name, context[4], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    // closed e.FlushName#1 as range 4
    if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    //4: e.FlushName#1
    //6: s.Char#1
    //19: s.Char#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[7] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[8], context[9], "  (e.Accum) ", 12 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[11], EC, "EC" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[13], context[14], " = (", 4 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[15], context[16], " e.Accum ", 9 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[17] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[18], EC, "EC" ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[19], context[6]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[20] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[21], context[22], ");", 2 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[23] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[7], context[23] );
    res = refalrts::splice_elem( res, context[23] );
    res = refalrts::splice_evar( res, context[21], context[22] );
    refalrts::push_stack( context[20] );
    refalrts::push_stack( context[17] );
    res = refalrts::splice_elem( res, context[20] );
    res = refalrts::splice_stvar( res, context[19] );
    res = refalrts::splice_elem( res, context[18] );
    res = refalrts::splice_elem( res, context[17] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[4], context[5] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    refalrts::push_stack( context[12] );
    refalrts::push_stack( context[10] );
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_stvar( res, context[6] );
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_elem( res, context[10] );
    res = refalrts::splice_evar( res, context[8], context[9] );
    res = refalrts::splice_elem( res, context[7] );
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
    // ( s.Char#1/8 ( # Flush e.FlushName#1/6 ) ( t.SrcPos#1/9 e.NextStateName#1/4 ) )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_right( context[4], context[5], context[2], context[3] ) )
      continue;
    context[6] = 0;
    context[7] = 0;
    if( ! refalrts::brackets_right( context[6], context[7], context[2], context[3] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_Flush<int>::name, context[6], context[7] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    // closed e.FlushName#1 as range 6
    if( ! refalrts::svar_left( context[8], context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    if( ! refalrts::tvar_left( context[9], context[4], context[5] ) )
      continue;
    // closed e.NextStateName#1 as range 4
    //4: e.NextStateName#1
    //6: e.FlushName#1
    //8: s.Char#1
    //9: t.SrcPos#1
    //22: s.Char#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[11], context[12], "  (e.Accum) ", 12 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[14], EC, "EC" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[15] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[16], context[17], " e.Text = (", 11 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[18], context[19], " e.Accum ", 9 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[20] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[21], EC, "EC" ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[22], context[8]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[23] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[24], context[25], ") <", 3 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[26], context[27], " () e.Text>;", 12 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[28] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[10], context[28] );
    res = refalrts::splice_elem( res, context[28] );
    res = refalrts::splice_evar( res, context[26], context[27] );
    res = refalrts::splice_evar( res, context[4], context[5] );
    res = refalrts::splice_evar( res, context[24], context[25] );
    refalrts::push_stack( context[23] );
    refalrts::push_stack( context[20] );
    res = refalrts::splice_elem( res, context[23] );
    res = refalrts::splice_stvar( res, context[22] );
    res = refalrts::splice_elem( res, context[21] );
    res = refalrts::splice_elem( res, context[20] );
    res = refalrts::splice_evar( res, context[18], context[19] );
    res = refalrts::splice_evar( res, context[6], context[7] );
    res = refalrts::splice_evar( res, context[16], context[17] );
    refalrts::push_stack( context[15] );
    refalrts::push_stack( context[13] );
    res = refalrts::splice_elem( res, context[15] );
    res = refalrts::splice_stvar( res, context[8] );
    res = refalrts::splice_elem( res, context[14] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_evar( res, context[11], context[12] );
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
    // ( s.Char#1/6 ( # FlushError e.Message#1/4 ) # Finitive )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_right(  & ident_Finitive<int>::name, context[2], context[3] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_right( context[4], context[5], context[2], context[3] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_FlushError<int>::name, context[4], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    // closed e.Message#1 as range 4
    if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    //4: e.Message#1
    //6: s.Char#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[7] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[8], context[9], "  (e.Accum) ", 12 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[11], EC, "EC" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[13], context[14], " = (#TokenError \'", 17 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[15], context[16], "\');", 3 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[17] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[7], context[17] );
    res = refalrts::splice_elem( res, context[17] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[4], context[5] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    refalrts::push_stack( context[12] );
    refalrts::push_stack( context[10] );
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_stvar( res, context[6] );
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_elem( res, context[10] );
    res = refalrts::splice_evar( res, context[8], context[9] );
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
  // ( s.Char#1/8 ( # FlushError e.Message#1/6 ) ( t.SrcPos#1/9 e.NextStateName#1/4 ) )
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[4] = 0;
  context[5] = 0;
  if( ! refalrts::brackets_right( context[4], context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[6] = 0;
  context[7] = 0;
  if( ! refalrts::brackets_right( context[6], context[7], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::ident_left(  & ident_FlushError<int>::name, context[6], context[7] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Message#1 as range 6
  if( ! refalrts::svar_left( context[8], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::tvar_left( context[9], context[4], context[5] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.NextStateName#1 as range 4
  //4: e.NextStateName#1
  //6: e.Message#1
  //8: s.Char#1
  //9: t.SrcPos#1

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_bracket( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[11], context[12], "  (e.Accum) ", 12 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[14], EC, "EC" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[16], context[17], " e.Text = (#TokenError \'", 24 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[18], context[19], "\') <", 4 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[20], context[21], " () e.Text >;", 13 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[22] ) )
    return refalrts::cNoMemory;
  refalrts::link_brackets( context[10], context[22] );
  res = refalrts::splice_elem( res, context[22] );
  res = refalrts::splice_evar( res, context[20], context[21] );
  res = refalrts::splice_evar( res, context[4], context[5] );
  res = refalrts::splice_evar( res, context[18], context[19] );
  res = refalrts::splice_evar( res, context[6], context[7] );
  res = refalrts::splice_evar( res, context[16], context[17] );
  refalrts::push_stack( context[15] );
  refalrts::push_stack( context[13] );
  res = refalrts::splice_elem( res, context[15] );
  res = refalrts::splice_stvar( res, context[8] );
  res = refalrts::splice_elem( res, context[14] );
  res = refalrts::splice_elem( res, context[13] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_elem( res, context[10] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult EC(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 8 elems
  refalrts::Iter context[8];
  refalrts::zeros( context, 8 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { EscapeChar, "EscapeChar" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_Any<int>::name
  };
  using refalrts::numbers;
  static const refalrts::StringItem strings[] = {
    {"s.Any", 5}
  };
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +7, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // # Any
    {refalrts::icIdentLeft, 0, 0, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icString, 0, 0, 2},
    {refalrts::icSpliceRange, 0, 0, 2},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // s.Other#1/2
    {refalrts::icsVarLeft, 0, 2, 0},
    {refalrts::icEmpty, 0, 0, 0},
    //2: s.Other#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icChar, 0, '\'', 3},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 4},
    {refalrts::icFunc, 0, 0, 5},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 6},
    {refalrts::icChar, 0, '\'', 7},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icPushStack, 0, 0, 6},
    {refalrts::icPushStack, 0, 0, 4},
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
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    // # Any
    if( ! refalrts::ident_left(  & ident_Any<int>::name, context[0], context[1] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_chars( context[2], context[3], "s.Any", 5 ) )
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
  // s.Other#1/2
  if( ! refalrts::svar_left( context[2], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  //2: s.Other#1

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_char( context[3], '\'' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[4] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[5], EscapeChar, "EscapeChar" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[7], '\'' ) )
    return refalrts::cNoMemory;
  res = refalrts::splice_elem( res, context[7] );
  refalrts::push_stack( context[6] );
  refalrts::push_stack( context[4] );
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

static refalrts::FnResult Parse(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { ParseElements, "ParseElements" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  static const refalrts::StringItem strings[] = {
    {"Any", 3}
  };
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    // e.Tokens#1/0
    // closed e.Tokens#1 as range 0
    //0: e.Tokens#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 2},
    {refalrts::icFunc, 0, 0, 3},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 4},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 5},
    {refalrts::icString, 0, 0, 6},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 8},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 9},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 10},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 11},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 12},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icPushStack, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icLinkBrackets, 10, 11, 0},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icLinkBrackets, 4, 9, 0},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icLinkBrackets, 5, 8, 0},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceRange, 0, 0, 6},
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
  // e.Tokens#1/0
  // closed e.Tokens#1 as range 0
  //0: e.Tokens#1

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_call( context[2] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[3], ParseElements, "ParseElements" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[4] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[5] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[6], context[7], "Any", 3 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[12] ) )
    return refalrts::cNoMemory;
  refalrts::push_stack( context[12] );
  refalrts::push_stack( context[2] );
  res = refalrts::splice_elem( res, context[12] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  refalrts::link_brackets( context[10], context[11] );
  res = refalrts::splice_elem( res, context[11] );
  res = refalrts::splice_elem( res, context[10] );
  refalrts::link_brackets( context[4], context[9] );
  res = refalrts::splice_elem( res, context[9] );
  refalrts::link_brackets( context[5], context[8] );
  res = refalrts::splice_elem( res, context[8] );
  res = refalrts::splice_evar( res, context[6], context[7] );
  res = refalrts::splice_elem( res, context[5] );
  res = refalrts::splice_elem( res, context[4] );
  res = refalrts::splice_elem( res, context[3] );
  res = refalrts::splice_elem( res, context[2] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult ParseElements(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 24 elems
  refalrts::Iter context[24];
  refalrts::zeros( context, 24 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { UnexpectedToken, "UnexpectedToken" },
    { ParseSentence, "ParseSentence" },
    { ErrorAt, "ErrorAt" },
    { ParseSetDescr, "ParseSetDescr" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_TEOF<int>::name,
    & ident_TName<int>::name,
    & ident_TSetName<int>::name
  };
  using refalrts::numbers;
  static const refalrts::StringItem strings[] = {
    {"name or set name", 16},
    {" redeclared", 11},
    {"Name ", 5},
    {"Set name ", 9}
  };
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +28, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Sets_B#1/9 ( e.Name#1/13 ) e.Sets_E#1/15 ) ( e.Rules#1/4 ) ( # TSetName s.LineNumber#1/8 e.Name#1/6 ) e.Tail#1/0
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icBracketLeft, 0, 6, 0},
    {refalrts::icIdentLeft, 0, 2, 6},
    // closed e.Rules#1 as range 4
    // closed e.Tail#1 as range 0
    {refalrts::icsVarLeft, 0, 8, 6},
    // closed e.Name#1 as range 6
    {refalrts::icEPrepare, 0, 9, 2},
    {refalrts::icEStart, 0, 9, 2},
    {refalrts::icSave, 0, 15, 2},
    {refalrts::icBracketLeft, 0, 11, 15},
    {refalrts::iceRepeatLeft, 13, 6, 11},
    {refalrts::icEmpty, 0, 0, 11},
    // closed e.Sets_E#1 as range 2
    //0: e.Tail#1
    //4: e.Rules#1
    //6: e.Name#1
    //8: s.LineNumber#1
    //9: e.Sets_B#1
    //13: e.Name#1
    //15: e.Sets_E#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 17},
    {refalrts::icFunc, 0, 2, 18},
    {refalrts::icString, 0, 3, 19},
    {refalrts::icString, 0, 1, 21},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 23},
    {refalrts::icPushStack, 0, 0, 23},
    {refalrts::icPushStack, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icSpliceRange, 0, 0, 21},
    {refalrts::icSpliceEVar, 0, 0, 6},
    {refalrts::icSpliceRange, 0, 0, 19},
    {refalrts::icSpliceSTVar, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +42, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Sets#1/2 ) ( e.Rules#1/4 ) ( # TSetName t.SrcPos#1/8 e.Name#1/6 ) e.Tail#1/0
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icBracketLeft, 0, 6, 0},
    {refalrts::icIdentLeft, 0, 2, 6},
    // closed e.Sets#1 as range 2
    // closed e.Rules#1 as range 4
    // closed e.Tail#1 as range 0
    {refalrts::ictVarLeft, 0, 8, 6},
    // closed e.Name#1 as range 6
    //0: e.Tail#1
    //2: e.Sets#1
    //4: e.Rules#1
    //6: e.Name#1
    //8: t.SrcPos#1
    //18: e.Name#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 9},
    {refalrts::icFunc, 0, 3, 10},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 11},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 12},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 13},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 14},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 15},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 16},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 17},
    {refalrts::icCopyEVar, 18, 6, 0},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 20},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 21},
    {refalrts::icPushStack, 0, 0, 21},
    {refalrts::icPushStack, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icLinkBrackets, 17, 20, 0},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceEVar, 0, 0, 18},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icLinkBrackets, 15, 16, 0},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceEVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icLinkBrackets, 11, 14, 0},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icLinkBrackets, 12, 13, 0},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceEVar, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +28, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Sets#1/2 ) ( e.Rules_B#1/9 ( e.Name#1/13 ) e.Rules_E#1/15 ) ( # TName s.LineNumber#1/8 e.Name#1/6 ) e.Tail#1/0
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icBracketLeft, 0, 6, 0},
    {refalrts::icIdentLeft, 0, 1, 6},
    // closed e.Sets#1 as range 2
    // closed e.Tail#1 as range 0
    {refalrts::icsVarLeft, 0, 8, 6},
    // closed e.Name#1 as range 6
    {refalrts::icEPrepare, 0, 9, 4},
    {refalrts::icEStart, 0, 9, 4},
    {refalrts::icSave, 0, 15, 4},
    {refalrts::icBracketLeft, 0, 11, 15},
    {refalrts::iceRepeatLeft, 13, 6, 11},
    {refalrts::icEmpty, 0, 0, 11},
    // closed e.Rules_E#1 as range 4
    //0: e.Tail#1
    //2: e.Sets#1
    //6: e.Name#1
    //8: s.LineNumber#1
    //9: e.Rules_B#1
    //13: e.Name#1
    //15: e.Rules_E#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 17},
    {refalrts::icFunc, 0, 2, 18},
    {refalrts::icString, 0, 2, 19},
    {refalrts::icString, 0, 1, 21},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 23},
    {refalrts::icPushStack, 0, 0, 23},
    {refalrts::icPushStack, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icSpliceRange, 0, 0, 21},
    {refalrts::icSpliceEVar, 0, 0, 6},
    {refalrts::icSpliceRange, 0, 0, 19},
    {refalrts::icSpliceSTVar, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +42, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Sets#1/2 ) ( e.Rules#1/4 ) ( # TName t.SrcPos#1/8 e.Name#1/6 ) e.Tail#1/0
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icBracketLeft, 0, 6, 0},
    {refalrts::icIdentLeft, 0, 1, 6},
    // closed e.Sets#1 as range 2
    // closed e.Rules#1 as range 4
    // closed e.Tail#1 as range 0
    {refalrts::ictVarLeft, 0, 8, 6},
    // closed e.Name#1 as range 6
    //0: e.Tail#1
    //2: e.Sets#1
    //4: e.Rules#1
    //6: e.Name#1
    //8: t.SrcPos#1
    //18: e.Name#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 9},
    {refalrts::icFunc, 0, 1, 10},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 11},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 12},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 13},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 14},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 15},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 16},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 17},
    {refalrts::icCopyEVar, 18, 6, 0},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 20},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 21},
    {refalrts::icPushStack, 0, 0, 21},
    {refalrts::icPushStack, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icLinkBrackets, 17, 20, 0},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceEVar, 0, 0, 18},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icLinkBrackets, 13, 16, 0},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icLinkBrackets, 14, 15, 0},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceEVar, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceEVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icLinkBrackets, 11, 12, 0},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +9, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Sets#1/2 ) ( e.Rules#1/4 ) ( # TEOF t.SrcPos#1/8 ) e.Tail#1/0
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icBracketLeft, 0, 6, 0},
    {refalrts::icIdentLeft, 0, 0, 6},
    // closed e.Sets#1 as range 2
    // closed e.Rules#1 as range 4
    // closed e.Tail#1 as range 0
    {refalrts::ictVarLeft, 0, 8, 6},
    {refalrts::icEmpty, 0, 0, 6},
    //0: e.Tail#1
    //2: e.Sets#1
    //4: e.Rules#1
    //8: t.SrcPos#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Sets#1/2 ) ( e.Rules#1/4 ) t.Unexpected#1/6 e.Tail#1/0
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    // closed e.Sets#1 as range 2
    // closed e.Rules#1 as range 4
    {refalrts::ictVarLeft, 0, 6, 0},
    // closed e.Tail#1 as range 0
    //0: e.Tail#1
    //2: e.Sets#1
    //4: e.Rules#1
    //6: t.Unexpected#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 7},
    {refalrts::icFunc, 0, 0, 8},
    {refalrts::icString, 0, 0, 9},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 11},
    {refalrts::icPushStack, 0, 0, 11},
    {refalrts::icPushStack, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceRange, 0, 0, 9},
    {refalrts::icSpliceSTVar, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[7];
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
    // ( e.Sets_B#1/9 ( e.Name#1/13 ) e.Sets_E#1/15 ) ( e.Rules#1/4 ) ( # TSetName s.LineNumber#1/8 e.Name#1/6 ) e.Tail#1/0
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
    if( ! refalrts::ident_left(  & ident_TSetName<int>::name, context[6], context[7] ) )
      continue;
    // closed e.Rules#1 as range 4
    // closed e.Tail#1 as range 0
    if( ! refalrts::svar_left( context[8], context[6], context[7] ) )
      continue;
    // closed e.Name#1 as range 6
    context[9] = 0;
    context[10] = 0;
    refalrts::start_e_loop();
    do {
      context[15] = context[2];
      context[16] = context[3];
      context[11] = 0;
      context[12] = 0;
      if( ! refalrts::brackets_left( context[11], context[12], context[15], context[16] ) )
        continue;
      if( ! refalrts::repeated_evar_left( context[13], context[14], context[6], context[7], context[11], context[12] ) )
        continue;
      if( ! refalrts::empty_seq( context[11], context[12] ) )
        continue;
      // closed e.Sets_E#1 as range 2
      //0: e.Tail#1
      //4: e.Rules#1
      //6: e.Name#1
      //8: s.LineNumber#1
      //9: e.Sets_B#1
      //13: e.Name#1
      //15: e.Sets_E#1

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::alloc_open_call( context[17] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[18], ErrorAt, "ErrorAt" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_chars( context[19], context[20], "Set name ", 9 ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_chars( context[21], context[22], " redeclared", 11 ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[23] ) )
        return refalrts::cNoMemory;
      refalrts::push_stack( context[23] );
      refalrts::push_stack( context[17] );
      res = refalrts::splice_elem( res, context[23] );
      res = refalrts::splice_evar( res, context[21], context[22] );
      res = refalrts::splice_evar( res, context[6], context[7] );
      res = refalrts::splice_evar( res, context[19], context[20] );
      res = refalrts::splice_stvar( res, context[8] );
      res = refalrts::splice_elem( res, context[18] );
      res = refalrts::splice_elem( res, context[17] );
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
    // ( e.Sets#1/2 ) ( e.Rules#1/4 ) ( # TSetName t.SrcPos#1/8 e.Name#1/6 ) e.Tail#1/0
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
    if( ! refalrts::ident_left(  & ident_TSetName<int>::name, context[6], context[7] ) )
      continue;
    // closed e.Sets#1 as range 2
    // closed e.Rules#1 as range 4
    // closed e.Tail#1 as range 0
    if( ! refalrts::tvar_left( context[8], context[6], context[7] ) )
      continue;
    // closed e.Name#1 as range 6
    //0: e.Tail#1
    //2: e.Sets#1
    //4: e.Rules#1
    //6: e.Name#1
    //8: t.SrcPos#1
    //18: e.Name#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[9] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[10], ParseSetDescr, "ParseSetDescr" ) )
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
    if( ! refalrts::alloc_open_bracket( context[17] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[18], context[19], context[6], context[7]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[20] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[21] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[21] );
    refalrts::push_stack( context[9] );
    res = refalrts::splice_elem( res, context[21] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    refalrts::link_brackets( context[17], context[20] );
    res = refalrts::splice_elem( res, context[20] );
    res = refalrts::splice_evar( res, context[18], context[19] );
    res = refalrts::splice_elem( res, context[17] );
    refalrts::link_brackets( context[15], context[16] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_evar( res, context[4], context[5] );
    res = refalrts::splice_elem( res, context[15] );
    refalrts::link_brackets( context[11], context[14] );
    res = refalrts::splice_elem( res, context[14] );
    refalrts::link_brackets( context[12], context[13] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_evar( res, context[6], context[7] );
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_elem( res, context[11] );
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
    // ( e.Sets#1/2 ) ( e.Rules_B#1/9 ( e.Name#1/13 ) e.Rules_E#1/15 ) ( # TName s.LineNumber#1/8 e.Name#1/6 ) e.Tail#1/0
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
    if( ! refalrts::ident_left(  & ident_TName<int>::name, context[6], context[7] ) )
      continue;
    // closed e.Sets#1 as range 2
    // closed e.Tail#1 as range 0
    if( ! refalrts::svar_left( context[8], context[6], context[7] ) )
      continue;
    // closed e.Name#1 as range 6
    context[9] = 0;
    context[10] = 0;
    refalrts::start_e_loop();
    do {
      context[15] = context[4];
      context[16] = context[5];
      context[11] = 0;
      context[12] = 0;
      if( ! refalrts::brackets_left( context[11], context[12], context[15], context[16] ) )
        continue;
      if( ! refalrts::repeated_evar_left( context[13], context[14], context[6], context[7], context[11], context[12] ) )
        continue;
      if( ! refalrts::empty_seq( context[11], context[12] ) )
        continue;
      // closed e.Rules_E#1 as range 4
      //0: e.Tail#1
      //2: e.Sets#1
      //6: e.Name#1
      //8: s.LineNumber#1
      //9: e.Rules_B#1
      //13: e.Name#1
      //15: e.Rules_E#1

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::alloc_open_call( context[17] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[18], ErrorAt, "ErrorAt" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_chars( context[19], context[20], "Name ", 5 ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_chars( context[21], context[22], " redeclared", 11 ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[23] ) )
        return refalrts::cNoMemory;
      refalrts::push_stack( context[23] );
      refalrts::push_stack( context[17] );
      res = refalrts::splice_elem( res, context[23] );
      res = refalrts::splice_evar( res, context[21], context[22] );
      res = refalrts::splice_evar( res, context[6], context[7] );
      res = refalrts::splice_evar( res, context[19], context[20] );
      res = refalrts::splice_stvar( res, context[8] );
      res = refalrts::splice_elem( res, context[18] );
      res = refalrts::splice_elem( res, context[17] );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[9], context[10], context[4], context[5] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    // ( e.Sets#1/2 ) ( e.Rules#1/4 ) ( # TName t.SrcPos#1/8 e.Name#1/6 ) e.Tail#1/0
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
    if( ! refalrts::ident_left(  & ident_TName<int>::name, context[6], context[7] ) )
      continue;
    // closed e.Sets#1 as range 2
    // closed e.Rules#1 as range 4
    // closed e.Tail#1 as range 0
    if( ! refalrts::tvar_left( context[8], context[6], context[7] ) )
      continue;
    // closed e.Name#1 as range 6
    //0: e.Tail#1
    //2: e.Sets#1
    //4: e.Rules#1
    //6: e.Name#1
    //8: t.SrcPos#1
    //18: e.Name#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[9] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[10], ParseSentence, "ParseSentence" ) )
      return refalrts::cNoMemory;
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
    if( ! refalrts::alloc_open_bracket( context[17] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[18], context[19], context[6], context[7]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[20] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[21] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[21] );
    refalrts::push_stack( context[9] );
    res = refalrts::splice_elem( res, context[21] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    refalrts::link_brackets( context[17], context[20] );
    res = refalrts::splice_elem( res, context[20] );
    res = refalrts::splice_evar( res, context[18], context[19] );
    res = refalrts::splice_elem( res, context[17] );
    refalrts::link_brackets( context[13], context[16] );
    res = refalrts::splice_elem( res, context[16] );
    refalrts::link_brackets( context[14], context[15] );
    res = refalrts::splice_elem( res, context[15] );
    res = refalrts::splice_evar( res, context[6], context[7] );
    res = refalrts::splice_elem( res, context[14] );
    res = refalrts::splice_evar( res, context[4], context[5] );
    res = refalrts::splice_elem( res, context[13] );
    refalrts::link_brackets( context[11], context[12] );
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_elem( res, context[11] );
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
    // ( e.Sets#1/2 ) ( e.Rules#1/4 ) ( # TEOF t.SrcPos#1/8 ) e.Tail#1/0
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
    if( ! refalrts::ident_left(  & ident_TEOF<int>::name, context[6], context[7] ) )
      continue;
    // closed e.Sets#1 as range 2
    // closed e.Rules#1 as range 4
    // closed e.Tail#1 as range 0
    if( ! refalrts::tvar_left( context[8], context[6], context[7] ) )
      continue;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      continue;
    //0: e.Tail#1
    //2: e.Sets#1
    //4: e.Rules#1
    //8: t.SrcPos#1

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
  // ( e.Sets#1/2 ) ( e.Rules#1/4 ) t.Unexpected#1/6 e.Tail#1/0
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[4] = 0;
  context[5] = 0;
  if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Sets#1 as range 2
  // closed e.Rules#1 as range 4
  if( ! refalrts::tvar_left( context[6], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Tail#1 as range 0
  //0: e.Tail#1
  //2: e.Sets#1
  //4: e.Rules#1
  //6: t.Unexpected#1

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_call( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[8], UnexpectedToken, "UnexpectedToken" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[9], context[10], "name or set name", 16 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[11] ) )
    return refalrts::cNoMemory;
  refalrts::push_stack( context[11] );
  refalrts::push_stack( context[7] );
  res = refalrts::splice_elem( res, context[11] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_stvar( res, context[6] );
  res = refalrts::splice_elem( res, context[8] );
  res = refalrts::splice_elem( res, context[7] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult ParseSetDescr(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { UnexpectedToken, "UnexpectedToken" },
    { ParseSetDescr_Sets, "ParseSetDescr_Sets" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_TEquals<int>::name
  };
  using refalrts::numbers;
  static const refalrts::StringItem strings[] = {
    {"\"=\"", 3}
  };
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +37, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Sets#1/2 ) ( e.Rules#1/4 ) ( e.Name#1/6 ) ( # TEquals t.SrcPos#1/10 ) e.Tail#1/0
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icBracketLeft, 0, 6, 0},
    {refalrts::icBracketLeft, 0, 8, 0},
    {refalrts::icIdentLeft, 0, 0, 8},
    // closed e.Sets#1 as range 2
    // closed e.Rules#1 as range 4
    // closed e.Name#1 as range 6
    // closed e.Tail#1 as range 0
    {refalrts::ictVarLeft, 0, 10, 8},
    {refalrts::icEmpty, 0, 0, 8},
    //0: e.Tail#1
    //2: e.Sets#1
    //4: e.Rules#1
    //6: e.Name#1
    //10: t.SrcPos#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 11},
    {refalrts::icFunc, 0, 1, 12},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 13},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 14},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 15},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 16},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 17},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 18},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 19},
    {refalrts::icPushStack, 0, 0, 19},
    {refalrts::icPushStack, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icLinkBrackets, 17, 18, 0},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceEVar, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icLinkBrackets, 15, 16, 0},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceEVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icLinkBrackets, 13, 14, 0},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Sets#1/2 ) ( e.Rules#1/4 ) ( e.Name#1/6 ) t.Unexpected#1/8 e.Tail#1/0
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icBracketLeft, 0, 6, 0},
    // closed e.Sets#1 as range 2
    // closed e.Rules#1 as range 4
    // closed e.Name#1 as range 6
    {refalrts::ictVarLeft, 0, 8, 0},
    // closed e.Tail#1 as range 0
    //0: e.Tail#1
    //2: e.Sets#1
    //4: e.Rules#1
    //6: e.Name#1
    //8: t.Unexpected#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 9},
    {refalrts::icFunc, 0, 0, 10},
    {refalrts::icString, 0, 0, 11},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 13},
    {refalrts::icPushStack, 0, 0, 13},
    {refalrts::icPushStack, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceRange, 0, 0, 11},
    {refalrts::icSpliceSTVar, 0, 0, 8},
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
    // ( e.Sets#1/2 ) ( e.Rules#1/4 ) ( e.Name#1/6 ) ( # TEquals t.SrcPos#1/10 ) e.Tail#1/0
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
    context[8] = 0;
    context[9] = 0;
    if( ! refalrts::brackets_left( context[8], context[9], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_TEquals<int>::name, context[8], context[9] ) )
      continue;
    // closed e.Sets#1 as range 2
    // closed e.Rules#1 as range 4
    // closed e.Name#1 as range 6
    // closed e.Tail#1 as range 0
    if( ! refalrts::tvar_left( context[10], context[8], context[9] ) )
      continue;
    if( ! refalrts::empty_seq( context[8], context[9] ) )
      continue;
    //0: e.Tail#1
    //2: e.Sets#1
    //4: e.Rules#1
    //6: e.Name#1
    //10: t.SrcPos#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[12], ParseSetDescr_Sets, "ParseSetDescr_Sets" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[13] ) )
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
    refalrts::push_stack( context[11] );
    res = refalrts::splice_elem( res, context[19] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    refalrts::link_brackets( context[17], context[18] );
    res = refalrts::splice_elem( res, context[18] );
    res = refalrts::splice_evar( res, context[6], context[7] );
    res = refalrts::splice_elem( res, context[17] );
    refalrts::link_brackets( context[15], context[16] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_evar( res, context[4], context[5] );
    res = refalrts::splice_elem( res, context[15] );
    refalrts::link_brackets( context[13], context[14] );
    res = refalrts::splice_elem( res, context[14] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_elem( res, context[11] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  refalrts::move_left( context[0], context[1] );
  refalrts::move_left( context[0], context[1] );
  refalrts::move_right( context[0], context[1] );
  // ( e.Sets#1/2 ) ( e.Rules#1/4 ) ( e.Name#1/6 ) t.Unexpected#1/8 e.Tail#1/0
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[4] = 0;
  context[5] = 0;
  if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[6] = 0;
  context[7] = 0;
  if( ! refalrts::brackets_left( context[6], context[7], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Sets#1 as range 2
  // closed e.Rules#1 as range 4
  // closed e.Name#1 as range 6
  if( ! refalrts::tvar_left( context[8], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Tail#1 as range 0
  //0: e.Tail#1
  //2: e.Sets#1
  //4: e.Rules#1
  //6: e.Name#1
  //8: t.Unexpected#1

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_call( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[10], UnexpectedToken, "UnexpectedToken" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[11], context[12], "\"=\"", 3 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[13] ) )
    return refalrts::cNoMemory;
  refalrts::push_stack( context[13] );
  refalrts::push_stack( context[9] );
  res = refalrts::splice_elem( res, context[13] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_stvar( res, context[8] );
  res = refalrts::splice_elem( res, context[10] );
  res = refalrts::splice_elem( res, context[9] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult ParseSetDescr_Sets(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { ExtractSets, "ExtractSets" },
    { ParseSetDescr_Sets_Aux, "ParseSetDescr_Sets_Aux" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Sets#1/2 ) ( e.Rules#1/4 ) ( e.Name#1/6 ) e.Tail#1/0
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icBracketLeft, 0, 6, 0},
    // closed e.Sets#1 as range 2
    // closed e.Rules#1 as range 4
    // closed e.Name#1 as range 6
    // closed e.Tail#1 as range 0
    //0: e.Tail#1
    //2: e.Sets#1
    //4: e.Rules#1
    //6: e.Name#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 8},
    {refalrts::icFunc, 0, 1, 9},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 10},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 11},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 12},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 13},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 14},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 15},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 16},
    {refalrts::icFunc, 0, 0, 17},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 18},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 19},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 20},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 21},
    {refalrts::icPushStack, 0, 0, 21},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icPushStack, 0, 0, 20},
    {refalrts::icPushStack, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icLinkBrackets, 18, 19, 0},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icLinkBrackets, 14, 15, 0},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceEVar, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icLinkBrackets, 12, 13, 0},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceEVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icLinkBrackets, 10, 11, 0},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 9},
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
  // ( e.Sets#1/2 ) ( e.Rules#1/4 ) ( e.Name#1/6 ) e.Tail#1/0
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[4] = 0;
  context[5] = 0;
  if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[6] = 0;
  context[7] = 0;
  if( ! refalrts::brackets_left( context[6], context[7], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Sets#1 as range 2
  // closed e.Rules#1 as range 4
  // closed e.Name#1 as range 6
  // closed e.Tail#1 as range 0
  //0: e.Tail#1
  //2: e.Sets#1
  //4: e.Rules#1
  //6: e.Name#1

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_call( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[9], ParseSetDescr_Sets_Aux, "ParseSetDescr_Sets_Aux" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[16] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[17], ExtractSets, "ExtractSets" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[18] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[19] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[20] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[21] ) )
    return refalrts::cNoMemory;
  refalrts::push_stack( context[21] );
  refalrts::push_stack( context[8] );
  res = refalrts::splice_elem( res, context[21] );
  refalrts::push_stack( context[20] );
  refalrts::push_stack( context[16] );
  res = refalrts::splice_elem( res, context[20] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  refalrts::link_brackets( context[18], context[19] );
  res = refalrts::splice_elem( res, context[19] );
  res = refalrts::splice_elem( res, context[18] );
  res = refalrts::splice_elem( res, context[17] );
  res = refalrts::splice_elem( res, context[16] );
  refalrts::link_brackets( context[14], context[15] );
  res = refalrts::splice_elem( res, context[15] );
  res = refalrts::splice_evar( res, context[6], context[7] );
  res = refalrts::splice_elem( res, context[14] );
  refalrts::link_brackets( context[12], context[13] );
  res = refalrts::splice_elem( res, context[13] );
  res = refalrts::splice_evar( res, context[4], context[5] );
  res = refalrts::splice_elem( res, context[12] );
  refalrts::link_brackets( context[10], context[11] );
  res = refalrts::splice_elem( res, context[11] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_elem( res, context[10] );
  res = refalrts::splice_elem( res, context[9] );
  res = refalrts::splice_elem( res, context[8] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult ExtractSets(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { ExtractSets, "ExtractSets" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_Set<int>::name,
    & ident_TSetName<int>::name,
    & ident_Chars<int>::name,
    & ident_TLiteral<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +30, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Found#1/2 ) ( # TLiteral t.SrcPos#1/6 e.Content#1/4 ) e.Tail#1/0
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icIdentLeft, 0, 3, 4},
    // closed e.Found#1 as range 2
    // closed e.Tail#1 as range 0
    {refalrts::ictVarLeft, 0, 6, 4},
    // closed e.Content#1 as range 4
    //0: e.Tail#1
    //2: e.Found#1
    //4: e.Content#1
    //6: t.SrcPos#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 7},
    {refalrts::icFunc, 0, 0, 8},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 9},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 10},
    {refalrts::icIdent, 0, 2, 11},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 12},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 13},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 14},
    {refalrts::icPushStack, 0, 0, 14},
    {refalrts::icPushStack, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icLinkBrackets, 9, 13, 0},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icLinkBrackets, 10, 12, 0},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceEVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +31, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Found#1/2 ) ( # TSetName t.SrcPos#1/6 e.Name#1/4 ) e.Tail#1/0
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icIdentLeft, 0, 1, 4},
    // closed e.Found#1 as range 2
    // closed e.Tail#1 as range 0
    {refalrts::ictVarLeft, 0, 6, 4},
    // closed e.Name#1 as range 4
    //0: e.Tail#1
    //2: e.Found#1
    //4: e.Name#1
    //6: t.SrcPos#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 7},
    {refalrts::icFunc, 0, 0, 8},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 9},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 10},
    {refalrts::icIdent, 0, 0, 11},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 12},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 13},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 14},
    {refalrts::icPushStack, 0, 0, 14},
    {refalrts::icPushStack, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icLinkBrackets, 9, 13, 0},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icLinkBrackets, 10, 12, 0},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceEVar, 0, 0, 4},
    {refalrts::icSpliceSTVar, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Found#1/2 ) e.OtherTail#1/0
    {refalrts::icBracketLeft, 0, 2, 0},
    // closed e.Found#1 as range 2
    // closed e.OtherTail#1 as range 0
    //0: e.OtherTail#1
    //2: e.Found#1
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
    // ( e.Found#1/2 ) ( # TLiteral t.SrcPos#1/6 e.Content#1/4 ) e.Tail#1/0
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_TLiteral<int>::name, context[4], context[5] ) )
      continue;
    // closed e.Found#1 as range 2
    // closed e.Tail#1 as range 0
    if( ! refalrts::tvar_left( context[6], context[4], context[5] ) )
      continue;
    // closed e.Content#1 as range 4
    //0: e.Tail#1
    //2: e.Found#1
    //4: e.Content#1
    //6: t.SrcPos#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[7] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[8], ExtractSets, "ExtractSets" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[9] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[11], & ident_Chars<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[14] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[14] );
    refalrts::push_stack( context[7] );
    res = refalrts::splice_elem( res, context[14] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    refalrts::link_brackets( context[9], context[13] );
    res = refalrts::splice_elem( res, context[13] );
    refalrts::link_brackets( context[10], context[12] );
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_evar( res, context[4], context[5] );
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_elem( res, context[10] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_elem( res, context[9] );
    res = refalrts::splice_elem( res, context[8] );
    res = refalrts::splice_elem( res, context[7] );
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
    // ( e.Found#1/2 ) ( # TSetName t.SrcPos#1/6 e.Name#1/4 ) e.Tail#1/0
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_TSetName<int>::name, context[4], context[5] ) )
      continue;
    // closed e.Found#1 as range 2
    // closed e.Tail#1 as range 0
    if( ! refalrts::tvar_left( context[6], context[4], context[5] ) )
      continue;
    // closed e.Name#1 as range 4
    //0: e.Tail#1
    //2: e.Found#1
    //4: e.Name#1
    //6: t.SrcPos#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[7] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[8], ExtractSets, "ExtractSets" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[9] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[11], & ident_Set<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[14] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[14] );
    refalrts::push_stack( context[7] );
    res = refalrts::splice_elem( res, context[14] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    refalrts::link_brackets( context[9], context[13] );
    res = refalrts::splice_elem( res, context[13] );
    refalrts::link_brackets( context[10], context[12] );
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_evar( res, context[4], context[5] );
    res = refalrts::splice_stvar( res, context[6] );
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_elem( res, context[10] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_elem( res, context[9] );
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
  // ( e.Found#1/2 ) e.OtherTail#1/0
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Found#1 as range 2
  // closed e.OtherTail#1 as range 0
  //0: e.OtherTail#1
  //2: e.Found#1

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

static refalrts::FnResult ParseSetDescr_Sets_Aux(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 25 elems
  refalrts::Iter context[25];
  refalrts::zeros( context, 25 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { Error, "Error" },
    { UnexpectedToken, "UnexpectedToken" },
    { ParseElements, "ParseElements" },
    { ErrorAt, "ErrorAt" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_Set<int>::name,
    & ident_TDot<int>::name
  };
  using refalrts::numbers;
  static const refalrts::StringItem strings[] = {
    {"Unexpected eof", 14},
    {"dot at end of set", 17},
    {" not have content", 17},
    {"Set ", 4}
  };
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +26, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Sets#1/2 ) ( e.Rules#1/4 ) ( e.Name#1/6 ) ( ) ( # TDot s.LineNumber#1/12 ) e.Tail#1/0
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icBracketLeft, 0, 6, 0},
    {refalrts::icBracketLeft, 0, 8, 0},
    {refalrts::icBracketLeft, 0, 10, 0},
    {refalrts::icIdentLeft, 0, 1, 10},
    {refalrts::icEmpty, 0, 0, 8},
    // closed e.Sets#1 as range 2
    // closed e.Rules#1 as range 4
    // closed e.Name#1 as range 6
    // closed e.Tail#1 as range 0
    {refalrts::icsVarLeft, 0, 12, 10},
    {refalrts::icEmpty, 0, 0, 10},
    //0: e.Tail#1
    //2: e.Sets#1
    //4: e.Rules#1
    //6: e.Name#1
    //12: s.LineNumber#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 13},
    {refalrts::icFunc, 0, 3, 14},
    {refalrts::icString, 0, 3, 15},
    {refalrts::icString, 0, 2, 17},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 19},
    {refalrts::icPushStack, 0, 0, 19},
    {refalrts::icPushStack, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceRange, 0, 0, 17},
    {refalrts::icSpliceEVar, 0, 0, 6},
    {refalrts::icSpliceRange, 0, 0, 15},
    {refalrts::icSpliceSTVar, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +46, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Sets#1/2 ) ( e.Rules#1/4 ) ( e.Name#1/6 ) ( e.Body#1/8 ) ( # TDot t.SrcPos#1/12 ) e.Tail#1/0
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icBracketLeft, 0, 6, 0},
    {refalrts::icBracketLeft, 0, 8, 0},
    {refalrts::icBracketLeft, 0, 10, 0},
    {refalrts::icIdentLeft, 0, 1, 10},
    // closed e.Sets#1 as range 2
    // closed e.Rules#1 as range 4
    // closed e.Name#1 as range 6
    // closed e.Body#1 as range 8
    // closed e.Tail#1 as range 0
    {refalrts::ictVarLeft, 0, 12, 10},
    {refalrts::icEmpty, 0, 0, 10},
    //0: e.Tail#1
    //2: e.Sets#1
    //4: e.Rules#1
    //6: e.Name#1
    //8: e.Body#1
    //12: t.SrcPos#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 13},
    {refalrts::icIdent, 0, 0, 14},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 15},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 16},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 17},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 18},
    {refalrts::icFunc, 0, 2, 19},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 20},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 21},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 22},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 23},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 24},
    {refalrts::icPushStack, 0, 0, 24},
    {refalrts::icPushStack, 0, 0, 18},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icLinkBrackets, 22, 23, 0},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icSpliceEVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icLinkBrackets, 20, 21, 0},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icLinkBrackets, 13, 17, 0},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceEVar, 0, 0, 8},
    {refalrts::icLinkBrackets, 15, 16, 0},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceEVar, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +19, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Sets#1/2 ) ( e.Rules#1/4 ) ( e.Name#1/6 ) ( e.Body#1/8 ) t.Unexpected#1/10 e.Tail#1/0
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icBracketLeft, 0, 6, 0},
    {refalrts::icBracketLeft, 0, 8, 0},
    // closed e.Sets#1 as range 2
    // closed e.Rules#1 as range 4
    // closed e.Name#1 as range 6
    // closed e.Body#1 as range 8
    {refalrts::ictVarLeft, 0, 10, 0},
    // closed e.Tail#1 as range 0
    //0: e.Tail#1
    //2: e.Sets#1
    //4: e.Rules#1
    //6: e.Name#1
    //8: e.Body#1
    //10: t.Unexpected#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 11},
    {refalrts::icFunc, 0, 1, 12},
    {refalrts::icString, 0, 1, 13},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 15},
    {refalrts::icPushStack, 0, 0, 15},
    {refalrts::icPushStack, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceRange, 0, 0, 13},
    {refalrts::icSpliceSTVar, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Sets#1/2 ) ( e.Rules#1/4 ) ( e.Name#1/6 ) ( e.Body#1/8 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icBracketLeft, 0, 6, 0},
    {refalrts::icBracketLeft, 0, 8, 0},
    {refalrts::icEmpty, 0, 0, 0},
    // closed e.Sets#1 as range 2
    // closed e.Rules#1 as range 4
    // closed e.Name#1 as range 6
    // closed e.Body#1 as range 8
    //2: e.Sets#1
    //4: e.Rules#1
    //6: e.Name#1
    //8: e.Body#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 10},
    {refalrts::icFunc, 0, 0, 11},
    {refalrts::icString, 0, 0, 12},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 14},
    {refalrts::icPushStack, 0, 0, 14},
    {refalrts::icPushStack, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceRange, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 10},
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
    // ( e.Sets#1/2 ) ( e.Rules#1/4 ) ( e.Name#1/6 ) ( ) ( # TDot s.LineNumber#1/12 ) e.Tail#1/0
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
    context[8] = 0;
    context[9] = 0;
    if( ! refalrts::brackets_left( context[8], context[9], context[0], context[1] ) )
      continue;
    context[10] = 0;
    context[11] = 0;
    if( ! refalrts::brackets_left( context[10], context[11], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_TDot<int>::name, context[10], context[11] ) )
      continue;
    if( ! refalrts::empty_seq( context[8], context[9] ) )
      continue;
    // closed e.Sets#1 as range 2
    // closed e.Rules#1 as range 4
    // closed e.Name#1 as range 6
    // closed e.Tail#1 as range 0
    if( ! refalrts::svar_left( context[12], context[10], context[11] ) )
      continue;
    if( ! refalrts::empty_seq( context[10], context[11] ) )
      continue;
    //0: e.Tail#1
    //2: e.Sets#1
    //4: e.Rules#1
    //6: e.Name#1
    //12: s.LineNumber#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[14], ErrorAt, "ErrorAt" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[15], context[16], "Set ", 4 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[17], context[18], " not have content", 17 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[19] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[19] );
    refalrts::push_stack( context[13] );
    res = refalrts::splice_elem( res, context[19] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[6], context[7] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_stvar( res, context[12] );
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
    // ( e.Sets#1/2 ) ( e.Rules#1/4 ) ( e.Name#1/6 ) ( e.Body#1/8 ) ( # TDot t.SrcPos#1/12 ) e.Tail#1/0
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
    context[8] = 0;
    context[9] = 0;
    if( ! refalrts::brackets_left( context[8], context[9], context[0], context[1] ) )
      continue;
    context[10] = 0;
    context[11] = 0;
    if( ! refalrts::brackets_left( context[10], context[11], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_TDot<int>::name, context[10], context[11] ) )
      continue;
    // closed e.Sets#1 as range 2
    // closed e.Rules#1 as range 4
    // closed e.Name#1 as range 6
    // closed e.Body#1 as range 8
    // closed e.Tail#1 as range 0
    if( ! refalrts::tvar_left( context[12], context[10], context[11] ) )
      continue;
    if( ! refalrts::empty_seq( context[10], context[11] ) )
      continue;
    //0: e.Tail#1
    //2: e.Sets#1
    //4: e.Rules#1
    //6: e.Name#1
    //8: e.Body#1
    //12: t.SrcPos#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[14], & ident_Set<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[15] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[17] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[18] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[19], ParseElements, "ParseElements" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[20] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[21] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[22] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[23] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[24] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[24] );
    refalrts::push_stack( context[18] );
    res = refalrts::splice_elem( res, context[24] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    refalrts::link_brackets( context[22], context[23] );
    res = refalrts::splice_elem( res, context[23] );
    res = refalrts::splice_evar( res, context[4], context[5] );
    res = refalrts::splice_elem( res, context[22] );
    refalrts::link_brackets( context[20], context[21] );
    res = refalrts::splice_elem( res, context[21] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_elem( res, context[20] );
    res = refalrts::splice_elem( res, context[19] );
    res = refalrts::splice_elem( res, context[18] );
    refalrts::link_brackets( context[13], context[17] );
    res = refalrts::splice_elem( res, context[17] );
    res = refalrts::splice_evar( res, context[8], context[9] );
    refalrts::link_brackets( context[15], context[16] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_evar( res, context[6], context[7] );
    res = refalrts::splice_elem( res, context[15] );
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
    // ( e.Sets#1/2 ) ( e.Rules#1/4 ) ( e.Name#1/6 ) ( e.Body#1/8 ) t.Unexpected#1/10 e.Tail#1/0
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
    context[8] = 0;
    context[9] = 0;
    if( ! refalrts::brackets_left( context[8], context[9], context[0], context[1] ) )
      continue;
    // closed e.Sets#1 as range 2
    // closed e.Rules#1 as range 4
    // closed e.Name#1 as range 6
    // closed e.Body#1 as range 8
    if( ! refalrts::tvar_left( context[10], context[0], context[1] ) )
      continue;
    // closed e.Tail#1 as range 0
    //0: e.Tail#1
    //2: e.Sets#1
    //4: e.Rules#1
    //6: e.Name#1
    //8: e.Body#1
    //10: t.Unexpected#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[12], UnexpectedToken, "UnexpectedToken" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[13], context[14], "dot at end of set", 17 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[15] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[15] );
    refalrts::push_stack( context[11] );
    res = refalrts::splice_elem( res, context[15] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_stvar( res, context[10] );
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_elem( res, context[11] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  refalrts::move_left( context[0], context[1] );
  refalrts::move_left( context[0], context[1] );
  refalrts::move_right( context[0], context[1] );
  // ( e.Sets#1/2 ) ( e.Rules#1/4 ) ( e.Name#1/6 ) ( e.Body#1/8 )
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[4] = 0;
  context[5] = 0;
  if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[6] = 0;
  context[7] = 0;
  if( ! refalrts::brackets_left( context[6], context[7], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[8] = 0;
  context[9] = 0;
  if( ! refalrts::brackets_left( context[8], context[9], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Sets#1 as range 2
  // closed e.Rules#1 as range 4
  // closed e.Name#1 as range 6
  // closed e.Body#1 as range 8
  //2: e.Sets#1
  //4: e.Rules#1
  //6: e.Name#1
  //8: e.Body#1

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_call( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[11], Error, "Error" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[12], context[13], "Unexpected eof", 14 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[14] ) )
    return refalrts::cNoMemory;
  refalrts::push_stack( context[14] );
  refalrts::push_stack( context[10] );
  res = refalrts::splice_elem( res, context[14] );
  res = refalrts::splice_evar( res, context[12], context[13] );
  res = refalrts::splice_elem( res, context[11] );
  res = refalrts::splice_elem( res, context[10] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult ParseSentence(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 25 elems
  refalrts::Iter context[25];
  refalrts::zeros( context, 25 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { UnexpectedToken, "UnexpectedToken" },
    { ExtractAlternatives, "ExtractAlternatives" },
    { ParseSentence_Body, "ParseSentence_Body" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_TEquals<int>::name
  };
  using refalrts::numbers;
  static const refalrts::StringItem strings[] = {
    {"\"=\"", 3}
  };
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +50, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Sets#1/2 ) ( e.Rules#1/4 ) ( e.Name#1/6 ) ( # TEquals t.SrcPos#1/10 ) e.Tail#1/0
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icBracketLeft, 0, 6, 0},
    {refalrts::icBracketLeft, 0, 8, 0},
    {refalrts::icIdentLeft, 0, 0, 8},
    // closed e.Sets#1 as range 2
    // closed e.Rules#1 as range 4
    // closed e.Name#1 as range 6
    // closed e.Tail#1 as range 0
    {refalrts::ictVarLeft, 0, 10, 8},
    {refalrts::icEmpty, 0, 0, 8},
    //0: e.Tail#1
    //2: e.Sets#1
    //4: e.Rules#1
    //6: e.Name#1
    //10: t.SrcPos#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 11},
    {refalrts::icFunc, 0, 2, 12},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 13},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 14},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 15},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 16},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 17},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 18},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 19},
    {refalrts::icFunc, 0, 1, 20},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 21},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 22},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 23},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 24},
    {refalrts::icPushStack, 0, 0, 24},
    {refalrts::icPushStack, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icPushStack, 0, 0, 23},
    {refalrts::icPushStack, 0, 0, 19},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icLinkBrackets, 21, 22, 0},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icLinkBrackets, 17, 18, 0},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceEVar, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icLinkBrackets, 15, 16, 0},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceEVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icLinkBrackets, 13, 14, 0},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Sets#1/2 ) ( e.Rules#1/4 ) ( e.Name#1/6 ) t.Unexpected#1/8 e.Tail#1/0
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icBracketLeft, 0, 6, 0},
    // closed e.Sets#1 as range 2
    // closed e.Rules#1 as range 4
    // closed e.Name#1 as range 6
    {refalrts::ictVarLeft, 0, 8, 0},
    // closed e.Tail#1 as range 0
    //0: e.Tail#1
    //2: e.Sets#1
    //4: e.Rules#1
    //6: e.Name#1
    //8: t.Unexpected#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 9},
    {refalrts::icFunc, 0, 0, 10},
    {refalrts::icString, 0, 0, 11},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 13},
    {refalrts::icPushStack, 0, 0, 13},
    {refalrts::icPushStack, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceRange, 0, 0, 11},
    {refalrts::icSpliceSTVar, 0, 0, 8},
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
    // ( e.Sets#1/2 ) ( e.Rules#1/4 ) ( e.Name#1/6 ) ( # TEquals t.SrcPos#1/10 ) e.Tail#1/0
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
    context[8] = 0;
    context[9] = 0;
    if( ! refalrts::brackets_left( context[8], context[9], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_TEquals<int>::name, context[8], context[9] ) )
      continue;
    // closed e.Sets#1 as range 2
    // closed e.Rules#1 as range 4
    // closed e.Name#1 as range 6
    // closed e.Tail#1 as range 0
    if( ! refalrts::tvar_left( context[10], context[8], context[9] ) )
      continue;
    if( ! refalrts::empty_seq( context[8], context[9] ) )
      continue;
    //0: e.Tail#1
    //2: e.Sets#1
    //4: e.Rules#1
    //6: e.Name#1
    //10: t.SrcPos#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[12], ParseSentence_Body, "ParseSentence_Body" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[13] ) )
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
    if( ! refalrts::alloc_open_call( context[19] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[20], ExtractAlternatives, "ExtractAlternatives" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[21] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[22] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[23] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[24] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[24] );
    refalrts::push_stack( context[11] );
    res = refalrts::splice_elem( res, context[24] );
    refalrts::push_stack( context[23] );
    refalrts::push_stack( context[19] );
    res = refalrts::splice_elem( res, context[23] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    refalrts::link_brackets( context[21], context[22] );
    res = refalrts::splice_elem( res, context[22] );
    res = refalrts::splice_elem( res, context[21] );
    res = refalrts::splice_elem( res, context[20] );
    res = refalrts::splice_elem( res, context[19] );
    refalrts::link_brackets( context[17], context[18] );
    res = refalrts::splice_elem( res, context[18] );
    res = refalrts::splice_evar( res, context[6], context[7] );
    res = refalrts::splice_elem( res, context[17] );
    refalrts::link_brackets( context[15], context[16] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_evar( res, context[4], context[5] );
    res = refalrts::splice_elem( res, context[15] );
    refalrts::link_brackets( context[13], context[14] );
    res = refalrts::splice_elem( res, context[14] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_elem( res, context[11] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  refalrts::move_left( context[0], context[1] );
  refalrts::move_left( context[0], context[1] );
  refalrts::move_right( context[0], context[1] );
  // ( e.Sets#1/2 ) ( e.Rules#1/4 ) ( e.Name#1/6 ) t.Unexpected#1/8 e.Tail#1/0
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[4] = 0;
  context[5] = 0;
  if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[6] = 0;
  context[7] = 0;
  if( ! refalrts::brackets_left( context[6], context[7], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Sets#1 as range 2
  // closed e.Rules#1 as range 4
  // closed e.Name#1 as range 6
  if( ! refalrts::tvar_left( context[8], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Tail#1 as range 0
  //0: e.Tail#1
  //2: e.Sets#1
  //4: e.Rules#1
  //6: e.Name#1
  //8: t.Unexpected#1

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_call( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[10], UnexpectedToken, "UnexpectedToken" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[11], context[12], "\"=\"", 3 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[13] ) )
    return refalrts::cNoMemory;
  refalrts::push_stack( context[13] );
  refalrts::push_stack( context[9] );
  res = refalrts::splice_elem( res, context[13] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_stvar( res, context[8] );
  res = refalrts::splice_elem( res, context[10] );
  res = refalrts::splice_elem( res, context[9] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult ParseSentence_Body(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 25 elems
  refalrts::Iter context[25];
  refalrts::zeros( context, 25 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { UnexpectedToken, "UnexpectedToken" },
    { ParseElements, "ParseElements" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_Sentence<int>::name,
    & ident_TDot<int>::name
  };
  using refalrts::numbers;
  static const refalrts::StringItem strings[] = {
    {"end of sentence", 15}
  };
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +46, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Sets#1/2 ) ( e.Rules#1/4 ) ( e.Name#1/6 ) ( e.Body#1/8 ) ( # TDot t.SrcPos#1/12 ) e.Tail#1/0
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icBracketLeft, 0, 6, 0},
    {refalrts::icBracketLeft, 0, 8, 0},
    {refalrts::icBracketLeft, 0, 10, 0},
    {refalrts::icIdentLeft, 0, 1, 10},
    // closed e.Sets#1 as range 2
    // closed e.Rules#1 as range 4
    // closed e.Name#1 as range 6
    // closed e.Body#1 as range 8
    // closed e.Tail#1 as range 0
    {refalrts::ictVarLeft, 0, 12, 10},
    {refalrts::icEmpty, 0, 0, 10},
    //0: e.Tail#1
    //2: e.Sets#1
    //4: e.Rules#1
    //6: e.Name#1
    //8: e.Body#1
    //12: t.SrcPos#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 13},
    {refalrts::icIdent, 0, 0, 14},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 15},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 16},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 17},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 18},
    {refalrts::icFunc, 0, 1, 19},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 20},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 21},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 22},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 23},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 24},
    {refalrts::icPushStack, 0, 0, 24},
    {refalrts::icPushStack, 0, 0, 18},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icLinkBrackets, 22, 23, 0},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icSpliceEVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icLinkBrackets, 20, 21, 0},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icLinkBrackets, 13, 17, 0},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceEVar, 0, 0, 8},
    {refalrts::icLinkBrackets, 15, 16, 0},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceEVar, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Sets#1/2 ) ( e.Rules#1/4 ) ( e.Name#1/6 ) ( e.Body#1/8 ) t.Unexpected#1/10 e.Tail#1/0
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icBracketLeft, 0, 6, 0},
    {refalrts::icBracketLeft, 0, 8, 0},
    // closed e.Sets#1 as range 2
    // closed e.Rules#1 as range 4
    // closed e.Name#1 as range 6
    // closed e.Body#1 as range 8
    {refalrts::ictVarLeft, 0, 10, 0},
    // closed e.Tail#1 as range 0
    //0: e.Tail#1
    //2: e.Sets#1
    //4: e.Rules#1
    //6: e.Name#1
    //8: e.Body#1
    //10: t.Unexpected#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 11},
    {refalrts::icFunc, 0, 0, 12},
    {refalrts::icString, 0, 0, 13},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 15},
    {refalrts::icPushStack, 0, 0, 15},
    {refalrts::icPushStack, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceRange, 0, 0, 13},
    {refalrts::icSpliceSTVar, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 11},
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
    // ( e.Sets#1/2 ) ( e.Rules#1/4 ) ( e.Name#1/6 ) ( e.Body#1/8 ) ( # TDot t.SrcPos#1/12 ) e.Tail#1/0
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
    context[8] = 0;
    context[9] = 0;
    if( ! refalrts::brackets_left( context[8], context[9], context[0], context[1] ) )
      continue;
    context[10] = 0;
    context[11] = 0;
    if( ! refalrts::brackets_left( context[10], context[11], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_TDot<int>::name, context[10], context[11] ) )
      continue;
    // closed e.Sets#1 as range 2
    // closed e.Rules#1 as range 4
    // closed e.Name#1 as range 6
    // closed e.Body#1 as range 8
    // closed e.Tail#1 as range 0
    if( ! refalrts::tvar_left( context[12], context[10], context[11] ) )
      continue;
    if( ! refalrts::empty_seq( context[10], context[11] ) )
      continue;
    //0: e.Tail#1
    //2: e.Sets#1
    //4: e.Rules#1
    //6: e.Name#1
    //8: e.Body#1
    //12: t.SrcPos#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[14], & ident_Sentence<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[15] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[17] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[18] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[19], ParseElements, "ParseElements" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[20] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[21] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[22] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[23] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[24] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[24] );
    refalrts::push_stack( context[18] );
    res = refalrts::splice_elem( res, context[24] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    refalrts::link_brackets( context[22], context[23] );
    res = refalrts::splice_elem( res, context[23] );
    res = refalrts::splice_evar( res, context[4], context[5] );
    res = refalrts::splice_elem( res, context[22] );
    refalrts::link_brackets( context[20], context[21] );
    res = refalrts::splice_elem( res, context[21] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_elem( res, context[20] );
    res = refalrts::splice_elem( res, context[19] );
    res = refalrts::splice_elem( res, context[18] );
    refalrts::link_brackets( context[13], context[17] );
    res = refalrts::splice_elem( res, context[17] );
    res = refalrts::splice_evar( res, context[8], context[9] );
    refalrts::link_brackets( context[15], context[16] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_evar( res, context[6], context[7] );
    res = refalrts::splice_elem( res, context[15] );
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
  // ( e.Sets#1/2 ) ( e.Rules#1/4 ) ( e.Name#1/6 ) ( e.Body#1/8 ) t.Unexpected#1/10 e.Tail#1/0
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[4] = 0;
  context[5] = 0;
  if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[6] = 0;
  context[7] = 0;
  if( ! refalrts::brackets_left( context[6], context[7], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[8] = 0;
  context[9] = 0;
  if( ! refalrts::brackets_left( context[8], context[9], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Sets#1 as range 2
  // closed e.Rules#1 as range 4
  // closed e.Name#1 as range 6
  // closed e.Body#1 as range 8
  if( ! refalrts::tvar_left( context[10], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Tail#1 as range 0
  //0: e.Tail#1
  //2: e.Sets#1
  //4: e.Rules#1
  //6: e.Name#1
  //8: e.Body#1
  //10: t.Unexpected#1

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_call( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[12], UnexpectedToken, "UnexpectedToken" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[13], context[14], "end of sentence", 15 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[15] ) )
    return refalrts::cNoMemory;
  refalrts::push_stack( context[15] );
  refalrts::push_stack( context[11] );
  res = refalrts::splice_elem( res, context[15] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_stvar( res, context[10] );
  res = refalrts::splice_elem( res, context[12] );
  res = refalrts::splice_elem( res, context[11] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult ExtractAlternatives(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { UnexpectedToken, "UnexpectedToken" },
    { ExtractAlternatives_Flush, "ExtractAlternatives_Flush" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_TDot<int>::name,
    & ident_Empty<int>::name,
    & ident_TAlternative<int>::name,
    & ident_TName<int>::name,
    & ident_TErrorFlush<int>::name,
    & ident_TNamedFlush<int>::name,
    & ident_TFlush<int>::name,
    & ident_Set<int>::name,
    & ident_TSetName<int>::name,
    & ident_Chars<int>::name,
    & ident_TLiteral<int>::name
  };
  using refalrts::numbers;
  static const refalrts::StringItem strings[] = {
    {" definition of state", 20}
  };
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +30, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Found#1/2 ) ( # TLiteral t.SrcPos#1/6 e.Content#1/4 ) e.Tail#1/0
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icIdentLeft, 0, 10, 4},
    // closed e.Found#1 as range 2
    // closed e.Tail#1 as range 0
    {refalrts::ictVarLeft, 0, 6, 4},
    // closed e.Content#1 as range 4
    //0: e.Tail#1
    //2: e.Found#1
    //4: e.Content#1
    //6: t.SrcPos#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 7},
    {refalrts::icFunc, 0, 1, 8},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 9},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 10},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 11},
    {refalrts::icIdent, 0, 9, 12},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 13},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 14},
    {refalrts::icPushStack, 0, 0, 14},
    {refalrts::icPushStack, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icLinkBrackets, 11, 13, 0},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceEVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icLinkBrackets, 9, 10, 0},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +31, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Found#1/2 ) ( # TSetName t.SrcPos#1/6 e.Content#1/4 ) e.Tail#1/0
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icIdentLeft, 0, 8, 4},
    // closed e.Found#1 as range 2
    // closed e.Tail#1 as range 0
    {refalrts::ictVarLeft, 0, 6, 4},
    // closed e.Content#1 as range 4
    //0: e.Tail#1
    //2: e.Found#1
    //4: e.Content#1
    //6: t.SrcPos#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 7},
    {refalrts::icFunc, 0, 1, 8},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 9},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 10},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 11},
    {refalrts::icIdent, 0, 7, 12},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 13},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 14},
    {refalrts::icPushStack, 0, 0, 14},
    {refalrts::icPushStack, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icLinkBrackets, 11, 13, 0},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceEVar, 0, 0, 4},
    {refalrts::icSpliceSTVar, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icLinkBrackets, 9, 10, 0},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +33, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Found#1/2 ) ( # TFlush t.SrcPos#1/6 ) e.Tail#1/0
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icIdentLeft, 0, 6, 4},
    // closed e.Found#1 as range 2
    // closed e.Tail#1 as range 0
    {refalrts::ictVarLeft, 0, 6, 4},
    {refalrts::icEmpty, 0, 0, 4},
    //0: e.Tail#1
    //2: e.Found#1
    //6: t.SrcPos#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 7},
    {refalrts::icFunc, 0, 1, 8},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 9},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 10},
    {refalrts::icIdent, 0, 1, 11},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 12},
    {refalrts::icIdent, 0, 6, 13},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 14},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 15},
    {refalrts::icPushStack, 0, 0, 15},
    {refalrts::icPushStack, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icLinkBrackets, 12, 14, 0},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceSTVar, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icLinkBrackets, 9, 10, 0},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +33, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Found#1/2 ) ( # TNamedFlush t.SrcPos#1/6 e.Name#1/4 ) e.Tail#1/0
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icIdentLeft, 0, 5, 4},
    // closed e.Found#1 as range 2
    // closed e.Tail#1 as range 0
    {refalrts::ictVarLeft, 0, 6, 4},
    // closed e.Name#1 as range 4
    //0: e.Tail#1
    //2: e.Found#1
    //4: e.Name#1
    //6: t.SrcPos#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 7},
    {refalrts::icFunc, 0, 1, 8},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 9},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 10},
    {refalrts::icIdent, 0, 1, 11},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 12},
    {refalrts::icIdent, 0, 5, 13},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 14},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 15},
    {refalrts::icPushStack, 0, 0, 15},
    {refalrts::icPushStack, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icLinkBrackets, 12, 14, 0},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceEVar, 0, 0, 4},
    {refalrts::icSpliceSTVar, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icLinkBrackets, 9, 10, 0},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +33, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Found#1/2 ) ( # TErrorFlush t.SrcPos#1/6 e.Message#1/4 ) e.Tail#1/0
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icIdentLeft, 0, 4, 4},
    // closed e.Found#1 as range 2
    // closed e.Tail#1 as range 0
    {refalrts::ictVarLeft, 0, 6, 4},
    // closed e.Message#1 as range 4
    //0: e.Tail#1
    //2: e.Found#1
    //4: e.Message#1
    //6: t.SrcPos#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 7},
    {refalrts::icFunc, 0, 1, 8},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 9},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 10},
    {refalrts::icIdent, 0, 1, 11},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 12},
    {refalrts::icIdent, 0, 4, 13},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 14},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 15},
    {refalrts::icPushStack, 0, 0, 15},
    {refalrts::icPushStack, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icLinkBrackets, 12, 14, 0},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceEVar, 0, 0, 4},
    {refalrts::icSpliceSTVar, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icLinkBrackets, 9, 10, 0},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +33, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Found#1/2 ) ( # TName t.SrcPos#1/6 e.Name#1/4 ) e.Tail#1/0
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icIdentLeft, 0, 3, 4},
    // closed e.Found#1 as range 2
    // closed e.Tail#1 as range 0
    {refalrts::ictVarLeft, 0, 6, 4},
    // closed e.Name#1 as range 4
    //0: e.Tail#1
    //2: e.Found#1
    //4: e.Name#1
    //6: t.SrcPos#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 7},
    {refalrts::icFunc, 0, 1, 8},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 9},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 10},
    {refalrts::icIdent, 0, 1, 11},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 12},
    {refalrts::icIdent, 0, 3, 13},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 14},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 15},
    {refalrts::icPushStack, 0, 0, 15},
    {refalrts::icPushStack, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icLinkBrackets, 12, 14, 0},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceEVar, 0, 0, 4},
    {refalrts::icSpliceSTVar, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icLinkBrackets, 9, 10, 0},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +33, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Found#1/2 ) ( # TAlternative t.SrcPos#1/6 e.Message#1/4 ) e.Tail#1/0
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icIdentLeft, 0, 2, 4},
    // closed e.Found#1 as range 2
    // closed e.Tail#1 as range 0
    {refalrts::ictVarLeft, 0, 6, 4},
    // closed e.Message#1 as range 4
    //0: e.Tail#1
    //2: e.Found#1
    //4: e.Message#1
    //6: t.SrcPos#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 7},
    {refalrts::icFunc, 0, 1, 8},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 9},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 10},
    {refalrts::icIdent, 0, 1, 11},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 12},
    {refalrts::icIdent, 0, 2, 13},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 14},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 15},
    {refalrts::icPushStack, 0, 0, 15},
    {refalrts::icPushStack, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icLinkBrackets, 12, 14, 0},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceEVar, 0, 0, 4},
    {refalrts::icSpliceSTVar, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icLinkBrackets, 9, 10, 0},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +33, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Found#1/2 ) ( # TDot t.SrcPos#1/6 ) e.Tail#1/0
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icIdentLeft, 0, 0, 4},
    // closed e.Found#1 as range 2
    // closed e.Tail#1 as range 0
    {refalrts::ictVarLeft, 0, 6, 4},
    {refalrts::icEmpty, 0, 0, 4},
    //0: e.Tail#1
    //2: e.Found#1
    //6: t.SrcPos#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 7},
    {refalrts::icFunc, 0, 1, 8},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 9},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 10},
    {refalrts::icIdent, 0, 1, 11},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 12},
    {refalrts::icIdent, 0, 0, 13},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 14},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 15},
    {refalrts::icPushStack, 0, 0, 15},
    {refalrts::icPushStack, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icLinkBrackets, 12, 14, 0},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceSTVar, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icLinkBrackets, 9, 10, 0},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +16, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Found#1/2 ) t.Unexpected#1/4 e.Tail#1/0
    {refalrts::icBracketLeft, 0, 2, 0},
    // closed e.Found#1 as range 2
    {refalrts::ictVarLeft, 0, 4, 0},
    // closed e.Tail#1 as range 0
    //0: e.Tail#1
    //2: e.Found#1
    //4: t.Unexpected#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 5},
    {refalrts::icFunc, 0, 0, 6},
    {refalrts::icString, 0, 0, 7},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 9},
    {refalrts::icPushStack, 0, 0, 9},
    {refalrts::icPushStack, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceRange, 0, 0, 7},
    {refalrts::icSpliceSTVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Found#1/2 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icEmpty, 0, 0, 0},
    // closed e.Found#1 as range 2
    //2: e.Found#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 4},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 5},
    {refalrts::icLinkBrackets, 4, 5, 0},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[9];
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
    // ( e.Found#1/2 ) ( # TLiteral t.SrcPos#1/6 e.Content#1/4 ) e.Tail#1/0
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_TLiteral<int>::name, context[4], context[5] ) )
      continue;
    // closed e.Found#1 as range 2
    // closed e.Tail#1 as range 0
    if( ! refalrts::tvar_left( context[6], context[4], context[5] ) )
      continue;
    // closed e.Content#1 as range 4
    //0: e.Tail#1
    //2: e.Found#1
    //4: e.Content#1
    //6: t.SrcPos#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[7] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[8], ExtractAlternatives_Flush, "ExtractAlternatives_Flush" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[9] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[12], & ident_Chars<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[14] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[14] );
    refalrts::push_stack( context[7] );
    res = refalrts::splice_elem( res, context[14] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    refalrts::link_brackets( context[11], context[13] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_evar( res, context[4], context[5] );
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_elem( res, context[11] );
    refalrts::link_brackets( context[9], context[10] );
    res = refalrts::splice_elem( res, context[10] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_elem( res, context[9] );
    res = refalrts::splice_elem( res, context[8] );
    res = refalrts::splice_elem( res, context[7] );
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
    // ( e.Found#1/2 ) ( # TSetName t.SrcPos#1/6 e.Content#1/4 ) e.Tail#1/0
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_TSetName<int>::name, context[4], context[5] ) )
      continue;
    // closed e.Found#1 as range 2
    // closed e.Tail#1 as range 0
    if( ! refalrts::tvar_left( context[6], context[4], context[5] ) )
      continue;
    // closed e.Content#1 as range 4
    //0: e.Tail#1
    //2: e.Found#1
    //4: e.Content#1
    //6: t.SrcPos#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[7] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[8], ExtractAlternatives_Flush, "ExtractAlternatives_Flush" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[9] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[12], & ident_Set<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[14] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[14] );
    refalrts::push_stack( context[7] );
    res = refalrts::splice_elem( res, context[14] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    refalrts::link_brackets( context[11], context[13] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_evar( res, context[4], context[5] );
    res = refalrts::splice_stvar( res, context[6] );
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_elem( res, context[11] );
    refalrts::link_brackets( context[9], context[10] );
    res = refalrts::splice_elem( res, context[10] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_elem( res, context[9] );
    res = refalrts::splice_elem( res, context[8] );
    res = refalrts::splice_elem( res, context[7] );
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
    // ( e.Found#1/2 ) ( # TFlush t.SrcPos#1/6 ) e.Tail#1/0
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_TFlush<int>::name, context[4], context[5] ) )
      continue;
    // closed e.Found#1 as range 2
    // closed e.Tail#1 as range 0
    if( ! refalrts::tvar_left( context[6], context[4], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[4], context[5] ) )
      continue;
    //0: e.Tail#1
    //2: e.Found#1
    //6: t.SrcPos#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[7] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[8], ExtractAlternatives_Flush, "ExtractAlternatives_Flush" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[9] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[11], & ident_Empty<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[13], & ident_TFlush<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[15] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[15] );
    refalrts::push_stack( context[7] );
    res = refalrts::splice_elem( res, context[15] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    refalrts::link_brackets( context[12], context[14] );
    res = refalrts::splice_elem( res, context[14] );
    res = refalrts::splice_stvar( res, context[6] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_elem( res, context[11] );
    refalrts::link_brackets( context[9], context[10] );
    res = refalrts::splice_elem( res, context[10] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_elem( res, context[9] );
    res = refalrts::splice_elem( res, context[8] );
    res = refalrts::splice_elem( res, context[7] );
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
    // ( e.Found#1/2 ) ( # TNamedFlush t.SrcPos#1/6 e.Name#1/4 ) e.Tail#1/0
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_TNamedFlush<int>::name, context[4], context[5] ) )
      continue;
    // closed e.Found#1 as range 2
    // closed e.Tail#1 as range 0
    if( ! refalrts::tvar_left( context[6], context[4], context[5] ) )
      continue;
    // closed e.Name#1 as range 4
    //0: e.Tail#1
    //2: e.Found#1
    //4: e.Name#1
    //6: t.SrcPos#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[7] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[8], ExtractAlternatives_Flush, "ExtractAlternatives_Flush" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[9] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[11], & ident_Empty<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[13], & ident_TNamedFlush<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[15] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[15] );
    refalrts::push_stack( context[7] );
    res = refalrts::splice_elem( res, context[15] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    refalrts::link_brackets( context[12], context[14] );
    res = refalrts::splice_elem( res, context[14] );
    res = refalrts::splice_evar( res, context[4], context[5] );
    res = refalrts::splice_stvar( res, context[6] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_elem( res, context[11] );
    refalrts::link_brackets( context[9], context[10] );
    res = refalrts::splice_elem( res, context[10] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_elem( res, context[9] );
    res = refalrts::splice_elem( res, context[8] );
    res = refalrts::splice_elem( res, context[7] );
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
    // ( e.Found#1/2 ) ( # TErrorFlush t.SrcPos#1/6 e.Message#1/4 ) e.Tail#1/0
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_TErrorFlush<int>::name, context[4], context[5] ) )
      continue;
    // closed e.Found#1 as range 2
    // closed e.Tail#1 as range 0
    if( ! refalrts::tvar_left( context[6], context[4], context[5] ) )
      continue;
    // closed e.Message#1 as range 4
    //0: e.Tail#1
    //2: e.Found#1
    //4: e.Message#1
    //6: t.SrcPos#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[7] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[8], ExtractAlternatives_Flush, "ExtractAlternatives_Flush" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[9] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[11], & ident_Empty<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[13], & ident_TErrorFlush<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[15] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[15] );
    refalrts::push_stack( context[7] );
    res = refalrts::splice_elem( res, context[15] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    refalrts::link_brackets( context[12], context[14] );
    res = refalrts::splice_elem( res, context[14] );
    res = refalrts::splice_evar( res, context[4], context[5] );
    res = refalrts::splice_stvar( res, context[6] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_elem( res, context[11] );
    refalrts::link_brackets( context[9], context[10] );
    res = refalrts::splice_elem( res, context[10] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_elem( res, context[9] );
    res = refalrts::splice_elem( res, context[8] );
    res = refalrts::splice_elem( res, context[7] );
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
    // ( e.Found#1/2 ) ( # TName t.SrcPos#1/6 e.Name#1/4 ) e.Tail#1/0
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_TName<int>::name, context[4], context[5] ) )
      continue;
    // closed e.Found#1 as range 2
    // closed e.Tail#1 as range 0
    if( ! refalrts::tvar_left( context[6], context[4], context[5] ) )
      continue;
    // closed e.Name#1 as range 4
    //0: e.Tail#1
    //2: e.Found#1
    //4: e.Name#1
    //6: t.SrcPos#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[7] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[8], ExtractAlternatives_Flush, "ExtractAlternatives_Flush" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[9] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[11], & ident_Empty<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[13], & ident_TName<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[15] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[15] );
    refalrts::push_stack( context[7] );
    res = refalrts::splice_elem( res, context[15] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    refalrts::link_brackets( context[12], context[14] );
    res = refalrts::splice_elem( res, context[14] );
    res = refalrts::splice_evar( res, context[4], context[5] );
    res = refalrts::splice_stvar( res, context[6] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_elem( res, context[11] );
    refalrts::link_brackets( context[9], context[10] );
    res = refalrts::splice_elem( res, context[10] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_elem( res, context[9] );
    res = refalrts::splice_elem( res, context[8] );
    res = refalrts::splice_elem( res, context[7] );
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
    // ( e.Found#1/2 ) ( # TAlternative t.SrcPos#1/6 e.Message#1/4 ) e.Tail#1/0
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_TAlternative<int>::name, context[4], context[5] ) )
      continue;
    // closed e.Found#1 as range 2
    // closed e.Tail#1 as range 0
    if( ! refalrts::tvar_left( context[6], context[4], context[5] ) )
      continue;
    // closed e.Message#1 as range 4
    //0: e.Tail#1
    //2: e.Found#1
    //4: e.Message#1
    //6: t.SrcPos#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[7] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[8], ExtractAlternatives_Flush, "ExtractAlternatives_Flush" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[9] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[11], & ident_Empty<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[13], & ident_TAlternative<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[15] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[15] );
    refalrts::push_stack( context[7] );
    res = refalrts::splice_elem( res, context[15] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    refalrts::link_brackets( context[12], context[14] );
    res = refalrts::splice_elem( res, context[14] );
    res = refalrts::splice_evar( res, context[4], context[5] );
    res = refalrts::splice_stvar( res, context[6] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_elem( res, context[11] );
    refalrts::link_brackets( context[9], context[10] );
    res = refalrts::splice_elem( res, context[10] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_elem( res, context[9] );
    res = refalrts::splice_elem( res, context[8] );
    res = refalrts::splice_elem( res, context[7] );
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
    // ( e.Found#1/2 ) ( # TDot t.SrcPos#1/6 ) e.Tail#1/0
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_TDot<int>::name, context[4], context[5] ) )
      continue;
    // closed e.Found#1 as range 2
    // closed e.Tail#1 as range 0
    if( ! refalrts::tvar_left( context[6], context[4], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[4], context[5] ) )
      continue;
    //0: e.Tail#1
    //2: e.Found#1
    //6: t.SrcPos#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[7] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[8], ExtractAlternatives_Flush, "ExtractAlternatives_Flush" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[9] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[11], & ident_Empty<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[13], & ident_TDot<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[15] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[15] );
    refalrts::push_stack( context[7] );
    res = refalrts::splice_elem( res, context[15] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    refalrts::link_brackets( context[12], context[14] );
    res = refalrts::splice_elem( res, context[14] );
    res = refalrts::splice_stvar( res, context[6] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_elem( res, context[11] );
    refalrts::link_brackets( context[9], context[10] );
    res = refalrts::splice_elem( res, context[10] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_elem( res, context[9] );
    res = refalrts::splice_elem( res, context[8] );
    res = refalrts::splice_elem( res, context[7] );
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
    // ( e.Found#1/2 ) t.Unexpected#1/4 e.Tail#1/0
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    // closed e.Found#1 as range 2
    if( ! refalrts::tvar_left( context[4], context[0], context[1] ) )
      continue;
    // closed e.Tail#1 as range 0
    //0: e.Tail#1
    //2: e.Found#1
    //4: t.Unexpected#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[5] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[6], UnexpectedToken, "UnexpectedToken" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[7], context[8], " definition of state", 20 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[9] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[9] );
    refalrts::push_stack( context[5] );
    res = refalrts::splice_elem( res, context[9] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_stvar( res, context[4] );
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
  // ( e.Found#1/2 )
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Found#1 as range 2
  //2: e.Found#1

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_bracket( context[4] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[5] ) )
    return refalrts::cNoMemory;
  refalrts::link_brackets( context[4], context[5] );
  res = refalrts::splice_elem( res, context[5] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_elem( res, context[4] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult ExtractAlternatives_Flush(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { UnexpectedToken, "UnexpectedToken" },
    { ExtractAlternatives_NextState, "ExtractAlternatives_NextState" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_TDot<int>::name,
    & ident_None<int>::name,
    & ident_TAlternative<int>::name,
    & ident_TName<int>::name,
    & ident_FlushError<int>::name,
    & ident_TErrorFlush<int>::name,
    & ident_Flush<int>::name,
    & ident_TNamedFlush<int>::name,
    & ident_Unnamed<int>::name,
    & ident_TFlush<int>::name
  };
  using refalrts::numbers;
  static const refalrts::StringItem strings[] = {
    {"flush or next state name", 24}
  };
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +27, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Found#1/2 ) t.Head#1/4 ( # TFlush t.SrcPos#1/7 ) e.Tail#1/0
    {refalrts::icBracketLeft, 0, 2, 0},
    // closed e.Found#1 as range 2
    {refalrts::ictVarLeft, 0, 4, 0},
    {refalrts::icBracketLeft, 0, 5, 0},
    {refalrts::icIdentLeft, 0, 9, 5},
    // closed e.Tail#1 as range 0
    {refalrts::ictVarLeft, 0, 7, 5},
    {refalrts::icEmpty, 0, 0, 5},
    //0: e.Tail#1
    //2: e.Found#1
    //4: t.Head#1
    //7: t.SrcPos#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 8},
    {refalrts::icFunc, 0, 1, 9},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 10},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 11},
    {refalrts::icIdent, 0, 8, 12},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 13},
    {refalrts::icPushStack, 0, 0, 13},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceSTVar, 0, 0, 4},
    {refalrts::icLinkBrackets, 10, 11, 0},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +32, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Found#1/2 ) t.Head#1/4 ( # TNamedFlush t.SrcPos#1/7 e.Name#1/5 ) e.Tail#1/0
    {refalrts::icBracketLeft, 0, 2, 0},
    // closed e.Found#1 as range 2
    {refalrts::ictVarLeft, 0, 4, 0},
    {refalrts::icBracketLeft, 0, 5, 0},
    {refalrts::icIdentLeft, 0, 7, 5},
    // closed e.Tail#1 as range 0
    {refalrts::ictVarLeft, 0, 7, 5},
    // closed e.Name#1 as range 5
    //0: e.Tail#1
    //2: e.Found#1
    //4: t.Head#1
    //5: e.Name#1
    //7: t.SrcPos#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 8},
    {refalrts::icFunc, 0, 1, 9},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 10},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 11},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 12},
    {refalrts::icIdent, 0, 6, 13},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 14},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 15},
    {refalrts::icPushStack, 0, 0, 15},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icLinkBrackets, 12, 14, 0},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceEVar, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceSTVar, 0, 0, 4},
    {refalrts::icLinkBrackets, 10, 11, 0},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +32, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Found#1/2 ) t.Head#1/4 ( # TErrorFlush t.SrcPos#1/7 e.Message#1/5 ) e.Tail#1/0
    {refalrts::icBracketLeft, 0, 2, 0},
    // closed e.Found#1 as range 2
    {refalrts::ictVarLeft, 0, 4, 0},
    {refalrts::icBracketLeft, 0, 5, 0},
    {refalrts::icIdentLeft, 0, 5, 5},
    // closed e.Tail#1 as range 0
    {refalrts::ictVarLeft, 0, 7, 5},
    // closed e.Message#1 as range 5
    //0: e.Tail#1
    //2: e.Found#1
    //4: t.Head#1
    //5: e.Message#1
    //7: t.SrcPos#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 8},
    {refalrts::icFunc, 0, 1, 9},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 10},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 11},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 12},
    {refalrts::icIdent, 0, 4, 13},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 14},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 15},
    {refalrts::icPushStack, 0, 0, 15},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icLinkBrackets, 12, 14, 0},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceEVar, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceSTVar, 0, 0, 4},
    {refalrts::icLinkBrackets, 10, 11, 0},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +35, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Found#1/2 ) t.Head#1/4 ( # TName t.SrcPos#1/7 e.Name#1/5 ) e.Tail#1/0
    {refalrts::icBracketLeft, 0, 2, 0},
    // closed e.Found#1 as range 2
    {refalrts::ictVarLeft, 0, 4, 0},
    {refalrts::icBracketLeft, 0, 5, 0},
    {refalrts::icIdentLeft, 0, 3, 5},
    // closed e.Tail#1 as range 0
    {refalrts::ictVarLeft, 0, 7, 5},
    // closed e.Name#1 as range 5
    //0: e.Tail#1
    //2: e.Found#1
    //4: t.Head#1
    //5: e.Name#1
    //7: t.SrcPos#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 8},
    {refalrts::icFunc, 0, 1, 9},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 10},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 11},
    {refalrts::icIdent, 0, 1, 12},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 13},
    {refalrts::icIdent, 0, 3, 14},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 15},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 16},
    {refalrts::icPushStack, 0, 0, 16},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icLinkBrackets, 13, 15, 0},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceEVar, 0, 0, 5},
    {refalrts::icSpliceSTVar, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceSTVar, 0, 0, 4},
    {refalrts::icLinkBrackets, 10, 11, 0},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +35, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Found#1/2 ) t.Head#1/4 ( # TAlternative t.SrcPos#1/7 ) e.Tail#1/0
    {refalrts::icBracketLeft, 0, 2, 0},
    // closed e.Found#1 as range 2
    {refalrts::ictVarLeft, 0, 4, 0},
    {refalrts::icBracketLeft, 0, 5, 0},
    {refalrts::icIdentLeft, 0, 2, 5},
    // closed e.Tail#1 as range 0
    {refalrts::ictVarLeft, 0, 7, 5},
    {refalrts::icEmpty, 0, 0, 5},
    //0: e.Tail#1
    //2: e.Found#1
    //4: t.Head#1
    //7: t.SrcPos#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 8},
    {refalrts::icFunc, 0, 1, 9},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 10},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 11},
    {refalrts::icIdent, 0, 1, 12},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 13},
    {refalrts::icIdent, 0, 2, 14},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 15},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 16},
    {refalrts::icPushStack, 0, 0, 16},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icLinkBrackets, 13, 15, 0},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceSTVar, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceSTVar, 0, 0, 4},
    {refalrts::icLinkBrackets, 10, 11, 0},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +35, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Found#1/2 ) t.Head#1/4 ( # TDot t.SrcPos#1/7 ) e.Tail#1/0
    {refalrts::icBracketLeft, 0, 2, 0},
    // closed e.Found#1 as range 2
    {refalrts::ictVarLeft, 0, 4, 0},
    {refalrts::icBracketLeft, 0, 5, 0},
    {refalrts::icIdentLeft, 0, 0, 5},
    // closed e.Tail#1 as range 0
    {refalrts::ictVarLeft, 0, 7, 5},
    {refalrts::icEmpty, 0, 0, 5},
    //0: e.Tail#1
    //2: e.Found#1
    //4: t.Head#1
    //7: t.SrcPos#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 8},
    {refalrts::icFunc, 0, 1, 9},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 10},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 11},
    {refalrts::icIdent, 0, 1, 12},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 13},
    {refalrts::icIdent, 0, 0, 14},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 15},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 16},
    {refalrts::icPushStack, 0, 0, 16},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icLinkBrackets, 13, 15, 0},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceSTVar, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceSTVar, 0, 0, 4},
    {refalrts::icLinkBrackets, 10, 11, 0},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +17, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Found#1/2 ) t.Head#1/4 t.Unexpected#1/5 e.Tail#1/0
    {refalrts::icBracketLeft, 0, 2, 0},
    // closed e.Found#1 as range 2
    {refalrts::ictVarLeft, 0, 4, 0},
    {refalrts::ictVarLeft, 0, 5, 0},
    // closed e.Tail#1 as range 0
    //0: e.Tail#1
    //2: e.Found#1
    //4: t.Head#1
    //5: t.Unexpected#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 6},
    {refalrts::icFunc, 0, 0, 7},
    {refalrts::icString, 0, 0, 8},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 10},
    {refalrts::icPushStack, 0, 0, 10},
    {refalrts::icPushStack, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceRange, 0, 0, 8},
    {refalrts::icSpliceSTVar, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Found#1/2 ) t.Head#1/4
    {refalrts::icBracketLeft, 0, 2, 0},
    // closed e.Found#1 as range 2
    {refalrts::ictVarLeft, 0, 4, 0},
    {refalrts::icEmpty, 0, 0, 0},
    //2: e.Found#1
    //4: t.Head#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 5},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 6},
    {refalrts::icLinkBrackets, 5, 6, 0},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[7];
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
    // ( e.Found#1/2 ) t.Head#1/4 ( # TFlush t.SrcPos#1/7 ) e.Tail#1/0
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    // closed e.Found#1 as range 2
    if( ! refalrts::tvar_left( context[4], context[0], context[1] ) )
      continue;
    context[5] = 0;
    context[6] = 0;
    if( ! refalrts::brackets_left( context[5], context[6], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_TFlush<int>::name, context[5], context[6] ) )
      continue;
    // closed e.Tail#1 as range 0
    if( ! refalrts::tvar_left( context[7], context[5], context[6] ) )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    //0: e.Tail#1
    //2: e.Found#1
    //4: t.Head#1
    //7: t.SrcPos#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[9], ExtractAlternatives_NextState, "ExtractAlternatives_NextState" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[12], & ident_Unnamed<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[13] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[13] );
    refalrts::push_stack( context[8] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_stvar( res, context[4] );
    refalrts::link_brackets( context[10], context[11] );
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_evar( res, context[2], context[3] );
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
    // ( e.Found#1/2 ) t.Head#1/4 ( # TNamedFlush t.SrcPos#1/7 e.Name#1/5 ) e.Tail#1/0
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    // closed e.Found#1 as range 2
    if( ! refalrts::tvar_left( context[4], context[0], context[1] ) )
      continue;
    context[5] = 0;
    context[6] = 0;
    if( ! refalrts::brackets_left( context[5], context[6], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_TNamedFlush<int>::name, context[5], context[6] ) )
      continue;
    // closed e.Tail#1 as range 0
    if( ! refalrts::tvar_left( context[7], context[5], context[6] ) )
      continue;
    // closed e.Name#1 as range 5
    //0: e.Tail#1
    //2: e.Found#1
    //4: t.Head#1
    //5: e.Name#1
    //7: t.SrcPos#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[9], ExtractAlternatives_NextState, "ExtractAlternatives_NextState" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[13], & ident_Flush<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[15] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[15] );
    refalrts::push_stack( context[8] );
    res = refalrts::splice_elem( res, context[15] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    refalrts::link_brackets( context[12], context[14] );
    res = refalrts::splice_elem( res, context[14] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_stvar( res, context[4] );
    refalrts::link_brackets( context[10], context[11] );
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_evar( res, context[2], context[3] );
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
    // ( e.Found#1/2 ) t.Head#1/4 ( # TErrorFlush t.SrcPos#1/7 e.Message#1/5 ) e.Tail#1/0
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    // closed e.Found#1 as range 2
    if( ! refalrts::tvar_left( context[4], context[0], context[1] ) )
      continue;
    context[5] = 0;
    context[6] = 0;
    if( ! refalrts::brackets_left( context[5], context[6], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_TErrorFlush<int>::name, context[5], context[6] ) )
      continue;
    // closed e.Tail#1 as range 0
    if( ! refalrts::tvar_left( context[7], context[5], context[6] ) )
      continue;
    // closed e.Message#1 as range 5
    //0: e.Tail#1
    //2: e.Found#1
    //4: t.Head#1
    //5: e.Message#1
    //7: t.SrcPos#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[9], ExtractAlternatives_NextState, "ExtractAlternatives_NextState" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[13], & ident_FlushError<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[15] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[15] );
    refalrts::push_stack( context[8] );
    res = refalrts::splice_elem( res, context[15] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    refalrts::link_brackets( context[12], context[14] );
    res = refalrts::splice_elem( res, context[14] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_stvar( res, context[4] );
    refalrts::link_brackets( context[10], context[11] );
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_evar( res, context[2], context[3] );
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
    // ( e.Found#1/2 ) t.Head#1/4 ( # TName t.SrcPos#1/7 e.Name#1/5 ) e.Tail#1/0
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    // closed e.Found#1 as range 2
    if( ! refalrts::tvar_left( context[4], context[0], context[1] ) )
      continue;
    context[5] = 0;
    context[6] = 0;
    if( ! refalrts::brackets_left( context[5], context[6], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_TName<int>::name, context[5], context[6] ) )
      continue;
    // closed e.Tail#1 as range 0
    if( ! refalrts::tvar_left( context[7], context[5], context[6] ) )
      continue;
    // closed e.Name#1 as range 5
    //0: e.Tail#1
    //2: e.Found#1
    //4: t.Head#1
    //5: e.Name#1
    //7: t.SrcPos#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[9], ExtractAlternatives_NextState, "ExtractAlternatives_NextState" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[12], & ident_None<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[14], & ident_TName<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[15] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[16] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[16] );
    refalrts::push_stack( context[8] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    refalrts::link_brackets( context[13], context[15] );
    res = refalrts::splice_elem( res, context[15] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_stvar( res, context[7] );
    res = refalrts::splice_elem( res, context[14] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_stvar( res, context[4] );
    refalrts::link_brackets( context[10], context[11] );
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_evar( res, context[2], context[3] );
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
    // ( e.Found#1/2 ) t.Head#1/4 ( # TAlternative t.SrcPos#1/7 ) e.Tail#1/0
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    // closed e.Found#1 as range 2
    if( ! refalrts::tvar_left( context[4], context[0], context[1] ) )
      continue;
    context[5] = 0;
    context[6] = 0;
    if( ! refalrts::brackets_left( context[5], context[6], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_TAlternative<int>::name, context[5], context[6] ) )
      continue;
    // closed e.Tail#1 as range 0
    if( ! refalrts::tvar_left( context[7], context[5], context[6] ) )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    //0: e.Tail#1
    //2: e.Found#1
    //4: t.Head#1
    //7: t.SrcPos#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[9], ExtractAlternatives_NextState, "ExtractAlternatives_NextState" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[12], & ident_None<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[14], & ident_TAlternative<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[15] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[16] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[16] );
    refalrts::push_stack( context[8] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    refalrts::link_brackets( context[13], context[15] );
    res = refalrts::splice_elem( res, context[15] );
    res = refalrts::splice_stvar( res, context[7] );
    res = refalrts::splice_elem( res, context[14] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_stvar( res, context[4] );
    refalrts::link_brackets( context[10], context[11] );
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_evar( res, context[2], context[3] );
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
    // ( e.Found#1/2 ) t.Head#1/4 ( # TDot t.SrcPos#1/7 ) e.Tail#1/0
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    // closed e.Found#1 as range 2
    if( ! refalrts::tvar_left( context[4], context[0], context[1] ) )
      continue;
    context[5] = 0;
    context[6] = 0;
    if( ! refalrts::brackets_left( context[5], context[6], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_TDot<int>::name, context[5], context[6] ) )
      continue;
    // closed e.Tail#1 as range 0
    if( ! refalrts::tvar_left( context[7], context[5], context[6] ) )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    //0: e.Tail#1
    //2: e.Found#1
    //4: t.Head#1
    //7: t.SrcPos#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[9], ExtractAlternatives_NextState, "ExtractAlternatives_NextState" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[12], & ident_None<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[14], & ident_TDot<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[15] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[16] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[16] );
    refalrts::push_stack( context[8] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    refalrts::link_brackets( context[13], context[15] );
    res = refalrts::splice_elem( res, context[15] );
    res = refalrts::splice_stvar( res, context[7] );
    res = refalrts::splice_elem( res, context[14] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_stvar( res, context[4] );
    refalrts::link_brackets( context[10], context[11] );
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_evar( res, context[2], context[3] );
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
    // ( e.Found#1/2 ) t.Head#1/4 t.Unexpected#1/5 e.Tail#1/0
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    // closed e.Found#1 as range 2
    if( ! refalrts::tvar_left( context[4], context[0], context[1] ) )
      continue;
    if( ! refalrts::tvar_left( context[5], context[0], context[1] ) )
      continue;
    // closed e.Tail#1 as range 0
    //0: e.Tail#1
    //2: e.Found#1
    //4: t.Head#1
    //5: t.Unexpected#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[7], UnexpectedToken, "UnexpectedToken" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[8], context[9], "flush or next state name", 24 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[10] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[10] );
    refalrts::push_stack( context[6] );
    res = refalrts::splice_elem( res, context[10] );
    res = refalrts::splice_evar( res, context[8], context[9] );
    res = refalrts::splice_stvar( res, context[5] );
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
  // ( e.Found#1/2 ) t.Head#1/4
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Found#1 as range 2
  if( ! refalrts::tvar_left( context[4], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  //2: e.Found#1
  //4: t.Head#1

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_bracket( context[5] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[6] ) )
    return refalrts::cNoMemory;
  refalrts::link_brackets( context[5], context[6] );
  res = refalrts::splice_elem( res, context[6] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_elem( res, context[5] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult ExtractAlternatives_NextState(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { UnexpectedToken, "UnexpectedToken" },
    { ExtractAlternatives_Finish, "ExtractAlternatives_Finish" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_TDot<int>::name,
    & ident_Finitive<int>::name,
    & ident_TAlternative<int>::name,
    & ident_TName<int>::name
  };
  using refalrts::numbers;
  static const refalrts::StringItem strings[] = {
    {"next state name or next alternative", 35}
  };
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +33, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Found#1/2 ) t.Head#1/4 t.Flush#1/5 ( # TName t.SrcPos#1/8 e.Name#1/6 ) e.Tail#1/0
    {refalrts::icBracketLeft, 0, 2, 0},
    // closed e.Found#1 as range 2
    {refalrts::ictVarLeft, 0, 4, 0},
    {refalrts::ictVarLeft, 0, 5, 0},
    {refalrts::icBracketLeft, 0, 6, 0},
    {refalrts::icIdentLeft, 0, 3, 6},
    // closed e.Tail#1 as range 0
    {refalrts::ictVarLeft, 0, 8, 6},
    // closed e.Name#1 as range 6
    //0: e.Tail#1
    //2: e.Found#1
    //4: t.Head#1
    //5: t.Flush#1
    //6: e.Name#1
    //8: t.SrcPos#1
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
    {refalrts::icSpliceEVar, 0, 0, 6},
    {refalrts::icSpliceSTVar, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceSTVar, 0, 0, 5},
    {refalrts::icSpliceSTVar, 0, 0, 4},
    {refalrts::icLinkBrackets, 11, 12, 0},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +37, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Found#1/2 ) t.Head#1/4 t.Flush#1/5 ( # TAlternative t.SrcPos#1/8 ) e.Tail#1/0
    {refalrts::icBracketLeft, 0, 2, 0},
    // closed e.Found#1 as range 2
    {refalrts::ictVarLeft, 0, 4, 0},
    {refalrts::ictVarLeft, 0, 5, 0},
    {refalrts::icBracketLeft, 0, 6, 0},
    {refalrts::icIdentLeft, 0, 2, 6},
    // closed e.Tail#1 as range 0
    {refalrts::ictVarLeft, 0, 8, 6},
    {refalrts::icEmpty, 0, 0, 6},
    //0: e.Tail#1
    //2: e.Found#1
    //4: t.Head#1
    //5: t.Flush#1
    //8: t.SrcPos#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 9},
    {refalrts::icFunc, 0, 1, 10},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 11},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 12},
    {refalrts::icIdent, 0, 1, 13},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 14},
    {refalrts::icIdent, 0, 2, 15},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 16},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 17},
    {refalrts::icPushStack, 0, 0, 17},
    {refalrts::icPushStack, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icLinkBrackets, 14, 16, 0},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceSTVar, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceSTVar, 0, 0, 5},
    {refalrts::icSpliceSTVar, 0, 0, 4},
    {refalrts::icLinkBrackets, 11, 12, 0},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +37, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Found#1/2 ) t.Head#1/4 t.Flush#1/5 ( # TDot t.SrcPos#1/8 ) e.Tail#1/0
    {refalrts::icBracketLeft, 0, 2, 0},
    // closed e.Found#1 as range 2
    {refalrts::ictVarLeft, 0, 4, 0},
    {refalrts::ictVarLeft, 0, 5, 0},
    {refalrts::icBracketLeft, 0, 6, 0},
    {refalrts::icIdentLeft, 0, 0, 6},
    // closed e.Tail#1 as range 0
    {refalrts::ictVarLeft, 0, 8, 6},
    {refalrts::icEmpty, 0, 0, 6},
    //0: e.Tail#1
    //2: e.Found#1
    //4: t.Head#1
    //5: t.Flush#1
    //8: t.SrcPos#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 9},
    {refalrts::icFunc, 0, 1, 10},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 11},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 12},
    {refalrts::icIdent, 0, 1, 13},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 14},
    {refalrts::icIdent, 0, 0, 15},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 16},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 17},
    {refalrts::icPushStack, 0, 0, 17},
    {refalrts::icPushStack, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icLinkBrackets, 14, 16, 0},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceSTVar, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceSTVar, 0, 0, 5},
    {refalrts::icSpliceSTVar, 0, 0, 4},
    {refalrts::icLinkBrackets, 11, 12, 0},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +18, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Found#1/2 ) t.Head#1/4 t.Flush#1/5 t.Unexpected#1/6 e.Tail#1/0
    {refalrts::icBracketLeft, 0, 2, 0},
    // closed e.Found#1 as range 2
    {refalrts::ictVarLeft, 0, 4, 0},
    {refalrts::ictVarLeft, 0, 5, 0},
    {refalrts::ictVarLeft, 0, 6, 0},
    // closed e.Tail#1 as range 0
    //0: e.Tail#1
    //2: e.Found#1
    //4: t.Head#1
    //5: t.Flush#1
    //6: t.Unexpected#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 7},
    {refalrts::icFunc, 0, 0, 8},
    {refalrts::icString, 0, 0, 9},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 11},
    {refalrts::icPushStack, 0, 0, 11},
    {refalrts::icPushStack, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceRange, 0, 0, 9},
    {refalrts::icSpliceSTVar, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Found#1/2 ) t.Head#1/4 t.Flush#1/5
    {refalrts::icBracketLeft, 0, 2, 0},
    // closed e.Found#1 as range 2
    {refalrts::ictVarLeft, 0, 4, 0},
    {refalrts::ictVarLeft, 0, 5, 0},
    {refalrts::icEmpty, 0, 0, 0},
    //2: e.Found#1
    //4: t.Head#1
    //5: t.Flush#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 7},
    {refalrts::icLinkBrackets, 6, 7, 0},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 6},
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
    // ( e.Found#1/2 ) t.Head#1/4 t.Flush#1/5 ( # TName t.SrcPos#1/8 e.Name#1/6 ) e.Tail#1/0
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    // closed e.Found#1 as range 2
    if( ! refalrts::tvar_left( context[4], context[0], context[1] ) )
      continue;
    if( ! refalrts::tvar_left( context[5], context[0], context[1] ) )
      continue;
    context[6] = 0;
    context[7] = 0;
    if( ! refalrts::brackets_left( context[6], context[7], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_TName<int>::name, context[6], context[7] ) )
      continue;
    // closed e.Tail#1 as range 0
    if( ! refalrts::tvar_left( context[8], context[6], context[7] ) )
      continue;
    // closed e.Name#1 as range 6
    //0: e.Tail#1
    //2: e.Found#1
    //4: t.Head#1
    //5: t.Flush#1
    //6: e.Name#1
    //8: t.SrcPos#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[9] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[10], ExtractAlternatives_Finish, "ExtractAlternatives_Finish" ) )
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
    res = refalrts::splice_evar( res, context[6], context[7] );
    res = refalrts::splice_stvar( res, context[8] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_stvar( res, context[5] );
    res = refalrts::splice_stvar( res, context[4] );
    refalrts::link_brackets( context[11], context[12] );
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_elem( res, context[11] );
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
    // ( e.Found#1/2 ) t.Head#1/4 t.Flush#1/5 ( # TAlternative t.SrcPos#1/8 ) e.Tail#1/0
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    // closed e.Found#1 as range 2
    if( ! refalrts::tvar_left( context[4], context[0], context[1] ) )
      continue;
    if( ! refalrts::tvar_left( context[5], context[0], context[1] ) )
      continue;
    context[6] = 0;
    context[7] = 0;
    if( ! refalrts::brackets_left( context[6], context[7], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_TAlternative<int>::name, context[6], context[7] ) )
      continue;
    // closed e.Tail#1 as range 0
    if( ! refalrts::tvar_left( context[8], context[6], context[7] ) )
      continue;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      continue;
    //0: e.Tail#1
    //2: e.Found#1
    //4: t.Head#1
    //5: t.Flush#1
    //8: t.SrcPos#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[9] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[10], ExtractAlternatives_Finish, "ExtractAlternatives_Finish" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[13], & ident_Finitive<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[15], & ident_TAlternative<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[17] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[17] );
    refalrts::push_stack( context[9] );
    res = refalrts::splice_elem( res, context[17] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    refalrts::link_brackets( context[14], context[16] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_stvar( res, context[8] );
    res = refalrts::splice_elem( res, context[15] );
    res = refalrts::splice_elem( res, context[14] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_stvar( res, context[5] );
    res = refalrts::splice_stvar( res, context[4] );
    refalrts::link_brackets( context[11], context[12] );
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_elem( res, context[11] );
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
    // ( e.Found#1/2 ) t.Head#1/4 t.Flush#1/5 ( # TDot t.SrcPos#1/8 ) e.Tail#1/0
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    // closed e.Found#1 as range 2
    if( ! refalrts::tvar_left( context[4], context[0], context[1] ) )
      continue;
    if( ! refalrts::tvar_left( context[5], context[0], context[1] ) )
      continue;
    context[6] = 0;
    context[7] = 0;
    if( ! refalrts::brackets_left( context[6], context[7], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_TDot<int>::name, context[6], context[7] ) )
      continue;
    // closed e.Tail#1 as range 0
    if( ! refalrts::tvar_left( context[8], context[6], context[7] ) )
      continue;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      continue;
    //0: e.Tail#1
    //2: e.Found#1
    //4: t.Head#1
    //5: t.Flush#1
    //8: t.SrcPos#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[9] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[10], ExtractAlternatives_Finish, "ExtractAlternatives_Finish" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[13], & ident_Finitive<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[15], & ident_TDot<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[17] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[17] );
    refalrts::push_stack( context[9] );
    res = refalrts::splice_elem( res, context[17] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    refalrts::link_brackets( context[14], context[16] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_stvar( res, context[8] );
    res = refalrts::splice_elem( res, context[15] );
    res = refalrts::splice_elem( res, context[14] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_stvar( res, context[5] );
    res = refalrts::splice_stvar( res, context[4] );
    refalrts::link_brackets( context[11], context[12] );
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_elem( res, context[11] );
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
    // ( e.Found#1/2 ) t.Head#1/4 t.Flush#1/5 t.Unexpected#1/6 e.Tail#1/0
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    // closed e.Found#1 as range 2
    if( ! refalrts::tvar_left( context[4], context[0], context[1] ) )
      continue;
    if( ! refalrts::tvar_left( context[5], context[0], context[1] ) )
      continue;
    if( ! refalrts::tvar_left( context[6], context[0], context[1] ) )
      continue;
    // closed e.Tail#1 as range 0
    //0: e.Tail#1
    //2: e.Found#1
    //4: t.Head#1
    //5: t.Flush#1
    //6: t.Unexpected#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[7] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[8], UnexpectedToken, "UnexpectedToken" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[9], context[10], "next state name or next alternative", 35 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[11] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[11] );
    refalrts::push_stack( context[7] );
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_evar( res, context[9], context[10] );
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
  // ( e.Found#1/2 ) t.Head#1/4 t.Flush#1/5
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Found#1 as range 2
  if( ! refalrts::tvar_left( context[4], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::tvar_left( context[5], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  //2: e.Found#1
  //4: t.Head#1
  //5: t.Flush#1

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_bracket( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[7] ) )
    return refalrts::cNoMemory;
  refalrts::link_brackets( context[6], context[7] );
  res = refalrts::splice_elem( res, context[7] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_elem( res, context[6] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult ExtractAlternatives_Finish(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { ExtractAlternatives, "ExtractAlternatives" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_TAlternative<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +34, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Found#1/2 ) t.Head#1/4 t.Flush#1/5 t.NextState#1/6 ( # TAlternative t.SrcPos#1/9 ) e.Tail#1/0
    {refalrts::icBracketLeft, 0, 2, 0},
    // closed e.Found#1 as range 2
    {refalrts::ictVarLeft, 0, 4, 0},
    {refalrts::ictVarLeft, 0, 5, 0},
    {refalrts::ictVarLeft, 0, 6, 0},
    {refalrts::icBracketLeft, 0, 7, 0},
    {refalrts::icIdentLeft, 0, 0, 7},
    // closed e.Tail#1 as range 0
    {refalrts::ictVarLeft, 0, 9, 7},
    {refalrts::icEmpty, 0, 0, 7},
    //0: e.Tail#1
    //2: e.Found#1
    //4: t.Head#1
    //5: t.Flush#1
    //6: t.NextState#1
    //9: t.SrcPos#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 10},
    {refalrts::icFunc, 0, 0, 11},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 12},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 13},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 14},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 15},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 16},
    {refalrts::icPushStack, 0, 0, 16},
    {refalrts::icPushStack, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icLinkBrackets, 12, 15, 0},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icLinkBrackets, 13, 14, 0},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceSTVar, 0, 0, 6},
    {refalrts::icSpliceSTVar, 0, 0, 5},
    {refalrts::icSpliceSTVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Found#1/2 ) t.Head#1/4 t.Flush#1/5 t.NextState#1/6 e.Tail#1/0
    {refalrts::icBracketLeft, 0, 2, 0},
    // closed e.Found#1 as range 2
    {refalrts::ictVarLeft, 0, 4, 0},
    {refalrts::ictVarLeft, 0, 5, 0},
    {refalrts::ictVarLeft, 0, 6, 0},
    // closed e.Tail#1 as range 0
    //0: e.Tail#1
    //2: e.Found#1
    //4: t.Head#1
    //5: t.Flush#1
    //6: t.NextState#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 7},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 9},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 10},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icLinkBrackets, 7, 10, 0},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icLinkBrackets, 8, 9, 0},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceSTVar, 0, 0, 6},
    {refalrts::icSpliceSTVar, 0, 0, 5},
    {refalrts::icSpliceSTVar, 0, 0, 4},
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
    // ( e.Found#1/2 ) t.Head#1/4 t.Flush#1/5 t.NextState#1/6 ( # TAlternative t.SrcPos#1/9 ) e.Tail#1/0
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    // closed e.Found#1 as range 2
    if( ! refalrts::tvar_left( context[4], context[0], context[1] ) )
      continue;
    if( ! refalrts::tvar_left( context[5], context[0], context[1] ) )
      continue;
    if( ! refalrts::tvar_left( context[6], context[0], context[1] ) )
      continue;
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_left( context[7], context[8], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_TAlternative<int>::name, context[7], context[8] ) )
      continue;
    // closed e.Tail#1 as range 0
    if( ! refalrts::tvar_left( context[9], context[7], context[8] ) )
      continue;
    if( ! refalrts::empty_seq( context[7], context[8] ) )
      continue;
    //0: e.Tail#1
    //2: e.Found#1
    //4: t.Head#1
    //5: t.Flush#1
    //6: t.NextState#1
    //9: t.SrcPos#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[11], ExtractAlternatives, "ExtractAlternatives" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[15] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[16] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[16] );
    refalrts::push_stack( context[10] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    refalrts::link_brackets( context[12], context[15] );
    res = refalrts::splice_elem( res, context[15] );
    refalrts::link_brackets( context[13], context[14] );
    res = refalrts::splice_elem( res, context[14] );
    res = refalrts::splice_stvar( res, context[6] );
    res = refalrts::splice_stvar( res, context[5] );
    res = refalrts::splice_stvar( res, context[4] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_elem( res, context[11] );
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
  // ( e.Found#1/2 ) t.Head#1/4 t.Flush#1/5 t.NextState#1/6 e.Tail#1/0
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Found#1 as range 2
  if( ! refalrts::tvar_left( context[4], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::tvar_left( context[5], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::tvar_left( context[6], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Tail#1 as range 0
  //0: e.Tail#1
  //2: e.Found#1
  //4: t.Head#1
  //5: t.Flush#1
  //6: t.NextState#1

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_bracket( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[10] ) )
    return refalrts::cNoMemory;
  res = refalrts::splice_evar( res, context[0], context[1] );
  refalrts::link_brackets( context[7], context[10] );
  res = refalrts::splice_elem( res, context[10] );
  refalrts::link_brackets( context[8], context[9] );
  res = refalrts::splice_elem( res, context[9] );
  res = refalrts::splice_stvar( res, context[6] );
  res = refalrts::splice_stvar( res, context[5] );
  res = refalrts::splice_stvar( res, context[4] );
  res = refalrts::splice_elem( res, context[8] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_elem( res, context[7] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult ToText(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 5 elems
  refalrts::Iter context[5];
  refalrts::zeros( context, 5 );
#ifdef INTERPRET
  using refalrts::functions;
  static const refalrts::RefalIdentifier idents[] = {
    & ident_TEOF<int>::name,
    & ident_TErrorFlush<int>::name,
    & ident_TFlush<int>::name,
    & ident_TAlternative<int>::name,
    & ident_TDot<int>::name,
    & ident_TEquals<int>::name,
    & ident_TNamedFlush<int>::name,
    & ident_TName<int>::name,
    & ident_TLiteral<int>::name,
    & ident_TSetName<int>::name
  };
  using refalrts::numbers;
  static const refalrts::StringItem strings[] = {
    {"end of file", 11},
    {"error flush \"", 13},
    {"flush", 5},
    {"\"|\"", 3},
    {"\".\"", 3},
    {"\"=\"", 3},
    {"named flush ", 12},
    {"name ", 5},
    {"literal ", 8},
    {"set name ", 9}
  };
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +7, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // # TSetName e.Name#1/0
    {refalrts::icIdentLeft, 0, 9, 0},
    // closed e.Name#1 as range 0
    //0: e.Name#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icString, 0, 9, 2},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icSpliceRange, 0, 0, 2},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +7, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // # TLiteral e.Text#1/0
    {refalrts::icIdentLeft, 0, 8, 0},
    // closed e.Text#1 as range 0
    //0: e.Text#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icString, 0, 8, 2},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icSpliceRange, 0, 0, 2},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +7, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // # TName e.Name#1/0
    {refalrts::icIdentLeft, 0, 7, 0},
    // closed e.Name#1 as range 0
    //0: e.Name#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icString, 0, 7, 2},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icSpliceRange, 0, 0, 2},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +7, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // # TNamedFlush e.Name#1/0
    {refalrts::icIdentLeft, 0, 6, 0},
    // closed e.Name#1 as range 0
    //0: e.Name#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icString, 0, 6, 2},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icSpliceRange, 0, 0, 2},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +7, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // # TEquals
    {refalrts::icIdentLeft, 0, 5, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icString, 0, 5, 2},
    {refalrts::icSpliceRange, 0, 0, 2},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +7, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // # TDot
    {refalrts::icIdentLeft, 0, 4, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icString, 0, 4, 2},
    {refalrts::icSpliceRange, 0, 0, 2},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +7, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // # TAlternative
    {refalrts::icIdentLeft, 0, 3, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icString, 0, 3, 2},
    {refalrts::icSpliceRange, 0, 0, 2},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +7, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // # TFlush
    {refalrts::icIdentLeft, 0, 2, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icString, 0, 2, 2},
    {refalrts::icSpliceRange, 0, 0, 2},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +9, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // # TErrorFlush e.Text#1/0
    {refalrts::icIdentLeft, 0, 1, 0},
    // closed e.Text#1 as range 0
    //0: e.Text#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icString, 0, 1, 2},
    {refalrts::icChar, 0, '\"', 4},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icSpliceRange, 0, 0, 2},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // # TEOF
    {refalrts::icIdentLeft, 0, 0, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icString, 0, 0, 2},
    {refalrts::icSpliceRange, 0, 0, 2},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[9];
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
    // # TSetName e.Name#1/0
    if( ! refalrts::ident_left(  & ident_TSetName<int>::name, context[0], context[1] ) )
      continue;
    // closed e.Name#1 as range 0
    //0: e.Name#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_chars( context[2], context[3], "set name ", 9 ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_evar( res, context[0], context[1] );
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
    // # TLiteral e.Text#1/0
    if( ! refalrts::ident_left(  & ident_TLiteral<int>::name, context[0], context[1] ) )
      continue;
    // closed e.Text#1 as range 0
    //0: e.Text#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_chars( context[2], context[3], "literal ", 8 ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_evar( res, context[0], context[1] );
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
    // # TName e.Name#1/0
    if( ! refalrts::ident_left(  & ident_TName<int>::name, context[0], context[1] ) )
      continue;
    // closed e.Name#1 as range 0
    //0: e.Name#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_chars( context[2], context[3], "name ", 5 ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_evar( res, context[0], context[1] );
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
    // # TNamedFlush e.Name#1/0
    if( ! refalrts::ident_left(  & ident_TNamedFlush<int>::name, context[0], context[1] ) )
      continue;
    // closed e.Name#1 as range 0
    //0: e.Name#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_chars( context[2], context[3], "named flush ", 12 ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_evar( res, context[0], context[1] );
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
    // # TEquals
    if( ! refalrts::ident_left(  & ident_TEquals<int>::name, context[0], context[1] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_chars( context[2], context[3], "\"=\"", 3 ) )
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
    // # TDot
    if( ! refalrts::ident_left(  & ident_TDot<int>::name, context[0], context[1] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_chars( context[2], context[3], "\".\"", 3 ) )
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
    // # TAlternative
    if( ! refalrts::ident_left(  & ident_TAlternative<int>::name, context[0], context[1] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_chars( context[2], context[3], "\"|\"", 3 ) )
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
    // # TFlush
    if( ! refalrts::ident_left(  & ident_TFlush<int>::name, context[0], context[1] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_chars( context[2], context[3], "flush", 5 ) )
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
    // # TErrorFlush e.Text#1/0
    if( ! refalrts::ident_left(  & ident_TErrorFlush<int>::name, context[0], context[1] ) )
      continue;
    // closed e.Text#1 as range 0
    //0: e.Text#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_chars( context[2], context[3], "error flush \"", 13 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[4], '\"' ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_elem( res, context[4] );
    res = refalrts::splice_evar( res, context[0], context[1] );
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
  // # TEOF
  if( ! refalrts::ident_left(  & ident_TEOF<int>::name, context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_chars( context[2], context[3], "end of file", 11 ) )
    return refalrts::cNoMemory;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult UnexpectedToken(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { ToText, "ToText" },
    { ErrorAt, "ErrorAt" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  static const refalrts::StringItem strings[] = {
    {" expected ", 10},
    {"Unexpected ", 11}
  };
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    // ( s.Type#1/4 s.LineNum#1/5 e.Unexpected#1/2 ) e.Message#1/0
    {refalrts::icBracketLeft, 0, 2, 0},
    // closed e.Message#1 as range 0
    {refalrts::icsVarLeft, 0, 4, 2},
    {refalrts::icsVarLeft, 0, 5, 2},
    // closed e.Unexpected#1 as range 2
    //0: e.Message#1
    //2: e.Unexpected#1
    //4: s.Type#1
    //5: s.LineNum#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 6},
    {refalrts::icFunc, 0, 1, 7},
    {refalrts::icString, 0, 1, 8},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 10},
    {refalrts::icFunc, 0, 0, 11},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 12},
    {refalrts::icString, 0, 0, 13},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 15},
    {refalrts::icPushStack, 0, 0, 15},
    {refalrts::icPushStack, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icSpliceRange, 0, 0, 13},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icPushStack, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceSTVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceRange, 0, 0, 8},
    {refalrts::icSpliceSTVar, 0, 0, 5},
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
  // ( s.Type#1/4 s.LineNum#1/5 e.Unexpected#1/2 ) e.Message#1/0
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Message#1 as range 0
  if( ! refalrts::svar_left( context[4], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Unexpected#1 as range 2
  //0: e.Message#1
  //2: e.Unexpected#1
  //4: s.Type#1
  //5: s.LineNum#1

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_call( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[7], ErrorAt, "ErrorAt" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[8], context[9], "Unexpected ", 11 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[11], ToText, "ToText" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[13], context[14], " expected ", 10 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[15] ) )
    return refalrts::cNoMemory;
  refalrts::push_stack( context[15] );
  refalrts::push_stack( context[6] );
  res = refalrts::splice_elem( res, context[15] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  refalrts::push_stack( context[12] );
  refalrts::push_stack( context[10] );
  res = refalrts::splice_elem( res, context[12] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_stvar( res, context[4] );
  res = refalrts::splice_elem( res, context[11] );
  res = refalrts::splice_elem( res, context[10] );
  res = refalrts::splice_evar( res, context[8], context[9] );
  res = refalrts::splice_stvar( res, context[5] );
  res = refalrts::splice_elem( res, context[7] );
  res = refalrts::splice_elem( res, context[6] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult lambda_Tokens_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 5 elems
  refalrts::Iter context[5];
  refalrts::zeros( context, 5 );
#ifdef INTERPRET
  using refalrts::functions;
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
    {refalrts::icChar, 0, '\n', 4},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icSpliceEVar, 0, 0, 2},
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
  if( ! refalrts::alloc_char( context[4], '\n' ) )
    return refalrts::cNoMemory;
  res = refalrts::splice_elem( res, context[4] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult lambda_Tokens_1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { ErrorAt, "ErrorAt" },
    { Inc, "Inc" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_TError<int>::name,
    & ident_TNewLine<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +17, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // s.LineNumber#2/4 ( # TNewLine )
    {refalrts::icBracketRight, 0, 2, 0},
    {refalrts::icIdentLeft, 0, 1, 2},
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icsVarLeft, 0, 4, 0},
    {refalrts::icEmpty, 0, 0, 0},
    //4: s.LineNumber#2
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 5},
    {refalrts::icFunc, 0, 1, 6},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 7},
    {refalrts::icPushStack, 0, 0, 7},
    {refalrts::icPushStack, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceSTVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +17, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // s.LineNumber#2/4 ( # TError e.Text#2/2 )
    {refalrts::icBracketRight, 0, 2, 0},
    {refalrts::icIdentLeft, 0, 0, 2},
    // closed e.Text#2 as range 2
    {refalrts::icsVarLeft, 0, 4, 0},
    {refalrts::icEmpty, 0, 0, 0},
    //2: e.Text#2
    //4: s.LineNumber#2
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 5},
    {refalrts::icFunc, 0, 0, 6},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 7},
    {refalrts::icPushStack, 0, 0, 7},
    {refalrts::icPushStack, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceSTVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // s.LineNumber#2/4 ( s.TokName#2/5 e.Content#2/2 )
    {refalrts::icBracketRight, 0, 2, 0},
    {refalrts::icsVarLeft, 0, 4, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icsVarLeft, 0, 5, 2},
    // closed e.Content#2 as range 2
    //2: e.Content#2
    //4: s.LineNumber#2
    //5: s.TokName#2
    //7: s.LineNumber#2
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icCopySTVar, 7, 4, 0},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 8},
    {refalrts::icLinkBrackets, 6, 8, 0},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceSTVar, 0, 0, 7},
    {refalrts::icSpliceSTVar, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceSTVar, 0, 0, 4},
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
    // s.LineNumber#2/4 ( # TNewLine )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_right( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_TNewLine<int>::name, context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[4], context[0], context[1] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    //4: s.LineNumber#2

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[5] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[6], Inc, "Inc" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[7] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[7] );
    refalrts::push_stack( context[5] );
    res = refalrts::splice_elem( res, context[7] );
    res = refalrts::splice_stvar( res, context[4] );
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
    // s.LineNumber#2/4 ( # TError e.Text#2/2 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_right( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_TError<int>::name, context[2], context[3] ) )
      continue;
    // closed e.Text#2 as range 2
    if( ! refalrts::svar_left( context[4], context[0], context[1] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    //2: e.Text#2
    //4: s.LineNumber#2

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[5] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[6], ErrorAt, "ErrorAt" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[7] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[7] );
    refalrts::push_stack( context[5] );
    res = refalrts::splice_elem( res, context[7] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_stvar( res, context[4] );
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
  // s.LineNumber#2/4 ( s.TokName#2/5 e.Content#2/2 )
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_right( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[4], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Content#2 as range 2
  //2: e.Content#2
  //4: s.LineNumber#2
  //5: s.TokName#2
  //7: s.LineNumber#2

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_bracket( context[6] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_stvar(context[7], context[4]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[8] ) )
    return refalrts::cNoMemory;
  refalrts::link_brackets( context[6], context[8] );
  res = refalrts::splice_elem( res, context[8] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_stvar( res, context[7] );
  res = refalrts::splice_stvar( res, context[5] );
  res = refalrts::splice_elem( res, context[6] );
  res = refalrts::splice_stvar( res, context[4] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult lambda_Tokens_2(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
#ifdef INTERPRET
  using refalrts::functions;
  static const refalrts::RefalIdentifier idents[] = {
    & ident_TEOF<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    // s.LineNumber#2/2 e.Tokens#2/0
    {refalrts::icsVarLeft, 0, 2, 0},
    // closed e.Tokens#2 as range 0
    //0: e.Tokens#2
    //2: s.LineNumber#2
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 3},
    {refalrts::icIdent, 0, 0, 4},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 5},
    {refalrts::icLinkBrackets, 3, 5, 0},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icSpliceSTVar, 0, 0, 2},
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
  context[0] = arg_begin;
  context[1] = arg_end;
  refalrts::move_left( context[0], context[1] );
  refalrts::move_left( context[0], context[1] );
  refalrts::move_right( context[0], context[1] );
  // s.LineNumber#2/2 e.Tokens#2/0
  if( ! refalrts::svar_left( context[2], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Tokens#2 as range 0
  //0: e.Tokens#2
  //2: s.LineNumber#2

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_bracket( context[3] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[4], & ident_TEOF<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[5] ) )
    return refalrts::cNoMemory;
  refalrts::link_brackets( context[3], context[5] );
  res = refalrts::splice_elem( res, context[5] );
  res = refalrts::splice_stvar( res, context[2] );
  res = refalrts::splice_elem( res, context[4] );
  res = refalrts::splice_elem( res, context[3] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult Tokens(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { lambda_Tokens_2, "lambda_Tokens_2" },
    { Inc, "Inc" },
    { lambda_Tokens_1, "lambda_Tokens_1" },
    { MapReduce, "MapReduce" },
    { LoTokens, "LoTokens" },
    { lambda_Tokens_0, "lambda_Tokens_0" },
    { Map, "Map" },
    { Seq, "Seq" },
    { Fetch, "Fetch" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    // s.FirstLineNumber#1/2 e.Lines#1/0
    {refalrts::icsVarLeft, 0, 2, 0},
    // closed e.Lines#1 as range 0
    //0: e.Lines#1
    //2: s.FirstLineNumber#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 3},
    {refalrts::icFunc, 0, 8, 4},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 5},
    {refalrts::icFunc, 0, 7, 6},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 7},
    {refalrts::icFunc, 0, 6, 8},
    {refalrts::icFunc, 0, 5, 9},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 10},
    {refalrts::icFunc, 0, 4, 11},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 12},
    {refalrts::icFunc, 0, 3, 13},
    {refalrts::icFunc, 0, 2, 14},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 15},
    {refalrts::icFunc, 0, 1, 16},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 17},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 18},
    {refalrts::icFunc, 0, 0, 19},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 20},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 21},
    {refalrts::icPushStack, 0, 0, 21},
    {refalrts::icPushStack, 0, 0, 3},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icPushStack, 0, 0, 20},
    {refalrts::icPushStack, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icLinkBrackets, 12, 18, 0},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icPushStack, 0, 0, 17},
    {refalrts::icPushStack, 0, 0, 15},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceSTVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icLinkBrackets, 7, 10, 0},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 9},
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
  // s.FirstLineNumber#1/2 e.Lines#1/0
  if( ! refalrts::svar_left( context[2], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Lines#1 as range 0
  //0: e.Lines#1
  //2: s.FirstLineNumber#1

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
  if( ! refalrts::alloc_open_bracket( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[8], Map, "Map" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[9], lambda_Tokens_0, "lambda_Tokens_0" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[11], LoTokens, "LoTokens" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[13], MapReduce, "MapReduce" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[14], lambda_Tokens_1, "lambda_Tokens_1" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[16], Inc, "Inc" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[17] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[18] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[19], lambda_Tokens_2, "lambda_Tokens_2" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[20] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[21] ) )
    return refalrts::cNoMemory;
  refalrts::push_stack( context[21] );
  refalrts::push_stack( context[3] );
  res = refalrts::splice_elem( res, context[21] );
  refalrts::push_stack( context[20] );
  refalrts::push_stack( context[5] );
  res = refalrts::splice_elem( res, context[20] );
  res = refalrts::splice_elem( res, context[19] );
  refalrts::link_brackets( context[12], context[18] );
  res = refalrts::splice_elem( res, context[18] );
  refalrts::push_stack( context[17] );
  refalrts::push_stack( context[15] );
  res = refalrts::splice_elem( res, context[17] );
  res = refalrts::splice_stvar( res, context[2] );
  res = refalrts::splice_elem( res, context[16] );
  res = refalrts::splice_elem( res, context[15] );
  res = refalrts::splice_elem( res, context[14] );
  res = refalrts::splice_elem( res, context[13] );
  res = refalrts::splice_elem( res, context[12] );
  res = refalrts::splice_elem( res, context[11] );
  refalrts::link_brackets( context[7], context[10] );
  res = refalrts::splice_elem( res, context[10] );
  res = refalrts::splice_elem( res, context[9] );
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

static refalrts::FnResult LoTokens(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 8 elems
  refalrts::Iter context[8];
  refalrts::zeros( context, 8 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { Name, "Name" },
    { LoTokens, "LoTokens" },
    { Literal, "Literal" },
    { FlushName, "FlushName" },
    { SetName, "SetName" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_TAlternative<int>::name,
    & ident_TDot<int>::name,
    & ident_TEquals<int>::name,
    & ident_TNewLine<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +13, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ' ' e.Text#1/0
    {refalrts::icCharLeft, 0, static_cast<unsigned char>(' '), 0},
    // closed e.Text#1 as range 0
    //0: e.Text#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 2},
    {refalrts::icFunc, 0, 1, 3},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 4},
    {refalrts::icPushStack, 0, 0, 4},
    {refalrts::icPushStack, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icSpliceElem, 0, 0, 3},
    {refalrts::icSpliceElem, 0, 0, 2},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +13, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // '\t' e.Text#1/0
    {refalrts::icCharLeft, 0, static_cast<unsigned char>('\t'), 0},
    // closed e.Text#1 as range 0
    //0: e.Text#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 2},
    {refalrts::icFunc, 0, 1, 3},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 4},
    {refalrts::icPushStack, 0, 0, 4},
    {refalrts::icPushStack, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icSpliceElem, 0, 0, 3},
    {refalrts::icSpliceElem, 0, 0, 2},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +13, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // '\r' e.Text#1/0
    {refalrts::icCharLeft, 0, static_cast<unsigned char>('\r'), 0},
    // closed e.Text#1 as range 0
    //0: e.Text#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 2},
    {refalrts::icFunc, 0, 1, 3},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 4},
    {refalrts::icPushStack, 0, 0, 4},
    {refalrts::icPushStack, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icSpliceElem, 0, 0, 3},
    {refalrts::icSpliceElem, 0, 0, 2},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +20, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // '\n' e.Text#1/0
    {refalrts::icCharLeft, 0, static_cast<unsigned char>('\n'), 0},
    // closed e.Text#1 as range 0
    //0: e.Text#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 2},
    {refalrts::icIdent, 0, 3, 3},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 4},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 5},
    {refalrts::icFunc, 0, 1, 6},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 7},
    {refalrts::icPushStack, 0, 0, 7},
    {refalrts::icPushStack, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icLinkBrackets, 2, 4, 0},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 3},
    {refalrts::icSpliceElem, 0, 0, 2},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +18, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ':' e.Text#1/0
    {refalrts::icCharLeft, 0, static_cast<unsigned char>(':'), 0},
    // closed e.Text#1 as range 0
    //0: e.Text#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 2},
    {refalrts::icFunc, 0, 4, 3},
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
    {refalrts::icOnFailGoTo, +13, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // '!' e.Text#1/0
    {refalrts::icCharLeft, 0, static_cast<unsigned char>('!'), 0},
    // closed e.Text#1 as range 0
    //0: e.Text#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 2},
    {refalrts::icFunc, 0, 3, 3},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 4},
    {refalrts::icPushStack, 0, 0, 4},
    {refalrts::icPushStack, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icSpliceElem, 0, 0, 3},
    {refalrts::icSpliceElem, 0, 0, 2},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +18, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // '\'' e.Text#1/0
    {refalrts::icCharLeft, 0, static_cast<unsigned char>('\''), 0},
    // closed e.Text#1 as range 0
    //0: e.Text#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 2},
    {refalrts::icFunc, 0, 2, 3},
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
    {refalrts::icOnFailGoTo, +20, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // '=' e.Text#1/0
    {refalrts::icCharLeft, 0, static_cast<unsigned char>('='), 0},
    // closed e.Text#1 as range 0
    //0: e.Text#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 2},
    {refalrts::icIdent, 0, 2, 3},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 4},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 5},
    {refalrts::icFunc, 0, 1, 6},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 7},
    {refalrts::icPushStack, 0, 0, 7},
    {refalrts::icPushStack, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icLinkBrackets, 2, 4, 0},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 3},
    {refalrts::icSpliceElem, 0, 0, 2},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +20, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // '.' e.Text#1/0
    {refalrts::icCharLeft, 0, static_cast<unsigned char>('.'), 0},
    // closed e.Text#1 as range 0
    //0: e.Text#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 2},
    {refalrts::icIdent, 0, 1, 3},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 4},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 5},
    {refalrts::icFunc, 0, 1, 6},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 7},
    {refalrts::icPushStack, 0, 0, 7},
    {refalrts::icPushStack, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icLinkBrackets, 2, 4, 0},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 3},
    {refalrts::icSpliceElem, 0, 0, 2},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +20, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // '|' e.Text#1/0
    {refalrts::icCharLeft, 0, static_cast<unsigned char>('|'), 0},
    // closed e.Text#1 as range 0
    //0: e.Text#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 2},
    {refalrts::icIdent, 0, 0, 3},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 4},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 5},
    {refalrts::icFunc, 0, 1, 6},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 7},
    {refalrts::icPushStack, 0, 0, 7},
    {refalrts::icPushStack, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icLinkBrackets, 2, 4, 0},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 3},
    {refalrts::icSpliceElem, 0, 0, 2},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +14, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // s.Next#1/2 e.Text#1/0
    {refalrts::icsVarLeft, 0, 2, 0},
    // closed e.Text#1 as range 0
    //0: e.Text#1
    //2: s.Next#1
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
    {refalrts::icInitB0, 0, 0, 0},
    //
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[11];
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
    // ' ' e.Text#1/0
    if( ! refalrts::char_left( ' ', context[0], context[1] ) )
      continue;
    // closed e.Text#1 as range 0
    //0: e.Text#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[2] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[3], LoTokens, "LoTokens" ) )
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

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    // '\t' e.Text#1/0
    if( ! refalrts::char_left( '\t', context[0], context[1] ) )
      continue;
    // closed e.Text#1 as range 0
    //0: e.Text#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[2] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[3], LoTokens, "LoTokens" ) )
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

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    // '\r' e.Text#1/0
    if( ! refalrts::char_left( '\r', context[0], context[1] ) )
      continue;
    // closed e.Text#1 as range 0
    //0: e.Text#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[2] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[3], LoTokens, "LoTokens" ) )
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

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    // '\n' e.Text#1/0
    if( ! refalrts::char_left( '\n', context[0], context[1] ) )
      continue;
    // closed e.Text#1 as range 0
    //0: e.Text#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[2] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[3], & ident_TNewLine<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[4] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[5] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[6], LoTokens, "LoTokens" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[7] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[7] );
    refalrts::push_stack( context[5] );
    res = refalrts::splice_elem( res, context[7] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    res = refalrts::splice_elem( res, context[6] );
    res = refalrts::splice_elem( res, context[5] );
    refalrts::link_brackets( context[2], context[4] );
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
    // ':' e.Text#1/0
    if( ! refalrts::char_left( ':', context[0], context[1] ) )
      continue;
    // closed e.Text#1 as range 0
    //0: e.Text#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[2] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[3], SetName, "SetName" ) )
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
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    // '!' e.Text#1/0
    if( ! refalrts::char_left( '!', context[0], context[1] ) )
      continue;
    // closed e.Text#1 as range 0
    //0: e.Text#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[2] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[3], FlushName, "FlushName" ) )
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

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    // '\'' e.Text#1/0
    if( ! refalrts::char_left( '\'', context[0], context[1] ) )
      continue;
    // closed e.Text#1 as range 0
    //0: e.Text#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[2] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[3], Literal, "Literal" ) )
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
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    // '=' e.Text#1/0
    if( ! refalrts::char_left( '=', context[0], context[1] ) )
      continue;
    // closed e.Text#1 as range 0
    //0: e.Text#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[2] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[3], & ident_TEquals<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[4] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[5] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[6], LoTokens, "LoTokens" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[7] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[7] );
    refalrts::push_stack( context[5] );
    res = refalrts::splice_elem( res, context[7] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    res = refalrts::splice_elem( res, context[6] );
    res = refalrts::splice_elem( res, context[5] );
    refalrts::link_brackets( context[2], context[4] );
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
    // '.' e.Text#1/0
    if( ! refalrts::char_left( '.', context[0], context[1] ) )
      continue;
    // closed e.Text#1 as range 0
    //0: e.Text#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[2] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[3], & ident_TDot<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[4] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[5] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[6], LoTokens, "LoTokens" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[7] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[7] );
    refalrts::push_stack( context[5] );
    res = refalrts::splice_elem( res, context[7] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    res = refalrts::splice_elem( res, context[6] );
    res = refalrts::splice_elem( res, context[5] );
    refalrts::link_brackets( context[2], context[4] );
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
    // '|' e.Text#1/0
    if( ! refalrts::char_left( '|', context[0], context[1] ) )
      continue;
    // closed e.Text#1 as range 0
    //0: e.Text#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[2] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[3], & ident_TAlternative<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[4] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[5] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[6], LoTokens, "LoTokens" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[7] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[7] );
    refalrts::push_stack( context[5] );
    res = refalrts::splice_elem( res, context[7] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    res = refalrts::splice_elem( res, context[6] );
    res = refalrts::splice_elem( res, context[5] );
    refalrts::link_brackets( context[2], context[4] );
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
    // s.Next#1/2 e.Text#1/0
    if( ! refalrts::svar_left( context[2], context[0], context[1] ) )
      continue;
    // closed e.Text#1 as range 0
    //0: e.Text#1
    //2: s.Next#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[3] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[4], Name, "Name" ) )
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

static refalrts::FnResult NextInSet(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
#ifdef INTERPRET
  using refalrts::functions;
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +27, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // s.SuccessHandler#1/2 s.FailHandler#1/3 ( e.Set_B#1/9 s.Next#1/11 e.Set_E#1/12 ) ( e.Scanned#1/6 ) s.Next#1/8 e.Text#1/0
    {refalrts::icsVarLeft, 0, 2, 0},
    {refalrts::icsVarLeft, 0, 3, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icBracketLeft, 0, 6, 0},
    // closed e.Scanned#1 as range 6
    {refalrts::icsVarLeft, 0, 8, 0},
    // closed e.Text#1 as range 0
    {refalrts::icEPrepare, 0, 9, 4},
    {refalrts::icEStart, 0, 9, 4},
    {refalrts::icSave, 0, 12, 4},
    {refalrts::icsRepeatLeft, 11, 8, 12},
    // closed e.Set_E#1 as range 4
    //0: e.Text#1
    //2: s.SuccessHandler#1
    //3: s.FailHandler#1
    //6: e.Scanned#1
    //8: s.Next#1
    //9: e.Set_B#1
    //11: s.Next#1
    //12: e.Set_E#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 14},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 15},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 16},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 17},
    {refalrts::icPushStack, 0, 0, 17},
    {refalrts::icPushStack, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icLinkBrackets, 15, 16, 0},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceSTVar, 0, 0, 8},
    {refalrts::icSpliceEVar, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceSTVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // s.SuccessHandler#1/2 s.FailHandler#1/3 ( e.Set#1/4 ) ( e.Scanned#1/6 ) e.Text#1/0
    {refalrts::icsVarLeft, 0, 2, 0},
    {refalrts::icsVarLeft, 0, 3, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icBracketLeft, 0, 6, 0},
    // closed e.Set#1 as range 4
    // closed e.Scanned#1 as range 6
    // closed e.Text#1 as range 0
    //0: e.Text#1
    //2: s.SuccessHandler#1
    //3: s.FailHandler#1
    //4: e.Set#1
    //6: e.Scanned#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 8},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 9},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 10},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 11},
    {refalrts::icPushStack, 0, 0, 11},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icLinkBrackets, 9, 10, 0},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceEVar, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceSTVar, 0, 0, 3},
    {refalrts::icSpliceElem, 0, 0, 8},
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
    // s.SuccessHandler#1/2 s.FailHandler#1/3 ( e.Set_B#1/9 s.Next#1/11 e.Set_E#1/12 ) ( e.Scanned#1/6 ) s.Next#1/8 e.Text#1/0
    if( ! refalrts::svar_left( context[2], context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      continue;
    context[6] = 0;
    context[7] = 0;
    if( ! refalrts::brackets_left( context[6], context[7], context[0], context[1] ) )
      continue;
    // closed e.Scanned#1 as range 6
    if( ! refalrts::svar_left( context[8], context[0], context[1] ) )
      continue;
    // closed e.Text#1 as range 0
    context[9] = 0;
    context[10] = 0;
    refalrts::start_e_loop();
    do {
      context[12] = context[4];
      context[13] = context[5];
      if( ! refalrts::repeated_stvar_left( context[11], context[8], context[12], context[13] ) )
        continue;
      // closed e.Set_E#1 as range 4
      //0: e.Text#1
      //2: s.SuccessHandler#1
      //3: s.FailHandler#1
      //6: e.Scanned#1
      //8: s.Next#1
      //9: e.Set_B#1
      //11: s.Next#1
      //12: e.Set_E#1

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::alloc_open_call( context[14] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[15] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[16] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[17] ) )
        return refalrts::cNoMemory;
      refalrts::push_stack( context[17] );
      refalrts::push_stack( context[14] );
      res = refalrts::splice_elem( res, context[17] );
      res = refalrts::splice_evar( res, context[0], context[1] );
      refalrts::link_brackets( context[15], context[16] );
      res = refalrts::splice_elem( res, context[16] );
      res = refalrts::splice_stvar( res, context[8] );
      res = refalrts::splice_evar( res, context[6], context[7] );
      res = refalrts::splice_elem( res, context[15] );
      res = refalrts::splice_stvar( res, context[2] );
      res = refalrts::splice_elem( res, context[14] );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[9], context[10], context[4], context[5] ) );
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  refalrts::move_left( context[0], context[1] );
  refalrts::move_left( context[0], context[1] );
  refalrts::move_right( context[0], context[1] );
  // s.SuccessHandler#1/2 s.FailHandler#1/3 ( e.Set#1/4 ) ( e.Scanned#1/6 ) e.Text#1/0
  if( ! refalrts::svar_left( context[2], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[4] = 0;
  context[5] = 0;
  if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[6] = 0;
  context[7] = 0;
  if( ! refalrts::brackets_left( context[6], context[7], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Set#1 as range 4
  // closed e.Scanned#1 as range 6
  // closed e.Text#1 as range 0
  //0: e.Text#1
  //2: s.SuccessHandler#1
  //3: s.FailHandler#1
  //4: e.Set#1
  //6: e.Scanned#1

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_call( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[11] ) )
    return refalrts::cNoMemory;
  refalrts::push_stack( context[11] );
  refalrts::push_stack( context[8] );
  res = refalrts::splice_elem( res, context[11] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  refalrts::link_brackets( context[9], context[10] );
  res = refalrts::splice_elem( res, context[10] );
  res = refalrts::splice_evar( res, context[6], context[7] );
  res = refalrts::splice_elem( res, context[9] );
  res = refalrts::splice_stvar( res, context[3] );
  res = refalrts::splice_elem( res, context[8] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult HiLetters(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 4 elems
  refalrts::Iter context[4];
  refalrts::zeros( context, 4 );
#ifdef INTERPRET
  using refalrts::functions;
  using refalrts::idents;
  using refalrts::numbers;
  static const refalrts::StringItem strings[] = {
    {"ABCDEFGHIJKLMNOPQRSTUVWXYZ", 26}
  };
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    //
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icString, 0, 0, 2},
    {refalrts::icSpliceRange, 0, 0, 2},
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
  if( ! refalrts::alloc_chars( context[2], context[3], "ABCDEFGHIJKLMNOPQRSTUVWXYZ", 26 ) )
    return refalrts::cNoMemory;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult LoLetters(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 4 elems
  refalrts::Iter context[4];
  refalrts::zeros( context, 4 );
#ifdef INTERPRET
  using refalrts::functions;
  using refalrts::idents;
  using refalrts::numbers;
  static const refalrts::StringItem strings[] = {
    {"abcdefghijklmnopqrstuvwxyz", 26}
  };
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    //
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icString, 0, 0, 2},
    {refalrts::icSpliceRange, 0, 0, 2},
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
  if( ! refalrts::alloc_chars( context[2], context[3], "abcdefghijklmnopqrstuvwxyz", 26 ) )
    return refalrts::cNoMemory;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult Digits(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 4 elems
  refalrts::Iter context[4];
  refalrts::zeros( context, 4 );
#ifdef INTERPRET
  using refalrts::functions;
  using refalrts::idents;
  using refalrts::numbers;
  static const refalrts::StringItem strings[] = {
    {"0123456789", 10}
  };
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    //
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icString, 0, 0, 2},
    {refalrts::icSpliceRange, 0, 0, 2},
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
  if( ! refalrts::alloc_chars( context[2], context[3], "0123456789", 10 ) )
    return refalrts::cNoMemory;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult NameTailSet(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { Digits, "Digits" },
    { LoLetters, "LoLetters" },
    { HiLetters, "HiLetters" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  static const refalrts::StringItem strings[] = {
    {"-_", 2}
  };
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    //
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 2},
    {refalrts::icFunc, 0, 2, 3},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 4},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 5},
    {refalrts::icFunc, 0, 1, 6},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 7},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 8},
    {refalrts::icFunc, 0, 0, 9},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 10},
    {refalrts::icString, 0, 0, 11},
    {refalrts::icSpliceRange, 0, 0, 11},
    {refalrts::icPushStack, 0, 0, 10},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icPushStack, 0, 0, 7},
    {refalrts::icPushStack, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icPushStack, 0, 0, 4},
    {refalrts::icPushStack, 0, 0, 2},
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
  if( ! refalrts::alloc_name( context[3], HiLetters, "HiLetters" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[4] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[5] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[6], LoLetters, "LoLetters" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[9], Digits, "Digits" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[11], context[12], "-_", 2 ) )
    return refalrts::cNoMemory;
  res = refalrts::splice_evar( res, context[11], context[12] );
  refalrts::push_stack( context[10] );
  refalrts::push_stack( context[8] );
  res = refalrts::splice_elem( res, context[10] );
  res = refalrts::splice_elem( res, context[9] );
  res = refalrts::splice_elem( res, context[8] );
  refalrts::push_stack( context[7] );
  refalrts::push_stack( context[5] );
  res = refalrts::splice_elem( res, context[7] );
  res = refalrts::splice_elem( res, context[6] );
  res = refalrts::splice_elem( res, context[5] );
  refalrts::push_stack( context[4] );
  refalrts::push_stack( context[2] );
  res = refalrts::splice_elem( res, context[4] );
  res = refalrts::splice_elem( res, context[3] );
  res = refalrts::splice_elem( res, context[2] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult SetName(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { NameTailSet, "NameTailSet" },
    { SetNameFail, "SetNameFail" },
    { SetName, "SetName" },
    { NextInSet, "NextInSet" },
    { LoTokens, "LoTokens" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_TSetName<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +22, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Scanned#1/2 ) ':' e.Text#1/0
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icCharLeft, 0, static_cast<unsigned char>(':'), 0},
    // closed e.Scanned#1 as range 2
    // closed e.Text#1 as range 0
    //0: e.Text#1
    //2: e.Scanned#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 4},
    {refalrts::icIdent, 0, 0, 5},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 6},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 7},
    {refalrts::icFunc, 0, 4, 8},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 9},
    {refalrts::icPushStack, 0, 0, 9},
    {refalrts::icPushStack, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icLinkBrackets, 4, 6, 0},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Scanned#1/2 ) e.Text#1/0
    {refalrts::icBracketLeft, 0, 2, 0},
    // closed e.Scanned#1 as range 2
    // closed e.Text#1 as range 0
    //0: e.Text#1
    //2: e.Scanned#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 4},
    {refalrts::icFunc, 0, 3, 5},
    {refalrts::icFunc, 0, 2, 6},
    {refalrts::icFunc, 0, 1, 7},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 9},
    {refalrts::icFunc, 0, 0, 10},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 11},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 12},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 13},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 14},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 15},
    {refalrts::icPushStack, 0, 0, 15},
    {refalrts::icPushStack, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icLinkBrackets, 13, 14, 0},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icLinkBrackets, 8, 12, 0},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icPushStack, 0, 0, 11},
    {refalrts::icPushStack, 0, 0, 9},
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
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    // ( e.Scanned#1/2 ) ':' e.Text#1/0
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::char_left( ':', context[0], context[1] ) )
      continue;
    // closed e.Scanned#1 as range 2
    // closed e.Text#1 as range 0
    //0: e.Text#1
    //2: e.Scanned#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[4] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[5], & ident_TSetName<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[7] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[8], LoTokens, "LoTokens" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[9] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[9] );
    refalrts::push_stack( context[7] );
    res = refalrts::splice_elem( res, context[9] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    res = refalrts::splice_elem( res, context[8] );
    res = refalrts::splice_elem( res, context[7] );
    refalrts::link_brackets( context[4], context[6] );
    res = refalrts::splice_elem( res, context[6] );
    res = refalrts::splice_evar( res, context[2], context[3] );
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
  // ( e.Scanned#1/2 ) e.Text#1/0
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Scanned#1 as range 2
  // closed e.Text#1 as range 0
  //0: e.Text#1
  //2: e.Scanned#1

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_call( context[4] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[5], NextInSet, "NextInSet" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[6], SetName, "SetName" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[7], SetNameFail, "SetNameFail" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[10], NameTailSet, "NameTailSet" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[11] ) )
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
  refalrts::push_stack( context[4] );
  res = refalrts::splice_elem( res, context[15] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  refalrts::link_brackets( context[13], context[14] );
  res = refalrts::splice_elem( res, context[14] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_elem( res, context[13] );
  refalrts::link_brackets( context[8], context[12] );
  res = refalrts::splice_elem( res, context[12] );
  refalrts::push_stack( context[11] );
  refalrts::push_stack( context[9] );
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

static refalrts::FnResult SetNameFail(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
#ifdef INTERPRET
  using refalrts::functions;
  static const refalrts::RefalIdentifier idents[] = {
    & ident_TError<int>::name
  };
  using refalrts::numbers;
  static const refalrts::StringItem strings[] = {
    {"expected end of set name, got ", 30},
    {"expected end of set name, got EOF", 33}
  };
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +14, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Scanned#1/2 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icEmpty, 0, 0, 0},
    // closed e.Scanned#1 as range 2
    //2: e.Scanned#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 4},
    {refalrts::icIdent, 0, 0, 5},
    {refalrts::icString, 0, 1, 6},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 8},
    {refalrts::icLinkBrackets, 4, 8, 0},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceRange, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Scanned#1/2 ) s.Next#1/4 e.Text#1/0
    {refalrts::icBracketLeft, 0, 2, 0},
    // closed e.Scanned#1 as range 2
    {refalrts::icsVarLeft, 0, 4, 0},
    // closed e.Text#1 as range 0
    //0: e.Text#1
    //2: e.Scanned#1
    //4: s.Next#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 5},
    {refalrts::icIdent, 0, 0, 6},
    {refalrts::icString, 0, 0, 7},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 9},
    {refalrts::icLinkBrackets, 5, 9, 0},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceSTVar, 0, 0, 4},
    {refalrts::icSpliceRange, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 5},
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
    // ( e.Scanned#1/2 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    // closed e.Scanned#1 as range 2
    //2: e.Scanned#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[4] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[5], & ident_TError<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[6], context[7], "expected end of set name, got EOF", 33 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[8] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[4], context[8] );
    res = refalrts::splice_elem( res, context[8] );
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
  // ( e.Scanned#1/2 ) s.Next#1/4 e.Text#1/0
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Scanned#1 as range 2
  if( ! refalrts::svar_left( context[4], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Text#1 as range 0
  //0: e.Text#1
  //2: e.Scanned#1
  //4: s.Next#1

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_bracket( context[5] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[6], & ident_TError<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[7], context[8], "expected end of set name, got ", 30 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[9] ) )
    return refalrts::cNoMemory;
  refalrts::link_brackets( context[5], context[9] );
  res = refalrts::splice_elem( res, context[9] );
  res = refalrts::splice_stvar( res, context[4] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_elem( res, context[6] );
  res = refalrts::splice_elem( res, context[5] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult FlushName(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { HiLetters, "HiLetters" },
    { FlushNameFail, "FlushNameFail" },
    { FlushNameTail, "FlushNameTail" },
    { NextInSet, "NextInSet" },
    { NameTailSet, "NameTailSet" },
    { ErrorFlushFail, "ErrorFlushFail" },
    { ErrorFlush, "ErrorFlush" },
    { LoTokens, "LoTokens" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_TFlush<int>::name
  };
  using refalrts::numbers;
  static const refalrts::StringItem strings[] = {
    {" \t,.:;(){}[]*&", 14}
  };
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +20, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // '-' e.Text#1/0
    {refalrts::icCharLeft, 0, static_cast<unsigned char>('-'), 0},
    // closed e.Text#1 as range 0
    //0: e.Text#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 2},
    {refalrts::icIdent, 0, 0, 3},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 4},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 5},
    {refalrts::icFunc, 0, 7, 6},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 7},
    {refalrts::icPushStack, 0, 0, 7},
    {refalrts::icPushStack, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icLinkBrackets, 2, 4, 0},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 3},
    {refalrts::icSpliceElem, 0, 0, 2},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +37, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // '\"' e.Text#1/0
    {refalrts::icCharLeft, 0, static_cast<unsigned char>('\"'), 0},
    // closed e.Text#1 as range 0
    //0: e.Text#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 2},
    {refalrts::icFunc, 0, 3, 3},
    {refalrts::icFunc, 0, 6, 4},
    {refalrts::icFunc, 0, 5, 5},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 7},
    {refalrts::icFunc, 0, 4, 8},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 9},
    {refalrts::icString, 0, 0, 10},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 12},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 13},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 14},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 15},
    {refalrts::icPushStack, 0, 0, 15},
    {refalrts::icPushStack, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icLinkBrackets, 13, 14, 0},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icLinkBrackets, 6, 12, 0},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceRange, 0, 0, 10},
    {refalrts::icPushStack, 0, 0, 9},
    {refalrts::icPushStack, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 3},
    {refalrts::icSpliceElem, 0, 0, 2},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +37, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // '#' e.Text#1/0
    {refalrts::icCharLeft, 0, static_cast<unsigned char>('#'), 0},
    // closed e.Text#1 as range 0
    //0: e.Text#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 2},
    {refalrts::icFunc, 0, 3, 3},
    {refalrts::icFunc, 0, 2, 4},
    {refalrts::icFunc, 0, 1, 5},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 7},
    {refalrts::icFunc, 0, 0, 8},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 9},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 10},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 11},
    {refalrts::icChar, 0, '#', 12},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 13},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 14},
    {refalrts::icPushStack, 0, 0, 14},
    {refalrts::icPushStack, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icLinkBrackets, 11, 13, 0},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icLinkBrackets, 6, 10, 0},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icPushStack, 0, 0, 9},
    {refalrts::icPushStack, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 3},
    {refalrts::icSpliceElem, 0, 0, 2},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // e.Text#1/0
    // closed e.Text#1 as range 0
    //0: e.Text#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 2},
    {refalrts::icFunc, 0, 3, 3},
    {refalrts::icFunc, 0, 2, 4},
    {refalrts::icFunc, 0, 1, 5},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 7},
    {refalrts::icFunc, 0, 0, 8},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 9},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 10},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 11},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 12},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 13},
    {refalrts::icPushStack, 0, 0, 13},
    {refalrts::icPushStack, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icLinkBrackets, 11, 12, 0},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icLinkBrackets, 6, 10, 0},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icPushStack, 0, 0, 9},
    {refalrts::icPushStack, 0, 0, 7},
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
    // '-' e.Text#1/0
    if( ! refalrts::char_left( '-', context[0], context[1] ) )
      continue;
    // closed e.Text#1 as range 0
    //0: e.Text#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[2] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[3], & ident_TFlush<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[4] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[5] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[6], LoTokens, "LoTokens" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[7] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[7] );
    refalrts::push_stack( context[5] );
    res = refalrts::splice_elem( res, context[7] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    res = refalrts::splice_elem( res, context[6] );
    res = refalrts::splice_elem( res, context[5] );
    refalrts::link_brackets( context[2], context[4] );
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
    // '\"' e.Text#1/0
    if( ! refalrts::char_left( '\"', context[0], context[1] ) )
      continue;
    // closed e.Text#1 as range 0
    //0: e.Text#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[2] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[3], NextInSet, "NextInSet" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[4], ErrorFlush, "ErrorFlush" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[5], ErrorFlushFail, "ErrorFlushFail" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[7] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[8], NameTailSet, "NameTailSet" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[9] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[10], context[11], " \t,.:;(){}[]*&", 14 ) )
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
    refalrts::push_stack( context[2] );
    res = refalrts::splice_elem( res, context[15] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    refalrts::link_brackets( context[13], context[14] );
    res = refalrts::splice_elem( res, context[14] );
    res = refalrts::splice_elem( res, context[13] );
    refalrts::link_brackets( context[6], context[12] );
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_evar( res, context[10], context[11] );
    refalrts::push_stack( context[9] );
    refalrts::push_stack( context[7] );
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
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    // '#' e.Text#1/0
    if( ! refalrts::char_left( '#', context[0], context[1] ) )
      continue;
    // closed e.Text#1 as range 0
    //0: e.Text#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[2] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[3], NextInSet, "NextInSet" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[4], FlushNameTail, "FlushNameTail" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[5], FlushNameFail, "FlushNameFail" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[7] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[8], HiLetters, "HiLetters" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[9] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[12], '#' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[14] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[14] );
    refalrts::push_stack( context[2] );
    res = refalrts::splice_elem( res, context[14] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    refalrts::link_brackets( context[11], context[13] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_elem( res, context[11] );
    refalrts::link_brackets( context[6], context[10] );
    res = refalrts::splice_elem( res, context[10] );
    refalrts::push_stack( context[9] );
    refalrts::push_stack( context[7] );
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
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  refalrts::move_left( context[0], context[1] );
  refalrts::move_left( context[0], context[1] );
  refalrts::move_right( context[0], context[1] );
  // e.Text#1/0
  // closed e.Text#1 as range 0
  //0: e.Text#1

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_call( context[2] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[3], NextInSet, "NextInSet" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[4], FlushNameTail, "FlushNameTail" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[5], FlushNameFail, "FlushNameFail" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[8], HiLetters, "HiLetters" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[13] ) )
    return refalrts::cNoMemory;
  refalrts::push_stack( context[13] );
  refalrts::push_stack( context[2] );
  res = refalrts::splice_elem( res, context[13] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  refalrts::link_brackets( context[11], context[12] );
  res = refalrts::splice_elem( res, context[12] );
  res = refalrts::splice_elem( res, context[11] );
  refalrts::link_brackets( context[6], context[10] );
  res = refalrts::splice_elem( res, context[10] );
  refalrts::push_stack( context[9] );
  refalrts::push_stack( context[7] );
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

static refalrts::FnResult ErrorFlush(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { NameTailSet, "NameTailSet" },
    { ErrorFlushFail, "ErrorFlushFail" },
    { ErrorFlush, "ErrorFlush" },
    { NextInSet, "NextInSet" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  static const refalrts::StringItem strings[] = {
    {" \t,.:;(){}[]*&", 14}
  };
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Scanned#1/2 ) e.Tail#1/0
    {refalrts::icBracketLeft, 0, 2, 0},
    // closed e.Scanned#1 as range 2
    // closed e.Tail#1 as range 0
    //0: e.Tail#1
    //2: e.Scanned#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 4},
    {refalrts::icFunc, 0, 3, 5},
    {refalrts::icFunc, 0, 2, 6},
    {refalrts::icFunc, 0, 1, 7},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 9},
    {refalrts::icFunc, 0, 0, 10},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 11},
    {refalrts::icString, 0, 0, 12},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 14},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 15},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 16},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 17},
    {refalrts::icPushStack, 0, 0, 17},
    {refalrts::icPushStack, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icLinkBrackets, 15, 16, 0},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icLinkBrackets, 8, 14, 0},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceRange, 0, 0, 12},
    {refalrts::icPushStack, 0, 0, 11},
    {refalrts::icPushStack, 0, 0, 9},
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
  // ( e.Scanned#1/2 ) e.Tail#1/0
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Scanned#1 as range 2
  // closed e.Tail#1 as range 0
  //0: e.Tail#1
  //2: e.Scanned#1

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_call( context[4] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[5], NextInSet, "NextInSet" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[6], ErrorFlush, "ErrorFlush" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[7], ErrorFlushFail, "ErrorFlushFail" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[10], NameTailSet, "NameTailSet" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[12], context[13], " \t,.:;(){}[]*&", 14 ) )
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
  refalrts::push_stack( context[4] );
  res = refalrts::splice_elem( res, context[17] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  refalrts::link_brackets( context[15], context[16] );
  res = refalrts::splice_elem( res, context[16] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_elem( res, context[15] );
  refalrts::link_brackets( context[8], context[14] );
  res = refalrts::splice_elem( res, context[14] );
  res = refalrts::splice_evar( res, context[12], context[13] );
  refalrts::push_stack( context[11] );
  refalrts::push_stack( context[9] );
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

static refalrts::FnResult ErrorFlushFail(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { LoTokens, "LoTokens" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_TError<int>::name,
    & ident_TErrorFlush<int>::name
  };
  using refalrts::numbers;
  static const refalrts::StringItem strings[] = {
    {"Expected error text or \"", 24}
  };
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +22, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Scanned#1/2 ) '\"' e.Text#1/0
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icCharLeft, 0, static_cast<unsigned char>('\"'), 0},
    // closed e.Scanned#1 as range 2
    // closed e.Text#1 as range 0
    //0: e.Text#1
    //2: e.Scanned#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 4},
    {refalrts::icIdent, 0, 1, 5},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 6},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 7},
    {refalrts::icFunc, 0, 0, 8},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 9},
    {refalrts::icPushStack, 0, 0, 9},
    {refalrts::icPushStack, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icLinkBrackets, 4, 6, 0},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Scanned#1/2 ) s.Other#1/4 e.Text#1/0
    {refalrts::icBracketLeft, 0, 2, 0},
    // closed e.Scanned#1 as range 2
    {refalrts::icsVarLeft, 0, 4, 0},
    // closed e.Text#1 as range 0
    //0: e.Text#1
    //2: e.Scanned#1
    //4: s.Other#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 5},
    {refalrts::icIdent, 0, 0, 6},
    {refalrts::icString, 0, 0, 7},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 9},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 10},
    {refalrts::icFunc, 0, 0, 11},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 12},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icPushStack, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icLinkBrackets, 5, 9, 0},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceRange, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 5},
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
    // ( e.Scanned#1/2 ) '\"' e.Text#1/0
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::char_left( '\"', context[0], context[1] ) )
      continue;
    // closed e.Scanned#1 as range 2
    // closed e.Text#1 as range 0
    //0: e.Text#1
    //2: e.Scanned#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[4] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[5], & ident_TErrorFlush<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[7] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[8], LoTokens, "LoTokens" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[9] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[9] );
    refalrts::push_stack( context[7] );
    res = refalrts::splice_elem( res, context[9] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    res = refalrts::splice_elem( res, context[8] );
    res = refalrts::splice_elem( res, context[7] );
    refalrts::link_brackets( context[4], context[6] );
    res = refalrts::splice_elem( res, context[6] );
    res = refalrts::splice_evar( res, context[2], context[3] );
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
  // ( e.Scanned#1/2 ) s.Other#1/4 e.Text#1/0
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Scanned#1 as range 2
  if( ! refalrts::svar_left( context[4], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Text#1 as range 0
  //0: e.Text#1
  //2: e.Scanned#1
  //4: s.Other#1

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_bracket( context[5] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[6], & ident_TError<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[7], context[8], "Expected error text or \"", 24 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[11], LoTokens, "LoTokens" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[12] ) )
    return refalrts::cNoMemory;
  refalrts::push_stack( context[12] );
  refalrts::push_stack( context[10] );
  res = refalrts::splice_elem( res, context[12] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_elem( res, context[11] );
  res = refalrts::splice_elem( res, context[10] );
  refalrts::link_brackets( context[5], context[9] );
  res = refalrts::splice_elem( res, context[9] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_elem( res, context[6] );
  res = refalrts::splice_elem( res, context[5] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult FlushNameFail(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
#ifdef INTERPRET
  using refalrts::functions;
  static const refalrts::RefalIdentifier idents[] = {
    & ident_TError<int>::name
  };
  using refalrts::numbers;
  static const refalrts::StringItem strings[] = {
    {"expected flush name", 19}
  };
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    // ( ) e.Text#1/0
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icEmpty, 0, 0, 2},
    // closed e.Text#1 as range 0
    //0: e.Text#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 4},
    {refalrts::icIdent, 0, 0, 5},
    {refalrts::icString, 0, 0, 6},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 8},
    {refalrts::icLinkBrackets, 4, 8, 0},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceRange, 0, 0, 6},
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
  // ( ) e.Text#1/0
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Text#1 as range 0
  //0: e.Text#1

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_bracket( context[4] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[5], & ident_TError<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[6], context[7], "expected flush name", 19 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[8] ) )
    return refalrts::cNoMemory;
  refalrts::link_brackets( context[4], context[8] );
  res = refalrts::splice_elem( res, context[8] );
  res = refalrts::splice_evar( res, context[6], context[7] );
  res = refalrts::splice_elem( res, context[5] );
  res = refalrts::splice_elem( res, context[4] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult EndFlushName(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { LoTokens, "LoTokens" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_TNamedFlush<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Scanned#1/2 ) e.Text#1/0
    {refalrts::icBracketLeft, 0, 2, 0},
    // closed e.Scanned#1 as range 2
    // closed e.Text#1 as range 0
    //0: e.Text#1
    //2: e.Scanned#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 4},
    {refalrts::icIdent, 0, 0, 5},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 6},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 7},
    {refalrts::icFunc, 0, 0, 8},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 9},
    {refalrts::icPushStack, 0, 0, 9},
    {refalrts::icPushStack, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 7},
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
  context[0] = arg_begin;
  context[1] = arg_end;
  refalrts::move_left( context[0], context[1] );
  refalrts::move_left( context[0], context[1] );
  refalrts::move_right( context[0], context[1] );
  // ( e.Scanned#1/2 ) e.Text#1/0
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Scanned#1 as range 2
  // closed e.Text#1 as range 0
  //0: e.Text#1
  //2: e.Scanned#1

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_bracket( context[4] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[5], & ident_TNamedFlush<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[8], LoTokens, "LoTokens" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[9] ) )
    return refalrts::cNoMemory;
  refalrts::push_stack( context[9] );
  refalrts::push_stack( context[7] );
  res = refalrts::splice_elem( res, context[9] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_elem( res, context[8] );
  res = refalrts::splice_elem( res, context[7] );
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

static refalrts::FnResult FlushNameTail(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { NameTailSet, "NameTailSet" },
    { EndFlushName, "EndFlushName" },
    { FlushNameTail, "FlushNameTail" },
    { NextInSet, "NextInSet" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Scanned#1/2 ) e.Tail#1/0
    {refalrts::icBracketLeft, 0, 2, 0},
    // closed e.Scanned#1 as range 2
    // closed e.Tail#1 as range 0
    //0: e.Tail#1
    //2: e.Scanned#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 4},
    {refalrts::icFunc, 0, 3, 5},
    {refalrts::icFunc, 0, 2, 6},
    {refalrts::icFunc, 0, 1, 7},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 9},
    {refalrts::icFunc, 0, 0, 10},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 11},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 12},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 13},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 14},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 15},
    {refalrts::icPushStack, 0, 0, 15},
    {refalrts::icPushStack, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icLinkBrackets, 13, 14, 0},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icLinkBrackets, 8, 12, 0},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icPushStack, 0, 0, 11},
    {refalrts::icPushStack, 0, 0, 9},
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
  // ( e.Scanned#1/2 ) e.Tail#1/0
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Scanned#1 as range 2
  // closed e.Tail#1 as range 0
  //0: e.Tail#1
  //2: e.Scanned#1

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_call( context[4] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[5], NextInSet, "NextInSet" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[6], FlushNameTail, "FlushNameTail" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[7], EndFlushName, "EndFlushName" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[10], NameTailSet, "NameTailSet" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[11] ) )
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
  refalrts::push_stack( context[4] );
  res = refalrts::splice_elem( res, context[15] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  refalrts::link_brackets( context[13], context[14] );
  res = refalrts::splice_elem( res, context[14] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_elem( res, context[13] );
  refalrts::link_brackets( context[8], context[12] );
  res = refalrts::splice_elem( res, context[12] );
  refalrts::push_stack( context[11] );
  refalrts::push_stack( context[9] );
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

static refalrts::FnResult Literal(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { Literal, "Literal" },
    { LoTokens, "LoTokens" },
    { Escape, "Escape" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_TError<int>::name,
    & ident_TLiteral<int>::name
  };
  using refalrts::numbers;
  static const refalrts::StringItem strings[] = {
    {"Unexpected end of file at literal", 33},
    {"Unexpected end of line at literal", 33}
  };
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +20, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Scanned#1/2 ) '\\' e.Text#1/0
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icCharLeft, 0, static_cast<unsigned char>('\\'), 0},
    // closed e.Scanned#1 as range 2
    // closed e.Text#1 as range 0
    //0: e.Text#1
    //2: e.Scanned#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 4},
    {refalrts::icFunc, 0, 2, 5},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 7},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 8},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icPushStack, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icLinkBrackets, 6, 7, 0},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +23, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Scanned#1/2 ) '\'\'' e.Text#1/0
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icCharLeft, 0, static_cast<unsigned char>('\''), 0},
    {refalrts::icCharLeft, 0, static_cast<unsigned char>('\''), 0},
    // closed e.Scanned#1 as range 2
    // closed e.Text#1 as range 0
    //0: e.Text#1
    //2: e.Scanned#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 4},
    {refalrts::icFunc, 0, 0, 5},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icChar, 0, '\'', 7},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 8},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 9},
    {refalrts::icPushStack, 0, 0, 9},
    {refalrts::icPushStack, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icLinkBrackets, 6, 8, 0},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +22, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Scanned#1/2 ) '\'' e.Text#1/0
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icCharLeft, 0, static_cast<unsigned char>('\''), 0},
    // closed e.Scanned#1 as range 2
    // closed e.Text#1 as range 0
    //0: e.Text#1
    //2: e.Scanned#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 4},
    {refalrts::icIdent, 0, 1, 5},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 6},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 7},
    {refalrts::icFunc, 0, 1, 8},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 9},
    {refalrts::icPushStack, 0, 0, 9},
    {refalrts::icPushStack, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icLinkBrackets, 4, 6, 0},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +23, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Scanned#1/2 ) '\n' e.Text#1/0
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icCharLeft, 0, static_cast<unsigned char>('\n'), 0},
    // closed e.Scanned#1 as range 2
    // closed e.Text#1 as range 0
    //0: e.Text#1
    //2: e.Scanned#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 4},
    {refalrts::icIdent, 0, 0, 5},
    {refalrts::icString, 0, 1, 6},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 8},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 9},
    {refalrts::icFunc, 0, 1, 10},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 11},
    {refalrts::icPushStack, 0, 0, 11},
    {refalrts::icPushStack, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icLinkBrackets, 4, 8, 0},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceRange, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +14, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Scanned#1/2 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icEmpty, 0, 0, 0},
    // closed e.Scanned#1 as range 2
    //2: e.Scanned#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 4},
    {refalrts::icIdent, 0, 0, 5},
    {refalrts::icString, 0, 0, 6},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 8},
    {refalrts::icLinkBrackets, 4, 8, 0},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceRange, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Scanned#1/2 ) s.Other#1/4 e.Text#1/0
    {refalrts::icBracketLeft, 0, 2, 0},
    // closed e.Scanned#1 as range 2
    {refalrts::icsVarLeft, 0, 4, 0},
    // closed e.Text#1 as range 0
    //0: e.Text#1
    //2: e.Scanned#1
    //4: s.Other#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 5},
    {refalrts::icFunc, 0, 0, 6},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 7},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 8},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 9},
    {refalrts::icPushStack, 0, 0, 9},
    {refalrts::icPushStack, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceSTVar, 0, 0, 4},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 6},
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
    // ( e.Scanned#1/2 ) '\\' e.Text#1/0
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::char_left( '\\', context[0], context[1] ) )
      continue;
    // closed e.Scanned#1 as range 2
    // closed e.Text#1 as range 0
    //0: e.Text#1
    //2: e.Scanned#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[4] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[5], Escape, "Escape" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[7] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[8] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[8] );
    refalrts::push_stack( context[4] );
    res = refalrts::splice_elem( res, context[8] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    refalrts::link_brackets( context[6], context[7] );
    res = refalrts::splice_elem( res, context[7] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_elem( res, context[6] );
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
    // ( e.Scanned#1/2 ) '\'\'' e.Text#1/0
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::char_left( '\'', context[0], context[1] ) )
      continue;
    if( ! refalrts::char_left( '\'', context[0], context[1] ) )
      continue;
    // closed e.Scanned#1 as range 2
    // closed e.Text#1 as range 0
    //0: e.Text#1
    //2: e.Scanned#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[4] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[5], Literal, "Literal" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[7], '\'' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[9] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[9] );
    refalrts::push_stack( context[4] );
    res = refalrts::splice_elem( res, context[9] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    refalrts::link_brackets( context[6], context[8] );
    res = refalrts::splice_elem( res, context[8] );
    res = refalrts::splice_elem( res, context[7] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_elem( res, context[6] );
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
    // ( e.Scanned#1/2 ) '\'' e.Text#1/0
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::char_left( '\'', context[0], context[1] ) )
      continue;
    // closed e.Scanned#1 as range 2
    // closed e.Text#1 as range 0
    //0: e.Text#1
    //2: e.Scanned#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[4] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[5], & ident_TLiteral<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[7] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[8], LoTokens, "LoTokens" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[9] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[9] );
    refalrts::push_stack( context[7] );
    res = refalrts::splice_elem( res, context[9] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    res = refalrts::splice_elem( res, context[8] );
    res = refalrts::splice_elem( res, context[7] );
    refalrts::link_brackets( context[4], context[6] );
    res = refalrts::splice_elem( res, context[6] );
    res = refalrts::splice_evar( res, context[2], context[3] );
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
    // ( e.Scanned#1/2 ) '\n' e.Text#1/0
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::char_left( '\n', context[0], context[1] ) )
      continue;
    // closed e.Scanned#1 as range 2
    // closed e.Text#1 as range 0
    //0: e.Text#1
    //2: e.Scanned#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[4] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[5], & ident_TError<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[6], context[7], "Unexpected end of line at literal", 33 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[9] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[10], LoTokens, "LoTokens" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[11] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[11] );
    refalrts::push_stack( context[9] );
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    res = refalrts::splice_elem( res, context[10] );
    res = refalrts::splice_elem( res, context[9] );
    refalrts::link_brackets( context[4], context[8] );
    res = refalrts::splice_elem( res, context[8] );
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
    // ( e.Scanned#1/2 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    // closed e.Scanned#1 as range 2
    //2: e.Scanned#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[4] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[5], & ident_TError<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[6], context[7], "Unexpected end of file at literal", 33 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[8] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[4], context[8] );
    res = refalrts::splice_elem( res, context[8] );
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
  // ( e.Scanned#1/2 ) s.Other#1/4 e.Text#1/0
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Scanned#1 as range 2
  if( ! refalrts::svar_left( context[4], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Text#1 as range 0
  //0: e.Text#1
  //2: e.Scanned#1
  //4: s.Other#1

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_call( context[5] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[6], Literal, "Literal" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[9] ) )
    return refalrts::cNoMemory;
  refalrts::push_stack( context[9] );
  refalrts::push_stack( context[5] );
  res = refalrts::splice_elem( res, context[9] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  refalrts::link_brackets( context[7], context[8] );
  res = refalrts::splice_elem( res, context[8] );
  res = refalrts::splice_stvar( res, context[4] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_elem( res, context[7] );
  res = refalrts::splice_elem( res, context[6] );
  res = refalrts::splice_elem( res, context[5] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult Escape(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { LoTokens, "LoTokens" },
    { Literal, "Literal" },
    { Literal_DecCode, "Literal_DecCode" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_TError<int>::name
  };
  using refalrts::numbers;
  static const refalrts::StringItem strings[] = {
    {"Unexpected escaped character", 28}
  };
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +22, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Scanned#1/2 ) 'n' e.Text#1/0
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icCharLeft, 0, static_cast<unsigned char>('n'), 0},
    // closed e.Scanned#1 as range 2
    // closed e.Text#1 as range 0
    //0: e.Text#1
    //2: e.Scanned#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 4},
    {refalrts::icFunc, 0, 1, 5},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icChar, 0, '\n', 7},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 8},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 9},
    {refalrts::icPushStack, 0, 0, 9},
    {refalrts::icPushStack, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icLinkBrackets, 6, 8, 0},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +22, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Scanned#1/2 ) 'r' e.Text#1/0
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icCharLeft, 0, static_cast<unsigned char>('r'), 0},
    // closed e.Scanned#1 as range 2
    // closed e.Text#1 as range 0
    //0: e.Text#1
    //2: e.Scanned#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 4},
    {refalrts::icFunc, 0, 1, 5},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icChar, 0, '\r', 7},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 8},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 9},
    {refalrts::icPushStack, 0, 0, 9},
    {refalrts::icPushStack, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icLinkBrackets, 6, 8, 0},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +22, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Scanned#1/2 ) 't' e.Text#1/0
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icCharLeft, 0, static_cast<unsigned char>('t'), 0},
    // closed e.Scanned#1 as range 2
    // closed e.Text#1 as range 0
    //0: e.Text#1
    //2: e.Scanned#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 4},
    {refalrts::icFunc, 0, 1, 5},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icChar, 0, '\t', 7},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 8},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 9},
    {refalrts::icPushStack, 0, 0, 9},
    {refalrts::icPushStack, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icLinkBrackets, 6, 8, 0},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +22, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Scanned#1/2 ) '\\' e.Text#1/0
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icCharLeft, 0, static_cast<unsigned char>('\\'), 0},
    // closed e.Scanned#1 as range 2
    // closed e.Text#1 as range 0
    //0: e.Text#1
    //2: e.Scanned#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 4},
    {refalrts::icFunc, 0, 1, 5},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icChar, 0, '\\', 7},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 8},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 9},
    {refalrts::icPushStack, 0, 0, 9},
    {refalrts::icPushStack, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icLinkBrackets, 6, 8, 0},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +20, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Scanned#1/2 ) 'd' e.Text#1/0
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icCharLeft, 0, static_cast<unsigned char>('d'), 0},
    // closed e.Scanned#1 as range 2
    // closed e.Text#1 as range 0
    //0: e.Text#1
    //2: e.Scanned#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 4},
    {refalrts::icFunc, 0, 2, 5},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 7},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 8},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icPushStack, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icLinkBrackets, 6, 7, 0},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +22, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Scanned#1/2 ) '\'' e.Text#1/0
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icCharLeft, 0, static_cast<unsigned char>('\''), 0},
    // closed e.Scanned#1 as range 2
    // closed e.Text#1 as range 0
    //0: e.Text#1
    //2: e.Scanned#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 4},
    {refalrts::icFunc, 0, 1, 5},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icChar, 0, '\'', 7},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 8},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 9},
    {refalrts::icPushStack, 0, 0, 9},
    {refalrts::icPushStack, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icLinkBrackets, 6, 8, 0},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Scanned#1/2 ) s.Other#1/4 e.Text#1/0
    {refalrts::icBracketLeft, 0, 2, 0},
    // closed e.Scanned#1 as range 2
    {refalrts::icsVarLeft, 0, 4, 0},
    // closed e.Text#1 as range 0
    //0: e.Text#1
    //2: e.Scanned#1
    //4: s.Other#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 5},
    {refalrts::icIdent, 0, 0, 6},
    {refalrts::icString, 0, 0, 7},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 9},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 10},
    {refalrts::icFunc, 0, 0, 11},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 12},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icPushStack, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icLinkBrackets, 5, 9, 0},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceRange, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 5},
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
    // ( e.Scanned#1/2 ) 'n' e.Text#1/0
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::char_left( 'n', context[0], context[1] ) )
      continue;
    // closed e.Scanned#1 as range 2
    // closed e.Text#1 as range 0
    //0: e.Text#1
    //2: e.Scanned#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[4] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[5], Literal, "Literal" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[7], '\n' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[9] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[9] );
    refalrts::push_stack( context[4] );
    res = refalrts::splice_elem( res, context[9] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    refalrts::link_brackets( context[6], context[8] );
    res = refalrts::splice_elem( res, context[8] );
    res = refalrts::splice_elem( res, context[7] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_elem( res, context[6] );
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
    // ( e.Scanned#1/2 ) 'r' e.Text#1/0
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::char_left( 'r', context[0], context[1] ) )
      continue;
    // closed e.Scanned#1 as range 2
    // closed e.Text#1 as range 0
    //0: e.Text#1
    //2: e.Scanned#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[4] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[5], Literal, "Literal" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[7], '\r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[9] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[9] );
    refalrts::push_stack( context[4] );
    res = refalrts::splice_elem( res, context[9] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    refalrts::link_brackets( context[6], context[8] );
    res = refalrts::splice_elem( res, context[8] );
    res = refalrts::splice_elem( res, context[7] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_elem( res, context[6] );
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
    // ( e.Scanned#1/2 ) 't' e.Text#1/0
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::char_left( 't', context[0], context[1] ) )
      continue;
    // closed e.Scanned#1 as range 2
    // closed e.Text#1 as range 0
    //0: e.Text#1
    //2: e.Scanned#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[4] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[5], Literal, "Literal" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[7], '\t' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[9] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[9] );
    refalrts::push_stack( context[4] );
    res = refalrts::splice_elem( res, context[9] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    refalrts::link_brackets( context[6], context[8] );
    res = refalrts::splice_elem( res, context[8] );
    res = refalrts::splice_elem( res, context[7] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_elem( res, context[6] );
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
    // ( e.Scanned#1/2 ) '\\' e.Text#1/0
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::char_left( '\\', context[0], context[1] ) )
      continue;
    // closed e.Scanned#1 as range 2
    // closed e.Text#1 as range 0
    //0: e.Text#1
    //2: e.Scanned#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[4] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[5], Literal, "Literal" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[7], '\\' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[9] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[9] );
    refalrts::push_stack( context[4] );
    res = refalrts::splice_elem( res, context[9] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    refalrts::link_brackets( context[6], context[8] );
    res = refalrts::splice_elem( res, context[8] );
    res = refalrts::splice_elem( res, context[7] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_elem( res, context[6] );
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
    // ( e.Scanned#1/2 ) 'd' e.Text#1/0
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::char_left( 'd', context[0], context[1] ) )
      continue;
    // closed e.Scanned#1 as range 2
    // closed e.Text#1 as range 0
    //0: e.Text#1
    //2: e.Scanned#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[4] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[5], Literal_DecCode, "Literal_DecCode" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[7] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[8] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[8] );
    refalrts::push_stack( context[4] );
    res = refalrts::splice_elem( res, context[8] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    refalrts::link_brackets( context[6], context[7] );
    res = refalrts::splice_elem( res, context[7] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_elem( res, context[6] );
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
    // ( e.Scanned#1/2 ) '\'' e.Text#1/0
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::char_left( '\'', context[0], context[1] ) )
      continue;
    // closed e.Scanned#1 as range 2
    // closed e.Text#1 as range 0
    //0: e.Text#1
    //2: e.Scanned#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[4] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[5], Literal, "Literal" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[7], '\'' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[9] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[9] );
    refalrts::push_stack( context[4] );
    res = refalrts::splice_elem( res, context[9] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    refalrts::link_brackets( context[6], context[8] );
    res = refalrts::splice_elem( res, context[8] );
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
  // ( e.Scanned#1/2 ) s.Other#1/4 e.Text#1/0
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Scanned#1 as range 2
  if( ! refalrts::svar_left( context[4], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Text#1 as range 0
  //0: e.Text#1
  //2: e.Scanned#1
  //4: s.Other#1

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_bracket( context[5] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[6], & ident_TError<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[7], context[8], "Unexpected escaped character", 28 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[11], LoTokens, "LoTokens" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[12] ) )
    return refalrts::cNoMemory;
  refalrts::push_stack( context[12] );
  refalrts::push_stack( context[10] );
  res = refalrts::splice_elem( res, context[12] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_elem( res, context[11] );
  res = refalrts::splice_elem( res, context[10] );
  refalrts::link_brackets( context[5], context[9] );
  res = refalrts::splice_elem( res, context[9] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_elem( res, context[6] );
  res = refalrts::splice_elem( res, context[5] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult lambda_Literal_DecCode_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { LoTokens, "LoTokens" },
    { Chr, "Chr" },
    { Literal, "Literal" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_TError<int>::name,
    & ident_Fails<int>::name,
    & ident_Success<int>::name
  };
  using refalrts::numbers;
  static const refalrts::StringItem strings[] = {
    {"Expected digits", 15}
  };
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +30, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Scanned#1/2 ) # Success s.Number#2/4 e.Tail#2/0
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icIdentLeft, 0, 2, 0},
    // closed e.Scanned#1 as range 2
    {refalrts::icsVarLeft, 0, 4, 0},
    // closed e.Tail#2 as range 0
    //0: e.Tail#2
    //2: e.Scanned#1
    //4: s.Number#2
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 5},
    {refalrts::icFunc, 0, 2, 6},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 7},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 8},
    {refalrts::icFunc, 0, 1, 9},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 10},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 11},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 12},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icPushStack, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icLinkBrackets, 7, 11, 0},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icPushStack, 0, 0, 10},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceSTVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Scanned#1/2 ) # Fails e.Tail#2/0
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icIdentLeft, 0, 1, 0},
    // closed e.Scanned#1 as range 2
    // closed e.Tail#2 as range 0
    //0: e.Tail#2
    //2: e.Scanned#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 4},
    {refalrts::icIdent, 0, 0, 5},
    {refalrts::icString, 0, 0, 6},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 8},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 9},
    {refalrts::icFunc, 0, 0, 10},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 11},
    {refalrts::icPushStack, 0, 0, 11},
    {refalrts::icPushStack, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icLinkBrackets, 4, 8, 0},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceRange, 0, 0, 6},
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
    // ( e.Scanned#1/2 ) # Success s.Number#2/4 e.Tail#2/0
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_Success<int>::name, context[0], context[1] ) )
      continue;
    // closed e.Scanned#1 as range 2
    if( ! refalrts::svar_left( context[4], context[0], context[1] ) )
      continue;
    // closed e.Tail#2 as range 0
    //0: e.Tail#2
    //2: e.Scanned#1
    //4: s.Number#2

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[5] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[6], Literal, "Literal" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[7] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[9], Chr, "Chr" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[12] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[12] );
    refalrts::push_stack( context[5] );
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    refalrts::link_brackets( context[7], context[11] );
    res = refalrts::splice_elem( res, context[11] );
    refalrts::push_stack( context[10] );
    refalrts::push_stack( context[8] );
    res = refalrts::splice_elem( res, context[10] );
    res = refalrts::splice_stvar( res, context[4] );
    res = refalrts::splice_elem( res, context[9] );
    res = refalrts::splice_elem( res, context[8] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_elem( res, context[7] );
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
  // ( e.Scanned#1/2 ) # Fails e.Tail#2/0
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::ident_left(  & ident_Fails<int>::name, context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Scanned#1 as range 2
  // closed e.Tail#2 as range 0
  //0: e.Tail#2
  //2: e.Scanned#1

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_bracket( context[4] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[5], & ident_TError<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[6], context[7], "Expected digits", 15 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[10], LoTokens, "LoTokens" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[11] ) )
    return refalrts::cNoMemory;
  refalrts::push_stack( context[11] );
  refalrts::push_stack( context[9] );
  res = refalrts::splice_elem( res, context[11] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_elem( res, context[10] );
  res = refalrts::splice_elem( res, context[9] );
  refalrts::link_brackets( context[4], context[8] );
  res = refalrts::splice_elem( res, context[8] );
  res = refalrts::splice_evar( res, context[6], context[7] );
  res = refalrts::splice_elem( res, context[5] );
  res = refalrts::splice_elem( res, context[4] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult Literal_DecCode(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { lambda_Literal_DecCode_0, "lambda_Literal_DecCode_0" },
    { refalrts::create_closure, "refalrts::create_closure" },
    { IntFromStr, "IntFromStr" },
    { Fetch, "Fetch" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_TError<int>::name
  };
  using refalrts::numbers;
  static const refalrts::StringItem strings[] = {
    {"Unexpected end of file", 22}
  };
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +37, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Scanned#1/2 ) e.Tail#1/0
    {refalrts::icBracketLeft, 0, 2, 0},
    // closed e.Scanned#1 as range 2
    // closed e.Tail#1 as range 0
    //0: e.Tail#1
    //2: e.Scanned#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 4},
    {refalrts::icFunc, 0, 3, 5},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 6},
    {refalrts::icFunc, 0, 2, 7},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 8},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 9},
    {refalrts::icFunc, 0, 1, 10},
    {refalrts::icFunc, 0, 0, 11},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 12},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 13},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 14},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 15},
    {refalrts::icPushStack, 0, 0, 15},
    {refalrts::icPushStack, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icPushStack, 0, 0, 14},
    {refalrts::icPushStack, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icLinkBrackets, 12, 13, 0},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 10},
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
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Scanned#1/2 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icEmpty, 0, 0, 0},
    // closed e.Scanned#1 as range 2
    //2: e.Scanned#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 4},
    {refalrts::icIdent, 0, 0, 5},
    {refalrts::icString, 0, 0, 6},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 8},
    {refalrts::icLinkBrackets, 4, 8, 0},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceRange, 0, 0, 6},
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
    // ( e.Scanned#1/2 ) e.Tail#1/0
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    // closed e.Scanned#1 as range 2
    // closed e.Tail#1 as range 0
    //0: e.Tail#1
    //2: e.Scanned#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[4] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[5], Fetch, "Fetch" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[7], IntFromStr, "IntFromStr" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[9] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[10], refalrts::create_closure, "refalrts::create_closure" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[11], lambda_Literal_DecCode_0, "lambda_Literal_DecCode_0" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[15] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[15] );
    refalrts::push_stack( context[4] );
    res = refalrts::splice_elem( res, context[15] );
    refalrts::push_stack( context[14] );
    refalrts::push_stack( context[9] );
    res = refalrts::splice_elem( res, context[14] );
    refalrts::link_brackets( context[12], context[13] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_elem( res, context[10] );
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
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  refalrts::move_left( context[0], context[1] );
  refalrts::move_left( context[0], context[1] );
  refalrts::move_right( context[0], context[1] );
  // ( e.Scanned#1/2 )
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Scanned#1 as range 2
  //2: e.Scanned#1

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_bracket( context[4] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[5], & ident_TError<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[6], context[7], "Unexpected end of file", 22 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[8] ) )
    return refalrts::cNoMemory;
  refalrts::link_brackets( context[4], context[8] );
  res = refalrts::splice_elem( res, context[8] );
  res = refalrts::splice_evar( res, context[6], context[7] );
  res = refalrts::splice_elem( res, context[5] );
  res = refalrts::splice_elem( res, context[4] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult NameFail(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { LoTokens, "LoTokens" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_TError<int>::name
  };
  using refalrts::numbers;
  static const refalrts::StringItem strings[] = {
    {"Unexpected character ", 21}
  };
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    // ( ) s.Next#1/4 e.Tail#1/0
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icsVarLeft, 0, 4, 0},
    // closed e.Tail#1 as range 0
    //0: e.Tail#1
    //4: s.Next#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 5},
    {refalrts::icIdent, 0, 0, 6},
    {refalrts::icString, 0, 0, 7},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 9},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 10},
    {refalrts::icFunc, 0, 0, 11},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 12},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icPushStack, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icLinkBrackets, 5, 9, 0},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceSTVar, 0, 0, 4},
    {refalrts::icSpliceRange, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 5},
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
  // ( ) s.Next#1/4 e.Tail#1/0
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[4], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Tail#1 as range 0
  //0: e.Tail#1
  //4: s.Next#1

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_bracket( context[5] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[6], & ident_TError<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[7], context[8], "Unexpected character ", 21 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[11], LoTokens, "LoTokens" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[12] ) )
    return refalrts::cNoMemory;
  refalrts::push_stack( context[12] );
  refalrts::push_stack( context[10] );
  res = refalrts::splice_elem( res, context[12] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_elem( res, context[11] );
  res = refalrts::splice_elem( res, context[10] );
  refalrts::link_brackets( context[5], context[9] );
  res = refalrts::splice_elem( res, context[9] );
  res = refalrts::splice_stvar( res, context[4] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_elem( res, context[6] );
  res = refalrts::splice_elem( res, context[5] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult NameTailFail(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { LoTokens, "LoTokens" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_TName<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Scanned#1/2 ) e.Tail#1/0
    {refalrts::icBracketLeft, 0, 2, 0},
    // closed e.Scanned#1 as range 2
    // closed e.Tail#1 as range 0
    //0: e.Tail#1
    //2: e.Scanned#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 4},
    {refalrts::icIdent, 0, 0, 5},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 6},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 7},
    {refalrts::icFunc, 0, 0, 8},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 9},
    {refalrts::icPushStack, 0, 0, 9},
    {refalrts::icPushStack, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 7},
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
  context[0] = arg_begin;
  context[1] = arg_end;
  refalrts::move_left( context[0], context[1] );
  refalrts::move_left( context[0], context[1] );
  refalrts::move_right( context[0], context[1] );
  // ( e.Scanned#1/2 ) e.Tail#1/0
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Scanned#1 as range 2
  // closed e.Tail#1 as range 0
  //0: e.Tail#1
  //2: e.Scanned#1

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_bracket( context[4] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[5], & ident_TName<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[8], LoTokens, "LoTokens" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[9] ) )
    return refalrts::cNoMemory;
  refalrts::push_stack( context[9] );
  refalrts::push_stack( context[7] );
  res = refalrts::splice_elem( res, context[9] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_elem( res, context[8] );
  res = refalrts::splice_elem( res, context[7] );
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

static refalrts::FnResult NameTail(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { NameTailSet, "NameTailSet" },
    { NameTailFail, "NameTailFail" },
    { NameTail, "NameTail" },
    { NextInSet, "NextInSet" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Scanned#1/2 ) e.Tail#1/0
    {refalrts::icBracketLeft, 0, 2, 0},
    // closed e.Scanned#1 as range 2
    // closed e.Tail#1 as range 0
    //0: e.Tail#1
    //2: e.Scanned#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 4},
    {refalrts::icFunc, 0, 3, 5},
    {refalrts::icFunc, 0, 2, 6},
    {refalrts::icFunc, 0, 1, 7},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 9},
    {refalrts::icFunc, 0, 0, 10},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 11},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 12},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 13},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 14},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 15},
    {refalrts::icPushStack, 0, 0, 15},
    {refalrts::icPushStack, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icLinkBrackets, 13, 14, 0},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icLinkBrackets, 8, 12, 0},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icPushStack, 0, 0, 11},
    {refalrts::icPushStack, 0, 0, 9},
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
  // ( e.Scanned#1/2 ) e.Tail#1/0
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Scanned#1 as range 2
  // closed e.Tail#1 as range 0
  //0: e.Tail#1
  //2: e.Scanned#1

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_call( context[4] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[5], NextInSet, "NextInSet" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[6], NameTail, "NameTail" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[7], NameTailFail, "NameTailFail" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[10], NameTailSet, "NameTailSet" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[11] ) )
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
  refalrts::push_stack( context[4] );
  res = refalrts::splice_elem( res, context[15] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  refalrts::link_brackets( context[13], context[14] );
  res = refalrts::splice_elem( res, context[14] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_elem( res, context[13] );
  refalrts::link_brackets( context[8], context[12] );
  res = refalrts::splice_elem( res, context[12] );
  refalrts::push_stack( context[11] );
  refalrts::push_stack( context[9] );
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

static refalrts::FnResult Name(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { HiLetters, "HiLetters" },
    { NameFail, "NameFail" },
    { NameTail, "NameTail" },
    { NextInSet, "NextInSet" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    // e.Tail#1/0
    // closed e.Tail#1 as range 0
    //0: e.Tail#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 2},
    {refalrts::icFunc, 0, 3, 3},
    {refalrts::icFunc, 0, 2, 4},
    {refalrts::icFunc, 0, 1, 5},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 7},
    {refalrts::icFunc, 0, 0, 8},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 9},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 10},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 11},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 12},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 13},
    {refalrts::icPushStack, 0, 0, 13},
    {refalrts::icPushStack, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icLinkBrackets, 11, 12, 0},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icLinkBrackets, 6, 10, 0},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icPushStack, 0, 0, 9},
    {refalrts::icPushStack, 0, 0, 7},
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
  // e.Tail#1/0
  // closed e.Tail#1 as range 0
  //0: e.Tail#1

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_call( context[2] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[3], NextInSet, "NextInSet" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[4], NameTail, "NameTail" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[5], NameFail, "NameFail" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[8], HiLetters, "HiLetters" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[13] ) )
    return refalrts::cNoMemory;
  refalrts::push_stack( context[13] );
  refalrts::push_stack( context[2] );
  res = refalrts::splice_elem( res, context[13] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  refalrts::link_brackets( context[11], context[12] );
  res = refalrts::splice_elem( res, context[12] );
  res = refalrts::splice_elem( res, context[11] );
  refalrts::link_brackets( context[6], context[10] );
  res = refalrts::splice_elem( res, context[10] );
  refalrts::push_stack( context[9] );
  refalrts::push_stack( context[7] );
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


//End of file
