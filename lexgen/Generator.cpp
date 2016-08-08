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
static refalrts::FnResult gen_GenCode_S1L1(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult GenerateAutomat(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult GenerateFromDFA(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult GenerateSentences(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult HiLetters(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult Length_T(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult Literal(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult Literal_DecCode(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult gen_Literal_DecCode_S1L1(refalrts::Iter arg_begin, refalrts::Iter arg_end);
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
static refalrts::FnResult gen_Tokens_L1(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult gen_Tokens_L2(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult gen_Tokens_L3(refalrts::Iter arg_begin, refalrts::Iter arg_end);
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
    // </0 & Generate-SelfUpdate/4 e.FileName#1/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    // closed e.FileName#1 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } </5 & SaveFile/6 (/7 e.FileName#1/2/8 )/10 </11 & GenCode/12 Tile{ AsIs: </0 Reuse: & LoadFile/4 AsIs: e.FileName#1/2 AsIs: >/1 } >/13 >/14 Tile{ ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 5},
    {refalrts::icAllocFunc, 0, 2, 6},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 7},
    {refalrts::icCopyEVar, 8, 2, 0},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 10},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 11},
    {refalrts::icAllocFunc, 0, 1, 12},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 13},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 14},
    {refalrts::icUpdateFunc, 0, 0, 4},
    {refalrts::icPushStack, 0, 0, 14},
    {refalrts::icPushStack, 0, 0, 5},
    {refalrts::icPushStack, 0, 0, 13},
    {refalrts::icPushStack, 0, 0, 11},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 7, 10, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 13, 14, 0},
    {refalrts::icSpliceTile, 0, 1, 0},
    {refalrts::icSpliceTile, 5, 12, 0},
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
  // </0 & Generate-SelfUpdate/4 e.FileName#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.FileName#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } </5 & SaveFile/6 (/7 e.FileName#1/2/8 )/10 </11 & GenCode/12 Tile{ AsIs: </0 Reuse: & LoadFile/4 AsIs: e.FileName#1/2 AsIs: >/1 } >/13 >/14 Tile{ ]] }
  if( ! refalrts::alloc_open_call( context[5] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[6], SaveFile, "SaveFile" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[7] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[8], context[9], context[2], context[3]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[12], GenCode, "GenCode" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[14] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], LoadFile, "LoadFile" );
  refalrts::push_stack( context[14] );
  refalrts::push_stack( context[5] );
  refalrts::push_stack( context[13] );
  refalrts::push_stack( context[11] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[7], context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[5], context[12] );
  refalrts::use( res );
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
    { SaveFile, "SaveFile" },
    { LoadFile, "LoadFile" },
    { GenCode, "GenCode" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  static const refalrts::StringItem strings[] = {
    {"// Edit file \'", 14},
    {"// Automatically generated file, don\'t edit!", 44}
  };
  static const refalrts::RASLCommand raa[] = {
    // </0 & Generate-ToDifferent/4 (/7 e.From#1/5 )/8 e.To#1/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icBracketLeftSave, 0, 5, 2},
    // closed e.From#1 as range 5
    // closed e.To#1 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & SaveFile/4 AsIs: (/7 } Tile{ AsIs: e.To#1/2 } Tile{ AsIs: )/8 } (/9"// Automatically generated file, don\'t edit!"/10 )/12 (/13"// Edit file \'"/14 Tile{ AsIs: e.From#1/5 } '\''/16 )/17 (/18 )/19 (/20 )/21 </22 & GenCode/23 </24 & LoadFile/25 e.From#1/5/26 >/28 >/29 Tile{ AsIs: >/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 9},
    {refalrts::icAllocString, 0, 1, 10},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 12},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 13},
    {refalrts::icAllocString, 0, 0, 14},
    {refalrts::icAllocChar, 0, '\'', 16},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 17},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 18},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 19},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 20},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 21},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 22},
    {refalrts::icAllocFunc, 0, 2, 23},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 24},
    {refalrts::icAllocFunc, 0, 1, 25},
    {refalrts::icCopyEVar, 26, 5, 0},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 28},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 29},
    {refalrts::icUpdateFunc, 0, 0, 4},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icPushStack, 0, 0, 29},
    {refalrts::icPushStack, 0, 0, 22},
    {refalrts::icPushStack, 0, 0, 28},
    {refalrts::icPushStack, 0, 0, 24},
    {refalrts::icLinkBrackets, 20, 21, 0},
    {refalrts::icLinkBrackets, 18, 19, 0},
    {refalrts::icLinkBrackets, 13, 17, 0},
    {refalrts::icLinkBrackets, 9, 12, 0},
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceTile, 16, 29, 0},
    {refalrts::icSpliceEVar, 0, 0, 5},
    {refalrts::icSpliceTile, 9, 15, 0},
    {refalrts::icSpliceTile, 8, 8, 0},
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
  // </0 & Generate-ToDifferent/4 (/7 e.From#1/5 )/8 e.To#1/2 >/1
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
  // closed e.From#1 as range 5
  // closed e.To#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & SaveFile/4 AsIs: (/7 } Tile{ AsIs: e.To#1/2 } Tile{ AsIs: )/8 } (/9"// Automatically generated file, don\'t edit!"/10 )/12 (/13"// Edit file \'"/14 Tile{ AsIs: e.From#1/5 } '\''/16 )/17 (/18 )/19 (/20 )/21 </22 & GenCode/23 </24 & LoadFile/25 e.From#1/5/26 >/28 >/29 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_bracket( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[10], context[11], "// Automatically generated file, don\'t edit!", 44 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[14], context[15], "// Edit file \'", 14 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[16], '\'' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[17] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[18] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[19] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[20] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[21] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[22] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[23], GenCode, "GenCode" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[24] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[25], LoadFile, "LoadFile" ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[26], context[27], context[5], context[6]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[28] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[29] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], SaveFile, "SaveFile" );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[29] );
  refalrts::push_stack( context[22] );
  refalrts::push_stack( context[28] );
  refalrts::push_stack( context[24] );
  refalrts::link_brackets( context[20], context[21] );
  refalrts::link_brackets( context[18], context[19] );
  refalrts::link_brackets( context[13], context[17] );
  refalrts::link_brackets( context[9], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[16], context[29] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[9], context[15] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::use( res );
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
    // </0 & NextNum/4 s.Next#1/9 (/7 e.Line#1/5 )/8 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icBracketRightSave, 0, 5, 2},
    // closed e.Line#1 as range 5
    {refalrts::icsVarLeft, 0, 9, 2},
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Inc/4 AsIs: s.Next#1/9 HalfReuse: >/7 } Tile{ HalfReuse: (/8 } Tile{ AsIs: e.Line#1/5 } Tile{ HalfReuse: )/1 ]] }
    {refalrts::icUpdateFunc, 0, 0, 4},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 7},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
    {refalrts::icLinkBrackets, 8, 1, 0},
    {refalrts::icPushStack, 0, 0, 7},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceEVar, 0, 0, 5},
    {refalrts::icSpliceTile, 8, 8, 0},
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
  // </0 & NextNum/4 s.Next#1/9 (/7 e.Line#1/5 )/8 >/1
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
  // closed e.Line#1 as range 5
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Inc/4 AsIs: s.Next#1/9 HalfReuse: >/7 } Tile{ HalfReuse: (/8 } Tile{ AsIs: e.Line#1/5 } Tile{ HalfReuse: )/1 ]] }
  refalrts::update_name( context[4], Inc, "Inc" );
  refalrts::reinit_close_call( context[7] );
  refalrts::reinit_open_bracket( context[8] );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[8], context[1] );
  refalrts::push_stack( context[7] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  refalrts::use( res );
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
    // </0 & Length-T/4 e.Line#1/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    // closed e.Line#1 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } </5 & MapReduce/6 Tile{ HalfReuse: & NextNum/0 HalfReuse: 0/4 AsIs: e.Line#1/2 AsIs: >/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 5},
    {refalrts::icAllocFunc, 0, 1, 6},
    {refalrts::icReinitFunc, 0, 0, 0},
    {refalrts::icReinitInt, 0, 0, 4},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 5},
    {refalrts::icSetRes, 0, 0, 0},
    {refalrts::icSpliceTile, 5, 6, 0},
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
  // </0 & Length-T/4 e.Line#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Line#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } </5 & MapReduce/6 Tile{ HalfReuse: & NextNum/0 HalfReuse: 0/4 AsIs: e.Line#1/2 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[5] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[6], MapReduce, "MapReduce" ) )
    return refalrts::cNoMemory;
  refalrts::reinit_name( context[0], NextNum, "NextNum" );
  refalrts::reinit_number( context[4], 0UL );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
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
    { WriteLine, "WriteLine" },
    { Exit, "Exit" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    // </0 & Error/4 e.Text#1/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    // closed e.Text#1 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & WriteLine/4 AsIs: e.Text#1/2 AsIs: >/1 } </5 & Exit/6 1/7 >/8 Tile{ ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 5},
    {refalrts::icAllocFunc, 0, 1, 6},
    {refalrts::icAllocInt, 0, 1, 7},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 8},
    {refalrts::icUpdateFunc, 0, 0, 4},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icPushStack, 0, 0, 5},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 5, 8, 0},
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
  // </0 & Error/4 e.Text#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Text#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & WriteLine/4 AsIs: e.Text#1/2 AsIs: >/1 } </5 & Exit/6 1/7 >/8 Tile{ ]] }
  if( ! refalrts::alloc_open_call( context[5] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[6], Exit, "Exit" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_number( context[7], 1UL ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[8] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], WriteLine, "WriteLine" );
  refalrts::push_stack( context[8] );
  refalrts::push_stack( context[5] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[8] );
  refalrts::use( res );
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
    { Error, "Error" },
    { StrFromInt, "StrFromInt" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  static const refalrts::StringItem strings[] = {
    {": ", 2},
    {"ERROR at ", 9}
  };
  static const refalrts::RASLCommand raa[] = {
    // </0 & ErrorAt/4 s.Number#1/5 e.Text#1/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icsVarLeft, 0, 5, 2},
    // closed e.Text#1 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Error/4 }"ERROR at "/6 </8 & StrFromInt/9 Tile{ AsIs: s.Number#1/5 } >/10": "/11 Tile{ AsIs: e.Text#1/2 } Tile{ AsIs: >/1 ]] }
    {refalrts::icAllocString, 0, 1, 6},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 8},
    {refalrts::icAllocFunc, 0, 1, 9},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 10},
    {refalrts::icAllocString, 0, 0, 11},
    {refalrts::icUpdateFunc, 0, 0, 4},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icPushStack, 0, 0, 10},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceTile, 10, 12, 0},
    {refalrts::icSpliceTile, 5, 5, 0},
    {refalrts::icSpliceTile, 6, 9, 0},
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
  // </0 & ErrorAt/4 s.Number#1/5 e.Text#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Text#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Error/4 }"ERROR at "/6 </8 & StrFromInt/9 Tile{ AsIs: s.Number#1/5 } >/10": "/11 Tile{ AsIs: e.Text#1/2 } Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_chars( context[6], context[7], "ERROR at ", 9 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[9], StrFromInt, "StrFromInt" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[11], context[12], ": ", 2 ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], Error, "Error" );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[10] );
  refalrts::push_stack( context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[10], context[12] );
  res = refalrts::splice_evar( res, context[5], context[5] );
  res = refalrts::splice_evar( res, context[6], context[9] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult Warning(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { WriteLine, "WriteLine" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  static const refalrts::StringItem strings[] = {
    {"WARNING", 7}
  };
  static const refalrts::RASLCommand raa[] = {
    // </0 & Warning/4 e.Message#1/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    // closed e.Message#1 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } </5 & WriteLine/6"WARNING"/7 Tile{ HalfReuse: ':'/0 HalfReuse: ' '/4 AsIs: e.Message#1/2 AsIs: >/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 5},
    {refalrts::icAllocFunc, 0, 0, 6},
    {refalrts::icAllocString, 0, 0, 7},
    {refalrts::icReinitChar, 0, ':', 0},
    {refalrts::icReinitChar, 0, ' ', 4},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 5},
    {refalrts::icSetRes, 0, 0, 0},
    {refalrts::icSpliceTile, 5, 8, 0},
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
  // </0 & Warning/4 e.Message#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Message#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } </5 & WriteLine/6"WARNING"/7 Tile{ HalfReuse: ':'/0 HalfReuse: ' '/4 AsIs: e.Message#1/2 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[5] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[6], WriteLine, "WriteLine" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[7], context[8], "WARNING", 7 ) )
    return refalrts::cNoMemory;
  refalrts::reinit_char( context[0], ':' );
  refalrts::reinit_char( context[4], ' ' );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[8] );
  refalrts::use( res );
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
    { WriteLine, "WriteLine" },
    { StrFromInt, "StrFromInt" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  static const refalrts::StringItem strings[] = {
    {"WARNING at ", 11}
  };
  static const refalrts::RASLCommand raa[] = {
    // </0 & WarningAt/4 s.Number#1/5 e.Message#1/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icsVarLeft, 0, 5, 2},
    // closed e.Message#1 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & WriteLine/4 }"WARNING at "/6 </8 & StrFromInt/9 Tile{ AsIs: s.Number#1/5 } >/10 ' '/11 Tile{ AsIs: e.Message#1/2 } Tile{ AsIs: >/1 ]] }
    {refalrts::icAllocString, 0, 0, 6},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 8},
    {refalrts::icAllocFunc, 0, 1, 9},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 10},
    {refalrts::icAllocChar, 0, ' ', 11},
    {refalrts::icUpdateFunc, 0, 0, 4},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icPushStack, 0, 0, 10},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceTile, 10, 11, 0},
    {refalrts::icSpliceTile, 5, 5, 0},
    {refalrts::icSpliceTile, 6, 9, 0},
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
  // </0 & WarningAt/4 s.Number#1/5 e.Message#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Message#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & WriteLine/4 }"WARNING at "/6 </8 & StrFromInt/9 Tile{ AsIs: s.Number#1/5 } >/10 ' '/11 Tile{ AsIs: e.Message#1/2 } Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_chars( context[6], context[7], "WARNING at ", 11 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[9], StrFromInt, "StrFromInt" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[11], ' ' ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], WriteLine, "WriteLine" );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[10] );
  refalrts::push_stack( context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[10], context[11] );
  res = refalrts::splice_evar( res, context[5], context[5] );
  res = refalrts::splice_evar( res, context[6], context[9] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult gen_GenCode_S1L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 35 elems
  refalrts::Iter context[35];
  refalrts::zeros( context, 35 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { Error, "Error" },
    { Parse, "Parse" },
    { GenerateFromDFA, "GenerateFromDFA" },
    { Tokens, "Tokens" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  static const refalrts::StringItem strings[] = {
    {"End of description not found", 28}
  };
  static const refalrts::RASLCommand raa[] = {
    //FAST GEN: e.$
    //GLOBAL GEN: e.$
    // </0 & GenCode$1\1/4 e.idx#0/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    // closed e.idx#0 as range 2
    {refalrts::icOnFailGoTo, +45, 0, 0},
    // ( s.idx e.idx ) e.idx
    // </0 & GenCode$1\1/4 (/7 s.Length#2/9 e.LinesBefore#2/5 )/8 e.Description#2/10 (/14 'G'/16 'E'/17 'N'/18 ':'/19 'E'/20 'N'/21 'D'/22 '*'/23 '/'/24 )/15 e.Deleted#2/2 >/1
    {refalrts::icSave, 0, 31, 2},
    {refalrts::icBracketLeftSave, 0, 5, 31},
    {refalrts::icsVarLeft, 0, 9, 5},
    // closed e.LinesBefore#2 as range 5
    {refalrts::icEPrepare, 0, 10, 31},
    {refalrts::icEStart, 0, 10, 31},
    {refalrts::icSave, 0, 33, 31},
    {refalrts::icBracketLeftSave, 0, 12, 33},
    {refalrts::icCharLeftSave, 16, static_cast<unsigned char>('G'), 12},
    {refalrts::icCharLeftSave, 17, static_cast<unsigned char>('E'), 12},
    {refalrts::icCharLeftSave, 18, static_cast<unsigned char>('N'), 12},
    {refalrts::icCharLeftSave, 19, static_cast<unsigned char>(':'), 12},
    {refalrts::icCharLeftSave, 20, static_cast<unsigned char>('E'), 12},
    {refalrts::icCharLeftSave, 21, static_cast<unsigned char>('N'), 12},
    {refalrts::icCharLeftSave, 22, static_cast<unsigned char>('D'), 12},
    {refalrts::icCharLeftSave, 23, static_cast<unsigned char>('*'), 12},
    {refalrts::icCharLeftSave, 24, static_cast<unsigned char>('/'), 12},
    {refalrts::icEmpty, 0, 0, 12},
    // closed e.Deleted#2 as range 33(2)
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  e.Deleted#2/33(2) {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: e.LinesBefore#2/5 } Tile{ AsIs: e.Description#2/10 } Tile{ AsIs: (/14 AsIs: 'G'/16 AsIs: 'E'/17 AsIs: 'N'/18 AsIs: ':'/19 AsIs: 'E'/20 AsIs: 'N'/21 AsIs: 'D'/22 AsIs: '*'/23 AsIs: '/'/24 AsIs: )/15 } Tile{ AsIs: </0 Reuse: & GenerateFromDFA/4 HalfReuse: </7 } Tile{ HalfReuse: & Parse/8 } </25 & Tokens/26 Tile{ AsIs: s.Length#2/9 } e.Description#2/10/27 >/29 >/30 Tile{ AsIs: >/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 25},
    {refalrts::icAllocFunc, 0, 3, 26},
    {refalrts::icCopyEVar, 27, 10, 0},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 29},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 30},
    {refalrts::icUpdateFunc, 0, 2, 4},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 7},
    {refalrts::icReinitFunc, 0, 1, 8},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icPushStack, 0, 0, 30},
    {refalrts::icPushStack, 0, 0, 7},
    {refalrts::icPushStack, 0, 0, 29},
    {refalrts::icPushStack, 0, 0, 25},
    {refalrts::icLinkBrackets, 14, 15, 0},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceTile, 29, 30, 0},
    {refalrts::icSpliceTile, 27, 28, 0},
    {refalrts::icSpliceTile, 9, 9, 0},
    {refalrts::icSpliceTile, 25, 26, 0},
    {refalrts::icSpliceTile, 8, 8, 0},
    {refalrts::icSpliceTile, 0, 7, 0},
    {refalrts::icSpliceTile, 14, 15, 0},
    {refalrts::icSpliceEVar, 0, 0, 10},
    {refalrts::icSpliceEVar, 0, 0, 5},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    // e.idx
    // </0 & GenCode$1\1/4 e.Other#2/2 >/1
    // closed e.Other#2 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  e.Other#2/2 {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Error/4 }"End of description not found"/5 Tile{ AsIs: >/1 ]] }
    {refalrts::icAllocString, 0, 0, 5},
    {refalrts::icUpdateFunc, 0, 0, 4},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceTile, 5, 6, 0},
    {refalrts::icTrash, 0, 0, 4},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[2];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  //FAST GEN: e.$
  //GLOBAL GEN: e.$
  // </0 & GenCode$1\1/4 e.idx#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.idx#0 as range 2
  do {
    refalrts::start_sentence();
    // ( s.idx e.idx ) e.idx
    // </0 & GenCode$1\1/4 (/7 s.Length#2/9 e.LinesBefore#2/5 )/8 e.Description#2/10 (/14 'G'/16 'E'/17 'N'/18 ':'/19 'E'/20 'N'/21 'D'/22 '*'/23 '/'/24 )/15 e.Deleted#2/2 >/1
    context[31] = context[2];
    context[32] = context[3];
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[31], context[32] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    if( ! refalrts::svar_left( context[9], context[5], context[6] ) )
      continue;
    // closed e.LinesBefore#2 as range 5
    context[10] = 0;
    context[11] = 0;
    refalrts::start_e_loop();
    do {
      context[33] = context[31];
      context[34] = context[32];
      context[12] = 0;
      context[13] = 0;
      context[14] = refalrts::brackets_left( context[12], context[13], context[33], context[34] );
      if( ! context[14] )
        continue;
      refalrts::bracket_pointers(context[14], context[15]);
      context[16] = refalrts::char_left( 'G', context[12], context[13] );
      if( ! context[16] )
        continue;
      context[17] = refalrts::char_left( 'E', context[12], context[13] );
      if( ! context[17] )
        continue;
      context[18] = refalrts::char_left( 'N', context[12], context[13] );
      if( ! context[18] )
        continue;
      context[19] = refalrts::char_left( ':', context[12], context[13] );
      if( ! context[19] )
        continue;
      context[20] = refalrts::char_left( 'E', context[12], context[13] );
      if( ! context[20] )
        continue;
      context[21] = refalrts::char_left( 'N', context[12], context[13] );
      if( ! context[21] )
        continue;
      context[22] = refalrts::char_left( 'D', context[12], context[13] );
      if( ! context[22] )
        continue;
      context[23] = refalrts::char_left( '*', context[12], context[13] );
      if( ! context[23] )
        continue;
      context[24] = refalrts::char_left( '/', context[12], context[13] );
      if( ! context[24] )
        continue;
      if( ! refalrts::empty_seq( context[12], context[13] ) )
        continue;
      // closed e.Deleted#2 as range 33(2)

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  e.Deleted#2/33(2) {REMOVED TILE} 
      //RESULT: Tile{ [[ } Tile{ AsIs: e.LinesBefore#2/5 } Tile{ AsIs: e.Description#2/10 } Tile{ AsIs: (/14 AsIs: 'G'/16 AsIs: 'E'/17 AsIs: 'N'/18 AsIs: ':'/19 AsIs: 'E'/20 AsIs: 'N'/21 AsIs: 'D'/22 AsIs: '*'/23 AsIs: '/'/24 AsIs: )/15 } Tile{ AsIs: </0 Reuse: & GenerateFromDFA/4 HalfReuse: </7 } Tile{ HalfReuse: & Parse/8 } </25 & Tokens/26 Tile{ AsIs: s.Length#2/9 } e.Description#2/10/27 >/29 >/30 Tile{ AsIs: >/1 ]] }
      if( ! refalrts::alloc_open_call( context[25] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[26], Tokens, "Tokens" ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_evar(context[27], context[28], context[10], context[11]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[29] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[30] ) )
        return refalrts::cNoMemory;
      refalrts::update_name( context[4], GenerateFromDFA, "GenerateFromDFA" );
      refalrts::reinit_open_call( context[7] );
      refalrts::reinit_name( context[8], Parse, "Parse" );
      refalrts::push_stack( context[1] );
      refalrts::push_stack( context[0] );
      refalrts::push_stack( context[30] );
      refalrts::push_stack( context[7] );
      refalrts::push_stack( context[29] );
      refalrts::push_stack( context[25] );
      refalrts::link_brackets( context[14], context[15] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[29], context[30] );
      res = refalrts::splice_evar( res, context[27], context[28] );
      res = refalrts::splice_evar( res, context[9], context[9] );
      res = refalrts::splice_evar( res, context[25], context[26] );
      res = refalrts::splice_evar( res, context[8], context[8] );
      res = refalrts::splice_evar( res, context[0], context[7] );
      res = refalrts::splice_evar( res, context[14], context[15] );
      res = refalrts::splice_evar( res, context[10], context[11] );
      res = refalrts::splice_evar( res, context[5], context[6] );
      refalrts::use( res );
      refalrts::splice_to_freelist_open( trash_prev, res );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[10], context[11], context[31], context[32] ) );
  } while ( 0 );

  // e.idx
  // </0 & GenCode$1\1/4 e.Other#2/2 >/1
  // closed e.Other#2 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  e.Other#2/2 {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Error/4 }"End of description not found"/5 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_chars( context[5], context[6], "End of description not found", 28 ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], Error, "Error" );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[4], res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult GenCode(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 33 elems
  refalrts::Iter context[33];
  refalrts::zeros( context, 33 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { Error, "Error" },
    { Length_T, "Length-T" },
    { gen_GenCode_S1L1, "GenCode$1\\1" },
    { Fetch, "Fetch" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  static const refalrts::StringItem strings[] = {
    {"Lexer description not found", 27}
  };
  static const refalrts::RASLCommand raa[] = {
    //FAST GEN: e.$
    //GLOBAL GEN: e.$
    // </0 & GenCode/4 e.idx#0/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    // closed e.idx#0 as range 2
    {refalrts::icOnFailGoTo, +39, 0, 0},
    // e.idx
    // </0 & GenCode/4 e.LinesBefore#1/5 (/9 '/'/11 '*'/12 'G'/13 'E'/14 'N'/15 ':'/16 'T'/17 'O'/18 'K'/19 'E'/20 'N'/21 'S'/22 )/10 e.Description#1/2 >/1
    {refalrts::icSave, 0, 29, 2},
    {refalrts::icEPrepare, 0, 5, 29},
    {refalrts::icEStart, 0, 5, 29},
    {refalrts::icSave, 0, 31, 29},
    {refalrts::icBracketLeftSave, 0, 7, 31},
    {refalrts::icCharLeftSave, 11, static_cast<unsigned char>('/'), 7},
    {refalrts::icCharLeftSave, 12, static_cast<unsigned char>('*'), 7},
    {refalrts::icCharLeftSave, 13, static_cast<unsigned char>('G'), 7},
    {refalrts::icCharLeftSave, 14, static_cast<unsigned char>('E'), 7},
    {refalrts::icCharLeftSave, 15, static_cast<unsigned char>('N'), 7},
    {refalrts::icCharLeftSave, 16, static_cast<unsigned char>(':'), 7},
    {refalrts::icCharLeftSave, 17, static_cast<unsigned char>('T'), 7},
    {refalrts::icCharLeftSave, 18, static_cast<unsigned char>('O'), 7},
    {refalrts::icCharLeftSave, 19, static_cast<unsigned char>('K'), 7},
    {refalrts::icCharLeftSave, 20, static_cast<unsigned char>('E'), 7},
    {refalrts::icCharLeftSave, 21, static_cast<unsigned char>('N'), 7},
    {refalrts::icCharLeftSave, 22, static_cast<unsigned char>('S'), 7},
    {refalrts::icEmpty, 0, 0, 7},
    // closed e.Description#1 as range 31(2)
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } </23 & Fetch/24 (/25 Tile{ AsIs: </0 Reuse: & Length-T/4 AsIs: e.LinesBefore#1/5 AsIs: (/9 AsIs: '/'/11 AsIs: '*'/12 AsIs: 'G'/13 AsIs: 'E'/14 AsIs: 'N'/15 AsIs: ':'/16 AsIs: 'T'/17 AsIs: 'O'/18 AsIs: 'K'/19 AsIs: 'E'/20 AsIs: 'N'/21 AsIs: 'S'/22 AsIs: )/10 } >/26 )/27 Tile{ AsIs: e.Description#1/31(2) } & GenCode$1\1/28 Tile{ AsIs: >/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 23},
    {refalrts::icAllocFunc, 0, 3, 24},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 25},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 26},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 27},
    {refalrts::icAllocFunc, 0, 2, 28},
    {refalrts::icUpdateFunc, 0, 1, 4},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 23},
    {refalrts::icLinkBrackets, 25, 27, 0},
    {refalrts::icPushStack, 0, 0, 26},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 9, 10, 0},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceTile, 28, 28, 0},
    {refalrts::icSpliceEVar, 0, 0, 31},
    {refalrts::icSpliceTile, 26, 27, 0},
    {refalrts::icSpliceTile, 0, 10, 0},
    {refalrts::icSpliceTile, 23, 25, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    // e.idx
    // </0 & GenCode/4 e.Other#1/2 >/1
    // closed e.Other#1 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  e.Other#1/2 {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Error/4 }"Lexer description not found"/5 Tile{ AsIs: >/1 ]] }
    {refalrts::icAllocString, 0, 0, 5},
    {refalrts::icUpdateFunc, 0, 0, 4},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceTile, 5, 6, 0},
    {refalrts::icTrash, 0, 0, 4},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[2];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  //FAST GEN: e.$
  //GLOBAL GEN: e.$
  // </0 & GenCode/4 e.idx#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.idx#0 as range 2
  do {
    refalrts::start_sentence();
    // e.idx
    // </0 & GenCode/4 e.LinesBefore#1/5 (/9 '/'/11 '*'/12 'G'/13 'E'/14 'N'/15 ':'/16 'T'/17 'O'/18 'K'/19 'E'/20 'N'/21 'S'/22 )/10 e.Description#1/2 >/1
    context[29] = context[2];
    context[30] = context[3];
    context[5] = 0;
    context[6] = 0;
    refalrts::start_e_loop();
    do {
      context[31] = context[29];
      context[32] = context[30];
      context[7] = 0;
      context[8] = 0;
      context[9] = refalrts::brackets_left( context[7], context[8], context[31], context[32] );
      if( ! context[9] )
        continue;
      refalrts::bracket_pointers(context[9], context[10]);
      context[11] = refalrts::char_left( '/', context[7], context[8] );
      if( ! context[11] )
        continue;
      context[12] = refalrts::char_left( '*', context[7], context[8] );
      if( ! context[12] )
        continue;
      context[13] = refalrts::char_left( 'G', context[7], context[8] );
      if( ! context[13] )
        continue;
      context[14] = refalrts::char_left( 'E', context[7], context[8] );
      if( ! context[14] )
        continue;
      context[15] = refalrts::char_left( 'N', context[7], context[8] );
      if( ! context[15] )
        continue;
      context[16] = refalrts::char_left( ':', context[7], context[8] );
      if( ! context[16] )
        continue;
      context[17] = refalrts::char_left( 'T', context[7], context[8] );
      if( ! context[17] )
        continue;
      context[18] = refalrts::char_left( 'O', context[7], context[8] );
      if( ! context[18] )
        continue;
      context[19] = refalrts::char_left( 'K', context[7], context[8] );
      if( ! context[19] )
        continue;
      context[20] = refalrts::char_left( 'E', context[7], context[8] );
      if( ! context[20] )
        continue;
      context[21] = refalrts::char_left( 'N', context[7], context[8] );
      if( ! context[21] )
        continue;
      context[22] = refalrts::char_left( 'S', context[7], context[8] );
      if( ! context[22] )
        continue;
      if( ! refalrts::empty_seq( context[7], context[8] ) )
        continue;
      // closed e.Description#1 as range 31(2)

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
      //RESULT: Tile{ [[ } </23 & Fetch/24 (/25 Tile{ AsIs: </0 Reuse: & Length-T/4 AsIs: e.LinesBefore#1/5 AsIs: (/9 AsIs: '/'/11 AsIs: '*'/12 AsIs: 'G'/13 AsIs: 'E'/14 AsIs: 'N'/15 AsIs: ':'/16 AsIs: 'T'/17 AsIs: 'O'/18 AsIs: 'K'/19 AsIs: 'E'/20 AsIs: 'N'/21 AsIs: 'S'/22 AsIs: )/10 } >/26 )/27 Tile{ AsIs: e.Description#1/31(2) } & GenCode$1\1/28 Tile{ AsIs: >/1 ]] }
      if( ! refalrts::alloc_open_call( context[23] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[24], Fetch, "Fetch" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[25] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[26] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[27] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[28], gen_GenCode_S1L1, "GenCode$1\\1" ) )
        return refalrts::cNoMemory;
      refalrts::update_name( context[4], Length_T, "Length-T" );
      refalrts::push_stack( context[1] );
      refalrts::push_stack( context[23] );
      refalrts::link_brackets( context[25], context[27] );
      refalrts::push_stack( context[26] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[9], context[10] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[28], context[28] );
      res = refalrts::splice_evar( res, context[31], context[32] );
      res = refalrts::splice_evar( res, context[26], context[27] );
      res = refalrts::splice_evar( res, context[0], context[10] );
      res = refalrts::splice_evar( res, context[23], context[25] );
      refalrts::use( res );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[5], context[6], context[29], context[30] ) );
  } while ( 0 );

  // e.idx
  // </0 & GenCode/4 e.Other#1/2 >/1
  // closed e.Other#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  e.Other#1/2 {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Error/4 }"Lexer description not found"/5 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_chars( context[5], context[6], "Lexer description not found", 27 ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], Error, "Error" );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[4], res );
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
    // </0 & GenerateFromDFA/4 e.Elements#1/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    // closed e.Elements#1 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } </5 & GenerateAutomat/6 </7 & ResolvingSets/8 Tile{ AsIs: </0 Reuse: & Separate/4 AsIs: e.Elements#1/2 AsIs: >/1 } >/9 >/10 Tile{ ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 5},
    {refalrts::icAllocFunc, 0, 2, 6},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 7},
    {refalrts::icAllocFunc, 0, 1, 8},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 9},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 10},
    {refalrts::icUpdateFunc, 0, 0, 4},
    {refalrts::icPushStack, 0, 0, 10},
    {refalrts::icPushStack, 0, 0, 5},
    {refalrts::icPushStack, 0, 0, 9},
    {refalrts::icPushStack, 0, 0, 7},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 9, 10, 0},
    {refalrts::icSpliceTile, 0, 1, 0},
    {refalrts::icSpliceTile, 5, 8, 0},
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
  // </0 & GenerateFromDFA/4 e.Elements#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Elements#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } </5 & GenerateAutomat/6 </7 & ResolvingSets/8 Tile{ AsIs: </0 Reuse: & Separate/4 AsIs: e.Elements#1/2 AsIs: >/1 } >/9 >/10 Tile{ ]] }
  if( ! refalrts::alloc_open_call( context[5] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[6], GenerateAutomat, "GenerateAutomat" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[8], ResolvingSets, "ResolvingSets" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[10] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], Separate, "Separate" );
  refalrts::push_stack( context[10] );
  refalrts::push_stack( context[5] );
  refalrts::push_stack( context[9] );
  refalrts::push_stack( context[7] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[5], context[8] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult SeparateOne(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 26 elems
  refalrts::Iter context[26];
  refalrts::zeros( context, 26 );
#ifdef INTERPRET
  using refalrts::functions;
  static const refalrts::RefalIdentifier idents[] = {
    & ident_Sentence<int>::name,
    & ident_Set<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    //FAST GEN: ( ( e.$ ) ( e.$ ) ) ( s.$ ( e.$ ) e.$ )
    //GLOBAL GEN: ( ( e.$ ) ( e.$ ) ) ( s.$ ( e.$ ) e.$ )
    // </0 & SeparateOne/4 (/7 (/11 e.idxBB#0/9 )/12 (/15 e.idxBTB#0/13 )/16 )/8 (/19 s.idxTB#0/21 (/24 e.idxTBVB#0/22 )/25 e.idxTBVT#0/17 )/20 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icBracketLeftSave, 0, 5, 2},
    {refalrts::icBracketLeftSave, 0, 9, 5},
    {refalrts::icBracketLeftSave, 0, 13, 5},
    {refalrts::icBracketLeftSave, 0, 17, 2},
    {refalrts::icEmpty, 0, 0, 5},
    {refalrts::icEmpty, 0, 0, 2},
    // closed e.idxBB#0 as range 9
    // closed e.idxBTB#0 as range 13
    {refalrts::icsVarLeft, 0, 21, 17},
    {refalrts::icBracketLeftSave, 0, 22, 17},
    // closed e.idxTBVB#0 as range 22
    // closed e.idxTBVT#0 as range 17
    {refalrts::icOnFailGoTo, +16, 0, 0},
    // ( ( e.idx ) ( e.idx ) ) ( # Set ( e.idx ) e.idx )
    // </0 & SeparateOne/4 (/7 (/11 e.Sets#1/9 )/12 (/15 e.Rules#1/13 )/16 )/8 (/19 # Set/21 (/24 e.Name#1/22 )/25 e.Content#1/17 )/20 >/1
    {refalrts::icIdentTerm, 0, 1, 21},
    // closed e.Sets#1 as range 9
    // closed e.Rules#1 as range 13
    // closed e.Name#1 as range 22
    // closed e.Content#1 as range 17
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 & SeparateOne/4 {REMOVED TILE}  {REMOVED TILE}  )/12 {REMOVED TILE}  (/19 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: (/11 } Tile{ AsIs: e.Sets#1/9 } Tile{ HalfReuse: (/21 AsIs: (/24 AsIs: e.Name#1/22 AsIs: )/25 AsIs: e.Content#1/17 AsIs: )/20 HalfReuse: )/1 } Tile{ AsIs: (/15 AsIs: e.Rules#1/13 AsIs: )/16 AsIs: )/8 } Tile{ ]] }
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 21},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icLinkBrackets, 15, 16, 0},
    {refalrts::icLinkBrackets, 11, 1, 0},
    {refalrts::icLinkBrackets, 21, 20, 0},
    {refalrts::icLinkBrackets, 24, 25, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 15, 8, 0},
    {refalrts::icSpliceTile, 21, 1, 0},
    {refalrts::icSpliceEVar, 0, 0, 9},
    {refalrts::icSpliceTile, 7, 11, 0},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    // ( ( e.idx ) ( e.idx ) ) ( # Sentence ( e.idx ) e.idx )
    // </0 & SeparateOne/4 (/7 (/11 e.Sets#1/9 )/12 (/15 e.Rules#1/13 )/16 )/8 (/19 # Sentence/21 (/24 e.Name#1/22 )/25 e.Content#1/17 )/20 >/1
    {refalrts::icIdentTerm, 0, 0, 21},
    // closed e.Sets#1 as range 9
    // closed e.Rules#1 as range 13
    // closed e.Name#1 as range 22
    // closed e.Content#1 as range 17
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 & SeparateOne/4 {REMOVED TILE}  (/19 # Sentence/21 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: (/11 AsIs: e.Sets#1/9 AsIs: )/12 AsIs: (/15 AsIs: e.Rules#1/13 HalfReuse: (/16 HalfReuse: (/8 } Tile{ AsIs: e.Name#1/22 } Tile{ AsIs: )/25 AsIs: e.Content#1/17 AsIs: )/20 HalfReuse: )/1 } Tile{ HalfReuse: )/24 } Tile{ ]] }
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 16},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 24},
    {refalrts::icLinkBrackets, 7, 24, 0},
    {refalrts::icLinkBrackets, 15, 1, 0},
    {refalrts::icLinkBrackets, 16, 20, 0},
    {refalrts::icLinkBrackets, 8, 25, 0},
    {refalrts::icLinkBrackets, 11, 12, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 24, 24, 0},
    {refalrts::icSpliceTile, 25, 1, 0},
    {refalrts::icSpliceEVar, 0, 0, 22},
    {refalrts::icSpliceTile, 7, 8, 0},
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
  //FAST GEN: ( ( e.$ ) ( e.$ ) ) ( s.$ ( e.$ ) e.$ )
  //GLOBAL GEN: ( ( e.$ ) ( e.$ ) ) ( s.$ ( e.$ ) e.$ )
  // </0 & SeparateOne/4 (/7 (/11 e.idxBB#0/9 )/12 (/15 e.idxBTB#0/13 )/16 )/8 (/19 s.idxTB#0/21 (/24 e.idxTBVB#0/22 )/25 e.idxTBVT#0/17 )/20 >/1
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
  context[15] = refalrts::brackets_left( context[13], context[14], context[5], context[6] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[15], context[16]);
  context[17] = 0;
  context[18] = 0;
  context[19] = refalrts::brackets_left( context[17], context[18], context[2], context[3] );
  if( ! context[19] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[19], context[20]);
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.idxBB#0 as range 9
  // closed e.idxBTB#0 as range 13
  if( ! refalrts::svar_left( context[21], context[17], context[18] ) )
    return refalrts::cRecognitionImpossible;
  context[22] = 0;
  context[23] = 0;
  context[24] = refalrts::brackets_left( context[22], context[23], context[17], context[18] );
  if( ! context[24] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[24], context[25]);
  // closed e.idxTBVB#0 as range 22
  // closed e.idxTBVT#0 as range 17
  do {
    refalrts::start_sentence();
    // ( ( e.idx ) ( e.idx ) ) ( # Set ( e.idx ) e.idx )
    // </0 & SeparateOne/4 (/7 (/11 e.Sets#1/9 )/12 (/15 e.Rules#1/13 )/16 )/8 (/19 # Set/21 (/24 e.Name#1/22 )/25 e.Content#1/17 )/20 >/1
    if( ! refalrts::ident_term(  & ident_Set<int>::name, context[21] ) )
      continue;
    // closed e.Sets#1 as range 9
    // closed e.Rules#1 as range 13
    // closed e.Name#1 as range 22
    // closed e.Content#1 as range 17

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & SeparateOne/4 {REMOVED TILE}  {REMOVED TILE}  )/12 {REMOVED TILE}  (/19 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: (/11 } Tile{ AsIs: e.Sets#1/9 } Tile{ HalfReuse: (/21 AsIs: (/24 AsIs: e.Name#1/22 AsIs: )/25 AsIs: e.Content#1/17 AsIs: )/20 HalfReuse: )/1 } Tile{ AsIs: (/15 AsIs: e.Rules#1/13 AsIs: )/16 AsIs: )/8 } Tile{ ]] }
    refalrts::reinit_open_bracket( context[21] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[15], context[16] );
    refalrts::link_brackets( context[11], context[1] );
    refalrts::link_brackets( context[21], context[20] );
    refalrts::link_brackets( context[24], context[25] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[15], context[8] );
    res = refalrts::splice_evar( res, context[21], context[1] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[7], context[11] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  // ( ( e.idx ) ( e.idx ) ) ( # Sentence ( e.idx ) e.idx )
  // </0 & SeparateOne/4 (/7 (/11 e.Sets#1/9 )/12 (/15 e.Rules#1/13 )/16 )/8 (/19 # Sentence/21 (/24 e.Name#1/22 )/25 e.Content#1/17 )/20 >/1
  if( ! refalrts::ident_term(  & ident_Sentence<int>::name, context[21] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Sets#1 as range 9
  // closed e.Rules#1 as range 13
  // closed e.Name#1 as range 22
  // closed e.Content#1 as range 17

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  </0 & SeparateOne/4 {REMOVED TILE}  (/19 # Sentence/21 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: (/11 AsIs: e.Sets#1/9 AsIs: )/12 AsIs: (/15 AsIs: e.Rules#1/13 HalfReuse: (/16 HalfReuse: (/8 } Tile{ AsIs: e.Name#1/22 } Tile{ AsIs: )/25 AsIs: e.Content#1/17 AsIs: )/20 HalfReuse: )/1 } Tile{ HalfReuse: )/24 } Tile{ ]] }
  refalrts::reinit_open_bracket( context[16] );
  refalrts::reinit_open_bracket( context[8] );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::reinit_close_bracket( context[24] );
  refalrts::link_brackets( context[7], context[24] );
  refalrts::link_brackets( context[15], context[1] );
  refalrts::link_brackets( context[16], context[20] );
  refalrts::link_brackets( context[8], context[25] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[24], context[24] );
  res = refalrts::splice_evar( res, context[25], context[1] );
  res = refalrts::splice_evar( res, context[22], context[23] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
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
    // </0 & Separate/4 e.Elements#1/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    // closed e.Elements#1 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } </5 & Reduce/6 & SeparateOne/7 (/8 (/9 )/10 (/11 Tile{ HalfReuse: )/0 HalfReuse: )/4 AsIs: e.Elements#1/2 AsIs: >/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 5},
    {refalrts::icAllocFunc, 0, 1, 6},
    {refalrts::icAllocFunc, 0, 0, 7},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 9},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 10},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 11},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 0},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 4},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 5},
    {refalrts::icLinkBrackets, 8, 4, 0},
    {refalrts::icLinkBrackets, 11, 0, 0},
    {refalrts::icLinkBrackets, 9, 10, 0},
    {refalrts::icSetRes, 0, 0, 0},
    {refalrts::icSpliceTile, 5, 11, 0},
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
  // </0 & Separate/4 e.Elements#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Elements#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } </5 & Reduce/6 & SeparateOne/7 (/8 (/9 )/10 (/11 Tile{ HalfReuse: )/0 HalfReuse: )/4 AsIs: e.Elements#1/2 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[5] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[6], Reduce, "Reduce" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[7], SeparateOne, "SeparateOne" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[11] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_close_bracket( context[0] );
  refalrts::reinit_close_bracket( context[4] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[5] );
  refalrts::link_brackets( context[8], context[4] );
  refalrts::link_brackets( context[11], context[0] );
  refalrts::link_brackets( context[9], context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[11] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult ResolvingSets(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { ResolvingSets_Aux, "ResolvingSets-Aux" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    // </0 & ResolvingSets/4 (/7 (/11 e.Sets#1/9 )/12 (/15 e.Rules#1/13 )/16 )/8 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icBracketLeftSave, 0, 5, 2},
    {refalrts::icBracketLeftSave, 0, 9, 5},
    {refalrts::icBracketLeftSave, 0, 13, 5},
    {refalrts::icEmpty, 0, 0, 5},
    {refalrts::icEmpty, 0, 0, 2},
    // closed e.Sets#1 as range 9
    // closed e.Rules#1 as range 13
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  (/11 {REMOVED TILE}  {REMOVED TILE}  )/8 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: </4 HalfReuse: & ResolvingSets-Aux/7 } Tile{ AsIs: e.Sets#1/9 } Tile{ AsIs: >/1 } Tile{ AsIs: )/12 AsIs: (/15 AsIs: e.Rules#1/13 AsIs: )/16 } Tile{ ]] }
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 0},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 4},
    {refalrts::icReinitFunc, 0, 0, 7},
    {refalrts::icLinkBrackets, 15, 16, 0},
    {refalrts::icLinkBrackets, 0, 12, 0},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 4},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 12, 16, 0},
    {refalrts::icSpliceTile, 1, 1, 0},
    {refalrts::icSpliceEVar, 0, 0, 9},
    {refalrts::icTrash, 0, 0, 7},
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
  // </0 & ResolvingSets/4 (/7 (/11 e.Sets#1/9 )/12 (/15 e.Rules#1/13 )/16 )/8 >/1
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
  context[15] = refalrts::brackets_left( context[13], context[14], context[5], context[6] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[15], context[16]);
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Sets#1 as range 9
  // closed e.Rules#1 as range 13

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  (/11 {REMOVED TILE}  {REMOVED TILE}  )/8 {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: </4 HalfReuse: & ResolvingSets-Aux/7 } Tile{ AsIs: e.Sets#1/9 } Tile{ AsIs: >/1 } Tile{ AsIs: )/12 AsIs: (/15 AsIs: e.Rules#1/13 AsIs: )/16 } Tile{ ]] }
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_open_call( context[4] );
  refalrts::reinit_name( context[7], ResolvingSets_Aux, "ResolvingSets-Aux" );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[0], context[12] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[4] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[12], context[16] );
  res = refalrts::splice_evar( res, context[1], context[1] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[7], res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult NormingSet(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
#ifdef INTERPRET
  using refalrts::functions;
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    //FAST GEN: e.$
    //GLOBAL GEN: e.$
    // </0 & NormingSet/4 e.idx#0/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    // closed e.idx#0 as range 2
    {refalrts::icOnFailGoTo, +20, 0, 0},
    // e.idx
    // </0 & NormingSet/4 e.Set-B#1/5 s.Repeated#1/7 e.Set-M#1/8 s.Repeated#1/10 e.Set-E#1/2 >/1
    {refalrts::icSave, 0, 11, 2},
    {refalrts::icEPrepare, 0, 5, 11},
    {refalrts::icEStart, 0, 5, 11},
    {refalrts::icSave, 0, 13, 11},
    {refalrts::icsVarLeft, 0, 7, 13},
    {refalrts::icEPrepare, 0, 8, 13},
    {refalrts::icEStart, 0, 8, 13},
    {refalrts::icSave, 0, 15, 13},
    {refalrts::icsRepeatLeft, 10, 7, 15},
    // closed e.Set-E#1 as range 15(2)
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  s.Repeated#1/10 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: e.Set-B#1/5 } Tile{ AsIs: </0 AsIs: & NormingSet/4 } Tile{ AsIs: s.Repeated#1/7 } Tile{ AsIs: e.Set-M#1/8 } Tile{ AsIs: e.Set-E#1/15(2) } Tile{ AsIs: >/1 ]] }
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceEVar, 0, 0, 15},
    {refalrts::icSpliceEVar, 0, 0, 8},
    {refalrts::icSpliceTile, 7, 7, 0},
    {refalrts::icSpliceTile, 0, 4, 0},
    {refalrts::icSpliceEVar, 0, 0, 5},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    // e.idx
    // </0 & NormingSet/4 e.Set#1/2 >/1
    // closed e.Set#1 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 & NormingSet/4 {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: e.Set#1/2 } Tile{ ]] }
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceEVar, 0, 0, 2},
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
  //FAST GEN: e.$
  //GLOBAL GEN: e.$
  // </0 & NormingSet/4 e.idx#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.idx#0 as range 2
  do {
    refalrts::start_sentence();
    // e.idx
    // </0 & NormingSet/4 e.Set-B#1/5 s.Repeated#1/7 e.Set-M#1/8 s.Repeated#1/10 e.Set-E#1/2 >/1
    context[11] = context[2];
    context[12] = context[3];
    context[5] = 0;
    context[6] = 0;
    refalrts::start_e_loop();
    do {
      context[13] = context[11];
      context[14] = context[12];
      if( ! refalrts::svar_left( context[7], context[13], context[14] ) )
        continue;
      context[8] = 0;
      context[9] = 0;
      refalrts::start_e_loop();
      do {
        context[15] = context[13];
        context[16] = context[14];
        if( ! refalrts::repeated_stvar_left( context[10], context[7], context[15], context[16] ) )
          continue;
        // closed e.Set-E#1 as range 15(2)

        refalrts::reset_allocator();
        //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  s.Repeated#1/10 {REMOVED TILE}  {REMOVED TILE} 
        //RESULT: Tile{ [[ } Tile{ AsIs: e.Set-B#1/5 } Tile{ AsIs: </0 AsIs: & NormingSet/4 } Tile{ AsIs: s.Repeated#1/7 } Tile{ AsIs: e.Set-M#1/8 } Tile{ AsIs: e.Set-E#1/15(2) } Tile{ AsIs: >/1 ]] }
        refalrts::push_stack( context[1] );
        refalrts::push_stack( context[0] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[15], context[16] );
        res = refalrts::splice_evar( res, context[8], context[9] );
        res = refalrts::splice_evar( res, context[7], context[7] );
        res = refalrts::splice_evar( res, context[0], context[4] );
        res = refalrts::splice_evar( res, context[5], context[6] );
        refalrts::use( res );
        refalrts::splice_to_freelist_open( trash_prev, res );
        return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
      } while ( refalrts::open_evar_advance( context[8], context[9], context[13], context[14] ) );
    } while ( refalrts::open_evar_advance( context[5], context[6], context[11], context[12] ) );
  } while ( 0 );

  // e.idx
  // </0 & NormingSet/4 e.Set#1/2 >/1
  // closed e.Set#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  </0 & NormingSet/4 {REMOVED TILE}  >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Set#1/2 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
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
    // </0 & ResolvingSets-Aux/4 e.Sets#1/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    // closed e.Sets#1 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } </5 & SetSubstitute/6 </7 & SetCheckRecursion/8 Tile{ AsIs: </0 Reuse: & SetPartNormalize/4 AsIs: e.Sets#1/2 AsIs: >/1 } >/9 >/10 Tile{ ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 5},
    {refalrts::icAllocFunc, 0, 2, 6},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 7},
    {refalrts::icAllocFunc, 0, 1, 8},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 9},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 10},
    {refalrts::icUpdateFunc, 0, 0, 4},
    {refalrts::icPushStack, 0, 0, 10},
    {refalrts::icPushStack, 0, 0, 5},
    {refalrts::icPushStack, 0, 0, 9},
    {refalrts::icPushStack, 0, 0, 7},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 9, 10, 0},
    {refalrts::icSpliceTile, 0, 1, 0},
    {refalrts::icSpliceTile, 5, 8, 0},
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
  // </0 & ResolvingSets-Aux/4 e.Sets#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Sets#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } </5 & SetSubstitute/6 </7 & SetCheckRecursion/8 Tile{ AsIs: </0 Reuse: & SetPartNormalize/4 AsIs: e.Sets#1/2 AsIs: >/1 } >/9 >/10 Tile{ ]] }
  if( ! refalrts::alloc_open_call( context[5] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[6], SetSubstitute, "SetSubstitute" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[8], SetCheckRecursion, "SetCheckRecursion" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[10] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], SetPartNormalize, "SetPartNormalize" );
  refalrts::push_stack( context[10] );
  refalrts::push_stack( context[5] );
  refalrts::push_stack( context[9] );
  refalrts::push_stack( context[7] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[5], context[8] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult NormalizeContent(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { NormingSet, "NormingSet" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_Chars<int>::name,
    & ident_Set<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    //FAST GEN: e.$
    //GLOBAL GEN: ( e.$ ) e.$
    // </0 & NormalizeContent/4 (/7 e.idxB#0/5 )/8 e.idxT#0/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icBracketLeftSave, 0, 5, 2},
    // closed e.idxB#0 as range 5
    // closed e.idxT#0 as range 2
    {refalrts::icOnFailGoTo, +18, 0, 0},
    // ( e.idx ) ( # Chars e.idx ) e.idx
    // </0 & NormalizeContent/4 (/7 e.Chars#1/5 )/8 (/11 # Chars/13 e.Symbols#1/9 )/12 e.Tail#1/2 >/1
    {refalrts::icSave, 0, 15, 2},
    {refalrts::icBracketLeftSave, 0, 9, 15},
    {refalrts::icIdentLeftSave, 13, 0, 9},
    // closed e.Chars#1 as range 5
    // closed e.Symbols#1 as range 9
    // closed e.Tail#1 as range 15(2)
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & NormalizeContent/4 AsIs: (/7 } Tile{ HalfReuse: </11 HalfReuse: & NormingSet/13 } Tile{ AsIs: e.Chars#1/5 } Tile{ AsIs: e.Symbols#1/9 } Tile{ HalfReuse: >/8 } Tile{ AsIs: )/12 AsIs: e.Tail#1/15(2) AsIs: >/1 ]] }
    {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 11},
    {refalrts::icReinitFunc, 0, 0, 13},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 8},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 7, 12, 0},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icPushStack, 0, 0, 11},
    {refalrts::icSetRes, 0, 0, 12},
    {refalrts::icSpliceTile, 8, 8, 0},
    {refalrts::icSpliceEVar, 0, 0, 9},
    {refalrts::icSpliceEVar, 0, 0, 5},
    {refalrts::icSpliceTile, 11, 13, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +14, 0, 0},
    // ( e.idx ) ( # Set s.idx e.idx ) e.idx
    // </0 & NormalizeContent/4 (/7 e.Chars#1/5 )/8 (/11 # Set/13 s.LineNumber#1/14 e.Name#1/9 )/12 e.Tail#1/2 >/1
    {refalrts::icSave, 0, 15, 2},
    {refalrts::icBracketLeftSave, 0, 9, 15},
    {refalrts::icIdentLeftSave, 13, 1, 9},
    // closed e.Chars#1 as range 5
    // closed e.Tail#1 as range 15(2)
    {refalrts::icsVarLeft, 0, 14, 9},
    // closed e.Name#1 as range 9
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/11 AsIs: # Set/13 AsIs: s.LineNumber#1/14 AsIs: e.Name#1/9 AsIs: )/12 } Tile{ AsIs: </0 AsIs: & NormalizeContent/4 AsIs: (/7 AsIs: e.Chars#1/5 AsIs: )/8 } Tile{ AsIs: e.Tail#1/15(2) } Tile{ AsIs: >/1 ]] }
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icLinkBrackets, 11, 12, 0},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceEVar, 0, 0, 15},
    {refalrts::icSpliceTile, 0, 8, 0},
    {refalrts::icSpliceTile, 11, 12, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    // ( e.idx )
    // </0 & NormalizeContent/4 (/7 e.Chars#1/5 )/8 >/1
    {refalrts::icEmpty, 0, 0, 2},
    // closed e.Chars#1 as range 5
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 HalfReuse: # Chars/7 AsIs: e.Chars#1/5 AsIs: )/8 } Tile{ ]] }
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 4},
    {refalrts::icReinitIdent, 0, 0, 7},
    {refalrts::icLinkBrackets, 4, 8, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 4, 8, 0},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[2];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  //FAST GEN: e.$
  //GLOBAL GEN: ( e.$ ) e.$
  // </0 & NormalizeContent/4 (/7 e.idxB#0/5 )/8 e.idxT#0/2 >/1
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
  // closed e.idxT#0 as range 2
  do {
    refalrts::start_sentence();
    // ( e.idx ) ( # Chars e.idx ) e.idx
    // </0 & NormalizeContent/4 (/7 e.Chars#1/5 )/8 (/11 # Chars/13 e.Symbols#1/9 )/12 e.Tail#1/2 >/1
    context[15] = context[2];
    context[16] = context[3];
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_left( context[9], context[10], context[15], context[16] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    context[13] = refalrts::ident_left(  & ident_Chars<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    // closed e.Chars#1 as range 5
    // closed e.Symbols#1 as range 9
    // closed e.Tail#1 as range 15(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & NormalizeContent/4 AsIs: (/7 } Tile{ HalfReuse: </11 HalfReuse: & NormingSet/13 } Tile{ AsIs: e.Chars#1/5 } Tile{ AsIs: e.Symbols#1/9 } Tile{ HalfReuse: >/8 } Tile{ AsIs: )/12 AsIs: e.Tail#1/15(2) AsIs: >/1 ]] }
    refalrts::reinit_open_call( context[11] );
    refalrts::reinit_name( context[13], NormingSet, "NormingSet" );
    refalrts::reinit_close_call( context[8] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[12] );
    refalrts::push_stack( context[8] );
    refalrts::push_stack( context[11] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[12];
    res = refalrts::splice_evar( res, context[8], context[8] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[11], context[13] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) ( # Set s.idx e.idx ) e.idx
    // </0 & NormalizeContent/4 (/7 e.Chars#1/5 )/8 (/11 # Set/13 s.LineNumber#1/14 e.Name#1/9 )/12 e.Tail#1/2 >/1
    context[15] = context[2];
    context[16] = context[3];
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_left( context[9], context[10], context[15], context[16] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    context[13] = refalrts::ident_left(  & ident_Set<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    // closed e.Chars#1 as range 5
    // closed e.Tail#1 as range 15(2)
    if( ! refalrts::svar_left( context[14], context[9], context[10] ) )
      continue;
    // closed e.Name#1 as range 9

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/11 AsIs: # Set/13 AsIs: s.LineNumber#1/14 AsIs: e.Name#1/9 AsIs: )/12 } Tile{ AsIs: </0 AsIs: & NormalizeContent/4 AsIs: (/7 AsIs: e.Chars#1/5 AsIs: )/8 } Tile{ AsIs: e.Tail#1/15(2) } Tile{ AsIs: >/1 ]] }
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[0], context[8] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  // ( e.idx )
  // </0 & NormalizeContent/4 (/7 e.Chars#1/5 )/8 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Chars#1 as range 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  </0 {REMOVED TILE}  >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 HalfReuse: # Chars/7 AsIs: e.Chars#1/5 AsIs: )/8 } Tile{ ]] }
  refalrts::reinit_open_bracket( context[4] );
  refalrts::reinit_ident( context[7], & ident_Chars<int>::name );
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

static refalrts::FnResult SetPartNormalizeOne(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
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
    //FAST GEN: ( ( e.$ ) e.$ )
    //GLOBAL GEN: ( ( e.$ ) e.$ )
    // </0 & SetPartNormalizeOne/4 (/7 (/11 e.idxBB#0/9 )/12 e.idxBT#0/5 )/8 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icBracketLeftSave, 0, 5, 2},
    {refalrts::icBracketLeftSave, 0, 9, 5},
    {refalrts::icEmpty, 0, 0, 2},
    // closed e.idxBB#0 as range 9
    // closed e.idxBT#0 as range 5
    {refalrts::icOnFailGoTo, +10, 0, 0},
    // ( ( e.idx ) # Any )
    // </0 & SetPartNormalizeOne/4 (/7 (/11 e.Name#1/9 )/12 # Any/13 )/8 >/1
    {refalrts::icSave, 0, 15, 5},
    {refalrts::icIdentLeftSave, 13, 0, 15},
    {refalrts::icEmpty, 0, 0, 15},
    // closed e.Name#1 as range 9
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 & SetPartNormalizeOne/4 {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: (/11 AsIs: e.Name#1/9 AsIs: )/12 AsIs: # Any/13 AsIs: )/8 } Tile{ ]] }
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icLinkBrackets, 11, 12, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 7, 8, 0},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    // ( ( e.idx ) e.idx )
    // </0 & SetPartNormalizeOne/4 (/7 (/11 e.Name#1/9 )/12 e.Content#1/5 )/8 >/1
    // closed e.Name#1 as range 9
    // closed e.Content#1 as range 5
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: (/11 AsIs: e.Name#1/9 AsIs: )/12 } Tile{ AsIs: </0 Reuse: & NormalizeContent/4 } (/13 )/14 Tile{ AsIs: e.Content#1/5 } Tile{ HalfReuse: >/8 HalfReuse: )/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 13},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 14},
    {refalrts::icUpdateFunc, 0, 0, 4},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 8},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
    {refalrts::icLinkBrackets, 7, 1, 0},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 13, 14, 0},
    {refalrts::icLinkBrackets, 11, 12, 0},
    {refalrts::icSetRes, 0, 0, 8},
    {refalrts::icSpliceEVar, 0, 0, 5},
    {refalrts::icSpliceTile, 13, 14, 0},
    {refalrts::icSpliceTile, 0, 4, 0},
    {refalrts::icSpliceTile, 7, 12, 0},
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
  //FAST GEN: ( ( e.$ ) e.$ )
  //GLOBAL GEN: ( ( e.$ ) e.$ )
  // </0 & SetPartNormalizeOne/4 (/7 (/11 e.idxBB#0/9 )/12 e.idxBT#0/5 )/8 >/1
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
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.idxBB#0 as range 9
  // closed e.idxBT#0 as range 5
  do {
    refalrts::start_sentence();
    // ( ( e.idx ) # Any )
    // </0 & SetPartNormalizeOne/4 (/7 (/11 e.Name#1/9 )/12 # Any/13 )/8 >/1
    context[15] = context[5];
    context[16] = context[6];
    context[13] = refalrts::ident_left(  & ident_Any<int>::name, context[15], context[16] );
    if( ! context[13] )
      continue;
    if( ! refalrts::empty_seq( context[15], context[16] ) )
      continue;
    // closed e.Name#1 as range 9

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & SetPartNormalizeOne/4 {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: (/11 AsIs: e.Name#1/9 AsIs: )/12 AsIs: # Any/13 AsIs: )/8 } Tile{ ]] }
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[7], context[8] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  // ( ( e.idx ) e.idx )
  // </0 & SetPartNormalizeOne/4 (/7 (/11 e.Name#1/9 )/12 e.Content#1/5 )/8 >/1
  // closed e.Name#1 as range 9
  // closed e.Content#1 as range 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: (/11 AsIs: e.Name#1/9 AsIs: )/12 } Tile{ AsIs: </0 Reuse: & NormalizeContent/4 } (/13 )/14 Tile{ AsIs: e.Content#1/5 } Tile{ HalfReuse: >/8 HalfReuse: )/1 ]] }
  if( ! refalrts::alloc_open_bracket( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[14] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], NormalizeContent, "NormalizeContent" );
  refalrts::reinit_close_call( context[8] );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[7], context[1] );
  refalrts::push_stack( context[8] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[13], context[14] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[0], context[4] );
  res = refalrts::splice_evar( res, context[7], context[12] );
  refalrts::use( res );
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
    // </0 & SetPartNormalize/4 e.Sets#1/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    // closed e.Sets#1 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Map/0 Reuse: & SetPartNormalizeOne/4 AsIs: e.Sets#1/2 AsIs: >/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 5},
    {refalrts::icReinitFunc, 0, 1, 0},
    {refalrts::icUpdateFunc, 0, 0, 4},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 5},
    {refalrts::icSetRes, 0, 0, 0},
    {refalrts::icSpliceTile, 5, 5, 0},
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
  // </0 & SetPartNormalize/4 e.Sets#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Sets#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Map/0 Reuse: & SetPartNormalizeOne/4 AsIs: e.Sets#1/2 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[5] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_name( context[0], Map, "Map" );
  refalrts::update_name( context[4], SetPartNormalizeOne, "SetPartNormalizeOne" );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[5] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult SetCheckRecursion(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 36 elems
  refalrts::Iter context[36];
  refalrts::zeros( context, 36 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { WarningAt, "WarningAt" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_Set<int>::name
  };
  using refalrts::numbers;
  static const refalrts::StringItem strings[] = {
    {"sive depended set ", 18},
    {"Recu", 4}
  };
  static const refalrts::RASLCommand raa[] = {
    //FAST GEN: e.$
    //GLOBAL GEN: e.$
    // </0 & SetCheckRecursion/4 e.idx#0/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    // closed e.idx#0 as range 2
    {refalrts::icOnFailGoTo, +38, 0, 0},
    // e.idx
    // </0 & SetCheckRecursion/4 e.Sets-B#1/5 (/9 (/13 e.Name#1/11 )/14 e.Content-B#1/15 (/19 # Set/21 s.LineNumber#1/24 e.Name#1/22 )/20 e.Content-E#1/7 )/10 e.Sets-E#1/2 >/1
    {refalrts::icSave, 0, 30, 2},
    {refalrts::icEPrepare, 0, 5, 30},
    {refalrts::icEStart, 0, 5, 30},
    {refalrts::icSave, 0, 32, 30},
    {refalrts::icBracketLeftSave, 0, 7, 32},
    {refalrts::icBracketLeftSave, 0, 11, 7},
    // closed e.Name#1 as range 11
    // closed e.Sets-E#1 as range 32(2)
    {refalrts::icEPrepare, 0, 15, 7},
    {refalrts::icEStart, 0, 15, 7},
    {refalrts::icSave, 0, 34, 7},
    {refalrts::icBracketLeftSave, 0, 17, 34},
    {refalrts::icIdentLeftSave, 21, 0, 17},
    {refalrts::iceRepeatRight, 22, 11, 17},
    // closed e.Content-E#1 as range 34(7)
    {refalrts::icsVarLeft, 0, 24, 17},
    {refalrts::icEmpty, 0, 0, 17},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </19 HalfReuse: & WarningAt/21 AsIs: s.LineNumber#1/24 }"Recu"/25 Tile{ HalfReuse: 'r'/20 }"sive depended set "/27 Tile{ AsIs: e.Name#1/22 } >/29 Tile{ AsIs: </0 AsIs: & SetCheckRecursion/4 AsIs: e.Sets-B#1/5 AsIs: (/9 AsIs: (/13 AsIs: e.Name#1/11 AsIs: )/14 } Tile{ AsIs: e.Content-B#1/15 } Tile{ AsIs: e.Content-E#1/34(7) } Tile{ AsIs: )/10 AsIs: e.Sets-E#1/32(2) AsIs: >/1 ]] }
    {refalrts::icAllocString, 0, 1, 25},
    {refalrts::icAllocString, 0, 0, 27},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 29},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 19},
    {refalrts::icReinitFunc, 0, 0, 21},
    {refalrts::icReinitChar, 0, 'r', 20},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 9, 10, 0},
    {refalrts::icLinkBrackets, 13, 14, 0},
    {refalrts::icPushStack, 0, 0, 29},
    {refalrts::icPushStack, 0, 0, 19},
    {refalrts::icSetRes, 0, 0, 10},
    {refalrts::icSpliceEVar, 0, 0, 34},
    {refalrts::icSpliceEVar, 0, 0, 15},
    {refalrts::icSpliceTile, 0, 14, 0},
    {refalrts::icSpliceTile, 29, 29, 0},
    {refalrts::icSpliceEVar, 0, 0, 22},
    {refalrts::icSpliceTile, 27, 28, 0},
    {refalrts::icSpliceTile, 20, 20, 0},
    {refalrts::icSpliceTile, 25, 26, 0},
    {refalrts::icSpliceTile, 19, 24, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    // e.idx
    // </0 & SetCheckRecursion/4 e.Sets#1/2 >/1
    // closed e.Sets#1 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 & SetCheckRecursion/4 {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: e.Sets#1/2 } Tile{ ]] }
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceEVar, 0, 0, 2},
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
  //FAST GEN: e.$
  //GLOBAL GEN: e.$
  // </0 & SetCheckRecursion/4 e.idx#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.idx#0 as range 2
  do {
    refalrts::start_sentence();
    // e.idx
    // </0 & SetCheckRecursion/4 e.Sets-B#1/5 (/9 (/13 e.Name#1/11 )/14 e.Content-B#1/15 (/19 # Set/21 s.LineNumber#1/24 e.Name#1/22 )/20 e.Content-E#1/7 )/10 e.Sets-E#1/2 >/1
    context[30] = context[2];
    context[31] = context[3];
    context[5] = 0;
    context[6] = 0;
    refalrts::start_e_loop();
    do {
      context[32] = context[30];
      context[33] = context[31];
      context[7] = 0;
      context[8] = 0;
      context[9] = refalrts::brackets_left( context[7], context[8], context[32], context[33] );
      if( ! context[9] )
        continue;
      refalrts::bracket_pointers(context[9], context[10]);
      context[11] = 0;
      context[12] = 0;
      context[13] = refalrts::brackets_left( context[11], context[12], context[7], context[8] );
      if( ! context[13] )
        continue;
      refalrts::bracket_pointers(context[13], context[14]);
      // closed e.Name#1 as range 11
      // closed e.Sets-E#1 as range 32(2)
      context[15] = 0;
      context[16] = 0;
      refalrts::start_e_loop();
      do {
        context[34] = context[7];
        context[35] = context[8];
        context[17] = 0;
        context[18] = 0;
        context[19] = refalrts::brackets_left( context[17], context[18], context[34], context[35] );
        if( ! context[19] )
          continue;
        refalrts::bracket_pointers(context[19], context[20]);
        context[21] = refalrts::ident_left(  & ident_Set<int>::name, context[17], context[18] );
        if( ! context[21] )
          continue;
        if( ! refalrts::repeated_evar_right( context[22], context[23], context[11], context[12], context[17], context[18] ) )
          continue;
        // closed e.Content-E#1 as range 34(7)
        if( ! refalrts::svar_left( context[24], context[17], context[18] ) )
          continue;
        if( ! refalrts::empty_seq( context[17], context[18] ) )
          continue;

        refalrts::reset_allocator();
        //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
        //RESULT: Tile{ [[ } Tile{ HalfReuse: </19 HalfReuse: & WarningAt/21 AsIs: s.LineNumber#1/24 }"Recu"/25 Tile{ HalfReuse: 'r'/20 }"sive depended set "/27 Tile{ AsIs: e.Name#1/22 } >/29 Tile{ AsIs: </0 AsIs: & SetCheckRecursion/4 AsIs: e.Sets-B#1/5 AsIs: (/9 AsIs: (/13 AsIs: e.Name#1/11 AsIs: )/14 } Tile{ AsIs: e.Content-B#1/15 } Tile{ AsIs: e.Content-E#1/34(7) } Tile{ AsIs: )/10 AsIs: e.Sets-E#1/32(2) AsIs: >/1 ]] }
        if( ! refalrts::alloc_chars( context[25], context[26], "Recu", 4 ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_chars( context[27], context[28], "sive depended set ", 18 ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_call( context[29] ) )
          return refalrts::cNoMemory;
        refalrts::reinit_open_call( context[19] );
        refalrts::reinit_name( context[21], WarningAt, "WarningAt" );
        refalrts::reinit_char( context[20], 'r' );
        refalrts::push_stack( context[1] );
        refalrts::push_stack( context[0] );
        refalrts::link_brackets( context[9], context[10] );
        refalrts::link_brackets( context[13], context[14] );
        refalrts::push_stack( context[29] );
        refalrts::push_stack( context[19] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[10];
        res = refalrts::splice_evar( res, context[34], context[35] );
        res = refalrts::splice_evar( res, context[15], context[16] );
        res = refalrts::splice_evar( res, context[0], context[14] );
        res = refalrts::splice_evar( res, context[29], context[29] );
        res = refalrts::splice_evar( res, context[22], context[23] );
        res = refalrts::splice_evar( res, context[27], context[28] );
        res = refalrts::splice_evar( res, context[20], context[20] );
        res = refalrts::splice_evar( res, context[25], context[26] );
        res = refalrts::splice_evar( res, context[19], context[24] );
        refalrts::use( res );
        return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
      } while ( refalrts::open_evar_advance( context[15], context[16], context[7], context[8] ) );
    } while ( refalrts::open_evar_advance( context[5], context[6], context[30], context[31] ) );
  } while ( 0 );

  // e.idx
  // </0 & SetCheckRecursion/4 e.Sets#1/2 >/1
  // closed e.Sets#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  </0 & SetCheckRecursion/4 {REMOVED TILE}  >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Sets#1/2 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult SetSubstitute(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 48 elems
  refalrts::Iter context[48];
  refalrts::zeros( context, 48 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { ErrorAt, "ErrorAt" },
    { ResolvingSets_Aux, "ResolvingSets-Aux" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_Set<int>::name,
    & ident_Any<int>::name
  };
  using refalrts::numbers;
  static const refalrts::StringItem strings[] = {
    {"t defined", 9}
  };
  static const refalrts::RASLCommand raa[] = {
    //FAST GEN: e.$
    //GLOBAL GEN: e.$
    // </0 & SetSubstitute/4 e.idx#0/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    // closed e.idx#0 as range 2
    {refalrts::icOnFailGoTo, +27, 0, 0},
    // e.idx
    // </0 & SetSubstitute/4 e.Sets-B#1/5 (/9 (/13 e.Name#1/11 )/14 e.Content-B#1/15 (/19 # Set/21 t.SrcPos#1/25 'A'/24 'n'/23 'y'/22 )/20 e.Content-E#1/7 )/10 e.Sets-E#1/2 >/1
    {refalrts::icSave, 0, 38, 2},
    {refalrts::icEPrepare, 0, 5, 38},
    {refalrts::icEStart, 0, 5, 38},
    {refalrts::icSave, 0, 40, 38},
    {refalrts::icBracketLeftSave, 0, 7, 40},
    {refalrts::icBracketLeftSave, 0, 11, 7},
    // closed e.Name#1 as range 11
    // closed e.Sets-E#1 as range 40(2)
    {refalrts::icEPrepare, 0, 15, 7},
    {refalrts::icEStart, 0, 15, 7},
    {refalrts::icSave, 0, 42, 7},
    {refalrts::icBracketLeftSave, 0, 17, 42},
    {refalrts::icIdentLeftSave, 21, 0, 17},
    {refalrts::icCharRightSave, 22, static_cast<unsigned char>('y'), 17},
    {refalrts::icCharRightSave, 23, static_cast<unsigned char>('n'), 17},
    {refalrts::icCharRightSave, 24, static_cast<unsigned char>('A'), 17},
    // closed e.Content-E#1 as range 42(7)
    {refalrts::ictVarLeftSave, 0, 25, 17},
    {refalrts::icEmpty, 0, 0, 17},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  e.Content-B#1/15 (/19 {REMOVED TILE}  t.SrcPos#1/25 'A'/24 'n'/23 'y'/22 )/20 e.Content-E#1/42(7) {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ResolvingSets-Aux/4 AsIs: e.Sets-B#1/5 AsIs: (/9 AsIs: (/13 AsIs: e.Name#1/11 AsIs: )/14 } Tile{ Reuse: # Any/21 } Tile{ AsIs: )/10 AsIs: e.Sets-E#1/40(2) AsIs: >/1 ]] }
    {refalrts::icUpdateFunc, 0, 1, 4},
    {refalrts::icUpdateIdent, 0, 1, 21},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 9, 10, 0},
    {refalrts::icLinkBrackets, 13, 14, 0},
    {refalrts::icSetRes, 0, 0, 10},
    {refalrts::icSpliceTile, 21, 21, 0},
    {refalrts::icTrash, 0, 0, 14},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +35, 0, 0},
    // e.idx
    // </0 & SetSubstitute/4 e.Sets-B#1/5 (/9 (/13 e.Name#1/11 )/14 e.Content-B#1/15 (/19 # Set/21 t.SrcPos#1/22 e.IncName#1/17 )/20 e.Content-E#1/7 )/10 e.Sets-M#1/24 (/28 (/32 e.IncName#1/34 )/33 e.IncContent#1/26 )/29 e.Sets-E#1/2 >/1
    {refalrts::icSave, 0, 38, 2},
    {refalrts::icEPrepare, 0, 5, 38},
    {refalrts::icEStart, 0, 5, 38},
    {refalrts::icSave, 0, 40, 38},
    {refalrts::icBracketLeftSave, 0, 7, 40},
    {refalrts::icBracketLeftSave, 0, 11, 7},
    // closed e.Name#1 as range 11
    {refalrts::icEPrepare, 0, 15, 7},
    {refalrts::icEStart, 0, 15, 7},
    {refalrts::icSave, 0, 42, 7},
    {refalrts::icBracketLeftSave, 0, 17, 42},
    {refalrts::icIdentLeftSave, 21, 0, 17},
    // closed e.Content-E#1 as range 42(7)
    {refalrts::ictVarLeftSave, 0, 22, 17},
    // closed e.IncName#1 as range 17
    {refalrts::icSave, 0, 44, 40},
    {refalrts::icEPrepare, 0, 24, 44},
    {refalrts::icEStart, 0, 24, 44},
    {refalrts::icSave, 0, 46, 44},
    {refalrts::icBracketLeftSave, 0, 26, 46},
    {refalrts::icBracketLeftSave, 0, 30, 26},
    {refalrts::iceRepeatLeft, 34, 17, 30},
    {refalrts::icEmpty, 0, 0, 30},
    // closed e.IncContent#1 as range 26
    // closed e.Sets-E#1 as range 46(2)
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  (/19 # Set/21 t.SrcPos#1/22 e.IncName#1/17 )/20 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ResolvingSets-Aux/4 AsIs: e.Sets-B#1/5 AsIs: (/9 AsIs: (/13 AsIs: e.Name#1/11 AsIs: )/14 } Tile{ AsIs: e.Content-B#1/15 } e.IncContent#1/26/36 Tile{ AsIs: e.Content-E#1/42(7) } Tile{ AsIs: )/10 AsIs: e.Sets-M#1/24 AsIs: (/28 AsIs: (/32 AsIs: e.IncName#1/34 AsIs: )/33 AsIs: e.IncContent#1/26 AsIs: )/29 AsIs: e.Sets-E#1/46(2) AsIs: >/1 ]] }
    {refalrts::icCopyEVar, 36, 26, 0},
    {refalrts::icUpdateFunc, 0, 1, 4},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 28, 29, 0},
    {refalrts::icLinkBrackets, 32, 33, 0},
    {refalrts::icLinkBrackets, 9, 10, 0},
    {refalrts::icLinkBrackets, 13, 14, 0},
    {refalrts::icSetRes, 0, 0, 10},
    {refalrts::icSpliceEVar, 0, 0, 42},
    {refalrts::icSpliceTile, 36, 37, 0},
    {refalrts::icSpliceEVar, 0, 0, 15},
    {refalrts::icTrash, 0, 0, 14},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +34, 0, 0},
    // e.idx
    // </0 & SetSubstitute/4 e.Sets-B#1/5 (/9 (/13 e.IncName#1/11 )/14 e.IncContent#1/7 )/10 e.Sets-M#1/15 (/19 (/23 e.Name#1/21 )/24 e.Content-B#1/25 (/29 # Set/31 t.SrcPos#1/34 e.IncName#1/32 )/30 e.Content-E#1/17 )/20 e.Sets-E#1/2 >/1
    {refalrts::icSave, 0, 38, 2},
    {refalrts::icEPrepare, 0, 5, 38},
    {refalrts::icEStart, 0, 5, 38},
    {refalrts::icSave, 0, 40, 38},
    {refalrts::icBracketLeftSave, 0, 7, 40},
    {refalrts::icBracketLeftSave, 0, 11, 7},
    // closed e.IncName#1 as range 11
    // closed e.IncContent#1 as range 7
    {refalrts::icEPrepare, 0, 15, 40},
    {refalrts::icEStart, 0, 15, 40},
    {refalrts::icSave, 0, 42, 40},
    {refalrts::icBracketLeftSave, 0, 17, 42},
    {refalrts::icBracketLeftSave, 0, 21, 17},
    // closed e.Name#1 as range 21
    // closed e.Sets-E#1 as range 42(2)
    {refalrts::icEPrepare, 0, 25, 17},
    {refalrts::icEStart, 0, 25, 17},
    {refalrts::icSave, 0, 44, 17},
    {refalrts::icBracketLeftSave, 0, 27, 44},
    {refalrts::icIdentLeftSave, 31, 0, 27},
    {refalrts::iceRepeatRight, 32, 11, 27},
    // closed e.Content-E#1 as range 44(17)
    {refalrts::ictVarLeftSave, 0, 34, 27},
    {refalrts::icEmpty, 0, 0, 27},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  (/29 # Set/31 t.SrcPos#1/34 e.IncName#1/32 )/30 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ResolvingSets-Aux/4 AsIs: e.Sets-B#1/5 AsIs: (/9 AsIs: (/13 AsIs: e.IncName#1/11 AsIs: )/14 AsIs: e.IncContent#1/7 AsIs: )/10 AsIs: e.Sets-M#1/15 AsIs: (/19 AsIs: (/23 AsIs: e.Name#1/21 AsIs: )/24 } Tile{ AsIs: e.Content-B#1/25 } e.IncContent#1/7/36 Tile{ AsIs: e.Content-E#1/44(17) } Tile{ AsIs: )/20 AsIs: e.Sets-E#1/42(2) AsIs: >/1 ]] }
    {refalrts::icCopyEVar, 36, 7, 0},
    {refalrts::icUpdateFunc, 0, 1, 4},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 19, 20, 0},
    {refalrts::icLinkBrackets, 23, 24, 0},
    {refalrts::icLinkBrackets, 9, 10, 0},
    {refalrts::icLinkBrackets, 13, 14, 0},
    {refalrts::icSetRes, 0, 0, 20},
    {refalrts::icSpliceEVar, 0, 0, 44},
    {refalrts::icSpliceTile, 36, 37, 0},
    {refalrts::icSpliceEVar, 0, 0, 25},
    {refalrts::icTrash, 0, 0, 24},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +35, 0, 0},
    // e.idx
    // </0 & SetSubstitute/4 e.Sets-B#1/5 (/9 (/13 e.Name#1/11 )/14 e.Content-B#1/15 (/19 # Set/21 s.LineNumber#1/22 e.IncName#1/17 )/20 e.Content-E#1/7 )/10 e.Sets-E#1/2 >/1
    {refalrts::icSave, 0, 38, 2},
    {refalrts::icEPrepare, 0, 5, 38},
    {refalrts::icEStart, 0, 5, 38},
    {refalrts::icSave, 0, 40, 38},
    {refalrts::icBracketLeftSave, 0, 7, 40},
    {refalrts::icBracketLeftSave, 0, 11, 7},
    // closed e.Name#1 as range 11
    // closed e.Sets-E#1 as range 40(2)
    {refalrts::icEPrepare, 0, 15, 7},
    {refalrts::icEStart, 0, 15, 7},
    {refalrts::icSave, 0, 42, 7},
    {refalrts::icBracketLeftSave, 0, 17, 42},
    {refalrts::icIdentLeftSave, 21, 0, 17},
    // closed e.Content-E#1 as range 42(7)
    {refalrts::icsVarLeft, 0, 22, 17},
    // closed e.IncName#1 as range 17
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  e.Sets-B#1/5 {REMOVED TILE}  e.Name#1/11 {REMOVED TILE}  e.Content-B#1/15 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  e.Content-E#1/42(7) {REMOVED TILE}  e.Sets-E#1/40(2) {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ErrorAt/4 } Tile{ AsIs: s.LineNumber#1/22 } Tile{ HalfReuse: 's'/9 HalfReuse: 'e'/13 } Tile{ HalfReuse: 't'/19 HalfReuse: ' '/21 } Tile{ AsIs: e.IncName#1/17 } Tile{ HalfReuse: ' '/10 } Tile{ HalfReuse: 'n'/20 } Tile{ HalfReuse: 'o'/14 }"t defined"/23 Tile{ AsIs: >/1 ]] }
    {refalrts::icAllocString, 0, 0, 23},
    {refalrts::icUpdateFunc, 0, 0, 4},
    {refalrts::icReinitChar, 0, 's', 9},
    {refalrts::icReinitChar, 0, 'e', 13},
    {refalrts::icReinitChar, 0, 't', 19},
    {refalrts::icReinitChar, 0, ' ', 21},
    {refalrts::icReinitChar, 0, ' ', 10},
    {refalrts::icReinitChar, 0, 'n', 20},
    {refalrts::icReinitChar, 0, 'o', 14},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceTile, 23, 24, 0},
    {refalrts::icSpliceTile, 14, 14, 0},
    {refalrts::icSpliceTile, 20, 20, 0},
    {refalrts::icSpliceTile, 10, 10, 0},
    {refalrts::icSpliceEVar, 0, 0, 17},
    {refalrts::icSpliceTile, 19, 21, 0},
    {refalrts::icSpliceTile, 9, 13, 0},
    {refalrts::icSpliceTile, 22, 22, 0},
    {refalrts::icTrash, 0, 0, 4},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    // e.idx
    // </0 & SetSubstitute/4 e.Sets#1/2 >/1
    // closed e.Sets#1 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 & SetSubstitute/4 {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: e.Sets#1/2 } Tile{ ]] }
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[14];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  //FAST GEN: e.$
  //GLOBAL GEN: e.$
  // </0 & SetSubstitute/4 e.idx#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.idx#0 as range 2
  do {
    refalrts::start_sentence();
    // e.idx
    // </0 & SetSubstitute/4 e.Sets-B#1/5 (/9 (/13 e.Name#1/11 )/14 e.Content-B#1/15 (/19 # Set/21 t.SrcPos#1/25 'A'/24 'n'/23 'y'/22 )/20 e.Content-E#1/7 )/10 e.Sets-E#1/2 >/1
    context[38] = context[2];
    context[39] = context[3];
    context[5] = 0;
    context[6] = 0;
    refalrts::start_e_loop();
    do {
      context[40] = context[38];
      context[41] = context[39];
      context[7] = 0;
      context[8] = 0;
      context[9] = refalrts::brackets_left( context[7], context[8], context[40], context[41] );
      if( ! context[9] )
        continue;
      refalrts::bracket_pointers(context[9], context[10]);
      context[11] = 0;
      context[12] = 0;
      context[13] = refalrts::brackets_left( context[11], context[12], context[7], context[8] );
      if( ! context[13] )
        continue;
      refalrts::bracket_pointers(context[13], context[14]);
      // closed e.Name#1 as range 11
      // closed e.Sets-E#1 as range 40(2)
      context[15] = 0;
      context[16] = 0;
      refalrts::start_e_loop();
      do {
        context[42] = context[7];
        context[43] = context[8];
        context[17] = 0;
        context[18] = 0;
        context[19] = refalrts::brackets_left( context[17], context[18], context[42], context[43] );
        if( ! context[19] )
          continue;
        refalrts::bracket_pointers(context[19], context[20]);
        context[21] = refalrts::ident_left(  & ident_Set<int>::name, context[17], context[18] );
        if( ! context[21] )
          continue;
        context[22] = refalrts::char_right( 'y', context[17], context[18] );
        if( ! context[22] )
          continue;
        context[23] = refalrts::char_right( 'n', context[17], context[18] );
        if( ! context[23] )
          continue;
        context[24] = refalrts::char_right( 'A', context[17], context[18] );
        if( ! context[24] )
          continue;
        // closed e.Content-E#1 as range 42(7)
        context[26] = refalrts::tvar_left( context[25], context[17], context[18] );
        if( ! context[26] )
          continue;
        if( ! refalrts::empty_seq( context[17], context[18] ) )
          continue;

        refalrts::reset_allocator();
        //TRASH: {REMOVED TILE}  e.Content-B#1/15 (/19 {REMOVED TILE}  t.SrcPos#1/25 'A'/24 'n'/23 'y'/22 )/20 e.Content-E#1/42(7) {REMOVED TILE} 
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & ResolvingSets-Aux/4 AsIs: e.Sets-B#1/5 AsIs: (/9 AsIs: (/13 AsIs: e.Name#1/11 AsIs: )/14 } Tile{ Reuse: # Any/21 } Tile{ AsIs: )/10 AsIs: e.Sets-E#1/40(2) AsIs: >/1 ]] }
        refalrts::update_name( context[4], ResolvingSets_Aux, "ResolvingSets-Aux" );
        refalrts::update_ident( context[21], & ident_Any<int>::name );
        refalrts::push_stack( context[1] );
        refalrts::push_stack( context[0] );
        refalrts::link_brackets( context[9], context[10] );
        refalrts::link_brackets( context[13], context[14] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[10];
        res = refalrts::splice_evar( res, context[21], context[21] );
        refalrts::use( res );
        refalrts::splice_to_freelist_open( context[14], res );
        return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
      } while ( refalrts::open_evar_advance( context[15], context[16], context[7], context[8] ) );
    } while ( refalrts::open_evar_advance( context[5], context[6], context[38], context[39] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // e.idx
    // </0 & SetSubstitute/4 e.Sets-B#1/5 (/9 (/13 e.Name#1/11 )/14 e.Content-B#1/15 (/19 # Set/21 t.SrcPos#1/22 e.IncName#1/17 )/20 e.Content-E#1/7 )/10 e.Sets-M#1/24 (/28 (/32 e.IncName#1/34 )/33 e.IncContent#1/26 )/29 e.Sets-E#1/2 >/1
    context[38] = context[2];
    context[39] = context[3];
    context[5] = 0;
    context[6] = 0;
    refalrts::start_e_loop();
    do {
      context[40] = context[38];
      context[41] = context[39];
      context[7] = 0;
      context[8] = 0;
      context[9] = refalrts::brackets_left( context[7], context[8], context[40], context[41] );
      if( ! context[9] )
        continue;
      refalrts::bracket_pointers(context[9], context[10]);
      context[11] = 0;
      context[12] = 0;
      context[13] = refalrts::brackets_left( context[11], context[12], context[7], context[8] );
      if( ! context[13] )
        continue;
      refalrts::bracket_pointers(context[13], context[14]);
      // closed e.Name#1 as range 11
      context[15] = 0;
      context[16] = 0;
      refalrts::start_e_loop();
      do {
        context[42] = context[7];
        context[43] = context[8];
        context[17] = 0;
        context[18] = 0;
        context[19] = refalrts::brackets_left( context[17], context[18], context[42], context[43] );
        if( ! context[19] )
          continue;
        refalrts::bracket_pointers(context[19], context[20]);
        context[21] = refalrts::ident_left(  & ident_Set<int>::name, context[17], context[18] );
        if( ! context[21] )
          continue;
        // closed e.Content-E#1 as range 42(7)
        context[23] = refalrts::tvar_left( context[22], context[17], context[18] );
        if( ! context[23] )
          continue;
        // closed e.IncName#1 as range 17
        context[44] = context[40];
        context[45] = context[41];
        context[24] = 0;
        context[25] = 0;
        refalrts::start_e_loop();
        do {
          context[46] = context[44];
          context[47] = context[45];
          context[26] = 0;
          context[27] = 0;
          context[28] = refalrts::brackets_left( context[26], context[27], context[46], context[47] );
          if( ! context[28] )
            continue;
          refalrts::bracket_pointers(context[28], context[29]);
          context[30] = 0;
          context[31] = 0;
          context[32] = refalrts::brackets_left( context[30], context[31], context[26], context[27] );
          if( ! context[32] )
            continue;
          refalrts::bracket_pointers(context[32], context[33]);
          if( ! refalrts::repeated_evar_left( context[34], context[35], context[17], context[18], context[30], context[31] ) )
            continue;
          if( ! refalrts::empty_seq( context[30], context[31] ) )
            continue;
          // closed e.IncContent#1 as range 26
          // closed e.Sets-E#1 as range 46(2)

          refalrts::reset_allocator();
          //TRASH: {REMOVED TILE}  {REMOVED TILE}  (/19 # Set/21 t.SrcPos#1/22 e.IncName#1/17 )/20 {REMOVED TILE}  {REMOVED TILE} 
          //RESULT: Tile{ [[ AsIs: </0 Reuse: & ResolvingSets-Aux/4 AsIs: e.Sets-B#1/5 AsIs: (/9 AsIs: (/13 AsIs: e.Name#1/11 AsIs: )/14 } Tile{ AsIs: e.Content-B#1/15 } e.IncContent#1/26/36 Tile{ AsIs: e.Content-E#1/42(7) } Tile{ AsIs: )/10 AsIs: e.Sets-M#1/24 AsIs: (/28 AsIs: (/32 AsIs: e.IncName#1/34 AsIs: )/33 AsIs: e.IncContent#1/26 AsIs: )/29 AsIs: e.Sets-E#1/46(2) AsIs: >/1 ]] }
          if (! refalrts::copy_evar(context[36], context[37], context[26], context[27]))
            return refalrts::cNoMemory;
          refalrts::update_name( context[4], ResolvingSets_Aux, "ResolvingSets-Aux" );
          refalrts::push_stack( context[1] );
          refalrts::push_stack( context[0] );
          refalrts::link_brackets( context[28], context[29] );
          refalrts::link_brackets( context[32], context[33] );
          refalrts::link_brackets( context[9], context[10] );
          refalrts::link_brackets( context[13], context[14] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[10];
          res = refalrts::splice_evar( res, context[42], context[43] );
          res = refalrts::splice_evar( res, context[36], context[37] );
          res = refalrts::splice_evar( res, context[15], context[16] );
          refalrts::use( res );
          refalrts::splice_to_freelist_open( context[14], res );
          return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
        } while ( refalrts::open_evar_advance( context[24], context[25], context[44], context[45] ) );
      } while ( refalrts::open_evar_advance( context[15], context[16], context[7], context[8] ) );
    } while ( refalrts::open_evar_advance( context[5], context[6], context[38], context[39] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // e.idx
    // </0 & SetSubstitute/4 e.Sets-B#1/5 (/9 (/13 e.IncName#1/11 )/14 e.IncContent#1/7 )/10 e.Sets-M#1/15 (/19 (/23 e.Name#1/21 )/24 e.Content-B#1/25 (/29 # Set/31 t.SrcPos#1/34 e.IncName#1/32 )/30 e.Content-E#1/17 )/20 e.Sets-E#1/2 >/1
    context[38] = context[2];
    context[39] = context[3];
    context[5] = 0;
    context[6] = 0;
    refalrts::start_e_loop();
    do {
      context[40] = context[38];
      context[41] = context[39];
      context[7] = 0;
      context[8] = 0;
      context[9] = refalrts::brackets_left( context[7], context[8], context[40], context[41] );
      if( ! context[9] )
        continue;
      refalrts::bracket_pointers(context[9], context[10]);
      context[11] = 0;
      context[12] = 0;
      context[13] = refalrts::brackets_left( context[11], context[12], context[7], context[8] );
      if( ! context[13] )
        continue;
      refalrts::bracket_pointers(context[13], context[14]);
      // closed e.IncName#1 as range 11
      // closed e.IncContent#1 as range 7
      context[15] = 0;
      context[16] = 0;
      refalrts::start_e_loop();
      do {
        context[42] = context[40];
        context[43] = context[41];
        context[17] = 0;
        context[18] = 0;
        context[19] = refalrts::brackets_left( context[17], context[18], context[42], context[43] );
        if( ! context[19] )
          continue;
        refalrts::bracket_pointers(context[19], context[20]);
        context[21] = 0;
        context[22] = 0;
        context[23] = refalrts::brackets_left( context[21], context[22], context[17], context[18] );
        if( ! context[23] )
          continue;
        refalrts::bracket_pointers(context[23], context[24]);
        // closed e.Name#1 as range 21
        // closed e.Sets-E#1 as range 42(2)
        context[25] = 0;
        context[26] = 0;
        refalrts::start_e_loop();
        do {
          context[44] = context[17];
          context[45] = context[18];
          context[27] = 0;
          context[28] = 0;
          context[29] = refalrts::brackets_left( context[27], context[28], context[44], context[45] );
          if( ! context[29] )
            continue;
          refalrts::bracket_pointers(context[29], context[30]);
          context[31] = refalrts::ident_left(  & ident_Set<int>::name, context[27], context[28] );
          if( ! context[31] )
            continue;
          if( ! refalrts::repeated_evar_right( context[32], context[33], context[11], context[12], context[27], context[28] ) )
            continue;
          // closed e.Content-E#1 as range 44(17)
          context[35] = refalrts::tvar_left( context[34], context[27], context[28] );
          if( ! context[35] )
            continue;
          if( ! refalrts::empty_seq( context[27], context[28] ) )
            continue;

          refalrts::reset_allocator();
          //TRASH: {REMOVED TILE}  {REMOVED TILE}  (/29 # Set/31 t.SrcPos#1/34 e.IncName#1/32 )/30 {REMOVED TILE}  {REMOVED TILE} 
          //RESULT: Tile{ [[ AsIs: </0 Reuse: & ResolvingSets-Aux/4 AsIs: e.Sets-B#1/5 AsIs: (/9 AsIs: (/13 AsIs: e.IncName#1/11 AsIs: )/14 AsIs: e.IncContent#1/7 AsIs: )/10 AsIs: e.Sets-M#1/15 AsIs: (/19 AsIs: (/23 AsIs: e.Name#1/21 AsIs: )/24 } Tile{ AsIs: e.Content-B#1/25 } e.IncContent#1/7/36 Tile{ AsIs: e.Content-E#1/44(17) } Tile{ AsIs: )/20 AsIs: e.Sets-E#1/42(2) AsIs: >/1 ]] }
          if (! refalrts::copy_evar(context[36], context[37], context[7], context[8]))
            return refalrts::cNoMemory;
          refalrts::update_name( context[4], ResolvingSets_Aux, "ResolvingSets-Aux" );
          refalrts::push_stack( context[1] );
          refalrts::push_stack( context[0] );
          refalrts::link_brackets( context[19], context[20] );
          refalrts::link_brackets( context[23], context[24] );
          refalrts::link_brackets( context[9], context[10] );
          refalrts::link_brackets( context[13], context[14] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[20];
          res = refalrts::splice_evar( res, context[44], context[45] );
          res = refalrts::splice_evar( res, context[36], context[37] );
          res = refalrts::splice_evar( res, context[25], context[26] );
          refalrts::use( res );
          refalrts::splice_to_freelist_open( context[24], res );
          return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
        } while ( refalrts::open_evar_advance( context[25], context[26], context[17], context[18] ) );
      } while ( refalrts::open_evar_advance( context[15], context[16], context[40], context[41] ) );
    } while ( refalrts::open_evar_advance( context[5], context[6], context[38], context[39] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // e.idx
    // </0 & SetSubstitute/4 e.Sets-B#1/5 (/9 (/13 e.Name#1/11 )/14 e.Content-B#1/15 (/19 # Set/21 s.LineNumber#1/22 e.IncName#1/17 )/20 e.Content-E#1/7 )/10 e.Sets-E#1/2 >/1
    context[38] = context[2];
    context[39] = context[3];
    context[5] = 0;
    context[6] = 0;
    refalrts::start_e_loop();
    do {
      context[40] = context[38];
      context[41] = context[39];
      context[7] = 0;
      context[8] = 0;
      context[9] = refalrts::brackets_left( context[7], context[8], context[40], context[41] );
      if( ! context[9] )
        continue;
      refalrts::bracket_pointers(context[9], context[10]);
      context[11] = 0;
      context[12] = 0;
      context[13] = refalrts::brackets_left( context[11], context[12], context[7], context[8] );
      if( ! context[13] )
        continue;
      refalrts::bracket_pointers(context[13], context[14]);
      // closed e.Name#1 as range 11
      // closed e.Sets-E#1 as range 40(2)
      context[15] = 0;
      context[16] = 0;
      refalrts::start_e_loop();
      do {
        context[42] = context[7];
        context[43] = context[8];
        context[17] = 0;
        context[18] = 0;
        context[19] = refalrts::brackets_left( context[17], context[18], context[42], context[43] );
        if( ! context[19] )
          continue;
        refalrts::bracket_pointers(context[19], context[20]);
        context[21] = refalrts::ident_left(  & ident_Set<int>::name, context[17], context[18] );
        if( ! context[21] )
          continue;
        // closed e.Content-E#1 as range 42(7)
        if( ! refalrts::svar_left( context[22], context[17], context[18] ) )
          continue;
        // closed e.IncName#1 as range 17

        refalrts::reset_allocator();
        //TRASH: {REMOVED TILE}  e.Sets-B#1/5 {REMOVED TILE}  e.Name#1/11 {REMOVED TILE}  e.Content-B#1/15 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  e.Content-E#1/42(7) {REMOVED TILE}  e.Sets-E#1/40(2) {REMOVED TILE} 
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & ErrorAt/4 } Tile{ AsIs: s.LineNumber#1/22 } Tile{ HalfReuse: 's'/9 HalfReuse: 'e'/13 } Tile{ HalfReuse: 't'/19 HalfReuse: ' '/21 } Tile{ AsIs: e.IncName#1/17 } Tile{ HalfReuse: ' '/10 } Tile{ HalfReuse: 'n'/20 } Tile{ HalfReuse: 'o'/14 }"t defined"/23 Tile{ AsIs: >/1 ]] }
        if( ! refalrts::alloc_chars( context[23], context[24], "t defined", 9 ) )
          return refalrts::cNoMemory;
        refalrts::update_name( context[4], ErrorAt, "ErrorAt" );
        refalrts::reinit_char( context[9], 's' );
        refalrts::reinit_char( context[13], 'e' );
        refalrts::reinit_char( context[19], 't' );
        refalrts::reinit_char( context[21], ' ' );
        refalrts::reinit_char( context[10], ' ' );
        refalrts::reinit_char( context[20], 'n' );
        refalrts::reinit_char( context[14], 'o' );
        refalrts::push_stack( context[1] );
        refalrts::push_stack( context[0] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[23], context[24] );
        res = refalrts::splice_evar( res, context[14], context[14] );
        res = refalrts::splice_evar( res, context[20], context[20] );
        res = refalrts::splice_evar( res, context[10], context[10] );
        res = refalrts::splice_evar( res, context[17], context[18] );
        res = refalrts::splice_evar( res, context[19], context[21] );
        res = refalrts::splice_evar( res, context[9], context[13] );
        res = refalrts::splice_evar( res, context[22], context[22] );
        refalrts::use( res );
        refalrts::splice_to_freelist_open( context[4], res );
        return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
      } while ( refalrts::open_evar_advance( context[15], context[16], context[7], context[8] ) );
    } while ( refalrts::open_evar_advance( context[5], context[6], context[38], context[39] ) );
  } while ( 0 );

  // e.idx
  // </0 & SetSubstitute/4 e.Sets#1/2 >/1
  // closed e.Sets#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  </0 & SetSubstitute/4 {REMOVED TILE}  >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Sets#1/2 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult SimplifySet(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
#ifdef INTERPRET
  using refalrts::functions;
  static const refalrts::RefalIdentifier idents[] = {
    & ident_NotUsed<int>::name,
    & ident_Chars<int>::name,
    & ident_Any<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    //FAST GEN: ( ( e.$ ) t.$ )
    //GLOBAL GEN: ( ( e.$ ) t.$ )
    // </0 & SimplifySet/4 (/7 (/11 e.idxBB#0/9 )/12 t.idxBT#0/13 )/8 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icBracketLeftSave, 0, 5, 2},
    {refalrts::icBracketLeftSave, 0, 9, 5},
    {refalrts::icEmpty, 0, 0, 2},
    // closed e.idxBB#0 as range 9
    {refalrts::ictVarLeftSave, 0, 13, 5},
    {refalrts::icEmpty, 0, 0, 5},
    {refalrts::icOnFailGoTo, +10, 0, 0},
    // ( ( e.idx ) # Any )
    // </0 & SimplifySet/4 (/7 (/11 e.Name#1/9 )/12 # Any/13 )/8 >/1
    {refalrts::icIdentTerm, 0, 2, 13},
    // closed e.Name#1 as range 9
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 & SimplifySet/4 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: (/11 AsIs: e.Name#1/9 AsIs: )/12 Reuse: # NotUsed/13 HalfReuse: # Any/8 HalfReuse: )/1 ]] }
    {refalrts::icUpdateIdent, 0, 0, 13},
    {refalrts::icReinitIdent, 0, 2, 8},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
    {refalrts::icLinkBrackets, 7, 1, 0},
    {refalrts::icLinkBrackets, 11, 12, 0},
    {refalrts::icSetRes, 0, 0, 7},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    // ( ( e.idx ) ( # Chars e.idx ) )
    // </0 & SimplifySet/4 (/7 (/11 e.Name#1/9 )/12 (/13 # Chars/17 e.Content#1/15 )/14 )/8 >/1
    {refalrts::icBracketTerm, 0, 15, 13},
    {refalrts::icIdentLeftSave, 17, 1, 15},
    // closed e.Name#1 as range 9
    // closed e.Content#1 as range 15
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 & SimplifySet/4 {REMOVED TILE}  )/8 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: (/11 AsIs: e.Name#1/9 AsIs: )/12 HalfReuse: # NotUsed/13 AsIs: # Chars/17 AsIs: e.Content#1/15 AsIs: )/14 } Tile{ ]] }
    {refalrts::icReinitIdent, 0, 0, 13},
    {refalrts::icLinkBrackets, 7, 14, 0},
    {refalrts::icLinkBrackets, 11, 12, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 7, 14, 0},
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
  //FAST GEN: ( ( e.$ ) t.$ )
  //GLOBAL GEN: ( ( e.$ ) t.$ )
  // </0 & SimplifySet/4 (/7 (/11 e.idxBB#0/9 )/12 t.idxBT#0/13 )/8 >/1
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
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.idxBB#0 as range 9
  context[14] = refalrts::tvar_left( context[13], context[5], context[6] );
  if( ! context[14] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  do {
    refalrts::start_sentence();
    // ( ( e.idx ) # Any )
    // </0 & SimplifySet/4 (/7 (/11 e.Name#1/9 )/12 # Any/13 )/8 >/1
    if( ! refalrts::ident_term(  & ident_Any<int>::name, context[13] ) )
      continue;
    // closed e.Name#1 as range 9

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & SimplifySet/4 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: (/11 AsIs: e.Name#1/9 AsIs: )/12 Reuse: # NotUsed/13 HalfReuse: # Any/8 HalfReuse: )/1 ]] }
    refalrts::update_ident( context[13], & ident_NotUsed<int>::name );
    refalrts::reinit_ident( context[8], & ident_Any<int>::name );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[7], context[1] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[7];
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  // ( ( e.idx ) ( # Chars e.idx ) )
  // </0 & SimplifySet/4 (/7 (/11 e.Name#1/9 )/12 (/13 # Chars/17 e.Content#1/15 )/14 )/8 >/1
  context[15] = 0;
  context[16] = 0;
  if( ! refalrts::brackets_term( context[15], context[16], context[13] ) )
    return refalrts::cRecognitionImpossible;
  context[17] = refalrts::ident_left(  & ident_Chars<int>::name, context[15], context[16] );
  if( ! context[17] )
    return refalrts::cRecognitionImpossible;
  // closed e.Name#1 as range 9
  // closed e.Content#1 as range 15

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  </0 & SimplifySet/4 {REMOVED TILE}  )/8 >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: (/11 AsIs: e.Name#1/9 AsIs: )/12 HalfReuse: # NotUsed/13 AsIs: # Chars/17 AsIs: e.Content#1/15 AsIs: )/14 } Tile{ ]] }
  refalrts::reinit_ident( context[13], & ident_NotUsed<int>::name );
  refalrts::link_brackets( context[7], context[14] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[14] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
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
    { SubstituteSetsToRules, "SubstituteSetsToRules" },
    { SimplifySet, "SimplifySet" },
    { Map, "Map" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    // </0 & GenerateAutomat/4 (/7 e.Sets#1/5 )/8 (/11 e.Rules#1/9 )/12 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icBracketLeftSave, 0, 5, 2},
    {refalrts::icBracketLeftSave, 0, 9, 2},
    {refalrts::icEmpty, 0, 0, 2},
    // closed e.Sets#1 as range 5
    // closed e.Rules#1 as range 9
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & SubstituteSetsToRules/4 AsIs: (/7 } </13 & Map/14 & SimplifySet/15 Tile{ AsIs: e.Sets#1/5 } >/16 Tile{ AsIs: )/8 AsIs: (/11 AsIs: e.Rules#1/9 AsIs: )/12 AsIs: >/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 13},
    {refalrts::icAllocFunc, 0, 2, 14},
    {refalrts::icAllocFunc, 0, 1, 15},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 16},
    {refalrts::icUpdateFunc, 0, 0, 4},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 11, 12, 0},
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icPushStack, 0, 0, 16},
    {refalrts::icPushStack, 0, 0, 13},
    {refalrts::icSetRes, 0, 0, 8},
    {refalrts::icSpliceTile, 16, 16, 0},
    {refalrts::icSpliceEVar, 0, 0, 5},
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
  // </0 & GenerateAutomat/4 (/7 e.Sets#1/5 )/8 (/11 e.Rules#1/9 )/12 >/1
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
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Sets#1 as range 5
  // closed e.Rules#1 as range 9

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & SubstituteSetsToRules/4 AsIs: (/7 } </13 & Map/14 & SimplifySet/15 Tile{ AsIs: e.Sets#1/5 } >/16 Tile{ AsIs: )/8 AsIs: (/11 AsIs: e.Rules#1/9 AsIs: )/12 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[14], Map, "Map" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[15], SimplifySet, "SimplifySet" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[16] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], SubstituteSetsToRules, "SubstituteSetsToRules" );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::push_stack( context[16] );
  refalrts::push_stack( context[13] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[16], context[16] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[13], context[15] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult SubstituteSetsToRules(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 63 elems
  refalrts::Iter context[63];
  refalrts::zeros( context, 63 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { GenerateSentences, "GenerateSentences" },
    { ErrorAt, "ErrorAt" }
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
    {"et ", 3}
  };
  static const refalrts::RASLCommand raa[] = {
    //FAST GEN: ( e.$ ) ( e.$ )
    //GLOBAL GEN: ( e.$ ) ( e.$ )
    // </0 & SubstituteSetsToRules/4 (/7 e.idxB#0/5 )/8 (/11 e.idxTB#0/9 )/12 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icBracketLeftSave, 0, 5, 2},
    {refalrts::icBracketLeftSave, 0, 9, 2},
    {refalrts::icEmpty, 0, 0, 2},
    // closed e.idxB#0 as range 5
    // closed e.idxTB#0 as range 9
    {refalrts::icOnFailGoTo, +43, 0, 0},
    // ( ( ( e.idx ) s.idx # Chars e.idx ) e.idx ) ( e.idx )
    // </0 & SubstituteSetsToRules/4 (/7 (/15 (/19 e.Name#1/17 )/20 s.Used#1/21 # Chars/22 e.Content#1/13 )/16 e.Sets#1/5 )/8 (/11 e.Rules-B#1/23 (/27 (/31 e.RuleName#1/29 )/32 e.Alternatives-B#1/33 (/37 (/41 # Set/43 t.SrcPos#1/46 e.Name#1/44 )/42 t.Flush#1/48 t.NextState#1/50 )/38 e.Alternatives-E#1/25 )/28 e.Rules-E#1/9 )/12 >/1
    {refalrts::icSave, 0, 55, 5},
    {refalrts::icBracketLeftSave, 0, 13, 55},
    {refalrts::icBracketLeftSave, 0, 17, 13},
    // closed e.Name#1 as range 17
    // closed e.Sets#1 as range 55(5)
    {refalrts::icsVarLeft, 0, 21, 13},
    {refalrts::icIdentLeftSave, 22, 4, 13},
    // closed e.Content#1 as range 13
    {refalrts::icSave, 0, 57, 9},
    {refalrts::icEPrepare, 0, 23, 57},
    {refalrts::icEStart, 0, 23, 57},
    {refalrts::icSave, 0, 59, 57},
    {refalrts::icBracketLeftSave, 0, 25, 59},
    {refalrts::icBracketLeftSave, 0, 29, 25},
    // closed e.RuleName#1 as range 29
    // closed e.Rules-E#1 as range 59(9)
    {refalrts::icEPrepare, 0, 33, 25},
    {refalrts::icEStart, 0, 33, 25},
    {refalrts::icSave, 0, 61, 25},
    {refalrts::icBracketLeftSave, 0, 35, 61},
    {refalrts::icBracketLeftSave, 0, 39, 35},
    {refalrts::icIdentLeftSave, 43, 0, 39},
    {refalrts::iceRepeatRight, 44, 17, 39},
    // closed e.Alternatives-E#1 as range 61(25)
    {refalrts::ictVarLeftSave, 0, 46, 39},
    {refalrts::icEmpty, 0, 0, 39},
    {refalrts::ictVarLeftSave, 0, 48, 35},
    {refalrts::ictVarLeftSave, 0, 50, 35},
    {refalrts::icEmpty, 0, 0, 35},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  s.Used#1/21 {REMOVED TILE}  t.SrcPos#1/46 e.Name#1/44 {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SubstituteSetsToRules/4 AsIs: (/7 AsIs: (/15 AsIs: (/19 AsIs: e.Name#1/17 AsIs: )/20 } # Used/52 Tile{ AsIs: # Chars/22 AsIs: e.Content#1/13 AsIs: )/16 AsIs: e.Sets#1/55(5) AsIs: )/8 AsIs: (/11 AsIs: e.Rules-B#1/23 AsIs: (/27 AsIs: (/31 AsIs: e.RuleName#1/29 AsIs: )/32 AsIs: e.Alternatives-B#1/33 AsIs: (/37 AsIs: (/41 Reuse: # Chars/43 } e.Content#1/13/53 Tile{ AsIs: )/42 AsIs: t.Flush#1/48 AsIs: t.NextState#1/50 AsIs: )/38 AsIs: e.Alternatives-E#1/61(25) AsIs: )/28 AsIs: e.Rules-E#1/59(9) AsIs: )/12 AsIs: >/1 ]] }
    {refalrts::icAllocIdent, 0, 2, 52},
    {refalrts::icCopyEVar, 53, 13, 0},
    {refalrts::icUpdateIdent, 0, 4, 43},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 11, 12, 0},
    {refalrts::icLinkBrackets, 27, 28, 0},
    {refalrts::icLinkBrackets, 37, 38, 0},
    {refalrts::icLinkBrackets, 41, 42, 0},
    {refalrts::icLinkBrackets, 31, 32, 0},
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icLinkBrackets, 15, 16, 0},
    {refalrts::icLinkBrackets, 19, 20, 0},
    {refalrts::icSetRes, 0, 0, 42},
    {refalrts::icSpliceTile, 53, 54, 0},
    {refalrts::icSpliceTile, 22, 43, 0},
    {refalrts::icSpliceTile, 52, 52, 0},
    {refalrts::icTrash, 0, 0, 20},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +38, 0, 0},
    // ( ( ( e.idx ) s.idx # Any ) e.idx ) ( e.idx )
    // </0 & SubstituteSetsToRules/4 (/7 (/15 (/20 e.Name#1/18 )/21 s.Used#1/22 # Any/17 )/16 e.Sets#1/5 )/8 (/11 e.Rules-B#1/23 (/27 (/31 e.RuleName#1/29 )/32 e.Alternatives-B#1/33 (/37 (/41 # Set/43 t.SrcPos#1/46 e.Name#1/44 )/42 t.Flush#1/48 t.NextState#1/50 )/38 e.Alternatives-E#1/25 )/28 e.Rules-E#1/9 )/12 >/1
    {refalrts::icSave, 0, 55, 5},
    {refalrts::icBracketLeftSave, 0, 13, 55},
    {refalrts::icIdentRightSave, 17, 1, 13},
    {refalrts::icBracketLeftSave, 0, 18, 13},
    // closed e.Name#1 as range 18
    // closed e.Sets#1 as range 55(5)
    {refalrts::icsVarLeft, 0, 22, 13},
    {refalrts::icEmpty, 0, 0, 13},
    {refalrts::icSave, 0, 57, 9},
    {refalrts::icEPrepare, 0, 23, 57},
    {refalrts::icEStart, 0, 23, 57},
    {refalrts::icSave, 0, 59, 57},
    {refalrts::icBracketLeftSave, 0, 25, 59},
    {refalrts::icBracketLeftSave, 0, 29, 25},
    // closed e.RuleName#1 as range 29
    // closed e.Rules-E#1 as range 59(9)
    {refalrts::icEPrepare, 0, 33, 25},
    {refalrts::icEStart, 0, 33, 25},
    {refalrts::icSave, 0, 61, 25},
    {refalrts::icBracketLeftSave, 0, 35, 61},
    {refalrts::icBracketLeftSave, 0, 39, 35},
    {refalrts::icIdentLeftSave, 43, 0, 39},
    {refalrts::iceRepeatRight, 44, 18, 39},
    // closed e.Alternatives-E#1 as range 61(25)
    {refalrts::ictVarLeftSave, 0, 46, 39},
    {refalrts::icEmpty, 0, 0, 39},
    {refalrts::ictVarLeftSave, 0, 48, 35},
    {refalrts::ictVarLeftSave, 0, 50, 35},
    {refalrts::icEmpty, 0, 0, 35},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  # Set/43 t.SrcPos#1/46 e.Name#1/44 )/42 {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SubstituteSetsToRules/4 AsIs: (/7 AsIs: (/15 AsIs: (/20 AsIs: e.Name#1/18 AsIs: )/21 AsIs: s.Used#1/22 AsIs: # Any/17 AsIs: )/16 AsIs: e.Sets#1/55(5) AsIs: )/8 AsIs: (/11 AsIs: e.Rules-B#1/23 AsIs: (/27 AsIs: (/31 AsIs: e.RuleName#1/29 AsIs: )/32 AsIs: e.Alternatives-B#1/33 AsIs: (/37 HalfReuse: # Any/41 } Tile{ AsIs: t.Flush#1/48 AsIs: t.NextState#1/50 AsIs: )/38 AsIs: e.Alternatives-E#1/61(25) AsIs: )/28 AsIs: e.Rules-E#1/59(9) AsIs: )/12 AsIs: >/1 ]] }
    {refalrts::icReinitIdent, 0, 1, 41},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 11, 12, 0},
    {refalrts::icLinkBrackets, 27, 28, 0},
    {refalrts::icLinkBrackets, 37, 38, 0},
    {refalrts::icLinkBrackets, 31, 32, 0},
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icLinkBrackets, 15, 16, 0},
    {refalrts::icLinkBrackets, 20, 21, 0},
    {refalrts::icSetRes, 0, 0, 48},
    {refalrts::icTrash, 0, 0, 41},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +13, 0, 0},
    // ( ( ( e.idx ) # NotUsed e.idx ) e.idx ) ( e.idx )
    // </0 & SubstituteSetsToRules/4 (/7 (/15 (/19 e.Name#1/17 )/20 # NotUsed/21 e.Content#1/13 )/16 e.Sets#1/5 )/8 (/11 e.Rules#1/9 )/12 >/1
    {refalrts::icSave, 0, 55, 5},
    {refalrts::icBracketLeftSave, 0, 13, 55},
    {refalrts::icBracketLeftSave, 0, 17, 13},
    {refalrts::icIdentLeftSave, 21, 3, 13},
    // closed e.Name#1 as range 17
    // closed e.Content#1 as range 13
    // closed e.Sets#1 as range 55(5)
    // closed e.Rules#1 as range 9
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  (/7 (/15 (/19 e.Name#1/17 )/20 # NotUsed/21 e.Content#1/13 {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SubstituteSetsToRules/4 } Tile{ HalfReuse: (/16 AsIs: e.Sets#1/55(5) AsIs: )/8 AsIs: (/11 AsIs: e.Rules#1/9 AsIs: )/12 AsIs: >/1 ]] }
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 16},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 11, 12, 0},
    {refalrts::icLinkBrackets, 16, 8, 0},
    {refalrts::icSetRes, 0, 0, 16},
    {refalrts::icTrash, 0, 0, 4},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +13, 0, 0},
    // ( ( ( e.idx ) # Used e.idx ) e.idx ) ( e.idx )
    // </0 & SubstituteSetsToRules/4 (/7 (/15 (/19 e.Name#1/17 )/20 # Used/21 e.Content#1/13 )/16 e.Sets#1/5 )/8 (/11 e.Rules#1/9 )/12 >/1
    {refalrts::icSave, 0, 55, 5},
    {refalrts::icBracketLeftSave, 0, 13, 55},
    {refalrts::icBracketLeftSave, 0, 17, 13},
    {refalrts::icIdentLeftSave, 21, 2, 13},
    // closed e.Name#1 as range 17
    // closed e.Content#1 as range 13
    // closed e.Sets#1 as range 55(5)
    // closed e.Rules#1 as range 9
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  (/7 (/15 (/19 e.Name#1/17 )/20 # Used/21 e.Content#1/13 {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SubstituteSetsToRules/4 } Tile{ HalfReuse: (/16 AsIs: e.Sets#1/55(5) AsIs: )/8 AsIs: (/11 AsIs: e.Rules#1/9 AsIs: )/12 AsIs: >/1 ]] }
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 16},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 11, 12, 0},
    {refalrts::icLinkBrackets, 16, 8, 0},
    {refalrts::icSetRes, 0, 0, 16},
    {refalrts::icTrash, 0, 0, 4},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +34, 0, 0},
    // ( ) ( e.idx )
    // </0 & SubstituteSetsToRules/4 (/7 )/8 (/11 e.Rules-B#1/13 (/17 (/21 e.RuleName#1/19 )/22 e.Alternatives-B#1/23 (/27 (/31 # Set/33 t.SrcPos#1/37 'A'/36 'n'/35 'y'/34 )/32 t.Flush#1/39 t.NextState#1/41 )/28 e.Alternatives-E#1/15 )/18 e.Rules-E#1/9 )/12 >/1
    {refalrts::icSave, 0, 55, 5},
    {refalrts::icEmpty, 0, 0, 55},
    {refalrts::icSave, 0, 57, 9},
    {refalrts::icEPrepare, 0, 13, 57},
    {refalrts::icEStart, 0, 13, 57},
    {refalrts::icSave, 0, 59, 57},
    {refalrts::icBracketLeftSave, 0, 15, 59},
    {refalrts::icBracketLeftSave, 0, 19, 15},
    // closed e.RuleName#1 as range 19
    // closed e.Rules-E#1 as range 59(9)
    {refalrts::icEPrepare, 0, 23, 15},
    {refalrts::icEStart, 0, 23, 15},
    {refalrts::icSave, 0, 61, 15},
    {refalrts::icBracketLeftSave, 0, 25, 61},
    {refalrts::icBracketLeftSave, 0, 29, 25},
    {refalrts::icIdentLeftSave, 33, 0, 29},
    {refalrts::icCharRightSave, 34, static_cast<unsigned char>('y'), 29},
    {refalrts::icCharRightSave, 35, static_cast<unsigned char>('n'), 29},
    {refalrts::icCharRightSave, 36, static_cast<unsigned char>('A'), 29},
    // closed e.Alternatives-E#1 as range 61(15)
    {refalrts::ictVarLeftSave, 0, 37, 29},
    {refalrts::icEmpty, 0, 0, 29},
    {refalrts::ictVarLeftSave, 0, 39, 25},
    {refalrts::ictVarLeftSave, 0, 41, 25},
    {refalrts::icEmpty, 0, 0, 25},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  # Set/33 t.SrcPos#1/37 'A'/36 'n'/35 'y'/34 )/32 {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SubstituteSetsToRules/4 AsIs: (/7 AsIs: )/8 AsIs: (/11 AsIs: e.Rules-B#1/13 AsIs: (/17 AsIs: (/21 AsIs: e.RuleName#1/19 AsIs: )/22 AsIs: e.Alternatives-B#1/23 AsIs: (/27 HalfReuse: # Any/31 } Tile{ AsIs: t.Flush#1/39 AsIs: t.NextState#1/41 AsIs: )/28 AsIs: e.Alternatives-E#1/61(15) AsIs: )/18 AsIs: e.Rules-E#1/59(9) AsIs: )/12 AsIs: >/1 ]] }
    {refalrts::icReinitIdent, 0, 1, 31},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 11, 12, 0},
    {refalrts::icLinkBrackets, 17, 18, 0},
    {refalrts::icLinkBrackets, 27, 28, 0},
    {refalrts::icLinkBrackets, 21, 22, 0},
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icSetRes, 0, 0, 39},
    {refalrts::icTrash, 0, 0, 31},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +48, 0, 0},
    // ( ) ( e.idx )
    // </0 & SubstituteSetsToRules/4 (/7 )/8 (/11 e.Rules-B#1/13 (/17 (/21 e.RuleName#1/19 )/22 e.Alternatives-B#1/23 (/27 (/31 # Set/33 s.LineNumber#1/34 e.Name#1/29 )/32 t.Flush#1/35 t.NextState#1/37 )/28 e.Alternatives-E#1/15 )/18 e.Rules-E#1/9 )/12 >/1
    {refalrts::icSave, 0, 55, 5},
    {refalrts::icEmpty, 0, 0, 55},
    {refalrts::icSave, 0, 57, 9},
    {refalrts::icEPrepare, 0, 13, 57},
    {refalrts::icEStart, 0, 13, 57},
    {refalrts::icSave, 0, 59, 57},
    {refalrts::icBracketLeftSave, 0, 15, 59},
    {refalrts::icBracketLeftSave, 0, 19, 15},
    // closed e.RuleName#1 as range 19
    // closed e.Rules-E#1 as range 59(9)
    {refalrts::icEPrepare, 0, 23, 15},
    {refalrts::icEStart, 0, 23, 15},
    {refalrts::icSave, 0, 61, 15},
    {refalrts::icBracketLeftSave, 0, 25, 61},
    {refalrts::icBracketLeftSave, 0, 29, 25},
    {refalrts::icIdentLeftSave, 33, 0, 29},
    // closed e.Alternatives-E#1 as range 61(15)
    {refalrts::icsVarLeft, 0, 34, 29},
    // closed e.Name#1 as range 29
    {refalrts::ictVarLeftSave, 0, 35, 25},
    {refalrts::ictVarLeftSave, 0, 37, 25},
    {refalrts::icEmpty, 0, 0, 25},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  e.Rules-B#1/13 {REMOVED TILE}  e.RuleName#1/19 {REMOVED TILE}  e.Alternatives-B#1/23 {REMOVED TILE}  s.LineNumber#1/34 {REMOVED TILE}  {REMOVED TILE}  t.Flush#1/35 t.NextState#1/37 {REMOVED TILE}  e.Alternatives-E#1/61(15) {REMOVED TILE}  e.Rules-E#1/59(9) {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ErrorAt/4 HalfReuse: s.LineNumber1 #34/7 HalfReuse: 'U'/8 HalfReuse: 'n'/11 } Tile{ HalfReuse: 'd'/32 } Tile{ HalfReuse: 'e'/27 HalfReuse: 'c'/31 HalfReuse: 'l'/33 } Tile{ HalfReuse: 'a'/17 HalfReuse: 'r'/21 } Tile{ HalfReuse: 'e'/12 } Tile{ HalfReuse: 'd'/18 } Tile{ HalfReuse: ' '/28 } Tile{ HalfReuse: 's'/22 }"et "/39 Tile{ AsIs: e.Name#1/29 } Tile{ AsIs: >/1 ]] }
    {refalrts::icAllocString, 0, 0, 39},
    {refalrts::icUpdateFunc, 0, 1, 4},
    {refalrts::icReinitSVar, 0, 34, 7},
    {refalrts::icReinitChar, 0, 'U', 8},
    {refalrts::icReinitChar, 0, 'n', 11},
    {refalrts::icReinitChar, 0, 'd', 32},
    {refalrts::icReinitChar, 0, 'e', 27},
    {refalrts::icReinitChar, 0, 'c', 31},
    {refalrts::icReinitChar, 0, 'l', 33},
    {refalrts::icReinitChar, 0, 'a', 17},
    {refalrts::icReinitChar, 0, 'r', 21},
    {refalrts::icReinitChar, 0, 'e', 12},
    {refalrts::icReinitChar, 0, 'd', 18},
    {refalrts::icReinitChar, 0, ' ', 28},
    {refalrts::icReinitChar, 0, 's', 22},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceEVar, 0, 0, 29},
    {refalrts::icSpliceTile, 39, 40, 0},
    {refalrts::icSpliceTile, 22, 22, 0},
    {refalrts::icSpliceTile, 28, 28, 0},
    {refalrts::icSpliceTile, 18, 18, 0},
    {refalrts::icSpliceTile, 12, 12, 0},
    {refalrts::icSpliceTile, 17, 21, 0},
    {refalrts::icSpliceTile, 27, 33, 0},
    {refalrts::icSpliceTile, 32, 32, 0},
    {refalrts::icTrash, 0, 0, 11},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    // ( ) ( e.idx )
    // </0 & SubstituteSetsToRules/4 (/7 )/8 (/11 e.Rules#1/9 )/12 >/1
    {refalrts::icEmpty, 0, 0, 5},
    // closed e.Rules#1 as range 9
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  (/7 )/8 (/11 {REMOVED TILE}  )/12 {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & GenerateSentences/4 } Tile{ AsIs: e.Rules#1/9 } Tile{ AsIs: >/1 ]] }
    {refalrts::icUpdateFunc, 0, 0, 4},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceEVar, 0, 0, 9},
    {refalrts::icTrash, 0, 0, 4},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[14];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  //FAST GEN: ( e.$ ) ( e.$ )
  //GLOBAL GEN: ( e.$ ) ( e.$ )
  // </0 & SubstituteSetsToRules/4 (/7 e.idxB#0/5 )/8 (/11 e.idxTB#0/9 )/12 >/1
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
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.idxB#0 as range 5
  // closed e.idxTB#0 as range 9
  do {
    refalrts::start_sentence();
    // ( ( ( e.idx ) s.idx # Chars e.idx ) e.idx ) ( e.idx )
    // </0 & SubstituteSetsToRules/4 (/7 (/15 (/19 e.Name#1/17 )/20 s.Used#1/21 # Chars/22 e.Content#1/13 )/16 e.Sets#1/5 )/8 (/11 e.Rules-B#1/23 (/27 (/31 e.RuleName#1/29 )/32 e.Alternatives-B#1/33 (/37 (/41 # Set/43 t.SrcPos#1/46 e.Name#1/44 )/42 t.Flush#1/48 t.NextState#1/50 )/38 e.Alternatives-E#1/25 )/28 e.Rules-E#1/9 )/12 >/1
    context[55] = context[5];
    context[56] = context[6];
    context[13] = 0;
    context[14] = 0;
    context[15] = refalrts::brackets_left( context[13], context[14], context[55], context[56] );
    if( ! context[15] )
      continue;
    refalrts::bracket_pointers(context[15], context[16]);
    context[17] = 0;
    context[18] = 0;
    context[19] = refalrts::brackets_left( context[17], context[18], context[13], context[14] );
    if( ! context[19] )
      continue;
    refalrts::bracket_pointers(context[19], context[20]);
    // closed e.Name#1 as range 17
    // closed e.Sets#1 as range 55(5)
    if( ! refalrts::svar_left( context[21], context[13], context[14] ) )
      continue;
    context[22] = refalrts::ident_left(  & ident_Chars<int>::name, context[13], context[14] );
    if( ! context[22] )
      continue;
    // closed e.Content#1 as range 13
    context[57] = context[9];
    context[58] = context[10];
    context[23] = 0;
    context[24] = 0;
    refalrts::start_e_loop();
    do {
      context[59] = context[57];
      context[60] = context[58];
      context[25] = 0;
      context[26] = 0;
      context[27] = refalrts::brackets_left( context[25], context[26], context[59], context[60] );
      if( ! context[27] )
        continue;
      refalrts::bracket_pointers(context[27], context[28]);
      context[29] = 0;
      context[30] = 0;
      context[31] = refalrts::brackets_left( context[29], context[30], context[25], context[26] );
      if( ! context[31] )
        continue;
      refalrts::bracket_pointers(context[31], context[32]);
      // closed e.RuleName#1 as range 29
      // closed e.Rules-E#1 as range 59(9)
      context[33] = 0;
      context[34] = 0;
      refalrts::start_e_loop();
      do {
        context[61] = context[25];
        context[62] = context[26];
        context[35] = 0;
        context[36] = 0;
        context[37] = refalrts::brackets_left( context[35], context[36], context[61], context[62] );
        if( ! context[37] )
          continue;
        refalrts::bracket_pointers(context[37], context[38]);
        context[39] = 0;
        context[40] = 0;
        context[41] = refalrts::brackets_left( context[39], context[40], context[35], context[36] );
        if( ! context[41] )
          continue;
        refalrts::bracket_pointers(context[41], context[42]);
        context[43] = refalrts::ident_left(  & ident_Set<int>::name, context[39], context[40] );
        if( ! context[43] )
          continue;
        if( ! refalrts::repeated_evar_right( context[44], context[45], context[17], context[18], context[39], context[40] ) )
          continue;
        // closed e.Alternatives-E#1 as range 61(25)
        context[47] = refalrts::tvar_left( context[46], context[39], context[40] );
        if( ! context[47] )
          continue;
        if( ! refalrts::empty_seq( context[39], context[40] ) )
          continue;
        context[49] = refalrts::tvar_left( context[48], context[35], context[36] );
        if( ! context[49] )
          continue;
        context[51] = refalrts::tvar_left( context[50], context[35], context[36] );
        if( ! context[51] )
          continue;
        if( ! refalrts::empty_seq( context[35], context[36] ) )
          continue;

        refalrts::reset_allocator();
        //TRASH: {REMOVED TILE}  s.Used#1/21 {REMOVED TILE}  t.SrcPos#1/46 e.Name#1/44 {REMOVED TILE} 
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & SubstituteSetsToRules/4 AsIs: (/7 AsIs: (/15 AsIs: (/19 AsIs: e.Name#1/17 AsIs: )/20 } # Used/52 Tile{ AsIs: # Chars/22 AsIs: e.Content#1/13 AsIs: )/16 AsIs: e.Sets#1/55(5) AsIs: )/8 AsIs: (/11 AsIs: e.Rules-B#1/23 AsIs: (/27 AsIs: (/31 AsIs: e.RuleName#1/29 AsIs: )/32 AsIs: e.Alternatives-B#1/33 AsIs: (/37 AsIs: (/41 Reuse: # Chars/43 } e.Content#1/13/53 Tile{ AsIs: )/42 AsIs: t.Flush#1/48 AsIs: t.NextState#1/50 AsIs: )/38 AsIs: e.Alternatives-E#1/61(25) AsIs: )/28 AsIs: e.Rules-E#1/59(9) AsIs: )/12 AsIs: >/1 ]] }
        if( ! refalrts::alloc_ident( context[52], & ident_Used<int>::name ) )
          return refalrts::cNoMemory;
        if (! refalrts::copy_evar(context[53], context[54], context[13], context[14]))
          return refalrts::cNoMemory;
        refalrts::update_ident( context[43], & ident_Chars<int>::name );
        refalrts::push_stack( context[1] );
        refalrts::push_stack( context[0] );
        refalrts::link_brackets( context[11], context[12] );
        refalrts::link_brackets( context[27], context[28] );
        refalrts::link_brackets( context[37], context[38] );
        refalrts::link_brackets( context[41], context[42] );
        refalrts::link_brackets( context[31], context[32] );
        refalrts::link_brackets( context[7], context[8] );
        refalrts::link_brackets( context[15], context[16] );
        refalrts::link_brackets( context[19], context[20] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[42];
        res = refalrts::splice_evar( res, context[53], context[54] );
        res = refalrts::splice_evar( res, context[22], context[43] );
        res = refalrts::splice_evar( res, context[52], context[52] );
        refalrts::use( res );
        refalrts::splice_to_freelist_open( context[20], res );
        return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
      } while ( refalrts::open_evar_advance( context[33], context[34], context[25], context[26] ) );
    } while ( refalrts::open_evar_advance( context[23], context[24], context[57], context[58] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( ( ( e.idx ) s.idx # Any ) e.idx ) ( e.idx )
    // </0 & SubstituteSetsToRules/4 (/7 (/15 (/20 e.Name#1/18 )/21 s.Used#1/22 # Any/17 )/16 e.Sets#1/5 )/8 (/11 e.Rules-B#1/23 (/27 (/31 e.RuleName#1/29 )/32 e.Alternatives-B#1/33 (/37 (/41 # Set/43 t.SrcPos#1/46 e.Name#1/44 )/42 t.Flush#1/48 t.NextState#1/50 )/38 e.Alternatives-E#1/25 )/28 e.Rules-E#1/9 )/12 >/1
    context[55] = context[5];
    context[56] = context[6];
    context[13] = 0;
    context[14] = 0;
    context[15] = refalrts::brackets_left( context[13], context[14], context[55], context[56] );
    if( ! context[15] )
      continue;
    refalrts::bracket_pointers(context[15], context[16]);
    context[17] = refalrts::ident_right(  & ident_Any<int>::name, context[13], context[14] );
    if( ! context[17] )
      continue;
    context[18] = 0;
    context[19] = 0;
    context[20] = refalrts::brackets_left( context[18], context[19], context[13], context[14] );
    if( ! context[20] )
      continue;
    refalrts::bracket_pointers(context[20], context[21]);
    // closed e.Name#1 as range 18
    // closed e.Sets#1 as range 55(5)
    if( ! refalrts::svar_left( context[22], context[13], context[14] ) )
      continue;
    if( ! refalrts::empty_seq( context[13], context[14] ) )
      continue;
    context[57] = context[9];
    context[58] = context[10];
    context[23] = 0;
    context[24] = 0;
    refalrts::start_e_loop();
    do {
      context[59] = context[57];
      context[60] = context[58];
      context[25] = 0;
      context[26] = 0;
      context[27] = refalrts::brackets_left( context[25], context[26], context[59], context[60] );
      if( ! context[27] )
        continue;
      refalrts::bracket_pointers(context[27], context[28]);
      context[29] = 0;
      context[30] = 0;
      context[31] = refalrts::brackets_left( context[29], context[30], context[25], context[26] );
      if( ! context[31] )
        continue;
      refalrts::bracket_pointers(context[31], context[32]);
      // closed e.RuleName#1 as range 29
      // closed e.Rules-E#1 as range 59(9)
      context[33] = 0;
      context[34] = 0;
      refalrts::start_e_loop();
      do {
        context[61] = context[25];
        context[62] = context[26];
        context[35] = 0;
        context[36] = 0;
        context[37] = refalrts::brackets_left( context[35], context[36], context[61], context[62] );
        if( ! context[37] )
          continue;
        refalrts::bracket_pointers(context[37], context[38]);
        context[39] = 0;
        context[40] = 0;
        context[41] = refalrts::brackets_left( context[39], context[40], context[35], context[36] );
        if( ! context[41] )
          continue;
        refalrts::bracket_pointers(context[41], context[42]);
        context[43] = refalrts::ident_left(  & ident_Set<int>::name, context[39], context[40] );
        if( ! context[43] )
          continue;
        if( ! refalrts::repeated_evar_right( context[44], context[45], context[18], context[19], context[39], context[40] ) )
          continue;
        // closed e.Alternatives-E#1 as range 61(25)
        context[47] = refalrts::tvar_left( context[46], context[39], context[40] );
        if( ! context[47] )
          continue;
        if( ! refalrts::empty_seq( context[39], context[40] ) )
          continue;
        context[49] = refalrts::tvar_left( context[48], context[35], context[36] );
        if( ! context[49] )
          continue;
        context[51] = refalrts::tvar_left( context[50], context[35], context[36] );
        if( ! context[51] )
          continue;
        if( ! refalrts::empty_seq( context[35], context[36] ) )
          continue;

        refalrts::reset_allocator();
        //TRASH: {REMOVED TILE}  # Set/43 t.SrcPos#1/46 e.Name#1/44 )/42 {REMOVED TILE} 
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & SubstituteSetsToRules/4 AsIs: (/7 AsIs: (/15 AsIs: (/20 AsIs: e.Name#1/18 AsIs: )/21 AsIs: s.Used#1/22 AsIs: # Any/17 AsIs: )/16 AsIs: e.Sets#1/55(5) AsIs: )/8 AsIs: (/11 AsIs: e.Rules-B#1/23 AsIs: (/27 AsIs: (/31 AsIs: e.RuleName#1/29 AsIs: )/32 AsIs: e.Alternatives-B#1/33 AsIs: (/37 HalfReuse: # Any/41 } Tile{ AsIs: t.Flush#1/48 AsIs: t.NextState#1/50 AsIs: )/38 AsIs: e.Alternatives-E#1/61(25) AsIs: )/28 AsIs: e.Rules-E#1/59(9) AsIs: )/12 AsIs: >/1 ]] }
        refalrts::reinit_ident( context[41], & ident_Any<int>::name );
        refalrts::push_stack( context[1] );
        refalrts::push_stack( context[0] );
        refalrts::link_brackets( context[11], context[12] );
        refalrts::link_brackets( context[27], context[28] );
        refalrts::link_brackets( context[37], context[38] );
        refalrts::link_brackets( context[31], context[32] );
        refalrts::link_brackets( context[7], context[8] );
        refalrts::link_brackets( context[15], context[16] );
        refalrts::link_brackets( context[20], context[21] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[48];
        refalrts::use( res );
        refalrts::splice_to_freelist_open( context[41], res );
        return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
      } while ( refalrts::open_evar_advance( context[33], context[34], context[25], context[26] ) );
    } while ( refalrts::open_evar_advance( context[23], context[24], context[57], context[58] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( ( ( e.idx ) # NotUsed e.idx ) e.idx ) ( e.idx )
    // </0 & SubstituteSetsToRules/4 (/7 (/15 (/19 e.Name#1/17 )/20 # NotUsed/21 e.Content#1/13 )/16 e.Sets#1/5 )/8 (/11 e.Rules#1/9 )/12 >/1
    context[55] = context[5];
    context[56] = context[6];
    context[13] = 0;
    context[14] = 0;
    context[15] = refalrts::brackets_left( context[13], context[14], context[55], context[56] );
    if( ! context[15] )
      continue;
    refalrts::bracket_pointers(context[15], context[16]);
    context[17] = 0;
    context[18] = 0;
    context[19] = refalrts::brackets_left( context[17], context[18], context[13], context[14] );
    if( ! context[19] )
      continue;
    refalrts::bracket_pointers(context[19], context[20]);
    context[21] = refalrts::ident_left(  & ident_NotUsed<int>::name, context[13], context[14] );
    if( ! context[21] )
      continue;
    // closed e.Name#1 as range 17
    // closed e.Content#1 as range 13
    // closed e.Sets#1 as range 55(5)
    // closed e.Rules#1 as range 9

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  (/7 (/15 (/19 e.Name#1/17 )/20 # NotUsed/21 e.Content#1/13 {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SubstituteSetsToRules/4 } Tile{ HalfReuse: (/16 AsIs: e.Sets#1/55(5) AsIs: )/8 AsIs: (/11 AsIs: e.Rules#1/9 AsIs: )/12 AsIs: >/1 ]] }
    refalrts::reinit_open_bracket( context[16] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[16], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[16];
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( ( ( e.idx ) # Used e.idx ) e.idx ) ( e.idx )
    // </0 & SubstituteSetsToRules/4 (/7 (/15 (/19 e.Name#1/17 )/20 # Used/21 e.Content#1/13 )/16 e.Sets#1/5 )/8 (/11 e.Rules#1/9 )/12 >/1
    context[55] = context[5];
    context[56] = context[6];
    context[13] = 0;
    context[14] = 0;
    context[15] = refalrts::brackets_left( context[13], context[14], context[55], context[56] );
    if( ! context[15] )
      continue;
    refalrts::bracket_pointers(context[15], context[16]);
    context[17] = 0;
    context[18] = 0;
    context[19] = refalrts::brackets_left( context[17], context[18], context[13], context[14] );
    if( ! context[19] )
      continue;
    refalrts::bracket_pointers(context[19], context[20]);
    context[21] = refalrts::ident_left(  & ident_Used<int>::name, context[13], context[14] );
    if( ! context[21] )
      continue;
    // closed e.Name#1 as range 17
    // closed e.Content#1 as range 13
    // closed e.Sets#1 as range 55(5)
    // closed e.Rules#1 as range 9

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  (/7 (/15 (/19 e.Name#1/17 )/20 # Used/21 e.Content#1/13 {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SubstituteSetsToRules/4 } Tile{ HalfReuse: (/16 AsIs: e.Sets#1/55(5) AsIs: )/8 AsIs: (/11 AsIs: e.Rules#1/9 AsIs: )/12 AsIs: >/1 ]] }
    refalrts::reinit_open_bracket( context[16] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[16], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[16];
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( ) ( e.idx )
    // </0 & SubstituteSetsToRules/4 (/7 )/8 (/11 e.Rules-B#1/13 (/17 (/21 e.RuleName#1/19 )/22 e.Alternatives-B#1/23 (/27 (/31 # Set/33 t.SrcPos#1/37 'A'/36 'n'/35 'y'/34 )/32 t.Flush#1/39 t.NextState#1/41 )/28 e.Alternatives-E#1/15 )/18 e.Rules-E#1/9 )/12 >/1
    context[55] = context[5];
    context[56] = context[6];
    if( ! refalrts::empty_seq( context[55], context[56] ) )
      continue;
    context[57] = context[9];
    context[58] = context[10];
    context[13] = 0;
    context[14] = 0;
    refalrts::start_e_loop();
    do {
      context[59] = context[57];
      context[60] = context[58];
      context[15] = 0;
      context[16] = 0;
      context[17] = refalrts::brackets_left( context[15], context[16], context[59], context[60] );
      if( ! context[17] )
        continue;
      refalrts::bracket_pointers(context[17], context[18]);
      context[19] = 0;
      context[20] = 0;
      context[21] = refalrts::brackets_left( context[19], context[20], context[15], context[16] );
      if( ! context[21] )
        continue;
      refalrts::bracket_pointers(context[21], context[22]);
      // closed e.RuleName#1 as range 19
      // closed e.Rules-E#1 as range 59(9)
      context[23] = 0;
      context[24] = 0;
      refalrts::start_e_loop();
      do {
        context[61] = context[15];
        context[62] = context[16];
        context[25] = 0;
        context[26] = 0;
        context[27] = refalrts::brackets_left( context[25], context[26], context[61], context[62] );
        if( ! context[27] )
          continue;
        refalrts::bracket_pointers(context[27], context[28]);
        context[29] = 0;
        context[30] = 0;
        context[31] = refalrts::brackets_left( context[29], context[30], context[25], context[26] );
        if( ! context[31] )
          continue;
        refalrts::bracket_pointers(context[31], context[32]);
        context[33] = refalrts::ident_left(  & ident_Set<int>::name, context[29], context[30] );
        if( ! context[33] )
          continue;
        context[34] = refalrts::char_right( 'y', context[29], context[30] );
        if( ! context[34] )
          continue;
        context[35] = refalrts::char_right( 'n', context[29], context[30] );
        if( ! context[35] )
          continue;
        context[36] = refalrts::char_right( 'A', context[29], context[30] );
        if( ! context[36] )
          continue;
        // closed e.Alternatives-E#1 as range 61(15)
        context[38] = refalrts::tvar_left( context[37], context[29], context[30] );
        if( ! context[38] )
          continue;
        if( ! refalrts::empty_seq( context[29], context[30] ) )
          continue;
        context[40] = refalrts::tvar_left( context[39], context[25], context[26] );
        if( ! context[40] )
          continue;
        context[42] = refalrts::tvar_left( context[41], context[25], context[26] );
        if( ! context[42] )
          continue;
        if( ! refalrts::empty_seq( context[25], context[26] ) )
          continue;

        refalrts::reset_allocator();
        //TRASH: {REMOVED TILE}  # Set/33 t.SrcPos#1/37 'A'/36 'n'/35 'y'/34 )/32 {REMOVED TILE} 
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & SubstituteSetsToRules/4 AsIs: (/7 AsIs: )/8 AsIs: (/11 AsIs: e.Rules-B#1/13 AsIs: (/17 AsIs: (/21 AsIs: e.RuleName#1/19 AsIs: )/22 AsIs: e.Alternatives-B#1/23 AsIs: (/27 HalfReuse: # Any/31 } Tile{ AsIs: t.Flush#1/39 AsIs: t.NextState#1/41 AsIs: )/28 AsIs: e.Alternatives-E#1/61(15) AsIs: )/18 AsIs: e.Rules-E#1/59(9) AsIs: )/12 AsIs: >/1 ]] }
        refalrts::reinit_ident( context[31], & ident_Any<int>::name );
        refalrts::push_stack( context[1] );
        refalrts::push_stack( context[0] );
        refalrts::link_brackets( context[11], context[12] );
        refalrts::link_brackets( context[17], context[18] );
        refalrts::link_brackets( context[27], context[28] );
        refalrts::link_brackets( context[21], context[22] );
        refalrts::link_brackets( context[7], context[8] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[39];
        refalrts::use( res );
        refalrts::splice_to_freelist_open( context[31], res );
        return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
      } while ( refalrts::open_evar_advance( context[23], context[24], context[15], context[16] ) );
    } while ( refalrts::open_evar_advance( context[13], context[14], context[57], context[58] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( ) ( e.idx )
    // </0 & SubstituteSetsToRules/4 (/7 )/8 (/11 e.Rules-B#1/13 (/17 (/21 e.RuleName#1/19 )/22 e.Alternatives-B#1/23 (/27 (/31 # Set/33 s.LineNumber#1/34 e.Name#1/29 )/32 t.Flush#1/35 t.NextState#1/37 )/28 e.Alternatives-E#1/15 )/18 e.Rules-E#1/9 )/12 >/1
    context[55] = context[5];
    context[56] = context[6];
    if( ! refalrts::empty_seq( context[55], context[56] ) )
      continue;
    context[57] = context[9];
    context[58] = context[10];
    context[13] = 0;
    context[14] = 0;
    refalrts::start_e_loop();
    do {
      context[59] = context[57];
      context[60] = context[58];
      context[15] = 0;
      context[16] = 0;
      context[17] = refalrts::brackets_left( context[15], context[16], context[59], context[60] );
      if( ! context[17] )
        continue;
      refalrts::bracket_pointers(context[17], context[18]);
      context[19] = 0;
      context[20] = 0;
      context[21] = refalrts::brackets_left( context[19], context[20], context[15], context[16] );
      if( ! context[21] )
        continue;
      refalrts::bracket_pointers(context[21], context[22]);
      // closed e.RuleName#1 as range 19
      // closed e.Rules-E#1 as range 59(9)
      context[23] = 0;
      context[24] = 0;
      refalrts::start_e_loop();
      do {
        context[61] = context[15];
        context[62] = context[16];
        context[25] = 0;
        context[26] = 0;
        context[27] = refalrts::brackets_left( context[25], context[26], context[61], context[62] );
        if( ! context[27] )
          continue;
        refalrts::bracket_pointers(context[27], context[28]);
        context[29] = 0;
        context[30] = 0;
        context[31] = refalrts::brackets_left( context[29], context[30], context[25], context[26] );
        if( ! context[31] )
          continue;
        refalrts::bracket_pointers(context[31], context[32]);
        context[33] = refalrts::ident_left(  & ident_Set<int>::name, context[29], context[30] );
        if( ! context[33] )
          continue;
        // closed e.Alternatives-E#1 as range 61(15)
        if( ! refalrts::svar_left( context[34], context[29], context[30] ) )
          continue;
        // closed e.Name#1 as range 29
        context[36] = refalrts::tvar_left( context[35], context[25], context[26] );
        if( ! context[36] )
          continue;
        context[38] = refalrts::tvar_left( context[37], context[25], context[26] );
        if( ! context[38] )
          continue;
        if( ! refalrts::empty_seq( context[25], context[26] ) )
          continue;

        refalrts::reset_allocator();
        //TRASH: {REMOVED TILE}  e.Rules-B#1/13 {REMOVED TILE}  e.RuleName#1/19 {REMOVED TILE}  e.Alternatives-B#1/23 {REMOVED TILE}  s.LineNumber#1/34 {REMOVED TILE}  {REMOVED TILE}  t.Flush#1/35 t.NextState#1/37 {REMOVED TILE}  e.Alternatives-E#1/61(15) {REMOVED TILE}  e.Rules-E#1/59(9) {REMOVED TILE}  {REMOVED TILE} 
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & ErrorAt/4 HalfReuse: s.LineNumber1 #34/7 HalfReuse: 'U'/8 HalfReuse: 'n'/11 } Tile{ HalfReuse: 'd'/32 } Tile{ HalfReuse: 'e'/27 HalfReuse: 'c'/31 HalfReuse: 'l'/33 } Tile{ HalfReuse: 'a'/17 HalfReuse: 'r'/21 } Tile{ HalfReuse: 'e'/12 } Tile{ HalfReuse: 'd'/18 } Tile{ HalfReuse: ' '/28 } Tile{ HalfReuse: 's'/22 }"et "/39 Tile{ AsIs: e.Name#1/29 } Tile{ AsIs: >/1 ]] }
        if( ! refalrts::alloc_chars( context[39], context[40], "et ", 3 ) )
          return refalrts::cNoMemory;
        refalrts::update_name( context[4], ErrorAt, "ErrorAt" );
        refalrts::reinit_svar( context[7], context[34] );
        refalrts::reinit_char( context[8], 'U' );
        refalrts::reinit_char( context[11], 'n' );
        refalrts::reinit_char( context[32], 'd' );
        refalrts::reinit_char( context[27], 'e' );
        refalrts::reinit_char( context[31], 'c' );
        refalrts::reinit_char( context[33], 'l' );
        refalrts::reinit_char( context[17], 'a' );
        refalrts::reinit_char( context[21], 'r' );
        refalrts::reinit_char( context[12], 'e' );
        refalrts::reinit_char( context[18], 'd' );
        refalrts::reinit_char( context[28], ' ' );
        refalrts::reinit_char( context[22], 's' );
        refalrts::push_stack( context[1] );
        refalrts::push_stack( context[0] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[29], context[30] );
        res = refalrts::splice_evar( res, context[39], context[40] );
        res = refalrts::splice_evar( res, context[22], context[22] );
        res = refalrts::splice_evar( res, context[28], context[28] );
        res = refalrts::splice_evar( res, context[18], context[18] );
        res = refalrts::splice_evar( res, context[12], context[12] );
        res = refalrts::splice_evar( res, context[17], context[21] );
        res = refalrts::splice_evar( res, context[27], context[33] );
        res = refalrts::splice_evar( res, context[32], context[32] );
        refalrts::use( res );
        refalrts::splice_to_freelist_open( context[11], res );
        return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
      } while ( refalrts::open_evar_advance( context[23], context[24], context[15], context[16] ) );
    } while ( refalrts::open_evar_advance( context[13], context[14], context[57], context[58] ) );
  } while ( 0 );

  // ( ) ( e.idx )
  // </0 & SubstituteSetsToRules/4 (/7 )/8 (/11 e.Rules#1/9 )/12 >/1
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Rules#1 as range 9

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  (/7 )/8 (/11 {REMOVED TILE}  )/12 {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & GenerateSentences/4 } Tile{ AsIs: e.Rules#1/9 } Tile{ AsIs: >/1 ]] }
  refalrts::update_name( context[4], GenerateSentences, "GenerateSentences" );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[4], res );
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
    // </0 & GenerateSentences/4 e.Rules#1/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    // closed e.Rules#1 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } </5 & WriteCode/6 </7 Tile{ HalfReuse: & Map/0 Reuse: & NormalizeRule/4 AsIs: e.Rules#1/2 AsIs: >/1 } >/8 Tile{ ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 5},
    {refalrts::icAllocFunc, 0, 2, 6},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 7},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 8},
    {refalrts::icReinitFunc, 0, 1, 0},
    {refalrts::icUpdateFunc, 0, 0, 4},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icPushStack, 0, 0, 5},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 7},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 8, 8, 0},
    {refalrts::icSpliceTile, 0, 1, 0},
    {refalrts::icSpliceTile, 5, 7, 0},
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
  // </0 & GenerateSentences/4 e.Rules#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Rules#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } </5 & WriteCode/6 </7 Tile{ HalfReuse: & Map/0 Reuse: & NormalizeRule/4 AsIs: e.Rules#1/2 AsIs: >/1 } >/8 Tile{ ]] }
  if( ! refalrts::alloc_open_call( context[5] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[6], WriteCode, "WriteCode" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[8] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_name( context[0], Map, "Map" );
  refalrts::update_name( context[4], NormalizeRule, "NormalizeRule" );
  refalrts::push_stack( context[8] );
  refalrts::push_stack( context[5] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[7] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[5], context[7] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult SetDiff(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 27 elems
  refalrts::Iter context[27];
  refalrts::zeros( context, 27 );
#ifdef INTERPRET
  using refalrts::functions;
  static const refalrts::RefalIdentifier idents[] = {
    & ident_Any<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    //FAST GEN: ( e.$ ) ( e.$ )
    //GLOBAL GEN: ( e.$ ) ( e.$ )
    // </0 & SetDiff/4 (/7 e.idxB#0/5 )/8 (/11 e.idxTB#0/9 )/12 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icBracketLeftSave, 0, 5, 2},
    {refalrts::icBracketLeftSave, 0, 9, 2},
    {refalrts::icEmpty, 0, 0, 2},
    // closed e.idxB#0 as range 5
    // closed e.idxTB#0 as range 9
    {refalrts::icOnFailGoTo, +7, 0, 0},
    // ( e.idx ) ( # Any )
    // </0 & SetDiff/4 (/7 e.Set#1/5 )/8 (/11 # Any/13 )/12 >/1
    {refalrts::icSave, 0, 19, 9},
    {refalrts::icIdentLeftSave, 13, 0, 19},
    {refalrts::icEmpty, 0, 0, 19},
    // closed e.Set#1 as range 5
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 & SetDiff/4 (/7 e.Set#1/5 )/8 (/11 # Any/13 )/12 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ ]] }
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +23, 0, 0},
    // ( e.idx ) ( e.idx )
    // </0 & SetDiff/4 (/7 e.Set1-B#1/13 s.Common#1/15 e.Set1-E#1/5 )/8 (/11 e.Set2-B#1/16 s.Common#1/18 e.Set2-E#1/9 )/12 >/1
    {refalrts::icSave, 0, 19, 5},
    {refalrts::icEPrepare, 0, 13, 19},
    {refalrts::icEStart, 0, 13, 19},
    {refalrts::icSave, 0, 21, 19},
    {refalrts::icsVarLeft, 0, 15, 21},
    // closed e.Set1-E#1 as range 21(5)
    {refalrts::icSave, 0, 23, 9},
    {refalrts::icEPrepare, 0, 16, 23},
    {refalrts::icEStart, 0, 16, 23},
    {refalrts::icSave, 0, 25, 23},
    {refalrts::icsRepeatLeft, 18, 15, 25},
    // closed e.Set2-E#1 as range 25(9)
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  s.Common#1/15 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  s.Common#1/18 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetDiff/4 AsIs: (/7 } Tile{ AsIs: e.Set1-B#1/13 } Tile{ AsIs: e.Set1-E#1/21(5) } Tile{ AsIs: )/8 AsIs: (/11 } Tile{ AsIs: e.Set2-B#1/16 } Tile{ AsIs: e.Set2-E#1/25(9) } Tile{ AsIs: )/12 AsIs: >/1 ]] }
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 11, 12, 0},
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icSetRes, 0, 0, 12},
    {refalrts::icSpliceEVar, 0, 0, 25},
    {refalrts::icSpliceEVar, 0, 0, 16},
    {refalrts::icSpliceTile, 8, 11, 0},
    {refalrts::icSpliceEVar, 0, 0, 21},
    {refalrts::icSpliceEVar, 0, 0, 13},
    {refalrts::icTrash, 0, 0, 7},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    // ( e.idx ) ( e.idx )
    // </0 & SetDiff/4 (/7 e.SetDiff#1/5 )/8 (/11 e.Set2#1/9 )/12 >/1
    // closed e.SetDiff#1 as range 5
    // closed e.Set2#1 as range 9
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 & SetDiff/4 (/7 {REMOVED TILE}  )/8 (/11 e.Set2#1/9 )/12 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: e.SetDiff#1/5 } Tile{ ]] }
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceEVar, 0, 0, 5},
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
  //FAST GEN: ( e.$ ) ( e.$ )
  //GLOBAL GEN: ( e.$ ) ( e.$ )
  // </0 & SetDiff/4 (/7 e.idxB#0/5 )/8 (/11 e.idxTB#0/9 )/12 >/1
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
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.idxB#0 as range 5
  // closed e.idxTB#0 as range 9
  do {
    refalrts::start_sentence();
    // ( e.idx ) ( # Any )
    // </0 & SetDiff/4 (/7 e.Set#1/5 )/8 (/11 # Any/13 )/12 >/1
    context[19] = context[9];
    context[20] = context[10];
    context[13] = refalrts::ident_left(  & ident_Any<int>::name, context[19], context[20] );
    if( ! context[13] )
      continue;
    if( ! refalrts::empty_seq( context[19], context[20] ) )
      continue;
    // closed e.Set#1 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & SetDiff/4 (/7 e.Set#1/5 )/8 (/11 # Any/13 )/12 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) ( e.idx )
    // </0 & SetDiff/4 (/7 e.Set1-B#1/13 s.Common#1/15 e.Set1-E#1/5 )/8 (/11 e.Set2-B#1/16 s.Common#1/18 e.Set2-E#1/9 )/12 >/1
    context[19] = context[5];
    context[20] = context[6];
    context[13] = 0;
    context[14] = 0;
    refalrts::start_e_loop();
    do {
      context[21] = context[19];
      context[22] = context[20];
      if( ! refalrts::svar_left( context[15], context[21], context[22] ) )
        continue;
      // closed e.Set1-E#1 as range 21(5)
      context[23] = context[9];
      context[24] = context[10];
      context[16] = 0;
      context[17] = 0;
      refalrts::start_e_loop();
      do {
        context[25] = context[23];
        context[26] = context[24];
        if( ! refalrts::repeated_stvar_left( context[18], context[15], context[25], context[26] ) )
          continue;
        // closed e.Set2-E#1 as range 25(9)

        refalrts::reset_allocator();
        //TRASH: {REMOVED TILE}  {REMOVED TILE}  s.Common#1/15 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  s.Common#1/18 {REMOVED TILE}  {REMOVED TILE} 
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetDiff/4 AsIs: (/7 } Tile{ AsIs: e.Set1-B#1/13 } Tile{ AsIs: e.Set1-E#1/21(5) } Tile{ AsIs: )/8 AsIs: (/11 } Tile{ AsIs: e.Set2-B#1/16 } Tile{ AsIs: e.Set2-E#1/25(9) } Tile{ AsIs: )/12 AsIs: >/1 ]] }
        refalrts::push_stack( context[1] );
        refalrts::push_stack( context[0] );
        refalrts::link_brackets( context[11], context[12] );
        refalrts::link_brackets( context[7], context[8] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[12];
        res = refalrts::splice_evar( res, context[25], context[26] );
        res = refalrts::splice_evar( res, context[16], context[17] );
        res = refalrts::splice_evar( res, context[8], context[11] );
        res = refalrts::splice_evar( res, context[21], context[22] );
        res = refalrts::splice_evar( res, context[13], context[14] );
        refalrts::use( res );
        refalrts::splice_to_freelist_open( context[7], res );
        return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
      } while ( refalrts::open_evar_advance( context[16], context[17], context[23], context[24] ) );
    } while ( refalrts::open_evar_advance( context[13], context[14], context[19], context[20] ) );
  } while ( 0 );

  // ( e.idx ) ( e.idx )
  // </0 & SetDiff/4 (/7 e.SetDiff#1/5 )/8 (/11 e.Set2#1/9 )/12 >/1
  // closed e.SetDiff#1 as range 5
  // closed e.Set2#1 as range 9

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  </0 & SetDiff/4 (/7 {REMOVED TILE}  )/8 (/11 e.Set2#1/9 )/12 >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ AsIs: e.SetDiff#1/5 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult NormalizeAlternative(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 32 elems
  refalrts::Iter context[32];
  refalrts::zeros( context, 32 );
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
    //FAST GEN: ( e.$ ) ( t.$ t.$ t.$ )
    //GLOBAL GEN: ( e.$ ) ( t.$ t.$ t.$ )
    // </0 & NormalizeAlternative/4 (/7 e.idxB#0/5 )/8 (/11 t.idxTB#0/13 t.idxTBV#0/15 t.idxTBVV#0/17 )/12 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icBracketLeftSave, 0, 5, 2},
    {refalrts::icBracketLeftSave, 0, 9, 2},
    {refalrts::icEmpty, 0, 0, 2},
    // closed e.idxB#0 as range 5
    {refalrts::ictVarLeftSave, 0, 13, 9},
    {refalrts::ictVarLeftSave, 0, 15, 9},
    {refalrts::ictVarLeftSave, 0, 17, 9},
    {refalrts::icEmpty, 0, 0, 9},
    {refalrts::icOnFailGoTo, +36, 0, 0},
    // ( e.idx ) ( ( # Chars e.idx ) t.idx t.idx )
    // </0 & NormalizeAlternative/4 (/7 e.Diff#1/5 )/8 (/11 (/13 # Chars/21 e.Alternative#1/19 )/14 t.Flush#1/15 t.Next#1/17 )/12 >/1
    {refalrts::icBracketTerm, 0, 19, 13},
    {refalrts::icIdentLeftSave, 21, 2, 19},
    // closed e.Diff#1 as range 5
    // closed e.Alternative#1 as range 19
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/13 HalfReuse: </21 } & NormingSet/22 e.Diff#1/5/23 Tile{ AsIs: e.Alternative#1/19 } Tile{ AsIs: >/1 } )/25 (/26 (/27 Tile{ AsIs: </0 } & SetDiff/28 (/29 e.Alternative#1/19/30 Tile{ HalfReuse: )/4 AsIs: (/7 AsIs: e.Diff#1/5 AsIs: )/8 HalfReuse: >/11 } Tile{ AsIs: )/14 AsIs: t.Flush#1/15 AsIs: t.Next#1/17 AsIs: )/12 } Tile{ ]] }
    {refalrts::icAllocFunc, 0, 1, 22},
    {refalrts::icCopyEVar, 23, 5, 0},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 25},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 26},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 27},
    {refalrts::icAllocFunc, 0, 0, 28},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 29},
    {refalrts::icCopyEVar, 30, 19, 0},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 21},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 4},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 11},
    {refalrts::icLinkBrackets, 26, 12, 0},
    {refalrts::icLinkBrackets, 27, 14, 0},
    {refalrts::icPushStack, 0, 0, 11},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icLinkBrackets, 29, 4, 0},
    {refalrts::icLinkBrackets, 13, 25, 0},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 21},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 14, 12, 0},
    {refalrts::icSpliceTile, 4, 11, 0},
    {refalrts::icSpliceTile, 30, 31, 0},
    {refalrts::icSpliceTile, 28, 29, 0},
    {refalrts::icSpliceTile, 0, 0, 0},
    {refalrts::icSpliceTile, 25, 27, 0},
    {refalrts::icSpliceTile, 1, 1, 0},
    {refalrts::icSpliceEVar, 0, 0, 19},
    {refalrts::icSpliceTile, 23, 24, 0},
    {refalrts::icSpliceTile, 22, 22, 0},
    {refalrts::icSpliceTile, 13, 21, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +10, 0, 0},
    // ( e.idx ) ( # Any t.idx t.idx )
    // </0 & NormalizeAlternative/4 (/7 e.Diff#1/5 )/8 (/11 # Any/13 t.Flush#1/15 t.Next#1/17 )/12 >/1
    {refalrts::icIdentTerm, 0, 1, 13},
    // closed e.Diff#1 as range 5
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  (/7 e.Diff#1/5 {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # Any/4 } Tile{ AsIs: )/8 AsIs: (/11 AsIs: # Any/13 AsIs: t.Flush#1/15 AsIs: t.Next#1/17 AsIs: )/12 } Tile{ ]] }
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 0},
    {refalrts::icReinitIdent, 0, 1, 4},
    {refalrts::icLinkBrackets, 11, 12, 0},
    {refalrts::icLinkBrackets, 0, 8, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 8, 12, 0},
    {refalrts::icTrash, 0, 0, 4},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    // ( e.idx ) ( # Empty t.idx t.idx )
    // </0 & NormalizeAlternative/4 (/7 e.Diff#1/5 )/8 (/11 # Empty/13 t.Flush#1/15 t.Next#1/17 )/12 >/1
    {refalrts::icIdentTerm, 0, 0, 13},
    // closed e.Diff#1 as range 5
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 & NormalizeAlternative/4 {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Diff#1/5 AsIs: )/8 AsIs: (/11 AsIs: # Empty/13 AsIs: t.Flush#1/15 AsIs: t.Next#1/17 AsIs: )/12 } Tile{ ]] }
    {refalrts::icLinkBrackets, 11, 12, 0},
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 7, 12, 0},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[2];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  //FAST GEN: ( e.$ ) ( t.$ t.$ t.$ )
  //GLOBAL GEN: ( e.$ ) ( t.$ t.$ t.$ )
  // </0 & NormalizeAlternative/4 (/7 e.idxB#0/5 )/8 (/11 t.idxTB#0/13 t.idxTBV#0/15 t.idxTBVV#0/17 )/12 >/1
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
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.idxB#0 as range 5
  context[14] = refalrts::tvar_left( context[13], context[9], context[10] );
  if( ! context[14] )
    return refalrts::cRecognitionImpossible;
  context[16] = refalrts::tvar_left( context[15], context[9], context[10] );
  if( ! context[16] )
    return refalrts::cRecognitionImpossible;
  context[18] = refalrts::tvar_left( context[17], context[9], context[10] );
  if( ! context[18] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[9], context[10] ) )
    return refalrts::cRecognitionImpossible;
  do {
    refalrts::start_sentence();
    // ( e.idx ) ( ( # Chars e.idx ) t.idx t.idx )
    // </0 & NormalizeAlternative/4 (/7 e.Diff#1/5 )/8 (/11 (/13 # Chars/21 e.Alternative#1/19 )/14 t.Flush#1/15 t.Next#1/17 )/12 >/1
    context[19] = 0;
    context[20] = 0;
    if( ! refalrts::brackets_term( context[19], context[20], context[13] ) )
      continue;
    context[21] = refalrts::ident_left(  & ident_Chars<int>::name, context[19], context[20] );
    if( ! context[21] )
      continue;
    // closed e.Diff#1 as range 5
    // closed e.Alternative#1 as range 19

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/13 HalfReuse: </21 } & NormingSet/22 e.Diff#1/5/23 Tile{ AsIs: e.Alternative#1/19 } Tile{ AsIs: >/1 } )/25 (/26 (/27 Tile{ AsIs: </0 } & SetDiff/28 (/29 e.Alternative#1/19/30 Tile{ HalfReuse: )/4 AsIs: (/7 AsIs: e.Diff#1/5 AsIs: )/8 HalfReuse: >/11 } Tile{ AsIs: )/14 AsIs: t.Flush#1/15 AsIs: t.Next#1/17 AsIs: )/12 } Tile{ ]] }
    if( ! refalrts::alloc_name( context[22], NormingSet, "NormingSet" ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[23], context[24], context[5], context[6]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[25] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[26] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[27] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[28], SetDiff, "SetDiff" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[29] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[30], context[31], context[19], context[20]))
      return refalrts::cNoMemory;
    refalrts::reinit_open_call( context[21] );
    refalrts::reinit_close_bracket( context[4] );
    refalrts::reinit_close_call( context[11] );
    refalrts::link_brackets( context[26], context[12] );
    refalrts::link_brackets( context[27], context[14] );
    refalrts::push_stack( context[11] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[29], context[4] );
    refalrts::link_brackets( context[13], context[25] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[21] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[14], context[12] );
    res = refalrts::splice_evar( res, context[4], context[11] );
    res = refalrts::splice_evar( res, context[30], context[31] );
    res = refalrts::splice_evar( res, context[28], context[29] );
    res = refalrts::splice_evar( res, context[0], context[0] );
    res = refalrts::splice_evar( res, context[25], context[27] );
    res = refalrts::splice_evar( res, context[1], context[1] );
    res = refalrts::splice_evar( res, context[19], context[20] );
    res = refalrts::splice_evar( res, context[23], context[24] );
    res = refalrts::splice_evar( res, context[22], context[22] );
    res = refalrts::splice_evar( res, context[13], context[21] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) ( # Any t.idx t.idx )
    // </0 & NormalizeAlternative/4 (/7 e.Diff#1/5 )/8 (/11 # Any/13 t.Flush#1/15 t.Next#1/17 )/12 >/1
    if( ! refalrts::ident_term(  & ident_Any<int>::name, context[13] ) )
      continue;
    // closed e.Diff#1 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  (/7 e.Diff#1/5 {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # Any/4 } Tile{ AsIs: )/8 AsIs: (/11 AsIs: # Any/13 AsIs: t.Flush#1/15 AsIs: t.Next#1/17 AsIs: )/12 } Tile{ ]] }
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], & ident_Any<int>::name );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[0], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[8], context[12] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  // ( e.idx ) ( # Empty t.idx t.idx )
  // </0 & NormalizeAlternative/4 (/7 e.Diff#1/5 )/8 (/11 # Empty/13 t.Flush#1/15 t.Next#1/17 )/12 >/1
  if( ! refalrts::ident_term(  & ident_Empty<int>::name, context[13] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Diff#1 as range 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  </0 & NormalizeAlternative/4 {REMOVED TILE}  >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Diff#1/5 AsIs: )/8 AsIs: (/11 AsIs: # Empty/13 AsIs: t.Flush#1/15 AsIs: t.Next#1/17 AsIs: )/12 } Tile{ ]] }
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[12] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult SplitAlternatives(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 24 elems
  refalrts::Iter context[24];
  refalrts::zeros( context, 24 );
#ifdef INTERPRET
  using refalrts::functions;
  static const refalrts::RefalIdentifier idents[] = {
    & ident_Any<int>::name,
    & ident_Empty<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    //FAST GEN: ( t.$ t.$ t.$ )
    //GLOBAL GEN: ( t.$ t.$ t.$ )
    // </0 & SplitAlternatives/4 (/7 t.idxB#0/9 t.idxBV#0/11 t.idxBVV#0/13 )/8 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icBracketLeftSave, 0, 5, 2},
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::ictVarLeftSave, 0, 9, 5},
    {refalrts::ictVarLeftSave, 0, 11, 5},
    {refalrts::ictVarLeftSave, 0, 13, 5},
    {refalrts::icEmpty, 0, 0, 5},
    {refalrts::icOnFailGoTo, +7, 0, 0},
    // ( # Empty t.idx t.idx )
    // </0 & SplitAlternatives/4 (/7 # Empty/9 t.Flush#1/11 t.Next#1/13 )/8 >/1
    {refalrts::icIdentTerm, 0, 1, 9},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 & SplitAlternatives/4 {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # Empty/9 AsIs: t.Flush#1/11 AsIs: t.Next#1/13 AsIs: )/8 } Tile{ ]] }
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 7, 8, 0},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +7, 0, 0},
    // ( # Any t.idx t.idx )
    // </0 & SplitAlternatives/4 (/7 # Any/9 t.Flush#1/11 t.Next#1/13 )/8 >/1
    {refalrts::icIdentTerm, 0, 0, 9},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 & SplitAlternatives/4 {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # Any/9 AsIs: t.Flush#1/11 AsIs: t.Next#1/13 AsIs: )/8 } Tile{ ]] }
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 7, 8, 0},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +11, 0, 0},
    // ( ( s.idx ) t.idx t.idx )
    // </0 & SplitAlternatives/4 (/7 (/9 s.Char#1/17 )/10 t.Flush#1/11 t.Next#1/13 )/8 >/1
    {refalrts::icBracketTerm, 0, 15, 9},
    {refalrts::icsVarLeft, 0, 17, 15},
    {refalrts::icEmpty, 0, 0, 15},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  & SplitAlternatives/4 (/7 (/9 s.Char#1/17 {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ HalfReuse: s.Char1 #17/10 AsIs: t.Flush#1/11 AsIs: t.Next#1/13 AsIs: )/8 } Tile{ ]] }
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 0},
    {refalrts::icReinitSVar, 0, 17, 10},
    {refalrts::icLinkBrackets, 0, 8, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 10, 8, 0},
    {refalrts::icTrash, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    // ( ( s.idx e.idx ) t.idx t.idx )
    // </0 & SplitAlternatives/4 (/7 (/9 s.Char#1/17 e.Tail#1/15 )/10 t.Flush#1/11 t.Next#1/13 )/8 >/1
    {refalrts::icBracketTerm, 0, 15, 9},
    {refalrts::icsVarLeft, 0, 17, 15},
    // closed e.Tail#1 as range 15
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } (/18 Tile{ AsIs: s.Char#1/17 } t.Flush#1/11/19 t.Next#1/13/21 )/23 Tile{ AsIs: </0 AsIs: & SplitAlternatives/4 AsIs: (/7 AsIs: (/9 } Tile{ AsIs: e.Tail#1/15 } Tile{ AsIs: )/10 AsIs: t.Flush#1/11 AsIs: t.Next#1/13 AsIs: )/8 AsIs: >/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 18},
    {refalrts::icCopyEVar, 19, 11, 0},
    {refalrts::icCopyEVar, 21, 13, 0},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 23},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icLinkBrackets, 9, 10, 0},
    {refalrts::icLinkBrackets, 18, 23, 0},
    {refalrts::icSetRes, 0, 0, 10},
    {refalrts::icSpliceEVar, 0, 0, 15},
    {refalrts::icSpliceTile, 0, 9, 0},
    {refalrts::icSpliceTile, 19, 23, 0},
    {refalrts::icSpliceTile, 17, 17, 0},
    {refalrts::icSpliceTile, 18, 18, 0},
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
  //FAST GEN: ( t.$ t.$ t.$ )
  //GLOBAL GEN: ( t.$ t.$ t.$ )
  // </0 & SplitAlternatives/4 (/7 t.idxB#0/9 t.idxBV#0/11 t.idxBVV#0/13 )/8 >/1
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
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[10] = refalrts::tvar_left( context[9], context[5], context[6] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  context[12] = refalrts::tvar_left( context[11], context[5], context[6] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  context[14] = refalrts::tvar_left( context[13], context[5], context[6] );
  if( ! context[14] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  do {
    refalrts::start_sentence();
    // ( # Empty t.idx t.idx )
    // </0 & SplitAlternatives/4 (/7 # Empty/9 t.Flush#1/11 t.Next#1/13 )/8 >/1
    if( ! refalrts::ident_term(  & ident_Empty<int>::name, context[9] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & SplitAlternatives/4 {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # Empty/9 AsIs: t.Flush#1/11 AsIs: t.Next#1/13 AsIs: )/8 } Tile{ ]] }
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[7], context[8] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( # Any t.idx t.idx )
    // </0 & SplitAlternatives/4 (/7 # Any/9 t.Flush#1/11 t.Next#1/13 )/8 >/1
    if( ! refalrts::ident_term(  & ident_Any<int>::name, context[9] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & SplitAlternatives/4 {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # Any/9 AsIs: t.Flush#1/11 AsIs: t.Next#1/13 AsIs: )/8 } Tile{ ]] }
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[7], context[8] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( ( s.idx ) t.idx t.idx )
    // </0 & SplitAlternatives/4 (/7 (/9 s.Char#1/17 )/10 t.Flush#1/11 t.Next#1/13 )/8 >/1
    context[15] = 0;
    context[16] = 0;
    if( ! refalrts::brackets_term( context[15], context[16], context[9] ) )
      continue;
    if( ! refalrts::svar_left( context[17], context[15], context[16] ) )
      continue;
    if( ! refalrts::empty_seq( context[15], context[16] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  & SplitAlternatives/4 (/7 (/9 s.Char#1/17 {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ HalfReuse: s.Char1 #17/10 AsIs: t.Flush#1/11 AsIs: t.Next#1/13 AsIs: )/8 } Tile{ ]] }
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_svar( context[10], context[17] );
    refalrts::link_brackets( context[0], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[10], context[8] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[0], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  // ( ( s.idx e.idx ) t.idx t.idx )
  // </0 & SplitAlternatives/4 (/7 (/9 s.Char#1/17 e.Tail#1/15 )/10 t.Flush#1/11 t.Next#1/13 )/8 >/1
  context[15] = 0;
  context[16] = 0;
  if( ! refalrts::brackets_term( context[15], context[16], context[9] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[17], context[15], context[16] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Tail#1 as range 15

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } (/18 Tile{ AsIs: s.Char#1/17 } t.Flush#1/11/19 t.Next#1/13/21 )/23 Tile{ AsIs: </0 AsIs: & SplitAlternatives/4 AsIs: (/7 AsIs: (/9 } Tile{ AsIs: e.Tail#1/15 } Tile{ AsIs: )/10 AsIs: t.Flush#1/11 AsIs: t.Next#1/13 AsIs: )/8 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_bracket( context[18] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[19], context[20], context[11], context[12]))
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[21], context[22], context[13], context[14]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[23] ) )
    return refalrts::cNoMemory;
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[9], context[10] );
  refalrts::link_brackets( context[18], context[23] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[10];
  res = refalrts::splice_evar( res, context[15], context[16] );
  res = refalrts::splice_evar( res, context[0], context[9] );
  res = refalrts::splice_evar( res, context[19], context[23] );
  res = refalrts::splice_evar( res, context[17], context[17] );
  res = refalrts::splice_evar( res, context[18], context[18] );
  refalrts::use( res );
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
    { Map, "Map" },
    { NormalizeAlternative, "NormalizeAlternative" },
    { MapReduce, "MapReduce" },
    { DelAccumulator, "DelAccumulator" },
    { SplitAlternatives, "SplitAlternatives" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    // </0 & NormalizeRule/4 (/7 (/11 e.Name#1/9 )/12 e.Alternatives#1/5 )/8 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icBracketLeftSave, 0, 5, 2},
    {refalrts::icBracketLeftSave, 0, 9, 5},
    {refalrts::icEmpty, 0, 0, 2},
    // closed e.Name#1 as range 9
    // closed e.Alternatives#1 as range 5
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: (/11 AsIs: e.Name#1/9 AsIs: )/12 } Tile{ AsIs: </0 Reuse: & Map/4 } & SplitAlternatives/13 </14 & DelAccumulator/15 </16 & MapReduce/17 & NormalizeAlternative/18 (/19 )/20 Tile{ AsIs: e.Alternatives#1/5 } >/21 >/22 Tile{ HalfReuse: >/8 HalfReuse: )/1 ]] }
    {refalrts::icAllocFunc, 0, 4, 13},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 14},
    {refalrts::icAllocFunc, 0, 3, 15},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 16},
    {refalrts::icAllocFunc, 0, 2, 17},
    {refalrts::icAllocFunc, 0, 1, 18},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 19},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 20},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 21},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 22},
    {refalrts::icUpdateFunc, 0, 0, 4},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 8},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
    {refalrts::icLinkBrackets, 7, 1, 0},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icPushStack, 0, 0, 22},
    {refalrts::icPushStack, 0, 0, 14},
    {refalrts::icPushStack, 0, 0, 21},
    {refalrts::icPushStack, 0, 0, 16},
    {refalrts::icLinkBrackets, 19, 20, 0},
    {refalrts::icLinkBrackets, 11, 12, 0},
    {refalrts::icSetRes, 0, 0, 8},
    {refalrts::icSpliceTile, 21, 22, 0},
    {refalrts::icSpliceEVar, 0, 0, 5},
    {refalrts::icSpliceTile, 13, 20, 0},
    {refalrts::icSpliceTile, 0, 4, 0},
    {refalrts::icSpliceTile, 7, 12, 0},
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
  // </0 & NormalizeRule/4 (/7 (/11 e.Name#1/9 )/12 e.Alternatives#1/5 )/8 >/1
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
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Name#1 as range 9
  // closed e.Alternatives#1 as range 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: (/11 AsIs: e.Name#1/9 AsIs: )/12 } Tile{ AsIs: </0 Reuse: & Map/4 } & SplitAlternatives/13 </14 & DelAccumulator/15 </16 & MapReduce/17 & NormalizeAlternative/18 (/19 )/20 Tile{ AsIs: e.Alternatives#1/5 } >/21 >/22 Tile{ HalfReuse: >/8 HalfReuse: )/1 ]] }
  if( ! refalrts::alloc_name( context[13], SplitAlternatives, "SplitAlternatives" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[15], DelAccumulator, "DelAccumulator" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[16] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[17], MapReduce, "MapReduce" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[18], NormalizeAlternative, "NormalizeAlternative" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[19] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[20] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[21] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[22] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], Map, "Map" );
  refalrts::reinit_close_call( context[8] );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[7], context[1] );
  refalrts::push_stack( context[8] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[22] );
  refalrts::push_stack( context[14] );
  refalrts::push_stack( context[21] );
  refalrts::push_stack( context[16] );
  refalrts::link_brackets( context[19], context[20] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[21], context[22] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[13], context[20] );
  res = refalrts::splice_evar( res, context[0], context[4] );
  res = refalrts::splice_evar( res, context[7], context[12] );
  refalrts::use( res );
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
    // </0 & WriteCode/4 e.Rules#1/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    // closed e.Rules#1 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } </5 & WriteFunctions/6 (/7 )/8 (/9 (/10 0/11"Root"/12 Tile{ HalfReuse: )/0 HalfReuse: )/4 AsIs: e.Rules#1/2 AsIs: >/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 5},
    {refalrts::icAllocFunc, 0, 0, 6},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 7},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 8},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 9},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 10},
    {refalrts::icAllocInt, 0, 0, 11},
    {refalrts::icAllocString, 0, 0, 12},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 0},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 4},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 5},
    {refalrts::icLinkBrackets, 9, 4, 0},
    {refalrts::icLinkBrackets, 10, 0, 0},
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icSetRes, 0, 0, 0},
    {refalrts::icSpliceTile, 5, 13, 0},
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
  // </0 & WriteCode/4 e.Rules#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Rules#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } </5 & WriteFunctions/6 (/7 )/8 (/9 (/10 0/11"Root"/12 Tile{ HalfReuse: )/0 HalfReuse: )/4 AsIs: e.Rules#1/2 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[5] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[6], WriteFunctions, "WriteFunctions" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_number( context[11], 0UL ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[12], context[13], "Root", 4 ) )
    return refalrts::cNoMemory;
  refalrts::reinit_close_bracket( context[0] );
  refalrts::reinit_close_bracket( context[4] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[5] );
  refalrts::link_brackets( context[9], context[4] );
  refalrts::link_brackets( context[10], context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[13] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult ExtractExpected(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
#ifdef INTERPRET
  using refalrts::functions;
  static const refalrts::RefalIdentifier idents[] = {
    & ident_Finitive<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    //FAST GEN: ( t.$ t.$ t.$ )
    //GLOBAL GEN: ( t.$ t.$ t.$ )
    // </0 & ExtractExpected/4 (/7 t.idxB#0/9 t.idxBV#0/11 t.idxBVV#0/13 )/8 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icBracketLeftSave, 0, 5, 2},
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::ictVarLeftSave, 0, 9, 5},
    {refalrts::ictVarLeftSave, 0, 11, 5},
    {refalrts::ictVarLeftSave, 0, 13, 5},
    {refalrts::icEmpty, 0, 0, 5},
    {refalrts::icOnFailGoTo, +5, 0, 0},
    // ( t.idx t.idx # Finitive )
    // </0 & ExtractExpected/4 (/7 t.Head#1/9 t.Flush#1/11 # Finitive/13 )/8 >/1
    {refalrts::icIdentTerm, 0, 0, 13},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 & ExtractExpected/4 (/7 t.Head#1/9 t.Flush#1/11 # Finitive/13 )/8 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ ]] }
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    // ( t.idx t.idx ( s.idx e.idx ) )
    // </0 & ExtractExpected/4 (/7 t.Head#1/9 t.Flush#1/11 (/13 s.LineNumber#1/17 e.NextName#1/15 )/14 )/8 >/1
    {refalrts::icBracketTerm, 0, 15, 13},
    {refalrts::icsVarLeft, 0, 17, 15},
    // closed e.NextName#1 as range 15
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 & ExtractExpected/4 (/7 t.Head#1/9 t.Flush#1/11 {REMOVED TILE}  )/8 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/13 AsIs: s.LineNumber#1/17 AsIs: e.NextName#1/15 AsIs: )/14 } Tile{ ]] }
    {refalrts::icLinkBrackets, 13, 14, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 13, 14, 0},
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
  //FAST GEN: ( t.$ t.$ t.$ )
  //GLOBAL GEN: ( t.$ t.$ t.$ )
  // </0 & ExtractExpected/4 (/7 t.idxB#0/9 t.idxBV#0/11 t.idxBVV#0/13 )/8 >/1
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
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[10] = refalrts::tvar_left( context[9], context[5], context[6] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  context[12] = refalrts::tvar_left( context[11], context[5], context[6] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  context[14] = refalrts::tvar_left( context[13], context[5], context[6] );
  if( ! context[14] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  do {
    refalrts::start_sentence();
    // ( t.idx t.idx # Finitive )
    // </0 & ExtractExpected/4 (/7 t.Head#1/9 t.Flush#1/11 # Finitive/13 )/8 >/1
    if( ! refalrts::ident_term(  & ident_Finitive<int>::name, context[13] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & ExtractExpected/4 (/7 t.Head#1/9 t.Flush#1/11 # Finitive/13 )/8 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  // ( t.idx t.idx ( s.idx e.idx ) )
  // </0 & ExtractExpected/4 (/7 t.Head#1/9 t.Flush#1/11 (/13 s.LineNumber#1/17 e.NextName#1/15 )/14 )/8 >/1
  context[15] = 0;
  context[16] = 0;
  if( ! refalrts::brackets_term( context[15], context[16], context[13] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[17], context[15], context[16] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.NextName#1 as range 15

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  </0 & ExtractExpected/4 (/7 t.Head#1/9 t.Flush#1/11 {REMOVED TILE}  )/8 >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ AsIs: (/13 AsIs: s.LineNumber#1/17 AsIs: e.NextName#1/15 AsIs: )/14 } Tile{ ]] }
  refalrts::link_brackets( context[13], context[14] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[13], context[14] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult WriteFunctions(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 43 elems
  refalrts::Iter context[43];
  refalrts::zeros( context, 43 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { ErrorAt, "ErrorAt" },
    { WriteFunction, "WriteFunction" },
    { ExtractExpected, "ExtractExpected" },
    { Map, "Map" },
    { Warning, "Warning" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  static const refalrts::StringItem strings[] = {
    {" not found", 10},
    {"e ", 2},
    {"...", 3},
    {"und unused r", 12}
  };
  static const refalrts::RASLCommand raa[] = {
    //FAST GEN: e.$
    //GLOBAL GEN: ( e.$ ) e.$
    // </0 & WriteFunctions/4 (/7 e.idxB#0/5 )/8 e.idxT#0/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icBracketLeftSave, 0, 5, 2},
    // closed e.idxB#0 as range 5
    // closed e.idxT#0 as range 2
    {refalrts::icOnFailGoTo, +8, 0, 0},
    // ( e.idx ) ( )
    // </0 & WriteFunctions/4 (/7 e.Written#1/5 )/8 (/11 )/12 >/1
    {refalrts::icSave, 0, 37, 2},
    {refalrts::icBracketLeftSave, 0, 9, 37},
    {refalrts::icEmpty, 0, 0, 9},
    {refalrts::icEmpty, 0, 0, 37},
    // closed e.Written#1 as range 5
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 & WriteFunctions/4 (/7 e.Written#1/5 )/8 (/11 )/12 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ ]] }
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +26, 0, 0},
    // ( e.idx ) ( ) ( ( e.idx ) e.idx ) e.idx
    // </0 & WriteFunctions/4 (/7 e.Written#1/5 )/8 (/11 )/12 (/15 (/19 e.Name#1/17 )/20 e.Content#1/13 )/16 e.Rules#1/2 >/1
    {refalrts::icSave, 0, 37, 2},
    {refalrts::icBracketLeftSave, 0, 9, 37},
    {refalrts::icBracketLeftSave, 0, 13, 37},
    {refalrts::icBracketLeftSave, 0, 17, 13},
    {refalrts::icEmpty, 0, 0, 9},
    // closed e.Written#1 as range 5
    // closed e.Name#1 as range 17
    // closed e.Content#1 as range 13
    // closed e.Rules#1 as range 37(2)
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  e.Written#1/5 {REMOVED TILE}  e.Content#1/13 {REMOVED TILE}  e.Rules#1/37(2) {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Warning/4 HalfReuse: 'F'/7 } Tile{ HalfReuse: 'o'/16 }"und unused r"/21 Tile{ HalfReuse: 'u'/8 HalfReuse: 'l'/11 HalfReuse: 'e'/12 HalfReuse: 's'/15 HalfReuse: ' '/19 AsIs: e.Name#1/17 HalfReuse: ' '/20 }"..."/23 Tile{ AsIs: >/1 ]] }
    {refalrts::icAllocString, 0, 3, 21},
    {refalrts::icAllocString, 0, 2, 23},
    {refalrts::icUpdateFunc, 0, 4, 4},
    {refalrts::icReinitChar, 0, 'F', 7},
    {refalrts::icReinitChar, 0, 'o', 16},
    {refalrts::icReinitChar, 0, 'u', 8},
    {refalrts::icReinitChar, 0, 'l', 11},
    {refalrts::icReinitChar, 0, 'e', 12},
    {refalrts::icReinitChar, 0, 's', 15},
    {refalrts::icReinitChar, 0, ' ', 19},
    {refalrts::icReinitChar, 0, ' ', 20},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceTile, 23, 24, 0},
    {refalrts::icSpliceTile, 8, 20, 0},
    {refalrts::icSpliceTile, 21, 22, 0},
    {refalrts::icSpliceTile, 16, 16, 0},
    {refalrts::icTrash, 0, 0, 7},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +21, 0, 0},
    // ( e.idx ) ( ( s.idx e.idx ) e.idx ) e.idx
    // </0 & WriteFunctions/4 (/7 e.Written-B#1/18 (/22 e.Next#1/24 )/23 e.Written-E#1/5 )/8 (/11 (/15 s.LineNumber#1/17 e.Next#1/13 )/16 e.Expected#1/9 )/12 e.Rules#1/2 >/1
    {refalrts::icSave, 0, 37, 2},
    {refalrts::icBracketLeftSave, 0, 9, 37},
    {refalrts::icBracketLeftSave, 0, 13, 9},
    // closed e.Expected#1 as range 9
    // closed e.Rules#1 as range 37(2)
    {refalrts::icsVarLeft, 0, 17, 13},
    // closed e.Next#1 as range 13
    {refalrts::icSave, 0, 39, 5},
    {refalrts::icEPrepare, 0, 18, 39},
    {refalrts::icEStart, 0, 18, 39},
    {refalrts::icSave, 0, 41, 39},
    {refalrts::icBracketLeftSave, 0, 20, 41},
    {refalrts::iceRepeatLeft, 24, 13, 20},
    {refalrts::icEmpty, 0, 0, 20},
    // closed e.Written-E#1 as range 41(5)
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  (/15 s.LineNumber#1/17 e.Next#1/13 )/16 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & WriteFunctions/4 AsIs: (/7 AsIs: e.Written-B#1/18 AsIs: (/22 AsIs: e.Next#1/24 AsIs: )/23 AsIs: e.Written-E#1/41(5) AsIs: )/8 AsIs: (/11 } Tile{ AsIs: e.Expected#1/9 } Tile{ AsIs: )/12 AsIs: e.Rules#1/37(2) AsIs: >/1 ]] }
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 11, 12, 0},
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icLinkBrackets, 22, 23, 0},
    {refalrts::icSetRes, 0, 0, 12},
    {refalrts::icSpliceEVar, 0, 0, 9},
    {refalrts::icTrash, 0, 0, 11},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +47, 0, 0},
    // ( e.idx ) ( ( s.idx e.idx ) e.idx ) e.idx
    // </0 & WriteFunctions/4 (/7 e.Written#1/5 )/8 (/11 (/15 s.LineNumber#1/17 e.NextRule#1/13 )/16 e.Expected#1/9 )/12 e.Rules-B#1/18 (/22 (/26 e.NextRule#1/28 )/27 e.Alternatives#1/20 )/23 e.Rules-E#1/2 >/1
    {refalrts::icSave, 0, 37, 2},
    {refalrts::icBracketLeftSave, 0, 9, 37},
    {refalrts::icBracketLeftSave, 0, 13, 9},
    // closed e.Written#1 as range 5
    // closed e.Expected#1 as range 9
    {refalrts::icsVarLeft, 0, 17, 13},
    // closed e.NextRule#1 as range 13
    {refalrts::icEPrepare, 0, 18, 37},
    {refalrts::icEStart, 0, 18, 37},
    {refalrts::icSave, 0, 39, 37},
    {refalrts::icBracketLeftSave, 0, 20, 39},
    {refalrts::icBracketLeftSave, 0, 24, 20},
    {refalrts::iceRepeatLeft, 28, 13, 24},
    {refalrts::icEmpty, 0, 0, 24},
    // closed e.Alternatives#1 as range 20
    // closed e.Rules-E#1 as range 39(2)
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  s.LineNumber#1/17 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } </30 Tile{ HalfReuse: & WriteFunction/22 AsIs: (/26 AsIs: e.NextRule#1/28 AsIs: )/27 AsIs: e.Alternatives#1/20 HalfReuse: >/23 } Tile{ AsIs: </0 AsIs: & WriteFunctions/4 AsIs: (/7 AsIs: e.Written#1/5 HalfReuse: (/8 } Tile{ AsIs: e.NextRule#1/13 } Tile{ HalfReuse: )/11 HalfReuse: )/15 } Tile{ HalfReuse: (/16 AsIs: e.Expected#1/9 HalfReuse: </12 } & Map/31 & ExtractExpected/32 e.Alternatives#1/20/33 >/35 )/36 Tile{ AsIs: e.Rules-B#1/18 } Tile{ AsIs: e.Rules-E#1/39(2) } Tile{ AsIs: >/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 30},
    {refalrts::icAllocFunc, 0, 3, 31},
    {refalrts::icAllocFunc, 0, 2, 32},
    {refalrts::icCopyEVar, 33, 20, 0},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 35},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 36},
    {refalrts::icReinitFunc, 0, 1, 22},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 23},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 11},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 15},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 16},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 12},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 16, 36, 0},
    {refalrts::icPushStack, 0, 0, 35},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icLinkBrackets, 7, 15, 0},
    {refalrts::icLinkBrackets, 8, 11, 0},
    {refalrts::icPushStack, 0, 0, 23},
    {refalrts::icPushStack, 0, 0, 30},
    {refalrts::icLinkBrackets, 26, 27, 0},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceEVar, 0, 0, 39},
    {refalrts::icSpliceEVar, 0, 0, 18},
    {refalrts::icSpliceTile, 31, 36, 0},
    {refalrts::icSpliceTile, 16, 12, 0},
    {refalrts::icSpliceTile, 11, 15, 0},
    {refalrts::icSpliceEVar, 0, 0, 13},
    {refalrts::icSpliceTile, 0, 8, 0},
    {refalrts::icSpliceTile, 22, 23, 0},
    {refalrts::icSpliceTile, 30, 30, 0},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    // ( ( s.idx e.idx ) e.idx ) e.idx
    // </0 & WriteFunctions/4 (/7 (/11 s.LineNumber#1/13 e.NextRule#1/9 )/12 e.Expected#1/5 )/8 e.Rules#1/2 >/1
    {refalrts::icBracketLeftSave, 0, 9, 5},
    // closed e.Expected#1 as range 5
    // closed e.Rules#1 as range 2
    {refalrts::icsVarLeft, 0, 13, 9},
    // closed e.NextRule#1 as range 9
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  s.LineNumber#1/13 {REMOVED TILE}  {REMOVED TILE}  e.Expected#1/5 {REMOVED TILE}  e.Rules#1/2 {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ErrorAt/4 HalfReuse: s.LineNumber1 #13/7 HalfReuse: 'R'/11 } Tile{ HalfReuse: 'u'/12 } Tile{ HalfReuse: 'l'/8 }"e "/14 Tile{ AsIs: e.NextRule#1/9 }" not found"/16 Tile{ AsIs: >/1 ]] }
    {refalrts::icAllocString, 0, 1, 14},
    {refalrts::icAllocString, 0, 0, 16},
    {refalrts::icUpdateFunc, 0, 0, 4},
    {refalrts::icReinitSVar, 0, 13, 7},
    {refalrts::icReinitChar, 0, 'R', 11},
    {refalrts::icReinitChar, 0, 'u', 12},
    {refalrts::icReinitChar, 0, 'l', 8},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceTile, 16, 17, 0},
    {refalrts::icSpliceEVar, 0, 0, 9},
    {refalrts::icSpliceTile, 14, 15, 0},
    {refalrts::icSpliceTile, 8, 8, 0},
    {refalrts::icSpliceTile, 12, 12, 0},
    {refalrts::icTrash, 0, 0, 11},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[6];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  //FAST GEN: e.$
  //GLOBAL GEN: ( e.$ ) e.$
  // </0 & WriteFunctions/4 (/7 e.idxB#0/5 )/8 e.idxT#0/2 >/1
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
  // closed e.idxT#0 as range 2
  do {
    refalrts::start_sentence();
    // ( e.idx ) ( )
    // </0 & WriteFunctions/4 (/7 e.Written#1/5 )/8 (/11 )/12 >/1
    context[37] = context[2];
    context[38] = context[3];
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_left( context[9], context[10], context[37], context[38] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;
    if( ! refalrts::empty_seq( context[37], context[38] ) )
      continue;
    // closed e.Written#1 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & WriteFunctions/4 (/7 e.Written#1/5 )/8 (/11 )/12 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) ( ) ( ( e.idx ) e.idx ) e.idx
    // </0 & WriteFunctions/4 (/7 e.Written#1/5 )/8 (/11 )/12 (/15 (/19 e.Name#1/17 )/20 e.Content#1/13 )/16 e.Rules#1/2 >/1
    context[37] = context[2];
    context[38] = context[3];
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_left( context[9], context[10], context[37], context[38] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    context[13] = 0;
    context[14] = 0;
    context[15] = refalrts::brackets_left( context[13], context[14], context[37], context[38] );
    if( ! context[15] )
      continue;
    refalrts::bracket_pointers(context[15], context[16]);
    context[17] = 0;
    context[18] = 0;
    context[19] = refalrts::brackets_left( context[17], context[18], context[13], context[14] );
    if( ! context[19] )
      continue;
    refalrts::bracket_pointers(context[19], context[20]);
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;
    // closed e.Written#1 as range 5
    // closed e.Name#1 as range 17
    // closed e.Content#1 as range 13
    // closed e.Rules#1 as range 37(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  e.Written#1/5 {REMOVED TILE}  e.Content#1/13 {REMOVED TILE}  e.Rules#1/37(2) {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Warning/4 HalfReuse: 'F'/7 } Tile{ HalfReuse: 'o'/16 }"und unused r"/21 Tile{ HalfReuse: 'u'/8 HalfReuse: 'l'/11 HalfReuse: 'e'/12 HalfReuse: 's'/15 HalfReuse: ' '/19 AsIs: e.Name#1/17 HalfReuse: ' '/20 }"..."/23 Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_chars( context[21], context[22], "und unused r", 12 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[23], context[24], "...", 3 ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], Warning, "Warning" );
    refalrts::reinit_char( context[7], 'F' );
    refalrts::reinit_char( context[16], 'o' );
    refalrts::reinit_char( context[8], 'u' );
    refalrts::reinit_char( context[11], 'l' );
    refalrts::reinit_char( context[12], 'e' );
    refalrts::reinit_char( context[15], 's' );
    refalrts::reinit_char( context[19], ' ' );
    refalrts::reinit_char( context[20], ' ' );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[23], context[24] );
    res = refalrts::splice_evar( res, context[8], context[20] );
    res = refalrts::splice_evar( res, context[21], context[22] );
    res = refalrts::splice_evar( res, context[16], context[16] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[7], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) ( ( s.idx e.idx ) e.idx ) e.idx
    // </0 & WriteFunctions/4 (/7 e.Written-B#1/18 (/22 e.Next#1/24 )/23 e.Written-E#1/5 )/8 (/11 (/15 s.LineNumber#1/17 e.Next#1/13 )/16 e.Expected#1/9 )/12 e.Rules#1/2 >/1
    context[37] = context[2];
    context[38] = context[3];
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_left( context[9], context[10], context[37], context[38] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    context[13] = 0;
    context[14] = 0;
    context[15] = refalrts::brackets_left( context[13], context[14], context[9], context[10] );
    if( ! context[15] )
      continue;
    refalrts::bracket_pointers(context[15], context[16]);
    // closed e.Expected#1 as range 9
    // closed e.Rules#1 as range 37(2)
    if( ! refalrts::svar_left( context[17], context[13], context[14] ) )
      continue;
    // closed e.Next#1 as range 13
    context[39] = context[5];
    context[40] = context[6];
    context[18] = 0;
    context[19] = 0;
    refalrts::start_e_loop();
    do {
      context[41] = context[39];
      context[42] = context[40];
      context[20] = 0;
      context[21] = 0;
      context[22] = refalrts::brackets_left( context[20], context[21], context[41], context[42] );
      if( ! context[22] )
        continue;
      refalrts::bracket_pointers(context[22], context[23]);
      if( ! refalrts::repeated_evar_left( context[24], context[25], context[13], context[14], context[20], context[21] ) )
        continue;
      if( ! refalrts::empty_seq( context[20], context[21] ) )
        continue;
      // closed e.Written-E#1 as range 41(5)

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE}  (/15 s.LineNumber#1/17 e.Next#1/13 )/16 {REMOVED TILE}  {REMOVED TILE} 
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & WriteFunctions/4 AsIs: (/7 AsIs: e.Written-B#1/18 AsIs: (/22 AsIs: e.Next#1/24 AsIs: )/23 AsIs: e.Written-E#1/41(5) AsIs: )/8 AsIs: (/11 } Tile{ AsIs: e.Expected#1/9 } Tile{ AsIs: )/12 AsIs: e.Rules#1/37(2) AsIs: >/1 ]] }
      refalrts::push_stack( context[1] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::link_brackets( context[22], context[23] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[12];
      res = refalrts::splice_evar( res, context[9], context[10] );
      refalrts::use( res );
      refalrts::splice_to_freelist_open( context[11], res );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[18], context[19], context[39], context[40] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) ( ( s.idx e.idx ) e.idx ) e.idx
    // </0 & WriteFunctions/4 (/7 e.Written#1/5 )/8 (/11 (/15 s.LineNumber#1/17 e.NextRule#1/13 )/16 e.Expected#1/9 )/12 e.Rules-B#1/18 (/22 (/26 e.NextRule#1/28 )/27 e.Alternatives#1/20 )/23 e.Rules-E#1/2 >/1
    context[37] = context[2];
    context[38] = context[3];
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_left( context[9], context[10], context[37], context[38] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    context[13] = 0;
    context[14] = 0;
    context[15] = refalrts::brackets_left( context[13], context[14], context[9], context[10] );
    if( ! context[15] )
      continue;
    refalrts::bracket_pointers(context[15], context[16]);
    // closed e.Written#1 as range 5
    // closed e.Expected#1 as range 9
    if( ! refalrts::svar_left( context[17], context[13], context[14] ) )
      continue;
    // closed e.NextRule#1 as range 13
    context[18] = 0;
    context[19] = 0;
    refalrts::start_e_loop();
    do {
      context[39] = context[37];
      context[40] = context[38];
      context[20] = 0;
      context[21] = 0;
      context[22] = refalrts::brackets_left( context[20], context[21], context[39], context[40] );
      if( ! context[22] )
        continue;
      refalrts::bracket_pointers(context[22], context[23]);
      context[24] = 0;
      context[25] = 0;
      context[26] = refalrts::brackets_left( context[24], context[25], context[20], context[21] );
      if( ! context[26] )
        continue;
      refalrts::bracket_pointers(context[26], context[27]);
      if( ! refalrts::repeated_evar_left( context[28], context[29], context[13], context[14], context[24], context[25] ) )
        continue;
      if( ! refalrts::empty_seq( context[24], context[25] ) )
        continue;
      // closed e.Alternatives#1 as range 20
      // closed e.Rules-E#1 as range 39(2)

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  s.LineNumber#1/17 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
      //RESULT: Tile{ [[ } </30 Tile{ HalfReuse: & WriteFunction/22 AsIs: (/26 AsIs: e.NextRule#1/28 AsIs: )/27 AsIs: e.Alternatives#1/20 HalfReuse: >/23 } Tile{ AsIs: </0 AsIs: & WriteFunctions/4 AsIs: (/7 AsIs: e.Written#1/5 HalfReuse: (/8 } Tile{ AsIs: e.NextRule#1/13 } Tile{ HalfReuse: )/11 HalfReuse: )/15 } Tile{ HalfReuse: (/16 AsIs: e.Expected#1/9 HalfReuse: </12 } & Map/31 & ExtractExpected/32 e.Alternatives#1/20/33 >/35 )/36 Tile{ AsIs: e.Rules-B#1/18 } Tile{ AsIs: e.Rules-E#1/39(2) } Tile{ AsIs: >/1 ]] }
      if( ! refalrts::alloc_open_call( context[30] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[31], Map, "Map" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[32], ExtractExpected, "ExtractExpected" ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_evar(context[33], context[34], context[20], context[21]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[35] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[36] ) )
        return refalrts::cNoMemory;
      refalrts::reinit_name( context[22], WriteFunction, "WriteFunction" );
      refalrts::reinit_close_call( context[23] );
      refalrts::reinit_open_bracket( context[8] );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::reinit_close_bracket( context[15] );
      refalrts::reinit_open_bracket( context[16] );
      refalrts::reinit_open_call( context[12] );
      refalrts::push_stack( context[1] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[16], context[36] );
      refalrts::push_stack( context[35] );
      refalrts::push_stack( context[12] );
      refalrts::link_brackets( context[7], context[15] );
      refalrts::link_brackets( context[8], context[11] );
      refalrts::push_stack( context[23] );
      refalrts::push_stack( context[30] );
      refalrts::link_brackets( context[26], context[27] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[39], context[40] );
      res = refalrts::splice_evar( res, context[18], context[19] );
      res = refalrts::splice_evar( res, context[31], context[36] );
      res = refalrts::splice_evar( res, context[16], context[12] );
      res = refalrts::splice_evar( res, context[11], context[15] );
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_evar( res, context[0], context[8] );
      res = refalrts::splice_evar( res, context[22], context[23] );
      res = refalrts::splice_evar( res, context[30], context[30] );
      refalrts::use( res );
      refalrts::splice_to_freelist_open( trash_prev, res );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[18], context[19], context[37], context[38] ) );
  } while ( 0 );

  // ( ( s.idx e.idx ) e.idx ) e.idx
  // </0 & WriteFunctions/4 (/7 (/11 s.LineNumber#1/13 e.NextRule#1/9 )/12 e.Expected#1/5 )/8 e.Rules#1/2 >/1
  context[9] = 0;
  context[10] = 0;
  context[11] = refalrts::brackets_left( context[9], context[10], context[5], context[6] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[11], context[12]);
  // closed e.Expected#1 as range 5
  // closed e.Rules#1 as range 2
  if( ! refalrts::svar_left( context[13], context[9], context[10] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.NextRule#1 as range 9

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  s.LineNumber#1/13 {REMOVED TILE}  {REMOVED TILE}  e.Expected#1/5 {REMOVED TILE}  e.Rules#1/2 {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & ErrorAt/4 HalfReuse: s.LineNumber1 #13/7 HalfReuse: 'R'/11 } Tile{ HalfReuse: 'u'/12 } Tile{ HalfReuse: 'l'/8 }"e "/14 Tile{ AsIs: e.NextRule#1/9 }" not found"/16 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_chars( context[14], context[15], "e ", 2 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[16], context[17], " not found", 10 ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ErrorAt, "ErrorAt" );
  refalrts::reinit_svar( context[7], context[13] );
  refalrts::reinit_char( context[11], 'R' );
  refalrts::reinit_char( context[12], 'u' );
  refalrts::reinit_char( context[8], 'l' );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[16], context[17] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[14], context[15] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[12], context[12] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[11], res );
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
    {"  (e.Accum) s.Unexpected e.Text =", 33}
  };
  static const refalrts::RASLCommand raa[] = {
    // </0 & WriteFunction/4 (/7 e.NextRule#1/5 )/8 e.Alternatives#1/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icBracketLeftSave, 0, 5, 2},
    // closed e.NextRule#1 as range 5
    // closed e.Alternatives#1 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: )/4 AsIs: (/7 AsIs: e.NextRule#1/5 HalfReuse: ' '/8 } '{'/9 )/10 </11 & Map/12 & WriteAlternative/13 Tile{ AsIs: e.Alternatives#1/2 } >/14 (/15"  (e.Accum) s.Unexpected e.Text ="/16 )/18 (/19"    (#TokenUnexpected s.Unexpected) <Root () e.Text>;"/20 )/22 (/23"  (e.Accum) = (#TokenAccum e.Accum) (#TokenUnexpectedEOF);"/24 )/26 (/27 '}'/28 Tile{ HalfReuse: )/1 ]] }
    {refalrts::icAllocChar, 0, '{', 9},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 10},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 11},
    {refalrts::icAllocFunc, 0, 1, 12},
    {refalrts::icAllocFunc, 0, 0, 13},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 14},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 15},
    {refalrts::icAllocString, 0, 2, 16},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 18},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 19},
    {refalrts::icAllocString, 0, 1, 20},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 22},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 23},
    {refalrts::icAllocString, 0, 0, 24},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 26},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 27},
    {refalrts::icAllocChar, 0, '}', 28},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 0},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 4},
    {refalrts::icReinitChar, 0, ' ', 8},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
    {refalrts::icLinkBrackets, 27, 1, 0},
    {refalrts::icLinkBrackets, 23, 26, 0},
    {refalrts::icLinkBrackets, 19, 22, 0},
    {refalrts::icLinkBrackets, 15, 18, 0},
    {refalrts::icPushStack, 0, 0, 14},
    {refalrts::icPushStack, 0, 0, 11},
    {refalrts::icLinkBrackets, 7, 10, 0},
    {refalrts::icLinkBrackets, 0, 4, 0},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceTile, 14, 28, 0},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceTile, 9, 13, 0},
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
  // </0 & WriteFunction/4 (/7 e.NextRule#1/5 )/8 e.Alternatives#1/2 >/1
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
  // closed e.NextRule#1 as range 5
  // closed e.Alternatives#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: )/4 AsIs: (/7 AsIs: e.NextRule#1/5 HalfReuse: ' '/8 } '{'/9 )/10 </11 & Map/12 & WriteAlternative/13 Tile{ AsIs: e.Alternatives#1/2 } >/14 (/15"  (e.Accum) s.Unexpected e.Text ="/16 )/18 (/19"    (#TokenUnexpected s.Unexpected) <Root () e.Text>;"/20 )/22 (/23"  (e.Accum) = (#TokenAccum e.Accum) (#TokenUnexpectedEOF);"/24 )/26 (/27 '}'/28 Tile{ HalfReuse: )/1 ]] }
  if( ! refalrts::alloc_char( context[9], '{' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[12], Map, "Map" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[13], WriteAlternative, "WriteAlternative" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[16], context[17], "  (e.Accum) s.Unexpected e.Text =", 33 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[18] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[19] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[20], context[21], "    (#TokenUnexpected s.Unexpected) <Root () e.Text>;", 53 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[22] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[23] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[24], context[25], "  (e.Accum) = (#TokenAccum e.Accum) (#TokenUnexpectedEOF);", 58 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[26] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[27] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[28], '}' ) )
    return refalrts::cNoMemory;
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_close_bracket( context[4] );
  refalrts::reinit_char( context[8], ' ' );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[27], context[1] );
  refalrts::link_brackets( context[23], context[26] );
  refalrts::link_brackets( context[19], context[22] );
  refalrts::link_brackets( context[15], context[18] );
  refalrts::push_stack( context[14] );
  refalrts::push_stack( context[11] );
  refalrts::link_brackets( context[7], context[10] );
  refalrts::link_brackets( context[0], context[4] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[14], context[28] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[9], context[13] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult WriteAlternative(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 37 elems
  refalrts::Iter context[37];
  refalrts::zeros( context, 37 );
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
    {" () e.Text ", 11},
    {"\') <", 4},
    {"e.Text = (#TokenError \'", 23},
    {".Accum)", 7},
    {"  (", 3},
    {" = (#TokenError", 15},
    {"(e.Accum) ", 10},
    {" () e.Text", 10},
    {") <", 3},
    {" e.Accum ", 9},
    {"e.Text = (", 10},
    {");", 2},
    {"ccum ", 5},
    {" =", 2},
    {"e.Text = <", 10},
    {"  (e.Accum)", 11},
    {") e.Text", 8},
    {" (e.Accum ", 10},
    {" = (#TokenAccum e.Accum", 23},
    {"  (e.Accum) ", 12},
    {" <", 2},
    {"  (e.Accum) e.Text = (#TokenE", 29},
    {"  (e.Accum) = (#TokenE", 22},
    {".Accum) <", 9},
    {"  (e.Accum) e.Text =", 20},
    {"ccum);", 6},
    {"  (e.Accum", 10},
    {"Accum) e.Text = <", 17},
    {"cum) = ;", 8},
    {" (e.Accum) e.Text", 17},
    {"cum) = (#TokenAccum e.Accum) ;", 30}
  };
  static const refalrts::RASLCommand raa[] = {
    //FAST GEN: ( s.$ t.$ t.$ )
    //GLOBAL GEN: ( s.$ t.$ t.$ )
    // </0 & WriteAlternative/4 (/7 s.idxB#0/9 t.idxBV#0/10 t.idxBVV#0/12 )/8 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icBracketLeftSave, 0, 5, 2},
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icsVarLeft, 0, 9, 5},
    {refalrts::ictVarLeftSave, 0, 10, 5},
    {refalrts::ictVarLeftSave, 0, 12, 5},
    {refalrts::icEmpty, 0, 0, 5},
    {refalrts::icOnFailGoTo, +18, 0, 0},
    // ( # Empty # None # Finitive )
    // </0 & WriteAlternative/4 (/7 # Empty/9 # None/10 # Finitive/12 )/8 >/1
    {refalrts::icIdentTerm, 0, 4, 10},
    {refalrts::icIdentTerm, 0, 1, 12},
    {refalrts::icIdentTerm, 0, 5, 9},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: ' '/4 HalfReuse: ' '/7 HalfReuse: '('/9 HalfReuse: 'e'/10 HalfReuse: '.'/12 HalfReuse: 'A'/8 HalfReuse: 'c'/1 }"cum) = (#TokenAccum e.Accum) ;"/14 )/16 Tile{ ]] }
    {refalrts::icAllocString, 0, 30, 14},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 16},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 0},
    {refalrts::icReinitChar, 0, ' ', 4},
    {refalrts::icReinitChar, 0, ' ', 7},
    {refalrts::icReinitChar, 0, '(', 9},
    {refalrts::icReinitChar, 0, 'e', 10},
    {refalrts::icReinitChar, 0, '.', 12},
    {refalrts::icReinitChar, 0, 'A', 8},
    {refalrts::icReinitChar, 0, 'c', 1},
    {refalrts::icLinkBrackets, 0, 16, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 14, 16, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +23, 0, 0},
    // ( # Empty # None ( t.idx e.idx ) )
    // </0 & WriteAlternative/4 (/7 # Empty/9 # None/10 (/12 t.SrcPos#1/16 e.NextStateName#1/14 )/13 )/8 >/1
    {refalrts::icIdentTerm, 0, 4, 10},
    {refalrts::icBracketTerm, 0, 14, 12},
    {refalrts::icIdentTerm, 0, 5, 9},
    {refalrts::ictVarLeftSave, 0, 16, 14},
    // closed e.NextStateName#1 as range 14
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  t.SrcPos#1/16 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: ' '/4 HalfReuse: ' '/7 HalfReuse: '('/9 HalfReuse: 'e'/10 HalfReuse: '.'/12 }"Accum) e.Text = <"/18 Tile{ AsIs: e.NextStateName#1/14 }" (e.Accum) e.Text"/20 Tile{ HalfReuse: '>'/13 HalfReuse: ';'/8 HalfReuse: )/1 ]] }
    {refalrts::icAllocString, 0, 27, 18},
    {refalrts::icAllocString, 0, 29, 20},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 0},
    {refalrts::icReinitChar, 0, ' ', 4},
    {refalrts::icReinitChar, 0, ' ', 7},
    {refalrts::icReinitChar, 0, '(', 9},
    {refalrts::icReinitChar, 0, 'e', 10},
    {refalrts::icReinitChar, 0, '.', 12},
    {refalrts::icReinitChar, 0, '>', 13},
    {refalrts::icReinitChar, 0, ';', 8},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
    {refalrts::icLinkBrackets, 0, 1, 0},
    {refalrts::icSetRes, 0, 0, 13},
    {refalrts::icSpliceTile, 20, 21, 0},
    {refalrts::icSpliceEVar, 0, 0, 14},
    {refalrts::icSpliceTile, 18, 19, 0},
    {refalrts::icTrash, 0, 0, 12},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +18, 0, 0},
    // ( # Empty # Unnamed # Finitive )
    // </0 & WriteAlternative/4 (/7 # Empty/9 # Unnamed/10 # Finitive/12 )/8 >/1
    {refalrts::icIdentTerm, 0, 3, 10},
    {refalrts::icIdentTerm, 0, 1, 12},
    {refalrts::icIdentTerm, 0, 5, 9},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: ' '/4 HalfReuse: ' '/7 HalfReuse: '('/9 HalfReuse: 'e'/10 HalfReuse: '.'/12 HalfReuse: 'A'/8 HalfReuse: 'c'/1 }"cum) = ;"/14 )/16 Tile{ ]] }
    {refalrts::icAllocString, 0, 28, 14},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 16},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 0},
    {refalrts::icReinitChar, 0, ' ', 4},
    {refalrts::icReinitChar, 0, ' ', 7},
    {refalrts::icReinitChar, 0, '(', 9},
    {refalrts::icReinitChar, 0, 'e', 10},
    {refalrts::icReinitChar, 0, '.', 12},
    {refalrts::icReinitChar, 0, 'A', 8},
    {refalrts::icReinitChar, 0, 'c', 1},
    {refalrts::icLinkBrackets, 0, 16, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 14, 16, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +23, 0, 0},
    // ( # Empty # Unnamed ( t.idx e.idx ) )
    // </0 & WriteAlternative/4 (/7 # Empty/9 # Unnamed/10 (/12 t.SrcPos#1/16 e.NextStateName#1/14 )/13 )/8 >/1
    {refalrts::icIdentTerm, 0, 3, 10},
    {refalrts::icBracketTerm, 0, 14, 12},
    {refalrts::icIdentTerm, 0, 5, 9},
    {refalrts::ictVarLeftSave, 0, 16, 14},
    // closed e.NextStateName#1 as range 14
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  t.SrcPos#1/16 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: ' '/4 HalfReuse: ' '/7 HalfReuse: '('/9 HalfReuse: 'e'/10 HalfReuse: '.'/12 }"Accum) e.Text = <"/18 Tile{ AsIs: e.NextStateName#1/14 }" () e.Text"/20 Tile{ HalfReuse: '>'/13 HalfReuse: ';'/8 HalfReuse: )/1 ]] }
    {refalrts::icAllocString, 0, 27, 18},
    {refalrts::icAllocString, 0, 7, 20},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 0},
    {refalrts::icReinitChar, 0, ' ', 4},
    {refalrts::icReinitChar, 0, ' ', 7},
    {refalrts::icReinitChar, 0, '(', 9},
    {refalrts::icReinitChar, 0, 'e', 10},
    {refalrts::icReinitChar, 0, '.', 12},
    {refalrts::icReinitChar, 0, '>', 13},
    {refalrts::icReinitChar, 0, ';', 8},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
    {refalrts::icLinkBrackets, 0, 1, 0},
    {refalrts::icSetRes, 0, 0, 13},
    {refalrts::icSpliceTile, 20, 21, 0},
    {refalrts::icSpliceEVar, 0, 0, 14},
    {refalrts::icSpliceTile, 18, 19, 0},
    {refalrts::icTrash, 0, 0, 12},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +25, 0, 0},
    // ( # Empty ( # Flush e.idx ) # Finitive )
    // </0 & WriteAlternative/4 (/7 # Empty/9 (/10 # Flush/16 e.FlushName#1/14 )/11 # Finitive/12 )/8 >/1
    {refalrts::icIdentTerm, 0, 1, 12},
    {refalrts::icBracketTerm, 0, 14, 10},
    {refalrts::icIdentTerm, 0, 5, 9},
    {refalrts::icIdentLeftSave, 16, 2, 14},
    // closed e.FlushName#1 as range 14
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } (/17"  (e.Accum"/18 Tile{ HalfReuse: ')'/0 HalfReuse: ' '/4 HalfReuse: '='/7 HalfReuse: ' '/9 HalfReuse: ' '/10 HalfReuse: '('/16 AsIs: e.FlushName#1/14 HalfReuse: ' '/11 HalfReuse: 'e'/12 HalfReuse: '.'/8 HalfReuse: 'A'/1 }"ccum);"/20 )/22 Tile{ ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 17},
    {refalrts::icAllocString, 0, 26, 18},
    {refalrts::icAllocString, 0, 25, 20},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 22},
    {refalrts::icReinitChar, 0, ')', 0},
    {refalrts::icReinitChar, 0, ' ', 4},
    {refalrts::icReinitChar, 0, '=', 7},
    {refalrts::icReinitChar, 0, ' ', 9},
    {refalrts::icReinitChar, 0, ' ', 10},
    {refalrts::icReinitChar, 0, '(', 16},
    {refalrts::icReinitChar, 0, ' ', 11},
    {refalrts::icReinitChar, 0, 'e', 12},
    {refalrts::icReinitChar, 0, '.', 8},
    {refalrts::icReinitChar, 0, 'A', 1},
    {refalrts::icLinkBrackets, 17, 22, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 20, 22, 0},
    {refalrts::icSpliceTile, 0, 1, 0},
    {refalrts::icSpliceTile, 17, 19, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +32, 0, 0},
    // ( # Empty ( # Flush e.idx ) ( t.idx e.idx ) )
    // </0 & WriteAlternative/4 (/7 # Empty/9 (/10 # Flush/18 e.FlushName#1/14 )/11 (/12 t.SrcPos#1/19 e.NextStateName#1/16 )/13 )/8 >/1
    {refalrts::icBracketTerm, 0, 14, 10},
    {refalrts::icBracketTerm, 0, 16, 12},
    {refalrts::icIdentTerm, 0, 5, 9},
    {refalrts::icIdentLeftSave, 18, 2, 14},
    // closed e.FlushName#1 as range 14
    {refalrts::ictVarLeftSave, 0, 19, 16},
    // closed e.NextStateName#1 as range 16
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  t.SrcPos#1/19 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } (/21"  (e.Accum) e.Text ="/22 )/24 Tile{ HalfReuse: (/0 HalfReuse: ' '/4 HalfReuse: ' '/7 HalfReuse: ' '/9 HalfReuse: ' '/10 HalfReuse: '('/18 AsIs: e.FlushName#1/14 HalfReuse: ' '/11 HalfReuse: 'e'/12 }".Accum) <"/25 Tile{ AsIs: e.NextStateName#1/16 }" () e.Text"/27 Tile{ HalfReuse: '>'/13 HalfReuse: ';'/8 HalfReuse: )/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 21},
    {refalrts::icAllocString, 0, 24, 22},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 24},
    {refalrts::icAllocString, 0, 23, 25},
    {refalrts::icAllocString, 0, 7, 27},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 0},
    {refalrts::icReinitChar, 0, ' ', 4},
    {refalrts::icReinitChar, 0, ' ', 7},
    {refalrts::icReinitChar, 0, ' ', 9},
    {refalrts::icReinitChar, 0, ' ', 10},
    {refalrts::icReinitChar, 0, '(', 18},
    {refalrts::icReinitChar, 0, ' ', 11},
    {refalrts::icReinitChar, 0, 'e', 12},
    {refalrts::icReinitChar, 0, '>', 13},
    {refalrts::icReinitChar, 0, ';', 8},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
    {refalrts::icLinkBrackets, 0, 1, 0},
    {refalrts::icLinkBrackets, 21, 24, 0},
    {refalrts::icSetRes, 0, 0, 13},
    {refalrts::icSpliceTile, 27, 28, 0},
    {refalrts::icSpliceEVar, 0, 0, 16},
    {refalrts::icSpliceTile, 25, 26, 0},
    {refalrts::icSpliceTile, 0, 12, 0},
    {refalrts::icSpliceTile, 21, 24, 0},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +21, 0, 0},
    // ( # Empty ( # FlushError e.idx ) # Finitive )
    // </0 & WriteAlternative/4 (/7 # Empty/9 (/10 # FlushError/16 e.Message#1/14 )/11 # Finitive/12 )/8 >/1
    {refalrts::icIdentTerm, 0, 1, 12},
    {refalrts::icBracketTerm, 0, 14, 10},
    {refalrts::icIdentTerm, 0, 5, 9},
    {refalrts::icIdentLeftSave, 16, 0, 14},
    // closed e.Message#1 as range 14
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } (/17"  (e.Accum) = (#TokenE"/18 Tile{ HalfReuse: 'r'/0 HalfReuse: 'r'/4 HalfReuse: 'o'/7 HalfReuse: 'r'/9 HalfReuse: ' '/10 HalfReuse: '\''/16 AsIs: e.Message#1/14 HalfReuse: '\''/11 HalfReuse: ')'/12 HalfReuse: ';'/8 HalfReuse: )/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 17},
    {refalrts::icAllocString, 0, 22, 18},
    {refalrts::icReinitChar, 0, 'r', 0},
    {refalrts::icReinitChar, 0, 'r', 4},
    {refalrts::icReinitChar, 0, 'o', 7},
    {refalrts::icReinitChar, 0, 'r', 9},
    {refalrts::icReinitChar, 0, ' ', 10},
    {refalrts::icReinitChar, 0, '\'', 16},
    {refalrts::icReinitChar, 0, '\'', 11},
    {refalrts::icReinitChar, 0, ')', 12},
    {refalrts::icReinitChar, 0, ';', 8},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
    {refalrts::icLinkBrackets, 17, 1, 0},
    {refalrts::icSetRes, 0, 0, 0},
    {refalrts::icSpliceTile, 17, 19, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +30, 0, 0},
    // ( # Empty ( # FlushError e.idx ) ( t.idx e.idx ) )
    // </0 & WriteAlternative/4 (/7 # Empty/9 (/10 # FlushError/18 e.Message#1/14 )/11 (/12 t.SrcPos#1/19 e.NextStateName#1/16 )/13 )/8 >/1
    {refalrts::icBracketTerm, 0, 14, 10},
    {refalrts::icBracketTerm, 0, 16, 12},
    {refalrts::icIdentTerm, 0, 5, 9},
    {refalrts::icIdentLeftSave, 18, 0, 14},
    // closed e.Message#1 as range 14
    {refalrts::ictVarLeftSave, 0, 19, 16},
    // closed e.NextStateName#1 as range 16
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  t.SrcPos#1/19 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } (/21"  (e.Accum) e.Text = (#TokenE"/22 Tile{ HalfReuse: 'r'/0 HalfReuse: 'r'/4 HalfReuse: 'o'/7 HalfReuse: 'r'/9 HalfReuse: ' '/10 HalfReuse: '\''/18 AsIs: e.Message#1/14 HalfReuse: '\''/11 HalfReuse: ')'/12 }" <"/24 Tile{ AsIs: e.NextStateName#1/16 }" () e.Text"/26 Tile{ HalfReuse: '>'/13 HalfReuse: ';'/8 HalfReuse: )/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 21},
    {refalrts::icAllocString, 0, 21, 22},
    {refalrts::icAllocString, 0, 20, 24},
    {refalrts::icAllocString, 0, 7, 26},
    {refalrts::icReinitChar, 0, 'r', 0},
    {refalrts::icReinitChar, 0, 'r', 4},
    {refalrts::icReinitChar, 0, 'o', 7},
    {refalrts::icReinitChar, 0, 'r', 9},
    {refalrts::icReinitChar, 0, ' ', 10},
    {refalrts::icReinitChar, 0, '\'', 18},
    {refalrts::icReinitChar, 0, '\'', 11},
    {refalrts::icReinitChar, 0, ')', 12},
    {refalrts::icReinitChar, 0, '>', 13},
    {refalrts::icReinitChar, 0, ';', 8},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
    {refalrts::icLinkBrackets, 21, 1, 0},
    {refalrts::icSetRes, 0, 0, 13},
    {refalrts::icSpliceTile, 26, 27, 0},
    {refalrts::icSpliceEVar, 0, 0, 16},
    {refalrts::icSpliceTile, 24, 25, 0},
    {refalrts::icSpliceTile, 0, 12, 0},
    {refalrts::icSpliceTile, 21, 23, 0},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +25, 0, 0},
    // ( s.idx # None # Finitive )
    // </0 & WriteAlternative/4 (/7 s.Char#1/9 # None/10 # Finitive/12 )/8 >/1
    {refalrts::icIdentTerm, 0, 4, 10},
    {refalrts::icIdentTerm, 0, 1, 12},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } (/14"  (e.Accum) "/15 </17 & EC/18 s.Char#1/9/19 >/20" = (#TokenAccum e.Accum"/21 Tile{ HalfReuse: ' '/0 HalfReuse: </4 HalfReuse: & EC/7 AsIs: s.Char#1/9 HalfReuse: >/10 HalfReuse: ')'/12 HalfReuse: ';'/8 HalfReuse: )/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 14},
    {refalrts::icAllocString, 0, 19, 15},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 17},
    {refalrts::icAllocFunc, 0, 0, 18},
    {refalrts::icCopySTVar, 19, 9, 0},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 20},
    {refalrts::icAllocString, 0, 18, 21},
    {refalrts::icReinitChar, 0, ' ', 0},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 4},
    {refalrts::icReinitFunc, 0, 0, 7},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 10},
    {refalrts::icReinitChar, 0, ')', 12},
    {refalrts::icReinitChar, 0, ';', 8},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
    {refalrts::icLinkBrackets, 14, 1, 0},
    {refalrts::icPushStack, 0, 0, 10},
    {refalrts::icPushStack, 0, 0, 4},
    {refalrts::icPushStack, 0, 0, 20},
    {refalrts::icPushStack, 0, 0, 17},
    {refalrts::icSetRes, 0, 0, 0},
    {refalrts::icSpliceTile, 14, 22, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +34, 0, 0},
    // ( s.idx # None ( t.idx e.idx ) )
    // </0 & WriteAlternative/4 (/7 s.Char#1/9 # None/10 (/12 t.SrcPos#1/16 e.NextStateName#1/14 )/13 )/8 >/1
    {refalrts::icIdentTerm, 0, 4, 10},
    {refalrts::icBracketTerm, 0, 14, 12},
    {refalrts::ictVarLeftSave, 0, 16, 14},
    // closed e.NextStateName#1 as range 14
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  t.SrcPos#1/16 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } (/18"  (e.Accum)"/19 Tile{ HalfReuse: ' '/0 HalfReuse: </4 HalfReuse: & EC/7 AsIs: s.Char#1/9 HalfReuse: >/10 HalfReuse: ' '/12 }"e.Text = <"/21 Tile{ AsIs: e.NextStateName#1/14 }" (e.Accum "/23 </25 & EC/26 s.Char#1/9/27 >/28") e.Text"/29 Tile{ HalfReuse: '>'/13 HalfReuse: ';'/8 HalfReuse: )/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 18},
    {refalrts::icAllocString, 0, 15, 19},
    {refalrts::icAllocString, 0, 14, 21},
    {refalrts::icAllocString, 0, 17, 23},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 25},
    {refalrts::icAllocFunc, 0, 0, 26},
    {refalrts::icCopySTVar, 27, 9, 0},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 28},
    {refalrts::icAllocString, 0, 16, 29},
    {refalrts::icReinitChar, 0, ' ', 0},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 4},
    {refalrts::icReinitFunc, 0, 0, 7},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 10},
    {refalrts::icReinitChar, 0, ' ', 12},
    {refalrts::icReinitChar, 0, '>', 13},
    {refalrts::icReinitChar, 0, ';', 8},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
    {refalrts::icLinkBrackets, 18, 1, 0},
    {refalrts::icPushStack, 0, 0, 28},
    {refalrts::icPushStack, 0, 0, 25},
    {refalrts::icPushStack, 0, 0, 10},
    {refalrts::icPushStack, 0, 0, 4},
    {refalrts::icSetRes, 0, 0, 13},
    {refalrts::icSpliceTile, 23, 30, 0},
    {refalrts::icSpliceEVar, 0, 0, 14},
    {refalrts::icSpliceTile, 21, 22, 0},
    {refalrts::icSpliceTile, 0, 12, 0},
    {refalrts::icSpliceTile, 18, 20, 0},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +22, 0, 0},
    // ( s.idx # Unnamed # Finitive )
    // </0 & WriteAlternative/4 (/7 s.Char#1/9 # Unnamed/10 # Finitive/12 )/8 >/1
    {refalrts::icIdentTerm, 0, 3, 10},
    {refalrts::icIdentTerm, 0, 1, 12},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } (/14"  (e.Accum)"/15 Tile{ HalfReuse: ' '/0 HalfReuse: </4 HalfReuse: & EC/7 AsIs: s.Char#1/9 HalfReuse: >/10 HalfReuse: ' '/12 HalfReuse: '='/8 HalfReuse: ' '/1 } ';'/17 )/18 Tile{ ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 14},
    {refalrts::icAllocString, 0, 15, 15},
    {refalrts::icAllocChar, 0, ';', 17},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 18},
    {refalrts::icReinitChar, 0, ' ', 0},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 4},
    {refalrts::icReinitFunc, 0, 0, 7},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 10},
    {refalrts::icReinitChar, 0, ' ', 12},
    {refalrts::icReinitChar, 0, '=', 8},
    {refalrts::icReinitChar, 0, ' ', 1},
    {refalrts::icLinkBrackets, 14, 18, 0},
    {refalrts::icPushStack, 0, 0, 10},
    {refalrts::icPushStack, 0, 0, 4},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 17, 18, 0},
    {refalrts::icSpliceTile, 0, 1, 0},
    {refalrts::icSpliceTile, 14, 16, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +27, 0, 0},
    // ( s.idx # Unnamed ( t.idx e.idx ) )
    // </0 & WriteAlternative/4 (/7 s.Char#1/9 # Unnamed/10 (/12 t.SrcPos#1/16 e.NextStateName#1/14 )/13 )/8 >/1
    {refalrts::icIdentTerm, 0, 3, 10},
    {refalrts::icBracketTerm, 0, 14, 12},
    {refalrts::ictVarLeftSave, 0, 16, 14},
    // closed e.NextStateName#1 as range 14
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  t.SrcPos#1/16 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } (/18"  (e.Accum)"/19 Tile{ HalfReuse: ' '/0 HalfReuse: </4 HalfReuse: & EC/7 AsIs: s.Char#1/9 HalfReuse: >/10 HalfReuse: ' '/12 }"e.Text = <"/21 Tile{ AsIs: e.NextStateName#1/14 }" () e.Text"/23 Tile{ HalfReuse: '>'/13 HalfReuse: ';'/8 HalfReuse: )/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 18},
    {refalrts::icAllocString, 0, 15, 19},
    {refalrts::icAllocString, 0, 14, 21},
    {refalrts::icAllocString, 0, 7, 23},
    {refalrts::icReinitChar, 0, ' ', 0},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 4},
    {refalrts::icReinitFunc, 0, 0, 7},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 10},
    {refalrts::icReinitChar, 0, ' ', 12},
    {refalrts::icReinitChar, 0, '>', 13},
    {refalrts::icReinitChar, 0, ';', 8},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
    {refalrts::icLinkBrackets, 18, 1, 0},
    {refalrts::icPushStack, 0, 0, 10},
    {refalrts::icPushStack, 0, 0, 4},
    {refalrts::icSetRes, 0, 0, 13},
    {refalrts::icSpliceTile, 23, 24, 0},
    {refalrts::icSpliceEVar, 0, 0, 14},
    {refalrts::icSpliceTile, 21, 22, 0},
    {refalrts::icSpliceTile, 0, 12, 0},
    {refalrts::icSpliceTile, 18, 20, 0},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +37, 0, 0},
    // ( s.idx ( # Flush e.idx ) # Finitive )
    // </0 & WriteAlternative/4 (/7 s.Char#1/9 (/10 # Flush/16 e.FlushName#1/14 )/11 # Finitive/12 )/8 >/1
    {refalrts::icIdentTerm, 0, 1, 12},
    {refalrts::icBracketTerm, 0, 14, 10},
    {refalrts::icIdentLeftSave, 16, 2, 14},
    // closed e.FlushName#1 as range 14
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: ' '/4 HalfReuse: ' '/7 }"(e.Accum) "/17 </19 & EC/20 Tile{ AsIs: s.Char#1/9 } >/21" ="/22 Tile{ HalfReuse: ' '/10 HalfReuse: '('/16 AsIs: e.FlushName#1/14 HalfReuse: ' '/11 HalfReuse: 'e'/12 HalfReuse: '.'/8 HalfReuse: 'A'/1 }"ccum "/24 </26 & EC/27 s.Char#1/9/28 >/29");"/30 )/32 Tile{ ]] }
    {refalrts::icAllocString, 0, 6, 17},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 19},
    {refalrts::icAllocFunc, 0, 0, 20},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 21},
    {refalrts::icAllocString, 0, 13, 22},
    {refalrts::icAllocString, 0, 12, 24},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 26},
    {refalrts::icAllocFunc, 0, 0, 27},
    {refalrts::icCopySTVar, 28, 9, 0},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 29},
    {refalrts::icAllocString, 0, 11, 30},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 32},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 0},
    {refalrts::icReinitChar, 0, ' ', 4},
    {refalrts::icReinitChar, 0, ' ', 7},
    {refalrts::icReinitChar, 0, ' ', 10},
    {refalrts::icReinitChar, 0, '(', 16},
    {refalrts::icReinitChar, 0, ' ', 11},
    {refalrts::icReinitChar, 0, 'e', 12},
    {refalrts::icReinitChar, 0, '.', 8},
    {refalrts::icReinitChar, 0, 'A', 1},
    {refalrts::icLinkBrackets, 0, 32, 0},
    {refalrts::icPushStack, 0, 0, 29},
    {refalrts::icPushStack, 0, 0, 26},
    {refalrts::icPushStack, 0, 0, 21},
    {refalrts::icPushStack, 0, 0, 19},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 24, 32, 0},
    {refalrts::icSpliceTile, 10, 1, 0},
    {refalrts::icSpliceTile, 21, 23, 0},
    {refalrts::icSpliceTile, 9, 9, 0},
    {refalrts::icSpliceTile, 17, 20, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +42, 0, 0},
    // ( s.idx ( # Flush e.idx ) ( t.idx e.idx ) )
    // </0 & WriteAlternative/4 (/7 s.Char#1/9 (/10 # Flush/18 e.FlushName#1/14 )/11 (/12 t.SrcPos#1/19 e.NextStateName#1/16 )/13 )/8 >/1
    {refalrts::icBracketTerm, 0, 14, 10},
    {refalrts::icBracketTerm, 0, 16, 12},
    {refalrts::icIdentLeftSave, 18, 2, 14},
    // closed e.FlushName#1 as range 14
    {refalrts::ictVarLeftSave, 0, 19, 16},
    // closed e.NextStateName#1 as range 16
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  t.SrcPos#1/19 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/12 }"  ("/21 Tile{ HalfReuse: 'e'/11 }".Accum)"/23 Tile{ HalfReuse: ' '/0 HalfReuse: </4 HalfReuse: & EC/7 AsIs: s.Char#1/9 HalfReuse: >/10 HalfReuse: ' '/18 }"e.Text = ("/25 Tile{ AsIs: e.FlushName#1/14 }" e.Accum "/27 </29 & EC/30 s.Char#1/9/31 >/32") <"/33 Tile{ AsIs: e.NextStateName#1/16 }" () e.Text"/35 Tile{ HalfReuse: '>'/13 HalfReuse: ';'/8 HalfReuse: )/1 ]] }
    {refalrts::icAllocString, 0, 4, 21},
    {refalrts::icAllocString, 0, 3, 23},
    {refalrts::icAllocString, 0, 10, 25},
    {refalrts::icAllocString, 0, 9, 27},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 29},
    {refalrts::icAllocFunc, 0, 0, 30},
    {refalrts::icCopySTVar, 31, 9, 0},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 32},
    {refalrts::icAllocString, 0, 8, 33},
    {refalrts::icAllocString, 0, 7, 35},
    {refalrts::icReinitChar, 0, 'e', 11},
    {refalrts::icReinitChar, 0, ' ', 0},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 4},
    {refalrts::icReinitFunc, 0, 0, 7},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 10},
    {refalrts::icReinitChar, 0, ' ', 18},
    {refalrts::icReinitChar, 0, '>', 13},
    {refalrts::icReinitChar, 0, ';', 8},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
    {refalrts::icLinkBrackets, 12, 1, 0},
    {refalrts::icPushStack, 0, 0, 32},
    {refalrts::icPushStack, 0, 0, 29},
    {refalrts::icPushStack, 0, 0, 10},
    {refalrts::icPushStack, 0, 0, 4},
    {refalrts::icSetRes, 0, 0, 13},
    {refalrts::icSpliceTile, 35, 36, 0},
    {refalrts::icSpliceEVar, 0, 0, 16},
    {refalrts::icSpliceTile, 27, 34, 0},
    {refalrts::icSpliceEVar, 0, 0, 14},
    {refalrts::icSpliceTile, 25, 26, 0},
    {refalrts::icSpliceTile, 0, 18, 0},
    {refalrts::icSpliceTile, 23, 24, 0},
    {refalrts::icSpliceTile, 11, 11, 0},
    {refalrts::icSpliceTile, 21, 22, 0},
    {refalrts::icSpliceTile, 12, 12, 0},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +26, 0, 0},
    // ( s.idx ( # FlushError e.idx ) # Finitive )
    // </0 & WriteAlternative/4 (/7 s.Char#1/9 (/10 # FlushError/16 e.Message#1/14 )/11 # Finitive/12 )/8 >/1
    {refalrts::icIdentTerm, 0, 1, 12},
    {refalrts::icBracketTerm, 0, 14, 10},
    {refalrts::icIdentLeftSave, 16, 0, 14},
    // closed e.Message#1 as range 14
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: ' '/4 HalfReuse: ' '/7 }"(e.Accum) "/17 </19 & EC/20 Tile{ AsIs: s.Char#1/9 } >/21" = (#TokenError"/22 Tile{ HalfReuse: ' '/10 HalfReuse: '\''/16 AsIs: e.Message#1/14 HalfReuse: '\''/11 HalfReuse: ')'/12 HalfReuse: ';'/8 HalfReuse: )/1 ]] }
    {refalrts::icAllocString, 0, 6, 17},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 19},
    {refalrts::icAllocFunc, 0, 0, 20},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 21},
    {refalrts::icAllocString, 0, 5, 22},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 0},
    {refalrts::icReinitChar, 0, ' ', 4},
    {refalrts::icReinitChar, 0, ' ', 7},
    {refalrts::icReinitChar, 0, ' ', 10},
    {refalrts::icReinitChar, 0, '\'', 16},
    {refalrts::icReinitChar, 0, '\'', 11},
    {refalrts::icReinitChar, 0, ')', 12},
    {refalrts::icReinitChar, 0, ';', 8},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
    {refalrts::icLinkBrackets, 0, 1, 0},
    {refalrts::icPushStack, 0, 0, 21},
    {refalrts::icPushStack, 0, 0, 19},
    {refalrts::icSetRes, 0, 0, 10},
    {refalrts::icSpliceTile, 21, 23, 0},
    {refalrts::icSpliceTile, 9, 9, 0},
    {refalrts::icSpliceTile, 17, 20, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    // ( s.idx ( # FlushError e.idx ) ( t.idx e.idx ) )
    // </0 & WriteAlternative/4 (/7 s.Char#1/9 (/10 # FlushError/18 e.Message#1/14 )/11 (/12 t.SrcPos#1/19 e.NextStateName#1/16 )/13 )/8 >/1
    {refalrts::icBracketTerm, 0, 14, 10},
    {refalrts::icBracketTerm, 0, 16, 12},
    {refalrts::icIdentLeftSave, 18, 0, 14},
    // closed e.Message#1 as range 14
    {refalrts::ictVarLeftSave, 0, 19, 16},
    // closed e.NextStateName#1 as range 16
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  t.SrcPos#1/19 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/12 }"  ("/21 Tile{ HalfReuse: 'e'/11 }".Accum)"/23 Tile{ HalfReuse: ' '/0 HalfReuse: </4 HalfReuse: & EC/7 AsIs: s.Char#1/9 HalfReuse: >/10 HalfReuse: ' '/18 }"e.Text = (#TokenError \'"/25 Tile{ AsIs: e.Message#1/14 }"\') <"/27 Tile{ AsIs: e.NextStateName#1/16 }" () e.Text "/29 Tile{ HalfReuse: '>'/13 HalfReuse: ';'/8 HalfReuse: )/1 ]] }
    {refalrts::icAllocString, 0, 4, 21},
    {refalrts::icAllocString, 0, 3, 23},
    {refalrts::icAllocString, 0, 2, 25},
    {refalrts::icAllocString, 0, 1, 27},
    {refalrts::icAllocString, 0, 0, 29},
    {refalrts::icReinitChar, 0, 'e', 11},
    {refalrts::icReinitChar, 0, ' ', 0},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 4},
    {refalrts::icReinitFunc, 0, 0, 7},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 10},
    {refalrts::icReinitChar, 0, ' ', 18},
    {refalrts::icReinitChar, 0, '>', 13},
    {refalrts::icReinitChar, 0, ';', 8},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
    {refalrts::icLinkBrackets, 12, 1, 0},
    {refalrts::icPushStack, 0, 0, 10},
    {refalrts::icPushStack, 0, 0, 4},
    {refalrts::icSetRes, 0, 0, 13},
    {refalrts::icSpliceTile, 29, 30, 0},
    {refalrts::icSpliceEVar, 0, 0, 16},
    {refalrts::icSpliceTile, 27, 28, 0},
    {refalrts::icSpliceEVar, 0, 0, 14},
    {refalrts::icSpliceTile, 25, 26, 0},
    {refalrts::icSpliceTile, 0, 18, 0},
    {refalrts::icSpliceTile, 23, 24, 0},
    {refalrts::icSpliceTile, 11, 11, 0},
    {refalrts::icSpliceTile, 21, 22, 0},
    {refalrts::icSpliceTile, 12, 12, 0},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[15];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  //FAST GEN: ( s.$ t.$ t.$ )
  //GLOBAL GEN: ( s.$ t.$ t.$ )
  // </0 & WriteAlternative/4 (/7 s.idxB#0/9 t.idxBV#0/10 t.idxBVV#0/12 )/8 >/1
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
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[9], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  context[11] = refalrts::tvar_left( context[10], context[5], context[6] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  context[13] = refalrts::tvar_left( context[12], context[5], context[6] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  do {
    refalrts::start_sentence();
    // ( # Empty # None # Finitive )
    // </0 & WriteAlternative/4 (/7 # Empty/9 # None/10 # Finitive/12 )/8 >/1
    if( ! refalrts::ident_term(  & ident_None<int>::name, context[10] ) )
      continue;
    if( ! refalrts::ident_term(  & ident_Finitive<int>::name, context[12] ) )
      continue;
    if( ! refalrts::ident_term(  & ident_Empty<int>::name, context[9] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: ' '/4 HalfReuse: ' '/7 HalfReuse: '('/9 HalfReuse: 'e'/10 HalfReuse: '.'/12 HalfReuse: 'A'/8 HalfReuse: 'c'/1 }"cum) = (#TokenAccum e.Accum) ;"/14 )/16 Tile{ ]] }
    if( ! refalrts::alloc_chars( context[14], context[15], "cum) = (#TokenAccum e.Accum) ;", 30 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[16] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_char( context[4], ' ' );
    refalrts::reinit_char( context[7], ' ' );
    refalrts::reinit_char( context[9], '(' );
    refalrts::reinit_char( context[10], 'e' );
    refalrts::reinit_char( context[12], '.' );
    refalrts::reinit_char( context[8], 'A' );
    refalrts::reinit_char( context[1], 'c' );
    refalrts::link_brackets( context[0], context[16] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[14], context[16] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( # Empty # None ( t.idx e.idx ) )
    // </0 & WriteAlternative/4 (/7 # Empty/9 # None/10 (/12 t.SrcPos#1/16 e.NextStateName#1/14 )/13 )/8 >/1
    if( ! refalrts::ident_term(  & ident_None<int>::name, context[10] ) )
      continue;
    context[14] = 0;
    context[15] = 0;
    if( ! refalrts::brackets_term( context[14], context[15], context[12] ) )
      continue;
    if( ! refalrts::ident_term(  & ident_Empty<int>::name, context[9] ) )
      continue;
    context[17] = refalrts::tvar_left( context[16], context[14], context[15] );
    if( ! context[17] )
      continue;
    // closed e.NextStateName#1 as range 14

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  t.SrcPos#1/16 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: ' '/4 HalfReuse: ' '/7 HalfReuse: '('/9 HalfReuse: 'e'/10 HalfReuse: '.'/12 }"Accum) e.Text = <"/18 Tile{ AsIs: e.NextStateName#1/14 }" (e.Accum) e.Text"/20 Tile{ HalfReuse: '>'/13 HalfReuse: ';'/8 HalfReuse: )/1 ]] }
    if( ! refalrts::alloc_chars( context[18], context[19], "Accum) e.Text = <", 17 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[20], context[21], " (e.Accum) e.Text", 17 ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_char( context[4], ' ' );
    refalrts::reinit_char( context[7], ' ' );
    refalrts::reinit_char( context[9], '(' );
    refalrts::reinit_char( context[10], 'e' );
    refalrts::reinit_char( context[12], '.' );
    refalrts::reinit_char( context[13], '>' );
    refalrts::reinit_char( context[8], ';' );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[0], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[13];
    res = refalrts::splice_evar( res, context[20], context[21] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    res = refalrts::splice_evar( res, context[18], context[19] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[12], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( # Empty # Unnamed # Finitive )
    // </0 & WriteAlternative/4 (/7 # Empty/9 # Unnamed/10 # Finitive/12 )/8 >/1
    if( ! refalrts::ident_term(  & ident_Unnamed<int>::name, context[10] ) )
      continue;
    if( ! refalrts::ident_term(  & ident_Finitive<int>::name, context[12] ) )
      continue;
    if( ! refalrts::ident_term(  & ident_Empty<int>::name, context[9] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: ' '/4 HalfReuse: ' '/7 HalfReuse: '('/9 HalfReuse: 'e'/10 HalfReuse: '.'/12 HalfReuse: 'A'/8 HalfReuse: 'c'/1 }"cum) = ;"/14 )/16 Tile{ ]] }
    if( ! refalrts::alloc_chars( context[14], context[15], "cum) = ;", 8 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[16] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_char( context[4], ' ' );
    refalrts::reinit_char( context[7], ' ' );
    refalrts::reinit_char( context[9], '(' );
    refalrts::reinit_char( context[10], 'e' );
    refalrts::reinit_char( context[12], '.' );
    refalrts::reinit_char( context[8], 'A' );
    refalrts::reinit_char( context[1], 'c' );
    refalrts::link_brackets( context[0], context[16] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[14], context[16] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( # Empty # Unnamed ( t.idx e.idx ) )
    // </0 & WriteAlternative/4 (/7 # Empty/9 # Unnamed/10 (/12 t.SrcPos#1/16 e.NextStateName#1/14 )/13 )/8 >/1
    if( ! refalrts::ident_term(  & ident_Unnamed<int>::name, context[10] ) )
      continue;
    context[14] = 0;
    context[15] = 0;
    if( ! refalrts::brackets_term( context[14], context[15], context[12] ) )
      continue;
    if( ! refalrts::ident_term(  & ident_Empty<int>::name, context[9] ) )
      continue;
    context[17] = refalrts::tvar_left( context[16], context[14], context[15] );
    if( ! context[17] )
      continue;
    // closed e.NextStateName#1 as range 14

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  t.SrcPos#1/16 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: ' '/4 HalfReuse: ' '/7 HalfReuse: '('/9 HalfReuse: 'e'/10 HalfReuse: '.'/12 }"Accum) e.Text = <"/18 Tile{ AsIs: e.NextStateName#1/14 }" () e.Text"/20 Tile{ HalfReuse: '>'/13 HalfReuse: ';'/8 HalfReuse: )/1 ]] }
    if( ! refalrts::alloc_chars( context[18], context[19], "Accum) e.Text = <", 17 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[20], context[21], " () e.Text", 10 ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_char( context[4], ' ' );
    refalrts::reinit_char( context[7], ' ' );
    refalrts::reinit_char( context[9], '(' );
    refalrts::reinit_char( context[10], 'e' );
    refalrts::reinit_char( context[12], '.' );
    refalrts::reinit_char( context[13], '>' );
    refalrts::reinit_char( context[8], ';' );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[0], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[13];
    res = refalrts::splice_evar( res, context[20], context[21] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    res = refalrts::splice_evar( res, context[18], context[19] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[12], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( # Empty ( # Flush e.idx ) # Finitive )
    // </0 & WriteAlternative/4 (/7 # Empty/9 (/10 # Flush/16 e.FlushName#1/14 )/11 # Finitive/12 )/8 >/1
    if( ! refalrts::ident_term(  & ident_Finitive<int>::name, context[12] ) )
      continue;
    context[14] = 0;
    context[15] = 0;
    if( ! refalrts::brackets_term( context[14], context[15], context[10] ) )
      continue;
    if( ! refalrts::ident_term(  & ident_Empty<int>::name, context[9] ) )
      continue;
    context[16] = refalrts::ident_left(  & ident_Flush<int>::name, context[14], context[15] );
    if( ! context[16] )
      continue;
    // closed e.FlushName#1 as range 14

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } (/17"  (e.Accum"/18 Tile{ HalfReuse: ')'/0 HalfReuse: ' '/4 HalfReuse: '='/7 HalfReuse: ' '/9 HalfReuse: ' '/10 HalfReuse: '('/16 AsIs: e.FlushName#1/14 HalfReuse: ' '/11 HalfReuse: 'e'/12 HalfReuse: '.'/8 HalfReuse: 'A'/1 }"ccum);"/20 )/22 Tile{ ]] }
    if( ! refalrts::alloc_open_bracket( context[17] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[18], context[19], "  (e.Accum", 10 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[20], context[21], "ccum);", 6 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[22] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[0], ')' );
    refalrts::reinit_char( context[4], ' ' );
    refalrts::reinit_char( context[7], '=' );
    refalrts::reinit_char( context[9], ' ' );
    refalrts::reinit_char( context[10], ' ' );
    refalrts::reinit_char( context[16], '(' );
    refalrts::reinit_char( context[11], ' ' );
    refalrts::reinit_char( context[12], 'e' );
    refalrts::reinit_char( context[8], '.' );
    refalrts::reinit_char( context[1], 'A' );
    refalrts::link_brackets( context[17], context[22] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[20], context[22] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    res = refalrts::splice_evar( res, context[17], context[19] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( # Empty ( # Flush e.idx ) ( t.idx e.idx ) )
    // </0 & WriteAlternative/4 (/7 # Empty/9 (/10 # Flush/18 e.FlushName#1/14 )/11 (/12 t.SrcPos#1/19 e.NextStateName#1/16 )/13 )/8 >/1
    context[14] = 0;
    context[15] = 0;
    if( ! refalrts::brackets_term( context[14], context[15], context[10] ) )
      continue;
    context[16] = 0;
    context[17] = 0;
    if( ! refalrts::brackets_term( context[16], context[17], context[12] ) )
      continue;
    if( ! refalrts::ident_term(  & ident_Empty<int>::name, context[9] ) )
      continue;
    context[18] = refalrts::ident_left(  & ident_Flush<int>::name, context[14], context[15] );
    if( ! context[18] )
      continue;
    // closed e.FlushName#1 as range 14
    context[20] = refalrts::tvar_left( context[19], context[16], context[17] );
    if( ! context[20] )
      continue;
    // closed e.NextStateName#1 as range 16

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  t.SrcPos#1/19 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } (/21"  (e.Accum) e.Text ="/22 )/24 Tile{ HalfReuse: (/0 HalfReuse: ' '/4 HalfReuse: ' '/7 HalfReuse: ' '/9 HalfReuse: ' '/10 HalfReuse: '('/18 AsIs: e.FlushName#1/14 HalfReuse: ' '/11 HalfReuse: 'e'/12 }".Accum) <"/25 Tile{ AsIs: e.NextStateName#1/16 }" () e.Text"/27 Tile{ HalfReuse: '>'/13 HalfReuse: ';'/8 HalfReuse: )/1 ]] }
    if( ! refalrts::alloc_open_bracket( context[21] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[22], context[23], "  (e.Accum) e.Text =", 20 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[24] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[25], context[26], ".Accum) <", 9 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[27], context[28], " () e.Text", 10 ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_char( context[4], ' ' );
    refalrts::reinit_char( context[7], ' ' );
    refalrts::reinit_char( context[9], ' ' );
    refalrts::reinit_char( context[10], ' ' );
    refalrts::reinit_char( context[18], '(' );
    refalrts::reinit_char( context[11], ' ' );
    refalrts::reinit_char( context[12], 'e' );
    refalrts::reinit_char( context[13], '>' );
    refalrts::reinit_char( context[8], ';' );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[0], context[1] );
    refalrts::link_brackets( context[21], context[24] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[13];
    res = refalrts::splice_evar( res, context[27], context[28] );
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_evar( res, context[25], context[26] );
    res = refalrts::splice_evar( res, context[0], context[12] );
    res = refalrts::splice_evar( res, context[21], context[24] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( # Empty ( # FlushError e.idx ) # Finitive )
    // </0 & WriteAlternative/4 (/7 # Empty/9 (/10 # FlushError/16 e.Message#1/14 )/11 # Finitive/12 )/8 >/1
    if( ! refalrts::ident_term(  & ident_Finitive<int>::name, context[12] ) )
      continue;
    context[14] = 0;
    context[15] = 0;
    if( ! refalrts::brackets_term( context[14], context[15], context[10] ) )
      continue;
    if( ! refalrts::ident_term(  & ident_Empty<int>::name, context[9] ) )
      continue;
    context[16] = refalrts::ident_left(  & ident_FlushError<int>::name, context[14], context[15] );
    if( ! context[16] )
      continue;
    // closed e.Message#1 as range 14

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } (/17"  (e.Accum) = (#TokenE"/18 Tile{ HalfReuse: 'r'/0 HalfReuse: 'r'/4 HalfReuse: 'o'/7 HalfReuse: 'r'/9 HalfReuse: ' '/10 HalfReuse: '\''/16 AsIs: e.Message#1/14 HalfReuse: '\''/11 HalfReuse: ')'/12 HalfReuse: ';'/8 HalfReuse: )/1 ]] }
    if( ! refalrts::alloc_open_bracket( context[17] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[18], context[19], "  (e.Accum) = (#TokenE", 22 ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[0], 'r' );
    refalrts::reinit_char( context[4], 'r' );
    refalrts::reinit_char( context[7], 'o' );
    refalrts::reinit_char( context[9], 'r' );
    refalrts::reinit_char( context[10], ' ' );
    refalrts::reinit_char( context[16], '\'' );
    refalrts::reinit_char( context[11], '\'' );
    refalrts::reinit_char( context[12], ')' );
    refalrts::reinit_char( context[8], ';' );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[17], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[0];
    res = refalrts::splice_evar( res, context[17], context[19] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( # Empty ( # FlushError e.idx ) ( t.idx e.idx ) )
    // </0 & WriteAlternative/4 (/7 # Empty/9 (/10 # FlushError/18 e.Message#1/14 )/11 (/12 t.SrcPos#1/19 e.NextStateName#1/16 )/13 )/8 >/1
    context[14] = 0;
    context[15] = 0;
    if( ! refalrts::brackets_term( context[14], context[15], context[10] ) )
      continue;
    context[16] = 0;
    context[17] = 0;
    if( ! refalrts::brackets_term( context[16], context[17], context[12] ) )
      continue;
    if( ! refalrts::ident_term(  & ident_Empty<int>::name, context[9] ) )
      continue;
    context[18] = refalrts::ident_left(  & ident_FlushError<int>::name, context[14], context[15] );
    if( ! context[18] )
      continue;
    // closed e.Message#1 as range 14
    context[20] = refalrts::tvar_left( context[19], context[16], context[17] );
    if( ! context[20] )
      continue;
    // closed e.NextStateName#1 as range 16

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  t.SrcPos#1/19 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } (/21"  (e.Accum) e.Text = (#TokenE"/22 Tile{ HalfReuse: 'r'/0 HalfReuse: 'r'/4 HalfReuse: 'o'/7 HalfReuse: 'r'/9 HalfReuse: ' '/10 HalfReuse: '\''/18 AsIs: e.Message#1/14 HalfReuse: '\''/11 HalfReuse: ')'/12 }" <"/24 Tile{ AsIs: e.NextStateName#1/16 }" () e.Text"/26 Tile{ HalfReuse: '>'/13 HalfReuse: ';'/8 HalfReuse: )/1 ]] }
    if( ! refalrts::alloc_open_bracket( context[21] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[22], context[23], "  (e.Accum) e.Text = (#TokenE", 29 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[24], context[25], " <", 2 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[26], context[27], " () e.Text", 10 ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[0], 'r' );
    refalrts::reinit_char( context[4], 'r' );
    refalrts::reinit_char( context[7], 'o' );
    refalrts::reinit_char( context[9], 'r' );
    refalrts::reinit_char( context[10], ' ' );
    refalrts::reinit_char( context[18], '\'' );
    refalrts::reinit_char( context[11], '\'' );
    refalrts::reinit_char( context[12], ')' );
    refalrts::reinit_char( context[13], '>' );
    refalrts::reinit_char( context[8], ';' );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[21], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[13];
    res = refalrts::splice_evar( res, context[26], context[27] );
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_evar( res, context[24], context[25] );
    res = refalrts::splice_evar( res, context[0], context[12] );
    res = refalrts::splice_evar( res, context[21], context[23] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( s.idx # None # Finitive )
    // </0 & WriteAlternative/4 (/7 s.Char#1/9 # None/10 # Finitive/12 )/8 >/1
    if( ! refalrts::ident_term(  & ident_None<int>::name, context[10] ) )
      continue;
    if( ! refalrts::ident_term(  & ident_Finitive<int>::name, context[12] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } (/14"  (e.Accum) "/15 </17 & EC/18 s.Char#1/9/19 >/20" = (#TokenAccum e.Accum"/21 Tile{ HalfReuse: ' '/0 HalfReuse: </4 HalfReuse: & EC/7 AsIs: s.Char#1/9 HalfReuse: >/10 HalfReuse: ')'/12 HalfReuse: ';'/8 HalfReuse: )/1 ]] }
    if( ! refalrts::alloc_open_bracket( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[15], context[16], "  (e.Accum) ", 12 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[17] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[18], EC, "EC" ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[19], context[9]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[20] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[21], context[22], " = (#TokenAccum e.Accum", 23 ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[0], ' ' );
    refalrts::reinit_open_call( context[4] );
    refalrts::reinit_name( context[7], EC, "EC" );
    refalrts::reinit_close_call( context[10] );
    refalrts::reinit_char( context[12], ')' );
    refalrts::reinit_char( context[8], ';' );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[14], context[1] );
    refalrts::push_stack( context[10] );
    refalrts::push_stack( context[4] );
    refalrts::push_stack( context[20] );
    refalrts::push_stack( context[17] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[0];
    res = refalrts::splice_evar( res, context[14], context[22] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( s.idx # None ( t.idx e.idx ) )
    // </0 & WriteAlternative/4 (/7 s.Char#1/9 # None/10 (/12 t.SrcPos#1/16 e.NextStateName#1/14 )/13 )/8 >/1
    if( ! refalrts::ident_term(  & ident_None<int>::name, context[10] ) )
      continue;
    context[14] = 0;
    context[15] = 0;
    if( ! refalrts::brackets_term( context[14], context[15], context[12] ) )
      continue;
    context[17] = refalrts::tvar_left( context[16], context[14], context[15] );
    if( ! context[17] )
      continue;
    // closed e.NextStateName#1 as range 14

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  t.SrcPos#1/16 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } (/18"  (e.Accum)"/19 Tile{ HalfReuse: ' '/0 HalfReuse: </4 HalfReuse: & EC/7 AsIs: s.Char#1/9 HalfReuse: >/10 HalfReuse: ' '/12 }"e.Text = <"/21 Tile{ AsIs: e.NextStateName#1/14 }" (e.Accum "/23 </25 & EC/26 s.Char#1/9/27 >/28") e.Text"/29 Tile{ HalfReuse: '>'/13 HalfReuse: ';'/8 HalfReuse: )/1 ]] }
    if( ! refalrts::alloc_open_bracket( context[18] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[19], context[20], "  (e.Accum)", 11 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[21], context[22], "e.Text = <", 10 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[23], context[24], " (e.Accum ", 10 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[25] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[26], EC, "EC" ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[27], context[9]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[28] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[29], context[30], ") e.Text", 8 ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[0], ' ' );
    refalrts::reinit_open_call( context[4] );
    refalrts::reinit_name( context[7], EC, "EC" );
    refalrts::reinit_close_call( context[10] );
    refalrts::reinit_char( context[12], ' ' );
    refalrts::reinit_char( context[13], '>' );
    refalrts::reinit_char( context[8], ';' );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[18], context[1] );
    refalrts::push_stack( context[28] );
    refalrts::push_stack( context[25] );
    refalrts::push_stack( context[10] );
    refalrts::push_stack( context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[13];
    res = refalrts::splice_evar( res, context[23], context[30] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    res = refalrts::splice_evar( res, context[21], context[22] );
    res = refalrts::splice_evar( res, context[0], context[12] );
    res = refalrts::splice_evar( res, context[18], context[20] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( s.idx # Unnamed # Finitive )
    // </0 & WriteAlternative/4 (/7 s.Char#1/9 # Unnamed/10 # Finitive/12 )/8 >/1
    if( ! refalrts::ident_term(  & ident_Unnamed<int>::name, context[10] ) )
      continue;
    if( ! refalrts::ident_term(  & ident_Finitive<int>::name, context[12] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } (/14"  (e.Accum)"/15 Tile{ HalfReuse: ' '/0 HalfReuse: </4 HalfReuse: & EC/7 AsIs: s.Char#1/9 HalfReuse: >/10 HalfReuse: ' '/12 HalfReuse: '='/8 HalfReuse: ' '/1 } ';'/17 )/18 Tile{ ]] }
    if( ! refalrts::alloc_open_bracket( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[15], context[16], "  (e.Accum)", 11 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[17], ';' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[18] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[0], ' ' );
    refalrts::reinit_open_call( context[4] );
    refalrts::reinit_name( context[7], EC, "EC" );
    refalrts::reinit_close_call( context[10] );
    refalrts::reinit_char( context[12], ' ' );
    refalrts::reinit_char( context[8], '=' );
    refalrts::reinit_char( context[1], ' ' );
    refalrts::link_brackets( context[14], context[18] );
    refalrts::push_stack( context[10] );
    refalrts::push_stack( context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    res = refalrts::splice_evar( res, context[14], context[16] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( s.idx # Unnamed ( t.idx e.idx ) )
    // </0 & WriteAlternative/4 (/7 s.Char#1/9 # Unnamed/10 (/12 t.SrcPos#1/16 e.NextStateName#1/14 )/13 )/8 >/1
    if( ! refalrts::ident_term(  & ident_Unnamed<int>::name, context[10] ) )
      continue;
    context[14] = 0;
    context[15] = 0;
    if( ! refalrts::brackets_term( context[14], context[15], context[12] ) )
      continue;
    context[17] = refalrts::tvar_left( context[16], context[14], context[15] );
    if( ! context[17] )
      continue;
    // closed e.NextStateName#1 as range 14

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  t.SrcPos#1/16 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } (/18"  (e.Accum)"/19 Tile{ HalfReuse: ' '/0 HalfReuse: </4 HalfReuse: & EC/7 AsIs: s.Char#1/9 HalfReuse: >/10 HalfReuse: ' '/12 }"e.Text = <"/21 Tile{ AsIs: e.NextStateName#1/14 }" () e.Text"/23 Tile{ HalfReuse: '>'/13 HalfReuse: ';'/8 HalfReuse: )/1 ]] }
    if( ! refalrts::alloc_open_bracket( context[18] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[19], context[20], "  (e.Accum)", 11 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[21], context[22], "e.Text = <", 10 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[23], context[24], " () e.Text", 10 ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[0], ' ' );
    refalrts::reinit_open_call( context[4] );
    refalrts::reinit_name( context[7], EC, "EC" );
    refalrts::reinit_close_call( context[10] );
    refalrts::reinit_char( context[12], ' ' );
    refalrts::reinit_char( context[13], '>' );
    refalrts::reinit_char( context[8], ';' );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[18], context[1] );
    refalrts::push_stack( context[10] );
    refalrts::push_stack( context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[13];
    res = refalrts::splice_evar( res, context[23], context[24] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    res = refalrts::splice_evar( res, context[21], context[22] );
    res = refalrts::splice_evar( res, context[0], context[12] );
    res = refalrts::splice_evar( res, context[18], context[20] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( s.idx ( # Flush e.idx ) # Finitive )
    // </0 & WriteAlternative/4 (/7 s.Char#1/9 (/10 # Flush/16 e.FlushName#1/14 )/11 # Finitive/12 )/8 >/1
    if( ! refalrts::ident_term(  & ident_Finitive<int>::name, context[12] ) )
      continue;
    context[14] = 0;
    context[15] = 0;
    if( ! refalrts::brackets_term( context[14], context[15], context[10] ) )
      continue;
    context[16] = refalrts::ident_left(  & ident_Flush<int>::name, context[14], context[15] );
    if( ! context[16] )
      continue;
    // closed e.FlushName#1 as range 14

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: ' '/4 HalfReuse: ' '/7 }"(e.Accum) "/17 </19 & EC/20 Tile{ AsIs: s.Char#1/9 } >/21" ="/22 Tile{ HalfReuse: ' '/10 HalfReuse: '('/16 AsIs: e.FlushName#1/14 HalfReuse: ' '/11 HalfReuse: 'e'/12 HalfReuse: '.'/8 HalfReuse: 'A'/1 }"ccum "/24 </26 & EC/27 s.Char#1/9/28 >/29");"/30 )/32 Tile{ ]] }
    if( ! refalrts::alloc_chars( context[17], context[18], "(e.Accum) ", 10 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[19] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[20], EC, "EC" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[21] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[22], context[23], " =", 2 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[24], context[25], "ccum ", 5 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[26] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[27], EC, "EC" ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[28], context[9]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[29] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[30], context[31], ");", 2 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[32] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_char( context[4], ' ' );
    refalrts::reinit_char( context[7], ' ' );
    refalrts::reinit_char( context[10], ' ' );
    refalrts::reinit_char( context[16], '(' );
    refalrts::reinit_char( context[11], ' ' );
    refalrts::reinit_char( context[12], 'e' );
    refalrts::reinit_char( context[8], '.' );
    refalrts::reinit_char( context[1], 'A' );
    refalrts::link_brackets( context[0], context[32] );
    refalrts::push_stack( context[29] );
    refalrts::push_stack( context[26] );
    refalrts::push_stack( context[21] );
    refalrts::push_stack( context[19] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[24], context[32] );
    res = refalrts::splice_evar( res, context[10], context[1] );
    res = refalrts::splice_evar( res, context[21], context[23] );
    res = refalrts::splice_evar( res, context[9], context[9] );
    res = refalrts::splice_evar( res, context[17], context[20] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( s.idx ( # Flush e.idx ) ( t.idx e.idx ) )
    // </0 & WriteAlternative/4 (/7 s.Char#1/9 (/10 # Flush/18 e.FlushName#1/14 )/11 (/12 t.SrcPos#1/19 e.NextStateName#1/16 )/13 )/8 >/1
    context[14] = 0;
    context[15] = 0;
    if( ! refalrts::brackets_term( context[14], context[15], context[10] ) )
      continue;
    context[16] = 0;
    context[17] = 0;
    if( ! refalrts::brackets_term( context[16], context[17], context[12] ) )
      continue;
    context[18] = refalrts::ident_left(  & ident_Flush<int>::name, context[14], context[15] );
    if( ! context[18] )
      continue;
    // closed e.FlushName#1 as range 14
    context[20] = refalrts::tvar_left( context[19], context[16], context[17] );
    if( ! context[20] )
      continue;
    // closed e.NextStateName#1 as range 16

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  t.SrcPos#1/19 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/12 }"  ("/21 Tile{ HalfReuse: 'e'/11 }".Accum)"/23 Tile{ HalfReuse: ' '/0 HalfReuse: </4 HalfReuse: & EC/7 AsIs: s.Char#1/9 HalfReuse: >/10 HalfReuse: ' '/18 }"e.Text = ("/25 Tile{ AsIs: e.FlushName#1/14 }" e.Accum "/27 </29 & EC/30 s.Char#1/9/31 >/32") <"/33 Tile{ AsIs: e.NextStateName#1/16 }" () e.Text"/35 Tile{ HalfReuse: '>'/13 HalfReuse: ';'/8 HalfReuse: )/1 ]] }
    if( ! refalrts::alloc_chars( context[21], context[22], "  (", 3 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[23], context[24], ".Accum)", 7 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[25], context[26], "e.Text = (", 10 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[27], context[28], " e.Accum ", 9 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[29] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[30], EC, "EC" ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[31], context[9]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[32] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[33], context[34], ") <", 3 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[35], context[36], " () e.Text", 10 ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[11], 'e' );
    refalrts::reinit_char( context[0], ' ' );
    refalrts::reinit_open_call( context[4] );
    refalrts::reinit_name( context[7], EC, "EC" );
    refalrts::reinit_close_call( context[10] );
    refalrts::reinit_char( context[18], ' ' );
    refalrts::reinit_char( context[13], '>' );
    refalrts::reinit_char( context[8], ';' );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[12], context[1] );
    refalrts::push_stack( context[32] );
    refalrts::push_stack( context[29] );
    refalrts::push_stack( context[10] );
    refalrts::push_stack( context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[13];
    res = refalrts::splice_evar( res, context[35], context[36] );
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_evar( res, context[27], context[34] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    res = refalrts::splice_evar( res, context[25], context[26] );
    res = refalrts::splice_evar( res, context[0], context[18] );
    res = refalrts::splice_evar( res, context[23], context[24] );
    res = refalrts::splice_evar( res, context[11], context[11] );
    res = refalrts::splice_evar( res, context[21], context[22] );
    res = refalrts::splice_evar( res, context[12], context[12] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( s.idx ( # FlushError e.idx ) # Finitive )
    // </0 & WriteAlternative/4 (/7 s.Char#1/9 (/10 # FlushError/16 e.Message#1/14 )/11 # Finitive/12 )/8 >/1
    if( ! refalrts::ident_term(  & ident_Finitive<int>::name, context[12] ) )
      continue;
    context[14] = 0;
    context[15] = 0;
    if( ! refalrts::brackets_term( context[14], context[15], context[10] ) )
      continue;
    context[16] = refalrts::ident_left(  & ident_FlushError<int>::name, context[14], context[15] );
    if( ! context[16] )
      continue;
    // closed e.Message#1 as range 14

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: ' '/4 HalfReuse: ' '/7 }"(e.Accum) "/17 </19 & EC/20 Tile{ AsIs: s.Char#1/9 } >/21" = (#TokenError"/22 Tile{ HalfReuse: ' '/10 HalfReuse: '\''/16 AsIs: e.Message#1/14 HalfReuse: '\''/11 HalfReuse: ')'/12 HalfReuse: ';'/8 HalfReuse: )/1 ]] }
    if( ! refalrts::alloc_chars( context[17], context[18], "(e.Accum) ", 10 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[19] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[20], EC, "EC" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[21] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[22], context[23], " = (#TokenError", 15 ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_char( context[4], ' ' );
    refalrts::reinit_char( context[7], ' ' );
    refalrts::reinit_char( context[10], ' ' );
    refalrts::reinit_char( context[16], '\'' );
    refalrts::reinit_char( context[11], '\'' );
    refalrts::reinit_char( context[12], ')' );
    refalrts::reinit_char( context[8], ';' );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[0], context[1] );
    refalrts::push_stack( context[21] );
    refalrts::push_stack( context[19] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[10];
    res = refalrts::splice_evar( res, context[21], context[23] );
    res = refalrts::splice_evar( res, context[9], context[9] );
    res = refalrts::splice_evar( res, context[17], context[20] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  // ( s.idx ( # FlushError e.idx ) ( t.idx e.idx ) )
  // </0 & WriteAlternative/4 (/7 s.Char#1/9 (/10 # FlushError/18 e.Message#1/14 )/11 (/12 t.SrcPos#1/19 e.NextStateName#1/16 )/13 )/8 >/1
  context[14] = 0;
  context[15] = 0;
  if( ! refalrts::brackets_term( context[14], context[15], context[10] ) )
    return refalrts::cRecognitionImpossible;
  context[16] = 0;
  context[17] = 0;
  if( ! refalrts::brackets_term( context[16], context[17], context[12] ) )
    return refalrts::cRecognitionImpossible;
  context[18] = refalrts::ident_left(  & ident_FlushError<int>::name, context[14], context[15] );
  if( ! context[18] )
    return refalrts::cRecognitionImpossible;
  // closed e.Message#1 as range 14
  context[20] = refalrts::tvar_left( context[19], context[16], context[17] );
  if( ! context[20] )
    return refalrts::cRecognitionImpossible;
  // closed e.NextStateName#1 as range 16

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  t.SrcPos#1/19 {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ AsIs: (/12 }"  ("/21 Tile{ HalfReuse: 'e'/11 }".Accum)"/23 Tile{ HalfReuse: ' '/0 HalfReuse: </4 HalfReuse: & EC/7 AsIs: s.Char#1/9 HalfReuse: >/10 HalfReuse: ' '/18 }"e.Text = (#TokenError \'"/25 Tile{ AsIs: e.Message#1/14 }"\') <"/27 Tile{ AsIs: e.NextStateName#1/16 }" () e.Text "/29 Tile{ HalfReuse: '>'/13 HalfReuse: ';'/8 HalfReuse: )/1 ]] }
  if( ! refalrts::alloc_chars( context[21], context[22], "  (", 3 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[23], context[24], ".Accum)", 7 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[25], context[26], "e.Text = (#TokenError \'", 23 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[27], context[28], "\') <", 4 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[29], context[30], " () e.Text ", 11 ) )
    return refalrts::cNoMemory;
  refalrts::reinit_char( context[11], 'e' );
  refalrts::reinit_char( context[0], ' ' );
  refalrts::reinit_open_call( context[4] );
  refalrts::reinit_name( context[7], EC, "EC" );
  refalrts::reinit_close_call( context[10] );
  refalrts::reinit_char( context[18], ' ' );
  refalrts::reinit_char( context[13], '>' );
  refalrts::reinit_char( context[8], ';' );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[12], context[1] );
  refalrts::push_stack( context[10] );
  refalrts::push_stack( context[4] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[13];
  res = refalrts::splice_evar( res, context[29], context[30] );
  res = refalrts::splice_evar( res, context[16], context[17] );
  res = refalrts::splice_evar( res, context[27], context[28] );
  res = refalrts::splice_evar( res, context[14], context[15] );
  res = refalrts::splice_evar( res, context[25], context[26] );
  res = refalrts::splice_evar( res, context[0], context[18] );
  res = refalrts::splice_evar( res, context[23], context[24] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  res = refalrts::splice_evar( res, context[21], context[22] );
  res = refalrts::splice_evar( res, context[12], context[12] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
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
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    //FAST GEN: s.$
    //GLOBAL GEN: s.$
    // </0 & EC/4 s.idx#0/5 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icsVarLeft, 0, 5, 2},
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icOnFailGoTo, +10, 0, 0},
    // # Any
    // </0 & EC/4 # Any/5 >/1
    {refalrts::icIdentTerm, 0, 0, 5},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: 's'/0 HalfReuse: '.'/4 HalfReuse: 'A'/5 HalfReuse: 'n'/1 } 'y'/6 Tile{ ]] }
    {refalrts::icAllocChar, 0, 'y', 6},
    {refalrts::icReinitChar, 0, 's', 0},
    {refalrts::icReinitChar, 0, '.', 4},
    {refalrts::icReinitChar, 0, 'A', 5},
    {refalrts::icReinitChar, 0, 'n', 1},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 6, 6, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    // s.idx
    // </0 & EC/4 s.Other#1/5 >/1
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } '\''/6 Tile{ AsIs: </0 Reuse: & EscapeChar/4 AsIs: s.Other#1/5 AsIs: >/1 } '\''/7 Tile{ ]] }
    {refalrts::icAllocChar, 0, '\'', 6},
    {refalrts::icAllocChar, 0, '\'', 7},
    {refalrts::icUpdateFunc, 0, 0, 4},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 7, 7, 0},
    {refalrts::icSpliceTile, 0, 1, 0},
    {refalrts::icSpliceTile, 6, 6, 0},
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
  //FAST GEN: s.$
  //GLOBAL GEN: s.$
  // </0 & EC/4 s.idx#0/5 >/1
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
    // # Any
    // </0 & EC/4 # Any/5 >/1
    if( ! refalrts::ident_term(  & ident_Any<int>::name, context[5] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: 's'/0 HalfReuse: '.'/4 HalfReuse: 'A'/5 HalfReuse: 'n'/1 } 'y'/6 Tile{ ]] }
    if( ! refalrts::alloc_char( context[6], 'y' ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[0], 's' );
    refalrts::reinit_char( context[4], '.' );
    refalrts::reinit_char( context[5], 'A' );
    refalrts::reinit_char( context[1], 'n' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[6], context[6] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  // s.idx
  // </0 & EC/4 s.Other#1/5 >/1

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } '\''/6 Tile{ AsIs: </0 Reuse: & EscapeChar/4 AsIs: s.Other#1/5 AsIs: >/1 } '\''/7 Tile{ ]] }
  if( ! refalrts::alloc_char( context[6], '\'' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[7], '\'' ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], EscapeChar, "EscapeChar" );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[6], context[6] );
  refalrts::use( res );
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
    // </0 & Parse/4 e.Tokens#1/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    // closed e.Tokens#1 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } </5 & ParseElements/6 (/7 (/8"Any"/9 )/11 )/12 Tile{ HalfReuse: (/0 HalfReuse: )/4 AsIs: e.Tokens#1/2 AsIs: >/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 5},
    {refalrts::icAllocFunc, 0, 0, 6},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 7},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icAllocString, 0, 0, 9},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 11},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 12},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 0},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 4},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 5},
    {refalrts::icLinkBrackets, 0, 4, 0},
    {refalrts::icLinkBrackets, 7, 12, 0},
    {refalrts::icLinkBrackets, 8, 11, 0},
    {refalrts::icSetRes, 0, 0, 0},
    {refalrts::icSpliceTile, 5, 12, 0},
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
  // </0 & Parse/4 e.Tokens#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Tokens#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } </5 & ParseElements/6 (/7 (/8"Any"/9 )/11 )/12 Tile{ HalfReuse: (/0 HalfReuse: )/4 AsIs: e.Tokens#1/2 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[5] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[6], ParseElements, "ParseElements" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[9], context[10], "Any", 3 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[12] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_close_bracket( context[4] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[5] );
  refalrts::link_brackets( context[0], context[4] );
  refalrts::link_brackets( context[7], context[12] );
  refalrts::link_brackets( context[8], context[11] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[12] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult ParseElements(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 35 elems
  refalrts::Iter context[35];
  refalrts::zeros( context, 35 );
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
    {" or set name", 12},
    {"eclared", 7},
    {"redeclared", 10},
    {"me", 2}
  };
  static const refalrts::RASLCommand raa[] = {
    //FAST GEN: ( e.$ ) ( e.$ ) t.$ e.$
    //GLOBAL GEN: ( e.$ ) ( e.$ ) t.$ e.$
    // </0 & ParseElements/4 (/7 e.idxB#0/5 )/8 (/11 e.idxTB#0/9 )/12 t.idxTT#0/13 e.idxTTV#0/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icBracketLeftSave, 0, 5, 2},
    {refalrts::icBracketLeftSave, 0, 9, 2},
    // closed e.idxB#0 as range 5
    // closed e.idxTB#0 as range 9
    {refalrts::ictVarLeftSave, 0, 13, 2},
    // closed e.idxTTV#0 as range 2
    {refalrts::icOnFailGoTo, +34, 0, 0},
    // ( e.idx ) ( e.idx ) ( # TSetName s.idx e.idx ) e.idx
    // </0 & ParseElements/4 (/7 e.Sets-B#1/19 (/23 e.Name#1/25 )/24 e.Sets-E#1/5 )/8 (/11 e.Rules#1/9 )/12 (/13 # TSetName/17 s.LineNumber#1/18 e.Name#1/15 )/14 e.Tail#1/2 >/1
    {refalrts::icBracketTerm, 0, 15, 13},
    {refalrts::icIdentLeftSave, 17, 2, 15},
    // closed e.Rules#1 as range 9
    // closed e.Tail#1 as range 2
    {refalrts::icsVarLeft, 0, 18, 15},
    // closed e.Name#1 as range 15
    {refalrts::icSave, 0, 31, 5},
    {refalrts::icEPrepare, 0, 19, 31},
    {refalrts::icEStart, 0, 19, 31},
    {refalrts::icSave, 0, 33, 31},
    {refalrts::icBracketLeftSave, 0, 21, 33},
    {refalrts::iceRepeatLeft, 25, 15, 21},
    {refalrts::icEmpty, 0, 0, 21},
    // closed e.Sets-E#1 as range 33(5)
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  e.Sets-B#1/19 {REMOVED TILE}  e.Sets-E#1/33(5) {REMOVED TILE}  e.Rules#1/9 {REMOVED TILE}  s.LineNumber#1/18 e.Name#1/15 {REMOVED TILE}  e.Tail#1/2 {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ErrorAt/4 HalfReuse: s.LineNumber1 #18/7 } Tile{ HalfReuse: 'S'/8 HalfReuse: 'e'/11 } Tile{ HalfReuse: 't'/12 HalfReuse: ' '/13 HalfReuse: 'n'/17 } Tile{ HalfReuse: 'a'/14 }"me"/27 Tile{ HalfReuse: ' '/23 AsIs: e.Name#1/25 HalfReuse: ' '/24 }"redeclared"/29 Tile{ AsIs: >/1 ]] }
    {refalrts::icAllocString, 0, 3, 27},
    {refalrts::icAllocString, 0, 2, 29},
    {refalrts::icUpdateFunc, 0, 2, 4},
    {refalrts::icReinitSVar, 0, 18, 7},
    {refalrts::icReinitChar, 0, 'S', 8},
    {refalrts::icReinitChar, 0, 'e', 11},
    {refalrts::icReinitChar, 0, 't', 12},
    {refalrts::icReinitChar, 0, ' ', 13},
    {refalrts::icReinitChar, 0, 'n', 17},
    {refalrts::icReinitChar, 0, 'a', 14},
    {refalrts::icReinitChar, 0, ' ', 23},
    {refalrts::icReinitChar, 0, ' ', 24},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceTile, 29, 30, 0},
    {refalrts::icSpliceTile, 23, 24, 0},
    {refalrts::icSpliceTile, 27, 28, 0},
    {refalrts::icSpliceTile, 14, 14, 0},
    {refalrts::icSpliceTile, 12, 17, 0},
    {refalrts::icSpliceTile, 8, 11, 0},
    {refalrts::icTrash, 0, 0, 7},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +23, 0, 0},
    // ( e.idx ) ( e.idx ) ( # TSetName t.idx e.idx ) e.idx
    // </0 & ParseElements/4 (/7 e.Sets#1/5 )/8 (/11 e.Rules#1/9 )/12 (/13 # TSetName/17 t.SrcPos#1/18 e.Name#1/15 )/14 e.Tail#1/2 >/1
    {refalrts::icBracketTerm, 0, 15, 13},
    {refalrts::icIdentLeftSave, 17, 2, 15},
    // closed e.Sets#1 as range 5
    // closed e.Rules#1 as range 9
    // closed e.Tail#1 as range 2
    {refalrts::ictVarLeftSave, 0, 18, 15},
    // closed e.Name#1 as range 15
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  t.SrcPos#1/18 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ParseSetDescr/4 AsIs: (/7 AsIs: e.Sets#1/5 HalfReuse: (/8 } Tile{ AsIs: e.Name#1/15 } )/20 Tile{ HalfReuse: )/17 } Tile{ AsIs: (/11 AsIs: e.Rules#1/9 AsIs: )/12 AsIs: (/13 } e.Name#1/15/21 Tile{ AsIs: )/14 AsIs: e.Tail#1/2 AsIs: >/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 20},
    {refalrts::icCopyEVar, 21, 15, 0},
    {refalrts::icUpdateFunc, 0, 3, 4},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 17},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 13, 14, 0},
    {refalrts::icLinkBrackets, 11, 12, 0},
    {refalrts::icLinkBrackets, 7, 17, 0},
    {refalrts::icLinkBrackets, 8, 20, 0},
    {refalrts::icSetRes, 0, 0, 14},
    {refalrts::icSpliceTile, 21, 22, 0},
    {refalrts::icSpliceTile, 11, 13, 0},
    {refalrts::icSpliceTile, 17, 17, 0},
    {refalrts::icSpliceTile, 20, 20, 0},
    {refalrts::icSpliceEVar, 0, 0, 15},
    {refalrts::icTrash, 0, 0, 8},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +34, 0, 0},
    // ( e.idx ) ( e.idx ) ( # TName s.idx e.idx ) e.idx
    // </0 & ParseElements/4 (/7 e.Sets#1/5 )/8 (/11 e.Rules-B#1/19 (/23 e.Name#1/25 )/24 e.Rules-E#1/9 )/12 (/13 # TName/17 s.LineNumber#1/18 e.Name#1/15 )/14 e.Tail#1/2 >/1
    {refalrts::icBracketTerm, 0, 15, 13},
    {refalrts::icIdentLeftSave, 17, 1, 15},
    // closed e.Sets#1 as range 5
    // closed e.Tail#1 as range 2
    {refalrts::icsVarLeft, 0, 18, 15},
    // closed e.Name#1 as range 15
    {refalrts::icSave, 0, 31, 9},
    {refalrts::icEPrepare, 0, 19, 31},
    {refalrts::icEStart, 0, 19, 31},
    {refalrts::icSave, 0, 33, 31},
    {refalrts::icBracketLeftSave, 0, 21, 33},
    {refalrts::iceRepeatLeft, 25, 15, 21},
    {refalrts::icEmpty, 0, 0, 21},
    // closed e.Rules-E#1 as range 33(9)
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  e.Sets#1/5 {REMOVED TILE}  e.Rules-B#1/19 {REMOVED TILE}  e.Rules-E#1/33(9) {REMOVED TILE}  s.LineNumber#1/18 e.Name#1/15 {REMOVED TILE}  e.Tail#1/2 {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ErrorAt/4 HalfReuse: s.LineNumber1 #18/7 } Tile{ HalfReuse: 'N'/8 HalfReuse: 'a'/11 } 'm'/27 Tile{ HalfReuse: 'e'/14 } Tile{ HalfReuse: ' '/23 AsIs: e.Name#1/25 HalfReuse: ' '/24 } Tile{ HalfReuse: 'r'/12 HalfReuse: 'e'/13 HalfReuse: 'd'/17 }"eclared"/28 Tile{ AsIs: >/1 ]] }
    {refalrts::icAllocChar, 0, 'm', 27},
    {refalrts::icAllocString, 0, 1, 28},
    {refalrts::icUpdateFunc, 0, 2, 4},
    {refalrts::icReinitSVar, 0, 18, 7},
    {refalrts::icReinitChar, 0, 'N', 8},
    {refalrts::icReinitChar, 0, 'a', 11},
    {refalrts::icReinitChar, 0, 'e', 14},
    {refalrts::icReinitChar, 0, ' ', 23},
    {refalrts::icReinitChar, 0, ' ', 24},
    {refalrts::icReinitChar, 0, 'r', 12},
    {refalrts::icReinitChar, 0, 'e', 13},
    {refalrts::icReinitChar, 0, 'd', 17},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceTile, 28, 29, 0},
    {refalrts::icSpliceTile, 12, 17, 0},
    {refalrts::icSpliceTile, 23, 24, 0},
    {refalrts::icSpliceTile, 14, 14, 0},
    {refalrts::icSpliceTile, 27, 27, 0},
    {refalrts::icSpliceTile, 8, 11, 0},
    {refalrts::icTrash, 0, 0, 7},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +23, 0, 0},
    // ( e.idx ) ( e.idx ) ( # TName t.idx e.idx ) e.idx
    // </0 & ParseElements/4 (/7 e.Sets#1/5 )/8 (/11 e.Rules#1/9 )/12 (/13 # TName/17 t.SrcPos#1/18 e.Name#1/15 )/14 e.Tail#1/2 >/1
    {refalrts::icBracketTerm, 0, 15, 13},
    {refalrts::icIdentLeftSave, 17, 1, 15},
    // closed e.Sets#1 as range 5
    // closed e.Rules#1 as range 9
    // closed e.Tail#1 as range 2
    {refalrts::ictVarLeftSave, 0, 18, 15},
    // closed e.Name#1 as range 15
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  t.SrcPos#1/18 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ParseSentence/4 AsIs: (/7 AsIs: e.Sets#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.Rules#1/9 HalfReuse: (/12 } e.Name#1/15/20 Tile{ HalfReuse: )/17 } )/22 Tile{ AsIs: (/13 } Tile{ AsIs: e.Name#1/15 } Tile{ AsIs: )/14 AsIs: e.Tail#1/2 AsIs: >/1 ]] }
    {refalrts::icCopyEVar, 20, 15, 0},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 22},
    {refalrts::icUpdateFunc, 0, 1, 4},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 12},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 17},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 13, 14, 0},
    {refalrts::icLinkBrackets, 11, 22, 0},
    {refalrts::icLinkBrackets, 12, 17, 0},
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icSetRes, 0, 0, 14},
    {refalrts::icSpliceEVar, 0, 0, 15},
    {refalrts::icSpliceTile, 13, 13, 0},
    {refalrts::icSpliceTile, 22, 22, 0},
    {refalrts::icSpliceTile, 17, 17, 0},
    {refalrts::icSpliceTile, 20, 21, 0},
    {refalrts::icTrash, 0, 0, 12},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +8, 0, 0},
    // ( e.idx ) ( e.idx ) ( # TEOF t.idx ) e.idx
    // </0 & ParseElements/4 (/7 e.Sets#1/5 )/8 (/11 e.Rules#1/9 )/12 (/13 # TEOF/17 t.SrcPos#1/18 )/14 e.Tail#1/2 >/1
    {refalrts::icBracketTerm, 0, 15, 13},
    {refalrts::icIdentLeftSave, 17, 0, 15},
    // closed e.Sets#1 as range 5
    // closed e.Rules#1 as range 9
    // closed e.Tail#1 as range 2
    {refalrts::ictVarLeftSave, 0, 18, 15},
    {refalrts::icEmpty, 0, 0, 15},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 & ParseElements/4 (/7 e.Sets#1/5 )/8 (/11 e.Rules#1/9 )/12 (/13 # TEOF/17 t.SrcPos#1/18 )/14 e.Tail#1/2 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ ]] }
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    // ( e.idx ) ( e.idx ) t.idx e.idx
    // </0 & ParseElements/4 (/7 e.Sets#1/5 )/8 (/11 e.Rules#1/9 )/12 t.Unexpected#1/13 e.Tail#1/2 >/1
    // closed e.Sets#1 as range 5
    // closed e.Rules#1 as range 9
    // closed e.Tail#1 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  e.Sets#1/5 {REMOVED TILE}  e.Rules#1/9 {REMOVED TILE}  {REMOVED TILE}  e.Tail#1/2 {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & UnexpectedToken/4 } Tile{ AsIs: t.Unexpected#1/13 } Tile{ HalfReuse: 'n'/7 } Tile{ HalfReuse: 'a'/8 HalfReuse: 'm'/11 } Tile{ HalfReuse: 'e'/12 }" or set name"/15 Tile{ AsIs: >/1 ]] }
    {refalrts::icAllocString, 0, 0, 15},
    {refalrts::icUpdateFunc, 0, 0, 4},
    {refalrts::icReinitChar, 0, 'n', 7},
    {refalrts::icReinitChar, 0, 'a', 8},
    {refalrts::icReinitChar, 0, 'm', 11},
    {refalrts::icReinitChar, 0, 'e', 12},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceTile, 15, 16, 0},
    {refalrts::icSpliceTile, 12, 12, 0},
    {refalrts::icSpliceTile, 8, 11, 0},
    {refalrts::icSpliceTile, 7, 7, 0},
    {refalrts::icSpliceTile, 13, 14, 0},
    {refalrts::icTrash, 0, 0, 4},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[7];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  //FAST GEN: ( e.$ ) ( e.$ ) t.$ e.$
  //GLOBAL GEN: ( e.$ ) ( e.$ ) t.$ e.$
  // </0 & ParseElements/4 (/7 e.idxB#0/5 )/8 (/11 e.idxTB#0/9 )/12 t.idxTT#0/13 e.idxTTV#0/2 >/1
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
  // closed e.idxB#0 as range 5
  // closed e.idxTB#0 as range 9
  context[14] = refalrts::tvar_left( context[13], context[2], context[3] );
  if( ! context[14] )
    return refalrts::cRecognitionImpossible;
  // closed e.idxTTV#0 as range 2
  do {
    refalrts::start_sentence();
    // ( e.idx ) ( e.idx ) ( # TSetName s.idx e.idx ) e.idx
    // </0 & ParseElements/4 (/7 e.Sets-B#1/19 (/23 e.Name#1/25 )/24 e.Sets-E#1/5 )/8 (/11 e.Rules#1/9 )/12 (/13 # TSetName/17 s.LineNumber#1/18 e.Name#1/15 )/14 e.Tail#1/2 >/1
    context[15] = 0;
    context[16] = 0;
    if( ! refalrts::brackets_term( context[15], context[16], context[13] ) )
      continue;
    context[17] = refalrts::ident_left(  & ident_TSetName<int>::name, context[15], context[16] );
    if( ! context[17] )
      continue;
    // closed e.Rules#1 as range 9
    // closed e.Tail#1 as range 2
    if( ! refalrts::svar_left( context[18], context[15], context[16] ) )
      continue;
    // closed e.Name#1 as range 15
    context[31] = context[5];
    context[32] = context[6];
    context[19] = 0;
    context[20] = 0;
    refalrts::start_e_loop();
    do {
      context[33] = context[31];
      context[34] = context[32];
      context[21] = 0;
      context[22] = 0;
      context[23] = refalrts::brackets_left( context[21], context[22], context[33], context[34] );
      if( ! context[23] )
        continue;
      refalrts::bracket_pointers(context[23], context[24]);
      if( ! refalrts::repeated_evar_left( context[25], context[26], context[15], context[16], context[21], context[22] ) )
        continue;
      if( ! refalrts::empty_seq( context[21], context[22] ) )
        continue;
      // closed e.Sets-E#1 as range 33(5)

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE}  e.Sets-B#1/19 {REMOVED TILE}  e.Sets-E#1/33(5) {REMOVED TILE}  e.Rules#1/9 {REMOVED TILE}  s.LineNumber#1/18 e.Name#1/15 {REMOVED TILE}  e.Tail#1/2 {REMOVED TILE} 
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & ErrorAt/4 HalfReuse: s.LineNumber1 #18/7 } Tile{ HalfReuse: 'S'/8 HalfReuse: 'e'/11 } Tile{ HalfReuse: 't'/12 HalfReuse: ' '/13 HalfReuse: 'n'/17 } Tile{ HalfReuse: 'a'/14 }"me"/27 Tile{ HalfReuse: ' '/23 AsIs: e.Name#1/25 HalfReuse: ' '/24 }"redeclared"/29 Tile{ AsIs: >/1 ]] }
      if( ! refalrts::alloc_chars( context[27], context[28], "me", 2 ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_chars( context[29], context[30], "redeclared", 10 ) )
        return refalrts::cNoMemory;
      refalrts::update_name( context[4], ErrorAt, "ErrorAt" );
      refalrts::reinit_svar( context[7], context[18] );
      refalrts::reinit_char( context[8], 'S' );
      refalrts::reinit_char( context[11], 'e' );
      refalrts::reinit_char( context[12], 't' );
      refalrts::reinit_char( context[13], ' ' );
      refalrts::reinit_char( context[17], 'n' );
      refalrts::reinit_char( context[14], 'a' );
      refalrts::reinit_char( context[23], ' ' );
      refalrts::reinit_char( context[24], ' ' );
      refalrts::push_stack( context[1] );
      refalrts::push_stack( context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[29], context[30] );
      res = refalrts::splice_evar( res, context[23], context[24] );
      res = refalrts::splice_evar( res, context[27], context[28] );
      res = refalrts::splice_evar( res, context[14], context[14] );
      res = refalrts::splice_evar( res, context[12], context[17] );
      res = refalrts::splice_evar( res, context[8], context[11] );
      refalrts::use( res );
      refalrts::splice_to_freelist_open( context[7], res );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[19], context[20], context[31], context[32] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) ( e.idx ) ( # TSetName t.idx e.idx ) e.idx
    // </0 & ParseElements/4 (/7 e.Sets#1/5 )/8 (/11 e.Rules#1/9 )/12 (/13 # TSetName/17 t.SrcPos#1/18 e.Name#1/15 )/14 e.Tail#1/2 >/1
    context[15] = 0;
    context[16] = 0;
    if( ! refalrts::brackets_term( context[15], context[16], context[13] ) )
      continue;
    context[17] = refalrts::ident_left(  & ident_TSetName<int>::name, context[15], context[16] );
    if( ! context[17] )
      continue;
    // closed e.Sets#1 as range 5
    // closed e.Rules#1 as range 9
    // closed e.Tail#1 as range 2
    context[19] = refalrts::tvar_left( context[18], context[15], context[16] );
    if( ! context[19] )
      continue;
    // closed e.Name#1 as range 15

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  t.SrcPos#1/18 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ParseSetDescr/4 AsIs: (/7 AsIs: e.Sets#1/5 HalfReuse: (/8 } Tile{ AsIs: e.Name#1/15 } )/20 Tile{ HalfReuse: )/17 } Tile{ AsIs: (/11 AsIs: e.Rules#1/9 AsIs: )/12 AsIs: (/13 } e.Name#1/15/21 Tile{ AsIs: )/14 AsIs: e.Tail#1/2 AsIs: >/1 ]] }
    if( ! refalrts::alloc_close_bracket( context[20] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[21], context[22], context[15], context[16]))
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ParseSetDescr, "ParseSetDescr" );
    refalrts::reinit_open_bracket( context[8] );
    refalrts::reinit_close_bracket( context[17] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[13], context[14] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[7], context[17] );
    refalrts::link_brackets( context[8], context[20] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[14];
    res = refalrts::splice_evar( res, context[21], context[22] );
    res = refalrts::splice_evar( res, context[11], context[13] );
    res = refalrts::splice_evar( res, context[17], context[17] );
    res = refalrts::splice_evar( res, context[20], context[20] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[8], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) ( e.idx ) ( # TName s.idx e.idx ) e.idx
    // </0 & ParseElements/4 (/7 e.Sets#1/5 )/8 (/11 e.Rules-B#1/19 (/23 e.Name#1/25 )/24 e.Rules-E#1/9 )/12 (/13 # TName/17 s.LineNumber#1/18 e.Name#1/15 )/14 e.Tail#1/2 >/1
    context[15] = 0;
    context[16] = 0;
    if( ! refalrts::brackets_term( context[15], context[16], context[13] ) )
      continue;
    context[17] = refalrts::ident_left(  & ident_TName<int>::name, context[15], context[16] );
    if( ! context[17] )
      continue;
    // closed e.Sets#1 as range 5
    // closed e.Tail#1 as range 2
    if( ! refalrts::svar_left( context[18], context[15], context[16] ) )
      continue;
    // closed e.Name#1 as range 15
    context[31] = context[9];
    context[32] = context[10];
    context[19] = 0;
    context[20] = 0;
    refalrts::start_e_loop();
    do {
      context[33] = context[31];
      context[34] = context[32];
      context[21] = 0;
      context[22] = 0;
      context[23] = refalrts::brackets_left( context[21], context[22], context[33], context[34] );
      if( ! context[23] )
        continue;
      refalrts::bracket_pointers(context[23], context[24]);
      if( ! refalrts::repeated_evar_left( context[25], context[26], context[15], context[16], context[21], context[22] ) )
        continue;
      if( ! refalrts::empty_seq( context[21], context[22] ) )
        continue;
      // closed e.Rules-E#1 as range 33(9)

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE}  e.Sets#1/5 {REMOVED TILE}  e.Rules-B#1/19 {REMOVED TILE}  e.Rules-E#1/33(9) {REMOVED TILE}  s.LineNumber#1/18 e.Name#1/15 {REMOVED TILE}  e.Tail#1/2 {REMOVED TILE} 
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & ErrorAt/4 HalfReuse: s.LineNumber1 #18/7 } Tile{ HalfReuse: 'N'/8 HalfReuse: 'a'/11 } 'm'/27 Tile{ HalfReuse: 'e'/14 } Tile{ HalfReuse: ' '/23 AsIs: e.Name#1/25 HalfReuse: ' '/24 } Tile{ HalfReuse: 'r'/12 HalfReuse: 'e'/13 HalfReuse: 'd'/17 }"eclared"/28 Tile{ AsIs: >/1 ]] }
      if( ! refalrts::alloc_char( context[27], 'm' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_chars( context[28], context[29], "eclared", 7 ) )
        return refalrts::cNoMemory;
      refalrts::update_name( context[4], ErrorAt, "ErrorAt" );
      refalrts::reinit_svar( context[7], context[18] );
      refalrts::reinit_char( context[8], 'N' );
      refalrts::reinit_char( context[11], 'a' );
      refalrts::reinit_char( context[14], 'e' );
      refalrts::reinit_char( context[23], ' ' );
      refalrts::reinit_char( context[24], ' ' );
      refalrts::reinit_char( context[12], 'r' );
      refalrts::reinit_char( context[13], 'e' );
      refalrts::reinit_char( context[17], 'd' );
      refalrts::push_stack( context[1] );
      refalrts::push_stack( context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[28], context[29] );
      res = refalrts::splice_evar( res, context[12], context[17] );
      res = refalrts::splice_evar( res, context[23], context[24] );
      res = refalrts::splice_evar( res, context[14], context[14] );
      res = refalrts::splice_evar( res, context[27], context[27] );
      res = refalrts::splice_evar( res, context[8], context[11] );
      refalrts::use( res );
      refalrts::splice_to_freelist_open( context[7], res );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[19], context[20], context[31], context[32] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) ( e.idx ) ( # TName t.idx e.idx ) e.idx
    // </0 & ParseElements/4 (/7 e.Sets#1/5 )/8 (/11 e.Rules#1/9 )/12 (/13 # TName/17 t.SrcPos#1/18 e.Name#1/15 )/14 e.Tail#1/2 >/1
    context[15] = 0;
    context[16] = 0;
    if( ! refalrts::brackets_term( context[15], context[16], context[13] ) )
      continue;
    context[17] = refalrts::ident_left(  & ident_TName<int>::name, context[15], context[16] );
    if( ! context[17] )
      continue;
    // closed e.Sets#1 as range 5
    // closed e.Rules#1 as range 9
    // closed e.Tail#1 as range 2
    context[19] = refalrts::tvar_left( context[18], context[15], context[16] );
    if( ! context[19] )
      continue;
    // closed e.Name#1 as range 15

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  t.SrcPos#1/18 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ParseSentence/4 AsIs: (/7 AsIs: e.Sets#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.Rules#1/9 HalfReuse: (/12 } e.Name#1/15/20 Tile{ HalfReuse: )/17 } )/22 Tile{ AsIs: (/13 } Tile{ AsIs: e.Name#1/15 } Tile{ AsIs: )/14 AsIs: e.Tail#1/2 AsIs: >/1 ]] }
    if (! refalrts::copy_evar(context[20], context[21], context[15], context[16]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[22] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ParseSentence, "ParseSentence" );
    refalrts::reinit_open_bracket( context[12] );
    refalrts::reinit_close_bracket( context[17] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[13], context[14] );
    refalrts::link_brackets( context[11], context[22] );
    refalrts::link_brackets( context[12], context[17] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[14];
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[13], context[13] );
    res = refalrts::splice_evar( res, context[22], context[22] );
    res = refalrts::splice_evar( res, context[17], context[17] );
    res = refalrts::splice_evar( res, context[20], context[21] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[12], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) ( e.idx ) ( # TEOF t.idx ) e.idx
    // </0 & ParseElements/4 (/7 e.Sets#1/5 )/8 (/11 e.Rules#1/9 )/12 (/13 # TEOF/17 t.SrcPos#1/18 )/14 e.Tail#1/2 >/1
    context[15] = 0;
    context[16] = 0;
    if( ! refalrts::brackets_term( context[15], context[16], context[13] ) )
      continue;
    context[17] = refalrts::ident_left(  & ident_TEOF<int>::name, context[15], context[16] );
    if( ! context[17] )
      continue;
    // closed e.Sets#1 as range 5
    // closed e.Rules#1 as range 9
    // closed e.Tail#1 as range 2
    context[19] = refalrts::tvar_left( context[18], context[15], context[16] );
    if( ! context[19] )
      continue;
    if( ! refalrts::empty_seq( context[15], context[16] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & ParseElements/4 (/7 e.Sets#1/5 )/8 (/11 e.Rules#1/9 )/12 (/13 # TEOF/17 t.SrcPos#1/18 )/14 e.Tail#1/2 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  // ( e.idx ) ( e.idx ) t.idx e.idx
  // </0 & ParseElements/4 (/7 e.Sets#1/5 )/8 (/11 e.Rules#1/9 )/12 t.Unexpected#1/13 e.Tail#1/2 >/1
  // closed e.Sets#1 as range 5
  // closed e.Rules#1 as range 9
  // closed e.Tail#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  e.Sets#1/5 {REMOVED TILE}  e.Rules#1/9 {REMOVED TILE}  {REMOVED TILE}  e.Tail#1/2 {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & UnexpectedToken/4 } Tile{ AsIs: t.Unexpected#1/13 } Tile{ HalfReuse: 'n'/7 } Tile{ HalfReuse: 'a'/8 HalfReuse: 'm'/11 } Tile{ HalfReuse: 'e'/12 }" or set name"/15 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_chars( context[15], context[16], " or set name", 12 ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], UnexpectedToken, "UnexpectedToken" );
  refalrts::reinit_char( context[7], 'n' );
  refalrts::reinit_char( context[8], 'a' );
  refalrts::reinit_char( context[11], 'm' );
  refalrts::reinit_char( context[12], 'e' );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[15], context[16] );
  res = refalrts::splice_evar( res, context[12], context[12] );
  res = refalrts::splice_evar( res, context[8], context[11] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[4], res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult ParseSetDescr(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 24 elems
  refalrts::Iter context[24];
  refalrts::zeros( context, 24 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { UnexpectedToken, "UnexpectedToken" },
    { ParseSetDescr_Sets, "ParseSetDescr-Sets" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_TEquals<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    //FAST GEN: ( e.$ ) ( e.$ ) ( e.$ ) t.$ e.$
    //GLOBAL GEN: ( e.$ ) ( e.$ ) ( e.$ ) t.$ e.$
    // </0 & ParseSetDescr/4 (/7 e.idxB#0/5 )/8 (/11 e.idxTB#0/9 )/12 (/15 e.idxTTB#0/13 )/16 t.idxTTT#0/17 e.idxTTTV#0/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icBracketLeftSave, 0, 5, 2},
    {refalrts::icBracketLeftSave, 0, 9, 2},
    {refalrts::icBracketLeftSave, 0, 13, 2},
    // closed e.idxB#0 as range 5
    // closed e.idxTB#0 as range 9
    // closed e.idxTTB#0 as range 13
    {refalrts::ictVarLeftSave, 0, 17, 2},
    // closed e.idxTTTV#0 as range 2
    {refalrts::icOnFailGoTo, +15, 0, 0},
    // ( e.idx ) ( e.idx ) ( e.idx ) ( # TEquals t.idx ) e.idx
    // </0 & ParseSetDescr/4 (/7 e.Sets#1/5 )/8 (/11 e.Rules#1/9 )/12 (/15 e.Name#1/13 )/16 (/17 # TEquals/21 t.SrcPos#1/22 )/18 e.Tail#1/2 >/1
    {refalrts::icBracketTerm, 0, 19, 17},
    {refalrts::icIdentLeftSave, 21, 0, 19},
    // closed e.Sets#1 as range 5
    // closed e.Rules#1 as range 9
    // closed e.Name#1 as range 13
    // closed e.Tail#1 as range 2
    {refalrts::ictVarLeftSave, 0, 22, 19},
    {refalrts::icEmpty, 0, 0, 19},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  (/17 # TEquals/21 t.SrcPos#1/22 )/18 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ParseSetDescr-Sets/4 AsIs: (/7 AsIs: e.Sets#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.Rules#1/9 AsIs: )/12 AsIs: (/15 AsIs: e.Name#1/13 AsIs: )/16 } Tile{ AsIs: e.Tail#1/2 } Tile{ AsIs: >/1 ]] }
    {refalrts::icUpdateFunc, 0, 1, 4},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 15, 16, 0},
    {refalrts::icLinkBrackets, 11, 12, 0},
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icTrash, 0, 0, 16},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    // ( e.idx ) ( e.idx ) ( e.idx ) t.idx e.idx
    // </0 & ParseSetDescr/4 (/7 e.Sets#1/5 )/8 (/11 e.Rules#1/9 )/12 (/15 e.Name#1/13 )/16 t.Unexpected#1/17 e.Tail#1/2 >/1
    // closed e.Sets#1 as range 5
    // closed e.Rules#1 as range 9
    // closed e.Name#1 as range 13
    // closed e.Tail#1 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  (/7 e.Sets#1/5 )/8 (/11 e.Rules#1/9 {REMOVED TILE}  e.Name#1/13 {REMOVED TILE}  {REMOVED TILE}  e.Tail#1/2 {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & UnexpectedToken/4 } Tile{ AsIs: t.Unexpected#1/17 } Tile{ HalfReuse: '\"'/16 } Tile{ HalfReuse: '='/12 HalfReuse: '\"'/15 } Tile{ AsIs: >/1 ]] }
    {refalrts::icUpdateFunc, 0, 0, 4},
    {refalrts::icReinitChar, 0, '\"', 16},
    {refalrts::icReinitChar, 0, '=', 12},
    {refalrts::icReinitChar, 0, '\"', 15},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceTile, 12, 15, 0},
    {refalrts::icSpliceTile, 16, 16, 0},
    {refalrts::icSpliceTile, 17, 18, 0},
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
  //FAST GEN: ( e.$ ) ( e.$ ) ( e.$ ) t.$ e.$
  //GLOBAL GEN: ( e.$ ) ( e.$ ) ( e.$ ) t.$ e.$
  // </0 & ParseSetDescr/4 (/7 e.idxB#0/5 )/8 (/11 e.idxTB#0/9 )/12 (/15 e.idxTTB#0/13 )/16 t.idxTTT#0/17 e.idxTTTV#0/2 >/1
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
  // closed e.idxB#0 as range 5
  // closed e.idxTB#0 as range 9
  // closed e.idxTTB#0 as range 13
  context[18] = refalrts::tvar_left( context[17], context[2], context[3] );
  if( ! context[18] )
    return refalrts::cRecognitionImpossible;
  // closed e.idxTTTV#0 as range 2
  do {
    refalrts::start_sentence();
    // ( e.idx ) ( e.idx ) ( e.idx ) ( # TEquals t.idx ) e.idx
    // </0 & ParseSetDescr/4 (/7 e.Sets#1/5 )/8 (/11 e.Rules#1/9 )/12 (/15 e.Name#1/13 )/16 (/17 # TEquals/21 t.SrcPos#1/22 )/18 e.Tail#1/2 >/1
    context[19] = 0;
    context[20] = 0;
    if( ! refalrts::brackets_term( context[19], context[20], context[17] ) )
      continue;
    context[21] = refalrts::ident_left(  & ident_TEquals<int>::name, context[19], context[20] );
    if( ! context[21] )
      continue;
    // closed e.Sets#1 as range 5
    // closed e.Rules#1 as range 9
    // closed e.Name#1 as range 13
    // closed e.Tail#1 as range 2
    context[23] = refalrts::tvar_left( context[22], context[19], context[20] );
    if( ! context[23] )
      continue;
    if( ! refalrts::empty_seq( context[19], context[20] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  (/17 # TEquals/21 t.SrcPos#1/22 )/18 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ParseSetDescr-Sets/4 AsIs: (/7 AsIs: e.Sets#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.Rules#1/9 AsIs: )/12 AsIs: (/15 AsIs: e.Name#1/13 AsIs: )/16 } Tile{ AsIs: e.Tail#1/2 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name( context[4], ParseSetDescr_Sets, "ParseSetDescr-Sets" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[15], context[16] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[2], context[3] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[16], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  // ( e.idx ) ( e.idx ) ( e.idx ) t.idx e.idx
  // </0 & ParseSetDescr/4 (/7 e.Sets#1/5 )/8 (/11 e.Rules#1/9 )/12 (/15 e.Name#1/13 )/16 t.Unexpected#1/17 e.Tail#1/2 >/1
  // closed e.Sets#1 as range 5
  // closed e.Rules#1 as range 9
  // closed e.Name#1 as range 13
  // closed e.Tail#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  (/7 e.Sets#1/5 )/8 (/11 e.Rules#1/9 {REMOVED TILE}  e.Name#1/13 {REMOVED TILE}  {REMOVED TILE}  e.Tail#1/2 {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & UnexpectedToken/4 } Tile{ AsIs: t.Unexpected#1/17 } Tile{ HalfReuse: '\"'/16 } Tile{ HalfReuse: '='/12 HalfReuse: '\"'/15 } Tile{ AsIs: >/1 ]] }
  refalrts::update_name( context[4], UnexpectedToken, "UnexpectedToken" );
  refalrts::reinit_char( context[16], '\"' );
  refalrts::reinit_char( context[12], '=' );
  refalrts::reinit_char( context[15], '\"' );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[12], context[15] );
  res = refalrts::splice_evar( res, context[16], context[16] );
  res = refalrts::splice_evar( res, context[17], context[18] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[4], res );
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
    { ParseSetDescr_Sets_Aux, "ParseSetDescr-Sets-Aux" },
    { ExtractSets, "ExtractSets" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    // </0 & ParseSetDescr-Sets/4 (/7 e.Sets#1/5 )/8 (/11 e.Rules#1/9 )/12 (/15 e.Name#1/13 )/16 e.Tail#1/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icBracketLeftSave, 0, 5, 2},
    {refalrts::icBracketLeftSave, 0, 9, 2},
    {refalrts::icBracketLeftSave, 0, 13, 2},
    // closed e.Sets#1 as range 5
    // closed e.Rules#1 as range 9
    // closed e.Name#1 as range 13
    // closed e.Tail#1 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ParseSetDescr-Sets-Aux/4 AsIs: (/7 AsIs: e.Sets#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.Rules#1/9 AsIs: )/12 AsIs: (/15 AsIs: e.Name#1/13 AsIs: )/16 } </17 & ExtractSets/18 (/19 )/20 Tile{ AsIs: e.Tail#1/2 } >/21 Tile{ AsIs: >/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 17},
    {refalrts::icAllocFunc, 0, 1, 18},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 19},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 20},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 21},
    {refalrts::icUpdateFunc, 0, 0, 4},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icPushStack, 0, 0, 21},
    {refalrts::icPushStack, 0, 0, 17},
    {refalrts::icLinkBrackets, 19, 20, 0},
    {refalrts::icLinkBrackets, 15, 16, 0},
    {refalrts::icLinkBrackets, 11, 12, 0},
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceTile, 21, 21, 0},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceTile, 17, 20, 0},
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
  // </0 & ParseSetDescr-Sets/4 (/7 e.Sets#1/5 )/8 (/11 e.Rules#1/9 )/12 (/15 e.Name#1/13 )/16 e.Tail#1/2 >/1
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
  // closed e.Sets#1 as range 5
  // closed e.Rules#1 as range 9
  // closed e.Name#1 as range 13
  // closed e.Tail#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & ParseSetDescr-Sets-Aux/4 AsIs: (/7 AsIs: e.Sets#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.Rules#1/9 AsIs: )/12 AsIs: (/15 AsIs: e.Name#1/13 AsIs: )/16 } </17 & ExtractSets/18 (/19 )/20 Tile{ AsIs: e.Tail#1/2 } >/21 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[17] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[18], ExtractSets, "ExtractSets" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[19] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[20] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[21] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ParseSetDescr_Sets_Aux, "ParseSetDescr-Sets-Aux" );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[21] );
  refalrts::push_stack( context[17] );
  refalrts::link_brackets( context[19], context[20] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[21], context[21] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[17], context[20] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult ExtractSets(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
#ifdef INTERPRET
  using refalrts::functions;
  static const refalrts::RefalIdentifier idents[] = {
    & ident_Set<int>::name,
    & ident_TSetName<int>::name,
    & ident_Chars<int>::name,
    & ident_TLiteral<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    //FAST GEN: e.$
    //GLOBAL GEN: ( e.$ ) e.$
    // </0 & ExtractSets/4 (/7 e.idxB#0/5 )/8 e.idxT#0/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icBracketLeftSave, 0, 5, 2},
    // closed e.idxB#0 as range 5
    // closed e.idxT#0 as range 2
    {refalrts::icOnFailGoTo, +17, 0, 0},
    // ( e.idx ) ( # TLiteral t.idx e.idx ) e.idx
    // </0 & ExtractSets/4 (/7 e.Found#1/5 )/8 (/11 # TLiteral/13 t.SrcPos#1/14 e.Content#1/9 )/12 e.Tail#1/2 >/1
    {refalrts::icSave, 0, 16, 2},
    {refalrts::icBracketLeftSave, 0, 9, 16},
    {refalrts::icIdentLeftSave, 13, 3, 9},
    // closed e.Found#1 as range 5
    // closed e.Tail#1 as range 16(2)
    {refalrts::ictVarLeftSave, 0, 14, 9},
    // closed e.Content#1 as range 9
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  t.SrcPos#1/14 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ExtractSets/4 AsIs: (/7 AsIs: e.Found#1/5 HalfReuse: (/8 HalfReuse: # Chars/11 } Tile{ AsIs: e.Content#1/9 } Tile{ HalfReuse: )/13 } Tile{ AsIs: )/12 AsIs: e.Tail#1/16(2) AsIs: >/1 ]] }
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icReinitIdent, 0, 2, 11},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 13},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 7, 12, 0},
    {refalrts::icLinkBrackets, 8, 13, 0},
    {refalrts::icSetRes, 0, 0, 12},
    {refalrts::icSpliceTile, 13, 13, 0},
    {refalrts::icSpliceEVar, 0, 0, 9},
    {refalrts::icTrash, 0, 0, 11},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +17, 0, 0},
    // ( e.idx ) ( # TSetName t.idx e.idx ) e.idx
    // </0 & ExtractSets/4 (/7 e.Found#1/5 )/8 (/11 # TSetName/13 t.SrcPos#1/14 e.Name#1/9 )/12 e.Tail#1/2 >/1
    {refalrts::icSave, 0, 16, 2},
    {refalrts::icBracketLeftSave, 0, 9, 16},
    {refalrts::icIdentLeftSave, 13, 1, 9},
    // closed e.Found#1 as range 5
    // closed e.Tail#1 as range 16(2)
    {refalrts::ictVarLeftSave, 0, 14, 9},
    // closed e.Name#1 as range 9
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ExtractSets/4 AsIs: (/7 AsIs: e.Found#1/5 HalfReuse: (/8 HalfReuse: # Set/11 } Tile{ AsIs: t.SrcPos#1/14 } Tile{ AsIs: e.Name#1/9 } Tile{ HalfReuse: )/13 } Tile{ AsIs: )/12 AsIs: e.Tail#1/16(2) AsIs: >/1 ]] }
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icReinitIdent, 0, 0, 11},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 13},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 7, 12, 0},
    {refalrts::icLinkBrackets, 8, 13, 0},
    {refalrts::icSetRes, 0, 0, 12},
    {refalrts::icSpliceTile, 13, 13, 0},
    {refalrts::icSpliceEVar, 0, 0, 9},
    {refalrts::icSpliceTile, 14, 15, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    // ( e.idx ) e.idx
    // </0 & ExtractSets/4 (/7 e.Found#1/5 )/8 e.OtherTail#1/2 >/1
    // closed e.Found#1 as range 5
    // closed e.OtherTail#1 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 & ExtractSets/4 {REMOVED TILE}  {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Found#1/5 AsIs: )/8 } Tile{ AsIs: e.OtherTail#1/2 } Tile{ ]] }
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceTile, 7, 8, 0},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[2];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  //FAST GEN: e.$
  //GLOBAL GEN: ( e.$ ) e.$
  // </0 & ExtractSets/4 (/7 e.idxB#0/5 )/8 e.idxT#0/2 >/1
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
  // closed e.idxT#0 as range 2
  do {
    refalrts::start_sentence();
    // ( e.idx ) ( # TLiteral t.idx e.idx ) e.idx
    // </0 & ExtractSets/4 (/7 e.Found#1/5 )/8 (/11 # TLiteral/13 t.SrcPos#1/14 e.Content#1/9 )/12 e.Tail#1/2 >/1
    context[16] = context[2];
    context[17] = context[3];
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_left( context[9], context[10], context[16], context[17] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    context[13] = refalrts::ident_left(  & ident_TLiteral<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    // closed e.Found#1 as range 5
    // closed e.Tail#1 as range 16(2)
    context[15] = refalrts::tvar_left( context[14], context[9], context[10] );
    if( ! context[15] )
      continue;
    // closed e.Content#1 as range 9

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  t.SrcPos#1/14 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ExtractSets/4 AsIs: (/7 AsIs: e.Found#1/5 HalfReuse: (/8 HalfReuse: # Chars/11 } Tile{ AsIs: e.Content#1/9 } Tile{ HalfReuse: )/13 } Tile{ AsIs: )/12 AsIs: e.Tail#1/16(2) AsIs: >/1 ]] }
    refalrts::reinit_open_bracket( context[8] );
    refalrts::reinit_ident( context[11], & ident_Chars<int>::name );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[12] );
    refalrts::link_brackets( context[8], context[13] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[12];
    res = refalrts::splice_evar( res, context[13], context[13] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[11], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) ( # TSetName t.idx e.idx ) e.idx
    // </0 & ExtractSets/4 (/7 e.Found#1/5 )/8 (/11 # TSetName/13 t.SrcPos#1/14 e.Name#1/9 )/12 e.Tail#1/2 >/1
    context[16] = context[2];
    context[17] = context[3];
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_left( context[9], context[10], context[16], context[17] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    context[13] = refalrts::ident_left(  & ident_TSetName<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    // closed e.Found#1 as range 5
    // closed e.Tail#1 as range 16(2)
    context[15] = refalrts::tvar_left( context[14], context[9], context[10] );
    if( ! context[15] )
      continue;
    // closed e.Name#1 as range 9

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ExtractSets/4 AsIs: (/7 AsIs: e.Found#1/5 HalfReuse: (/8 HalfReuse: # Set/11 } Tile{ AsIs: t.SrcPos#1/14 } Tile{ AsIs: e.Name#1/9 } Tile{ HalfReuse: )/13 } Tile{ AsIs: )/12 AsIs: e.Tail#1/16(2) AsIs: >/1 ]] }
    refalrts::reinit_open_bracket( context[8] );
    refalrts::reinit_ident( context[11], & ident_Set<int>::name );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[12] );
    refalrts::link_brackets( context[8], context[13] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[12];
    res = refalrts::splice_evar( res, context[13], context[13] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  // ( e.idx ) e.idx
  // </0 & ExtractSets/4 (/7 e.Found#1/5 )/8 e.OtherTail#1/2 >/1
  // closed e.Found#1 as range 5
  // closed e.OtherTail#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  </0 & ExtractSets/4 {REMOVED TILE}  {REMOVED TILE}  >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Found#1/5 AsIs: )/8 } Tile{ AsIs: e.OtherTail#1/2 } Tile{ ]] }
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult ParseSetDescr_Sets_Aux(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 33 elems
  refalrts::Iter context[33];
  refalrts::zeros( context, 33 );
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
    {"ted eo", 6},
    {"nd of set", 9},
    {"ave content", 11}
  };
  static const refalrts::RASLCommand raa[] = {
    //FAST GEN: e.$
    //GLOBAL GEN: ( e.$ ) ( e.$ ) ( e.$ ) ( e.$ ) e.$
    // </0 & ParseSetDescr-Sets-Aux/4 (/7 e.idxB#0/5 )/8 (/11 e.idxTB#0/9 )/12 (/15 e.idxTTB#0/13 )/16 (/19 e.idxTTTB#0/17 )/20 e.idxTTTT#0/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icBracketLeftSave, 0, 5, 2},
    {refalrts::icBracketLeftSave, 0, 9, 2},
    {refalrts::icBracketLeftSave, 0, 13, 2},
    {refalrts::icBracketLeftSave, 0, 17, 2},
    // closed e.idxB#0 as range 5
    // closed e.idxTB#0 as range 9
    // closed e.idxTTB#0 as range 13
    // closed e.idxTTTB#0 as range 17
    // closed e.idxTTTT#0 as range 2
    {refalrts::icOnFailGoTo, +30, 0, 0},
    // ( e.idx ) ( e.idx ) ( e.idx ) ( ) ( # TDot s.idx ) e.idx
    // </0 & ParseSetDescr-Sets-Aux/4 (/7 e.Sets#1/5 )/8 (/11 e.Rules#1/9 )/12 (/15 e.Name#1/13 )/16 (/19 )/20 (/23 # TDot/25 s.LineNumber#1/26 )/24 e.Tail#1/2 >/1
    {refalrts::icSave, 0, 29, 2},
    {refalrts::icBracketLeftSave, 0, 21, 29},
    {refalrts::icIdentLeftSave, 25, 1, 21},
    {refalrts::icSave, 0, 31, 17},
    {refalrts::icEmpty, 0, 0, 31},
    // closed e.Sets#1 as range 5
    // closed e.Rules#1 as range 9
    // closed e.Name#1 as range 13
    // closed e.Tail#1 as range 29(2)
    {refalrts::icsVarLeft, 0, 26, 21},
    {refalrts::icEmpty, 0, 0, 21},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  e.Sets#1/5 {REMOVED TILE}  e.Rules#1/9 {REMOVED TILE}  s.LineNumber#1/26 {REMOVED TILE}  e.Tail#1/29(2) {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ErrorAt/4 HalfReuse: s.LineNumber1 #26/7 } Tile{ HalfReuse: 'S'/8 HalfReuse: 'e'/11 } Tile{ HalfReuse: 't'/12 HalfReuse: ' '/15 AsIs: e.Name#1/13 HalfReuse: ' '/16 HalfReuse: 'n'/19 HalfReuse: 'o'/20 HalfReuse: 't'/23 HalfReuse: ' '/25 } Tile{ HalfReuse: 'h'/24 }"ave content"/27 Tile{ AsIs: >/1 ]] }
    {refalrts::icAllocString, 0, 2, 27},
    {refalrts::icUpdateFunc, 0, 3, 4},
    {refalrts::icReinitSVar, 0, 26, 7},
    {refalrts::icReinitChar, 0, 'S', 8},
    {refalrts::icReinitChar, 0, 'e', 11},
    {refalrts::icReinitChar, 0, 't', 12},
    {refalrts::icReinitChar, 0, ' ', 15},
    {refalrts::icReinitChar, 0, ' ', 16},
    {refalrts::icReinitChar, 0, 'n', 19},
    {refalrts::icReinitChar, 0, 'o', 20},
    {refalrts::icReinitChar, 0, 't', 23},
    {refalrts::icReinitChar, 0, ' ', 25},
    {refalrts::icReinitChar, 0, 'h', 24},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceTile, 27, 28, 0},
    {refalrts::icSpliceTile, 24, 24, 0},
    {refalrts::icSpliceTile, 12, 25, 0},
    {refalrts::icSpliceTile, 8, 11, 0},
    {refalrts::icTrash, 0, 0, 7},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +23, 0, 0},
    // ( e.idx ) ( e.idx ) ( e.idx ) ( e.idx ) ( # TDot t.idx ) e.idx
    // </0 & ParseSetDescr-Sets-Aux/4 (/7 e.Sets#1/5 )/8 (/11 e.Rules#1/9 )/12 (/15 e.Name#1/13 )/16 (/19 e.Body#1/17 )/20 (/23 # TDot/25 t.SrcPos#1/26 )/24 e.Tail#1/2 >/1
    {refalrts::icSave, 0, 29, 2},
    {refalrts::icBracketLeftSave, 0, 21, 29},
    {refalrts::icIdentLeftSave, 25, 1, 21},
    // closed e.Sets#1 as range 5
    // closed e.Rules#1 as range 9
    // closed e.Name#1 as range 13
    // closed e.Body#1 as range 17
    // closed e.Tail#1 as range 29(2)
    {refalrts::ictVarLeftSave, 0, 26, 21},
    {refalrts::icEmpty, 0, 0, 21},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  (/19 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  t.SrcPos#1/26 )/24 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/23 Reuse: # Set/25 } Tile{ AsIs: (/15 AsIs: e.Name#1/13 AsIs: )/16 } Tile{ AsIs: e.Body#1/17 } Tile{ AsIs: )/20 } Tile{ AsIs: </0 Reuse: & ParseElements/4 AsIs: (/7 AsIs: e.Sets#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.Rules#1/9 AsIs: )/12 } Tile{ AsIs: e.Tail#1/29(2) } Tile{ AsIs: >/1 ]] }
    {refalrts::icUpdateIdent, 0, 0, 25},
    {refalrts::icUpdateFunc, 0, 2, 4},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 11, 12, 0},
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icLinkBrackets, 23, 20, 0},
    {refalrts::icLinkBrackets, 15, 16, 0},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceEVar, 0, 0, 29},
    {refalrts::icSpliceTile, 0, 12, 0},
    {refalrts::icSpliceTile, 20, 20, 0},
    {refalrts::icSpliceEVar, 0, 0, 17},
    {refalrts::icSpliceTile, 15, 16, 0},
    {refalrts::icSpliceTile, 23, 25, 0},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +25, 0, 0},
    // ( e.idx ) ( e.idx ) ( e.idx ) ( e.idx ) t.idx e.idx
    // </0 & ParseSetDescr-Sets-Aux/4 (/7 e.Sets#1/5 )/8 (/11 e.Rules#1/9 )/12 (/15 e.Name#1/13 )/16 (/19 e.Body#1/17 )/20 t.Unexpected#1/21 e.Tail#1/2 >/1
    // closed e.Sets#1 as range 5
    // closed e.Rules#1 as range 9
    // closed e.Name#1 as range 13
    // closed e.Body#1 as range 17
    {refalrts::icSave, 0, 29, 2},
    {refalrts::ictVarLeftSave, 0, 21, 29},
    // closed e.Tail#1 as range 29(2)
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  e.Sets#1/5 {REMOVED TILE}  e.Rules#1/9 {REMOVED TILE}  e.Name#1/13 {REMOVED TILE}  e.Body#1/17 {REMOVED TILE}  {REMOVED TILE}  e.Tail#1/29(2) {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & UnexpectedToken/4 } Tile{ AsIs: t.Unexpected#1/21 } Tile{ HalfReuse: 'd'/12 HalfReuse: 'o'/15 } Tile{ HalfReuse: 't'/16 HalfReuse: ' '/19 } Tile{ HalfReuse: 'a'/8 HalfReuse: 't'/11 } Tile{ HalfReuse: ' '/20 } Tile{ HalfReuse: 'e'/7 }"nd of set"/23 Tile{ AsIs: >/1 ]] }
    {refalrts::icAllocString, 0, 1, 23},
    {refalrts::icUpdateFunc, 0, 1, 4},
    {refalrts::icReinitChar, 0, 'd', 12},
    {refalrts::icReinitChar, 0, 'o', 15},
    {refalrts::icReinitChar, 0, 't', 16},
    {refalrts::icReinitChar, 0, ' ', 19},
    {refalrts::icReinitChar, 0, 'a', 8},
    {refalrts::icReinitChar, 0, 't', 11},
    {refalrts::icReinitChar, 0, ' ', 20},
    {refalrts::icReinitChar, 0, 'e', 7},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceTile, 23, 24, 0},
    {refalrts::icSpliceTile, 7, 7, 0},
    {refalrts::icSpliceTile, 20, 20, 0},
    {refalrts::icSpliceTile, 8, 11, 0},
    {refalrts::icSpliceTile, 16, 19, 0},
    {refalrts::icSpliceTile, 12, 15, 0},
    {refalrts::icSpliceTile, 21, 22, 0},
    {refalrts::icTrash, 0, 0, 4},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    // ( e.idx ) ( e.idx ) ( e.idx ) ( e.idx )
    // </0 & ParseSetDescr-Sets-Aux/4 (/7 e.Sets#1/5 )/8 (/11 e.Rules#1/9 )/12 (/15 e.Name#1/13 )/16 (/19 e.Body#1/17 )/20 >/1
    {refalrts::icEmpty, 0, 0, 2},
    // closed e.Sets#1 as range 5
    // closed e.Rules#1 as range 9
    // closed e.Name#1 as range 13
    // closed e.Body#1 as range 17
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  e.Sets#1/5 {REMOVED TILE}  e.Rules#1/9 {REMOVED TILE}  e.Name#1/13 {REMOVED TILE}  e.Body#1/17 {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Error/4 HalfReuse: 'U'/7 } Tile{ HalfReuse: 'n'/16 HalfReuse: 'e'/19 } Tile{ HalfReuse: 'x'/12 HalfReuse: 'p'/15 } Tile{ HalfReuse: 'e'/8 HalfReuse: 'c'/11 }"ted eo"/21 Tile{ HalfReuse: 'f'/20 AsIs: >/1 ]] }
    {refalrts::icAllocString, 0, 0, 21},
    {refalrts::icUpdateFunc, 0, 0, 4},
    {refalrts::icReinitChar, 0, 'U', 7},
    {refalrts::icReinitChar, 0, 'n', 16},
    {refalrts::icReinitChar, 0, 'e', 19},
    {refalrts::icReinitChar, 0, 'x', 12},
    {refalrts::icReinitChar, 0, 'p', 15},
    {refalrts::icReinitChar, 0, 'e', 8},
    {refalrts::icReinitChar, 0, 'c', 11},
    {refalrts::icReinitChar, 0, 'f', 20},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icSetRes, 0, 0, 20},
    {refalrts::icSpliceTile, 21, 22, 0},
    {refalrts::icSpliceTile, 8, 11, 0},
    {refalrts::icSpliceTile, 12, 15, 0},
    {refalrts::icSpliceTile, 16, 19, 0},
    {refalrts::icTrash, 0, 0, 7},
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
  //FAST GEN: e.$
  //GLOBAL GEN: ( e.$ ) ( e.$ ) ( e.$ ) ( e.$ ) e.$
  // </0 & ParseSetDescr-Sets-Aux/4 (/7 e.idxB#0/5 )/8 (/11 e.idxTB#0/9 )/12 (/15 e.idxTTB#0/13 )/16 (/19 e.idxTTTB#0/17 )/20 e.idxTTTT#0/2 >/1
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
  context[17] = 0;
  context[18] = 0;
  context[19] = refalrts::brackets_left( context[17], context[18], context[2], context[3] );
  if( ! context[19] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[19], context[20]);
  // closed e.idxB#0 as range 5
  // closed e.idxTB#0 as range 9
  // closed e.idxTTB#0 as range 13
  // closed e.idxTTTB#0 as range 17
  // closed e.idxTTTT#0 as range 2
  do {
    refalrts::start_sentence();
    // ( e.idx ) ( e.idx ) ( e.idx ) ( ) ( # TDot s.idx ) e.idx
    // </0 & ParseSetDescr-Sets-Aux/4 (/7 e.Sets#1/5 )/8 (/11 e.Rules#1/9 )/12 (/15 e.Name#1/13 )/16 (/19 )/20 (/23 # TDot/25 s.LineNumber#1/26 )/24 e.Tail#1/2 >/1
    context[29] = context[2];
    context[30] = context[3];
    context[21] = 0;
    context[22] = 0;
    context[23] = refalrts::brackets_left( context[21], context[22], context[29], context[30] );
    if( ! context[23] )
      continue;
    refalrts::bracket_pointers(context[23], context[24]);
    context[25] = refalrts::ident_left(  & ident_TDot<int>::name, context[21], context[22] );
    if( ! context[25] )
      continue;
    context[31] = context[17];
    context[32] = context[18];
    if( ! refalrts::empty_seq( context[31], context[32] ) )
      continue;
    // closed e.Sets#1 as range 5
    // closed e.Rules#1 as range 9
    // closed e.Name#1 as range 13
    // closed e.Tail#1 as range 29(2)
    if( ! refalrts::svar_left( context[26], context[21], context[22] ) )
      continue;
    if( ! refalrts::empty_seq( context[21], context[22] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  e.Sets#1/5 {REMOVED TILE}  e.Rules#1/9 {REMOVED TILE}  s.LineNumber#1/26 {REMOVED TILE}  e.Tail#1/29(2) {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ErrorAt/4 HalfReuse: s.LineNumber1 #26/7 } Tile{ HalfReuse: 'S'/8 HalfReuse: 'e'/11 } Tile{ HalfReuse: 't'/12 HalfReuse: ' '/15 AsIs: e.Name#1/13 HalfReuse: ' '/16 HalfReuse: 'n'/19 HalfReuse: 'o'/20 HalfReuse: 't'/23 HalfReuse: ' '/25 } Tile{ HalfReuse: 'h'/24 }"ave content"/27 Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_chars( context[27], context[28], "ave content", 11 ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ErrorAt, "ErrorAt" );
    refalrts::reinit_svar( context[7], context[26] );
    refalrts::reinit_char( context[8], 'S' );
    refalrts::reinit_char( context[11], 'e' );
    refalrts::reinit_char( context[12], 't' );
    refalrts::reinit_char( context[15], ' ' );
    refalrts::reinit_char( context[16], ' ' );
    refalrts::reinit_char( context[19], 'n' );
    refalrts::reinit_char( context[20], 'o' );
    refalrts::reinit_char( context[23], 't' );
    refalrts::reinit_char( context[25], ' ' );
    refalrts::reinit_char( context[24], 'h' );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[27], context[28] );
    res = refalrts::splice_evar( res, context[24], context[24] );
    res = refalrts::splice_evar( res, context[12], context[25] );
    res = refalrts::splice_evar( res, context[8], context[11] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[7], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) ( e.idx ) ( e.idx ) ( e.idx ) ( # TDot t.idx ) e.idx
    // </0 & ParseSetDescr-Sets-Aux/4 (/7 e.Sets#1/5 )/8 (/11 e.Rules#1/9 )/12 (/15 e.Name#1/13 )/16 (/19 e.Body#1/17 )/20 (/23 # TDot/25 t.SrcPos#1/26 )/24 e.Tail#1/2 >/1
    context[29] = context[2];
    context[30] = context[3];
    context[21] = 0;
    context[22] = 0;
    context[23] = refalrts::brackets_left( context[21], context[22], context[29], context[30] );
    if( ! context[23] )
      continue;
    refalrts::bracket_pointers(context[23], context[24]);
    context[25] = refalrts::ident_left(  & ident_TDot<int>::name, context[21], context[22] );
    if( ! context[25] )
      continue;
    // closed e.Sets#1 as range 5
    // closed e.Rules#1 as range 9
    // closed e.Name#1 as range 13
    // closed e.Body#1 as range 17
    // closed e.Tail#1 as range 29(2)
    context[27] = refalrts::tvar_left( context[26], context[21], context[22] );
    if( ! context[27] )
      continue;
    if( ! refalrts::empty_seq( context[21], context[22] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  (/19 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  t.SrcPos#1/26 )/24 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/23 Reuse: # Set/25 } Tile{ AsIs: (/15 AsIs: e.Name#1/13 AsIs: )/16 } Tile{ AsIs: e.Body#1/17 } Tile{ AsIs: )/20 } Tile{ AsIs: </0 Reuse: & ParseElements/4 AsIs: (/7 AsIs: e.Sets#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.Rules#1/9 AsIs: )/12 } Tile{ AsIs: e.Tail#1/29(2) } Tile{ AsIs: >/1 ]] }
    refalrts::update_ident( context[25], & ident_Set<int>::name );
    refalrts::update_name( context[4], ParseElements, "ParseElements" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[23], context[20] );
    refalrts::link_brackets( context[15], context[16] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[29], context[30] );
    res = refalrts::splice_evar( res, context[0], context[12] );
    res = refalrts::splice_evar( res, context[20], context[20] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[23], context[25] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) ( e.idx ) ( e.idx ) ( e.idx ) t.idx e.idx
    // </0 & ParseSetDescr-Sets-Aux/4 (/7 e.Sets#1/5 )/8 (/11 e.Rules#1/9 )/12 (/15 e.Name#1/13 )/16 (/19 e.Body#1/17 )/20 t.Unexpected#1/21 e.Tail#1/2 >/1
    // closed e.Sets#1 as range 5
    // closed e.Rules#1 as range 9
    // closed e.Name#1 as range 13
    // closed e.Body#1 as range 17
    context[29] = context[2];
    context[30] = context[3];
    context[22] = refalrts::tvar_left( context[21], context[29], context[30] );
    if( ! context[22] )
      continue;
    // closed e.Tail#1 as range 29(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  e.Sets#1/5 {REMOVED TILE}  e.Rules#1/9 {REMOVED TILE}  e.Name#1/13 {REMOVED TILE}  e.Body#1/17 {REMOVED TILE}  {REMOVED TILE}  e.Tail#1/29(2) {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & UnexpectedToken/4 } Tile{ AsIs: t.Unexpected#1/21 } Tile{ HalfReuse: 'd'/12 HalfReuse: 'o'/15 } Tile{ HalfReuse: 't'/16 HalfReuse: ' '/19 } Tile{ HalfReuse: 'a'/8 HalfReuse: 't'/11 } Tile{ HalfReuse: ' '/20 } Tile{ HalfReuse: 'e'/7 }"nd of set"/23 Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_chars( context[23], context[24], "nd of set", 9 ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], UnexpectedToken, "UnexpectedToken" );
    refalrts::reinit_char( context[12], 'd' );
    refalrts::reinit_char( context[15], 'o' );
    refalrts::reinit_char( context[16], 't' );
    refalrts::reinit_char( context[19], ' ' );
    refalrts::reinit_char( context[8], 'a' );
    refalrts::reinit_char( context[11], 't' );
    refalrts::reinit_char( context[20], ' ' );
    refalrts::reinit_char( context[7], 'e' );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[23], context[24] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    res = refalrts::splice_evar( res, context[20], context[20] );
    res = refalrts::splice_evar( res, context[8], context[11] );
    res = refalrts::splice_evar( res, context[16], context[19] );
    res = refalrts::splice_evar( res, context[12], context[15] );
    res = refalrts::splice_evar( res, context[21], context[22] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  // ( e.idx ) ( e.idx ) ( e.idx ) ( e.idx )
  // </0 & ParseSetDescr-Sets-Aux/4 (/7 e.Sets#1/5 )/8 (/11 e.Rules#1/9 )/12 (/15 e.Name#1/13 )/16 (/19 e.Body#1/17 )/20 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Sets#1 as range 5
  // closed e.Rules#1 as range 9
  // closed e.Name#1 as range 13
  // closed e.Body#1 as range 17

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  e.Sets#1/5 {REMOVED TILE}  e.Rules#1/9 {REMOVED TILE}  e.Name#1/13 {REMOVED TILE}  e.Body#1/17 {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Error/4 HalfReuse: 'U'/7 } Tile{ HalfReuse: 'n'/16 HalfReuse: 'e'/19 } Tile{ HalfReuse: 'x'/12 HalfReuse: 'p'/15 } Tile{ HalfReuse: 'e'/8 HalfReuse: 'c'/11 }"ted eo"/21 Tile{ HalfReuse: 'f'/20 AsIs: >/1 ]] }
  if( ! refalrts::alloc_chars( context[21], context[22], "ted eo", 6 ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], Error, "Error" );
  refalrts::reinit_char( context[7], 'U' );
  refalrts::reinit_char( context[16], 'n' );
  refalrts::reinit_char( context[19], 'e' );
  refalrts::reinit_char( context[12], 'x' );
  refalrts::reinit_char( context[15], 'p' );
  refalrts::reinit_char( context[8], 'e' );
  refalrts::reinit_char( context[11], 'c' );
  refalrts::reinit_char( context[20], 'f' );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[20];
  res = refalrts::splice_evar( res, context[21], context[22] );
  res = refalrts::splice_evar( res, context[8], context[11] );
  res = refalrts::splice_evar( res, context[12], context[15] );
  res = refalrts::splice_evar( res, context[16], context[19] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[7], res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult ParseSentence(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 26 elems
  refalrts::Iter context[26];
  refalrts::zeros( context, 26 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { UnexpectedToken, "UnexpectedToken" },
    { ExtractAlternatives, "ExtractAlternatives" },
    { ParseSentence_Body, "ParseSentence-Body" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_TEquals<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    //FAST GEN: ( e.$ ) ( e.$ ) ( e.$ ) t.$ e.$
    //GLOBAL GEN: ( e.$ ) ( e.$ ) ( e.$ ) t.$ e.$
    // </0 & ParseSentence/4 (/7 e.idxB#0/5 )/8 (/11 e.idxTB#0/9 )/12 (/15 e.idxTTB#0/13 )/16 t.idxTTT#0/17 e.idxTTTV#0/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icBracketLeftSave, 0, 5, 2},
    {refalrts::icBracketLeftSave, 0, 9, 2},
    {refalrts::icBracketLeftSave, 0, 13, 2},
    // closed e.idxB#0 as range 5
    // closed e.idxTB#0 as range 9
    // closed e.idxTTB#0 as range 13
    {refalrts::ictVarLeftSave, 0, 17, 2},
    // closed e.idxTTTV#0 as range 2
    {refalrts::icOnFailGoTo, +24, 0, 0},
    // ( e.idx ) ( e.idx ) ( e.idx ) ( # TEquals t.idx ) e.idx
    // </0 & ParseSentence/4 (/7 e.Sets#1/5 )/8 (/11 e.Rules#1/9 )/12 (/15 e.Name#1/13 )/16 (/17 # TEquals/21 t.SrcPos#1/22 )/18 e.Tail#1/2 >/1
    {refalrts::icBracketTerm, 0, 19, 17},
    {refalrts::icIdentLeftSave, 21, 0, 19},
    // closed e.Sets#1 as range 5
    // closed e.Rules#1 as range 9
    // closed e.Name#1 as range 13
    // closed e.Tail#1 as range 2
    {refalrts::ictVarLeftSave, 0, 22, 19},
    {refalrts::icEmpty, 0, 0, 19},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  t.SrcPos#1/22 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ParseSentence-Body/4 AsIs: (/7 AsIs: e.Sets#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.Rules#1/9 AsIs: )/12 AsIs: (/15 AsIs: e.Name#1/13 AsIs: )/16 HalfReuse: </17 HalfReuse: & ExtractAlternatives/21 } (/24 Tile{ AsIs: )/18 AsIs: e.Tail#1/2 AsIs: >/1 } >/25 Tile{ ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 24},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 25},
    {refalrts::icUpdateFunc, 0, 2, 4},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 17},
    {refalrts::icReinitFunc, 0, 1, 21},
    {refalrts::icPushStack, 0, 0, 25},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 17},
    {refalrts::icLinkBrackets, 24, 18, 0},
    {refalrts::icLinkBrackets, 15, 16, 0},
    {refalrts::icLinkBrackets, 11, 12, 0},
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 25, 25, 0},
    {refalrts::icSpliceTile, 18, 1, 0},
    {refalrts::icSpliceTile, 24, 24, 0},
    {refalrts::icTrash, 0, 0, 21},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    // ( e.idx ) ( e.idx ) ( e.idx ) t.idx e.idx
    // </0 & ParseSentence/4 (/7 e.Sets#1/5 )/8 (/11 e.Rules#1/9 )/12 (/15 e.Name#1/13 )/16 t.Unexpected#1/17 e.Tail#1/2 >/1
    // closed e.Sets#1 as range 5
    // closed e.Rules#1 as range 9
    // closed e.Name#1 as range 13
    // closed e.Tail#1 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  (/7 e.Sets#1/5 )/8 (/11 e.Rules#1/9 {REMOVED TILE}  e.Name#1/13 {REMOVED TILE}  {REMOVED TILE}  e.Tail#1/2 {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & UnexpectedToken/4 } Tile{ AsIs: t.Unexpected#1/17 } Tile{ HalfReuse: '\"'/16 } Tile{ HalfReuse: '='/12 HalfReuse: '\"'/15 } Tile{ AsIs: >/1 ]] }
    {refalrts::icUpdateFunc, 0, 0, 4},
    {refalrts::icReinitChar, 0, '\"', 16},
    {refalrts::icReinitChar, 0, '=', 12},
    {refalrts::icReinitChar, 0, '\"', 15},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceTile, 12, 15, 0},
    {refalrts::icSpliceTile, 16, 16, 0},
    {refalrts::icSpliceTile, 17, 18, 0},
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
  //FAST GEN: ( e.$ ) ( e.$ ) ( e.$ ) t.$ e.$
  //GLOBAL GEN: ( e.$ ) ( e.$ ) ( e.$ ) t.$ e.$
  // </0 & ParseSentence/4 (/7 e.idxB#0/5 )/8 (/11 e.idxTB#0/9 )/12 (/15 e.idxTTB#0/13 )/16 t.idxTTT#0/17 e.idxTTTV#0/2 >/1
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
  // closed e.idxB#0 as range 5
  // closed e.idxTB#0 as range 9
  // closed e.idxTTB#0 as range 13
  context[18] = refalrts::tvar_left( context[17], context[2], context[3] );
  if( ! context[18] )
    return refalrts::cRecognitionImpossible;
  // closed e.idxTTTV#0 as range 2
  do {
    refalrts::start_sentence();
    // ( e.idx ) ( e.idx ) ( e.idx ) ( # TEquals t.idx ) e.idx
    // </0 & ParseSentence/4 (/7 e.Sets#1/5 )/8 (/11 e.Rules#1/9 )/12 (/15 e.Name#1/13 )/16 (/17 # TEquals/21 t.SrcPos#1/22 )/18 e.Tail#1/2 >/1
    context[19] = 0;
    context[20] = 0;
    if( ! refalrts::brackets_term( context[19], context[20], context[17] ) )
      continue;
    context[21] = refalrts::ident_left(  & ident_TEquals<int>::name, context[19], context[20] );
    if( ! context[21] )
      continue;
    // closed e.Sets#1 as range 5
    // closed e.Rules#1 as range 9
    // closed e.Name#1 as range 13
    // closed e.Tail#1 as range 2
    context[23] = refalrts::tvar_left( context[22], context[19], context[20] );
    if( ! context[23] )
      continue;
    if( ! refalrts::empty_seq( context[19], context[20] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  t.SrcPos#1/22 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ParseSentence-Body/4 AsIs: (/7 AsIs: e.Sets#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.Rules#1/9 AsIs: )/12 AsIs: (/15 AsIs: e.Name#1/13 AsIs: )/16 HalfReuse: </17 HalfReuse: & ExtractAlternatives/21 } (/24 Tile{ AsIs: )/18 AsIs: e.Tail#1/2 AsIs: >/1 } >/25 Tile{ ]] }
    if( ! refalrts::alloc_open_bracket( context[24] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[25] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ParseSentence_Body, "ParseSentence-Body" );
    refalrts::reinit_open_call( context[17] );
    refalrts::reinit_name( context[21], ExtractAlternatives, "ExtractAlternatives" );
    refalrts::push_stack( context[25] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[17] );
    refalrts::link_brackets( context[24], context[18] );
    refalrts::link_brackets( context[15], context[16] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[25], context[25] );
    res = refalrts::splice_evar( res, context[18], context[1] );
    res = refalrts::splice_evar( res, context[24], context[24] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[21], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  // ( e.idx ) ( e.idx ) ( e.idx ) t.idx e.idx
  // </0 & ParseSentence/4 (/7 e.Sets#1/5 )/8 (/11 e.Rules#1/9 )/12 (/15 e.Name#1/13 )/16 t.Unexpected#1/17 e.Tail#1/2 >/1
  // closed e.Sets#1 as range 5
  // closed e.Rules#1 as range 9
  // closed e.Name#1 as range 13
  // closed e.Tail#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  (/7 e.Sets#1/5 )/8 (/11 e.Rules#1/9 {REMOVED TILE}  e.Name#1/13 {REMOVED TILE}  {REMOVED TILE}  e.Tail#1/2 {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & UnexpectedToken/4 } Tile{ AsIs: t.Unexpected#1/17 } Tile{ HalfReuse: '\"'/16 } Tile{ HalfReuse: '='/12 HalfReuse: '\"'/15 } Tile{ AsIs: >/1 ]] }
  refalrts::update_name( context[4], UnexpectedToken, "UnexpectedToken" );
  refalrts::reinit_char( context[16], '\"' );
  refalrts::reinit_char( context[12], '=' );
  refalrts::reinit_char( context[15], '\"' );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[12], context[15] );
  res = refalrts::splice_evar( res, context[16], context[16] );
  res = refalrts::splice_evar( res, context[17], context[18] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[4], res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult ParseSentence_Body(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 28 elems
  refalrts::Iter context[28];
  refalrts::zeros( context, 28 );
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
    {"entence", 7}
  };
  static const refalrts::RASLCommand raa[] = {
    //FAST GEN: ( e.$ ) ( e.$ ) ( e.$ ) ( e.$ ) t.$ e.$
    //GLOBAL GEN: ( e.$ ) ( e.$ ) ( e.$ ) ( e.$ ) t.$ e.$
    // </0 & ParseSentence-Body/4 (/7 e.idxB#0/5 )/8 (/11 e.idxTB#0/9 )/12 (/15 e.idxTTB#0/13 )/16 (/19 e.idxTTTB#0/17 )/20 t.idxTTTT#0/21 e.idxTTTTV#0/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icBracketLeftSave, 0, 5, 2},
    {refalrts::icBracketLeftSave, 0, 9, 2},
    {refalrts::icBracketLeftSave, 0, 13, 2},
    {refalrts::icBracketLeftSave, 0, 17, 2},
    // closed e.idxB#0 as range 5
    // closed e.idxTB#0 as range 9
    // closed e.idxTTB#0 as range 13
    // closed e.idxTTTB#0 as range 17
    {refalrts::ictVarLeftSave, 0, 21, 2},
    // closed e.idxTTTTV#0 as range 2
    {refalrts::icOnFailGoTo, +22, 0, 0},
    // ( e.idx ) ( e.idx ) ( e.idx ) ( e.idx ) ( # TDot t.idx ) e.idx
    // </0 & ParseSentence-Body/4 (/7 e.Sets#1/5 )/8 (/11 e.Rules#1/9 )/12 (/15 e.Name#1/13 )/16 (/19 e.Body#1/17 )/20 (/21 # TDot/25 t.SrcPos#1/26 )/22 e.Tail#1/2 >/1
    {refalrts::icBracketTerm, 0, 23, 21},
    {refalrts::icIdentLeftSave, 25, 1, 23},
    // closed e.Sets#1 as range 5
    // closed e.Rules#1 as range 9
    // closed e.Name#1 as range 13
    // closed e.Body#1 as range 17
    // closed e.Tail#1 as range 2
    {refalrts::ictVarLeftSave, 0, 26, 23},
    {refalrts::icEmpty, 0, 0, 23},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  (/19 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  t.SrcPos#1/26 )/22 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/21 Reuse: # Sentence/25 } Tile{ AsIs: (/15 AsIs: e.Name#1/13 AsIs: )/16 } Tile{ AsIs: e.Body#1/17 } Tile{ AsIs: )/20 } Tile{ AsIs: </0 Reuse: & ParseElements/4 AsIs: (/7 AsIs: e.Sets#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.Rules#1/9 AsIs: )/12 } Tile{ AsIs: e.Tail#1/2 } Tile{ AsIs: >/1 ]] }
    {refalrts::icUpdateIdent, 0, 0, 25},
    {refalrts::icUpdateFunc, 0, 1, 4},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 11, 12, 0},
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icLinkBrackets, 21, 20, 0},
    {refalrts::icLinkBrackets, 15, 16, 0},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceTile, 0, 12, 0},
    {refalrts::icSpliceTile, 20, 20, 0},
    {refalrts::icSpliceEVar, 0, 0, 17},
    {refalrts::icSpliceTile, 15, 16, 0},
    {refalrts::icSpliceTile, 21, 25, 0},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    // ( e.idx ) ( e.idx ) ( e.idx ) ( e.idx ) t.idx e.idx
    // </0 & ParseSentence-Body/4 (/7 e.Sets#1/5 )/8 (/11 e.Rules#1/9 )/12 (/15 e.Name#1/13 )/16 (/19 e.Body#1/17 )/20 t.Unexpected#1/21 e.Tail#1/2 >/1
    // closed e.Sets#1 as range 5
    // closed e.Rules#1 as range 9
    // closed e.Name#1 as range 13
    // closed e.Body#1 as range 17
    // closed e.Tail#1 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  e.Sets#1/5 {REMOVED TILE}  e.Rules#1/9 {REMOVED TILE}  e.Name#1/13 {REMOVED TILE}  e.Body#1/17 {REMOVED TILE}  {REMOVED TILE}  e.Tail#1/2 {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & UnexpectedToken/4 } Tile{ AsIs: t.Unexpected#1/21 } Tile{ HalfReuse: 'e'/12 HalfReuse: 'n'/15 } Tile{ HalfReuse: 'd'/16 HalfReuse: ' '/19 } Tile{ HalfReuse: 'o'/8 HalfReuse: 'f'/11 } Tile{ HalfReuse: ' '/20 } Tile{ HalfReuse: 's'/7 }"entence"/23 Tile{ AsIs: >/1 ]] }
    {refalrts::icAllocString, 0, 0, 23},
    {refalrts::icUpdateFunc, 0, 0, 4},
    {refalrts::icReinitChar, 0, 'e', 12},
    {refalrts::icReinitChar, 0, 'n', 15},
    {refalrts::icReinitChar, 0, 'd', 16},
    {refalrts::icReinitChar, 0, ' ', 19},
    {refalrts::icReinitChar, 0, 'o', 8},
    {refalrts::icReinitChar, 0, 'f', 11},
    {refalrts::icReinitChar, 0, ' ', 20},
    {refalrts::icReinitChar, 0, 's', 7},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceTile, 23, 24, 0},
    {refalrts::icSpliceTile, 7, 7, 0},
    {refalrts::icSpliceTile, 20, 20, 0},
    {refalrts::icSpliceTile, 8, 11, 0},
    {refalrts::icSpliceTile, 16, 19, 0},
    {refalrts::icSpliceTile, 12, 15, 0},
    {refalrts::icSpliceTile, 21, 22, 0},
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
  //FAST GEN: ( e.$ ) ( e.$ ) ( e.$ ) ( e.$ ) t.$ e.$
  //GLOBAL GEN: ( e.$ ) ( e.$ ) ( e.$ ) ( e.$ ) t.$ e.$
  // </0 & ParseSentence-Body/4 (/7 e.idxB#0/5 )/8 (/11 e.idxTB#0/9 )/12 (/15 e.idxTTB#0/13 )/16 (/19 e.idxTTTB#0/17 )/20 t.idxTTTT#0/21 e.idxTTTTV#0/2 >/1
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
  context[17] = 0;
  context[18] = 0;
  context[19] = refalrts::brackets_left( context[17], context[18], context[2], context[3] );
  if( ! context[19] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[19], context[20]);
  // closed e.idxB#0 as range 5
  // closed e.idxTB#0 as range 9
  // closed e.idxTTB#0 as range 13
  // closed e.idxTTTB#0 as range 17
  context[22] = refalrts::tvar_left( context[21], context[2], context[3] );
  if( ! context[22] )
    return refalrts::cRecognitionImpossible;
  // closed e.idxTTTTV#0 as range 2
  do {
    refalrts::start_sentence();
    // ( e.idx ) ( e.idx ) ( e.idx ) ( e.idx ) ( # TDot t.idx ) e.idx
    // </0 & ParseSentence-Body/4 (/7 e.Sets#1/5 )/8 (/11 e.Rules#1/9 )/12 (/15 e.Name#1/13 )/16 (/19 e.Body#1/17 )/20 (/21 # TDot/25 t.SrcPos#1/26 )/22 e.Tail#1/2 >/1
    context[23] = 0;
    context[24] = 0;
    if( ! refalrts::brackets_term( context[23], context[24], context[21] ) )
      continue;
    context[25] = refalrts::ident_left(  & ident_TDot<int>::name, context[23], context[24] );
    if( ! context[25] )
      continue;
    // closed e.Sets#1 as range 5
    // closed e.Rules#1 as range 9
    // closed e.Name#1 as range 13
    // closed e.Body#1 as range 17
    // closed e.Tail#1 as range 2
    context[27] = refalrts::tvar_left( context[26], context[23], context[24] );
    if( ! context[27] )
      continue;
    if( ! refalrts::empty_seq( context[23], context[24] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  (/19 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  t.SrcPos#1/26 )/22 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/21 Reuse: # Sentence/25 } Tile{ AsIs: (/15 AsIs: e.Name#1/13 AsIs: )/16 } Tile{ AsIs: e.Body#1/17 } Tile{ AsIs: )/20 } Tile{ AsIs: </0 Reuse: & ParseElements/4 AsIs: (/7 AsIs: e.Sets#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.Rules#1/9 AsIs: )/12 } Tile{ AsIs: e.Tail#1/2 } Tile{ AsIs: >/1 ]] }
    refalrts::update_ident( context[25], & ident_Sentence<int>::name );
    refalrts::update_name( context[4], ParseElements, "ParseElements" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[21], context[20] );
    refalrts::link_brackets( context[15], context[16] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[0], context[12] );
    res = refalrts::splice_evar( res, context[20], context[20] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[21], context[25] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  // ( e.idx ) ( e.idx ) ( e.idx ) ( e.idx ) t.idx e.idx
  // </0 & ParseSentence-Body/4 (/7 e.Sets#1/5 )/8 (/11 e.Rules#1/9 )/12 (/15 e.Name#1/13 )/16 (/19 e.Body#1/17 )/20 t.Unexpected#1/21 e.Tail#1/2 >/1
  // closed e.Sets#1 as range 5
  // closed e.Rules#1 as range 9
  // closed e.Name#1 as range 13
  // closed e.Body#1 as range 17
  // closed e.Tail#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  e.Sets#1/5 {REMOVED TILE}  e.Rules#1/9 {REMOVED TILE}  e.Name#1/13 {REMOVED TILE}  e.Body#1/17 {REMOVED TILE}  {REMOVED TILE}  e.Tail#1/2 {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & UnexpectedToken/4 } Tile{ AsIs: t.Unexpected#1/21 } Tile{ HalfReuse: 'e'/12 HalfReuse: 'n'/15 } Tile{ HalfReuse: 'd'/16 HalfReuse: ' '/19 } Tile{ HalfReuse: 'o'/8 HalfReuse: 'f'/11 } Tile{ HalfReuse: ' '/20 } Tile{ HalfReuse: 's'/7 }"entence"/23 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_chars( context[23], context[24], "entence", 7 ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], UnexpectedToken, "UnexpectedToken" );
  refalrts::reinit_char( context[12], 'e' );
  refalrts::reinit_char( context[15], 'n' );
  refalrts::reinit_char( context[16], 'd' );
  refalrts::reinit_char( context[19], ' ' );
  refalrts::reinit_char( context[8], 'o' );
  refalrts::reinit_char( context[11], 'f' );
  refalrts::reinit_char( context[20], ' ' );
  refalrts::reinit_char( context[7], 's' );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[23], context[24] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[20], context[20] );
  res = refalrts::splice_evar( res, context[8], context[11] );
  res = refalrts::splice_evar( res, context[16], context[19] );
  res = refalrts::splice_evar( res, context[12], context[15] );
  res = refalrts::splice_evar( res, context[21], context[22] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[4], res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult ExtractAlternatives(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { UnexpectedToken, "UnexpectedToken" },
    { ExtractAlternatives_Flush, "ExtractAlternatives-Flush" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_Empty<int>::name,
    & ident_TDot<int>::name,
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
    {"efinition of state", 18}
  };
  static const refalrts::RASLCommand raa[] = {
    //FAST GEN: e.$
    //GLOBAL GEN: ( e.$ ) e.$
    // </0 & ExtractAlternatives/4 (/7 e.idxB#0/5 )/8 e.idxT#0/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icBracketLeftSave, 0, 5, 2},
    // closed e.idxB#0 as range 5
    // closed e.idxT#0 as range 2
    {refalrts::icOnFailGoTo, +15, 0, 0},
    // ( e.idx ) ( # TLiteral t.idx e.idx ) e.idx
    // </0 & ExtractAlternatives/4 (/7 e.Found#1/5 )/8 (/11 # TLiteral/13 t.SrcPos#1/14 e.Content#1/9 )/12 e.Tail#1/2 >/1
    {refalrts::icSave, 0, 17, 2},
    {refalrts::icBracketLeftSave, 0, 9, 17},
    {refalrts::icIdentLeftSave, 13, 10, 9},
    // closed e.Found#1 as range 5
    // closed e.Tail#1 as range 17(2)
    {refalrts::ictVarLeftSave, 0, 14, 9},
    // closed e.Content#1 as range 9
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  t.SrcPos#1/14 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ExtractAlternatives-Flush/4 AsIs: (/7 AsIs: e.Found#1/5 AsIs: )/8 AsIs: (/11 Reuse: # Chars/13 } Tile{ AsIs: e.Content#1/9 } Tile{ AsIs: )/12 AsIs: e.Tail#1/17(2) AsIs: >/1 ]] }
    {refalrts::icUpdateFunc, 0, 1, 4},
    {refalrts::icUpdateIdent, 0, 9, 13},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 11, 12, 0},
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icSetRes, 0, 0, 12},
    {refalrts::icSpliceEVar, 0, 0, 9},
    {refalrts::icTrash, 0, 0, 13},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +12, 0, 0},
    // ( e.idx ) ( # TSetName t.idx e.idx ) e.idx
    // </0 & ExtractAlternatives/4 (/7 e.Found#1/5 )/8 (/11 # TSetName/13 t.SrcPos#1/14 e.Content#1/9 )/12 e.Tail#1/2 >/1
    {refalrts::icSave, 0, 17, 2},
    {refalrts::icBracketLeftSave, 0, 9, 17},
    {refalrts::icIdentLeftSave, 13, 8, 9},
    // closed e.Found#1 as range 5
    // closed e.Tail#1 as range 17(2)
    {refalrts::ictVarLeftSave, 0, 14, 9},
    // closed e.Content#1 as range 9
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ExtractAlternatives-Flush/4 AsIs: (/7 AsIs: e.Found#1/5 AsIs: )/8 AsIs: (/11 Reuse: # Set/13 AsIs: t.SrcPos#1/14 AsIs: e.Content#1/9 AsIs: )/12 AsIs: e.Tail#1/17(2) AsIs: >/1 ]] }
    {refalrts::icUpdateFunc, 0, 1, 4},
    {refalrts::icUpdateIdent, 0, 7, 13},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 11, 12, 0},
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +17, 0, 0},
    // ( e.idx ) ( # TFlush t.idx ) e.idx
    // </0 & ExtractAlternatives/4 (/7 e.Found#1/5 )/8 (/11 # TFlush/13 t.SrcPos#1/14 )/12 e.Tail#1/2 >/1
    {refalrts::icSave, 0, 17, 2},
    {refalrts::icBracketLeftSave, 0, 9, 17},
    {refalrts::icIdentLeftSave, 13, 6, 9},
    // closed e.Found#1 as range 5
    // closed e.Tail#1 as range 17(2)
    {refalrts::ictVarLeftSave, 0, 14, 9},
    {refalrts::icEmpty, 0, 0, 9},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ExtractAlternatives-Flush/4 AsIs: (/7 } Tile{ AsIs: e.Found#1/5 } )/16 Tile{ HalfReuse: # Empty/8 AsIs: (/11 AsIs: # TFlush/13 AsIs: t.SrcPos#1/14 AsIs: )/12 AsIs: e.Tail#1/17(2) AsIs: >/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 16},
    {refalrts::icUpdateFunc, 0, 1, 4},
    {refalrts::icReinitIdent, 0, 0, 8},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 11, 12, 0},
    {refalrts::icLinkBrackets, 7, 16, 0},
    {refalrts::icSetRes, 0, 0, 8},
    {refalrts::icSpliceTile, 16, 16, 0},
    {refalrts::icSpliceEVar, 0, 0, 5},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +16, 0, 0},
    // ( e.idx ) ( # TNamedFlush t.idx e.idx ) e.idx
    // </0 & ExtractAlternatives/4 (/7 e.Found#1/5 )/8 (/11 # TNamedFlush/13 t.SrcPos#1/14 e.Name#1/9 )/12 e.Tail#1/2 >/1
    {refalrts::icSave, 0, 17, 2},
    {refalrts::icBracketLeftSave, 0, 9, 17},
    {refalrts::icIdentLeftSave, 13, 5, 9},
    // closed e.Found#1 as range 5
    // closed e.Tail#1 as range 17(2)
    {refalrts::ictVarLeftSave, 0, 14, 9},
    // closed e.Name#1 as range 9
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ExtractAlternatives-Flush/4 AsIs: (/7 } Tile{ AsIs: e.Found#1/5 } )/16 Tile{ HalfReuse: # Empty/8 AsIs: (/11 AsIs: # TNamedFlush/13 AsIs: t.SrcPos#1/14 AsIs: e.Name#1/9 AsIs: )/12 AsIs: e.Tail#1/17(2) AsIs: >/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 16},
    {refalrts::icUpdateFunc, 0, 1, 4},
    {refalrts::icReinitIdent, 0, 0, 8},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 11, 12, 0},
    {refalrts::icLinkBrackets, 7, 16, 0},
    {refalrts::icSetRes, 0, 0, 8},
    {refalrts::icSpliceTile, 16, 16, 0},
    {refalrts::icSpliceEVar, 0, 0, 5},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +16, 0, 0},
    // ( e.idx ) ( # TErrorFlush t.idx e.idx ) e.idx
    // </0 & ExtractAlternatives/4 (/7 e.Found#1/5 )/8 (/11 # TErrorFlush/13 t.SrcPos#1/14 e.Message#1/9 )/12 e.Tail#1/2 >/1
    {refalrts::icSave, 0, 17, 2},
    {refalrts::icBracketLeftSave, 0, 9, 17},
    {refalrts::icIdentLeftSave, 13, 4, 9},
    // closed e.Found#1 as range 5
    // closed e.Tail#1 as range 17(2)
    {refalrts::ictVarLeftSave, 0, 14, 9},
    // closed e.Message#1 as range 9
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ExtractAlternatives-Flush/4 AsIs: (/7 } Tile{ AsIs: e.Found#1/5 } )/16 Tile{ HalfReuse: # Empty/8 AsIs: (/11 AsIs: # TErrorFlush/13 AsIs: t.SrcPos#1/14 AsIs: e.Message#1/9 AsIs: )/12 AsIs: e.Tail#1/17(2) AsIs: >/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 16},
    {refalrts::icUpdateFunc, 0, 1, 4},
    {refalrts::icReinitIdent, 0, 0, 8},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 11, 12, 0},
    {refalrts::icLinkBrackets, 7, 16, 0},
    {refalrts::icSetRes, 0, 0, 8},
    {refalrts::icSpliceTile, 16, 16, 0},
    {refalrts::icSpliceEVar, 0, 0, 5},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +16, 0, 0},
    // ( e.idx ) ( # TName t.idx e.idx ) e.idx
    // </0 & ExtractAlternatives/4 (/7 e.Found#1/5 )/8 (/11 # TName/13 t.SrcPos#1/14 e.Name#1/9 )/12 e.Tail#1/2 >/1
    {refalrts::icSave, 0, 17, 2},
    {refalrts::icBracketLeftSave, 0, 9, 17},
    {refalrts::icIdentLeftSave, 13, 3, 9},
    // closed e.Found#1 as range 5
    // closed e.Tail#1 as range 17(2)
    {refalrts::ictVarLeftSave, 0, 14, 9},
    // closed e.Name#1 as range 9
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ExtractAlternatives-Flush/4 AsIs: (/7 } Tile{ AsIs: e.Found#1/5 } )/16 Tile{ HalfReuse: # Empty/8 AsIs: (/11 AsIs: # TName/13 AsIs: t.SrcPos#1/14 AsIs: e.Name#1/9 AsIs: )/12 AsIs: e.Tail#1/17(2) AsIs: >/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 16},
    {refalrts::icUpdateFunc, 0, 1, 4},
    {refalrts::icReinitIdent, 0, 0, 8},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 11, 12, 0},
    {refalrts::icLinkBrackets, 7, 16, 0},
    {refalrts::icSetRes, 0, 0, 8},
    {refalrts::icSpliceTile, 16, 16, 0},
    {refalrts::icSpliceEVar, 0, 0, 5},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +16, 0, 0},
    // ( e.idx ) ( # TAlternative t.idx e.idx ) e.idx
    // </0 & ExtractAlternatives/4 (/7 e.Found#1/5 )/8 (/11 # TAlternative/13 t.SrcPos#1/14 e.Message#1/9 )/12 e.Tail#1/2 >/1
    {refalrts::icSave, 0, 17, 2},
    {refalrts::icBracketLeftSave, 0, 9, 17},
    {refalrts::icIdentLeftSave, 13, 2, 9},
    // closed e.Found#1 as range 5
    // closed e.Tail#1 as range 17(2)
    {refalrts::ictVarLeftSave, 0, 14, 9},
    // closed e.Message#1 as range 9
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ExtractAlternatives-Flush/4 AsIs: (/7 } Tile{ AsIs: e.Found#1/5 } )/16 Tile{ HalfReuse: # Empty/8 AsIs: (/11 AsIs: # TAlternative/13 AsIs: t.SrcPos#1/14 AsIs: e.Message#1/9 AsIs: )/12 AsIs: e.Tail#1/17(2) AsIs: >/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 16},
    {refalrts::icUpdateFunc, 0, 1, 4},
    {refalrts::icReinitIdent, 0, 0, 8},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 11, 12, 0},
    {refalrts::icLinkBrackets, 7, 16, 0},
    {refalrts::icSetRes, 0, 0, 8},
    {refalrts::icSpliceTile, 16, 16, 0},
    {refalrts::icSpliceEVar, 0, 0, 5},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +17, 0, 0},
    // ( e.idx ) ( # TDot t.idx ) e.idx
    // </0 & ExtractAlternatives/4 (/7 e.Found#1/5 )/8 (/11 # TDot/13 t.SrcPos#1/14 )/12 e.Tail#1/2 >/1
    {refalrts::icSave, 0, 17, 2},
    {refalrts::icBracketLeftSave, 0, 9, 17},
    {refalrts::icIdentLeftSave, 13, 1, 9},
    // closed e.Found#1 as range 5
    // closed e.Tail#1 as range 17(2)
    {refalrts::ictVarLeftSave, 0, 14, 9},
    {refalrts::icEmpty, 0, 0, 9},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ExtractAlternatives-Flush/4 AsIs: (/7 } Tile{ AsIs: e.Found#1/5 } )/16 Tile{ HalfReuse: # Empty/8 AsIs: (/11 AsIs: # TDot/13 AsIs: t.SrcPos#1/14 AsIs: )/12 AsIs: e.Tail#1/17(2) AsIs: >/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 16},
    {refalrts::icUpdateFunc, 0, 1, 4},
    {refalrts::icReinitIdent, 0, 0, 8},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 11, 12, 0},
    {refalrts::icLinkBrackets, 7, 16, 0},
    {refalrts::icSetRes, 0, 0, 8},
    {refalrts::icSpliceTile, 16, 16, 0},
    {refalrts::icSpliceEVar, 0, 0, 5},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +16, 0, 0},
    // ( e.idx ) t.idx e.idx
    // </0 & ExtractAlternatives/4 (/7 e.Found#1/5 )/8 t.Unexpected#1/9 e.Tail#1/2 >/1
    // closed e.Found#1 as range 5
    {refalrts::icSave, 0, 17, 2},
    {refalrts::ictVarLeftSave, 0, 9, 17},
    // closed e.Tail#1 as range 17(2)
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  e.Found#1/5 {REMOVED TILE}  {REMOVED TILE}  e.Tail#1/17(2) {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & UnexpectedToken/4 } Tile{ AsIs: t.Unexpected#1/9 } Tile{ HalfReuse: ' '/7 } Tile{ HalfReuse: 'd'/8 }"efinition of state"/11 Tile{ AsIs: >/1 ]] }
    {refalrts::icAllocString, 0, 0, 11},
    {refalrts::icUpdateFunc, 0, 0, 4},
    {refalrts::icReinitChar, 0, ' ', 7},
    {refalrts::icReinitChar, 0, 'd', 8},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceTile, 11, 12, 0},
    {refalrts::icSpliceTile, 8, 8, 0},
    {refalrts::icSpliceTile, 7, 7, 0},
    {refalrts::icSpliceTile, 9, 10, 0},
    {refalrts::icTrash, 0, 0, 4},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    // ( e.idx )
    // </0 & ExtractAlternatives/4 (/7 e.Found#1/5 )/8 >/1
    {refalrts::icEmpty, 0, 0, 2},
    // closed e.Found#1 as range 5
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 & ExtractAlternatives/4 {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Found#1/5 AsIs: )/8 } Tile{ ]] }
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 7, 8, 0},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[9];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  //FAST GEN: e.$
  //GLOBAL GEN: ( e.$ ) e.$
  // </0 & ExtractAlternatives/4 (/7 e.idxB#0/5 )/8 e.idxT#0/2 >/1
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
  // closed e.idxT#0 as range 2
  do {
    refalrts::start_sentence();
    // ( e.idx ) ( # TLiteral t.idx e.idx ) e.idx
    // </0 & ExtractAlternatives/4 (/7 e.Found#1/5 )/8 (/11 # TLiteral/13 t.SrcPos#1/14 e.Content#1/9 )/12 e.Tail#1/2 >/1
    context[17] = context[2];
    context[18] = context[3];
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_left( context[9], context[10], context[17], context[18] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    context[13] = refalrts::ident_left(  & ident_TLiteral<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    // closed e.Found#1 as range 5
    // closed e.Tail#1 as range 17(2)
    context[15] = refalrts::tvar_left( context[14], context[9], context[10] );
    if( ! context[15] )
      continue;
    // closed e.Content#1 as range 9

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  t.SrcPos#1/14 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ExtractAlternatives-Flush/4 AsIs: (/7 AsIs: e.Found#1/5 AsIs: )/8 AsIs: (/11 Reuse: # Chars/13 } Tile{ AsIs: e.Content#1/9 } Tile{ AsIs: )/12 AsIs: e.Tail#1/17(2) AsIs: >/1 ]] }
    refalrts::update_name( context[4], ExtractAlternatives_Flush, "ExtractAlternatives-Flush" );
    refalrts::update_ident( context[13], & ident_Chars<int>::name );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[12];
    res = refalrts::splice_evar( res, context[9], context[10] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[13], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) ( # TSetName t.idx e.idx ) e.idx
    // </0 & ExtractAlternatives/4 (/7 e.Found#1/5 )/8 (/11 # TSetName/13 t.SrcPos#1/14 e.Content#1/9 )/12 e.Tail#1/2 >/1
    context[17] = context[2];
    context[18] = context[3];
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_left( context[9], context[10], context[17], context[18] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    context[13] = refalrts::ident_left(  & ident_TSetName<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    // closed e.Found#1 as range 5
    // closed e.Tail#1 as range 17(2)
    context[15] = refalrts::tvar_left( context[14], context[9], context[10] );
    if( ! context[15] )
      continue;
    // closed e.Content#1 as range 9

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ExtractAlternatives-Flush/4 AsIs: (/7 AsIs: e.Found#1/5 AsIs: )/8 AsIs: (/11 Reuse: # Set/13 AsIs: t.SrcPos#1/14 AsIs: e.Content#1/9 AsIs: )/12 AsIs: e.Tail#1/17(2) AsIs: >/1 ]] }
    refalrts::update_name( context[4], ExtractAlternatives_Flush, "ExtractAlternatives-Flush" );
    refalrts::update_ident( context[13], & ident_Set<int>::name );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[7], context[8] );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) ( # TFlush t.idx ) e.idx
    // </0 & ExtractAlternatives/4 (/7 e.Found#1/5 )/8 (/11 # TFlush/13 t.SrcPos#1/14 )/12 e.Tail#1/2 >/1
    context[17] = context[2];
    context[18] = context[3];
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_left( context[9], context[10], context[17], context[18] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    context[13] = refalrts::ident_left(  & ident_TFlush<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    // closed e.Found#1 as range 5
    // closed e.Tail#1 as range 17(2)
    context[15] = refalrts::tvar_left( context[14], context[9], context[10] );
    if( ! context[15] )
      continue;
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ExtractAlternatives-Flush/4 AsIs: (/7 } Tile{ AsIs: e.Found#1/5 } )/16 Tile{ HalfReuse: # Empty/8 AsIs: (/11 AsIs: # TFlush/13 AsIs: t.SrcPos#1/14 AsIs: )/12 AsIs: e.Tail#1/17(2) AsIs: >/1 ]] }
    if( ! refalrts::alloc_close_bracket( context[16] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ExtractAlternatives_Flush, "ExtractAlternatives-Flush" );
    refalrts::reinit_ident( context[8], & ident_Empty<int>::name );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[7], context[16] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[16], context[16] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) ( # TNamedFlush t.idx e.idx ) e.idx
    // </0 & ExtractAlternatives/4 (/7 e.Found#1/5 )/8 (/11 # TNamedFlush/13 t.SrcPos#1/14 e.Name#1/9 )/12 e.Tail#1/2 >/1
    context[17] = context[2];
    context[18] = context[3];
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_left( context[9], context[10], context[17], context[18] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    context[13] = refalrts::ident_left(  & ident_TNamedFlush<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    // closed e.Found#1 as range 5
    // closed e.Tail#1 as range 17(2)
    context[15] = refalrts::tvar_left( context[14], context[9], context[10] );
    if( ! context[15] )
      continue;
    // closed e.Name#1 as range 9

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ExtractAlternatives-Flush/4 AsIs: (/7 } Tile{ AsIs: e.Found#1/5 } )/16 Tile{ HalfReuse: # Empty/8 AsIs: (/11 AsIs: # TNamedFlush/13 AsIs: t.SrcPos#1/14 AsIs: e.Name#1/9 AsIs: )/12 AsIs: e.Tail#1/17(2) AsIs: >/1 ]] }
    if( ! refalrts::alloc_close_bracket( context[16] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ExtractAlternatives_Flush, "ExtractAlternatives-Flush" );
    refalrts::reinit_ident( context[8], & ident_Empty<int>::name );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[7], context[16] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[16], context[16] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) ( # TErrorFlush t.idx e.idx ) e.idx
    // </0 & ExtractAlternatives/4 (/7 e.Found#1/5 )/8 (/11 # TErrorFlush/13 t.SrcPos#1/14 e.Message#1/9 )/12 e.Tail#1/2 >/1
    context[17] = context[2];
    context[18] = context[3];
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_left( context[9], context[10], context[17], context[18] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    context[13] = refalrts::ident_left(  & ident_TErrorFlush<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    // closed e.Found#1 as range 5
    // closed e.Tail#1 as range 17(2)
    context[15] = refalrts::tvar_left( context[14], context[9], context[10] );
    if( ! context[15] )
      continue;
    // closed e.Message#1 as range 9

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ExtractAlternatives-Flush/4 AsIs: (/7 } Tile{ AsIs: e.Found#1/5 } )/16 Tile{ HalfReuse: # Empty/8 AsIs: (/11 AsIs: # TErrorFlush/13 AsIs: t.SrcPos#1/14 AsIs: e.Message#1/9 AsIs: )/12 AsIs: e.Tail#1/17(2) AsIs: >/1 ]] }
    if( ! refalrts::alloc_close_bracket( context[16] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ExtractAlternatives_Flush, "ExtractAlternatives-Flush" );
    refalrts::reinit_ident( context[8], & ident_Empty<int>::name );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[7], context[16] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[16], context[16] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) ( # TName t.idx e.idx ) e.idx
    // </0 & ExtractAlternatives/4 (/7 e.Found#1/5 )/8 (/11 # TName/13 t.SrcPos#1/14 e.Name#1/9 )/12 e.Tail#1/2 >/1
    context[17] = context[2];
    context[18] = context[3];
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_left( context[9], context[10], context[17], context[18] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    context[13] = refalrts::ident_left(  & ident_TName<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    // closed e.Found#1 as range 5
    // closed e.Tail#1 as range 17(2)
    context[15] = refalrts::tvar_left( context[14], context[9], context[10] );
    if( ! context[15] )
      continue;
    // closed e.Name#1 as range 9

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ExtractAlternatives-Flush/4 AsIs: (/7 } Tile{ AsIs: e.Found#1/5 } )/16 Tile{ HalfReuse: # Empty/8 AsIs: (/11 AsIs: # TName/13 AsIs: t.SrcPos#1/14 AsIs: e.Name#1/9 AsIs: )/12 AsIs: e.Tail#1/17(2) AsIs: >/1 ]] }
    if( ! refalrts::alloc_close_bracket( context[16] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ExtractAlternatives_Flush, "ExtractAlternatives-Flush" );
    refalrts::reinit_ident( context[8], & ident_Empty<int>::name );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[7], context[16] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[16], context[16] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) ( # TAlternative t.idx e.idx ) e.idx
    // </0 & ExtractAlternatives/4 (/7 e.Found#1/5 )/8 (/11 # TAlternative/13 t.SrcPos#1/14 e.Message#1/9 )/12 e.Tail#1/2 >/1
    context[17] = context[2];
    context[18] = context[3];
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_left( context[9], context[10], context[17], context[18] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    context[13] = refalrts::ident_left(  & ident_TAlternative<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    // closed e.Found#1 as range 5
    // closed e.Tail#1 as range 17(2)
    context[15] = refalrts::tvar_left( context[14], context[9], context[10] );
    if( ! context[15] )
      continue;
    // closed e.Message#1 as range 9

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ExtractAlternatives-Flush/4 AsIs: (/7 } Tile{ AsIs: e.Found#1/5 } )/16 Tile{ HalfReuse: # Empty/8 AsIs: (/11 AsIs: # TAlternative/13 AsIs: t.SrcPos#1/14 AsIs: e.Message#1/9 AsIs: )/12 AsIs: e.Tail#1/17(2) AsIs: >/1 ]] }
    if( ! refalrts::alloc_close_bracket( context[16] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ExtractAlternatives_Flush, "ExtractAlternatives-Flush" );
    refalrts::reinit_ident( context[8], & ident_Empty<int>::name );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[7], context[16] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[16], context[16] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) ( # TDot t.idx ) e.idx
    // </0 & ExtractAlternatives/4 (/7 e.Found#1/5 )/8 (/11 # TDot/13 t.SrcPos#1/14 )/12 e.Tail#1/2 >/1
    context[17] = context[2];
    context[18] = context[3];
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_left( context[9], context[10], context[17], context[18] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    context[13] = refalrts::ident_left(  & ident_TDot<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    // closed e.Found#1 as range 5
    // closed e.Tail#1 as range 17(2)
    context[15] = refalrts::tvar_left( context[14], context[9], context[10] );
    if( ! context[15] )
      continue;
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ExtractAlternatives-Flush/4 AsIs: (/7 } Tile{ AsIs: e.Found#1/5 } )/16 Tile{ HalfReuse: # Empty/8 AsIs: (/11 AsIs: # TDot/13 AsIs: t.SrcPos#1/14 AsIs: )/12 AsIs: e.Tail#1/17(2) AsIs: >/1 ]] }
    if( ! refalrts::alloc_close_bracket( context[16] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ExtractAlternatives_Flush, "ExtractAlternatives-Flush" );
    refalrts::reinit_ident( context[8], & ident_Empty<int>::name );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[7], context[16] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[16], context[16] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) t.idx e.idx
    // </0 & ExtractAlternatives/4 (/7 e.Found#1/5 )/8 t.Unexpected#1/9 e.Tail#1/2 >/1
    // closed e.Found#1 as range 5
    context[17] = context[2];
    context[18] = context[3];
    context[10] = refalrts::tvar_left( context[9], context[17], context[18] );
    if( ! context[10] )
      continue;
    // closed e.Tail#1 as range 17(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  e.Found#1/5 {REMOVED TILE}  {REMOVED TILE}  e.Tail#1/17(2) {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & UnexpectedToken/4 } Tile{ AsIs: t.Unexpected#1/9 } Tile{ HalfReuse: ' '/7 } Tile{ HalfReuse: 'd'/8 }"efinition of state"/11 Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_chars( context[11], context[12], "efinition of state", 18 ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], UnexpectedToken, "UnexpectedToken" );
    refalrts::reinit_char( context[7], ' ' );
    refalrts::reinit_char( context[8], 'd' );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[8], context[8] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  // ( e.idx )
  // </0 & ExtractAlternatives/4 (/7 e.Found#1/5 )/8 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Found#1 as range 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  </0 & ExtractAlternatives/4 {REMOVED TILE}  >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Found#1/5 AsIs: )/8 } Tile{ ]] }
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult ExtractAlternatives_Flush(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { UnexpectedToken, "UnexpectedToken" },
    { ExtractAlternatives_NextState, "ExtractAlternatives-NextState" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_None<int>::name,
    & ident_TDot<int>::name,
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
    {"ush or next state name", 22}
  };
  static const refalrts::RASLCommand raa[] = {
    //FAST GEN: e.$
    //GLOBAL GEN: ( e.$ ) t.$ e.$
    // </0 & ExtractAlternatives-Flush/4 (/7 e.idxB#0/5 )/8 t.idxT#0/9 e.idxTV#0/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icBracketLeftSave, 0, 5, 2},
    // closed e.idxB#0 as range 5
    {refalrts::ictVarLeftSave, 0, 9, 2},
    // closed e.idxTV#0 as range 2
    {refalrts::icOnFailGoTo, +15, 0, 0},
    // ( e.idx ) t.idx ( # TFlush t.idx ) e.idx
    // </0 & ExtractAlternatives-Flush/4 (/7 e.Found#1/5 )/8 t.Head#1/9 (/13 # TFlush/15 t.SrcPos#1/16 )/14 e.Tail#1/2 >/1
    {refalrts::icSave, 0, 19, 2},
    {refalrts::icBracketLeftSave, 0, 11, 19},
    {refalrts::icIdentLeftSave, 15, 9, 11},
    // closed e.Found#1 as range 5
    // closed e.Tail#1 as range 19(2)
    {refalrts::ictVarLeftSave, 0, 16, 11},
    {refalrts::icEmpty, 0, 0, 11},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  # TFlush/15 t.SrcPos#1/16 )/14 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ExtractAlternatives-NextState/4 AsIs: (/7 AsIs: e.Found#1/5 AsIs: )/8 AsIs: t.Head#1/9 HalfReuse: # Unnamed/13 } Tile{ AsIs: e.Tail#1/19(2) } Tile{ AsIs: >/1 ]] }
    {refalrts::icUpdateFunc, 0, 1, 4},
    {refalrts::icReinitIdent, 0, 8, 13},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceEVar, 0, 0, 19},
    {refalrts::icTrash, 0, 0, 13},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +15, 0, 0},
    // ( e.idx ) t.idx ( # TNamedFlush t.idx e.idx ) e.idx
    // </0 & ExtractAlternatives-Flush/4 (/7 e.Found#1/5 )/8 t.Head#1/9 (/13 # TNamedFlush/15 t.SrcPos#1/16 e.Name#1/11 )/14 e.Tail#1/2 >/1
    {refalrts::icSave, 0, 19, 2},
    {refalrts::icBracketLeftSave, 0, 11, 19},
    {refalrts::icIdentLeftSave, 15, 7, 11},
    // closed e.Found#1 as range 5
    // closed e.Tail#1 as range 19(2)
    {refalrts::ictVarLeftSave, 0, 16, 11},
    // closed e.Name#1 as range 11
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  t.SrcPos#1/16 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ExtractAlternatives-NextState/4 AsIs: (/7 AsIs: e.Found#1/5 AsIs: )/8 AsIs: t.Head#1/9 AsIs: (/13 Reuse: # Flush/15 } Tile{ AsIs: e.Name#1/11 } Tile{ AsIs: )/14 AsIs: e.Tail#1/19(2) AsIs: >/1 ]] }
    {refalrts::icUpdateFunc, 0, 1, 4},
    {refalrts::icUpdateIdent, 0, 6, 15},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 13, 14, 0},
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icSetRes, 0, 0, 14},
    {refalrts::icSpliceEVar, 0, 0, 11},
    {refalrts::icTrash, 0, 0, 15},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +15, 0, 0},
    // ( e.idx ) t.idx ( # TErrorFlush t.idx e.idx ) e.idx
    // </0 & ExtractAlternatives-Flush/4 (/7 e.Found#1/5 )/8 t.Head#1/9 (/13 # TErrorFlush/15 t.SrcPos#1/16 e.Message#1/11 )/14 e.Tail#1/2 >/1
    {refalrts::icSave, 0, 19, 2},
    {refalrts::icBracketLeftSave, 0, 11, 19},
    {refalrts::icIdentLeftSave, 15, 5, 11},
    // closed e.Found#1 as range 5
    // closed e.Tail#1 as range 19(2)
    {refalrts::ictVarLeftSave, 0, 16, 11},
    // closed e.Message#1 as range 11
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  t.SrcPos#1/16 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ExtractAlternatives-NextState/4 AsIs: (/7 AsIs: e.Found#1/5 AsIs: )/8 AsIs: t.Head#1/9 AsIs: (/13 Reuse: # FlushError/15 } Tile{ AsIs: e.Message#1/11 } Tile{ AsIs: )/14 AsIs: e.Tail#1/19(2) AsIs: >/1 ]] }
    {refalrts::icUpdateFunc, 0, 1, 4},
    {refalrts::icUpdateIdent, 0, 4, 15},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 13, 14, 0},
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icSetRes, 0, 0, 14},
    {refalrts::icSpliceEVar, 0, 0, 11},
    {refalrts::icTrash, 0, 0, 15},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +14, 0, 0},
    // ( e.idx ) t.idx ( # TName t.idx e.idx ) e.idx
    // </0 & ExtractAlternatives-Flush/4 (/7 e.Found#1/5 )/8 t.Head#1/9 (/13 # TName/15 t.SrcPos#1/16 e.Name#1/11 )/14 e.Tail#1/2 >/1
    {refalrts::icSave, 0, 19, 2},
    {refalrts::icBracketLeftSave, 0, 11, 19},
    {refalrts::icIdentLeftSave, 15, 3, 11},
    // closed e.Found#1 as range 5
    // closed e.Tail#1 as range 19(2)
    {refalrts::ictVarLeftSave, 0, 16, 11},
    // closed e.Name#1 as range 11
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ExtractAlternatives-NextState/4 AsIs: (/7 AsIs: e.Found#1/5 AsIs: )/8 AsIs: t.Head#1/9 } # None/18 Tile{ AsIs: (/13 AsIs: # TName/15 AsIs: t.SrcPos#1/16 AsIs: e.Name#1/11 AsIs: )/14 AsIs: e.Tail#1/19(2) AsIs: >/1 ]] }
    {refalrts::icAllocIdent, 0, 0, 18},
    {refalrts::icUpdateFunc, 0, 1, 4},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 13, 14, 0},
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icSetRes, 0, 0, 13},
    {refalrts::icSpliceTile, 18, 18, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +17, 0, 0},
    // ( e.idx ) t.idx ( # TAlternative t.idx ) e.idx
    // </0 & ExtractAlternatives-Flush/4 (/7 e.Found#1/5 )/8 t.Head#1/9 (/13 # TAlternative/15 t.SrcPos#1/16 )/14 e.Tail#1/2 >/1
    {refalrts::icSave, 0, 19, 2},
    {refalrts::icBracketLeftSave, 0, 11, 19},
    {refalrts::icIdentLeftSave, 15, 2, 11},
    // closed e.Found#1 as range 5
    // closed e.Tail#1 as range 19(2)
    {refalrts::ictVarLeftSave, 0, 16, 11},
    {refalrts::icEmpty, 0, 0, 11},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ExtractAlternatives-NextState/4 AsIs: (/7 AsIs: e.Found#1/5 AsIs: )/8 AsIs: t.Head#1/9 HalfReuse: # None/13 HalfReuse: (/15 } # TAlternative/18 Tile{ AsIs: t.SrcPos#1/16 AsIs: )/14 AsIs: e.Tail#1/19(2) AsIs: >/1 ]] }
    {refalrts::icAllocIdent, 0, 2, 18},
    {refalrts::icUpdateFunc, 0, 1, 4},
    {refalrts::icReinitIdent, 0, 0, 13},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 15},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 15, 14, 0},
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icSetRes, 0, 0, 16},
    {refalrts::icSpliceTile, 18, 18, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +17, 0, 0},
    // ( e.idx ) t.idx ( # TDot t.idx ) e.idx
    // </0 & ExtractAlternatives-Flush/4 (/7 e.Found#1/5 )/8 t.Head#1/9 (/13 # TDot/15 t.SrcPos#1/16 )/14 e.Tail#1/2 >/1
    {refalrts::icSave, 0, 19, 2},
    {refalrts::icBracketLeftSave, 0, 11, 19},
    {refalrts::icIdentLeftSave, 15, 1, 11},
    // closed e.Found#1 as range 5
    // closed e.Tail#1 as range 19(2)
    {refalrts::ictVarLeftSave, 0, 16, 11},
    {refalrts::icEmpty, 0, 0, 11},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ExtractAlternatives-NextState/4 AsIs: (/7 AsIs: e.Found#1/5 AsIs: )/8 AsIs: t.Head#1/9 HalfReuse: # None/13 HalfReuse: (/15 } # TDot/18 Tile{ AsIs: t.SrcPos#1/16 AsIs: )/14 AsIs: e.Tail#1/19(2) AsIs: >/1 ]] }
    {refalrts::icAllocIdent, 0, 1, 18},
    {refalrts::icUpdateFunc, 0, 1, 4},
    {refalrts::icReinitIdent, 0, 0, 13},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 15},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 15, 14, 0},
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icSetRes, 0, 0, 16},
    {refalrts::icSpliceTile, 18, 18, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +16, 0, 0},
    // ( e.idx ) t.idx t.idx e.idx
    // </0 & ExtractAlternatives-Flush/4 (/7 e.Found#1/5 )/8 t.Head#1/9 t.Unexpected#1/11 e.Tail#1/2 >/1
    // closed e.Found#1 as range 5
    {refalrts::icSave, 0, 19, 2},
    {refalrts::ictVarLeftSave, 0, 11, 19},
    // closed e.Tail#1 as range 19(2)
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  e.Found#1/5 {REMOVED TILE}  t.Head#1/9 {REMOVED TILE}  e.Tail#1/19(2) {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & UnexpectedToken/4 } Tile{ AsIs: t.Unexpected#1/11 } Tile{ HalfReuse: 'f'/7 } Tile{ HalfReuse: 'l'/8 }"ush or next state name"/13 Tile{ AsIs: >/1 ]] }
    {refalrts::icAllocString, 0, 0, 13},
    {refalrts::icUpdateFunc, 0, 0, 4},
    {refalrts::icReinitChar, 0, 'f', 7},
    {refalrts::icReinitChar, 0, 'l', 8},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceTile, 13, 14, 0},
    {refalrts::icSpliceTile, 8, 8, 0},
    {refalrts::icSpliceTile, 7, 7, 0},
    {refalrts::icSpliceTile, 11, 12, 0},
    {refalrts::icTrash, 0, 0, 4},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    // ( e.idx ) t.idx
    // </0 & ExtractAlternatives-Flush/4 (/7 e.Found#1/5 )/8 t.Head#1/9 >/1
    {refalrts::icEmpty, 0, 0, 2},
    // closed e.Found#1 as range 5
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 & ExtractAlternatives-Flush/4 {REMOVED TILE}  t.Head#1/9 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Found#1/5 AsIs: )/8 } Tile{ ]] }
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 7, 8, 0},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[7];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  //FAST GEN: e.$
  //GLOBAL GEN: ( e.$ ) t.$ e.$
  // </0 & ExtractAlternatives-Flush/4 (/7 e.idxB#0/5 )/8 t.idxT#0/9 e.idxTV#0/2 >/1
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
  context[10] = refalrts::tvar_left( context[9], context[2], context[3] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  // closed e.idxTV#0 as range 2
  do {
    refalrts::start_sentence();
    // ( e.idx ) t.idx ( # TFlush t.idx ) e.idx
    // </0 & ExtractAlternatives-Flush/4 (/7 e.Found#1/5 )/8 t.Head#1/9 (/13 # TFlush/15 t.SrcPos#1/16 )/14 e.Tail#1/2 >/1
    context[19] = context[2];
    context[20] = context[3];
    context[11] = 0;
    context[12] = 0;
    context[13] = refalrts::brackets_left( context[11], context[12], context[19], context[20] );
    if( ! context[13] )
      continue;
    refalrts::bracket_pointers(context[13], context[14]);
    context[15] = refalrts::ident_left(  & ident_TFlush<int>::name, context[11], context[12] );
    if( ! context[15] )
      continue;
    // closed e.Found#1 as range 5
    // closed e.Tail#1 as range 19(2)
    context[17] = refalrts::tvar_left( context[16], context[11], context[12] );
    if( ! context[17] )
      continue;
    if( ! refalrts::empty_seq( context[11], context[12] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  # TFlush/15 t.SrcPos#1/16 )/14 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ExtractAlternatives-NextState/4 AsIs: (/7 AsIs: e.Found#1/5 AsIs: )/8 AsIs: t.Head#1/9 HalfReuse: # Unnamed/13 } Tile{ AsIs: e.Tail#1/19(2) } Tile{ AsIs: >/1 ]] }
    refalrts::update_name( context[4], ExtractAlternatives_NextState, "ExtractAlternatives-NextState" );
    refalrts::reinit_ident( context[13], & ident_Unnamed<int>::name );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[19], context[20] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[13], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) t.idx ( # TNamedFlush t.idx e.idx ) e.idx
    // </0 & ExtractAlternatives-Flush/4 (/7 e.Found#1/5 )/8 t.Head#1/9 (/13 # TNamedFlush/15 t.SrcPos#1/16 e.Name#1/11 )/14 e.Tail#1/2 >/1
    context[19] = context[2];
    context[20] = context[3];
    context[11] = 0;
    context[12] = 0;
    context[13] = refalrts::brackets_left( context[11], context[12], context[19], context[20] );
    if( ! context[13] )
      continue;
    refalrts::bracket_pointers(context[13], context[14]);
    context[15] = refalrts::ident_left(  & ident_TNamedFlush<int>::name, context[11], context[12] );
    if( ! context[15] )
      continue;
    // closed e.Found#1 as range 5
    // closed e.Tail#1 as range 19(2)
    context[17] = refalrts::tvar_left( context[16], context[11], context[12] );
    if( ! context[17] )
      continue;
    // closed e.Name#1 as range 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  t.SrcPos#1/16 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ExtractAlternatives-NextState/4 AsIs: (/7 AsIs: e.Found#1/5 AsIs: )/8 AsIs: t.Head#1/9 AsIs: (/13 Reuse: # Flush/15 } Tile{ AsIs: e.Name#1/11 } Tile{ AsIs: )/14 AsIs: e.Tail#1/19(2) AsIs: >/1 ]] }
    refalrts::update_name( context[4], ExtractAlternatives_NextState, "ExtractAlternatives-NextState" );
    refalrts::update_ident( context[15], & ident_Flush<int>::name );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[13], context[14] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[14];
    res = refalrts::splice_evar( res, context[11], context[12] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[15], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) t.idx ( # TErrorFlush t.idx e.idx ) e.idx
    // </0 & ExtractAlternatives-Flush/4 (/7 e.Found#1/5 )/8 t.Head#1/9 (/13 # TErrorFlush/15 t.SrcPos#1/16 e.Message#1/11 )/14 e.Tail#1/2 >/1
    context[19] = context[2];
    context[20] = context[3];
    context[11] = 0;
    context[12] = 0;
    context[13] = refalrts::brackets_left( context[11], context[12], context[19], context[20] );
    if( ! context[13] )
      continue;
    refalrts::bracket_pointers(context[13], context[14]);
    context[15] = refalrts::ident_left(  & ident_TErrorFlush<int>::name, context[11], context[12] );
    if( ! context[15] )
      continue;
    // closed e.Found#1 as range 5
    // closed e.Tail#1 as range 19(2)
    context[17] = refalrts::tvar_left( context[16], context[11], context[12] );
    if( ! context[17] )
      continue;
    // closed e.Message#1 as range 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  t.SrcPos#1/16 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ExtractAlternatives-NextState/4 AsIs: (/7 AsIs: e.Found#1/5 AsIs: )/8 AsIs: t.Head#1/9 AsIs: (/13 Reuse: # FlushError/15 } Tile{ AsIs: e.Message#1/11 } Tile{ AsIs: )/14 AsIs: e.Tail#1/19(2) AsIs: >/1 ]] }
    refalrts::update_name( context[4], ExtractAlternatives_NextState, "ExtractAlternatives-NextState" );
    refalrts::update_ident( context[15], & ident_FlushError<int>::name );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[13], context[14] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[14];
    res = refalrts::splice_evar( res, context[11], context[12] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[15], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) t.idx ( # TName t.idx e.idx ) e.idx
    // </0 & ExtractAlternatives-Flush/4 (/7 e.Found#1/5 )/8 t.Head#1/9 (/13 # TName/15 t.SrcPos#1/16 e.Name#1/11 )/14 e.Tail#1/2 >/1
    context[19] = context[2];
    context[20] = context[3];
    context[11] = 0;
    context[12] = 0;
    context[13] = refalrts::brackets_left( context[11], context[12], context[19], context[20] );
    if( ! context[13] )
      continue;
    refalrts::bracket_pointers(context[13], context[14]);
    context[15] = refalrts::ident_left(  & ident_TName<int>::name, context[11], context[12] );
    if( ! context[15] )
      continue;
    // closed e.Found#1 as range 5
    // closed e.Tail#1 as range 19(2)
    context[17] = refalrts::tvar_left( context[16], context[11], context[12] );
    if( ! context[17] )
      continue;
    // closed e.Name#1 as range 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ExtractAlternatives-NextState/4 AsIs: (/7 AsIs: e.Found#1/5 AsIs: )/8 AsIs: t.Head#1/9 } # None/18 Tile{ AsIs: (/13 AsIs: # TName/15 AsIs: t.SrcPos#1/16 AsIs: e.Name#1/11 AsIs: )/14 AsIs: e.Tail#1/19(2) AsIs: >/1 ]] }
    if( ! refalrts::alloc_ident( context[18], & ident_None<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ExtractAlternatives_NextState, "ExtractAlternatives-NextState" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[13], context[14] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[13];
    res = refalrts::splice_evar( res, context[18], context[18] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) t.idx ( # TAlternative t.idx ) e.idx
    // </0 & ExtractAlternatives-Flush/4 (/7 e.Found#1/5 )/8 t.Head#1/9 (/13 # TAlternative/15 t.SrcPos#1/16 )/14 e.Tail#1/2 >/1
    context[19] = context[2];
    context[20] = context[3];
    context[11] = 0;
    context[12] = 0;
    context[13] = refalrts::brackets_left( context[11], context[12], context[19], context[20] );
    if( ! context[13] )
      continue;
    refalrts::bracket_pointers(context[13], context[14]);
    context[15] = refalrts::ident_left(  & ident_TAlternative<int>::name, context[11], context[12] );
    if( ! context[15] )
      continue;
    // closed e.Found#1 as range 5
    // closed e.Tail#1 as range 19(2)
    context[17] = refalrts::tvar_left( context[16], context[11], context[12] );
    if( ! context[17] )
      continue;
    if( ! refalrts::empty_seq( context[11], context[12] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ExtractAlternatives-NextState/4 AsIs: (/7 AsIs: e.Found#1/5 AsIs: )/8 AsIs: t.Head#1/9 HalfReuse: # None/13 HalfReuse: (/15 } # TAlternative/18 Tile{ AsIs: t.SrcPos#1/16 AsIs: )/14 AsIs: e.Tail#1/19(2) AsIs: >/1 ]] }
    if( ! refalrts::alloc_ident( context[18], & ident_TAlternative<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ExtractAlternatives_NextState, "ExtractAlternatives-NextState" );
    refalrts::reinit_ident( context[13], & ident_None<int>::name );
    refalrts::reinit_open_bracket( context[15] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[15], context[14] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[16];
    res = refalrts::splice_evar( res, context[18], context[18] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) t.idx ( # TDot t.idx ) e.idx
    // </0 & ExtractAlternatives-Flush/4 (/7 e.Found#1/5 )/8 t.Head#1/9 (/13 # TDot/15 t.SrcPos#1/16 )/14 e.Tail#1/2 >/1
    context[19] = context[2];
    context[20] = context[3];
    context[11] = 0;
    context[12] = 0;
    context[13] = refalrts::brackets_left( context[11], context[12], context[19], context[20] );
    if( ! context[13] )
      continue;
    refalrts::bracket_pointers(context[13], context[14]);
    context[15] = refalrts::ident_left(  & ident_TDot<int>::name, context[11], context[12] );
    if( ! context[15] )
      continue;
    // closed e.Found#1 as range 5
    // closed e.Tail#1 as range 19(2)
    context[17] = refalrts::tvar_left( context[16], context[11], context[12] );
    if( ! context[17] )
      continue;
    if( ! refalrts::empty_seq( context[11], context[12] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ExtractAlternatives-NextState/4 AsIs: (/7 AsIs: e.Found#1/5 AsIs: )/8 AsIs: t.Head#1/9 HalfReuse: # None/13 HalfReuse: (/15 } # TDot/18 Tile{ AsIs: t.SrcPos#1/16 AsIs: )/14 AsIs: e.Tail#1/19(2) AsIs: >/1 ]] }
    if( ! refalrts::alloc_ident( context[18], & ident_TDot<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ExtractAlternatives_NextState, "ExtractAlternatives-NextState" );
    refalrts::reinit_ident( context[13], & ident_None<int>::name );
    refalrts::reinit_open_bracket( context[15] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[15], context[14] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[16];
    res = refalrts::splice_evar( res, context[18], context[18] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) t.idx t.idx e.idx
    // </0 & ExtractAlternatives-Flush/4 (/7 e.Found#1/5 )/8 t.Head#1/9 t.Unexpected#1/11 e.Tail#1/2 >/1
    // closed e.Found#1 as range 5
    context[19] = context[2];
    context[20] = context[3];
    context[12] = refalrts::tvar_left( context[11], context[19], context[20] );
    if( ! context[12] )
      continue;
    // closed e.Tail#1 as range 19(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  e.Found#1/5 {REMOVED TILE}  t.Head#1/9 {REMOVED TILE}  e.Tail#1/19(2) {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & UnexpectedToken/4 } Tile{ AsIs: t.Unexpected#1/11 } Tile{ HalfReuse: 'f'/7 } Tile{ HalfReuse: 'l'/8 }"ush or next state name"/13 Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_chars( context[13], context[14], "ush or next state name", 22 ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], UnexpectedToken, "UnexpectedToken" );
    refalrts::reinit_char( context[7], 'f' );
    refalrts::reinit_char( context[8], 'l' );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[8], context[8] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  // ( e.idx ) t.idx
  // </0 & ExtractAlternatives-Flush/4 (/7 e.Found#1/5 )/8 t.Head#1/9 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Found#1 as range 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  </0 & ExtractAlternatives-Flush/4 {REMOVED TILE}  t.Head#1/9 >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Found#1/5 AsIs: )/8 } Tile{ ]] }
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult ExtractAlternatives_NextState(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 23 elems
  refalrts::Iter context[23];
  refalrts::zeros( context, 23 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { UnexpectedToken, "UnexpectedToken" },
    { ExtractAlternatives_Finish, "ExtractAlternatives-Finish" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_Finitive<int>::name,
    & ident_TDot<int>::name,
    & ident_TAlternative<int>::name,
    & ident_TName<int>::name
  };
  using refalrts::numbers;
  static const refalrts::StringItem strings[] = {
    {"xt state name or next alternative", 33}
  };
  static const refalrts::RASLCommand raa[] = {
    //FAST GEN: e.$
    //GLOBAL GEN: ( e.$ ) t.$ t.$ e.$
    // </0 & ExtractAlternatives-NextState/4 (/7 e.idxB#0/5 )/8 t.idxT#0/9 t.idxTV#0/11 e.idxTVV#0/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icBracketLeftSave, 0, 5, 2},
    // closed e.idxB#0 as range 5
    {refalrts::ictVarLeftSave, 0, 9, 2},
    {refalrts::ictVarLeftSave, 0, 11, 2},
    // closed e.idxTVV#0 as range 2
    {refalrts::icOnFailGoTo, +13, 0, 0},
    // ( e.idx ) t.idx t.idx ( # TName t.idx e.idx ) e.idx
    // </0 & ExtractAlternatives-NextState/4 (/7 e.Found#1/5 )/8 t.Head#1/9 t.Flush#1/11 (/15 # TName/17 t.SrcPos#1/18 e.Name#1/13 )/16 e.Tail#1/2 >/1
    {refalrts::icSave, 0, 21, 2},
    {refalrts::icBracketLeftSave, 0, 13, 21},
    {refalrts::icIdentLeftSave, 17, 3, 13},
    // closed e.Found#1 as range 5
    // closed e.Tail#1 as range 21(2)
    {refalrts::ictVarLeftSave, 0, 18, 13},
    // closed e.Name#1 as range 13
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  # TName/17 {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ExtractAlternatives-Finish/4 AsIs: (/7 AsIs: e.Found#1/5 AsIs: )/8 AsIs: t.Head#1/9 AsIs: t.Flush#1/11 AsIs: (/15 } Tile{ AsIs: t.SrcPos#1/18 AsIs: e.Name#1/13 AsIs: )/16 AsIs: e.Tail#1/21(2) AsIs: >/1 ]] }
    {refalrts::icUpdateFunc, 0, 1, 4},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 15, 16, 0},
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icSetRes, 0, 0, 18},
    {refalrts::icTrash, 0, 0, 15},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +17, 0, 0},
    // ( e.idx ) t.idx t.idx ( # TAlternative t.idx ) e.idx
    // </0 & ExtractAlternatives-NextState/4 (/7 e.Found#1/5 )/8 t.Head#1/9 t.Flush#1/11 (/15 # TAlternative/17 t.SrcPos#1/18 )/16 e.Tail#1/2 >/1
    {refalrts::icSave, 0, 21, 2},
    {refalrts::icBracketLeftSave, 0, 13, 21},
    {refalrts::icIdentLeftSave, 17, 2, 13},
    // closed e.Found#1 as range 5
    // closed e.Tail#1 as range 21(2)
    {refalrts::ictVarLeftSave, 0, 18, 13},
    {refalrts::icEmpty, 0, 0, 13},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ExtractAlternatives-Finish/4 AsIs: (/7 AsIs: e.Found#1/5 AsIs: )/8 AsIs: t.Head#1/9 AsIs: t.Flush#1/11 HalfReuse: # Finitive/15 HalfReuse: (/17 } # TAlternative/20 Tile{ AsIs: t.SrcPos#1/18 AsIs: )/16 AsIs: e.Tail#1/21(2) AsIs: >/1 ]] }
    {refalrts::icAllocIdent, 0, 2, 20},
    {refalrts::icUpdateFunc, 0, 1, 4},
    {refalrts::icReinitIdent, 0, 0, 15},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 17},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 17, 16, 0},
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icSetRes, 0, 0, 18},
    {refalrts::icSpliceTile, 20, 20, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +17, 0, 0},
    // ( e.idx ) t.idx t.idx ( # TDot t.idx ) e.idx
    // </0 & ExtractAlternatives-NextState/4 (/7 e.Found#1/5 )/8 t.Head#1/9 t.Flush#1/11 (/15 # TDot/17 t.SrcPos#1/18 )/16 e.Tail#1/2 >/1
    {refalrts::icSave, 0, 21, 2},
    {refalrts::icBracketLeftSave, 0, 13, 21},
    {refalrts::icIdentLeftSave, 17, 1, 13},
    // closed e.Found#1 as range 5
    // closed e.Tail#1 as range 21(2)
    {refalrts::ictVarLeftSave, 0, 18, 13},
    {refalrts::icEmpty, 0, 0, 13},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ExtractAlternatives-Finish/4 AsIs: (/7 AsIs: e.Found#1/5 AsIs: )/8 AsIs: t.Head#1/9 AsIs: t.Flush#1/11 HalfReuse: # Finitive/15 HalfReuse: (/17 } # TDot/20 Tile{ AsIs: t.SrcPos#1/18 AsIs: )/16 AsIs: e.Tail#1/21(2) AsIs: >/1 ]] }
    {refalrts::icAllocIdent, 0, 1, 20},
    {refalrts::icUpdateFunc, 0, 1, 4},
    {refalrts::icReinitIdent, 0, 0, 15},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 17},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 17, 16, 0},
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icSetRes, 0, 0, 18},
    {refalrts::icSpliceTile, 20, 20, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +16, 0, 0},
    // ( e.idx ) t.idx t.idx t.idx e.idx
    // </0 & ExtractAlternatives-NextState/4 (/7 e.Found#1/5 )/8 t.Head#1/9 t.Flush#1/11 t.Unexpected#1/13 e.Tail#1/2 >/1
    // closed e.Found#1 as range 5
    {refalrts::icSave, 0, 21, 2},
    {refalrts::ictVarLeftSave, 0, 13, 21},
    // closed e.Tail#1 as range 21(2)
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  e.Found#1/5 {REMOVED TILE}  t.Head#1/9 t.Flush#1/11 {REMOVED TILE}  e.Tail#1/21(2) {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & UnexpectedToken/4 } Tile{ AsIs: t.Unexpected#1/13 } Tile{ HalfReuse: 'n'/7 } Tile{ HalfReuse: 'e'/8 }"xt state name or next alternative"/15 Tile{ AsIs: >/1 ]] }
    {refalrts::icAllocString, 0, 0, 15},
    {refalrts::icUpdateFunc, 0, 0, 4},
    {refalrts::icReinitChar, 0, 'n', 7},
    {refalrts::icReinitChar, 0, 'e', 8},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceTile, 15, 16, 0},
    {refalrts::icSpliceTile, 8, 8, 0},
    {refalrts::icSpliceTile, 7, 7, 0},
    {refalrts::icSpliceTile, 13, 14, 0},
    {refalrts::icTrash, 0, 0, 4},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    // ( e.idx ) t.idx t.idx
    // </0 & ExtractAlternatives-NextState/4 (/7 e.Found#1/5 )/8 t.Head#1/9 t.Flush#1/11 >/1
    {refalrts::icEmpty, 0, 0, 2},
    // closed e.Found#1 as range 5
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 & ExtractAlternatives-NextState/4 {REMOVED TILE}  t.Head#1/9 t.Flush#1/11 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Found#1/5 AsIs: )/8 } Tile{ ]] }
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 7, 8, 0},
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
  //FAST GEN: e.$
  //GLOBAL GEN: ( e.$ ) t.$ t.$ e.$
  // </0 & ExtractAlternatives-NextState/4 (/7 e.idxB#0/5 )/8 t.idxT#0/9 t.idxTV#0/11 e.idxTVV#0/2 >/1
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
  context[10] = refalrts::tvar_left( context[9], context[2], context[3] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  context[12] = refalrts::tvar_left( context[11], context[2], context[3] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  // closed e.idxTVV#0 as range 2
  do {
    refalrts::start_sentence();
    // ( e.idx ) t.idx t.idx ( # TName t.idx e.idx ) e.idx
    // </0 & ExtractAlternatives-NextState/4 (/7 e.Found#1/5 )/8 t.Head#1/9 t.Flush#1/11 (/15 # TName/17 t.SrcPos#1/18 e.Name#1/13 )/16 e.Tail#1/2 >/1
    context[21] = context[2];
    context[22] = context[3];
    context[13] = 0;
    context[14] = 0;
    context[15] = refalrts::brackets_left( context[13], context[14], context[21], context[22] );
    if( ! context[15] )
      continue;
    refalrts::bracket_pointers(context[15], context[16]);
    context[17] = refalrts::ident_left(  & ident_TName<int>::name, context[13], context[14] );
    if( ! context[17] )
      continue;
    // closed e.Found#1 as range 5
    // closed e.Tail#1 as range 21(2)
    context[19] = refalrts::tvar_left( context[18], context[13], context[14] );
    if( ! context[19] )
      continue;
    // closed e.Name#1 as range 13

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  # TName/17 {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ExtractAlternatives-Finish/4 AsIs: (/7 AsIs: e.Found#1/5 AsIs: )/8 AsIs: t.Head#1/9 AsIs: t.Flush#1/11 AsIs: (/15 } Tile{ AsIs: t.SrcPos#1/18 AsIs: e.Name#1/13 AsIs: )/16 AsIs: e.Tail#1/21(2) AsIs: >/1 ]] }
    refalrts::update_name( context[4], ExtractAlternatives_Finish, "ExtractAlternatives-Finish" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[15], context[16] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[18];
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[15], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) t.idx t.idx ( # TAlternative t.idx ) e.idx
    // </0 & ExtractAlternatives-NextState/4 (/7 e.Found#1/5 )/8 t.Head#1/9 t.Flush#1/11 (/15 # TAlternative/17 t.SrcPos#1/18 )/16 e.Tail#1/2 >/1
    context[21] = context[2];
    context[22] = context[3];
    context[13] = 0;
    context[14] = 0;
    context[15] = refalrts::brackets_left( context[13], context[14], context[21], context[22] );
    if( ! context[15] )
      continue;
    refalrts::bracket_pointers(context[15], context[16]);
    context[17] = refalrts::ident_left(  & ident_TAlternative<int>::name, context[13], context[14] );
    if( ! context[17] )
      continue;
    // closed e.Found#1 as range 5
    // closed e.Tail#1 as range 21(2)
    context[19] = refalrts::tvar_left( context[18], context[13], context[14] );
    if( ! context[19] )
      continue;
    if( ! refalrts::empty_seq( context[13], context[14] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ExtractAlternatives-Finish/4 AsIs: (/7 AsIs: e.Found#1/5 AsIs: )/8 AsIs: t.Head#1/9 AsIs: t.Flush#1/11 HalfReuse: # Finitive/15 HalfReuse: (/17 } # TAlternative/20 Tile{ AsIs: t.SrcPos#1/18 AsIs: )/16 AsIs: e.Tail#1/21(2) AsIs: >/1 ]] }
    if( ! refalrts::alloc_ident( context[20], & ident_TAlternative<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ExtractAlternatives_Finish, "ExtractAlternatives-Finish" );
    refalrts::reinit_ident( context[15], & ident_Finitive<int>::name );
    refalrts::reinit_open_bracket( context[17] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[17], context[16] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[18];
    res = refalrts::splice_evar( res, context[20], context[20] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) t.idx t.idx ( # TDot t.idx ) e.idx
    // </0 & ExtractAlternatives-NextState/4 (/7 e.Found#1/5 )/8 t.Head#1/9 t.Flush#1/11 (/15 # TDot/17 t.SrcPos#1/18 )/16 e.Tail#1/2 >/1
    context[21] = context[2];
    context[22] = context[3];
    context[13] = 0;
    context[14] = 0;
    context[15] = refalrts::brackets_left( context[13], context[14], context[21], context[22] );
    if( ! context[15] )
      continue;
    refalrts::bracket_pointers(context[15], context[16]);
    context[17] = refalrts::ident_left(  & ident_TDot<int>::name, context[13], context[14] );
    if( ! context[17] )
      continue;
    // closed e.Found#1 as range 5
    // closed e.Tail#1 as range 21(2)
    context[19] = refalrts::tvar_left( context[18], context[13], context[14] );
    if( ! context[19] )
      continue;
    if( ! refalrts::empty_seq( context[13], context[14] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ExtractAlternatives-Finish/4 AsIs: (/7 AsIs: e.Found#1/5 AsIs: )/8 AsIs: t.Head#1/9 AsIs: t.Flush#1/11 HalfReuse: # Finitive/15 HalfReuse: (/17 } # TDot/20 Tile{ AsIs: t.SrcPos#1/18 AsIs: )/16 AsIs: e.Tail#1/21(2) AsIs: >/1 ]] }
    if( ! refalrts::alloc_ident( context[20], & ident_TDot<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ExtractAlternatives_Finish, "ExtractAlternatives-Finish" );
    refalrts::reinit_ident( context[15], & ident_Finitive<int>::name );
    refalrts::reinit_open_bracket( context[17] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[17], context[16] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[18];
    res = refalrts::splice_evar( res, context[20], context[20] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) t.idx t.idx t.idx e.idx
    // </0 & ExtractAlternatives-NextState/4 (/7 e.Found#1/5 )/8 t.Head#1/9 t.Flush#1/11 t.Unexpected#1/13 e.Tail#1/2 >/1
    // closed e.Found#1 as range 5
    context[21] = context[2];
    context[22] = context[3];
    context[14] = refalrts::tvar_left( context[13], context[21], context[22] );
    if( ! context[14] )
      continue;
    // closed e.Tail#1 as range 21(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  e.Found#1/5 {REMOVED TILE}  t.Head#1/9 t.Flush#1/11 {REMOVED TILE}  e.Tail#1/21(2) {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & UnexpectedToken/4 } Tile{ AsIs: t.Unexpected#1/13 } Tile{ HalfReuse: 'n'/7 } Tile{ HalfReuse: 'e'/8 }"xt state name or next alternative"/15 Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_chars( context[15], context[16], "xt state name or next alternative", 33 ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], UnexpectedToken, "UnexpectedToken" );
    refalrts::reinit_char( context[7], 'n' );
    refalrts::reinit_char( context[8], 'e' );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[8], context[8] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  // ( e.idx ) t.idx t.idx
  // </0 & ExtractAlternatives-NextState/4 (/7 e.Found#1/5 )/8 t.Head#1/9 t.Flush#1/11 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Found#1 as range 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  </0 & ExtractAlternatives-NextState/4 {REMOVED TILE}  t.Head#1/9 t.Flush#1/11 >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Found#1/5 AsIs: )/8 } Tile{ ]] }
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult ExtractAlternatives_Finish(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 24 elems
  refalrts::Iter context[24];
  refalrts::zeros( context, 24 );
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
    //FAST GEN: ( e.$ ) t.$ t.$ t.$ e.$
    //GLOBAL GEN: ( e.$ ) t.$ t.$ t.$ e.$
    // </0 & ExtractAlternatives-Finish/4 (/7 e.idxB#0/5 )/8 t.idxT#0/9 t.idxTV#0/11 t.idxTVV#0/13 e.idxTVVV#0/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icBracketLeftSave, 0, 5, 2},
    // closed e.idxB#0 as range 5
    {refalrts::ictVarLeftSave, 0, 9, 2},
    {refalrts::ictVarLeftSave, 0, 11, 2},
    {refalrts::ictVarLeftSave, 0, 13, 2},
    // closed e.idxTVVV#0 as range 2
    {refalrts::icOnFailGoTo, +18, 0, 0},
    // ( e.idx ) t.idx t.idx t.idx ( # TAlternative t.idx ) e.idx
    // </0 & ExtractAlternatives-Finish/4 (/7 e.Found#1/5 )/8 t.Head#1/9 t.Flush#1/11 t.NextState#1/13 (/17 # TAlternative/19 t.SrcPos#1/20 )/18 e.Tail#1/2 >/1
    {refalrts::icSave, 0, 22, 2},
    {refalrts::icBracketLeftSave, 0, 15, 22},
    {refalrts::icIdentLeftSave, 19, 0, 15},
    // closed e.Found#1 as range 5
    // closed e.Tail#1 as range 22(2)
    {refalrts::ictVarLeftSave, 0, 20, 15},
    {refalrts::icEmpty, 0, 0, 15},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  t.SrcPos#1/20 )/18 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ExtractAlternatives/4 AsIs: (/7 AsIs: e.Found#1/5 HalfReuse: (/8 AsIs: t.Head#1/9 AsIs: t.Flush#1/11 AsIs: t.NextState#1/13 HalfReuse: )/17 HalfReuse: )/19 } Tile{ AsIs: e.Tail#1/22(2) } Tile{ AsIs: >/1 ]] }
    {refalrts::icUpdateFunc, 0, 0, 4},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 17},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 19},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 7, 19, 0},
    {refalrts::icLinkBrackets, 8, 17, 0},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceEVar, 0, 0, 22},
    {refalrts::icTrash, 0, 0, 19},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    // ( e.idx ) t.idx t.idx t.idx e.idx
    // </0 & ExtractAlternatives-Finish/4 (/7 e.Found#1/5 )/8 t.Head#1/9 t.Flush#1/11 t.NextState#1/13 e.Tail#1/2 >/1
    // closed e.Found#1 as range 5
    // closed e.Tail#1 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Found#1/5 HalfReuse: (/8 AsIs: t.Head#1/9 AsIs: t.Flush#1/11 AsIs: t.NextState#1/13 } Tile{ HalfReuse: )/0 HalfReuse: )/4 } Tile{ AsIs: e.Tail#1/2 } Tile{ ]] }
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 0},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 4},
    {refalrts::icLinkBrackets, 7, 4, 0},
    {refalrts::icLinkBrackets, 8, 0, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceTile, 0, 4, 0},
    {refalrts::icSpliceTile, 7, 14, 0},
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
  //FAST GEN: ( e.$ ) t.$ t.$ t.$ e.$
  //GLOBAL GEN: ( e.$ ) t.$ t.$ t.$ e.$
  // </0 & ExtractAlternatives-Finish/4 (/7 e.idxB#0/5 )/8 t.idxT#0/9 t.idxTV#0/11 t.idxTVV#0/13 e.idxTVVV#0/2 >/1
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
  context[10] = refalrts::tvar_left( context[9], context[2], context[3] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  context[12] = refalrts::tvar_left( context[11], context[2], context[3] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  context[14] = refalrts::tvar_left( context[13], context[2], context[3] );
  if( ! context[14] )
    return refalrts::cRecognitionImpossible;
  // closed e.idxTVVV#0 as range 2
  do {
    refalrts::start_sentence();
    // ( e.idx ) t.idx t.idx t.idx ( # TAlternative t.idx ) e.idx
    // </0 & ExtractAlternatives-Finish/4 (/7 e.Found#1/5 )/8 t.Head#1/9 t.Flush#1/11 t.NextState#1/13 (/17 # TAlternative/19 t.SrcPos#1/20 )/18 e.Tail#1/2 >/1
    context[22] = context[2];
    context[23] = context[3];
    context[15] = 0;
    context[16] = 0;
    context[17] = refalrts::brackets_left( context[15], context[16], context[22], context[23] );
    if( ! context[17] )
      continue;
    refalrts::bracket_pointers(context[17], context[18]);
    context[19] = refalrts::ident_left(  & ident_TAlternative<int>::name, context[15], context[16] );
    if( ! context[19] )
      continue;
    // closed e.Found#1 as range 5
    // closed e.Tail#1 as range 22(2)
    context[21] = refalrts::tvar_left( context[20], context[15], context[16] );
    if( ! context[21] )
      continue;
    if( ! refalrts::empty_seq( context[15], context[16] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  t.SrcPos#1/20 )/18 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ExtractAlternatives/4 AsIs: (/7 AsIs: e.Found#1/5 HalfReuse: (/8 AsIs: t.Head#1/9 AsIs: t.Flush#1/11 AsIs: t.NextState#1/13 HalfReuse: )/17 HalfReuse: )/19 } Tile{ AsIs: e.Tail#1/22(2) } Tile{ AsIs: >/1 ]] }
    refalrts::update_name( context[4], ExtractAlternatives, "ExtractAlternatives" );
    refalrts::reinit_open_bracket( context[8] );
    refalrts::reinit_close_bracket( context[17] );
    refalrts::reinit_close_bracket( context[19] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[19] );
    refalrts::link_brackets( context[8], context[17] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[22], context[23] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[19], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  // ( e.idx ) t.idx t.idx t.idx e.idx
  // </0 & ExtractAlternatives-Finish/4 (/7 e.Found#1/5 )/8 t.Head#1/9 t.Flush#1/11 t.NextState#1/13 e.Tail#1/2 >/1
  // closed e.Found#1 as range 5
  // closed e.Tail#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Found#1/5 HalfReuse: (/8 AsIs: t.Head#1/9 AsIs: t.Flush#1/11 AsIs: t.NextState#1/13 } Tile{ HalfReuse: )/0 HalfReuse: )/4 } Tile{ AsIs: e.Tail#1/2 } Tile{ ]] }
  refalrts::reinit_open_bracket( context[8] );
  refalrts::reinit_close_bracket( context[0] );
  refalrts::reinit_close_bracket( context[4] );
  refalrts::link_brackets( context[7], context[4] );
  refalrts::link_brackets( context[8], context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[0], context[4] );
  res = refalrts::splice_evar( res, context[7], context[14] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult ToText(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
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
    {"of file", 7},
    {"error flus", 10},
    {"flush ", 6},
    {"ed", 2},
    {"l ", 2},
    {"er", 2},
    {"me ", 3},
    {" n", 2}
  };
  static const refalrts::RASLCommand raa[] = {
    //FAST GEN: e.$
    //GLOBAL GEN: s.$ e.$
    // </0 & ToText/4 s.idx#0/5 e.idxV#0/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icsVarLeft, 0, 5, 2},
    // closed e.idxV#0 as range 2
    {refalrts::icOnFailGoTo, +14, 0, 0},
    // # TSetName e.idx
    // </0 & ToText/4 # TSetName/5 e.Name#1/2 >/1
    {refalrts::icIdentTerm, 0, 9, 5},
    // closed e.Name#1 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: 's'/0 HalfReuse: 'e'/4 HalfReuse: 't'/5 }" n"/6 Tile{ HalfReuse: 'a'/1 }"me "/8 Tile{ AsIs: e.Name#1/2 } Tile{ ]] }
    {refalrts::icAllocString, 0, 7, 6},
    {refalrts::icAllocString, 0, 6, 8},
    {refalrts::icReinitChar, 0, 's', 0},
    {refalrts::icReinitChar, 0, 'e', 4},
    {refalrts::icReinitChar, 0, 't', 5},
    {refalrts::icReinitChar, 0, 'a', 1},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceTile, 8, 9, 0},
    {refalrts::icSpliceTile, 1, 1, 0},
    {refalrts::icSpliceTile, 6, 7, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +14, 0, 0},
    // # TLiteral e.idx
    // </0 & ToText/4 # TLiteral/5 e.Text#1/2 >/1
    {refalrts::icIdentTerm, 0, 8, 5},
    // closed e.Text#1 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: 'l'/0 HalfReuse: 'i'/4 HalfReuse: 't'/5 }"er"/6 Tile{ HalfReuse: 'a'/1 }"l "/8 Tile{ AsIs: e.Text#1/2 } Tile{ ]] }
    {refalrts::icAllocString, 0, 5, 6},
    {refalrts::icAllocString, 0, 4, 8},
    {refalrts::icReinitChar, 0, 'l', 0},
    {refalrts::icReinitChar, 0, 'i', 4},
    {refalrts::icReinitChar, 0, 't', 5},
    {refalrts::icReinitChar, 0, 'a', 1},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceTile, 8, 9, 0},
    {refalrts::icSpliceTile, 1, 1, 0},
    {refalrts::icSpliceTile, 6, 7, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +12, 0, 0},
    // # TName e.idx
    // </0 & ToText/4 # TName/5 e.Name#1/2 >/1
    {refalrts::icIdentTerm, 0, 7, 5},
    // closed e.Name#1 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: 'n'/0 HalfReuse: 'a'/4 HalfReuse: 'm'/5 } Tile{ HalfReuse: 'e'/1 } ' '/6 Tile{ AsIs: e.Name#1/2 } Tile{ ]] }
    {refalrts::icAllocChar, 0, ' ', 6},
    {refalrts::icReinitChar, 0, 'n', 0},
    {refalrts::icReinitChar, 0, 'a', 4},
    {refalrts::icReinitChar, 0, 'm', 5},
    {refalrts::icReinitChar, 0, 'e', 1},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceTile, 6, 6, 0},
    {refalrts::icSpliceTile, 1, 1, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +14, 0, 0},
    // # TNamedFlush e.idx
    // </0 & ToText/4 # TNamedFlush/5 e.Name#1/2 >/1
    {refalrts::icIdentTerm, 0, 6, 5},
    // closed e.Name#1 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: 'n'/0 HalfReuse: 'a'/4 HalfReuse: 'm'/5 }"ed"/6 Tile{ HalfReuse: ' '/1 }"flush "/8 Tile{ AsIs: e.Name#1/2 } Tile{ ]] }
    {refalrts::icAllocString, 0, 3, 6},
    {refalrts::icAllocString, 0, 2, 8},
    {refalrts::icReinitChar, 0, 'n', 0},
    {refalrts::icReinitChar, 0, 'a', 4},
    {refalrts::icReinitChar, 0, 'm', 5},
    {refalrts::icReinitChar, 0, ' ', 1},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceTile, 8, 9, 0},
    {refalrts::icSpliceTile, 1, 1, 0},
    {refalrts::icSpliceTile, 6, 7, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +10, 0, 0},
    // # TEquals
    // </0 & ToText/4 # TEquals/5 >/1
    {refalrts::icIdentTerm, 0, 5, 5},
    {refalrts::icSave, 0, 10, 2},
    {refalrts::icEmpty, 0, 0, 10},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: '\"'/4 HalfReuse: '='/5 HalfReuse: '\"'/1 ]] }
    {refalrts::icReinitChar, 0, '\"', 4},
    {refalrts::icReinitChar, 0, '=', 5},
    {refalrts::icReinitChar, 0, '\"', 1},
    {refalrts::icSetRes, 0, 0, 4},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +10, 0, 0},
    // # TDot
    // </0 & ToText/4 # TDot/5 >/1
    {refalrts::icIdentTerm, 0, 4, 5},
    {refalrts::icSave, 0, 10, 2},
    {refalrts::icEmpty, 0, 0, 10},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: '\"'/4 HalfReuse: '.'/5 HalfReuse: '\"'/1 ]] }
    {refalrts::icReinitChar, 0, '\"', 4},
    {refalrts::icReinitChar, 0, '.', 5},
    {refalrts::icReinitChar, 0, '\"', 1},
    {refalrts::icSetRes, 0, 0, 4},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +10, 0, 0},
    // # TAlternative
    // </0 & ToText/4 # TAlternative/5 >/1
    {refalrts::icIdentTerm, 0, 3, 5},
    {refalrts::icSave, 0, 10, 2},
    {refalrts::icEmpty, 0, 0, 10},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: '\"'/4 HalfReuse: '|'/5 HalfReuse: '\"'/1 ]] }
    {refalrts::icReinitChar, 0, '\"', 4},
    {refalrts::icReinitChar, 0, '|', 5},
    {refalrts::icReinitChar, 0, '\"', 1},
    {refalrts::icSetRes, 0, 0, 4},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +12, 0, 0},
    // # TFlush
    // </0 & ToText/4 # TFlush/5 >/1
    {refalrts::icIdentTerm, 0, 2, 5},
    {refalrts::icSave, 0, 10, 2},
    {refalrts::icEmpty, 0, 0, 10},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: 'f'/0 HalfReuse: 'l'/4 HalfReuse: 'u'/5 HalfReuse: 's'/1 } 'h'/6 Tile{ ]] }
    {refalrts::icAllocChar, 0, 'h', 6},
    {refalrts::icReinitChar, 0, 'f', 0},
    {refalrts::icReinitChar, 0, 'l', 4},
    {refalrts::icReinitChar, 0, 'u', 5},
    {refalrts::icReinitChar, 0, 's', 1},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 6, 6, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +10, 0, 0},
    // # TErrorFlush e.idx
    // </0 & ToText/4 # TErrorFlush/5 e.Text#1/2 >/1
    {refalrts::icIdentTerm, 0, 1, 5},
    // closed e.Text#1 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ }"error flus"/6 Tile{ HalfReuse: 'h'/0 HalfReuse: ' '/4 HalfReuse: '\"'/5 AsIs: e.Text#1/2 HalfReuse: '\"'/1 ]] }
    {refalrts::icAllocString, 0, 1, 6},
    {refalrts::icReinitChar, 0, 'h', 0},
    {refalrts::icReinitChar, 0, ' ', 4},
    {refalrts::icReinitChar, 0, '\"', 5},
    {refalrts::icReinitChar, 0, '\"', 1},
    {refalrts::icSetRes, 0, 0, 0},
    {refalrts::icSpliceTile, 6, 7, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    // # TEOF
    // </0 & ToText/4 # TEOF/5 >/1
    {refalrts::icIdentTerm, 0, 0, 5},
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: 'e'/0 HalfReuse: 'n'/4 HalfReuse: 'd'/5 HalfReuse: ' '/1 }"of file"/6 Tile{ ]] }
    {refalrts::icAllocString, 0, 0, 6},
    {refalrts::icReinitChar, 0, 'e', 0},
    {refalrts::icReinitChar, 0, 'n', 4},
    {refalrts::icReinitChar, 0, 'd', 5},
    {refalrts::icReinitChar, 0, ' ', 1},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 6, 7, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[9];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  //FAST GEN: e.$
  //GLOBAL GEN: s.$ e.$
  // </0 & ToText/4 s.idx#0/5 e.idxV#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.idxV#0 as range 2
  do {
    refalrts::start_sentence();
    // # TSetName e.idx
    // </0 & ToText/4 # TSetName/5 e.Name#1/2 >/1
    if( ! refalrts::ident_term(  & ident_TSetName<int>::name, context[5] ) )
      continue;
    // closed e.Name#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: 's'/0 HalfReuse: 'e'/4 HalfReuse: 't'/5 }" n"/6 Tile{ HalfReuse: 'a'/1 }"me "/8 Tile{ AsIs: e.Name#1/2 } Tile{ ]] }
    if( ! refalrts::alloc_chars( context[6], context[7], " n", 2 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[8], context[9], "me ", 3 ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[0], 's' );
    refalrts::reinit_char( context[4], 'e' );
    refalrts::reinit_char( context[5], 't' );
    refalrts::reinit_char( context[1], 'a' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[8], context[9] );
    res = refalrts::splice_evar( res, context[1], context[1] );
    res = refalrts::splice_evar( res, context[6], context[7] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // # TLiteral e.idx
    // </0 & ToText/4 # TLiteral/5 e.Text#1/2 >/1
    if( ! refalrts::ident_term(  & ident_TLiteral<int>::name, context[5] ) )
      continue;
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: 'l'/0 HalfReuse: 'i'/4 HalfReuse: 't'/5 }"er"/6 Tile{ HalfReuse: 'a'/1 }"l "/8 Tile{ AsIs: e.Text#1/2 } Tile{ ]] }
    if( ! refalrts::alloc_chars( context[6], context[7], "er", 2 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[8], context[9], "l ", 2 ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[0], 'l' );
    refalrts::reinit_char( context[4], 'i' );
    refalrts::reinit_char( context[5], 't' );
    refalrts::reinit_char( context[1], 'a' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[8], context[9] );
    res = refalrts::splice_evar( res, context[1], context[1] );
    res = refalrts::splice_evar( res, context[6], context[7] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // # TName e.idx
    // </0 & ToText/4 # TName/5 e.Name#1/2 >/1
    if( ! refalrts::ident_term(  & ident_TName<int>::name, context[5] ) )
      continue;
    // closed e.Name#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: 'n'/0 HalfReuse: 'a'/4 HalfReuse: 'm'/5 } Tile{ HalfReuse: 'e'/1 } ' '/6 Tile{ AsIs: e.Name#1/2 } Tile{ ]] }
    if( ! refalrts::alloc_char( context[6], ' ' ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[0], 'n' );
    refalrts::reinit_char( context[4], 'a' );
    refalrts::reinit_char( context[5], 'm' );
    refalrts::reinit_char( context[1], 'e' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[6], context[6] );
    res = refalrts::splice_evar( res, context[1], context[1] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // # TNamedFlush e.idx
    // </0 & ToText/4 # TNamedFlush/5 e.Name#1/2 >/1
    if( ! refalrts::ident_term(  & ident_TNamedFlush<int>::name, context[5] ) )
      continue;
    // closed e.Name#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: 'n'/0 HalfReuse: 'a'/4 HalfReuse: 'm'/5 }"ed"/6 Tile{ HalfReuse: ' '/1 }"flush "/8 Tile{ AsIs: e.Name#1/2 } Tile{ ]] }
    if( ! refalrts::alloc_chars( context[6], context[7], "ed", 2 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[8], context[9], "flush ", 6 ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[0], 'n' );
    refalrts::reinit_char( context[4], 'a' );
    refalrts::reinit_char( context[5], 'm' );
    refalrts::reinit_char( context[1], ' ' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[8], context[9] );
    res = refalrts::splice_evar( res, context[1], context[1] );
    res = refalrts::splice_evar( res, context[6], context[7] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // # TEquals
    // </0 & ToText/4 # TEquals/5 >/1
    if( ! refalrts::ident_term(  & ident_TEquals<int>::name, context[5] ) )
      continue;
    context[10] = context[2];
    context[11] = context[3];
    if( ! refalrts::empty_seq( context[10], context[11] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: '\"'/4 HalfReuse: '='/5 HalfReuse: '\"'/1 ]] }
    refalrts::reinit_char( context[4], '\"' );
    refalrts::reinit_char( context[5], '=' );
    refalrts::reinit_char( context[1], '\"' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[4];
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // # TDot
    // </0 & ToText/4 # TDot/5 >/1
    if( ! refalrts::ident_term(  & ident_TDot<int>::name, context[5] ) )
      continue;
    context[10] = context[2];
    context[11] = context[3];
    if( ! refalrts::empty_seq( context[10], context[11] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: '\"'/4 HalfReuse: '.'/5 HalfReuse: '\"'/1 ]] }
    refalrts::reinit_char( context[4], '\"' );
    refalrts::reinit_char( context[5], '.' );
    refalrts::reinit_char( context[1], '\"' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[4];
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // # TAlternative
    // </0 & ToText/4 # TAlternative/5 >/1
    if( ! refalrts::ident_term(  & ident_TAlternative<int>::name, context[5] ) )
      continue;
    context[10] = context[2];
    context[11] = context[3];
    if( ! refalrts::empty_seq( context[10], context[11] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: '\"'/4 HalfReuse: '|'/5 HalfReuse: '\"'/1 ]] }
    refalrts::reinit_char( context[4], '\"' );
    refalrts::reinit_char( context[5], '|' );
    refalrts::reinit_char( context[1], '\"' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[4];
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // # TFlush
    // </0 & ToText/4 # TFlush/5 >/1
    if( ! refalrts::ident_term(  & ident_TFlush<int>::name, context[5] ) )
      continue;
    context[10] = context[2];
    context[11] = context[3];
    if( ! refalrts::empty_seq( context[10], context[11] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: 'f'/0 HalfReuse: 'l'/4 HalfReuse: 'u'/5 HalfReuse: 's'/1 } 'h'/6 Tile{ ]] }
    if( ! refalrts::alloc_char( context[6], 'h' ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[0], 'f' );
    refalrts::reinit_char( context[4], 'l' );
    refalrts::reinit_char( context[5], 'u' );
    refalrts::reinit_char( context[1], 's' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[6], context[6] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // # TErrorFlush e.idx
    // </0 & ToText/4 # TErrorFlush/5 e.Text#1/2 >/1
    if( ! refalrts::ident_term(  & ident_TErrorFlush<int>::name, context[5] ) )
      continue;
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ }"error flus"/6 Tile{ HalfReuse: 'h'/0 HalfReuse: ' '/4 HalfReuse: '\"'/5 AsIs: e.Text#1/2 HalfReuse: '\"'/1 ]] }
    if( ! refalrts::alloc_chars( context[6], context[7], "error flus", 10 ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[0], 'h' );
    refalrts::reinit_char( context[4], ' ' );
    refalrts::reinit_char( context[5], '\"' );
    refalrts::reinit_char( context[1], '\"' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[0];
    res = refalrts::splice_evar( res, context[6], context[7] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  // # TEOF
  // </0 & ToText/4 # TEOF/5 >/1
  if( ! refalrts::ident_term(  & ident_TEOF<int>::name, context[5] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ HalfReuse: 'e'/0 HalfReuse: 'n'/4 HalfReuse: 'd'/5 HalfReuse: ' '/1 }"of file"/6 Tile{ ]] }
  if( ! refalrts::alloc_chars( context[6], context[7], "of file", 7 ) )
    return refalrts::cNoMemory;
  refalrts::reinit_char( context[0], 'e' );
  refalrts::reinit_char( context[4], 'n' );
  refalrts::reinit_char( context[5], 'd' );
  refalrts::reinit_char( context[1], ' ' );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[6], context[7] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult UnexpectedToken(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { ErrorAt, "ErrorAt" },
    { ToText, "ToText" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  static const refalrts::StringItem strings[] = {
    {" expected", 9},
    {"Unexpected ", 11}
  };
  static const refalrts::RASLCommand raa[] = {
    // </0 & UnexpectedToken/4 (/7 s.Type#1/9 s.LineNum#1/10 e.Unexpected#1/5 )/8 e.Message#1/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icBracketLeftSave, 0, 5, 2},
    // closed e.Message#1 as range 2
    {refalrts::icsVarLeft, 0, 9, 5},
    {refalrts::icsVarLeft, 0, 10, 5},
    // closed e.Unexpected#1 as range 5
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  s.LineNum#1/10 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ErrorAt/4 HalfReuse: s.LineNum1 #10/7 }"Unexpected "/11 </13 & ToText/14 Tile{ AsIs: s.Type#1/9 } Tile{ AsIs: e.Unexpected#1/5 } >/15" expected"/16 Tile{ HalfReuse: ' '/8 AsIs: e.Message#1/2 AsIs: >/1 ]] }
    {refalrts::icAllocString, 0, 1, 11},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 13},
    {refalrts::icAllocFunc, 0, 1, 14},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 15},
    {refalrts::icAllocString, 0, 0, 16},
    {refalrts::icUpdateFunc, 0, 0, 4},
    {refalrts::icReinitSVar, 0, 10, 7},
    {refalrts::icReinitChar, 0, ' ', 8},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icPushStack, 0, 0, 15},
    {refalrts::icPushStack, 0, 0, 13},
    {refalrts::icSetRes, 0, 0, 8},
    {refalrts::icSpliceTile, 15, 17, 0},
    {refalrts::icSpliceEVar, 0, 0, 5},
    {refalrts::icSpliceTile, 9, 9, 0},
    {refalrts::icSpliceTile, 11, 14, 0},
    {refalrts::icTrash, 0, 0, 7},
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
  // </0 & UnexpectedToken/4 (/7 s.Type#1/9 s.LineNum#1/10 e.Unexpected#1/5 )/8 e.Message#1/2 >/1
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
  // closed e.Message#1 as range 2
  if( ! refalrts::svar_left( context[9], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[10], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Unexpected#1 as range 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  s.LineNum#1/10 {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & ErrorAt/4 HalfReuse: s.LineNum1 #10/7 }"Unexpected "/11 </13 & ToText/14 Tile{ AsIs: s.Type#1/9 } Tile{ AsIs: e.Unexpected#1/5 } >/15" expected"/16 Tile{ HalfReuse: ' '/8 AsIs: e.Message#1/2 AsIs: >/1 ]] }
  if( ! refalrts::alloc_chars( context[11], context[12], "Unexpected ", 11 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[14], ToText, "ToText" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[16], context[17], " expected", 9 ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ErrorAt, "ErrorAt" );
  refalrts::reinit_svar( context[7], context[10] );
  refalrts::reinit_char( context[8], ' ' );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[15] );
  refalrts::push_stack( context[13] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[15], context[17] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[9], context[9] );
  res = refalrts::splice_evar( res, context[11], context[14] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[7], res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult gen_Tokens_L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
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
    // </0 & Tokens\1/4 (/7 e.Line#2/5 )/8 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icBracketLeftSave, 0, 5, 2},
    {refalrts::icEmpty, 0, 0, 2},
    // closed e.Line#2 as range 5
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 & Tokens\1/4 (/7 {REMOVED TILE}  )/8 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: e.Line#2/5 } Tile{ HalfReuse: '\n'/1 ]] }
    {refalrts::icReinitChar, 0, '\n', 1},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceEVar, 0, 0, 5},
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
  // </0 & Tokens\1/4 (/7 e.Line#2/5 )/8 >/1
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
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Line#2 as range 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  </0 & Tokens\1/4 (/7 {REMOVED TILE}  )/8 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Line#2/5 } Tile{ HalfReuse: '\n'/1 ]] }
  refalrts::reinit_char( context[1], '\n' );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult gen_Tokens_L2(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
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
    //FAST GEN: s.$ ( e.$ )
    //GLOBAL GEN: s.$ ( s.$ e.$ )
    // </0 & Tokens\2/4 s.idx#0/9 (/7 s.idxVB#0/10 e.idxVBV#0/5 )/8 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icBracketRightSave, 0, 5, 2},
    {refalrts::icsVarLeft, 0, 9, 2},
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icsVarLeft, 0, 10, 5},
    // closed e.idxVBV#0 as range 5
    {refalrts::icOnFailGoTo, +11, 0, 0},
    // s.idx ( # TNewLine )
    // </0 & Tokens\2/4 s.LineNumber#2/9 (/7 # TNewLine/10 )/8 >/1
    {refalrts::icIdentTerm, 0, 1, 10},
    {refalrts::icSave, 0, 11, 5},
    {refalrts::icEmpty, 0, 0, 11},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  # TNewLine/10 )/8 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Inc/4 AsIs: s.LineNumber#2/9 HalfReuse: >/7 } Tile{ ]] }
    {refalrts::icUpdateFunc, 0, 1, 4},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 7},
    {refalrts::icPushStack, 0, 0, 7},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icTrash, 0, 0, 7},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +9, 0, 0},
    // s.idx ( # TError e.idx )
    // </0 & Tokens\2/4 s.LineNumber#2/9 (/7 # TError/10 e.Text#2/5 )/8 >/1
    {refalrts::icIdentTerm, 0, 0, 10},
    // closed e.Text#2 as range 5
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  (/7 # TError/10 {REMOVED TILE}  )/8 {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ErrorAt/4 AsIs: s.LineNumber#2/9 } Tile{ AsIs: e.Text#2/5 } Tile{ AsIs: >/1 ]] }
    {refalrts::icUpdateFunc, 0, 0, 4},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceEVar, 0, 0, 5},
    {refalrts::icTrash, 0, 0, 9},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    // s.idx ( s.idx e.idx )
    // </0 & Tokens\2/4 s.LineNumber#2/9 (/7 s.TokName#2/10 e.Content#2/5 )/8 >/1
    // closed e.Content#2 as range 5
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 & Tokens\2/4 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: s.LineNumber#2/9 AsIs: (/7 AsIs: s.TokName#2/10 } Tile{ HalfReuse: s.LineNumber2 #9/8 } Tile{ AsIs: e.Content#2/5 } Tile{ HalfReuse: )/1 ]] }
    {refalrts::icReinitSVar, 0, 9, 8},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
    {refalrts::icLinkBrackets, 7, 1, 0},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceEVar, 0, 0, 5},
    {refalrts::icSpliceTile, 8, 8, 0},
    {refalrts::icSpliceTile, 9, 10, 0},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[2];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  //FAST GEN: s.$ ( e.$ )
  //GLOBAL GEN: s.$ ( s.$ e.$ )
  // </0 & Tokens\2/4 s.idx#0/9 (/7 s.idxVB#0/10 e.idxVBV#0/5 )/8 >/1
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
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[10], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.idxVBV#0 as range 5
  do {
    refalrts::start_sentence();
    // s.idx ( # TNewLine )
    // </0 & Tokens\2/4 s.LineNumber#2/9 (/7 # TNewLine/10 )/8 >/1
    if( ! refalrts::ident_term(  & ident_TNewLine<int>::name, context[10] ) )
      continue;
    context[11] = context[5];
    context[12] = context[6];
    if( ! refalrts::empty_seq( context[11], context[12] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  # TNewLine/10 )/8 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Inc/4 AsIs: s.LineNumber#2/9 HalfReuse: >/7 } Tile{ ]] }
    refalrts::update_name( context[4], Inc, "Inc" );
    refalrts::reinit_close_call( context[7] );
    refalrts::push_stack( context[7] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[7], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // s.idx ( # TError e.idx )
    // </0 & Tokens\2/4 s.LineNumber#2/9 (/7 # TError/10 e.Text#2/5 )/8 >/1
    if( ! refalrts::ident_term(  & ident_TError<int>::name, context[10] ) )
      continue;
    // closed e.Text#2 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  (/7 # TError/10 {REMOVED TILE}  )/8 {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ErrorAt/4 AsIs: s.LineNumber#2/9 } Tile{ AsIs: e.Text#2/5 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name( context[4], ErrorAt, "ErrorAt" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[9], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  // s.idx ( s.idx e.idx )
  // </0 & Tokens\2/4 s.LineNumber#2/9 (/7 s.TokName#2/10 e.Content#2/5 )/8 >/1
  // closed e.Content#2 as range 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  </0 & Tokens\2/4 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ AsIs: s.LineNumber#2/9 AsIs: (/7 AsIs: s.TokName#2/10 } Tile{ HalfReuse: s.LineNumber2 #9/8 } Tile{ AsIs: e.Content#2/5 } Tile{ HalfReuse: )/1 ]] }
  refalrts::reinit_svar( context[8], context[9] );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[7], context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult gen_Tokens_L3(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
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
    // </0 & Tokens\3/4 s.LineNumber#2/5 e.Tokens#2/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icsVarLeft, 0, 5, 2},
    // closed e.Tokens#2 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: e.Tokens#2/2 } Tile{ HalfReuse: (/0 HalfReuse: # TEOF/4 AsIs: s.LineNumber#2/5 } Tile{ HalfReuse: )/1 ]] }
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 0},
    {refalrts::icReinitIdent, 0, 0, 4},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
    {refalrts::icLinkBrackets, 0, 1, 0},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceTile, 0, 5, 0},
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
  // </0 & Tokens\3/4 s.LineNumber#2/5 e.Tokens#2/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Tokens#2 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Tokens#2/2 } Tile{ HalfReuse: (/0 HalfReuse: # TEOF/4 AsIs: s.LineNumber#2/5 } Tile{ HalfReuse: )/1 ]] }
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_ident( context[4], & ident_TEOF<int>::name );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[0], context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[0], context[5] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::use( res );
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
    { Fetch, "Fetch" },
    { gen_Tokens_L3, "Tokens\\3" },
    { Inc, "Inc" },
    { gen_Tokens_L2, "Tokens\\2" },
    { MapReduce, "MapReduce" },
    { LoTokens, "LoTokens" },
    { gen_Tokens_L1, "Tokens\\1" },
    { Map, "Map" },
    { Seq, "Seq" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    // </0 & Tokens/4 s.FirstLineNumber#1/5 e.Lines#1/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icsVarLeft, 0, 5, 2},
    // closed e.Lines#1 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 } Tile{ AsIs: e.Lines#1/2 } </6 & Seq/7 (/8 & Map/9 & Tokens\1/10 )/11 & LoTokens/12 (/13 & MapReduce/14 & Tokens\2/15 </16 & Inc/17 Tile{ AsIs: s.FirstLineNumber#1/5 } >/18 )/19 & Tokens\3/20 >/21 Tile{ AsIs: >/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 6},
    {refalrts::icAllocFunc, 0, 8, 7},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icAllocFunc, 0, 7, 9},
    {refalrts::icAllocFunc, 0, 6, 10},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 11},
    {refalrts::icAllocFunc, 0, 5, 12},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 13},
    {refalrts::icAllocFunc, 0, 4, 14},
    {refalrts::icAllocFunc, 0, 3, 15},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 16},
    {refalrts::icAllocFunc, 0, 2, 17},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 18},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 19},
    {refalrts::icAllocFunc, 0, 1, 20},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 21},
    {refalrts::icUpdateFunc, 0, 0, 4},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icPushStack, 0, 0, 21},
    {refalrts::icPushStack, 0, 0, 6},
    {refalrts::icLinkBrackets, 13, 19, 0},
    {refalrts::icPushStack, 0, 0, 18},
    {refalrts::icPushStack, 0, 0, 16},
    {refalrts::icLinkBrackets, 8, 11, 0},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceTile, 18, 21, 0},
    {refalrts::icSpliceTile, 5, 5, 0},
    {refalrts::icSpliceTile, 6, 17, 0},
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
  // </0 & Tokens/4 s.FirstLineNumber#1/5 e.Lines#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Lines#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 } Tile{ AsIs: e.Lines#1/2 } </6 & Seq/7 (/8 & Map/9 & Tokens\1/10 )/11 & LoTokens/12 (/13 & MapReduce/14 & Tokens\2/15 </16 & Inc/17 Tile{ AsIs: s.FirstLineNumber#1/5 } >/18 )/19 & Tokens\3/20 >/21 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[7], Seq, "Seq" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[9], Map, "Map" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[10], gen_Tokens_L1, "Tokens\\1" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[12], LoTokens, "LoTokens" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[14], MapReduce, "MapReduce" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[15], gen_Tokens_L2, "Tokens\\2" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[16] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[17], Inc, "Inc" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[18] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[19] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[20], gen_Tokens_L3, "Tokens\\3" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[21] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], Fetch, "Fetch" );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[21] );
  refalrts::push_stack( context[6] );
  refalrts::link_brackets( context[13], context[19] );
  refalrts::push_stack( context[18] );
  refalrts::push_stack( context[16] );
  refalrts::link_brackets( context[8], context[11] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[18], context[21] );
  res = refalrts::splice_evar( res, context[5], context[5] );
  res = refalrts::splice_evar( res, context[6], context[17] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult LoTokens(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
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
    //FAST GEN: e.$
    //GLOBAL GEN: e.$
    // </0 & LoTokens/4 e.idx#0/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    // closed e.idx#0 as range 2
    {refalrts::icOnFailGoTo, +10, 0, 0},
    // ' ' e.idx
    // </0 & LoTokens/4 ' '/5 e.Text#1/2 >/1
    {refalrts::icSave, 0, 8, 2},
    {refalrts::icCharLeftSave, 5, static_cast<unsigned char>(' '), 8},
    // closed e.Text#1 as range 8(2)
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </4 HalfReuse: & LoTokens/5 AsIs: e.Text#1/8(2) AsIs: >/1 ]] }
    {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 4},
    {refalrts::icReinitFunc, 0, 1, 5},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 4},
    {refalrts::icSetRes, 0, 0, 4},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +10, 0, 0},
    // '\t' e.idx
    // </0 & LoTokens/4 '\t'/5 e.Text#1/2 >/1
    {refalrts::icSave, 0, 8, 2},
    {refalrts::icCharLeftSave, 5, static_cast<unsigned char>('\t'), 8},
    // closed e.Text#1 as range 8(2)
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </4 HalfReuse: & LoTokens/5 AsIs: e.Text#1/8(2) AsIs: >/1 ]] }
    {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 4},
    {refalrts::icReinitFunc, 0, 1, 5},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 4},
    {refalrts::icSetRes, 0, 0, 4},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +10, 0, 0},
    // '\r' e.idx
    // </0 & LoTokens/4 '\r'/5 e.Text#1/2 >/1
    {refalrts::icSave, 0, 8, 2},
    {refalrts::icCharLeftSave, 5, static_cast<unsigned char>('\r'), 8},
    // closed e.Text#1 as range 8(2)
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </4 HalfReuse: & LoTokens/5 AsIs: e.Text#1/8(2) AsIs: >/1 ]] }
    {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 4},
    {refalrts::icReinitFunc, 0, 1, 5},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 4},
    {refalrts::icSetRes, 0, 0, 4},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +14, 0, 0},
    // '\n' e.idx
    // </0 & LoTokens/4 '\n'/5 e.Text#1/2 >/1
    {refalrts::icSave, 0, 8, 2},
    {refalrts::icCharLeftSave, 5, static_cast<unsigned char>('\n'), 8},
    // closed e.Text#1 as range 8(2)
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } (/6 # TNewLine/7 Tile{ HalfReuse: )/0 HalfReuse: </4 HalfReuse: & LoTokens/5 AsIs: e.Text#1/8(2) AsIs: >/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icAllocIdent, 0, 3, 7},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 0},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 4},
    {refalrts::icReinitFunc, 0, 1, 5},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 4},
    {refalrts::icLinkBrackets, 6, 0, 0},
    {refalrts::icSetRes, 0, 0, 0},
    {refalrts::icSpliceTile, 6, 7, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +13, 0, 0},
    // ':' e.idx
    // </0 & LoTokens/4 ':'/5 e.Text#1/2 >/1
    {refalrts::icSave, 0, 8, 2},
    {refalrts::icCharLeftSave, 5, static_cast<unsigned char>(':'), 8},
    // closed e.Text#1 as range 8(2)
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } </6 Tile{ HalfReuse: & SetName/0 HalfReuse: (/4 HalfReuse: )/5 AsIs: e.Text#1/8(2) AsIs: >/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 6},
    {refalrts::icReinitFunc, 0, 4, 0},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 4},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 5},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 6},
    {refalrts::icLinkBrackets, 4, 5, 0},
    {refalrts::icSetRes, 0, 0, 0},
    {refalrts::icSpliceTile, 6, 6, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +10, 0, 0},
    // '!' e.idx
    // </0 & LoTokens/4 '!'/5 e.Text#1/2 >/1
    {refalrts::icSave, 0, 8, 2},
    {refalrts::icCharLeftSave, 5, static_cast<unsigned char>('!'), 8},
    // closed e.Text#1 as range 8(2)
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </4 HalfReuse: & FlushName/5 AsIs: e.Text#1/8(2) AsIs: >/1 ]] }
    {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 4},
    {refalrts::icReinitFunc, 0, 3, 5},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 4},
    {refalrts::icSetRes, 0, 0, 4},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +13, 0, 0},
    // '\'' e.idx
    // </0 & LoTokens/4 '\''/5 e.Text#1/2 >/1
    {refalrts::icSave, 0, 8, 2},
    {refalrts::icCharLeftSave, 5, static_cast<unsigned char>('\''), 8},
    // closed e.Text#1 as range 8(2)
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } </6 Tile{ HalfReuse: & Literal/0 HalfReuse: (/4 HalfReuse: )/5 AsIs: e.Text#1/8(2) AsIs: >/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 6},
    {refalrts::icReinitFunc, 0, 2, 0},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 4},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 5},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 6},
    {refalrts::icLinkBrackets, 4, 5, 0},
    {refalrts::icSetRes, 0, 0, 0},
    {refalrts::icSpliceTile, 6, 6, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +14, 0, 0},
    // '=' e.idx
    // </0 & LoTokens/4 '='/5 e.Text#1/2 >/1
    {refalrts::icSave, 0, 8, 2},
    {refalrts::icCharLeftSave, 5, static_cast<unsigned char>('='), 8},
    // closed e.Text#1 as range 8(2)
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } (/6 # TEquals/7 Tile{ HalfReuse: )/0 HalfReuse: </4 HalfReuse: & LoTokens/5 AsIs: e.Text#1/8(2) AsIs: >/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icAllocIdent, 0, 2, 7},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 0},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 4},
    {refalrts::icReinitFunc, 0, 1, 5},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 4},
    {refalrts::icLinkBrackets, 6, 0, 0},
    {refalrts::icSetRes, 0, 0, 0},
    {refalrts::icSpliceTile, 6, 7, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +14, 0, 0},
    // '.' e.idx
    // </0 & LoTokens/4 '.'/5 e.Text#1/2 >/1
    {refalrts::icSave, 0, 8, 2},
    {refalrts::icCharLeftSave, 5, static_cast<unsigned char>('.'), 8},
    // closed e.Text#1 as range 8(2)
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } (/6 # TDot/7 Tile{ HalfReuse: )/0 HalfReuse: </4 HalfReuse: & LoTokens/5 AsIs: e.Text#1/8(2) AsIs: >/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icAllocIdent, 0, 1, 7},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 0},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 4},
    {refalrts::icReinitFunc, 0, 1, 5},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 4},
    {refalrts::icLinkBrackets, 6, 0, 0},
    {refalrts::icSetRes, 0, 0, 0},
    {refalrts::icSpliceTile, 6, 7, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +14, 0, 0},
    // '|' e.idx
    // </0 & LoTokens/4 '|'/5 e.Text#1/2 >/1
    {refalrts::icSave, 0, 8, 2},
    {refalrts::icCharLeftSave, 5, static_cast<unsigned char>('|'), 8},
    // closed e.Text#1 as range 8(2)
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } (/6 # TAlternative/7 Tile{ HalfReuse: )/0 HalfReuse: </4 HalfReuse: & LoTokens/5 AsIs: e.Text#1/8(2) AsIs: >/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icAllocIdent, 0, 0, 7},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 0},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 4},
    {refalrts::icReinitFunc, 0, 1, 5},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 4},
    {refalrts::icLinkBrackets, 6, 0, 0},
    {refalrts::icSetRes, 0, 0, 0},
    {refalrts::icSpliceTile, 6, 7, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +7, 0, 0},
    // s.idx e.idx
    // </0 & LoTokens/4 s.Next#1/5 e.Text#1/2 >/1
    {refalrts::icSave, 0, 8, 2},
    {refalrts::icsVarLeft, 0, 5, 8},
    // closed e.Text#1 as range 8(2)
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: s.Next#1/5 AsIs: e.Text#1/8(2) AsIs: >/1 ]] }
    {refalrts::icUpdateFunc, 0, 0, 4},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    //
    // </0 & LoTokens/4 >/1
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 & LoTokens/4 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ ]] }
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[11];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  //FAST GEN: e.$
  //GLOBAL GEN: e.$
  // </0 & LoTokens/4 e.idx#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.idx#0 as range 2
  do {
    refalrts::start_sentence();
    // ' ' e.idx
    // </0 & LoTokens/4 ' '/5 e.Text#1/2 >/1
    context[8] = context[2];
    context[9] = context[3];
    context[5] = refalrts::char_left( ' ', context[8], context[9] );
    if( ! context[5] )
      continue;
    // closed e.Text#1 as range 8(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </4 HalfReuse: & LoTokens/5 AsIs: e.Text#1/8(2) AsIs: >/1 ]] }
    refalrts::reinit_open_call( context[4] );
    refalrts::reinit_name( context[5], LoTokens, "LoTokens" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[4];
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // '\t' e.idx
    // </0 & LoTokens/4 '\t'/5 e.Text#1/2 >/1
    context[8] = context[2];
    context[9] = context[3];
    context[5] = refalrts::char_left( '\t', context[8], context[9] );
    if( ! context[5] )
      continue;
    // closed e.Text#1 as range 8(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </4 HalfReuse: & LoTokens/5 AsIs: e.Text#1/8(2) AsIs: >/1 ]] }
    refalrts::reinit_open_call( context[4] );
    refalrts::reinit_name( context[5], LoTokens, "LoTokens" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[4];
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // '\r' e.idx
    // </0 & LoTokens/4 '\r'/5 e.Text#1/2 >/1
    context[8] = context[2];
    context[9] = context[3];
    context[5] = refalrts::char_left( '\r', context[8], context[9] );
    if( ! context[5] )
      continue;
    // closed e.Text#1 as range 8(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </4 HalfReuse: & LoTokens/5 AsIs: e.Text#1/8(2) AsIs: >/1 ]] }
    refalrts::reinit_open_call( context[4] );
    refalrts::reinit_name( context[5], LoTokens, "LoTokens" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[4];
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // '\n' e.idx
    // </0 & LoTokens/4 '\n'/5 e.Text#1/2 >/1
    context[8] = context[2];
    context[9] = context[3];
    context[5] = refalrts::char_left( '\n', context[8], context[9] );
    if( ! context[5] )
      continue;
    // closed e.Text#1 as range 8(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } (/6 # TNewLine/7 Tile{ HalfReuse: )/0 HalfReuse: </4 HalfReuse: & LoTokens/5 AsIs: e.Text#1/8(2) AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_bracket( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[7], & ident_TNewLine<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::reinit_close_bracket( context[0] );
    refalrts::reinit_open_call( context[4] );
    refalrts::reinit_name( context[5], LoTokens, "LoTokens" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[4] );
    refalrts::link_brackets( context[6], context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[0];
    res = refalrts::splice_evar( res, context[6], context[7] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ':' e.idx
    // </0 & LoTokens/4 ':'/5 e.Text#1/2 >/1
    context[8] = context[2];
    context[9] = context[3];
    context[5] = refalrts::char_left( ':', context[8], context[9] );
    if( ! context[5] )
      continue;
    // closed e.Text#1 as range 8(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } </6 Tile{ HalfReuse: & SetName/0 HalfReuse: (/4 HalfReuse: )/5 AsIs: e.Text#1/8(2) AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_call( context[6] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_name( context[0], SetName, "SetName" );
    refalrts::reinit_open_bracket( context[4] );
    refalrts::reinit_close_bracket( context[5] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[6] );
    refalrts::link_brackets( context[4], context[5] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[0];
    res = refalrts::splice_evar( res, context[6], context[6] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // '!' e.idx
    // </0 & LoTokens/4 '!'/5 e.Text#1/2 >/1
    context[8] = context[2];
    context[9] = context[3];
    context[5] = refalrts::char_left( '!', context[8], context[9] );
    if( ! context[5] )
      continue;
    // closed e.Text#1 as range 8(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </4 HalfReuse: & FlushName/5 AsIs: e.Text#1/8(2) AsIs: >/1 ]] }
    refalrts::reinit_open_call( context[4] );
    refalrts::reinit_name( context[5], FlushName, "FlushName" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[4];
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // '\'' e.idx
    // </0 & LoTokens/4 '\''/5 e.Text#1/2 >/1
    context[8] = context[2];
    context[9] = context[3];
    context[5] = refalrts::char_left( '\'', context[8], context[9] );
    if( ! context[5] )
      continue;
    // closed e.Text#1 as range 8(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } </6 Tile{ HalfReuse: & Literal/0 HalfReuse: (/4 HalfReuse: )/5 AsIs: e.Text#1/8(2) AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_call( context[6] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_name( context[0], Literal, "Literal" );
    refalrts::reinit_open_bracket( context[4] );
    refalrts::reinit_close_bracket( context[5] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[6] );
    refalrts::link_brackets( context[4], context[5] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[0];
    res = refalrts::splice_evar( res, context[6], context[6] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // '=' e.idx
    // </0 & LoTokens/4 '='/5 e.Text#1/2 >/1
    context[8] = context[2];
    context[9] = context[3];
    context[5] = refalrts::char_left( '=', context[8], context[9] );
    if( ! context[5] )
      continue;
    // closed e.Text#1 as range 8(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } (/6 # TEquals/7 Tile{ HalfReuse: )/0 HalfReuse: </4 HalfReuse: & LoTokens/5 AsIs: e.Text#1/8(2) AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_bracket( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[7], & ident_TEquals<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::reinit_close_bracket( context[0] );
    refalrts::reinit_open_call( context[4] );
    refalrts::reinit_name( context[5], LoTokens, "LoTokens" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[4] );
    refalrts::link_brackets( context[6], context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[0];
    res = refalrts::splice_evar( res, context[6], context[7] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // '.' e.idx
    // </0 & LoTokens/4 '.'/5 e.Text#1/2 >/1
    context[8] = context[2];
    context[9] = context[3];
    context[5] = refalrts::char_left( '.', context[8], context[9] );
    if( ! context[5] )
      continue;
    // closed e.Text#1 as range 8(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } (/6 # TDot/7 Tile{ HalfReuse: )/0 HalfReuse: </4 HalfReuse: & LoTokens/5 AsIs: e.Text#1/8(2) AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_bracket( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[7], & ident_TDot<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::reinit_close_bracket( context[0] );
    refalrts::reinit_open_call( context[4] );
    refalrts::reinit_name( context[5], LoTokens, "LoTokens" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[4] );
    refalrts::link_brackets( context[6], context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[0];
    res = refalrts::splice_evar( res, context[6], context[7] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // '|' e.idx
    // </0 & LoTokens/4 '|'/5 e.Text#1/2 >/1
    context[8] = context[2];
    context[9] = context[3];
    context[5] = refalrts::char_left( '|', context[8], context[9] );
    if( ! context[5] )
      continue;
    // closed e.Text#1 as range 8(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } (/6 # TAlternative/7 Tile{ HalfReuse: )/0 HalfReuse: </4 HalfReuse: & LoTokens/5 AsIs: e.Text#1/8(2) AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_bracket( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[7], & ident_TAlternative<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::reinit_close_bracket( context[0] );
    refalrts::reinit_open_call( context[4] );
    refalrts::reinit_name( context[5], LoTokens, "LoTokens" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[4] );
    refalrts::link_brackets( context[6], context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[0];
    res = refalrts::splice_evar( res, context[6], context[7] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // s.idx e.idx
    // </0 & LoTokens/4 s.Next#1/5 e.Text#1/2 >/1
    context[8] = context[2];
    context[9] = context[3];
    if( ! refalrts::svar_left( context[5], context[8], context[9] ) )
      continue;
    // closed e.Text#1 as range 8(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: s.Next#1/5 AsIs: e.Text#1/8(2) AsIs: >/1 ]] }
    refalrts::update_name( context[4], Name, "Name" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  //
  // </0 & LoTokens/4 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  </0 & LoTokens/4 >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult NextInSet(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
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
    //FAST GEN: s.$ s.$ ( e.$ ) ( e.$ ) e.$
    //GLOBAL GEN: s.$ s.$ ( e.$ ) ( e.$ ) e.$
    // </0 & NextInSet/4 s.idx#0/5 s.idxV#0/6 (/9 e.idxVVB#0/7 )/10 (/13 e.idxVVTB#0/11 )/14 e.idxVVTT#0/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icsVarLeft, 0, 5, 2},
    {refalrts::icsVarLeft, 0, 6, 2},
    {refalrts::icBracketLeftSave, 0, 7, 2},
    {refalrts::icBracketLeftSave, 0, 11, 2},
    // closed e.idxVVB#0 as range 7
    // closed e.idxVVTB#0 as range 11
    // closed e.idxVVTT#0 as range 2
    {refalrts::icOnFailGoTo, +20, 0, 0},
    // s.idx s.idx ( e.idx ) ( e.idx ) s.idx e.idx
    // </0 & NextInSet/4 s.SuccessHandler#1/5 s.FailHandler#1/6 (/9 e.Set-B#1/16 s.Next#1/18 e.Set-E#1/7 )/10 (/13 e.Scanned#1/11 )/14 s.Next#1/15 e.Text#1/2 >/1
    // closed e.Scanned#1 as range 11
    {refalrts::icSave, 0, 19, 2},
    {refalrts::icsVarLeft, 0, 15, 19},
    // closed e.Text#1 as range 19(2)
    {refalrts::icSave, 0, 21, 7},
    {refalrts::icEPrepare, 0, 16, 21},
    {refalrts::icEStart, 0, 16, 21},
    {refalrts::icSave, 0, 23, 21},
    {refalrts::icsRepeatLeft, 18, 15, 23},
    // closed e.Set-E#1 as range 23(7)
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  & NextInSet/4 s.SuccessHandler#1/5 s.FailHandler#1/6 {REMOVED TILE}  e.Set-B#1/16 s.Next#1/18 e.Set-E#1/23(7) {REMOVED TILE}  s.Next#1/15 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 } Tile{ HalfReuse: s.SuccessHandler1 #5/10 AsIs: (/13 AsIs: e.Scanned#1/11 HalfReuse: s.Next1 #18/14 } Tile{ HalfReuse: )/9 } Tile{ AsIs: e.Text#1/19(2) } Tile{ AsIs: >/1 ]] }
    {refalrts::icReinitSVar, 0, 5, 10},
    {refalrts::icReinitSVar, 0, 18, 14},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 13, 9, 0},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceEVar, 0, 0, 19},
    {refalrts::icSpliceTile, 9, 9, 0},
    {refalrts::icSpliceTile, 10, 14, 0},
    {refalrts::icTrash, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    // s.idx s.idx ( e.idx ) ( e.idx ) e.idx
    // </0 & NextInSet/4 s.SuccessHandler#1/5 s.FailHandler#1/6 (/9 e.Set#1/7 )/10 (/13 e.Scanned#1/11 )/14 e.Text#1/2 >/1
    // closed e.Set#1 as range 7
    // closed e.Scanned#1 as range 11
    // closed e.Text#1 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  & NextInSet/4 s.SuccessHandler#1/5 s.FailHandler#1/6 (/9 e.Set#1/7 {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 } Tile{ HalfReuse: s.FailHandler1 #6/10 AsIs: (/13 AsIs: e.Scanned#1/11 AsIs: )/14 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    {refalrts::icReinitSVar, 0, 6, 10},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 13, 14, 0},
    {refalrts::icSetRes, 0, 0, 10},
    {refalrts::icTrash, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[2];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  //FAST GEN: s.$ s.$ ( e.$ ) ( e.$ ) e.$
  //GLOBAL GEN: s.$ s.$ ( e.$ ) ( e.$ ) e.$
  // </0 & NextInSet/4 s.idx#0/5 s.idxV#0/6 (/9 e.idxVVB#0/7 )/10 (/13 e.idxVVTB#0/11 )/14 e.idxVVTT#0/2 >/1
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
  // closed e.idxVVB#0 as range 7
  // closed e.idxVVTB#0 as range 11
  // closed e.idxVVTT#0 as range 2
  do {
    refalrts::start_sentence();
    // s.idx s.idx ( e.idx ) ( e.idx ) s.idx e.idx
    // </0 & NextInSet/4 s.SuccessHandler#1/5 s.FailHandler#1/6 (/9 e.Set-B#1/16 s.Next#1/18 e.Set-E#1/7 )/10 (/13 e.Scanned#1/11 )/14 s.Next#1/15 e.Text#1/2 >/1
    // closed e.Scanned#1 as range 11
    context[19] = context[2];
    context[20] = context[3];
    if( ! refalrts::svar_left( context[15], context[19], context[20] ) )
      continue;
    // closed e.Text#1 as range 19(2)
    context[21] = context[7];
    context[22] = context[8];
    context[16] = 0;
    context[17] = 0;
    refalrts::start_e_loop();
    do {
      context[23] = context[21];
      context[24] = context[22];
      if( ! refalrts::repeated_stvar_left( context[18], context[15], context[23], context[24] ) )
        continue;
      // closed e.Set-E#1 as range 23(7)

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE}  & NextInSet/4 s.SuccessHandler#1/5 s.FailHandler#1/6 {REMOVED TILE}  e.Set-B#1/16 s.Next#1/18 e.Set-E#1/23(7) {REMOVED TILE}  s.Next#1/15 {REMOVED TILE}  {REMOVED TILE} 
      //RESULT: Tile{ [[ AsIs: </0 } Tile{ HalfReuse: s.SuccessHandler1 #5/10 AsIs: (/13 AsIs: e.Scanned#1/11 HalfReuse: s.Next1 #18/14 } Tile{ HalfReuse: )/9 } Tile{ AsIs: e.Text#1/19(2) } Tile{ AsIs: >/1 ]] }
      refalrts::reinit_svar( context[10], context[5] );
      refalrts::reinit_svar( context[14], context[18] );
      refalrts::reinit_close_bracket( context[9] );
      refalrts::push_stack( context[1] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[13], context[9] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[19], context[20] );
      res = refalrts::splice_evar( res, context[9], context[9] );
      res = refalrts::splice_evar( res, context[10], context[14] );
      refalrts::use( res );
      refalrts::splice_to_freelist_open( context[0], res );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[16], context[17], context[21], context[22] ) );
  } while ( 0 );

  // s.idx s.idx ( e.idx ) ( e.idx ) e.idx
  // </0 & NextInSet/4 s.SuccessHandler#1/5 s.FailHandler#1/6 (/9 e.Set#1/7 )/10 (/13 e.Scanned#1/11 )/14 e.Text#1/2 >/1
  // closed e.Set#1 as range 7
  // closed e.Scanned#1 as range 11
  // closed e.Text#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  & NextInSet/4 s.SuccessHandler#1/5 s.FailHandler#1/6 (/9 e.Set#1/7 {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 } Tile{ HalfReuse: s.FailHandler1 #6/10 AsIs: (/13 AsIs: e.Scanned#1/11 AsIs: )/14 AsIs: e.Text#1/2 AsIs: >/1 ]] }
  refalrts::reinit_svar( context[10], context[6] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[13], context[14] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[10];
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[0], res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult HiLetters(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 7 elems
  refalrts::Iter context[7];
  refalrts::zeros( context, 7 );
#ifdef INTERPRET
  using refalrts::functions;
  using refalrts::idents;
  using refalrts::numbers;
  static const refalrts::StringItem strings[] = {
    {"DEFGHIJKLMNOPQRSTUVWXYZ", 23}
  };
  static const refalrts::RASLCommand raa[] = {
    // </0 & HiLetters/4 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: 'A'/0 HalfReuse: 'B'/4 HalfReuse: 'C'/1 }"DEFGHIJKLMNOPQRSTUVWXYZ"/5 Tile{ ]] }
    {refalrts::icAllocString, 0, 0, 5},
    {refalrts::icReinitChar, 0, 'A', 0},
    {refalrts::icReinitChar, 0, 'B', 4},
    {refalrts::icReinitChar, 0, 'C', 1},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 5, 6, 0},
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
  // </0 & HiLetters/4 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ HalfReuse: 'A'/0 HalfReuse: 'B'/4 HalfReuse: 'C'/1 }"DEFGHIJKLMNOPQRSTUVWXYZ"/5 Tile{ ]] }
  if( ! refalrts::alloc_chars( context[5], context[6], "DEFGHIJKLMNOPQRSTUVWXYZ", 23 ) )
    return refalrts::cNoMemory;
  refalrts::reinit_char( context[0], 'A' );
  refalrts::reinit_char( context[4], 'B' );
  refalrts::reinit_char( context[1], 'C' );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult LoLetters(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 7 elems
  refalrts::Iter context[7];
  refalrts::zeros( context, 7 );
#ifdef INTERPRET
  using refalrts::functions;
  using refalrts::idents;
  using refalrts::numbers;
  static const refalrts::StringItem strings[] = {
    {"defghijklmnopqrstuvwxyz", 23}
  };
  static const refalrts::RASLCommand raa[] = {
    // </0 & LoLetters/4 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: 'a'/0 HalfReuse: 'b'/4 HalfReuse: 'c'/1 }"defghijklmnopqrstuvwxyz"/5 Tile{ ]] }
    {refalrts::icAllocString, 0, 0, 5},
    {refalrts::icReinitChar, 0, 'a', 0},
    {refalrts::icReinitChar, 0, 'b', 4},
    {refalrts::icReinitChar, 0, 'c', 1},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 5, 6, 0},
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
  // </0 & LoLetters/4 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ HalfReuse: 'a'/0 HalfReuse: 'b'/4 HalfReuse: 'c'/1 }"defghijklmnopqrstuvwxyz"/5 Tile{ ]] }
  if( ! refalrts::alloc_chars( context[5], context[6], "defghijklmnopqrstuvwxyz", 23 ) )
    return refalrts::cNoMemory;
  refalrts::reinit_char( context[0], 'a' );
  refalrts::reinit_char( context[4], 'b' );
  refalrts::reinit_char( context[1], 'c' );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult Digits(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 7 elems
  refalrts::Iter context[7];
  refalrts::zeros( context, 7 );
#ifdef INTERPRET
  using refalrts::functions;
  using refalrts::idents;
  using refalrts::numbers;
  static const refalrts::StringItem strings[] = {
    {"3456789", 7}
  };
  static const refalrts::RASLCommand raa[] = {
    // </0 & Digits/4 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: '0'/0 HalfReuse: '1'/4 HalfReuse: '2'/1 }"3456789"/5 Tile{ ]] }
    {refalrts::icAllocString, 0, 0, 5},
    {refalrts::icReinitChar, 0, '0', 0},
    {refalrts::icReinitChar, 0, '1', 4},
    {refalrts::icReinitChar, 0, '2', 1},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 5, 6, 0},
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
  // </0 & Digits/4 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ HalfReuse: '0'/0 HalfReuse: '1'/4 HalfReuse: '2'/1 }"3456789"/5 Tile{ ]] }
  if( ! refalrts::alloc_chars( context[5], context[6], "3456789", 7 ) )
    return refalrts::cNoMemory;
  refalrts::reinit_char( context[0], '0' );
  refalrts::reinit_char( context[4], '1' );
  refalrts::reinit_char( context[1], '2' );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
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
    { HiLetters, "HiLetters" },
    { Digits, "Digits" },
    { LoLetters, "LoLetters" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  static const refalrts::StringItem strings[] = {
    {"-_", 2}
  };
  static const refalrts::RASLCommand raa[] = {
    // </0 & NameTailSet/4 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & HiLetters/4 AsIs: >/1 } </5 & LoLetters/6 >/7 </8 & Digits/9 >/10"-_"/11 Tile{ ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 5},
    {refalrts::icAllocFunc, 0, 2, 6},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 7},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 8},
    {refalrts::icAllocFunc, 0, 1, 9},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 10},
    {refalrts::icAllocString, 0, 0, 11},
    {refalrts::icUpdateFunc, 0, 0, 4},
    {refalrts::icPushStack, 0, 0, 10},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icPushStack, 0, 0, 7},
    {refalrts::icPushStack, 0, 0, 5},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 5, 12, 0},
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
  // </0 & NameTailSet/4 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & HiLetters/4 AsIs: >/1 } </5 & LoLetters/6 >/7 </8 & Digits/9 >/10"-_"/11 Tile{ ]] }
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
  refalrts::update_name( context[4], HiLetters, "HiLetters" );
  refalrts::push_stack( context[10] );
  refalrts::push_stack( context[8] );
  refalrts::push_stack( context[7] );
  refalrts::push_stack( context[5] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[12] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult SetName(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
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
    //FAST GEN: ( e.$ ) e.$
    //GLOBAL GEN: ( e.$ ) e.$
    // </0 & SetName/4 (/7 e.idxB#0/5 )/8 e.idxT#0/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icBracketLeftSave, 0, 5, 2},
    // closed e.idxB#0 as range 5
    // closed e.idxT#0 as range 2
    {refalrts::icOnFailGoTo, +15, 0, 0},
    // ( e.idx ) ':' e.idx
    // </0 & SetName/4 (/7 e.Scanned#1/5 )/8 ':'/9 e.Text#1/2 >/1
    {refalrts::icSave, 0, 16, 2},
    {refalrts::icCharLeftSave, 9, static_cast<unsigned char>(':'), 16},
    // closed e.Scanned#1 as range 5
    // closed e.Text#1 as range 16(2)
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TSetName/4 } Tile{ AsIs: e.Scanned#1/5 } Tile{ HalfReuse: )/7 } Tile{ HalfReuse: </8 HalfReuse: & LoTokens/9 AsIs: e.Text#1/16(2) AsIs: >/1 ]] }
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 0},
    {refalrts::icReinitIdent, 0, 0, 4},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 7},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 8},
    {refalrts::icReinitFunc, 0, 4, 9},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icLinkBrackets, 0, 7, 0},
    {refalrts::icSetRes, 0, 0, 8},
    {refalrts::icSpliceTile, 7, 7, 0},
    {refalrts::icSpliceEVar, 0, 0, 5},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    // ( e.idx ) e.idx
    // </0 & SetName/4 (/7 e.Scanned#1/5 )/8 e.Text#1/2 >/1
    // closed e.Scanned#1 as range 5
    // closed e.Text#1 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } </9 & NextInSet/10 & SetName/11 & SetNameFail/12 (/13 </14 & NameTailSet/15 Tile{ HalfReuse: >/0 HalfReuse: )/4 AsIs: (/7 AsIs: e.Scanned#1/5 AsIs: )/8 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 9},
    {refalrts::icAllocFunc, 0, 3, 10},
    {refalrts::icAllocFunc, 0, 2, 11},
    {refalrts::icAllocFunc, 0, 1, 12},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 13},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 14},
    {refalrts::icAllocFunc, 0, 0, 15},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 0},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 4},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 9},
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icLinkBrackets, 13, 4, 0},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icPushStack, 0, 0, 14},
    {refalrts::icSetRes, 0, 0, 0},
    {refalrts::icSpliceTile, 9, 15, 0},
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
  //FAST GEN: ( e.$ ) e.$
  //GLOBAL GEN: ( e.$ ) e.$
  // </0 & SetName/4 (/7 e.idxB#0/5 )/8 e.idxT#0/2 >/1
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
  // closed e.idxT#0 as range 2
  do {
    refalrts::start_sentence();
    // ( e.idx ) ':' e.idx
    // </0 & SetName/4 (/7 e.Scanned#1/5 )/8 ':'/9 e.Text#1/2 >/1
    context[16] = context[2];
    context[17] = context[3];
    context[9] = refalrts::char_left( ':', context[16], context[17] );
    if( ! context[9] )
      continue;
    // closed e.Scanned#1 as range 5
    // closed e.Text#1 as range 16(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TSetName/4 } Tile{ AsIs: e.Scanned#1/5 } Tile{ HalfReuse: )/7 } Tile{ HalfReuse: </8 HalfReuse: & LoTokens/9 AsIs: e.Text#1/16(2) AsIs: >/1 ]] }
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], & ident_TSetName<int>::name );
    refalrts::reinit_close_bracket( context[7] );
    refalrts::reinit_open_call( context[8] );
    refalrts::reinit_name( context[9], LoTokens, "LoTokens" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[8] );
    refalrts::link_brackets( context[0], context[7] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[7], context[7] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  // ( e.idx ) e.idx
  // </0 & SetName/4 (/7 e.Scanned#1/5 )/8 e.Text#1/2 >/1
  // closed e.Scanned#1 as range 5
  // closed e.Text#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } </9 & NextInSet/10 & SetName/11 & SetNameFail/12 (/13 </14 & NameTailSet/15 Tile{ HalfReuse: >/0 HalfReuse: )/4 AsIs: (/7 AsIs: e.Scanned#1/5 AsIs: )/8 AsIs: e.Text#1/2 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[10], NextInSet, "NextInSet" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[11], SetName, "SetName" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[12], SetNameFail, "SetNameFail" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[15], NameTailSet, "NameTailSet" ) )
    return refalrts::cNoMemory;
  refalrts::reinit_close_call( context[0] );
  refalrts::reinit_close_bracket( context[4] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[9] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[13], context[4] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[14] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[9], context[15] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult SetNameFail(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
#ifdef INTERPRET
  using refalrts::functions;
  static const refalrts::RefalIdentifier idents[] = {
    & ident_TError<int>::name
  };
  using refalrts::numbers;
  static const refalrts::StringItem strings[] = {
    {"xpected end of set name, got", 28},
    {"xpected end of set name, got EO", 31}
  };
  static const refalrts::RASLCommand raa[] = {
    //FAST GEN: e.$
    //GLOBAL GEN: ( e.$ ) e.$
    // </0 & SetNameFail/4 (/7 e.idxB#0/5 )/8 e.idxT#0/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icBracketLeftSave, 0, 5, 2},
    // closed e.idxB#0 as range 5
    // closed e.idxT#0 as range 2
    {refalrts::icOnFailGoTo, +14, 0, 0},
    // ( e.idx )
    // </0 & SetNameFail/4 (/7 e.Scanned#1/5 )/8 >/1
    {refalrts::icSave, 0, 12, 2},
    {refalrts::icEmpty, 0, 0, 12},
    // closed e.Scanned#1 as range 5
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  e.Scanned#1/5 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TError/4 HalfReuse: 'e'/7 }"xpected end of set name, got EO"/9 Tile{ HalfReuse: 'F'/8 HalfReuse: )/1 ]] }
    {refalrts::icAllocString, 0, 1, 9},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 0},
    {refalrts::icReinitIdent, 0, 0, 4},
    {refalrts::icReinitChar, 0, 'e', 7},
    {refalrts::icReinitChar, 0, 'F', 8},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
    {refalrts::icLinkBrackets, 0, 1, 0},
    {refalrts::icSetRes, 0, 0, 8},
    {refalrts::icSpliceTile, 9, 10, 0},
    {refalrts::icTrash, 0, 0, 7},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    // ( e.idx ) s.idx e.idx
    // </0 & SetNameFail/4 (/7 e.Scanned#1/5 )/8 s.Next#1/9 e.Text#1/2 >/1
    // closed e.Scanned#1 as range 5
    {refalrts::icsVarLeft, 0, 9, 2},
    // closed e.Text#1 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  e.Scanned#1/5 {REMOVED TILE}  e.Text#1/2 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TError/4 HalfReuse: 'e'/7 }"xpected end of set name, got"/10 Tile{ HalfReuse: ' '/8 AsIs: s.Next#1/9 } Tile{ HalfReuse: )/1 ]] }
    {refalrts::icAllocString, 0, 0, 10},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 0},
    {refalrts::icReinitIdent, 0, 0, 4},
    {refalrts::icReinitChar, 0, 'e', 7},
    {refalrts::icReinitChar, 0, ' ', 8},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
    {refalrts::icLinkBrackets, 0, 1, 0},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceTile, 8, 9, 0},
    {refalrts::icSpliceTile, 10, 11, 0},
    {refalrts::icTrash, 0, 0, 7},
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
  //GLOBAL GEN: ( e.$ ) e.$
  // </0 & SetNameFail/4 (/7 e.idxB#0/5 )/8 e.idxT#0/2 >/1
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
  // closed e.idxT#0 as range 2
  do {
    refalrts::start_sentence();
    // ( e.idx )
    // </0 & SetNameFail/4 (/7 e.Scanned#1/5 )/8 >/1
    context[12] = context[2];
    context[13] = context[3];
    if( ! refalrts::empty_seq( context[12], context[13] ) )
      continue;
    // closed e.Scanned#1 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  e.Scanned#1/5 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TError/4 HalfReuse: 'e'/7 }"xpected end of set name, got EO"/9 Tile{ HalfReuse: 'F'/8 HalfReuse: )/1 ]] }
    if( ! refalrts::alloc_chars( context[9], context[10], "xpected end of set name, got EO", 31 ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], & ident_TError<int>::name );
    refalrts::reinit_char( context[7], 'e' );
    refalrts::reinit_char( context[8], 'F' );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[0], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[9], context[10] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[7], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  // ( e.idx ) s.idx e.idx
  // </0 & SetNameFail/4 (/7 e.Scanned#1/5 )/8 s.Next#1/9 e.Text#1/2 >/1
  // closed e.Scanned#1 as range 5
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Text#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  e.Scanned#1/5 {REMOVED TILE}  e.Text#1/2 {REMOVED TILE} 
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TError/4 HalfReuse: 'e'/7 }"xpected end of set name, got"/10 Tile{ HalfReuse: ' '/8 AsIs: s.Next#1/9 } Tile{ HalfReuse: )/1 ]] }
  if( ! refalrts::alloc_chars( context[10], context[11], "xpected end of set name, got", 28 ) )
    return refalrts::cNoMemory;
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_ident( context[4], & ident_TError<int>::name );
  refalrts::reinit_char( context[7], 'e' );
  refalrts::reinit_char( context[8], ' ' );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[0], context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[8], context[9] );
  res = refalrts::splice_evar( res, context[10], context[11] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[7], res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult FlushName(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
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
    //FAST GEN: e.$
    //GLOBAL GEN: e.$
    // </0 & FlushName/4 e.idx#0/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    // closed e.idx#0 as range 2
    {refalrts::icOnFailGoTo, +14, 0, 0},
    // '-' e.idx
    // </0 & FlushName/4 '-'/5 e.Text#1/2 >/1
    {refalrts::icSave, 0, 16, 2},
    {refalrts::icCharLeftSave, 5, static_cast<unsigned char>('-'), 16},
    // closed e.Text#1 as range 16(2)
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } (/6 # TFlush/7 Tile{ HalfReuse: )/0 HalfReuse: </4 HalfReuse: & LoTokens/5 AsIs: e.Text#1/16(2) AsIs: >/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icAllocIdent, 0, 0, 7},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 0},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 4},
    {refalrts::icReinitFunc, 0, 7, 5},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 4},
    {refalrts::icLinkBrackets, 6, 0, 0},
    {refalrts::icSetRes, 0, 0, 0},
    {refalrts::icSpliceTile, 6, 7, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +24, 0, 0},
    // '\"' e.idx
    // </0 & FlushName/4 '\"'/5 e.Text#1/2 >/1
    {refalrts::icSave, 0, 16, 2},
    {refalrts::icCharLeftSave, 5, static_cast<unsigned char>('\"'), 16},
    // closed e.Text#1 as range 16(2)
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } </6 & NextInSet/7 & ErrorFlush/8 & ErrorFlushFail/9 (/10 </11 & NameTailSet/12 >/13" \t,.:;(){}[]*&"/14 Tile{ HalfReuse: )/0 HalfReuse: (/4 HalfReuse: )/5 AsIs: e.Text#1/16(2) AsIs: >/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 6},
    {refalrts::icAllocFunc, 0, 3, 7},
    {refalrts::icAllocFunc, 0, 6, 8},
    {refalrts::icAllocFunc, 0, 5, 9},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 10},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 11},
    {refalrts::icAllocFunc, 0, 4, 12},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 13},
    {refalrts::icAllocString, 0, 0, 14},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 0},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 4},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 5},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 6},
    {refalrts::icLinkBrackets, 4, 5, 0},
    {refalrts::icLinkBrackets, 10, 0, 0},
    {refalrts::icPushStack, 0, 0, 13},
    {refalrts::icPushStack, 0, 0, 11},
    {refalrts::icSetRes, 0, 0, 0},
    {refalrts::icSpliceTile, 6, 15, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +24, 0, 0},
    // '#' e.idx
    // </0 & FlushName/4 '#'/5 e.Text#1/2 >/1
    {refalrts::icSave, 0, 16, 2},
    {refalrts::icCharLeftSave, 5, static_cast<unsigned char>('#'), 16},
    // closed e.Text#1 as range 16(2)
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } </6 & NextInSet/7 & FlushNameTail/8 & FlushNameFail/9 (/10 </11 & HiLetters/12 >/13 )/14 Tile{ HalfReuse: (/0 HalfReuse: '#'/4 HalfReuse: )/5 AsIs: e.Text#1/16(2) AsIs: >/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 6},
    {refalrts::icAllocFunc, 0, 3, 7},
    {refalrts::icAllocFunc, 0, 2, 8},
    {refalrts::icAllocFunc, 0, 1, 9},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 10},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 11},
    {refalrts::icAllocFunc, 0, 0, 12},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 13},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 14},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 0},
    {refalrts::icReinitChar, 0, '#', 4},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 5},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 6},
    {refalrts::icLinkBrackets, 0, 5, 0},
    {refalrts::icLinkBrackets, 10, 14, 0},
    {refalrts::icPushStack, 0, 0, 13},
    {refalrts::icPushStack, 0, 0, 11},
    {refalrts::icSetRes, 0, 0, 0},
    {refalrts::icSpliceTile, 6, 14, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    // e.idx
    // </0 & FlushName/4 e.Text#1/2 >/1
    // closed e.Text#1 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } </5 & NextInSet/6 & FlushNameTail/7 & FlushNameFail/8 (/9 </10 & HiLetters/11 >/12 )/13 Tile{ HalfReuse: (/0 HalfReuse: )/4 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 5},
    {refalrts::icAllocFunc, 0, 3, 6},
    {refalrts::icAllocFunc, 0, 2, 7},
    {refalrts::icAllocFunc, 0, 1, 8},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 9},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 10},
    {refalrts::icAllocFunc, 0, 0, 11},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 12},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 13},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 0},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 4},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 5},
    {refalrts::icLinkBrackets, 0, 4, 0},
    {refalrts::icLinkBrackets, 9, 13, 0},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icPushStack, 0, 0, 10},
    {refalrts::icSetRes, 0, 0, 0},
    {refalrts::icSpliceTile, 5, 13, 0},
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
  //FAST GEN: e.$
  //GLOBAL GEN: e.$
  // </0 & FlushName/4 e.idx#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.idx#0 as range 2
  do {
    refalrts::start_sentence();
    // '-' e.idx
    // </0 & FlushName/4 '-'/5 e.Text#1/2 >/1
    context[16] = context[2];
    context[17] = context[3];
    context[5] = refalrts::char_left( '-', context[16], context[17] );
    if( ! context[5] )
      continue;
    // closed e.Text#1 as range 16(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } (/6 # TFlush/7 Tile{ HalfReuse: )/0 HalfReuse: </4 HalfReuse: & LoTokens/5 AsIs: e.Text#1/16(2) AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_bracket( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[7], & ident_TFlush<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::reinit_close_bracket( context[0] );
    refalrts::reinit_open_call( context[4] );
    refalrts::reinit_name( context[5], LoTokens, "LoTokens" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[4] );
    refalrts::link_brackets( context[6], context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[0];
    res = refalrts::splice_evar( res, context[6], context[7] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // '\"' e.idx
    // </0 & FlushName/4 '\"'/5 e.Text#1/2 >/1
    context[16] = context[2];
    context[17] = context[3];
    context[5] = refalrts::char_left( '\"', context[16], context[17] );
    if( ! context[5] )
      continue;
    // closed e.Text#1 as range 16(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } </6 & NextInSet/7 & ErrorFlush/8 & ErrorFlushFail/9 (/10 </11 & NameTailSet/12 >/13" \t,.:;(){}[]*&"/14 Tile{ HalfReuse: )/0 HalfReuse: (/4 HalfReuse: )/5 AsIs: e.Text#1/16(2) AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_call( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[7], NextInSet, "NextInSet" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[8], ErrorFlush, "ErrorFlush" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[9], ErrorFlushFail, "ErrorFlushFail" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[12], NameTailSet, "NameTailSet" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[14], context[15], " \t,.:;(){}[]*&", 14 ) )
      return refalrts::cNoMemory;
    refalrts::reinit_close_bracket( context[0] );
    refalrts::reinit_open_bracket( context[4] );
    refalrts::reinit_close_bracket( context[5] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[6] );
    refalrts::link_brackets( context[4], context[5] );
    refalrts::link_brackets( context[10], context[0] );
    refalrts::push_stack( context[13] );
    refalrts::push_stack( context[11] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[0];
    res = refalrts::splice_evar( res, context[6], context[15] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // '#' e.idx
    // </0 & FlushName/4 '#'/5 e.Text#1/2 >/1
    context[16] = context[2];
    context[17] = context[3];
    context[5] = refalrts::char_left( '#', context[16], context[17] );
    if( ! context[5] )
      continue;
    // closed e.Text#1 as range 16(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } </6 & NextInSet/7 & FlushNameTail/8 & FlushNameFail/9 (/10 </11 & HiLetters/12 >/13 )/14 Tile{ HalfReuse: (/0 HalfReuse: '#'/4 HalfReuse: )/5 AsIs: e.Text#1/16(2) AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_call( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[7], NextInSet, "NextInSet" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[8], FlushNameTail, "FlushNameTail" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[9], FlushNameFail, "FlushNameFail" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[12], HiLetters, "HiLetters" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[14] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_char( context[4], '#' );
    refalrts::reinit_close_bracket( context[5] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[6] );
    refalrts::link_brackets( context[0], context[5] );
    refalrts::link_brackets( context[10], context[14] );
    refalrts::push_stack( context[13] );
    refalrts::push_stack( context[11] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[0];
    res = refalrts::splice_evar( res, context[6], context[14] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  // e.idx
  // </0 & FlushName/4 e.Text#1/2 >/1
  // closed e.Text#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } </5 & NextInSet/6 & FlushNameTail/7 & FlushNameFail/8 (/9 </10 & HiLetters/11 >/12 )/13 Tile{ HalfReuse: (/0 HalfReuse: )/4 AsIs: e.Text#1/2 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[5] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[6], NextInSet, "NextInSet" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[7], FlushNameTail, "FlushNameTail" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[8], FlushNameFail, "FlushNameFail" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[11], HiLetters, "HiLetters" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[13] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_close_bracket( context[4] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[5] );
  refalrts::link_brackets( context[0], context[4] );
  refalrts::link_brackets( context[9], context[13] );
  refalrts::push_stack( context[12] );
  refalrts::push_stack( context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[13] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult ErrorFlush(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
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
    {" \t,.:;(){}[]*&!@#$%^-_=+", 24}
  };
  static const refalrts::RASLCommand raa[] = {
    // </0 & ErrorFlush/4 (/7 e.Scanned#1/5 )/8 e.Tail#1/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icBracketLeftSave, 0, 5, 2},
    // closed e.Scanned#1 as range 5
    // closed e.Tail#1 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } </9 & NextInSet/10 & ErrorFlush/11 & ErrorFlushFail/12 (/13 </14 & NameTailSet/15 >/16" \t,.:;(){}[]*&!@#$%^-_=+"/17 Tile{ HalfReuse: '/'/0 HalfReuse: )/4 AsIs: (/7 AsIs: e.Scanned#1/5 AsIs: )/8 AsIs: e.Tail#1/2 AsIs: >/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 9},
    {refalrts::icAllocFunc, 0, 3, 10},
    {refalrts::icAllocFunc, 0, 2, 11},
    {refalrts::icAllocFunc, 0, 1, 12},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 13},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 14},
    {refalrts::icAllocFunc, 0, 0, 15},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 16},
    {refalrts::icAllocString, 0, 0, 17},
    {refalrts::icReinitChar, 0, '/', 0},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 4},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 9},
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icLinkBrackets, 13, 4, 0},
    {refalrts::icPushStack, 0, 0, 16},
    {refalrts::icPushStack, 0, 0, 14},
    {refalrts::icSetRes, 0, 0, 0},
    {refalrts::icSpliceTile, 9, 18, 0},
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
  // </0 & ErrorFlush/4 (/7 e.Scanned#1/5 )/8 e.Tail#1/2 >/1
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
  // closed e.Scanned#1 as range 5
  // closed e.Tail#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } </9 & NextInSet/10 & ErrorFlush/11 & ErrorFlushFail/12 (/13 </14 & NameTailSet/15 >/16" \t,.:;(){}[]*&!@#$%^-_=+"/17 Tile{ HalfReuse: '/'/0 HalfReuse: )/4 AsIs: (/7 AsIs: e.Scanned#1/5 AsIs: )/8 AsIs: e.Tail#1/2 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[10], NextInSet, "NextInSet" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[11], ErrorFlush, "ErrorFlush" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[12], ErrorFlushFail, "ErrorFlushFail" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[15], NameTailSet, "NameTailSet" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[16] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[17], context[18], " \t,.:;(){}[]*&!@#$%^-_=+", 24 ) )
    return refalrts::cNoMemory;
  refalrts::reinit_char( context[0], '/' );
  refalrts::reinit_close_bracket( context[4] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[9] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[13], context[4] );
  refalrts::push_stack( context[16] );
  refalrts::push_stack( context[14] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[9], context[18] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult ErrorFlushFail(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
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
    {"xpected error text or \"", 23}
  };
  static const refalrts::RASLCommand raa[] = {
    //FAST GEN: ( e.$ ) s.$ e.$
    //GLOBAL GEN: ( e.$ ) s.$ e.$
    // </0 & ErrorFlushFail/4 (/7 e.idxB#0/5 )/8 s.idxT#0/9 e.idxTV#0/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icBracketLeftSave, 0, 5, 2},
    // closed e.idxB#0 as range 5
    {refalrts::icsVarLeft, 0, 9, 2},
    // closed e.idxTV#0 as range 2
    {refalrts::icOnFailGoTo, +14, 0, 0},
    // ( e.idx ) '\"' e.idx
    // </0 & ErrorFlushFail/4 (/7 e.Scanned#1/5 )/8 '\"'/9 e.Text#1/2 >/1
    {refalrts::icCharTerm, 0, static_cast<unsigned char>('\"'), 9},
    // closed e.Scanned#1 as range 5
    // closed e.Text#1 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TErrorFlush/4 } Tile{ AsIs: e.Scanned#1/5 } Tile{ HalfReuse: )/7 } Tile{ HalfReuse: </8 HalfReuse: & LoTokens/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 0},
    {refalrts::icReinitIdent, 0, 1, 4},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 7},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 8},
    {refalrts::icReinitFunc, 0, 0, 9},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icLinkBrackets, 0, 7, 0},
    {refalrts::icSetRes, 0, 0, 8},
    {refalrts::icSpliceTile, 7, 7, 0},
    {refalrts::icSpliceEVar, 0, 0, 5},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    // ( e.idx ) s.idx e.idx
    // </0 & ErrorFlushFail/4 (/7 e.Scanned#1/5 )/8 s.Other#1/9 e.Text#1/2 >/1
    // closed e.Scanned#1 as range 5
    // closed e.Text#1 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  e.Scanned#1/5 {REMOVED TILE}  s.Other#1/9 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TError/4 HalfReuse: 'E'/7 }"xpected error text or \""/10 Tile{ AsIs: )/8 } </12 & LoTokens/13 Tile{ AsIs: e.Text#1/2 } Tile{ AsIs: >/1 ]] }
    {refalrts::icAllocString, 0, 0, 10},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 12},
    {refalrts::icAllocFunc, 0, 0, 13},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 0},
    {refalrts::icReinitIdent, 0, 0, 4},
    {refalrts::icReinitChar, 0, 'E', 7},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icLinkBrackets, 0, 8, 0},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceTile, 12, 13, 0},
    {refalrts::icSpliceTile, 8, 8, 0},
    {refalrts::icSpliceTile, 10, 11, 0},
    {refalrts::icTrash, 0, 0, 7},
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
  //FAST GEN: ( e.$ ) s.$ e.$
  //GLOBAL GEN: ( e.$ ) s.$ e.$
  // </0 & ErrorFlushFail/4 (/7 e.idxB#0/5 )/8 s.idxT#0/9 e.idxTV#0/2 >/1
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
  // closed e.idxTV#0 as range 2
  do {
    refalrts::start_sentence();
    // ( e.idx ) '\"' e.idx
    // </0 & ErrorFlushFail/4 (/7 e.Scanned#1/5 )/8 '\"'/9 e.Text#1/2 >/1
    if( ! refalrts::char_term( '\"', context[9] ) )
      continue;
    // closed e.Scanned#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TErrorFlush/4 } Tile{ AsIs: e.Scanned#1/5 } Tile{ HalfReuse: )/7 } Tile{ HalfReuse: </8 HalfReuse: & LoTokens/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], & ident_TErrorFlush<int>::name );
    refalrts::reinit_close_bracket( context[7] );
    refalrts::reinit_open_call( context[8] );
    refalrts::reinit_name( context[9], LoTokens, "LoTokens" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[8] );
    refalrts::link_brackets( context[0], context[7] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[7], context[7] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  // ( e.idx ) s.idx e.idx
  // </0 & ErrorFlushFail/4 (/7 e.Scanned#1/5 )/8 s.Other#1/9 e.Text#1/2 >/1
  // closed e.Scanned#1 as range 5
  // closed e.Text#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  e.Scanned#1/5 {REMOVED TILE}  s.Other#1/9 {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TError/4 HalfReuse: 'E'/7 }"xpected error text or \""/10 Tile{ AsIs: )/8 } </12 & LoTokens/13 Tile{ AsIs: e.Text#1/2 } Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_chars( context[10], context[11], "xpected error text or \"", 23 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[13], LoTokens, "LoTokens" ) )
    return refalrts::cNoMemory;
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_ident( context[4], & ident_TError<int>::name );
  refalrts::reinit_char( context[7], 'E' );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[12] );
  refalrts::link_brackets( context[0], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[12], context[13] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[10], context[11] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[7], res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult FlushNameFail(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
#ifdef INTERPRET
  using refalrts::functions;
  static const refalrts::RefalIdentifier idents[] = {
    & ident_TError<int>::name
  };
  using refalrts::numbers;
  static const refalrts::StringItem strings[] = {
    {"pected flush name", 17}
  };
  static const refalrts::RASLCommand raa[] = {
    // </0 & FlushNameFail/4 (/7 )/8 e.Text#1/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icBracketLeftSave, 0, 5, 2},
    {refalrts::icEmpty, 0, 0, 5},
    // closed e.Text#1 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  e.Text#1/2 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TError/4 HalfReuse: 'e'/7 HalfReuse: 'x'/8 }"pected flush name"/9 Tile{ HalfReuse: )/1 ]] }
    {refalrts::icAllocString, 0, 0, 9},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 0},
    {refalrts::icReinitIdent, 0, 0, 4},
    {refalrts::icReinitChar, 0, 'e', 7},
    {refalrts::icReinitChar, 0, 'x', 8},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
    {refalrts::icLinkBrackets, 0, 1, 0},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceTile, 9, 10, 0},
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
  // </0 & FlushNameFail/4 (/7 )/8 e.Text#1/2 >/1
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
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Text#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  e.Text#1/2 {REMOVED TILE} 
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TError/4 HalfReuse: 'e'/7 HalfReuse: 'x'/8 }"pected flush name"/9 Tile{ HalfReuse: )/1 ]] }
  if( ! refalrts::alloc_chars( context[9], context[10], "pected flush name", 17 ) )
    return refalrts::cNoMemory;
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_ident( context[4], & ident_TError<int>::name );
  refalrts::reinit_char( context[7], 'e' );
  refalrts::reinit_char( context[8], 'x' );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[0], context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[8], res );
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
    // </0 & EndFlushName/4 (/7 e.Scanned#1/5 )/8 e.Text#1/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icBracketLeftSave, 0, 5, 2},
    // closed e.Scanned#1 as range 5
    // closed e.Text#1 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TNamedFlush/4 } Tile{ AsIs: e.Scanned#1/5 } Tile{ HalfReuse: )/7 } </9 Tile{ HalfReuse: & LoTokens/8 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 9},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 0},
    {refalrts::icReinitIdent, 0, 0, 4},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 7},
    {refalrts::icReinitFunc, 0, 0, 8},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 9},
    {refalrts::icLinkBrackets, 0, 7, 0},
    {refalrts::icSetRes, 0, 0, 8},
    {refalrts::icSpliceTile, 9, 9, 0},
    {refalrts::icSpliceTile, 7, 7, 0},
    {refalrts::icSpliceEVar, 0, 0, 5},
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
  // </0 & EndFlushName/4 (/7 e.Scanned#1/5 )/8 e.Text#1/2 >/1
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
  // closed e.Scanned#1 as range 5
  // closed e.Text#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TNamedFlush/4 } Tile{ AsIs: e.Scanned#1/5 } Tile{ HalfReuse: )/7 } </9 Tile{ HalfReuse: & LoTokens/8 AsIs: e.Text#1/2 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[9] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_ident( context[4], & ident_TNamedFlush<int>::name );
  refalrts::reinit_close_bracket( context[7] );
  refalrts::reinit_name( context[8], LoTokens, "LoTokens" );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[9] );
  refalrts::link_brackets( context[0], context[7] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[9], context[9] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
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
    // </0 & FlushNameTail/4 (/7 e.Scanned#1/5 )/8 e.Tail#1/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icBracketLeftSave, 0, 5, 2},
    // closed e.Scanned#1 as range 5
    // closed e.Tail#1 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } </9 & NextInSet/10 & FlushNameTail/11 & EndFlushName/12 (/13 </14 & NameTailSet/15 Tile{ HalfReuse: >/0 HalfReuse: )/4 AsIs: (/7 AsIs: e.Scanned#1/5 AsIs: )/8 AsIs: e.Tail#1/2 AsIs: >/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 9},
    {refalrts::icAllocFunc, 0, 3, 10},
    {refalrts::icAllocFunc, 0, 2, 11},
    {refalrts::icAllocFunc, 0, 1, 12},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 13},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 14},
    {refalrts::icAllocFunc, 0, 0, 15},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 0},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 4},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 9},
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icLinkBrackets, 13, 4, 0},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icPushStack, 0, 0, 14},
    {refalrts::icSetRes, 0, 0, 0},
    {refalrts::icSpliceTile, 9, 15, 0},
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
  // </0 & FlushNameTail/4 (/7 e.Scanned#1/5 )/8 e.Tail#1/2 >/1
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
  // closed e.Scanned#1 as range 5
  // closed e.Tail#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } </9 & NextInSet/10 & FlushNameTail/11 & EndFlushName/12 (/13 </14 & NameTailSet/15 Tile{ HalfReuse: >/0 HalfReuse: )/4 AsIs: (/7 AsIs: e.Scanned#1/5 AsIs: )/8 AsIs: e.Tail#1/2 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[10], NextInSet, "NextInSet" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[11], FlushNameTail, "FlushNameTail" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[12], EndFlushName, "EndFlushName" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[15], NameTailSet, "NameTailSet" ) )
    return refalrts::cNoMemory;
  refalrts::reinit_close_call( context[0] );
  refalrts::reinit_close_bracket( context[4] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[9] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[13], context[4] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[14] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[9], context[15] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult Literal(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { LoTokens, "LoTokens" },
    { Escape, "Escape" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_TError<int>::name,
    & ident_TLiteral<int>::name
  };
  using refalrts::numbers;
  static const refalrts::StringItem strings[] = {
    {"nexpected end of file at litera", 31},
    {"nexpected end of line at literal", 32}
  };
  static const refalrts::RASLCommand raa[] = {
    //FAST GEN: e.$
    //GLOBAL GEN: ( e.$ ) e.$
    // </0 & Literal/4 (/7 e.idxB#0/5 )/8 e.idxT#0/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icBracketLeftSave, 0, 5, 2},
    // closed e.idxB#0 as range 5
    // closed e.idxT#0 as range 2
    {refalrts::icOnFailGoTo, +11, 0, 0},
    // ( e.idx ) '\\' e.idx
    // </0 & Literal/4 (/7 e.Scanned#1/5 )/8 '\\'/9 e.Text#1/2 >/1
    {refalrts::icSave, 0, 13, 2},
    {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('\\'), 13},
    // closed e.Scanned#1 as range 5
    // closed e.Text#1 as range 13(2)
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  '\\'/9 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Escape/4 AsIs: (/7 AsIs: e.Scanned#1/5 AsIs: )/8 } Tile{ AsIs: e.Text#1/13(2) } Tile{ AsIs: >/1 ]] }
    {refalrts::icUpdateFunc, 0, 1, 4},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceEVar, 0, 0, 13},
    {refalrts::icTrash, 0, 0, 8},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +13, 0, 0},
    // ( e.idx ) '\'\'' e.idx
    // </0 & Literal/4 (/7 e.Scanned#1/5 )/8 '\''/9 '\''/10 e.Text#1/2 >/1
    {refalrts::icSave, 0, 13, 2},
    {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('\''), 13},
    {refalrts::icCharLeftSave, 10, static_cast<unsigned char>('\''), 13},
    // closed e.Scanned#1 as range 5
    // closed e.Text#1 as range 13(2)
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  '\''/10 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Literal/4 AsIs: (/7 AsIs: e.Scanned#1/5 HalfReuse: '\''/8 HalfReuse: )/9 } Tile{ AsIs: e.Text#1/13(2) } Tile{ AsIs: >/1 ]] }
    {refalrts::icReinitChar, 0, '\'', 8},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 7, 9, 0},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceEVar, 0, 0, 13},
    {refalrts::icTrash, 0, 0, 9},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +15, 0, 0},
    // ( e.idx ) '\'' e.idx
    // </0 & Literal/4 (/7 e.Scanned#1/5 )/8 '\''/9 e.Text#1/2 >/1
    {refalrts::icSave, 0, 13, 2},
    {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('\''), 13},
    // closed e.Scanned#1 as range 5
    // closed e.Text#1 as range 13(2)
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TLiteral/4 } Tile{ AsIs: e.Scanned#1/5 } Tile{ HalfReuse: )/7 } Tile{ HalfReuse: </8 HalfReuse: & LoTokens/9 AsIs: e.Text#1/13(2) AsIs: >/1 ]] }
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 0},
    {refalrts::icReinitIdent, 0, 1, 4},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 7},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 8},
    {refalrts::icReinitFunc, 0, 0, 9},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icLinkBrackets, 0, 7, 0},
    {refalrts::icSetRes, 0, 0, 8},
    {refalrts::icSpliceTile, 7, 7, 0},
    {refalrts::icSpliceEVar, 0, 0, 5},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +17, 0, 0},
    // ( e.idx ) '\n' e.idx
    // </0 & Literal/4 (/7 e.Scanned#1/5 )/8 '\n'/9 e.Text#1/2 >/1
    {refalrts::icSave, 0, 13, 2},
    {refalrts::icCharLeftSave, 9, static_cast<unsigned char>('\n'), 13},
    // closed e.Scanned#1 as range 5
    // closed e.Text#1 as range 13(2)
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  e.Scanned#1/5 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TError/4 HalfReuse: 'U'/7 }"nexpected end of line at literal"/10 )/12 Tile{ HalfReuse: </8 HalfReuse: & LoTokens/9 AsIs: e.Text#1/13(2) AsIs: >/1 ]] }
    {refalrts::icAllocString, 0, 1, 10},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 12},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 0},
    {refalrts::icReinitIdent, 0, 0, 4},
    {refalrts::icReinitChar, 0, 'U', 7},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 8},
    {refalrts::icReinitFunc, 0, 0, 9},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icLinkBrackets, 0, 12, 0},
    {refalrts::icSetRes, 0, 0, 8},
    {refalrts::icSpliceTile, 10, 12, 0},
    {refalrts::icTrash, 0, 0, 7},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +14, 0, 0},
    // ( e.idx )
    // </0 & Literal/4 (/7 e.Scanned#1/5 )/8 >/1
    {refalrts::icSave, 0, 13, 2},
    {refalrts::icEmpty, 0, 0, 13},
    // closed e.Scanned#1 as range 5
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  e.Scanned#1/5 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TError/4 HalfReuse: 'U'/7 }"nexpected end of file at litera"/9 Tile{ HalfReuse: 'l'/8 HalfReuse: )/1 ]] }
    {refalrts::icAllocString, 0, 0, 9},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 0},
    {refalrts::icReinitIdent, 0, 0, 4},
    {refalrts::icReinitChar, 0, 'U', 7},
    {refalrts::icReinitChar, 0, 'l', 8},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
    {refalrts::icLinkBrackets, 0, 1, 0},
    {refalrts::icSetRes, 0, 0, 8},
    {refalrts::icSpliceTile, 9, 10, 0},
    {refalrts::icTrash, 0, 0, 7},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    // ( e.idx ) s.idx e.idx
    // </0 & Literal/4 (/7 e.Scanned#1/5 )/8 s.Other#1/9 e.Text#1/2 >/1
    // closed e.Scanned#1 as range 5
    {refalrts::icsVarLeft, 0, 9, 2},
    // closed e.Text#1 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  s.Other#1/9 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Literal/4 AsIs: (/7 AsIs: e.Scanned#1/5 HalfReuse: s.Other1 #9/8 } )/10 Tile{ AsIs: e.Text#1/2 } Tile{ AsIs: >/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 10},
    {refalrts::icReinitSVar, 0, 9, 8},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 7, 10, 0},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceTile, 10, 10, 0},
    {refalrts::icTrash, 0, 0, 8},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[5];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  //FAST GEN: e.$
  //GLOBAL GEN: ( e.$ ) e.$
  // </0 & Literal/4 (/7 e.idxB#0/5 )/8 e.idxT#0/2 >/1
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
  // closed e.idxT#0 as range 2
  do {
    refalrts::start_sentence();
    // ( e.idx ) '\\' e.idx
    // </0 & Literal/4 (/7 e.Scanned#1/5 )/8 '\\'/9 e.Text#1/2 >/1
    context[13] = context[2];
    context[14] = context[3];
    context[9] = refalrts::char_left( '\\', context[13], context[14] );
    if( ! context[9] )
      continue;
    // closed e.Scanned#1 as range 5
    // closed e.Text#1 as range 13(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  '\\'/9 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Escape/4 AsIs: (/7 AsIs: e.Scanned#1/5 AsIs: )/8 } Tile{ AsIs: e.Text#1/13(2) } Tile{ AsIs: >/1 ]] }
    refalrts::update_name( context[4], Escape, "Escape" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[13], context[14] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[8], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) '\'\'' e.idx
    // </0 & Literal/4 (/7 e.Scanned#1/5 )/8 '\''/9 '\''/10 e.Text#1/2 >/1
    context[13] = context[2];
    context[14] = context[3];
    context[9] = refalrts::char_left( '\'', context[13], context[14] );
    if( ! context[9] )
      continue;
    context[10] = refalrts::char_left( '\'', context[13], context[14] );
    if( ! context[10] )
      continue;
    // closed e.Scanned#1 as range 5
    // closed e.Text#1 as range 13(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  '\''/10 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Literal/4 AsIs: (/7 AsIs: e.Scanned#1/5 HalfReuse: '\''/8 HalfReuse: )/9 } Tile{ AsIs: e.Text#1/13(2) } Tile{ AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '\'' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[13], context[14] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[9], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) '\'' e.idx
    // </0 & Literal/4 (/7 e.Scanned#1/5 )/8 '\''/9 e.Text#1/2 >/1
    context[13] = context[2];
    context[14] = context[3];
    context[9] = refalrts::char_left( '\'', context[13], context[14] );
    if( ! context[9] )
      continue;
    // closed e.Scanned#1 as range 5
    // closed e.Text#1 as range 13(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TLiteral/4 } Tile{ AsIs: e.Scanned#1/5 } Tile{ HalfReuse: )/7 } Tile{ HalfReuse: </8 HalfReuse: & LoTokens/9 AsIs: e.Text#1/13(2) AsIs: >/1 ]] }
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], & ident_TLiteral<int>::name );
    refalrts::reinit_close_bracket( context[7] );
    refalrts::reinit_open_call( context[8] );
    refalrts::reinit_name( context[9], LoTokens, "LoTokens" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[8] );
    refalrts::link_brackets( context[0], context[7] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[7], context[7] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) '\n' e.idx
    // </0 & Literal/4 (/7 e.Scanned#1/5 )/8 '\n'/9 e.Text#1/2 >/1
    context[13] = context[2];
    context[14] = context[3];
    context[9] = refalrts::char_left( '\n', context[13], context[14] );
    if( ! context[9] )
      continue;
    // closed e.Scanned#1 as range 5
    // closed e.Text#1 as range 13(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  e.Scanned#1/5 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TError/4 HalfReuse: 'U'/7 }"nexpected end of line at literal"/10 )/12 Tile{ HalfReuse: </8 HalfReuse: & LoTokens/9 AsIs: e.Text#1/13(2) AsIs: >/1 ]] }
    if( ! refalrts::alloc_chars( context[10], context[11], "nexpected end of line at literal", 32 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[12] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], & ident_TError<int>::name );
    refalrts::reinit_char( context[7], 'U' );
    refalrts::reinit_open_call( context[8] );
    refalrts::reinit_name( context[9], LoTokens, "LoTokens" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[8] );
    refalrts::link_brackets( context[0], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[10], context[12] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[7], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx )
    // </0 & Literal/4 (/7 e.Scanned#1/5 )/8 >/1
    context[13] = context[2];
    context[14] = context[3];
    if( ! refalrts::empty_seq( context[13], context[14] ) )
      continue;
    // closed e.Scanned#1 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  e.Scanned#1/5 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TError/4 HalfReuse: 'U'/7 }"nexpected end of file at litera"/9 Tile{ HalfReuse: 'l'/8 HalfReuse: )/1 ]] }
    if( ! refalrts::alloc_chars( context[9], context[10], "nexpected end of file at litera", 31 ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], & ident_TError<int>::name );
    refalrts::reinit_char( context[7], 'U' );
    refalrts::reinit_char( context[8], 'l' );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[0], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[9], context[10] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[7], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  // ( e.idx ) s.idx e.idx
  // </0 & Literal/4 (/7 e.Scanned#1/5 )/8 s.Other#1/9 e.Text#1/2 >/1
  // closed e.Scanned#1 as range 5
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Text#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  s.Other#1/9 {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 AsIs: & Literal/4 AsIs: (/7 AsIs: e.Scanned#1/5 HalfReuse: s.Other1 #9/8 } )/10 Tile{ AsIs: e.Text#1/2 } Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_close_bracket( context[10] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_svar( context[8], context[9] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[7], context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[10], context[10] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[8], res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult Escape(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { LoTokens, "LoTokens" },
    { Literal, "Literal" },
    { Literal_DecCode, "Literal-DecCode" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_TError<int>::name
  };
  using refalrts::numbers;
  static const refalrts::StringItem strings[] = {
    {"nexpected escaped character", 27}
  };
  static const refalrts::RASLCommand raa[] = {
    //FAST GEN: ( e.$ ) s.$ e.$
    //GLOBAL GEN: ( e.$ ) s.$ e.$
    // </0 & Escape/4 (/7 e.idxB#0/5 )/8 s.idxT#0/9 e.idxTV#0/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icBracketLeftSave, 0, 5, 2},
    // closed e.idxB#0 as range 5
    {refalrts::icsVarLeft, 0, 9, 2},
    // closed e.idxTV#0 as range 2
    {refalrts::icOnFailGoTo, +9, 0, 0},
    // ( e.idx ) 'n' e.idx
    // </0 & Escape/4 (/7 e.Scanned#1/5 )/8 'n'/9 e.Text#1/2 >/1
    {refalrts::icCharTerm, 0, static_cast<unsigned char>('n'), 9},
    // closed e.Scanned#1 as range 5
    // closed e.Text#1 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Literal/4 AsIs: (/7 AsIs: e.Scanned#1/5 HalfReuse: '\n'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    {refalrts::icUpdateFunc, 0, 1, 4},
    {refalrts::icReinitChar, 0, '\n', 8},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 7, 9, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +9, 0, 0},
    // ( e.idx ) 'r' e.idx
    // </0 & Escape/4 (/7 e.Scanned#1/5 )/8 'r'/9 e.Text#1/2 >/1
    {refalrts::icCharTerm, 0, static_cast<unsigned char>('r'), 9},
    // closed e.Scanned#1 as range 5
    // closed e.Text#1 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Literal/4 AsIs: (/7 AsIs: e.Scanned#1/5 HalfReuse: '\r'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    {refalrts::icUpdateFunc, 0, 1, 4},
    {refalrts::icReinitChar, 0, '\r', 8},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 7, 9, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +9, 0, 0},
    // ( e.idx ) 't' e.idx
    // </0 & Escape/4 (/7 e.Scanned#1/5 )/8 't'/9 e.Text#1/2 >/1
    {refalrts::icCharTerm, 0, static_cast<unsigned char>('t'), 9},
    // closed e.Scanned#1 as range 5
    // closed e.Text#1 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Literal/4 AsIs: (/7 AsIs: e.Scanned#1/5 HalfReuse: '\t'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    {refalrts::icUpdateFunc, 0, 1, 4},
    {refalrts::icReinitChar, 0, '\t', 8},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 7, 9, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +9, 0, 0},
    // ( e.idx ) '\\' e.idx
    // </0 & Escape/4 (/7 e.Scanned#1/5 )/8 '\\'/9 e.Text#1/2 >/1
    {refalrts::icCharTerm, 0, static_cast<unsigned char>('\\'), 9},
    // closed e.Scanned#1 as range 5
    // closed e.Text#1 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Literal/4 AsIs: (/7 AsIs: e.Scanned#1/5 HalfReuse: '\\'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    {refalrts::icUpdateFunc, 0, 1, 4},
    {refalrts::icReinitChar, 0, '\\', 8},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 7, 9, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +10, 0, 0},
    // ( e.idx ) 'd' e.idx
    // </0 & Escape/4 (/7 e.Scanned#1/5 )/8 'd'/9 e.Text#1/2 >/1
    {refalrts::icCharTerm, 0, static_cast<unsigned char>('d'), 9},
    // closed e.Scanned#1 as range 5
    // closed e.Text#1 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  'd'/9 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Literal-DecCode/4 AsIs: (/7 AsIs: e.Scanned#1/5 AsIs: )/8 } Tile{ AsIs: e.Text#1/2 } Tile{ AsIs: >/1 ]] }
    {refalrts::icUpdateFunc, 0, 2, 4},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icTrash, 0, 0, 8},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +9, 0, 0},
    // ( e.idx ) '\'' e.idx
    // </0 & Escape/4 (/7 e.Scanned#1/5 )/8 '\''/9 e.Text#1/2 >/1
    {refalrts::icCharTerm, 0, static_cast<unsigned char>('\''), 9},
    // closed e.Scanned#1 as range 5
    // closed e.Text#1 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Literal/4 AsIs: (/7 AsIs: e.Scanned#1/5 HalfReuse: '\''/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    {refalrts::icUpdateFunc, 0, 1, 4},
    {refalrts::icReinitChar, 0, '\'', 8},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 9},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 7, 9, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    // ( e.idx ) s.idx e.idx
    // </0 & Escape/4 (/7 e.Scanned#1/5 )/8 s.Other#1/9 e.Text#1/2 >/1
    // closed e.Scanned#1 as range 5
    // closed e.Text#1 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  e.Scanned#1/5 {REMOVED TILE}  s.Other#1/9 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TError/4 HalfReuse: 'U'/7 }"nexpected escaped character"/10 Tile{ AsIs: )/8 } </12 & LoTokens/13 Tile{ AsIs: e.Text#1/2 } Tile{ AsIs: >/1 ]] }
    {refalrts::icAllocString, 0, 0, 10},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 12},
    {refalrts::icAllocFunc, 0, 0, 13},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 0},
    {refalrts::icReinitIdent, 0, 0, 4},
    {refalrts::icReinitChar, 0, 'U', 7},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icLinkBrackets, 0, 8, 0},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceTile, 12, 13, 0},
    {refalrts::icSpliceTile, 8, 8, 0},
    {refalrts::icSpliceTile, 10, 11, 0},
    {refalrts::icTrash, 0, 0, 7},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[6];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  //FAST GEN: ( e.$ ) s.$ e.$
  //GLOBAL GEN: ( e.$ ) s.$ e.$
  // </0 & Escape/4 (/7 e.idxB#0/5 )/8 s.idxT#0/9 e.idxTV#0/2 >/1
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
  // closed e.idxTV#0 as range 2
  do {
    refalrts::start_sentence();
    // ( e.idx ) 'n' e.idx
    // </0 & Escape/4 (/7 e.Scanned#1/5 )/8 'n'/9 e.Text#1/2 >/1
    if( ! refalrts::char_term( 'n', context[9] ) )
      continue;
    // closed e.Scanned#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Literal/4 AsIs: (/7 AsIs: e.Scanned#1/5 HalfReuse: '\n'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], Literal, "Literal" );
    refalrts::reinit_char( context[8], '\n' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'r' e.idx
    // </0 & Escape/4 (/7 e.Scanned#1/5 )/8 'r'/9 e.Text#1/2 >/1
    if( ! refalrts::char_term( 'r', context[9] ) )
      continue;
    // closed e.Scanned#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Literal/4 AsIs: (/7 AsIs: e.Scanned#1/5 HalfReuse: '\r'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], Literal, "Literal" );
    refalrts::reinit_char( context[8], '\r' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 't' e.idx
    // </0 & Escape/4 (/7 e.Scanned#1/5 )/8 't'/9 e.Text#1/2 >/1
    if( ! refalrts::char_term( 't', context[9] ) )
      continue;
    // closed e.Scanned#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Literal/4 AsIs: (/7 AsIs: e.Scanned#1/5 HalfReuse: '\t'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], Literal, "Literal" );
    refalrts::reinit_char( context[8], '\t' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) '\\' e.idx
    // </0 & Escape/4 (/7 e.Scanned#1/5 )/8 '\\'/9 e.Text#1/2 >/1
    if( ! refalrts::char_term( '\\', context[9] ) )
      continue;
    // closed e.Scanned#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Literal/4 AsIs: (/7 AsIs: e.Scanned#1/5 HalfReuse: '\\'/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], Literal, "Literal" );
    refalrts::reinit_char( context[8], '\\' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) 'd' e.idx
    // </0 & Escape/4 (/7 e.Scanned#1/5 )/8 'd'/9 e.Text#1/2 >/1
    if( ! refalrts::char_term( 'd', context[9] ) )
      continue;
    // closed e.Scanned#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  'd'/9 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Literal-DecCode/4 AsIs: (/7 AsIs: e.Scanned#1/5 AsIs: )/8 } Tile{ AsIs: e.Text#1/2 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name( context[4], Literal_DecCode, "Literal-DecCode" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[2], context[3] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[8], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // ( e.idx ) '\'' e.idx
    // </0 & Escape/4 (/7 e.Scanned#1/5 )/8 '\''/9 e.Text#1/2 >/1
    if( ! refalrts::char_term( '\'', context[9] ) )
      continue;
    // closed e.Scanned#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Literal/4 AsIs: (/7 AsIs: e.Scanned#1/5 HalfReuse: '\''/8 HalfReuse: )/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], Literal, "Literal" );
    refalrts::reinit_char( context[8], '\'' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  // ( e.idx ) s.idx e.idx
  // </0 & Escape/4 (/7 e.Scanned#1/5 )/8 s.Other#1/9 e.Text#1/2 >/1
  // closed e.Scanned#1 as range 5
  // closed e.Text#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  e.Scanned#1/5 {REMOVED TILE}  s.Other#1/9 {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TError/4 HalfReuse: 'U'/7 }"nexpected escaped character"/10 Tile{ AsIs: )/8 } </12 & LoTokens/13 Tile{ AsIs: e.Text#1/2 } Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_chars( context[10], context[11], "nexpected escaped character", 27 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[13], LoTokens, "LoTokens" ) )
    return refalrts::cNoMemory;
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_ident( context[4], & ident_TError<int>::name );
  refalrts::reinit_char( context[7], 'U' );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[12] );
  refalrts::link_brackets( context[0], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[12], context[13] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[10], context[11] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[7], res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult gen_Literal_DecCode_S1L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
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
    {"xpected digits", 14}
  };
  static const refalrts::RASLCommand raa[] = {
    //FAST GEN: ( e.$ ) s.$ e.$
    //GLOBAL GEN: ( e.$ ) s.$ e.$
    // </0 & Literal-DecCode$1\1/4 (/7 e.idxB#0/5 )/8 s.idxT#0/9 e.idxTV#0/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icBracketLeftSave, 0, 5, 2},
    // closed e.idxB#0 as range 5
    {refalrts::icsVarLeft, 0, 9, 2},
    // closed e.idxTV#0 as range 2
    {refalrts::icOnFailGoTo, +18, 0, 0},
    // ( e.idx ) # Success s.idx e.idx
    // </0 & Literal-DecCode$1\1/4 (/7 e.Scanned#1/5 )/8 # Success/9 s.Number#2/10 e.Tail#2/2 >/1
    {refalrts::icIdentTerm, 0, 2, 9},
    // closed e.Scanned#1 as range 5
    {refalrts::icSave, 0, 13, 2},
    {refalrts::icsVarLeft, 0, 10, 13},
    // closed e.Tail#2 as range 13(2)
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Literal/4 AsIs: (/7 AsIs: e.Scanned#1/5 HalfReuse: </8 HalfReuse: & Chr/9 AsIs: s.Number#2/10 } >/11 )/12 Tile{ AsIs: e.Tail#2/13(2) } Tile{ AsIs: >/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 11},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 12},
    {refalrts::icUpdateFunc, 0, 2, 4},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 8},
    {refalrts::icReinitFunc, 0, 1, 9},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 7, 12, 0},
    {refalrts::icPushStack, 0, 0, 11},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceEVar, 0, 0, 13},
    {refalrts::icSpliceTile, 11, 12, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    // ( e.idx ) # Fails e.idx
    // </0 & Literal-DecCode$1\1/4 (/7 e.Scanned#1/5 )/8 # Fails/9 e.Tail#2/2 >/1
    {refalrts::icIdentTerm, 0, 1, 9},
    // closed e.Scanned#1 as range 5
    // closed e.Tail#2 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  e.Scanned#1/5 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TError/4 HalfReuse: 'E'/7 }"xpected digits"/10 )/12 Tile{ HalfReuse: </8 HalfReuse: & LoTokens/9 AsIs: e.Tail#2/2 AsIs: >/1 ]] }
    {refalrts::icAllocString, 0, 0, 10},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 12},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 0},
    {refalrts::icReinitIdent, 0, 0, 4},
    {refalrts::icReinitChar, 0, 'E', 7},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 8},
    {refalrts::icReinitFunc, 0, 0, 9},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icLinkBrackets, 0, 12, 0},
    {refalrts::icSetRes, 0, 0, 8},
    {refalrts::icSpliceTile, 10, 12, 0},
    {refalrts::icTrash, 0, 0, 7},
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
  //FAST GEN: ( e.$ ) s.$ e.$
  //GLOBAL GEN: ( e.$ ) s.$ e.$
  // </0 & Literal-DecCode$1\1/4 (/7 e.idxB#0/5 )/8 s.idxT#0/9 e.idxTV#0/2 >/1
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
  // closed e.idxTV#0 as range 2
  do {
    refalrts::start_sentence();
    // ( e.idx ) # Success s.idx e.idx
    // </0 & Literal-DecCode$1\1/4 (/7 e.Scanned#1/5 )/8 # Success/9 s.Number#2/10 e.Tail#2/2 >/1
    if( ! refalrts::ident_term(  & ident_Success<int>::name, context[9] ) )
      continue;
    // closed e.Scanned#1 as range 5
    context[13] = context[2];
    context[14] = context[3];
    if( ! refalrts::svar_left( context[10], context[13], context[14] ) )
      continue;
    // closed e.Tail#2 as range 13(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Literal/4 AsIs: (/7 AsIs: e.Scanned#1/5 HalfReuse: </8 HalfReuse: & Chr/9 AsIs: s.Number#2/10 } >/11 )/12 Tile{ AsIs: e.Tail#2/13(2) } Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_close_call( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[12] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], Literal, "Literal" );
    refalrts::reinit_open_call( context[8] );
    refalrts::reinit_name( context[9], Chr, "Chr" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[12] );
    refalrts::push_stack( context[11] );
    refalrts::push_stack( context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  // ( e.idx ) # Fails e.idx
  // </0 & Literal-DecCode$1\1/4 (/7 e.Scanned#1/5 )/8 # Fails/9 e.Tail#2/2 >/1
  if( ! refalrts::ident_term(  & ident_Fails<int>::name, context[9] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Scanned#1 as range 5
  // closed e.Tail#2 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  e.Scanned#1/5 {REMOVED TILE} 
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TError/4 HalfReuse: 'E'/7 }"xpected digits"/10 )/12 Tile{ HalfReuse: </8 HalfReuse: & LoTokens/9 AsIs: e.Tail#2/2 AsIs: >/1 ]] }
  if( ! refalrts::alloc_chars( context[10], context[11], "xpected digits", 14 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[12] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_ident( context[4], & ident_TError<int>::name );
  refalrts::reinit_char( context[7], 'E' );
  refalrts::reinit_open_call( context[8] );
  refalrts::reinit_name( context[9], LoTokens, "LoTokens" );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[8] );
  refalrts::link_brackets( context[0], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[10], context[12] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[7], res );
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
    { gen_Literal_DecCode_S1L1, "Literal-DecCode$1\\1" },
    { refalrts::create_closure, "@create_closure@" },
    { IntFromStr, "IntFromStr" },
    { Fetch, "Fetch" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_TError<int>::name
  };
  using refalrts::numbers;
  static const refalrts::StringItem strings[] = {
    {"nexpected end of fil", 20}
  };
  static const refalrts::RASLCommand raa[] = {
    //FAST GEN: e.$
    //GLOBAL GEN: ( e.$ ) e.$
    // </0 & Literal-DecCode/4 (/7 e.idxB#0/5 )/8 e.idxT#0/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icBracketLeftSave, 0, 5, 2},
    // closed e.idxB#0 as range 5
    // closed e.idxT#0 as range 2
    {refalrts::icOnFailGoTo, +24, 0, 0},
    // ( e.idx ) e.idx
    // </0 & Literal-DecCode/4 (/7 e.Scanned#1/5 )/8 e.Tail#1/2 >/1
    // closed e.Scanned#1 as range 5
    // closed e.Tail#1 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } </9 & Fetch/10 </11 & IntFromStr/12 Tile{ AsIs: e.Tail#1/2 } >/13 </14 Tile{ HalfReuse: & @create_closure@/0 Reuse: & Literal-DecCode$1\1/4 AsIs: (/7 AsIs: e.Scanned#1/5 AsIs: )/8 } >/15 Tile{ AsIs: >/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 9},
    {refalrts::icAllocFunc, 0, 3, 10},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 11},
    {refalrts::icAllocFunc, 0, 2, 12},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 13},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 14},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 15},
    {refalrts::icReinitFunc, 0, 1, 0},
    {refalrts::icUpdateFunc, 0, 0, 4},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 9},
    {refalrts::icPushStack, 0, 0, 15},
    {refalrts::icPushStack, 0, 0, 14},
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icPushStack, 0, 0, 13},
    {refalrts::icPushStack, 0, 0, 11},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceTile, 15, 15, 0},
    {refalrts::icSpliceTile, 0, 8, 0},
    {refalrts::icSpliceTile, 13, 14, 0},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceTile, 9, 12, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    // ( e.idx )
    // </0 & Literal-DecCode/4 (/7 e.Scanned#1/5 )/8 >/1
    {refalrts::icEmpty, 0, 0, 2},
    // closed e.Scanned#1 as range 5
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  e.Scanned#1/5 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TError/4 HalfReuse: 'U'/7 }"nexpected end of fil"/9 Tile{ HalfReuse: 'e'/8 HalfReuse: )/1 ]] }
    {refalrts::icAllocString, 0, 0, 9},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 0},
    {refalrts::icReinitIdent, 0, 0, 4},
    {refalrts::icReinitChar, 0, 'U', 7},
    {refalrts::icReinitChar, 0, 'e', 8},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
    {refalrts::icLinkBrackets, 0, 1, 0},
    {refalrts::icSetRes, 0, 0, 8},
    {refalrts::icSpliceTile, 9, 10, 0},
    {refalrts::icTrash, 0, 0, 7},
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
  //GLOBAL GEN: ( e.$ ) e.$
  // </0 & Literal-DecCode/4 (/7 e.idxB#0/5 )/8 e.idxT#0/2 >/1
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
  // closed e.idxT#0 as range 2
  do {
    refalrts::start_sentence();
    // ( e.idx ) e.idx
    // </0 & Literal-DecCode/4 (/7 e.Scanned#1/5 )/8 e.Tail#1/2 >/1
    // closed e.Scanned#1 as range 5
    // closed e.Tail#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } </9 & Fetch/10 </11 & IntFromStr/12 Tile{ AsIs: e.Tail#1/2 } >/13 </14 Tile{ HalfReuse: & @create_closure@/0 Reuse: & Literal-DecCode$1\1/4 AsIs: (/7 AsIs: e.Scanned#1/5 AsIs: )/8 } >/15 Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_call( context[9] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[10], Fetch, "Fetch" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[12], IntFromStr, "IntFromStr" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[15] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_name( context[0], refalrts::create_closure, "@create_closure@" );
    refalrts::update_name( context[4], gen_Literal_DecCode_S1L1, "Literal-DecCode$1\\1" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[9] );
    refalrts::push_stack( context[15] );
    refalrts::push_stack( context[14] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::push_stack( context[13] );
    refalrts::push_stack( context[11] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[15], context[15] );
    res = refalrts::splice_evar( res, context[0], context[8] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[9], context[12] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  // ( e.idx )
  // </0 & Literal-DecCode/4 (/7 e.Scanned#1/5 )/8 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Scanned#1 as range 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  e.Scanned#1/5 {REMOVED TILE} 
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TError/4 HalfReuse: 'U'/7 }"nexpected end of fil"/9 Tile{ HalfReuse: 'e'/8 HalfReuse: )/1 ]] }
  if( ! refalrts::alloc_chars( context[9], context[10], "nexpected end of fil", 20 ) )
    return refalrts::cNoMemory;
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_ident( context[4], & ident_TError<int>::name );
  refalrts::reinit_char( context[7], 'U' );
  refalrts::reinit_char( context[8], 'e' );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[0], context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[7], res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult NameFail(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { LoTokens, "LoTokens" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_TError<int>::name
  };
  using refalrts::numbers;
  static const refalrts::StringItem strings[] = {
    {"expected character ", 19}
  };
  static const refalrts::RASLCommand raa[] = {
    // </0 & NameFail/4 (/7 )/8 s.Next#1/9 e.Tail#1/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icBracketLeftSave, 0, 5, 2},
    {refalrts::icEmpty, 0, 0, 5},
    {refalrts::icsVarLeft, 0, 9, 2},
    // closed e.Tail#1 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TError/4 HalfReuse: 'U'/7 HalfReuse: 'n'/8 }"expected character "/10 Tile{ AsIs: s.Next#1/9 } )/12 </13 & LoTokens/14 Tile{ AsIs: e.Tail#1/2 } Tile{ AsIs: >/1 ]] }
    {refalrts::icAllocString, 0, 0, 10},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 12},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 13},
    {refalrts::icAllocFunc, 0, 0, 14},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 0},
    {refalrts::icReinitIdent, 0, 0, 4},
    {refalrts::icReinitChar, 0, 'U', 7},
    {refalrts::icReinitChar, 0, 'n', 8},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 13},
    {refalrts::icLinkBrackets, 0, 12, 0},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceTile, 12, 14, 0},
    {refalrts::icSpliceTile, 9, 9, 0},
    {refalrts::icSpliceTile, 10, 11, 0},
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
  // </0 & NameFail/4 (/7 )/8 s.Next#1/9 e.Tail#1/2 >/1
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
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Tail#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TError/4 HalfReuse: 'U'/7 HalfReuse: 'n'/8 }"expected character "/10 Tile{ AsIs: s.Next#1/9 } )/12 </13 & LoTokens/14 Tile{ AsIs: e.Tail#1/2 } Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_chars( context[10], context[11], "expected character ", 19 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[14], LoTokens, "LoTokens" ) )
    return refalrts::cNoMemory;
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_ident( context[4], & ident_TError<int>::name );
  refalrts::reinit_char( context[7], 'U' );
  refalrts::reinit_char( context[8], 'n' );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[13] );
  refalrts::link_brackets( context[0], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[12], context[14] );
  res = refalrts::splice_evar( res, context[9], context[9] );
  res = refalrts::splice_evar( res, context[10], context[11] );
  refalrts::use( res );
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
    // </0 & NameTailFail/4 (/7 e.Scanned#1/5 )/8 e.Tail#1/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icBracketLeftSave, 0, 5, 2},
    // closed e.Scanned#1 as range 5
    // closed e.Tail#1 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TName/4 } Tile{ AsIs: e.Scanned#1/5 } Tile{ HalfReuse: )/7 } </9 Tile{ HalfReuse: & LoTokens/8 AsIs: e.Tail#1/2 AsIs: >/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 9},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 0},
    {refalrts::icReinitIdent, 0, 0, 4},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 7},
    {refalrts::icReinitFunc, 0, 0, 8},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 9},
    {refalrts::icLinkBrackets, 0, 7, 0},
    {refalrts::icSetRes, 0, 0, 8},
    {refalrts::icSpliceTile, 9, 9, 0},
    {refalrts::icSpliceTile, 7, 7, 0},
    {refalrts::icSpliceEVar, 0, 0, 5},
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
  // </0 & NameTailFail/4 (/7 e.Scanned#1/5 )/8 e.Tail#1/2 >/1
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
  // closed e.Scanned#1 as range 5
  // closed e.Tail#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TName/4 } Tile{ AsIs: e.Scanned#1/5 } Tile{ HalfReuse: )/7 } </9 Tile{ HalfReuse: & LoTokens/8 AsIs: e.Tail#1/2 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[9] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_ident( context[4], & ident_TName<int>::name );
  refalrts::reinit_close_bracket( context[7] );
  refalrts::reinit_name( context[8], LoTokens, "LoTokens" );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[9] );
  refalrts::link_brackets( context[0], context[7] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[9], context[9] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
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
    // </0 & NameTail/4 (/7 e.Scanned#1/5 )/8 e.Tail#1/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icBracketLeftSave, 0, 5, 2},
    // closed e.Scanned#1 as range 5
    // closed e.Tail#1 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } </9 & NextInSet/10 & NameTail/11 & NameTailFail/12 (/13 </14 & NameTailSet/15 Tile{ HalfReuse: >/0 HalfReuse: )/4 AsIs: (/7 AsIs: e.Scanned#1/5 AsIs: )/8 AsIs: e.Tail#1/2 AsIs: >/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 9},
    {refalrts::icAllocFunc, 0, 3, 10},
    {refalrts::icAllocFunc, 0, 2, 11},
    {refalrts::icAllocFunc, 0, 1, 12},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 13},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 14},
    {refalrts::icAllocFunc, 0, 0, 15},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 0},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 4},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 9},
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icLinkBrackets, 13, 4, 0},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icPushStack, 0, 0, 14},
    {refalrts::icSetRes, 0, 0, 0},
    {refalrts::icSpliceTile, 9, 15, 0},
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
  // </0 & NameTail/4 (/7 e.Scanned#1/5 )/8 e.Tail#1/2 >/1
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
  // closed e.Scanned#1 as range 5
  // closed e.Tail#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } </9 & NextInSet/10 & NameTail/11 & NameTailFail/12 (/13 </14 & NameTailSet/15 Tile{ HalfReuse: >/0 HalfReuse: )/4 AsIs: (/7 AsIs: e.Scanned#1/5 AsIs: )/8 AsIs: e.Tail#1/2 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[10], NextInSet, "NextInSet" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[11], NameTail, "NameTail" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[12], NameTailFail, "NameTailFail" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[15], NameTailSet, "NameTailSet" ) )
    return refalrts::cNoMemory;
  refalrts::reinit_close_call( context[0] );
  refalrts::reinit_close_bracket( context[4] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[9] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[13], context[4] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[14] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[9], context[15] );
  refalrts::use( res );
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
    // </0 & Name/4 e.Tail#1/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    // closed e.Tail#1 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } </5 & NextInSet/6 & NameTail/7 & NameFail/8 (/9 </10 & HiLetters/11 >/12 )/13 Tile{ HalfReuse: (/0 HalfReuse: )/4 AsIs: e.Tail#1/2 AsIs: >/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 5},
    {refalrts::icAllocFunc, 0, 3, 6},
    {refalrts::icAllocFunc, 0, 2, 7},
    {refalrts::icAllocFunc, 0, 1, 8},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 9},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 10},
    {refalrts::icAllocFunc, 0, 0, 11},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 12},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 13},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 0},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 4},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 5},
    {refalrts::icLinkBrackets, 0, 4, 0},
    {refalrts::icLinkBrackets, 9, 13, 0},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icPushStack, 0, 0, 10},
    {refalrts::icSetRes, 0, 0, 0},
    {refalrts::icSpliceTile, 5, 13, 0},
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
  // </0 & Name/4 e.Tail#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Tail#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } </5 & NextInSet/6 & NameTail/7 & NameFail/8 (/9 </10 & HiLetters/11 >/12 )/13 Tile{ HalfReuse: (/0 HalfReuse: )/4 AsIs: e.Tail#1/2 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[5] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[6], NextInSet, "NextInSet" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[7], NameTail, "NameTail" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[8], NameFail, "NameFail" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[11], HiLetters, "HiLetters" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[13] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_close_bracket( context[4] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[5] );
  refalrts::link_brackets( context[0], context[4] );
  refalrts::link_brackets( context[9], context[13] );
  refalrts::push_stack( context[12] );
  refalrts::push_stack( context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[13] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}


//End of file
