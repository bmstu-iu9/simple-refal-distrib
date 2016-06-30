// Automatically generated file. Don't edit!
#include "refalrts.h"


extern refalrts::FnResult Add(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Compare(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Dec(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult EscapeChar(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Fetch(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult GST(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult HighLevelRASL_OptResult(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Inc(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Map(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult MapReduce(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Seq(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Sort(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult StrFromInt(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult WriteLine(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult AddOffsets(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult BeginOffset(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult BuildString(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult CalcRes(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult CollectStrings(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult CollectTiles(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult CollectTiles_Alloc(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult DoFreezeRanges(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult DoFreezeRanges_MakeSavers(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult DoGenPattern(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult EndOffset(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult ExtractRanges(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult FixupEVarIndexes(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult FixupEVarIndexes_PatchNumber(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult FixupMarkedPatternIndexes(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult FixupMarkedPatternTerm(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult FlatResult(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult FoldOpenELoops(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult FreezeRanges(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult GenPattern(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult GenPushLink(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult GenResult(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult GenSplices(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult GenTrash(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult GetRangeReassigns(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult HighLevelRASL_Function(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult HighLevelRASL_Sentence(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult Inc2(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult IncVarOffset(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult ModifyResult(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult ModifyTile(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult Offset(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult PrintVar(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult Reverse(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult TextFromExpr(refalrts::Iter arg_begin, refalrts::Iter arg_end);
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

// identifier #AsIs
template <typename SREFAL_PARAM_INT>
struct ident_AsIs {
  static const char *name() {
    return "AsIs";
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

// identifier #CmdEmpty
template <typename SREFAL_PARAM_INT>
struct ident_CmdEmpty {
  static const char *name() {
    return "CmdEmpty";
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

// identifier #CmdIdentSave
template <typename SREFAL_PARAM_INT>
struct ident_CmdIdentSave {
  static const char *name() {
    return "CmdIdentSave";
  }
};

// identifier #CmdInitB0_Lite
template <typename SREFAL_PARAM_INT>
struct ident_CmdInitB0_Lite {
  static const char *name() {
    return "CmdInitB0_Lite";
  }
};

// identifier #CmdInsertTile
template <typename SREFAL_PARAM_INT>
struct ident_CmdInsertTile {
  static const char *name() {
    return "CmdInsertTile";
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

// identifier #CmdNameSave
template <typename SREFAL_PARAM_INT>
struct ident_CmdNameSave {
  static const char *name() {
    return "CmdNameSave";
  }
};

// identifier #CmdNumberSave
template <typename SREFAL_PARAM_INT>
struct ident_CmdNumberSave {
  static const char *name() {
    return "CmdNumberSave";
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

// identifier #CmdSetRes
template <typename SREFAL_PARAM_INT>
struct ident_CmdSetRes {
  static const char *name() {
    return "CmdSetRes";
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

// identifier #HalfReuse
template <typename SREFAL_PARAM_INT>
struct ident_HalfReuse {
  static const char *name() {
    return "HalfReuse";
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

// identifier #LEFT_EDGE
template <typename SREFAL_PARAM_INT>
struct ident_LEFT_EDGE {
  static const char *name() {
    return "LEFT_EDGE";
  }
};

// identifier #NoOffset
template <typename SREFAL_PARAM_INT>
struct ident_NoOffset {
  static const char *name() {
    return "NoOffset";
  }
};

// identifier #RIGHT_EDGE
template <typename SREFAL_PARAM_INT>
struct ident_RIGHT_EDGE {
  static const char *name() {
    return "RIGHT_EDGE";
  }
};

// identifier #Range
template <typename SREFAL_PARAM_INT>
struct ident_Range {
  static const char *name() {
    return "Range";
  }
};

// identifier #RemovedTile
template <typename SREFAL_PARAM_INT>
struct ident_RemovedTile {
  static const char *name() {
    return "RemovedTile";
  }
};

// identifier #Reuse
template <typename SREFAL_PARAM_INT>
struct ident_Reuse {
  static const char *name() {
    return "Reuse";
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

// identifier #Tile
template <typename SREFAL_PARAM_INT>
struct ident_Tile {
  static const char *name() {
    return "Tile";
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

// identifier #TkCloseCall
template <typename SREFAL_PARAM_INT>
struct ident_TkCloseCall {
  static const char *name() {
    return "TkCloseCall";
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

// identifier #TkOpenCall
template <typename SREFAL_PARAM_INT>
struct ident_TkOpenCall {
  static const char *name() {
    return "TkOpenCall";
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

// identifier #TkVariableCopy
template <typename SREFAL_PARAM_INT>
struct ident_TkVariableCopy {
  static const char *name() {
    return "TkVariableCopy";
  }
};

static refalrts::FnResult lambda_HighLevelRASL_OptResult_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_HighLevelRASL_OptResult_0/4 (/7 # Function/9 s.ScopeClass#2/10 (/13 e.Name#2/11 )/14 e.Sentences#2/5 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_Function<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[10], context[5], context[6] ) )
      continue;
    context[11] = 0;
    context[12] = 0;
    context[13] = refalrts::brackets_left( context[11], context[12], context[5], context[6] );
    if( ! context[13] )
      continue;
    refalrts::bracket_pointers(context[13], context[14]);
    // closed e.Name#2 as range 11
    // closed e.Sentences#2 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & lambda_HighLevelRASL_OptResult_0/4 {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </7 HalfReuse: & HighLevelRASL_Function/9 AsIs: s.ScopeClass#2/10 AsIs: (/13 AsIs: e.Name#2/11 AsIs: )/14 AsIs: e.Sentences#2/5 HalfReuse: >/8 } Tile{ ]] }
    refalrts::reinit_open_call( context[7] );
    refalrts::reinit_name( context[9], HighLevelRASL_Function, "HighLevelRASL_Function" );
    refalrts::reinit_close_call( context[8] );
    refalrts::push_stack( context[8] );
    refalrts::push_stack( context[7] );
    refalrts::link_brackets( context[13], context[14] );
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
    // </0 & lambda_HighLevelRASL_OptResult_0/4 (/7 # Enum/9 s.ScopeClass#2/10 e.Name#2/5 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_Enum<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[10], context[5], context[6] ) )
      continue;
    // closed e.Name#2 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & lambda_HighLevelRASL_OptResult_0/4 {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 Reuse: # CmdEnum/9 AsIs: s.ScopeClass#2/10 AsIs: e.Name#2/5 AsIs: )/8 } Tile{ ]] }
    refalrts::update_ident( context[9], & ident_CmdEnum<int>::name );
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
    // </0 & lambda_HighLevelRASL_OptResult_0/4 (/7 # Swap/9 s.ScopeClass#2/10 e.Name#2/5 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_Swap<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[10], context[5], context[6] ) )
      continue;
    // closed e.Name#2 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & lambda_HighLevelRASL_OptResult_0/4 {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 Reuse: # CmdSwap/9 AsIs: s.ScopeClass#2/10 AsIs: e.Name#2/5 AsIs: )/8 } Tile{ ]] }
    refalrts::update_ident( context[9], & ident_CmdSwap<int>::name );
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
    // </0 & lambda_HighLevelRASL_OptResult_0/4 (/7 # Stub/9 s.ScopeClass#2/10 e.Name#2/5 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_Stub<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[10], context[5], context[6] ) )
      continue;
    // closed e.Name#2 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & lambda_HighLevelRASL_OptResult_0/4 (/7 # Stub/9 s.ScopeClass#2/10 e.Name#2/5 )/8 >/1 {REMOVED TILE} 
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
    // </0 & lambda_HighLevelRASL_OptResult_0/4 (/7 # Declaration/9 s.ScopeClass#2/10 e.Name#2/5 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_Declaration<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[10], context[5], context[6] ) )
      continue;
    // closed e.Name#2 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & lambda_HighLevelRASL_OptResult_0/4 {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 Reuse: # CmdDeclaration/9 AsIs: s.ScopeClass#2/10 AsIs: e.Name#2/5 AsIs: )/8 } Tile{ ]] }
    refalrts::update_ident( context[9], & ident_CmdDeclaration<int>::name );
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
    // </0 & lambda_HighLevelRASL_OptResult_0/4 (/7 # Ident/9 e.Name#2/5 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_Ident<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Name#2 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & lambda_HighLevelRASL_OptResult_0/4 {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 Reuse: # CmdDefineIdent/9 AsIs: e.Name#2/5 AsIs: )/8 } Tile{ ]] }
    refalrts::update_ident( context[9], & ident_CmdDefineIdent<int>::name );
    refalrts::link_brackets( context[7], context[8] );
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
  // </0 & lambda_HighLevelRASL_OptResult_0/4 (/7 # Separator/9 )/8 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  context[9] = refalrts::ident_left(  & ident_Separator<int>::name, context[5], context[6] );
  if( ! context[9] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  </0 & lambda_HighLevelRASL_OptResult_0/4 {REMOVED TILE}  >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 Reuse: # CmdSeparator/9 AsIs: )/8 } Tile{ ]] }
  refalrts::update_ident( context[9], & ident_CmdSeparator<int>::name );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

refalrts::FnResult HighLevelRASL_OptResult(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & HighLevelRASL_OptResult/4 e.ProgramElements#1/2 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.ProgramElements#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Map/0 Reuse: & lambda_HighLevelRASL_OptResult_0/4 AsIs: e.ProgramElements#1/2 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[5] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_name( context[0], Map, "Map" );
  refalrts::update_name( context[4], lambda_HighLevelRASL_OptResult_0, "lambda_HighLevelRASL_OptResult_0" );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[5] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult lambda_HighLevelRASL_Function_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & lambda_HighLevelRASL_Function_0/4 (/7 e.Name#1/5 )/8 (/11 (/15 e.Pattern#2/13 )/16 (/19 e.Result#2/17 )/20 )/12 >/1
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
  context[15] = refalrts::brackets_left( context[13], context[14], context[9], context[10] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[15], context[16]);
  context[17] = 0;
  context[18] = 0;
  context[19] = refalrts::brackets_left( context[17], context[18], context[9], context[10] );
  if( ! context[19] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[19], context[20]);
  if( ! refalrts::empty_seq( context[9], context[10] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Name#1 as range 5
  // closed e.Pattern#2 as range 13
  // closed e.Result#2 as range 17

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  )/8 (/11 {REMOVED TILE} 
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: </4 HalfReuse: & HighLevelRASL_Sentence/7 } Tile{ AsIs: e.Name#1/5 } Tile{ AsIs: (/15 AsIs: e.Pattern#2/13 AsIs: )/16 AsIs: (/19 AsIs: e.Result#2/17 AsIs: )/20 HalfReuse: >/12 HalfReuse: )/1 ]] }
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_open_call( context[4] );
  refalrts::reinit_name( context[7], HighLevelRASL_Sentence, "HighLevelRASL_Sentence" );
  refalrts::reinit_close_call( context[12] );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[0], context[1] );
  refalrts::push_stack( context[12] );
  refalrts::push_stack( context[4] );
  refalrts::link_brackets( context[19], context[20] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[15];
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[7], res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult lambda_HighLevelRASL_Function_1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 8 elems
  refalrts::Iter context[8];
  refalrts::zeros( context, 8 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_HighLevelRASL_Function_1/4 s.MaxMemory#2/6 s.Memory#2/7 '<'/5 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::char_right( '<', context[2], context[3] );
    if( ! context[5] )
      continue;
    if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[7], context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  & lambda_HighLevelRASL_Function_1/4 s.MaxMemory#2/6 s.Memory#2/7 '<'/5 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: s.Memory2 #7/0 } Tile{ ]] }
    refalrts::reinit_svar( context[0], context[7] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[0], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & lambda_HighLevelRASL_Function_1/4 s.MaxMemory#2/5 s.Memory#2/6 s.Other#3/7 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[7], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  & lambda_HighLevelRASL_Function_1/4 s.MaxMemory#2/5 s.Memory#2/6 s.Other#3/7 >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ HalfReuse: s.MaxMemory2 #5/0 } Tile{ ]] }
  refalrts::reinit_svar( context[0], context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[0], res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult lambda_HighLevelRASL_Function_2(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 23 elems
  refalrts::Iter context[23];
  refalrts::zeros( context, 23 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & lambda_HighLevelRASL_Function_2/4 s.MaxMemory#2/14 (/7 (/11 # CmdIssueMem/13 s.Memory#2/15 )/12 e.Sentence#2/5 )/8 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  context[9] = 0;
  context[10] = 0;
  context[11] = refalrts::brackets_left( context[9], context[10], context[5], context[6] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[11], context[12]);
  context[13] = refalrts::ident_left(  & ident_CmdIssueMem<int>::name, context[9], context[10] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  // closed e.Sentence#2 as range 5
  if( ! refalrts::svar_left( context[14], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[15], context[9], context[10] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[9], context[10] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } </16 & Fetch/17 Tile{ AsIs: </0 Reuse: & Compare/4 AsIs: s.MaxMemory#2/14 HalfReuse: s.Memory2 #15/7 HalfReuse: >/11 HalfReuse: </13 } & CreateClosure /18 & lambda_HighLevelRASL_Function_1/19 s.MaxMemory#2/14/20 Tile{ AsIs: s.Memory#2/15 } Tile{ AsIs: >/1 } >/21 (/22 Tile{ HalfReuse: # CmdSentence/12 AsIs: e.Sentence#2/5 AsIs: )/8 } Tile{ ]] }
  if( ! refalrts::alloc_open_call( context[16] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[17], Fetch, "Fetch" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[18], refalrts::create_closure, "refalrts::create_closure" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[19], lambda_HighLevelRASL_Function_1, "lambda_HighLevelRASL_Function_1" ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_stvar(context[20], context[14]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[21] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[22] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], Compare, "Compare" );
  refalrts::reinit_svar( context[7], context[15] );
  refalrts::reinit_close_call( context[11] );
  refalrts::reinit_open_call( context[13] );
  refalrts::reinit_ident( context[12], & ident_CmdSentence<int>::name );
  refalrts::link_brackets( context[22], context[8] );
  refalrts::push_stack( context[21] );
  refalrts::push_stack( context[16] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[13] );
  refalrts::push_stack( context[11] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[12], context[8] );
  res = refalrts::splice_evar( res, context[21], context[22] );
  res = refalrts::splice_evar( res, context[1], context[1] );
  res = refalrts::splice_evar( res, context[15], context[15] );
  res = refalrts::splice_evar( res, context[18], context[20] );
  res = refalrts::splice_evar( res, context[0], context[13] );
  res = refalrts::splice_evar( res, context[16], context[17] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult lambda_HighLevelRASL_Function_3(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_HighLevelRASL_Function_3/4 e.Commands#3/2 (/7 # CmdOpenELoop/9 e.OpenELoop#3/5 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_CmdOpenELoop<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    // closed e.Commands#3 as range 2
    // closed e.OpenELoop#3 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: e.Commands#3/2 } Tile{ AsIs: (/7 AsIs: # CmdOpenELoop/9 AsIs: e.OpenELoop#3/5 AsIs: )/8 HalfReuse: (/1 } Tile{ HalfReuse: # CmdFail/0 HalfReuse: )/4 } Tile{ ]] }
    refalrts::reinit_open_bracket( context[1] );
    refalrts::reinit_ident( context[0], & ident_CmdFail<int>::name );
    refalrts::reinit_close_bracket( context[4] );
    refalrts::link_brackets( context[1], context[4] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[7], context[1] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & lambda_HighLevelRASL_Function_3/4 e.LastSentence#3/2 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.LastSentence#3 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  </0 & lambda_HighLevelRASL_Function_3/4 {REMOVED TILE}  >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ AsIs: e.LastSentence#3/2 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult lambda_HighLevelRASL_Function_4(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_HighLevelRASL_Function_4/4 s.ScopeClass#1/10 (/13 e.Name#1/11 )/14 s.MaxMemory#2/15 e.Sentences#2/2 (/7 # CmdSentence/9 e.LastSentence#2/5 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_CmdSentence<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    // closed e.LastSentence#2 as range 5
    if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
      continue;
    context[11] = 0;
    context[12] = 0;
    context[13] = refalrts::brackets_left( context[11], context[12], context[2], context[3] );
    if( ! context[13] )
      continue;
    refalrts::bracket_pointers(context[13], context[14]);
    // closed e.Name#1 as range 11
    if( ! refalrts::svar_left( context[15], context[2], context[3] ) )
      continue;
    // closed e.Sentences#2 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # Function/4 AsIs: s.ScopeClass#1/10 AsIs: (/13 AsIs: e.Name#1/11 AsIs: )/14 } (/16 # CmdIssueMem/17 Tile{ AsIs: s.MaxMemory#2/15 } )/18 Tile{ AsIs: e.Sentences#2/2 } Tile{ HalfReuse: </7 HalfReuse: & Fetch/9 AsIs: e.LastSentence#2/5 HalfReuse: & lambda_HighLevelRASL_Function_3/8 AsIs: >/1 } )/19 Tile{ ]] }
    if( ! refalrts::alloc_open_bracket( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[17], & ident_CmdIssueMem<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[18] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[19] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], & ident_Function<int>::name );
    refalrts::reinit_open_call( context[7] );
    refalrts::reinit_name( context[9], Fetch, "Fetch" );
    refalrts::reinit_name( context[8], lambda_HighLevelRASL_Function_3, "lambda_HighLevelRASL_Function_3" );
    refalrts::link_brackets( context[0], context[19] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[7] );
    refalrts::link_brackets( context[16], context[18] );
    refalrts::link_brackets( context[13], context[14] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[19], context[19] );
    res = refalrts::splice_evar( res, context[7], context[1] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[18], context[18] );
    res = refalrts::splice_evar( res, context[15], context[15] );
    res = refalrts::splice_evar( res, context[16], context[17] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & lambda_HighLevelRASL_Function_4/4 s.ScopeClass#1/10 (/8 e.Name#1/6 )/9 0/5 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = refalrts::number_right( 0UL, context[2], context[3] );
  if( ! context[5] )
    return refalrts::cRecognitionImpossible;
  context[6] = 0;
  context[7] = 0;
  context[8] = refalrts::brackets_right( context[6], context[7], context[2], context[3] );
  if( ! context[8] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[8], context[9]);
  // closed e.Name#1 as range 6
  if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  (/8 {REMOVED TILE}  )/9 0/5 {REMOVED TILE} 
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # CmdEnum/4 AsIs: s.ScopeClass#1/10 } Tile{ AsIs: e.Name#1/6 } Tile{ HalfReuse: )/1 ]] }
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_ident( context[4], & ident_CmdEnum<int>::name );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[0], context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[6], context[7] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[10], res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult HighLevelRASL_Function(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 33 elems
  refalrts::Iter context[33];
  refalrts::zeros( context, 33 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & HighLevelRASL_Function/4 s.ScopeClass#1/5 (/8 e.Name#1/6 )/9 e.Sentences#1/2 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[6] = 0;
  context[7] = 0;
  context[8] = refalrts::brackets_left( context[6], context[7], context[2], context[3] );
  if( ! context[8] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[8], context[9]);
  // closed e.Name#1 as range 6
  // closed e.Sentences#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } </10 & Fetch/11 Tile{ AsIs: e.Sentences#1/2 } </12 & Seq/13 (/14 & Map/15 </16 & CreateClosure /17 & lambda_HighLevelRASL_Function_0/18 (/19 e.Name#1/6/20 )/22 >/23 )/24 (/25 & MapReduce/26 & lambda_HighLevelRASL_Function_2/27 0/28 )/29 </30 Tile{ HalfReuse: & CreateClosure /0 Reuse: & lambda_HighLevelRASL_Function_4/4 AsIs: s.ScopeClass#1/5 AsIs: (/8 AsIs: e.Name#1/6 AsIs: )/9 } >/31 >/32 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[11], Fetch, "Fetch" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[13], Seq, "Seq" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[15], Map, "Map" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[16] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[17], refalrts::create_closure, "refalrts::create_closure" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[18], lambda_HighLevelRASL_Function_0, "lambda_HighLevelRASL_Function_0" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[19] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[20], context[21], context[6], context[7]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[22] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[23] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[24] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[25] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[26], MapReduce, "MapReduce" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[27], lambda_HighLevelRASL_Function_2, "lambda_HighLevelRASL_Function_2" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_number( context[28], 0UL ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[29] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[30] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[31] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[32] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_name( context[0], refalrts::create_closure, "refalrts::create_closure" );
  refalrts::update_name( context[4], lambda_HighLevelRASL_Function_4, "lambda_HighLevelRASL_Function_4" );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[10] );
  refalrts::push_stack( context[32] );
  refalrts::push_stack( context[12] );
  refalrts::push_stack( context[31] );
  refalrts::push_stack( context[30] );
  refalrts::link_brackets( context[8], context[9] );
  refalrts::link_brackets( context[25], context[29] );
  refalrts::link_brackets( context[14], context[24] );
  refalrts::push_stack( context[23] );
  refalrts::push_stack( context[16] );
  refalrts::link_brackets( context[19], context[22] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[31], context[32] );
  res = refalrts::splice_evar( res, context[0], context[9] );
  res = refalrts::splice_evar( res, context[12], context[30] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[10], context[11] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult lambda_HighLevelRASL_Sentence_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 26 elems
  refalrts::Iter context[26];
  refalrts::zeros( context, 26 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & lambda_HighLevelRASL_Sentence_0/4 (/7 e.PatternCommands#2/5 )/8 (/11 e.Trash#3/9 )/12 s.ContextOffset#4/13 e.MarkedResult#4/2 >/1
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
  // closed e.PatternCommands#2 as range 5
  // closed e.Trash#3 as range 9
  if( ! refalrts::svar_left( context[13], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.MarkedResult#4 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & FoldOpenELoops/4 AsIs: (/7 } # CmdIssueMem/14 Tile{ AsIs: s.ContextOffset#4/13 } )/15 (/16 # CmdInitB0_Lite/17 )/18 Tile{ AsIs: e.PatternCommands#2/5 } (/19 # CmdResetAllocator/20 )/21 </22 Tile{ HalfReuse: & GenResult/8 AsIs: (/11 AsIs: e.Trash#3/9 AsIs: )/12 } (/23 Tile{ AsIs: e.MarkedResult#4/2 } )/24 >/25 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_ident( context[14], & ident_CmdIssueMem<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[16] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[17], & ident_CmdInitB0_Lite<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[18] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[19] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[20], & ident_CmdResetAllocator<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[21] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[22] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[23] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[24] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[25] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], FoldOpenELoops, "FoldOpenELoops" );
  refalrts::reinit_name( context[8], GenResult, "GenResult" );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[25] );
  refalrts::push_stack( context[22] );
  refalrts::link_brackets( context[23], context[24] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[19], context[21] );
  refalrts::link_brackets( context[16], context[18] );
  refalrts::link_brackets( context[7], context[15] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[24], context[25] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[23], context[23] );
  res = refalrts::splice_evar( res, context[8], context[12] );
  res = refalrts::splice_evar( res, context[19], context[22] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[15], context[18] );
  res = refalrts::splice_evar( res, context[13], context[13] );
  res = refalrts::splice_evar( res, context[14], context[14] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult lambda_HighLevelRASL_Sentence_1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 27 elems
  refalrts::Iter context[27];
  refalrts::zeros( context, 27 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & lambda_HighLevelRASL_Sentence_1/4 s.ContextOffset#2/21 (/19 e.PatternVars#2/17 )/20 (/15 e.PatternCommands#2/13 )/16 (/11 e.Trash#3/9 )/12 (/7 e.MarkedResult#3/5 )/8 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  context[9] = 0;
  context[10] = 0;
  context[11] = refalrts::brackets_right( context[9], context[10], context[2], context[3] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[11], context[12]);
  context[13] = 0;
  context[14] = 0;
  context[15] = refalrts::brackets_right( context[13], context[14], context[2], context[3] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[15], context[16]);
  context[17] = 0;
  context[18] = 0;
  context[19] = refalrts::brackets_right( context[17], context[18], context[2], context[3] );
  if( ! context[19] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[19], context[20]);
  // closed e.PatternVars#2 as range 17
  // closed e.PatternCommands#2 as range 13
  // closed e.Trash#3 as range 9
  // closed e.MarkedResult#3 as range 5
  if( ! refalrts::svar_left( context[21], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } </22 & Fetch/23 Tile{ AsIs: </0 Reuse: & AddOffsets/4 AsIs: s.ContextOffset#2/21 AsIs: (/19 } Tile{ AsIs: e.PatternVars#2/17 } Tile{ AsIs: )/8 } Tile{ AsIs: e.MarkedResult#3/5 } >/24 </25 & CreateClosure /26 Tile{ HalfReuse: & lambda_HighLevelRASL_Sentence_0/20 AsIs: (/15 AsIs: e.PatternCommands#2/13 AsIs: )/16 AsIs: (/11 AsIs: e.Trash#3/9 AsIs: )/12 HalfReuse: >/7 } Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[22] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[23], Fetch, "Fetch" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[24] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[25] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[26], refalrts::create_closure, "refalrts::create_closure" ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], AddOffsets, "AddOffsets" );
  refalrts::reinit_name( context[20], lambda_HighLevelRASL_Sentence_0, "lambda_HighLevelRASL_Sentence_0" );
  refalrts::reinit_close_call( context[7] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[22] );
  refalrts::push_stack( context[7] );
  refalrts::push_stack( context[25] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::push_stack( context[24] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[19], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[20], context[7] );
  res = refalrts::splice_evar( res, context[24], context[26] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[17], context[18] );
  res = refalrts::splice_evar( res, context[0], context[19] );
  res = refalrts::splice_evar( res, context[22], context[23] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult lambda_HighLevelRASL_Sentence_2(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 45 elems
  refalrts::Iter context[45];
  refalrts::zeros( context, 45 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & lambda_HighLevelRASL_Sentence_2/4 (/7 e.Result#1/5 )/8 (/11 e.PatternVars#2/9 )/12 (/15 e.MarkedPattern#2/13 )/16 s.ContextOffset#2/21 (/19 e.PatternCommands#2/17 )/20 >/1
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
  context[19] = refalrts::brackets_right( context[17], context[18], context[2], context[3] );
  if( ! context[19] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[19], context[20]);
  // closed e.Result#1 as range 5
  // closed e.PatternVars#2 as range 9
  // closed e.MarkedPattern#2 as range 13
  // closed e.PatternCommands#2 as range 17
  if( ! refalrts::svar_left( context[21], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  s.ContextOffset#2/21 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 HalfReuse: </7 } & GST/22 Tile{ AsIs: (/19 } (/23 # LEFT_EDGE/24 Tile{ AsIs: )/16 } Tile{ AsIs: e.MarkedPattern#2/13 } (/25 # RIGHT_EDGE/26 )/27 )/28 (/29 (/30 # LEFT_EDGE/31 )/32 </33 & FlatResult/34 Tile{ AsIs: e.Result#1/5 } >/35 (/36 # RIGHT_EDGE/37 )/38 )/39 >/40 </41 & CreateClosure /42 & lambda_HighLevelRASL_Sentence_1/43 Tile{ HalfReuse: s.ContextOffset2 #21/8 AsIs: (/11 AsIs: e.PatternVars#2/9 AsIs: )/12 AsIs: (/15 } Tile{ AsIs: e.PatternCommands#2/17 } )/44 Tile{ HalfReuse: >/20 AsIs: >/1 ]] }
  if( ! refalrts::alloc_name( context[22], GST, "GST" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[23] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[24], & ident_LEFT_EDGE<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[25] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[26], & ident_RIGHT_EDGE<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[27] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[28] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[29] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[30] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[31], & ident_LEFT_EDGE<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[32] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[33] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[34], FlatResult, "FlatResult" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[35] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[36] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[37], & ident_RIGHT_EDGE<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[38] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[39] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[40] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[41] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[42], refalrts::create_closure, "refalrts::create_closure" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[43], lambda_HighLevelRASL_Sentence_1, "lambda_HighLevelRASL_Sentence_1" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[44] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], Fetch, "Fetch" );
  refalrts::reinit_open_call( context[7] );
  refalrts::reinit_svar( context[8], context[21] );
  refalrts::reinit_close_call( context[20] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[20] );
  refalrts::push_stack( context[41] );
  refalrts::link_brackets( context[15], context[44] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::push_stack( context[40] );
  refalrts::push_stack( context[7] );
  refalrts::link_brackets( context[29], context[39] );
  refalrts::link_brackets( context[36], context[38] );
  refalrts::push_stack( context[35] );
  refalrts::push_stack( context[33] );
  refalrts::link_brackets( context[30], context[32] );
  refalrts::link_brackets( context[19], context[28] );
  refalrts::link_brackets( context[25], context[27] );
  refalrts::link_brackets( context[23], context[16] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[20];
  res = refalrts::splice_evar( res, context[44], context[44] );
  res = refalrts::splice_evar( res, context[17], context[18] );
  res = refalrts::splice_evar( res, context[8], context[15] );
  res = refalrts::splice_evar( res, context[35], context[43] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[25], context[34] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[16], context[16] );
  res = refalrts::splice_evar( res, context[23], context[24] );
  res = refalrts::splice_evar( res, context[19], context[19] );
  res = refalrts::splice_evar( res, context[22], context[22] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[7], res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult HighLevelRASL_Sentence(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 23 elems
  refalrts::Iter context[23];
  refalrts::zeros( context, 23 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & HighLevelRASL_Sentence/4 e.Name#1/2 (/11 e.Pattern#1/9 )/12 (/7 e.Result#1/5 )/8 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  context[9] = 0;
  context[10] = 0;
  context[11] = refalrts::brackets_right( context[9], context[10], context[2], context[3] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[11], context[12]);
  // closed e.Name#1 as range 2
  // closed e.Pattern#1 as range 9
  // closed e.Result#1 as range 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } </13 & Fetch/14 </15 & GenPattern/16 (/17 Tile{ HalfReuse: # CallBrackets/0 HalfReuse: (/4 AsIs: e.Name#1/2 HalfReuse: )/11 AsIs: e.Pattern#1/9 AsIs: )/12 HalfReuse: >/7 } </18 & CreateClosure /19 & lambda_HighLevelRASL_Sentence_2/20 (/21 Tile{ AsIs: e.Result#1/5 } )/22 Tile{ HalfReuse: >/8 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[14], Fetch, "Fetch" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[16], GenPattern, "GenPattern" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[17] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[18] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[19], refalrts::create_closure, "refalrts::create_closure" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[20], lambda_HighLevelRASL_Sentence_2, "lambda_HighLevelRASL_Sentence_2" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[21] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[22] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_ident( context[0], & ident_CallBrackets<int>::name );
  refalrts::reinit_open_bracket( context[4] );
  refalrts::reinit_close_bracket( context[11] );
  refalrts::reinit_close_call( context[7] );
  refalrts::reinit_close_call( context[8] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[13] );
  refalrts::push_stack( context[8] );
  refalrts::push_stack( context[18] );
  refalrts::link_brackets( context[21], context[22] );
  refalrts::push_stack( context[7] );
  refalrts::push_stack( context[15] );
  refalrts::link_brackets( context[17], context[12] );
  refalrts::link_brackets( context[4], context[11] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[22], context[22] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[18], context[21] );
  res = refalrts::splice_evar( res, context[0], context[7] );
  res = refalrts::splice_evar( res, context[13], context[17] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult FlatResult(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 25 elems
  refalrts::Iter context[25];
  refalrts::zeros( context, 25 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & FlatResult/4 e.Range_B#1/5 (/9 # CallBrackets/11 e.SubRange_E#1/7 )/10 e.Range_E#1/12 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    refalrts::start_e_loop();
    do {
      context[12] = context[2];
      context[13] = context[3];
      context[7] = 0;
      context[8] = 0;
      context[9] = refalrts::brackets_left( context[7], context[8], context[12], context[13] );
      if( ! context[9] )
        continue;
      refalrts::bracket_pointers(context[9], context[10]);
      context[11] = refalrts::ident_left(  & ident_CallBrackets<int>::name, context[7], context[8] );
      if( ! context[11] )
        continue;
      // closed e.SubRange_E#1 as range 7
      // closed e.Range_E#1 as range 2

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlatResult/4 AsIs: e.Range_B#1/5 HalfReuse: >/9 HalfReuse: (/11 } # TkOpenCall/14 )/15 </16 & FlatResult/17 Tile{ AsIs: e.SubRange_E#1/7 } >/18 (/19 # TkCloseCall/20 )/21 </22 Tile{ HalfReuse: & FlatResult/10 AsIs: e.Range_E#1/12 AsIs: >/1 ]] }
      if( ! refalrts::alloc_ident( context[14], & ident_TkOpenCall<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[15] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_call( context[16] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[17], FlatResult, "FlatResult" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[18] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[19] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[20], & ident_TkCloseCall<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[21] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_call( context[22] ) )
        return refalrts::cNoMemory;
      refalrts::reinit_close_call( context[9] );
      refalrts::reinit_open_bracket( context[11] );
      refalrts::reinit_name( context[10], FlatResult, "FlatResult" );
      refalrts::push_stack( context[1] );
      refalrts::push_stack( context[22] );
      refalrts::link_brackets( context[19], context[21] );
      refalrts::push_stack( context[18] );
      refalrts::push_stack( context[16] );
      refalrts::link_brackets( context[11], context[15] );
      refalrts::push_stack( context[9] );
      refalrts::push_stack( context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[10];
      res = refalrts::splice_evar( res, context[18], context[22] );
      res = refalrts::splice_evar( res, context[7], context[8] );
      res = refalrts::splice_evar( res, context[14], context[17] );
      refalrts::use( res );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[5], context[6], context[2], context[3] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & FlatResult/4 e.Range_B#1/5 (/9 # Brackets/11 e.SubRange_E#1/7 )/10 e.Range_E#1/12 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    refalrts::start_e_loop();
    do {
      context[12] = context[2];
      context[13] = context[3];
      context[7] = 0;
      context[8] = 0;
      context[9] = refalrts::brackets_left( context[7], context[8], context[12], context[13] );
      if( ! context[9] )
        continue;
      refalrts::bracket_pointers(context[9], context[10]);
      context[11] = refalrts::ident_left(  & ident_Brackets<int>::name, context[7], context[8] );
      if( ! context[11] )
        continue;
      // closed e.SubRange_E#1 as range 7
      // closed e.Range_E#1 as range 2

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlatResult/4 AsIs: e.Range_B#1/5 HalfReuse: >/9 HalfReuse: (/11 } # TkOpenBracket/14 )/15 </16 & FlatResult/17 Tile{ AsIs: e.SubRange_E#1/7 } >/18 (/19 # TkCloseBracket/20 )/21 </22 Tile{ HalfReuse: & FlatResult/10 AsIs: e.Range_E#1/12 AsIs: >/1 ]] }
      if( ! refalrts::alloc_ident( context[14], & ident_TkOpenBracket<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[15] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_call( context[16] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[17], FlatResult, "FlatResult" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[18] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[19] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[20], & ident_TkCloseBracket<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[21] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_call( context[22] ) )
        return refalrts::cNoMemory;
      refalrts::reinit_close_call( context[9] );
      refalrts::reinit_open_bracket( context[11] );
      refalrts::reinit_name( context[10], FlatResult, "FlatResult" );
      refalrts::push_stack( context[1] );
      refalrts::push_stack( context[22] );
      refalrts::link_brackets( context[19], context[21] );
      refalrts::push_stack( context[18] );
      refalrts::push_stack( context[16] );
      refalrts::link_brackets( context[11], context[15] );
      refalrts::push_stack( context[9] );
      refalrts::push_stack( context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[10];
      res = refalrts::splice_evar( res, context[18], context[22] );
      res = refalrts::splice_evar( res, context[7], context[8] );
      res = refalrts::splice_evar( res, context[14], context[17] );
      refalrts::use( res );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[5], context[6], context[2], context[3] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & FlatResult/4 e.Range_B#1/5 (/9 # ADT_Brackets/11 (/14 e.Name#1/12 )/15 e.SubRange_E#1/7 )/10 e.Range_E#1/16 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    refalrts::start_e_loop();
    do {
      context[16] = context[2];
      context[17] = context[3];
      context[7] = 0;
      context[8] = 0;
      context[9] = refalrts::brackets_left( context[7], context[8], context[16], context[17] );
      if( ! context[9] )
        continue;
      refalrts::bracket_pointers(context[9], context[10]);
      context[11] = refalrts::ident_left(  & ident_ADT_Brackets<int>::name, context[7], context[8] );
      if( ! context[11] )
        continue;
      context[12] = 0;
      context[13] = 0;
      context[14] = refalrts::brackets_left( context[12], context[13], context[7], context[8] );
      if( ! context[14] )
        continue;
      refalrts::bracket_pointers(context[14], context[15]);
      // closed e.Name#1 as range 12
      // closed e.SubRange_E#1 as range 7
      // closed e.Range_E#1 as range 2

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
      //RESULT: Tile{ [[ } Tile{ AsIs: e.Range_B#1/5 } (/18 # TkOpenADT/19 Tile{ HalfReuse: )/9 HalfReuse: (/11 HalfReuse: # TkName/14 AsIs: e.Name#1/12 AsIs: )/15 } Tile{ AsIs: </0 AsIs: & FlatResult/4 } Tile{ AsIs: e.SubRange_E#1/7 } >/20 (/21 # TkCloseADT/22 )/23 </24 Tile{ HalfReuse: & FlatResult/10 AsIs: e.Range_E#1/16 AsIs: >/1 ]] }
      if( ! refalrts::alloc_open_bracket( context[18] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[19], & ident_TkOpenADT<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[20] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[21] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[22], & ident_TkCloseADT<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[23] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_call( context[24] ) )
        return refalrts::cNoMemory;
      refalrts::reinit_close_bracket( context[9] );
      refalrts::reinit_open_bracket( context[11] );
      refalrts::reinit_ident( context[14], & ident_TkName<int>::name );
      refalrts::reinit_name( context[10], FlatResult, "FlatResult" );
      refalrts::push_stack( context[1] );
      refalrts::push_stack( context[24] );
      refalrts::link_brackets( context[21], context[23] );
      refalrts::push_stack( context[20] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[11], context[15] );
      refalrts::link_brackets( context[18], context[9] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[10];
      res = refalrts::splice_evar( res, context[20], context[24] );
      res = refalrts::splice_evar( res, context[7], context[8] );
      res = refalrts::splice_evar( res, context[0], context[4] );
      res = refalrts::splice_evar( res, context[9], context[15] );
      res = refalrts::splice_evar( res, context[18], context[19] );
      res = refalrts::splice_evar( res, context[5], context[6] );
      refalrts::use( res );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[5], context[6], context[2], context[3] ) );
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & FlatResult/4 e.Range#1/2 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Range#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  </0 & FlatResult/4 {REMOVED TILE}  >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Range#1/2 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult lambda_GenResult_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_GenResult_0/4 (/7 # Tile/9 e.Tile#2/5 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_Tile<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Tile#2 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & lambda_GenResult_0/4 (/7 # Tile/9 e.Tile#2/5 )/8 >/1 {REMOVED TILE} 
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
    // </0 & lambda_GenResult_0/4 (/7 # TkVariableCopy/9 't'/10 e.Index#2/5 s.Level#2/13 s.SampleOffset#2/12 s.Offset#2/11 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_TkVariableCopy<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    context[10] = refalrts::char_left( 't', context[5], context[6] );
    if( ! context[10] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_right( context[11], context[5], context[6] ) )
      continue;
    if( ! refalrts::svar_right( context[12], context[5], context[6] ) )
      continue;
    if( ! refalrts::svar_right( context[13], context[5], context[6] ) )
      continue;
    // closed e.Index#2 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  e.Index#2/5 s.Level#2/13 s.SampleOffset#2/12 s.Offset#2/11 )/8 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # CmdCopyVar/4 HalfReuse: 'e'/7 HalfReuse: s.Offset2 #11/9 HalfReuse: s.SampleOffset2 #12/10 } Tile{ HalfReuse: )/1 ]] }
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], & ident_CmdCopyVar<int>::name );
    refalrts::reinit_char( context[7], 'e' );
    refalrts::reinit_svar( context[9], context[11] );
    refalrts::reinit_svar( context[10], context[12] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[0], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[10], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_GenResult_0/4 (/7 # TkVariableCopy/9 s.Mode#2/10 e.Index#2/5 s.Level#2/13 s.SampleOffset#2/12 s.Offset#2/11 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_TkVariableCopy<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[10], context[5], context[6] ) )
      continue;
    if( ! refalrts::svar_right( context[11], context[5], context[6] ) )
      continue;
    if( ! refalrts::svar_right( context[12], context[5], context[6] ) )
      continue;
    if( ! refalrts::svar_right( context[13], context[5], context[6] ) )
      continue;
    // closed e.Index#2 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & lambda_GenResult_0/4 {REMOVED TILE}  e.Index#2/5 s.Level#2/13 s.SampleOffset#2/12 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 Reuse: # CmdCopyVar/9 AsIs: s.Mode#2/10 } Tile{ AsIs: s.Offset#2/11 HalfReuse: s.SampleOffset2 #12/8 HalfReuse: )/1 ]] }
    refalrts::update_ident( context[9], & ident_CmdCopyVar<int>::name );
    refalrts::reinit_svar( context[8], context[12] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[7], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[11];
    res = refalrts::splice_evar( res, context[7], context[10] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_GenResult_0/4 (/7 # TkChar/9 s.Char#2/10 s.Offset#2/11 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_TkChar<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[10], context[5], context[6] ) )
      continue;
    if( ! refalrts::svar_left( context[11], context[5], context[6] ) )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  s.Offset#2/11 )/8 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # CmdAllocateElem/4 HalfReuse: s.Offset2 #11/7 Reuse: # ElChar/9 AsIs: s.Char#2/10 } Tile{ HalfReuse: )/1 ]] }
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], & ident_CmdAllocateElem<int>::name );
    refalrts::reinit_svar( context[7], context[11] );
    refalrts::update_ident( context[9], & ident_ElChar<int>::name );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[0], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[10], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_GenResult_0/4 (/7 # TkNumber/9 s.Number#2/10 s.Offset#2/11 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_TkNumber<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[10], context[5], context[6] ) )
      continue;
    if( ! refalrts::svar_left( context[11], context[5], context[6] ) )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  s.Offset#2/11 )/8 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # CmdAllocateElem/4 HalfReuse: s.Offset2 #11/7 Reuse: # ElNumber/9 AsIs: s.Number#2/10 } Tile{ HalfReuse: )/1 ]] }
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], & ident_CmdAllocateElem<int>::name );
    refalrts::reinit_svar( context[7], context[11] );
    refalrts::update_ident( context[9], & ident_ElNumber<int>::name );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[0], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[10], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_GenResult_0/4 (/7 # TkOpenBracket/9 s.Offset#2/10 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_TkOpenBracket<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[10], context[5], context[6] ) )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & lambda_GenResult_0/4 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 Reuse: # CmdAllocateElem/9 AsIs: s.Offset#2/10 HalfReuse: # ElOpenBracket/8 HalfReuse: )/1 ]] }
    refalrts::update_ident( context[9], & ident_CmdAllocateElem<int>::name );
    refalrts::reinit_ident( context[8], & ident_ElOpenBracket<int>::name );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[7], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[7];
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_GenResult_0/4 (/7 # TkCloseBracket/9 s.Offset#2/10 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_TkCloseBracket<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[10], context[5], context[6] ) )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & lambda_GenResult_0/4 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 Reuse: # CmdAllocateElem/9 AsIs: s.Offset#2/10 HalfReuse: # ElCloseBracket/8 HalfReuse: )/1 ]] }
    refalrts::update_ident( context[9], & ident_CmdAllocateElem<int>::name );
    refalrts::reinit_ident( context[8], & ident_ElCloseBracket<int>::name );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[7], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[7];
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_GenResult_0/4 (/7 # TkOpenADT/9 s.Offset#2/10 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_TkOpenADT<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[10], context[5], context[6] ) )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & lambda_GenResult_0/4 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 Reuse: # CmdAllocateElem/9 AsIs: s.Offset#2/10 HalfReuse: # ElOpenADT/8 HalfReuse: )/1 ]] }
    refalrts::update_ident( context[9], & ident_CmdAllocateElem<int>::name );
    refalrts::reinit_ident( context[8], & ident_ElOpenADT<int>::name );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[7], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[7];
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_GenResult_0/4 (/7 # TkCloseADT/9 s.Offset#2/10 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_TkCloseADT<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[10], context[5], context[6] ) )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & lambda_GenResult_0/4 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 Reuse: # CmdAllocateElem/9 AsIs: s.Offset#2/10 HalfReuse: # ElCloseADT/8 HalfReuse: )/1 ]] }
    refalrts::update_ident( context[9], & ident_CmdAllocateElem<int>::name );
    refalrts::reinit_ident( context[8], & ident_ElCloseADT<int>::name );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[7], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[7];
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_GenResult_0/4 (/7 # TkOpenCall/9 s.Offset#2/10 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_TkOpenCall<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[10], context[5], context[6] ) )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & lambda_GenResult_0/4 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 Reuse: # CmdAllocateElem/9 AsIs: s.Offset#2/10 HalfReuse: # ElOpenCall/8 HalfReuse: )/1 ]] }
    refalrts::update_ident( context[9], & ident_CmdAllocateElem<int>::name );
    refalrts::reinit_ident( context[8], & ident_ElOpenCall<int>::name );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[7], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[7];
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_GenResult_0/4 (/7 # TkCloseCall/9 s.Offset#2/10 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_TkCloseCall<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[10], context[5], context[6] ) )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & lambda_GenResult_0/4 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 Reuse: # CmdAllocateElem/9 AsIs: s.Offset#2/10 HalfReuse: # ElCloseCall/8 HalfReuse: )/1 ]] }
    refalrts::update_ident( context[9], & ident_CmdAllocateElem<int>::name );
    refalrts::reinit_ident( context[8], & ident_ElCloseCall<int>::name );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[7], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[7];
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_GenResult_0/4 (/7 # TkName/9 e.Name#2/5 s.Offset#2/10 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_TkName<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_right( context[10], context[5], context[6] ) )
      continue;
    // closed e.Name#2 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  s.Offset#2/10 )/8 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # CmdAllocateElem/4 HalfReuse: s.Offset2 #10/7 Reuse: # ElName/9 } Tile{ AsIs: e.Name#2/5 } Tile{ HalfReuse: )/1 ]] }
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], & ident_CmdAllocateElem<int>::name );
    refalrts::reinit_svar( context[7], context[10] );
    refalrts::update_ident( context[9], & ident_ElName<int>::name );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[0], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[9], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & lambda_GenResult_0/4 (/7 # TkIdentifier/9 e.Name#2/5 s.Offset#2/10 )/8 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  context[9] = refalrts::ident_left(  & ident_TkIdentifier<int>::name, context[5], context[6] );
  if( ! context[9] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_right( context[10], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Name#2 as range 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  s.Offset#2/10 )/8 {REMOVED TILE} 
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # CmdAllocateElem/4 HalfReuse: s.Offset2 #10/7 Reuse: # ElIdent/9 } Tile{ AsIs: e.Name#2/5 } Tile{ HalfReuse: )/1 ]] }
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_ident( context[4], & ident_CmdAllocateElem<int>::name );
  refalrts::reinit_svar( context[7], context[10] );
  refalrts::update_ident( context[9], & ident_ElIdent<int>::name );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[0], context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[9], res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult lambda_GenResult_1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_GenResult_1/4 (/7 # AsIs/9 t.Item#3/10 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_AsIs<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    context[11] = refalrts::tvar_left( context[10], context[5], context[6] );
    if( ! context[11] )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & lambda_GenResult_1/4 (/7 # AsIs/9 t.Item#3/10 )/8 >/1 {REMOVED TILE} 
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
    // </0 & lambda_GenResult_1/4 (/7 # HalfReuse/9 (/12 # TkChar/14 s.Char#3/15 s.Offset#3/16 )/13 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_HalfReuse<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    context[10] = 0;
    context[11] = 0;
    context[12] = refalrts::brackets_left( context[10], context[11], context[5], context[6] );
    if( ! context[12] )
      continue;
    refalrts::bracket_pointers(context[12], context[13]);
    context[14] = refalrts::ident_left(  & ident_TkChar<int>::name, context[10], context[11] );
    if( ! context[14] )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[15], context[10], context[11] ) )
      continue;
    if( ! refalrts::svar_left( context[16], context[10], context[11] ) )
      continue;
    if( ! refalrts::empty_seq( context[10], context[11] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & lambda_GenResult_1/4 {REMOVED TILE}  s.Offset#3/16 )/13 )/8 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 Reuse: # CmdReinitElem/9 HalfReuse: s.Offset3 #16/12 Reuse: # ElChar/14 AsIs: s.Char#3/15 } Tile{ HalfReuse: )/1 ]] }
    refalrts::update_ident( context[9], & ident_CmdReinitElem<int>::name );
    refalrts::reinit_svar( context[12], context[16] );
    refalrts::update_ident( context[14], & ident_ElChar<int>::name );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[7], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[7], context[15] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_GenResult_1/4 (/7 # HalfReuse/9 (/12 # TkNumber/14 s.Number#3/15 s.Offset#3/16 )/13 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_HalfReuse<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    context[10] = 0;
    context[11] = 0;
    context[12] = refalrts::brackets_left( context[10], context[11], context[5], context[6] );
    if( ! context[12] )
      continue;
    refalrts::bracket_pointers(context[12], context[13]);
    context[14] = refalrts::ident_left(  & ident_TkNumber<int>::name, context[10], context[11] );
    if( ! context[14] )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[15], context[10], context[11] ) )
      continue;
    if( ! refalrts::svar_left( context[16], context[10], context[11] ) )
      continue;
    if( ! refalrts::empty_seq( context[10], context[11] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & lambda_GenResult_1/4 {REMOVED TILE}  s.Offset#3/16 )/13 )/8 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 Reuse: # CmdReinitElem/9 HalfReuse: s.Offset3 #16/12 Reuse: # ElNumber/14 AsIs: s.Number#3/15 } Tile{ HalfReuse: )/1 ]] }
    refalrts::update_ident( context[9], & ident_CmdReinitElem<int>::name );
    refalrts::reinit_svar( context[12], context[16] );
    refalrts::update_ident( context[14], & ident_ElNumber<int>::name );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[7], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[7], context[15] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_GenResult_1/4 (/7 # HalfReuse/9 (/12 # TkOpenBracket/14 s.Offset#3/15 )/13 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_HalfReuse<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    context[10] = 0;
    context[11] = 0;
    context[12] = refalrts::brackets_left( context[10], context[11], context[5], context[6] );
    if( ! context[12] )
      continue;
    refalrts::bracket_pointers(context[12], context[13]);
    context[14] = refalrts::ident_left(  & ident_TkOpenBracket<int>::name, context[10], context[11] );
    if( ! context[14] )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[15], context[10], context[11] ) )
      continue;
    if( ! refalrts::empty_seq( context[10], context[11] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & lambda_GenResult_1/4 (/7 # HalfReuse/9 {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/12 Reuse: # CmdReinitElem/14 AsIs: s.Offset#3/15 HalfReuse: # ElOpenBracket/13 AsIs: )/8 } Tile{ ]] }
    refalrts::update_ident( context[14], & ident_CmdReinitElem<int>::name );
    refalrts::reinit_ident( context[13], & ident_ElOpenBracket<int>::name );
    refalrts::link_brackets( context[12], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[12], context[8] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_GenResult_1/4 (/7 # HalfReuse/9 (/12 # TkCloseBracket/14 s.Offset#3/15 )/13 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_HalfReuse<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    context[10] = 0;
    context[11] = 0;
    context[12] = refalrts::brackets_left( context[10], context[11], context[5], context[6] );
    if( ! context[12] )
      continue;
    refalrts::bracket_pointers(context[12], context[13]);
    context[14] = refalrts::ident_left(  & ident_TkCloseBracket<int>::name, context[10], context[11] );
    if( ! context[14] )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[15], context[10], context[11] ) )
      continue;
    if( ! refalrts::empty_seq( context[10], context[11] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & lambda_GenResult_1/4 (/7 # HalfReuse/9 {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/12 Reuse: # CmdReinitElem/14 AsIs: s.Offset#3/15 HalfReuse: # ElCloseBracket/13 AsIs: )/8 } Tile{ ]] }
    refalrts::update_ident( context[14], & ident_CmdReinitElem<int>::name );
    refalrts::reinit_ident( context[13], & ident_ElCloseBracket<int>::name );
    refalrts::link_brackets( context[12], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[12], context[8] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_GenResult_1/4 (/7 # HalfReuse/9 (/12 # TkOpenADT/14 s.Offset#3/15 )/13 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_HalfReuse<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    context[10] = 0;
    context[11] = 0;
    context[12] = refalrts::brackets_left( context[10], context[11], context[5], context[6] );
    if( ! context[12] )
      continue;
    refalrts::bracket_pointers(context[12], context[13]);
    context[14] = refalrts::ident_left(  & ident_TkOpenADT<int>::name, context[10], context[11] );
    if( ! context[14] )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[15], context[10], context[11] ) )
      continue;
    if( ! refalrts::empty_seq( context[10], context[11] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & lambda_GenResult_1/4 (/7 # HalfReuse/9 {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/12 Reuse: # CmdReinitElem/14 AsIs: s.Offset#3/15 HalfReuse: # ElOpenADT/13 AsIs: )/8 } Tile{ ]] }
    refalrts::update_ident( context[14], & ident_CmdReinitElem<int>::name );
    refalrts::reinit_ident( context[13], & ident_ElOpenADT<int>::name );
    refalrts::link_brackets( context[12], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[12], context[8] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_GenResult_1/4 (/7 # HalfReuse/9 (/12 # TkCloseADT/14 s.Offset#3/15 )/13 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_HalfReuse<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    context[10] = 0;
    context[11] = 0;
    context[12] = refalrts::brackets_left( context[10], context[11], context[5], context[6] );
    if( ! context[12] )
      continue;
    refalrts::bracket_pointers(context[12], context[13]);
    context[14] = refalrts::ident_left(  & ident_TkCloseADT<int>::name, context[10], context[11] );
    if( ! context[14] )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[15], context[10], context[11] ) )
      continue;
    if( ! refalrts::empty_seq( context[10], context[11] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & lambda_GenResult_1/4 (/7 # HalfReuse/9 {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/12 Reuse: # CmdReinitElem/14 AsIs: s.Offset#3/15 HalfReuse: # ElCloseADT/13 AsIs: )/8 } Tile{ ]] }
    refalrts::update_ident( context[14], & ident_CmdReinitElem<int>::name );
    refalrts::reinit_ident( context[13], & ident_ElCloseADT<int>::name );
    refalrts::link_brackets( context[12], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[12], context[8] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_GenResult_1/4 (/7 # HalfReuse/9 (/12 # TkOpenCall/14 s.Offset#3/15 )/13 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_HalfReuse<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    context[10] = 0;
    context[11] = 0;
    context[12] = refalrts::brackets_left( context[10], context[11], context[5], context[6] );
    if( ! context[12] )
      continue;
    refalrts::bracket_pointers(context[12], context[13]);
    context[14] = refalrts::ident_left(  & ident_TkOpenCall<int>::name, context[10], context[11] );
    if( ! context[14] )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[15], context[10], context[11] ) )
      continue;
    if( ! refalrts::empty_seq( context[10], context[11] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & lambda_GenResult_1/4 (/7 # HalfReuse/9 {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/12 Reuse: # CmdReinitElem/14 AsIs: s.Offset#3/15 HalfReuse: # ElOpenCall/13 AsIs: )/8 } Tile{ ]] }
    refalrts::update_ident( context[14], & ident_CmdReinitElem<int>::name );
    refalrts::reinit_ident( context[13], & ident_ElOpenCall<int>::name );
    refalrts::link_brackets( context[12], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[12], context[8] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_GenResult_1/4 (/7 # HalfReuse/9 (/12 # TkCloseCall/14 s.Offset#3/15 )/13 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_HalfReuse<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    context[10] = 0;
    context[11] = 0;
    context[12] = refalrts::brackets_left( context[10], context[11], context[5], context[6] );
    if( ! context[12] )
      continue;
    refalrts::bracket_pointers(context[12], context[13]);
    context[14] = refalrts::ident_left(  & ident_TkCloseCall<int>::name, context[10], context[11] );
    if( ! context[14] )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[15], context[10], context[11] ) )
      continue;
    if( ! refalrts::empty_seq( context[10], context[11] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & lambda_GenResult_1/4 (/7 # HalfReuse/9 {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/12 Reuse: # CmdReinitElem/14 AsIs: s.Offset#3/15 HalfReuse: # ElCloseCall/13 AsIs: )/8 } Tile{ ]] }
    refalrts::update_ident( context[14], & ident_CmdReinitElem<int>::name );
    refalrts::reinit_ident( context[13], & ident_ElCloseCall<int>::name );
    refalrts::link_brackets( context[12], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[12], context[8] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_GenResult_1/4 (/7 # HalfReuse/9 (/12 # TkName/14 e.Name#3/10 s.Offset#3/15 )/13 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_HalfReuse<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    context[10] = 0;
    context[11] = 0;
    context[12] = refalrts::brackets_left( context[10], context[11], context[5], context[6] );
    if( ! context[12] )
      continue;
    refalrts::bracket_pointers(context[12], context[13]);
    context[14] = refalrts::ident_left(  & ident_TkName<int>::name, context[10], context[11] );
    if( ! context[14] )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_right( context[15], context[10], context[11] ) )
      continue;
    // closed e.Name#3 as range 10

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  (/12 # TkName/14 {REMOVED TILE}  s.Offset#3/15 )/13 )/8 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # CmdReinitElem/4 HalfReuse: s.Offset3 #15/7 Reuse: # ElName/9 } Tile{ AsIs: e.Name#3/10 } Tile{ HalfReuse: )/1 ]] }
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], & ident_CmdReinitElem<int>::name );
    refalrts::reinit_svar( context[7], context[15] );
    refalrts::update_ident( context[9], & ident_ElName<int>::name );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[0], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[10], context[11] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[9], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_GenResult_1/4 (/7 # HalfReuse/9 (/12 # TkIdentifier/14 e.Name#3/10 s.Offset#3/15 )/13 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_HalfReuse<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    context[10] = 0;
    context[11] = 0;
    context[12] = refalrts::brackets_left( context[10], context[11], context[5], context[6] );
    if( ! context[12] )
      continue;
    refalrts::bracket_pointers(context[12], context[13]);
    context[14] = refalrts::ident_left(  & ident_TkIdentifier<int>::name, context[10], context[11] );
    if( ! context[14] )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_right( context[15], context[10], context[11] ) )
      continue;
    // closed e.Name#3 as range 10

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  (/12 # TkIdentifier/14 {REMOVED TILE}  s.Offset#3/15 )/13 )/8 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # CmdReinitElem/4 HalfReuse: s.Offset3 #15/7 Reuse: # ElIdent/9 } Tile{ AsIs: e.Name#3/10 } Tile{ HalfReuse: )/1 ]] }
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], & ident_CmdReinitElem<int>::name );
    refalrts::reinit_svar( context[7], context[15] );
    refalrts::update_ident( context[9], & ident_ElIdent<int>::name );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[0], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[10], context[11] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[9], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_GenResult_1/4 (/7 # HalfReuse/9 (/12 # TkVariable/14 's'/15 e.Index#3/10 s.SampleOffset#3/17 s.Offset#3/16 )/13 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_HalfReuse<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    context[10] = 0;
    context[11] = 0;
    context[12] = refalrts::brackets_left( context[10], context[11], context[5], context[6] );
    if( ! context[12] )
      continue;
    refalrts::bracket_pointers(context[12], context[13]);
    context[14] = refalrts::ident_left(  & ident_TkVariable<int>::name, context[10], context[11] );
    if( ! context[14] )
      continue;
    context[15] = refalrts::char_left( 's', context[10], context[11] );
    if( ! context[15] )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_right( context[16], context[10], context[11] ) )
      continue;
    if( ! refalrts::svar_right( context[17], context[10], context[11] ) )
      continue;
    // closed e.Index#3 as range 10

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  # TkVariable/14 's'/15 e.Index#3/10 s.SampleOffset#3/17 s.Offset#3/16 )/13 )/8 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # CmdReinitSVar/4 HalfReuse: s.Offset3 #16/7 HalfReuse: s.SampleOffset3 #17/9 HalfReuse: )/12 } Tile{ ]] }
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], & ident_CmdReinitSVar<int>::name );
    refalrts::reinit_svar( context[7], context[16] );
    refalrts::reinit_svar( context[9], context[17] );
    refalrts::reinit_close_bracket( context[12] );
    refalrts::link_brackets( context[0], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[12], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_GenResult_1/4 (/7 # Reuse/9 (/12 # TkChar/14 s.Char#3/15 s.Offset#3/16 )/13 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_Reuse<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    context[10] = 0;
    context[11] = 0;
    context[12] = refalrts::brackets_left( context[10], context[11], context[5], context[6] );
    if( ! context[12] )
      continue;
    refalrts::bracket_pointers(context[12], context[13]);
    context[14] = refalrts::ident_left(  & ident_TkChar<int>::name, context[10], context[11] );
    if( ! context[14] )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[15], context[10], context[11] ) )
      continue;
    if( ! refalrts::svar_left( context[16], context[10], context[11] ) )
      continue;
    if( ! refalrts::empty_seq( context[10], context[11] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & lambda_GenResult_1/4 {REMOVED TILE}  s.Offset#3/16 )/13 )/8 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 Reuse: # CmdUpdateElem/9 HalfReuse: s.Offset3 #16/12 Reuse: # ElChar/14 AsIs: s.Char#3/15 } Tile{ HalfReuse: )/1 ]] }
    refalrts::update_ident( context[9], & ident_CmdUpdateElem<int>::name );
    refalrts::reinit_svar( context[12], context[16] );
    refalrts::update_ident( context[14], & ident_ElChar<int>::name );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[7], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[7], context[15] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_GenResult_1/4 (/7 # Reuse/9 (/12 # TkNumber/14 s.Number#3/15 s.Offset#3/16 )/13 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_Reuse<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    context[10] = 0;
    context[11] = 0;
    context[12] = refalrts::brackets_left( context[10], context[11], context[5], context[6] );
    if( ! context[12] )
      continue;
    refalrts::bracket_pointers(context[12], context[13]);
    context[14] = refalrts::ident_left(  & ident_TkNumber<int>::name, context[10], context[11] );
    if( ! context[14] )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[15], context[10], context[11] ) )
      continue;
    if( ! refalrts::svar_left( context[16], context[10], context[11] ) )
      continue;
    if( ! refalrts::empty_seq( context[10], context[11] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & lambda_GenResult_1/4 {REMOVED TILE}  s.Offset#3/16 )/13 )/8 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 Reuse: # CmdUpdateElem/9 HalfReuse: s.Offset3 #16/12 Reuse: # ElNumber/14 AsIs: s.Number#3/15 } Tile{ HalfReuse: )/1 ]] }
    refalrts::update_ident( context[9], & ident_CmdUpdateElem<int>::name );
    refalrts::reinit_svar( context[12], context[16] );
    refalrts::update_ident( context[14], & ident_ElNumber<int>::name );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[7], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[7], context[15] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_GenResult_1/4 (/7 # Reuse/9 (/12 # TkOpenBracket/14 s.Offset#3/15 )/13 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_Reuse<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    context[10] = 0;
    context[11] = 0;
    context[12] = refalrts::brackets_left( context[10], context[11], context[5], context[6] );
    if( ! context[12] )
      continue;
    refalrts::bracket_pointers(context[12], context[13]);
    context[14] = refalrts::ident_left(  & ident_TkOpenBracket<int>::name, context[10], context[11] );
    if( ! context[14] )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[15], context[10], context[11] ) )
      continue;
    if( ! refalrts::empty_seq( context[10], context[11] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & lambda_GenResult_1/4 (/7 # Reuse/9 {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/12 Reuse: # CmdUpdateElem/14 AsIs: s.Offset#3/15 HalfReuse: # ElOpenBracket/13 AsIs: )/8 } Tile{ ]] }
    refalrts::update_ident( context[14], & ident_CmdUpdateElem<int>::name );
    refalrts::reinit_ident( context[13], & ident_ElOpenBracket<int>::name );
    refalrts::link_brackets( context[12], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[12], context[8] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_GenResult_1/4 (/7 # Reuse/9 (/12 # TkCloseBracket/14 s.Offset#3/15 )/13 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_Reuse<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    context[10] = 0;
    context[11] = 0;
    context[12] = refalrts::brackets_left( context[10], context[11], context[5], context[6] );
    if( ! context[12] )
      continue;
    refalrts::bracket_pointers(context[12], context[13]);
    context[14] = refalrts::ident_left(  & ident_TkCloseBracket<int>::name, context[10], context[11] );
    if( ! context[14] )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[15], context[10], context[11] ) )
      continue;
    if( ! refalrts::empty_seq( context[10], context[11] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & lambda_GenResult_1/4 (/7 # Reuse/9 {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/12 Reuse: # CmdReinitElem/14 AsIs: s.Offset#3/15 HalfReuse: # ElCloseBracket/13 AsIs: )/8 } Tile{ ]] }
    refalrts::update_ident( context[14], & ident_CmdReinitElem<int>::name );
    refalrts::reinit_ident( context[13], & ident_ElCloseBracket<int>::name );
    refalrts::link_brackets( context[12], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[12], context[8] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_GenResult_1/4 (/7 # Reuse/9 (/12 # TkOpenADT/14 s.Offset#3/15 )/13 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_Reuse<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    context[10] = 0;
    context[11] = 0;
    context[12] = refalrts::brackets_left( context[10], context[11], context[5], context[6] );
    if( ! context[12] )
      continue;
    refalrts::bracket_pointers(context[12], context[13]);
    context[14] = refalrts::ident_left(  & ident_TkOpenADT<int>::name, context[10], context[11] );
    if( ! context[14] )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[15], context[10], context[11] ) )
      continue;
    if( ! refalrts::empty_seq( context[10], context[11] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & lambda_GenResult_1/4 (/7 # Reuse/9 {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/12 Reuse: # CmdUpdateElem/14 AsIs: s.Offset#3/15 HalfReuse: # ElOpenADT/13 AsIs: )/8 } Tile{ ]] }
    refalrts::update_ident( context[14], & ident_CmdUpdateElem<int>::name );
    refalrts::reinit_ident( context[13], & ident_ElOpenADT<int>::name );
    refalrts::link_brackets( context[12], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[12], context[8] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_GenResult_1/4 (/7 # Reuse/9 (/12 # TkCloseADT/14 s.Offset#3/15 )/13 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_Reuse<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    context[10] = 0;
    context[11] = 0;
    context[12] = refalrts::brackets_left( context[10], context[11], context[5], context[6] );
    if( ! context[12] )
      continue;
    refalrts::bracket_pointers(context[12], context[13]);
    context[14] = refalrts::ident_left(  & ident_TkCloseADT<int>::name, context[10], context[11] );
    if( ! context[14] )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[15], context[10], context[11] ) )
      continue;
    if( ! refalrts::empty_seq( context[10], context[11] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & lambda_GenResult_1/4 (/7 # Reuse/9 {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/12 Reuse: # CmdUpdateElem/14 AsIs: s.Offset#3/15 HalfReuse: # ElCloseADT/13 AsIs: )/8 } Tile{ ]] }
    refalrts::update_ident( context[14], & ident_CmdUpdateElem<int>::name );
    refalrts::reinit_ident( context[13], & ident_ElCloseADT<int>::name );
    refalrts::link_brackets( context[12], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[12], context[8] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_GenResult_1/4 (/7 # Reuse/9 (/12 # TkOpenCall/14 s.Offset#3/15 )/13 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_Reuse<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    context[10] = 0;
    context[11] = 0;
    context[12] = refalrts::brackets_left( context[10], context[11], context[5], context[6] );
    if( ! context[12] )
      continue;
    refalrts::bracket_pointers(context[12], context[13]);
    context[14] = refalrts::ident_left(  & ident_TkOpenCall<int>::name, context[10], context[11] );
    if( ! context[14] )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[15], context[10], context[11] ) )
      continue;
    if( ! refalrts::empty_seq( context[10], context[11] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & lambda_GenResult_1/4 (/7 # Reuse/9 {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/12 Reuse: # CmdUpdateElem/14 AsIs: s.Offset#3/15 HalfReuse: # ElOpenCall/13 AsIs: )/8 } Tile{ ]] }
    refalrts::update_ident( context[14], & ident_CmdUpdateElem<int>::name );
    refalrts::reinit_ident( context[13], & ident_ElOpenCall<int>::name );
    refalrts::link_brackets( context[12], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[12], context[8] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_GenResult_1/4 (/7 # Reuse/9 (/12 # TkCloseCall/14 s.Offset#3/15 )/13 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_Reuse<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    context[10] = 0;
    context[11] = 0;
    context[12] = refalrts::brackets_left( context[10], context[11], context[5], context[6] );
    if( ! context[12] )
      continue;
    refalrts::bracket_pointers(context[12], context[13]);
    context[14] = refalrts::ident_left(  & ident_TkCloseCall<int>::name, context[10], context[11] );
    if( ! context[14] )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[15], context[10], context[11] ) )
      continue;
    if( ! refalrts::empty_seq( context[10], context[11] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & lambda_GenResult_1/4 (/7 # Reuse/9 {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/12 Reuse: # CmdUpdateElem/14 AsIs: s.Offset#3/15 HalfReuse: # ElCloseCall/13 AsIs: )/8 } Tile{ ]] }
    refalrts::update_ident( context[14], & ident_CmdUpdateElem<int>::name );
    refalrts::reinit_ident( context[13], & ident_ElCloseCall<int>::name );
    refalrts::link_brackets( context[12], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[12], context[8] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_GenResult_1/4 (/7 # Reuse/9 (/12 # TkName/14 e.Name#3/10 s.Offset#3/15 )/13 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_Reuse<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    context[10] = 0;
    context[11] = 0;
    context[12] = refalrts::brackets_left( context[10], context[11], context[5], context[6] );
    if( ! context[12] )
      continue;
    refalrts::bracket_pointers(context[12], context[13]);
    context[14] = refalrts::ident_left(  & ident_TkName<int>::name, context[10], context[11] );
    if( ! context[14] )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_right( context[15], context[10], context[11] ) )
      continue;
    // closed e.Name#3 as range 10

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  (/12 # TkName/14 {REMOVED TILE}  s.Offset#3/15 )/13 )/8 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # CmdUpdateElem/4 HalfReuse: s.Offset3 #15/7 Reuse: # ElName/9 } Tile{ AsIs: e.Name#3/10 } Tile{ HalfReuse: )/1 ]] }
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], & ident_CmdUpdateElem<int>::name );
    refalrts::reinit_svar( context[7], context[15] );
    refalrts::update_ident( context[9], & ident_ElName<int>::name );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[0], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[10], context[11] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[9], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_GenResult_1/4 (/7 # Reuse/9 (/12 # TkIdentifier/14 e.Name#3/10 s.Offset#3/15 )/13 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_Reuse<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    context[10] = 0;
    context[11] = 0;
    context[12] = refalrts::brackets_left( context[10], context[11], context[5], context[6] );
    if( ! context[12] )
      continue;
    refalrts::bracket_pointers(context[12], context[13]);
    context[14] = refalrts::ident_left(  & ident_TkIdentifier<int>::name, context[10], context[11] );
    if( ! context[14] )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_right( context[15], context[10], context[11] ) )
      continue;
    // closed e.Name#3 as range 10

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  (/12 # TkIdentifier/14 {REMOVED TILE}  s.Offset#3/15 )/13 )/8 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # CmdUpdateElem/4 HalfReuse: s.Offset3 #15/7 Reuse: # ElIdent/9 } Tile{ AsIs: e.Name#3/10 } Tile{ HalfReuse: )/1 ]] }
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], & ident_CmdUpdateElem<int>::name );
    refalrts::reinit_svar( context[7], context[15] );
    refalrts::update_ident( context[9], & ident_ElIdent<int>::name );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[0], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[10], context[11] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[9], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_GenResult_1/4 (/7 # LEFT_EDGE/9 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_LEFT_EDGE<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & lambda_GenResult_1/4 (/7 # LEFT_EDGE/9 )/8 >/1 {REMOVED TILE} 
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
  // </0 & lambda_GenResult_1/4 (/7 # RIGHT_EDGE/9 )/8 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  context[9] = refalrts::ident_left(  & ident_RIGHT_EDGE<int>::name, context[5], context[6] );
  if( ! context[9] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  </0 & lambda_GenResult_1/4 (/7 # RIGHT_EDGE/9 )/8 >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult lambda_GenResult_2(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_GenResult_2/4 (/7 # Tile/9 e.Tile#2/5 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_Tile<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Tile#2 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  # Tile/9 {REMOVED TILE}  )/8 {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map/4 HalfReuse: & lambda_GenResult_1/7 } Tile{ AsIs: e.Tile#2/5 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name( context[4], Map, "Map" );
    refalrts::reinit_name( context[7], lambda_GenResult_1, "lambda_GenResult_1" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[7], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & lambda_GenResult_2/4 t.Other#2/5 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  </0 & lambda_GenResult_2/4 t.Other#2/5 >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult GenResult(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 60 elems
  refalrts::Iter context[60];
  refalrts::zeros( context, 60 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & GenResult/4 (/7 e.Trash#1/5 )/8 (/11 e.MarkedResult#1/9 )/12 >/1
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
  // closed e.Trash#1 as range 5
  // closed e.MarkedResult#1 as range 9

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } (/13 # CmdComment/14 'T'/15 'R'/16 'A'/17 'S'/18 'H'/19 ':'/20 </21 & TextFromExpr/22 e.Trash#1/5/23 >/25 )/26 (/27 # CmdComment/28 'R'/29 'E'/30 'S'/31 'U'/32 'L'/33 'T'/34 ':'/35 </36 & TextFromExpr/37 e.MarkedResult#1/9/38 >/40 )/41 </42 & Map/43 & lambda_GenResult_0/44 e.MarkedResult#1/9/45 >/47 </48 & Map/49 & lambda_GenResult_2/50 e.MarkedResult#1/9/51 >/53 </54 & GenPushLink/55 </56 Tile{ HalfReuse: & ModifyResult/11 AsIs: e.MarkedResult#1/9 HalfReuse: >/12 AsIs: >/1 } Tile{ AsIs: </0 Reuse: & GenSplices/4 AsIs: (/7 AsIs: e.Trash#1/5 AsIs: )/8 } e.MarkedResult#1/9/57 >/59 Tile{ ]] }
  if( ! refalrts::alloc_open_bracket( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[14], & ident_CmdComment<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[15], 'T' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[16], 'R' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[17], 'A' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[18], 'S' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[19], 'H' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[20], ':' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[21] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[22], TextFromExpr, "TextFromExpr" ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[23], context[24], context[5], context[6]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[25] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[26] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[27] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[28], & ident_CmdComment<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[29], 'R' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[30], 'E' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[31], 'S' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[32], 'U' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[33], 'L' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[34], 'T' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[35], ':' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[36] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[37], TextFromExpr, "TextFromExpr" ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[38], context[39], context[9], context[10]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[40] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[41] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[42] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[43], Map, "Map" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[44], lambda_GenResult_0, "lambda_GenResult_0" ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[45], context[46], context[9], context[10]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[47] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[48] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[49], Map, "Map" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[50], lambda_GenResult_2, "lambda_GenResult_2" ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[51], context[52], context[9], context[10]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[53] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[54] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[55], GenPushLink, "GenPushLink" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[56] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[57], context[58], context[9], context[10]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[59] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_name( context[11], ModifyResult, "ModifyResult" );
  refalrts::reinit_close_call( context[12] );
  refalrts::update_name( context[4], GenSplices, "GenSplices" );
  refalrts::push_stack( context[59] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[54] );
  refalrts::push_stack( context[12] );
  refalrts::push_stack( context[56] );
  refalrts::push_stack( context[53] );
  refalrts::push_stack( context[48] );
  refalrts::push_stack( context[47] );
  refalrts::push_stack( context[42] );
  refalrts::link_brackets( context[27], context[41] );
  refalrts::push_stack( context[40] );
  refalrts::push_stack( context[36] );
  refalrts::link_brackets( context[13], context[26] );
  refalrts::push_stack( context[25] );
  refalrts::push_stack( context[21] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[59], context[59] );
  res = refalrts::splice_evar( res, context[57], context[58] );
  res = refalrts::splice_evar( res, context[0], context[8] );
  res = refalrts::splice_evar( res, context[11], context[1] );
  res = refalrts::splice_evar( res, context[13], context[56] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult lambda_GenPushLink_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_GenPushLink_0/4 (/7 e.Stack#2/5 )/8 (/11 # TkOpenCall/13 s.Offset#2/14 )/12 >/1
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
    context[13] = refalrts::ident_left(  & ident_TkOpenCall<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Stack#2 as range 5
    if( ! refalrts::svar_left( context[14], context[9], context[10] ) )
      continue;
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & lambda_GenPushLink_0/4 {REMOVED TILE}  # TkOpenCall/13 s.Offset#2/14 )/12 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Stack#2/5 HalfReuse: s.Offset2 #14/8 HalfReuse: )/11 } Tile{ ]] }
    refalrts::reinit_svar( context[8], context[14] );
    refalrts::reinit_close_bracket( context[11] );
    refalrts::link_brackets( context[7], context[11] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[7], context[11] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_GenPushLink_0/4 (/7 e.Stack#2/5 )/8 (/11 # TkOpenADT/13 s.Offset#2/14 )/12 >/1
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
    context[13] = refalrts::ident_left(  & ident_TkOpenADT<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Stack#2 as range 5
    if( ! refalrts::svar_left( context[14], context[9], context[10] ) )
      continue;
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & lambda_GenPushLink_0/4 {REMOVED TILE}  # TkOpenADT/13 s.Offset#2/14 )/12 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Stack#2/5 HalfReuse: s.Offset2 #14/8 HalfReuse: )/11 } Tile{ ]] }
    refalrts::reinit_svar( context[8], context[14] );
    refalrts::reinit_close_bracket( context[11] );
    refalrts::link_brackets( context[7], context[11] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[7], context[11] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_GenPushLink_0/4 (/7 e.Stack#2/5 )/8 (/11 # TkOpenBracket/13 s.Offset#2/14 )/12 >/1
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
    context[13] = refalrts::ident_left(  & ident_TkOpenBracket<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Stack#2 as range 5
    if( ! refalrts::svar_left( context[14], context[9], context[10] ) )
      continue;
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & lambda_GenPushLink_0/4 {REMOVED TILE}  # TkOpenBracket/13 s.Offset#2/14 )/12 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Stack#2/5 HalfReuse: s.Offset2 #14/8 HalfReuse: )/11 } Tile{ ]] }
    refalrts::reinit_svar( context[8], context[14] );
    refalrts::reinit_close_bracket( context[11] );
    refalrts::link_brackets( context[7], context[11] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[7], context[11] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_GenPushLink_0/4 (/7 e.Stack#2/5 s.OpenOffset#2/15 )/8 (/11 # TkCloseCall/13 s.Offset#2/14 )/12 >/1
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
    context[13] = refalrts::ident_left(  & ident_TkCloseCall<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[14], context[9], context[10] ) )
      continue;
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;
    if( ! refalrts::svar_right( context[15], context[5], context[6] ) )
      continue;
    // closed e.Stack#2 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.Stack#2/5 } Tile{ HalfReuse: )/4 AsIs: (/7 } Tile{ HalfReuse: # CmdPushStack/1 } Tile{ AsIs: s.OpenOffset#2/15 AsIs: )/8 AsIs: (/11 Reuse: # CmdPushStack/13 AsIs: s.Offset#2/14 AsIs: )/12 } Tile{ ]] }
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_close_bracket( context[4] );
    refalrts::reinit_ident( context[1], & ident_CmdPushStack<int>::name );
    refalrts::update_ident( context[13], & ident_CmdPushStack<int>::name );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[0], context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[15], context[12] );
    res = refalrts::splice_evar( res, context[1], context[1] );
    res = refalrts::splice_evar( res, context[4], context[7] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_GenPushLink_0/4 (/7 e.Stack#2/5 s.OpenOffset#2/15 )/8 (/11 # TkCloseADT/13 s.Offset#2/14 )/12 >/1
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
    context[13] = refalrts::ident_left(  & ident_TkCloseADT<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[14], context[9], context[10] ) )
      continue;
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;
    if( ! refalrts::svar_right( context[15], context[5], context[6] ) )
      continue;
    // closed e.Stack#2 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  (/7 {REMOVED TILE}  s.OpenOffset#2/15 {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.Stack#2/5 } Tile{ HalfReuse: )/4 } Tile{ HalfReuse: (/8 HalfReuse: # CmdLinkBrackets/11 HalfReuse: s.OpenOffset2 #15/13 AsIs: s.Offset#2/14 AsIs: )/12 } Tile{ ]] }
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_close_bracket( context[4] );
    refalrts::reinit_open_bracket( context[8] );
    refalrts::reinit_ident( context[11], & ident_CmdLinkBrackets<int>::name );
    refalrts::reinit_svar( context[13], context[15] );
    refalrts::link_brackets( context[8], context[12] );
    refalrts::link_brackets( context[0], context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[8], context[12] );
    res = refalrts::splice_evar( res, context[4], context[4] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[0], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_GenPushLink_0/4 (/7 e.Stack#2/5 s.OpenOffset#2/15 )/8 (/11 # TkCloseBracket/13 s.Offset#2/14 )/12 >/1
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
    context[13] = refalrts::ident_left(  & ident_TkCloseBracket<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[14], context[9], context[10] ) )
      continue;
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;
    if( ! refalrts::svar_right( context[15], context[5], context[6] ) )
      continue;
    // closed e.Stack#2 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  (/7 {REMOVED TILE}  s.OpenOffset#2/15 {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.Stack#2/5 } Tile{ HalfReuse: )/4 } Tile{ HalfReuse: (/8 HalfReuse: # CmdLinkBrackets/11 HalfReuse: s.OpenOffset2 #15/13 AsIs: s.Offset#2/14 AsIs: )/12 } Tile{ ]] }
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_close_bracket( context[4] );
    refalrts::reinit_open_bracket( context[8] );
    refalrts::reinit_ident( context[11], & ident_CmdLinkBrackets<int>::name );
    refalrts::reinit_svar( context[13], context[15] );
    refalrts::link_brackets( context[8], context[12] );
    refalrts::link_brackets( context[0], context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[8], context[12] );
    res = refalrts::splice_evar( res, context[4], context[4] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[0], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & lambda_GenPushLink_0/4 (/7 e.Stack#2/5 )/8 (/11 s.tag#2/13 e.Info#2/9 )/12 >/1
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
  // closed e.Stack#2 as range 5
  if( ! refalrts::svar_left( context[13], context[9], context[10] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Info#2 as range 9

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  </0 & lambda_GenPushLink_0/4 {REMOVED TILE}  (/11 s.tag#2/13 e.Info#2/9 )/12 >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Stack#2/5 AsIs: )/8 } Tile{ ]] }
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult lambda_GenPushLink_1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & lambda_GenPushLink_1/4 (/7 )/8 e.Commands#2/2 >/1
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
  // closed e.Commands#2 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  </0 & lambda_GenPushLink_1/4 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ HalfReuse: </7 HalfReuse: & Reverse/8 AsIs: e.Commands#2/2 AsIs: >/1 ]] }
  refalrts::reinit_open_call( context[7] );
  refalrts::reinit_name( context[8], Reverse, "Reverse" );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[7] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[7];
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult GenPushLink(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & GenPushLink/4 e.MarkedResult#1/2 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.MarkedResult#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 } </5 & MapReduce/6 & lambda_GenPushLink_0/7 (/8 )/9 Tile{ AsIs: e.MarkedResult#1/2 } >/10 & lambda_GenPushLink_1/11 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[5] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[6], MapReduce, "MapReduce" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[7], lambda_GenPushLink_0, "lambda_GenPushLink_0" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[11], lambda_GenPushLink_1, "lambda_GenPushLink_1" ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], Fetch, "Fetch" );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[10] );
  refalrts::push_stack( context[5] );
  refalrts::link_brackets( context[8], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[10], context[11] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[5], context[9] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult Reverse(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 7 elems
  refalrts::Iter context[7];
  refalrts::zeros( context, 7 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & Reverse/4 e.Items#1/2 t.Last#1/5 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[6] = refalrts::tvar_right( context[5], context[2], context[3] );
    if( ! context[6] )
      continue;
    // closed e.Items#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: t.Last#1/5 } Tile{ AsIs: </0 AsIs: & Reverse/4 } Tile{ AsIs: e.Items#1/2 } Tile{ AsIs: >/1 ]] }
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & Reverse/4 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  </0 & Reverse/4 >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult ModifyResult(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & ModifyResult/4 (/7 # Tile/9 e.Tile#1/5 )/8 e.Result#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_Tile<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    // closed e.Tile#1 as range 5
    // closed e.Result#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ModifyTile/4 } Tile{ AsIs: e.Tile#1/5 } Tile{ HalfReuse: >/7 HalfReuse: </9 } Tile{ HalfReuse: & ModifyResult/8 AsIs: e.Result#1/2 AsIs: >/1 ]] }
    refalrts::update_name( context[4], ModifyTile, "ModifyTile" );
    refalrts::reinit_close_call( context[7] );
    refalrts::reinit_open_call( context[9] );
    refalrts::reinit_name( context[8], ModifyResult, "ModifyResult" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[9] );
    refalrts::push_stack( context[7] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[7], context[9] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & ModifyResult/4 (/7 s.tag#1/9 e.info#1/5 )/8 e.Result#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    // closed e.Result#1 as range 2
    if( ! refalrts::svar_left( context[9], context[5], context[6] ) )
      continue;
    // closed e.info#1 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: s.tag#1/9 AsIs: e.info#1/5 AsIs: )/8 } Tile{ AsIs: </0 AsIs: & ModifyResult/4 } Tile{ AsIs: e.Result#1/2 } Tile{ AsIs: >/1 ]] }
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & ModifyResult/4 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  </0 & ModifyResult/4 >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult ModifyTile(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & ModifyTile/4 (/7 # RIGHT_EDGE/9 )/8 e.Range#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_RIGHT_EDGE<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    // closed e.Range#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & ModifyTile/4 (/7 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </9 HalfReuse: & ModifyTile/8 AsIs: e.Range#1/2 AsIs: >/1 ]] }
    refalrts::reinit_open_call( context[9] );
    refalrts::reinit_name( context[8], ModifyTile, "ModifyTile" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[9];
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & ModifyTile/4 (/7 # LEFT_EDGE/9 )/8 e.Range#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_LEFT_EDGE<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    // closed e.Range#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & ModifyTile/4 (/7 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </9 HalfReuse: & ModifyTile/8 AsIs: e.Range#1/2 AsIs: >/1 ]] }
    refalrts::reinit_open_call( context[9] );
    refalrts::reinit_name( context[8], ModifyTile, "ModifyTile" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[9];
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & ModifyTile/4 (/7 # AsIs/9 t.Item#1/10 )/8 e.Range#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_AsIs<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    // closed e.Range#1 as range 2
    context[11] = refalrts::tvar_left( context[10], context[5], context[6] );
    if( ! context[11] )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  & ModifyTile/4 (/7 # AsIs/9 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: t.Item#1/10 } Tile{ AsIs: </0 } Tile{ HalfReuse: & ModifyTile/8 AsIs: e.Range#1/2 AsIs: >/1 ]] }
    refalrts::reinit_name( context[8], ModifyTile, "ModifyTile" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[0], context[0] );
    res = refalrts::splice_evar( res, context[10], context[11] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & ModifyTile/4 (/7 # HalfReuse/9 t.Item#1/10 )/8 e.Range#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_HalfReuse<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    // closed e.Range#1 as range 2
    context[11] = refalrts::tvar_left( context[10], context[5], context[6] );
    if( ! context[11] )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  & ModifyTile/4 (/7 # HalfReuse/9 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: t.Item#1/10 } Tile{ AsIs: </0 } Tile{ HalfReuse: & ModifyTile/8 AsIs: e.Range#1/2 AsIs: >/1 ]] }
    refalrts::reinit_name( context[8], ModifyTile, "ModifyTile" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[0], context[0] );
    res = refalrts::splice_evar( res, context[10], context[11] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & ModifyTile/4 (/7 # Reuse/9 t.Item#1/10 )/8 e.Range#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_Reuse<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    // closed e.Range#1 as range 2
    context[11] = refalrts::tvar_left( context[10], context[5], context[6] );
    if( ! context[11] )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  & ModifyTile/4 (/7 # Reuse/9 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: t.Item#1/10 } Tile{ AsIs: </0 } Tile{ HalfReuse: & ModifyTile/8 AsIs: e.Range#1/2 AsIs: >/1 ]] }
    refalrts::reinit_name( context[8], ModifyTile, "ModifyTile" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[0], context[0] );
    res = refalrts::splice_evar( res, context[10], context[11] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & ModifyTile/4 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  </0 & ModifyTile/4 >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult lambda_GenSplices_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_GenSplices_0/4 (/7 t.OneItem#2/9 )/8 >/1
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
    context[10] = refalrts::tvar_left( context[9], context[5], context[6] );
    if( ! context[10] )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } (/11 # CmdInsertTile/12 </13 & BeginOffset/14 t.OneItem#2/9/15 Tile{ HalfReuse: >/0 HalfReuse: </4 HalfReuse: & EndOffset/7 AsIs: t.OneItem#2/9 HalfReuse: >/8 HalfReuse: )/1 ]] }
    if( ! refalrts::alloc_open_bracket( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[12], & ident_CmdInsertTile<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[14], BeginOffset, "BeginOffset" ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[15], context[16], context[9], context[10]))
      return refalrts::cNoMemory;
    refalrts::reinit_close_call( context[0] );
    refalrts::reinit_open_call( context[4] );
    refalrts::reinit_name( context[7], EndOffset, "EndOffset" );
    refalrts::reinit_close_call( context[8] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[11], context[1] );
    refalrts::push_stack( context[8] );
    refalrts::push_stack( context[4] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[13] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[0];
    res = refalrts::splice_evar( res, context[11], context[16] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & lambda_GenSplices_0/4 (/7 t.Begin#2/9 e.Inner#2/5 t.End#2/11 )/8 >/1
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
  context[12] = refalrts::tvar_right( context[11], context[5], context[6] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  // closed e.Inner#2 as range 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  e.Inner#2/5 {REMOVED TILE} 
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # CmdInsertTile/4 HalfReuse: </7 } & BeginOffset/13 Tile{ AsIs: t.Begin#2/9 } >/14 </15 & EndOffset/16 Tile{ AsIs: t.End#2/11 HalfReuse: >/8 HalfReuse: )/1 ]] }
  if( ! refalrts::alloc_name( context[13], BeginOffset, "BeginOffset" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[16], EndOffset, "EndOffset" ) )
    return refalrts::cNoMemory;
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_ident( context[4], & ident_CmdInsertTile<int>::name );
  refalrts::reinit_open_call( context[7] );
  refalrts::reinit_close_call( context[8] );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[0], context[1] );
  refalrts::push_stack( context[8] );
  refalrts::push_stack( context[15] );
  refalrts::push_stack( context[14] );
  refalrts::push_stack( context[7] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[11];
  res = refalrts::splice_evar( res, context[14], context[16] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[13], context[13] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[7], res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult GenSplices(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 29 elems
  refalrts::Iter context[29];
  refalrts::zeros( context, 29 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & GenSplices/4 (/7 e.Trash#1/5 )/8 (/11 # Tile/13 e.LeftTile#1/9 )/12 e.Result#1/2 (/16 # Tile/18 e.RightTile#1/14 )/17 >/1
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
    context[13] = refalrts::ident_left(  & ident_Tile<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    context[14] = 0;
    context[15] = 0;
    context[16] = refalrts::brackets_right( context[14], context[15], context[2], context[3] );
    if( ! context[16] )
      continue;
    refalrts::bracket_pointers(context[16], context[17]);
    context[18] = refalrts::ident_left(  & ident_Tile<int>::name, context[14], context[15] );
    if( ! context[18] )
      continue;
    // closed e.Trash#1 as range 5
    // closed e.LeftTile#1 as range 9
    // closed e.Result#1 as range 2
    // closed e.RightTile#1 as range 14

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } (/19 # CmdSetRes/20 Tile{ HalfReuse: </16 HalfReuse: & CalcRes/18 AsIs: e.RightTile#1/14 HalfReuse: >/17 HalfReuse: )/1 } Tile{ AsIs: </0 Reuse: & Map/4 HalfReuse: & lambda_GenSplices_0/7 } </21 & CollectTiles/22 Tile{ AsIs: e.Result#1/2 } >/23 >/24 (/25 # CmdUseRes/26 )/27 Tile{ HalfReuse: </8 HalfReuse: & GenTrash/11 HalfReuse: (/13 AsIs: e.LeftTile#1/9 AsIs: )/12 } Tile{ AsIs: e.Trash#1/5 } >/28 Tile{ ]] }
    if( ! refalrts::alloc_open_bracket( context[19] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[20], & ident_CmdSetRes<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[21] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[22], CollectTiles, "CollectTiles" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[23] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[24] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[25] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[26], & ident_CmdUseRes<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[27] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[28] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_call( context[16] );
    refalrts::reinit_name( context[18], CalcRes, "CalcRes" );
    refalrts::reinit_close_call( context[17] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::update_name( context[4], Map, "Map" );
    refalrts::reinit_name( context[7], lambda_GenSplices_0, "lambda_GenSplices_0" );
    refalrts::reinit_open_call( context[8] );
    refalrts::reinit_name( context[11], GenTrash, "GenTrash" );
    refalrts::reinit_open_bracket( context[13] );
    refalrts::push_stack( context[28] );
    refalrts::push_stack( context[8] );
    refalrts::link_brackets( context[13], context[12] );
    refalrts::link_brackets( context[25], context[27] );
    refalrts::push_stack( context[24] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[23] );
    refalrts::push_stack( context[21] );
    refalrts::link_brackets( context[19], context[1] );
    refalrts::push_stack( context[17] );
    refalrts::push_stack( context[16] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[28], context[28] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[8], context[12] );
    res = refalrts::splice_evar( res, context[23], context[27] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[21], context[22] );
    res = refalrts::splice_evar( res, context[0], context[7] );
    res = refalrts::splice_evar( res, context[16], context[1] );
    res = refalrts::splice_evar( res, context[19], context[20] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & GenSplices/4 (/7 # RemovedTile/9 )/8 (/12 # Tile/14 e.OneTile#1/10 )/13 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  context[9] = refalrts::ident_left(  & ident_RemovedTile<int>::name, context[5], context[6] );
  if( ! context[9] )
    return refalrts::cRecognitionImpossible;
  context[10] = 0;
  context[11] = 0;
  context[12] = refalrts::brackets_left( context[10], context[11], context[2], context[3] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[12], context[13]);
  context[14] = refalrts::ident_left(  & ident_Tile<int>::name, context[10], context[11] );
  if( ! context[14] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.OneTile#1 as range 10

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  </0 & GenSplices/4 {REMOVED TILE}  (/12 # Tile/14 e.OneTile#1/10 )/13 >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 Reuse: # CmdReturnResult_NoTrash/9 AsIs: )/8 } Tile{ ]] }
  refalrts::update_ident( context[9], & ident_CmdReturnResult_NoTrash<int>::name );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult CalcRes(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & CalcRes/4 (/7 # RIGHT_EDGE/9 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_RIGHT_EDGE<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  & CalcRes/4 (/7 # RIGHT_EDGE/9 )/8 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: # RIGHT_EDGE/0 } Tile{ ]] }
    refalrts::reinit_ident( context[0], & ident_RIGHT_EDGE<int>::name );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[0], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & CalcRes/4 t.First#1/5 e.Tile#1/2 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  // closed e.Tile#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  e.Tile#1/2 {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & BeginOffset/4 AsIs: t.First#1/5 } Tile{ AsIs: >/1 ]] }
  refalrts::update_name( context[4], BeginOffset, "BeginOffset" );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[6], res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult CollectTiles(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & CollectTiles/4 (/7 # Tile/9 e.Tile#1/5 )/8 e.Other#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_Tile<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    // closed e.Tile#1 as range 5
    // closed e.Other#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & CollectTiles/4 } Tile{ AsIs: e.Other#1/2 } Tile{ HalfReuse: >/7 HalfReuse: (/9 AsIs: e.Tile#1/5 AsIs: )/8 } Tile{ ]] }
    refalrts::reinit_close_call( context[7] );
    refalrts::reinit_open_bracket( context[9] );
    refalrts::link_brackets( context[9], context[8] );
    refalrts::push_stack( context[7] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & CollectTiles/4 e.Allocated#1/5 (/9 # Tile/11 e.Tile#1/7 )/10 e.Other#1/12 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    refalrts::start_e_loop();
    do {
      context[12] = context[2];
      context[13] = context[3];
      context[7] = 0;
      context[8] = 0;
      context[9] = refalrts::brackets_left( context[7], context[8], context[12], context[13] );
      if( ! context[9] )
        continue;
      refalrts::bracket_pointers(context[9], context[10]);
      context[11] = refalrts::ident_left(  & ident_Tile<int>::name, context[7], context[8] );
      if( ! context[11] )
        continue;
      // closed e.Tile#1 as range 7
      // closed e.Other#1 as range 2

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & CollectTiles/4 } Tile{ AsIs: e.Other#1/12 } Tile{ HalfReuse: >/9 HalfReuse: (/11 AsIs: e.Tile#1/7 AsIs: )/10 } </14 & CollectTiles_Alloc/15 Tile{ AsIs: e.Allocated#1/5 } Tile{ AsIs: >/1 ]] }
      if( ! refalrts::alloc_open_call( context[14] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[15], CollectTiles_Alloc, "CollectTiles_Alloc" ) )
        return refalrts::cNoMemory;
      refalrts::reinit_close_call( context[9] );
      refalrts::reinit_open_bracket( context[11] );
      refalrts::push_stack( context[1] );
      refalrts::push_stack( context[14] );
      refalrts::link_brackets( context[11], context[10] );
      refalrts::push_stack( context[9] );
      refalrts::push_stack( context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[5], context[6] );
      res = refalrts::splice_evar( res, context[14], context[15] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      res = refalrts::splice_evar( res, context[12], context[13] );
      refalrts::use( res );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[5], context[6], context[2], context[3] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & CollectTiles/4 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & CollectTiles/4 >/1 {REMOVED TILE} 
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
  // </0 & CollectTiles/4 e.Allocated#1/2 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Allocated#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & CollectTiles_Alloc/4 AsIs: e.Allocated#1/2 AsIs: >/1 ]] }
  refalrts::update_name( context[4], CollectTiles_Alloc, "CollectTiles_Alloc" );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult CollectTiles_Alloc(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & CollectTiles_Alloc/4 (/7 # TkVariableCopy/9 'e'/10 e.Index#1/5 s.Level#1/13 s.Sample#1/12 s.Offset#1/11 )/8 e.Alloc#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_TkVariableCopy<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    context[10] = refalrts::char_left( 'e', context[5], context[6] );
    if( ! context[10] )
      continue;
    // closed e.Alloc#1 as range 2
    if( ! refalrts::svar_right( context[11], context[5], context[6] ) )
      continue;
    if( ! refalrts::svar_right( context[12], context[5], context[6] ) )
      continue;
    if( ! refalrts::svar_right( context[13], context[5], context[6] ) )
      continue;
    // closed e.Index#1 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } </14 & CollectTiles_Alloc/15 Tile{ AsIs: e.Alloc#1/2 } Tile{ HalfReuse: >/0 HalfReuse: (/4 AsIs: (/7 AsIs: # TkVariableCopy/9 AsIs: 'e'/10 AsIs: e.Index#1/5 AsIs: s.Level#1/13 AsIs: s.Sample#1/12 AsIs: s.Offset#1/11 AsIs: )/8 } Tile{ HalfReuse: )/1 ]] }
    if( ! refalrts::alloc_open_call( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[15], CollectTiles_Alloc, "CollectTiles_Alloc" ) )
      return refalrts::cNoMemory;
    refalrts::reinit_close_call( context[0] );
    refalrts::reinit_open_bracket( context[4] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[4], context[1] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[14] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[0], context[8] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & CollectTiles_Alloc/4 e.Alloc#1/2 (/7 # TkVariableCopy/9 'e'/10 e.Index#1/5 s.Level#1/13 s.Sample#1/12 s.Offset#1/11 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_TkVariableCopy<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    context[10] = refalrts::char_left( 'e', context[5], context[6] );
    if( ! context[10] )
      continue;
    // closed e.Alloc#1 as range 2
    if( ! refalrts::svar_right( context[11], context[5], context[6] ) )
      continue;
    if( ! refalrts::svar_right( context[12], context[5], context[6] ) )
      continue;
    if( ! refalrts::svar_right( context[13], context[5], context[6] ) )
      continue;
    // closed e.Index#1 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } (/14 Tile{ AsIs: (/7 AsIs: # TkVariableCopy/9 AsIs: 'e'/10 AsIs: e.Index#1/5 AsIs: s.Level#1/13 AsIs: s.Sample#1/12 AsIs: s.Offset#1/11 AsIs: )/8 HalfReuse: )/1 } Tile{ AsIs: </0 AsIs: & CollectTiles_Alloc/4 } Tile{ AsIs: e.Alloc#1/2 } >/15 Tile{ ]] }
    if( ! refalrts::alloc_open_bracket( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[15] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_close_bracket( context[1] );
    refalrts::push_stack( context[15] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[14], context[1] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[15], context[15] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[7], context[1] );
    res = refalrts::splice_evar( res, context[14], context[14] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & CollectTiles_Alloc/4 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & CollectTiles_Alloc/4 >/1 {REMOVED TILE} 
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
  // </0 & CollectTiles_Alloc/4 e.Alloc#1/2 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Alloc#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  </0 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 AsIs: e.Alloc#1/2 HalfReuse: )/1 ]] }
  refalrts::reinit_open_bracket( context[4] );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[4], context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[4];
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult GenTrash(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & GenTrash/4 (/7 e.LeftTile#1/5 )/8 e.Trash_B#1/9 # RemovedTile/11 e.Trash_E#1/12 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    // closed e.LeftTile#1 as range 5
    context[9] = 0;
    context[10] = 0;
    refalrts::start_e_loop();
    do {
      context[12] = context[2];
      context[13] = context[3];
      context[11] = refalrts::ident_left(  & ident_RemovedTile<int>::name, context[12], context[13] );
      if( ! context[11] )
        continue;
      // closed e.Trash_E#1 as range 2

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE}  {REMOVED TILE}  # RemovedTile/11 {REMOVED TILE}  {REMOVED TILE} 
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & GenTrash/4 AsIs: (/7 AsIs: e.LeftTile#1/5 AsIs: )/8 } Tile{ AsIs: e.Trash_B#1/9 } Tile{ AsIs: e.Trash_E#1/12 } Tile{ AsIs: >/1 ]] }
      refalrts::push_stack( context[1] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[12], context[13] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      refalrts::use( res );
      refalrts::splice_to_freelist_open( context[8], res );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[9], context[10], context[2], context[3] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & GenTrash/4 (/7 e.LeftTile#1/5 )/8 >/1
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
    // closed e.LeftTile#1 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  e.LeftTile#1/5 )/8 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # CmdReturnResult_NoTrash/4 HalfReuse: )/7 } Tile{ ]] }
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], & ident_CmdReturnResult_NoTrash<int>::name );
    refalrts::reinit_close_bracket( context[7] );
    refalrts::link_brackets( context[0], context[7] );
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
    // </0 & GenTrash/4 (/7 (/11 # LEFT_EDGE/13 )/12 )/8 e.Trash#1/2 >/1
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
    context[13] = refalrts::ident_left(  & ident_LEFT_EDGE<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    // closed e.Trash#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & GenTrash/4 {REMOVED TILE}  )/8 e.Trash#1/2 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 HalfReuse: # CmdTrash/11 AsIs: # LEFT_EDGE/13 AsIs: )/12 } Tile{ ]] }
    refalrts::reinit_ident( context[11], & ident_CmdTrash<int>::name );
    refalrts::link_brackets( context[7], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[7], context[12] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & GenTrash/4 (/7 e.LeftTile#1/5 t.Last#1/9 )/8 e.Trash#1/2 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.Trash#1 as range 2
  context[10] = refalrts::tvar_right( context[9], context[5], context[6] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  // closed e.LeftTile#1 as range 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  e.LeftTile#1/5 {REMOVED TILE}  e.Trash#1/2 {REMOVED TILE} 
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # CmdTrash/4 HalfReuse: </7 } & EndOffset/11 Tile{ AsIs: t.Last#1/9 HalfReuse: >/8 } Tile{ HalfReuse: )/1 ]] }
  if( ! refalrts::alloc_name( context[11], EndOffset, "EndOffset" ) )
    return refalrts::cNoMemory;
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_ident( context[4], & ident_CmdTrash<int>::name );
  refalrts::reinit_open_call( context[7] );
  refalrts::reinit_close_call( context[8] );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[0], context[1] );
  refalrts::push_stack( context[8] );
  refalrts::push_stack( context[7] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[9], context[8] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[7], res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult BeginOffset(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & BeginOffset/4 (/7 # AsIs/9 t.Item#1/10 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_AsIs<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    context[11] = refalrts::tvar_left( context[10], context[5], context[6] );
    if( ! context[11] )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  (/7 # AsIs/9 {REMOVED TILE}  )/8 {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & BeginOffset/4 } Tile{ AsIs: t.Item#1/10 } Tile{ AsIs: >/1 ]] }
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[10], context[11] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & BeginOffset/4 (/7 # HalfReuse/9 t.Item#1/10 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_HalfReuse<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    context[11] = refalrts::tvar_left( context[10], context[5], context[6] );
    if( ! context[11] )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  (/7 # HalfReuse/9 {REMOVED TILE}  )/8 {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & BeginOffset/4 } Tile{ AsIs: t.Item#1/10 } Tile{ AsIs: >/1 ]] }
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[10], context[11] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & BeginOffset/4 (/7 # Reuse/9 t.Item#1/10 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_Reuse<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    context[11] = refalrts::tvar_left( context[10], context[5], context[6] );
    if( ! context[11] )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  (/7 # Reuse/9 {REMOVED TILE}  )/8 {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & BeginOffset/4 } Tile{ AsIs: t.Item#1/10 } Tile{ AsIs: >/1 ]] }
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[10], context[11] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & BeginOffset/4 (/7 s.Tag#1/9 e.Info#1/5 s.Offset#1/10 )/8 >/1
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
  if( ! refalrts::svar_right( context[10], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Info#1 as range 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  & BeginOffset/4 (/7 s.Tag#1/9 e.Info#1/5 s.Offset#1/10 )/8 >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ HalfReuse: s.Offset1 #10/0 } Tile{ ]] }
  refalrts::reinit_svar( context[0], context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[0], res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult EndOffset(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & EndOffset/4 (/7 # AsIs/9 t.Item#1/10 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_AsIs<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    context[11] = refalrts::tvar_left( context[10], context[5], context[6] );
    if( ! context[11] )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  (/7 # AsIs/9 {REMOVED TILE}  )/8 {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & EndOffset/4 } Tile{ AsIs: t.Item#1/10 } Tile{ AsIs: >/1 ]] }
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[10], context[11] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & EndOffset/4 (/7 # HalfReuse/9 t.Item#1/10 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_HalfReuse<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    context[11] = refalrts::tvar_left( context[10], context[5], context[6] );
    if( ! context[11] )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  (/7 # HalfReuse/9 {REMOVED TILE}  )/8 {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & EndOffset/4 } Tile{ AsIs: t.Item#1/10 } Tile{ AsIs: >/1 ]] }
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[10], context[11] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & EndOffset/4 (/7 # Reuse/9 t.Item#1/10 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_Reuse<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    context[11] = refalrts::tvar_left( context[10], context[5], context[6] );
    if( ! context[11] )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  (/7 # Reuse/9 {REMOVED TILE}  )/8 {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & EndOffset/4 } Tile{ AsIs: t.Item#1/10 } Tile{ AsIs: >/1 ]] }
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[10], context[11] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & EndOffset/4 (/7 # TkVariable/9 's'/10 e.Index#1/5 s.Depth#1/12 s.Offset#1/11 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_TkVariable<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    context[10] = refalrts::char_left( 's', context[5], context[6] );
    if( ! context[10] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_right( context[11], context[5], context[6] ) )
      continue;
    if( ! refalrts::svar_right( context[12], context[5], context[6] ) )
      continue;
    // closed e.Index#1 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  & EndOffset/4 (/7 # TkVariable/9 's'/10 e.Index#1/5 s.Depth#1/12 s.Offset#1/11 )/8 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: s.Offset1 #11/0 } Tile{ ]] }
    refalrts::reinit_svar( context[0], context[11] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[0], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & EndOffset/4 (/7 # TkVariableCopy/9 's'/10 e.Index#1/5 s.Depth#1/13 s.Sample#1/12 s.Offset#1/11 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_TkVariableCopy<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    context[10] = refalrts::char_left( 's', context[5], context[6] );
    if( ! context[10] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_right( context[11], context[5], context[6] ) )
      continue;
    if( ! refalrts::svar_right( context[12], context[5], context[6] ) )
      continue;
    if( ! refalrts::svar_right( context[13], context[5], context[6] ) )
      continue;
    // closed e.Index#1 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  & EndOffset/4 (/7 # TkVariableCopy/9 's'/10 e.Index#1/5 s.Depth#1/13 s.Sample#1/12 s.Offset#1/11 )/8 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: s.Offset1 #11/0 } Tile{ ]] }
    refalrts::reinit_svar( context[0], context[11] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[0], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & EndOffset/4 (/7 # TkVariable/9 s.Mode#1/10 e.Index#1/5 s.Depth#1/12 s.Offset#1/11 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_TkVariable<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[10], context[5], context[6] ) )
      continue;
    if( ! refalrts::svar_right( context[11], context[5], context[6] ) )
      continue;
    if( ! refalrts::svar_right( context[12], context[5], context[6] ) )
      continue;
    // closed e.Index#1 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  s.Mode#1/10 e.Index#1/5 s.Depth#1/12 s.Offset#1/11 )/8 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Inc/4 HalfReuse: s.Offset1 #11/7 HalfReuse: >/9 } Tile{ ]] }
    refalrts::update_name( context[4], Inc, "Inc" );
    refalrts::reinit_svar( context[7], context[11] );
    refalrts::reinit_close_call( context[9] );
    refalrts::push_stack( context[9] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[9], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & EndOffset/4 (/7 # TkVariableCopy/9 s.Mode#1/10 e.Index#1/5 s.Depth#1/13 s.Sample#1/12 s.Offset#1/11 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_TkVariableCopy<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[10], context[5], context[6] ) )
      continue;
    if( ! refalrts::svar_right( context[11], context[5], context[6] ) )
      continue;
    if( ! refalrts::svar_right( context[12], context[5], context[6] ) )
      continue;
    if( ! refalrts::svar_right( context[13], context[5], context[6] ) )
      continue;
    // closed e.Index#1 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  s.Mode#1/10 e.Index#1/5 s.Depth#1/13 s.Sample#1/12 s.Offset#1/11 )/8 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Inc/4 HalfReuse: s.Offset1 #11/7 HalfReuse: >/9 } Tile{ ]] }
    refalrts::update_name( context[4], Inc, "Inc" );
    refalrts::reinit_svar( context[7], context[11] );
    refalrts::reinit_close_call( context[9] );
    refalrts::push_stack( context[9] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[9], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & EndOffset/4 (/7 s.Tag#1/9 e.Info#1/5 s.Offset#1/10 )/8 >/1
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
  if( ! refalrts::svar_right( context[10], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Info#1 as range 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  & EndOffset/4 (/7 s.Tag#1/9 e.Info#1/5 s.Offset#1/10 )/8 >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ HalfReuse: s.Offset1 #10/0 } Tile{ ]] }
  refalrts::reinit_svar( context[0], context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[0], res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult lambda_AddOffsets_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 28 elems
  refalrts::Iter context[28];
  refalrts::zeros( context, 28 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & lambda_AddOffsets_0/4 (/7 e.Index#3/5 )/8 s.Level#3/9 s.Offset#3/10 e.Range_B#4/11 (/15 's'/17 (/20 e.Index#3/22 s.Level#3/24 )/21 e.Offsets#4/13 s.SampleOffset#4/25 )/16 e.Range_E#4/26 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.Index#3 as range 5
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[11] = 0;
  context[12] = 0;
  refalrts::start_e_loop();
  do {
    context[26] = context[2];
    context[27] = context[3];
    context[13] = 0;
    context[14] = 0;
    context[15] = refalrts::brackets_left( context[13], context[14], context[26], context[27] );
    if( ! context[15] )
      continue;
    refalrts::bracket_pointers(context[15], context[16]);
    context[17] = refalrts::char_left( 's', context[13], context[14] );
    if( ! context[17] )
      continue;
    context[18] = 0;
    context[19] = 0;
    context[20] = refalrts::brackets_left( context[18], context[19], context[13], context[14] );
    if( ! context[20] )
      continue;
    refalrts::bracket_pointers(context[20], context[21]);
    if( ! refalrts::repeated_evar_left( context[22], context[23], context[5], context[6], context[18], context[19] ) )
      continue;
    if( ! refalrts::repeated_stvar_left( context[24], context[9], context[18], context[19] ) )
      continue;
    if( ! refalrts::empty_seq( context[18], context[19] ) )
      continue;
    // closed e.Range_E#4 as range 2
    if( ! refalrts::svar_right( context[25], context[13], context[14] ) )
      continue;
    // closed e.Offsets#4 as range 13

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  (/7 e.Index#3/5 {REMOVED TILE}  s.Level#3/9 {REMOVED TILE}  e.Range_B#4/11 {REMOVED TILE}  e.Offsets#4/13 s.SampleOffset#4/25 )/16 e.Range_E#4/26 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # HalfReuse/4 } Tile{ AsIs: (/15 HalfReuse: # TkVariable/17 HalfReuse: 's'/20 AsIs: e.Index#3/22 AsIs: s.Level#3/24 HalfReuse: s.SampleOffset4 #25/21 } Tile{ AsIs: s.Offset#3/10 } Tile{ AsIs: )/8 } Tile{ HalfReuse: )/1 ]] }
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], & ident_HalfReuse<int>::name );
    refalrts::reinit_ident( context[17], & ident_TkVariable<int>::name );
    refalrts::reinit_char( context[20], 's' );
    refalrts::reinit_svar( context[21], context[25] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[0], context[1] );
    refalrts::link_brackets( context[15], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[8], context[8] );
    res = refalrts::splice_evar( res, context[10], context[10] );
    res = refalrts::splice_evar( res, context[15], context[21] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( refalrts::open_evar_advance( context[11], context[12], context[2], context[3] ) );
  return refalrts::FnResult(refalrts::cRecognitionImpossible | (__LINE__ << 8));
}

static refalrts::FnResult lambda_AddOffsets_1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_AddOffsets_1/4 (/7 e.PatternVars#1/5 )/8 (/11 # HalfReuse/13 (/16 # TkVariable/18 's'/19 e.Index#3/14 s.Level#3/21 s.Offset#3/20 )/17 )/12 >/1
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
    context[13] = refalrts::ident_left(  & ident_HalfReuse<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    context[14] = 0;
    context[15] = 0;
    context[16] = refalrts::brackets_left( context[14], context[15], context[9], context[10] );
    if( ! context[16] )
      continue;
    refalrts::bracket_pointers(context[16], context[17]);
    context[18] = refalrts::ident_left(  & ident_TkVariable<int>::name, context[14], context[15] );
    if( ! context[18] )
      continue;
    context[19] = refalrts::char_left( 's', context[14], context[15] );
    if( ! context[19] )
      continue;
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.PatternVars#1 as range 5
    if( ! refalrts::svar_right( context[20], context[14], context[15] ) )
      continue;
    if( ! refalrts::svar_right( context[21], context[14], context[15] ) )
      continue;
    // closed e.Index#3 as range 14

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  # TkVariable/18 's'/19 {REMOVED TILE}  {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </4 HalfReuse: & Fetch/7 AsIs: e.PatternVars#1/5 HalfReuse: </8 HalfReuse: & CreateClosure /11 HalfReuse: & lambda_AddOffsets_0/13 AsIs: (/16 } Tile{ AsIs: e.Index#3/14 } Tile{ HalfReuse: )/0 } Tile{ AsIs: s.Level#3/21 AsIs: s.Offset#3/20 HalfReuse: >/17 HalfReuse: >/12 } Tile{ ]] }
    refalrts::reinit_open_call( context[4] );
    refalrts::reinit_name( context[7], Fetch, "Fetch" );
    refalrts::reinit_open_call( context[8] );
    refalrts::reinit_name( context[11], refalrts::create_closure, "refalrts::create_closure" );
    refalrts::reinit_name( context[13], lambda_AddOffsets_0, "lambda_AddOffsets_0" );
    refalrts::reinit_close_bracket( context[0] );
    refalrts::reinit_close_call( context[17] );
    refalrts::reinit_close_call( context[12] );
    refalrts::push_stack( context[12] );
    refalrts::push_stack( context[4] );
    refalrts::push_stack( context[17] );
    refalrts::push_stack( context[8] );
    refalrts::link_brackets( context[16], context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[21], context[12] );
    res = refalrts::splice_evar( res, context[0], context[0] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    res = refalrts::splice_evar( res, context[4], context[16] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & lambda_AddOffsets_1/4 (/7 e.PatternVars#1/5 )/8 t.Other#3/9 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.PatternVars#1 as range 5
  context[10] = refalrts::tvar_left( context[9], context[2], context[3] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  </0 & lambda_AddOffsets_1/4 (/7 e.PatternVars#1/5 )/8 {REMOVED TILE}  >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ AsIs: t.Other#3/9 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult lambda_AddOffsets_2(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 28 elems
  refalrts::Iter context[28];
  refalrts::zeros( context, 28 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & lambda_AddOffsets_2/4 (/7 e.Index#2/5 )/8 s.Level#2/9 s.Offset#2/10 e.Range_B#3/11 (/15 's'/17 (/20 e.Index#2/22 s.Level#2/24 )/21 e.Offsets#3/13 s.SampleOffset#3/25 )/16 e.Range_E#3/26 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.Index#2 as range 5
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[11] = 0;
  context[12] = 0;
  refalrts::start_e_loop();
  do {
    context[26] = context[2];
    context[27] = context[3];
    context[13] = 0;
    context[14] = 0;
    context[15] = refalrts::brackets_left( context[13], context[14], context[26], context[27] );
    if( ! context[15] )
      continue;
    refalrts::bracket_pointers(context[15], context[16]);
    context[17] = refalrts::char_left( 's', context[13], context[14] );
    if( ! context[17] )
      continue;
    context[18] = 0;
    context[19] = 0;
    context[20] = refalrts::brackets_left( context[18], context[19], context[13], context[14] );
    if( ! context[20] )
      continue;
    refalrts::bracket_pointers(context[20], context[21]);
    if( ! refalrts::repeated_evar_left( context[22], context[23], context[5], context[6], context[18], context[19] ) )
      continue;
    if( ! refalrts::repeated_stvar_left( context[24], context[9], context[18], context[19] ) )
      continue;
    if( ! refalrts::empty_seq( context[18], context[19] ) )
      continue;
    // closed e.Range_E#3 as range 2
    if( ! refalrts::svar_right( context[25], context[13], context[14] ) )
      continue;
    // closed e.Offsets#3 as range 13

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  e.Index#2/5 {REMOVED TILE}  s.Level#2/9 {REMOVED TILE}  e.Range_B#3/11 {REMOVED TILE}  e.Offsets#3/13 s.SampleOffset#3/25 {REMOVED TILE}  e.Range_E#3/26 {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Add/4 HalfReuse: s.Offset2 #10/7 } Tile{ HalfReuse: 1/8 } Tile{ HalfReuse: >/16 } Tile{ AsIs: (/15 HalfReuse: # TkVariableCopy/17 HalfReuse: 's'/20 AsIs: e.Index#2/22 AsIs: s.Level#2/24 HalfReuse: s.SampleOffset3 #25/21 } Tile{ AsIs: s.Offset#2/10 } Tile{ HalfReuse: )/1 ]] }
    refalrts::update_name( context[4], Add, "Add" );
    refalrts::reinit_svar( context[7], context[10] );
    refalrts::reinit_number( context[8], 1UL );
    refalrts::reinit_close_call( context[16] );
    refalrts::reinit_ident( context[17], & ident_TkVariableCopy<int>::name );
    refalrts::reinit_char( context[20], 's' );
    refalrts::reinit_svar( context[21], context[25] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[15], context[1] );
    refalrts::push_stack( context[16] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[10], context[10] );
    res = refalrts::splice_evar( res, context[15], context[21] );
    res = refalrts::splice_evar( res, context[16], context[16] );
    res = refalrts::splice_evar( res, context[8], context[8] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[7], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( refalrts::open_evar_advance( context[11], context[12], context[2], context[3] ) );
  return refalrts::FnResult(refalrts::cRecognitionImpossible | (__LINE__ << 8));
}

static refalrts::FnResult lambda_AddOffsets_3(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 28 elems
  refalrts::Iter context[28];
  refalrts::zeros( context, 28 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & lambda_AddOffsets_3/4 (/7 e.Index#2/5 )/8 s.Level#2/9 s.Offset#2/10 e.Range_B#3/11 (/15 't'/17 (/20 e.Index#2/22 s.Level#2/24 )/21 e.Offsets#3/13 s.SampleOffset#3/25 )/16 e.Range_E#3/26 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.Index#2 as range 5
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[11] = 0;
  context[12] = 0;
  refalrts::start_e_loop();
  do {
    context[26] = context[2];
    context[27] = context[3];
    context[13] = 0;
    context[14] = 0;
    context[15] = refalrts::brackets_left( context[13], context[14], context[26], context[27] );
    if( ! context[15] )
      continue;
    refalrts::bracket_pointers(context[15], context[16]);
    context[17] = refalrts::char_left( 't', context[13], context[14] );
    if( ! context[17] )
      continue;
    context[18] = 0;
    context[19] = 0;
    context[20] = refalrts::brackets_left( context[18], context[19], context[13], context[14] );
    if( ! context[20] )
      continue;
    refalrts::bracket_pointers(context[20], context[21]);
    if( ! refalrts::repeated_evar_left( context[22], context[23], context[5], context[6], context[18], context[19] ) )
      continue;
    if( ! refalrts::repeated_stvar_left( context[24], context[9], context[18], context[19] ) )
      continue;
    if( ! refalrts::empty_seq( context[18], context[19] ) )
      continue;
    // closed e.Range_E#3 as range 2
    if( ! refalrts::svar_right( context[25], context[13], context[14] ) )
      continue;
    // closed e.Offsets#3 as range 13

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  e.Index#2/5 {REMOVED TILE}  s.Level#2/9 {REMOVED TILE}  e.Range_B#3/11 {REMOVED TILE}  e.Offsets#3/13 s.SampleOffset#3/25 {REMOVED TILE}  e.Range_E#3/26 {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Add/4 HalfReuse: s.Offset2 #10/7 } Tile{ HalfReuse: 2/8 } Tile{ HalfReuse: >/16 } Tile{ AsIs: (/15 HalfReuse: # TkVariableCopy/17 HalfReuse: 't'/20 AsIs: e.Index#2/22 AsIs: s.Level#2/24 HalfReuse: s.SampleOffset3 #25/21 } Tile{ AsIs: s.Offset#2/10 } Tile{ HalfReuse: )/1 ]] }
    refalrts::update_name( context[4], Add, "Add" );
    refalrts::reinit_svar( context[7], context[10] );
    refalrts::reinit_number( context[8], 2UL );
    refalrts::reinit_close_call( context[16] );
    refalrts::reinit_ident( context[17], & ident_TkVariableCopy<int>::name );
    refalrts::reinit_char( context[20], 't' );
    refalrts::reinit_svar( context[21], context[25] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[15], context[1] );
    refalrts::push_stack( context[16] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[10], context[10] );
    res = refalrts::splice_evar( res, context[15], context[21] );
    res = refalrts::splice_evar( res, context[16], context[16] );
    res = refalrts::splice_evar( res, context[8], context[8] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[7], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( refalrts::open_evar_advance( context[11], context[12], context[2], context[3] ) );
  return refalrts::FnResult(refalrts::cRecognitionImpossible | (__LINE__ << 8));
}

static refalrts::FnResult lambda_AddOffsets_4(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 28 elems
  refalrts::Iter context[28];
  refalrts::zeros( context, 28 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & lambda_AddOffsets_4/4 (/7 e.Index#2/5 )/8 s.Level#2/9 s.Offset#2/10 e.Range_B#3/11 (/15 'e'/17 (/20 e.Index#2/22 s.Level#2/24 )/21 e.Offsets#3/13 s.SampleOffset#3/25 )/16 e.Range_E#3/26 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.Index#2 as range 5
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[11] = 0;
  context[12] = 0;
  refalrts::start_e_loop();
  do {
    context[26] = context[2];
    context[27] = context[3];
    context[13] = 0;
    context[14] = 0;
    context[15] = refalrts::brackets_left( context[13], context[14], context[26], context[27] );
    if( ! context[15] )
      continue;
    refalrts::bracket_pointers(context[15], context[16]);
    context[17] = refalrts::char_left( 'e', context[13], context[14] );
    if( ! context[17] )
      continue;
    context[18] = 0;
    context[19] = 0;
    context[20] = refalrts::brackets_left( context[18], context[19], context[13], context[14] );
    if( ! context[20] )
      continue;
    refalrts::bracket_pointers(context[20], context[21]);
    if( ! refalrts::repeated_evar_left( context[22], context[23], context[5], context[6], context[18], context[19] ) )
      continue;
    if( ! refalrts::repeated_stvar_left( context[24], context[9], context[18], context[19] ) )
      continue;
    if( ! refalrts::empty_seq( context[18], context[19] ) )
      continue;
    // closed e.Range_E#3 as range 2
    if( ! refalrts::svar_right( context[25], context[13], context[14] ) )
      continue;
    // closed e.Offsets#3 as range 13

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  e.Index#2/5 {REMOVED TILE}  s.Level#2/9 {REMOVED TILE}  e.Range_B#3/11 {REMOVED TILE}  e.Offsets#3/13 s.SampleOffset#3/25 {REMOVED TILE}  e.Range_E#3/26 {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Add/4 HalfReuse: s.Offset2 #10/7 } Tile{ HalfReuse: 2/8 } Tile{ HalfReuse: >/16 } Tile{ AsIs: (/15 HalfReuse: # TkVariableCopy/17 HalfReuse: 'e'/20 AsIs: e.Index#2/22 AsIs: s.Level#2/24 HalfReuse: s.SampleOffset3 #25/21 } Tile{ AsIs: s.Offset#2/10 } Tile{ HalfReuse: )/1 ]] }
    refalrts::update_name( context[4], Add, "Add" );
    refalrts::reinit_svar( context[7], context[10] );
    refalrts::reinit_number( context[8], 2UL );
    refalrts::reinit_close_call( context[16] );
    refalrts::reinit_ident( context[17], & ident_TkVariableCopy<int>::name );
    refalrts::reinit_char( context[20], 'e' );
    refalrts::reinit_svar( context[21], context[25] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[15], context[1] );
    refalrts::push_stack( context[16] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[10], context[10] );
    res = refalrts::splice_evar( res, context[15], context[21] );
    res = refalrts::splice_evar( res, context[16], context[16] );
    res = refalrts::splice_evar( res, context[8], context[8] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[7], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( refalrts::open_evar_advance( context[11], context[12], context[2], context[3] ) );
  return refalrts::FnResult(refalrts::cRecognitionImpossible | (__LINE__ << 8));
}

static refalrts::FnResult lambda_AddOffsets_5(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_AddOffsets_5/4 (/7 e.PatternVars#1/5 )/8 s.Offset#2/14 (/11 # Tile/13 e.Tile#2/9 )/12 >/1
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
    context[11] = refalrts::brackets_right( context[9], context[10], context[2], context[3] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    context[13] = refalrts::ident_left(  & ident_Tile<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    // closed e.PatternVars#1 as range 5
    // closed e.Tile#2 as range 9
    if( ! refalrts::svar_left( context[14], context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: s.Offset#2/14 AsIs: (/11 AsIs: # Tile/13 } </15 & Map/16 </17 Tile{ HalfReuse: & CreateClosure /0 Reuse: & lambda_AddOffsets_1/4 AsIs: (/7 AsIs: e.PatternVars#1/5 AsIs: )/8 } >/18 Tile{ AsIs: e.Tile#2/9 } Tile{ HalfReuse: >/12 HalfReuse: )/1 ]] }
    if( ! refalrts::alloc_open_call( context[15] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[16], Map, "Map" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[17] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[18] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_name( context[0], refalrts::create_closure, "refalrts::create_closure" );
    refalrts::update_name( context[4], lambda_AddOffsets_1, "lambda_AddOffsets_1" );
    refalrts::reinit_close_call( context[12] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[11], context[1] );
    refalrts::push_stack( context[12] );
    refalrts::push_stack( context[15] );
    refalrts::push_stack( context[18] );
    refalrts::push_stack( context[17] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[12];
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[18], context[18] );
    res = refalrts::splice_evar( res, context[0], context[8] );
    res = refalrts::splice_evar( res, context[15], context[17] );
    res = refalrts::splice_evar( res, context[14], context[13] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_AddOffsets_5/4 (/7 e.PatternVars#1/5 )/8 s.Offset#2/15 (/11 # TkVariable/13 's'/14 e.Index#2/9 s.Level#2/16 )/12 >/1
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
    context[11] = refalrts::brackets_right( context[9], context[10], context[2], context[3] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    context[13] = refalrts::ident_left(  & ident_TkVariable<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    context[14] = refalrts::char_left( 's', context[9], context[10] );
    if( ! context[14] )
      continue;
    // closed e.PatternVars#1 as range 5
    if( ! refalrts::svar_left( context[15], context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_right( context[16], context[9], context[10] ) )
      continue;
    // closed e.Index#2 as range 9

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  s.Offset#2/15 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 } Tile{ AsIs: e.PatternVars#1/5 } Tile{ HalfReuse: </11 HalfReuse: & CreateClosure /13 HalfReuse: & lambda_AddOffsets_2/14 } Tile{ AsIs: (/7 } Tile{ AsIs: e.Index#2/9 } Tile{ AsIs: )/8 } Tile{ AsIs: s.Level#2/16 HalfReuse: s.Offset2 #15/12 AsIs: >/1 } >/17 Tile{ ]] }
    if( ! refalrts::alloc_close_call( context[17] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], Fetch, "Fetch" );
    refalrts::reinit_open_call( context[11] );
    refalrts::reinit_name( context[13], refalrts::create_closure, "refalrts::create_closure" );
    refalrts::reinit_name( context[14], lambda_AddOffsets_2, "lambda_AddOffsets_2" );
    refalrts::reinit_svar( context[12], context[15] );
    refalrts::push_stack( context[17] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[11] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[17], context[17] );
    res = refalrts::splice_evar( res, context[16], context[1] );
    res = refalrts::splice_evar( res, context[8], context[8] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    res = refalrts::splice_evar( res, context[11], context[14] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_AddOffsets_5/4 (/7 e.PatternVars#1/5 )/8 s.Offset#2/15 (/11 # TkVariable/13 't'/14 e.Index#2/9 s.Level#2/16 )/12 >/1
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
    context[11] = refalrts::brackets_right( context[9], context[10], context[2], context[3] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    context[13] = refalrts::ident_left(  & ident_TkVariable<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    context[14] = refalrts::char_left( 't', context[9], context[10] );
    if( ! context[14] )
      continue;
    // closed e.PatternVars#1 as range 5
    if( ! refalrts::svar_left( context[15], context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_right( context[16], context[9], context[10] ) )
      continue;
    // closed e.Index#2 as range 9

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  s.Offset#2/15 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 } Tile{ AsIs: e.PatternVars#1/5 } Tile{ HalfReuse: </11 HalfReuse: & CreateClosure /13 HalfReuse: & lambda_AddOffsets_3/14 } Tile{ AsIs: (/7 } Tile{ AsIs: e.Index#2/9 } Tile{ AsIs: )/8 } Tile{ AsIs: s.Level#2/16 HalfReuse: s.Offset2 #15/12 AsIs: >/1 } >/17 Tile{ ]] }
    if( ! refalrts::alloc_close_call( context[17] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], Fetch, "Fetch" );
    refalrts::reinit_open_call( context[11] );
    refalrts::reinit_name( context[13], refalrts::create_closure, "refalrts::create_closure" );
    refalrts::reinit_name( context[14], lambda_AddOffsets_3, "lambda_AddOffsets_3" );
    refalrts::reinit_svar( context[12], context[15] );
    refalrts::push_stack( context[17] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[11] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[17], context[17] );
    res = refalrts::splice_evar( res, context[16], context[1] );
    res = refalrts::splice_evar( res, context[8], context[8] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    res = refalrts::splice_evar( res, context[11], context[14] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_AddOffsets_5/4 (/7 e.PatternVars#1/5 )/8 s.Offset#2/15 (/11 # TkVariable/13 'e'/14 e.Index#2/9 s.Level#2/16 )/12 >/1
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
    context[11] = refalrts::brackets_right( context[9], context[10], context[2], context[3] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    context[13] = refalrts::ident_left(  & ident_TkVariable<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    context[14] = refalrts::char_left( 'e', context[9], context[10] );
    if( ! context[14] )
      continue;
    // closed e.PatternVars#1 as range 5
    if( ! refalrts::svar_left( context[15], context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_right( context[16], context[9], context[10] ) )
      continue;
    // closed e.Index#2 as range 9

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  s.Offset#2/15 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 } Tile{ AsIs: e.PatternVars#1/5 } Tile{ HalfReuse: </11 HalfReuse: & CreateClosure /13 HalfReuse: & lambda_AddOffsets_4/14 } Tile{ AsIs: (/7 } Tile{ AsIs: e.Index#2/9 } Tile{ AsIs: )/8 } Tile{ AsIs: s.Level#2/16 HalfReuse: s.Offset2 #15/12 AsIs: >/1 } >/17 Tile{ ]] }
    if( ! refalrts::alloc_close_call( context[17] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], Fetch, "Fetch" );
    refalrts::reinit_open_call( context[11] );
    refalrts::reinit_name( context[13], refalrts::create_closure, "refalrts::create_closure" );
    refalrts::reinit_name( context[14], lambda_AddOffsets_4, "lambda_AddOffsets_4" );
    refalrts::reinit_svar( context[12], context[15] );
    refalrts::push_stack( context[17] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[11] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[17], context[17] );
    res = refalrts::splice_evar( res, context[16], context[1] );
    res = refalrts::splice_evar( res, context[8], context[8] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    res = refalrts::splice_evar( res, context[11], context[14] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & lambda_AddOffsets_5/4 (/7 e.PatternVars#1/5 )/8 s.Offset#2/13 (/11 s.Tag#2/14 e.Info#2/9 )/12 >/1
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
  context[11] = refalrts::brackets_right( context[9], context[10], context[2], context[3] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[11], context[12]);
  // closed e.PatternVars#1 as range 5
  if( ! refalrts::svar_left( context[13], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[14], context[9], context[10] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Info#2 as range 9

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  e.PatternVars#1/5 {REMOVED TILE}  s.Offset#2/13 {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Add/4 HalfReuse: s.Offset2 #13/7 } Tile{ HalfReuse: 1/8 } >/15 Tile{ AsIs: (/11 AsIs: s.Tag#2/14 AsIs: e.Info#2/9 HalfReuse: s.Offset2 #13/12 HalfReuse: )/1 ]] }
  if( ! refalrts::alloc_close_call( context[15] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], Add, "Add" );
  refalrts::reinit_svar( context[7], context[13] );
  refalrts::reinit_number( context[8], 1UL );
  refalrts::reinit_svar( context[12], context[13] );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[11], context[1] );
  refalrts::push_stack( context[15] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[11];
  res = refalrts::splice_evar( res, context[15], context[15] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[7], res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult AddOffsets(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & AddOffsets/4 s.ContextOffset#1/5 (/8 e.PatternVars#1/6 )/9 e.MarkedResult#1/2 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[6] = 0;
  context[7] = 0;
  context[8] = refalrts::brackets_left( context[6], context[7], context[2], context[3] );
  if( ! context[8] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[8], context[9]);
  // closed e.PatternVars#1 as range 6
  // closed e.MarkedResult#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  s.ContextOffset#1/5 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & MapReduce/4 } </10 & CreateClosure /11 & lambda_AddOffsets_5/12 Tile{ AsIs: (/8 } Tile{ AsIs: e.PatternVars#1/6 } )/13 >/14 Tile{ HalfReuse: s.ContextOffset1 #5/9 AsIs: e.MarkedResult#1/2 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[11], refalrts::create_closure, "refalrts::create_closure" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[12], lambda_AddOffsets_5, "lambda_AddOffsets_5" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[14] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], MapReduce, "MapReduce" );
  refalrts::reinit_svar( context[9], context[5] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[14] );
  refalrts::push_stack( context[10] );
  refalrts::link_brackets( context[8], context[13] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[9];
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[6], context[7] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[10], context[12] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[4], res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult FoldOpenELoops(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & FoldOpenELoops/4 e.Commands_B#1/5 (/9 # CmdOpenedE/11 # AlgLeft/12 s.BracketNum#1/13 s.VarNumber#1/14 )/10 e.Commands_E#1/15 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    refalrts::start_e_loop();
    do {
      context[15] = context[2];
      context[16] = context[3];
      context[7] = 0;
      context[8] = 0;
      context[9] = refalrts::brackets_left( context[7], context[8], context[15], context[16] );
      if( ! context[9] )
        continue;
      refalrts::bracket_pointers(context[9], context[10]);
      context[11] = refalrts::ident_left(  & ident_CmdOpenedE<int>::name, context[7], context[8] );
      if( ! context[11] )
        continue;
      context[12] = refalrts::ident_left(  & ident_AlgLeft<int>::name, context[7], context[8] );
      if( ! context[12] )
        continue;
      // closed e.Commands_E#1 as range 2
      if( ! refalrts::svar_left( context[13], context[7], context[8] ) )
        continue;
      if( ! refalrts::svar_left( context[14], context[7], context[8] ) )
        continue;
      if( ! refalrts::empty_seq( context[7], context[8] ) )
        continue;

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
      //RESULT: Tile{ [[ } Tile{ AsIs: e.Commands_B#1/5 } Tile{ AsIs: (/9 Reuse: # CmdOpenELoop/11 AsIs: # AlgLeft/12 AsIs: s.BracketNum#1/13 AsIs: s.VarNumber#1/14 HalfReuse: </10 } Tile{ AsIs: & FoldOpenELoops/4 } Tile{ AsIs: e.Commands_E#1/15 } Tile{ HalfReuse: >/0 } Tile{ HalfReuse: )/1 ]] }
      refalrts::update_ident( context[11], & ident_CmdOpenELoop<int>::name );
      refalrts::reinit_open_call( context[10] );
      refalrts::reinit_close_call( context[0] );
      refalrts::reinit_close_bracket( context[1] );
      refalrts::link_brackets( context[9], context[1] );
      refalrts::push_stack( context[0] );
      refalrts::push_stack( context[10] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[0], context[0] );
      res = refalrts::splice_evar( res, context[15], context[16] );
      res = refalrts::splice_evar( res, context[4], context[4] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      res = refalrts::splice_evar( res, context[5], context[6] );
      refalrts::use( res );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[5], context[6], context[2], context[3] ) );
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & FoldOpenELoops/4 e.Commands#1/2 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Commands#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  </0 & FoldOpenELoops/4 {REMOVED TILE}  >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Commands#1/2 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult lambda_GenPattern_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & lambda_GenPattern_0/4 s.ContextOffset#2/5 (/8 e.Vars#2/6 )/9 (/12 e.MarkedPattern#2/10 )/13 e.Commands#2/2 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[6] = 0;
  context[7] = 0;
  context[8] = refalrts::brackets_left( context[6], context[7], context[2], context[3] );
  if( ! context[8] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[8], context[9]);
  context[10] = 0;
  context[11] = 0;
  context[12] = refalrts::brackets_left( context[10], context[11], context[2], context[3] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[12], context[13]);
  // closed e.Vars#2 as range 6
  // closed e.MarkedPattern#2 as range 10
  // closed e.Commands#2 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ AsIs: (/8 AsIs: e.Vars#2/6 AsIs: )/9 AsIs: (/12 AsIs: e.MarkedPattern#2/10 AsIs: )/13 } Tile{ AsIs: </0 Reuse: & FreezeRanges/4 AsIs: s.ContextOffset#2/5 } Tile{ AsIs: e.Commands#2/2 } Tile{ AsIs: >/1 ]] }
  refalrts::update_name( context[4], FreezeRanges, "FreezeRanges" );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[12], context[13] );
  refalrts::link_brackets( context[8], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[0], context[5] );
  res = refalrts::splice_evar( res, context[8], context[13] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult lambda_GenPattern_1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & lambda_GenPattern_1/4 (/7 e.Vars#2/5 )/8 (/11 e.MarkedPattern#2/9 )/12 s.ContextOffset#2/13 e.Commands#2/2 >/1
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
  // closed e.Vars#2 as range 5
  // closed e.MarkedPattern#2 as range 9
  if( ! refalrts::svar_left( context[13], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Commands#2 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Vars#2/5 AsIs: )/8 AsIs: (/11 AsIs: e.MarkedPattern#2/9 AsIs: )/12 AsIs: s.ContextOffset#2/13 } Tile{ AsIs: </0 Reuse: & GetRangeReassigns/4 } Tile{ AsIs: e.Commands#2/2 } Tile{ AsIs: >/1 ]] }
  refalrts::update_name( context[4], GetRangeReassigns, "GetRangeReassigns" );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[0], context[4] );
  res = refalrts::splice_evar( res, context[7], context[13] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult lambda_GenPattern_2(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 25 elems
  refalrts::Iter context[25];
  refalrts::zeros( context, 25 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & lambda_GenPattern_2/4 (/7 e.Vars#2/5 )/8 (/11 e.MarkedPattern#2/9 )/12 s.ContextOffset#2/13 (/16 e.Reassigns#2/14 )/17 e.Commands#2/2 >/1
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
  // closed e.Vars#2 as range 5
  // closed e.MarkedPattern#2 as range 9
  if( ! refalrts::svar_left( context[13], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[14] = 0;
  context[15] = 0;
  context[16] = refalrts::brackets_left( context[14], context[15], context[2], context[3] );
  if( ! context[16] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[16], context[17]);
  // closed e.Reassigns#2 as range 14
  // closed e.Commands#2 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } (/18 </19 & FixupEVarIndexes/20 Tile{ AsIs: (/16 AsIs: e.Reassigns#2/14 AsIs: )/17 } Tile{ AsIs: e.Vars#2/5 } Tile{ AsIs: >/1 } Tile{ AsIs: )/8 AsIs: (/11 } Tile{ AsIs: </0 Reuse: & FixupMarkedPatternIndexes/4 AsIs: (/7 } e.Reassigns#2/14/21 )/23 Tile{ AsIs: e.MarkedPattern#2/9 } >/24 Tile{ AsIs: )/12 AsIs: s.ContextOffset#2/13 } Tile{ AsIs: e.Commands#2/2 } Tile{ ]] }
  if( ! refalrts::alloc_open_bracket( context[18] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[19] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[20], FixupEVarIndexes, "FixupEVarIndexes" ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[21], context[22], context[14], context[15]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[23] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[24] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], FixupMarkedPatternIndexes, "FixupMarkedPatternIndexes" );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::push_stack( context[24] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[7], context[23] );
  refalrts::link_brackets( context[18], context[8] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[19] );
  refalrts::link_brackets( context[16], context[17] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[12], context[13] );
  res = refalrts::splice_evar( res, context[24], context[24] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[23], context[23] );
  res = refalrts::splice_evar( res, context[21], context[22] );
  res = refalrts::splice_evar( res, context[0], context[7] );
  res = refalrts::splice_evar( res, context[8], context[11] );
  res = refalrts::splice_evar( res, context[1], context[1] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[16], context[17] );
  res = refalrts::splice_evar( res, context[18], context[20] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult lambda_GenPattern_3(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & lambda_GenPattern_3/4 (/7 e.Vars#2/5 )/8 (/11 e.MarkedPattern#2/9 )/12 s.ContextOffset#2/13 e.Commands#2/2 >/1
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
  // closed e.Vars#2 as range 5
  // closed e.MarkedPattern#2 as range 9
  if( ! refalrts::svar_left( context[13], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Commands#2 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Vars#2/5 AsIs: )/8 AsIs: (/11 AsIs: e.MarkedPattern#2/9 AsIs: )/12 AsIs: s.ContextOffset#2/13 } (/14 (/15 # CmdComment/16 Tile{ AsIs: </0 Reuse: & TextFromExpr/4 } e.MarkedPattern#2/9/17 >/19 )/20 Tile{ AsIs: e.Commands#2/2 } Tile{ HalfReuse: )/1 ]] }
  if( ! refalrts::alloc_open_bracket( context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[16], & ident_CmdComment<int>::name ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[17], context[18], context[9], context[10]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[19] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[20] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], TextFromExpr, "TextFromExpr" );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[14], context[1] );
  refalrts::link_brackets( context[15], context[20] );
  refalrts::push_stack( context[19] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[19], context[20] );
  res = refalrts::splice_evar( res, context[17], context[18] );
  res = refalrts::splice_evar( res, context[0], context[4] );
  res = refalrts::splice_evar( res, context[14], context[16] );
  res = refalrts::splice_evar( res, context[7], context[13] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult GenPattern(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 30 elems
  refalrts::Iter context[30];
  refalrts::zeros( context, 30 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & GenPattern/4 e.Pattern#1/2 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Pattern#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 } </5 & DoGenPattern/6 2/7 (/8 # Junk/9 )/10 (/11 # Range/12 0/13 Tile{ AsIs: e.Pattern#1/2 } )/14 (/15 # Junk/16 )/17 (/18 )/19 (/20 )/21 >/22 </23 & Seq/24 & lambda_GenPattern_0/25 & lambda_GenPattern_1/26 & lambda_GenPattern_2/27 & lambda_GenPattern_3/28 >/29 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[5] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[6], DoGenPattern, "DoGenPattern" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_number( context[7], 2UL ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[9], & ident_Junk<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[12], & ident_Range<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_number( context[13], 0UL ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[16], & ident_Junk<int>::name ) )
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
  if( ! refalrts::alloc_close_call( context[22] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[23] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[24], Seq, "Seq" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[25], lambda_GenPattern_0, "lambda_GenPattern_0" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[26], lambda_GenPattern_1, "lambda_GenPattern_1" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[27], lambda_GenPattern_2, "lambda_GenPattern_2" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[28], lambda_GenPattern_3, "lambda_GenPattern_3" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[29] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], Fetch, "Fetch" );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[29] );
  refalrts::push_stack( context[23] );
  refalrts::push_stack( context[22] );
  refalrts::push_stack( context[5] );
  refalrts::link_brackets( context[20], context[21] );
  refalrts::link_brackets( context[18], context[19] );
  refalrts::link_brackets( context[15], context[17] );
  refalrts::link_brackets( context[11], context[14] );
  refalrts::link_brackets( context[8], context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[14], context[29] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[5], context[13] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult lambda_GetRangeReassigns_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 27 elems
  refalrts::Iter context[27];
  refalrts::zeros( context, 27 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_GetRangeReassigns_0/4 (/7 e.Reassigns_B#2/16 (/20 s.First#2/23 s.Old#2/22 )/21 e.Reassigns_E#2/24 )/8 (/11 # CmdSave/13 s.Old#2/14 s.New#2/15 )/12 >/1
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
    if( ! refalrts::svar_left( context[14], context[9], context[10] ) )
      continue;
    if( ! refalrts::svar_left( context[15], context[9], context[10] ) )
      continue;
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;
    context[16] = 0;
    context[17] = 0;
    refalrts::start_e_loop();
    do {
      context[24] = context[5];
      context[25] = context[6];
      context[18] = 0;
      context[19] = 0;
      context[20] = refalrts::brackets_left( context[18], context[19], context[24], context[25] );
      if( ! context[20] )
        continue;
      refalrts::bracket_pointers(context[20], context[21]);
      if( ! refalrts::repeated_stvar_right( context[22], context[14], context[18], context[19] ) )
        continue;
      // closed e.Reassigns_E#2 as range 5
      if( ! refalrts::svar_left( context[23], context[18], context[19] ) )
        continue;
      if( ! refalrts::empty_seq( context[18], context[19] ) )
        continue;

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Reassigns_B#2/16 AsIs: (/20 AsIs: s.First#2/23 } Tile{ HalfReuse: s.New2 #15/0 HalfReuse: )/4 } Tile{ AsIs: e.Reassigns_E#2/24 } Tile{ HalfReuse: (/1 } Tile{ AsIs: s.Old#2/22 HalfReuse: s.New2 #15/21 } )/26 Tile{ AsIs: )/8 AsIs: (/11 AsIs: # CmdSave/13 AsIs: s.Old#2/14 AsIs: s.New#2/15 AsIs: )/12 } Tile{ ]] }
      if( ! refalrts::alloc_close_bracket( context[26] ) )
        return refalrts::cNoMemory;
      refalrts::reinit_svar( context[0], context[15] );
      refalrts::reinit_close_bracket( context[4] );
      refalrts::reinit_open_bracket( context[1] );
      refalrts::reinit_svar( context[21], context[15] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::link_brackets( context[1], context[26] );
      refalrts::link_brackets( context[20], context[4] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[8], context[12] );
      res = refalrts::splice_evar( res, context[26], context[26] );
      res = refalrts::splice_evar( res, context[22], context[21] );
      res = refalrts::splice_evar( res, context[1], context[1] );
      res = refalrts::splice_evar( res, context[24], context[25] );
      res = refalrts::splice_evar( res, context[0], context[4] );
      res = refalrts::splice_evar( res, context[7], context[23] );
      refalrts::use( res );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[16], context[17], context[5], context[6] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_GetRangeReassigns_0/4 (/7 e.Reassigns#2/5 )/8 (/11 # CmdSave/13 s.Old#2/14 s.New#2/15 )/12 >/1
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
    // closed e.Reassigns#2 as range 5
    if( ! refalrts::svar_left( context[14], context[9], context[10] ) )
      continue;
    if( ! refalrts::svar_left( context[15], context[9], context[10] ) )
      continue;
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.Reassigns#2/5 } Tile{ AsIs: (/7 } Tile{ HalfReuse: s.Old2 #14/4 } Tile{ HalfReuse: s.New2 #15/1 } )/16 Tile{ AsIs: )/8 AsIs: (/11 AsIs: # CmdSave/13 AsIs: s.Old#2/14 AsIs: s.New#2/15 AsIs: )/12 } Tile{ ]] }
    if( ! refalrts::alloc_close_bracket( context[16] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_svar( context[4], context[14] );
    refalrts::reinit_svar( context[1], context[15] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[0], context[8] );
    refalrts::link_brackets( context[7], context[16] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[8], context[12] );
    res = refalrts::splice_evar( res, context[16], context[16] );
    res = refalrts::splice_evar( res, context[1], context[1] );
    res = refalrts::splice_evar( res, context[4], context[4] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & lambda_GetRangeReassigns_0/4 (/7 e.Reassigns#2/5 )/8 t.OtherCommand#2/9 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.Reassigns#2 as range 5
  context[10] = refalrts::tvar_left( context[9], context[2], context[3] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  </0 & lambda_GetRangeReassigns_0/4 {REMOVED TILE}  >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Reassigns#2/5 AsIs: )/8 AsIs: t.OtherCommand#2/9 } Tile{ ]] }
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[10] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult GetRangeReassigns(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 8 elems
  refalrts::Iter context[8];
  refalrts::zeros( context, 8 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & GetRangeReassigns/4 e.Commands#1/2 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Commands#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } </5 & MapReduce/6 & lambda_GetRangeReassigns_0/7 Tile{ HalfReuse: (/0 HalfReuse: )/4 AsIs: e.Commands#1/2 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[5] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[6], MapReduce, "MapReduce" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[7], lambda_GetRangeReassigns_0, "lambda_GetRangeReassigns_0" ) )
    return refalrts::cNoMemory;
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_close_bracket( context[4] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[5] );
  refalrts::link_brackets( context[0], context[4] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[7] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult lambda_FixupEVarIndexes_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_FixupEVarIndexes_0/4 (/7 e.Reassigns#1/5 )/8 (/11 'e'/13 (/16 e.Index#2/14 )/17 e.Numbers#2/9 )/12 >/1
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
    context[13] = refalrts::char_left( 'e', context[9], context[10] );
    if( ! context[13] )
      continue;
    context[14] = 0;
    context[15] = 0;
    context[16] = refalrts::brackets_left( context[14], context[15], context[9], context[10] );
    if( ! context[16] )
      continue;
    refalrts::bracket_pointers(context[16], context[17]);
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Reassigns#1 as range 5
    // closed e.Index#2 as range 14
    // closed e.Numbers#2 as range 9

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/11 AsIs: 'e'/13 AsIs: (/16 AsIs: e.Index#2/14 AsIs: )/17 } </18 Tile{ HalfReuse: & Map/0 HalfReuse: (/4 HalfReuse: & FixupEVarIndexes_PatchNumber/7 AsIs: e.Reassigns#1/5 AsIs: )/8 } Tile{ AsIs: e.Numbers#2/9 } Tile{ HalfReuse: >/12 HalfReuse: )/1 ]] }
    if( ! refalrts::alloc_open_call( context[18] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_name( context[0], Map, "Map" );
    refalrts::reinit_open_bracket( context[4] );
    refalrts::reinit_name( context[7], FixupEVarIndexes_PatchNumber, "FixupEVarIndexes_PatchNumber" );
    refalrts::reinit_close_call( context[12] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[11], context[1] );
    refalrts::push_stack( context[12] );
    refalrts::push_stack( context[18] );
    refalrts::link_brackets( context[4], context[8] );
    refalrts::link_brackets( context[16], context[17] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[12];
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[0], context[8] );
    res = refalrts::splice_evar( res, context[18], context[18] );
    res = refalrts::splice_evar( res, context[11], context[17] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & lambda_FixupEVarIndexes_0/4 (/7 e.Reassigns#1/5 )/8 t.OtherVar#2/9 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.Reassigns#1 as range 5
  context[10] = refalrts::tvar_left( context[9], context[2], context[3] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  </0 & lambda_FixupEVarIndexes_0/4 (/7 e.Reassigns#1/5 )/8 {REMOVED TILE}  >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ AsIs: t.OtherVar#2/9 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult FixupEVarIndexes(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & FixupEVarIndexes/4 (/7 e.Reassigns#1/5 )/8 e.Vars#1/2 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.Reassigns#1 as range 5
  // closed e.Vars#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } </9 & Map/10 </11 Tile{ HalfReuse: & CreateClosure /0 Reuse: & lambda_FixupEVarIndexes_0/4 AsIs: (/7 AsIs: e.Reassigns#1/5 AsIs: )/8 } >/12 Tile{ AsIs: e.Vars#1/2 } Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[10], Map, "Map" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[12] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_name( context[0], refalrts::create_closure, "refalrts::create_closure" );
  refalrts::update_name( context[4], lambda_FixupEVarIndexes_0, "lambda_FixupEVarIndexes_0" );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[9] );
  refalrts::push_stack( context[12] );
  refalrts::push_stack( context[11] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[12], context[12] );
  res = refalrts::splice_evar( res, context[0], context[8] );
  res = refalrts::splice_evar( res, context[9], context[11] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult FixupEVarIndexes_PatchNumber(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & FixupEVarIndexes_PatchNumber/4 e.Reassigns_B#1/6 (/10 s.Old#1/12 s.New#1/13 )/11 e.Reassigns_E#1/14 s.Old#1/5 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    if( ! refalrts::svar_right( context[5], context[2], context[3] ) )
      continue;
    context[6] = 0;
    context[7] = 0;
    refalrts::start_e_loop();
    do {
      context[14] = context[2];
      context[15] = context[3];
      context[8] = 0;
      context[9] = 0;
      context[10] = refalrts::brackets_left( context[8], context[9], context[14], context[15] );
      if( ! context[10] )
        continue;
      refalrts::bracket_pointers(context[10], context[11]);
      if( ! refalrts::repeated_stvar_left( context[12], context[5], context[8], context[9] ) )
        continue;
      // closed e.Reassigns_E#1 as range 2
      if( ! refalrts::svar_left( context[13], context[8], context[9] ) )
        continue;
      if( ! refalrts::empty_seq( context[8], context[9] ) )
        continue;

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE}  & FixupEVarIndexes_PatchNumber/4 e.Reassigns_B#1/6 (/10 s.Old#1/12 s.New#1/13 )/11 e.Reassigns_E#1/14 s.Old#1/5 >/1 {REMOVED TILE} 
      //RESULT: Tile{ [[ HalfReuse: s.New1 #13/0 } Tile{ ]] }
      refalrts::reinit_svar( context[0], context[13] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      refalrts::use( res );
      refalrts::splice_to_freelist_open( context[0], res );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[6], context[7], context[2], context[3] ) );
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & FixupEVarIndexes_PatchNumber/4 e.Reassigns#1/2 s.Number#1/5 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_right( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Reassigns#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  & FixupEVarIndexes_PatchNumber/4 e.Reassigns#1/2 s.Number#1/5 >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ HalfReuse: s.Number1 #5/0 } Tile{ ]] }
  refalrts::reinit_svar( context[0], context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[0], res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult FixupMarkedPatternIndexes(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & FixupMarkedPatternIndexes/4 (/7 e.Reassigns#1/5 )/8 e.MarkedPattern#1/2 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.Reassigns#1 as range 5
  // closed e.MarkedPattern#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } </9 Tile{ HalfReuse: & Map/0 HalfReuse: (/4 HalfReuse: & FixupMarkedPatternTerm/7 AsIs: e.Reassigns#1/5 AsIs: )/8 AsIs: e.MarkedPattern#1/2 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[9] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_name( context[0], Map, "Map" );
  refalrts::reinit_open_bracket( context[4] );
  refalrts::reinit_name( context[7], FixupMarkedPatternTerm, "FixupMarkedPatternTerm" );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[9] );
  refalrts::link_brackets( context[4], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[9], context[9] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult FixupMarkedPatternTerm(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 23 elems
  refalrts::Iter context[23];
  refalrts::zeros( context, 23 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & FixupMarkedPatternTerm/4 e.Reassigns_B#1/13 (/17 s.Old#1/19 s.New#1/20 )/18 e.Reassigns_E#1/21 (/7 # TkVariable/9 'e'/10 e.Index#1/5 s.Depth#1/12 s.Old#1/11 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_TkVariable<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    context[10] = refalrts::char_left( 'e', context[5], context[6] );
    if( ! context[10] )
      continue;
    if( ! refalrts::svar_right( context[11], context[5], context[6] ) )
      continue;
    if( ! refalrts::svar_right( context[12], context[5], context[6] ) )
      continue;
    // closed e.Index#1 as range 5
    context[13] = 0;
    context[14] = 0;
    refalrts::start_e_loop();
    do {
      context[21] = context[2];
      context[22] = context[3];
      context[15] = 0;
      context[16] = 0;
      context[17] = refalrts::brackets_left( context[15], context[16], context[21], context[22] );
      if( ! context[17] )
        continue;
      refalrts::bracket_pointers(context[17], context[18]);
      if( ! refalrts::repeated_stvar_left( context[19], context[11], context[15], context[16] ) )
        continue;
      // closed e.Reassigns_E#1 as range 2
      if( ! refalrts::svar_left( context[20], context[15], context[16] ) )
        continue;
      if( ! refalrts::empty_seq( context[15], context[16] ) )
        continue;

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE}  </0 & FixupMarkedPatternTerm/4 e.Reassigns_B#1/13 (/17 s.Old#1/19 {REMOVED TILE}  e.Reassigns_E#1/21 {REMOVED TILE}  s.Old#1/11 )/8 >/1 {REMOVED TILE} 
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # TkVariable/9 AsIs: 'e'/10 AsIs: e.Index#1/5 AsIs: s.Depth#1/12 } Tile{ AsIs: s.New#1/20 AsIs: )/18 } Tile{ ]] }
      refalrts::link_brackets( context[7], context[18] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[20], context[18] );
      res = refalrts::splice_evar( res, context[7], context[12] );
      refalrts::use( res );
      refalrts::splice_to_freelist_open( trash_prev, res );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[13], context[14], context[2], context[3] ) );
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & FixupMarkedPatternTerm/4 e.Reassigns#1/2 t.OtherTerm#1/5 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[6] = refalrts::tvar_right( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  // closed e.Reassigns#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  </0 & FixupMarkedPatternTerm/4 e.Reassigns#1/2 {REMOVED TILE}  >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ AsIs: t.OtherTerm#1/5 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult Inc2(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 7 elems
  refalrts::Iter context[7];
  refalrts::zeros( context, 7 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & Inc2/4 s.Num#1/5 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } </6 Tile{ HalfReuse: & Add/0 HalfReuse: 2/4 AsIs: s.Num#1/5 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[6] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_name( context[0], Add, "Add" );
  refalrts::reinit_number( context[4], 2UL );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[6] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[6], context[6] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult DoGenPattern(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 77 elems
  refalrts::Iter context[77];
  refalrts::zeros( context, 77 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & DoGenPattern/4 s.ContextOffset#1/13 e.Ranges_B#1/14 (/18 # Junk/20 e.Junk#1/16 )/19 (/23 # Range/25 s.Num#1/26 (/29 # TkChar/31 s.Char#1/32 )/30 e.Range#1/21 )/24 e.Ranges_E#1/33 (/11 e.Vars#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_right( context[9], context[10], context[2], context[3] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    // closed e.Vars#1 as range 9
    // closed e.Commands#1 as range 5
    if( ! refalrts::svar_left( context[13], context[2], context[3] ) )
      continue;
    context[14] = 0;
    context[15] = 0;
    refalrts::start_e_loop();
    do {
      context[33] = context[2];
      context[34] = context[3];
      context[16] = 0;
      context[17] = 0;
      context[18] = refalrts::brackets_left( context[16], context[17], context[33], context[34] );
      if( ! context[18] )
        continue;
      refalrts::bracket_pointers(context[18], context[19]);
      context[20] = refalrts::ident_left(  & ident_Junk<int>::name, context[16], context[17] );
      if( ! context[20] )
        continue;
      context[21] = 0;
      context[22] = 0;
      context[23] = refalrts::brackets_left( context[21], context[22], context[33], context[34] );
      if( ! context[23] )
        continue;
      refalrts::bracket_pointers(context[23], context[24]);
      context[25] = refalrts::ident_left(  & ident_Range<int>::name, context[21], context[22] );
      if( ! context[25] )
        continue;
      // closed e.Junk#1 as range 16
      // closed e.Ranges_E#1 as range 2
      if( ! refalrts::svar_left( context[26], context[21], context[22] ) )
        continue;
      context[27] = 0;
      context[28] = 0;
      context[29] = refalrts::brackets_left( context[27], context[28], context[21], context[22] );
      if( ! context[29] )
        continue;
      refalrts::bracket_pointers(context[29], context[30]);
      context[31] = refalrts::ident_left(  & ident_TkChar<int>::name, context[27], context[28] );
      if( ! context[31] )
        continue;
      // closed e.Range#1 as range 21
      if( ! refalrts::svar_left( context[32], context[27], context[28] ) )
        continue;
      if( ! refalrts::empty_seq( context[27], context[28] ) )
        continue;

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  s.Char#1/32 {REMOVED TILE}  {REMOVED TILE} 
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenPattern/4 } </35 & Inc/36 Tile{ AsIs: s.ContextOffset#1/13 } >/37 Tile{ AsIs: e.Ranges_B#1/14 } Tile{ AsIs: (/18 AsIs: # Junk/20 AsIs: e.Junk#1/16 HalfReuse: (/19 HalfReuse: # TkChar/23 HalfReuse: s.Char1 #32/25 } s.ContextOffset#1/13/38 )/39 )/40 (/41 # Range/42 Tile{ HalfReuse: s.Num1 #26/30 AsIs: e.Range#1/21 AsIs: )/24 AsIs: e.Ranges_E#1/33 AsIs: (/11 AsIs: e.Vars#1/9 AsIs: )/12 AsIs: (/7 AsIs: e.Commands#1/5 HalfReuse: (/8 HalfReuse: # CmdCharSave/1 } # AlgLeft/43 Tile{ AsIs: s.Num#1/26 HalfReuse: s.ContextOffset1 #13/29 HalfReuse: s.Char1 #32/31 } )/44 )/45 >/46 Tile{ ]] }
      if( ! refalrts::alloc_open_call( context[35] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[36], Inc, "Inc" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[37] ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[38], context[13]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[39] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[40] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[41] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[42], & ident_Range<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[43], & ident_AlgLeft<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[44] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[45] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[46] ) )
        return refalrts::cNoMemory;
      refalrts::reinit_open_bracket( context[19] );
      refalrts::reinit_ident( context[23], & ident_TkChar<int>::name );
      refalrts::reinit_svar( context[25], context[32] );
      refalrts::reinit_svar( context[30], context[26] );
      refalrts::reinit_open_bracket( context[8] );
      refalrts::reinit_ident( context[1], & ident_CmdCharSave<int>::name );
      refalrts::reinit_svar( context[29], context[13] );
      refalrts::reinit_svar( context[31], context[32] );
      refalrts::push_stack( context[46] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[7], context[45] );
      refalrts::link_brackets( context[8], context[44] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[41], context[24] );
      refalrts::link_brackets( context[18], context[40] );
      refalrts::link_brackets( context[19], context[39] );
      refalrts::push_stack( context[37] );
      refalrts::push_stack( context[35] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[44], context[46] );
      res = refalrts::splice_evar( res, context[26], context[31] );
      res = refalrts::splice_evar( res, context[43], context[43] );
      res = refalrts::splice_evar( res, context[30], context[1] );
      res = refalrts::splice_evar( res, context[38], context[42] );
      res = refalrts::splice_evar( res, context[18], context[25] );
      res = refalrts::splice_evar( res, context[14], context[15] );
      res = refalrts::splice_evar( res, context[37], context[37] );
      res = refalrts::splice_evar( res, context[13], context[13] );
      res = refalrts::splice_evar( res, context[35], context[36] );
      refalrts::use( res );
      refalrts::splice_to_freelist_open( context[4], res );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[14], context[15], context[2], context[3] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & DoGenPattern/4 s.ContextOffset#1/13 e.Ranges_B#1/14 (/18 # Junk/20 e.Junk#1/16 )/19 (/23 # Range/25 s.Num#1/26 (/29 # TkNumber/31 s.Number#1/32 )/30 e.Range#1/21 )/24 e.Ranges_E#1/33 (/11 e.Vars#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_right( context[9], context[10], context[2], context[3] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    // closed e.Vars#1 as range 9
    // closed e.Commands#1 as range 5
    if( ! refalrts::svar_left( context[13], context[2], context[3] ) )
      continue;
    context[14] = 0;
    context[15] = 0;
    refalrts::start_e_loop();
    do {
      context[33] = context[2];
      context[34] = context[3];
      context[16] = 0;
      context[17] = 0;
      context[18] = refalrts::brackets_left( context[16], context[17], context[33], context[34] );
      if( ! context[18] )
        continue;
      refalrts::bracket_pointers(context[18], context[19]);
      context[20] = refalrts::ident_left(  & ident_Junk<int>::name, context[16], context[17] );
      if( ! context[20] )
        continue;
      context[21] = 0;
      context[22] = 0;
      context[23] = refalrts::brackets_left( context[21], context[22], context[33], context[34] );
      if( ! context[23] )
        continue;
      refalrts::bracket_pointers(context[23], context[24]);
      context[25] = refalrts::ident_left(  & ident_Range<int>::name, context[21], context[22] );
      if( ! context[25] )
        continue;
      // closed e.Junk#1 as range 16
      // closed e.Ranges_E#1 as range 2
      if( ! refalrts::svar_left( context[26], context[21], context[22] ) )
        continue;
      context[27] = 0;
      context[28] = 0;
      context[29] = refalrts::brackets_left( context[27], context[28], context[21], context[22] );
      if( ! context[29] )
        continue;
      refalrts::bracket_pointers(context[29], context[30]);
      context[31] = refalrts::ident_left(  & ident_TkNumber<int>::name, context[27], context[28] );
      if( ! context[31] )
        continue;
      // closed e.Range#1 as range 21
      if( ! refalrts::svar_left( context[32], context[27], context[28] ) )
        continue;
      if( ! refalrts::empty_seq( context[27], context[28] ) )
        continue;

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  s.Number#1/32 {REMOVED TILE}  {REMOVED TILE} 
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenPattern/4 } </35 & Inc/36 Tile{ AsIs: s.ContextOffset#1/13 } >/37 Tile{ AsIs: e.Ranges_B#1/14 } Tile{ AsIs: (/18 AsIs: # Junk/20 AsIs: e.Junk#1/16 HalfReuse: (/19 HalfReuse: # TkNumber/23 HalfReuse: s.Number1 #32/25 } s.ContextOffset#1/13/38 )/39 )/40 (/41 # Range/42 Tile{ HalfReuse: s.Num1 #26/30 AsIs: e.Range#1/21 AsIs: )/24 AsIs: e.Ranges_E#1/33 AsIs: (/11 AsIs: e.Vars#1/9 AsIs: )/12 AsIs: (/7 AsIs: e.Commands#1/5 HalfReuse: (/8 HalfReuse: # CmdNumberSave/1 } # AlgLeft/43 Tile{ AsIs: s.Num#1/26 HalfReuse: s.ContextOffset1 #13/29 HalfReuse: s.Number1 #32/31 } )/44 )/45 >/46 Tile{ ]] }
      if( ! refalrts::alloc_open_call( context[35] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[36], Inc, "Inc" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[37] ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[38], context[13]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[39] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[40] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[41] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[42], & ident_Range<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[43], & ident_AlgLeft<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[44] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[45] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[46] ) )
        return refalrts::cNoMemory;
      refalrts::reinit_open_bracket( context[19] );
      refalrts::reinit_ident( context[23], & ident_TkNumber<int>::name );
      refalrts::reinit_svar( context[25], context[32] );
      refalrts::reinit_svar( context[30], context[26] );
      refalrts::reinit_open_bracket( context[8] );
      refalrts::reinit_ident( context[1], & ident_CmdNumberSave<int>::name );
      refalrts::reinit_svar( context[29], context[13] );
      refalrts::reinit_svar( context[31], context[32] );
      refalrts::push_stack( context[46] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[7], context[45] );
      refalrts::link_brackets( context[8], context[44] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[41], context[24] );
      refalrts::link_brackets( context[18], context[40] );
      refalrts::link_brackets( context[19], context[39] );
      refalrts::push_stack( context[37] );
      refalrts::push_stack( context[35] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[44], context[46] );
      res = refalrts::splice_evar( res, context[26], context[31] );
      res = refalrts::splice_evar( res, context[43], context[43] );
      res = refalrts::splice_evar( res, context[30], context[1] );
      res = refalrts::splice_evar( res, context[38], context[42] );
      res = refalrts::splice_evar( res, context[18], context[25] );
      res = refalrts::splice_evar( res, context[14], context[15] );
      res = refalrts::splice_evar( res, context[37], context[37] );
      res = refalrts::splice_evar( res, context[13], context[13] );
      res = refalrts::splice_evar( res, context[35], context[36] );
      refalrts::use( res );
      refalrts::splice_to_freelist_open( context[4], res );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[14], context[15], context[2], context[3] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & DoGenPattern/4 s.ContextOffset#1/13 e.Ranges_B#1/14 (/18 # Junk/20 e.Junk#1/16 )/19 (/23 # Range/25 s.Num#1/26 (/29 # TkName/31 e.Name#1/27 )/30 e.Range#1/21 )/24 e.Ranges_E#1/32 (/11 e.Vars#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_right( context[9], context[10], context[2], context[3] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    // closed e.Vars#1 as range 9
    // closed e.Commands#1 as range 5
    if( ! refalrts::svar_left( context[13], context[2], context[3] ) )
      continue;
    context[14] = 0;
    context[15] = 0;
    refalrts::start_e_loop();
    do {
      context[32] = context[2];
      context[33] = context[3];
      context[16] = 0;
      context[17] = 0;
      context[18] = refalrts::brackets_left( context[16], context[17], context[32], context[33] );
      if( ! context[18] )
        continue;
      refalrts::bracket_pointers(context[18], context[19]);
      context[20] = refalrts::ident_left(  & ident_Junk<int>::name, context[16], context[17] );
      if( ! context[20] )
        continue;
      context[21] = 0;
      context[22] = 0;
      context[23] = refalrts::brackets_left( context[21], context[22], context[32], context[33] );
      if( ! context[23] )
        continue;
      refalrts::bracket_pointers(context[23], context[24]);
      context[25] = refalrts::ident_left(  & ident_Range<int>::name, context[21], context[22] );
      if( ! context[25] )
        continue;
      // closed e.Junk#1 as range 16
      // closed e.Ranges_E#1 as range 2
      if( ! refalrts::svar_left( context[26], context[21], context[22] ) )
        continue;
      context[27] = 0;
      context[28] = 0;
      context[29] = refalrts::brackets_left( context[27], context[28], context[21], context[22] );
      if( ! context[29] )
        continue;
      refalrts::bracket_pointers(context[29], context[30]);
      context[31] = refalrts::ident_left(  & ident_TkName<int>::name, context[27], context[28] );
      if( ! context[31] )
        continue;
      // closed e.Name#1 as range 27
      // closed e.Range#1 as range 21

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenPattern/4 } </34 & Inc/35 Tile{ AsIs: s.ContextOffset#1/13 } >/36 Tile{ AsIs: e.Ranges_B#1/14 } Tile{ AsIs: (/18 AsIs: # Junk/20 AsIs: e.Junk#1/16 HalfReuse: (/19 HalfReuse: # TkName/23 } Tile{ AsIs: e.Name#1/27 } s.ContextOffset#1/13/37 )/38 )/39 (/40 Tile{ Reuse: # Range/31 } Tile{ HalfReuse: s.Num1 #26/30 AsIs: e.Range#1/21 AsIs: )/24 AsIs: e.Ranges_E#1/32 AsIs: (/11 AsIs: e.Vars#1/9 AsIs: )/12 AsIs: (/7 AsIs: e.Commands#1/5 HalfReuse: (/8 HalfReuse: # CmdNameSave/1 } Tile{ Reuse: # AlgLeft/25 AsIs: s.Num#1/26 HalfReuse: s.ContextOffset1 #13/29 } e.Name#1/27/41 )/43 )/44 >/45 Tile{ ]] }
      if( ! refalrts::alloc_open_call( context[34] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[35], Inc, "Inc" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[36] ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[37], context[13]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[38] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[39] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[40] ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_evar(context[41], context[42], context[27], context[28]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[43] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[44] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[45] ) )
        return refalrts::cNoMemory;
      refalrts::reinit_open_bracket( context[19] );
      refalrts::reinit_ident( context[23], & ident_TkName<int>::name );
      refalrts::update_ident( context[31], & ident_Range<int>::name );
      refalrts::reinit_svar( context[30], context[26] );
      refalrts::reinit_open_bracket( context[8] );
      refalrts::reinit_ident( context[1], & ident_CmdNameSave<int>::name );
      refalrts::update_ident( context[25], & ident_AlgLeft<int>::name );
      refalrts::reinit_svar( context[29], context[13] );
      refalrts::push_stack( context[45] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[7], context[44] );
      refalrts::link_brackets( context[8], context[43] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[40], context[24] );
      refalrts::link_brackets( context[18], context[39] );
      refalrts::link_brackets( context[19], context[38] );
      refalrts::push_stack( context[36] );
      refalrts::push_stack( context[34] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[43], context[45] );
      res = refalrts::splice_evar( res, context[41], context[42] );
      res = refalrts::splice_evar( res, context[25], context[29] );
      res = refalrts::splice_evar( res, context[30], context[1] );
      res = refalrts::splice_evar( res, context[31], context[31] );
      res = refalrts::splice_evar( res, context[37], context[40] );
      res = refalrts::splice_evar( res, context[27], context[28] );
      res = refalrts::splice_evar( res, context[18], context[23] );
      res = refalrts::splice_evar( res, context[14], context[15] );
      res = refalrts::splice_evar( res, context[36], context[36] );
      res = refalrts::splice_evar( res, context[13], context[13] );
      res = refalrts::splice_evar( res, context[34], context[35] );
      refalrts::use( res );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[14], context[15], context[2], context[3] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & DoGenPattern/4 s.ContextOffset#1/13 e.Ranges_B#1/14 (/18 # Junk/20 e.Junk#1/16 )/19 (/23 # Range/25 s.Num#1/26 (/29 # TkIdentifier/31 e.Name#1/27 )/30 e.Range#1/21 )/24 e.Ranges_E#1/32 (/11 e.Vars#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_right( context[9], context[10], context[2], context[3] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    // closed e.Vars#1 as range 9
    // closed e.Commands#1 as range 5
    if( ! refalrts::svar_left( context[13], context[2], context[3] ) )
      continue;
    context[14] = 0;
    context[15] = 0;
    refalrts::start_e_loop();
    do {
      context[32] = context[2];
      context[33] = context[3];
      context[16] = 0;
      context[17] = 0;
      context[18] = refalrts::brackets_left( context[16], context[17], context[32], context[33] );
      if( ! context[18] )
        continue;
      refalrts::bracket_pointers(context[18], context[19]);
      context[20] = refalrts::ident_left(  & ident_Junk<int>::name, context[16], context[17] );
      if( ! context[20] )
        continue;
      context[21] = 0;
      context[22] = 0;
      context[23] = refalrts::brackets_left( context[21], context[22], context[32], context[33] );
      if( ! context[23] )
        continue;
      refalrts::bracket_pointers(context[23], context[24]);
      context[25] = refalrts::ident_left(  & ident_Range<int>::name, context[21], context[22] );
      if( ! context[25] )
        continue;
      // closed e.Junk#1 as range 16
      // closed e.Ranges_E#1 as range 2
      if( ! refalrts::svar_left( context[26], context[21], context[22] ) )
        continue;
      context[27] = 0;
      context[28] = 0;
      context[29] = refalrts::brackets_left( context[27], context[28], context[21], context[22] );
      if( ! context[29] )
        continue;
      refalrts::bracket_pointers(context[29], context[30]);
      context[31] = refalrts::ident_left(  & ident_TkIdentifier<int>::name, context[27], context[28] );
      if( ! context[31] )
        continue;
      // closed e.Name#1 as range 27
      // closed e.Range#1 as range 21

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenPattern/4 } </34 & Inc/35 Tile{ AsIs: s.ContextOffset#1/13 } >/36 Tile{ AsIs: e.Ranges_B#1/14 } Tile{ AsIs: (/18 AsIs: # Junk/20 AsIs: e.Junk#1/16 HalfReuse: (/19 HalfReuse: # TkIdentifier/23 } Tile{ AsIs: e.Name#1/27 } s.ContextOffset#1/13/37 )/38 )/39 (/40 Tile{ Reuse: # Range/31 } Tile{ HalfReuse: s.Num1 #26/30 AsIs: e.Range#1/21 AsIs: )/24 AsIs: e.Ranges_E#1/32 AsIs: (/11 AsIs: e.Vars#1/9 AsIs: )/12 AsIs: (/7 AsIs: e.Commands#1/5 HalfReuse: (/8 HalfReuse: # CmdIdentSave/1 } Tile{ Reuse: # AlgLeft/25 AsIs: s.Num#1/26 HalfReuse: s.ContextOffset1 #13/29 } e.Name#1/27/41 )/43 )/44 >/45 Tile{ ]] }
      if( ! refalrts::alloc_open_call( context[34] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[35], Inc, "Inc" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[36] ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[37], context[13]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[38] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[39] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[40] ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_evar(context[41], context[42], context[27], context[28]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[43] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[44] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[45] ) )
        return refalrts::cNoMemory;
      refalrts::reinit_open_bracket( context[19] );
      refalrts::reinit_ident( context[23], & ident_TkIdentifier<int>::name );
      refalrts::update_ident( context[31], & ident_Range<int>::name );
      refalrts::reinit_svar( context[30], context[26] );
      refalrts::reinit_open_bracket( context[8] );
      refalrts::reinit_ident( context[1], & ident_CmdIdentSave<int>::name );
      refalrts::update_ident( context[25], & ident_AlgLeft<int>::name );
      refalrts::reinit_svar( context[29], context[13] );
      refalrts::push_stack( context[45] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[7], context[44] );
      refalrts::link_brackets( context[8], context[43] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[40], context[24] );
      refalrts::link_brackets( context[18], context[39] );
      refalrts::link_brackets( context[19], context[38] );
      refalrts::push_stack( context[36] );
      refalrts::push_stack( context[34] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[43], context[45] );
      res = refalrts::splice_evar( res, context[41], context[42] );
      res = refalrts::splice_evar( res, context[25], context[29] );
      res = refalrts::splice_evar( res, context[30], context[1] );
      res = refalrts::splice_evar( res, context[31], context[31] );
      res = refalrts::splice_evar( res, context[37], context[40] );
      res = refalrts::splice_evar( res, context[27], context[28] );
      res = refalrts::splice_evar( res, context[18], context[23] );
      res = refalrts::splice_evar( res, context[14], context[15] );
      res = refalrts::splice_evar( res, context[36], context[36] );
      res = refalrts::splice_evar( res, context[13], context[13] );
      res = refalrts::splice_evar( res, context[34], context[35] );
      refalrts::use( res );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[14], context[15], context[2], context[3] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & DoGenPattern/4 s.ContextOffset#1/13 e.Ranges_B#1/14 (/18 # Range/20 s.Num#1/31 e.Range#1/16 (/28 # TkChar/30 s.Char#1/32 )/29 )/19 (/23 # Junk/25 e.Junk#1/21 )/24 e.Ranges_E#1/33 (/11 e.Vars#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_right( context[9], context[10], context[2], context[3] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    // closed e.Vars#1 as range 9
    // closed e.Commands#1 as range 5
    if( ! refalrts::svar_left( context[13], context[2], context[3] ) )
      continue;
    context[14] = 0;
    context[15] = 0;
    refalrts::start_e_loop();
    do {
      context[33] = context[2];
      context[34] = context[3];
      context[16] = 0;
      context[17] = 0;
      context[18] = refalrts::brackets_left( context[16], context[17], context[33], context[34] );
      if( ! context[18] )
        continue;
      refalrts::bracket_pointers(context[18], context[19]);
      context[20] = refalrts::ident_left(  & ident_Range<int>::name, context[16], context[17] );
      if( ! context[20] )
        continue;
      context[21] = 0;
      context[22] = 0;
      context[23] = refalrts::brackets_left( context[21], context[22], context[33], context[34] );
      if( ! context[23] )
        continue;
      refalrts::bracket_pointers(context[23], context[24]);
      context[25] = refalrts::ident_left(  & ident_Junk<int>::name, context[21], context[22] );
      if( ! context[25] )
        continue;
      context[26] = 0;
      context[27] = 0;
      context[28] = refalrts::brackets_right( context[26], context[27], context[16], context[17] );
      if( ! context[28] )
        continue;
      refalrts::bracket_pointers(context[28], context[29]);
      context[30] = refalrts::ident_left(  & ident_TkChar<int>::name, context[26], context[27] );
      if( ! context[30] )
        continue;
      // closed e.Junk#1 as range 21
      // closed e.Ranges_E#1 as range 2
      if( ! refalrts::svar_left( context[31], context[16], context[17] ) )
        continue;
      // closed e.Range#1 as range 16
      if( ! refalrts::svar_left( context[32], context[26], context[27] ) )
        continue;
      if( ! refalrts::empty_seq( context[26], context[27] ) )
        continue;

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenPattern/4 } </35 & Inc/36 Tile{ AsIs: s.ContextOffset#1/13 } >/37 Tile{ AsIs: e.Ranges_B#1/14 } Tile{ AsIs: (/18 AsIs: # Range/20 AsIs: s.Num#1/31 AsIs: e.Range#1/16 HalfReuse: )/28 HalfReuse: (/30 } # Junk/38 (/39 Tile{ HalfReuse: # TkChar/29 HalfReuse: s.Char1 #32/19 HalfReuse: s.ContextOffset1 #13/23 HalfReuse: )/25 AsIs: e.Junk#1/21 AsIs: )/24 AsIs: e.Ranges_E#1/33 AsIs: (/11 AsIs: e.Vars#1/9 AsIs: )/12 AsIs: (/7 AsIs: e.Commands#1/5 HalfReuse: (/8 HalfReuse: # CmdCharSave/1 } # AlgRight/40 s.Num#1/31/41 s.ContextOffset#1/13/42 Tile{ AsIs: s.Char#1/32 } )/43 )/44 >/45 Tile{ ]] }
      if( ! refalrts::alloc_open_call( context[35] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[36], Inc, "Inc" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[37] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[38], & ident_Junk<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[39] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[40], & ident_AlgRight<int>::name ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[41], context[31]))
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[42], context[13]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[43] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[44] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[45] ) )
        return refalrts::cNoMemory;
      refalrts::reinit_close_bracket( context[28] );
      refalrts::reinit_open_bracket( context[30] );
      refalrts::reinit_ident( context[29], & ident_TkChar<int>::name );
      refalrts::reinit_svar( context[19], context[32] );
      refalrts::reinit_svar( context[23], context[13] );
      refalrts::reinit_close_bracket( context[25] );
      refalrts::reinit_open_bracket( context[8] );
      refalrts::reinit_ident( context[1], & ident_CmdCharSave<int>::name );
      refalrts::push_stack( context[45] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[7], context[44] );
      refalrts::link_brackets( context[8], context[43] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[30], context[24] );
      refalrts::link_brackets( context[39], context[25] );
      refalrts::link_brackets( context[18], context[28] );
      refalrts::push_stack( context[37] );
      refalrts::push_stack( context[35] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[43], context[45] );
      res = refalrts::splice_evar( res, context[32], context[32] );
      res = refalrts::splice_evar( res, context[40], context[42] );
      res = refalrts::splice_evar( res, context[29], context[1] );
      res = refalrts::splice_evar( res, context[38], context[39] );
      res = refalrts::splice_evar( res, context[18], context[30] );
      res = refalrts::splice_evar( res, context[14], context[15] );
      res = refalrts::splice_evar( res, context[37], context[37] );
      res = refalrts::splice_evar( res, context[13], context[13] );
      res = refalrts::splice_evar( res, context[35], context[36] );
      refalrts::use( res );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[14], context[15], context[2], context[3] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & DoGenPattern/4 s.ContextOffset#1/13 e.Ranges_B#1/14 (/18 # Range/20 s.Num#1/31 e.Range#1/16 (/28 # TkNumber/30 s.Number#1/32 )/29 )/19 (/23 # Junk/25 e.Junk#1/21 )/24 e.Ranges_E#1/33 (/11 e.Vars#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_right( context[9], context[10], context[2], context[3] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    // closed e.Vars#1 as range 9
    // closed e.Commands#1 as range 5
    if( ! refalrts::svar_left( context[13], context[2], context[3] ) )
      continue;
    context[14] = 0;
    context[15] = 0;
    refalrts::start_e_loop();
    do {
      context[33] = context[2];
      context[34] = context[3];
      context[16] = 0;
      context[17] = 0;
      context[18] = refalrts::brackets_left( context[16], context[17], context[33], context[34] );
      if( ! context[18] )
        continue;
      refalrts::bracket_pointers(context[18], context[19]);
      context[20] = refalrts::ident_left(  & ident_Range<int>::name, context[16], context[17] );
      if( ! context[20] )
        continue;
      context[21] = 0;
      context[22] = 0;
      context[23] = refalrts::brackets_left( context[21], context[22], context[33], context[34] );
      if( ! context[23] )
        continue;
      refalrts::bracket_pointers(context[23], context[24]);
      context[25] = refalrts::ident_left(  & ident_Junk<int>::name, context[21], context[22] );
      if( ! context[25] )
        continue;
      context[26] = 0;
      context[27] = 0;
      context[28] = refalrts::brackets_right( context[26], context[27], context[16], context[17] );
      if( ! context[28] )
        continue;
      refalrts::bracket_pointers(context[28], context[29]);
      context[30] = refalrts::ident_left(  & ident_TkNumber<int>::name, context[26], context[27] );
      if( ! context[30] )
        continue;
      // closed e.Junk#1 as range 21
      // closed e.Ranges_E#1 as range 2
      if( ! refalrts::svar_left( context[31], context[16], context[17] ) )
        continue;
      // closed e.Range#1 as range 16
      if( ! refalrts::svar_left( context[32], context[26], context[27] ) )
        continue;
      if( ! refalrts::empty_seq( context[26], context[27] ) )
        continue;

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenPattern/4 } </35 & Inc/36 Tile{ AsIs: s.ContextOffset#1/13 } >/37 Tile{ AsIs: e.Ranges_B#1/14 } Tile{ AsIs: (/18 AsIs: # Range/20 AsIs: s.Num#1/31 AsIs: e.Range#1/16 HalfReuse: )/28 HalfReuse: (/30 } # Junk/38 (/39 Tile{ HalfReuse: # TkNumber/29 HalfReuse: s.Number1 #32/19 HalfReuse: s.ContextOffset1 #13/23 HalfReuse: )/25 AsIs: e.Junk#1/21 AsIs: )/24 AsIs: e.Ranges_E#1/33 AsIs: (/11 AsIs: e.Vars#1/9 AsIs: )/12 AsIs: (/7 AsIs: e.Commands#1/5 HalfReuse: (/8 HalfReuse: # CmdNumberSave/1 } # AlgRight/40 s.Num#1/31/41 s.ContextOffset#1/13/42 Tile{ AsIs: s.Number#1/32 } )/43 )/44 >/45 Tile{ ]] }
      if( ! refalrts::alloc_open_call( context[35] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[36], Inc, "Inc" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[37] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[38], & ident_Junk<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[39] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[40], & ident_AlgRight<int>::name ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[41], context[31]))
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[42], context[13]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[43] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[44] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[45] ) )
        return refalrts::cNoMemory;
      refalrts::reinit_close_bracket( context[28] );
      refalrts::reinit_open_bracket( context[30] );
      refalrts::reinit_ident( context[29], & ident_TkNumber<int>::name );
      refalrts::reinit_svar( context[19], context[32] );
      refalrts::reinit_svar( context[23], context[13] );
      refalrts::reinit_close_bracket( context[25] );
      refalrts::reinit_open_bracket( context[8] );
      refalrts::reinit_ident( context[1], & ident_CmdNumberSave<int>::name );
      refalrts::push_stack( context[45] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[7], context[44] );
      refalrts::link_brackets( context[8], context[43] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[30], context[24] );
      refalrts::link_brackets( context[39], context[25] );
      refalrts::link_brackets( context[18], context[28] );
      refalrts::push_stack( context[37] );
      refalrts::push_stack( context[35] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[43], context[45] );
      res = refalrts::splice_evar( res, context[32], context[32] );
      res = refalrts::splice_evar( res, context[40], context[42] );
      res = refalrts::splice_evar( res, context[29], context[1] );
      res = refalrts::splice_evar( res, context[38], context[39] );
      res = refalrts::splice_evar( res, context[18], context[30] );
      res = refalrts::splice_evar( res, context[14], context[15] );
      res = refalrts::splice_evar( res, context[37], context[37] );
      res = refalrts::splice_evar( res, context[13], context[13] );
      res = refalrts::splice_evar( res, context[35], context[36] );
      refalrts::use( res );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[14], context[15], context[2], context[3] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & DoGenPattern/4 s.ContextOffset#1/13 e.Ranges_B#1/14 (/18 # Range/20 s.Num#1/31 e.Range#1/16 (/28 # TkName/30 e.Name#1/26 )/29 )/19 (/23 # Junk/25 e.Junk#1/21 )/24 e.Ranges_E#1/32 (/11 e.Vars#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_right( context[9], context[10], context[2], context[3] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    // closed e.Vars#1 as range 9
    // closed e.Commands#1 as range 5
    if( ! refalrts::svar_left( context[13], context[2], context[3] ) )
      continue;
    context[14] = 0;
    context[15] = 0;
    refalrts::start_e_loop();
    do {
      context[32] = context[2];
      context[33] = context[3];
      context[16] = 0;
      context[17] = 0;
      context[18] = refalrts::brackets_left( context[16], context[17], context[32], context[33] );
      if( ! context[18] )
        continue;
      refalrts::bracket_pointers(context[18], context[19]);
      context[20] = refalrts::ident_left(  & ident_Range<int>::name, context[16], context[17] );
      if( ! context[20] )
        continue;
      context[21] = 0;
      context[22] = 0;
      context[23] = refalrts::brackets_left( context[21], context[22], context[32], context[33] );
      if( ! context[23] )
        continue;
      refalrts::bracket_pointers(context[23], context[24]);
      context[25] = refalrts::ident_left(  & ident_Junk<int>::name, context[21], context[22] );
      if( ! context[25] )
        continue;
      context[26] = 0;
      context[27] = 0;
      context[28] = refalrts::brackets_right( context[26], context[27], context[16], context[17] );
      if( ! context[28] )
        continue;
      refalrts::bracket_pointers(context[28], context[29]);
      context[30] = refalrts::ident_left(  & ident_TkName<int>::name, context[26], context[27] );
      if( ! context[30] )
        continue;
      // closed e.Name#1 as range 26
      // closed e.Junk#1 as range 21
      // closed e.Ranges_E#1 as range 2
      if( ! refalrts::svar_left( context[31], context[16], context[17] ) )
        continue;
      // closed e.Range#1 as range 16

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenPattern/4 } </34 & Inc/35 Tile{ AsIs: s.ContextOffset#1/13 } >/36 Tile{ AsIs: e.Ranges_B#1/14 } Tile{ AsIs: (/18 AsIs: # Range/20 AsIs: s.Num#1/31 AsIs: e.Range#1/16 HalfReuse: )/28 HalfReuse: (/30 } # Junk/37 (/38 # TkName/39 Tile{ AsIs: e.Name#1/26 } Tile{ HalfReuse: s.ContextOffset1 #13/23 HalfReuse: )/25 AsIs: e.Junk#1/21 AsIs: )/24 AsIs: e.Ranges_E#1/32 AsIs: (/11 AsIs: e.Vars#1/9 AsIs: )/12 AsIs: (/7 AsIs: e.Commands#1/5 HalfReuse: (/8 HalfReuse: # CmdNameSave/1 } # AlgRight/40 s.Num#1/31/41 s.ContextOffset#1/13/42 e.Name#1/26/43 Tile{ AsIs: )/29 AsIs: )/19 } >/45 Tile{ ]] }
      if( ! refalrts::alloc_open_call( context[34] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[35], Inc, "Inc" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[36] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[37], & ident_Junk<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[38] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[39], & ident_TkName<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[40], & ident_AlgRight<int>::name ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[41], context[31]))
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[42], context[13]))
        return refalrts::cNoMemory;
      if (! refalrts::copy_evar(context[43], context[44], context[26], context[27]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[45] ) )
        return refalrts::cNoMemory;
      refalrts::reinit_close_bracket( context[28] );
      refalrts::reinit_open_bracket( context[30] );
      refalrts::reinit_svar( context[23], context[13] );
      refalrts::reinit_close_bracket( context[25] );
      refalrts::reinit_open_bracket( context[8] );
      refalrts::reinit_ident( context[1], & ident_CmdNameSave<int>::name );
      refalrts::push_stack( context[45] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[7], context[19] );
      refalrts::link_brackets( context[8], context[29] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[30], context[24] );
      refalrts::link_brackets( context[38], context[25] );
      refalrts::link_brackets( context[18], context[28] );
      refalrts::push_stack( context[36] );
      refalrts::push_stack( context[34] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[45], context[45] );
      res = refalrts::splice_evar( res, context[29], context[19] );
      res = refalrts::splice_evar( res, context[43], context[44] );
      res = refalrts::splice_evar( res, context[40], context[42] );
      res = refalrts::splice_evar( res, context[23], context[1] );
      res = refalrts::splice_evar( res, context[26], context[27] );
      res = refalrts::splice_evar( res, context[37], context[39] );
      res = refalrts::splice_evar( res, context[18], context[30] );
      res = refalrts::splice_evar( res, context[14], context[15] );
      res = refalrts::splice_evar( res, context[36], context[36] );
      res = refalrts::splice_evar( res, context[13], context[13] );
      res = refalrts::splice_evar( res, context[34], context[35] );
      refalrts::use( res );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[14], context[15], context[2], context[3] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & DoGenPattern/4 s.ContextOffset#1/13 e.Ranges_B#1/14 (/18 # Range/20 s.Num#1/31 e.Range#1/16 (/28 # TkIdentifier/30 e.Name#1/26 )/29 )/19 (/23 # Junk/25 e.Junk#1/21 )/24 e.Ranges_E#1/32 (/11 e.Vars#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_right( context[9], context[10], context[2], context[3] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    // closed e.Vars#1 as range 9
    // closed e.Commands#1 as range 5
    if( ! refalrts::svar_left( context[13], context[2], context[3] ) )
      continue;
    context[14] = 0;
    context[15] = 0;
    refalrts::start_e_loop();
    do {
      context[32] = context[2];
      context[33] = context[3];
      context[16] = 0;
      context[17] = 0;
      context[18] = refalrts::brackets_left( context[16], context[17], context[32], context[33] );
      if( ! context[18] )
        continue;
      refalrts::bracket_pointers(context[18], context[19]);
      context[20] = refalrts::ident_left(  & ident_Range<int>::name, context[16], context[17] );
      if( ! context[20] )
        continue;
      context[21] = 0;
      context[22] = 0;
      context[23] = refalrts::brackets_left( context[21], context[22], context[32], context[33] );
      if( ! context[23] )
        continue;
      refalrts::bracket_pointers(context[23], context[24]);
      context[25] = refalrts::ident_left(  & ident_Junk<int>::name, context[21], context[22] );
      if( ! context[25] )
        continue;
      context[26] = 0;
      context[27] = 0;
      context[28] = refalrts::brackets_right( context[26], context[27], context[16], context[17] );
      if( ! context[28] )
        continue;
      refalrts::bracket_pointers(context[28], context[29]);
      context[30] = refalrts::ident_left(  & ident_TkIdentifier<int>::name, context[26], context[27] );
      if( ! context[30] )
        continue;
      // closed e.Name#1 as range 26
      // closed e.Junk#1 as range 21
      // closed e.Ranges_E#1 as range 2
      if( ! refalrts::svar_left( context[31], context[16], context[17] ) )
        continue;
      // closed e.Range#1 as range 16

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenPattern/4 } </34 & Inc/35 Tile{ AsIs: s.ContextOffset#1/13 } >/36 Tile{ AsIs: e.Ranges_B#1/14 } Tile{ AsIs: (/18 AsIs: # Range/20 AsIs: s.Num#1/31 AsIs: e.Range#1/16 HalfReuse: )/28 HalfReuse: (/30 } # Junk/37 (/38 # TkIdentifier/39 Tile{ AsIs: e.Name#1/26 } Tile{ HalfReuse: s.ContextOffset1 #13/23 HalfReuse: )/25 AsIs: e.Junk#1/21 AsIs: )/24 AsIs: e.Ranges_E#1/32 AsIs: (/11 AsIs: e.Vars#1/9 AsIs: )/12 AsIs: (/7 AsIs: e.Commands#1/5 HalfReuse: (/8 HalfReuse: # CmdIdentSave/1 } # AlgRight/40 s.Num#1/31/41 s.ContextOffset#1/13/42 e.Name#1/26/43 Tile{ AsIs: )/29 AsIs: )/19 } >/45 Tile{ ]] }
      if( ! refalrts::alloc_open_call( context[34] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[35], Inc, "Inc" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[36] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[37], & ident_Junk<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[38] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[39], & ident_TkIdentifier<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[40], & ident_AlgRight<int>::name ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[41], context[31]))
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[42], context[13]))
        return refalrts::cNoMemory;
      if (! refalrts::copy_evar(context[43], context[44], context[26], context[27]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[45] ) )
        return refalrts::cNoMemory;
      refalrts::reinit_close_bracket( context[28] );
      refalrts::reinit_open_bracket( context[30] );
      refalrts::reinit_svar( context[23], context[13] );
      refalrts::reinit_close_bracket( context[25] );
      refalrts::reinit_open_bracket( context[8] );
      refalrts::reinit_ident( context[1], & ident_CmdIdentSave<int>::name );
      refalrts::push_stack( context[45] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[7], context[19] );
      refalrts::link_brackets( context[8], context[29] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[30], context[24] );
      refalrts::link_brackets( context[38], context[25] );
      refalrts::link_brackets( context[18], context[28] );
      refalrts::push_stack( context[36] );
      refalrts::push_stack( context[34] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[45], context[45] );
      res = refalrts::splice_evar( res, context[29], context[19] );
      res = refalrts::splice_evar( res, context[43], context[44] );
      res = refalrts::splice_evar( res, context[40], context[42] );
      res = refalrts::splice_evar( res, context[23], context[1] );
      res = refalrts::splice_evar( res, context[26], context[27] );
      res = refalrts::splice_evar( res, context[37], context[39] );
      res = refalrts::splice_evar( res, context[18], context[30] );
      res = refalrts::splice_evar( res, context[14], context[15] );
      res = refalrts::splice_evar( res, context[36], context[36] );
      res = refalrts::splice_evar( res, context[13], context[13] );
      res = refalrts::splice_evar( res, context[34], context[35] );
      refalrts::use( res );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[14], context[15], context[2], context[3] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & DoGenPattern/4 s.ContextOffset#1/13 e.Ranges_B#1/14 (/18 # Junk/20 e.Junk_L#1/16 )/19 (/23 # Range/25 s.Num#1/40 (/33 # CallBrackets/35 (/38 e.Name#1/36 )/39 e.SubRange#1/31 )/34 )/24 (/28 # Junk/30 e.Junk_R#1/26 )/29 e.Ranges_E#1/41 (/11 e.Vars#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_right( context[9], context[10], context[2], context[3] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    // closed e.Vars#1 as range 9
    // closed e.Commands#1 as range 5
    if( ! refalrts::svar_left( context[13], context[2], context[3] ) )
      continue;
    context[14] = 0;
    context[15] = 0;
    refalrts::start_e_loop();
    do {
      context[41] = context[2];
      context[42] = context[3];
      context[16] = 0;
      context[17] = 0;
      context[18] = refalrts::brackets_left( context[16], context[17], context[41], context[42] );
      if( ! context[18] )
        continue;
      refalrts::bracket_pointers(context[18], context[19]);
      context[20] = refalrts::ident_left(  & ident_Junk<int>::name, context[16], context[17] );
      if( ! context[20] )
        continue;
      context[21] = 0;
      context[22] = 0;
      context[23] = refalrts::brackets_left( context[21], context[22], context[41], context[42] );
      if( ! context[23] )
        continue;
      refalrts::bracket_pointers(context[23], context[24]);
      context[25] = refalrts::ident_left(  & ident_Range<int>::name, context[21], context[22] );
      if( ! context[25] )
        continue;
      context[26] = 0;
      context[27] = 0;
      context[28] = refalrts::brackets_left( context[26], context[27], context[41], context[42] );
      if( ! context[28] )
        continue;
      refalrts::bracket_pointers(context[28], context[29]);
      context[30] = refalrts::ident_left(  & ident_Junk<int>::name, context[26], context[27] );
      if( ! context[30] )
        continue;
      context[31] = 0;
      context[32] = 0;
      context[33] = refalrts::brackets_right( context[31], context[32], context[21], context[22] );
      if( ! context[33] )
        continue;
      refalrts::bracket_pointers(context[33], context[34]);
      context[35] = refalrts::ident_left(  & ident_CallBrackets<int>::name, context[31], context[32] );
      if( ! context[35] )
        continue;
      context[36] = 0;
      context[37] = 0;
      context[38] = refalrts::brackets_left( context[36], context[37], context[31], context[32] );
      if( ! context[38] )
        continue;
      refalrts::bracket_pointers(context[38], context[39]);
      // closed e.Junk_L#1 as range 16
      // closed e.Name#1 as range 36
      // closed e.SubRange#1 as range 31
      // closed e.Junk_R#1 as range 26
      // closed e.Ranges_E#1 as range 2
      if( ! refalrts::svar_left( context[40], context[21], context[22] ) )
        continue;
      if( ! refalrts::empty_seq( context[21], context[22] ) )
        continue;

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenPattern/4 } </43 & Add/44 Tile{ AsIs: s.ContextOffset#1/13 } 3/45 >/46 Tile{ AsIs: e.Ranges_B#1/14 } Tile{ AsIs: (/18 AsIs: # Junk/20 } Tile{ AsIs: e.Junk_L#1/16 } Tile{ AsIs: (/23 Reuse: # TkOpenCall/25 AsIs: s.Num#1/40 HalfReuse: )/33 HalfReuse: (/35 HalfReuse: # TkName/38 AsIs: e.Name#1/36 HalfReuse: </39 } & Add/47 s.ContextOffset#1/13/48 2/49 >/50 Tile{ AsIs: )/19 } )/51 (/52 # Range/53 s.ContextOffset#1/13/54 Tile{ AsIs: e.SubRange#1/31 } )/55 (/56 # Junk/57 (/58 # TkCloseCall/59 </60 Tile{ HalfReuse: & Inc/34 HalfReuse: s.Num1 #40/24 HalfReuse: >/28 HalfReuse: )/30 AsIs: e.Junk_R#1/26 AsIs: )/29 AsIs: e.Ranges_E#1/41 AsIs: (/11 AsIs: e.Vars#1/9 AsIs: )/12 AsIs: (/7 AsIs: e.Commands#1/5 HalfReuse: (/8 HalfReuse: # CmdCallSave/1 } # AlgLeft/61 s.Num#1/40/62 s.ContextOffset#1/13/63 )/64 )/65 >/66 Tile{ ]] }
      if( ! refalrts::alloc_open_call( context[43] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[44], Add, "Add" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_number( context[45], 3UL ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[46] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[47], Add, "Add" ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[48], context[13]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_number( context[49], 2UL ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[50] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[51] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[52] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[53], & ident_Range<int>::name ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[54], context[13]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[55] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[56] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[57], & ident_Junk<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[58] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[59], & ident_TkCloseCall<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_call( context[60] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[61], & ident_AlgLeft<int>::name ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[62], context[40]))
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[63], context[13]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[64] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[65] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[66] ) )
        return refalrts::cNoMemory;
      refalrts::update_ident( context[25], & ident_TkOpenCall<int>::name );
      refalrts::reinit_close_bracket( context[33] );
      refalrts::reinit_open_bracket( context[35] );
      refalrts::reinit_ident( context[38], & ident_TkName<int>::name );
      refalrts::reinit_open_call( context[39] );
      refalrts::reinit_name( context[34], Inc, "Inc" );
      refalrts::reinit_svar( context[24], context[40] );
      refalrts::reinit_close_call( context[28] );
      refalrts::reinit_close_bracket( context[30] );
      refalrts::reinit_open_bracket( context[8] );
      refalrts::reinit_ident( context[1], & ident_CmdCallSave<int>::name );
      refalrts::push_stack( context[66] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[7], context[65] );
      refalrts::link_brackets( context[8], context[64] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[56], context[29] );
      refalrts::link_brackets( context[58], context[30] );
      refalrts::push_stack( context[28] );
      refalrts::push_stack( context[60] );
      refalrts::link_brackets( context[52], context[55] );
      refalrts::link_brackets( context[18], context[51] );
      refalrts::link_brackets( context[35], context[19] );
      refalrts::push_stack( context[50] );
      refalrts::push_stack( context[39] );
      refalrts::link_brackets( context[23], context[33] );
      refalrts::push_stack( context[46] );
      refalrts::push_stack( context[43] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[61], context[66] );
      res = refalrts::splice_evar( res, context[34], context[1] );
      res = refalrts::splice_evar( res, context[55], context[60] );
      res = refalrts::splice_evar( res, context[31], context[32] );
      res = refalrts::splice_evar( res, context[51], context[54] );
      res = refalrts::splice_evar( res, context[19], context[19] );
      res = refalrts::splice_evar( res, context[47], context[50] );
      res = refalrts::splice_evar( res, context[23], context[39] );
      res = refalrts::splice_evar( res, context[16], context[17] );
      res = refalrts::splice_evar( res, context[18], context[20] );
      res = refalrts::splice_evar( res, context[14], context[15] );
      res = refalrts::splice_evar( res, context[45], context[46] );
      res = refalrts::splice_evar( res, context[13], context[13] );
      res = refalrts::splice_evar( res, context[43], context[44] );
      refalrts::use( res );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[14], context[15], context[2], context[3] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & DoGenPattern/4 s.ContextOffset#1/13 e.Ranges_B#1/14 (/18 # Junk/20 e.Junk#1/16 )/19 (/23 # Range/25 s.Num#1/26 (/29 # Brackets/31 e.SubRange#1/27 )/30 e.Range#1/21 )/24 e.Ranges_E#1/32 (/11 e.Vars#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_right( context[9], context[10], context[2], context[3] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    // closed e.Vars#1 as range 9
    // closed e.Commands#1 as range 5
    if( ! refalrts::svar_left( context[13], context[2], context[3] ) )
      continue;
    context[14] = 0;
    context[15] = 0;
    refalrts::start_e_loop();
    do {
      context[32] = context[2];
      context[33] = context[3];
      context[16] = 0;
      context[17] = 0;
      context[18] = refalrts::brackets_left( context[16], context[17], context[32], context[33] );
      if( ! context[18] )
        continue;
      refalrts::bracket_pointers(context[18], context[19]);
      context[20] = refalrts::ident_left(  & ident_Junk<int>::name, context[16], context[17] );
      if( ! context[20] )
        continue;
      context[21] = 0;
      context[22] = 0;
      context[23] = refalrts::brackets_left( context[21], context[22], context[32], context[33] );
      if( ! context[23] )
        continue;
      refalrts::bracket_pointers(context[23], context[24]);
      context[25] = refalrts::ident_left(  & ident_Range<int>::name, context[21], context[22] );
      if( ! context[25] )
        continue;
      // closed e.Junk#1 as range 16
      // closed e.Ranges_E#1 as range 2
      if( ! refalrts::svar_left( context[26], context[21], context[22] ) )
        continue;
      context[27] = 0;
      context[28] = 0;
      context[29] = refalrts::brackets_left( context[27], context[28], context[21], context[22] );
      if( ! context[29] )
        continue;
      refalrts::bracket_pointers(context[29], context[30]);
      context[31] = refalrts::ident_left(  & ident_Brackets<int>::name, context[27], context[28] );
      if( ! context[31] )
        continue;
      // closed e.SubRange#1 as range 27
      // closed e.Range#1 as range 21

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenPattern/4 } </34 & Add/35 Tile{ AsIs: s.ContextOffset#1/13 } 4/36 >/37 Tile{ AsIs: e.Ranges_B#1/14 } Tile{ AsIs: (/18 AsIs: # Junk/20 AsIs: e.Junk#1/16 HalfReuse: (/19 HalfReuse: # TkOpenBracket/23 HalfReuse: </25 } & Add/38 s.ContextOffset#1/13/39 2/40 >/41 )/42 )/43 (/44 # Range/45 s.ContextOffset#1/13/46 Tile{ AsIs: e.SubRange#1/27 } )/47 (/48 # Junk/49 (/50 # TkCloseBracket/51 </52 & Add/53 s.ContextOffset#1/13/54 3/55 >/56 )/57 )/58 (/59 # Range/60 Tile{ HalfReuse: s.Num1 #26/30 AsIs: e.Range#1/21 AsIs: )/24 AsIs: e.Ranges_E#1/32 AsIs: (/11 AsIs: e.Vars#1/9 AsIs: )/12 AsIs: (/7 AsIs: e.Commands#1/5 HalfReuse: (/8 HalfReuse: # CmdBracketsSave/1 } # AlgLeft/61 Tile{ AsIs: s.Num#1/26 HalfReuse: s.ContextOffset1 #13/29 HalfReuse: )/31 } )/62 >/63 Tile{ ]] }
      if( ! refalrts::alloc_open_call( context[34] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[35], Add, "Add" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_number( context[36], 4UL ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[37] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[38], Add, "Add" ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[39], context[13]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_number( context[40], 2UL ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[41] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[42] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[43] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[44] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[45], & ident_Range<int>::name ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[46], context[13]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[47] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[48] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[49], & ident_Junk<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[50] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[51], & ident_TkCloseBracket<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_call( context[52] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[53], Add, "Add" ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[54], context[13]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_number( context[55], 3UL ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[56] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[57] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[58] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[59] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[60], & ident_Range<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[61], & ident_AlgLeft<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[62] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[63] ) )
        return refalrts::cNoMemory;
      refalrts::reinit_open_bracket( context[19] );
      refalrts::reinit_ident( context[23], & ident_TkOpenBracket<int>::name );
      refalrts::reinit_open_call( context[25] );
      refalrts::reinit_svar( context[30], context[26] );
      refalrts::reinit_open_bracket( context[8] );
      refalrts::reinit_ident( context[1], & ident_CmdBracketsSave<int>::name );
      refalrts::reinit_svar( context[29], context[13] );
      refalrts::reinit_close_bracket( context[31] );
      refalrts::push_stack( context[63] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[7], context[62] );
      refalrts::link_brackets( context[8], context[31] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[59], context[24] );
      refalrts::link_brackets( context[48], context[58] );
      refalrts::link_brackets( context[50], context[57] );
      refalrts::push_stack( context[56] );
      refalrts::push_stack( context[52] );
      refalrts::link_brackets( context[44], context[47] );
      refalrts::link_brackets( context[18], context[43] );
      refalrts::link_brackets( context[19], context[42] );
      refalrts::push_stack( context[41] );
      refalrts::push_stack( context[25] );
      refalrts::push_stack( context[37] );
      refalrts::push_stack( context[34] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[62], context[63] );
      res = refalrts::splice_evar( res, context[26], context[31] );
      res = refalrts::splice_evar( res, context[61], context[61] );
      res = refalrts::splice_evar( res, context[30], context[1] );
      res = refalrts::splice_evar( res, context[47], context[60] );
      res = refalrts::splice_evar( res, context[27], context[28] );
      res = refalrts::splice_evar( res, context[38], context[46] );
      res = refalrts::splice_evar( res, context[18], context[25] );
      res = refalrts::splice_evar( res, context[14], context[15] );
      res = refalrts::splice_evar( res, context[36], context[37] );
      res = refalrts::splice_evar( res, context[13], context[13] );
      res = refalrts::splice_evar( res, context[34], context[35] );
      refalrts::use( res );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[14], context[15], context[2], context[3] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & DoGenPattern/4 s.ContextOffset#1/13 e.Ranges_B#1/14 (/18 # Range/20 s.Num#1/31 e.Range#1/16 (/28 # Brackets/30 e.SubRange#1/26 )/29 )/19 (/23 # Junk/25 e.Junk#1/21 )/24 e.Ranges_E#1/32 (/11 e.Vars#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_right( context[9], context[10], context[2], context[3] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    // closed e.Vars#1 as range 9
    // closed e.Commands#1 as range 5
    if( ! refalrts::svar_left( context[13], context[2], context[3] ) )
      continue;
    context[14] = 0;
    context[15] = 0;
    refalrts::start_e_loop();
    do {
      context[32] = context[2];
      context[33] = context[3];
      context[16] = 0;
      context[17] = 0;
      context[18] = refalrts::brackets_left( context[16], context[17], context[32], context[33] );
      if( ! context[18] )
        continue;
      refalrts::bracket_pointers(context[18], context[19]);
      context[20] = refalrts::ident_left(  & ident_Range<int>::name, context[16], context[17] );
      if( ! context[20] )
        continue;
      context[21] = 0;
      context[22] = 0;
      context[23] = refalrts::brackets_left( context[21], context[22], context[32], context[33] );
      if( ! context[23] )
        continue;
      refalrts::bracket_pointers(context[23], context[24]);
      context[25] = refalrts::ident_left(  & ident_Junk<int>::name, context[21], context[22] );
      if( ! context[25] )
        continue;
      context[26] = 0;
      context[27] = 0;
      context[28] = refalrts::brackets_right( context[26], context[27], context[16], context[17] );
      if( ! context[28] )
        continue;
      refalrts::bracket_pointers(context[28], context[29]);
      context[30] = refalrts::ident_left(  & ident_Brackets<int>::name, context[26], context[27] );
      if( ! context[30] )
        continue;
      // closed e.SubRange#1 as range 26
      // closed e.Junk#1 as range 21
      // closed e.Ranges_E#1 as range 2
      if( ! refalrts::svar_left( context[31], context[16], context[17] ) )
        continue;
      // closed e.Range#1 as range 16

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenPattern/4 } </34 & Add/35 Tile{ AsIs: s.ContextOffset#1/13 } 4/36 >/37 Tile{ AsIs: e.Ranges_B#1/14 } Tile{ AsIs: (/18 AsIs: # Range/20 AsIs: s.Num#1/31 AsIs: e.Range#1/16 HalfReuse: )/28 HalfReuse: (/30 } # Junk/38 (/39 # TkOpenBracket/40 </41 & Add/42 s.ContextOffset#1/13/43 2/44 >/45 )/46 )/47 (/48 # Range/49 s.ContextOffset#1/13/50 Tile{ AsIs: e.SubRange#1/26 } )/51 (/52 # Junk/53 (/54 # TkCloseBracket/55 </56 & Add/57 Tile{ HalfReuse: s.ContextOffset1 #13/29 HalfReuse: 3/19 HalfReuse: >/23 HalfReuse: )/25 AsIs: e.Junk#1/21 AsIs: )/24 AsIs: e.Ranges_E#1/32 AsIs: (/11 AsIs: e.Vars#1/9 AsIs: )/12 AsIs: (/7 AsIs: e.Commands#1/5 HalfReuse: (/8 HalfReuse: # CmdBracketsSave/1 } # AlgRight/58 s.Num#1/31/59 s.ContextOffset#1/13/60 )/61 )/62 >/63 Tile{ ]] }
      if( ! refalrts::alloc_open_call( context[34] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[35], Add, "Add" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_number( context[36], 4UL ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[37] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[38], & ident_Junk<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[39] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[40], & ident_TkOpenBracket<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_call( context[41] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[42], Add, "Add" ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[43], context[13]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_number( context[44], 2UL ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[45] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[46] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[47] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[48] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[49], & ident_Range<int>::name ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[50], context[13]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[51] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[52] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[53], & ident_Junk<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[54] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[55], & ident_TkCloseBracket<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_call( context[56] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[57], Add, "Add" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[58], & ident_AlgRight<int>::name ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[59], context[31]))
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[60], context[13]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[61] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[62] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[63] ) )
        return refalrts::cNoMemory;
      refalrts::reinit_close_bracket( context[28] );
      refalrts::reinit_open_bracket( context[30] );
      refalrts::reinit_svar( context[29], context[13] );
      refalrts::reinit_number( context[19], 3UL );
      refalrts::reinit_close_call( context[23] );
      refalrts::reinit_close_bracket( context[25] );
      refalrts::reinit_open_bracket( context[8] );
      refalrts::reinit_ident( context[1], & ident_CmdBracketsSave<int>::name );
      refalrts::push_stack( context[63] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[7], context[62] );
      refalrts::link_brackets( context[8], context[61] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[52], context[24] );
      refalrts::link_brackets( context[54], context[25] );
      refalrts::push_stack( context[23] );
      refalrts::push_stack( context[56] );
      refalrts::link_brackets( context[48], context[51] );
      refalrts::link_brackets( context[30], context[47] );
      refalrts::link_brackets( context[39], context[46] );
      refalrts::push_stack( context[45] );
      refalrts::push_stack( context[41] );
      refalrts::link_brackets( context[18], context[28] );
      refalrts::push_stack( context[37] );
      refalrts::push_stack( context[34] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[58], context[63] );
      res = refalrts::splice_evar( res, context[29], context[1] );
      res = refalrts::splice_evar( res, context[51], context[57] );
      res = refalrts::splice_evar( res, context[26], context[27] );
      res = refalrts::splice_evar( res, context[38], context[50] );
      res = refalrts::splice_evar( res, context[18], context[30] );
      res = refalrts::splice_evar( res, context[14], context[15] );
      res = refalrts::splice_evar( res, context[36], context[37] );
      res = refalrts::splice_evar( res, context[13], context[13] );
      res = refalrts::splice_evar( res, context[34], context[35] );
      refalrts::use( res );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[14], context[15], context[2], context[3] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & DoGenPattern/4 s.ContextOffset#1/13 e.Ranges_B#1/14 (/18 # Junk/20 e.Junk#1/16 )/19 (/23 # Range/25 s.Num#1/26 (/29 # ADT_Brackets/31 (/34 e.Name#1/32 )/35 e.SubRange#1/27 )/30 e.Range#1/21 )/24 e.Ranges_E#1/36 (/11 e.Vars#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_right( context[9], context[10], context[2], context[3] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    // closed e.Vars#1 as range 9
    // closed e.Commands#1 as range 5
    if( ! refalrts::svar_left( context[13], context[2], context[3] ) )
      continue;
    context[14] = 0;
    context[15] = 0;
    refalrts::start_e_loop();
    do {
      context[36] = context[2];
      context[37] = context[3];
      context[16] = 0;
      context[17] = 0;
      context[18] = refalrts::brackets_left( context[16], context[17], context[36], context[37] );
      if( ! context[18] )
        continue;
      refalrts::bracket_pointers(context[18], context[19]);
      context[20] = refalrts::ident_left(  & ident_Junk<int>::name, context[16], context[17] );
      if( ! context[20] )
        continue;
      context[21] = 0;
      context[22] = 0;
      context[23] = refalrts::brackets_left( context[21], context[22], context[36], context[37] );
      if( ! context[23] )
        continue;
      refalrts::bracket_pointers(context[23], context[24]);
      context[25] = refalrts::ident_left(  & ident_Range<int>::name, context[21], context[22] );
      if( ! context[25] )
        continue;
      // closed e.Junk#1 as range 16
      // closed e.Ranges_E#1 as range 2
      if( ! refalrts::svar_left( context[26], context[21], context[22] ) )
        continue;
      context[27] = 0;
      context[28] = 0;
      context[29] = refalrts::brackets_left( context[27], context[28], context[21], context[22] );
      if( ! context[29] )
        continue;
      refalrts::bracket_pointers(context[29], context[30]);
      context[31] = refalrts::ident_left(  & ident_ADT_Brackets<int>::name, context[27], context[28] );
      if( ! context[31] )
        continue;
      context[32] = 0;
      context[33] = 0;
      context[34] = refalrts::brackets_left( context[32], context[33], context[27], context[28] );
      if( ! context[34] )
        continue;
      refalrts::bracket_pointers(context[34], context[35]);
      // closed e.Name#1 as range 32
      // closed e.SubRange#1 as range 27
      // closed e.Range#1 as range 21

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  s.Num#1/26 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenPattern/4 } </38 & Add/39 Tile{ AsIs: s.ContextOffset#1/13 } 5/40 >/41 Tile{ AsIs: e.Ranges_B#1/14 } Tile{ AsIs: (/18 AsIs: # Junk/20 AsIs: e.Junk#1/16 HalfReuse: (/19 HalfReuse: # TkOpenADT/23 HalfReuse: </25 } & Add/42 s.ContextOffset#1/13/43 2/44 >/45 )/46 (/47 # TkName/48 e.Name#1/32/49 </51 & Add/52 s.ContextOffset#1/13/53 3/54 >/55 )/56 )/57 (/58 # Range/59 s.ContextOffset#1/13/60 Tile{ AsIs: e.SubRange#1/27 } )/61 (/62 # Junk/63 (/64 # TkCloseADT/65 </66 & Add/67 s.ContextOffset#1/13/68 4/69 >/70 )/71 )/72 (/73 # Range/74 Tile{ HalfReuse: s.Num1 #26/30 AsIs: e.Range#1/21 AsIs: )/24 AsIs: e.Ranges_E#1/36 AsIs: (/11 AsIs: e.Vars#1/9 AsIs: )/12 AsIs: (/7 AsIs: e.Commands#1/5 HalfReuse: (/8 HalfReuse: # CmdADTSave/1 } Tile{ HalfReuse: # AlgLeft/29 HalfReuse: s.Num1 #26/31 HalfReuse: s.ContextOffset1 #13/34 AsIs: e.Name#1/32 AsIs: )/35 } )/75 >/76 Tile{ ]] }
      if( ! refalrts::alloc_open_call( context[38] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[39], Add, "Add" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_number( context[40], 5UL ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[41] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[42], Add, "Add" ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[43], context[13]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_number( context[44], 2UL ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[45] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[46] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[47] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[48], & ident_TkName<int>::name ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_evar(context[49], context[50], context[32], context[33]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_call( context[51] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[52], Add, "Add" ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[53], context[13]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_number( context[54], 3UL ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[55] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[56] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[57] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[58] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[59], & ident_Range<int>::name ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[60], context[13]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[61] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[62] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[63], & ident_Junk<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[64] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[65], & ident_TkCloseADT<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_call( context[66] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[67], Add, "Add" ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[68], context[13]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_number( context[69], 4UL ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[70] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[71] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[72] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[73] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[74], & ident_Range<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[75] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[76] ) )
        return refalrts::cNoMemory;
      refalrts::reinit_open_bracket( context[19] );
      refalrts::reinit_ident( context[23], & ident_TkOpenADT<int>::name );
      refalrts::reinit_open_call( context[25] );
      refalrts::reinit_svar( context[30], context[26] );
      refalrts::reinit_open_bracket( context[8] );
      refalrts::reinit_ident( context[1], & ident_CmdADTSave<int>::name );
      refalrts::reinit_ident( context[29], & ident_AlgLeft<int>::name );
      refalrts::reinit_svar( context[31], context[26] );
      refalrts::reinit_svar( context[34], context[13] );
      refalrts::push_stack( context[76] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[7], context[75] );
      refalrts::link_brackets( context[8], context[35] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[73], context[24] );
      refalrts::link_brackets( context[62], context[72] );
      refalrts::link_brackets( context[64], context[71] );
      refalrts::push_stack( context[70] );
      refalrts::push_stack( context[66] );
      refalrts::link_brackets( context[58], context[61] );
      refalrts::link_brackets( context[18], context[57] );
      refalrts::link_brackets( context[47], context[56] );
      refalrts::push_stack( context[55] );
      refalrts::push_stack( context[51] );
      refalrts::link_brackets( context[19], context[46] );
      refalrts::push_stack( context[45] );
      refalrts::push_stack( context[25] );
      refalrts::push_stack( context[41] );
      refalrts::push_stack( context[38] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[75], context[76] );
      res = refalrts::splice_evar( res, context[29], context[35] );
      res = refalrts::splice_evar( res, context[30], context[1] );
      res = refalrts::splice_evar( res, context[61], context[74] );
      res = refalrts::splice_evar( res, context[27], context[28] );
      res = refalrts::splice_evar( res, context[42], context[60] );
      res = refalrts::splice_evar( res, context[18], context[25] );
      res = refalrts::splice_evar( res, context[14], context[15] );
      res = refalrts::splice_evar( res, context[40], context[41] );
      res = refalrts::splice_evar( res, context[13], context[13] );
      res = refalrts::splice_evar( res, context[38], context[39] );
      refalrts::use( res );
      refalrts::splice_to_freelist_open( context[4], res );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[14], context[15], context[2], context[3] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & DoGenPattern/4 s.ContextOffset#1/13 e.Ranges_B#1/14 (/18 # Range/20 s.Num#1/35 e.Range#1/16 (/28 # ADT_Brackets/30 (/33 e.Name#1/31 )/34 e.SubRange#1/26 )/29 )/19 (/23 # Junk/25 e.Junk#1/21 )/24 e.Ranges_E#1/36 (/11 e.Vars#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_right( context[9], context[10], context[2], context[3] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    // closed e.Vars#1 as range 9
    // closed e.Commands#1 as range 5
    if( ! refalrts::svar_left( context[13], context[2], context[3] ) )
      continue;
    context[14] = 0;
    context[15] = 0;
    refalrts::start_e_loop();
    do {
      context[36] = context[2];
      context[37] = context[3];
      context[16] = 0;
      context[17] = 0;
      context[18] = refalrts::brackets_left( context[16], context[17], context[36], context[37] );
      if( ! context[18] )
        continue;
      refalrts::bracket_pointers(context[18], context[19]);
      context[20] = refalrts::ident_left(  & ident_Range<int>::name, context[16], context[17] );
      if( ! context[20] )
        continue;
      context[21] = 0;
      context[22] = 0;
      context[23] = refalrts::brackets_left( context[21], context[22], context[36], context[37] );
      if( ! context[23] )
        continue;
      refalrts::bracket_pointers(context[23], context[24]);
      context[25] = refalrts::ident_left(  & ident_Junk<int>::name, context[21], context[22] );
      if( ! context[25] )
        continue;
      context[26] = 0;
      context[27] = 0;
      context[28] = refalrts::brackets_right( context[26], context[27], context[16], context[17] );
      if( ! context[28] )
        continue;
      refalrts::bracket_pointers(context[28], context[29]);
      context[30] = refalrts::ident_left(  & ident_ADT_Brackets<int>::name, context[26], context[27] );
      if( ! context[30] )
        continue;
      context[31] = 0;
      context[32] = 0;
      context[33] = refalrts::brackets_left( context[31], context[32], context[26], context[27] );
      if( ! context[33] )
        continue;
      refalrts::bracket_pointers(context[33], context[34]);
      // closed e.Name#1 as range 31
      // closed e.SubRange#1 as range 26
      // closed e.Junk#1 as range 21
      // closed e.Ranges_E#1 as range 2
      if( ! refalrts::svar_left( context[35], context[16], context[17] ) )
        continue;
      // closed e.Range#1 as range 16

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenPattern/4 } </38 & Add/39 Tile{ AsIs: s.ContextOffset#1/13 } 5/40 >/41 Tile{ AsIs: e.Ranges_B#1/14 } Tile{ AsIs: (/18 AsIs: # Range/20 AsIs: s.Num#1/35 AsIs: e.Range#1/16 HalfReuse: )/28 HalfReuse: (/30 HalfReuse: # Junk/33 } (/42 # TkOpenADT/43 </44 & Add/45 s.ContextOffset#1/13/46 2/47 >/48 Tile{ AsIs: )/34 } (/49 # TkName/50 Tile{ AsIs: e.Name#1/31 } </51 & Add/52 s.ContextOffset#1/13/53 3/54 >/55 )/56 )/57 (/58 # Range/59 s.ContextOffset#1/13/60 Tile{ AsIs: e.SubRange#1/26 } )/61 (/62 # Junk/63 (/64 # TkCloseADT/65 </66 & Add/67 Tile{ HalfReuse: s.ContextOffset1 #13/29 HalfReuse: 4/19 HalfReuse: >/23 HalfReuse: )/25 AsIs: e.Junk#1/21 AsIs: )/24 AsIs: e.Ranges_E#1/36 AsIs: (/11 AsIs: e.Vars#1/9 AsIs: )/12 AsIs: (/7 AsIs: e.Commands#1/5 HalfReuse: (/8 HalfReuse: # CmdADTSave/1 } # AlgRight/68 s.Num#1/35/69 s.ContextOffset#1/13/70 e.Name#1/31/71 )/73 )/74 >/75 Tile{ ]] }
      if( ! refalrts::alloc_open_call( context[38] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[39], Add, "Add" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_number( context[40], 5UL ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[41] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[42] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[43], & ident_TkOpenADT<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_call( context[44] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[45], Add, "Add" ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[46], context[13]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_number( context[47], 2UL ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[48] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[49] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[50], & ident_TkName<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_call( context[51] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[52], Add, "Add" ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[53], context[13]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_number( context[54], 3UL ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[55] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[56] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[57] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[58] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[59], & ident_Range<int>::name ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[60], context[13]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[61] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[62] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[63], & ident_Junk<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[64] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[65], & ident_TkCloseADT<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_call( context[66] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[67], Add, "Add" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[68], & ident_AlgRight<int>::name ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[69], context[35]))
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[70], context[13]))
        return refalrts::cNoMemory;
      if (! refalrts::copy_evar(context[71], context[72], context[31], context[32]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[73] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[74] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[75] ) )
        return refalrts::cNoMemory;
      refalrts::reinit_close_bracket( context[28] );
      refalrts::reinit_open_bracket( context[30] );
      refalrts::reinit_ident( context[33], & ident_Junk<int>::name );
      refalrts::reinit_svar( context[29], context[13] );
      refalrts::reinit_number( context[19], 4UL );
      refalrts::reinit_close_call( context[23] );
      refalrts::reinit_close_bracket( context[25] );
      refalrts::reinit_open_bracket( context[8] );
      refalrts::reinit_ident( context[1], & ident_CmdADTSave<int>::name );
      refalrts::push_stack( context[75] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[7], context[74] );
      refalrts::link_brackets( context[8], context[73] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[62], context[24] );
      refalrts::link_brackets( context[64], context[25] );
      refalrts::push_stack( context[23] );
      refalrts::push_stack( context[66] );
      refalrts::link_brackets( context[58], context[61] );
      refalrts::link_brackets( context[30], context[57] );
      refalrts::link_brackets( context[49], context[56] );
      refalrts::push_stack( context[55] );
      refalrts::push_stack( context[51] );
      refalrts::link_brackets( context[42], context[34] );
      refalrts::push_stack( context[48] );
      refalrts::push_stack( context[44] );
      refalrts::link_brackets( context[18], context[28] );
      refalrts::push_stack( context[41] );
      refalrts::push_stack( context[38] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[68], context[75] );
      res = refalrts::splice_evar( res, context[29], context[1] );
      res = refalrts::splice_evar( res, context[61], context[67] );
      res = refalrts::splice_evar( res, context[26], context[27] );
      res = refalrts::splice_evar( res, context[51], context[60] );
      res = refalrts::splice_evar( res, context[31], context[32] );
      res = refalrts::splice_evar( res, context[49], context[50] );
      res = refalrts::splice_evar( res, context[34], context[34] );
      res = refalrts::splice_evar( res, context[42], context[48] );
      res = refalrts::splice_evar( res, context[18], context[33] );
      res = refalrts::splice_evar( res, context[14], context[15] );
      res = refalrts::splice_evar( res, context[40], context[41] );
      res = refalrts::splice_evar( res, context[13], context[13] );
      res = refalrts::splice_evar( res, context[38], context[39] );
      refalrts::use( res );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[14], context[15], context[2], context[3] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & DoGenPattern/4 s.ContextOffset#1/13 e.Ranges_B#1/14 (/18 # Junk/20 e.Junk1#1/16 )/19 (/23 # Range/25 s.Num#1/31 )/24 (/28 # Junk/30 e.Junk2#1/26 )/29 e.Ranges_E#1/32 (/11 e.Vars#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_right( context[9], context[10], context[2], context[3] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    // closed e.Vars#1 as range 9
    // closed e.Commands#1 as range 5
    if( ! refalrts::svar_left( context[13], context[2], context[3] ) )
      continue;
    context[14] = 0;
    context[15] = 0;
    refalrts::start_e_loop();
    do {
      context[32] = context[2];
      context[33] = context[3];
      context[16] = 0;
      context[17] = 0;
      context[18] = refalrts::brackets_left( context[16], context[17], context[32], context[33] );
      if( ! context[18] )
        continue;
      refalrts::bracket_pointers(context[18], context[19]);
      context[20] = refalrts::ident_left(  & ident_Junk<int>::name, context[16], context[17] );
      if( ! context[20] )
        continue;
      context[21] = 0;
      context[22] = 0;
      context[23] = refalrts::brackets_left( context[21], context[22], context[32], context[33] );
      if( ! context[23] )
        continue;
      refalrts::bracket_pointers(context[23], context[24]);
      context[25] = refalrts::ident_left(  & ident_Range<int>::name, context[21], context[22] );
      if( ! context[25] )
        continue;
      context[26] = 0;
      context[27] = 0;
      context[28] = refalrts::brackets_left( context[26], context[27], context[32], context[33] );
      if( ! context[28] )
        continue;
      refalrts::bracket_pointers(context[28], context[29]);
      context[30] = refalrts::ident_left(  & ident_Junk<int>::name, context[26], context[27] );
      if( ! context[30] )
        continue;
      // closed e.Junk1#1 as range 16
      // closed e.Junk2#1 as range 26
      // closed e.Ranges_E#1 as range 2
      if( ! refalrts::svar_left( context[31], context[21], context[22] ) )
        continue;
      if( ! refalrts::empty_seq( context[21], context[22] ) )
        continue;

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE}  {REMOVED TILE}  )/19 (/23 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenPattern/4 AsIs: s.ContextOffset#1/13 AsIs: e.Ranges_B#1/14 AsIs: (/18 AsIs: # Junk/20 } Tile{ AsIs: e.Junk1#1/16 } Tile{ AsIs: e.Junk2#1/26 } Tile{ AsIs: )/29 AsIs: e.Ranges_E#1/32 AsIs: (/11 AsIs: e.Vars#1/9 AsIs: )/12 AsIs: (/7 AsIs: e.Commands#1/5 HalfReuse: (/8 HalfReuse: # CmdEmpty/1 } Tile{ Reuse: # AlgLeft/25 AsIs: s.Num#1/31 AsIs: )/24 HalfReuse: )/28 HalfReuse: >/30 } Tile{ ]] }
      refalrts::reinit_open_bracket( context[8] );
      refalrts::reinit_ident( context[1], & ident_CmdEmpty<int>::name );
      refalrts::update_ident( context[25], & ident_AlgLeft<int>::name );
      refalrts::reinit_close_bracket( context[28] );
      refalrts::reinit_close_call( context[30] );
      refalrts::push_stack( context[30] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[7], context[28] );
      refalrts::link_brackets( context[8], context[24] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[18], context[29] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[25], context[30] );
      res = refalrts::splice_evar( res, context[29], context[1] );
      res = refalrts::splice_evar( res, context[26], context[27] );
      res = refalrts::splice_evar( res, context[16], context[17] );
      refalrts::use( res );
      refalrts::splice_to_freelist_open( context[20], res );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[14], context[15], context[2], context[3] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & DoGenPattern/4 s.ContextOffset#1/13 e.Ranges_B#1/14 (/18 # Junk/20 e.Junk#1/16 )/19 (/23 # Range/25 s.Num#1/26 (/29 # TkVariable/31 s.Mode#1/32 e.Index#1/27 )/30 e.Range#1/21 )/24 e.Ranges_E#1/47 (/11 e.Vars_B#1/33 (/37 s.Mode#1/39 (/42 e.Index#1/44 )/43 e.Offsets#1/35 s.SampleOffset#1/46 )/38 e.Vars_E#1/51 )/12 (/7 e.Commands#1/5 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_right( context[9], context[10], context[2], context[3] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    // closed e.Commands#1 as range 5
    if( ! refalrts::svar_left( context[13], context[2], context[3] ) )
      continue;
    context[14] = 0;
    context[15] = 0;
    refalrts::start_e_loop();
    do {
      context[47] = context[2];
      context[48] = context[3];
      context[49] = context[9];
      context[50] = context[10];
      context[16] = 0;
      context[17] = 0;
      context[18] = refalrts::brackets_left( context[16], context[17], context[47], context[48] );
      if( ! context[18] )
        continue;
      refalrts::bracket_pointers(context[18], context[19]);
      context[20] = refalrts::ident_left(  & ident_Junk<int>::name, context[16], context[17] );
      if( ! context[20] )
        continue;
      context[21] = 0;
      context[22] = 0;
      context[23] = refalrts::brackets_left( context[21], context[22], context[47], context[48] );
      if( ! context[23] )
        continue;
      refalrts::bracket_pointers(context[23], context[24]);
      context[25] = refalrts::ident_left(  & ident_Range<int>::name, context[21], context[22] );
      if( ! context[25] )
        continue;
      // closed e.Junk#1 as range 16
      // closed e.Ranges_E#1 as range 2
      if( ! refalrts::svar_left( context[26], context[21], context[22] ) )
        continue;
      context[27] = 0;
      context[28] = 0;
      context[29] = refalrts::brackets_left( context[27], context[28], context[21], context[22] );
      if( ! context[29] )
        continue;
      refalrts::bracket_pointers(context[29], context[30]);
      context[31] = refalrts::ident_left(  & ident_TkVariable<int>::name, context[27], context[28] );
      if( ! context[31] )
        continue;
      // closed e.Range#1 as range 21
      if( ! refalrts::svar_left( context[32], context[27], context[28] ) )
        continue;
      // closed e.Index#1 as range 27
      context[33] = 0;
      context[34] = 0;
      refalrts::start_e_loop();
      do {
        context[51] = context[49];
        context[52] = context[50];
        context[35] = 0;
        context[36] = 0;
        context[37] = refalrts::brackets_left( context[35], context[36], context[51], context[52] );
        if( ! context[37] )
          continue;
        refalrts::bracket_pointers(context[37], context[38]);
        if( ! refalrts::repeated_stvar_left( context[39], context[32], context[35], context[36] ) )
          continue;
        context[40] = 0;
        context[41] = 0;
        context[42] = refalrts::brackets_left( context[40], context[41], context[35], context[36] );
        if( ! context[42] )
          continue;
        refalrts::bracket_pointers(context[42], context[43]);
        if( ! refalrts::repeated_evar_left( context[44], context[45], context[27], context[28], context[40], context[41] ) )
          continue;
        if( ! refalrts::empty_seq( context[40], context[41] ) )
          continue;
        // closed e.Vars_E#1 as range 9
        if( ! refalrts::svar_right( context[46], context[35], context[36] ) )
          continue;
        // closed e.Offsets#1 as range 35

        refalrts::reset_allocator();
        //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenPattern/4 } </53 & IncVarOffset/54 Tile{ AsIs: s.ContextOffset#1/13 } Tile{ AsIs: s.Mode#1/32 } >/55 Tile{ AsIs: e.Ranges_B#1/14 } Tile{ AsIs: (/18 AsIs: # Junk/20 AsIs: e.Junk#1/16 HalfReuse: (/19 HalfReuse: # TkVariable/23 HalfReuse: s.Mode1 #39/25 } Tile{ AsIs: e.Index#1/27 } s.ContextOffset#1/13/56 )/57 )/58 (/59 # Range/60 Tile{ HalfReuse: s.Num1 #26/30 AsIs: e.Range#1/21 AsIs: )/24 AsIs: e.Ranges_E#1/47 AsIs: (/11 AsIs: e.Vars_B#1/33 AsIs: (/37 AsIs: s.Mode#1/39 AsIs: (/42 AsIs: e.Index#1/44 AsIs: )/43 AsIs: e.Offsets#1/35 AsIs: s.SampleOffset#1/46 HalfReuse: s.ContextOffset1 #13/38 } )/61 Tile{ AsIs: e.Vars_E#1/51 } Tile{ AsIs: )/12 AsIs: (/7 AsIs: e.Commands#1/5 HalfReuse: (/8 HalfReuse: # CmdRepeatedSave/1 } # AlgLeft/62 Tile{ AsIs: s.Num#1/26 HalfReuse: s.Mode1 #39/29 HalfReuse: s.ContextOffset1 #13/31 } s.SampleOffset#1/46/63 )/64 )/65 >/66 Tile{ ]] }
        if( ! refalrts::alloc_open_call( context[53] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_name( context[54], IncVarOffset, "IncVarOffset" ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_call( context[55] ) )
          return refalrts::cNoMemory;
        if (! refalrts::copy_stvar(context[56], context[13]))
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_bracket( context[57] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_bracket( context[58] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_open_bracket( context[59] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_ident( context[60], & ident_Range<int>::name ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_bracket( context[61] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_ident( context[62], & ident_AlgLeft<int>::name ) )
          return refalrts::cNoMemory;
        if (! refalrts::copy_stvar(context[63], context[46]))
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_bracket( context[64] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_bracket( context[65] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_call( context[66] ) )
          return refalrts::cNoMemory;
        refalrts::reinit_open_bracket( context[19] );
        refalrts::reinit_ident( context[23], & ident_TkVariable<int>::name );
        refalrts::reinit_svar( context[25], context[39] );
        refalrts::reinit_svar( context[30], context[26] );
        refalrts::reinit_svar( context[38], context[13] );
        refalrts::reinit_open_bracket( context[8] );
        refalrts::reinit_ident( context[1], & ident_CmdRepeatedSave<int>::name );
        refalrts::reinit_svar( context[29], context[39] );
        refalrts::reinit_svar( context[31], context[13] );
        refalrts::push_stack( context[66] );
        refalrts::push_stack( context[0] );
        refalrts::link_brackets( context[7], context[65] );
        refalrts::link_brackets( context[8], context[64] );
        refalrts::link_brackets( context[11], context[12] );
        refalrts::link_brackets( context[37], context[61] );
        refalrts::link_brackets( context[42], context[43] );
        refalrts::link_brackets( context[59], context[24] );
        refalrts::link_brackets( context[18], context[58] );
        refalrts::link_brackets( context[19], context[57] );
        refalrts::push_stack( context[55] );
        refalrts::push_stack( context[53] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[63], context[66] );
        res = refalrts::splice_evar( res, context[26], context[31] );
        res = refalrts::splice_evar( res, context[62], context[62] );
        res = refalrts::splice_evar( res, context[12], context[1] );
        res = refalrts::splice_evar( res, context[51], context[52] );
        res = refalrts::splice_evar( res, context[61], context[61] );
        res = refalrts::splice_evar( res, context[30], context[38] );
        res = refalrts::splice_evar( res, context[56], context[60] );
        res = refalrts::splice_evar( res, context[27], context[28] );
        res = refalrts::splice_evar( res, context[18], context[25] );
        res = refalrts::splice_evar( res, context[14], context[15] );
        res = refalrts::splice_evar( res, context[55], context[55] );
        res = refalrts::splice_evar( res, context[32], context[32] );
        res = refalrts::splice_evar( res, context[13], context[13] );
        res = refalrts::splice_evar( res, context[53], context[54] );
        refalrts::use( res );
        return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
      } while ( refalrts::open_evar_advance( context[33], context[34], context[49], context[50] ) );
    } while ( refalrts::open_evar_advance( context[14], context[15], context[2], context[3] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & DoGenPattern/4 s.ContextOffset#1/13 e.Ranges_B#1/14 (/18 # Range/20 s.Num#1/31 e.Range#1/16 (/28 # TkVariable/30 s.Mode#1/32 e.Index#1/26 )/29 )/19 (/23 # Junk/25 e.Junk#1/21 )/24 e.Ranges_E#1/47 (/11 e.Vars_B#1/33 (/37 s.Mode#1/39 (/42 e.Index#1/44 )/43 e.Offsets#1/35 s.SampleOffset#1/46 )/38 e.Vars_E#1/51 )/12 (/7 e.Commands#1/5 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_right( context[9], context[10], context[2], context[3] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    // closed e.Commands#1 as range 5
    if( ! refalrts::svar_left( context[13], context[2], context[3] ) )
      continue;
    context[14] = 0;
    context[15] = 0;
    refalrts::start_e_loop();
    do {
      context[47] = context[2];
      context[48] = context[3];
      context[49] = context[9];
      context[50] = context[10];
      context[16] = 0;
      context[17] = 0;
      context[18] = refalrts::brackets_left( context[16], context[17], context[47], context[48] );
      if( ! context[18] )
        continue;
      refalrts::bracket_pointers(context[18], context[19]);
      context[20] = refalrts::ident_left(  & ident_Range<int>::name, context[16], context[17] );
      if( ! context[20] )
        continue;
      context[21] = 0;
      context[22] = 0;
      context[23] = refalrts::brackets_left( context[21], context[22], context[47], context[48] );
      if( ! context[23] )
        continue;
      refalrts::bracket_pointers(context[23], context[24]);
      context[25] = refalrts::ident_left(  & ident_Junk<int>::name, context[21], context[22] );
      if( ! context[25] )
        continue;
      context[26] = 0;
      context[27] = 0;
      context[28] = refalrts::brackets_right( context[26], context[27], context[16], context[17] );
      if( ! context[28] )
        continue;
      refalrts::bracket_pointers(context[28], context[29]);
      context[30] = refalrts::ident_left(  & ident_TkVariable<int>::name, context[26], context[27] );
      if( ! context[30] )
        continue;
      // closed e.Junk#1 as range 21
      // closed e.Ranges_E#1 as range 2
      if( ! refalrts::svar_left( context[31], context[16], context[17] ) )
        continue;
      // closed e.Range#1 as range 16
      if( ! refalrts::svar_left( context[32], context[26], context[27] ) )
        continue;
      // closed e.Index#1 as range 26
      context[33] = 0;
      context[34] = 0;
      refalrts::start_e_loop();
      do {
        context[51] = context[49];
        context[52] = context[50];
        context[35] = 0;
        context[36] = 0;
        context[37] = refalrts::brackets_left( context[35], context[36], context[51], context[52] );
        if( ! context[37] )
          continue;
        refalrts::bracket_pointers(context[37], context[38]);
        if( ! refalrts::repeated_stvar_left( context[39], context[32], context[35], context[36] ) )
          continue;
        context[40] = 0;
        context[41] = 0;
        context[42] = refalrts::brackets_left( context[40], context[41], context[35], context[36] );
        if( ! context[42] )
          continue;
        refalrts::bracket_pointers(context[42], context[43]);
        if( ! refalrts::repeated_evar_left( context[44], context[45], context[26], context[27], context[40], context[41] ) )
          continue;
        if( ! refalrts::empty_seq( context[40], context[41] ) )
          continue;
        // closed e.Vars_E#1 as range 9
        if( ! refalrts::svar_right( context[46], context[35], context[36] ) )
          continue;
        // closed e.Offsets#1 as range 35

        refalrts::reset_allocator();
        //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenPattern/4 } </53 & IncVarOffset/54 Tile{ AsIs: s.ContextOffset#1/13 } Tile{ AsIs: s.Mode#1/32 } >/55 Tile{ AsIs: e.Ranges_B#1/14 } Tile{ AsIs: (/18 AsIs: # Range/20 AsIs: s.Num#1/31 AsIs: e.Range#1/16 HalfReuse: )/28 HalfReuse: (/30 } # Junk/56 (/57 # TkVariable/58 s.Mode#1/39/59 Tile{ AsIs: e.Index#1/26 } Tile{ HalfReuse: s.ContextOffset1 #13/23 HalfReuse: )/25 AsIs: e.Junk#1/21 AsIs: )/24 AsIs: e.Ranges_E#1/47 AsIs: (/11 AsIs: e.Vars_B#1/33 AsIs: (/37 AsIs: s.Mode#1/39 AsIs: (/42 AsIs: e.Index#1/44 AsIs: )/43 AsIs: e.Offsets#1/35 AsIs: s.SampleOffset#1/46 HalfReuse: s.ContextOffset1 #13/38 } )/60 Tile{ AsIs: e.Vars_E#1/51 } Tile{ AsIs: )/12 AsIs: (/7 AsIs: e.Commands#1/5 HalfReuse: (/8 HalfReuse: # CmdRepeatedSave/1 } # AlgRight/61 s.Num#1/31/62 s.Mode#1/39/63 s.ContextOffset#1/13/64 s.SampleOffset#1/46/65 Tile{ AsIs: )/29 AsIs: )/19 } >/66 Tile{ ]] }
        if( ! refalrts::alloc_open_call( context[53] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_name( context[54], IncVarOffset, "IncVarOffset" ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_call( context[55] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_ident( context[56], & ident_Junk<int>::name ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_open_bracket( context[57] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_ident( context[58], & ident_TkVariable<int>::name ) )
          return refalrts::cNoMemory;
        if (! refalrts::copy_stvar(context[59], context[39]))
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_bracket( context[60] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_ident( context[61], & ident_AlgRight<int>::name ) )
          return refalrts::cNoMemory;
        if (! refalrts::copy_stvar(context[62], context[31]))
          return refalrts::cNoMemory;
        if (! refalrts::copy_stvar(context[63], context[39]))
          return refalrts::cNoMemory;
        if (! refalrts::copy_stvar(context[64], context[13]))
          return refalrts::cNoMemory;
        if (! refalrts::copy_stvar(context[65], context[46]))
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_call( context[66] ) )
          return refalrts::cNoMemory;
        refalrts::reinit_close_bracket( context[28] );
        refalrts::reinit_open_bracket( context[30] );
        refalrts::reinit_svar( context[23], context[13] );
        refalrts::reinit_close_bracket( context[25] );
        refalrts::reinit_svar( context[38], context[13] );
        refalrts::reinit_open_bracket( context[8] );
        refalrts::reinit_ident( context[1], & ident_CmdRepeatedSave<int>::name );
        refalrts::push_stack( context[66] );
        refalrts::push_stack( context[0] );
        refalrts::link_brackets( context[7], context[19] );
        refalrts::link_brackets( context[8], context[29] );
        refalrts::link_brackets( context[11], context[12] );
        refalrts::link_brackets( context[37], context[60] );
        refalrts::link_brackets( context[42], context[43] );
        refalrts::link_brackets( context[30], context[24] );
        refalrts::link_brackets( context[57], context[25] );
        refalrts::link_brackets( context[18], context[28] );
        refalrts::push_stack( context[55] );
        refalrts::push_stack( context[53] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[66], context[66] );
        res = refalrts::splice_evar( res, context[29], context[19] );
        res = refalrts::splice_evar( res, context[61], context[65] );
        res = refalrts::splice_evar( res, context[12], context[1] );
        res = refalrts::splice_evar( res, context[51], context[52] );
        res = refalrts::splice_evar( res, context[60], context[60] );
        res = refalrts::splice_evar( res, context[23], context[38] );
        res = refalrts::splice_evar( res, context[26], context[27] );
        res = refalrts::splice_evar( res, context[56], context[59] );
        res = refalrts::splice_evar( res, context[18], context[30] );
        res = refalrts::splice_evar( res, context[14], context[15] );
        res = refalrts::splice_evar( res, context[55], context[55] );
        res = refalrts::splice_evar( res, context[32], context[32] );
        res = refalrts::splice_evar( res, context[13], context[13] );
        res = refalrts::splice_evar( res, context[53], context[54] );
        refalrts::use( res );
        return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
      } while ( refalrts::open_evar_advance( context[33], context[34], context[49], context[50] ) );
    } while ( refalrts::open_evar_advance( context[14], context[15], context[2], context[3] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & DoGenPattern/4 s.ContextOffset#1/13 e.Ranges_B#1/14 (/18 # Junk/20 e.Junk1#1/16 )/19 (/23 # Range/25 s.Num#1/37 (/33 # TkVariable/35 'e'/36 e.Index#1/31 )/34 )/24 (/28 # Junk/30 e.Junk2#1/26 )/29 e.Ranges_E#1/38 (/11 e.Vars#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_right( context[9], context[10], context[2], context[3] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    // closed e.Vars#1 as range 9
    // closed e.Commands#1 as range 5
    if( ! refalrts::svar_left( context[13], context[2], context[3] ) )
      continue;
    context[14] = 0;
    context[15] = 0;
    refalrts::start_e_loop();
    do {
      context[38] = context[2];
      context[39] = context[3];
      context[16] = 0;
      context[17] = 0;
      context[18] = refalrts::brackets_left( context[16], context[17], context[38], context[39] );
      if( ! context[18] )
        continue;
      refalrts::bracket_pointers(context[18], context[19]);
      context[20] = refalrts::ident_left(  & ident_Junk<int>::name, context[16], context[17] );
      if( ! context[20] )
        continue;
      context[21] = 0;
      context[22] = 0;
      context[23] = refalrts::brackets_left( context[21], context[22], context[38], context[39] );
      if( ! context[23] )
        continue;
      refalrts::bracket_pointers(context[23], context[24]);
      context[25] = refalrts::ident_left(  & ident_Range<int>::name, context[21], context[22] );
      if( ! context[25] )
        continue;
      context[26] = 0;
      context[27] = 0;
      context[28] = refalrts::brackets_left( context[26], context[27], context[38], context[39] );
      if( ! context[28] )
        continue;
      refalrts::bracket_pointers(context[28], context[29]);
      context[30] = refalrts::ident_left(  & ident_Junk<int>::name, context[26], context[27] );
      if( ! context[30] )
        continue;
      context[31] = 0;
      context[32] = 0;
      context[33] = refalrts::brackets_right( context[31], context[32], context[21], context[22] );
      if( ! context[33] )
        continue;
      refalrts::bracket_pointers(context[33], context[34]);
      context[35] = refalrts::ident_left(  & ident_TkVariable<int>::name, context[31], context[32] );
      if( ! context[35] )
        continue;
      context[36] = refalrts::char_left( 'e', context[31], context[32] );
      if( ! context[36] )
        continue;
      // closed e.Junk1#1 as range 16
      // closed e.Index#1 as range 31
      // closed e.Junk2#1 as range 26
      // closed e.Ranges_E#1 as range 2
      if( ! refalrts::svar_left( context[37], context[21], context[22] ) )
        continue;
      if( ! refalrts::empty_seq( context[21], context[22] ) )
        continue;

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenPattern/4 AsIs: s.ContextOffset#1/13 AsIs: e.Ranges_B#1/14 AsIs: (/18 AsIs: # Junk/20 AsIs: e.Junk1#1/16 HalfReuse: (/19 HalfReuse: # TkVariable/23 HalfReuse: 'e'/25 } e.Index#1/31/40 Tile{ HalfReuse: s.Num1 #37/28 HalfReuse: )/30 AsIs: e.Junk2#1/26 AsIs: )/29 AsIs: e.Ranges_E#1/38 AsIs: (/11 AsIs: e.Vars#1/9 HalfReuse: (/12 HalfReuse: 'e'/7 } (/42 e.Index#1/31/43 )/45 Tile{ AsIs: s.Num#1/37 } )/46 )/47 (/48 Tile{ AsIs: e.Commands#1/5 } (/49 # CmdComment/50 ' '/51 'c'/52 'l'/53 'o'/54 's'/55 'e'/56 'd'/57 ' '/58 Tile{ HalfReuse: </33 HalfReuse: & PrintVar/35 AsIs: 'e'/36 AsIs: e.Index#1/31 HalfReuse: >/34 HalfReuse: ' '/24 } 'a'/59 's'/60 ' '/61 'r'/62 'a'/63 'n'/64 'g'/65 'e'/66 ' '/67 </68 & StrFromInt/69 s.Num#1/37/70 >/71 )/72 Tile{ AsIs: )/8 AsIs: >/1 ]] }
      if (! refalrts::copy_evar(context[40], context[41], context[31], context[32]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[42] ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_evar(context[43], context[44], context[31], context[32]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[45] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[46] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[47] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[48] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[49] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[50], & ident_CmdComment<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[51], ' ' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[52], 'c' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[53], 'l' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[54], 'o' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[55], 's' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[56], 'e' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[57], 'd' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[58], ' ' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[59], 'a' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[60], 's' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[61], ' ' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[62], 'r' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[63], 'a' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[64], 'n' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[65], 'g' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[66], 'e' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[67], ' ' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_call( context[68] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[69], StrFromInt, "StrFromInt" ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[70], context[37]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[71] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[72] ) )
        return refalrts::cNoMemory;
      refalrts::reinit_open_bracket( context[19] );
      refalrts::reinit_ident( context[23], & ident_TkVariable<int>::name );
      refalrts::reinit_char( context[25], 'e' );
      refalrts::reinit_svar( context[28], context[37] );
      refalrts::reinit_close_bracket( context[30] );
      refalrts::reinit_open_bracket( context[12] );
      refalrts::reinit_char( context[7], 'e' );
      refalrts::reinit_open_call( context[33] );
      refalrts::reinit_name( context[35], PrintVar, "PrintVar" );
      refalrts::reinit_close_call( context[34] );
      refalrts::reinit_char( context[24], ' ' );
      refalrts::push_stack( context[1] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[48], context[8] );
      refalrts::link_brackets( context[49], context[72] );
      refalrts::push_stack( context[71] );
      refalrts::push_stack( context[68] );
      refalrts::push_stack( context[34] );
      refalrts::push_stack( context[33] );
      refalrts::link_brackets( context[11], context[47] );
      refalrts::link_brackets( context[12], context[46] );
      refalrts::link_brackets( context[42], context[45] );
      refalrts::link_brackets( context[18], context[29] );
      refalrts::link_brackets( context[19], context[30] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[59], context[72] );
      res = refalrts::splice_evar( res, context[33], context[24] );
      res = refalrts::splice_evar( res, context[49], context[58] );
      res = refalrts::splice_evar( res, context[5], context[6] );
      res = refalrts::splice_evar( res, context[46], context[48] );
      res = refalrts::splice_evar( res, context[37], context[37] );
      res = refalrts::splice_evar( res, context[42], context[45] );
      res = refalrts::splice_evar( res, context[28], context[7] );
      res = refalrts::splice_evar( res, context[40], context[41] );
      refalrts::use( res );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[14], context[15], context[2], context[3] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & DoGenPattern/4 s.ContextOffset#1/13 e.Ranges_B#1/14 (/18 # Junk/20 e.Junk#1/16 )/19 (/23 # Range/25 s.Num#1/26 (/29 # TkVariable/31 's'/32 e.Index#1/27 )/30 e.Range#1/21 )/24 e.Ranges_E#1/33 (/11 e.Vars#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_right( context[9], context[10], context[2], context[3] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    // closed e.Vars#1 as range 9
    // closed e.Commands#1 as range 5
    if( ! refalrts::svar_left( context[13], context[2], context[3] ) )
      continue;
    context[14] = 0;
    context[15] = 0;
    refalrts::start_e_loop();
    do {
      context[33] = context[2];
      context[34] = context[3];
      context[16] = 0;
      context[17] = 0;
      context[18] = refalrts::brackets_left( context[16], context[17], context[33], context[34] );
      if( ! context[18] )
        continue;
      refalrts::bracket_pointers(context[18], context[19]);
      context[20] = refalrts::ident_left(  & ident_Junk<int>::name, context[16], context[17] );
      if( ! context[20] )
        continue;
      context[21] = 0;
      context[22] = 0;
      context[23] = refalrts::brackets_left( context[21], context[22], context[33], context[34] );
      if( ! context[23] )
        continue;
      refalrts::bracket_pointers(context[23], context[24]);
      context[25] = refalrts::ident_left(  & ident_Range<int>::name, context[21], context[22] );
      if( ! context[25] )
        continue;
      // closed e.Junk#1 as range 16
      // closed e.Ranges_E#1 as range 2
      if( ! refalrts::svar_left( context[26], context[21], context[22] ) )
        continue;
      context[27] = 0;
      context[28] = 0;
      context[29] = refalrts::brackets_left( context[27], context[28], context[21], context[22] );
      if( ! context[29] )
        continue;
      refalrts::bracket_pointers(context[29], context[30]);
      context[31] = refalrts::ident_left(  & ident_TkVariable<int>::name, context[27], context[28] );
      if( ! context[31] )
        continue;
      context[32] = refalrts::char_left( 's', context[27], context[28] );
      if( ! context[32] )
        continue;
      // closed e.Index#1 as range 27
      // closed e.Range#1 as range 21

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenPattern/4 } </35 & Inc/36 Tile{ AsIs: s.ContextOffset#1/13 } >/37 Tile{ AsIs: e.Ranges_B#1/14 } Tile{ AsIs: (/18 AsIs: # Junk/20 AsIs: e.Junk#1/16 HalfReuse: (/19 HalfReuse: # TkVariable/23 HalfReuse: 's'/25 } Tile{ AsIs: e.Index#1/27 } s.ContextOffset#1/13/38 )/39 )/40 (/41 # Range/42 Tile{ HalfReuse: s.Num1 #26/30 AsIs: e.Range#1/21 AsIs: )/24 AsIs: e.Ranges_E#1/33 AsIs: (/11 AsIs: e.Vars#1/9 HalfReuse: (/12 HalfReuse: 's'/7 } (/43 e.Index#1/27/44 )/46 s.ContextOffset#1/13/47 )/48 )/49 (/50 Tile{ AsIs: e.Commands#1/5 } (/51 # CmdVar/52 # AlgLeft/53 Tile{ AsIs: s.Num#1/26 HalfReuse: 's'/29 HalfReuse: s.ContextOffset1 #13/31 HalfReuse: )/32 } Tile{ AsIs: )/8 AsIs: >/1 ]] }
      if( ! refalrts::alloc_open_call( context[35] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[36], Inc, "Inc" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[37] ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[38], context[13]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[39] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[40] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[41] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[42], & ident_Range<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[43] ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_evar(context[44], context[45], context[27], context[28]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[46] ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[47], context[13]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[48] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[49] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[50] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[51] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[52], & ident_CmdVar<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[53], & ident_AlgLeft<int>::name ) )
        return refalrts::cNoMemory;
      refalrts::reinit_open_bracket( context[19] );
      refalrts::reinit_ident( context[23], & ident_TkVariable<int>::name );
      refalrts::reinit_char( context[25], 's' );
      refalrts::reinit_svar( context[30], context[26] );
      refalrts::reinit_open_bracket( context[12] );
      refalrts::reinit_char( context[7], 's' );
      refalrts::reinit_char( context[29], 's' );
      refalrts::reinit_svar( context[31], context[13] );
      refalrts::reinit_close_bracket( context[32] );
      refalrts::push_stack( context[1] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[50], context[8] );
      refalrts::link_brackets( context[51], context[32] );
      refalrts::link_brackets( context[11], context[49] );
      refalrts::link_brackets( context[12], context[48] );
      refalrts::link_brackets( context[43], context[46] );
      refalrts::link_brackets( context[41], context[24] );
      refalrts::link_brackets( context[18], context[40] );
      refalrts::link_brackets( context[19], context[39] );
      refalrts::push_stack( context[37] );
      refalrts::push_stack( context[35] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[26], context[32] );
      res = refalrts::splice_evar( res, context[51], context[53] );
      res = refalrts::splice_evar( res, context[5], context[6] );
      res = refalrts::splice_evar( res, context[43], context[50] );
      res = refalrts::splice_evar( res, context[30], context[7] );
      res = refalrts::splice_evar( res, context[38], context[42] );
      res = refalrts::splice_evar( res, context[27], context[28] );
      res = refalrts::splice_evar( res, context[18], context[25] );
      res = refalrts::splice_evar( res, context[14], context[15] );
      res = refalrts::splice_evar( res, context[37], context[37] );
      res = refalrts::splice_evar( res, context[13], context[13] );
      res = refalrts::splice_evar( res, context[35], context[36] );
      refalrts::use( res );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[14], context[15], context[2], context[3] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & DoGenPattern/4 s.ContextOffset#1/13 e.Ranges_B#1/14 (/18 # Junk/20 e.Junk#1/16 )/19 (/23 # Range/25 s.Num#1/26 (/29 # TkVariable/31 't'/32 e.Index#1/27 )/30 e.Range#1/21 )/24 e.Ranges_E#1/33 (/11 e.Vars#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_right( context[9], context[10], context[2], context[3] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    // closed e.Vars#1 as range 9
    // closed e.Commands#1 as range 5
    if( ! refalrts::svar_left( context[13], context[2], context[3] ) )
      continue;
    context[14] = 0;
    context[15] = 0;
    refalrts::start_e_loop();
    do {
      context[33] = context[2];
      context[34] = context[3];
      context[16] = 0;
      context[17] = 0;
      context[18] = refalrts::brackets_left( context[16], context[17], context[33], context[34] );
      if( ! context[18] )
        continue;
      refalrts::bracket_pointers(context[18], context[19]);
      context[20] = refalrts::ident_left(  & ident_Junk<int>::name, context[16], context[17] );
      if( ! context[20] )
        continue;
      context[21] = 0;
      context[22] = 0;
      context[23] = refalrts::brackets_left( context[21], context[22], context[33], context[34] );
      if( ! context[23] )
        continue;
      refalrts::bracket_pointers(context[23], context[24]);
      context[25] = refalrts::ident_left(  & ident_Range<int>::name, context[21], context[22] );
      if( ! context[25] )
        continue;
      // closed e.Junk#1 as range 16
      // closed e.Ranges_E#1 as range 2
      if( ! refalrts::svar_left( context[26], context[21], context[22] ) )
        continue;
      context[27] = 0;
      context[28] = 0;
      context[29] = refalrts::brackets_left( context[27], context[28], context[21], context[22] );
      if( ! context[29] )
        continue;
      refalrts::bracket_pointers(context[29], context[30]);
      context[31] = refalrts::ident_left(  & ident_TkVariable<int>::name, context[27], context[28] );
      if( ! context[31] )
        continue;
      context[32] = refalrts::char_left( 't', context[27], context[28] );
      if( ! context[32] )
        continue;
      // closed e.Index#1 as range 27
      // closed e.Range#1 as range 21

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenPattern/4 } </35 & Inc2/36 Tile{ AsIs: s.ContextOffset#1/13 } >/37 Tile{ AsIs: e.Ranges_B#1/14 } Tile{ AsIs: (/18 AsIs: # Junk/20 AsIs: e.Junk#1/16 HalfReuse: (/19 HalfReuse: # TkVariable/23 HalfReuse: 't'/25 } Tile{ AsIs: e.Index#1/27 } s.ContextOffset#1/13/38 )/39 )/40 (/41 # Range/42 Tile{ HalfReuse: s.Num1 #26/30 AsIs: e.Range#1/21 AsIs: )/24 AsIs: e.Ranges_E#1/33 AsIs: (/11 AsIs: e.Vars#1/9 HalfReuse: (/12 HalfReuse: 't'/7 } (/43 e.Index#1/27/44 )/46 s.ContextOffset#1/13/47 )/48 )/49 (/50 Tile{ AsIs: e.Commands#1/5 } (/51 # CmdVarSave/52 # AlgLeft/53 Tile{ AsIs: s.Num#1/26 HalfReuse: 't'/29 HalfReuse: s.ContextOffset1 #13/31 HalfReuse: )/32 } Tile{ AsIs: )/8 AsIs: >/1 ]] }
      if( ! refalrts::alloc_open_call( context[35] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[36], Inc2, "Inc2" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[37] ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[38], context[13]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[39] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[40] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[41] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[42], & ident_Range<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[43] ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_evar(context[44], context[45], context[27], context[28]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[46] ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[47], context[13]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[48] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[49] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[50] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[51] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[52], & ident_CmdVarSave<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[53], & ident_AlgLeft<int>::name ) )
        return refalrts::cNoMemory;
      refalrts::reinit_open_bracket( context[19] );
      refalrts::reinit_ident( context[23], & ident_TkVariable<int>::name );
      refalrts::reinit_char( context[25], 't' );
      refalrts::reinit_svar( context[30], context[26] );
      refalrts::reinit_open_bracket( context[12] );
      refalrts::reinit_char( context[7], 't' );
      refalrts::reinit_char( context[29], 't' );
      refalrts::reinit_svar( context[31], context[13] );
      refalrts::reinit_close_bracket( context[32] );
      refalrts::push_stack( context[1] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[50], context[8] );
      refalrts::link_brackets( context[51], context[32] );
      refalrts::link_brackets( context[11], context[49] );
      refalrts::link_brackets( context[12], context[48] );
      refalrts::link_brackets( context[43], context[46] );
      refalrts::link_brackets( context[41], context[24] );
      refalrts::link_brackets( context[18], context[40] );
      refalrts::link_brackets( context[19], context[39] );
      refalrts::push_stack( context[37] );
      refalrts::push_stack( context[35] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[26], context[32] );
      res = refalrts::splice_evar( res, context[51], context[53] );
      res = refalrts::splice_evar( res, context[5], context[6] );
      res = refalrts::splice_evar( res, context[43], context[50] );
      res = refalrts::splice_evar( res, context[30], context[7] );
      res = refalrts::splice_evar( res, context[38], context[42] );
      res = refalrts::splice_evar( res, context[27], context[28] );
      res = refalrts::splice_evar( res, context[18], context[25] );
      res = refalrts::splice_evar( res, context[14], context[15] );
      res = refalrts::splice_evar( res, context[37], context[37] );
      res = refalrts::splice_evar( res, context[13], context[13] );
      res = refalrts::splice_evar( res, context[35], context[36] );
      refalrts::use( res );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[14], context[15], context[2], context[3] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & DoGenPattern/4 s.ContextOffset#1/13 e.Ranges_B#1/14 (/18 # Range/20 s.Num#1/32 e.Range#1/16 (/28 # TkVariable/30 's'/31 e.Index#1/26 )/29 )/19 (/23 # Junk/25 e.Junk#1/21 )/24 e.Ranges_E#1/33 (/11 e.Vars#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_right( context[9], context[10], context[2], context[3] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    // closed e.Vars#1 as range 9
    // closed e.Commands#1 as range 5
    if( ! refalrts::svar_left( context[13], context[2], context[3] ) )
      continue;
    context[14] = 0;
    context[15] = 0;
    refalrts::start_e_loop();
    do {
      context[33] = context[2];
      context[34] = context[3];
      context[16] = 0;
      context[17] = 0;
      context[18] = refalrts::brackets_left( context[16], context[17], context[33], context[34] );
      if( ! context[18] )
        continue;
      refalrts::bracket_pointers(context[18], context[19]);
      context[20] = refalrts::ident_left(  & ident_Range<int>::name, context[16], context[17] );
      if( ! context[20] )
        continue;
      context[21] = 0;
      context[22] = 0;
      context[23] = refalrts::brackets_left( context[21], context[22], context[33], context[34] );
      if( ! context[23] )
        continue;
      refalrts::bracket_pointers(context[23], context[24]);
      context[25] = refalrts::ident_left(  & ident_Junk<int>::name, context[21], context[22] );
      if( ! context[25] )
        continue;
      context[26] = 0;
      context[27] = 0;
      context[28] = refalrts::brackets_right( context[26], context[27], context[16], context[17] );
      if( ! context[28] )
        continue;
      refalrts::bracket_pointers(context[28], context[29]);
      context[30] = refalrts::ident_left(  & ident_TkVariable<int>::name, context[26], context[27] );
      if( ! context[30] )
        continue;
      context[31] = refalrts::char_left( 's', context[26], context[27] );
      if( ! context[31] )
        continue;
      // closed e.Index#1 as range 26
      // closed e.Junk#1 as range 21
      // closed e.Ranges_E#1 as range 2
      if( ! refalrts::svar_left( context[32], context[16], context[17] ) )
        continue;
      // closed e.Range#1 as range 16

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenPattern/4 } </35 & Inc/36 Tile{ AsIs: s.ContextOffset#1/13 } >/37 Tile{ AsIs: e.Ranges_B#1/14 } Tile{ AsIs: (/18 AsIs: # Range/20 AsIs: s.Num#1/32 AsIs: e.Range#1/16 HalfReuse: )/28 HalfReuse: (/30 HalfReuse: # Junk/31 } (/38 # TkVariable/39 's'/40 Tile{ AsIs: e.Index#1/26 } Tile{ HalfReuse: s.ContextOffset1 #13/23 HalfReuse: )/25 AsIs: e.Junk#1/21 AsIs: )/24 AsIs: e.Ranges_E#1/33 AsIs: (/11 AsIs: e.Vars#1/9 HalfReuse: (/12 HalfReuse: 's'/7 } (/41 e.Index#1/26/42 )/44 s.ContextOffset#1/13/45 Tile{ AsIs: )/29 AsIs: )/19 } (/46 Tile{ AsIs: e.Commands#1/5 } (/47 # CmdVar/48 # AlgRight/49 s.Num#1/32/50 's'/51 s.ContextOffset#1/13/52 )/53 Tile{ AsIs: )/8 AsIs: >/1 ]] }
      if( ! refalrts::alloc_open_call( context[35] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[36], Inc, "Inc" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[37] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[38] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[39], & ident_TkVariable<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[40], 's' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[41] ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_evar(context[42], context[43], context[26], context[27]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[44] ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[45], context[13]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[46] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[47] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[48], & ident_CmdVar<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[49], & ident_AlgRight<int>::name ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[50], context[32]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[51], 's' ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[52], context[13]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[53] ) )
        return refalrts::cNoMemory;
      refalrts::reinit_close_bracket( context[28] );
      refalrts::reinit_open_bracket( context[30] );
      refalrts::reinit_ident( context[31], & ident_Junk<int>::name );
      refalrts::reinit_svar( context[23], context[13] );
      refalrts::reinit_close_bracket( context[25] );
      refalrts::reinit_open_bracket( context[12] );
      refalrts::reinit_char( context[7], 's' );
      refalrts::push_stack( context[1] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[46], context[8] );
      refalrts::link_brackets( context[47], context[53] );
      refalrts::link_brackets( context[11], context[19] );
      refalrts::link_brackets( context[12], context[29] );
      refalrts::link_brackets( context[41], context[44] );
      refalrts::link_brackets( context[30], context[24] );
      refalrts::link_brackets( context[38], context[25] );
      refalrts::link_brackets( context[18], context[28] );
      refalrts::push_stack( context[37] );
      refalrts::push_stack( context[35] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[47], context[53] );
      res = refalrts::splice_evar( res, context[5], context[6] );
      res = refalrts::splice_evar( res, context[46], context[46] );
      res = refalrts::splice_evar( res, context[29], context[19] );
      res = refalrts::splice_evar( res, context[41], context[45] );
      res = refalrts::splice_evar( res, context[23], context[7] );
      res = refalrts::splice_evar( res, context[26], context[27] );
      res = refalrts::splice_evar( res, context[38], context[40] );
      res = refalrts::splice_evar( res, context[18], context[31] );
      res = refalrts::splice_evar( res, context[14], context[15] );
      res = refalrts::splice_evar( res, context[37], context[37] );
      res = refalrts::splice_evar( res, context[13], context[13] );
      res = refalrts::splice_evar( res, context[35], context[36] );
      refalrts::use( res );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[14], context[15], context[2], context[3] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & DoGenPattern/4 s.ContextOffset#1/13 e.Ranges_B#1/14 (/18 # Range/20 s.Num#1/32 e.Range#1/16 (/28 # TkVariable/30 't'/31 e.Index#1/26 )/29 )/19 (/23 # Junk/25 e.Junk#1/21 )/24 e.Ranges_E#1/33 (/11 e.Vars#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_right( context[9], context[10], context[2], context[3] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    // closed e.Vars#1 as range 9
    // closed e.Commands#1 as range 5
    if( ! refalrts::svar_left( context[13], context[2], context[3] ) )
      continue;
    context[14] = 0;
    context[15] = 0;
    refalrts::start_e_loop();
    do {
      context[33] = context[2];
      context[34] = context[3];
      context[16] = 0;
      context[17] = 0;
      context[18] = refalrts::brackets_left( context[16], context[17], context[33], context[34] );
      if( ! context[18] )
        continue;
      refalrts::bracket_pointers(context[18], context[19]);
      context[20] = refalrts::ident_left(  & ident_Range<int>::name, context[16], context[17] );
      if( ! context[20] )
        continue;
      context[21] = 0;
      context[22] = 0;
      context[23] = refalrts::brackets_left( context[21], context[22], context[33], context[34] );
      if( ! context[23] )
        continue;
      refalrts::bracket_pointers(context[23], context[24]);
      context[25] = refalrts::ident_left(  & ident_Junk<int>::name, context[21], context[22] );
      if( ! context[25] )
        continue;
      context[26] = 0;
      context[27] = 0;
      context[28] = refalrts::brackets_right( context[26], context[27], context[16], context[17] );
      if( ! context[28] )
        continue;
      refalrts::bracket_pointers(context[28], context[29]);
      context[30] = refalrts::ident_left(  & ident_TkVariable<int>::name, context[26], context[27] );
      if( ! context[30] )
        continue;
      context[31] = refalrts::char_left( 't', context[26], context[27] );
      if( ! context[31] )
        continue;
      // closed e.Index#1 as range 26
      // closed e.Junk#1 as range 21
      // closed e.Ranges_E#1 as range 2
      if( ! refalrts::svar_left( context[32], context[16], context[17] ) )
        continue;
      // closed e.Range#1 as range 16

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenPattern/4 } </35 & Inc2/36 Tile{ AsIs: s.ContextOffset#1/13 } >/37 Tile{ AsIs: e.Ranges_B#1/14 } Tile{ AsIs: (/18 AsIs: # Range/20 AsIs: s.Num#1/32 AsIs: e.Range#1/16 HalfReuse: )/28 HalfReuse: (/30 HalfReuse: # Junk/31 } (/38 # TkVariable/39 't'/40 Tile{ AsIs: e.Index#1/26 } Tile{ HalfReuse: s.ContextOffset1 #13/23 HalfReuse: )/25 AsIs: e.Junk#1/21 AsIs: )/24 AsIs: e.Ranges_E#1/33 AsIs: (/11 AsIs: e.Vars#1/9 HalfReuse: (/12 HalfReuse: 't'/7 } (/41 e.Index#1/26/42 )/44 s.ContextOffset#1/13/45 Tile{ AsIs: )/29 AsIs: )/19 } (/46 Tile{ AsIs: e.Commands#1/5 } (/47 # CmdVarSave/48 # AlgRight/49 s.Num#1/32/50 't'/51 s.ContextOffset#1/13/52 )/53 Tile{ AsIs: )/8 AsIs: >/1 ]] }
      if( ! refalrts::alloc_open_call( context[35] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[36], Inc2, "Inc2" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[37] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[38] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[39], & ident_TkVariable<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[40], 't' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[41] ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_evar(context[42], context[43], context[26], context[27]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[44] ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[45], context[13]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[46] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[47] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[48], & ident_CmdVarSave<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[49], & ident_AlgRight<int>::name ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[50], context[32]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[51], 't' ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[52], context[13]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[53] ) )
        return refalrts::cNoMemory;
      refalrts::reinit_close_bracket( context[28] );
      refalrts::reinit_open_bracket( context[30] );
      refalrts::reinit_ident( context[31], & ident_Junk<int>::name );
      refalrts::reinit_svar( context[23], context[13] );
      refalrts::reinit_close_bracket( context[25] );
      refalrts::reinit_open_bracket( context[12] );
      refalrts::reinit_char( context[7], 't' );
      refalrts::push_stack( context[1] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[46], context[8] );
      refalrts::link_brackets( context[47], context[53] );
      refalrts::link_brackets( context[11], context[19] );
      refalrts::link_brackets( context[12], context[29] );
      refalrts::link_brackets( context[41], context[44] );
      refalrts::link_brackets( context[30], context[24] );
      refalrts::link_brackets( context[38], context[25] );
      refalrts::link_brackets( context[18], context[28] );
      refalrts::push_stack( context[37] );
      refalrts::push_stack( context[35] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[47], context[53] );
      res = refalrts::splice_evar( res, context[5], context[6] );
      res = refalrts::splice_evar( res, context[46], context[46] );
      res = refalrts::splice_evar( res, context[29], context[19] );
      res = refalrts::splice_evar( res, context[41], context[45] );
      res = refalrts::splice_evar( res, context[23], context[7] );
      res = refalrts::splice_evar( res, context[26], context[27] );
      res = refalrts::splice_evar( res, context[38], context[40] );
      res = refalrts::splice_evar( res, context[18], context[31] );
      res = refalrts::splice_evar( res, context[14], context[15] );
      res = refalrts::splice_evar( res, context[37], context[37] );
      res = refalrts::splice_evar( res, context[13], context[13] );
      res = refalrts::splice_evar( res, context[35], context[36] );
      refalrts::use( res );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[14], context[15], context[2], context[3] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & DoGenPattern/4 s.ContextOffset#1/13 e.Ranges_B#1/14 (/18 # Junk/20 e.Junk#1/16 )/19 (/23 # Range/25 s.Num#1/26 (/29 # TkVariable/31 'e'/32 e.Index#1/27 )/30 e.Range#1/21 )/24 e.Ranges_E#1/33 (/11 e.Vars#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_right( context[9], context[10], context[2], context[3] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    // closed e.Vars#1 as range 9
    // closed e.Commands#1 as range 5
    if( ! refalrts::svar_left( context[13], context[2], context[3] ) )
      continue;
    context[14] = 0;
    context[15] = 0;
    refalrts::start_e_loop();
    do {
      context[33] = context[2];
      context[34] = context[3];
      context[16] = 0;
      context[17] = 0;
      context[18] = refalrts::brackets_left( context[16], context[17], context[33], context[34] );
      if( ! context[18] )
        continue;
      refalrts::bracket_pointers(context[18], context[19]);
      context[20] = refalrts::ident_left(  & ident_Junk<int>::name, context[16], context[17] );
      if( ! context[20] )
        continue;
      context[21] = 0;
      context[22] = 0;
      context[23] = refalrts::brackets_left( context[21], context[22], context[33], context[34] );
      if( ! context[23] )
        continue;
      refalrts::bracket_pointers(context[23], context[24]);
      context[25] = refalrts::ident_left(  & ident_Range<int>::name, context[21], context[22] );
      if( ! context[25] )
        continue;
      // closed e.Junk#1 as range 16
      // closed e.Ranges_E#1 as range 2
      if( ! refalrts::svar_left( context[26], context[21], context[22] ) )
        continue;
      context[27] = 0;
      context[28] = 0;
      context[29] = refalrts::brackets_left( context[27], context[28], context[21], context[22] );
      if( ! context[29] )
        continue;
      refalrts::bracket_pointers(context[29], context[30]);
      context[31] = refalrts::ident_left(  & ident_TkVariable<int>::name, context[27], context[28] );
      if( ! context[31] )
        continue;
      context[32] = refalrts::char_left( 'e', context[27], context[28] );
      if( ! context[32] )
        continue;
      // closed e.Index#1 as range 27
      // closed e.Range#1 as range 21

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenPattern/4 } </35 & Inc2/36 Tile{ AsIs: s.ContextOffset#1/13 } >/37 Tile{ AsIs: e.Ranges_B#1/14 } Tile{ AsIs: (/18 AsIs: # Junk/20 AsIs: e.Junk#1/16 HalfReuse: (/19 HalfReuse: # TkVariable/23 HalfReuse: 'e'/25 } Tile{ AsIs: e.Index#1/27 } s.ContextOffset#1/13/38 )/39 )/40 (/41 # Range/42 Tile{ HalfReuse: s.Num1 #26/30 AsIs: e.Range#1/21 AsIs: )/24 AsIs: e.Ranges_E#1/33 AsIs: (/11 AsIs: e.Vars#1/9 HalfReuse: (/12 HalfReuse: 'e'/7 } (/43 e.Index#1/27/44 )/46 s.ContextOffset#1/13/47 )/48 )/49 (/50 Tile{ AsIs: e.Commands#1/5 } Tile{ AsIs: (/29 Reuse: # CmdOpenedE/31 HalfReuse: # AlgLeft/32 } Tile{ AsIs: s.Num#1/26 } s.ContextOffset#1/13/51 )/52 Tile{ AsIs: )/8 AsIs: >/1 ]] }
      if( ! refalrts::alloc_open_call( context[35] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[36], Inc2, "Inc2" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[37] ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[38], context[13]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[39] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[40] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[41] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[42], & ident_Range<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[43] ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_evar(context[44], context[45], context[27], context[28]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[46] ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[47], context[13]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[48] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[49] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[50] ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[51], context[13]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[52] ) )
        return refalrts::cNoMemory;
      refalrts::reinit_open_bracket( context[19] );
      refalrts::reinit_ident( context[23], & ident_TkVariable<int>::name );
      refalrts::reinit_char( context[25], 'e' );
      refalrts::reinit_svar( context[30], context[26] );
      refalrts::reinit_open_bracket( context[12] );
      refalrts::reinit_char( context[7], 'e' );
      refalrts::update_ident( context[31], & ident_CmdOpenedE<int>::name );
      refalrts::reinit_ident( context[32], & ident_AlgLeft<int>::name );
      refalrts::push_stack( context[1] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[50], context[8] );
      refalrts::link_brackets( context[29], context[52] );
      refalrts::link_brackets( context[11], context[49] );
      refalrts::link_brackets( context[12], context[48] );
      refalrts::link_brackets( context[43], context[46] );
      refalrts::link_brackets( context[41], context[24] );
      refalrts::link_brackets( context[18], context[40] );
      refalrts::link_brackets( context[19], context[39] );
      refalrts::push_stack( context[37] );
      refalrts::push_stack( context[35] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[51], context[52] );
      res = refalrts::splice_evar( res, context[26], context[26] );
      res = refalrts::splice_evar( res, context[29], context[32] );
      res = refalrts::splice_evar( res, context[5], context[6] );
      res = refalrts::splice_evar( res, context[43], context[50] );
      res = refalrts::splice_evar( res, context[30], context[7] );
      res = refalrts::splice_evar( res, context[38], context[42] );
      res = refalrts::splice_evar( res, context[27], context[28] );
      res = refalrts::splice_evar( res, context[18], context[25] );
      res = refalrts::splice_evar( res, context[14], context[15] );
      res = refalrts::splice_evar( res, context[37], context[37] );
      res = refalrts::splice_evar( res, context[13], context[13] );
      res = refalrts::splice_evar( res, context[35], context[36] );
      refalrts::use( res );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[14], context[15], context[2], context[3] ) );
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & DoGenPattern/4 s.ContextOffset#1/18 (/15 # Junk/17 e.MarkedPattern#1/13 )/16 (/11 e.Vars#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  context[9] = 0;
  context[10] = 0;
  context[11] = refalrts::brackets_right( context[9], context[10], context[2], context[3] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[11], context[12]);
  context[13] = 0;
  context[14] = 0;
  context[15] = refalrts::brackets_right( context[13], context[14], context[2], context[3] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[15], context[16]);
  context[17] = refalrts::ident_left(  & ident_Junk<int>::name, context[13], context[14] );
  if( ! context[17] )
    return refalrts::cRecognitionImpossible;
  // closed e.MarkedPattern#1 as range 13
  // closed e.Vars#1 as range 9
  // closed e.Commands#1 as range 5
  if( ! refalrts::svar_left( context[18], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  </0 & DoGenPattern/4 s.ContextOffset#1/18 (/15 # Junk/17 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ HalfReuse: s.ContextOffset1 #18/16 AsIs: (/11 AsIs: e.Vars#1/9 AsIs: )/12 AsIs: (/7 } Tile{ AsIs: e.MarkedPattern#1/13 } Tile{ AsIs: )/8 } Tile{ AsIs: e.Commands#1/5 } Tile{ ]] }
  refalrts::reinit_svar( context[16], context[18] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[16], context[7] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult IncVarOffset(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 7 elems
  refalrts::Iter context[7];
  refalrts::zeros( context, 7 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & IncVarOffset/4 s.ContextOffset#1/6 'e'/5 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::char_right( 'e', context[2], context[3] );
    if( ! context[5] )
      continue;
    if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Inc2/4 AsIs: s.ContextOffset#1/6 HalfReuse: >/5 } Tile{ ]] }
    refalrts::update_name( context[4], Inc2, "Inc2" );
    refalrts::reinit_close_call( context[5] );
    refalrts::push_stack( context[5] );
    refalrts::push_stack( context[0] );
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
    // </0 & IncVarOffset/4 s.ContextOffset#1/6 't'/5 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::char_right( 't', context[2], context[3] );
    if( ! context[5] )
      continue;
    if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Inc2/4 AsIs: s.ContextOffset#1/6 HalfReuse: >/5 } Tile{ ]] }
    refalrts::update_name( context[4], Inc2, "Inc2" );
    refalrts::reinit_close_call( context[5] );
    refalrts::push_stack( context[5] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[5], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & IncVarOffset/4 s.ContextOffset#1/6 's'/5 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = refalrts::char_right( 's', context[2], context[3] );
  if( ! context[5] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Inc/4 AsIs: s.ContextOffset#1/6 HalfReuse: >/5 } Tile{ ]] }
  refalrts::update_name( context[4], Inc, "Inc" );
  refalrts::reinit_close_call( context[5] );
  refalrts::push_stack( context[5] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[5], res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult FreezeRanges(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 8 elems
  refalrts::Iter context[8];
  refalrts::zeros( context, 8 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & FreezeRanges/4 s.ContextTop#1/5 e.Commands#1/2 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Commands#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoFreezeRanges/4 AsIs: s.ContextTop#1/5 } (/6 )/7 Tile{ AsIs: e.Commands#1/2 } Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_bracket( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[7] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], DoFreezeRanges, "DoFreezeRanges" );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[6], context[7] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[6], context[7] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult lambda_DoFreezeRanges_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & lambda_DoFreezeRanges_0/4 s.ContextTop#1/5 (/8 e.Commands_E#1/6 )/9 e.CommandsBeforeEMatch#2/2 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[6] = 0;
  context[7] = 0;
  context[8] = refalrts::brackets_left( context[6], context[7], context[2], context[3] );
  if( ! context[8] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[8], context[9]);
  // closed e.Commands_E#1 as range 6
  // closed e.CommandsBeforeEMatch#2 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoFreezeRanges_MakeSavers/4 AsIs: s.ContextTop#1/5 AsIs: (/8 } </10 Tile{ HalfReuse: & ExtractRanges/9 AsIs: e.CommandsBeforeEMatch#2/2 AsIs: >/1 } )/11 (/12 e.CommandsBeforeEMatch#2/2/13 )/15 Tile{ AsIs: e.Commands_E#1/6 } >/16 Tile{ ]] }
  if( ! refalrts::alloc_open_call( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[12] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[13], context[14], context[2], context[3]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[16] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], DoFreezeRanges_MakeSavers, "DoFreezeRanges_MakeSavers" );
  refalrts::reinit_name( context[9], ExtractRanges, "ExtractRanges" );
  refalrts::push_stack( context[16] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[12], context[15] );
  refalrts::link_brackets( context[8], context[11] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[16], context[16] );
  res = refalrts::splice_evar( res, context[6], context[7] );
  res = refalrts::splice_evar( res, context[11], context[15] );
  res = refalrts::splice_evar( res, context[9], context[1] );
  res = refalrts::splice_evar( res, context[10], context[10] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult DoFreezeRanges(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 26 elems
  refalrts::Iter context[26];
  refalrts::zeros( context, 26 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & DoFreezeRanges/4 s.ContextTop#1/5 (/8 e.Scanned#1/6 )/9 e.Commands_B#1/10 (/14 # CmdOpenedE/16 # AlgLeft/17 s.Num#1/18 s.ContextOffset#1/19 )/15 e.Commands_E#1/20 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
      continue;
    context[6] = 0;
    context[7] = 0;
    context[8] = refalrts::brackets_left( context[6], context[7], context[2], context[3] );
    if( ! context[8] )
      continue;
    refalrts::bracket_pointers(context[8], context[9]);
    // closed e.Scanned#1 as range 6
    context[10] = 0;
    context[11] = 0;
    refalrts::start_e_loop();
    do {
      context[20] = context[2];
      context[21] = context[3];
      context[12] = 0;
      context[13] = 0;
      context[14] = refalrts::brackets_left( context[12], context[13], context[20], context[21] );
      if( ! context[14] )
        continue;
      refalrts::bracket_pointers(context[14], context[15]);
      context[16] = refalrts::ident_left(  & ident_CmdOpenedE<int>::name, context[12], context[13] );
      if( ! context[16] )
        continue;
      context[17] = refalrts::ident_left(  & ident_AlgLeft<int>::name, context[12], context[13] );
      if( ! context[17] )
        continue;
      // closed e.Commands_E#1 as range 2
      if( ! refalrts::svar_left( context[18], context[12], context[13] ) )
        continue;
      if( ! refalrts::svar_left( context[19], context[12], context[13] ) )
        continue;
      if( ! refalrts::empty_seq( context[12], context[13] ) )
        continue;

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
      //RESULT: Tile{ [[ } </22 & Fetch/23 Tile{ AsIs: e.Scanned#1/6 } Tile{ AsIs: e.Commands_B#1/10 } Tile{ AsIs: (/14 AsIs: # CmdOpenedE/16 AsIs: # AlgLeft/17 AsIs: s.Num#1/18 AsIs: s.ContextOffset#1/19 AsIs: )/15 } </24 Tile{ HalfReuse: & CreateClosure /0 Reuse: & lambda_DoFreezeRanges_0/4 AsIs: s.ContextTop#1/5 AsIs: (/8 } Tile{ AsIs: e.Commands_E#1/20 } Tile{ AsIs: )/9 } >/25 Tile{ AsIs: >/1 ]] }
      if( ! refalrts::alloc_open_call( context[22] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[23], Fetch, "Fetch" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_call( context[24] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[25] ) )
        return refalrts::cNoMemory;
      refalrts::reinit_name( context[0], refalrts::create_closure, "refalrts::create_closure" );
      refalrts::update_name( context[4], lambda_DoFreezeRanges_0, "lambda_DoFreezeRanges_0" );
      refalrts::push_stack( context[1] );
      refalrts::push_stack( context[22] );
      refalrts::push_stack( context[25] );
      refalrts::push_stack( context[24] );
      refalrts::link_brackets( context[8], context[9] );
      refalrts::link_brackets( context[14], context[15] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[25], context[25] );
      res = refalrts::splice_evar( res, context[9], context[9] );
      res = refalrts::splice_evar( res, context[20], context[21] );
      res = refalrts::splice_evar( res, context[0], context[8] );
      res = refalrts::splice_evar( res, context[24], context[24] );
      res = refalrts::splice_evar( res, context[14], context[15] );
      res = refalrts::splice_evar( res, context[10], context[11] );
      res = refalrts::splice_evar( res, context[6], context[7] );
      res = refalrts::splice_evar( res, context[22], context[23] );
      refalrts::use( res );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[10], context[11], context[2], context[3] ) );
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & DoFreezeRanges/4 s.ContextTop#1/5 (/8 e.Scanned#1/6 )/9 e.Commands#1/2 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[6] = 0;
  context[7] = 0;
  context[8] = refalrts::brackets_left( context[6], context[7], context[2], context[3] );
  if( ! context[8] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[8], context[9]);
  // closed e.Scanned#1 as range 6
  // closed e.Commands#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  & DoFreezeRanges/4 s.ContextTop#1/5 (/8 {REMOVED TILE}  )/9 {REMOVED TILE}  >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ HalfReuse: s.ContextTop1 #5/0 } Tile{ AsIs: e.Scanned#1/6 } Tile{ AsIs: e.Commands#1/2 } Tile{ ]] }
  refalrts::reinit_svar( context[0], context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[6], context[7] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[0], res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult lambda_DoFreezeRanges_MakeSavers_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_DoFreezeRanges_MakeSavers_0/4 s.Num#1/9 s.ContextTop#1/10 (/7 s.Command#2/11 s.Direction#2/12 s.Num#1/13 e.Info#2/5 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[11], context[5], context[6] ) )
      continue;
    if( ! refalrts::svar_left( context[12], context[5], context[6] ) )
      continue;
    if( ! refalrts::repeated_stvar_left( context[13], context[9], context[5], context[6] ) )
      continue;
    // closed e.Info#2 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & lambda_DoFreezeRanges_MakeSavers_0/4 s.Num#1/9 {REMOVED TILE}  {REMOVED TILE}  s.Num#1/13 {REMOVED TILE}  )/8 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: s.Command#2/11 AsIs: s.Direction#2/12 } Tile{ AsIs: s.ContextTop#1/10 } Tile{ AsIs: e.Info#2/5 } Tile{ HalfReuse: )/1 ]] }
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[7], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[10], context[10] );
    res = refalrts::splice_evar( res, context[7], context[12] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_DoFreezeRanges_MakeSavers_0/4 s.Num#1/10 s.ContextTop#1/12 (/7 # CmdRepeatedSave/9 s.Direction#2/13 s.OtherNum#2/14 'e'/15 s.NewOffset#2/16 s.Num#1/11 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_CmdRepeatedSave<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
      continue;
    if( ! refalrts::repeated_stvar_right( context[11], context[10], context[5], context[6] ) )
      continue;
    if( ! refalrts::svar_left( context[12], context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[13], context[5], context[6] ) )
      continue;
    if( ! refalrts::svar_left( context[14], context[5], context[6] ) )
      continue;
    context[15] = refalrts::char_left( 'e', context[5], context[6] );
    if( ! context[15] )
      continue;
    if( ! refalrts::svar_left( context[16], context[5], context[6] ) )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & lambda_DoFreezeRanges_MakeSavers_0/4 s.Num#1/10 s.ContextTop#1/12 {REMOVED TILE}  s.Num#1/11 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # CmdRepeatedSave/9 AsIs: s.Direction#2/13 AsIs: s.OtherNum#2/14 AsIs: 'e'/15 AsIs: s.NewOffset#2/16 } Tile{ HalfReuse: s.ContextTop1 #12/8 HalfReuse: )/1 ]] }
    refalrts::reinit_svar( context[8], context[12] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[7], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[7], context[16] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & lambda_DoFreezeRanges_MakeSavers_0/4 s.Num#1/9 s.ContextTop#1/10 (/7 s.Command#2/11 s.Direction#2/12 s.OtherNum#2/13 e.Info#2/5 )/8 >/1
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
  if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[11], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[12], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[13], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Info#2 as range 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  </0 & lambda_DoFreezeRanges_MakeSavers_0/4 s.Num#1/9 s.ContextTop#1/10 {REMOVED TILE}  >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: s.Command#2/11 AsIs: s.Direction#2/12 AsIs: s.OtherNum#2/13 AsIs: e.Info#2/5 AsIs: )/8 } Tile{ ]] }
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult DoFreezeRanges_MakeSavers(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 48 elems
  refalrts::Iter context[48];
  refalrts::zeros( context, 48 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & DoFreezeRanges_MakeSavers/4 s.ContextTop#1/5 (/8 e.FrozenRanges_B#1/14 s.Num#1/16 e.FrozenRanges_E#1/28 )/9 (/12 e.Scanned#1/10 )/13 e.Commands_B#1/17 (/21 s.Command#1/23 s.Direction#1/24 s.Num#1/25 e.Args#1/19 )/22 e.Commands_E#1/30 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
      continue;
    context[6] = 0;
    context[7] = 0;
    context[8] = refalrts::brackets_left( context[6], context[7], context[2], context[3] );
    if( ! context[8] )
      continue;
    refalrts::bracket_pointers(context[8], context[9]);
    context[10] = 0;
    context[11] = 0;
    context[12] = refalrts::brackets_left( context[10], context[11], context[2], context[3] );
    if( ! context[12] )
      continue;
    refalrts::bracket_pointers(context[12], context[13]);
    // closed e.Scanned#1 as range 10
    context[14] = 0;
    context[15] = 0;
    refalrts::start_e_loop();
    do {
      context[26] = context[2];
      context[27] = context[3];
      context[28] = context[6];
      context[29] = context[7];
      if( ! refalrts::svar_left( context[16], context[28], context[29] ) )
        continue;
      // closed e.FrozenRanges_E#1 as range 6
      context[17] = 0;
      context[18] = 0;
      refalrts::start_e_loop();
      do {
        context[30] = context[26];
        context[31] = context[27];
        context[19] = 0;
        context[20] = 0;
        context[21] = refalrts::brackets_left( context[19], context[20], context[30], context[31] );
        if( ! context[21] )
          continue;
        refalrts::bracket_pointers(context[21], context[22]);
        // closed e.Commands_E#1 as range 2
        if( ! refalrts::svar_left( context[23], context[19], context[20] ) )
          continue;
        if( ! refalrts::svar_left( context[24], context[19], context[20] ) )
          continue;
        if( ! refalrts::repeated_stvar_left( context[25], context[16], context[19], context[20] ) )
          continue;
        // closed e.Args#1 as range 19

        refalrts::reset_allocator();
        //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoFreezeRanges_MakeSavers/4 } </32 & Inc2/33 Tile{ AsIs: s.ContextTop#1/5 HalfReuse: >/8 } (/34 Tile{ AsIs: e.FrozenRanges_B#1/14 } Tile{ AsIs: e.FrozenRanges_E#1/28 } Tile{ AsIs: )/9 AsIs: (/12 } Tile{ AsIs: e.Scanned#1/10 } (/35 # CmdSave/36 Tile{ AsIs: s.Num#1/16 } s.ContextTop#1/5/37 )/38 )/39 </40 & Map/41 </42 & CreateClosure /43 & lambda_DoFreezeRanges_MakeSavers_0/44 s.Num#1/25/45 s.ContextTop#1/5/46 Tile{ HalfReuse: >/13 AsIs: e.Commands_B#1/17 AsIs: (/21 AsIs: s.Command#1/23 AsIs: s.Direction#1/24 AsIs: s.Num#1/25 AsIs: e.Args#1/19 AsIs: )/22 AsIs: e.Commands_E#1/30 AsIs: >/1 } >/47 Tile{ ]] }
        if( ! refalrts::alloc_open_call( context[32] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_name( context[33], Inc2, "Inc2" ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_open_bracket( context[34] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_open_bracket( context[35] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_ident( context[36], & ident_CmdSave<int>::name ) )
          return refalrts::cNoMemory;
        if (! refalrts::copy_stvar(context[37], context[5]))
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_bracket( context[38] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_bracket( context[39] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_open_call( context[40] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_name( context[41], Map, "Map" ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_open_call( context[42] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_name( context[43], refalrts::create_closure, "refalrts::create_closure" ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_name( context[44], lambda_DoFreezeRanges_MakeSavers_0, "lambda_DoFreezeRanges_MakeSavers_0" ) )
          return refalrts::cNoMemory;
        if (! refalrts::copy_stvar(context[45], context[25]))
          return refalrts::cNoMemory;
        if (! refalrts::copy_stvar(context[46], context[5]))
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_call( context[47] ) )
          return refalrts::cNoMemory;
        refalrts::reinit_close_call( context[8] );
        refalrts::reinit_close_call( context[13] );
        refalrts::push_stack( context[47] );
        refalrts::push_stack( context[0] );
        refalrts::push_stack( context[1] );
        refalrts::push_stack( context[40] );
        refalrts::link_brackets( context[21], context[22] );
        refalrts::push_stack( context[13] );
        refalrts::push_stack( context[42] );
        refalrts::link_brackets( context[12], context[39] );
        refalrts::link_brackets( context[35], context[38] );
        refalrts::link_brackets( context[34], context[9] );
        refalrts::push_stack( context[8] );
        refalrts::push_stack( context[32] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[47], context[47] );
        res = refalrts::splice_evar( res, context[13], context[1] );
        res = refalrts::splice_evar( res, context[37], context[46] );
        res = refalrts::splice_evar( res, context[16], context[16] );
        res = refalrts::splice_evar( res, context[35], context[36] );
        res = refalrts::splice_evar( res, context[10], context[11] );
        res = refalrts::splice_evar( res, context[9], context[12] );
        res = refalrts::splice_evar( res, context[28], context[29] );
        res = refalrts::splice_evar( res, context[14], context[15] );
        res = refalrts::splice_evar( res, context[34], context[34] );
        res = refalrts::splice_evar( res, context[5], context[8] );
        res = refalrts::splice_evar( res, context[32], context[33] );
        refalrts::use( res );
        return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
      } while ( refalrts::open_evar_advance( context[17], context[18], context[26], context[27] ) );
    } while ( refalrts::open_evar_advance( context[14], context[15], context[6], context[7] ) );
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & DoFreezeRanges_MakeSavers/4 s.ContextTop#1/5 (/8 e.UnusedFrozenRanges#1/6 )/9 (/12 e.Scanned#1/10 )/13 e.Commands#1/2 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[6] = 0;
  context[7] = 0;
  context[8] = refalrts::brackets_left( context[6], context[7], context[2], context[3] );
  if( ! context[8] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[8], context[9]);
  context[10] = 0;
  context[11] = 0;
  context[12] = refalrts::brackets_left( context[10], context[11], context[2], context[3] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[12], context[13]);
  // closed e.UnusedFrozenRanges#1 as range 6
  // closed e.Scanned#1 as range 10
  // closed e.Commands#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  s.ContextTop#1/5 (/8 e.UnusedFrozenRanges#1/6 {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoFreezeRanges/4 } Tile{ HalfReuse: s.ContextTop1 #5/9 AsIs: (/12 AsIs: e.Scanned#1/10 AsIs: )/13 AsIs: e.Commands#1/2 AsIs: >/1 ]] }
  refalrts::update_name( context[4], DoFreezeRanges, "DoFreezeRanges" );
  refalrts::reinit_svar( context[9], context[5] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[12], context[13] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[9];
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[4], res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult lambda_ExtractRanges_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_ExtractRanges_0/4 (/7 # CmdBracketsSave/9 s.Direction#2/10 s.BracketNum#2/11 s.InnerNum#2/12 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_CmdBracketsSave<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[10], context[5], context[6] ) )
      continue;
    if( ! refalrts::svar_left( context[11], context[5], context[6] ) )
      continue;
    if( ! refalrts::svar_left( context[12], context[5], context[6] ) )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & lambda_ExtractRanges_0/4 (/7 # CmdBracketsSave/9 s.Direction#2/10 {REMOVED TILE}  )/8 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: s.BracketNum#2/11 AsIs: s.InnerNum#2/12 } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[11], context[12] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_ExtractRanges_0/4 (/7 # CmdADTSave/9 s.Direction#2/10 s.BracketNum#2/11 s.InnerNum#2/12 e.Name#2/5 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_CmdADTSave<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[10], context[5], context[6] ) )
      continue;
    if( ! refalrts::svar_left( context[11], context[5], context[6] ) )
      continue;
    if( ! refalrts::svar_left( context[12], context[5], context[6] ) )
      continue;
    // closed e.Name#2 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & lambda_ExtractRanges_0/4 (/7 # CmdADTSave/9 s.Direction#2/10 {REMOVED TILE}  e.Name#2/5 )/8 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: s.BracketNum#2/11 AsIs: s.InnerNum#2/12 } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[11], context[12] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_ExtractRanges_0/4 (/7 # CmdCallSave/9 s.Direction#2/10 s.BracketNum#2/11 s.InnerNum#2/12 e.Name#2/5 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_CmdCallSave<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[10], context[5], context[6] ) )
      continue;
    if( ! refalrts::svar_left( context[11], context[5], context[6] ) )
      continue;
    if( ! refalrts::svar_left( context[12], context[5], context[6] ) )
      continue;
    // closed e.Name#2 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & lambda_ExtractRanges_0/4 (/7 # CmdCallSave/9 s.Direction#2/10 {REMOVED TILE}  e.Name#2/5 )/8 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: s.BracketNum#2/11 AsIs: s.InnerNum#2/12 } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[11], context[12] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_ExtractRanges_0/4 (/7 # CmdComment/9 e.Comment#2/5 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_CmdComment<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Comment#2 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & lambda_ExtractRanges_0/4 (/7 # CmdComment/9 e.Comment#2/5 )/8 >/1 {REMOVED TILE} 
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
  // </0 & lambda_ExtractRanges_0/4 (/7 s.Command#2/9 s.Direction#2/10 s.BracketNum#2/11 e.Info#2/5 )/8 >/1
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
  if( ! refalrts::svar_left( context[10], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[11], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Info#2 as range 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  & lambda_ExtractRanges_0/4 (/7 s.Command#2/9 s.Direction#2/10 s.BracketNum#2/11 e.Info#2/5 )/8 >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ HalfReuse: s.BracketNum2 #11/0 } Tile{ ]] }
  refalrts::reinit_svar( context[0], context[11] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[0], res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult ExtractRanges(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & ExtractRanges/4 e.Commands#1/2 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Commands#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } </5 & UniqueRanges/6 </7 Tile{ HalfReuse: & Map/0 Reuse: & lambda_ExtractRanges_0/4 AsIs: e.Commands#1/2 AsIs: >/1 } >/8 Tile{ ]] }
  if( ! refalrts::alloc_open_call( context[5] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[6], UniqueRanges, "UniqueRanges" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[8] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_name( context[0], Map, "Map" );
  refalrts::update_name( context[4], lambda_ExtractRanges_0, "lambda_ExtractRanges_0" );
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

static refalrts::FnResult UniqueRanges(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & UniqueRanges/4 e.Unique#1/5 s.Repeated#1/7 e.Middle#1/8 s.Repeated#1/10 e.Rest#1/13 >/1
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
        // closed e.Rest#1 as range 2

        refalrts::reset_allocator();
        //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  s.Repeated#1/10 {REMOVED TILE}  {REMOVED TILE} 
        //RESULT: Tile{ [[ } Tile{ AsIs: e.Unique#1/5 } Tile{ AsIs: </0 AsIs: & UniqueRanges/4 } Tile{ AsIs: s.Repeated#1/7 } Tile{ AsIs: e.Middle#1/8 } Tile{ AsIs: e.Rest#1/13 } Tile{ AsIs: >/1 ]] }
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
  // </0 & UniqueRanges/4 e.Unique#1/2 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Unique#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  </0 & UniqueRanges/4 {REMOVED TILE}  >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Unique#1/2 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult TextFromExpr(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & TextFromExpr/4 (/7 # TkOpenBracket/9 s.ContextOffset#1/10 )/8 e.Tail#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_TkOpenBracket<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    // closed e.Tail#1 as range 2
    if( ! refalrts::svar_left( context[10], context[5], context[6] ) )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: ' '/0 HalfReuse: '('/4 HalfReuse: </7 HalfReuse: & Offset/9 AsIs: s.ContextOffset#1/10 HalfReuse: >/8 } </11 & TextFromExpr/12 Tile{ AsIs: e.Tail#1/2 } Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_call( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[12], TextFromExpr, "TextFromExpr" ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[0], ' ' );
    refalrts::reinit_char( context[4], '(' );
    refalrts::reinit_open_call( context[7] );
    refalrts::reinit_name( context[9], Offset, "Offset" );
    refalrts::reinit_close_call( context[8] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[11] );
    refalrts::push_stack( context[8] );
    refalrts::push_stack( context[7] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & TextFromExpr/4 (/7 # TkCloseBracket/9 s.ContextOffset#1/10 )/8 e.Tail#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_TkCloseBracket<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    // closed e.Tail#1 as range 2
    if( ! refalrts::svar_left( context[10], context[5], context[6] ) )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: ' '/0 HalfReuse: ')'/4 HalfReuse: </7 HalfReuse: & Offset/9 AsIs: s.ContextOffset#1/10 HalfReuse: >/8 } </11 & TextFromExpr/12 Tile{ AsIs: e.Tail#1/2 } Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_call( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[12], TextFromExpr, "TextFromExpr" ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[0], ' ' );
    refalrts::reinit_char( context[4], ')' );
    refalrts::reinit_open_call( context[7] );
    refalrts::reinit_name( context[9], Offset, "Offset" );
    refalrts::reinit_close_call( context[8] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[11] );
    refalrts::push_stack( context[8] );
    refalrts::push_stack( context[7] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & TextFromExpr/4 (/7 # TkOpenCall/9 s.ContextOffset#1/10 )/8 e.Tail#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_TkOpenCall<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    // closed e.Tail#1 as range 2
    if( ! refalrts::svar_left( context[10], context[5], context[6] ) )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: ' '/0 HalfReuse: '<'/4 HalfReuse: </7 HalfReuse: & Offset/9 AsIs: s.ContextOffset#1/10 HalfReuse: >/8 } </11 & TextFromExpr/12 Tile{ AsIs: e.Tail#1/2 } Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_call( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[12], TextFromExpr, "TextFromExpr" ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[0], ' ' );
    refalrts::reinit_char( context[4], '<' );
    refalrts::reinit_open_call( context[7] );
    refalrts::reinit_name( context[9], Offset, "Offset" );
    refalrts::reinit_close_call( context[8] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[11] );
    refalrts::push_stack( context[8] );
    refalrts::push_stack( context[7] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & TextFromExpr/4 (/7 # TkCloseCall/9 s.ContextOffset#1/10 )/8 e.Tail#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_TkCloseCall<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    // closed e.Tail#1 as range 2
    if( ! refalrts::svar_left( context[10], context[5], context[6] ) )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: ' '/0 HalfReuse: '>'/4 HalfReuse: </7 HalfReuse: & Offset/9 AsIs: s.ContextOffset#1/10 HalfReuse: >/8 } </11 & TextFromExpr/12 Tile{ AsIs: e.Tail#1/2 } Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_call( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[12], TextFromExpr, "TextFromExpr" ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[0], ' ' );
    refalrts::reinit_char( context[4], '>' );
    refalrts::reinit_open_call( context[7] );
    refalrts::reinit_name( context[9], Offset, "Offset" );
    refalrts::reinit_close_call( context[8] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[11] );
    refalrts::push_stack( context[8] );
    refalrts::push_stack( context[7] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & TextFromExpr/4 (/7 # TkOpenADT/9 s.ContextOffset#1/15 )/8 (/12 # TkName/14 e.Name#1/10 s.NameOffset#1/16 )/13 e.Tail#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_TkOpenADT<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    context[10] = 0;
    context[11] = 0;
    context[12] = refalrts::brackets_left( context[10], context[11], context[2], context[3] );
    if( ! context[12] )
      continue;
    refalrts::bracket_pointers(context[12], context[13]);
    context[14] = refalrts::ident_left(  & ident_TkName<int>::name, context[10], context[11] );
    if( ! context[14] )
      continue;
    // closed e.Tail#1 as range 2
    if( ! refalrts::svar_left( context[15], context[5], context[6] ) )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    if( ! refalrts::svar_right( context[16], context[10], context[11] ) )
      continue;
    // closed e.Name#1 as range 10

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: ' '/0 HalfReuse: '['/4 HalfReuse: </7 HalfReuse: & Offset/9 AsIs: s.ContextOffset#1/15 HalfReuse: >/8 } Tile{ AsIs: e.Name#1/10 } Tile{ HalfReuse: </12 HalfReuse: & Offset/14 } Tile{ AsIs: s.NameOffset#1/16 } >/17 </18 Tile{ HalfReuse: & TextFromExpr/13 AsIs: e.Tail#1/2 AsIs: >/1 ]] }
    if( ! refalrts::alloc_close_call( context[17] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[18] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[0], ' ' );
    refalrts::reinit_char( context[4], '[' );
    refalrts::reinit_open_call( context[7] );
    refalrts::reinit_name( context[9], Offset, "Offset" );
    refalrts::reinit_close_call( context[8] );
    refalrts::reinit_open_call( context[12] );
    refalrts::reinit_name( context[14], Offset, "Offset" );
    refalrts::reinit_name( context[13], TextFromExpr, "TextFromExpr" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[18] );
    refalrts::push_stack( context[17] );
    refalrts::push_stack( context[12] );
    refalrts::push_stack( context[8] );
    refalrts::push_stack( context[7] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[13];
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[16], context[16] );
    res = refalrts::splice_evar( res, context[12], context[14] );
    res = refalrts::splice_evar( res, context[10], context[11] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & TextFromExpr/4 (/7 # TkOpenADT/9 s.ContextOffset#1/10 )/8 e.Tail#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_TkOpenADT<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    // closed e.Tail#1 as range 2
    if( ! refalrts::svar_left( context[10], context[5], context[6] ) )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: ' '/0 HalfReuse: '['/4 HalfReuse: </7 HalfReuse: & Offset/9 AsIs: s.ContextOffset#1/10 HalfReuse: >/8 } </11 & TextFromExpr/12 Tile{ AsIs: e.Tail#1/2 } Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_call( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[12], TextFromExpr, "TextFromExpr" ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[0], ' ' );
    refalrts::reinit_char( context[4], '[' );
    refalrts::reinit_open_call( context[7] );
    refalrts::reinit_name( context[9], Offset, "Offset" );
    refalrts::reinit_close_call( context[8] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[11] );
    refalrts::push_stack( context[8] );
    refalrts::push_stack( context[7] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & TextFromExpr/4 (/7 # TkCloseADT/9 s.ContextOffset#1/10 )/8 e.Tail#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_TkCloseADT<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    // closed e.Tail#1 as range 2
    if( ! refalrts::svar_left( context[10], context[5], context[6] ) )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: ' '/0 HalfReuse: ']'/4 HalfReuse: </7 HalfReuse: & Offset/9 AsIs: s.ContextOffset#1/10 HalfReuse: >/8 } </11 & TextFromExpr/12 Tile{ AsIs: e.Tail#1/2 } Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_call( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[12], TextFromExpr, "TextFromExpr" ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[0], ' ' );
    refalrts::reinit_char( context[4], ']' );
    refalrts::reinit_open_call( context[7] );
    refalrts::reinit_name( context[9], Offset, "Offset" );
    refalrts::reinit_close_call( context[8] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[11] );
    refalrts::push_stack( context[8] );
    refalrts::push_stack( context[7] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & TextFromExpr/4 (/7 # TkChar/9 s.Char#1/10 s.Offset#1/11 )/8 e.Tail#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_TkChar<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    // closed e.Tail#1 as range 2
    if( ! refalrts::svar_left( context[10], context[5], context[6] ) )
      continue;
    if( ! refalrts::svar_left( context[11], context[5], context[6] ) )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: ' '/0 HalfReuse: '\''/4 HalfReuse: </7 HalfReuse: & EscapeChar/9 AsIs: s.Char#1/10 } >/12 '\''/13 </14 & Offset/15 Tile{ AsIs: s.Offset#1/11 } >/16 </17 Tile{ HalfReuse: & TextFromExpr/8 AsIs: e.Tail#1/2 AsIs: >/1 ]] }
    if( ! refalrts::alloc_close_call( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[13], '\'' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[15], Offset, "Offset" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[17] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[0], ' ' );
    refalrts::reinit_char( context[4], '\'' );
    refalrts::reinit_open_call( context[7] );
    refalrts::reinit_name( context[9], EscapeChar, "EscapeChar" );
    refalrts::reinit_name( context[8], TextFromExpr, "TextFromExpr" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[17] );
    refalrts::push_stack( context[16] );
    refalrts::push_stack( context[14] );
    refalrts::push_stack( context[12] );
    refalrts::push_stack( context[7] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_evar( res, context[11], context[11] );
    res = refalrts::splice_evar( res, context[12], context[15] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & TextFromExpr/4 (/7 # TkNumber/9 s.Number#1/10 s.Offset#1/11 )/8 e.Tail#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_TkNumber<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    // closed e.Tail#1 as range 2
    if( ! refalrts::svar_left( context[10], context[5], context[6] ) )
      continue;
    if( ! refalrts::svar_left( context[11], context[5], context[6] ) )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  s.Number#1/10 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: ' '/0 HalfReuse: </4 HalfReuse: & StrFromInt/7 HalfReuse: s.Number1 #10/9 } >/12 </13 & Offset/14 Tile{ AsIs: s.Offset#1/11 } >/15 </16 Tile{ HalfReuse: & TextFromExpr/8 AsIs: e.Tail#1/2 AsIs: >/1 ]] }
    if( ! refalrts::alloc_close_call( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[14], Offset, "Offset" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[15] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[16] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[0], ' ' );
    refalrts::reinit_open_call( context[4] );
    refalrts::reinit_name( context[7], StrFromInt, "StrFromInt" );
    refalrts::reinit_svar( context[9], context[10] );
    refalrts::reinit_name( context[8], TextFromExpr, "TextFromExpr" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[16] );
    refalrts::push_stack( context[15] );
    refalrts::push_stack( context[13] );
    refalrts::push_stack( context[12] );
    refalrts::push_stack( context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[11], context[11] );
    res = refalrts::splice_evar( res, context[12], context[14] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[9], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & TextFromExpr/4 (/7 # TkName/9 e.Name#1/5 s.Offset#1/10 )/8 e.Tail#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_TkName<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    // closed e.Tail#1 as range 2
    if( ! refalrts::svar_right( context[10], context[5], context[6] ) )
      continue;
    // closed e.Name#1 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  s.Offset#1/10 {REMOVED TILE} 
    //RESULT: Tile{ [[ } ' '/11 '&'/12 ' '/13 Tile{ AsIs: e.Name#1/5 } Tile{ AsIs: </0 Reuse: & Offset/4 HalfReuse: s.Offset1 #10/7 HalfReuse: >/9 } </14 Tile{ HalfReuse: & TextFromExpr/8 AsIs: e.Tail#1/2 AsIs: >/1 ]] }
    if( ! refalrts::alloc_char( context[11], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[12], '&' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[13], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[14] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], Offset, "Offset" );
    refalrts::reinit_svar( context[7], context[10] );
    refalrts::reinit_close_call( context[9] );
    refalrts::reinit_name( context[8], TextFromExpr, "TextFromExpr" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[14] );
    refalrts::push_stack( context[9] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[14], context[14] );
    res = refalrts::splice_evar( res, context[0], context[9] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[11], context[13] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & TextFromExpr/4 (/7 # TkVariable/9 s.Mode#1/10 e.Index#1/5 s.Depth#1/12 s.Offset#1/11 )/8 e.Tail#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_TkVariable<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    // closed e.Tail#1 as range 2
    if( ! refalrts::svar_left( context[10], context[5], context[6] ) )
      continue;
    if( ! refalrts::svar_right( context[11], context[5], context[6] ) )
      continue;
    if( ! refalrts::svar_right( context[12], context[5], context[6] ) )
      continue;
    // closed e.Index#1 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: ' '/4 HalfReuse: </7 HalfReuse: & PrintVar/9 AsIs: s.Mode#1/10 AsIs: e.Index#1/5 AsIs: s.Depth#1/12 } >/13 Tile{ AsIs: </0 } & Offset/14 Tile{ AsIs: s.Offset#1/11 } >/15 </16 Tile{ HalfReuse: & TextFromExpr/8 AsIs: e.Tail#1/2 AsIs: >/1 ]] }
    if( ! refalrts::alloc_close_call( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[14], Offset, "Offset" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[15] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[16] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[4], ' ' );
    refalrts::reinit_open_call( context[7] );
    refalrts::reinit_name( context[9], PrintVar, "PrintVar" );
    refalrts::reinit_name( context[8], TextFromExpr, "TextFromExpr" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[16] );
    refalrts::push_stack( context[15] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[13] );
    refalrts::push_stack( context[7] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[11], context[11] );
    res = refalrts::splice_evar( res, context[14], context[14] );
    res = refalrts::splice_evar( res, context[0], context[0] );
    res = refalrts::splice_evar( res, context[13], context[13] );
    res = refalrts::splice_evar( res, context[4], context[12] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & TextFromExpr/4 (/7 # TkVariableCopy/9 s.Mode#1/10 e.Index#1/5 s.Depth#1/13 s.SampleOffset#1/12 s.CopyOffset#1/11 )/8 e.Tail#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_TkVariableCopy<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    // closed e.Tail#1 as range 2
    if( ! refalrts::svar_left( context[10], context[5], context[6] ) )
      continue;
    if( ! refalrts::svar_right( context[11], context[5], context[6] ) )
      continue;
    if( ! refalrts::svar_right( context[12], context[5], context[6] ) )
      continue;
    if( ! refalrts::svar_right( context[13], context[5], context[6] ) )
      continue;
    // closed e.Index#1 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: ' '/4 HalfReuse: </7 HalfReuse: & PrintVar/9 AsIs: s.Mode#1/10 AsIs: e.Index#1/5 AsIs: s.Depth#1/13 } >/14 Tile{ AsIs: </0 } & Offset/15 Tile{ AsIs: s.SampleOffset#1/12 } >/16 </17 & Offset/18 Tile{ AsIs: s.CopyOffset#1/11 } >/19 </20 Tile{ HalfReuse: & TextFromExpr/8 AsIs: e.Tail#1/2 AsIs: >/1 ]] }
    if( ! refalrts::alloc_close_call( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[15], Offset, "Offset" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[17] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[18], Offset, "Offset" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[19] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[20] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[4], ' ' );
    refalrts::reinit_open_call( context[7] );
    refalrts::reinit_name( context[9], PrintVar, "PrintVar" );
    refalrts::reinit_name( context[8], TextFromExpr, "TextFromExpr" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[20] );
    refalrts::push_stack( context[19] );
    refalrts::push_stack( context[17] );
    refalrts::push_stack( context[16] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[14] );
    refalrts::push_stack( context[7] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[19], context[20] );
    res = refalrts::splice_evar( res, context[11], context[11] );
    res = refalrts::splice_evar( res, context[16], context[18] );
    res = refalrts::splice_evar( res, context[12], context[12] );
    res = refalrts::splice_evar( res, context[15], context[15] );
    res = refalrts::splice_evar( res, context[0], context[0] );
    res = refalrts::splice_evar( res, context[14], context[14] );
    res = refalrts::splice_evar( res, context[4], context[13] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & TextFromExpr/4 (/7 # TkIdentifier/9 e.Name#1/5 s.Offset#1/10 )/8 e.Tail#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_TkIdentifier<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    // closed e.Tail#1 as range 2
    if( ! refalrts::svar_right( context[10], context[5], context[6] ) )
      continue;
    // closed e.Name#1 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  s.Offset#1/10 {REMOVED TILE} 
    //RESULT: Tile{ [[ } ' '/11 '#'/12 ' '/13 Tile{ AsIs: e.Name#1/5 } Tile{ AsIs: </0 Reuse: & Offset/4 HalfReuse: s.Offset1 #10/7 HalfReuse: >/9 } </14 Tile{ HalfReuse: & TextFromExpr/8 AsIs: e.Tail#1/2 AsIs: >/1 ]] }
    if( ! refalrts::alloc_char( context[11], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[12], '#' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[13], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[14] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], Offset, "Offset" );
    refalrts::reinit_svar( context[7], context[10] );
    refalrts::reinit_close_call( context[9] );
    refalrts::reinit_name( context[8], TextFromExpr, "TextFromExpr" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[14] );
    refalrts::push_stack( context[9] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[14], context[14] );
    res = refalrts::splice_evar( res, context[0], context[9] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[11], context[13] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & TextFromExpr/4 (/7 # Tile/9 e.SubRange#1/5 )/8 e.Tail#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_Tile<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    // closed e.SubRange#1 as range 5
    // closed e.Tail#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: ' '/0 HalfReuse: 'T'/4 HalfReuse: 'i'/7 HalfReuse: 'l'/9 } 'e'/10 '{'/11 </12 & TextFromExpr/13 Tile{ AsIs: e.SubRange#1/5 } >/14 ' '/15 '}'/16 </17 Tile{ HalfReuse: & TextFromExpr/8 AsIs: e.Tail#1/2 AsIs: >/1 ]] }
    if( ! refalrts::alloc_char( context[10], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[11], '{' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[13], TextFromExpr, "TextFromExpr" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[15], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[16], '}' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[17] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[0], ' ' );
    refalrts::reinit_char( context[4], 'T' );
    refalrts::reinit_char( context[7], 'i' );
    refalrts::reinit_char( context[9], 'l' );
    refalrts::reinit_name( context[8], TextFromExpr, "TextFromExpr" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[17] );
    refalrts::push_stack( context[14] );
    refalrts::push_stack( context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[14], context[17] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[10], context[13] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & TextFromExpr/4 (/7 # AsIs/9 e.SubRange#1/5 )/8 e.Tail#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_AsIs<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    // closed e.SubRange#1 as range 5
    // closed e.Tail#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: ' '/0 HalfReuse: 'A'/4 HalfReuse: 's'/7 HalfReuse: 'I'/9 } 's'/10 ':'/11 </12 & TextFromExpr/13 Tile{ AsIs: e.SubRange#1/5 } >/14 </15 Tile{ HalfReuse: & TextFromExpr/8 AsIs: e.Tail#1/2 AsIs: >/1 ]] }
    if( ! refalrts::alloc_char( context[10], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[11], ':' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[13], TextFromExpr, "TextFromExpr" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[15] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[0], ' ' );
    refalrts::reinit_char( context[4], 'A' );
    refalrts::reinit_char( context[7], 's' );
    refalrts::reinit_char( context[9], 'I' );
    refalrts::reinit_name( context[8], TextFromExpr, "TextFromExpr" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[15] );
    refalrts::push_stack( context[14] );
    refalrts::push_stack( context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[14], context[15] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[10], context[13] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & TextFromExpr/4 (/7 # Reuse/9 e.SubRange#1/5 )/8 e.Tail#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_Reuse<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    // closed e.SubRange#1 as range 5
    // closed e.Tail#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: ' '/0 HalfReuse: 'R'/4 HalfReuse: 'e'/7 HalfReuse: 'u'/9 } 's'/10 'e'/11 ':'/12 </13 & TextFromExpr/14 Tile{ AsIs: e.SubRange#1/5 } >/15 </16 Tile{ HalfReuse: & TextFromExpr/8 AsIs: e.Tail#1/2 AsIs: >/1 ]] }
    if( ! refalrts::alloc_char( context[10], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[11], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[12], ':' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[14], TextFromExpr, "TextFromExpr" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[15] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[16] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[0], ' ' );
    refalrts::reinit_char( context[4], 'R' );
    refalrts::reinit_char( context[7], 'e' );
    refalrts::reinit_char( context[9], 'u' );
    refalrts::reinit_name( context[8], TextFromExpr, "TextFromExpr" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[16] );
    refalrts::push_stack( context[15] );
    refalrts::push_stack( context[13] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[10], context[14] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & TextFromExpr/4 (/7 # HalfReuse/9 e.SubRange#1/5 )/8 e.Tail#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_HalfReuse<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    // closed e.SubRange#1 as range 5
    // closed e.Tail#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: ' '/0 HalfReuse: 'H'/4 HalfReuse: 'a'/7 HalfReuse: 'l'/9 } 'f'/10 'R'/11 'e'/12 'u'/13 's'/14 'e'/15 ':'/16 </17 & TextFromExpr/18 Tile{ AsIs: e.SubRange#1/5 } >/19 </20 Tile{ HalfReuse: & TextFromExpr/8 AsIs: e.Tail#1/2 AsIs: >/1 ]] }
    if( ! refalrts::alloc_char( context[10], 'f' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[11], 'R' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[12], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[13], 'u' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[14], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[15], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[16], ':' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[17] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[18], TextFromExpr, "TextFromExpr" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[19] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[20] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[0], ' ' );
    refalrts::reinit_char( context[4], 'H' );
    refalrts::reinit_char( context[7], 'a' );
    refalrts::reinit_char( context[9], 'l' );
    refalrts::reinit_name( context[8], TextFromExpr, "TextFromExpr" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[20] );
    refalrts::push_stack( context[19] );
    refalrts::push_stack( context[17] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[19], context[20] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[10], context[18] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & TextFromExpr/4 (/7 # LEFT_EDGE/9 )/8 e.Tail#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_LEFT_EDGE<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    // closed e.Tail#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: ' '/0 HalfReuse: '['/4 HalfReuse: '['/7 HalfReuse: </9 HalfReuse: & TextFromExpr/8 AsIs: e.Tail#1/2 AsIs: >/1 ]] }
    refalrts::reinit_char( context[0], ' ' );
    refalrts::reinit_char( context[4], '[' );
    refalrts::reinit_char( context[7], '[' );
    refalrts::reinit_open_call( context[9] );
    refalrts::reinit_name( context[8], TextFromExpr, "TextFromExpr" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[9] );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & TextFromExpr/4 (/7 # RIGHT_EDGE/9 )/8 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_RIGHT_EDGE<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  # RIGHT_EDGE/9 )/8 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: ' '/0 HalfReuse: ']'/4 HalfReuse: ']'/7 } Tile{ ]] }
    refalrts::reinit_char( context[0], ' ' );
    refalrts::reinit_char( context[4], ']' );
    refalrts::reinit_char( context[7], ']' );
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
    // </0 & TextFromExpr/4 # RemovedTile/5 e.Tail#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::ident_left(  & ident_RemovedTile<int>::name, context[2], context[3] );
    if( ! context[5] )
      continue;
    // closed e.Tail#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } ' '/6 '{'/7 'R'/8 'E'/9 'M'/10 'O'/11 'V'/12 'E'/13 'D'/14 ' '/15 'T'/16 'I'/17 'L'/18 'E'/19 '}'/20 Tile{ HalfReuse: ' '/0 HalfReuse: </4 HalfReuse: & TextFromExpr/5 AsIs: e.Tail#1/2 AsIs: >/1 ]] }
    if( ! refalrts::alloc_char( context[6], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[7], '{' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[8], 'R' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[9], 'E' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[10], 'M' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[11], 'O' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[12], 'V' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[13], 'E' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[14], 'D' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[15], ' ' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[16], 'T' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[17], 'I' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[18], 'L' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[19], 'E' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[20], '}' ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[0], ' ' );
    refalrts::reinit_open_call( context[4] );
    refalrts::reinit_name( context[5], TextFromExpr, "TextFromExpr" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[0];
    res = refalrts::splice_evar( res, context[6], context[20] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & TextFromExpr/4 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  </0 & TextFromExpr/4 >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult PrintVar(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & PrintVar/4 s.Mode#1/5 e.Index#1/2 s.Depth#1/6 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_right( context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Index#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  s.Mode#1/5 {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ HalfReuse: s.Mode1 #5/0 HalfReuse: '.'/4 } Tile{ AsIs: e.Index#1/2 } '#'/7 </8 & StrFromInt/9 Tile{ AsIs: s.Depth#1/6 AsIs: >/1 ]] }
  if( ! refalrts::alloc_char( context[7], '#' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[9], StrFromInt, "StrFromInt" ) )
    return refalrts::cNoMemory;
  refalrts::reinit_svar( context[0], context[5] );
  refalrts::reinit_char( context[4], '.' );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[6];
  res = refalrts::splice_evar( res, context[7], context[9] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[4], res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult Offset(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 7 elems
  refalrts::Iter context[7];
  refalrts::zeros( context, 7 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & Offset/4 # NoOffset/5 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = refalrts::ident_left(  & ident_NoOffset<int>::name, context[2], context[3] );
    if( ! context[5] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  # NoOffset/5 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: '/'/0 HalfReuse: '-'/4 } Tile{ ]] }
    refalrts::reinit_char( context[0], '/' );
    refalrts::reinit_char( context[4], '-' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & Offset/4 s.Offset#1/5 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } '/'/6 Tile{ AsIs: </0 Reuse: & StrFromInt/4 AsIs: s.Offset#1/5 AsIs: >/1 ]] }
  if( ! refalrts::alloc_char( context[6], '/' ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], StrFromInt, "StrFromInt" );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[6], context[6] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult lambda_CollectStrings_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & lambda_CollectStrings_0/4 (/7 e.Chars#2/5 )/8 e.Tail#2/2 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.Chars#2 as range 5
  // closed e.Tail#2 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TkString/4 } Tile{ AsIs: e.Chars#2/5 } Tile{ HalfReuse: )/7 } </9 Tile{ HalfReuse: & CollectStrings/8 AsIs: e.Tail#2/2 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[9] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_ident( context[4], & ident_TkString<int>::name );
  refalrts::reinit_close_bracket( context[7] );
  refalrts::reinit_name( context[8], CollectStrings, "CollectStrings" );
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

static refalrts::FnResult CollectStrings(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & CollectStrings/4 (/7 # TkChar/9 s.Value1#1/15 )/8 (/12 # TkChar/14 s.Value2#1/16 )/13 e.Tail#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_TkChar<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    context[10] = 0;
    context[11] = 0;
    context[12] = refalrts::brackets_left( context[10], context[11], context[2], context[3] );
    if( ! context[12] )
      continue;
    refalrts::bracket_pointers(context[12], context[13]);
    context[14] = refalrts::ident_left(  & ident_TkChar<int>::name, context[10], context[11] );
    if( ! context[14] )
      continue;
    // closed e.Tail#1 as range 2
    if( ! refalrts::svar_left( context[15], context[5], context[6] ) )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    if( ! refalrts::svar_left( context[16], context[10], context[11] ) )
      continue;
    if( ! refalrts::empty_seq( context[10], context[11] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  s.Value1#1/15 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 HalfReuse: </7 } Tile{ HalfReuse: & BuildString/8 AsIs: (/12 HalfReuse: s.Value11 #15/14 AsIs: s.Value2#1/16 AsIs: )/13 AsIs: e.Tail#1/2 AsIs: >/1 } Tile{ HalfReuse: & lambda_CollectStrings_0/9 } >/17 Tile{ ]] }
    if( ! refalrts::alloc_close_call( context[17] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], Fetch, "Fetch" );
    refalrts::reinit_open_call( context[7] );
    refalrts::reinit_name( context[8], BuildString, "BuildString" );
    refalrts::reinit_svar( context[14], context[15] );
    refalrts::reinit_name( context[9], lambda_CollectStrings_0, "lambda_CollectStrings_0" );
    refalrts::push_stack( context[17] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[7] );
    refalrts::link_brackets( context[12], context[13] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[17], context[17] );
    res = refalrts::splice_evar( res, context[9], context[9] );
    res = refalrts::splice_evar( res, context[8], context[1] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[7], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & CollectStrings/4 (/7 # Brackets/9 e.InBrackets#1/5 )/8 e.Tail#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_Brackets<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    // closed e.InBrackets#1 as range 5
    // closed e.Tail#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # Brackets/4 HalfReuse: </7 HalfReuse: & CollectStrings/9 AsIs: e.InBrackets#1/5 HalfReuse: >/8 } )/10 </11 & CollectStrings/12 Tile{ AsIs: e.Tail#1/2 } Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_close_bracket( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[12], CollectStrings, "CollectStrings" ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], & ident_Brackets<int>::name );
    refalrts::reinit_open_call( context[7] );
    refalrts::reinit_name( context[9], CollectStrings, "CollectStrings" );
    refalrts::reinit_close_call( context[8] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[11] );
    refalrts::link_brackets( context[0], context[10] );
    refalrts::push_stack( context[8] );
    refalrts::push_stack( context[7] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[10], context[12] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & CollectStrings/4 (/7 # CallBrackets/9 e.InBrackets#1/5 )/8 e.Tail#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_CallBrackets<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    // closed e.InBrackets#1 as range 5
    // closed e.Tail#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # CallBrackets/4 HalfReuse: </7 HalfReuse: & CollectStrings/9 AsIs: e.InBrackets#1/5 HalfReuse: >/8 } )/10 </11 & CollectStrings/12 Tile{ AsIs: e.Tail#1/2 } Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_close_bracket( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[12], CollectStrings, "CollectStrings" ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], & ident_CallBrackets<int>::name );
    refalrts::reinit_open_call( context[7] );
    refalrts::reinit_name( context[9], CollectStrings, "CollectStrings" );
    refalrts::reinit_close_call( context[8] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[11] );
    refalrts::link_brackets( context[0], context[10] );
    refalrts::push_stack( context[8] );
    refalrts::push_stack( context[7] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[10], context[12] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & CollectStrings/4 (/7 # ADT_Brackets/9 e.InBrackets#1/5 )/8 e.Tail#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = refalrts::ident_left(  & ident_ADT_Brackets<int>::name, context[5], context[6] );
    if( ! context[9] )
      continue;
    // closed e.InBrackets#1 as range 5
    // closed e.Tail#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # ADT_Brackets/4 HalfReuse: </7 HalfReuse: & CollectStrings/9 AsIs: e.InBrackets#1/5 HalfReuse: >/8 } )/10 </11 & CollectStrings/12 Tile{ AsIs: e.Tail#1/2 } Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_close_bracket( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[12], CollectStrings, "CollectStrings" ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], & ident_ADT_Brackets<int>::name );
    refalrts::reinit_open_call( context[7] );
    refalrts::reinit_name( context[9], CollectStrings, "CollectStrings" );
    refalrts::reinit_close_call( context[8] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[11] );
    refalrts::link_brackets( context[0], context[10] );
    refalrts::push_stack( context[8] );
    refalrts::push_stack( context[7] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[10], context[12] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & CollectStrings/4 t.OtherTerm#1/5 e.Tail#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
    if( ! context[6] )
      continue;
    // closed e.Tail#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: t.OtherTerm#1/5 } Tile{ AsIs: </0 AsIs: & CollectStrings/4 } Tile{ AsIs: e.Tail#1/2 } Tile{ AsIs: >/1 ]] }
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & CollectStrings/4 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  </0 & CollectStrings/4 >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

static refalrts::FnResult BuildString(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & BuildString/4 (/7 e.Chars#1/5 )/8 (/11 # TkChar/13 s.Value#1/14 )/12 e.Tail#1/2 >/1
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
    context[13] = refalrts::ident_left(  & ident_TkChar<int>::name, context[9], context[10] );
    if( ! context[13] )
      continue;
    // closed e.Chars#1 as range 5
    // closed e.Tail#1 as range 2
    if( ! refalrts::svar_left( context[14], context[9], context[10] ) )
      continue;
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  # TkChar/13 s.Value#1/14 )/12 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & BuildString/4 AsIs: (/7 AsIs: e.Chars#1/5 HalfReuse: s.Value1 #14/8 HalfReuse: )/11 } Tile{ AsIs: e.Tail#1/2 } Tile{ AsIs: >/1 ]] }
    refalrts::reinit_svar( context[8], context[14] );
    refalrts::reinit_close_bracket( context[11] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[11] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[2], context[3] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[11], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & BuildString/4 (/7 e.Chars#1/5 )/8 e.Tail#1/2 >/1
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.Chars#1 as range 5
  // closed e.Tail#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  </0 & BuildString/4 {REMOVED TILE}  {REMOVED TILE}  >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Chars#1/5 AsIs: )/8 } Tile{ AsIs: e.Tail#1/2 } Tile{ ]] }
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


//End of file
