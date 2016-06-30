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
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & Generate_SelfUpdate/4 e.FileName#1/2 >/1
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
}

refalrts::FnResult Generate_ToDifferent(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 84 elems
  refalrts::Iter context[84];
  refalrts::zeros( context, 84 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & Generate_ToDifferent/4 (/7 e.From#1/5 )/8 e.To#1/2 >/1
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
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & SaveFile/4 AsIs: (/7 } Tile{ AsIs: e.To#1/2 } Tile{ AsIs: )/8 } (/9 '/'/10 '/'/11 ' '/12 'A'/13 'u'/14 't'/15 'o'/16 'm'/17 'a'/18 't'/19 'i'/20 'c'/21 'a'/22 'l'/23 'l'/24 'y'/25 ' '/26 'g'/27 'e'/28 'n'/29 'e'/30 'r'/31 'a'/32 't'/33 'e'/34 'd'/35 ' '/36 'f'/37 'i'/38 'l'/39 'e'/40 ','/41 ' '/42 'd'/43 'o'/44 'n'/45 '\''/46 't'/47 ' '/48 'e'/49 'd'/50 'i'/51 't'/52 '!'/53 )/54 (/55 '/'/56 '/'/57 ' '/58 'E'/59 'd'/60 'i'/61 't'/62 ' '/63 'f'/64 'i'/65 'l'/66 'e'/67 ' '/68 '\''/69 Tile{ AsIs: e.From#1/5 } '\''/70 )/71 (/72 )/73 (/74 )/75 </76 & GenCode/77 </78 & LoadFile/79 e.From#1/5/80 >/82 >/83 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_bracket( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[10], '/' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[11], '/' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[12], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[13], 'A' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[14], 'u' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[15], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[16], 'o' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[17], 'm' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[18], 'a' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[19], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[20], 'i' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[21], 'c' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[22], 'a' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[23], 'l' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[24], 'l' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[25], 'y' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[26], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[27], 'g' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[28], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[29], 'n' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[30], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[31], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[32], 'a' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[33], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[34], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[35], 'd' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[36], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[37], 'f' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[38], 'i' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[39], 'l' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[40], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[41], ',' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[42], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[43], 'd' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[44], 'o' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[45], 'n' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[46], '\'' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[47], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[48], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[49], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[50], 'd' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[51], 'i' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[52], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[53], '!' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[54] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[55] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[56], '/' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[57], '/' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[58], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[59], 'E' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[60], 'd' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[61], 'i' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[62], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[63], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[64], 'f' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[65], 'i' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[66], 'l' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[67], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[68], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[69], '\'' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[70], '\'' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[71] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[72] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[73] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[74] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[75] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[76] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[77], GenCode, "GenCode" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[78] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[79], LoadFile, "LoadFile" ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[80], context[81], context[5], context[6]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[82] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[83] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], SaveFile, "SaveFile" );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[83] );
  refalrts::push_stack( context[76] );
  refalrts::push_stack( context[82] );
  refalrts::push_stack( context[78] );
  refalrts::link_brackets( context[74], context[75] );
  refalrts::link_brackets( context[72], context[73] );
  refalrts::link_brackets( context[55], context[71] );
  refalrts::link_brackets( context[9], context[54] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[70], context[83] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[9], context[69] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult NextNum(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & NextNum/4 s.Next#1/9 (/7 e.Line#1/5 )/8 >/1
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
}

static refalrts::FnResult Length_T(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 7 elems
  refalrts::Iter context[7];
  refalrts::zeros( context, 7 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & Length_T/4 e.Line#1/2 >/1
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
}

static refalrts::FnResult Error(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & Error/4 e.Text#1/2 >/1
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
}

static refalrts::FnResult ErrorAt(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & ErrorAt/4 s.Number#1/5 e.Text#1/2 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Text#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Error/4 } 'E'/6 'R'/7 'R'/8 'O'/9 'R'/10 ' '/11 'a'/12 't'/13 ' '/14 </15 & StrFromInt/16 Tile{ AsIs: s.Number#1/5 } >/17 ':'/18 ' '/19 Tile{ AsIs: e.Text#1/2 } Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_char( context[6], 'E' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[7], 'R' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[8], 'R' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[9], 'O' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[10], 'R' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[11], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[12], 'a' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[13], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[14], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[16], StrFromInt, "StrFromInt" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[17] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[18], ':' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[19], ' ' ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], Error, "Error" );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[17] );
  refalrts::push_stack( context[15] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[17], context[19] );
  res = refalrts::splice_evar( res, context[5], context[5] );
  res = refalrts::splice_evar( res, context[6], context[16] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult Warning(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & Warning/4 e.Message#1/2 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Message#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } </5 & WriteLine/6 'W'/7 'A'/8 'R'/9 'N'/10 'I'/11 'N'/12 'G'/13 Tile{ HalfReuse: ':'/0 HalfReuse: ' '/4 AsIs: e.Message#1/2 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[5] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[6], WriteLine, "WriteLine" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[7], 'W' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[8], 'A' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[9], 'R' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[10], 'N' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[11], 'I' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[12], 'N' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[13], 'G' ) )
    return refalrts::cNoMemory;
  refalrts::reinit_char( context[0], ':' );
  refalrts::reinit_char( context[4], ' ' );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[13] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult WarningAt(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & WarningAt/4 s.Number#1/5 e.Message#1/2 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Message#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & WriteLine/4 } 'W'/6 'A'/7 'R'/8 'N'/9 'I'/10 'N'/11 'G'/12 ' '/13 'a'/14 't'/15 ' '/16 </17 & StrFromInt/18 Tile{ AsIs: s.Number#1/5 } >/19 ' '/20 Tile{ AsIs: e.Message#1/2 } Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_char( context[6], 'W' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[7], 'A' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[8], 'R' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[9], 'N' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[10], 'I' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[11], 'N' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[12], 'G' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[13], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[14], 'a' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[15], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[16], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[17] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[18], StrFromInt, "StrFromInt" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[19] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[20], ' ' ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], WriteLine, "WriteLine" );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[19] );
  refalrts::push_stack( context[17] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[19], context[20] );
  res = refalrts::splice_evar( res, context[5], context[5] );
  res = refalrts::splice_evar( res, context[6], context[18] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult lambda_GenCode_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 33 elems
  refalrts::Iter context[33];
  refalrts::zeros( context, 33 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_GenCode_0/4 (/7 s.Length#2/9 e.LinesBefore#2/5 )/8 e.Description#2/10 (/14 'G'/16 'E'/17 'N'/18 ':'/19 'E'/20 'N'/21 'D'/22 '*'/23 '/'/24 )/15 e.Deleted#2/25 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
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
      context[25] = context[2];
      context[26] = context[3];
      context[12] = 0;
      context[13] = 0;
      context[14] = refalrts::brackets_left( context[12], context[13], context[25], context[26] );
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
      // closed e.Deleted#2 as range 2

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  e.Deleted#2/25 {REMOVED TILE} 
      //RESULT: Tile{ [[ } Tile{ AsIs: e.LinesBefore#2/5 } Tile{ AsIs: e.Description#2/10 } Tile{ AsIs: (/14 AsIs: 'G'/16 AsIs: 'E'/17 AsIs: 'N'/18 AsIs: ':'/19 AsIs: 'E'/20 AsIs: 'N'/21 AsIs: 'D'/22 AsIs: '*'/23 AsIs: '/'/24 AsIs: )/15 } Tile{ AsIs: </0 Reuse: & GenerateFromDFA/4 HalfReuse: </7 } Tile{ HalfReuse: & Parse/8 } </27 & Tokens/28 Tile{ AsIs: s.Length#2/9 } e.Description#2/10/29 >/31 >/32 Tile{ AsIs: >/1 ]] }
      if( ! refalrts::alloc_open_call( context[27] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[28], Tokens, "Tokens" ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_evar(context[29], context[30], context[10], context[11]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[31] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[32] ) )
        return refalrts::cNoMemory;
      refalrts::update_name( context[4], GenerateFromDFA, "GenerateFromDFA" );
      refalrts::reinit_open_call( context[7] );
      refalrts::reinit_name( context[8], Parse, "Parse" );
      refalrts::push_stack( context[1] );
      refalrts::push_stack( context[0] );
      refalrts::push_stack( context[32] );
      refalrts::push_stack( context[7] );
      refalrts::push_stack( context[31] );
      refalrts::push_stack( context[27] );
      refalrts::link_brackets( context[14], context[15] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[31], context[32] );
      res = refalrts::splice_evar( res, context[29], context[30] );
      res = refalrts::splice_evar( res, context[9], context[9] );
      res = refalrts::splice_evar( res, context[27], context[28] );
      res = refalrts::splice_evar( res, context[8], context[8] );
      res = refalrts::splice_evar( res, context[0], context[7] );
      res = refalrts::splice_evar( res, context[14], context[15] );
      res = refalrts::splice_evar( res, context[10], context[11] );
      res = refalrts::splice_evar( res, context[5], context[6] );
      refalrts::use( res );
      refalrts::splice_to_freelist_open( trash_prev, res );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[10], context[11], context[2], context[3] ) );
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & lambda_GenCode_0/4 e.Other#2/2 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Other#2 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  e.Other#2/2 {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Error/4 } 'E'/5 'n'/6 'd'/7 ' '/8 'o'/9 'f'/10 ' '/11 'd'/12 'e'/13 's'/14 'c'/15 'r'/16 'i'/17 'p'/18 't'/19 'i'/20 'o'/21 'n'/22 ' '/23 'n'/24 'o'/25 't'/26 ' '/27 'f'/28 'o'/29 'u'/30 'n'/31 'd'/32 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_char( context[5], 'E' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[6], 'n' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[7], 'd' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[8], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[9], 'o' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[10], 'f' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[11], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[12], 'd' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[13], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[14], 's' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[15], 'c' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[16], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[17], 'i' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[18], 'p' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[19], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[20], 'i' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[21], 'o' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[22], 'n' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[23], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[24], 'n' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[25], 'o' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[26], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[27], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[28], 'f' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[29], 'o' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[30], 'u' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[31], 'n' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[32], 'd' ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], Error, "Error" );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[5], context[32] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[4], res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult GenCode(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 32 elems
  refalrts::Iter context[32];
  refalrts::zeros( context, 32 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & GenCode/4 e.LinesBefore#1/5 (/9 '/'/11 '*'/12 'G'/13 'E'/14 'N'/15 ':'/16 'T'/17 'O'/18 'K'/19 'E'/20 'N'/21 'S'/22 )/10 e.Description#1/23 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    refalrts::start_e_loop();
    do {
      context[23] = context[2];
      context[24] = context[3];
      context[7] = 0;
      context[8] = 0;
      context[9] = refalrts::brackets_left( context[7], context[8], context[23], context[24] );
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
      // closed e.Description#1 as range 2

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
      //RESULT: Tile{ [[ } </25 & Fetch/26 (/27 Tile{ AsIs: </0 Reuse: & Length_T/4 AsIs: e.LinesBefore#1/5 AsIs: (/9 AsIs: '/'/11 AsIs: '*'/12 AsIs: 'G'/13 AsIs: 'E'/14 AsIs: 'N'/15 AsIs: ':'/16 AsIs: 'T'/17 AsIs: 'O'/18 AsIs: 'K'/19 AsIs: 'E'/20 AsIs: 'N'/21 AsIs: 'S'/22 AsIs: )/10 } >/28 )/29 Tile{ AsIs: e.Description#1/23 } & lambda_GenCode_0/30 Tile{ AsIs: >/1 ]] }
      if( ! refalrts::alloc_open_call( context[25] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[26], Fetch, "Fetch" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[27] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[28] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[29] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[30], lambda_GenCode_0, "lambda_GenCode_0" ) )
        return refalrts::cNoMemory;
      refalrts::update_name( context[4], Length_T, "Length_T" );
      refalrts::push_stack( context[1] );
      refalrts::push_stack( context[25] );
      refalrts::link_brackets( context[27], context[29] );
      refalrts::push_stack( context[28] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[9], context[10] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[30], context[30] );
      res = refalrts::splice_evar( res, context[23], context[24] );
      res = refalrts::splice_evar( res, context[28], context[29] );
      res = refalrts::splice_evar( res, context[0], context[10] );
      res = refalrts::splice_evar( res, context[25], context[27] );
      refalrts::use( res );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[5], context[6], context[2], context[3] ) );
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & GenCode/4 e.Other#1/2 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Other#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  e.Other#1/2 {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Error/4 } 'L'/5 'e'/6 'x'/7 'e'/8 'r'/9 ' '/10 'd'/11 'e'/12 's'/13 'c'/14 'r'/15 'i'/16 'p'/17 't'/18 'i'/19 'o'/20 'n'/21 ' '/22 'n'/23 'o'/24 't'/25 ' '/26 'f'/27 'o'/28 'u'/29 'n'/30 'd'/31 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_char( context[5], 'L' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[6], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[7], 'x' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[8], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[9], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[10], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[11], 'd' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[12], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[13], 's' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[14], 'c' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[15], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[16], 'i' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[17], 'p' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[18], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[19], 'i' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[20], 'o' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[21], 'n' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[22], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[23], 'n' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[24], 'o' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[25], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[26], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[27], 'f' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[28], 'o' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[29], 'u' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[30], 'n' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[31], 'd' ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], Error, "Error" );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[5], context[31] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[4], res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult GenerateFromDFA(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & GenerateFromDFA/4 e.Elements#1/2 >/1
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
}

static refalrts::FnResult SeparateOne(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 26 elems
  refalrts::Iter context[26];
  refalrts::zeros( context, 26 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & SeparateOne/4 (/7 (/11 e.Sets#1/9 )/12 (/15 e.Rules#1/13 )/16 )/8 (/19 # Set/21 (/24 e.Name#1/22 )/25 e.Content#1/17 )/20 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_left( context[9], context[10], context[5], context[6] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    context[13] = 0;
    context[14] = 0;
    context[15] = refalrts::brackets_left( context[13], context[14], context[5], context[6] );
    if( ! context[15] )
      continue;
    refalrts::bracket_pointers(context[15], context[16]);
    context[17] = 0;
    context[18] = 0;
    context[19] = refalrts::brackets_left( context[17], context[18], context[2], context[3] );
    if( ! context[19] )
      continue;
    refalrts::bracket_pointers(context[19], context[20]);
    context[21] = refalrts::ident_left(  & ident_Set<int>::name, context[17], context[18] );
    if( ! context[21] )
      continue;
    context[22] = 0;
    context[23] = 0;
    context[24] = refalrts::brackets_left( context[22], context[23], context[17], context[18] );
    if( ! context[24] )
      continue;
    refalrts::bracket_pointers(context[24], context[25]);
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
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

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & SeparateOne/4 (/7 (/11 e.Sets#1/9 )/12 (/15 e.Rules#1/13 )/16 )/8 (/19 # Sentence/21 (/24 e.Name#1/22 )/25 e.Content#1/17 )/20 >/1
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
  context[21] = refalrts::ident_left(  & ident_Sentence<int>::name, context[17], context[18] );
  if( ! context[21] )
    return refalrts::cRecognitionImpossible;
  context[22] = 0;
  context[23] = 0;
  context[24] = refalrts::brackets_left( context[22], context[23], context[17], context[18] );
  if( ! context[24] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[24], context[25]);
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Sets#1 as range 9
  // closed e.Rules#1 as range 13
  // closed e.Name#1 as range 22
  // closed e.Content#1 as range 17

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  & SeparateOne/4 {REMOVED TILE}  (/19 # Sentence/21 (/24 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: (/11 AsIs: e.Sets#1/9 AsIs: )/12 AsIs: (/15 AsIs: e.Rules#1/13 HalfReuse: (/16 HalfReuse: (/8 } Tile{ AsIs: e.Name#1/22 } Tile{ AsIs: )/25 AsIs: e.Content#1/17 AsIs: )/20 HalfReuse: )/1 } Tile{ HalfReuse: )/0 } Tile{ ]] }
  refalrts::reinit_open_bracket( context[16] );
  refalrts::reinit_open_bracket( context[8] );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::reinit_close_bracket( context[0] );
  refalrts::link_brackets( context[7], context[0] );
  refalrts::link_brackets( context[15], context[1] );
  refalrts::link_brackets( context[16], context[20] );
  refalrts::link_brackets( context[8], context[25] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[0], context[0] );
  res = refalrts::splice_evar( res, context[25], context[1] );
  res = refalrts::splice_evar( res, context[22], context[23] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult Separate(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & Separate/4 e.Elements#1/2 >/1
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
}

static refalrts::FnResult ResolvingSets(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & ResolvingSets/4 (/7 (/11 e.Sets#1/9 )/12 (/15 e.Rules#1/13 )/16 )/8 >/1
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
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: </4 HalfReuse: & ResolvingSets_Aux/7 } Tile{ AsIs: e.Sets#1/9 } Tile{ AsIs: >/1 } Tile{ AsIs: )/12 AsIs: (/15 AsIs: e.Rules#1/13 AsIs: )/16 } Tile{ ]] }
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_open_call( context[4] );
  refalrts::reinit_name( context[7], ResolvingSets_Aux, "ResolvingSets_Aux" );
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
}

static refalrts::FnResult NormingSet(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & NormingSet/4 e.Set_B#1/5 s.Repeated#1/7 e.Set_M#1/8 s.Repeated#1/10 e.Set_E#1/13 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    refalrts::start_e_loop();
    do {
      context[11] = context[2];
      context[12] = context[3];
      if( ! refalrts::svar_left( context[7], context[11], context[12] ) )
        continue;
      context[8] = 0;
      context[9] = 0;
      refalrts::start_e_loop();
      do {
        context[13] = context[11];
        context[14] = context[12];
        if( ! refalrts::repeated_stvar_left( context[10], context[7], context[13], context[14] ) )
          continue;
        // closed e.Set_E#1 as range 2

        refalrts::reset_allocator();
        //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  s.Repeated#1/10 {REMOVED TILE}  {REMOVED TILE} 
        //RESULT: Tile{ [[ } Tile{ AsIs: e.Set_B#1/5 } Tile{ AsIs: </0 AsIs: & NormingSet/4 } Tile{ AsIs: s.Repeated#1/7 } Tile{ AsIs: e.Set_M#1/8 } Tile{ AsIs: e.Set_E#1/13 } Tile{ AsIs: >/1 ]] }
        refalrts::push_stack( context[1] );
        refalrts::push_stack( context[0] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[13], context[14] );
        res = refalrts::splice_evar( res, context[8], context[9] );
        res = refalrts::splice_evar( res, context[7], context[7] );
        res = refalrts::splice_evar( res, context[0], context[4] );
        res = refalrts::splice_evar( res, context[5], context[6] );
        refalrts::use( res );
        refalrts::splice_to_freelist_open( trash_prev, res );
        return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
      } while ( refalrts::open_evar_advance( context[8], context[9], context[11], context[12] ) );
    } while ( refalrts::open_evar_advance( context[5], context[6], context[2], context[3] ) );
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & NormingSet/4 e.Set#1/2 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
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
}

static refalrts::FnResult ResolvingSets_Aux(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & ResolvingSets_Aux/4 e.Sets#1/2 >/1
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
}

static refalrts::FnResult NormalizeContent(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & NormalizeContent/4 (/7 e.Chars#1/5 )/8 (/11 # Chars/13 e.Symbols#1/9 )/12 e.Tail#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_left( context[9], context[10], context[2], context[3] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    context[13] = refalrts::ident_left(  & ident_Chars<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    // closed e.Chars#1 as range 5
    // closed e.Symbols#1 as range 9
    // closed e.Tail#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & NormalizeContent/4 AsIs: (/7 } Tile{ HalfReuse: </8 HalfReuse: & NormingSet/11 } Tile{ AsIs: e.Chars#1/5 } Tile{ AsIs: e.Symbols#1/9 } Tile{ HalfReuse: >/13 } Tile{ AsIs: )/12 AsIs: e.Tail#1/2 AsIs: >/1 ]] }
    refalrts::reinit_open_call( context[8] );
    refalrts::reinit_name( context[11], NormingSet, "NormingSet" );
    refalrts::reinit_close_call( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[12] );
    refalrts::push_stack( context[13] );
    refalrts::push_stack( context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[12];
    res = refalrts::splice_evar( res, context[13], context[13] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[8], context[11] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & NormalizeContent/4 (/7 e.Chars#1/5 )/8 (/11 # Set/13 s.LineNumber#1/14 e.Name#1/9 )/12 e.Tail#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_left( context[9], context[10], context[2], context[3] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    context[13] = refalrts::ident_left(  & ident_Set<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    // closed e.Chars#1 as range 5
    // closed e.Tail#1 as range 2
    if( ! refalrts::svar_left( context[14], context[9], context[10] ) )
      continue;
    // closed e.Name#1 as range 9

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/11 AsIs: # Set/13 AsIs: s.LineNumber#1/14 AsIs: e.Name#1/9 AsIs: )/12 } Tile{ AsIs: </0 AsIs: & NormalizeContent/4 AsIs: (/7 AsIs: e.Chars#1/5 AsIs: )/8 } Tile{ AsIs: e.Tail#1/2 } Tile{ AsIs: >/1 ]] }
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[0], context[8] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & NormalizeContent/4 (/7 e.Chars#1/5 )/8 >/1
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
}

static refalrts::FnResult SetPartNormalizeOne(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & SetPartNormalizeOne/4 (/7 (/12 e.Name#1/10 )/13 # Any/9 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_right(  & ident_Any<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    context[10] = 0;
    context[11] = 0;
    context[12] = refalrts::brackets_left( context[10], context[11], context[5], context[6] );
    if( ! context[12] )
      continue;
    refalrts::bracket_pointers(context[12], context[13]);
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Name#1 as range 10

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & SetPartNormalizeOne/4 {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: (/12 AsIs: e.Name#1/10 AsIs: )/13 AsIs: # Any/9 AsIs: )/8 } Tile{ ]] }
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[12], context[13] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[7], context[8] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & SetPartNormalizeOne/4 (/7 (/11 e.Name#1/9 )/12 e.Content#1/5 )/8 >/1
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
}

static refalrts::FnResult SetPartNormalize(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & SetPartNormalize/4 e.Sets#1/2 >/1
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
}

static refalrts::FnResult SetCheckRecursion(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 52 elems
  refalrts::Iter context[52];
  refalrts::zeros( context, 52 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & SetCheckRecursion/4 e.Sets_B#1/5 (/9 (/13 e.Name#1/11 )/14 e.Content_B#1/15 (/19 # Set/21 s.LineNumber#1/24 e.Name#1/22 )/20 e.Content_E#1/27 )/10 e.Sets_E#1/25 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    refalrts::start_e_loop();
    do {
      context[25] = context[2];
      context[26] = context[3];
      context[7] = 0;
      context[8] = 0;
      context[9] = refalrts::brackets_left( context[7], context[8], context[25], context[26] );
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
      // closed e.Sets_E#1 as range 2
      context[15] = 0;
      context[16] = 0;
      refalrts::start_e_loop();
      do {
        context[27] = context[7];
        context[28] = context[8];
        context[17] = 0;
        context[18] = 0;
        context[19] = refalrts::brackets_left( context[17], context[18], context[27], context[28] );
        if( ! context[19] )
          continue;
        refalrts::bracket_pointers(context[19], context[20]);
        context[21] = refalrts::ident_left(  & ident_Set<int>::name, context[17], context[18] );
        if( ! context[21] )
          continue;
        if( ! refalrts::repeated_evar_right( context[22], context[23], context[11], context[12], context[17], context[18] ) )
          continue;
        // closed e.Content_E#1 as range 7
        if( ! refalrts::svar_left( context[24], context[17], context[18] ) )
          continue;
        if( ! refalrts::empty_seq( context[17], context[18] ) )
          continue;

        refalrts::reset_allocator();
        //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
        //RESULT: Tile{ [[ } Tile{ HalfReuse: </19 HalfReuse: & WarningAt/21 AsIs: s.LineNumber#1/24 } Tile{ HalfReuse: 'R'/20 } 'e'/29 'c'/30 'u'/31 'r'/32 's'/33 'i'/34 'v'/35 'e'/36 ' '/37 'd'/38 'e'/39 'p'/40 'e'/41 'n'/42 'd'/43 'e'/44 'd'/45 ' '/46 's'/47 'e'/48 't'/49 ' '/50 Tile{ AsIs: e.Name#1/22 } >/51 Tile{ AsIs: </0 AsIs: & SetCheckRecursion/4 AsIs: e.Sets_B#1/5 AsIs: (/9 AsIs: (/13 AsIs: e.Name#1/11 AsIs: )/14 } Tile{ AsIs: e.Content_B#1/15 } Tile{ AsIs: e.Content_E#1/27 } Tile{ AsIs: )/10 AsIs: e.Sets_E#1/25 AsIs: >/1 ]] }
        if( ! refalrts::alloc_char( context[29], 'e' ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_char( context[30], 'c' ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_char( context[31], 'u' ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_char( context[32], 'r' ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_char( context[33], 's' ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_char( context[34], 'i' ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_char( context[35], 'v' ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_char( context[36], 'e' ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_char( context[37], ' ' ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_char( context[38], 'd' ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_char( context[39], 'e' ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_char( context[40], 'p' ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_char( context[41], 'e' ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_char( context[42], 'n' ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_char( context[43], 'd' ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_char( context[44], 'e' ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_char( context[45], 'd' ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_char( context[46], ' ' ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_char( context[47], 's' ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_char( context[48], 'e' ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_char( context[49], 't' ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_char( context[50], ' ' ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_call( context[51] ) )
          return refalrts::cNoMemory;
        refalrts::reinit_open_call( context[19] );
        refalrts::reinit_name( context[21], WarningAt, "WarningAt" );
        refalrts::reinit_char( context[20], 'R' );
        refalrts::push_stack( context[1] );
        refalrts::push_stack( context[0] );
        refalrts::link_brackets( context[9], context[10] );
        refalrts::link_brackets( context[13], context[14] );
        refalrts::push_stack( context[51] );
        refalrts::push_stack( context[19] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[10];
        res = refalrts::splice_evar( res, context[27], context[28] );
        res = refalrts::splice_evar( res, context[15], context[16] );
        res = refalrts::splice_evar( res, context[0], context[14] );
        res = refalrts::splice_evar( res, context[51], context[51] );
        res = refalrts::splice_evar( res, context[22], context[23] );
        res = refalrts::splice_evar( res, context[29], context[50] );
        res = refalrts::splice_evar( res, context[20], context[20] );
        res = refalrts::splice_evar( res, context[19], context[24] );
        refalrts::use( res );
        return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
      } while ( refalrts::open_evar_advance( context[15], context[16], context[7], context[8] ) );
    } while ( refalrts::open_evar_advance( context[5], context[6], context[2], context[3] ) );
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & SetCheckRecursion/4 e.Sets#1/2 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
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
}

static refalrts::FnResult SetSubstitute(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 46 elems
  refalrts::Iter context[46];
  refalrts::zeros( context, 46 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & SetSubstitute/4 e.Sets_B#1/5 (/9 (/13 e.Name#1/11 )/14 e.Content_B#1/15 (/19 # Set/21 t.SrcPos#1/25 'A'/24 'n'/23 'y'/22 )/20 e.Content_E#1/29 )/10 e.Sets_E#1/27 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    refalrts::start_e_loop();
    do {
      context[27] = context[2];
      context[28] = context[3];
      context[7] = 0;
      context[8] = 0;
      context[9] = refalrts::brackets_left( context[7], context[8], context[27], context[28] );
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
      // closed e.Sets_E#1 as range 2
      context[15] = 0;
      context[16] = 0;
      refalrts::start_e_loop();
      do {
        context[29] = context[7];
        context[30] = context[8];
        context[17] = 0;
        context[18] = 0;
        context[19] = refalrts::brackets_left( context[17], context[18], context[29], context[30] );
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
        // closed e.Content_E#1 as range 7
        context[26] = refalrts::tvar_left( context[25], context[17], context[18] );
        if( ! context[26] )
          continue;
        if( ! refalrts::empty_seq( context[17], context[18] ) )
          continue;

        refalrts::reset_allocator();
        //TRASH: {REMOVED TILE}  e.Content_B#1/15 (/19 {REMOVED TILE}  t.SrcPos#1/25 'A'/24 'n'/23 'y'/22 )/20 e.Content_E#1/29 {REMOVED TILE} 
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & ResolvingSets_Aux/4 AsIs: e.Sets_B#1/5 AsIs: (/9 AsIs: (/13 AsIs: e.Name#1/11 AsIs: )/14 } Tile{ Reuse: # Any/21 } Tile{ AsIs: )/10 AsIs: e.Sets_E#1/27 AsIs: >/1 ]] }
        refalrts::update_name( context[4], ResolvingSets_Aux, "ResolvingSets_Aux" );
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
    } while ( refalrts::open_evar_advance( context[5], context[6], context[2], context[3] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & SetSubstitute/4 e.Sets_B#1/5 (/9 (/13 e.Name#1/11 )/14 e.Content_B#1/15 (/19 # Set/21 t.SrcPos#1/22 e.IncName#1/17 )/20 e.Content_E#1/40 )/10 e.Sets_M#1/24 (/28 (/32 e.IncName#1/34 )/33 e.IncContent#1/26 )/29 e.Sets_E#1/42 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    refalrts::start_e_loop();
    do {
      context[36] = context[2];
      context[37] = context[3];
      context[7] = 0;
      context[8] = 0;
      context[9] = refalrts::brackets_left( context[7], context[8], context[36], context[37] );
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
        context[38] = context[36];
        context[39] = context[37];
        context[40] = context[7];
        context[41] = context[8];
        context[17] = 0;
        context[18] = 0;
        context[19] = refalrts::brackets_left( context[17], context[18], context[40], context[41] );
        if( ! context[19] )
          continue;
        refalrts::bracket_pointers(context[19], context[20]);
        context[21] = refalrts::ident_left(  & ident_Set<int>::name, context[17], context[18] );
        if( ! context[21] )
          continue;
        // closed e.Content_E#1 as range 7
        context[23] = refalrts::tvar_left( context[22], context[17], context[18] );
        if( ! context[23] )
          continue;
        // closed e.IncName#1 as range 17
        context[24] = 0;
        context[25] = 0;
        refalrts::start_e_loop();
        do {
          context[42] = context[38];
          context[43] = context[39];
          context[26] = 0;
          context[27] = 0;
          context[28] = refalrts::brackets_left( context[26], context[27], context[42], context[43] );
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
          // closed e.Sets_E#1 as range 2

          refalrts::reset_allocator();
          //TRASH: {REMOVED TILE}  {REMOVED TILE}  (/19 # Set/21 t.SrcPos#1/22 e.IncName#1/17 )/20 {REMOVED TILE}  {REMOVED TILE} 
          //RESULT: Tile{ [[ AsIs: </0 Reuse: & ResolvingSets_Aux/4 AsIs: e.Sets_B#1/5 AsIs: (/9 AsIs: (/13 AsIs: e.Name#1/11 AsIs: )/14 } Tile{ AsIs: e.Content_B#1/15 } e.IncContent#1/26/44 Tile{ AsIs: e.Content_E#1/40 } Tile{ AsIs: )/10 AsIs: e.Sets_M#1/24 AsIs: (/28 AsIs: (/32 AsIs: e.IncName#1/34 AsIs: )/33 AsIs: e.IncContent#1/26 AsIs: )/29 AsIs: e.Sets_E#1/42 AsIs: >/1 ]] }
          if (! refalrts::copy_evar(context[44], context[45], context[26], context[27]))
            return refalrts::cNoMemory;
          refalrts::update_name( context[4], ResolvingSets_Aux, "ResolvingSets_Aux" );
          refalrts::push_stack( context[1] );
          refalrts::push_stack( context[0] );
          refalrts::link_brackets( context[28], context[29] );
          refalrts::link_brackets( context[32], context[33] );
          refalrts::link_brackets( context[9], context[10] );
          refalrts::link_brackets( context[13], context[14] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[10];
          res = refalrts::splice_evar( res, context[40], context[41] );
          res = refalrts::splice_evar( res, context[44], context[45] );
          res = refalrts::splice_evar( res, context[15], context[16] );
          refalrts::use( res );
          refalrts::splice_to_freelist_open( context[14], res );
          return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
        } while ( refalrts::open_evar_advance( context[24], context[25], context[38], context[39] ) );
      } while ( refalrts::open_evar_advance( context[15], context[16], context[7], context[8] ) );
    } while ( refalrts::open_evar_advance( context[5], context[6], context[2], context[3] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & SetSubstitute/4 e.Sets_B#1/5 (/9 (/13 e.IncName#1/11 )/14 e.IncContent#1/7 )/10 e.Sets_M#1/15 (/19 (/23 e.Name#1/21 )/24 e.Content_B#1/25 (/29 # Set/31 t.SrcPos#1/34 e.IncName#1/32 )/30 e.Content_E#1/40 )/20 e.Sets_E#1/38 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    refalrts::start_e_loop();
    do {
      context[36] = context[2];
      context[37] = context[3];
      context[7] = 0;
      context[8] = 0;
      context[9] = refalrts::brackets_left( context[7], context[8], context[36], context[37] );
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
        context[38] = context[36];
        context[39] = context[37];
        context[17] = 0;
        context[18] = 0;
        context[19] = refalrts::brackets_left( context[17], context[18], context[38], context[39] );
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
        // closed e.Sets_E#1 as range 2
        context[25] = 0;
        context[26] = 0;
        refalrts::start_e_loop();
        do {
          context[40] = context[17];
          context[41] = context[18];
          context[27] = 0;
          context[28] = 0;
          context[29] = refalrts::brackets_left( context[27], context[28], context[40], context[41] );
          if( ! context[29] )
            continue;
          refalrts::bracket_pointers(context[29], context[30]);
          context[31] = refalrts::ident_left(  & ident_Set<int>::name, context[27], context[28] );
          if( ! context[31] )
            continue;
          if( ! refalrts::repeated_evar_right( context[32], context[33], context[11], context[12], context[27], context[28] ) )
            continue;
          // closed e.Content_E#1 as range 17
          context[35] = refalrts::tvar_left( context[34], context[27], context[28] );
          if( ! context[35] )
            continue;
          if( ! refalrts::empty_seq( context[27], context[28] ) )
            continue;

          refalrts::reset_allocator();
          //TRASH: {REMOVED TILE}  {REMOVED TILE}  (/29 # Set/31 t.SrcPos#1/34 e.IncName#1/32 )/30 {REMOVED TILE}  {REMOVED TILE} 
          //RESULT: Tile{ [[ AsIs: </0 Reuse: & ResolvingSets_Aux/4 AsIs: e.Sets_B#1/5 AsIs: (/9 AsIs: (/13 AsIs: e.IncName#1/11 AsIs: )/14 AsIs: e.IncContent#1/7 AsIs: )/10 AsIs: e.Sets_M#1/15 AsIs: (/19 AsIs: (/23 AsIs: e.Name#1/21 AsIs: )/24 } Tile{ AsIs: e.Content_B#1/25 } e.IncContent#1/7/42 Tile{ AsIs: e.Content_E#1/40 } Tile{ AsIs: )/20 AsIs: e.Sets_E#1/38 AsIs: >/1 ]] }
          if (! refalrts::copy_evar(context[42], context[43], context[7], context[8]))
            return refalrts::cNoMemory;
          refalrts::update_name( context[4], ResolvingSets_Aux, "ResolvingSets_Aux" );
          refalrts::push_stack( context[1] );
          refalrts::push_stack( context[0] );
          refalrts::link_brackets( context[19], context[20] );
          refalrts::link_brackets( context[23], context[24] );
          refalrts::link_brackets( context[9], context[10] );
          refalrts::link_brackets( context[13], context[14] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[20];
          res = refalrts::splice_evar( res, context[40], context[41] );
          res = refalrts::splice_evar( res, context[42], context[43] );
          res = refalrts::splice_evar( res, context[25], context[26] );
          refalrts::use( res );
          refalrts::splice_to_freelist_open( context[24], res );
          return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
        } while ( refalrts::open_evar_advance( context[25], context[26], context[17], context[18] ) );
      } while ( refalrts::open_evar_advance( context[15], context[16], context[36], context[37] ) );
    } while ( refalrts::open_evar_advance( context[5], context[6], context[2], context[3] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & SetSubstitute/4 e.Sets_B#1/5 (/9 (/13 e.Name#1/11 )/14 e.Content_B#1/15 (/19 # Set/21 s.LineNumber#1/22 e.IncName#1/17 )/20 e.Content_E#1/25 )/10 e.Sets_E#1/23 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    refalrts::start_e_loop();
    do {
      context[23] = context[2];
      context[24] = context[3];
      context[7] = 0;
      context[8] = 0;
      context[9] = refalrts::brackets_left( context[7], context[8], context[23], context[24] );
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
      // closed e.Sets_E#1 as range 2
      context[15] = 0;
      context[16] = 0;
      refalrts::start_e_loop();
      do {
        context[25] = context[7];
        context[26] = context[8];
        context[17] = 0;
        context[18] = 0;
        context[19] = refalrts::brackets_left( context[17], context[18], context[25], context[26] );
        if( ! context[19] )
          continue;
        refalrts::bracket_pointers(context[19], context[20]);
        context[21] = refalrts::ident_left(  & ident_Set<int>::name, context[17], context[18] );
        if( ! context[21] )
          continue;
        // closed e.Content_E#1 as range 7
        if( ! refalrts::svar_left( context[22], context[17], context[18] ) )
          continue;
        // closed e.IncName#1 as range 17

        refalrts::reset_allocator();
        //TRASH: {REMOVED TILE}  e.Sets_B#1/5 {REMOVED TILE}  e.Name#1/11 {REMOVED TILE}  e.Content_B#1/15 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  e.Content_E#1/25 {REMOVED TILE}  e.Sets_E#1/23 {REMOVED TILE} 
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & ErrorAt/4 } Tile{ AsIs: s.LineNumber#1/22 } Tile{ HalfReuse: 's'/9 HalfReuse: 'e'/13 } Tile{ HalfReuse: 't'/19 HalfReuse: ' '/21 } Tile{ AsIs: e.IncName#1/17 } Tile{ HalfReuse: ' '/14 } Tile{ HalfReuse: 'n'/20 } Tile{ HalfReuse: 'o'/10 } 't'/27 ' '/28 'd'/29 'e'/30 'f'/31 'i'/32 'n'/33 'e'/34 'd'/35 Tile{ AsIs: >/1 ]] }
        if( ! refalrts::alloc_char( context[27], 't' ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_char( context[28], ' ' ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_char( context[29], 'd' ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_char( context[30], 'e' ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_char( context[31], 'f' ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_char( context[32], 'i' ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_char( context[33], 'n' ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_char( context[34], 'e' ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_char( context[35], 'd' ) )
          return refalrts::cNoMemory;
        refalrts::update_name( context[4], ErrorAt, "ErrorAt" );
        refalrts::reinit_char( context[9], 's' );
        refalrts::reinit_char( context[13], 'e' );
        refalrts::reinit_char( context[19], 't' );
        refalrts::reinit_char( context[21], ' ' );
        refalrts::reinit_char( context[14], ' ' );
        refalrts::reinit_char( context[20], 'n' );
        refalrts::reinit_char( context[10], 'o' );
        refalrts::push_stack( context[1] );
        refalrts::push_stack( context[0] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[27], context[35] );
        res = refalrts::splice_evar( res, context[10], context[10] );
        res = refalrts::splice_evar( res, context[20], context[20] );
        res = refalrts::splice_evar( res, context[14], context[14] );
        res = refalrts::splice_evar( res, context[17], context[18] );
        res = refalrts::splice_evar( res, context[19], context[21] );
        res = refalrts::splice_evar( res, context[9], context[13] );
        res = refalrts::splice_evar( res, context[22], context[22] );
        refalrts::use( res );
        refalrts::splice_to_freelist_open( context[4], res );
        return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
      } while ( refalrts::open_evar_advance( context[15], context[16], context[7], context[8] ) );
    } while ( refalrts::open_evar_advance( context[5], context[6], context[2], context[3] ) );
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & SetSubstitute/4 e.Sets#1/2 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
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
}

static refalrts::FnResult SimplifySet(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & SimplifySet/4 (/7 (/12 e.Name#1/10 )/13 # Any/9 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_right(  & ident_Any<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    context[10] = 0;
    context[11] = 0;
    context[12] = refalrts::brackets_left( context[10], context[11], context[5], context[6] );
    if( ! context[12] )
      continue;
    refalrts::bracket_pointers(context[12], context[13]);
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Name#1 as range 10

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & SimplifySet/4 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: (/12 AsIs: e.Name#1/10 AsIs: )/13 Reuse: # NotUsed/9 HalfReuse: # Any/8 HalfReuse: )/1 ]] }
    refalrts::update_ident( context[9], & ident_NotUsed<int>::name );
    refalrts::reinit_ident( context[8], & ident_Any<int>::name );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[7], context[1] );
    refalrts::link_brackets( context[12], context[13] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[7];
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & SimplifySet/4 (/7 (/11 e.Name#1/9 )/12 (/15 # Chars/17 e.Content#1/13 )/16 )/8 >/1
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
  context[17] = refalrts::ident_left(  & ident_Chars<int>::name, context[13], context[14] );
  if( ! context[17] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Name#1 as range 9
  // closed e.Content#1 as range 13

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  </0 & SimplifySet/4 {REMOVED TILE}  )/8 >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: (/11 AsIs: e.Name#1/9 AsIs: )/12 HalfReuse: # NotUsed/15 AsIs: # Chars/17 AsIs: e.Content#1/13 AsIs: )/16 } Tile{ ]] }
  refalrts::reinit_ident( context[15], & ident_NotUsed<int>::name );
  refalrts::link_brackets( context[7], context[16] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[16] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult GenerateAutomat(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & GenerateAutomat/4 (/7 e.Sets#1/5 )/8 (/11 e.Rules#1/9 )/12 >/1
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
}

static refalrts::FnResult SubstituteSetsToRules(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 59 elems
  refalrts::Iter context[59];
  refalrts::zeros( context, 59 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & SubstituteSetsToRules/4 (/7 (/11 (/15 e.Name#1/13 )/16 s.Used#1/21 # Chars/22 e.Content#1/9 )/12 e.Sets#1/5 )/8 (/19 e.Rules_B#1/23 (/27 (/31 e.RuleName#1/29 )/32 e.Alternatives_B#1/33 (/37 (/41 # Set/43 t.SrcPos#1/46 e.Name#1/44 )/42 t.Flush#1/48 t.NextState#1/50 )/38 e.Alternatives_E#1/54 )/28 e.Rules_E#1/52 )/20 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_left( context[9], context[10], context[5], context[6] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    context[13] = 0;
    context[14] = 0;
    context[15] = refalrts::brackets_left( context[13], context[14], context[9], context[10] );
    if( ! context[15] )
      continue;
    refalrts::bracket_pointers(context[15], context[16]);
    context[17] = 0;
    context[18] = 0;
    context[19] = refalrts::brackets_left( context[17], context[18], context[2], context[3] );
    if( ! context[19] )
      continue;
    refalrts::bracket_pointers(context[19], context[20]);
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Name#1 as range 13
    // closed e.Sets#1 as range 5
    if( ! refalrts::svar_left( context[21], context[9], context[10] ) )
      continue;
    context[22] = refalrts::ident_left(  & ident_Chars<int>::name, context[9], context[10] );
    if( ! context[22] )
      continue;
    // closed e.Content#1 as range 9
    context[23] = 0;
    context[24] = 0;
    refalrts::start_e_loop();
    do {
      context[52] = context[17];
      context[53] = context[18];
      context[25] = 0;
      context[26] = 0;
      context[27] = refalrts::brackets_left( context[25], context[26], context[52], context[53] );
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
      // closed e.Rules_E#1 as range 17
      context[33] = 0;
      context[34] = 0;
      refalrts::start_e_loop();
      do {
        context[54] = context[25];
        context[55] = context[26];
        context[35] = 0;
        context[36] = 0;
        context[37] = refalrts::brackets_left( context[35], context[36], context[54], context[55] );
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
        if( ! refalrts::repeated_evar_right( context[44], context[45], context[13], context[14], context[39], context[40] ) )
          continue;
        // closed e.Alternatives_E#1 as range 25
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
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & SubstituteSetsToRules/4 AsIs: (/7 AsIs: (/11 AsIs: (/15 AsIs: e.Name#1/13 AsIs: )/16 } # Used/56 Tile{ AsIs: # Chars/22 AsIs: e.Content#1/9 AsIs: )/12 AsIs: e.Sets#1/5 AsIs: )/8 AsIs: (/19 AsIs: e.Rules_B#1/23 AsIs: (/27 AsIs: (/31 AsIs: e.RuleName#1/29 AsIs: )/32 AsIs: e.Alternatives_B#1/33 AsIs: (/37 AsIs: (/41 Reuse: # Chars/43 } e.Content#1/9/57 Tile{ AsIs: )/42 AsIs: t.Flush#1/48 AsIs: t.NextState#1/50 AsIs: )/38 AsIs: e.Alternatives_E#1/54 AsIs: )/28 AsIs: e.Rules_E#1/52 AsIs: )/20 AsIs: >/1 ]] }
        if( ! refalrts::alloc_ident( context[56], & ident_Used<int>::name ) )
          return refalrts::cNoMemory;
        if (! refalrts::copy_evar(context[57], context[58], context[9], context[10]))
          return refalrts::cNoMemory;
        refalrts::update_ident( context[43], & ident_Chars<int>::name );
        refalrts::push_stack( context[1] );
        refalrts::push_stack( context[0] );
        refalrts::link_brackets( context[19], context[20] );
        refalrts::link_brackets( context[27], context[28] );
        refalrts::link_brackets( context[37], context[38] );
        refalrts::link_brackets( context[41], context[42] );
        refalrts::link_brackets( context[31], context[32] );
        refalrts::link_brackets( context[7], context[8] );
        refalrts::link_brackets( context[11], context[12] );
        refalrts::link_brackets( context[15], context[16] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[42];
        res = refalrts::splice_evar( res, context[57], context[58] );
        res = refalrts::splice_evar( res, context[22], context[43] );
        res = refalrts::splice_evar( res, context[56], context[56] );
        refalrts::use( res );
        refalrts::splice_to_freelist_open( context[16], res );
        return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
      } while ( refalrts::open_evar_advance( context[33], context[34], context[25], context[26] ) );
    } while ( refalrts::open_evar_advance( context[23], context[24], context[17], context[18] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & SubstituteSetsToRules/4 (/7 (/11 (/16 e.Name#1/14 )/17 s.Used#1/22 # Any/13 )/12 e.Sets#1/5 )/8 (/20 e.Rules_B#1/23 (/27 (/31 e.RuleName#1/29 )/32 e.Alternatives_B#1/33 (/37 (/41 # Set/43 t.SrcPos#1/46 e.Name#1/44 )/42 t.Flush#1/48 t.NextState#1/50 )/38 e.Alternatives_E#1/54 )/28 e.Rules_E#1/52 )/21 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_left( context[9], context[10], context[5], context[6] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    context[13] = refalrts::ident_right(  & ident_Any<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    context[14] = 0;
    context[15] = 0;
    context[16] = refalrts::brackets_left( context[14], context[15], context[9], context[10] );
    if( ! context[16] )
      continue;
    refalrts::bracket_pointers(context[16], context[17]);
    context[18] = 0;
    context[19] = 0;
    context[20] = refalrts::brackets_left( context[18], context[19], context[2], context[3] );
    if( ! context[20] )
      continue;
    refalrts::bracket_pointers(context[20], context[21]);
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Name#1 as range 14
    // closed e.Sets#1 as range 5
    if( ! refalrts::svar_left( context[22], context[9], context[10] ) )
      continue;
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;
    context[23] = 0;
    context[24] = 0;
    refalrts::start_e_loop();
    do {
      context[52] = context[18];
      context[53] = context[19];
      context[25] = 0;
      context[26] = 0;
      context[27] = refalrts::brackets_left( context[25], context[26], context[52], context[53] );
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
      // closed e.Rules_E#1 as range 18
      context[33] = 0;
      context[34] = 0;
      refalrts::start_e_loop();
      do {
        context[54] = context[25];
        context[55] = context[26];
        context[35] = 0;
        context[36] = 0;
        context[37] = refalrts::brackets_left( context[35], context[36], context[54], context[55] );
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
        if( ! refalrts::repeated_evar_right( context[44], context[45], context[14], context[15], context[39], context[40] ) )
          continue;
        // closed e.Alternatives_E#1 as range 25
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
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & SubstituteSetsToRules/4 AsIs: (/7 AsIs: (/11 AsIs: (/16 AsIs: e.Name#1/14 AsIs: )/17 AsIs: s.Used#1/22 AsIs: # Any/13 AsIs: )/12 AsIs: e.Sets#1/5 AsIs: )/8 AsIs: (/20 AsIs: e.Rules_B#1/23 AsIs: (/27 AsIs: (/31 AsIs: e.RuleName#1/29 AsIs: )/32 AsIs: e.Alternatives_B#1/33 AsIs: (/37 HalfReuse: # Any/41 } Tile{ AsIs: t.Flush#1/48 AsIs: t.NextState#1/50 AsIs: )/38 AsIs: e.Alternatives_E#1/54 AsIs: )/28 AsIs: e.Rules_E#1/52 AsIs: )/21 AsIs: >/1 ]] }
        refalrts::reinit_ident( context[41], & ident_Any<int>::name );
        refalrts::push_stack( context[1] );
        refalrts::push_stack( context[0] );
        refalrts::link_brackets( context[20], context[21] );
        refalrts::link_brackets( context[27], context[28] );
        refalrts::link_brackets( context[37], context[38] );
        refalrts::link_brackets( context[31], context[32] );
        refalrts::link_brackets( context[7], context[8] );
        refalrts::link_brackets( context[11], context[12] );
        refalrts::link_brackets( context[16], context[17] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[48];
        refalrts::use( res );
        refalrts::splice_to_freelist_open( context[41], res );
        return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
      } while ( refalrts::open_evar_advance( context[33], context[34], context[25], context[26] ) );
    } while ( refalrts::open_evar_advance( context[23], context[24], context[18], context[19] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & SubstituteSetsToRules/4 (/7 (/11 (/15 e.Name#1/13 )/16 # NotUsed/17 e.Content#1/9 )/12 e.Sets#1/5 )/8 (/20 e.Rules#1/18 )/21 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_left( context[9], context[10], context[5], context[6] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    context[13] = 0;
    context[14] = 0;
    context[15] = refalrts::brackets_left( context[13], context[14], context[9], context[10] );
    if( ! context[15] )
      continue;
    refalrts::bracket_pointers(context[15], context[16]);
    context[17] = refalrts::ident_left(  & ident_NotUsed<int>::name, context[9], context[10] );
    if( ! context[17] )
      continue;
    context[18] = 0;
    context[19] = 0;
    context[20] = refalrts::brackets_left( context[18], context[19], context[2], context[3] );
    if( ! context[20] )
      continue;
    refalrts::bracket_pointers(context[20], context[21]);
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Name#1 as range 13
    // closed e.Content#1 as range 9
    // closed e.Sets#1 as range 5
    // closed e.Rules#1 as range 18

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  (/7 (/11 (/15 e.Name#1/13 )/16 # NotUsed/17 e.Content#1/9 {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SubstituteSetsToRules/4 } Tile{ HalfReuse: (/12 AsIs: e.Sets#1/5 AsIs: )/8 AsIs: (/20 AsIs: e.Rules#1/18 AsIs: )/21 AsIs: >/1 ]] }
    refalrts::reinit_open_bracket( context[12] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[20], context[21] );
    refalrts::link_brackets( context[12], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[12];
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & SubstituteSetsToRules/4 (/7 (/11 (/15 e.Name#1/13 )/16 # Used/17 e.Content#1/9 )/12 e.Sets#1/5 )/8 (/20 e.Rules#1/18 )/21 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_left( context[9], context[10], context[5], context[6] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    context[13] = 0;
    context[14] = 0;
    context[15] = refalrts::brackets_left( context[13], context[14], context[9], context[10] );
    if( ! context[15] )
      continue;
    refalrts::bracket_pointers(context[15], context[16]);
    context[17] = refalrts::ident_left(  & ident_Used<int>::name, context[9], context[10] );
    if( ! context[17] )
      continue;
    context[18] = 0;
    context[19] = 0;
    context[20] = refalrts::brackets_left( context[18], context[19], context[2], context[3] );
    if( ! context[20] )
      continue;
    refalrts::bracket_pointers(context[20], context[21]);
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Name#1 as range 13
    // closed e.Content#1 as range 9
    // closed e.Sets#1 as range 5
    // closed e.Rules#1 as range 18

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  (/7 (/11 (/15 e.Name#1/13 )/16 # Used/17 e.Content#1/9 {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SubstituteSetsToRules/4 } Tile{ HalfReuse: (/12 AsIs: e.Sets#1/5 AsIs: )/8 AsIs: (/20 AsIs: e.Rules#1/18 AsIs: )/21 AsIs: >/1 ]] }
    refalrts::reinit_open_bracket( context[12] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[20], context[21] );
    refalrts::link_brackets( context[12], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[12];
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & SubstituteSetsToRules/4 (/7 )/8 (/11 e.Rules_B#1/13 (/17 (/21 e.RuleName#1/19 )/22 e.Alternatives_B#1/23 (/27 (/31 # Set/33 t.SrcPos#1/37 'A'/36 'n'/35 'y'/34 )/32 t.Flush#1/39 t.NextState#1/41 )/28 e.Alternatives_E#1/45 )/18 e.Rules_E#1/43 )/12 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_left( context[9], context[10], context[2], context[3] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    context[13] = 0;
    context[14] = 0;
    refalrts::start_e_loop();
    do {
      context[43] = context[9];
      context[44] = context[10];
      context[15] = 0;
      context[16] = 0;
      context[17] = refalrts::brackets_left( context[15], context[16], context[43], context[44] );
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
      // closed e.Rules_E#1 as range 9
      context[23] = 0;
      context[24] = 0;
      refalrts::start_e_loop();
      do {
        context[45] = context[15];
        context[46] = context[16];
        context[25] = 0;
        context[26] = 0;
        context[27] = refalrts::brackets_left( context[25], context[26], context[45], context[46] );
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
        // closed e.Alternatives_E#1 as range 15
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
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & SubstituteSetsToRules/4 AsIs: (/7 AsIs: )/8 AsIs: (/11 AsIs: e.Rules_B#1/13 AsIs: (/17 AsIs: (/21 AsIs: e.RuleName#1/19 AsIs: )/22 AsIs: e.Alternatives_B#1/23 AsIs: (/27 HalfReuse: # Any/31 } Tile{ AsIs: t.Flush#1/39 AsIs: t.NextState#1/41 AsIs: )/28 AsIs: e.Alternatives_E#1/45 AsIs: )/18 AsIs: e.Rules_E#1/43 AsIs: )/12 AsIs: >/1 ]] }
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
    } while ( refalrts::open_evar_advance( context[13], context[14], context[9], context[10] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & SubstituteSetsToRules/4 (/7 )/8 (/11 e.Rules_B#1/13 (/17 (/21 e.RuleName#1/19 )/22 e.Alternatives_B#1/23 (/27 (/31 # Set/33 s.LineNumber#1/34 e.Name#1/29 )/32 t.Flush#1/35 t.NextState#1/37 )/28 e.Alternatives_E#1/41 )/18 e.Rules_E#1/39 )/12 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_left( context[9], context[10], context[2], context[3] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    context[13] = 0;
    context[14] = 0;
    refalrts::start_e_loop();
    do {
      context[39] = context[9];
      context[40] = context[10];
      context[15] = 0;
      context[16] = 0;
      context[17] = refalrts::brackets_left( context[15], context[16], context[39], context[40] );
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
      // closed e.Rules_E#1 as range 9
      context[23] = 0;
      context[24] = 0;
      refalrts::start_e_loop();
      do {
        context[41] = context[15];
        context[42] = context[16];
        context[25] = 0;
        context[26] = 0;
        context[27] = refalrts::brackets_left( context[25], context[26], context[41], context[42] );
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
        // closed e.Alternatives_E#1 as range 15
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
        //TRASH: {REMOVED TILE}  e.Rules_B#1/13 {REMOVED TILE}  e.RuleName#1/19 {REMOVED TILE}  e.Alternatives_B#1/23 {REMOVED TILE}  s.LineNumber#1/34 {REMOVED TILE}  {REMOVED TILE}  t.Flush#1/35 t.NextState#1/37 {REMOVED TILE}  e.Alternatives_E#1/41 {REMOVED TILE}  e.Rules_E#1/39 {REMOVED TILE}  {REMOVED TILE} 
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & ErrorAt/4 HalfReuse: s.LineNumber1 #34/7 HalfReuse: 'U'/8 HalfReuse: 'n'/11 } Tile{ HalfReuse: 'd'/27 HalfReuse: 'e'/31 HalfReuse: 'c'/33 } Tile{ HalfReuse: 'l'/17 HalfReuse: 'a'/21 } Tile{ HalfReuse: 'r'/22 } Tile{ HalfReuse: 'e'/32 } Tile{ HalfReuse: 'd'/28 } Tile{ HalfReuse: ' '/18 } Tile{ HalfReuse: 's'/12 } 'e'/43 't'/44 ' '/45 Tile{ AsIs: e.Name#1/29 } Tile{ AsIs: >/1 ]] }
        if( ! refalrts::alloc_char( context[43], 'e' ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_char( context[44], 't' ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_char( context[45], ' ' ) )
          return refalrts::cNoMemory;
        refalrts::update_name( context[4], ErrorAt, "ErrorAt" );
        refalrts::reinit_svar( context[7], context[34] );
        refalrts::reinit_char( context[8], 'U' );
        refalrts::reinit_char( context[11], 'n' );
        refalrts::reinit_char( context[27], 'd' );
        refalrts::reinit_char( context[31], 'e' );
        refalrts::reinit_char( context[33], 'c' );
        refalrts::reinit_char( context[17], 'l' );
        refalrts::reinit_char( context[21], 'a' );
        refalrts::reinit_char( context[22], 'r' );
        refalrts::reinit_char( context[32], 'e' );
        refalrts::reinit_char( context[28], 'd' );
        refalrts::reinit_char( context[18], ' ' );
        refalrts::reinit_char( context[12], 's' );
        refalrts::push_stack( context[1] );
        refalrts::push_stack( context[0] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[29], context[30] );
        res = refalrts::splice_evar( res, context[43], context[45] );
        res = refalrts::splice_evar( res, context[12], context[12] );
        res = refalrts::splice_evar( res, context[18], context[18] );
        res = refalrts::splice_evar( res, context[28], context[28] );
        res = refalrts::splice_evar( res, context[32], context[32] );
        res = refalrts::splice_evar( res, context[22], context[22] );
        res = refalrts::splice_evar( res, context[17], context[21] );
        res = refalrts::splice_evar( res, context[27], context[33] );
        refalrts::use( res );
        refalrts::splice_to_freelist_open( context[11], res );
        return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
      } while ( refalrts::open_evar_advance( context[23], context[24], context[15], context[16] ) );
    } while ( refalrts::open_evar_advance( context[13], context[14], context[9], context[10] ) );
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & SubstituteSetsToRules/4 (/7 )/8 (/11 e.Rules#1/9 )/12 >/1
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
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
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
}

static refalrts::FnResult GenerateSentences(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & GenerateSentences/4 e.Rules#1/2 >/1
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
}

static refalrts::FnResult SetDiff(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 25 elems
  refalrts::Iter context[25];
  refalrts::zeros( context, 25 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & SetDiff/4 (/7 e.Set#1/5 )/8 (/11 # Any/13 )/12 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_left( context[9], context[10], context[2], context[3] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    context[13] = refalrts::ident_left(  & ident_Any<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
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
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & SetDiff/4 (/7 e.Set1_B#1/13 s.Common#1/15 e.Set1_E#1/19 )/8 (/11 e.Set2_B#1/16 s.Common#1/18 e.Set2_E#1/23 )/12 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_left( context[9], context[10], context[2], context[3] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    context[13] = 0;
    context[14] = 0;
    refalrts::start_e_loop();
    do {
      context[19] = context[5];
      context[20] = context[6];
      context[21] = context[9];
      context[22] = context[10];
      if( ! refalrts::svar_left( context[15], context[19], context[20] ) )
        continue;
      // closed e.Set1_E#1 as range 5
      context[16] = 0;
      context[17] = 0;
      refalrts::start_e_loop();
      do {
        context[23] = context[21];
        context[24] = context[22];
        if( ! refalrts::repeated_stvar_left( context[18], context[15], context[23], context[24] ) )
          continue;
        // closed e.Set2_E#1 as range 9

        refalrts::reset_allocator();
        //TRASH: {REMOVED TILE}  {REMOVED TILE}  s.Common#1/15 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  s.Common#1/18 {REMOVED TILE}  {REMOVED TILE} 
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetDiff/4 AsIs: (/7 } Tile{ AsIs: e.Set1_B#1/13 } Tile{ AsIs: e.Set1_E#1/19 } Tile{ AsIs: )/8 AsIs: (/11 } Tile{ AsIs: e.Set2_B#1/16 } Tile{ AsIs: e.Set2_E#1/23 } Tile{ AsIs: )/12 AsIs: >/1 ]] }
        refalrts::push_stack( context[1] );
        refalrts::push_stack( context[0] );
        refalrts::link_brackets( context[11], context[12] );
        refalrts::link_brackets( context[7], context[8] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[12];
        res = refalrts::splice_evar( res, context[23], context[24] );
        res = refalrts::splice_evar( res, context[16], context[17] );
        res = refalrts::splice_evar( res, context[8], context[11] );
        res = refalrts::splice_evar( res, context[19], context[20] );
        res = refalrts::splice_evar( res, context[13], context[14] );
        refalrts::use( res );
        refalrts::splice_to_freelist_open( context[7], res );
        return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
      } while ( refalrts::open_evar_advance( context[16], context[17], context[21], context[22] ) );
    } while ( refalrts::open_evar_advance( context[13], context[14], context[5], context[6] ) );
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & SetDiff/4 (/7 e.SetDiff#1/5 )/8 (/11 e.Set2#1/9 )/12 >/1
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
}

static refalrts::FnResult NormalizeAlternative(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 32 elems
  refalrts::Iter context[32];
  refalrts::zeros( context, 32 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & NormalizeAlternative/4 (/7 e.Diff#1/5 )/8 (/11 (/15 # Chars/17 e.Alternative#1/13 )/16 t.Flush#1/18 t.Next#1/20 )/12 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_left( context[9], context[10], context[2], context[3] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    context[13] = 0;
    context[14] = 0;
    context[15] = refalrts::brackets_left( context[13], context[14], context[9], context[10] );
    if( ! context[15] )
      continue;
    refalrts::bracket_pointers(context[15], context[16]);
    context[17] = refalrts::ident_left(  & ident_Chars<int>::name, context[13], context[14] );
    if( ! context[17] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Diff#1 as range 5
    // closed e.Alternative#1 as range 13
    context[19] = refalrts::tvar_left( context[18], context[9], context[10] );
    if( ! context[19] )
      continue;
    context[21] = refalrts::tvar_left( context[20], context[9], context[10] );
    if( ! context[21] )
      continue;
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ HalfReuse: </17 } & NormingSet/22 e.Diff#1/5/23 Tile{ AsIs: e.Alternative#1/13 } Tile{ AsIs: >/1 } Tile{ AsIs: )/16 } (/25 (/26 </27 & SetDiff/28 (/29 e.Alternative#1/13/30 Tile{ HalfReuse: )/4 AsIs: (/7 AsIs: e.Diff#1/5 AsIs: )/8 HalfReuse: >/11 HalfReuse: )/15 } Tile{ AsIs: t.Flush#1/18 AsIs: t.Next#1/20 AsIs: )/12 } Tile{ ]] }
    if( ! refalrts::alloc_name( context[22], NormingSet, "NormingSet" ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[23], context[24], context[5], context[6]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[25] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[26] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[27] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[28], SetDiff, "SetDiff" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[29] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[30], context[31], context[13], context[14]))
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_open_call( context[17] );
    refalrts::reinit_close_bracket( context[4] );
    refalrts::reinit_close_call( context[11] );
    refalrts::reinit_close_bracket( context[15] );
    refalrts::link_brackets( context[25], context[12] );
    refalrts::link_brackets( context[26], context[15] );
    refalrts::push_stack( context[11] );
    refalrts::push_stack( context[27] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[29], context[4] );
    refalrts::link_brackets( context[0], context[16] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[17] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[18], context[12] );
    res = refalrts::splice_evar( res, context[4], context[15] );
    res = refalrts::splice_evar( res, context[30], context[31] );
    res = refalrts::splice_evar( res, context[25], context[29] );
    res = refalrts::splice_evar( res, context[16], context[16] );
    res = refalrts::splice_evar( res, context[1], context[1] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[23], context[24] );
    res = refalrts::splice_evar( res, context[22], context[22] );
    res = refalrts::splice_evar( res, context[17], context[17] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & NormalizeAlternative/4 (/7 e.Diff#1/5 )/8 (/11 # Any/13 t.Flush#1/14 t.Next#1/16 )/12 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_left( context[9], context[10], context[2], context[3] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    context[13] = refalrts::ident_left(  & ident_Any<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Diff#1 as range 5
    context[15] = refalrts::tvar_left( context[14], context[9], context[10] );
    if( ! context[15] )
      continue;
    context[17] = refalrts::tvar_left( context[16], context[9], context[10] );
    if( ! context[17] )
      continue;
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  (/7 e.Diff#1/5 {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # Any/4 } Tile{ AsIs: )/8 AsIs: (/11 AsIs: # Any/13 AsIs: t.Flush#1/14 AsIs: t.Next#1/16 AsIs: )/12 } Tile{ ]] }
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

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & NormalizeAlternative/4 (/7 e.Diff#1/5 )/8 (/11 # Empty/13 t.Flush#1/14 t.Next#1/16 )/12 >/1
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
  context[13] = refalrts::ident_left(  & ident_Empty<int>::name, context[9], context[10] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Diff#1 as range 5
  context[15] = refalrts::tvar_left( context[14], context[9], context[10] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  context[17] = refalrts::tvar_left( context[16], context[9], context[10] );
  if( ! context[17] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[9], context[10] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  </0 & NormalizeAlternative/4 {REMOVED TILE}  >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Diff#1/5 AsIs: )/8 AsIs: (/11 AsIs: # Empty/13 AsIs: t.Flush#1/14 AsIs: t.Next#1/16 AsIs: )/12 } Tile{ ]] }
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[12] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult SplitAlternatives(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 24 elems
  refalrts::Iter context[24];
  refalrts::zeros( context, 24 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & SplitAlternatives/4 (/7 # Empty/9 t.Flush#1/10 t.Next#1/12 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_Empty<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    context[11] = refalrts::tvar_left( context[10], context[5], context[6] );
    if( ! context[11] )
      continue;
    context[13] = refalrts::tvar_left( context[12], context[5], context[6] );
    if( ! context[13] )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & SplitAlternatives/4 {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # Empty/9 AsIs: t.Flush#1/10 AsIs: t.Next#1/12 AsIs: )/8 } Tile{ ]] }
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
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & SplitAlternatives/4 (/7 # Any/9 t.Flush#1/10 t.Next#1/12 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_Any<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    context[11] = refalrts::tvar_left( context[10], context[5], context[6] );
    if( ! context[11] )
      continue;
    context[13] = refalrts::tvar_left( context[12], context[5], context[6] );
    if( ! context[13] )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & SplitAlternatives/4 {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # Any/9 AsIs: t.Flush#1/10 AsIs: t.Next#1/12 AsIs: )/8 } Tile{ ]] }
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
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & SplitAlternatives/4 (/7 (/11 s.Char#1/13 )/12 t.Flush#1/14 t.Next#1/16 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_left( context[9], context[10], context[5], context[6] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[13], context[9], context[10] ) )
      continue;
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;
    context[15] = refalrts::tvar_left( context[14], context[5], context[6] );
    if( ! context[15] )
      continue;
    context[17] = refalrts::tvar_left( context[16], context[5], context[6] );
    if( ! context[17] )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  & SplitAlternatives/4 (/7 (/11 s.Char#1/13 {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ HalfReuse: s.Char1 #13/12 AsIs: t.Flush#1/14 AsIs: t.Next#1/16 AsIs: )/8 } Tile{ ]] }
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_svar( context[12], context[13] );
    refalrts::link_brackets( context[0], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[12], context[8] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[0], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & SplitAlternatives/4 (/7 (/11 s.Char#1/13 e.Tail#1/9 )/12 t.Flush#1/14 t.Next#1/16 )/8 >/1
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
  if( ! refalrts::svar_left( context[13], context[9], context[10] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Tail#1 as range 9
  context[15] = refalrts::tvar_left( context[14], context[5], context[6] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  context[17] = refalrts::tvar_left( context[16], context[5], context[6] );
  if( ! context[17] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } (/18 Tile{ AsIs: s.Char#1/13 } t.Flush#1/14/19 t.Next#1/16/21 )/23 Tile{ AsIs: </0 AsIs: & SplitAlternatives/4 AsIs: (/7 AsIs: (/11 } Tile{ AsIs: e.Tail#1/9 } Tile{ AsIs: )/12 AsIs: t.Flush#1/14 AsIs: t.Next#1/16 AsIs: )/8 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_bracket( context[18] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[19], context[20], context[14], context[15]))
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[21], context[22], context[16], context[17]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[23] ) )
    return refalrts::cNoMemory;
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[18], context[23] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[12];
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[0], context[11] );
  res = refalrts::splice_evar( res, context[19], context[23] );
  res = refalrts::splice_evar( res, context[13], context[13] );
  res = refalrts::splice_evar( res, context[18], context[18] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult NormalizeRule(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 23 elems
  refalrts::Iter context[23];
  refalrts::zeros( context, 23 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & NormalizeRule/4 (/7 (/11 e.Name#1/9 )/12 e.Alternatives#1/5 )/8 >/1
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
}

static refalrts::FnResult WriteCode(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & WriteCode/4 e.Rules#1/2 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Rules#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } </5 & WriteFunctions/6 (/7 )/8 (/9 (/10 0/11 'R'/12 'o'/13 'o'/14 't'/15 Tile{ HalfReuse: )/0 HalfReuse: )/4 AsIs: e.Rules#1/2 AsIs: >/1 ]] }
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
  if( ! refalrts::alloc_char( context[12], 'R' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[13], 'o' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[14], 'o' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[15], 't' ) )
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
  res = refalrts::splice_evar( res, context[5], context[15] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult ExtractExpected(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & ExtractExpected/4 (/7 t.Head#1/10 t.Flush#1/12 # Finitive/9 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_right(  & ident_Finitive<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    context[11] = refalrts::tvar_left( context[10], context[5], context[6] );
    if( ! context[11] )
      continue;
    context[13] = refalrts::tvar_left( context[12], context[5], context[6] );
    if( ! context[13] )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & ExtractExpected/4 (/7 t.Head#1/10 t.Flush#1/12 # Finitive/9 )/8 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & ExtractExpected/4 (/7 t.Head#1/14 t.Flush#1/16 (/11 s.LineNumber#1/13 e.NextName#1/9 )/12 )/8 >/1
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
  context[11] = refalrts::brackets_right( context[9], context[10], context[5], context[6] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[11], context[12]);
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[13], context[9], context[10] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.NextName#1 as range 9
  context[15] = refalrts::tvar_left( context[14], context[5], context[6] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  context[17] = refalrts::tvar_left( context[16], context[5], context[6] );
  if( ! context[17] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  </0 & ExtractExpected/4 (/7 t.Head#1/14 t.Flush#1/16 {REMOVED TILE}  )/8 >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ AsIs: (/11 AsIs: s.LineNumber#1/13 AsIs: e.NextName#1/9 AsIs: )/12 } Tile{ ]] }
  refalrts::link_brackets( context[11], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[11], context[12] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult WriteFunctions(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 39 elems
  refalrts::Iter context[39];
  refalrts::zeros( context, 39 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & WriteFunctions/4 (/7 e.Written#1/5 )/8 (/11 )/12 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_left( context[9], context[10], context[2], context[3] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
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
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & WriteFunctions/4 (/7 e.Written#1/5 )/8 (/11 )/12 (/15 (/19 e.Name#1/17 )/20 e.Content#1/13 )/16 e.Rules#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_left( context[9], context[10], context[2], context[3] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    context[13] = 0;
    context[14] = 0;
    context[15] = refalrts::brackets_left( context[13], context[14], context[2], context[3] );
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
    // closed e.Rules#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  e.Written#1/5 {REMOVED TILE}  e.Content#1/13 {REMOVED TILE}  e.Rules#1/2 {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Warning/4 HalfReuse: 'F'/7 } Tile{ HalfReuse: 'o'/16 } 'u'/21 'n'/22 'd'/23 ' '/24 'u'/25 'n'/26 'u'/27 's'/28 'e'/29 'd'/30 ' '/31 'r'/32 Tile{ HalfReuse: 'u'/8 HalfReuse: 'l'/11 HalfReuse: 'e'/12 HalfReuse: 's'/15 HalfReuse: ' '/19 AsIs: e.Name#1/17 HalfReuse: ' '/20 } '.'/33 '.'/34 '.'/35 Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_char( context[21], 'u' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[22], 'n' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[23], 'd' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[24], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[25], 'u' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[26], 'n' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[27], 'u' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[28], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[29], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[30], 'd' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[31], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[32], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[33], '.' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[34], '.' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[35], '.' ) )
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
    res = refalrts::splice_evar( res, context[33], context[35] );
    res = refalrts::splice_evar( res, context[8], context[20] );
    res = refalrts::splice_evar( res, context[21], context[32] );
    res = refalrts::splice_evar( res, context[16], context[16] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[7], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & WriteFunctions/4 (/7 e.Written_B#1/18 (/22 e.Next#1/24 )/23 e.Written_E#1/26 )/8 (/11 (/15 s.LineNumber#1/17 e.Next#1/13 )/16 e.Expected#1/9 )/12 e.Rules#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_left( context[9], context[10], context[2], context[3] );
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
    // closed e.Rules#1 as range 2
    if( ! refalrts::svar_left( context[17], context[13], context[14] ) )
      continue;
    // closed e.Next#1 as range 13
    context[18] = 0;
    context[19] = 0;
    refalrts::start_e_loop();
    do {
      context[26] = context[5];
      context[27] = context[6];
      context[20] = 0;
      context[21] = 0;
      context[22] = refalrts::brackets_left( context[20], context[21], context[26], context[27] );
      if( ! context[22] )
        continue;
      refalrts::bracket_pointers(context[22], context[23]);
      if( ! refalrts::repeated_evar_left( context[24], context[25], context[13], context[14], context[20], context[21] ) )
        continue;
      if( ! refalrts::empty_seq( context[20], context[21] ) )
        continue;
      // closed e.Written_E#1 as range 5

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE}  (/15 s.LineNumber#1/17 e.Next#1/13 )/16 {REMOVED TILE}  {REMOVED TILE} 
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & WriteFunctions/4 AsIs: (/7 AsIs: e.Written_B#1/18 AsIs: (/22 AsIs: e.Next#1/24 AsIs: )/23 AsIs: e.Written_E#1/26 AsIs: )/8 AsIs: (/11 } Tile{ AsIs: e.Expected#1/9 } Tile{ AsIs: )/12 AsIs: e.Rules#1/2 AsIs: >/1 ]] }
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
    } while ( refalrts::open_evar_advance( context[18], context[19], context[5], context[6] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & WriteFunctions/4 (/7 e.Written#1/5 )/8 (/11 (/15 s.LineNumber#1/17 e.NextRule#1/13 )/16 e.Expected#1/9 )/12 e.Rules_B#1/18 (/22 (/26 e.NextRule#1/28 )/27 e.Alternatives#1/20 )/23 e.Rules_E#1/30 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_left( context[9], context[10], context[2], context[3] );
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
      context[30] = context[2];
      context[31] = context[3];
      context[20] = 0;
      context[21] = 0;
      context[22] = refalrts::brackets_left( context[20], context[21], context[30], context[31] );
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
      // closed e.Rules_E#1 as range 2

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  s.LineNumber#1/17 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
      //RESULT: Tile{ [[ } </32 Tile{ HalfReuse: & WriteFunction/22 AsIs: (/26 AsIs: e.NextRule#1/28 AsIs: )/27 AsIs: e.Alternatives#1/20 HalfReuse: >/23 } Tile{ AsIs: </0 AsIs: & WriteFunctions/4 AsIs: (/7 AsIs: e.Written#1/5 HalfReuse: (/8 } Tile{ AsIs: e.NextRule#1/13 } Tile{ HalfReuse: )/11 HalfReuse: )/15 } Tile{ HalfReuse: (/16 AsIs: e.Expected#1/9 HalfReuse: </12 } & Map/33 & ExtractExpected/34 e.Alternatives#1/20/35 >/37 )/38 Tile{ AsIs: e.Rules_B#1/18 } Tile{ AsIs: e.Rules_E#1/30 } Tile{ AsIs: >/1 ]] }
      if( ! refalrts::alloc_open_call( context[32] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[33], Map, "Map" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[34], ExtractExpected, "ExtractExpected" ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_evar(context[35], context[36], context[20], context[21]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[37] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[38] ) )
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
      refalrts::link_brackets( context[16], context[38] );
      refalrts::push_stack( context[37] );
      refalrts::push_stack( context[12] );
      refalrts::link_brackets( context[7], context[15] );
      refalrts::link_brackets( context[8], context[11] );
      refalrts::push_stack( context[23] );
      refalrts::push_stack( context[32] );
      refalrts::link_brackets( context[26], context[27] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[30], context[31] );
      res = refalrts::splice_evar( res, context[18], context[19] );
      res = refalrts::splice_evar( res, context[33], context[38] );
      res = refalrts::splice_evar( res, context[16], context[12] );
      res = refalrts::splice_evar( res, context[11], context[15] );
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_evar( res, context[0], context[8] );
      res = refalrts::splice_evar( res, context[22], context[23] );
      res = refalrts::splice_evar( res, context[32], context[32] );
      refalrts::use( res );
      refalrts::splice_to_freelist_open( trash_prev, res );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[18], context[19], context[2], context[3] ) );
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & WriteFunctions/4 (/7 (/11 s.LineNumber#1/13 e.NextRule#1/9 )/12 e.Expected#1/5 )/8 e.Rules#1/2 >/1
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
  // closed e.Expected#1 as range 5
  // closed e.Rules#1 as range 2
  if( ! refalrts::svar_left( context[13], context[9], context[10] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.NextRule#1 as range 9

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  s.LineNumber#1/13 {REMOVED TILE}  {REMOVED TILE}  e.Expected#1/5 {REMOVED TILE}  e.Rules#1/2 {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & ErrorAt/4 HalfReuse: s.LineNumber1 #13/7 HalfReuse: 'R'/11 } Tile{ HalfReuse: 'u'/12 } Tile{ HalfReuse: 'l'/8 } 'e'/14 ' '/15 Tile{ AsIs: e.NextRule#1/9 } ' '/16 'n'/17 'o'/18 't'/19 ' '/20 'f'/21 'o'/22 'u'/23 'n'/24 'd'/25 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_char( context[14], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[15], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[16], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[17], 'n' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[18], 'o' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[19], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[20], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[21], 'f' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[22], 'o' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[23], 'u' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[24], 'n' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[25], 'd' ) )
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
  res = refalrts::splice_evar( res, context[16], context[25] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[14], context[15] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[12], context[12] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[11], res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult WriteFunction(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 167 elems
  refalrts::Iter context[167];
  refalrts::zeros( context, 167 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & WriteFunction/4 (/7 e.NextRule#1/5 )/8 e.Alternatives#1/2 >/1
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
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: )/4 AsIs: (/7 AsIs: e.NextRule#1/5 HalfReuse: ' '/8 } '{'/9 )/10 </11 & Map/12 & WriteAlternative/13 Tile{ AsIs: e.Alternatives#1/2 } >/14 (/15 ' '/16 ' '/17 '('/18 'e'/19 '.'/20 'A'/21 'c'/22 'c'/23 'u'/24 'm'/25 ')'/26 ' '/27 's'/28 '.'/29 'U'/30 'n'/31 'e'/32 'x'/33 'p'/34 'e'/35 'c'/36 't'/37 'e'/38 'd'/39 ' '/40 'e'/41 '.'/42 'T'/43 'e'/44 'x'/45 't'/46 ' '/47 '='/48 )/49 (/50 ' '/51 ' '/52 ' '/53 ' '/54 '('/55 '#'/56 'T'/57 'o'/58 'k'/59 'e'/60 'n'/61 'U'/62 'n'/63 'e'/64 'x'/65 'p'/66 'e'/67 'c'/68 't'/69 'e'/70 'd'/71 ' '/72 's'/73 '.'/74 'U'/75 'n'/76 'e'/77 'x'/78 'p'/79 'e'/80 'c'/81 't'/82 'e'/83 'd'/84 ')'/85 ' '/86 '<'/87 'R'/88 'o'/89 'o'/90 't'/91 ' '/92 '('/93 ')'/94 ' '/95 'e'/96 '.'/97 'T'/98 'e'/99 'x'/100 't'/101 '>'/102 ';'/103 )/104 (/105 ' '/106 ' '/107 '('/108 'e'/109 '.'/110 'A'/111 'c'/112 'c'/113 'u'/114 'm'/115 ')'/116 ' '/117 '='/118 ' '/119 '('/120 '#'/121 'T'/122 'o'/123 'k'/124 'e'/125 'n'/126 'A'/127 'c'/128 'c'/129 'u'/130 'm'/131 ' '/132 'e'/133 '.'/134 'A'/135 'c'/136 'c'/137 'u'/138 'm'/139 ')'/140 ' '/141 '('/142 '#'/143 'T'/144 'o'/145 'k'/146 'e'/147 'n'/148 'U'/149 'n'/150 'e'/151 'x'/152 'p'/153 'e'/154 'c'/155 't'/156 'e'/157 'd'/158 'E'/159 'O'/160 'F'/161 ')'/162 ';'/163 )/164 (/165 '}'/166 Tile{ HalfReuse: )/1 ]] }
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
  if( ! refalrts::alloc_char( context[16], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[17], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[18], '(' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[19], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[20], '.' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[21], 'A' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[22], 'c' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[23], 'c' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[24], 'u' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[25], 'm' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[26], ')' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[27], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[28], 's' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[29], '.' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[30], 'U' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[31], 'n' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[32], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[33], 'x' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[34], 'p' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[35], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[36], 'c' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[37], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[38], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[39], 'd' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[40], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[41], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[42], '.' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[43], 'T' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[44], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[45], 'x' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[46], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[47], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[48], '=' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[49] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[50] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[51], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[52], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[53], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[54], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[55], '(' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[56], '#' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[57], 'T' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[58], 'o' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[59], 'k' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[60], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[61], 'n' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[62], 'U' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[63], 'n' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[64], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[65], 'x' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[66], 'p' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[67], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[68], 'c' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[69], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[70], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[71], 'd' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[72], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[73], 's' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[74], '.' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[75], 'U' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[76], 'n' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[77], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[78], 'x' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[79], 'p' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[80], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[81], 'c' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[82], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[83], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[84], 'd' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[85], ')' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[86], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[87], '<' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[88], 'R' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[89], 'o' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[90], 'o' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[91], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[92], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[93], '(' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[94], ')' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[95], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[96], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[97], '.' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[98], 'T' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[99], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[100], 'x' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[101], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[102], '>' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[103], ';' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[104] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[105] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[106], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[107], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[108], '(' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[109], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[110], '.' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[111], 'A' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[112], 'c' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[113], 'c' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[114], 'u' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[115], 'm' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[116], ')' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[117], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[118], '=' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[119], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[120], '(' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[121], '#' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[122], 'T' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[123], 'o' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[124], 'k' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[125], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[126], 'n' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[127], 'A' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[128], 'c' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[129], 'c' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[130], 'u' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[131], 'm' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[132], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[133], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[134], '.' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[135], 'A' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[136], 'c' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[137], 'c' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[138], 'u' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[139], 'm' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[140], ')' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[141], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[142], '(' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[143], '#' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[144], 'T' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[145], 'o' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[146], 'k' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[147], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[148], 'n' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[149], 'U' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[150], 'n' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[151], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[152], 'x' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[153], 'p' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[154], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[155], 'c' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[156], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[157], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[158], 'd' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[159], 'E' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[160], 'O' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[161], 'F' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[162], ')' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[163], ';' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[164] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[165] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[166], '}' ) )
    return refalrts::cNoMemory;
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_close_bracket( context[4] );
  refalrts::reinit_char( context[8], ' ' );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[165], context[1] );
  refalrts::link_brackets( context[105], context[164] );
  refalrts::link_brackets( context[50], context[104] );
  refalrts::link_brackets( context[15], context[49] );
  refalrts::push_stack( context[14] );
  refalrts::push_stack( context[11] );
  refalrts::link_brackets( context[7], context[10] );
  refalrts::link_brackets( context[0], context[4] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[14], context[166] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[9], context[13] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult WriteAlternative(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 69 elems
  refalrts::Iter context[69];
  refalrts::zeros( context, 69 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & WriteAlternative/4 (/7 # Empty/9 # None/10 # Finitive/11 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_Empty<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    context[10] = refalrts::ident_left(  & ident_None<int>::name, context[5], context[6] );
    if( ! context[10] )
      continue;
    context[11] = refalrts::ident_left(  & ident_Finitive<int>::name, context[5], context[6] );
    if( ! context[11] )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: ' '/4 HalfReuse: ' '/7 HalfReuse: '('/9 HalfReuse: 'e'/10 HalfReuse: '.'/11 HalfReuse: 'A'/8 HalfReuse: 'c'/1 } 'c'/12 'u'/13 'm'/14 ')'/15 ' '/16 '='/17 ' '/18 '('/19 '#'/20 'T'/21 'o'/22 'k'/23 'e'/24 'n'/25 'A'/26 'c'/27 'c'/28 'u'/29 'm'/30 ' '/31 'e'/32 '.'/33 'A'/34 'c'/35 'c'/36 'u'/37 'm'/38 ')'/39 ' '/40 ';'/41 )/42 Tile{ ]] }
    if( ! refalrts::alloc_char( context[12], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[13], 'u' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[14], 'm' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[15], ')' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[16], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[17], '=' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[18], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[19], '(' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[20], '#' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[21], 'T' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[22], 'o' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[23], 'k' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[24], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[25], 'n' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[26], 'A' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[27], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[28], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[29], 'u' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[30], 'm' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[31], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[32], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[33], '.' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[34], 'A' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[35], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[36], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[37], 'u' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[38], 'm' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[39], ')' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[40], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[41], ';' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[42] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_char( context[4], ' ' );
    refalrts::reinit_char( context[7], ' ' );
    refalrts::reinit_char( context[9], '(' );
    refalrts::reinit_char( context[10], 'e' );
    refalrts::reinit_char( context[11], '.' );
    refalrts::reinit_char( context[8], 'A' );
    refalrts::reinit_char( context[1], 'c' );
    refalrts::link_brackets( context[0], context[42] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[12], context[42] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & WriteAlternative/4 (/7 # Empty/9 # None/10 (/13 t.SrcPos#1/15 e.NextStateName#1/11 )/14 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_Empty<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    context[10] = refalrts::ident_left(  & ident_None<int>::name, context[5], context[6] );
    if( ! context[10] )
      continue;
    context[11] = 0;
    context[12] = 0;
    context[13] = refalrts::brackets_left( context[11], context[12], context[5], context[6] );
    if( ! context[13] )
      continue;
    refalrts::bracket_pointers(context[13], context[14]);
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    context[16] = refalrts::tvar_left( context[15], context[11], context[12] );
    if( ! context[16] )
      continue;
    // closed e.NextStateName#1 as range 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  t.SrcPos#1/15 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: ' '/4 HalfReuse: ' '/7 HalfReuse: '('/9 HalfReuse: 'e'/10 HalfReuse: '.'/13 } 'A'/17 'c'/18 'c'/19 'u'/20 'm'/21 ')'/22 ' '/23 'e'/24 '.'/25 'T'/26 'e'/27 'x'/28 't'/29 ' '/30 '='/31 ' '/32 '<'/33 Tile{ AsIs: e.NextStateName#1/11 } ' '/34 '('/35 'e'/36 '.'/37 'A'/38 'c'/39 'c'/40 'u'/41 'm'/42 ')'/43 ' '/44 'e'/45 '.'/46 'T'/47 'e'/48 'x'/49 't'/50 Tile{ HalfReuse: '>'/14 HalfReuse: ';'/8 HalfReuse: )/1 ]] }
    if( ! refalrts::alloc_char( context[17], 'A' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[18], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[19], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[20], 'u' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[21], 'm' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[22], ')' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[23], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[24], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[25], '.' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[26], 'T' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[27], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[28], 'x' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[29], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[30], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[31], '=' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[32], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[33], '<' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[34], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[35], '(' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[36], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[37], '.' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[38], 'A' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[39], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[40], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[41], 'u' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[42], 'm' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[43], ')' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[44], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[45], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[46], '.' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[47], 'T' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[48], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[49], 'x' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[50], 't' ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_char( context[4], ' ' );
    refalrts::reinit_char( context[7], ' ' );
    refalrts::reinit_char( context[9], '(' );
    refalrts::reinit_char( context[10], 'e' );
    refalrts::reinit_char( context[13], '.' );
    refalrts::reinit_char( context[14], '>' );
    refalrts::reinit_char( context[8], ';' );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[0], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[14];
    res = refalrts::splice_evar( res, context[34], context[50] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[17], context[33] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[13], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & WriteAlternative/4 (/7 # Empty/9 # Unnamed/10 # Finitive/11 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_Empty<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    context[10] = refalrts::ident_left(  & ident_Unnamed<int>::name, context[5], context[6] );
    if( ! context[10] )
      continue;
    context[11] = refalrts::ident_left(  & ident_Finitive<int>::name, context[5], context[6] );
    if( ! context[11] )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: ' '/4 HalfReuse: ' '/7 HalfReuse: '('/9 HalfReuse: 'e'/10 HalfReuse: '.'/11 HalfReuse: 'A'/8 HalfReuse: 'c'/1 } 'c'/12 'u'/13 'm'/14 ')'/15 ' '/16 '='/17 ' '/18 ';'/19 )/20 Tile{ ]] }
    if( ! refalrts::alloc_char( context[12], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[13], 'u' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[14], 'm' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[15], ')' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[16], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[17], '=' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[18], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[19], ';' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[20] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_char( context[4], ' ' );
    refalrts::reinit_char( context[7], ' ' );
    refalrts::reinit_char( context[9], '(' );
    refalrts::reinit_char( context[10], 'e' );
    refalrts::reinit_char( context[11], '.' );
    refalrts::reinit_char( context[8], 'A' );
    refalrts::reinit_char( context[1], 'c' );
    refalrts::link_brackets( context[0], context[20] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[12], context[20] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & WriteAlternative/4 (/7 # Empty/9 # Unnamed/10 (/13 t.SrcPos#1/15 e.NextStateName#1/11 )/14 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_Empty<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    context[10] = refalrts::ident_left(  & ident_Unnamed<int>::name, context[5], context[6] );
    if( ! context[10] )
      continue;
    context[11] = 0;
    context[12] = 0;
    context[13] = refalrts::brackets_left( context[11], context[12], context[5], context[6] );
    if( ! context[13] )
      continue;
    refalrts::bracket_pointers(context[13], context[14]);
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    context[16] = refalrts::tvar_left( context[15], context[11], context[12] );
    if( ! context[16] )
      continue;
    // closed e.NextStateName#1 as range 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  t.SrcPos#1/15 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: ' '/4 HalfReuse: ' '/7 HalfReuse: '('/9 HalfReuse: 'e'/10 HalfReuse: '.'/13 } 'A'/17 'c'/18 'c'/19 'u'/20 'm'/21 ')'/22 ' '/23 'e'/24 '.'/25 'T'/26 'e'/27 'x'/28 't'/29 ' '/30 '='/31 ' '/32 '<'/33 Tile{ AsIs: e.NextStateName#1/11 } ' '/34 '('/35 ')'/36 ' '/37 'e'/38 '.'/39 'T'/40 'e'/41 'x'/42 't'/43 Tile{ HalfReuse: '>'/14 HalfReuse: ';'/8 HalfReuse: )/1 ]] }
    if( ! refalrts::alloc_char( context[17], 'A' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[18], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[19], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[20], 'u' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[21], 'm' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[22], ')' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[23], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[24], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[25], '.' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[26], 'T' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[27], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[28], 'x' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[29], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[30], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[31], '=' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[32], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[33], '<' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[34], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[35], '(' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[36], ')' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[37], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[38], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[39], '.' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[40], 'T' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[41], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[42], 'x' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[43], 't' ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_char( context[4], ' ' );
    refalrts::reinit_char( context[7], ' ' );
    refalrts::reinit_char( context[9], '(' );
    refalrts::reinit_char( context[10], 'e' );
    refalrts::reinit_char( context[13], '.' );
    refalrts::reinit_char( context[14], '>' );
    refalrts::reinit_char( context[8], ';' );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[0], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[14];
    res = refalrts::splice_evar( res, context[34], context[43] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[17], context[33] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[13], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & WriteAlternative/4 (/7 # Empty/9 (/13 # Flush/15 e.FlushName#1/11 )/14 # Finitive/10 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_Empty<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    context[10] = refalrts::ident_right(  & ident_Finitive<int>::name, context[5], context[6] );
    if( ! context[10] )
      continue;
    context[11] = 0;
    context[12] = 0;
    context[13] = refalrts::brackets_left( context[11], context[12], context[5], context[6] );
    if( ! context[13] )
      continue;
    refalrts::bracket_pointers(context[13], context[14]);
    context[15] = refalrts::ident_left(  & ident_Flush<int>::name, context[11], context[12] );
    if( ! context[15] )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.FlushName#1 as range 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } (/16 ' '/17 ' '/18 '('/19 'e'/20 '.'/21 'A'/22 'c'/23 'c'/24 'u'/25 'm'/26 Tile{ HalfReuse: ')'/0 HalfReuse: ' '/4 HalfReuse: '='/7 HalfReuse: ' '/9 HalfReuse: ' '/13 HalfReuse: '('/15 AsIs: e.FlushName#1/11 HalfReuse: ' '/14 HalfReuse: 'e'/10 HalfReuse: '.'/8 HalfReuse: 'A'/1 } 'c'/27 'c'/28 'u'/29 'm'/30 ')'/31 ';'/32 )/33 Tile{ ]] }
    if( ! refalrts::alloc_open_bracket( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[17], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[18], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[19], '(' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[20], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[21], '.' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[22], 'A' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[23], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[24], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[25], 'u' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[26], 'm' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[27], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[28], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[29], 'u' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[30], 'm' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[31], ')' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[32], ';' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[33] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[0], ')' );
    refalrts::reinit_char( context[4], ' ' );
    refalrts::reinit_char( context[7], '=' );
    refalrts::reinit_char( context[9], ' ' );
    refalrts::reinit_char( context[13], ' ' );
    refalrts::reinit_char( context[15], '(' );
    refalrts::reinit_char( context[14], ' ' );
    refalrts::reinit_char( context[10], 'e' );
    refalrts::reinit_char( context[8], '.' );
    refalrts::reinit_char( context[1], 'A' );
    refalrts::link_brackets( context[16], context[33] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[27], context[33] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    res = refalrts::splice_evar( res, context[16], context[26] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & WriteAlternative/4 (/7 # Empty/9 (/12 # Flush/14 e.FlushName#1/10 )/13 (/17 t.SrcPos#1/19 e.NextStateName#1/15 )/18 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_Empty<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    context[10] = 0;
    context[11] = 0;
    context[12] = refalrts::brackets_left( context[10], context[11], context[5], context[6] );
    if( ! context[12] )
      continue;
    refalrts::bracket_pointers(context[12], context[13]);
    context[14] = refalrts::ident_left(  & ident_Flush<int>::name, context[10], context[11] );
    if( ! context[14] )
      continue;
    context[15] = 0;
    context[16] = 0;
    context[17] = refalrts::brackets_left( context[15], context[16], context[5], context[6] );
    if( ! context[17] )
      continue;
    refalrts::bracket_pointers(context[17], context[18]);
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.FlushName#1 as range 10
    context[20] = refalrts::tvar_left( context[19], context[15], context[16] );
    if( ! context[20] )
      continue;
    // closed e.NextStateName#1 as range 15

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  t.SrcPos#1/19 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } (/21 ' '/22 ' '/23 '('/24 'e'/25 '.'/26 'A'/27 'c'/28 'c'/29 'u'/30 'm'/31 ')'/32 ' '/33 'e'/34 '.'/35 'T'/36 'e'/37 'x'/38 't'/39 ' '/40 '='/41 )/42 Tile{ HalfReuse: (/0 HalfReuse: ' '/4 HalfReuse: ' '/7 HalfReuse: ' '/9 HalfReuse: ' '/12 HalfReuse: '('/14 AsIs: e.FlushName#1/10 HalfReuse: ' '/13 HalfReuse: 'e'/17 } '.'/43 'A'/44 'c'/45 'c'/46 'u'/47 'm'/48 ')'/49 ' '/50 '<'/51 Tile{ AsIs: e.NextStateName#1/15 } ' '/52 '('/53 ')'/54 ' '/55 'e'/56 '.'/57 'T'/58 'e'/59 'x'/60 't'/61 Tile{ HalfReuse: '>'/18 HalfReuse: ';'/8 HalfReuse: )/1 ]] }
    if( ! refalrts::alloc_open_bracket( context[21] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[22], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[23], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[24], '(' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[25], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[26], '.' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[27], 'A' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[28], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[29], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[30], 'u' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[31], 'm' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[32], ')' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[33], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[34], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[35], '.' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[36], 'T' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[37], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[38], 'x' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[39], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[40], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[41], '=' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[42] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[43], '.' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[44], 'A' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[45], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[46], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[47], 'u' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[48], 'm' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[49], ')' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[50], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[51], '<' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[52], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[53], '(' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[54], ')' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[55], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[56], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[57], '.' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[58], 'T' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[59], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[60], 'x' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[61], 't' ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_char( context[4], ' ' );
    refalrts::reinit_char( context[7], ' ' );
    refalrts::reinit_char( context[9], ' ' );
    refalrts::reinit_char( context[12], ' ' );
    refalrts::reinit_char( context[14], '(' );
    refalrts::reinit_char( context[13], ' ' );
    refalrts::reinit_char( context[17], 'e' );
    refalrts::reinit_char( context[18], '>' );
    refalrts::reinit_char( context[8], ';' );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[0], context[1] );
    refalrts::link_brackets( context[21], context[42] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[18];
    res = refalrts::splice_evar( res, context[52], context[61] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[43], context[51] );
    res = refalrts::splice_evar( res, context[0], context[17] );
    res = refalrts::splice_evar( res, context[21], context[42] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & WriteAlternative/4 (/7 # Empty/9 (/13 # FlushError/15 e.Message#1/11 )/14 # Finitive/10 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_Empty<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    context[10] = refalrts::ident_right(  & ident_Finitive<int>::name, context[5], context[6] );
    if( ! context[10] )
      continue;
    context[11] = 0;
    context[12] = 0;
    context[13] = refalrts::brackets_left( context[11], context[12], context[5], context[6] );
    if( ! context[13] )
      continue;
    refalrts::bracket_pointers(context[13], context[14]);
    context[15] = refalrts::ident_left(  & ident_FlushError<int>::name, context[11], context[12] );
    if( ! context[15] )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Message#1 as range 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } (/16 ' '/17 ' '/18 '('/19 'e'/20 '.'/21 'A'/22 'c'/23 'c'/24 'u'/25 'm'/26 ')'/27 ' '/28 '='/29 ' '/30 '('/31 '#'/32 'T'/33 'o'/34 'k'/35 'e'/36 'n'/37 'E'/38 Tile{ HalfReuse: 'r'/0 HalfReuse: 'r'/4 HalfReuse: 'o'/7 HalfReuse: 'r'/9 HalfReuse: ' '/13 HalfReuse: '\''/15 AsIs: e.Message#1/11 HalfReuse: '\''/14 HalfReuse: ')'/10 HalfReuse: ';'/8 HalfReuse: )/1 ]] }
    if( ! refalrts::alloc_open_bracket( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[17], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[18], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[19], '(' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[20], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[21], '.' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[22], 'A' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[23], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[24], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[25], 'u' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[26], 'm' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[27], ')' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[28], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[29], '=' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[30], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[31], '(' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[32], '#' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[33], 'T' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[34], 'o' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[35], 'k' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[36], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[37], 'n' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[38], 'E' ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[0], 'r' );
    refalrts::reinit_char( context[4], 'r' );
    refalrts::reinit_char( context[7], 'o' );
    refalrts::reinit_char( context[9], 'r' );
    refalrts::reinit_char( context[13], ' ' );
    refalrts::reinit_char( context[15], '\'' );
    refalrts::reinit_char( context[14], '\'' );
    refalrts::reinit_char( context[10], ')' );
    refalrts::reinit_char( context[8], ';' );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[16], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[0];
    res = refalrts::splice_evar( res, context[16], context[38] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & WriteAlternative/4 (/7 # Empty/9 (/12 # FlushError/14 e.Message#1/10 )/13 (/17 t.SrcPos#1/19 e.NextStateName#1/15 )/18 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_Empty<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    context[10] = 0;
    context[11] = 0;
    context[12] = refalrts::brackets_left( context[10], context[11], context[5], context[6] );
    if( ! context[12] )
      continue;
    refalrts::bracket_pointers(context[12], context[13]);
    context[14] = refalrts::ident_left(  & ident_FlushError<int>::name, context[10], context[11] );
    if( ! context[14] )
      continue;
    context[15] = 0;
    context[16] = 0;
    context[17] = refalrts::brackets_left( context[15], context[16], context[5], context[6] );
    if( ! context[17] )
      continue;
    refalrts::bracket_pointers(context[17], context[18]);
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Message#1 as range 10
    context[20] = refalrts::tvar_left( context[19], context[15], context[16] );
    if( ! context[20] )
      continue;
    // closed e.NextStateName#1 as range 15

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  t.SrcPos#1/19 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } (/21 ' '/22 ' '/23 '('/24 'e'/25 '.'/26 'A'/27 'c'/28 'c'/29 'u'/30 'm'/31 ')'/32 ' '/33 'e'/34 '.'/35 'T'/36 'e'/37 'x'/38 't'/39 ' '/40 '='/41 ' '/42 '('/43 '#'/44 'T'/45 'o'/46 'k'/47 'e'/48 'n'/49 'E'/50 Tile{ HalfReuse: 'r'/0 HalfReuse: 'r'/4 HalfReuse: 'o'/7 HalfReuse: 'r'/9 HalfReuse: ' '/12 HalfReuse: '\''/14 AsIs: e.Message#1/10 HalfReuse: '\''/13 HalfReuse: ')'/17 } ' '/51 '<'/52 Tile{ AsIs: e.NextStateName#1/15 } ' '/53 '('/54 ')'/55 ' '/56 'e'/57 '.'/58 'T'/59 'e'/60 'x'/61 't'/62 Tile{ HalfReuse: '>'/18 HalfReuse: ';'/8 HalfReuse: )/1 ]] }
    if( ! refalrts::alloc_open_bracket( context[21] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[22], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[23], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[24], '(' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[25], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[26], '.' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[27], 'A' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[28], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[29], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[30], 'u' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[31], 'm' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[32], ')' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[33], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[34], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[35], '.' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[36], 'T' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[37], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[38], 'x' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[39], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[40], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[41], '=' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[42], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[43], '(' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[44], '#' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[45], 'T' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[46], 'o' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[47], 'k' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[48], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[49], 'n' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[50], 'E' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[51], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[52], '<' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[53], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[54], '(' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[55], ')' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[56], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[57], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[58], '.' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[59], 'T' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[60], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[61], 'x' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[62], 't' ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[0], 'r' );
    refalrts::reinit_char( context[4], 'r' );
    refalrts::reinit_char( context[7], 'o' );
    refalrts::reinit_char( context[9], 'r' );
    refalrts::reinit_char( context[12], ' ' );
    refalrts::reinit_char( context[14], '\'' );
    refalrts::reinit_char( context[13], '\'' );
    refalrts::reinit_char( context[17], ')' );
    refalrts::reinit_char( context[18], '>' );
    refalrts::reinit_char( context[8], ';' );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[21], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[18];
    res = refalrts::splice_evar( res, context[53], context[62] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[51], context[52] );
    res = refalrts::splice_evar( res, context[0], context[17] );
    res = refalrts::splice_evar( res, context[21], context[50] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & WriteAlternative/4 (/7 s.Char#1/11 # None/10 # Finitive/9 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_right(  & ident_Finitive<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    context[10] = refalrts::ident_right(  & ident_None<int>::name, context[5], context[6] );
    if( ! context[10] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[11], context[5], context[6] ) )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } (/12 ' '/13 ' '/14 '('/15 'e'/16 '.'/17 'A'/18 'c'/19 'c'/20 'u'/21 'm'/22 ')'/23 ' '/24 </25 & EC/26 s.Char#1/11/27 >/28 ' '/29 '='/30 ' '/31 '('/32 '#'/33 'T'/34 'o'/35 'k'/36 'e'/37 'n'/38 'A'/39 'c'/40 'c'/41 'u'/42 'm'/43 ' '/44 'e'/45 '.'/46 'A'/47 'c'/48 'c'/49 'u'/50 'm'/51 Tile{ HalfReuse: ' '/0 HalfReuse: </4 HalfReuse: & EC/7 AsIs: s.Char#1/11 HalfReuse: >/10 HalfReuse: ')'/9 HalfReuse: ';'/8 HalfReuse: )/1 ]] }
    if( ! refalrts::alloc_open_bracket( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[13], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[14], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[15], '(' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[16], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[17], '.' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[18], 'A' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[19], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[20], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[21], 'u' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[22], 'm' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[23], ')' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[24], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[25] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[26], EC, "EC" ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[27], context[11]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[28] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[29], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[30], '=' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[31], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[32], '(' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[33], '#' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[34], 'T' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[35], 'o' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[36], 'k' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[37], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[38], 'n' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[39], 'A' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[40], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[41], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[42], 'u' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[43], 'm' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[44], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[45], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[46], '.' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[47], 'A' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[48], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[49], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[50], 'u' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[51], 'm' ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[0], ' ' );
    refalrts::reinit_open_call( context[4] );
    refalrts::reinit_name( context[7], EC, "EC" );
    refalrts::reinit_close_call( context[10] );
    refalrts::reinit_char( context[9], ')' );
    refalrts::reinit_char( context[8], ';' );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[12], context[1] );
    refalrts::push_stack( context[10] );
    refalrts::push_stack( context[4] );
    refalrts::push_stack( context[28] );
    refalrts::push_stack( context[25] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[0];
    res = refalrts::splice_evar( res, context[12], context[51] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & WriteAlternative/4 (/7 s.Char#1/14 # None/13 (/11 t.SrcPos#1/15 e.NextStateName#1/9 )/12 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_right( context[9], context[10], context[5], context[6] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    context[13] = refalrts::ident_right(  & ident_None<int>::name, context[5], context[6] );
    if( ! context[13] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[14], context[5], context[6] ) )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    context[16] = refalrts::tvar_left( context[15], context[9], context[10] );
    if( ! context[16] )
      continue;
    // closed e.NextStateName#1 as range 9

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  t.SrcPos#1/15 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } (/17 ' '/18 ' '/19 '('/20 'e'/21 '.'/22 'A'/23 'c'/24 'c'/25 'u'/26 'm'/27 ')'/28 Tile{ HalfReuse: ' '/0 HalfReuse: </4 HalfReuse: & EC/7 AsIs: s.Char#1/14 HalfReuse: >/13 HalfReuse: ' '/11 } 'e'/29 '.'/30 'T'/31 'e'/32 'x'/33 't'/34 ' '/35 '='/36 ' '/37 '<'/38 Tile{ AsIs: e.NextStateName#1/9 } ' '/39 '('/40 'e'/41 '.'/42 'A'/43 'c'/44 'c'/45 'u'/46 'm'/47 ' '/48 </49 & EC/50 s.Char#1/14/51 >/52 ')'/53 ' '/54 'e'/55 '.'/56 'T'/57 'e'/58 'x'/59 't'/60 Tile{ HalfReuse: '>'/12 HalfReuse: ';'/8 HalfReuse: )/1 ]] }
    if( ! refalrts::alloc_open_bracket( context[17] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[18], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[19], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[20], '(' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[21], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[22], '.' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[23], 'A' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[24], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[25], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[26], 'u' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[27], 'm' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[28], ')' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[29], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[30], '.' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[31], 'T' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[32], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[33], 'x' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[34], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[35], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[36], '=' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[37], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[38], '<' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[39], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[40], '(' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[41], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[42], '.' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[43], 'A' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[44], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[45], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[46], 'u' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[47], 'm' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[48], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[49] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[50], EC, "EC" ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[51], context[14]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[52] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[53], ')' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[54], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[55], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[56], '.' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[57], 'T' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[58], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[59], 'x' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[60], 't' ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[0], ' ' );
    refalrts::reinit_open_call( context[4] );
    refalrts::reinit_name( context[7], EC, "EC" );
    refalrts::reinit_close_call( context[13] );
    refalrts::reinit_char( context[11], ' ' );
    refalrts::reinit_char( context[12], '>' );
    refalrts::reinit_char( context[8], ';' );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[17], context[1] );
    refalrts::push_stack( context[52] );
    refalrts::push_stack( context[49] );
    refalrts::push_stack( context[13] );
    refalrts::push_stack( context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[12];
    res = refalrts::splice_evar( res, context[39], context[60] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[29], context[38] );
    res = refalrts::splice_evar( res, context[0], context[11] );
    res = refalrts::splice_evar( res, context[17], context[28] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & WriteAlternative/4 (/7 s.Char#1/11 # Unnamed/10 # Finitive/9 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_right(  & ident_Finitive<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    context[10] = refalrts::ident_right(  & ident_Unnamed<int>::name, context[5], context[6] );
    if( ! context[10] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[11], context[5], context[6] ) )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } (/12 ' '/13 ' '/14 '('/15 'e'/16 '.'/17 'A'/18 'c'/19 'c'/20 'u'/21 'm'/22 ')'/23 Tile{ HalfReuse: ' '/0 HalfReuse: </4 HalfReuse: & EC/7 AsIs: s.Char#1/11 HalfReuse: >/10 HalfReuse: ' '/9 HalfReuse: '='/8 HalfReuse: ' '/1 } ';'/24 )/25 Tile{ ]] }
    if( ! refalrts::alloc_open_bracket( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[13], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[14], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[15], '(' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[16], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[17], '.' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[18], 'A' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[19], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[20], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[21], 'u' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[22], 'm' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[23], ')' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[24], ';' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[25] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[0], ' ' );
    refalrts::reinit_open_call( context[4] );
    refalrts::reinit_name( context[7], EC, "EC" );
    refalrts::reinit_close_call( context[10] );
    refalrts::reinit_char( context[9], ' ' );
    refalrts::reinit_char( context[8], '=' );
    refalrts::reinit_char( context[1], ' ' );
    refalrts::link_brackets( context[12], context[25] );
    refalrts::push_stack( context[10] );
    refalrts::push_stack( context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[24], context[25] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    res = refalrts::splice_evar( res, context[12], context[23] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & WriteAlternative/4 (/7 s.Char#1/14 # Unnamed/13 (/11 t.SrcPos#1/15 e.NextStateName#1/9 )/12 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_right( context[9], context[10], context[5], context[6] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    context[13] = refalrts::ident_right(  & ident_Unnamed<int>::name, context[5], context[6] );
    if( ! context[13] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[14], context[5], context[6] ) )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    context[16] = refalrts::tvar_left( context[15], context[9], context[10] );
    if( ! context[16] )
      continue;
    // closed e.NextStateName#1 as range 9

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  t.SrcPos#1/15 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } (/17 ' '/18 ' '/19 '('/20 'e'/21 '.'/22 'A'/23 'c'/24 'c'/25 'u'/26 'm'/27 ')'/28 Tile{ HalfReuse: ' '/0 HalfReuse: </4 HalfReuse: & EC/7 AsIs: s.Char#1/14 HalfReuse: >/13 HalfReuse: ' '/11 } 'e'/29 '.'/30 'T'/31 'e'/32 'x'/33 't'/34 ' '/35 '='/36 ' '/37 '<'/38 Tile{ AsIs: e.NextStateName#1/9 } ' '/39 '('/40 ')'/41 ' '/42 'e'/43 '.'/44 'T'/45 'e'/46 'x'/47 't'/48 Tile{ HalfReuse: '>'/12 HalfReuse: ';'/8 HalfReuse: )/1 ]] }
    if( ! refalrts::alloc_open_bracket( context[17] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[18], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[19], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[20], '(' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[21], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[22], '.' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[23], 'A' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[24], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[25], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[26], 'u' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[27], 'm' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[28], ')' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[29], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[30], '.' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[31], 'T' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[32], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[33], 'x' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[34], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[35], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[36], '=' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[37], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[38], '<' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[39], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[40], '(' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[41], ')' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[42], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[43], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[44], '.' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[45], 'T' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[46], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[47], 'x' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[48], 't' ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[0], ' ' );
    refalrts::reinit_open_call( context[4] );
    refalrts::reinit_name( context[7], EC, "EC" );
    refalrts::reinit_close_call( context[13] );
    refalrts::reinit_char( context[11], ' ' );
    refalrts::reinit_char( context[12], '>' );
    refalrts::reinit_char( context[8], ';' );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[17], context[1] );
    refalrts::push_stack( context[13] );
    refalrts::push_stack( context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[12];
    res = refalrts::splice_evar( res, context[39], context[48] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[29], context[38] );
    res = refalrts::splice_evar( res, context[0], context[11] );
    res = refalrts::splice_evar( res, context[17], context[28] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & WriteAlternative/4 (/7 s.Char#1/15 (/12 # Flush/14 e.FlushName#1/10 )/13 # Finitive/9 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_right(  & ident_Finitive<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    context[10] = 0;
    context[11] = 0;
    context[12] = refalrts::brackets_right( context[10], context[11], context[5], context[6] );
    if( ! context[12] )
      continue;
    refalrts::bracket_pointers(context[12], context[13]);
    context[14] = refalrts::ident_left(  & ident_Flush<int>::name, context[10], context[11] );
    if( ! context[14] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.FlushName#1 as range 10
    if( ! refalrts::svar_left( context[15], context[5], context[6] ) )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: ' '/4 HalfReuse: ' '/7 } '('/16 'e'/17 '.'/18 'A'/19 'c'/20 'c'/21 'u'/22 'm'/23 ')'/24 ' '/25 </26 & EC/27 Tile{ AsIs: s.Char#1/15 } >/28 ' '/29 '='/30 Tile{ HalfReuse: ' '/12 HalfReuse: '('/14 AsIs: e.FlushName#1/10 HalfReuse: ' '/13 HalfReuse: 'e'/9 HalfReuse: '.'/8 HalfReuse: 'A'/1 } 'c'/31 'c'/32 'u'/33 'm'/34 ' '/35 </36 & EC/37 s.Char#1/15/38 >/39 ')'/40 ';'/41 )/42 Tile{ ]] }
    if( ! refalrts::alloc_char( context[16], '(' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[17], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[18], '.' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[19], 'A' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[20], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[21], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[22], 'u' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[23], 'm' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[24], ')' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[25], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[26] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[27], EC, "EC" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[28] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[29], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[30], '=' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[31], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[32], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[33], 'u' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[34], 'm' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[35], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[36] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[37], EC, "EC" ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[38], context[15]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[39] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[40], ')' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[41], ';' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[42] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_char( context[4], ' ' );
    refalrts::reinit_char( context[7], ' ' );
    refalrts::reinit_char( context[12], ' ' );
    refalrts::reinit_char( context[14], '(' );
    refalrts::reinit_char( context[13], ' ' );
    refalrts::reinit_char( context[9], 'e' );
    refalrts::reinit_char( context[8], '.' );
    refalrts::reinit_char( context[1], 'A' );
    refalrts::link_brackets( context[0], context[42] );
    refalrts::push_stack( context[39] );
    refalrts::push_stack( context[36] );
    refalrts::push_stack( context[28] );
    refalrts::push_stack( context[26] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[31], context[42] );
    res = refalrts::splice_evar( res, context[12], context[1] );
    res = refalrts::splice_evar( res, context[28], context[30] );
    res = refalrts::splice_evar( res, context[15], context[15] );
    res = refalrts::splice_evar( res, context[16], context[27] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & WriteAlternative/4 (/7 s.Char#1/18 (/15 # Flush/17 e.FlushName#1/13 )/16 (/11 t.SrcPos#1/19 e.NextStateName#1/9 )/12 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_right( context[9], context[10], context[5], context[6] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    context[13] = 0;
    context[14] = 0;
    context[15] = refalrts::brackets_right( context[13], context[14], context[5], context[6] );
    if( ! context[15] )
      continue;
    refalrts::bracket_pointers(context[15], context[16]);
    context[17] = refalrts::ident_left(  & ident_Flush<int>::name, context[13], context[14] );
    if( ! context[17] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.FlushName#1 as range 13
    if( ! refalrts::svar_left( context[18], context[5], context[6] ) )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    context[20] = refalrts::tvar_left( context[19], context[9], context[10] );
    if( ! context[20] )
      continue;
    // closed e.NextStateName#1 as range 9

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  t.SrcPos#1/19 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/11 } Tile{ HalfReuse: ' '/16 } ' '/21 '('/22 'e'/23 '.'/24 'A'/25 'c'/26 'c'/27 'u'/28 'm'/29 ')'/30 Tile{ HalfReuse: ' '/0 HalfReuse: </4 HalfReuse: & EC/7 AsIs: s.Char#1/18 HalfReuse: >/15 HalfReuse: ' '/17 } 'e'/31 '.'/32 'T'/33 'e'/34 'x'/35 't'/36 ' '/37 '='/38 ' '/39 '('/40 Tile{ AsIs: e.FlushName#1/13 } ' '/41 'e'/42 '.'/43 'A'/44 'c'/45 'c'/46 'u'/47 'm'/48 ' '/49 </50 & EC/51 s.Char#1/18/52 >/53 ')'/54 ' '/55 '<'/56 Tile{ AsIs: e.NextStateName#1/9 } ' '/57 '('/58 ')'/59 ' '/60 'e'/61 '.'/62 'T'/63 'e'/64 'x'/65 't'/66 Tile{ HalfReuse: '>'/12 HalfReuse: ';'/8 HalfReuse: )/1 ]] }
    if( ! refalrts::alloc_char( context[21], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[22], '(' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[23], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[24], '.' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[25], 'A' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[26], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[27], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[28], 'u' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[29], 'm' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[30], ')' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[31], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[32], '.' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[33], 'T' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[34], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[35], 'x' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[36], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[37], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[38], '=' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[39], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[40], '(' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[41], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[42], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[43], '.' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[44], 'A' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[45], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[46], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[47], 'u' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[48], 'm' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[49], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[50] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[51], EC, "EC" ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[52], context[18]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[53] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[54], ')' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[55], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[56], '<' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[57], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[58], '(' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[59], ')' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[60], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[61], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[62], '.' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[63], 'T' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[64], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[65], 'x' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[66], 't' ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[16], ' ' );
    refalrts::reinit_char( context[0], ' ' );
    refalrts::reinit_open_call( context[4] );
    refalrts::reinit_name( context[7], EC, "EC" );
    refalrts::reinit_close_call( context[15] );
    refalrts::reinit_char( context[17], ' ' );
    refalrts::reinit_char( context[12], '>' );
    refalrts::reinit_char( context[8], ';' );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[11], context[1] );
    refalrts::push_stack( context[53] );
    refalrts::push_stack( context[50] );
    refalrts::push_stack( context[15] );
    refalrts::push_stack( context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[12];
    res = refalrts::splice_evar( res, context[57], context[66] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[41], context[56] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[31], context[40] );
    res = refalrts::splice_evar( res, context[0], context[17] );
    res = refalrts::splice_evar( res, context[21], context[30] );
    res = refalrts::splice_evar( res, context[16], context[16] );
    res = refalrts::splice_evar( res, context[11], context[11] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & WriteAlternative/4 (/7 s.Char#1/15 (/12 # FlushError/14 e.Message#1/10 )/13 # Finitive/9 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_right(  & ident_Finitive<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    context[10] = 0;
    context[11] = 0;
    context[12] = refalrts::brackets_right( context[10], context[11], context[5], context[6] );
    if( ! context[12] )
      continue;
    refalrts::bracket_pointers(context[12], context[13]);
    context[14] = refalrts::ident_left(  & ident_FlushError<int>::name, context[10], context[11] );
    if( ! context[14] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Message#1 as range 10
    if( ! refalrts::svar_left( context[15], context[5], context[6] ) )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: ' '/4 HalfReuse: ' '/7 } '('/16 'e'/17 '.'/18 'A'/19 'c'/20 'c'/21 'u'/22 'm'/23 ')'/24 ' '/25 </26 & EC/27 Tile{ AsIs: s.Char#1/15 } >/28 ' '/29 '='/30 ' '/31 '('/32 '#'/33 'T'/34 'o'/35 'k'/36 'e'/37 'n'/38 'E'/39 'r'/40 'r'/41 'o'/42 'r'/43 Tile{ HalfReuse: ' '/12 HalfReuse: '\''/14 AsIs: e.Message#1/10 HalfReuse: '\''/13 HalfReuse: ')'/9 HalfReuse: ';'/8 HalfReuse: )/1 ]] }
    if( ! refalrts::alloc_char( context[16], '(' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[17], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[18], '.' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[19], 'A' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[20], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[21], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[22], 'u' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[23], 'm' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[24], ')' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[25], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[26] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[27], EC, "EC" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[28] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[29], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[30], '=' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[31], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[32], '(' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[33], '#' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[34], 'T' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[35], 'o' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[36], 'k' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[37], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[38], 'n' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[39], 'E' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[40], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[41], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[42], 'o' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[43], 'r' ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_char( context[4], ' ' );
    refalrts::reinit_char( context[7], ' ' );
    refalrts::reinit_char( context[12], ' ' );
    refalrts::reinit_char( context[14], '\'' );
    refalrts::reinit_char( context[13], '\'' );
    refalrts::reinit_char( context[9], ')' );
    refalrts::reinit_char( context[8], ';' );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[0], context[1] );
    refalrts::push_stack( context[28] );
    refalrts::push_stack( context[26] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[12];
    res = refalrts::splice_evar( res, context[28], context[43] );
    res = refalrts::splice_evar( res, context[15], context[15] );
    res = refalrts::splice_evar( res, context[16], context[27] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & WriteAlternative/4 (/7 s.Char#1/18 (/15 # FlushError/17 e.Message#1/13 )/16 (/11 t.SrcPos#1/19 e.NextStateName#1/9 )/12 )/8 >/1
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
  context[11] = refalrts::brackets_right( context[9], context[10], context[5], context[6] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[11], context[12]);
  context[13] = 0;
  context[14] = 0;
  context[15] = refalrts::brackets_right( context[13], context[14], context[5], context[6] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[15], context[16]);
  context[17] = refalrts::ident_left(  & ident_FlushError<int>::name, context[13], context[14] );
  if( ! context[17] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Message#1 as range 13
  if( ! refalrts::svar_left( context[18], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  context[20] = refalrts::tvar_left( context[19], context[9], context[10] );
  if( ! context[20] )
    return refalrts::cRecognitionImpossible;
  // closed e.NextStateName#1 as range 9

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  t.SrcPos#1/19 {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ AsIs: (/11 } Tile{ HalfReuse: ' '/16 } ' '/21 '('/22 'e'/23 '.'/24 'A'/25 'c'/26 'c'/27 'u'/28 'm'/29 ')'/30 Tile{ HalfReuse: ' '/0 HalfReuse: </4 HalfReuse: & EC/7 AsIs: s.Char#1/18 HalfReuse: >/15 HalfReuse: ' '/17 } 'e'/31 '.'/32 'T'/33 'e'/34 'x'/35 't'/36 ' '/37 '='/38 ' '/39 '('/40 '#'/41 'T'/42 'o'/43 'k'/44 'e'/45 'n'/46 'E'/47 'r'/48 'r'/49 'o'/50 'r'/51 ' '/52 '\''/53 Tile{ AsIs: e.Message#1/13 } '\''/54 ')'/55 ' '/56 '<'/57 Tile{ AsIs: e.NextStateName#1/9 } ' '/58 '('/59 ')'/60 ' '/61 'e'/62 '.'/63 'T'/64 'e'/65 'x'/66 't'/67 ' '/68 Tile{ HalfReuse: '>'/12 HalfReuse: ';'/8 HalfReuse: )/1 ]] }
  if( ! refalrts::alloc_char( context[21], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[22], '(' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[23], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[24], '.' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[25], 'A' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[26], 'c' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[27], 'c' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[28], 'u' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[29], 'm' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[30], ')' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[31], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[32], '.' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[33], 'T' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[34], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[35], 'x' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[36], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[37], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[38], '=' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[39], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[40], '(' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[41], '#' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[42], 'T' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[43], 'o' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[44], 'k' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[45], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[46], 'n' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[47], 'E' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[48], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[49], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[50], 'o' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[51], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[52], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[53], '\'' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[54], '\'' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[55], ')' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[56], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[57], '<' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[58], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[59], '(' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[60], ')' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[61], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[62], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[63], '.' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[64], 'T' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[65], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[66], 'x' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[67], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[68], ' ' ) )
    return refalrts::cNoMemory;
  refalrts::reinit_char( context[16], ' ' );
  refalrts::reinit_char( context[0], ' ' );
  refalrts::reinit_open_call( context[4] );
  refalrts::reinit_name( context[7], EC, "EC" );
  refalrts::reinit_close_call( context[15] );
  refalrts::reinit_char( context[17], ' ' );
  refalrts::reinit_char( context[12], '>' );
  refalrts::reinit_char( context[8], ';' );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[11], context[1] );
  refalrts::push_stack( context[15] );
  refalrts::push_stack( context[4] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[12];
  res = refalrts::splice_evar( res, context[58], context[68] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[54], context[57] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[31], context[53] );
  res = refalrts::splice_evar( res, context[0], context[17] );
  res = refalrts::splice_evar( res, context[21], context[30] );
  res = refalrts::splice_evar( res, context[16], context[16] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult EC(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 8 elems
  refalrts::Iter context[8];
  refalrts::zeros( context, 8 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & EC/4 # Any/5 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::ident_left(  & ident_Any<int>::name, context[2], context[3] );
    if( ! context[5] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
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

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & EC/4 s.Other#1/5 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

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
}

static refalrts::FnResult Parse(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & Parse/4 e.Tokens#1/2 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Tokens#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } </5 & ParseElements/6 (/7 (/8 'A'/9 'n'/10 'y'/11 )/12 )/13 Tile{ HalfReuse: (/0 HalfReuse: )/4 AsIs: e.Tokens#1/2 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[5] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[6], ParseElements, "ParseElements" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[9], 'A' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[10], 'n' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[11], 'y' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[13] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_close_bracket( context[4] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[5] );
  refalrts::link_brackets( context[0], context[4] );
  refalrts::link_brackets( context[7], context[13] );
  refalrts::link_brackets( context[8], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[13] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult ParseElements(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 41 elems
  refalrts::Iter context[41];
  refalrts::zeros( context, 41 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & ParseElements/4 (/7 e.Sets_B#1/19 (/23 e.Name#1/25 )/24 e.Sets_E#1/27 )/8 (/11 e.Rules#1/9 )/12 (/15 # TSetName/17 s.LineNumber#1/18 e.Name#1/13 )/16 e.Tail#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_left( context[9], context[10], context[2], context[3] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    context[13] = 0;
    context[14] = 0;
    context[15] = refalrts::brackets_left( context[13], context[14], context[2], context[3] );
    if( ! context[15] )
      continue;
    refalrts::bracket_pointers(context[15], context[16]);
    context[17] = refalrts::ident_left(  & ident_TSetName<int>::name, context[13], context[14] );
    if( ! context[17] )
      continue;
    // closed e.Rules#1 as range 9
    // closed e.Tail#1 as range 2
    if( ! refalrts::svar_left( context[18], context[13], context[14] ) )
      continue;
    // closed e.Name#1 as range 13
    context[19] = 0;
    context[20] = 0;
    refalrts::start_e_loop();
    do {
      context[27] = context[5];
      context[28] = context[6];
      context[21] = 0;
      context[22] = 0;
      context[23] = refalrts::brackets_left( context[21], context[22], context[27], context[28] );
      if( ! context[23] )
        continue;
      refalrts::bracket_pointers(context[23], context[24]);
      if( ! refalrts::repeated_evar_left( context[25], context[26], context[13], context[14], context[21], context[22] ) )
        continue;
      if( ! refalrts::empty_seq( context[21], context[22] ) )
        continue;
      // closed e.Sets_E#1 as range 5

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE}  e.Sets_B#1/19 {REMOVED TILE}  e.Sets_E#1/27 {REMOVED TILE}  e.Rules#1/9 {REMOVED TILE}  s.LineNumber#1/18 e.Name#1/13 {REMOVED TILE}  e.Tail#1/2 {REMOVED TILE} 
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & ErrorAt/4 HalfReuse: s.LineNumber1 #18/7 } Tile{ HalfReuse: 'S'/12 HalfReuse: 'e'/15 HalfReuse: 't'/17 } Tile{ HalfReuse: ' '/8 HalfReuse: 'n'/11 } Tile{ HalfReuse: 'a'/16 } 'm'/29 'e'/30 Tile{ HalfReuse: ' '/23 AsIs: e.Name#1/25 HalfReuse: ' '/24 } 'r'/31 'e'/32 'd'/33 'e'/34 'c'/35 'l'/36 'a'/37 'r'/38 'e'/39 'd'/40 Tile{ AsIs: >/1 ]] }
      if( ! refalrts::alloc_char( context[29], 'm' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[30], 'e' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[31], 'r' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[32], 'e' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[33], 'd' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[34], 'e' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[35], 'c' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[36], 'l' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[37], 'a' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[38], 'r' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[39], 'e' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[40], 'd' ) )
        return refalrts::cNoMemory;
      refalrts::update_name( context[4], ErrorAt, "ErrorAt" );
      refalrts::reinit_svar( context[7], context[18] );
      refalrts::reinit_char( context[12], 'S' );
      refalrts::reinit_char( context[15], 'e' );
      refalrts::reinit_char( context[17], 't' );
      refalrts::reinit_char( context[8], ' ' );
      refalrts::reinit_char( context[11], 'n' );
      refalrts::reinit_char( context[16], 'a' );
      refalrts::reinit_char( context[23], ' ' );
      refalrts::reinit_char( context[24], ' ' );
      refalrts::push_stack( context[1] );
      refalrts::push_stack( context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[31], context[40] );
      res = refalrts::splice_evar( res, context[23], context[24] );
      res = refalrts::splice_evar( res, context[29], context[30] );
      res = refalrts::splice_evar( res, context[16], context[16] );
      res = refalrts::splice_evar( res, context[8], context[11] );
      res = refalrts::splice_evar( res, context[12], context[17] );
      refalrts::use( res );
      refalrts::splice_to_freelist_open( context[7], res );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[19], context[20], context[5], context[6] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & ParseElements/4 (/7 e.Sets#1/5 )/8 (/11 e.Rules#1/9 )/12 (/15 # TSetName/17 t.SrcPos#1/18 e.Name#1/13 )/16 e.Tail#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_left( context[9], context[10], context[2], context[3] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    context[13] = 0;
    context[14] = 0;
    context[15] = refalrts::brackets_left( context[13], context[14], context[2], context[3] );
    if( ! context[15] )
      continue;
    refalrts::bracket_pointers(context[15], context[16]);
    context[17] = refalrts::ident_left(  & ident_TSetName<int>::name, context[13], context[14] );
    if( ! context[17] )
      continue;
    // closed e.Sets#1 as range 5
    // closed e.Rules#1 as range 9
    // closed e.Tail#1 as range 2
    context[19] = refalrts::tvar_left( context[18], context[13], context[14] );
    if( ! context[19] )
      continue;
    // closed e.Name#1 as range 13

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  t.SrcPos#1/18 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ParseSetDescr/4 AsIs: (/7 AsIs: e.Sets#1/5 HalfReuse: (/8 } Tile{ AsIs: e.Name#1/13 } Tile{ HalfReuse: )/17 } )/20 Tile{ AsIs: (/11 AsIs: e.Rules#1/9 AsIs: )/12 AsIs: (/15 } e.Name#1/13/21 Tile{ AsIs: )/16 AsIs: e.Tail#1/2 AsIs: >/1 ]] }
    if( ! refalrts::alloc_close_bracket( context[20] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[21], context[22], context[13], context[14]))
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ParseSetDescr, "ParseSetDescr" );
    refalrts::reinit_open_bracket( context[8] );
    refalrts::reinit_close_bracket( context[17] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[15], context[16] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[7], context[20] );
    refalrts::link_brackets( context[8], context[17] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[16];
    res = refalrts::splice_evar( res, context[21], context[22] );
    res = refalrts::splice_evar( res, context[11], context[15] );
    res = refalrts::splice_evar( res, context[20], context[20] );
    res = refalrts::splice_evar( res, context[17], context[17] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[8], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & ParseElements/4 (/7 e.Sets#1/5 )/8 (/11 e.Rules_B#1/19 (/23 e.Name#1/25 )/24 e.Rules_E#1/27 )/12 (/15 # TName/17 s.LineNumber#1/18 e.Name#1/13 )/16 e.Tail#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_left( context[9], context[10], context[2], context[3] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    context[13] = 0;
    context[14] = 0;
    context[15] = refalrts::brackets_left( context[13], context[14], context[2], context[3] );
    if( ! context[15] )
      continue;
    refalrts::bracket_pointers(context[15], context[16]);
    context[17] = refalrts::ident_left(  & ident_TName<int>::name, context[13], context[14] );
    if( ! context[17] )
      continue;
    // closed e.Sets#1 as range 5
    // closed e.Tail#1 as range 2
    if( ! refalrts::svar_left( context[18], context[13], context[14] ) )
      continue;
    // closed e.Name#1 as range 13
    context[19] = 0;
    context[20] = 0;
    refalrts::start_e_loop();
    do {
      context[27] = context[9];
      context[28] = context[10];
      context[21] = 0;
      context[22] = 0;
      context[23] = refalrts::brackets_left( context[21], context[22], context[27], context[28] );
      if( ! context[23] )
        continue;
      refalrts::bracket_pointers(context[23], context[24]);
      if( ! refalrts::repeated_evar_left( context[25], context[26], context[13], context[14], context[21], context[22] ) )
        continue;
      if( ! refalrts::empty_seq( context[21], context[22] ) )
        continue;
      // closed e.Rules_E#1 as range 9

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE}  e.Sets#1/5 {REMOVED TILE}  e.Rules_B#1/19 {REMOVED TILE}  e.Rules_E#1/27 {REMOVED TILE}  s.LineNumber#1/18 e.Name#1/13 {REMOVED TILE}  e.Tail#1/2 {REMOVED TILE} 
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & ErrorAt/4 HalfReuse: s.LineNumber1 #18/7 } Tile{ HalfReuse: 'N'/12 HalfReuse: 'a'/15 HalfReuse: 'm'/17 } Tile{ HalfReuse: 'e'/16 } Tile{ HalfReuse: ' '/23 AsIs: e.Name#1/25 HalfReuse: ' '/24 } Tile{ HalfReuse: 'r'/8 HalfReuse: 'e'/11 } 'd'/29 'e'/30 'c'/31 'l'/32 'a'/33 'r'/34 'e'/35 'd'/36 Tile{ AsIs: >/1 ]] }
      if( ! refalrts::alloc_char( context[29], 'd' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[30], 'e' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[31], 'c' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[32], 'l' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[33], 'a' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[34], 'r' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[35], 'e' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[36], 'd' ) )
        return refalrts::cNoMemory;
      refalrts::update_name( context[4], ErrorAt, "ErrorAt" );
      refalrts::reinit_svar( context[7], context[18] );
      refalrts::reinit_char( context[12], 'N' );
      refalrts::reinit_char( context[15], 'a' );
      refalrts::reinit_char( context[17], 'm' );
      refalrts::reinit_char( context[16], 'e' );
      refalrts::reinit_char( context[23], ' ' );
      refalrts::reinit_char( context[24], ' ' );
      refalrts::reinit_char( context[8], 'r' );
      refalrts::reinit_char( context[11], 'e' );
      refalrts::push_stack( context[1] );
      refalrts::push_stack( context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[29], context[36] );
      res = refalrts::splice_evar( res, context[8], context[11] );
      res = refalrts::splice_evar( res, context[23], context[24] );
      res = refalrts::splice_evar( res, context[16], context[16] );
      res = refalrts::splice_evar( res, context[12], context[17] );
      refalrts::use( res );
      refalrts::splice_to_freelist_open( context[7], res );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[19], context[20], context[9], context[10] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & ParseElements/4 (/7 e.Sets#1/5 )/8 (/11 e.Rules#1/9 )/12 (/15 # TName/17 t.SrcPos#1/18 e.Name#1/13 )/16 e.Tail#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_left( context[9], context[10], context[2], context[3] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    context[13] = 0;
    context[14] = 0;
    context[15] = refalrts::brackets_left( context[13], context[14], context[2], context[3] );
    if( ! context[15] )
      continue;
    refalrts::bracket_pointers(context[15], context[16]);
    context[17] = refalrts::ident_left(  & ident_TName<int>::name, context[13], context[14] );
    if( ! context[17] )
      continue;
    // closed e.Sets#1 as range 5
    // closed e.Rules#1 as range 9
    // closed e.Tail#1 as range 2
    context[19] = refalrts::tvar_left( context[18], context[13], context[14] );
    if( ! context[19] )
      continue;
    // closed e.Name#1 as range 13

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  t.SrcPos#1/18 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ParseSentence/4 AsIs: (/7 AsIs: e.Sets#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.Rules#1/9 HalfReuse: (/12 } Tile{ AsIs: e.Name#1/13 } Tile{ HalfReuse: )/17 } )/20 Tile{ AsIs: (/15 } e.Name#1/13/21 Tile{ AsIs: )/16 AsIs: e.Tail#1/2 AsIs: >/1 ]] }
    if( ! refalrts::alloc_close_bracket( context[20] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[21], context[22], context[13], context[14]))
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ParseSentence, "ParseSentence" );
    refalrts::reinit_open_bracket( context[12] );
    refalrts::reinit_close_bracket( context[17] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[15], context[16] );
    refalrts::link_brackets( context[11], context[20] );
    refalrts::link_brackets( context[12], context[17] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[16];
    res = refalrts::splice_evar( res, context[21], context[22] );
    res = refalrts::splice_evar( res, context[15], context[15] );
    res = refalrts::splice_evar( res, context[20], context[20] );
    res = refalrts::splice_evar( res, context[17], context[17] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[12], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & ParseElements/4 (/7 e.Sets#1/5 )/8 (/11 e.Rules#1/9 )/12 (/15 # TEOF/17 t.SrcPos#1/18 )/16 e.Tail#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_left( context[9], context[10], context[2], context[3] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    context[13] = 0;
    context[14] = 0;
    context[15] = refalrts::brackets_left( context[13], context[14], context[2], context[3] );
    if( ! context[15] )
      continue;
    refalrts::bracket_pointers(context[15], context[16]);
    context[17] = refalrts::ident_left(  & ident_TEOF<int>::name, context[13], context[14] );
    if( ! context[17] )
      continue;
    // closed e.Sets#1 as range 5
    // closed e.Rules#1 as range 9
    // closed e.Tail#1 as range 2
    context[19] = refalrts::tvar_left( context[18], context[13], context[14] );
    if( ! context[19] )
      continue;
    if( ! refalrts::empty_seq( context[13], context[14] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & ParseElements/4 (/7 e.Sets#1/5 )/8 (/11 e.Rules#1/9 )/12 (/15 # TEOF/17 t.SrcPos#1/18 )/16 e.Tail#1/2 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & ParseElements/4 (/7 e.Sets#1/5 )/8 (/11 e.Rules#1/9 )/12 t.Unexpected#1/13 e.Tail#1/2 >/1
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
  // closed e.Sets#1 as range 5
  // closed e.Rules#1 as range 9
  context[14] = refalrts::tvar_left( context[13], context[2], context[3] );
  if( ! context[14] )
    return refalrts::cRecognitionImpossible;
  // closed e.Tail#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  e.Sets#1/5 {REMOVED TILE}  e.Rules#1/9 {REMOVED TILE}  {REMOVED TILE}  e.Tail#1/2 {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & UnexpectedToken/4 } Tile{ AsIs: t.Unexpected#1/13 } Tile{ HalfReuse: 'n'/8 HalfReuse: 'a'/11 } Tile{ HalfReuse: 'm'/7 } Tile{ HalfReuse: 'e'/12 } ' '/15 'o'/16 'r'/17 ' '/18 's'/19 'e'/20 't'/21 ' '/22 'n'/23 'a'/24 'm'/25 'e'/26 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_char( context[15], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[16], 'o' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[17], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[18], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[19], 's' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[20], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[21], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[22], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[23], 'n' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[24], 'a' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[25], 'm' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[26], 'e' ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], UnexpectedToken, "UnexpectedToken" );
  refalrts::reinit_char( context[8], 'n' );
  refalrts::reinit_char( context[11], 'a' );
  refalrts::reinit_char( context[7], 'm' );
  refalrts::reinit_char( context[12], 'e' );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[15], context[26] );
  res = refalrts::splice_evar( res, context[12], context[12] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[8], context[11] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[4], res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult ParseSetDescr(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 24 elems
  refalrts::Iter context[24];
  refalrts::zeros( context, 24 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & ParseSetDescr/4 (/7 e.Sets#1/5 )/8 (/11 e.Rules#1/9 )/12 (/15 e.Name#1/13 )/16 (/19 # TEquals/21 t.SrcPos#1/22 )/20 e.Tail#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_left( context[9], context[10], context[2], context[3] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    context[13] = 0;
    context[14] = 0;
    context[15] = refalrts::brackets_left( context[13], context[14], context[2], context[3] );
    if( ! context[15] )
      continue;
    refalrts::bracket_pointers(context[15], context[16]);
    context[17] = 0;
    context[18] = 0;
    context[19] = refalrts::brackets_left( context[17], context[18], context[2], context[3] );
    if( ! context[19] )
      continue;
    refalrts::bracket_pointers(context[19], context[20]);
    context[21] = refalrts::ident_left(  & ident_TEquals<int>::name, context[17], context[18] );
    if( ! context[21] )
      continue;
    // closed e.Sets#1 as range 5
    // closed e.Rules#1 as range 9
    // closed e.Name#1 as range 13
    // closed e.Tail#1 as range 2
    context[23] = refalrts::tvar_left( context[22], context[17], context[18] );
    if( ! context[23] )
      continue;
    if( ! refalrts::empty_seq( context[17], context[18] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  (/19 # TEquals/21 t.SrcPos#1/22 )/20 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ParseSetDescr_Sets/4 AsIs: (/7 AsIs: e.Sets#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.Rules#1/9 AsIs: )/12 AsIs: (/15 AsIs: e.Name#1/13 AsIs: )/16 } Tile{ AsIs: e.Tail#1/2 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name( context[4], ParseSetDescr_Sets, "ParseSetDescr_Sets" );
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

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & ParseSetDescr/4 (/7 e.Sets#1/5 )/8 (/11 e.Rules#1/9 )/12 (/15 e.Name#1/13 )/16 t.Unexpected#1/17 e.Tail#1/2 >/1
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
  context[18] = refalrts::tvar_left( context[17], context[2], context[3] );
  if( ! context[18] )
    return refalrts::cRecognitionImpossible;
  // closed e.Tail#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  e.Sets#1/5 {REMOVED TILE}  e.Rules#1/9 )/12 (/15 e.Name#1/13 )/16 {REMOVED TILE}  e.Tail#1/2 {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & UnexpectedToken/4 } Tile{ AsIs: t.Unexpected#1/17 } Tile{ HalfReuse: '\"'/8 HalfReuse: '='/11 } Tile{ HalfReuse: '\"'/7 } Tile{ AsIs: >/1 ]] }
  refalrts::update_name( context[4], UnexpectedToken, "UnexpectedToken" );
  refalrts::reinit_char( context[8], '\"' );
  refalrts::reinit_char( context[11], '=' );
  refalrts::reinit_char( context[7], '\"' );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[8], context[11] );
  res = refalrts::splice_evar( res, context[17], context[18] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[4], res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult ParseSetDescr_Sets(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & ParseSetDescr_Sets/4 (/7 e.Sets#1/5 )/8 (/11 e.Rules#1/9 )/12 (/15 e.Name#1/13 )/16 e.Tail#1/2 >/1
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
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & ParseSetDescr_Sets_Aux/4 AsIs: (/7 AsIs: e.Sets#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.Rules#1/9 AsIs: )/12 AsIs: (/15 AsIs: e.Name#1/13 AsIs: )/16 } </17 & ExtractSets/18 (/19 )/20 Tile{ AsIs: e.Tail#1/2 } >/21 Tile{ AsIs: >/1 ]] }
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
  refalrts::update_name( context[4], ParseSetDescr_Sets_Aux, "ParseSetDescr_Sets_Aux" );
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
}

static refalrts::FnResult ExtractSets(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & ExtractSets/4 (/7 e.Found#1/5 )/8 (/11 # TLiteral/13 t.SrcPos#1/14 e.Content#1/9 )/12 e.Tail#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_left( context[9], context[10], context[2], context[3] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    context[13] = refalrts::ident_left(  & ident_TLiteral<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    // closed e.Found#1 as range 5
    // closed e.Tail#1 as range 2
    context[15] = refalrts::tvar_left( context[14], context[9], context[10] );
    if( ! context[15] )
      continue;
    // closed e.Content#1 as range 9

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  t.SrcPos#1/14 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ExtractSets/4 AsIs: (/7 AsIs: e.Found#1/5 HalfReuse: (/8 HalfReuse: # Chars/11 } Tile{ AsIs: e.Content#1/9 } Tile{ HalfReuse: )/13 } Tile{ AsIs: )/12 AsIs: e.Tail#1/2 AsIs: >/1 ]] }
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
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & ExtractSets/4 (/7 e.Found#1/5 )/8 (/11 # TSetName/13 t.SrcPos#1/14 e.Name#1/9 )/12 e.Tail#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_left( context[9], context[10], context[2], context[3] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    context[13] = refalrts::ident_left(  & ident_TSetName<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    // closed e.Found#1 as range 5
    // closed e.Tail#1 as range 2
    context[15] = refalrts::tvar_left( context[14], context[9], context[10] );
    if( ! context[15] )
      continue;
    // closed e.Name#1 as range 9

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ExtractSets/4 AsIs: (/7 AsIs: e.Found#1/5 HalfReuse: (/8 HalfReuse: # Set/11 } Tile{ AsIs: t.SrcPos#1/14 } Tile{ AsIs: e.Name#1/9 } Tile{ HalfReuse: )/13 } Tile{ AsIs: )/12 AsIs: e.Tail#1/2 AsIs: >/1 ]] }
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

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & ExtractSets/4 (/7 e.Found#1/5 )/8 e.OtherTail#1/2 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
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
}

static refalrts::FnResult ParseSetDescr_Sets_Aux(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 38 elems
  refalrts::Iter context[38];
  refalrts::zeros( context, 38 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & ParseSetDescr_Sets_Aux/4 (/7 e.Sets#1/5 )/8 (/11 e.Rules#1/9 )/12 (/15 e.Name#1/13 )/16 (/19 )/20 (/23 # TDot/25 s.LineNumber#1/26 )/24 e.Tail#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_left( context[9], context[10], context[2], context[3] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    context[13] = 0;
    context[14] = 0;
    context[15] = refalrts::brackets_left( context[13], context[14], context[2], context[3] );
    if( ! context[15] )
      continue;
    refalrts::bracket_pointers(context[15], context[16]);
    context[17] = 0;
    context[18] = 0;
    context[19] = refalrts::brackets_left( context[17], context[18], context[2], context[3] );
    if( ! context[19] )
      continue;
    refalrts::bracket_pointers(context[19], context[20]);
    context[21] = 0;
    context[22] = 0;
    context[23] = refalrts::brackets_left( context[21], context[22], context[2], context[3] );
    if( ! context[23] )
      continue;
    refalrts::bracket_pointers(context[23], context[24]);
    context[25] = refalrts::ident_left(  & ident_TDot<int>::name, context[21], context[22] );
    if( ! context[25] )
      continue;
    if( ! refalrts::empty_seq( context[17], context[18] ) )
      continue;
    // closed e.Sets#1 as range 5
    // closed e.Rules#1 as range 9
    // closed e.Name#1 as range 13
    // closed e.Tail#1 as range 2
    if( ! refalrts::svar_left( context[26], context[21], context[22] ) )
      continue;
    if( ! refalrts::empty_seq( context[21], context[22] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  e.Sets#1/5 {REMOVED TILE}  e.Rules#1/9 {REMOVED TILE}  s.LineNumber#1/26 {REMOVED TILE}  e.Tail#1/2 {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ErrorAt/4 HalfReuse: s.LineNumber1 #26/7 } Tile{ HalfReuse: 'S'/8 HalfReuse: 'e'/11 } Tile{ HalfReuse: 't'/12 HalfReuse: ' '/15 AsIs: e.Name#1/13 HalfReuse: ' '/16 HalfReuse: 'n'/19 HalfReuse: 'o'/20 HalfReuse: 't'/23 HalfReuse: ' '/25 } Tile{ HalfReuse: 'h'/24 } 'a'/27 'v'/28 'e'/29 ' '/30 'c'/31 'o'/32 'n'/33 't'/34 'e'/35 'n'/36 't'/37 Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_char( context[27], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[28], 'v' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[29], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[30], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[31], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[32], 'o' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[33], 'n' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[34], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[35], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[36], 'n' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[37], 't' ) )
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
    res = refalrts::splice_evar( res, context[27], context[37] );
    res = refalrts::splice_evar( res, context[24], context[24] );
    res = refalrts::splice_evar( res, context[12], context[25] );
    res = refalrts::splice_evar( res, context[8], context[11] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[7], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & ParseSetDescr_Sets_Aux/4 (/7 e.Sets#1/5 )/8 (/11 e.Rules#1/9 )/12 (/15 e.Name#1/13 )/16 (/19 e.Body#1/17 )/20 (/23 # TDot/25 t.SrcPos#1/26 )/24 e.Tail#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_left( context[9], context[10], context[2], context[3] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    context[13] = 0;
    context[14] = 0;
    context[15] = refalrts::brackets_left( context[13], context[14], context[2], context[3] );
    if( ! context[15] )
      continue;
    refalrts::bracket_pointers(context[15], context[16]);
    context[17] = 0;
    context[18] = 0;
    context[19] = refalrts::brackets_left( context[17], context[18], context[2], context[3] );
    if( ! context[19] )
      continue;
    refalrts::bracket_pointers(context[19], context[20]);
    context[21] = 0;
    context[22] = 0;
    context[23] = refalrts::brackets_left( context[21], context[22], context[2], context[3] );
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
    // closed e.Tail#1 as range 2
    context[27] = refalrts::tvar_left( context[26], context[21], context[22] );
    if( ! context[27] )
      continue;
    if( ! refalrts::empty_seq( context[21], context[22] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  (/19 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  t.SrcPos#1/26 )/24 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/23 Reuse: # Set/25 } Tile{ AsIs: (/15 AsIs: e.Name#1/13 AsIs: )/16 } Tile{ AsIs: e.Body#1/17 } Tile{ AsIs: )/20 } Tile{ AsIs: </0 Reuse: & ParseElements/4 AsIs: (/7 AsIs: e.Sets#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.Rules#1/9 AsIs: )/12 } Tile{ AsIs: e.Tail#1/2 } Tile{ AsIs: >/1 ]] }
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
    res = refalrts::splice_evar( res, context[2], context[3] );
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
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & ParseSetDescr_Sets_Aux/4 (/7 e.Sets#1/5 )/8 (/11 e.Rules#1/9 )/12 (/15 e.Name#1/13 )/16 (/19 e.Body#1/17 )/20 t.Unexpected#1/21 e.Tail#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_left( context[9], context[10], context[2], context[3] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    context[13] = 0;
    context[14] = 0;
    context[15] = refalrts::brackets_left( context[13], context[14], context[2], context[3] );
    if( ! context[15] )
      continue;
    refalrts::bracket_pointers(context[15], context[16]);
    context[17] = 0;
    context[18] = 0;
    context[19] = refalrts::brackets_left( context[17], context[18], context[2], context[3] );
    if( ! context[19] )
      continue;
    refalrts::bracket_pointers(context[19], context[20]);
    // closed e.Sets#1 as range 5
    // closed e.Rules#1 as range 9
    // closed e.Name#1 as range 13
    // closed e.Body#1 as range 17
    context[22] = refalrts::tvar_left( context[21], context[2], context[3] );
    if( ! context[22] )
      continue;
    // closed e.Tail#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  e.Sets#1/5 {REMOVED TILE}  e.Rules#1/9 {REMOVED TILE}  e.Name#1/13 {REMOVED TILE}  e.Body#1/17 {REMOVED TILE}  {REMOVED TILE}  e.Tail#1/2 {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & UnexpectedToken/4 } Tile{ AsIs: t.Unexpected#1/21 } Tile{ HalfReuse: 'd'/8 HalfReuse: 'o'/11 } Tile{ HalfReuse: 't'/12 HalfReuse: ' '/15 } Tile{ HalfReuse: 'a'/16 HalfReuse: 't'/19 } Tile{ HalfReuse: ' '/7 } Tile{ HalfReuse: 'e'/20 } 'n'/23 'd'/24 ' '/25 'o'/26 'f'/27 ' '/28 's'/29 'e'/30 't'/31 Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_char( context[23], 'n' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[24], 'd' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[25], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[26], 'o' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[27], 'f' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[28], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[29], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[30], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[31], 't' ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], UnexpectedToken, "UnexpectedToken" );
    refalrts::reinit_char( context[8], 'd' );
    refalrts::reinit_char( context[11], 'o' );
    refalrts::reinit_char( context[12], 't' );
    refalrts::reinit_char( context[15], ' ' );
    refalrts::reinit_char( context[16], 'a' );
    refalrts::reinit_char( context[19], 't' );
    refalrts::reinit_char( context[7], ' ' );
    refalrts::reinit_char( context[20], 'e' );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[23], context[31] );
    res = refalrts::splice_evar( res, context[20], context[20] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    res = refalrts::splice_evar( res, context[16], context[19] );
    res = refalrts::splice_evar( res, context[12], context[15] );
    res = refalrts::splice_evar( res, context[8], context[11] );
    res = refalrts::splice_evar( res, context[21], context[22] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & ParseSetDescr_Sets_Aux/4 (/7 e.Sets#1/5 )/8 (/11 e.Rules#1/9 )/12 (/15 e.Name#1/13 )/16 (/19 e.Body#1/17 )/20 >/1
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
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Sets#1 as range 5
  // closed e.Rules#1 as range 9
  // closed e.Name#1 as range 13
  // closed e.Body#1 as range 17

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  e.Sets#1/5 {REMOVED TILE}  e.Rules#1/9 {REMOVED TILE}  e.Name#1/13 {REMOVED TILE}  e.Body#1/17 {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Error/4 HalfReuse: 'U'/7 } Tile{ HalfReuse: 'n'/8 HalfReuse: 'e'/11 } Tile{ HalfReuse: 'x'/12 HalfReuse: 'p'/15 } Tile{ HalfReuse: 'e'/16 HalfReuse: 'c'/19 } 't'/21 'e'/22 'd'/23 ' '/24 'e'/25 'o'/26 Tile{ HalfReuse: 'f'/20 AsIs: >/1 ]] }
  if( ! refalrts::alloc_char( context[21], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[22], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[23], 'd' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[24], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[25], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[26], 'o' ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], Error, "Error" );
  refalrts::reinit_char( context[7], 'U' );
  refalrts::reinit_char( context[8], 'n' );
  refalrts::reinit_char( context[11], 'e' );
  refalrts::reinit_char( context[12], 'x' );
  refalrts::reinit_char( context[15], 'p' );
  refalrts::reinit_char( context[16], 'e' );
  refalrts::reinit_char( context[19], 'c' );
  refalrts::reinit_char( context[20], 'f' );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[20];
  res = refalrts::splice_evar( res, context[21], context[26] );
  res = refalrts::splice_evar( res, context[16], context[19] );
  res = refalrts::splice_evar( res, context[12], context[15] );
  res = refalrts::splice_evar( res, context[8], context[11] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[7], res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult ParseSentence(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 26 elems
  refalrts::Iter context[26];
  refalrts::zeros( context, 26 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & ParseSentence/4 (/7 e.Sets#1/5 )/8 (/11 e.Rules#1/9 )/12 (/15 e.Name#1/13 )/16 (/19 # TEquals/21 t.SrcPos#1/22 )/20 e.Tail#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_left( context[9], context[10], context[2], context[3] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    context[13] = 0;
    context[14] = 0;
    context[15] = refalrts::brackets_left( context[13], context[14], context[2], context[3] );
    if( ! context[15] )
      continue;
    refalrts::bracket_pointers(context[15], context[16]);
    context[17] = 0;
    context[18] = 0;
    context[19] = refalrts::brackets_left( context[17], context[18], context[2], context[3] );
    if( ! context[19] )
      continue;
    refalrts::bracket_pointers(context[19], context[20]);
    context[21] = refalrts::ident_left(  & ident_TEquals<int>::name, context[17], context[18] );
    if( ! context[21] )
      continue;
    // closed e.Sets#1 as range 5
    // closed e.Rules#1 as range 9
    // closed e.Name#1 as range 13
    // closed e.Tail#1 as range 2
    context[23] = refalrts::tvar_left( context[22], context[17], context[18] );
    if( ! context[23] )
      continue;
    if( ! refalrts::empty_seq( context[17], context[18] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  t.SrcPos#1/22 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ParseSentence_Body/4 AsIs: (/7 AsIs: e.Sets#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.Rules#1/9 AsIs: )/12 AsIs: (/15 AsIs: e.Name#1/13 AsIs: )/16 HalfReuse: </19 HalfReuse: & ExtractAlternatives/21 } (/24 Tile{ AsIs: )/20 AsIs: e.Tail#1/2 AsIs: >/1 } >/25 Tile{ ]] }
    if( ! refalrts::alloc_open_bracket( context[24] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[25] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ParseSentence_Body, "ParseSentence_Body" );
    refalrts::reinit_open_call( context[19] );
    refalrts::reinit_name( context[21], ExtractAlternatives, "ExtractAlternatives" );
    refalrts::push_stack( context[25] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[19] );
    refalrts::link_brackets( context[24], context[20] );
    refalrts::link_brackets( context[15], context[16] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[25], context[25] );
    res = refalrts::splice_evar( res, context[20], context[1] );
    res = refalrts::splice_evar( res, context[24], context[24] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[21], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & ParseSentence/4 (/7 e.Sets#1/5 )/8 (/11 e.Rules#1/9 )/12 (/15 e.Name#1/13 )/16 t.Unexpected#1/17 e.Tail#1/2 >/1
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
  context[18] = refalrts::tvar_left( context[17], context[2], context[3] );
  if( ! context[18] )
    return refalrts::cRecognitionImpossible;
  // closed e.Tail#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  e.Sets#1/5 {REMOVED TILE}  e.Rules#1/9 )/12 (/15 e.Name#1/13 )/16 {REMOVED TILE}  e.Tail#1/2 {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & UnexpectedToken/4 } Tile{ AsIs: t.Unexpected#1/17 } Tile{ HalfReuse: '\"'/8 HalfReuse: '='/11 } Tile{ HalfReuse: '\"'/7 } Tile{ AsIs: >/1 ]] }
  refalrts::update_name( context[4], UnexpectedToken, "UnexpectedToken" );
  refalrts::reinit_char( context[8], '\"' );
  refalrts::reinit_char( context[11], '=' );
  refalrts::reinit_char( context[7], '\"' );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[8], context[11] );
  res = refalrts::splice_evar( res, context[17], context[18] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[4], res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult ParseSentence_Body(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 30 elems
  refalrts::Iter context[30];
  refalrts::zeros( context, 30 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & ParseSentence_Body/4 (/7 e.Sets#1/5 )/8 (/11 e.Rules#1/9 )/12 (/15 e.Name#1/13 )/16 (/19 e.Body#1/17 )/20 (/23 # TDot/25 t.SrcPos#1/26 )/24 e.Tail#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_left( context[9], context[10], context[2], context[3] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    context[13] = 0;
    context[14] = 0;
    context[15] = refalrts::brackets_left( context[13], context[14], context[2], context[3] );
    if( ! context[15] )
      continue;
    refalrts::bracket_pointers(context[15], context[16]);
    context[17] = 0;
    context[18] = 0;
    context[19] = refalrts::brackets_left( context[17], context[18], context[2], context[3] );
    if( ! context[19] )
      continue;
    refalrts::bracket_pointers(context[19], context[20]);
    context[21] = 0;
    context[22] = 0;
    context[23] = refalrts::brackets_left( context[21], context[22], context[2], context[3] );
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
    // closed e.Tail#1 as range 2
    context[27] = refalrts::tvar_left( context[26], context[21], context[22] );
    if( ! context[27] )
      continue;
    if( ! refalrts::empty_seq( context[21], context[22] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  (/19 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  t.SrcPos#1/26 )/24 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/23 Reuse: # Sentence/25 } Tile{ AsIs: (/15 AsIs: e.Name#1/13 AsIs: )/16 } Tile{ AsIs: e.Body#1/17 } Tile{ AsIs: )/20 } Tile{ AsIs: </0 Reuse: & ParseElements/4 AsIs: (/7 AsIs: e.Sets#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.Rules#1/9 AsIs: )/12 } Tile{ AsIs: e.Tail#1/2 } Tile{ AsIs: >/1 ]] }
    refalrts::update_ident( context[25], & ident_Sentence<int>::name );
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
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[0], context[12] );
    res = refalrts::splice_evar( res, context[20], context[20] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[23], context[25] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & ParseSentence_Body/4 (/7 e.Sets#1/5 )/8 (/11 e.Rules#1/9 )/12 (/15 e.Name#1/13 )/16 (/19 e.Body#1/17 )/20 t.Unexpected#1/21 e.Tail#1/2 >/1
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
  // closed e.Sets#1 as range 5
  // closed e.Rules#1 as range 9
  // closed e.Name#1 as range 13
  // closed e.Body#1 as range 17
  context[22] = refalrts::tvar_left( context[21], context[2], context[3] );
  if( ! context[22] )
    return refalrts::cRecognitionImpossible;
  // closed e.Tail#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  e.Sets#1/5 {REMOVED TILE}  e.Rules#1/9 {REMOVED TILE}  e.Name#1/13 {REMOVED TILE}  e.Body#1/17 {REMOVED TILE}  {REMOVED TILE}  e.Tail#1/2 {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & UnexpectedToken/4 } Tile{ AsIs: t.Unexpected#1/21 } Tile{ HalfReuse: 'e'/8 HalfReuse: 'n'/11 } Tile{ HalfReuse: 'd'/12 HalfReuse: ' '/15 } Tile{ HalfReuse: 'o'/16 HalfReuse: 'f'/19 } Tile{ HalfReuse: ' '/7 } Tile{ HalfReuse: 's'/20 } 'e'/23 'n'/24 't'/25 'e'/26 'n'/27 'c'/28 'e'/29 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_char( context[23], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[24], 'n' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[25], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[26], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[27], 'n' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[28], 'c' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[29], 'e' ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], UnexpectedToken, "UnexpectedToken" );
  refalrts::reinit_char( context[8], 'e' );
  refalrts::reinit_char( context[11], 'n' );
  refalrts::reinit_char( context[12], 'd' );
  refalrts::reinit_char( context[15], ' ' );
  refalrts::reinit_char( context[16], 'o' );
  refalrts::reinit_char( context[19], 'f' );
  refalrts::reinit_char( context[7], ' ' );
  refalrts::reinit_char( context[20], 's' );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[23], context[29] );
  res = refalrts::splice_evar( res, context[20], context[20] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[16], context[19] );
  res = refalrts::splice_evar( res, context[12], context[15] );
  res = refalrts::splice_evar( res, context[8], context[11] );
  res = refalrts::splice_evar( res, context[21], context[22] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[4], res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult ExtractAlternatives(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 29 elems
  refalrts::Iter context[29];
  refalrts::zeros( context, 29 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & ExtractAlternatives/4 (/7 e.Found#1/5 )/8 (/11 # TLiteral/13 t.SrcPos#1/14 e.Content#1/9 )/12 e.Tail#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_left( context[9], context[10], context[2], context[3] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    context[13] = refalrts::ident_left(  & ident_TLiteral<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    // closed e.Found#1 as range 5
    // closed e.Tail#1 as range 2
    context[15] = refalrts::tvar_left( context[14], context[9], context[10] );
    if( ! context[15] )
      continue;
    // closed e.Content#1 as range 9

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  t.SrcPos#1/14 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ExtractAlternatives_Flush/4 AsIs: (/7 AsIs: e.Found#1/5 AsIs: )/8 AsIs: (/11 Reuse: # Chars/13 } Tile{ AsIs: e.Content#1/9 } Tile{ AsIs: )/12 AsIs: e.Tail#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], ExtractAlternatives_Flush, "ExtractAlternatives_Flush" );
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
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & ExtractAlternatives/4 (/7 e.Found#1/5 )/8 (/11 # TSetName/13 t.SrcPos#1/14 e.Content#1/9 )/12 e.Tail#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_left( context[9], context[10], context[2], context[3] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    context[13] = refalrts::ident_left(  & ident_TSetName<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    // closed e.Found#1 as range 5
    // closed e.Tail#1 as range 2
    context[15] = refalrts::tvar_left( context[14], context[9], context[10] );
    if( ! context[15] )
      continue;
    // closed e.Content#1 as range 9

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ExtractAlternatives_Flush/4 AsIs: (/7 AsIs: e.Found#1/5 AsIs: )/8 AsIs: (/11 Reuse: # Set/13 AsIs: t.SrcPos#1/14 AsIs: e.Content#1/9 AsIs: )/12 AsIs: e.Tail#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], ExtractAlternatives_Flush, "ExtractAlternatives_Flush" );
    refalrts::update_ident( context[13], & ident_Set<int>::name );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[7], context[8] );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & ExtractAlternatives/4 (/7 e.Found#1/5 )/8 (/11 # TFlush/13 t.SrcPos#1/14 )/12 e.Tail#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_left( context[9], context[10], context[2], context[3] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    context[13] = refalrts::ident_left(  & ident_TFlush<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    // closed e.Found#1 as range 5
    // closed e.Tail#1 as range 2
    context[15] = refalrts::tvar_left( context[14], context[9], context[10] );
    if( ! context[15] )
      continue;
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ExtractAlternatives_Flush/4 AsIs: (/7 } Tile{ AsIs: e.Found#1/5 } )/16 Tile{ HalfReuse: # Empty/8 AsIs: (/11 AsIs: # TFlush/13 AsIs: t.SrcPos#1/14 AsIs: )/12 AsIs: e.Tail#1/2 AsIs: >/1 ]] }
    if( ! refalrts::alloc_close_bracket( context[16] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ExtractAlternatives_Flush, "ExtractAlternatives_Flush" );
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
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & ExtractAlternatives/4 (/7 e.Found#1/5 )/8 (/11 # TNamedFlush/13 t.SrcPos#1/14 e.Name#1/9 )/12 e.Tail#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_left( context[9], context[10], context[2], context[3] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    context[13] = refalrts::ident_left(  & ident_TNamedFlush<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    // closed e.Found#1 as range 5
    // closed e.Tail#1 as range 2
    context[15] = refalrts::tvar_left( context[14], context[9], context[10] );
    if( ! context[15] )
      continue;
    // closed e.Name#1 as range 9

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ExtractAlternatives_Flush/4 AsIs: (/7 } Tile{ AsIs: e.Found#1/5 } )/16 Tile{ HalfReuse: # Empty/8 AsIs: (/11 AsIs: # TNamedFlush/13 AsIs: t.SrcPos#1/14 AsIs: e.Name#1/9 AsIs: )/12 AsIs: e.Tail#1/2 AsIs: >/1 ]] }
    if( ! refalrts::alloc_close_bracket( context[16] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ExtractAlternatives_Flush, "ExtractAlternatives_Flush" );
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
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & ExtractAlternatives/4 (/7 e.Found#1/5 )/8 (/11 # TErrorFlush/13 t.SrcPos#1/14 e.Message#1/9 )/12 e.Tail#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_left( context[9], context[10], context[2], context[3] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    context[13] = refalrts::ident_left(  & ident_TErrorFlush<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    // closed e.Found#1 as range 5
    // closed e.Tail#1 as range 2
    context[15] = refalrts::tvar_left( context[14], context[9], context[10] );
    if( ! context[15] )
      continue;
    // closed e.Message#1 as range 9

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ExtractAlternatives_Flush/4 AsIs: (/7 } Tile{ AsIs: e.Found#1/5 } )/16 Tile{ HalfReuse: # Empty/8 AsIs: (/11 AsIs: # TErrorFlush/13 AsIs: t.SrcPos#1/14 AsIs: e.Message#1/9 AsIs: )/12 AsIs: e.Tail#1/2 AsIs: >/1 ]] }
    if( ! refalrts::alloc_close_bracket( context[16] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ExtractAlternatives_Flush, "ExtractAlternatives_Flush" );
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
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & ExtractAlternatives/4 (/7 e.Found#1/5 )/8 (/11 # TName/13 t.SrcPos#1/14 e.Name#1/9 )/12 e.Tail#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_left( context[9], context[10], context[2], context[3] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    context[13] = refalrts::ident_left(  & ident_TName<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    // closed e.Found#1 as range 5
    // closed e.Tail#1 as range 2
    context[15] = refalrts::tvar_left( context[14], context[9], context[10] );
    if( ! context[15] )
      continue;
    // closed e.Name#1 as range 9

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ExtractAlternatives_Flush/4 AsIs: (/7 } Tile{ AsIs: e.Found#1/5 } )/16 Tile{ HalfReuse: # Empty/8 AsIs: (/11 AsIs: # TName/13 AsIs: t.SrcPos#1/14 AsIs: e.Name#1/9 AsIs: )/12 AsIs: e.Tail#1/2 AsIs: >/1 ]] }
    if( ! refalrts::alloc_close_bracket( context[16] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ExtractAlternatives_Flush, "ExtractAlternatives_Flush" );
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
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & ExtractAlternatives/4 (/7 e.Found#1/5 )/8 (/11 # TAlternative/13 t.SrcPos#1/14 e.Message#1/9 )/12 e.Tail#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_left( context[9], context[10], context[2], context[3] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    context[13] = refalrts::ident_left(  & ident_TAlternative<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    // closed e.Found#1 as range 5
    // closed e.Tail#1 as range 2
    context[15] = refalrts::tvar_left( context[14], context[9], context[10] );
    if( ! context[15] )
      continue;
    // closed e.Message#1 as range 9

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ExtractAlternatives_Flush/4 AsIs: (/7 } Tile{ AsIs: e.Found#1/5 } )/16 Tile{ HalfReuse: # Empty/8 AsIs: (/11 AsIs: # TAlternative/13 AsIs: t.SrcPos#1/14 AsIs: e.Message#1/9 AsIs: )/12 AsIs: e.Tail#1/2 AsIs: >/1 ]] }
    if( ! refalrts::alloc_close_bracket( context[16] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ExtractAlternatives_Flush, "ExtractAlternatives_Flush" );
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
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & ExtractAlternatives/4 (/7 e.Found#1/5 )/8 (/11 # TDot/13 t.SrcPos#1/14 )/12 e.Tail#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_left( context[9], context[10], context[2], context[3] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    context[13] = refalrts::ident_left(  & ident_TDot<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    // closed e.Found#1 as range 5
    // closed e.Tail#1 as range 2
    context[15] = refalrts::tvar_left( context[14], context[9], context[10] );
    if( ! context[15] )
      continue;
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ExtractAlternatives_Flush/4 AsIs: (/7 } Tile{ AsIs: e.Found#1/5 } )/16 Tile{ HalfReuse: # Empty/8 AsIs: (/11 AsIs: # TDot/13 AsIs: t.SrcPos#1/14 AsIs: )/12 AsIs: e.Tail#1/2 AsIs: >/1 ]] }
    if( ! refalrts::alloc_close_bracket( context[16] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ExtractAlternatives_Flush, "ExtractAlternatives_Flush" );
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
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & ExtractAlternatives/4 (/7 e.Found#1/5 )/8 t.Unexpected#1/9 e.Tail#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    // closed e.Found#1 as range 5
    context[10] = refalrts::tvar_left( context[9], context[2], context[3] );
    if( ! context[10] )
      continue;
    // closed e.Tail#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  e.Found#1/5 {REMOVED TILE}  {REMOVED TILE}  e.Tail#1/2 {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & UnexpectedToken/4 } Tile{ AsIs: t.Unexpected#1/9 } Tile{ HalfReuse: ' '/7 } Tile{ HalfReuse: 'd'/8 } 'e'/11 'f'/12 'i'/13 'n'/14 'i'/15 't'/16 'i'/17 'o'/18 'n'/19 ' '/20 'o'/21 'f'/22 ' '/23 's'/24 't'/25 'a'/26 't'/27 'e'/28 Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_char( context[11], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[12], 'f' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[13], 'i' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[14], 'n' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[15], 'i' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[16], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[17], 'i' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[18], 'o' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[19], 'n' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[20], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[21], 'o' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[22], 'f' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[23], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[24], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[25], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[26], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[27], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[28], 'e' ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], UnexpectedToken, "UnexpectedToken" );
    refalrts::reinit_char( context[7], ' ' );
    refalrts::reinit_char( context[8], 'd' );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[11], context[28] );
    res = refalrts::splice_evar( res, context[8], context[8] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & ExtractAlternatives/4 (/7 e.Found#1/5 )/8 >/1
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
}

static refalrts::FnResult ExtractAlternatives_Flush(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 35 elems
  refalrts::Iter context[35];
  refalrts::zeros( context, 35 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & ExtractAlternatives_Flush/4 (/7 e.Found#1/5 )/8 t.Head#1/9 (/13 # TFlush/15 t.SrcPos#1/16 )/14 e.Tail#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    // closed e.Found#1 as range 5
    context[10] = refalrts::tvar_left( context[9], context[2], context[3] );
    if( ! context[10] )
      continue;
    context[11] = 0;
    context[12] = 0;
    context[13] = refalrts::brackets_left( context[11], context[12], context[2], context[3] );
    if( ! context[13] )
      continue;
    refalrts::bracket_pointers(context[13], context[14]);
    context[15] = refalrts::ident_left(  & ident_TFlush<int>::name, context[11], context[12] );
    if( ! context[15] )
      continue;
    // closed e.Tail#1 as range 2
    context[17] = refalrts::tvar_left( context[16], context[11], context[12] );
    if( ! context[17] )
      continue;
    if( ! refalrts::empty_seq( context[11], context[12] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  # TFlush/15 t.SrcPos#1/16 )/14 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ExtractAlternatives_NextState/4 AsIs: (/7 AsIs: e.Found#1/5 AsIs: )/8 AsIs: t.Head#1/9 HalfReuse: # Unnamed/13 } Tile{ AsIs: e.Tail#1/2 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name( context[4], ExtractAlternatives_NextState, "ExtractAlternatives_NextState" );
    refalrts::reinit_ident( context[13], & ident_Unnamed<int>::name );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[2], context[3] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[13], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & ExtractAlternatives_Flush/4 (/7 e.Found#1/5 )/8 t.Head#1/9 (/13 # TNamedFlush/15 t.SrcPos#1/16 e.Name#1/11 )/14 e.Tail#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    // closed e.Found#1 as range 5
    context[10] = refalrts::tvar_left( context[9], context[2], context[3] );
    if( ! context[10] )
      continue;
    context[11] = 0;
    context[12] = 0;
    context[13] = refalrts::brackets_left( context[11], context[12], context[2], context[3] );
    if( ! context[13] )
      continue;
    refalrts::bracket_pointers(context[13], context[14]);
    context[15] = refalrts::ident_left(  & ident_TNamedFlush<int>::name, context[11], context[12] );
    if( ! context[15] )
      continue;
    // closed e.Tail#1 as range 2
    context[17] = refalrts::tvar_left( context[16], context[11], context[12] );
    if( ! context[17] )
      continue;
    // closed e.Name#1 as range 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  t.SrcPos#1/16 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ExtractAlternatives_NextState/4 AsIs: (/7 AsIs: e.Found#1/5 AsIs: )/8 AsIs: t.Head#1/9 AsIs: (/13 Reuse: # Flush/15 } Tile{ AsIs: e.Name#1/11 } Tile{ AsIs: )/14 AsIs: e.Tail#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], ExtractAlternatives_NextState, "ExtractAlternatives_NextState" );
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
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & ExtractAlternatives_Flush/4 (/7 e.Found#1/5 )/8 t.Head#1/9 (/13 # TErrorFlush/15 t.SrcPos#1/16 e.Message#1/11 )/14 e.Tail#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    // closed e.Found#1 as range 5
    context[10] = refalrts::tvar_left( context[9], context[2], context[3] );
    if( ! context[10] )
      continue;
    context[11] = 0;
    context[12] = 0;
    context[13] = refalrts::brackets_left( context[11], context[12], context[2], context[3] );
    if( ! context[13] )
      continue;
    refalrts::bracket_pointers(context[13], context[14]);
    context[15] = refalrts::ident_left(  & ident_TErrorFlush<int>::name, context[11], context[12] );
    if( ! context[15] )
      continue;
    // closed e.Tail#1 as range 2
    context[17] = refalrts::tvar_left( context[16], context[11], context[12] );
    if( ! context[17] )
      continue;
    // closed e.Message#1 as range 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  t.SrcPos#1/16 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ExtractAlternatives_NextState/4 AsIs: (/7 AsIs: e.Found#1/5 AsIs: )/8 AsIs: t.Head#1/9 AsIs: (/13 Reuse: # FlushError/15 } Tile{ AsIs: e.Message#1/11 } Tile{ AsIs: )/14 AsIs: e.Tail#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], ExtractAlternatives_NextState, "ExtractAlternatives_NextState" );
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
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & ExtractAlternatives_Flush/4 (/7 e.Found#1/5 )/8 t.Head#1/9 (/13 # TName/15 t.SrcPos#1/16 e.Name#1/11 )/14 e.Tail#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    // closed e.Found#1 as range 5
    context[10] = refalrts::tvar_left( context[9], context[2], context[3] );
    if( ! context[10] )
      continue;
    context[11] = 0;
    context[12] = 0;
    context[13] = refalrts::brackets_left( context[11], context[12], context[2], context[3] );
    if( ! context[13] )
      continue;
    refalrts::bracket_pointers(context[13], context[14]);
    context[15] = refalrts::ident_left(  & ident_TName<int>::name, context[11], context[12] );
    if( ! context[15] )
      continue;
    // closed e.Tail#1 as range 2
    context[17] = refalrts::tvar_left( context[16], context[11], context[12] );
    if( ! context[17] )
      continue;
    // closed e.Name#1 as range 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ExtractAlternatives_NextState/4 AsIs: (/7 AsIs: e.Found#1/5 AsIs: )/8 AsIs: t.Head#1/9 } # None/18 Tile{ AsIs: (/13 AsIs: # TName/15 AsIs: t.SrcPos#1/16 AsIs: e.Name#1/11 AsIs: )/14 AsIs: e.Tail#1/2 AsIs: >/1 ]] }
    if( ! refalrts::alloc_ident( context[18], & ident_None<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ExtractAlternatives_NextState, "ExtractAlternatives_NextState" );
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
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & ExtractAlternatives_Flush/4 (/7 e.Found#1/5 )/8 t.Head#1/9 (/13 # TAlternative/15 t.SrcPos#1/16 )/14 e.Tail#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    // closed e.Found#1 as range 5
    context[10] = refalrts::tvar_left( context[9], context[2], context[3] );
    if( ! context[10] )
      continue;
    context[11] = 0;
    context[12] = 0;
    context[13] = refalrts::brackets_left( context[11], context[12], context[2], context[3] );
    if( ! context[13] )
      continue;
    refalrts::bracket_pointers(context[13], context[14]);
    context[15] = refalrts::ident_left(  & ident_TAlternative<int>::name, context[11], context[12] );
    if( ! context[15] )
      continue;
    // closed e.Tail#1 as range 2
    context[17] = refalrts::tvar_left( context[16], context[11], context[12] );
    if( ! context[17] )
      continue;
    if( ! refalrts::empty_seq( context[11], context[12] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ExtractAlternatives_NextState/4 AsIs: (/7 AsIs: e.Found#1/5 AsIs: )/8 AsIs: t.Head#1/9 HalfReuse: # None/13 HalfReuse: (/15 } # TAlternative/18 Tile{ AsIs: t.SrcPos#1/16 AsIs: )/14 AsIs: e.Tail#1/2 AsIs: >/1 ]] }
    if( ! refalrts::alloc_ident( context[18], & ident_TAlternative<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ExtractAlternatives_NextState, "ExtractAlternatives_NextState" );
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
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & ExtractAlternatives_Flush/4 (/7 e.Found#1/5 )/8 t.Head#1/9 (/13 # TDot/15 t.SrcPos#1/16 )/14 e.Tail#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    // closed e.Found#1 as range 5
    context[10] = refalrts::tvar_left( context[9], context[2], context[3] );
    if( ! context[10] )
      continue;
    context[11] = 0;
    context[12] = 0;
    context[13] = refalrts::brackets_left( context[11], context[12], context[2], context[3] );
    if( ! context[13] )
      continue;
    refalrts::bracket_pointers(context[13], context[14]);
    context[15] = refalrts::ident_left(  & ident_TDot<int>::name, context[11], context[12] );
    if( ! context[15] )
      continue;
    // closed e.Tail#1 as range 2
    context[17] = refalrts::tvar_left( context[16], context[11], context[12] );
    if( ! context[17] )
      continue;
    if( ! refalrts::empty_seq( context[11], context[12] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ExtractAlternatives_NextState/4 AsIs: (/7 AsIs: e.Found#1/5 AsIs: )/8 AsIs: t.Head#1/9 HalfReuse: # None/13 HalfReuse: (/15 } # TDot/18 Tile{ AsIs: t.SrcPos#1/16 AsIs: )/14 AsIs: e.Tail#1/2 AsIs: >/1 ]] }
    if( ! refalrts::alloc_ident( context[18], & ident_TDot<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ExtractAlternatives_NextState, "ExtractAlternatives_NextState" );
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
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & ExtractAlternatives_Flush/4 (/7 e.Found#1/5 )/8 t.Head#1/9 t.Unexpected#1/11 e.Tail#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    // closed e.Found#1 as range 5
    context[10] = refalrts::tvar_left( context[9], context[2], context[3] );
    if( ! context[10] )
      continue;
    context[12] = refalrts::tvar_left( context[11], context[2], context[3] );
    if( ! context[12] )
      continue;
    // closed e.Tail#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  e.Found#1/5 {REMOVED TILE}  t.Head#1/9 {REMOVED TILE}  e.Tail#1/2 {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & UnexpectedToken/4 } Tile{ AsIs: t.Unexpected#1/11 } Tile{ HalfReuse: 'f'/7 } Tile{ HalfReuse: 'l'/8 } 'u'/13 's'/14 'h'/15 ' '/16 'o'/17 'r'/18 ' '/19 'n'/20 'e'/21 'x'/22 't'/23 ' '/24 's'/25 't'/26 'a'/27 't'/28 'e'/29 ' '/30 'n'/31 'a'/32 'm'/33 'e'/34 Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_char( context[13], 'u' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[14], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[15], 'h' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[16], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[17], 'o' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[18], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[19], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[20], 'n' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[21], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[22], 'x' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[23], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[24], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[25], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[26], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[27], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[28], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[29], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[30], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[31], 'n' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[32], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[33], 'm' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[34], 'e' ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], UnexpectedToken, "UnexpectedToken" );
    refalrts::reinit_char( context[7], 'f' );
    refalrts::reinit_char( context[8], 'l' );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[13], context[34] );
    res = refalrts::splice_evar( res, context[8], context[8] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & ExtractAlternatives_Flush/4 (/7 e.Found#1/5 )/8 t.Head#1/9 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.Found#1 as range 5
  context[10] = refalrts::tvar_left( context[9], context[2], context[3] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  </0 & ExtractAlternatives_Flush/4 {REMOVED TILE}  t.Head#1/9 >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Found#1/5 AsIs: )/8 } Tile{ ]] }
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult ExtractAlternatives_NextState(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 48 elems
  refalrts::Iter context[48];
  refalrts::zeros( context, 48 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & ExtractAlternatives_NextState/4 (/7 e.Found#1/5 )/8 t.Head#1/9 t.Flush#1/11 (/15 # TName/17 t.SrcPos#1/18 e.Name#1/13 )/16 e.Tail#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    // closed e.Found#1 as range 5
    context[10] = refalrts::tvar_left( context[9], context[2], context[3] );
    if( ! context[10] )
      continue;
    context[12] = refalrts::tvar_left( context[11], context[2], context[3] );
    if( ! context[12] )
      continue;
    context[13] = 0;
    context[14] = 0;
    context[15] = refalrts::brackets_left( context[13], context[14], context[2], context[3] );
    if( ! context[15] )
      continue;
    refalrts::bracket_pointers(context[15], context[16]);
    context[17] = refalrts::ident_left(  & ident_TName<int>::name, context[13], context[14] );
    if( ! context[17] )
      continue;
    // closed e.Tail#1 as range 2
    context[19] = refalrts::tvar_left( context[18], context[13], context[14] );
    if( ! context[19] )
      continue;
    // closed e.Name#1 as range 13

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  # TName/17 {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ExtractAlternatives_Finish/4 AsIs: (/7 AsIs: e.Found#1/5 AsIs: )/8 AsIs: t.Head#1/9 AsIs: t.Flush#1/11 AsIs: (/15 } Tile{ AsIs: t.SrcPos#1/18 AsIs: e.Name#1/13 AsIs: )/16 AsIs: e.Tail#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], ExtractAlternatives_Finish, "ExtractAlternatives_Finish" );
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
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & ExtractAlternatives_NextState/4 (/7 e.Found#1/5 )/8 t.Head#1/9 t.Flush#1/11 (/15 # TAlternative/17 t.SrcPos#1/18 )/16 e.Tail#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    // closed e.Found#1 as range 5
    context[10] = refalrts::tvar_left( context[9], context[2], context[3] );
    if( ! context[10] )
      continue;
    context[12] = refalrts::tvar_left( context[11], context[2], context[3] );
    if( ! context[12] )
      continue;
    context[13] = 0;
    context[14] = 0;
    context[15] = refalrts::brackets_left( context[13], context[14], context[2], context[3] );
    if( ! context[15] )
      continue;
    refalrts::bracket_pointers(context[15], context[16]);
    context[17] = refalrts::ident_left(  & ident_TAlternative<int>::name, context[13], context[14] );
    if( ! context[17] )
      continue;
    // closed e.Tail#1 as range 2
    context[19] = refalrts::tvar_left( context[18], context[13], context[14] );
    if( ! context[19] )
      continue;
    if( ! refalrts::empty_seq( context[13], context[14] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ExtractAlternatives_Finish/4 AsIs: (/7 AsIs: e.Found#1/5 AsIs: )/8 AsIs: t.Head#1/9 AsIs: t.Flush#1/11 HalfReuse: # Finitive/15 HalfReuse: (/17 } # TAlternative/20 Tile{ AsIs: t.SrcPos#1/18 AsIs: )/16 AsIs: e.Tail#1/2 AsIs: >/1 ]] }
    if( ! refalrts::alloc_ident( context[20], & ident_TAlternative<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ExtractAlternatives_Finish, "ExtractAlternatives_Finish" );
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
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & ExtractAlternatives_NextState/4 (/7 e.Found#1/5 )/8 t.Head#1/9 t.Flush#1/11 (/15 # TDot/17 t.SrcPos#1/18 )/16 e.Tail#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    // closed e.Found#1 as range 5
    context[10] = refalrts::tvar_left( context[9], context[2], context[3] );
    if( ! context[10] )
      continue;
    context[12] = refalrts::tvar_left( context[11], context[2], context[3] );
    if( ! context[12] )
      continue;
    context[13] = 0;
    context[14] = 0;
    context[15] = refalrts::brackets_left( context[13], context[14], context[2], context[3] );
    if( ! context[15] )
      continue;
    refalrts::bracket_pointers(context[15], context[16]);
    context[17] = refalrts::ident_left(  & ident_TDot<int>::name, context[13], context[14] );
    if( ! context[17] )
      continue;
    // closed e.Tail#1 as range 2
    context[19] = refalrts::tvar_left( context[18], context[13], context[14] );
    if( ! context[19] )
      continue;
    if( ! refalrts::empty_seq( context[13], context[14] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ExtractAlternatives_Finish/4 AsIs: (/7 AsIs: e.Found#1/5 AsIs: )/8 AsIs: t.Head#1/9 AsIs: t.Flush#1/11 HalfReuse: # Finitive/15 HalfReuse: (/17 } # TDot/20 Tile{ AsIs: t.SrcPos#1/18 AsIs: )/16 AsIs: e.Tail#1/2 AsIs: >/1 ]] }
    if( ! refalrts::alloc_ident( context[20], & ident_TDot<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ExtractAlternatives_Finish, "ExtractAlternatives_Finish" );
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
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & ExtractAlternatives_NextState/4 (/7 e.Found#1/5 )/8 t.Head#1/9 t.Flush#1/11 t.Unexpected#1/13 e.Tail#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    // closed e.Found#1 as range 5
    context[10] = refalrts::tvar_left( context[9], context[2], context[3] );
    if( ! context[10] )
      continue;
    context[12] = refalrts::tvar_left( context[11], context[2], context[3] );
    if( ! context[12] )
      continue;
    context[14] = refalrts::tvar_left( context[13], context[2], context[3] );
    if( ! context[14] )
      continue;
    // closed e.Tail#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  e.Found#1/5 {REMOVED TILE}  t.Head#1/9 t.Flush#1/11 {REMOVED TILE}  e.Tail#1/2 {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & UnexpectedToken/4 } Tile{ AsIs: t.Unexpected#1/13 } Tile{ HalfReuse: 'n'/7 } Tile{ HalfReuse: 'e'/8 } 'x'/15 't'/16 ' '/17 's'/18 't'/19 'a'/20 't'/21 'e'/22 ' '/23 'n'/24 'a'/25 'm'/26 'e'/27 ' '/28 'o'/29 'r'/30 ' '/31 'n'/32 'e'/33 'x'/34 't'/35 ' '/36 'a'/37 'l'/38 't'/39 'e'/40 'r'/41 'n'/42 'a'/43 't'/44 'i'/45 'v'/46 'e'/47 Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_char( context[15], 'x' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[16], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[17], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[18], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[19], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[20], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[21], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[22], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[23], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[24], 'n' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[25], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[26], 'm' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[27], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[28], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[29], 'o' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[30], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[31], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[32], 'n' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[33], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[34], 'x' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[35], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[36], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[37], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[38], 'l' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[39], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[40], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[41], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[42], 'n' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[43], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[44], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[45], 'i' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[46], 'v' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[47], 'e' ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], UnexpectedToken, "UnexpectedToken" );
    refalrts::reinit_char( context[7], 'n' );
    refalrts::reinit_char( context[8], 'e' );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[15], context[47] );
    res = refalrts::splice_evar( res, context[8], context[8] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & ExtractAlternatives_NextState/4 (/7 e.Found#1/5 )/8 t.Head#1/9 t.Flush#1/11 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.Found#1 as range 5
  context[10] = refalrts::tvar_left( context[9], context[2], context[3] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  context[12] = refalrts::tvar_left( context[11], context[2], context[3] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  </0 & ExtractAlternatives_NextState/4 {REMOVED TILE}  t.Head#1/9 t.Flush#1/11 >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Found#1/5 AsIs: )/8 } Tile{ ]] }
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult ExtractAlternatives_Finish(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & ExtractAlternatives_Finish/4 (/7 e.Found#1/5 )/8 t.Head#1/9 t.Flush#1/11 t.NextState#1/13 (/17 # TAlternative/19 t.SrcPos#1/20 )/18 e.Tail#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    // closed e.Found#1 as range 5
    context[10] = refalrts::tvar_left( context[9], context[2], context[3] );
    if( ! context[10] )
      continue;
    context[12] = refalrts::tvar_left( context[11], context[2], context[3] );
    if( ! context[12] )
      continue;
    context[14] = refalrts::tvar_left( context[13], context[2], context[3] );
    if( ! context[14] )
      continue;
    context[15] = 0;
    context[16] = 0;
    context[17] = refalrts::brackets_left( context[15], context[16], context[2], context[3] );
    if( ! context[17] )
      continue;
    refalrts::bracket_pointers(context[17], context[18]);
    context[19] = refalrts::ident_left(  & ident_TAlternative<int>::name, context[15], context[16] );
    if( ! context[19] )
      continue;
    // closed e.Tail#1 as range 2
    context[21] = refalrts::tvar_left( context[20], context[15], context[16] );
    if( ! context[21] )
      continue;
    if( ! refalrts::empty_seq( context[15], context[16] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  t.SrcPos#1/20 )/18 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ExtractAlternatives/4 AsIs: (/7 AsIs: e.Found#1/5 HalfReuse: (/8 AsIs: t.Head#1/9 AsIs: t.Flush#1/11 AsIs: t.NextState#1/13 HalfReuse: )/17 HalfReuse: )/19 } Tile{ AsIs: e.Tail#1/2 } Tile{ AsIs: >/1 ]] }
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
    res = refalrts::splice_evar( res, context[2], context[3] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[19], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & ExtractAlternatives_Finish/4 (/7 e.Found#1/5 )/8 t.Head#1/9 t.Flush#1/11 t.NextState#1/13 e.Tail#1/2 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.Found#1 as range 5
  context[10] = refalrts::tvar_left( context[9], context[2], context[3] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  context[12] = refalrts::tvar_left( context[11], context[2], context[3] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  context[14] = refalrts::tvar_left( context[13], context[2], context[3] );
  if( ! context[14] )
    return refalrts::cRecognitionImpossible;
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
}

static refalrts::FnResult ToText(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & ToText/4 # TSetName/5 e.Name#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::ident_left(  & ident_TSetName<int>::name, context[2], context[3] );
    if( ! context[5] )
      continue;
    // closed e.Name#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: 's'/0 HalfReuse: 'e'/4 HalfReuse: 't'/5 } Tile{ HalfReuse: ' '/1 } 'n'/6 'a'/7 'm'/8 'e'/9 ' '/10 Tile{ AsIs: e.Name#1/2 } Tile{ ]] }
    if( ! refalrts::alloc_char( context[6], 'n' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[7], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[8], 'm' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[9], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[10], ' ' ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[0], 's' );
    refalrts::reinit_char( context[4], 'e' );
    refalrts::reinit_char( context[5], 't' );
    refalrts::reinit_char( context[1], ' ' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[6], context[10] );
    res = refalrts::splice_evar( res, context[1], context[1] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & ToText/4 # TLiteral/5 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::ident_left(  & ident_TLiteral<int>::name, context[2], context[3] );
    if( ! context[5] )
      continue;
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: 'l'/0 HalfReuse: 'i'/4 HalfReuse: 't'/5 } Tile{ HalfReuse: 'e'/1 } 'r'/6 'a'/7 'l'/8 ' '/9 Tile{ AsIs: e.Text#1/2 } Tile{ ]] }
    if( ! refalrts::alloc_char( context[6], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[7], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[8], 'l' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[9], ' ' ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[0], 'l' );
    refalrts::reinit_char( context[4], 'i' );
    refalrts::reinit_char( context[5], 't' );
    refalrts::reinit_char( context[1], 'e' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[6], context[9] );
    res = refalrts::splice_evar( res, context[1], context[1] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & ToText/4 # TName/5 e.Name#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::ident_left(  & ident_TName<int>::name, context[2], context[3] );
    if( ! context[5] )
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
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & ToText/4 # TNamedFlush/5 e.Name#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::ident_left(  & ident_TNamedFlush<int>::name, context[2], context[3] );
    if( ! context[5] )
      continue;
    // closed e.Name#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: 'n'/0 HalfReuse: 'a'/4 HalfReuse: 'm'/5 } Tile{ HalfReuse: 'e'/1 } 'd'/6 ' '/7 'f'/8 'l'/9 'u'/10 's'/11 'h'/12 ' '/13 Tile{ AsIs: e.Name#1/2 } Tile{ ]] }
    if( ! refalrts::alloc_char( context[6], 'd' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[7], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[8], 'f' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[9], 'l' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[10], 'u' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[11], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[12], 'h' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[13], ' ' ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[0], 'n' );
    refalrts::reinit_char( context[4], 'a' );
    refalrts::reinit_char( context[5], 'm' );
    refalrts::reinit_char( context[1], 'e' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[6], context[13] );
    res = refalrts::splice_evar( res, context[1], context[1] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & ToText/4 # TEquals/5 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::ident_left(  & ident_TEquals<int>::name, context[2], context[3] );
    if( ! context[5] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: '\"'/0 HalfReuse: '='/4 HalfReuse: '\"'/5 } Tile{ ]] }
    refalrts::reinit_char( context[0], '\"' );
    refalrts::reinit_char( context[4], '=' );
    refalrts::reinit_char( context[5], '\"' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[5], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & ToText/4 # TDot/5 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::ident_left(  & ident_TDot<int>::name, context[2], context[3] );
    if( ! context[5] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: '\"'/0 HalfReuse: '.'/4 HalfReuse: '\"'/5 } Tile{ ]] }
    refalrts::reinit_char( context[0], '\"' );
    refalrts::reinit_char( context[4], '.' );
    refalrts::reinit_char( context[5], '\"' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[5], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & ToText/4 # TAlternative/5 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::ident_left(  & ident_TAlternative<int>::name, context[2], context[3] );
    if( ! context[5] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: '\"'/0 HalfReuse: '|'/4 HalfReuse: '\"'/5 } Tile{ ]] }
    refalrts::reinit_char( context[0], '\"' );
    refalrts::reinit_char( context[4], '|' );
    refalrts::reinit_char( context[5], '\"' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[5], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & ToText/4 # TFlush/5 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::ident_left(  & ident_TFlush<int>::name, context[2], context[3] );
    if( ! context[5] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
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
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & ToText/4 # TErrorFlush/5 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::ident_left(  & ident_TErrorFlush<int>::name, context[2], context[3] );
    if( ! context[5] )
      continue;
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } 'e'/6 'r'/7 'r'/8 'o'/9 'r'/10 ' '/11 'f'/12 'l'/13 'u'/14 's'/15 Tile{ HalfReuse: 'h'/0 HalfReuse: ' '/4 HalfReuse: '\"'/5 AsIs: e.Text#1/2 HalfReuse: '\"'/1 ]] }
    if( ! refalrts::alloc_char( context[6], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[7], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[8], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[9], 'o' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[10], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[11], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[12], 'f' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[13], 'l' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[14], 'u' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[15], 's' ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[0], 'h' );
    refalrts::reinit_char( context[4], ' ' );
    refalrts::reinit_char( context[5], '\"' );
    refalrts::reinit_char( context[1], '\"' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[0];
    res = refalrts::splice_evar( res, context[6], context[15] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & ToText/4 # TEOF/5 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = refalrts::ident_left(  & ident_TEOF<int>::name, context[2], context[3] );
  if( ! context[5] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ HalfReuse: 'e'/0 HalfReuse: 'n'/4 HalfReuse: 'd'/5 HalfReuse: ' '/1 } 'o'/6 'f'/7 ' '/8 'f'/9 'i'/10 'l'/11 'e'/12 Tile{ ]] }
  if( ! refalrts::alloc_char( context[6], 'o' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[7], 'f' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[8], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[9], 'f' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[10], 'i' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[11], 'l' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[12], 'e' ) )
    return refalrts::cNoMemory;
  refalrts::reinit_char( context[0], 'e' );
  refalrts::reinit_char( context[4], 'n' );
  refalrts::reinit_char( context[5], 'd' );
  refalrts::reinit_char( context[1], ' ' );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[6], context[12] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult UnexpectedToken(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 34 elems
  refalrts::Iter context[34];
  refalrts::zeros( context, 34 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & UnexpectedToken/4 (/7 s.Type#1/9 s.LineNum#1/10 e.Unexpected#1/5 )/8 e.Message#1/2 >/1
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
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & ErrorAt/4 HalfReuse: s.LineNum1 #10/7 } 'U'/11 'n'/12 'e'/13 'x'/14 'p'/15 'e'/16 'c'/17 't'/18 'e'/19 'd'/20 ' '/21 </22 & ToText/23 Tile{ AsIs: s.Type#1/9 } Tile{ AsIs: e.Unexpected#1/5 } >/24 ' '/25 'e'/26 'x'/27 'p'/28 'e'/29 'c'/30 't'/31 'e'/32 'd'/33 Tile{ HalfReuse: ' '/8 AsIs: e.Message#1/2 AsIs: >/1 ]] }
  if( ! refalrts::alloc_char( context[11], 'U' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[12], 'n' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[13], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[14], 'x' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[15], 'p' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[16], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[17], 'c' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[18], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[19], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[20], 'd' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[21], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[22] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[23], ToText, "ToText" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[24] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[25], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[26], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[27], 'x' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[28], 'p' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[29], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[30], 'c' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[31], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[32], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[33], 'd' ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ErrorAt, "ErrorAt" );
  refalrts::reinit_svar( context[7], context[10] );
  refalrts::reinit_char( context[8], ' ' );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[24] );
  refalrts::push_stack( context[22] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[24], context[33] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[9], context[9] );
  res = refalrts::splice_evar( res, context[11], context[23] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[7], res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult lambda_Tokens_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & lambda_Tokens_0/4 (/7 e.Line#2/5 )/8 >/1
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
  //TRASH: {REMOVED TILE}  </0 & lambda_Tokens_0/4 (/7 {REMOVED TILE}  )/8 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Line#2/5 } Tile{ HalfReuse: '\n'/1 ]] }
  refalrts::reinit_char( context[1], '\n' );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult lambda_Tokens_1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_Tokens_1/4 s.LineNumber#2/10 (/7 # TNewLine/9 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_TNewLine<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  # TNewLine/9 )/8 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Inc/4 AsIs: s.LineNumber#2/10 HalfReuse: >/7 } Tile{ ]] }
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
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_Tokens_1/4 s.LineNumber#2/10 (/7 # TError/9 e.Text#2/5 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_TError<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    // closed e.Text#2 as range 5
    if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  (/7 # TError/9 {REMOVED TILE}  )/8 {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ErrorAt/4 AsIs: s.LineNumber#2/10 } Tile{ AsIs: e.Text#2/5 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name( context[4], ErrorAt, "ErrorAt" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[10], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & lambda_Tokens_1/4 s.LineNumber#2/9 (/7 s.TokName#2/10 e.Content#2/5 )/8 >/1
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
  // closed e.Content#2 as range 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  & lambda_Tokens_1/4 {REMOVED TILE}  {REMOVED TILE}  )/8 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ AsIs: s.LineNumber#2/9 AsIs: (/7 AsIs: s.TokName#2/10 } Tile{ HalfReuse: s.LineNumber2 #9/0 } Tile{ AsIs: e.Content#2/5 } Tile{ HalfReuse: )/1 ]] }
  refalrts::reinit_svar( context[0], context[9] );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[7], context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[0], context[0] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult lambda_Tokens_2(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & lambda_Tokens_2/4 s.LineNumber#2/5 e.Tokens#2/2 >/1
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
}

static refalrts::FnResult Tokens(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & Tokens/4 s.FirstLineNumber#1/5 e.Lines#1/2 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Lines#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 } Tile{ AsIs: e.Lines#1/2 } </6 & Seq/7 (/8 & Map/9 & lambda_Tokens_0/10 )/11 & LoTokens/12 (/13 & MapReduce/14 & lambda_Tokens_1/15 </16 & Inc/17 Tile{ AsIs: s.FirstLineNumber#1/5 } >/18 )/19 & lambda_Tokens_2/20 >/21 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[7], Seq, "Seq" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[9], Map, "Map" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[10], lambda_Tokens_0, "lambda_Tokens_0" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[12], LoTokens, "LoTokens" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[14], MapReduce, "MapReduce" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[15], lambda_Tokens_1, "lambda_Tokens_1" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[16] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[17], Inc, "Inc" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[18] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[19] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[20], lambda_Tokens_2, "lambda_Tokens_2" ) )
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
}

static refalrts::FnResult LoTokens(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 8 elems
  refalrts::Iter context[8];
  refalrts::zeros( context, 8 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & LoTokens/4 ' '/5 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::char_left( ' ', context[2], context[3] );
    if( ! context[5] )
      continue;
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </4 HalfReuse: & LoTokens/5 AsIs: e.Text#1/2 AsIs: >/1 ]] }
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
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & LoTokens/4 '\t'/5 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::char_left( '\t', context[2], context[3] );
    if( ! context[5] )
      continue;
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </4 HalfReuse: & LoTokens/5 AsIs: e.Text#1/2 AsIs: >/1 ]] }
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
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & LoTokens/4 '\r'/5 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::char_left( '\r', context[2], context[3] );
    if( ! context[5] )
      continue;
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </4 HalfReuse: & LoTokens/5 AsIs: e.Text#1/2 AsIs: >/1 ]] }
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
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & LoTokens/4 '\n'/5 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::char_left( '\n', context[2], context[3] );
    if( ! context[5] )
      continue;
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } (/6 # TNewLine/7 Tile{ HalfReuse: )/0 HalfReuse: </4 HalfReuse: & LoTokens/5 AsIs: e.Text#1/2 AsIs: >/1 ]] }
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
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & LoTokens/4 ':'/5 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::char_left( ':', context[2], context[3] );
    if( ! context[5] )
      continue;
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } </6 Tile{ HalfReuse: & SetName/0 HalfReuse: (/4 HalfReuse: )/5 AsIs: e.Text#1/2 AsIs: >/1 ]] }
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
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & LoTokens/4 '!'/5 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::char_left( '!', context[2], context[3] );
    if( ! context[5] )
      continue;
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </4 HalfReuse: & FlushName/5 AsIs: e.Text#1/2 AsIs: >/1 ]] }
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
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & LoTokens/4 '\''/5 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::char_left( '\'', context[2], context[3] );
    if( ! context[5] )
      continue;
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } </6 Tile{ HalfReuse: & Literal/0 HalfReuse: (/4 HalfReuse: )/5 AsIs: e.Text#1/2 AsIs: >/1 ]] }
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
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & LoTokens/4 '='/5 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::char_left( '=', context[2], context[3] );
    if( ! context[5] )
      continue;
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } (/6 # TEquals/7 Tile{ HalfReuse: )/0 HalfReuse: </4 HalfReuse: & LoTokens/5 AsIs: e.Text#1/2 AsIs: >/1 ]] }
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
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & LoTokens/4 '.'/5 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::char_left( '.', context[2], context[3] );
    if( ! context[5] )
      continue;
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } (/6 # TDot/7 Tile{ HalfReuse: )/0 HalfReuse: </4 HalfReuse: & LoTokens/5 AsIs: e.Text#1/2 AsIs: >/1 ]] }
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
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & LoTokens/4 '|'/5 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::char_left( '|', context[2], context[3] );
    if( ! context[5] )
      continue;
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } (/6 # TAlternative/7 Tile{ HalfReuse: )/0 HalfReuse: </4 HalfReuse: & LoTokens/5 AsIs: e.Text#1/2 AsIs: >/1 ]] }
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
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & LoTokens/4 s.Next#1/5 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
      continue;
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: s.Next#1/5 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], Name, "Name" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & LoTokens/4 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
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
}

static refalrts::FnResult NextInSet(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & NextInSet/4 s.SuccessHandler#1/5 s.FailHandler#1/6 (/9 e.Set_B#1/16 s.Next#1/18 e.Set_E#1/19 )/10 (/13 e.Scanned#1/11 )/14 s.Next#1/15 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
      continue;
    context[7] = 0;
    context[8] = 0;
    context[9] = refalrts::brackets_left( context[7], context[8], context[2], context[3] );
    if( ! context[9] )
      continue;
    refalrts::bracket_pointers(context[9], context[10]);
    context[11] = 0;
    context[12] = 0;
    context[13] = refalrts::brackets_left( context[11], context[12], context[2], context[3] );
    if( ! context[13] )
      continue;
    refalrts::bracket_pointers(context[13], context[14]);
    // closed e.Scanned#1 as range 11
    if( ! refalrts::svar_left( context[15], context[2], context[3] ) )
      continue;
    // closed e.Text#1 as range 2
    context[16] = 0;
    context[17] = 0;
    refalrts::start_e_loop();
    do {
      context[19] = context[7];
      context[20] = context[8];
      if( ! refalrts::repeated_stvar_left( context[18], context[15], context[19], context[20] ) )
        continue;
      // closed e.Set_E#1 as range 7

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE}  {REMOVED TILE}  s.SuccessHandler#1/5 s.FailHandler#1/6 (/9 e.Set_B#1/16 s.Next#1/18 e.Set_E#1/19 {REMOVED TILE}  s.Next#1/15 {REMOVED TILE}  {REMOVED TILE} 
      //RESULT: Tile{ [[ AsIs: </0 } Tile{ HalfReuse: s.SuccessHandler1 #5/10 AsIs: (/13 AsIs: e.Scanned#1/11 HalfReuse: s.Next1 #18/14 } Tile{ HalfReuse: )/4 } Tile{ AsIs: e.Text#1/2 } Tile{ AsIs: >/1 ]] }
      refalrts::reinit_svar( context[10], context[5] );
      refalrts::reinit_svar( context[14], context[18] );
      refalrts::reinit_close_bracket( context[4] );
      refalrts::push_stack( context[1] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[13], context[4] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[2], context[3] );
      res = refalrts::splice_evar( res, context[4], context[4] );
      res = refalrts::splice_evar( res, context[10], context[14] );
      refalrts::use( res );
      refalrts::splice_to_freelist_open( context[0], res );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[16], context[17], context[7], context[8] ) );
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & NextInSet/4 s.SuccessHandler#1/5 s.FailHandler#1/6 (/9 e.Set#1/7 )/10 (/13 e.Scanned#1/11 )/14 e.Text#1/2 >/1
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
}

static refalrts::FnResult HiLetters(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 28 elems
  refalrts::Iter context[28];
  refalrts::zeros( context, 28 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & HiLetters/4 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ HalfReuse: 'A'/0 HalfReuse: 'B'/4 HalfReuse: 'C'/1 } 'D'/5 'E'/6 'F'/7 'G'/8 'H'/9 'I'/10 'J'/11 'K'/12 'L'/13 'M'/14 'N'/15 'O'/16 'P'/17 'Q'/18 'R'/19 'S'/20 'T'/21 'U'/22 'V'/23 'W'/24 'X'/25 'Y'/26 'Z'/27 Tile{ ]] }
  if( ! refalrts::alloc_char( context[5], 'D' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[6], 'E' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[7], 'F' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[8], 'G' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[9], 'H' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[10], 'I' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[11], 'J' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[12], 'K' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[13], 'L' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[14], 'M' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[15], 'N' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[16], 'O' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[17], 'P' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[18], 'Q' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[19], 'R' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[20], 'S' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[21], 'T' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[22], 'U' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[23], 'V' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[24], 'W' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[25], 'X' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[26], 'Y' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[27], 'Z' ) )
    return refalrts::cNoMemory;
  refalrts::reinit_char( context[0], 'A' );
  refalrts::reinit_char( context[4], 'B' );
  refalrts::reinit_char( context[1], 'C' );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[27] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult LoLetters(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 28 elems
  refalrts::Iter context[28];
  refalrts::zeros( context, 28 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & LoLetters/4 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ HalfReuse: 'a'/0 HalfReuse: 'b'/4 HalfReuse: 'c'/1 } 'd'/5 'e'/6 'f'/7 'g'/8 'h'/9 'i'/10 'j'/11 'k'/12 'l'/13 'm'/14 'n'/15 'o'/16 'p'/17 'q'/18 'r'/19 's'/20 't'/21 'u'/22 'v'/23 'w'/24 'x'/25 'y'/26 'z'/27 Tile{ ]] }
  if( ! refalrts::alloc_char( context[5], 'd' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[6], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[7], 'f' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[8], 'g' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[9], 'h' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[10], 'i' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[11], 'j' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[12], 'k' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[13], 'l' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[14], 'm' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[15], 'n' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[16], 'o' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[17], 'p' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[18], 'q' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[19], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[20], 's' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[21], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[22], 'u' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[23], 'v' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[24], 'w' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[25], 'x' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[26], 'y' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[27], 'z' ) )
    return refalrts::cNoMemory;
  refalrts::reinit_char( context[0], 'a' );
  refalrts::reinit_char( context[4], 'b' );
  refalrts::reinit_char( context[1], 'c' );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[27] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult Digits(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & Digits/4 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ HalfReuse: '0'/0 HalfReuse: '1'/4 HalfReuse: '2'/1 } '3'/5 '4'/6 '5'/7 '6'/8 '7'/9 '8'/10 '9'/11 Tile{ ]] }
  if( ! refalrts::alloc_char( context[5], '3' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[6], '4' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[7], '5' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[8], '6' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[9], '7' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[10], '8' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[11], '9' ) )
    return refalrts::cNoMemory;
  refalrts::reinit_char( context[0], '0' );
  refalrts::reinit_char( context[4], '1' );
  refalrts::reinit_char( context[1], '2' );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[11] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult NameTailSet(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & NameTailSet/4 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & HiLetters/4 AsIs: >/1 } </5 & LoLetters/6 >/7 </8 & Digits/9 >/10 '-'/11 '_'/12 Tile{ ]] }
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
  if( ! refalrts::alloc_char( context[11], '-' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[12], '_' ) )
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
}

static refalrts::FnResult SetName(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & SetName/4 (/7 e.Scanned#1/5 )/8 ':'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( ':', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Scanned#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TSetName/4 } Tile{ AsIs: e.Scanned#1/5 } Tile{ HalfReuse: )/7 } Tile{ HalfReuse: </8 HalfReuse: & LoTokens/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
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

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & SetName/4 (/7 e.Scanned#1/5 )/8 e.Text#1/2 >/1
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
}

static refalrts::FnResult SetNameFail(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 40 elems
  refalrts::Iter context[40];
  refalrts::zeros( context, 40 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & SetNameFail/4 (/7 e.Scanned#1/5 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Scanned#1 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  e.Scanned#1/5 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TError/4 HalfReuse: 'e'/7 } 'x'/9 'p'/10 'e'/11 'c'/12 't'/13 'e'/14 'd'/15 ' '/16 'e'/17 'n'/18 'd'/19 ' '/20 'o'/21 'f'/22 ' '/23 's'/24 'e'/25 't'/26 ' '/27 'n'/28 'a'/29 'm'/30 'e'/31 ','/32 ' '/33 'g'/34 'o'/35 't'/36 ' '/37 'E'/38 'O'/39 Tile{ HalfReuse: 'F'/8 HalfReuse: )/1 ]] }
    if( ! refalrts::alloc_char( context[9], 'x' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[10], 'p' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[11], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[12], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[13], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[14], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[15], 'd' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[16], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[17], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[18], 'n' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[19], 'd' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[20], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[21], 'o' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[22], 'f' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[23], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[24], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[25], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[26], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[27], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[28], 'n' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[29], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[30], 'm' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[31], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[32], ',' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[33], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[34], 'g' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[35], 'o' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[36], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[37], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[38], 'E' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[39], 'O' ) )
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
    res = refalrts::splice_evar( res, context[9], context[39] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[7], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & SetNameFail/4 (/7 e.Scanned#1/5 )/8 s.Next#1/9 e.Text#1/2 >/1
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
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Text#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  e.Scanned#1/5 {REMOVED TILE}  e.Text#1/2 {REMOVED TILE} 
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TError/4 HalfReuse: 'e'/7 } 'x'/10 'p'/11 'e'/12 'c'/13 't'/14 'e'/15 'd'/16 ' '/17 'e'/18 'n'/19 'd'/20 ' '/21 'o'/22 'f'/23 ' '/24 's'/25 'e'/26 't'/27 ' '/28 'n'/29 'a'/30 'm'/31 'e'/32 ','/33 ' '/34 'g'/35 'o'/36 't'/37 Tile{ HalfReuse: ' '/8 AsIs: s.Next#1/9 } Tile{ HalfReuse: )/1 ]] }
  if( ! refalrts::alloc_char( context[10], 'x' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[11], 'p' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[12], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[13], 'c' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[14], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[15], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[16], 'd' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[17], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[18], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[19], 'n' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[20], 'd' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[21], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[22], 'o' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[23], 'f' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[24], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[25], 's' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[26], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[27], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[28], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[29], 'n' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[30], 'a' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[31], 'm' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[32], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[33], ',' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[34], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[35], 'g' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[36], 'o' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[37], 't' ) )
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
  res = refalrts::splice_evar( res, context[10], context[37] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[7], res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult FlushName(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 28 elems
  refalrts::Iter context[28];
  refalrts::zeros( context, 28 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & FlushName/4 '-'/5 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::char_left( '-', context[2], context[3] );
    if( ! context[5] )
      continue;
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } (/6 # TFlush/7 Tile{ HalfReuse: )/0 HalfReuse: </4 HalfReuse: & LoTokens/5 AsIs: e.Text#1/2 AsIs: >/1 ]] }
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
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & FlushName/4 '\"'/5 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::char_left( '\"', context[2], context[3] );
    if( ! context[5] )
      continue;
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } </6 & NextInSet/7 & ErrorFlush/8 & ErrorFlushFail/9 (/10 </11 & NameTailSet/12 >/13 ' '/14 '\t'/15 ','/16 '.'/17 ':'/18 ';'/19 '('/20 ')'/21 '{'/22 '}'/23 '['/24 ']'/25 '*'/26 '&'/27 Tile{ HalfReuse: )/0 HalfReuse: (/4 HalfReuse: )/5 AsIs: e.Text#1/2 AsIs: >/1 ]] }
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
    if( ! refalrts::alloc_char( context[14], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[15], '\t' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[16], ',' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[17], '.' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[18], ':' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[19], ';' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[20], '(' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[21], ')' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[22], '{' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[23], '}' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[24], '[' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[25], ']' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[26], '*' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[27], '&' ) )
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
    res = refalrts::splice_evar( res, context[6], context[27] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & FlushName/4 '#'/5 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::char_left( '#', context[2], context[3] );
    if( ! context[5] )
      continue;
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } </6 & NextInSet/7 & FlushNameTail/8 & FlushNameFail/9 (/10 </11 & HiLetters/12 >/13 )/14 Tile{ HalfReuse: (/0 HalfReuse: '#'/4 HalfReuse: )/5 AsIs: e.Text#1/2 AsIs: >/1 ]] }
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

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & FlushName/4 e.Text#1/2 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
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
}

static refalrts::FnResult ErrorFlush(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 30 elems
  refalrts::Iter context[30];
  refalrts::zeros( context, 30 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & ErrorFlush/4 (/7 e.Scanned#1/5 )/8 e.Tail#1/2 >/1
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
  //RESULT: Tile{ [[ } </9 & NextInSet/10 & ErrorFlush/11 & ErrorFlushFail/12 (/13 </14 & NameTailSet/15 >/16 ' '/17 '\t'/18 ','/19 '.'/20 ':'/21 ';'/22 '('/23 ')'/24 '{'/25 '}'/26 '['/27 ']'/28 '*'/29 Tile{ HalfReuse: '&'/0 HalfReuse: )/4 AsIs: (/7 AsIs: e.Scanned#1/5 AsIs: )/8 AsIs: e.Tail#1/2 AsIs: >/1 ]] }
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
  if( ! refalrts::alloc_char( context[17], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[18], '\t' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[19], ',' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[20], '.' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[21], ':' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[22], ';' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[23], '(' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[24], ')' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[25], '{' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[26], '}' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[27], '[' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[28], ']' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[29], '*' ) )
    return refalrts::cNoMemory;
  refalrts::reinit_char( context[0], '&' );
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
  res = refalrts::splice_evar( res, context[9], context[29] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult ErrorFlushFail(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 35 elems
  refalrts::Iter context[35];
  refalrts::zeros( context, 35 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & ErrorFlushFail/4 (/7 e.Scanned#1/5 )/8 '\"'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( '\"', context[2], context[3] );
    if( ! context[9] )
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

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & ErrorFlushFail/4 (/7 e.Scanned#1/5 )/8 s.Other#1/9 e.Text#1/2 >/1
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
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Text#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  e.Scanned#1/5 {REMOVED TILE}  s.Other#1/9 {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TError/4 HalfReuse: 'E'/7 } 'x'/10 'p'/11 'e'/12 'c'/13 't'/14 'e'/15 'd'/16 ' '/17 'e'/18 'r'/19 'r'/20 'o'/21 'r'/22 ' '/23 't'/24 'e'/25 'x'/26 't'/27 ' '/28 'o'/29 'r'/30 ' '/31 '\"'/32 Tile{ AsIs: )/8 } </33 & LoTokens/34 Tile{ AsIs: e.Text#1/2 } Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_char( context[10], 'x' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[11], 'p' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[12], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[13], 'c' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[14], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[15], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[16], 'd' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[17], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[18], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[19], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[20], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[21], 'o' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[22], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[23], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[24], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[25], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[26], 'x' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[27], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[28], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[29], 'o' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[30], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[31], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[32], '\"' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[33] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[34], LoTokens, "LoTokens" ) )
    return refalrts::cNoMemory;
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_ident( context[4], & ident_TError<int>::name );
  refalrts::reinit_char( context[7], 'E' );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[33] );
  refalrts::link_brackets( context[0], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[33], context[34] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[10], context[32] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[7], res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult FlushNameFail(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 26 elems
  refalrts::Iter context[26];
  refalrts::zeros( context, 26 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & FlushNameFail/4 (/7 )/8 e.Text#1/2 >/1
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
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TError/4 HalfReuse: 'e'/7 HalfReuse: 'x'/8 } 'p'/9 'e'/10 'c'/11 't'/12 'e'/13 'd'/14 ' '/15 'f'/16 'l'/17 'u'/18 's'/19 'h'/20 ' '/21 'n'/22 'a'/23 'm'/24 'e'/25 Tile{ HalfReuse: )/1 ]] }
  if( ! refalrts::alloc_char( context[9], 'p' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[10], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[11], 'c' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[12], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[13], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[14], 'd' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[15], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[16], 'f' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[17], 'l' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[18], 'u' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[19], 's' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[20], 'h' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[21], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[22], 'n' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[23], 'a' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[24], 'm' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[25], 'e' ) )
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
  res = refalrts::splice_evar( res, context[9], context[25] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[8], res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult EndFlushName(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & EndFlushName/4 (/7 e.Scanned#1/5 )/8 e.Text#1/2 >/1
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
}

static refalrts::FnResult FlushNameTail(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & FlushNameTail/4 (/7 e.Scanned#1/5 )/8 e.Tail#1/2 >/1
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
}

static refalrts::FnResult Literal(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 43 elems
  refalrts::Iter context[43];
  refalrts::zeros( context, 43 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & Literal/4 (/7 e.Scanned#1/5 )/8 '\\'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( '\\', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Scanned#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  '\\'/9 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Escape/4 AsIs: (/7 AsIs: e.Scanned#1/5 AsIs: )/8 } Tile{ AsIs: e.Text#1/2 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name( context[4], Escape, "Escape" );
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
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & Literal/4 (/7 e.Scanned#1/5 )/8 '\''/9 '\''/10 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( '\'', context[2], context[3] );
    if( ! context[9] )
      continue;
    context[10] = refalrts::char_left( '\'', context[2], context[3] );
    if( ! context[10] )
      continue;
    // closed e.Scanned#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  '\''/10 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Literal/4 AsIs: (/7 AsIs: e.Scanned#1/5 HalfReuse: '\''/8 HalfReuse: )/9 } Tile{ AsIs: e.Text#1/2 } Tile{ AsIs: >/1 ]] }
    refalrts::reinit_char( context[8], '\'' );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[2], context[3] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[9], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & Literal/4 (/7 e.Scanned#1/5 )/8 '\''/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( '\'', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Scanned#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TLiteral/4 } Tile{ AsIs: e.Scanned#1/5 } Tile{ HalfReuse: )/7 } Tile{ HalfReuse: </8 HalfReuse: & LoTokens/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
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
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & Literal/4 (/7 e.Scanned#1/5 )/8 '\n'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( '\n', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Scanned#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  e.Scanned#1/5 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TError/4 HalfReuse: 'U'/7 } 'n'/10 'e'/11 'x'/12 'p'/13 'e'/14 'c'/15 't'/16 'e'/17 'd'/18 ' '/19 'e'/20 'n'/21 'd'/22 ' '/23 'o'/24 'f'/25 ' '/26 'l'/27 'i'/28 'n'/29 'e'/30 ' '/31 'a'/32 't'/33 ' '/34 'l'/35 'i'/36 't'/37 'e'/38 'r'/39 'a'/40 'l'/41 )/42 Tile{ HalfReuse: </8 HalfReuse: & LoTokens/9 AsIs: e.Text#1/2 AsIs: >/1 ]] }
    if( ! refalrts::alloc_char( context[10], 'n' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[11], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[12], 'x' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[13], 'p' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[14], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[15], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[16], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[17], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[18], 'd' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[19], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[20], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[21], 'n' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[22], 'd' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[23], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[24], 'o' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[25], 'f' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[26], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[27], 'l' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[28], 'i' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[29], 'n' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[30], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[31], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[32], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[33], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[34], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[35], 'l' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[36], 'i' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[37], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[38], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[39], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[40], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[41], 'l' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[42] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], & ident_TError<int>::name );
    refalrts::reinit_char( context[7], 'U' );
    refalrts::reinit_open_call( context[8] );
    refalrts::reinit_name( context[9], LoTokens, "LoTokens" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[8] );
    refalrts::link_brackets( context[0], context[42] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[10], context[42] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[7], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & Literal/4 (/7 e.Scanned#1/5 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Scanned#1 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  e.Scanned#1/5 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TError/4 HalfReuse: 'U'/7 } 'n'/9 'e'/10 'x'/11 'p'/12 'e'/13 'c'/14 't'/15 'e'/16 'd'/17 ' '/18 'e'/19 'n'/20 'd'/21 ' '/22 'o'/23 'f'/24 ' '/25 'f'/26 'i'/27 'l'/28 'e'/29 ' '/30 'a'/31 't'/32 ' '/33 'l'/34 'i'/35 't'/36 'e'/37 'r'/38 'a'/39 Tile{ HalfReuse: 'l'/8 HalfReuse: )/1 ]] }
    if( ! refalrts::alloc_char( context[9], 'n' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[10], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[11], 'x' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[12], 'p' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[13], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[14], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[15], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[16], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[17], 'd' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[18], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[19], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[20], 'n' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[21], 'd' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[22], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[23], 'o' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[24], 'f' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[25], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[26], 'f' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[27], 'i' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[28], 'l' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[29], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[30], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[31], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[32], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[33], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[34], 'l' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[35], 'i' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[36], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[37], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[38], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[39], 'a' ) )
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
    res = refalrts::splice_evar( res, context[9], context[39] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[7], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & Literal/4 (/7 e.Scanned#1/5 )/8 s.Other#1/9 e.Text#1/2 >/1
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
}

static refalrts::FnResult Escape(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 39 elems
  refalrts::Iter context[39];
  refalrts::zeros( context, 39 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & Escape/4 (/7 e.Scanned#1/5 )/8 'n'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'n', context[2], context[3] );
    if( ! context[9] )
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
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & Escape/4 (/7 e.Scanned#1/5 )/8 'r'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'r', context[2], context[3] );
    if( ! context[9] )
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
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & Escape/4 (/7 e.Scanned#1/5 )/8 't'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 't', context[2], context[3] );
    if( ! context[9] )
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
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & Escape/4 (/7 e.Scanned#1/5 )/8 '\\'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( '\\', context[2], context[3] );
    if( ! context[9] )
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
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & Escape/4 (/7 e.Scanned#1/5 )/8 'd'/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( 'd', context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Scanned#1 as range 5
    // closed e.Text#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  'd'/9 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Literal_DecCode/4 AsIs: (/7 AsIs: e.Scanned#1/5 AsIs: )/8 } Tile{ AsIs: e.Text#1/2 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name( context[4], Literal_DecCode, "Literal_DecCode" );
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
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & Escape/4 (/7 e.Scanned#1/5 )/8 '\''/9 e.Text#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_left( '\'', context[2], context[3] );
    if( ! context[9] )
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

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & Escape/4 (/7 e.Scanned#1/5 )/8 s.Other#1/9 e.Text#1/2 >/1
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
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Text#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  e.Scanned#1/5 {REMOVED TILE}  s.Other#1/9 {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TError/4 HalfReuse: 'U'/7 } 'n'/10 'e'/11 'x'/12 'p'/13 'e'/14 'c'/15 't'/16 'e'/17 'd'/18 ' '/19 'e'/20 's'/21 'c'/22 'a'/23 'p'/24 'e'/25 'd'/26 ' '/27 'c'/28 'h'/29 'a'/30 'r'/31 'a'/32 'c'/33 't'/34 'e'/35 'r'/36 Tile{ AsIs: )/8 } </37 & LoTokens/38 Tile{ AsIs: e.Text#1/2 } Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_char( context[10], 'n' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[11], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[12], 'x' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[13], 'p' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[14], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[15], 'c' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[16], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[17], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[18], 'd' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[19], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[20], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[21], 's' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[22], 'c' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[23], 'a' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[24], 'p' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[25], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[26], 'd' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[27], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[28], 'c' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[29], 'h' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[30], 'a' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[31], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[32], 'a' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[33], 'c' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[34], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[35], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[36], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[37] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[38], LoTokens, "LoTokens" ) )
    return refalrts::cNoMemory;
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_ident( context[4], & ident_TError<int>::name );
  refalrts::reinit_char( context[7], 'U' );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[37] );
  refalrts::link_brackets( context[0], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[37], context[38] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[10], context[36] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[7], res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult lambda_Literal_DecCode_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 25 elems
  refalrts::Iter context[25];
  refalrts::zeros( context, 25 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_Literal_DecCode_0/4 (/7 e.Scanned#1/5 )/8 # Success/9 s.Number#2/10 e.Tail#2/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_Success<int>::name, context[2], context[3] );
    if( ! context[9] )
      continue;
    // closed e.Scanned#1 as range 5
    if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
      continue;
    // closed e.Tail#2 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Literal/4 AsIs: (/7 AsIs: e.Scanned#1/5 HalfReuse: </8 HalfReuse: & Chr/9 AsIs: s.Number#2/10 } >/11 )/12 Tile{ AsIs: e.Tail#2/2 } Tile{ AsIs: >/1 ]] }
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
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & lambda_Literal_DecCode_0/4 (/7 e.Scanned#1/5 )/8 # Fails/9 e.Tail#2/2 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  context[9] = refalrts::ident_left(  & ident_Fails<int>::name, context[2], context[3] );
  if( ! context[9] )
    return refalrts::cRecognitionImpossible;
  // closed e.Scanned#1 as range 5
  // closed e.Tail#2 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  e.Scanned#1/5 {REMOVED TILE} 
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TError/4 HalfReuse: 'E'/7 } 'x'/10 'p'/11 'e'/12 'c'/13 't'/14 'e'/15 'd'/16 ' '/17 'd'/18 'i'/19 'g'/20 'i'/21 't'/22 's'/23 )/24 Tile{ HalfReuse: </8 HalfReuse: & LoTokens/9 AsIs: e.Tail#2/2 AsIs: >/1 ]] }
  if( ! refalrts::alloc_char( context[10], 'x' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[11], 'p' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[12], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[13], 'c' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[14], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[15], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[16], 'd' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[17], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[18], 'd' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[19], 'i' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[20], 'g' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[21], 'i' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[22], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[23], 's' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[24] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_ident( context[4], & ident_TError<int>::name );
  refalrts::reinit_char( context[7], 'E' );
  refalrts::reinit_open_call( context[8] );
  refalrts::reinit_name( context[9], LoTokens, "LoTokens" );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[8] );
  refalrts::link_brackets( context[0], context[24] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[10], context[24] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[7], res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult Literal_DecCode(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 29 elems
  refalrts::Iter context[29];
  refalrts::zeros( context, 29 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & Literal_DecCode/4 (/7 e.Scanned#1/5 )/8 e.Tail#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    // closed e.Scanned#1 as range 5
    // closed e.Tail#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } </9 & Fetch/10 </11 & IntFromStr/12 Tile{ AsIs: e.Tail#1/2 } >/13 </14 Tile{ HalfReuse: & CreateClosure /0 Reuse: & lambda_Literal_DecCode_0/4 AsIs: (/7 AsIs: e.Scanned#1/5 AsIs: )/8 } >/15 Tile{ AsIs: >/1 ]] }
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
    refalrts::reinit_name( context[0], refalrts::create_closure, "refalrts::create_closure" );
    refalrts::update_name( context[4], lambda_Literal_DecCode_0, "lambda_Literal_DecCode_0" );
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

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & Literal_DecCode/4 (/7 e.Scanned#1/5 )/8 >/1
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
  // closed e.Scanned#1 as range 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  e.Scanned#1/5 {REMOVED TILE} 
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TError/4 HalfReuse: 'U'/7 } 'n'/9 'e'/10 'x'/11 'p'/12 'e'/13 'c'/14 't'/15 'e'/16 'd'/17 ' '/18 'e'/19 'n'/20 'd'/21 ' '/22 'o'/23 'f'/24 ' '/25 'f'/26 'i'/27 'l'/28 Tile{ HalfReuse: 'e'/8 HalfReuse: )/1 ]] }
  if( ! refalrts::alloc_char( context[9], 'n' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[10], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[11], 'x' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[12], 'p' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[13], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[14], 'c' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[15], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[16], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[17], 'd' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[18], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[19], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[20], 'n' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[21], 'd' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[22], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[23], 'o' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[24], 'f' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[25], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[26], 'f' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[27], 'i' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[28], 'l' ) )
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
  res = refalrts::splice_evar( res, context[9], context[28] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[7], res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult NameFail(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 32 elems
  refalrts::Iter context[32];
  refalrts::zeros( context, 32 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & NameFail/4 (/7 )/8 s.Next#1/9 e.Tail#1/2 >/1
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
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TError/4 HalfReuse: 'U'/7 HalfReuse: 'n'/8 } 'e'/10 'x'/11 'p'/12 'e'/13 'c'/14 't'/15 'e'/16 'd'/17 ' '/18 'c'/19 'h'/20 'a'/21 'r'/22 'a'/23 'c'/24 't'/25 'e'/26 'r'/27 ' '/28 Tile{ AsIs: s.Next#1/9 } )/29 </30 & LoTokens/31 Tile{ AsIs: e.Tail#1/2 } Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_char( context[10], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[11], 'x' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[12], 'p' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[13], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[14], 'c' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[15], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[16], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[17], 'd' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[18], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[19], 'c' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[20], 'h' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[21], 'a' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[22], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[23], 'a' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[24], 'c' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[25], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[26], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[27], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[28], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[29] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[30] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[31], LoTokens, "LoTokens" ) )
    return refalrts::cNoMemory;
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_ident( context[4], & ident_TError<int>::name );
  refalrts::reinit_char( context[7], 'U' );
  refalrts::reinit_char( context[8], 'n' );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[30] );
  refalrts::link_brackets( context[0], context[29] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[29], context[31] );
  res = refalrts::splice_evar( res, context[9], context[9] );
  res = refalrts::splice_evar( res, context[10], context[28] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult NameTailFail(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & NameTailFail/4 (/7 e.Scanned#1/5 )/8 e.Tail#1/2 >/1
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
}

static refalrts::FnResult NameTail(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & NameTail/4 (/7 e.Scanned#1/5 )/8 e.Tail#1/2 >/1
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
}

static refalrts::FnResult Name(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & Name/4 e.Tail#1/2 >/1
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
}


//End of file
