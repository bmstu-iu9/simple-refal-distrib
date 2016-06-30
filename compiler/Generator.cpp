// Automatically generated file. Don't edit!
#include "refalrts.h"


extern refalrts::FnResult Add(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult EscapeChar(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Fetch(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult GenProgram(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Inc(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Map(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult MapReduce(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult StrFromInt(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult WriteLine(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult AllocatorCommandInfo(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult AllocatorCommandTag(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult AllocatorFuncArgument(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult AllocatorFuncName(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult BreakerFromIndent(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult ContextItem(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult ContextRange(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult ContextRange_B(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult ContextRange_E(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult DoPrintLength(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult Escape(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult EscapeString(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult FuncArguments(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult GenCommand(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult GenCommonHeaders(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult GenCommonTailer(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult GenExtern(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult GenFnStart(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult GenForward(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult GenIdent(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult GenReturn(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult GenSwap(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult NakedArguments(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult PrintBracketsVarInit(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult PrintCreateElem(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult PrintDirection(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult PrintInterpretAllocateElem(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult PrintLength(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult PrintMatch(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult PrintMatchADT(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult PrintMatchADTSave(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult PrintMatchBrackets(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult PrintMatchBracketsSave(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult PrintMatchChar(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult PrintMatchCharSave(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult PrintMatchEmpty(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult PrintMatchIdent(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult PrintMatchIdentSave(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult PrintMatchName(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult PrintMatchNameSave(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult PrintMatchNumber(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult PrintMatchNumberSave(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult PrintMatchRepeated(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult PrintMatchRepeatedSave(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult PrintMatchSTVar(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult PrintMatchSTVarSave(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult PrintMatchSave(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult PrintName(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult PrintString(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult StrFromDirection(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult SwGenFnStart(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult TextFromMemoryClass(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult VarMatchFunction(refalrts::Iter arg_begin, refalrts::Iter arg_end);

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

// identifier #CmdADT
template <typename SREFAL_PARAM_INT>
struct ident_CmdADT {
  static const char *name() {
    return "CmdADT";
  }
};

// identifier #CmdADTSave
template <typename SREFAL_PARAM_INT>
struct ident_CmdADTSave {
  static const char *name() {
    return "CmdADTSave";
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

// identifier #CmdBracketsSave
template <typename SREFAL_PARAM_INT>
struct ident_CmdBracketsSave {
  static const char *name() {
    return "CmdBracketsSave";
  }
};

// identifier #CmdCallSave
template <typename SREFAL_PARAM_INT>
struct ident_CmdCallSave {
  static const char *name() {
    return "CmdCallSave";
  }
};

// identifier #CmdChar
template <typename SREFAL_PARAM_INT>
struct ident_CmdChar {
  static const char *name() {
    return "CmdChar";
  }
};

// identifier #CmdCharSave
template <typename SREFAL_PARAM_INT>
struct ident_CmdCharSave {
  static const char *name() {
    return "CmdCharSave";
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

// identifier #CmdIdentSave
template <typename SREFAL_PARAM_INT>
struct ident_CmdIdentSave {
  static const char *name() {
    return "CmdIdentSave";
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

// identifier #CmdInitB0_Lite
template <typename SREFAL_PARAM_INT>
struct ident_CmdInitB0_Lite {
  static const char *name() {
    return "CmdInitB0_Lite";
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

// identifier #CmdInsertTile
template <typename SREFAL_PARAM_INT>
struct ident_CmdInsertTile {
  static const char *name() {
    return "CmdInsertTile";
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

// identifier #CmdNameSave
template <typename SREFAL_PARAM_INT>
struct ident_CmdNameSave {
  static const char *name() {
    return "CmdNameSave";
  }
};

// identifier #CmdNumber
template <typename SREFAL_PARAM_INT>
struct ident_CmdNumber {
  static const char *name() {
    return "CmdNumber";
  }
};

// identifier #CmdNumberSave
template <typename SREFAL_PARAM_INT>
struct ident_CmdNumberSave {
  static const char *name() {
    return "CmdNumberSave";
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

// identifier #CmdReinitElem
template <typename SREFAL_PARAM_INT>
struct ident_CmdReinitElem {
  static const char *name() {
    return "CmdReinitElem";
  }
};

// identifier #CmdReinitSVar
template <typename SREFAL_PARAM_INT>
struct ident_CmdReinitSVar {
  static const char *name() {
    return "CmdReinitSVar";
  }
};

// identifier #CmdRepeated
template <typename SREFAL_PARAM_INT>
struct ident_CmdRepeated {
  static const char *name() {
    return "CmdRepeated";
  }
};

// identifier #CmdRepeatedSave
template <typename SREFAL_PARAM_INT>
struct ident_CmdRepeatedSave {
  static const char *name() {
    return "CmdRepeatedSave";
  }
};

// identifier #CmdResetAllocator
template <typename SREFAL_PARAM_INT>
struct ident_CmdResetAllocator {
  static const char *name() {
    return "CmdResetAllocator";
  }
};

// identifier #CmdReturnResult
template <typename SREFAL_PARAM_INT>
struct ident_CmdReturnResult {
  static const char *name() {
    return "CmdReturnResult";
  }
};

// identifier #CmdReturnResult_NoTrash
template <typename SREFAL_PARAM_INT>
struct ident_CmdReturnResult_NoTrash {
  static const char *name() {
    return "CmdReturnResult_NoTrash";
  }
};

// identifier #CmdSave
template <typename SREFAL_PARAM_INT>
struct ident_CmdSave {
  static const char *name() {
    return "CmdSave";
  }
};

// identifier #CmdSeparator
template <typename SREFAL_PARAM_INT>
struct ident_CmdSeparator {
  static const char *name() {
    return "CmdSeparator";
  }
};

// identifier #CmdSetRes
template <typename SREFAL_PARAM_INT>
struct ident_CmdSetRes {
  static const char *name() {
    return "CmdSetRes";
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

// identifier #CmdTrash
template <typename SREFAL_PARAM_INT>
struct ident_CmdTrash {
  static const char *name() {
    return "CmdTrash";
  }
};

// identifier #CmdUpdateElem
template <typename SREFAL_PARAM_INT>
struct ident_CmdUpdateElem {
  static const char *name() {
    return "CmdUpdateElem";
  }
};

// identifier #CmdUseRes
template <typename SREFAL_PARAM_INT>
struct ident_CmdUseRes {
  static const char *name() {
    return "CmdUseRes";
  }
};

// identifier #CmdVar
template <typename SREFAL_PARAM_INT>
struct ident_CmdVar {
  static const char *name() {
    return "CmdVar";
  }
};

// identifier #CmdVarSave
template <typename SREFAL_PARAM_INT>
struct ident_CmdVarSave {
  static const char *name() {
    return "CmdVarSave";
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

// identifier #CreateClosure
template <typename SREFAL_PARAM_INT>
struct ident_CreateClosure {
  static const char *name() {
    return "CreateClosure";
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

// identifier #Fail
template <typename SREFAL_PARAM_INT>
struct ident_Fail {
  static const char *name() {
    return "Fail";
  }
};

// identifier #GN_Entry
template <typename SREFAL_PARAM_INT>
struct ident_GN_Entry {
  static const char *name() {
    return "GN_Entry";
  }
};

// identifier #GN_Local
template <typename SREFAL_PARAM_INT>
struct ident_GN_Local {
  static const char *name() {
    return "GN_Local";
  }
};

// identifier #LEFT_EDGE
template <typename SREFAL_PARAM_INT>
struct ident_LEFT_EDGE {
  static const char *name() {
    return "LEFT_EDGE";
  }
};

// identifier #RIGHT_EDGE
template <typename SREFAL_PARAM_INT>
struct ident_RIGHT_EDGE {
  static const char *name() {
    return "RIGHT_EDGE";
  }
};

// identifier #Success
template <typename SREFAL_PARAM_INT>
struct ident_Success {
  static const char *name() {
    return "Success";
  }
};

static refalrts::FnResult FuncArguments(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 50 elems
  refalrts::Iter context[50];
  refalrts::zeros( context, 50 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & FuncArguments/4 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ HalfReuse: 'r'/0 HalfReuse: 'e'/4 HalfReuse: 'f'/1 } 'a'/5 'l'/6 'r'/7 't'/8 's'/9 ':'/10 ':'/11 'I'/12 't'/13 'e'/14 'r'/15 ' '/16 'a'/17 'r'/18 'g'/19 '_'/20 'b'/21 'e'/22 'g'/23 'i'/24 'n'/25 ','/26 ' '/27 'r'/28 'e'/29 'f'/30 'a'/31 'l'/32 'r'/33 't'/34 's'/35 ':'/36 ':'/37 'I'/38 't'/39 'e'/40 'r'/41 ' '/42 'a'/43 'r'/44 'g'/45 '_'/46 'e'/47 'n'/48 'd'/49 Tile{ ]] }
  if( ! refalrts::alloc_char( context[5], 'a' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[6], 'l' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[7], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[8], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[9], 's' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[10], ':' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[11], ':' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[12], 'I' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[13], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[14], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[15], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[16], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[17], 'a' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[18], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[19], 'g' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[20], '_' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[21], 'b' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[22], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[23], 'g' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[24], 'i' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[25], 'n' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[26], ',' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[27], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[28], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[29], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[30], 'f' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[31], 'a' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[32], 'l' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[33], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[34], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[35], 's' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[36], ':' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[37], ':' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[38], 'I' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[39], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[40], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[41], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[42], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[43], 'a' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[44], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[45], 'g' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[46], '_' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[47], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[48], 'n' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[49], 'd' ) )
    return refalrts::cNoMemory;
  refalrts::reinit_char( context[0], 'r' );
  refalrts::reinit_char( context[4], 'e' );
  refalrts::reinit_char( context[1], 'f' );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[49] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult NakedArguments(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 32 elems
  refalrts::Iter context[32];
  refalrts::zeros( context, 32 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & NakedArguments/4 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ HalfReuse: 'r'/0 HalfReuse: 'e'/4 HalfReuse: 'f'/1 } 'a'/5 'l'/6 'r'/7 't'/8 's'/9 ':'/10 ':'/11 'I'/12 't'/13 'e'/14 'r'/15 ','/16 ' '/17 'r'/18 'e'/19 'f'/20 'a'/21 'l'/22 'r'/23 't'/24 's'/25 ':'/26 ':'/27 'I'/28 't'/29 'e'/30 'r'/31 Tile{ ]] }
  if( ! refalrts::alloc_char( context[5], 'a' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[6], 'l' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[7], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[8], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[9], 's' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[10], ':' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[11], ':' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[12], 'I' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[13], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[14], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[15], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[16], ',' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[17], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[18], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[19], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[20], 'f' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[21], 'a' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[22], 'l' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[23], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[24], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[25], 's' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[26], ':' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[27], ':' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[28], 'I' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[29], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[30], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[31], 'r' ) )
    return refalrts::cNoMemory;
  refalrts::reinit_char( context[0], 'r' );
  refalrts::reinit_char( context[4], 'e' );
  refalrts::reinit_char( context[1], 'f' );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[31] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult TextFromMemoryClass(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & TextFromMemoryClass/4 # GN_Local/5 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::ident_left(  & ident_GN_Local<int>::name, context[2], context[3] );
    if( ! context[5] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: 's'/0 HalfReuse: 't'/4 HalfReuse: 'a'/5 HalfReuse: 't'/1 } 'i'/6 'c'/7 ' '/8 Tile{ ]] }
    if( ! refalrts::alloc_char( context[6], 'i' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[7], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[8], ' ' ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[0], 's' );
    refalrts::reinit_char( context[4], 't' );
    refalrts::reinit_char( context[5], 'a' );
    refalrts::reinit_char( context[1], 't' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[6], context[8] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & TextFromMemoryClass/4 # GN_Entry/5 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = refalrts::ident_left(  & ident_GN_Entry<int>::name, context[2], context[3] );
  if( ! context[5] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  </0 & TextFromMemoryClass/4 # GN_Entry/5 >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult SwGenFnStart(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 77 elems
  refalrts::Iter context[77];
  refalrts::zeros( context, 77 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & SwGenFnStart/4 s.MemoryClass#1/5 s.FnArguments#1/6 e.Name#1/2 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Name#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } (/7 Tile{ AsIs: </0 Reuse: & TextFromMemoryClass/4 AsIs: s.MemoryClass#1/5 } >/8 'r'/9 'e'/10 'f'/11 'a'/12 'l'/13 'r'/14 't'/15 's'/16 ':'/17 ':'/18 'F'/19 'n'/20 'R'/21 'e'/22 's'/23 'u'/24 'l'/25 't'/26 ' '/27 Tile{ AsIs: e.Name#1/2 } '('/28 </29 Tile{ AsIs: s.FnArguments#1/6 } >/30 ')'/31 ' '/32 '{'/33 )/34 (/35 ' '/36 ' '/37 'r'/38 'e'/39 'f'/40 'a'/41 'l'/42 'r'/43 't'/44 's'/45 ':'/46 ':'/47 't'/48 'h'/49 'i'/50 's'/51 '_'/52 'i'/53 's'/54 '_'/55 'g'/56 'e'/57 'n'/58 'e'/59 'r'/60 'a'/61 't'/62 'e'/63 'd'/64 '_'/65 'f'/66 'u'/67 'n'/68 'c'/69 't'/70 'i'/71 'o'/72 'n'/73 '('/74 ')'/75 ';'/76 Tile{ HalfReuse: )/1 ]] }
  if( ! refalrts::alloc_open_bracket( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[9], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[10], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[11], 'f' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[12], 'a' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[13], 'l' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[14], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[15], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[16], 's' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[17], ':' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[18], ':' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[19], 'F' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[20], 'n' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[21], 'R' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[22], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[23], 's' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[24], 'u' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[25], 'l' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[26], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[27], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[28], '(' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[29] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[30] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[31], ')' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[32], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[33], '{' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[34] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[35] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[36], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[37], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[38], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[39], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[40], 'f' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[41], 'a' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[42], 'l' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[43], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[44], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[45], 's' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[46], ':' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[47], ':' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[48], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[49], 'h' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[50], 'i' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[51], 's' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[52], '_' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[53], 'i' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[54], 's' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[55], '_' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[56], 'g' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[57], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[58], 'n' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[59], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[60], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[61], 'a' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[62], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[63], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[64], 'd' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[65], '_' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[66], 'f' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[67], 'u' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[68], 'n' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[69], 'c' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[70], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[71], 'i' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[72], 'o' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[73], 'n' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[74], '(' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[75], ')' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[76], ';' ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], TextFromMemoryClass, "TextFromMemoryClass" );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[35], context[1] );
  refalrts::link_brackets( context[7], context[34] );
  refalrts::push_stack( context[30] );
  refalrts::push_stack( context[29] );
  refalrts::push_stack( context[8] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[30], context[76] );
  res = refalrts::splice_evar( res, context[6], context[6] );
  res = refalrts::splice_evar( res, context[28], context[29] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[8], context[27] );
  res = refalrts::splice_evar( res, context[0], context[5] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult GenFnStart(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 7 elems
  refalrts::Iter context[7];
  refalrts::zeros( context, 7 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & GenFnStart/4 s.MemoryClass#1/5 e.Name#1/2 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Name#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & SwGenFnStart/4 AsIs: s.MemoryClass#1/5 } & FuncArguments/6 Tile{ AsIs: e.Name#1/2 } Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_name( context[6], FuncArguments, "FuncArguments" ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], SwGenFnStart, "SwGenFnStart" );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[6], context[6] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult GenExtern(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 36 elems
  refalrts::Iter context[36];
  refalrts::zeros( context, 36 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & GenExtern/4 e.Name#1/2 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Name#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } (/5 'e'/6 'x'/7 't'/8 'e'/9 'r'/10 'n'/11 ' '/12 'r'/13 'e'/14 'f'/15 'a'/16 'l'/17 'r'/18 't'/19 's'/20 ':'/21 ':'/22 'F'/23 'n'/24 'R'/25 'e'/26 's'/27 'u'/28 'l'/29 Tile{ HalfReuse: 't'/0 HalfReuse: ' '/4 AsIs: e.Name#1/2 HalfReuse: '('/1 } </30 & FuncArguments/31 >/32 ')'/33 ';'/34 )/35 Tile{ ]] }
  if( ! refalrts::alloc_open_bracket( context[5] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[6], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[7], 'x' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[8], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[9], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[10], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[11], 'n' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[12], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[13], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[14], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[15], 'f' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[16], 'a' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[17], 'l' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[18], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[19], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[20], 's' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[21], ':' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[22], ':' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[23], 'F' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[24], 'n' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[25], 'R' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[26], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[27], 's' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[28], 'u' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[29], 'l' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[30] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[31], FuncArguments, "FuncArguments" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[32] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[33], ')' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[34], ';' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[35] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_char( context[0], 't' );
  refalrts::reinit_char( context[4], ' ' );
  refalrts::reinit_char( context[1], '(' );
  refalrts::link_brackets( context[5], context[35] );
  refalrts::push_stack( context[32] );
  refalrts::push_stack( context[30] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[30], context[35] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[5], context[29] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult GenForward(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 36 elems
  refalrts::Iter context[36];
  refalrts::zeros( context, 36 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & GenForward/4 e.Name#1/2 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Name#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } (/5 's'/6 't'/7 'a'/8 't'/9 'i'/10 'c'/11 ' '/12 'r'/13 'e'/14 'f'/15 'a'/16 'l'/17 'r'/18 't'/19 's'/20 ':'/21 ':'/22 'F'/23 'n'/24 'R'/25 'e'/26 's'/27 'u'/28 'l'/29 Tile{ HalfReuse: 't'/0 HalfReuse: ' '/4 AsIs: e.Name#1/2 HalfReuse: '('/1 } </30 & FuncArguments/31 >/32 ')'/33 ';'/34 )/35 Tile{ ]] }
  if( ! refalrts::alloc_open_bracket( context[5] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[6], 's' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[7], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[8], 'a' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[9], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[10], 'i' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[11], 'c' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[12], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[13], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[14], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[15], 'f' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[16], 'a' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[17], 'l' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[18], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[19], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[20], 's' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[21], ':' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[22], ':' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[23], 'F' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[24], 'n' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[25], 'R' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[26], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[27], 's' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[28], 'u' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[29], 'l' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[30] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[31], FuncArguments, "FuncArguments" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[32] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[33], ')' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[34], ';' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[35] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_char( context[0], 't' );
  refalrts::reinit_char( context[4], ' ' );
  refalrts::reinit_char( context[1], '(' );
  refalrts::link_brackets( context[5], context[35] );
  refalrts::push_stack( context[32] );
  refalrts::push_stack( context[30] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[30], context[35] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[5], context[29] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult GenReturn(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 82 elems
  refalrts::Iter context[82];
  refalrts::zeros( context, 82 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & GenReturn/4 # Success/5 e.Indent#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::ident_left(  & ident_Success<int>::name, context[2], context[3] );
    if( ! context[5] )
      continue;
    // closed e.Indent#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: (/5 AsIs: e.Indent#1/2 HalfReuse: 'r'/1 } Tile{ HalfReuse: 'e'/0 HalfReuse: 't'/4 } 'u'/6 'r'/7 'n'/8 ' '/9 'r'/10 'e'/11 'f'/12 'a'/13 'l'/14 'r'/15 't'/16 's'/17 ':'/18 ':'/19 'F'/20 'n'/21 'R'/22 'e'/23 's'/24 'u'/25 'l'/26 't'/27 '('/28 'r'/29 'e'/30 'f'/31 'a'/32 'l'/33 'r'/34 't'/35 's'/36 ':'/37 ':'/38 'c'/39 'S'/40 'u'/41 'c'/42 'c'/43 'e'/44 's'/45 's'/46 ' '/47 '|'/48 ' '/49 '('/50 '_'/51 '_'/52 'L'/53 'I'/54 'N'/55 'E'/56 '_'/57 '_'/58 ' '/59 '<'/60 '<'/61 ' '/62 '8'/63 ')'/64 ')'/65 ';'/66 )/67 Tile{ ]] }
    if( ! refalrts::alloc_char( context[6], 'u' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[7], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[8], 'n' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[9], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[10], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[11], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[12], 'f' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[13], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[14], 'l' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[15], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[16], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[17], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[18], ':' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[19], ':' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[20], 'F' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[21], 'n' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[22], 'R' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[23], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[24], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[25], 'u' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[26], 'l' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[27], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[28], '(' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[29], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[30], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[31], 'f' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[32], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[33], 'l' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[34], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[35], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[36], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[37], ':' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[38], ':' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[39], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[40], 'S' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[41], 'u' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[42], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[43], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[44], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[45], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[46], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[47], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[48], '|' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[49], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[50], '(' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[51], '_' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[52], '_' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[53], 'L' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[54], 'I' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[55], 'N' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[56], 'E' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[57], '_' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[58], '_' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[59], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[60], '<' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[61], '<' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[62], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[63], '8' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[64], ')' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[65], ')' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[66], ';' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[67] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[5] );
    refalrts::reinit_char( context[1], 'r' );
    refalrts::reinit_char( context[0], 'e' );
    refalrts::reinit_char( context[4], 't' );
    refalrts::link_brackets( context[5], context[67] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[6], context[67] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[5], context[1] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & GenReturn/4 # Fail/5 e.Indent#1/2 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = refalrts::ident_left(  & ident_Fail<int>::name, context[2], context[3] );
  if( ! context[5] )
    return refalrts::cRecognitionImpossible;
  // closed e.Indent#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ HalfReuse: (/5 AsIs: e.Indent#1/2 HalfReuse: 'r'/1 } Tile{ HalfReuse: 'e'/0 HalfReuse: 't'/4 } 'u'/6 'r'/7 'n'/8 ' '/9 'r'/10 'e'/11 'f'/12 'a'/13 'l'/14 'r'/15 't'/16 's'/17 ':'/18 ':'/19 'F'/20 'n'/21 'R'/22 'e'/23 's'/24 'u'/25 'l'/26 't'/27 '('/28 'r'/29 'e'/30 'f'/31 'a'/32 'l'/33 'r'/34 't'/35 's'/36 ':'/37 ':'/38 'c'/39 'R'/40 'e'/41 'c'/42 'o'/43 'g'/44 'n'/45 'i'/46 't'/47 'i'/48 'o'/49 'n'/50 'I'/51 'm'/52 'p'/53 'o'/54 's'/55 's'/56 'i'/57 'b'/58 'l'/59 'e'/60 ' '/61 '|'/62 ' '/63 '('/64 '_'/65 '_'/66 'L'/67 'I'/68 'N'/69 'E'/70 '_'/71 '_'/72 ' '/73 '<'/74 '<'/75 ' '/76 '8'/77 ')'/78 ')'/79 ';'/80 )/81 Tile{ ]] }
  if( ! refalrts::alloc_char( context[6], 'u' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[7], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[8], 'n' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[9], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[10], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[11], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[12], 'f' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[13], 'a' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[14], 'l' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[15], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[16], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[17], 's' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[18], ':' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[19], ':' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[20], 'F' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[21], 'n' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[22], 'R' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[23], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[24], 's' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[25], 'u' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[26], 'l' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[27], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[28], '(' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[29], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[30], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[31], 'f' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[32], 'a' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[33], 'l' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[34], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[35], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[36], 's' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[37], ':' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[38], ':' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[39], 'c' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[40], 'R' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[41], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[42], 'c' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[43], 'o' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[44], 'g' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[45], 'n' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[46], 'i' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[47], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[48], 'i' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[49], 'o' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[50], 'n' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[51], 'I' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[52], 'm' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[53], 'p' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[54], 'o' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[55], 's' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[56], 's' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[57], 'i' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[58], 'b' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[59], 'l' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[60], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[61], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[62], '|' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[63], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[64], '(' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[65], '_' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[66], '_' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[67], 'L' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[68], 'I' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[69], 'N' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[70], 'E' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[71], '_' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[72], '_' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[73], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[74], '<' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[75], '<' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[76], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[77], '8' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[78], ')' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[79], ')' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[80], ';' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[81] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_open_bracket( context[5] );
  refalrts::reinit_char( context[1], 'r' );
  refalrts::reinit_char( context[0], 'e' );
  refalrts::reinit_char( context[4], 't' );
  refalrts::link_brackets( context[5], context[81] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[6], context[81] );
  res = refalrts::splice_evar( res, context[0], context[4] );
  res = refalrts::splice_evar( res, context[5], context[1] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult GenSwap(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 631 elems
  refalrts::Iter context[631];
  refalrts::zeros( context, 631 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & GenSwap/4 s.MemoryClass#1/5 e.Name#1/2 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Name#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & GenFnStart/4 AsIs: s.MemoryClass#1/5 AsIs: e.Name#1/2 AsIs: >/1 } (/6 ' '/7 ' '/8 'r'/9 'e'/10 'f'/11 'a'/12 'l'/13 'r'/14 't'/15 's'/16 ':'/17 ':'/18 'I'/19 't'/20 'e'/21 'r'/22 ' '/23 'f'/24 'u'/25 'n'/26 'c'/27 '_'/28 'n'/29 'a'/30 'm'/31 'e'/32 ' '/33 '='/34 ' '/35 'a'/36 'r'/37 'g'/38 '_'/39 'b'/40 'e'/41 'g'/42 'i'/43 'n'/44 ';'/45 )/46 (/47 )/48 (/49 ' '/50 ' '/51 'r'/52 'e'/53 'f'/54 'a'/55 'l'/56 'r'/57 't'/58 's'/59 ':'/60 ':'/61 'm'/62 'o'/63 'v'/64 'e'/65 '_'/66 'l'/67 'e'/68 'f'/69 't'/70 '('/71 ' '/72 'f'/73 'u'/74 'n'/75 'c'/76 '_'/77 'n'/78 'a'/79 'm'/80 'e'/81 ','/82 ' '/83 'a'/84 'r'/85 'g'/86 '_'/87 'e'/88 'n'/89 'd'/90 ' '/91 ')'/92 ';'/93 )/94 (/95 )/96 (/97 ' '/98 ' '/99 'r'/100 'e'/101 'f'/102 'a'/103 'l'/104 'r'/105 't'/106 's'/107 ':'/108 ':'/109 'I'/110 't'/111 'e'/112 'r'/113 ' '/114 'i'/115 'n'/116 'f'/117 'o'/118 '_'/119 'b'/120 ' '/121 '='/122 ' '/123 'f'/124 'u'/125 'n'/126 'c'/127 '_'/128 'n'/129 'a'/130 'm'/131 'e'/132 ';'/133 )/134 (/135 ' '/136 ' '/137 'r'/138 'e'/139 'f'/140 'a'/141 'l'/142 'r'/143 't'/144 's'/145 ':'/146 ':'/147 'I'/148 't'/149 'e'/150 'r'/151 ' '/152 'i'/153 'n'/154 'f'/155 'o'/156 '_'/157 'e'/158 ' '/159 '='/160 ' '/161 'a'/162 'r'/163 'g'/164 '_'/165 'e'/166 'n'/167 'd'/168 ';'/169 )/170 (/171 )/172 (/173 ' '/174 ' '/175 'r'/176 'e'/177 'f'/178 'a'/179 'l'/180 'r'/181 't'/182 's'/183 ':'/184 ':'/185 'm'/186 'o'/187 'v'/188 'e'/189 '_'/190 'l'/191 'e'/192 'f'/193 't'/194 '('/195 ' '/196 'i'/197 'n'/198 'f'/199 'o'/200 '_'/201 'b'/202 ','/203 ' '/204 'i'/205 'n'/206 'f'/207 'o'/208 '_'/209 'e'/210 ' '/211 ')'/212 ';'/213 )/214 (/215 ' '/216 ' '/217 'r'/218 'e'/219 'f'/220 'a'/221 'l'/222 'r'/223 't'/224 's'/225 ':'/226 ':'/227 'm'/228 'o'/229 'v'/230 'e'/231 '_'/232 'r'/233 'i'/234 'g'/235 'h'/236 't'/237 '('/238 ' '/239 'i'/240 'n'/241 'f'/242 'o'/243 '_'/244 'b'/245 ','/246 ' '/247 'i'/248 'n'/249 'f'/250 'o'/251 '_'/252 'e'/253 ' '/254 ')'/255 ';'/256 )/257 (/258 )/259 (/260 ' '/261 ' '/262 's'/263 't'/264 'a'/265 't'/266 'i'/267 'c'/268 ' '/269 'r'/270 'e'/271 'f'/272 'a'/273 'l'/274 'r'/275 't'/276 's'/277 ':'/278 ':'/279 'I'/280 't'/281 'e'/282 'r'/283 ' '/284 's'/285 '_'/286 'h'/287 'e'/288 'a'/289 'd'/290 ' '/291 '='/292 ' '/293 'r'/294 'e'/295 'f'/296 'a'/297 'l'/298 'r'/299 't'/300 's'/301 ':'/302 ':'/303 'i'/304 'n'/305 'i'/306 't'/307 'i'/308 'a'/309 'l'/310 'i'/311 'z'/312 'e'/313 '_'/314 's'/315 'w'/316 'a'/317 'p'/318 '_'/319 'h'/320 'e'/321 'a'/322 'd'/323 '('/324 ' '/325 'f'/326 'u'/327 'n'/328 'c'/329 '_'/330 'n'/331 'a'/332 'm'/333 'e'/334 ' '/335 ')'/336 ';'/337 )/338 (/339 )/340 (/341 ' '/342 ' '/343 'r'/344 'e'/345 'f'/346 'a'/347 'l'/348 'r'/349 't'/350 's'/351 ':'/352 ':'/353 'I'/354 't'/355 'e'/356 'r'/357 ' '/358 's'/359 'a'/360 'v'/361 'e'/362 'd'/363 '_'/364 'b'/365 ';'/366 )/367 (/368 ' '/369 ' '/370 'r'/371 'e'/372 'f'/373 'a'/374 'l'/375 'r'/376 't'/377 's'/378 ':'/379 ':'/380 'I'/381 't'/382 'e'/383 'r'/384 ' '/385 's'/386 'a'/387 'v'/388 'e'/389 'd'/390 '_'/391 'e'/392 ';'/393 )/394 (/395 )/396 (/397 ' '/398 ' '/399 'r'/400 'e'/401 'f'/402 'a'/403 'l'/404 'r'/405 't'/406 's'/407 ':'/408 ':'/409 's'/410 'w'/411 'a'/412 'p'/413 '_'/414 'i'/415 'n'/416 'f'/417 'o'/418 '_'/419 'b'/420 'o'/421 'u'/422 'n'/423 'd'/424 's'/425 '('/426 ' '/427 's'/428 'a'/429 'v'/430 'e'/431 'd'/432 '_'/433 'b'/434 ','/435 ' '/436 's'/437 'a'/438 'v'/439 'e'/440 'd'/441 '_'/442 'e'/443 ','/444 ' '/445 's'/446 '_'/447 'h'/448 'e'/449 'a'/450 'd'/451 ' '/452 ')'/453 ';'/454 )/455 (/456 ' '/457 ' '/458 'r'/459 'e'/460 'f'/461 'a'/462 'l'/463 'r'/464 't'/465 's'/466 ':'/467 ':'/468 's'/469 'p'/470 'l'/471 'i'/472 'c'/473 'e'/474 '_'/475 'e'/476 'v'/477 'a'/478 'r'/479 '('/480 ' '/481 'a'/482 'r'/483 'g'/484 '_'/485 'b'/486 'e'/487 'g'/488 'i'/489 'n'/490 ','/491 ' '/492 's'/493 'a'/494 'v'/495 'e'/496 'd'/497 '_'/498 'b'/499 ','/500 ' '/501 's'/502 'a'/503 'v'/504 'e'/505 'd'/506 '_'/507 'e'/508 ' '/509 ')'/510 ';'/511 )/512 (/513 ' '/514 ' '/515 'r'/516 'e'/517 'f'/518 'a'/519 'l'/520 'r'/521 't'/522 's'/523 ':'/524 ':'/525 's'/526 'w'/527 'a'/528 'p'/529 '_'/530 's'/531 'a'/532 'v'/533 'e'/534 '('/535 ' '/536 's'/537 '_'/538 'h'/539 'e'/540 'a'/541 'd'/542 ','/543 ' '/544 'i'/545 'n'/546 'f'/547 'o'/548 '_'/549 'b'/550 ','/551 ' '/552 'i'/553 'n'/554 'f'/555 'o'/556 '_'/557 'e'/558 ' '/559 ')'/560 ';'/561 )/562 (/563 ' '/564 ' '/565 'r'/566 'e'/567 'f'/568 'a'/569 'l'/570 'r'/571 't'/572 's'/573 ':'/574 ':'/575 's'/576 'p'/577 'l'/578 'i'/579 'c'/580 'e'/581 '_'/582 't'/583 'o'/584 '_'/585 'f'/586 'r'/587 'e'/588 'e'/589 'l'/590 'i'/591 's'/592 't'/593 '('/594 ' '/595 'a'/596 'r'/597 'g'/598 '_'/599 'b'/600 'e'/601 'g'/602 'i'/603 'n'/604 ','/605 ' '/606 'a'/607 'r'/608 'g'/609 '_'/610 'e'/611 'n'/612 'd'/613 ' '/614 ')'/615 ';'/616 )/617 (/618 )/619 </620 & GenReturn/621 # Success/622 ' '/623 ' '/624 >/625 (/626 '}'/627 )/628 (/629 )/630 Tile{ ]] }
  if( ! refalrts::alloc_open_bracket( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[7], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[8], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[9], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[10], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[11], 'f' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[12], 'a' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[13], 'l' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[14], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[15], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[16], 's' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[17], ':' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[18], ':' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[19], 'I' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[20], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[21], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[22], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[23], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[24], 'f' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[25], 'u' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[26], 'n' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[27], 'c' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[28], '_' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[29], 'n' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[30], 'a' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[31], 'm' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[32], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[33], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[34], '=' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[35], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[36], 'a' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[37], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[38], 'g' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[39], '_' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[40], 'b' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[41], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[42], 'g' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[43], 'i' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[44], 'n' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[45], ';' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[46] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[47] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[48] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[49] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[50], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[51], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[52], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[53], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[54], 'f' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[55], 'a' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[56], 'l' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[57], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[58], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[59], 's' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[60], ':' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[61], ':' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[62], 'm' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[63], 'o' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[64], 'v' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[65], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[66], '_' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[67], 'l' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[68], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[69], 'f' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[70], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[71], '(' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[72], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[73], 'f' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[74], 'u' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[75], 'n' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[76], 'c' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[77], '_' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[78], 'n' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[79], 'a' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[80], 'm' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[81], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[82], ',' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[83], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[84], 'a' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[85], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[86], 'g' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[87], '_' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[88], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[89], 'n' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[90], 'd' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[91], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[92], ')' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[93], ';' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[94] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[95] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[96] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[97] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[98], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[99], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[100], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[101], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[102], 'f' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[103], 'a' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[104], 'l' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[105], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[106], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[107], 's' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[108], ':' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[109], ':' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[110], 'I' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[111], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[112], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[113], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[114], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[115], 'i' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[116], 'n' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[117], 'f' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[118], 'o' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[119], '_' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[120], 'b' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[121], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[122], '=' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[123], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[124], 'f' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[125], 'u' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[126], 'n' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[127], 'c' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[128], '_' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[129], 'n' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[130], 'a' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[131], 'm' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[132], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[133], ';' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[134] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[135] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[136], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[137], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[138], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[139], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[140], 'f' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[141], 'a' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[142], 'l' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[143], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[144], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[145], 's' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[146], ':' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[147], ':' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[148], 'I' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[149], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[150], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[151], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[152], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[153], 'i' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[154], 'n' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[155], 'f' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[156], 'o' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[157], '_' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[158], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[159], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[160], '=' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[161], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[162], 'a' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[163], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[164], 'g' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[165], '_' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[166], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[167], 'n' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[168], 'd' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[169], ';' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[170] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[171] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[172] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[173] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[174], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[175], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[176], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[177], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[178], 'f' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[179], 'a' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[180], 'l' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[181], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[182], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[183], 's' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[184], ':' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[185], ':' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[186], 'm' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[187], 'o' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[188], 'v' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[189], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[190], '_' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[191], 'l' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[192], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[193], 'f' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[194], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[195], '(' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[196], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[197], 'i' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[198], 'n' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[199], 'f' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[200], 'o' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[201], '_' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[202], 'b' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[203], ',' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[204], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[205], 'i' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[206], 'n' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[207], 'f' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[208], 'o' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[209], '_' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[210], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[211], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[212], ')' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[213], ';' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[214] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[215] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[216], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[217], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[218], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[219], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[220], 'f' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[221], 'a' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[222], 'l' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[223], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[224], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[225], 's' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[226], ':' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[227], ':' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[228], 'm' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[229], 'o' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[230], 'v' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[231], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[232], '_' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[233], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[234], 'i' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[235], 'g' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[236], 'h' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[237], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[238], '(' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[239], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[240], 'i' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[241], 'n' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[242], 'f' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[243], 'o' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[244], '_' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[245], 'b' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[246], ',' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[247], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[248], 'i' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[249], 'n' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[250], 'f' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[251], 'o' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[252], '_' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[253], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[254], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[255], ')' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[256], ';' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[257] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[258] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[259] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[260] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[261], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[262], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[263], 's' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[264], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[265], 'a' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[266], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[267], 'i' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[268], 'c' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[269], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[270], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[271], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[272], 'f' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[273], 'a' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[274], 'l' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[275], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[276], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[277], 's' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[278], ':' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[279], ':' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[280], 'I' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[281], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[282], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[283], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[284], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[285], 's' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[286], '_' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[287], 'h' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[288], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[289], 'a' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[290], 'd' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[291], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[292], '=' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[293], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[294], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[295], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[296], 'f' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[297], 'a' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[298], 'l' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[299], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[300], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[301], 's' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[302], ':' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[303], ':' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[304], 'i' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[305], 'n' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[306], 'i' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[307], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[308], 'i' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[309], 'a' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[310], 'l' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[311], 'i' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[312], 'z' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[313], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[314], '_' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[315], 's' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[316], 'w' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[317], 'a' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[318], 'p' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[319], '_' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[320], 'h' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[321], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[322], 'a' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[323], 'd' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[324], '(' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[325], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[326], 'f' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[327], 'u' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[328], 'n' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[329], 'c' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[330], '_' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[331], 'n' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[332], 'a' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[333], 'm' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[334], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[335], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[336], ')' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[337], ';' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[338] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[339] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[340] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[341] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[342], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[343], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[344], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[345], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[346], 'f' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[347], 'a' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[348], 'l' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[349], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[350], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[351], 's' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[352], ':' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[353], ':' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[354], 'I' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[355], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[356], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[357], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[358], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[359], 's' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[360], 'a' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[361], 'v' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[362], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[363], 'd' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[364], '_' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[365], 'b' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[366], ';' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[367] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[368] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[369], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[370], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[371], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[372], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[373], 'f' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[374], 'a' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[375], 'l' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[376], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[377], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[378], 's' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[379], ':' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[380], ':' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[381], 'I' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[382], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[383], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[384], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[385], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[386], 's' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[387], 'a' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[388], 'v' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[389], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[390], 'd' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[391], '_' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[392], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[393], ';' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[394] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[395] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[396] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[397] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[398], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[399], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[400], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[401], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[402], 'f' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[403], 'a' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[404], 'l' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[405], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[406], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[407], 's' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[408], ':' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[409], ':' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[410], 's' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[411], 'w' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[412], 'a' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[413], 'p' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[414], '_' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[415], 'i' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[416], 'n' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[417], 'f' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[418], 'o' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[419], '_' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[420], 'b' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[421], 'o' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[422], 'u' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[423], 'n' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[424], 'd' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[425], 's' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[426], '(' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[427], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[428], 's' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[429], 'a' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[430], 'v' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[431], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[432], 'd' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[433], '_' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[434], 'b' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[435], ',' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[436], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[437], 's' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[438], 'a' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[439], 'v' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[440], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[441], 'd' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[442], '_' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[443], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[444], ',' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[445], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[446], 's' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[447], '_' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[448], 'h' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[449], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[450], 'a' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[451], 'd' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[452], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[453], ')' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[454], ';' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[455] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[456] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[457], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[458], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[459], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[460], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[461], 'f' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[462], 'a' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[463], 'l' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[464], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[465], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[466], 's' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[467], ':' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[468], ':' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[469], 's' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[470], 'p' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[471], 'l' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[472], 'i' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[473], 'c' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[474], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[475], '_' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[476], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[477], 'v' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[478], 'a' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[479], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[480], '(' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[481], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[482], 'a' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[483], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[484], 'g' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[485], '_' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[486], 'b' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[487], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[488], 'g' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[489], 'i' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[490], 'n' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[491], ',' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[492], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[493], 's' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[494], 'a' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[495], 'v' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[496], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[497], 'd' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[498], '_' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[499], 'b' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[500], ',' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[501], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[502], 's' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[503], 'a' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[504], 'v' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[505], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[506], 'd' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[507], '_' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[508], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[509], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[510], ')' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[511], ';' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[512] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[513] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[514], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[515], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[516], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[517], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[518], 'f' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[519], 'a' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[520], 'l' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[521], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[522], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[523], 's' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[524], ':' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[525], ':' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[526], 's' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[527], 'w' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[528], 'a' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[529], 'p' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[530], '_' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[531], 's' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[532], 'a' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[533], 'v' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[534], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[535], '(' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[536], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[537], 's' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[538], '_' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[539], 'h' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[540], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[541], 'a' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[542], 'd' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[543], ',' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[544], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[545], 'i' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[546], 'n' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[547], 'f' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[548], 'o' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[549], '_' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[550], 'b' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[551], ',' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[552], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[553], 'i' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[554], 'n' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[555], 'f' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[556], 'o' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[557], '_' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[558], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[559], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[560], ')' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[561], ';' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[562] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[563] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[564], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[565], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[566], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[567], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[568], 'f' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[569], 'a' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[570], 'l' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[571], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[572], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[573], 's' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[574], ':' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[575], ':' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[576], 's' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[577], 'p' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[578], 'l' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[579], 'i' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[580], 'c' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[581], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[582], '_' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[583], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[584], 'o' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[585], '_' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[586], 'f' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[587], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[588], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[589], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[590], 'l' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[591], 'i' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[592], 's' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[593], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[594], '(' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[595], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[596], 'a' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[597], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[598], 'g' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[599], '_' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[600], 'b' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[601], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[602], 'g' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[603], 'i' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[604], 'n' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[605], ',' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[606], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[607], 'a' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[608], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[609], 'g' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[610], '_' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[611], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[612], 'n' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[613], 'd' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[614], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[615], ')' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[616], ';' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[617] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[618] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[619] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[620] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[621], GenReturn, "GenReturn" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[622], & ident_Success<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[623], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[624], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[625] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[626] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[627], '}' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[628] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[629] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[630] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], GenFnStart, "GenFnStart" );
  refalrts::link_brackets( context[629], context[630] );
  refalrts::link_brackets( context[626], context[628] );
  refalrts::push_stack( context[625] );
  refalrts::push_stack( context[620] );
  refalrts::link_brackets( context[618], context[619] );
  refalrts::link_brackets( context[563], context[617] );
  refalrts::link_brackets( context[513], context[562] );
  refalrts::link_brackets( context[456], context[512] );
  refalrts::link_brackets( context[397], context[455] );
  refalrts::link_brackets( context[395], context[396] );
  refalrts::link_brackets( context[368], context[394] );
  refalrts::link_brackets( context[341], context[367] );
  refalrts::link_brackets( context[339], context[340] );
  refalrts::link_brackets( context[260], context[338] );
  refalrts::link_brackets( context[258], context[259] );
  refalrts::link_brackets( context[215], context[257] );
  refalrts::link_brackets( context[173], context[214] );
  refalrts::link_brackets( context[171], context[172] );
  refalrts::link_brackets( context[135], context[170] );
  refalrts::link_brackets( context[97], context[134] );
  refalrts::link_brackets( context[95], context[96] );
  refalrts::link_brackets( context[49], context[94] );
  refalrts::link_brackets( context[47], context[48] );
  refalrts::link_brackets( context[6], context[46] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[6], context[630] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult GenIdent(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 136 elems
  refalrts::Iter context[136];
  refalrts::zeros( context, 136 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & GenIdent/4 e.Name#1/2 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Name#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } (/5 '/'/6 '/'/7 ' '/8 'i'/9 'd'/10 'e'/11 'n'/12 't'/13 'i'/14 'f'/15 'i'/16 'e'/17 'r'/18 Tile{ HalfReuse: ' '/0 HalfReuse: '#'/4 AsIs: e.Name#1/2 HalfReuse: )/1 } (/19 't'/20 'e'/21 'm'/22 'p'/23 'l'/24 'a'/25 't'/26 'e'/27 ' '/28 '<'/29 't'/30 'y'/31 'p'/32 'e'/33 'n'/34 'a'/35 'm'/36 'e'/37 ' '/38 'S'/39 'R'/40 'E'/41 'F'/42 'A'/43 'L'/44 '_'/45 'P'/46 'A'/47 'R'/48 'A'/49 'M'/50 '_'/51 'I'/52 'N'/53 'T'/54 '>'/55 )/56 (/57 's'/58 't'/59 'r'/60 'u'/61 'c'/62 't'/63 ' '/64 'i'/65 'd'/66 'e'/67 'n'/68 't'/69 '_'/70 e.Name#1/2/71 ' '/73 '{'/74 )/75 (/76 ' '/77 ' '/78 's'/79 't'/80 'a'/81 't'/82 'i'/83 'c'/84 ' '/85 'c'/86 'o'/87 'n'/88 's'/89 't'/90 ' '/91 'c'/92 'h'/93 'a'/94 'r'/95 ' '/96 '*'/97 'n'/98 'a'/99 'm'/100 'e'/101 '('/102 ')'/103 ' '/104 '{'/105 )/106 (/107 ' '/108 ' '/109 ' '/110 ' '/111 'r'/112 'e'/113 't'/114 'u'/115 'r'/116 'n'/117 ' '/118 '\"'/119 e.Name#1/2/120 '\"'/122 ';'/123 )/124 (/125 ' '/126 ' '/127 '}'/128 )/129 (/130 '}'/131 ';'/132 )/133 (/134 )/135 Tile{ ]] }
  if( ! refalrts::alloc_open_bracket( context[5] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[6], '/' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[7], '/' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[8], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[9], 'i' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[10], 'd' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[11], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[12], 'n' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[13], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[14], 'i' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[15], 'f' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[16], 'i' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[17], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[18], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[19] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[20], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[21], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[22], 'm' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[23], 'p' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[24], 'l' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[25], 'a' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[26], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[27], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[28], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[29], '<' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[30], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[31], 'y' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[32], 'p' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[33], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[34], 'n' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[35], 'a' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[36], 'm' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[37], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[38], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[39], 'S' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[40], 'R' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[41], 'E' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[42], 'F' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[43], 'A' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[44], 'L' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[45], '_' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[46], 'P' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[47], 'A' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[48], 'R' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[49], 'A' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[50], 'M' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[51], '_' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[52], 'I' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[53], 'N' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[54], 'T' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[55], '>' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[56] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[57] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[58], 's' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[59], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[60], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[61], 'u' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[62], 'c' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[63], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[64], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[65], 'i' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[66], 'd' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[67], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[68], 'n' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[69], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[70], '_' ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[71], context[72], context[2], context[3]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[73], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[74], '{' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[75] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[76] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[77], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[78], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[79], 's' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[80], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[81], 'a' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[82], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[83], 'i' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[84], 'c' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[85], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[86], 'c' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[87], 'o' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[88], 'n' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[89], 's' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[90], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[91], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[92], 'c' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[93], 'h' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[94], 'a' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[95], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[96], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[97], '*' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[98], 'n' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[99], 'a' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[100], 'm' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[101], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[102], '(' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[103], ')' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[104], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[105], '{' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[106] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[107] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[108], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[109], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[110], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[111], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[112], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[113], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[114], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[115], 'u' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[116], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[117], 'n' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[118], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[119], '\"' ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[120], context[121], context[2], context[3]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[122], '\"' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[123], ';' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[124] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[125] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[126], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[127], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[128], '}' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[129] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[130] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[131], '}' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[132], ';' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[133] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[134] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[135] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_char( context[0], ' ' );
  refalrts::reinit_char( context[4], '#' );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[134], context[135] );
  refalrts::link_brackets( context[130], context[133] );
  refalrts::link_brackets( context[125], context[129] );
  refalrts::link_brackets( context[107], context[124] );
  refalrts::link_brackets( context[76], context[106] );
  refalrts::link_brackets( context[57], context[75] );
  refalrts::link_brackets( context[19], context[56] );
  refalrts::link_brackets( context[5], context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[19], context[135] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[5], context[18] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult GenCommonHeaders(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 75 elems
  refalrts::Iter context[75];
  refalrts::zeros( context, 75 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & GenCommonHeaders/4 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: '/'/4 HalfReuse: '/'/1 } ' '/5 'A'/6 'u'/7 't'/8 'o'/9 'm'/10 'a'/11 't'/12 'i'/13 'c'/14 'a'/15 'l'/16 'l'/17 'y'/18 ' '/19 'g'/20 'e'/21 'n'/22 'e'/23 'r'/24 'a'/25 't'/26 'e'/27 'd'/28 ' '/29 'f'/30 'i'/31 'l'/32 'e'/33 '.'/34 ' '/35 'D'/36 'o'/37 'n'/38 '\''/39 't'/40 ' '/41 'e'/42 'd'/43 'i'/44 't'/45 '!'/46 )/47 (/48 '#'/49 'i'/50 'n'/51 'c'/52 'l'/53 'u'/54 'd'/55 'e'/56 ' '/57 '\"'/58 'r'/59 'e'/60 'f'/61 'a'/62 'l'/63 'r'/64 't'/65 's'/66 '.'/67 'h'/68 '\"'/69 )/70 (/71 )/72 (/73 )/74 Tile{ ]] }
  if( ! refalrts::alloc_char( context[5], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[6], 'A' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[7], 'u' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[8], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[9], 'o' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[10], 'm' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[11], 'a' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[12], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[13], 'i' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[14], 'c' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[15], 'a' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[16], 'l' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[17], 'l' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[18], 'y' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[19], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[20], 'g' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[21], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[22], 'n' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[23], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[24], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[25], 'a' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[26], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[27], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[28], 'd' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[29], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[30], 'f' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[31], 'i' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[32], 'l' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[33], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[34], '.' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[35], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[36], 'D' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[37], 'o' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[38], 'n' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[39], '\'' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[40], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[41], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[42], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[43], 'd' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[44], 'i' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[45], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[46], '!' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[47] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[48] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[49], '#' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[50], 'i' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[51], 'n' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[52], 'c' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[53], 'l' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[54], 'u' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[55], 'd' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[56], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[57], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[58], '\"' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[59], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[60], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[61], 'f' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[62], 'a' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[63], 'l' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[64], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[65], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[66], 's' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[67], '.' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[68], 'h' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[69], '\"' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[70] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[71] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[72] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[73] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[74] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_char( context[4], '/' );
  refalrts::reinit_char( context[1], '/' );
  refalrts::link_brackets( context[73], context[74] );
  refalrts::link_brackets( context[71], context[72] );
  refalrts::link_brackets( context[48], context[70] );
  refalrts::link_brackets( context[0], context[47] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[74] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult GenCommonTailer(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & GenCommonTailer/4 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: )/4 HalfReuse: (/1 } '/'/5 '/'/6 'E'/7 'n'/8 'd'/9 ' '/10 'o'/11 'f'/12 ' '/13 'f'/14 'i'/15 'l'/16 'e'/17 )/18 Tile{ ]] }
  if( ! refalrts::alloc_char( context[5], '/' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[6], '/' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[7], 'E' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[8], 'n' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[9], 'd' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[10], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[11], 'o' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[12], 'f' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[13], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[14], 'f' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[15], 'i' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[16], 'l' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[17], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[18] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_close_bracket( context[4] );
  refalrts::reinit_open_bracket( context[1] );
  refalrts::link_brackets( context[1], context[18] );
  refalrts::link_brackets( context[0], context[4] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[18] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult lambda_GenProgram_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & lambda_GenProgram_0/4 (/7 )/8 e.Generated#2/2 >/1
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
  // closed e.Generated#2 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  </0 & lambda_GenProgram_0/4 (/7 )/8 {REMOVED TILE}  >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Generated#2/2 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

refalrts::FnResult GenProgram(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & GenProgram/4 e.Algorithm#1/2 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Algorithm#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & GenCommonHeaders/4 } >/5 </6 & Fetch/7 </8 & MapReduce/9 & GenCommand/10 (/11 )/12 Tile{ AsIs: e.Algorithm#1/2 } >/13 & lambda_GenProgram_0/14 >/15 </16 & GenCommonTailer/17 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_close_call( context[5] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[7], Fetch, "Fetch" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[9], MapReduce, "MapReduce" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[10], GenCommand, "GenCommand" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[14], lambda_GenProgram_0, "lambda_GenProgram_0" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[16] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[17], GenCommonTailer, "GenCommonTailer" ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], GenCommonHeaders, "GenCommonHeaders" );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[16] );
  refalrts::push_stack( context[15] );
  refalrts::push_stack( context[6] );
  refalrts::push_stack( context[13] );
  refalrts::push_stack( context[8] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::push_stack( context[5] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[13], context[17] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[5], context[12] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult ContextRange_B(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & ContextRange_B/4 s.RangeOffset#1/5 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } 'c'/6 'o'/7 'n'/8 't'/9 'e'/10 'x'/11 't'/12 '['/13 Tile{ AsIs: </0 Reuse: & StrFromInt/4 AsIs: s.RangeOffset#1/5 AsIs: >/1 } ']'/14 Tile{ ]] }
  if( ! refalrts::alloc_char( context[6], 'c' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[7], 'o' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[8], 'n' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[9], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[10], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[11], 'x' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[12], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[13], '[' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[14], ']' ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], StrFromInt, "StrFromInt" );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[14], context[14] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[6], context[13] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult ContextRange_E(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & ContextRange_E/4 s.RangeOffset#1/5 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } 'c'/6 'o'/7 'n'/8 't'/9 'e'/10 'x'/11 't'/12 '['/13 </14 & StrFromInt/15 Tile{ AsIs: </0 Reuse: & Inc/4 AsIs: s.RangeOffset#1/5 AsIs: >/1 } >/16 ']'/17 Tile{ ]] }
  if( ! refalrts::alloc_char( context[6], 'c' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[7], 'o' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[8], 'n' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[9], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[10], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[11], 'x' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[12], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[13], '[' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[15], StrFromInt, "StrFromInt" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[16] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[17], ']' ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], Inc, "Inc" );
  refalrts::push_stack( context[16] );
  refalrts::push_stack( context[14] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[16], context[17] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[6], context[15] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult ContextRange(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & ContextRange/4 s.RangeOffset#1/5 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & ContextRange_B/4 AsIs: s.RangeOffset#1/5 AsIs: >/1 } ','/6 ' '/7 </8 & ContextRange_E/9 s.RangeOffset#1/5/10 >/11 Tile{ ]] }
  if( ! refalrts::alloc_char( context[6], ',' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[7], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[9], ContextRange_E, "ContextRange_E" ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_stvar(context[10], context[5]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[11] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ContextRange_B, "ContextRange_B" );
  refalrts::push_stack( context[11] );
  refalrts::push_stack( context[8] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[6], context[11] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult ContextItem(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & ContextItem/4 s.ItemNumber#1/5 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } 'c'/6 'o'/7 'n'/8 't'/9 'e'/10 'x'/11 't'/12 '['/13 Tile{ AsIs: </0 Reuse: & StrFromInt/4 AsIs: s.ItemNumber#1/5 AsIs: >/1 } ']'/14 Tile{ ]] }
  if( ! refalrts::alloc_char( context[6], 'c' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[7], 'o' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[8], 'n' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[9], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[10], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[11], 'x' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[12], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[13], '[' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[14], ']' ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], StrFromInt, "StrFromInt" );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[14], context[14] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[6], context[13] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult PrintName(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 26 elems
  refalrts::Iter context[26];
  refalrts::zeros( context, 26 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & PrintName/4 # CreateClosure/5 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::ident_left(  & ident_CreateClosure<int>::name, context[2], context[3] );
    if( ! context[5] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: 'r'/0 HalfReuse: 'e'/4 HalfReuse: 'f'/5 HalfReuse: 'a'/1 } 'l'/6 'r'/7 't'/8 's'/9 ':'/10 ':'/11 'c'/12 'r'/13 'e'/14 'a'/15 't'/16 'e'/17 '_'/18 'c'/19 'l'/20 'o'/21 's'/22 'u'/23 'r'/24 'e'/25 Tile{ ]] }
    if( ! refalrts::alloc_char( context[6], 'l' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[7], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[8], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[9], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[10], ':' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[11], ':' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[12], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[13], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[14], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[15], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[16], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[17], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[18], '_' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[19], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[20], 'l' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[21], 'o' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[22], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[23], 'u' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[24], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[25], 'e' ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[0], 'r' );
    refalrts::reinit_char( context[4], 'e' );
    refalrts::reinit_char( context[5], 'f' );
    refalrts::reinit_char( context[1], 'a' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[6], context[25] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & PrintName/4 e.Name#1/2 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Name#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  </0 & PrintName/4 {REMOVED TILE}  >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Name#1/2 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult PrintBracketsVarInit(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 26 elems
  refalrts::Iter context[26];
  refalrts::zeros( context, 26 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & PrintBracketsVarInit/4 e.Indent#1/2 s.InnerBrackets#1/5 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_right( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Indent#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } (/6 Tile{ AsIs: e.Indent#1/2 } Tile{ AsIs: </0 Reuse: & ContextRange_B/4 } Tile{ AsIs: s.InnerBrackets#1/5 AsIs: >/1 } ' '/7 '='/8 ' '/9 '0'/10 ';'/11 )/12 (/13 e.Indent#1/2/14 </16 & ContextRange_E/17 s.InnerBrackets#1/5/18 >/19 ' '/20 '='/21 ' '/22 '0'/23 ';'/24 )/25 Tile{ ]] }
  if( ! refalrts::alloc_open_bracket( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[7], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[8], '=' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[9], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[10], '0' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[11], ';' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[13] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[14], context[15], context[2], context[3]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[16] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[17], ContextRange_E, "ContextRange_E" ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_stvar(context[18], context[5]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[19] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[20], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[21], '=' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[22], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[23], '0' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[24], ';' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[25] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ContextRange_B, "ContextRange_B" );
  refalrts::link_brackets( context[13], context[25] );
  refalrts::push_stack( context[19] );
  refalrts::push_stack( context[16] );
  refalrts::link_brackets( context[6], context[12] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[25] );
  res = refalrts::splice_evar( res, context[5], context[1] );
  res = refalrts::splice_evar( res, context[0], context[4] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[6], context[6] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult PrintDirection(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 7 elems
  refalrts::Iter context[7];
  refalrts::zeros( context, 7 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & PrintDirection/4 # AlgLeft/5 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::ident_left(  & ident_AlgLeft<int>::name, context[2], context[3] );
    if( ! context[5] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: 'L'/0 HalfReuse: 'e'/4 HalfReuse: 'f'/5 HalfReuse: 't'/1 ]] }
    refalrts::reinit_char( context[0], 'L' );
    refalrts::reinit_char( context[4], 'e' );
    refalrts::reinit_char( context[5], 'f' );
    refalrts::reinit_char( context[1], 't' );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & PrintDirection/4 # AlgRight/5 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = refalrts::ident_left(  & ident_AlgRight<int>::name, context[2], context[3] );
  if( ! context[5] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ HalfReuse: 'R'/0 HalfReuse: 'i'/4 HalfReuse: 'g'/5 HalfReuse: 'h'/1 } 't'/6 Tile{ ]] }
  if( ! refalrts::alloc_char( context[6], 't' ) )
    return refalrts::cNoMemory;
  refalrts::reinit_char( context[0], 'R' );
  refalrts::reinit_char( context[4], 'i' );
  refalrts::reinit_char( context[5], 'g' );
  refalrts::reinit_char( context[1], 'h' );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[6], context[6] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult lambda_GenCommand_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 41 elems
  refalrts::Iter context[41];
  refalrts::zeros( context, 41 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_GenCommand_0/4 (/8 e.Indent#1/6 )/9 # RIGHT_EDGE/5 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::ident_right(  & ident_RIGHT_EDGE<int>::name, context[2], context[3] );
    if( ! context[5] )
      continue;
    context[6] = 0;
    context[7] = 0;
    context[8] = refalrts::brackets_left( context[6], context[7], context[2], context[3] );
    if( ! context[8] )
      continue;
    refalrts::bracket_pointers(context[8], context[9]);
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Indent#1 as range 6

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/8 AsIs: e.Indent#1/6 HalfReuse: 'r'/9 HalfReuse: 'e'/5 HalfReuse: 'f'/1 } Tile{ HalfReuse: 'a'/0 HalfReuse: 'l'/4 } 'r'/10 't'/11 's'/12 ':'/13 ':'/14 'I'/15 't'/16 'e'/17 'r'/18 ' '/19 'r'/20 'e'/21 's'/22 ' '/23 '='/24 ' '/25 'a'/26 'r'/27 'g'/28 '_'/29 'e'/30 'n'/31 'd'/32 '-'/33 '>'/34 'n'/35 'e'/36 'x'/37 't'/38 ';'/39 )/40 Tile{ ]] }
    if( ! refalrts::alloc_char( context[10], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[11], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[12], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[13], ':' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[14], ':' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[15], 'I' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[16], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[17], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[18], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[19], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[20], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[21], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[22], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[23], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[24], '=' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[25], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[26], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[27], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[28], 'g' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[29], '_' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[30], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[31], 'n' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[32], 'd' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[33], '-' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[34], '>' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[35], 'n' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[36], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[37], 'x' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[38], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[39], ';' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[40] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[9], 'r' );
    refalrts::reinit_char( context[5], 'e' );
    refalrts::reinit_char( context[1], 'f' );
    refalrts::reinit_char( context[0], 'a' );
    refalrts::reinit_char( context[4], 'l' );
    refalrts::link_brackets( context[8], context[40] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[10], context[40] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[8], context[1] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & lambda_GenCommand_0/4 (/7 e.Indent#1/5 )/8 s.Offset#2/9 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.Indent#1 as range 5
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Indent#1/5 HalfReuse: 'r'/8 } 'e'/10 'f'/11 'a'/12 'l'/13 'r'/14 't'/15 's'/16 ':'/17 ':'/18 'I'/19 't'/20 'e'/21 'r'/22 ' '/23 'r'/24 'e'/25 's'/26 ' '/27 '='/28 ' '/29 Tile{ AsIs: </0 Reuse: & ContextItem/4 } Tile{ AsIs: s.Offset#2/9 AsIs: >/1 } ';'/30 )/31 Tile{ ]] }
  if( ! refalrts::alloc_char( context[10], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[11], 'f' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[12], 'a' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[13], 'l' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[14], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[15], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[16], 's' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[17], ':' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[18], ':' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[19], 'I' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[20], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[21], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[22], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[23], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[24], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[25], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[26], 's' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[27], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[28], '=' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[29], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[30], ';' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[31] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_char( context[8], 'r' );
  refalrts::update_name( context[4], ContextItem, "ContextItem" );
  refalrts::link_brackets( context[7], context[31] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[30], context[31] );
  res = refalrts::splice_evar( res, context[9], context[1] );
  res = refalrts::splice_evar( res, context[0], context[4] );
  res = refalrts::splice_evar( res, context[10], context[29] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult lambda_GenCommand_1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 65 elems
  refalrts::Iter context[65];
  refalrts::zeros( context, 65 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_GenCommand_1/4 (/8 e.Indent#1/6 )/9 # LEFT_EDGE/5 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::ident_right(  & ident_LEFT_EDGE<int>::name, context[2], context[3] );
    if( ! context[5] )
      continue;
    context[6] = 0;
    context[7] = 0;
    context[8] = refalrts::brackets_left( context[6], context[7], context[2], context[3] );
    if( ! context[8] )
      continue;
    refalrts::bracket_pointers(context[8], context[9]);
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Indent#1 as range 6

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } (/10 e.Indent#1/6/11 Tile{ HalfReuse: 'r'/5 HalfReuse: 'e'/1 } 'f'/13 'a'/14 'l'/15 'r'/16 't'/17 's'/18 ':'/19 ':'/20 's'/21 'p'/22 'l'/23 'i'/24 'c'/25 'e'/26 '_'/27 't'/28 'o'/29 '_'/30 'f'/31 'r'/32 'e'/33 'e'/34 'l'/35 'i'/36 's'/37 't'/38 '_'/39 'o'/40 'p'/41 'e'/42 'n'/43 '('/44 ' '/45 't'/46 'r'/47 'a'/48 's'/49 'h'/50 '_'/51 'p'/52 'r'/53 'e'/54 'v'/55 ','/56 ' '/57 'r'/58 'e'/59 's'/60 ' '/61 ')'/62 ';'/63 )/64 Tile{ AsIs: </0 Reuse: & GenReturn/4 HalfReuse: # Success/8 AsIs: e.Indent#1/6 HalfReuse: >/9 } Tile{ ]] }
    if( ! refalrts::alloc_open_bracket( context[10] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[11], context[12], context[6], context[7]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[13], 'f' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[14], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[15], 'l' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[16], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[17], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[18], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[19], ':' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[20], ':' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[21], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[22], 'p' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[23], 'l' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[24], 'i' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[25], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[26], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[27], '_' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[28], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[29], 'o' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[30], '_' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[31], 'f' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[32], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[33], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[34], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[35], 'l' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[36], 'i' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[37], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[38], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[39], '_' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[40], 'o' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[41], 'p' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[42], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[43], 'n' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[44], '(' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[45], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[46], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[47], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[48], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[49], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[50], 'h' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[51], '_' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[52], 'p' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[53], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[54], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[55], 'v' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[56], ',' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[57], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[58], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[59], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[60], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[61], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[62], ')' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[63], ';' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[64] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[5], 'r' );
    refalrts::reinit_char( context[1], 'e' );
    refalrts::update_name( context[4], GenReturn, "GenReturn" );
    refalrts::reinit_ident( context[8], & ident_Success<int>::name );
    refalrts::reinit_close_call( context[9] );
    refalrts::push_stack( context[9] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[10], context[64] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[0], context[9] );
    res = refalrts::splice_evar( res, context[13], context[64] );
    res = refalrts::splice_evar( res, context[5], context[1] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[10], context[10] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & lambda_GenCommand_1/4 (/7 e.Indent#1/5 )/8 s.Offset#2/9 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.Indent#1 as range 5
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } (/10 e.Indent#1/5/11 'r'/13 'e'/14 'f'/15 'a'/16 'l'/17 'r'/18 't'/19 's'/20 ':'/21 ':'/22 's'/23 'p'/24 'l'/25 'i'/26 'c'/27 'e'/28 '_'/29 't'/30 'o'/31 '_'/32 'f'/33 'r'/34 'e'/35 'e'/36 'l'/37 'i'/38 's'/39 't'/40 '_'/41 'o'/42 'p'/43 'e'/44 'n'/45 '('/46 ' '/47 </48 & ContextItem/49 Tile{ AsIs: s.Offset#2/9 AsIs: >/1 } ','/50 ' '/51 'r'/52 'e'/53 's'/54 ' '/55 ')'/56 ';'/57 )/58 Tile{ AsIs: </0 Reuse: & GenReturn/4 HalfReuse: # Success/7 AsIs: e.Indent#1/5 HalfReuse: >/8 } Tile{ ]] }
  if( ! refalrts::alloc_open_bracket( context[10] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[11], context[12], context[5], context[6]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[13], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[14], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[15], 'f' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[16], 'a' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[17], 'l' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[18], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[19], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[20], 's' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[21], ':' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[22], ':' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[23], 's' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[24], 'p' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[25], 'l' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[26], 'i' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[27], 'c' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[28], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[29], '_' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[30], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[31], 'o' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[32], '_' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[33], 'f' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[34], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[35], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[36], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[37], 'l' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[38], 'i' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[39], 's' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[40], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[41], '_' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[42], 'o' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[43], 'p' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[44], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[45], 'n' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[46], '(' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[47], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[48] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[49], ContextItem, "ContextItem" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[50], ',' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[51], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[52], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[53], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[54], 's' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[55], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[56], ')' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[57], ';' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[58] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], GenReturn, "GenReturn" );
  refalrts::reinit_ident( context[7], & ident_Success<int>::name );
  refalrts::reinit_close_call( context[8] );
  refalrts::push_stack( context[8] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[10], context[58] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[48] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[0], context[8] );
  res = refalrts::splice_evar( res, context[50], context[58] );
  res = refalrts::splice_evar( res, context[9], context[1] );
  res = refalrts::splice_evar( res, context[10], context[49] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult lambda_GenCommand_2(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 27 elems
  refalrts::Iter context[27];
  refalrts::zeros( context, 27 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & lambda_GenCommand_2/4 (/7 e.Indent#1/5 )/8 (/11 e.Name#2/9 )/12 >/1
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
  // closed e.Indent#1 as range 5
  // closed e.Name#2 as range 9

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Indent#1/5 HalfReuse: ' '/8 HalfReuse: ' '/11 } '{'/13 ' '/14 Tile{ AsIs: </0 Reuse: & PrintName/4 } Tile{ AsIs: e.Name#2/9 } >/15 ','/16 ' '/17 '\"'/18 </19 & PrintName/20 e.Name#2/9/21 >/23 '\"'/24 ' '/25 '}'/26 Tile{ HalfReuse: ','/12 HalfReuse: )/1 ]] }
  if( ! refalrts::alloc_char( context[13], '{' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[14], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[16], ',' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[17], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[18], '\"' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[19] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[20], PrintName, "PrintName" ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[21], context[22], context[9], context[10]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[23] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[24], '\"' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[25], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[26], '}' ) )
    return refalrts::cNoMemory;
  refalrts::reinit_char( context[8], ' ' );
  refalrts::reinit_char( context[11], ' ' );
  refalrts::update_name( context[4], PrintName, "PrintName" );
  refalrts::reinit_char( context[12], ',' );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[7], context[1] );
  refalrts::push_stack( context[23] );
  refalrts::push_stack( context[19] );
  refalrts::push_stack( context[15] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[12];
  res = refalrts::splice_evar( res, context[15], context[26] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[0], context[4] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[7], context[11] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult lambda_GenCommand_3(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 30 elems
  refalrts::Iter context[30];
  refalrts::zeros( context, 30 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & lambda_GenCommand_3/4 (/7 e.Indent#1/5 )/8 (/11 e.Name#2/9 )/12 >/1
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
  // closed e.Indent#1 as range 5
  // closed e.Name#2 as range 9

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Indent#1/5 HalfReuse: ' '/8 HalfReuse: ' '/11 } Tile{ HalfReuse: '&'/0 HalfReuse: ' '/4 } 'i'/13 'd'/14 'e'/15 'n'/16 't'/17 '_'/18 Tile{ AsIs: e.Name#2/9 } '<'/19 'i'/20 'n'/21 't'/22 '>'/23 ':'/24 ':'/25 'n'/26 'a'/27 'm'/28 'e'/29 Tile{ HalfReuse: ','/12 HalfReuse: )/1 ]] }
  if( ! refalrts::alloc_char( context[13], 'i' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[14], 'd' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[15], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[16], 'n' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[17], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[18], '_' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[19], '<' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[20], 'i' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[21], 'n' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[22], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[23], '>' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[24], ':' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[25], ':' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[26], 'n' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[27], 'a' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[28], 'm' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[29], 'e' ) )
    return refalrts::cNoMemory;
  refalrts::reinit_char( context[8], ' ' );
  refalrts::reinit_char( context[11], ' ' );
  refalrts::reinit_char( context[0], '&' );
  refalrts::reinit_char( context[4], ' ' );
  refalrts::reinit_char( context[12], ',' );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[7], context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[12];
  res = refalrts::splice_evar( res, context[19], context[29] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[13], context[18] );
  res = refalrts::splice_evar( res, context[0], context[4] );
  res = refalrts::splice_evar( res, context[7], context[11] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult lambda_GenCommand_4(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & lambda_GenCommand_4/4 (/7 e.Indent#1/5 )/8 s.Number#2/9 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.Indent#1 as range 5
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Indent#1/5 HalfReuse: ' '/8 } ' '/10 Tile{ AsIs: </0 Reuse: & StrFromInt/4 } Tile{ AsIs: s.Number#2/9 AsIs: >/1 } 'U'/11 'L'/12 ','/13 )/14 Tile{ ]] }
  if( ! refalrts::alloc_char( context[10], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[11], 'U' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[12], 'L' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[13], ',' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[14] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_char( context[8], ' ' );
  refalrts::update_name( context[4], StrFromInt, "StrFromInt" );
  refalrts::link_brackets( context[7], context[14] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[11], context[14] );
  res = refalrts::splice_evar( res, context[9], context[1] );
  res = refalrts::splice_evar( res, context[0], context[4] );
  res = refalrts::splice_evar( res, context[10], context[10] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult lambda_GenCommand_5(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & lambda_GenCommand_5/4 (/7 e.Indent#1/5 )/8 (/11 e.String#2/9 )/12 >/1
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
  // closed e.Indent#1 as range 5
  // closed e.String#2 as range 9

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Indent#1/5 HalfReuse: ' '/8 HalfReuse: ' '/11 } '{'/13 Tile{ AsIs: </0 Reuse: & PrintString/4 } Tile{ AsIs: e.String#2/9 } >/14 '}'/15 Tile{ HalfReuse: ','/12 HalfReuse: )/1 ]] }
  if( ! refalrts::alloc_char( context[13], '{' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[15], '}' ) )
    return refalrts::cNoMemory;
  refalrts::reinit_char( context[8], ' ' );
  refalrts::reinit_char( context[11], ' ' );
  refalrts::update_name( context[4], PrintString, "PrintString" );
  refalrts::reinit_char( context[12], ',' );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[7], context[1] );
  refalrts::push_stack( context[14] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[12];
  res = refalrts::splice_evar( res, context[14], context[15] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[0], context[4] );
  res = refalrts::splice_evar( res, context[13], context[13] );
  res = refalrts::splice_evar( res, context[7], context[11] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult GenCommand(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 178 elems
  refalrts::Iter context[178];
  refalrts::zeros( context, 178 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & GenCommand/4 (/7 e.Indent#1/5 )/8 (/11 # CmdComment/13 e.Text#1/9 )/12 >/1
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
    context[13] = refalrts::ident_left(  & ident_CmdComment<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Indent#1 as range 5
    // closed e.Text#1 as range 9

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  & GenCommand/4 {REMOVED TILE}  {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Indent#1/5 AsIs: )/8 AsIs: (/11 } e.Indent#1/5/14 Tile{ HalfReuse: '/'/0 } Tile{ HalfReuse: '/'/13 AsIs: e.Text#1/9 AsIs: )/12 } Tile{ ]] }
    if (! refalrts::copy_evar(context[14], context[15], context[5], context[6]))
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[0], '/' );
    refalrts::reinit_char( context[13], '/' );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[13], context[12] );
    res = refalrts::splice_evar( res, context[0], context[0] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    res = refalrts::splice_evar( res, context[7], context[11] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & GenCommand/4 (/7 e.Indent#1/5 )/8 (/11 # CmdEnum/13 s.MemoryClass#1/14 e.Name#1/9 )/12 >/1
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
    context[13] = refalrts::ident_left(  & ident_CmdEnum<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Indent#1 as range 5
    if( ! refalrts::svar_left( context[14], context[9], context[10] ) )
      continue;
    // closed e.Name#1 as range 9

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Indent#1/5 AsIs: )/8 HalfReuse: </11 HalfReuse: & SwGenFnStart/13 AsIs: s.MemoryClass#1/14 } & NakedArguments/15 Tile{ AsIs: e.Name#1/9 } >/16 Tile{ AsIs: </0 Reuse: & GenReturn/4 } # Fail/17 ' '/18 ' '/19 >/20 (/21 '}'/22 )/23 Tile{ HalfReuse: (/12 HalfReuse: )/1 ]] }
    if( ! refalrts::alloc_name( context[15], NakedArguments, "NakedArguments" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[17], & ident_Fail<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[18], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[19], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[20] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[21] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[22], '}' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[23] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_call( context[11] );
    refalrts::reinit_name( context[13], SwGenFnStart, "SwGenFnStart" );
    refalrts::update_name( context[4], GenReturn, "GenReturn" );
    refalrts::reinit_open_bracket( context[12] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[12], context[1] );
    refalrts::link_brackets( context[21], context[23] );
    refalrts::push_stack( context[20] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[16] );
    refalrts::push_stack( context[11] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[12];
    res = refalrts::splice_evar( res, context[17], context[23] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[16], context[16] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[15], context[15] );
    res = refalrts::splice_evar( res, context[7], context[14] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & GenCommand/4 (/7 e.Indent#1/5 )/8 (/11 # CmdSwap/13 s.MemoryClass#1/14 e.Name#1/9 )/12 >/1
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
    context[13] = refalrts::ident_left(  & ident_CmdSwap<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Indent#1 as range 5
    if( ! refalrts::svar_left( context[14], context[9], context[10] ) )
      continue;
    // closed e.Name#1 as range 9

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & GenCommand/4 {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Indent#1/5 AsIs: )/8 HalfReuse: </11 HalfReuse: & GenSwap/13 AsIs: s.MemoryClass#1/14 AsIs: e.Name#1/9 HalfReuse: >/12 } Tile{ ]] }
    refalrts::reinit_open_call( context[11] );
    refalrts::reinit_name( context[13], GenSwap, "GenSwap" );
    refalrts::reinit_close_call( context[12] );
    refalrts::push_stack( context[12] );
    refalrts::push_stack( context[11] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[7], context[12] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & GenCommand/4 (/7 e.Indent#1/5 )/8 (/11 # CmdDeclaration/13 # GN_Entry/14 e.Name#1/9 )/12 >/1
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
    context[13] = refalrts::ident_left(  & ident_CmdDeclaration<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    context[14] = refalrts::ident_left(  & ident_GN_Entry<int>::name, context[9], context[10] );
    if( ! context[14] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Indent#1 as range 5
    // closed e.Name#1 as range 9

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & GenCommand/4 {REMOVED TILE}  # GN_Entry/14 {REMOVED TILE}  )/12 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Indent#1/5 AsIs: )/8 HalfReuse: </11 HalfReuse: & GenExtern/13 } Tile{ AsIs: e.Name#1/9 } Tile{ AsIs: >/1 ]] }
    refalrts::reinit_open_call( context[11] );
    refalrts::reinit_name( context[13], GenExtern, "GenExtern" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[11] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[7], context[13] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & GenCommand/4 (/7 e.Indent#1/5 )/8 (/11 # CmdDeclaration/13 # GN_Local/14 e.Name#1/9 )/12 >/1
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
    context[13] = refalrts::ident_left(  & ident_CmdDeclaration<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    context[14] = refalrts::ident_left(  & ident_GN_Local<int>::name, context[9], context[10] );
    if( ! context[14] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Indent#1 as range 5
    // closed e.Name#1 as range 9

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & GenCommand/4 {REMOVED TILE}  # GN_Local/14 {REMOVED TILE}  )/12 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Indent#1/5 AsIs: )/8 HalfReuse: </11 HalfReuse: & GenForward/13 } Tile{ AsIs: e.Name#1/9 } Tile{ AsIs: >/1 ]] }
    refalrts::reinit_open_call( context[11] );
    refalrts::reinit_name( context[13], GenForward, "GenForward" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[11] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[7], context[13] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & GenCommand/4 (/7 e.Indent#1/5 )/8 (/11 # CmdDefineIdent/13 e.Name#1/9 )/12 >/1
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
    context[13] = refalrts::ident_left(  & ident_CmdDefineIdent<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Indent#1 as range 5
    // closed e.Name#1 as range 9

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & GenCommand/4 {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Indent#1/5 AsIs: )/8 HalfReuse: </11 HalfReuse: & GenIdent/13 AsIs: e.Name#1/9 HalfReuse: >/12 } Tile{ ]] }
    refalrts::reinit_open_call( context[11] );
    refalrts::reinit_name( context[13], GenIdent, "GenIdent" );
    refalrts::reinit_close_call( context[12] );
    refalrts::push_stack( context[12] );
    refalrts::push_stack( context[11] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[7], context[12] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & GenCommand/4 (/7 e.Indent#1/5 )/8 (/11 # CmdFnStart/13 s.MemoryClass#1/14 e.Name#1/9 )/12 >/1
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
    context[13] = refalrts::ident_left(  & ident_CmdFnStart<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Indent#1 as range 5
    if( ! refalrts::svar_left( context[14], context[9], context[10] ) )
      continue;
    // closed e.Name#1 as range 9

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.Indent#1/5 } Tile{ HalfReuse: ' '/4 HalfReuse: ' '/7 } Tile{ AsIs: )/8 HalfReuse: </11 HalfReuse: & GenFnStart/13 AsIs: s.MemoryClass#1/14 AsIs: e.Name#1/9 HalfReuse: >/12 } Tile{ ]] }
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_char( context[4], ' ' );
    refalrts::reinit_char( context[7], ' ' );
    refalrts::reinit_open_call( context[11] );
    refalrts::reinit_name( context[13], GenFnStart, "GenFnStart" );
    refalrts::reinit_close_call( context[12] );
    refalrts::push_stack( context[12] );
    refalrts::push_stack( context[11] );
    refalrts::link_brackets( context[0], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[8], context[12] );
    res = refalrts::splice_evar( res, context[4], context[7] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[0], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & GenCommand/4 (/7 e.Indent#1/5 )/8 (/11 # CmdSeparator/13 )/12 >/1
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
    context[13] = refalrts::ident_left(  & ident_CmdSeparator<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Indent#1 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & GenCommand/4 {REMOVED TILE}  # CmdSeparator/13 )/12 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Indent#1/5 AsIs: )/8 AsIs: (/11 } e.Indent#1/5/14 Tile{ HalfReuse: )/1 ]] }
    if (! refalrts::copy_evar(context[14], context[15], context[5], context[6]))
      return refalrts::cNoMemory;
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[11], context[1] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[14], context[15] );
    res = refalrts::splice_evar( res, context[7], context[11] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & GenCommand/4 (/7 e.Indent#1/5 ' '/10 ' '/9 )/8 (/13 # CmdFnEnd/15 )/14 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_right( ' ', context[5], context[6] );
    if( ! context[9] )
      continue;
    context[10] = refalrts::char_right( ' ', context[5], context[6] );
    if( ! context[10] )
      continue;
    context[11] = 0;
    context[12] = 0;
    context[13] = refalrts::brackets_left( context[11], context[12], context[2], context[3] );
    if( ! context[13] )
      continue;
    refalrts::bracket_pointers(context[13], context[14]);
    context[15] = refalrts::ident_left(  & ident_CmdFnEnd<int>::name, context[11], context[12] );
    if( ! context[15] )
      continue;
    if( ! refalrts::empty_seq( context[11], context[12] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Indent#1 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & GenCommand/4 {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Indent#1/5 HalfReuse: )/10 HalfReuse: (/9 HalfReuse: '}'/8 HalfReuse: )/13 HalfReuse: (/15 AsIs: )/14 } Tile{ ]] }
    refalrts::reinit_close_bracket( context[10] );
    refalrts::reinit_open_bracket( context[9] );
    refalrts::reinit_char( context[8], '}' );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::reinit_open_bracket( context[15] );
    refalrts::link_brackets( context[15], context[14] );
    refalrts::link_brackets( context[9], context[13] );
    refalrts::link_brackets( context[7], context[10] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[7], context[14] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & GenCommand/4 (/7 e.Indent#1/5 )/8 (/11 # CmdStartSentence/13 )/12 >/1
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
    context[13] = refalrts::ident_left(  & ident_CmdStartSentence<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Indent#1 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } (/14 e.Indent#1/5/15 ' '/17 Tile{ HalfReuse: ' '/0 HalfReuse: )/4 AsIs: (/7 AsIs: e.Indent#1/5 HalfReuse: 'd'/8 HalfReuse: 'o'/11 HalfReuse: ' '/13 HalfReuse: '{'/12 HalfReuse: )/1 } (/18 e.Indent#1/5/19 ' '/21 ' '/22 'r'/23 'e'/24 'f'/25 'a'/26 'l'/27 'r'/28 't'/29 's'/30 ':'/31 ':'/32 's'/33 't'/34 'a'/35 'r'/36 't'/37 '_'/38 's'/39 'e'/40 'n'/41 't'/42 'e'/43 'n'/44 'c'/45 'e'/46 '('/47 ')'/48 ';'/49 )/50 Tile{ ]] }
    if( ! refalrts::alloc_open_bracket( context[14] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[15], context[16], context[5], context[6]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[17], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[18] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[19], context[20], context[5], context[6]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[21], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[22], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[23], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[24], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[25], 'f' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[26], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[27], 'l' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[28], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[29], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[30], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[31], ':' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[32], ':' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[33], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[34], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[35], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[36], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[37], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[38], '_' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[39], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[40], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[41], 'n' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[42], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[43], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[44], 'n' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[45], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[46], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[47], '(' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[48], ')' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[49], ';' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[50] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[0], ' ' );
    refalrts::reinit_close_bracket( context[4] );
    refalrts::reinit_char( context[8], 'd' );
    refalrts::reinit_char( context[11], 'o' );
    refalrts::reinit_char( context[13], ' ' );
    refalrts::reinit_char( context[12], '{' );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[18], context[50] );
    refalrts::link_brackets( context[7], context[1] );
    refalrts::link_brackets( context[14], context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[18], context[50] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    res = refalrts::splice_evar( res, context[14], context[17] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & GenCommand/4 (/7 e.Indent#1/5 ' '/10 ' '/9 )/8 (/13 # CmdEndSentence/15 )/14 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_right( ' ', context[5], context[6] );
    if( ! context[9] )
      continue;
    context[10] = refalrts::char_right( ' ', context[5], context[6] );
    if( ! context[10] )
      continue;
    context[11] = 0;
    context[12] = 0;
    context[13] = refalrts::brackets_left( context[11], context[12], context[2], context[3] );
    if( ! context[13] )
      continue;
    refalrts::bracket_pointers(context[13], context[14]);
    context[15] = refalrts::ident_left(  & ident_CmdEndSentence<int>::name, context[11], context[12] );
    if( ! context[15] )
      continue;
    if( ! refalrts::empty_seq( context[11], context[12] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Indent#1 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 } e.Indent#1/5/16 Tile{ HalfReuse: )/4 AsIs: (/7 AsIs: e.Indent#1/5 Reuse: '}'/10 AsIs: ' '/9 HalfReuse: 'w'/8 HalfReuse: 'h'/13 HalfReuse: 'i'/15 HalfReuse: 'l'/14 HalfReuse: 'e'/1 } ' '/18 '('/19 ' '/20 '0'/21 ' '/22 ')'/23 ';'/24 )/25 (/26 )/27 Tile{ ]] }
    if (! refalrts::copy_evar(context[16], context[17], context[5], context[6]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[18], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[19], '(' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[20], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[21], '0' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[22], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[23], ')' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[24], ';' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[25] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[26] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[27] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_close_bracket( context[4] );
    refalrts::update_char( context[10], '}' );
    refalrts::reinit_char( context[8], 'w' );
    refalrts::reinit_char( context[13], 'h' );
    refalrts::reinit_char( context[15], 'i' );
    refalrts::reinit_char( context[14], 'l' );
    refalrts::reinit_char( context[1], 'e' );
    refalrts::link_brackets( context[26], context[27] );
    refalrts::link_brackets( context[7], context[25] );
    refalrts::link_brackets( context[0], context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[18], context[27] );
    res = refalrts::splice_evar( res, context[4], context[1] );
    res = refalrts::splice_evar( res, context[16], context[17] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & GenCommand/4 (/7 e.Indent#1/5 )/8 (/11 # CmdReinitElem/13 s.ElemNumber#1/14 e.ElemInfo#1/9 )/12 >/1
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
    context[13] = refalrts::ident_left(  & ident_CmdReinitElem<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Indent#1 as range 5
    if( ! refalrts::svar_left( context[14], context[9], context[10] ) )
      continue;
    // closed e.ElemInfo#1 as range 9

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: (/1 } e.Indent#1/5/15 )/17 Tile{ AsIs: </0 Reuse: & PrintCreateElem/4 AsIs: (/7 AsIs: e.Indent#1/5 AsIs: )/8 AsIs: (/11 HalfReuse: 'r'/13 } 'e'/18 'i'/19 'n'/20 'i'/21 't'/22 )/23 Tile{ AsIs: s.ElemNumber#1/14 AsIs: e.ElemInfo#1/9 HalfReuse: >/12 } Tile{ ]] }
    if (! refalrts::copy_evar(context[15], context[16], context[5], context[6]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[17] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[18], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[19], 'i' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[20], 'n' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[21], 'i' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[22], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[23] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[1] );
    refalrts::update_name( context[4], PrintCreateElem, "PrintCreateElem" );
    refalrts::reinit_char( context[13], 'r' );
    refalrts::reinit_close_call( context[12] );
    refalrts::push_stack( context[12] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[11], context[23] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[1], context[17] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[14], context[12] );
    res = refalrts::splice_evar( res, context[18], context[23] );
    res = refalrts::splice_evar( res, context[0], context[13] );
    res = refalrts::splice_evar( res, context[17], context[17] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[1], context[1] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & GenCommand/4 (/7 e.Indent#1/5 )/8 (/11 # CmdUpdateElem/13 s.ElemNumber#1/14 e.ElemInfo#1/9 )/12 >/1
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
    context[13] = refalrts::ident_left(  & ident_CmdUpdateElem<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Indent#1 as range 5
    if( ! refalrts::svar_left( context[14], context[9], context[10] ) )
      continue;
    // closed e.ElemInfo#1 as range 9

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: (/1 } e.Indent#1/5/15 )/17 Tile{ AsIs: </0 Reuse: & PrintCreateElem/4 AsIs: (/7 AsIs: e.Indent#1/5 AsIs: )/8 AsIs: (/11 HalfReuse: 'u'/13 } 'p'/18 'd'/19 'a'/20 't'/21 'e'/22 )/23 Tile{ AsIs: s.ElemNumber#1/14 AsIs: e.ElemInfo#1/9 HalfReuse: >/12 } Tile{ ]] }
    if (! refalrts::copy_evar(context[15], context[16], context[5], context[6]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[17] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[18], 'p' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[19], 'd' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[20], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[21], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[22], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[23] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[1] );
    refalrts::update_name( context[4], PrintCreateElem, "PrintCreateElem" );
    refalrts::reinit_char( context[13], 'u' );
    refalrts::reinit_close_call( context[12] );
    refalrts::push_stack( context[12] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[11], context[23] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[1], context[17] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[14], context[12] );
    res = refalrts::splice_evar( res, context[18], context[23] );
    res = refalrts::splice_evar( res, context[0], context[13] );
    res = refalrts::splice_evar( res, context[17], context[17] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[1], context[1] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & GenCommand/4 (/7 e.Indent#1/5 )/8 (/11 # CmdInitB0/13 )/12 >/1
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
    context[13] = refalrts::ident_left(  & ident_CmdInitB0<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Indent#1 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } (/14 e.Indent#1/5/15 )/17 (/18 e.Indent#1/5/19 </21 & ContextRange_B/22 0/23 >/24 ' '/25 '='/26 ' '/27 'a'/28 'r'/29 'g'/30 '_'/31 'b'/32 'e'/33 'g'/34 'i'/35 'n'/36 Tile{ HalfReuse: ';'/0 HalfReuse: )/4 AsIs: (/7 AsIs: e.Indent#1/5 HalfReuse: </8 HalfReuse: & ContextRange_E/11 HalfReuse: 0/13 HalfReuse: >/12 HalfReuse: ' '/1 } '='/37 ' '/38 'a'/39 'r'/40 'g'/41 '_'/42 'e'/43 'n'/44 'd'/45 ';'/46 )/47 (/48 e.Indent#1/5/49 'r'/51 'e'/52 'f'/53 'a'/54 'l'/55 'r'/56 't'/57 's'/58 ':'/59 ':'/60 'm'/61 'o'/62 'v'/63 'e'/64 '_'/65 'l'/66 'e'/67 'f'/68 't'/69 '('/70 ' '/71 </72 & ContextRange/73 0/74 >/75 ' '/76 ')'/77 ';'/78 )/79 (/80 e.Indent#1/5/81 'r'/83 'e'/84 'f'/85 'a'/86 'l'/87 'r'/88 't'/89 's'/90 ':'/91 ':'/92 'm'/93 'o'/94 'v'/95 'e'/96 '_'/97 'l'/98 'e'/99 'f'/100 't'/101 '('/102 ' '/103 </104 & ContextRange/105 0/106 >/107 ' '/108 ')'/109 ';'/110 )/111 (/112 e.Indent#1/5/113 'r'/115 'e'/116 'f'/117 'a'/118 'l'/119 'r'/120 't'/121 's'/122 ':'/123 ':'/124 'm'/125 'o'/126 'v'/127 'e'/128 '_'/129 'r'/130 'i'/131 'g'/132 'h'/133 't'/134 '('/135 ' '/136 </137 & ContextRange/138 0/139 >/140 ' '/141 ')'/142 ';'/143 )/144 Tile{ ]] }
    if( ! refalrts::alloc_open_bracket( context[14] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[15], context[16], context[5], context[6]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[17] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[18] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[19], context[20], context[5], context[6]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[21] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[22], ContextRange_B, "ContextRange_B" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_number( context[23], 0UL ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[24] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[25], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[26], '=' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[27], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[28], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[29], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[30], 'g' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[31], '_' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[32], 'b' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[33], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[34], 'g' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[35], 'i' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[36], 'n' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[37], '=' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[38], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[39], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[40], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[41], 'g' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[42], '_' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[43], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[44], 'n' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[45], 'd' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[46], ';' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[47] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[48] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[49], context[50], context[5], context[6]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[51], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[52], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[53], 'f' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[54], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[55], 'l' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[56], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[57], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[58], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[59], ':' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[60], ':' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[61], 'm' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[62], 'o' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[63], 'v' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[64], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[65], '_' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[66], 'l' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[67], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[68], 'f' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[69], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[70], '(' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[71], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[72] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[73], ContextRange, "ContextRange" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_number( context[74], 0UL ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[75] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[76], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[77], ')' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[78], ';' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[79] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[80] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[81], context[82], context[5], context[6]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[83], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[84], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[85], 'f' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[86], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[87], 'l' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[88], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[89], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[90], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[91], ':' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[92], ':' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[93], 'm' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[94], 'o' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[95], 'v' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[96], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[97], '_' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[98], 'l' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[99], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[100], 'f' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[101], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[102], '(' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[103], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[104] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[105], ContextRange, "ContextRange" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_number( context[106], 0UL ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[107] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[108], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[109], ')' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[110], ';' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[111] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[112] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[113], context[114], context[5], context[6]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[115], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[116], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[117], 'f' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[118], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[119], 'l' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[120], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[121], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[122], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[123], ':' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[124], ':' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[125], 'm' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[126], 'o' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[127], 'v' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[128], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[129], '_' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[130], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[131], 'i' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[132], 'g' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[133], 'h' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[134], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[135], '(' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[136], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[137] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[138], ContextRange, "ContextRange" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_number( context[139], 0UL ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[140] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[141], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[142], ')' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[143], ';' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[144] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[0], ';' );
    refalrts::reinit_close_bracket( context[4] );
    refalrts::reinit_open_call( context[8] );
    refalrts::reinit_name( context[11], ContextRange_E, "ContextRange_E" );
    refalrts::reinit_number( context[13], 0UL );
    refalrts::reinit_close_call( context[12] );
    refalrts::reinit_char( context[1], ' ' );
    refalrts::link_brackets( context[112], context[144] );
    refalrts::push_stack( context[140] );
    refalrts::push_stack( context[137] );
    refalrts::link_brackets( context[80], context[111] );
    refalrts::push_stack( context[107] );
    refalrts::push_stack( context[104] );
    refalrts::link_brackets( context[48], context[79] );
    refalrts::push_stack( context[75] );
    refalrts::push_stack( context[72] );
    refalrts::link_brackets( context[7], context[47] );
    refalrts::push_stack( context[12] );
    refalrts::push_stack( context[8] );
    refalrts::link_brackets( context[18], context[4] );
    refalrts::push_stack( context[24] );
    refalrts::push_stack( context[21] );
    refalrts::link_brackets( context[14], context[17] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[37], context[144] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    res = refalrts::splice_evar( res, context[14], context[36] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & GenCommand/4 (/7 e.Indent#1/5 )/8 (/11 # CmdInitB0_Lite/13 )/12 >/1
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
    context[13] = refalrts::ident_left(  & ident_CmdInitB0_Lite<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Indent#1 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } (/14 e.Indent#1/5/15 )/17 (/18 e.Indent#1/5/19 </21 & ContextRange_B/22 0/23 >/24 ' '/25 '='/26 ' '/27 'a'/28 'r'/29 'g'/30 '_'/31 'b'/32 'e'/33 'g'/34 'i'/35 'n'/36 Tile{ HalfReuse: ';'/0 HalfReuse: )/4 AsIs: (/7 AsIs: e.Indent#1/5 HalfReuse: </8 HalfReuse: & ContextRange_E/11 HalfReuse: 0/13 HalfReuse: >/12 HalfReuse: ' '/1 } '='/37 ' '/38 'a'/39 'r'/40 'g'/41 '_'/42 'e'/43 'n'/44 'd'/45 ';'/46 )/47 Tile{ ]] }
    if( ! refalrts::alloc_open_bracket( context[14] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[15], context[16], context[5], context[6]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[17] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[18] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[19], context[20], context[5], context[6]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[21] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[22], ContextRange_B, "ContextRange_B" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_number( context[23], 0UL ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[24] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[25], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[26], '=' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[27], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[28], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[29], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[30], 'g' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[31], '_' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[32], 'b' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[33], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[34], 'g' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[35], 'i' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[36], 'n' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[37], '=' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[38], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[39], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[40], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[41], 'g' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[42], '_' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[43], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[44], 'n' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[45], 'd' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[46], ';' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[47] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[0], ';' );
    refalrts::reinit_close_bracket( context[4] );
    refalrts::reinit_open_call( context[8] );
    refalrts::reinit_name( context[11], ContextRange_E, "ContextRange_E" );
    refalrts::reinit_number( context[13], 0UL );
    refalrts::reinit_close_call( context[12] );
    refalrts::reinit_char( context[1], ' ' );
    refalrts::link_brackets( context[7], context[47] );
    refalrts::push_stack( context[12] );
    refalrts::push_stack( context[8] );
    refalrts::link_brackets( context[18], context[4] );
    refalrts::push_stack( context[24] );
    refalrts::push_stack( context[21] );
    refalrts::link_brackets( context[14], context[17] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[37], context[47] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    res = refalrts::splice_evar( res, context[14], context[36] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & GenCommand/4 (/7 e.Indent#1/5 )/8 (/11 # CmdChar/13 s.Direction#1/14 s.BracketNumber#1/15 s.Char#1/16 )/12 >/1
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
    context[13] = refalrts::ident_left(  & ident_CmdChar<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Indent#1 as range 5
    if( ! refalrts::svar_left( context[14], context[9], context[10] ) )
      continue;
    if( ! refalrts::svar_left( context[15], context[9], context[10] ) )
      continue;
    if( ! refalrts::svar_left( context[16], context[9], context[10] ) )
      continue;
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  s.Direction#1/14 s.BracketNumber#1/15 s.Char#1/16 {REMOVED TILE} 
    //RESULT: Tile{ [[ } (/17 e.Indent#1/5/18 )/20 Tile{ AsIs: </0 Reuse: & PrintMatchChar/4 AsIs: (/7 AsIs: e.Indent#1/5 AsIs: )/8 HalfReuse: s.Direction1 #14/11 HalfReuse: s.BracketNumber1 #15/13 } Tile{ HalfReuse: s.Char1 #16/12 AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_bracket( context[17] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[18], context[19], context[5], context[6]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[20] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], PrintMatchChar, "PrintMatchChar" );
    refalrts::reinit_svar( context[11], context[14] );
    refalrts::reinit_svar( context[13], context[15] );
    refalrts::reinit_svar( context[12], context[16] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[17], context[20] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[12];
    res = refalrts::splice_evar( res, context[0], context[13] );
    res = refalrts::splice_evar( res, context[17], context[20] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & GenCommand/4 (/7 e.Indent#1/5 )/8 (/11 # CmdCharSave/13 s.Direction#1/14 s.BracketNumber#1/15 s.Offset#1/16 s.Char#1/17 )/12 >/1
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
    context[13] = refalrts::ident_left(  & ident_CmdCharSave<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Indent#1 as range 5
    if( ! refalrts::svar_left( context[14], context[9], context[10] ) )
      continue;
    if( ! refalrts::svar_left( context[15], context[9], context[10] ) )
      continue;
    if( ! refalrts::svar_left( context[16], context[9], context[10] ) )
      continue;
    if( ! refalrts::svar_left( context[17], context[9], context[10] ) )
      continue;
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  s.Direction#1/14 {REMOVED TILE}  s.Offset#1/16 s.Char#1/17 {REMOVED TILE} 
    //RESULT: Tile{ [[ } (/18 e.Indent#1/5/19 )/21 Tile{ AsIs: </0 Reuse: & PrintMatchCharSave/4 AsIs: (/7 AsIs: e.Indent#1/5 AsIs: )/8 HalfReuse: s.Offset1 #16/11 HalfReuse: s.Direction1 #14/13 } Tile{ AsIs: s.BracketNumber#1/15 } Tile{ HalfReuse: s.Char1 #17/12 AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_bracket( context[18] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[19], context[20], context[5], context[6]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[21] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], PrintMatchCharSave, "PrintMatchCharSave" );
    refalrts::reinit_svar( context[11], context[16] );
    refalrts::reinit_svar( context[13], context[14] );
    refalrts::reinit_svar( context[12], context[17] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[18], context[21] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[12];
    res = refalrts::splice_evar( res, context[15], context[15] );
    res = refalrts::splice_evar( res, context[0], context[13] );
    res = refalrts::splice_evar( res, context[18], context[21] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & GenCommand/4 (/7 e.Indent#1/5 )/8 (/11 # CmdNumber/13 s.Direction#1/14 s.BracketNumber#1/15 s.Number#1/16 )/12 >/1
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
    context[13] = refalrts::ident_left(  & ident_CmdNumber<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Indent#1 as range 5
    if( ! refalrts::svar_left( context[14], context[9], context[10] ) )
      continue;
    if( ! refalrts::svar_left( context[15], context[9], context[10] ) )
      continue;
    if( ! refalrts::svar_left( context[16], context[9], context[10] ) )
      continue;
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  s.Direction#1/14 s.BracketNumber#1/15 s.Number#1/16 {REMOVED TILE} 
    //RESULT: Tile{ [[ } (/17 e.Indent#1/5/18 )/20 Tile{ AsIs: </0 Reuse: & PrintMatchNumber/4 AsIs: (/7 AsIs: e.Indent#1/5 AsIs: )/8 HalfReuse: s.Direction1 #14/11 HalfReuse: s.BracketNumber1 #15/13 } Tile{ HalfReuse: s.Number1 #16/12 AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_bracket( context[17] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[18], context[19], context[5], context[6]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[20] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], PrintMatchNumber, "PrintMatchNumber" );
    refalrts::reinit_svar( context[11], context[14] );
    refalrts::reinit_svar( context[13], context[15] );
    refalrts::reinit_svar( context[12], context[16] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[17], context[20] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[12];
    res = refalrts::splice_evar( res, context[0], context[13] );
    res = refalrts::splice_evar( res, context[17], context[20] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & GenCommand/4 (/7 e.Indent#1/5 )/8 (/11 # CmdNumberSave/13 s.Direction#1/14 s.BracketNumber#1/15 s.Offset#1/16 s.Number#1/17 )/12 >/1
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
    context[13] = refalrts::ident_left(  & ident_CmdNumberSave<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Indent#1 as range 5
    if( ! refalrts::svar_left( context[14], context[9], context[10] ) )
      continue;
    if( ! refalrts::svar_left( context[15], context[9], context[10] ) )
      continue;
    if( ! refalrts::svar_left( context[16], context[9], context[10] ) )
      continue;
    if( ! refalrts::svar_left( context[17], context[9], context[10] ) )
      continue;
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  s.Direction#1/14 {REMOVED TILE}  s.Offset#1/16 s.Number#1/17 {REMOVED TILE} 
    //RESULT: Tile{ [[ } (/18 e.Indent#1/5/19 )/21 Tile{ AsIs: </0 Reuse: & PrintMatchNumberSave/4 AsIs: (/7 AsIs: e.Indent#1/5 AsIs: )/8 HalfReuse: s.Offset1 #16/11 HalfReuse: s.Direction1 #14/13 } Tile{ AsIs: s.BracketNumber#1/15 } Tile{ HalfReuse: s.Number1 #17/12 AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_bracket( context[18] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[19], context[20], context[5], context[6]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[21] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], PrintMatchNumberSave, "PrintMatchNumberSave" );
    refalrts::reinit_svar( context[11], context[16] );
    refalrts::reinit_svar( context[13], context[14] );
    refalrts::reinit_svar( context[12], context[17] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[18], context[21] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[12];
    res = refalrts::splice_evar( res, context[15], context[15] );
    res = refalrts::splice_evar( res, context[0], context[13] );
    res = refalrts::splice_evar( res, context[18], context[21] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & GenCommand/4 (/7 e.Indent#1/5 )/8 (/11 # CmdName/13 s.Direction#1/14 s.BracketNumber#1/15 e.Name#1/9 )/12 >/1
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
    context[13] = refalrts::ident_left(  & ident_CmdName<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Indent#1 as range 5
    if( ! refalrts::svar_left( context[14], context[9], context[10] ) )
      continue;
    if( ! refalrts::svar_left( context[15], context[9], context[10] ) )
      continue;
    // closed e.Name#1 as range 9

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  s.Direction#1/14 s.BracketNumber#1/15 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } (/16 e.Indent#1/5/17 Tile{ AsIs: )/12 } Tile{ AsIs: </0 Reuse: & PrintMatchName/4 AsIs: (/7 AsIs: e.Indent#1/5 AsIs: )/8 HalfReuse: s.Direction1 #14/11 HalfReuse: s.BracketNumber1 #15/13 } Tile{ AsIs: e.Name#1/9 } Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_bracket( context[16] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[17], context[18], context[5], context[6]))
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], PrintMatchName, "PrintMatchName" );
    refalrts::reinit_svar( context[11], context[14] );
    refalrts::reinit_svar( context[13], context[15] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[16], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[0], context[13] );
    res = refalrts::splice_evar( res, context[12], context[12] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[16], context[16] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & GenCommand/4 (/7 e.Indent#1/5 )/8 (/11 # CmdNameSave/13 s.Direction#1/14 s.BracketNumber#1/15 s.Offset#1/16 e.Name#1/9 )/12 >/1
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
    context[13] = refalrts::ident_left(  & ident_CmdNameSave<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Indent#1 as range 5
    if( ! refalrts::svar_left( context[14], context[9], context[10] ) )
      continue;
    if( ! refalrts::svar_left( context[15], context[9], context[10] ) )
      continue;
    if( ! refalrts::svar_left( context[16], context[9], context[10] ) )
      continue;
    // closed e.Name#1 as range 9

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  s.Direction#1/14 {REMOVED TILE}  s.Offset#1/16 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } (/17 e.Indent#1/5/18 Tile{ AsIs: )/12 } Tile{ AsIs: </0 Reuse: & PrintMatchNameSave/4 AsIs: (/7 AsIs: e.Indent#1/5 AsIs: )/8 HalfReuse: s.Offset1 #16/11 HalfReuse: s.Direction1 #14/13 } Tile{ AsIs: s.BracketNumber#1/15 } Tile{ AsIs: e.Name#1/9 } Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_bracket( context[17] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[18], context[19], context[5], context[6]))
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], PrintMatchNameSave, "PrintMatchNameSave" );
    refalrts::reinit_svar( context[11], context[16] );
    refalrts::reinit_svar( context[13], context[14] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[17], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[15], context[15] );
    res = refalrts::splice_evar( res, context[0], context[13] );
    res = refalrts::splice_evar( res, context[12], context[12] );
    res = refalrts::splice_evar( res, context[18], context[19] );
    res = refalrts::splice_evar( res, context[17], context[17] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & GenCommand/4 (/7 e.Indent#1/5 )/8 (/11 # CmdIdent/13 s.Direction#1/14 s.BracketNumber#1/15 e.Name#1/9 )/12 >/1
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
    context[13] = refalrts::ident_left(  & ident_CmdIdent<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Indent#1 as range 5
    if( ! refalrts::svar_left( context[14], context[9], context[10] ) )
      continue;
    if( ! refalrts::svar_left( context[15], context[9], context[10] ) )
      continue;
    // closed e.Name#1 as range 9

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  s.Direction#1/14 s.BracketNumber#1/15 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } (/16 e.Indent#1/5/17 Tile{ AsIs: )/12 } Tile{ AsIs: </0 Reuse: & PrintMatchIdent/4 AsIs: (/7 AsIs: e.Indent#1/5 AsIs: )/8 HalfReuse: s.Direction1 #14/11 HalfReuse: s.BracketNumber1 #15/13 } Tile{ AsIs: e.Name#1/9 } Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_bracket( context[16] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[17], context[18], context[5], context[6]))
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], PrintMatchIdent, "PrintMatchIdent" );
    refalrts::reinit_svar( context[11], context[14] );
    refalrts::reinit_svar( context[13], context[15] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[16], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[0], context[13] );
    res = refalrts::splice_evar( res, context[12], context[12] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[16], context[16] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & GenCommand/4 (/7 e.Indent#1/5 )/8 (/11 # CmdIdentSave/13 s.Direction#1/14 s.BracketNumber#1/15 s.Offset#1/16 e.Name#1/9 )/12 >/1
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
    context[13] = refalrts::ident_left(  & ident_CmdIdentSave<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Indent#1 as range 5
    if( ! refalrts::svar_left( context[14], context[9], context[10] ) )
      continue;
    if( ! refalrts::svar_left( context[15], context[9], context[10] ) )
      continue;
    if( ! refalrts::svar_left( context[16], context[9], context[10] ) )
      continue;
    // closed e.Name#1 as range 9

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  s.Direction#1/14 {REMOVED TILE}  s.Offset#1/16 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } (/17 e.Indent#1/5/18 Tile{ AsIs: )/12 } Tile{ AsIs: </0 Reuse: & PrintMatchIdentSave/4 AsIs: (/7 AsIs: e.Indent#1/5 AsIs: )/8 HalfReuse: s.Offset1 #16/11 HalfReuse: s.Direction1 #14/13 } Tile{ AsIs: s.BracketNumber#1/15 } Tile{ AsIs: e.Name#1/9 } Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_bracket( context[17] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[18], context[19], context[5], context[6]))
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], PrintMatchIdentSave, "PrintMatchIdentSave" );
    refalrts::reinit_svar( context[11], context[16] );
    refalrts::reinit_svar( context[13], context[14] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[17], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[15], context[15] );
    res = refalrts::splice_evar( res, context[0], context[13] );
    res = refalrts::splice_evar( res, context[12], context[12] );
    res = refalrts::splice_evar( res, context[18], context[19] );
    res = refalrts::splice_evar( res, context[17], context[17] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & GenCommand/4 (/7 e.Indent#1/5 )/8 (/11 # CmdBrackets/13 s.Direction#1/14 s.BracketNumber#1/15 s.InnerBrackets#1/16 )/12 >/1
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
    context[13] = refalrts::ident_left(  & ident_CmdBrackets<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Indent#1 as range 5
    if( ! refalrts::svar_left( context[14], context[9], context[10] ) )
      continue;
    if( ! refalrts::svar_left( context[15], context[9], context[10] ) )
      continue;
    if( ! refalrts::svar_left( context[16], context[9], context[10] ) )
      continue;
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  s.Direction#1/14 s.BracketNumber#1/15 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } (/17 e.Indent#1/5/18 )/20 </21 & PrintBracketsVarInit/22 e.Indent#1/5/23 Tile{ AsIs: s.InnerBrackets#1/16 } >/25 Tile{ AsIs: </0 Reuse: & PrintMatchBrackets/4 AsIs: (/7 AsIs: e.Indent#1/5 AsIs: )/8 HalfReuse: s.Direction1 #14/11 HalfReuse: s.BracketNumber1 #15/13 } Tile{ HalfReuse: s.InnerBrackets1 #16/12 AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_bracket( context[17] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[18], context[19], context[5], context[6]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[20] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[21] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[22], PrintBracketsVarInit, "PrintBracketsVarInit" ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[23], context[24], context[5], context[6]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[25] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], PrintMatchBrackets, "PrintMatchBrackets" );
    refalrts::reinit_svar( context[11], context[14] );
    refalrts::reinit_svar( context[13], context[15] );
    refalrts::reinit_svar( context[12], context[16] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::push_stack( context[25] );
    refalrts::push_stack( context[21] );
    refalrts::link_brackets( context[17], context[20] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[12];
    res = refalrts::splice_evar( res, context[0], context[13] );
    res = refalrts::splice_evar( res, context[25], context[25] );
    res = refalrts::splice_evar( res, context[16], context[16] );
    res = refalrts::splice_evar( res, context[23], context[24] );
    res = refalrts::splice_evar( res, context[17], context[22] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & GenCommand/4 (/7 e.Indent#1/5 )/8 (/11 # CmdBracketsSave/13 s.Direction#1/14 s.BracketNumber#1/15 s.InnerBrackets#1/16 )/12 >/1
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
    context[13] = refalrts::ident_left(  & ident_CmdBracketsSave<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Indent#1 as range 5
    if( ! refalrts::svar_left( context[14], context[9], context[10] ) )
      continue;
    if( ! refalrts::svar_left( context[15], context[9], context[10] ) )
      continue;
    if( ! refalrts::svar_left( context[16], context[9], context[10] ) )
      continue;
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  s.Direction#1/14 s.BracketNumber#1/15 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } (/17 e.Indent#1/5/18 )/20 </21 & PrintBracketsVarInit/22 e.Indent#1/5/23 Tile{ AsIs: s.InnerBrackets#1/16 } >/25 Tile{ AsIs: </0 Reuse: & PrintMatchBracketsSave/4 AsIs: (/7 AsIs: e.Indent#1/5 AsIs: )/8 HalfReuse: s.Direction1 #14/11 HalfReuse: s.BracketNumber1 #15/13 } Tile{ HalfReuse: s.InnerBrackets1 #16/12 AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_bracket( context[17] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[18], context[19], context[5], context[6]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[20] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[21] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[22], PrintBracketsVarInit, "PrintBracketsVarInit" ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[23], context[24], context[5], context[6]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[25] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], PrintMatchBracketsSave, "PrintMatchBracketsSave" );
    refalrts::reinit_svar( context[11], context[14] );
    refalrts::reinit_svar( context[13], context[15] );
    refalrts::reinit_svar( context[12], context[16] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::push_stack( context[25] );
    refalrts::push_stack( context[21] );
    refalrts::link_brackets( context[17], context[20] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[12];
    res = refalrts::splice_evar( res, context[0], context[13] );
    res = refalrts::splice_evar( res, context[25], context[25] );
    res = refalrts::splice_evar( res, context[16], context[16] );
    res = refalrts::splice_evar( res, context[23], context[24] );
    res = refalrts::splice_evar( res, context[17], context[22] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & GenCommand/4 (/7 e.Indent#1/5 )/8 (/11 # CmdADT/13 s.Direction#1/14 s.BracketNumber#1/15 s.InnerBrackets#1/16 e.Name#1/9 )/12 >/1
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
    context[13] = refalrts::ident_left(  & ident_CmdADT<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Indent#1 as range 5
    if( ! refalrts::svar_left( context[14], context[9], context[10] ) )
      continue;
    if( ! refalrts::svar_left( context[15], context[9], context[10] ) )
      continue;
    if( ! refalrts::svar_left( context[16], context[9], context[10] ) )
      continue;
    // closed e.Name#1 as range 9

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  s.Direction#1/14 s.BracketNumber#1/15 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } (/17 e.Indent#1/5/18 )/20 </21 & PrintBracketsVarInit/22 e.Indent#1/5/23 s.InnerBrackets#1/16/25 Tile{ AsIs: >/1 } Tile{ AsIs: </0 Reuse: & PrintMatchADT/4 AsIs: (/7 AsIs: e.Indent#1/5 AsIs: )/8 HalfReuse: s.Direction1 #14/11 HalfReuse: s.BracketNumber1 #15/13 } Tile{ AsIs: s.InnerBrackets#1/16 AsIs: e.Name#1/9 HalfReuse: >/12 } Tile{ ]] }
    if( ! refalrts::alloc_open_bracket( context[17] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[18], context[19], context[5], context[6]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[20] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[21] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[22], PrintBracketsVarInit, "PrintBracketsVarInit" ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[23], context[24], context[5], context[6]))
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[25], context[16]))
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], PrintMatchADT, "PrintMatchADT" );
    refalrts::reinit_svar( context[11], context[14] );
    refalrts::reinit_svar( context[13], context[15] );
    refalrts::reinit_close_call( context[12] );
    refalrts::push_stack( context[12] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[21] );
    refalrts::link_brackets( context[17], context[20] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[16], context[12] );
    res = refalrts::splice_evar( res, context[0], context[13] );
    res = refalrts::splice_evar( res, context[1], context[1] );
    res = refalrts::splice_evar( res, context[17], context[25] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & GenCommand/4 (/7 e.Indent#1/5 )/8 (/11 # CmdADTSave/13 s.Direction#1/14 s.BracketNumber#1/15 s.InnerBrackets#1/16 e.Name#1/9 )/12 >/1
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
    context[13] = refalrts::ident_left(  & ident_CmdADTSave<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Indent#1 as range 5
    if( ! refalrts::svar_left( context[14], context[9], context[10] ) )
      continue;
    if( ! refalrts::svar_left( context[15], context[9], context[10] ) )
      continue;
    if( ! refalrts::svar_left( context[16], context[9], context[10] ) )
      continue;
    // closed e.Name#1 as range 9

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  s.Direction#1/14 s.BracketNumber#1/15 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } (/17 e.Indent#1/5/18 )/20 </21 & PrintBracketsVarInit/22 e.Indent#1/5/23 s.InnerBrackets#1/16/25 Tile{ AsIs: >/1 } Tile{ AsIs: </0 Reuse: & PrintMatchADTSave/4 AsIs: (/7 AsIs: e.Indent#1/5 AsIs: )/8 HalfReuse: s.Direction1 #14/11 HalfReuse: s.BracketNumber1 #15/13 } Tile{ AsIs: s.InnerBrackets#1/16 AsIs: e.Name#1/9 HalfReuse: >/12 } Tile{ ]] }
    if( ! refalrts::alloc_open_bracket( context[17] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[18], context[19], context[5], context[6]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[20] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[21] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[22], PrintBracketsVarInit, "PrintBracketsVarInit" ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[23], context[24], context[5], context[6]))
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[25], context[16]))
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], PrintMatchADTSave, "PrintMatchADTSave" );
    refalrts::reinit_svar( context[11], context[14] );
    refalrts::reinit_svar( context[13], context[15] );
    refalrts::reinit_close_call( context[12] );
    refalrts::push_stack( context[12] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[21] );
    refalrts::link_brackets( context[17], context[20] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[16], context[12] );
    res = refalrts::splice_evar( res, context[0], context[13] );
    res = refalrts::splice_evar( res, context[1], context[1] );
    res = refalrts::splice_evar( res, context[17], context[25] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & GenCommand/4 (/7 e.Indent#1/5 )/8 (/11 # CmdCallSave/13 s.Direction#1/14 s.BracketNumber#1/15 s.InnerBrackets#1/16 )/12 >/1
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
    context[13] = refalrts::ident_left(  & ident_CmdCallSave<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Indent#1 as range 5
    if( ! refalrts::svar_left( context[14], context[9], context[10] ) )
      continue;
    if( ! refalrts::svar_left( context[15], context[9], context[10] ) )
      continue;
    if( ! refalrts::svar_left( context[16], context[9], context[10] ) )
      continue;
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } (/17 e.Indent#1/5/18 )/20 </21 & PrintBracketsVarInit/22 e.Indent#1/5/23 Tile{ HalfReuse: s.InnerBrackets1 #16/0 HalfReuse: >/4 AsIs: (/7 AsIs: e.Indent#1/5 HalfReuse: </8 HalfReuse: & ContextItem/11 HalfReuse: </13 } & Add/25 2/26 Tile{ AsIs: s.InnerBrackets#1/16 HalfReuse: >/12 AsIs: >/1 } ' '/27 '='/28 ' '/29 'r'/30 'e'/31 'f'/32 'a'/33 'l'/34 'r'/35 't'/36 's'/37 ':'/38 ':'/39 'c'/40 'a'/41 'l'/42 'l'/43 '_'/44 </45 & StrFromDirection/46 Tile{ AsIs: s.Direction#1/14 } >/47 '('/48 ' '/49 </50 & ContextRange/51 s.InnerBrackets#1/16/52 >/53 ','/54 ' '/55 </56 & ContextRange/57 Tile{ AsIs: s.BracketNumber#1/15 } >/58 ' '/59 ')'/60 ';'/61 )/62 Tile{ ]] }
    if( ! refalrts::alloc_open_bracket( context[17] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[18], context[19], context[5], context[6]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[20] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[21] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[22], PrintBracketsVarInit, "PrintBracketsVarInit" ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[23], context[24], context[5], context[6]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[25], Add, "Add" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_number( context[26], 2UL ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[27], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[28], '=' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[29], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[30], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[31], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[32], 'f' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[33], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[34], 'l' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[35], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[36], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[37], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[38], ':' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[39], ':' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[40], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[41], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[42], 'l' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[43], 'l' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[44], '_' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[45] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[46], StrFromDirection, "StrFromDirection" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[47] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[48], '(' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[49], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[50] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[51], ContextRange, "ContextRange" ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[52], context[16]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[53] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[54], ',' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[55], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[56] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[57], ContextRange, "ContextRange" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[58] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[59], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[60], ')' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[61], ';' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[62] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_svar( context[0], context[16] );
    refalrts::reinit_close_call( context[4] );
    refalrts::reinit_open_call( context[8] );
    refalrts::reinit_name( context[11], ContextItem, "ContextItem" );
    refalrts::reinit_open_call( context[13] );
    refalrts::reinit_close_call( context[12] );
    refalrts::link_brackets( context[7], context[62] );
    refalrts::push_stack( context[58] );
    refalrts::push_stack( context[56] );
    refalrts::push_stack( context[53] );
    refalrts::push_stack( context[50] );
    refalrts::push_stack( context[47] );
    refalrts::push_stack( context[45] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[8] );
    refalrts::push_stack( context[12] );
    refalrts::push_stack( context[13] );
    refalrts::push_stack( context[4] );
    refalrts::push_stack( context[21] );
    refalrts::link_brackets( context[17], context[20] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[58], context[62] );
    res = refalrts::splice_evar( res, context[15], context[15] );
    res = refalrts::splice_evar( res, context[47], context[57] );
    res = refalrts::splice_evar( res, context[14], context[14] );
    res = refalrts::splice_evar( res, context[27], context[46] );
    res = refalrts::splice_evar( res, context[16], context[1] );
    res = refalrts::splice_evar( res, context[25], context[26] );
    res = refalrts::splice_evar( res, context[0], context[13] );
    res = refalrts::splice_evar( res, context[23], context[24] );
    res = refalrts::splice_evar( res, context[17], context[22] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & GenCommand/4 (/7 e.Indent#1/5 )/8 (/11 # CmdEmpty/13 s.Direction#1/14 s.BracketNumber#1/15 )/12 >/1
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
    context[13] = refalrts::ident_left(  & ident_CmdEmpty<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Indent#1 as range 5
    if( ! refalrts::svar_left( context[14], context[9], context[10] ) )
      continue;
    if( ! refalrts::svar_left( context[15], context[9], context[10] ) )
      continue;
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  s.Direction#1/14 s.BracketNumber#1/15 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: (/1 } e.Indent#1/5/16 Tile{ AsIs: )/12 } Tile{ AsIs: </0 Reuse: & PrintMatchEmpty/4 AsIs: (/7 AsIs: e.Indent#1/5 AsIs: )/8 HalfReuse: s.BracketNumber1 #15/11 HalfReuse: >/13 } Tile{ ]] }
    if (! refalrts::copy_evar(context[16], context[17], context[5], context[6]))
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[1] );
    refalrts::update_name( context[4], PrintMatchEmpty, "PrintMatchEmpty" );
    refalrts::reinit_svar( context[11], context[15] );
    refalrts::reinit_close_call( context[13] );
    refalrts::push_stack( context[13] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[1], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[0], context[13] );
    res = refalrts::splice_evar( res, context[12], context[12] );
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_evar( res, context[1], context[1] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & GenCommand/4 (/7 e.Indent#1/5 )/8 (/11 # CmdVar/13 s.Direction#1/14 s.BracketNumber#1/15 s.Mode#1/16 s.VarNumber#1/17 )/12 >/1
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
    context[13] = refalrts::ident_left(  & ident_CmdVar<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Indent#1 as range 5
    if( ! refalrts::svar_left( context[14], context[9], context[10] ) )
      continue;
    if( ! refalrts::svar_left( context[15], context[9], context[10] ) )
      continue;
    if( ! refalrts::svar_left( context[16], context[9], context[10] ) )
      continue;
    if( ! refalrts::svar_left( context[17], context[9], context[10] ) )
      continue;
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  s.Direction#1/14 s.BracketNumber#1/15 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: (/1 } e.Indent#1/5/18 )/20 Tile{ AsIs: </0 Reuse: & PrintMatchSTVar/4 AsIs: (/7 AsIs: e.Indent#1/5 AsIs: )/8 HalfReuse: s.Direction1 #14/11 HalfReuse: s.BracketNumber1 #15/13 } Tile{ AsIs: s.Mode#1/16 AsIs: s.VarNumber#1/17 HalfReuse: >/12 } Tile{ ]] }
    if (! refalrts::copy_evar(context[18], context[19], context[5], context[6]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[20] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[1] );
    refalrts::update_name( context[4], PrintMatchSTVar, "PrintMatchSTVar" );
    refalrts::reinit_svar( context[11], context[14] );
    refalrts::reinit_svar( context[13], context[15] );
    refalrts::reinit_close_call( context[12] );
    refalrts::push_stack( context[12] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[1], context[20] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[16], context[12] );
    res = refalrts::splice_evar( res, context[0], context[13] );
    res = refalrts::splice_evar( res, context[20], context[20] );
    res = refalrts::splice_evar( res, context[18], context[19] );
    res = refalrts::splice_evar( res, context[1], context[1] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & GenCommand/4 (/7 e.Indent#1/5 )/8 (/11 # CmdVarSave/13 s.Direction#1/14 s.BracketNumber#1/15 s.Mode#1/16 s.VarNumber#1/17 )/12 >/1
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
    context[13] = refalrts::ident_left(  & ident_CmdVarSave<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Indent#1 as range 5
    if( ! refalrts::svar_left( context[14], context[9], context[10] ) )
      continue;
    if( ! refalrts::svar_left( context[15], context[9], context[10] ) )
      continue;
    if( ! refalrts::svar_left( context[16], context[9], context[10] ) )
      continue;
    if( ! refalrts::svar_left( context[17], context[9], context[10] ) )
      continue;
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  s.Direction#1/14 s.BracketNumber#1/15 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: (/1 } e.Indent#1/5/18 )/20 Tile{ AsIs: </0 Reuse: & PrintMatchSTVarSave/4 AsIs: (/7 AsIs: e.Indent#1/5 AsIs: )/8 HalfReuse: s.Direction1 #14/11 HalfReuse: s.BracketNumber1 #15/13 } Tile{ AsIs: s.Mode#1/16 AsIs: s.VarNumber#1/17 HalfReuse: >/12 } Tile{ ]] }
    if (! refalrts::copy_evar(context[18], context[19], context[5], context[6]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[20] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[1] );
    refalrts::update_name( context[4], PrintMatchSTVarSave, "PrintMatchSTVarSave" );
    refalrts::reinit_svar( context[11], context[14] );
    refalrts::reinit_svar( context[13], context[15] );
    refalrts::reinit_close_call( context[12] );
    refalrts::push_stack( context[12] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[1], context[20] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[16], context[12] );
    res = refalrts::splice_evar( res, context[0], context[13] );
    res = refalrts::splice_evar( res, context[20], context[20] );
    res = refalrts::splice_evar( res, context[18], context[19] );
    res = refalrts::splice_evar( res, context[1], context[1] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & GenCommand/4 (/7 e.Indent#1/5 )/8 (/11 # CmdRepeated/13 s.Direction#1/14 s.BracketNumber#1/15 s.Mode#1/16 s.Var#1/17 s.Sample#1/18 )/12 >/1
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
    context[13] = refalrts::ident_left(  & ident_CmdRepeated<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Indent#1 as range 5
    if( ! refalrts::svar_left( context[14], context[9], context[10] ) )
      continue;
    if( ! refalrts::svar_left( context[15], context[9], context[10] ) )
      continue;
    if( ! refalrts::svar_left( context[16], context[9], context[10] ) )
      continue;
    if( ! refalrts::svar_left( context[17], context[9], context[10] ) )
      continue;
    if( ! refalrts::svar_left( context[18], context[9], context[10] ) )
      continue;
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Indent#1/5 AsIs: )/8 HalfReuse: </11 } Tile{ HalfReuse: & PrintMatchRepeated/0 HalfReuse: (/4 } e.Indent#1/5/19 Tile{ HalfReuse: )/13 AsIs: s.Direction#1/14 AsIs: s.BracketNumber#1/15 AsIs: s.Mode#1/16 AsIs: s.Var#1/17 AsIs: s.Sample#1/18 HalfReuse: >/12 } Tile{ ]] }
    if (! refalrts::copy_evar(context[19], context[20], context[5], context[6]))
      return refalrts::cNoMemory;
    refalrts::reinit_open_call( context[11] );
    refalrts::reinit_name( context[0], PrintMatchRepeated, "PrintMatchRepeated" );
    refalrts::reinit_open_bracket( context[4] );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::reinit_close_call( context[12] );
    refalrts::push_stack( context[12] );
    refalrts::push_stack( context[11] );
    refalrts::link_brackets( context[4], context[13] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[13], context[12] );
    res = refalrts::splice_evar( res, context[19], context[20] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[7], context[11] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & GenCommand/4 (/7 e.Indent#1/5 )/8 (/11 # CmdRepeatedSave/13 s.Direction#1/14 s.BracketNumber#1/15 s.Mode#1/16 s.Var#1/17 s.Sample#1/18 )/12 >/1
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
    context[13] = refalrts::ident_left(  & ident_CmdRepeatedSave<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Indent#1 as range 5
    if( ! refalrts::svar_left( context[14], context[9], context[10] ) )
      continue;
    if( ! refalrts::svar_left( context[15], context[9], context[10] ) )
      continue;
    if( ! refalrts::svar_left( context[16], context[9], context[10] ) )
      continue;
    if( ! refalrts::svar_left( context[17], context[9], context[10] ) )
      continue;
    if( ! refalrts::svar_left( context[18], context[9], context[10] ) )
      continue;
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Indent#1/5 AsIs: )/8 HalfReuse: </11 } Tile{ HalfReuse: & PrintMatchRepeatedSave/0 HalfReuse: (/4 } e.Indent#1/5/19 Tile{ HalfReuse: )/13 AsIs: s.Direction#1/14 AsIs: s.BracketNumber#1/15 AsIs: s.Mode#1/16 AsIs: s.Var#1/17 AsIs: s.Sample#1/18 HalfReuse: >/12 } Tile{ ]] }
    if (! refalrts::copy_evar(context[19], context[20], context[5], context[6]))
      return refalrts::cNoMemory;
    refalrts::reinit_open_call( context[11] );
    refalrts::reinit_name( context[0], PrintMatchRepeatedSave, "PrintMatchRepeatedSave" );
    refalrts::reinit_open_bracket( context[4] );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::reinit_close_call( context[12] );
    refalrts::push_stack( context[12] );
    refalrts::push_stack( context[11] );
    refalrts::link_brackets( context[4], context[13] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[13], context[12] );
    res = refalrts::splice_evar( res, context[19], context[20] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[7], context[11] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & GenCommand/4 (/7 e.Indent#1/5 )/8 (/11 # CmdOpenedE_Start/13 # AlgLeft/14 s.BracketNumber#1/15 s.VarNumber#1/16 )/12 >/1
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
    context[13] = refalrts::ident_left(  & ident_CmdOpenedE_Start<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    context[14] = refalrts::ident_left(  & ident_AlgLeft<int>::name, context[9], context[10] );
    if( ! context[14] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Indent#1 as range 5
    if( ! refalrts::svar_left( context[15], context[9], context[10] ) )
      continue;
    if( ! refalrts::svar_left( context[16], context[9], context[10] ) )
      continue;
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  s.BracketNumber#1/15 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } (/17 e.Indent#1/5/18 ' '/20 Tile{ HalfReuse: ' '/0 HalfReuse: )/4 AsIs: (/7 AsIs: e.Indent#1/5 HalfReuse: </8 HalfReuse: & ContextRange_B/11 HalfReuse: s.VarNumber1 #16/13 HalfReuse: >/14 } ' '/21 '='/22 ' '/23 '0'/24 ';'/25 )/26 (/27 e.Indent#1/5/28 </30 & ContextRange_E/31 Tile{ AsIs: s.VarNumber#1/16 HalfReuse: >/12 HalfReuse: ' '/1 } '='/32 ' '/33 '0'/34 ';'/35 )/36 (/37 e.Indent#1/5/38 'r'/40 'e'/41 'f'/42 'a'/43 'l'/44 'r'/45 't'/46 's'/47 ':'/48 ':'/49 's'/50 't'/51 'a'/52 'r'/53 't'/54 '_'/55 'e'/56 '_'/57 'l'/58 'o'/59 'o'/60 'p'/61 '('/62 ')'/63 ';'/64 )/65 (/66 e.Indent#1/5/67 'd'/69 'o'/70 ' '/71 '{'/72 )/73 Tile{ ]] }
    if( ! refalrts::alloc_open_bracket( context[17] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[18], context[19], context[5], context[6]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[20], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[21], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[22], '=' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[23], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[24], '0' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[25], ';' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[26] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[27] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[28], context[29], context[5], context[6]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[30] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[31], ContextRange_E, "ContextRange_E" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[32], '=' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[33], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[34], '0' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[35], ';' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[36] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[37] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[38], context[39], context[5], context[6]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[40], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[41], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[42], 'f' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[43], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[44], 'l' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[45], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[46], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[47], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[48], ':' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[49], ':' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[50], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[51], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[52], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[53], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[54], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[55], '_' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[56], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[57], '_' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[58], 'l' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[59], 'o' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[60], 'o' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[61], 'p' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[62], '(' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[63], ')' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[64], ';' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[65] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[66] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[67], context[68], context[5], context[6]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[69], 'd' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[70], 'o' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[71], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[72], '{' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[73] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[0], ' ' );
    refalrts::reinit_close_bracket( context[4] );
    refalrts::reinit_open_call( context[8] );
    refalrts::reinit_name( context[11], ContextRange_B, "ContextRange_B" );
    refalrts::reinit_svar( context[13], context[16] );
    refalrts::reinit_close_call( context[14] );
    refalrts::reinit_close_call( context[12] );
    refalrts::reinit_char( context[1], ' ' );
    refalrts::link_brackets( context[66], context[73] );
    refalrts::link_brackets( context[37], context[65] );
    refalrts::link_brackets( context[27], context[36] );
    refalrts::push_stack( context[12] );
    refalrts::push_stack( context[30] );
    refalrts::link_brackets( context[7], context[26] );
    refalrts::push_stack( context[14] );
    refalrts::push_stack( context[8] );
    refalrts::link_brackets( context[17], context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[32], context[73] );
    res = refalrts::splice_evar( res, context[16], context[1] );
    res = refalrts::splice_evar( res, context[21], context[31] );
    res = refalrts::splice_evar( res, context[0], context[14] );
    res = refalrts::splice_evar( res, context[17], context[20] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & GenCommand/4 (/7 e.Indent#1/5 ' '/10 ' '/9 )/8 (/13 # CmdOpenedE_End/15 # AlgLeft/16 s.BracketNumber#1/17 s.VarNumber#1/18 )/14 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_right( ' ', context[5], context[6] );
    if( ! context[9] )
      continue;
    context[10] = refalrts::char_right( ' ', context[5], context[6] );
    if( ! context[10] )
      continue;
    context[11] = 0;
    context[12] = 0;
    context[13] = refalrts::brackets_left( context[11], context[12], context[2], context[3] );
    if( ! context[13] )
      continue;
    refalrts::bracket_pointers(context[13], context[14]);
    context[15] = refalrts::ident_left(  & ident_CmdOpenedE_End<int>::name, context[11], context[12] );
    if( ! context[15] )
      continue;
    context[16] = refalrts::ident_left(  & ident_AlgLeft<int>::name, context[11], context[12] );
    if( ! context[16] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Indent#1 as range 5
    if( ! refalrts::svar_left( context[17], context[11], context[12] ) )
      continue;
    if( ! refalrts::svar_left( context[18], context[11], context[12] ) )
      continue;
    if( ! refalrts::empty_seq( context[11], context[12] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 } e.Indent#1/5/19 Tile{ HalfReuse: )/4 AsIs: (/7 AsIs: e.Indent#1/5 Reuse: '}'/10 AsIs: ' '/9 HalfReuse: 'w'/8 HalfReuse: 'h'/13 HalfReuse: 'i'/15 HalfReuse: 'l'/16 } 'e'/21 ' '/22 '('/23 ' '/24 'r'/25 'e'/26 'f'/27 'a'/28 'l'/29 'r'/30 't'/31 's'/32 ':'/33 ':'/34 'o'/35 'p'/36 'e'/37 'n'/38 '_'/39 'e'/40 'v'/41 'a'/42 'r'/43 '_'/44 'a'/45 'd'/46 'v'/47 'a'/48 'n'/49 'c'/50 'e'/51 '('/52 ' '/53 </54 & ContextRange/55 Tile{ AsIs: s.VarNumber#1/18 HalfReuse: >/14 HalfReuse: ','/1 } ' '/56 </57 & ContextRange/58 Tile{ AsIs: s.BracketNumber#1/17 } >/59 ' '/60 ')'/61 ' '/62 ')'/63 ';'/64 )/65 Tile{ ]] }
    if (! refalrts::copy_evar(context[19], context[20], context[5], context[6]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[21], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[22], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[23], '(' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[24], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[25], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[26], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[27], 'f' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[28], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[29], 'l' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[30], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[31], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[32], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[33], ':' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[34], ':' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[35], 'o' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[36], 'p' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[37], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[38], 'n' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[39], '_' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[40], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[41], 'v' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[42], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[43], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[44], '_' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[45], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[46], 'd' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[47], 'v' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[48], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[49], 'n' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[50], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[51], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[52], '(' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[53], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[54] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[55], ContextRange, "ContextRange" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[56], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[57] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[58], ContextRange, "ContextRange" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[59] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[60], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[61], ')' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[62], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[63], ')' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[64], ';' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[65] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_close_bracket( context[4] );
    refalrts::update_char( context[10], '}' );
    refalrts::reinit_char( context[8], 'w' );
    refalrts::reinit_char( context[13], 'h' );
    refalrts::reinit_char( context[15], 'i' );
    refalrts::reinit_char( context[16], 'l' );
    refalrts::reinit_close_call( context[14] );
    refalrts::reinit_char( context[1], ',' );
    refalrts::link_brackets( context[7], context[65] );
    refalrts::push_stack( context[59] );
    refalrts::push_stack( context[57] );
    refalrts::push_stack( context[14] );
    refalrts::push_stack( context[54] );
    refalrts::link_brackets( context[0], context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[59], context[65] );
    res = refalrts::splice_evar( res, context[17], context[17] );
    res = refalrts::splice_evar( res, context[56], context[58] );
    res = refalrts::splice_evar( res, context[18], context[1] );
    res = refalrts::splice_evar( res, context[21], context[55] );
    res = refalrts::splice_evar( res, context[4], context[16] );
    res = refalrts::splice_evar( res, context[19], context[20] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & GenCommand/4 (/7 e.Indent#1/5 )/8 (/11 # CmdSave/13 s.OldBracketNumber#1/14 s.NewBracketNumber#1/15 )/12 >/1
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
    context[13] = refalrts::ident_left(  & ident_CmdSave<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Indent#1 as range 5
    if( ! refalrts::svar_left( context[14], context[9], context[10] ) )
      continue;
    if( ! refalrts::svar_left( context[15], context[9], context[10] ) )
      continue;
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Indent#1/5 AsIs: )/8 AsIs: (/11 } e.Indent#1/5/16 Tile{ AsIs: </0 Reuse: & ContextRange_B/4 } Tile{ AsIs: s.NewBracketNumber#1/15 HalfReuse: >/12 HalfReuse: ' '/1 } '='/18 ' '/19 </20 Tile{ HalfReuse: & ContextRange_B/13 AsIs: s.OldBracketNumber#1/14 } >/21 ';'/22 )/23 (/24 e.Indent#1/5/25 </27 & ContextRange_E/28 s.NewBracketNumber#1/15/29 >/30 ' '/31 '='/32 ' '/33 </34 & ContextRange_E/35 s.OldBracketNumber#1/14/36 >/37 ';'/38 )/39 Tile{ ]] }
    if (! refalrts::copy_evar(context[16], context[17], context[5], context[6]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[18], '=' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[19], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[20] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[21] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[22], ';' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[23] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[24] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[25], context[26], context[5], context[6]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[27] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[28], ContextRange_E, "ContextRange_E" ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[29], context[15]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[30] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[31], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[32], '=' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[33], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[34] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[35], ContextRange_E, "ContextRange_E" ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[36], context[14]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[37] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[38], ';' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[39] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ContextRange_B, "ContextRange_B" );
    refalrts::reinit_close_call( context[12] );
    refalrts::reinit_char( context[1], ' ' );
    refalrts::reinit_name( context[13], ContextRange_B, "ContextRange_B" );
    refalrts::link_brackets( context[24], context[39] );
    refalrts::push_stack( context[37] );
    refalrts::push_stack( context[34] );
    refalrts::push_stack( context[30] );
    refalrts::push_stack( context[27] );
    refalrts::link_brackets( context[11], context[23] );
    refalrts::push_stack( context[21] );
    refalrts::push_stack( context[20] );
    refalrts::push_stack( context[12] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[21], context[39] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[18], context[20] );
    res = refalrts::splice_evar( res, context[15], context[1] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_evar( res, context[7], context[11] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & GenCommand/4 (/7 e.Indent#1/5 )/8 (/11 # CmdEmptyResult/13 )/12 >/1
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
    context[13] = refalrts::ident_left(  & ident_CmdEmptyResult<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Indent#1 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Indent#1/5 AsIs: )/8 AsIs: (/11 HalfReuse: )/13 HalfReuse: (/12 } e.Indent#1/5/14 Tile{ HalfReuse: 'r'/0 HalfReuse: 'e'/4 } 'f'/16 'a'/17 'l'/18 'r'/19 't'/20 's'/21 ':'/22 ':'/23 'r'/24 'e'/25 's'/26 'e'/27 't'/28 '_'/29 'a'/30 'l'/31 'l'/32 'o'/33 'c'/34 'a'/35 't'/36 'o'/37 'r'/38 '('/39 ')'/40 ';'/41 )/42 (/43 e.Indent#1/5/44 'r'/46 'e'/47 'f'/48 'a'/49 'l'/50 'r'/51 't'/52 's'/53 ':'/54 ':'/55 'I'/56 't'/57 'e'/58 'r'/59 ' '/60 'r'/61 'e'/62 's'/63 ' '/64 '='/65 ' '/66 'a'/67 'r'/68 'g'/69 '_'/70 'b'/71 'e'/72 'g'/73 'i'/74 'n'/75 ';'/76 Tile{ HalfReuse: )/1 ]] }
    if (! refalrts::copy_evar(context[14], context[15], context[5], context[6]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[16], 'f' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[17], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[18], 'l' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[19], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[20], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[21], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[22], ':' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[23], ':' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[24], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[25], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[26], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[27], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[28], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[29], '_' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[30], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[31], 'l' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[32], 'l' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[33], 'o' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[34], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[35], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[36], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[37], 'o' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[38], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[39], '(' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[40], ')' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[41], ';' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[42] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[43] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[44], context[45], context[5], context[6]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[46], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[47], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[48], 'f' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[49], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[50], 'l' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[51], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[52], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[53], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[54], ':' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[55], ':' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[56], 'I' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[57], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[58], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[59], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[60], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[61], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[62], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[63], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[64], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[65], '=' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[66], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[67], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[68], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[69], 'g' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[70], '_' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[71], 'b' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[72], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[73], 'g' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[74], 'i' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[75], 'n' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[76], ';' ) )
      return refalrts::cNoMemory;
    refalrts::reinit_close_bracket( context[13] );
    refalrts::reinit_open_bracket( context[12] );
    refalrts::reinit_char( context[0], 'r' );
    refalrts::reinit_char( context[4], 'e' );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[43], context[1] );
    refalrts::link_brackets( context[12], context[42] );
    refalrts::link_brackets( context[11], context[13] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[16], context[76] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    res = refalrts::splice_evar( res, context[7], context[12] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & GenCommand/4 (/7 e.Indent#1/5 )/8 (/11 # CmdResetAllocator/13 )/12 >/1
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
    context[13] = refalrts::ident_left(  & ident_CmdResetAllocator<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Indent#1 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Indent#1/5 AsIs: )/8 AsIs: (/11 HalfReuse: )/13 HalfReuse: (/12 } e.Indent#1/5/14 Tile{ HalfReuse: 'r'/0 HalfReuse: 'e'/4 } 'f'/16 'a'/17 'l'/18 'r'/19 't'/20 's'/21 ':'/22 ':'/23 'r'/24 'e'/25 's'/26 'e'/27 't'/28 '_'/29 'a'/30 'l'/31 'l'/32 'o'/33 'c'/34 'a'/35 't'/36 'o'/37 'r'/38 '('/39 ')'/40 ';'/41 Tile{ HalfReuse: )/1 ]] }
    if (! refalrts::copy_evar(context[14], context[15], context[5], context[6]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[16], 'f' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[17], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[18], 'l' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[19], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[20], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[21], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[22], ':' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[23], ':' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[24], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[25], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[26], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[27], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[28], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[29], '_' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[30], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[31], 'l' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[32], 'l' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[33], 'o' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[34], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[35], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[36], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[37], 'o' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[38], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[39], '(' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[40], ')' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[41], ';' ) )
      return refalrts::cNoMemory;
    refalrts::reinit_close_bracket( context[13] );
    refalrts::reinit_open_bracket( context[12] );
    refalrts::reinit_char( context[0], 'r' );
    refalrts::reinit_char( context[4], 'e' );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[12], context[1] );
    refalrts::link_brackets( context[11], context[13] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[16], context[41] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    res = refalrts::splice_evar( res, context[7], context[12] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & GenCommand/4 (/7 e.Indent#1/5 )/8 (/11 # CmdSetRes/13 s.Offset#1/14 )/12 >/1
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
    context[13] = refalrts::ident_left(  & ident_CmdSetRes<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Indent#1 as range 5
    if( ! refalrts::svar_left( context[14], context[9], context[10] ) )
      continue;
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: (/1 } e.Indent#1/5/15 )/17 (/18 e.Indent#1/5/19 'r'/21 'e'/22 'f'/23 'a'/24 'l'/25 'r'/26 't'/27 's'/28 ':'/29 ':'/30 'I'/31 't'/32 'e'/33 'r'/34 ' '/35 't'/36 'r'/37 'a'/38 's'/39 'h'/40 '_'/41 'p'/42 'r'/43 'e'/44 'v'/45 ' '/46 '='/47 ' '/48 'a'/49 'r'/50 'g'/51 '_'/52 'b'/53 'e'/54 'g'/55 'i'/56 'n'/57 '-'/58 '>'/59 'p'/60 'r'/61 'e'/62 'v'/63 ';'/64 )/65 (/66 e.Indent#1/5/67 'r'/69 'e'/70 'f'/71 'a'/72 'l'/73 'r'/74 't'/75 's'/76 ':'/77 ':'/78 'u'/79 's'/80 'e'/81 '('/82 't'/83 'r'/84 'a'/85 's'/86 'h'/87 '_'/88 'p'/89 'r'/90 'e'/91 'v'/92 ')'/93 ';'/94 )/95 </96 & Fetch/97 Tile{ AsIs: s.Offset#1/14 HalfReuse: </12 } Tile{ HalfReuse: & CreateClosure /0 Reuse: & lambda_GenCommand_0/4 AsIs: (/7 AsIs: e.Indent#1/5 AsIs: )/8 HalfReuse: >/11 HalfReuse: >/13 } Tile{ ]] }
    if (! refalrts::copy_evar(context[15], context[16], context[5], context[6]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[17] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[18] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[19], context[20], context[5], context[6]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[21], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[22], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[23], 'f' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[24], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[25], 'l' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[26], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[27], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[28], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[29], ':' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[30], ':' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[31], 'I' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[32], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[33], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[34], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[35], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[36], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[37], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[38], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[39], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[40], 'h' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[41], '_' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[42], 'p' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[43], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[44], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[45], 'v' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[46], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[47], '=' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[48], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[49], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[50], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[51], 'g' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[52], '_' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[53], 'b' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[54], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[55], 'g' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[56], 'i' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[57], 'n' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[58], '-' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[59], '>' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[60], 'p' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[61], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[62], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[63], 'v' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[64], ';' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[65] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[66] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[67], context[68], context[5], context[6]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[69], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[70], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[71], 'f' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[72], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[73], 'l' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[74], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[75], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[76], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[77], ':' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[78], ':' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[79], 'u' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[80], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[81], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[82], '(' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[83], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[84], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[85], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[86], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[87], 'h' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[88], '_' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[89], 'p' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[90], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[91], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[92], 'v' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[93], ')' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[94], ';' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[95] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[96] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[97], Fetch, "Fetch" ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[1] );
    refalrts::reinit_open_call( context[12] );
    refalrts::reinit_name( context[0], refalrts::create_closure, "refalrts::create_closure" );
    refalrts::update_name( context[4], lambda_GenCommand_0, "lambda_GenCommand_0" );
    refalrts::reinit_close_call( context[11] );
    refalrts::reinit_close_call( context[13] );
    refalrts::push_stack( context[13] );
    refalrts::push_stack( context[96] );
    refalrts::push_stack( context[11] );
    refalrts::push_stack( context[12] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[66], context[95] );
    refalrts::link_brackets( context[18], context[65] );
    refalrts::link_brackets( context[1], context[17] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[0], context[13] );
    res = refalrts::splice_evar( res, context[14], context[12] );
    res = refalrts::splice_evar( res, context[17], context[97] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[1], context[1] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & GenCommand/4 (/7 e.Indent#1/5 )/8 (/11 # CmdCopyVar/13 'e'/14 s.Target#1/15 s.Sample#1/16 )/12 >/1
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
    context[13] = refalrts::ident_left(  & ident_CmdCopyVar<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    context[14] = refalrts::char_left( 'e', context[9], context[10] );
    if( ! context[14] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Indent#1 as range 5
    if( ! refalrts::svar_left( context[15], context[9], context[10] ) )
      continue;
    if( ! refalrts::svar_left( context[16], context[9], context[10] ) )
      continue;
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } (/17 e.Indent#1/5/18 )/20 (/21 e.Indent#1/5/22 'i'/24 'f'/25 ' '/26 '('/27 '!'/28 ' '/29 'r'/30 'e'/31 'f'/32 'a'/33 'l'/34 'r'/35 't'/36 's'/37 ':'/38 ':'/39 'c'/40 'o'/41 'p'/42 'y'/43 '_'/44 'e'/45 'v'/46 'a'/47 'r'/48 '('/49 </50 & ContextRange/51 Tile{ AsIs: s.Target#1/15 } >/52 ','/53 ' '/54 </55 & ContextRange/56 Tile{ AsIs: s.Sample#1/16 HalfReuse: >/12 HalfReuse: ')'/1 } Tile{ HalfReuse: ')'/0 HalfReuse: )/4 AsIs: (/7 AsIs: e.Indent#1/5 HalfReuse: ' '/8 HalfReuse: ' '/11 HalfReuse: 'r'/13 AsIs: 'e'/14 } 't'/57 'u'/58 'r'/59 'n'/60 ' '/61 'r'/62 'e'/63 'f'/64 'a'/65 'l'/66 'r'/67 't'/68 's'/69 ':'/70 ':'/71 'c'/72 'N'/73 'o'/74 'M'/75 'e'/76 'm'/77 'o'/78 'r'/79 'y'/80 ';'/81 )/82 Tile{ ]] }
    if( ! refalrts::alloc_open_bracket( context[17] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[18], context[19], context[5], context[6]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[20] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[21] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[22], context[23], context[5], context[6]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[24], 'i' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[25], 'f' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[26], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[27], '(' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[28], '!' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[29], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[30], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[31], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[32], 'f' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[33], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[34], 'l' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[35], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[36], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[37], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[38], ':' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[39], ':' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[40], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[41], 'o' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[42], 'p' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[43], 'y' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[44], '_' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[45], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[46], 'v' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[47], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[48], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[49], '(' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[50] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[51], ContextRange, "ContextRange" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[52] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[53], ',' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[54], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[55] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[56], ContextRange, "ContextRange" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[57], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[58], 'u' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[59], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[60], 'n' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[61], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[62], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[63], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[64], 'f' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[65], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[66], 'l' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[67], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[68], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[69], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[70], ':' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[71], ':' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[72], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[73], 'N' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[74], 'o' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[75], 'M' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[76], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[77], 'm' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[78], 'o' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[79], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[80], 'y' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[81], ';' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[82] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_close_call( context[12] );
    refalrts::reinit_char( context[1], ')' );
    refalrts::reinit_char( context[0], ')' );
    refalrts::reinit_close_bracket( context[4] );
    refalrts::reinit_char( context[8], ' ' );
    refalrts::reinit_char( context[11], ' ' );
    refalrts::reinit_char( context[13], 'r' );
    refalrts::link_brackets( context[7], context[82] );
    refalrts::link_brackets( context[21], context[4] );
    refalrts::push_stack( context[12] );
    refalrts::push_stack( context[55] );
    refalrts::push_stack( context[52] );
    refalrts::push_stack( context[50] );
    refalrts::link_brackets( context[17], context[20] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[57], context[82] );
    res = refalrts::splice_evar( res, context[0], context[14] );
    res = refalrts::splice_evar( res, context[16], context[1] );
    res = refalrts::splice_evar( res, context[52], context[56] );
    res = refalrts::splice_evar( res, context[15], context[15] );
    res = refalrts::splice_evar( res, context[17], context[51] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & GenCommand/4 (/7 e.Indent#1/5 )/8 (/11 # CmdCopyVar/13 s.Mode#1/14 s.Target#1/15 s.Sample#1/16 )/12 >/1
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
    context[13] = refalrts::ident_left(  & ident_CmdCopyVar<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Indent#1 as range 5
    if( ! refalrts::svar_left( context[14], context[9], context[10] ) )
      continue;
    if( ! refalrts::svar_left( context[15], context[9], context[10] ) )
      continue;
    if( ! refalrts::svar_left( context[16], context[9], context[10] ) )
      continue;
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  s.Mode#1/14 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Indent#1/5 AsIs: )/8 AsIs: (/11 } e.Indent#1/5/17 Tile{ HalfReuse: 'i'/13 } 'f'/19 ' '/20 '('/21 '!'/22 ' '/23 'r'/24 'e'/25 'f'/26 'a'/27 'l'/28 'r'/29 't'/30 's'/31 ':'/32 ':'/33 'c'/34 'o'/35 'p'/36 'y'/37 '_'/38 's'/39 't'/40 'v'/41 'a'/42 'r'/43 '('/44 Tile{ AsIs: </0 Reuse: & ContextItem/4 } Tile{ AsIs: s.Target#1/15 } >/45 ','/46 ' '/47 </48 & ContextItem/49 Tile{ AsIs: s.Sample#1/16 HalfReuse: >/12 HalfReuse: ')'/1 } ')'/50 )/51 (/52 e.Indent#1/5/53 ' '/55 ' '/56 'r'/57 'e'/58 't'/59 'u'/60 'r'/61 'n'/62 ' '/63 'r'/64 'e'/65 'f'/66 'a'/67 'l'/68 'r'/69 't'/70 's'/71 ':'/72 ':'/73 'c'/74 'N'/75 'o'/76 'M'/77 'e'/78 'm'/79 'o'/80 'r'/81 'y'/82 ';'/83 )/84 Tile{ ]] }
    if (! refalrts::copy_evar(context[17], context[18], context[5], context[6]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[19], 'f' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[20], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[21], '(' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[22], '!' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[23], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[24], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[25], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[26], 'f' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[27], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[28], 'l' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[29], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[30], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[31], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[32], ':' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[33], ':' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[34], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[35], 'o' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[36], 'p' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[37], 'y' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[38], '_' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[39], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[40], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[41], 'v' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[42], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[43], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[44], '(' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[45] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[46], ',' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[47], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[48] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[49], ContextItem, "ContextItem" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[50], ')' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[51] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[52] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[53], context[54], context[5], context[6]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[55], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[56], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[57], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[58], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[59], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[60], 'u' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[61], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[62], 'n' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[63], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[64], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[65], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[66], 'f' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[67], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[68], 'l' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[69], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[70], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[71], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[72], ':' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[73], ':' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[74], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[75], 'N' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[76], 'o' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[77], 'M' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[78], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[79], 'm' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[80], 'o' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[81], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[82], 'y' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[83], ';' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[84] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[13], 'i' );
    refalrts::update_name( context[4], ContextItem, "ContextItem" );
    refalrts::reinit_close_call( context[12] );
    refalrts::reinit_char( context[1], ')' );
    refalrts::link_brackets( context[52], context[84] );
    refalrts::link_brackets( context[11], context[51] );
    refalrts::push_stack( context[12] );
    refalrts::push_stack( context[48] );
    refalrts::push_stack( context[45] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[50], context[84] );
    res = refalrts::splice_evar( res, context[16], context[1] );
    res = refalrts::splice_evar( res, context[45], context[49] );
    res = refalrts::splice_evar( res, context[15], context[15] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[19], context[44] );
    res = refalrts::splice_evar( res, context[13], context[13] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[7], context[11] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & GenCommand/4 (/7 e.Indent#1/5 )/8 (/11 # CmdReinitSVar/13 s.Offset#1/14 s.Sample#1/15 )/12 >/1
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
    context[13] = refalrts::ident_left(  & ident_CmdReinitSVar<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Indent#1 as range 5
    if( ! refalrts::svar_left( context[14], context[9], context[10] ) )
      continue;
    if( ! refalrts::svar_left( context[15], context[9], context[10] ) )
      continue;
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Indent#1/5 AsIs: )/8 AsIs: (/11 } e.Indent#1/5/16 Tile{ HalfReuse: 'r'/13 } 'e'/18 'f'/19 'a'/20 'l'/21 'r'/22 't'/23 's'/24 ':'/25 ':'/26 'r'/27 'e'/28 'i'/29 'n'/30 'i'/31 't'/32 '_'/33 's'/34 'v'/35 'a'/36 'r'/37 '('/38 ' '/39 Tile{ AsIs: </0 Reuse: & ContextItem/4 } Tile{ AsIs: s.Offset#1/14 } >/40 ','/41 ' '/42 </43 & ContextItem/44 Tile{ AsIs: s.Sample#1/15 HalfReuse: >/12 HalfReuse: ' '/1 } ')'/45 ';'/46 )/47 Tile{ ]] }
    if (! refalrts::copy_evar(context[16], context[17], context[5], context[6]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[18], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[19], 'f' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[20], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[21], 'l' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[22], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[23], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[24], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[25], ':' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[26], ':' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[27], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[28], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[29], 'i' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[30], 'n' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[31], 'i' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[32], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[33], '_' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[34], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[35], 'v' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[36], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[37], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[38], '(' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[39], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[40] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[41], ',' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[42], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[43] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[44], ContextItem, "ContextItem" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[45], ')' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[46], ';' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[47] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[13], 'r' );
    refalrts::update_name( context[4], ContextItem, "ContextItem" );
    refalrts::reinit_close_call( context[12] );
    refalrts::reinit_char( context[1], ' ' );
    refalrts::link_brackets( context[11], context[47] );
    refalrts::push_stack( context[12] );
    refalrts::push_stack( context[43] );
    refalrts::push_stack( context[40] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[45], context[47] );
    res = refalrts::splice_evar( res, context[15], context[1] );
    res = refalrts::splice_evar( res, context[40], context[44] );
    res = refalrts::splice_evar( res, context[14], context[14] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[18], context[39] );
    res = refalrts::splice_evar( res, context[13], context[13] );
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_evar( res, context[7], context[11] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & GenCommand/4 (/7 e.Indent#1/5 )/8 (/11 # CmdAllocateElem/13 s.ElemNumber#1/14 # ElString/15 e.String#1/9 )/12 >/1
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
    context[13] = refalrts::ident_left(  & ident_CmdAllocateElem<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Indent#1 as range 5
    if( ! refalrts::svar_left( context[14], context[9], context[10] ) )
      continue;
    context[15] = refalrts::ident_left(  & ident_ElString<int>::name, context[9], context[10] );
    if( ! context[15] )
      continue;
    // closed e.String#1 as range 9

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Indent#1/5 AsIs: )/8 AsIs: (/11 } e.Indent#1/5/16 'i'/18 'f'/19 '('/20 ' '/21 '!'/22 ' '/23 'r'/24 'e'/25 'f'/26 'a'/27 'l'/28 'r'/29 't'/30 's'/31 ':'/32 ':'/33 'a'/34 'l'/35 'l'/36 'o'/37 'c'/38 '_'/39 'c'/40 'h'/41 'a'/42 'r'/43 's'/44 '('/45 ' '/46 Tile{ AsIs: </0 Reuse: & ContextItem/4 } s.ElemNumber#1/14/47 >/48 ','/49 ' '/50 </51 & ContextItem/52 </53 Tile{ HalfReuse: & Inc/13 AsIs: s.ElemNumber#1/14 } >/54 >/55 ','/56 ' '/57 </58 Tile{ HalfReuse: & PrintString/15 AsIs: e.String#1/9 HalfReuse: >/12 HalfReuse: ' '/1 } ')'/59 ' '/60 ')'/61 )/62 (/63 e.Indent#1/5/64 ' '/66 ' '/67 'r'/68 'e'/69 't'/70 'u'/71 'r'/72 'n'/73 ' '/74 'r'/75 'e'/76 'f'/77 'a'/78 'l'/79 'r'/80 't'/81 's'/82 ':'/83 ':'/84 'c'/85 'N'/86 'o'/87 'M'/88 'e'/89 'm'/90 'o'/91 'r'/92 'y'/93 ';'/94 )/95 Tile{ ]] }
    if (! refalrts::copy_evar(context[16], context[17], context[5], context[6]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[18], 'i' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[19], 'f' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[20], '(' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[21], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[22], '!' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[23], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[24], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[25], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[26], 'f' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[27], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[28], 'l' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[29], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[30], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[31], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[32], ':' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[33], ':' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[34], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[35], 'l' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[36], 'l' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[37], 'o' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[38], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[39], '_' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[40], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[41], 'h' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[42], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[43], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[44], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[45], '(' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[46], ' ' ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[47], context[14]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[48] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[49], ',' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[50], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[51] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[52], ContextItem, "ContextItem" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[53] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[54] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[55] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[56], ',' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[57], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[58] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[59], ')' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[60], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[61], ')' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[62] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[63] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[64], context[65], context[5], context[6]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[66], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[67], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[68], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[69], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[70], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[71], 'u' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[72], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[73], 'n' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[74], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[75], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[76], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[77], 'f' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[78], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[79], 'l' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[80], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[81], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[82], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[83], ':' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[84], ':' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[85], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[86], 'N' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[87], 'o' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[88], 'M' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[89], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[90], 'm' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[91], 'o' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[92], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[93], 'y' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[94], ';' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[95] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ContextItem, "ContextItem" );
    refalrts::reinit_name( context[13], Inc, "Inc" );
    refalrts::reinit_name( context[15], PrintString, "PrintString" );
    refalrts::reinit_close_call( context[12] );
    refalrts::reinit_char( context[1], ' ' );
    refalrts::link_brackets( context[63], context[95] );
    refalrts::link_brackets( context[11], context[62] );
    refalrts::push_stack( context[12] );
    refalrts::push_stack( context[58] );
    refalrts::push_stack( context[55] );
    refalrts::push_stack( context[51] );
    refalrts::push_stack( context[54] );
    refalrts::push_stack( context[53] );
    refalrts::push_stack( context[48] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[59], context[95] );
    res = refalrts::splice_evar( res, context[15], context[1] );
    res = refalrts::splice_evar( res, context[54], context[58] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[47], context[53] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[18], context[46] );
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_evar( res, context[7], context[11] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & GenCommand/4 (/7 e.Indent#1/5 )/8 (/11 # CmdAllocateElem/13 s.ElemNumber#1/14 e.ElemInfo#1/9 )/12 >/1
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
    context[13] = refalrts::ident_left(  & ident_CmdAllocateElem<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Indent#1 as range 5
    if( ! refalrts::svar_left( context[14], context[9], context[10] ) )
      continue;
    // closed e.ElemInfo#1 as range 9

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: (/1 } e.Indent#1/5/15 )/17 Tile{ AsIs: </0 Reuse: & PrintCreateElem/4 AsIs: (/7 AsIs: e.Indent#1/5 AsIs: )/8 AsIs: (/11 HalfReuse: 'a'/13 } 'l'/18 'l'/19 'o'/20 'c'/21 )/22 Tile{ AsIs: s.ElemNumber#1/14 AsIs: e.ElemInfo#1/9 HalfReuse: >/12 } Tile{ ]] }
    if (! refalrts::copy_evar(context[15], context[16], context[5], context[6]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[17] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[18], 'l' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[19], 'l' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[20], 'o' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[21], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[22] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[1] );
    refalrts::update_name( context[4], PrintCreateElem, "PrintCreateElem" );
    refalrts::reinit_char( context[13], 'a' );
    refalrts::reinit_close_call( context[12] );
    refalrts::push_stack( context[12] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[11], context[22] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[1], context[17] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[14], context[12] );
    res = refalrts::splice_evar( res, context[18], context[22] );
    res = refalrts::splice_evar( res, context[0], context[13] );
    res = refalrts::splice_evar( res, context[17], context[17] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[1], context[1] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & GenCommand/4 (/7 e.Indent#1/5 )/8 (/11 # CmdLinkBrackets/13 s.Left#1/14 s.Right#1/15 )/12 >/1
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
    context[13] = refalrts::ident_left(  & ident_CmdLinkBrackets<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Indent#1 as range 5
    if( ! refalrts::svar_left( context[14], context[9], context[10] ) )
      continue;
    if( ! refalrts::svar_left( context[15], context[9], context[10] ) )
      continue;
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Indent#1/5 AsIs: )/8 AsIs: (/11 } e.Indent#1/5/16 Tile{ HalfReuse: 'r'/13 } 'e'/18 'f'/19 'a'/20 'l'/21 'r'/22 't'/23 's'/24 ':'/25 ':'/26 'l'/27 'i'/28 'n'/29 'k'/30 '_'/31 'b'/32 'r'/33 'a'/34 'c'/35 'k'/36 'e'/37 't'/38 's'/39 '('/40 ' '/41 Tile{ AsIs: </0 Reuse: & ContextItem/4 } Tile{ AsIs: s.Left#1/14 } >/42 ','/43 ' '/44 </45 & ContextItem/46 Tile{ AsIs: s.Right#1/15 HalfReuse: >/12 HalfReuse: ' '/1 } ')'/47 ';'/48 )/49 Tile{ ]] }
    if (! refalrts::copy_evar(context[16], context[17], context[5], context[6]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[18], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[19], 'f' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[20], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[21], 'l' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[22], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[23], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[24], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[25], ':' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[26], ':' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[27], 'l' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[28], 'i' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[29], 'n' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[30], 'k' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[31], '_' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[32], 'b' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[33], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[34], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[35], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[36], 'k' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[37], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[38], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[39], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[40], '(' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[41], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[42] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[43], ',' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[44], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[45] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[46], ContextItem, "ContextItem" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[47], ')' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[48], ';' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[49] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[13], 'r' );
    refalrts::update_name( context[4], ContextItem, "ContextItem" );
    refalrts::reinit_close_call( context[12] );
    refalrts::reinit_char( context[1], ' ' );
    refalrts::link_brackets( context[11], context[49] );
    refalrts::push_stack( context[12] );
    refalrts::push_stack( context[45] );
    refalrts::push_stack( context[42] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[47], context[49] );
    res = refalrts::splice_evar( res, context[15], context[1] );
    res = refalrts::splice_evar( res, context[42], context[46] );
    res = refalrts::splice_evar( res, context[14], context[14] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[18], context[41] );
    res = refalrts::splice_evar( res, context[13], context[13] );
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_evar( res, context[7], context[11] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & GenCommand/4 (/7 e.Indent#1/5 )/8 (/11 # CmdPushStack/13 s.ElemNumber#1/14 )/12 >/1
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
    context[13] = refalrts::ident_left(  & ident_CmdPushStack<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Indent#1 as range 5
    if( ! refalrts::svar_left( context[14], context[9], context[10] ) )
      continue;
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Indent#1/5 AsIs: )/8 AsIs: (/11 } e.Indent#1/5/15 Tile{ HalfReuse: 'r'/4 } 'e'/17 'f'/18 'a'/19 'l'/20 'r'/21 't'/22 's'/23 ':'/24 ':'/25 'p'/26 'u'/27 's'/28 'h'/29 '_'/30 's'/31 't'/32 'a'/33 'c'/34 'k'/35 '('/36 ' '/37 Tile{ AsIs: </0 } Tile{ HalfReuse: & ContextItem/13 AsIs: s.ElemNumber#1/14 HalfReuse: >/12 HalfReuse: ' '/1 } ')'/38 ';'/39 )/40 Tile{ ]] }
    if (! refalrts::copy_evar(context[15], context[16], context[5], context[6]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[17], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[18], 'f' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[19], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[20], 'l' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[21], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[22], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[23], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[24], ':' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[25], ':' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[26], 'p' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[27], 'u' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[28], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[29], 'h' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[30], '_' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[31], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[32], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[33], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[34], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[35], 'k' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[36], '(' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[37], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[38], ')' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[39], ';' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[40] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[4], 'r' );
    refalrts::reinit_name( context[13], ContextItem, "ContextItem" );
    refalrts::reinit_close_call( context[12] );
    refalrts::reinit_char( context[1], ' ' );
    refalrts::link_brackets( context[11], context[40] );
    refalrts::push_stack( context[12] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[38], context[40] );
    res = refalrts::splice_evar( res, context[13], context[1] );
    res = refalrts::splice_evar( res, context[0], context[0] );
    res = refalrts::splice_evar( res, context[17], context[37] );
    res = refalrts::splice_evar( res, context[4], context[4] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[7], context[11] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & GenCommand/4 (/7 e.Indent#1/5 )/8 (/11 # CmdInsertElem/13 s.ElemNumber#1/14 )/12 >/1
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
    context[13] = refalrts::ident_left(  & ident_CmdInsertElem<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Indent#1 as range 5
    if( ! refalrts::svar_left( context[14], context[9], context[10] ) )
      continue;
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Indent#1/5 AsIs: )/8 AsIs: (/11 } e.Indent#1/5/15 Tile{ HalfReuse: 'r'/4 } 'e'/17 's'/18 ' '/19 '='/20 ' '/21 'r'/22 'e'/23 'f'/24 'a'/25 'l'/26 'r'/27 't'/28 's'/29 ':'/30 ':'/31 's'/32 'p'/33 'l'/34 'i'/35 'c'/36 'e'/37 '_'/38 'e'/39 'l'/40 'e'/41 'm'/42 '('/43 ' '/44 'r'/45 'e'/46 's'/47 ','/48 ' '/49 Tile{ AsIs: </0 } Tile{ HalfReuse: & ContextItem/13 AsIs: s.ElemNumber#1/14 HalfReuse: >/12 HalfReuse: ' '/1 } ')'/50 ';'/51 )/52 Tile{ ]] }
    if (! refalrts::copy_evar(context[15], context[16], context[5], context[6]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[17], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[18], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[19], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[20], '=' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[21], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[22], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[23], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[24], 'f' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[25], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[26], 'l' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[27], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[28], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[29], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[30], ':' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[31], ':' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[32], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[33], 'p' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[34], 'l' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[35], 'i' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[36], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[37], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[38], '_' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[39], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[40], 'l' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[41], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[42], 'm' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[43], '(' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[44], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[45], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[46], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[47], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[48], ',' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[49], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[50], ')' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[51], ';' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[52] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[4], 'r' );
    refalrts::reinit_name( context[13], ContextItem, "ContextItem" );
    refalrts::reinit_close_call( context[12] );
    refalrts::reinit_char( context[1], ' ' );
    refalrts::link_brackets( context[11], context[52] );
    refalrts::push_stack( context[12] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[50], context[52] );
    res = refalrts::splice_evar( res, context[13], context[1] );
    res = refalrts::splice_evar( res, context[0], context[0] );
    res = refalrts::splice_evar( res, context[17], context[49] );
    res = refalrts::splice_evar( res, context[4], context[4] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[7], context[11] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & GenCommand/4 (/7 e.Indent#1/5 )/8 (/11 # CmdInsertVar/13 'e'/14 s.Number#1/15 )/12 >/1
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
    context[13] = refalrts::ident_left(  & ident_CmdInsertVar<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    context[14] = refalrts::char_left( 'e', context[9], context[10] );
    if( ! context[14] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Indent#1 as range 5
    if( ! refalrts::svar_left( context[15], context[9], context[10] ) )
      continue;
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 } e.Indent#1/5/16 Tile{ HalfReuse: )/4 AsIs: (/7 AsIs: e.Indent#1/5 HalfReuse: 'r'/8 HalfReuse: 'e'/11 HalfReuse: 's'/13 Reuse: ' '/14 } '='/18 ' '/19 'r'/20 'e'/21 'f'/22 'a'/23 'l'/24 'r'/25 't'/26 's'/27 ':'/28 ':'/29 's'/30 'p'/31 'l'/32 'i'/33 'c'/34 'e'/35 '_'/36 'e'/37 'v'/38 'a'/39 'r'/40 '('/41 ' '/42 'r'/43 'e'/44 's'/45 ','/46 ' '/47 </48 & ContextRange/49 Tile{ AsIs: s.Number#1/15 HalfReuse: >/12 HalfReuse: ' '/1 } ')'/50 ';'/51 )/52 Tile{ ]] }
    if (! refalrts::copy_evar(context[16], context[17], context[5], context[6]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[18], '=' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[19], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[20], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[21], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[22], 'f' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[23], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[24], 'l' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[25], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[26], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[27], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[28], ':' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[29], ':' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[30], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[31], 'p' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[32], 'l' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[33], 'i' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[34], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[35], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[36], '_' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[37], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[38], 'v' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[39], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[40], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[41], '(' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[42], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[43], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[44], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[45], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[46], ',' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[47], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[48] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[49], ContextRange, "ContextRange" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[50], ')' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[51], ';' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[52] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_close_bracket( context[4] );
    refalrts::reinit_char( context[8], 'r' );
    refalrts::reinit_char( context[11], 'e' );
    refalrts::reinit_char( context[13], 's' );
    refalrts::update_char( context[14], ' ' );
    refalrts::reinit_close_call( context[12] );
    refalrts::reinit_char( context[1], ' ' );
    refalrts::link_brackets( context[7], context[52] );
    refalrts::push_stack( context[12] );
    refalrts::push_stack( context[48] );
    refalrts::link_brackets( context[0], context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[50], context[52] );
    res = refalrts::splice_evar( res, context[15], context[1] );
    res = refalrts::splice_evar( res, context[18], context[49] );
    res = refalrts::splice_evar( res, context[4], context[14] );
    res = refalrts::splice_evar( res, context[16], context[17] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & GenCommand/4 (/7 e.Indent#1/5 )/8 (/11 # CmdInsertVar/13 s.Mode#1/14 s.Number#1/15 )/12 >/1
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
    context[13] = refalrts::ident_left(  & ident_CmdInsertVar<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Indent#1 as range 5
    if( ! refalrts::svar_left( context[14], context[9], context[10] ) )
      continue;
    if( ! refalrts::svar_left( context[15], context[9], context[10] ) )
      continue;
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  s.Mode#1/14 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Indent#1/5 AsIs: )/8 AsIs: (/11 } e.Indent#1/5/16 Tile{ HalfReuse: 'r'/13 } 'e'/18 's'/19 ' '/20 '='/21 ' '/22 'r'/23 'e'/24 'f'/25 'a'/26 'l'/27 'r'/28 't'/29 's'/30 ':'/31 ':'/32 's'/33 'p'/34 'l'/35 'i'/36 'c'/37 'e'/38 '_'/39 's'/40 't'/41 'v'/42 'a'/43 'r'/44 '('/45 ' '/46 'r'/47 'e'/48 's'/49 ','/50 ' '/51 Tile{ AsIs: </0 Reuse: & ContextItem/4 } Tile{ AsIs: s.Number#1/15 HalfReuse: >/12 HalfReuse: ' '/1 } ')'/52 ';'/53 )/54 Tile{ ]] }
    if (! refalrts::copy_evar(context[16], context[17], context[5], context[6]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[18], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[19], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[20], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[21], '=' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[22], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[23], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[24], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[25], 'f' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[26], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[27], 'l' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[28], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[29], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[30], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[31], ':' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[32], ':' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[33], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[34], 'p' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[35], 'l' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[36], 'i' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[37], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[38], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[39], '_' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[40], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[41], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[42], 'v' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[43], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[44], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[45], '(' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[46], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[47], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[48], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[49], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[50], ',' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[51], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[52], ')' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[53], ';' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[54] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[13], 'r' );
    refalrts::update_name( context[4], ContextItem, "ContextItem" );
    refalrts::reinit_close_call( context[12] );
    refalrts::reinit_char( context[1], ' ' );
    refalrts::link_brackets( context[11], context[54] );
    refalrts::push_stack( context[12] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[52], context[54] );
    res = refalrts::splice_evar( res, context[15], context[1] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[18], context[51] );
    res = refalrts::splice_evar( res, context[13], context[13] );
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_evar( res, context[7], context[11] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & GenCommand/4 (/7 e.Indent#1/5 )/8 (/11 # CmdInsertRange/13 s.Number#1/14 )/12 >/1
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
    context[13] = refalrts::ident_left(  & ident_CmdInsertRange<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Indent#1 as range 5
    if( ! refalrts::svar_left( context[14], context[9], context[10] ) )
      continue;
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Indent#1/5 AsIs: )/8 AsIs: (/11 } e.Indent#1/5/15 'r'/17 'e'/18 's'/19 ' '/20 '='/21 ' '/22 'r'/23 'e'/24 'f'/25 'a'/26 'l'/27 'r'/28 't'/29 's'/30 ':'/31 ':'/32 's'/33 'p'/34 'l'/35 'i'/36 'c'/37 'e'/38 '_'/39 'e'/40 'v'/41 'a'/42 'r'/43 '('/44 ' '/45 'r'/46 'e'/47 's'/48 ','/49 ' '/50 Tile{ AsIs: </0 Reuse: & ContextItem/4 } s.Number#1/14/51 >/52 ','/53 ' '/54 </55 & ContextItem/56 </57 Tile{ HalfReuse: & Inc/13 AsIs: s.Number#1/14 HalfReuse: >/12 AsIs: >/1 } ' '/58 ')'/59 ';'/60 )/61 Tile{ ]] }
    if (! refalrts::copy_evar(context[15], context[16], context[5], context[6]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[17], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[18], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[19], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[20], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[21], '=' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[22], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[23], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[24], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[25], 'f' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[26], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[27], 'l' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[28], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[29], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[30], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[31], ':' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[32], ':' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[33], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[34], 'p' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[35], 'l' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[36], 'i' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[37], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[38], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[39], '_' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[40], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[41], 'v' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[42], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[43], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[44], '(' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[45], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[46], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[47], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[48], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[49], ',' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[50], ' ' ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[51], context[14]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[52] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[53], ',' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[54], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[55] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[56], ContextItem, "ContextItem" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[57] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[58], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[59], ')' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[60], ';' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[61] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ContextItem, "ContextItem" );
    refalrts::reinit_name( context[13], Inc, "Inc" );
    refalrts::reinit_close_call( context[12] );
    refalrts::link_brackets( context[11], context[61] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[55] );
    refalrts::push_stack( context[12] );
    refalrts::push_stack( context[57] );
    refalrts::push_stack( context[52] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[58], context[61] );
    res = refalrts::splice_evar( res, context[13], context[1] );
    res = refalrts::splice_evar( res, context[51], context[57] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[17], context[50] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[7], context[11] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & GenCommand/4 (/7 e.Indent#1/5 )/8 (/11 # CmdInsertTile/13 s.BeginOffset#1/14 s.EndOffset#1/15 )/12 >/1
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
    context[13] = refalrts::ident_left(  & ident_CmdInsertTile<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Indent#1 as range 5
    if( ! refalrts::svar_left( context[14], context[9], context[10] ) )
      continue;
    if( ! refalrts::svar_left( context[15], context[9], context[10] ) )
      continue;
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Indent#1/5 AsIs: )/8 AsIs: (/11 } e.Indent#1/5/16 Tile{ HalfReuse: 'r'/13 } 'e'/18 's'/19 ' '/20 '='/21 ' '/22 'r'/23 'e'/24 'f'/25 'a'/26 'l'/27 'r'/28 't'/29 's'/30 ':'/31 ':'/32 's'/33 'p'/34 'l'/35 'i'/36 'c'/37 'e'/38 '_'/39 'e'/40 'v'/41 'a'/42 'r'/43 '('/44 ' '/45 'r'/46 'e'/47 's'/48 ','/49 ' '/50 Tile{ AsIs: </0 Reuse: & ContextItem/4 } Tile{ AsIs: s.BeginOffset#1/14 } >/51 ','/52 ' '/53 </54 & ContextItem/55 Tile{ AsIs: s.EndOffset#1/15 HalfReuse: >/12 HalfReuse: ' '/1 } ')'/56 ';'/57 )/58 Tile{ ]] }
    if (! refalrts::copy_evar(context[16], context[17], context[5], context[6]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[18], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[19], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[20], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[21], '=' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[22], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[23], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[24], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[25], 'f' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[26], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[27], 'l' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[28], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[29], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[30], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[31], ':' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[32], ':' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[33], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[34], 'p' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[35], 'l' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[36], 'i' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[37], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[38], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[39], '_' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[40], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[41], 'v' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[42], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[43], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[44], '(' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[45], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[46], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[47], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[48], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[49], ',' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[50], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[51] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[52], ',' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[53], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[54] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[55], ContextItem, "ContextItem" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[56], ')' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[57], ';' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[58] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[13], 'r' );
    refalrts::update_name( context[4], ContextItem, "ContextItem" );
    refalrts::reinit_close_call( context[12] );
    refalrts::reinit_char( context[1], ' ' );
    refalrts::link_brackets( context[11], context[58] );
    refalrts::push_stack( context[12] );
    refalrts::push_stack( context[54] );
    refalrts::push_stack( context[51] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[56], context[58] );
    res = refalrts::splice_evar( res, context[15], context[1] );
    res = refalrts::splice_evar( res, context[51], context[55] );
    res = refalrts::splice_evar( res, context[14], context[14] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[18], context[50] );
    res = refalrts::splice_evar( res, context[13], context[13] );
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_evar( res, context[7], context[11] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & GenCommand/4 (/7 e.Indent#1/5 )/8 (/11 # CmdReturnResult/13 )/12 >/1
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
    context[13] = refalrts::ident_left(  & ident_CmdReturnResult<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Indent#1 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } (/14 e.Indent#1/5/15 )/17 (/18 e.Indent#1/5/19 'r'/21 'e'/22 'f'/23 'a'/24 'l'/25 'r'/26 't'/27 's'/28 ':'/29 ':'/30 'u'/31 's'/32 'e'/33 '('/34 ' '/35 'r'/36 'e'/37 's'/38 ' '/39 ')'/40 Tile{ HalfReuse: ';'/0 HalfReuse: )/4 AsIs: (/7 AsIs: e.Indent#1/5 HalfReuse: 'r'/8 HalfReuse: 'e'/11 HalfReuse: 'f'/13 HalfReuse: 'a'/12 HalfReuse: 'l'/1 } 'r'/41 't'/42 's'/43 ':'/44 ':'/45 's'/46 'p'/47 'l'/48 'i'/49 'c'/50 'e'/51 '_'/52 't'/53 'o'/54 '_'/55 'f'/56 'r'/57 'e'/58 'e'/59 'l'/60 'i'/61 's'/62 't'/63 '('/64 ' '/65 'a'/66 'r'/67 'g'/68 '_'/69 'b'/70 'e'/71 'g'/72 'i'/73 'n'/74 ','/75 ' '/76 'a'/77 'r'/78 'g'/79 '_'/80 'e'/81 'n'/82 'd'/83 ' '/84 ')'/85 ';'/86 )/87 </88 & GenReturn/89 # Success/90 e.Indent#1/5/91 >/93 Tile{ ]] }
    if( ! refalrts::alloc_open_bracket( context[14] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[15], context[16], context[5], context[6]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[17] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[18] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[19], context[20], context[5], context[6]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[21], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[22], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[23], 'f' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[24], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[25], 'l' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[26], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[27], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[28], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[29], ':' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[30], ':' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[31], 'u' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[32], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[33], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[34], '(' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[35], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[36], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[37], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[38], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[39], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[40], ')' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[41], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[42], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[43], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[44], ':' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[45], ':' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[46], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[47], 'p' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[48], 'l' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[49], 'i' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[50], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[51], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[52], '_' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[53], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[54], 'o' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[55], '_' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[56], 'f' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[57], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[58], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[59], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[60], 'l' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[61], 'i' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[62], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[63], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[64], '(' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[65], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[66], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[67], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[68], 'g' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[69], '_' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[70], 'b' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[71], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[72], 'g' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[73], 'i' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[74], 'n' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[75], ',' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[76], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[77], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[78], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[79], 'g' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[80], '_' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[81], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[82], 'n' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[83], 'd' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[84], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[85], ')' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[86], ';' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[87] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[88] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[89], GenReturn, "GenReturn" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[90], & ident_Success<int>::name ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[91], context[92], context[5], context[6]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[93] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[0], ';' );
    refalrts::reinit_close_bracket( context[4] );
    refalrts::reinit_char( context[8], 'r' );
    refalrts::reinit_char( context[11], 'e' );
    refalrts::reinit_char( context[13], 'f' );
    refalrts::reinit_char( context[12], 'a' );
    refalrts::reinit_char( context[1], 'l' );
    refalrts::push_stack( context[93] );
    refalrts::push_stack( context[88] );
    refalrts::link_brackets( context[7], context[87] );
    refalrts::link_brackets( context[18], context[4] );
    refalrts::link_brackets( context[14], context[17] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[41], context[93] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    res = refalrts::splice_evar( res, context[14], context[40] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & GenCommand/4 (/7 e.Indent#1/5 )/8 (/11 # CmdUseRes/13 )/12 >/1
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
    context[13] = refalrts::ident_left(  & ident_CmdUseRes<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Indent#1 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 } e.Indent#1/5/14 Tile{ HalfReuse: )/4 AsIs: (/7 AsIs: e.Indent#1/5 HalfReuse: 'r'/8 HalfReuse: 'e'/11 HalfReuse: 'f'/13 HalfReuse: 'a'/12 HalfReuse: 'l'/1 } 'r'/16 't'/17 's'/18 ':'/19 ':'/20 'u'/21 's'/22 'e'/23 '('/24 ' '/25 'r'/26 'e'/27 's'/28 ' '/29 ')'/30 ';'/31 )/32 Tile{ ]] }
    if (! refalrts::copy_evar(context[14], context[15], context[5], context[6]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[16], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[17], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[18], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[19], ':' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[20], ':' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[21], 'u' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[22], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[23], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[24], '(' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[25], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[26], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[27], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[28], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[29], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[30], ')' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[31], ';' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[32] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_close_bracket( context[4] );
    refalrts::reinit_char( context[8], 'r' );
    refalrts::reinit_char( context[11], 'e' );
    refalrts::reinit_char( context[13], 'f' );
    refalrts::reinit_char( context[12], 'a' );
    refalrts::reinit_char( context[1], 'l' );
    refalrts::link_brackets( context[7], context[32] );
    refalrts::link_brackets( context[0], context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[16], context[32] );
    res = refalrts::splice_evar( res, context[4], context[1] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & GenCommand/4 (/7 e.Indent#1/5 )/8 (/11 # CmdReturnResult_NoTrash/13 )/12 >/1
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
    context[13] = refalrts::ident_left(  & ident_CmdReturnResult_NoTrash<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Indent#1 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & GenCommand/4 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Indent#1/5 AsIs: )/8 HalfReuse: </11 HalfReuse: & GenReturn/13 HalfReuse: # Success/12 } e.Indent#1/5/14 Tile{ AsIs: >/1 ]] }
    if (! refalrts::copy_evar(context[14], context[15], context[5], context[6]))
      return refalrts::cNoMemory;
    refalrts::reinit_open_call( context[11] );
    refalrts::reinit_name( context[13], GenReturn, "GenReturn" );
    refalrts::reinit_ident( context[12], & ident_Success<int>::name );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[11] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[14], context[15] );
    res = refalrts::splice_evar( res, context[7], context[12] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & GenCommand/4 (/7 e.Indent#1/5 )/8 (/11 # CmdTrash/13 s.Offset#1/14 )/12 >/1
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
    context[13] = refalrts::ident_left(  & ident_CmdTrash<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Indent#1 as range 5
    if( ! refalrts::svar_left( context[14], context[9], context[10] ) )
      continue;
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Indent#1/5 AsIs: )/8 HalfReuse: </11 HalfReuse: & Fetch/13 AsIs: s.Offset#1/14 HalfReuse: </12 HalfReuse: & CreateClosure /1 } Tile{ HalfReuse: & lambda_GenCommand_1/0 HalfReuse: (/4 } e.Indent#1/5/15 )/17 >/18 >/19 Tile{ ]] }
    if (! refalrts::copy_evar(context[15], context[16], context[5], context[6]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[17] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[18] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[19] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_call( context[11] );
    refalrts::reinit_name( context[13], Fetch, "Fetch" );
    refalrts::reinit_open_call( context[12] );
    refalrts::reinit_name( context[1], refalrts::create_closure, "refalrts::create_closure" );
    refalrts::reinit_name( context[0], lambda_GenCommand_1, "lambda_GenCommand_1" );
    refalrts::reinit_open_bracket( context[4] );
    refalrts::push_stack( context[19] );
    refalrts::push_stack( context[11] );
    refalrts::push_stack( context[18] );
    refalrts::push_stack( context[12] );
    refalrts::link_brackets( context[4], context[17] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[17], context[19] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[7], context[1] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & GenCommand/4 (/7 e.Indent#1/5 )/8 (/11 # CmdIssueMem/13 s.Number#1/14 )/12 >/1
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
    context[13] = refalrts::ident_left(  & ident_CmdIssueMem<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Indent#1 as range 5
    if( ! refalrts::svar_left( context[14], context[9], context[10] ) )
      continue;
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Indent#1/5 AsIs: )/8 AsIs: (/11 } e.Indent#1/5/15 '/'/17 '/'/18 ' '/19 'i'/20 's'/21 's'/22 'u'/23 'e'/24 ' '/25 'h'/26 'e'/27 'r'/28 'e'/29 ' '/30 'm'/31 'e'/32 'm'/33 'o'/34 'r'/35 'y'/36 ' '/37 'f'/38 'o'/39 'r'/40 ' '/41 'v'/42 'a'/43 'r'/44 's'/45 ' '/46 'w'/47 'i'/48 't'/49 'h'/50 ' '/51 </52 Tile{ HalfReuse: & StrFromInt/13 AsIs: s.Number#1/14 HalfReuse: >/12 HalfReuse: ' '/1 } 'e'/53 'l'/54 'e'/55 'm'/56 's'/57 )/58 (/59 e.Indent#1/5/60 'r'/62 'e'/63 'f'/64 'a'/65 'l'/66 'r'/67 't'/68 's'/69 ':'/70 ':'/71 'I'/72 't'/73 'e'/74 'r'/75 ' '/76 'c'/77 'o'/78 'n'/79 't'/80 'e'/81 'x'/82 't'/83 '['/84 Tile{ AsIs: </0 Reuse: & StrFromInt/4 } s.Number#1/14/85 >/86 ']'/87 ';'/88 )/89 (/90 e.Indent#1/5/91 'r'/93 'e'/94 'f'/95 'a'/96 'l'/97 'r'/98 't'/99 's'/100 ':'/101 ':'/102 'z'/103 'e'/104 'r'/105 'o'/106 's'/107 '('/108 ' '/109 'c'/110 'o'/111 'n'/112 't'/113 'e'/114 'x'/115 't'/116 ','/117 ' '/118 </119 & StrFromInt/120 s.Number#1/14/121 >/122 ' '/123 ')'/124 ';'/125 )/126 Tile{ ]] }
    if (! refalrts::copy_evar(context[15], context[16], context[5], context[6]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[17], '/' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[18], '/' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[19], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[20], 'i' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[21], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[22], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[23], 'u' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[24], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[25], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[26], 'h' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[27], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[28], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[29], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[30], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[31], 'm' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[32], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[33], 'm' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[34], 'o' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[35], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[36], 'y' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[37], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[38], 'f' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[39], 'o' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[40], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[41], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[42], 'v' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[43], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[44], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[45], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[46], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[47], 'w' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[48], 'i' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[49], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[50], 'h' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[51], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[52] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[53], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[54], 'l' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[55], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[56], 'm' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[57], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[58] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[59] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[60], context[61], context[5], context[6]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[62], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[63], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[64], 'f' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[65], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[66], 'l' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[67], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[68], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[69], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[70], ':' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[71], ':' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[72], 'I' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[73], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[74], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[75], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[76], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[77], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[78], 'o' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[79], 'n' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[80], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[81], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[82], 'x' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[83], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[84], '[' ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[85], context[14]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[86] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[87], ']' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[88], ';' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[89] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[90] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[91], context[92], context[5], context[6]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[93], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[94], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[95], 'f' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[96], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[97], 'l' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[98], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[99], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[100], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[101], ':' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[102], ':' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[103], 'z' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[104], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[105], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[106], 'o' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[107], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[108], '(' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[109], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[110], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[111], 'o' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[112], 'n' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[113], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[114], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[115], 'x' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[116], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[117], ',' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[118], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[119] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[120], StrFromInt, "StrFromInt" ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[121], context[14]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[122] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[123], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[124], ')' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[125], ';' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[126] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_name( context[13], StrFromInt, "StrFromInt" );
    refalrts::reinit_close_call( context[12] );
    refalrts::reinit_char( context[1], ' ' );
    refalrts::update_name( context[4], StrFromInt, "StrFromInt" );
    refalrts::link_brackets( context[90], context[126] );
    refalrts::push_stack( context[122] );
    refalrts::push_stack( context[119] );
    refalrts::link_brackets( context[59], context[89] );
    refalrts::push_stack( context[86] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[11], context[58] );
    refalrts::push_stack( context[12] );
    refalrts::push_stack( context[52] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[85], context[126] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[53], context[84] );
    res = refalrts::splice_evar( res, context[13], context[1] );
    res = refalrts::splice_evar( res, context[17], context[52] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[7], context[11] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & GenCommand/4 (/7 e.Indent#1/5 )/8 (/11 # CmdIfDef/13 )/12 >/1
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
    context[13] = refalrts::ident_left(  & ident_CmdIfDef<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Indent#1 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Indent#1/5 AsIs: )/8 AsIs: (/11 HalfReuse: '#'/13 HalfReuse: 'i'/12 HalfReuse: 'f'/1 } Tile{ HalfReuse: 'd'/0 HalfReuse: 'e'/4 } 'f'/14 ' '/15 'I'/16 'N'/17 'T'/18 'E'/19 'R'/20 'P'/21 'R'/22 'E'/23 'T'/24 )/25 Tile{ ]] }
    if( ! refalrts::alloc_char( context[14], 'f' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[15], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[16], 'I' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[17], 'N' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[18], 'T' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[19], 'E' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[20], 'R' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[21], 'P' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[22], 'R' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[23], 'E' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[24], 'T' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[25] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[13], '#' );
    refalrts::reinit_char( context[12], 'i' );
    refalrts::reinit_char( context[1], 'f' );
    refalrts::reinit_char( context[0], 'd' );
    refalrts::reinit_char( context[4], 'e' );
    refalrts::link_brackets( context[11], context[25] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[14], context[25] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[7], context[1] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & GenCommand/4 (/7 e.Indent#1/5 )/8 (/11 # CmdElse/13 )/12 >/1
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
    context[13] = refalrts::ident_left(  & ident_CmdElse<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Indent#1 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Indent#1/5 AsIs: )/8 AsIs: (/11 HalfReuse: '#'/13 HalfReuse: 'e'/12 HalfReuse: 'l'/1 } Tile{ HalfReuse: 's'/0 HalfReuse: 'e'/4 } )/14 Tile{ ]] }
    if( ! refalrts::alloc_close_bracket( context[14] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[13], '#' );
    refalrts::reinit_char( context[12], 'e' );
    refalrts::reinit_char( context[1], 'l' );
    refalrts::reinit_char( context[0], 's' );
    refalrts::reinit_char( context[4], 'e' );
    refalrts::link_brackets( context[11], context[14] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[14], context[14] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[7], context[1] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & GenCommand/4 (/7 e.Indent#1/5 )/8 (/11 # CmdEndIf/13 )/12 >/1
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
    context[13] = refalrts::ident_left(  & ident_CmdEndIf<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Indent#1 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Indent#1/5 AsIs: )/8 AsIs: (/11 HalfReuse: '#'/13 HalfReuse: 'e'/12 HalfReuse: 'n'/1 } Tile{ HalfReuse: 'd'/0 HalfReuse: 'i'/4 } 'f'/14 )/15 Tile{ ]] }
    if( ! refalrts::alloc_char( context[14], 'f' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[15] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[13], '#' );
    refalrts::reinit_char( context[12], 'e' );
    refalrts::reinit_char( context[1], 'n' );
    refalrts::reinit_char( context[0], 'd' );
    refalrts::reinit_char( context[4], 'i' );
    refalrts::link_brackets( context[11], context[15] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[14], context[15] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[7], context[1] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & GenCommand/4 (/7 e.Indent#1/5 )/8 (/11 # CmdiFuncArray/13 )/12 >/1
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
    context[13] = refalrts::ident_left(  & ident_CmdiFuncArray<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Indent#1 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 } e.Indent#1/5/14 Tile{ HalfReuse: )/4 AsIs: (/7 AsIs: e.Indent#1/5 HalfReuse: 'u'/8 HalfReuse: 's'/11 HalfReuse: 'i'/13 HalfReuse: 'n'/12 HalfReuse: 'g'/1 } ' '/16 'r'/17 'e'/18 'f'/19 'a'/20 'l'/21 'r'/22 't'/23 's'/24 ':'/25 ':'/26 'f'/27 'u'/28 'n'/29 'c'/30 't'/31 'i'/32 'o'/33 'n'/34 's'/35 ';'/36 )/37 Tile{ ]] }
    if (! refalrts::copy_evar(context[14], context[15], context[5], context[6]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[16], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[17], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[18], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[19], 'f' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[20], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[21], 'l' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[22], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[23], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[24], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[25], ':' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[26], ':' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[27], 'f' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[28], 'u' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[29], 'n' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[30], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[31], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[32], 'i' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[33], 'o' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[34], 'n' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[35], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[36], ';' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[37] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_close_bracket( context[4] );
    refalrts::reinit_char( context[8], 'u' );
    refalrts::reinit_char( context[11], 's' );
    refalrts::reinit_char( context[13], 'i' );
    refalrts::reinit_char( context[12], 'n' );
    refalrts::reinit_char( context[1], 'g' );
    refalrts::link_brackets( context[7], context[37] );
    refalrts::link_brackets( context[0], context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[16], context[37] );
    res = refalrts::splice_evar( res, context[4], context[1] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & GenCommand/4 (/7 e.Indent#1/5 )/8 (/11 # CmdiFuncArray/13 e.FuncNames#1/9 (/16 e.LastName#1/14 )/17 )/12 >/1
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
    context[13] = refalrts::ident_left(  & ident_CmdiFuncArray<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    context[14] = 0;
    context[15] = 0;
    context[16] = refalrts::brackets_right( context[14], context[15], context[9], context[10] );
    if( ! context[16] )
      continue;
    refalrts::bracket_pointers(context[16], context[17]);
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Indent#1 as range 5
    // closed e.FuncNames#1 as range 9
    // closed e.LastName#1 as range 14

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: (/13 } e.Indent#1/5/18 )/20 (/21 e.Indent#1/5/22 's'/24 't'/25 'a'/26 't'/27 'i'/28 'c'/29 ' '/30 'c'/31 'o'/32 'n'/33 's'/34 't'/35 ' '/36 'r'/37 'e'/38 'f'/39 'a'/40 'l'/41 'r'/42 't'/43 's'/44 ':'/45 ':'/46 'R'/47 'e'/48 'f'/49 'a'/50 'l'/51 'F'/52 'u'/53 'n'/54 'c'/55 't'/56 'i'/57 'o'/58 'n'/59 ' '/60 'f'/61 'u'/62 'n'/63 'c'/64 't'/65 'i'/66 'o'/67 'n'/68 's'/69 '['/70 ']'/71 ' '/72 '='/73 ' '/74 '{'/75 )/76 </77 & Map/78 </79 Tile{ HalfReuse: & CreateClosure /0 Reuse: & lambda_GenCommand_2/4 AsIs: (/7 AsIs: e.Indent#1/5 AsIs: )/8 HalfReuse: >/11 } Tile{ AsIs: e.FuncNames#1/9 } >/80 (/81 e.Indent#1/5/82 ' '/84 ' '/85 '{'/86 ' '/87 </88 Tile{ HalfReuse: & PrintName/16 AsIs: e.LastName#1/14 HalfReuse: >/17 HalfReuse: ','/12 HalfReuse: ' '/1 } '\"'/89 </90 & PrintName/91 e.LastName#1/14/92 >/94 '\"'/95 ' '/96 '}'/97 )/98 (/99 e.Indent#1/5/100 '}'/102 ';'/103 )/104 Tile{ ]] }
    if (! refalrts::copy_evar(context[18], context[19], context[5], context[6]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[20] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[21] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[22], context[23], context[5], context[6]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[24], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[25], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[26], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[27], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[28], 'i' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[29], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[30], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[31], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[32], 'o' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[33], 'n' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[34], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[35], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[36], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[37], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[38], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[39], 'f' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[40], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[41], 'l' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[42], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[43], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[44], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[45], ':' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[46], ':' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[47], 'R' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[48], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[49], 'f' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[50], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[51], 'l' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[52], 'F' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[53], 'u' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[54], 'n' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[55], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[56], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[57], 'i' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[58], 'o' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[59], 'n' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[60], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[61], 'f' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[62], 'u' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[63], 'n' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[64], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[65], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[66], 'i' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[67], 'o' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[68], 'n' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[69], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[70], '[' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[71], ']' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[72], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[73], '=' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[74], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[75], '{' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[76] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[77] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[78], Map, "Map" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[79] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[80] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[81] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[82], context[83], context[5], context[6]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[84], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[85], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[86], '{' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[87], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[88] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[89], '\"' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[90] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[91], PrintName, "PrintName" ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[92], context[93], context[14], context[15]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[94] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[95], '\"' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[96], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[97], '}' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[98] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[99] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[100], context[101], context[5], context[6]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[102], '}' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[103], ';' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[104] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[13] );
    refalrts::reinit_name( context[0], refalrts::create_closure, "refalrts::create_closure" );
    refalrts::update_name( context[4], lambda_GenCommand_2, "lambda_GenCommand_2" );
    refalrts::reinit_close_call( context[11] );
    refalrts::reinit_name( context[16], PrintName, "PrintName" );
    refalrts::reinit_close_call( context[17] );
    refalrts::reinit_char( context[12], ',' );
    refalrts::reinit_char( context[1], ' ' );
    refalrts::link_brackets( context[99], context[104] );
    refalrts::link_brackets( context[81], context[98] );
    refalrts::push_stack( context[94] );
    refalrts::push_stack( context[90] );
    refalrts::push_stack( context[17] );
    refalrts::push_stack( context[88] );
    refalrts::push_stack( context[80] );
    refalrts::push_stack( context[77] );
    refalrts::push_stack( context[11] );
    refalrts::push_stack( context[79] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[21], context[76] );
    refalrts::link_brackets( context[13], context[20] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[89], context[104] );
    res = refalrts::splice_evar( res, context[16], context[1] );
    res = refalrts::splice_evar( res, context[80], context[88] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[0], context[11] );
    res = refalrts::splice_evar( res, context[20], context[79] );
    res = refalrts::splice_evar( res, context[18], context[19] );
    res = refalrts::splice_evar( res, context[13], context[13] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & GenCommand/4 (/7 e.Indent#1/5 )/8 (/11 # CmdiLabelArray/13 )/12 >/1
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
    context[13] = refalrts::ident_left(  & ident_CmdiLabelArray<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Indent#1 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 } e.Indent#1/5/14 Tile{ HalfReuse: )/4 AsIs: (/7 AsIs: e.Indent#1/5 HalfReuse: 'u'/8 HalfReuse: 's'/11 HalfReuse: 'i'/13 HalfReuse: 'n'/12 HalfReuse: 'g'/1 } ' '/16 'r'/17 'e'/18 'f'/19 'a'/20 'l'/21 'r'/22 't'/23 's'/24 ':'/25 ':'/26 'i'/27 'd'/28 'e'/29 'n'/30 't'/31 's'/32 ';'/33 )/34 Tile{ ]] }
    if (! refalrts::copy_evar(context[14], context[15], context[5], context[6]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[16], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[17], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[18], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[19], 'f' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[20], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[21], 'l' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[22], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[23], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[24], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[25], ':' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[26], ':' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[27], 'i' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[28], 'd' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[29], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[30], 'n' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[31], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[32], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[33], ';' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[34] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_close_bracket( context[4] );
    refalrts::reinit_char( context[8], 'u' );
    refalrts::reinit_char( context[11], 's' );
    refalrts::reinit_char( context[13], 'i' );
    refalrts::reinit_char( context[12], 'n' );
    refalrts::reinit_char( context[1], 'g' );
    refalrts::link_brackets( context[7], context[34] );
    refalrts::link_brackets( context[0], context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[16], context[34] );
    res = refalrts::splice_evar( res, context[4], context[1] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & GenCommand/4 (/7 e.Indent#1/5 )/8 (/11 # CmdiLabelArray/13 e.LabelNames#1/9 (/16 e.LastName#1/14 )/17 )/12 >/1
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
    context[13] = refalrts::ident_left(  & ident_CmdiLabelArray<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    context[14] = 0;
    context[15] = 0;
    context[16] = refalrts::brackets_right( context[14], context[15], context[9], context[10] );
    if( ! context[16] )
      continue;
    refalrts::bracket_pointers(context[16], context[17]);
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Indent#1 as range 5
    // closed e.LabelNames#1 as range 9
    // closed e.LastName#1 as range 14

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: (/13 } e.Indent#1/5/18 )/20 (/21 e.Indent#1/5/22 's'/24 't'/25 'a'/26 't'/27 'i'/28 'c'/29 ' '/30 'c'/31 'o'/32 'n'/33 's'/34 't'/35 ' '/36 'r'/37 'e'/38 'f'/39 'a'/40 'l'/41 'r'/42 't'/43 's'/44 ':'/45 ':'/46 'R'/47 'e'/48 'f'/49 'a'/50 'l'/51 'I'/52 'd'/53 'e'/54 'n'/55 't'/56 'i'/57 'f'/58 'i'/59 'e'/60 'r'/61 ' '/62 'i'/63 'd'/64 'e'/65 'n'/66 't'/67 's'/68 '['/69 ']'/70 ' '/71 '='/72 ' '/73 '{'/74 )/75 </76 & Map/77 </78 Tile{ HalfReuse: & CreateClosure /0 Reuse: & lambda_GenCommand_3/4 AsIs: (/7 AsIs: e.Indent#1/5 AsIs: )/8 HalfReuse: >/11 } Tile{ AsIs: e.LabelNames#1/9 } >/79 (/80 e.Indent#1/5/81 ' '/83 ' '/84 '&'/85 ' '/86 'i'/87 'd'/88 'e'/89 'n'/90 't'/91 Tile{ HalfReuse: '_'/16 AsIs: e.LastName#1/14 HalfReuse: '<'/17 HalfReuse: 'i'/12 HalfReuse: 'n'/1 } 't'/92 '>'/93 ':'/94 ':'/95 'n'/96 'a'/97 'm'/98 'e'/99 )/100 (/101 e.Indent#1/5/102 '}'/104 ';'/105 )/106 Tile{ ]] }
    if (! refalrts::copy_evar(context[18], context[19], context[5], context[6]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[20] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[21] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[22], context[23], context[5], context[6]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[24], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[25], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[26], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[27], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[28], 'i' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[29], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[30], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[31], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[32], 'o' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[33], 'n' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[34], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[35], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[36], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[37], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[38], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[39], 'f' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[40], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[41], 'l' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[42], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[43], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[44], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[45], ':' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[46], ':' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[47], 'R' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[48], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[49], 'f' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[50], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[51], 'l' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[52], 'I' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[53], 'd' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[54], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[55], 'n' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[56], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[57], 'i' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[58], 'f' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[59], 'i' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[60], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[61], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[62], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[63], 'i' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[64], 'd' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[65], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[66], 'n' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[67], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[68], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[69], '[' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[70], ']' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[71], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[72], '=' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[73], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[74], '{' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[75] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[76] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[77], Map, "Map" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[78] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[79] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[80] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[81], context[82], context[5], context[6]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[83], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[84], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[85], '&' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[86], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[87], 'i' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[88], 'd' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[89], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[90], 'n' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[91], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[92], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[93], '>' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[94], ':' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[95], ':' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[96], 'n' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[97], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[98], 'm' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[99], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[100] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[101] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[102], context[103], context[5], context[6]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[104], '}' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[105], ';' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[106] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[13] );
    refalrts::reinit_name( context[0], refalrts::create_closure, "refalrts::create_closure" );
    refalrts::update_name( context[4], lambda_GenCommand_3, "lambda_GenCommand_3" );
    refalrts::reinit_close_call( context[11] );
    refalrts::reinit_char( context[16], '_' );
    refalrts::reinit_char( context[17], '<' );
    refalrts::reinit_char( context[12], 'i' );
    refalrts::reinit_char( context[1], 'n' );
    refalrts::link_brackets( context[101], context[106] );
    refalrts::link_brackets( context[80], context[100] );
    refalrts::push_stack( context[79] );
    refalrts::push_stack( context[76] );
    refalrts::push_stack( context[11] );
    refalrts::push_stack( context[78] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[21], context[75] );
    refalrts::link_brackets( context[13], context[20] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[92], context[106] );
    res = refalrts::splice_evar( res, context[16], context[1] );
    res = refalrts::splice_evar( res, context[79], context[91] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[0], context[11] );
    res = refalrts::splice_evar( res, context[20], context[78] );
    res = refalrts::splice_evar( res, context[18], context[19] );
    res = refalrts::splice_evar( res, context[13], context[13] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & GenCommand/4 (/7 e.Indent#1/5 )/8 (/11 # CmdiNumberArray/13 )/12 >/1
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
    context[13] = refalrts::ident_left(  & ident_CmdiNumberArray<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Indent#1 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 } e.Indent#1/5/14 Tile{ HalfReuse: )/4 AsIs: (/7 AsIs: e.Indent#1/5 HalfReuse: 'u'/8 HalfReuse: 's'/11 HalfReuse: 'i'/13 HalfReuse: 'n'/12 HalfReuse: 'g'/1 } ' '/16 'r'/17 'e'/18 'f'/19 'a'/20 'l'/21 'r'/22 't'/23 's'/24 ':'/25 ':'/26 'n'/27 'u'/28 'm'/29 'b'/30 'e'/31 'r'/32 's'/33 ';'/34 )/35 Tile{ ]] }
    if (! refalrts::copy_evar(context[14], context[15], context[5], context[6]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[16], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[17], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[18], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[19], 'f' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[20], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[21], 'l' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[22], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[23], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[24], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[25], ':' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[26], ':' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[27], 'n' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[28], 'u' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[29], 'm' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[30], 'b' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[31], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[32], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[33], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[34], ';' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[35] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_close_bracket( context[4] );
    refalrts::reinit_char( context[8], 'u' );
    refalrts::reinit_char( context[11], 's' );
    refalrts::reinit_char( context[13], 'i' );
    refalrts::reinit_char( context[12], 'n' );
    refalrts::reinit_char( context[1], 'g' );
    refalrts::link_brackets( context[7], context[35] );
    refalrts::link_brackets( context[0], context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[16], context[35] );
    res = refalrts::splice_evar( res, context[4], context[1] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & GenCommand/4 (/7 e.Indent#1/5 )/8 (/11 # CmdiNumberArray/13 e.Numbers#1/9 s.LastNumber#1/14 )/12 >/1
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
    context[13] = refalrts::ident_left(  & ident_CmdiNumberArray<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Indent#1 as range 5
    if( ! refalrts::svar_right( context[14], context[9], context[10] ) )
      continue;
    // closed e.Numbers#1 as range 9

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: (/13 } e.Indent#1/5/15 )/17 (/18 e.Indent#1/5/19 's'/21 't'/22 'a'/23 't'/24 'i'/25 'c'/26 ' '/27 'c'/28 'o'/29 'n'/30 's'/31 't'/32 ' '/33 'r'/34 'e'/35 'f'/36 'a'/37 'l'/38 'r'/39 't'/40 's'/41 ':'/42 ':'/43 'R'/44 'e'/45 'f'/46 'a'/47 'l'/48 'N'/49 'u'/50 'm'/51 'b'/52 'e'/53 'r'/54 ' '/55 'n'/56 'u'/57 'm'/58 'b'/59 'e'/60 'r'/61 's'/62 '['/63 ']'/64 ' '/65 '='/66 ' '/67 '{'/68 )/69 </70 & Map/71 </72 Tile{ HalfReuse: & CreateClosure /0 Reuse: & lambda_GenCommand_4/4 AsIs: (/7 AsIs: e.Indent#1/5 AsIs: )/8 HalfReuse: >/11 } Tile{ AsIs: e.Numbers#1/9 } >/73 (/74 e.Indent#1/5/75 ' '/77 ' '/78 </79 & StrFromInt/80 Tile{ AsIs: s.LastNumber#1/14 HalfReuse: >/12 HalfReuse: 'U'/1 } 'L'/81 )/82 (/83 e.Indent#1/5/84 '}'/86 ';'/87 )/88 Tile{ ]] }
    if (! refalrts::copy_evar(context[15], context[16], context[5], context[6]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[17] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[18] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[19], context[20], context[5], context[6]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[21], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[22], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[23], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[24], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[25], 'i' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[26], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[27], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[28], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[29], 'o' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[30], 'n' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[31], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[32], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[33], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[34], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[35], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[36], 'f' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[37], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[38], 'l' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[39], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[40], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[41], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[42], ':' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[43], ':' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[44], 'R' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[45], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[46], 'f' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[47], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[48], 'l' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[49], 'N' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[50], 'u' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[51], 'm' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[52], 'b' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[53], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[54], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[55], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[56], 'n' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[57], 'u' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[58], 'm' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[59], 'b' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[60], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[61], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[62], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[63], '[' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[64], ']' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[65], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[66], '=' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[67], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[68], '{' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[69] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[70] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[71], Map, "Map" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[72] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[73] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[74] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[75], context[76], context[5], context[6]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[77], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[78], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[79] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[80], StrFromInt, "StrFromInt" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[81], 'L' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[82] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[83] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[84], context[85], context[5], context[6]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[86], '}' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[87], ';' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[88] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[13] );
    refalrts::reinit_name( context[0], refalrts::create_closure, "refalrts::create_closure" );
    refalrts::update_name( context[4], lambda_GenCommand_4, "lambda_GenCommand_4" );
    refalrts::reinit_close_call( context[11] );
    refalrts::reinit_close_call( context[12] );
    refalrts::reinit_char( context[1], 'U' );
    refalrts::link_brackets( context[83], context[88] );
    refalrts::link_brackets( context[74], context[82] );
    refalrts::push_stack( context[12] );
    refalrts::push_stack( context[79] );
    refalrts::push_stack( context[73] );
    refalrts::push_stack( context[70] );
    refalrts::push_stack( context[11] );
    refalrts::push_stack( context[72] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[18], context[69] );
    refalrts::link_brackets( context[13], context[17] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[81], context[88] );
    res = refalrts::splice_evar( res, context[14], context[1] );
    res = refalrts::splice_evar( res, context[73], context[80] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[0], context[11] );
    res = refalrts::splice_evar( res, context[17], context[72] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[13], context[13] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & GenCommand/4 (/7 e.Indent#1/5 )/8 (/11 # CmdiStringArray/13 )/12 >/1
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
    context[13] = refalrts::ident_left(  & ident_CmdiStringArray<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Indent#1 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 } e.Indent#1/5/14 Tile{ HalfReuse: )/4 AsIs: (/7 AsIs: e.Indent#1/5 HalfReuse: 'u'/8 HalfReuse: 's'/11 HalfReuse: 'i'/13 HalfReuse: 'n'/12 HalfReuse: 'g'/1 } ' '/16 'r'/17 'e'/18 'f'/19 'a'/20 'l'/21 'r'/22 't'/23 's'/24 ':'/25 ':'/26 's'/27 't'/28 'r'/29 'i'/30 'n'/31 'g'/32 's'/33 ';'/34 )/35 Tile{ ]] }
    if (! refalrts::copy_evar(context[14], context[15], context[5], context[6]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[16], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[17], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[18], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[19], 'f' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[20], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[21], 'l' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[22], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[23], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[24], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[25], ':' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[26], ':' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[27], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[28], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[29], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[30], 'i' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[31], 'n' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[32], 'g' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[33], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[34], ';' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[35] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_close_bracket( context[4] );
    refalrts::reinit_char( context[8], 'u' );
    refalrts::reinit_char( context[11], 's' );
    refalrts::reinit_char( context[13], 'i' );
    refalrts::reinit_char( context[12], 'n' );
    refalrts::reinit_char( context[1], 'g' );
    refalrts::link_brackets( context[7], context[35] );
    refalrts::link_brackets( context[0], context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[16], context[35] );
    res = refalrts::splice_evar( res, context[4], context[1] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & GenCommand/4 (/7 e.Indent#1/5 )/8 (/11 # CmdiStringArray/13 e.Strings#1/9 (/16 e.LastString#1/14 )/17 )/12 >/1
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
    context[13] = refalrts::ident_left(  & ident_CmdiStringArray<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    context[14] = 0;
    context[15] = 0;
    context[16] = refalrts::brackets_right( context[14], context[15], context[9], context[10] );
    if( ! context[16] )
      continue;
    refalrts::bracket_pointers(context[16], context[17]);
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Indent#1 as range 5
    // closed e.Strings#1 as range 9
    // closed e.LastString#1 as range 14

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: (/13 } e.Indent#1/5/18 )/20 (/21 e.Indent#1/5/22 's'/24 't'/25 'a'/26 't'/27 'i'/28 'c'/29 ' '/30 'c'/31 'o'/32 'n'/33 's'/34 't'/35 ' '/36 'r'/37 'e'/38 'f'/39 'a'/40 'l'/41 'r'/42 't'/43 's'/44 ':'/45 ':'/46 'S'/47 't'/48 'r'/49 'i'/50 'n'/51 'g'/52 'I'/53 't'/54 'e'/55 'm'/56 ' '/57 's'/58 't'/59 'r'/60 'i'/61 'n'/62 'g'/63 's'/64 '['/65 ']'/66 ' '/67 '='/68 ' '/69 '{'/70 )/71 </72 & Map/73 </74 Tile{ HalfReuse: & CreateClosure /0 Reuse: & lambda_GenCommand_5/4 AsIs: (/7 AsIs: e.Indent#1/5 AsIs: )/8 HalfReuse: >/11 } Tile{ AsIs: e.Strings#1/9 } >/75 (/76 e.Indent#1/5/77 ' '/79 ' '/80 '{'/81 </82 Tile{ HalfReuse: & PrintString/16 AsIs: e.LastString#1/14 HalfReuse: >/17 HalfReuse: '}'/12 HalfReuse: )/1 } (/83 e.Indent#1/5/84 '}'/86 ';'/87 )/88 Tile{ ]] }
    if (! refalrts::copy_evar(context[18], context[19], context[5], context[6]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[20] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[21] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[22], context[23], context[5], context[6]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[24], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[25], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[26], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[27], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[28], 'i' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[29], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[30], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[31], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[32], 'o' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[33], 'n' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[34], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[35], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[36], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[37], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[38], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[39], 'f' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[40], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[41], 'l' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[42], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[43], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[44], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[45], ':' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[46], ':' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[47], 'S' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[48], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[49], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[50], 'i' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[51], 'n' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[52], 'g' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[53], 'I' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[54], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[55], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[56], 'm' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[57], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[58], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[59], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[60], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[61], 'i' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[62], 'n' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[63], 'g' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[64], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[65], '[' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[66], ']' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[67], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[68], '=' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[69], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[70], '{' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[71] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[72] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[73], Map, "Map" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[74] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[75] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[76] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[77], context[78], context[5], context[6]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[79], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[80], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[81], '{' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[82] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[83] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[84], context[85], context[5], context[6]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[86], '}' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[87], ';' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[88] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[13] );
    refalrts::reinit_name( context[0], refalrts::create_closure, "refalrts::create_closure" );
    refalrts::update_name( context[4], lambda_GenCommand_5, "lambda_GenCommand_5" );
    refalrts::reinit_close_call( context[11] );
    refalrts::reinit_name( context[16], PrintString, "PrintString" );
    refalrts::reinit_close_call( context[17] );
    refalrts::reinit_char( context[12], '}' );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[83], context[88] );
    refalrts::link_brackets( context[76], context[1] );
    refalrts::push_stack( context[17] );
    refalrts::push_stack( context[82] );
    refalrts::push_stack( context[75] );
    refalrts::push_stack( context[72] );
    refalrts::push_stack( context[11] );
    refalrts::push_stack( context[74] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[21], context[71] );
    refalrts::link_brackets( context[13], context[20] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[83], context[88] );
    res = refalrts::splice_evar( res, context[16], context[1] );
    res = refalrts::splice_evar( res, context[75], context[82] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[0], context[11] );
    res = refalrts::splice_evar( res, context[20], context[74] );
    res = refalrts::splice_evar( res, context[18], context[19] );
    res = refalrts::splice_evar( res, context[13], context[13] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & GenCommand/4 (/7 e.Indent#1/5 )/8 (/11 # CmdiRepeat/13 s.Direction#1/14 s.BracketNumber#1/15 s.Mode#1/16 s.VarNumber#1/17 s.SampleNumber#1/18 )/12 >/1
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
    context[13] = refalrts::ident_left(  & ident_CmdiRepeat<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Indent#1 as range 5
    if( ! refalrts::svar_left( context[14], context[9], context[10] ) )
      continue;
    if( ! refalrts::svar_left( context[15], context[9], context[10] ) )
      continue;
    if( ! refalrts::svar_left( context[16], context[9], context[10] ) )
      continue;
    if( ! refalrts::svar_left( context[17], context[9], context[10] ) )
      continue;
    if( ! refalrts::svar_left( context[18], context[9], context[10] ) )
      continue;
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Indent#1/5 AsIs: )/8 AsIs: (/11 } e.Indent#1/5/19 Tile{ HalfReuse: '{'/13 } 'r'/21 'e'/22 'f'/23 'a'/24 'l'/25 'r'/26 't'/27 's'/28 ':'/29 ':'/30 'i'/31 'c'/32 Tile{ AsIs: s.Mode#1/16 } 'R'/33 'e'/34 'p'/35 'e'/36 'a'/37 't'/38 Tile{ AsIs: </0 Reuse: & PrintDirection/4 } Tile{ AsIs: s.Direction#1/14 } >/39 ','/40 ' '/41 </42 & StrFromInt/43 Tile{ AsIs: s.VarNumber#1/17 } >/44 ','/45 ' '/46 </47 & StrFromInt/48 Tile{ AsIs: s.SampleNumber#1/18 HalfReuse: >/12 HalfReuse: ','/1 } ' '/49 </50 & StrFromInt/51 Tile{ AsIs: s.BracketNumber#1/15 } >/52 '}'/53 ','/54 )/55 Tile{ ]] }
    if (! refalrts::copy_evar(context[19], context[20], context[5], context[6]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[21], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[22], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[23], 'f' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[24], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[25], 'l' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[26], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[27], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[28], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[29], ':' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[30], ':' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[31], 'i' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[32], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[33], 'R' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[34], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[35], 'p' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[36], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[37], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[38], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[39] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[40], ',' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[41], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[42] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[43], StrFromInt, "StrFromInt" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[44] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[45], ',' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[46], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[47] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[48], StrFromInt, "StrFromInt" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[49], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[50] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[51], StrFromInt, "StrFromInt" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[52] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[53], '}' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[54], ',' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[55] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[13], '{' );
    refalrts::update_name( context[4], PrintDirection, "PrintDirection" );
    refalrts::reinit_close_call( context[12] );
    refalrts::reinit_char( context[1], ',' );
    refalrts::link_brackets( context[11], context[55] );
    refalrts::push_stack( context[52] );
    refalrts::push_stack( context[50] );
    refalrts::push_stack( context[12] );
    refalrts::push_stack( context[47] );
    refalrts::push_stack( context[44] );
    refalrts::push_stack( context[42] );
    refalrts::push_stack( context[39] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[52], context[55] );
    res = refalrts::splice_evar( res, context[15], context[15] );
    res = refalrts::splice_evar( res, context[49], context[51] );
    res = refalrts::splice_evar( res, context[18], context[1] );
    res = refalrts::splice_evar( res, context[44], context[48] );
    res = refalrts::splice_evar( res, context[17], context[17] );
    res = refalrts::splice_evar( res, context[39], context[43] );
    res = refalrts::splice_evar( res, context[14], context[14] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[33], context[38] );
    res = refalrts::splice_evar( res, context[16], context[16] );
    res = refalrts::splice_evar( res, context[21], context[32] );
    res = refalrts::splice_evar( res, context[13], context[13] );
    res = refalrts::splice_evar( res, context[19], context[20] );
    res = refalrts::splice_evar( res, context[7], context[11] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & GenCommand/4 (/7 e.Indent#1/5 )/8 (/11 # CmdiEPrepare/13 s.BracketNumber#1/14 s.VarNumber#1/15 )/12 >/1
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
    context[13] = refalrts::ident_left(  & ident_CmdiEPrepare<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Indent#1 as range 5
    if( ! refalrts::svar_left( context[14], context[9], context[10] ) )
      continue;
    if( ! refalrts::svar_left( context[15], context[9], context[10] ) )
      continue;
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Indent#1/5 AsIs: )/8 AsIs: (/11 } e.Indent#1/5/16 '{'/18 'r'/19 'e'/20 'f'/21 'a'/22 'l'/23 'r'/24 't'/25 's'/26 ':'/27 ':'/28 'i'/29 'c'/30 'E'/31 'P'/32 'r'/33 'e'/34 'p'/35 'a'/36 'r'/37 'e'/38 ','/39 ' '/40 '0'/41 ','/42 ' '/43 Tile{ AsIs: </0 Reuse: & StrFromInt/4 } Tile{ AsIs: s.VarNumber#1/15 HalfReuse: >/12 HalfReuse: ','/1 } ' '/44 </45 Tile{ HalfReuse: & StrFromInt/13 AsIs: s.BracketNumber#1/14 } >/46 '}'/47 ','/48 )/49 Tile{ ]] }
    if (! refalrts::copy_evar(context[16], context[17], context[5], context[6]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[18], '{' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[19], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[20], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[21], 'f' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[22], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[23], 'l' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[24], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[25], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[26], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[27], ':' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[28], ':' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[29], 'i' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[30], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[31], 'E' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[32], 'P' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[33], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[34], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[35], 'p' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[36], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[37], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[38], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[39], ',' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[40], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[41], '0' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[42], ',' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[43], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[44], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[45] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[46] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[47], '}' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[48], ',' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[49] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], StrFromInt, "StrFromInt" );
    refalrts::reinit_close_call( context[12] );
    refalrts::reinit_char( context[1], ',' );
    refalrts::reinit_name( context[13], StrFromInt, "StrFromInt" );
    refalrts::link_brackets( context[11], context[49] );
    refalrts::push_stack( context[46] );
    refalrts::push_stack( context[45] );
    refalrts::push_stack( context[12] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[46], context[49] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[44], context[45] );
    res = refalrts::splice_evar( res, context[15], context[1] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[18], context[43] );
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_evar( res, context[7], context[11] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & GenCommand/4 (/7 e.Indent#1/5 )/8 (/11 # CmdiEStart/13 s.BracketNumber#1/14 s.VarNumber#1/15 )/12 >/1
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
    context[13] = refalrts::ident_left(  & ident_CmdiEStart<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Indent#1 as range 5
    if( ! refalrts::svar_left( context[14], context[9], context[10] ) )
      continue;
    if( ! refalrts::svar_left( context[15], context[9], context[10] ) )
      continue;
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Indent#1/5 AsIs: )/8 AsIs: (/11 } e.Indent#1/5/16 '{'/18 'r'/19 'e'/20 'f'/21 'a'/22 'l'/23 'r'/24 't'/25 's'/26 ':'/27 ':'/28 'i'/29 'c'/30 'E'/31 'S'/32 't'/33 'a'/34 'r'/35 't'/36 ','/37 ' '/38 '0'/39 ','/40 ' '/41 Tile{ AsIs: </0 Reuse: & StrFromInt/4 } Tile{ AsIs: s.VarNumber#1/15 HalfReuse: >/12 HalfReuse: ','/1 } ' '/42 </43 Tile{ HalfReuse: & StrFromInt/13 AsIs: s.BracketNumber#1/14 } >/44 '}'/45 ','/46 )/47 Tile{ ]] }
    if (! refalrts::copy_evar(context[16], context[17], context[5], context[6]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[18], '{' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[19], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[20], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[21], 'f' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[22], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[23], 'l' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[24], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[25], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[26], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[27], ':' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[28], ':' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[29], 'i' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[30], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[31], 'E' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[32], 'S' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[33], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[34], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[35], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[36], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[37], ',' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[38], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[39], '0' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[40], ',' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[41], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[42], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[43] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[44] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[45], '}' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[46], ',' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[47] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], StrFromInt, "StrFromInt" );
    refalrts::reinit_close_call( context[12] );
    refalrts::reinit_char( context[1], ',' );
    refalrts::reinit_name( context[13], StrFromInt, "StrFromInt" );
    refalrts::link_brackets( context[11], context[47] );
    refalrts::push_stack( context[44] );
    refalrts::push_stack( context[43] );
    refalrts::push_stack( context[12] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[44], context[47] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[42], context[43] );
    res = refalrts::splice_evar( res, context[15], context[1] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[18], context[41] );
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_evar( res, context[7], context[11] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & GenCommand/4 (/7 e.Indent#1/5 )/8 (/11 # CmdiADT/13 s.Direction#1/14 s.BracketNumber#1/15 s.InnerBrackets#1/16 s.NameId#1/17 )/12 >/1
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
    context[13] = refalrts::ident_left(  & ident_CmdiADT<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Indent#1 as range 5
    if( ! refalrts::svar_left( context[14], context[9], context[10] ) )
      continue;
    if( ! refalrts::svar_left( context[15], context[9], context[10] ) )
      continue;
    if( ! refalrts::svar_left( context[16], context[9], context[10] ) )
      continue;
    if( ! refalrts::svar_left( context[17], context[9], context[10] ) )
      continue;
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Indent#1/5 AsIs: )/8 AsIs: (/11 } e.Indent#1/5/18 Tile{ HalfReuse: '{'/13 } 'r'/20 'e'/21 'f'/22 'a'/23 'l'/24 'r'/25 't'/26 's'/27 ':'/28 ':'/29 'i'/30 'c'/31 'A'/32 'D'/33 'T'/34 Tile{ AsIs: </0 Reuse: & PrintDirection/4 } Tile{ AsIs: s.Direction#1/14 } >/35 ','/36 ' '/37 </38 & StrFromInt/39 Tile{ AsIs: s.NameId#1/17 HalfReuse: >/12 HalfReuse: ','/1 } ' '/40 </41 & StrFromInt/42 Tile{ AsIs: s.InnerBrackets#1/16 } >/43 ','/44 ' '/45 </46 & StrFromInt/47 Tile{ AsIs: s.BracketNumber#1/15 } >/48 '}'/49 ','/50 )/51 Tile{ ]] }
    if (! refalrts::copy_evar(context[18], context[19], context[5], context[6]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[20], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[21], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[22], 'f' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[23], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[24], 'l' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[25], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[26], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[27], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[28], ':' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[29], ':' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[30], 'i' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[31], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[32], 'A' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[33], 'D' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[34], 'T' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[35] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[36], ',' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[37], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[38] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[39], StrFromInt, "StrFromInt" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[40], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[41] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[42], StrFromInt, "StrFromInt" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[43] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[44], ',' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[45], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[46] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[47], StrFromInt, "StrFromInt" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[48] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[49], '}' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[50], ',' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[51] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[13], '{' );
    refalrts::update_name( context[4], PrintDirection, "PrintDirection" );
    refalrts::reinit_close_call( context[12] );
    refalrts::reinit_char( context[1], ',' );
    refalrts::link_brackets( context[11], context[51] );
    refalrts::push_stack( context[48] );
    refalrts::push_stack( context[46] );
    refalrts::push_stack( context[43] );
    refalrts::push_stack( context[41] );
    refalrts::push_stack( context[12] );
    refalrts::push_stack( context[38] );
    refalrts::push_stack( context[35] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[48], context[51] );
    res = refalrts::splice_evar( res, context[15], context[15] );
    res = refalrts::splice_evar( res, context[43], context[47] );
    res = refalrts::splice_evar( res, context[16], context[16] );
    res = refalrts::splice_evar( res, context[40], context[42] );
    res = refalrts::splice_evar( res, context[17], context[1] );
    res = refalrts::splice_evar( res, context[35], context[39] );
    res = refalrts::splice_evar( res, context[14], context[14] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[20], context[34] );
    res = refalrts::splice_evar( res, context[13], context[13] );
    res = refalrts::splice_evar( res, context[18], context[19] );
    res = refalrts::splice_evar( res, context[7], context[11] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & GenCommand/4 (/7 e.Indent#1/5 )/8 (/11 # CmdiSave/13 s.OldBracketNumber#1/14 s.NewBracketNumber#1/15 )/12 >/1
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
    context[13] = refalrts::ident_left(  & ident_CmdiSave<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Indent#1 as range 5
    if( ! refalrts::svar_left( context[14], context[9], context[10] ) )
      continue;
    if( ! refalrts::svar_left( context[15], context[9], context[10] ) )
      continue;
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Indent#1/5 AsIs: )/8 AsIs: (/11 } e.Indent#1/5/16 '{'/18 'r'/19 'e'/20 'f'/21 'a'/22 'l'/23 'r'/24 't'/25 's'/26 ':'/27 ':'/28 'i'/29 'c'/30 'S'/31 'a'/32 'v'/33 'e'/34 ','/35 ' '/36 '0'/37 ','/38 ' '/39 Tile{ AsIs: </0 Reuse: & StrFromInt/4 } Tile{ AsIs: s.NewBracketNumber#1/15 HalfReuse: >/12 HalfReuse: ','/1 } ' '/40 </41 Tile{ HalfReuse: & StrFromInt/13 AsIs: s.OldBracketNumber#1/14 } >/42 '}'/43 ','/44 )/45 Tile{ ]] }
    if (! refalrts::copy_evar(context[16], context[17], context[5], context[6]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[18], '{' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[19], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[20], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[21], 'f' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[22], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[23], 'l' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[24], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[25], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[26], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[27], ':' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[28], ':' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[29], 'i' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[30], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[31], 'S' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[32], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[33], 'v' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[34], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[35], ',' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[36], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[37], '0' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[38], ',' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[39], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[40], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[41] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[42] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[43], '}' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[44], ',' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[45] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], StrFromInt, "StrFromInt" );
    refalrts::reinit_close_call( context[12] );
    refalrts::reinit_char( context[1], ',' );
    refalrts::reinit_name( context[13], StrFromInt, "StrFromInt" );
    refalrts::link_brackets( context[11], context[45] );
    refalrts::push_stack( context[42] );
    refalrts::push_stack( context[41] );
    refalrts::push_stack( context[12] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[42], context[45] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[40], context[41] );
    res = refalrts::splice_evar( res, context[15], context[1] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[18], context[39] );
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_evar( res, context[7], context[11] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & GenCommand/4 (/7 e.Indent#1/5 )/8 (/11 # CmdiChar/13 s.Direction#1/14 s.BracketNumber#1/15 s.Char#1/16 )/12 >/1
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
    context[13] = refalrts::ident_left(  & ident_CmdiChar<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Indent#1 as range 5
    if( ! refalrts::svar_left( context[14], context[9], context[10] ) )
      continue;
    if( ! refalrts::svar_left( context[15], context[9], context[10] ) )
      continue;
    if( ! refalrts::svar_left( context[16], context[9], context[10] ) )
      continue;
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Indent#1/5 AsIs: )/8 AsIs: (/11 } e.Indent#1/5/17 Tile{ HalfReuse: '{'/13 } 'r'/19 'e'/20 'f'/21 'a'/22 'l'/23 'r'/24 't'/25 's'/26 ':'/27 ':'/28 'i'/29 'c'/30 'C'/31 'h'/32 'a'/33 'r'/34 Tile{ AsIs: </0 Reuse: & PrintDirection/4 } Tile{ AsIs: s.Direction#1/14 } >/35 ','/36 ' '/37 '0'/38 ','/39 ' '/40 's'/41 't'/42 'a'/43 't'/44 'i'/45 'c'/46 '_'/47 'c'/48 'a'/49 's'/50 't'/51 '<'/52 'u'/53 'n'/54 's'/55 'i'/56 'g'/57 'n'/58 'e'/59 'd'/60 ' '/61 'c'/62 'h'/63 'a'/64 'r'/65 '>'/66 '('/67 '\''/68 </69 & Escape/70 Tile{ AsIs: s.Char#1/16 HalfReuse: >/12 HalfReuse: '\''/1 } ')'/71 ','/72 ' '/73 </74 & StrFromInt/75 Tile{ AsIs: s.BracketNumber#1/15 } >/76 '}'/77 ','/78 )/79 Tile{ ]] }
    if (! refalrts::copy_evar(context[17], context[18], context[5], context[6]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[19], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[20], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[21], 'f' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[22], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[23], 'l' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[24], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[25], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[26], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[27], ':' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[28], ':' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[29], 'i' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[30], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[31], 'C' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[32], 'h' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[33], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[34], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[35] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[36], ',' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[37], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[38], '0' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[39], ',' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[40], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[41], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[42], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[43], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[44], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[45], 'i' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[46], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[47], '_' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[48], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[49], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[50], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[51], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[52], '<' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[53], 'u' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[54], 'n' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[55], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[56], 'i' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[57], 'g' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[58], 'n' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[59], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[60], 'd' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[61], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[62], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[63], 'h' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[64], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[65], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[66], '>' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[67], '(' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[68], '\'' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[69] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[70], Escape, "Escape" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[71], ')' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[72], ',' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[73], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[74] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[75], StrFromInt, "StrFromInt" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[76] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[77], '}' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[78], ',' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[79] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[13], '{' );
    refalrts::update_name( context[4], PrintDirection, "PrintDirection" );
    refalrts::reinit_close_call( context[12] );
    refalrts::reinit_char( context[1], '\'' );
    refalrts::link_brackets( context[11], context[79] );
    refalrts::push_stack( context[76] );
    refalrts::push_stack( context[74] );
    refalrts::push_stack( context[12] );
    refalrts::push_stack( context[69] );
    refalrts::push_stack( context[35] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[76], context[79] );
    res = refalrts::splice_evar( res, context[15], context[15] );
    res = refalrts::splice_evar( res, context[71], context[75] );
    res = refalrts::splice_evar( res, context[16], context[1] );
    res = refalrts::splice_evar( res, context[35], context[70] );
    res = refalrts::splice_evar( res, context[14], context[14] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[19], context[34] );
    res = refalrts::splice_evar( res, context[13], context[13] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[7], context[11] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & GenCommand/4 (/7 e.Indent#1/5 )/8 (/11 # CmdiVar/13 s.Direction#1/14 s.BracketNumber#1/15 s.Mode#1/16 s.VarNumber#1/17 )/12 >/1
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
    context[13] = refalrts::ident_left(  & ident_CmdiVar<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Indent#1 as range 5
    if( ! refalrts::svar_left( context[14], context[9], context[10] ) )
      continue;
    if( ! refalrts::svar_left( context[15], context[9], context[10] ) )
      continue;
    if( ! refalrts::svar_left( context[16], context[9], context[10] ) )
      continue;
    if( ! refalrts::svar_left( context[17], context[9], context[10] ) )
      continue;
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Indent#1/5 AsIs: )/8 AsIs: (/11 } e.Indent#1/5/18 Tile{ HalfReuse: '{'/13 } 'r'/20 'e'/21 'f'/22 'a'/23 'l'/24 'r'/25 't'/26 's'/27 ':'/28 ':'/29 'i'/30 'c'/31 Tile{ AsIs: s.Mode#1/16 } 'V'/32 'a'/33 'r'/34 Tile{ AsIs: </0 Reuse: & PrintDirection/4 } Tile{ AsIs: s.Direction#1/14 } >/35 ','/36 ' '/37 '0'/38 ','/39 ' '/40 </41 & StrFromInt/42 Tile{ AsIs: s.VarNumber#1/17 HalfReuse: >/12 HalfReuse: ','/1 } ' '/43 </44 & StrFromInt/45 Tile{ AsIs: s.BracketNumber#1/15 } >/46 '}'/47 ','/48 )/49 Tile{ ]] }
    if (! refalrts::copy_evar(context[18], context[19], context[5], context[6]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[20], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[21], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[22], 'f' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[23], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[24], 'l' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[25], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[26], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[27], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[28], ':' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[29], ':' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[30], 'i' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[31], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[32], 'V' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[33], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[34], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[35] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[36], ',' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[37], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[38], '0' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[39], ',' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[40], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[41] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[42], StrFromInt, "StrFromInt" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[43], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[44] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[45], StrFromInt, "StrFromInt" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[46] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[47], '}' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[48], ',' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[49] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[13], '{' );
    refalrts::update_name( context[4], PrintDirection, "PrintDirection" );
    refalrts::reinit_close_call( context[12] );
    refalrts::reinit_char( context[1], ',' );
    refalrts::link_brackets( context[11], context[49] );
    refalrts::push_stack( context[46] );
    refalrts::push_stack( context[44] );
    refalrts::push_stack( context[12] );
    refalrts::push_stack( context[41] );
    refalrts::push_stack( context[35] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[46], context[49] );
    res = refalrts::splice_evar( res, context[15], context[15] );
    res = refalrts::splice_evar( res, context[43], context[45] );
    res = refalrts::splice_evar( res, context[17], context[1] );
    res = refalrts::splice_evar( res, context[35], context[42] );
    res = refalrts::splice_evar( res, context[14], context[14] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[32], context[34] );
    res = refalrts::splice_evar( res, context[16], context[16] );
    res = refalrts::splice_evar( res, context[20], context[31] );
    res = refalrts::splice_evar( res, context[13], context[13] );
    res = refalrts::splice_evar( res, context[18], context[19] );
    res = refalrts::splice_evar( res, context[7], context[11] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & GenCommand/4 (/7 e.Indent#1/5 )/8 (/11 # CmdiName/13 s.Direction#1/14 s.BracketNumber#1/15 s.NameId#1/16 )/12 >/1
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
    context[13] = refalrts::ident_left(  & ident_CmdiName<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Indent#1 as range 5
    if( ! refalrts::svar_left( context[14], context[9], context[10] ) )
      continue;
    if( ! refalrts::svar_left( context[15], context[9], context[10] ) )
      continue;
    if( ! refalrts::svar_left( context[16], context[9], context[10] ) )
      continue;
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Indent#1/5 AsIs: )/8 AsIs: (/11 } e.Indent#1/5/17 Tile{ HalfReuse: '{'/13 } 'r'/19 'e'/20 'f'/21 'a'/22 'l'/23 'r'/24 't'/25 's'/26 ':'/27 ':'/28 'i'/29 'c'/30 'F'/31 'u'/32 'n'/33 'c'/34 Tile{ AsIs: </0 Reuse: & PrintDirection/4 } Tile{ AsIs: s.Direction#1/14 } >/35 ','/36 ' '/37 '0'/38 ','/39 ' '/40 </41 & StrFromInt/42 Tile{ AsIs: s.NameId#1/16 HalfReuse: >/12 HalfReuse: ','/1 } ' '/43 </44 & StrFromInt/45 Tile{ AsIs: s.BracketNumber#1/15 } >/46 '}'/47 ','/48 )/49 Tile{ ]] }
    if (! refalrts::copy_evar(context[17], context[18], context[5], context[6]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[19], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[20], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[21], 'f' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[22], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[23], 'l' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[24], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[25], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[26], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[27], ':' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[28], ':' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[29], 'i' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[30], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[31], 'F' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[32], 'u' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[33], 'n' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[34], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[35] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[36], ',' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[37], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[38], '0' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[39], ',' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[40], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[41] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[42], StrFromInt, "StrFromInt" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[43], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[44] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[45], StrFromInt, "StrFromInt" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[46] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[47], '}' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[48], ',' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[49] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[13], '{' );
    refalrts::update_name( context[4], PrintDirection, "PrintDirection" );
    refalrts::reinit_close_call( context[12] );
    refalrts::reinit_char( context[1], ',' );
    refalrts::link_brackets( context[11], context[49] );
    refalrts::push_stack( context[46] );
    refalrts::push_stack( context[44] );
    refalrts::push_stack( context[12] );
    refalrts::push_stack( context[41] );
    refalrts::push_stack( context[35] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[46], context[49] );
    res = refalrts::splice_evar( res, context[15], context[15] );
    res = refalrts::splice_evar( res, context[43], context[45] );
    res = refalrts::splice_evar( res, context[16], context[1] );
    res = refalrts::splice_evar( res, context[35], context[42] );
    res = refalrts::splice_evar( res, context[14], context[14] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[19], context[34] );
    res = refalrts::splice_evar( res, context[13], context[13] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[7], context[11] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & GenCommand/4 (/7 e.Indent#1/5 )/8 (/11 # CmdiIdent/13 s.Direction#1/14 s.BracketNumber#1/15 s.NameId#1/16 )/12 >/1
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
    context[13] = refalrts::ident_left(  & ident_CmdiIdent<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Indent#1 as range 5
    if( ! refalrts::svar_left( context[14], context[9], context[10] ) )
      continue;
    if( ! refalrts::svar_left( context[15], context[9], context[10] ) )
      continue;
    if( ! refalrts::svar_left( context[16], context[9], context[10] ) )
      continue;
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Indent#1/5 AsIs: )/8 AsIs: (/11 } e.Indent#1/5/17 Tile{ HalfReuse: '{'/13 } 'r'/19 'e'/20 'f'/21 'a'/22 'l'/23 'r'/24 't'/25 's'/26 ':'/27 ':'/28 'i'/29 'c'/30 'I'/31 'd'/32 'e'/33 'n'/34 't'/35 Tile{ AsIs: </0 Reuse: & PrintDirection/4 } Tile{ AsIs: s.Direction#1/14 } >/36 ','/37 ' '/38 '0'/39 ','/40 ' '/41 </42 & StrFromInt/43 Tile{ AsIs: s.NameId#1/16 HalfReuse: >/12 HalfReuse: ','/1 } ' '/44 </45 & StrFromInt/46 Tile{ AsIs: s.BracketNumber#1/15 } >/47 '}'/48 ','/49 )/50 Tile{ ]] }
    if (! refalrts::copy_evar(context[17], context[18], context[5], context[6]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[19], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[20], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[21], 'f' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[22], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[23], 'l' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[24], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[25], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[26], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[27], ':' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[28], ':' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[29], 'i' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[30], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[31], 'I' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[32], 'd' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[33], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[34], 'n' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[35], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[36] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[37], ',' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[38], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[39], '0' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[40], ',' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[41], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[42] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[43], StrFromInt, "StrFromInt" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[44], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[45] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[46], StrFromInt, "StrFromInt" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[47] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[48], '}' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[49], ',' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[50] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[13], '{' );
    refalrts::update_name( context[4], PrintDirection, "PrintDirection" );
    refalrts::reinit_close_call( context[12] );
    refalrts::reinit_char( context[1], ',' );
    refalrts::link_brackets( context[11], context[50] );
    refalrts::push_stack( context[47] );
    refalrts::push_stack( context[45] );
    refalrts::push_stack( context[12] );
    refalrts::push_stack( context[42] );
    refalrts::push_stack( context[36] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[47], context[50] );
    res = refalrts::splice_evar( res, context[15], context[15] );
    res = refalrts::splice_evar( res, context[44], context[46] );
    res = refalrts::splice_evar( res, context[16], context[1] );
    res = refalrts::splice_evar( res, context[36], context[43] );
    res = refalrts::splice_evar( res, context[14], context[14] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[19], context[35] );
    res = refalrts::splice_evar( res, context[13], context[13] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[7], context[11] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & GenCommand/4 (/7 e.Indent#1/5 )/8 (/11 # CmdiNum/13 s.Direction#1/14 s.BracketNumber#1/15 s.Number#1/16 )/12 >/1
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
    context[13] = refalrts::ident_left(  & ident_CmdiNum<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Indent#1 as range 5
    if( ! refalrts::svar_left( context[14], context[9], context[10] ) )
      continue;
    if( ! refalrts::svar_left( context[15], context[9], context[10] ) )
      continue;
    if( ! refalrts::svar_left( context[16], context[9], context[10] ) )
      continue;
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Indent#1/5 AsIs: )/8 AsIs: (/11 } e.Indent#1/5/17 Tile{ HalfReuse: '{'/13 } 'r'/19 'e'/20 'f'/21 'a'/22 'l'/23 'r'/24 't'/25 's'/26 ':'/27 ':'/28 'i'/29 'c'/30 'N'/31 'u'/32 'm'/33 Tile{ AsIs: </0 Reuse: & PrintDirection/4 } Tile{ AsIs: s.Direction#1/14 } >/34 ','/35 ' '/36 '0'/37 ','/38 ' '/39 </40 & StrFromInt/41 Tile{ AsIs: s.Number#1/16 HalfReuse: >/12 HalfReuse: ','/1 } ' '/42 </43 & StrFromInt/44 Tile{ AsIs: s.BracketNumber#1/15 } >/45 '}'/46 ','/47 )/48 Tile{ ]] }
    if (! refalrts::copy_evar(context[17], context[18], context[5], context[6]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[19], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[20], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[21], 'f' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[22], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[23], 'l' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[24], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[25], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[26], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[27], ':' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[28], ':' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[29], 'i' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[30], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[31], 'N' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[32], 'u' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[33], 'm' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[34] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[35], ',' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[36], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[37], '0' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[38], ',' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[39], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[40] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[41], StrFromInt, "StrFromInt" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[42], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[43] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[44], StrFromInt, "StrFromInt" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[45] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[46], '}' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[47], ',' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[48] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[13], '{' );
    refalrts::update_name( context[4], PrintDirection, "PrintDirection" );
    refalrts::reinit_close_call( context[12] );
    refalrts::reinit_char( context[1], ',' );
    refalrts::link_brackets( context[11], context[48] );
    refalrts::push_stack( context[45] );
    refalrts::push_stack( context[43] );
    refalrts::push_stack( context[12] );
    refalrts::push_stack( context[40] );
    refalrts::push_stack( context[34] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[45], context[48] );
    res = refalrts::splice_evar( res, context[15], context[15] );
    res = refalrts::splice_evar( res, context[42], context[44] );
    res = refalrts::splice_evar( res, context[16], context[1] );
    res = refalrts::splice_evar( res, context[34], context[41] );
    res = refalrts::splice_evar( res, context[14], context[14] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[19], context[33] );
    res = refalrts::splice_evar( res, context[13], context[13] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[7], context[11] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & GenCommand/4 (/7 e.Indent#1/5 )/8 (/11 # CmdiHugeNum/13 s.Direction#1/14 s.BracketNumber#1/15 s.Number#1/16 )/12 >/1
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
    context[13] = refalrts::ident_left(  & ident_CmdiHugeNum<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Indent#1 as range 5
    if( ! refalrts::svar_left( context[14], context[9], context[10] ) )
      continue;
    if( ! refalrts::svar_left( context[15], context[9], context[10] ) )
      continue;
    if( ! refalrts::svar_left( context[16], context[9], context[10] ) )
      continue;
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Indent#1/5 AsIs: )/8 AsIs: (/11 } e.Indent#1/5/17 Tile{ HalfReuse: '{'/13 } 'r'/19 'e'/20 'f'/21 'a'/22 'l'/23 'r'/24 't'/25 's'/26 ':'/27 ':'/28 'i'/29 'c'/30 'H'/31 'u'/32 'g'/33 'e'/34 'N'/35 'u'/36 'm'/37 Tile{ AsIs: </0 Reuse: & PrintDirection/4 } Tile{ AsIs: s.Direction#1/14 } >/38 ','/39 ' '/40 '0'/41 ','/42 ' '/43 </44 & StrFromInt/45 Tile{ AsIs: s.Number#1/16 HalfReuse: >/12 HalfReuse: ','/1 } ' '/46 </47 & StrFromInt/48 Tile{ AsIs: s.BracketNumber#1/15 } >/49 '}'/50 ','/51 )/52 Tile{ ]] }
    if (! refalrts::copy_evar(context[17], context[18], context[5], context[6]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[19], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[20], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[21], 'f' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[22], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[23], 'l' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[24], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[25], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[26], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[27], ':' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[28], ':' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[29], 'i' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[30], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[31], 'H' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[32], 'u' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[33], 'g' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[34], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[35], 'N' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[36], 'u' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[37], 'm' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[38] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[39], ',' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[40], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[41], '0' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[42], ',' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[43], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[44] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[45], StrFromInt, "StrFromInt" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[46], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[47] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[48], StrFromInt, "StrFromInt" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[49] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[50], '}' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[51], ',' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[52] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[13], '{' );
    refalrts::update_name( context[4], PrintDirection, "PrintDirection" );
    refalrts::reinit_close_call( context[12] );
    refalrts::reinit_char( context[1], ',' );
    refalrts::link_brackets( context[11], context[52] );
    refalrts::push_stack( context[49] );
    refalrts::push_stack( context[47] );
    refalrts::push_stack( context[12] );
    refalrts::push_stack( context[44] );
    refalrts::push_stack( context[38] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[49], context[52] );
    res = refalrts::splice_evar( res, context[15], context[15] );
    res = refalrts::splice_evar( res, context[46], context[48] );
    res = refalrts::splice_evar( res, context[16], context[1] );
    res = refalrts::splice_evar( res, context[38], context[45] );
    res = refalrts::splice_evar( res, context[14], context[14] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[19], context[37] );
    res = refalrts::splice_evar( res, context[13], context[13] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[7], context[11] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & GenCommand/4 (/7 e.Indent#1/5 )/8 (/11 # CmdInitRAA/13 )/12 >/1
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
    context[13] = refalrts::ident_left(  & ident_CmdInitRAA<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Indent#1 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } (/14 e.Indent#1/5/15 ' '/17 Tile{ HalfReuse: ' '/0 HalfReuse: )/4 AsIs: (/7 AsIs: e.Indent#1/5 HalfReuse: 's'/8 HalfReuse: 't'/11 HalfReuse: 'a'/13 HalfReuse: 't'/12 HalfReuse: 'i'/1 } 'c'/18 ' '/19 'c'/20 'o'/21 'n'/22 's'/23 't'/24 ' '/25 'r'/26 'e'/27 'f'/28 'a'/29 'l'/30 'r'/31 't'/32 's'/33 ':'/34 ':'/35 'R'/36 'A'/37 'S'/38 'L'/39 'C'/40 'o'/41 'm'/42 'm'/43 'a'/44 'n'/45 'd'/46 ' '/47 'r'/48 'a'/49 'a'/50 '['/51 ']'/52 ' '/53 '='/54 ' '/55 '{'/56 )/57 Tile{ ]] }
    if( ! refalrts::alloc_open_bracket( context[14] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[15], context[16], context[5], context[6]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[17], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[18], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[19], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[20], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[21], 'o' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[22], 'n' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[23], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[24], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[25], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[26], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[27], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[28], 'f' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[29], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[30], 'l' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[31], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[32], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[33], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[34], ':' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[35], ':' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[36], 'R' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[37], 'A' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[38], 'S' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[39], 'L' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[40], 'C' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[41], 'o' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[42], 'm' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[43], 'm' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[44], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[45], 'n' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[46], 'd' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[47], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[48], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[49], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[50], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[51], '[' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[52], ']' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[53], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[54], '=' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[55], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[56], '{' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[57] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[0], ' ' );
    refalrts::reinit_close_bracket( context[4] );
    refalrts::reinit_char( context[8], 's' );
    refalrts::reinit_char( context[11], 't' );
    refalrts::reinit_char( context[13], 'a' );
    refalrts::reinit_char( context[12], 't' );
    refalrts::reinit_char( context[1], 'i' );
    refalrts::link_brackets( context[7], context[57] );
    refalrts::link_brackets( context[14], context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[18], context[57] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    res = refalrts::splice_evar( res, context[14], context[17] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & GenCommand/4 (/7 e.Indent#1/5 ' '/10 ' '/9 )/8 (/13 # CmdFinRAA/15 )/14 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::char_right( ' ', context[5], context[6] );
    if( ! context[9] )
      continue;
    context[10] = refalrts::char_right( ' ', context[5], context[6] );
    if( ! context[10] )
      continue;
    context[11] = 0;
    context[12] = 0;
    context[13] = refalrts::brackets_left( context[11], context[12], context[2], context[3] );
    if( ! context[13] )
      continue;
    refalrts::bracket_pointers(context[13], context[14]);
    context[15] = refalrts::ident_left(  & ident_CmdFinRAA<int>::name, context[11], context[12] );
    if( ! context[15] )
      continue;
    if( ! refalrts::empty_seq( context[11], context[12] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Indent#1 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 } e.Indent#1/5/16 Tile{ HalfReuse: )/4 AsIs: (/7 AsIs: e.Indent#1/5 AsIs: ' '/10 AsIs: ' '/9 HalfReuse: '{'/8 HalfReuse: 'r'/13 HalfReuse: 'e'/15 HalfReuse: 'f'/14 HalfReuse: 'a'/1 } 'l'/18 'r'/19 't'/20 's'/21 ':'/22 ':'/23 'i'/24 'c'/25 'E'/26 'n'/27 'd'/28 ','/29 ' '/30 '0'/31 ','/32 ' '/33 '0'/34 ','/35 ' '/36 '0'/37 '}'/38 )/39 (/40 e.Indent#1/5/41 '}'/43 ';'/44 )/45 Tile{ ]] }
    if (! refalrts::copy_evar(context[16], context[17], context[5], context[6]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[18], 'l' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[19], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[20], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[21], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[22], ':' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[23], ':' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[24], 'i' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[25], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[26], 'E' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[27], 'n' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[28], 'd' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[29], ',' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[30], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[31], '0' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[32], ',' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[33], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[34], '0' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[35], ',' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[36], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[37], '0' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[38], '}' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[39] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[40] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[41], context[42], context[5], context[6]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[43], '}' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[44], ';' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[45] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_close_bracket( context[4] );
    refalrts::reinit_char( context[8], '{' );
    refalrts::reinit_char( context[13], 'r' );
    refalrts::reinit_char( context[15], 'e' );
    refalrts::reinit_char( context[14], 'f' );
    refalrts::reinit_char( context[1], 'a' );
    refalrts::link_brackets( context[40], context[45] );
    refalrts::link_brackets( context[7], context[39] );
    refalrts::link_brackets( context[0], context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[18], context[45] );
    res = refalrts::splice_evar( res, context[4], context[1] );
    res = refalrts::splice_evar( res, context[16], context[17] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & GenCommand/4 (/7 e.Indent#1/5 )/8 (/11 # CmdiReserveStack/13 0/14 )/12 >/1
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
    context[13] = refalrts::ident_left(  & ident_CmdiReserveStack<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    context[14] = refalrts::number_left( 0UL, context[9], context[10] );
    if( ! context[14] )
      continue;
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Indent#1 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 } e.Indent#1/5/15 Tile{ HalfReuse: )/4 AsIs: (/7 AsIs: e.Indent#1/5 HalfReuse: 'i'/8 HalfReuse: 'n'/11 HalfReuse: 't'/13 HalfReuse: ' '/14 HalfReuse: 'o'/12 HalfReuse: 'p'/1 } 'e'/17 'n'/18 '_'/19 'e'/20 '_'/21 's'/22 't'/23 'a'/24 'c'/25 'k'/26 '['/27 '1'/28 ']'/29 ';'/30 )/31 Tile{ ]] }
    if (! refalrts::copy_evar(context[15], context[16], context[5], context[6]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[17], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[18], 'n' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[19], '_' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[20], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[21], '_' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[22], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[23], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[24], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[25], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[26], 'k' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[27], '[' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[28], '1' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[29], ']' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[30], ';' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[31] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_close_bracket( context[4] );
    refalrts::reinit_char( context[8], 'i' );
    refalrts::reinit_char( context[11], 'n' );
    refalrts::reinit_char( context[13], 't' );
    refalrts::reinit_char( context[14], ' ' );
    refalrts::reinit_char( context[12], 'o' );
    refalrts::reinit_char( context[1], 'p' );
    refalrts::link_brackets( context[7], context[31] );
    refalrts::link_brackets( context[0], context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[17], context[31] );
    res = refalrts::splice_evar( res, context[4], context[1] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & GenCommand/4 (/7 e.Indent#1/5 )/8 (/11 # CmdiReserveStack/13 s.Depth#1/14 )/12 >/1
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
    context[13] = refalrts::ident_left(  & ident_CmdiReserveStack<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Indent#1 as range 5
    if( ! refalrts::svar_left( context[14], context[9], context[10] ) )
      continue;
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Indent#1/5 AsIs: )/8 AsIs: (/11 } e.Indent#1/5/15 Tile{ HalfReuse: 'i'/4 } 'n'/17 't'/18 ' '/19 'o'/20 'p'/21 'e'/22 'n'/23 '_'/24 'e'/25 '_'/26 's'/27 't'/28 'a'/29 'c'/30 'k'/31 '['/32 Tile{ AsIs: </0 } Tile{ HalfReuse: & StrFromInt/13 AsIs: s.Depth#1/14 HalfReuse: >/12 HalfReuse: ']'/1 } ';'/33 )/34 Tile{ ]] }
    if (! refalrts::copy_evar(context[15], context[16], context[5], context[6]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[17], 'n' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[18], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[19], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[20], 'o' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[21], 'p' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[22], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[23], 'n' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[24], '_' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[25], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[26], '_' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[27], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[28], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[29], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[30], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[31], 'k' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[32], '[' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[33], ';' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[34] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[4], 'i' );
    refalrts::reinit_name( context[13], StrFromInt, "StrFromInt" );
    refalrts::reinit_close_call( context[12] );
    refalrts::reinit_char( context[1], ']' );
    refalrts::link_brackets( context[11], context[34] );
    refalrts::push_stack( context[12] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[33], context[34] );
    res = refalrts::splice_evar( res, context[13], context[1] );
    res = refalrts::splice_evar( res, context[0], context[0] );
    res = refalrts::splice_evar( res, context[17], context[32] );
    res = refalrts::splice_evar( res, context[4], context[4] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[7], context[11] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & GenCommand/4 (/7 e.Indent#1/5 )/8 (/11 # CmdiRunInterpret/13 )/12 >/1
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
    context[13] = refalrts::ident_left(  & ident_CmdiRunInterpret<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Indent#1 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } (/14 e.Indent#1/5/15 )/17 (/18 e.Indent#1/5/19 'r'/21 'e'/22 'f'/23 'a'/24 'l'/25 'r'/26 't'/27 's'/28 ':'/29 ':'/30 'F'/31 'n'/32 'R'/33 'e'/34 's'/35 'u'/36 'l'/37 't'/38 ' '/39 'r'/40 'e'/41 's'/42 ' '/43 '='/44 ' '/45 'r'/46 'e'/47 'f'/48 'a'/49 'l'/50 'r'/51 't'/52 's'/53 ':'/54 ':'/55 'i'/56 'n'/57 't'/58 'e'/59 'r'/60 'p'/61 'r'/62 'e'/63 't'/64 '_'/65 'a'/66 'r'/67 'r'/68 'a'/69 'y'/70 Tile{ HalfReuse: '('/0 HalfReuse: )/4 AsIs: (/7 AsIs: e.Indent#1/5 HalfReuse: ' '/8 HalfReuse: ' '/11 HalfReuse: 'r'/13 HalfReuse: 'a'/12 HalfReuse: 'a'/1 } ','/71 ' '/72 'c'/73 'o'/74 'n'/75 't'/76 'e'/77 'x'/78 't'/79 ','/80 ' '/81 'a'/82 'r'/83 'g'/84 '_'/85 'b'/86 'e'/87 'g'/88 'i'/89 'n'/90 ','/91 ' '/92 'a'/93 'r'/94 'g'/95 '_'/96 'e'/97 'n'/98 'd'/99 ','/100 )/101 (/102 e.Indent#1/5/103 ' '/105 ' '/106 'f'/107 'u'/108 'n'/109 'c'/110 't'/111 'i'/112 'o'/113 'n'/114 's'/115 ','/116 ' '/117 'i'/118 'd'/119 'e'/120 'n'/121 't'/122 's'/123 ','/124 ' '/125 'n'/126 'u'/127 'm'/128 'b'/129 'e'/130 'r'/131 's'/132 ','/133 ' '/134 's'/135 't'/136 'r'/137 'i'/138 'n'/139 'g'/140 's'/141 ','/142 ' '/143 'o'/144 'p'/145 'e'/146 'n'/147 '_'/148 'e'/149 '_'/150 's'/151 't'/152 'a'/153 'c'/154 'k'/155 )/156 (/157 e.Indent#1/5/158 ')'/160 ';'/161 )/162 (/163 e.Indent#1/5/164 'r'/166 'e'/167 't'/168 'u'/169 'r'/170 'n'/171 ' '/172 'r'/173 'e'/174 's'/175 ';'/176 )/177 Tile{ ]] }
    if( ! refalrts::alloc_open_bracket( context[14] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[15], context[16], context[5], context[6]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[17] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[18] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[19], context[20], context[5], context[6]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[21], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[22], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[23], 'f' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[24], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[25], 'l' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[26], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[27], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[28], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[29], ':' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[30], ':' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[31], 'F' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[32], 'n' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[33], 'R' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[34], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[35], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[36], 'u' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[37], 'l' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[38], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[39], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[40], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[41], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[42], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[43], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[44], '=' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[45], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[46], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[47], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[48], 'f' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[49], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[50], 'l' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[51], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[52], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[53], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[54], ':' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[55], ':' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[56], 'i' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[57], 'n' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[58], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[59], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[60], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[61], 'p' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[62], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[63], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[64], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[65], '_' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[66], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[67], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[68], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[69], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[70], 'y' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[71], ',' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[72], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[73], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[74], 'o' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[75], 'n' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[76], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[77], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[78], 'x' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[79], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[80], ',' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[81], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[82], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[83], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[84], 'g' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[85], '_' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[86], 'b' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[87], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[88], 'g' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[89], 'i' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[90], 'n' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[91], ',' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[92], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[93], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[94], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[95], 'g' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[96], '_' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[97], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[98], 'n' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[99], 'd' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[100], ',' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[101] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[102] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[103], context[104], context[5], context[6]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[105], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[106], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[107], 'f' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[108], 'u' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[109], 'n' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[110], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[111], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[112], 'i' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[113], 'o' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[114], 'n' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[115], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[116], ',' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[117], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[118], 'i' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[119], 'd' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[120], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[121], 'n' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[122], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[123], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[124], ',' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[125], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[126], 'n' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[127], 'u' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[128], 'm' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[129], 'b' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[130], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[131], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[132], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[133], ',' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[134], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[135], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[136], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[137], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[138], 'i' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[139], 'n' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[140], 'g' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[141], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[142], ',' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[143], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[144], 'o' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[145], 'p' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[146], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[147], 'n' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[148], '_' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[149], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[150], '_' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[151], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[152], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[153], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[154], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[155], 'k' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[156] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[157] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[158], context[159], context[5], context[6]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[160], ')' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[161], ';' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[162] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[163] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[164], context[165], context[5], context[6]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[166], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[167], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[168], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[169], 'u' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[170], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[171], 'n' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[172], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[173], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[174], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[175], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[176], ';' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[177] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[0], '(' );
    refalrts::reinit_close_bracket( context[4] );
    refalrts::reinit_char( context[8], ' ' );
    refalrts::reinit_char( context[11], ' ' );
    refalrts::reinit_char( context[13], 'r' );
    refalrts::reinit_char( context[12], 'a' );
    refalrts::reinit_char( context[1], 'a' );
    refalrts::link_brackets( context[163], context[177] );
    refalrts::link_brackets( context[157], context[162] );
    refalrts::link_brackets( context[102], context[156] );
    refalrts::link_brackets( context[7], context[101] );
    refalrts::link_brackets( context[18], context[4] );
    refalrts::link_brackets( context[14], context[17] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[71], context[177] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    res = refalrts::splice_evar( res, context[14], context[70] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & GenCommand/4 (/7 e.Indent#1/5 )/8 (/11 # CmdiEmptyResult/13 )/12 >/1
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
    context[13] = refalrts::ident_left(  & ident_CmdiEmptyResult<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Indent#1 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 } e.Indent#1/5/14 Tile{ HalfReuse: )/4 AsIs: (/7 AsIs: e.Indent#1/5 HalfReuse: '{'/8 HalfReuse: 'r'/11 HalfReuse: 'e'/13 HalfReuse: 'f'/12 HalfReuse: 'a'/1 } 'l'/16 'r'/17 't'/18 's'/19 ':'/20 ':'/21 'i'/22 'c'/23 'E'/24 'm'/25 'p'/26 't'/27 'y'/28 'R'/29 'e'/30 's'/31 'u'/32 'l'/33 't'/34 ','/35 ' '/36 '0'/37 ','/38 ' '/39 '0'/40 ','/41 ' '/42 '0'/43 '}'/44 ','/45 )/46 Tile{ ]] }
    if (! refalrts::copy_evar(context[14], context[15], context[5], context[6]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[16], 'l' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[17], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[18], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[19], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[20], ':' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[21], ':' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[22], 'i' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[23], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[24], 'E' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[25], 'm' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[26], 'p' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[27], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[28], 'y' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[29], 'R' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[30], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[31], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[32], 'u' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[33], 'l' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[34], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[35], ',' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[36], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[37], '0' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[38], ',' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[39], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[40], '0' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[41], ',' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[42], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[43], '0' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[44], '}' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[45], ',' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[46] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_close_bracket( context[4] );
    refalrts::reinit_char( context[8], '{' );
    refalrts::reinit_char( context[11], 'r' );
    refalrts::reinit_char( context[13], 'e' );
    refalrts::reinit_char( context[12], 'f' );
    refalrts::reinit_char( context[1], 'a' );
    refalrts::link_brackets( context[7], context[46] );
    refalrts::link_brackets( context[0], context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[16], context[46] );
    res = refalrts::splice_evar( res, context[4], context[1] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & GenCommand/4 (/7 e.Indent#1/5 )/8 (/11 # CmdiBracket/13 s.Direction#1/14 s.Num#1/15 s.NumRanges#1/16 )/12 >/1
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
    context[13] = refalrts::ident_left(  & ident_CmdiBracket<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Indent#1 as range 5
    if( ! refalrts::svar_left( context[14], context[9], context[10] ) )
      continue;
    if( ! refalrts::svar_left( context[15], context[9], context[10] ) )
      continue;
    if( ! refalrts::svar_left( context[16], context[9], context[10] ) )
      continue;
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Indent#1/5 AsIs: )/8 AsIs: (/11 } e.Indent#1/5/17 Tile{ HalfReuse: '{'/13 } 'r'/19 'e'/20 'f'/21 'a'/22 'l'/23 'r'/24 't'/25 's'/26 ':'/27 ':'/28 'i'/29 'c'/30 'B'/31 'r'/32 'a'/33 'c'/34 'k'/35 'e'/36 't'/37 Tile{ AsIs: </0 Reuse: & PrintDirection/4 } Tile{ AsIs: s.Direction#1/14 } >/38 ','/39 ' '/40 '0'/41 ','/42 ' '/43 </44 & StrFromInt/45 Tile{ AsIs: s.NumRanges#1/16 HalfReuse: >/12 HalfReuse: ','/1 } ' '/46 </47 & StrFromInt/48 Tile{ AsIs: s.Num#1/15 } >/49 '}'/50 ','/51 )/52 Tile{ ]] }
    if (! refalrts::copy_evar(context[17], context[18], context[5], context[6]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[19], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[20], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[21], 'f' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[22], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[23], 'l' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[24], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[25], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[26], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[27], ':' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[28], ':' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[29], 'i' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[30], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[31], 'B' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[32], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[33], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[34], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[35], 'k' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[36], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[37], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[38] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[39], ',' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[40], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[41], '0' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[42], ',' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[43], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[44] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[45], StrFromInt, "StrFromInt" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[46], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[47] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[48], StrFromInt, "StrFromInt" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[49] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[50], '}' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[51], ',' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[52] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[13], '{' );
    refalrts::update_name( context[4], PrintDirection, "PrintDirection" );
    refalrts::reinit_close_call( context[12] );
    refalrts::reinit_char( context[1], ',' );
    refalrts::link_brackets( context[11], context[52] );
    refalrts::push_stack( context[49] );
    refalrts::push_stack( context[47] );
    refalrts::push_stack( context[12] );
    refalrts::push_stack( context[44] );
    refalrts::push_stack( context[38] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[49], context[52] );
    res = refalrts::splice_evar( res, context[15], context[15] );
    res = refalrts::splice_evar( res, context[46], context[48] );
    res = refalrts::splice_evar( res, context[16], context[1] );
    res = refalrts::splice_evar( res, context[38], context[45] );
    res = refalrts::splice_evar( res, context[14], context[14] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[19], context[37] );
    res = refalrts::splice_evar( res, context[13], context[13] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[7], context[11] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & GenCommand/4 (/7 e.Indent#1/5 )/8 (/11 # CmdiEmpty/13 s.Num#1/14 )/12 >/1
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
    context[13] = refalrts::ident_left(  & ident_CmdiEmpty<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Indent#1 as range 5
    if( ! refalrts::svar_left( context[14], context[9], context[10] ) )
      continue;
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Indent#1/5 AsIs: )/8 AsIs: (/11 } e.Indent#1/5/15 Tile{ HalfReuse: '{'/4 } 'r'/17 'e'/18 'f'/19 'a'/20 'l'/21 'r'/22 't'/23 's'/24 ':'/25 ':'/26 'i'/27 'c'/28 'E'/29 'm'/30 'p'/31 't'/32 'y'/33 ','/34 ' '/35 '0'/36 ','/37 ' '/38 '0'/39 ','/40 ' '/41 Tile{ AsIs: </0 } Tile{ HalfReuse: & StrFromInt/13 AsIs: s.Num#1/14 HalfReuse: >/12 HalfReuse: '}'/1 } ','/42 )/43 Tile{ ]] }
    if (! refalrts::copy_evar(context[15], context[16], context[5], context[6]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[17], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[18], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[19], 'f' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[20], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[21], 'l' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[22], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[23], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[24], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[25], ':' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[26], ':' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[27], 'i' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[28], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[29], 'E' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[30], 'm' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[31], 'p' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[32], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[33], 'y' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[34], ',' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[35], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[36], '0' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[37], ',' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[38], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[39], '0' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[40], ',' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[41], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[42], ',' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[43] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[4], '{' );
    refalrts::reinit_name( context[13], StrFromInt, "StrFromInt" );
    refalrts::reinit_close_call( context[12] );
    refalrts::reinit_char( context[1], '}' );
    refalrts::link_brackets( context[11], context[43] );
    refalrts::push_stack( context[12] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[42], context[43] );
    res = refalrts::splice_evar( res, context[13], context[1] );
    res = refalrts::splice_evar( res, context[0], context[0] );
    res = refalrts::splice_evar( res, context[17], context[41] );
    res = refalrts::splice_evar( res, context[4], context[4] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[7], context[11] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & GenCommand/4 (/7 e.Indent#1/5 )/8 (/11 # CmdiAllocateElem/13 s.ElemNumber#1/14 s.Type#1/15 e.Info#1/9 )/12 >/1
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
    context[13] = refalrts::ident_left(  & ident_CmdiAllocateElem<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Indent#1 as range 5
    if( ! refalrts::svar_left( context[14], context[9], context[10] ) )
      continue;
    if( ! refalrts::svar_left( context[15], context[9], context[10] ) )
      continue;
    // closed e.Info#1 as range 9

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  s.ElemNumber#1/14 s.Type#1/15 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } (/16 e.Indent#1/5/17 Tile{ AsIs: )/12 } Tile{ AsIs: </0 Reuse: & PrintInterpretAllocateElem/4 AsIs: (/7 AsIs: e.Indent#1/5 AsIs: )/8 HalfReuse: s.ElemNumber1 #14/11 HalfReuse: s.Type1 #15/13 } Tile{ AsIs: e.Info#1/9 } Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_bracket( context[16] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[17], context[18], context[5], context[6]))
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], PrintInterpretAllocateElem, "PrintInterpretAllocateElem" );
    refalrts::reinit_svar( context[11], context[14] );
    refalrts::reinit_svar( context[13], context[15] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[16], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[0], context[13] );
    res = refalrts::splice_evar( res, context[12], context[12] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[16], context[16] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & GenCommand/4 (/7 e.Indent#1/5 )/8 (/11 # CmdArrCopy/13 'e'/14 s.Target#1/15 s.Sample#1/16 )/12 >/1
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
    context[13] = refalrts::ident_left(  & ident_CmdArrCopy<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    context[14] = refalrts::char_left( 'e', context[9], context[10] );
    if( ! context[14] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Indent#1 as range 5
    if( ! refalrts::svar_left( context[15], context[9], context[10] ) )
      continue;
    if( ! refalrts::svar_left( context[16], context[9], context[10] ) )
      continue;
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 } e.Indent#1/5/17 Tile{ HalfReuse: )/4 AsIs: (/7 AsIs: e.Indent#1/5 HalfReuse: '{'/8 HalfReuse: 'r'/11 HalfReuse: 'e'/13 Reuse: 'f'/14 } 'a'/19 'l'/20 'r'/21 't'/22 's'/23 ':'/24 ':'/25 'i'/26 'c'/27 'C'/28 'o'/29 'p'/30 'y'/31 'E'/32 'V'/33 'a'/34 'r'/35 ','/36 ' '/37 </38 & StrFromInt/39 Tile{ AsIs: s.Target#1/15 } >/40 ','/41 ' '/42 </43 & StrFromInt/44 Tile{ AsIs: s.Sample#1/16 HalfReuse: >/12 HalfReuse: ','/1 } ' '/45 '0'/46 '}'/47 ','/48 )/49 Tile{ ]] }
    if (! refalrts::copy_evar(context[17], context[18], context[5], context[6]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[19], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[20], 'l' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[21], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[22], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[23], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[24], ':' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[25], ':' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[26], 'i' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[27], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[28], 'C' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[29], 'o' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[30], 'p' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[31], 'y' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[32], 'E' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[33], 'V' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[34], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[35], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[36], ',' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[37], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[38] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[39], StrFromInt, "StrFromInt" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[40] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[41], ',' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[42], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[43] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[44], StrFromInt, "StrFromInt" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[45], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[46], '0' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[47], '}' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[48], ',' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[49] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_close_bracket( context[4] );
    refalrts::reinit_char( context[8], '{' );
    refalrts::reinit_char( context[11], 'r' );
    refalrts::reinit_char( context[13], 'e' );
    refalrts::update_char( context[14], 'f' );
    refalrts::reinit_close_call( context[12] );
    refalrts::reinit_char( context[1], ',' );
    refalrts::link_brackets( context[7], context[49] );
    refalrts::push_stack( context[12] );
    refalrts::push_stack( context[43] );
    refalrts::push_stack( context[40] );
    refalrts::push_stack( context[38] );
    refalrts::link_brackets( context[0], context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[45], context[49] );
    res = refalrts::splice_evar( res, context[16], context[1] );
    res = refalrts::splice_evar( res, context[40], context[44] );
    res = refalrts::splice_evar( res, context[15], context[15] );
    res = refalrts::splice_evar( res, context[19], context[39] );
    res = refalrts::splice_evar( res, context[4], context[14] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & GenCommand/4 (/7 e.Indent#1/5 )/8 (/11 # CmdArrCopy/13 s.Mode#1/14 s.Target#1/15 s.Sample#1/16 )/12 >/1
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
    context[13] = refalrts::ident_left(  & ident_CmdArrCopy<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Indent#1 as range 5
    if( ! refalrts::svar_left( context[14], context[9], context[10] ) )
      continue;
    if( ! refalrts::svar_left( context[15], context[9], context[10] ) )
      continue;
    if( ! refalrts::svar_left( context[16], context[9], context[10] ) )
      continue;
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  s.Mode#1/14 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Indent#1/5 AsIs: )/8 AsIs: (/11 } e.Indent#1/5/17 Tile{ HalfReuse: '{'/13 } 'r'/19 'e'/20 'f'/21 'a'/22 'l'/23 'r'/24 't'/25 's'/26 ':'/27 ':'/28 'i'/29 'c'/30 'C'/31 'o'/32 'p'/33 'y'/34 'S'/35 'T'/36 'V'/37 'a'/38 'r'/39 ','/40 ' '/41 Tile{ AsIs: </0 Reuse: & StrFromInt/4 } Tile{ AsIs: s.Target#1/15 } >/42 ','/43 ' '/44 </45 & StrFromInt/46 Tile{ AsIs: s.Sample#1/16 HalfReuse: >/12 HalfReuse: ','/1 } ' '/47 '0'/48 '}'/49 ','/50 )/51 Tile{ ]] }
    if (! refalrts::copy_evar(context[17], context[18], context[5], context[6]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[19], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[20], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[21], 'f' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[22], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[23], 'l' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[24], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[25], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[26], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[27], ':' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[28], ':' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[29], 'i' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[30], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[31], 'C' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[32], 'o' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[33], 'p' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[34], 'y' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[35], 'S' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[36], 'T' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[37], 'V' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[38], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[39], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[40], ',' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[41], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[42] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[43], ',' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[44], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[45] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[46], StrFromInt, "StrFromInt" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[47], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[48], '0' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[49], '}' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[50], ',' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[51] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[13], '{' );
    refalrts::update_name( context[4], StrFromInt, "StrFromInt" );
    refalrts::reinit_close_call( context[12] );
    refalrts::reinit_char( context[1], ',' );
    refalrts::link_brackets( context[11], context[51] );
    refalrts::push_stack( context[12] );
    refalrts::push_stack( context[45] );
    refalrts::push_stack( context[42] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[47], context[51] );
    res = refalrts::splice_evar( res, context[16], context[1] );
    res = refalrts::splice_evar( res, context[42], context[46] );
    res = refalrts::splice_evar( res, context[15], context[15] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[19], context[41] );
    res = refalrts::splice_evar( res, context[13], context[13] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[7], context[11] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & GenCommand/4 (/7 e.Indent#1/5 )/8 (/11 # CmdArrSplice/13 'e'/14 s.Offset#1/15 )/12 >/1
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
    context[13] = refalrts::ident_left(  & ident_CmdArrSplice<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    context[14] = refalrts::char_left( 'e', context[9], context[10] );
    if( ! context[14] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Indent#1 as range 5
    if( ! refalrts::svar_left( context[15], context[9], context[10] ) )
      continue;
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 } e.Indent#1/5/16 Tile{ HalfReuse: )/4 AsIs: (/7 AsIs: e.Indent#1/5 HalfReuse: '{'/8 HalfReuse: 'r'/11 HalfReuse: 'e'/13 Reuse: 'f'/14 } 'a'/18 'l'/19 'r'/20 't'/21 's'/22 ':'/23 ':'/24 'i'/25 'c'/26 'S'/27 'p'/28 'l'/29 'i'/30 'c'/31 'e'/32 'E'/33 'V'/34 'a'/35 'r'/36 ','/37 ' '/38 '0'/39 ','/40 ' '/41 '0'/42 ','/43 ' '/44 </45 & StrFromInt/46 Tile{ AsIs: s.Offset#1/15 HalfReuse: >/12 HalfReuse: '}'/1 } ','/47 )/48 Tile{ ]] }
    if (! refalrts::copy_evar(context[16], context[17], context[5], context[6]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[18], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[19], 'l' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[20], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[21], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[22], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[23], ':' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[24], ':' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[25], 'i' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[26], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[27], 'S' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[28], 'p' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[29], 'l' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[30], 'i' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[31], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[32], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[33], 'E' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[34], 'V' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[35], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[36], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[37], ',' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[38], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[39], '0' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[40], ',' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[41], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[42], '0' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[43], ',' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[44], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[45] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[46], StrFromInt, "StrFromInt" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[47], ',' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[48] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_close_bracket( context[4] );
    refalrts::reinit_char( context[8], '{' );
    refalrts::reinit_char( context[11], 'r' );
    refalrts::reinit_char( context[13], 'e' );
    refalrts::update_char( context[14], 'f' );
    refalrts::reinit_close_call( context[12] );
    refalrts::reinit_char( context[1], '}' );
    refalrts::link_brackets( context[7], context[48] );
    refalrts::push_stack( context[12] );
    refalrts::push_stack( context[45] );
    refalrts::link_brackets( context[0], context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[47], context[48] );
    res = refalrts::splice_evar( res, context[15], context[1] );
    res = refalrts::splice_evar( res, context[18], context[46] );
    res = refalrts::splice_evar( res, context[4], context[14] );
    res = refalrts::splice_evar( res, context[16], context[17] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & GenCommand/4 (/7 e.Indent#1/5 )/8 (/11 # CmdArrSplice/13 s.Mode#1/14 s.Offset#1/15 )/12 >/1
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
    context[13] = refalrts::ident_left(  & ident_CmdArrSplice<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Indent#1 as range 5
    if( ! refalrts::svar_left( context[14], context[9], context[10] ) )
      continue;
    if( ! refalrts::svar_left( context[15], context[9], context[10] ) )
      continue;
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  s.Mode#1/14 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Indent#1/5 AsIs: )/8 AsIs: (/11 } e.Indent#1/5/16 Tile{ HalfReuse: '{'/13 } 'r'/18 'e'/19 'f'/20 'a'/21 'l'/22 'r'/23 't'/24 's'/25 ':'/26 ':'/27 'i'/28 'c'/29 'S'/30 'p'/31 'l'/32 'i'/33 'c'/34 'e'/35 'S'/36 'T'/37 'V'/38 'a'/39 'r'/40 ','/41 ' '/42 '0'/43 ','/44 ' '/45 '0'/46 ','/47 ' '/48 Tile{ AsIs: </0 Reuse: & StrFromInt/4 } Tile{ AsIs: s.Offset#1/15 HalfReuse: >/12 HalfReuse: '}'/1 } ','/49 )/50 Tile{ ]] }
    if (! refalrts::copy_evar(context[16], context[17], context[5], context[6]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[18], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[19], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[20], 'f' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[21], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[22], 'l' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[23], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[24], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[25], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[26], ':' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[27], ':' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[28], 'i' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[29], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[30], 'S' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[31], 'p' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[32], 'l' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[33], 'i' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[34], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[35], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[36], 'S' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[37], 'T' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[38], 'V' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[39], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[40], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[41], ',' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[42], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[43], '0' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[44], ',' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[45], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[46], '0' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[47], ',' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[48], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[49], ',' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[50] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[13], '{' );
    refalrts::update_name( context[4], StrFromInt, "StrFromInt" );
    refalrts::reinit_close_call( context[12] );
    refalrts::reinit_char( context[1], '}' );
    refalrts::link_brackets( context[11], context[50] );
    refalrts::push_stack( context[12] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[49], context[50] );
    res = refalrts::splice_evar( res, context[15], context[1] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[18], context[48] );
    res = refalrts::splice_evar( res, context[13], context[13] );
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_evar( res, context[7], context[11] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & GenCommand/4 (/7 e.Indent#1/5 )/8 (/11 # CmdSpliceElem/13 s.ElemNumber#1/14 )/12 >/1
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
    context[13] = refalrts::ident_left(  & ident_CmdSpliceElem<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Indent#1 as range 5
    if( ! refalrts::svar_left( context[14], context[9], context[10] ) )
      continue;
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Indent#1/5 AsIs: )/8 AsIs: (/11 } e.Indent#1/5/15 Tile{ HalfReuse: '{'/4 } 'r'/17 'e'/18 'f'/19 'a'/20 'l'/21 'r'/22 't'/23 's'/24 ':'/25 ':'/26 'i'/27 'c'/28 'S'/29 'p'/30 'l'/31 'i'/32 'c'/33 'e'/34 'E'/35 'l'/36 'e'/37 'm'/38 ','/39 ' '/40 '0'/41 ','/42 ' '/43 '0'/44 ','/45 ' '/46 Tile{ AsIs: </0 } Tile{ HalfReuse: & StrFromInt/13 AsIs: s.ElemNumber#1/14 HalfReuse: >/12 HalfReuse: '}'/1 } ','/47 )/48 Tile{ ]] }
    if (! refalrts::copy_evar(context[15], context[16], context[5], context[6]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[17], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[18], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[19], 'f' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[20], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[21], 'l' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[22], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[23], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[24], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[25], ':' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[26], ':' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[27], 'i' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[28], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[29], 'S' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[30], 'p' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[31], 'l' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[32], 'i' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[33], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[34], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[35], 'E' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[36], 'l' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[37], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[38], 'm' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[39], ',' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[40], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[41], '0' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[42], ',' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[43], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[44], '0' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[45], ',' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[46], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[47], ',' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[48] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[4], '{' );
    refalrts::reinit_name( context[13], StrFromInt, "StrFromInt" );
    refalrts::reinit_close_call( context[12] );
    refalrts::reinit_char( context[1], '}' );
    refalrts::link_brackets( context[11], context[48] );
    refalrts::push_stack( context[12] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[47], context[48] );
    res = refalrts::splice_evar( res, context[13], context[1] );
    res = refalrts::splice_evar( res, context[0], context[0] );
    res = refalrts::splice_evar( res, context[17], context[46] );
    res = refalrts::splice_evar( res, context[4], context[4] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[7], context[11] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & GenCommand/4 (/7 e.Indent#1/5 )/8 (/11 # CmdSpliceRange/13 s.ElemNumber#1/14 )/12 >/1
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
    context[13] = refalrts::ident_left(  & ident_CmdSpliceRange<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Indent#1 as range 5
    if( ! refalrts::svar_left( context[14], context[9], context[10] ) )
      continue;
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Indent#1/5 AsIs: )/8 AsIs: (/11 } e.Indent#1/5/15 Tile{ HalfReuse: '{'/4 } 'r'/17 'e'/18 'f'/19 'a'/20 'l'/21 'r'/22 't'/23 's'/24 ':'/25 ':'/26 'i'/27 'c'/28 'S'/29 'p'/30 'l'/31 'i'/32 'c'/33 'e'/34 'R'/35 'a'/36 'n'/37 'g'/38 'e'/39 ','/40 ' '/41 '0'/42 ','/43 ' '/44 '0'/45 ','/46 ' '/47 Tile{ AsIs: </0 } Tile{ HalfReuse: & StrFromInt/13 AsIs: s.ElemNumber#1/14 HalfReuse: >/12 HalfReuse: '}'/1 } ','/48 )/49 Tile{ ]] }
    if (! refalrts::copy_evar(context[15], context[16], context[5], context[6]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[17], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[18], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[19], 'f' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[20], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[21], 'l' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[22], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[23], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[24], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[25], ':' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[26], ':' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[27], 'i' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[28], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[29], 'S' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[30], 'p' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[31], 'l' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[32], 'i' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[33], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[34], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[35], 'R' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[36], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[37], 'n' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[38], 'g' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[39], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[40], ',' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[41], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[42], '0' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[43], ',' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[44], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[45], '0' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[46], ',' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[47], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[48], ',' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[49] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[4], '{' );
    refalrts::reinit_name( context[13], StrFromInt, "StrFromInt" );
    refalrts::reinit_close_call( context[12] );
    refalrts::reinit_char( context[1], '}' );
    refalrts::link_brackets( context[11], context[49] );
    refalrts::push_stack( context[12] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[48], context[49] );
    res = refalrts::splice_evar( res, context[13], context[1] );
    res = refalrts::splice_evar( res, context[0], context[0] );
    res = refalrts::splice_evar( res, context[17], context[47] );
    res = refalrts::splice_evar( res, context[4], context[4] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[7], context[11] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & GenCommand/4 (/7 e.Indent#1/5 )/8 (/11 # CmdiLinkBrackets/13 s.Left#1/14 s.Right#1/15 )/12 >/1
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
    context[13] = refalrts::ident_left(  & ident_CmdiLinkBrackets<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Indent#1 as range 5
    if( ! refalrts::svar_left( context[14], context[9], context[10] ) )
      continue;
    if( ! refalrts::svar_left( context[15], context[9], context[10] ) )
      continue;
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Indent#1/5 AsIs: )/8 AsIs: (/11 } e.Indent#1/5/16 Tile{ HalfReuse: '{'/13 } 'r'/18 'e'/19 'f'/20 'a'/21 'l'/22 'r'/23 't'/24 's'/25 ':'/26 ':'/27 'i'/28 'c'/29 'L'/30 'i'/31 'n'/32 'k'/33 'B'/34 'r'/35 'a'/36 'c'/37 'k'/38 'e'/39 't'/40 's'/41 ','/42 ' '/43 Tile{ AsIs: </0 Reuse: & StrFromInt/4 } Tile{ AsIs: s.Left#1/14 } >/44 ','/45 ' '/46 </47 & StrFromInt/48 Tile{ AsIs: s.Right#1/15 HalfReuse: >/12 HalfReuse: ','/1 } ' '/49 '0'/50 '}'/51 ','/52 )/53 Tile{ ]] }
    if (! refalrts::copy_evar(context[16], context[17], context[5], context[6]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[18], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[19], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[20], 'f' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[21], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[22], 'l' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[23], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[24], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[25], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[26], ':' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[27], ':' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[28], 'i' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[29], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[30], 'L' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[31], 'i' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[32], 'n' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[33], 'k' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[34], 'B' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[35], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[36], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[37], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[38], 'k' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[39], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[40], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[41], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[42], ',' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[43], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[44] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[45], ',' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[46], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[47] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[48], StrFromInt, "StrFromInt" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[49], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[50], '0' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[51], '}' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[52], ',' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[53] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[13], '{' );
    refalrts::update_name( context[4], StrFromInt, "StrFromInt" );
    refalrts::reinit_close_call( context[12] );
    refalrts::reinit_char( context[1], ',' );
    refalrts::link_brackets( context[11], context[53] );
    refalrts::push_stack( context[12] );
    refalrts::push_stack( context[47] );
    refalrts::push_stack( context[44] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[49], context[53] );
    res = refalrts::splice_evar( res, context[15], context[1] );
    res = refalrts::splice_evar( res, context[44], context[48] );
    res = refalrts::splice_evar( res, context[14], context[14] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[18], context[43] );
    res = refalrts::splice_evar( res, context[13], context[13] );
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_evar( res, context[7], context[11] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & GenCommand/4 (/7 e.Indent#1/5 )/8 (/11 # CmdiPushStack/13 s.ElemNumber#1/14 )/12 >/1
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
    context[13] = refalrts::ident_left(  & ident_CmdiPushStack<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Indent#1 as range 5
    if( ! refalrts::svar_left( context[14], context[9], context[10] ) )
      continue;
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Indent#1/5 AsIs: )/8 AsIs: (/11 } e.Indent#1/5/15 Tile{ HalfReuse: '{'/4 } 'r'/17 'e'/18 'f'/19 'a'/20 'l'/21 'r'/22 't'/23 's'/24 ':'/25 ':'/26 'i'/27 'c'/28 'P'/29 'u'/30 's'/31 'h'/32 'S'/33 't'/34 'a'/35 'c'/36 'k'/37 ','/38 ' '/39 '0'/40 ','/41 ' '/42 '0'/43 ','/44 ' '/45 Tile{ AsIs: </0 } Tile{ HalfReuse: & StrFromInt/13 AsIs: s.ElemNumber#1/14 HalfReuse: >/12 HalfReuse: '}'/1 } ','/46 )/47 Tile{ ]] }
    if (! refalrts::copy_evar(context[15], context[16], context[5], context[6]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[17], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[18], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[19], 'f' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[20], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[21], 'l' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[22], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[23], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[24], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[25], ':' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[26], ':' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[27], 'i' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[28], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[29], 'P' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[30], 'u' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[31], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[32], 'h' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[33], 'S' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[34], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[35], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[36], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[37], 'k' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[38], ',' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[39], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[40], '0' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[41], ',' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[42], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[43], '0' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[44], ',' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[45], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[46], ',' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[47] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[4], '{' );
    refalrts::reinit_name( context[13], StrFromInt, "StrFromInt" );
    refalrts::reinit_close_call( context[12] );
    refalrts::reinit_char( context[1], '}' );
    refalrts::link_brackets( context[11], context[47] );
    refalrts::push_stack( context[12] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[46], context[47] );
    res = refalrts::splice_evar( res, context[13], context[1] );
    res = refalrts::splice_evar( res, context[0], context[0] );
    res = refalrts::splice_evar( res, context[17], context[45] );
    res = refalrts::splice_evar( res, context[4], context[4] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[7], context[11] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & GenCommand/4 (/7 e.Indent#1/5 )/8 (/11 # CmdFail/13 )/12 >/1
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
    context[13] = refalrts::ident_left(  & ident_CmdFail<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Indent#1 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & GenCommand/4 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Indent#1/5 AsIs: )/8 HalfReuse: </11 HalfReuse: & GenReturn/13 HalfReuse: # Fail/12 } e.Indent#1/5/14 Tile{ AsIs: >/1 ]] }
    if (! refalrts::copy_evar(context[14], context[15], context[5], context[6]))
      return refalrts::cNoMemory;
    refalrts::reinit_open_call( context[11] );
    refalrts::reinit_name( context[13], GenReturn, "GenReturn" );
    refalrts::reinit_ident( context[12], & ident_Fail<int>::name );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[11] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[14], context[15] );
    res = refalrts::splice_evar( res, context[7], context[12] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & GenCommand/4 (/7 e.Indent#1/5 )/8 (/11 # CmdiOnFailGoTo/13 s.Offset#1/14 )/12 >/1
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
    context[13] = refalrts::ident_left(  & ident_CmdiOnFailGoTo<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Indent#1 as range 5
    if( ! refalrts::svar_left( context[14], context[9], context[10] ) )
      continue;
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Indent#1/5 AsIs: )/8 AsIs: (/11 } e.Indent#1/5/15 Tile{ HalfReuse: '{'/4 } 'r'/17 'e'/18 'f'/19 'a'/20 'l'/21 'r'/22 't'/23 's'/24 ':'/25 ':'/26 'i'/27 'c'/28 'O'/29 'n'/30 'F'/31 'a'/32 'i'/33 'l'/34 'G'/35 'o'/36 'T'/37 'o'/38 ','/39 ' '/40 '+'/41 Tile{ AsIs: </0 } Tile{ HalfReuse: & StrFromInt/13 AsIs: s.Offset#1/14 HalfReuse: >/12 HalfReuse: ','/1 } ' '/42 '0'/43 ','/44 ' '/45 '0'/46 '}'/47 ','/48 )/49 Tile{ ]] }
    if (! refalrts::copy_evar(context[15], context[16], context[5], context[6]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[17], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[18], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[19], 'f' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[20], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[21], 'l' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[22], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[23], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[24], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[25], ':' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[26], ':' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[27], 'i' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[28], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[29], 'O' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[30], 'n' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[31], 'F' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[32], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[33], 'i' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[34], 'l' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[35], 'G' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[36], 'o' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[37], 'T' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[38], 'o' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[39], ',' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[40], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[41], '+' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[42], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[43], '0' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[44], ',' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[45], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[46], '0' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[47], '}' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[48], ',' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[49] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[4], '{' );
    refalrts::reinit_name( context[13], StrFromInt, "StrFromInt" );
    refalrts::reinit_close_call( context[12] );
    refalrts::reinit_char( context[1], ',' );
    refalrts::link_brackets( context[11], context[49] );
    refalrts::push_stack( context[12] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[42], context[49] );
    res = refalrts::splice_evar( res, context[13], context[1] );
    res = refalrts::splice_evar( res, context[0], context[0] );
    res = refalrts::splice_evar( res, context[17], context[41] );
    res = refalrts::splice_evar( res, context[4], context[4] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[7], context[11] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & GenCommand/4 (/7 e.Indent#1/5 )/8 (/11 # CmdiFail/13 )/12 >/1
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
    context[13] = refalrts::ident_left(  & ident_CmdiFail<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Indent#1 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 } e.Indent#1/5/14 Tile{ HalfReuse: )/4 AsIs: (/7 AsIs: e.Indent#1/5 HalfReuse: '{'/8 HalfReuse: 'r'/11 HalfReuse: 'e'/13 HalfReuse: 'f'/12 HalfReuse: 'a'/1 } 'l'/16 'r'/17 't'/18 's'/19 ':'/20 ':'/21 'i'/22 'c'/23 'F'/24 'a'/25 'i'/26 'l'/27 ','/28 ' '/29 '0'/30 ','/31 ' '/32 '0'/33 ','/34 ' '/35 '0'/36 '}'/37 ','/38 )/39 Tile{ ]] }
    if (! refalrts::copy_evar(context[14], context[15], context[5], context[6]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[16], 'l' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[17], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[18], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[19], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[20], ':' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[21], ':' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[22], 'i' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[23], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[24], 'F' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[25], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[26], 'i' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[27], 'l' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[28], ',' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[29], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[30], '0' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[31], ',' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[32], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[33], '0' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[34], ',' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[35], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[36], '0' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[37], '}' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[38], ',' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[39] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_close_bracket( context[4] );
    refalrts::reinit_char( context[8], '{' );
    refalrts::reinit_char( context[11], 'r' );
    refalrts::reinit_char( context[13], 'e' );
    refalrts::reinit_char( context[12], 'f' );
    refalrts::reinit_char( context[1], 'a' );
    refalrts::link_brackets( context[7], context[39] );
    refalrts::link_brackets( context[0], context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[16], context[39] );
    res = refalrts::splice_evar( res, context[4], context[1] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & GenCommand/4 (/7 e.Indent#1/5 )/8 (/11 # CmdiReturnResult/13 )/12 >/1
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
    context[13] = refalrts::ident_left(  & ident_CmdiReturnResult<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Indent#1 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 } e.Indent#1/5/14 Tile{ HalfReuse: )/4 AsIs: (/7 AsIs: e.Indent#1/5 HalfReuse: '{'/8 HalfReuse: 'r'/11 HalfReuse: 'e'/13 HalfReuse: 'f'/12 HalfReuse: 'a'/1 } 'l'/16 'r'/17 't'/18 's'/19 ':'/20 ':'/21 'i'/22 'c'/23 'R'/24 'e'/25 't'/26 'u'/27 'r'/28 'n'/29 'R'/30 'e'/31 's'/32 'u'/33 'l'/34 't'/35 ','/36 ' '/37 '0'/38 ','/39 ' '/40 '0'/41 ','/42 ' '/43 '0'/44 '}'/45 ','/46 )/47 Tile{ ]] }
    if (! refalrts::copy_evar(context[14], context[15], context[5], context[6]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[16], 'l' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[17], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[18], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[19], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[20], ':' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[21], ':' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[22], 'i' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[23], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[24], 'R' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[25], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[26], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[27], 'u' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[28], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[29], 'n' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[30], 'R' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[31], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[32], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[33], 'u' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[34], 'l' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[35], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[36], ',' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[37], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[38], '0' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[39], ',' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[40], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[41], '0' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[42], ',' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[43], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[44], '0' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[45], '}' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[46], ',' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[47] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_close_bracket( context[4] );
    refalrts::reinit_char( context[8], '{' );
    refalrts::reinit_char( context[11], 'r' );
    refalrts::reinit_char( context[13], 'e' );
    refalrts::reinit_char( context[12], 'f' );
    refalrts::reinit_char( context[1], 'a' );
    refalrts::link_brackets( context[7], context[47] );
    refalrts::link_brackets( context[0], context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[16], context[47] );
    res = refalrts::splice_evar( res, context[4], context[1] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & GenCommand/4 (/7 e.Indent#1/5 )/8 (/11 # CmdiInitB0/13 )/12 >/1
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
  context[13] = refalrts::ident_left(  & ident_CmdiInitB0<int>::name, context[9], context[10] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[9], context[10] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Indent#1 as range 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ HalfReuse: (/0 } e.Indent#1/5/14 Tile{ HalfReuse: )/4 AsIs: (/7 AsIs: e.Indent#1/5 HalfReuse: '{'/8 HalfReuse: 'r'/11 HalfReuse: 'e'/13 HalfReuse: 'f'/12 HalfReuse: 'a'/1 } 'l'/16 'r'/17 't'/18 's'/19 ':'/20 ':'/21 'i'/22 'c'/23 'I'/24 'n'/25 'i'/26 't'/27 'B'/28 '0'/29 ','/30 ' '/31 '0'/32 ','/33 ' '/34 '0'/35 ','/36 ' '/37 '0'/38 '}'/39 ','/40 )/41 Tile{ ]] }
  if (! refalrts::copy_evar(context[14], context[15], context[5], context[6]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[16], 'l' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[17], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[18], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[19], 's' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[20], ':' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[21], ':' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[22], 'i' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[23], 'c' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[24], 'I' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[25], 'n' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[26], 'i' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[27], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[28], 'B' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[29], '0' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[30], ',' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[31], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[32], '0' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[33], ',' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[34], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[35], '0' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[36], ',' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[37], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[38], '0' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[39], '}' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[40], ',' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[41] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_close_bracket( context[4] );
  refalrts::reinit_char( context[8], '{' );
  refalrts::reinit_char( context[11], 'r' );
  refalrts::reinit_char( context[13], 'e' );
  refalrts::reinit_char( context[12], 'f' );
  refalrts::reinit_char( context[1], 'a' );
  refalrts::link_brackets( context[7], context[41] );
  refalrts::link_brackets( context[0], context[4] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[16], context[41] );
  res = refalrts::splice_evar( res, context[4], context[1] );
  res = refalrts::splice_evar( res, context[14], context[15] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult Escape(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & Escape/4 s.Char#1/5 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & EscapeChar/4 AsIs: s.Char#1/5 AsIs: >/1 ]] }
  refalrts::update_name( context[4], EscapeChar, "EscapeChar" );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult EscapeString(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & EscapeString/4 e.String#1/2 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.String#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Map/0 Reuse: & EscapeChar/4 AsIs: e.String#1/2 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[5] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_name( context[0], Map, "Map" );
  refalrts::update_name( context[4], EscapeChar, "EscapeChar" );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[5] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult PrintLength(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & PrintLength/4 e.String#1/2 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.String#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & DoPrintLength/0 HalfReuse: 0/4 AsIs: e.String#1/2 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[5] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_name( context[0], DoPrintLength, "DoPrintLength" );
  refalrts::reinit_number( context[4], 0UL );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[5] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult DoPrintLength(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & DoPrintLength/4 s.Length#1/5 s.Char#1/6 e.Tail#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
      continue;
    // closed e.Tail#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  s.Char#1/6 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoPrintLength/4 } </7 & Inc/8 Tile{ AsIs: s.Length#1/5 } >/9 Tile{ AsIs: e.Tail#1/2 } Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_call( context[7] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[8], Inc, "Inc" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[9] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[9] );
    refalrts::push_stack( context[7] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[9], context[9] );
    res = refalrts::splice_evar( res, context[5], context[5] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & DoPrintLength/4 s.Length#1/5 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & StrFromInt/4 AsIs: s.Length#1/5 AsIs: >/1 ]] }
  refalrts::update_name( context[4], StrFromInt, "StrFromInt" );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult PrintString(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & PrintString/4 e.String#1/2 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.String#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } '\"'/5 </6 & EscapeString/7 e.String#1/2/8 >/10 '\"'/11 ','/12 ' '/13 Tile{ AsIs: </0 Reuse: & PrintLength/4 AsIs: e.String#1/2 AsIs: >/1 ]] }
  if( ! refalrts::alloc_char( context[5], '\"' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[7], EscapeString, "EscapeString" ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[8], context[9], context[2], context[3]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[11], '\"' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[12], ',' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[13], ' ' ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], PrintLength, "PrintLength" );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[10] );
  refalrts::push_stack( context[6] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[13] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult PrintMatchChar(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 23 elems
  refalrts::Iter context[23];
  refalrts::zeros( context, 23 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & PrintMatchChar/4 (/7 e.Indent#1/5 )/8 s.Direction#1/9 s.BracketNumber#1/10 s.Char#1/11 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.Indent#1 as range 5
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[11], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & PrintMatch/4 AsIs: (/7 AsIs: e.Indent#1/5 AsIs: )/8 AsIs: s.Direction#1/9 AsIs: s.BracketNumber#1/10 } (/12 'c'/13 'h'/14 'a'/15 'r'/16 )/17 '\''/18 </19 & Escape/20 Tile{ AsIs: s.Char#1/11 AsIs: >/1 } '\''/21 >/22 Tile{ ]] }
  if( ! refalrts::alloc_open_bracket( context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[13], 'c' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[14], 'h' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[15], 'a' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[16], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[17] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[18], '\'' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[19] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[20], Escape, "Escape" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[21], '\'' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[22] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], PrintMatch, "PrintMatch" );
  refalrts::push_stack( context[22] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[19] );
  refalrts::link_brackets( context[12], context[17] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[21], context[22] );
  res = refalrts::splice_evar( res, context[11], context[1] );
  res = refalrts::splice_evar( res, context[12], context[20] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult PrintMatchCharSave(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 24 elems
  refalrts::Iter context[24];
  refalrts::zeros( context, 24 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & PrintMatchCharSave/4 (/7 e.Indent#1/5 )/8 s.Offset#1/9 s.Direction#1/10 s.BracketNumber#1/11 s.Char#1/12 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.Indent#1 as range 5
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[11], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[12], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & PrintMatchSave/4 AsIs: (/7 AsIs: e.Indent#1/5 AsIs: )/8 AsIs: s.Offset#1/9 AsIs: s.Direction#1/10 AsIs: s.BracketNumber#1/11 } (/13 'c'/14 'h'/15 'a'/16 'r'/17 )/18 '\''/19 </20 & Escape/21 Tile{ AsIs: s.Char#1/12 AsIs: >/1 } '\''/22 >/23 Tile{ ]] }
  if( ! refalrts::alloc_open_bracket( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[14], 'c' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[15], 'h' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[16], 'a' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[17], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[18] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[19], '\'' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[20] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[21], Escape, "Escape" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[22], '\'' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[23] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], PrintMatchSave, "PrintMatchSave" );
  refalrts::push_stack( context[23] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[20] );
  refalrts::link_brackets( context[13], context[18] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[22], context[23] );
  res = refalrts::splice_evar( res, context[12], context[1] );
  res = refalrts::splice_evar( res, context[13], context[21] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult PrintMatchNumber(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 25 elems
  refalrts::Iter context[25];
  refalrts::zeros( context, 25 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & PrintMatchNumber/4 (/7 e.Indent#1/5 )/8 s.Direction#1/9 s.BracketNumber#1/10 s.Number#1/11 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.Indent#1 as range 5
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[11], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & PrintMatch/4 AsIs: (/7 AsIs: e.Indent#1/5 AsIs: )/8 AsIs: s.Direction#1/9 AsIs: s.BracketNumber#1/10 } (/12 'n'/13 'u'/14 'm'/15 'b'/16 'e'/17 'r'/18 )/19 </20 & StrFromInt/21 Tile{ AsIs: s.Number#1/11 AsIs: >/1 } 'U'/22 'L'/23 >/24 Tile{ ]] }
  if( ! refalrts::alloc_open_bracket( context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[13], 'n' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[14], 'u' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[15], 'm' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[16], 'b' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[17], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[18], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[19] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[20] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[21], StrFromInt, "StrFromInt" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[22], 'U' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[23], 'L' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[24] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], PrintMatch, "PrintMatch" );
  refalrts::push_stack( context[24] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[20] );
  refalrts::link_brackets( context[12], context[19] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[22], context[24] );
  res = refalrts::splice_evar( res, context[11], context[1] );
  res = refalrts::splice_evar( res, context[12], context[21] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult PrintMatchNumberSave(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 26 elems
  refalrts::Iter context[26];
  refalrts::zeros( context, 26 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & PrintMatchNumberSave/4 (/7 e.Indent#1/5 )/8 s.Offset#1/9 s.Direction#1/10 s.BracketNumber#1/11 s.Number#1/12 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.Indent#1 as range 5
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[11], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[12], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & PrintMatchSave/4 AsIs: (/7 AsIs: e.Indent#1/5 AsIs: )/8 AsIs: s.Offset#1/9 AsIs: s.Direction#1/10 AsIs: s.BracketNumber#1/11 } (/13 'n'/14 'u'/15 'm'/16 'b'/17 'e'/18 'r'/19 )/20 </21 & StrFromInt/22 Tile{ AsIs: s.Number#1/12 AsIs: >/1 } 'U'/23 'L'/24 >/25 Tile{ ]] }
  if( ! refalrts::alloc_open_bracket( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[14], 'n' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[15], 'u' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[16], 'm' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[17], 'b' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[18], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[19], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[20] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[21] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[22], StrFromInt, "StrFromInt" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[23], 'U' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[24], 'L' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[25] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], PrintMatchSave, "PrintMatchSave" );
  refalrts::push_stack( context[25] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[21] );
  refalrts::link_brackets( context[13], context[20] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[23], context[25] );
  res = refalrts::splice_evar( res, context[12], context[1] );
  res = refalrts::splice_evar( res, context[13], context[22] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult PrintMatchName(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & PrintMatchName/4 (/7 e.Indent#1/5 )/8 s.Direction#1/9 s.BracketNumber#1/10 e.Name#1/2 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.Indent#1 as range 5
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Name#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & PrintMatch/4 AsIs: (/7 AsIs: e.Indent#1/5 AsIs: )/8 AsIs: s.Direction#1/9 AsIs: s.BracketNumber#1/10 } (/11 'f'/12 'u'/13 'n'/14 'c'/15 't'/16 'i'/17 'o'/18 'n'/19 )/20 Tile{ AsIs: e.Name#1/2 } Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_bracket( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[12], 'f' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[13], 'u' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[14], 'n' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[15], 'c' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[16], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[17], 'i' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[18], 'o' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[19], 'n' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[20] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], PrintMatch, "PrintMatch" );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[11], context[20] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[11], context[20] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult PrintMatchNameSave(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & PrintMatchNameSave/4 (/7 e.Indent#1/5 )/8 s.Offset#1/9 s.Direction#1/10 s.BracketNumber#1/11 e.Name#1/2 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.Indent#1 as range 5
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[11], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Name#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & PrintMatchSave/4 AsIs: (/7 AsIs: e.Indent#1/5 AsIs: )/8 AsIs: s.Offset#1/9 AsIs: s.Direction#1/10 AsIs: s.BracketNumber#1/11 } (/12 'f'/13 'u'/14 'n'/15 'c'/16 't'/17 'i'/18 'o'/19 'n'/20 )/21 Tile{ AsIs: e.Name#1/2 } Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_bracket( context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[13], 'f' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[14], 'u' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[15], 'n' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[16], 'c' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[17], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[18], 'i' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[19], 'o' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[20], 'n' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[21] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], PrintMatchSave, "PrintMatchSave" );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[12], context[21] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[12], context[21] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult PrintMatchIdent(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 38 elems
  refalrts::Iter context[38];
  refalrts::zeros( context, 38 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & PrintMatchIdent/4 (/7 e.Indent#1/5 )/8 s.Direction#1/9 s.BracketNumber#1/10 e.Name#1/2 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.Indent#1 as range 5
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Name#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & PrintMatch/4 AsIs: (/7 AsIs: e.Indent#1/5 AsIs: )/8 AsIs: s.Direction#1/9 AsIs: s.BracketNumber#1/10 } (/11 'i'/12 'd'/13 'e'/14 'n'/15 't'/16 )/17 ' '/18 '&'/19 ' '/20 'i'/21 'd'/22 'e'/23 'n'/24 't'/25 '_'/26 Tile{ AsIs: e.Name#1/2 } '<'/27 'i'/28 'n'/29 't'/30 '>'/31 ':'/32 ':'/33 'n'/34 'a'/35 'm'/36 'e'/37 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_bracket( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[12], 'i' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[13], 'd' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[14], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[15], 'n' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[16], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[17] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[18], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[19], '&' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[20], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[21], 'i' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[22], 'd' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[23], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[24], 'n' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[25], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[26], '_' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[27], '<' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[28], 'i' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[29], 'n' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[30], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[31], '>' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[32], ':' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[33], ':' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[34], 'n' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[35], 'a' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[36], 'm' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[37], 'e' ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], PrintMatch, "PrintMatch" );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[11], context[17] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[27], context[37] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[11], context[26] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult PrintMatchIdentSave(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 39 elems
  refalrts::Iter context[39];
  refalrts::zeros( context, 39 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & PrintMatchIdentSave/4 (/7 e.Indent#1/5 )/8 s.Offset#1/9 s.Direction#1/10 s.BracketNumber#1/11 e.Name#1/2 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.Indent#1 as range 5
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[11], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Name#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & PrintMatchSave/4 AsIs: (/7 AsIs: e.Indent#1/5 AsIs: )/8 AsIs: s.Offset#1/9 AsIs: s.Direction#1/10 AsIs: s.BracketNumber#1/11 } (/12 'i'/13 'd'/14 'e'/15 'n'/16 't'/17 )/18 ' '/19 '&'/20 ' '/21 'i'/22 'd'/23 'e'/24 'n'/25 't'/26 '_'/27 Tile{ AsIs: e.Name#1/2 } '<'/28 'i'/29 'n'/30 't'/31 '>'/32 ':'/33 ':'/34 'n'/35 'a'/36 'm'/37 'e'/38 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_bracket( context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[13], 'i' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[14], 'd' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[15], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[16], 'n' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[17], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[18] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[19], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[20], '&' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[21], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[22], 'i' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[23], 'd' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[24], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[25], 'n' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[26], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[27], '_' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[28], '<' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[29], 'i' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[30], 'n' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[31], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[32], '>' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[33], ':' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[34], ':' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[35], 'n' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[36], 'a' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[37], 'm' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[38], 'e' ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], PrintMatchSave, "PrintMatchSave" );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[12], context[18] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[28], context[38] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[12], context[27] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult PrintMatchBrackets(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 25 elems
  refalrts::Iter context[25];
  refalrts::zeros( context, 25 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & PrintMatchBrackets/4 (/7 e.Indent#1/5 )/8 s.Direction#1/9 s.BracketNumber#1/10 s.InnerNum#1/11 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.Indent#1 as range 5
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[11], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & PrintMatch/4 AsIs: (/7 AsIs: e.Indent#1/5 AsIs: )/8 AsIs: s.Direction#1/9 AsIs: s.BracketNumber#1/10 } (/12 'b'/13 'r'/14 'a'/15 'c'/16 'k'/17 'e'/18 't'/19 's'/20 )/21 </22 & ContextRange/23 Tile{ AsIs: s.InnerNum#1/11 AsIs: >/1 } >/24 Tile{ ]] }
  if( ! refalrts::alloc_open_bracket( context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[13], 'b' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[14], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[15], 'a' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[16], 'c' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[17], 'k' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[18], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[19], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[20], 's' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[21] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[22] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[23], ContextRange, "ContextRange" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[24] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], PrintMatch, "PrintMatch" );
  refalrts::push_stack( context[24] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[22] );
  refalrts::link_brackets( context[12], context[21] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[24], context[24] );
  res = refalrts::splice_evar( res, context[11], context[1] );
  res = refalrts::splice_evar( res, context[12], context[23] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult PrintMatchBracketsSave(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 78 elems
  refalrts::Iter context[78];
  refalrts::zeros( context, 78 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & PrintMatchBracketsSave/4 (/7 e.Indent#1/5 )/8 s.Direction#1/9 s.BracketNumber#1/10 s.InnerNum#1/11 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.Indent#1 as range 5
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[11], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & PrintMatchSave/4 AsIs: (/7 AsIs: e.Indent#1/5 AsIs: )/8 } s.InnerNum#1/11/12 Tile{ AsIs: s.Direction#1/9 AsIs: s.BracketNumber#1/10 } (/13 'b'/14 'r'/15 'a'/16 'c'/17 'k'/18 'e'/19 't'/20 's'/21 )/22 </23 & ContextRange/24 Tile{ AsIs: s.InnerNum#1/11 AsIs: >/1 } # Brackets/25 >/26 (/27 e.Indent#1/5/28 'r'/30 'e'/31 'f'/32 'a'/33 'l'/34 'r'/35 't'/36 's'/37 ':'/38 ':'/39 'b'/40 'r'/41 'a'/42 'c'/43 'k'/44 'e'/45 't'/46 '_'/47 'p'/48 'o'/49 'i'/50 'n'/51 't'/52 'e'/53 'r'/54 's'/55 '('/56 </57 & ContextItem/58 </59 & Add/60 s.InnerNum#1/11/61 2/62 >/63 >/64 ','/65 ' '/66 </67 & ContextItem/68 </69 & Add/70 s.InnerNum#1/11/71 3/72 >/73 >/74 ')'/75 ';'/76 )/77 Tile{ ]] }
  if (! refalrts::copy_stvar(context[12], context[11]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[14], 'b' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[15], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[16], 'a' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[17], 'c' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[18], 'k' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[19], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[20], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[21], 's' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[22] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[23] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[24], ContextRange, "ContextRange" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[25], & ident_Brackets<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[26] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[27] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[28], context[29], context[5], context[6]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[30], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[31], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[32], 'f' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[33], 'a' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[34], 'l' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[35], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[36], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[37], 's' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[38], ':' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[39], ':' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[40], 'b' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[41], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[42], 'a' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[43], 'c' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[44], 'k' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[45], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[46], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[47], '_' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[48], 'p' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[49], 'o' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[50], 'i' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[51], 'n' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[52], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[53], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[54], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[55], 's' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[56], '(' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[57] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[58], ContextItem, "ContextItem" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[59] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[60], Add, "Add" ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_stvar(context[61], context[11]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_number( context[62], 2UL ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[63] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[64] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[65], ',' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[66], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[67] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[68], ContextItem, "ContextItem" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[69] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[70], Add, "Add" ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_stvar(context[71], context[11]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_number( context[72], 3UL ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[73] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[74] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[75], ')' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[76], ';' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[77] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], PrintMatchSave, "PrintMatchSave" );
  refalrts::link_brackets( context[27], context[77] );
  refalrts::push_stack( context[74] );
  refalrts::push_stack( context[67] );
  refalrts::push_stack( context[73] );
  refalrts::push_stack( context[69] );
  refalrts::push_stack( context[64] );
  refalrts::push_stack( context[57] );
  refalrts::push_stack( context[63] );
  refalrts::push_stack( context[59] );
  refalrts::push_stack( context[26] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[23] );
  refalrts::link_brackets( context[13], context[22] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[25], context[77] );
  res = refalrts::splice_evar( res, context[11], context[1] );
  res = refalrts::splice_evar( res, context[13], context[24] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[12], context[12] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult PrintMatchADT(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & PrintMatchADT/4 (/7 e.Indent#1/5 )/8 s.Direction#1/9 s.BracketNumber#1/10 s.InnerNum#1/11 e.Name#1/2 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.Indent#1 as range 5
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[11], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Name#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & PrintMatch/4 AsIs: (/7 AsIs: e.Indent#1/5 AsIs: )/8 AsIs: s.Direction#1/9 AsIs: s.BracketNumber#1/10 } (/12 'a'/13 'd'/14 't'/15 )/16 </17 & ContextRange/18 Tile{ AsIs: s.InnerNum#1/11 } >/19 ','/20 ' '/21 Tile{ AsIs: e.Name#1/2 } Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_bracket( context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[13], 'a' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[14], 'd' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[15], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[16] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[17] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[18], ContextRange, "ContextRange" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[19] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[20], ',' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[21], ' ' ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], PrintMatch, "PrintMatch" );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[19] );
  refalrts::push_stack( context[17] );
  refalrts::link_brackets( context[12], context[16] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[19], context[21] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  res = refalrts::splice_evar( res, context[12], context[18] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult PrintMatchADTSave(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 81 elems
  refalrts::Iter context[81];
  refalrts::zeros( context, 81 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & PrintMatchADTSave/4 (/7 e.Indent#1/5 )/8 s.Direction#1/9 s.BracketNumber#1/10 s.InnerNum#1/11 e.Name#1/2 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.Indent#1 as range 5
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[11], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Name#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & PrintMatchSave/4 AsIs: (/7 AsIs: e.Indent#1/5 AsIs: )/8 } Tile{ AsIs: s.InnerNum#1/11 } Tile{ AsIs: s.Direction#1/9 AsIs: s.BracketNumber#1/10 } (/12 'a'/13 'd'/14 't'/15 )/16 </17 & ContextRange/18 s.InnerNum#1/11/19 >/20 ','/21 ' '/22 Tile{ AsIs: e.Name#1/2 } # Brackets/23 >/24 (/25 e.Indent#1/5/26 'r'/28 'e'/29 'f'/30 'a'/31 'l'/32 'r'/33 't'/34 's'/35 ':'/36 ':'/37 'a'/38 'd'/39 't'/40 '_'/41 'p'/42 'o'/43 'i'/44 'n'/45 't'/46 'e'/47 'r'/48 's'/49 '('/50 </51 & ContextItem/52 </53 & Add/54 s.InnerNum#1/11/55 2/56 >/57 >/58 ','/59 ' '/60 </61 & ContextItem/62 </63 & Add/64 s.InnerNum#1/11/65 3/66 >/67 >/68 ','/69 ' '/70 </71 & ContextItem/72 </73 & Add/74 s.InnerNum#1/11/75 4/76 >/77 >/78 ')'/79 ';'/80 Tile{ HalfReuse: )/1 ]] }
  if( ! refalrts::alloc_open_bracket( context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[13], 'a' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[14], 'd' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[15], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[16] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[17] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[18], ContextRange, "ContextRange" ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_stvar(context[19], context[11]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[20] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[21], ',' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[22], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[23], & ident_Brackets<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[24] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[25] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[26], context[27], context[5], context[6]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[28], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[29], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[30], 'f' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[31], 'a' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[32], 'l' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[33], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[34], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[35], 's' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[36], ':' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[37], ':' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[38], 'a' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[39], 'd' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[40], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[41], '_' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[42], 'p' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[43], 'o' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[44], 'i' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[45], 'n' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[46], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[47], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[48], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[49], 's' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[50], '(' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[51] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[52], ContextItem, "ContextItem" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[53] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[54], Add, "Add" ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_stvar(context[55], context[11]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_number( context[56], 2UL ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[57] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[58] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[59], ',' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[60], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[61] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[62], ContextItem, "ContextItem" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[63] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[64], Add, "Add" ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_stvar(context[65], context[11]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_number( context[66], 3UL ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[67] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[68] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[69], ',' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[70], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[71] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[72], ContextItem, "ContextItem" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[73] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[74], Add, "Add" ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_stvar(context[75], context[11]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_number( context[76], 4UL ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[77] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[78] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[79], ')' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[80], ';' ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], PrintMatchSave, "PrintMatchSave" );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[25], context[1] );
  refalrts::push_stack( context[78] );
  refalrts::push_stack( context[71] );
  refalrts::push_stack( context[77] );
  refalrts::push_stack( context[73] );
  refalrts::push_stack( context[68] );
  refalrts::push_stack( context[61] );
  refalrts::push_stack( context[67] );
  refalrts::push_stack( context[63] );
  refalrts::push_stack( context[58] );
  refalrts::push_stack( context[51] );
  refalrts::push_stack( context[57] );
  refalrts::push_stack( context[53] );
  refalrts::push_stack( context[24] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[20] );
  refalrts::push_stack( context[17] );
  refalrts::link_brackets( context[12], context[16] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[23], context[80] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[12], context[22] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult BreakerFromIndent(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 42 elems
  refalrts::Iter context[42];
  refalrts::zeros( context, 42 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & BreakerFromIndent/4 ' '/5 ' '/6 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::char_left( ' ', context[2], context[3] );
    if( ! context[5] )
      continue;
    context[6] = refalrts::char_left( ' ', context[2], context[3] );
    if( ! context[6] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: 'r'/0 HalfReuse: 'e'/4 Reuse: 't'/5 Reuse: 'u'/6 HalfReuse: 'r'/1 } 'n'/7 ' '/8 'r'/9 'e'/10 'f'/11 'a'/12 'l'/13 'r'/14 't'/15 's'/16 ':'/17 ':'/18 'c'/19 'R'/20 'e'/21 'c'/22 'o'/23 'g'/24 'n'/25 'i'/26 't'/27 'i'/28 'o'/29 'n'/30 'I'/31 'm'/32 'p'/33 'o'/34 's'/35 's'/36 'i'/37 'b'/38 'l'/39 'e'/40 ';'/41 Tile{ ]] }
    if( ! refalrts::alloc_char( context[7], 'n' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[8], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[9], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[10], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[11], 'f' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[12], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[13], 'l' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[14], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[15], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[16], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[17], ':' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[18], ':' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[19], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[20], 'R' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[21], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[22], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[23], 'o' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[24], 'g' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[25], 'n' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[26], 'i' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[27], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[28], 'i' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[29], 'o' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[30], 'n' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[31], 'I' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[32], 'm' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[33], 'p' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[34], 'o' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[35], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[36], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[37], 'i' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[38], 'b' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[39], 'l' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[40], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[41], ';' ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[0], 'r' );
    refalrts::reinit_char( context[4], 'e' );
    refalrts::update_char( context[5], 't' );
    refalrts::update_char( context[6], 'u' );
    refalrts::reinit_char( context[1], 'r' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[7], context[41] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & BreakerFromIndent/4 e.OtherIndent#1/2 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.OtherIndent#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  e.OtherIndent#1/2 {REMOVED TILE} 
  //RESULT: Tile{ [[ HalfReuse: 'c'/0 HalfReuse: 'o'/4 } 'n'/5 't'/6 'i'/7 'n'/8 'u'/9 'e'/10 Tile{ HalfReuse: ';'/1 ]] }
  if( ! refalrts::alloc_char( context[5], 'n' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[6], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[7], 'i' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[8], 'n' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[9], 'u' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[10], 'e' ) )
    return refalrts::cNoMemory;
  refalrts::reinit_char( context[0], 'c' );
  refalrts::reinit_char( context[4], 'o' );
  refalrts::reinit_char( context[1], ';' );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[5], context[10] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[4], res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult PrintMatchEmpty(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 52 elems
  refalrts::Iter context[52];
  refalrts::zeros( context, 52 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & PrintMatchEmpty/4 (/7 e.Indent#1/5 )/8 s.BracketNumber#1/9 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.Indent#1 as range 5
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } (/10 e.Indent#1/5/11 'i'/13 'f'/14 '('/15 ' '/16 '!'/17 ' '/18 'r'/19 'e'/20 'f'/21 'a'/22 'l'/23 'r'/24 't'/25 's'/26 ':'/27 ':'/28 'e'/29 'm'/30 'p'/31 't'/32 'y'/33 '_'/34 's'/35 'e'/36 'q'/37 '('/38 ' '/39 </40 & ContextRange/41 Tile{ AsIs: s.BracketNumber#1/9 AsIs: >/1 } ' '/42 ')'/43 ' '/44 Tile{ HalfReuse: ')'/0 HalfReuse: )/4 AsIs: (/7 AsIs: e.Indent#1/5 HalfReuse: ' '/8 } ' '/45 </46 & BreakerFromIndent/47 e.Indent#1/5/48 >/50 )/51 Tile{ ]] }
  if( ! refalrts::alloc_open_bracket( context[10] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[11], context[12], context[5], context[6]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[13], 'i' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[14], 'f' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[15], '(' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[16], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[17], '!' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[18], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[19], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[20], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[21], 'f' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[22], 'a' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[23], 'l' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[24], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[25], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[26], 's' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[27], ':' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[28], ':' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[29], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[30], 'm' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[31], 'p' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[32], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[33], 'y' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[34], '_' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[35], 's' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[36], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[37], 'q' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[38], '(' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[39], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[40] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[41], ContextRange, "ContextRange" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[42], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[43], ')' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[44], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[45], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[46] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[47], BreakerFromIndent, "BreakerFromIndent" ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[48], context[49], context[5], context[6]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[50] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[51] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_char( context[0], ')' );
  refalrts::reinit_close_bracket( context[4] );
  refalrts::reinit_char( context[8], ' ' );
  refalrts::link_brackets( context[7], context[51] );
  refalrts::push_stack( context[50] );
  refalrts::push_stack( context[46] );
  refalrts::link_brackets( context[10], context[4] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[40] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[45], context[51] );
  res = refalrts::splice_evar( res, context[0], context[8] );
  res = refalrts::splice_evar( res, context[42], context[44] );
  res = refalrts::splice_evar( res, context[9], context[1] );
  res = refalrts::splice_evar( res, context[10], context[41] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult StrFromDirection(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 7 elems
  refalrts::Iter context[7];
  refalrts::zeros( context, 7 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & StrFromDirection/4 # AlgLeft/5 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::ident_left(  & ident_AlgLeft<int>::name, context[2], context[3] );
    if( ! context[5] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: 'l'/0 HalfReuse: 'e'/4 HalfReuse: 'f'/5 HalfReuse: 't'/1 ]] }
    refalrts::reinit_char( context[0], 'l' );
    refalrts::reinit_char( context[4], 'e' );
    refalrts::reinit_char( context[5], 'f' );
    refalrts::reinit_char( context[1], 't' );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & StrFromDirection/4 # AlgRight/5 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = refalrts::ident_left(  & ident_AlgRight<int>::name, context[2], context[3] );
  if( ! context[5] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ HalfReuse: 'r'/0 HalfReuse: 'i'/4 HalfReuse: 'g'/5 HalfReuse: 'h'/1 } 't'/6 Tile{ ]] }
  if( ! refalrts::alloc_char( context[6], 't' ) )
    return refalrts::cNoMemory;
  refalrts::reinit_char( context[0], 'r' );
  refalrts::reinit_char( context[4], 'i' );
  refalrts::reinit_char( context[5], 'g' );
  refalrts::reinit_char( context[1], 'h' );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[6], context[6] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult VarMatchFunction(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & VarMatchFunction/4 's'/5 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::char_left( 's', context[2], context[3] );
    if( ! context[5] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: 's'/0 HalfReuse: 'v'/4 Reuse: 'a'/5 HalfReuse: 'r'/1 ]] }
    refalrts::reinit_char( context[0], 's' );
    refalrts::reinit_char( context[4], 'v' );
    refalrts::update_char( context[5], 'a' );
    refalrts::reinit_char( context[1], 'r' );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & VarMatchFunction/4 't'/5 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = refalrts::char_left( 't', context[2], context[3] );
  if( ! context[5] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} 
  //RESULT: Tile{ [[ HalfReuse: 't'/0 HalfReuse: 'v'/4 Reuse: 'a'/5 HalfReuse: 'r'/1 ]] }
  refalrts::reinit_char( context[0], 't' );
  refalrts::reinit_char( context[4], 'v' );
  refalrts::update_char( context[5], 'a' );
  refalrts::reinit_char( context[1], 'r' );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult PrintMatchSTVar(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & PrintMatchSTVar/4 (/7 e.Indent#1/5 )/8 s.Direction#1/9 s.BracketNumber#1/10 s.Mode#1/11 s.VarNumber#1/12 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.Indent#1 as range 5
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[11], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[12], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & PrintMatch/4 AsIs: (/7 AsIs: e.Indent#1/5 AsIs: )/8 AsIs: s.Direction#1/9 AsIs: s.BracketNumber#1/10 } (/13 </14 & VarMatchFunction/15 Tile{ AsIs: s.Mode#1/11 } >/16 )/17 </18 & ContextItem/19 Tile{ AsIs: s.VarNumber#1/12 AsIs: >/1 } >/20 Tile{ ]] }
  if( ! refalrts::alloc_open_bracket( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[15], VarMatchFunction, "VarMatchFunction" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[16] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[17] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[18] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[19], ContextItem, "ContextItem" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[20] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], PrintMatch, "PrintMatch" );
  refalrts::push_stack( context[20] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[18] );
  refalrts::link_brackets( context[13], context[17] );
  refalrts::push_stack( context[16] );
  refalrts::push_stack( context[14] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[20], context[20] );
  res = refalrts::splice_evar( res, context[12], context[1] );
  res = refalrts::splice_evar( res, context[16], context[19] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  res = refalrts::splice_evar( res, context[13], context[15] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult PrintMatchSTVarSave(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 25 elems
  refalrts::Iter context[25];
  refalrts::zeros( context, 25 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & PrintMatchSTVarSave/4 (/7 e.Indent#1/5 )/8 s.Direction#1/9 s.BracketNumber#1/10 't'/11 s.VarNumber#1/12 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.Indent#1 as range 5
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[11] = refalrts::char_left( 't', context[2], context[3] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[12], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & PrintMatchSave/4 AsIs: (/7 AsIs: e.Indent#1/5 AsIs: )/8 } </13 & Inc/14 Tile{ AsIs: s.VarNumber#1/12 AsIs: >/1 } Tile{ AsIs: s.Direction#1/9 AsIs: s.BracketNumber#1/10 HalfReuse: (/11 } </15 & VarMatchFunction/16 't'/17 >/18 )/19 </20 & ContextItem/21 s.VarNumber#1/12/22 >/23 >/24 Tile{ ]] }
  if( ! refalrts::alloc_open_call( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[14], Inc, "Inc" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[16], VarMatchFunction, "VarMatchFunction" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[17], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[18] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[19] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[20] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[21], ContextItem, "ContextItem" ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_stvar(context[22], context[12]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[23] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[24] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], PrintMatchSave, "PrintMatchSave" );
  refalrts::reinit_open_bracket( context[11] );
  refalrts::push_stack( context[24] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[23] );
  refalrts::push_stack( context[20] );
  refalrts::link_brackets( context[11], context[19] );
  refalrts::push_stack( context[18] );
  refalrts::push_stack( context[15] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[13] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[15], context[24] );
  res = refalrts::splice_evar( res, context[9], context[11] );
  res = refalrts::splice_evar( res, context[12], context[1] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult PrintMatchRepeated(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 38 elems
  refalrts::Iter context[38];
  refalrts::zeros( context, 38 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & PrintMatchRepeated/4 (/7 e.Indent#1/5 )/8 s.Direction#1/9 s.BracketNumber#1/10 'e'/11 s.VarNumber#1/12 s.SampleNumber#1/13 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    // closed e.Indent#1 as range 5
    if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
      continue;
    context[11] = refalrts::char_left( 'e', context[2], context[3] );
    if( ! context[11] )
      continue;
    if( ! refalrts::svar_left( context[12], context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[13], context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & PrintMatch/4 AsIs: (/7 AsIs: e.Indent#1/5 AsIs: )/8 AsIs: s.Direction#1/9 AsIs: s.BracketNumber#1/10 HalfReuse: (/11 } 'r'/14 'e'/15 'p'/16 'e'/17 'a'/18 't'/19 'e'/20 'd'/21 '_'/22 'e'/23 'v'/24 'a'/25 'r'/26 )/27 </28 & ContextRange/29 Tile{ AsIs: s.VarNumber#1/12 } >/30 ','/31 ' '/32 </33 & ContextRange/34 Tile{ AsIs: s.SampleNumber#1/13 AsIs: >/1 } >/35 Tile{ ]] }
    if( ! refalrts::alloc_char( context[14], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[15], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[16], 'p' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[17], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[18], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[19], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[20], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[21], 'd' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[22], '_' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[23], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[24], 'v' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[25], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[26], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[27] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[28] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[29], ContextRange, "ContextRange" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[30] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[31], ',' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[32], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[33] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[34], ContextRange, "ContextRange" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[35] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], PrintMatch, "PrintMatch" );
    refalrts::reinit_open_bracket( context[11] );
    refalrts::push_stack( context[35] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[33] );
    refalrts::push_stack( context[30] );
    refalrts::push_stack( context[28] );
    refalrts::link_brackets( context[11], context[27] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[35], context[35] );
    res = refalrts::splice_evar( res, context[13], context[1] );
    res = refalrts::splice_evar( res, context[30], context[34] );
    res = refalrts::splice_evar( res, context[12], context[12] );
    res = refalrts::splice_evar( res, context[14], context[29] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & PrintMatchRepeated/4 (/7 e.Indent#1/5 )/8 s.Direction#1/9 s.BracketNumber#1/10 s.Mode#1/11 s.VarNumber#1/12 s.SampleNumber#1/13 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.Indent#1 as range 5
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[11], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[12], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[13], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  s.Mode#1/11 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & PrintMatch/4 AsIs: (/7 AsIs: e.Indent#1/5 AsIs: )/8 AsIs: s.Direction#1/9 AsIs: s.BracketNumber#1/10 } (/14 'r'/15 'e'/16 'p'/17 'e'/18 'a'/19 't'/20 'e'/21 'd'/22 '_'/23 's'/24 't'/25 'v'/26 'a'/27 'r'/28 )/29 </30 & ContextItem/31 Tile{ AsIs: s.VarNumber#1/12 } >/32 ','/33 ' '/34 </35 & ContextItem/36 Tile{ AsIs: s.SampleNumber#1/13 AsIs: >/1 } >/37 Tile{ ]] }
  if( ! refalrts::alloc_open_bracket( context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[15], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[16], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[17], 'p' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[18], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[19], 'a' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[20], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[21], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[22], 'd' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[23], '_' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[24], 's' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[25], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[26], 'v' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[27], 'a' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[28], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[29] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[30] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[31], ContextItem, "ContextItem" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[32] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[33], ',' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[34], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[35] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[36], ContextItem, "ContextItem" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[37] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], PrintMatch, "PrintMatch" );
  refalrts::push_stack( context[37] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[35] );
  refalrts::push_stack( context[32] );
  refalrts::push_stack( context[30] );
  refalrts::link_brackets( context[14], context[29] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[37], context[37] );
  res = refalrts::splice_evar( res, context[13], context[1] );
  res = refalrts::splice_evar( res, context[32], context[36] );
  res = refalrts::splice_evar( res, context[12], context[12] );
  res = refalrts::splice_evar( res, context[14], context[31] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[10], res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult PrintMatchRepeatedSave(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 41 elems
  refalrts::Iter context[41];
  refalrts::zeros( context, 41 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & PrintMatchRepeatedSave/4 (/7 e.Indent#1/5 )/8 s.Direction#1/9 s.BracketNumber#1/10 't'/11 s.VarNumber#1/12 s.SampleNumber#1/13 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    // closed e.Indent#1 as range 5
    if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
      continue;
    context[11] = refalrts::char_left( 't', context[2], context[3] );
    if( ! context[11] )
      continue;
    if( ! refalrts::svar_left( context[12], context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[13], context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & PrintMatchSave/4 AsIs: (/7 AsIs: e.Indent#1/5 AsIs: )/8 } </14 & Inc/15 Tile{ AsIs: s.VarNumber#1/12 } >/16 Tile{ AsIs: s.Direction#1/9 AsIs: s.BracketNumber#1/10 HalfReuse: (/11 } 'r'/17 'e'/18 'p'/19 'e'/20 'a'/21 't'/22 'e'/23 'd'/24 '_'/25 's'/26 't'/27 'v'/28 'a'/29 'r'/30 )/31 </32 & ContextItem/33 s.VarNumber#1/12/34 >/35 ','/36 ' '/37 </38 & ContextItem/39 Tile{ AsIs: s.SampleNumber#1/13 AsIs: >/1 } >/40 Tile{ ]] }
    if( ! refalrts::alloc_open_call( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[15], Inc, "Inc" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[17], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[18], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[19], 'p' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[20], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[21], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[22], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[23], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[24], 'd' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[25], '_' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[26], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[27], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[28], 'v' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[29], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[30], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[31] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[32] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[33], ContextItem, "ContextItem" ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[34], context[12]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[35] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[36], ',' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[37], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[38] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[39], ContextItem, "ContextItem" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[40] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], PrintMatchSave, "PrintMatchSave" );
    refalrts::reinit_open_bracket( context[11] );
    refalrts::push_stack( context[40] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[38] );
    refalrts::push_stack( context[35] );
    refalrts::push_stack( context[32] );
    refalrts::link_brackets( context[11], context[31] );
    refalrts::push_stack( context[16] );
    refalrts::push_stack( context[14] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[40], context[40] );
    res = refalrts::splice_evar( res, context[13], context[1] );
    res = refalrts::splice_evar( res, context[17], context[39] );
    res = refalrts::splice_evar( res, context[9], context[11] );
    res = refalrts::splice_evar( res, context[16], context[16] );
    res = refalrts::splice_evar( res, context[12], context[12] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & PrintMatchRepeatedSave/4 (/7 e.Indent#1/5 )/8 s.Direction#1/9 s.BracketNumber#1/10 s.Mode#1/11 s.VarNumber#1/12 s.SampleNumber#1/13 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.Indent#1 as range 5
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[11], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[12], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[13], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & PrintMatchRepeated/4 AsIs: (/7 AsIs: e.Indent#1/5 AsIs: )/8 AsIs: s.Direction#1/9 AsIs: s.BracketNumber#1/10 AsIs: s.Mode#1/11 AsIs: s.VarNumber#1/12 AsIs: s.SampleNumber#1/13 AsIs: >/1 ]] }
  refalrts::update_name( context[4], PrintMatchRepeated, "PrintMatchRepeated" );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[7], context[8] );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult PrintMatch(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 52 elems
  refalrts::Iter context[52];
  refalrts::zeros( context, 52 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & PrintMatch/4 (/7 e.Indent#1/5 )/8 s.Direction#1/9 s.BracketNumber#1/10 (/13 e.Function#1/11 )/14 e.TextRep#1/2 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.Indent#1 as range 5
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[11] = 0;
  context[12] = 0;
  context[13] = refalrts::brackets_left( context[11], context[12], context[2], context[3] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[13], context[14]);
  // closed e.Function#1 as range 11
  // closed e.TextRep#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } (/15 e.Indent#1/5/16 'i'/18 'f'/19 '('/20 ' '/21 '!'/22 ' '/23 'r'/24 'e'/25 'f'/26 'a'/27 'l'/28 'r'/29 't'/30 's'/31 ':'/32 Tile{ HalfReuse: ':'/13 AsIs: e.Function#1/11 HalfReuse: '_'/14 } </33 & StrFromDirection/34 Tile{ AsIs: s.Direction#1/9 } >/35 '('/36 ' '/37 Tile{ AsIs: e.TextRep#1/2 } ','/38 ' '/39 </40 & ContextRange/41 Tile{ AsIs: s.BracketNumber#1/10 } >/42 ' '/43 ')'/44 ' '/45 Tile{ HalfReuse: ')'/0 HalfReuse: )/4 AsIs: (/7 AsIs: e.Indent#1/5 HalfReuse: ' '/8 } ' '/46 </47 & BreakerFromIndent/48 e.Indent#1/5/49 >/51 Tile{ HalfReuse: )/1 ]] }
  if( ! refalrts::alloc_open_bracket( context[15] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[16], context[17], context[5], context[6]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[18], 'i' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[19], 'f' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[20], '(' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[21], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[22], '!' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[23], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[24], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[25], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[26], 'f' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[27], 'a' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[28], 'l' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[29], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[30], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[31], 's' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[32], ':' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[33] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[34], StrFromDirection, "StrFromDirection" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[35] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[36], '(' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[37], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[38], ',' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[39], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[40] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[41], ContextRange, "ContextRange" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[42] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[43], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[44], ')' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[45], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[46], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[47] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[48], BreakerFromIndent, "BreakerFromIndent" ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[49], context[50], context[5], context[6]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[51] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_char( context[13], ':' );
  refalrts::reinit_char( context[14], '_' );
  refalrts::reinit_char( context[0], ')' );
  refalrts::reinit_close_bracket( context[4] );
  refalrts::reinit_char( context[8], ' ' );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[7], context[1] );
  refalrts::push_stack( context[51] );
  refalrts::push_stack( context[47] );
  refalrts::link_brackets( context[15], context[4] );
  refalrts::push_stack( context[42] );
  refalrts::push_stack( context[40] );
  refalrts::push_stack( context[35] );
  refalrts::push_stack( context[33] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[46], context[51] );
  res = refalrts::splice_evar( res, context[0], context[8] );
  res = refalrts::splice_evar( res, context[42], context[45] );
  res = refalrts::splice_evar( res, context[10], context[10] );
  res = refalrts::splice_evar( res, context[38], context[41] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[35], context[37] );
  res = refalrts::splice_evar( res, context[9], context[9] );
  res = refalrts::splice_evar( res, context[33], context[34] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[15], context[32] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult PrintMatchSave(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 76 elems
  refalrts::Iter context[76];
  refalrts::zeros( context, 76 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & PrintMatchSave/4 (/8 e.Indent#1/6 )/9 s.Offset#1/10 s.Direction#1/11 s.BracketNumber#1/12 (/15 e.Function#1/13 )/16 e.TextRep#1/2 # Brackets/5 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::ident_right(  & ident_Brackets<int>::name, context[2], context[3] );
    if( ! context[5] )
      continue;
    context[6] = 0;
    context[7] = 0;
    context[8] = refalrts::brackets_left( context[6], context[7], context[2], context[3] );
    if( ! context[8] )
      continue;
    refalrts::bracket_pointers(context[8], context[9]);
    // closed e.Indent#1 as range 6
    if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[11], context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[12], context[2], context[3] ) )
      continue;
    context[13] = 0;
    context[14] = 0;
    context[15] = refalrts::brackets_left( context[13], context[14], context[2], context[3] );
    if( ! context[15] )
      continue;
    refalrts::bracket_pointers(context[15], context[16]);
    // closed e.Function#1 as range 13
    // closed e.TextRep#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } (/17 e.Indent#1/6/18 </20 & ContextItem/21 </22 & Add/23 2/24 Tile{ AsIs: s.Offset#1/10 } >/25 >/26 ' '/27 '='/28 ' '/29 'r'/30 'e'/31 'f'/32 'a'/33 'l'/34 'r'/35 't'/36 's'/37 ':'/38 ':'/39 Tile{ AsIs: e.Function#1/13 } '_'/40 </41 & StrFromDirection/42 Tile{ AsIs: s.Direction#1/11 } >/43 '('/44 Tile{ HalfReuse: ' '/16 AsIs: e.TextRep#1/2 HalfReuse: ','/5 HalfReuse: ' '/1 } </45 & ContextRange/46 Tile{ AsIs: s.BracketNumber#1/12 HalfReuse: >/15 } ' '/47 ')'/48 Tile{ HalfReuse: ';'/0 HalfReuse: )/4 AsIs: (/8 AsIs: e.Indent#1/6 HalfReuse: 'i'/9 } 'f'/49 '('/50 ' '/51 '!'/52 ' '/53 </54 & ContextItem/55 </56 & Add/57 2/58 s.Offset#1/10/59 >/60 >/61 ' '/62 ')'/63 )/64 (/65 e.Indent#1/6/66 ' '/68 ' '/69 </70 & BreakerFromIndent/71 e.Indent#1/6/72 >/74 )/75 Tile{ ]] }
    if( ! refalrts::alloc_open_bracket( context[17] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[18], context[19], context[6], context[7]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[20] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[21], ContextItem, "ContextItem" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[22] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[23], Add, "Add" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_number( context[24], 2UL ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[25] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[26] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[27], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[28], '=' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[29], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[30], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[31], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[32], 'f' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[33], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[34], 'l' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[35], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[36], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[37], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[38], ':' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[39], ':' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[40], '_' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[41] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[42], StrFromDirection, "StrFromDirection" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[43] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[44], '(' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[45] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[46], ContextRange, "ContextRange" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[47], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[48], ')' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[49], 'f' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[50], '(' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[51], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[52], '!' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[53], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[54] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[55], ContextItem, "ContextItem" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[56] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[57], Add, "Add" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_number( context[58], 2UL ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[59], context[10]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[60] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[61] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[62], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[63], ')' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[64] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[65] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[66], context[67], context[6], context[7]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[68], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[69], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[70] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[71], BreakerFromIndent, "BreakerFromIndent" ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[72], context[73], context[6], context[7]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[74] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[75] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[16], ' ' );
    refalrts::reinit_char( context[5], ',' );
    refalrts::reinit_char( context[1], ' ' );
    refalrts::reinit_close_call( context[15] );
    refalrts::reinit_char( context[0], ';' );
    refalrts::reinit_close_bracket( context[4] );
    refalrts::reinit_char( context[9], 'i' );
    refalrts::link_brackets( context[65], context[75] );
    refalrts::push_stack( context[74] );
    refalrts::push_stack( context[70] );
    refalrts::link_brackets( context[8], context[64] );
    refalrts::push_stack( context[61] );
    refalrts::push_stack( context[54] );
    refalrts::push_stack( context[60] );
    refalrts::push_stack( context[56] );
    refalrts::link_brackets( context[17], context[4] );
    refalrts::push_stack( context[15] );
    refalrts::push_stack( context[45] );
    refalrts::push_stack( context[43] );
    refalrts::push_stack( context[41] );
    refalrts::push_stack( context[26] );
    refalrts::push_stack( context[20] );
    refalrts::push_stack( context[25] );
    refalrts::push_stack( context[22] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[49], context[75] );
    res = refalrts::splice_evar( res, context[0], context[9] );
    res = refalrts::splice_evar( res, context[47], context[48] );
    res = refalrts::splice_evar( res, context[12], context[15] );
    res = refalrts::splice_evar( res, context[45], context[46] );
    res = refalrts::splice_evar( res, context[16], context[1] );
    res = refalrts::splice_evar( res, context[43], context[44] );
    res = refalrts::splice_evar( res, context[11], context[11] );
    res = refalrts::splice_evar( res, context[40], context[42] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[25], context[39] );
    res = refalrts::splice_evar( res, context[10], context[10] );
    res = refalrts::splice_evar( res, context[17], context[24] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & PrintMatchSave/4 (/7 e.Indent#1/5 )/8 s.Offset#1/9 s.Direction#1/10 s.BracketNumber#1/11 (/14 e.Function#1/12 )/15 e.TextRep#1/2 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.Indent#1 as range 5
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[11], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[12] = 0;
  context[13] = 0;
  context[14] = refalrts::brackets_left( context[12], context[13], context[2], context[3] );
  if( ! context[14] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[14], context[15]);
  // closed e.Function#1 as range 12
  // closed e.TextRep#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } (/16 e.Indent#1/5/17 </19 & ContextItem/20 Tile{ AsIs: s.Offset#1/9 } >/21 ' '/22 '='/23 ' '/24 'r'/25 'e'/26 'f'/27 'a'/28 'l'/29 'r'/30 't'/31 's'/32 ':'/33 Tile{ HalfReuse: ':'/14 AsIs: e.Function#1/12 HalfReuse: '_'/15 } </34 & StrFromDirection/35 Tile{ AsIs: s.Direction#1/10 } >/36 '('/37 ' '/38 Tile{ AsIs: e.TextRep#1/2 } ','/39 ' '/40 </41 & ContextRange/42 Tile{ AsIs: s.BracketNumber#1/11 } >/43 ' '/44 ')'/45 Tile{ HalfReuse: ';'/0 HalfReuse: )/4 AsIs: (/7 AsIs: e.Indent#1/5 HalfReuse: 'i'/8 } 'f'/46 '('/47 ' '/48 '!'/49 ' '/50 </51 & ContextItem/52 s.Offset#1/9/53 >/54 ' '/55 ')'/56 )/57 (/58 e.Indent#1/5/59 ' '/61 ' '/62 </63 & BreakerFromIndent/64 e.Indent#1/5/65 >/67 Tile{ HalfReuse: )/1 ]] }
  if( ! refalrts::alloc_open_bracket( context[16] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[17], context[18], context[5], context[6]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[19] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[20], ContextItem, "ContextItem" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[21] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[22], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[23], '=' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[24], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[25], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[26], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[27], 'f' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[28], 'a' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[29], 'l' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[30], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[31], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[32], 's' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[33], ':' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[34] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[35], StrFromDirection, "StrFromDirection" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[36] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[37], '(' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[38], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[39], ',' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[40], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[41] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[42], ContextRange, "ContextRange" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[43] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[44], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[45], ')' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[46], 'f' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[47], '(' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[48], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[49], '!' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[50], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[51] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[52], ContextItem, "ContextItem" ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_stvar(context[53], context[9]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[54] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[55], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[56], ')' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[57] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[58] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[59], context[60], context[5], context[6]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[61], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[62], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[63] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[64], BreakerFromIndent, "BreakerFromIndent" ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[65], context[66], context[5], context[6]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[67] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_char( context[14], ':' );
  refalrts::reinit_char( context[15], '_' );
  refalrts::reinit_char( context[0], ';' );
  refalrts::reinit_close_bracket( context[4] );
  refalrts::reinit_char( context[8], 'i' );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[58], context[1] );
  refalrts::push_stack( context[67] );
  refalrts::push_stack( context[63] );
  refalrts::link_brackets( context[7], context[57] );
  refalrts::push_stack( context[54] );
  refalrts::push_stack( context[51] );
  refalrts::link_brackets( context[16], context[4] );
  refalrts::push_stack( context[43] );
  refalrts::push_stack( context[41] );
  refalrts::push_stack( context[36] );
  refalrts::push_stack( context[34] );
  refalrts::push_stack( context[21] );
  refalrts::push_stack( context[19] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[46], context[67] );
  res = refalrts::splice_evar( res, context[0], context[8] );
  res = refalrts::splice_evar( res, context[43], context[45] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  res = refalrts::splice_evar( res, context[39], context[42] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[36], context[38] );
  res = refalrts::splice_evar( res, context[10], context[10] );
  res = refalrts::splice_evar( res, context[34], context[35] );
  res = refalrts::splice_evar( res, context[14], context[15] );
  res = refalrts::splice_evar( res, context[21], context[33] );
  res = refalrts::splice_evar( res, context[9], context[9] );
  res = refalrts::splice_evar( res, context[16], context[20] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult PrintCreateElem(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 81 elems
  refalrts::Iter context[81];
  refalrts::zeros( context, 81 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & PrintCreateElem/4 (/7 e.Indent#1/5 )/8 (/11 'a'/13 'l'/14 'l'/15 'o'/16 'c'/17 )/12 s.ElemNumber#1/18 s.ElementType#1/19 e.Info#1/2 >/1
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
    context[13] = refalrts::char_left( 'a', context[9], context[10] );
    if( ! context[13] )
      continue;
    context[14] = refalrts::char_left( 'l', context[9], context[10] );
    if( ! context[14] )
      continue;
    context[15] = refalrts::char_left( 'l', context[9], context[10] );
    if( ! context[15] )
      continue;
    context[16] = refalrts::char_left( 'o', context[9], context[10] );
    if( ! context[16] )
      continue;
    context[17] = refalrts::char_left( 'c', context[9], context[10] );
    if( ! context[17] )
      continue;
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;
    // closed e.Indent#1 as range 5
    if( ! refalrts::svar_left( context[18], context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[19], context[2], context[3] ) )
      continue;
    // closed e.Info#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } (/20 e.Indent#1/5/21 'i'/23 'f'/24 '('/25 ' '/26 '!'/27 ' '/28 'r'/29 'e'/30 'f'/31 'a'/32 'l'/33 'r'/34 't'/35 's'/36 ':'/37 ':'/38 'a'/39 'l'/40 'l'/41 'o'/42 'c'/43 '_'/44 </45 & AllocatorFuncName/46 s.ElementType#1/19/47 >/48 '('/49 ' '/50 </51 & ContextItem/52 Tile{ AsIs: s.ElemNumber#1/18 } >/53 </54 & AllocatorFuncArgument/55 Tile{ AsIs: s.ElementType#1/19 AsIs: e.Info#1/2 AsIs: >/1 } ' '/56 ')'/57 ' '/58 Tile{ HalfReuse: ')'/0 HalfReuse: )/4 AsIs: (/7 AsIs: e.Indent#1/5 HalfReuse: ' '/8 HalfReuse: ' '/11 Reuse: 'r'/13 Reuse: 'e'/14 Reuse: 't'/15 Reuse: 'u'/16 Reuse: 'r'/17 HalfReuse: 'n'/12 } ' '/59 'r'/60 'e'/61 'f'/62 'a'/63 'l'/64 'r'/65 't'/66 's'/67 ':'/68 ':'/69 'c'/70 'N'/71 'o'/72 'M'/73 'e'/74 'm'/75 'o'/76 'r'/77 'y'/78 ';'/79 )/80 Tile{ ]] }
    if( ! refalrts::alloc_open_bracket( context[20] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[21], context[22], context[5], context[6]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[23], 'i' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[24], 'f' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[25], '(' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[26], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[27], '!' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[28], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[29], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[30], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[31], 'f' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[32], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[33], 'l' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[34], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[35], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[36], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[37], ':' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[38], ':' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[39], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[40], 'l' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[41], 'l' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[42], 'o' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[43], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[44], '_' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[45] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[46], AllocatorFuncName, "AllocatorFuncName" ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[47], context[19]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[48] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[49], '(' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[50], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[51] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[52], ContextItem, "ContextItem" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[53] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[54] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[55], AllocatorFuncArgument, "AllocatorFuncArgument" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[56], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[57], ')' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[58], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[59], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[60], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[61], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[62], 'f' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[63], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[64], 'l' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[65], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[66], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[67], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[68], ':' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[69], ':' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[70], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[71], 'N' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[72], 'o' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[73], 'M' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[74], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[75], 'm' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[76], 'o' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[77], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[78], 'y' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[79], ';' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[80] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[0], ')' );
    refalrts::reinit_close_bracket( context[4] );
    refalrts::reinit_char( context[8], ' ' );
    refalrts::reinit_char( context[11], ' ' );
    refalrts::update_char( context[13], 'r' );
    refalrts::update_char( context[14], 'e' );
    refalrts::update_char( context[15], 't' );
    refalrts::update_char( context[16], 'u' );
    refalrts::update_char( context[17], 'r' );
    refalrts::reinit_char( context[12], 'n' );
    refalrts::link_brackets( context[7], context[80] );
    refalrts::link_brackets( context[20], context[4] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[54] );
    refalrts::push_stack( context[53] );
    refalrts::push_stack( context[51] );
    refalrts::push_stack( context[48] );
    refalrts::push_stack( context[45] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[59], context[80] );
    res = refalrts::splice_evar( res, context[0], context[12] );
    res = refalrts::splice_evar( res, context[56], context[58] );
    res = refalrts::splice_evar( res, context[19], context[1] );
    res = refalrts::splice_evar( res, context[53], context[55] );
    res = refalrts::splice_evar( res, context[18], context[18] );
    res = refalrts::splice_evar( res, context[20], context[52] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & PrintCreateElem/4 (/7 e.Indent#1/5 )/8 (/11 e.Action#1/9 )/12 s.ElemNumber#1/13 s.ElementType#1/14 e.Info#1/2 >/1
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
  // closed e.Indent#1 as range 5
  // closed e.Action#1 as range 9
  if( ! refalrts::svar_left( context[13], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[14], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Info#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Indent#1/5 HalfReuse: 'r'/8 HalfReuse: 'e'/11 } 'f'/15 'a'/16 'l'/17 'r'/18 't'/19 's'/20 ':'/21 ':'/22 Tile{ AsIs: e.Action#1/9 } '_'/23 Tile{ AsIs: </0 Reuse: & AllocatorFuncName/4 } s.ElementType#1/14/24 >/25 '('/26 ' '/27 </28 Tile{ HalfReuse: & ContextItem/12 AsIs: s.ElemNumber#1/13 } >/29 </30 & AllocatorFuncArgument/31 Tile{ AsIs: s.ElementType#1/14 AsIs: e.Info#1/2 AsIs: >/1 } ' '/32 ')'/33 ';'/34 )/35 Tile{ ]] }
  if( ! refalrts::alloc_char( context[15], 'f' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[16], 'a' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[17], 'l' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[18], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[19], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[20], 's' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[21], ':' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[22], ':' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[23], '_' ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_stvar(context[24], context[14]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[25] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[26], '(' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[27], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[28] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[29] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[30] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[31], AllocatorFuncArgument, "AllocatorFuncArgument" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[32], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[33], ')' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[34], ';' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[35] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_char( context[8], 'r' );
  refalrts::reinit_char( context[11], 'e' );
  refalrts::update_name( context[4], AllocatorFuncName, "AllocatorFuncName" );
  refalrts::reinit_name( context[12], ContextItem, "ContextItem" );
  refalrts::link_brackets( context[7], context[35] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[30] );
  refalrts::push_stack( context[29] );
  refalrts::push_stack( context[28] );
  refalrts::push_stack( context[25] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[32], context[35] );
  res = refalrts::splice_evar( res, context[14], context[1] );
  res = refalrts::splice_evar( res, context[29], context[31] );
  res = refalrts::splice_evar( res, context[12], context[13] );
  res = refalrts::splice_evar( res, context[24], context[28] );
  res = refalrts::splice_evar( res, context[0], context[4] );
  res = refalrts::splice_evar( res, context[23], context[23] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[15], context[22] );
  res = refalrts::splice_evar( res, context[7], context[11] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult AllocatorFuncName(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & AllocatorFuncName/4 # ElChar/5 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::ident_left(  & ident_ElChar<int>::name, context[2], context[3] );
    if( ! context[5] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: 'c'/0 HalfReuse: 'h'/4 HalfReuse: 'a'/5 HalfReuse: 'r'/1 ]] }
    refalrts::reinit_char( context[0], 'c' );
    refalrts::reinit_char( context[4], 'h' );
    refalrts::reinit_char( context[5], 'a' );
    refalrts::reinit_char( context[1], 'r' );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & AllocatorFuncName/4 # ElName/5 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::ident_left(  & ident_ElName<int>::name, context[2], context[3] );
    if( ! context[5] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: 'n'/0 HalfReuse: 'a'/4 HalfReuse: 'm'/5 HalfReuse: 'e'/1 ]] }
    refalrts::reinit_char( context[0], 'n' );
    refalrts::reinit_char( context[4], 'a' );
    refalrts::reinit_char( context[5], 'm' );
    refalrts::reinit_char( context[1], 'e' );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & AllocatorFuncName/4 # ElNumber/5 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::ident_left(  & ident_ElNumber<int>::name, context[2], context[3] );
    if( ! context[5] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: 'n'/0 HalfReuse: 'u'/4 HalfReuse: 'm'/5 HalfReuse: 'b'/1 } 'e'/6 'r'/7 Tile{ ]] }
    if( ! refalrts::alloc_char( context[6], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[7], 'r' ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[0], 'n' );
    refalrts::reinit_char( context[4], 'u' );
    refalrts::reinit_char( context[5], 'm' );
    refalrts::reinit_char( context[1], 'b' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[6], context[7] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & AllocatorFuncName/4 # ElIdent/5 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::ident_left(  & ident_ElIdent<int>::name, context[2], context[3] );
    if( ! context[5] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: 'i'/0 HalfReuse: 'd'/4 HalfReuse: 'e'/5 HalfReuse: 'n'/1 } 't'/6 Tile{ ]] }
    if( ! refalrts::alloc_char( context[6], 't' ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[0], 'i' );
    refalrts::reinit_char( context[4], 'd' );
    refalrts::reinit_char( context[5], 'e' );
    refalrts::reinit_char( context[1], 'n' );
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
    // </0 & AllocatorFuncName/4 # ElOpenADT/5 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::ident_left(  & ident_ElOpenADT<int>::name, context[2], context[3] );
    if( ! context[5] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: 'o'/0 HalfReuse: 'p'/4 HalfReuse: 'e'/5 HalfReuse: 'n'/1 } '_'/6 'a'/7 'd'/8 't'/9 Tile{ ]] }
    if( ! refalrts::alloc_char( context[6], '_' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[7], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[8], 'd' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[9], 't' ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[0], 'o' );
    refalrts::reinit_char( context[4], 'p' );
    refalrts::reinit_char( context[5], 'e' );
    refalrts::reinit_char( context[1], 'n' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[6], context[9] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & AllocatorFuncName/4 # ElCloseADT/5 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::ident_left(  & ident_ElCloseADT<int>::name, context[2], context[3] );
    if( ! context[5] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: 'c'/0 HalfReuse: 'l'/4 HalfReuse: 'o'/5 HalfReuse: 's'/1 } 'e'/6 '_'/7 'a'/8 'd'/9 't'/10 Tile{ ]] }
    if( ! refalrts::alloc_char( context[6], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[7], '_' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[8], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[9], 'd' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[10], 't' ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[0], 'c' );
    refalrts::reinit_char( context[4], 'l' );
    refalrts::reinit_char( context[5], 'o' );
    refalrts::reinit_char( context[1], 's' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[6], context[10] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & AllocatorFuncName/4 # ElOpenBracket/5 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::ident_left(  & ident_ElOpenBracket<int>::name, context[2], context[3] );
    if( ! context[5] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: 'o'/0 HalfReuse: 'p'/4 HalfReuse: 'e'/5 HalfReuse: 'n'/1 } '_'/6 'b'/7 'r'/8 'a'/9 'c'/10 'k'/11 'e'/12 't'/13 Tile{ ]] }
    if( ! refalrts::alloc_char( context[6], '_' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[7], 'b' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[8], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[9], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[10], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[11], 'k' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[12], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[13], 't' ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[0], 'o' );
    refalrts::reinit_char( context[4], 'p' );
    refalrts::reinit_char( context[5], 'e' );
    refalrts::reinit_char( context[1], 'n' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[6], context[13] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & AllocatorFuncName/4 # ElCloseBracket/5 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::ident_left(  & ident_ElCloseBracket<int>::name, context[2], context[3] );
    if( ! context[5] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: 'c'/0 HalfReuse: 'l'/4 HalfReuse: 'o'/5 HalfReuse: 's'/1 } 'e'/6 '_'/7 'b'/8 'r'/9 'a'/10 'c'/11 'k'/12 'e'/13 't'/14 Tile{ ]] }
    if( ! refalrts::alloc_char( context[6], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[7], '_' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[8], 'b' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[9], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[10], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[11], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[12], 'k' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[13], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[14], 't' ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[0], 'c' );
    refalrts::reinit_char( context[4], 'l' );
    refalrts::reinit_char( context[5], 'o' );
    refalrts::reinit_char( context[1], 's' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[6], context[14] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & AllocatorFuncName/4 # ElOpenCall/5 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::ident_left(  & ident_ElOpenCall<int>::name, context[2], context[3] );
    if( ! context[5] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: 'o'/0 HalfReuse: 'p'/4 HalfReuse: 'e'/5 HalfReuse: 'n'/1 } '_'/6 'c'/7 'a'/8 'l'/9 'l'/10 Tile{ ]] }
    if( ! refalrts::alloc_char( context[6], '_' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[7], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[8], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[9], 'l' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[10], 'l' ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[0], 'o' );
    refalrts::reinit_char( context[4], 'p' );
    refalrts::reinit_char( context[5], 'e' );
    refalrts::reinit_char( context[1], 'n' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[6], context[10] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & AllocatorFuncName/4 # ElCloseCall/5 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = refalrts::ident_left(  & ident_ElCloseCall<int>::name, context[2], context[3] );
  if( ! context[5] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ HalfReuse: 'c'/0 HalfReuse: 'l'/4 HalfReuse: 'o'/5 HalfReuse: 's'/1 } 'e'/6 '_'/7 'c'/8 'a'/9 'l'/10 'l'/11 Tile{ ]] }
  if( ! refalrts::alloc_char( context[6], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[7], '_' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[8], 'c' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[9], 'a' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[10], 'l' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[11], 'l' ) )
    return refalrts::cNoMemory;
  refalrts::reinit_char( context[0], 'c' );
  refalrts::reinit_char( context[4], 'l' );
  refalrts::reinit_char( context[5], 'o' );
  refalrts::reinit_char( context[1], 's' );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[6], context[11] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult AllocatorFuncArgument(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 23 elems
  refalrts::Iter context[23];
  refalrts::zeros( context, 23 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & AllocatorFuncArgument/4 # ElChar/5 s.Char#1/6 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::ident_left(  & ident_ElChar<int>::name, context[2], context[3] );
    if( ! context[5] )
      continue;
    if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } ','/7 ' '/8 Tile{ HalfReuse: '\''/0 HalfReuse: </4 HalfReuse: & Escape/5 AsIs: s.Char#1/6 AsIs: >/1 } '\''/9 Tile{ ]] }
    if( ! refalrts::alloc_char( context[7], ',' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[8], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[9], '\'' ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[0], '\'' );
    refalrts::reinit_open_call( context[4] );
    refalrts::reinit_name( context[5], Escape, "Escape" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[9], context[9] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & AllocatorFuncArgument/4 # ElName/5 e.Name#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::ident_left(  & ident_ElName<int>::name, context[2], context[3] );
    if( ! context[5] )
      continue;
    // closed e.Name#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } ','/6 Tile{ HalfReuse: ' '/0 HalfReuse: </4 HalfReuse: & PrintName/5 AsIs: e.Name#1/2 AsIs: >/1 } ','/7 ' '/8 '\"'/9 </10 & PrintName/11 e.Name#1/2/12 >/14 '\"'/15 Tile{ ]] }
    if( ! refalrts::alloc_char( context[6], ',' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[7], ',' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[8], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[9], '\"' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[11], PrintName, "PrintName" ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[12], context[13], context[2], context[3]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[15], '\"' ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[0], ' ' );
    refalrts::reinit_open_call( context[4] );
    refalrts::reinit_name( context[5], PrintName, "PrintName" );
    refalrts::push_stack( context[14] );
    refalrts::push_stack( context[10] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[7], context[15] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    res = refalrts::splice_evar( res, context[6], context[6] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & AllocatorFuncArgument/4 # ElNumber/5 s.Number#1/6 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::ident_left(  & ident_ElNumber<int>::name, context[2], context[3] );
    if( ! context[5] )
      continue;
    if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } ','/7 Tile{ HalfReuse: ' '/0 HalfReuse: </4 HalfReuse: & StrFromInt/5 AsIs: s.Number#1/6 AsIs: >/1 } 'U'/8 'L'/9 Tile{ ]] }
    if( ! refalrts::alloc_char( context[7], ',' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[8], 'U' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[9], 'L' ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[0], ' ' );
    refalrts::reinit_open_call( context[4] );
    refalrts::reinit_name( context[5], StrFromInt, "StrFromInt" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[8], context[9] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & AllocatorFuncArgument/4 # ElIdent/5 e.Name#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::ident_left(  & ident_ElIdent<int>::name, context[2], context[3] );
    if( ! context[5] )
      continue;
    // closed e.Name#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } ','/6 ' '/7 '&'/8 ' '/9 'i'/10 'd'/11 'e'/12 Tile{ HalfReuse: 'n'/0 HalfReuse: 't'/4 HalfReuse: '_'/5 AsIs: e.Name#1/2 HalfReuse: '<'/1 } 'i'/13 'n'/14 't'/15 '>'/16 ':'/17 ':'/18 'n'/19 'a'/20 'm'/21 'e'/22 Tile{ ]] }
    if( ! refalrts::alloc_char( context[6], ',' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[7], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[8], '&' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[9], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[10], 'i' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[11], 'd' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[12], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[13], 'i' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[14], 'n' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[15], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[16], '>' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[17], ':' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[18], ':' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[19], 'n' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[20], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[21], 'm' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[22], 'e' ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[0], 'n' );
    refalrts::reinit_char( context[4], 't' );
    refalrts::reinit_char( context[5], '_' );
    refalrts::reinit_char( context[1], '<' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[13], context[22] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    res = refalrts::splice_evar( res, context[6], context[12] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & AllocatorFuncArgument/4 s.Other#1/5 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  </0 & AllocatorFuncArgument/4 s.Other#1/5 >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult PrintInterpretAllocateElem(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 38 elems
  refalrts::Iter context[38];
  refalrts::zeros( context, 38 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & PrintInterpretAllocateElem/4 (/7 e.Indent#1/5 )/8 s.ElemNumber#1/9 s.ElementType#1/10 e.Info#1/2 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.Indent#1 as range 5
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Info#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Indent#1/5 HalfReuse: '{'/8 } 'r'/11 'e'/12 'f'/13 'a'/14 'l'/15 'r'/16 't'/17 's'/18 ':'/19 ':'/20 Tile{ AsIs: </0 Reuse: & AllocatorCommandTag/4 } s.ElementType#1/10/21 >/22 ','/23 ' '/24 '0'/25 ','/26 ' '/27 </28 & AllocatorCommandInfo/29 Tile{ AsIs: s.ElementType#1/10 AsIs: e.Info#1/2 AsIs: >/1 } ','/30 ' '/31 </32 & StrFromInt/33 Tile{ AsIs: s.ElemNumber#1/9 } >/34 '}'/35 ','/36 )/37 Tile{ ]] }
  if( ! refalrts::alloc_char( context[11], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[12], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[13], 'f' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[14], 'a' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[15], 'l' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[16], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[17], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[18], 's' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[19], ':' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[20], ':' ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_stvar(context[21], context[10]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[22] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[23], ',' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[24], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[25], '0' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[26], ',' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[27], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[28] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[29], AllocatorCommandInfo, "AllocatorCommandInfo" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[30], ',' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[31], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[32] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[33], StrFromInt, "StrFromInt" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[34] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[35], '}' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[36], ',' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[37] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_char( context[8], '{' );
  refalrts::update_name( context[4], AllocatorCommandTag, "AllocatorCommandTag" );
  refalrts::link_brackets( context[7], context[37] );
  refalrts::push_stack( context[34] );
  refalrts::push_stack( context[32] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[28] );
  refalrts::push_stack( context[22] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[34], context[37] );
  res = refalrts::splice_evar( res, context[9], context[9] );
  res = refalrts::splice_evar( res, context[30], context[33] );
  res = refalrts::splice_evar( res, context[10], context[1] );
  res = refalrts::splice_evar( res, context[21], context[29] );
  res = refalrts::splice_evar( res, context[0], context[4] );
  res = refalrts::splice_evar( res, context[11], context[20] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult AllocatorCommandTag(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & AllocatorCommandTag/4 # ElChar/5 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::ident_left(  & ident_ElChar<int>::name, context[2], context[3] );
    if( ! context[5] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: 'i'/0 HalfReuse: 'c'/4 HalfReuse: 'C'/5 HalfReuse: 'h'/1 } 'a'/6 'r'/7 Tile{ ]] }
    if( ! refalrts::alloc_char( context[6], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[7], 'r' ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[0], 'i' );
    refalrts::reinit_char( context[4], 'c' );
    refalrts::reinit_char( context[5], 'C' );
    refalrts::reinit_char( context[1], 'h' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[6], context[7] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & AllocatorCommandTag/4 # ElName/5 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::ident_left(  & ident_ElName<int>::name, context[2], context[3] );
    if( ! context[5] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: 'i'/0 HalfReuse: 'c'/4 HalfReuse: 'F'/5 HalfReuse: 'u'/1 } 'n'/6 'c'/7 Tile{ ]] }
    if( ! refalrts::alloc_char( context[6], 'n' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[7], 'c' ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[0], 'i' );
    refalrts::reinit_char( context[4], 'c' );
    refalrts::reinit_char( context[5], 'F' );
    refalrts::reinit_char( context[1], 'u' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[6], context[7] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & AllocatorCommandTag/4 # ElHugeNumber/5 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::ident_left(  & ident_ElHugeNumber<int>::name, context[2], context[3] );
    if( ! context[5] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: 'i'/0 HalfReuse: 'c'/4 HalfReuse: 'H'/5 HalfReuse: 'u'/1 } 'g'/6 'e'/7 'I'/8 'n'/9 't'/10 Tile{ ]] }
    if( ! refalrts::alloc_char( context[6], 'g' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[7], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[8], 'I' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[9], 'n' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[10], 't' ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[0], 'i' );
    refalrts::reinit_char( context[4], 'c' );
    refalrts::reinit_char( context[5], 'H' );
    refalrts::reinit_char( context[1], 'u' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[6], context[10] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & AllocatorCommandTag/4 # ElNumber/5 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::ident_left(  & ident_ElNumber<int>::name, context[2], context[3] );
    if( ! context[5] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: 'i'/0 HalfReuse: 'c'/4 HalfReuse: 'I'/5 HalfReuse: 'n'/1 } 't'/6 Tile{ ]] }
    if( ! refalrts::alloc_char( context[6], 't' ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[0], 'i' );
    refalrts::reinit_char( context[4], 'c' );
    refalrts::reinit_char( context[5], 'I' );
    refalrts::reinit_char( context[1], 'n' );
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
    // </0 & AllocatorCommandTag/4 # ElIdent/5 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::ident_left(  & ident_ElIdent<int>::name, context[2], context[3] );
    if( ! context[5] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: 'i'/0 HalfReuse: 'c'/4 HalfReuse: 'I'/5 HalfReuse: 'd'/1 } 'e'/6 'n'/7 't'/8 Tile{ ]] }
    if( ! refalrts::alloc_char( context[6], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[7], 'n' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[8], 't' ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[0], 'i' );
    refalrts::reinit_char( context[4], 'c' );
    refalrts::reinit_char( context[5], 'I' );
    refalrts::reinit_char( context[1], 'd' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[6], context[8] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & AllocatorCommandTag/4 # ElOpenBracket/5 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::ident_left(  & ident_ElOpenBracket<int>::name, context[2], context[3] );
    if( ! context[5] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: 'i'/0 HalfReuse: 'c'/4 HalfReuse: 'B'/5 HalfReuse: 'r'/1 } 'a'/6 'c'/7 'k'/8 'e'/9 't'/10 Tile{ ]] }
    if( ! refalrts::alloc_char( context[6], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[7], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[8], 'k' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[9], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[10], 't' ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[0], 'i' );
    refalrts::reinit_char( context[4], 'c' );
    refalrts::reinit_char( context[5], 'B' );
    refalrts::reinit_char( context[1], 'r' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[6], context[10] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & AllocatorCommandTag/4 # ElOpenADT/5 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::ident_left(  & ident_ElOpenADT<int>::name, context[2], context[3] );
    if( ! context[5] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: 'i'/0 HalfReuse: 'c'/4 HalfReuse: 'B'/5 HalfReuse: 'r'/1 } 'a'/6 'c'/7 'k'/8 'e'/9 't'/10 Tile{ ]] }
    if( ! refalrts::alloc_char( context[6], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[7], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[8], 'k' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[9], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[10], 't' ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[0], 'i' );
    refalrts::reinit_char( context[4], 'c' );
    refalrts::reinit_char( context[5], 'B' );
    refalrts::reinit_char( context[1], 'r' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[6], context[10] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & AllocatorCommandTag/4 # ElOpenCall/5 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::ident_left(  & ident_ElOpenCall<int>::name, context[2], context[3] );
    if( ! context[5] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: 'i'/0 HalfReuse: 'c'/4 HalfReuse: 'B'/5 HalfReuse: 'r'/1 } 'a'/6 'c'/7 'k'/8 'e'/9 't'/10 Tile{ ]] }
    if( ! refalrts::alloc_char( context[6], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[7], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[8], 'k' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[9], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[10], 't' ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[0], 'i' );
    refalrts::reinit_char( context[4], 'c' );
    refalrts::reinit_char( context[5], 'B' );
    refalrts::reinit_char( context[1], 'r' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[6], context[10] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & AllocatorCommandTag/4 # ElCloseBracket/5 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::ident_left(  & ident_ElCloseBracket<int>::name, context[2], context[3] );
    if( ! context[5] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: 'i'/0 HalfReuse: 'c'/4 HalfReuse: 'B'/5 HalfReuse: 'r'/1 } 'a'/6 'c'/7 'k'/8 'e'/9 't'/10 Tile{ ]] }
    if( ! refalrts::alloc_char( context[6], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[7], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[8], 'k' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[9], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[10], 't' ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[0], 'i' );
    refalrts::reinit_char( context[4], 'c' );
    refalrts::reinit_char( context[5], 'B' );
    refalrts::reinit_char( context[1], 'r' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[6], context[10] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & AllocatorCommandTag/4 # ElCloseADT/5 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::ident_left(  & ident_ElCloseADT<int>::name, context[2], context[3] );
    if( ! context[5] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: 'i'/0 HalfReuse: 'c'/4 HalfReuse: 'B'/5 HalfReuse: 'r'/1 } 'a'/6 'c'/7 'k'/8 'e'/9 't'/10 Tile{ ]] }
    if( ! refalrts::alloc_char( context[6], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[7], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[8], 'k' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[9], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[10], 't' ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[0], 'i' );
    refalrts::reinit_char( context[4], 'c' );
    refalrts::reinit_char( context[5], 'B' );
    refalrts::reinit_char( context[1], 'r' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[6], context[10] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & AllocatorCommandTag/4 # ElCloseCall/5 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::ident_left(  & ident_ElCloseCall<int>::name, context[2], context[3] );
    if( ! context[5] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: 'i'/0 HalfReuse: 'c'/4 HalfReuse: 'B'/5 HalfReuse: 'r'/1 } 'a'/6 'c'/7 'k'/8 'e'/9 't'/10 Tile{ ]] }
    if( ! refalrts::alloc_char( context[6], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[7], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[8], 'k' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[9], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[10], 't' ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[0], 'i' );
    refalrts::reinit_char( context[4], 'c' );
    refalrts::reinit_char( context[5], 'B' );
    refalrts::reinit_char( context[1], 'r' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[6], context[10] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & AllocatorCommandTag/4 # ElString/5 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = refalrts::ident_left(  & ident_ElString<int>::name, context[2], context[3] );
  if( ! context[5] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ HalfReuse: 'i'/0 HalfReuse: 'c'/4 HalfReuse: 'S'/5 HalfReuse: 't'/1 } 'r'/6 'i'/7 'n'/8 'g'/9 Tile{ ]] }
  if( ! refalrts::alloc_char( context[6], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[7], 'i' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[8], 'n' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[9], 'g' ) )
    return refalrts::cNoMemory;
  refalrts::reinit_char( context[0], 'i' );
  refalrts::reinit_char( context[4], 'c' );
  refalrts::reinit_char( context[5], 'S' );
  refalrts::reinit_char( context[1], 't' );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[6], context[9] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult AllocatorCommandInfo(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 26 elems
  refalrts::Iter context[26];
  refalrts::zeros( context, 26 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & AllocatorCommandInfo/4 # ElChar/5 s.Char#1/6 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::ident_left(  & ident_ElChar<int>::name, context[2], context[3] );
    if( ! context[5] )
      continue;
    if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: '\''/0 HalfReuse: </4 HalfReuse: & Escape/5 AsIs: s.Char#1/6 AsIs: >/1 } '\''/7 Tile{ ]] }
    if( ! refalrts::alloc_char( context[7], '\'' ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[0], '\'' );
    refalrts::reinit_open_call( context[4] );
    refalrts::reinit_name( context[5], Escape, "Escape" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[7], context[7] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & AllocatorCommandInfo/4 # ElName/5 s.NameId#1/6 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::ident_left(  & ident_ElName<int>::name, context[2], context[3] );
    if( ! context[5] )
      continue;
    if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </4 HalfReuse: & StrFromInt/5 AsIs: s.NameId#1/6 AsIs: >/1 ]] }
    refalrts::reinit_open_call( context[4] );
    refalrts::reinit_name( context[5], StrFromInt, "StrFromInt" );
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
    // </0 & AllocatorCommandInfo/4 # ElHugeNumber/5 s.NumberId#1/6 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::ident_left(  & ident_ElHugeNumber<int>::name, context[2], context[3] );
    if( ! context[5] )
      continue;
    if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </4 HalfReuse: & StrFromInt/5 AsIs: s.NumberId#1/6 AsIs: >/1 ]] }
    refalrts::reinit_open_call( context[4] );
    refalrts::reinit_name( context[5], StrFromInt, "StrFromInt" );
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
    // </0 & AllocatorCommandInfo/4 # ElNumber/5 s.Number#1/6 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::ident_left(  & ident_ElNumber<int>::name, context[2], context[3] );
    if( ! context[5] )
      continue;
    if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </4 HalfReuse: & StrFromInt/5 AsIs: s.Number#1/6 AsIs: >/1 ]] }
    refalrts::reinit_open_call( context[4] );
    refalrts::reinit_name( context[5], StrFromInt, "StrFromInt" );
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
    // </0 & AllocatorCommandInfo/4 # ElIdent/5 s.NameId#1/6 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::ident_left(  & ident_ElIdent<int>::name, context[2], context[3] );
    if( ! context[5] )
      continue;
    if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </4 HalfReuse: & StrFromInt/5 AsIs: s.NameId#1/6 AsIs: >/1 ]] }
    refalrts::reinit_open_call( context[4] );
    refalrts::reinit_name( context[5], StrFromInt, "StrFromInt" );
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
    // </0 & AllocatorCommandInfo/4 # ElOpenBracket/5 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::ident_left(  & ident_ElOpenBracket<int>::name, context[2], context[3] );
    if( ! context[5] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: 'r'/0 HalfReuse: 'e'/4 HalfReuse: 'f'/5 HalfReuse: 'a'/1 } 'l'/6 'r'/7 't'/8 's'/9 ':'/10 ':'/11 'i'/12 'b'/13 'O'/14 'p'/15 'e'/16 'n'/17 'B'/18 'r'/19 'a'/20 'c'/21 'k'/22 'e'/23 't'/24 Tile{ ]] }
    if( ! refalrts::alloc_char( context[6], 'l' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[7], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[8], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[9], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[10], ':' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[11], ':' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[12], 'i' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[13], 'b' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[14], 'O' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[15], 'p' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[16], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[17], 'n' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[18], 'B' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[19], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[20], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[21], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[22], 'k' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[23], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[24], 't' ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[0], 'r' );
    refalrts::reinit_char( context[4], 'e' );
    refalrts::reinit_char( context[5], 'f' );
    refalrts::reinit_char( context[1], 'a' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[6], context[24] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & AllocatorCommandInfo/4 # ElOpenADT/5 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::ident_left(  & ident_ElOpenADT<int>::name, context[2], context[3] );
    if( ! context[5] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: 'r'/0 HalfReuse: 'e'/4 HalfReuse: 'f'/5 HalfReuse: 'a'/1 } 'l'/6 'r'/7 't'/8 's'/9 ':'/10 ':'/11 'i'/12 'b'/13 'O'/14 'p'/15 'e'/16 'n'/17 'A'/18 'D'/19 'T'/20 Tile{ ]] }
    if( ! refalrts::alloc_char( context[6], 'l' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[7], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[8], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[9], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[10], ':' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[11], ':' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[12], 'i' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[13], 'b' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[14], 'O' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[15], 'p' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[16], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[17], 'n' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[18], 'A' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[19], 'D' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[20], 'T' ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[0], 'r' );
    refalrts::reinit_char( context[4], 'e' );
    refalrts::reinit_char( context[5], 'f' );
    refalrts::reinit_char( context[1], 'a' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[6], context[20] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & AllocatorCommandInfo/4 # ElOpenCall/5 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::ident_left(  & ident_ElOpenCall<int>::name, context[2], context[3] );
    if( ! context[5] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: 'r'/0 HalfReuse: 'e'/4 HalfReuse: 'f'/5 HalfReuse: 'a'/1 } 'l'/6 'r'/7 't'/8 's'/9 ':'/10 ':'/11 'i'/12 'b'/13 'O'/14 'p'/15 'e'/16 'n'/17 'C'/18 'a'/19 'l'/20 'l'/21 Tile{ ]] }
    if( ! refalrts::alloc_char( context[6], 'l' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[7], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[8], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[9], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[10], ':' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[11], ':' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[12], 'i' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[13], 'b' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[14], 'O' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[15], 'p' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[16], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[17], 'n' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[18], 'C' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[19], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[20], 'l' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[21], 'l' ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[0], 'r' );
    refalrts::reinit_char( context[4], 'e' );
    refalrts::reinit_char( context[5], 'f' );
    refalrts::reinit_char( context[1], 'a' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[6], context[21] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & AllocatorCommandInfo/4 # ElCloseBracket/5 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::ident_left(  & ident_ElCloseBracket<int>::name, context[2], context[3] );
    if( ! context[5] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: 'r'/0 HalfReuse: 'e'/4 HalfReuse: 'f'/5 HalfReuse: 'a'/1 } 'l'/6 'r'/7 't'/8 's'/9 ':'/10 ':'/11 'i'/12 'b'/13 'C'/14 'l'/15 'o'/16 's'/17 'e'/18 'B'/19 'r'/20 'a'/21 'c'/22 'k'/23 'e'/24 't'/25 Tile{ ]] }
    if( ! refalrts::alloc_char( context[6], 'l' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[7], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[8], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[9], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[10], ':' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[11], ':' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[12], 'i' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[13], 'b' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[14], 'C' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[15], 'l' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[16], 'o' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[17], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[18], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[19], 'B' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[20], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[21], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[22], 'c' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[23], 'k' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[24], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[25], 't' ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[0], 'r' );
    refalrts::reinit_char( context[4], 'e' );
    refalrts::reinit_char( context[5], 'f' );
    refalrts::reinit_char( context[1], 'a' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[6], context[25] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & AllocatorCommandInfo/4 # ElCloseADT/5 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::ident_left(  & ident_ElCloseADT<int>::name, context[2], context[3] );
    if( ! context[5] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: 'r'/0 HalfReuse: 'e'/4 HalfReuse: 'f'/5 HalfReuse: 'a'/1 } 'l'/6 'r'/7 't'/8 's'/9 ':'/10 ':'/11 'i'/12 'b'/13 'C'/14 'l'/15 'o'/16 's'/17 'e'/18 'A'/19 'D'/20 'T'/21 Tile{ ]] }
    if( ! refalrts::alloc_char( context[6], 'l' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[7], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[8], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[9], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[10], ':' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[11], ':' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[12], 'i' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[13], 'b' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[14], 'C' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[15], 'l' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[16], 'o' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[17], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[18], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[19], 'A' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[20], 'D' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[21], 'T' ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[0], 'r' );
    refalrts::reinit_char( context[4], 'e' );
    refalrts::reinit_char( context[5], 'f' );
    refalrts::reinit_char( context[1], 'a' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[6], context[21] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & AllocatorCommandInfo/4 # ElCloseCall/5 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::ident_left(  & ident_ElCloseCall<int>::name, context[2], context[3] );
    if( ! context[5] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: 'r'/0 HalfReuse: 'e'/4 HalfReuse: 'f'/5 HalfReuse: 'a'/1 } 'l'/6 'r'/7 't'/8 's'/9 ':'/10 ':'/11 'i'/12 'b'/13 'C'/14 'l'/15 'o'/16 's'/17 'e'/18 'C'/19 'a'/20 'l'/21 'l'/22 Tile{ ]] }
    if( ! refalrts::alloc_char( context[6], 'l' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[7], 'r' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[8], 't' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[9], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[10], ':' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[11], ':' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[12], 'i' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[13], 'b' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[14], 'C' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[15], 'l' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[16], 'o' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[17], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[18], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[19], 'C' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[20], 'a' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[21], 'l' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[22], 'l' ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[0], 'r' );
    refalrts::reinit_char( context[4], 'e' );
    refalrts::reinit_char( context[5], 'f' );
    refalrts::reinit_char( context[1], 'a' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[6], context[22] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & AllocatorCommandInfo/4 # ElString/5 s.StringId#1/6 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = refalrts::ident_left(  & ident_ElString<int>::name, context[2], context[3] );
  if( ! context[5] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  </0 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ HalfReuse: </4 HalfReuse: & StrFromInt/5 AsIs: s.StringId#1/6 AsIs: >/1 ]] }
  refalrts::reinit_open_call( context[4] );
  refalrts::reinit_name( context[5], StrFromInt, "StrFromInt" );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[4] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[4];
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}


//End of file
