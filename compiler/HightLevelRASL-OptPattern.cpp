// Automatically generated file. Don't edit!
#include "refalrts.h"


extern refalrts::FnResult Add(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Compare(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Dec(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult EscapeChar(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Fetch(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult HightLevelRASL_OptPattern(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Inc(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Map(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult MapReduce(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Seq(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Sort(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult StrFromInt(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult BuildString(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult CollectStrings(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult DoFreezeRanges(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult DoFreezeRanges_MakeSavers(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult DoGenPattern(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult DoGenResult(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult Escape(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult ExtractRanges(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult FixupEVarIndexes(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult FixupEVarIndexes_PatchNumber(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult FixupMarkedPatternIndexes(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult FixupMarkedPatternTerm(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult FoldOpenELoops(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult FreezeRanges(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult GenPattern(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult GenResult(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult GetRangeReassigns(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult HightLevelRASL_Function(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult HightLevelRASL_Sentence(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult Inc2(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult IncVarOffset(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult MakeVariableComment(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult MakeVariableCommentTable(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult PrintVar(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult ReplicateVar(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult TextFromPattern(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult TextFromPattern_Char(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult UniqueRanges(refalrts::Iter arg_begin, refalrts::Iter arg_end);

// identifier #ADT_Brackets
template <typename SREFAL_PARAM_INT>
struct ident_ADT_Brackets {
  static const char *name() {
    return "ADT_Brackets";
  }
};

// identifier #AlgLeft
template <typename SREFAL_PARAM_INT>
struct ident_AlgLeft {
  static const char *name() {
    return "AlgLeft";
  }
};

// identifier #AlgRight
template <typename SREFAL_PARAM_INT>
struct ident_AlgRight {
  static const char *name() {
    return "AlgRight";
  }
};

// identifier #Brackets
template <typename SREFAL_PARAM_INT>
struct ident_Brackets {
  static const char *name() {
    return "Brackets";
  }
};

// identifier #CallBrackets
template <typename SREFAL_PARAM_INT>
struct ident_CallBrackets {
  static const char *name() {
    return "CallBrackets";
  }
};

// identifier #CloseCall
template <typename SREFAL_PARAM_INT>
struct ident_CloseCall {
  static const char *name() {
    return "CloseCall";
  }
};

// identifier #CmdADT
template <typename SREFAL_PARAM_INT>
struct ident_CmdADT {
  static const char *name() {
    return "CmdADT";
  }
};

// identifier #CmdAllocateElem
template <typename SREFAL_PARAM_INT>
struct ident_CmdAllocateElem {
  static const char *name() {
    return "CmdAllocateElem";
  }
};

// identifier #CmdBrackets
template <typename SREFAL_PARAM_INT>
struct ident_CmdBrackets {
  static const char *name() {
    return "CmdBrackets";
  }
};

// identifier #CmdChar
template <typename SREFAL_PARAM_INT>
struct ident_CmdChar {
  static const char *name() {
    return "CmdChar";
  }
};

// identifier #CmdComment
template <typename SREFAL_PARAM_INT>
struct ident_CmdComment {
  static const char *name() {
    return "CmdComment";
  }
};

// identifier #CmdCopyVar
template <typename SREFAL_PARAM_INT>
struct ident_CmdCopyVar {
  static const char *name() {
    return "CmdCopyVar";
  }
};

// identifier #CmdDeclaration
template <typename SREFAL_PARAM_INT>
struct ident_CmdDeclaration {
  static const char *name() {
    return "CmdDeclaration";
  }
};

// identifier #CmdDefineIdent
template <typename SREFAL_PARAM_INT>
struct ident_CmdDefineIdent {
  static const char *name() {
    return "CmdDefineIdent";
  }
};

// identifier #CmdEmpty
template <typename SREFAL_PARAM_INT>
struct ident_CmdEmpty {
  static const char *name() {
    return "CmdEmpty";
  }
};

// identifier #CmdEmptyResult
template <typename SREFAL_PARAM_INT>
struct ident_CmdEmptyResult {
  static const char *name() {
    return "CmdEmptyResult";
  }
};

// identifier #CmdEnum
template <typename SREFAL_PARAM_INT>
struct ident_CmdEnum {
  static const char *name() {
    return "CmdEnum";
  }
};

// identifier #CmdFail
template <typename SREFAL_PARAM_INT>
struct ident_CmdFail {
  static const char *name() {
    return "CmdFail";
  }
};

// identifier #CmdIdent
template <typename SREFAL_PARAM_INT>
struct ident_CmdIdent {
  static const char *name() {
    return "CmdIdent";
  }
};

// identifier #CmdInitB0
template <typename SREFAL_PARAM_INT>
struct ident_CmdInitB0 {
  static const char *name() {
    return "CmdInitB0";
  }
};

// identifier #CmdInsertElem
template <typename SREFAL_PARAM_INT>
struct ident_CmdInsertElem {
  static const char *name() {
    return "CmdInsertElem";
  }
};

// identifier #CmdInsertRange
template <typename SREFAL_PARAM_INT>
struct ident_CmdInsertRange {
  static const char *name() {
    return "CmdInsertRange";
  }
};

// identifier #CmdInsertVar
template <typename SREFAL_PARAM_INT>
struct ident_CmdInsertVar {
  static const char *name() {
    return "CmdInsertVar";
  }
};

// identifier #CmdIssueMem
template <typename SREFAL_PARAM_INT>
struct ident_CmdIssueMem {
  static const char *name() {
    return "CmdIssueMem";
  }
};

// identifier #CmdLinkBrackets
template <typename SREFAL_PARAM_INT>
struct ident_CmdLinkBrackets {
  static const char *name() {
    return "CmdLinkBrackets";
  }
};

// identifier #CmdName
template <typename SREFAL_PARAM_INT>
struct ident_CmdName {
  static const char *name() {
    return "CmdName";
  }
};

// identifier #CmdNumber
template <typename SREFAL_PARAM_INT>
struct ident_CmdNumber {
  static const char *name() {
    return "CmdNumber";
  }
};

// identifier #CmdOpenELoop
template <typename SREFAL_PARAM_INT>
struct ident_CmdOpenELoop {
  static const char *name() {
    return "CmdOpenELoop";
  }
};

// identifier #CmdOpenedE
template <typename SREFAL_PARAM_INT>
struct ident_CmdOpenedE {
  static const char *name() {
    return "CmdOpenedE";
  }
};

// identifier #CmdPushStack
template <typename SREFAL_PARAM_INT>
struct ident_CmdPushStack {
  static const char *name() {
    return "CmdPushStack";
  }
};

// identifier #CmdRepeated
template <typename SREFAL_PARAM_INT>
struct ident_CmdRepeated {
  static const char *name() {
    return "CmdRepeated";
  }
};

// identifier #CmdReturnResult
template <typename SREFAL_PARAM_INT>
struct ident_CmdReturnResult {
  static const char *name() {
    return "CmdReturnResult";
  }
};

// identifier #CmdSave
template <typename SREFAL_PARAM_INT>
struct ident_CmdSave {
  static const char *name() {
    return "CmdSave";
  }
};

// identifier #CmdSentence
template <typename SREFAL_PARAM_INT>
struct ident_CmdSentence {
  static const char *name() {
    return "CmdSentence";
  }
};

// identifier #CmdSeparator
template <typename SREFAL_PARAM_INT>
struct ident_CmdSeparator {
  static const char *name() {
    return "CmdSeparator";
  }
};

// identifier #CmdSwap
template <typename SREFAL_PARAM_INT>
struct ident_CmdSwap {
  static const char *name() {
    return "CmdSwap";
  }
};

// identifier #CmdVar
template <typename SREFAL_PARAM_INT>
struct ident_CmdVar {
  static const char *name() {
    return "CmdVar";
  }
};

// identifier #Declaration
template <typename SREFAL_PARAM_INT>
struct ident_Declaration {
  static const char *name() {
    return "Declaration";
  }
};

// identifier #ElChar
template <typename SREFAL_PARAM_INT>
struct ident_ElChar {
  static const char *name() {
    return "ElChar";
  }
};

// identifier #ElCloseADT
template <typename SREFAL_PARAM_INT>
struct ident_ElCloseADT {
  static const char *name() {
    return "ElCloseADT";
  }
};

// identifier #ElCloseBracket
template <typename SREFAL_PARAM_INT>
struct ident_ElCloseBracket {
  static const char *name() {
    return "ElCloseBracket";
  }
};

// identifier #ElCloseCall
template <typename SREFAL_PARAM_INT>
struct ident_ElCloseCall {
  static const char *name() {
    return "ElCloseCall";
  }
};

// identifier #ElIdent
template <typename SREFAL_PARAM_INT>
struct ident_ElIdent {
  static const char *name() {
    return "ElIdent";
  }
};

// identifier #ElName
template <typename SREFAL_PARAM_INT>
struct ident_ElName {
  static const char *name() {
    return "ElName";
  }
};

// identifier #ElNumber
template <typename SREFAL_PARAM_INT>
struct ident_ElNumber {
  static const char *name() {
    return "ElNumber";
  }
};

// identifier #ElOpenADT
template <typename SREFAL_PARAM_INT>
struct ident_ElOpenADT {
  static const char *name() {
    return "ElOpenADT";
  }
};

// identifier #ElOpenBracket
template <typename SREFAL_PARAM_INT>
struct ident_ElOpenBracket {
  static const char *name() {
    return "ElOpenBracket";
  }
};

// identifier #ElOpenCall
template <typename SREFAL_PARAM_INT>
struct ident_ElOpenCall {
  static const char *name() {
    return "ElOpenCall";
  }
};

// identifier #ElString
template <typename SREFAL_PARAM_INT>
struct ident_ElString {
  static const char *name() {
    return "ElString";
  }
};

// identifier #Enum
template <typename SREFAL_PARAM_INT>
struct ident_Enum {
  static const char *name() {
    return "Enum";
  }
};

// identifier #Function
template <typename SREFAL_PARAM_INT>
struct ident_Function {
  static const char *name() {
    return "Function";
  }
};

// identifier #Ident
template <typename SREFAL_PARAM_INT>
struct ident_Ident {
  static const char *name() {
    return "Ident";
  }
};

// identifier #Junk
template <typename SREFAL_PARAM_INT>
struct ident_Junk {
  static const char *name() {
    return "Junk";
  }
};

// identifier #Range
template <typename SREFAL_PARAM_INT>
struct ident_Range {
  static const char *name() {
    return "Range";
  }
};

// identifier #Separator
template <typename SREFAL_PARAM_INT>
struct ident_Separator {
  static const char *name() {
    return "Separator";
  }
};

// identifier #Stub
template <typename SREFAL_PARAM_INT>
struct ident_Stub {
  static const char *name() {
    return "Stub";
  }
};

// identifier #Swap
template <typename SREFAL_PARAM_INT>
struct ident_Swap {
  static const char *name() {
    return "Swap";
  }
};

// identifier #TkChar
template <typename SREFAL_PARAM_INT>
struct ident_TkChar {
  static const char *name() {
    return "TkChar";
  }
};

// identifier #TkCloseADT
template <typename SREFAL_PARAM_INT>
struct ident_TkCloseADT {
  static const char *name() {
    return "TkCloseADT";
  }
};

// identifier #TkCloseBracket
template <typename SREFAL_PARAM_INT>
struct ident_TkCloseBracket {
  static const char *name() {
    return "TkCloseBracket";
  }
};

// identifier #TkIdentifier
template <typename SREFAL_PARAM_INT>
struct ident_TkIdentifier {
  static const char *name() {
    return "TkIdentifier";
  }
};

// identifier #TkName
template <typename SREFAL_PARAM_INT>
struct ident_TkName {
  static const char *name() {
    return "TkName";
  }
};

// identifier #TkNumber
template <typename SREFAL_PARAM_INT>
struct ident_TkNumber {
  static const char *name() {
    return "TkNumber";
  }
};

// identifier #TkOpenADT
template <typename SREFAL_PARAM_INT>
struct ident_TkOpenADT {
  static const char *name() {
    return "TkOpenADT";
  }
};

// identifier #TkOpenBracket
template <typename SREFAL_PARAM_INT>
struct ident_TkOpenBracket {
  static const char *name() {
    return "TkOpenBracket";
  }
};

// identifier #TkString
template <typename SREFAL_PARAM_INT>
struct ident_TkString {
  static const char *name() {
    return "TkString";
  }
};

// identifier #TkVariable
template <typename SREFAL_PARAM_INT>
struct ident_TkVariable {
  static const char *name() {
    return "TkVariable";
  }
};

static refalrts::FnResult lambda_HightLevelRASL_OptPattern_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { HightLevelRASL_Function, "HightLevelRASL_Function" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_CmdSeparator<int>::name,
    & ident_Separator<int>::name,
    & ident_CmdDefineIdent<int>::name,
    & ident_Ident<int>::name,
    & ident_CmdDeclaration<int>::name,
    & ident_Declaration<int>::name,
    & ident_Stub<int>::name,
    & ident_CmdSwap<int>::name,
    & ident_Swap<int>::name,
    & ident_CmdEnum<int>::name,
    & ident_Enum<int>::name,
    & ident_Function<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +24, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( # Function s.ScopeClass#2/4 ( e.Name#2/5 ) e.Sentences#2/2 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icIdentLeft, 0, 11, 2},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icsVarLeft, 0, 4, 2},
    {refalrts::icBracketLeft, 0, 5, 2},
    // closed e.Name#2 as range 5
    // closed e.Sentences#2 as range 2
    //2: e.Sentences#2
    //4: s.ScopeClass#2
    //5: e.Name#2
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 7},
    {refalrts::icFunc, 0, 0, 8},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 9},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 10},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 11},
    {refalrts::icPushStack, 0, 0, 11},
    {refalrts::icPushStack, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icLinkBrackets, 9, 10, 0},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceEVar, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceSTVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +16, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( # Enum s.ScopeClass#2/4 e.Name#2/2 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icIdentLeft, 0, 10, 2},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icsVarLeft, 0, 4, 2},
    // closed e.Name#2 as range 2
    //2: e.Name#2
    //4: s.ScopeClass#2
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 5},
    {refalrts::icIdent, 0, 9, 6},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 7},
    {refalrts::icLinkBrackets, 5, 7, 0},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceSTVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +16, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( # Swap s.ScopeClass#2/4 e.Name#2/2 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icIdentLeft, 0, 8, 2},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icsVarLeft, 0, 4, 2},
    // closed e.Name#2 as range 2
    //2: e.Name#2
    //4: s.ScopeClass#2
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 5},
    {refalrts::icIdent, 0, 7, 6},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 7},
    {refalrts::icLinkBrackets, 5, 7, 0},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceSTVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +7, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( # Stub s.ScopeClass#2/4 e.Name#2/2 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icIdentLeft, 0, 6, 2},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icsVarLeft, 0, 4, 2},
    // closed e.Name#2 as range 2
    //2: e.Name#2
    //4: s.ScopeClass#2
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +16, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( # Declaration s.ScopeClass#2/4 e.Name#2/2 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icIdentLeft, 0, 5, 2},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icsVarLeft, 0, 4, 2},
    // closed e.Name#2 as range 2
    //2: e.Name#2
    //4: s.ScopeClass#2
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 5},
    {refalrts::icIdent, 0, 4, 6},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 7},
    {refalrts::icLinkBrackets, 5, 7, 0},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceSTVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +14, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( # Ident e.Name#2/2 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icIdentLeft, 0, 3, 2},
    {refalrts::icEmpty, 0, 0, 0},
    // closed e.Name#2 as range 2
    //2: e.Name#2
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 4},
    {refalrts::icIdent, 0, 2, 5},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 6},
    {refalrts::icLinkBrackets, 4, 6, 0},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( # Separator )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icIdentLeft, 0, 1, 2},
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 4},
    {refalrts::icIdent, 0, 0, 5},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 6},
    {refalrts::icLinkBrackets, 4, 6, 0},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 4},
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
    // ( # Function s.ScopeClass#2/4 ( e.Name#2/5 ) e.Sentences#2/2 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_Function<int>::name, context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[4], context[2], context[3] ) )
      continue;
    context[5] = 0;
    context[6] = 0;
    if( ! refalrts::brackets_left( context[5], context[6], context[2], context[3] ) )
      continue;
    // closed e.Name#2 as range 5
    // closed e.Sentences#2 as range 2
    //2: e.Sentences#2
    //4: s.ScopeClass#2
    //5: e.Name#2

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[7] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[8], HightLevelRASL_Function, "HightLevelRASL_Function" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[9] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[11] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[11] );
    refalrts::push_stack( context[7] );
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    refalrts::link_brackets( context[9], context[10] );
    res = refalrts::splice_elem( res, context[10] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_elem( res, context[9] );
    res = refalrts::splice_stvar( res, context[4] );
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
    // ( # Enum s.ScopeClass#2/4 e.Name#2/2 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_Enum<int>::name, context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[4], context[2], context[3] ) )
      continue;
    // closed e.Name#2 as range 2
    //2: e.Name#2
    //4: s.ScopeClass#2

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[5] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[6], & ident_CmdEnum<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[7] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[5], context[7] );
    res = refalrts::splice_elem( res, context[7] );
    res = refalrts::splice_evar( res, context[2], context[3] );
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
    // ( # Swap s.ScopeClass#2/4 e.Name#2/2 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_Swap<int>::name, context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[4], context[2], context[3] ) )
      continue;
    // closed e.Name#2 as range 2
    //2: e.Name#2
    //4: s.ScopeClass#2

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[5] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[6], & ident_CmdSwap<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[7] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[5], context[7] );
    res = refalrts::splice_elem( res, context[7] );
    res = refalrts::splice_evar( res, context[2], context[3] );
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
    // ( # Stub s.ScopeClass#2/4 e.Name#2/2 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_Stub<int>::name, context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[4], context[2], context[3] ) )
      continue;
    // closed e.Name#2 as range 2
    //2: e.Name#2
    //4: s.ScopeClass#2

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
    // ( # Declaration s.ScopeClass#2/4 e.Name#2/2 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_Declaration<int>::name, context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[4], context[2], context[3] ) )
      continue;
    // closed e.Name#2 as range 2
    //2: e.Name#2
    //4: s.ScopeClass#2

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[5] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[6], & ident_CmdDeclaration<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[7] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[5], context[7] );
    res = refalrts::splice_elem( res, context[7] );
    res = refalrts::splice_evar( res, context[2], context[3] );
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
    // ( # Ident e.Name#2/2 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_Ident<int>::name, context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    // closed e.Name#2 as range 2
    //2: e.Name#2

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[4] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[5], & ident_CmdDefineIdent<int>::name ) )
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
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  refalrts::move_left( context[0], context[1] );
  refalrts::move_left( context[0], context[1] );
  refalrts::move_right( context[0], context[1] );
  // ( # Separator )
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::ident_left(  & ident_Separator<int>::name, context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_bracket( context[4] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[5], & ident_CmdSeparator<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[6] ) )
    return refalrts::cNoMemory;
  refalrts::link_brackets( context[4], context[6] );
  res = refalrts::splice_elem( res, context[6] );
  res = refalrts::splice_elem( res, context[5] );
  res = refalrts::splice_elem( res, context[4] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

refalrts::FnResult HightLevelRASL_OptPattern(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { lambda_HightLevelRASL_OptPattern_0, "lambda_HightLevelRASL_OptPattern_0" },
    { Map, "Map" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    // e.ProgramElements#1/0
    // closed e.ProgramElements#1 as range 0
    //0: e.ProgramElements#1
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
  // e.ProgramElements#1/0
  // closed e.ProgramElements#1 as range 0
  //0: e.ProgramElements#1

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_call( context[2] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[3], Map, "Map" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[4], lambda_HightLevelRASL_OptPattern_0, "lambda_HightLevelRASL_OptPattern_0" ) )
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

static refalrts::FnResult lambda_HightLevelRASL_Function_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { HightLevelRASL_Sentence, "HightLevelRASL_Sentence" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    // ( ( e.Pattern#2/4 ) ( e.Result#2/6 ) )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 2},
    {refalrts::icBracketLeft, 0, 6, 2},
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icEmpty, 0, 0, 0},
    // closed e.Pattern#2 as range 4
    // closed e.Result#2 as range 6
    //4: e.Pattern#2
    //6: e.Result#2
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 9},
    {refalrts::icFunc, 0, 0, 10},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 11},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 12},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 13},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 14},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 15},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 16},
    {refalrts::icLinkBrackets, 8, 16, 0},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icPushStack, 0, 0, 15},
    {refalrts::icPushStack, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icLinkBrackets, 13, 14, 0},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceEVar, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icLinkBrackets, 11, 12, 0},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceEVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 11},
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
  // ( ( e.Pattern#2/4 ) ( e.Result#2/6 ) )
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
  // closed e.Pattern#2 as range 4
  // closed e.Result#2 as range 6
  //4: e.Pattern#2
  //6: e.Result#2

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_bracket( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[10], HightLevelRASL_Sentence, "HightLevelRASL_Sentence" ) )
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
  if( ! refalrts::alloc_close_bracket( context[16] ) )
    return refalrts::cNoMemory;
  refalrts::link_brackets( context[8], context[16] );
  res = refalrts::splice_elem( res, context[16] );
  refalrts::push_stack( context[15] );
  refalrts::push_stack( context[9] );
  res = refalrts::splice_elem( res, context[15] );
  refalrts::link_brackets( context[13], context[14] );
  res = refalrts::splice_elem( res, context[14] );
  res = refalrts::splice_evar( res, context[6], context[7] );
  res = refalrts::splice_elem( res, context[13] );
  refalrts::link_brackets( context[11], context[12] );
  res = refalrts::splice_elem( res, context[12] );
  res = refalrts::splice_evar( res, context[4], context[5] );
  res = refalrts::splice_elem( res, context[11] );
  res = refalrts::splice_elem( res, context[10] );
  res = refalrts::splice_elem( res, context[9] );
  res = refalrts::splice_elem( res, context[8] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult lambda_HightLevelRASL_Function_1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
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
    {refalrts::icOnFailGoTo, +8, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // s.MaxMemory#2/2 s.Memory#2/3 '<'
    {refalrts::icCharRight, 0, static_cast<unsigned char>('<'), 0},
    {refalrts::icsVarLeft, 0, 2, 0},
    {refalrts::icsVarLeft, 0, 3, 0},
    {refalrts::icEmpty, 0, 0, 0},
    //2: s.MaxMemory#2
    //3: s.Memory#2
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icSpliceSTVar, 0, 0, 3},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // s.MaxMemory#2/2 s.Memory#2/3 s.Other#3/4
    {refalrts::icsVarLeft, 0, 2, 0},
    {refalrts::icsVarLeft, 0, 3, 0},
    {refalrts::icsVarLeft, 0, 4, 0},
    {refalrts::icEmpty, 0, 0, 0},
    //2: s.MaxMemory#2
    //3: s.Memory#2
    //4: s.Other#3
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icSpliceSTVar, 0, 0, 2},
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
    // s.MaxMemory#2/2 s.Memory#2/3 '<'
    if( ! refalrts::char_right( '<', context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[2], context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    //2: s.MaxMemory#2
    //3: s.Memory#2

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    res = refalrts::splice_stvar( res, context[3] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  refalrts::move_left( context[0], context[1] );
  refalrts::move_left( context[0], context[1] );
  refalrts::move_right( context[0], context[1] );
  // s.MaxMemory#2/2 s.Memory#2/3 s.Other#3/4
  if( ! refalrts::svar_left( context[2], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[4], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  //2: s.MaxMemory#2
  //3: s.Memory#2
  //4: s.Other#3

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  res = refalrts::splice_stvar( res, context[2] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult lambda_HightLevelRASL_Function_2(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 23 elems
  refalrts::Iter context[23];
  refalrts::zeros( context, 23 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { lambda_HightLevelRASL_Function_1, "lambda_HightLevelRASL_Function_1" },
    { refalrts::create_closure, "refalrts::create_closure" },
    { Compare, "Compare" },
    { Fetch, "Fetch" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_CmdSentence<int>::name,
    & ident_CmdIssueMem<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    // s.MaxMemory#2/6 ( ( # CmdIssueMem s.Memory#2/7 ) e.Sentence#2/2 )
    {refalrts::icBracketRight, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 2},
    {refalrts::icIdentLeft, 0, 1, 4},
    // closed e.Sentence#2 as range 2
    {refalrts::icsVarLeft, 0, 6, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icsVarLeft, 0, 7, 4},
    {refalrts::icEmpty, 0, 0, 4},
    //2: e.Sentence#2
    //6: s.MaxMemory#2
    //7: s.Memory#2
    //16: s.MaxMemory#2
    //17: s.Memory#2
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 8},
    {refalrts::icFunc, 0, 3, 9},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 10},
    {refalrts::icFunc, 0, 2, 11},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 12},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 13},
    {refalrts::icFunc, 0, 1, 14},
    {refalrts::icFunc, 0, 0, 15},
    {refalrts::icCopySTVar, 16, 6, 0},
    {refalrts::icCopySTVar, 17, 7, 0},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 18},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 19},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 20},
    {refalrts::icIdent, 0, 0, 21},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 22},
    {refalrts::icLinkBrackets, 20, 22, 0},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icPushStack, 0, 0, 19},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icPushStack, 0, 0, 18},
    {refalrts::icPushStack, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceSTVar, 0, 0, 17},
    {refalrts::icSpliceSTVar, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icPushStack, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceSTVar, 0, 0, 7},
    {refalrts::icSpliceSTVar, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 11},
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
  // s.MaxMemory#2/6 ( ( # CmdIssueMem s.Memory#2/7 ) e.Sentence#2/2 )
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_right( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[4] = 0;
  context[5] = 0;
  if( ! refalrts::brackets_left( context[4], context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::ident_left(  & ident_CmdIssueMem<int>::name, context[4], context[5] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Sentence#2 as range 2
  if( ! refalrts::svar_left( context[6], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[7], context[4], context[5] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[4], context[5] ) )
    return refalrts::cRecognitionImpossible;
  //2: e.Sentence#2
  //6: s.MaxMemory#2
  //7: s.Memory#2
  //16: s.MaxMemory#2
  //17: s.Memory#2

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_call( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[9], Fetch, "Fetch" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[11], Compare, "Compare" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[14], refalrts::create_closure, "refalrts::create_closure" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[15], lambda_HightLevelRASL_Function_1, "lambda_HightLevelRASL_Function_1" ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_stvar(context[16], context[6]))
    return refalrts::cNoMemory;
  if (! refalrts::copy_stvar(context[17], context[7]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[18] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[19] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[20] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[21], & ident_CmdSentence<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[22] ) )
    return refalrts::cNoMemory;
  refalrts::link_brackets( context[20], context[22] );
  res = refalrts::splice_elem( res, context[22] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_elem( res, context[21] );
  res = refalrts::splice_elem( res, context[20] );
  refalrts::push_stack( context[19] );
  refalrts::push_stack( context[8] );
  res = refalrts::splice_elem( res, context[19] );
  refalrts::push_stack( context[18] );
  refalrts::push_stack( context[13] );
  res = refalrts::splice_elem( res, context[18] );
  res = refalrts::splice_stvar( res, context[17] );
  res = refalrts::splice_stvar( res, context[16] );
  res = refalrts::splice_elem( res, context[15] );
  res = refalrts::splice_elem( res, context[14] );
  res = refalrts::splice_elem( res, context[13] );
  refalrts::push_stack( context[12] );
  refalrts::push_stack( context[10] );
  res = refalrts::splice_elem( res, context[12] );
  res = refalrts::splice_stvar( res, context[7] );
  res = refalrts::splice_stvar( res, context[6] );
  res = refalrts::splice_elem( res, context[11] );
  res = refalrts::splice_elem( res, context[10] );
  res = refalrts::splice_elem( res, context[9] );
  res = refalrts::splice_elem( res, context[8] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult lambda_HightLevelRASL_Function_3(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
#ifdef INTERPRET
  using refalrts::functions;
  static const refalrts::RefalIdentifier idents[] = {
    & ident_CmdFail<int>::name,
    & ident_CmdOpenELoop<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +21, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // e.Commands#3/0 ( # CmdOpenELoop e.OpenELoop#3/2 )
    {refalrts::icBracketRight, 0, 2, 0},
    {refalrts::icIdentLeft, 0, 1, 2},
    // closed e.Commands#3 as range 0
    // closed e.OpenELoop#3 as range 2
    //0: e.Commands#3
    //2: e.OpenELoop#3
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 4},
    {refalrts::icIdent, 0, 1, 5},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 6},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 7},
    {refalrts::icIdent, 0, 0, 8},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 9},
    {refalrts::icLinkBrackets, 7, 9, 0},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icLinkBrackets, 4, 6, 0},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // e.LastSentence#3/0
    // closed e.LastSentence#3 as range 0
    //0: e.LastSentence#3
    {refalrts::icEmptyResult, 0, 0, 0},
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
    // e.Commands#3/0 ( # CmdOpenELoop e.OpenELoop#3/2 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_right( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdOpenELoop<int>::name, context[2], context[3] ) )
      continue;
    // closed e.Commands#3 as range 0
    // closed e.OpenELoop#3 as range 2
    //0: e.Commands#3
    //2: e.OpenELoop#3

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[4] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[5], & ident_CmdOpenELoop<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[7] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[8], & ident_CmdFail<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[9] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[7], context[9] );
    res = refalrts::splice_elem( res, context[9] );
    res = refalrts::splice_elem( res, context[8] );
    res = refalrts::splice_elem( res, context[7] );
    refalrts::link_brackets( context[4], context[6] );
    res = refalrts::splice_elem( res, context[6] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_elem( res, context[5] );
    res = refalrts::splice_elem( res, context[4] );
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
  // e.LastSentence#3/0
  // closed e.LastSentence#3 as range 0
  //0: e.LastSentence#3

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  res = refalrts::splice_evar( res, context[0], context[1] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult lambda_HightLevelRASL_Function_4(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { lambda_HightLevelRASL_Function_3, "lambda_HightLevelRASL_Function_3" },
    { Fetch, "Fetch" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_CmdEnum<int>::name,
    & ident_CmdIssueMem<int>::name,
    & ident_Function<int>::name,
    & ident_CmdSentence<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +42, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // s.ScopeClass#1/4 ( e.Name#1/5 ) s.MaxMemory#2/7 e.Sentences#2/0 ( # CmdSentence e.LastSentence#2/2 )
    {refalrts::icBracketRight, 0, 2, 0},
    {refalrts::icIdentLeft, 0, 3, 2},
    // closed e.LastSentence#2 as range 2
    {refalrts::icsVarLeft, 0, 4, 0},
    {refalrts::icBracketLeft, 0, 5, 0},
    // closed e.Name#1 as range 5
    {refalrts::icsVarLeft, 0, 7, 0},
    // closed e.Sentences#2 as range 0
    //0: e.Sentences#2
    //2: e.LastSentence#2
    //4: s.ScopeClass#1
    //5: e.Name#1
    //7: s.MaxMemory#2
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icIdent, 0, 2, 9},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 10},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 11},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 12},
    {refalrts::icIdent, 0, 1, 13},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 14},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 15},
    {refalrts::icFunc, 0, 1, 16},
    {refalrts::icFunc, 0, 0, 17},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 18},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 19},
    {refalrts::icLinkBrackets, 8, 19, 0},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icPushStack, 0, 0, 18},
    {refalrts::icPushStack, 0, 0, 15},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icLinkBrackets, 12, 14, 0},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceSTVar, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icLinkBrackets, 10, 11, 0},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceEVar, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceSTVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // s.ScopeClass#1/4 ( e.Name#1/2 ) 0
    {refalrts::icNumRight, 0, 0, 0},
    {refalrts::icBracketRight, 0, 2, 0},
    // closed e.Name#1 as range 2
    {refalrts::icsVarLeft, 0, 4, 0},
    {refalrts::icEmpty, 0, 0, 0},
    //2: e.Name#1
    //4: s.ScopeClass#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 5},
    {refalrts::icIdent, 0, 0, 6},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 7},
    {refalrts::icLinkBrackets, 5, 7, 0},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceEVar, 0, 0, 2},
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
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    // s.ScopeClass#1/4 ( e.Name#1/5 ) s.MaxMemory#2/7 e.Sentences#2/0 ( # CmdSentence e.LastSentence#2/2 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_right( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdSentence<int>::name, context[2], context[3] ) )
      continue;
    // closed e.LastSentence#2 as range 2
    if( ! refalrts::svar_left( context[4], context[0], context[1] ) )
      continue;
    context[5] = 0;
    context[6] = 0;
    if( ! refalrts::brackets_left( context[5], context[6], context[0], context[1] ) )
      continue;
    // closed e.Name#1 as range 5
    if( ! refalrts::svar_left( context[7], context[0], context[1] ) )
      continue;
    // closed e.Sentences#2 as range 0
    //0: e.Sentences#2
    //2: e.LastSentence#2
    //4: s.ScopeClass#1
    //5: e.Name#1
    //7: s.MaxMemory#2

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[9], & ident_Function<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[13], & ident_CmdIssueMem<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[15] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[16], Fetch, "Fetch" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[17], lambda_HightLevelRASL_Function_3, "lambda_HightLevelRASL_Function_3" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[18] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[19] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[8], context[19] );
    res = refalrts::splice_elem( res, context[19] );
    refalrts::push_stack( context[18] );
    refalrts::push_stack( context[15] );
    res = refalrts::splice_elem( res, context[18] );
    res = refalrts::splice_elem( res, context[17] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_elem( res, context[15] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    refalrts::link_brackets( context[12], context[14] );
    res = refalrts::splice_elem( res, context[14] );
    res = refalrts::splice_stvar( res, context[7] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_elem( res, context[12] );
    refalrts::link_brackets( context[10], context[11] );
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_elem( res, context[10] );
    res = refalrts::splice_stvar( res, context[4] );
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
  // s.ScopeClass#1/4 ( e.Name#1/2 ) 0
  if( ! refalrts::number_right( 0UL, context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_right( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Name#1 as range 2
  if( ! refalrts::svar_left( context[4], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  //2: e.Name#1
  //4: s.ScopeClass#1

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_bracket( context[5] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[6], & ident_CmdEnum<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[7] ) )
    return refalrts::cNoMemory;
  refalrts::link_brackets( context[5], context[7] );
  res = refalrts::splice_elem( res, context[7] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_stvar( res, context[4] );
  res = refalrts::splice_elem( res, context[6] );
  res = refalrts::splice_elem( res, context[5] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult HightLevelRASL_Function(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 26 elems
  refalrts::Iter context[26];
  refalrts::zeros( context, 26 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { lambda_HightLevelRASL_Function_4, "lambda_HightLevelRASL_Function_4" },
    { refalrts::create_closure, "refalrts::create_closure" },
    { lambda_HightLevelRASL_Function_2, "lambda_HightLevelRASL_Function_2" },
    { MapReduce, "MapReduce" },
    { lambda_HightLevelRASL_Function_0, "lambda_HightLevelRASL_Function_0" },
    { Map, "Map" },
    { Seq, "Seq" },
    { Fetch, "Fetch" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    // s.ScopeClass#1/2 ( e.Name#1/3 ) e.Sentences#1/0
    {refalrts::icsVarLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 3, 0},
    // closed e.Name#1 as range 3
    // closed e.Sentences#1 as range 0
    //0: e.Sentences#1
    //2: s.ScopeClass#1
    //3: e.Name#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 5},
    {refalrts::icFunc, 0, 7, 6},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 7},
    {refalrts::icFunc, 0, 6, 8},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 9},
    {refalrts::icFunc, 0, 5, 10},
    {refalrts::icFunc, 0, 4, 11},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 12},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 13},
    {refalrts::icFunc, 0, 3, 14},
    {refalrts::icFunc, 0, 2, 15},
    {refalrts::icInt, 0, 0, 16},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 17},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 18},
    {refalrts::icFunc, 0, 1, 19},
    {refalrts::icFunc, 0, 0, 20},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 21},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 22},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 23},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 24},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 25},
    {refalrts::icPushStack, 0, 0, 25},
    {refalrts::icPushStack, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icPushStack, 0, 0, 24},
    {refalrts::icPushStack, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icPushStack, 0, 0, 23},
    {refalrts::icPushStack, 0, 0, 18},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icLinkBrackets, 21, 22, 0},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceEVar, 0, 0, 3},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceSTVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icLinkBrackets, 13, 17, 0},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icLinkBrackets, 9, 12, 0},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceEVar, 0, 0, 0},
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
  // s.ScopeClass#1/2 ( e.Name#1/3 ) e.Sentences#1/0
  if( ! refalrts::svar_left( context[2], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[3] = 0;
  context[4] = 0;
  if( ! refalrts::brackets_left( context[3], context[4], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Name#1 as range 3
  // closed e.Sentences#1 as range 0
  //0: e.Sentences#1
  //2: s.ScopeClass#1
  //3: e.Name#1

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_call( context[5] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[6], Fetch, "Fetch" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[8], Seq, "Seq" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[10], Map, "Map" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[11], lambda_HightLevelRASL_Function_0, "lambda_HightLevelRASL_Function_0" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[14], MapReduce, "MapReduce" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[15], lambda_HightLevelRASL_Function_2, "lambda_HightLevelRASL_Function_2" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_number( context[16], 0UL ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[17] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[18] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[19], refalrts::create_closure, "refalrts::create_closure" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[20], lambda_HightLevelRASL_Function_4, "lambda_HightLevelRASL_Function_4" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[21] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[22] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[23] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[24] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[25] ) )
    return refalrts::cNoMemory;
  refalrts::push_stack( context[25] );
  refalrts::push_stack( context[5] );
  res = refalrts::splice_elem( res, context[25] );
  refalrts::push_stack( context[24] );
  refalrts::push_stack( context[7] );
  res = refalrts::splice_elem( res, context[24] );
  refalrts::push_stack( context[23] );
  refalrts::push_stack( context[18] );
  res = refalrts::splice_elem( res, context[23] );
  refalrts::link_brackets( context[21], context[22] );
  res = refalrts::splice_elem( res, context[22] );
  res = refalrts::splice_evar( res, context[3], context[4] );
  res = refalrts::splice_elem( res, context[21] );
  res = refalrts::splice_stvar( res, context[2] );
  res = refalrts::splice_elem( res, context[20] );
  res = refalrts::splice_elem( res, context[19] );
  res = refalrts::splice_elem( res, context[18] );
  refalrts::link_brackets( context[13], context[17] );
  res = refalrts::splice_elem( res, context[17] );
  res = refalrts::splice_elem( res, context[16] );
  res = refalrts::splice_elem( res, context[15] );
  res = refalrts::splice_elem( res, context[14] );
  res = refalrts::splice_elem( res, context[13] );
  refalrts::link_brackets( context[9], context[12] );
  res = refalrts::splice_elem( res, context[12] );
  res = refalrts::splice_elem( res, context[11] );
  res = refalrts::splice_elem( res, context[10] );
  res = refalrts::splice_elem( res, context[9] );
  res = refalrts::splice_elem( res, context[8] );
  res = refalrts::splice_elem( res, context[7] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_elem( res, context[6] );
  res = refalrts::splice_elem( res, context[5] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult lambda_HightLevelRASL_Sentence_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { FoldOpenELoops, "FoldOpenELoops" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_CmdInitB0<int>::name,
    & ident_CmdIssueMem<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.PatternCommands#2/2 ) s.ContextCount#3/4 e.ResultCommands#3/0
    {refalrts::icBracketLeft, 0, 2, 0},
    // closed e.PatternCommands#2 as range 2
    {refalrts::icsVarLeft, 0, 4, 0},
    // closed e.ResultCommands#3 as range 0
    //0: e.ResultCommands#3
    //2: e.PatternCommands#2
    //4: s.ContextCount#3
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 5},
    {refalrts::icFunc, 0, 0, 6},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 7},
    {refalrts::icIdent, 0, 1, 8},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 9},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 10},
    {refalrts::icIdent, 0, 0, 11},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 12},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 13},
    {refalrts::icPushStack, 0, 0, 13},
    {refalrts::icPushStack, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icLinkBrackets, 10, 12, 0},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icLinkBrackets, 7, 9, 0},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceSTVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 7},
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
  // ( e.PatternCommands#2/2 ) s.ContextCount#3/4 e.ResultCommands#3/0
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.PatternCommands#2 as range 2
  if( ! refalrts::svar_left( context[4], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.ResultCommands#3 as range 0
  //0: e.ResultCommands#3
  //2: e.PatternCommands#2
  //4: s.ContextCount#3

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_call( context[5] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[6], FoldOpenELoops, "FoldOpenELoops" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[8], & ident_CmdIssueMem<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[11], & ident_CmdInitB0<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[13] ) )
    return refalrts::cNoMemory;
  refalrts::push_stack( context[13] );
  refalrts::push_stack( context[5] );
  res = refalrts::splice_elem( res, context[13] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::link_brackets( context[10], context[12] );
  res = refalrts::splice_elem( res, context[12] );
  res = refalrts::splice_elem( res, context[11] );
  res = refalrts::splice_elem( res, context[10] );
  refalrts::link_brackets( context[7], context[9] );
  res = refalrts::splice_elem( res, context[9] );
  res = refalrts::splice_stvar( res, context[4] );
  res = refalrts::splice_elem( res, context[8] );
  res = refalrts::splice_elem( res, context[7] );
  res = refalrts::splice_elem( res, context[6] );
  res = refalrts::splice_elem( res, context[5] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult lambda_HightLevelRASL_Sentence_1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 23 elems
  refalrts::Iter context[23];
  refalrts::zeros( context, 23 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { lambda_HightLevelRASL_Sentence_0, "lambda_HightLevelRASL_Sentence_0" },
    { refalrts::create_closure, "refalrts::create_closure" },
    { GenResult, "GenResult" },
    { Fetch, "Fetch" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Result#1/2 ) ( e.PatternVars#2/4 ) s.ContextOffset#2/8 ( e.PatternCommands#2/6 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icBracketRight, 0, 6, 0},
    // closed e.Result#1 as range 2
    // closed e.PatternVars#2 as range 4
    // closed e.PatternCommands#2 as range 6
    {refalrts::icsVarLeft, 0, 8, 0},
    {refalrts::icEmpty, 0, 0, 0},
    //2: e.Result#1
    //4: e.PatternVars#2
    //6: e.PatternCommands#2
    //8: s.ContextOffset#2
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 9},
    {refalrts::icFunc, 0, 3, 10},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 11},
    {refalrts::icFunc, 0, 2, 12},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 13},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 14},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 15},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 16},
    {refalrts::icFunc, 0, 1, 17},
    {refalrts::icFunc, 0, 0, 18},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 19},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 20},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 21},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 22},
    {refalrts::icPushStack, 0, 0, 22},
    {refalrts::icPushStack, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icPushStack, 0, 0, 21},
    {refalrts::icPushStack, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icLinkBrackets, 19, 20, 0},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceEVar, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icPushStack, 0, 0, 15},
    {refalrts::icPushStack, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icLinkBrackets, 13, 14, 0},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceEVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceSTVar, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 12},
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
  context[0] = arg_begin;
  context[1] = arg_end;
  refalrts::move_left( context[0], context[1] );
  refalrts::move_left( context[0], context[1] );
  refalrts::move_right( context[0], context[1] );
  // ( e.Result#1/2 ) ( e.PatternVars#2/4 ) s.ContextOffset#2/8 ( e.PatternCommands#2/6 )
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
  if( ! refalrts::brackets_right( context[6], context[7], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Result#1 as range 2
  // closed e.PatternVars#2 as range 4
  // closed e.PatternCommands#2 as range 6
  if( ! refalrts::svar_left( context[8], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  //2: e.Result#1
  //4: e.PatternVars#2
  //6: e.PatternCommands#2
  //8: s.ContextOffset#2

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_call( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[10], Fetch, "Fetch" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[12], GenResult, "GenResult" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[16] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[17], refalrts::create_closure, "refalrts::create_closure" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[18], lambda_HightLevelRASL_Sentence_0, "lambda_HightLevelRASL_Sentence_0" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[19] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[20] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[21] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[22] ) )
    return refalrts::cNoMemory;
  refalrts::push_stack( context[22] );
  refalrts::push_stack( context[9] );
  res = refalrts::splice_elem( res, context[22] );
  refalrts::push_stack( context[21] );
  refalrts::push_stack( context[16] );
  res = refalrts::splice_elem( res, context[21] );
  refalrts::link_brackets( context[19], context[20] );
  res = refalrts::splice_elem( res, context[20] );
  res = refalrts::splice_evar( res, context[6], context[7] );
  res = refalrts::splice_elem( res, context[19] );
  res = refalrts::splice_elem( res, context[18] );
  res = refalrts::splice_elem( res, context[17] );
  res = refalrts::splice_elem( res, context[16] );
  refalrts::push_stack( context[15] );
  refalrts::push_stack( context[11] );
  res = refalrts::splice_elem( res, context[15] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::link_brackets( context[13], context[14] );
  res = refalrts::splice_elem( res, context[14] );
  res = refalrts::splice_evar( res, context[4], context[5] );
  res = refalrts::splice_elem( res, context[13] );
  res = refalrts::splice_stvar( res, context[8] );
  res = refalrts::splice_elem( res, context[12] );
  res = refalrts::splice_elem( res, context[11] );
  res = refalrts::splice_elem( res, context[10] );
  res = refalrts::splice_elem( res, context[9] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult HightLevelRASL_Sentence(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { lambda_HightLevelRASL_Sentence_1, "lambda_HightLevelRASL_Sentence_1" },
    { refalrts::create_closure, "refalrts::create_closure" },
    { GenPattern, "GenPattern" },
    { Fetch, "Fetch" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Pattern#1/2 ) ( e.Result#1/4 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icEmpty, 0, 0, 0},
    // closed e.Pattern#1 as range 2
    // closed e.Result#1 as range 4
    //2: e.Pattern#1
    //4: e.Result#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 6},
    {refalrts::icFunc, 0, 3, 7},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 8},
    {refalrts::icFunc, 0, 2, 9},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 10},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 11},
    {refalrts::icFunc, 0, 1, 12},
    {refalrts::icFunc, 0, 0, 13},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 14},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 15},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 16},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 17},
    {refalrts::icPushStack, 0, 0, 17},
    {refalrts::icPushStack, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icPushStack, 0, 0, 16},
    {refalrts::icPushStack, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icLinkBrackets, 14, 15, 0},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceEVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icPushStack, 0, 0, 10},
    {refalrts::icPushStack, 0, 0, 8},
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
  context[0] = arg_begin;
  context[1] = arg_end;
  refalrts::move_left( context[0], context[1] );
  refalrts::move_left( context[0], context[1] );
  refalrts::move_right( context[0], context[1] );
  // ( e.Pattern#1/2 ) ( e.Result#1/4 )
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
  // closed e.Pattern#1 as range 2
  // closed e.Result#1 as range 4
  //2: e.Pattern#1
  //4: e.Result#1

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_call( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[7], Fetch, "Fetch" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[9], GenPattern, "GenPattern" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[12], refalrts::create_closure, "refalrts::create_closure" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[13], lambda_HightLevelRASL_Sentence_1, "lambda_HightLevelRASL_Sentence_1" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[16] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[17] ) )
    return refalrts::cNoMemory;
  refalrts::push_stack( context[17] );
  refalrts::push_stack( context[6] );
  res = refalrts::splice_elem( res, context[17] );
  refalrts::push_stack( context[16] );
  refalrts::push_stack( context[11] );
  res = refalrts::splice_elem( res, context[16] );
  refalrts::link_brackets( context[14], context[15] );
  res = refalrts::splice_elem( res, context[15] );
  res = refalrts::splice_evar( res, context[4], context[5] );
  res = refalrts::splice_elem( res, context[14] );
  res = refalrts::splice_elem( res, context[13] );
  res = refalrts::splice_elem( res, context[12] );
  res = refalrts::splice_elem( res, context[11] );
  refalrts::push_stack( context[10] );
  refalrts::push_stack( context[8] );
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

static refalrts::FnResult FoldOpenELoops(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { FoldOpenELoops, "FoldOpenELoops" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_AlgLeft<int>::name,
    & ident_CmdOpenELoop<int>::name,
    & ident_CmdOpenedE<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +33, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // e.Commands_B#1/2 ( # CmdOpenedE # AlgLeft s.BracketNum#1/6 s.VarNumber#1/7 ) e.Commands_E#1/8
    {refalrts::icEPrepare, 0, 2, 0},
    {refalrts::icEStart, 0, 2, 0},
    {refalrts::icSave, 0, 8, 0},
    {refalrts::icBracketLeft, 0, 4, 8},
    {refalrts::icIdentLeft, 0, 2, 4},
    {refalrts::icIdentLeft, 0, 0, 4},
    // closed e.Commands_E#1 as range 0
    {refalrts::icsVarLeft, 0, 6, 4},
    {refalrts::icsVarLeft, 0, 7, 4},
    {refalrts::icEmpty, 0, 0, 4},
    //2: e.Commands_B#1
    //6: s.BracketNum#1
    //7: s.VarNumber#1
    //8: e.Commands_E#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 10},
    {refalrts::icIdent, 0, 1, 11},
    {refalrts::icIdent, 0, 0, 12},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 13},
    {refalrts::icFunc, 0, 0, 14},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 15},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 16},
    {refalrts::icLinkBrackets, 10, 16, 0},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icPushStack, 0, 0, 15},
    {refalrts::icPushStack, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceEVar, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceSTVar, 0, 0, 7},
    {refalrts::icSpliceSTVar, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // e.Commands#1/0
    // closed e.Commands#1 as range 0
    //0: e.Commands#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icSpliceEVar, 0, 0, 0},
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
    // e.Commands_B#1/2 ( # CmdOpenedE # AlgLeft s.BracketNum#1/6 s.VarNumber#1/7 ) e.Commands_E#1/8
    context[2] = 0;
    context[3] = 0;
    refalrts::start_e_loop();
    do {
      context[8] = context[0];
      context[9] = context[1];
      context[4] = 0;
      context[5] = 0;
      if( ! refalrts::brackets_left( context[4], context[5], context[8], context[9] ) )
        continue;
      if( ! refalrts::ident_left(  & ident_CmdOpenedE<int>::name, context[4], context[5] ) )
        continue;
      if( ! refalrts::ident_left(  & ident_AlgLeft<int>::name, context[4], context[5] ) )
        continue;
      // closed e.Commands_E#1 as range 0
      if( ! refalrts::svar_left( context[6], context[4], context[5] ) )
        continue;
      if( ! refalrts::svar_left( context[7], context[4], context[5] ) )
        continue;
      if( ! refalrts::empty_seq( context[4], context[5] ) )
        continue;
      //2: e.Commands_B#1
      //6: s.BracketNum#1
      //7: s.VarNumber#1
      //8: e.Commands_E#1

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::alloc_open_bracket( context[10] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[11], & ident_CmdOpenELoop<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[12], & ident_AlgLeft<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_call( context[13] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[14], FoldOpenELoops, "FoldOpenELoops" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[15] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[16] ) )
        return refalrts::cNoMemory;
      refalrts::link_brackets( context[10], context[16] );
      res = refalrts::splice_elem( res, context[16] );
      refalrts::push_stack( context[15] );
      refalrts::push_stack( context[13] );
      res = refalrts::splice_elem( res, context[15] );
      res = refalrts::splice_evar( res, context[8], context[9] );
      res = refalrts::splice_elem( res, context[14] );
      res = refalrts::splice_elem( res, context[13] );
      res = refalrts::splice_stvar( res, context[7] );
      res = refalrts::splice_stvar( res, context[6] );
      res = refalrts::splice_elem( res, context[12] );
      res = refalrts::splice_elem( res, context[11] );
      res = refalrts::splice_elem( res, context[10] );
      res = refalrts::splice_evar( res, context[2], context[3] );
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
  // e.Commands#1/0
  // closed e.Commands#1 as range 0
  //0: e.Commands#1

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  res = refalrts::splice_evar( res, context[0], context[1] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult lambda_GenPattern_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { FreezeRanges, "FreezeRanges" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    // s.ContextOffset#2/2 ( e.Vars#2/3 ) ( e.MarkedPattern#2/5 ) e.Commands#2/0
    {refalrts::icsVarLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 3, 0},
    {refalrts::icBracketLeft, 0, 5, 0},
    // closed e.Vars#2 as range 3
    // closed e.MarkedPattern#2 as range 5
    // closed e.Commands#2 as range 0
    //0: e.Commands#2
    //2: s.ContextOffset#2
    //3: e.Vars#2
    //5: e.MarkedPattern#2
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 7},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 8},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 9},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 10},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 11},
    {refalrts::icFunc, 0, 0, 12},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 13},
    {refalrts::icPushStack, 0, 0, 13},
    {refalrts::icPushStack, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icSpliceSTVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icLinkBrackets, 9, 10, 0},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceEVar, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceEVar, 0, 0, 3},
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
  // s.ContextOffset#2/2 ( e.Vars#2/3 ) ( e.MarkedPattern#2/5 ) e.Commands#2/0
  if( ! refalrts::svar_left( context[2], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[3] = 0;
  context[4] = 0;
  if( ! refalrts::brackets_left( context[3], context[4], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[5] = 0;
  context[6] = 0;
  if( ! refalrts::brackets_left( context[5], context[6], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Vars#2 as range 3
  // closed e.MarkedPattern#2 as range 5
  // closed e.Commands#2 as range 0
  //0: e.Commands#2
  //2: s.ContextOffset#2
  //3: e.Vars#2
  //5: e.MarkedPattern#2

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
  if( ! refalrts::alloc_open_call( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[12], FreezeRanges, "FreezeRanges" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[13] ) )
    return refalrts::cNoMemory;
  refalrts::push_stack( context[13] );
  refalrts::push_stack( context[11] );
  res = refalrts::splice_elem( res, context[13] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_stvar( res, context[2] );
  res = refalrts::splice_elem( res, context[12] );
  res = refalrts::splice_elem( res, context[11] );
  refalrts::link_brackets( context[9], context[10] );
  res = refalrts::splice_elem( res, context[10] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_elem( res, context[9] );
  refalrts::link_brackets( context[7], context[8] );
  res = refalrts::splice_elem( res, context[8] );
  res = refalrts::splice_evar( res, context[3], context[4] );
  res = refalrts::splice_elem( res, context[7] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult lambda_GenPattern_1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { GetRangeReassigns, "GetRangeReassigns" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Vars#2/2 ) ( e.MarkedPattern#2/4 ) s.ContextOffset#2/6 e.Commands#2/0
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    // closed e.Vars#2 as range 2
    // closed e.MarkedPattern#2 as range 4
    {refalrts::icsVarLeft, 0, 6, 0},
    // closed e.Commands#2 as range 0
    //0: e.Commands#2
    //2: e.Vars#2
    //4: e.MarkedPattern#2
    //6: s.ContextOffset#2
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 7},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 8},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 9},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 10},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 11},
    {refalrts::icFunc, 0, 0, 12},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 13},
    {refalrts::icPushStack, 0, 0, 13},
    {refalrts::icPushStack, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceSTVar, 0, 0, 6},
    {refalrts::icLinkBrackets, 9, 10, 0},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceEVar, 0, 0, 4},
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
  context[0] = arg_begin;
  context[1] = arg_end;
  refalrts::move_left( context[0], context[1] );
  refalrts::move_left( context[0], context[1] );
  refalrts::move_right( context[0], context[1] );
  // ( e.Vars#2/2 ) ( e.MarkedPattern#2/4 ) s.ContextOffset#2/6 e.Commands#2/0
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[4] = 0;
  context[5] = 0;
  if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Vars#2 as range 2
  // closed e.MarkedPattern#2 as range 4
  if( ! refalrts::svar_left( context[6], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Commands#2 as range 0
  //0: e.Commands#2
  //2: e.Vars#2
  //4: e.MarkedPattern#2
  //6: s.ContextOffset#2

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
  if( ! refalrts::alloc_open_call( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[12], GetRangeReassigns, "GetRangeReassigns" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[13] ) )
    return refalrts::cNoMemory;
  refalrts::push_stack( context[13] );
  refalrts::push_stack( context[11] );
  res = refalrts::splice_elem( res, context[13] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_elem( res, context[12] );
  res = refalrts::splice_elem( res, context[11] );
  res = refalrts::splice_stvar( res, context[6] );
  refalrts::link_brackets( context[9], context[10] );
  res = refalrts::splice_elem( res, context[10] );
  res = refalrts::splice_evar( res, context[4], context[5] );
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

static refalrts::FnResult lambda_GenPattern_2(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 25 elems
  refalrts::Iter context[25];
  refalrts::zeros( context, 25 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { FixupMarkedPatternIndexes, "FixupMarkedPatternIndexes" },
    { FixupEVarIndexes, "FixupEVarIndexes" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Vars#2/2 ) ( e.MarkedPattern#2/4 ) s.ContextOffset#2/6 ( e.Reassigns#2/7 ) e.Commands#2/0
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    // closed e.Vars#2 as range 2
    // closed e.MarkedPattern#2 as range 4
    {refalrts::icsVarLeft, 0, 6, 0},
    {refalrts::icBracketLeft, 0, 7, 0},
    // closed e.Reassigns#2 as range 7
    // closed e.Commands#2 as range 0
    //0: e.Commands#2
    //2: e.Vars#2
    //4: e.MarkedPattern#2
    //6: s.ContextOffset#2
    //7: e.Reassigns#2
    //20: e.Reassigns#2
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 9},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 10},
    {refalrts::icFunc, 0, 1, 11},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 12},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 13},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 14},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 15},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 16},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 17},
    {refalrts::icFunc, 0, 0, 18},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 19},
    {refalrts::icCopyEVar, 20, 7, 0},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 22},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 23},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 24},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icSpliceSTVar, 0, 0, 6},
    {refalrts::icLinkBrackets, 16, 24, 0},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icPushStack, 0, 0, 23},
    {refalrts::icPushStack, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icSpliceEVar, 0, 0, 4},
    {refalrts::icLinkBrackets, 19, 22, 0},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceEVar, 0, 0, 20},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icLinkBrackets, 9, 15, 0},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icPushStack, 0, 0, 14},
    {refalrts::icPushStack, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icLinkBrackets, 12, 13, 0},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceEVar, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 12},
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
  context[0] = arg_begin;
  context[1] = arg_end;
  refalrts::move_left( context[0], context[1] );
  refalrts::move_left( context[0], context[1] );
  refalrts::move_right( context[0], context[1] );
  // ( e.Vars#2/2 ) ( e.MarkedPattern#2/4 ) s.ContextOffset#2/6 ( e.Reassigns#2/7 ) e.Commands#2/0
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[4] = 0;
  context[5] = 0;
  if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Vars#2 as range 2
  // closed e.MarkedPattern#2 as range 4
  if( ! refalrts::svar_left( context[6], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[7] = 0;
  context[8] = 0;
  if( ! refalrts::brackets_left( context[7], context[8], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Reassigns#2 as range 7
  // closed e.Commands#2 as range 0
  //0: e.Commands#2
  //2: e.Vars#2
  //4: e.MarkedPattern#2
  //6: s.ContextOffset#2
  //7: e.Reassigns#2
  //20: e.Reassigns#2

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_bracket( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[11], FixupEVarIndexes, "FixupEVarIndexes" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[16] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[17] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[18], FixupMarkedPatternIndexes, "FixupMarkedPatternIndexes" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[19] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[20], context[21], context[7], context[8]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[22] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[23] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[24] ) )
    return refalrts::cNoMemory;
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_stvar( res, context[6] );
  refalrts::link_brackets( context[16], context[24] );
  res = refalrts::splice_elem( res, context[24] );
  refalrts::push_stack( context[23] );
  refalrts::push_stack( context[17] );
  res = refalrts::splice_elem( res, context[23] );
  res = refalrts::splice_evar( res, context[4], context[5] );
  refalrts::link_brackets( context[19], context[22] );
  res = refalrts::splice_elem( res, context[22] );
  res = refalrts::splice_evar( res, context[20], context[21] );
  res = refalrts::splice_elem( res, context[19] );
  res = refalrts::splice_elem( res, context[18] );
  res = refalrts::splice_elem( res, context[17] );
  res = refalrts::splice_elem( res, context[16] );
  refalrts::link_brackets( context[9], context[15] );
  res = refalrts::splice_elem( res, context[15] );
  refalrts::push_stack( context[14] );
  refalrts::push_stack( context[10] );
  res = refalrts::splice_elem( res, context[14] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::link_brackets( context[12], context[13] );
  res = refalrts::splice_elem( res, context[13] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_elem( res, context[12] );
  res = refalrts::splice_elem( res, context[11] );
  res = refalrts::splice_elem( res, context[10] );
  res = refalrts::splice_elem( res, context[9] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult lambda_GenPattern_3(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { TextFromPattern, "TextFromPattern" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_CmdComment<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Vars#2/2 ) ( e.MarkedPattern#2/4 ) s.ContextOffset#2/6 e.Commands#2/0
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    // closed e.Vars#2 as range 2
    // closed e.MarkedPattern#2 as range 4
    {refalrts::icsVarLeft, 0, 6, 0},
    // closed e.Commands#2 as range 0
    //0: e.Commands#2
    //2: e.Vars#2
    //4: e.MarkedPattern#2
    //6: s.ContextOffset#2
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 7},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 8},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 9},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 10},
    {refalrts::icIdent, 0, 0, 11},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 12},
    {refalrts::icFunc, 0, 0, 13},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 14},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 15},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 16},
    {refalrts::icLinkBrackets, 9, 16, 0},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icLinkBrackets, 10, 15, 0},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icPushStack, 0, 0, 14},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceEVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceSTVar, 0, 0, 6},
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
  context[0] = arg_begin;
  context[1] = arg_end;
  refalrts::move_left( context[0], context[1] );
  refalrts::move_left( context[0], context[1] );
  refalrts::move_right( context[0], context[1] );
  // ( e.Vars#2/2 ) ( e.MarkedPattern#2/4 ) s.ContextOffset#2/6 e.Commands#2/0
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[4] = 0;
  context[5] = 0;
  if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Vars#2 as range 2
  // closed e.MarkedPattern#2 as range 4
  if( ! refalrts::svar_left( context[6], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Commands#2 as range 0
  //0: e.Commands#2
  //2: e.Vars#2
  //4: e.MarkedPattern#2
  //6: s.ContextOffset#2

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_bracket( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[11], & ident_CmdComment<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[13], TextFromPattern, "TextFromPattern" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[16] ) )
    return refalrts::cNoMemory;
  refalrts::link_brackets( context[9], context[16] );
  res = refalrts::splice_elem( res, context[16] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  refalrts::link_brackets( context[10], context[15] );
  res = refalrts::splice_elem( res, context[15] );
  refalrts::push_stack( context[14] );
  refalrts::push_stack( context[12] );
  res = refalrts::splice_elem( res, context[14] );
  res = refalrts::splice_evar( res, context[4], context[5] );
  res = refalrts::splice_elem( res, context[13] );
  res = refalrts::splice_elem( res, context[12] );
  res = refalrts::splice_elem( res, context[11] );
  res = refalrts::splice_elem( res, context[10] );
  res = refalrts::splice_elem( res, context[9] );
  res = refalrts::splice_stvar( res, context[6] );
  refalrts::link_brackets( context[7], context[8] );
  res = refalrts::splice_elem( res, context[8] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_elem( res, context[7] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult GenPattern(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 30 elems
  refalrts::Iter context[30];
  refalrts::zeros( context, 30 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { lambda_GenPattern_3, "lambda_GenPattern_3" },
    { lambda_GenPattern_2, "lambda_GenPattern_2" },
    { lambda_GenPattern_1, "lambda_GenPattern_1" },
    { lambda_GenPattern_0, "lambda_GenPattern_0" },
    { Seq, "Seq" },
    { DoGenPattern, "DoGenPattern" },
    { Fetch, "Fetch" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_Junk<int>::name,
    & ident_Range<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    // e.Pattern#1/0
    // closed e.Pattern#1 as range 0
    //0: e.Pattern#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 2},
    {refalrts::icFunc, 0, 6, 3},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 4},
    {refalrts::icFunc, 0, 5, 5},
    {refalrts::icInt, 0, 2, 6},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 7},
    {refalrts::icIdent, 0, 0, 8},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 9},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 10},
    {refalrts::icIdent, 0, 1, 11},
    {refalrts::icInt, 0, 0, 12},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 13},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 14},
    {refalrts::icIdent, 0, 0, 15},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 16},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 17},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 18},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 19},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 20},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 21},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 22},
    {refalrts::icFunc, 0, 4, 23},
    {refalrts::icFunc, 0, 3, 24},
    {refalrts::icFunc, 0, 2, 25},
    {refalrts::icFunc, 0, 1, 26},
    {refalrts::icFunc, 0, 0, 27},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 28},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 29},
    {refalrts::icPushStack, 0, 0, 29},
    {refalrts::icPushStack, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 29},
    {refalrts::icPushStack, 0, 0, 28},
    {refalrts::icPushStack, 0, 0, 22},
    {refalrts::icSpliceElem, 0, 0, 28},
    {refalrts::icSpliceElem, 0, 0, 27},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icPushStack, 0, 0, 21},
    {refalrts::icPushStack, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icLinkBrackets, 19, 20, 0},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icLinkBrackets, 17, 18, 0},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icLinkBrackets, 14, 16, 0},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icLinkBrackets, 10, 13, 0},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icLinkBrackets, 7, 9, 0},
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
  // e.Pattern#1/0
  // closed e.Pattern#1 as range 0
  //0: e.Pattern#1

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_call( context[2] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[3], Fetch, "Fetch" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[4] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[5], DoGenPattern, "DoGenPattern" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_number( context[6], 2UL ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[8], & ident_Junk<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[11], & ident_Range<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_number( context[12], 0UL ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[15], & ident_Junk<int>::name ) )
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
  if( ! refalrts::alloc_close_call( context[21] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[22] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[23], Seq, "Seq" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[24], lambda_GenPattern_0, "lambda_GenPattern_0" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[25], lambda_GenPattern_1, "lambda_GenPattern_1" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[26], lambda_GenPattern_2, "lambda_GenPattern_2" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[27], lambda_GenPattern_3, "lambda_GenPattern_3" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[28] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[29] ) )
    return refalrts::cNoMemory;
  refalrts::push_stack( context[29] );
  refalrts::push_stack( context[2] );
  res = refalrts::splice_elem( res, context[29] );
  refalrts::push_stack( context[28] );
  refalrts::push_stack( context[22] );
  res = refalrts::splice_elem( res, context[28] );
  res = refalrts::splice_elem( res, context[27] );
  res = refalrts::splice_elem( res, context[26] );
  res = refalrts::splice_elem( res, context[25] );
  res = refalrts::splice_elem( res, context[24] );
  res = refalrts::splice_elem( res, context[23] );
  res = refalrts::splice_elem( res, context[22] );
  refalrts::push_stack( context[21] );
  refalrts::push_stack( context[4] );
  res = refalrts::splice_elem( res, context[21] );
  refalrts::link_brackets( context[19], context[20] );
  res = refalrts::splice_elem( res, context[20] );
  res = refalrts::splice_elem( res, context[19] );
  refalrts::link_brackets( context[17], context[18] );
  res = refalrts::splice_elem( res, context[18] );
  res = refalrts::splice_elem( res, context[17] );
  refalrts::link_brackets( context[14], context[16] );
  res = refalrts::splice_elem( res, context[16] );
  res = refalrts::splice_elem( res, context[15] );
  res = refalrts::splice_elem( res, context[14] );
  refalrts::link_brackets( context[10], context[13] );
  res = refalrts::splice_elem( res, context[13] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_elem( res, context[12] );
  res = refalrts::splice_elem( res, context[11] );
  res = refalrts::splice_elem( res, context[10] );
  refalrts::link_brackets( context[7], context[9] );
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

static refalrts::FnResult lambda_GetRangeReassigns_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 27 elems
  refalrts::Iter context[27];
  refalrts::zeros( context, 27 );
#ifdef INTERPRET
  using refalrts::functions;
  static const refalrts::RefalIdentifier idents[] = {
    & ident_CmdSave<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +49, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Reassigns_B#2/8 ( s.First#2/13 s.Old#2/12 ) e.Reassigns_E#2/14 ) ( # CmdSave s.Old#2/6 s.New#2/7 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icIdentLeft, 0, 0, 4},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icsVarLeft, 0, 6, 4},
    {refalrts::icsVarLeft, 0, 7, 4},
    {refalrts::icEmpty, 0, 0, 4},
    {refalrts::icEPrepare, 0, 8, 2},
    {refalrts::icEStart, 0, 8, 2},
    {refalrts::icSave, 0, 14, 2},
    {refalrts::icBracketLeft, 0, 10, 14},
    {refalrts::icsRepeatRight, 12, 6, 10},
    // closed e.Reassigns_E#2 as range 2
    {refalrts::icsVarLeft, 0, 13, 10},
    {refalrts::icEmpty, 0, 0, 10},
    //6: s.Old#2
    //7: s.New#2
    //8: e.Reassigns_B#2
    //12: s.Old#2
    //13: s.First#2
    //14: e.Reassigns_E#2
    //20: s.New#2
    //25: s.New#2
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 16},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 17},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 18},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 19},
    {refalrts::icCopySTVar, 20, 7, 0},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 21},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 22},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 23},
    {refalrts::icIdent, 0, 0, 24},
    {refalrts::icCopySTVar, 25, 20, 0},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 26},
    {refalrts::icLinkBrackets, 23, 26, 0},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icSpliceSTVar, 0, 0, 25},
    {refalrts::icSpliceSTVar, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icLinkBrackets, 16, 22, 0},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icLinkBrackets, 19, 21, 0},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceSTVar, 0, 0, 20},
    {refalrts::icSpliceSTVar, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceEVar, 0, 0, 14},
    {refalrts::icLinkBrackets, 17, 18, 0},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceSTVar, 0, 0, 7},
    {refalrts::icSpliceSTVar, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceEVar, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +34, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Reassigns#2/2 ) ( # CmdSave s.Old#2/6 s.New#2/7 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icIdentLeft, 0, 0, 4},
    {refalrts::icEmpty, 0, 0, 0},
    // closed e.Reassigns#2 as range 2
    {refalrts::icsVarLeft, 0, 6, 4},
    {refalrts::icsVarLeft, 0, 7, 4},
    {refalrts::icEmpty, 0, 0, 4},
    //2: e.Reassigns#2
    //6: s.Old#2
    //7: s.New#2
    //14: s.Old#2
    //15: s.New#2
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 9},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 10},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 11},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 12},
    {refalrts::icIdent, 0, 0, 13},
    {refalrts::icCopySTVar, 14, 6, 0},
    {refalrts::icCopySTVar, 15, 7, 0},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 16},
    {refalrts::icLinkBrackets, 12, 16, 0},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceSTVar, 0, 0, 15},
    {refalrts::icSpliceSTVar, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icLinkBrackets, 8, 11, 0},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icLinkBrackets, 9, 10, 0},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceSTVar, 0, 0, 7},
    {refalrts::icSpliceSTVar, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Reassigns#2/2 ) t.OtherCommand#2/4
    {refalrts::icBracketLeft, 0, 2, 0},
    // closed e.Reassigns#2 as range 2
    {refalrts::ictVarLeft, 0, 4, 0},
    {refalrts::icEmpty, 0, 0, 0},
    //2: e.Reassigns#2
    //4: t.OtherCommand#2
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 5},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 6},
    {refalrts::icSpliceSTVar, 0, 0, 4},
    {refalrts::icLinkBrackets, 5, 6, 0},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 5},
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
    // ( e.Reassigns_B#2/8 ( s.First#2/13 s.Old#2/12 ) e.Reassigns_E#2/14 ) ( # CmdSave s.Old#2/6 s.New#2/7 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdSave<int>::name, context[4], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[6], context[4], context[5] ) )
      continue;
    if( ! refalrts::svar_left( context[7], context[4], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[4], context[5] ) )
      continue;
    context[8] = 0;
    context[9] = 0;
    refalrts::start_e_loop();
    do {
      context[14] = context[2];
      context[15] = context[3];
      context[10] = 0;
      context[11] = 0;
      if( ! refalrts::brackets_left( context[10], context[11], context[14], context[15] ) )
        continue;
      if( ! refalrts::repeated_stvar_right( context[12], context[6], context[10], context[11] ) )
        continue;
      // closed e.Reassigns_E#2 as range 2
      if( ! refalrts::svar_left( context[13], context[10], context[11] ) )
        continue;
      if( ! refalrts::empty_seq( context[10], context[11] ) )
        continue;
      //6: s.Old#2
      //7: s.New#2
      //8: e.Reassigns_B#2
      //12: s.Old#2
      //13: s.First#2
      //14: e.Reassigns_E#2
      //20: s.New#2
      //25: s.New#2

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::alloc_open_bracket( context[16] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[17] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[18] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[19] ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[20], context[7]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[21] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[22] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[23] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[24], & ident_CmdSave<int>::name ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[25], context[20]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[26] ) )
        return refalrts::cNoMemory;
      refalrts::link_brackets( context[23], context[26] );
      res = refalrts::splice_elem( res, context[26] );
      res = refalrts::splice_stvar( res, context[25] );
      res = refalrts::splice_stvar( res, context[12] );
      res = refalrts::splice_elem( res, context[24] );
      res = refalrts::splice_elem( res, context[23] );
      refalrts::link_brackets( context[16], context[22] );
      res = refalrts::splice_elem( res, context[22] );
      refalrts::link_brackets( context[19], context[21] );
      res = refalrts::splice_elem( res, context[21] );
      res = refalrts::splice_stvar( res, context[20] );
      res = refalrts::splice_stvar( res, context[6] );
      res = refalrts::splice_elem( res, context[19] );
      res = refalrts::splice_evar( res, context[14], context[15] );
      refalrts::link_brackets( context[17], context[18] );
      res = refalrts::splice_elem( res, context[18] );
      res = refalrts::splice_stvar( res, context[7] );
      res = refalrts::splice_stvar( res, context[13] );
      res = refalrts::splice_elem( res, context[17] );
      res = refalrts::splice_evar( res, context[8], context[9] );
      res = refalrts::splice_elem( res, context[16] );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[8], context[9], context[2], context[3] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    // ( e.Reassigns#2/2 ) ( # CmdSave s.Old#2/6 s.New#2/7 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdSave<int>::name, context[4], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    // closed e.Reassigns#2 as range 2
    if( ! refalrts::svar_left( context[6], context[4], context[5] ) )
      continue;
    if( ! refalrts::svar_left( context[7], context[4], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[4], context[5] ) )
      continue;
    //2: e.Reassigns#2
    //6: s.Old#2
    //7: s.New#2
    //14: s.Old#2
    //15: s.New#2

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[9] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[13], & ident_CmdSave<int>::name ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[14], context[6]))
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[15], context[7]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[16] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[12], context[16] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_stvar( res, context[15] );
    res = refalrts::splice_stvar( res, context[14] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_elem( res, context[12] );
    refalrts::link_brackets( context[8], context[11] );
    res = refalrts::splice_elem( res, context[11] );
    refalrts::link_brackets( context[9], context[10] );
    res = refalrts::splice_elem( res, context[10] );
    res = refalrts::splice_stvar( res, context[7] );
    res = refalrts::splice_stvar( res, context[6] );
    res = refalrts::splice_elem( res, context[9] );
    res = refalrts::splice_evar( res, context[2], context[3] );
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
  // ( e.Reassigns#2/2 ) t.OtherCommand#2/4
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Reassigns#2 as range 2
  if( ! refalrts::tvar_left( context[4], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  //2: e.Reassigns#2
  //4: t.OtherCommand#2

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_bracket( context[5] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[6] ) )
    return refalrts::cNoMemory;
  res = refalrts::splice_stvar( res, context[4] );
  refalrts::link_brackets( context[5], context[6] );
  res = refalrts::splice_elem( res, context[6] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_elem( res, context[5] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult GetRangeReassigns(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 8 elems
  refalrts::Iter context[8];
  refalrts::zeros( context, 8 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { lambda_GetRangeReassigns_0, "lambda_GetRangeReassigns_0" },
    { MapReduce, "MapReduce" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    // e.Commands#1/0
    // closed e.Commands#1 as range 0
    //0: e.Commands#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 2},
    {refalrts::icFunc, 0, 1, 3},
    {refalrts::icFunc, 0, 0, 4},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 5},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 6},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 7},
    {refalrts::icPushStack, 0, 0, 7},
    {refalrts::icPushStack, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icLinkBrackets, 5, 6, 0},
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
  // e.Commands#1/0
  // closed e.Commands#1 as range 0
  //0: e.Commands#1

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_call( context[2] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[3], MapReduce, "MapReduce" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[4], lambda_GetRangeReassigns_0, "lambda_GetRangeReassigns_0" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[5] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[7] ) )
    return refalrts::cNoMemory;
  refalrts::push_stack( context[7] );
  refalrts::push_stack( context[2] );
  res = refalrts::splice_elem( res, context[7] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  refalrts::link_brackets( context[5], context[6] );
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

static refalrts::FnResult lambda_FixupEVarIndexes_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { FixupEVarIndexes_PatchNumber, "FixupEVarIndexes_PatchNumber" },
    { Map, "Map" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +38, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Reassigns#1/2 ) ( 'e' ( e.Index#2/6 ) e.Numbers#2/4 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icCharLeft, 0, static_cast<unsigned char>('e'), 4},
    {refalrts::icBracketLeft, 0, 6, 4},
    {refalrts::icEmpty, 0, 0, 0},
    // closed e.Reassigns#1 as range 2
    // closed e.Index#2 as range 6
    // closed e.Numbers#2 as range 4
    //2: e.Reassigns#1
    //4: e.Numbers#2
    //6: e.Index#2
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icChar, 0, 'e', 9},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 10},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 11},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 12},
    {refalrts::icFunc, 0, 1, 13},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 14},
    {refalrts::icFunc, 0, 0, 15},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 16},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 17},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 18},
    {refalrts::icLinkBrackets, 8, 18, 0},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icPushStack, 0, 0, 17},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceEVar, 0, 0, 4},
    {refalrts::icLinkBrackets, 14, 16, 0},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icLinkBrackets, 10, 11, 0},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceEVar, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Reassigns#1/2 ) t.OtherVar#2/4
    {refalrts::icBracketLeft, 0, 2, 0},
    // closed e.Reassigns#1 as range 2
    {refalrts::ictVarLeft, 0, 4, 0},
    {refalrts::icEmpty, 0, 0, 0},
    //2: e.Reassigns#1
    //4: t.OtherVar#2
    {refalrts::icEmptyResult, 0, 0, 0},
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
    // ( e.Reassigns#1/2 ) ( 'e' ( e.Index#2/6 ) e.Numbers#2/4 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      continue;
    if( ! refalrts::char_left( 'e', context[4], context[5] ) )
      continue;
    context[6] = 0;
    context[7] = 0;
    if( ! refalrts::brackets_left( context[6], context[7], context[4], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    // closed e.Reassigns#1 as range 2
    // closed e.Index#2 as range 6
    // closed e.Numbers#2 as range 4
    //2: e.Reassigns#1
    //4: e.Numbers#2
    //6: e.Index#2

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[9], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[13], Map, "Map" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[15], FixupEVarIndexes_PatchNumber, "FixupEVarIndexes_PatchNumber" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[17] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[18] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[8], context[18] );
    res = refalrts::splice_elem( res, context[18] );
    refalrts::push_stack( context[17] );
    refalrts::push_stack( context[12] );
    res = refalrts::splice_elem( res, context[17] );
    res = refalrts::splice_evar( res, context[4], context[5] );
    refalrts::link_brackets( context[14], context[16] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_elem( res, context[15] );
    res = refalrts::splice_elem( res, context[14] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_elem( res, context[12] );
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

  context[0] = arg_begin;
  context[1] = arg_end;
  refalrts::move_left( context[0], context[1] );
  refalrts::move_left( context[0], context[1] );
  refalrts::move_right( context[0], context[1] );
  // ( e.Reassigns#1/2 ) t.OtherVar#2/4
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Reassigns#1 as range 2
  if( ! refalrts::tvar_left( context[4], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  //2: e.Reassigns#1
  //4: t.OtherVar#2

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  res = refalrts::splice_stvar( res, context[4] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult FixupEVarIndexes(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { lambda_FixupEVarIndexes_0, "lambda_FixupEVarIndexes_0" },
    { refalrts::create_closure, "refalrts::create_closure" },
    { Map, "Map" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Reassigns#1/2 ) e.Vars#1/0
    {refalrts::icBracketLeft, 0, 2, 0},
    // closed e.Reassigns#1 as range 2
    // closed e.Vars#1 as range 0
    //0: e.Vars#1
    //2: e.Reassigns#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 4},
    {refalrts::icFunc, 0, 2, 5},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 6},
    {refalrts::icFunc, 0, 1, 7},
    {refalrts::icFunc, 0, 0, 8},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 9},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 10},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 11},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 12},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icPushStack, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icPushStack, 0, 0, 11},
    {refalrts::icPushStack, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icLinkBrackets, 9, 10, 0},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceEVar, 0, 0, 2},
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
  // ( e.Reassigns#1/2 ) e.Vars#1/0
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Reassigns#1 as range 2
  // closed e.Vars#1 as range 0
  //0: e.Vars#1
  //2: e.Reassigns#1

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_call( context[4] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[5], Map, "Map" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[7], refalrts::create_closure, "refalrts::create_closure" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[8], lambda_FixupEVarIndexes_0, "lambda_FixupEVarIndexes_0" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[12] ) )
    return refalrts::cNoMemory;
  refalrts::push_stack( context[12] );
  refalrts::push_stack( context[4] );
  res = refalrts::splice_elem( res, context[12] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  refalrts::push_stack( context[11] );
  refalrts::push_stack( context[6] );
  res = refalrts::splice_elem( res, context[11] );
  refalrts::link_brackets( context[9], context[10] );
  res = refalrts::splice_elem( res, context[10] );
  res = refalrts::splice_evar( res, context[2], context[3] );
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

static refalrts::FnResult FixupEVarIndexes_PatchNumber(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
#ifdef INTERPRET
  using refalrts::functions;
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +12, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // e.Reassigns_B#1/3 ( s.Old#1/7 s.New#1/8 ) e.Reassigns_E#1/9 s.Old#1/2
    {refalrts::icsVarRight, 0, 2, 0},
    {refalrts::icEPrepare, 0, 3, 0},
    {refalrts::icEStart, 0, 3, 0},
    {refalrts::icSave, 0, 9, 0},
    {refalrts::icBracketLeft, 0, 5, 9},
    {refalrts::icsRepeatLeft, 7, 2, 5},
    // closed e.Reassigns_E#1 as range 0
    {refalrts::icsVarLeft, 0, 8, 5},
    {refalrts::icEmpty, 0, 0, 5},
    //2: s.Old#1
    //3: e.Reassigns_B#1
    //7: s.Old#1
    //8: s.New#1
    //9: e.Reassigns_E#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icSpliceSTVar, 0, 0, 8},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // e.Reassigns#1/0 s.Number#1/2
    {refalrts::icsVarRight, 0, 2, 0},
    // closed e.Reassigns#1 as range 0
    //0: e.Reassigns#1
    //2: s.Number#1
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
    // e.Reassigns_B#1/3 ( s.Old#1/7 s.New#1/8 ) e.Reassigns_E#1/9 s.Old#1/2
    if( ! refalrts::svar_right( context[2], context[0], context[1] ) )
      continue;
    context[3] = 0;
    context[4] = 0;
    refalrts::start_e_loop();
    do {
      context[9] = context[0];
      context[10] = context[1];
      context[5] = 0;
      context[6] = 0;
      if( ! refalrts::brackets_left( context[5], context[6], context[9], context[10] ) )
        continue;
      if( ! refalrts::repeated_stvar_left( context[7], context[2], context[5], context[6] ) )
        continue;
      // closed e.Reassigns_E#1 as range 0
      if( ! refalrts::svar_left( context[8], context[5], context[6] ) )
        continue;
      if( ! refalrts::empty_seq( context[5], context[6] ) )
        continue;
      //2: s.Old#1
      //3: e.Reassigns_B#1
      //7: s.Old#1
      //8: s.New#1
      //9: e.Reassigns_E#1

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      res = refalrts::splice_stvar( res, context[8] );
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
  // e.Reassigns#1/0 s.Number#1/2
  if( ! refalrts::svar_right( context[2], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Reassigns#1 as range 0
  //0: e.Reassigns#1
  //2: s.Number#1

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  res = refalrts::splice_stvar( res, context[2] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult FixupMarkedPatternIndexes(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { FixupMarkedPatternTerm, "FixupMarkedPatternTerm" },
    { Map, "Map" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Reassigns#1/2 ) e.MarkedPattern#1/0
    {refalrts::icBracketLeft, 0, 2, 0},
    // closed e.Reassigns#1 as range 2
    // closed e.MarkedPattern#1 as range 0
    //0: e.MarkedPattern#1
    //2: e.Reassigns#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 4},
    {refalrts::icFunc, 0, 1, 5},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icFunc, 0, 0, 7},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 8},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 9},
    {refalrts::icPushStack, 0, 0, 9},
    {refalrts::icPushStack, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icLinkBrackets, 6, 8, 0},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceEVar, 0, 0, 2},
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
  // ( e.Reassigns#1/2 ) e.MarkedPattern#1/0
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Reassigns#1 as range 2
  // closed e.MarkedPattern#1 as range 0
  //0: e.MarkedPattern#1
  //2: e.Reassigns#1

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_call( context[4] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[5], Map, "Map" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[7], FixupMarkedPatternTerm, "FixupMarkedPatternTerm" ) )
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
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_elem( res, context[7] );
  res = refalrts::splice_elem( res, context[6] );
  res = refalrts::splice_elem( res, context[5] );
  res = refalrts::splice_elem( res, context[4] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult FixupMarkedPatternTerm(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
#ifdef INTERPRET
  using refalrts::functions;
  static const refalrts::RefalIdentifier idents[] = {
    & ident_TkVariable<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +27, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // e.Reassigns_B#1/6 ( s.Old#1/10 s.New#1/11 ) e.Reassigns_E#1/12 ( # TkVariable 'e' e.Index#1/2 s.Depth#1/5 s.Old#1/4 )
    {refalrts::icBracketRight, 0, 2, 0},
    {refalrts::icIdentLeft, 0, 0, 2},
    {refalrts::icCharLeft, 0, static_cast<unsigned char>('e'), 2},
    {refalrts::icsVarRight, 0, 4, 2},
    {refalrts::icsVarRight, 0, 5, 2},
    // closed e.Index#1 as range 2
    {refalrts::icEPrepare, 0, 6, 0},
    {refalrts::icEStart, 0, 6, 0},
    {refalrts::icSave, 0, 12, 0},
    {refalrts::icBracketLeft, 0, 8, 12},
    {refalrts::icsRepeatLeft, 10, 4, 8},
    // closed e.Reassigns_E#1 as range 0
    {refalrts::icsVarLeft, 0, 11, 8},
    {refalrts::icEmpty, 0, 0, 8},
    //2: e.Index#1
    //4: s.Old#1
    //5: s.Depth#1
    //6: e.Reassigns_B#1
    //10: s.Old#1
    //11: s.New#1
    //12: e.Reassigns_E#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 14},
    {refalrts::icIdent, 0, 0, 15},
    {refalrts::icChar, 0, 'e', 16},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 17},
    {refalrts::icLinkBrackets, 14, 17, 0},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceSTVar, 0, 0, 11},
    {refalrts::icSpliceSTVar, 0, 0, 5},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // e.Reassigns#1/0 t.OtherTerm#1/2
    {refalrts::ictVarRight, 0, 2, 0},
    // closed e.Reassigns#1 as range 0
    //0: e.Reassigns#1
    //2: t.OtherTerm#1
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
    // e.Reassigns_B#1/6 ( s.Old#1/10 s.New#1/11 ) e.Reassigns_E#1/12 ( # TkVariable 'e' e.Index#1/2 s.Depth#1/5 s.Old#1/4 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_right( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_TkVariable<int>::name, context[2], context[3] ) )
      continue;
    if( ! refalrts::char_left( 'e', context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_right( context[4], context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_right( context[5], context[2], context[3] ) )
      continue;
    // closed e.Index#1 as range 2
    context[6] = 0;
    context[7] = 0;
    refalrts::start_e_loop();
    do {
      context[12] = context[0];
      context[13] = context[1];
      context[8] = 0;
      context[9] = 0;
      if( ! refalrts::brackets_left( context[8], context[9], context[12], context[13] ) )
        continue;
      if( ! refalrts::repeated_stvar_left( context[10], context[4], context[8], context[9] ) )
        continue;
      // closed e.Reassigns_E#1 as range 0
      if( ! refalrts::svar_left( context[11], context[8], context[9] ) )
        continue;
      if( ! refalrts::empty_seq( context[8], context[9] ) )
        continue;
      //2: e.Index#1
      //4: s.Old#1
      //5: s.Depth#1
      //6: e.Reassigns_B#1
      //10: s.Old#1
      //11: s.New#1
      //12: e.Reassigns_E#1

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::alloc_open_bracket( context[14] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[15], & ident_TkVariable<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[16], 'e' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[17] ) )
        return refalrts::cNoMemory;
      refalrts::link_brackets( context[14], context[17] );
      res = refalrts::splice_elem( res, context[17] );
      res = refalrts::splice_stvar( res, context[11] );
      res = refalrts::splice_stvar( res, context[5] );
      res = refalrts::splice_evar( res, context[2], context[3] );
      res = refalrts::splice_elem( res, context[16] );
      res = refalrts::splice_elem( res, context[15] );
      res = refalrts::splice_elem( res, context[14] );
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
  // e.Reassigns#1/0 t.OtherTerm#1/2
  if( ! refalrts::tvar_right( context[2], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Reassigns#1 as range 0
  //0: e.Reassigns#1
  //2: t.OtherTerm#1

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  res = refalrts::splice_stvar( res, context[2] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult Inc2(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
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
    {refalrts::icInt, 0, 2, 5},
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
  if( ! refalrts::alloc_number( context[5], 2UL ) )
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

static refalrts::FnResult DoGenPattern(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 67 elems
  refalrts::Iter context[67];
  refalrts::zeros( context, 67 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { Inc2, "Inc2" },
    { DoGenPattern, "DoGenPattern" },
    { Inc, "Inc" },
    { StrFromInt, "StrFromInt" },
    { PrintVar, "PrintVar" },
    { IncVarOffset, "IncVarOffset" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_Junk<int>::name,
    & ident_AlgLeft<int>::name,
    & ident_CmdOpenedE<int>::name,
    & ident_Range<int>::name,
    & ident_TkVariable<int>::name,
    & ident_AlgRight<int>::name,
    & ident_CmdVar<int>::name,
    & ident_CmdComment<int>::name,
    & ident_CmdRepeated<int>::name,
    & ident_CmdEmpty<int>::name,
    & ident_CmdADT<int>::name,
    & ident_TkCloseADT<int>::name,
    & ident_TkName<int>::name,
    & ident_TkOpenADT<int>::name,
    & ident_ADT_Brackets<int>::name,
    & ident_CmdBrackets<int>::name,
    & ident_TkCloseBracket<int>::name,
    & ident_TkOpenBracket<int>::name,
    & ident_Brackets<int>::name,
    & ident_CmdIdent<int>::name,
    & ident_TkIdentifier<int>::name,
    & ident_CmdName<int>::name,
    & ident_CmdNumber<int>::name,
    & ident_TkNumber<int>::name,
    & ident_CmdChar<int>::name,
    & ident_TkChar<int>::name
  };
  using refalrts::numbers;
  static const refalrts::StringItem strings[] = {
    {" as range ", 10},
    {" closed ", 8}
  };
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +79, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // s.ContextOffset#1/6 e.Ranges_B#1/7 ( # Junk e.Junk#1/9 ) ( # Range s.Num#1/13 ( # TkChar s.Char#1/16 ) e.Range#1/11 ) e.Ranges_E#1/17 ( e.Vars#1/4 ) ( e.Commands#1/2 )
    {refalrts::icBracketRight, 0, 2, 0},
    {refalrts::icBracketRight, 0, 4, 0},
    // closed e.Vars#1 as range 4
    // closed e.Commands#1 as range 2
    {refalrts::icsVarLeft, 0, 6, 0},
    {refalrts::icEPrepare, 0, 7, 0},
    {refalrts::icEStart, 0, 7, 0},
    {refalrts::icSave, 0, 17, 0},
    {refalrts::icBracketLeft, 0, 9, 17},
    {refalrts::icIdentLeft, 0, 0, 9},
    {refalrts::icBracketLeft, 0, 11, 17},
    {refalrts::icIdentLeft, 0, 3, 11},
    // closed e.Junk#1 as range 9
    // closed e.Ranges_E#1 as range 0
    {refalrts::icsVarLeft, 0, 13, 11},
    {refalrts::icBracketLeft, 0, 14, 11},
    {refalrts::icIdentLeft, 0, 25, 14},
    // closed e.Range#1 as range 11
    {refalrts::icsVarLeft, 0, 16, 14},
    {refalrts::icEmpty, 0, 0, 14},
    //2: e.Commands#1
    //4: e.Vars#1
    //6: s.ContextOffset#1
    //7: e.Ranges_B#1
    //9: e.Junk#1
    //11: e.Range#1
    //13: s.Num#1
    //16: s.Char#1
    //17: e.Ranges_E#1
    //36: s.Num#1
    //37: s.Char#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 19},
    {refalrts::icFunc, 0, 1, 20},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 21},
    {refalrts::icIdent, 0, 0, 22},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 23},
    {refalrts::icIdent, 0, 25, 24},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 25},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 26},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 27},
    {refalrts::icIdent, 0, 3, 28},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 29},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 30},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 31},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 32},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 33},
    {refalrts::icIdent, 0, 24, 34},
    {refalrts::icIdent, 0, 1, 35},
    {refalrts::icCopySTVar, 36, 13, 0},
    {refalrts::icCopySTVar, 37, 16, 0},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 38},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 39},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 40},
    {refalrts::icPushStack, 0, 0, 40},
    {refalrts::icPushStack, 0, 0, 19},
    {refalrts::icSpliceElem, 0, 0, 40},
    {refalrts::icLinkBrackets, 32, 39, 0},
    {refalrts::icSpliceElem, 0, 0, 39},
    {refalrts::icLinkBrackets, 33, 38, 0},
    {refalrts::icSpliceElem, 0, 0, 38},
    {refalrts::icSpliceSTVar, 0, 0, 37},
    {refalrts::icSpliceSTVar, 0, 0, 36},
    {refalrts::icSpliceElem, 0, 0, 35},
    {refalrts::icSpliceElem, 0, 0, 34},
    {refalrts::icSpliceElem, 0, 0, 33},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 32},
    {refalrts::icLinkBrackets, 30, 31, 0},
    {refalrts::icSpliceElem, 0, 0, 31},
    {refalrts::icSpliceEVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 30},
    {refalrts::icSpliceEVar, 0, 0, 17},
    {refalrts::icLinkBrackets, 27, 29, 0},
    {refalrts::icSpliceElem, 0, 0, 29},
    {refalrts::icSpliceEVar, 0, 0, 11},
    {refalrts::icSpliceSTVar, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 28},
    {refalrts::icSpliceElem, 0, 0, 27},
    {refalrts::icLinkBrackets, 21, 26, 0},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icLinkBrackets, 23, 25, 0},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icSpliceSTVar, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icSpliceEVar, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceEVar, 0, 0, 7},
    {refalrts::icSpliceSTVar, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +79, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // s.ContextOffset#1/6 e.Ranges_B#1/7 ( # Junk e.Junk#1/9 ) ( # Range s.Num#1/13 ( # TkNumber s.Number#1/16 ) e.Range#1/11 ) e.Ranges_E#1/17 ( e.Vars#1/4 ) ( e.Commands#1/2 )
    {refalrts::icBracketRight, 0, 2, 0},
    {refalrts::icBracketRight, 0, 4, 0},
    // closed e.Vars#1 as range 4
    // closed e.Commands#1 as range 2
    {refalrts::icsVarLeft, 0, 6, 0},
    {refalrts::icEPrepare, 0, 7, 0},
    {refalrts::icEStart, 0, 7, 0},
    {refalrts::icSave, 0, 17, 0},
    {refalrts::icBracketLeft, 0, 9, 17},
    {refalrts::icIdentLeft, 0, 0, 9},
    {refalrts::icBracketLeft, 0, 11, 17},
    {refalrts::icIdentLeft, 0, 3, 11},
    // closed e.Junk#1 as range 9
    // closed e.Ranges_E#1 as range 0
    {refalrts::icsVarLeft, 0, 13, 11},
    {refalrts::icBracketLeft, 0, 14, 11},
    {refalrts::icIdentLeft, 0, 23, 14},
    // closed e.Range#1 as range 11
    {refalrts::icsVarLeft, 0, 16, 14},
    {refalrts::icEmpty, 0, 0, 14},
    //2: e.Commands#1
    //4: e.Vars#1
    //6: s.ContextOffset#1
    //7: e.Ranges_B#1
    //9: e.Junk#1
    //11: e.Range#1
    //13: s.Num#1
    //16: s.Number#1
    //17: e.Ranges_E#1
    //36: s.Num#1
    //37: s.Number#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 19},
    {refalrts::icFunc, 0, 1, 20},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 21},
    {refalrts::icIdent, 0, 0, 22},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 23},
    {refalrts::icIdent, 0, 23, 24},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 25},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 26},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 27},
    {refalrts::icIdent, 0, 3, 28},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 29},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 30},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 31},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 32},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 33},
    {refalrts::icIdent, 0, 22, 34},
    {refalrts::icIdent, 0, 1, 35},
    {refalrts::icCopySTVar, 36, 13, 0},
    {refalrts::icCopySTVar, 37, 16, 0},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 38},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 39},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 40},
    {refalrts::icPushStack, 0, 0, 40},
    {refalrts::icPushStack, 0, 0, 19},
    {refalrts::icSpliceElem, 0, 0, 40},
    {refalrts::icLinkBrackets, 32, 39, 0},
    {refalrts::icSpliceElem, 0, 0, 39},
    {refalrts::icLinkBrackets, 33, 38, 0},
    {refalrts::icSpliceElem, 0, 0, 38},
    {refalrts::icSpliceSTVar, 0, 0, 37},
    {refalrts::icSpliceSTVar, 0, 0, 36},
    {refalrts::icSpliceElem, 0, 0, 35},
    {refalrts::icSpliceElem, 0, 0, 34},
    {refalrts::icSpliceElem, 0, 0, 33},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 32},
    {refalrts::icLinkBrackets, 30, 31, 0},
    {refalrts::icSpliceElem, 0, 0, 31},
    {refalrts::icSpliceEVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 30},
    {refalrts::icSpliceEVar, 0, 0, 17},
    {refalrts::icLinkBrackets, 27, 29, 0},
    {refalrts::icSpliceElem, 0, 0, 29},
    {refalrts::icSpliceEVar, 0, 0, 11},
    {refalrts::icSpliceSTVar, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 28},
    {refalrts::icSpliceElem, 0, 0, 27},
    {refalrts::icLinkBrackets, 21, 26, 0},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icLinkBrackets, 23, 25, 0},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icSpliceSTVar, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icSpliceEVar, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceEVar, 0, 0, 7},
    {refalrts::icSpliceSTVar, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +76, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // s.ContextOffset#1/6 e.Ranges_B#1/7 ( # Junk e.Junk#1/9 ) ( # Range s.Num#1/13 ( # TkName e.Name#1/14 ) e.Range#1/11 ) e.Ranges_E#1/16 ( e.Vars#1/4 ) ( e.Commands#1/2 )
    {refalrts::icBracketRight, 0, 2, 0},
    {refalrts::icBracketRight, 0, 4, 0},
    // closed e.Vars#1 as range 4
    // closed e.Commands#1 as range 2
    {refalrts::icsVarLeft, 0, 6, 0},
    {refalrts::icEPrepare, 0, 7, 0},
    {refalrts::icEStart, 0, 7, 0},
    {refalrts::icSave, 0, 16, 0},
    {refalrts::icBracketLeft, 0, 9, 16},
    {refalrts::icIdentLeft, 0, 0, 9},
    {refalrts::icBracketLeft, 0, 11, 16},
    {refalrts::icIdentLeft, 0, 3, 11},
    // closed e.Junk#1 as range 9
    // closed e.Ranges_E#1 as range 0
    {refalrts::icsVarLeft, 0, 13, 11},
    {refalrts::icBracketLeft, 0, 14, 11},
    {refalrts::icIdentLeft, 0, 12, 14},
    // closed e.Name#1 as range 14
    // closed e.Range#1 as range 11
    //2: e.Commands#1
    //4: e.Vars#1
    //6: s.ContextOffset#1
    //7: e.Ranges_B#1
    //9: e.Junk#1
    //11: e.Range#1
    //13: s.Num#1
    //14: e.Name#1
    //16: e.Ranges_E#1
    //35: s.Num#1
    //36: e.Name#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 18},
    {refalrts::icFunc, 0, 1, 19},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 20},
    {refalrts::icIdent, 0, 0, 21},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 22},
    {refalrts::icIdent, 0, 12, 23},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 24},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 25},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 26},
    {refalrts::icIdent, 0, 3, 27},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 28},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 29},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 30},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 31},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 32},
    {refalrts::icIdent, 0, 21, 33},
    {refalrts::icIdent, 0, 1, 34},
    {refalrts::icCopySTVar, 35, 13, 0},
    {refalrts::icCopyEVar, 36, 14, 0},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 38},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 39},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 40},
    {refalrts::icPushStack, 0, 0, 40},
    {refalrts::icPushStack, 0, 0, 18},
    {refalrts::icSpliceElem, 0, 0, 40},
    {refalrts::icLinkBrackets, 31, 39, 0},
    {refalrts::icSpliceElem, 0, 0, 39},
    {refalrts::icLinkBrackets, 32, 38, 0},
    {refalrts::icSpliceElem, 0, 0, 38},
    {refalrts::icSpliceEVar, 0, 0, 36},
    {refalrts::icSpliceSTVar, 0, 0, 35},
    {refalrts::icSpliceElem, 0, 0, 34},
    {refalrts::icSpliceElem, 0, 0, 33},
    {refalrts::icSpliceElem, 0, 0, 32},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 31},
    {refalrts::icLinkBrackets, 29, 30, 0},
    {refalrts::icSpliceElem, 0, 0, 30},
    {refalrts::icSpliceEVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 29},
    {refalrts::icSpliceEVar, 0, 0, 16},
    {refalrts::icLinkBrackets, 26, 28, 0},
    {refalrts::icSpliceElem, 0, 0, 28},
    {refalrts::icSpliceEVar, 0, 0, 11},
    {refalrts::icSpliceSTVar, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 27},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icLinkBrackets, 20, 25, 0},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icLinkBrackets, 22, 24, 0},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icSpliceEVar, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceEVar, 0, 0, 7},
    {refalrts::icSpliceSTVar, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +77, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // s.ContextOffset#1/6 e.Ranges_B#1/7 ( # Junk e.Junk#1/9 ) ( # Range s.Num#1/13 ( # TkIdentifier e.Name#1/14 ) e.Range#1/11 ) e.Ranges_E#1/16 ( e.Vars#1/4 ) ( e.Commands#1/2 )
    {refalrts::icBracketRight, 0, 2, 0},
    {refalrts::icBracketRight, 0, 4, 0},
    // closed e.Vars#1 as range 4
    // closed e.Commands#1 as range 2
    {refalrts::icsVarLeft, 0, 6, 0},
    {refalrts::icEPrepare, 0, 7, 0},
    {refalrts::icEStart, 0, 7, 0},
    {refalrts::icSave, 0, 16, 0},
    {refalrts::icBracketLeft, 0, 9, 16},
    {refalrts::icIdentLeft, 0, 0, 9},
    {refalrts::icBracketLeft, 0, 11, 16},
    {refalrts::icIdentLeft, 0, 3, 11},
    // closed e.Junk#1 as range 9
    // closed e.Ranges_E#1 as range 0
    {refalrts::icsVarLeft, 0, 13, 11},
    {refalrts::icBracketLeft, 0, 14, 11},
    {refalrts::icIdentLeft, 0, 20, 14},
    // closed e.Name#1 as range 14
    // closed e.Range#1 as range 11
    //2: e.Commands#1
    //4: e.Vars#1
    //6: s.ContextOffset#1
    //7: e.Ranges_B#1
    //9: e.Junk#1
    //11: e.Range#1
    //13: s.Num#1
    //14: e.Name#1
    //16: e.Ranges_E#1
    //35: s.Num#1
    //36: e.Name#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 18},
    {refalrts::icFunc, 0, 1, 19},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 20},
    {refalrts::icIdent, 0, 0, 21},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 22},
    {refalrts::icIdent, 0, 20, 23},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 24},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 25},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 26},
    {refalrts::icIdent, 0, 3, 27},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 28},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 29},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 30},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 31},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 32},
    {refalrts::icIdent, 0, 19, 33},
    {refalrts::icIdent, 0, 1, 34},
    {refalrts::icCopySTVar, 35, 13, 0},
    {refalrts::icCopyEVar, 36, 14, 0},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 38},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 39},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 40},
    {refalrts::icPushStack, 0, 0, 40},
    {refalrts::icPushStack, 0, 0, 18},
    {refalrts::icSpliceElem, 0, 0, 40},
    {refalrts::icLinkBrackets, 31, 39, 0},
    {refalrts::icSpliceElem, 0, 0, 39},
    {refalrts::icLinkBrackets, 32, 38, 0},
    {refalrts::icSpliceElem, 0, 0, 38},
    {refalrts::icSpliceEVar, 0, 0, 36},
    {refalrts::icSpliceSTVar, 0, 0, 35},
    {refalrts::icSpliceElem, 0, 0, 34},
    {refalrts::icSpliceElem, 0, 0, 33},
    {refalrts::icSpliceElem, 0, 0, 32},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 31},
    {refalrts::icLinkBrackets, 29, 30, 0},
    {refalrts::icSpliceElem, 0, 0, 30},
    {refalrts::icSpliceEVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 29},
    {refalrts::icSpliceEVar, 0, 0, 16},
    {refalrts::icLinkBrackets, 26, 28, 0},
    {refalrts::icSpliceElem, 0, 0, 28},
    {refalrts::icSpliceEVar, 0, 0, 11},
    {refalrts::icSpliceSTVar, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 27},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icLinkBrackets, 20, 25, 0},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icLinkBrackets, 22, 24, 0},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icSpliceEVar, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceEVar, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceEVar, 0, 0, 7},
    {refalrts::icSpliceSTVar, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +79, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // s.ContextOffset#1/6 e.Ranges_B#1/7 ( # Range s.Num#1/15 e.Range#1/9 ( # TkChar s.Char#1/16 ) ) ( # Junk e.Junk#1/11 ) e.Ranges_E#1/17 ( e.Vars#1/4 ) ( e.Commands#1/2 )
    {refalrts::icBracketRight, 0, 2, 0},
    {refalrts::icBracketRight, 0, 4, 0},
    // closed e.Vars#1 as range 4
    // closed e.Commands#1 as range 2
    {refalrts::icsVarLeft, 0, 6, 0},
    {refalrts::icEPrepare, 0, 7, 0},
    {refalrts::icEStart, 0, 7, 0},
    {refalrts::icSave, 0, 17, 0},
    {refalrts::icBracketLeft, 0, 9, 17},
    {refalrts::icIdentLeft, 0, 3, 9},
    {refalrts::icBracketLeft, 0, 11, 17},
    {refalrts::icIdentLeft, 0, 0, 11},
    {refalrts::icBracketRight, 0, 13, 9},
    {refalrts::icIdentLeft, 0, 25, 13},
    // closed e.Junk#1 as range 11
    // closed e.Ranges_E#1 as range 0
    {refalrts::icsVarLeft, 0, 15, 9},
    // closed e.Range#1 as range 9
    {refalrts::icsVarLeft, 0, 16, 13},
    {refalrts::icEmpty, 0, 0, 13},
    //2: e.Commands#1
    //4: e.Vars#1
    //6: s.ContextOffset#1
    //7: e.Ranges_B#1
    //9: e.Range#1
    //11: e.Junk#1
    //15: s.Num#1
    //16: s.Char#1
    //17: e.Ranges_E#1
    //36: s.Num#1
    //37: s.Char#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 19},
    {refalrts::icFunc, 0, 1, 20},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 21},
    {refalrts::icIdent, 0, 3, 22},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 23},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 24},
    {refalrts::icIdent, 0, 0, 25},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 26},
    {refalrts::icIdent, 0, 25, 27},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 28},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 29},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 30},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 31},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 32},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 33},
    {refalrts::icIdent, 0, 24, 34},
    {refalrts::icIdent, 0, 5, 35},
    {refalrts::icCopySTVar, 36, 15, 0},
    {refalrts::icCopySTVar, 37, 16, 0},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 38},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 39},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 40},
    {refalrts::icPushStack, 0, 0, 40},
    {refalrts::icPushStack, 0, 0, 19},
    {refalrts::icSpliceElem, 0, 0, 40},
    {refalrts::icLinkBrackets, 32, 39, 0},
    {refalrts::icSpliceElem, 0, 0, 39},
    {refalrts::icLinkBrackets, 33, 38, 0},
    {refalrts::icSpliceElem, 0, 0, 38},
    {refalrts::icSpliceSTVar, 0, 0, 37},
    {refalrts::icSpliceSTVar, 0, 0, 36},
    {refalrts::icSpliceElem, 0, 0, 35},
    {refalrts::icSpliceElem, 0, 0, 34},
    {refalrts::icSpliceElem, 0, 0, 33},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 32},
    {refalrts::icLinkBrackets, 30, 31, 0},
    {refalrts::icSpliceElem, 0, 0, 31},
    {refalrts::icSpliceEVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 30},
    {refalrts::icSpliceEVar, 0, 0, 17},
    {refalrts::icLinkBrackets, 24, 29, 0},
    {refalrts::icSpliceElem, 0, 0, 29},
    {refalrts::icSpliceEVar, 0, 0, 11},
    {refalrts::icLinkBrackets, 26, 28, 0},
    {refalrts::icSpliceElem, 0, 0, 28},
    {refalrts::icSpliceSTVar, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 27},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icLinkBrackets, 21, 23, 0},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icSpliceEVar, 0, 0, 9},
    {refalrts::icSpliceSTVar, 0, 0, 15},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceEVar, 0, 0, 7},
    {refalrts::icSpliceSTVar, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +79, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // s.ContextOffset#1/6 e.Ranges_B#1/7 ( # Range s.Num#1/15 e.Range#1/9 ( # TkNumber s.Number#1/16 ) ) ( # Junk e.Junk#1/11 ) e.Ranges_E#1/17 ( e.Vars#1/4 ) ( e.Commands#1/2 )
    {refalrts::icBracketRight, 0, 2, 0},
    {refalrts::icBracketRight, 0, 4, 0},
    // closed e.Vars#1 as range 4
    // closed e.Commands#1 as range 2
    {refalrts::icsVarLeft, 0, 6, 0},
    {refalrts::icEPrepare, 0, 7, 0},
    {refalrts::icEStart, 0, 7, 0},
    {refalrts::icSave, 0, 17, 0},
    {refalrts::icBracketLeft, 0, 9, 17},
    {refalrts::icIdentLeft, 0, 3, 9},
    {refalrts::icBracketLeft, 0, 11, 17},
    {refalrts::icIdentLeft, 0, 0, 11},
    {refalrts::icBracketRight, 0, 13, 9},
    {refalrts::icIdentLeft, 0, 23, 13},
    // closed e.Junk#1 as range 11
    // closed e.Ranges_E#1 as range 0
    {refalrts::icsVarLeft, 0, 15, 9},
    // closed e.Range#1 as range 9
    {refalrts::icsVarLeft, 0, 16, 13},
    {refalrts::icEmpty, 0, 0, 13},
    //2: e.Commands#1
    //4: e.Vars#1
    //6: s.ContextOffset#1
    //7: e.Ranges_B#1
    //9: e.Range#1
    //11: e.Junk#1
    //15: s.Num#1
    //16: s.Number#1
    //17: e.Ranges_E#1
    //36: s.Num#1
    //37: s.Number#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 19},
    {refalrts::icFunc, 0, 1, 20},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 21},
    {refalrts::icIdent, 0, 3, 22},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 23},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 24},
    {refalrts::icIdent, 0, 0, 25},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 26},
    {refalrts::icIdent, 0, 23, 27},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 28},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 29},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 30},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 31},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 32},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 33},
    {refalrts::icIdent, 0, 22, 34},
    {refalrts::icIdent, 0, 5, 35},
    {refalrts::icCopySTVar, 36, 15, 0},
    {refalrts::icCopySTVar, 37, 16, 0},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 38},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 39},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 40},
    {refalrts::icPushStack, 0, 0, 40},
    {refalrts::icPushStack, 0, 0, 19},
    {refalrts::icSpliceElem, 0, 0, 40},
    {refalrts::icLinkBrackets, 32, 39, 0},
    {refalrts::icSpliceElem, 0, 0, 39},
    {refalrts::icLinkBrackets, 33, 38, 0},
    {refalrts::icSpliceElem, 0, 0, 38},
    {refalrts::icSpliceSTVar, 0, 0, 37},
    {refalrts::icSpliceSTVar, 0, 0, 36},
    {refalrts::icSpliceElem, 0, 0, 35},
    {refalrts::icSpliceElem, 0, 0, 34},
    {refalrts::icSpliceElem, 0, 0, 33},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 32},
    {refalrts::icLinkBrackets, 30, 31, 0},
    {refalrts::icSpliceElem, 0, 0, 31},
    {refalrts::icSpliceEVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 30},
    {refalrts::icSpliceEVar, 0, 0, 17},
    {refalrts::icLinkBrackets, 24, 29, 0},
    {refalrts::icSpliceElem, 0, 0, 29},
    {refalrts::icSpliceEVar, 0, 0, 11},
    {refalrts::icLinkBrackets, 26, 28, 0},
    {refalrts::icSpliceElem, 0, 0, 28},
    {refalrts::icSpliceSTVar, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 27},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icLinkBrackets, 21, 23, 0},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icSpliceEVar, 0, 0, 9},
    {refalrts::icSpliceSTVar, 0, 0, 15},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceEVar, 0, 0, 7},
    {refalrts::icSpliceSTVar, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +77, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // s.ContextOffset#1/6 e.Ranges_B#1/7 ( # Range s.Num#1/15 e.Range#1/9 ( # TkName e.Name#1/13 ) ) ( # Junk e.Junk#1/11 ) e.Ranges_E#1/16 ( e.Vars#1/4 ) ( e.Commands#1/2 )
    {refalrts::icBracketRight, 0, 2, 0},
    {refalrts::icBracketRight, 0, 4, 0},
    // closed e.Vars#1 as range 4
    // closed e.Commands#1 as range 2
    {refalrts::icsVarLeft, 0, 6, 0},
    {refalrts::icEPrepare, 0, 7, 0},
    {refalrts::icEStart, 0, 7, 0},
    {refalrts::icSave, 0, 16, 0},
    {refalrts::icBracketLeft, 0, 9, 16},
    {refalrts::icIdentLeft, 0, 3, 9},
    {refalrts::icBracketLeft, 0, 11, 16},
    {refalrts::icIdentLeft, 0, 0, 11},
    {refalrts::icBracketRight, 0, 13, 9},
    {refalrts::icIdentLeft, 0, 12, 13},
    // closed e.Name#1 as range 13
    // closed e.Junk#1 as range 11
    // closed e.Ranges_E#1 as range 0
    {refalrts::icsVarLeft, 0, 15, 9},
    // closed e.Range#1 as range 9
    //2: e.Commands#1
    //4: e.Vars#1
    //6: s.ContextOffset#1
    //7: e.Ranges_B#1
    //9: e.Range#1
    //11: e.Junk#1
    //13: e.Name#1
    //15: s.Num#1
    //16: e.Ranges_E#1
    //35: s.Num#1
    //36: e.Name#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 18},
    {refalrts::icFunc, 0, 1, 19},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 20},
    {refalrts::icIdent, 0, 3, 21},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 22},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 23},
    {refalrts::icIdent, 0, 0, 24},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 25},
    {refalrts::icIdent, 0, 12, 26},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 27},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 28},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 29},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 30},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 31},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 32},
    {refalrts::icIdent, 0, 21, 33},
    {refalrts::icIdent, 0, 5, 34},
    {refalrts::icCopySTVar, 35, 15, 0},
    {refalrts::icCopyEVar, 36, 13, 0},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 38},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 39},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 40},
    {refalrts::icPushStack, 0, 0, 40},
    {refalrts::icPushStack, 0, 0, 18},
    {refalrts::icSpliceElem, 0, 0, 40},
    {refalrts::icLinkBrackets, 31, 39, 0},
    {refalrts::icSpliceElem, 0, 0, 39},
    {refalrts::icLinkBrackets, 32, 38, 0},
    {refalrts::icSpliceElem, 0, 0, 38},
    {refalrts::icSpliceEVar, 0, 0, 36},
    {refalrts::icSpliceSTVar, 0, 0, 35},
    {refalrts::icSpliceElem, 0, 0, 34},
    {refalrts::icSpliceElem, 0, 0, 33},
    {refalrts::icSpliceElem, 0, 0, 32},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 31},
    {refalrts::icLinkBrackets, 29, 30, 0},
    {refalrts::icSpliceElem, 0, 0, 30},
    {refalrts::icSpliceEVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 29},
    {refalrts::icSpliceEVar, 0, 0, 16},
    {refalrts::icLinkBrackets, 23, 28, 0},
    {refalrts::icSpliceElem, 0, 0, 28},
    {refalrts::icSpliceEVar, 0, 0, 11},
    {refalrts::icLinkBrackets, 25, 27, 0},
    {refalrts::icSpliceElem, 0, 0, 27},
    {refalrts::icSpliceEVar, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icLinkBrackets, 20, 22, 0},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceEVar, 0, 0, 9},
    {refalrts::icSpliceSTVar, 0, 0, 15},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceEVar, 0, 0, 7},
    {refalrts::icSpliceSTVar, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +77, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // s.ContextOffset#1/6 e.Ranges_B#1/7 ( # Range s.Num#1/15 e.Range#1/9 ( # TkIdentifier e.Name#1/13 ) ) ( # Junk e.Junk#1/11 ) e.Ranges_E#1/16 ( e.Vars#1/4 ) ( e.Commands#1/2 )
    {refalrts::icBracketRight, 0, 2, 0},
    {refalrts::icBracketRight, 0, 4, 0},
    // closed e.Vars#1 as range 4
    // closed e.Commands#1 as range 2
    {refalrts::icsVarLeft, 0, 6, 0},
    {refalrts::icEPrepare, 0, 7, 0},
    {refalrts::icEStart, 0, 7, 0},
    {refalrts::icSave, 0, 16, 0},
    {refalrts::icBracketLeft, 0, 9, 16},
    {refalrts::icIdentLeft, 0, 3, 9},
    {refalrts::icBracketLeft, 0, 11, 16},
    {refalrts::icIdentLeft, 0, 0, 11},
    {refalrts::icBracketRight, 0, 13, 9},
    {refalrts::icIdentLeft, 0, 20, 13},
    // closed e.Name#1 as range 13
    // closed e.Junk#1 as range 11
    // closed e.Ranges_E#1 as range 0
    {refalrts::icsVarLeft, 0, 15, 9},
    // closed e.Range#1 as range 9
    //2: e.Commands#1
    //4: e.Vars#1
    //6: s.ContextOffset#1
    //7: e.Ranges_B#1
    //9: e.Range#1
    //11: e.Junk#1
    //13: e.Name#1
    //15: s.Num#1
    //16: e.Ranges_E#1
    //35: s.Num#1
    //36: e.Name#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 18},
    {refalrts::icFunc, 0, 1, 19},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 20},
    {refalrts::icIdent, 0, 3, 21},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 22},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 23},
    {refalrts::icIdent, 0, 0, 24},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 25},
    {refalrts::icIdent, 0, 20, 26},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 27},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 28},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 29},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 30},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 31},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 32},
    {refalrts::icIdent, 0, 19, 33},
    {refalrts::icIdent, 0, 5, 34},
    {refalrts::icCopySTVar, 35, 15, 0},
    {refalrts::icCopyEVar, 36, 13, 0},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 38},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 39},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 40},
    {refalrts::icPushStack, 0, 0, 40},
    {refalrts::icPushStack, 0, 0, 18},
    {refalrts::icSpliceElem, 0, 0, 40},
    {refalrts::icLinkBrackets, 31, 39, 0},
    {refalrts::icSpliceElem, 0, 0, 39},
    {refalrts::icLinkBrackets, 32, 38, 0},
    {refalrts::icSpliceElem, 0, 0, 38},
    {refalrts::icSpliceEVar, 0, 0, 36},
    {refalrts::icSpliceSTVar, 0, 0, 35},
    {refalrts::icSpliceElem, 0, 0, 34},
    {refalrts::icSpliceElem, 0, 0, 33},
    {refalrts::icSpliceElem, 0, 0, 32},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 31},
    {refalrts::icLinkBrackets, 29, 30, 0},
    {refalrts::icSpliceElem, 0, 0, 30},
    {refalrts::icSpliceEVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 29},
    {refalrts::icSpliceEVar, 0, 0, 16},
    {refalrts::icLinkBrackets, 23, 28, 0},
    {refalrts::icSpliceElem, 0, 0, 28},
    {refalrts::icSpliceEVar, 0, 0, 11},
    {refalrts::icLinkBrackets, 25, 27, 0},
    {refalrts::icSpliceElem, 0, 0, 27},
    {refalrts::icSpliceEVar, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icLinkBrackets, 20, 22, 0},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceEVar, 0, 0, 9},
    {refalrts::icSpliceSTVar, 0, 0, 15},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceEVar, 0, 0, 7},
    {refalrts::icSpliceSTVar, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +108, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // s.ContextOffset#1/6 e.Ranges_B#1/7 ( # Junk e.Junk#1/9 ) ( # Range s.Num#1/13 ( # Brackets e.SubRange#1/14 ) e.Range#1/11 ) e.Ranges_E#1/16 ( e.Vars#1/4 ) ( e.Commands#1/2 )
    {refalrts::icBracketRight, 0, 2, 0},
    {refalrts::icBracketRight, 0, 4, 0},
    // closed e.Vars#1 as range 4
    // closed e.Commands#1 as range 2
    {refalrts::icsVarLeft, 0, 6, 0},
    {refalrts::icEPrepare, 0, 7, 0},
    {refalrts::icEStart, 0, 7, 0},
    {refalrts::icSave, 0, 16, 0},
    {refalrts::icBracketLeft, 0, 9, 16},
    {refalrts::icIdentLeft, 0, 0, 9},
    {refalrts::icBracketLeft, 0, 11, 16},
    {refalrts::icIdentLeft, 0, 3, 11},
    // closed e.Junk#1 as range 9
    // closed e.Ranges_E#1 as range 0
    {refalrts::icsVarLeft, 0, 13, 11},
    {refalrts::icBracketLeft, 0, 14, 11},
    {refalrts::icIdentLeft, 0, 18, 14},
    // closed e.SubRange#1 as range 14
    // closed e.Range#1 as range 11
    //2: e.Commands#1
    //4: e.Vars#1
    //6: s.ContextOffset#1
    //7: e.Ranges_B#1
    //9: e.Junk#1
    //11: e.Range#1
    //13: s.Num#1
    //14: e.SubRange#1
    //16: e.Ranges_E#1
    //31: s.ContextOffset#1
    //48: s.Num#1
    //49: s.ContextOffset#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 18},
    {refalrts::icFunc, 0, 1, 19},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 20},
    {refalrts::icFunc, 0, 0, 21},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 22},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 23},
    {refalrts::icIdent, 0, 0, 24},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 25},
    {refalrts::icIdent, 0, 17, 26},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 27},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 28},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 29},
    {refalrts::icIdent, 0, 3, 30},
    {refalrts::icCopySTVar, 31, 6, 0},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 32},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 33},
    {refalrts::icIdent, 0, 0, 34},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 35},
    {refalrts::icIdent, 0, 16, 36},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 37},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 38},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 39},
    {refalrts::icIdent, 0, 3, 40},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 41},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 42},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 43},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 44},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 45},
    {refalrts::icIdent, 0, 15, 46},
    {refalrts::icIdent, 0, 1, 47},
    {refalrts::icCopySTVar, 48, 13, 0},
    {refalrts::icCopySTVar, 49, 31, 0},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 50},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 51},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 52},
    {refalrts::icPushStack, 0, 0, 52},
    {refalrts::icPushStack, 0, 0, 18},
    {refalrts::icSpliceElem, 0, 0, 52},
    {refalrts::icLinkBrackets, 44, 51, 0},
    {refalrts::icSpliceElem, 0, 0, 51},
    {refalrts::icLinkBrackets, 45, 50, 0},
    {refalrts::icSpliceElem, 0, 0, 50},
    {refalrts::icSpliceSTVar, 0, 0, 49},
    {refalrts::icSpliceSTVar, 0, 0, 48},
    {refalrts::icSpliceElem, 0, 0, 47},
    {refalrts::icSpliceElem, 0, 0, 46},
    {refalrts::icSpliceElem, 0, 0, 45},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 44},
    {refalrts::icLinkBrackets, 42, 43, 0},
    {refalrts::icSpliceElem, 0, 0, 43},
    {refalrts::icSpliceEVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 42},
    {refalrts::icSpliceEVar, 0, 0, 16},
    {refalrts::icLinkBrackets, 39, 41, 0},
    {refalrts::icSpliceElem, 0, 0, 41},
    {refalrts::icSpliceEVar, 0, 0, 11},
    {refalrts::icSpliceSTVar, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 40},
    {refalrts::icSpliceElem, 0, 0, 39},
    {refalrts::icLinkBrackets, 33, 38, 0},
    {refalrts::icSpliceElem, 0, 0, 38},
    {refalrts::icLinkBrackets, 35, 37, 0},
    {refalrts::icSpliceElem, 0, 0, 37},
    {refalrts::icSpliceElem, 0, 0, 36},
    {refalrts::icSpliceElem, 0, 0, 35},
    {refalrts::icSpliceElem, 0, 0, 34},
    {refalrts::icSpliceElem, 0, 0, 33},
    {refalrts::icLinkBrackets, 29, 32, 0},
    {refalrts::icSpliceElem, 0, 0, 32},
    {refalrts::icSpliceEVar, 0, 0, 14},
    {refalrts::icSpliceSTVar, 0, 0, 31},
    {refalrts::icSpliceElem, 0, 0, 30},
    {refalrts::icSpliceElem, 0, 0, 29},
    {refalrts::icLinkBrackets, 23, 28, 0},
    {refalrts::icSpliceElem, 0, 0, 28},
    {refalrts::icLinkBrackets, 25, 27, 0},
    {refalrts::icSpliceElem, 0, 0, 27},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icSpliceEVar, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icSpliceEVar, 0, 0, 7},
    {refalrts::icPushStack, 0, 0, 22},
    {refalrts::icPushStack, 0, 0, 20},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceSTVar, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +108, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // s.ContextOffset#1/6 e.Ranges_B#1/7 ( # Range s.Num#1/15 e.Range#1/9 ( # Brackets e.SubRange#1/13 ) ) ( # Junk e.Junk#1/11 ) e.Ranges_E#1/16 ( e.Vars#1/4 ) ( e.Commands#1/2 )
    {refalrts::icBracketRight, 0, 2, 0},
    {refalrts::icBracketRight, 0, 4, 0},
    // closed e.Vars#1 as range 4
    // closed e.Commands#1 as range 2
    {refalrts::icsVarLeft, 0, 6, 0},
    {refalrts::icEPrepare, 0, 7, 0},
    {refalrts::icEStart, 0, 7, 0},
    {refalrts::icSave, 0, 16, 0},
    {refalrts::icBracketLeft, 0, 9, 16},
    {refalrts::icIdentLeft, 0, 3, 9},
    {refalrts::icBracketLeft, 0, 11, 16},
    {refalrts::icIdentLeft, 0, 0, 11},
    {refalrts::icBracketRight, 0, 13, 9},
    {refalrts::icIdentLeft, 0, 18, 13},
    // closed e.SubRange#1 as range 13
    // closed e.Junk#1 as range 11
    // closed e.Ranges_E#1 as range 0
    {refalrts::icsVarLeft, 0, 15, 9},
    // closed e.Range#1 as range 9
    //2: e.Commands#1
    //4: e.Vars#1
    //6: s.ContextOffset#1
    //7: e.Ranges_B#1
    //9: e.Range#1
    //11: e.Junk#1
    //13: e.SubRange#1
    //15: s.Num#1
    //16: e.Ranges_E#1
    //34: s.ContextOffset#1
    //48: s.Num#1
    //49: s.ContextOffset#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 18},
    {refalrts::icFunc, 0, 1, 19},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 20},
    {refalrts::icFunc, 0, 0, 21},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 22},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 23},
    {refalrts::icIdent, 0, 3, 24},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 25},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 26},
    {refalrts::icIdent, 0, 0, 27},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 28},
    {refalrts::icIdent, 0, 17, 29},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 30},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 31},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 32},
    {refalrts::icIdent, 0, 3, 33},
    {refalrts::icCopySTVar, 34, 6, 0},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 35},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 36},
    {refalrts::icIdent, 0, 0, 37},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 38},
    {refalrts::icIdent, 0, 16, 39},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 40},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 41},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 42},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 43},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 44},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 45},
    {refalrts::icIdent, 0, 15, 46},
    {refalrts::icIdent, 0, 5, 47},
    {refalrts::icCopySTVar, 48, 15, 0},
    {refalrts::icCopySTVar, 49, 34, 0},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 50},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 51},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 52},
    {refalrts::icPushStack, 0, 0, 52},
    {refalrts::icPushStack, 0, 0, 18},
    {refalrts::icSpliceElem, 0, 0, 52},
    {refalrts::icLinkBrackets, 44, 51, 0},
    {refalrts::icSpliceElem, 0, 0, 51},
    {refalrts::icLinkBrackets, 45, 50, 0},
    {refalrts::icSpliceElem, 0, 0, 50},
    {refalrts::icSpliceSTVar, 0, 0, 49},
    {refalrts::icSpliceSTVar, 0, 0, 48},
    {refalrts::icSpliceElem, 0, 0, 47},
    {refalrts::icSpliceElem, 0, 0, 46},
    {refalrts::icSpliceElem, 0, 0, 45},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 44},
    {refalrts::icLinkBrackets, 42, 43, 0},
    {refalrts::icSpliceElem, 0, 0, 43},
    {refalrts::icSpliceEVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 42},
    {refalrts::icSpliceEVar, 0, 0, 16},
    {refalrts::icLinkBrackets, 36, 41, 0},
    {refalrts::icSpliceElem, 0, 0, 41},
    {refalrts::icSpliceEVar, 0, 0, 11},
    {refalrts::icLinkBrackets, 38, 40, 0},
    {refalrts::icSpliceElem, 0, 0, 40},
    {refalrts::icSpliceElem, 0, 0, 39},
    {refalrts::icSpliceElem, 0, 0, 38},
    {refalrts::icSpliceElem, 0, 0, 37},
    {refalrts::icSpliceElem, 0, 0, 36},
    {refalrts::icLinkBrackets, 32, 35, 0},
    {refalrts::icSpliceElem, 0, 0, 35},
    {refalrts::icSpliceEVar, 0, 0, 13},
    {refalrts::icSpliceSTVar, 0, 0, 34},
    {refalrts::icSpliceElem, 0, 0, 33},
    {refalrts::icSpliceElem, 0, 0, 32},
    {refalrts::icLinkBrackets, 26, 31, 0},
    {refalrts::icSpliceElem, 0, 0, 31},
    {refalrts::icLinkBrackets, 28, 30, 0},
    {refalrts::icSpliceElem, 0, 0, 30},
    {refalrts::icSpliceElem, 0, 0, 29},
    {refalrts::icSpliceElem, 0, 0, 28},
    {refalrts::icSpliceElem, 0, 0, 27},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icLinkBrackets, 23, 25, 0},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icSpliceEVar, 0, 0, 9},
    {refalrts::icSpliceSTVar, 0, 0, 15},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icSpliceEVar, 0, 0, 7},
    {refalrts::icPushStack, 0, 0, 22},
    {refalrts::icPushStack, 0, 0, 20},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceSTVar, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +119, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // s.ContextOffset#1/6 e.Ranges_B#1/7 ( # Junk e.Junk#1/9 ) ( # Range s.Num#1/13 ( # ADT_Brackets ( e.Name#1/16 ) e.SubRange#1/14 ) e.Range#1/11 ) e.Ranges_E#1/18 ( e.Vars#1/4 ) ( e.Commands#1/2 )
    {refalrts::icBracketRight, 0, 2, 0},
    {refalrts::icBracketRight, 0, 4, 0},
    // closed e.Vars#1 as range 4
    // closed e.Commands#1 as range 2
    {refalrts::icsVarLeft, 0, 6, 0},
    {refalrts::icEPrepare, 0, 7, 0},
    {refalrts::icEStart, 0, 7, 0},
    {refalrts::icSave, 0, 18, 0},
    {refalrts::icBracketLeft, 0, 9, 18},
    {refalrts::icIdentLeft, 0, 0, 9},
    {refalrts::icBracketLeft, 0, 11, 18},
    {refalrts::icIdentLeft, 0, 3, 11},
    // closed e.Junk#1 as range 9
    // closed e.Ranges_E#1 as range 0
    {refalrts::icsVarLeft, 0, 13, 11},
    {refalrts::icBracketLeft, 0, 14, 11},
    {refalrts::icIdentLeft, 0, 14, 14},
    {refalrts::icBracketLeft, 0, 16, 14},
    // closed e.Name#1 as range 16
    // closed e.SubRange#1 as range 14
    // closed e.Range#1 as range 11
    //2: e.Commands#1
    //4: e.Vars#1
    //6: s.ContextOffset#1
    //7: e.Ranges_B#1
    //9: e.Junk#1
    //11: e.Range#1
    //13: s.Num#1
    //14: e.SubRange#1
    //16: e.Name#1
    //18: e.Ranges_E#1
    //36: s.ContextOffset#1
    //53: s.Num#1
    //54: s.ContextOffset#1
    //55: e.Name#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 20},
    {refalrts::icFunc, 0, 1, 21},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 22},
    {refalrts::icFunc, 0, 0, 23},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 24},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 25},
    {refalrts::icIdent, 0, 0, 26},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 27},
    {refalrts::icIdent, 0, 13, 28},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 29},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 30},
    {refalrts::icIdent, 0, 12, 31},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 32},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 33},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 34},
    {refalrts::icIdent, 0, 3, 35},
    {refalrts::icCopySTVar, 36, 6, 0},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 37},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 38},
    {refalrts::icIdent, 0, 0, 39},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 40},
    {refalrts::icIdent, 0, 11, 41},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 42},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 43},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 44},
    {refalrts::icIdent, 0, 3, 45},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 46},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 47},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 48},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 49},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 50},
    {refalrts::icIdent, 0, 10, 51},
    {refalrts::icIdent, 0, 1, 52},
    {refalrts::icCopySTVar, 53, 13, 0},
    {refalrts::icCopySTVar, 54, 36, 0},
    {refalrts::icCopyEVar, 55, 16, 0},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 57},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 58},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 59},
    {refalrts::icPushStack, 0, 0, 59},
    {refalrts::icPushStack, 0, 0, 20},
    {refalrts::icSpliceElem, 0, 0, 59},
    {refalrts::icLinkBrackets, 49, 58, 0},
    {refalrts::icSpliceElem, 0, 0, 58},
    {refalrts::icLinkBrackets, 50, 57, 0},
    {refalrts::icSpliceElem, 0, 0, 57},
    {refalrts::icSpliceEVar, 0, 0, 55},
    {refalrts::icSpliceSTVar, 0, 0, 54},
    {refalrts::icSpliceSTVar, 0, 0, 53},
    {refalrts::icSpliceElem, 0, 0, 52},
    {refalrts::icSpliceElem, 0, 0, 51},
    {refalrts::icSpliceElem, 0, 0, 50},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 49},
    {refalrts::icLinkBrackets, 47, 48, 0},
    {refalrts::icSpliceElem, 0, 0, 48},
    {refalrts::icSpliceEVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 47},
    {refalrts::icSpliceEVar, 0, 0, 18},
    {refalrts::icLinkBrackets, 44, 46, 0},
    {refalrts::icSpliceElem, 0, 0, 46},
    {refalrts::icSpliceEVar, 0, 0, 11},
    {refalrts::icSpliceSTVar, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 45},
    {refalrts::icSpliceElem, 0, 0, 44},
    {refalrts::icLinkBrackets, 38, 43, 0},
    {refalrts::icSpliceElem, 0, 0, 43},
    {refalrts::icLinkBrackets, 40, 42, 0},
    {refalrts::icSpliceElem, 0, 0, 42},
    {refalrts::icSpliceElem, 0, 0, 41},
    {refalrts::icSpliceElem, 0, 0, 40},
    {refalrts::icSpliceElem, 0, 0, 39},
    {refalrts::icSpliceElem, 0, 0, 38},
    {refalrts::icLinkBrackets, 34, 37, 0},
    {refalrts::icSpliceElem, 0, 0, 37},
    {refalrts::icSpliceEVar, 0, 0, 14},
    {refalrts::icSpliceSTVar, 0, 0, 36},
    {refalrts::icSpliceElem, 0, 0, 35},
    {refalrts::icSpliceElem, 0, 0, 34},
    {refalrts::icLinkBrackets, 25, 33, 0},
    {refalrts::icSpliceElem, 0, 0, 33},
    {refalrts::icLinkBrackets, 30, 32, 0},
    {refalrts::icSpliceElem, 0, 0, 32},
    {refalrts::icSpliceEVar, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 31},
    {refalrts::icSpliceElem, 0, 0, 30},
    {refalrts::icLinkBrackets, 27, 29, 0},
    {refalrts::icSpliceElem, 0, 0, 29},
    {refalrts::icSpliceElem, 0, 0, 28},
    {refalrts::icSpliceElem, 0, 0, 27},
    {refalrts::icSpliceEVar, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icSpliceEVar, 0, 0, 7},
    {refalrts::icPushStack, 0, 0, 24},
    {refalrts::icPushStack, 0, 0, 22},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icSpliceSTVar, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +119, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // s.ContextOffset#1/6 e.Ranges_B#1/7 ( # Range s.Num#1/17 e.Range#1/9 ( # ADT_Brackets ( e.Name#1/15 ) e.SubRange#1/13 ) ) ( # Junk e.Junk#1/11 ) e.Ranges_E#1/18 ( e.Vars#1/4 ) ( e.Commands#1/2 )
    {refalrts::icBracketRight, 0, 2, 0},
    {refalrts::icBracketRight, 0, 4, 0},
    // closed e.Vars#1 as range 4
    // closed e.Commands#1 as range 2
    {refalrts::icsVarLeft, 0, 6, 0},
    {refalrts::icEPrepare, 0, 7, 0},
    {refalrts::icEStart, 0, 7, 0},
    {refalrts::icSave, 0, 18, 0},
    {refalrts::icBracketLeft, 0, 9, 18},
    {refalrts::icIdentLeft, 0, 3, 9},
    {refalrts::icBracketLeft, 0, 11, 18},
    {refalrts::icIdentLeft, 0, 0, 11},
    {refalrts::icBracketRight, 0, 13, 9},
    {refalrts::icIdentLeft, 0, 14, 13},
    {refalrts::icBracketLeft, 0, 15, 13},
    // closed e.Name#1 as range 15
    // closed e.SubRange#1 as range 13
    // closed e.Junk#1 as range 11
    // closed e.Ranges_E#1 as range 0
    {refalrts::icsVarLeft, 0, 17, 9},
    // closed e.Range#1 as range 9
    //2: e.Commands#1
    //4: e.Vars#1
    //6: s.ContextOffset#1
    //7: e.Ranges_B#1
    //9: e.Range#1
    //11: e.Junk#1
    //13: e.SubRange#1
    //15: e.Name#1
    //17: s.Num#1
    //18: e.Ranges_E#1
    //39: s.ContextOffset#1
    //53: s.Num#1
    //54: s.ContextOffset#1
    //55: e.Name#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 20},
    {refalrts::icFunc, 0, 1, 21},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 22},
    {refalrts::icFunc, 0, 0, 23},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 24},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 25},
    {refalrts::icIdent, 0, 3, 26},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 27},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 28},
    {refalrts::icIdent, 0, 0, 29},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 30},
    {refalrts::icIdent, 0, 13, 31},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 32},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 33},
    {refalrts::icIdent, 0, 12, 34},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 35},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 36},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 37},
    {refalrts::icIdent, 0, 3, 38},
    {refalrts::icCopySTVar, 39, 6, 0},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 40},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 41},
    {refalrts::icIdent, 0, 0, 42},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 43},
    {refalrts::icIdent, 0, 11, 44},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 45},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 46},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 47},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 48},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 49},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 50},
    {refalrts::icIdent, 0, 10, 51},
    {refalrts::icIdent, 0, 5, 52},
    {refalrts::icCopySTVar, 53, 17, 0},
    {refalrts::icCopySTVar, 54, 39, 0},
    {refalrts::icCopyEVar, 55, 15, 0},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 57},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 58},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 59},
    {refalrts::icPushStack, 0, 0, 59},
    {refalrts::icPushStack, 0, 0, 20},
    {refalrts::icSpliceElem, 0, 0, 59},
    {refalrts::icLinkBrackets, 49, 58, 0},
    {refalrts::icSpliceElem, 0, 0, 58},
    {refalrts::icLinkBrackets, 50, 57, 0},
    {refalrts::icSpliceElem, 0, 0, 57},
    {refalrts::icSpliceEVar, 0, 0, 55},
    {refalrts::icSpliceSTVar, 0, 0, 54},
    {refalrts::icSpliceSTVar, 0, 0, 53},
    {refalrts::icSpliceElem, 0, 0, 52},
    {refalrts::icSpliceElem, 0, 0, 51},
    {refalrts::icSpliceElem, 0, 0, 50},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 49},
    {refalrts::icLinkBrackets, 47, 48, 0},
    {refalrts::icSpliceElem, 0, 0, 48},
    {refalrts::icSpliceEVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 47},
    {refalrts::icSpliceEVar, 0, 0, 18},
    {refalrts::icLinkBrackets, 41, 46, 0},
    {refalrts::icSpliceElem, 0, 0, 46},
    {refalrts::icSpliceEVar, 0, 0, 11},
    {refalrts::icLinkBrackets, 43, 45, 0},
    {refalrts::icSpliceElem, 0, 0, 45},
    {refalrts::icSpliceElem, 0, 0, 44},
    {refalrts::icSpliceElem, 0, 0, 43},
    {refalrts::icSpliceElem, 0, 0, 42},
    {refalrts::icSpliceElem, 0, 0, 41},
    {refalrts::icLinkBrackets, 37, 40, 0},
    {refalrts::icSpliceElem, 0, 0, 40},
    {refalrts::icSpliceEVar, 0, 0, 13},
    {refalrts::icSpliceSTVar, 0, 0, 39},
    {refalrts::icSpliceElem, 0, 0, 38},
    {refalrts::icSpliceElem, 0, 0, 37},
    {refalrts::icLinkBrackets, 28, 36, 0},
    {refalrts::icSpliceElem, 0, 0, 36},
    {refalrts::icLinkBrackets, 33, 35, 0},
    {refalrts::icSpliceElem, 0, 0, 35},
    {refalrts::icSpliceEVar, 0, 0, 15},
    {refalrts::icSpliceElem, 0, 0, 34},
    {refalrts::icSpliceElem, 0, 0, 33},
    {refalrts::icLinkBrackets, 30, 32, 0},
    {refalrts::icSpliceElem, 0, 0, 32},
    {refalrts::icSpliceElem, 0, 0, 31},
    {refalrts::icSpliceElem, 0, 0, 30},
    {refalrts::icSpliceElem, 0, 0, 29},
    {refalrts::icSpliceElem, 0, 0, 28},
    {refalrts::icLinkBrackets, 25, 27, 0},
    {refalrts::icSpliceElem, 0, 0, 27},
    {refalrts::icSpliceEVar, 0, 0, 9},
    {refalrts::icSpliceSTVar, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icSpliceEVar, 0, 0, 7},
    {refalrts::icPushStack, 0, 0, 24},
    {refalrts::icPushStack, 0, 0, 22},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icSpliceSTVar, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +59, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // s.ContextOffset#1/6 e.Ranges_B#1/7 ( # Junk e.Junk1#1/9 ) ( # Range s.Num#1/15 ) ( # Junk e.Junk2#1/13 ) e.Ranges_E#1/16 ( e.Vars#1/4 ) ( e.Commands#1/2 )
    {refalrts::icBracketRight, 0, 2, 0},
    {refalrts::icBracketRight, 0, 4, 0},
    // closed e.Vars#1 as range 4
    // closed e.Commands#1 as range 2
    {refalrts::icsVarLeft, 0, 6, 0},
    {refalrts::icEPrepare, 0, 7, 0},
    {refalrts::icEStart, 0, 7, 0},
    {refalrts::icSave, 0, 16, 0},
    {refalrts::icBracketLeft, 0, 9, 16},
    {refalrts::icIdentLeft, 0, 0, 9},
    {refalrts::icBracketLeft, 0, 11, 16},
    {refalrts::icIdentLeft, 0, 3, 11},
    {refalrts::icBracketLeft, 0, 13, 16},
    {refalrts::icIdentLeft, 0, 0, 13},
    // closed e.Junk1#1 as range 9
    // closed e.Junk2#1 as range 13
    // closed e.Ranges_E#1 as range 0
    {refalrts::icsVarLeft, 0, 15, 11},
    {refalrts::icEmpty, 0, 0, 11},
    //2: e.Commands#1
    //4: e.Vars#1
    //6: s.ContextOffset#1
    //7: e.Ranges_B#1
    //9: e.Junk1#1
    //13: e.Junk2#1
    //15: s.Num#1
    //16: e.Ranges_E#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 18},
    {refalrts::icFunc, 0, 1, 19},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 20},
    {refalrts::icIdent, 0, 0, 21},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 22},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 23},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 24},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 25},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 26},
    {refalrts::icIdent, 0, 9, 27},
    {refalrts::icIdent, 0, 1, 28},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 29},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 30},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 31},
    {refalrts::icPushStack, 0, 0, 31},
    {refalrts::icPushStack, 0, 0, 18},
    {refalrts::icSpliceElem, 0, 0, 31},
    {refalrts::icLinkBrackets, 25, 30, 0},
    {refalrts::icSpliceElem, 0, 0, 30},
    {refalrts::icLinkBrackets, 26, 29, 0},
    {refalrts::icSpliceElem, 0, 0, 29},
    {refalrts::icSpliceSTVar, 0, 0, 15},
    {refalrts::icSpliceElem, 0, 0, 28},
    {refalrts::icSpliceElem, 0, 0, 27},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icLinkBrackets, 23, 24, 0},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icSpliceEVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icSpliceEVar, 0, 0, 16},
    {refalrts::icLinkBrackets, 20, 22, 0},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceEVar, 0, 0, 13},
    {refalrts::icSpliceEVar, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceEVar, 0, 0, 7},
    {refalrts::icSpliceSTVar, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +122, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // s.ContextOffset#1/6 e.Ranges_B#1/7 ( # Junk e.Junk#1/9 ) ( # Range s.Num#1/13 ( # TkVariable s.Mode#1/16 e.Index#1/14 ) e.Range#1/11 ) e.Ranges_E#1/27 ( e.Vars_B#1/17 ( s.Mode#1/21 ( e.Index#1/24 ) e.Offsets#1/19 s.SampleOffset#1/26 ) e.Vars_E#1/31 ) ( e.Commands#1/2 )
    {refalrts::icBracketRight, 0, 2, 0},
    {refalrts::icBracketRight, 0, 4, 0},
    // closed e.Commands#1 as range 2
    {refalrts::icsVarLeft, 0, 6, 0},
    {refalrts::icEPrepare, 0, 7, 0},
    {refalrts::icEStart, 0, 7, 0},
    {refalrts::icSave, 0, 27, 0},
    {refalrts::icSave, 0, 29, 4},
    {refalrts::icBracketLeft, 0, 9, 27},
    {refalrts::icIdentLeft, 0, 0, 9},
    {refalrts::icBracketLeft, 0, 11, 27},
    {refalrts::icIdentLeft, 0, 3, 11},
    // closed e.Junk#1 as range 9
    // closed e.Ranges_E#1 as range 0
    {refalrts::icsVarLeft, 0, 13, 11},
    {refalrts::icBracketLeft, 0, 14, 11},
    {refalrts::icIdentLeft, 0, 4, 14},
    // closed e.Range#1 as range 11
    {refalrts::icsVarLeft, 0, 16, 14},
    // closed e.Index#1 as range 14
    {refalrts::icEPrepare, 0, 17, 29},
    {refalrts::icEStart, 0, 17, 29},
    {refalrts::icSave, 0, 31, 29},
    {refalrts::icBracketLeft, 0, 19, 31},
    {refalrts::icsRepeatLeft, 21, 16, 19},
    {refalrts::icBracketLeft, 0, 22, 19},
    {refalrts::iceRepeatLeft, 24, 14, 22},
    {refalrts::icEmpty, 0, 0, 22},
    // closed e.Vars_E#1 as range 4
    {refalrts::icsVarRight, 0, 26, 19},
    // closed e.Offsets#1 as range 19
    //2: e.Commands#1
    //6: s.ContextOffset#1
    //7: e.Ranges_B#1
    //9: e.Junk#1
    //11: e.Range#1
    //13: s.Num#1
    //14: e.Index#1
    //16: s.Mode#1
    //17: e.Vars_B#1
    //19: e.Offsets#1
    //21: s.Mode#1
    //24: e.Index#1
    //26: s.SampleOffset#1
    //27: e.Ranges_E#1
    //31: e.Vars_E#1
    //42: s.ContextOffset#1
    //50: s.Mode#1
    //53: s.ContextOffset#1
    //60: s.Num#1
    //61: s.Mode#1
    //62: s.ContextOffset#1
    //63: s.SampleOffset#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 33},
    {refalrts::icFunc, 0, 1, 34},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 35},
    {refalrts::icFunc, 0, 5, 36},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 37},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 38},
    {refalrts::icIdent, 0, 0, 39},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 40},
    {refalrts::icIdent, 0, 4, 41},
    {refalrts::icCopySTVar, 42, 6, 0},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 43},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 44},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 45},
    {refalrts::icIdent, 0, 3, 46},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 47},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 48},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 49},
    {refalrts::icCopySTVar, 50, 21, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 51},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 52},
    {refalrts::icCopySTVar, 53, 42, 0},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 54},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 55},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 56},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 57},
    {refalrts::icIdent, 0, 8, 58},
    {refalrts::icIdent, 0, 1, 59},
    {refalrts::icCopySTVar, 60, 13, 0},
    {refalrts::icCopySTVar, 61, 50, 0},
    {refalrts::icCopySTVar, 62, 53, 0},
    {refalrts::icCopySTVar, 63, 26, 0},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 64},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 65},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 66},
    {refalrts::icPushStack, 0, 0, 66},
    {refalrts::icPushStack, 0, 0, 33},
    {refalrts::icSpliceElem, 0, 0, 66},
    {refalrts::icLinkBrackets, 56, 65, 0},
    {refalrts::icSpliceElem, 0, 0, 65},
    {refalrts::icLinkBrackets, 57, 64, 0},
    {refalrts::icSpliceElem, 0, 0, 64},
    {refalrts::icSpliceSTVar, 0, 0, 63},
    {refalrts::icSpliceSTVar, 0, 0, 62},
    {refalrts::icSpliceSTVar, 0, 0, 61},
    {refalrts::icSpliceSTVar, 0, 0, 60},
    {refalrts::icSpliceElem, 0, 0, 59},
    {refalrts::icSpliceElem, 0, 0, 58},
    {refalrts::icSpliceElem, 0, 0, 57},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 56},
    {refalrts::icLinkBrackets, 48, 55, 0},
    {refalrts::icSpliceElem, 0, 0, 55},
    {refalrts::icSpliceEVar, 0, 0, 31},
    {refalrts::icLinkBrackets, 49, 54, 0},
    {refalrts::icSpliceElem, 0, 0, 54},
    {refalrts::icSpliceSTVar, 0, 0, 53},
    {refalrts::icSpliceSTVar, 0, 0, 26},
    {refalrts::icSpliceEVar, 0, 0, 19},
    {refalrts::icLinkBrackets, 51, 52, 0},
    {refalrts::icSpliceElem, 0, 0, 52},
    {refalrts::icSpliceEVar, 0, 0, 24},
    {refalrts::icSpliceElem, 0, 0, 51},
    {refalrts::icSpliceSTVar, 0, 0, 50},
    {refalrts::icSpliceElem, 0, 0, 49},
    {refalrts::icSpliceEVar, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 48},
    {refalrts::icSpliceEVar, 0, 0, 27},
    {refalrts::icLinkBrackets, 45, 47, 0},
    {refalrts::icSpliceElem, 0, 0, 47},
    {refalrts::icSpliceEVar, 0, 0, 11},
    {refalrts::icSpliceSTVar, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 46},
    {refalrts::icSpliceElem, 0, 0, 45},
    {refalrts::icLinkBrackets, 38, 44, 0},
    {refalrts::icSpliceElem, 0, 0, 44},
    {refalrts::icLinkBrackets, 40, 43, 0},
    {refalrts::icSpliceElem, 0, 0, 43},
    {refalrts::icSpliceSTVar, 0, 0, 42},
    {refalrts::icSpliceEVar, 0, 0, 14},
    {refalrts::icSpliceSTVar, 0, 0, 21},
    {refalrts::icSpliceElem, 0, 0, 41},
    {refalrts::icSpliceElem, 0, 0, 40},
    {refalrts::icSpliceEVar, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 39},
    {refalrts::icSpliceElem, 0, 0, 38},
    {refalrts::icSpliceEVar, 0, 0, 7},
    {refalrts::icPushStack, 0, 0, 37},
    {refalrts::icPushStack, 0, 0, 35},
    {refalrts::icSpliceElem, 0, 0, 37},
    {refalrts::icSpliceSTVar, 0, 0, 16},
    {refalrts::icSpliceSTVar, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 36},
    {refalrts::icSpliceElem, 0, 0, 35},
    {refalrts::icSpliceElem, 0, 0, 34},
    {refalrts::icSpliceElem, 0, 0, 33},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +122, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // s.ContextOffset#1/6 e.Ranges_B#1/7 ( # Range s.Num#1/15 e.Range#1/9 ( # TkVariable s.Mode#1/16 e.Index#1/13 ) ) ( # Junk e.Junk#1/11 ) e.Ranges_E#1/27 ( e.Vars_B#1/17 ( s.Mode#1/21 ( e.Index#1/24 ) e.Offsets#1/19 s.SampleOffset#1/26 ) e.Vars_E#1/31 ) ( e.Commands#1/2 )
    {refalrts::icBracketRight, 0, 2, 0},
    {refalrts::icBracketRight, 0, 4, 0},
    // closed e.Commands#1 as range 2
    {refalrts::icsVarLeft, 0, 6, 0},
    {refalrts::icEPrepare, 0, 7, 0},
    {refalrts::icEStart, 0, 7, 0},
    {refalrts::icSave, 0, 27, 0},
    {refalrts::icSave, 0, 29, 4},
    {refalrts::icBracketLeft, 0, 9, 27},
    {refalrts::icIdentLeft, 0, 3, 9},
    {refalrts::icBracketLeft, 0, 11, 27},
    {refalrts::icIdentLeft, 0, 0, 11},
    {refalrts::icBracketRight, 0, 13, 9},
    {refalrts::icIdentLeft, 0, 4, 13},
    // closed e.Junk#1 as range 11
    // closed e.Ranges_E#1 as range 0
    {refalrts::icsVarLeft, 0, 15, 9},
    // closed e.Range#1 as range 9
    {refalrts::icsVarLeft, 0, 16, 13},
    // closed e.Index#1 as range 13
    {refalrts::icEPrepare, 0, 17, 29},
    {refalrts::icEStart, 0, 17, 29},
    {refalrts::icSave, 0, 31, 29},
    {refalrts::icBracketLeft, 0, 19, 31},
    {refalrts::icsRepeatLeft, 21, 16, 19},
    {refalrts::icBracketLeft, 0, 22, 19},
    {refalrts::iceRepeatLeft, 24, 13, 22},
    {refalrts::icEmpty, 0, 0, 22},
    // closed e.Vars_E#1 as range 4
    {refalrts::icsVarRight, 0, 26, 19},
    // closed e.Offsets#1 as range 19
    //2: e.Commands#1
    //6: s.ContextOffset#1
    //7: e.Ranges_B#1
    //9: e.Range#1
    //11: e.Junk#1
    //13: e.Index#1
    //15: s.Num#1
    //16: s.Mode#1
    //17: e.Vars_B#1
    //19: e.Offsets#1
    //21: s.Mode#1
    //24: e.Index#1
    //26: s.SampleOffset#1
    //27: e.Ranges_E#1
    //31: e.Vars_E#1
    //45: s.ContextOffset#1
    //50: s.Mode#1
    //53: s.ContextOffset#1
    //60: s.Num#1
    //61: s.Mode#1
    //62: s.ContextOffset#1
    //63: s.SampleOffset#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 33},
    {refalrts::icFunc, 0, 1, 34},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 35},
    {refalrts::icFunc, 0, 5, 36},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 37},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 38},
    {refalrts::icIdent, 0, 3, 39},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 40},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 41},
    {refalrts::icIdent, 0, 0, 42},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 43},
    {refalrts::icIdent, 0, 4, 44},
    {refalrts::icCopySTVar, 45, 6, 0},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 46},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 47},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 48},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 49},
    {refalrts::icCopySTVar, 50, 21, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 51},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 52},
    {refalrts::icCopySTVar, 53, 45, 0},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 54},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 55},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 56},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 57},
    {refalrts::icIdent, 0, 8, 58},
    {refalrts::icIdent, 0, 5, 59},
    {refalrts::icCopySTVar, 60, 15, 0},
    {refalrts::icCopySTVar, 61, 50, 0},
    {refalrts::icCopySTVar, 62, 53, 0},
    {refalrts::icCopySTVar, 63, 26, 0},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 64},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 65},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 66},
    {refalrts::icPushStack, 0, 0, 66},
    {refalrts::icPushStack, 0, 0, 33},
    {refalrts::icSpliceElem, 0, 0, 66},
    {refalrts::icLinkBrackets, 56, 65, 0},
    {refalrts::icSpliceElem, 0, 0, 65},
    {refalrts::icLinkBrackets, 57, 64, 0},
    {refalrts::icSpliceElem, 0, 0, 64},
    {refalrts::icSpliceSTVar, 0, 0, 63},
    {refalrts::icSpliceSTVar, 0, 0, 62},
    {refalrts::icSpliceSTVar, 0, 0, 61},
    {refalrts::icSpliceSTVar, 0, 0, 60},
    {refalrts::icSpliceElem, 0, 0, 59},
    {refalrts::icSpliceElem, 0, 0, 58},
    {refalrts::icSpliceElem, 0, 0, 57},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 56},
    {refalrts::icLinkBrackets, 48, 55, 0},
    {refalrts::icSpliceElem, 0, 0, 55},
    {refalrts::icSpliceEVar, 0, 0, 31},
    {refalrts::icLinkBrackets, 49, 54, 0},
    {refalrts::icSpliceElem, 0, 0, 54},
    {refalrts::icSpliceSTVar, 0, 0, 53},
    {refalrts::icSpliceSTVar, 0, 0, 26},
    {refalrts::icSpliceEVar, 0, 0, 19},
    {refalrts::icLinkBrackets, 51, 52, 0},
    {refalrts::icSpliceElem, 0, 0, 52},
    {refalrts::icSpliceEVar, 0, 0, 24},
    {refalrts::icSpliceElem, 0, 0, 51},
    {refalrts::icSpliceSTVar, 0, 0, 50},
    {refalrts::icSpliceElem, 0, 0, 49},
    {refalrts::icSpliceEVar, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 48},
    {refalrts::icSpliceEVar, 0, 0, 27},
    {refalrts::icLinkBrackets, 41, 47, 0},
    {refalrts::icSpliceElem, 0, 0, 47},
    {refalrts::icSpliceEVar, 0, 0, 11},
    {refalrts::icLinkBrackets, 43, 46, 0},
    {refalrts::icSpliceElem, 0, 0, 46},
    {refalrts::icSpliceSTVar, 0, 0, 45},
    {refalrts::icSpliceEVar, 0, 0, 13},
    {refalrts::icSpliceSTVar, 0, 0, 21},
    {refalrts::icSpliceElem, 0, 0, 44},
    {refalrts::icSpliceElem, 0, 0, 43},
    {refalrts::icSpliceElem, 0, 0, 42},
    {refalrts::icSpliceElem, 0, 0, 41},
    {refalrts::icLinkBrackets, 38, 40, 0},
    {refalrts::icSpliceElem, 0, 0, 40},
    {refalrts::icSpliceEVar, 0, 0, 9},
    {refalrts::icSpliceSTVar, 0, 0, 15},
    {refalrts::icSpliceElem, 0, 0, 39},
    {refalrts::icSpliceElem, 0, 0, 38},
    {refalrts::icSpliceEVar, 0, 0, 7},
    {refalrts::icPushStack, 0, 0, 37},
    {refalrts::icPushStack, 0, 0, 35},
    {refalrts::icSpliceElem, 0, 0, 37},
    {refalrts::icSpliceSTVar, 0, 0, 16},
    {refalrts::icSpliceSTVar, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 36},
    {refalrts::icSpliceElem, 0, 0, 35},
    {refalrts::icSpliceElem, 0, 0, 34},
    {refalrts::icSpliceElem, 0, 0, 33},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +112, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // s.ContextOffset#1/6 e.Ranges_B#1/7 ( # Junk e.Junk1#1/9 ) ( # Range s.Num#1/17 ( # TkVariable 'e' e.Index#1/15 ) ) ( # Junk e.Junk2#1/13 ) e.Ranges_E#1/18 ( e.Vars#1/4 ) ( e.Commands#1/2 )
    {refalrts::icBracketRight, 0, 2, 0},
    {refalrts::icBracketRight, 0, 4, 0},
    // closed e.Vars#1 as range 4
    // closed e.Commands#1 as range 2
    {refalrts::icsVarLeft, 0, 6, 0},
    {refalrts::icEPrepare, 0, 7, 0},
    {refalrts::icEStart, 0, 7, 0},
    {refalrts::icSave, 0, 18, 0},
    {refalrts::icBracketLeft, 0, 9, 18},
    {refalrts::icIdentLeft, 0, 0, 9},
    {refalrts::icBracketLeft, 0, 11, 18},
    {refalrts::icIdentLeft, 0, 3, 11},
    {refalrts::icBracketLeft, 0, 13, 18},
    {refalrts::icIdentLeft, 0, 0, 13},
    {refalrts::icBracketRight, 0, 15, 11},
    {refalrts::icIdentLeft, 0, 4, 15},
    {refalrts::icCharLeft, 0, static_cast<unsigned char>('e'), 15},
    // closed e.Junk1#1 as range 9
    // closed e.Index#1 as range 15
    // closed e.Junk2#1 as range 13
    // closed e.Ranges_E#1 as range 0
    {refalrts::icsVarLeft, 0, 17, 11},
    {refalrts::icEmpty, 0, 0, 11},
    //2: e.Commands#1
    //4: e.Vars#1
    //6: s.ContextOffset#1
    //7: e.Ranges_B#1
    //9: e.Junk1#1
    //13: e.Junk2#1
    //15: e.Index#1
    //17: s.Num#1
    //18: e.Ranges_E#1
    //33: e.Index#1
    //36: s.Num#1
    //47: e.Index#1
    //54: s.Num#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 20},
    {refalrts::icFunc, 0, 1, 21},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 22},
    {refalrts::icIdent, 0, 0, 23},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 24},
    {refalrts::icIdent, 0, 4, 25},
    {refalrts::icChar, 0, 'e', 26},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 27},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 28},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 29},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 30},
    {refalrts::icChar, 0, 'e', 31},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 32},
    {refalrts::icCopyEVar, 33, 15, 0},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 35},
    {refalrts::icCopySTVar, 36, 17, 0},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 37},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 38},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 39},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 40},
    {refalrts::icIdent, 0, 7, 41},
    {refalrts::icString, 0, 1, 42},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 44},
    {refalrts::icFunc, 0, 4, 45},
    {refalrts::icChar, 0, 'e', 46},
    {refalrts::icCopyEVar, 47, 33, 0},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 49},
    {refalrts::icString, 0, 0, 50},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 52},
    {refalrts::icFunc, 0, 3, 53},
    {refalrts::icCopySTVar, 54, 36, 0},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 55},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 56},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 57},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 58},
    {refalrts::icPushStack, 0, 0, 58},
    {refalrts::icPushStack, 0, 0, 20},
    {refalrts::icSpliceElem, 0, 0, 58},
    {refalrts::icLinkBrackets, 39, 57, 0},
    {refalrts::icSpliceElem, 0, 0, 57},
    {refalrts::icLinkBrackets, 40, 56, 0},
    {refalrts::icSpliceElem, 0, 0, 56},
    {refalrts::icPushStack, 0, 0, 55},
    {refalrts::icPushStack, 0, 0, 52},
    {refalrts::icSpliceElem, 0, 0, 55},
    {refalrts::icSpliceSTVar, 0, 0, 54},
    {refalrts::icSpliceElem, 0, 0, 53},
    {refalrts::icSpliceElem, 0, 0, 52},
    {refalrts::icSpliceRange, 0, 0, 50},
    {refalrts::icPushStack, 0, 0, 49},
    {refalrts::icPushStack, 0, 0, 44},
    {refalrts::icSpliceElem, 0, 0, 49},
    {refalrts::icSpliceEVar, 0, 0, 47},
    {refalrts::icSpliceElem, 0, 0, 46},
    {refalrts::icSpliceElem, 0, 0, 45},
    {refalrts::icSpliceElem, 0, 0, 44},
    {refalrts::icSpliceRange, 0, 0, 42},
    {refalrts::icSpliceElem, 0, 0, 41},
    {refalrts::icSpliceElem, 0, 0, 40},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 39},
    {refalrts::icLinkBrackets, 29, 38, 0},
    {refalrts::icSpliceElem, 0, 0, 38},
    {refalrts::icLinkBrackets, 30, 37, 0},
    {refalrts::icSpliceElem, 0, 0, 37},
    {refalrts::icSpliceSTVar, 0, 0, 36},
    {refalrts::icLinkBrackets, 32, 35, 0},
    {refalrts::icSpliceElem, 0, 0, 35},
    {refalrts::icSpliceEVar, 0, 0, 33},
    {refalrts::icSpliceElem, 0, 0, 32},
    {refalrts::icSpliceElem, 0, 0, 31},
    {refalrts::icSpliceElem, 0, 0, 30},
    {refalrts::icSpliceEVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 29},
    {refalrts::icSpliceEVar, 0, 0, 18},
    {refalrts::icLinkBrackets, 22, 28, 0},
    {refalrts::icSpliceElem, 0, 0, 28},
    {refalrts::icSpliceEVar, 0, 0, 13},
    {refalrts::icLinkBrackets, 24, 27, 0},
    {refalrts::icSpliceElem, 0, 0, 27},
    {refalrts::icSpliceSTVar, 0, 0, 17},
    {refalrts::icSpliceEVar, 0, 0, 15},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icSpliceEVar, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceEVar, 0, 0, 7},
    {refalrts::icSpliceSTVar, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +108, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // s.ContextOffset#1/6 e.Ranges_B#1/7 ( # Junk e.Junk#1/9 ) ( # Range s.Num#1/13 ( # TkVariable 's' e.Index#1/14 ) e.Range#1/11 ) e.Ranges_E#1/16 ( e.Vars#1/4 ) ( e.Commands#1/2 )
    {refalrts::icBracketRight, 0, 2, 0},
    {refalrts::icBracketRight, 0, 4, 0},
    // closed e.Vars#1 as range 4
    // closed e.Commands#1 as range 2
    {refalrts::icsVarLeft, 0, 6, 0},
    {refalrts::icEPrepare, 0, 7, 0},
    {refalrts::icEStart, 0, 7, 0},
    {refalrts::icSave, 0, 16, 0},
    {refalrts::icBracketLeft, 0, 9, 16},
    {refalrts::icIdentLeft, 0, 0, 9},
    {refalrts::icBracketLeft, 0, 11, 16},
    {refalrts::icIdentLeft, 0, 3, 11},
    // closed e.Junk#1 as range 9
    // closed e.Ranges_E#1 as range 0
    {refalrts::icsVarLeft, 0, 13, 11},
    {refalrts::icBracketLeft, 0, 14, 11},
    {refalrts::icIdentLeft, 0, 4, 14},
    {refalrts::icCharLeft, 0, static_cast<unsigned char>('s'), 14},
    // closed e.Index#1 as range 14
    // closed e.Range#1 as range 11
    //2: e.Commands#1
    //4: e.Vars#1
    //6: s.ContextOffset#1
    //7: e.Ranges_B#1
    //9: e.Junk#1
    //11: e.Range#1
    //13: s.Num#1
    //14: e.Index#1
    //16: e.Ranges_E#1
    //28: s.ContextOffset#1
    //38: e.Index#1
    //41: s.ContextOffset#1
    //48: s.Num#1
    //50: s.ContextOffset#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 18},
    {refalrts::icFunc, 0, 1, 19},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 20},
    {refalrts::icFunc, 0, 2, 21},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 22},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 23},
    {refalrts::icIdent, 0, 0, 24},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 25},
    {refalrts::icIdent, 0, 4, 26},
    {refalrts::icChar, 0, 's', 27},
    {refalrts::icCopySTVar, 28, 6, 0},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 29},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 30},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 31},
    {refalrts::icIdent, 0, 3, 32},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 33},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 34},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 35},
    {refalrts::icChar, 0, 's', 36},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 37},
    {refalrts::icCopyEVar, 38, 14, 0},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 40},
    {refalrts::icCopySTVar, 41, 28, 0},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 42},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 43},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 44},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 45},
    {refalrts::icIdent, 0, 6, 46},
    {refalrts::icIdent, 0, 1, 47},
    {refalrts::icCopySTVar, 48, 13, 0},
    {refalrts::icChar, 0, 's', 49},
    {refalrts::icCopySTVar, 50, 41, 0},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 51},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 52},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 53},
    {refalrts::icPushStack, 0, 0, 53},
    {refalrts::icPushStack, 0, 0, 18},
    {refalrts::icSpliceElem, 0, 0, 53},
    {refalrts::icLinkBrackets, 44, 52, 0},
    {refalrts::icSpliceElem, 0, 0, 52},
    {refalrts::icLinkBrackets, 45, 51, 0},
    {refalrts::icSpliceElem, 0, 0, 51},
    {refalrts::icSpliceSTVar, 0, 0, 50},
    {refalrts::icSpliceElem, 0, 0, 49},
    {refalrts::icSpliceSTVar, 0, 0, 48},
    {refalrts::icSpliceElem, 0, 0, 47},
    {refalrts::icSpliceElem, 0, 0, 46},
    {refalrts::icSpliceElem, 0, 0, 45},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 44},
    {refalrts::icLinkBrackets, 34, 43, 0},
    {refalrts::icSpliceElem, 0, 0, 43},
    {refalrts::icLinkBrackets, 35, 42, 0},
    {refalrts::icSpliceElem, 0, 0, 42},
    {refalrts::icSpliceSTVar, 0, 0, 41},
    {refalrts::icLinkBrackets, 37, 40, 0},
    {refalrts::icSpliceElem, 0, 0, 40},
    {refalrts::icSpliceEVar, 0, 0, 38},
    {refalrts::icSpliceElem, 0, 0, 37},
    {refalrts::icSpliceElem, 0, 0, 36},
    {refalrts::icSpliceElem, 0, 0, 35},
    {refalrts::icSpliceEVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 34},
    {refalrts::icSpliceEVar, 0, 0, 16},
    {refalrts::icLinkBrackets, 31, 33, 0},
    {refalrts::icSpliceElem, 0, 0, 33},
    {refalrts::icSpliceEVar, 0, 0, 11},
    {refalrts::icSpliceSTVar, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 32},
    {refalrts::icSpliceElem, 0, 0, 31},
    {refalrts::icLinkBrackets, 23, 30, 0},
    {refalrts::icSpliceElem, 0, 0, 30},
    {refalrts::icLinkBrackets, 25, 29, 0},
    {refalrts::icSpliceElem, 0, 0, 29},
    {refalrts::icSpliceSTVar, 0, 0, 28},
    {refalrts::icSpliceEVar, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 27},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icSpliceEVar, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icSpliceEVar, 0, 0, 7},
    {refalrts::icPushStack, 0, 0, 22},
    {refalrts::icPushStack, 0, 0, 20},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceSTVar, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +108, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // s.ContextOffset#1/6 e.Ranges_B#1/7 ( # Junk e.Junk#1/9 ) ( # Range s.Num#1/13 ( # TkVariable 't' e.Index#1/14 ) e.Range#1/11 ) e.Ranges_E#1/16 ( e.Vars#1/4 ) ( e.Commands#1/2 )
    {refalrts::icBracketRight, 0, 2, 0},
    {refalrts::icBracketRight, 0, 4, 0},
    // closed e.Vars#1 as range 4
    // closed e.Commands#1 as range 2
    {refalrts::icsVarLeft, 0, 6, 0},
    {refalrts::icEPrepare, 0, 7, 0},
    {refalrts::icEStart, 0, 7, 0},
    {refalrts::icSave, 0, 16, 0},
    {refalrts::icBracketLeft, 0, 9, 16},
    {refalrts::icIdentLeft, 0, 0, 9},
    {refalrts::icBracketLeft, 0, 11, 16},
    {refalrts::icIdentLeft, 0, 3, 11},
    // closed e.Junk#1 as range 9
    // closed e.Ranges_E#1 as range 0
    {refalrts::icsVarLeft, 0, 13, 11},
    {refalrts::icBracketLeft, 0, 14, 11},
    {refalrts::icIdentLeft, 0, 4, 14},
    {refalrts::icCharLeft, 0, static_cast<unsigned char>('t'), 14},
    // closed e.Index#1 as range 14
    // closed e.Range#1 as range 11
    //2: e.Commands#1
    //4: e.Vars#1
    //6: s.ContextOffset#1
    //7: e.Ranges_B#1
    //9: e.Junk#1
    //11: e.Range#1
    //13: s.Num#1
    //14: e.Index#1
    //16: e.Ranges_E#1
    //28: s.ContextOffset#1
    //38: e.Index#1
    //41: s.ContextOffset#1
    //48: s.Num#1
    //50: s.ContextOffset#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 18},
    {refalrts::icFunc, 0, 1, 19},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 20},
    {refalrts::icFunc, 0, 2, 21},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 22},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 23},
    {refalrts::icIdent, 0, 0, 24},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 25},
    {refalrts::icIdent, 0, 4, 26},
    {refalrts::icChar, 0, 't', 27},
    {refalrts::icCopySTVar, 28, 6, 0},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 29},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 30},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 31},
    {refalrts::icIdent, 0, 3, 32},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 33},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 34},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 35},
    {refalrts::icChar, 0, 't', 36},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 37},
    {refalrts::icCopyEVar, 38, 14, 0},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 40},
    {refalrts::icCopySTVar, 41, 28, 0},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 42},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 43},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 44},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 45},
    {refalrts::icIdent, 0, 6, 46},
    {refalrts::icIdent, 0, 1, 47},
    {refalrts::icCopySTVar, 48, 13, 0},
    {refalrts::icChar, 0, 't', 49},
    {refalrts::icCopySTVar, 50, 41, 0},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 51},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 52},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 53},
    {refalrts::icPushStack, 0, 0, 53},
    {refalrts::icPushStack, 0, 0, 18},
    {refalrts::icSpliceElem, 0, 0, 53},
    {refalrts::icLinkBrackets, 44, 52, 0},
    {refalrts::icSpliceElem, 0, 0, 52},
    {refalrts::icLinkBrackets, 45, 51, 0},
    {refalrts::icSpliceElem, 0, 0, 51},
    {refalrts::icSpliceSTVar, 0, 0, 50},
    {refalrts::icSpliceElem, 0, 0, 49},
    {refalrts::icSpliceSTVar, 0, 0, 48},
    {refalrts::icSpliceElem, 0, 0, 47},
    {refalrts::icSpliceElem, 0, 0, 46},
    {refalrts::icSpliceElem, 0, 0, 45},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 44},
    {refalrts::icLinkBrackets, 34, 43, 0},
    {refalrts::icSpliceElem, 0, 0, 43},
    {refalrts::icLinkBrackets, 35, 42, 0},
    {refalrts::icSpliceElem, 0, 0, 42},
    {refalrts::icSpliceSTVar, 0, 0, 41},
    {refalrts::icLinkBrackets, 37, 40, 0},
    {refalrts::icSpliceElem, 0, 0, 40},
    {refalrts::icSpliceEVar, 0, 0, 38},
    {refalrts::icSpliceElem, 0, 0, 37},
    {refalrts::icSpliceElem, 0, 0, 36},
    {refalrts::icSpliceElem, 0, 0, 35},
    {refalrts::icSpliceEVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 34},
    {refalrts::icSpliceEVar, 0, 0, 16},
    {refalrts::icLinkBrackets, 31, 33, 0},
    {refalrts::icSpliceElem, 0, 0, 33},
    {refalrts::icSpliceEVar, 0, 0, 11},
    {refalrts::icSpliceSTVar, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 32},
    {refalrts::icSpliceElem, 0, 0, 31},
    {refalrts::icLinkBrackets, 23, 30, 0},
    {refalrts::icSpliceElem, 0, 0, 30},
    {refalrts::icLinkBrackets, 25, 29, 0},
    {refalrts::icSpliceElem, 0, 0, 29},
    {refalrts::icSpliceSTVar, 0, 0, 28},
    {refalrts::icSpliceEVar, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 27},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icSpliceEVar, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icSpliceEVar, 0, 0, 7},
    {refalrts::icPushStack, 0, 0, 22},
    {refalrts::icPushStack, 0, 0, 20},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceSTVar, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +108, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // s.ContextOffset#1/6 e.Ranges_B#1/7 ( # Range s.Num#1/15 e.Range#1/9 ( # TkVariable 's' e.Index#1/13 ) ) ( # Junk e.Junk#1/11 ) e.Ranges_E#1/16 ( e.Vars#1/4 ) ( e.Commands#1/2 )
    {refalrts::icBracketRight, 0, 2, 0},
    {refalrts::icBracketRight, 0, 4, 0},
    // closed e.Vars#1 as range 4
    // closed e.Commands#1 as range 2
    {refalrts::icsVarLeft, 0, 6, 0},
    {refalrts::icEPrepare, 0, 7, 0},
    {refalrts::icEStart, 0, 7, 0},
    {refalrts::icSave, 0, 16, 0},
    {refalrts::icBracketLeft, 0, 9, 16},
    {refalrts::icIdentLeft, 0, 3, 9},
    {refalrts::icBracketLeft, 0, 11, 16},
    {refalrts::icIdentLeft, 0, 0, 11},
    {refalrts::icBracketRight, 0, 13, 9},
    {refalrts::icIdentLeft, 0, 4, 13},
    {refalrts::icCharLeft, 0, static_cast<unsigned char>('s'), 13},
    // closed e.Index#1 as range 13
    // closed e.Junk#1 as range 11
    // closed e.Ranges_E#1 as range 0
    {refalrts::icsVarLeft, 0, 15, 9},
    // closed e.Range#1 as range 9
    //2: e.Commands#1
    //4: e.Vars#1
    //6: s.ContextOffset#1
    //7: e.Ranges_B#1
    //9: e.Range#1
    //11: e.Junk#1
    //13: e.Index#1
    //15: s.Num#1
    //16: e.Ranges_E#1
    //31: s.ContextOffset#1
    //38: e.Index#1
    //41: s.ContextOffset#1
    //48: s.Num#1
    //50: s.ContextOffset#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 18},
    {refalrts::icFunc, 0, 1, 19},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 20},
    {refalrts::icFunc, 0, 2, 21},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 22},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 23},
    {refalrts::icIdent, 0, 3, 24},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 25},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 26},
    {refalrts::icIdent, 0, 0, 27},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 28},
    {refalrts::icIdent, 0, 4, 29},
    {refalrts::icChar, 0, 's', 30},
    {refalrts::icCopySTVar, 31, 6, 0},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 32},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 33},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 34},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 35},
    {refalrts::icChar, 0, 's', 36},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 37},
    {refalrts::icCopyEVar, 38, 13, 0},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 40},
    {refalrts::icCopySTVar, 41, 31, 0},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 42},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 43},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 44},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 45},
    {refalrts::icIdent, 0, 6, 46},
    {refalrts::icIdent, 0, 5, 47},
    {refalrts::icCopySTVar, 48, 15, 0},
    {refalrts::icChar, 0, 's', 49},
    {refalrts::icCopySTVar, 50, 41, 0},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 51},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 52},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 53},
    {refalrts::icPushStack, 0, 0, 53},
    {refalrts::icPushStack, 0, 0, 18},
    {refalrts::icSpliceElem, 0, 0, 53},
    {refalrts::icLinkBrackets, 44, 52, 0},
    {refalrts::icSpliceElem, 0, 0, 52},
    {refalrts::icLinkBrackets, 45, 51, 0},
    {refalrts::icSpliceElem, 0, 0, 51},
    {refalrts::icSpliceSTVar, 0, 0, 50},
    {refalrts::icSpliceElem, 0, 0, 49},
    {refalrts::icSpliceSTVar, 0, 0, 48},
    {refalrts::icSpliceElem, 0, 0, 47},
    {refalrts::icSpliceElem, 0, 0, 46},
    {refalrts::icSpliceElem, 0, 0, 45},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 44},
    {refalrts::icLinkBrackets, 34, 43, 0},
    {refalrts::icSpliceElem, 0, 0, 43},
    {refalrts::icLinkBrackets, 35, 42, 0},
    {refalrts::icSpliceElem, 0, 0, 42},
    {refalrts::icSpliceSTVar, 0, 0, 41},
    {refalrts::icLinkBrackets, 37, 40, 0},
    {refalrts::icSpliceElem, 0, 0, 40},
    {refalrts::icSpliceEVar, 0, 0, 38},
    {refalrts::icSpliceElem, 0, 0, 37},
    {refalrts::icSpliceElem, 0, 0, 36},
    {refalrts::icSpliceElem, 0, 0, 35},
    {refalrts::icSpliceEVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 34},
    {refalrts::icSpliceEVar, 0, 0, 16},
    {refalrts::icLinkBrackets, 26, 33, 0},
    {refalrts::icSpliceElem, 0, 0, 33},
    {refalrts::icSpliceEVar, 0, 0, 11},
    {refalrts::icLinkBrackets, 28, 32, 0},
    {refalrts::icSpliceElem, 0, 0, 32},
    {refalrts::icSpliceSTVar, 0, 0, 31},
    {refalrts::icSpliceEVar, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 30},
    {refalrts::icSpliceElem, 0, 0, 29},
    {refalrts::icSpliceElem, 0, 0, 28},
    {refalrts::icSpliceElem, 0, 0, 27},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icLinkBrackets, 23, 25, 0},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icSpliceEVar, 0, 0, 9},
    {refalrts::icSpliceSTVar, 0, 0, 15},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icSpliceEVar, 0, 0, 7},
    {refalrts::icPushStack, 0, 0, 22},
    {refalrts::icPushStack, 0, 0, 20},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceSTVar, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +108, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // s.ContextOffset#1/6 e.Ranges_B#1/7 ( # Range s.Num#1/15 e.Range#1/9 ( # TkVariable 't' e.Index#1/13 ) ) ( # Junk e.Junk#1/11 ) e.Ranges_E#1/16 ( e.Vars#1/4 ) ( e.Commands#1/2 )
    {refalrts::icBracketRight, 0, 2, 0},
    {refalrts::icBracketRight, 0, 4, 0},
    // closed e.Vars#1 as range 4
    // closed e.Commands#1 as range 2
    {refalrts::icsVarLeft, 0, 6, 0},
    {refalrts::icEPrepare, 0, 7, 0},
    {refalrts::icEStart, 0, 7, 0},
    {refalrts::icSave, 0, 16, 0},
    {refalrts::icBracketLeft, 0, 9, 16},
    {refalrts::icIdentLeft, 0, 3, 9},
    {refalrts::icBracketLeft, 0, 11, 16},
    {refalrts::icIdentLeft, 0, 0, 11},
    {refalrts::icBracketRight, 0, 13, 9},
    {refalrts::icIdentLeft, 0, 4, 13},
    {refalrts::icCharLeft, 0, static_cast<unsigned char>('t'), 13},
    // closed e.Index#1 as range 13
    // closed e.Junk#1 as range 11
    // closed e.Ranges_E#1 as range 0
    {refalrts::icsVarLeft, 0, 15, 9},
    // closed e.Range#1 as range 9
    //2: e.Commands#1
    //4: e.Vars#1
    //6: s.ContextOffset#1
    //7: e.Ranges_B#1
    //9: e.Range#1
    //11: e.Junk#1
    //13: e.Index#1
    //15: s.Num#1
    //16: e.Ranges_E#1
    //31: s.ContextOffset#1
    //38: e.Index#1
    //41: s.ContextOffset#1
    //48: s.Num#1
    //50: s.ContextOffset#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 18},
    {refalrts::icFunc, 0, 1, 19},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 20},
    {refalrts::icFunc, 0, 2, 21},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 22},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 23},
    {refalrts::icIdent, 0, 3, 24},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 25},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 26},
    {refalrts::icIdent, 0, 0, 27},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 28},
    {refalrts::icIdent, 0, 4, 29},
    {refalrts::icChar, 0, 't', 30},
    {refalrts::icCopySTVar, 31, 6, 0},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 32},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 33},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 34},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 35},
    {refalrts::icChar, 0, 't', 36},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 37},
    {refalrts::icCopyEVar, 38, 13, 0},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 40},
    {refalrts::icCopySTVar, 41, 31, 0},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 42},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 43},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 44},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 45},
    {refalrts::icIdent, 0, 6, 46},
    {refalrts::icIdent, 0, 5, 47},
    {refalrts::icCopySTVar, 48, 15, 0},
    {refalrts::icChar, 0, 't', 49},
    {refalrts::icCopySTVar, 50, 41, 0},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 51},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 52},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 53},
    {refalrts::icPushStack, 0, 0, 53},
    {refalrts::icPushStack, 0, 0, 18},
    {refalrts::icSpliceElem, 0, 0, 53},
    {refalrts::icLinkBrackets, 44, 52, 0},
    {refalrts::icSpliceElem, 0, 0, 52},
    {refalrts::icLinkBrackets, 45, 51, 0},
    {refalrts::icSpliceElem, 0, 0, 51},
    {refalrts::icSpliceSTVar, 0, 0, 50},
    {refalrts::icSpliceElem, 0, 0, 49},
    {refalrts::icSpliceSTVar, 0, 0, 48},
    {refalrts::icSpliceElem, 0, 0, 47},
    {refalrts::icSpliceElem, 0, 0, 46},
    {refalrts::icSpliceElem, 0, 0, 45},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 44},
    {refalrts::icLinkBrackets, 34, 43, 0},
    {refalrts::icSpliceElem, 0, 0, 43},
    {refalrts::icLinkBrackets, 35, 42, 0},
    {refalrts::icSpliceElem, 0, 0, 42},
    {refalrts::icSpliceSTVar, 0, 0, 41},
    {refalrts::icLinkBrackets, 37, 40, 0},
    {refalrts::icSpliceElem, 0, 0, 40},
    {refalrts::icSpliceEVar, 0, 0, 38},
    {refalrts::icSpliceElem, 0, 0, 37},
    {refalrts::icSpliceElem, 0, 0, 36},
    {refalrts::icSpliceElem, 0, 0, 35},
    {refalrts::icSpliceEVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 34},
    {refalrts::icSpliceEVar, 0, 0, 16},
    {refalrts::icLinkBrackets, 26, 33, 0},
    {refalrts::icSpliceElem, 0, 0, 33},
    {refalrts::icSpliceEVar, 0, 0, 11},
    {refalrts::icLinkBrackets, 28, 32, 0},
    {refalrts::icSpliceElem, 0, 0, 32},
    {refalrts::icSpliceSTVar, 0, 0, 31},
    {refalrts::icSpliceEVar, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 30},
    {refalrts::icSpliceElem, 0, 0, 29},
    {refalrts::icSpliceElem, 0, 0, 28},
    {refalrts::icSpliceElem, 0, 0, 27},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icLinkBrackets, 23, 25, 0},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icSpliceEVar, 0, 0, 9},
    {refalrts::icSpliceSTVar, 0, 0, 15},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icSpliceEVar, 0, 0, 7},
    {refalrts::icPushStack, 0, 0, 22},
    {refalrts::icPushStack, 0, 0, 20},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceSTVar, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +106, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // s.ContextOffset#1/6 e.Ranges_B#1/7 ( # Junk e.Junk#1/9 ) ( # Range s.Num#1/13 ( # TkVariable 'e' e.Index#1/14 ) e.Range#1/11 ) e.Ranges_E#1/16 ( e.Vars#1/4 ) ( e.Commands#1/2 )
    {refalrts::icBracketRight, 0, 2, 0},
    {refalrts::icBracketRight, 0, 4, 0},
    // closed e.Vars#1 as range 4
    // closed e.Commands#1 as range 2
    {refalrts::icsVarLeft, 0, 6, 0},
    {refalrts::icEPrepare, 0, 7, 0},
    {refalrts::icEStart, 0, 7, 0},
    {refalrts::icSave, 0, 16, 0},
    {refalrts::icBracketLeft, 0, 9, 16},
    {refalrts::icIdentLeft, 0, 0, 9},
    {refalrts::icBracketLeft, 0, 11, 16},
    {refalrts::icIdentLeft, 0, 3, 11},
    // closed e.Junk#1 as range 9
    // closed e.Ranges_E#1 as range 0
    {refalrts::icsVarLeft, 0, 13, 11},
    {refalrts::icBracketLeft, 0, 14, 11},
    {refalrts::icIdentLeft, 0, 4, 14},
    {refalrts::icCharLeft, 0, static_cast<unsigned char>('e'), 14},
    // closed e.Index#1 as range 14
    // closed e.Range#1 as range 11
    //2: e.Commands#1
    //4: e.Vars#1
    //6: s.ContextOffset#1
    //7: e.Ranges_B#1
    //9: e.Junk#1
    //11: e.Range#1
    //13: s.Num#1
    //14: e.Index#1
    //16: e.Ranges_E#1
    //28: s.ContextOffset#1
    //38: e.Index#1
    //41: s.ContextOffset#1
    //48: s.Num#1
    //49: s.ContextOffset#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 18},
    {refalrts::icFunc, 0, 1, 19},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 20},
    {refalrts::icFunc, 0, 0, 21},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 22},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 23},
    {refalrts::icIdent, 0, 0, 24},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 25},
    {refalrts::icIdent, 0, 4, 26},
    {refalrts::icChar, 0, 'e', 27},
    {refalrts::icCopySTVar, 28, 6, 0},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 29},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 30},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 31},
    {refalrts::icIdent, 0, 3, 32},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 33},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 34},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 35},
    {refalrts::icChar, 0, 'e', 36},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 37},
    {refalrts::icCopyEVar, 38, 14, 0},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 40},
    {refalrts::icCopySTVar, 41, 28, 0},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 42},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 43},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 44},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 45},
    {refalrts::icIdent, 0, 2, 46},
    {refalrts::icIdent, 0, 1, 47},
    {refalrts::icCopySTVar, 48, 13, 0},
    {refalrts::icCopySTVar, 49, 41, 0},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 50},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 51},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 52},
    {refalrts::icPushStack, 0, 0, 52},
    {refalrts::icPushStack, 0, 0, 18},
    {refalrts::icSpliceElem, 0, 0, 52},
    {refalrts::icLinkBrackets, 44, 51, 0},
    {refalrts::icSpliceElem, 0, 0, 51},
    {refalrts::icLinkBrackets, 45, 50, 0},
    {refalrts::icSpliceElem, 0, 0, 50},
    {refalrts::icSpliceSTVar, 0, 0, 49},
    {refalrts::icSpliceSTVar, 0, 0, 48},
    {refalrts::icSpliceElem, 0, 0, 47},
    {refalrts::icSpliceElem, 0, 0, 46},
    {refalrts::icSpliceElem, 0, 0, 45},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 44},
    {refalrts::icLinkBrackets, 34, 43, 0},
    {refalrts::icSpliceElem, 0, 0, 43},
    {refalrts::icLinkBrackets, 35, 42, 0},
    {refalrts::icSpliceElem, 0, 0, 42},
    {refalrts::icSpliceSTVar, 0, 0, 41},
    {refalrts::icLinkBrackets, 37, 40, 0},
    {refalrts::icSpliceElem, 0, 0, 40},
    {refalrts::icSpliceEVar, 0, 0, 38},
    {refalrts::icSpliceElem, 0, 0, 37},
    {refalrts::icSpliceElem, 0, 0, 36},
    {refalrts::icSpliceElem, 0, 0, 35},
    {refalrts::icSpliceEVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 34},
    {refalrts::icSpliceEVar, 0, 0, 16},
    {refalrts::icLinkBrackets, 31, 33, 0},
    {refalrts::icSpliceElem, 0, 0, 33},
    {refalrts::icSpliceEVar, 0, 0, 11},
    {refalrts::icSpliceSTVar, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 32},
    {refalrts::icSpliceElem, 0, 0, 31},
    {refalrts::icLinkBrackets, 23, 30, 0},
    {refalrts::icSpliceElem, 0, 0, 30},
    {refalrts::icLinkBrackets, 25, 29, 0},
    {refalrts::icSpliceElem, 0, 0, 29},
    {refalrts::icSpliceSTVar, 0, 0, 28},
    {refalrts::icSpliceEVar, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 27},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icSpliceEVar, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icSpliceEVar, 0, 0, 7},
    {refalrts::icPushStack, 0, 0, 22},
    {refalrts::icPushStack, 0, 0, 20},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceSTVar, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // s.ContextOffset#1/8 ( # Junk e.MarkedPattern#1/6 ) ( e.Vars#1/4 ) ( e.Commands#1/2 )
    {refalrts::icBracketRight, 0, 2, 0},
    {refalrts::icBracketRight, 0, 4, 0},
    {refalrts::icBracketRight, 0, 6, 0},
    {refalrts::icIdentLeft, 0, 0, 6},
    // closed e.MarkedPattern#1 as range 6
    // closed e.Vars#1 as range 4
    // closed e.Commands#1 as range 2
    {refalrts::icsVarLeft, 0, 8, 0},
    {refalrts::icEmpty, 0, 0, 0},
    //2: e.Commands#1
    //4: e.Vars#1
    //6: e.MarkedPattern#1
    //8: s.ContextOffset#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 9},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 10},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 11},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 12},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icLinkBrackets, 11, 12, 0},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceEVar, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icLinkBrackets, 9, 10, 0},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceEVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceSTVar, 0, 0, 8},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[44];
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
    // s.ContextOffset#1/6 e.Ranges_B#1/7 ( # Junk e.Junk#1/9 ) ( # Range s.Num#1/13 ( # TkChar s.Char#1/16 ) e.Range#1/11 ) e.Ranges_E#1/17 ( e.Vars#1/4 ) ( e.Commands#1/2 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_right( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_right( context[4], context[5], context[0], context[1] ) )
      continue;
    // closed e.Vars#1 as range 4
    // closed e.Commands#1 as range 2
    if( ! refalrts::svar_left( context[6], context[0], context[1] ) )
      continue;
    context[7] = 0;
    context[8] = 0;
    refalrts::start_e_loop();
    do {
      context[17] = context[0];
      context[18] = context[1];
      context[9] = 0;
      context[10] = 0;
      if( ! refalrts::brackets_left( context[9], context[10], context[17], context[18] ) )
        continue;
      if( ! refalrts::ident_left(  & ident_Junk<int>::name, context[9], context[10] ) )
        continue;
      context[11] = 0;
      context[12] = 0;
      if( ! refalrts::brackets_left( context[11], context[12], context[17], context[18] ) )
        continue;
      if( ! refalrts::ident_left(  & ident_Range<int>::name, context[11], context[12] ) )
        continue;
      // closed e.Junk#1 as range 9
      // closed e.Ranges_E#1 as range 0
      if( ! refalrts::svar_left( context[13], context[11], context[12] ) )
        continue;
      context[14] = 0;
      context[15] = 0;
      if( ! refalrts::brackets_left( context[14], context[15], context[11], context[12] ) )
        continue;
      if( ! refalrts::ident_left(  & ident_TkChar<int>::name, context[14], context[15] ) )
        continue;
      // closed e.Range#1 as range 11
      if( ! refalrts::svar_left( context[16], context[14], context[15] ) )
        continue;
      if( ! refalrts::empty_seq( context[14], context[15] ) )
        continue;
      //2: e.Commands#1
      //4: e.Vars#1
      //6: s.ContextOffset#1
      //7: e.Ranges_B#1
      //9: e.Junk#1
      //11: e.Range#1
      //13: s.Num#1
      //16: s.Char#1
      //17: e.Ranges_E#1
      //36: s.Num#1
      //37: s.Char#1

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::alloc_open_call( context[19] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[20], DoGenPattern, "DoGenPattern" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[21] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[22], & ident_Junk<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[23] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[24], & ident_TkChar<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[25] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[26] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[27] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[28], & ident_Range<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[29] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[30] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[31] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[32] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[33] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[34], & ident_CmdChar<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[35], & ident_AlgLeft<int>::name ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[36], context[13]))
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[37], context[16]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[38] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[39] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[40] ) )
        return refalrts::cNoMemory;
      refalrts::push_stack( context[40] );
      refalrts::push_stack( context[19] );
      res = refalrts::splice_elem( res, context[40] );
      refalrts::link_brackets( context[32], context[39] );
      res = refalrts::splice_elem( res, context[39] );
      refalrts::link_brackets( context[33], context[38] );
      res = refalrts::splice_elem( res, context[38] );
      res = refalrts::splice_stvar( res, context[37] );
      res = refalrts::splice_stvar( res, context[36] );
      res = refalrts::splice_elem( res, context[35] );
      res = refalrts::splice_elem( res, context[34] );
      res = refalrts::splice_elem( res, context[33] );
      res = refalrts::splice_evar( res, context[2], context[3] );
      res = refalrts::splice_elem( res, context[32] );
      refalrts::link_brackets( context[30], context[31] );
      res = refalrts::splice_elem( res, context[31] );
      res = refalrts::splice_evar( res, context[4], context[5] );
      res = refalrts::splice_elem( res, context[30] );
      res = refalrts::splice_evar( res, context[17], context[18] );
      refalrts::link_brackets( context[27], context[29] );
      res = refalrts::splice_elem( res, context[29] );
      res = refalrts::splice_evar( res, context[11], context[12] );
      res = refalrts::splice_stvar( res, context[13] );
      res = refalrts::splice_elem( res, context[28] );
      res = refalrts::splice_elem( res, context[27] );
      refalrts::link_brackets( context[21], context[26] );
      res = refalrts::splice_elem( res, context[26] );
      refalrts::link_brackets( context[23], context[25] );
      res = refalrts::splice_elem( res, context[25] );
      res = refalrts::splice_stvar( res, context[16] );
      res = refalrts::splice_elem( res, context[24] );
      res = refalrts::splice_elem( res, context[23] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      res = refalrts::splice_elem( res, context[22] );
      res = refalrts::splice_elem( res, context[21] );
      res = refalrts::splice_evar( res, context[7], context[8] );
      res = refalrts::splice_stvar( res, context[6] );
      res = refalrts::splice_elem( res, context[20] );
      res = refalrts::splice_elem( res, context[19] );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[7], context[8], context[0], context[1] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    // s.ContextOffset#1/6 e.Ranges_B#1/7 ( # Junk e.Junk#1/9 ) ( # Range s.Num#1/13 ( # TkNumber s.Number#1/16 ) e.Range#1/11 ) e.Ranges_E#1/17 ( e.Vars#1/4 ) ( e.Commands#1/2 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_right( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_right( context[4], context[5], context[0], context[1] ) )
      continue;
    // closed e.Vars#1 as range 4
    // closed e.Commands#1 as range 2
    if( ! refalrts::svar_left( context[6], context[0], context[1] ) )
      continue;
    context[7] = 0;
    context[8] = 0;
    refalrts::start_e_loop();
    do {
      context[17] = context[0];
      context[18] = context[1];
      context[9] = 0;
      context[10] = 0;
      if( ! refalrts::brackets_left( context[9], context[10], context[17], context[18] ) )
        continue;
      if( ! refalrts::ident_left(  & ident_Junk<int>::name, context[9], context[10] ) )
        continue;
      context[11] = 0;
      context[12] = 0;
      if( ! refalrts::brackets_left( context[11], context[12], context[17], context[18] ) )
        continue;
      if( ! refalrts::ident_left(  & ident_Range<int>::name, context[11], context[12] ) )
        continue;
      // closed e.Junk#1 as range 9
      // closed e.Ranges_E#1 as range 0
      if( ! refalrts::svar_left( context[13], context[11], context[12] ) )
        continue;
      context[14] = 0;
      context[15] = 0;
      if( ! refalrts::brackets_left( context[14], context[15], context[11], context[12] ) )
        continue;
      if( ! refalrts::ident_left(  & ident_TkNumber<int>::name, context[14], context[15] ) )
        continue;
      // closed e.Range#1 as range 11
      if( ! refalrts::svar_left( context[16], context[14], context[15] ) )
        continue;
      if( ! refalrts::empty_seq( context[14], context[15] ) )
        continue;
      //2: e.Commands#1
      //4: e.Vars#1
      //6: s.ContextOffset#1
      //7: e.Ranges_B#1
      //9: e.Junk#1
      //11: e.Range#1
      //13: s.Num#1
      //16: s.Number#1
      //17: e.Ranges_E#1
      //36: s.Num#1
      //37: s.Number#1

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::alloc_open_call( context[19] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[20], DoGenPattern, "DoGenPattern" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[21] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[22], & ident_Junk<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[23] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[24], & ident_TkNumber<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[25] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[26] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[27] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[28], & ident_Range<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[29] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[30] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[31] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[32] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[33] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[34], & ident_CmdNumber<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[35], & ident_AlgLeft<int>::name ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[36], context[13]))
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[37], context[16]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[38] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[39] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[40] ) )
        return refalrts::cNoMemory;
      refalrts::push_stack( context[40] );
      refalrts::push_stack( context[19] );
      res = refalrts::splice_elem( res, context[40] );
      refalrts::link_brackets( context[32], context[39] );
      res = refalrts::splice_elem( res, context[39] );
      refalrts::link_brackets( context[33], context[38] );
      res = refalrts::splice_elem( res, context[38] );
      res = refalrts::splice_stvar( res, context[37] );
      res = refalrts::splice_stvar( res, context[36] );
      res = refalrts::splice_elem( res, context[35] );
      res = refalrts::splice_elem( res, context[34] );
      res = refalrts::splice_elem( res, context[33] );
      res = refalrts::splice_evar( res, context[2], context[3] );
      res = refalrts::splice_elem( res, context[32] );
      refalrts::link_brackets( context[30], context[31] );
      res = refalrts::splice_elem( res, context[31] );
      res = refalrts::splice_evar( res, context[4], context[5] );
      res = refalrts::splice_elem( res, context[30] );
      res = refalrts::splice_evar( res, context[17], context[18] );
      refalrts::link_brackets( context[27], context[29] );
      res = refalrts::splice_elem( res, context[29] );
      res = refalrts::splice_evar( res, context[11], context[12] );
      res = refalrts::splice_stvar( res, context[13] );
      res = refalrts::splice_elem( res, context[28] );
      res = refalrts::splice_elem( res, context[27] );
      refalrts::link_brackets( context[21], context[26] );
      res = refalrts::splice_elem( res, context[26] );
      refalrts::link_brackets( context[23], context[25] );
      res = refalrts::splice_elem( res, context[25] );
      res = refalrts::splice_stvar( res, context[16] );
      res = refalrts::splice_elem( res, context[24] );
      res = refalrts::splice_elem( res, context[23] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      res = refalrts::splice_elem( res, context[22] );
      res = refalrts::splice_elem( res, context[21] );
      res = refalrts::splice_evar( res, context[7], context[8] );
      res = refalrts::splice_stvar( res, context[6] );
      res = refalrts::splice_elem( res, context[20] );
      res = refalrts::splice_elem( res, context[19] );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[7], context[8], context[0], context[1] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    // s.ContextOffset#1/6 e.Ranges_B#1/7 ( # Junk e.Junk#1/9 ) ( # Range s.Num#1/13 ( # TkName e.Name#1/14 ) e.Range#1/11 ) e.Ranges_E#1/16 ( e.Vars#1/4 ) ( e.Commands#1/2 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_right( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_right( context[4], context[5], context[0], context[1] ) )
      continue;
    // closed e.Vars#1 as range 4
    // closed e.Commands#1 as range 2
    if( ! refalrts::svar_left( context[6], context[0], context[1] ) )
      continue;
    context[7] = 0;
    context[8] = 0;
    refalrts::start_e_loop();
    do {
      context[16] = context[0];
      context[17] = context[1];
      context[9] = 0;
      context[10] = 0;
      if( ! refalrts::brackets_left( context[9], context[10], context[16], context[17] ) )
        continue;
      if( ! refalrts::ident_left(  & ident_Junk<int>::name, context[9], context[10] ) )
        continue;
      context[11] = 0;
      context[12] = 0;
      if( ! refalrts::brackets_left( context[11], context[12], context[16], context[17] ) )
        continue;
      if( ! refalrts::ident_left(  & ident_Range<int>::name, context[11], context[12] ) )
        continue;
      // closed e.Junk#1 as range 9
      // closed e.Ranges_E#1 as range 0
      if( ! refalrts::svar_left( context[13], context[11], context[12] ) )
        continue;
      context[14] = 0;
      context[15] = 0;
      if( ! refalrts::brackets_left( context[14], context[15], context[11], context[12] ) )
        continue;
      if( ! refalrts::ident_left(  & ident_TkName<int>::name, context[14], context[15] ) )
        continue;
      // closed e.Name#1 as range 14
      // closed e.Range#1 as range 11
      //2: e.Commands#1
      //4: e.Vars#1
      //6: s.ContextOffset#1
      //7: e.Ranges_B#1
      //9: e.Junk#1
      //11: e.Range#1
      //13: s.Num#1
      //14: e.Name#1
      //16: e.Ranges_E#1
      //35: s.Num#1
      //36: e.Name#1

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::alloc_open_call( context[18] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[19], DoGenPattern, "DoGenPattern" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[20] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[21], & ident_Junk<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[22] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[23], & ident_TkName<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[24] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[25] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[26] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[27], & ident_Range<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[28] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[29] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[30] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[31] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[32] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[33], & ident_CmdName<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[34], & ident_AlgLeft<int>::name ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[35], context[13]))
        return refalrts::cNoMemory;
      if (! refalrts::copy_evar(context[36], context[37], context[14], context[15]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[38] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[39] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[40] ) )
        return refalrts::cNoMemory;
      refalrts::push_stack( context[40] );
      refalrts::push_stack( context[18] );
      res = refalrts::splice_elem( res, context[40] );
      refalrts::link_brackets( context[31], context[39] );
      res = refalrts::splice_elem( res, context[39] );
      refalrts::link_brackets( context[32], context[38] );
      res = refalrts::splice_elem( res, context[38] );
      res = refalrts::splice_evar( res, context[36], context[37] );
      res = refalrts::splice_stvar( res, context[35] );
      res = refalrts::splice_elem( res, context[34] );
      res = refalrts::splice_elem( res, context[33] );
      res = refalrts::splice_elem( res, context[32] );
      res = refalrts::splice_evar( res, context[2], context[3] );
      res = refalrts::splice_elem( res, context[31] );
      refalrts::link_brackets( context[29], context[30] );
      res = refalrts::splice_elem( res, context[30] );
      res = refalrts::splice_evar( res, context[4], context[5] );
      res = refalrts::splice_elem( res, context[29] );
      res = refalrts::splice_evar( res, context[16], context[17] );
      refalrts::link_brackets( context[26], context[28] );
      res = refalrts::splice_elem( res, context[28] );
      res = refalrts::splice_evar( res, context[11], context[12] );
      res = refalrts::splice_stvar( res, context[13] );
      res = refalrts::splice_elem( res, context[27] );
      res = refalrts::splice_elem( res, context[26] );
      refalrts::link_brackets( context[20], context[25] );
      res = refalrts::splice_elem( res, context[25] );
      refalrts::link_brackets( context[22], context[24] );
      res = refalrts::splice_elem( res, context[24] );
      res = refalrts::splice_evar( res, context[14], context[15] );
      res = refalrts::splice_elem( res, context[23] );
      res = refalrts::splice_elem( res, context[22] );
      res = refalrts::splice_elem( res, context[21] );
      res = refalrts::splice_elem( res, context[20] );
      res = refalrts::splice_evar( res, context[7], context[8] );
      res = refalrts::splice_stvar( res, context[6] );
      res = refalrts::splice_elem( res, context[19] );
      res = refalrts::splice_elem( res, context[18] );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[7], context[8], context[0], context[1] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    // s.ContextOffset#1/6 e.Ranges_B#1/7 ( # Junk e.Junk#1/9 ) ( # Range s.Num#1/13 ( # TkIdentifier e.Name#1/14 ) e.Range#1/11 ) e.Ranges_E#1/16 ( e.Vars#1/4 ) ( e.Commands#1/2 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_right( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_right( context[4], context[5], context[0], context[1] ) )
      continue;
    // closed e.Vars#1 as range 4
    // closed e.Commands#1 as range 2
    if( ! refalrts::svar_left( context[6], context[0], context[1] ) )
      continue;
    context[7] = 0;
    context[8] = 0;
    refalrts::start_e_loop();
    do {
      context[16] = context[0];
      context[17] = context[1];
      context[9] = 0;
      context[10] = 0;
      if( ! refalrts::brackets_left( context[9], context[10], context[16], context[17] ) )
        continue;
      if( ! refalrts::ident_left(  & ident_Junk<int>::name, context[9], context[10] ) )
        continue;
      context[11] = 0;
      context[12] = 0;
      if( ! refalrts::brackets_left( context[11], context[12], context[16], context[17] ) )
        continue;
      if( ! refalrts::ident_left(  & ident_Range<int>::name, context[11], context[12] ) )
        continue;
      // closed e.Junk#1 as range 9
      // closed e.Ranges_E#1 as range 0
      if( ! refalrts::svar_left( context[13], context[11], context[12] ) )
        continue;
      context[14] = 0;
      context[15] = 0;
      if( ! refalrts::brackets_left( context[14], context[15], context[11], context[12] ) )
        continue;
      if( ! refalrts::ident_left(  & ident_TkIdentifier<int>::name, context[14], context[15] ) )
        continue;
      // closed e.Name#1 as range 14
      // closed e.Range#1 as range 11
      //2: e.Commands#1
      //4: e.Vars#1
      //6: s.ContextOffset#1
      //7: e.Ranges_B#1
      //9: e.Junk#1
      //11: e.Range#1
      //13: s.Num#1
      //14: e.Name#1
      //16: e.Ranges_E#1
      //35: s.Num#1
      //36: e.Name#1

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::alloc_open_call( context[18] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[19], DoGenPattern, "DoGenPattern" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[20] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[21], & ident_Junk<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[22] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[23], & ident_TkIdentifier<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[24] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[25] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[26] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[27], & ident_Range<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[28] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[29] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[30] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[31] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[32] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[33], & ident_CmdIdent<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[34], & ident_AlgLeft<int>::name ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[35], context[13]))
        return refalrts::cNoMemory;
      if (! refalrts::copy_evar(context[36], context[37], context[14], context[15]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[38] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[39] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[40] ) )
        return refalrts::cNoMemory;
      refalrts::push_stack( context[40] );
      refalrts::push_stack( context[18] );
      res = refalrts::splice_elem( res, context[40] );
      refalrts::link_brackets( context[31], context[39] );
      res = refalrts::splice_elem( res, context[39] );
      refalrts::link_brackets( context[32], context[38] );
      res = refalrts::splice_elem( res, context[38] );
      res = refalrts::splice_evar( res, context[36], context[37] );
      res = refalrts::splice_stvar( res, context[35] );
      res = refalrts::splice_elem( res, context[34] );
      res = refalrts::splice_elem( res, context[33] );
      res = refalrts::splice_elem( res, context[32] );
      res = refalrts::splice_evar( res, context[2], context[3] );
      res = refalrts::splice_elem( res, context[31] );
      refalrts::link_brackets( context[29], context[30] );
      res = refalrts::splice_elem( res, context[30] );
      res = refalrts::splice_evar( res, context[4], context[5] );
      res = refalrts::splice_elem( res, context[29] );
      res = refalrts::splice_evar( res, context[16], context[17] );
      refalrts::link_brackets( context[26], context[28] );
      res = refalrts::splice_elem( res, context[28] );
      res = refalrts::splice_evar( res, context[11], context[12] );
      res = refalrts::splice_stvar( res, context[13] );
      res = refalrts::splice_elem( res, context[27] );
      res = refalrts::splice_elem( res, context[26] );
      refalrts::link_brackets( context[20], context[25] );
      res = refalrts::splice_elem( res, context[25] );
      refalrts::link_brackets( context[22], context[24] );
      res = refalrts::splice_elem( res, context[24] );
      res = refalrts::splice_evar( res, context[14], context[15] );
      res = refalrts::splice_elem( res, context[23] );
      res = refalrts::splice_elem( res, context[22] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      res = refalrts::splice_elem( res, context[21] );
      res = refalrts::splice_elem( res, context[20] );
      res = refalrts::splice_evar( res, context[7], context[8] );
      res = refalrts::splice_stvar( res, context[6] );
      res = refalrts::splice_elem( res, context[19] );
      res = refalrts::splice_elem( res, context[18] );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[7], context[8], context[0], context[1] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    // s.ContextOffset#1/6 e.Ranges_B#1/7 ( # Range s.Num#1/15 e.Range#1/9 ( # TkChar s.Char#1/16 ) ) ( # Junk e.Junk#1/11 ) e.Ranges_E#1/17 ( e.Vars#1/4 ) ( e.Commands#1/2 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_right( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_right( context[4], context[5], context[0], context[1] ) )
      continue;
    // closed e.Vars#1 as range 4
    // closed e.Commands#1 as range 2
    if( ! refalrts::svar_left( context[6], context[0], context[1] ) )
      continue;
    context[7] = 0;
    context[8] = 0;
    refalrts::start_e_loop();
    do {
      context[17] = context[0];
      context[18] = context[1];
      context[9] = 0;
      context[10] = 0;
      if( ! refalrts::brackets_left( context[9], context[10], context[17], context[18] ) )
        continue;
      if( ! refalrts::ident_left(  & ident_Range<int>::name, context[9], context[10] ) )
        continue;
      context[11] = 0;
      context[12] = 0;
      if( ! refalrts::brackets_left( context[11], context[12], context[17], context[18] ) )
        continue;
      if( ! refalrts::ident_left(  & ident_Junk<int>::name, context[11], context[12] ) )
        continue;
      context[13] = 0;
      context[14] = 0;
      if( ! refalrts::brackets_right( context[13], context[14], context[9], context[10] ) )
        continue;
      if( ! refalrts::ident_left(  & ident_TkChar<int>::name, context[13], context[14] ) )
        continue;
      // closed e.Junk#1 as range 11
      // closed e.Ranges_E#1 as range 0
      if( ! refalrts::svar_left( context[15], context[9], context[10] ) )
        continue;
      // closed e.Range#1 as range 9
      if( ! refalrts::svar_left( context[16], context[13], context[14] ) )
        continue;
      if( ! refalrts::empty_seq( context[13], context[14] ) )
        continue;
      //2: e.Commands#1
      //4: e.Vars#1
      //6: s.ContextOffset#1
      //7: e.Ranges_B#1
      //9: e.Range#1
      //11: e.Junk#1
      //15: s.Num#1
      //16: s.Char#1
      //17: e.Ranges_E#1
      //36: s.Num#1
      //37: s.Char#1

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::alloc_open_call( context[19] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[20], DoGenPattern, "DoGenPattern" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[21] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[22], & ident_Range<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[23] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[24] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[25], & ident_Junk<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[26] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[27], & ident_TkChar<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[28] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[29] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[30] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[31] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[32] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[33] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[34], & ident_CmdChar<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[35], & ident_AlgRight<int>::name ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[36], context[15]))
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[37], context[16]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[38] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[39] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[40] ) )
        return refalrts::cNoMemory;
      refalrts::push_stack( context[40] );
      refalrts::push_stack( context[19] );
      res = refalrts::splice_elem( res, context[40] );
      refalrts::link_brackets( context[32], context[39] );
      res = refalrts::splice_elem( res, context[39] );
      refalrts::link_brackets( context[33], context[38] );
      res = refalrts::splice_elem( res, context[38] );
      res = refalrts::splice_stvar( res, context[37] );
      res = refalrts::splice_stvar( res, context[36] );
      res = refalrts::splice_elem( res, context[35] );
      res = refalrts::splice_elem( res, context[34] );
      res = refalrts::splice_elem( res, context[33] );
      res = refalrts::splice_evar( res, context[2], context[3] );
      res = refalrts::splice_elem( res, context[32] );
      refalrts::link_brackets( context[30], context[31] );
      res = refalrts::splice_elem( res, context[31] );
      res = refalrts::splice_evar( res, context[4], context[5] );
      res = refalrts::splice_elem( res, context[30] );
      res = refalrts::splice_evar( res, context[17], context[18] );
      refalrts::link_brackets( context[24], context[29] );
      res = refalrts::splice_elem( res, context[29] );
      res = refalrts::splice_evar( res, context[11], context[12] );
      refalrts::link_brackets( context[26], context[28] );
      res = refalrts::splice_elem( res, context[28] );
      res = refalrts::splice_stvar( res, context[16] );
      res = refalrts::splice_elem( res, context[27] );
      res = refalrts::splice_elem( res, context[26] );
      res = refalrts::splice_elem( res, context[25] );
      res = refalrts::splice_elem( res, context[24] );
      refalrts::link_brackets( context[21], context[23] );
      res = refalrts::splice_elem( res, context[23] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      res = refalrts::splice_stvar( res, context[15] );
      res = refalrts::splice_elem( res, context[22] );
      res = refalrts::splice_elem( res, context[21] );
      res = refalrts::splice_evar( res, context[7], context[8] );
      res = refalrts::splice_stvar( res, context[6] );
      res = refalrts::splice_elem( res, context[20] );
      res = refalrts::splice_elem( res, context[19] );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[7], context[8], context[0], context[1] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    // s.ContextOffset#1/6 e.Ranges_B#1/7 ( # Range s.Num#1/15 e.Range#1/9 ( # TkNumber s.Number#1/16 ) ) ( # Junk e.Junk#1/11 ) e.Ranges_E#1/17 ( e.Vars#1/4 ) ( e.Commands#1/2 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_right( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_right( context[4], context[5], context[0], context[1] ) )
      continue;
    // closed e.Vars#1 as range 4
    // closed e.Commands#1 as range 2
    if( ! refalrts::svar_left( context[6], context[0], context[1] ) )
      continue;
    context[7] = 0;
    context[8] = 0;
    refalrts::start_e_loop();
    do {
      context[17] = context[0];
      context[18] = context[1];
      context[9] = 0;
      context[10] = 0;
      if( ! refalrts::brackets_left( context[9], context[10], context[17], context[18] ) )
        continue;
      if( ! refalrts::ident_left(  & ident_Range<int>::name, context[9], context[10] ) )
        continue;
      context[11] = 0;
      context[12] = 0;
      if( ! refalrts::brackets_left( context[11], context[12], context[17], context[18] ) )
        continue;
      if( ! refalrts::ident_left(  & ident_Junk<int>::name, context[11], context[12] ) )
        continue;
      context[13] = 0;
      context[14] = 0;
      if( ! refalrts::brackets_right( context[13], context[14], context[9], context[10] ) )
        continue;
      if( ! refalrts::ident_left(  & ident_TkNumber<int>::name, context[13], context[14] ) )
        continue;
      // closed e.Junk#1 as range 11
      // closed e.Ranges_E#1 as range 0
      if( ! refalrts::svar_left( context[15], context[9], context[10] ) )
        continue;
      // closed e.Range#1 as range 9
      if( ! refalrts::svar_left( context[16], context[13], context[14] ) )
        continue;
      if( ! refalrts::empty_seq( context[13], context[14] ) )
        continue;
      //2: e.Commands#1
      //4: e.Vars#1
      //6: s.ContextOffset#1
      //7: e.Ranges_B#1
      //9: e.Range#1
      //11: e.Junk#1
      //15: s.Num#1
      //16: s.Number#1
      //17: e.Ranges_E#1
      //36: s.Num#1
      //37: s.Number#1

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::alloc_open_call( context[19] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[20], DoGenPattern, "DoGenPattern" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[21] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[22], & ident_Range<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[23] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[24] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[25], & ident_Junk<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[26] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[27], & ident_TkNumber<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[28] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[29] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[30] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[31] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[32] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[33] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[34], & ident_CmdNumber<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[35], & ident_AlgRight<int>::name ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[36], context[15]))
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[37], context[16]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[38] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[39] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[40] ) )
        return refalrts::cNoMemory;
      refalrts::push_stack( context[40] );
      refalrts::push_stack( context[19] );
      res = refalrts::splice_elem( res, context[40] );
      refalrts::link_brackets( context[32], context[39] );
      res = refalrts::splice_elem( res, context[39] );
      refalrts::link_brackets( context[33], context[38] );
      res = refalrts::splice_elem( res, context[38] );
      res = refalrts::splice_stvar( res, context[37] );
      res = refalrts::splice_stvar( res, context[36] );
      res = refalrts::splice_elem( res, context[35] );
      res = refalrts::splice_elem( res, context[34] );
      res = refalrts::splice_elem( res, context[33] );
      res = refalrts::splice_evar( res, context[2], context[3] );
      res = refalrts::splice_elem( res, context[32] );
      refalrts::link_brackets( context[30], context[31] );
      res = refalrts::splice_elem( res, context[31] );
      res = refalrts::splice_evar( res, context[4], context[5] );
      res = refalrts::splice_elem( res, context[30] );
      res = refalrts::splice_evar( res, context[17], context[18] );
      refalrts::link_brackets( context[24], context[29] );
      res = refalrts::splice_elem( res, context[29] );
      res = refalrts::splice_evar( res, context[11], context[12] );
      refalrts::link_brackets( context[26], context[28] );
      res = refalrts::splice_elem( res, context[28] );
      res = refalrts::splice_stvar( res, context[16] );
      res = refalrts::splice_elem( res, context[27] );
      res = refalrts::splice_elem( res, context[26] );
      res = refalrts::splice_elem( res, context[25] );
      res = refalrts::splice_elem( res, context[24] );
      refalrts::link_brackets( context[21], context[23] );
      res = refalrts::splice_elem( res, context[23] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      res = refalrts::splice_stvar( res, context[15] );
      res = refalrts::splice_elem( res, context[22] );
      res = refalrts::splice_elem( res, context[21] );
      res = refalrts::splice_evar( res, context[7], context[8] );
      res = refalrts::splice_stvar( res, context[6] );
      res = refalrts::splice_elem( res, context[20] );
      res = refalrts::splice_elem( res, context[19] );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[7], context[8], context[0], context[1] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    // s.ContextOffset#1/6 e.Ranges_B#1/7 ( # Range s.Num#1/15 e.Range#1/9 ( # TkName e.Name#1/13 ) ) ( # Junk e.Junk#1/11 ) e.Ranges_E#1/16 ( e.Vars#1/4 ) ( e.Commands#1/2 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_right( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_right( context[4], context[5], context[0], context[1] ) )
      continue;
    // closed e.Vars#1 as range 4
    // closed e.Commands#1 as range 2
    if( ! refalrts::svar_left( context[6], context[0], context[1] ) )
      continue;
    context[7] = 0;
    context[8] = 0;
    refalrts::start_e_loop();
    do {
      context[16] = context[0];
      context[17] = context[1];
      context[9] = 0;
      context[10] = 0;
      if( ! refalrts::brackets_left( context[9], context[10], context[16], context[17] ) )
        continue;
      if( ! refalrts::ident_left(  & ident_Range<int>::name, context[9], context[10] ) )
        continue;
      context[11] = 0;
      context[12] = 0;
      if( ! refalrts::brackets_left( context[11], context[12], context[16], context[17] ) )
        continue;
      if( ! refalrts::ident_left(  & ident_Junk<int>::name, context[11], context[12] ) )
        continue;
      context[13] = 0;
      context[14] = 0;
      if( ! refalrts::brackets_right( context[13], context[14], context[9], context[10] ) )
        continue;
      if( ! refalrts::ident_left(  & ident_TkName<int>::name, context[13], context[14] ) )
        continue;
      // closed e.Name#1 as range 13
      // closed e.Junk#1 as range 11
      // closed e.Ranges_E#1 as range 0
      if( ! refalrts::svar_left( context[15], context[9], context[10] ) )
        continue;
      // closed e.Range#1 as range 9
      //2: e.Commands#1
      //4: e.Vars#1
      //6: s.ContextOffset#1
      //7: e.Ranges_B#1
      //9: e.Range#1
      //11: e.Junk#1
      //13: e.Name#1
      //15: s.Num#1
      //16: e.Ranges_E#1
      //35: s.Num#1
      //36: e.Name#1

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::alloc_open_call( context[18] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[19], DoGenPattern, "DoGenPattern" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[20] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[21], & ident_Range<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[22] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[23] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[24], & ident_Junk<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[25] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[26], & ident_TkName<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[27] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[28] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[29] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[30] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[31] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[32] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[33], & ident_CmdName<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[34], & ident_AlgRight<int>::name ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[35], context[15]))
        return refalrts::cNoMemory;
      if (! refalrts::copy_evar(context[36], context[37], context[13], context[14]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[38] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[39] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[40] ) )
        return refalrts::cNoMemory;
      refalrts::push_stack( context[40] );
      refalrts::push_stack( context[18] );
      res = refalrts::splice_elem( res, context[40] );
      refalrts::link_brackets( context[31], context[39] );
      res = refalrts::splice_elem( res, context[39] );
      refalrts::link_brackets( context[32], context[38] );
      res = refalrts::splice_elem( res, context[38] );
      res = refalrts::splice_evar( res, context[36], context[37] );
      res = refalrts::splice_stvar( res, context[35] );
      res = refalrts::splice_elem( res, context[34] );
      res = refalrts::splice_elem( res, context[33] );
      res = refalrts::splice_elem( res, context[32] );
      res = refalrts::splice_evar( res, context[2], context[3] );
      res = refalrts::splice_elem( res, context[31] );
      refalrts::link_brackets( context[29], context[30] );
      res = refalrts::splice_elem( res, context[30] );
      res = refalrts::splice_evar( res, context[4], context[5] );
      res = refalrts::splice_elem( res, context[29] );
      res = refalrts::splice_evar( res, context[16], context[17] );
      refalrts::link_brackets( context[23], context[28] );
      res = refalrts::splice_elem( res, context[28] );
      res = refalrts::splice_evar( res, context[11], context[12] );
      refalrts::link_brackets( context[25], context[27] );
      res = refalrts::splice_elem( res, context[27] );
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_elem( res, context[26] );
      res = refalrts::splice_elem( res, context[25] );
      res = refalrts::splice_elem( res, context[24] );
      res = refalrts::splice_elem( res, context[23] );
      refalrts::link_brackets( context[20], context[22] );
      res = refalrts::splice_elem( res, context[22] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      res = refalrts::splice_stvar( res, context[15] );
      res = refalrts::splice_elem( res, context[21] );
      res = refalrts::splice_elem( res, context[20] );
      res = refalrts::splice_evar( res, context[7], context[8] );
      res = refalrts::splice_stvar( res, context[6] );
      res = refalrts::splice_elem( res, context[19] );
      res = refalrts::splice_elem( res, context[18] );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[7], context[8], context[0], context[1] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    // s.ContextOffset#1/6 e.Ranges_B#1/7 ( # Range s.Num#1/15 e.Range#1/9 ( # TkIdentifier e.Name#1/13 ) ) ( # Junk e.Junk#1/11 ) e.Ranges_E#1/16 ( e.Vars#1/4 ) ( e.Commands#1/2 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_right( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_right( context[4], context[5], context[0], context[1] ) )
      continue;
    // closed e.Vars#1 as range 4
    // closed e.Commands#1 as range 2
    if( ! refalrts::svar_left( context[6], context[0], context[1] ) )
      continue;
    context[7] = 0;
    context[8] = 0;
    refalrts::start_e_loop();
    do {
      context[16] = context[0];
      context[17] = context[1];
      context[9] = 0;
      context[10] = 0;
      if( ! refalrts::brackets_left( context[9], context[10], context[16], context[17] ) )
        continue;
      if( ! refalrts::ident_left(  & ident_Range<int>::name, context[9], context[10] ) )
        continue;
      context[11] = 0;
      context[12] = 0;
      if( ! refalrts::brackets_left( context[11], context[12], context[16], context[17] ) )
        continue;
      if( ! refalrts::ident_left(  & ident_Junk<int>::name, context[11], context[12] ) )
        continue;
      context[13] = 0;
      context[14] = 0;
      if( ! refalrts::brackets_right( context[13], context[14], context[9], context[10] ) )
        continue;
      if( ! refalrts::ident_left(  & ident_TkIdentifier<int>::name, context[13], context[14] ) )
        continue;
      // closed e.Name#1 as range 13
      // closed e.Junk#1 as range 11
      // closed e.Ranges_E#1 as range 0
      if( ! refalrts::svar_left( context[15], context[9], context[10] ) )
        continue;
      // closed e.Range#1 as range 9
      //2: e.Commands#1
      //4: e.Vars#1
      //6: s.ContextOffset#1
      //7: e.Ranges_B#1
      //9: e.Range#1
      //11: e.Junk#1
      //13: e.Name#1
      //15: s.Num#1
      //16: e.Ranges_E#1
      //35: s.Num#1
      //36: e.Name#1

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::alloc_open_call( context[18] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[19], DoGenPattern, "DoGenPattern" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[20] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[21], & ident_Range<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[22] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[23] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[24], & ident_Junk<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[25] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[26], & ident_TkIdentifier<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[27] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[28] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[29] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[30] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[31] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[32] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[33], & ident_CmdIdent<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[34], & ident_AlgRight<int>::name ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[35], context[15]))
        return refalrts::cNoMemory;
      if (! refalrts::copy_evar(context[36], context[37], context[13], context[14]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[38] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[39] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[40] ) )
        return refalrts::cNoMemory;
      refalrts::push_stack( context[40] );
      refalrts::push_stack( context[18] );
      res = refalrts::splice_elem( res, context[40] );
      refalrts::link_brackets( context[31], context[39] );
      res = refalrts::splice_elem( res, context[39] );
      refalrts::link_brackets( context[32], context[38] );
      res = refalrts::splice_elem( res, context[38] );
      res = refalrts::splice_evar( res, context[36], context[37] );
      res = refalrts::splice_stvar( res, context[35] );
      res = refalrts::splice_elem( res, context[34] );
      res = refalrts::splice_elem( res, context[33] );
      res = refalrts::splice_elem( res, context[32] );
      res = refalrts::splice_evar( res, context[2], context[3] );
      res = refalrts::splice_elem( res, context[31] );
      refalrts::link_brackets( context[29], context[30] );
      res = refalrts::splice_elem( res, context[30] );
      res = refalrts::splice_evar( res, context[4], context[5] );
      res = refalrts::splice_elem( res, context[29] );
      res = refalrts::splice_evar( res, context[16], context[17] );
      refalrts::link_brackets( context[23], context[28] );
      res = refalrts::splice_elem( res, context[28] );
      res = refalrts::splice_evar( res, context[11], context[12] );
      refalrts::link_brackets( context[25], context[27] );
      res = refalrts::splice_elem( res, context[27] );
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_elem( res, context[26] );
      res = refalrts::splice_elem( res, context[25] );
      res = refalrts::splice_elem( res, context[24] );
      res = refalrts::splice_elem( res, context[23] );
      refalrts::link_brackets( context[20], context[22] );
      res = refalrts::splice_elem( res, context[22] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      res = refalrts::splice_stvar( res, context[15] );
      res = refalrts::splice_elem( res, context[21] );
      res = refalrts::splice_elem( res, context[20] );
      res = refalrts::splice_evar( res, context[7], context[8] );
      res = refalrts::splice_stvar( res, context[6] );
      res = refalrts::splice_elem( res, context[19] );
      res = refalrts::splice_elem( res, context[18] );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[7], context[8], context[0], context[1] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    // s.ContextOffset#1/6 e.Ranges_B#1/7 ( # Junk e.Junk#1/9 ) ( # Range s.Num#1/13 ( # Brackets e.SubRange#1/14 ) e.Range#1/11 ) e.Ranges_E#1/16 ( e.Vars#1/4 ) ( e.Commands#1/2 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_right( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_right( context[4], context[5], context[0], context[1] ) )
      continue;
    // closed e.Vars#1 as range 4
    // closed e.Commands#1 as range 2
    if( ! refalrts::svar_left( context[6], context[0], context[1] ) )
      continue;
    context[7] = 0;
    context[8] = 0;
    refalrts::start_e_loop();
    do {
      context[16] = context[0];
      context[17] = context[1];
      context[9] = 0;
      context[10] = 0;
      if( ! refalrts::brackets_left( context[9], context[10], context[16], context[17] ) )
        continue;
      if( ! refalrts::ident_left(  & ident_Junk<int>::name, context[9], context[10] ) )
        continue;
      context[11] = 0;
      context[12] = 0;
      if( ! refalrts::brackets_left( context[11], context[12], context[16], context[17] ) )
        continue;
      if( ! refalrts::ident_left(  & ident_Range<int>::name, context[11], context[12] ) )
        continue;
      // closed e.Junk#1 as range 9
      // closed e.Ranges_E#1 as range 0
      if( ! refalrts::svar_left( context[13], context[11], context[12] ) )
        continue;
      context[14] = 0;
      context[15] = 0;
      if( ! refalrts::brackets_left( context[14], context[15], context[11], context[12] ) )
        continue;
      if( ! refalrts::ident_left(  & ident_Brackets<int>::name, context[14], context[15] ) )
        continue;
      // closed e.SubRange#1 as range 14
      // closed e.Range#1 as range 11
      //2: e.Commands#1
      //4: e.Vars#1
      //6: s.ContextOffset#1
      //7: e.Ranges_B#1
      //9: e.Junk#1
      //11: e.Range#1
      //13: s.Num#1
      //14: e.SubRange#1
      //16: e.Ranges_E#1
      //31: s.ContextOffset#1
      //48: s.Num#1
      //49: s.ContextOffset#1

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::alloc_open_call( context[18] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[19], DoGenPattern, "DoGenPattern" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_call( context[20] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[21], Inc2, "Inc2" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[22] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[23] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[24], & ident_Junk<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[25] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[26], & ident_TkOpenBracket<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[27] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[28] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[29] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[30], & ident_Range<int>::name ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[31], context[6]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[32] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[33] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[34], & ident_Junk<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[35] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[36], & ident_TkCloseBracket<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[37] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[38] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[39] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[40], & ident_Range<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[41] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[42] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[43] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[44] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[45] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[46], & ident_CmdBrackets<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[47], & ident_AlgLeft<int>::name ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[48], context[13]))
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[49], context[31]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[50] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[51] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[52] ) )
        return refalrts::cNoMemory;
      refalrts::push_stack( context[52] );
      refalrts::push_stack( context[18] );
      res = refalrts::splice_elem( res, context[52] );
      refalrts::link_brackets( context[44], context[51] );
      res = refalrts::splice_elem( res, context[51] );
      refalrts::link_brackets( context[45], context[50] );
      res = refalrts::splice_elem( res, context[50] );
      res = refalrts::splice_stvar( res, context[49] );
      res = refalrts::splice_stvar( res, context[48] );
      res = refalrts::splice_elem( res, context[47] );
      res = refalrts::splice_elem( res, context[46] );
      res = refalrts::splice_elem( res, context[45] );
      res = refalrts::splice_evar( res, context[2], context[3] );
      res = refalrts::splice_elem( res, context[44] );
      refalrts::link_brackets( context[42], context[43] );
      res = refalrts::splice_elem( res, context[43] );
      res = refalrts::splice_evar( res, context[4], context[5] );
      res = refalrts::splice_elem( res, context[42] );
      res = refalrts::splice_evar( res, context[16], context[17] );
      refalrts::link_brackets( context[39], context[41] );
      res = refalrts::splice_elem( res, context[41] );
      res = refalrts::splice_evar( res, context[11], context[12] );
      res = refalrts::splice_stvar( res, context[13] );
      res = refalrts::splice_elem( res, context[40] );
      res = refalrts::splice_elem( res, context[39] );
      refalrts::link_brackets( context[33], context[38] );
      res = refalrts::splice_elem( res, context[38] );
      refalrts::link_brackets( context[35], context[37] );
      res = refalrts::splice_elem( res, context[37] );
      res = refalrts::splice_elem( res, context[36] );
      res = refalrts::splice_elem( res, context[35] );
      res = refalrts::splice_elem( res, context[34] );
      res = refalrts::splice_elem( res, context[33] );
      refalrts::link_brackets( context[29], context[32] );
      res = refalrts::splice_elem( res, context[32] );
      res = refalrts::splice_evar( res, context[14], context[15] );
      res = refalrts::splice_stvar( res, context[31] );
      res = refalrts::splice_elem( res, context[30] );
      res = refalrts::splice_elem( res, context[29] );
      refalrts::link_brackets( context[23], context[28] );
      res = refalrts::splice_elem( res, context[28] );
      refalrts::link_brackets( context[25], context[27] );
      res = refalrts::splice_elem( res, context[27] );
      res = refalrts::splice_elem( res, context[26] );
      res = refalrts::splice_elem( res, context[25] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      res = refalrts::splice_elem( res, context[24] );
      res = refalrts::splice_elem( res, context[23] );
      res = refalrts::splice_evar( res, context[7], context[8] );
      refalrts::push_stack( context[22] );
      refalrts::push_stack( context[20] );
      res = refalrts::splice_elem( res, context[22] );
      res = refalrts::splice_stvar( res, context[6] );
      res = refalrts::splice_elem( res, context[21] );
      res = refalrts::splice_elem( res, context[20] );
      res = refalrts::splice_elem( res, context[19] );
      res = refalrts::splice_elem( res, context[18] );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[7], context[8], context[0], context[1] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    // s.ContextOffset#1/6 e.Ranges_B#1/7 ( # Range s.Num#1/15 e.Range#1/9 ( # Brackets e.SubRange#1/13 ) ) ( # Junk e.Junk#1/11 ) e.Ranges_E#1/16 ( e.Vars#1/4 ) ( e.Commands#1/2 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_right( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_right( context[4], context[5], context[0], context[1] ) )
      continue;
    // closed e.Vars#1 as range 4
    // closed e.Commands#1 as range 2
    if( ! refalrts::svar_left( context[6], context[0], context[1] ) )
      continue;
    context[7] = 0;
    context[8] = 0;
    refalrts::start_e_loop();
    do {
      context[16] = context[0];
      context[17] = context[1];
      context[9] = 0;
      context[10] = 0;
      if( ! refalrts::brackets_left( context[9], context[10], context[16], context[17] ) )
        continue;
      if( ! refalrts::ident_left(  & ident_Range<int>::name, context[9], context[10] ) )
        continue;
      context[11] = 0;
      context[12] = 0;
      if( ! refalrts::brackets_left( context[11], context[12], context[16], context[17] ) )
        continue;
      if( ! refalrts::ident_left(  & ident_Junk<int>::name, context[11], context[12] ) )
        continue;
      context[13] = 0;
      context[14] = 0;
      if( ! refalrts::brackets_right( context[13], context[14], context[9], context[10] ) )
        continue;
      if( ! refalrts::ident_left(  & ident_Brackets<int>::name, context[13], context[14] ) )
        continue;
      // closed e.SubRange#1 as range 13
      // closed e.Junk#1 as range 11
      // closed e.Ranges_E#1 as range 0
      if( ! refalrts::svar_left( context[15], context[9], context[10] ) )
        continue;
      // closed e.Range#1 as range 9
      //2: e.Commands#1
      //4: e.Vars#1
      //6: s.ContextOffset#1
      //7: e.Ranges_B#1
      //9: e.Range#1
      //11: e.Junk#1
      //13: e.SubRange#1
      //15: s.Num#1
      //16: e.Ranges_E#1
      //34: s.ContextOffset#1
      //48: s.Num#1
      //49: s.ContextOffset#1

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::alloc_open_call( context[18] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[19], DoGenPattern, "DoGenPattern" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_call( context[20] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[21], Inc2, "Inc2" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[22] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[23] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[24], & ident_Range<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[25] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[26] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[27], & ident_Junk<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[28] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[29], & ident_TkOpenBracket<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[30] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[31] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[32] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[33], & ident_Range<int>::name ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[34], context[6]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[35] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[36] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[37], & ident_Junk<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[38] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[39], & ident_TkCloseBracket<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[40] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[41] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[42] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[43] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[44] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[45] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[46], & ident_CmdBrackets<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[47], & ident_AlgRight<int>::name ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[48], context[15]))
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[49], context[34]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[50] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[51] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[52] ) )
        return refalrts::cNoMemory;
      refalrts::push_stack( context[52] );
      refalrts::push_stack( context[18] );
      res = refalrts::splice_elem( res, context[52] );
      refalrts::link_brackets( context[44], context[51] );
      res = refalrts::splice_elem( res, context[51] );
      refalrts::link_brackets( context[45], context[50] );
      res = refalrts::splice_elem( res, context[50] );
      res = refalrts::splice_stvar( res, context[49] );
      res = refalrts::splice_stvar( res, context[48] );
      res = refalrts::splice_elem( res, context[47] );
      res = refalrts::splice_elem( res, context[46] );
      res = refalrts::splice_elem( res, context[45] );
      res = refalrts::splice_evar( res, context[2], context[3] );
      res = refalrts::splice_elem( res, context[44] );
      refalrts::link_brackets( context[42], context[43] );
      res = refalrts::splice_elem( res, context[43] );
      res = refalrts::splice_evar( res, context[4], context[5] );
      res = refalrts::splice_elem( res, context[42] );
      res = refalrts::splice_evar( res, context[16], context[17] );
      refalrts::link_brackets( context[36], context[41] );
      res = refalrts::splice_elem( res, context[41] );
      res = refalrts::splice_evar( res, context[11], context[12] );
      refalrts::link_brackets( context[38], context[40] );
      res = refalrts::splice_elem( res, context[40] );
      res = refalrts::splice_elem( res, context[39] );
      res = refalrts::splice_elem( res, context[38] );
      res = refalrts::splice_elem( res, context[37] );
      res = refalrts::splice_elem( res, context[36] );
      refalrts::link_brackets( context[32], context[35] );
      res = refalrts::splice_elem( res, context[35] );
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_stvar( res, context[34] );
      res = refalrts::splice_elem( res, context[33] );
      res = refalrts::splice_elem( res, context[32] );
      refalrts::link_brackets( context[26], context[31] );
      res = refalrts::splice_elem( res, context[31] );
      refalrts::link_brackets( context[28], context[30] );
      res = refalrts::splice_elem( res, context[30] );
      res = refalrts::splice_elem( res, context[29] );
      res = refalrts::splice_elem( res, context[28] );
      res = refalrts::splice_elem( res, context[27] );
      res = refalrts::splice_elem( res, context[26] );
      refalrts::link_brackets( context[23], context[25] );
      res = refalrts::splice_elem( res, context[25] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      res = refalrts::splice_stvar( res, context[15] );
      res = refalrts::splice_elem( res, context[24] );
      res = refalrts::splice_elem( res, context[23] );
      res = refalrts::splice_evar( res, context[7], context[8] );
      refalrts::push_stack( context[22] );
      refalrts::push_stack( context[20] );
      res = refalrts::splice_elem( res, context[22] );
      res = refalrts::splice_stvar( res, context[6] );
      res = refalrts::splice_elem( res, context[21] );
      res = refalrts::splice_elem( res, context[20] );
      res = refalrts::splice_elem( res, context[19] );
      res = refalrts::splice_elem( res, context[18] );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[7], context[8], context[0], context[1] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    // s.ContextOffset#1/6 e.Ranges_B#1/7 ( # Junk e.Junk#1/9 ) ( # Range s.Num#1/13 ( # ADT_Brackets ( e.Name#1/16 ) e.SubRange#1/14 ) e.Range#1/11 ) e.Ranges_E#1/18 ( e.Vars#1/4 ) ( e.Commands#1/2 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_right( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_right( context[4], context[5], context[0], context[1] ) )
      continue;
    // closed e.Vars#1 as range 4
    // closed e.Commands#1 as range 2
    if( ! refalrts::svar_left( context[6], context[0], context[1] ) )
      continue;
    context[7] = 0;
    context[8] = 0;
    refalrts::start_e_loop();
    do {
      context[18] = context[0];
      context[19] = context[1];
      context[9] = 0;
      context[10] = 0;
      if( ! refalrts::brackets_left( context[9], context[10], context[18], context[19] ) )
        continue;
      if( ! refalrts::ident_left(  & ident_Junk<int>::name, context[9], context[10] ) )
        continue;
      context[11] = 0;
      context[12] = 0;
      if( ! refalrts::brackets_left( context[11], context[12], context[18], context[19] ) )
        continue;
      if( ! refalrts::ident_left(  & ident_Range<int>::name, context[11], context[12] ) )
        continue;
      // closed e.Junk#1 as range 9
      // closed e.Ranges_E#1 as range 0
      if( ! refalrts::svar_left( context[13], context[11], context[12] ) )
        continue;
      context[14] = 0;
      context[15] = 0;
      if( ! refalrts::brackets_left( context[14], context[15], context[11], context[12] ) )
        continue;
      if( ! refalrts::ident_left(  & ident_ADT_Brackets<int>::name, context[14], context[15] ) )
        continue;
      context[16] = 0;
      context[17] = 0;
      if( ! refalrts::brackets_left( context[16], context[17], context[14], context[15] ) )
        continue;
      // closed e.Name#1 as range 16
      // closed e.SubRange#1 as range 14
      // closed e.Range#1 as range 11
      //2: e.Commands#1
      //4: e.Vars#1
      //6: s.ContextOffset#1
      //7: e.Ranges_B#1
      //9: e.Junk#1
      //11: e.Range#1
      //13: s.Num#1
      //14: e.SubRange#1
      //16: e.Name#1
      //18: e.Ranges_E#1
      //36: s.ContextOffset#1
      //53: s.Num#1
      //54: s.ContextOffset#1
      //55: e.Name#1

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::alloc_open_call( context[20] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[21], DoGenPattern, "DoGenPattern" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_call( context[22] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[23], Inc2, "Inc2" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[24] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[25] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[26], & ident_Junk<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[27] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[28], & ident_TkOpenADT<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[29] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[30] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[31], & ident_TkName<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[32] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[33] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[34] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[35], & ident_Range<int>::name ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[36], context[6]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[37] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[38] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[39], & ident_Junk<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[40] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[41], & ident_TkCloseADT<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[42] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[43] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[44] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[45], & ident_Range<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[46] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[47] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[48] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[49] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[50] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[51], & ident_CmdADT<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[52], & ident_AlgLeft<int>::name ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[53], context[13]))
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[54], context[36]))
        return refalrts::cNoMemory;
      if (! refalrts::copy_evar(context[55], context[56], context[16], context[17]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[57] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[58] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[59] ) )
        return refalrts::cNoMemory;
      refalrts::push_stack( context[59] );
      refalrts::push_stack( context[20] );
      res = refalrts::splice_elem( res, context[59] );
      refalrts::link_brackets( context[49], context[58] );
      res = refalrts::splice_elem( res, context[58] );
      refalrts::link_brackets( context[50], context[57] );
      res = refalrts::splice_elem( res, context[57] );
      res = refalrts::splice_evar( res, context[55], context[56] );
      res = refalrts::splice_stvar( res, context[54] );
      res = refalrts::splice_stvar( res, context[53] );
      res = refalrts::splice_elem( res, context[52] );
      res = refalrts::splice_elem( res, context[51] );
      res = refalrts::splice_elem( res, context[50] );
      res = refalrts::splice_evar( res, context[2], context[3] );
      res = refalrts::splice_elem( res, context[49] );
      refalrts::link_brackets( context[47], context[48] );
      res = refalrts::splice_elem( res, context[48] );
      res = refalrts::splice_evar( res, context[4], context[5] );
      res = refalrts::splice_elem( res, context[47] );
      res = refalrts::splice_evar( res, context[18], context[19] );
      refalrts::link_brackets( context[44], context[46] );
      res = refalrts::splice_elem( res, context[46] );
      res = refalrts::splice_evar( res, context[11], context[12] );
      res = refalrts::splice_stvar( res, context[13] );
      res = refalrts::splice_elem( res, context[45] );
      res = refalrts::splice_elem( res, context[44] );
      refalrts::link_brackets( context[38], context[43] );
      res = refalrts::splice_elem( res, context[43] );
      refalrts::link_brackets( context[40], context[42] );
      res = refalrts::splice_elem( res, context[42] );
      res = refalrts::splice_elem( res, context[41] );
      res = refalrts::splice_elem( res, context[40] );
      res = refalrts::splice_elem( res, context[39] );
      res = refalrts::splice_elem( res, context[38] );
      refalrts::link_brackets( context[34], context[37] );
      res = refalrts::splice_elem( res, context[37] );
      res = refalrts::splice_evar( res, context[14], context[15] );
      res = refalrts::splice_stvar( res, context[36] );
      res = refalrts::splice_elem( res, context[35] );
      res = refalrts::splice_elem( res, context[34] );
      refalrts::link_brackets( context[25], context[33] );
      res = refalrts::splice_elem( res, context[33] );
      refalrts::link_brackets( context[30], context[32] );
      res = refalrts::splice_elem( res, context[32] );
      res = refalrts::splice_evar( res, context[16], context[17] );
      res = refalrts::splice_elem( res, context[31] );
      res = refalrts::splice_elem( res, context[30] );
      refalrts::link_brackets( context[27], context[29] );
      res = refalrts::splice_elem( res, context[29] );
      res = refalrts::splice_elem( res, context[28] );
      res = refalrts::splice_elem( res, context[27] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      res = refalrts::splice_elem( res, context[26] );
      res = refalrts::splice_elem( res, context[25] );
      res = refalrts::splice_evar( res, context[7], context[8] );
      refalrts::push_stack( context[24] );
      refalrts::push_stack( context[22] );
      res = refalrts::splice_elem( res, context[24] );
      res = refalrts::splice_stvar( res, context[6] );
      res = refalrts::splice_elem( res, context[23] );
      res = refalrts::splice_elem( res, context[22] );
      res = refalrts::splice_elem( res, context[21] );
      res = refalrts::splice_elem( res, context[20] );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[7], context[8], context[0], context[1] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    // s.ContextOffset#1/6 e.Ranges_B#1/7 ( # Range s.Num#1/17 e.Range#1/9 ( # ADT_Brackets ( e.Name#1/15 ) e.SubRange#1/13 ) ) ( # Junk e.Junk#1/11 ) e.Ranges_E#1/18 ( e.Vars#1/4 ) ( e.Commands#1/2 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_right( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_right( context[4], context[5], context[0], context[1] ) )
      continue;
    // closed e.Vars#1 as range 4
    // closed e.Commands#1 as range 2
    if( ! refalrts::svar_left( context[6], context[0], context[1] ) )
      continue;
    context[7] = 0;
    context[8] = 0;
    refalrts::start_e_loop();
    do {
      context[18] = context[0];
      context[19] = context[1];
      context[9] = 0;
      context[10] = 0;
      if( ! refalrts::brackets_left( context[9], context[10], context[18], context[19] ) )
        continue;
      if( ! refalrts::ident_left(  & ident_Range<int>::name, context[9], context[10] ) )
        continue;
      context[11] = 0;
      context[12] = 0;
      if( ! refalrts::brackets_left( context[11], context[12], context[18], context[19] ) )
        continue;
      if( ! refalrts::ident_left(  & ident_Junk<int>::name, context[11], context[12] ) )
        continue;
      context[13] = 0;
      context[14] = 0;
      if( ! refalrts::brackets_right( context[13], context[14], context[9], context[10] ) )
        continue;
      if( ! refalrts::ident_left(  & ident_ADT_Brackets<int>::name, context[13], context[14] ) )
        continue;
      context[15] = 0;
      context[16] = 0;
      if( ! refalrts::brackets_left( context[15], context[16], context[13], context[14] ) )
        continue;
      // closed e.Name#1 as range 15
      // closed e.SubRange#1 as range 13
      // closed e.Junk#1 as range 11
      // closed e.Ranges_E#1 as range 0
      if( ! refalrts::svar_left( context[17], context[9], context[10] ) )
        continue;
      // closed e.Range#1 as range 9
      //2: e.Commands#1
      //4: e.Vars#1
      //6: s.ContextOffset#1
      //7: e.Ranges_B#1
      //9: e.Range#1
      //11: e.Junk#1
      //13: e.SubRange#1
      //15: e.Name#1
      //17: s.Num#1
      //18: e.Ranges_E#1
      //39: s.ContextOffset#1
      //53: s.Num#1
      //54: s.ContextOffset#1
      //55: e.Name#1

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::alloc_open_call( context[20] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[21], DoGenPattern, "DoGenPattern" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_call( context[22] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[23], Inc2, "Inc2" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[24] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[25] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[26], & ident_Range<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[27] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[28] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[29], & ident_Junk<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[30] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[31], & ident_TkOpenADT<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[32] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[33] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[34], & ident_TkName<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[35] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[36] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[37] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[38], & ident_Range<int>::name ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[39], context[6]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[40] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[41] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[42], & ident_Junk<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[43] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[44], & ident_TkCloseADT<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[45] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[46] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[47] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[48] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[49] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[50] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[51], & ident_CmdADT<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[52], & ident_AlgRight<int>::name ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[53], context[17]))
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[54], context[39]))
        return refalrts::cNoMemory;
      if (! refalrts::copy_evar(context[55], context[56], context[15], context[16]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[57] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[58] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[59] ) )
        return refalrts::cNoMemory;
      refalrts::push_stack( context[59] );
      refalrts::push_stack( context[20] );
      res = refalrts::splice_elem( res, context[59] );
      refalrts::link_brackets( context[49], context[58] );
      res = refalrts::splice_elem( res, context[58] );
      refalrts::link_brackets( context[50], context[57] );
      res = refalrts::splice_elem( res, context[57] );
      res = refalrts::splice_evar( res, context[55], context[56] );
      res = refalrts::splice_stvar( res, context[54] );
      res = refalrts::splice_stvar( res, context[53] );
      res = refalrts::splice_elem( res, context[52] );
      res = refalrts::splice_elem( res, context[51] );
      res = refalrts::splice_elem( res, context[50] );
      res = refalrts::splice_evar( res, context[2], context[3] );
      res = refalrts::splice_elem( res, context[49] );
      refalrts::link_brackets( context[47], context[48] );
      res = refalrts::splice_elem( res, context[48] );
      res = refalrts::splice_evar( res, context[4], context[5] );
      res = refalrts::splice_elem( res, context[47] );
      res = refalrts::splice_evar( res, context[18], context[19] );
      refalrts::link_brackets( context[41], context[46] );
      res = refalrts::splice_elem( res, context[46] );
      res = refalrts::splice_evar( res, context[11], context[12] );
      refalrts::link_brackets( context[43], context[45] );
      res = refalrts::splice_elem( res, context[45] );
      res = refalrts::splice_elem( res, context[44] );
      res = refalrts::splice_elem( res, context[43] );
      res = refalrts::splice_elem( res, context[42] );
      res = refalrts::splice_elem( res, context[41] );
      refalrts::link_brackets( context[37], context[40] );
      res = refalrts::splice_elem( res, context[40] );
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_stvar( res, context[39] );
      res = refalrts::splice_elem( res, context[38] );
      res = refalrts::splice_elem( res, context[37] );
      refalrts::link_brackets( context[28], context[36] );
      res = refalrts::splice_elem( res, context[36] );
      refalrts::link_brackets( context[33], context[35] );
      res = refalrts::splice_elem( res, context[35] );
      res = refalrts::splice_evar( res, context[15], context[16] );
      res = refalrts::splice_elem( res, context[34] );
      res = refalrts::splice_elem( res, context[33] );
      refalrts::link_brackets( context[30], context[32] );
      res = refalrts::splice_elem( res, context[32] );
      res = refalrts::splice_elem( res, context[31] );
      res = refalrts::splice_elem( res, context[30] );
      res = refalrts::splice_elem( res, context[29] );
      res = refalrts::splice_elem( res, context[28] );
      refalrts::link_brackets( context[25], context[27] );
      res = refalrts::splice_elem( res, context[27] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      res = refalrts::splice_stvar( res, context[17] );
      res = refalrts::splice_elem( res, context[26] );
      res = refalrts::splice_elem( res, context[25] );
      res = refalrts::splice_evar( res, context[7], context[8] );
      refalrts::push_stack( context[24] );
      refalrts::push_stack( context[22] );
      res = refalrts::splice_elem( res, context[24] );
      res = refalrts::splice_stvar( res, context[6] );
      res = refalrts::splice_elem( res, context[23] );
      res = refalrts::splice_elem( res, context[22] );
      res = refalrts::splice_elem( res, context[21] );
      res = refalrts::splice_elem( res, context[20] );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[7], context[8], context[0], context[1] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    // s.ContextOffset#1/6 e.Ranges_B#1/7 ( # Junk e.Junk1#1/9 ) ( # Range s.Num#1/15 ) ( # Junk e.Junk2#1/13 ) e.Ranges_E#1/16 ( e.Vars#1/4 ) ( e.Commands#1/2 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_right( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_right( context[4], context[5], context[0], context[1] ) )
      continue;
    // closed e.Vars#1 as range 4
    // closed e.Commands#1 as range 2
    if( ! refalrts::svar_left( context[6], context[0], context[1] ) )
      continue;
    context[7] = 0;
    context[8] = 0;
    refalrts::start_e_loop();
    do {
      context[16] = context[0];
      context[17] = context[1];
      context[9] = 0;
      context[10] = 0;
      if( ! refalrts::brackets_left( context[9], context[10], context[16], context[17] ) )
        continue;
      if( ! refalrts::ident_left(  & ident_Junk<int>::name, context[9], context[10] ) )
        continue;
      context[11] = 0;
      context[12] = 0;
      if( ! refalrts::brackets_left( context[11], context[12], context[16], context[17] ) )
        continue;
      if( ! refalrts::ident_left(  & ident_Range<int>::name, context[11], context[12] ) )
        continue;
      context[13] = 0;
      context[14] = 0;
      if( ! refalrts::brackets_left( context[13], context[14], context[16], context[17] ) )
        continue;
      if( ! refalrts::ident_left(  & ident_Junk<int>::name, context[13], context[14] ) )
        continue;
      // closed e.Junk1#1 as range 9
      // closed e.Junk2#1 as range 13
      // closed e.Ranges_E#1 as range 0
      if( ! refalrts::svar_left( context[15], context[11], context[12] ) )
        continue;
      if( ! refalrts::empty_seq( context[11], context[12] ) )
        continue;
      //2: e.Commands#1
      //4: e.Vars#1
      //6: s.ContextOffset#1
      //7: e.Ranges_B#1
      //9: e.Junk1#1
      //13: e.Junk2#1
      //15: s.Num#1
      //16: e.Ranges_E#1

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::alloc_open_call( context[18] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[19], DoGenPattern, "DoGenPattern" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[20] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[21], & ident_Junk<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[22] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[23] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[24] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[25] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[26] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[27], & ident_CmdEmpty<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[28], & ident_AlgLeft<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[29] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[30] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[31] ) )
        return refalrts::cNoMemory;
      refalrts::push_stack( context[31] );
      refalrts::push_stack( context[18] );
      res = refalrts::splice_elem( res, context[31] );
      refalrts::link_brackets( context[25], context[30] );
      res = refalrts::splice_elem( res, context[30] );
      refalrts::link_brackets( context[26], context[29] );
      res = refalrts::splice_elem( res, context[29] );
      res = refalrts::splice_stvar( res, context[15] );
      res = refalrts::splice_elem( res, context[28] );
      res = refalrts::splice_elem( res, context[27] );
      res = refalrts::splice_elem( res, context[26] );
      res = refalrts::splice_evar( res, context[2], context[3] );
      res = refalrts::splice_elem( res, context[25] );
      refalrts::link_brackets( context[23], context[24] );
      res = refalrts::splice_elem( res, context[24] );
      res = refalrts::splice_evar( res, context[4], context[5] );
      res = refalrts::splice_elem( res, context[23] );
      res = refalrts::splice_evar( res, context[16], context[17] );
      refalrts::link_brackets( context[20], context[22] );
      res = refalrts::splice_elem( res, context[22] );
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      res = refalrts::splice_elem( res, context[21] );
      res = refalrts::splice_elem( res, context[20] );
      res = refalrts::splice_evar( res, context[7], context[8] );
      res = refalrts::splice_stvar( res, context[6] );
      res = refalrts::splice_elem( res, context[19] );
      res = refalrts::splice_elem( res, context[18] );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[7], context[8], context[0], context[1] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    // s.ContextOffset#1/6 e.Ranges_B#1/7 ( # Junk e.Junk#1/9 ) ( # Range s.Num#1/13 ( # TkVariable s.Mode#1/16 e.Index#1/14 ) e.Range#1/11 ) e.Ranges_E#1/27 ( e.Vars_B#1/17 ( s.Mode#1/21 ( e.Index#1/24 ) e.Offsets#1/19 s.SampleOffset#1/26 ) e.Vars_E#1/31 ) ( e.Commands#1/2 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_right( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_right( context[4], context[5], context[0], context[1] ) )
      continue;
    // closed e.Commands#1 as range 2
    if( ! refalrts::svar_left( context[6], context[0], context[1] ) )
      continue;
    context[7] = 0;
    context[8] = 0;
    refalrts::start_e_loop();
    do {
      context[27] = context[0];
      context[28] = context[1];
      context[29] = context[4];
      context[30] = context[5];
      context[9] = 0;
      context[10] = 0;
      if( ! refalrts::brackets_left( context[9], context[10], context[27], context[28] ) )
        continue;
      if( ! refalrts::ident_left(  & ident_Junk<int>::name, context[9], context[10] ) )
        continue;
      context[11] = 0;
      context[12] = 0;
      if( ! refalrts::brackets_left( context[11], context[12], context[27], context[28] ) )
        continue;
      if( ! refalrts::ident_left(  & ident_Range<int>::name, context[11], context[12] ) )
        continue;
      // closed e.Junk#1 as range 9
      // closed e.Ranges_E#1 as range 0
      if( ! refalrts::svar_left( context[13], context[11], context[12] ) )
        continue;
      context[14] = 0;
      context[15] = 0;
      if( ! refalrts::brackets_left( context[14], context[15], context[11], context[12] ) )
        continue;
      if( ! refalrts::ident_left(  & ident_TkVariable<int>::name, context[14], context[15] ) )
        continue;
      // closed e.Range#1 as range 11
      if( ! refalrts::svar_left( context[16], context[14], context[15] ) )
        continue;
      // closed e.Index#1 as range 14
      context[17] = 0;
      context[18] = 0;
      refalrts::start_e_loop();
      do {
        context[31] = context[29];
        context[32] = context[30];
        context[19] = 0;
        context[20] = 0;
        if( ! refalrts::brackets_left( context[19], context[20], context[31], context[32] ) )
          continue;
        if( ! refalrts::repeated_stvar_left( context[21], context[16], context[19], context[20] ) )
          continue;
        context[22] = 0;
        context[23] = 0;
        if( ! refalrts::brackets_left( context[22], context[23], context[19], context[20] ) )
          continue;
        if( ! refalrts::repeated_evar_left( context[24], context[25], context[14], context[15], context[22], context[23] ) )
          continue;
        if( ! refalrts::empty_seq( context[22], context[23] ) )
          continue;
        // closed e.Vars_E#1 as range 4
        if( ! refalrts::svar_right( context[26], context[19], context[20] ) )
          continue;
        // closed e.Offsets#1 as range 19
        //2: e.Commands#1
        //6: s.ContextOffset#1
        //7: e.Ranges_B#1
        //9: e.Junk#1
        //11: e.Range#1
        //13: s.Num#1
        //14: e.Index#1
        //16: s.Mode#1
        //17: e.Vars_B#1
        //19: e.Offsets#1
        //21: s.Mode#1
        //24: e.Index#1
        //26: s.SampleOffset#1
        //27: e.Ranges_E#1
        //31: e.Vars_E#1
        //42: s.ContextOffset#1
        //50: s.Mode#1
        //53: s.ContextOffset#1
        //60: s.Num#1
        //61: s.Mode#1
        //62: s.ContextOffset#1
        //63: s.SampleOffset#1

        refalrts::reset_allocator();
        refalrts::Iter res = arg_begin;
        if( ! refalrts::alloc_open_call( context[33] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_name( context[34], DoGenPattern, "DoGenPattern" ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_open_call( context[35] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_name( context[36], IncVarOffset, "IncVarOffset" ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_call( context[37] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_open_bracket( context[38] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_ident( context[39], & ident_Junk<int>::name ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_open_bracket( context[40] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_ident( context[41], & ident_TkVariable<int>::name ) )
          return refalrts::cNoMemory;
        if (! refalrts::copy_stvar(context[42], context[6]))
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_bracket( context[43] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_bracket( context[44] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_open_bracket( context[45] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_ident( context[46], & ident_Range<int>::name ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_bracket( context[47] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_open_bracket( context[48] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_open_bracket( context[49] ) )
          return refalrts::cNoMemory;
        if (! refalrts::copy_stvar(context[50], context[21]))
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_open_bracket( context[51] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_bracket( context[52] ) )
          return refalrts::cNoMemory;
        if (! refalrts::copy_stvar(context[53], context[42]))
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_bracket( context[54] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_bracket( context[55] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_open_bracket( context[56] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_open_bracket( context[57] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_ident( context[58], & ident_CmdRepeated<int>::name ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_ident( context[59], & ident_AlgLeft<int>::name ) )
          return refalrts::cNoMemory;
        if (! refalrts::copy_stvar(context[60], context[13]))
          return refalrts::cNoMemory;
        if (! refalrts::copy_stvar(context[61], context[50]))
          return refalrts::cNoMemory;
        if (! refalrts::copy_stvar(context[62], context[53]))
          return refalrts::cNoMemory;
        if (! refalrts::copy_stvar(context[63], context[26]))
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_bracket( context[64] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_bracket( context[65] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_call( context[66] ) )
          return refalrts::cNoMemory;
        refalrts::push_stack( context[66] );
        refalrts::push_stack( context[33] );
        res = refalrts::splice_elem( res, context[66] );
        refalrts::link_brackets( context[56], context[65] );
        res = refalrts::splice_elem( res, context[65] );
        refalrts::link_brackets( context[57], context[64] );
        res = refalrts::splice_elem( res, context[64] );
        res = refalrts::splice_stvar( res, context[63] );
        res = refalrts::splice_stvar( res, context[62] );
        res = refalrts::splice_stvar( res, context[61] );
        res = refalrts::splice_stvar( res, context[60] );
        res = refalrts::splice_elem( res, context[59] );
        res = refalrts::splice_elem( res, context[58] );
        res = refalrts::splice_elem( res, context[57] );
        res = refalrts::splice_evar( res, context[2], context[3] );
        res = refalrts::splice_elem( res, context[56] );
        refalrts::link_brackets( context[48], context[55] );
        res = refalrts::splice_elem( res, context[55] );
        res = refalrts::splice_evar( res, context[31], context[32] );
        refalrts::link_brackets( context[49], context[54] );
        res = refalrts::splice_elem( res, context[54] );
        res = refalrts::splice_stvar( res, context[53] );
        res = refalrts::splice_stvar( res, context[26] );
        res = refalrts::splice_evar( res, context[19], context[20] );
        refalrts::link_brackets( context[51], context[52] );
        res = refalrts::splice_elem( res, context[52] );
        res = refalrts::splice_evar( res, context[24], context[25] );
        res = refalrts::splice_elem( res, context[51] );
        res = refalrts::splice_stvar( res, context[50] );
        res = refalrts::splice_elem( res, context[49] );
        res = refalrts::splice_evar( res, context[17], context[18] );
        res = refalrts::splice_elem( res, context[48] );
        res = refalrts::splice_evar( res, context[27], context[28] );
        refalrts::link_brackets( context[45], context[47] );
        res = refalrts::splice_elem( res, context[47] );
        res = refalrts::splice_evar( res, context[11], context[12] );
        res = refalrts::splice_stvar( res, context[13] );
        res = refalrts::splice_elem( res, context[46] );
        res = refalrts::splice_elem( res, context[45] );
        refalrts::link_brackets( context[38], context[44] );
        res = refalrts::splice_elem( res, context[44] );
        refalrts::link_brackets( context[40], context[43] );
        res = refalrts::splice_elem( res, context[43] );
        res = refalrts::splice_stvar( res, context[42] );
        res = refalrts::splice_evar( res, context[14], context[15] );
        res = refalrts::splice_stvar( res, context[21] );
        res = refalrts::splice_elem( res, context[41] );
        res = refalrts::splice_elem( res, context[40] );
        res = refalrts::splice_evar( res, context[9], context[10] );
        res = refalrts::splice_elem( res, context[39] );
        res = refalrts::splice_elem( res, context[38] );
        res = refalrts::splice_evar( res, context[7], context[8] );
        refalrts::push_stack( context[37] );
        refalrts::push_stack( context[35] );
        res = refalrts::splice_elem( res, context[37] );
        res = refalrts::splice_stvar( res, context[16] );
        res = refalrts::splice_stvar( res, context[6] );
        res = refalrts::splice_elem( res, context[36] );
        res = refalrts::splice_elem( res, context[35] );
        res = refalrts::splice_elem( res, context[34] );
        res = refalrts::splice_elem( res, context[33] );
        refalrts::use( res );
        refalrts::splice_to_freelist( arg_begin, arg_end );
        return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
      } while ( refalrts::open_evar_advance( context[17], context[18], context[29], context[30] ) );
    } while ( refalrts::open_evar_advance( context[7], context[8], context[0], context[1] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    // s.ContextOffset#1/6 e.Ranges_B#1/7 ( # Range s.Num#1/15 e.Range#1/9 ( # TkVariable s.Mode#1/16 e.Index#1/13 ) ) ( # Junk e.Junk#1/11 ) e.Ranges_E#1/27 ( e.Vars_B#1/17 ( s.Mode#1/21 ( e.Index#1/24 ) e.Offsets#1/19 s.SampleOffset#1/26 ) e.Vars_E#1/31 ) ( e.Commands#1/2 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_right( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_right( context[4], context[5], context[0], context[1] ) )
      continue;
    // closed e.Commands#1 as range 2
    if( ! refalrts::svar_left( context[6], context[0], context[1] ) )
      continue;
    context[7] = 0;
    context[8] = 0;
    refalrts::start_e_loop();
    do {
      context[27] = context[0];
      context[28] = context[1];
      context[29] = context[4];
      context[30] = context[5];
      context[9] = 0;
      context[10] = 0;
      if( ! refalrts::brackets_left( context[9], context[10], context[27], context[28] ) )
        continue;
      if( ! refalrts::ident_left(  & ident_Range<int>::name, context[9], context[10] ) )
        continue;
      context[11] = 0;
      context[12] = 0;
      if( ! refalrts::brackets_left( context[11], context[12], context[27], context[28] ) )
        continue;
      if( ! refalrts::ident_left(  & ident_Junk<int>::name, context[11], context[12] ) )
        continue;
      context[13] = 0;
      context[14] = 0;
      if( ! refalrts::brackets_right( context[13], context[14], context[9], context[10] ) )
        continue;
      if( ! refalrts::ident_left(  & ident_TkVariable<int>::name, context[13], context[14] ) )
        continue;
      // closed e.Junk#1 as range 11
      // closed e.Ranges_E#1 as range 0
      if( ! refalrts::svar_left( context[15], context[9], context[10] ) )
        continue;
      // closed e.Range#1 as range 9
      if( ! refalrts::svar_left( context[16], context[13], context[14] ) )
        continue;
      // closed e.Index#1 as range 13
      context[17] = 0;
      context[18] = 0;
      refalrts::start_e_loop();
      do {
        context[31] = context[29];
        context[32] = context[30];
        context[19] = 0;
        context[20] = 0;
        if( ! refalrts::brackets_left( context[19], context[20], context[31], context[32] ) )
          continue;
        if( ! refalrts::repeated_stvar_left( context[21], context[16], context[19], context[20] ) )
          continue;
        context[22] = 0;
        context[23] = 0;
        if( ! refalrts::brackets_left( context[22], context[23], context[19], context[20] ) )
          continue;
        if( ! refalrts::repeated_evar_left( context[24], context[25], context[13], context[14], context[22], context[23] ) )
          continue;
        if( ! refalrts::empty_seq( context[22], context[23] ) )
          continue;
        // closed e.Vars_E#1 as range 4
        if( ! refalrts::svar_right( context[26], context[19], context[20] ) )
          continue;
        // closed e.Offsets#1 as range 19
        //2: e.Commands#1
        //6: s.ContextOffset#1
        //7: e.Ranges_B#1
        //9: e.Range#1
        //11: e.Junk#1
        //13: e.Index#1
        //15: s.Num#1
        //16: s.Mode#1
        //17: e.Vars_B#1
        //19: e.Offsets#1
        //21: s.Mode#1
        //24: e.Index#1
        //26: s.SampleOffset#1
        //27: e.Ranges_E#1
        //31: e.Vars_E#1
        //45: s.ContextOffset#1
        //50: s.Mode#1
        //53: s.ContextOffset#1
        //60: s.Num#1
        //61: s.Mode#1
        //62: s.ContextOffset#1
        //63: s.SampleOffset#1

        refalrts::reset_allocator();
        refalrts::Iter res = arg_begin;
        if( ! refalrts::alloc_open_call( context[33] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_name( context[34], DoGenPattern, "DoGenPattern" ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_open_call( context[35] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_name( context[36], IncVarOffset, "IncVarOffset" ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_call( context[37] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_open_bracket( context[38] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_ident( context[39], & ident_Range<int>::name ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_bracket( context[40] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_open_bracket( context[41] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_ident( context[42], & ident_Junk<int>::name ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_open_bracket( context[43] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_ident( context[44], & ident_TkVariable<int>::name ) )
          return refalrts::cNoMemory;
        if (! refalrts::copy_stvar(context[45], context[6]))
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_bracket( context[46] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_bracket( context[47] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_open_bracket( context[48] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_open_bracket( context[49] ) )
          return refalrts::cNoMemory;
        if (! refalrts::copy_stvar(context[50], context[21]))
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_open_bracket( context[51] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_bracket( context[52] ) )
          return refalrts::cNoMemory;
        if (! refalrts::copy_stvar(context[53], context[45]))
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_bracket( context[54] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_bracket( context[55] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_open_bracket( context[56] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_open_bracket( context[57] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_ident( context[58], & ident_CmdRepeated<int>::name ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_ident( context[59], & ident_AlgRight<int>::name ) )
          return refalrts::cNoMemory;
        if (! refalrts::copy_stvar(context[60], context[15]))
          return refalrts::cNoMemory;
        if (! refalrts::copy_stvar(context[61], context[50]))
          return refalrts::cNoMemory;
        if (! refalrts::copy_stvar(context[62], context[53]))
          return refalrts::cNoMemory;
        if (! refalrts::copy_stvar(context[63], context[26]))
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_bracket( context[64] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_bracket( context[65] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_call( context[66] ) )
          return refalrts::cNoMemory;
        refalrts::push_stack( context[66] );
        refalrts::push_stack( context[33] );
        res = refalrts::splice_elem( res, context[66] );
        refalrts::link_brackets( context[56], context[65] );
        res = refalrts::splice_elem( res, context[65] );
        refalrts::link_brackets( context[57], context[64] );
        res = refalrts::splice_elem( res, context[64] );
        res = refalrts::splice_stvar( res, context[63] );
        res = refalrts::splice_stvar( res, context[62] );
        res = refalrts::splice_stvar( res, context[61] );
        res = refalrts::splice_stvar( res, context[60] );
        res = refalrts::splice_elem( res, context[59] );
        res = refalrts::splice_elem( res, context[58] );
        res = refalrts::splice_elem( res, context[57] );
        res = refalrts::splice_evar( res, context[2], context[3] );
        res = refalrts::splice_elem( res, context[56] );
        refalrts::link_brackets( context[48], context[55] );
        res = refalrts::splice_elem( res, context[55] );
        res = refalrts::splice_evar( res, context[31], context[32] );
        refalrts::link_brackets( context[49], context[54] );
        res = refalrts::splice_elem( res, context[54] );
        res = refalrts::splice_stvar( res, context[53] );
        res = refalrts::splice_stvar( res, context[26] );
        res = refalrts::splice_evar( res, context[19], context[20] );
        refalrts::link_brackets( context[51], context[52] );
        res = refalrts::splice_elem( res, context[52] );
        res = refalrts::splice_evar( res, context[24], context[25] );
        res = refalrts::splice_elem( res, context[51] );
        res = refalrts::splice_stvar( res, context[50] );
        res = refalrts::splice_elem( res, context[49] );
        res = refalrts::splice_evar( res, context[17], context[18] );
        res = refalrts::splice_elem( res, context[48] );
        res = refalrts::splice_evar( res, context[27], context[28] );
        refalrts::link_brackets( context[41], context[47] );
        res = refalrts::splice_elem( res, context[47] );
        res = refalrts::splice_evar( res, context[11], context[12] );
        refalrts::link_brackets( context[43], context[46] );
        res = refalrts::splice_elem( res, context[46] );
        res = refalrts::splice_stvar( res, context[45] );
        res = refalrts::splice_evar( res, context[13], context[14] );
        res = refalrts::splice_stvar( res, context[21] );
        res = refalrts::splice_elem( res, context[44] );
        res = refalrts::splice_elem( res, context[43] );
        res = refalrts::splice_elem( res, context[42] );
        res = refalrts::splice_elem( res, context[41] );
        refalrts::link_brackets( context[38], context[40] );
        res = refalrts::splice_elem( res, context[40] );
        res = refalrts::splice_evar( res, context[9], context[10] );
        res = refalrts::splice_stvar( res, context[15] );
        res = refalrts::splice_elem( res, context[39] );
        res = refalrts::splice_elem( res, context[38] );
        res = refalrts::splice_evar( res, context[7], context[8] );
        refalrts::push_stack( context[37] );
        refalrts::push_stack( context[35] );
        res = refalrts::splice_elem( res, context[37] );
        res = refalrts::splice_stvar( res, context[16] );
        res = refalrts::splice_stvar( res, context[6] );
        res = refalrts::splice_elem( res, context[36] );
        res = refalrts::splice_elem( res, context[35] );
        res = refalrts::splice_elem( res, context[34] );
        res = refalrts::splice_elem( res, context[33] );
        refalrts::use( res );
        refalrts::splice_to_freelist( arg_begin, arg_end );
        return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
      } while ( refalrts::open_evar_advance( context[17], context[18], context[29], context[30] ) );
    } while ( refalrts::open_evar_advance( context[7], context[8], context[0], context[1] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    // s.ContextOffset#1/6 e.Ranges_B#1/7 ( # Junk e.Junk1#1/9 ) ( # Range s.Num#1/17 ( # TkVariable 'e' e.Index#1/15 ) ) ( # Junk e.Junk2#1/13 ) e.Ranges_E#1/18 ( e.Vars#1/4 ) ( e.Commands#1/2 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_right( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_right( context[4], context[5], context[0], context[1] ) )
      continue;
    // closed e.Vars#1 as range 4
    // closed e.Commands#1 as range 2
    if( ! refalrts::svar_left( context[6], context[0], context[1] ) )
      continue;
    context[7] = 0;
    context[8] = 0;
    refalrts::start_e_loop();
    do {
      context[18] = context[0];
      context[19] = context[1];
      context[9] = 0;
      context[10] = 0;
      if( ! refalrts::brackets_left( context[9], context[10], context[18], context[19] ) )
        continue;
      if( ! refalrts::ident_left(  & ident_Junk<int>::name, context[9], context[10] ) )
        continue;
      context[11] = 0;
      context[12] = 0;
      if( ! refalrts::brackets_left( context[11], context[12], context[18], context[19] ) )
        continue;
      if( ! refalrts::ident_left(  & ident_Range<int>::name, context[11], context[12] ) )
        continue;
      context[13] = 0;
      context[14] = 0;
      if( ! refalrts::brackets_left( context[13], context[14], context[18], context[19] ) )
        continue;
      if( ! refalrts::ident_left(  & ident_Junk<int>::name, context[13], context[14] ) )
        continue;
      context[15] = 0;
      context[16] = 0;
      if( ! refalrts::brackets_right( context[15], context[16], context[11], context[12] ) )
        continue;
      if( ! refalrts::ident_left(  & ident_TkVariable<int>::name, context[15], context[16] ) )
        continue;
      if( ! refalrts::char_left( 'e', context[15], context[16] ) )
        continue;
      // closed e.Junk1#1 as range 9
      // closed e.Index#1 as range 15
      // closed e.Junk2#1 as range 13
      // closed e.Ranges_E#1 as range 0
      if( ! refalrts::svar_left( context[17], context[11], context[12] ) )
        continue;
      if( ! refalrts::empty_seq( context[11], context[12] ) )
        continue;
      //2: e.Commands#1
      //4: e.Vars#1
      //6: s.ContextOffset#1
      //7: e.Ranges_B#1
      //9: e.Junk1#1
      //13: e.Junk2#1
      //15: e.Index#1
      //17: s.Num#1
      //18: e.Ranges_E#1
      //33: e.Index#1
      //36: s.Num#1
      //47: e.Index#1
      //54: s.Num#1

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::alloc_open_call( context[20] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[21], DoGenPattern, "DoGenPattern" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[22] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[23], & ident_Junk<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[24] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[25], & ident_TkVariable<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[26], 'e' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[27] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[28] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[29] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[30] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[31], 'e' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[32] ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_evar(context[33], context[34], context[15], context[16]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[35] ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[36], context[17]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[37] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[38] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[39] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[40] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[41], & ident_CmdComment<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_chars( context[42], context[43], " closed ", 8 ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_call( context[44] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[45], PrintVar, "PrintVar" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[46], 'e' ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_evar(context[47], context[48], context[33], context[34]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[49] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_chars( context[50], context[51], " as range ", 10 ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_call( context[52] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[53], StrFromInt, "StrFromInt" ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[54], context[36]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[55] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[56] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[57] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[58] ) )
        return refalrts::cNoMemory;
      refalrts::push_stack( context[58] );
      refalrts::push_stack( context[20] );
      res = refalrts::splice_elem( res, context[58] );
      refalrts::link_brackets( context[39], context[57] );
      res = refalrts::splice_elem( res, context[57] );
      refalrts::link_brackets( context[40], context[56] );
      res = refalrts::splice_elem( res, context[56] );
      refalrts::push_stack( context[55] );
      refalrts::push_stack( context[52] );
      res = refalrts::splice_elem( res, context[55] );
      res = refalrts::splice_stvar( res, context[54] );
      res = refalrts::splice_elem( res, context[53] );
      res = refalrts::splice_elem( res, context[52] );
      res = refalrts::splice_evar( res, context[50], context[51] );
      refalrts::push_stack( context[49] );
      refalrts::push_stack( context[44] );
      res = refalrts::splice_elem( res, context[49] );
      res = refalrts::splice_evar( res, context[47], context[48] );
      res = refalrts::splice_elem( res, context[46] );
      res = refalrts::splice_elem( res, context[45] );
      res = refalrts::splice_elem( res, context[44] );
      res = refalrts::splice_evar( res, context[42], context[43] );
      res = refalrts::splice_elem( res, context[41] );
      res = refalrts::splice_elem( res, context[40] );
      res = refalrts::splice_evar( res, context[2], context[3] );
      res = refalrts::splice_elem( res, context[39] );
      refalrts::link_brackets( context[29], context[38] );
      res = refalrts::splice_elem( res, context[38] );
      refalrts::link_brackets( context[30], context[37] );
      res = refalrts::splice_elem( res, context[37] );
      res = refalrts::splice_stvar( res, context[36] );
      refalrts::link_brackets( context[32], context[35] );
      res = refalrts::splice_elem( res, context[35] );
      res = refalrts::splice_evar( res, context[33], context[34] );
      res = refalrts::splice_elem( res, context[32] );
      res = refalrts::splice_elem( res, context[31] );
      res = refalrts::splice_elem( res, context[30] );
      res = refalrts::splice_evar( res, context[4], context[5] );
      res = refalrts::splice_elem( res, context[29] );
      res = refalrts::splice_evar( res, context[18], context[19] );
      refalrts::link_brackets( context[22], context[28] );
      res = refalrts::splice_elem( res, context[28] );
      res = refalrts::splice_evar( res, context[13], context[14] );
      refalrts::link_brackets( context[24], context[27] );
      res = refalrts::splice_elem( res, context[27] );
      res = refalrts::splice_stvar( res, context[17] );
      res = refalrts::splice_evar( res, context[15], context[16] );
      res = refalrts::splice_elem( res, context[26] );
      res = refalrts::splice_elem( res, context[25] );
      res = refalrts::splice_elem( res, context[24] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      res = refalrts::splice_elem( res, context[23] );
      res = refalrts::splice_elem( res, context[22] );
      res = refalrts::splice_evar( res, context[7], context[8] );
      res = refalrts::splice_stvar( res, context[6] );
      res = refalrts::splice_elem( res, context[21] );
      res = refalrts::splice_elem( res, context[20] );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[7], context[8], context[0], context[1] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    // s.ContextOffset#1/6 e.Ranges_B#1/7 ( # Junk e.Junk#1/9 ) ( # Range s.Num#1/13 ( # TkVariable 's' e.Index#1/14 ) e.Range#1/11 ) e.Ranges_E#1/16 ( e.Vars#1/4 ) ( e.Commands#1/2 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_right( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_right( context[4], context[5], context[0], context[1] ) )
      continue;
    // closed e.Vars#1 as range 4
    // closed e.Commands#1 as range 2
    if( ! refalrts::svar_left( context[6], context[0], context[1] ) )
      continue;
    context[7] = 0;
    context[8] = 0;
    refalrts::start_e_loop();
    do {
      context[16] = context[0];
      context[17] = context[1];
      context[9] = 0;
      context[10] = 0;
      if( ! refalrts::brackets_left( context[9], context[10], context[16], context[17] ) )
        continue;
      if( ! refalrts::ident_left(  & ident_Junk<int>::name, context[9], context[10] ) )
        continue;
      context[11] = 0;
      context[12] = 0;
      if( ! refalrts::brackets_left( context[11], context[12], context[16], context[17] ) )
        continue;
      if( ! refalrts::ident_left(  & ident_Range<int>::name, context[11], context[12] ) )
        continue;
      // closed e.Junk#1 as range 9
      // closed e.Ranges_E#1 as range 0
      if( ! refalrts::svar_left( context[13], context[11], context[12] ) )
        continue;
      context[14] = 0;
      context[15] = 0;
      if( ! refalrts::brackets_left( context[14], context[15], context[11], context[12] ) )
        continue;
      if( ! refalrts::ident_left(  & ident_TkVariable<int>::name, context[14], context[15] ) )
        continue;
      if( ! refalrts::char_left( 's', context[14], context[15] ) )
        continue;
      // closed e.Index#1 as range 14
      // closed e.Range#1 as range 11
      //2: e.Commands#1
      //4: e.Vars#1
      //6: s.ContextOffset#1
      //7: e.Ranges_B#1
      //9: e.Junk#1
      //11: e.Range#1
      //13: s.Num#1
      //14: e.Index#1
      //16: e.Ranges_E#1
      //28: s.ContextOffset#1
      //38: e.Index#1
      //41: s.ContextOffset#1
      //48: s.Num#1
      //50: s.ContextOffset#1

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::alloc_open_call( context[18] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[19], DoGenPattern, "DoGenPattern" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_call( context[20] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[21], Inc, "Inc" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[22] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[23] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[24], & ident_Junk<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[25] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[26], & ident_TkVariable<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[27], 's' ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[28], context[6]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[29] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[30] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[31] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[32], & ident_Range<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[33] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[34] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[35] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[36], 's' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[37] ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_evar(context[38], context[39], context[14], context[15]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[40] ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[41], context[28]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[42] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[43] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[44] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[45] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[46], & ident_CmdVar<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[47], & ident_AlgLeft<int>::name ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[48], context[13]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[49], 's' ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[50], context[41]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[51] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[52] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[53] ) )
        return refalrts::cNoMemory;
      refalrts::push_stack( context[53] );
      refalrts::push_stack( context[18] );
      res = refalrts::splice_elem( res, context[53] );
      refalrts::link_brackets( context[44], context[52] );
      res = refalrts::splice_elem( res, context[52] );
      refalrts::link_brackets( context[45], context[51] );
      res = refalrts::splice_elem( res, context[51] );
      res = refalrts::splice_stvar( res, context[50] );
      res = refalrts::splice_elem( res, context[49] );
      res = refalrts::splice_stvar( res, context[48] );
      res = refalrts::splice_elem( res, context[47] );
      res = refalrts::splice_elem( res, context[46] );
      res = refalrts::splice_elem( res, context[45] );
      res = refalrts::splice_evar( res, context[2], context[3] );
      res = refalrts::splice_elem( res, context[44] );
      refalrts::link_brackets( context[34], context[43] );
      res = refalrts::splice_elem( res, context[43] );
      refalrts::link_brackets( context[35], context[42] );
      res = refalrts::splice_elem( res, context[42] );
      res = refalrts::splice_stvar( res, context[41] );
      refalrts::link_brackets( context[37], context[40] );
      res = refalrts::splice_elem( res, context[40] );
      res = refalrts::splice_evar( res, context[38], context[39] );
      res = refalrts::splice_elem( res, context[37] );
      res = refalrts::splice_elem( res, context[36] );
      res = refalrts::splice_elem( res, context[35] );
      res = refalrts::splice_evar( res, context[4], context[5] );
      res = refalrts::splice_elem( res, context[34] );
      res = refalrts::splice_evar( res, context[16], context[17] );
      refalrts::link_brackets( context[31], context[33] );
      res = refalrts::splice_elem( res, context[33] );
      res = refalrts::splice_evar( res, context[11], context[12] );
      res = refalrts::splice_stvar( res, context[13] );
      res = refalrts::splice_elem( res, context[32] );
      res = refalrts::splice_elem( res, context[31] );
      refalrts::link_brackets( context[23], context[30] );
      res = refalrts::splice_elem( res, context[30] );
      refalrts::link_brackets( context[25], context[29] );
      res = refalrts::splice_elem( res, context[29] );
      res = refalrts::splice_stvar( res, context[28] );
      res = refalrts::splice_evar( res, context[14], context[15] );
      res = refalrts::splice_elem( res, context[27] );
      res = refalrts::splice_elem( res, context[26] );
      res = refalrts::splice_elem( res, context[25] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      res = refalrts::splice_elem( res, context[24] );
      res = refalrts::splice_elem( res, context[23] );
      res = refalrts::splice_evar( res, context[7], context[8] );
      refalrts::push_stack( context[22] );
      refalrts::push_stack( context[20] );
      res = refalrts::splice_elem( res, context[22] );
      res = refalrts::splice_stvar( res, context[6] );
      res = refalrts::splice_elem( res, context[21] );
      res = refalrts::splice_elem( res, context[20] );
      res = refalrts::splice_elem( res, context[19] );
      res = refalrts::splice_elem( res, context[18] );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[7], context[8], context[0], context[1] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    // s.ContextOffset#1/6 e.Ranges_B#1/7 ( # Junk e.Junk#1/9 ) ( # Range s.Num#1/13 ( # TkVariable 't' e.Index#1/14 ) e.Range#1/11 ) e.Ranges_E#1/16 ( e.Vars#1/4 ) ( e.Commands#1/2 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_right( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_right( context[4], context[5], context[0], context[1] ) )
      continue;
    // closed e.Vars#1 as range 4
    // closed e.Commands#1 as range 2
    if( ! refalrts::svar_left( context[6], context[0], context[1] ) )
      continue;
    context[7] = 0;
    context[8] = 0;
    refalrts::start_e_loop();
    do {
      context[16] = context[0];
      context[17] = context[1];
      context[9] = 0;
      context[10] = 0;
      if( ! refalrts::brackets_left( context[9], context[10], context[16], context[17] ) )
        continue;
      if( ! refalrts::ident_left(  & ident_Junk<int>::name, context[9], context[10] ) )
        continue;
      context[11] = 0;
      context[12] = 0;
      if( ! refalrts::brackets_left( context[11], context[12], context[16], context[17] ) )
        continue;
      if( ! refalrts::ident_left(  & ident_Range<int>::name, context[11], context[12] ) )
        continue;
      // closed e.Junk#1 as range 9
      // closed e.Ranges_E#1 as range 0
      if( ! refalrts::svar_left( context[13], context[11], context[12] ) )
        continue;
      context[14] = 0;
      context[15] = 0;
      if( ! refalrts::brackets_left( context[14], context[15], context[11], context[12] ) )
        continue;
      if( ! refalrts::ident_left(  & ident_TkVariable<int>::name, context[14], context[15] ) )
        continue;
      if( ! refalrts::char_left( 't', context[14], context[15] ) )
        continue;
      // closed e.Index#1 as range 14
      // closed e.Range#1 as range 11
      //2: e.Commands#1
      //4: e.Vars#1
      //6: s.ContextOffset#1
      //7: e.Ranges_B#1
      //9: e.Junk#1
      //11: e.Range#1
      //13: s.Num#1
      //14: e.Index#1
      //16: e.Ranges_E#1
      //28: s.ContextOffset#1
      //38: e.Index#1
      //41: s.ContextOffset#1
      //48: s.Num#1
      //50: s.ContextOffset#1

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::alloc_open_call( context[18] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[19], DoGenPattern, "DoGenPattern" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_call( context[20] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[21], Inc, "Inc" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[22] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[23] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[24], & ident_Junk<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[25] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[26], & ident_TkVariable<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[27], 't' ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[28], context[6]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[29] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[30] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[31] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[32], & ident_Range<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[33] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[34] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[35] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[36], 't' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[37] ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_evar(context[38], context[39], context[14], context[15]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[40] ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[41], context[28]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[42] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[43] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[44] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[45] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[46], & ident_CmdVar<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[47], & ident_AlgLeft<int>::name ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[48], context[13]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[49], 't' ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[50], context[41]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[51] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[52] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[53] ) )
        return refalrts::cNoMemory;
      refalrts::push_stack( context[53] );
      refalrts::push_stack( context[18] );
      res = refalrts::splice_elem( res, context[53] );
      refalrts::link_brackets( context[44], context[52] );
      res = refalrts::splice_elem( res, context[52] );
      refalrts::link_brackets( context[45], context[51] );
      res = refalrts::splice_elem( res, context[51] );
      res = refalrts::splice_stvar( res, context[50] );
      res = refalrts::splice_elem( res, context[49] );
      res = refalrts::splice_stvar( res, context[48] );
      res = refalrts::splice_elem( res, context[47] );
      res = refalrts::splice_elem( res, context[46] );
      res = refalrts::splice_elem( res, context[45] );
      res = refalrts::splice_evar( res, context[2], context[3] );
      res = refalrts::splice_elem( res, context[44] );
      refalrts::link_brackets( context[34], context[43] );
      res = refalrts::splice_elem( res, context[43] );
      refalrts::link_brackets( context[35], context[42] );
      res = refalrts::splice_elem( res, context[42] );
      res = refalrts::splice_stvar( res, context[41] );
      refalrts::link_brackets( context[37], context[40] );
      res = refalrts::splice_elem( res, context[40] );
      res = refalrts::splice_evar( res, context[38], context[39] );
      res = refalrts::splice_elem( res, context[37] );
      res = refalrts::splice_elem( res, context[36] );
      res = refalrts::splice_elem( res, context[35] );
      res = refalrts::splice_evar( res, context[4], context[5] );
      res = refalrts::splice_elem( res, context[34] );
      res = refalrts::splice_evar( res, context[16], context[17] );
      refalrts::link_brackets( context[31], context[33] );
      res = refalrts::splice_elem( res, context[33] );
      res = refalrts::splice_evar( res, context[11], context[12] );
      res = refalrts::splice_stvar( res, context[13] );
      res = refalrts::splice_elem( res, context[32] );
      res = refalrts::splice_elem( res, context[31] );
      refalrts::link_brackets( context[23], context[30] );
      res = refalrts::splice_elem( res, context[30] );
      refalrts::link_brackets( context[25], context[29] );
      res = refalrts::splice_elem( res, context[29] );
      res = refalrts::splice_stvar( res, context[28] );
      res = refalrts::splice_evar( res, context[14], context[15] );
      res = refalrts::splice_elem( res, context[27] );
      res = refalrts::splice_elem( res, context[26] );
      res = refalrts::splice_elem( res, context[25] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      res = refalrts::splice_elem( res, context[24] );
      res = refalrts::splice_elem( res, context[23] );
      res = refalrts::splice_evar( res, context[7], context[8] );
      refalrts::push_stack( context[22] );
      refalrts::push_stack( context[20] );
      res = refalrts::splice_elem( res, context[22] );
      res = refalrts::splice_stvar( res, context[6] );
      res = refalrts::splice_elem( res, context[21] );
      res = refalrts::splice_elem( res, context[20] );
      res = refalrts::splice_elem( res, context[19] );
      res = refalrts::splice_elem( res, context[18] );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[7], context[8], context[0], context[1] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    // s.ContextOffset#1/6 e.Ranges_B#1/7 ( # Range s.Num#1/15 e.Range#1/9 ( # TkVariable 's' e.Index#1/13 ) ) ( # Junk e.Junk#1/11 ) e.Ranges_E#1/16 ( e.Vars#1/4 ) ( e.Commands#1/2 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_right( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_right( context[4], context[5], context[0], context[1] ) )
      continue;
    // closed e.Vars#1 as range 4
    // closed e.Commands#1 as range 2
    if( ! refalrts::svar_left( context[6], context[0], context[1] ) )
      continue;
    context[7] = 0;
    context[8] = 0;
    refalrts::start_e_loop();
    do {
      context[16] = context[0];
      context[17] = context[1];
      context[9] = 0;
      context[10] = 0;
      if( ! refalrts::brackets_left( context[9], context[10], context[16], context[17] ) )
        continue;
      if( ! refalrts::ident_left(  & ident_Range<int>::name, context[9], context[10] ) )
        continue;
      context[11] = 0;
      context[12] = 0;
      if( ! refalrts::brackets_left( context[11], context[12], context[16], context[17] ) )
        continue;
      if( ! refalrts::ident_left(  & ident_Junk<int>::name, context[11], context[12] ) )
        continue;
      context[13] = 0;
      context[14] = 0;
      if( ! refalrts::brackets_right( context[13], context[14], context[9], context[10] ) )
        continue;
      if( ! refalrts::ident_left(  & ident_TkVariable<int>::name, context[13], context[14] ) )
        continue;
      if( ! refalrts::char_left( 's', context[13], context[14] ) )
        continue;
      // closed e.Index#1 as range 13
      // closed e.Junk#1 as range 11
      // closed e.Ranges_E#1 as range 0
      if( ! refalrts::svar_left( context[15], context[9], context[10] ) )
        continue;
      // closed e.Range#1 as range 9
      //2: e.Commands#1
      //4: e.Vars#1
      //6: s.ContextOffset#1
      //7: e.Ranges_B#1
      //9: e.Range#1
      //11: e.Junk#1
      //13: e.Index#1
      //15: s.Num#1
      //16: e.Ranges_E#1
      //31: s.ContextOffset#1
      //38: e.Index#1
      //41: s.ContextOffset#1
      //48: s.Num#1
      //50: s.ContextOffset#1

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::alloc_open_call( context[18] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[19], DoGenPattern, "DoGenPattern" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_call( context[20] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[21], Inc, "Inc" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[22] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[23] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[24], & ident_Range<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[25] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[26] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[27], & ident_Junk<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[28] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[29], & ident_TkVariable<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[30], 's' ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[31], context[6]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[32] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[33] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[34] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[35] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[36], 's' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[37] ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_evar(context[38], context[39], context[13], context[14]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[40] ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[41], context[31]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[42] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[43] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[44] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[45] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[46], & ident_CmdVar<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[47], & ident_AlgRight<int>::name ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[48], context[15]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[49], 's' ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[50], context[41]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[51] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[52] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[53] ) )
        return refalrts::cNoMemory;
      refalrts::push_stack( context[53] );
      refalrts::push_stack( context[18] );
      res = refalrts::splice_elem( res, context[53] );
      refalrts::link_brackets( context[44], context[52] );
      res = refalrts::splice_elem( res, context[52] );
      refalrts::link_brackets( context[45], context[51] );
      res = refalrts::splice_elem( res, context[51] );
      res = refalrts::splice_stvar( res, context[50] );
      res = refalrts::splice_elem( res, context[49] );
      res = refalrts::splice_stvar( res, context[48] );
      res = refalrts::splice_elem( res, context[47] );
      res = refalrts::splice_elem( res, context[46] );
      res = refalrts::splice_elem( res, context[45] );
      res = refalrts::splice_evar( res, context[2], context[3] );
      res = refalrts::splice_elem( res, context[44] );
      refalrts::link_brackets( context[34], context[43] );
      res = refalrts::splice_elem( res, context[43] );
      refalrts::link_brackets( context[35], context[42] );
      res = refalrts::splice_elem( res, context[42] );
      res = refalrts::splice_stvar( res, context[41] );
      refalrts::link_brackets( context[37], context[40] );
      res = refalrts::splice_elem( res, context[40] );
      res = refalrts::splice_evar( res, context[38], context[39] );
      res = refalrts::splice_elem( res, context[37] );
      res = refalrts::splice_elem( res, context[36] );
      res = refalrts::splice_elem( res, context[35] );
      res = refalrts::splice_evar( res, context[4], context[5] );
      res = refalrts::splice_elem( res, context[34] );
      res = refalrts::splice_evar( res, context[16], context[17] );
      refalrts::link_brackets( context[26], context[33] );
      res = refalrts::splice_elem( res, context[33] );
      res = refalrts::splice_evar( res, context[11], context[12] );
      refalrts::link_brackets( context[28], context[32] );
      res = refalrts::splice_elem( res, context[32] );
      res = refalrts::splice_stvar( res, context[31] );
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_elem( res, context[30] );
      res = refalrts::splice_elem( res, context[29] );
      res = refalrts::splice_elem( res, context[28] );
      res = refalrts::splice_elem( res, context[27] );
      res = refalrts::splice_elem( res, context[26] );
      refalrts::link_brackets( context[23], context[25] );
      res = refalrts::splice_elem( res, context[25] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      res = refalrts::splice_stvar( res, context[15] );
      res = refalrts::splice_elem( res, context[24] );
      res = refalrts::splice_elem( res, context[23] );
      res = refalrts::splice_evar( res, context[7], context[8] );
      refalrts::push_stack( context[22] );
      refalrts::push_stack( context[20] );
      res = refalrts::splice_elem( res, context[22] );
      res = refalrts::splice_stvar( res, context[6] );
      res = refalrts::splice_elem( res, context[21] );
      res = refalrts::splice_elem( res, context[20] );
      res = refalrts::splice_elem( res, context[19] );
      res = refalrts::splice_elem( res, context[18] );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[7], context[8], context[0], context[1] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    // s.ContextOffset#1/6 e.Ranges_B#1/7 ( # Range s.Num#1/15 e.Range#1/9 ( # TkVariable 't' e.Index#1/13 ) ) ( # Junk e.Junk#1/11 ) e.Ranges_E#1/16 ( e.Vars#1/4 ) ( e.Commands#1/2 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_right( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_right( context[4], context[5], context[0], context[1] ) )
      continue;
    // closed e.Vars#1 as range 4
    // closed e.Commands#1 as range 2
    if( ! refalrts::svar_left( context[6], context[0], context[1] ) )
      continue;
    context[7] = 0;
    context[8] = 0;
    refalrts::start_e_loop();
    do {
      context[16] = context[0];
      context[17] = context[1];
      context[9] = 0;
      context[10] = 0;
      if( ! refalrts::brackets_left( context[9], context[10], context[16], context[17] ) )
        continue;
      if( ! refalrts::ident_left(  & ident_Range<int>::name, context[9], context[10] ) )
        continue;
      context[11] = 0;
      context[12] = 0;
      if( ! refalrts::brackets_left( context[11], context[12], context[16], context[17] ) )
        continue;
      if( ! refalrts::ident_left(  & ident_Junk<int>::name, context[11], context[12] ) )
        continue;
      context[13] = 0;
      context[14] = 0;
      if( ! refalrts::brackets_right( context[13], context[14], context[9], context[10] ) )
        continue;
      if( ! refalrts::ident_left(  & ident_TkVariable<int>::name, context[13], context[14] ) )
        continue;
      if( ! refalrts::char_left( 't', context[13], context[14] ) )
        continue;
      // closed e.Index#1 as range 13
      // closed e.Junk#1 as range 11
      // closed e.Ranges_E#1 as range 0
      if( ! refalrts::svar_left( context[15], context[9], context[10] ) )
        continue;
      // closed e.Range#1 as range 9
      //2: e.Commands#1
      //4: e.Vars#1
      //6: s.ContextOffset#1
      //7: e.Ranges_B#1
      //9: e.Range#1
      //11: e.Junk#1
      //13: e.Index#1
      //15: s.Num#1
      //16: e.Ranges_E#1
      //31: s.ContextOffset#1
      //38: e.Index#1
      //41: s.ContextOffset#1
      //48: s.Num#1
      //50: s.ContextOffset#1

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::alloc_open_call( context[18] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[19], DoGenPattern, "DoGenPattern" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_call( context[20] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[21], Inc, "Inc" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[22] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[23] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[24], & ident_Range<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[25] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[26] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[27], & ident_Junk<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[28] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[29], & ident_TkVariable<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[30], 't' ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[31], context[6]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[32] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[33] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[34] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[35] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[36], 't' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[37] ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_evar(context[38], context[39], context[13], context[14]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[40] ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[41], context[31]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[42] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[43] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[44] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[45] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[46], & ident_CmdVar<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[47], & ident_AlgRight<int>::name ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[48], context[15]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[49], 't' ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[50], context[41]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[51] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[52] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[53] ) )
        return refalrts::cNoMemory;
      refalrts::push_stack( context[53] );
      refalrts::push_stack( context[18] );
      res = refalrts::splice_elem( res, context[53] );
      refalrts::link_brackets( context[44], context[52] );
      res = refalrts::splice_elem( res, context[52] );
      refalrts::link_brackets( context[45], context[51] );
      res = refalrts::splice_elem( res, context[51] );
      res = refalrts::splice_stvar( res, context[50] );
      res = refalrts::splice_elem( res, context[49] );
      res = refalrts::splice_stvar( res, context[48] );
      res = refalrts::splice_elem( res, context[47] );
      res = refalrts::splice_elem( res, context[46] );
      res = refalrts::splice_elem( res, context[45] );
      res = refalrts::splice_evar( res, context[2], context[3] );
      res = refalrts::splice_elem( res, context[44] );
      refalrts::link_brackets( context[34], context[43] );
      res = refalrts::splice_elem( res, context[43] );
      refalrts::link_brackets( context[35], context[42] );
      res = refalrts::splice_elem( res, context[42] );
      res = refalrts::splice_stvar( res, context[41] );
      refalrts::link_brackets( context[37], context[40] );
      res = refalrts::splice_elem( res, context[40] );
      res = refalrts::splice_evar( res, context[38], context[39] );
      res = refalrts::splice_elem( res, context[37] );
      res = refalrts::splice_elem( res, context[36] );
      res = refalrts::splice_elem( res, context[35] );
      res = refalrts::splice_evar( res, context[4], context[5] );
      res = refalrts::splice_elem( res, context[34] );
      res = refalrts::splice_evar( res, context[16], context[17] );
      refalrts::link_brackets( context[26], context[33] );
      res = refalrts::splice_elem( res, context[33] );
      res = refalrts::splice_evar( res, context[11], context[12] );
      refalrts::link_brackets( context[28], context[32] );
      res = refalrts::splice_elem( res, context[32] );
      res = refalrts::splice_stvar( res, context[31] );
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_elem( res, context[30] );
      res = refalrts::splice_elem( res, context[29] );
      res = refalrts::splice_elem( res, context[28] );
      res = refalrts::splice_elem( res, context[27] );
      res = refalrts::splice_elem( res, context[26] );
      refalrts::link_brackets( context[23], context[25] );
      res = refalrts::splice_elem( res, context[25] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      res = refalrts::splice_stvar( res, context[15] );
      res = refalrts::splice_elem( res, context[24] );
      res = refalrts::splice_elem( res, context[23] );
      res = refalrts::splice_evar( res, context[7], context[8] );
      refalrts::push_stack( context[22] );
      refalrts::push_stack( context[20] );
      res = refalrts::splice_elem( res, context[22] );
      res = refalrts::splice_stvar( res, context[6] );
      res = refalrts::splice_elem( res, context[21] );
      res = refalrts::splice_elem( res, context[20] );
      res = refalrts::splice_elem( res, context[19] );
      res = refalrts::splice_elem( res, context[18] );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[7], context[8], context[0], context[1] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    // s.ContextOffset#1/6 e.Ranges_B#1/7 ( # Junk e.Junk#1/9 ) ( # Range s.Num#1/13 ( # TkVariable 'e' e.Index#1/14 ) e.Range#1/11 ) e.Ranges_E#1/16 ( e.Vars#1/4 ) ( e.Commands#1/2 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_right( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_right( context[4], context[5], context[0], context[1] ) )
      continue;
    // closed e.Vars#1 as range 4
    // closed e.Commands#1 as range 2
    if( ! refalrts::svar_left( context[6], context[0], context[1] ) )
      continue;
    context[7] = 0;
    context[8] = 0;
    refalrts::start_e_loop();
    do {
      context[16] = context[0];
      context[17] = context[1];
      context[9] = 0;
      context[10] = 0;
      if( ! refalrts::brackets_left( context[9], context[10], context[16], context[17] ) )
        continue;
      if( ! refalrts::ident_left(  & ident_Junk<int>::name, context[9], context[10] ) )
        continue;
      context[11] = 0;
      context[12] = 0;
      if( ! refalrts::brackets_left( context[11], context[12], context[16], context[17] ) )
        continue;
      if( ! refalrts::ident_left(  & ident_Range<int>::name, context[11], context[12] ) )
        continue;
      // closed e.Junk#1 as range 9
      // closed e.Ranges_E#1 as range 0
      if( ! refalrts::svar_left( context[13], context[11], context[12] ) )
        continue;
      context[14] = 0;
      context[15] = 0;
      if( ! refalrts::brackets_left( context[14], context[15], context[11], context[12] ) )
        continue;
      if( ! refalrts::ident_left(  & ident_TkVariable<int>::name, context[14], context[15] ) )
        continue;
      if( ! refalrts::char_left( 'e', context[14], context[15] ) )
        continue;
      // closed e.Index#1 as range 14
      // closed e.Range#1 as range 11
      //2: e.Commands#1
      //4: e.Vars#1
      //6: s.ContextOffset#1
      //7: e.Ranges_B#1
      //9: e.Junk#1
      //11: e.Range#1
      //13: s.Num#1
      //14: e.Index#1
      //16: e.Ranges_E#1
      //28: s.ContextOffset#1
      //38: e.Index#1
      //41: s.ContextOffset#1
      //48: s.Num#1
      //49: s.ContextOffset#1

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::alloc_open_call( context[18] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[19], DoGenPattern, "DoGenPattern" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_call( context[20] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[21], Inc2, "Inc2" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[22] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[23] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[24], & ident_Junk<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[25] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[26], & ident_TkVariable<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[27], 'e' ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[28], context[6]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[29] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[30] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[31] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[32], & ident_Range<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[33] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[34] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[35] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[36], 'e' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[37] ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_evar(context[38], context[39], context[14], context[15]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[40] ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[41], context[28]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[42] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[43] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[44] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[45] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[46], & ident_CmdOpenedE<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[47], & ident_AlgLeft<int>::name ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[48], context[13]))
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[49], context[41]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[50] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[51] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[52] ) )
        return refalrts::cNoMemory;
      refalrts::push_stack( context[52] );
      refalrts::push_stack( context[18] );
      res = refalrts::splice_elem( res, context[52] );
      refalrts::link_brackets( context[44], context[51] );
      res = refalrts::splice_elem( res, context[51] );
      refalrts::link_brackets( context[45], context[50] );
      res = refalrts::splice_elem( res, context[50] );
      res = refalrts::splice_stvar( res, context[49] );
      res = refalrts::splice_stvar( res, context[48] );
      res = refalrts::splice_elem( res, context[47] );
      res = refalrts::splice_elem( res, context[46] );
      res = refalrts::splice_elem( res, context[45] );
      res = refalrts::splice_evar( res, context[2], context[3] );
      res = refalrts::splice_elem( res, context[44] );
      refalrts::link_brackets( context[34], context[43] );
      res = refalrts::splice_elem( res, context[43] );
      refalrts::link_brackets( context[35], context[42] );
      res = refalrts::splice_elem( res, context[42] );
      res = refalrts::splice_stvar( res, context[41] );
      refalrts::link_brackets( context[37], context[40] );
      res = refalrts::splice_elem( res, context[40] );
      res = refalrts::splice_evar( res, context[38], context[39] );
      res = refalrts::splice_elem( res, context[37] );
      res = refalrts::splice_elem( res, context[36] );
      res = refalrts::splice_elem( res, context[35] );
      res = refalrts::splice_evar( res, context[4], context[5] );
      res = refalrts::splice_elem( res, context[34] );
      res = refalrts::splice_evar( res, context[16], context[17] );
      refalrts::link_brackets( context[31], context[33] );
      res = refalrts::splice_elem( res, context[33] );
      res = refalrts::splice_evar( res, context[11], context[12] );
      res = refalrts::splice_stvar( res, context[13] );
      res = refalrts::splice_elem( res, context[32] );
      res = refalrts::splice_elem( res, context[31] );
      refalrts::link_brackets( context[23], context[30] );
      res = refalrts::splice_elem( res, context[30] );
      refalrts::link_brackets( context[25], context[29] );
      res = refalrts::splice_elem( res, context[29] );
      res = refalrts::splice_stvar( res, context[28] );
      res = refalrts::splice_evar( res, context[14], context[15] );
      res = refalrts::splice_elem( res, context[27] );
      res = refalrts::splice_elem( res, context[26] );
      res = refalrts::splice_elem( res, context[25] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      res = refalrts::splice_elem( res, context[24] );
      res = refalrts::splice_elem( res, context[23] );
      res = refalrts::splice_evar( res, context[7], context[8] );
      refalrts::push_stack( context[22] );
      refalrts::push_stack( context[20] );
      res = refalrts::splice_elem( res, context[22] );
      res = refalrts::splice_stvar( res, context[6] );
      res = refalrts::splice_elem( res, context[21] );
      res = refalrts::splice_elem( res, context[20] );
      res = refalrts::splice_elem( res, context[19] );
      res = refalrts::splice_elem( res, context[18] );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[7], context[8], context[0], context[1] ) );
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  refalrts::move_left( context[0], context[1] );
  refalrts::move_left( context[0], context[1] );
  refalrts::move_right( context[0], context[1] );
  // s.ContextOffset#1/8 ( # Junk e.MarkedPattern#1/6 ) ( e.Vars#1/4 ) ( e.Commands#1/2 )
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_right( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[4] = 0;
  context[5] = 0;
  if( ! refalrts::brackets_right( context[4], context[5], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[6] = 0;
  context[7] = 0;
  if( ! refalrts::brackets_right( context[6], context[7], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::ident_left(  & ident_Junk<int>::name, context[6], context[7] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.MarkedPattern#1 as range 6
  // closed e.Vars#1 as range 4
  // closed e.Commands#1 as range 2
  if( ! refalrts::svar_left( context[8], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  //2: e.Commands#1
  //4: e.Vars#1
  //6: e.MarkedPattern#1
  //8: s.ContextOffset#1

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_bracket( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[12] ) )
    return refalrts::cNoMemory;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::link_brackets( context[11], context[12] );
  res = refalrts::splice_elem( res, context[12] );
  res = refalrts::splice_evar( res, context[6], context[7] );
  res = refalrts::splice_elem( res, context[11] );
  refalrts::link_brackets( context[9], context[10] );
  res = refalrts::splice_elem( res, context[10] );
  res = refalrts::splice_evar( res, context[4], context[5] );
  res = refalrts::splice_elem( res, context[9] );
  res = refalrts::splice_stvar( res, context[8] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult IncVarOffset(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { Inc, "Inc" },
    { Inc2, "Inc2" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +15, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // s.ContextOffset#1/2 'e'
    {refalrts::icCharRight, 0, static_cast<unsigned char>('e'), 0},
    {refalrts::icsVarLeft, 0, 2, 0},
    {refalrts::icEmpty, 0, 0, 0},
    //2: s.ContextOffset#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 3},
    {refalrts::icFunc, 0, 1, 4},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 5},
    {refalrts::icPushStack, 0, 0, 5},
    {refalrts::icPushStack, 0, 0, 3},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icSpliceSTVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 3},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +15, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // s.ContextOffset#1/2 't'
    {refalrts::icCharRight, 0, static_cast<unsigned char>('t'), 0},
    {refalrts::icsVarLeft, 0, 2, 0},
    {refalrts::icEmpty, 0, 0, 0},
    //2: s.ContextOffset#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 3},
    {refalrts::icFunc, 0, 0, 4},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 5},
    {refalrts::icPushStack, 0, 0, 5},
    {refalrts::icPushStack, 0, 0, 3},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icSpliceSTVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 3},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // s.ContextOffset#1/2 's'
    {refalrts::icCharRight, 0, static_cast<unsigned char>('s'), 0},
    {refalrts::icsVarLeft, 0, 2, 0},
    {refalrts::icEmpty, 0, 0, 0},
    //2: s.ContextOffset#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 3},
    {refalrts::icFunc, 0, 0, 4},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 5},
    {refalrts::icPushStack, 0, 0, 5},
    {refalrts::icPushStack, 0, 0, 3},
    {refalrts::icSpliceElem, 0, 0, 5},
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
    // s.ContextOffset#1/2 'e'
    if( ! refalrts::char_right( 'e', context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[2], context[0], context[1] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    //2: s.ContextOffset#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[3] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[4], Inc2, "Inc2" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[5] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[5] );
    refalrts::push_stack( context[3] );
    res = refalrts::splice_elem( res, context[5] );
    res = refalrts::splice_stvar( res, context[2] );
    res = refalrts::splice_elem( res, context[4] );
    res = refalrts::splice_elem( res, context[3] );
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
    // s.ContextOffset#1/2 't'
    if( ! refalrts::char_right( 't', context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[2], context[0], context[1] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    //2: s.ContextOffset#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[3] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[4], Inc, "Inc" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[5] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[5] );
    refalrts::push_stack( context[3] );
    res = refalrts::splice_elem( res, context[5] );
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
  // s.ContextOffset#1/2 's'
  if( ! refalrts::char_right( 's', context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[2], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  //2: s.ContextOffset#1

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_call( context[3] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[4], Inc, "Inc" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[5] ) )
    return refalrts::cNoMemory;
  refalrts::push_stack( context[5] );
  refalrts::push_stack( context[3] );
  res = refalrts::splice_elem( res, context[5] );
  res = refalrts::splice_stvar( res, context[2] );
  res = refalrts::splice_elem( res, context[4] );
  res = refalrts::splice_elem( res, context[3] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult FreezeRanges(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 8 elems
  refalrts::Iter context[8];
  refalrts::zeros( context, 8 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { DoFreezeRanges, "DoFreezeRanges" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    // s.ContextTop#1/2 e.Commands#1/0
    {refalrts::icsVarLeft, 0, 2, 0},
    // closed e.Commands#1 as range 0
    //0: e.Commands#1
    //2: s.ContextTop#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 3},
    {refalrts::icFunc, 0, 0, 4},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 5},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 6},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 7},
    {refalrts::icPushStack, 0, 0, 7},
    {refalrts::icPushStack, 0, 0, 3},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icLinkBrackets, 5, 6, 0},
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
  // s.ContextTop#1/2 e.Commands#1/0
  if( ! refalrts::svar_left( context[2], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Commands#1 as range 0
  //0: e.Commands#1
  //2: s.ContextTop#1

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_call( context[3] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[4], DoFreezeRanges, "DoFreezeRanges" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[5] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[7] ) )
    return refalrts::cNoMemory;
  refalrts::push_stack( context[7] );
  refalrts::push_stack( context[3] );
  res = refalrts::splice_elem( res, context[7] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  refalrts::link_brackets( context[5], context[6] );
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

static refalrts::FnResult lambda_DoFreezeRanges_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { ExtractRanges, "ExtractRanges" },
    { DoFreezeRanges_MakeSavers, "DoFreezeRanges_MakeSavers" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    // s.ContextTop#1/2 ( e.Commands_E#1/3 ) e.CommandsBeforeEMatch#2/0
    {refalrts::icsVarLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 3, 0},
    // closed e.Commands_E#1 as range 3
    // closed e.CommandsBeforeEMatch#2 as range 0
    //0: e.CommandsBeforeEMatch#2
    //2: s.ContextTop#1
    //3: e.Commands_E#1
    //13: e.CommandsBeforeEMatch#2
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 5},
    {refalrts::icFunc, 0, 1, 6},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 7},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 8},
    {refalrts::icFunc, 0, 0, 9},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 10},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 11},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 12},
    {refalrts::icCopyEVar, 13, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 15},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 16},
    {refalrts::icPushStack, 0, 0, 16},
    {refalrts::icPushStack, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceEVar, 0, 0, 3},
    {refalrts::icLinkBrackets, 12, 15, 0},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceEVar, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icLinkBrackets, 7, 11, 0},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icPushStack, 0, 0, 10},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceSTVar, 0, 0, 2},
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
  // s.ContextTop#1/2 ( e.Commands_E#1/3 ) e.CommandsBeforeEMatch#2/0
  if( ! refalrts::svar_left( context[2], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[3] = 0;
  context[4] = 0;
  if( ! refalrts::brackets_left( context[3], context[4], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Commands_E#1 as range 3
  // closed e.CommandsBeforeEMatch#2 as range 0
  //0: e.CommandsBeforeEMatch#2
  //2: s.ContextTop#1
  //3: e.Commands_E#1
  //13: e.CommandsBeforeEMatch#2

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_call( context[5] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[6], DoFreezeRanges_MakeSavers, "DoFreezeRanges_MakeSavers" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[9], ExtractRanges, "ExtractRanges" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[12] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[13], context[14], context[0], context[1]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[16] ) )
    return refalrts::cNoMemory;
  refalrts::push_stack( context[16] );
  refalrts::push_stack( context[5] );
  res = refalrts::splice_elem( res, context[16] );
  res = refalrts::splice_evar( res, context[3], context[4] );
  refalrts::link_brackets( context[12], context[15] );
  res = refalrts::splice_elem( res, context[15] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_elem( res, context[12] );
  refalrts::link_brackets( context[7], context[11] );
  res = refalrts::splice_elem( res, context[11] );
  refalrts::push_stack( context[10] );
  refalrts::push_stack( context[8] );
  res = refalrts::splice_elem( res, context[10] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_elem( res, context[9] );
  res = refalrts::splice_elem( res, context[8] );
  res = refalrts::splice_elem( res, context[7] );
  res = refalrts::splice_stvar( res, context[2] );
  res = refalrts::splice_elem( res, context[6] );
  res = refalrts::splice_elem( res, context[5] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult DoFreezeRanges(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 26 elems
  refalrts::Iter context[26];
  refalrts::zeros( context, 26 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { lambda_DoFreezeRanges_0, "lambda_DoFreezeRanges_0" },
    { refalrts::create_closure, "refalrts::create_closure" },
    { Fetch, "Fetch" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_AlgLeft<int>::name,
    & ident_CmdOpenedE<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +52, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // s.ContextTop#1/2 ( e.Scanned#1/3 ) e.Commands_B#1/5 ( # CmdOpenedE # AlgLeft s.Num#1/9 s.ContextOffset#1/10 ) e.Commands_E#1/11
    {refalrts::icsVarLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 3, 0},
    // closed e.Scanned#1 as range 3
    {refalrts::icEPrepare, 0, 5, 0},
    {refalrts::icEStart, 0, 5, 0},
    {refalrts::icSave, 0, 11, 0},
    {refalrts::icBracketLeft, 0, 7, 11},
    {refalrts::icIdentLeft, 0, 1, 7},
    {refalrts::icIdentLeft, 0, 0, 7},
    // closed e.Commands_E#1 as range 0
    {refalrts::icsVarLeft, 0, 9, 7},
    {refalrts::icsVarLeft, 0, 10, 7},
    {refalrts::icEmpty, 0, 0, 7},
    //2: s.ContextTop#1
    //3: e.Scanned#1
    //5: e.Commands_B#1
    //9: s.Num#1
    //10: s.ContextOffset#1
    //11: e.Commands_E#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 13},
    {refalrts::icFunc, 0, 2, 14},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 15},
    {refalrts::icIdent, 0, 1, 16},
    {refalrts::icIdent, 0, 0, 17},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 18},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 19},
    {refalrts::icFunc, 0, 1, 20},
    {refalrts::icFunc, 0, 0, 21},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 22},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 23},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 24},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 25},
    {refalrts::icPushStack, 0, 0, 25},
    {refalrts::icPushStack, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icPushStack, 0, 0, 24},
    {refalrts::icPushStack, 0, 0, 19},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icLinkBrackets, 22, 23, 0},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icSpliceEVar, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceSTVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icLinkBrackets, 15, 18, 0},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceSTVar, 0, 0, 10},
    {refalrts::icSpliceSTVar, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceEVar, 0, 0, 5},
    {refalrts::icSpliceEVar, 0, 0, 3},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // s.ContextTop#1/2 ( e.Scanned#1/3 ) e.Commands#1/0
    {refalrts::icsVarLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 3, 0},
    // closed e.Scanned#1 as range 3
    // closed e.Commands#1 as range 0
    //0: e.Commands#1
    //2: s.ContextTop#1
    //3: e.Scanned#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icSpliceEVar, 0, 0, 3},
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
    // s.ContextTop#1/2 ( e.Scanned#1/3 ) e.Commands_B#1/5 ( # CmdOpenedE # AlgLeft s.Num#1/9 s.ContextOffset#1/10 ) e.Commands_E#1/11
    if( ! refalrts::svar_left( context[2], context[0], context[1] ) )
      continue;
    context[3] = 0;
    context[4] = 0;
    if( ! refalrts::brackets_left( context[3], context[4], context[0], context[1] ) )
      continue;
    // closed e.Scanned#1 as range 3
    context[5] = 0;
    context[6] = 0;
    refalrts::start_e_loop();
    do {
      context[11] = context[0];
      context[12] = context[1];
      context[7] = 0;
      context[8] = 0;
      if( ! refalrts::brackets_left( context[7], context[8], context[11], context[12] ) )
        continue;
      if( ! refalrts::ident_left(  & ident_CmdOpenedE<int>::name, context[7], context[8] ) )
        continue;
      if( ! refalrts::ident_left(  & ident_AlgLeft<int>::name, context[7], context[8] ) )
        continue;
      // closed e.Commands_E#1 as range 0
      if( ! refalrts::svar_left( context[9], context[7], context[8] ) )
        continue;
      if( ! refalrts::svar_left( context[10], context[7], context[8] ) )
        continue;
      if( ! refalrts::empty_seq( context[7], context[8] ) )
        continue;
      //2: s.ContextTop#1
      //3: e.Scanned#1
      //5: e.Commands_B#1
      //9: s.Num#1
      //10: s.ContextOffset#1
      //11: e.Commands_E#1

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::alloc_open_call( context[13] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[14], Fetch, "Fetch" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[15] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[16], & ident_CmdOpenedE<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[17], & ident_AlgLeft<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[18] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_call( context[19] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[20], refalrts::create_closure, "refalrts::create_closure" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[21], lambda_DoFreezeRanges_0, "lambda_DoFreezeRanges_0" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[22] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[23] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[24] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[25] ) )
        return refalrts::cNoMemory;
      refalrts::push_stack( context[25] );
      refalrts::push_stack( context[13] );
      res = refalrts::splice_elem( res, context[25] );
      refalrts::push_stack( context[24] );
      refalrts::push_stack( context[19] );
      res = refalrts::splice_elem( res, context[24] );
      refalrts::link_brackets( context[22], context[23] );
      res = refalrts::splice_elem( res, context[23] );
      res = refalrts::splice_evar( res, context[11], context[12] );
      res = refalrts::splice_elem( res, context[22] );
      res = refalrts::splice_stvar( res, context[2] );
      res = refalrts::splice_elem( res, context[21] );
      res = refalrts::splice_elem( res, context[20] );
      res = refalrts::splice_elem( res, context[19] );
      refalrts::link_brackets( context[15], context[18] );
      res = refalrts::splice_elem( res, context[18] );
      res = refalrts::splice_stvar( res, context[10] );
      res = refalrts::splice_stvar( res, context[9] );
      res = refalrts::splice_elem( res, context[17] );
      res = refalrts::splice_elem( res, context[16] );
      res = refalrts::splice_elem( res, context[15] );
      res = refalrts::splice_evar( res, context[5], context[6] );
      res = refalrts::splice_evar( res, context[3], context[4] );
      res = refalrts::splice_elem( res, context[14] );
      res = refalrts::splice_elem( res, context[13] );
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
  // s.ContextTop#1/2 ( e.Scanned#1/3 ) e.Commands#1/0
  if( ! refalrts::svar_left( context[2], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[3] = 0;
  context[4] = 0;
  if( ! refalrts::brackets_left( context[3], context[4], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Scanned#1 as range 3
  // closed e.Commands#1 as range 0
  //0: e.Commands#1
  //2: s.ContextTop#1
  //3: e.Scanned#1

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[3], context[4] );
  res = refalrts::splice_stvar( res, context[2] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult lambda_DoFreezeRanges_MakeSavers_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
#ifdef INTERPRET
  using refalrts::functions;
  static const refalrts::RefalIdentifier idents[] = {
    & ident_CmdRepeated<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +19, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // s.Num#1/4 s.ContextTop#1/5 ( s.Command#2/6 s.Direction#2/7 s.Num#1/8 e.Info#2/2 )
    {refalrts::icBracketRight, 0, 2, 0},
    {refalrts::icsVarLeft, 0, 4, 0},
    {refalrts::icsVarLeft, 0, 5, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icsVarLeft, 0, 6, 2},
    {refalrts::icsVarLeft, 0, 7, 2},
    {refalrts::icsRepeatLeft, 8, 4, 2},
    // closed e.Info#2 as range 2
    //2: e.Info#2
    //4: s.Num#1
    //5: s.ContextTop#1
    //6: s.Command#2
    //7: s.Direction#2
    //8: s.Num#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 9},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 10},
    {refalrts::icLinkBrackets, 9, 10, 0},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceSTVar, 0, 0, 5},
    {refalrts::icSpliceSTVar, 0, 0, 7},
    {refalrts::icSpliceSTVar, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +27, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // s.Num#1/4 s.ContextTop#1/6 ( # CmdRepeated s.Direction#2/7 s.OtherNum#2/8 'e' s.NewOffset#2/9 s.Num#1/5 )
    {refalrts::icBracketRight, 0, 2, 0},
    {refalrts::icIdentLeft, 0, 0, 2},
    {refalrts::icsVarLeft, 0, 4, 0},
    {refalrts::icsRepeatRight, 5, 4, 2},
    {refalrts::icsVarLeft, 0, 6, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icsVarLeft, 0, 7, 2},
    {refalrts::icsVarLeft, 0, 8, 2},
    {refalrts::icCharLeft, 0, static_cast<unsigned char>('e'), 2},
    {refalrts::icsVarLeft, 0, 9, 2},
    {refalrts::icEmpty, 0, 0, 2},
    //4: s.Num#1
    //5: s.Num#1
    //6: s.ContextTop#1
    //7: s.Direction#2
    //8: s.OtherNum#2
    //9: s.NewOffset#2
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 10},
    {refalrts::icIdent, 0, 0, 11},
    {refalrts::icChar, 0, 'e', 12},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 13},
    {refalrts::icLinkBrackets, 10, 13, 0},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceSTVar, 0, 0, 6},
    {refalrts::icSpliceSTVar, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceSTVar, 0, 0, 8},
    {refalrts::icSpliceSTVar, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // s.Num#1/4 s.ContextTop#1/5 ( s.Command#2/6 s.Direction#2/7 s.OtherNum#2/8 e.Info#2/2 )
    {refalrts::icBracketRight, 0, 2, 0},
    {refalrts::icsVarLeft, 0, 4, 0},
    {refalrts::icsVarLeft, 0, 5, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icsVarLeft, 0, 6, 2},
    {refalrts::icsVarLeft, 0, 7, 2},
    {refalrts::icsVarLeft, 0, 8, 2},
    // closed e.Info#2 as range 2
    //2: e.Info#2
    //4: s.Num#1
    //5: s.ContextTop#1
    //6: s.Command#2
    //7: s.Direction#2
    //8: s.OtherNum#2
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 9},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 10},
    {refalrts::icLinkBrackets, 9, 10, 0},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceSTVar, 0, 0, 8},
    {refalrts::icSpliceSTVar, 0, 0, 7},
    {refalrts::icSpliceSTVar, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 9},
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
    // s.Num#1/4 s.ContextTop#1/5 ( s.Command#2/6 s.Direction#2/7 s.Num#1/8 e.Info#2/2 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_right( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[4], context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[5], context[0], context[1] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[7], context[2], context[3] ) )
      continue;
    if( ! refalrts::repeated_stvar_left( context[8], context[4], context[2], context[3] ) )
      continue;
    // closed e.Info#2 as range 2
    //2: e.Info#2
    //4: s.Num#1
    //5: s.ContextTop#1
    //6: s.Command#2
    //7: s.Direction#2
    //8: s.Num#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[9] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[10] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[9], context[10] );
    res = refalrts::splice_elem( res, context[10] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_stvar( res, context[5] );
    res = refalrts::splice_stvar( res, context[7] );
    res = refalrts::splice_stvar( res, context[6] );
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
    // s.Num#1/4 s.ContextTop#1/6 ( # CmdRepeated s.Direction#2/7 s.OtherNum#2/8 'e' s.NewOffset#2/9 s.Num#1/5 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_right( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdRepeated<int>::name, context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[4], context[0], context[1] ) )
      continue;
    if( ! refalrts::repeated_stvar_right( context[5], context[4], context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[6], context[0], context[1] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[7], context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[8], context[2], context[3] ) )
      continue;
    if( ! refalrts::char_left( 'e', context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    //4: s.Num#1
    //5: s.Num#1
    //6: s.ContextTop#1
    //7: s.Direction#2
    //8: s.OtherNum#2
    //9: s.NewOffset#2

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[11], & ident_CmdRepeated<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[12], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[13] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[10], context[13] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_stvar( res, context[6] );
    res = refalrts::splice_stvar( res, context[9] );
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_stvar( res, context[8] );
    res = refalrts::splice_stvar( res, context[7] );
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
  // s.Num#1/4 s.ContextTop#1/5 ( s.Command#2/6 s.Direction#2/7 s.OtherNum#2/8 e.Info#2/2 )
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_right( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[4], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[5], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[7], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[8], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Info#2 as range 2
  //2: e.Info#2
  //4: s.Num#1
  //5: s.ContextTop#1
  //6: s.Command#2
  //7: s.Direction#2
  //8: s.OtherNum#2

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_bracket( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[10] ) )
    return refalrts::cNoMemory;
  refalrts::link_brackets( context[9], context[10] );
  res = refalrts::splice_elem( res, context[10] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_stvar( res, context[8] );
  res = refalrts::splice_stvar( res, context[7] );
  res = refalrts::splice_stvar( res, context[6] );
  res = refalrts::splice_elem( res, context[9] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult DoFreezeRanges_MakeSavers(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 48 elems
  refalrts::Iter context[48];
  refalrts::zeros( context, 48 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { DoFreezeRanges, "DoFreezeRanges" },
    { lambda_DoFreezeRanges_MakeSavers_0, "lambda_DoFreezeRanges_MakeSavers_0" },
    { refalrts::create_closure, "refalrts::create_closure" },
    { Map, "Map" },
    { Inc2, "Inc2" },
    { DoFreezeRanges_MakeSavers, "DoFreezeRanges_MakeSavers" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_CmdSave<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +91, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // s.ContextTop#1/2 ( e.FrozenRanges_B#1/7 s.Num#1/9 e.FrozenRanges_E#1/19 ) ( e.Scanned#1/5 ) e.Commands_B#1/10 ( s.Command#1/14 s.Direction#1/15 s.Num#1/16 e.Args#1/12 ) e.Commands_E#1/21
    {refalrts::icsVarLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 3, 0},
    {refalrts::icBracketLeft, 0, 5, 0},
    // closed e.Scanned#1 as range 5
    {refalrts::icEPrepare, 0, 7, 3},
    {refalrts::icEStart, 0, 7, 3},
    {refalrts::icSave, 0, 17, 0},
    {refalrts::icSave, 0, 19, 3},
    {refalrts::icsVarLeft, 0, 9, 19},
    // closed e.FrozenRanges_E#1 as range 3
    {refalrts::icEPrepare, 0, 10, 17},
    {refalrts::icEStart, 0, 10, 17},
    {refalrts::icSave, 0, 21, 17},
    {refalrts::icBracketLeft, 0, 12, 21},
    // closed e.Commands_E#1 as range 0
    {refalrts::icsVarLeft, 0, 14, 12},
    {refalrts::icsVarLeft, 0, 15, 12},
    {refalrts::icsRepeatLeft, 16, 9, 12},
    // closed e.Args#1 as range 12
    //2: s.ContextTop#1
    //5: e.Scanned#1
    //7: e.FrozenRanges_B#1
    //9: s.Num#1
    //10: e.Commands_B#1
    //12: e.Args#1
    //14: s.Command#1
    //15: s.Direction#1
    //16: s.Num#1
    //19: e.FrozenRanges_E#1
    //21: e.Commands_E#1
    //33: s.ContextTop#1
    //41: s.ContextTop#1
    //44: s.Num#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 23},
    {refalrts::icFunc, 0, 5, 24},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 25},
    {refalrts::icFunc, 0, 4, 26},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 27},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 28},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 29},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 30},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 31},
    {refalrts::icIdent, 0, 0, 32},
    {refalrts::icCopySTVar, 33, 2, 0},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 34},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 35},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 36},
    {refalrts::icFunc, 0, 3, 37},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 38},
    {refalrts::icFunc, 0, 2, 39},
    {refalrts::icFunc, 0, 1, 40},
    {refalrts::icCopySTVar, 41, 33, 0},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 42},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 43},
    {refalrts::icCopySTVar, 44, 16, 0},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 45},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 46},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 47},
    {refalrts::icPushStack, 0, 0, 47},
    {refalrts::icPushStack, 0, 0, 23},
    {refalrts::icSpliceElem, 0, 0, 47},
    {refalrts::icPushStack, 0, 0, 46},
    {refalrts::icPushStack, 0, 0, 36},
    {refalrts::icSpliceElem, 0, 0, 46},
    {refalrts::icSpliceEVar, 0, 0, 21},
    {refalrts::icLinkBrackets, 43, 45, 0},
    {refalrts::icSpliceElem, 0, 0, 45},
    {refalrts::icSpliceEVar, 0, 0, 12},
    {refalrts::icSpliceSTVar, 0, 0, 44},
    {refalrts::icSpliceSTVar, 0, 0, 15},
    {refalrts::icSpliceSTVar, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 43},
    {refalrts::icSpliceEVar, 0, 0, 10},
    {refalrts::icPushStack, 0, 0, 42},
    {refalrts::icPushStack, 0, 0, 38},
    {refalrts::icSpliceElem, 0, 0, 42},
    {refalrts::icSpliceSTVar, 0, 0, 41},
    {refalrts::icSpliceSTVar, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 40},
    {refalrts::icSpliceElem, 0, 0, 39},
    {refalrts::icSpliceElem, 0, 0, 38},
    {refalrts::icSpliceElem, 0, 0, 37},
    {refalrts::icSpliceElem, 0, 0, 36},
    {refalrts::icLinkBrackets, 30, 35, 0},
    {refalrts::icSpliceElem, 0, 0, 35},
    {refalrts::icLinkBrackets, 31, 34, 0},
    {refalrts::icSpliceElem, 0, 0, 34},
    {refalrts::icSpliceSTVar, 0, 0, 33},
    {refalrts::icSpliceSTVar, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 32},
    {refalrts::icSpliceElem, 0, 0, 31},
    {refalrts::icSpliceEVar, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 30},
    {refalrts::icLinkBrackets, 28, 29, 0},
    {refalrts::icSpliceElem, 0, 0, 29},
    {refalrts::icSpliceEVar, 0, 0, 19},
    {refalrts::icSpliceEVar, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 28},
    {refalrts::icPushStack, 0, 0, 27},
    {refalrts::icPushStack, 0, 0, 25},
    {refalrts::icSpliceElem, 0, 0, 27},
    {refalrts::icSpliceSTVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // s.ContextTop#1/2 ( e.UnusedFrozenRanges#1/3 ) ( e.Scanned#1/5 ) e.Commands#1/0
    {refalrts::icsVarLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 3, 0},
    {refalrts::icBracketLeft, 0, 5, 0},
    // closed e.UnusedFrozenRanges#1 as range 3
    // closed e.Scanned#1 as range 5
    // closed e.Commands#1 as range 0
    //0: e.Commands#1
    //2: s.ContextTop#1
    //3: e.UnusedFrozenRanges#1
    //5: e.Scanned#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 7},
    {refalrts::icFunc, 0, 0, 8},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 9},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 10},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 11},
    {refalrts::icPushStack, 0, 0, 11},
    {refalrts::icPushStack, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icLinkBrackets, 9, 10, 0},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceEVar, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceSTVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 7},
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
    // s.ContextTop#1/2 ( e.FrozenRanges_B#1/7 s.Num#1/9 e.FrozenRanges_E#1/19 ) ( e.Scanned#1/5 ) e.Commands_B#1/10 ( s.Command#1/14 s.Direction#1/15 s.Num#1/16 e.Args#1/12 ) e.Commands_E#1/21
    if( ! refalrts::svar_left( context[2], context[0], context[1] ) )
      continue;
    context[3] = 0;
    context[4] = 0;
    if( ! refalrts::brackets_left( context[3], context[4], context[0], context[1] ) )
      continue;
    context[5] = 0;
    context[6] = 0;
    if( ! refalrts::brackets_left( context[5], context[6], context[0], context[1] ) )
      continue;
    // closed e.Scanned#1 as range 5
    context[7] = 0;
    context[8] = 0;
    refalrts::start_e_loop();
    do {
      context[17] = context[0];
      context[18] = context[1];
      context[19] = context[3];
      context[20] = context[4];
      if( ! refalrts::svar_left( context[9], context[19], context[20] ) )
        continue;
      // closed e.FrozenRanges_E#1 as range 3
      context[10] = 0;
      context[11] = 0;
      refalrts::start_e_loop();
      do {
        context[21] = context[17];
        context[22] = context[18];
        context[12] = 0;
        context[13] = 0;
        if( ! refalrts::brackets_left( context[12], context[13], context[21], context[22] ) )
          continue;
        // closed e.Commands_E#1 as range 0
        if( ! refalrts::svar_left( context[14], context[12], context[13] ) )
          continue;
        if( ! refalrts::svar_left( context[15], context[12], context[13] ) )
          continue;
        if( ! refalrts::repeated_stvar_left( context[16], context[9], context[12], context[13] ) )
          continue;
        // closed e.Args#1 as range 12
        //2: s.ContextTop#1
        //5: e.Scanned#1
        //7: e.FrozenRanges_B#1
        //9: s.Num#1
        //10: e.Commands_B#1
        //12: e.Args#1
        //14: s.Command#1
        //15: s.Direction#1
        //16: s.Num#1
        //19: e.FrozenRanges_E#1
        //21: e.Commands_E#1
        //33: s.ContextTop#1
        //41: s.ContextTop#1
        //44: s.Num#1

        refalrts::reset_allocator();
        refalrts::Iter res = arg_begin;
        if( ! refalrts::alloc_open_call( context[23] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_name( context[24], DoFreezeRanges_MakeSavers, "DoFreezeRanges_MakeSavers" ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_open_call( context[25] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_name( context[26], Inc2, "Inc2" ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_call( context[27] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_open_bracket( context[28] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_bracket( context[29] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_open_bracket( context[30] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_open_bracket( context[31] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_ident( context[32], & ident_CmdSave<int>::name ) )
          return refalrts::cNoMemory;
        if (! refalrts::copy_stvar(context[33], context[2]))
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_bracket( context[34] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_bracket( context[35] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_open_call( context[36] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_name( context[37], Map, "Map" ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_open_call( context[38] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_name( context[39], refalrts::create_closure, "refalrts::create_closure" ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_name( context[40], lambda_DoFreezeRanges_MakeSavers_0, "lambda_DoFreezeRanges_MakeSavers_0" ) )
          return refalrts::cNoMemory;
        if (! refalrts::copy_stvar(context[41], context[33]))
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_call( context[42] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_open_bracket( context[43] ) )
          return refalrts::cNoMemory;
        if (! refalrts::copy_stvar(context[44], context[16]))
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_bracket( context[45] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_call( context[46] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_call( context[47] ) )
          return refalrts::cNoMemory;
        refalrts::push_stack( context[47] );
        refalrts::push_stack( context[23] );
        res = refalrts::splice_elem( res, context[47] );
        refalrts::push_stack( context[46] );
        refalrts::push_stack( context[36] );
        res = refalrts::splice_elem( res, context[46] );
        res = refalrts::splice_evar( res, context[21], context[22] );
        refalrts::link_brackets( context[43], context[45] );
        res = refalrts::splice_elem( res, context[45] );
        res = refalrts::splice_evar( res, context[12], context[13] );
        res = refalrts::splice_stvar( res, context[44] );
        res = refalrts::splice_stvar( res, context[15] );
        res = refalrts::splice_stvar( res, context[14] );
        res = refalrts::splice_elem( res, context[43] );
        res = refalrts::splice_evar( res, context[10], context[11] );
        refalrts::push_stack( context[42] );
        refalrts::push_stack( context[38] );
        res = refalrts::splice_elem( res, context[42] );
        res = refalrts::splice_stvar( res, context[41] );
        res = refalrts::splice_stvar( res, context[16] );
        res = refalrts::splice_elem( res, context[40] );
        res = refalrts::splice_elem( res, context[39] );
        res = refalrts::splice_elem( res, context[38] );
        res = refalrts::splice_elem( res, context[37] );
        res = refalrts::splice_elem( res, context[36] );
        refalrts::link_brackets( context[30], context[35] );
        res = refalrts::splice_elem( res, context[35] );
        refalrts::link_brackets( context[31], context[34] );
        res = refalrts::splice_elem( res, context[34] );
        res = refalrts::splice_stvar( res, context[33] );
        res = refalrts::splice_stvar( res, context[9] );
        res = refalrts::splice_elem( res, context[32] );
        res = refalrts::splice_elem( res, context[31] );
        res = refalrts::splice_evar( res, context[5], context[6] );
        res = refalrts::splice_elem( res, context[30] );
        refalrts::link_brackets( context[28], context[29] );
        res = refalrts::splice_elem( res, context[29] );
        res = refalrts::splice_evar( res, context[19], context[20] );
        res = refalrts::splice_evar( res, context[7], context[8] );
        res = refalrts::splice_elem( res, context[28] );
        refalrts::push_stack( context[27] );
        refalrts::push_stack( context[25] );
        res = refalrts::splice_elem( res, context[27] );
        res = refalrts::splice_stvar( res, context[2] );
        res = refalrts::splice_elem( res, context[26] );
        res = refalrts::splice_elem( res, context[25] );
        res = refalrts::splice_elem( res, context[24] );
        res = refalrts::splice_elem( res, context[23] );
        refalrts::use( res );
        refalrts::splice_to_freelist( arg_begin, arg_end );
        return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
      } while ( refalrts::open_evar_advance( context[10], context[11], context[17], context[18] ) );
    } while ( refalrts::open_evar_advance( context[7], context[8], context[3], context[4] ) );
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  refalrts::move_left( context[0], context[1] );
  refalrts::move_left( context[0], context[1] );
  refalrts::move_right( context[0], context[1] );
  // s.ContextTop#1/2 ( e.UnusedFrozenRanges#1/3 ) ( e.Scanned#1/5 ) e.Commands#1/0
  if( ! refalrts::svar_left( context[2], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[3] = 0;
  context[4] = 0;
  if( ! refalrts::brackets_left( context[3], context[4], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[5] = 0;
  context[6] = 0;
  if( ! refalrts::brackets_left( context[5], context[6], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.UnusedFrozenRanges#1 as range 3
  // closed e.Scanned#1 as range 5
  // closed e.Commands#1 as range 0
  //0: e.Commands#1
  //2: s.ContextTop#1
  //3: e.UnusedFrozenRanges#1
  //5: e.Scanned#1

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_call( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[8], DoFreezeRanges, "DoFreezeRanges" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[11] ) )
    return refalrts::cNoMemory;
  refalrts::push_stack( context[11] );
  refalrts::push_stack( context[7] );
  res = refalrts::splice_elem( res, context[11] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  refalrts::link_brackets( context[9], context[10] );
  res = refalrts::splice_elem( res, context[10] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_elem( res, context[9] );
  res = refalrts::splice_stvar( res, context[2] );
  res = refalrts::splice_elem( res, context[8] );
  res = refalrts::splice_elem( res, context[7] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult lambda_ExtractRanges_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 7 elems
  refalrts::Iter context[7];
  refalrts::zeros( context, 7 );
#ifdef INTERPRET
  using refalrts::functions;
  static const refalrts::RefalIdentifier idents[] = {
    & ident_CmdComment<int>::name,
    & ident_CmdADT<int>::name,
    & ident_CmdBrackets<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +12, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( # CmdBrackets s.Direction#2/4 s.BracketNum#2/5 s.InnerNum#2/6 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icIdentLeft, 0, 2, 2},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icsVarLeft, 0, 4, 2},
    {refalrts::icsVarLeft, 0, 5, 2},
    {refalrts::icsVarLeft, 0, 6, 2},
    {refalrts::icEmpty, 0, 0, 2},
    //4: s.Direction#2
    //5: s.BracketNum#2
    //6: s.InnerNum#2
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icSpliceSTVar, 0, 0, 6},
    {refalrts::icSpliceSTVar, 0, 0, 5},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +11, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( # CmdADT s.Direction#2/4 s.BracketNum#2/5 s.InnerNum#2/6 e.Name#2/2 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icIdentLeft, 0, 1, 2},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icsVarLeft, 0, 4, 2},
    {refalrts::icsVarLeft, 0, 5, 2},
    {refalrts::icsVarLeft, 0, 6, 2},
    // closed e.Name#2 as range 2
    //2: e.Name#2
    //4: s.Direction#2
    //5: s.BracketNum#2
    //6: s.InnerNum#2
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icSpliceSTVar, 0, 0, 6},
    {refalrts::icSpliceSTVar, 0, 0, 5},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +6, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( # CmdComment e.Comment#2/2 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icIdentLeft, 0, 0, 2},
    {refalrts::icEmpty, 0, 0, 0},
    // closed e.Comment#2 as range 2
    //2: e.Comment#2
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( s.Command#2/4 s.Direction#2/5 s.BracketNum#2/6 e.Info#2/2 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icsVarLeft, 0, 4, 2},
    {refalrts::icsVarLeft, 0, 5, 2},
    {refalrts::icsVarLeft, 0, 6, 2},
    // closed e.Info#2 as range 2
    //2: e.Info#2
    //4: s.Command#2
    //5: s.Direction#2
    //6: s.BracketNum#2
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icSpliceSTVar, 0, 0, 6},
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
    // ( # CmdBrackets s.Direction#2/4 s.BracketNum#2/5 s.InnerNum#2/6 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdBrackets<int>::name, context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[4], context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    //4: s.Direction#2
    //5: s.BracketNum#2
    //6: s.InnerNum#2

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    res = refalrts::splice_stvar( res, context[6] );
    res = refalrts::splice_stvar( res, context[5] );
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
    // ( # CmdADT s.Direction#2/4 s.BracketNum#2/5 s.InnerNum#2/6 e.Name#2/2 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdADT<int>::name, context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[4], context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
      continue;
    // closed e.Name#2 as range 2
    //2: e.Name#2
    //4: s.Direction#2
    //5: s.BracketNum#2
    //6: s.InnerNum#2

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    res = refalrts::splice_stvar( res, context[6] );
    res = refalrts::splice_stvar( res, context[5] );
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
    // ( # CmdComment e.Comment#2/2 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdComment<int>::name, context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    // closed e.Comment#2 as range 2
    //2: e.Comment#2

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
  // ( s.Command#2/4 s.Direction#2/5 s.BracketNum#2/6 e.Info#2/2 )
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[4], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Info#2 as range 2
  //2: e.Info#2
  //4: s.Command#2
  //5: s.Direction#2
  //6: s.BracketNum#2

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  res = refalrts::splice_stvar( res, context[6] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult ExtractRanges(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { lambda_ExtractRanges_0, "lambda_ExtractRanges_0" },
    { Map, "Map" },
    { UniqueRanges, "UniqueRanges" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    // e.Commands#1/0
    // closed e.Commands#1 as range 0
    //0: e.Commands#1
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
  // e.Commands#1/0
  // closed e.Commands#1 as range 0
  //0: e.Commands#1

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_call( context[2] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[3], UniqueRanges, "UniqueRanges" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[4] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[5], Map, "Map" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[6], lambda_ExtractRanges_0, "lambda_ExtractRanges_0" ) )
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

static refalrts::FnResult UniqueRanges(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { UniqueRanges, "UniqueRanges" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +23, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // e.Unique#1/2 s.Repeated#1/4 e.Middle#1/5 s.Repeated#1/7 e.Rest#1/10
    {refalrts::icEPrepare, 0, 2, 0},
    {refalrts::icEStart, 0, 2, 0},
    {refalrts::icSave, 0, 8, 0},
    {refalrts::icsVarLeft, 0, 4, 8},
    {refalrts::icEPrepare, 0, 5, 8},
    {refalrts::icEStart, 0, 5, 8},
    {refalrts::icSave, 0, 10, 8},
    {refalrts::icsRepeatLeft, 7, 4, 10},
    // closed e.Rest#1 as range 0
    //2: e.Unique#1
    //4: s.Repeated#1
    //5: e.Middle#1
    //7: s.Repeated#1
    //10: e.Rest#1
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
    // e.Unique#1/0
    // closed e.Unique#1 as range 0
    //0: e.Unique#1
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
    // e.Unique#1/2 s.Repeated#1/4 e.Middle#1/5 s.Repeated#1/7 e.Rest#1/10
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
        // closed e.Rest#1 as range 0
        //2: e.Unique#1
        //4: s.Repeated#1
        //5: e.Middle#1
        //7: s.Repeated#1
        //10: e.Rest#1

        refalrts::reset_allocator();
        refalrts::Iter res = arg_begin;
        if( ! refalrts::alloc_open_call( context[12] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_name( context[13], UniqueRanges, "UniqueRanges" ) )
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
  // e.Unique#1/0
  // closed e.Unique#1 as range 0
  //0: e.Unique#1

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  res = refalrts::splice_evar( res, context[0], context[1] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult TextFromPattern(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { TextFromPattern, "TextFromPattern" },
    { StrFromInt, "StrFromInt" },
    { PrintVar, "PrintVar" },
    { TextFromPattern_Char, "TextFromPattern_Char" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_TkIdentifier<int>::name,
    & ident_TkVariable<int>::name,
    & ident_TkName<int>::name,
    & ident_TkNumber<int>::name,
    & ident_TkChar<int>::name,
    & ident_TkCloseADT<int>::name,
    & ident_TkOpenADT<int>::name,
    & ident_TkCloseBracket<int>::name,
    & ident_TkOpenBracket<int>::name
  };
  using refalrts::numbers;
  static const refalrts::StringItem strings[] = {
    {" # ", 3},
    {" & ", 3},
    {" \'", 2},
    {" ]", 2},
    {" [", 2},
    {" )", 2},
    {" (", 2}
  };
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +17, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( # TkOpenBracket ) e.Tail#1/0
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icIdentLeft, 0, 8, 2},
    {refalrts::icEmpty, 0, 0, 2},
    // closed e.Tail#1 as range 0
    //0: e.Tail#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icString, 0, 6, 4},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 6},
    {refalrts::icFunc, 0, 0, 7},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 8},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icPushStack, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceRange, 0, 0, 4},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +17, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( # TkCloseBracket ) e.Tail#1/0
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icIdentLeft, 0, 7, 2},
    {refalrts::icEmpty, 0, 0, 2},
    // closed e.Tail#1 as range 0
    //0: e.Tail#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icString, 0, 5, 4},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 6},
    {refalrts::icFunc, 0, 0, 7},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 8},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icPushStack, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceRange, 0, 0, 4},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +20, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( # TkOpenADT ) ( # TkName e.Name#1/4 ) e.Tail#1/0
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icIdentLeft, 0, 6, 2},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icIdentLeft, 0, 2, 4},
    {refalrts::icEmpty, 0, 0, 2},
    // closed e.Name#1 as range 4
    // closed e.Tail#1 as range 0
    //0: e.Tail#1
    //4: e.Name#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icString, 0, 4, 6},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 8},
    {refalrts::icFunc, 0, 0, 9},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 10},
    {refalrts::icPushStack, 0, 0, 10},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceEVar, 0, 0, 4},
    {refalrts::icSpliceRange, 0, 0, 6},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +17, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( # TkCloseADT ) e.Tail#1/0
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icIdentLeft, 0, 5, 2},
    {refalrts::icEmpty, 0, 0, 2},
    // closed e.Tail#1 as range 0
    //0: e.Tail#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icString, 0, 3, 4},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 6},
    {refalrts::icFunc, 0, 0, 7},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 8},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icPushStack, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceRange, 0, 0, 4},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +26, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( # TkChar s.Char#1/4 ) e.Tail#1/0
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icIdentLeft, 0, 4, 2},
    // closed e.Tail#1 as range 0
    {refalrts::icsVarLeft, 0, 4, 2},
    {refalrts::icEmpty, 0, 0, 2},
    //0: e.Tail#1
    //4: s.Char#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icString, 0, 2, 5},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 7},
    {refalrts::icFunc, 0, 3, 8},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 9},
    {refalrts::icIdent, 0, 4, 10},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 11},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 12},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icPushStack, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icLinkBrackets, 9, 11, 0},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceSTVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceRange, 0, 0, 5},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +27, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( # TkNumber s.Number#1/4 ) e.Tail#1/0
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icIdentLeft, 0, 3, 2},
    // closed e.Tail#1 as range 0
    {refalrts::icsVarLeft, 0, 4, 2},
    {refalrts::icEmpty, 0, 0, 2},
    //0: e.Tail#1
    //4: s.Number#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icChar, 0, ' ', 5},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 6},
    {refalrts::icFunc, 0, 1, 7},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 8},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 9},
    {refalrts::icFunc, 0, 0, 10},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 11},
    {refalrts::icPushStack, 0, 0, 11},
    {refalrts::icPushStack, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icPushStack, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceSTVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +17, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( # TkName e.Name#1/2 ) e.Tail#1/0
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icIdentLeft, 0, 2, 2},
    // closed e.Name#1 as range 2
    // closed e.Tail#1 as range 0
    //0: e.Tail#1
    //2: e.Name#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icString, 0, 1, 4},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 6},
    {refalrts::icFunc, 0, 0, 7},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 8},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icPushStack, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceRange, 0, 0, 4},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +41, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( # TkVariable s.Mode#1/4 e.Index#1/2 s.Depth#1/6 s.Offset#1/5 ) e.Tail#1/0
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icIdentLeft, 0, 1, 2},
    // closed e.Tail#1 as range 0
    {refalrts::icsVarLeft, 0, 4, 2},
    {refalrts::icsVarRight, 0, 5, 2},
    {refalrts::icsVarRight, 0, 6, 2},
    // closed e.Index#1 as range 2
    //0: e.Tail#1
    //2: e.Index#1
    //4: s.Mode#1
    //5: s.Offset#1
    //6: s.Depth#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icChar, 0, ' ', 7},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 8},
    {refalrts::icFunc, 0, 2, 9},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 10},
    {refalrts::icChar, 0, '/', 11},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 12},
    {refalrts::icFunc, 0, 1, 13},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 14},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 15},
    {refalrts::icFunc, 0, 0, 16},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 17},
    {refalrts::icPushStack, 0, 0, 17},
    {refalrts::icPushStack, 0, 0, 15},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icPushStack, 0, 0, 14},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceSTVar, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icPushStack, 0, 0, 10},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceSTVar, 0, 0, 6},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceSTVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +17, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( # TkIdentifier e.Name#1/2 ) e.Tail#1/0
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icIdentLeft, 0, 0, 2},
    // closed e.Name#1 as range 2
    // closed e.Tail#1 as range 0
    //0: e.Tail#1
    //2: e.Name#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icString, 0, 0, 4},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 6},
    {refalrts::icFunc, 0, 0, 7},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 8},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icPushStack, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceRange, 0, 0, 4},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
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
    // ( # TkOpenBracket ) e.Tail#1/0
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_TkOpenBracket<int>::name, context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Tail#1 as range 0
    //0: e.Tail#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_chars( context[4], context[5], " (", 2 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[7], TextFromPattern, "TextFromPattern" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[8] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[8] );
    refalrts::push_stack( context[6] );
    res = refalrts::splice_elem( res, context[8] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    res = refalrts::splice_elem( res, context[7] );
    res = refalrts::splice_elem( res, context[6] );
    res = refalrts::splice_evar( res, context[4], context[5] );
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
    // ( # TkCloseBracket ) e.Tail#1/0
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_TkCloseBracket<int>::name, context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Tail#1 as range 0
    //0: e.Tail#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_chars( context[4], context[5], " )", 2 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[7], TextFromPattern, "TextFromPattern" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[8] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[8] );
    refalrts::push_stack( context[6] );
    res = refalrts::splice_elem( res, context[8] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    res = refalrts::splice_elem( res, context[7] );
    res = refalrts::splice_elem( res, context[6] );
    res = refalrts::splice_evar( res, context[4], context[5] );
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
    // ( # TkOpenADT ) ( # TkName e.Name#1/4 ) e.Tail#1/0
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_TkOpenADT<int>::name, context[2], context[3] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_TkName<int>::name, context[4], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Name#1 as range 4
    // closed e.Tail#1 as range 0
    //0: e.Tail#1
    //4: e.Name#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_chars( context[6], context[7], " [", 2 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[9], TextFromPattern, "TextFromPattern" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[10] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[10] );
    refalrts::push_stack( context[8] );
    res = refalrts::splice_elem( res, context[10] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    res = refalrts::splice_elem( res, context[9] );
    res = refalrts::splice_elem( res, context[8] );
    res = refalrts::splice_evar( res, context[4], context[5] );
    res = refalrts::splice_evar( res, context[6], context[7] );
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
    // ( # TkCloseADT ) e.Tail#1/0
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_TkCloseADT<int>::name, context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Tail#1 as range 0
    //0: e.Tail#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_chars( context[4], context[5], " ]", 2 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[7], TextFromPattern, "TextFromPattern" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[8] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[8] );
    refalrts::push_stack( context[6] );
    res = refalrts::splice_elem( res, context[8] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    res = refalrts::splice_elem( res, context[7] );
    res = refalrts::splice_elem( res, context[6] );
    res = refalrts::splice_evar( res, context[4], context[5] );
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
    // ( # TkChar s.Char#1/4 ) e.Tail#1/0
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_TkChar<int>::name, context[2], context[3] ) )
      continue;
    // closed e.Tail#1 as range 0
    if( ! refalrts::svar_left( context[4], context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    //0: e.Tail#1
    //4: s.Char#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_chars( context[5], context[6], " \'", 2 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[7] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[8], TextFromPattern_Char, "TextFromPattern_Char" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[9] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[10], & ident_TkChar<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[12] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[12] );
    refalrts::push_stack( context[7] );
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    refalrts::link_brackets( context[9], context[11] );
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_stvar( res, context[4] );
    res = refalrts::splice_elem( res, context[10] );
    res = refalrts::splice_elem( res, context[9] );
    res = refalrts::splice_elem( res, context[8] );
    res = refalrts::splice_elem( res, context[7] );
    res = refalrts::splice_evar( res, context[5], context[6] );
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
    // ( # TkNumber s.Number#1/4 ) e.Tail#1/0
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_TkNumber<int>::name, context[2], context[3] ) )
      continue;
    // closed e.Tail#1 as range 0
    if( ! refalrts::svar_left( context[4], context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    //0: e.Tail#1
    //4: s.Number#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_char( context[5], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[7], StrFromInt, "StrFromInt" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[9] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[10], TextFromPattern, "TextFromPattern" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[11] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[11] );
    refalrts::push_stack( context[9] );
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    res = refalrts::splice_elem( res, context[10] );
    res = refalrts::splice_elem( res, context[9] );
    refalrts::push_stack( context[8] );
    refalrts::push_stack( context[6] );
    res = refalrts::splice_elem( res, context[8] );
    res = refalrts::splice_stvar( res, context[4] );
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
    // ( # TkName e.Name#1/2 ) e.Tail#1/0
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_TkName<int>::name, context[2], context[3] ) )
      continue;
    // closed e.Name#1 as range 2
    // closed e.Tail#1 as range 0
    //0: e.Tail#1
    //2: e.Name#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_chars( context[4], context[5], " & ", 3 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[7], TextFromPattern, "TextFromPattern" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[8] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[8] );
    refalrts::push_stack( context[6] );
    res = refalrts::splice_elem( res, context[8] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    res = refalrts::splice_elem( res, context[7] );
    res = refalrts::splice_elem( res, context[6] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[4], context[5] );
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
    // ( # TkVariable s.Mode#1/4 e.Index#1/2 s.Depth#1/6 s.Offset#1/5 ) e.Tail#1/0
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_TkVariable<int>::name, context[2], context[3] ) )
      continue;
    // closed e.Tail#1 as range 0
    if( ! refalrts::svar_left( context[4], context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_right( context[5], context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_right( context[6], context[2], context[3] ) )
      continue;
    // closed e.Index#1 as range 2
    //0: e.Tail#1
    //2: e.Index#1
    //4: s.Mode#1
    //5: s.Offset#1
    //6: s.Depth#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_char( context[7], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[9], PrintVar, "PrintVar" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[11], '/' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[13], StrFromInt, "StrFromInt" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[15] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[16], TextFromPattern, "TextFromPattern" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[17] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[17] );
    refalrts::push_stack( context[15] );
    res = refalrts::splice_elem( res, context[17] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_elem( res, context[15] );
    refalrts::push_stack( context[14] );
    refalrts::push_stack( context[12] );
    res = refalrts::splice_elem( res, context[14] );
    res = refalrts::splice_stvar( res, context[5] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_elem( res, context[11] );
    refalrts::push_stack( context[10] );
    refalrts::push_stack( context[8] );
    res = refalrts::splice_elem( res, context[10] );
    res = refalrts::splice_stvar( res, context[6] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_stvar( res, context[4] );
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
    // ( # TkIdentifier e.Name#1/2 ) e.Tail#1/0
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_TkIdentifier<int>::name, context[2], context[3] ) )
      continue;
    // closed e.Name#1 as range 2
    // closed e.Tail#1 as range 0
    //0: e.Tail#1
    //2: e.Name#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_chars( context[4], context[5], " # ", 3 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[7], TextFromPattern, "TextFromPattern" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[8] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[8] );
    refalrts::push_stack( context[6] );
    res = refalrts::splice_elem( res, context[8] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    res = refalrts::splice_elem( res, context[7] );
    res = refalrts::splice_elem( res, context[6] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[4], context[5] );
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

static refalrts::FnResult PrintVar(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
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
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    // s.Mode#1/2 e.Index#1/0 s.Depth#1/3
    {refalrts::icsVarLeft, 0, 2, 0},
    {refalrts::icsVarRight, 0, 3, 0},
    // closed e.Index#1 as range 0
    //0: e.Index#1
    //2: s.Mode#1
    //3: s.Depth#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icChar, 0, '.', 4},
    {refalrts::icChar, 0, '#', 5},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 6},
    {refalrts::icFunc, 0, 0, 7},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 8},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icPushStack, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceSTVar, 0, 0, 3},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icSpliceSTVar, 0, 0, 2},
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
  // s.Mode#1/2 e.Index#1/0 s.Depth#1/3
  if( ! refalrts::svar_left( context[2], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_right( context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Index#1 as range 0
  //0: e.Index#1
  //2: s.Mode#1
  //3: s.Depth#1

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_char( context[4], '.' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[5], '#' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[7], StrFromInt, "StrFromInt" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[8] ) )
    return refalrts::cNoMemory;
  refalrts::push_stack( context[8] );
  refalrts::push_stack( context[6] );
  res = refalrts::splice_elem( res, context[8] );
  res = refalrts::splice_stvar( res, context[3] );
  res = refalrts::splice_elem( res, context[7] );
  res = refalrts::splice_elem( res, context[6] );
  res = refalrts::splice_elem( res, context[5] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_elem( res, context[4] );
  res = refalrts::splice_stvar( res, context[2] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult Escape(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { EscapeChar, "EscapeChar" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    // s.Char#1/2
    {refalrts::icsVarLeft, 0, 2, 0},
    {refalrts::icEmpty, 0, 0, 0},
    //2: s.Char#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 3},
    {refalrts::icFunc, 0, 0, 4},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 5},
    {refalrts::icPushStack, 0, 0, 5},
    {refalrts::icPushStack, 0, 0, 3},
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
  if( ! refalrts::alloc_name( context[4], EscapeChar, "EscapeChar" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[5] ) )
    return refalrts::cNoMemory;
  refalrts::push_stack( context[5] );
  refalrts::push_stack( context[3] );
  res = refalrts::splice_elem( res, context[5] );
  res = refalrts::splice_stvar( res, context[2] );
  res = refalrts::splice_elem( res, context[4] );
  res = refalrts::splice_elem( res, context[3] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult TextFromPattern_Char(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { TextFromPattern, "TextFromPattern" },
    { TextFromPattern_Char, "TextFromPattern_Char" },
    { Escape, "Escape" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_TkChar<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +25, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( # TkChar s.Char#1/4 ) e.Tail#1/0
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icIdentLeft, 0, 0, 2},
    // closed e.Tail#1 as range 0
    {refalrts::icsVarLeft, 0, 4, 2},
    {refalrts::icEmpty, 0, 0, 2},
    //0: e.Tail#1
    //4: s.Char#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 5},
    {refalrts::icFunc, 0, 2, 6},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 7},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 8},
    {refalrts::icFunc, 0, 1, 9},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 10},
    {refalrts::icPushStack, 0, 0, 10},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icPushStack, 0, 0, 7},
    {refalrts::icPushStack, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceSTVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // e.Other#1/0
    // closed e.Other#1 as range 0
    //0: e.Other#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icChar, 0, '\'', 2},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 3},
    {refalrts::icFunc, 0, 0, 4},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 5},
    {refalrts::icPushStack, 0, 0, 5},
    {refalrts::icPushStack, 0, 0, 3},
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
    // ( # TkChar s.Char#1/4 ) e.Tail#1/0
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_TkChar<int>::name, context[2], context[3] ) )
      continue;
    // closed e.Tail#1 as range 0
    if( ! refalrts::svar_left( context[4], context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    //0: e.Tail#1
    //4: s.Char#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[5] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[6], Escape, "Escape" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[7] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[9], TextFromPattern_Char, "TextFromPattern_Char" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[10] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[10] );
    refalrts::push_stack( context[8] );
    res = refalrts::splice_elem( res, context[10] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    res = refalrts::splice_elem( res, context[9] );
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
  if( ! refalrts::alloc_char( context[2], '\'' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[3] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[4], TextFromPattern, "TextFromPattern" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[5] ) )
    return refalrts::cNoMemory;
  refalrts::push_stack( context[5] );
  refalrts::push_stack( context[3] );
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

static refalrts::FnResult lambda_GenResult_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
#ifdef INTERPRET
  using refalrts::functions;
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    // ( s.Mode#2/4 ( e.Index#2/5 ) e.Offsets#2/2 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icsVarLeft, 0, 4, 2},
    {refalrts::icBracketLeft, 0, 5, 2},
    // closed e.Index#2 as range 5
    // closed e.Offsets#2 as range 2
    //2: e.Offsets#2
    //4: s.Mode#2
    //5: e.Index#2
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 7},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 9},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 10},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 11},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 12},
    {refalrts::icLinkBrackets, 7, 12, 0},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icLinkBrackets, 10, 11, 0},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icLinkBrackets, 8, 9, 0},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceEVar, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceSTVar, 0, 0, 4},
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
  // ( s.Mode#2/4 ( e.Index#2/5 ) e.Offsets#2/2 )
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[4], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[5] = 0;
  context[6] = 0;
  if( ! refalrts::brackets_left( context[5], context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Index#2 as range 5
  // closed e.Offsets#2 as range 2
  //2: e.Offsets#2
  //4: s.Mode#2
  //5: e.Index#2

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_bracket( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[12] ) )
    return refalrts::cNoMemory;
  refalrts::link_brackets( context[7], context[12] );
  res = refalrts::splice_elem( res, context[12] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::link_brackets( context[10], context[11] );
  res = refalrts::splice_elem( res, context[11] );
  res = refalrts::splice_elem( res, context[10] );
  refalrts::link_brackets( context[8], context[9] );
  res = refalrts::splice_elem( res, context[9] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_elem( res, context[8] );
  res = refalrts::splice_stvar( res, context[4] );
  res = refalrts::splice_elem( res, context[7] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult lambda_GenResult_1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { MakeVariableCommentTable, "MakeVariableCommentTable" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_CmdReturnResult<int>::name,
    & ident_CmdEmptyResult<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    // s.ContextOffset#2/2 ( e.CommonVars#2/3 ) e.ResultCommands#2/0
    {refalrts::icsVarLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 3, 0},
    // closed e.CommonVars#2 as range 3
    // closed e.ResultCommands#2 as range 0
    //0: e.ResultCommands#2
    //2: s.ContextOffset#2
    //3: e.CommonVars#2
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 5},
    {refalrts::icFunc, 0, 0, 6},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 7},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icIdent, 0, 1, 9},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 10},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 11},
    {refalrts::icIdent, 0, 0, 12},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 13},
    {refalrts::icLinkBrackets, 11, 13, 0},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icLinkBrackets, 8, 10, 0},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icPushStack, 0, 0, 7},
    {refalrts::icPushStack, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceEVar, 0, 0, 3},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icSpliceSTVar, 0, 0, 2},
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
  // s.ContextOffset#2/2 ( e.CommonVars#2/3 ) e.ResultCommands#2/0
  if( ! refalrts::svar_left( context[2], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[3] = 0;
  context[4] = 0;
  if( ! refalrts::brackets_left( context[3], context[4], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.CommonVars#2 as range 3
  // closed e.ResultCommands#2 as range 0
  //0: e.ResultCommands#2
  //2: s.ContextOffset#2
  //3: e.CommonVars#2

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_call( context[5] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[6], MakeVariableCommentTable, "MakeVariableCommentTable" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[9], & ident_CmdEmptyResult<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[12], & ident_CmdReturnResult<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[13] ) )
    return refalrts::cNoMemory;
  refalrts::link_brackets( context[11], context[13] );
  res = refalrts::splice_elem( res, context[13] );
  res = refalrts::splice_elem( res, context[12] );
  res = refalrts::splice_elem( res, context[11] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  refalrts::link_brackets( context[8], context[10] );
  res = refalrts::splice_elem( res, context[10] );
  res = refalrts::splice_elem( res, context[9] );
  res = refalrts::splice_elem( res, context[8] );
  refalrts::push_stack( context[7] );
  refalrts::push_stack( context[5] );
  res = refalrts::splice_elem( res, context[7] );
  res = refalrts::splice_evar( res, context[3], context[4] );
  res = refalrts::splice_elem( res, context[6] );
  res = refalrts::splice_elem( res, context[5] );
  res = refalrts::splice_stvar( res, context[2] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult GenResult(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 25 elems
  refalrts::Iter context[25];
  refalrts::zeros( context, 25 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { lambda_GenResult_1, "lambda_GenResult_1" },
    { CollectStrings, "CollectStrings" },
    { lambda_GenResult_0, "lambda_GenResult_0" },
    { Map, "Map" },
    { DoGenResult, "DoGenResult" },
    { Fetch, "Fetch" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    // s.ContextOffset#1/2 ( e.PatternVars#1/3 ) e.Result#1/0
    {refalrts::icsVarLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 3, 0},
    // closed e.PatternVars#1 as range 3
    // closed e.Result#1 as range 0
    //0: e.Result#1
    //2: s.ContextOffset#1
    //3: e.PatternVars#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 5},
    {refalrts::icFunc, 0, 5, 6},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 7},
    {refalrts::icFunc, 0, 4, 8},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 9},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 10},
    {refalrts::icFunc, 0, 3, 11},
    {refalrts::icFunc, 0, 2, 12},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 13},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 14},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 15},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 16},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 17},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 18},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 19},
    {refalrts::icFunc, 0, 1, 20},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 21},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 22},
    {refalrts::icFunc, 0, 0, 23},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 24},
    {refalrts::icPushStack, 0, 0, 24},
    {refalrts::icPushStack, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icPushStack, 0, 0, 22},
    {refalrts::icPushStack, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icPushStack, 0, 0, 21},
    {refalrts::icPushStack, 0, 0, 19},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceSTVar, 0, 0, 2},
    {refalrts::icLinkBrackets, 17, 18, 0},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icLinkBrackets, 15, 16, 0},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icLinkBrackets, 9, 14, 0},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icPushStack, 0, 0, 13},
    {refalrts::icPushStack, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceEVar, 0, 0, 3},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 7},
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
  // s.ContextOffset#1/2 ( e.PatternVars#1/3 ) e.Result#1/0
  if( ! refalrts::svar_left( context[2], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[3] = 0;
  context[4] = 0;
  if( ! refalrts::brackets_left( context[3], context[4], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.PatternVars#1 as range 3
  // closed e.Result#1 as range 0
  //0: e.Result#1
  //2: s.ContextOffset#1
  //3: e.PatternVars#1

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_call( context[5] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[6], Fetch, "Fetch" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[8], DoGenResult, "DoGenResult" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[11], Map, "Map" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[12], lambda_GenResult_0, "lambda_GenResult_0" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[13] ) )
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
  if( ! refalrts::alloc_name( context[20], CollectStrings, "CollectStrings" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[21] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[22] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[23], lambda_GenResult_1, "lambda_GenResult_1" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[24] ) )
    return refalrts::cNoMemory;
  refalrts::push_stack( context[24] );
  refalrts::push_stack( context[5] );
  res = refalrts::splice_elem( res, context[24] );
  res = refalrts::splice_elem( res, context[23] );
  refalrts::push_stack( context[22] );
  refalrts::push_stack( context[7] );
  res = refalrts::splice_elem( res, context[22] );
  refalrts::push_stack( context[21] );
  refalrts::push_stack( context[19] );
  res = refalrts::splice_elem( res, context[21] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_elem( res, context[20] );
  res = refalrts::splice_elem( res, context[19] );
  res = refalrts::splice_stvar( res, context[2] );
  refalrts::link_brackets( context[17], context[18] );
  res = refalrts::splice_elem( res, context[18] );
  res = refalrts::splice_elem( res, context[17] );
  refalrts::link_brackets( context[15], context[16] );
  res = refalrts::splice_elem( res, context[16] );
  res = refalrts::splice_elem( res, context[15] );
  refalrts::link_brackets( context[9], context[14] );
  res = refalrts::splice_elem( res, context[14] );
  refalrts::push_stack( context[13] );
  refalrts::push_stack( context[10] );
  res = refalrts::splice_elem( res, context[13] );
  res = refalrts::splice_evar( res, context[3], context[4] );
  res = refalrts::splice_elem( res, context[12] );
  res = refalrts::splice_elem( res, context[11] );
  res = refalrts::splice_elem( res, context[10] );
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

static refalrts::FnResult lambda_CollectStrings_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { CollectStrings, "CollectStrings" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_TkString<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Chars#2/2 ) e.Tail#2/0
    {refalrts::icBracketLeft, 0, 2, 0},
    // closed e.Chars#2 as range 2
    // closed e.Tail#2 as range 0
    //0: e.Tail#2
    //2: e.Chars#2
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
  // ( e.Chars#2/2 ) e.Tail#2/0
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Chars#2 as range 2
  // closed e.Tail#2 as range 0
  //0: e.Tail#2
  //2: e.Chars#2

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_bracket( context[4] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[5], & ident_TkString<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[8], CollectStrings, "CollectStrings" ) )
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

static refalrts::FnResult CollectStrings(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { CollectStrings, "CollectStrings" },
    { lambda_CollectStrings_0, "lambda_CollectStrings_0" },
    { BuildString, "BuildString" },
    { Fetch, "Fetch" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_ADT_Brackets<int>::name,
    & ident_CallBrackets<int>::name,
    & ident_Brackets<int>::name,
    & ident_TkChar<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +37, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( # TkChar s.Value1#1/6 ) ( # TkChar s.Value2#1/7 ) e.Tail#1/0
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icIdentLeft, 0, 3, 2},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icIdentLeft, 0, 3, 4},
    // closed e.Tail#1 as range 0
    {refalrts::icsVarLeft, 0, 6, 2},
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icsVarLeft, 0, 7, 4},
    {refalrts::icEmpty, 0, 0, 4},
    //0: e.Tail#1
    //6: s.Value1#1
    //7: s.Value2#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 8},
    {refalrts::icFunc, 0, 3, 9},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 10},
    {refalrts::icFunc, 0, 2, 11},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 12},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 13},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 14},
    {refalrts::icFunc, 0, 1, 15},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 16},
    {refalrts::icPushStack, 0, 0, 16},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icPushStack, 0, 0, 14},
    {refalrts::icPushStack, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icLinkBrackets, 12, 13, 0},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceSTVar, 0, 0, 7},
    {refalrts::icSpliceSTVar, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +30, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( # Brackets e.InBrackets#1/2 ) e.Tail#1/0
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icIdentLeft, 0, 2, 2},
    // closed e.InBrackets#1 as range 2
    // closed e.Tail#1 as range 0
    //0: e.Tail#1
    //2: e.InBrackets#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 4},
    {refalrts::icIdent, 0, 2, 5},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 6},
    {refalrts::icFunc, 0, 0, 7},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 8},
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
    {refalrts::icLinkBrackets, 4, 9, 0},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icPushStack, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +30, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( # CallBrackets e.InBrackets#1/2 ) e.Tail#1/0
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icIdentLeft, 0, 1, 2},
    // closed e.InBrackets#1 as range 2
    // closed e.Tail#1 as range 0
    //0: e.Tail#1
    //2: e.InBrackets#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 4},
    {refalrts::icIdent, 0, 1, 5},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 6},
    {refalrts::icFunc, 0, 0, 7},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 8},
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
    {refalrts::icLinkBrackets, 4, 9, 0},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icPushStack, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +30, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( # ADT_Brackets e.InBrackets#1/2 ) e.Tail#1/0
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icIdentLeft, 0, 0, 2},
    // closed e.InBrackets#1 as range 2
    // closed e.Tail#1 as range 0
    //0: e.Tail#1
    //2: e.InBrackets#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 4},
    {refalrts::icIdent, 0, 0, 5},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 6},
    {refalrts::icFunc, 0, 0, 7},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 8},
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
    {refalrts::icLinkBrackets, 4, 9, 0},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icPushStack, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +14, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // t.OtherTerm#1/2 e.Tail#1/0
    {refalrts::ictVarLeft, 0, 2, 0},
    // closed e.Tail#1 as range 0
    //0: e.Tail#1
    //2: t.OtherTerm#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 3},
    {refalrts::icFunc, 0, 0, 4},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 5},
    {refalrts::icPushStack, 0, 0, 5},
    {refalrts::icPushStack, 0, 0, 3},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 3},
    {refalrts::icSpliceSTVar, 0, 0, 2},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
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
    // ( # TkChar s.Value1#1/6 ) ( # TkChar s.Value2#1/7 ) e.Tail#1/0
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_TkChar<int>::name, context[2], context[3] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_TkChar<int>::name, context[4], context[5] ) )
      continue;
    // closed e.Tail#1 as range 0
    if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[7], context[4], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[4], context[5] ) )
      continue;
    //0: e.Tail#1
    //6: s.Value1#1
    //7: s.Value2#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[9], Fetch, "Fetch" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[11], BuildString, "BuildString" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[15], lambda_CollectStrings_0, "lambda_CollectStrings_0" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[16] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[16] );
    refalrts::push_stack( context[8] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_elem( res, context[15] );
    refalrts::push_stack( context[14] );
    refalrts::push_stack( context[10] );
    res = refalrts::splice_elem( res, context[14] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    refalrts::link_brackets( context[12], context[13] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_stvar( res, context[7] );
    res = refalrts::splice_stvar( res, context[6] );
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
    // ( # Brackets e.InBrackets#1/2 ) e.Tail#1/0
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_Brackets<int>::name, context[2], context[3] ) )
      continue;
    // closed e.InBrackets#1 as range 2
    // closed e.Tail#1 as range 0
    //0: e.Tail#1
    //2: e.InBrackets#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[4] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[5], & ident_Brackets<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[7], CollectStrings, "CollectStrings" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[9] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[11], CollectStrings, "CollectStrings" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[12] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[12] );
    refalrts::push_stack( context[10] );
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_elem( res, context[10] );
    refalrts::link_brackets( context[4], context[9] );
    res = refalrts::splice_elem( res, context[9] );
    refalrts::push_stack( context[8] );
    refalrts::push_stack( context[6] );
    res = refalrts::splice_elem( res, context[8] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_elem( res, context[7] );
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
    // ( # CallBrackets e.InBrackets#1/2 ) e.Tail#1/0
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CallBrackets<int>::name, context[2], context[3] ) )
      continue;
    // closed e.InBrackets#1 as range 2
    // closed e.Tail#1 as range 0
    //0: e.Tail#1
    //2: e.InBrackets#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[4] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[5], & ident_CallBrackets<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[7], CollectStrings, "CollectStrings" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[9] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[11], CollectStrings, "CollectStrings" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[12] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[12] );
    refalrts::push_stack( context[10] );
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_elem( res, context[10] );
    refalrts::link_brackets( context[4], context[9] );
    res = refalrts::splice_elem( res, context[9] );
    refalrts::push_stack( context[8] );
    refalrts::push_stack( context[6] );
    res = refalrts::splice_elem( res, context[8] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_elem( res, context[7] );
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
    // ( # ADT_Brackets e.InBrackets#1/2 ) e.Tail#1/0
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_ADT_Brackets<int>::name, context[2], context[3] ) )
      continue;
    // closed e.InBrackets#1 as range 2
    // closed e.Tail#1 as range 0
    //0: e.Tail#1
    //2: e.InBrackets#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[4] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[5], & ident_ADT_Brackets<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[7], CollectStrings, "CollectStrings" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[9] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[11], CollectStrings, "CollectStrings" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[12] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[12] );
    refalrts::push_stack( context[10] );
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_elem( res, context[10] );
    refalrts::link_brackets( context[4], context[9] );
    res = refalrts::splice_elem( res, context[9] );
    refalrts::push_stack( context[8] );
    refalrts::push_stack( context[6] );
    res = refalrts::splice_elem( res, context[8] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_elem( res, context[7] );
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
    // t.OtherTerm#1/2 e.Tail#1/0
    if( ! refalrts::tvar_left( context[2], context[0], context[1] ) )
      continue;
    // closed e.Tail#1 as range 0
    //0: e.Tail#1
    //2: t.OtherTerm#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[3] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[4], CollectStrings, "CollectStrings" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[5] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[5] );
    refalrts::push_stack( context[3] );
    res = refalrts::splice_elem( res, context[5] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    res = refalrts::splice_elem( res, context[4] );
    res = refalrts::splice_elem( res, context[3] );
    res = refalrts::splice_stvar( res, context[2] );
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

static refalrts::FnResult BuildString(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { BuildString, "BuildString" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_TkChar<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +24, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Chars#1/2 ) ( # TkChar s.Value#1/6 ) e.Tail#1/0
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icIdentLeft, 0, 0, 4},
    // closed e.Chars#1 as range 2
    // closed e.Tail#1 as range 0
    {refalrts::icsVarLeft, 0, 6, 4},
    {refalrts::icEmpty, 0, 0, 4},
    //0: e.Tail#1
    //2: e.Chars#1
    //6: s.Value#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 7},
    {refalrts::icFunc, 0, 0, 8},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 9},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 10},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 11},
    {refalrts::icPushStack, 0, 0, 11},
    {refalrts::icPushStack, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icLinkBrackets, 9, 10, 0},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceSTVar, 0, 0, 6},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Chars#1/2 ) e.Tail#1/0
    {refalrts::icBracketLeft, 0, 2, 0},
    // closed e.Chars#1 as range 2
    // closed e.Tail#1 as range 0
    //0: e.Tail#1
    //2: e.Chars#1
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
    // ( e.Chars#1/2 ) ( # TkChar s.Value#1/6 ) e.Tail#1/0
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_TkChar<int>::name, context[4], context[5] ) )
      continue;
    // closed e.Chars#1 as range 2
    // closed e.Tail#1 as range 0
    if( ! refalrts::svar_left( context[6], context[4], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[4], context[5] ) )
      continue;
    //0: e.Tail#1
    //2: e.Chars#1
    //6: s.Value#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[7] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[8], BuildString, "BuildString" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[9] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[11] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[11] );
    refalrts::push_stack( context[7] );
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    refalrts::link_brackets( context[9], context[10] );
    res = refalrts::splice_elem( res, context[10] );
    res = refalrts::splice_stvar( res, context[6] );
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
  // ( e.Chars#1/2 ) e.Tail#1/0
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Chars#1 as range 2
  // closed e.Tail#1 as range 0
  //0: e.Tail#1
  //2: e.Chars#1

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

static refalrts::FnResult DoGenResult(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 56 elems
  refalrts::Iter context[56];
  refalrts::zeros( context, 56 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { IncVarOffset, "IncVarOffset" },
    { DoGenResult, "DoGenResult" },
    { Inc, "Inc" },
    { Add, "Add" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_CmdInsertVar<int>::name,
    & ident_CmdCopyVar<int>::name,
    & ident_TkVariable<int>::name,
    & ident_CmdInsertElem<int>::name,
    & ident_CmdPushStack<int>::name,
    & ident_ElCloseCall<int>::name,
    & ident_CmdAllocateElem<int>::name,
    & ident_CloseCall<int>::name,
    & ident_CmdLinkBrackets<int>::name,
    & ident_ElCloseADT<int>::name,
    & ident_TkCloseADT<int>::name,
    & ident_ElCloseBracket<int>::name,
    & ident_TkCloseBracket<int>::name,
    & ident_TkName<int>::name,
    & ident_ElOpenADT<int>::name,
    & ident_ADT_Brackets<int>::name,
    & ident_ElOpenCall<int>::name,
    & ident_CallBrackets<int>::name,
    & ident_ElOpenBracket<int>::name,
    & ident_Brackets<int>::name,
    & ident_CmdInsertRange<int>::name,
    & ident_ElString<int>::name,
    & ident_TkString<int>::name,
    & ident_ElIdent<int>::name,
    & ident_TkIdentifier<int>::name,
    & ident_ElNumber<int>::name,
    & ident_TkNumber<int>::name,
    & ident_ElName<int>::name,
    & ident_ElChar<int>::name,
    & ident_TkChar<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +68, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Vars#1/2 ) ( e.AllocCommands#1/4 ) ( e.Commands#1/6 ) s.Counter#1/8 ( # TkChar s.Value#1/11 ) e.Result#1/0
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icBracketLeft, 0, 6, 0},
    // closed e.Vars#1 as range 2
    // closed e.AllocCommands#1 as range 4
    // closed e.Commands#1 as range 6
    {refalrts::icsVarLeft, 0, 8, 0},
    {refalrts::icBracketLeft, 0, 9, 0},
    {refalrts::icIdentLeft, 0, 29, 9},
    // closed e.Result#1 as range 0
    {refalrts::icsVarLeft, 0, 11, 9},
    {refalrts::icEmpty, 0, 0, 9},
    //0: e.Result#1
    //2: e.Vars#1
    //4: e.AllocCommands#1
    //6: e.Commands#1
    //8: s.Counter#1
    //11: s.Value#1
    //25: s.Counter#1
    //30: s.Counter#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 12},
    {refalrts::icFunc, 0, 1, 13},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 14},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 15},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 16},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 17},
    {refalrts::icIdent, 0, 6, 18},
    {refalrts::icIdent, 0, 28, 19},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 20},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 21},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 22},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 23},
    {refalrts::icIdent, 0, 3, 24},
    {refalrts::icCopySTVar, 25, 8, 0},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 26},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 27},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 28},
    {refalrts::icFunc, 0, 2, 29},
    {refalrts::icCopySTVar, 30, 25, 0},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 31},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 32},
    {refalrts::icPushStack, 0, 0, 32},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 32},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icPushStack, 0, 0, 31},
    {refalrts::icPushStack, 0, 0, 28},
    {refalrts::icSpliceElem, 0, 0, 31},
    {refalrts::icSpliceSTVar, 0, 0, 30},
    {refalrts::icSpliceElem, 0, 0, 29},
    {refalrts::icSpliceElem, 0, 0, 28},
    {refalrts::icLinkBrackets, 22, 27, 0},
    {refalrts::icSpliceElem, 0, 0, 27},
    {refalrts::icSpliceEVar, 0, 0, 6},
    {refalrts::icLinkBrackets, 23, 26, 0},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icSpliceSTVar, 0, 0, 25},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icLinkBrackets, 16, 21, 0},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icLinkBrackets, 17, 20, 0},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceSTVar, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceSTVar, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceEVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icLinkBrackets, 14, 15, 0},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +66, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Vars#1/2 ) ( e.AllocCommands#1/4 ) ( e.Commands#1/6 ) s.Counter#1/8 ( # TkName e.Name#1/9 ) e.Result#1/0
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icBracketLeft, 0, 6, 0},
    // closed e.Vars#1 as range 2
    // closed e.AllocCommands#1 as range 4
    // closed e.Commands#1 as range 6
    {refalrts::icsVarLeft, 0, 8, 0},
    {refalrts::icBracketLeft, 0, 9, 0},
    {refalrts::icIdentLeft, 0, 13, 9},
    // closed e.Name#1 as range 9
    // closed e.Result#1 as range 0
    //0: e.Result#1
    //2: e.Vars#1
    //4: e.AllocCommands#1
    //6: e.Commands#1
    //8: s.Counter#1
    //9: e.Name#1
    //24: s.Counter#1
    //29: s.Counter#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 11},
    {refalrts::icFunc, 0, 1, 12},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 13},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 14},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 15},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 16},
    {refalrts::icIdent, 0, 6, 17},
    {refalrts::icIdent, 0, 27, 18},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 19},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 20},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 21},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 22},
    {refalrts::icIdent, 0, 3, 23},
    {refalrts::icCopySTVar, 24, 8, 0},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 25},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 26},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 27},
    {refalrts::icFunc, 0, 2, 28},
    {refalrts::icCopySTVar, 29, 24, 0},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 30},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 31},
    {refalrts::icPushStack, 0, 0, 31},
    {refalrts::icPushStack, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 31},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icPushStack, 0, 0, 30},
    {refalrts::icPushStack, 0, 0, 27},
    {refalrts::icSpliceElem, 0, 0, 30},
    {refalrts::icSpliceSTVar, 0, 0, 29},
    {refalrts::icSpliceElem, 0, 0, 28},
    {refalrts::icSpliceElem, 0, 0, 27},
    {refalrts::icLinkBrackets, 21, 26, 0},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icSpliceEVar, 0, 0, 6},
    {refalrts::icLinkBrackets, 22, 25, 0},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icSpliceSTVar, 0, 0, 24},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icLinkBrackets, 15, 20, 0},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icLinkBrackets, 16, 19, 0},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceEVar, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceSTVar, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 17},
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
    {refalrts::icOnFailGoTo, +68, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Vars#1/2 ) ( e.AllocCommands#1/4 ) ( e.Commands#1/6 ) s.Counter#1/8 ( # TkNumber s.Number#1/11 ) e.Result#1/0
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icBracketLeft, 0, 6, 0},
    // closed e.Vars#1 as range 2
    // closed e.AllocCommands#1 as range 4
    // closed e.Commands#1 as range 6
    {refalrts::icsVarLeft, 0, 8, 0},
    {refalrts::icBracketLeft, 0, 9, 0},
    {refalrts::icIdentLeft, 0, 26, 9},
    // closed e.Result#1 as range 0
    {refalrts::icsVarLeft, 0, 11, 9},
    {refalrts::icEmpty, 0, 0, 9},
    //0: e.Result#1
    //2: e.Vars#1
    //4: e.AllocCommands#1
    //6: e.Commands#1
    //8: s.Counter#1
    //11: s.Number#1
    //25: s.Counter#1
    //30: s.Counter#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 12},
    {refalrts::icFunc, 0, 1, 13},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 14},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 15},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 16},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 17},
    {refalrts::icIdent, 0, 6, 18},
    {refalrts::icIdent, 0, 25, 19},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 20},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 21},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 22},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 23},
    {refalrts::icIdent, 0, 3, 24},
    {refalrts::icCopySTVar, 25, 8, 0},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 26},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 27},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 28},
    {refalrts::icFunc, 0, 2, 29},
    {refalrts::icCopySTVar, 30, 25, 0},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 31},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 32},
    {refalrts::icPushStack, 0, 0, 32},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 32},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icPushStack, 0, 0, 31},
    {refalrts::icPushStack, 0, 0, 28},
    {refalrts::icSpliceElem, 0, 0, 31},
    {refalrts::icSpliceSTVar, 0, 0, 30},
    {refalrts::icSpliceElem, 0, 0, 29},
    {refalrts::icSpliceElem, 0, 0, 28},
    {refalrts::icLinkBrackets, 22, 27, 0},
    {refalrts::icSpliceElem, 0, 0, 27},
    {refalrts::icSpliceEVar, 0, 0, 6},
    {refalrts::icLinkBrackets, 23, 26, 0},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icSpliceSTVar, 0, 0, 25},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icLinkBrackets, 16, 21, 0},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icLinkBrackets, 17, 20, 0},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceSTVar, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceSTVar, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceEVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icLinkBrackets, 14, 15, 0},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +66, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Vars#1/2 ) ( e.AllocCommands#1/4 ) ( e.Commands#1/6 ) s.Counter#1/8 ( # TkIdentifier e.Name#1/9 ) e.Result#1/0
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icBracketLeft, 0, 6, 0},
    // closed e.Vars#1 as range 2
    // closed e.AllocCommands#1 as range 4
    // closed e.Commands#1 as range 6
    {refalrts::icsVarLeft, 0, 8, 0},
    {refalrts::icBracketLeft, 0, 9, 0},
    {refalrts::icIdentLeft, 0, 24, 9},
    // closed e.Name#1 as range 9
    // closed e.Result#1 as range 0
    //0: e.Result#1
    //2: e.Vars#1
    //4: e.AllocCommands#1
    //6: e.Commands#1
    //8: s.Counter#1
    //9: e.Name#1
    //24: s.Counter#1
    //29: s.Counter#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 11},
    {refalrts::icFunc, 0, 1, 12},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 13},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 14},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 15},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 16},
    {refalrts::icIdent, 0, 6, 17},
    {refalrts::icIdent, 0, 23, 18},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 19},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 20},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 21},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 22},
    {refalrts::icIdent, 0, 3, 23},
    {refalrts::icCopySTVar, 24, 8, 0},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 25},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 26},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 27},
    {refalrts::icFunc, 0, 2, 28},
    {refalrts::icCopySTVar, 29, 24, 0},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 30},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 31},
    {refalrts::icPushStack, 0, 0, 31},
    {refalrts::icPushStack, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 31},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icPushStack, 0, 0, 30},
    {refalrts::icPushStack, 0, 0, 27},
    {refalrts::icSpliceElem, 0, 0, 30},
    {refalrts::icSpliceSTVar, 0, 0, 29},
    {refalrts::icSpliceElem, 0, 0, 28},
    {refalrts::icSpliceElem, 0, 0, 27},
    {refalrts::icLinkBrackets, 21, 26, 0},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icSpliceEVar, 0, 0, 6},
    {refalrts::icLinkBrackets, 22, 25, 0},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icSpliceSTVar, 0, 0, 24},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icLinkBrackets, 15, 20, 0},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icLinkBrackets, 16, 19, 0},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceEVar, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceSTVar, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 17},
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
    {refalrts::icOnFailGoTo, +68, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Vars#1/2 ) ( e.AllocCommands#1/4 ) ( e.Commands#1/6 ) s.Counter#1/8 ( # TkString e.Chars#1/9 ) e.Result#1/0
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icBracketLeft, 0, 6, 0},
    // closed e.Vars#1 as range 2
    // closed e.AllocCommands#1 as range 4
    // closed e.Commands#1 as range 6
    {refalrts::icsVarLeft, 0, 8, 0},
    {refalrts::icBracketLeft, 0, 9, 0},
    {refalrts::icIdentLeft, 0, 22, 9},
    // closed e.Chars#1 as range 9
    // closed e.Result#1 as range 0
    //0: e.Result#1
    //2: e.Vars#1
    //4: e.AllocCommands#1
    //6: e.Commands#1
    //8: s.Counter#1
    //9: e.Chars#1
    //24: s.Counter#1
    //29: s.Counter#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 11},
    {refalrts::icFunc, 0, 1, 12},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 13},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 14},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 15},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 16},
    {refalrts::icIdent, 0, 6, 17},
    {refalrts::icIdent, 0, 21, 18},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 19},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 20},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 21},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 22},
    {refalrts::icIdent, 0, 20, 23},
    {refalrts::icCopySTVar, 24, 8, 0},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 25},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 26},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 27},
    {refalrts::icFunc, 0, 3, 28},
    {refalrts::icCopySTVar, 29, 24, 0},
    {refalrts::icInt, 0, 2, 30},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 31},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 32},
    {refalrts::icPushStack, 0, 0, 32},
    {refalrts::icPushStack, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 32},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icPushStack, 0, 0, 31},
    {refalrts::icPushStack, 0, 0, 27},
    {refalrts::icSpliceElem, 0, 0, 31},
    {refalrts::icSpliceElem, 0, 0, 30},
    {refalrts::icSpliceSTVar, 0, 0, 29},
    {refalrts::icSpliceElem, 0, 0, 28},
    {refalrts::icSpliceElem, 0, 0, 27},
    {refalrts::icLinkBrackets, 21, 26, 0},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icSpliceEVar, 0, 0, 6},
    {refalrts::icLinkBrackets, 22, 25, 0},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icSpliceSTVar, 0, 0, 24},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icLinkBrackets, 15, 20, 0},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icLinkBrackets, 16, 19, 0},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceEVar, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceSTVar, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 17},
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
    {refalrts::icOnFailGoTo, +75, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Vars#1/2 ) ( e.AllocCommands#1/4 ) ( e.Commands#1/6 ) s.Counter#1/8 ( # Brackets e.InBrackets#1/9 ) e.Result#1/0
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icBracketLeft, 0, 6, 0},
    // closed e.Vars#1 as range 2
    // closed e.AllocCommands#1 as range 4
    // closed e.Commands#1 as range 6
    {refalrts::icsVarLeft, 0, 8, 0},
    {refalrts::icBracketLeft, 0, 9, 0},
    {refalrts::icIdentLeft, 0, 19, 9},
    // closed e.InBrackets#1 as range 9
    // closed e.Result#1 as range 0
    //0: e.Result#1
    //2: e.Vars#1
    //4: e.AllocCommands#1
    //6: e.Commands#1
    //8: s.Counter#1
    //9: e.InBrackets#1
    //24: s.Counter#1
    //29: s.Counter#1
    //33: s.Counter#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 11},
    {refalrts::icFunc, 0, 1, 12},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 13},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 14},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 15},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 16},
    {refalrts::icIdent, 0, 6, 17},
    {refalrts::icIdent, 0, 18, 18},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 19},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 20},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 21},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 22},
    {refalrts::icIdent, 0, 3, 23},
    {refalrts::icCopySTVar, 24, 8, 0},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 25},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 26},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 27},
    {refalrts::icFunc, 0, 2, 28},
    {refalrts::icCopySTVar, 29, 24, 0},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 30},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 31},
    {refalrts::icIdent, 0, 12, 32},
    {refalrts::icCopySTVar, 33, 29, 0},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 34},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 35},
    {refalrts::icPushStack, 0, 0, 35},
    {refalrts::icPushStack, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 35},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icLinkBrackets, 31, 34, 0},
    {refalrts::icSpliceElem, 0, 0, 34},
    {refalrts::icSpliceSTVar, 0, 0, 33},
    {refalrts::icSpliceElem, 0, 0, 32},
    {refalrts::icSpliceElem, 0, 0, 31},
    {refalrts::icSpliceEVar, 0, 0, 9},
    {refalrts::icPushStack, 0, 0, 30},
    {refalrts::icPushStack, 0, 0, 27},
    {refalrts::icSpliceElem, 0, 0, 30},
    {refalrts::icSpliceSTVar, 0, 0, 29},
    {refalrts::icSpliceElem, 0, 0, 28},
    {refalrts::icSpliceElem, 0, 0, 27},
    {refalrts::icLinkBrackets, 21, 26, 0},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icSpliceEVar, 0, 0, 6},
    {refalrts::icLinkBrackets, 22, 25, 0},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icSpliceSTVar, 0, 0, 24},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icLinkBrackets, 15, 20, 0},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icLinkBrackets, 16, 19, 0},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceSTVar, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 17},
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
    {refalrts::icOnFailGoTo, +75, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Vars#1/2 ) ( e.AllocCommands#1/4 ) ( e.Commands#1/6 ) s.Counter#1/8 ( # CallBrackets e.InBrackets#1/9 ) e.Result#1/0
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icBracketLeft, 0, 6, 0},
    // closed e.Vars#1 as range 2
    // closed e.AllocCommands#1 as range 4
    // closed e.Commands#1 as range 6
    {refalrts::icsVarLeft, 0, 8, 0},
    {refalrts::icBracketLeft, 0, 9, 0},
    {refalrts::icIdentLeft, 0, 17, 9},
    // closed e.InBrackets#1 as range 9
    // closed e.Result#1 as range 0
    //0: e.Result#1
    //2: e.Vars#1
    //4: e.AllocCommands#1
    //6: e.Commands#1
    //8: s.Counter#1
    //9: e.InBrackets#1
    //24: s.Counter#1
    //29: s.Counter#1
    //33: s.Counter#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 11},
    {refalrts::icFunc, 0, 1, 12},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 13},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 14},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 15},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 16},
    {refalrts::icIdent, 0, 6, 17},
    {refalrts::icIdent, 0, 16, 18},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 19},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 20},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 21},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 22},
    {refalrts::icIdent, 0, 3, 23},
    {refalrts::icCopySTVar, 24, 8, 0},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 25},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 26},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 27},
    {refalrts::icFunc, 0, 2, 28},
    {refalrts::icCopySTVar, 29, 24, 0},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 30},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 31},
    {refalrts::icIdent, 0, 7, 32},
    {refalrts::icCopySTVar, 33, 29, 0},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 34},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 35},
    {refalrts::icPushStack, 0, 0, 35},
    {refalrts::icPushStack, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 35},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icLinkBrackets, 31, 34, 0},
    {refalrts::icSpliceElem, 0, 0, 34},
    {refalrts::icSpliceSTVar, 0, 0, 33},
    {refalrts::icSpliceElem, 0, 0, 32},
    {refalrts::icSpliceElem, 0, 0, 31},
    {refalrts::icSpliceEVar, 0, 0, 9},
    {refalrts::icPushStack, 0, 0, 30},
    {refalrts::icPushStack, 0, 0, 27},
    {refalrts::icSpliceElem, 0, 0, 30},
    {refalrts::icSpliceSTVar, 0, 0, 29},
    {refalrts::icSpliceElem, 0, 0, 28},
    {refalrts::icSpliceElem, 0, 0, 27},
    {refalrts::icLinkBrackets, 21, 26, 0},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icSpliceEVar, 0, 0, 6},
    {refalrts::icLinkBrackets, 22, 25, 0},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icSpliceSTVar, 0, 0, 24},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icLinkBrackets, 15, 20, 0},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icLinkBrackets, 16, 19, 0},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceSTVar, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 17},
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
    {refalrts::icOnFailGoTo, +84, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Vars#1/2 ) ( e.AllocCommands#1/4 ) ( e.Commands#1/6 ) s.Counter#1/8 ( # ADT_Brackets ( e.Name#1/11 ) e.InBrackets#1/9 ) e.Result#1/0
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icBracketLeft, 0, 6, 0},
    // closed e.Vars#1 as range 2
    // closed e.AllocCommands#1 as range 4
    // closed e.Commands#1 as range 6
    {refalrts::icsVarLeft, 0, 8, 0},
    {refalrts::icBracketLeft, 0, 9, 0},
    {refalrts::icIdentLeft, 0, 15, 9},
    {refalrts::icBracketLeft, 0, 11, 9},
    // closed e.Name#1 as range 11
    // closed e.InBrackets#1 as range 9
    // closed e.Result#1 as range 0
    //0: e.Result#1
    //2: e.Vars#1
    //4: e.AllocCommands#1
    //6: e.Commands#1
    //8: s.Counter#1
    //9: e.InBrackets#1
    //11: e.Name#1
    //26: s.Counter#1
    //31: s.Counter#1
    //38: s.Counter#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 13},
    {refalrts::icFunc, 0, 1, 14},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 15},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 16},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 17},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 18},
    {refalrts::icIdent, 0, 6, 19},
    {refalrts::icIdent, 0, 14, 20},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 21},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 22},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 23},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 24},
    {refalrts::icIdent, 0, 3, 25},
    {refalrts::icCopySTVar, 26, 8, 0},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 27},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 28},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 29},
    {refalrts::icFunc, 0, 2, 30},
    {refalrts::icCopySTVar, 31, 26, 0},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 32},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 33},
    {refalrts::icIdent, 0, 13, 34},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 35},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 36},
    {refalrts::icIdent, 0, 10, 37},
    {refalrts::icCopySTVar, 38, 31, 0},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 39},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 40},
    {refalrts::icPushStack, 0, 0, 40},
    {refalrts::icPushStack, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 40},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icLinkBrackets, 36, 39, 0},
    {refalrts::icSpliceElem, 0, 0, 39},
    {refalrts::icSpliceSTVar, 0, 0, 38},
    {refalrts::icSpliceElem, 0, 0, 37},
    {refalrts::icSpliceElem, 0, 0, 36},
    {refalrts::icSpliceEVar, 0, 0, 9},
    {refalrts::icLinkBrackets, 33, 35, 0},
    {refalrts::icSpliceElem, 0, 0, 35},
    {refalrts::icSpliceEVar, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 34},
    {refalrts::icSpliceElem, 0, 0, 33},
    {refalrts::icPushStack, 0, 0, 32},
    {refalrts::icPushStack, 0, 0, 29},
    {refalrts::icSpliceElem, 0, 0, 32},
    {refalrts::icSpliceSTVar, 0, 0, 31},
    {refalrts::icSpliceElem, 0, 0, 30},
    {refalrts::icSpliceElem, 0, 0, 29},
    {refalrts::icLinkBrackets, 23, 28, 0},
    {refalrts::icSpliceElem, 0, 0, 28},
    {refalrts::icSpliceEVar, 0, 0, 6},
    {refalrts::icLinkBrackets, 24, 27, 0},
    {refalrts::icSpliceElem, 0, 0, 27},
    {refalrts::icSpliceSTVar, 0, 0, 26},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icLinkBrackets, 17, 22, 0},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icLinkBrackets, 18, 21, 0},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceSTVar, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceEVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icLinkBrackets, 15, 16, 0},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +77, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Vars#1/2 ) ( e.AllocCommands#1/4 ) ( e.Commands#1/6 ) s.Counter#1/8 ( # TkCloseBracket s.OpenCounter#1/11 ) e.Result#1/0
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icBracketLeft, 0, 6, 0},
    // closed e.Vars#1 as range 2
    // closed e.AllocCommands#1 as range 4
    // closed e.Commands#1 as range 6
    {refalrts::icsVarLeft, 0, 8, 0},
    {refalrts::icBracketLeft, 0, 9, 0},
    {refalrts::icIdentLeft, 0, 12, 9},
    // closed e.Result#1 as range 0
    {refalrts::icsVarLeft, 0, 11, 9},
    {refalrts::icEmpty, 0, 0, 9},
    //0: e.Result#1
    //2: e.Vars#1
    //4: e.AllocCommands#1
    //6: e.Commands#1
    //8: s.Counter#1
    //11: s.OpenCounter#1
    //25: s.Counter#1
    //29: s.Counter#1
    //34: s.Counter#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 12},
    {refalrts::icFunc, 0, 1, 13},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 14},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 15},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 16},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 17},
    {refalrts::icIdent, 0, 6, 18},
    {refalrts::icIdent, 0, 11, 19},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 20},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 21},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 22},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 23},
    {refalrts::icIdent, 0, 8, 24},
    {refalrts::icCopySTVar, 25, 8, 0},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 26},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 27},
    {refalrts::icIdent, 0, 3, 28},
    {refalrts::icCopySTVar, 29, 25, 0},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 30},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 31},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 32},
    {refalrts::icFunc, 0, 2, 33},
    {refalrts::icCopySTVar, 34, 29, 0},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 35},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 36},
    {refalrts::icPushStack, 0, 0, 36},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 36},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icPushStack, 0, 0, 35},
    {refalrts::icPushStack, 0, 0, 32},
    {refalrts::icSpliceElem, 0, 0, 35},
    {refalrts::icSpliceSTVar, 0, 0, 34},
    {refalrts::icSpliceElem, 0, 0, 33},
    {refalrts::icSpliceElem, 0, 0, 32},
    {refalrts::icLinkBrackets, 22, 31, 0},
    {refalrts::icSpliceElem, 0, 0, 31},
    {refalrts::icSpliceEVar, 0, 0, 6},
    {refalrts::icLinkBrackets, 27, 30, 0},
    {refalrts::icSpliceElem, 0, 0, 30},
    {refalrts::icSpliceSTVar, 0, 0, 29},
    {refalrts::icSpliceElem, 0, 0, 28},
    {refalrts::icSpliceElem, 0, 0, 27},
    {refalrts::icLinkBrackets, 23, 26, 0},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icSpliceSTVar, 0, 0, 25},
    {refalrts::icSpliceSTVar, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icLinkBrackets, 16, 21, 0},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icLinkBrackets, 17, 20, 0},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceSTVar, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceEVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icLinkBrackets, 14, 15, 0},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +77, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Vars#1/2 ) ( e.AllocCommands#1/4 ) ( e.Commands#1/6 ) s.Counter#1/8 ( # TkCloseADT s.OpenCounter#1/11 ) e.Result#1/0
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icBracketLeft, 0, 6, 0},
    // closed e.Vars#1 as range 2
    // closed e.AllocCommands#1 as range 4
    // closed e.Commands#1 as range 6
    {refalrts::icsVarLeft, 0, 8, 0},
    {refalrts::icBracketLeft, 0, 9, 0},
    {refalrts::icIdentLeft, 0, 10, 9},
    // closed e.Result#1 as range 0
    {refalrts::icsVarLeft, 0, 11, 9},
    {refalrts::icEmpty, 0, 0, 9},
    //0: e.Result#1
    //2: e.Vars#1
    //4: e.AllocCommands#1
    //6: e.Commands#1
    //8: s.Counter#1
    //11: s.OpenCounter#1
    //25: s.Counter#1
    //29: s.Counter#1
    //34: s.Counter#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 12},
    {refalrts::icFunc, 0, 1, 13},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 14},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 15},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 16},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 17},
    {refalrts::icIdent, 0, 6, 18},
    {refalrts::icIdent, 0, 9, 19},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 20},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 21},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 22},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 23},
    {refalrts::icIdent, 0, 8, 24},
    {refalrts::icCopySTVar, 25, 8, 0},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 26},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 27},
    {refalrts::icIdent, 0, 3, 28},
    {refalrts::icCopySTVar, 29, 25, 0},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 30},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 31},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 32},
    {refalrts::icFunc, 0, 2, 33},
    {refalrts::icCopySTVar, 34, 29, 0},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 35},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 36},
    {refalrts::icPushStack, 0, 0, 36},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 36},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icPushStack, 0, 0, 35},
    {refalrts::icPushStack, 0, 0, 32},
    {refalrts::icSpliceElem, 0, 0, 35},
    {refalrts::icSpliceSTVar, 0, 0, 34},
    {refalrts::icSpliceElem, 0, 0, 33},
    {refalrts::icSpliceElem, 0, 0, 32},
    {refalrts::icLinkBrackets, 22, 31, 0},
    {refalrts::icSpliceElem, 0, 0, 31},
    {refalrts::icSpliceEVar, 0, 0, 6},
    {refalrts::icLinkBrackets, 27, 30, 0},
    {refalrts::icSpliceElem, 0, 0, 30},
    {refalrts::icSpliceSTVar, 0, 0, 29},
    {refalrts::icSpliceElem, 0, 0, 28},
    {refalrts::icSpliceElem, 0, 0, 27},
    {refalrts::icLinkBrackets, 23, 26, 0},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icSpliceSTVar, 0, 0, 25},
    {refalrts::icSpliceSTVar, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icLinkBrackets, 16, 21, 0},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icLinkBrackets, 17, 20, 0},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceSTVar, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceEVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icLinkBrackets, 14, 15, 0},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +84, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Vars#1/2 ) ( e.AllocCommands#1/4 ) ( e.Commands#1/6 ) s.Counter#1/8 ( # CloseCall s.OpenCounter#1/11 ) e.Result#1/0
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icBracketLeft, 0, 6, 0},
    // closed e.Vars#1 as range 2
    // closed e.AllocCommands#1 as range 4
    // closed e.Commands#1 as range 6
    {refalrts::icsVarLeft, 0, 8, 0},
    {refalrts::icBracketLeft, 0, 9, 0},
    {refalrts::icIdentLeft, 0, 7, 9},
    // closed e.Result#1 as range 0
    {refalrts::icsVarLeft, 0, 11, 9},
    {refalrts::icEmpty, 0, 0, 9},
    //0: e.Result#1
    //2: e.Vars#1
    //4: e.AllocCommands#1
    //6: e.Commands#1
    //8: s.Counter#1
    //11: s.OpenCounter#1
    //25: s.Counter#1
    //32: s.Counter#1
    //37: s.Counter#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 12},
    {refalrts::icFunc, 0, 1, 13},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 14},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 15},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 16},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 17},
    {refalrts::icIdent, 0, 6, 18},
    {refalrts::icIdent, 0, 5, 19},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 20},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 21},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 22},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 23},
    {refalrts::icIdent, 0, 4, 24},
    {refalrts::icCopySTVar, 25, 8, 0},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 26},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 27},
    {refalrts::icIdent, 0, 4, 28},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 29},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 30},
    {refalrts::icIdent, 0, 3, 31},
    {refalrts::icCopySTVar, 32, 25, 0},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 33},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 34},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 35},
    {refalrts::icFunc, 0, 2, 36},
    {refalrts::icCopySTVar, 37, 32, 0},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 38},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 39},
    {refalrts::icPushStack, 0, 0, 39},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 39},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icPushStack, 0, 0, 38},
    {refalrts::icPushStack, 0, 0, 35},
    {refalrts::icSpliceElem, 0, 0, 38},
    {refalrts::icSpliceSTVar, 0, 0, 37},
    {refalrts::icSpliceElem, 0, 0, 36},
    {refalrts::icSpliceElem, 0, 0, 35},
    {refalrts::icLinkBrackets, 22, 34, 0},
    {refalrts::icSpliceElem, 0, 0, 34},
    {refalrts::icSpliceEVar, 0, 0, 6},
    {refalrts::icLinkBrackets, 30, 33, 0},
    {refalrts::icSpliceElem, 0, 0, 33},
    {refalrts::icSpliceSTVar, 0, 0, 32},
    {refalrts::icSpliceElem, 0, 0, 31},
    {refalrts::icSpliceElem, 0, 0, 30},
    {refalrts::icLinkBrackets, 27, 29, 0},
    {refalrts::icSpliceElem, 0, 0, 29},
    {refalrts::icSpliceSTVar, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 28},
    {refalrts::icSpliceElem, 0, 0, 27},
    {refalrts::icLinkBrackets, 23, 26, 0},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icSpliceSTVar, 0, 0, 25},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icLinkBrackets, 16, 21, 0},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icLinkBrackets, 17, 20, 0},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceSTVar, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceEVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icLinkBrackets, 14, 15, 0},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +79, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Vars_B#1/12 ( s.Mode#1/16 ( e.Index#1/21 ) ( e.ResultVars#1/19 ) s.NextPatternVar#1/23 e.PatternVars#1/14 ) e.Vars_E#1/24 ) ( e.AllocCommands#1/4 ) ( e.Commands#1/6 ) s.Counter#1/8 ( # TkVariable s.Mode#1/11 e.Index#1/9 ) e.Result#1/0
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icBracketLeft, 0, 6, 0},
    // closed e.AllocCommands#1 as range 4
    // closed e.Commands#1 as range 6
    {refalrts::icsVarLeft, 0, 8, 0},
    {refalrts::icBracketLeft, 0, 9, 0},
    {refalrts::icIdentLeft, 0, 2, 9},
    // closed e.Result#1 as range 0
    {refalrts::icsVarLeft, 0, 11, 9},
    // closed e.Index#1 as range 9
    {refalrts::icEPrepare, 0, 12, 2},
    {refalrts::icEStart, 0, 12, 2},
    {refalrts::icSave, 0, 24, 2},
    {refalrts::icBracketLeft, 0, 14, 24},
    {refalrts::icsRepeatLeft, 16, 11, 14},
    {refalrts::icBracketLeft, 0, 17, 14},
    {refalrts::icBracketLeft, 0, 19, 14},
    {refalrts::iceRepeatLeft, 21, 9, 17},
    {refalrts::icEmpty, 0, 0, 17},
    // closed e.ResultVars#1 as range 19
    // closed e.Vars_E#1 as range 2
    {refalrts::icsVarLeft, 0, 23, 14},
    // closed e.PatternVars#1 as range 14
    //0: e.Result#1
    //4: e.AllocCommands#1
    //6: e.Commands#1
    //8: s.Counter#1
    //9: e.Index#1
    //11: s.Mode#1
    //12: e.Vars_B#1
    //14: e.PatternVars#1
    //16: s.Mode#1
    //19: e.ResultVars#1
    //21: e.Index#1
    //23: s.NextPatternVar#1
    //24: e.Vars_E#1
    //41: s.NextPatternVar#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 26},
    {refalrts::icFunc, 0, 1, 27},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 28},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 29},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 30},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 31},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 32},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 33},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 34},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 35},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 36},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 37},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 38},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 39},
    {refalrts::icIdent, 0, 0, 40},
    {refalrts::icCopySTVar, 41, 23, 0},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 42},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 43},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 44},
    {refalrts::icPushStack, 0, 0, 44},
    {refalrts::icPushStack, 0, 0, 26},
    {refalrts::icSpliceElem, 0, 0, 44},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icSpliceSTVar, 0, 0, 8},
    {refalrts::icLinkBrackets, 38, 43, 0},
    {refalrts::icSpliceElem, 0, 0, 43},
    {refalrts::icSpliceEVar, 0, 0, 6},
    {refalrts::icLinkBrackets, 39, 42, 0},
    {refalrts::icSpliceElem, 0, 0, 42},
    {refalrts::icSpliceSTVar, 0, 0, 41},
    {refalrts::icSpliceSTVar, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 40},
    {refalrts::icSpliceElem, 0, 0, 39},
    {refalrts::icSpliceElem, 0, 0, 38},
    {refalrts::icLinkBrackets, 36, 37, 0},
    {refalrts::icSpliceElem, 0, 0, 37},
    {refalrts::icSpliceEVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 36},
    {refalrts::icLinkBrackets, 28, 35, 0},
    {refalrts::icSpliceElem, 0, 0, 35},
    {refalrts::icSpliceEVar, 0, 0, 24},
    {refalrts::icLinkBrackets, 29, 34, 0},
    {refalrts::icSpliceElem, 0, 0, 34},
    {refalrts::icSpliceEVar, 0, 0, 14},
    {refalrts::icLinkBrackets, 32, 33, 0},
    {refalrts::icSpliceElem, 0, 0, 33},
    {refalrts::icSpliceSTVar, 0, 0, 23},
    {refalrts::icSpliceEVar, 0, 0, 19},
    {refalrts::icSpliceElem, 0, 0, 32},
    {refalrts::icLinkBrackets, 30, 31, 0},
    {refalrts::icSpliceElem, 0, 0, 31},
    {refalrts::icSpliceEVar, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 30},
    {refalrts::icSpliceSTVar, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 29},
    {refalrts::icSpliceEVar, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 28},
    {refalrts::icSpliceElem, 0, 0, 27},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +104, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Vars_B#1/12 ( s.Mode#1/20 ( e.Index#1/21 ) ( e.ResultVars#1/16 s.Sample#1/23 ) ) e.Vars_E#1/24 ) ( e.AllocCommands#1/4 ) ( e.Commands#1/6 ) s.Counter#1/8 ( # TkVariable s.Mode#1/11 e.Index#1/9 ) e.Result#1/0
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icBracketLeft, 0, 6, 0},
    // closed e.AllocCommands#1 as range 4
    // closed e.Commands#1 as range 6
    {refalrts::icsVarLeft, 0, 8, 0},
    {refalrts::icBracketLeft, 0, 9, 0},
    {refalrts::icIdentLeft, 0, 2, 9},
    // closed e.Result#1 as range 0
    {refalrts::icsVarLeft, 0, 11, 9},
    // closed e.Index#1 as range 9
    {refalrts::icEPrepare, 0, 12, 2},
    {refalrts::icEStart, 0, 12, 2},
    {refalrts::icSave, 0, 24, 2},
    {refalrts::icBracketLeft, 0, 14, 24},
    {refalrts::icBracketRight, 0, 16, 14},
    {refalrts::icBracketRight, 0, 18, 14},
    {refalrts::icsRepeatLeft, 20, 11, 14},
    {refalrts::icEmpty, 0, 0, 14},
    {refalrts::iceRepeatLeft, 21, 9, 18},
    {refalrts::icEmpty, 0, 0, 18},
    // closed e.Vars_E#1 as range 2
    {refalrts::icsVarRight, 0, 23, 16},
    // closed e.ResultVars#1 as range 16
    //0: e.Result#1
    //4: e.AllocCommands#1
    //6: e.Commands#1
    //8: s.Counter#1
    //9: e.Index#1
    //11: s.Mode#1
    //12: e.Vars_B#1
    //16: e.ResultVars#1
    //20: s.Mode#1
    //21: e.Index#1
    //23: s.Sample#1
    //24: e.Vars_E#1
    //39: s.Counter#1
    //40: s.Sample#1
    //46: s.Mode#1
    //47: s.Counter#1
    //52: s.Counter#1
    //53: s.Mode#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 26},
    {refalrts::icFunc, 0, 1, 27},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 28},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 29},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 30},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 31},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 32},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 33},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 34},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 35},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 36},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 37},
    {refalrts::icIdent, 0, 1, 38},
    {refalrts::icCopySTVar, 39, 8, 0},
    {refalrts::icCopySTVar, 40, 23, 0},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 41},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 42},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 43},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 44},
    {refalrts::icIdent, 0, 0, 45},
    {refalrts::icCopySTVar, 46, 20, 0},
    {refalrts::icCopySTVar, 47, 39, 0},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 48},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 49},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 50},
    {refalrts::icFunc, 0, 0, 51},
    {refalrts::icCopySTVar, 52, 47, 0},
    {refalrts::icCopySTVar, 53, 46, 0},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 54},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 55},
    {refalrts::icPushStack, 0, 0, 55},
    {refalrts::icPushStack, 0, 0, 26},
    {refalrts::icSpliceElem, 0, 0, 55},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icPushStack, 0, 0, 54},
    {refalrts::icPushStack, 0, 0, 50},
    {refalrts::icSpliceElem, 0, 0, 54},
    {refalrts::icSpliceSTVar, 0, 0, 53},
    {refalrts::icSpliceSTVar, 0, 0, 52},
    {refalrts::icSpliceElem, 0, 0, 51},
    {refalrts::icSpliceElem, 0, 0, 50},
    {refalrts::icLinkBrackets, 43, 49, 0},
    {refalrts::icSpliceElem, 0, 0, 49},
    {refalrts::icSpliceEVar, 0, 0, 6},
    {refalrts::icLinkBrackets, 44, 48, 0},
    {refalrts::icSpliceElem, 0, 0, 48},
    {refalrts::icSpliceSTVar, 0, 0, 47},
    {refalrts::icSpliceSTVar, 0, 0, 46},
    {refalrts::icSpliceElem, 0, 0, 45},
    {refalrts::icSpliceElem, 0, 0, 44},
    {refalrts::icSpliceElem, 0, 0, 43},
    {refalrts::icLinkBrackets, 36, 42, 0},
    {refalrts::icSpliceElem, 0, 0, 42},
    {refalrts::icLinkBrackets, 37, 41, 0},
    {refalrts::icSpliceElem, 0, 0, 41},
    {refalrts::icSpliceSTVar, 0, 0, 40},
    {refalrts::icSpliceSTVar, 0, 0, 39},
    {refalrts::icSpliceSTVar, 0, 0, 20},
    {refalrts::icSpliceElem, 0, 0, 38},
    {refalrts::icSpliceElem, 0, 0, 37},
    {refalrts::icSpliceEVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 36},
    {refalrts::icLinkBrackets, 28, 35, 0},
    {refalrts::icSpliceElem, 0, 0, 35},
    {refalrts::icSpliceEVar, 0, 0, 24},
    {refalrts::icLinkBrackets, 29, 34, 0},
    {refalrts::icSpliceElem, 0, 0, 34},
    {refalrts::icLinkBrackets, 32, 33, 0},
    {refalrts::icSpliceElem, 0, 0, 33},
    {refalrts::icSpliceSTVar, 0, 0, 8},
    {refalrts::icSpliceSTVar, 0, 0, 23},
    {refalrts::icSpliceEVar, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 32},
    {refalrts::icLinkBrackets, 30, 31, 0},
    {refalrts::icSpliceElem, 0, 0, 31},
    {refalrts::icSpliceEVar, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 30},
    {refalrts::icSpliceSTVar, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 29},
    {refalrts::icSpliceEVar, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 28},
    {refalrts::icSpliceElem, 0, 0, 27},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Vars#1/2 ) ( e.AllocCommands#1/4 ) ( e.Commands#1/6 ) s.Counter#1/8
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icBracketLeft, 0, 6, 0},
    // closed e.Vars#1 as range 2
    // closed e.AllocCommands#1 as range 4
    // closed e.Commands#1 as range 6
    {refalrts::icsVarLeft, 0, 8, 0},
    {refalrts::icEmpty, 0, 0, 0},
    //2: e.Vars#1
    //4: e.AllocCommands#1
    //6: e.Commands#1
    //8: s.Counter#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 9},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 10},
    {refalrts::icSpliceEVar, 0, 0, 6},
    {refalrts::icSpliceEVar, 0, 0, 4},
    {refalrts::icLinkBrackets, 9, 10, 0},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceSTVar, 0, 0, 8},
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
    // ( e.Vars#1/2 ) ( e.AllocCommands#1/4 ) ( e.Commands#1/6 ) s.Counter#1/8 ( # TkChar s.Value#1/11 ) e.Result#1/0
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
    // closed e.Vars#1 as range 2
    // closed e.AllocCommands#1 as range 4
    // closed e.Commands#1 as range 6
    if( ! refalrts::svar_left( context[8], context[0], context[1] ) )
      continue;
    context[9] = 0;
    context[10] = 0;
    if( ! refalrts::brackets_left( context[9], context[10], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_TkChar<int>::name, context[9], context[10] ) )
      continue;
    // closed e.Result#1 as range 0
    if( ! refalrts::svar_left( context[11], context[9], context[10] ) )
      continue;
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;
    //0: e.Result#1
    //2: e.Vars#1
    //4: e.AllocCommands#1
    //6: e.Commands#1
    //8: s.Counter#1
    //11: s.Value#1
    //25: s.Counter#1
    //30: s.Counter#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[13], DoGenResult, "DoGenResult" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[15] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[17] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[18], & ident_CmdAllocateElem<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[19], & ident_ElChar<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[20] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[21] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[22] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[23] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[24], & ident_CmdInsertElem<int>::name ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[25], context[8]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[26] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[27] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[28] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[29], Inc, "Inc" ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[30], context[25]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[31] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[32] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[32] );
    refalrts::push_stack( context[12] );
    res = refalrts::splice_elem( res, context[32] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    refalrts::push_stack( context[31] );
    refalrts::push_stack( context[28] );
    res = refalrts::splice_elem( res, context[31] );
    res = refalrts::splice_stvar( res, context[30] );
    res = refalrts::splice_elem( res, context[29] );
    res = refalrts::splice_elem( res, context[28] );
    refalrts::link_brackets( context[22], context[27] );
    res = refalrts::splice_elem( res, context[27] );
    res = refalrts::splice_evar( res, context[6], context[7] );
    refalrts::link_brackets( context[23], context[26] );
    res = refalrts::splice_elem( res, context[26] );
    res = refalrts::splice_stvar( res, context[25] );
    res = refalrts::splice_elem( res, context[24] );
    res = refalrts::splice_elem( res, context[23] );
    res = refalrts::splice_elem( res, context[22] );
    refalrts::link_brackets( context[16], context[21] );
    res = refalrts::splice_elem( res, context[21] );
    refalrts::link_brackets( context[17], context[20] );
    res = refalrts::splice_elem( res, context[20] );
    res = refalrts::splice_stvar( res, context[11] );
    res = refalrts::splice_elem( res, context[19] );
    res = refalrts::splice_stvar( res, context[8] );
    res = refalrts::splice_elem( res, context[18] );
    res = refalrts::splice_elem( res, context[17] );
    res = refalrts::splice_evar( res, context[4], context[5] );
    res = refalrts::splice_elem( res, context[16] );
    refalrts::link_brackets( context[14], context[15] );
    res = refalrts::splice_elem( res, context[15] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_elem( res, context[14] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_elem( res, context[12] );
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
    // ( e.Vars#1/2 ) ( e.AllocCommands#1/4 ) ( e.Commands#1/6 ) s.Counter#1/8 ( # TkName e.Name#1/9 ) e.Result#1/0
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
    // closed e.Vars#1 as range 2
    // closed e.AllocCommands#1 as range 4
    // closed e.Commands#1 as range 6
    if( ! refalrts::svar_left( context[8], context[0], context[1] ) )
      continue;
    context[9] = 0;
    context[10] = 0;
    if( ! refalrts::brackets_left( context[9], context[10], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_TkName<int>::name, context[9], context[10] ) )
      continue;
    // closed e.Name#1 as range 9
    // closed e.Result#1 as range 0
    //0: e.Result#1
    //2: e.Vars#1
    //4: e.AllocCommands#1
    //6: e.Commands#1
    //8: s.Counter#1
    //9: e.Name#1
    //24: s.Counter#1
    //29: s.Counter#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[12], DoGenResult, "DoGenResult" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[15] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[17], & ident_CmdAllocateElem<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[18], & ident_ElName<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[19] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[20] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[21] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[22] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[23], & ident_CmdInsertElem<int>::name ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[24], context[8]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[25] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[26] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[27] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[28], Inc, "Inc" ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[29], context[24]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[30] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[31] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[31] );
    refalrts::push_stack( context[11] );
    res = refalrts::splice_elem( res, context[31] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    refalrts::push_stack( context[30] );
    refalrts::push_stack( context[27] );
    res = refalrts::splice_elem( res, context[30] );
    res = refalrts::splice_stvar( res, context[29] );
    res = refalrts::splice_elem( res, context[28] );
    res = refalrts::splice_elem( res, context[27] );
    refalrts::link_brackets( context[21], context[26] );
    res = refalrts::splice_elem( res, context[26] );
    res = refalrts::splice_evar( res, context[6], context[7] );
    refalrts::link_brackets( context[22], context[25] );
    res = refalrts::splice_elem( res, context[25] );
    res = refalrts::splice_stvar( res, context[24] );
    res = refalrts::splice_elem( res, context[23] );
    res = refalrts::splice_elem( res, context[22] );
    res = refalrts::splice_elem( res, context[21] );
    refalrts::link_brackets( context[15], context[20] );
    res = refalrts::splice_elem( res, context[20] );
    refalrts::link_brackets( context[16], context[19] );
    res = refalrts::splice_elem( res, context[19] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_elem( res, context[18] );
    res = refalrts::splice_stvar( res, context[8] );
    res = refalrts::splice_elem( res, context[17] );
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

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    // ( e.Vars#1/2 ) ( e.AllocCommands#1/4 ) ( e.Commands#1/6 ) s.Counter#1/8 ( # TkNumber s.Number#1/11 ) e.Result#1/0
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
    // closed e.Vars#1 as range 2
    // closed e.AllocCommands#1 as range 4
    // closed e.Commands#1 as range 6
    if( ! refalrts::svar_left( context[8], context[0], context[1] ) )
      continue;
    context[9] = 0;
    context[10] = 0;
    if( ! refalrts::brackets_left( context[9], context[10], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_TkNumber<int>::name, context[9], context[10] ) )
      continue;
    // closed e.Result#1 as range 0
    if( ! refalrts::svar_left( context[11], context[9], context[10] ) )
      continue;
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;
    //0: e.Result#1
    //2: e.Vars#1
    //4: e.AllocCommands#1
    //6: e.Commands#1
    //8: s.Counter#1
    //11: s.Number#1
    //25: s.Counter#1
    //30: s.Counter#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[13], DoGenResult, "DoGenResult" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[15] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[17] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[18], & ident_CmdAllocateElem<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[19], & ident_ElNumber<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[20] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[21] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[22] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[23] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[24], & ident_CmdInsertElem<int>::name ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[25], context[8]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[26] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[27] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[28] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[29], Inc, "Inc" ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[30], context[25]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[31] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[32] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[32] );
    refalrts::push_stack( context[12] );
    res = refalrts::splice_elem( res, context[32] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    refalrts::push_stack( context[31] );
    refalrts::push_stack( context[28] );
    res = refalrts::splice_elem( res, context[31] );
    res = refalrts::splice_stvar( res, context[30] );
    res = refalrts::splice_elem( res, context[29] );
    res = refalrts::splice_elem( res, context[28] );
    refalrts::link_brackets( context[22], context[27] );
    res = refalrts::splice_elem( res, context[27] );
    res = refalrts::splice_evar( res, context[6], context[7] );
    refalrts::link_brackets( context[23], context[26] );
    res = refalrts::splice_elem( res, context[26] );
    res = refalrts::splice_stvar( res, context[25] );
    res = refalrts::splice_elem( res, context[24] );
    res = refalrts::splice_elem( res, context[23] );
    res = refalrts::splice_elem( res, context[22] );
    refalrts::link_brackets( context[16], context[21] );
    res = refalrts::splice_elem( res, context[21] );
    refalrts::link_brackets( context[17], context[20] );
    res = refalrts::splice_elem( res, context[20] );
    res = refalrts::splice_stvar( res, context[11] );
    res = refalrts::splice_elem( res, context[19] );
    res = refalrts::splice_stvar( res, context[8] );
    res = refalrts::splice_elem( res, context[18] );
    res = refalrts::splice_elem( res, context[17] );
    res = refalrts::splice_evar( res, context[4], context[5] );
    res = refalrts::splice_elem( res, context[16] );
    refalrts::link_brackets( context[14], context[15] );
    res = refalrts::splice_elem( res, context[15] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_elem( res, context[14] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_elem( res, context[12] );
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
    // ( e.Vars#1/2 ) ( e.AllocCommands#1/4 ) ( e.Commands#1/6 ) s.Counter#1/8 ( # TkIdentifier e.Name#1/9 ) e.Result#1/0
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
    // closed e.Vars#1 as range 2
    // closed e.AllocCommands#1 as range 4
    // closed e.Commands#1 as range 6
    if( ! refalrts::svar_left( context[8], context[0], context[1] ) )
      continue;
    context[9] = 0;
    context[10] = 0;
    if( ! refalrts::brackets_left( context[9], context[10], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_TkIdentifier<int>::name, context[9], context[10] ) )
      continue;
    // closed e.Name#1 as range 9
    // closed e.Result#1 as range 0
    //0: e.Result#1
    //2: e.Vars#1
    //4: e.AllocCommands#1
    //6: e.Commands#1
    //8: s.Counter#1
    //9: e.Name#1
    //24: s.Counter#1
    //29: s.Counter#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[12], DoGenResult, "DoGenResult" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[15] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[17], & ident_CmdAllocateElem<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[18], & ident_ElIdent<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[19] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[20] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[21] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[22] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[23], & ident_CmdInsertElem<int>::name ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[24], context[8]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[25] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[26] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[27] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[28], Inc, "Inc" ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[29], context[24]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[30] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[31] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[31] );
    refalrts::push_stack( context[11] );
    res = refalrts::splice_elem( res, context[31] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    refalrts::push_stack( context[30] );
    refalrts::push_stack( context[27] );
    res = refalrts::splice_elem( res, context[30] );
    res = refalrts::splice_stvar( res, context[29] );
    res = refalrts::splice_elem( res, context[28] );
    res = refalrts::splice_elem( res, context[27] );
    refalrts::link_brackets( context[21], context[26] );
    res = refalrts::splice_elem( res, context[26] );
    res = refalrts::splice_evar( res, context[6], context[7] );
    refalrts::link_brackets( context[22], context[25] );
    res = refalrts::splice_elem( res, context[25] );
    res = refalrts::splice_stvar( res, context[24] );
    res = refalrts::splice_elem( res, context[23] );
    res = refalrts::splice_elem( res, context[22] );
    res = refalrts::splice_elem( res, context[21] );
    refalrts::link_brackets( context[15], context[20] );
    res = refalrts::splice_elem( res, context[20] );
    refalrts::link_brackets( context[16], context[19] );
    res = refalrts::splice_elem( res, context[19] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_elem( res, context[18] );
    res = refalrts::splice_stvar( res, context[8] );
    res = refalrts::splice_elem( res, context[17] );
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

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    // ( e.Vars#1/2 ) ( e.AllocCommands#1/4 ) ( e.Commands#1/6 ) s.Counter#1/8 ( # TkString e.Chars#1/9 ) e.Result#1/0
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
    // closed e.Vars#1 as range 2
    // closed e.AllocCommands#1 as range 4
    // closed e.Commands#1 as range 6
    if( ! refalrts::svar_left( context[8], context[0], context[1] ) )
      continue;
    context[9] = 0;
    context[10] = 0;
    if( ! refalrts::brackets_left( context[9], context[10], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_TkString<int>::name, context[9], context[10] ) )
      continue;
    // closed e.Chars#1 as range 9
    // closed e.Result#1 as range 0
    //0: e.Result#1
    //2: e.Vars#1
    //4: e.AllocCommands#1
    //6: e.Commands#1
    //8: s.Counter#1
    //9: e.Chars#1
    //24: s.Counter#1
    //29: s.Counter#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[12], DoGenResult, "DoGenResult" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[15] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[17], & ident_CmdAllocateElem<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[18], & ident_ElString<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[19] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[20] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[21] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[22] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[23], & ident_CmdInsertRange<int>::name ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[24], context[8]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[25] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[26] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[27] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[28], Add, "Add" ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[29], context[24]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_number( context[30], 2UL ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[31] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[32] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[32] );
    refalrts::push_stack( context[11] );
    res = refalrts::splice_elem( res, context[32] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    refalrts::push_stack( context[31] );
    refalrts::push_stack( context[27] );
    res = refalrts::splice_elem( res, context[31] );
    res = refalrts::splice_elem( res, context[30] );
    res = refalrts::splice_stvar( res, context[29] );
    res = refalrts::splice_elem( res, context[28] );
    res = refalrts::splice_elem( res, context[27] );
    refalrts::link_brackets( context[21], context[26] );
    res = refalrts::splice_elem( res, context[26] );
    res = refalrts::splice_evar( res, context[6], context[7] );
    refalrts::link_brackets( context[22], context[25] );
    res = refalrts::splice_elem( res, context[25] );
    res = refalrts::splice_stvar( res, context[24] );
    res = refalrts::splice_elem( res, context[23] );
    res = refalrts::splice_elem( res, context[22] );
    res = refalrts::splice_elem( res, context[21] );
    refalrts::link_brackets( context[15], context[20] );
    res = refalrts::splice_elem( res, context[20] );
    refalrts::link_brackets( context[16], context[19] );
    res = refalrts::splice_elem( res, context[19] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_elem( res, context[18] );
    res = refalrts::splice_stvar( res, context[8] );
    res = refalrts::splice_elem( res, context[17] );
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

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    // ( e.Vars#1/2 ) ( e.AllocCommands#1/4 ) ( e.Commands#1/6 ) s.Counter#1/8 ( # Brackets e.InBrackets#1/9 ) e.Result#1/0
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
    // closed e.Vars#1 as range 2
    // closed e.AllocCommands#1 as range 4
    // closed e.Commands#1 as range 6
    if( ! refalrts::svar_left( context[8], context[0], context[1] ) )
      continue;
    context[9] = 0;
    context[10] = 0;
    if( ! refalrts::brackets_left( context[9], context[10], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_Brackets<int>::name, context[9], context[10] ) )
      continue;
    // closed e.InBrackets#1 as range 9
    // closed e.Result#1 as range 0
    //0: e.Result#1
    //2: e.Vars#1
    //4: e.AllocCommands#1
    //6: e.Commands#1
    //8: s.Counter#1
    //9: e.InBrackets#1
    //24: s.Counter#1
    //29: s.Counter#1
    //33: s.Counter#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[12], DoGenResult, "DoGenResult" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[15] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[17], & ident_CmdAllocateElem<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[18], & ident_ElOpenBracket<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[19] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[20] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[21] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[22] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[23], & ident_CmdInsertElem<int>::name ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[24], context[8]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[25] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[26] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[27] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[28], Inc, "Inc" ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[29], context[24]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[30] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[31] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[32], & ident_TkCloseBracket<int>::name ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[33], context[29]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[34] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[35] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[35] );
    refalrts::push_stack( context[11] );
    res = refalrts::splice_elem( res, context[35] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    refalrts::link_brackets( context[31], context[34] );
    res = refalrts::splice_elem( res, context[34] );
    res = refalrts::splice_stvar( res, context[33] );
    res = refalrts::splice_elem( res, context[32] );
    res = refalrts::splice_elem( res, context[31] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    refalrts::push_stack( context[30] );
    refalrts::push_stack( context[27] );
    res = refalrts::splice_elem( res, context[30] );
    res = refalrts::splice_stvar( res, context[29] );
    res = refalrts::splice_elem( res, context[28] );
    res = refalrts::splice_elem( res, context[27] );
    refalrts::link_brackets( context[21], context[26] );
    res = refalrts::splice_elem( res, context[26] );
    res = refalrts::splice_evar( res, context[6], context[7] );
    refalrts::link_brackets( context[22], context[25] );
    res = refalrts::splice_elem( res, context[25] );
    res = refalrts::splice_stvar( res, context[24] );
    res = refalrts::splice_elem( res, context[23] );
    res = refalrts::splice_elem( res, context[22] );
    res = refalrts::splice_elem( res, context[21] );
    refalrts::link_brackets( context[15], context[20] );
    res = refalrts::splice_elem( res, context[20] );
    refalrts::link_brackets( context[16], context[19] );
    res = refalrts::splice_elem( res, context[19] );
    res = refalrts::splice_elem( res, context[18] );
    res = refalrts::splice_stvar( res, context[8] );
    res = refalrts::splice_elem( res, context[17] );
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

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    // ( e.Vars#1/2 ) ( e.AllocCommands#1/4 ) ( e.Commands#1/6 ) s.Counter#1/8 ( # CallBrackets e.InBrackets#1/9 ) e.Result#1/0
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
    // closed e.Vars#1 as range 2
    // closed e.AllocCommands#1 as range 4
    // closed e.Commands#1 as range 6
    if( ! refalrts::svar_left( context[8], context[0], context[1] ) )
      continue;
    context[9] = 0;
    context[10] = 0;
    if( ! refalrts::brackets_left( context[9], context[10], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CallBrackets<int>::name, context[9], context[10] ) )
      continue;
    // closed e.InBrackets#1 as range 9
    // closed e.Result#1 as range 0
    //0: e.Result#1
    //2: e.Vars#1
    //4: e.AllocCommands#1
    //6: e.Commands#1
    //8: s.Counter#1
    //9: e.InBrackets#1
    //24: s.Counter#1
    //29: s.Counter#1
    //33: s.Counter#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[12], DoGenResult, "DoGenResult" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[15] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[17], & ident_CmdAllocateElem<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[18], & ident_ElOpenCall<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[19] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[20] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[21] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[22] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[23], & ident_CmdInsertElem<int>::name ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[24], context[8]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[25] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[26] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[27] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[28], Inc, "Inc" ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[29], context[24]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[30] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[31] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[32], & ident_CloseCall<int>::name ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[33], context[29]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[34] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[35] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[35] );
    refalrts::push_stack( context[11] );
    res = refalrts::splice_elem( res, context[35] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    refalrts::link_brackets( context[31], context[34] );
    res = refalrts::splice_elem( res, context[34] );
    res = refalrts::splice_stvar( res, context[33] );
    res = refalrts::splice_elem( res, context[32] );
    res = refalrts::splice_elem( res, context[31] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    refalrts::push_stack( context[30] );
    refalrts::push_stack( context[27] );
    res = refalrts::splice_elem( res, context[30] );
    res = refalrts::splice_stvar( res, context[29] );
    res = refalrts::splice_elem( res, context[28] );
    res = refalrts::splice_elem( res, context[27] );
    refalrts::link_brackets( context[21], context[26] );
    res = refalrts::splice_elem( res, context[26] );
    res = refalrts::splice_evar( res, context[6], context[7] );
    refalrts::link_brackets( context[22], context[25] );
    res = refalrts::splice_elem( res, context[25] );
    res = refalrts::splice_stvar( res, context[24] );
    res = refalrts::splice_elem( res, context[23] );
    res = refalrts::splice_elem( res, context[22] );
    res = refalrts::splice_elem( res, context[21] );
    refalrts::link_brackets( context[15], context[20] );
    res = refalrts::splice_elem( res, context[20] );
    refalrts::link_brackets( context[16], context[19] );
    res = refalrts::splice_elem( res, context[19] );
    res = refalrts::splice_elem( res, context[18] );
    res = refalrts::splice_stvar( res, context[8] );
    res = refalrts::splice_elem( res, context[17] );
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

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    // ( e.Vars#1/2 ) ( e.AllocCommands#1/4 ) ( e.Commands#1/6 ) s.Counter#1/8 ( # ADT_Brackets ( e.Name#1/11 ) e.InBrackets#1/9 ) e.Result#1/0
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
    // closed e.Vars#1 as range 2
    // closed e.AllocCommands#1 as range 4
    // closed e.Commands#1 as range 6
    if( ! refalrts::svar_left( context[8], context[0], context[1] ) )
      continue;
    context[9] = 0;
    context[10] = 0;
    if( ! refalrts::brackets_left( context[9], context[10], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_ADT_Brackets<int>::name, context[9], context[10] ) )
      continue;
    context[11] = 0;
    context[12] = 0;
    if( ! refalrts::brackets_left( context[11], context[12], context[9], context[10] ) )
      continue;
    // closed e.Name#1 as range 11
    // closed e.InBrackets#1 as range 9
    // closed e.Result#1 as range 0
    //0: e.Result#1
    //2: e.Vars#1
    //4: e.AllocCommands#1
    //6: e.Commands#1
    //8: s.Counter#1
    //9: e.InBrackets#1
    //11: e.Name#1
    //26: s.Counter#1
    //31: s.Counter#1
    //38: s.Counter#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[14], DoGenResult, "DoGenResult" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[15] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[17] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[18] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[19], & ident_CmdAllocateElem<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[20], & ident_ElOpenADT<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[21] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[22] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[23] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[24] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[25], & ident_CmdInsertElem<int>::name ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[26], context[8]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[27] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[28] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[29] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[30], Inc, "Inc" ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[31], context[26]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[32] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[33] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[34], & ident_TkName<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[35] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[36] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[37], & ident_TkCloseADT<int>::name ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[38], context[31]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[39] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[40] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[40] );
    refalrts::push_stack( context[13] );
    res = refalrts::splice_elem( res, context[40] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    refalrts::link_brackets( context[36], context[39] );
    res = refalrts::splice_elem( res, context[39] );
    res = refalrts::splice_stvar( res, context[38] );
    res = refalrts::splice_elem( res, context[37] );
    res = refalrts::splice_elem( res, context[36] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    refalrts::link_brackets( context[33], context[35] );
    res = refalrts::splice_elem( res, context[35] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_elem( res, context[34] );
    res = refalrts::splice_elem( res, context[33] );
    refalrts::push_stack( context[32] );
    refalrts::push_stack( context[29] );
    res = refalrts::splice_elem( res, context[32] );
    res = refalrts::splice_stvar( res, context[31] );
    res = refalrts::splice_elem( res, context[30] );
    res = refalrts::splice_elem( res, context[29] );
    refalrts::link_brackets( context[23], context[28] );
    res = refalrts::splice_elem( res, context[28] );
    res = refalrts::splice_evar( res, context[6], context[7] );
    refalrts::link_brackets( context[24], context[27] );
    res = refalrts::splice_elem( res, context[27] );
    res = refalrts::splice_stvar( res, context[26] );
    res = refalrts::splice_elem( res, context[25] );
    res = refalrts::splice_elem( res, context[24] );
    res = refalrts::splice_elem( res, context[23] );
    refalrts::link_brackets( context[17], context[22] );
    res = refalrts::splice_elem( res, context[22] );
    refalrts::link_brackets( context[18], context[21] );
    res = refalrts::splice_elem( res, context[21] );
    res = refalrts::splice_elem( res, context[20] );
    res = refalrts::splice_stvar( res, context[8] );
    res = refalrts::splice_elem( res, context[19] );
    res = refalrts::splice_elem( res, context[18] );
    res = refalrts::splice_evar( res, context[4], context[5] );
    res = refalrts::splice_elem( res, context[17] );
    refalrts::link_brackets( context[15], context[16] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_evar( res, context[2], context[3] );
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
    // ( e.Vars#1/2 ) ( e.AllocCommands#1/4 ) ( e.Commands#1/6 ) s.Counter#1/8 ( # TkCloseBracket s.OpenCounter#1/11 ) e.Result#1/0
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
    // closed e.Vars#1 as range 2
    // closed e.AllocCommands#1 as range 4
    // closed e.Commands#1 as range 6
    if( ! refalrts::svar_left( context[8], context[0], context[1] ) )
      continue;
    context[9] = 0;
    context[10] = 0;
    if( ! refalrts::brackets_left( context[9], context[10], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_TkCloseBracket<int>::name, context[9], context[10] ) )
      continue;
    // closed e.Result#1 as range 0
    if( ! refalrts::svar_left( context[11], context[9], context[10] ) )
      continue;
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;
    //0: e.Result#1
    //2: e.Vars#1
    //4: e.AllocCommands#1
    //6: e.Commands#1
    //8: s.Counter#1
    //11: s.OpenCounter#1
    //25: s.Counter#1
    //29: s.Counter#1
    //34: s.Counter#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[13], DoGenResult, "DoGenResult" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[15] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[17] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[18], & ident_CmdAllocateElem<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[19], & ident_ElCloseBracket<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[20] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[21] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[22] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[23] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[24], & ident_CmdLinkBrackets<int>::name ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[25], context[8]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[26] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[27] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[28], & ident_CmdInsertElem<int>::name ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[29], context[25]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[30] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[31] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[32] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[33], Inc, "Inc" ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[34], context[29]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[35] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[36] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[36] );
    refalrts::push_stack( context[12] );
    res = refalrts::splice_elem( res, context[36] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    refalrts::push_stack( context[35] );
    refalrts::push_stack( context[32] );
    res = refalrts::splice_elem( res, context[35] );
    res = refalrts::splice_stvar( res, context[34] );
    res = refalrts::splice_elem( res, context[33] );
    res = refalrts::splice_elem( res, context[32] );
    refalrts::link_brackets( context[22], context[31] );
    res = refalrts::splice_elem( res, context[31] );
    res = refalrts::splice_evar( res, context[6], context[7] );
    refalrts::link_brackets( context[27], context[30] );
    res = refalrts::splice_elem( res, context[30] );
    res = refalrts::splice_stvar( res, context[29] );
    res = refalrts::splice_elem( res, context[28] );
    res = refalrts::splice_elem( res, context[27] );
    refalrts::link_brackets( context[23], context[26] );
    res = refalrts::splice_elem( res, context[26] );
    res = refalrts::splice_stvar( res, context[25] );
    res = refalrts::splice_stvar( res, context[11] );
    res = refalrts::splice_elem( res, context[24] );
    res = refalrts::splice_elem( res, context[23] );
    res = refalrts::splice_elem( res, context[22] );
    refalrts::link_brackets( context[16], context[21] );
    res = refalrts::splice_elem( res, context[21] );
    refalrts::link_brackets( context[17], context[20] );
    res = refalrts::splice_elem( res, context[20] );
    res = refalrts::splice_elem( res, context[19] );
    res = refalrts::splice_stvar( res, context[8] );
    res = refalrts::splice_elem( res, context[18] );
    res = refalrts::splice_elem( res, context[17] );
    res = refalrts::splice_evar( res, context[4], context[5] );
    res = refalrts::splice_elem( res, context[16] );
    refalrts::link_brackets( context[14], context[15] );
    res = refalrts::splice_elem( res, context[15] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_elem( res, context[14] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_elem( res, context[12] );
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
    // ( e.Vars#1/2 ) ( e.AllocCommands#1/4 ) ( e.Commands#1/6 ) s.Counter#1/8 ( # TkCloseADT s.OpenCounter#1/11 ) e.Result#1/0
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
    // closed e.Vars#1 as range 2
    // closed e.AllocCommands#1 as range 4
    // closed e.Commands#1 as range 6
    if( ! refalrts::svar_left( context[8], context[0], context[1] ) )
      continue;
    context[9] = 0;
    context[10] = 0;
    if( ! refalrts::brackets_left( context[9], context[10], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_TkCloseADT<int>::name, context[9], context[10] ) )
      continue;
    // closed e.Result#1 as range 0
    if( ! refalrts::svar_left( context[11], context[9], context[10] ) )
      continue;
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;
    //0: e.Result#1
    //2: e.Vars#1
    //4: e.AllocCommands#1
    //6: e.Commands#1
    //8: s.Counter#1
    //11: s.OpenCounter#1
    //25: s.Counter#1
    //29: s.Counter#1
    //34: s.Counter#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[13], DoGenResult, "DoGenResult" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[15] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[17] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[18], & ident_CmdAllocateElem<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[19], & ident_ElCloseADT<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[20] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[21] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[22] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[23] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[24], & ident_CmdLinkBrackets<int>::name ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[25], context[8]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[26] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[27] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[28], & ident_CmdInsertElem<int>::name ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[29], context[25]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[30] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[31] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[32] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[33], Inc, "Inc" ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[34], context[29]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[35] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[36] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[36] );
    refalrts::push_stack( context[12] );
    res = refalrts::splice_elem( res, context[36] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    refalrts::push_stack( context[35] );
    refalrts::push_stack( context[32] );
    res = refalrts::splice_elem( res, context[35] );
    res = refalrts::splice_stvar( res, context[34] );
    res = refalrts::splice_elem( res, context[33] );
    res = refalrts::splice_elem( res, context[32] );
    refalrts::link_brackets( context[22], context[31] );
    res = refalrts::splice_elem( res, context[31] );
    res = refalrts::splice_evar( res, context[6], context[7] );
    refalrts::link_brackets( context[27], context[30] );
    res = refalrts::splice_elem( res, context[30] );
    res = refalrts::splice_stvar( res, context[29] );
    res = refalrts::splice_elem( res, context[28] );
    res = refalrts::splice_elem( res, context[27] );
    refalrts::link_brackets( context[23], context[26] );
    res = refalrts::splice_elem( res, context[26] );
    res = refalrts::splice_stvar( res, context[25] );
    res = refalrts::splice_stvar( res, context[11] );
    res = refalrts::splice_elem( res, context[24] );
    res = refalrts::splice_elem( res, context[23] );
    res = refalrts::splice_elem( res, context[22] );
    refalrts::link_brackets( context[16], context[21] );
    res = refalrts::splice_elem( res, context[21] );
    refalrts::link_brackets( context[17], context[20] );
    res = refalrts::splice_elem( res, context[20] );
    res = refalrts::splice_elem( res, context[19] );
    res = refalrts::splice_stvar( res, context[8] );
    res = refalrts::splice_elem( res, context[18] );
    res = refalrts::splice_elem( res, context[17] );
    res = refalrts::splice_evar( res, context[4], context[5] );
    res = refalrts::splice_elem( res, context[16] );
    refalrts::link_brackets( context[14], context[15] );
    res = refalrts::splice_elem( res, context[15] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_elem( res, context[14] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_elem( res, context[12] );
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
    // ( e.Vars#1/2 ) ( e.AllocCommands#1/4 ) ( e.Commands#1/6 ) s.Counter#1/8 ( # CloseCall s.OpenCounter#1/11 ) e.Result#1/0
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
    // closed e.Vars#1 as range 2
    // closed e.AllocCommands#1 as range 4
    // closed e.Commands#1 as range 6
    if( ! refalrts::svar_left( context[8], context[0], context[1] ) )
      continue;
    context[9] = 0;
    context[10] = 0;
    if( ! refalrts::brackets_left( context[9], context[10], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CloseCall<int>::name, context[9], context[10] ) )
      continue;
    // closed e.Result#1 as range 0
    if( ! refalrts::svar_left( context[11], context[9], context[10] ) )
      continue;
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;
    //0: e.Result#1
    //2: e.Vars#1
    //4: e.AllocCommands#1
    //6: e.Commands#1
    //8: s.Counter#1
    //11: s.OpenCounter#1
    //25: s.Counter#1
    //32: s.Counter#1
    //37: s.Counter#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[13], DoGenResult, "DoGenResult" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[15] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[17] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[18], & ident_CmdAllocateElem<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[19], & ident_ElCloseCall<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[20] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[21] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[22] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[23] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[24], & ident_CmdPushStack<int>::name ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[25], context[8]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[26] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[27] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[28], & ident_CmdPushStack<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[29] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[30] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[31], & ident_CmdInsertElem<int>::name ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[32], context[25]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[33] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[34] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[35] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[36], Inc, "Inc" ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[37], context[32]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[38] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[39] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[39] );
    refalrts::push_stack( context[12] );
    res = refalrts::splice_elem( res, context[39] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    refalrts::push_stack( context[38] );
    refalrts::push_stack( context[35] );
    res = refalrts::splice_elem( res, context[38] );
    res = refalrts::splice_stvar( res, context[37] );
    res = refalrts::splice_elem( res, context[36] );
    res = refalrts::splice_elem( res, context[35] );
    refalrts::link_brackets( context[22], context[34] );
    res = refalrts::splice_elem( res, context[34] );
    res = refalrts::splice_evar( res, context[6], context[7] );
    refalrts::link_brackets( context[30], context[33] );
    res = refalrts::splice_elem( res, context[33] );
    res = refalrts::splice_stvar( res, context[32] );
    res = refalrts::splice_elem( res, context[31] );
    res = refalrts::splice_elem( res, context[30] );
    refalrts::link_brackets( context[27], context[29] );
    res = refalrts::splice_elem( res, context[29] );
    res = refalrts::splice_stvar( res, context[11] );
    res = refalrts::splice_elem( res, context[28] );
    res = refalrts::splice_elem( res, context[27] );
    refalrts::link_brackets( context[23], context[26] );
    res = refalrts::splice_elem( res, context[26] );
    res = refalrts::splice_stvar( res, context[25] );
    res = refalrts::splice_elem( res, context[24] );
    res = refalrts::splice_elem( res, context[23] );
    res = refalrts::splice_elem( res, context[22] );
    refalrts::link_brackets( context[16], context[21] );
    res = refalrts::splice_elem( res, context[21] );
    refalrts::link_brackets( context[17], context[20] );
    res = refalrts::splice_elem( res, context[20] );
    res = refalrts::splice_elem( res, context[19] );
    res = refalrts::splice_stvar( res, context[8] );
    res = refalrts::splice_elem( res, context[18] );
    res = refalrts::splice_elem( res, context[17] );
    res = refalrts::splice_evar( res, context[4], context[5] );
    res = refalrts::splice_elem( res, context[16] );
    refalrts::link_brackets( context[14], context[15] );
    res = refalrts::splice_elem( res, context[15] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_elem( res, context[14] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_elem( res, context[12] );
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
    // ( e.Vars_B#1/12 ( s.Mode#1/16 ( e.Index#1/21 ) ( e.ResultVars#1/19 ) s.NextPatternVar#1/23 e.PatternVars#1/14 ) e.Vars_E#1/24 ) ( e.AllocCommands#1/4 ) ( e.Commands#1/6 ) s.Counter#1/8 ( # TkVariable s.Mode#1/11 e.Index#1/9 ) e.Result#1/0
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
    // closed e.AllocCommands#1 as range 4
    // closed e.Commands#1 as range 6
    if( ! refalrts::svar_left( context[8], context[0], context[1] ) )
      continue;
    context[9] = 0;
    context[10] = 0;
    if( ! refalrts::brackets_left( context[9], context[10], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_TkVariable<int>::name, context[9], context[10] ) )
      continue;
    // closed e.Result#1 as range 0
    if( ! refalrts::svar_left( context[11], context[9], context[10] ) )
      continue;
    // closed e.Index#1 as range 9
    context[12] = 0;
    context[13] = 0;
    refalrts::start_e_loop();
    do {
      context[24] = context[2];
      context[25] = context[3];
      context[14] = 0;
      context[15] = 0;
      if( ! refalrts::brackets_left( context[14], context[15], context[24], context[25] ) )
        continue;
      if( ! refalrts::repeated_stvar_left( context[16], context[11], context[14], context[15] ) )
        continue;
      context[17] = 0;
      context[18] = 0;
      if( ! refalrts::brackets_left( context[17], context[18], context[14], context[15] ) )
        continue;
      context[19] = 0;
      context[20] = 0;
      if( ! refalrts::brackets_left( context[19], context[20], context[14], context[15] ) )
        continue;
      if( ! refalrts::repeated_evar_left( context[21], context[22], context[9], context[10], context[17], context[18] ) )
        continue;
      if( ! refalrts::empty_seq( context[17], context[18] ) )
        continue;
      // closed e.ResultVars#1 as range 19
      // closed e.Vars_E#1 as range 2
      if( ! refalrts::svar_left( context[23], context[14], context[15] ) )
        continue;
      // closed e.PatternVars#1 as range 14
      //0: e.Result#1
      //4: e.AllocCommands#1
      //6: e.Commands#1
      //8: s.Counter#1
      //9: e.Index#1
      //11: s.Mode#1
      //12: e.Vars_B#1
      //14: e.PatternVars#1
      //16: s.Mode#1
      //19: e.ResultVars#1
      //21: e.Index#1
      //23: s.NextPatternVar#1
      //24: e.Vars_E#1
      //41: s.NextPatternVar#1

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::alloc_open_call( context[26] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[27], DoGenResult, "DoGenResult" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[28] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[29] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[30] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[31] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[32] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[33] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[34] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[35] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[36] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[37] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[38] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[39] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[40], & ident_CmdInsertVar<int>::name ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[41], context[23]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[42] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[43] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[44] ) )
        return refalrts::cNoMemory;
      refalrts::push_stack( context[44] );
      refalrts::push_stack( context[26] );
      res = refalrts::splice_elem( res, context[44] );
      res = refalrts::splice_evar( res, context[0], context[1] );
      res = refalrts::splice_stvar( res, context[8] );
      refalrts::link_brackets( context[38], context[43] );
      res = refalrts::splice_elem( res, context[43] );
      res = refalrts::splice_evar( res, context[6], context[7] );
      refalrts::link_brackets( context[39], context[42] );
      res = refalrts::splice_elem( res, context[42] );
      res = refalrts::splice_stvar( res, context[41] );
      res = refalrts::splice_stvar( res, context[16] );
      res = refalrts::splice_elem( res, context[40] );
      res = refalrts::splice_elem( res, context[39] );
      res = refalrts::splice_elem( res, context[38] );
      refalrts::link_brackets( context[36], context[37] );
      res = refalrts::splice_elem( res, context[37] );
      res = refalrts::splice_evar( res, context[4], context[5] );
      res = refalrts::splice_elem( res, context[36] );
      refalrts::link_brackets( context[28], context[35] );
      res = refalrts::splice_elem( res, context[35] );
      res = refalrts::splice_evar( res, context[24], context[25] );
      refalrts::link_brackets( context[29], context[34] );
      res = refalrts::splice_elem( res, context[34] );
      res = refalrts::splice_evar( res, context[14], context[15] );
      refalrts::link_brackets( context[32], context[33] );
      res = refalrts::splice_elem( res, context[33] );
      res = refalrts::splice_stvar( res, context[23] );
      res = refalrts::splice_evar( res, context[19], context[20] );
      res = refalrts::splice_elem( res, context[32] );
      refalrts::link_brackets( context[30], context[31] );
      res = refalrts::splice_elem( res, context[31] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      res = refalrts::splice_elem( res, context[30] );
      res = refalrts::splice_stvar( res, context[11] );
      res = refalrts::splice_elem( res, context[29] );
      res = refalrts::splice_evar( res, context[12], context[13] );
      res = refalrts::splice_elem( res, context[28] );
      res = refalrts::splice_elem( res, context[27] );
      res = refalrts::splice_elem( res, context[26] );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[12], context[13], context[2], context[3] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    // ( e.Vars_B#1/12 ( s.Mode#1/20 ( e.Index#1/21 ) ( e.ResultVars#1/16 s.Sample#1/23 ) ) e.Vars_E#1/24 ) ( e.AllocCommands#1/4 ) ( e.Commands#1/6 ) s.Counter#1/8 ( # TkVariable s.Mode#1/11 e.Index#1/9 ) e.Result#1/0
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
    // closed e.AllocCommands#1 as range 4
    // closed e.Commands#1 as range 6
    if( ! refalrts::svar_left( context[8], context[0], context[1] ) )
      continue;
    context[9] = 0;
    context[10] = 0;
    if( ! refalrts::brackets_left( context[9], context[10], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_TkVariable<int>::name, context[9], context[10] ) )
      continue;
    // closed e.Result#1 as range 0
    if( ! refalrts::svar_left( context[11], context[9], context[10] ) )
      continue;
    // closed e.Index#1 as range 9
    context[12] = 0;
    context[13] = 0;
    refalrts::start_e_loop();
    do {
      context[24] = context[2];
      context[25] = context[3];
      context[14] = 0;
      context[15] = 0;
      if( ! refalrts::brackets_left( context[14], context[15], context[24], context[25] ) )
        continue;
      context[16] = 0;
      context[17] = 0;
      if( ! refalrts::brackets_right( context[16], context[17], context[14], context[15] ) )
        continue;
      context[18] = 0;
      context[19] = 0;
      if( ! refalrts::brackets_right( context[18], context[19], context[14], context[15] ) )
        continue;
      if( ! refalrts::repeated_stvar_left( context[20], context[11], context[14], context[15] ) )
        continue;
      if( ! refalrts::empty_seq( context[14], context[15] ) )
        continue;
      if( ! refalrts::repeated_evar_left( context[21], context[22], context[9], context[10], context[18], context[19] ) )
        continue;
      if( ! refalrts::empty_seq( context[18], context[19] ) )
        continue;
      // closed e.Vars_E#1 as range 2
      if( ! refalrts::svar_right( context[23], context[16], context[17] ) )
        continue;
      // closed e.ResultVars#1 as range 16
      //0: e.Result#1
      //4: e.AllocCommands#1
      //6: e.Commands#1
      //8: s.Counter#1
      //9: e.Index#1
      //11: s.Mode#1
      //12: e.Vars_B#1
      //16: e.ResultVars#1
      //20: s.Mode#1
      //21: e.Index#1
      //23: s.Sample#1
      //24: e.Vars_E#1
      //39: s.Counter#1
      //40: s.Sample#1
      //46: s.Mode#1
      //47: s.Counter#1
      //52: s.Counter#1
      //53: s.Mode#1

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::alloc_open_call( context[26] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[27], DoGenResult, "DoGenResult" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[28] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[29] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[30] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[31] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[32] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[33] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[34] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[35] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[36] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[37] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[38], & ident_CmdCopyVar<int>::name ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[39], context[8]))
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[40], context[23]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[41] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[42] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[43] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[44] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[45], & ident_CmdInsertVar<int>::name ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[46], context[20]))
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[47], context[39]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[48] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[49] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_call( context[50] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[51], IncVarOffset, "IncVarOffset" ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[52], context[47]))
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[53], context[46]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[54] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[55] ) )
        return refalrts::cNoMemory;
      refalrts::push_stack( context[55] );
      refalrts::push_stack( context[26] );
      res = refalrts::splice_elem( res, context[55] );
      res = refalrts::splice_evar( res, context[0], context[1] );
      refalrts::push_stack( context[54] );
      refalrts::push_stack( context[50] );
      res = refalrts::splice_elem( res, context[54] );
      res = refalrts::splice_stvar( res, context[53] );
      res = refalrts::splice_stvar( res, context[52] );
      res = refalrts::splice_elem( res, context[51] );
      res = refalrts::splice_elem( res, context[50] );
      refalrts::link_brackets( context[43], context[49] );
      res = refalrts::splice_elem( res, context[49] );
      res = refalrts::splice_evar( res, context[6], context[7] );
      refalrts::link_brackets( context[44], context[48] );
      res = refalrts::splice_elem( res, context[48] );
      res = refalrts::splice_stvar( res, context[47] );
      res = refalrts::splice_stvar( res, context[46] );
      res = refalrts::splice_elem( res, context[45] );
      res = refalrts::splice_elem( res, context[44] );
      res = refalrts::splice_elem( res, context[43] );
      refalrts::link_brackets( context[36], context[42] );
      res = refalrts::splice_elem( res, context[42] );
      refalrts::link_brackets( context[37], context[41] );
      res = refalrts::splice_elem( res, context[41] );
      res = refalrts::splice_stvar( res, context[40] );
      res = refalrts::splice_stvar( res, context[39] );
      res = refalrts::splice_stvar( res, context[20] );
      res = refalrts::splice_elem( res, context[38] );
      res = refalrts::splice_elem( res, context[37] );
      res = refalrts::splice_evar( res, context[4], context[5] );
      res = refalrts::splice_elem( res, context[36] );
      refalrts::link_brackets( context[28], context[35] );
      res = refalrts::splice_elem( res, context[35] );
      res = refalrts::splice_evar( res, context[24], context[25] );
      refalrts::link_brackets( context[29], context[34] );
      res = refalrts::splice_elem( res, context[34] );
      refalrts::link_brackets( context[32], context[33] );
      res = refalrts::splice_elem( res, context[33] );
      res = refalrts::splice_stvar( res, context[8] );
      res = refalrts::splice_stvar( res, context[23] );
      res = refalrts::splice_evar( res, context[16], context[17] );
      res = refalrts::splice_elem( res, context[32] );
      refalrts::link_brackets( context[30], context[31] );
      res = refalrts::splice_elem( res, context[31] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      res = refalrts::splice_elem( res, context[30] );
      res = refalrts::splice_stvar( res, context[11] );
      res = refalrts::splice_elem( res, context[29] );
      res = refalrts::splice_evar( res, context[12], context[13] );
      res = refalrts::splice_elem( res, context[28] );
      res = refalrts::splice_elem( res, context[27] );
      res = refalrts::splice_elem( res, context[26] );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[12], context[13], context[2], context[3] ) );
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  refalrts::move_left( context[0], context[1] );
  refalrts::move_left( context[0], context[1] );
  refalrts::move_right( context[0], context[1] );
  // ( e.Vars#1/2 ) ( e.AllocCommands#1/4 ) ( e.Commands#1/6 ) s.Counter#1/8
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
  // closed e.Vars#1 as range 2
  // closed e.AllocCommands#1 as range 4
  // closed e.Commands#1 as range 6
  if( ! refalrts::svar_left( context[8], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  //2: e.Vars#1
  //4: e.AllocCommands#1
  //6: e.Commands#1
  //8: s.Counter#1

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_bracket( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[10] ) )
    return refalrts::cNoMemory;
  res = refalrts::splice_evar( res, context[6], context[7] );
  res = refalrts::splice_evar( res, context[4], context[5] );
  refalrts::link_brackets( context[9], context[10] );
  res = refalrts::splice_elem( res, context[10] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_elem( res, context[9] );
  res = refalrts::splice_stvar( res, context[8] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult MakeVariableCommentTable(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { MakeVariableComment, "MakeVariableComment" },
    { Map, "Map" },
    { Sort, "Sort" },
    { ReplicateVar, "ReplicateVar" },
    { Seq, "Seq" },
    { Fetch, "Fetch" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    // e.Vars#1/0
    // closed e.Vars#1 as range 0
    //0: e.Vars#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 2},
    {refalrts::icFunc, 0, 5, 3},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 4},
    {refalrts::icFunc, 0, 4, 5},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icFunc, 0, 1, 7},
    {refalrts::icFunc, 0, 3, 8},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 9},
    {refalrts::icFunc, 0, 2, 10},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 11},
    {refalrts::icFunc, 0, 1, 12},
    {refalrts::icFunc, 0, 0, 13},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 14},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 15},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 16},
    {refalrts::icPushStack, 0, 0, 16},
    {refalrts::icPushStack, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icPushStack, 0, 0, 15},
    {refalrts::icPushStack, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icLinkBrackets, 11, 14, 0},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icLinkBrackets, 6, 9, 0},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 5},
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
  // e.Vars#1/0
  // closed e.Vars#1 as range 0
  //0: e.Vars#1

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_call( context[2] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[3], Fetch, "Fetch" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[4] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[5], Seq, "Seq" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[7], Map, "Map" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[8], ReplicateVar, "ReplicateVar" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[10], Sort, "Sort" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[12], Map, "Map" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[13], MakeVariableComment, "MakeVariableComment" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[16] ) )
    return refalrts::cNoMemory;
  refalrts::push_stack( context[16] );
  refalrts::push_stack( context[2] );
  res = refalrts::splice_elem( res, context[16] );
  refalrts::push_stack( context[15] );
  refalrts::push_stack( context[4] );
  res = refalrts::splice_elem( res, context[15] );
  refalrts::link_brackets( context[11], context[14] );
  res = refalrts::splice_elem( res, context[14] );
  res = refalrts::splice_elem( res, context[13] );
  res = refalrts::splice_elem( res, context[12] );
  res = refalrts::splice_elem( res, context[11] );
  res = refalrts::splice_elem( res, context[10] );
  refalrts::link_brackets( context[6], context[9] );
  res = refalrts::splice_elem( res, context[9] );
  res = refalrts::splice_elem( res, context[8] );
  res = refalrts::splice_elem( res, context[7] );
  res = refalrts::splice_elem( res, context[6] );
  res = refalrts::splice_elem( res, context[5] );
  res = refalrts::splice_elem( res, context[4] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_elem( res, context[3] );
  res = refalrts::splice_elem( res, context[2] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult lambda_ReplicateVar_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 8 elems
  refalrts::Iter context[8];
  refalrts::zeros( context, 8 );
#ifdef INTERPRET
  using refalrts::functions;
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    // s.Mode#1/2 ( e.Index#1/3 ) s.ContextOffset#2/5
    {refalrts::icsVarLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 3, 0},
    // closed e.Index#1 as range 3
    {refalrts::icsVarLeft, 0, 5, 0},
    {refalrts::icEmpty, 0, 0, 0},
    //2: s.Mode#1
    //3: e.Index#1
    //5: s.ContextOffset#2
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 7},
    {refalrts::icLinkBrackets, 6, 7, 0},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceEVar, 0, 0, 3},
    {refalrts::icSpliceSTVar, 0, 0, 2},
    {refalrts::icSpliceSTVar, 0, 0, 5},
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
  // s.Mode#1/2 ( e.Index#1/3 ) s.ContextOffset#2/5
  if( ! refalrts::svar_left( context[2], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[3] = 0;
  context[4] = 0;
  if( ! refalrts::brackets_left( context[3], context[4], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Index#1 as range 3
  if( ! refalrts::svar_left( context[5], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  //2: s.Mode#1
  //3: e.Index#1
  //5: s.ContextOffset#2

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_bracket( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[7] ) )
    return refalrts::cNoMemory;
  refalrts::link_brackets( context[6], context[7] );
  res = refalrts::splice_elem( res, context[7] );
  res = refalrts::splice_evar( res, context[3], context[4] );
  res = refalrts::splice_stvar( res, context[2] );
  res = refalrts::splice_stvar( res, context[5] );
  res = refalrts::splice_elem( res, context[6] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult ReplicateVar(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { lambda_ReplicateVar_0, "lambda_ReplicateVar_0" },
    { refalrts::create_closure, "refalrts::create_closure" },
    { Map, "Map" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    // ( s.Mode#1/4 ( e.Index#1/5 ) ( e.ResultOccurences#1/7 ) e.PatternOccurences#1/2 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icsVarLeft, 0, 4, 2},
    {refalrts::icBracketLeft, 0, 5, 2},
    {refalrts::icBracketLeft, 0, 7, 2},
    // closed e.Index#1 as range 5
    // closed e.ResultOccurences#1 as range 7
    // closed e.PatternOccurences#1 as range 2
    //2: e.PatternOccurences#1
    //4: s.Mode#1
    //5: e.Index#1
    //7: e.ResultOccurences#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 9},
    {refalrts::icFunc, 0, 2, 10},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 11},
    {refalrts::icFunc, 0, 1, 12},
    {refalrts::icFunc, 0, 0, 13},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 14},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 15},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 16},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 17},
    {refalrts::icPushStack, 0, 0, 17},
    {refalrts::icPushStack, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceEVar, 0, 0, 7},
    {refalrts::icPushStack, 0, 0, 16},
    {refalrts::icPushStack, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icLinkBrackets, 14, 15, 0},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceEVar, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceSTVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 12},
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
  context[0] = arg_begin;
  context[1] = arg_end;
  refalrts::move_left( context[0], context[1] );
  refalrts::move_left( context[0], context[1] );
  refalrts::move_right( context[0], context[1] );
  // ( s.Mode#1/4 ( e.Index#1/5 ) ( e.ResultOccurences#1/7 ) e.PatternOccurences#1/2 )
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[4], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[5] = 0;
  context[6] = 0;
  if( ! refalrts::brackets_left( context[5], context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[7] = 0;
  context[8] = 0;
  if( ! refalrts::brackets_left( context[7], context[8], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Index#1 as range 5
  // closed e.ResultOccurences#1 as range 7
  // closed e.PatternOccurences#1 as range 2
  //2: e.PatternOccurences#1
  //4: s.Mode#1
  //5: e.Index#1
  //7: e.ResultOccurences#1

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_call( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[10], Map, "Map" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[12], refalrts::create_closure, "refalrts::create_closure" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[13], lambda_ReplicateVar_0, "lambda_ReplicateVar_0" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[16] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[17] ) )
    return refalrts::cNoMemory;
  refalrts::push_stack( context[17] );
  refalrts::push_stack( context[9] );
  res = refalrts::splice_elem( res, context[17] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::push_stack( context[16] );
  refalrts::push_stack( context[11] );
  res = refalrts::splice_elem( res, context[16] );
  refalrts::link_brackets( context[14], context[15] );
  res = refalrts::splice_elem( res, context[15] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_elem( res, context[14] );
  res = refalrts::splice_stvar( res, context[4] );
  res = refalrts::splice_elem( res, context[13] );
  res = refalrts::splice_elem( res, context[12] );
  res = refalrts::splice_elem( res, context[11] );
  res = refalrts::splice_elem( res, context[10] );
  res = refalrts::splice_elem( res, context[9] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult MakeVariableComment(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { PrintVar, "PrintVar" },
    { StrFromInt, "StrFromInt" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_CmdComment<int>::name
  };
  using refalrts::numbers;
  static const refalrts::StringItem strings[] = {
    {": ", 2}
  };
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    // ( s.Offset#1/4 s.Mode#1/5 e.Index#1/2 s.Depth#1/6 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icsVarLeft, 0, 4, 2},
    {refalrts::icsVarLeft, 0, 5, 2},
    {refalrts::icsVarRight, 0, 6, 2},
    // closed e.Index#1 as range 2
    //2: e.Index#1
    //4: s.Offset#1
    //5: s.Mode#1
    //6: s.Depth#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 7},
    {refalrts::icIdent, 0, 0, 8},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 9},
    {refalrts::icFunc, 0, 1, 10},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 11},
    {refalrts::icString, 0, 0, 12},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 14},
    {refalrts::icFunc, 0, 0, 15},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 16},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 17},
    {refalrts::icLinkBrackets, 7, 17, 0},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icPushStack, 0, 0, 16},
    {refalrts::icPushStack, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceSTVar, 0, 0, 6},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceSTVar, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceRange, 0, 0, 12},
    {refalrts::icPushStack, 0, 0, 11},
    {refalrts::icPushStack, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceSTVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 10},
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
  // ( s.Offset#1/4 s.Mode#1/5 e.Index#1/2 s.Depth#1/6 )
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[4], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_right( context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Index#1 as range 2
  //2: e.Index#1
  //4: s.Offset#1
  //5: s.Mode#1
  //6: s.Depth#1

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_bracket( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[8], & ident_CmdComment<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[10], StrFromInt, "StrFromInt" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[12], context[13], ": ", 2 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[15], PrintVar, "PrintVar" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[16] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[17] ) )
    return refalrts::cNoMemory;
  refalrts::link_brackets( context[7], context[17] );
  res = refalrts::splice_elem( res, context[17] );
  refalrts::push_stack( context[16] );
  refalrts::push_stack( context[14] );
  res = refalrts::splice_elem( res, context[16] );
  res = refalrts::splice_stvar( res, context[6] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_stvar( res, context[5] );
  res = refalrts::splice_elem( res, context[15] );
  res = refalrts::splice_elem( res, context[14] );
  res = refalrts::splice_evar( res, context[12], context[13] );
  refalrts::push_stack( context[11] );
  refalrts::push_stack( context[9] );
  res = refalrts::splice_elem( res, context[11] );
  res = refalrts::splice_stvar( res, context[4] );
  res = refalrts::splice_elem( res, context[10] );
  res = refalrts::splice_elem( res, context[9] );
  res = refalrts::splice_elem( res, context[8] );
  res = refalrts::splice_elem( res, context[7] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}


//End of file
