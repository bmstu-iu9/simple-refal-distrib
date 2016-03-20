// Automatically generated file. Don't edit!
#include "refalrts.h"


extern refalrts::FnResult Compare(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Fetch(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Inc(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult LowLevelRASL(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Map(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult MapReduce(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Seq(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult ConvertInterpretCommand(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult DoLength(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult GenerateResult_Sentences(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult Length_T(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult LowLevelRASL_Function(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult OutlineConstants(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult PrepareInterpretCommands(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult PrepareInterpretCommands_Linearize(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult PrepareOpenEStack(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult RemoveNumber(refalrts::Iter arg_begin, refalrts::Iter arg_end);

// identifier #AlgLeft
template <typename SREFAL_PARAM_INT>
struct ident_AlgLeft {
  static const char *name() {
    return "AlgLeft";
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

// identifier #CmdArrCopy
template <typename SREFAL_PARAM_INT>
struct ident_CmdArrCopy {
  static const char *name() {
    return "CmdArrCopy";
  }
};

// identifier #CmdArrSplice
template <typename SREFAL_PARAM_INT>
struct ident_CmdArrSplice {
  static const char *name() {
    return "CmdArrSplice";
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

// identifier #CmdElse
template <typename SREFAL_PARAM_INT>
struct ident_CmdElse {
  static const char *name() {
    return "CmdElse";
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

// identifier #CmdEndIf
template <typename SREFAL_PARAM_INT>
struct ident_CmdEndIf {
  static const char *name() {
    return "CmdEndIf";
  }
};

// identifier #CmdEndSentence
template <typename SREFAL_PARAM_INT>
struct ident_CmdEndSentence {
  static const char *name() {
    return "CmdEndSentence";
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

// identifier #CmdFinRAA
template <typename SREFAL_PARAM_INT>
struct ident_CmdFinRAA {
  static const char *name() {
    return "CmdFinRAA";
  }
};

// identifier #CmdFnEnd
template <typename SREFAL_PARAM_INT>
struct ident_CmdFnEnd {
  static const char *name() {
    return "CmdFnEnd";
  }
};

// identifier #CmdFnStart
template <typename SREFAL_PARAM_INT>
struct ident_CmdFnStart {
  static const char *name() {
    return "CmdFnStart";
  }
};

// identifier #CmdIdent
template <typename SREFAL_PARAM_INT>
struct ident_CmdIdent {
  static const char *name() {
    return "CmdIdent";
  }
};

// identifier #CmdIfDef
template <typename SREFAL_PARAM_INT>
struct ident_CmdIfDef {
  static const char *name() {
    return "CmdIfDef";
  }
};

// identifier #CmdInitB0
template <typename SREFAL_PARAM_INT>
struct ident_CmdInitB0 {
  static const char *name() {
    return "CmdInitB0";
  }
};

// identifier #CmdInitRAA
template <typename SREFAL_PARAM_INT>
struct ident_CmdInitRAA {
  static const char *name() {
    return "CmdInitRAA";
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

// identifier #CmdOpenedE_End
template <typename SREFAL_PARAM_INT>
struct ident_CmdOpenedE_End {
  static const char *name() {
    return "CmdOpenedE_End";
  }
};

// identifier #CmdOpenedE_Start
template <typename SREFAL_PARAM_INT>
struct ident_CmdOpenedE_Start {
  static const char *name() {
    return "CmdOpenedE_Start";
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

// identifier #CmdSpliceElem
template <typename SREFAL_PARAM_INT>
struct ident_CmdSpliceElem {
  static const char *name() {
    return "CmdSpliceElem";
  }
};

// identifier #CmdSpliceRange
template <typename SREFAL_PARAM_INT>
struct ident_CmdSpliceRange {
  static const char *name() {
    return "CmdSpliceRange";
  }
};

// identifier #CmdStartSentence
template <typename SREFAL_PARAM_INT>
struct ident_CmdStartSentence {
  static const char *name() {
    return "CmdStartSentence";
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

// identifier #CmdiADT
template <typename SREFAL_PARAM_INT>
struct ident_CmdiADT {
  static const char *name() {
    return "CmdiADT";
  }
};

// identifier #CmdiAllocateElem
template <typename SREFAL_PARAM_INT>
struct ident_CmdiAllocateElem {
  static const char *name() {
    return "CmdiAllocateElem";
  }
};

// identifier #CmdiBracket
template <typename SREFAL_PARAM_INT>
struct ident_CmdiBracket {
  static const char *name() {
    return "CmdiBracket";
  }
};

// identifier #CmdiChar
template <typename SREFAL_PARAM_INT>
struct ident_CmdiChar {
  static const char *name() {
    return "CmdiChar";
  }
};

// identifier #CmdiEPrepare
template <typename SREFAL_PARAM_INT>
struct ident_CmdiEPrepare {
  static const char *name() {
    return "CmdiEPrepare";
  }
};

// identifier #CmdiEStart
template <typename SREFAL_PARAM_INT>
struct ident_CmdiEStart {
  static const char *name() {
    return "CmdiEStart";
  }
};

// identifier #CmdiEmpty
template <typename SREFAL_PARAM_INT>
struct ident_CmdiEmpty {
  static const char *name() {
    return "CmdiEmpty";
  }
};

// identifier #CmdiEmptyResult
template <typename SREFAL_PARAM_INT>
struct ident_CmdiEmptyResult {
  static const char *name() {
    return "CmdiEmptyResult";
  }
};

// identifier #CmdiFail
template <typename SREFAL_PARAM_INT>
struct ident_CmdiFail {
  static const char *name() {
    return "CmdiFail";
  }
};

// identifier #CmdiFuncArray
template <typename SREFAL_PARAM_INT>
struct ident_CmdiFuncArray {
  static const char *name() {
    return "CmdiFuncArray";
  }
};

// identifier #CmdiHugeNum
template <typename SREFAL_PARAM_INT>
struct ident_CmdiHugeNum {
  static const char *name() {
    return "CmdiHugeNum";
  }
};

// identifier #CmdiIdent
template <typename SREFAL_PARAM_INT>
struct ident_CmdiIdent {
  static const char *name() {
    return "CmdiIdent";
  }
};

// identifier #CmdiInitB0
template <typename SREFAL_PARAM_INT>
struct ident_CmdiInitB0 {
  static const char *name() {
    return "CmdiInitB0";
  }
};

// identifier #CmdiLabelArray
template <typename SREFAL_PARAM_INT>
struct ident_CmdiLabelArray {
  static const char *name() {
    return "CmdiLabelArray";
  }
};

// identifier #CmdiLinkBrackets
template <typename SREFAL_PARAM_INT>
struct ident_CmdiLinkBrackets {
  static const char *name() {
    return "CmdiLinkBrackets";
  }
};

// identifier #CmdiName
template <typename SREFAL_PARAM_INT>
struct ident_CmdiName {
  static const char *name() {
    return "CmdiName";
  }
};

// identifier #CmdiNum
template <typename SREFAL_PARAM_INT>
struct ident_CmdiNum {
  static const char *name() {
    return "CmdiNum";
  }
};

// identifier #CmdiNumberArray
template <typename SREFAL_PARAM_INT>
struct ident_CmdiNumberArray {
  static const char *name() {
    return "CmdiNumberArray";
  }
};

// identifier #CmdiOnFailGoTo
template <typename SREFAL_PARAM_INT>
struct ident_CmdiOnFailGoTo {
  static const char *name() {
    return "CmdiOnFailGoTo";
  }
};

// identifier #CmdiPushStack
template <typename SREFAL_PARAM_INT>
struct ident_CmdiPushStack {
  static const char *name() {
    return "CmdiPushStack";
  }
};

// identifier #CmdiRepeat
template <typename SREFAL_PARAM_INT>
struct ident_CmdiRepeat {
  static const char *name() {
    return "CmdiRepeat";
  }
};

// identifier #CmdiReserveStack
template <typename SREFAL_PARAM_INT>
struct ident_CmdiReserveStack {
  static const char *name() {
    return "CmdiReserveStack";
  }
};

// identifier #CmdiReturnResult
template <typename SREFAL_PARAM_INT>
struct ident_CmdiReturnResult {
  static const char *name() {
    return "CmdiReturnResult";
  }
};

// identifier #CmdiRunInterpret
template <typename SREFAL_PARAM_INT>
struct ident_CmdiRunInterpret {
  static const char *name() {
    return "CmdiRunInterpret";
  }
};

// identifier #CmdiSave
template <typename SREFAL_PARAM_INT>
struct ident_CmdiSave {
  static const char *name() {
    return "CmdiSave";
  }
};

// identifier #CmdiStringArray
template <typename SREFAL_PARAM_INT>
struct ident_CmdiStringArray {
  static const char *name() {
    return "CmdiStringArray";
  }
};

// identifier #CmdiVar
template <typename SREFAL_PARAM_INT>
struct ident_CmdiVar {
  static const char *name() {
    return "CmdiVar";
  }
};

// identifier #ElHugeNumber
template <typename SREFAL_PARAM_INT>
struct ident_ElHugeNumber {
  static const char *name() {
    return "ElHugeNumber";
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

// identifier #ElString
template <typename SREFAL_PARAM_INT>
struct ident_ElString {
  static const char *name() {
    return "ElString";
  }
};

// identifier #Function
template <typename SREFAL_PARAM_INT>
struct ident_Function {
  static const char *name() {
    return "Function";
  }
};

static refalrts::FnResult lambda_LowLevelRASL_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { LowLevelRASL_Function, "LowLevelRASL_Function" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_CmdSeparator<int>::name,
    & ident_CmdDefineIdent<int>::name,
    & ident_CmdDeclaration<int>::name,
    & ident_CmdSwap<int>::name,
    & ident_CmdEnum<int>::name,
    & ident_Function<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +24, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( # Function s.ScopeClass#2/4 ( e.Name#2/5 ) e.Commands#2/2 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icIdentLeft, 0, 5, 2},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icsVarLeft, 0, 4, 2},
    {refalrts::icBracketLeft, 0, 5, 2},
    // closed e.Name#2 as range 5
    // closed e.Commands#2 as range 2
    //2: e.Commands#2
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
    // ( # CmdEnum s.ScopeClass#2/4 e.Name#2/2 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icIdentLeft, 0, 4, 2},
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
    {refalrts::icOnFailGoTo, +16, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( # CmdSwap s.ScopeClass#2/4 e.Name#2/2 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icIdentLeft, 0, 3, 2},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icsVarLeft, 0, 4, 2},
    // closed e.Name#2 as range 2
    //2: e.Name#2
    //4: s.ScopeClass#2
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 5},
    {refalrts::icIdent, 0, 3, 6},
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
    // ( # CmdDeclaration s.ScopeClass#2/4 e.Name#2/2 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icIdentLeft, 0, 2, 2},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icsVarLeft, 0, 4, 2},
    // closed e.Name#2 as range 2
    //2: e.Name#2
    //4: s.ScopeClass#2
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 5},
    {refalrts::icIdent, 0, 2, 6},
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
    // ( # CmdDefineIdent e.Name#2/2 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icIdentLeft, 0, 1, 2},
    {refalrts::icEmpty, 0, 0, 0},
    // closed e.Name#2 as range 2
    //2: e.Name#2
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 4},
    {refalrts::icIdent, 0, 1, 5},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 6},
    {refalrts::icLinkBrackets, 4, 6, 0},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( # CmdSeparator )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icIdentLeft, 0, 0, 2},
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
    // ( # Function s.ScopeClass#2/4 ( e.Name#2/5 ) e.Commands#2/2 )
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
    // closed e.Commands#2 as range 2
    //2: e.Commands#2
    //4: s.ScopeClass#2
    //5: e.Name#2

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[7] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[8], LowLevelRASL_Function, "LowLevelRASL_Function" ) )
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
    // ( # CmdEnum s.ScopeClass#2/4 e.Name#2/2 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdEnum<int>::name, context[2], context[3] ) )
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
    // ( # CmdSwap s.ScopeClass#2/4 e.Name#2/2 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdSwap<int>::name, context[2], context[3] ) )
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
    // ( # CmdDeclaration s.ScopeClass#2/4 e.Name#2/2 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdDeclaration<int>::name, context[2], context[3] ) )
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
    // ( # CmdDefineIdent e.Name#2/2 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdDefineIdent<int>::name, context[2], context[3] ) )
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
  // ( # CmdSeparator )
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::ident_left(  & ident_CmdSeparator<int>::name, context[2], context[3] ) )
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

refalrts::FnResult LowLevelRASL(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { lambda_LowLevelRASL_0, "lambda_LowLevelRASL_0" },
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
  if( ! refalrts::alloc_name( context[4], lambda_LowLevelRASL_0, "lambda_LowLevelRASL_0" ) )
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

static refalrts::FnResult LowLevelRASL_Function(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 62 elems
  refalrts::Iter context[62];
  refalrts::zeros( context, 62 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { GenerateResult_Sentences, "GenerateResult_Sentences" },
    { PrepareInterpretCommands, "PrepareInterpretCommands" },
    { OutlineConstants, "OutlineConstants" },
    { PrepareOpenEStack, "PrepareOpenEStack" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_CmdFnEnd<int>::name,
    & ident_CmdEndIf<int>::name,
    & ident_CmdElse<int>::name,
    & ident_CmdiRunInterpret<int>::name,
    & ident_CmdFinRAA<int>::name,
    & ident_CmdInitRAA<int>::name,
    & ident_CmdIfDef<int>::name,
    & ident_CmdIssueMem<int>::name,
    & ident_CmdFnStart<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    // s.ScopeClass#1/2 ( e.Name#1/3 ) ( # CmdIssueMem s.Number#1/7 ) e.Commands#1/0
    {refalrts::icsVarLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 3, 0},
    {refalrts::icBracketLeft, 0, 5, 0},
    {refalrts::icIdentLeft, 0, 7, 5},
    // closed e.Name#1 as range 3
    // closed e.Commands#1 as range 0
    {refalrts::icsVarLeft, 0, 7, 5},
    {refalrts::icEmpty, 0, 0, 5},
    //0: e.Commands#1
    //2: s.ScopeClass#1
    //3: e.Name#1
    //7: s.Number#1
    //53: e.Commands#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icIdent, 0, 8, 9},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 10},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 11},
    {refalrts::icIdent, 0, 7, 12},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 13},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 14},
    {refalrts::icIdent, 0, 6, 15},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 16},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 17},
    {refalrts::icFunc, 0, 3, 18},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 19},
    {refalrts::icFunc, 0, 2, 20},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 21},
    {refalrts::icInt, 0, 0, 22},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 23},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 24},
    {refalrts::icInt, 0, 0, 25},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 26},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 27},
    {refalrts::icInt, 0, 0, 28},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 29},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 30},
    {refalrts::icInt, 0, 0, 31},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 32},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 33},
    {refalrts::icIdent, 0, 5, 34},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 35},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 36},
    {refalrts::icFunc, 0, 1, 37},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 38},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 39},
    {refalrts::icIdent, 0, 4, 40},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 41},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 42},
    {refalrts::icInt, 0, 0, 43},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 44},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 45},
    {refalrts::icIdent, 0, 3, 46},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 47},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 48},
    {refalrts::icIdent, 0, 2, 49},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 50},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 51},
    {refalrts::icFunc, 0, 0, 52},
    {refalrts::icCopyEVar, 53, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 55},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 56},
    {refalrts::icIdent, 0, 1, 57},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 58},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 59},
    {refalrts::icIdent, 0, 0, 60},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 61},
    {refalrts::icLinkBrackets, 59, 61, 0},
    {refalrts::icSpliceElem, 0, 0, 61},
    {refalrts::icSpliceElem, 0, 0, 60},
    {refalrts::icSpliceElem, 0, 0, 59},
    {refalrts::icLinkBrackets, 56, 58, 0},
    {refalrts::icSpliceElem, 0, 0, 58},
    {refalrts::icSpliceElem, 0, 0, 57},
    {refalrts::icSpliceElem, 0, 0, 56},
    {refalrts::icPushStack, 0, 0, 55},
    {refalrts::icPushStack, 0, 0, 51},
    {refalrts::icSpliceElem, 0, 0, 55},
    {refalrts::icSpliceEVar, 0, 0, 53},
    {refalrts::icSpliceElem, 0, 0, 52},
    {refalrts::icSpliceElem, 0, 0, 51},
    {refalrts::icLinkBrackets, 48, 50, 0},
    {refalrts::icSpliceElem, 0, 0, 50},
    {refalrts::icSpliceElem, 0, 0, 49},
    {refalrts::icSpliceElem, 0, 0, 48},
    {refalrts::icLinkBrackets, 45, 47, 0},
    {refalrts::icSpliceElem, 0, 0, 47},
    {refalrts::icSpliceElem, 0, 0, 46},
    {refalrts::icSpliceElem, 0, 0, 45},
    {refalrts::icPushStack, 0, 0, 44},
    {refalrts::icPushStack, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 44},
    {refalrts::icSpliceElem, 0, 0, 43},
    {refalrts::icPushStack, 0, 0, 42},
    {refalrts::icPushStack, 0, 0, 19},
    {refalrts::icSpliceElem, 0, 0, 42},
    {refalrts::icLinkBrackets, 39, 41, 0},
    {refalrts::icSpliceElem, 0, 0, 41},
    {refalrts::icSpliceElem, 0, 0, 40},
    {refalrts::icSpliceElem, 0, 0, 39},
    {refalrts::icPushStack, 0, 0, 38},
    {refalrts::icPushStack, 0, 0, 36},
    {refalrts::icSpliceElem, 0, 0, 38},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icSpliceElem, 0, 0, 37},
    {refalrts::icSpliceElem, 0, 0, 36},
    {refalrts::icLinkBrackets, 33, 35, 0},
    {refalrts::icSpliceElem, 0, 0, 35},
    {refalrts::icSpliceElem, 0, 0, 34},
    {refalrts::icSpliceElem, 0, 0, 33},
    {refalrts::icLinkBrackets, 30, 32, 0},
    {refalrts::icSpliceElem, 0, 0, 32},
    {refalrts::icSpliceElem, 0, 0, 31},
    {refalrts::icSpliceElem, 0, 0, 30},
    {refalrts::icLinkBrackets, 27, 29, 0},
    {refalrts::icSpliceElem, 0, 0, 29},
    {refalrts::icSpliceElem, 0, 0, 28},
    {refalrts::icSpliceElem, 0, 0, 27},
    {refalrts::icLinkBrackets, 24, 26, 0},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icLinkBrackets, 21, 23, 0},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icLinkBrackets, 14, 16, 0},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icLinkBrackets, 11, 13, 0},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceSTVar, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icLinkBrackets, 8, 10, 0},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceEVar, 0, 0, 3},
    {refalrts::icSpliceSTVar, 0, 0, 2},
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
  // s.ScopeClass#1/2 ( e.Name#1/3 ) ( # CmdIssueMem s.Number#1/7 ) e.Commands#1/0
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
  if( ! refalrts::ident_left(  & ident_CmdIssueMem<int>::name, context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Name#1 as range 3
  // closed e.Commands#1 as range 0
  if( ! refalrts::svar_left( context[7], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  //0: e.Commands#1
  //2: s.ScopeClass#1
  //3: e.Name#1
  //7: s.Number#1
  //53: e.Commands#1

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_bracket( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[9], & ident_CmdFnStart<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[12], & ident_CmdIssueMem<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[15], & ident_CmdIfDef<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[16] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[17] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[18], PrepareOpenEStack, "PrepareOpenEStack" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[19] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[20], OutlineConstants, "OutlineConstants" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[21] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_number( context[22], 0UL ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[23] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[24] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_number( context[25], 0UL ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[26] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[27] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_number( context[28], 0UL ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[29] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[30] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_number( context[31], 0UL ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[32] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[33] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[34], & ident_CmdInitRAA<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[35] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[36] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[37], PrepareInterpretCommands, "PrepareInterpretCommands" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[38] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[39] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[40], & ident_CmdFinRAA<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[41] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[42] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_number( context[43], 0UL ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[44] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[45] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[46], & ident_CmdiRunInterpret<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[47] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[48] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[49], & ident_CmdElse<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[50] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[51] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[52], GenerateResult_Sentences, "GenerateResult_Sentences" ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[53], context[54], context[0], context[1]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[55] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[56] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[57], & ident_CmdEndIf<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[58] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[59] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[60], & ident_CmdFnEnd<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[61] ) )
    return refalrts::cNoMemory;
  refalrts::link_brackets( context[59], context[61] );
  res = refalrts::splice_elem( res, context[61] );
  res = refalrts::splice_elem( res, context[60] );
  res = refalrts::splice_elem( res, context[59] );
  refalrts::link_brackets( context[56], context[58] );
  res = refalrts::splice_elem( res, context[58] );
  res = refalrts::splice_elem( res, context[57] );
  res = refalrts::splice_elem( res, context[56] );
  refalrts::push_stack( context[55] );
  refalrts::push_stack( context[51] );
  res = refalrts::splice_elem( res, context[55] );
  res = refalrts::splice_evar( res, context[53], context[54] );
  res = refalrts::splice_elem( res, context[52] );
  res = refalrts::splice_elem( res, context[51] );
  refalrts::link_brackets( context[48], context[50] );
  res = refalrts::splice_elem( res, context[50] );
  res = refalrts::splice_elem( res, context[49] );
  res = refalrts::splice_elem( res, context[48] );
  refalrts::link_brackets( context[45], context[47] );
  res = refalrts::splice_elem( res, context[47] );
  res = refalrts::splice_elem( res, context[46] );
  res = refalrts::splice_elem( res, context[45] );
  refalrts::push_stack( context[44] );
  refalrts::push_stack( context[17] );
  res = refalrts::splice_elem( res, context[44] );
  res = refalrts::splice_elem( res, context[43] );
  refalrts::push_stack( context[42] );
  refalrts::push_stack( context[19] );
  res = refalrts::splice_elem( res, context[42] );
  refalrts::link_brackets( context[39], context[41] );
  res = refalrts::splice_elem( res, context[41] );
  res = refalrts::splice_elem( res, context[40] );
  res = refalrts::splice_elem( res, context[39] );
  refalrts::push_stack( context[38] );
  refalrts::push_stack( context[36] );
  res = refalrts::splice_elem( res, context[38] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_elem( res, context[37] );
  res = refalrts::splice_elem( res, context[36] );
  refalrts::link_brackets( context[33], context[35] );
  res = refalrts::splice_elem( res, context[35] );
  res = refalrts::splice_elem( res, context[34] );
  res = refalrts::splice_elem( res, context[33] );
  refalrts::link_brackets( context[30], context[32] );
  res = refalrts::splice_elem( res, context[32] );
  res = refalrts::splice_elem( res, context[31] );
  res = refalrts::splice_elem( res, context[30] );
  refalrts::link_brackets( context[27], context[29] );
  res = refalrts::splice_elem( res, context[29] );
  res = refalrts::splice_elem( res, context[28] );
  res = refalrts::splice_elem( res, context[27] );
  refalrts::link_brackets( context[24], context[26] );
  res = refalrts::splice_elem( res, context[26] );
  res = refalrts::splice_elem( res, context[25] );
  res = refalrts::splice_elem( res, context[24] );
  refalrts::link_brackets( context[21], context[23] );
  res = refalrts::splice_elem( res, context[23] );
  res = refalrts::splice_elem( res, context[22] );
  res = refalrts::splice_elem( res, context[21] );
  res = refalrts::splice_elem( res, context[20] );
  res = refalrts::splice_elem( res, context[19] );
  res = refalrts::splice_elem( res, context[18] );
  res = refalrts::splice_elem( res, context[17] );
  refalrts::link_brackets( context[14], context[16] );
  res = refalrts::splice_elem( res, context[16] );
  res = refalrts::splice_elem( res, context[15] );
  res = refalrts::splice_elem( res, context[14] );
  refalrts::link_brackets( context[11], context[13] );
  res = refalrts::splice_elem( res, context[13] );
  res = refalrts::splice_stvar( res, context[7] );
  res = refalrts::splice_elem( res, context[12] );
  res = refalrts::splice_elem( res, context[11] );
  refalrts::link_brackets( context[8], context[10] );
  res = refalrts::splice_elem( res, context[10] );
  res = refalrts::splice_evar( res, context[3], context[4] );
  res = refalrts::splice_stvar( res, context[2] );
  res = refalrts::splice_elem( res, context[9] );
  res = refalrts::splice_elem( res, context[8] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult PrepareInterpretCommands(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { PrepareInterpretCommands_Linearize, "PrepareInterpretCommands_Linearize" },
    { ConvertInterpretCommand, "ConvertInterpretCommand" },
    { Map, "Map" }
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
    {refalrts::icFunc, 0, 1, 4},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 5},
    {refalrts::icFunc, 0, 0, 6},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 7},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 8},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icPushStack, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icPushStack, 0, 0, 7},
    {refalrts::icPushStack, 0, 0, 5},
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
  if( ! refalrts::alloc_name( context[3], Map, "Map" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[4], ConvertInterpretCommand, "ConvertInterpretCommand" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[5] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[6], PrepareInterpretCommands_Linearize, "PrepareInterpretCommands_Linearize" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[8] ) )
    return refalrts::cNoMemory;
  refalrts::push_stack( context[8] );
  refalrts::push_stack( context[2] );
  res = refalrts::splice_elem( res, context[8] );
  refalrts::push_stack( context[7] );
  refalrts::push_stack( context[5] );
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

static refalrts::FnResult lambda_PrepareInterpretCommands_Linearize_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { PrepareInterpretCommands_Linearize, "PrepareInterpretCommands_Linearize" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_CmdiOnFailGoTo<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Tail#1/2 ) s.Length#2/4 e.SubCommands#2/0
    {refalrts::icBracketLeft, 0, 2, 0},
    // closed e.Tail#1 as range 2
    {refalrts::icsVarLeft, 0, 4, 0},
    // closed e.SubCommands#2 as range 0
    //0: e.SubCommands#2
    //2: e.Tail#1
    //4: s.Length#2
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 5},
    {refalrts::icIdent, 0, 0, 6},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 7},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 8},
    {refalrts::icFunc, 0, 0, 9},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 10},
    {refalrts::icPushStack, 0, 0, 10},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icLinkBrackets, 5, 7, 0},
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
  // ( e.Tail#1/2 ) s.Length#2/4 e.SubCommands#2/0
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Tail#1 as range 2
  if( ! refalrts::svar_left( context[4], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.SubCommands#2 as range 0
  //0: e.SubCommands#2
  //2: e.Tail#1
  //4: s.Length#2

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_bracket( context[5] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[6], & ident_CmdiOnFailGoTo<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[9], PrepareInterpretCommands_Linearize, "PrepareInterpretCommands_Linearize" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[10] ) )
    return refalrts::cNoMemory;
  refalrts::push_stack( context[10] );
  refalrts::push_stack( context[8] );
  res = refalrts::splice_elem( res, context[10] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_elem( res, context[9] );
  res = refalrts::splice_elem( res, context[8] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  refalrts::link_brackets( context[5], context[7] );
  res = refalrts::splice_elem( res, context[7] );
  res = refalrts::splice_stvar( res, context[4] );
  res = refalrts::splice_elem( res, context[6] );
  res = refalrts::splice_elem( res, context[5] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult PrepareInterpretCommands_Linearize(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { PrepareInterpretCommands_Linearize, "PrepareInterpretCommands_Linearize" },
    { lambda_PrepareInterpretCommands_Linearize_0, "lambda_PrepareInterpretCommands_Linearize_0" },
    { refalrts::create_closure, "refalrts::create_closure" },
    { Length_T, "Length_T" },
    { Fetch, "Fetch" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_CmdiEStart<int>::name,
    & ident_CmdiEPrepare<int>::name,
    & ident_AlgLeft<int>::name,
    & ident_CmdOpenELoop<int>::name,
    & ident_CmdSentence<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +46, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( # CmdSentence e.SubCommands#1/2 ) e.Tail#1/0
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icIdentLeft, 0, 4, 2},
    // closed e.SubCommands#1 as range 2
    // closed e.Tail#1 as range 0
    //0: e.Tail#1
    //2: e.SubCommands#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 4},
    {refalrts::icFunc, 0, 4, 5},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 6},
    {refalrts::icFunc, 0, 3, 7},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 8},
    {refalrts::icFunc, 0, 0, 9},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 10},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 11},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 12},
    {refalrts::icFunc, 0, 2, 13},
    {refalrts::icFunc, 0, 1, 14},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 15},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 16},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 17},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 18},
    {refalrts::icPushStack, 0, 0, 18},
    {refalrts::icPushStack, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icPushStack, 0, 0, 17},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icLinkBrackets, 15, 16, 0},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icPushStack, 0, 0, 11},
    {refalrts::icPushStack, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icPushStack, 0, 0, 10},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +46, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( # CmdOpenELoop # AlgLeft s.BracketNum#1/4 s.VarNumber#1/5 e.SubCommands#1/2 ) e.Tail#1/0
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icIdentLeft, 0, 3, 2},
    {refalrts::icIdentLeft, 0, 2, 2},
    // closed e.Tail#1 as range 0
    {refalrts::icsVarLeft, 0, 4, 2},
    {refalrts::icsVarLeft, 0, 5, 2},
    // closed e.SubCommands#1 as range 2
    //0: e.Tail#1
    //2: e.SubCommands#1
    //4: s.BracketNum#1
    //5: s.VarNumber#1
    //11: s.BracketNum#1
    //12: s.VarNumber#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icIdent, 0, 1, 7},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 8},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 9},
    {refalrts::icIdent, 0, 0, 10},
    {refalrts::icCopySTVar, 11, 4, 0},
    {refalrts::icCopySTVar, 12, 5, 0},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 13},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 14},
    {refalrts::icFunc, 0, 0, 15},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 16},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 17},
    {refalrts::icFunc, 0, 0, 18},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 19},
    {refalrts::icPushStack, 0, 0, 19},
    {refalrts::icPushStack, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icPushStack, 0, 0, 16},
    {refalrts::icPushStack, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icLinkBrackets, 9, 13, 0},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceSTVar, 0, 0, 12},
    {refalrts::icSpliceSTVar, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icLinkBrackets, 6, 8, 0},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceSTVar, 0, 0, 5},
    {refalrts::icSpliceSTVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +14, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // t.Command#1/2 e.Tail#1/0
    {refalrts::ictVarLeft, 0, 2, 0},
    // closed e.Tail#1 as range 0
    //0: e.Tail#1
    //2: t.Command#1
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
    // ( # CmdSentence e.SubCommands#1/2 ) e.Tail#1/0
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdSentence<int>::name, context[2], context[3] ) )
      continue;
    // closed e.SubCommands#1 as range 2
    // closed e.Tail#1 as range 0
    //0: e.Tail#1
    //2: e.SubCommands#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[4] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[5], Fetch, "Fetch" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[7], Length_T, "Length_T" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[9], PrepareInterpretCommands_Linearize, "PrepareInterpretCommands_Linearize" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[13], refalrts::create_closure, "refalrts::create_closure" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[14], lambda_PrepareInterpretCommands_Linearize_0, "lambda_PrepareInterpretCommands_Linearize_0" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[15] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[17] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[18] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[18] );
    refalrts::push_stack( context[4] );
    res = refalrts::splice_elem( res, context[18] );
    refalrts::push_stack( context[17] );
    refalrts::push_stack( context[12] );
    res = refalrts::splice_elem( res, context[17] );
    refalrts::link_brackets( context[15], context[16] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    res = refalrts::splice_elem( res, context[15] );
    res = refalrts::splice_elem( res, context[14] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_elem( res, context[12] );
    refalrts::push_stack( context[11] );
    refalrts::push_stack( context[6] );
    res = refalrts::splice_elem( res, context[11] );
    refalrts::push_stack( context[10] );
    refalrts::push_stack( context[8] );
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
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    // ( # CmdOpenELoop # AlgLeft s.BracketNum#1/4 s.VarNumber#1/5 e.SubCommands#1/2 ) e.Tail#1/0
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdOpenELoop<int>::name, context[2], context[3] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_AlgLeft<int>::name, context[2], context[3] ) )
      continue;
    // closed e.Tail#1 as range 0
    if( ! refalrts::svar_left( context[4], context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
      continue;
    // closed e.SubCommands#1 as range 2
    //0: e.Tail#1
    //2: e.SubCommands#1
    //4: s.BracketNum#1
    //5: s.VarNumber#1
    //11: s.BracketNum#1
    //12: s.VarNumber#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[7], & ident_CmdiEPrepare<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[9] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[10], & ident_CmdiEStart<int>::name ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[11], context[4]))
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[12], context[5]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[15], PrepareInterpretCommands_Linearize, "PrepareInterpretCommands_Linearize" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[17] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[18], PrepareInterpretCommands_Linearize, "PrepareInterpretCommands_Linearize" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[19] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[19] );
    refalrts::push_stack( context[17] );
    res = refalrts::splice_elem( res, context[19] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    res = refalrts::splice_elem( res, context[18] );
    res = refalrts::splice_elem( res, context[17] );
    refalrts::push_stack( context[16] );
    refalrts::push_stack( context[14] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_elem( res, context[15] );
    res = refalrts::splice_elem( res, context[14] );
    refalrts::link_brackets( context[9], context[13] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_stvar( res, context[12] );
    res = refalrts::splice_stvar( res, context[11] );
    res = refalrts::splice_elem( res, context[10] );
    res = refalrts::splice_elem( res, context[9] );
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
    // t.Command#1/2 e.Tail#1/0
    if( ! refalrts::tvar_left( context[2], context[0], context[1] ) )
      continue;
    // closed e.Tail#1 as range 0
    //0: e.Tail#1
    //2: t.Command#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[3] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[4], PrepareInterpretCommands_Linearize, "PrepareInterpretCommands_Linearize" ) )
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

static refalrts::FnResult Length_T(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { DoLength, "DoLength" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    // e.Expr#1/0
    // closed e.Expr#1 as range 0
    //0: e.Expr#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 2},
    {refalrts::icFunc, 0, 0, 3},
    {refalrts::icInt, 0, 0, 4},
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
  // e.Expr#1/0
  // closed e.Expr#1 as range 0
  //0: e.Expr#1

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_call( context[2] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[3], DoLength, "DoLength" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_number( context[4], 0UL ) )
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

static refalrts::FnResult DoLength(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { Inc, "Inc" },
    { DoLength, "DoLength" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_CmdComment<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +24, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // s.Count#1/4 e.Expr#1/0 ( # CmdComment e.Text#1/2 )
    {refalrts::icBracketRight, 0, 2, 0},
    {refalrts::icIdentLeft, 0, 0, 2},
    // closed e.Text#1 as range 2
    {refalrts::icsVarLeft, 0, 4, 0},
    // closed e.Expr#1 as range 0
    //0: e.Expr#1
    //2: e.Text#1
    //4: s.Count#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 5},
    {refalrts::icFunc, 0, 1, 6},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 7},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icIdent, 0, 0, 9},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 10},
    {refalrts::icLinkBrackets, 8, 10, 0},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icPushStack, 0, 0, 7},
    {refalrts::icPushStack, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icSpliceSTVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +24, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // s.Count#1/2 e.Expr#1/0 t.Last#1/3
    {refalrts::icsVarLeft, 0, 2, 0},
    {refalrts::ictVarRight, 0, 3, 0},
    // closed e.Expr#1 as range 0
    //0: e.Expr#1
    //2: s.Count#1
    //3: t.Last#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 4},
    {refalrts::icFunc, 0, 1, 5},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 6},
    {refalrts::icFunc, 0, 0, 7},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 8},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 9},
    {refalrts::icSpliceSTVar, 0, 0, 3},
    {refalrts::icPushStack, 0, 0, 9},
    {refalrts::icPushStack, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icPushStack, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceSTVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // s.Count#1/2
    {refalrts::icsVarLeft, 0, 2, 0},
    {refalrts::icEmpty, 0, 0, 0},
    //2: s.Count#1
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
    // s.Count#1/4 e.Expr#1/0 ( # CmdComment e.Text#1/2 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_right( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdComment<int>::name, context[2], context[3] ) )
      continue;
    // closed e.Text#1 as range 2
    if( ! refalrts::svar_left( context[4], context[0], context[1] ) )
      continue;
    // closed e.Expr#1 as range 0
    //0: e.Expr#1
    //2: e.Text#1
    //4: s.Count#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[5] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[6], DoLength, "DoLength" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[7] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[9], & ident_CmdComment<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[10] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[8], context[10] );
    res = refalrts::splice_elem( res, context[10] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_elem( res, context[9] );
    res = refalrts::splice_elem( res, context[8] );
    refalrts::push_stack( context[7] );
    refalrts::push_stack( context[5] );
    res = refalrts::splice_elem( res, context[7] );
    res = refalrts::splice_evar( res, context[0], context[1] );
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
    // s.Count#1/2 e.Expr#1/0 t.Last#1/3
    if( ! refalrts::svar_left( context[2], context[0], context[1] ) )
      continue;
    if( ! refalrts::tvar_right( context[3], context[0], context[1] ) )
      continue;
    // closed e.Expr#1 as range 0
    //0: e.Expr#1
    //2: s.Count#1
    //3: t.Last#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[4] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[5], DoLength, "DoLength" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[7], Inc, "Inc" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[9] ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_stvar( res, context[3] );
    refalrts::push_stack( context[9] );
    refalrts::push_stack( context[4] );
    res = refalrts::splice_elem( res, context[9] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    refalrts::push_stack( context[8] );
    refalrts::push_stack( context[6] );
    res = refalrts::splice_elem( res, context[8] );
    res = refalrts::splice_stvar( res, context[2] );
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
  // s.Count#1/2
  if( ! refalrts::svar_left( context[2], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  //2: s.Count#1

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  res = refalrts::splice_stvar( res, context[2] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult lambda_ConvertInterpretCommand_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
#ifdef INTERPRET
  using refalrts::functions;
  static const refalrts::RefalIdentifier idents[] = {
    & ident_CmdiHugeNum<int>::name,
    & ident_CmdiNum<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +18, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // s.Direction#1/2 s.BracketNumber#1/3 s.Number#1/4 '<'
    {refalrts::icCharRight, 0, static_cast<unsigned char>('<'), 0},
    {refalrts::icsVarLeft, 0, 2, 0},
    {refalrts::icsVarLeft, 0, 3, 0},
    {refalrts::icsVarLeft, 0, 4, 0},
    {refalrts::icEmpty, 0, 0, 0},
    //2: s.Direction#1
    //3: s.BracketNumber#1
    //4: s.Number#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 5},
    {refalrts::icIdent, 0, 1, 6},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 7},
    {refalrts::icLinkBrackets, 5, 7, 0},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceSTVar, 0, 0, 4},
    {refalrts::icSpliceSTVar, 0, 0, 3},
    {refalrts::icSpliceSTVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // s.Direction#1/2 s.BracketNumber#1/3 s.Number#1/4 s.Other#2/5
    {refalrts::icsVarLeft, 0, 2, 0},
    {refalrts::icsVarLeft, 0, 3, 0},
    {refalrts::icsVarLeft, 0, 4, 0},
    {refalrts::icsVarLeft, 0, 5, 0},
    {refalrts::icEmpty, 0, 0, 0},
    //2: s.Direction#1
    //3: s.BracketNumber#1
    //4: s.Number#1
    //5: s.Other#2
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icIdent, 0, 0, 7},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 8},
    {refalrts::icLinkBrackets, 6, 8, 0},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceSTVar, 0, 0, 4},
    {refalrts::icSpliceSTVar, 0, 0, 3},
    {refalrts::icSpliceSTVar, 0, 0, 2},
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
    // s.Direction#1/2 s.BracketNumber#1/3 s.Number#1/4 '<'
    if( ! refalrts::char_right( '<', context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[2], context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[4], context[0], context[1] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    //2: s.Direction#1
    //3: s.BracketNumber#1
    //4: s.Number#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[5] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[6], & ident_CmdiNum<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[7] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[5], context[7] );
    res = refalrts::splice_elem( res, context[7] );
    res = refalrts::splice_stvar( res, context[4] );
    res = refalrts::splice_stvar( res, context[3] );
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
  // s.Direction#1/2 s.BracketNumber#1/3 s.Number#1/4 s.Other#2/5
  if( ! refalrts::svar_left( context[2], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[4], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[5], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  //2: s.Direction#1
  //3: s.BracketNumber#1
  //4: s.Number#1
  //5: s.Other#2

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_bracket( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[7], & ident_CmdiHugeNum<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[8] ) )
    return refalrts::cNoMemory;
  refalrts::link_brackets( context[6], context[8] );
  res = refalrts::splice_elem( res, context[8] );
  res = refalrts::splice_stvar( res, context[4] );
  res = refalrts::splice_stvar( res, context[3] );
  res = refalrts::splice_stvar( res, context[2] );
  res = refalrts::splice_elem( res, context[7] );
  res = refalrts::splice_elem( res, context[6] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult lambda_ConvertInterpretCommand_1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
#ifdef INTERPRET
  using refalrts::functions;
  static const refalrts::RefalIdentifier idents[] = {
    & ident_ElHugeNumber<int>::name,
    & ident_CmdiAllocateElem<int>::name,
    & ident_ElNumber<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +18, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // s.ElemNo#1/2 s.Number#1/3 '<'
    {refalrts::icCharRight, 0, static_cast<unsigned char>('<'), 0},
    {refalrts::icsVarLeft, 0, 2, 0},
    {refalrts::icsVarLeft, 0, 3, 0},
    {refalrts::icEmpty, 0, 0, 0},
    //2: s.ElemNo#1
    //3: s.Number#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 4},
    {refalrts::icIdent, 0, 1, 5},
    {refalrts::icIdent, 0, 2, 6},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 7},
    {refalrts::icLinkBrackets, 4, 7, 0},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceSTVar, 0, 0, 3},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceSTVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // s.ElemNo#1/2 s.Number#1/3 s.Other#2/4
    {refalrts::icsVarLeft, 0, 2, 0},
    {refalrts::icsVarLeft, 0, 3, 0},
    {refalrts::icsVarLeft, 0, 4, 0},
    {refalrts::icEmpty, 0, 0, 0},
    //2: s.ElemNo#1
    //3: s.Number#1
    //4: s.Other#2
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 5},
    {refalrts::icIdent, 0, 1, 6},
    {refalrts::icIdent, 0, 0, 7},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 8},
    {refalrts::icLinkBrackets, 5, 8, 0},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceSTVar, 0, 0, 3},
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
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    // s.ElemNo#1/2 s.Number#1/3 '<'
    if( ! refalrts::char_right( '<', context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[2], context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    //2: s.ElemNo#1
    //3: s.Number#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[4] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[5], & ident_CmdiAllocateElem<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[6], & ident_ElNumber<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[7] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[4], context[7] );
    res = refalrts::splice_elem( res, context[7] );
    res = refalrts::splice_stvar( res, context[3] );
    res = refalrts::splice_elem( res, context[6] );
    res = refalrts::splice_stvar( res, context[2] );
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
  // s.ElemNo#1/2 s.Number#1/3 s.Other#2/4
  if( ! refalrts::svar_left( context[2], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[4], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  //2: s.ElemNo#1
  //3: s.Number#1
  //4: s.Other#2

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_bracket( context[5] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[6], & ident_CmdiAllocateElem<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[7], & ident_ElHugeNumber<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[8] ) )
    return refalrts::cNoMemory;
  refalrts::link_brackets( context[5], context[8] );
  res = refalrts::splice_elem( res, context[8] );
  res = refalrts::splice_stvar( res, context[3] );
  res = refalrts::splice_elem( res, context[7] );
  res = refalrts::splice_stvar( res, context[2] );
  res = refalrts::splice_elem( res, context[6] );
  res = refalrts::splice_elem( res, context[5] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult ConvertInterpretCommand(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { lambda_ConvertInterpretCommand_1, "lambda_ConvertInterpretCommand_1" },
    { refalrts::create_closure, "refalrts::create_closure" },
    { Compare, "Compare" },
    { Fetch, "Fetch" },
    { lambda_ConvertInterpretCommand_0, "lambda_ConvertInterpretCommand_0" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_CmdiInitB0<int>::name,
    & ident_CmdInitB0<int>::name,
    & ident_CmdiReturnResult<int>::name,
    & ident_CmdReturnResult<int>::name,
    & ident_CmdiFail<int>::name,
    & ident_CmdFail<int>::name,
    & ident_CmdiOnFailGoTo<int>::name,
    & ident_CmdArrCopy<int>::name,
    & ident_CmdCopyVar<int>::name,
    & ident_CmdiPushStack<int>::name,
    & ident_CmdPushStack<int>::name,
    & ident_CmdiLinkBrackets<int>::name,
    & ident_CmdLinkBrackets<int>::name,
    & ident_CmdArrSplice<int>::name,
    & ident_CmdInsertVar<int>::name,
    & ident_CmdSpliceRange<int>::name,
    & ident_CmdInsertRange<int>::name,
    & ident_CmdSpliceElem<int>::name,
    & ident_CmdInsertElem<int>::name,
    & ident_CmdiAllocateElem<int>::name,
    & ident_CmdAllocateElem<int>::name,
    & ident_ElNumber<int>::name,
    & ident_CmdiEmptyResult<int>::name,
    & ident_CmdEmptyResult<int>::name,
    & ident_CmdComment<int>::name,
    & ident_CmdiVar<int>::name,
    & ident_CmdVar<int>::name,
    & ident_CmdiEmpty<int>::name,
    & ident_AlgLeft<int>::name,
    & ident_CmdEmpty<int>::name,
    & ident_CmdiRepeat<int>::name,
    & ident_CmdRepeated<int>::name,
    & ident_CmdiADT<int>::name,
    & ident_CmdADT<int>::name,
    & ident_CmdiName<int>::name,
    & ident_CmdName<int>::name,
    & ident_CmdiChar<int>::name,
    & ident_CmdChar<int>::name,
    & ident_CmdiEStart<int>::name,
    & ident_CmdiEPrepare<int>::name,
    & ident_CmdiSave<int>::name,
    & ident_CmdSave<int>::name,
    & ident_CmdiIdent<int>::name,
    & ident_CmdIdent<int>::name,
    & ident_CmdNumber<int>::name,
    & ident_CmdiBracket<int>::name,
    & ident_CmdBrackets<int>::name
  };
  static const refalrts::RefalNumber numbers[] = {
    256UL
  };
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +20, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( # CmdBrackets s.Direction#1/4 s.Num#1/5 s.NumRanges#1/6 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icIdentLeft, 0, 46, 2},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icsVarLeft, 0, 4, 2},
    {refalrts::icsVarLeft, 0, 5, 2},
    {refalrts::icsVarLeft, 0, 6, 2},
    {refalrts::icEmpty, 0, 0, 2},
    //4: s.Direction#1
    //5: s.Num#1
    //6: s.NumRanges#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 7},
    {refalrts::icIdent, 0, 45, 8},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 9},
    {refalrts::icLinkBrackets, 7, 9, 0},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceSTVar, 0, 0, 6},
    {refalrts::icSpliceSTVar, 0, 0, 5},
    {refalrts::icSpliceSTVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +43, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( # CmdNumber s.Direction#1/4 s.BracketNumber#1/5 s.Number#1/6 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icIdentLeft, 0, 44, 2},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icsVarLeft, 0, 4, 2},
    {refalrts::icsVarLeft, 0, 5, 2},
    {refalrts::icsVarLeft, 0, 6, 2},
    {refalrts::icEmpty, 0, 0, 2},
    //4: s.Direction#1
    //5: s.BracketNumber#1
    //6: s.Number#1
    //16: s.Number#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 7},
    {refalrts::icFunc, 0, 3, 8},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 9},
    {refalrts::icFunc, 0, 2, 10},
    {refalrts::icHugeInt, 0, 0, 11},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 12},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 13},
    {refalrts::icFunc, 0, 1, 14},
    {refalrts::icFunc, 0, 4, 15},
    {refalrts::icCopySTVar, 16, 6, 0},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 17},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 18},
    {refalrts::icPushStack, 0, 0, 18},
    {refalrts::icPushStack, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icPushStack, 0, 0, 17},
    {refalrts::icPushStack, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceSTVar, 0, 0, 16},
    {refalrts::icSpliceSTVar, 0, 0, 5},
    {refalrts::icSpliceSTVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icPushStack, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceSTVar, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +18, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( # CmdIdent s.Direction#1/4 s.BracketNumber#1/5 e.Name#1/2 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icIdentLeft, 0, 43, 2},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icsVarLeft, 0, 4, 2},
    {refalrts::icsVarLeft, 0, 5, 2},
    // closed e.Name#1 as range 2
    //2: e.Name#1
    //4: s.Direction#1
    //5: s.BracketNumber#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icIdent, 0, 42, 7},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 8},
    {refalrts::icLinkBrackets, 6, 8, 0},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceSTVar, 0, 0, 5},
    {refalrts::icSpliceSTVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +18, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( # CmdSave s.OldBracketNumber#1/4 s.NewBracketNumber#1/5 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icIdentLeft, 0, 41, 2},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icsVarLeft, 0, 4, 2},
    {refalrts::icsVarLeft, 0, 5, 2},
    {refalrts::icEmpty, 0, 0, 2},
    //4: s.OldBracketNumber#1
    //5: s.NewBracketNumber#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icIdent, 0, 40, 7},
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
    // ( # CmdiEPrepare s.BracketNum#1/4 s.VarNumber#1/5 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icIdentLeft, 0, 39, 2},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icsVarLeft, 0, 4, 2},
    {refalrts::icsVarLeft, 0, 5, 2},
    {refalrts::icEmpty, 0, 0, 2},
    //4: s.BracketNum#1
    //5: s.VarNumber#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icIdent, 0, 39, 7},
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
    // ( # CmdiEStart s.BracketNum#1/4 s.VarNumber#1/5 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icIdentLeft, 0, 38, 2},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icsVarLeft, 0, 4, 2},
    {refalrts::icsVarLeft, 0, 5, 2},
    {refalrts::icEmpty, 0, 0, 2},
    //4: s.BracketNum#1
    //5: s.VarNumber#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icIdent, 0, 38, 7},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 8},
    {refalrts::icLinkBrackets, 6, 8, 0},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceSTVar, 0, 0, 5},
    {refalrts::icSpliceSTVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +20, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( # CmdChar s.Direction#1/4 s.BracketNumber#1/5 s.Char#1/6 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icIdentLeft, 0, 37, 2},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icsVarLeft, 0, 4, 2},
    {refalrts::icsVarLeft, 0, 5, 2},
    {refalrts::icsVarLeft, 0, 6, 2},
    {refalrts::icEmpty, 0, 0, 2},
    //4: s.Direction#1
    //5: s.BracketNumber#1
    //6: s.Char#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 7},
    {refalrts::icIdent, 0, 36, 8},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 9},
    {refalrts::icLinkBrackets, 7, 9, 0},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceSTVar, 0, 0, 6},
    {refalrts::icSpliceSTVar, 0, 0, 5},
    {refalrts::icSpliceSTVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +18, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( # CmdName s.Direction#1/4 s.BracketNumber#1/5 e.Name#1/2 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icIdentLeft, 0, 35, 2},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icsVarLeft, 0, 4, 2},
    {refalrts::icsVarLeft, 0, 5, 2},
    // closed e.Name#1 as range 2
    //2: e.Name#1
    //4: s.Direction#1
    //5: s.BracketNumber#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icIdent, 0, 34, 7},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 8},
    {refalrts::icLinkBrackets, 6, 8, 0},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceSTVar, 0, 0, 5},
    {refalrts::icSpliceSTVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +20, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( # CmdADT s.Direction#1/4 s.BracketNumber#1/5 s.InnerBrackets#1/6 e.Name#1/2 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icIdentLeft, 0, 33, 2},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icsVarLeft, 0, 4, 2},
    {refalrts::icsVarLeft, 0, 5, 2},
    {refalrts::icsVarLeft, 0, 6, 2},
    // closed e.Name#1 as range 2
    //2: e.Name#1
    //4: s.Direction#1
    //5: s.BracketNumber#1
    //6: s.InnerBrackets#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 7},
    {refalrts::icIdent, 0, 32, 8},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 9},
    {refalrts::icLinkBrackets, 7, 9, 0},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceSTVar, 0, 0, 6},
    {refalrts::icSpliceSTVar, 0, 0, 5},
    {refalrts::icSpliceSTVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +24, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( # CmdRepeated s.Direction#1/4 s.BracketNumber#1/5 s.Mode#1/6 s.VarNum#1/7 s.SampleNum#1/8 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icIdentLeft, 0, 31, 2},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icsVarLeft, 0, 4, 2},
    {refalrts::icsVarLeft, 0, 5, 2},
    {refalrts::icsVarLeft, 0, 6, 2},
    {refalrts::icsVarLeft, 0, 7, 2},
    {refalrts::icsVarLeft, 0, 8, 2},
    {refalrts::icEmpty, 0, 0, 2},
    //4: s.Direction#1
    //5: s.BracketNumber#1
    //6: s.Mode#1
    //7: s.VarNum#1
    //8: s.SampleNum#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 9},
    {refalrts::icIdent, 0, 30, 10},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 11},
    {refalrts::icLinkBrackets, 9, 11, 0},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceSTVar, 0, 0, 8},
    {refalrts::icSpliceSTVar, 0, 0, 7},
    {refalrts::icSpliceSTVar, 0, 0, 6},
    {refalrts::icSpliceSTVar, 0, 0, 5},
    {refalrts::icSpliceSTVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +17, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( # CmdEmpty # AlgLeft s.BracketNumber#1/4 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icIdentLeft, 0, 29, 2},
    {refalrts::icIdentLeft, 0, 28, 2},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icsVarLeft, 0, 4, 2},
    {refalrts::icEmpty, 0, 0, 2},
    //4: s.BracketNumber#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 5},
    {refalrts::icIdent, 0, 27, 6},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 7},
    {refalrts::icLinkBrackets, 5, 7, 0},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceSTVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +22, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( # CmdVar s.Direction#1/4 s.BracketNumber#1/5 s.Mode#1/6 s.VarNumber#1/7 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icIdentLeft, 0, 26, 2},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icsVarLeft, 0, 4, 2},
    {refalrts::icsVarLeft, 0, 5, 2},
    {refalrts::icsVarLeft, 0, 6, 2},
    {refalrts::icsVarLeft, 0, 7, 2},
    {refalrts::icEmpty, 0, 0, 2},
    //4: s.Direction#1
    //5: s.BracketNumber#1
    //6: s.Mode#1
    //7: s.VarNumber#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icIdent, 0, 25, 9},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 10},
    {refalrts::icLinkBrackets, 8, 10, 0},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceSTVar, 0, 0, 7},
    {refalrts::icSpliceSTVar, 0, 0, 6},
    {refalrts::icSpliceSTVar, 0, 0, 5},
    {refalrts::icSpliceSTVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +14, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( # CmdComment e.Text#1/2 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icIdentLeft, 0, 24, 2},
    {refalrts::icEmpty, 0, 0, 0},
    // closed e.Text#1 as range 2
    //2: e.Text#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 4},
    {refalrts::icIdent, 0, 24, 5},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 6},
    {refalrts::icLinkBrackets, 4, 6, 0},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +14, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( # CmdEmptyResult )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icIdentLeft, 0, 23, 2},
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 4},
    {refalrts::icIdent, 0, 22, 5},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 6},
    {refalrts::icLinkBrackets, 4, 6, 0},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +42, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( # CmdAllocateElem s.ElemNo#1/4 # ElNumber s.Number#1/5 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icIdentLeft, 0, 20, 2},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icsVarLeft, 0, 4, 2},
    {refalrts::icIdentLeft, 0, 21, 2},
    {refalrts::icsVarLeft, 0, 5, 2},
    {refalrts::icEmpty, 0, 0, 2},
    //4: s.ElemNo#1
    //5: s.Number#1
    //15: s.Number#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 6},
    {refalrts::icFunc, 0, 3, 7},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 8},
    {refalrts::icFunc, 0, 2, 9},
    {refalrts::icHugeInt, 0, 0, 10},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 11},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 12},
    {refalrts::icFunc, 0, 1, 13},
    {refalrts::icFunc, 0, 0, 14},
    {refalrts::icCopySTVar, 15, 5, 0},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 16},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 17},
    {refalrts::icPushStack, 0, 0, 17},
    {refalrts::icPushStack, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icPushStack, 0, 0, 16},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceSTVar, 0, 0, 15},
    {refalrts::icSpliceSTVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icPushStack, 0, 0, 11},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceSTVar, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +18, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( # CmdAllocateElem s.ElemNo#1/4 s.Type#1/5 e.Info#1/2 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icIdentLeft, 0, 20, 2},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icsVarLeft, 0, 4, 2},
    {refalrts::icsVarLeft, 0, 5, 2},
    // closed e.Info#1 as range 2
    //2: e.Info#1
    //4: s.ElemNo#1
    //5: s.Type#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icIdent, 0, 19, 7},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 8},
    {refalrts::icLinkBrackets, 6, 8, 0},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceSTVar, 0, 0, 5},
    {refalrts::icSpliceSTVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +16, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( # CmdInsertElem s.ElemNo#1/4 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icIdentLeft, 0, 18, 2},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icsVarLeft, 0, 4, 2},
    {refalrts::icEmpty, 0, 0, 2},
    //4: s.ElemNo#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 5},
    {refalrts::icIdent, 0, 17, 6},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 7},
    {refalrts::icLinkBrackets, 5, 7, 0},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceSTVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +16, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( # CmdInsertRange s.ElemNo#1/4 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icIdentLeft, 0, 16, 2},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icsVarLeft, 0, 4, 2},
    {refalrts::icEmpty, 0, 0, 2},
    //4: s.ElemNo#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 5},
    {refalrts::icIdent, 0, 15, 6},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 7},
    {refalrts::icLinkBrackets, 5, 7, 0},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceSTVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +18, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( # CmdInsertVar s.Mode#1/4 s.Number#1/5 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icIdentLeft, 0, 14, 2},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icsVarLeft, 0, 4, 2},
    {refalrts::icsVarLeft, 0, 5, 2},
    {refalrts::icEmpty, 0, 0, 2},
    //4: s.Mode#1
    //5: s.Number#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icIdent, 0, 13, 7},
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
    // ( # CmdLinkBrackets s.Left#1/4 s.Right#1/5 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icIdentLeft, 0, 12, 2},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icsVarLeft, 0, 4, 2},
    {refalrts::icsVarLeft, 0, 5, 2},
    {refalrts::icEmpty, 0, 0, 2},
    //4: s.Left#1
    //5: s.Right#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icIdent, 0, 11, 7},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 8},
    {refalrts::icLinkBrackets, 6, 8, 0},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceSTVar, 0, 0, 5},
    {refalrts::icSpliceSTVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +16, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( # CmdPushStack s.ElemNo#1/4 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icIdentLeft, 0, 10, 2},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icsVarLeft, 0, 4, 2},
    {refalrts::icEmpty, 0, 0, 2},
    //4: s.ElemNo#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 5},
    {refalrts::icIdent, 0, 9, 6},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 7},
    {refalrts::icLinkBrackets, 5, 7, 0},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceSTVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +20, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( # CmdCopyVar s.Mode#1/4 s.Number#1/5 s.Sample#1/6 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icIdentLeft, 0, 8, 2},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icsVarLeft, 0, 4, 2},
    {refalrts::icsVarLeft, 0, 5, 2},
    {refalrts::icsVarLeft, 0, 6, 2},
    {refalrts::icEmpty, 0, 0, 2},
    //4: s.Mode#1
    //5: s.Number#1
    //6: s.Sample#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 7},
    {refalrts::icIdent, 0, 7, 8},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 9},
    {refalrts::icLinkBrackets, 7, 9, 0},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceSTVar, 0, 0, 6},
    {refalrts::icSpliceSTVar, 0, 0, 5},
    {refalrts::icSpliceSTVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +16, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( # CmdiOnFailGoTo s.Offset#1/4 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icIdentLeft, 0, 6, 2},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icsVarLeft, 0, 4, 2},
    {refalrts::icEmpty, 0, 0, 2},
    //4: s.Offset#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 5},
    {refalrts::icIdent, 0, 6, 6},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 7},
    {refalrts::icLinkBrackets, 5, 7, 0},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceSTVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +14, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( # CmdFail )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icIdentLeft, 0, 5, 2},
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 4},
    {refalrts::icIdent, 0, 4, 5},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 6},
    {refalrts::icLinkBrackets, 4, 6, 0},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +14, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( # CmdReturnResult )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icIdentLeft, 0, 3, 2},
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 4},
    {refalrts::icIdent, 0, 2, 5},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 6},
    {refalrts::icLinkBrackets, 4, 6, 0},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( # CmdInitB0 )
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
  int open_e_stack[25];
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
    // ( # CmdBrackets s.Direction#1/4 s.Num#1/5 s.NumRanges#1/6 )
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
    //4: s.Direction#1
    //5: s.Num#1
    //6: s.NumRanges#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[7] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[8], & ident_CmdiBracket<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[9] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[7], context[9] );
    res = refalrts::splice_elem( res, context[9] );
    res = refalrts::splice_stvar( res, context[6] );
    res = refalrts::splice_stvar( res, context[5] );
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
    // ( # CmdNumber s.Direction#1/4 s.BracketNumber#1/5 s.Number#1/6 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdNumber<int>::name, context[2], context[3] ) )
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
    //4: s.Direction#1
    //5: s.BracketNumber#1
    //6: s.Number#1
    //16: s.Number#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[7] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[8], Fetch, "Fetch" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[9] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[10], Compare, "Compare" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_number( context[11], 256UL ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[14], refalrts::create_closure, "refalrts::create_closure" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[15], lambda_ConvertInterpretCommand_0, "lambda_ConvertInterpretCommand_0" ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[16], context[6]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[17] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[18] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[18] );
    refalrts::push_stack( context[7] );
    res = refalrts::splice_elem( res, context[18] );
    refalrts::push_stack( context[17] );
    refalrts::push_stack( context[13] );
    res = refalrts::splice_elem( res, context[17] );
    res = refalrts::splice_stvar( res, context[16] );
    res = refalrts::splice_stvar( res, context[5] );
    res = refalrts::splice_stvar( res, context[4] );
    res = refalrts::splice_elem( res, context[15] );
    res = refalrts::splice_elem( res, context[14] );
    res = refalrts::splice_elem( res, context[13] );
    refalrts::push_stack( context[12] );
    refalrts::push_stack( context[9] );
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_stvar( res, context[6] );
    res = refalrts::splice_elem( res, context[10] );
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
    // ( # CmdIdent s.Direction#1/4 s.BracketNumber#1/5 e.Name#1/2 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdIdent<int>::name, context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[4], context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
      continue;
    // closed e.Name#1 as range 2
    //2: e.Name#1
    //4: s.Direction#1
    //5: s.BracketNumber#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[7], & ident_CmdiIdent<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[8] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[6], context[8] );
    res = refalrts::splice_elem( res, context[8] );
    res = refalrts::splice_evar( res, context[2], context[3] );
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
    // ( # CmdSave s.OldBracketNumber#1/4 s.NewBracketNumber#1/5 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdSave<int>::name, context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[4], context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    //4: s.OldBracketNumber#1
    //5: s.NewBracketNumber#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[7], & ident_CmdiSave<int>::name ) )
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
    // ( # CmdiEPrepare s.BracketNum#1/4 s.VarNumber#1/5 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdiEPrepare<int>::name, context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[4], context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    //4: s.BracketNum#1
    //5: s.VarNumber#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[7], & ident_CmdiEPrepare<int>::name ) )
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
    // ( # CmdiEStart s.BracketNum#1/4 s.VarNumber#1/5 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdiEStart<int>::name, context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[4], context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    //4: s.BracketNum#1
    //5: s.VarNumber#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[7], & ident_CmdiEStart<int>::name ) )
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
    // ( # CmdChar s.Direction#1/4 s.BracketNumber#1/5 s.Char#1/6 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdChar<int>::name, context[2], context[3] ) )
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
    //4: s.Direction#1
    //5: s.BracketNumber#1
    //6: s.Char#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[7] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[8], & ident_CmdiChar<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[9] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[7], context[9] );
    res = refalrts::splice_elem( res, context[9] );
    res = refalrts::splice_stvar( res, context[6] );
    res = refalrts::splice_stvar( res, context[5] );
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
    // ( # CmdName s.Direction#1/4 s.BracketNumber#1/5 e.Name#1/2 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdName<int>::name, context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[4], context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
      continue;
    // closed e.Name#1 as range 2
    //2: e.Name#1
    //4: s.Direction#1
    //5: s.BracketNumber#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[7], & ident_CmdiName<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[8] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[6], context[8] );
    res = refalrts::splice_elem( res, context[8] );
    res = refalrts::splice_evar( res, context[2], context[3] );
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
    // ( # CmdADT s.Direction#1/4 s.BracketNumber#1/5 s.InnerBrackets#1/6 e.Name#1/2 )
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
    // closed e.Name#1 as range 2
    //2: e.Name#1
    //4: s.Direction#1
    //5: s.BracketNumber#1
    //6: s.InnerBrackets#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[7] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[8], & ident_CmdiADT<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[9] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[7], context[9] );
    res = refalrts::splice_elem( res, context[9] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_stvar( res, context[6] );
    res = refalrts::splice_stvar( res, context[5] );
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
    // ( # CmdRepeated s.Direction#1/4 s.BracketNumber#1/5 s.Mode#1/6 s.VarNum#1/7 s.SampleNum#1/8 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdRepeated<int>::name, context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[4], context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[7], context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[8], context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    //4: s.Direction#1
    //5: s.BracketNumber#1
    //6: s.Mode#1
    //7: s.VarNum#1
    //8: s.SampleNum#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[9] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[10], & ident_CmdiRepeat<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[11] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[9], context[11] );
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_stvar( res, context[8] );
    res = refalrts::splice_stvar( res, context[7] );
    res = refalrts::splice_stvar( res, context[6] );
    res = refalrts::splice_stvar( res, context[5] );
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
    // ( # CmdEmpty # AlgLeft s.BracketNumber#1/4 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdEmpty<int>::name, context[2], context[3] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_AlgLeft<int>::name, context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[4], context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    //4: s.BracketNumber#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[5] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[6], & ident_CmdiEmpty<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[7] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[5], context[7] );
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
    // ( # CmdVar s.Direction#1/4 s.BracketNumber#1/5 s.Mode#1/6 s.VarNumber#1/7 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdVar<int>::name, context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[4], context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[7], context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    //4: s.Direction#1
    //5: s.BracketNumber#1
    //6: s.Mode#1
    //7: s.VarNumber#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[9], & ident_CmdiVar<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[10] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[8], context[10] );
    res = refalrts::splice_elem( res, context[10] );
    res = refalrts::splice_stvar( res, context[7] );
    res = refalrts::splice_stvar( res, context[6] );
    res = refalrts::splice_stvar( res, context[5] );
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
    // ( # CmdComment e.Text#1/2 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdComment<int>::name, context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    // closed e.Text#1 as range 2
    //2: e.Text#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[4] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[5], & ident_CmdComment<int>::name ) )
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

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    // ( # CmdEmptyResult )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdEmptyResult<int>::name, context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[4] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[5], & ident_CmdiEmptyResult<int>::name ) )
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
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    // ( # CmdAllocateElem s.ElemNo#1/4 # ElNumber s.Number#1/5 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdAllocateElem<int>::name, context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[4], context[2], context[3] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_ElNumber<int>::name, context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    //4: s.ElemNo#1
    //5: s.Number#1
    //15: s.Number#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[7], Fetch, "Fetch" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[9], Compare, "Compare" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_number( context[10], 256UL ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[13], refalrts::create_closure, "refalrts::create_closure" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[14], lambda_ConvertInterpretCommand_1, "lambda_ConvertInterpretCommand_1" ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[15], context[5]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[17] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[17] );
    refalrts::push_stack( context[6] );
    res = refalrts::splice_elem( res, context[17] );
    refalrts::push_stack( context[16] );
    refalrts::push_stack( context[12] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_stvar( res, context[15] );
    res = refalrts::splice_stvar( res, context[4] );
    res = refalrts::splice_elem( res, context[14] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_elem( res, context[12] );
    refalrts::push_stack( context[11] );
    refalrts::push_stack( context[8] );
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_elem( res, context[10] );
    res = refalrts::splice_stvar( res, context[5] );
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
    // ( # CmdAllocateElem s.ElemNo#1/4 s.Type#1/5 e.Info#1/2 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdAllocateElem<int>::name, context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[4], context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
      continue;
    // closed e.Info#1 as range 2
    //2: e.Info#1
    //4: s.ElemNo#1
    //5: s.Type#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[7], & ident_CmdiAllocateElem<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[8] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[6], context[8] );
    res = refalrts::splice_elem( res, context[8] );
    res = refalrts::splice_evar( res, context[2], context[3] );
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
    // ( # CmdInsertElem s.ElemNo#1/4 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdInsertElem<int>::name, context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[4], context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    //4: s.ElemNo#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[5] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[6], & ident_CmdSpliceElem<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[7] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[5], context[7] );
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
    // ( # CmdInsertRange s.ElemNo#1/4 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdInsertRange<int>::name, context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[4], context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    //4: s.ElemNo#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[5] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[6], & ident_CmdSpliceRange<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[7] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[5], context[7] );
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
    // ( # CmdInsertVar s.Mode#1/4 s.Number#1/5 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdInsertVar<int>::name, context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[4], context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    //4: s.Mode#1
    //5: s.Number#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[7], & ident_CmdArrSplice<int>::name ) )
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
    // ( # CmdLinkBrackets s.Left#1/4 s.Right#1/5 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdLinkBrackets<int>::name, context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[4], context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    //4: s.Left#1
    //5: s.Right#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[7], & ident_CmdiLinkBrackets<int>::name ) )
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
    // ( # CmdPushStack s.ElemNo#1/4 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdPushStack<int>::name, context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[4], context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    //4: s.ElemNo#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[5] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[6], & ident_CmdiPushStack<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[7] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[5], context[7] );
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
    // ( # CmdCopyVar s.Mode#1/4 s.Number#1/5 s.Sample#1/6 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdCopyVar<int>::name, context[2], context[3] ) )
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
    //4: s.Mode#1
    //5: s.Number#1
    //6: s.Sample#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[7] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[8], & ident_CmdArrCopy<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[9] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[7], context[9] );
    res = refalrts::splice_elem( res, context[9] );
    res = refalrts::splice_stvar( res, context[6] );
    res = refalrts::splice_stvar( res, context[5] );
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
    // ( # CmdiOnFailGoTo s.Offset#1/4 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdiOnFailGoTo<int>::name, context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[4], context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    //4: s.Offset#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[5] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[6], & ident_CmdiOnFailGoTo<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[7] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[5], context[7] );
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
    // ( # CmdFail )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdFail<int>::name, context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[4] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[5], & ident_CmdiFail<int>::name ) )
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
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    // ( # CmdReturnResult )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdReturnResult<int>::name, context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[4] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[5], & ident_CmdiReturnResult<int>::name ) )
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
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  refalrts::move_left( context[0], context[1] );
  refalrts::move_left( context[0], context[1] );
  refalrts::move_right( context[0], context[1] );
  // ( # CmdInitB0 )
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::ident_left(  & ident_CmdInitB0<int>::name, context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_bracket( context[4] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[5], & ident_CmdiInitB0<int>::name ) )
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

static refalrts::FnResult RemoveNumber(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 7 elems
  refalrts::Iter context[7];
  refalrts::zeros( context, 7 );
#ifdef INTERPRET
  using refalrts::functions;
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    // ( s.Number#1/4 e.Name#1/2 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icsVarLeft, 0, 4, 2},
    // closed e.Name#1 as range 2
    //2: e.Name#1
    //4: s.Number#1
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
  // ( s.Number#1/4 e.Name#1/2 )
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[4], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Name#1 as range 2
  //2: e.Name#1
  //4: s.Number#1

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

static refalrts::FnResult lambda_OutlineConstants_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
#ifdef INTERPRET
  using refalrts::functions;
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    // ( s.Id#2/4 s.Value#2/5 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icsVarLeft, 0, 4, 2},
    {refalrts::icsVarLeft, 0, 5, 2},
    {refalrts::icEmpty, 0, 0, 2},
    //4: s.Id#2
    //5: s.Value#2
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icSpliceSTVar, 0, 0, 5},
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
  // ( s.Id#2/4 s.Value#2/5 )
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
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //4: s.Id#2
  //5: s.Value#2

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  res = refalrts::splice_stvar( res, context[5] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult OutlineConstants(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 42 elems
  refalrts::Iter context[42];
  refalrts::zeros( context, 42 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { OutlineConstants, "OutlineConstants" },
    { Inc, "Inc" },
    { RemoveNumber, "RemoveNumber" },
    { Map, "Map" },
    { lambda_OutlineConstants_0, "lambda_OutlineConstants_0" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_ElString<int>::name,
    & ident_CmdiAllocateElem<int>::name,
    & ident_ElHugeNumber<int>::name,
    & ident_CmdiHugeNum<int>::name,
    & ident_ElIdent<int>::name,
    & ident_CmdiIdent<int>::name,
    & ident_CmdiADT<int>::name,
    & ident_ElName<int>::name,
    & ident_CmdiName<int>::name,
    & ident_CmdiStringArray<int>::name,
    & ident_CmdiNumberArray<int>::name,
    & ident_CmdiLabelArray<int>::name,
    & ident_CmdiFuncArray<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +84, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( s.NextFunc#1/10 e.Funcs#1/2 ) ( s.NextLabel#1/11 e.Labels#1/4 ) ( s.NextNumber#1/12 e.Numbers#1/6 ) ( s.NextString#1/13 e.Strings#1/8 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icBracketLeft, 0, 6, 0},
    {refalrts::icBracketLeft, 0, 8, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icsVarLeft, 0, 10, 2},
    // closed e.Funcs#1 as range 2
    {refalrts::icsVarLeft, 0, 11, 4},
    // closed e.Labels#1 as range 4
    {refalrts::icsVarLeft, 0, 12, 6},
    // closed e.Numbers#1 as range 6
    {refalrts::icsVarLeft, 0, 13, 8},
    // closed e.Strings#1 as range 8
    //2: e.Funcs#1
    //4: e.Labels#1
    //6: e.Numbers#1
    //8: e.Strings#1
    //10: s.NextFunc#1
    //11: s.NextLabel#1
    //12: s.NextNumber#1
    //13: s.NextString#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 14},
    {refalrts::icIdent, 0, 12, 15},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 16},
    {refalrts::icFunc, 0, 3, 17},
    {refalrts::icFunc, 0, 2, 18},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 19},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 20},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 21},
    {refalrts::icIdent, 0, 11, 22},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 23},
    {refalrts::icFunc, 0, 3, 24},
    {refalrts::icFunc, 0, 2, 25},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 26},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 27},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 28},
    {refalrts::icIdent, 0, 10, 29},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 30},
    {refalrts::icFunc, 0, 3, 31},
    {refalrts::icFunc, 0, 4, 32},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 33},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 34},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 35},
    {refalrts::icIdent, 0, 9, 36},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 37},
    {refalrts::icFunc, 0, 3, 38},
    {refalrts::icFunc, 0, 2, 39},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 40},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 41},
    {refalrts::icLinkBrackets, 35, 41, 0},
    {refalrts::icSpliceElem, 0, 0, 41},
    {refalrts::icPushStack, 0, 0, 40},
    {refalrts::icPushStack, 0, 0, 37},
    {refalrts::icSpliceElem, 0, 0, 40},
    {refalrts::icSpliceEVar, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 39},
    {refalrts::icSpliceElem, 0, 0, 38},
    {refalrts::icSpliceElem, 0, 0, 37},
    {refalrts::icSpliceElem, 0, 0, 36},
    {refalrts::icSpliceElem, 0, 0, 35},
    {refalrts::icLinkBrackets, 28, 34, 0},
    {refalrts::icSpliceElem, 0, 0, 34},
    {refalrts::icPushStack, 0, 0, 33},
    {refalrts::icPushStack, 0, 0, 30},
    {refalrts::icSpliceElem, 0, 0, 33},
    {refalrts::icSpliceEVar, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 32},
    {refalrts::icSpliceElem, 0, 0, 31},
    {refalrts::icSpliceElem, 0, 0, 30},
    {refalrts::icSpliceElem, 0, 0, 29},
    {refalrts::icSpliceElem, 0, 0, 28},
    {refalrts::icLinkBrackets, 21, 27, 0},
    {refalrts::icSpliceElem, 0, 0, 27},
    {refalrts::icPushStack, 0, 0, 26},
    {refalrts::icPushStack, 0, 0, 23},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icSpliceEVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icLinkBrackets, 14, 20, 0},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icPushStack, 0, 0, 19},
    {refalrts::icPushStack, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +72, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( s.NextFunc#1/12 e.Funcs_B#1/15 ( s.Num#1/21 e.Func#1/19 ) e.Funcs_E#1/22 ) ( e.Labels#1/4 ) ( e.Numbers#1/6 ) ( e.Strings#1/8 ) e.Commands#1/0 ( # CmdiName s.Direction#1/13 s.BracketNum#1/14 e.Func#1/10 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icBracketLeft, 0, 6, 0},
    {refalrts::icBracketLeft, 0, 8, 0},
    {refalrts::icBracketRight, 0, 10, 0},
    {refalrts::icIdentLeft, 0, 8, 10},
    // closed e.Labels#1 as range 4
    // closed e.Numbers#1 as range 6
    // closed e.Strings#1 as range 8
    // closed e.Commands#1 as range 0
    {refalrts::icsVarLeft, 0, 12, 2},
    {refalrts::icsVarLeft, 0, 13, 10},
    {refalrts::icsVarLeft, 0, 14, 10},
    // closed e.Func#1 as range 10
    {refalrts::icEPrepare, 0, 15, 2},
    {refalrts::icEStart, 0, 15, 2},
    {refalrts::icSave, 0, 22, 2},
    {refalrts::icBracketLeft, 0, 17, 22},
    {refalrts::iceRepeatRight, 19, 10, 17},
    // closed e.Funcs_E#1 as range 2
    {refalrts::icsVarLeft, 0, 21, 17},
    {refalrts::icEmpty, 0, 0, 17},
    //0: e.Commands#1
    //4: e.Labels#1
    //6: e.Numbers#1
    //8: e.Strings#1
    //10: e.Func#1
    //12: s.NextFunc#1
    //13: s.Direction#1
    //14: s.BracketNum#1
    //15: e.Funcs_B#1
    //19: e.Func#1
    //21: s.Num#1
    //22: e.Funcs_E#1
    //39: s.Num#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 24},
    {refalrts::icFunc, 0, 0, 25},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 26},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 27},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 28},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 29},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 30},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 31},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 32},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 33},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 34},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 35},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 36},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 37},
    {refalrts::icIdent, 0, 8, 38},
    {refalrts::icCopySTVar, 39, 21, 0},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 40},
    {refalrts::icLinkBrackets, 37, 40, 0},
    {refalrts::icSpliceElem, 0, 0, 40},
    {refalrts::icSpliceSTVar, 0, 0, 39},
    {refalrts::icSpliceSTVar, 0, 0, 14},
    {refalrts::icSpliceSTVar, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 38},
    {refalrts::icSpliceElem, 0, 0, 37},
    {refalrts::icPushStack, 0, 0, 36},
    {refalrts::icPushStack, 0, 0, 24},
    {refalrts::icSpliceElem, 0, 0, 36},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icLinkBrackets, 34, 35, 0},
    {refalrts::icSpliceElem, 0, 0, 35},
    {refalrts::icSpliceEVar, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 34},
    {refalrts::icLinkBrackets, 32, 33, 0},
    {refalrts::icSpliceElem, 0, 0, 33},
    {refalrts::icSpliceEVar, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 32},
    {refalrts::icLinkBrackets, 30, 31, 0},
    {refalrts::icSpliceElem, 0, 0, 31},
    {refalrts::icSpliceEVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 30},
    {refalrts::icLinkBrackets, 26, 29, 0},
    {refalrts::icSpliceElem, 0, 0, 29},
    {refalrts::icSpliceEVar, 0, 0, 22},
    {refalrts::icLinkBrackets, 27, 28, 0},
    {refalrts::icSpliceElem, 0, 0, 28},
    {refalrts::icSpliceEVar, 0, 0, 10},
    {refalrts::icSpliceSTVar, 0, 0, 21},
    {refalrts::icSpliceElem, 0, 0, 27},
    {refalrts::icSpliceEVar, 0, 0, 15},
    {refalrts::icSpliceSTVar, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +73, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( s.NextFunc#1/12 e.Funcs#1/2 ) ( e.Labels#1/4 ) ( e.Numbers#1/6 ) ( e.Strings#1/8 ) e.Commands#1/0 ( # CmdiName s.Direction#1/13 s.BracketNum#1/14 e.Func#1/10 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icBracketLeft, 0, 6, 0},
    {refalrts::icBracketLeft, 0, 8, 0},
    {refalrts::icBracketRight, 0, 10, 0},
    {refalrts::icIdentLeft, 0, 8, 10},
    // closed e.Labels#1 as range 4
    // closed e.Numbers#1 as range 6
    // closed e.Strings#1 as range 8
    // closed e.Commands#1 as range 0
    {refalrts::icsVarLeft, 0, 12, 2},
    // closed e.Funcs#1 as range 2
    {refalrts::icsVarLeft, 0, 13, 10},
    {refalrts::icsVarLeft, 0, 14, 10},
    // closed e.Func#1 as range 10
    //0: e.Commands#1
    //2: e.Funcs#1
    //4: e.Labels#1
    //6: e.Numbers#1
    //8: e.Strings#1
    //10: e.Func#1
    //12: s.NextFunc#1
    //13: s.Direction#1
    //14: s.BracketNum#1
    //22: s.NextFunc#1
    //34: s.NextFunc#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 15},
    {refalrts::icFunc, 0, 0, 16},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 17},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 18},
    {refalrts::icFunc, 0, 1, 19},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 20},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 21},
    {refalrts::icCopySTVar, 22, 12, 0},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 23},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 24},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 25},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 26},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 27},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 28},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 29},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 30},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 31},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 32},
    {refalrts::icIdent, 0, 8, 33},
    {refalrts::icCopySTVar, 34, 22, 0},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 35},
    {refalrts::icLinkBrackets, 32, 35, 0},
    {refalrts::icSpliceElem, 0, 0, 35},
    {refalrts::icSpliceSTVar, 0, 0, 34},
    {refalrts::icSpliceSTVar, 0, 0, 14},
    {refalrts::icSpliceSTVar, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 33},
    {refalrts::icSpliceElem, 0, 0, 32},
    {refalrts::icPushStack, 0, 0, 31},
    {refalrts::icPushStack, 0, 0, 15},
    {refalrts::icSpliceElem, 0, 0, 31},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icLinkBrackets, 29, 30, 0},
    {refalrts::icSpliceElem, 0, 0, 30},
    {refalrts::icSpliceEVar, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 29},
    {refalrts::icLinkBrackets, 27, 28, 0},
    {refalrts::icSpliceElem, 0, 0, 28},
    {refalrts::icSpliceEVar, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 27},
    {refalrts::icLinkBrackets, 25, 26, 0},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icSpliceEVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icLinkBrackets, 17, 24, 0},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icLinkBrackets, 21, 23, 0},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icSpliceEVar, 0, 0, 10},
    {refalrts::icSpliceSTVar, 0, 0, 22},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icPushStack, 0, 0, 20},
    {refalrts::icPushStack, 0, 0, 18},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceSTVar, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +73, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( s.NextFunc#1/12 e.Funcs_B#1/14 ( s.Num#1/20 e.Func#1/18 ) e.Funcs_E#1/21 ) ( e.Labels#1/4 ) ( e.Numbers#1/6 ) ( e.Strings#1/8 ) e.Commands#1/0 ( # CmdiAllocateElem s.ElemNo#1/13 # ElName e.Func#1/10 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icBracketLeft, 0, 6, 0},
    {refalrts::icBracketLeft, 0, 8, 0},
    {refalrts::icBracketRight, 0, 10, 0},
    {refalrts::icIdentLeft, 0, 1, 10},
    // closed e.Labels#1 as range 4
    // closed e.Numbers#1 as range 6
    // closed e.Strings#1 as range 8
    // closed e.Commands#1 as range 0
    {refalrts::icsVarLeft, 0, 12, 2},
    {refalrts::icsVarLeft, 0, 13, 10},
    {refalrts::icIdentLeft, 0, 7, 10},
    // closed e.Func#1 as range 10
    {refalrts::icEPrepare, 0, 14, 2},
    {refalrts::icEStart, 0, 14, 2},
    {refalrts::icSave, 0, 21, 2},
    {refalrts::icBracketLeft, 0, 16, 21},
    {refalrts::iceRepeatRight, 18, 10, 16},
    // closed e.Funcs_E#1 as range 2
    {refalrts::icsVarLeft, 0, 20, 16},
    {refalrts::icEmpty, 0, 0, 16},
    //0: e.Commands#1
    //4: e.Labels#1
    //6: e.Numbers#1
    //8: e.Strings#1
    //10: e.Func#1
    //12: s.NextFunc#1
    //13: s.ElemNo#1
    //14: e.Funcs_B#1
    //18: e.Func#1
    //20: s.Num#1
    //21: e.Funcs_E#1
    //39: s.Num#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 23},
    {refalrts::icFunc, 0, 0, 24},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 25},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 26},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 27},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 28},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 29},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 30},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 31},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 32},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 33},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 34},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 35},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 36},
    {refalrts::icIdent, 0, 1, 37},
    {refalrts::icIdent, 0, 7, 38},
    {refalrts::icCopySTVar, 39, 20, 0},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 40},
    {refalrts::icLinkBrackets, 36, 40, 0},
    {refalrts::icSpliceElem, 0, 0, 40},
    {refalrts::icSpliceSTVar, 0, 0, 39},
    {refalrts::icSpliceElem, 0, 0, 38},
    {refalrts::icSpliceSTVar, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 37},
    {refalrts::icSpliceElem, 0, 0, 36},
    {refalrts::icPushStack, 0, 0, 35},
    {refalrts::icPushStack, 0, 0, 23},
    {refalrts::icSpliceElem, 0, 0, 35},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icLinkBrackets, 33, 34, 0},
    {refalrts::icSpliceElem, 0, 0, 34},
    {refalrts::icSpliceEVar, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 33},
    {refalrts::icLinkBrackets, 31, 32, 0},
    {refalrts::icSpliceElem, 0, 0, 32},
    {refalrts::icSpliceEVar, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 31},
    {refalrts::icLinkBrackets, 29, 30, 0},
    {refalrts::icSpliceElem, 0, 0, 30},
    {refalrts::icSpliceEVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 29},
    {refalrts::icLinkBrackets, 25, 28, 0},
    {refalrts::icSpliceElem, 0, 0, 28},
    {refalrts::icSpliceEVar, 0, 0, 21},
    {refalrts::icLinkBrackets, 26, 27, 0},
    {refalrts::icSpliceElem, 0, 0, 27},
    {refalrts::icSpliceEVar, 0, 0, 10},
    {refalrts::icSpliceSTVar, 0, 0, 20},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icSpliceEVar, 0, 0, 14},
    {refalrts::icSpliceSTVar, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +74, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( s.NextFunc#1/12 e.Funcs#1/2 ) ( e.Labels#1/4 ) ( e.Numbers#1/6 ) ( e.Strings#1/8 ) e.Commands#1/0 ( # CmdiAllocateElem s.ElemNo#1/13 # ElName e.Func#1/10 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icBracketLeft, 0, 6, 0},
    {refalrts::icBracketLeft, 0, 8, 0},
    {refalrts::icBracketRight, 0, 10, 0},
    {refalrts::icIdentLeft, 0, 1, 10},
    // closed e.Labels#1 as range 4
    // closed e.Numbers#1 as range 6
    // closed e.Strings#1 as range 8
    // closed e.Commands#1 as range 0
    {refalrts::icsVarLeft, 0, 12, 2},
    // closed e.Funcs#1 as range 2
    {refalrts::icsVarLeft, 0, 13, 10},
    {refalrts::icIdentLeft, 0, 7, 10},
    // closed e.Func#1 as range 10
    //0: e.Commands#1
    //2: e.Funcs#1
    //4: e.Labels#1
    //6: e.Numbers#1
    //8: e.Strings#1
    //10: e.Func#1
    //12: s.NextFunc#1
    //13: s.ElemNo#1
    //21: s.NextFunc#1
    //34: s.NextFunc#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 14},
    {refalrts::icFunc, 0, 0, 15},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 16},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 17},
    {refalrts::icFunc, 0, 1, 18},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 19},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 20},
    {refalrts::icCopySTVar, 21, 12, 0},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 22},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 23},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 24},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 25},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 26},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 27},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 28},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 29},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 30},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 31},
    {refalrts::icIdent, 0, 1, 32},
    {refalrts::icIdent, 0, 7, 33},
    {refalrts::icCopySTVar, 34, 21, 0},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 35},
    {refalrts::icLinkBrackets, 31, 35, 0},
    {refalrts::icSpliceElem, 0, 0, 35},
    {refalrts::icSpliceSTVar, 0, 0, 34},
    {refalrts::icSpliceElem, 0, 0, 33},
    {refalrts::icSpliceSTVar, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 32},
    {refalrts::icSpliceElem, 0, 0, 31},
    {refalrts::icPushStack, 0, 0, 30},
    {refalrts::icPushStack, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 30},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icLinkBrackets, 28, 29, 0},
    {refalrts::icSpliceElem, 0, 0, 29},
    {refalrts::icSpliceEVar, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 28},
    {refalrts::icLinkBrackets, 26, 27, 0},
    {refalrts::icSpliceElem, 0, 0, 27},
    {refalrts::icSpliceEVar, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icLinkBrackets, 24, 25, 0},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icSpliceEVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icLinkBrackets, 16, 23, 0},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icLinkBrackets, 20, 22, 0},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceEVar, 0, 0, 10},
    {refalrts::icSpliceSTVar, 0, 0, 21},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icPushStack, 0, 0, 19},
    {refalrts::icPushStack, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceSTVar, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +74, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( s.NextFunc#1/12 e.Funcs_B#1/16 ( s.Num#1/22 e.Func#1/20 ) e.Funcs_E#1/23 ) ( e.Labels#1/4 ) ( e.Numbers#1/6 ) ( e.Strings#1/8 ) e.Commands#1/0 ( # CmdiADT s.Direction#1/13 s.BracketNum#1/14 s.InnerBrackets#1/15 e.Func#1/10 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icBracketLeft, 0, 6, 0},
    {refalrts::icBracketLeft, 0, 8, 0},
    {refalrts::icBracketRight, 0, 10, 0},
    {refalrts::icIdentLeft, 0, 6, 10},
    // closed e.Labels#1 as range 4
    // closed e.Numbers#1 as range 6
    // closed e.Strings#1 as range 8
    // closed e.Commands#1 as range 0
    {refalrts::icsVarLeft, 0, 12, 2},
    {refalrts::icsVarLeft, 0, 13, 10},
    {refalrts::icsVarLeft, 0, 14, 10},
    {refalrts::icsVarLeft, 0, 15, 10},
    // closed e.Func#1 as range 10
    {refalrts::icEPrepare, 0, 16, 2},
    {refalrts::icEStart, 0, 16, 2},
    {refalrts::icSave, 0, 23, 2},
    {refalrts::icBracketLeft, 0, 18, 23},
    {refalrts::iceRepeatRight, 20, 10, 18},
    // closed e.Funcs_E#1 as range 2
    {refalrts::icsVarLeft, 0, 22, 18},
    {refalrts::icEmpty, 0, 0, 18},
    //0: e.Commands#1
    //4: e.Labels#1
    //6: e.Numbers#1
    //8: e.Strings#1
    //10: e.Func#1
    //12: s.NextFunc#1
    //13: s.Direction#1
    //14: s.BracketNum#1
    //15: s.InnerBrackets#1
    //16: e.Funcs_B#1
    //20: e.Func#1
    //22: s.Num#1
    //23: e.Funcs_E#1
    //40: s.Num#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 25},
    {refalrts::icFunc, 0, 0, 26},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 27},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 28},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 29},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 30},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 31},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 32},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 33},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 34},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 35},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 36},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 37},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 38},
    {refalrts::icIdent, 0, 6, 39},
    {refalrts::icCopySTVar, 40, 22, 0},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 41},
    {refalrts::icLinkBrackets, 38, 41, 0},
    {refalrts::icSpliceElem, 0, 0, 41},
    {refalrts::icSpliceSTVar, 0, 0, 40},
    {refalrts::icSpliceSTVar, 0, 0, 15},
    {refalrts::icSpliceSTVar, 0, 0, 14},
    {refalrts::icSpliceSTVar, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 39},
    {refalrts::icSpliceElem, 0, 0, 38},
    {refalrts::icPushStack, 0, 0, 37},
    {refalrts::icPushStack, 0, 0, 25},
    {refalrts::icSpliceElem, 0, 0, 37},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icLinkBrackets, 35, 36, 0},
    {refalrts::icSpliceElem, 0, 0, 36},
    {refalrts::icSpliceEVar, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 35},
    {refalrts::icLinkBrackets, 33, 34, 0},
    {refalrts::icSpliceElem, 0, 0, 34},
    {refalrts::icSpliceEVar, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 33},
    {refalrts::icLinkBrackets, 31, 32, 0},
    {refalrts::icSpliceElem, 0, 0, 32},
    {refalrts::icSpliceEVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 31},
    {refalrts::icLinkBrackets, 27, 30, 0},
    {refalrts::icSpliceElem, 0, 0, 30},
    {refalrts::icSpliceEVar, 0, 0, 23},
    {refalrts::icLinkBrackets, 28, 29, 0},
    {refalrts::icSpliceElem, 0, 0, 29},
    {refalrts::icSpliceEVar, 0, 0, 10},
    {refalrts::icSpliceSTVar, 0, 0, 22},
    {refalrts::icSpliceElem, 0, 0, 28},
    {refalrts::icSpliceEVar, 0, 0, 16},
    {refalrts::icSpliceSTVar, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 27},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +75, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( s.NextFunc#1/12 e.Funcs#1/2 ) ( e.Labels#1/4 ) ( e.Numbers#1/6 ) ( e.Strings#1/8 ) e.Commands#1/0 ( # CmdiADT s.Direction#1/13 s.BracketNum#1/14 s.InnerBrackets#1/15 e.Func#1/10 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icBracketLeft, 0, 6, 0},
    {refalrts::icBracketLeft, 0, 8, 0},
    {refalrts::icBracketRight, 0, 10, 0},
    {refalrts::icIdentLeft, 0, 6, 10},
    // closed e.Labels#1 as range 4
    // closed e.Numbers#1 as range 6
    // closed e.Strings#1 as range 8
    // closed e.Commands#1 as range 0
    {refalrts::icsVarLeft, 0, 12, 2},
    // closed e.Funcs#1 as range 2
    {refalrts::icsVarLeft, 0, 13, 10},
    {refalrts::icsVarLeft, 0, 14, 10},
    {refalrts::icsVarLeft, 0, 15, 10},
    // closed e.Func#1 as range 10
    //0: e.Commands#1
    //2: e.Funcs#1
    //4: e.Labels#1
    //6: e.Numbers#1
    //8: e.Strings#1
    //10: e.Func#1
    //12: s.NextFunc#1
    //13: s.Direction#1
    //14: s.BracketNum#1
    //15: s.InnerBrackets#1
    //23: s.NextFunc#1
    //35: s.NextFunc#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 16},
    {refalrts::icFunc, 0, 0, 17},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 18},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 19},
    {refalrts::icFunc, 0, 1, 20},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 21},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 22},
    {refalrts::icCopySTVar, 23, 12, 0},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 24},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 25},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 26},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 27},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 28},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 29},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 30},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 31},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 32},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 33},
    {refalrts::icIdent, 0, 6, 34},
    {refalrts::icCopySTVar, 35, 23, 0},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 36},
    {refalrts::icLinkBrackets, 33, 36, 0},
    {refalrts::icSpliceElem, 0, 0, 36},
    {refalrts::icSpliceSTVar, 0, 0, 35},
    {refalrts::icSpliceSTVar, 0, 0, 15},
    {refalrts::icSpliceSTVar, 0, 0, 14},
    {refalrts::icSpliceSTVar, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 34},
    {refalrts::icSpliceElem, 0, 0, 33},
    {refalrts::icPushStack, 0, 0, 32},
    {refalrts::icPushStack, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 32},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icLinkBrackets, 30, 31, 0},
    {refalrts::icSpliceElem, 0, 0, 31},
    {refalrts::icSpliceEVar, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 30},
    {refalrts::icLinkBrackets, 28, 29, 0},
    {refalrts::icSpliceElem, 0, 0, 29},
    {refalrts::icSpliceEVar, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 28},
    {refalrts::icLinkBrackets, 26, 27, 0},
    {refalrts::icSpliceElem, 0, 0, 27},
    {refalrts::icSpliceEVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icLinkBrackets, 18, 25, 0},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icLinkBrackets, 22, 24, 0},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icSpliceEVar, 0, 0, 10},
    {refalrts::icSpliceSTVar, 0, 0, 23},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icPushStack, 0, 0, 21},
    {refalrts::icPushStack, 0, 0, 19},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceSTVar, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +72, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Funcs#1/2 ) ( s.NextLabel#1/12 e.Labels_B#1/15 ( s.Num#1/21 e.Label#1/19 ) e.Labels_E#1/22 ) ( e.Numbers#1/6 ) ( e.Strings#1/8 ) e.Commands#1/0 ( # CmdiIdent s.Direction#1/13 s.BracketNum#1/14 e.Label#1/10 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icBracketLeft, 0, 6, 0},
    {refalrts::icBracketLeft, 0, 8, 0},
    {refalrts::icBracketRight, 0, 10, 0},
    {refalrts::icIdentLeft, 0, 5, 10},
    // closed e.Funcs#1 as range 2
    // closed e.Numbers#1 as range 6
    // closed e.Strings#1 as range 8
    // closed e.Commands#1 as range 0
    {refalrts::icsVarLeft, 0, 12, 4},
    {refalrts::icsVarLeft, 0, 13, 10},
    {refalrts::icsVarLeft, 0, 14, 10},
    // closed e.Label#1 as range 10
    {refalrts::icEPrepare, 0, 15, 4},
    {refalrts::icEStart, 0, 15, 4},
    {refalrts::icSave, 0, 22, 4},
    {refalrts::icBracketLeft, 0, 17, 22},
    {refalrts::iceRepeatRight, 19, 10, 17},
    // closed e.Labels_E#1 as range 4
    {refalrts::icsVarLeft, 0, 21, 17},
    {refalrts::icEmpty, 0, 0, 17},
    //0: e.Commands#1
    //2: e.Funcs#1
    //6: e.Numbers#1
    //8: e.Strings#1
    //10: e.Label#1
    //12: s.NextLabel#1
    //13: s.Direction#1
    //14: s.BracketNum#1
    //15: e.Labels_B#1
    //19: e.Label#1
    //21: s.Num#1
    //22: e.Labels_E#1
    //39: s.Num#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 24},
    {refalrts::icFunc, 0, 0, 25},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 26},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 27},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 28},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 29},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 30},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 31},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 32},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 33},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 34},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 35},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 36},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 37},
    {refalrts::icIdent, 0, 5, 38},
    {refalrts::icCopySTVar, 39, 21, 0},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 40},
    {refalrts::icLinkBrackets, 37, 40, 0},
    {refalrts::icSpliceElem, 0, 0, 40},
    {refalrts::icSpliceSTVar, 0, 0, 39},
    {refalrts::icSpliceSTVar, 0, 0, 14},
    {refalrts::icSpliceSTVar, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 38},
    {refalrts::icSpliceElem, 0, 0, 37},
    {refalrts::icPushStack, 0, 0, 36},
    {refalrts::icPushStack, 0, 0, 24},
    {refalrts::icSpliceElem, 0, 0, 36},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icLinkBrackets, 34, 35, 0},
    {refalrts::icSpliceElem, 0, 0, 35},
    {refalrts::icSpliceEVar, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 34},
    {refalrts::icLinkBrackets, 32, 33, 0},
    {refalrts::icSpliceElem, 0, 0, 33},
    {refalrts::icSpliceEVar, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 32},
    {refalrts::icLinkBrackets, 28, 31, 0},
    {refalrts::icSpliceElem, 0, 0, 31},
    {refalrts::icSpliceEVar, 0, 0, 22},
    {refalrts::icLinkBrackets, 29, 30, 0},
    {refalrts::icSpliceElem, 0, 0, 30},
    {refalrts::icSpliceEVar, 0, 0, 10},
    {refalrts::icSpliceSTVar, 0, 0, 21},
    {refalrts::icSpliceElem, 0, 0, 29},
    {refalrts::icSpliceEVar, 0, 0, 15},
    {refalrts::icSpliceSTVar, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 28},
    {refalrts::icLinkBrackets, 26, 27, 0},
    {refalrts::icSpliceElem, 0, 0, 27},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +73, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Funcs#1/2 ) ( s.NextLabel#1/12 e.Labels#1/4 ) ( e.Numbers#1/6 ) ( e.Strings#1/8 ) e.Commands#1/0 ( # CmdiIdent s.Direction#1/13 s.BracketNum#1/14 e.Label#1/10 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icBracketLeft, 0, 6, 0},
    {refalrts::icBracketLeft, 0, 8, 0},
    {refalrts::icBracketRight, 0, 10, 0},
    {refalrts::icIdentLeft, 0, 5, 10},
    // closed e.Funcs#1 as range 2
    // closed e.Numbers#1 as range 6
    // closed e.Strings#1 as range 8
    // closed e.Commands#1 as range 0
    {refalrts::icsVarLeft, 0, 12, 4},
    // closed e.Labels#1 as range 4
    {refalrts::icsVarLeft, 0, 13, 10},
    {refalrts::icsVarLeft, 0, 14, 10},
    // closed e.Label#1 as range 10
    //0: e.Commands#1
    //2: e.Funcs#1
    //4: e.Labels#1
    //6: e.Numbers#1
    //8: e.Strings#1
    //10: e.Label#1
    //12: s.NextLabel#1
    //13: s.Direction#1
    //14: s.BracketNum#1
    //24: s.NextLabel#1
    //34: s.NextLabel#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 15},
    {refalrts::icFunc, 0, 0, 16},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 17},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 18},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 19},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 20},
    {refalrts::icFunc, 0, 1, 21},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 22},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 23},
    {refalrts::icCopySTVar, 24, 12, 0},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 25},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 26},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 27},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 28},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 29},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 30},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 31},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 32},
    {refalrts::icIdent, 0, 5, 33},
    {refalrts::icCopySTVar, 34, 24, 0},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 35},
    {refalrts::icLinkBrackets, 32, 35, 0},
    {refalrts::icSpliceElem, 0, 0, 35},
    {refalrts::icSpliceSTVar, 0, 0, 34},
    {refalrts::icSpliceSTVar, 0, 0, 14},
    {refalrts::icSpliceSTVar, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 33},
    {refalrts::icSpliceElem, 0, 0, 32},
    {refalrts::icPushStack, 0, 0, 31},
    {refalrts::icPushStack, 0, 0, 15},
    {refalrts::icSpliceElem, 0, 0, 31},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icLinkBrackets, 29, 30, 0},
    {refalrts::icSpliceElem, 0, 0, 30},
    {refalrts::icSpliceEVar, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 29},
    {refalrts::icLinkBrackets, 27, 28, 0},
    {refalrts::icSpliceElem, 0, 0, 28},
    {refalrts::icSpliceEVar, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 27},
    {refalrts::icLinkBrackets, 19, 26, 0},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icLinkBrackets, 23, 25, 0},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icSpliceEVar, 0, 0, 10},
    {refalrts::icSpliceSTVar, 0, 0, 24},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icSpliceEVar, 0, 0, 4},
    {refalrts::icPushStack, 0, 0, 22},
    {refalrts::icPushStack, 0, 0, 20},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceSTVar, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icLinkBrackets, 17, 18, 0},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +73, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Funcs#1/2 ) ( s.NextLabel#1/12 e.Labels_B#1/14 ( s.Num#1/20 e.Label#1/18 ) e.Labels_E#1/21 ) ( e.Numbers#1/6 ) ( e.Strings#1/8 ) e.Commands#1/0 ( # CmdiAllocateElem s.ElemNo#1/13 # ElIdent e.Label#1/10 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icBracketLeft, 0, 6, 0},
    {refalrts::icBracketLeft, 0, 8, 0},
    {refalrts::icBracketRight, 0, 10, 0},
    {refalrts::icIdentLeft, 0, 1, 10},
    // closed e.Funcs#1 as range 2
    // closed e.Numbers#1 as range 6
    // closed e.Strings#1 as range 8
    // closed e.Commands#1 as range 0
    {refalrts::icsVarLeft, 0, 12, 4},
    {refalrts::icsVarLeft, 0, 13, 10},
    {refalrts::icIdentLeft, 0, 4, 10},
    // closed e.Label#1 as range 10
    {refalrts::icEPrepare, 0, 14, 4},
    {refalrts::icEStart, 0, 14, 4},
    {refalrts::icSave, 0, 21, 4},
    {refalrts::icBracketLeft, 0, 16, 21},
    {refalrts::iceRepeatRight, 18, 10, 16},
    // closed e.Labels_E#1 as range 4
    {refalrts::icsVarLeft, 0, 20, 16},
    {refalrts::icEmpty, 0, 0, 16},
    //0: e.Commands#1
    //2: e.Funcs#1
    //6: e.Numbers#1
    //8: e.Strings#1
    //10: e.Label#1
    //12: s.NextLabel#1
    //13: s.ElemNo#1
    //14: e.Labels_B#1
    //18: e.Label#1
    //20: s.Num#1
    //21: e.Labels_E#1
    //39: s.Num#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 23},
    {refalrts::icFunc, 0, 0, 24},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 25},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 26},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 27},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 28},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 29},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 30},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 31},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 32},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 33},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 34},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 35},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 36},
    {refalrts::icIdent, 0, 1, 37},
    {refalrts::icIdent, 0, 4, 38},
    {refalrts::icCopySTVar, 39, 20, 0},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 40},
    {refalrts::icLinkBrackets, 36, 40, 0},
    {refalrts::icSpliceElem, 0, 0, 40},
    {refalrts::icSpliceSTVar, 0, 0, 39},
    {refalrts::icSpliceElem, 0, 0, 38},
    {refalrts::icSpliceSTVar, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 37},
    {refalrts::icSpliceElem, 0, 0, 36},
    {refalrts::icPushStack, 0, 0, 35},
    {refalrts::icPushStack, 0, 0, 23},
    {refalrts::icSpliceElem, 0, 0, 35},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icLinkBrackets, 33, 34, 0},
    {refalrts::icSpliceElem, 0, 0, 34},
    {refalrts::icSpliceEVar, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 33},
    {refalrts::icLinkBrackets, 31, 32, 0},
    {refalrts::icSpliceElem, 0, 0, 32},
    {refalrts::icSpliceEVar, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 31},
    {refalrts::icLinkBrackets, 27, 30, 0},
    {refalrts::icSpliceElem, 0, 0, 30},
    {refalrts::icSpliceEVar, 0, 0, 21},
    {refalrts::icLinkBrackets, 28, 29, 0},
    {refalrts::icSpliceElem, 0, 0, 29},
    {refalrts::icSpliceEVar, 0, 0, 10},
    {refalrts::icSpliceSTVar, 0, 0, 20},
    {refalrts::icSpliceElem, 0, 0, 28},
    {refalrts::icSpliceEVar, 0, 0, 14},
    {refalrts::icSpliceSTVar, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 27},
    {refalrts::icLinkBrackets, 25, 26, 0},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +74, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Funcs#1/2 ) ( s.NextLabel#1/12 e.Labels#1/4 ) ( e.Numbers#1/6 ) ( e.Strings#1/8 ) e.Commands#1/0 ( # CmdiAllocateElem s.ElemNo#1/13 # ElIdent e.Label#1/10 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icBracketLeft, 0, 6, 0},
    {refalrts::icBracketLeft, 0, 8, 0},
    {refalrts::icBracketRight, 0, 10, 0},
    {refalrts::icIdentLeft, 0, 1, 10},
    // closed e.Funcs#1 as range 2
    // closed e.Numbers#1 as range 6
    // closed e.Strings#1 as range 8
    // closed e.Commands#1 as range 0
    {refalrts::icsVarLeft, 0, 12, 4},
    // closed e.Labels#1 as range 4
    {refalrts::icsVarLeft, 0, 13, 10},
    {refalrts::icIdentLeft, 0, 4, 10},
    // closed e.Label#1 as range 10
    //0: e.Commands#1
    //2: e.Funcs#1
    //4: e.Labels#1
    //6: e.Numbers#1
    //8: e.Strings#1
    //10: e.Label#1
    //12: s.NextLabel#1
    //13: s.ElemNo#1
    //23: s.NextLabel#1
    //34: s.NextLabel#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 14},
    {refalrts::icFunc, 0, 0, 15},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 16},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 17},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 18},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 19},
    {refalrts::icFunc, 0, 1, 20},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 21},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 22},
    {refalrts::icCopySTVar, 23, 12, 0},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 24},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 25},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 26},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 27},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 28},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 29},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 30},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 31},
    {refalrts::icIdent, 0, 1, 32},
    {refalrts::icIdent, 0, 4, 33},
    {refalrts::icCopySTVar, 34, 23, 0},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 35},
    {refalrts::icLinkBrackets, 31, 35, 0},
    {refalrts::icSpliceElem, 0, 0, 35},
    {refalrts::icSpliceSTVar, 0, 0, 34},
    {refalrts::icSpliceElem, 0, 0, 33},
    {refalrts::icSpliceSTVar, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 32},
    {refalrts::icSpliceElem, 0, 0, 31},
    {refalrts::icPushStack, 0, 0, 30},
    {refalrts::icPushStack, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 30},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icLinkBrackets, 28, 29, 0},
    {refalrts::icSpliceElem, 0, 0, 29},
    {refalrts::icSpliceEVar, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 28},
    {refalrts::icLinkBrackets, 26, 27, 0},
    {refalrts::icSpliceElem, 0, 0, 27},
    {refalrts::icSpliceEVar, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icLinkBrackets, 18, 25, 0},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icLinkBrackets, 22, 24, 0},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icSpliceEVar, 0, 0, 10},
    {refalrts::icSpliceSTVar, 0, 0, 23},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceEVar, 0, 0, 4},
    {refalrts::icPushStack, 0, 0, 21},
    {refalrts::icPushStack, 0, 0, 19},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceSTVar, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icLinkBrackets, 16, 17, 0},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +74, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Funcs#1/2 ) ( e.Labels#1/4 ) ( s.NextNumId#1/12 e.Numbers_B#1/16 ( s.Id#1/21 s.Number#1/20 ) e.Numbers_E#1/22 ) ( e.Strings#1/8 ) e.Commands#1/0 ( # CmdiHugeNum s.Direction#1/13 s.BracketNum#1/14 s.Number#1/15 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icBracketLeft, 0, 6, 0},
    {refalrts::icBracketLeft, 0, 8, 0},
    {refalrts::icBracketRight, 0, 10, 0},
    {refalrts::icIdentLeft, 0, 3, 10},
    // closed e.Funcs#1 as range 2
    // closed e.Labels#1 as range 4
    // closed e.Strings#1 as range 8
    // closed e.Commands#1 as range 0
    {refalrts::icsVarLeft, 0, 12, 6},
    {refalrts::icsVarLeft, 0, 13, 10},
    {refalrts::icsVarLeft, 0, 14, 10},
    {refalrts::icsVarLeft, 0, 15, 10},
    {refalrts::icEmpty, 0, 0, 10},
    {refalrts::icEPrepare, 0, 16, 6},
    {refalrts::icEStart, 0, 16, 6},
    {refalrts::icSave, 0, 22, 6},
    {refalrts::icBracketLeft, 0, 18, 22},
    {refalrts::icsRepeatRight, 20, 15, 18},
    // closed e.Numbers_E#1 as range 6
    {refalrts::icsVarLeft, 0, 21, 18},
    {refalrts::icEmpty, 0, 0, 18},
    //0: e.Commands#1
    //2: e.Funcs#1
    //4: e.Labels#1
    //8: e.Strings#1
    //12: s.NextNumId#1
    //13: s.Direction#1
    //14: s.BracketNum#1
    //15: s.Number#1
    //16: e.Numbers_B#1
    //20: s.Number#1
    //21: s.Id#1
    //22: e.Numbers_E#1
    //39: s.Id#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 24},
    {refalrts::icFunc, 0, 0, 25},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 26},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 27},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 28},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 29},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 30},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 31},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 32},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 33},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 34},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 35},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 36},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 37},
    {refalrts::icIdent, 0, 3, 38},
    {refalrts::icCopySTVar, 39, 21, 0},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 40},
    {refalrts::icLinkBrackets, 37, 40, 0},
    {refalrts::icSpliceElem, 0, 0, 40},
    {refalrts::icSpliceSTVar, 0, 0, 39},
    {refalrts::icSpliceSTVar, 0, 0, 14},
    {refalrts::icSpliceSTVar, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 38},
    {refalrts::icSpliceElem, 0, 0, 37},
    {refalrts::icPushStack, 0, 0, 36},
    {refalrts::icPushStack, 0, 0, 24},
    {refalrts::icSpliceElem, 0, 0, 36},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icLinkBrackets, 34, 35, 0},
    {refalrts::icSpliceElem, 0, 0, 35},
    {refalrts::icSpliceEVar, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 34},
    {refalrts::icLinkBrackets, 30, 33, 0},
    {refalrts::icSpliceElem, 0, 0, 33},
    {refalrts::icSpliceEVar, 0, 0, 22},
    {refalrts::icLinkBrackets, 31, 32, 0},
    {refalrts::icSpliceElem, 0, 0, 32},
    {refalrts::icSpliceSTVar, 0, 0, 15},
    {refalrts::icSpliceSTVar, 0, 0, 21},
    {refalrts::icSpliceElem, 0, 0, 31},
    {refalrts::icSpliceEVar, 0, 0, 16},
    {refalrts::icSpliceSTVar, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 30},
    {refalrts::icLinkBrackets, 28, 29, 0},
    {refalrts::icSpliceElem, 0, 0, 29},
    {refalrts::icSpliceEVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 28},
    {refalrts::icLinkBrackets, 26, 27, 0},
    {refalrts::icSpliceElem, 0, 0, 27},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +75, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Funcs#1/2 ) ( e.Labels#1/4 ) ( s.NextNumId#1/12 e.Numbers#1/6 ) ( e.Strings#1/8 ) e.Commands#1/0 ( # CmdiHugeNum s.Direction#1/13 s.BracketNum#1/14 s.Number#1/15 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icBracketLeft, 0, 6, 0},
    {refalrts::icBracketLeft, 0, 8, 0},
    {refalrts::icBracketRight, 0, 10, 0},
    {refalrts::icIdentLeft, 0, 3, 10},
    // closed e.Funcs#1 as range 2
    // closed e.Labels#1 as range 4
    // closed e.Strings#1 as range 8
    // closed e.Commands#1 as range 0
    {refalrts::icsVarLeft, 0, 12, 6},
    // closed e.Numbers#1 as range 6
    {refalrts::icsVarLeft, 0, 13, 10},
    {refalrts::icsVarLeft, 0, 14, 10},
    {refalrts::icsVarLeft, 0, 15, 10},
    {refalrts::icEmpty, 0, 0, 10},
    //0: e.Commands#1
    //2: e.Funcs#1
    //4: e.Labels#1
    //6: e.Numbers#1
    //8: e.Strings#1
    //12: s.NextNumId#1
    //13: s.Direction#1
    //14: s.BracketNum#1
    //15: s.Number#1
    //27: s.NextNumId#1
    //35: s.NextNumId#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 16},
    {refalrts::icFunc, 0, 0, 17},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 18},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 19},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 20},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 21},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 22},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 23},
    {refalrts::icFunc, 0, 1, 24},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 25},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 26},
    {refalrts::icCopySTVar, 27, 12, 0},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 28},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 29},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 30},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 31},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 32},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 33},
    {refalrts::icIdent, 0, 3, 34},
    {refalrts::icCopySTVar, 35, 27, 0},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 36},
    {refalrts::icLinkBrackets, 33, 36, 0},
    {refalrts::icSpliceElem, 0, 0, 36},
    {refalrts::icSpliceSTVar, 0, 0, 35},
    {refalrts::icSpliceSTVar, 0, 0, 14},
    {refalrts::icSpliceSTVar, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 34},
    {refalrts::icSpliceElem, 0, 0, 33},
    {refalrts::icPushStack, 0, 0, 32},
    {refalrts::icPushStack, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 32},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icLinkBrackets, 30, 31, 0},
    {refalrts::icSpliceElem, 0, 0, 31},
    {refalrts::icSpliceEVar, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 30},
    {refalrts::icLinkBrackets, 22, 29, 0},
    {refalrts::icSpliceElem, 0, 0, 29},
    {refalrts::icLinkBrackets, 26, 28, 0},
    {refalrts::icSpliceElem, 0, 0, 28},
    {refalrts::icSpliceSTVar, 0, 0, 15},
    {refalrts::icSpliceSTVar, 0, 0, 27},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icSpliceEVar, 0, 0, 6},
    {refalrts::icPushStack, 0, 0, 25},
    {refalrts::icPushStack, 0, 0, 23},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icSpliceSTVar, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icLinkBrackets, 20, 21, 0},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceEVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icLinkBrackets, 18, 19, 0},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +75, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Funcs#1/2 ) ( e.Labels#1/4 ) ( s.NextNumId#1/12 e.Numbers_B#1/15 ( s.Id#1/20 s.Number#1/19 ) e.Numbers_E#1/21 ) ( e.Strings#1/8 ) e.Commands#1/0 ( # CmdiAllocateElem s.ElemNo#1/13 # ElHugeNumber s.Number#1/14 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icBracketLeft, 0, 6, 0},
    {refalrts::icBracketLeft, 0, 8, 0},
    {refalrts::icBracketRight, 0, 10, 0},
    {refalrts::icIdentLeft, 0, 1, 10},
    // closed e.Funcs#1 as range 2
    // closed e.Labels#1 as range 4
    // closed e.Strings#1 as range 8
    // closed e.Commands#1 as range 0
    {refalrts::icsVarLeft, 0, 12, 6},
    {refalrts::icsVarLeft, 0, 13, 10},
    {refalrts::icIdentLeft, 0, 2, 10},
    {refalrts::icsVarLeft, 0, 14, 10},
    {refalrts::icEmpty, 0, 0, 10},
    {refalrts::icEPrepare, 0, 15, 6},
    {refalrts::icEStart, 0, 15, 6},
    {refalrts::icSave, 0, 21, 6},
    {refalrts::icBracketLeft, 0, 17, 21},
    {refalrts::icsRepeatRight, 19, 14, 17},
    // closed e.Numbers_E#1 as range 6
    {refalrts::icsVarLeft, 0, 20, 17},
    {refalrts::icEmpty, 0, 0, 17},
    //0: e.Commands#1
    //2: e.Funcs#1
    //4: e.Labels#1
    //8: e.Strings#1
    //12: s.NextNumId#1
    //13: s.ElemNo#1
    //14: s.Number#1
    //15: e.Numbers_B#1
    //19: s.Number#1
    //20: s.Id#1
    //21: e.Numbers_E#1
    //39: s.Id#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 23},
    {refalrts::icFunc, 0, 0, 24},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 25},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 26},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 27},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 28},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 29},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 30},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 31},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 32},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 33},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 34},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 35},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 36},
    {refalrts::icIdent, 0, 1, 37},
    {refalrts::icIdent, 0, 2, 38},
    {refalrts::icCopySTVar, 39, 20, 0},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 40},
    {refalrts::icLinkBrackets, 36, 40, 0},
    {refalrts::icSpliceElem, 0, 0, 40},
    {refalrts::icSpliceSTVar, 0, 0, 39},
    {refalrts::icSpliceElem, 0, 0, 38},
    {refalrts::icSpliceSTVar, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 37},
    {refalrts::icSpliceElem, 0, 0, 36},
    {refalrts::icPushStack, 0, 0, 35},
    {refalrts::icPushStack, 0, 0, 23},
    {refalrts::icSpliceElem, 0, 0, 35},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icLinkBrackets, 33, 34, 0},
    {refalrts::icSpliceElem, 0, 0, 34},
    {refalrts::icSpliceEVar, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 33},
    {refalrts::icLinkBrackets, 29, 32, 0},
    {refalrts::icSpliceElem, 0, 0, 32},
    {refalrts::icSpliceEVar, 0, 0, 21},
    {refalrts::icLinkBrackets, 30, 31, 0},
    {refalrts::icSpliceElem, 0, 0, 31},
    {refalrts::icSpliceSTVar, 0, 0, 14},
    {refalrts::icSpliceSTVar, 0, 0, 20},
    {refalrts::icSpliceElem, 0, 0, 30},
    {refalrts::icSpliceEVar, 0, 0, 15},
    {refalrts::icSpliceSTVar, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 29},
    {refalrts::icLinkBrackets, 27, 28, 0},
    {refalrts::icSpliceElem, 0, 0, 28},
    {refalrts::icSpliceEVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 27},
    {refalrts::icLinkBrackets, 25, 26, 0},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +76, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Funcs#1/2 ) ( e.Labels#1/4 ) ( s.NextNumId#1/12 e.Numbers#1/6 ) ( e.Strings#1/8 ) e.Commands#1/0 ( # CmdiAllocateElem s.ElemNo#1/13 # ElHugeNumber s.Number#1/14 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icBracketLeft, 0, 6, 0},
    {refalrts::icBracketLeft, 0, 8, 0},
    {refalrts::icBracketRight, 0, 10, 0},
    {refalrts::icIdentLeft, 0, 1, 10},
    // closed e.Funcs#1 as range 2
    // closed e.Labels#1 as range 4
    // closed e.Strings#1 as range 8
    // closed e.Commands#1 as range 0
    {refalrts::icsVarLeft, 0, 12, 6},
    // closed e.Numbers#1 as range 6
    {refalrts::icsVarLeft, 0, 13, 10},
    {refalrts::icIdentLeft, 0, 2, 10},
    {refalrts::icsVarLeft, 0, 14, 10},
    {refalrts::icEmpty, 0, 0, 10},
    //0: e.Commands#1
    //2: e.Funcs#1
    //4: e.Labels#1
    //6: e.Numbers#1
    //8: e.Strings#1
    //12: s.NextNumId#1
    //13: s.ElemNo#1
    //14: s.Number#1
    //26: s.NextNumId#1
    //35: s.NextNumId#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 15},
    {refalrts::icFunc, 0, 0, 16},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 17},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 18},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 19},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 20},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 21},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 22},
    {refalrts::icFunc, 0, 1, 23},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 24},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 25},
    {refalrts::icCopySTVar, 26, 12, 0},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 27},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 28},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 29},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 30},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 31},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 32},
    {refalrts::icIdent, 0, 1, 33},
    {refalrts::icIdent, 0, 2, 34},
    {refalrts::icCopySTVar, 35, 26, 0},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 36},
    {refalrts::icLinkBrackets, 32, 36, 0},
    {refalrts::icSpliceElem, 0, 0, 36},
    {refalrts::icSpliceSTVar, 0, 0, 35},
    {refalrts::icSpliceElem, 0, 0, 34},
    {refalrts::icSpliceSTVar, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 33},
    {refalrts::icSpliceElem, 0, 0, 32},
    {refalrts::icPushStack, 0, 0, 31},
    {refalrts::icPushStack, 0, 0, 15},
    {refalrts::icSpliceElem, 0, 0, 31},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icLinkBrackets, 29, 30, 0},
    {refalrts::icSpliceElem, 0, 0, 30},
    {refalrts::icSpliceEVar, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 29},
    {refalrts::icLinkBrackets, 21, 28, 0},
    {refalrts::icSpliceElem, 0, 0, 28},
    {refalrts::icLinkBrackets, 25, 27, 0},
    {refalrts::icSpliceElem, 0, 0, 27},
    {refalrts::icSpliceSTVar, 0, 0, 14},
    {refalrts::icSpliceSTVar, 0, 0, 26},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icSpliceEVar, 0, 0, 6},
    {refalrts::icPushStack, 0, 0, 24},
    {refalrts::icPushStack, 0, 0, 22},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icSpliceSTVar, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icLinkBrackets, 19, 20, 0},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceEVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icLinkBrackets, 17, 18, 0},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +73, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Funcs#1/2 ) ( e.Labels#1/4 ) ( e.Numbers#1/6 ) ( s.NextStringId#1/12 e.Strings_B#1/14 ( s.Id#1/20 e.String#1/18 ) e.Strings_E#1/21 ) e.Commands#1/0 ( # CmdiAllocateElem s.ElemNo#1/13 # ElString e.String#1/10 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icBracketLeft, 0, 6, 0},
    {refalrts::icBracketLeft, 0, 8, 0},
    {refalrts::icBracketRight, 0, 10, 0},
    {refalrts::icIdentLeft, 0, 1, 10},
    // closed e.Funcs#1 as range 2
    // closed e.Labels#1 as range 4
    // closed e.Numbers#1 as range 6
    // closed e.Commands#1 as range 0
    {refalrts::icsVarLeft, 0, 12, 8},
    {refalrts::icsVarLeft, 0, 13, 10},
    {refalrts::icIdentLeft, 0, 0, 10},
    // closed e.String#1 as range 10
    {refalrts::icEPrepare, 0, 14, 8},
    {refalrts::icEStart, 0, 14, 8},
    {refalrts::icSave, 0, 21, 8},
    {refalrts::icBracketLeft, 0, 16, 21},
    {refalrts::iceRepeatRight, 18, 10, 16},
    // closed e.Strings_E#1 as range 8
    {refalrts::icsVarLeft, 0, 20, 16},
    {refalrts::icEmpty, 0, 0, 16},
    //0: e.Commands#1
    //2: e.Funcs#1
    //4: e.Labels#1
    //6: e.Numbers#1
    //10: e.String#1
    //12: s.NextStringId#1
    //13: s.ElemNo#1
    //14: e.Strings_B#1
    //18: e.String#1
    //20: s.Id#1
    //21: e.Strings_E#1
    //39: s.Id#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 23},
    {refalrts::icFunc, 0, 0, 24},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 25},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 26},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 27},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 28},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 29},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 30},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 31},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 32},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 33},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 34},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 35},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 36},
    {refalrts::icIdent, 0, 1, 37},
    {refalrts::icIdent, 0, 0, 38},
    {refalrts::icCopySTVar, 39, 20, 0},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 40},
    {refalrts::icLinkBrackets, 36, 40, 0},
    {refalrts::icSpliceElem, 0, 0, 40},
    {refalrts::icSpliceSTVar, 0, 0, 39},
    {refalrts::icSpliceElem, 0, 0, 38},
    {refalrts::icSpliceSTVar, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 37},
    {refalrts::icSpliceElem, 0, 0, 36},
    {refalrts::icPushStack, 0, 0, 35},
    {refalrts::icPushStack, 0, 0, 23},
    {refalrts::icSpliceElem, 0, 0, 35},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icLinkBrackets, 31, 34, 0},
    {refalrts::icSpliceElem, 0, 0, 34},
    {refalrts::icSpliceEVar, 0, 0, 21},
    {refalrts::icLinkBrackets, 32, 33, 0},
    {refalrts::icSpliceElem, 0, 0, 33},
    {refalrts::icSpliceEVar, 0, 0, 10},
    {refalrts::icSpliceSTVar, 0, 0, 20},
    {refalrts::icSpliceElem, 0, 0, 32},
    {refalrts::icSpliceEVar, 0, 0, 14},
    {refalrts::icSpliceSTVar, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 31},
    {refalrts::icLinkBrackets, 29, 30, 0},
    {refalrts::icSpliceElem, 0, 0, 30},
    {refalrts::icSpliceEVar, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 29},
    {refalrts::icLinkBrackets, 27, 28, 0},
    {refalrts::icSpliceElem, 0, 0, 28},
    {refalrts::icSpliceEVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 27},
    {refalrts::icLinkBrackets, 25, 26, 0},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +74, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Funcs#1/2 ) ( e.Labels#1/4 ) ( e.Numbers#1/6 ) ( s.NextStringId#1/12 e.Strings#1/8 ) e.Commands#1/0 ( # CmdiAllocateElem s.ElemNo#1/13 # ElString e.String#1/10 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icBracketLeft, 0, 6, 0},
    {refalrts::icBracketLeft, 0, 8, 0},
    {refalrts::icBracketRight, 0, 10, 0},
    {refalrts::icIdentLeft, 0, 1, 10},
    // closed e.Funcs#1 as range 2
    // closed e.Labels#1 as range 4
    // closed e.Numbers#1 as range 6
    // closed e.Commands#1 as range 0
    {refalrts::icsVarLeft, 0, 12, 8},
    // closed e.Strings#1 as range 8
    {refalrts::icsVarLeft, 0, 13, 10},
    {refalrts::icIdentLeft, 0, 0, 10},
    // closed e.String#1 as range 10
    //0: e.Commands#1
    //2: e.Funcs#1
    //4: e.Labels#1
    //6: e.Numbers#1
    //8: e.Strings#1
    //10: e.String#1
    //12: s.NextStringId#1
    //13: s.ElemNo#1
    //27: s.NextStringId#1
    //34: s.NextStringId#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 14},
    {refalrts::icFunc, 0, 0, 15},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 16},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 17},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 18},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 19},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 20},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 21},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 22},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 23},
    {refalrts::icFunc, 0, 1, 24},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 25},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 26},
    {refalrts::icCopySTVar, 27, 12, 0},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 28},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 29},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 30},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 31},
    {refalrts::icIdent, 0, 1, 32},
    {refalrts::icIdent, 0, 0, 33},
    {refalrts::icCopySTVar, 34, 27, 0},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 35},
    {refalrts::icLinkBrackets, 31, 35, 0},
    {refalrts::icSpliceElem, 0, 0, 35},
    {refalrts::icSpliceSTVar, 0, 0, 34},
    {refalrts::icSpliceElem, 0, 0, 33},
    {refalrts::icSpliceSTVar, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 32},
    {refalrts::icSpliceElem, 0, 0, 31},
    {refalrts::icPushStack, 0, 0, 30},
    {refalrts::icPushStack, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 30},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icLinkBrackets, 22, 29, 0},
    {refalrts::icSpliceElem, 0, 0, 29},
    {refalrts::icLinkBrackets, 26, 28, 0},
    {refalrts::icSpliceElem, 0, 0, 28},
    {refalrts::icSpliceEVar, 0, 0, 10},
    {refalrts::icSpliceSTVar, 0, 0, 27},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icSpliceEVar, 0, 0, 8},
    {refalrts::icPushStack, 0, 0, 25},
    {refalrts::icPushStack, 0, 0, 23},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icSpliceSTVar, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icLinkBrackets, 20, 21, 0},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceEVar, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icLinkBrackets, 18, 19, 0},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceEVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icLinkBrackets, 16, 17, 0},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Funcs#1/2 ) ( e.Labels#1/4 ) ( e.Numbers#1/6 ) ( e.Strings#1/8 ) e.Commands#1/0 t.OtherCommand#1/10
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icBracketLeft, 0, 6, 0},
    {refalrts::icBracketLeft, 0, 8, 0},
    // closed e.Funcs#1 as range 2
    // closed e.Labels#1 as range 4
    // closed e.Numbers#1 as range 6
    // closed e.Strings#1 as range 8
    {refalrts::ictVarRight, 0, 10, 0},
    // closed e.Commands#1 as range 0
    //0: e.Commands#1
    //2: e.Funcs#1
    //4: e.Labels#1
    //6: e.Numbers#1
    //8: e.Strings#1
    //10: t.OtherCommand#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 11},
    {refalrts::icFunc, 0, 0, 12},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 13},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 14},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 15},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 16},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 17},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 18},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 19},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 20},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 21},
    {refalrts::icSpliceSTVar, 0, 0, 10},
    {refalrts::icPushStack, 0, 0, 21},
    {refalrts::icPushStack, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icLinkBrackets, 19, 20, 0},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceEVar, 0, 0, 8},
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
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[25];
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
    // ( s.NextFunc#1/10 e.Funcs#1/2 ) ( s.NextLabel#1/11 e.Labels#1/4 ) ( s.NextNumber#1/12 e.Numbers#1/6 ) ( s.NextString#1/13 e.Strings#1/8 )
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
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
      continue;
    // closed e.Funcs#1 as range 2
    if( ! refalrts::svar_left( context[11], context[4], context[5] ) )
      continue;
    // closed e.Labels#1 as range 4
    if( ! refalrts::svar_left( context[12], context[6], context[7] ) )
      continue;
    // closed e.Numbers#1 as range 6
    if( ! refalrts::svar_left( context[13], context[8], context[9] ) )
      continue;
    // closed e.Strings#1 as range 8
    //2: e.Funcs#1
    //4: e.Labels#1
    //6: e.Numbers#1
    //8: e.Strings#1
    //10: s.NextFunc#1
    //11: s.NextLabel#1
    //12: s.NextNumber#1
    //13: s.NextString#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[15], & ident_CmdiFuncArray<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[17], Map, "Map" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[18], RemoveNumber, "RemoveNumber" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[19] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[20] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[21] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[22], & ident_CmdiLabelArray<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[23] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[24], Map, "Map" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[25], RemoveNumber, "RemoveNumber" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[26] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[27] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[28] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[29], & ident_CmdiNumberArray<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[30] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[31], Map, "Map" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[32], lambda_OutlineConstants_0, "lambda_OutlineConstants_0" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[33] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[34] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[35] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[36], & ident_CmdiStringArray<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[37] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[38], Map, "Map" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[39], RemoveNumber, "RemoveNumber" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[40] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[41] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[35], context[41] );
    res = refalrts::splice_elem( res, context[41] );
    refalrts::push_stack( context[40] );
    refalrts::push_stack( context[37] );
    res = refalrts::splice_elem( res, context[40] );
    res = refalrts::splice_evar( res, context[8], context[9] );
    res = refalrts::splice_elem( res, context[39] );
    res = refalrts::splice_elem( res, context[38] );
    res = refalrts::splice_elem( res, context[37] );
    res = refalrts::splice_elem( res, context[36] );
    res = refalrts::splice_elem( res, context[35] );
    refalrts::link_brackets( context[28], context[34] );
    res = refalrts::splice_elem( res, context[34] );
    refalrts::push_stack( context[33] );
    refalrts::push_stack( context[30] );
    res = refalrts::splice_elem( res, context[33] );
    res = refalrts::splice_evar( res, context[6], context[7] );
    res = refalrts::splice_elem( res, context[32] );
    res = refalrts::splice_elem( res, context[31] );
    res = refalrts::splice_elem( res, context[30] );
    res = refalrts::splice_elem( res, context[29] );
    res = refalrts::splice_elem( res, context[28] );
    refalrts::link_brackets( context[21], context[27] );
    res = refalrts::splice_elem( res, context[27] );
    refalrts::push_stack( context[26] );
    refalrts::push_stack( context[23] );
    res = refalrts::splice_elem( res, context[26] );
    res = refalrts::splice_evar( res, context[4], context[5] );
    res = refalrts::splice_elem( res, context[25] );
    res = refalrts::splice_elem( res, context[24] );
    res = refalrts::splice_elem( res, context[23] );
    res = refalrts::splice_elem( res, context[22] );
    res = refalrts::splice_elem( res, context[21] );
    refalrts::link_brackets( context[14], context[20] );
    res = refalrts::splice_elem( res, context[20] );
    refalrts::push_stack( context[19] );
    refalrts::push_stack( context[16] );
    res = refalrts::splice_elem( res, context[19] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_elem( res, context[18] );
    res = refalrts::splice_elem( res, context[17] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_elem( res, context[15] );
    res = refalrts::splice_elem( res, context[14] );
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
    // ( s.NextFunc#1/12 e.Funcs_B#1/15 ( s.Num#1/21 e.Func#1/19 ) e.Funcs_E#1/22 ) ( e.Labels#1/4 ) ( e.Numbers#1/6 ) ( e.Strings#1/8 ) e.Commands#1/0 ( # CmdiName s.Direction#1/13 s.BracketNum#1/14 e.Func#1/10 )
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
    if( ! refalrts::brackets_right( context[10], context[11], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdiName<int>::name, context[10], context[11] ) )
      continue;
    // closed e.Labels#1 as range 4
    // closed e.Numbers#1 as range 6
    // closed e.Strings#1 as range 8
    // closed e.Commands#1 as range 0
    if( ! refalrts::svar_left( context[12], context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[13], context[10], context[11] ) )
      continue;
    if( ! refalrts::svar_left( context[14], context[10], context[11] ) )
      continue;
    // closed e.Func#1 as range 10
    context[15] = 0;
    context[16] = 0;
    refalrts::start_e_loop();
    do {
      context[22] = context[2];
      context[23] = context[3];
      context[17] = 0;
      context[18] = 0;
      if( ! refalrts::brackets_left( context[17], context[18], context[22], context[23] ) )
        continue;
      if( ! refalrts::repeated_evar_right( context[19], context[20], context[10], context[11], context[17], context[18] ) )
        continue;
      // closed e.Funcs_E#1 as range 2
      if( ! refalrts::svar_left( context[21], context[17], context[18] ) )
        continue;
      if( ! refalrts::empty_seq( context[17], context[18] ) )
        continue;
      //0: e.Commands#1
      //4: e.Labels#1
      //6: e.Numbers#1
      //8: e.Strings#1
      //10: e.Func#1
      //12: s.NextFunc#1
      //13: s.Direction#1
      //14: s.BracketNum#1
      //15: e.Funcs_B#1
      //19: e.Func#1
      //21: s.Num#1
      //22: e.Funcs_E#1
      //39: s.Num#1

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::alloc_open_call( context[24] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[25], OutlineConstants, "OutlineConstants" ) )
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
      if( ! refalrts::alloc_close_bracket( context[31] ) )
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
      if( ! refalrts::alloc_open_bracket( context[37] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[38], & ident_CmdiName<int>::name ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[39], context[21]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[40] ) )
        return refalrts::cNoMemory;
      refalrts::link_brackets( context[37], context[40] );
      res = refalrts::splice_elem( res, context[40] );
      res = refalrts::splice_stvar( res, context[39] );
      res = refalrts::splice_stvar( res, context[14] );
      res = refalrts::splice_stvar( res, context[13] );
      res = refalrts::splice_elem( res, context[38] );
      res = refalrts::splice_elem( res, context[37] );
      refalrts::push_stack( context[36] );
      refalrts::push_stack( context[24] );
      res = refalrts::splice_elem( res, context[36] );
      res = refalrts::splice_evar( res, context[0], context[1] );
      refalrts::link_brackets( context[34], context[35] );
      res = refalrts::splice_elem( res, context[35] );
      res = refalrts::splice_evar( res, context[8], context[9] );
      res = refalrts::splice_elem( res, context[34] );
      refalrts::link_brackets( context[32], context[33] );
      res = refalrts::splice_elem( res, context[33] );
      res = refalrts::splice_evar( res, context[6], context[7] );
      res = refalrts::splice_elem( res, context[32] );
      refalrts::link_brackets( context[30], context[31] );
      res = refalrts::splice_elem( res, context[31] );
      res = refalrts::splice_evar( res, context[4], context[5] );
      res = refalrts::splice_elem( res, context[30] );
      refalrts::link_brackets( context[26], context[29] );
      res = refalrts::splice_elem( res, context[29] );
      res = refalrts::splice_evar( res, context[22], context[23] );
      refalrts::link_brackets( context[27], context[28] );
      res = refalrts::splice_elem( res, context[28] );
      res = refalrts::splice_evar( res, context[10], context[11] );
      res = refalrts::splice_stvar( res, context[21] );
      res = refalrts::splice_elem( res, context[27] );
      res = refalrts::splice_evar( res, context[15], context[16] );
      res = refalrts::splice_stvar( res, context[12] );
      res = refalrts::splice_elem( res, context[26] );
      res = refalrts::splice_elem( res, context[25] );
      res = refalrts::splice_elem( res, context[24] );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[15], context[16], context[2], context[3] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    // ( s.NextFunc#1/12 e.Funcs#1/2 ) ( e.Labels#1/4 ) ( e.Numbers#1/6 ) ( e.Strings#1/8 ) e.Commands#1/0 ( # CmdiName s.Direction#1/13 s.BracketNum#1/14 e.Func#1/10 )
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
    if( ! refalrts::brackets_right( context[10], context[11], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdiName<int>::name, context[10], context[11] ) )
      continue;
    // closed e.Labels#1 as range 4
    // closed e.Numbers#1 as range 6
    // closed e.Strings#1 as range 8
    // closed e.Commands#1 as range 0
    if( ! refalrts::svar_left( context[12], context[2], context[3] ) )
      continue;
    // closed e.Funcs#1 as range 2
    if( ! refalrts::svar_left( context[13], context[10], context[11] ) )
      continue;
    if( ! refalrts::svar_left( context[14], context[10], context[11] ) )
      continue;
    // closed e.Func#1 as range 10
    //0: e.Commands#1
    //2: e.Funcs#1
    //4: e.Labels#1
    //6: e.Numbers#1
    //8: e.Strings#1
    //10: e.Func#1
    //12: s.NextFunc#1
    //13: s.Direction#1
    //14: s.BracketNum#1
    //22: s.NextFunc#1
    //34: s.NextFunc#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[15] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[16], OutlineConstants, "OutlineConstants" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[17] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[18] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[19], Inc, "Inc" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[20] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[21] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[22], context[12]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[23] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[24] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[25] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[26] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[27] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[28] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[29] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[30] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[31] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[32] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[33], & ident_CmdiName<int>::name ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[34], context[22]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[35] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[32], context[35] );
    res = refalrts::splice_elem( res, context[35] );
    res = refalrts::splice_stvar( res, context[34] );
    res = refalrts::splice_stvar( res, context[14] );
    res = refalrts::splice_stvar( res, context[13] );
    res = refalrts::splice_elem( res, context[33] );
    res = refalrts::splice_elem( res, context[32] );
    refalrts::push_stack( context[31] );
    refalrts::push_stack( context[15] );
    res = refalrts::splice_elem( res, context[31] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    refalrts::link_brackets( context[29], context[30] );
    res = refalrts::splice_elem( res, context[30] );
    res = refalrts::splice_evar( res, context[8], context[9] );
    res = refalrts::splice_elem( res, context[29] );
    refalrts::link_brackets( context[27], context[28] );
    res = refalrts::splice_elem( res, context[28] );
    res = refalrts::splice_evar( res, context[6], context[7] );
    res = refalrts::splice_elem( res, context[27] );
    refalrts::link_brackets( context[25], context[26] );
    res = refalrts::splice_elem( res, context[26] );
    res = refalrts::splice_evar( res, context[4], context[5] );
    res = refalrts::splice_elem( res, context[25] );
    refalrts::link_brackets( context[17], context[24] );
    res = refalrts::splice_elem( res, context[24] );
    refalrts::link_brackets( context[21], context[23] );
    res = refalrts::splice_elem( res, context[23] );
    res = refalrts::splice_evar( res, context[10], context[11] );
    res = refalrts::splice_stvar( res, context[22] );
    res = refalrts::splice_elem( res, context[21] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    refalrts::push_stack( context[20] );
    refalrts::push_stack( context[18] );
    res = refalrts::splice_elem( res, context[20] );
    res = refalrts::splice_stvar( res, context[12] );
    res = refalrts::splice_elem( res, context[19] );
    res = refalrts::splice_elem( res, context[18] );
    res = refalrts::splice_elem( res, context[17] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_elem( res, context[15] );
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
    // ( s.NextFunc#1/12 e.Funcs_B#1/14 ( s.Num#1/20 e.Func#1/18 ) e.Funcs_E#1/21 ) ( e.Labels#1/4 ) ( e.Numbers#1/6 ) ( e.Strings#1/8 ) e.Commands#1/0 ( # CmdiAllocateElem s.ElemNo#1/13 # ElName e.Func#1/10 )
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
    if( ! refalrts::brackets_right( context[10], context[11], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdiAllocateElem<int>::name, context[10], context[11] ) )
      continue;
    // closed e.Labels#1 as range 4
    // closed e.Numbers#1 as range 6
    // closed e.Strings#1 as range 8
    // closed e.Commands#1 as range 0
    if( ! refalrts::svar_left( context[12], context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[13], context[10], context[11] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_ElName<int>::name, context[10], context[11] ) )
      continue;
    // closed e.Func#1 as range 10
    context[14] = 0;
    context[15] = 0;
    refalrts::start_e_loop();
    do {
      context[21] = context[2];
      context[22] = context[3];
      context[16] = 0;
      context[17] = 0;
      if( ! refalrts::brackets_left( context[16], context[17], context[21], context[22] ) )
        continue;
      if( ! refalrts::repeated_evar_right( context[18], context[19], context[10], context[11], context[16], context[17] ) )
        continue;
      // closed e.Funcs_E#1 as range 2
      if( ! refalrts::svar_left( context[20], context[16], context[17] ) )
        continue;
      if( ! refalrts::empty_seq( context[16], context[17] ) )
        continue;
      //0: e.Commands#1
      //4: e.Labels#1
      //6: e.Numbers#1
      //8: e.Strings#1
      //10: e.Func#1
      //12: s.NextFunc#1
      //13: s.ElemNo#1
      //14: e.Funcs_B#1
      //18: e.Func#1
      //20: s.Num#1
      //21: e.Funcs_E#1
      //39: s.Num#1

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::alloc_open_call( context[23] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[24], OutlineConstants, "OutlineConstants" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[25] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[26] ) )
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
      if( ! refalrts::alloc_close_bracket( context[32] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[33] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[34] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[35] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[36] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[37], & ident_CmdiAllocateElem<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[38], & ident_ElName<int>::name ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[39], context[20]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[40] ) )
        return refalrts::cNoMemory;
      refalrts::link_brackets( context[36], context[40] );
      res = refalrts::splice_elem( res, context[40] );
      res = refalrts::splice_stvar( res, context[39] );
      res = refalrts::splice_elem( res, context[38] );
      res = refalrts::splice_stvar( res, context[13] );
      res = refalrts::splice_elem( res, context[37] );
      res = refalrts::splice_elem( res, context[36] );
      refalrts::push_stack( context[35] );
      refalrts::push_stack( context[23] );
      res = refalrts::splice_elem( res, context[35] );
      res = refalrts::splice_evar( res, context[0], context[1] );
      refalrts::link_brackets( context[33], context[34] );
      res = refalrts::splice_elem( res, context[34] );
      res = refalrts::splice_evar( res, context[8], context[9] );
      res = refalrts::splice_elem( res, context[33] );
      refalrts::link_brackets( context[31], context[32] );
      res = refalrts::splice_elem( res, context[32] );
      res = refalrts::splice_evar( res, context[6], context[7] );
      res = refalrts::splice_elem( res, context[31] );
      refalrts::link_brackets( context[29], context[30] );
      res = refalrts::splice_elem( res, context[30] );
      res = refalrts::splice_evar( res, context[4], context[5] );
      res = refalrts::splice_elem( res, context[29] );
      refalrts::link_brackets( context[25], context[28] );
      res = refalrts::splice_elem( res, context[28] );
      res = refalrts::splice_evar( res, context[21], context[22] );
      refalrts::link_brackets( context[26], context[27] );
      res = refalrts::splice_elem( res, context[27] );
      res = refalrts::splice_evar( res, context[10], context[11] );
      res = refalrts::splice_stvar( res, context[20] );
      res = refalrts::splice_elem( res, context[26] );
      res = refalrts::splice_evar( res, context[14], context[15] );
      res = refalrts::splice_stvar( res, context[12] );
      res = refalrts::splice_elem( res, context[25] );
      res = refalrts::splice_elem( res, context[24] );
      res = refalrts::splice_elem( res, context[23] );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[14], context[15], context[2], context[3] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    // ( s.NextFunc#1/12 e.Funcs#1/2 ) ( e.Labels#1/4 ) ( e.Numbers#1/6 ) ( e.Strings#1/8 ) e.Commands#1/0 ( # CmdiAllocateElem s.ElemNo#1/13 # ElName e.Func#1/10 )
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
    if( ! refalrts::brackets_right( context[10], context[11], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdiAllocateElem<int>::name, context[10], context[11] ) )
      continue;
    // closed e.Labels#1 as range 4
    // closed e.Numbers#1 as range 6
    // closed e.Strings#1 as range 8
    // closed e.Commands#1 as range 0
    if( ! refalrts::svar_left( context[12], context[2], context[3] ) )
      continue;
    // closed e.Funcs#1 as range 2
    if( ! refalrts::svar_left( context[13], context[10], context[11] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_ElName<int>::name, context[10], context[11] ) )
      continue;
    // closed e.Func#1 as range 10
    //0: e.Commands#1
    //2: e.Funcs#1
    //4: e.Labels#1
    //6: e.Numbers#1
    //8: e.Strings#1
    //10: e.Func#1
    //12: s.NextFunc#1
    //13: s.ElemNo#1
    //21: s.NextFunc#1
    //34: s.NextFunc#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[15], OutlineConstants, "OutlineConstants" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[17] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[18], Inc, "Inc" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[19] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[20] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[21], context[12]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[22] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[23] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[24] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[25] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[26] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[27] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[28] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[29] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[30] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[31] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[32], & ident_CmdiAllocateElem<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[33], & ident_ElName<int>::name ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[34], context[21]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[35] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[31], context[35] );
    res = refalrts::splice_elem( res, context[35] );
    res = refalrts::splice_stvar( res, context[34] );
    res = refalrts::splice_elem( res, context[33] );
    res = refalrts::splice_stvar( res, context[13] );
    res = refalrts::splice_elem( res, context[32] );
    res = refalrts::splice_elem( res, context[31] );
    refalrts::push_stack( context[30] );
    refalrts::push_stack( context[14] );
    res = refalrts::splice_elem( res, context[30] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    refalrts::link_brackets( context[28], context[29] );
    res = refalrts::splice_elem( res, context[29] );
    res = refalrts::splice_evar( res, context[8], context[9] );
    res = refalrts::splice_elem( res, context[28] );
    refalrts::link_brackets( context[26], context[27] );
    res = refalrts::splice_elem( res, context[27] );
    res = refalrts::splice_evar( res, context[6], context[7] );
    res = refalrts::splice_elem( res, context[26] );
    refalrts::link_brackets( context[24], context[25] );
    res = refalrts::splice_elem( res, context[25] );
    res = refalrts::splice_evar( res, context[4], context[5] );
    res = refalrts::splice_elem( res, context[24] );
    refalrts::link_brackets( context[16], context[23] );
    res = refalrts::splice_elem( res, context[23] );
    refalrts::link_brackets( context[20], context[22] );
    res = refalrts::splice_elem( res, context[22] );
    res = refalrts::splice_evar( res, context[10], context[11] );
    res = refalrts::splice_stvar( res, context[21] );
    res = refalrts::splice_elem( res, context[20] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    refalrts::push_stack( context[19] );
    refalrts::push_stack( context[17] );
    res = refalrts::splice_elem( res, context[19] );
    res = refalrts::splice_stvar( res, context[12] );
    res = refalrts::splice_elem( res, context[18] );
    res = refalrts::splice_elem( res, context[17] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_elem( res, context[15] );
    res = refalrts::splice_elem( res, context[14] );
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
    // ( s.NextFunc#1/12 e.Funcs_B#1/16 ( s.Num#1/22 e.Func#1/20 ) e.Funcs_E#1/23 ) ( e.Labels#1/4 ) ( e.Numbers#1/6 ) ( e.Strings#1/8 ) e.Commands#1/0 ( # CmdiADT s.Direction#1/13 s.BracketNum#1/14 s.InnerBrackets#1/15 e.Func#1/10 )
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
    if( ! refalrts::brackets_right( context[10], context[11], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdiADT<int>::name, context[10], context[11] ) )
      continue;
    // closed e.Labels#1 as range 4
    // closed e.Numbers#1 as range 6
    // closed e.Strings#1 as range 8
    // closed e.Commands#1 as range 0
    if( ! refalrts::svar_left( context[12], context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[13], context[10], context[11] ) )
      continue;
    if( ! refalrts::svar_left( context[14], context[10], context[11] ) )
      continue;
    if( ! refalrts::svar_left( context[15], context[10], context[11] ) )
      continue;
    // closed e.Func#1 as range 10
    context[16] = 0;
    context[17] = 0;
    refalrts::start_e_loop();
    do {
      context[23] = context[2];
      context[24] = context[3];
      context[18] = 0;
      context[19] = 0;
      if( ! refalrts::brackets_left( context[18], context[19], context[23], context[24] ) )
        continue;
      if( ! refalrts::repeated_evar_right( context[20], context[21], context[10], context[11], context[18], context[19] ) )
        continue;
      // closed e.Funcs_E#1 as range 2
      if( ! refalrts::svar_left( context[22], context[18], context[19] ) )
        continue;
      if( ! refalrts::empty_seq( context[18], context[19] ) )
        continue;
      //0: e.Commands#1
      //4: e.Labels#1
      //6: e.Numbers#1
      //8: e.Strings#1
      //10: e.Func#1
      //12: s.NextFunc#1
      //13: s.Direction#1
      //14: s.BracketNum#1
      //15: s.InnerBrackets#1
      //16: e.Funcs_B#1
      //20: e.Func#1
      //22: s.Num#1
      //23: e.Funcs_E#1
      //40: s.Num#1

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::alloc_open_call( context[25] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[26], OutlineConstants, "OutlineConstants" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[27] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[28] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[29] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[30] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[31] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[32] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[33] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[34] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[35] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[36] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[37] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[38] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[39], & ident_CmdiADT<int>::name ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[40], context[22]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[41] ) )
        return refalrts::cNoMemory;
      refalrts::link_brackets( context[38], context[41] );
      res = refalrts::splice_elem( res, context[41] );
      res = refalrts::splice_stvar( res, context[40] );
      res = refalrts::splice_stvar( res, context[15] );
      res = refalrts::splice_stvar( res, context[14] );
      res = refalrts::splice_stvar( res, context[13] );
      res = refalrts::splice_elem( res, context[39] );
      res = refalrts::splice_elem( res, context[38] );
      refalrts::push_stack( context[37] );
      refalrts::push_stack( context[25] );
      res = refalrts::splice_elem( res, context[37] );
      res = refalrts::splice_evar( res, context[0], context[1] );
      refalrts::link_brackets( context[35], context[36] );
      res = refalrts::splice_elem( res, context[36] );
      res = refalrts::splice_evar( res, context[8], context[9] );
      res = refalrts::splice_elem( res, context[35] );
      refalrts::link_brackets( context[33], context[34] );
      res = refalrts::splice_elem( res, context[34] );
      res = refalrts::splice_evar( res, context[6], context[7] );
      res = refalrts::splice_elem( res, context[33] );
      refalrts::link_brackets( context[31], context[32] );
      res = refalrts::splice_elem( res, context[32] );
      res = refalrts::splice_evar( res, context[4], context[5] );
      res = refalrts::splice_elem( res, context[31] );
      refalrts::link_brackets( context[27], context[30] );
      res = refalrts::splice_elem( res, context[30] );
      res = refalrts::splice_evar( res, context[23], context[24] );
      refalrts::link_brackets( context[28], context[29] );
      res = refalrts::splice_elem( res, context[29] );
      res = refalrts::splice_evar( res, context[10], context[11] );
      res = refalrts::splice_stvar( res, context[22] );
      res = refalrts::splice_elem( res, context[28] );
      res = refalrts::splice_evar( res, context[16], context[17] );
      res = refalrts::splice_stvar( res, context[12] );
      res = refalrts::splice_elem( res, context[27] );
      res = refalrts::splice_elem( res, context[26] );
      res = refalrts::splice_elem( res, context[25] );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[16], context[17], context[2], context[3] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    // ( s.NextFunc#1/12 e.Funcs#1/2 ) ( e.Labels#1/4 ) ( e.Numbers#1/6 ) ( e.Strings#1/8 ) e.Commands#1/0 ( # CmdiADT s.Direction#1/13 s.BracketNum#1/14 s.InnerBrackets#1/15 e.Func#1/10 )
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
    if( ! refalrts::brackets_right( context[10], context[11], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdiADT<int>::name, context[10], context[11] ) )
      continue;
    // closed e.Labels#1 as range 4
    // closed e.Numbers#1 as range 6
    // closed e.Strings#1 as range 8
    // closed e.Commands#1 as range 0
    if( ! refalrts::svar_left( context[12], context[2], context[3] ) )
      continue;
    // closed e.Funcs#1 as range 2
    if( ! refalrts::svar_left( context[13], context[10], context[11] ) )
      continue;
    if( ! refalrts::svar_left( context[14], context[10], context[11] ) )
      continue;
    if( ! refalrts::svar_left( context[15], context[10], context[11] ) )
      continue;
    // closed e.Func#1 as range 10
    //0: e.Commands#1
    //2: e.Funcs#1
    //4: e.Labels#1
    //6: e.Numbers#1
    //8: e.Strings#1
    //10: e.Func#1
    //12: s.NextFunc#1
    //13: s.Direction#1
    //14: s.BracketNum#1
    //15: s.InnerBrackets#1
    //23: s.NextFunc#1
    //35: s.NextFunc#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[17], OutlineConstants, "OutlineConstants" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[18] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[19] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[20], Inc, "Inc" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[21] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[22] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[23], context[12]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[24] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[25] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[26] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[27] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[28] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[29] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[30] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[31] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[32] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[33] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[34], & ident_CmdiADT<int>::name ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[35], context[23]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[36] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[33], context[36] );
    res = refalrts::splice_elem( res, context[36] );
    res = refalrts::splice_stvar( res, context[35] );
    res = refalrts::splice_stvar( res, context[15] );
    res = refalrts::splice_stvar( res, context[14] );
    res = refalrts::splice_stvar( res, context[13] );
    res = refalrts::splice_elem( res, context[34] );
    res = refalrts::splice_elem( res, context[33] );
    refalrts::push_stack( context[32] );
    refalrts::push_stack( context[16] );
    res = refalrts::splice_elem( res, context[32] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    refalrts::link_brackets( context[30], context[31] );
    res = refalrts::splice_elem( res, context[31] );
    res = refalrts::splice_evar( res, context[8], context[9] );
    res = refalrts::splice_elem( res, context[30] );
    refalrts::link_brackets( context[28], context[29] );
    res = refalrts::splice_elem( res, context[29] );
    res = refalrts::splice_evar( res, context[6], context[7] );
    res = refalrts::splice_elem( res, context[28] );
    refalrts::link_brackets( context[26], context[27] );
    res = refalrts::splice_elem( res, context[27] );
    res = refalrts::splice_evar( res, context[4], context[5] );
    res = refalrts::splice_elem( res, context[26] );
    refalrts::link_brackets( context[18], context[25] );
    res = refalrts::splice_elem( res, context[25] );
    refalrts::link_brackets( context[22], context[24] );
    res = refalrts::splice_elem( res, context[24] );
    res = refalrts::splice_evar( res, context[10], context[11] );
    res = refalrts::splice_stvar( res, context[23] );
    res = refalrts::splice_elem( res, context[22] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    refalrts::push_stack( context[21] );
    refalrts::push_stack( context[19] );
    res = refalrts::splice_elem( res, context[21] );
    res = refalrts::splice_stvar( res, context[12] );
    res = refalrts::splice_elem( res, context[20] );
    res = refalrts::splice_elem( res, context[19] );
    res = refalrts::splice_elem( res, context[18] );
    res = refalrts::splice_elem( res, context[17] );
    res = refalrts::splice_elem( res, context[16] );
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
    // ( e.Funcs#1/2 ) ( s.NextLabel#1/12 e.Labels_B#1/15 ( s.Num#1/21 e.Label#1/19 ) e.Labels_E#1/22 ) ( e.Numbers#1/6 ) ( e.Strings#1/8 ) e.Commands#1/0 ( # CmdiIdent s.Direction#1/13 s.BracketNum#1/14 e.Label#1/10 )
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
    if( ! refalrts::brackets_right( context[10], context[11], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdiIdent<int>::name, context[10], context[11] ) )
      continue;
    // closed e.Funcs#1 as range 2
    // closed e.Numbers#1 as range 6
    // closed e.Strings#1 as range 8
    // closed e.Commands#1 as range 0
    if( ! refalrts::svar_left( context[12], context[4], context[5] ) )
      continue;
    if( ! refalrts::svar_left( context[13], context[10], context[11] ) )
      continue;
    if( ! refalrts::svar_left( context[14], context[10], context[11] ) )
      continue;
    // closed e.Label#1 as range 10
    context[15] = 0;
    context[16] = 0;
    refalrts::start_e_loop();
    do {
      context[22] = context[4];
      context[23] = context[5];
      context[17] = 0;
      context[18] = 0;
      if( ! refalrts::brackets_left( context[17], context[18], context[22], context[23] ) )
        continue;
      if( ! refalrts::repeated_evar_right( context[19], context[20], context[10], context[11], context[17], context[18] ) )
        continue;
      // closed e.Labels_E#1 as range 4
      if( ! refalrts::svar_left( context[21], context[17], context[18] ) )
        continue;
      if( ! refalrts::empty_seq( context[17], context[18] ) )
        continue;
      //0: e.Commands#1
      //2: e.Funcs#1
      //6: e.Numbers#1
      //8: e.Strings#1
      //10: e.Label#1
      //12: s.NextLabel#1
      //13: s.Direction#1
      //14: s.BracketNum#1
      //15: e.Labels_B#1
      //19: e.Label#1
      //21: s.Num#1
      //22: e.Labels_E#1
      //39: s.Num#1

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::alloc_open_call( context[24] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[25], OutlineConstants, "OutlineConstants" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[26] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[27] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[28] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[29] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[30] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[31] ) )
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
      if( ! refalrts::alloc_open_bracket( context[37] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[38], & ident_CmdiIdent<int>::name ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[39], context[21]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[40] ) )
        return refalrts::cNoMemory;
      refalrts::link_brackets( context[37], context[40] );
      res = refalrts::splice_elem( res, context[40] );
      res = refalrts::splice_stvar( res, context[39] );
      res = refalrts::splice_stvar( res, context[14] );
      res = refalrts::splice_stvar( res, context[13] );
      res = refalrts::splice_elem( res, context[38] );
      res = refalrts::splice_elem( res, context[37] );
      refalrts::push_stack( context[36] );
      refalrts::push_stack( context[24] );
      res = refalrts::splice_elem( res, context[36] );
      res = refalrts::splice_evar( res, context[0], context[1] );
      refalrts::link_brackets( context[34], context[35] );
      res = refalrts::splice_elem( res, context[35] );
      res = refalrts::splice_evar( res, context[8], context[9] );
      res = refalrts::splice_elem( res, context[34] );
      refalrts::link_brackets( context[32], context[33] );
      res = refalrts::splice_elem( res, context[33] );
      res = refalrts::splice_evar( res, context[6], context[7] );
      res = refalrts::splice_elem( res, context[32] );
      refalrts::link_brackets( context[28], context[31] );
      res = refalrts::splice_elem( res, context[31] );
      res = refalrts::splice_evar( res, context[22], context[23] );
      refalrts::link_brackets( context[29], context[30] );
      res = refalrts::splice_elem( res, context[30] );
      res = refalrts::splice_evar( res, context[10], context[11] );
      res = refalrts::splice_stvar( res, context[21] );
      res = refalrts::splice_elem( res, context[29] );
      res = refalrts::splice_evar( res, context[15], context[16] );
      res = refalrts::splice_stvar( res, context[12] );
      res = refalrts::splice_elem( res, context[28] );
      refalrts::link_brackets( context[26], context[27] );
      res = refalrts::splice_elem( res, context[27] );
      res = refalrts::splice_evar( res, context[2], context[3] );
      res = refalrts::splice_elem( res, context[26] );
      res = refalrts::splice_elem( res, context[25] );
      res = refalrts::splice_elem( res, context[24] );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[15], context[16], context[4], context[5] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    // ( e.Funcs#1/2 ) ( s.NextLabel#1/12 e.Labels#1/4 ) ( e.Numbers#1/6 ) ( e.Strings#1/8 ) e.Commands#1/0 ( # CmdiIdent s.Direction#1/13 s.BracketNum#1/14 e.Label#1/10 )
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
    if( ! refalrts::brackets_right( context[10], context[11], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdiIdent<int>::name, context[10], context[11] ) )
      continue;
    // closed e.Funcs#1 as range 2
    // closed e.Numbers#1 as range 6
    // closed e.Strings#1 as range 8
    // closed e.Commands#1 as range 0
    if( ! refalrts::svar_left( context[12], context[4], context[5] ) )
      continue;
    // closed e.Labels#1 as range 4
    if( ! refalrts::svar_left( context[13], context[10], context[11] ) )
      continue;
    if( ! refalrts::svar_left( context[14], context[10], context[11] ) )
      continue;
    // closed e.Label#1 as range 10
    //0: e.Commands#1
    //2: e.Funcs#1
    //4: e.Labels#1
    //6: e.Numbers#1
    //8: e.Strings#1
    //10: e.Label#1
    //12: s.NextLabel#1
    //13: s.Direction#1
    //14: s.BracketNum#1
    //24: s.NextLabel#1
    //34: s.NextLabel#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[15] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[16], OutlineConstants, "OutlineConstants" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[17] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[18] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[19] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[20] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[21], Inc, "Inc" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[22] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[23] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[24], context[12]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[25] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[26] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[27] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[28] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[29] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[30] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[31] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[32] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[33], & ident_CmdiIdent<int>::name ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[34], context[24]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[35] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[32], context[35] );
    res = refalrts::splice_elem( res, context[35] );
    res = refalrts::splice_stvar( res, context[34] );
    res = refalrts::splice_stvar( res, context[14] );
    res = refalrts::splice_stvar( res, context[13] );
    res = refalrts::splice_elem( res, context[33] );
    res = refalrts::splice_elem( res, context[32] );
    refalrts::push_stack( context[31] );
    refalrts::push_stack( context[15] );
    res = refalrts::splice_elem( res, context[31] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    refalrts::link_brackets( context[29], context[30] );
    res = refalrts::splice_elem( res, context[30] );
    res = refalrts::splice_evar( res, context[8], context[9] );
    res = refalrts::splice_elem( res, context[29] );
    refalrts::link_brackets( context[27], context[28] );
    res = refalrts::splice_elem( res, context[28] );
    res = refalrts::splice_evar( res, context[6], context[7] );
    res = refalrts::splice_elem( res, context[27] );
    refalrts::link_brackets( context[19], context[26] );
    res = refalrts::splice_elem( res, context[26] );
    refalrts::link_brackets( context[23], context[25] );
    res = refalrts::splice_elem( res, context[25] );
    res = refalrts::splice_evar( res, context[10], context[11] );
    res = refalrts::splice_stvar( res, context[24] );
    res = refalrts::splice_elem( res, context[23] );
    res = refalrts::splice_evar( res, context[4], context[5] );
    refalrts::push_stack( context[22] );
    refalrts::push_stack( context[20] );
    res = refalrts::splice_elem( res, context[22] );
    res = refalrts::splice_stvar( res, context[12] );
    res = refalrts::splice_elem( res, context[21] );
    res = refalrts::splice_elem( res, context[20] );
    res = refalrts::splice_elem( res, context[19] );
    refalrts::link_brackets( context[17], context[18] );
    res = refalrts::splice_elem( res, context[18] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_elem( res, context[17] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_elem( res, context[15] );
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
    // ( e.Funcs#1/2 ) ( s.NextLabel#1/12 e.Labels_B#1/14 ( s.Num#1/20 e.Label#1/18 ) e.Labels_E#1/21 ) ( e.Numbers#1/6 ) ( e.Strings#1/8 ) e.Commands#1/0 ( # CmdiAllocateElem s.ElemNo#1/13 # ElIdent e.Label#1/10 )
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
    if( ! refalrts::brackets_right( context[10], context[11], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdiAllocateElem<int>::name, context[10], context[11] ) )
      continue;
    // closed e.Funcs#1 as range 2
    // closed e.Numbers#1 as range 6
    // closed e.Strings#1 as range 8
    // closed e.Commands#1 as range 0
    if( ! refalrts::svar_left( context[12], context[4], context[5] ) )
      continue;
    if( ! refalrts::svar_left( context[13], context[10], context[11] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_ElIdent<int>::name, context[10], context[11] ) )
      continue;
    // closed e.Label#1 as range 10
    context[14] = 0;
    context[15] = 0;
    refalrts::start_e_loop();
    do {
      context[21] = context[4];
      context[22] = context[5];
      context[16] = 0;
      context[17] = 0;
      if( ! refalrts::brackets_left( context[16], context[17], context[21], context[22] ) )
        continue;
      if( ! refalrts::repeated_evar_right( context[18], context[19], context[10], context[11], context[16], context[17] ) )
        continue;
      // closed e.Labels_E#1 as range 4
      if( ! refalrts::svar_left( context[20], context[16], context[17] ) )
        continue;
      if( ! refalrts::empty_seq( context[16], context[17] ) )
        continue;
      //0: e.Commands#1
      //2: e.Funcs#1
      //6: e.Numbers#1
      //8: e.Strings#1
      //10: e.Label#1
      //12: s.NextLabel#1
      //13: s.ElemNo#1
      //14: e.Labels_B#1
      //18: e.Label#1
      //20: s.Num#1
      //21: e.Labels_E#1
      //39: s.Num#1

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::alloc_open_call( context[23] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[24], OutlineConstants, "OutlineConstants" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[25] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[26] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[27] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[28] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[29] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[30] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[31] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[32] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[33] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[34] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[35] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[36] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[37], & ident_CmdiAllocateElem<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[38], & ident_ElIdent<int>::name ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[39], context[20]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[40] ) )
        return refalrts::cNoMemory;
      refalrts::link_brackets( context[36], context[40] );
      res = refalrts::splice_elem( res, context[40] );
      res = refalrts::splice_stvar( res, context[39] );
      res = refalrts::splice_elem( res, context[38] );
      res = refalrts::splice_stvar( res, context[13] );
      res = refalrts::splice_elem( res, context[37] );
      res = refalrts::splice_elem( res, context[36] );
      refalrts::push_stack( context[35] );
      refalrts::push_stack( context[23] );
      res = refalrts::splice_elem( res, context[35] );
      res = refalrts::splice_evar( res, context[0], context[1] );
      refalrts::link_brackets( context[33], context[34] );
      res = refalrts::splice_elem( res, context[34] );
      res = refalrts::splice_evar( res, context[8], context[9] );
      res = refalrts::splice_elem( res, context[33] );
      refalrts::link_brackets( context[31], context[32] );
      res = refalrts::splice_elem( res, context[32] );
      res = refalrts::splice_evar( res, context[6], context[7] );
      res = refalrts::splice_elem( res, context[31] );
      refalrts::link_brackets( context[27], context[30] );
      res = refalrts::splice_elem( res, context[30] );
      res = refalrts::splice_evar( res, context[21], context[22] );
      refalrts::link_brackets( context[28], context[29] );
      res = refalrts::splice_elem( res, context[29] );
      res = refalrts::splice_evar( res, context[10], context[11] );
      res = refalrts::splice_stvar( res, context[20] );
      res = refalrts::splice_elem( res, context[28] );
      res = refalrts::splice_evar( res, context[14], context[15] );
      res = refalrts::splice_stvar( res, context[12] );
      res = refalrts::splice_elem( res, context[27] );
      refalrts::link_brackets( context[25], context[26] );
      res = refalrts::splice_elem( res, context[26] );
      res = refalrts::splice_evar( res, context[2], context[3] );
      res = refalrts::splice_elem( res, context[25] );
      res = refalrts::splice_elem( res, context[24] );
      res = refalrts::splice_elem( res, context[23] );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[14], context[15], context[4], context[5] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    // ( e.Funcs#1/2 ) ( s.NextLabel#1/12 e.Labels#1/4 ) ( e.Numbers#1/6 ) ( e.Strings#1/8 ) e.Commands#1/0 ( # CmdiAllocateElem s.ElemNo#1/13 # ElIdent e.Label#1/10 )
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
    if( ! refalrts::brackets_right( context[10], context[11], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdiAllocateElem<int>::name, context[10], context[11] ) )
      continue;
    // closed e.Funcs#1 as range 2
    // closed e.Numbers#1 as range 6
    // closed e.Strings#1 as range 8
    // closed e.Commands#1 as range 0
    if( ! refalrts::svar_left( context[12], context[4], context[5] ) )
      continue;
    // closed e.Labels#1 as range 4
    if( ! refalrts::svar_left( context[13], context[10], context[11] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_ElIdent<int>::name, context[10], context[11] ) )
      continue;
    // closed e.Label#1 as range 10
    //0: e.Commands#1
    //2: e.Funcs#1
    //4: e.Labels#1
    //6: e.Numbers#1
    //8: e.Strings#1
    //10: e.Label#1
    //12: s.NextLabel#1
    //13: s.ElemNo#1
    //23: s.NextLabel#1
    //34: s.NextLabel#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[15], OutlineConstants, "OutlineConstants" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[17] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[18] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[19] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[20], Inc, "Inc" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[21] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[22] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[23], context[12]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[24] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[25] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[26] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[27] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[28] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[29] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[30] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[31] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[32], & ident_CmdiAllocateElem<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[33], & ident_ElIdent<int>::name ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[34], context[23]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[35] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[31], context[35] );
    res = refalrts::splice_elem( res, context[35] );
    res = refalrts::splice_stvar( res, context[34] );
    res = refalrts::splice_elem( res, context[33] );
    res = refalrts::splice_stvar( res, context[13] );
    res = refalrts::splice_elem( res, context[32] );
    res = refalrts::splice_elem( res, context[31] );
    refalrts::push_stack( context[30] );
    refalrts::push_stack( context[14] );
    res = refalrts::splice_elem( res, context[30] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    refalrts::link_brackets( context[28], context[29] );
    res = refalrts::splice_elem( res, context[29] );
    res = refalrts::splice_evar( res, context[8], context[9] );
    res = refalrts::splice_elem( res, context[28] );
    refalrts::link_brackets( context[26], context[27] );
    res = refalrts::splice_elem( res, context[27] );
    res = refalrts::splice_evar( res, context[6], context[7] );
    res = refalrts::splice_elem( res, context[26] );
    refalrts::link_brackets( context[18], context[25] );
    res = refalrts::splice_elem( res, context[25] );
    refalrts::link_brackets( context[22], context[24] );
    res = refalrts::splice_elem( res, context[24] );
    res = refalrts::splice_evar( res, context[10], context[11] );
    res = refalrts::splice_stvar( res, context[23] );
    res = refalrts::splice_elem( res, context[22] );
    res = refalrts::splice_evar( res, context[4], context[5] );
    refalrts::push_stack( context[21] );
    refalrts::push_stack( context[19] );
    res = refalrts::splice_elem( res, context[21] );
    res = refalrts::splice_stvar( res, context[12] );
    res = refalrts::splice_elem( res, context[20] );
    res = refalrts::splice_elem( res, context[19] );
    res = refalrts::splice_elem( res, context[18] );
    refalrts::link_brackets( context[16], context[17] );
    res = refalrts::splice_elem( res, context[17] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_elem( res, context[15] );
    res = refalrts::splice_elem( res, context[14] );
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
    // ( e.Funcs#1/2 ) ( e.Labels#1/4 ) ( s.NextNumId#1/12 e.Numbers_B#1/16 ( s.Id#1/21 s.Number#1/20 ) e.Numbers_E#1/22 ) ( e.Strings#1/8 ) e.Commands#1/0 ( # CmdiHugeNum s.Direction#1/13 s.BracketNum#1/14 s.Number#1/15 )
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
    if( ! refalrts::brackets_right( context[10], context[11], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdiHugeNum<int>::name, context[10], context[11] ) )
      continue;
    // closed e.Funcs#1 as range 2
    // closed e.Labels#1 as range 4
    // closed e.Strings#1 as range 8
    // closed e.Commands#1 as range 0
    if( ! refalrts::svar_left( context[12], context[6], context[7] ) )
      continue;
    if( ! refalrts::svar_left( context[13], context[10], context[11] ) )
      continue;
    if( ! refalrts::svar_left( context[14], context[10], context[11] ) )
      continue;
    if( ! refalrts::svar_left( context[15], context[10], context[11] ) )
      continue;
    if( ! refalrts::empty_seq( context[10], context[11] ) )
      continue;
    context[16] = 0;
    context[17] = 0;
    refalrts::start_e_loop();
    do {
      context[22] = context[6];
      context[23] = context[7];
      context[18] = 0;
      context[19] = 0;
      if( ! refalrts::brackets_left( context[18], context[19], context[22], context[23] ) )
        continue;
      if( ! refalrts::repeated_stvar_right( context[20], context[15], context[18], context[19] ) )
        continue;
      // closed e.Numbers_E#1 as range 6
      if( ! refalrts::svar_left( context[21], context[18], context[19] ) )
        continue;
      if( ! refalrts::empty_seq( context[18], context[19] ) )
        continue;
      //0: e.Commands#1
      //2: e.Funcs#1
      //4: e.Labels#1
      //8: e.Strings#1
      //12: s.NextNumId#1
      //13: s.Direction#1
      //14: s.BracketNum#1
      //15: s.Number#1
      //16: e.Numbers_B#1
      //20: s.Number#1
      //21: s.Id#1
      //22: e.Numbers_E#1
      //39: s.Id#1

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::alloc_open_call( context[24] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[25], OutlineConstants, "OutlineConstants" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[26] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[27] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[28] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[29] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[30] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[31] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[32] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[33] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[34] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[35] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[36] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[37] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[38], & ident_CmdiHugeNum<int>::name ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[39], context[21]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[40] ) )
        return refalrts::cNoMemory;
      refalrts::link_brackets( context[37], context[40] );
      res = refalrts::splice_elem( res, context[40] );
      res = refalrts::splice_stvar( res, context[39] );
      res = refalrts::splice_stvar( res, context[14] );
      res = refalrts::splice_stvar( res, context[13] );
      res = refalrts::splice_elem( res, context[38] );
      res = refalrts::splice_elem( res, context[37] );
      refalrts::push_stack( context[36] );
      refalrts::push_stack( context[24] );
      res = refalrts::splice_elem( res, context[36] );
      res = refalrts::splice_evar( res, context[0], context[1] );
      refalrts::link_brackets( context[34], context[35] );
      res = refalrts::splice_elem( res, context[35] );
      res = refalrts::splice_evar( res, context[8], context[9] );
      res = refalrts::splice_elem( res, context[34] );
      refalrts::link_brackets( context[30], context[33] );
      res = refalrts::splice_elem( res, context[33] );
      res = refalrts::splice_evar( res, context[22], context[23] );
      refalrts::link_brackets( context[31], context[32] );
      res = refalrts::splice_elem( res, context[32] );
      res = refalrts::splice_stvar( res, context[15] );
      res = refalrts::splice_stvar( res, context[21] );
      res = refalrts::splice_elem( res, context[31] );
      res = refalrts::splice_evar( res, context[16], context[17] );
      res = refalrts::splice_stvar( res, context[12] );
      res = refalrts::splice_elem( res, context[30] );
      refalrts::link_brackets( context[28], context[29] );
      res = refalrts::splice_elem( res, context[29] );
      res = refalrts::splice_evar( res, context[4], context[5] );
      res = refalrts::splice_elem( res, context[28] );
      refalrts::link_brackets( context[26], context[27] );
      res = refalrts::splice_elem( res, context[27] );
      res = refalrts::splice_evar( res, context[2], context[3] );
      res = refalrts::splice_elem( res, context[26] );
      res = refalrts::splice_elem( res, context[25] );
      res = refalrts::splice_elem( res, context[24] );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[16], context[17], context[6], context[7] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    // ( e.Funcs#1/2 ) ( e.Labels#1/4 ) ( s.NextNumId#1/12 e.Numbers#1/6 ) ( e.Strings#1/8 ) e.Commands#1/0 ( # CmdiHugeNum s.Direction#1/13 s.BracketNum#1/14 s.Number#1/15 )
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
    if( ! refalrts::brackets_right( context[10], context[11], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdiHugeNum<int>::name, context[10], context[11] ) )
      continue;
    // closed e.Funcs#1 as range 2
    // closed e.Labels#1 as range 4
    // closed e.Strings#1 as range 8
    // closed e.Commands#1 as range 0
    if( ! refalrts::svar_left( context[12], context[6], context[7] ) )
      continue;
    // closed e.Numbers#1 as range 6
    if( ! refalrts::svar_left( context[13], context[10], context[11] ) )
      continue;
    if( ! refalrts::svar_left( context[14], context[10], context[11] ) )
      continue;
    if( ! refalrts::svar_left( context[15], context[10], context[11] ) )
      continue;
    if( ! refalrts::empty_seq( context[10], context[11] ) )
      continue;
    //0: e.Commands#1
    //2: e.Funcs#1
    //4: e.Labels#1
    //6: e.Numbers#1
    //8: e.Strings#1
    //12: s.NextNumId#1
    //13: s.Direction#1
    //14: s.BracketNum#1
    //15: s.Number#1
    //27: s.NextNumId#1
    //35: s.NextNumId#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[17], OutlineConstants, "OutlineConstants" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[18] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[19] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[20] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[21] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[22] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[23] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[24], Inc, "Inc" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[25] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[26] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[27], context[12]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[28] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[29] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[30] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[31] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[32] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[33] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[34], & ident_CmdiHugeNum<int>::name ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[35], context[27]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[36] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[33], context[36] );
    res = refalrts::splice_elem( res, context[36] );
    res = refalrts::splice_stvar( res, context[35] );
    res = refalrts::splice_stvar( res, context[14] );
    res = refalrts::splice_stvar( res, context[13] );
    res = refalrts::splice_elem( res, context[34] );
    res = refalrts::splice_elem( res, context[33] );
    refalrts::push_stack( context[32] );
    refalrts::push_stack( context[16] );
    res = refalrts::splice_elem( res, context[32] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    refalrts::link_brackets( context[30], context[31] );
    res = refalrts::splice_elem( res, context[31] );
    res = refalrts::splice_evar( res, context[8], context[9] );
    res = refalrts::splice_elem( res, context[30] );
    refalrts::link_brackets( context[22], context[29] );
    res = refalrts::splice_elem( res, context[29] );
    refalrts::link_brackets( context[26], context[28] );
    res = refalrts::splice_elem( res, context[28] );
    res = refalrts::splice_stvar( res, context[15] );
    res = refalrts::splice_stvar( res, context[27] );
    res = refalrts::splice_elem( res, context[26] );
    res = refalrts::splice_evar( res, context[6], context[7] );
    refalrts::push_stack( context[25] );
    refalrts::push_stack( context[23] );
    res = refalrts::splice_elem( res, context[25] );
    res = refalrts::splice_stvar( res, context[12] );
    res = refalrts::splice_elem( res, context[24] );
    res = refalrts::splice_elem( res, context[23] );
    res = refalrts::splice_elem( res, context[22] );
    refalrts::link_brackets( context[20], context[21] );
    res = refalrts::splice_elem( res, context[21] );
    res = refalrts::splice_evar( res, context[4], context[5] );
    res = refalrts::splice_elem( res, context[20] );
    refalrts::link_brackets( context[18], context[19] );
    res = refalrts::splice_elem( res, context[19] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_elem( res, context[18] );
    res = refalrts::splice_elem( res, context[17] );
    res = refalrts::splice_elem( res, context[16] );
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
    // ( e.Funcs#1/2 ) ( e.Labels#1/4 ) ( s.NextNumId#1/12 e.Numbers_B#1/15 ( s.Id#1/20 s.Number#1/19 ) e.Numbers_E#1/21 ) ( e.Strings#1/8 ) e.Commands#1/0 ( # CmdiAllocateElem s.ElemNo#1/13 # ElHugeNumber s.Number#1/14 )
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
    if( ! refalrts::brackets_right( context[10], context[11], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdiAllocateElem<int>::name, context[10], context[11] ) )
      continue;
    // closed e.Funcs#1 as range 2
    // closed e.Labels#1 as range 4
    // closed e.Strings#1 as range 8
    // closed e.Commands#1 as range 0
    if( ! refalrts::svar_left( context[12], context[6], context[7] ) )
      continue;
    if( ! refalrts::svar_left( context[13], context[10], context[11] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_ElHugeNumber<int>::name, context[10], context[11] ) )
      continue;
    if( ! refalrts::svar_left( context[14], context[10], context[11] ) )
      continue;
    if( ! refalrts::empty_seq( context[10], context[11] ) )
      continue;
    context[15] = 0;
    context[16] = 0;
    refalrts::start_e_loop();
    do {
      context[21] = context[6];
      context[22] = context[7];
      context[17] = 0;
      context[18] = 0;
      if( ! refalrts::brackets_left( context[17], context[18], context[21], context[22] ) )
        continue;
      if( ! refalrts::repeated_stvar_right( context[19], context[14], context[17], context[18] ) )
        continue;
      // closed e.Numbers_E#1 as range 6
      if( ! refalrts::svar_left( context[20], context[17], context[18] ) )
        continue;
      if( ! refalrts::empty_seq( context[17], context[18] ) )
        continue;
      //0: e.Commands#1
      //2: e.Funcs#1
      //4: e.Labels#1
      //8: e.Strings#1
      //12: s.NextNumId#1
      //13: s.ElemNo#1
      //14: s.Number#1
      //15: e.Numbers_B#1
      //19: s.Number#1
      //20: s.Id#1
      //21: e.Numbers_E#1
      //39: s.Id#1

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::alloc_open_call( context[23] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[24], OutlineConstants, "OutlineConstants" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[25] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[26] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[27] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[28] ) )
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
      if( ! refalrts::alloc_close_bracket( context[34] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[35] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[36] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[37], & ident_CmdiAllocateElem<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[38], & ident_ElHugeNumber<int>::name ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[39], context[20]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[40] ) )
        return refalrts::cNoMemory;
      refalrts::link_brackets( context[36], context[40] );
      res = refalrts::splice_elem( res, context[40] );
      res = refalrts::splice_stvar( res, context[39] );
      res = refalrts::splice_elem( res, context[38] );
      res = refalrts::splice_stvar( res, context[13] );
      res = refalrts::splice_elem( res, context[37] );
      res = refalrts::splice_elem( res, context[36] );
      refalrts::push_stack( context[35] );
      refalrts::push_stack( context[23] );
      res = refalrts::splice_elem( res, context[35] );
      res = refalrts::splice_evar( res, context[0], context[1] );
      refalrts::link_brackets( context[33], context[34] );
      res = refalrts::splice_elem( res, context[34] );
      res = refalrts::splice_evar( res, context[8], context[9] );
      res = refalrts::splice_elem( res, context[33] );
      refalrts::link_brackets( context[29], context[32] );
      res = refalrts::splice_elem( res, context[32] );
      res = refalrts::splice_evar( res, context[21], context[22] );
      refalrts::link_brackets( context[30], context[31] );
      res = refalrts::splice_elem( res, context[31] );
      res = refalrts::splice_stvar( res, context[14] );
      res = refalrts::splice_stvar( res, context[20] );
      res = refalrts::splice_elem( res, context[30] );
      res = refalrts::splice_evar( res, context[15], context[16] );
      res = refalrts::splice_stvar( res, context[12] );
      res = refalrts::splice_elem( res, context[29] );
      refalrts::link_brackets( context[27], context[28] );
      res = refalrts::splice_elem( res, context[28] );
      res = refalrts::splice_evar( res, context[4], context[5] );
      res = refalrts::splice_elem( res, context[27] );
      refalrts::link_brackets( context[25], context[26] );
      res = refalrts::splice_elem( res, context[26] );
      res = refalrts::splice_evar( res, context[2], context[3] );
      res = refalrts::splice_elem( res, context[25] );
      res = refalrts::splice_elem( res, context[24] );
      res = refalrts::splice_elem( res, context[23] );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[15], context[16], context[6], context[7] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    // ( e.Funcs#1/2 ) ( e.Labels#1/4 ) ( s.NextNumId#1/12 e.Numbers#1/6 ) ( e.Strings#1/8 ) e.Commands#1/0 ( # CmdiAllocateElem s.ElemNo#1/13 # ElHugeNumber s.Number#1/14 )
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
    if( ! refalrts::brackets_right( context[10], context[11], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdiAllocateElem<int>::name, context[10], context[11] ) )
      continue;
    // closed e.Funcs#1 as range 2
    // closed e.Labels#1 as range 4
    // closed e.Strings#1 as range 8
    // closed e.Commands#1 as range 0
    if( ! refalrts::svar_left( context[12], context[6], context[7] ) )
      continue;
    // closed e.Numbers#1 as range 6
    if( ! refalrts::svar_left( context[13], context[10], context[11] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_ElHugeNumber<int>::name, context[10], context[11] ) )
      continue;
    if( ! refalrts::svar_left( context[14], context[10], context[11] ) )
      continue;
    if( ! refalrts::empty_seq( context[10], context[11] ) )
      continue;
    //0: e.Commands#1
    //2: e.Funcs#1
    //4: e.Labels#1
    //6: e.Numbers#1
    //8: e.Strings#1
    //12: s.NextNumId#1
    //13: s.ElemNo#1
    //14: s.Number#1
    //26: s.NextNumId#1
    //35: s.NextNumId#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[15] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[16], OutlineConstants, "OutlineConstants" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[17] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[18] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[19] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[20] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[21] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[22] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[23], Inc, "Inc" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[24] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[25] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[26], context[12]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[27] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[28] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[29] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[30] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[31] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[32] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[33], & ident_CmdiAllocateElem<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[34], & ident_ElHugeNumber<int>::name ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[35], context[26]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[36] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[32], context[36] );
    res = refalrts::splice_elem( res, context[36] );
    res = refalrts::splice_stvar( res, context[35] );
    res = refalrts::splice_elem( res, context[34] );
    res = refalrts::splice_stvar( res, context[13] );
    res = refalrts::splice_elem( res, context[33] );
    res = refalrts::splice_elem( res, context[32] );
    refalrts::push_stack( context[31] );
    refalrts::push_stack( context[15] );
    res = refalrts::splice_elem( res, context[31] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    refalrts::link_brackets( context[29], context[30] );
    res = refalrts::splice_elem( res, context[30] );
    res = refalrts::splice_evar( res, context[8], context[9] );
    res = refalrts::splice_elem( res, context[29] );
    refalrts::link_brackets( context[21], context[28] );
    res = refalrts::splice_elem( res, context[28] );
    refalrts::link_brackets( context[25], context[27] );
    res = refalrts::splice_elem( res, context[27] );
    res = refalrts::splice_stvar( res, context[14] );
    res = refalrts::splice_stvar( res, context[26] );
    res = refalrts::splice_elem( res, context[25] );
    res = refalrts::splice_evar( res, context[6], context[7] );
    refalrts::push_stack( context[24] );
    refalrts::push_stack( context[22] );
    res = refalrts::splice_elem( res, context[24] );
    res = refalrts::splice_stvar( res, context[12] );
    res = refalrts::splice_elem( res, context[23] );
    res = refalrts::splice_elem( res, context[22] );
    res = refalrts::splice_elem( res, context[21] );
    refalrts::link_brackets( context[19], context[20] );
    res = refalrts::splice_elem( res, context[20] );
    res = refalrts::splice_evar( res, context[4], context[5] );
    res = refalrts::splice_elem( res, context[19] );
    refalrts::link_brackets( context[17], context[18] );
    res = refalrts::splice_elem( res, context[18] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_elem( res, context[17] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_elem( res, context[15] );
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
    // ( e.Funcs#1/2 ) ( e.Labels#1/4 ) ( e.Numbers#1/6 ) ( s.NextStringId#1/12 e.Strings_B#1/14 ( s.Id#1/20 e.String#1/18 ) e.Strings_E#1/21 ) e.Commands#1/0 ( # CmdiAllocateElem s.ElemNo#1/13 # ElString e.String#1/10 )
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
    if( ! refalrts::brackets_right( context[10], context[11], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdiAllocateElem<int>::name, context[10], context[11] ) )
      continue;
    // closed e.Funcs#1 as range 2
    // closed e.Labels#1 as range 4
    // closed e.Numbers#1 as range 6
    // closed e.Commands#1 as range 0
    if( ! refalrts::svar_left( context[12], context[8], context[9] ) )
      continue;
    if( ! refalrts::svar_left( context[13], context[10], context[11] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_ElString<int>::name, context[10], context[11] ) )
      continue;
    // closed e.String#1 as range 10
    context[14] = 0;
    context[15] = 0;
    refalrts::start_e_loop();
    do {
      context[21] = context[8];
      context[22] = context[9];
      context[16] = 0;
      context[17] = 0;
      if( ! refalrts::brackets_left( context[16], context[17], context[21], context[22] ) )
        continue;
      if( ! refalrts::repeated_evar_right( context[18], context[19], context[10], context[11], context[16], context[17] ) )
        continue;
      // closed e.Strings_E#1 as range 8
      if( ! refalrts::svar_left( context[20], context[16], context[17] ) )
        continue;
      if( ! refalrts::empty_seq( context[16], context[17] ) )
        continue;
      //0: e.Commands#1
      //2: e.Funcs#1
      //4: e.Labels#1
      //6: e.Numbers#1
      //10: e.String#1
      //12: s.NextStringId#1
      //13: s.ElemNo#1
      //14: e.Strings_B#1
      //18: e.String#1
      //20: s.Id#1
      //21: e.Strings_E#1
      //39: s.Id#1

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::alloc_open_call( context[23] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[24], OutlineConstants, "OutlineConstants" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[25] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[26] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[27] ) )
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
      if( ! refalrts::alloc_close_bracket( context[33] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[34] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[35] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[36] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[37], & ident_CmdiAllocateElem<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[38], & ident_ElString<int>::name ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[39], context[20]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[40] ) )
        return refalrts::cNoMemory;
      refalrts::link_brackets( context[36], context[40] );
      res = refalrts::splice_elem( res, context[40] );
      res = refalrts::splice_stvar( res, context[39] );
      res = refalrts::splice_elem( res, context[38] );
      res = refalrts::splice_stvar( res, context[13] );
      res = refalrts::splice_elem( res, context[37] );
      res = refalrts::splice_elem( res, context[36] );
      refalrts::push_stack( context[35] );
      refalrts::push_stack( context[23] );
      res = refalrts::splice_elem( res, context[35] );
      res = refalrts::splice_evar( res, context[0], context[1] );
      refalrts::link_brackets( context[31], context[34] );
      res = refalrts::splice_elem( res, context[34] );
      res = refalrts::splice_evar( res, context[21], context[22] );
      refalrts::link_brackets( context[32], context[33] );
      res = refalrts::splice_elem( res, context[33] );
      res = refalrts::splice_evar( res, context[10], context[11] );
      res = refalrts::splice_stvar( res, context[20] );
      res = refalrts::splice_elem( res, context[32] );
      res = refalrts::splice_evar( res, context[14], context[15] );
      res = refalrts::splice_stvar( res, context[12] );
      res = refalrts::splice_elem( res, context[31] );
      refalrts::link_brackets( context[29], context[30] );
      res = refalrts::splice_elem( res, context[30] );
      res = refalrts::splice_evar( res, context[6], context[7] );
      res = refalrts::splice_elem( res, context[29] );
      refalrts::link_brackets( context[27], context[28] );
      res = refalrts::splice_elem( res, context[28] );
      res = refalrts::splice_evar( res, context[4], context[5] );
      res = refalrts::splice_elem( res, context[27] );
      refalrts::link_brackets( context[25], context[26] );
      res = refalrts::splice_elem( res, context[26] );
      res = refalrts::splice_evar( res, context[2], context[3] );
      res = refalrts::splice_elem( res, context[25] );
      res = refalrts::splice_elem( res, context[24] );
      res = refalrts::splice_elem( res, context[23] );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[14], context[15], context[8], context[9] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    // ( e.Funcs#1/2 ) ( e.Labels#1/4 ) ( e.Numbers#1/6 ) ( s.NextStringId#1/12 e.Strings#1/8 ) e.Commands#1/0 ( # CmdiAllocateElem s.ElemNo#1/13 # ElString e.String#1/10 )
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
    if( ! refalrts::brackets_right( context[10], context[11], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdiAllocateElem<int>::name, context[10], context[11] ) )
      continue;
    // closed e.Funcs#1 as range 2
    // closed e.Labels#1 as range 4
    // closed e.Numbers#1 as range 6
    // closed e.Commands#1 as range 0
    if( ! refalrts::svar_left( context[12], context[8], context[9] ) )
      continue;
    // closed e.Strings#1 as range 8
    if( ! refalrts::svar_left( context[13], context[10], context[11] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_ElString<int>::name, context[10], context[11] ) )
      continue;
    // closed e.String#1 as range 10
    //0: e.Commands#1
    //2: e.Funcs#1
    //4: e.Labels#1
    //6: e.Numbers#1
    //8: e.Strings#1
    //10: e.String#1
    //12: s.NextStringId#1
    //13: s.ElemNo#1
    //27: s.NextStringId#1
    //34: s.NextStringId#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[15], OutlineConstants, "OutlineConstants" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[16] ) )
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
    if( ! refalrts::alloc_open_bracket( context[22] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[23] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[24], Inc, "Inc" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[25] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[26] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[27], context[12]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[28] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[29] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[30] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[31] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[32], & ident_CmdiAllocateElem<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[33], & ident_ElString<int>::name ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[34], context[27]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[35] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[31], context[35] );
    res = refalrts::splice_elem( res, context[35] );
    res = refalrts::splice_stvar( res, context[34] );
    res = refalrts::splice_elem( res, context[33] );
    res = refalrts::splice_stvar( res, context[13] );
    res = refalrts::splice_elem( res, context[32] );
    res = refalrts::splice_elem( res, context[31] );
    refalrts::push_stack( context[30] );
    refalrts::push_stack( context[14] );
    res = refalrts::splice_elem( res, context[30] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    refalrts::link_brackets( context[22], context[29] );
    res = refalrts::splice_elem( res, context[29] );
    refalrts::link_brackets( context[26], context[28] );
    res = refalrts::splice_elem( res, context[28] );
    res = refalrts::splice_evar( res, context[10], context[11] );
    res = refalrts::splice_stvar( res, context[27] );
    res = refalrts::splice_elem( res, context[26] );
    res = refalrts::splice_evar( res, context[8], context[9] );
    refalrts::push_stack( context[25] );
    refalrts::push_stack( context[23] );
    res = refalrts::splice_elem( res, context[25] );
    res = refalrts::splice_stvar( res, context[12] );
    res = refalrts::splice_elem( res, context[24] );
    res = refalrts::splice_elem( res, context[23] );
    res = refalrts::splice_elem( res, context[22] );
    refalrts::link_brackets( context[20], context[21] );
    res = refalrts::splice_elem( res, context[21] );
    res = refalrts::splice_evar( res, context[6], context[7] );
    res = refalrts::splice_elem( res, context[20] );
    refalrts::link_brackets( context[18], context[19] );
    res = refalrts::splice_elem( res, context[19] );
    res = refalrts::splice_evar( res, context[4], context[5] );
    res = refalrts::splice_elem( res, context[18] );
    refalrts::link_brackets( context[16], context[17] );
    res = refalrts::splice_elem( res, context[17] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_elem( res, context[15] );
    res = refalrts::splice_elem( res, context[14] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  refalrts::move_left( context[0], context[1] );
  refalrts::move_left( context[0], context[1] );
  refalrts::move_right( context[0], context[1] );
  // ( e.Funcs#1/2 ) ( e.Labels#1/4 ) ( e.Numbers#1/6 ) ( e.Strings#1/8 ) e.Commands#1/0 t.OtherCommand#1/10
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
  // closed e.Funcs#1 as range 2
  // closed e.Labels#1 as range 4
  // closed e.Numbers#1 as range 6
  // closed e.Strings#1 as range 8
  if( ! refalrts::tvar_right( context[10], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Commands#1 as range 0
  //0: e.Commands#1
  //2: e.Funcs#1
  //4: e.Labels#1
  //6: e.Numbers#1
  //8: e.Strings#1
  //10: t.OtherCommand#1

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_call( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[12], OutlineConstants, "OutlineConstants" ) )
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
  if( ! refalrts::alloc_open_bracket( context[19] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[20] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[21] ) )
    return refalrts::cNoMemory;
  res = refalrts::splice_stvar( res, context[10] );
  refalrts::push_stack( context[21] );
  refalrts::push_stack( context[11] );
  res = refalrts::splice_elem( res, context[21] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  refalrts::link_brackets( context[19], context[20] );
  res = refalrts::splice_elem( res, context[20] );
  res = refalrts::splice_evar( res, context[8], context[9] );
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
#endif
}

static refalrts::FnResult PrepareOpenEStack(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { PrepareOpenEStack, "PrepareOpenEStack" },
    { Inc, "Inc" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_CmdiReserveStack<int>::name,
    & ident_CmdiOnFailGoTo<int>::name,
    & ident_CmdiEStart<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +32, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( # CmdiEStart e.VarInfo#1/2 ) e.Commands#1/0 s.Depth#1/4
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icIdentLeft, 0, 2, 2},
    // closed e.VarInfo#1 as range 2
    {refalrts::icsVarRight, 0, 4, 0},
    // closed e.Commands#1 as range 0
    //0: e.Commands#1
    //2: e.VarInfo#1
    //4: s.Depth#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 5},
    {refalrts::icIdent, 0, 2, 6},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 7},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 8},
    {refalrts::icFunc, 0, 0, 9},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 10},
    {refalrts::icFunc, 0, 1, 11},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 12},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 13},
    {refalrts::icPushStack, 0, 0, 13},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icPushStack, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceSTVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icLinkBrackets, 5, 7, 0},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +34, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( # CmdiOnFailGoTo s.Offset#1/4 ) e.Commands#1/0 s.Depth#1/5
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icIdentLeft, 0, 1, 2},
    {refalrts::icsVarLeft, 0, 4, 2},
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icsVarRight, 0, 5, 0},
    // closed e.Commands#1 as range 0
    //0: e.Commands#1
    //4: s.Offset#1
    //5: s.Depth#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icIdent, 0, 1, 7},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 8},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 9},
    {refalrts::icFunc, 0, 0, 10},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 11},
    {refalrts::icFunc, 0, 1, 12},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 13},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 14},
    {refalrts::icPushStack, 0, 0, 14},
    {refalrts::icPushStack, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icPushStack, 0, 0, 13},
    {refalrts::icPushStack, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceSTVar, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icLinkBrackets, 6, 8, 0},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceSTVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +16, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // t.OtherCommand#1/2 e.Commands#1/0 s.Depth#1/3
    {refalrts::ictVarLeft, 0, 2, 0},
    {refalrts::icsVarRight, 0, 3, 0},
    // closed e.Commands#1 as range 0
    //0: e.Commands#1
    //2: t.OtherCommand#1
    //3: s.Depth#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 4},
    {refalrts::icFunc, 0, 0, 5},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 6},
    {refalrts::icPushStack, 0, 0, 6},
    {refalrts::icPushStack, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceSTVar, 0, 0, 3},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icSpliceSTVar, 0, 0, 2},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // s.Depth#1/2
    {refalrts::icsVarLeft, 0, 2, 0},
    {refalrts::icEmpty, 0, 0, 0},
    //2: s.Depth#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 3},
    {refalrts::icIdent, 0, 0, 4},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 5},
    {refalrts::icLinkBrackets, 3, 5, 0},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icSpliceSTVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 3},
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
    // ( # CmdiEStart e.VarInfo#1/2 ) e.Commands#1/0 s.Depth#1/4
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdiEStart<int>::name, context[2], context[3] ) )
      continue;
    // closed e.VarInfo#1 as range 2
    if( ! refalrts::svar_right( context[4], context[0], context[1] ) )
      continue;
    // closed e.Commands#1 as range 0
    //0: e.Commands#1
    //2: e.VarInfo#1
    //4: s.Depth#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[5] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[6], & ident_CmdiEStart<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[7] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[9], PrepareOpenEStack, "PrepareOpenEStack" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[11], Inc, "Inc" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[13] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[13] );
    refalrts::push_stack( context[8] );
    res = refalrts::splice_elem( res, context[13] );
    refalrts::push_stack( context[12] );
    refalrts::push_stack( context[10] );
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_stvar( res, context[4] );
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_elem( res, context[10] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    res = refalrts::splice_elem( res, context[9] );
    res = refalrts::splice_elem( res, context[8] );
    refalrts::link_brackets( context[5], context[7] );
    res = refalrts::splice_elem( res, context[7] );
    res = refalrts::splice_evar( res, context[2], context[3] );
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
    // ( # CmdiOnFailGoTo s.Offset#1/4 ) e.Commands#1/0 s.Depth#1/5
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdiOnFailGoTo<int>::name, context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[4], context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_right( context[5], context[0], context[1] ) )
      continue;
    // closed e.Commands#1 as range 0
    //0: e.Commands#1
    //4: s.Offset#1
    //5: s.Depth#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[7], & ident_CmdiOnFailGoTo<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[9] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[10], PrepareOpenEStack, "PrepareOpenEStack" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[12], Inc, "Inc" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[14] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[14] );
    refalrts::push_stack( context[9] );
    res = refalrts::splice_elem( res, context[14] );
    refalrts::push_stack( context[13] );
    refalrts::push_stack( context[11] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_stvar( res, context[5] );
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    res = refalrts::splice_elem( res, context[10] );
    res = refalrts::splice_elem( res, context[9] );
    refalrts::link_brackets( context[6], context[8] );
    res = refalrts::splice_elem( res, context[8] );
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
    // t.OtherCommand#1/2 e.Commands#1/0 s.Depth#1/3
    if( ! refalrts::tvar_left( context[2], context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_right( context[3], context[0], context[1] ) )
      continue;
    // closed e.Commands#1 as range 0
    //0: e.Commands#1
    //2: t.OtherCommand#1
    //3: s.Depth#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[4] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[5], PrepareOpenEStack, "PrepareOpenEStack" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[6] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[6] );
    refalrts::push_stack( context[4] );
    res = refalrts::splice_elem( res, context[6] );
    res = refalrts::splice_stvar( res, context[3] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    res = refalrts::splice_elem( res, context[5] );
    res = refalrts::splice_elem( res, context[4] );
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
  // s.Depth#1/2
  if( ! refalrts::svar_left( context[2], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  //2: s.Depth#1

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_bracket( context[3] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[4], & ident_CmdiReserveStack<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[5] ) )
    return refalrts::cNoMemory;
  refalrts::link_brackets( context[3], context[5] );
  res = refalrts::splice_elem( res, context[5] );
  res = refalrts::splice_stvar( res, context[2] );
  res = refalrts::splice_elem( res, context[4] );
  res = refalrts::splice_elem( res, context[3] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult GenerateResult_Sentences(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { GenerateResult_Sentences, "GenerateResult_Sentences" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_AlgLeft<int>::name,
    & ident_CmdOpenedE_End<int>::name,
    & ident_CmdOpenedE_Start<int>::name,
    & ident_CmdOpenELoop<int>::name,
    & ident_CmdEndSentence<int>::name,
    & ident_CmdStartSentence<int>::name,
    & ident_CmdSentence<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +37, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( # CmdSentence e.SubCommands#1/2 ) e.Tail#1/0
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icIdentLeft, 0, 6, 2},
    // closed e.SubCommands#1 as range 2
    // closed e.Tail#1 as range 0
    //0: e.Tail#1
    //2: e.SubCommands#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 4},
    {refalrts::icIdent, 0, 5, 5},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 6},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 7},
    {refalrts::icFunc, 0, 0, 8},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 9},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 10},
    {refalrts::icIdent, 0, 4, 11},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 12},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 13},
    {refalrts::icFunc, 0, 0, 14},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 15},
    {refalrts::icPushStack, 0, 0, 15},
    {refalrts::icPushStack, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icLinkBrackets, 10, 12, 0},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icPushStack, 0, 0, 9},
    {refalrts::icPushStack, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icLinkBrackets, 4, 6, 0},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +50, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( # CmdOpenELoop # AlgLeft s.BracketNum#1/4 s.VarNumber#1/5 e.SubCommands#1/2 ) e.Tail#1/0
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icIdentLeft, 0, 3, 2},
    {refalrts::icIdentLeft, 0, 0, 2},
    // closed e.Tail#1 as range 0
    {refalrts::icsVarLeft, 0, 4, 2},
    {refalrts::icsVarLeft, 0, 5, 2},
    // closed e.SubCommands#1 as range 2
    //0: e.Tail#1
    //2: e.SubCommands#1
    //4: s.BracketNum#1
    //5: s.VarNumber#1
    //16: s.BracketNum#1
    //17: s.VarNumber#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icIdent, 0, 2, 7},
    {refalrts::icIdent, 0, 0, 8},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 9},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 10},
    {refalrts::icFunc, 0, 0, 11},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 12},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 13},
    {refalrts::icIdent, 0, 1, 14},
    {refalrts::icIdent, 0, 0, 15},
    {refalrts::icCopySTVar, 16, 4, 0},
    {refalrts::icCopySTVar, 17, 5, 0},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 18},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 19},
    {refalrts::icFunc, 0, 0, 20},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 21},
    {refalrts::icPushStack, 0, 0, 21},
    {refalrts::icPushStack, 0, 0, 19},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icLinkBrackets, 13, 18, 0},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceSTVar, 0, 0, 17},
    {refalrts::icSpliceSTVar, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icPushStack, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icLinkBrackets, 6, 9, 0},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceSTVar, 0, 0, 5},
    {refalrts::icSpliceSTVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +14, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // t.Command#1/2 e.Tail#1/0
    {refalrts::ictVarLeft, 0, 2, 0},
    // closed e.Tail#1 as range 0
    //0: e.Tail#1
    //2: t.Command#1
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
    // ( # CmdSentence e.SubCommands#1/2 ) e.Tail#1/0
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdSentence<int>::name, context[2], context[3] ) )
      continue;
    // closed e.SubCommands#1 as range 2
    // closed e.Tail#1 as range 0
    //0: e.Tail#1
    //2: e.SubCommands#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[4] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[5], & ident_CmdStartSentence<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[7] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[8], GenerateResult_Sentences, "GenerateResult_Sentences" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[9] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[11], & ident_CmdEndSentence<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[14], GenerateResult_Sentences, "GenerateResult_Sentences" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[15] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[15] );
    refalrts::push_stack( context[13] );
    res = refalrts::splice_elem( res, context[15] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    res = refalrts::splice_elem( res, context[14] );
    res = refalrts::splice_elem( res, context[13] );
    refalrts::link_brackets( context[10], context[12] );
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_elem( res, context[10] );
    refalrts::push_stack( context[9] );
    refalrts::push_stack( context[7] );
    res = refalrts::splice_elem( res, context[9] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_elem( res, context[8] );
    res = refalrts::splice_elem( res, context[7] );
    refalrts::link_brackets( context[4], context[6] );
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
    // ( # CmdOpenELoop # AlgLeft s.BracketNum#1/4 s.VarNumber#1/5 e.SubCommands#1/2 ) e.Tail#1/0
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_CmdOpenELoop<int>::name, context[2], context[3] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_AlgLeft<int>::name, context[2], context[3] ) )
      continue;
    // closed e.Tail#1 as range 0
    if( ! refalrts::svar_left( context[4], context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
      continue;
    // closed e.SubCommands#1 as range 2
    //0: e.Tail#1
    //2: e.SubCommands#1
    //4: s.BracketNum#1
    //5: s.VarNumber#1
    //16: s.BracketNum#1
    //17: s.VarNumber#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_bracket( context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[7], & ident_CmdOpenedE_Start<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[8], & ident_AlgLeft<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[9] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[11], GenerateResult_Sentences, "GenerateResult_Sentences" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[14], & ident_CmdOpenedE_End<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[15], & ident_AlgLeft<int>::name ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[16], context[4]))
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[17], context[5]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[18] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[19] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[20], GenerateResult_Sentences, "GenerateResult_Sentences" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[21] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[21] );
    refalrts::push_stack( context[19] );
    res = refalrts::splice_elem( res, context[21] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    res = refalrts::splice_elem( res, context[20] );
    res = refalrts::splice_elem( res, context[19] );
    refalrts::link_brackets( context[13], context[18] );
    res = refalrts::splice_elem( res, context[18] );
    res = refalrts::splice_stvar( res, context[17] );
    res = refalrts::splice_stvar( res, context[16] );
    res = refalrts::splice_elem( res, context[15] );
    res = refalrts::splice_elem( res, context[14] );
    res = refalrts::splice_elem( res, context[13] );
    refalrts::push_stack( context[12] );
    refalrts::push_stack( context[10] );
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_elem( res, context[10] );
    refalrts::link_brackets( context[6], context[9] );
    res = refalrts::splice_elem( res, context[9] );
    res = refalrts::splice_stvar( res, context[5] );
    res = refalrts::splice_stvar( res, context[4] );
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
    // t.Command#1/2 e.Tail#1/0
    if( ! refalrts::tvar_left( context[2], context[0], context[1] ) )
      continue;
    // closed e.Tail#1 as range 0
    //0: e.Tail#1
    //2: t.Command#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[3] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[4], GenerateResult_Sentences, "GenerateResult_Sentences" ) )
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


//End of file
